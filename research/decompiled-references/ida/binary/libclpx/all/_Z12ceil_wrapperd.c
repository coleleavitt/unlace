__m128d __fastcall ceil_wrapper(__m128d a1)
{
  __m128d v1; // xmm1
  __m128d v2; // xmm2
  __m128d v3; // xmm1

  v1 = a1;
  if ( fabs(a1.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v2.m128d_f64[0] = (double)(int)a1.m128d_f64[0];
    v3 = _mm_and_pd(_mm_cmpgt_sd(a1, v2), (__m128d)0x3FF0000000000000uLL);
    v3.m128d_f64[0] = v3.m128d_f64[0] + v2.m128d_f64[0];
    return _mm_or_pd(v3, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, a1));
  }
  return v1;
}

