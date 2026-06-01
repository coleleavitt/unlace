void __fastcall ClpDualRowSteepest::saveWeights(ClpDualRowSteepest *this, ClpSimplex *a2, int a3)
{
  int v3; // r15d
  ClpDualRowSteepest *v4; // rbx
  int v5; // ebp
  unsigned __int64 v6; // r13
  ClpSimplex *v7; // r12
  unsigned __int64 v8; // rdi
  void *v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r8d
  unsigned int v13; // edi
  unsigned __int64 v14; // rcx
  unsigned int v15; // edx
  signed int v16; // edx
  int v17; // ecx
  int v18; // edx
  CoinIndexedVector *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // esi
  CoinIndexedVector *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // r11
  _QWORD *v27; // rdx
  __int64 v28; // rax
  int v29; // ecx
  _DWORD *v30; // rdi
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // r9
  unsigned __int64 v36; // r14
  unsigned __int64 v37; // r8
  _QWORD *v38; // rsi
  unsigned int v39; // edx
  _DWORD *v40; // r9
  unsigned __int64 v41; // rax
  unsigned int v42; // ecx
  __int128 v43; // xmm1
  signed int v44; // eax
  int v45; // esi
  int v46; // ecx
  int v47; // esi
  int v48; // ecx
  int v49; // eax
  int v50; // esi
  bool v51; // zf
  CoinIndexedVector *v52; // rdi
  __int64 v53; // rcx
  __int64 v54; // r8
  double v55; // xmm2_8
  __int64 v56; // rax
  __int64 v57; // rdi
  double v58; // xmm1_8
  __int64 v59; // rdx
  double v60; // xmm0_8
  double v61; // xmm1_8
  __int64 *v62; // rdx
  double v63; // xmm0_8
  double *v64; // rsi
  bool v65; // dl
  int v66; // ecx
  unsigned __int64 v67; // rdi
  __int64 v68; // rax
  unsigned int v69; // r8d
  _QWORD *v70; // rdx
  unsigned int v71; // eax
  int v72; // eax
  int v73; // ecx
  bool v74; // r10
  __int64 v75; // r10
  __int64 v76; // r11
  bool v77; // dl
  void *v78; // rdi
  void *v79; // rdi
  CoinIndexedVector *v80; // rbp
  CoinIndexedVector *v81; // rbp
  CoinIndexedVector *v82; // rbp
  CoinIndexedVector *v83; // r14
  int *v84; // r8
  __int64 v85; // rax
  __m128i *v86; // rcx
  _QWORD *v87; // rsi
  __int64 v88; // rax
  __int64 v89; // rdi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rax
  int v94; // esi
  __int64 v95; // rdx
  int v96; // r8d
  double *v97; // rdi
  ClpDualRowSteepest *v98; // r12
  __int64 v99; // r15
  int v100; // r13d
  int *v101; // rbx
  __int64 v102; // rax
  int v103; // esi
  double v104; // xmm1_8
  __int64 v105; // rsi
  double *v106; // rax
  double v107; // xmm0_8
  __int64 v108; // rax
  _DWORD *v109; // rsi
  unsigned int v110; // eax
  unsigned int v111; // ecx
  unsigned int v112; // r9d
  __int64 v113; // rdx
  __int64 v114; // rax
  unsigned __int64 v115; // rdi
  _DWORD *v116; // rdx
  signed int v117; // eax
  int v118; // edx
  int v119; // eax
  __int64 v120; // rax
  CoinIndexedVector *v121; // r13
  unsigned __int64 v122; // rax
  int v123; // ecx
  __m128d v124; // xmm2
  __m128d v125; // xmm0
  __int64 v126; // rax
  int v127; // ecx
  __m128d *v128; // rdx
  unsigned int v129; // r8d
  unsigned int v130; // eax
  __m128d v131; // xmm1
  unsigned int v132; // eax
  signed int v133; // edx
  int v134; // eax
  __m128d v135; // xmm1
  unsigned int v136; // r9d
  const __m128i *v137; // rax
  __m128i *v138; // rdx
  __int64 v139; // r9
  __m128i v140; // xmm1
  __m128i v141; // xmm0
  __int64 v142; // rax
  __int32 *v143; // rdx
  _QWORD *v144; // r9
  _QWORD *v145; // rax
  __int64 *v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // xmm0_8
  __int64 v149; // rax
  _QWORD *v150; // rax
  unsigned __int64 v151; // rax
  int *v152; // rax
  __m128i *v153; // rdx
  int v154; // r11d
  int v155; // [rsp+8h] [rbp-70h]
  unsigned __int64 v156; // [rsp+8h] [rbp-70h]
  int v157; // [rsp+10h] [rbp-68h]
  CoinIndexedVector *v158; // [rsp+10h] [rbp-68h]
  int v159; // [rsp+1Ch] [rbp-5Ch]
  int v160; // [rsp+1Ch] [rbp-5Ch]
  _QWORD *v161; // [rsp+20h] [rbp-58h]
  unsigned __int64 v162; // [rsp+28h] [rbp-50h]
  ClpSimplex *v163; // [rsp+30h] [rbp-48h]
  int v164; // [rsp+3Ch] [rbp-3Ch]

  v3 = a3;
  v4 = this;
  *((_QWORD *)this + 1) = a2;
  v5 = *((_DWORD *)a2 + 26);
  v6 = *((_QWORD *)a2 + 157);
  if ( a3 == 1 )
  {
    v78 = *((void **)this + 4);
    if ( v78 )
    {
      if ( v5 == *(_DWORD *)(*((_QWORD *)v4 + 5) + 20LL) )
      {
        CoinIndexedVector::clear(*((CoinIndexedVector **)v4 + 6));
        v109 = **((_DWORD ***)v4 + 6);
        if ( v5 > 0 )
        {
          if ( ((unsigned __int64)v109 >= v6 + 16 || v6 >= (unsigned __int64)(v109 + 4)) && (unsigned int)v5 > 0xC )
          {
            v110 = -(int)(v6 >> 2) & 3;
            if ( v110 )
            {
              *v109 = *(_DWORD *)v6;
              if ( v110 != 1 )
              {
                v3 = 2;
                v109[1] = *(_DWORD *)(v6 + 4);
                if ( v110 != 2 )
                {
                  v3 = 3;
                  v109[2] = *(_DWORD *)(v6 + 8);
                }
              }
            }
            else
            {
              v3 = 0;
            }
            v111 = 0;
            v112 = v5 - v110;
            v113 = v110;
            v114 = 0;
            v115 = v6 + v113 * 4;
            v116 = &v109[v113];
            do
            {
              ++v111;
              *(__m128i *)&v116[v114] = _mm_load_si128((const __m128i *)(v115 + v114 * 4));
              v114 += 4;
            }
            while ( v112 >> 2 > v111 );
            v117 = (v112 & 0xFFFFFFFC) + v3;
            if ( (v112 & 0xFFFFFFFC) != v112 )
            {
              v109[v117] = *(_DWORD *)(v6 + 4LL * v117);
              if ( v5 > v117 + 1 )
              {
                v109[v117 + 1] = *(_DWORD *)(v6 + 4LL * (v117 + 1));
                if ( v5 > v117 + 2 )
                {
                  v109[v117 + 2] = *(_DWORD *)(v6 + 4LL * (v117 + 2));
                  if ( v117 + 3 < v5 )
                  {
                    v109[v117 + 3] = *(_DWORD *)(v6 + 4LL * (v117 + 3));
                    v118 = v117 + 4;
                    if ( v117 + 4 < v5 )
                    {
                      v119 = v117 + 5;
                      v109[v118] = *(_DWORD *)(v6 + 4LL * v118);
                      if ( v5 > v119 )
                        v109[v119] = *(_DWORD *)(v6 + 4LL * v119);
                    }
                  }
                }
              }
            }
          }
          else
          {
            v151 = 0;
            do
            {
              v109[v151 / 4] = *(_DWORD *)(v6 + v151);
              v151 += 4LL;
            }
            while ( v151 != 4LL * (unsigned int)(v5 - 1) + 4 );
          }
        }
        v120 = *((_QWORD *)v4 + 7);
        *((_DWORD *)v4 + 5) = 1;
        if ( *(_BYTE *)(v120 + 28) )
        {
          *(_BYTE *)(v120 + 28) = 0;
          *(_DWORD *)(v120 + 16) = 0;
        }
      }
      else
      {
        operator delete[](v78);
        v79 = *((void **)v4 + 8);
        *((_QWORD *)v4 + 4) = 0;
        if ( v79 )
          operator delete[](v79);
        v80 = *((CoinIndexedVector **)v4 + 5);
        *((_QWORD *)v4 + 8) = 0;
        if ( v80 )
        {
          CoinIndexedVector::~CoinIndexedVector(v80);
          operator delete(v80);
        }
        v81 = *((CoinIndexedVector **)v4 + 6);
        *((_QWORD *)v4 + 5) = 0;
        if ( v81 )
        {
          CoinIndexedVector::~CoinIndexedVector(v81);
          operator delete(v81);
        }
        v82 = *((CoinIndexedVector **)v4 + 7);
        *((_QWORD *)v4 + 6) = 0;
        if ( v82 )
        {
          CoinIndexedVector::~CoinIndexedVector(v82);
          operator delete(v82);
        }
        *((_QWORD *)v4 + 7) = 0;
        *((_DWORD *)v4 + 5) = -1;
      }
    }
    return;
  }
  v7 = a2;
  if ( a3 != 2 && a3 <= 3 )
    goto LABEL_44;
  v8 = *((_QWORD *)this + 4);
  if ( !v8 )
  {
LABEL_8:
    v9 = *((void **)v4 + 6);
    if ( v9 )
    {
      CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)v4 + 6));
      operator delete(v9);
    }
    if ( (unsigned __int64)v5 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v10 = operator new[](8LL * v5);
    *((_QWORD *)v4 + 4) = v10;
    if ( v5 <= 0 )
      goto LABEL_23;
    v11 = (v10 >> 3) & 1;
    if ( (unsigned int)(v5 - 1) <= 4 )
    {
      v16 = 0;
    }
    else
    {
      v12 = 0;
      if ( (_DWORD)v11 )
      {
        v12 = 1;
        *(_QWORD *)v10 = 0x3FF0000000000000LL;
      }
      v13 = v5 - v11;
      v14 = v10 + 8 * v11;
      v15 = 0;
      do
      {
        ++v15;
        v14 += 16LL;
        *(_OWORD *)(v14 - 16) = xmmword_289DC0;
      }
      while ( v13 >> 1 > v15 );
      v16 = (v13 & 0xFFFFFFFE) + v12;
      if ( v13 == (v13 & 0xFFFFFFFE) )
        goto LABEL_23;
    }
    *(_QWORD *)(v10 + 8LL * v16) = 0x3FF0000000000000LL;
    if ( v5 > v16 + 1 )
    {
      *(_QWORD *)(v10 + 8LL * (v16 + 1)) = 0x3FF0000000000000LL;
      if ( v5 > v16 + 2 )
      {
        *(_QWORD *)(v10 + 8LL * (v16 + 2)) = 0x3FF0000000000000LL;
        v17 = v16 + 3;
        if ( v5 > v16 + 3 )
        {
          v18 = v16 + 4;
          *(_QWORD *)(v10 + 8LL * v17) = 0x3FF0000000000000LL;
          if ( v5 > v18 )
            *(_QWORD *)(v10 + 8LL * v18) = 0x3FF0000000000000LL;
        }
      }
    }
LABEL_23:
    v19 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v19);
    v20 = *((_QWORD *)v4 + 1);
    *((_QWORD *)v4 + 6) = v19;
    v21 = *(_QWORD *)(v20 + 1264);
    v22 = *(_QWORD *)(v21 + 8);
    if ( v22 )
      v23 = *(_DWORD *)(v22 + 64);
    else
      v23 = *(_DWORD *)(*(_QWORD *)(v21 + 16) + 48LL);
    CoinIndexedVector::reserve(v19, v5 + v23);
    if ( *((_DWORD *)v4 + 6) == 1 && v3 != 5 )
    {
      v158 = (CoinIndexedVector *)operator new(0x20u);
      CoinIndexedVector::CoinIndexedVector(v158);
      v92 = *(_QWORD *)(*((_QWORD *)v4 + 1) + 1264LL);
      v93 = *(_QWORD *)(v92 + 8);
      if ( v93 )
        v94 = *(_DWORD *)(v93 + 64);
      else
        v94 = *(_DWORD *)(*(_QWORD *)(v92 + 16) + 48LL);
      CoinIndexedVector::reserve(v158, v5 + v94);
      v95 = *((_QWORD *)v4 + 6);
      v96 = 0;
      v160 = v5;
      v97 = *(double **)(v95 + 8);
      if ( v3 == 7 )
      {
        v96 = *((_DWORD *)v7 + 431);
        v160 = *((_DWORD *)v7 + 432);
      }
      if ( v96 < v160 )
      {
        v162 = v6;
        v163 = v7;
        v164 = v3;
        v98 = v4;
        v99 = 8LL * v96;
        v100 = v96;
        v101 = *(int **)v95;
        do
        {
          v102 = *((_QWORD *)v98 + 1);
          *v97 = 1.0;
          *v101 = v100;
          *(_DWORD *)(v95 + 16) = 1;
          *(_BYTE *)(v95 + 28) = 1;
          ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v102 + 1264), v158, (CoinIndexedVector *)v95);
          v95 = *((_QWORD *)v98 + 6);
          v103 = *(_DWORD *)(v95 + 16);
          if ( v103 <= 0 )
          {
            v104 = 0.0;
          }
          else
          {
            v104 = 0.0;
            v105 = (__int64)&v97[(unsigned int)(v103 - 1) + 1];
            v106 = v97;
            do
            {
              v107 = *v106;
              *v106++ = 0.0;
              v104 = v104 + v107 * v107;
            }
            while ( v106 != (double *)v105 );
          }
          v108 = *((_QWORD *)v98 + 4);
          *(_DWORD *)(v95 + 16) = 0;
          ++v100;
          *(_BYTE *)(v95 + 28) = 0;
          *(double *)(v108 + v99) = v104;
          v99 += 8;
        }
        while ( v160 != v100 );
        v4 = v98;
        v6 = v162;
        v7 = v163;
        v3 = v164;
      }
      CoinIndexedVector::~CoinIndexedVector(v158);
      operator delete(v158);
    }
    v24 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v24);
    *((_QWORD *)v4 + 7) = v24;
    CoinIndexedVector::reserve(v24, v5);
    v25 = *((_QWORD *)v4 + 1);
    v26 = *((_QWORD *)v4 + 7);
    v27 = *(_QWORD **)(v26 + 8);
    if ( *(int *)(v25 + 104) > 0 )
    {
      v28 = 1;
      do
      {
        v27[v28 - 1] = 0x3FF0000000000000LL;
        v29 = v28++;
      }
      while ( v29 < *(_DWORD *)(v25 + 104) );
    }
    v30 = *(_DWORD **)v26;
    if ( v5 > 0 )
    {
      v31 = *((_QWORD *)v4 + 4);
      if ( (v6 >= (unsigned __int64)(v30 + 4) || (unsigned __int64)v30 >= v6 + 16)
        && (unsigned int)v5 > 0xC
        && ((unsigned __int64)v27 >= v31 + 32 || v31 >= (unsigned __int64)(v27 + 4))
        && (v27 >= (_QWORD *)&v30[v5] || v30 >= (_DWORD *)&v27[v5]) )
      {
        v155 = 0;
        v32 = (v31 >> 3) & 1;
        if ( ((v31 >> 3) & 1) != 0 )
        {
          v33 = *(_DWORD *)v6;
          v155 = 1;
          *v27 = *(_QWORD *)v31;
          *v30 = v33;
        }
        v161 = v27;
        v34 = (v31 >> 3) & 1;
        v35 = (v31 >> 3) & 1;
        v159 = v5 - v32;
        v36 = v6 + v35 * 4;
        v37 = v31 + v34 * 8;
        v38 = &v27[v34];
        v39 = (unsigned int)(v5 - v32) >> 2;
        v40 = &v30[v35];
        v41 = 0;
        v42 = 0;
        do
        {
          ++v42;
          v43 = *(_OWORD *)(v37 + 2 * v41);
          *(_OWORD *)&v38[v41 / 4 + 2] = *(_OWORD *)(v37 + 2 * v41 + 16);
          *(_OWORD *)&v38[v41 / 4] = v43;
          *(__m128i *)&v40[v41 / 4] = _mm_loadu_si128((const __m128i *)(v36 + v41));
          v41 += 16LL;
        }
        while ( v39 > v42 );
        v44 = (v159 & 0xFFFFFFFC) + v155;
        if ( (v159 & 0xFFFFFFFC) != v159 )
        {
          v45 = *(_DWORD *)(v6 + 4LL * v44);
          v161[v44] = *(_QWORD *)(v31 + 8LL * v44);
          v30[v44] = v45;
          v46 = v44 + 1;
          if ( v5 > v44 + 1 )
          {
            v47 = *(_DWORD *)(v6 + 4LL * v46);
            v161[v46] = *(_QWORD *)(v31 + 8LL * v46);
            v30[v46] = v47;
            v48 = v44 + 2;
            if ( v5 > v44 + 2 )
            {
              v49 = v44 + 3;
              v50 = *(_DWORD *)(v6 + 4LL * v48);
              v161[v48] = *(_QWORD *)(v31 + 8LL * v48);
              v30[v48] = v50;
              if ( v5 > v49 )
              {
                v161[v49] = *(_QWORD *)(v31 + 8LL * v49);
                v30[v49] = *(_DWORD *)(v6 + 4LL * v49);
              }
            }
          }
        }
      }
      else
      {
        v122 = 0;
        do
        {
          v123 = *(_DWORD *)(v6 + v122);
          v27[v122 / 4] = *(_QWORD *)(v31 + 2 * v122);
          v30[v122 / 4] = v123;
          v122 += 4LL;
        }
        while ( v122 != 4LL * (unsigned int)(v5 - 1) + 4 );
      }
    }
    if ( v3 != 7 )
      goto LABEL_43;
    *(_DWORD *)(v26 + 16) = v5;
    *(_BYTE *)(v26 + 28) = 1;
    goto LABEL_141;
  }
  if ( *((_DWORD *)v4 + 5) == -1 || (a3 & 0xFFFFFFFD) == 5 )
  {
    operator delete[]((void *)v8);
    goto LABEL_8;
  }
  if ( a3 != 6 )
  {
    v83 = *((CoinIndexedVector **)a2 + 135);
    v157 = *((_DWORD *)a2 + 27);
    v156 = **((_QWORD **)v4 + 6);
    CoinIndexedVector::clear(v83);
    v84 = *(int **)v83;
    if ( v5 + v157 > 0 )
      v84 = (int *)memset(v84, 255, 4LL * (unsigned int)(v5 + v157 - 1) + 4);
    v85 = *((_QWORD *)v4 + 7);
    v86 = *(__m128i **)v85;
    v87 = *(_QWORD **)(v85 + 8);
    if ( v3 != 4 )
    {
      if ( (__m128i *)v156 != v86 && v5 )
      {
        v136 = v5 >> 3;
        if ( v5 >> 3 <= 0 )
        {
          v143 = (__int32 *)v156;
        }
        else
        {
          if ( (v156 >= (unsigned __int64)&v86[2] || (unsigned __int64)v86 >= v156 + 32) && v136 > 1 )
          {
            v137 = (const __m128i *)v156;
            v138 = v86;
            v139 = v136 - 1;
            do
            {
              v140 = _mm_loadu_si128(v137);
              v137 += 2;
              v138 += 2;
              v141 = _mm_loadu_si128(v137 - 1);
              v138[-2] = v140;
              v138[-1] = v141;
            }
            while ( v137 != (const __m128i *)(v156 + 32 + 32 * v139) );
          }
          else
          {
            v152 = (int *)v156;
            v153 = v86;
            v139 = v136 - 1;
            do
            {
              v154 = *v152;
              v152 += 8;
              v153 += 2;
              v153[-2].m128i_i32[0] = v154;
              v153[-2].m128i_i32[1] = *(v152 - 7);
              v153[-2].m128i_i32[2] = *(v152 - 6);
              v153[-2].m128i_i32[3] = *(v152 - 5);
              v153[-1].m128i_i32[0] = *(v152 - 4);
              v153[-1].m128i_i32[1] = *(v152 - 3);
              v153[-1].m128i_i32[2] = *(v152 - 2);
              v153[-1].m128i_i32[3] = *(v152 - 1);
            }
            while ( v152 != (int *)(v156 + 32 * (v139 + 1)) );
          }
          v142 = 32 * ((int)v139 + 1LL);
          v86 = (__m128i *)((char *)v86 + v142);
          v143 = (__int32 *)(v142 + v156);
        }
        switch ( v5 % 8 )
        {
          case 1:
            goto LABEL_180;
          case 2:
            goto LABEL_179;
          case 3:
            goto LABEL_178;
          case 4:
            goto LABEL_177;
          case 5:
            goto LABEL_176;
          case 6:
            goto LABEL_175;
          case 7:
            v86[1].m128i_i32[2] = v143[6];
LABEL_175:
            v86[1].m128i_i32[1] = v143[5];
LABEL_176:
            v86[1].m128i_i32[0] = v143[4];
LABEL_177:
            v86->m128i_i32[3] = v143[3];
LABEL_178:
            v86->m128i_i32[2] = v143[2];
LABEL_179:
            v86->m128i_i32[1] = v143[1];
LABEL_180:
            v86->m128i_i32[0] = *v143;
            break;
          default:
            break;
        }
      }
      v144 = *((_QWORD **)v4 + 4);
      if ( v144 == v87 || !v5 )
      {
LABEL_195:
        v86 = (__m128i *)v156;
      }
      else
      {
        if ( v5 >> 3 <= 0 )
        {
          v150 = v87;
        }
        else
        {
          v145 = v87;
          v146 = *((__int64 **)v4 + 4);
          v147 = (unsigned int)((v5 >> 3) - 1);
          do
          {
            v148 = *v146;
            v145 += 8;
            v146 += 8;
            *(v145 - 8) = v148;
            *(v145 - 7) = *(v146 - 7);
            *(v145 - 6) = *(v146 - 6);
            *(v145 - 5) = *(v146 - 5);
            *(v145 - 4) = *(v146 - 4);
            *(v145 - 3) = *(v146 - 3);
            *(v145 - 2) = *(v146 - 2);
            *(v145 - 1) = *(v146 - 1);
          }
          while ( v145 != &v87[8 * v147 + 8] );
          v149 = ((int)v147 + 1LL) << 6;
          v144 = (_QWORD *)((char *)v144 + v149);
          v150 = (_QWORD *)((char *)v87 + v149);
        }
        switch ( v5 % 8 )
        {
          case 1:
            goto LABEL_194;
          case 2:
            goto LABEL_193;
          case 3:
            goto LABEL_192;
          case 4:
            goto LABEL_191;
          case 5:
            goto LABEL_190;
          case 6:
            goto LABEL_189;
          case 7:
            v150[6] = v144[6];
LABEL_189:
            v150[5] = v144[5];
LABEL_190:
            v150[4] = v144[4];
LABEL_191:
            v150[3] = v144[3];
LABEL_192:
            v150[2] = v144[2];
LABEL_193:
            v150[1] = v144[1];
LABEL_194:
            v86 = (__m128i *)v156;
            *v150 = *v144;
            break;
          default:
            goto LABEL_195;
        }
      }
    }
    if ( v5 > 0 )
    {
      v88 = 0;
      do
      {
        v84[v86->m128i_i32[v88]] = v88;
        ++v88;
      }
      while ( v88 != (unsigned int)(v5 - 1) + 1LL );
      v89 = *((_QWORD *)v4 + 4);
      v90 = 0;
      do
      {
        v91 = v84[*(int *)(v6 + 4 * v90)];
        if ( (int)v91 >= 0 )
          *(double *)(v89 + 8 * v90) = fmax(0.0001, *(double *)&v87[v91]);
        else
          *(_QWORD *)(v89 + 8 * v90) = 0x3FF0000000000000LL;
        ++v90;
      }
      while ( v90 != v88 );
    }
LABEL_43:
    v51 = *((_QWORD *)v4 + 5) == 0;
    *((_DWORD *)v4 + 5) = 0;
    if ( !v51 )
    {
LABEL_44:
      if ( v3 <= 1 )
        return;
      v52 = *((CoinIndexedVector **)v4 + 5);
      goto LABEL_46;
    }
LABEL_142:
    v121 = (CoinIndexedVector *)operator new(0x20u);
    CoinIndexedVector::CoinIndexedVector(v121);
    *((_QWORD *)v4 + 5) = v121;
    CoinIndexedVector::reserve(v121, v5);
    goto LABEL_44;
  }
  v124.m128d_f64[0] = *((double *)a2 + 95);
  v125 = (__m128d)0x4024000000000000uLL;
  if ( v124.m128d_f64[0] <= 1000.0 )
  {
    v125 = (__m128d)0x4049000000000000uLL;
    if ( v124.m128d_f64[0] <= 100.0 )
    {
      v135 = _mm_cmplt_sd((__m128d)0x4024000000000000uLL, v124);
      v125 = _mm_or_pd(
               _mm_andn_pd(v135, (__m128d)0x408F400000000000uLL),
               _mm_and_pd((__m128d)0x4059000000000000uLL, v135));
    }
  }
  if ( v5 > 0 )
  {
    v126 = (v8 >> 3) & 1;
    if ( (unsigned int)(v5 - 1) <= 4 )
    {
      v132 = 0;
    }
    else
    {
      v127 = 0;
      if ( (_DWORD)v126 )
      {
        *(double *)v8 = v125.m128d_f64[0];
        v127 = 1;
      }
      v128 = (__m128d *)(v8 + 8 * v126);
      v129 = v5 - v126;
      v130 = 0;
      v131 = _mm_unpacklo_pd(v125, v125);
      do
      {
        ++v130;
        ++v128;
        v128[-1] = v131;
      }
      while ( v129 >> 1 > v130 );
      v132 = (v129 & 0xFFFFFFFE) + v127;
      if ( v129 == (v129 & 0xFFFFFFFE) )
        goto LABEL_141;
    }
    *(double *)(v8 + 8LL * (int)v132) = v125.m128d_f64[0];
    if ( v5 > (int)(v132 + 1) )
    {
      *(double *)(v8 + 8LL * (int)(v132 + 1)) = v125.m128d_f64[0];
      if ( v5 > (int)(v132 + 2) )
      {
        *(double *)(v8 + 8LL * (int)(v132 + 2)) = v125.m128d_f64[0];
        v133 = v132 + 3;
        if ( v5 > (int)(v132 + 3) )
        {
          v134 = v132 + 4;
          *(double *)(v8 + 8LL * v133) = v125.m128d_f64[0];
          if ( v5 > v134 )
            *(double *)(v8 + 8LL * v134) = v125.m128d_f64[0];
        }
      }
    }
  }
LABEL_141:
  v52 = *((CoinIndexedVector **)v4 + 5);
  *((_DWORD *)v4 + 5) = 0;
  if ( !v52 )
    goto LABEL_142;
LABEL_46:
  CoinIndexedVector::clear(v52);
  v53 = *((_QWORD *)v4 + 1);
  v54 = *(_QWORD *)(v53 + 1256);
  v55 = *(double *)(v53 + 880);
  if ( v5 > 0 )
  {
    v56 = 0;
    v57 = (unsigned int)(v5 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v59 = *(int *)(v54 + 4 * v56);
        v60 = *(double *)(*(_QWORD *)(v53 + 1200) + 8 * v59);
        v61 = *(double *)(*(_QWORD *)(v53 + 984) + 8 * v59);
        if ( v61 - v55 > v60 )
          break;
        v58 = *(double *)(*(_QWORD *)(v53 + 1008) + 8 * v59);
        if ( v60 <= v55 + v58 )
          goto LABEL_49;
        v62 = *((__int64 **)v4 + 5);
        v63 = (v60 - v58) * (v60 - v58);
        v64 = (double *)(v62[1] + 8 * v56);
        if ( *v64 != 0.0 )
        {
          v63 = v63 + *v64;
          if ( v63 <= 0.0 )
            v77 = v63 <= -1.0e-50;
          else
            v77 = v63 >= 1.0e-50;
          if ( !v77 )
          {
            *v64 = 1.0e-100;
            goto LABEL_49;
          }
          goto LABEL_76;
        }
        if ( v63 > 0.0 )
        {
LABEL_73:
          v74 = v63 >= 1.0e-50;
          goto LABEL_74;
        }
        v74 = v63 <= -1.0e-50;
LABEL_74:
        if ( v74 )
        {
          v75 = *((int *)v62 + 4);
          v76 = *v62;
          *((_DWORD *)v62 + 4) = v75 + 1;
          *(_DWORD *)(v76 + 4 * v75) = v56;
LABEL_76:
          *v64 = v63;
        }
LABEL_49:
        if ( ++v56 == v57 )
          goto LABEL_56;
      }
      v62 = *((__int64 **)v4 + 5);
      v63 = (v60 - v61) * (v60 - v61);
      v64 = (double *)(v62[1] + 8 * v56);
      if ( *v64 == 0.0 )
      {
        if ( v63 > 0.0 )
          goto LABEL_73;
        v74 = v63 <= -1.0e-50;
        goto LABEL_74;
      }
      v63 = v63 + *v64;
      if ( v63 <= 0.0 )
        v65 = v63 <= -1.0e-50;
      else
        v65 = v63 >= 1.0e-50;
      if ( v65 )
        goto LABEL_76;
      ++v56;
      *v64 = 1.0e-100;
    }
    while ( v56 != v57 );
  }
LABEL_56:
  if ( v3 == 2 )
  {
    v66 = *((_DWORD *)v7 + 77);
    if ( !v66 && (*((_BYTE *)v7 + 337) & 0x40) != 0 && v5 > 0 )
    {
      v67 = *((_QWORD *)v4 + 4);
      v68 = (v67 >> 3) & 1;
      if ( (unsigned int)(v5 - 1) <= 4 )
        goto LABEL_66;
      if ( (_DWORD)v68 )
      {
        v66 = 1;
        *(_QWORD *)v67 = 0x3FF0000000000000LL;
      }
      v69 = v5 - v68;
      v70 = (_QWORD *)(v67 + 8 * v68);
      v71 = 0;
      do
      {
        ++v71;
        v70 += 2;
        *((_OWORD *)v70 - 1) = xmmword_289DC0;
      }
      while ( v69 >> 1 > v71 );
      v66 += v69 & 0xFFFFFFFE;
      if ( (v69 & 0xFFFFFFFE) != v69 )
      {
LABEL_66:
        *(_QWORD *)(v67 + 8LL * v66) = 0x3FF0000000000000LL;
        if ( v66 + 1 < v5 )
        {
          *(_QWORD *)(v67 + 8LL * (v66 + 1)) = 0x3FF0000000000000LL;
          if ( v5 > v66 + 2 )
          {
            *(_QWORD *)(v67 + 8LL * (v66 + 2)) = 0x3FF0000000000000LL;
            v72 = v66 + 3;
            if ( v5 > v66 + 3 )
            {
              v73 = v66 + 4;
              *(_QWORD *)(v67 + 8LL * v72) = 0x3FF0000000000000LL;
              if ( v5 > v73 )
                *(_QWORD *)(v67 + 8LL * v73) = 0x3FF0000000000000LL;
            }
          }
        }
      }
    }
  }
}

