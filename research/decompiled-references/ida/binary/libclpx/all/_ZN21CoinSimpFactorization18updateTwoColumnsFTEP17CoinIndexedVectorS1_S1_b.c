__int64 __fastcall CoinSimpFactorization::updateTwoColumnsFT(
        CoinSimpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4)
{
  double *v6; // r12
  __int64 v7; // r10
  double *v8; // rbp
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // r14
  __int64 v14; // r11
  void *v15; // r13
  __int64 v16; // rdx
  __int64 i; // rcx
  int v18; // esi
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rsi
  int v22; // esi
  __int64 v23; // rax
  __int64 j; // rdx
  int v25; // ecx
  double *v26; // rcx
  int v27; // eax
  double v28; // xmm1_8
  __int64 v29; // rsi
  __int64 v31; // rax
  double *v32; // [rsp+8h] [rbp-60h]
  int v33; // [rsp+8h] [rbp-60h]
  double *v34; // [rsp+10h] [rbp-58h]
  CoinIndexedVector *v35; // [rsp+10h] [rbp-58h]
  __int64 v36; // [rsp+18h] [rbp-50h]
  __int64 v37; // [rsp+18h] [rbp-50h]
  __int64 v38; // [rsp+20h] [rbp-48h]
  __int64 v39; // [rsp+20h] [rbp-48h]
  CoinIndexedVector *v40; // [rsp+28h] [rbp-40h]

  v6 = *((double **)a3 + 1);
  v7 = *(_QWORD *)a3;
  v8 = v6;
  if ( *((_BYTE *)a3 + 28) )
  {
    v9 = *((_DWORD *)a3 + 4);
    v8 = *((double **)a2 + 1);
    if ( v9 > 0 )
    {
      v10 = (unsigned int)(v9 - 1);
      v11 = 0;
      v12 = v10 + 1;
      do
      {
        v8[*(int *)(v7 + 4 * v11)] = v6[v11];
        v6[v11++] = 0.0;
      }
      while ( v12 != v11 );
    }
  }
  v13 = *((void **)a4 + 1);
  v14 = *(_QWORD *)a4;
  v15 = v13;
  if ( *((_BYTE *)a4 + 28) )
  {
    v15 = *((void **)this + 18);
    v39 = *(_QWORD *)a4;
    v37 = v7;
    v35 = a4;
    v33 = *((_DWORD *)a4 + 4);
    memset(v15, 0, 8LL * *((int *)this + 9));
    a4 = v35;
    v7 = v37;
    v14 = v39;
    if ( v33 > 0 )
    {
      v31 = 0;
      do
      {
        *((_QWORD *)v15 + *(int *)(v39 + 4 * v31)) = *((_QWORD *)v13 + v31);
        *((_QWORD *)v13 + v31++) = 0;
      }
      while ( (unsigned int)(v33 - 1) + 1LL != v31 );
    }
  }
  v40 = a4;
  v38 = v14;
  v36 = v7;
  v32 = *((double **)this + 15);
  v34 = *((double **)this + 14);
  CoinSimpFactorization::ftran2(this, v8, v34, (double *)v15, v32);
  if ( !*((_BYTE *)a3 + 28) )
  {
    if ( *((int *)this + 9) > 0 )
    {
      v16 = 0;
      for ( i = 0; ; i = v18 )
      {
        while ( fabs(v34[v16]) <= *((double *)this + 2) )
        {
          v8[v16++] = 0.0;
          if ( *((_DWORD *)this + 9) <= (int)v16 )
            goto LABEL_24;
        }
        v8[v16] = v34[v16];
        v18 = i + 1;
        *(_DWORD *)(v36 + 4 * i) = v16++;
        if ( *((_DWORD *)this + 9) <= (int)v16 )
          break;
      }
      *((_DWORD *)a3 + 4) = v18;
      goto LABEL_17;
    }
    goto LABEL_45;
  }
  v19 = *((_DWORD *)this + 9);
  if ( v19 <= 0 )
  {
LABEL_45:
    *((_DWORD *)a3 + 4) = 0;
    goto LABEL_25;
  }
  v20 = 0;
  LODWORD(i) = 0;
  do
  {
    while ( 1 )
    {
      v8[v20] = 0.0;
      if ( fabs(v34[v20]) <= *((double *)this + 2) )
        break;
      v21 = (int)i;
      LODWORD(i) = i + 1;
      v6[v21] = v34[v20];
      *(_DWORD *)(v36 + 4 * v21) = v20;
      v19 = *((_DWORD *)this + 9);
      if ( (int)++v20 >= v19 )
      {
        *((_DWORD *)a3 + 4) = i;
        goto LABEL_17;
      }
    }
    ++v20;
  }
  while ( (int)v20 < v19 );
LABEL_24:
  *((_DWORD *)a3 + 4) = i;
  if ( (_DWORD)i )
  {
LABEL_17:
    v22 = *((_DWORD *)this + 9);
    if ( !*((_BYTE *)v40 + 28) )
      goto LABEL_18;
    goto LABEL_26;
  }
LABEL_25:
  *((_BYTE *)a3 + 28) = 0;
  v22 = *((_DWORD *)this + 9);
  if ( !*((_BYTE *)v40 + 28) )
  {
LABEL_18:
    if ( v22 > 0 )
    {
      v23 = 0;
      for ( j = 0; ; j = v25 )
      {
        while ( fabs(v32[v23]) <= *((double *)this + 2) )
        {
          *((_QWORD *)v15 + v23++) = 0;
          if ( *((_DWORD *)this + 9) <= (int)v23 )
            goto LABEL_34;
        }
        *((double *)v15 + v23) = v32[v23];
        v25 = j + 1;
        *(_DWORD *)(v38 + 4 * j) = v23++;
        if ( *((_DWORD *)this + 9) <= (int)v23 )
          break;
      }
      *((_DWORD *)v40 + 4) = v25;
      return 0;
    }
    goto LABEL_46;
  }
LABEL_26:
  if ( v22 <= 0 )
  {
LABEL_46:
    *((_DWORD *)v40 + 4) = 0;
LABEL_35:
    *((_BYTE *)v40 + 28) = 0;
    return 0;
  }
  v26 = v32;
  v27 = 0;
  LODWORD(j) = 0;
  do
  {
    while ( 1 )
    {
      v28 = *v26;
      if ( fabs(*v26) <= *((double *)this + 2) )
        break;
      v29 = (int)j;
      ++v26;
      LODWORD(j) = j + 1;
      *((double *)v13 + v29) = v28;
      *(_DWORD *)(v38 + 4 * v29) = v27;
      v22 = *((_DWORD *)this + 9);
      if ( ++v27 >= v22 )
      {
        *((_DWORD *)v40 + 4) = j;
        return 0;
      }
    }
    ++v27;
    ++v26;
  }
  while ( v27 < v22 );
LABEL_34:
  *((_DWORD *)v40 + 4) = j;
  if ( !(_DWORD)j )
    goto LABEL_35;
  return 0;
}

