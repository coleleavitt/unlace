__int64 __fastcall ClpPESimplex::updatePrimalDegeneratesAvg(ClpPESimplex *this, int a2)
{
  double v2; // xmm1_8
  __m128d v3; // xmm0
  double v4; // xmm1_8
  __m128d v5; // xmm2
  __int64 result; // rax

  v2 = (double)a2 / (double)(*(_DWORD *)(*((_QWORD *)this + 12) + 308LL) + 1);
  v3.m128d_f64[0] = ((double)*(int *)this * v2 + (double)*((int *)this + 34)) * (1.0 - v2);
  v4 = v3.m128d_f64[0];
  if ( fabs(v3.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v5 = 0;
    v5.m128d_f64[0] = (double)(int)v3.m128d_f64[0];
    *(_QWORD *)&v4 = COERCE_UNSIGNED_INT64(
                       v5.m128d_f64[0]
                     - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v5, v3).m128d_f64[0] & 0x3FF0000000000000LL))
                   | *(_QWORD *)&v3.m128d_f64[0] & 0x8000000000000000LL;
  }
  result = (unsigned int)(int)v4;
  *((_DWORD *)this + 34) = result;
  return result;
}

