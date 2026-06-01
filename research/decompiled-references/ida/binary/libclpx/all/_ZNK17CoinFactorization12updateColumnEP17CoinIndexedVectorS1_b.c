__int64 __fastcall CoinFactorization::updateColumn(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        char a4)
{
  int *v6; // r12
  __int64 v7; // rsi
  __int64 v10; // r10
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // xmm0_8
  __int64 v17; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // rdi
  __int64 v22; // xmm0_8
  __int64 v23; // rdi

  v6 = *(int **)a2;
  v7 = *((_QWORD *)this + 13);
  if ( *((int *)this + 28) <= -2 )
    v7 = 0;
  if ( a4 )
  {
    v11 = *((_DWORD *)a2 + 4);
    goto LABEL_10;
  }
  v10 = *((_QWORD *)a2 + 1);
  v11 = *((_DWORD *)a3 + 4);
  v12 = *(_QWORD *)a3;
  v13 = *((_QWORD *)a3 + 1);
  if ( *((_BYTE *)a3 + 28) )
  {
    if ( v11 > 0 )
    {
      v14 = 0;
      do
      {
        v15 = *(int *)(v12 + v14);
        v16 = *(_QWORD *)(v13 + 2 * v14);
        *(_QWORD *)(v13 + 2 * v14) = 0;
        v17 = *(int *)(v7 + 4 * v15);
        *(_QWORD *)(v10 + 8 * v17) = v16;
        v6[v14 / 4] = v17;
        v14 += 4LL;
      }
      while ( 4LL * (unsigned int)(v11 - 1) + 4 != v14 );
      *((_DWORD *)a2 + 4) = v11;
      goto LABEL_10;
    }
  }
  else if ( v11 > 0 )
  {
    v19 = 0;
    do
    {
      v20 = *(int *)(v12 + v19);
      v21 = (__int64 *)(v13 + 8 * v20);
      v22 = *v21;
      *v21 = 0;
      v23 = *(int *)(v7 + 4 * v20);
      *(_QWORD *)(v10 + 8 * v23) = v22;
      v6[v19 / 4] = v23;
      v19 += 4LL;
    }
    while ( 4LL * (unsigned int)(v11 - 1) + 4 != v19 );
    *((_DWORD *)a2 + 4) = v11;
    goto LABEL_10;
  }
  *((_DWORD *)a2 + 4) = v11;
  if ( !v11 )
    *((_BYTE *)a2 + 28) = 0;
LABEL_10:
  ++*((_DWORD *)this + 248);
  *((double *)this + 116) = (double)v11 + *((double *)this + 116);
  CoinFactorization::updateColumnL(this, a2, v6);
  *((double *)this + 117) = (double)*((int *)a2 + 4) + *((double *)this + 117);
  CoinFactorization::updateColumnR(this, a2);
  *((double *)this + 118) = (double)*((int *)a2 + 4) + *((double *)this + 118);
  CoinFactorization::updateColumnU(this, a2, v6);
  if ( *((_BYTE *)this + 784) )
  {
    if ( a4 )
      return *((unsigned int *)a2 + 4);
  }
  else
  {
    CoinFactorization::updateColumnPFI(this, a2);
    if ( a4 )
      return *((unsigned int *)a2 + 4);
  }
  CoinFactorization::permuteBack(this, a2, a3);
  return *((unsigned int *)a3 + 4);
}

