#include <stdio.h>
void display_num(int);///宣告declare

int main()
{
    display_num(5);///使用、呼叫它
}

void display_num(int a)///定義函式的細節
{
    printf("你丟給display_num的參數引數是: %d\n", a);
    return;
}
