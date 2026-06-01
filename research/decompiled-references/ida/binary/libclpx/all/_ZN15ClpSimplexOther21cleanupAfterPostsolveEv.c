__int64 __fastcall ClpSimplexOther::cleanupAfterPostsolve(
        ClpSimplexOther *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  char *v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 (*v12)(void); // rdx
  __int64 v13; // r12
  __int64 (__fastcall *v14)(ClpPackedMatrix *); // rdx
  int *v15; // r13
  __int64 (__fastcall *v16)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v17)(ClpPackedMatrix *); // rax
  _DWORD *v18; // r14
  int v19; // r10d
  int v20; // r9d
  __int64 v21; // rax
  int *v22; // rsi
  _DWORD *v23; // rdi
  __int64 v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  char *v28; // rdx
  int v29; // r15d
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r11
  __int64 v34; // r15
  double v35; // xmm4_8
  __int64 v36; // rcx
  double v37; // xmm4_8
  double v38; // xmm5_8
  __int64 (__fastcall ***v39)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64, double, double, double, double, double, double, double); // rdi
  const void *v40; // rsi
  size_t v41; // rbx
  double v42; // xmm4_8
  double v43; // xmm5_8
  double v45; // xmm5_8
  __int64 v46; // rdx
  int v47; // edi
  __int64 v48; // rsi
  __int64 v49; // r8
  double *v50; // rsi
  int v51; // r15d
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-58h]
  __int64 v56; // [rsp+8h] [rbp-50h]
  char v57[64]; // [rsp+18h] [rbp-40h] BYREF

  v9 = (char *)operator new[](*((int *)this + 26));
  memset(v9, 0, *((int *)this + 26));
  v10 = *((_QWORD **)this + 24);
  v11 = (_QWORD *)*v10;
  v12 = *(__int64 (**)(void))(*v10 + 48LL);
  if ( (char *)v12 == (char *)ClpPackedMatrix::getIndices )
  {
    v13 = *(_QWORD *)(v10[11] + 40LL);
    v14 = (__int64 (__fastcall *)(ClpPackedMatrix *))v11[7];
    if ( v14 == ClpPackedMatrix::getVectorStarts )
      goto LABEL_3;
  }
  else
  {
    v52 = v12();
    v10 = *((_QWORD **)this + 24);
    v13 = v52;
    v11 = (_QWORD *)*v10;
    v14 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v10 + 56LL);
    if ( v14 == ClpPackedMatrix::getVectorStarts )
    {
LABEL_3:
      v15 = *(int **)(v10[11] + 48LL);
      v16 = (__int64 (__fastcall *)(ClpPackedMatrix *))v11[8];
      if ( v16 == ClpPackedMatrix::getVectorLengths )
        goto LABEL_4;
      goto LABEL_42;
    }
  }
  v53 = ((__int64 (*)(void))v14)();
  v10 = *((_QWORD **)this + 24);
  v15 = (int *)v53;
  v11 = (_QWORD *)*v10;
  v16 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v10 + 64LL);
  if ( v16 == ClpPackedMatrix::getVectorLengths )
  {
LABEL_4:
    v17 = (__int64 (__fastcall *)(ClpPackedMatrix *))v11[5];
    v18 = *(_DWORD **)(v10[11] + 56LL);
    if ( v17 == ClpPackedMatrix::getElements )
      goto LABEL_5;
LABEL_43:
    v21 = ((__int64 (*)(void))v17)();
    v19 = *((_DWORD *)this + 27);
    v20 = *((_DWORD *)this + 26);
    if ( v19 > 0 )
      goto LABEL_6;
LABEL_44:
    if ( v20 <= 0 )
      goto LABEL_23;
    a8 = *((double *)this + 4);
    a3 = *(double *)this;
    a4 = *((double *)this + 3);
LABEL_13:
    v30 = *((_QWORD *)this + 19);
    v31 = *((_QWORD *)this + 18);
    v32 = 0;
    do
    {
      a2 = *(double *)(v30 + 8 * v32);
      if ( a2 > *(double *)(v31 + 8 * v32) )
        v9[v32] = 3;
      ++v32;
    }
    while ( v20 > (int)v32 );
    if ( v19 <= 0 )
      goto LABEL_23;
    goto LABEL_18;
  }
LABEL_42:
  v54 = ((__int64 (*)(void))v16)();
  v10 = *((_QWORD **)this + 24);
  v18 = (_DWORD *)v54;
  v17 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v10 + 40LL);
  if ( v17 != ClpPackedMatrix::getElements )
    goto LABEL_43;
LABEL_5:
  v19 = *((_DWORD *)this + 27);
  v20 = *((_DWORD *)this + 26);
  v21 = *(_QWORD *)(v10[11] + 32LL);
  if ( v19 <= 0 )
    goto LABEL_44;
LABEL_6:
  v22 = v15;
  v23 = v18;
  v24 = (__int64)&v15[v19 - 1 + 1];
  do
  {
    while ( 1 )
    {
      v25 = *v22;
      if ( (int)v25 < (int)v25 + *v23 )
        break;
LABEL_11:
      ++v22;
      ++v23;
      if ( (int *)v24 == v22 )
        goto LABEL_12;
    }
    v26 = (int)v25 + 1;
    v27 = v13 + 4 * (v25 - v26);
    do
    {
      while ( 1 )
      {
        v28 = &v9[*(int *)(v27 + 4 * v26)];
        if ( *v28 )
          break;
        *v28 = 1;
        v29 = v26++;
        if ( v29 >= *v22 + *v23 )
          goto LABEL_11;
      }
      *v28 = 2;
      v51 = v26++;
    }
    while ( *v23 + *v22 > v51 );
    ++v22;
    ++v23;
  }
  while ( (int *)v24 != v22 );
LABEL_12:
  a8 = *((double *)this + 4);
  a3 = *(double *)this;
  a4 = *((double *)this + 3);
  if ( v20 > 0 )
    goto LABEL_13;
LABEL_18:
  v33 = *((_QWORD *)this + 17);
  v34 = *((_QWORD *)this + 23);
  v35 = -a4;
  v36 = 0;
  v55 = *((_QWORD *)this + 15);
  v56 = *((_QWORD *)this + 22);
  do
  {
    a2 = *(double *)(v33 + 8 * v36) * a3;
    switch ( *(_BYTE *)(*((_QWORD *)this + 33) + v36) & 7 )
    {
      case 0:
      case 4:
        a5 = *(double *)(v34 + 8 * v36) - a8;
        v45 = *(double *)(v55 + 8 * v36);
        if ( a5 > v45 && v35 > a2 )
          goto LABEL_30;
        a5 = *(double *)(v56 + 8 * v36) + a8;
        if ( v45 > a5 )
          goto LABEL_29;
        goto LABEL_22;
      case 1:
        if ( a2 > a4 )
          goto LABEL_30;
        goto LABEL_21;
      case 2:
LABEL_29:
        if ( a2 > a4 )
          goto LABEL_30;
        goto LABEL_22;
      case 3:
LABEL_21:
        if ( v35 <= a2 )
          goto LABEL_22;
LABEL_30:
        v46 = v15[v36];
        v47 = v18[v36];
        if ( (int)v46 + v47 <= (int)v46 )
          goto LABEL_22;
        v48 = *(int *)(v13 + 4 * v46);
        if ( v9[v48] == 1 )
          goto LABEL_36;
        v49 = ++v46 + (unsigned int)(v47 - 1);
        break;
      default:
        goto LABEL_22;
    }
    while ( v49 != v46 )
    {
      v48 = *(int *)(v13 + 4 * v46);
      if ( v9[v48] == 1 )
      {
LABEL_36:
        v50 = (double *)(*((_QWORD *)this + 16) + 8 * v48);
        a2 = a2 / *(double *)(v21 + 8 * v46) + *v50;
        *v50 = a2;
        *(_QWORD *)(v33 + 8 * v36) = 0;
        break;
      }
      ++v46;
    }
LABEL_22:
    ++v36;
  }
  while ( v19 > (int)v36 );
LABEL_23:
  operator delete[](v9);
  v39 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64, double, double, double, double, double, double, double))this
        + 20);
  v40 = nullptr;
  v41 = 8LL * *((int *)this + 27);
  if ( v39 )
    v40 = (const void *)(**v39)(v39, 0, 0, v57, 0, 2, a2, a3, a4, a5, v37, v38, a8);
  memcpy(*((void **)this + 17), v40, v41);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double, double, double, double, double, double, double))(**((_QWORD **)this + 24) + 376LL))(
    *((_QWORD *)this + 24),
    *((_QWORD *)this + 16),
    *((_QWORD *)this + 17),
    -1.0,
    a3,
    a4,
    a5,
    v42,
    v43,
    a8);
  return ClpSimplex::checkSolutionInternal(this);
}

