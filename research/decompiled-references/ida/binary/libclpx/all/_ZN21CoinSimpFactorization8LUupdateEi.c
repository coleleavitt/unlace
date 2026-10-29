__int64 __fastcall CoinSimpFactorization::LUupdate(CoinSimpFactorization *this, int a2)
{
  _QWORD *v4; // r12
  int *v5; // rbp
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // edx
  __int64 v9; // rbp
  unsigned __int64 v10; // r14
  int v11; // r15d
  int v12; // eax
  __int64 v13; // rdi
  _DWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // xmm0_8
  int v18; // r14d
  __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // r11
  __int64 v22; // r10
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // xmm0_8
  _DWORD *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 result; // rax
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rcx
  int v36; // r15d
  __int64 v37; // r8
  __int64 v38; // r10
  __int64 v39; // r11
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // eax
  bool v43; // cc
  int v44; // eax
  int v45; // eax
  _DWORD *v46; // rcx
  __int64 v47; // r12
  __int64 v48; // r13
  unsigned __int64 v49; // rbp
  __int64 v50; // r14
  __int64 v51; // xmm0_8
  int v52; // eax
  _DWORD *v53; // rcx
  __int64 v54; // rdx
  int v55; // edi
  __int64 v56; // rcx
  __int64 v57; // r13
  __int64 v58; // r9
  __int64 v59; // rbp
  __int64 v60; // rdx
  int v61; // r15d
  __int64 v62; // r12
  double *v63; // rax
  __int64 v64; // r14
  __int64 v65; // r8
  __int64 v66; // r11
  double v67; // xmm1_8
  int v68; // r10d
  int *v69; // rax
  int *v70; // r8
  double *i; // rsi
  __int64 v72; // r11
  double v73; // xmm2_8
  __int64 v74; // rsi
  __int64 v75; // rax
  int v76; // r10d
  double *v77; // rax
  double *v78; // rsi
  int v79; // r12d
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // r13
  __int64 v83; // rdi
  size_t v84; // rbp
  double *v85; // rdx
  int v86; // r11d
  double v87; // xmm0_8
  size_t v88; // rdx
  _DWORD *v89; // r10
  __int64 v90; // rdi
  __int64 v91; // rdi
  __int64 v92; // r13
  int v93; // edi
  int v94; // [rsp+0h] [rbp-88h]
  int v95; // [rsp+0h] [rbp-88h]
  __int64 v96; // [rsp+0h] [rbp-88h]
  int *v97; // [rsp+18h] [rbp-70h]
  int *v98; // [rsp+18h] [rbp-70h]
  __int64 v99; // [rsp+18h] [rbp-70h]
  __int64 v100; // [rsp+18h] [rbp-70h]
  __int64 v101; // [rsp+20h] [rbp-68h]
  __int64 v102; // [rsp+20h] [rbp-68h]
  __int64 v103; // [rsp+28h] [rbp-60h]
  __int64 v104; // [rsp+28h] [rbp-60h]
  __int64 v105; // [rsp+28h] [rbp-60h]
  int v106; // [rsp+30h] [rbp-58h]
  __int64 v107; // [rsp+30h] [rbp-58h]
  __int64 v108; // [rsp+38h] [rbp-50h]
  __int64 v109; // [rsp+40h] [rbp-48h]
  int v110; // [rsp+48h] [rbp-40h]
  int v111; // [rsp+4Ch] [rbp-3Ch]

  v4 = *((_QWORD **)this + 20);
  v5 = *((int **)this + 21);
  v94 = *((_DWORD *)this + 44);
  v101 = a2;
  v103 = 4LL * a2;
  v6 = (_DWORD *)(*((_QWORD *)this + 42) + v103);
  v97 = (int *)(v103 + *((_QWORD *)this + 41));
  v7 = *v97;
  v8 = *v97 + *v6;
  if ( *v97 < v8 )
  {
    v98 = *((int **)this + 21);
    v9 = 4LL * v7;
    v10 = 4 * (v7 + (unsigned __int64)(unsigned int)(v8 - v7 - 1) + 1);
    do
    {
      v11 = *(_DWORD *)(*((_QWORD *)this + 44) + v9);
      v9 += 4;
      v12 = CoinSimpFactorization::findInRow(this, v11, a2);
      v13 = *((_QWORD *)this + 35);
      v14 = (_DWORD *)(*((_QWORD *)this + 34) + 4LL * v11);
      v15 = *((_QWORD *)this + 36);
      v16 = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL * v11) + *v14;
      v17 = *(_QWORD *)(v13 + 8 * v16 - 8);
      LODWORD(v16) = *(_DWORD *)(v15 + 4 * v16 - 4);
      *(_QWORD *)(v13 + 8LL * v12) = v17;
      *(_DWORD *)(v15 + 4LL * v12) = v16;
      --*v14;
    }
    while ( v10 != v9 );
    v5 = v98;
    v6 = (_DWORD *)(v103 + *((_QWORD *)this + 42));
    v97 = (int *)(*((_QWORD *)this + 41) + v103);
  }
  *v6 = 0;
  v18 = -1;
  if ( v94 > 0 )
  {
    v19 = *((_QWORD *)this + 33);
    v20 = *((_QWORD *)this + 34);
    v21 = *((_QWORD *)this + 36);
    v22 = *((_QWORD *)this + 35);
    v23 = 0;
    v24 = *((_QWORD *)this + 56);
    do
    {
      v25 = v5[v23];
      v26 = v4[v23];
      v27 = (_DWORD *)(v20 + 4 * v25);
      v28 = *(_DWORD *)(v19 + 4 * v25) + *v27;
      *(_DWORD *)(v21 + 4 * v28) = a2;
      *(_QWORD *)(v22 + 8 * v28) = v26;
      ++*v27;
      if ( v18 < *(_DWORD *)(v24 + 4 * v25) )
        v18 = *(_DWORD *)(v24 + 4 * v25);
      ++v23;
    }
    while ( (unsigned int)(v94 - 1) + 1LL != v23 );
  }
  memcpy((void *)(*((_QWORD *)this + 43) + 8LL * *v97), v4, 8LL * v94);
  memcpy((void *)(*((_QWORD *)this + 44) + 4LL * *(int *)(*((_QWORD *)this + 41) + 4 * v101)), v5, 4LL * v94);
  v29 = *((_QWORD *)this + 52);
  *(_DWORD *)(*((_QWORD *)this + 42) + 4 * v101) = v94;
  result = 1;
  v31 = *(_DWORD *)(v29 + 4 * v101);
  v95 = v31;
  if ( v31 > v18 )
    return result;
  v32 = v31;
  v33 = *((_QWORD *)this + 55);
  v34 = *((_QWORD *)this + 56);
  v104 = 4LL * v31;
  v35 = *((_QWORD *)this + 51);
  v36 = *(_DWORD *)(v33 + v104);
  v37 = *(int *)(v35 + v104);
  if ( v31 < v18 )
  {
    v38 = v31 + 1LL;
    v39 = v38 + (unsigned int)(~v31 + v18);
    while ( 1 )
    {
      v40 = *(int *)(v33 + 4 * v32 + 4);
      *(_DWORD *)(v33 + 4 * v32) = v40;
      *(_DWORD *)(v34 + 4 * v40) = v32;
      v41 = *(int *)(v35 + 4 * v32 + 4);
      *(_DWORD *)(v35 + 4 * v32) = v41;
      *(_DWORD *)(v29 + 4 * v41) = v32;
      v32 = v38;
      if ( v39 == v38 )
        break;
      ++v38;
    }
  }
  *(_DWORD *)(v33 + 4LL * v18) = v36;
  v108 = v18;
  v109 = 4LL * v18;
  *(_DWORD *)(v34 + 4LL * v36) = v18;
  *(_DWORD *)(v35 + v109) = v37;
  *(_DWORD *)(v29 + 4 * v37) = v18;
  v42 = *((_DWORD *)this + 141);
  v102 = v36;
  v99 = 4LL * v36;
  if ( v42 > v95 )
  {
    v43 = v42 <= v18;
    v44 = v42 - 1;
    if ( !v43 )
      v44 = v18;
    *((_DWORD *)this + 141) = v44;
  }
  v45 = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL * v36);
  v46 = (_DWORD *)(*((_QWORD *)this + 34) + v99);
  if ( v45 < v45 + *v46 )
  {
    v106 = v18;
    v47 = 4LL * v45;
    v48 = 8LL * v45;
    v49 = 4 * (v45 + (unsigned __int64)(unsigned int)(*v46 - 1) + 1);
    do
    {
      v50 = *(int *)(*((_QWORD *)this + 36) + v47);
      v47 += 4;
      v51 = *(_QWORD *)(*((_QWORD *)this + 35) + v48);
      v48 += 8;
      *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v50) = v51;
      v52 = CoinSimpFactorization::findInColumn(this, v50, v36);
      v53 = (_DWORD *)(*((_QWORD *)this + 42) + 4 * v50);
      v54 = *(_DWORD *)(*((_QWORD *)this + 41) + 4 * v50) + *v53;
      *(_DWORD *)(*((_QWORD *)this + 44) + 4LL * v52) = *(_DWORD *)(*((_QWORD *)this + 44) + 4 * v54 - 4);
      *(_QWORD *)(*((_QWORD *)this + 43) + 8LL * v52) = *(_QWORD *)(*((_QWORD *)this + 43) + 8 * v54 - 8);
      --*v53;
    }
    while ( v49 != v47 );
    v46 = (_DWORD *)(*((_QWORD *)this + 34) + v99);
    v18 = v106;
  }
  *v46 = 0;
  CoinSimpFactorization::newEta(this, v36, v18 - v95);
  v55 = *((_DWORD *)this + 124);
  v110 = v55;
  if ( v95 >= v18 )
  {
    v56 = *((_QWORD *)this + 13);
    v57 = *((_QWORD *)this + 50);
    v58 = *((_QWORD *)this + 33);
    v107 = *((_QWORD *)this + 51);
    v100 = *((_QWORD *)this + 35);
    LODWORD(v75) = *((_DWORD *)this + 125);
LABEL_43:
    *((_DWORD *)this + 125) = v75 - 1;
    goto LABEL_32;
  }
  v56 = *((_QWORD *)this + 13);
  v57 = *((_QWORD *)this + 50);
  v58 = *((_QWORD *)this + 33);
  v59 = 4LL * (unsigned int)(~v95 + v18) + 4;
  v107 = *((_QWORD *)this + 51);
  v100 = *((_QWORD *)this + 35);
  v111 = v36;
  v60 = 0;
  v61 = v18;
  v62 = v104 + v107;
  v105 = *((_QWORD *)this + 55) + v104;
  do
  {
    v63 = (double *)(v56 + 8LL * *(int *)(v62 + v60));
    if ( *v63 != 0.0 )
    {
      v64 = *((_QWORD *)this + 34);
      v65 = *(int *)(v105 + v60);
      v66 = *(int *)(v58 + 4 * v65);
      v67 = *v63 * *(double *)(v57 + 8 * v65);
      v68 = *(_DWORD *)(v105 + v60);
      *v63 = 0.0;
      v96 = *((_QWORD *)this + 36);
      v69 = (int *)(v96 + 4 * v66);
      v70 = (int *)(v96 + 4LL * (*(_DWORD *)(v64 + 4 * v65) + (int)v66));
      for ( i = (double *)(v100 + 8 * v66); v70 != v69; *(double *)(v56 + 8 * v72) = *(double *)(v56 + 8 * v72)
                                                                                   - v73 * v67 )
      {
        v72 = *v69;
        v73 = *i;
        ++v69;
        ++i;
      }
      *(double *)(*((_QWORD *)this + 61) + 8LL * v55) = v67;
      v74 = *((_QWORD *)this + 60);
      *((_DWORD *)this + 124) = v55 + 1;
      *(_DWORD *)(v74 + 4LL * v55) = v68;
      v55 = *((_DWORD *)this + 124);
    }
    v60 += 4;
  }
  while ( v59 != v60 );
  v18 = v61;
  v75 = *((int *)this + 125);
  v36 = v111;
  if ( v110 == v55 )
    goto LABEL_43;
  *(_DWORD *)(*((_QWORD *)this + 59) + 4 * v75) = v55 - v110;
LABEL_32:
  v76 = *((_DWORD *)this + 10);
  v77 = (double *)(v56 + 8LL * *(int *)(v107 + 4 * v108));
  *(double *)(v57 + 8 * v102) = 1.0 / *v77;
  *v77 = 0.0;
  v78 = *((double **)this + 14);
  if ( v18 + 1 >= v76 )
  {
    v84 = 0;
    v88 = 0;
    v79 = 0;
  }
  else
  {
    v79 = 0;
    v80 = v18 + 2;
    v81 = 0;
    v82 = v109 - 4 * v80 + 4 + v107;
    do
    {
      while ( 1 )
      {
        v83 = *(int *)(v82 + 4 * v80);
        v84 = 4 * v81;
        v85 = (double *)(v56 + 8 * v83);
        v86 = *(_DWORD *)(v82 + 4 * v80);
        v87 = *v85;
        *v85 = 0.0;
        v88 = 8 * v81;
        if ( *((double *)this + 2) > fabs(v87) )
          break;
        ++v79;
        v88 += 8LL;
        v84 += 4LL;
        v89 = (_DWORD *)(*((_QWORD *)this + 42) + 4 * v83);
        v90 = *v89 + *(_DWORD *)(*((_QWORD *)this + 41) + 4 * v83);
        *(_DWORD *)(*((_QWORD *)this + 44) + 4 * v90) = v36;
        *(double *)(*((_QWORD *)this + 43) + 8 * v90) = v87;
        v91 = *((_QWORD *)this + 17);
        ++*v89;
        v78[v81] = v87;
        *(_DWORD *)(v91 + 4 * v81) = v86;
        LODWORD(v91) = v80++;
        v76 = *((_DWORD *)this + 10);
        if ( (int)v91 >= v76 )
          goto LABEL_38;
        v81 = v79;
      }
      v93 = v80++;
    }
    while ( v93 < v76 );
  }
LABEL_38:
  v92 = *(int *)(v58 + 4 * v102);
  memcpy((void *)(v100 + 8 * v92), v78, v88);
  memcpy((void *)(*((_QWORD *)this + 36) + 4 * v92), *((const void **)this + 17), v84);
  *(_DWORD *)(*((_QWORD *)this + 34) + 4 * v102) = v79;
  return 2
       * (unsigned int)(COERCE_DOUBLE(*(_QWORD *)(*((_QWORD *)this + 50) + 8 * v102) & 0x7FFFFFFFFFFFFFFFLL) > *((double *)this + 65));
}

