__int64 __fastcall CoinFactorization::updateColumnTranspose(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  CoinIndexedVector *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rbp
  int *v8; // r13
  char v9; // r9
  __int64 v10; // r12
  __int64 v11; // r15
  int v12; // esi
  unsigned __int64 v13; // rax
  __int64 v14; // xmm0_8
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rdi
  int v18; // edx
  int *v19; // rcx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 *v25; // rdi
  __int64 v26; // xmm0_8
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rdi
  __int64 v30; // xmm0_8
  __int64 v31; // rdi
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 *v34; // rdi
  __int64 v35; // xmm0_8
  __int64 v36; // rdi
  char v38; // [rsp+0h] [rbp-48h]
  char v39; // [rsp+0h] [rbp-48h]
  CoinIndexedVector *v40; // [rsp+8h] [rbp-40h]
  CoinIndexedVector *v41; // [rsp+8h] [rbp-40h]

  CoinIndexedVector::clear(a2);
  v5 = a3;
  v6 = *((_QWORD *)this + 10);
  v7 = *((_QWORD *)a2 + 1);
  v8 = *(int **)a2;
  v9 = *((_BYTE *)a3 + 28);
  v10 = *((_QWORD *)a3 + 1);
  if ( *((int *)this + 22) <= -2 )
    v6 = 0;
  v11 = *(_QWORD *)a3;
  v12 = *((_DWORD *)a3 + 4);
  if ( v9 )
  {
    if ( v12 > 0 )
    {
      v13 = 0;
      do
      {
        v14 = *(_QWORD *)(v10 + 2 * v13);
        v15 = *(int *)(v6 + 4LL * *(int *)(v11 + v13));
        *(_QWORD *)(v10 + 2 * v13) = 0;
        *(_QWORD *)(v7 + 8 * v15) = v14;
        v8[v13 / 4] = v15;
        v13 += 4LL;
      }
      while ( 4LL * (unsigned int)(v12 - 1) + 4 != v13 );
LABEL_7:
      *((_DWORD *)a2 + 4) = v12;
      goto LABEL_8;
    }
  }
  else if ( v12 > 0 )
  {
    v27 = 0;
    do
    {
      v28 = *(int *)(v11 + v27);
      v29 = (__int64 *)(v10 + 8 * v28);
      v30 = *v29;
      *v29 = 0;
      v31 = *(int *)(v6 + 4 * v28);
      *(_QWORD *)(v7 + 8 * v31) = v30;
      v8[v27 / 4] = v31;
      v27 += 4LL;
    }
    while ( 4LL * (unsigned int)(v12 - 1) + 4 != v27 );
    goto LABEL_7;
  }
  *((_DWORD *)a2 + 4) = v12;
  if ( !v12 )
    *((_BYTE *)a2 + 28) = 0;
LABEL_8:
  ++*((_DWORD *)this + 249);
  v16 = *((_BYTE *)this + 784) == 0;
  *((double *)this + 120) = (double)v12 + *((double *)this + 120);
  if ( v16 )
  {
    v41 = a3;
    v39 = v9;
    CoinFactorization::updateColumnTransposePFI(this, a2);
    v12 = *((_DWORD *)a2 + 4);
    v5 = v41;
    v9 = v39;
  }
  v17 = *((_QWORD *)this + 69);
  v18 = *((_DWORD *)this + 9);
  if ( *((int *)this + 140) <= -2 )
    v17 = 0;
  if ( v12 > 0 )
  {
    v19 = v8;
    do
    {
      v20 = *v19;
      if ( v18 > (int)v20 )
        v18 = *v19;
      ++v19;
      *(double *)(v7 + 8 * v20) = *(double *)(v7 + 8 * v20) * *(double *)(v17 + 8 * v20);
    }
    while ( &v8[v12 - 1 + 1] != v19 );
  }
  v40 = v5;
  v38 = v9;
  CoinFactorization::updateColumnTransposeU(this, a2, v18);
  *((double *)this + 121) = (double)*((int *)a2 + 4) + *((double *)this + 121);
  CoinFactorization::updateColumnTransposeR(this, a2);
  CoinFactorization::updateColumnTransposeL(this, a2);
  result = *((unsigned int *)a2 + 4);
  v22 = *((_QWORD *)this + 19);
  if ( *((int *)this + 40) <= -2 )
    v22 = 0;
  *((double *)this + 123) = (double)(int)result + *((double *)this + 123);
  if ( v38 )
  {
    if ( (int)result > 0 )
    {
      v23 = 0;
      do
      {
        v24 = v8[v23 / 4];
        v25 = (__int64 *)(v7 + 8 * v24);
        LODWORD(v24) = *(_DWORD *)(v22 + 4 * v24);
        v26 = *v25;
        *v25 = 0;
        *(_QWORD *)(v10 + 2 * v23) = v26;
        *(_DWORD *)(v11 + v23) = v24;
        v23 += 4LL;
      }
      while ( v23 != 4LL * (unsigned int)(result - 1) + 4 );
LABEL_23:
      *((_DWORD *)a2 + 4) = 0;
      *((_BYTE *)a2 + 28) = 0;
      *((_DWORD *)v40 + 4) = result;
      return result;
    }
  }
  else if ( (int)result > 0 )
  {
    v32 = 0;
    do
    {
      v33 = v8[v32 / 4];
      v34 = (__int64 *)(v7 + 8 * v33);
      v35 = *v34;
      *v34 = 0;
      v36 = *(int *)(v22 + 4 * v33);
      *(_QWORD *)(v10 + 8 * v36) = v35;
      *(_DWORD *)(v11 + v32) = v36;
      v32 += 4LL;
    }
    while ( 4LL * (unsigned int)(result - 1) + 4 != v32 );
    goto LABEL_23;
  }
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  *((_DWORD *)v40 + 4) = 0;
  *((_BYTE *)v40 + 28) = 0;
  return 0;
}

