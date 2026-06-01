__int64 __fastcall ClpPrimalColumnSteepest::checkAccuracy(
        ClpPrimalColumnSteepest *this,
        int a2,
        double a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  __int64 result; // rax
  int v10; // edx
  int *v11; // r8
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rdi
  double v15; // xmm2_8
  __int64 v16; // r13
  int *v17; // rax
  __int64 v18; // rdx
  signed int v19; // ecx
  double *v20; // rsi
  int v21; // eax
  double v22; // xmm0_8
  double v23; // xmm1_8
  double v24; // xmm4_8
  __int64 v25; // rcx
  int *v26; // rax
  __int64 v27; // rdx
  double *v28; // rdx
  double v29; // xmm0_8
  ClpSimplex *v30; // rdi
  int v31; // eax
  int *v32; // r8
  int *v33; // rdx
  int v34; // eax
  int *v35; // r11
  int *v36; // r15
  __int64 v37; // rax
  __int64 v38; // rsi
  int *v39; // r11
  __int64 v40; // rax
  signed int v41; // edx
  double *v42; // rcx
  int v43; // eax
  int *v45; // [rsp+0h] [rbp-58h]
  int *v46; // [rsp+0h] [rbp-58h]
  int *v47; // [rsp+0h] [rbp-58h]
  int *v48; // [rsp+8h] [rbp-50h]
  int *v49; // [rsp+8h] [rbp-50h]
  __int64 v50; // [rsp+8h] [rbp-50h]
  __int64 v52; // [rsp+18h] [rbp-40h]

  result = (unsigned int)(*((_DWORD *)this + 19) - 4);
  if ( (unsigned int)result <= 1 && !*((_DWORD *)this + 22) )
    return result;
  ClpSimplex::unpack(*((ClpSimplex **)this + 1), a4, a2);
  ClpFactorization::updateColumn(*(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL), a5, a4, 0);
  v10 = *((_DWORD *)a4 + 4);
  v11 = *(int **)a4;
  v12 = *((_QWORD *)a4 + 1);
  v13 = *(_QWORD *)(*((_QWORD *)this + 1) + 1256LL);
  if ( *((_DWORD *)this + 19) != 1 )
  {
    v14 = *((_QWORD *)this + 8);
    if ( v10 <= 0 )
    {
      v15 = 0.0;
    }
    else
    {
      v15 = 0.0;
      v16 = (__int64)&v11[v10 - 1 + 1];
      v17 = *(int **)a4;
      do
      {
        v18 = *v17;
        v19 = *(_DWORD *)(v13 + 4 * v18);
        v20 = (double *)(v12 + 8 * v18);
        LODWORD(v18) = *(_DWORD *)(v14 + 4LL * (v19 >> 5));
        if ( _bittest((const int *)&v18, v19) )
          v15 = v15 + *v20 * *v20;
        ++v17;
        *v20 = 0.0;
      }
      while ( (int *)v16 != v17 );
    }
    v21 = *(_DWORD *)(v14 + 4LL * (a2 >> 5));
    if ( !_bittest(&v21, a2) )
      goto LABEL_11;
    goto LABEL_10;
  }
  if ( v10 > 0 )
  {
    v15 = 0.0;
    v25 = (__int64)&v11[v10 - 1 + 1];
    v26 = *(int **)a4;
    do
    {
      v27 = *v26++;
      v28 = (double *)(v12 + 8 * v27);
      v29 = *v28;
      *v28 = 0.0;
      v15 = v15 + v29 * v29;
    }
    while ( (int *)v25 != v26 );
LABEL_10:
    v15 = v15 + 1.0;
    goto LABEL_11;
  }
  v15 = 1.0;
LABEL_11:
  result = *((_QWORD *)this + 4);
  v22 = *(double *)(result + 8LL * a2);
  if ( v22 <= 0.0001 )
  {
    if ( v15 <= 0.0001 )
    {
      v24 = 0.0;
      v15 = 0.0001;
      v22 = 0.0001;
      v23 = 0.0001;
    }
    else
    {
      v23 = v15;
      v22 = 0.0001;
      v24 = fabs(v15 - 0.0001);
    }
  }
  else
  {
    v15 = fmax(v15, 0.0001);
    v23 = fmax(v15, v22);
    v24 = fabs(v15 - v22);
  }
  *((_DWORD *)a4 + 4) = 0;
  *((_BYTE *)a4 + 28) = 0;
  if ( v24 > v23 * a3 )
  {
    v48 = v11;
    printf("check %d old weight %g, new %g\n", a2, v22, v15);
    if ( !*((_DWORD *)this + 19) )
    {
      v30 = *((ClpSimplex **)this + 1);
      *((_DWORD *)a4 + 4) = 0;
      *((_BYTE *)a4 + 28) = 0;
      ClpSimplex::unpack(v30, a4, a2);
      v31 = *((_DWORD *)a4 + 4);
      v32 = v48;
      if ( v31 > 0 )
      {
        v33 = v48;
        v52 = (__int64)&v48[v31 - 1 + 1];
        do
        {
          v49 = v32;
          v45 = v33;
          printf("(%d,%g) ", *v33, *(double *)(v12 + 8LL * *v33));
          v32 = v49;
          v33 = v45 + 1;
        }
        while ( (int *)v52 != v45 + 1 );
      }
      v46 = v32;
      putchar(10);
      ClpFactorization::updateColumn(*(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL), a5, a4, 0);
      v34 = *((_DWORD *)a4 + 4);
      if ( v34 <= 0 )
      {
        putchar(10);
        v38 = *((_QWORD *)this + 8);
        v15 = 0.0;
      }
      else
      {
        v35 = v46;
        v36 = v46;
        v50 = (__int64)&v46[v34 - 1 + 1];
        do
        {
          v37 = *v36;
          v47 = v35;
          ++v36;
          printf("(%d,%g) ", v37, *(double *)(v12 + 8 * v37));
          v35 = v47;
        }
        while ( (int *)v50 != v36 );
        putchar(10);
        v38 = *((_QWORD *)this + 8);
        v15 = 0.0;
        v39 = v47;
        do
        {
          v40 = *v39;
          v41 = *(_DWORD *)(v13 + 4 * v40);
          v42 = (double *)(v12 + 8 * v40);
          LODWORD(v40) = *(_DWORD *)(v38 + 4LL * (v41 >> 5));
          if ( _bittest((const int *)&v40, v41) )
            v15 = v15 + *v42 * *v42;
          ++v39;
          *v42 = 0.0;
        }
        while ( v36 != v39 );
      }
      v43 = *(_DWORD *)(v38 + 4LL * (a2 >> 5));
      if ( _bittest(&v43, a2) )
        v15 = v15 + 1.0;
    }
    result = *((_QWORD *)this + 4);
    *(double *)(result + 8LL * a2) = v15;
  }
  return result;
}

