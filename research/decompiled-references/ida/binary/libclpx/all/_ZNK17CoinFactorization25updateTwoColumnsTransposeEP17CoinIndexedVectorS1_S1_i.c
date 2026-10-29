CoinIndexedVector *__fastcall CoinFactorization::updateTwoColumnsTranspose(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4)
{
  __int64 v6; // r15
  int v7; // ecx
  __int64 v8; // r13
  int *v9; // r12
  __int64 v10; // rbx
  int *v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rsi
  __int64 v15; // xmm0_8
  __int64 v16; // rsi
  int v17; // r9d
  __int64 v18; // r14
  __int64 v19; // r10
  unsigned __int64 v20; // rax
  __int64 v21; // xmm0_8
  __int64 v22; // rsi
  __int64 v23; // r15
  bool v24; // zf
  int v25; // edx
  int *v26; // rsi
  __int64 v27; // rax
  int v28; // ecx
  int v29; // r9d
  int *v30; // r8
  __int64 v31; // r10
  int v32; // edx
  int *v33; // rsi
  __int64 v34; // rax
  int v35; // r15d
  int v36; // r15d
  __int64 v37; // rdi
  int v38; // r11d
  double v39; // xmm0_8
  int v40; // r15d
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 *v43; // rcx
  __int64 v44; // xmm0_8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 *v47; // rcx
  __int64 v48; // xmm0_8
  __int64 v49; // rcx
  int v54; // [rsp+1Ch] [rbp-5Ch]
  int v55; // [rsp+1Ch] [rbp-5Ch]
  int v56; // [rsp+20h] [rbp-58h]
  int v57; // [rsp+20h] [rbp-58h]
  int *v58; // [rsp+20h] [rbp-58h]
  int v59; // [rsp+28h] [rbp-50h]
  int v60; // [rsp+28h] [rbp-50h]
  __int64 v61; // [rsp+28h] [rbp-50h]
  int *v62; // [rsp+30h] [rbp-48h]
  int *v63; // [rsp+30h] [rbp-48h]
  __int64 v64; // [rsp+38h] [rbp-40h]
  __int64 v65; // [rsp+38h] [rbp-40h]

  v6 = *((_QWORD *)this + 10);
  if ( *((int *)this + 22) <= -2 )
    v6 = 0;
  CoinIndexedVector::clear(a2);
  v7 = *((_DWORD *)a4 + 4);
  v8 = *((_QWORD *)a2 + 1);
  v9 = *(int **)a4;
  v10 = *((_QWORD *)a4 + 1);
  v11 = *(int **)a2;
  if ( v7 <= 0 )
  {
    *((_DWORD *)a2 + 4) = v7;
    if ( !v7 )
      *((_BYTE *)a2 + 28) = 0;
  }
  else
  {
    v12 = 0;
    do
    {
      v13 = v9[v12 / 4];
      v14 = (__int64 *)(v10 + 8 * v13);
      v15 = *v14;
      *v14 = 0;
      v16 = *(int *)(v6 + 4 * v13);
      *(_QWORD *)(v8 + 8 * v16) = v15;
      v11[v12 / 4] = v16;
      v12 += 4LL;
    }
    while ( 4LL * (unsigned int)(v7 - 1) + 4 != v12 );
    *((_DWORD *)a2 + 4) = v7;
  }
  v17 = *((_DWORD *)a3 + 4);
  v18 = *((_QWORD *)a3 + 1);
  v19 = *(_QWORD *)a3;
  if ( v17 <= 0 )
  {
    *((_DWORD *)a4 + 4) = v17;
    if ( !v17 )
      *((_BYTE *)a4 + 28) = 0;
  }
  else
  {
    v20 = 0;
    do
    {
      v21 = *(_QWORD *)(v18 + 2 * v20);
      v22 = *(int *)(v6 + 4LL * *(int *)(v19 + v20));
      *(_QWORD *)(v18 + 2 * v20) = 0;
      *(_QWORD *)(v10 + 8 * v22) = v21;
      v9[v20 / 4] = v22;
      v20 += 4LL;
    }
    while ( 4LL * (unsigned int)(v17 - 1) + 4 != v20 );
    *((_DWORD *)a4 + 4) = v17;
  }
  *((_DWORD *)this + 249) += 2;
  v23 = *((_QWORD *)this + 69);
  if ( *((int *)this + 140) <= -2 )
    v23 = 0;
  v24 = *((_BYTE *)this + 784) == 0;
  *((double *)this + 120) = (double)(v7 + v17) + *((double *)this + 120);
  if ( v24 )
  {
    v61 = v19;
    v58 = v11;
    v55 = v17;
    CoinFactorization::updateColumnTransposePFI(this, a2);
    v19 = v61;
    v11 = v58;
    v17 = v55;
    v7 = *((_DWORD *)a2 + 4);
  }
  v25 = *((_DWORD *)this + 9);
  if ( v7 > 0 )
  {
    v26 = v11;
    do
    {
      v27 = *v26;
      if ( v25 > (int)v27 )
        v25 = *v26;
      ++v26;
      *(double *)(v8 + 8 * v27) = *(double *)(v8 + 8 * v27) * *(double *)(v23 + 8 * v27);
    }
    while ( &v11[v7 - 1 + 1] != v26 );
  }
  v64 = v19;
  v62 = v11;
  v59 = v17;
  v56 = v7;
  CoinFactorization::updateColumnTransposeU(this, a2, v25);
  v54 = *((_DWORD *)a2 + 4);
  CoinFactorization::updateColumnTransposeR(this, a2);
  CoinFactorization::updateColumnTransposeL(this, a2);
  v28 = v56;
  v29 = v59;
  v30 = v62;
  v31 = v64;
  if ( !*((_BYTE *)this + 784) )
  {
    CoinFactorization::updateColumnTransposePFI(this, a4);
    v31 = v64;
    v30 = v62;
    v28 = v56;
    v29 = *((_DWORD *)a4 + 4);
  }
  v32 = *((_DWORD *)this + 9);
  if ( v29 > 0 )
  {
    v33 = v9;
    do
    {
      v34 = *v33;
      if ( v32 > (int)v34 )
        v32 = *v33;
      ++v33;
      *(double *)(v10 + 8 * v34) = *(double *)(v10 + 8 * v34) * *(double *)(v23 + 8 * v34);
    }
    while ( &v9[v29 - 1 + 1] != v33 );
  }
  v63 = v30;
  v60 = v29;
  v57 = v28;
  v65 = v31;
  CoinFactorization::updateColumnTransposeU(this, a4, v32);
  v35 = *((_DWORD *)a4 + 4);
  CoinFactorization::updateColumnTransposeR(this, a4);
  CoinFactorization::updateColumnTransposeL(this, a4);
  v36 = v54 + v35;
  v37 = *((_QWORD *)this + 19);
  if ( *((int *)this + 40) <= -2 )
    v37 = 0;
  v38 = *((_DWORD *)a2 + 4);
  *((double *)this + 123) = (double)(v57 + v60) + *((double *)this + 123);
  v39 = (double)v36;
  v40 = *((_DWORD *)a4 + 4);
  *((double *)this + 121) = v39 + *((double *)this + 121);
  if ( v40 > 0 )
  {
    v41 = 0;
    do
    {
      v42 = v9[v41 / 4];
      v43 = (__int64 *)(v10 + 8 * v42);
      LODWORD(v42) = *(_DWORD *)(v37 + 4 * v42);
      v44 = *v43;
      *v43 = 0;
      *(_QWORD *)(v18 + 2 * v41) = v44;
      *(_DWORD *)(v65 + v41) = v42;
      v41 += 4LL;
    }
    while ( 4LL * (unsigned int)(v40 - 1) + 4 != v41 );
    *((_DWORD *)a3 + 4) = v40;
    if ( v38 > 0 )
      goto LABEL_33;
LABEL_37:
    *((_DWORD *)a2 + 4) = 0;
    *((_BYTE *)a2 + 28) = 0;
    *((_DWORD *)a4 + 4) = 0;
    *((_BYTE *)a4 + 28) = 0;
    return a4;
  }
  *((_DWORD *)a3 + 4) = 0;
  *((_BYTE *)a3 + 28) = 0;
  if ( v38 <= 0 )
    goto LABEL_37;
LABEL_33:
  v45 = 0;
  do
  {
    v46 = v63[v45];
    v47 = (__int64 *)(v8 + 8 * v46);
    v48 = *v47;
    *v47 = 0;
    v49 = *(int *)(v37 + 4 * v46);
    *(_QWORD *)(v10 + 8 * v49) = v48;
    v9[v45++] = v49;
  }
  while ( v38 > (int)v45 );
  *((_DWORD *)a2 + 4) = 0;
  *((_BYTE *)a2 + 28) = 0;
  *((_DWORD *)a4 + 4) = v38;
  return a4;
}

