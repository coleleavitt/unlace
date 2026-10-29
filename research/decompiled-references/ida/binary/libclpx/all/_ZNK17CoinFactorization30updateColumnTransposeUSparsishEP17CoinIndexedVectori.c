CoinIndexedVector *__fastcall CoinFactorization::updateColumnTransposeUSparsish(
        CoinFactorization *this,
        CoinIndexedVector *a2,
        int a3)
{
  int v3; // ecx
  int *v4; // r14
  __int64 v5; // r9
  __int64 v6; // rbx
  double v7; // xmm3_8
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r11
  int *v14; // rdi
  __int64 v15; // r10
  int v16; // r14d
  _BYTE *v17; // rax
  int v18; // edx
  int v19; // eax
  int v20; // esi
  __int64 v21; // r15
  int v22; // r15d
  __int64 v23; // r8
  double v24; // xmm1_8
  int v25; // r14d
  __int64 v26; // r10
  int v27; // eax
  __int64 v28; // r10
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rbp
  __int64 v32; // r10
  int v33; // edx
  double v34; // xmm0_8
  int v35; // r8d
  _BYTE *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r15d
  __int64 v40; // rdx
  double v41; // xmm1_8
  int v42; // r11d
  int v43; // eax
  int v44; // ecx
  __int64 v45; // rsi
  __int64 v46; // r10
  __int64 v47; // r8
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rax
  CoinIndexedVector *result; // rax
  __int64 v54; // [rsp+0h] [rbp-98h]
  __int64 v55; // [rsp+8h] [rbp-90h]
  __int64 v56; // [rsp+10h] [rbp-88h]
  __int64 v57; // [rsp+18h] [rbp-80h]
  __int64 v58; // [rsp+20h] [rbp-78h]
  __int64 v59; // [rsp+28h] [rbp-70h]
  __int64 v60; // [rsp+30h] [rbp-68h]
  __int64 v61; // [rsp+38h] [rbp-60h]
  __int64 v62; // [rsp+40h] [rbp-58h]
  __int64 v63; // [rsp+48h] [rbp-50h]
  int v64; // [rsp+50h] [rbp-48h]
  signed int v65; // [rsp+54h] [rbp-44h]

  v3 = *((_DWORD *)a2 + 4);
  v4 = *(int **)a2;
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_QWORD *)this + 23);
  v7 = *((double *)this + 1);
  v58 = *(_QWORD *)a2;
  v64 = *((_DWORD *)this + 145);
  v8 = *((_QWORD *)this + 26);
  if ( *((int *)this + 48) <= -2 )
    v6 = 0;
  v59 = v6;
  v9 = *((_QWORD *)this + 84);
  if ( *((int *)this + 170) <= -2 )
    v9 = 0;
  v60 = v9;
  v10 = *((_QWORD *)this + 63);
  if ( *((int *)this + 128) <= -2 )
    v10 = 0;
  v61 = v10;
  v11 = *((_QWORD *)this + 75);
  if ( *((int *)this + 152) <= -2 )
    v11 = 0;
  if ( *((int *)this + 54) <= -2 )
    v8 = 0;
  v57 = v8;
  v12 = *((_QWORD *)this + 141);
  if ( *((int *)this + 284) <= -2 )
    v12 = 0;
  v13 = v12 + 12LL * *((_DWORD *)this + 10);
  if ( v3 > 0 )
  {
    v14 = v4;
    v15 = (__int64)&v4[v3 - 1 + 1];
    do
    {
      while ( 1 )
      {
        v16 = 1 << (*(_BYTE *)v14 & 7);
        v17 = (_BYTE *)(v13 + (*v14 >> 3));
        if ( !*v17 )
          break;
        ++v14;
        *v17 |= v16;
        if ( v14 == (int *)v15 )
          goto LABEL_17;
      }
      ++v14;
      *v17 = v16;
    }
    while ( v14 != (int *)v15 );
  }
LABEL_17:
  v18 = a3 >> 3;
  v19 = v64 >> 3;
  v65 = v64 & 0xFFFFFFF8;
  if ( v18 >= v64 >> 3 )
  {
    v39 = 0;
    *(_BYTE *)(v13 + v19) = 0;
    if ( v64 > (int)(v64 & 0xFFFFFFF8) )
      goto LABEL_35;
    result = a2;
    *((_DWORD *)a2 + 4) = 0;
    goto LABEL_43;
  }
  v55 = v18;
  v20 = 0;
  v21 = v18 + 1LL;
  v62 = v21 + (unsigned int)(~v18 + v19);
  while ( !*(_BYTE *)(v13 + v55) )
  {
    v55 = v21;
    if ( v21 == v62 )
      goto LABEL_34;
LABEL_20:
    ++v21;
  }
  v63 = v21;
  v22 = v20;
  v23 = 8 * (int)v55;
  v54 = v23 + 8;
  do
  {
    while ( 1 )
    {
      v24 = *(double *)(v5 + 8 * v23);
      v25 = v23;
      if ( fabs(v24) > v7 )
        break;
      *(_QWORD *)(v5 + 8 * v23++) = 0;
      if ( v54 == v23 )
        goto LABEL_33;
    }
    v26 = *(int *)(v59 + 4 * v23);
    v27 = *(_DWORD *)(v57 + 4 * v23);
    if ( (int)v26 < (int)v26 + v27 )
    {
      v28 = 4 * v26;
      v29 = 0;
      v30 = 4LL * (unsigned int)(v27 - 1) + 4;
      v56 = v23;
      v31 = v61 + v28;
      v32 = v60 + v28;
      do
      {
        v33 = *(_DWORD *)(v31 + v29);
        v34 = *(double *)(v11 + 8LL * *(int *)(v32 + v29));
        v35 = 1 << (*(_BYTE *)(v31 + v29) & 7);
        v36 = (_BYTE *)(v13 + (v33 >> 3));
        if ( *v36 )
          *v36 |= v35;
        else
          *v36 = v35;
        v29 += 4;
        *(double *)(v5 + 8LL * v33) = *(double *)(v5 + 8LL * v33) - v34 * v24;
      }
      while ( v30 != v29 );
      v23 = v56;
    }
    v37 = v22;
    ++v23;
    ++v22;
    *(_DWORD *)(v58 + 4 * v37) = v25;
  }
  while ( v54 != v23 );
LABEL_33:
  v20 = v22;
  v21 = v63;
  v38 = v55;
  v55 = v63;
  *(_BYTE *)(v13 + v38) = 0;
  if ( v63 != v62 )
    goto LABEL_20;
LABEL_34:
  v39 = v20;
  *(_BYTE *)(v13 + (v64 >> 3)) = 0;
  if ( v64 > v65 )
  {
LABEL_35:
    v40 = v65;
    do
    {
      while ( 1 )
      {
        v41 = *(double *)(v5 + 8 * v40);
        v42 = v40;
        if ( fabs(v41) > v7 )
          break;
        *(_QWORD *)(v5 + 8 * v40++) = 0;
        if ( v64 <= (int)v40 )
          goto LABEL_42;
      }
      v43 = *(_DWORD *)(v59 + 4 * v40);
      v44 = *(_DWORD *)(v57 + 4 * v40);
      if ( v43 < v43 + v44 )
      {
        v45 = 4LL * v43;
        v46 = 4LL * (unsigned int)(v44 - 1) + 4;
        v47 = v61 + v45;
        v48 = v60 + v45;
        v49 = 0;
        do
        {
          v50 = *(int *)(v48 + v49);
          v51 = *(int *)(v47 + v49);
          v49 += 4;
          *(double *)(v5 + 8 * v51) = *(double *)(v5 + 8 * v51) - *(double *)(v11 + 8 * v50) * v41;
        }
        while ( v49 != v46 );
      }
      ++v40;
      v52 = v39++;
      *(_DWORD *)(v58 + 4 * v52) = v42;
    }
    while ( v64 > (int)v40 );
  }
LABEL_42:
  result = a2;
  *((_DWORD *)a2 + 4) = v39;
  if ( !v39 )
LABEL_43:
    *((_BYTE *)result + 28) = 0;
  return result;
}

