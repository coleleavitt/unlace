CoinIndexedVector *__fastcall CoinFactorization::updateColumnLSparse(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        int *a3)
{
  __int64 v4; // r11
  __int64 v5; // rcx
  int *v6; // r14
  __int64 v7; // r9
  int v8; // edx
  double v9; // xmm3_8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  int *v13; // rcx
  __int64 v14; // r14
  int v15; // r12d
  int v16; // esi
  __int64 v18; // rdi
  int v19; // edx
  __int64 v20; // rax
  int v21; // eax
  int *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  double *v25; // rdx
  double v26; // xmm1_8
  int v27; // r12d
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdx
  double v36; // xmm2_8
  CoinIndexedVector *result; // rax
  int v38; // r8d
  int v39; // ebp
  int v40; // eax
  __int64 v41; // rsi
  int *v42; // [rsp+0h] [rbp-80h]
  int v43; // [rsp+Ch] [rbp-74h]
  int *v44; // [rsp+10h] [rbp-70h]
  int *v46; // [rsp+20h] [rbp-60h]
  __int64 v47; // [rsp+28h] [rbp-58h]
  __int64 v48; // [rsp+30h] [rbp-50h]
  __int64 v50; // [rsp+40h] [rbp-40h]

  v4 = *((_QWORD *)this + 95);
  v5 = *((_QWORD *)this + 92);
  v6 = *((int **)this + 141);
  v7 = *((_QWORD *)a2 + 1);
  v8 = *((_DWORD *)a2 + 4);
  if ( *((int *)this + 192) <= -2 )
    v4 = 0;
  v9 = *((double *)this + 1);
  if ( *((int *)this + 186) <= -2 )
    v5 = 0;
  v47 = v5;
  v10 = *((_QWORD *)this + 89);
  if ( *((int *)this + 180) <= -2 )
    v10 = 0;
  v50 = v10;
  if ( *((int *)this + 284) <= -2 )
    v6 = nullptr;
  v11 = *((int *)this + 10);
  v46 = &v6[v11];
  v12 = (__int64)&v6[v11 + v11 + v11];
  if ( v8 <= 0 )
  {
    result = a2;
    *((_DWORD *)a2 + 4) = 0;
LABEL_24:
    *((_BYTE *)result + 28) = 0;
    return result;
  }
  v44 = v6;
  v13 = a3;
  v14 = (__int64)&v6[v11 + v11];
  v15 = 0;
  v16 = 0;
  v42 = &a3[v8 - 1 + 1];
  do
  {
    while ( 1 )
    {
      v19 = *v13;
      if ( *((_DWORD *)this + 175) <= *v13 )
        break;
      v20 = v16;
      ++v13;
      ++v16;
      a3[v20] = v19;
      if ( v42 == v13 )
        goto LABEL_15;
    }
    v18 = v19;
    if ( !*(_BYTE *)(v12 + v19) )
    {
      v43 = v15;
      v38 = 0;
      v39 = v16;
      *v44 = v19;
      v40 = *(_DWORD *)(v4 + 4LL * v19 + 4) - 1;
      while ( 1 )
      {
        while ( *(_DWORD *)(v4 + 4 * v18) <= v40 )
        {
          while ( 1 )
          {
            v41 = *(int *)(v47 + 4LL * v40);
            *(_DWORD *)(v14 + 4LL * v38) = --v40;
            v48 = v38;
            if ( *(_BYTE *)(v12 + v41) )
              break;
            ++v38;
            v40 = *(_DWORD *)(v4 + 4 * v41 + 4) - 1;
            v44[v48 + 1] = v41;
            *(_BYTE *)(v12 + v41) = 1;
            v19 = v41;
            *(_DWORD *)(v14 + v48 * 4 + 4) = v40;
            v18 = v41;
            if ( *(_DWORD *)(v4 + 4 * v41) > v40 )
              goto LABEL_30;
          }
        }
LABEL_30:
        --v38;
        ++v15;
        v46[v43] = v19;
        *(_BYTE *)(v12 + v18) = 1;
        if ( v38 == -1 )
          break;
        v43 = v15;
        v18 = v44[v38];
        v40 = *(_DWORD *)(v14 + 4LL * v38);
        v19 = v44[v38];
      }
      v16 = v39;
    }
    ++v13;
  }
  while ( v42 != v13 );
LABEL_15:
  v21 = v15 - 1;
  if ( v15 )
  {
    v22 = &v46[v21];
    v23 = (__int64)&v22[-v21 - 1];
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        v25 = (double *)(v7 + 8 * v24);
        *(_BYTE *)(v12 + v24) = 0;
        v26 = *v25;
        if ( fabs(*v25) > v9 )
          break;
        --v22;
        *v25 = 0.0;
        if ( (int *)v23 == v22 )
          goto LABEL_23;
      }
      v27 = v16 + 1;
      a3[v16] = v24;
      v28 = *(int *)(v4 + 4 * v24);
      v29 = *(_DWORD *)(v4 + 4 * v24 + 4);
      if ( (int)v28 < v29 )
      {
        v30 = v47 + 4 * v28;
        v31 = v50 + 8 * v28;
        v32 = (unsigned int)(v29 - v28 - 1);
        v33 = 0;
        v34 = v32 + 1;
        do
        {
          v35 = *(int *)(v30 + 4 * v33);
          v36 = *(double *)(v31 + 8 * v33++);
          *(double *)(v7 + 8 * v35) = *(double *)(v7 + 8 * v35) - v36 * v26;
        }
        while ( v34 != v33 );
      }
      --v22;
      v16 = v27;
    }
    while ( (int *)v23 != v22 );
  }
LABEL_23:
  result = a2;
  *((_DWORD *)a2 + 4) = v16;
  if ( !v16 )
    goto LABEL_24;
  return result;
}

