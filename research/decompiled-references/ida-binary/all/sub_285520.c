__int64 __fastcall sub_285520(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r13
  QT::QAbstractSlider *v8; // rax
  __int64 v9; // rdx
  double v11; // [rsp+8h] [rbp-30h]

  v4 = a3[1];
  v11 = *(double *)(a2 + 120);
  v5 = sub_284860(a1, -1);
  if ( v5 )
  {
    v6 = v5;
    v7 = (unsigned int)(int)round((double)v4 / v11);
    v8 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(*(QT::QAbstractScrollArea **)(a1 + 16));
    QT::QAbstractSlider::value(v8);
    v9 = (unsigned __int16)sub_1784C0(a1, v6, *a3, a2, 0);
  }
  else
  {
    v7 = 0xFFFFFFFFLL;
    v9 = 0xFFFF;
  }
  return (v7 << 48) | (v9 << 32) | 0xFFFFFFFFLL;
}
