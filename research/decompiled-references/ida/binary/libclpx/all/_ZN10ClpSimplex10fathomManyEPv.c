__int64 __fastcall ClpSimplex::fathomMany(ClpSimplex *this, ClpNodeStuff *a2)
{
  int v4; // r15d
  ClpNode **v5; // rax
  __int64 v6; // xmm0_8
  ClpNode **v7; // rbp
  __int64 v8; // r13
  ClpNode *v9; // rdi
  bool v10; // zf
  double *v11; // r13
  unsigned __int64 v12; // rdi
  int *v13; // r15
  unsigned __int64 v14; // rdi
  int *v15; // rbp
  __int64 v16; // r13
  __int64 v17; // r14
  int v18; // eax
  int v19; // eax
  __int64 v20; // rsi
  int v21; // ecx
  int v22; // edi
  __int64 v23; // r15
  __m128i si128; // xmm6
  int v25; // r10d
  __int64 v26; // rdx
  __int64 v27; // r9
  int v28; // r8d
  __int64 v29; // rax
  unsigned int v30; // r11d
  int v31; // r11d
  unsigned int v32; // r8d
  __m128i v33; // xmm2
  __int64 v34; // r9
  unsigned int v35; // eax
  const __m128i *v36; // r9
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __m128i v39; // xmm3
  __m128i v40; // xmm1
  __m128i v41; // xmm0
  __m128i v42; // xmm7
  __m128i v43; // xmm2
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  _BYTE *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // rax
  int v50; // r8d
  unsigned __int64 v51; // rdi
  int v52; // r14d
  _DWORD *v53; // rax
  int v54; // esi
  __int64 v55; // r8
  __int64 v56; // rdx
  int v57; // edi
  __int64 v58; // rsi
  __int64 v59; // rcx
  int v60; // r9d
  __int64 v61; // r10
  __int64 v62; // rcx
  int v63; // r9d
  _DWORD *v64; // rdx
  __int64 v65; // rdx
  int *v66; // r8
  int *v67; // rcx
  int v69; // eax
  __int64 v70; // rsi
  unsigned __int64 v71; // rax
  int v72; // ecx
  __int64 v73; // rdx
  const void *v74; // r13
  size_t v75; // rbp
  const void *v76; // r13
  size_t v77; // rbp
  const void *v78; // r13
  unsigned __int64 v79; // rbp
  const void *v80; // r13
  unsigned __int64 v81; // rdi
  __int64 v82; // rdi
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rsi
  int v86; // edx
  __int64 v87; // rax
  __int64 v88; // rcx
  double v89; // xmm6_8
  int v90; // r14d
  int v91; // eax
  char v92; // r13
  __int64 v93; // rax
  unsigned int v94; // r15d
  int v95; // eax
  int v96; // ebp
  int v97; // r14d
  ClpNode **v98; // r13
  int v99; // r15d
  char *v100; // rdi
  char *v101; // rax
  __int64 v102; // rdx
  __int64 v103; // xmm0_8
  char *v104; // rax
  char *v105; // rax
  char *v106; // rdx
  char *v107; // rcx
  __int64 v108; // xmm0_8
  int v109; // ecx
  char *v110; // rdi
  bool v111; // dl
  __int64 *v112; // rdx
  char *v113; // rax
  __int64 v114; // xmm0_8
  __int64 v115; // rax
  char *v116; // rsi
  char *v117; // rdi
  __int64 *v118; // rdx
  char *v119; // rax
  __int64 v120; // xmm0_8
  __int64 v121; // rax
  char *v122; // rsi
  __int64 v123; // rax
  ClpNode **v124; // rbp
  ClpNode **v125; // r14
  ClpNode *v126; // rdi
  __int64 v127; // r8
  ClpNode **v128; // rbp
  int v129; // eax
  double v130; // xmm0_8
  double v131; // xmm0_8
  ClpNode **v132; // rbp
  int v133; // eax
  ClpNode **v134; // r15
  ClpNode *v135; // rbp
  ClpSimplexOther *v136; // rdi
  int v137; // eax
  const int *v138; // rcx
  __int64 v139; // rsi
  __int64 v140; // rax
  bool v141; // al
  ClpNode **v142; // r15
  ClpNode **v143; // rbp
  ClpNode *v144; // r13
  ClpSimplexOther *v145; // rdi
  int v146; // esi
  const int *v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rdx
  char v150; // cl
  int v151; // eax
  __int64 v152; // [rsp+8h] [rbp-100h]
  unsigned int started; // [rsp+8h] [rbp-100h]
  ClpNode **v154; // [rsp+10h] [rbp-F8h]
  int v155; // [rsp+10h] [rbp-F8h]
  _BYTE *v156; // [rsp+18h] [rbp-F0h]
  int v157; // [rsp+18h] [rbp-F0h]
  int v158; // [rsp+18h] [rbp-F0h]
  int *v159; // [rsp+20h] [rbp-E8h]
  int v160; // [rsp+20h] [rbp-E8h]
  signed int v161; // [rsp+28h] [rbp-E0h]
  double v162; // [rsp+30h] [rbp-D8h]
  int v163; // [rsp+38h] [rbp-D0h]
  bool v164; // [rsp+3Fh] [rbp-C9h]
  char *v165; // [rsp+40h] [rbp-C8h]
  double v166; // [rsp+48h] [rbp-C0h]
  char *v167; // [rsp+50h] [rbp-B8h]
  char *v168; // [rsp+58h] [rbp-B0h]
  _DWORD *v169; // [rsp+68h] [rbp-A0h]
  char *v170; // [rsp+70h] [rbp-98h]
  int v171; // [rsp+78h] [rbp-90h]
  unsigned int v172; // [rsp+7Ch] [rbp-8Ch]
  signed int v173; // [rsp+80h] [rbp-88h]
  int v174; // [rsp+84h] [rbp-84h]
  int v175; // [rsp+88h] [rbp-80h]
  int v176; // [rsp+8Ch] [rbp-7Ch]
  __int64 v177; // [rsp+90h] [rbp-78h]
  char *v178; // [rsp+98h] [rbp-70h]
  ClpNode **v179; // [rsp+A0h] [rbp-68h]
  char *v180; // [rsp+A8h] [rbp-60h]
  double v181; // [rsp+B8h] [rbp-50h]
  double v182[8]; // [rsp+C8h] [rbp-40h] BYREF

  v173 = ClpNodeStuff::maximumNodes(a2);
  v4 = ClpNodeStuff::maximumSpace(a2);
  v5 = *((ClpNode ***)a2 + 12);
  *((_DWORD *)a2 + 41) = 0;
  *((_DWORD *)this + 182) |= 0x1000000u;
  v6 = *((_QWORD *)this + 1);
  v154 = v5;
  if ( v4 > 0 )
  {
    v7 = v5;
    v8 = (__int64)&v5[(unsigned int)(v4 - 1) + 1];
    do
    {
      v9 = *v7;
      if ( *v7 )
      {
        v10 = *((_QWORD *)a2 + 13) == 0;
        *((_QWORD *)v9 + 2) = v6;
        if ( !v10 )
          ClpNode::cleanUpForCrunch(v9);
      }
      ++v7;
    }
    while ( (ClpNode **)v8 != v7 );
  }
  if ( *((_DWORD *)a2 + 44) )
  {
    v11 = *((double **)this + 16);
    v12 = 3 * *((_DWORD *)this + 26);
    if ( v12 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v13 = (int *)operator new[](4 * v12);
      v14 = 2 * *((_DWORD *)this + 27);
      if ( v14 <= 0x1FFFFFFFFFFFFFFELL )
      {
        v15 = (int *)operator new[](4 * v14);
        v16 = ClpSimplexOther::crunch(this, v11, v13, v15, (int *)v182, 0, (*((_DWORD *)this + 84) & 0x40) != 0);
        if ( !v16 )
        {
          v172 = -1;
          goto LABEL_94;
        }
        v17 = *((_QWORD *)a2 + 5);
        v18 = LODWORD(v182[0]);
        *((_QWORD *)a2 + 13) = this;
        *((_QWORD *)a2 + 14) = v13;
        *((_QWORD *)a2 + 15) = v15;
        *((_DWORD *)a2 + 34) = v18;
        if ( v17 )
        {
          v19 = *(_DWORD *)(v16 + 108);
          if ( v19 > 0 )
          {
            v159 = v13;
            v20 = 0;
            v21 = 0;
            v22 = 0;
            v152 = (unsigned int)(v19 - 1) + 1LL;
            v155 = 0;
            v23 = *(_QWORD *)(v16 + 272);
            si128 = _mm_load_si128((const __m128i *)&xmmword_28D010);
            while ( 1 )
            {
              while ( !*(_BYTE *)(v23 + v20) )
              {
                if ( v152 == ++v20 )
                  goto LABEL_71;
              }
              v25 = v15[v20];
              if ( v22 == v25 )
                goto LABEL_70;
              v26 = *((_QWORD *)this + 34);
              v27 = v22;
              v28 = v25 - v22;
              v156 = (_BYTE *)(v26 + v22);
              v29 = -(int)v156 & 0xF;
              v30 = v29 + 15;
              if ( (unsigned int)(v29 + 15) < 0x12 )
                v30 = 18;
              if ( v30 <= v28 - 1 )
              {
                if ( (_DWORD)v29 )
                {
                  v31 = v22 + 1;
                  v21 -= (*v156 == 0) - 1;
                  if ( (_DWORD)v29 != 1 )
                  {
                    if ( *(_BYTE *)(v26 + v31) )
                      ++v21;
                    v31 = v22 + 2;
                    if ( (_DWORD)v29 != 2 )
                    {
                      if ( *(_BYTE *)(v26 + v31) )
                        ++v21;
                      v31 = v22 + 3;
                      if ( (_DWORD)v29 != 3 )
                      {
                        if ( *(_BYTE *)(v26 + v31) )
                          ++v21;
                        v31 = v22 + 4;
                        if ( (_DWORD)v29 != 4 )
                        {
                          if ( *(_BYTE *)(v26 + v31) )
                            ++v21;
                          v31 = v22 + 5;
                          if ( (_DWORD)v29 != 5 )
                          {
                            if ( *(_BYTE *)(v26 + v31) )
                              ++v21;
                            v31 = v22 + 6;
                            if ( (_DWORD)v29 != 6 )
                            {
                              if ( *(_BYTE *)(v26 + v31) )
                                ++v21;
                              v31 = v22 + 7;
                              if ( (_DWORD)v29 != 7 )
                              {
                                if ( *(_BYTE *)(v26 + v31) )
                                  ++v21;
                                v31 = v22 + 8;
                                if ( (_DWORD)v29 != 8 )
                                {
                                  if ( *(_BYTE *)(v26 + v31) )
                                    ++v21;
                                  v31 = v22 + 9;
                                  if ( (_DWORD)v29 != 9 )
                                  {
                                    if ( *(_BYTE *)(v26 + v31) )
                                      ++v21;
                                    v31 = v22 + 10;
                                    if ( (_DWORD)v29 != 10 )
                                    {
                                      if ( *(_BYTE *)(v26 + v31) )
                                        ++v21;
                                      v31 = v22 + 11;
                                      if ( (_DWORD)v29 != 11 )
                                      {
                                        if ( *(_BYTE *)(v26 + v31) )
                                          ++v21;
                                        v31 = v22 + 12;
                                        if ( (_DWORD)v29 != 12 )
                                        {
                                          if ( *(_BYTE *)(v26 + v31) )
                                            ++v21;
                                          v31 = v22 + 13;
                                          if ( (_DWORD)v29 != 13 )
                                          {
                                            if ( *(_BYTE *)(v26 + v31) )
                                              ++v21;
                                            v31 = v22 + 14;
                                            if ( (_DWORD)v29 != 14 )
                                            {
                                              if ( *(_BYTE *)(v26 + v31) )
                                                ++v21;
                                              v31 = v22 + 15;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  v31 = v22;
                }
                v32 = v28 - v29;
                v33 = 0;
                v34 = v29 + v22;
                v35 = 0;
                v36 = (const __m128i *)(v26 + v34);
                do
                {
                  ++v35;
                  v37 = _mm_cmpeq_epi8(_mm_load_si128(v36++), (__m128i)0LL);
                  v38 = _mm_andnot_si128(v37, si128);
                  v39 = _mm_cmpgt_epi8((__m128i)0LL, v38);
                  v40 = _mm_unpacklo_epi8(v38, v39);
                  v41 = _mm_unpackhi_epi8(v38, v39);
                  v42 = _mm_cmpgt_epi16((__m128i)0LL, v40);
                  v43 = _mm_add_epi32(_mm_add_epi32(v33, _mm_unpacklo_epi16(v40, v42)), _mm_unpackhi_epi16(v40, v42));
                  v44 = _mm_cmpgt_epi16((__m128i)0LL, v41);
                  v33 = _mm_add_epi32(_mm_add_epi32(v43, _mm_unpacklo_epi16(v41, v44)), _mm_unpackhi_epi16(v41, v44));
                }
                while ( v35 < v32 >> 4 );
                v45 = _mm_add_epi32(v33, _mm_srli_si128(v33, 8));
                v21 += _mm_cvtsi128_si32(_mm_add_epi32(v45, _mm_srli_si128(v45, 4)));
                v22 = (v32 & 0xFFFFFFF0) + v31;
                if ( (v32 & 0xFFFFFFF0) == v32 )
                  goto LABEL_70;
                v27 = v22;
              }
              v46 = (_BYTE *)(v26 + v27);
              v47 = (unsigned int)(v25 - 1 - v22) + v26 + v27 + 1;
              do
                v21 -= (*v46++ == 0) - 1;
              while ( (_BYTE *)v47 != v46 );
LABEL_70:
              v48 = *((_QWORD *)a2 + 8);
              v49 = v155;
              ++v20;
              v50 = *(_DWORD *)(v48 + 4LL * v21);
              *(_QWORD *)(v17 + 8LL * v155) = *(_QWORD *)(v17 + 8LL * v21);
              *(_DWORD *)(v48 + 4LL * v155++) = v50;
              *(_DWORD *)(*((_QWORD *)a2 + 10) + 4 * v49) = *(_DWORD *)(*((_QWORD *)a2 + 10) + 4LL * v21);
              *(_QWORD *)(*((_QWORD *)a2 + 4) + 8 * v49) = *(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL * v21);
              *(_DWORD *)(*((_QWORD *)a2 + 7) + 4 * v49) = *(_DWORD *)(*((_QWORD *)a2 + 7) + 4LL * v21);
              *(_DWORD *)(*((_QWORD *)a2 + 9) + 4 * v49) = *(_DWORD *)(*((_QWORD *)a2 + 9) + 4LL * v21);
              v22 = v25;
              if ( v152 == v20 )
              {
LABEL_71:
                v13 = v159;
                break;
              }
            }
          }
        }
        *((_DWORD *)a2 + 44) = 0;
        v172 = ClpSimplex::fathomMany((ClpSimplex *)v16, a2);
        if ( !*((_QWORD *)a2 + 5) )
        {
LABEL_92:
          ClpSimplex::~ClpSimplex((ClpSimplex *)v16);
          operator delete((void *)v16);
LABEL_94:
          *((_QWORD *)a2 + 13) = 0;
          *((_QWORD *)a2 + 14) = 0;
          *((_QWORD *)a2 + 15) = 0;
          operator delete[](v13);
          operator delete[](v15);
          return v172;
        }
        v51 = *((int *)this + 27);
        v52 = *(_DWORD *)(v16 + 108);
        if ( v51 <= 0x1FFFFFFFFFFFFFFELL )
        {
          v53 = (_DWORD *)operator new[](4 * v51);
          v54 = *((_DWORD *)this + 27);
          if ( v54 <= 0 )
          {
            v57 = 0;
            v58 = (unsigned int)(v54 - 1);
          }
          else
          {
            v55 = *((_QWORD *)this + 34);
            v56 = 0;
            v57 = 0;
            v58 = (unsigned int)(v54 - 1);
            v59 = v58 + 1;
            do
            {
              while ( *(_BYTE *)(v55 + v56) )
              {
                v60 = -10 - v57++;
                v53[v56++] = v60;
                if ( v56 == v59 )
                  goto LABEL_79;
              }
              v53[v56++] = -1;
            }
            while ( v56 != v59 );
          }
LABEL_79:
          v61 = *(_QWORD *)(v16 + 272);
          if ( v52 <= 0 )
          {
            v63 = 0;
          }
          else
          {
            v62 = 0;
            v63 = 0;
            do
            {
              if ( *(_BYTE *)(v61 + v62) )
              {
                ++v63;
                v64 = &v53[v15[v62]];
                *v64 = -10 - *v64;
              }
              ++v62;
            }
            while ( (unsigned int)(v52 - 1) + 1LL != v62 );
          }
          if ( (int)v58 >= 0 )
          {
            v65 = (int)v58;
            v66 = &v53[v65];
            v67 = (_DWORD *)((char *)v53 + v65 * 4 - 4 - 4 * v58);
            do
            {
              while ( *v66 < -9 )
              {
                *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * --v57) = -1;
LABEL_87:
                if ( --v66 == v67 )
                  goto LABEL_91;
              }
              if ( *v66 < 0 )
                goto LABEL_87;
              --v63;
              --v57;
              --v66;
              *(_QWORD *)(*((_QWORD *)a2 + 5) + 8LL * v57) = *(_QWORD *)(*((_QWORD *)a2 + 5) + 8LL * v63);
              *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v57) = *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v63);
              *(_DWORD *)(*((_QWORD *)a2 + 10) + 4LL * v57) = *(_DWORD *)(*((_QWORD *)a2 + 10) + 4LL * v63);
              *(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL * v57) = *(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL * v63);
              *(_DWORD *)(*((_QWORD *)a2 + 7) + 4LL * v57) = *(_DWORD *)(*((_QWORD *)a2 + 7) + 4LL * v63);
              *(_DWORD *)(*((_QWORD *)a2 + 9) + 4LL * v57) = *(_DWORD *)(*((_QWORD *)a2 + 9) + 4LL * v63);
            }
            while ( v66 != v67 );
          }
LABEL_91:
          operator delete[](v53);
          goto LABEL_92;
        }
      }
    }
LABEL_296:
    __cxa_throw_bad_array_new_length();
  }
  started = ClpSimplex::startFastDual2(this, a2);
  if ( started )
  {
    ClpSimplex::stopFastDual2(this, a2);
    abort();
  }
  ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
  if ( (unsigned int)ClpSimplex::fastDual2(this, a2) )
  {
    if ( *((_DWORD *)this + 80) == 3 )
      goto LABEL_128;
    ClpSimplex::checkPrimalSolution(this, *((const double **)this + 151), *((const double **)this + 152));
    if ( !*((_DWORD *)this + 308)
      && *((double *)this + 1) > (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this )
    {
      v151 = *((_DWORD *)this + 77);
      *((_DWORD *)this + 80) = 0;
      v163 = v151;
      goto LABEL_101;
    }
  }
  v69 = *((_DWORD *)this + 80);
  if ( v69 == 10 )
  {
    puts("Cleaning up with primal - need coding without createRim!");
    abort();
  }
  v163 = *((_DWORD *)this + 77);
  if ( v69 == 1 )
  {
    ClpSimplex::stopFastDual2(this, a2);
    *(_QWORD *)((char *)a2 + 164) = 0;
    v172 = -1;
    *((_DWORD *)a2 + 43) = v163;
    return v172;
  }
  if ( v69 )
LABEL_128:
    abort();
LABEL_101:
  v70 = *((_QWORD *)this + 29);
  v71 = *((int *)this + 27);
  if ( v70 )
  {
    if ( (int)v71 > 0 )
    {
      v72 = 0;
      v73 = 0;
      while ( 1 )
      {
        ++v72;
        *(double *)(*((_QWORD *)this + 15) + v73) = *(double *)(*((_QWORD *)this + 150) + v73) * *(double *)(v70 + v73);
        v71 = *((int *)this + 27);
        v73 += 8;
        if ( (int)v71 <= v72 )
          break;
        v70 = *((_QWORD *)this + 29);
      }
    }
  }
  else
  {
    CoinMemcpyN<double>(*((_QWORD *)this + 150), (unsigned int)v71, *((_QWORD *)this + 15));
    v71 = *((int *)this + 27);
  }
  v74 = *((const void **)this + 22);
  v181 = *((double *)a2 + 2);
  v171 = v71 + *((_DWORD *)this + 26);
  if ( v74 )
  {
    if ( v71 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_296;
    v75 = 8 * v71;
    v168 = (char *)operator new[](8 * v71);
    memcpy(v168, v74, v75);
    v71 = *((int *)this + 27);
  }
  else
  {
    v168 = nullptr;
  }
  v76 = *((const void **)this + 23);
  if ( v76 )
  {
    if ( v71 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_296;
    v77 = 8 * v71;
    v167 = (char *)operator new[](8 * v71);
    memcpy(v167, v76, v77);
  }
  else
  {
    v167 = nullptr;
  }
  v78 = *((const void **)this + 123);
  if ( !v78 )
  {
    v80 = *((const void **)this + 126);
    if ( v80 )
    {
      if ( (unsigned __int64)v171 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_296;
      v79 = 8LL * v171;
      v165 = nullptr;
      goto LABEL_115;
    }
    v165 = nullptr;
LABEL_289:
    v170 = nullptr;
    goto LABEL_116;
  }
  if ( (unsigned __int64)v171 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_296;
  v79 = 8LL * v171;
  v165 = (char *)operator new[](v79);
  memcpy(v165, v78, v79);
  v80 = *((const void **)this + 126);
  if ( !v80 )
    goto LABEL_289;
LABEL_115:
  v170 = (char *)operator new[](v79);
  memcpy(v170, v80, v79);
LABEL_116:
  v81 = *((int *)this + 27);
  if ( v81 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_296;
  v82 = operator new[](4 * v81);
  v169 = (_DWORD *)v82;
  v83 = *((_DWORD *)this + 27);
  if ( v83 > 0 )
  {
    v84 = (unsigned int)(v83 - 1);
    v85 = *((_QWORD *)this + 34);
    v86 = 0;
    v87 = 0;
    v88 = v84 + 1;
    do
    {
      while ( *(_BYTE *)(v85 + v87) )
      {
        *(_DWORD *)(v82 + 4 * v87++) = v86++;
        if ( v88 == v87 )
          goto LABEL_122;
      }
      *(_DWORD *)(v82 + 4 * v87++) = -1;
    }
    while ( v88 != v87 );
  }
LABEL_122:
  v89 = *((double *)this + 1);
  v90 = 0;
  v91 = *(_DWORD *)(*((_QWORD *)this + 43) + 104LL);
  *((_DWORD *)this + 182) |= 0x200000u;
  v157 = v4 - 1;
  v162 = v89;
  v174 = v171 >> 3;
  v161 = 0;
  v166 = 0.00001;
  v92 = 0;
  v160 = v91;
  v176 = 1;
  v172 = -1;
  v164 = (*((_DWORD *)a2 + 36) & 0x20) != 0;
  v175 = v171 % 8;
  v93 = ((unsigned int)((v171 >> 3) - 1) + 1LL) << 6;
  v177 = v93;
  v178 = &v165[v93];
  v180 = &v170[v93];
  v179 = &v154[v4 - 1];
  do
  {
    v94 = ++started % 0x3E8;
    if ( v90 )
    {
      v128 = &v154[v157 + 1];
      ClpNode::chooseVariable(*v128, this, a2);
      ClpNode::applyNode(*v128, this, 0);
      if ( v160 > 0 )
      {
        printf(
          "No backtracking - applying node at depth-m %d - variable %d (%g,%g)\n",
          v90 - 1,
          *((_DWORD *)*v128 + 29),
          *(double *)(*((_QWORD *)this + 22) + 8LL * *((int *)*v128 + 29)),
          *(double *)(*((_QWORD *)this + 23) + 8LL * *((int *)*v128 + 29)));
        ClpSimplexDual::changeBounds(this, 3, nullptr, v182);
        ClpSimplex::fastDual2(this, a2);
        v163 += *((_DWORD *)this + 77);
        if ( !v94 )
          goto LABEL_129;
        v95 = *((_DWORD *)this + 80);
        if ( v95 == 1 )
          goto LABEL_130;
      }
      else
      {
        ClpSimplexDual::changeBounds(this, 3, nullptr, v182);
        ClpSimplex::fastDual2(this, a2);
        v163 += *((_DWORD *)this + 77);
        if ( v94 )
        {
          v95 = *((_DWORD *)this + 80);
          v127 = v157;
          if ( v95 == 1 )
            goto LABEL_204;
        }
        else
        {
          v95 = *((_DWORD *)this + 80);
          if ( v95 == 1 )
            goto LABEL_205;
        }
      }
      goto LABEL_127;
    }
    while ( 1 )
    {
      ClpSimplexDual::changeBounds(this, 3, nullptr, v182);
      ClpSimplex::fastDual2(this, a2);
      v163 += *((_DWORD *)this + 77);
      if ( !v94 )
      {
        if ( v160 <= 0 )
        {
          v95 = *((_DWORD *)this + 80);
          if ( v95 == 1 )
            goto LABEL_131;
          goto LABEL_127;
        }
LABEL_129:
        printf("After %d nodes (%d iterations) - best solution %g - current depth %d\n", started, v163, v162, v90);
        v95 = *((_DWORD *)this + 80);
        if ( v95 == 1 )
          goto LABEL_130;
        goto LABEL_127;
      }
      v95 = *((_DWORD *)this + 80);
      if ( v95 == 1 )
        goto LABEL_201;
LABEL_127:
      if ( v95 )
        goto LABEL_128;
      v131 = (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this;
      if ( v131 > v162 )
      {
LABEL_201:
        if ( v160 > 0 )
        {
LABEL_130:
          printf("infeasible at depth %d\n", v90);
LABEL_131:
          if ( !v90 )
            goto LABEL_132;
        }
        else if ( !v90 )
        {
          goto LABEL_132;
        }
        v127 = v157;
LABEL_204:
        v128 = &v154[v127 + 1];
LABEL_205:
        v129 = ClpNode::way(*v128);
        v130 = v162 - *((double *)*v128 + 2);
        if ( v130 > 1.0e10 )
          v130 = 10.0 * v166 / ((double)v176 + 1.0);
        ClpNodeStuff::update(a2, v129, v169[*((int *)*v128 + 29)], v130, 0);
        goto LABEL_132;
      }
      ClpSimplex::computeDuals(this, nullptr);
      if ( v90 )
      {
        v132 = &v154[v157 + 1];
        v133 = ClpNode::way(*v132);
        ClpNodeStuff::update(
          a2,
          v133,
          v169[*((int *)*v132 + 29)],
          *((double *)this + 9) * *(double *)this - *((double *)this + 5) - *((double *)*v132 + 2),
          1);
        ++v176;
        v131 = *((double *)this + 9) * *(double *)this - *((double *)this + 5) - *((double *)*v132 + 2) + v166;
        v166 = v131;
      }
      if ( *((_DWORD *)a2 + 40) > v90 && !v92 )
        break;
      v134 = &v154[v161];
      v135 = *v134;
      if ( !*v134 )
      {
        v135 = (ClpNode *)operator new(0x98u);
        ClpNode::ClpNode(v135, this, a2, v90);
        *v134 = v135;
      }
      if ( !*((_QWORD *)v135 + 10) )
        ClpNode::createArrays(v135, this);
      ClpNode::gutsOfConstructor(v135, this, a2, 2, v90);
LABEL_218:
      if ( *((int *)v135 + 29) >= 0 )
        goto LABEL_219;
LABEL_252:
      ClpSimplex::doubleCheck(this);
      if ( v160 > 0 )
        printf("Solution of %g after %d nodes at depth %d\n", v131, started, v90);
      if ( v162 > v131 && !*((_DWORD *)this + 80) )
      {
        v143 = &v154[v161];
        v144 = *v143;
        if ( !*v143 )
        {
          v144 = (ClpNode *)operator new(0x98u);
          ClpNode::ClpNode(v144, this, a2, v90);
          *v143 = v144;
        }
        v145 = *((ClpSimplexOther **)a2 + 13);
        if ( v145 )
        {
          v146 = *((_DWORD *)this + 27);
          v147 = *((const int **)a2 + 15);
          if ( v146 > 0 )
          {
            v148 = 0;
            do
            {
              while ( *(_BYTE *)(*((_QWORD *)this + 34) + v148) )
              {
                v149 = v147[v148];
                *(_QWORD *)(*((_QWORD *)v145 + 23) + 8 * v149) = *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v148);
                *(_QWORD *)(*((_QWORD *)v145 + 22) + 8 * v149) = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v148);
                v146 = *((_DWORD *)this + 27);
                if ( v146 <= (int)++v148 )
                  goto LABEL_263;
              }
              ++v148;
            }
            while ( (int)v148 < v146 );
          }
LABEL_263:
          ClpSimplexOther::afterCrunch(v145, this, *((const int **)a2 + 14), v147, *((_DWORD *)a2 + 34));
          if ( !*((_QWORD *)v144 + 10) )
            ClpNode::createArrays(v144, *((ClpSimplex **)a2 + 13));
          ClpNode::gutsOfConstructor(v144, *((ClpSimplex **)a2 + 13), a2, 2, v90);
        }
        else
        {
          if ( !*((_QWORD *)v144 + 10) )
            ClpNode::createArrays(v144, this);
          ClpNode::gutsOfConstructor(v144, this, a2, 2, v90);
        }
        v150 = v164;
        if ( v173 <= v161 + 1 )
          v150 = 1;
        v164 = v150;
        v162 = v131 - v181;
        ClpModel::setDblParam(this, 0);
        v172 = v161++;
      }
LABEL_132:
      v96 = v90 - 1;
      if ( !v90 )
        goto LABEL_239;
      v97 = v157 + v90;
      v98 = &v154[v157 + 1];
      while ( 1 )
      {
        v99 = v97 - v96;
        if ( !(unsigned __int8)ClpNode::fathomed(*v98) )
          break;
        --v96;
        ++v98;
        if ( v96 == -1 )
          goto LABEL_239;
      }
      ClpNode::changeState(*v98);
      v100 = *((char **)this + 123);
      if ( v100 != v165 && v171 )
      {
        if ( v174 <= 0 )
        {
          v104 = v165;
        }
        else
        {
          v101 = v165;
          v102 = *((_QWORD *)this + 123);
          do
          {
            v103 = *(_QWORD *)v101;
            v101 += 64;
            v102 += 64;
            *(_QWORD *)(v102 - 64) = v103;
            *(_QWORD *)(v102 - 56) = *((_QWORD *)v101 - 7);
            *(_QWORD *)(v102 - 48) = *((_QWORD *)v101 - 6);
            *(_QWORD *)(v102 - 40) = *((_QWORD *)v101 - 5);
            *(_QWORD *)(v102 - 32) = *((_QWORD *)v101 - 4);
            *(_QWORD *)(v102 - 24) = *((_QWORD *)v101 - 3);
            *(_QWORD *)(v102 - 16) = *((_QWORD *)v101 - 2);
            *(_QWORD *)(v102 - 8) = *((_QWORD *)v101 - 1);
          }
          while ( v101 != v178 );
          v100 += v177;
          v104 = v178;
        }
        switch ( v175 )
        {
          case 1:
            goto LABEL_149;
          case 2:
            goto LABEL_148;
          case 3:
            goto LABEL_147;
          case 4:
            goto LABEL_146;
          case 5:
            goto LABEL_145;
          case 6:
            goto LABEL_144;
          case 7:
            *((_QWORD *)v100 + 6) = *((_QWORD *)v104 + 6);
LABEL_144:
            *((_QWORD *)v100 + 5) = *((_QWORD *)v104 + 5);
LABEL_145:
            *((_QWORD *)v100 + 4) = *((_QWORD *)v104 + 4);
LABEL_146:
            *((_QWORD *)v100 + 3) = *((_QWORD *)v104 + 3);
LABEL_147:
            *((_QWORD *)v100 + 2) = *((_QWORD *)v104 + 2);
LABEL_148:
            *((_QWORD *)v100 + 1) = *((_QWORD *)v104 + 1);
LABEL_149:
            *(_QWORD *)v100 = *(_QWORD *)v104;
            break;
          default:
            break;
        }
      }
      v105 = *((char **)this + 126);
      v106 = v170;
      if ( v105 != v170 && v171 )
      {
        if ( v174 > 0 )
        {
          v107 = &v105[v177];
          do
          {
            v108 = *(_QWORD *)v106;
            v105 += 64;
            v106 += 64;
            *((_QWORD *)v105 - 8) = v108;
            *((_QWORD *)v105 - 7) = *((_QWORD *)v106 - 7);
            *((_QWORD *)v105 - 6) = *((_QWORD *)v106 - 6);
            *((_QWORD *)v105 - 5) = *((_QWORD *)v106 - 5);
            *((_QWORD *)v105 - 4) = *((_QWORD *)v106 - 4);
            *((_QWORD *)v105 - 3) = *((_QWORD *)v106 - 3);
            *((_QWORD *)v105 - 2) = *((_QWORD *)v106 - 2);
            *((_QWORD *)v105 - 1) = *((_QWORD *)v106 - 1);
          }
          while ( v107 != v105 );
          v106 = v180;
          v105 = v107;
        }
        switch ( v175 )
        {
          case 1:
            goto LABEL_163;
          case 2:
            goto LABEL_162;
          case 3:
            goto LABEL_161;
          case 4:
            goto LABEL_160;
          case 5:
            goto LABEL_159;
          case 6:
            goto LABEL_158;
          case 7:
            *((_QWORD *)v105 + 6) = *((_QWORD *)v106 + 6);
LABEL_158:
            *((_QWORD *)v105 + 5) = *((_QWORD *)v106 + 5);
LABEL_159:
            *((_QWORD *)v105 + 4) = *((_QWORD *)v106 + 4);
LABEL_160:
            *((_QWORD *)v105 + 3) = *((_QWORD *)v106 + 3);
LABEL_161:
            *((_QWORD *)v105 + 2) = *((_QWORD *)v106 + 2);
LABEL_162:
            *((_QWORD *)v105 + 1) = *((_QWORD *)v106 + 1);
LABEL_163:
            *(_QWORD *)v105 = *(_QWORD *)v106;
            break;
          default:
            break;
        }
      }
      v109 = *((_DWORD *)this + 27);
      v110 = *((char **)this + 22);
      v111 = v109 == 0;
      if ( v110 != v168 && v109 )
      {
        if ( v109 >> 3 <= 0 )
        {
          v116 = v168;
        }
        else
        {
          v112 = (__int64 *)v168;
          v113 = *((char **)this + 22);
          do
          {
            v114 = *v112;
            v113 += 64;
            v112 += 8;
            *((_QWORD *)v113 - 8) = v114;
            *((_QWORD *)v113 - 7) = *(v112 - 7);
            *((_QWORD *)v113 - 6) = *(v112 - 6);
            *((_QWORD *)v113 - 5) = *(v112 - 5);
            *((_QWORD *)v113 - 4) = *(v112 - 4);
            *((_QWORD *)v113 - 3) = *(v112 - 3);
            *((_QWORD *)v113 - 2) = *(v112 - 2);
            *((_QWORD *)v113 - 1) = *(v112 - 1);
          }
          while ( &v110[64 * ((v109 >> 3) - 1) + 64] != v113 );
          v115 = ((v109 >> 3) - 1 + 1LL) << 6;
          v116 = &v168[v115];
          v110 += v115;
        }
        switch ( v109 % 8 )
        {
          case 1:
            goto LABEL_177;
          case 2:
            goto LABEL_176;
          case 3:
            goto LABEL_175;
          case 4:
            goto LABEL_174;
          case 5:
            goto LABEL_173;
          case 6:
            goto LABEL_172;
          case 7:
            *((_QWORD *)v110 + 6) = *((_QWORD *)v116 + 6);
LABEL_172:
            *((_QWORD *)v110 + 5) = *((_QWORD *)v116 + 5);
LABEL_173:
            *((_QWORD *)v110 + 4) = *((_QWORD *)v116 + 4);
LABEL_174:
            *((_QWORD *)v110 + 3) = *((_QWORD *)v116 + 3);
LABEL_175:
            *((_QWORD *)v110 + 2) = *((_QWORD *)v116 + 2);
LABEL_176:
            *((_QWORD *)v110 + 1) = *((_QWORD *)v116 + 1);
LABEL_177:
            *(_QWORD *)v110 = *(_QWORD *)v116;
            break;
          default:
            break;
        }
        v109 = *((_DWORD *)this + 27);
        v111 = v109 == 0;
      }
      v117 = *((char **)this + 23);
      if ( v117 != v167 && !v111 )
      {
        if ( v109 >> 3 <= 0 )
        {
          v122 = v167;
        }
        else
        {
          v118 = (__int64 *)v167;
          v119 = *((char **)this + 23);
          do
          {
            v120 = *v118;
            v119 += 64;
            v118 += 8;
            *((_QWORD *)v119 - 8) = v120;
            *((_QWORD *)v119 - 7) = *(v118 - 7);
            *((_QWORD *)v119 - 6) = *(v118 - 6);
            *((_QWORD *)v119 - 5) = *(v118 - 5);
            *((_QWORD *)v119 - 4) = *(v118 - 4);
            *((_QWORD *)v119 - 3) = *(v118 - 3);
            *((_QWORD *)v119 - 2) = *(v118 - 2);
            *((_QWORD *)v119 - 1) = *(v118 - 1);
          }
          while ( &v117[64 * ((v109 >> 3) - 1) + 64] != v119 );
          v121 = ((v109 >> 3) - 1 + 1LL) << 6;
          v122 = &v167[v121];
          v117 += v121;
        }
        switch ( v109 % 8 )
        {
          case 1:
            goto LABEL_192;
          case 2:
            goto LABEL_191;
          case 3:
            goto LABEL_190;
          case 4:
            goto LABEL_189;
          case 5:
            goto LABEL_188;
          case 6:
            goto LABEL_187;
          case 7:
            *((_QWORD *)v117 + 6) = *((_QWORD *)v122 + 6);
LABEL_187:
            *((_QWORD *)v117 + 5) = *((_QWORD *)v122 + 5);
LABEL_188:
            *((_QWORD *)v117 + 4) = *((_QWORD *)v122 + 4);
LABEL_189:
            *((_QWORD *)v117 + 3) = *((_QWORD *)v122 + 3);
LABEL_190:
            *((_QWORD *)v117 + 2) = *((_QWORD *)v122 + 2);
LABEL_191:
            *((_QWORD *)v117 + 1) = *((_QWORD *)v122 + 1);
LABEL_192:
            *(_QWORD *)v117 = *(_QWORD *)v122;
            break;
          default:
            break;
        }
      }
      if ( v96 )
      {
        v158 = v96;
        v123 = 8LL * (unsigned int)(v96 - 1);
        v124 = v179;
        v125 = &v179[v123 / 0xFFFFFFFFFFFFFFF8LL - 1];
        do
        {
          v126 = *v124--;
          ClpNode::applyNode(v126, this, 0);
        }
        while ( v125 != v124 );
        v96 = v158;
      }
      ClpNode::applyNode(*v98, this, 1);
      if ( v160 > 0 )
        printf(
          "after backtracking - applying node at depth %d - variable %d (%g,%g)\n",
          v96,
          *((_DWORD *)*v98 + 29),
          *(double *)(*((_QWORD *)this + 22) + 8LL * *((int *)*v98 + 29)),
          *(double *)(*((_QWORD *)this + 23) + 8LL * *((int *)*v98 + 29)));
      ++started;
      v90 = v96 + 1;
      v92 = v164;
      v157 = v99 - 1;
      v94 = started % 0x3E8;
    }
    v142 = &v154[v157];
    v135 = *v142;
    if ( !*v142 )
    {
      v135 = (ClpNode *)operator new(0x98u);
      ClpNode::ClpNode(v135, this, a2, v90);
      *v142 = v135;
      goto LABEL_218;
    }
    ClpNode::gutsOfConstructor(*v142, this, a2, 1, v90);
    if ( *((int *)v135 + 29) < 0 )
      goto LABEL_252;
LABEL_219:
    v92 |= *((_DWORD *)a2 + 40) == v90;
    if ( v92 )
    {
      v136 = *((ClpSimplexOther **)a2 + 13);
      if ( v136 )
      {
        v137 = *((_DWORD *)this + 27);
        v138 = *((const int **)a2 + 15);
        if ( v137 > 0 )
        {
          v139 = 0;
          do
          {
            while ( *(_BYTE *)(*((_QWORD *)this + 34) + v139) )
            {
              v140 = v138[v139];
              *(_QWORD *)(*((_QWORD *)v136 + 23) + 8 * v140) = *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v139);
              *(_QWORD *)(*((_QWORD *)v136 + 22) + 8 * v140) = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v139);
              v137 = *((_DWORD *)this + 27);
              if ( (int)++v139 >= v137 )
                goto LABEL_225;
            }
            ++v139;
          }
          while ( (int)v139 < v137 );
        }
LABEL_225:
        ClpSimplexOther::afterCrunch(v136, this, *((const int **)a2 + 14), v138, *((_DWORD *)a2 + 34));
        ClpNode::gutsOfConstructor(v135, *((ClpSimplex **)a2 + 13), a2, 2, v90);
      }
      ++v161;
      v141 = v164;
      if ( v173 <= v161 )
        v141 = v92;
      v164 = v141;
      goto LABEL_132;
    }
    --v157;
    ++v90;
  }
  while ( v90 >= 0 );
LABEL_239:
  if ( v168 )
    operator delete[](v168);
  if ( v167 )
    operator delete[](v167);
  if ( v165 )
    operator delete[](v165);
  if ( v170 )
    operator delete[](v170);
  operator delete[](v169);
  if ( (v172 & 0x80000000) == 0 )
    ClpModel::setDblParam(this, 0);
  ClpSimplex::stopFastDual2(this, a2);
  *((_DWORD *)a2 + 41) = v161;
  *((_DWORD *)a2 + 42) = started;
  *((_DWORD *)a2 + 43) = v163;
  return v172;
}

