unsigned __int64 __fastcall sub_3404D0(__int64 a1, __int64 a2, int a3, QT::QPixmap *a4)
{
  bool v4; // zf
  double v6; // xmm0_8
  double v8; // [rsp+0h] [rbp-48h] BYREF
  double v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v4 = *(_BYTE *)(a1 + 345) == 0;
  v10 = __readfsqword(0x28u);
  if ( v4 )
  {
    v6 = (double)(a3 - (int)QT::QPixmap::width(a4) / 2);
    if ( *(_BYTE *)(a1 + 345) )
      goto LABEL_3;
LABEL_6:
    v8 = v6;
    v9 = 0.0;
    QT::QPainter::drawPixmap(a2, &v8, a4);
    return v10 - __readfsqword(0x28u);
  }
  v6 = (double)(a3 - (int)QT::QPixmap::height(a4) / 2);
  if ( !*(_BYTE *)(a1 + 345) )
    goto LABEL_6;
LABEL_3:
  v9 = v6;
  v8 = 0.0;
  QT::QPainter::drawPixmap(a2, &v8, a4);
  return v10 - __readfsqword(0x28u);
}
