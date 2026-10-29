double __fastcall ClpDualRowSteepest::updateWeights(
        ClpDualRowSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5)
{
  double result; // xmm0_8
  ClpFactorization *v11; // rdi
  int v12; // r11d
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r12
  double v17; // xmm6_8
  __int64 v18; // rax
  double v19; // xmm1_8
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r14d
  __int64 *v23; // r15
  __int64 v24; // r10
  double v25; // xmm1_8
  __int64 v26; // r9
  __int64 v27; // rdi
  double v28; // xmm8_8
  __int64 v29; // r11
  __int64 v30; // r13
  __int64 v31; // r8
  double v32; // xmm6_8
  __int64 v33; // rbx
  __int64 v34; // rax
  double v35; // xmm0_8
  int v36; // edx
  double v37; // xmm1_8
  double *v38; // rcx
  double v39; // xmm2_8
  double v40; // xmm2_8
  double v41; // rax
  __int64 v42; // r10
  __int64 v43; // r15
  int v44; // esi
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r9
  double v51; // xmm6_8
  __int64 v52; // rax
  double v53; // xmm1_8
  __int64 v54; // rdi
  bool v55; // r8
  __int64 v56; // rax
  __int64 *v57; // r11
  __int64 v58; // r15
  double v59; // xmm1_8
  __int64 v60; // rdx
  __int64 v61; // r14
  __int64 v62; // r8
  __int64 v63; // rax
  double v64; // xmm8_8
  __int64 v65; // r13
  __int64 v66; // r10
  __int64 v67; // r9
  double v68; // xmm6_8
  __int64 v69; // rbx
  __int64 v70; // rax
  int v71; // ecx
  double v72; // xmm1_8
  __int64 v73; // rdx
  double *v74; // rsi
  double v75; // xmm2_8
  double v76; // xmm2_8
  __int64 v77; // rax
  double v78; // xmm1_8
  __int64 v79; // rdi
  __int64 (__fastcall *v80)(CoinDenseFactorization *__hidden); // rax
  __int64 v81; // rax
  __int64 (__fastcall *v82)(double); // rax
  __int64 v83; // rax
  __int64 v84; // [rsp+0h] [rbp-78h]
  __int64 v85; // [rsp+0h] [rbp-78h]
  __int64 v86; // [rsp+8h] [rbp-70h]
  __int64 v87; // [rsp+8h] [rbp-70h]
  int v88; // [rsp+10h] [rbp-68h]
  __int64 v89; // [rsp+10h] [rbp-68h]
  __int64 v90; // [rsp+28h] [rbp-50h]
  __int64 v91; // [rsp+30h] [rbp-48h]

  result = 0.0;
  if ( !*((_BYTE *)a5 + 28) )
    return result;
  v11 = *(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL);
  if ( *(_QWORD *)v11 )
  {
    ClpFactorization::updateColumnFT(v11, a3, a5);
    CoinIndexedVector::clear(*((CoinIndexedVector **)this + 6));
    v12 = *((_DWORD *)a2 + 4);
    v13 = *((_QWORD *)a2 + 1);
    v14 = *(_QWORD *)a2;
    v15 = *(_QWORD *)a3;
    v16 = *((_QWORD *)a3 + 1);
    if ( v12 <= 0 )
    {
      *((_DWORD *)a3 + 4) = v12;
      if ( !v12 )
        *((_BYTE *)a3 + 28) = 0;
      v17 = 0.0;
    }
    else
    {
      v17 = 0.0;
      v18 = 0;
      do
      {
        v19 = *(double *)(v13 + 2 * v18);
        v20 = *(int *)(v14 + v18);
        *(double *)(v16 + 8 * v20) = v19;
        *(_DWORD *)(v15 + v18) = v20;
        v18 += 4;
        v17 = v17 + v19 * v19;
      }
      while ( v18 != 4LL * (unsigned int)(v12 - 1) + 4 );
      *((_DWORD *)a3 + 4) = v12;
    }
    ClpFactorization::updateColumn(
      *(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL),
      *((CoinIndexedVector **)this + 6),
      a3,
      0);
    v21 = *((_QWORD *)this + 1);
    v22 = *((_DWORD *)a5 + 4);
    v23 = *((__int64 **)this + 6);
    v24 = *((_QWORD *)a5 + 1);
    v25 = *(double *)(v21 + 792);
    v26 = *(_QWORD *)a5;
    v27 = *(int *)(v21 + 1168);
    v28 = 2.0 / v25;
    v29 = v23[1];
    v30 = *v23;
    v31 = *((_QWORD *)this + 4);
    v32 = v17 / (v25 * v25);
    if ( v22 <= 0 )
    {
      *((_DWORD *)v23 + 4) = 0;
      *((_BYTE *)v23 + 28) = 0;
      result = 1.0e-50;
    }
    else
    {
      v33 = 4LL * (unsigned int)(v22 - 1) + 4;
      v34 = 0;
      v35 = 0.0;
      do
      {
        while ( 1 )
        {
          v36 = *(_DWORD *)(v26 + v34);
          v37 = *(double *)(v24 + 2 * v34);
          if ( (_DWORD)v27 == v36 )
            v35 = *(double *)(v24 + 2 * v34);
          v38 = (double *)(v31 + 8LL * v36);
          v39 = *v38;
          *(double *)(v29 + 2 * v34) = *v38;
          *(_DWORD *)(v30 + v34) = v36;
          v40 = v39 + v37 * (v32 * v37 + *(double *)(v16 + 8LL * v36) * v28);
          if ( v40 >= 0.0001 )
            break;
          v34 += 4;
          *v38 = 0.0001;
          if ( v34 == v33 )
            goto LABEL_13;
        }
        v34 += 4;
        *v38 = v40;
      }
      while ( v34 != v33 );
LABEL_13:
      v41 = v35;
      if ( v35 == 0.0 )
        v41 = 1.0e-50;
      result = v41;
      *((_BYTE *)v23 + 28) = 1;
      *((_DWORD *)v23 + 4) = v22;
    }
    *(double *)(v31 + 8 * v27) = fmax(0.0001, v32);
    CoinIndexedVector::clear(a3);
    return result;
  }
  CoinIndexedVector::clear(*((CoinIndexedVector **)this + 6));
  v42 = *((_QWORD *)this + 1);
  v43 = *((_QWORD *)a2 + 1);
  v44 = *((_DWORD *)a2 + 4);
  v45 = *(_QWORD *)a2;
  v46 = *(_QWORD *)a3;
  v47 = *((_QWORD *)a3 + 1);
  v48 = *(_QWORD *)(v42 + 1264);
  v49 = *(_QWORD *)(v48 + 8);
  if ( v49 )
  {
    if ( *(int *)(v49 + 112) < -1 )
    {
LABEL_45:
      if ( v44 > 0 )
      {
        v51 = 0.0;
        v77 = 0;
        do
        {
          v78 = *(double *)(v43 + 2 * v77);
          v79 = *(int *)(v45 + v77);
          *(double *)(v47 + 8 * v79) = v78;
          *(_DWORD *)(v46 + v77) = v79;
          v77 += 4;
          v51 = v51 + v78 * v78;
        }
        while ( v77 != 4LL * (unsigned int)(v44 - 1) + 4 );
        v55 = 0;
        v50 = 0;
        goto LABEL_28;
      }
      v55 = 0;
      v50 = 0;
LABEL_58:
      *((_DWORD *)a3 + 4) = v44;
      if ( !v44 )
        *((_BYTE *)a3 + 28) = 0;
      v51 = 0.0;
      goto LABEL_29;
    }
    v50 = *(_QWORD *)(v49 + 104);
  }
  else
  {
    v80 = *(__int64 (__fastcall **)(CoinDenseFactorization *__hidden))(**(_QWORD **)(v48 + 16) + 128LL);
    if ( v80 == CoinDenseFactorization::permute )
      goto LABEL_45;
    v89 = *(_QWORD *)a3;
    v87 = v45;
    v81 = ((__int64 (__fastcall *)(double))v80)(0.0);
    v42 = *((_QWORD *)this + 1);
    v50 = v81;
    v46 = v89;
    v45 = v87;
  }
  if ( !v50 )
    goto LABEL_45;
  if ( v44 <= 0 )
  {
    v55 = 1;
    goto LABEL_58;
  }
  v51 = 0.0;
  v52 = 0;
  do
  {
    v53 = *(double *)(v43 + 2 * v52);
    v54 = *(int *)(v50 + 4LL * *(int *)(v45 + v52));
    *(double *)(v47 + 8 * v54) = v53;
    *(_DWORD *)(v46 + v52) = v54;
    v52 += 4;
    v51 = v51 + v53 * v53;
  }
  while ( v52 != 4LL * (unsigned int)(v44 - 1) + 4 );
  v55 = 1;
LABEL_28:
  *((_DWORD *)a3 + 4) = v44;
LABEL_29:
  v84 = v50;
  ClpFactorization::updateTwoColumnsFT(*(ClpFactorization **)(v42 + 1264), a4, a5, a3, v55);
  v56 = *((_QWORD *)this + 1);
  v57 = *((__int64 **)this + 6);
  v58 = *((_QWORD *)a5 + 1);
  v59 = *(double *)(v56 + 792);
  v60 = *(_QWORD *)(v56 + 1264);
  v61 = *(int *)(v56 + 1168);
  v62 = *(_QWORD *)a5;
  v63 = *(_QWORD *)(v60 + 8);
  v64 = 2.0 / v59;
  v88 = *((_DWORD *)a5 + 4);
  v65 = v57[1];
  v66 = *v57;
  v67 = v84;
  v68 = v51 / (v59 * v59);
  if ( v63 )
  {
    v86 = 0;
    if ( *(int *)(v63 + 88) >= -1 )
      v86 = *(_QWORD *)(v63 + 80);
  }
  else
  {
    v86 = 0;
    v82 = *(__int64 (__fastcall **)(double))(**(_QWORD **)(v60 + 16) + 128LL);
    if ( (char *)v82 != (char *)CoinDenseFactorization::permute )
    {
      v91 = *v57;
      v90 = v62;
      v83 = v82(0.0);
      v57 = *((__int64 **)this + 6);
      v86 = v83;
      v66 = v91;
      v62 = v90;
      v64 = 2.0 / v59;
      v67 = v84;
    }
  }
  v69 = *((_QWORD *)this + 4);
  if ( v88 <= 0 )
  {
    *((_DWORD *)v57 + 4) = 0;
    *((_BYTE *)v57 + 28) = 0;
    result = 0.0;
  }
  else
  {
    result = 0.0;
    v85 = 4LL * (unsigned int)(v88 - 1) + 4;
    v70 = 0;
    do
    {
      while ( 1 )
      {
        v71 = *(_DWORD *)(v62 + v70);
        v72 = *(double *)(v58 + 2 * v70);
        if ( (_DWORD)v61 == v71 )
          result = *(double *)(v58 + 2 * v70);
        v73 = 8LL * v71;
        v74 = (double *)(v69 + v73);
        v75 = *(double *)(v69 + v73);
        *(double *)(v65 + 2 * v70) = v75;
        *(_DWORD *)(v66 + v70) = v71;
        if ( v67 )
          v73 = 8LL * *(int *)(v86 + 4LL * v71);
        v76 = v75 + v72 * (v68 * v72 + *(double *)(v47 + v73) * v64);
        if ( v76 >= 0.0001 )
          break;
        v70 += 4;
        *v74 = 0.0001;
        if ( v70 == v85 )
          goto LABEL_40;
      }
      v70 += 4;
      *v74 = v76;
    }
    while ( v85 != v70 );
LABEL_40:
    *((_BYTE *)v57 + 28) = 1;
    *((_DWORD *)v57 + 4) = v88;
  }
  *(double *)(v69 + 8 * v61) = fmax(0.0001, v68);
  CoinIndexedVector::clear(a3);
  return result;
}

