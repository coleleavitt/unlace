__int64 __fastcall ClpSimplex::pivot(ClpSimplex *this)
{
  bool v1; // r12
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  int **v11; // r11
  int v12; // r10d
  int *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // edi
  int *v18; // rdx
  int *v20; // r8
  __int64 v21; // r13
  double v22; // xmm1_8
  double v23; // xmm0_8
  __int64 v24; // rsi
  double v25; // xmm3_8
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  double v29; // xmm2_8
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // xmm0_8
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // r8d
  double v37; // xmm4_8
  double v38; // xmm0_8
  CoinIndexedVector *v39; // rdi
  int **v40; // rax
  int v41; // ecx
  int *v42; // rdx
  int *v43; // rdi
  __int64 v44; // r8
  __int64 v45; // rcx
  double *v46; // rax
  __int64 v47; // rax
  int v48; // ecx
  int *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // eax
  double *v53; // rdi
  double *v54; // rcx
  int v55; // eax
  double v56; // xmm0_8
  __int64 v57; // rdx
  __int64 v58; // rax
  int **v59; // rdx
  int *v60; // rax
  int v61; // edx
  __int64 v62; // rsi
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rax
  int v67; // eax
  bool v68; // r14
  CoinIndexedVector *v69; // rdi
  int v70; // ecx
  __int64 v71; // rsi
  char v72; // r15
  __int64 v73; // rax
  __int64 v74; // rdx
  double v75; // xmm3_8
  bool v76; // cl
  __int64 v77; // rdx
  __int64 v78; // rax
  int v79; // eax
  CoinIndexedVector *v80; // rdi
  __int64 v81; // xmm0_8
  int v82; // r13d
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  CoinIndexedVector *v86; // rdi
  double v87; // [rsp+8h] [rbp-50h]
  __int64 v88; // [rsp+18h] [rbp-40h]

  v1 = 1;
  v3 = 0;
  v4 = *((int *)this + 288);
  v5 = *((_QWORD *)this + 123);
  v6 = *((_QWORD *)this + 150);
  v7 = *((_QWORD *)this + 126);
  v8 = *((_QWORD *)this + 147);
  *((_QWORD *)this + 101) = *(_QWORD *)(v5 + 8 * v4);
  *((_QWORD *)this + 102) = *(_QWORD *)(v6 + 8 * v4);
  *((_QWORD *)this + 103) = *(_QWORD *)(v7 + 8 * v4);
  v9 = *(_QWORD *)(v8 + 8 * v4);
  v10 = *((int *)this + 290);
  *((_QWORD *)this + 104) = v9;
  *((_QWORD *)this + 105) = *(_QWORD *)(v5 + 8 * v10);
  *((_QWORD *)this + 106) = *(_QWORD *)(v6 + 8 * v10);
  *((_QWORD *)this + 107) = *(_QWORD *)(v7 + 8 * v10);
  *((_QWORD *)this + 108) = *(_QWORD *)(v8 + 8 * v10);
  do
  {
    ClpSimplex::unpack(this, *((CoinIndexedVector **)this + 133));
    ClpFactorization::updateColumnFT(
      *((ClpFactorization **)this + 158),
      *((CoinIndexedVector **)this + 134),
      *((CoinIndexedVector **)this + 133));
    v11 = *((int ***)this + 133);
    *((_QWORD *)this + 99) = 0;
    v12 = *((_DWORD *)v11 + 4);
    v13 = *v11;
    if ( v12 <= 0 )
      goto LABEL_7;
    v14 = *v13;
    v15 = *((_QWORD *)this + 157);
    v16 = *((_DWORD *)this + 290);
    v17 = *v13;
    if ( *(_DWORD *)(v15 + 4 * v14) != v16 )
    {
      v18 = v13 + 1;
      while ( &v13[v12 - 1 + 1] != v18 )
      {
        v14 = *v18++;
        v17 = v14;
        if ( *(_DWORD *)(v15 + 4 * v14) == v16 )
          goto LABEL_9;
      }
LABEL_7:
      v3 = -1;
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 132));
      CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
      return v3;
    }
LABEL_9:
    v20 = v11[1];
    v21 = *(_QWORD *)(*((_QWORD *)this + 135) + 8LL);
    *((_DWORD *)this + 292) = v17;
    v22 = *(double *)&v20[2 * v14];
    *((double *)this + 99) = v22;
    if ( fabs(v22) < 0.00000001 )
      goto LABEL_7;
    if ( v16 < 0 || *((_DWORD *)this + 288) == v16 )
    {
      if ( *((int *)this + 289) <= 0 )
        v75 = *((double *)this + 101);
      else
        v75 = *((double *)this + 103);
      v24 = *((_QWORD *)this + 150);
      v25 = v75 - *((double *)this + 102);
      v88 = *((_QWORD *)this + 102);
      *((double *)this + 100) = v25;
    }
    else
    {
      if ( *((int *)this + 291) < 0 )
        v23 = *((double *)this + 107);
      else
        v23 = *((double *)this + 105);
      v24 = *((_QWORD *)this + 150);
      v88 = *((_QWORD *)this + 102);
      v25 = (*((double *)this + 106) - v23) / v22;
      *((double *)this + 100) = v25;
      *((_DWORD *)this + 289) = 2 * (v25 > 0.0) - 1;
    }
    v26 = (__int64)&v13[v12 - 1 + 1];
    while ( 1 )
    {
      v27 = *v13++;
      v28 = *(int *)(v15 + 4 * v27);
      v29 = *(double *)&v20[2 * v27] * v25;
      *(_QWORD *)(v21 + 8 * v27) = *(_QWORD *)(v24 + 8 * v28);
      *(double *)(*((_QWORD *)this + 150) + 8 * v28) = *(double *)(*((_QWORD *)this + 150) + 8 * v28) - v29;
      if ( (int *)v26 == v13 )
        break;
      v15 = *((_QWORD *)this + 157);
      v24 = *((_QWORD *)this + 150);
    }
    v30 = *((int *)this + 290);
    v31 = *((_QWORD *)this + 150);
    if ( (int)v30 < 0 )
    {
      if ( *((int *)this + 289) < 0 )
        v81 = *((_QWORD *)this + 103);
      else
        v81 = *((_QWORD *)this + 101);
      *(_QWORD *)(v31 + 8LL * *((int *)this + 288)) = v81;
    }
    else
    {
      v32 = (_QWORD *)(v31 + 8 * v30);
      if ( *((int *)this + 291) < 0 )
        v33 = *((_QWORD *)this + 107);
      else
        v33 = *((_QWORD *)this + 105);
      *v32 = v33;
      v34 = *((_QWORD *)this + 150);
      v35 = *((int *)this + 288);
      *((_QWORD *)this + 106) = *(_QWORD *)(v34 + 8LL * *((int *)this + 290));
      *(double *)(v34 + 8 * v35) = *((double *)this + 102) + v25;
    }
    v36 = *((_DWORD *)this + 292);
    v37 = *((double *)this + 104);
    v87 = v37;
    *((_QWORD *)this + 102) = *(_QWORD *)(*((_QWORD *)this + 150) + 8LL * *((int *)this + 288));
    v38 = *((double *)this + 99);
    if ( v36 >= 0 )
    {
      v39 = *((CoinIndexedVector **)this + 132);
      if ( fabs(v38) < 0.00000001 )
      {
        CoinIndexedVector::clear(v39);
        v3 = -1;
        CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
        return v3;
      }
      CoinIndexedVector::insert(v39, v36, v37 / v38);
      ClpFactorization::updateColumnTranspose(
        *((ClpFactorization **)this + 158),
        *((CoinIndexedVector **)this + 134),
        *((CoinIndexedVector **)this + 132));
      (*(void (__fastcall **)(_QWORD, ClpSimplex *, _QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 392LL))(
        *((_QWORD *)this + 24),
        this,
        *((_QWORD *)this + 132),
        *((_QWORD *)this + 139),
        *((_QWORD *)this + 138),
        -1.0);
      v40 = *((int ***)this + 138);
      v41 = *((_DWORD *)v40 + 4);
      v42 = *v40;
      v43 = v40[1];
      if ( v41 > 0 )
      {
        v44 = (__int64)&v42[v41 - 1 + 1];
        do
        {
          v45 = *v42++;
          v46 = (double *)&v43[2 * v45];
          *(double *)(8 * v45 + *((_QWORD *)this + 147)) = *(double *)(8 * v45 + *((_QWORD *)this + 147)) + *v46;
          *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v45) = *(_QWORD *)(*((_QWORD *)this + 147) + 8 * v45);
          *v46 = 0.0;
        }
        while ( (int *)v44 != v42 );
        v40 = *((int ***)this + 138);
      }
      *((_DWORD *)v40 + 4) = 0;
      *((_BYTE *)v40 + 28) = 0;
      v47 = *((_QWORD *)this + 132);
      v48 = *(_DWORD *)(v47 + 16);
      v49 = *(int **)v47;
      v50 = *(_QWORD *)(v47 + 8);
      if ( v48 > 0 )
      {
        v51 = (__int64)&v49[v48 - 1 + 1];
        do
        {
          v52 = *v49++;
          v53 = (double *)(*((_QWORD *)this + 147) + 8LL * (v52 + *((_DWORD *)this + 27)));
          v54 = (double *)(v50 + 8LL * v52);
          *v53 = *v53 + *v54;
          *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v52) = *(_QWORD *)(*((_QWORD *)this + 147)
                                                                      + 8LL * (*((_DWORD *)this + 27) + v52));
          *v54 = 0.0;
        }
        while ( (int *)v51 != v49 );
        v47 = *((_QWORD *)this + 132);
      }
      *(_DWORD *)(v47 + 16) = 0;
      *(_BYTE *)(v47 + 28) = 0;
      v36 = *((_DWORD *)this + 292);
      v38 = *((double *)this + 99);
    }
    v55 = ClpFactorization::replaceColumn(
            *((ClpFactorization **)this + 158),
            this,
            *((CoinIndexedVector **)this + 134),
            *((CoinIndexedVector **)this + 133),
            v36,
            v38,
            0,
            0.00000001);
    if ( !v55 )
    {
      if ( fabs(*((double *)this + 99)) >= 0.000001 )
      {
LABEL_64:
        v80 = *((CoinIndexedVector **)this + 133);
        v70 = *((_DWORD *)v80 + 4);
        v71 = *(_QWORD *)v80;
        if ( v70 <= 0 )
        {
          v68 = 0;
          CoinIndexedVector::clear(v80);
          goto LABEL_70;
        }
        v72 = 1;
        v68 = 0;
        goto LABEL_47;
      }
      goto LABEL_58;
    }
    if ( v55 != 2 )
    {
      v76 = v55 == 4;
      v68 = v55 == 4 || v55 == 1;
      if ( v68 )
      {
        v1 = 0;
        v3 = 1;
        goto LABEL_59;
      }
      if ( fabs(*((double *)this + 99)) >= 0.000001 )
      {
        if ( v55 == 3 )
        {
          v85 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
          if ( !v85 )
          {
            v86 = *((CoinIndexedVector **)this + 133);
            v70 = *((_DWORD *)v86 + 4);
            v71 = *(_QWORD *)v86;
            if ( v70 <= 0 )
            {
              v1 = 0;
              v3 = 1;
              CoinIndexedVector::clear(v86);
LABEL_70:
              v82 = *((_DWORD *)this + 325);
              *((_DWORD *)this + 325) = 1;
              ClpSimplex::housekeeping(this, v87 * v25);
              *((_DWORD *)this + 325) = v82;
              continue;
            }
            v1 = 0;
            v72 = 1;
            v3 = 1;
            goto LABEL_47;
          }
          v1 = *(_DWORD *)(v85 + 68) <= 199 && (double)*(int *)(v85 + 64) * 0.5 > (double)*(int *)(v85 + 68);
          if ( v1 )
          {
            v1 = 0;
            v3 = 1;
            *(double *)(v85 + 16) = 1.1 * *(double *)(v85 + 16);
            goto LABEL_64;
          }
        }
        else
        {
          v1 = 0;
        }
        goto LABEL_63;
      }
      v1 = 0;
      v3 = 1;
LABEL_58:
      v76 = v55 == 4;
      goto LABEL_59;
    }
    v56 = fabs(*((double *)this + 99));
    if ( *((_DWORD *)this + 293) == *((_DWORD *)this + 77) && v56 > 0.00001 )
    {
      v76 = 1;
      v1 = 0;
      v3 = 1;
LABEL_59:
      v77 = *((_QWORD *)this + 158);
      v78 = *(_QWORD *)(v77 + 8);
      if ( v78 )
        v79 = *(_DWORD *)(v78 + 68);
      else
        v79 = *(_DWORD *)(*(_QWORD *)(v77 + 16) + 52LL);
      if ( v79 <= 5 && !v76 )
        goto LABEL_64;
LABEL_63:
      v3 = 1;
      goto LABEL_64;
    }
    if ( v56 < 0.000001 )
    {
      v76 = 0;
      v1 = 0;
      v3 = 1;
      goto LABEL_59;
    }
    v57 = *((int *)this + 288);
    v58 = *((_QWORD *)this + 150);
    *((_QWORD *)this + 102) = v88;
    *(_QWORD *)(v58 + 8 * v57) = v88;
    v59 = *((int ***)this + 133);
    v60 = *v59;
    v61 = *((_DWORD *)v59 + 4);
    if ( v61 > 0 )
    {
      v62 = (__int64)&v60[v61 - 1 + 1];
      do
      {
        v63 = *v60++;
        *(_QWORD *)(*((_QWORD *)this + 150) + 8LL * *(int *)(*((_QWORD *)this + 157) + 4 * v63)) = *(_QWORD *)(v21 + 8 * v63);
      }
      while ( (int *)v62 != v60 );
    }
    v64 = *((int *)this + 290);
    if ( (int)v64 >= 0 )
      *((_QWORD *)this + 106) = *(_QWORD *)(*((_QWORD *)this + 150) + 8 * v64);
    v65 = *((_QWORD *)this + 158);
    v66 = *(_QWORD *)(v65 + 8);
    if ( v66 )
      v67 = *(_DWORD *)(v66 + 68);
    else
      v67 = *(_DWORD *)(*(_QWORD *)(v65 + 16) + 52LL);
    v68 = 0;
    v3 = -1;
    if ( v67 )
    {
      if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
        goto LABEL_88;
      ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
      v83 = *((_QWORD *)this + 150);
      v84 = *((int *)this + 290);
      *((_QWORD *)this + 102) = *(_QWORD *)(v83 + 8LL * *((int *)this + 288));
      v3 = 1;
      v68 = 1;
      if ( (int)v84 >= 0 )
        *((_QWORD *)this + 106) = *(_QWORD *)(v83 + 8 * v84);
    }
    v69 = *((CoinIndexedVector **)this + 133);
    v70 = *((_DWORD *)v69 + 4);
    v71 = *(_QWORD *)v69;
    if ( v70 <= 0 )
    {
      CoinIndexedVector::clear(v69);
      v1 = 0;
      continue;
    }
    v1 = 0;
    v72 = 0;
LABEL_47:
    v73 = 0;
    do
    {
      v74 = *(int *)(v71 + 4 * v73++);
      *(_QWORD *)(v21 + 8 * v74) = 0;
    }
    while ( v70 > (int)v73 );
    CoinIndexedVector::clear(*((CoinIndexedVector **)this + 133));
    if ( v72 )
      goto LABEL_70;
  }
  while ( v68 );
  if ( v3 == 1 )
  {
    if ( (unsigned int)ClpSimplex::internalFactorize(this, 1) )
    {
LABEL_88:
      puts("help in user pivot");
      abort();
    }
  }
  else if ( !v1 )
  {
    return v3;
  }
  ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
  return v3;
}

