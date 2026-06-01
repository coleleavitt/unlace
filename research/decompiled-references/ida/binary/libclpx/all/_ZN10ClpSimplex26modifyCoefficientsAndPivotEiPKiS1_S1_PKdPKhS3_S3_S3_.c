__int64 __fastcall ClpSimplex::modifyCoefficientsAndPivot(
        ClpSimplex *this,
        int a2,
        const int *a3,
        const int *a4,
        const int *a5,
        const double *a6,
        const unsigned __int8 *a7,
        double *a8,
        const double *a9,
        const double *a10)
{
  ClpSimplex *v11; // rbp
  const void *v12; // rdi
  unsigned __int64 v13; // rax
  int v14; // edi
  int v15; // ecx
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r8
  CoinIndexedVector *v19; // rax
  CoinIndexedVector *v20; // rax
  CoinIndexedVector *v21; // rax
  CoinIndexedVector *v22; // rax
  __int64 (__fastcall *v23)(ClpPackedMatrix *); // rax
  CoinPackedMatrix *v24; // rax
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rax
  char v29; // r15
  __int64 v30; // rbx
  int *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  int v34; // r8d
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v37; // r10d
  __int64 v38; // rcx
  __int64 v39; // r9
  double v40; // xmm0_8
  __int64 v41; // rdi
  double *v42; // rsi
  double v43; // xmm1_8
  double *v44; // rdx
  __int64 v45; // rdx
  int v46; // r13d
  int v47; // r12d
  int v48; // esi
  __int64 v49; // rcx
  int *v50; // r8
  int *v51; // r10
  int v52; // edi
  int v53; // r9d
  int v54; // edi
  __int64 v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // r9
  double v58; // xmm0_8
  int v59; // esi
  int v60; // edi
  int v61; // esi
  __int64 v62; // rbp
  __int64 v63; // rcx
  __int64 v64; // r12
  __int64 v65; // r14
  int *v66; // r8
  __int64 v67; // r11
  __int64 v68; // r10
  int v69; // edi
  __int64 v70; // rcx
  __int64 v71; // r9
  __int64 v72; // r10
  double v73; // xmm0_8
  __int64 v74; // rdi
  int v75; // r15d
  const int *v76; // r15
  const int *v77; // r11
  __int64 v78; // rcx
  __int64 v79; // r8
  const int *v80; // r10
  const double *v81; // r9
  __int64 v82; // rcx
  double v83; // xmm0_8
  __int64 v84; // rdi
  int *v85; // r8
  _DWORD *v86; // r10
  __int64 v87; // rdi
  __int64 v88; // rcx
  __int64 v89; // r9
  __int64 v90; // r14
  __int64 v91; // rdi
  double *v92; // r8
  double v93; // xmm0_8
  __int64 v94; // r8
  int v95; // edi
  bool v96; // cc
  __int64 v97; // rdi
  int v98; // r9d
  __int64 v99; // rcx
  const int *v100; // r10
  __int64 v101; // rdi
  double *v102; // r8
  double v103; // xmm0_8
  __int64 v104; // r8
  int v105; // edi
  __int64 v106; // rax
  int v107; // edx
  __int64 v108; // rdi
  __int64 v109; // rdx
  int v110; // ecx
  int v111; // esi
  int v112; // eax
  __int64 v113; // rax
  unsigned int v114; // ebx
  __int64 v115; // rax
  unsigned __int8 v116; // si
  __int64 v117; // rdx
  int v118; // ecx
  __int64 v119; // rdx
  __int64 v120; // rax
  double v121; // xmm0_8
  double *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rax
  double v125; // xmm0_8
  double *v126; // rax
  bool i; // zf
  __int64 v128; // rdx
  __int64 v129; // rax
  int v130; // ecx
  double v131; // xmm0_8
  double *v132; // rax
  __int64 (__fastcall ***v133)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  double *v137; // rcx
  double v138; // xmm0_8
  int v140; // r15d
  double v141; // xmm2_8
  int v142; // edi
  int v143; // edi
  __int64 (__fastcall ***v144)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  const void *v145; // rsi
  size_t v146; // r12
  ClpNonLinearCost *v147; // rdi
  const int *v148; // r13
  __int64 v149; // rax
  const int *v150; // r13
  const int *v151; // rax
  ClpSimplex *v152; // r15
  const int *v153; // rax
  _DWORD *v154; // rbp
  unsigned int v155; // r14d
  __int64 v156; // rax
  __int64 v157; // rbx
  const double *v158; // r12
  const int *v159; // r13
  int v160; // eax
  int *v161; // [rsp+0h] [rbp-E8h]
  const int *v162; // [rsp+0h] [rbp-E8h]
  _DWORD *v164; // [rsp+10h] [rbp-D8h]
  const int *v165; // [rsp+10h] [rbp-D8h]
  const int *v167; // [rsp+18h] [rbp-D0h]
  char *v170; // [rsp+30h] [rbp-B8h]
  int v171; // [rsp+38h] [rbp-B0h]
  _DWORD *v172; // [rsp+40h] [rbp-A8h]
  __int64 v173; // [rsp+48h] [rbp-A0h]
  __int64 v174; // [rsp+58h] [rbp-90h]
  __int64 v175; // [rsp+60h] [rbp-88h]
  CoinIndexedVector *v176; // [rsp+68h] [rbp-80h]
  __int64 (__fastcall ***v177)(ClpPackedMatrix *); // [rsp+70h] [rbp-78h]
  CoinPackedMatrix *v178; // [rsp+78h] [rbp-70h]
  int v179; // [rsp+88h] [rbp-60h]
  bool v180; // [rsp+8Eh] [rbp-5Ah]
  char v181; // [rsp+8Fh] [rbp-59h]
  ClpSimplex *v182; // [rsp+90h] [rbp-58h]
  const int *v183; // [rsp+98h] [rbp-50h]
  _BYTE v184[64]; // [rsp+A8h] [rbp-40h] BYREF

  v11 = this;
  v12 = *((const void **)this + 24);
  if ( !v12 )
    goto LABEL_171;
  v177 = (__int64 (__fastcall ***)(ClpPackedMatrix *))__dynamic_cast(
                                                        v12,
                                                        (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                                                        (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
                                                        0);
  v180 = 0;
  if ( *((_QWORD *)v11 + 123) )
    v180 = *((_QWORD *)v11 + 158) != 0;
  if ( !v177 )
  {
LABEL_171:
    if ( a2 > 0 )
    {
      v150 = a4;
      v162 = a3;
      v151 = &a3[a2 - 1 + 1];
      v167 = a3;
      v152 = v11;
      v165 = v151;
      v153 = v162;
      v154 = v150 + 1;
      do
      {
        v155 = *v153;
        if ( *((_DWORD *)v152 + 27) > *v153 )
        {
          v156 = (int)*(v154 - 1);
          if ( *v154 > (int)v156 )
          {
            v157 = (int)v156 + 1;
            v158 = &a6[v156 - v157];
            v159 = &a5[v156 - v157];
            do
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, double))(**((_QWORD **)v152 + 24) + 112LL))(
                *((_QWORD *)v152 + 24),
                (unsigned int)v159[v157],
                v155,
                0,
                v158[v157]);
              v160 = v157++;
            }
            while ( *v154 > v160 );
          }
        }
        ++v162;
        ++v154;
        v153 = v162;
      }
      while ( v165 != v162 );
      v11 = v152;
      v114 = -1;
      a3 = v167;
      v180 = 0;
      if ( a7 )
      {
LABEL_102:
        v115 = 0;
        do
        {
          v116 = a7[v115];
          v117 = a3[v115++];
          *(_BYTE *)(*((_QWORD *)v11 + 33) + v117) = v116;
        }
        while ( a2 > (int)v115 );
      }
      if ( !a8 )
        goto LABEL_143;
LABEL_105:
      v118 = *((_DWORD *)v11 + 27);
      v119 = 0;
      do
      {
        v120 = a3[v119];
        v121 = a8[v119];
        if ( (int)v120 >= v118 )
          v122 = (double *)(*((_QWORD *)v11 + 18) + 8LL * ((int)v120 - v118));
        else
          v122 = (double *)(*((_QWORD *)v11 + 22) + 8 * v120);
        if ( v121 != *v122 )
        {
          *v122 = v121;
          v118 = *((_DWORD *)v11 + 27);
        }
        ++v119;
      }
      while ( a2 > (int)v119 );
      v123 = 0;
      v124 = *a3;
      v125 = *a8;
      if ( (int)v124 >= v118 )
        goto LABEL_117;
LABEL_112:
      v126 = (double *)(*((_QWORD *)v11 + 22) + 8 * v124);
      for ( i = v125 == *v126; ; i = v125 == *v126 )
      {
        if ( !i )
          *v126 = v125;
        if ( a2 <= (int)++v123 )
          break;
        v124 = a3[v123];
        v118 = *((_DWORD *)v11 + 27);
        v125 = a8[v123];
        if ( (int)v124 < v118 )
          goto LABEL_112;
LABEL_117:
        v126 = (double *)(*((_QWORD *)v11 + 18) + 8LL * ((int)v124 - v118));
      }
      if ( a9 )
        goto LABEL_120;
      goto LABEL_126;
    }
    v114 = -1;
    v180 = 0;
    if ( a7 )
      goto LABEL_142;
LABEL_139:
    if ( !a8 )
      goto LABEL_143;
    if ( a2 <= 0 )
      goto LABEL_126;
    goto LABEL_105;
  }
  v13 = 2 * a2 + 2;
  if ( v13 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v164 = (_DWORD *)operator new[](4 * v13);
  v170 = (char *)&v164[a2 + 1];
  if ( a2 <= 0 )
    goto LABEL_82;
  v14 = *((_DWORD *)v11 + 27);
  v15 = 0;
  v16 = 0;
  do
  {
    v17 = a3[v16];
    if ( v14 > v17 )
    {
      v18 = v15++;
      v164[v18] = v17;
      v164[a2 + 1 + v18] = v16;
    }
    ++v16;
  }
  while ( (unsigned int)(a2 - 1) + 1LL != v16 );
  v179 = v15;
  if ( !v15 )
    goto LABEL_82;
  v19 = *((CoinIndexedVector **)v11 + 132);
  v176 = v19;
  if ( v19 && !*((_DWORD *)v19 + 4)
    || (v20 = *((CoinIndexedVector **)v11 + 133), (v176 = v20) != nullptr) && !*((_DWORD *)v20 + 4)
    || (v21 = *((CoinIndexedVector **)v11 + 134), (v176 = v21) != nullptr) && !*((_DWORD *)v21 + 4)
    || (v22 = *((CoinIndexedVector **)v11 + 135), (v176 = v22) != nullptr) && !*((_DWORD *)v22 + 4) )
  {
    v181 = 0;
  }
  else
  {
    v176 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v176, *((_DWORD *)v11 + 26));
    v181 = 1;
  }
  CoinSort_2<int,int>(v164, &v164[v179], v170);
  v164[v179] = *((_DWORD *)v11 + 27);
  *(_DWORD *)&v170[4 * v179] = v179;
  v23 = **v177;
  if ( v23 == ClpPackedMatrix::getPackedMatrix )
    v24 = (CoinPackedMatrix *)v177[11];
  else
    v24 = (CoinPackedMatrix *)v23((ClpPackedMatrix *)v177);
  v178 = v24;
  v25 = 0;
  v26 = *((_QWORD *)v24 + 5);
  v182 = v11;
  v172 = *((_DWORD **)v24 + 6);
  v27 = *((_QWORD *)v24 + 7);
  v161 = &v164[a2 + 1];
  v183 = a3;
  v28 = *((_QWORD *)v24 + 4);
  v173 = v27;
  v174 = (__int64)&v170[4 * (v179 - 1) + 4];
  v175 = v26;
  v29 = 0;
  v30 = *((_QWORD *)v176 + 1);
  v31 = v161;
  do
  {
    while ( 1 )
    {
      v32 = *v31;
      v33 = a4[v32];
      v34 = a4[v32 + 1];
      v35 = (int)v164[v32];
      v171 = v33;
      v36 = (int)v172[v35];
      v37 = v36 + *(_DWORD *)(v173 + 4 * v35);
      if ( v34 > (int)v33 )
      {
        v38 = 0;
        v39 = (unsigned int)(v34 - v33 - 1) + 1LL;
        do
        {
          while ( 1 )
          {
            v40 = a6[v33 + v38];
            v41 = a5[v33 + v38];
            if ( v40 != 0.0 )
              break;
            ++v38;
            *(_QWORD *)(v30 + 8 * v41) = 0x2B2BFF2EE48E0530LL;
            if ( v38 == v39 )
              goto LABEL_28;
          }
          ++v38;
          *(double *)(v30 + 8 * v41) = v40;
        }
        while ( v39 != v38 );
LABEL_28:
        if ( (int)v36 >= v37 )
          goto LABEL_36;
        goto LABEL_29;
      }
      if ( (int)v36 >= v37 )
        break;
      do
      {
LABEL_29:
        if ( fabs(*(double *)(v28 + 8 * v36)) > 1.0e-100 )
        {
          v42 = (double *)(v30 + 8LL * *(int *)(v175 + 4 * v36));
          v43 = *v42;
          if ( *(double *)(v28 + 8 * v36) != *v42 && v43 != 0.0 )
          {
            *v42 = 0.0;
            v25 -= v43 == 1.0e-100;
          }
        }
        ++v36;
      }
      while ( v37 > (int)v36 );
      if ( v34 <= v171 )
        goto LABEL_40;
      v33 = v171;
      do
      {
LABEL_36:
        v44 = (double *)(v30 + 8LL * a5[v33]);
        if ( *v44 != 0.0 )
        {
          ++v25;
          *v44 = 0.0;
          if ( v25 > 0 )
            v29 = 1;
        }
        ++v33;
      }
      while ( v34 > (int)v33 );
LABEL_40:
      v31 = ++v161;
      if ( (int *)v174 == v161 )
        goto LABEL_41;
    }
    v31 = ++v161;
  }
  while ( (int *)v174 != v161 );
LABEL_41:
  v45 = v175;
  v46 = *((_DWORD *)v178 + 18);
  if ( v25 > 0 )
  {
    CoinPackedMatrix::reserve(v178, *((_DWORD *)v11 + 27), v25 + v46, 0);
    v45 = *((_QWORD *)v178 + 5);
    v28 = *((_QWORD *)v178 + 4);
    if ( v29 )
    {
LABEL_43:
      v47 = v46 + v25;
      v48 = *((_DWORD *)v11 + 27) - 1;
      if ( v48 >= 0 )
      {
        v49 = v48;
        v50 = &v172[v49];
        v51 = (_DWORD *)((char *)v172 + v49 * 4 - 4 - 4LL * (unsigned int)v48);
        do
        {
          v52 = v50[1];
          v53 = *v50;
          v50[1] = v47;
          v54 = v52 - 1;
          if ( v53 <= v54 )
          {
            v55 = v54;
            v56 = v54 - 1LL;
            v57 = v56 - (unsigned int)(v54 - v53);
            while ( 1 )
            {
              v58 = *(double *)(v28 + 8 * v55);
              if ( v58 != 0.0 )
              {
                v59 = *(_DWORD *)(v45 + 4 * v55);
                *(double *)(v28 + 8LL * --v47) = v58;
                *(_DWORD *)(v45 + 4LL * v47) = v59;
              }
              v55 = v56;
              if ( v57 == v56 )
                break;
              --v56;
            }
          }
          --v50;
        }
        while ( v51 != v50 );
      }
      *v172 = v47;
    }
  }
  else if ( v29 )
  {
    goto LABEL_43;
  }
  v60 = 0;
  v61 = 0;
  v62 = 0;
  while ( 2 )
  {
    v63 = *(int *)&v170[4 * v62];
    v64 = (int)v164[v63];
    v65 = v63;
    if ( (int)v64 <= v60 )
    {
      v64 = v60;
      if ( v179 == v62 )
        goto LABEL_170;
LABEL_62:
      v76 = &a4[v65];
      v77 = &a4[v65 + 1];
      v78 = a4[v65];
      if ( *v77 > (int)v78 )
      {
        v79 = (unsigned int)(*v77 - v78 - 1) + 1LL;
        v80 = &a5[v78];
        v81 = &a6[v78];
        v82 = 0;
        do
        {
          while ( 1 )
          {
            v83 = v81[v82];
            v84 = v80[v82];
            if ( v83 != 0.0 )
              break;
            ++v82;
            *(_QWORD *)(v30 + 8 * v84) = 0x2B2BFF2EE48E0530LL;
            if ( v82 == v79 )
              goto LABEL_66;
          }
          ++v82;
          *(double *)(v30 + 8 * v84) = v83;
        }
        while ( v79 != v82 );
      }
LABEL_66:
      v85 = &v172[(int)v64];
      v86 = v85 + 1;
      v87 = *v85;
      *v85 = v61;
      if ( v85[1] <= (int)v87 )
      {
LABEL_71:
        v97 = *v76;
        v98 = *v77;
        if ( (int)v97 < *v77 )
        {
          v99 = (int)v97 + 1;
          v100 = &a5[v97 - v99];
          do
          {
            while ( 1 )
            {
              v101 = v100[v99];
              v102 = (double *)(v30 + 8 * v101);
              v103 = *v102;
              if ( *v102 == 0.0 )
                break;
              *v102 = 0.0;
              v104 = v61++;
              *(_DWORD *)(v45 + 4 * v104) = v101;
              v98 = *v77;
              v105 = v99++;
              *(double *)(v28 + 8 * v104) = v103;
              if ( v105 >= v98 )
                goto LABEL_75;
            }
            v143 = v99++;
          }
          while ( v143 < v98 );
        }
LABEL_75:
        ++v62;
        v60 = v64 + 1;
        if ( v179 < (int)v62 )
        {
          v11 = v182;
          a3 = v183;
          goto LABEL_77;
        }
        continue;
      }
      v88 = (int)v87 + 1;
      v89 = v45 + -4 * v88 + 4 * v87;
      v90 = v28 + 8 * v87 - 8 * v88;
      while ( 1 )
      {
        while ( 1 )
        {
          v91 = *(int *)(v89 + 4 * v88);
          v92 = (double *)(v30 + 8 * v91);
          v93 = *v92;
          if ( *v92 == 0.0 )
            break;
          if ( v93 == 1.0e-100 )
          {
            v93 = 0.0;
            v141 = 0.0;
          }
          else
          {
            v141 = fabs(v93);
          }
          *v92 = 0.0;
          if ( v141 > 1.0e-100 )
            goto LABEL_70;
LABEL_152:
          v142 = v88++;
          if ( *v86 <= v142 )
            goto LABEL_71;
        }
        v93 = *(double *)(v90 + 8 * v88);
        if ( fabs(v93) <= 1.0e-100 )
          goto LABEL_152;
LABEL_70:
        v94 = v61++;
        *(_DWORD *)(v45 + 4 * v94) = v91;
        v95 = v88++;
        v96 = v95 < *v86;
        *(double *)(v28 + 8 * v94) = v93;
        if ( !v96 )
          goto LABEL_71;
      }
    }
    break;
  }
  v66 = &v172[v60];
  v67 = (__int64)&v172[(unsigned int)(v64 + ~v60) + 1 + (__int64)v60];
  do
  {
    while ( 1 )
    {
      v68 = *v66;
      v69 = v66[1];
      *v66 = v61;
      if ( (int)v68 < v69 )
        break;
LABEL_60:
      if ( (int *)v67 == ++v66 )
        goto LABEL_61;
    }
    v70 = (int)v68 + 1;
    v71 = v28 + -8 * v70 + 8 * v68;
    v72 = v45 + 4 * v68 - 4 * v70;
    do
    {
      while ( 1 )
      {
        v73 = *(double *)(v71 + 8 * v70);
        if ( v73 == 0.0 )
          break;
        v74 = v61++;
        *(_DWORD *)(v45 + 4 * v74) = *(_DWORD *)(v72 + 4 * v70);
        *(double *)(v28 + 8 * v74) = v73;
        v69 = v66[1];
        v75 = v70++;
        if ( v75 >= v69 )
          goto LABEL_60;
      }
      v140 = v70++;
    }
    while ( v140 < v69 );
    ++v66;
  }
  while ( (int *)v67 != v66 );
LABEL_61:
  if ( v179 != v62 )
    goto LABEL_62;
LABEL_170:
  v11 = v182;
  a3 = v183;
  v172[v64] = v61;
LABEL_77:
  *((_DWORD *)v178 + 18) = v61;
  if ( v181 )
  {
    CoinIndexedVector::~CoinIndexedVector(v176);
    operator delete(v176);
  }
  if ( *((int *)v11 + 27) > 0 )
  {
    v106 = 1;
    do
    {
      *(_DWORD *)(v173 + 4 * v106 - 4) = v172[v106] - v172[v106 - 1];
      v107 = v106++;
    }
    while ( *((_DWORD *)v11 + 27) > v107 );
  }
LABEL_82:
  if ( !v180 )
    goto LABEL_99;
  v108 = *((_QWORD *)v11 + 25);
  if ( v108 && a4[a2] )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 480LL))(v108);
    *((_QWORD *)v11 + 25) = (*v177)[16]((ClpPackedMatrix *)v177);
  }
  if ( a2 <= 0 )
    goto LABEL_99;
  if ( a2 <= 2 )
  {
    v113 = 0;
    v110 = 0;
  }
  else
  {
    v109 = 2;
    v110 = 0;
    v111 = *a4;
    do
    {
      v112 = a4[v109 - 1];
      if ( v112 > v111 )
        v110 += (*(_BYTE *)(*((_QWORD *)v11 + 33) + a3[v109 - 2]) & 7) == 1;
      v111 = a4[v109];
      if ( v112 < v111 )
        v110 += (*(_BYTE *)(*((_QWORD *)v11 + 33) + a3[v109 - 1]) & 7) == 1;
      v113 = (int)v109;
      v109 += 2;
    }
    while ( 2LL * ((unsigned int)(a2 - 3) >> 1) + 4 != v109 );
  }
  do
  {
    if ( a4[v113] < a4[v113 + 1] )
      v110 += (*(_BYTE *)(*((_QWORD *)v11 + 33) + a3[v113]) & 7) == 1;
    ++v113;
  }
  while ( a2 > (int)v113 );
  if ( v110 )
    v114 = 3;
  else
LABEL_99:
    v114 = 0;
  operator delete[](v164);
  if ( !a7 )
    goto LABEL_139;
  if ( a2 > 0 )
    goto LABEL_102;
LABEL_142:
  if ( !a8 )
  {
LABEL_143:
    if ( !a9 || a2 <= 0 )
      goto LABEL_126;
LABEL_120:
    v128 = 0;
    do
    {
      v129 = a3[v128];
      v130 = *((_DWORD *)v11 + 27);
      v131 = a9[v128];
      if ( v130 <= (int)v129 )
        v132 = (double *)(*((_QWORD *)v11 + 19) + 8LL * ((int)v129 - v130));
      else
        v132 = (double *)(*((_QWORD *)v11 + 23) + 8 * v129);
      if ( v131 != *v132 )
        *v132 = v131;
      ++v128;
    }
    while ( a2 > (int)v128 );
  }
LABEL_126:
  if ( a10 )
  {
    v133 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))v11 + 20);
    v134 = 0;
    if ( v133 )
      v134 = (**v133)(v133, 0, 0, v184, 0, 2);
    if ( a2 > 0 )
    {
      v135 = 0;
      do
      {
        v136 = a3[v135];
        if ( *((_DWORD *)v11 + 27) > (int)v136 )
        {
          v137 = (double *)(v134 + 8 * v136);
          v138 = a10[v135];
          if ( v138 != *v137 )
            *v137 = v138;
        }
        ++v135;
      }
      while ( (unsigned int)(a2 - 1) + 1LL != v135 );
    }
  }
  if ( v180 )
  {
    memcpy(*((void **)v11 + 123), *((const void **)v11 + 22), 8LL * *((int *)v11 + 27));
    memcpy(
      (void *)(*((_QWORD *)v11 + 123) + 8LL * *((int *)v11 + 27)),
      *((const void **)v11 + 18),
      8LL * *((int *)v11 + 26));
    memcpy(*((void **)v11 + 126), *((const void **)v11 + 23), 8LL * *((int *)v11 + 27));
    memcpy(
      (void *)(*((_QWORD *)v11 + 126) + 8LL * *((int *)v11 + 27)),
      *((const void **)v11 + 19),
      8LL * *((int *)v11 + 26));
    v144 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))v11 + 20);
    v145 = nullptr;
    v146 = 8LL * *((int *)v11 + 27);
    if ( v144 )
      v145 = (const void *)(**v144)(v144, 0, 0, v184, 0, 2);
    memcpy(*((void **)v11 + 129), v145, v146);
    memset((void *)(*((_QWORD *)v11 + 129) + 8LL * *((int *)v11 + 27)), 0, 8LL * *((int *)v11 + 26));
    v147 = *((ClpNonLinearCost **)v11 + 165);
    if ( v147 && a2 > 0 )
    {
      v148 = &a3[a2 - 1 + 1];
      while ( 1 )
      {
        v149 = *a3++;
        ClpNonLinearCost::setOne(
          v147,
          v149,
          *(double *)(*((_QWORD *)v11 + 150) + 8 * v149),
          *(double *)(*((_QWORD *)v11 + 123) + 8 * v149),
          *(double *)(*((_QWORD *)v11 + 126) + 8 * v149),
          *(double *)(*((_QWORD *)v11 + 129) + 8 * v149));
        if ( a3 == v148 )
          break;
        v147 = *((ClpNonLinearCost **)v11 + 165);
      }
    }
  }
  return v114;
}

