__int64 __fastcall ClpNetworkMatrix::subsetTransposeTimes(
        ClpNetworkMatrix *this,
        const ClpSimplex *a2,
        const CoinIndexedVector *a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r10
  double v21; // xmm0_8
  __int64 v22; // rax
  __int64 v23; // rcx

  CoinIndexedVector::clear(a5);
  v9 = *((_QWORD *)a3 + 1);
  result = *((unsigned int *)a4 + 4);
  v11 = *(_QWORD *)a4;
  *((_BYTE *)a5 + 28) = 1;
  v12 = *((_QWORD *)a5 + 1);
  if ( *((_BYTE *)this + 120) )
  {
    if ( (int)result > 0 )
    {
      v13 = *((_QWORD *)this + 13);
      v14 = 0;
      v15 = (unsigned int)(result - 1) + 1LL;
      do
      {
        v16 = 2 * *(_DWORD *)(v11 + 4 * v14);
        v17 = *(int *)(v13 + 4 * v16);
        result = *(int *)(v13 + 4 * v16 + 4);
        *(double *)(v12 + 8 * v14++) = 0.0 - *(double *)(v9 + 8 * v17) + *(double *)(v9 + 8 * result);
      }
      while ( v15 != v14 );
    }
  }
  else if ( (int)result > 0 )
  {
    v18 = *((_QWORD *)this + 13);
    v19 = 0;
    v20 = (unsigned int)(result - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v21 = 0.0;
        v22 = 2 * *(_DWORD *)(v11 + 4 * v19);
        v23 = *(int *)(v18 + 4 * v22);
        result = *(int *)(v18 + 4 * v22 + 4);
        if ( (int)v23 >= 0 )
          v21 = 0.0 - *(double *)(v9 + 8 * v23);
        if ( (int)result < 0 )
          break;
        *(double *)(v12 + 8 * v19++) = v21 + *(double *)(v9 + 8 * result);
        if ( v19 == v20 )
          return result;
      }
      *(double *)(v12 + 8 * v19++) = v21;
    }
    while ( v20 != v19 );
  }
  return result;
}

