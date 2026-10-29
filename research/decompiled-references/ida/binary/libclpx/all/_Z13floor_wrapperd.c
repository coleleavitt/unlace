__m128d __fastcall floor_wrapper(__m128d a1)
{
  __m128d v1; // xmm1
  __m128d v2; // xmm2

  v1 = a1;
  if ( fabs(a1.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v2 = 0;
    v2.m128d_f64[0] = (double)(int)a1.m128d_f64[0];
    v2.m128d_f64[0] = v2.m128d_f64[0]
                    - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v2, a1).m128d_f64[0] & 0x3FF0000000000000LL);
    return _mm_or_pd(v2, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, a1));
  }
  return v1;
}

