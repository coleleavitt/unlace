__int64 __fastcall sub_346E30(QT::QWidget **a1, unsigned __int8 a2, double a3, double a4)
{
  QT::QWidget *v5; // rdi
  char v6; // r13
  QT::QWidget *v8; // rdi
  __int64 v9[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v5 = a1[87];
  v10 = __readfsqword(0x28u);
  v6 = *((_BYTE *)v5 + 344);
  sub_33F9D0(v5, a2);
  QT::QWidget::setEnabled(a1[88], a2);
  if ( !a2 )
  {
    *(_OWORD *)v9 = -1;
    sub_346C60(a1, v9, NAN, a4);
    return v10 - __readfsqword(0x28u);
  }
  if ( v6 )
    return v10 - __readfsqword(0x28u);
  v8 = a1[87];
  if ( !v8 )
    return v10 - __readfsqword(0x28u);
  return sub_342790(v8, a2);
}
