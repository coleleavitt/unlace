__int64 __fastcall ClpPackedMatrix::canCombine(
        ClpPackedMatrix *this,
        const ClpSimplex *a2,
        const CoinIndexedVector *a3)
{
  int v3; // eax
  __int64 v4; // r8
  double v5; // xmm2_8
  __int64 v6; // xmm0_8
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 26);
  v4 = *((int *)this + 24);
  if ( (unsigned __int64)(8 * v4) <= 0xF4240 )
    goto LABEL_4;
  if ( (int)v4 > 10 * v3 )
  {
    v5 = 0.08999999991;
    v6 = 0x3FB99999992BA61ALL;
    goto LABEL_5;
  }
  if ( (int)v4 <= 4 * v3 )
  {
    if ( (int)v4 > 2 * v3 )
    {
      v5 = 0.1800000000009;
      v6 = 0x3FC99999999A2656LL;
      goto LABEL_5;
    }
LABEL_4:
    v5 = 0.27;
    v6 = 0x3FD3333333333333LL;
    goto LABEL_5;
  }
  v5 = 0.135;
  v6 = 0x3FC3333333333333LL;
LABEL_5:
  if ( *((_BYTE *)a3 + 28) )
    v5 = *(double *)&v6;
  if ( *((_QWORD *)this + 14) )
    v5 = v5 * 0.5;
  if ( (double)*((int *)a3 + 4) > (double)v3 * v5 )
    return ((unsigned __int8)(*((_DWORD *)this + 25) >> 1) ^ 1) & 1;
  result = 0;
  if ( !*((_QWORD *)a2 + 25) )
    return ((unsigned __int8)(*((_DWORD *)this + 25) >> 1) ^ 1) & 1;
  return result;
}

