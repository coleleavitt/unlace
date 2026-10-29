__int64 __fastcall ClpPlusMinusOneMatrix::subsetTransposeTimes(
        ClpPlusMinusOneMatrix *this,
        const ClpSimplex *a2,
        const CoinIndexedVector *a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdi
  __int64 v14; // r11
  __int64 v15; // rsi
  __int64 v16; // r8
  int v17; // r15d
  int v18; // r12d
  __int64 v19; // r13
  __int64 v20; // rbp
  double v21; // xmm0_8
  unsigned __int64 v22; // rbp
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rbp
  unsigned __int64 v26; // rbp
  __int64 v27; // rcx

  CoinIndexedVector::clear(a5);
  result = *((unsigned int *)a4 + 4);
  v10 = *((_QWORD *)a3 + 1);
  v11 = *(_QWORD *)a4;
  v12 = *((_QWORD *)a5 + 1);
  *((_BYTE *)a5 + 28) = 1;
  if ( (int)result > 0 )
  {
    v13 = *((_QWORD *)this + 13);
    v14 = *((_QWORD *)this + 14);
    v15 = 0;
    v16 = (unsigned int)(result - 1) + 1LL;
    do
    {
      result = *(int *)(v11 + 4 * v15);
      v17 = *(_DWORD *)(v13 + 4 * result);
      v18 = *(_DWORD *)(v14 + 4 * result);
      v19 = 4 * result;
      if ( v17 >= v18 )
      {
        v18 = *(_DWORD *)(v13 + 4 * result);
        v21 = 0.0;
      }
      else
      {
        v20 = *((_QWORD *)this + 15);
        v21 = 0.0;
        result = v20 + 4LL * v17;
        v22 = v20 + 4 * (v17 + (unsigned __int64)(unsigned int)(v18 - 1 - v17)) + 4;
        do
        {
          v23 = *(int *)result;
          result += 4;
          v21 = v21 + *(double *)(v10 + 8 * v23);
        }
        while ( v22 != result );
      }
      v24 = *(_DWORD *)(v13 + v19 + 4);
      if ( v24 > v18 )
      {
        v25 = *((_QWORD *)this + 15);
        result = v25 + 4LL * v18;
        v26 = v25 + 4 * (v18 + (unsigned __int64)(unsigned int)(v24 - 1 - v18)) + 4;
        do
        {
          v27 = *(int *)result;
          result += 4;
          v21 = v21 - *(double *)(v10 + 8 * v27);
        }
        while ( v26 != result );
      }
      *(double *)(v12 + 8 * v15++) = v21;
    }
    while ( v16 != v15 );
  }
  return result;
}

