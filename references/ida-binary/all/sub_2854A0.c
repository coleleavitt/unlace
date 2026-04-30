unsigned __int64 __fastcall sub_2854A0(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // ebx
  QT::QAbstractSlider *v8; // rax

  v5 = sub_284860(a1, *(__int16 *)(a3 + 6));
  v6 = 0;
  if ( v5 )
  {
    sub_178260(a1, v5, *(__int16 *)(a3 + 4), a2);
    v7 = (int)round(a4);
    v8 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(*(QT::QAbstractScrollArea **)(a1 + 16));
    v6 = v7 - QT::QAbstractSlider::value(v8);
  }
  return ((unsigned __int64)(unsigned int)(int)((double)*(__int16 *)(a3 + 6) * *(double *)(a2 + 120)) << 32) | v6;
}
