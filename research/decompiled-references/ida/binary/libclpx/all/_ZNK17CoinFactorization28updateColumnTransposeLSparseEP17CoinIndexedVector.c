CoinIndexedVector *__fastcall CoinFactorization::updateColumnTransposeLSparse(
        CoinFactorization *this,
        CoinIndexedVector *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // r15
  int *v5; // r13
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  double v9; // xmm3_8
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rcx
  int *v13; // rsi
  int v14; // r14d
  __int64 v15; // rdx
  int v16; // edi
  int v17; // r9d
  int v18; // eax
  __int64 v19; // r11
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // r9
  int *v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rax
  double *v26; // rdx
  double v27; // xmm1_8
  __int64 v28; // rdx
  int v29; // r12d
  int v30; // eax
  __int64 v31; // r13
  __int64 v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rdx
  double v37; // xmm2_8
  CoinIndexedVector *result; // rax
  __int64 v39; // [rsp+0h] [rbp-70h]
  int v40; // [rsp+Ch] [rbp-64h]
  int *v41; // [rsp+10h] [rbp-60h]
  int *v42; // [rsp+18h] [rbp-58h]
  __int64 v44; // [rsp+30h] [rbp-40h]
  __int64 v45; // [rsp+38h] [rbp-38h]

  v2 = *((_QWORD *)this + 138);
  v3 = *((_QWORD *)this + 132);
  v4 = *((_QWORD *)this + 135);
  v5 = *((int **)this + 141);
  v6 = *(_QWORD *)a2;
  v7 = *((_DWORD *)a2 + 4);
  if ( *((int *)this + 278) <= -2 )
    v2 = 0;
  v8 = *((_QWORD *)a2 + 1);
  v45 = v2;
  v44 = *(_QWORD *)a2;
  v9 = *((double *)this + 1);
  if ( *((int *)this + 266) <= -2 )
    v3 = 0;
  if ( *((int *)this + 272) <= -2 )
    v4 = 0;
  if ( *((int *)this + 284) <= -2 )
    v5 = nullptr;
  v10 = *((int *)this + 10);
  v11 = (__int64)&v5[v10 + v10];
  v42 = &v5[v10];
  v12 = v11 + v10 * 4;
  if ( v7 <= 0 )
    goto LABEL_30;
  v13 = *(int **)a2;
  v14 = 0;
  v41 = v5;
  v39 = v6 + 4LL * (unsigned int)(v7 - 1) + 4;
  do
  {
    v15 = *v13;
    v16 = *v13;
    if ( !*(_BYTE *)(v12 + v15) && *(double *)(v8 + 8 * v15) != 0.0 )
    {
      v40 = v14;
      v17 = 0;
      *v41 = v16;
      v18 = *(_DWORD *)(v3 + 4 * v15 + 4) - 1;
      while ( 1 )
      {
        while ( *(_DWORD *)(v3 + 4 * v15) <= v18 )
        {
          while ( 1 )
          {
            v19 = *(int *)(v4 + 4LL * v18);
            *(_DWORD *)(v11 + 4LL * v17) = v18 - 1;
            v20 = v17;
            --v18;
            if ( *(_BYTE *)(v12 + v19) )
              break;
            v15 = v19;
            ++v17;
            v18 = *(_DWORD *)(v3 + 4 * v19 + 4) - 1;
            v41[v20 + 1] = v19;
            *(_BYTE *)(v12 + v19) = 1;
            *(_DWORD *)(v11 + v20 * 4 + 4) = v18;
            v16 = v19;
            if ( *(_DWORD *)(v3 + 4 * v19) > v18 )
              goto LABEL_18;
          }
        }
LABEL_18:
        --v17;
        ++v14;
        v42[v40] = v16;
        *(_BYTE *)(v12 + v15) = 1;
        if ( v17 == -1 )
          break;
        v40 = v14;
        v15 = v41[v17];
        v18 = *(_DWORD *)(v11 + 4LL * v17);
        v16 = v41[v17];
      }
    }
    ++v13;
  }
  while ( (int *)v39 != v13 );
  v21 = v14 - 1;
  if ( !v14 )
  {
LABEL_30:
    result = a2;
    *((_DWORD *)a2 + 4) = 0;
LABEL_31:
    *((_BYTE *)result + 28) = 0;
    return result;
  }
  v22 = 0;
  v23 = &v42[v21];
  v24 = (__int64)&v23[-v21 - 1];
  do
  {
    while ( 1 )
    {
      v25 = *v23;
      v26 = (double *)(v8 + 8 * v25);
      *(_BYTE *)(v12 + v25) = 0;
      v27 = *v26;
      if ( fabs(*v26) > v9 )
        break;
      --v23;
      *v26 = 0.0;
      if ( (int *)v24 == v23 )
        goto LABEL_28;
    }
    *(_DWORD *)(v44 + 4 * v22) = v25;
    v28 = *(int *)(v3 + 4 * v25);
    v29 = v22 + 1;
    v30 = *(_DWORD *)(v3 + 4 * v25 + 4);
    if ( (int)v28 < v30 )
    {
      v31 = v4 + 4 * v28;
      v32 = v45 + 8 * v28;
      v33 = (unsigned int)(v30 - v28 - 1);
      v34 = 0;
      v35 = v33 + 1;
      do
      {
        v36 = *(int *)(v31 + 4 * v34);
        v37 = *(double *)(v32 + 8 * v34++);
        *(double *)(v8 + 8 * v36) = *(double *)(v8 + 8 * v36) - v37 * v27;
      }
      while ( v35 != v34 );
    }
    --v23;
    v22 = v29;
  }
  while ( (int *)v24 != v23 );
LABEL_28:
  result = a2;
  *((_DWORD *)a2 + 4) = v22;
  if ( !(_DWORD)v22 )
    goto LABEL_31;
  return result;
}

