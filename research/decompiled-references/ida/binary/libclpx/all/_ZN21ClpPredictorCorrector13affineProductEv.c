double __fastcall ClpPredictorCorrector::affineProduct(ClpPredictorCorrector *this)
{
  int v1; // eax
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rsi
  double result; // xmm0_8
  double v6; // xmm2_8
  double v7; // xmm4_8

  v1 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27);
  if ( v1 <= 0 )
    return 0.0;
  v2 = (unsigned int)(v1 - 1);
  v3 = 0;
  v4 = v2 + 1;
  result = 0.0;
  do
  {
    v6 = *(double *)(*((_QWORD *)this + 145) + 8 * v3);
    if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v3) & 8) != 0 )
      result = result
             + (*(double *)(*((_QWORD *)this + 143) + 8 * v3)
              - *(double *)(*((_QWORD *)this + 141) + 8 * v3)
              - *(double *)(*((_QWORD *)this + 94) + 8 * v3))
             * *(double *)(*((_QWORD *)this + 147) + 8 * v3)
             + *(double *)(*((_QWORD *)this + 147) + 8 * v3) * v6;
    if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v3) & 0x10) != 0 )
    {
      v7 = *(double *)(*((_QWORD *)this + 148) + 8 * v3);
      result = result
             + (-*(double *)(*((_QWORD *)this + 143) + 8 * v3)
              - *(double *)(*((_QWORD *)this + 140) + 8 * v3)
              + *(double *)(*((_QWORD *)this + 97) + 8 * v3))
             * v7
             - v6 * v7;
    }
    ++v3;
  }
  while ( v4 != v3 );
  return result;
}

