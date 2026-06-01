__int64 __fastcall sub_51C0C0(QT::QWidget *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  int v3; // r12d
  __m128d v4; // xmm0
  __m128d v5; // xmm1
  double v7; // [rsp+8h] [rbp-20h]

  v7 = sub_47BE20(a1);
  if ( !a2[1] )
    return 5;
  v2 = 0;
  v3 = 5;
  do
  {
    v4 = 0;
    v4.m128d_f64[0] = (double)(int)QT::QPixmap::width(*(QT::QPixmap **)(*a2 + 8 * v2)) / v7;
    if ( fabs(v4.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v5.m128d_f64[0] = (double)(int)v4.m128d_f64[0];
      *(_QWORD *)&v4.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                      v5.m128d_f64[0]
                                    + COERCE_DOUBLE(
                                        COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v4, v5).m128d_f64[0]))
                                      & 0x3FF0000000000000LL))
                                  | *(_QWORD *)&v4.m128d_f64[0] & 0x8000000000000000LL;
    }
    ++v2;
    v3 = (int)((double)v3 + v4.m128d_f64[0] + 1.0);
  }
  while ( v2 < a2[1] );
  return (unsigned int)v3;
}
