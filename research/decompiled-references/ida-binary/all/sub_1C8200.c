unsigned __int64 __fastcall sub_1C8200(__m128i *a1, __int64 a2, __m128d a3)
{
  __int64 v3; // rax
  __m128d v4; // xmm2
  __m128d v5; // xmm1
  __m128d v6; // xmm2
  __m128d v7; // xmm1
  __m128d v8; // xmm0
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  a1[5].m128i_i64[1] = *(_QWORD *)&a3.m128d_f64[0];
  QT::QFont::operator=(&a1[4], *(_QWORD *)(a2 + 32) + 56LL);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)&v10, (const QT::QFont *)&a1[4]);
  v3 = a1[5].m128i_i64[0];
  a1[5].m128i_i64[0] = v10;
  v10 = v3;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)&v10);
  QT::QFont::pointSizeF((QT::QFont *)&a1[4]);
  a1[8].m128i_i64[0] = *(_QWORD *)&a3.m128d_f64[0];
  a3.m128d_f64[0] = QT::QFontMetricsF::horizontalAdvance(&a1[5], 88);
  a1[8].m128i_i64[1] = *(_QWORD *)&a3.m128d_f64[0];
  QT::QFontMetricsF::height((QT::QFontMetricsF *)&a1[5]);
  a3.m128d_f64[0] = a3.m128d_f64[0] + *(double *)&qword_8CB470 + unk_8CB468;
  v4 = a3;
  if ( fabs(a3.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v5.m128d_f64[0] = (double)(int)a3.m128d_f64[0];
    v6 = _mm_and_pd(_mm_cmpgt_sd(a3, v5), (__m128d)0x3FF0000000000000uLL);
    v6.m128d_f64[0] = v6.m128d_f64[0] + v5.m128d_f64[0];
    v4 = _mm_or_pd(v6, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, a3));
  }
  a1[9] = (__m128i)_mm_unpacklo_pd(a3, v4);
  v7 = (__m128d)a1[5].m128i_u64[1];
  if ( v7.m128d_f64[0] == 1.0 )
  {
    a1[6] = _mm_loadu_si128(a1 + 8);
    v8 = (__m128d)_mm_loadu_si128(a1 + 9);
  }
  else
  {
    a3.m128d_f64[0] = a3.m128d_f64[0] * v7.m128d_f64[0];
    v4.m128d_f64[0] = v4.m128d_f64[0] * v7.m128d_f64[0];
    v8 = _mm_unpacklo_pd(a3, v4);
    a1[6] = (__m128i)_mm_mul_pd(_mm_unpacklo_pd(v7, v7), (__m128d)a1[8]);
  }
  a1[7] = (__m128i)v8;
  return v11 - __readfsqword(0x28u);
}
