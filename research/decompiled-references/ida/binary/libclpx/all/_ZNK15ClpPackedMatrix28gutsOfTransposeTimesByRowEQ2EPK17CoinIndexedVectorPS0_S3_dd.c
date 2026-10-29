CoinIndexedVector *__fastcall ClpPackedMatrix::gutsOfTransposeTimesByRowEQ2(
        ClpPackedMatrix *this,
        const CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        double a5,
        double a6)
{
  _QWORD *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  double *v10; // r8
  int *v11; // rsi
  double v12; // xmm4_8
  __int64 v13; // rdx
  double v14; // xmm3_8
  __int64 v15; // rax
  int *v16; // r15
  int *v17; // rdi
  int *v18; // r12
  int *v19; // rsi
  int v20; // eax
  int v21; // r8d
  __int64 v22; // rdi
  __int64 v23; // rdx
  double v24; // xmm2_8
  int *v25; // r10
  double v26; // xmm3_8
  __int64 v27; // r11
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // r10
  __int64 v32; // r14
  __int64 v33; // rbp
  int v34; // edx
  __int64 v35; // r8
  int v36; // edi
  double v37; // xmm1_8
  __int64 v38; // r8
  __int64 v39; // r12
  __int64 v40; // rbp
  double *v41; // rdi
  int v42; // edi
  __int64 v43; // rdi
  double v44; // xmm2_8
  __int64 v45; // rax
  int v46; // edi
  __int64 v47; // rax
  int v48; // ebp
  __int64 v49; // r10
  __int64 v50; // r8
  _QWORD *v51; // rdi
  __int64 v54; // [rsp+8h] [rbp-50h]
  __int64 v55; // [rsp+10h] [rbp-48h]
  int *v56; // [rsp+18h] [rbp-40h]

  v7 = *((_QWORD **)this + 11);
  v8 = *(_QWORD *)a3;
  v9 = *((_QWORD *)a3 + 1);
  v10 = *((double **)a2 + 1);
  v11 = *(int **)a2;
  v12 = *v10;
  v55 = v7[5];
  v13 = v7[6];
  v14 = v10[1];
  v54 = v7[4];
  v15 = *v11;
  v16 = (int *)(v13 + 4 * v15 + 4);
  v17 = (int *)(v13 + 4 * v15);
  v18 = (int *)(v13 + 4LL * v11[1] + 4);
  v19 = (int *)(v13 + 4LL * v11[1]);
  v20 = *v16;
  v56 = v17;
  v21 = *v18;
  v22 = *v17;
  v23 = *v19;
  if ( *v16 - (int)v22 <= *v18 - (int)v23 )
  {
    v24 = v14;
    v21 = *v16;
    v20 = *v18;
    v25 = v16;
    v14 = v12;
    v16 = v18;
    v12 = v24;
    v18 = v25;
    v56 = v19;
    v23 = (int)v22;
    v22 = *v19;
  }
  v26 = v14 * a6;
  v27 = *(_QWORD *)a4;
  v28 = v8 + 4LL * *((int *)a3 + 5);
  if ( (int)v23 >= v21 )
  {
    v37 = a6 * v12;
    if ( (int)v22 >= v20 )
      goto LABEL_20;
    v34 = 0;
  }
  else
  {
    v29 = (int)v23 + 1;
    v30 = v54 + -8 * v29 + 8 * v23;
    v31 = v9 - 8 * v29;
    v32 = v55 + -4 * v29 + 4 * v23;
    v33 = v8 - 4 * v29;
    v34 = 0;
    do
    {
      v35 = *(int *)(v32 + 4 * v29);
      v36 = v29;
      *(double *)(v31 + 8 * v29) = *(double *)(v30 + 8 * v29) * v26;
      *(_BYTE *)(v28 + v35) = 1;
      *(_DWORD *)(v27 + 4 * v35) = v34;
      *(_DWORD *)(v33 + 4 * v29) = v35;
      ++v34;
      ++v29;
    }
    while ( *v18 > v36 );
    v37 = a6 * v12;
    v22 = *v56;
    v20 = *v16;
    if ( (int)v22 >= *v16 )
      goto LABEL_14;
  }
  v38 = (int)v22 + 1;
  v39 = v54 + -8 * v38 + 8 * v22;
  v40 = v55 + -4 * v38 + 4 * v22;
  do
  {
    while ( 1 )
    {
      v43 = *(int *)(v40 + 4 * v38);
      v44 = *(double *)(v39 + 8 * v38) * v37;
      if ( !*(_BYTE *)(v28 + v43) )
        break;
      v41 = (double *)(v9 + 8LL * *(int *)(v27 + 4 * v43));
      *v41 = v44 + *v41;
LABEL_9:
      v42 = v38++;
      if ( v42 >= v20 )
        goto LABEL_13;
    }
    if ( fabs(v44) <= a5 )
      goto LABEL_9;
    v45 = v34++;
    *(double *)(v9 + 8 * v45) = v44;
    *(_DWORD *)(v8 + 4 * v45) = v43;
    v20 = *v16;
    v46 = v38++;
  }
  while ( v46 < *v16 );
LABEL_13:
  if ( !v34 )
  {
LABEL_20:
    *((_DWORD *)a3 + 4) = 0;
LABEL_21:
    *((_BYTE *)a3 + 28) = 0;
    goto LABEL_19;
  }
LABEL_14:
  v47 = 0;
  v48 = 0;
  do
  {
    v49 = v48;
    v50 = 8LL * v48;
    *(_BYTE *)(v28 + *(int *)(v8 + 4 * v47)) = 0;
    v51 = (_QWORD *)(v9 + v50);
    if ( fabs(*(double *)(v9 + 8 * v47)) > a5 )
    {
      *v51 = *(_QWORD *)(v9 + 8 * v47);
      ++v48;
      *(_DWORD *)(v8 + 4 * v49) = *(_DWORD *)(v8 + 4 * v47);
      v51 = (_QWORD *)(v9 + v50 + 8);
    }
    ++v47;
  }
  while ( (unsigned int)(v34 - 1) + 1LL != v47 );
  memset(v51, 0, 8LL * (v34 - v48));
  *((_DWORD *)a3 + 4) = v48;
  if ( !v48 )
    goto LABEL_21;
LABEL_19:
  *((_DWORD *)a4 + 4) = 0;
  *((_BYTE *)a4 + 28) = 0;
  return a4;
}

