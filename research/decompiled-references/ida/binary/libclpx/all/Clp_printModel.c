int __fastcall Clp_printModel(__int64 *a1, const char *a2, double a3)
{
  __int64 v3; // r15
  __int64 (***v4)(void); // rdi
  __int64 (*v5)(void); // rax
  int v6; // r14d
  __int64 (*v7)(void); // rax
  int *v8; // rbx
  __int64 (*v9)(void); // r13
  __int64 v10; // rax
  double *v11; // r12
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v14; // rdx
  CoinPackedMatrix *v15; // rdi
  __int64 (__fastcall *v16)(ClpPackedMatrix *); // rax
  __int64 v17; // r14
  int v18; // ecx
  int v19; // edx
  __int64 (*v20)(void); // r15
  __int64 (*v21)(void); // rax
  double *v22; // r13
  __int64 (*v23)(void); // r12
  __int64 v24; // r14
  __int64 v25; // rbx
  double v26; // xmm1_8
  double v27; // xmm0_8
  int v28; // r8d
  int v29; // ecx
  int v30; // edx
  double v31; // xmm2_8
  int result; // eax
  __int64 v33; // rbx
  double v34; // xmm1_8
  int v35; // ecx
  int v36; // edx
  double v37; // xmm0_8
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // [rsp-8h] [rbp-A0h]
  double *v43; // [rsp+0h] [rbp-98h]
  int v44; // [rsp+8h] [rbp-90h]
  __int64 v45; // [rsp+8h] [rbp-90h]
  int v47; // [rsp+1Ch] [rbp-7Ch]
  double *v48; // [rsp+20h] [rbp-78h]
  double *v49; // [rsp+28h] [rbp-70h]
  double *v50; // [rsp+30h] [rbp-68h]
  double *v51; // [rsp+38h] [rbp-60h]
  __int64 v52; // [rsp+40h] [rbp-58h]
  __int64 (*v53)(void); // [rsp+48h] [rbp-50h]
  char v54[64]; // [rsp+58h] [rbp-40h] BYREF

  v3 = *a1;
  v4 = *(__int64 (****)(void))(*a1 + 192);
  v47 = *(_DWORD *)(v3 + 104);
  v44 = *(_DWORD *)(v3 + 108);
  v5 = (*v4)[2];
  if ( (char *)v5 == (char *)ClpPackedMatrix::getNumElements )
  {
    v6 = *((_DWORD *)v4[11] + 18);
  }
  else
  {
    v39 = v5();
    v4 = *(__int64 (****)(void))(v3 + 192);
    v6 = v39;
    if ( !v4 )
      BUG();
  }
  v7 = **v4;
  if ( (char *)v7 == (char *)ClpPackedMatrix::getPackedMatrix )
  {
    v8 = (int *)v4[11][6];
  }
  else
  {
    v40 = v7();
    v4 = *(__int64 (****)(void))(v3 + 192);
    v8 = *(int **)(v40 + 48);
    if ( !v4 )
      BUG();
    v7 = **v4;
  }
  if ( (char *)v7 == (char *)ClpPackedMatrix::getPackedMatrix )
  {
    v53 = v4[11][7];
  }
  else
  {
    v38 = v7();
    v4 = *(__int64 (****)(void))(v3 + 192);
    if ( !v4 )
      BUG();
    v53 = *(__int64 (**)(void))(v38 + 56);
    v7 = **v4;
  }
  if ( (char *)v7 == (char *)ClpPackedMatrix::getPackedMatrix )
  {
    v9 = v4[11][5];
  }
  else
  {
    v41 = v7();
    v4 = *(__int64 (****)(void))(v3 + 192);
    v9 = *(__int64 (**)(void))(v41 + 40);
    if ( !v4 )
      BUG();
    v7 = **v4;
  }
  if ( (char *)v7 == (char *)ClpPackedMatrix::getPackedMatrix )
    v10 = (__int64)v4[11];
  else
    v10 = v7();
  v11 = *(double **)(v10 + 32);
  v43 = nullptr;
  v12 = *a1;
  v13 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))(*a1 + 160);
  v50 = *(double **)(*a1 + 176);
  v51 = *(double **)(*a1 + 184);
  if ( v13 )
  {
    v43 = (double *)(**v13)(v13, 0, 0, v54, 0, 2);
    v12 = *a1;
  }
  v48 = *(double **)(v12 + 144);
  v49 = *(double **)(v12 + 152);
  printf("%s numcols = %i, numrows = %i, numelem = %i\n", a2, v44, v47, v6);
  printf("%s model = %p, start = %p, index = %p, value = %p\n", a2, a1, v8, v9, v11);
  v14 = *(_QWORD *)(v3 + 192);
  v15 = nullptr;
  if ( v14 )
  {
    v16 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v14;
    if ( v16 == ClpPackedMatrix::getPackedMatrix )
      v15 = *(CoinPackedMatrix **)(v14 + 88);
    else
      v15 = (CoinPackedMatrix *)v16(*(ClpPackedMatrix **)(v3 + 192));
  }
  CoinPackedMatrix::dumpMatrix(v15, nullptr);
  if ( v44 < 0 )
    goto LABEL_36;
  v17 = 0;
  do
  {
    v18 = v8[v17];
    v19 = v17++;
    printf("%s start[%i] = %i\n", a2, v19, v18);
  }
  while ( v44 + 1LL != v17 );
  if ( v44 )
  {
    v20 = v53;
    v52 = (unsigned int)(v44 - 1);
    v45 = (__int64)&v8[v52 + 1];
    v21 = v9;
    v22 = v11;
    v23 = v21;
    do
    {
      v24 = *v8;
      if ( (int)v24 < (int)v24 + *(_DWORD *)v20 )
      {
        do
        {
          a3 = v22[v24];
          printf("%s index[%i] = %i, value[%i] = %g\n", a2, v24, *((_DWORD *)v23 + v24), v24, a3);
          ++v24;
        }
        while ( *v8 + *(_DWORD *)v20 > (int)v24 );
      }
      ++v8;
      v20 = (__int64 (*)(void))((char *)v20 + 4);
    }
    while ( (int *)v45 != v8 );
    printf("%s collb = %p, colub = %p, obj = %p, rowlb = %p, rowub = %p\n", a2, v50, v51, v43, v48, v49);
    Clp_optimizationDirection(a1, v42);
    printf("%s optimization direction = %g\n", a2, a3);
    puts("  (1 - minimize, -1 - maximize, 0 - ignore)");
    v25 = 0;
    do
    {
      v26 = v51[v25];
      v27 = v50[v25];
      v28 = v25;
      v29 = v25;
      v30 = v25;
      v31 = v43[v25++];
      result = printf("%s collb[%i] = %g, colub[%i] = %g, obj[%i] = %g\n", a2, v30, v27, v29, v26, v28, v31);
    }
    while ( v52 + 1 != v25 );
  }
  else
  {
LABEL_36:
    printf("%s collb = %p, colub = %p, obj = %p, rowlb = %p, rowub = %p\n", a2, v50, v51, v43, v48, v49);
    Clp_optimizationDirection(a1, a2);
    printf("%s optimization direction = %g\n", a2, a3);
    result = puts("  (1 - minimize, -1 - maximize, 0 - ignore)");
  }
  if ( v47 > 0 )
  {
    v33 = 0;
    do
    {
      v34 = v49[v33];
      v35 = v33;
      v36 = v33;
      v37 = v48[v33++];
      result = printf("%s rowlb[%i] = %g, rowub[%i] = %g\n", a2, v36, v37, v35, v34);
    }
    while ( v33 != (unsigned int)(v47 - 1) + 1LL );
  }
  return result;
}

