__int64 __fastcall CoinOslFactorization::updateColumnTranspose(
        CoinOslFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3)
{
  __int64 v5; // r12
  __int64 *v6; // r10
  int v7; // ecx
  int *v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rdi
  int *v11; // rax
  __int64 *v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // xmm0_8
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  int v20; // eax
  __int64 v21; // r14
  int *v22; // rax
  __int64 v23; // r15
  int v24; // r13d
  __int64 v25; // r8
  __int64 v26; // r11
  __int64 *v27; // r8
  __int64 v28; // xmm0_8
  unsigned int v29; // esi
  int v30; // r11d
  int *v31; // rax
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 *v35; // rsi
  __int64 v36; // xmm0_8
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // xmm0_8

  v5 = *((_QWORD *)this + 29);
  v6 = *((__int64 **)a3 + 1);
  v7 = *((_DWORD *)a3 + 4);
  v8 = *(int **)a3;
  v9 = *((_QWORD *)this + 24) + 4LL;
  v10 = *((_QWORD *)a2 + 1) - 8LL;
  if ( *((_BYTE *)a3 + 28) )
  {
    *((_DWORD *)this + 112) = 1;
    *((_QWORD *)this + 29) = v10;
    if ( v7 > 1 )
    {
      v11 = v8;
      v12 = v6;
      v13 = (__int64)&v8[v7 - 1 + 1];
      do
      {
        v14 = *v11;
        v15 = *v12;
        ++v11;
        ++v12;
        v16 = *(int *)(v9 + 4 * v14);
        *(v11 - 1) = v16;
        *(_QWORD *)(v10 + 8 * v16) = v15;
        *(v12 - 1) = 0;
      }
      while ( (int *)v13 != v11 );
      goto LABEL_5;
    }
    if ( v7 )
    {
      v38 = *v8;
      v39 = *v6;
      *v6 = 0;
      v37 = v38;
      v6[v38] = v39;
      goto LABEL_24;
    }
LABEL_20:
    *((_QWORD *)this + 29) = v5;
    *((_DWORD *)this + 112) = 0;
    *((_DWORD *)a3 + 4) = 0;
    goto LABEL_21;
  }
  *((_DWORD *)this + 112) = 0;
  *((_QWORD *)this + 29) = v10;
  if ( v7 > 1 )
  {
    v20 = *((_DWORD *)this + 9);
    if ( v20 > 199 && v20 >= 16 * v7 )
    {
      v21 = *((_QWORD *)this + 19);
      v22 = v8;
      v23 = (__int64)&v8[v7 - 1 + 1];
      v24 = 0x7FFFFFFF;
      v17 = 0;
      do
      {
        v25 = *v22;
        v26 = *(int *)(v9 + 4 * v25);
        v27 = &v6[v25];
        v28 = *v27;
        *v22 = v26;
        v29 = v26;
        *(_QWORD *)(v10 + 8 * v26) = v28;
        v30 = *(_DWORD *)(v21 + 4 * v26);
        if ( v30 < v24 )
        {
          v17 = v29;
          v24 = v30;
        }
        ++v22;
        *v27 = 0;
      }
      while ( (int *)v23 != v22 );
      goto LABEL_6;
    }
    v31 = v8;
    v32 = (__int64)&v8[v7 - 1 + 1];
    do
    {
      v33 = *v31++;
      v34 = *(int *)(v9 + 4 * v33);
      v35 = &v6[v33];
      v36 = *v35;
      *(v31 - 1) = v34;
      *(_QWORD *)(v10 + 8 * v34) = v36;
      *v35 = 0;
    }
    while ( v31 != (int *)v32 );
LABEL_5:
    v17 = 0;
LABEL_6:
    v18 = c_ekkbtrn((char *)this + 104, v6 - 1, v8 - 1, v17);
    goto LABEL_7;
  }
  if ( !v7 )
    goto LABEL_20;
  v37 = *v8;
LABEL_24:
  v18 = c_ekkbtrn_ipivrw((char *)this + 104, v6 - 1, v8 - 1, (unsigned int)(v37 + 1), *((_QWORD *)this + 37), v9);
LABEL_7:
  *((_QWORD *)this + 29) = v5;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)a3 + 4) = v18;
  if ( !v18 )
LABEL_21:
    *((_BYTE *)a3 + 28) = 0;
  return 0;
}

