CoinIndexedVector *__fastcall CoinFactorization::updateColumnTransposeLSparsish(
        CoinFactorization *this,
        CoinIndexedVector *a2)
{
  int *v2; // rbx
  int v3; // ecx
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rsi
  __int64 v7; // rdx
  double v8; // xmm3_8
  __int64 v9; // rsi
  __int64 v10; // r11
  int *v11; // rsi
  __int64 v12; // rbx
  int v13; // r15d
  _BYTE *v14; // rax
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r15
  CoinIndexedVector *result; // rax
  double v20; // xmm1_8
  int v21; // r14d
  int v22; // edx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r12
  __int64 v26; // rbp
  int v27; // eax
  int v28; // esi
  double v29; // xmm0_8
  int v30; // ebx
  _BYTE *v31; // rax
  __int64 v32; // r13
  __int64 v33; // r8
  __int64 v34; // r14
  double v35; // xmm1_8
  int v36; // r15d
  int v37; // edx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rbp
  __int64 v41; // rbx
  int v42; // eax
  int v43; // esi
  double v44; // xmm0_8
  int v45; // r13d
  _BYTE *v46; // rax
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+0h] [rbp-68h]
  int *v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+10h] [rbp-58h]
  __int64 v51; // [rsp+18h] [rbp-50h]
  int v52; // [rsp+24h] [rbp-44h]
  _BYTE *v54; // [rsp+30h] [rbp-38h]

  v2 = *(int **)a2;
  v3 = *((_DWORD *)a2 + 4);
  v4 = *((_QWORD *)a2 + 1);
  v5 = *((_QWORD *)this + 132);
  v6 = *((_QWORD *)this + 138);
  v7 = *((_QWORD *)this + 141);
  v49 = v2;
  v8 = *((double *)this + 1);
  if ( *((int *)this + 278) <= -2 )
    v6 = 0;
  v51 = v6;
  v9 = *((_QWORD *)this + 135);
  if ( *((int *)this + 266) <= -2 )
    v5 = 0;
  if ( *((int *)this + 272) <= -2 )
    v9 = 0;
  v50 = v9;
  if ( *((int *)this + 284) <= -2 )
    v7 = 0;
  v10 = v7 + 12LL * *((_DWORD *)this + 10);
  if ( v3 > 0 )
  {
    v11 = v2;
    v12 = (__int64)&v2[v3 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v13 = 1 << (*(_BYTE *)v11 & 7);
        v14 = (_BYTE *)(v10 + (*v11 >> 3));
        if ( !*v14 )
          break;
        ++v11;
        *v14 |= v13;
        if ( v11 == (int *)v12 )
          goto LABEL_13;
      }
      ++v11;
      *v14 = v13;
    }
    while ( v11 != (int *)v12 );
  }
LABEL_13:
  v15 = *((_DWORD *)this + 8) - 1;
  v54 = (_BYTE *)(v10 + (v15 >> 3));
  v52 = (v15 >> 3) - 1;
  if ( v15 < (int)(v15 & 0xFFFFFFF8) )
  {
    *v54 = 0;
    result = nullptr;
    if ( v52 >= 0 )
      goto LABEL_29;
    *((_DWORD *)a2 + 4) = 0;
    goto LABEL_45;
  }
  v16 = v15;
  v17 = v15 - 1LL;
  v18 = v17 - (v15 - (v15 & 0xFFFFFFF8));
  result = nullptr;
  while ( 1 )
  {
    v20 = *(double *)(v4 + 8 * v16);
    if ( fabs(v20) > v8 )
      break;
    *(_QWORD *)(v4 + 8 * v16) = 0;
    v16 = v17;
    if ( v17 == v18 )
      goto LABEL_28;
LABEL_16:
    --v17;
  }
  v21 = (_DWORD)result + 1;
  v49[(_QWORD)result] = v16;
  v22 = *(_DWORD *)(v5 + 4 * v16 + 4);
  v23 = v22 - 1;
  if ( v22 - 1 >= *(_DWORD *)(v5 + 4 * v16) )
  {
    v47 = v17;
    v24 = v22 - 2;
    v25 = v50 + 4LL * v23 - 4 * v24;
    v26 = v51 + -8 * v24 + 8LL * v23;
    do
    {
      v28 = *(_DWORD *)(v25 + 4 * v24);
      v29 = *(double *)(v26 + 8 * v24);
      v30 = 1 << (*(_BYTE *)(v25 + 4 * v24) & 7);
      v31 = (_BYTE *)(v10 + (v28 >> 3));
      if ( *v31 )
        *v31 |= v30;
      else
        *v31 = v30;
      *(double *)(v4 + 8LL * v28) = *(double *)(v4 + 8LL * v28) - v29 * v20;
      v27 = v24--;
    }
    while ( *(_DWORD *)(v5 + 4 * v16) <= v27 );
    v17 = v47;
  }
  result = (CoinIndexedVector *)v21;
  v16 = v17;
  if ( v17 != v18 )
    goto LABEL_16;
LABEL_28:
  *v54 = 0;
  if ( v52 >= 0 )
  {
LABEL_29:
    v32 = v52;
    do
    {
      while ( !*(_BYTE *)(v10 + v32) )
      {
        if ( (int)--v32 < 0 )
          goto LABEL_44;
      }
      v33 = 8 * (int)v32 + 7;
      v34 = v33 - 8;
      do
      {
        while ( 1 )
        {
          v35 = *(double *)(v4 + 8 * v33);
          if ( fabs(v35) > v8 )
            break;
          *(_QWORD *)(v4 + 8 * v33--) = 0;
          if ( v33 == v34 )
            goto LABEL_43;
        }
        v36 = (_DWORD)result + 1;
        v49[(_QWORD)result] = v33;
        v37 = *(_DWORD *)(v5 + 4 * v33 + 4);
        v38 = v37 - 1;
        if ( v37 - 1 >= *(_DWORD *)(v5 + 4 * v33) )
        {
          v48 = v32;
          v39 = v37 - 2;
          v40 = v50 + 4LL * v38 - 4 * v39;
          v41 = v51 + 8LL * v38 - 8 * v39;
          do
          {
            v43 = *(_DWORD *)(v40 + 4 * v39);
            v44 = *(double *)(v41 + 8 * v39);
            v45 = 1 << (*(_BYTE *)(v40 + 4 * v39) & 7);
            v46 = (_BYTE *)(v10 + (v43 >> 3));
            if ( *v46 )
              *v46 |= v45;
            else
              *v46 = v45;
            *(double *)(v4 + 8LL * v43) = *(double *)(v4 + 8LL * v43) - v44 * v35;
            v42 = v39--;
          }
          while ( *(_DWORD *)(v5 + 4 * v33) <= v42 );
          v32 = v48;
        }
        --v33;
        result = (CoinIndexedVector *)v36;
      }
      while ( v33 != v34 );
LABEL_43:
      *(_BYTE *)(v10 + v32--) = 0;
    }
    while ( (int)v32 >= 0 );
  }
LABEL_44:
  *((_DWORD *)a2 + 4) = (_DWORD)result;
  if ( !(_DWORD)result )
  {
LABEL_45:
    result = a2;
    *((_BYTE *)a2 + 28) = 0;
  }
  return result;
}

