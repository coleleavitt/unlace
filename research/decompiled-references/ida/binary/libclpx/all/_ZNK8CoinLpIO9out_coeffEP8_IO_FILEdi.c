int __fastcall CoinLpIO::out_coeff(CoinLpIO *this, _IO_FILE *stream, double a3, int a4)
{
  int result; // eax
  __m128d v6; // xmm1
  double v7; // xmm4_8
  double v8; // xmm3_8
  int Decimals; // eax
  __m128d v10; // xmm3
  __m128d v11; // xmm0
  __m128d v12; // xmm1
  char s[39]; // [rsp+11h] [rbp-27h] BYREF

  result = CoinLpIO::getEpsilon(this);
  v6.m128d_f64[0] = a3;
  if ( !a4 )
  {
    if ( a3 > fabs(a3 - 1.0) )
      return result;
    if ( a3 > fabs(a3 + 1.0) )
      return fwrite(" -", 1u, 2u, stream);
  }
  v7 = a3;
  if ( COERCE_DOUBLE(*(_QWORD *)&a3 & 0x7FFFFFFFFFFFFFFFLL) >= 4.503599627370496e15 )
  {
    v8 = a3 - a3;
    if ( a3 <= a3 - a3 )
      goto LABEL_4;
    return fprintf(stream, " %.0f", v7);
  }
  v10 = 0;
  v10.m128d_f64[0] = (double)(int)a3;
  *(_QWORD *)&v7 = COERCE_UNSIGNED_INT64(
                     v10.m128d_f64[0]
                   - COERCE_DOUBLE(
                       COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v10, v6).m128d_f64[0]))
                     & 0x3FF0000000000000LL))
                 | *(_QWORD *)&a3 & 0x8000000000000000LL;
  v8 = a3 - v7;
  if ( a3 > a3 - v7 )
    return fprintf(stream, " %.0f", v7);
LABEL_4:
  if ( v8 > 1.0 - a3 )
  {
    v11.m128d_f64[0] = a3 + 0.5;
    if ( fabs(a3 + 0.5) < 4.503599627370496e15 )
    {
      v12 = 0;
      v12.m128d_f64[0] = (double)(int)v11.m128d_f64[0];
      *(_QWORD *)&v11.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       v12.m128d_f64[0]
                                     - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v12, v11).m128d_f64[0] & 0x3FF0000000000000LL))
                                   | *(_QWORD *)&v11.m128d_f64[0] & 0x8000000000000000LL;
    }
    return fprintf(stream, " %.0f", v11.m128d_f64[0]);
  }
  else
  {
    Decimals = CoinLpIO::getDecimals(this);
    sprintf(s, " %%.%df", Decimals);
    return fprintf(stream, s, a3);
  }
}

