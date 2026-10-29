__int64 __fastcall sub_1DDC50(__int64 a1, unsigned int a2)
{
  int v3; // eax
  QT::QWidget *v4; // rdi

  *(_DWORD *)(a1 + 96) = a2;
  sub_1DDAE0(a1);
  v3 = *(_DWORD *)(a1 + 96);
  v4 = *(QT::QWidget **)(a1 + 48);
  if ( v3 )
    QT::QWidget::hide(v4);
  else
    QT::QWidget::show(v4);
  sub_462AA0(a1, a2);
  if ( a2 )
    return sub_462B20(a1);
  else
    return sub_462B00(a1);
}
