double __fastcall ClpDualRowDantzig::updateWeights(
        ClpDualRowDantzig *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi

  ClpFactorization::updateColumnFT(*(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL), a3, a5);
  v6 = *((_QWORD *)a5 + 1);
  v7 = *(int *)(*((_QWORD *)this + 1) + 1168LL);
  if ( !*((_BYTE *)a5 + 28) )
    return *(double *)(v6 + 8 * v7);
  v8 = *((_DWORD *)a5 + 4);
  if ( v8 <= 0 )
    return 0.0;
  if ( (_DWORD)v7 != **(_DWORD **)a5 )
  {
    v9 = (unsigned int)(v8 - 1);
    v10 = 1;
    v11 = v9 + 1;
    while ( v11 != v10 )
    {
      if ( *(_DWORD *)(*(_QWORD *)a5 + 4 * (v10 + 1) - 4) == (_DWORD)v7 )
      {
        v6 += 8 * v10;
        return *(double *)v6;
      }
      ++v10;
    }
    return 0.0;
  }
  return *(double *)v6;
}

