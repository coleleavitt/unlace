unsigned __int64 __fastcall sub_39080(__int64 a1, __int64 a2, QT::QGraphicsItem *a3)
{
  unsigned __int64 v3; // xmm3_8
  unsigned __int64 v5; // rax
  __m128d v6; // xmm0
  __m128d v7; // xmm0
  __m128i v8; // xmm0
  __m128d v10; // [rsp+0h] [rbp-68h]
  unsigned __int64 v11; // [rsp+10h] [rbp-58h]
  unsigned __int64 v12; // [rsp+18h] [rbp-50h]
  __m128i v13; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 72);
  v14 = __readfsqword(0x28u);
  v5 = QT::QRandomGenerator::_fillRange((QT::QRandomGenerator *)(a1 + 104), nullptr, 2);
  v11 = *(_QWORD *)(a1 + 72);
  v6 = _mm_unpacklo_pd((__m128d)v11, (__m128d)v3);
  *(double *)&v12 = (double)(int)(v5 >> 11);
  v10 = _mm_add_pd(v6, v6);
  v7 = 0;
  v7.m128d_f64[0] = (double)(int)(QT::QRandomGenerator::_fillRange((QT::QRandomGenerator *)(a1 + 104), nullptr, 2) >> 11);
  v8 = (__m128i)_mm_sub_pd(
                  _mm_mul_pd(
                    _mm_mul_pd(
                      _mm_unpacklo_pd(v7, (__m128d)v12),
                      _mm_unpacklo_pd((__m128d)0x3CA0000000000000uLL, (__m128d)0x3CA0000000000000uLL)),
                    v10),
                  _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)(a1 + 72), (__m128d)v11));
  v13 = v8;
  if ( a3 )
  {
    sub_28850(a3);
    v13 = (__m128i)_mm_add_pd((__m128d)_mm_unpacklo_epi64(v8, (__m128i)v11), (__m128d)v13);
  }
  sub_28900(a2, (__m128d *)&v13);
  return v14 - __readfsqword(0x28u);
}
