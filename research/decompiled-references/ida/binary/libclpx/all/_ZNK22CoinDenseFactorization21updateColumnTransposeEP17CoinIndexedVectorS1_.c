__int64 __fastcall CoinDenseFactorization::updateColumnTranspose(
        CoinDenseFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  char v3; // al
  __int64 v4; // r12
  __int64 v5; // r15
  int v6; // r8d
  double *v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  double *v13; // rsi
  int *v14; // r11
  __int64 v15; // r14
  __int64 v16; // rbp
  int v17; // r10d
  double *v18; // rbx
  double v19; // xmm0_8
  unsigned __int64 v20; // rcx
  double v21; // xmm1_8
  __int64 v22; // rax
  double v23; // xmm1_8
  int v24; // r9d
  double *v25; // rsi
  int v26; // r13d
  __int64 v27; // r11
  double v28; // xmm1_8
  unsigned __int64 v29; // rcx
  double *i; // r10
  unsigned __int64 v31; // rax
  double v32; // xmm0_8
  double *v33; // rsi
  double *v34; // r11
  unsigned int v35; // ebx
  double v36; // xmm1_8
  __int64 v37; // rax
  double v38; // xmm0_8
  __int64 v39; // r9
  int v40; // esi
  int v41; // ecx
  __int64 v42; // rax
  int v43; // r10d
  double v44; // xmm0_8
  double v45; // xmm2_8
  int v46; // r8d
  int v48; // eax
  __int64 v49; // rsi
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // r9
  int v54; // esi
  int v55; // ecx
  __int64 v56; // rsi
  double v57; // xmm0_8
  double v58; // xmm2_8
  int v59; // r8d
  double *v61; // [rsp+8h] [rbp-48h]
  char v62; // [rsp+17h] [rbp-39h]

  v3 = *((_BYTE *)a3 + 28);
  v4 = *((_QWORD *)a3 + 1);
  v5 = *(_QWORD *)a3;
  v6 = *((_DWORD *)this + 9);
  v7 = *((double **)a2 + 1);
  v62 = v3;
  if ( v3 )
  {
    v48 = *((_DWORD *)a3 + 4);
    if ( v48 > 0 )
    {
      v49 = (unsigned int)(v48 - 1);
      v50 = *((_QWORD *)this + 9);
      v51 = 0;
      v52 = v49 + 1;
      do
      {
        v7[*(int *)(v50 + 4LL * *(int *)(v5 + 4 * v51))] = *(double *)(v4 + 8 * v51);
        *(_QWORD *)(v4 + 8 * v51++) = 0;
      }
      while ( v52 != v51 );
    }
  }
  else if ( v6 > 0 )
  {
    v8 = *((_QWORD *)this + 9);
    v9 = 0;
    do
    {
      v7[*(int *)(v8 + 4 * v9)] = *(double *)(v4 + 8 * v9);
      *(_QWORD *)(v4 + 8 * v9++) = 0;
    }
    while ( (unsigned int)(v6 - 1) + 1LL != v9 );
  }
  v10 = *((_DWORD *)this + 13);
  v61 = *((double **)this + 10);
  v11 = v6 * (v10 + v6);
  v12 = v10 - 1;
  v13 = &v61[v11];
  if ( v12 >= 0 )
  {
    v14 = (int *)(*((_QWORD *)this + 9) + 4 * (v12 + (__int64)(2 * v6)));
    v15 = (__int64)&v14[-v12 - 1];
    do
    {
      v16 = *v14;
      v13 -= v6;
      v17 = *v14;
      v18 = &v7[v16];
      v19 = *v18;
      if ( (int)v16 > 0 )
      {
        v20 = 0;
        do
        {
          v21 = v7[v20 / 8] * v13[v20 / 8];
          v20 += 8LL;
          v19 = v19 - v21;
        }
        while ( 8LL * (unsigned int)(v16 - 1) + 8 != v20 );
      }
      if ( v17 + 1 < v6 )
      {
        v22 = 8 * v16 + 8;
        do
        {
          v23 = *(double *)((char *)v7 + v22) * *(double *)((char *)v13 + v22);
          v22 += 8;
          v19 = v19 - v23;
        }
        while ( 8 * ((unsigned int)(v6 - 2 - v17) + (__int64)(v17 + 1) + 1) != v22 );
      }
      --v14;
      *v18 = v19 * v13[v16];
    }
    while ( (int *)v15 != v14 );
  }
  v24 = *((_DWORD *)this + 10);
  if ( v24 <= 0 )
  {
    v26 = v24 - 1;
  }
  else
  {
    v25 = v61;
    v26 = v24 - 1;
    v27 = 8LL * v6;
    v28 = *v7;
    v29 = 0;
    for ( i = v61; ; i = (double *)((char *)i + v27 + 8) )
    {
      v25 = (double *)((char *)v25 + v27);
      v7[v29 / 8] = v28 * *i;
      if ( v29 == 8LL * (unsigned int)(v24 - 1) )
        break;
      v29 += 8LL;
      v31 = 0;
      v28 = v7[v29 / 8];
      do
      {
        v32 = v7[v31 / 8] * v25[v31 / 8];
        v31 += 8LL;
        v28 = v28 - v32;
      }
      while ( v29 != v31 );
    }
  }
  v33 = &v61[v6 * v6];
  if ( v26 >= 0 )
  {
    v34 = &v7[v26];
    v35 = v6 - 1 - v24;
    do
    {
      v33 -= v6;
      v36 = *v34;
      if ( v6 > v24 )
      {
        v37 = v24;
        do
        {
          v38 = v7[v37] * v33[v37];
          ++v37;
          v36 = v36 - v38;
        }
        while ( v24 + (unsigned __int64)v35 + 1 != v37 );
      }
      *v34 = v36;
      ++v35;
      --v34;
      --v24;
    }
    while ( v24 );
  }
  if ( !v62 )
  {
    if ( v6 > 0 )
    {
      v39 = *((_QWORD *)this + 9);
      v40 = v6;
      v41 = 0;
      v42 = 0;
      while ( 1 )
      {
        v44 = *v7;
        v45 = *v7;
        v46 = *(_DWORD *)(v39 + 4LL * (v41 + v6));
        *v7 = 0.0;
        if ( fabs(v45) > *((double *)this + 2) )
        {
          ++v41;
          ++v7;
          *(double *)(v4 + 8LL * v46) = v44;
          *(_DWORD *)(v5 + 4 * v42) = v46;
          v40 = *((_DWORD *)this + 9);
          v43 = v42 + 1;
          if ( v41 >= v40 )
          {
            *((_DWORD *)a3 + 4) = v43;
            return 0;
          }
          v42 = v43;
        }
        else
        {
          ++v41;
          ++v7;
          if ( v41 >= v40 )
            goto LABEL_35;
        }
        v6 = v40;
      }
    }
LABEL_51:
    *((_DWORD *)a3 + 4) = 0;
LABEL_36:
    *((_BYTE *)a3 + 28) = 0;
    return 0;
  }
  if ( v6 <= 0 )
    goto LABEL_51;
  v53 = *((_QWORD *)this + 9);
  v54 = v6;
  v55 = 0;
  LODWORD(v42) = 0;
  while ( 1 )
  {
    v57 = *v7;
    v58 = *v7;
    v59 = *(_DWORD *)(v53 + 4LL * (v55 + v6));
    *v7 = 0.0;
    if ( fabs(v58) > *((double *)this + 2) )
      break;
    ++v55;
    ++v7;
    if ( v55 >= v54 )
    {
LABEL_35:
      *((_DWORD *)a3 + 4) = v42;
      if ( !(_DWORD)v42 )
        goto LABEL_36;
      return 0;
    }
LABEL_45:
    v6 = v54;
  }
  v56 = (int)v42;
  ++v55;
  LODWORD(v42) = v42 + 1;
  *(double *)(v4 + 8 * v56) = v57;
  *(_DWORD *)(v5 + 4 * v56) = v59;
  v54 = *((_DWORD *)this + 9);
  ++v7;
  if ( v55 < v54 )
    goto LABEL_45;
  *((_DWORD *)a3 + 4) = v42;
  return 0;
}

