CoinPresolveMatrix *__fastcall duprow3_action::presolve(
        duprow3_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3)
{
  duprow3_action *v3; // r14
  int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  bool v10; // cc
  char *v11; // rbx
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  double v16; // xmm0_8
  unsigned __int64 v17; // rbp
  double *v18; // r15
  int v19; // esi
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // edi
  __int64 v23; // rcx
  unsigned int v24; // r8d
  __int64 v25; // rax
  unsigned int v26; // r8d
  unsigned __int64 v27; // r9
  double *v28; // rcx
  signed int v29; // eax
  __int64 v30; // rdx
  signed int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r11
  int v34; // r13d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // r10
  int v40; // edi
  __int64 v41; // rax
  __int64 v42; // rax
  double v43; // xmm0_8
  int v44; // eax
  __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // rdx
  double *v48; // rax
  double v49; // xmm0_8
  double v50; // xmm1_8
  useless_constraint_action *v51; // rdi
  __int64 v52; // r9
  int v53; // ecx
  useless_constraint_action *v54; // r14
  __int64 v55; // rdi
  int *v56; // r11
  _DWORD *v57; // rdi
  __int64 v58; // rdx
  int v59; // esi
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r10
  __int64 v63; // rdx
  double v64; // xmm0_8
  __int64 v65; // rsi
  int v66; // edx
  double v67; // xmm0_8
  char *v68; // r13
  unsigned __int64 v69; // rbx
  size_t v70; // rdx
  __int64 v71; // rax
  unsigned int v72; // edx
  int v73; // edi
  int *v74; // rdx
  __m128i si128; // xmm0
  unsigned int v76; // esi
  unsigned int v77; // eax
  unsigned int v78; // eax
  signed int v79; // edx
  int v80; // eax
  __int64 ru_msgsnd; // rbp
  __int64 ru_nswap; // r12
  int v83; // edx
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  unsigned int v86; // r12d
  const CoinPresolveAction *v87; // r8
  unsigned __int64 v88; // rax
  int v89; // esi
  __int64 v90; // rcx
  int v92; // edx
  unsigned __int64 v93; // rax
  int v94; // r15d
  unsigned __int64 v95; // rbp
  __int64 v96; // rax
  unsigned int v97; // edx
  unsigned int v98; // esi
  int v99; // edi
  unsigned __int64 v100; // rdx
  __m128i v101; // xmm3
  unsigned int v102; // ecx
  __m128i v103; // xmm2
  unsigned int v104; // eax
  __m128i v105; // xmm0
  signed int v106; // eax
  int v107; // edx
  int v108; // eax
  CoinPresolveMatrix *v109; // [rsp+8h] [rbp-620h]
  CoinPresolveMatrix *v110; // [rsp+8h] [rbp-620h]
  __int64 v111; // [rsp+10h] [rbp-618h]
  __int64 v112; // [rsp+18h] [rbp-610h]
  __int64 v113; // [rsp+20h] [rbp-608h]
  __int64 v114; // [rsp+28h] [rbp-600h]
  int v115[2]; // [rsp+30h] [rbp-5F8h]
  int v116; // [rsp+30h] [rbp-5F8h]
  int v117; // [rsp+38h] [rbp-5F0h]
  int v118[2]; // [rsp+38h] [rbp-5F0h]
  _DWORD *v119; // [rsp+40h] [rbp-5E8h]
  signed int v120; // [rsp+48h] [rbp-5E0h]
  int v121; // [rsp+4Ch] [rbp-5DCh]
  double v123; // [rsp+58h] [rbp-5D0h]
  CoinPackedMatrix *v124; // [rsp+60h] [rbp-5C8h]
  CoinFactorization *v125; // [rsp+70h] [rbp-5B8h]
  int v126; // [rsp+78h] [rbp-5B0h]
  useless_constraint_action *v127; // [rsp+88h] [rbp-5A0h]
  useless_constraint_action *v128; // [rsp+88h] [rbp-5A0h]
  double *v129; // [rsp+B0h] [rbp-578h]
  double *v130; // [rsp+B8h] [rbp-570h]
  char v131[8]; // [rsp+C0h] [rbp-568h] BYREF
  unsigned __int64 v132; // [rsp+C8h] [rbp-560h]
  char v133[8]; // [rsp+E0h] [rbp-548h] BYREF
  unsigned __int64 v134; // [rsp+E8h] [rbp-540h]
  _BYTE v135[32]; // [rsp+100h] [rbp-528h] BYREF
  __int64 v136; // [rsp+120h] [rbp-508h]
  __int64 v137; // [rsp+128h] [rbp-500h]
  useless_constraint_action *v138; // [rsp+130h] [rbp-4F8h]
  __int64 v139; // [rsp+138h] [rbp-4F0h]
  int v140; // [rsp+148h] [rbp-4E0h]
  struct rusage usage; // [rsp+160h] [rbp-4C8h] BYREF
  int v142; // [rsp+4C4h] [rbp-164h]

  v3 = this;
  v123 = 0.0;
  if ( *((_BYTE *)this + 321) )
  {
    getrusage(RUSAGE_SELF, &usage);
    v123 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  }
  v4 = *((_DWORD *)this + 1);
  v5 = *((_QWORD *)this + 13);
  v6 = *((_QWORD *)this + 14);
  v7 = *((_QWORD *)this + 12);
  v113 = *((_QWORD *)this + 8);
  *(_QWORD *)v115 = *((_QWORD *)this + 36);
  v8 = *(int *)this;
  v9 = 2 * v4;
  v121 = *((_DWORD *)v3 + 1);
  v114 = *((_QWORD *)v3 + 7);
  v109 = *((CoinPresolveMatrix **)v3 + 5);
  v111 = *((_QWORD *)v3 + 6);
  v124 = *((CoinPackedMatrix **)v3 + 11);
  v112 = *((_QWORD *)v3 + 58);
  if ( v9 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v119 = (_DWORD *)operator new[](4 * v9);
  v10 = v4 <= 0;
  v11 = (char *)&v119[v4];
  if ( v10 )
    goto LABEL_86;
  v12 = 0;
  v13 = 0;
  v14 = (unsigned int)(v121 - 1) + 1LL;
  do
  {
    while ( 1 )
    {
      v16 = *(double *)(v5 + 8 * v13);
      if ( v16 != *(double *)(v6 + 8 * v13) || *(int *)(*(_QWORD *)v115 + 4 * v13) <= 1 || v16 != 0.0 )
        break;
      v15 = v12;
      *(_DWORD *)&v11[4 * v13] = v12++;
      v119[v15] = v13++;
      if ( v13 == v14 )
        goto LABEL_11;
    }
    *(_DWORD *)&v11[4 * v13++] = -1;
  }
  while ( v13 != v14 );
LABEL_11:
  if ( !v12 )
  {
LABEL_86:
    v86 = 0;
    goto LABEL_87;
  }
  CoinIndexedVector::CoinIndexedVector((CoinIndexedVector *)v131);
  CoinIndexedVector::reserve((CoinIndexedVector *)v131, v12);
  v17 = v132;
  CoinIndexedVector::CoinIndexedVector((CoinIndexedVector *)v133);
  v120 = v12;
  CoinIndexedVector::reserve((CoinIndexedVector *)v133, v12);
  v18 = (double *)v134;
  if ( (v134 >= v17 + 16 || v17 >= v134 + 16) && (unsigned int)v12 > 0x1C )
  {
    v19 = 0;
    v20 = (v17 >> 3) & 1;
    if ( ((v17 >> 3) & 1) != 0 )
    {
      v19 = 1;
      *(_QWORD *)v17 = 0x7FEFFFFFFFFFFFFFLL;
      *v18 = 0.0;
    }
    v21 = 0;
    v22 = v120 - v20;
    v23 = (v17 >> 3) & 1;
    v24 = v120 - v20;
    v25 = 0;
    v26 = v24 >> 1;
    v27 = v17 + v23 * 8;
    v28 = &v18[v23];
    do
    {
      ++v21;
      *(_OWORD *)(v27 + v25 * 8) = xmmword_28C790;
      *(_OWORD *)&v28[v25] = 0;
      v25 += 2;
    }
    while ( v26 > v21 );
    v29 = (v22 & 0xFFFFFFFE) + v19;
    if ( (v22 & 0xFFFFFFFE) != v22 )
    {
      v30 = v29;
      v31 = v29 + 1;
      *(_QWORD *)(v17 + 8 * v30) = 0x7FEFFFFFFFFFFFFFLL;
      v18[v30] = 0.0;
      if ( v120 > v31 )
      {
        *(_QWORD *)(v17 + 8LL * v31) = 0x7FEFFFFFFFFFFFFFLL;
        v18[v31] = 0.0;
      }
    }
  }
  else
  {
    v93 = 0;
    do
    {
      *(_QWORD *)(v17 + v93) = 0x7FEFFFFFFFFFFFFFLL;
      v18[v93 / 8] = 0.0;
      v93 += 8LL;
    }
    while ( v93 != 8LL * (unsigned int)(v12 - 1) + 8 );
  }
  if ( (int)v8 > 0 )
  {
    v32 = 0;
    v116 = 0;
    v117 = 0;
    v33 = (unsigned int)(v8 - 1) + 1LL;
    v125 = (CoinFactorization *)(v112 + 4 * v8);
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = v32;
        if ( *(double *)(v7 + 8 * v32) > *((double *)v124 + v32) )
          break;
LABEL_23:
        if ( ++v32 == v33 )
          goto LABEL_32;
      }
      v35 = *((int *)v109 + v32);
      if ( (int)v35 + *(_DWORD *)(v111 + 4 * v32) <= (int)v35 )
        goto LABEL_90;
      v36 = 0;
      v37 = v114 + 4 * v35;
      v38 = (unsigned int)(*(_DWORD *)(v111 + 4 * v32) - 1) + 1LL;
      v39 = v113 + 8 * v35;
      v40 = 0;
      do
      {
        v41 = *(int *)&v11[4 * *(int *)(v37 + 4 * v36)];
        if ( (int)v41 >= 0 )
        {
          v42 = v41;
          ++v40;
          v43 = fabs(*(double *)(v39 + 8 * v36));
          *(double *)(v17 + v42 * 8) = fmin(*(double *)(v17 + v42 * 8), v43);
          v18[v42] = fmax(v18[v42], v43);
        }
        ++v36;
      }
      while ( v36 != v38 );
      if ( !v40 )
      {
LABEL_90:
        *((_DWORD *)v125 + v32) = -1;
        goto LABEL_23;
      }
      v117 += v40;
      *((_DWORD *)v125 + v32++) = v116;
      *(_DWORD *)(v112 + 4LL * v116++) = v34;
      if ( v32 == v33 )
        goto LABEL_32;
    }
  }
  v116 = 0;
  v117 = 0;
LABEL_32:
  CoinFactorization::CoinFactorization((CoinFactorization *)&usage);
  v142 = 0;
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v135, 1, 0.0, 0.0);
  CoinPackedMatrix::reserve((CoinPackedMatrix *)v135, v116, v117, 0);
  v44 = v116;
  if ( v120 >= v116 )
    v44 = v120;
  v126 = v44;
  CoinPackedMatrix::setDimensions((CoinPackedMatrix *)v135, v44, v116);
  v45 = v136;
  v46 = v137;
  v127 = v138;
  v47 = v17 + 8LL * (unsigned int)(v120 - 1) + 8;
  *(_QWORD *)v118 = v139;
  v48 = (double *)v17;
  do
  {
    while ( 1 )
    {
      v49 = *v48 * *v18;
      v50 = sqrt(v49);
      if ( v49 < 0.0 )
        break;
      ++v48;
      ++v18;
      *(v48 - 1) = 1.0 / v50;
      if ( v48 == (double *)v47 )
        goto LABEL_37;
    }
    v130 = (double *)v47;
    v129 = v48;
    ++v18;
    sqrt(v49);
    v47 = (__int64)v130;
    v48 = v129 + 1;
    *v129 = 1.0 / v50;
  }
  while ( v129 + 1 != v130 );
LABEL_37:
  v51 = v127;
  *(_DWORD *)v127 = 0;
  if ( v116 )
  {
    v128 = v3;
    v52 = 0;
    v53 = 0;
    v54 = v51;
    do
    {
      v55 = 4LL * *(int *)(v112 + v52);
      v56 = (int *)((char *)v109 + v55);
      v57 = (_DWORD *)(v111 + v55);
      v58 = *v56;
      v59 = v58 + *v57;
      if ( v59 > (int)v58 )
      {
        v60 = (int)v58 + 1;
        v61 = v114 + 4 * v58 - 4LL * (int)v60;
        v62 = v113 + 8 * v58 - 8LL * (int)v60;
        do
        {
          while ( 1 )
          {
            v63 = *(int *)&v11[4 * *(int *)(v61 + 4 * v60)];
            if ( (int)v63 < 0 )
              break;
            v64 = *(double *)(v17 + 8 * v63);
            v65 = v53++;
            *(_DWORD *)(v46 + 4 * v65) = v63;
            v66 = v60;
            v67 = v64 * *(double *)(v62 + 8 * v60++);
            *(double *)(v45 + 8 * v65) = v67;
            v59 = *v56 + *v57;
            if ( v59 <= v66 )
              goto LABEL_43;
          }
          v92 = v60++;
        }
        while ( v59 > v92 );
      }
LABEL_43:
      *(_DWORD *)(*(_QWORD *)v118 + v52) = v53 - *(_DWORD *)((char *)v54 + v52);
      *(_DWORD *)((char *)v54 + v52 + 4) = v53;
      v52 += 4;
    }
    while ( v52 != 4LL * (unsigned int)(v116 - 1) + 4 );
    v3 = v128;
  }
  else
  {
    v53 = 0;
  }
  v140 = v53;
  v68 = (char *)operator new[](4LL * v126);
  v69 = operator new[](4LL * v126);
  v70 = 4LL * (unsigned int)(v126 - 1) + 4;
  if ( v126 <= 0 )
    v70 = 4;
  memset(v68, 255, v70);
  if ( v116 )
  {
    v71 = -(int)(v69 >> 2) & 3;
    v72 = v71 + 3;
    if ( (unsigned int)(v71 + 3) < 5 )
      v72 = 5;
    if ( v72 > v116 - 1 )
    {
      v78 = 0;
LABEL_58:
      *(_DWORD *)(v69 + 4LL * (int)v78) = 1;
      if ( v116 > (int)(v78 + 1) )
      {
        *(_DWORD *)(v69 + 4LL * (int)(v78 + 1)) = 1;
        if ( v116 > (int)(v78 + 2) )
        {
          *(_DWORD *)(v69 + 4LL * (int)(v78 + 2)) = 1;
          if ( v116 > (int)(v78 + 3) )
          {
            *(_DWORD *)(v69 + 4LL * (int)(v78 + 3)) = 1;
            v79 = v78 + 4;
            if ( v116 > (int)(v78 + 4) )
            {
              v80 = v78 + 5;
              *(_DWORD *)(v69 + 4LL * v79) = 1;
              if ( v116 > v80 )
                *(_DWORD *)(v69 + 4LL * v80) = 1;
            }
          }
        }
      }
      goto LABEL_64;
    }
    v73 = 0;
    if ( (_DWORD)v71 )
    {
      *(_DWORD *)v69 = 1;
      v73 = 1;
      if ( (_DWORD)v71 != 1 )
      {
        *(_DWORD *)(v69 + 4) = 1;
        v73 = 2;
        if ( (_DWORD)v71 != 2 )
        {
          *(_DWORD *)(v69 + 8) = 1;
          v73 = 3;
        }
      }
    }
    v74 = (int *)(v69 + 4 * v71);
    si128 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    v76 = v116 - v71;
    v77 = 0;
    do
    {
      ++v77;
      v74 += 4;
      *((__m128i *)v74 - 1) = si128;
    }
    while ( v76 >> 2 > v77 );
    v78 = (v76 & 0xFFFFFFFC) + v73;
    if ( (v76 & 0xFFFFFFFC) != v76 )
      goto LABEL_58;
  }
LABEL_64:
  if ( (unsigned int)CoinFactorization::factorize(
                       (CoinFactorization *)&usage,
                       (const CoinPackedMatrix *)v135,
                       (int *)v68,
                       (int *)v69,
                       5.0) != -1 )
    goto LABEL_91;
  ru_msgsnd = usage.ru_msgsnd;
  ru_nswap = usage.ru_nswap;
  if ( SLODWORD(usage.ru_msgrcv) <= -2 )
    ru_msgsnd = 0;
  if ( SLODWORD(usage.ru_inblock) <= -2 )
    ru_nswap = 0;
  v83 = v121 / 10;
  if ( v121 / 10 < 20 )
    v83 = 20;
  if ( v120 - v83 <= SLODWORD(usage.ru_isrss) )
  {
LABEL_91:
    v86 = 0;
    goto LABEL_92;
  }
  v84 = v120 - LODWORD(usage.ru_isrss);
  if ( v84 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v110 = (CoinPresolveMatrix *)operator new[](4 * v84);
  if ( v116 )
  {
    v85 = 0;
    do
    {
      if ( *(int *)(ru_nswap + v85) < 0 )
        *(_DWORD *)(v69 + v85) = -1;
      v85 += 4;
    }
    while ( v85 != 4LL * (unsigned int)(v116 - 1) + 4 );
  }
  v86 = 0;
  v87 = v110;
  v88 = 0;
  do
  {
    if ( *(int *)(ru_msgsnd + v88) < 0 )
    {
      v89 = v119[v88 / 4];
      v90 = (int)v86;
      *(_DWORD *)&v68[v88] = 1;
      ++v86;
      *((_DWORD *)v110 + v90) = v89;
    }
    v88 += 4LL;
  }
  while ( v88 != 4LL * (unsigned int)(v120 - 1) + 4 );
  if ( v126 > v120 )
  {
    v94 = v126 - v120;
    v95 = operator new[](4LL * (v126 - v120));
    v96 = -(int)(v95 >> 2) & 3;
    v97 = v96 + 3;
    if ( (unsigned int)(v96 + 3) < 5 )
      v97 = 5;
    if ( v97 > v94 - 1 )
    {
      v106 = 0;
    }
    else
    {
      v98 = 0;
      if ( (_DWORD)v96 )
      {
        v98 = 1;
        *(_DWORD *)v95 = v120;
        if ( (_DWORD)v96 != 1 )
        {
          v98 = 2;
          *(_DWORD *)(v95 + 4) = v120 + 1;
          if ( (_DWORD)v96 != 2 )
          {
            v98 = 3;
            *(_DWORD *)(v95 + 8) = v120 + 2;
          }
        }
      }
      v99 = v94 - v96;
      v100 = v95 + 4 * v96;
      v101 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v120), 0);
      v102 = (unsigned int)(v94 - v96) >> 2;
      v103 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v104 = 0;
      v105 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v98), 0), (__m128i)xmmword_289BB0);
      do
      {
        ++v104;
        v100 += 16LL;
        *(__m128i *)(v100 - 16) = _mm_add_epi32(v101, v105);
        v105 = _mm_add_epi32(v105, v103);
      }
      while ( v102 > v104 );
      v106 = (v99 & 0xFFFFFFFC) + v98;
      if ( (v99 & 0xFFFFFFFC) == v99 )
      {
LABEL_116:
        CoinPackedMatrix::deleteRows((CoinPackedMatrix *)v135, v94, (const int *)v95);
        operator delete[]((void *)v95);
        if ( v86 )
          goto LABEL_84;
LABEL_117:
        v86 = 0;
        goto LABEL_85;
      }
    }
    *(_DWORD *)(v95 + 4LL * v106) = v120 + v106;
    if ( v94 > v106 + 1 )
    {
      *(_DWORD *)(v95 + 4LL * (v106 + 1)) = v120 + v106 + 1;
      if ( v106 + 2 < v94 )
      {
        *(_DWORD *)(v95 + 4LL * (v106 + 2)) = v120 + v106 + 2;
        if ( v94 > v106 + 3 )
        {
          *(_DWORD *)(v95 + 4LL * (v106 + 3)) = v120 + v106 + 3;
          v107 = v106 + 4;
          if ( v94 > v106 + 4 )
          {
            v108 = v106 + 5;
            *(_DWORD *)(v95 + 4LL * v107) = v120 + v107;
            if ( v94 > v108 )
              *(_DWORD *)(v95 + 4LL * v108) = v120 + v108;
          }
        }
      }
    }
    goto LABEL_116;
  }
  if ( !v86 )
    goto LABEL_117;
LABEL_84:
  a2 = (CoinPresolveMatrix *)useless_constraint_action::presolve(v3, v110, (const int *)v86, (int)a2, v87);
LABEL_85:
  operator delete[](v110);
LABEL_92:
  operator delete[](v68);
  operator delete[]((void *)v69);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v135);
  CoinFactorization::~CoinFactorization((CoinFactorization *)&usage);
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)v133);
  CoinIndexedVector::~CoinIndexedVector((CoinIndexedVector *)v131);
LABEL_87:
  operator delete[](v119);
  if ( *((_BYTE *)v3 + 321) )
  {
    getrusage(RUSAGE_SELF, &usage);
    printf(
      "CoinPresolveDuprow3 - %d rows dropped in time %g, total %g\n",
      v86,
      (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec) - v123,
      (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
    + (double)SLODWORD(usage.ru_utime.tv_sec)
    - *((double *)v3 + 41));
  }
  return a2;
}

