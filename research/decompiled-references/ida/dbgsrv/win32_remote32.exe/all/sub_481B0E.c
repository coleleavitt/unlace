/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481B0E
// Address: 0x00481B0E

//----- (00481B0E) --------------------------------------------------------
double __usercall sub_481B0E@<st0>(__m128d a1@<xmm0>, double a2)
{
  int i; // edx
  __m128i v3; // xmm5
  __m128i v4; // xmm2
  __m128d v5; // xmm0
  int v6; // eax
  __m128d v7; // xmm4
  __m128d v8; // xmm6
  __m128d v9; // xmm0
  __m128d v10; // xmm6
  __m128d v11; // xmm7
  __m128d v12; // xmm4
  unsigned int v13; // ecx
  int v14; // ecx
  __m128d v15; // xmm6
  int v16; // edx
  __m128d v17; // xmm3
  __m128d v18; // xmm7
  double v19; // xmm2_8
  __m128d v20; // xmm0
  __m128d v22; // xmm0
  __m128i v23; // xmm1
  int v24; // edx
  double v25; // [esp+10h] [ebp-Ch] BYREF

  for ( i = 0; ; i = -52 )
  {
    v3 = (__m128i)a1;
    v4.m128i_i64[1] = 0x3FDBC00000000000LL;
    v5 = _mm_or_pd(_mm_and_pd(_mm_unpacklo_pd(a1, a1), (__m128d)xmmword_4AA430), (__m128d)xmmword_4AA4A0);
    v6 = _mm_extract_epi16((__m128i)_mm_add_pd((__m128d)xmmword_4AA450, v5), 0) & 0x7F0;
    v7 = *(__m128d *)((char *)&xmmword_4AAA30 + v6);
    v11 = *(__m128d *)((char *)&xmmword_4AA620 + v6);
    v8 = _mm_and_pd((__m128d)xmmword_4AA460, v5);
    v9 = _mm_sub_pd(v5, v8);
    v10 = _mm_sub_pd(_mm_mul_pd(v8, v7), (__m128d)xmmword_4AA440);
    v11.m128d_f64[0] = v11.m128d_f64[0] + v10.m128d_f64[0];
    v12 = _mm_mul_pd(v9, v7);
    a1 = _mm_add_pd(v12, v10);
    v13 = (_mm_extract_epi16(_mm_srli_epi64(v3, 0x34u), 0) & 0xFFF) - 1;
    if ( v13 <= 0x7FD )
      break;
    v22.m128d_f64[0] = a2;
    v23 = (__m128i)_mm_cmpeq_sd((__m128d)xmmword_4AA4B0, v22);
    if ( _mm_extract_epi16(v23, 0) )
    {
      *(double *)v23.m128i_i64 = -INFINITY;
      v24 = 8;
LABEL_16:
      v25 = *(double *)v23.m128i_i64;
      sub_478638(&a2, &a2, &v25, v24);
      return v25;
    }
    if ( v13 != -1 )
    {
      if ( v13 > 0x7FE )
      {
        if ( (((_WORD)v13 + 1) & 0x7FFu) >= 0x7FF
          && (*(double *)v4.m128i_i64 = a2,
              _mm_cvtsi128_si32(_mm_srli_epi64(v4, 0x20u)) & 0xFFFFF | _mm_cvtsi128_si32(v4)) )
        {
          v24 = 1001;
        }
        else
        {
          *(double *)v23.m128i_i64 = 0.0 / 0.0;
          v24 = 9;
        }
      }
      else
      {
        a1.m128d_f64[0] = a2;
        v23.m128i_i64[0] = 0xFFFFFFFFFFFFFLL;
        if ( _mm_extract_epi16(
               (__m128i)_mm_cmpeq_sd(
                          (__m128d)xmmword_4AA4A0,
                          _mm_or_pd(_mm_and_pd(a1, (__m128d)xmmword_4AA430), (__m128d)xmmword_4AA4A0)),
               0) )
        {
          return INFINITY;
        }
        v24 = 1001;
      }
      goto LABEL_16;
    }
    a1.m128d_f64[0] = a2 * 4.503599627370496e15;
  }
  v14 = i + v13 - 1022;
  v10.m128d_f64[0] = (double)v14;
  v15 = _mm_unpacklo_pd(v10, v10);
  v16 = 0;
  if ( !((v14 << 10) + v6) )
    v16 = 1;
  v17 = _mm_mul_pd(a1, a1);
  v18 = _mm_add_pd(
          _mm_add_pd(v11, _mm_mul_pd(v15, (__m128d)xmmword_4AA470)),
          _mm_and_pd(v12, (__m128d)xmmword_4AA480[v16]));
  v17.m128d_f64[0] = v17.m128d_f64[0] * v17.m128d_f64[0] * a1.m128d_f64[0];
  v19 = 0.001616102407499711 * a1.m128d_f64[0];
  v20 = _mm_mul_pd(
          _mm_add_pd(
            _mm_mul_pd(_mm_add_pd(_mm_mul_pd((__m128d)xmmword_4AA4F0, a1), (__m128d)xmmword_4AA500), a1),
            (__m128d)xmmword_4AA510),
          v17);
  return _mm_unpackhi_pd(v20, v20).m128d_f64[0]
       + v20.m128d_f64[0]
       + v19
       + _mm_unpackhi_pd(v18, v18).m128d_f64[0]
       + v18.m128d_f64[0];
}
// 481B0E: too many cbuild loops
// 4AA430: using guessed type __int128 xmmword_4AA430;
// 4AA440: using guessed type __int128 xmmword_4AA440;
// 4AA450: using guessed type __int128 xmmword_4AA450;
// 4AA460: using guessed type __int128 xmmword_4AA460;
// 4AA470: using guessed type __int128 xmmword_4AA470;
// 4AA480: using guessed type __int128 xmmword_4AA480[];
// 4AA4A0: using guessed type __int128 xmmword_4AA4A0;
// 4AA4B0: using guessed type __int128 xmmword_4AA4B0;
// 4AA4F0: using guessed type __int128 xmmword_4AA4F0;
// 4AA500: using guessed type __int128 xmmword_4AA500;
// 4AA510: using guessed type __int128 xmmword_4AA510;
// 4AA620: using guessed type __int128 xmmword_4AA620;
// 4AAA30: using guessed type __int128 xmmword_4AAA30;
