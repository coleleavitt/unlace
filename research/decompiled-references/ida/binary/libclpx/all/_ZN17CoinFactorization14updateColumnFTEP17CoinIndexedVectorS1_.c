__int64 __fastcall CoinFactorization::updateColumnFT(CoinFactorization *this, int **a2, CoinIndexedVector *a3)
{
  int *v6; // r12
  int v7; // esi
  bool v8; // cc
  __int64 v9; // rdi
  char v10; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  int *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r10
  int v16; // r11d
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // xmm0_8
  __int64 v21; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // r10
  __int64 v26; // xmm0_8
  __int64 v27; // r10

  v6 = *a2;
  v7 = *((_DWORD *)a3 + 4);
  v8 = *((_DWORD *)this + 28) <= -2;
  v9 = *((_QWORD *)this + 13);
  v10 = *((_BYTE *)this + 784);
  v11 = *((_QWORD *)this + 81);
  v12 = *(_QWORD *)a3;
  v13 = a2[1];
  v14 = *((_QWORD *)a3 + 1);
  if ( v8 )
    v9 = 0;
  if ( *((int *)this + 164) <= -2 )
    v11 = 0;
  if ( v10 )
  {
    v15 = *(int *)(v11 + 4LL * *((int *)this + 13));
    *(_DWORD *)(v11 + 4LL * *((int *)this + 12)) = v15;
    v16 = *((_DWORD *)this + 148);
    if ( v16 - ((int)v15 + *((_DWORD *)this + 9)) < 0 )
    {
      v10 = 0;
      *(_DWORD *)(v11 + 4LL * *((int *)this + 13)) = v16 + 1;
    }
    else
    {
      v17 = *((_QWORD *)this + 78);
      if ( *((int *)this + 158) <= -2 )
        v17 = 0;
      v6 = (int *)(v17 + 4 * v15);
    }
  }
  if ( *((_BYTE *)a3 + 28) )
  {
    if ( v7 > 0 )
    {
      v18 = 0;
      do
      {
        v19 = *(int *)(v12 + v18);
        v20 = *(_QWORD *)(v14 + 2 * v18);
        *(_QWORD *)(v14 + 2 * v18) = 0;
        v21 = *(int *)(v9 + 4 * v19);
        *(_QWORD *)&v13[2 * v21] = v20;
        v6[v18 / 4] = v21;
        v18 += 4LL;
      }
      while ( 4LL * (unsigned int)(v7 - 1) + 4 != v18 );
LABEL_14:
      *((_DWORD *)a2 + 4) = v7;
      goto LABEL_15;
    }
  }
  else if ( v7 > 0 )
  {
    v23 = 0;
    do
    {
      v24 = *(int *)(v12 + v23);
      v25 = (__int64 *)(v14 + 8 * v24);
      v26 = *v25;
      *v25 = 0;
      v27 = *(int *)(v9 + 4 * v24);
      *(_QWORD *)&v13[2 * v27] = v26;
      v6[v23 / 4] = v27;
      v23 += 4LL;
    }
    while ( 4LL * (unsigned int)(v7 - 1) + 4 != v23 );
    goto LABEL_14;
  }
  *((_DWORD *)a2 + 4) = v7;
  if ( !v7 )
    *((_BYTE *)a2 + 28) = 0;
LABEL_15:
  ++*((_DWORD *)this + 248);
  *((double *)this + 116) = (double)v7 + *((double *)this + 116);
  CoinFactorization::updateColumnL(this, (CoinIndexedVector *)a2, v6);
  *((double *)this + 117) = (double)*((int *)a2 + 4) + *((double *)this + 117);
  if ( v10 )
  {
    CoinFactorization::updateColumnRFT(this, (CoinIndexedVector *)a2, v6);
    *((double *)this + 118) = (double)*((int *)a2 + 4) + *((double *)this + 118);
    CoinFactorization::updateColumnU(this, (CoinIndexedVector *)a2, v6);
    if ( !*((_BYTE *)this + 784) )
      CoinFactorization::updateColumnPFI(this, (CoinIndexedVector *)a2);
    CoinFactorization::permuteBack(this, (CoinIndexedVector *)a2, a3);
    return *((unsigned int *)a3 + 4);
  }
  else
  {
    CoinFactorization::updateColumnR(this, (CoinIndexedVector *)a2);
    *((double *)this + 118) = (double)*((int *)a2 + 4) + *((double *)this + 118);
    CoinFactorization::updateColumnU(this, (CoinIndexedVector *)a2, v6);
    if ( !*((_BYTE *)this + 784) )
      CoinFactorization::updateColumnPFI(this, (CoinIndexedVector *)a2);
    CoinFactorization::permuteBack(this, (CoinIndexedVector *)a2, a3);
    return (unsigned int)-*((_DWORD *)a3 + 4);
  }
}

