// Alternative name is '_ZN16ClpDynamicMatrixC2EP10ClpSimplexiiPKiPKdS5_S3_S3_S5_S5_S5_S5_PKhS7_'
void __fastcall ClpDynamicMatrix::ClpDynamicMatrix(
        ClpDynamicMatrix *this,
        ClpSimplex *a2,
        int a3,
        int a4,
        const int *a5,
        double *a6,
        const double *a7,
        _DWORD *src,
        void *a9,
        const double *a10,
        const double *a11,
        const double *a12,
        const double *a13,
        const unsigned __int8 *a14,
        const unsigned __int8 *a15)
{
  __int64 v16; // r13
  __int64 v20; // xmm0_8
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rdx
  __int64 v27; // r12
  __m128i si128; // xmm4
  __int64 v29; // r8
  __m128i v30; // xmm3
  __m128i v31; // xmm2
  int v32; // edi
  int v33; // edx
  int v34; // esi
  __int64 v35; // r11
  __int64 v36; // rcx
  signed int v37; // edi
  __int64 v38; // r10
  __int64 v39; // r10
  unsigned int v40; // r9d
  __int64 v41; // rcx
  unsigned int v42; // edx
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  int v45; // ecx
  int v46; // ebp
  int v47; // r12d
  int v48; // eax
  int v49; // esi
  int v50; // r13d
  int v51; // edx
  int v52; // eax
  __int64 v53; // rax
  int v54; // r12d
  unsigned __int64 v55; // r12
  void *v56; // rax
  _DWORD *v57; // rcx
  unsigned __int64 v58; // r12
  void *v59; // rax
  void *v60; // rax
  unsigned __int64 v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r12
  int v65; // r15d
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rcx
  void *v69; // rax
  int v70; // edx
  unsigned __int64 v71; // rdi
  void *v72; // rax
  int v73; // edx
  unsigned __int64 v74; // rdi
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rsi
  __int64 v77; // rdx
  int v78; // edi
  unsigned int v79; // r11d
  int v80; // r9d
  __int64 v81; // rcx
  unsigned int v82; // r8d
  const double *v83; // r10
  unsigned __int64 v84; // rcx
  __int64 v85; // rdx
  __m128d v86; // xmm1
  __m128d v87; // xmm0
  double v88; // xmm1_8
  double *v89; // rdx
  int v90; // edi
  double *v91; // rax
  double v92; // xmm1_8
  unsigned __int64 v93; // rax
  int v94; // r8d
  __int64 v95; // rdx
  int v96; // esi
  unsigned int v97; // r9d
  __int64 v98; // rcx
  __int64 v99; // rdx
  const double *v100; // r10
  unsigned __int64 v101; // rcx
  unsigned int v102; // r11d
  __m128d v103; // xmm0
  double v104; // xmm1_8
  double *v105; // rdx
  int v106; // esi
  double *v107; // rax
  double v108; // xmm1_8
  void *v109; // rax
  const void *v110; // rdi
  __int64 (__fastcall ***v111)(ClpPackedMatrix *__hidden); // r12
  __int64 (__fastcall *v112)(ClpPackedMatrix *__hidden); // rax
  __int64 v113; // r15
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // r12d
  int v118; // eax
  int v119; // ecx
  int v120; // esi
  __int64 v121; // rdi
  __int64 v122; // rdx
  unsigned __int64 v123; // r10
  int v124; // r9d
  __int64 v125; // rax
  unsigned int v126; // r9d
  __int64 v127; // rdx
  unsigned int v128; // eax
  int v129; // eax
  int v130; // ecx
  __int64 v131; // rax
  unsigned __int64 v132; // rdi
  int v133; // ebp
  unsigned __int64 v134; // rbp
  void *v135; // rax
  int v136; // ebp
  void *v137; // rax
  void *v138; // rcx
  unsigned __int64 v139; // rdi
  void *v140; // rax
  int v141; // edx
  unsigned __int64 v142; // rdi
  int v143; // eax
  void *v144; // rax
  size_t v145; // rdx
  int v146; // ebp
  _BYTE *v147; // rcx
  __int64 v148; // rsi
  void *v149; // rax
  size_t v150; // rdx
  int v151; // ebp
  _BYTE *v152; // rcx
  __int64 v153; // rsi
  int v154; // [rsp+0h] [rbp-58h]
  int v155; // [rsp+4h] [rbp-54h]
  int v157; // [rsp+10h] [rbp-48h]
  int v158; // [rsp+14h] [rbp-44h]
  int v159; // [rsp+18h] [rbp-40h]
  int v160; // [rsp+1Ch] [rbp-3Ch]

  v16 = a4;
  ClpPackedMatrix::ClpPackedMatrix(this);
  *((_DWORD *)this + 13) = 15;
  *(_QWORD *)this = off_4D0218;
  v20 = *((_QWORD *)a2 + 5);
  *((_QWORD *)this + 30) = a2;
  *((_DWORD *)this + 50) = a3;
  *((_DWORD *)this + 74) = v16;
  *((_QWORD *)this + 26) = v20;
  *((_DWORD *)this + 75) = v16;
  if ( (_DWORD)v16 )
    LODWORD(v16) = src[v16];
  *((_DWORD *)this + 76) = v16;
  v21 = a3 + 1;
  if ( v21 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v22 = operator new[](4 * v21);
  v23 = *((int *)this + 75);
  *((_QWORD *)this + 39) = v22;
  if ( v23 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v24 = operator new[](4 * v23);
  v25 = *((_DWORD *)this + 74);
  *((_QWORD *)this + 40) = v24;
  if ( v25 )
  {
    v26 = *((int *)this + 50);
    v27 = *((_QWORD *)this + 39);
    if ( (int)v26 > 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
      v29 = 1;
      v30 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v31 = _mm_load_si128((const __m128i *)&xmmword_289C00);
      do
      {
        v32 = a5[v29];
        v33 = a5[v29 - 1];
        v34 = v32 - 1;
        *(_DWORD *)(v27 + 4 * v29 - 4) = v33;
        if ( v33 < v32 - 1 )
        {
          v35 = v33;
          v36 = -(int)((unsigned __int64)(v24 + 4LL * v33) >> 2) & 3;
          if ( (unsigned int)(v32 - 2 - v33) > 5 )
          {
            v37 = v33;
            if ( (_DWORD)v36 )
            {
              v37 = v33 + 1;
              *(_DWORD *)(v24 + 4LL * v33) = v33 + 1;
              if ( (_DWORD)v36 != 1 )
              {
                v38 = v37;
                v37 = v33 + 2;
                *(_DWORD *)(v24 + 4 * v38) = v33 + 2;
                if ( (_DWORD)v36 != 2 )
                {
                  v39 = v37;
                  v37 = v33 + 3;
                  *(_DWORD *)(v24 + 4 * v39) = v33 + 3;
                }
              }
            }
            v40 = v34 - v33 - v36;
            v41 = v24 + 4 * (v33 + v36);
            v42 = 0;
            v43 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v37), 0), si128);
            do
            {
              v44 = v43;
              ++v42;
              v43 = _mm_add_epi32(v43, v30);
              v41 += 16;
              *(__m128i *)(v41 - 16) = _mm_add_epi32(v44, v31);
            }
            while ( v40 >> 2 > v42 );
            v33 = (v40 & 0xFFFFFFFC) + v37;
            if ( v40 == (v40 & 0xFFFFFFFC) )
              goto LABEL_24;
            v35 = v33;
          }
          *(_DWORD *)(v24 + 4 * v35) = v33 + 1;
          if ( v33 + 1 < v34 )
          {
            *(_DWORD *)(v24 + 4LL * (v33 + 1)) = v33 + 2;
            if ( v34 > v33 + 2 )
            {
              *(_DWORD *)(v24 + 4LL * (v33 + 2)) = v33 + 3;
              if ( v33 + 3 < v34 )
              {
                *(_DWORD *)(v24 + 4LL * (v33 + 3)) = v33 + 4;
                if ( v34 > v33 + 4 )
                {
                  *(_DWORD *)(v24 + 4LL * (v33 + 4)) = v33 + 5;
                  if ( v34 > v33 + 5 )
                    *(_DWORD *)(v24 + 4LL * (v33 + 5)) = v33 + 6;
                }
              }
            }
          }
        }
LABEL_24:
        *(_DWORD *)(v24 + 4LL * v34) = -(int)v29;
        v26 = *((int *)this + 50);
        v45 = v29++;
      }
      while ( (int)v26 > v45 );
    }
    *(_DWORD *)(v27 + 4 * v26) = a5[v26];
  }
  v46 = *((_DWORD *)a2 + 26);
  v47 = *((_DWORD *)a2 + 27);
  *((_QWORD *)this + 19) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 66) = v46;
  v158 = v47;
  v48 = ClpSimplex::factorizationFrequency(a2);
  v49 = v48 + v46;
  v160 = v48;
  if ( *((_DWORD *)this + 50) <= v48 )
    v48 = *((_DWORD *)this + 50);
  v50 = v46 + 1;
  *((_DWORD *)this + 62) = v47;
  *((_DWORD *)this + 63) = v47;
  *((_DWORD *)this + 64) = v47;
  v159 = v49;
  v51 = v49 + v48 + 4;
  v52 = 2 * (v46 + 1);
  if ( v51 >= v52 )
    v52 = v51;
  v155 = v52;
  v157 = v47 + v52;
  *((_DWORD *)this + 65) = v47 + v52;
  v53 = *((int *)this + 74);
  v54 = v53 + 1;
  if ( src )
  {
    if ( (unsigned __int64)v54 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v55 = 4LL * v54;
    v56 = (void *)operator new[](v55);
    v57 = memcpy(v56, src, v55);
    *((_QWORD *)this + 41) = v57;
    v53 = *((int *)this + 74);
    if ( !(_DWORD)v53 )
      goto LABEL_33;
  }
  else
  {
    *((_QWORD *)this + 41) = 0;
    if ( !(_DWORD)v53 )
    {
      v57 = (_DWORD *)operator new[](4u);
      *((_QWORD *)this + 41) = v57;
LABEL_33:
      *v57 = 0;
      v53 = *((int *)this + 74);
      goto LABEL_34;
    }
    v57 = nullptr;
  }
LABEL_34:
  v58 = (int)v57[v53];
  v154 = v57[v53];
  if ( a9 )
  {
    if ( v58 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v59 = (void *)operator new[](4 * v58);
    *((_QWORD *)this + 42) = memcpy(v59, a9, 4 * v58);
  }
  else
  {
    *((_QWORD *)this + 42) = 0;
    if ( v58 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
  }
  v60 = (void *)operator new[](8 * v58);
  *((_QWORD *)this + 43) = v60;
  if ( v154 > 0 )
    memcpy(v60, a10, 8LL * (unsigned int)(v154 - 1) + 8);
  v61 = *((int *)this + 74);
  if ( v61 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v62 = operator new[](8 * v61);
  v63 = *((int *)this + 74);
  v64 = 0;
  v65 = 0;
  *((_QWORD *)this + 44) = v62;
  if ( (int)v63 > 0 )
  {
    while ( 1 )
    {
      v66 = *((_QWORD *)this + 43);
      v67 = *((_QWORD *)this + 41);
      *(double *)(v62 + 2 * v64) = a11[v64 / 4];
      v68 = *(int *)(v67 + v64);
      v64 += 4LL;
      CoinSort_2<int,double>(
        *((_QWORD *)this + 42) + 4 * v68,
        *((_QWORD *)this + 42) + 4LL * *(int *)(v67 + v64),
        v66 + 8 * v68);
      v63 = *((int *)this + 74);
      if ( (int)v63 <= ++v65 )
        break;
      v62 = *((_QWORD *)this + 44);
    }
  }
  if ( a12 )
  {
    if ( v63 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v69 = (void *)operator new[](8 * v63);
    v70 = *((_DWORD *)this + 74);
    *((_QWORD *)this + 47) = v69;
    if ( v70 > 0 )
      memcpy(v69, a12, 8LL * (unsigned int)(v70 - 1) + 8);
  }
  else
  {
    *((_QWORD *)this + 47) = 0;
  }
  if ( a13 )
  {
    v71 = *((int *)this + 74);
    if ( v71 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v72 = (void *)operator new[](8 * v71);
    v73 = *((_DWORD *)this + 74);
    *((_QWORD *)this + 48) = v72;
    if ( v73 > 0 )
      memcpy(v72, a13, 8LL * (unsigned int)(v73 - 1) + 8);
  }
  else
  {
    *((_QWORD *)this + 48) = 0;
  }
  v74 = *((int *)this + 50);
  if ( v74 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v75 = operator new[](8 * v74);
  v76 = *((int *)this + 50);
  *((_QWORD *)this + 27) = v75;
  if ( (int)v76 > 0 )
  {
    v77 = (v75 >> 3) & 1;
    v78 = 0;
    if ( 2 - (unsigned int)((_DWORD)v77 == 0) > (int)v76 - 1 )
      goto LABEL_62;
    if ( (_DWORD)v77 )
    {
      if ( *a6 > -1.0e20 )
        *(double *)v75 = *a6;
      else
        *(_QWORD *)v75 = 0xC6293E5939A08CEALL;
      v78 = 1;
    }
    v79 = 0;
    v80 = v76 - v77;
    v81 = (v75 >> 3) & 1;
    v82 = (unsigned int)(v76 - v77) >> 1;
    v83 = &a6[v81];
    v84 = v75 + v81 * 8;
    v85 = 0;
    do
    {
      v86 = *(__m128d *)&v83[v85];
      ++v79;
      v87 = _mm_cmplt_pd((__m128d)xmmword_28A060, v86);
      *(__m128d *)(v84 + v85 * 8) = _mm_or_pd(_mm_andn_pd(v87, (__m128d)xmmword_28A070), _mm_and_pd(v86, v87));
      v85 += 2;
    }
    while ( v82 > v79 );
    v78 += v80 & 0xFFFFFFFE;
    if ( (v80 & 0xFFFFFFFE) != v80 )
    {
LABEL_62:
      v88 = a6[v78];
      v89 = (double *)(v75 + 8LL * v78);
      if ( v88 <= -1.0e20 )
        *v89 = -1.0e30;
      else
        *v89 = v88;
      v90 = v78 + 1;
      if ( v90 < (int)v76 )
      {
        v91 = (double *)(v75 + 8LL * v90);
        v92 = a6[v90];
        if ( v92 > -1.0e20 )
          *v91 = v92;
        else
          *v91 = -1.0e30;
      }
    }
  }
  if ( v76 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v93 = operator new[](8 * v76);
  v94 = *((_DWORD *)this + 50);
  *((_QWORD *)this + 28) = v93;
  if ( v94 > 0 )
  {
    v95 = (v93 >> 3) & 1;
    v96 = 0;
    if ( 2 - (unsigned int)((_DWORD)v95 == 0) > v94 - 1 )
      goto LABEL_77;
    if ( (_DWORD)v95 )
    {
      if ( *a7 < 1.0e20 )
        *(double *)v93 = *a7;
      else
        *(_QWORD *)v93 = 0x46293E5939A08CEALL;
      v96 = 1;
    }
    v97 = v94 - v95;
    v98 = (v93 >> 3) & 1;
    v99 = 0;
    v100 = &a7[v98];
    v101 = v93 + v98 * 8;
    v102 = 0;
    do
    {
      ++v102;
      v103 = _mm_cmplt_pd(*(__m128d *)&v100[v99], (__m128d)xmmword_28A080);
      *(__m128d *)(v101 + v99 * 8) = _mm_or_pd(
                                       _mm_andn_pd(v103, (__m128d)xmmword_28A090),
                                       _mm_and_pd(*(__m128d *)&v100[v99], v103));
      v99 += 2;
    }
    while ( v97 >> 1 > v102 );
    v96 += v97 & 0xFFFFFFFE;
    if ( (v97 & 0xFFFFFFFE) != v97 )
    {
LABEL_77:
      v104 = a7[v96];
      v105 = (double *)(v93 + 8LL * v96);
      if ( v104 < 1.0e20 )
        *v105 = v104;
      else
        *v105 = 1.0e30;
      v106 = v96 + 1;
      if ( v106 < v94 )
      {
        v107 = (double *)(v93 + 8LL * v106);
        v108 = a7[v106];
        if ( v108 < 1.0e20 )
          *v107 = v108;
        else
          *v107 = 1.0e30;
      }
    }
  }
  if ( (unsigned __int64)v155 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v109 = (void *)operator new[](4LL * v155);
  *((_QWORD *)this + 45) = v109;
  if ( v155 > 0 )
    memset(v109, 255, 4LL * (unsigned int)(v155 - 1) + 4);
  v110 = *((const void **)a2 + 24);
  if ( !v110 )
    BUG();
  v111 = (__int64 (__fastcall ***)(ClpPackedMatrix *__hidden))__dynamic_cast(
                                                                v110,
                                                                (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
                                                                (const struct __class_type_info *)&`typeinfo for'ClpPackedMatrix,
                                                                0);
  v112 = **v111;
  if ( v112 == ClpPackedMatrix::getPackedMatrix )
    v113 = (__int64)v111[11];
  else
    v113 = v112((ClpPackedMatrix *)v111);
  v111[11] = nullptr;
  v114 = (int)((double)(2 * v155) * ((double)v154 / (double)v158));
  *((_DWORD *)this + 67) = v114;
  if ( v114 > v154 )
    v114 = v154;
  v115 = *(_DWORD *)(v113 + 72) + v114;
  *((_DWORD *)this + 25) &= ~1u;
  *((_QWORD *)this + 11) = v113;
  *((_DWORD *)this + 67) = v115;
  if ( v160 > 49 )
    v159 = v46 + ((v160 - 50) >> 1) + 50;
  v116 = v159;
  if ( *((_DWORD *)this + 50) <= v159 )
    v116 = *((_DWORD *)this + 50);
  v117 = v46 + v116 + 1;
  ClpSimplex::resize(a2, v117, v157);
  if ( v117 > v46 )
  {
    while ( 1 )
    {
      v118 = v46 + *((_DWORD *)a2 + 27);
      v46 = v50;
      *(_BYTE *)(*((_QWORD *)a2 + 33) + v118) = *(_BYTE *)(*((_QWORD *)a2 + 33) + v118) & 0xF8 | 1;
      if ( v50 == v117 )
        break;
      ++v50;
    }
  }
  if ( *((_QWORD *)this + 48) )
  {
    v119 = *((_DWORD *)this + 64);
    v120 = *((_DWORD *)this + 65);
    v121 = *((_QWORD *)a2 + 23);
    if ( v119 < v120 )
    {
      v122 = v119;
      v123 = v121 + 8LL * v119;
      v124 = v120 - v119;
      v125 = (v123 >> 3) & 1;
      if ( (unsigned int)(v120 - 1 - v119) <= 4 )
      {
LABEL_107:
        *(_QWORD *)(v121 + 8 * v122) = 0x4202A05F20000000LL;
        if ( v119 + 1 < v120 )
        {
          *(_QWORD *)(v121 + 8LL * (v119 + 1)) = 0x4202A05F20000000LL;
          if ( v119 + 2 < v120 )
          {
            *(_QWORD *)(v121 + 8LL * (v119 + 2)) = 0x4202A05F20000000LL;
            v129 = v119 + 3;
            if ( v119 + 3 < v120 )
            {
              v130 = v119 + 4;
              *(_QWORD *)(v121 + 8LL * v129) = 0x4202A05F20000000LL;
              if ( v130 < v120 )
                *(_QWORD *)(v121 + 8LL * v130) = 0x4202A05F20000000LL;
            }
          }
        }
        goto LABEL_112;
      }
      if ( (_DWORD)v125 )
      {
        ++v119;
        *(_QWORD *)v123 = 0x4202A05F20000000LL;
      }
      v126 = v124 - v125;
      v127 = v121 + 8 * (v122 + v125);
      v128 = 0;
      do
      {
        ++v128;
        v127 += 16;
        *(_OWORD *)(v127 - 16) = xmmword_28A0A0;
      }
      while ( v128 < v126 >> 1 );
      v119 += v126 & 0xFFFFFFFE;
      if ( (v126 & 0xFFFFFFFE) != v126 )
      {
        v122 = v119;
        goto LABEL_107;
      }
    }
  }
LABEL_112:
  CoinPackedMatrix::reserve((CoinPackedMatrix *)v113, v157, *((_DWORD *)this + 67), 1);
  CoinPackedMatrix::reserve((CoinPackedMatrix *)v113, v157 + 1, *((_DWORD *)this + 67), 0);
  *(_DWORD *)(*(_QWORD *)(v113 + 48) + 4LL * v158) = *(_DWORD *)(v113 + 72);
  CoinPackedMatrix::setDimensions((CoinPackedMatrix *)v113, v117, -1);
  *((_DWORD *)this + 24) = *((_DWORD *)this + 64);
  if ( (unsigned __int64)v157 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v131 = operator new[](4LL * v157);
  v132 = *((int *)this + 50);
  *((_QWORD *)this + 21) = v131;
  if ( v132 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 22) = operator new[](4 * v132);
  v133 = 2 * *((_DWORD *)this + 50);
  if ( a14 )
  {
    v134 = v133 + 16;
    v135 = (void *)operator new[](v134);
    *((_QWORD *)this + 29) = memcpy(v135, a14, v134);
    v136 = 2 * *((_DWORD *)this + 74);
    if ( a15 )
    {
      v137 = (void *)operator new[](v136);
      v138 = memcpy(v137, a15, v136);
    }
    else
    {
      v138 = nullptr;
    }
    *((_QWORD *)this + 46) = v138;
  }
  else
  {
    v144 = (void *)operator new[](v133 + 16LL);
    v145 = *((int *)this + 50);
    *((_QWORD *)this + 29) = v144;
    v146 = v145;
    v147 = memset(v144, 0, v145);
    if ( v146 > 0 )
    {
      v148 = 0;
      while ( 1 )
      {
        v147[v148] = v147[v148] & 0xF8 | 1;
        if ( *((_DWORD *)this + 50) <= (int)++v148 )
          break;
        v147 = *((_BYTE **)this + 29);
      }
    }
    v149 = (void *)operator new[](2 * *((_DWORD *)this + 74));
    v150 = *((int *)this + 74);
    *((_QWORD *)this + 46) = v149;
    v151 = v150;
    v152 = memset(v149, 0, v150);
    if ( v151 > 0 )
    {
      v153 = 0;
      while ( 1 )
      {
        v152[v153] = v152[v153] & 0xF8 | 3;
        if ( (int)++v153 >= *((_DWORD *)this + 74) )
          break;
        v152 = *((_BYTE **)this + 46);
      }
    }
  }
  v139 = *((int *)this + 50);
  if ( v139 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v140 = (void *)operator new[](4 * v139);
  v141 = *((_DWORD *)this + 50);
  *((_QWORD *)this + 23) = v140;
  if ( v141 > 0 )
    memset(v140, 255, 4LL * (unsigned int)(v141 - 1) + 4);
  v142 = v117 - *((_DWORD *)this + 66) + 1;
  if ( v142 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 24) = operator new[](4 * v142);
  v143 = *((_DWORD *)this + 74);
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 1) = 0;
  if ( v143 )
  {
    if ( a14 )
      ClpDynamicMatrix::initialProblem(this);
    else
      ClpDynamicMatrix::gubCrash(this);
  }
  *((_DWORD *)this + 70) = -1;
  *((_QWORD *)this + 36) = 0;
}

