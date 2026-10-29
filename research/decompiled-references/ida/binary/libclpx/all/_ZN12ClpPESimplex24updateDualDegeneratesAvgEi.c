__int64 __fastcall ClpPESimplex::updateDualDegeneratesAvg(ClpPESimplex *this, int a2)
{
  int v2; // eax
  __m128d v3; // xmm1
  double v4; // xmm0_8
  __m128d v5; // xmm2
  __int64 result; // rax

  v2 = *(_DWORD *)(*((_QWORD *)this + 12) + 308LL) + 1;
  v3.m128d_f64[0] = (double)*((int *)this + 35) * (1.0 - (double)a2 / (double)v2)
                  + (double)a2 / (double)v2 * (double)*((int *)this + 6);
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
  *((_DWORD *)this + 35) = result;
  return result;
}

