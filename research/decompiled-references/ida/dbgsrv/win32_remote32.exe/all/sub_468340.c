/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_468340
// Address: 0x00468340

//----- (00468340) --------------------------------------------------------
double __cdecl sub_468340(const __m128i a1)
{
  int v1; // eax
  bool v2; // zf
  __m128i v3; // xmm7
  __m128d v4; // xmm0
  int v5; // eax
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  __int64 v8; // xmm1_8
  __m128d v10; // xmm1
  __m128d v11; // xmm3
  double v12; // xmm0_8
  char v13; // [esp+8h] [ebp-8h]

  if ( !dword_4B7FB4 )
    return sub_47883C(*(double *)a1.m128i_i64);
  v1 = _mm_getcsr() & 0x7F80;
  v2 = v1 == 8064;
  if ( v1 == 8064 )
    v2 = (v13 & 0x7F) == 127;
  if ( !v2 )
    return sub_47883C(*(double *)a1.m128i_i64);
  v3 = _mm_loadl_epi64(&a1);
  v4 = (__m128d)_mm_srli_epi64(v3, 0x34u);
  v5 = _mm_cvtsi128_si32((__m128i)v4);
  v6 = _mm_sub_epi32((__m128i)xmmword_4A4F80, (__m128i)_mm_and_pd(v4, (__m128d)xmmword_4A4FA0));
  v7 = _mm_srl_epi64(v3, v6);
  if ( (v5 & 0x800) != 0 )
  {
    if ( v5 >= 3071 )
    {
      v8 = v7.m128i_i64[0] << v6.m128i_i8[0];
      if ( v5 <= 3122 )
      {
        a1.m128i_i64[0] = v8;
        return *(double *)&v8;
      }
      return *(double *)a1.m128i_i64;
    }
    return -0.0;
  }
  else
  {
    v10 = (__m128d)_mm_sll_epi64(v7, v6);
    v11 = (__m128d)_mm_loadl_epi64(&a1);
    v12 = _mm_cmpnle_pd(v11, v10).m128d_f64[0];
    if ( v5 < 1023 )
    {
      a1.m128i_i64[0] = *(_QWORD *)&_mm_cmpnle_pd(v11, (__m128d)xmmword_4A4F90).m128d_f64[0] & 0x3FF0000000000000LL;
      return *(double *)a1.m128i_i64;
    }
    else
    {
      if ( v5 > 1074 )
        return *(double *)a1.m128i_i64;
      *(double *)a1.m128i_i64 = v10.m128d_f64[0] + COERCE_DOUBLE(*(_QWORD *)&v12 & 0x3FF0000000000000LL);
      return *(double *)a1.m128i_i64;
    }
  }
}
// 46836C: variable 'v13' is possibly undefined
// 4A4F80: using guessed type __int128 xmmword_4A4F80;
// 4A4F90: using guessed type __int128 xmmword_4A4F90;
// 4A4FA0: using guessed type __int128 xmmword_4A4FA0;
// 4B7FB4: using guessed type int dword_4B7FB4;
