__int64 __fastcall sub_513A70(__int64 a1, __m128d a2)
{
  const QT::QFont *v2; // rsi
  int v3; // eax
  double v4; // r14
  __m128d v5; // xmm1
  _BYTE v7[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = *(const QT::QFont **)(a1 + 32);
  v3 = *((_DWORD *)v2 + 8);
  v2 = (const QT::QFont *)((char *)v2 + 56);
  v4 = (double)(v3 + 1 - *((_DWORD *)v2 - 8));
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v7, v2);
  QT::QFontMetricsF::height((QT::QFontMetricsF *)v7);
  if ( fabs(a2.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v5.m128d_f64[0] = (double)(int)a2.m128d_f64[0];
    *(_QWORD *)&a2.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                    v5.m128d_f64[0]
                                  + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a2, v5).m128d_f64[0] & 0x3FF0000000000000LL))
                                | *(_QWORD *)&a2.m128d_f64[0] & 0x8000000000000000LL;
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v7);
  return (unsigned int)(int)(v4 / a2.m128d_f64[0]);
}
