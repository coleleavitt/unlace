__int64 __fastcall CoinFactorization::updateTwoColumnsFT(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        char a5)
{
  CoinIndexedVector *v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // r9
  int v12; // r11d
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rbp
  __int64 v19; // xmm0_8
  __int64 v20; // rbp
  __int64 v21; // rdx
  int v22; // r11d
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  int *v27; // r14
  __int64 v28; // r11
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // xmm0_8
  __int64 v32; // rdi
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // eax
  int v38; // eax
  bool v39; // zf
  int v40; // edx
  int v42; // [rsp+Ch] [rbp-4Ch]
  int v43; // [rsp+18h] [rbp-40h] BYREF
  int v44[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v9 = a4;
  v10 = *((_QWORD *)this + 13);
  v11 = *((_QWORD *)a2 + 1);
  if ( *((int *)this + 28) <= -2 )
    v10 = 0;
  if ( !a5 )
  {
    v12 = *((_DWORD *)a4 + 4);
    v13 = *(_QWORD *)a4;
    v14 = *(_QWORD *)a2;
    v15 = *((_QWORD *)a4 + 1);
    if ( v12 <= 0 )
    {
      *((_DWORD *)a2 + 4) = v12;
      if ( !v12 )
        *((_BYTE *)a2 + 28) = 0;
      v9 = a2;
      v11 = v15;
      a2 = a4;
    }
    else
    {
      v16 = 0;
      do
      {
        v17 = *(int *)(v13 + v16);
        v18 = (__int64 *)(v15 + 8 * v17);
        v19 = *v18;
        *v18 = 0;
        v20 = *(int *)(v10 + 4 * v17);
        *(_QWORD *)(v11 + 8 * v20) = v19;
        *(_DWORD *)(v14 + v16) = v20;
        v16 += 4;
      }
      while ( 4LL * (unsigned int)(v12 - 1) + 4 != v16 );
      *((_DWORD *)a2 + 4) = v12;
      v9 = a2;
      v11 = v15;
      a2 = a4;
    }
  }
  v21 = *((_QWORD *)this + 81);
  v22 = *((_DWORD *)a3 + 4);
  v23 = *(_QWORD *)a3;
  v24 = *((_QWORD *)a3 + 1);
  if ( *((int *)this + 164) <= -2 )
    v21 = 0;
  v25 = *(int *)(v21 + 4LL * *((int *)this + 13));
  v42 = *((_DWORD *)a3 + 4);
  *(_DWORD *)(v21 + 4LL * *((int *)this + 12)) = v25;
  v26 = *((_QWORD *)this + 78);
  if ( *((int *)this + 158) <= -2 )
    v26 = 0;
  v27 = (int *)(v26 + 4 * v25);
  if ( v22 <= 0 )
  {
    *((_DWORD *)a2 + 4) = v22;
    if ( !v22 )
      *((_BYTE *)a2 + 28) = 0;
  }
  else
  {
    v28 = 4LL * (unsigned int)(v22 - 1) + 4;
    v29 = 0;
    do
    {
      v30 = *(int *)(v23 + v29);
      v31 = *(_QWORD *)(v24 + 2 * v29);
      *(_QWORD *)(v24 + 2 * v29) = 0;
      v32 = *(int *)(v10 + 4 * v30);
      *(_QWORD *)(v11 + 8 * v32) = v31;
      v27[v29 / 4] = v32;
      v29 += 4LL;
    }
    while ( v28 != v29 );
    *((_DWORD *)a2 + 4) = v42;
  }
  *((_DWORD *)this + 248) += 2;
  *((double *)this + 116) = (double)(*((_DWORD *)a2 + 4) + *((_DWORD *)v9 + 4)) + *((double *)this + 116);
  CoinFactorization::updateColumnL(this, a2, v27);
  CoinFactorization::updateColumnL(this, v9, *(int **)v9);
  *((double *)this + 117) = (double)(*((_DWORD *)a2 + 4) + *((_DWORD *)v9 + 4)) + *((double *)this + 117);
  CoinFactorization::updateColumnRFT(this, a2, v27);
  CoinFactorization::updateColumnR(this, v9);
  v33 = *((_DWORD *)a2 + 4) + *((_DWORD *)v9 + 4);
  v34 = *((_DWORD *)this + 262);
  *((double *)this + 118) = (double)v33 + *((double *)this + 118);
  if ( v34 > 0 )
  {
    v35 = v33 >> 1;
    if ( *((double *)this + 126) == 0.0 )
    {
      if ( v34 > v35 )
      {
LABEL_19:
        CoinFactorization::updateColumnU(this, a2, v27);
        CoinFactorization::updateColumnU(this, v9, *(int **)v9);
        goto LABEL_20;
      }
    }
    else
    {
      v36 = (int)((double)v35 * *((double *)this + 127));
      if ( v34 > v36 || *((_DWORD *)this + 263) > v36 )
        goto LABEL_19;
    }
  }
  if ( *((int *)this + 8) > 999 )
    goto LABEL_19;
  CoinFactorization::updateTwoColumnsUDensish(
    this,
    &v43,
    *((double **)a2 + 1),
    *(int **)a2,
    v44,
    *((double **)v9 + 1),
    *(int **)v9);
  v38 = v43;
  v39 = v43 == 0;
  *((_DWORD *)a2 + 4) = v43;
  if ( v39 )
    *((_BYTE *)a2 + 28) = 0;
  v40 = v44[0];
  v39 = v44[0] == 0;
  *((_DWORD *)v9 + 4) = v44[0];
  if ( v39 )
    *((_BYTE *)v9 + 28) = 0;
  *((double *)this + 119) = (double)(v40 + v38) + *((double *)this + 119);
LABEL_20:
  CoinFactorization::permuteBack(this, a2, a3);
  if ( !a5 )
    CoinFactorization::permuteBack(this, v9, a4);
  return *((unsigned int *)a3 + 4);
}

