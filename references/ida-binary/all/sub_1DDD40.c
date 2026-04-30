__int64 __fastcall sub_1DDD40(__int64 a1)
{
  int v2; // eax
  QT::QWidget *v3; // rdi
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 96) != 1 )
  {
    *(_DWORD *)(a1 + 96) = 1;
    sub_1DDAE0(a1);
    v2 = *(_DWORD *)(a1 + 96);
    v3 = *(QT::QWidget **)(a1 + 48);
    if ( v2 )
      QT::QWidget::hide(v3);
    else
      QT::QWidget::show(v3);
    sub_462AA0(a1, 1);
    return sub_462B20(a1);
  }
  return result;
}
