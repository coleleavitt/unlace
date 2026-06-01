unsigned __int64 __fastcall sub_2B85A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  int v5; // edx
  __m128d v6; // xmm3
  __m128d v7; // xmm1
  double v8; // xmm4_8
  __m128d v9; // xmm5
  __m128d v10; // xmm0
  __m128i v11; // xmm0
  double v12; // xmm0_8
  double v13; // xmm3_8
  double v14; // xmm5_8
  __m128d v15; // xmm5
  double v16; // xmm3_8
  __m128d v17; // xmm0
  double v18; // xmm3_8
  __m128d v19; // xmm4
  __m128d v20; // xmm0
  unsigned __int64 v22; // [rsp+0h] [rbp-38h] BYREF
  __m128i v23; // [rsp+8h] [rbp-30h]
  unsigned __int64 v24; // [rsp+18h] [rbp-20h]
  unsigned __int64 v25; // [rsp+28h] [rbp-10h]

  v6 = 0;
  v25 = __readfsqword(0x28u);
  v7 = 0;
  v5 = _mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)a5, 229));
  v6.m128d_f64[0] = (double)v5;
  v7.m128d_f64[0] = (double)(int)a5;
  if ( (_DWORD)a4 == (_DWORD)a5 )
  {
    if ( v5 > SHIDWORD(a4) )
      v6.m128d_f64[0] = v6.m128d_f64[0] - 10.0;
    else
      v6.m128d_f64[0] = v6.m128d_f64[0] + 10.0;
    v19 = (__m128d)0x4010000000000000uLL;
    v20.m128d_f64[1] = v7.m128d_f64[1];
    v20.m128d_f64[0] = v7.m128d_f64[0] - 4.0;
    v19.m128d_f64[0] = v7.m128d_f64[0] + 4.0;
    v11 = _mm_unpacklo_epi64(_mm_cvttpd_epi32(_mm_unpacklo_pd(v20, v6)), _mm_cvttpd_epi32(_mm_unpacklo_pd(v19, v6)));
  }
  else
  {
    if ( v5 == HIDWORD(a4) )
    {
      if ( (int)a4 < (int)a5 )
        v7.m128d_f64[0] = v7.m128d_f64[0] - 10.0;
      else
        v7.m128d_f64[0] = v7.m128d_f64[0] + 10.0;
      v8 = 4.0;
      v9.m128d_f64[1] = v6.m128d_f64[1];
      v9.m128d_f64[0] = v6.m128d_f64[0] - 4.0;
      v10 = _mm_unpacklo_pd(v7, v9);
    }
    else
    {
      v12 = (double)(v5 - HIDWORD(a4)) / (double)((int)a5 - (int)a4);
      v13 = v6.m128d_f64[0] - v12 * v7.m128d_f64[0];
      v14 = 10.0 / sqrt(v12 * v12 + 1.0);
      if ( (int)a4 < (int)a5 )
        v7.m128d_f64[0] = v7.m128d_f64[0] - v14;
      else
        v7.m128d_f64[0] = v7.m128d_f64[0] + v14;
      v15 = (__m128d)0xBFF0000000000000LL;
      v15.m128d_f64[0] = -1.0 / v12;
      v8 = v12 * v7.m128d_f64[0] + v13 - v7.m128d_f64[0] * (-1.0 / v12);
      v16 = 4.0 / sqrt(v15.m128d_f64[0] * v15.m128d_f64[0] + 1.0);
      v17.m128d_f64[1] = v7.m128d_f64[1];
      v17.m128d_f64[0] = v7.m128d_f64[0] - v16;
      v7.m128d_f64[0] = v7.m128d_f64[0] + v16;
      v18 = v15.m128d_f64[0] * v17.m128d_f64[0];
      v15.m128d_f64[0] = v15.m128d_f64[0] * v7.m128d_f64[0];
      v10 = _mm_unpacklo_pd(v17, (__m128d)COERCE_UNSIGNED_INT64(v18 + v8));
      v6 = v15;
    }
    v6.m128d_f64[0] = v6.m128d_f64[0] + v8;
    v11 = _mm_unpacklo_epi64(_mm_cvttpd_epi32(v10), _mm_cvttpd_epi32(_mm_unpacklo_pd(v7, v6)));
  }
  v22 = a5;
  v24 = a5;
  v23 = v11;
  ((void (__fastcall *)(__int64, unsigned __int64 *, __int64, _QWORD))QT::QPainter::drawPolygon)(a2, &v22, 4, 0);
  return v25 - __readfsqword(0x28u);
}
