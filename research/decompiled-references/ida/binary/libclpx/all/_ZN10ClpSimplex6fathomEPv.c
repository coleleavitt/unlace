__int64 __fastcall ClpSimplex::fathom(ClpSimplex *this, ClpNodeStuff *a2, __m128 a3)
{
  ClpNodeStuff *v3; // rbp
  int v5; // edx
  double *v6; // r12
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  int *v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rsi
  int v15; // ecx
  int v16; // edi
  __m128i si128; // xmm6
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // r9
  int v21; // r8d
  __int64 v22; // rax
  unsigned int v23; // r11d
  int v24; // r11d
  unsigned int v25; // r8d
  __m128i v26; // xmm2
  __int64 v27; // r9
  unsigned int v28; // eax
  const __m128i *v29; // r9
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __m128i v32; // xmm3
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  __m128i v35; // xmm7
  __m128i v36; // xmm2
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  _BYTE *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // xmm0_8
  __int64 v43; // rdi
  unsigned __int64 v44; // rdi
  int v45; // r14d
  _DWORD *v46; // rax
  int v47; // edi
  __int64 v48; // r8
  __int64 v49; // rdx
  int v50; // ecx
  __int64 v51; // rdi
  __int64 v52; // rsi
  int v53; // r9d
  __int64 v54; // r10
  __int64 v55; // rdx
  int v56; // esi
  _DWORD *v57; // r8
  __int64 v58; // r8
  int *v59; // rdx
  int *v60; // r8
  unsigned __int64 v61; // rdi
  char *v62; // r14
  size_t v63; // r15
  __int64 v64; // rax
  char v65; // di
  double *v66; // rcx
  double v67; // xmm1_8
  __m128d v68; // xmm0
  __m128d v69; // xmm2
  __int64 v70; // rdx
  __int64 v72; // rcx
  __int64 v73; // rsi
  int v74; // edx
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  const void *v77; // r13
  size_t v78; // r12
  const void *v79; // r13
  size_t v80; // r12
  const void *v81; // r13
  unsigned __int64 v82; // r12
  const void *v83; // r13
  unsigned __int64 v84; // rax
  __int64 v85; // rdi
  int v86; // eax
  __int64 v87; // rcx
  __int64 v88; // rsi
  int v89; // edx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  char v93; // si
  double *v94; // rdx
  double v95; // xmm1_8
  __m128d v96; // xmm0
  __m128d v97; // xmm2
  int v98; // eax
  int v99; // r12d
  double v100; // xmm6_8
  int v101; // r14d
  int v102; // eax
  int v103; // r13d
  int v104; // r15d
  _QWORD *v105; // r13
  int v106; // r12d
  int v107; // r12d
  ClpNode **v108; // r13
  unsigned __int64 *v109; // rcx
  unsigned __int64 *v110; // rax
  __int64 v111; // rdx
  unsigned __int64 v112; // xmm0_8
  unsigned __int64 *v113; // rax
  unsigned __int64 *v114; // rcx
  unsigned __int64 *v115; // rax
  __int64 v116; // rdx
  unsigned __int64 v117; // xmm0_8
  int v118; // ecx
  unsigned __int64 *v119; // rdi
  bool v120; // dl
  __int64 v121; // rdx
  unsigned __int64 *v122; // rax
  unsigned __int64 v123; // xmm0_8
  __int64 v124; // rax
  unsigned __int64 *v125; // rdx
  unsigned __int64 *v126; // rdi
  unsigned __int64 *v127; // rdx
  unsigned __int64 *v128; // rax
  unsigned __int64 v129; // xmm0_8
  __int64 v130; // rax
  unsigned __int64 *v131; // rdx
  ClpNode **v132; // rbp
  ClpNode *v133; // rdi
  __int64 v134; // rax
  ClpNode **v135; // r15
  int v136; // eax
  ClpNode *v137; // r15
  int v138; // edx
  ClpNode **v139; // r13
  __int64 v140; // rax
  ClpNode **v141; // r13
  int v142; // eax
  const void *v143; // r15
  unsigned __int64 v144; // r13
  unsigned __int64 v145; // r13
  const void *v146; // r15
  unsigned __int64 v147; // r13
  unsigned __int64 v148; // r13
  const void *v149; // r13
  CoinMessageHandler *v150; // rax
  CoinMessageHandler *v151; // rax
  CoinMessageHandler *v152; // rax
  CoinMessageHandler *v153; // rax
  __int64 v154; // rax
  _QWORD *v155; // rax
  unsigned int v156; // edi
  __int64 v157; // rsi
  __int64 v158; // rdx
  unsigned __int64 v159; // r9
  _QWORD *v160; // rsi
  unsigned int v161; // ecx
  signed int v162; // r13d
  __int64 v163; // rdx
  int v164; // r13d
  CoinMessageHandler *v165; // rax
  CoinMessageHandler *v166; // rax
  CoinMessageHandler *v167; // rax
  CoinMessageHandler *v168; // rax
  __int64 v169; // rax
  __int64 v170; // rdx
  CoinMessageHandler *v171; // rax
  CoinMessageHandler *v172; // rax
  CoinMessageHandler *v173; // rax
  CoinMessageHandler *v174; // rax
  CoinMessageHandler *v175; // rax
  __int64 v176; // rax
  unsigned __int64 v177; // rdx
  __int64 v178; // [rsp+8h] [rbp-120h]
  unsigned int started; // [rsp+8h] [rbp-120h]
  int *v180; // [rsp+10h] [rbp-118h]
  int v181; // [rsp+10h] [rbp-118h]
  int v182; // [rsp+20h] [rbp-108h]
  unsigned __int64 v183; // [rsp+20h] [rbp-108h]
  _BYTE *v184; // [rsp+28h] [rbp-100h]
  int v185; // [rsp+28h] [rbp-100h]
  int v186; // [rsp+38h] [rbp-F0h]
  int v187; // [rsp+3Ch] [rbp-ECh]
  double v188; // [rsp+40h] [rbp-E8h]
  unsigned __int64 *v189; // [rsp+48h] [rbp-E0h]
  unsigned __int64 *v190; // [rsp+50h] [rbp-D8h]
  unsigned __int64 *v191; // [rsp+58h] [rbp-D0h]
  int v192; // [rsp+60h] [rbp-C8h]
  int v193; // [rsp+64h] [rbp-C4h]
  double v194; // [rsp+68h] [rbp-C0h]
  unsigned __int64 *v195; // [rsp+70h] [rbp-B8h]
  _DWORD *v196; // [rsp+78h] [rbp-B0h]
  ClpNodeStuff *v197; // [rsp+80h] [rbp-A8h]
  int v198; // [rsp+88h] [rbp-A0h]
  int v199; // [rsp+8Ch] [rbp-9Ch]
  __int64 v200; // [rsp+98h] [rbp-90h]
  int v201; // [rsp+A8h] [rbp-80h]
  _QWORD *v202; // [rsp+A8h] [rbp-80h]
  void *v203; // [rsp+B0h] [rbp-78h]
  void *v204; // [rsp+B8h] [rbp-70h]
  void *v205; // [rsp+C0h] [rbp-68h]
  double v206; // [rsp+D0h] [rbp-58h]
  int v207; // [rsp+D8h] [rbp-50h]
  int v208; // [rsp+DCh] [rbp-4Ch]
  int v209; // [rsp+E4h] [rbp-44h] BYREF
  double v210[8]; // [rsp+E8h] [rbp-40h] BYREF

  v3 = a2;
  *((_DWORD *)a2 + 41) = 0;
  v5 = *((_DWORD *)this + 182);
  v186 = *((_DWORD *)this + 74);
  *((_DWORD *)this + 182) = v5 | 0x1000000;
  ClpModel::setMaximumIterations(
    this,
    ((v5 & 0x800) == 0 ? 0xFFFFF8F8 : 0) + 2 * (*((_DWORD *)this + 26) + *((_DWORD *)this + 27)) + 2000);
  if ( *((int *)this + 327) <= 99 )
  {
    *(double *)a3.m128_u64 = (fabs(*((double *)this + 1) * *(double *)this) * 0.0000001
                            + *((double *)this + 1) * *(double *)this
                            + 0.01)
                           * *(double *)this;
    ClpModel::setDblParam(this, 0);
    if ( *((_DWORD *)a2 + 44) )
      goto LABEL_3;
  }
  else if ( *((_DWORD *)a2 + 44) )
  {
LABEL_3:
    v6 = *((double **)this + 16);
    v7 = 3 * *((_DWORD *)this + 26);
    if ( v7 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v180 = (int *)operator new[](4 * v7);
      v8 = 2 * *((_DWORD *)this + 27);
      if ( v8 <= 0x1FFFFFFFFFFFFFFELL )
      {
        v9 = (int *)operator new[](4 * v8);
        v10 = ClpSimplexOther::crunch(this, v6, v180, v9, &v209, 0, (*((_DWORD *)this + 84) & 0x40) != 0);
        if ( !v10 )
        {
          started = 0;
          goto LABEL_101;
        }
        *(_DWORD *)(v10 + 728) = *((_DWORD *)this + 182);
        v11 = *((_QWORD *)a2 + 5);
        if ( v11 )
        {
          v12 = *(_DWORD *)(v10 + 108);
          v13 = *(_QWORD *)(v10 + 272);
          if ( v12 > 0 )
          {
            v14 = 0;
            v15 = 0;
            v16 = 0;
            v178 = (unsigned int)(v12 - 1) + 1LL;
            v182 = 0;
            si128 = _mm_load_si128((const __m128i *)&xmmword_28D010);
            do
            {
              while ( !*(_BYTE *)(v13 + v14) )
              {
                if ( ++v14 == v178 )
                  goto LABEL_66;
              }
              v18 = v9[v14];
              if ( v16 == v18 )
                goto LABEL_65;
              v19 = *((_QWORD *)this + 34);
              v20 = v16;
              v21 = v18 - v16;
              v184 = (_BYTE *)(v19 + v16);
              v22 = -(int)v184 & 0xF;
              v23 = v22 + 15;
              if ( (unsigned int)(v22 + 15) < 0x12 )
                v23 = 18;
              if ( v23 <= v21 - 1 )
              {
                if ( (_DWORD)v22 )
                {
                  v24 = v16 + 1;
                  v15 -= (*v184 == 0) - 1;
                  if ( (_DWORD)v22 != 1 )
                  {
                    if ( *(_BYTE *)(v19 + v24) )
                      ++v15;
                    v24 = v16 + 2;
                    if ( (_DWORD)v22 != 2 )
                    {
                      if ( *(_BYTE *)(v19 + v24) )
                        ++v15;
                      v24 = v16 + 3;
                      if ( (_DWORD)v22 != 3 )
                      {
                        if ( *(_BYTE *)(v19 + v24) )
                          ++v15;
                        v24 = v16 + 4;
                        if ( (_DWORD)v22 != 4 )
                        {
                          if ( *(_BYTE *)(v19 + v24) )
                            ++v15;
                          v24 = v16 + 5;
                          if ( (_DWORD)v22 != 5 )
                          {
                            if ( *(_BYTE *)(v19 + v24) )
                              ++v15;
                            v24 = v16 + 6;
                            if ( (_DWORD)v22 != 6 )
                            {
                              if ( *(_BYTE *)(v19 + v24) )
                                ++v15;
                              v24 = v16 + 7;
                              if ( (_DWORD)v22 != 7 )
                              {
                                if ( *(_BYTE *)(v19 + v24) )
                                  ++v15;
                                v24 = v16 + 8;
                                if ( (_DWORD)v22 != 8 )
                                {
                                  if ( *(_BYTE *)(v19 + v24) )
                                    ++v15;
                                  v24 = v16 + 9;
                                  if ( (_DWORD)v22 != 9 )
                                  {
                                    if ( *(_BYTE *)(v19 + v24) )
                                      ++v15;
                                    v24 = v16 + 10;
                                    if ( (_DWORD)v22 != 10 )
                                    {
                                      if ( *(_BYTE *)(v19 + v24) )
                                        ++v15;
                                      v24 = v16 + 11;
                                      if ( (_DWORD)v22 != 11 )
                                      {
                                        if ( *(_BYTE *)(v19 + v24) )
                                          ++v15;
                                        v24 = v16 + 12;
                                        if ( (_DWORD)v22 != 12 )
                                        {
                                          if ( *(_BYTE *)(v19 + v24) )
                                            ++v15;
                                          v24 = v16 + 13;
                                          if ( (_DWORD)v22 != 13 )
                                          {
                                            if ( *(_BYTE *)(v19 + v24) )
                                              ++v15;
                                            v24 = v16 + 14;
                                            if ( (_DWORD)v22 != 14 )
                                            {
                                              if ( *(_BYTE *)(v19 + v24) )
                                                ++v15;
                                              v24 = v16 + 15;
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
                  v24 = v16;
                }
                v25 = v21 - v22;
                v26 = 0;
                v27 = v22 + v16;
                v28 = 0;
                v29 = (const __m128i *)(v19 + v27);
                do
                {
                  ++v28;
                  v30 = _mm_cmpeq_epi8(_mm_load_si128(v29++), (__m128i)0LL);
                  v31 = _mm_andnot_si128(v30, si128);
                  v32 = _mm_cmpgt_epi8((__m128i)0LL, v31);
                  v33 = _mm_unpacklo_epi8(v31, v32);
                  v34 = _mm_unpackhi_epi8(v31, v32);
                  v35 = _mm_cmpgt_epi16((__m128i)0LL, v33);
                  v36 = _mm_add_epi32(_mm_add_epi32(v26, _mm_unpacklo_epi16(v33, v35)), _mm_unpackhi_epi16(v33, v35));
                  v37 = _mm_cmpgt_epi16((__m128i)0LL, v34);
                  v26 = _mm_add_epi32(_mm_add_epi32(v36, _mm_unpacklo_epi16(v34, v37)), _mm_unpackhi_epi16(v34, v37));
                }
                while ( v25 >> 4 > v28 );
                v38 = _mm_add_epi32(v26, _mm_srli_si128(v26, 8));
                v15 += _mm_cvtsi128_si32(_mm_add_epi32(v38, _mm_srli_si128(v38, 4)));
                v16 = (v25 & 0xFFFFFFF0) + v24;
                if ( (v25 & 0xFFFFFFF0) == v25 )
                  goto LABEL_65;
                v20 = v16;
              }
              v39 = (_BYTE *)(v19 + v20);
              v40 = v19 + v20 + 1 + (unsigned int)(v18 - 1 - v16);
              do
                v15 -= (*v39++ == 0) - 1;
              while ( v39 != (_BYTE *)v40 );
LABEL_65:
              v41 = v182;
              v42 = *(_QWORD *)(v11 + 8LL * v15);
              ++v14;
              *(_DWORD *)(*((_QWORD *)v3 + 6) + 4LL * v182) = *(_DWORD *)(*((_QWORD *)v3 + 6) + 4LL * v15);
              v43 = *((_QWORD *)v3 + 8);
              *(_QWORD *)(v11 + 8LL * v182++) = v42;
              *(_DWORD *)(v43 + 4 * v41) = *(_DWORD *)(v43 + 4LL * v15);
              *(_DWORD *)(*((_QWORD *)v3 + 10) + 4 * v41) = *(_DWORD *)(*((_QWORD *)v3 + 10) + 4LL * v15);
              *(_QWORD *)(*((_QWORD *)v3 + 4) + 8 * v41) = *(_QWORD *)(*((_QWORD *)v3 + 4) + 8LL * v15);
              *(_DWORD *)(*((_QWORD *)v3 + 7) + 4 * v41) = *(_DWORD *)(*((_QWORD *)v3 + 7) + 4LL * v15);
              *(_DWORD *)(*((_QWORD *)v3 + 9) + 4 * v41) = *(_DWORD *)(*((_QWORD *)v3 + 9) + 4LL * v15);
              v16 = v18;
            }
            while ( v14 != v178 );
          }
        }
LABEL_66:
        *((_DWORD *)v3 + 44) = 0;
        started = ClpSimplex::fathom((ClpSimplex *)v10, v3);
        if ( *((_QWORD *)v3 + 5) )
        {
          v44 = *((int *)this + 27);
          v45 = *(_DWORD *)(v10 + 108);
          if ( v44 > 0x1FFFFFFFFFFFFFFELL )
            goto LABEL_337;
          v46 = (_DWORD *)operator new[](4 * v44);
          v47 = *((_DWORD *)this + 27);
          if ( v47 <= 0 )
          {
            v50 = 0;
            v51 = (unsigned int)(v47 - 1);
          }
          else
          {
            v48 = *((_QWORD *)this + 34);
            v49 = 0;
            v50 = 0;
            v51 = (unsigned int)(v47 - 1);
            v52 = v51 + 1;
            do
            {
              while ( *(_BYTE *)(v48 + v49) )
              {
                v53 = -10 - v50++;
                v46[v49++] = v53;
                if ( v49 == v52 )
                  goto LABEL_73;
              }
              v46[v49++] = -1;
            }
            while ( v49 != v52 );
          }
LABEL_73:
          v54 = *(_QWORD *)(v10 + 272);
          if ( v45 <= 0 )
          {
            v56 = 0;
          }
          else
          {
            v55 = 0;
            v56 = 0;
            do
            {
              if ( *(_BYTE *)(v54 + v55) )
              {
                ++v56;
                v57 = &v46[v9[v55]];
                *v57 = -10 - *v57;
              }
              ++v55;
            }
            while ( v55 != (unsigned int)(v45 - 1) + 1LL );
          }
          if ( (int)v51 >= 0 )
          {
            v58 = (int)v51;
            v59 = &v46[v58];
            v60 = (_DWORD *)((char *)v46 + v58 * 4 - 4 - 4 * v51);
            do
            {
              while ( *v59 < -9 )
              {
                *(_DWORD *)(*((_QWORD *)v3 + 8) + 4LL * --v50) = -1;
LABEL_81:
                if ( --v59 == v60 )
                  goto LABEL_85;
              }
              if ( *v59 < 0 )
                goto LABEL_81;
              --v56;
              --v50;
              --v59;
              *(_QWORD *)(*((_QWORD *)v3 + 5) + 8LL * v50) = *(_QWORD *)(*((_QWORD *)v3 + 5) + 8LL * v56);
              *(_DWORD *)(*((_QWORD *)v3 + 8) + 4LL * v50) = *(_DWORD *)(*((_QWORD *)v3 + 8) + 4LL * v56);
              *(_DWORD *)(*((_QWORD *)v3 + 10) + 4LL * v50) = *(_DWORD *)(*((_QWORD *)v3 + 10) + 4LL * v56);
              *(_QWORD *)(*((_QWORD *)v3 + 4) + 8LL * v50) = *(_QWORD *)(*((_QWORD *)v3 + 4) + 8LL * v56);
              *(_DWORD *)(*((_QWORD *)v3 + 7) + 4LL * v50) = *(_DWORD *)(*((_QWORD *)v3 + 7) + 4LL * v56);
              *(_DWORD *)(*((_QWORD *)v3 + 9) + 4LL * v50) = *(_DWORD *)(*((_QWORD *)v3 + 9) + 4LL * v56);
            }
            while ( v59 != v60 );
          }
LABEL_85:
          operator delete[](v46);
        }
        if ( !started )
        {
LABEL_99:
          ClpSimplex::~ClpSimplex((ClpSimplex *)v10);
          operator delete((void *)v10);
LABEL_101:
          operator delete[](v180);
          operator delete[](v9);
LABEL_102:
          ClpModel::setMaximumIterations(this, v186);
          ClpModel::setDblParam(this, 0);
          return started;
        }
        if ( *((int *)v3 + 41) < 0 )
        {
          ClpSimplexOther::afterCrunch(this, (const ClpSimplex *)v10, v180, v9, v209);
          if ( *((int *)this + 27) <= 0 )
            goto LABEL_99;
          v92 = 0;
          v93 = 0;
          do
          {
            if ( *(_BYTE *)(*((_QWORD *)this + 34) + v92) )
            {
              v94 = (double *)(*((_QWORD *)this + 15) + 8 * v92);
              v95 = *v94;
              v96.m128d_f64[0] = *v94 + 0.5;
              if ( fabs(v96.m128d_f64[0]) < 4.503599627370496e15 )
              {
                v97 = 0;
                v97.m128d_f64[0] = (double)(int)v96.m128d_f64[0];
                *(_QWORD *)&v96.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                 v97.m128d_f64[0]
                                               - COERCE_DOUBLE(
                                                   *(_QWORD *)&_mm_cmpgt_sd(v97, v96).m128d_f64[0]
                                                 & 0x3FF0000000000000LL))
                                             | *(_QWORD *)&v96.m128d_f64[0] & 0x8000000000000000LL;
              }
              *v94 = v96.m128d_f64[0];
              if ( fabs(v95 - v96.m128d_f64[0]) >= 0.0001 )
                v93 = 1;
            }
            ++v92;
          }
          while ( *((_DWORD *)this + 27) > (int)v92 );
          if ( !v93 )
            goto LABEL_99;
          goto LABEL_145;
        }
        v61 = 2 * *((_DWORD *)this + 27);
        if ( v61 <= 0xFFFFFFFFFFFFFFFLL )
        {
          v62 = (char *)operator new[](8 * v61);
          v63 = 8LL * *((int *)this + 27);
          memcpy(v62, *((const void **)this + 22), v63);
          memcpy(&v62[v63], *((const void **)this + 23), v63);
          ClpSimplexOther::afterCrunch(this, (const ClpSimplex *)v10, v180, v9, v209);
          if ( *((int *)this + 27) <= 0 )
            goto LABEL_98;
          v64 = 0;
          v65 = 0;
          do
          {
            if ( *(_BYTE *)(*((_QWORD *)this + 34) + v64) )
            {
              v66 = (double *)(8 * v64 + *((_QWORD *)this + 15));
              v67 = *v66;
              v68.m128d_f64[0] = *v66 + 0.5;
              if ( fabs(v68.m128d_f64[0]) < 4.503599627370496e15 )
              {
                v69 = 0;
                v69.m128d_f64[0] = (double)(int)v68.m128d_f64[0];
                *(_QWORD *)&v68.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                                 v69.m128d_f64[0]
                                               - COERCE_DOUBLE(
                                                   *(_QWORD *)&_mm_cmpgt_sd(v69, v68).m128d_f64[0]
                                                 & 0x3FF0000000000000LL))
                                             | *(_QWORD *)&v68.m128d_f64[0] & 0x8000000000000000LL;
              }
              *v66 = v68.m128d_f64[0];
              *(double *)(*((_QWORD *)this + 22) + 8 * v64) = v68.m128d_f64[0];
              *(double *)(*((_QWORD *)this + 23) + 8 * v64) = v68.m128d_f64[0];
              if ( fabs(v67 - v68.m128d_f64[0]) >= 0.0001 )
                v65 = 1;
            }
            v70 = *((int *)this + 27);
            ++v64;
          }
          while ( (int)v70 > (int)v64 );
          if ( !v65 )
          {
LABEL_98:
            operator delete[](v62);
            goto LABEL_99;
          }
          memcpy(*((void **)this + 22), v62, 8 * v70);
          memcpy(*((void **)this + 23), &v62[8 * *((int *)this + 27)], 8LL * *((int *)this + 27));
          operator delete[](v62);
LABEL_145:
          *((_DWORD *)v3 + 41) = -1;
          started = 0;
          ClpSimplex::~ClpSimplex((ClpSimplex *)v10);
          operator delete((void *)v10);
          goto LABEL_101;
        }
      }
    }
LABEL_337:
    __cxa_throw_bad_array_new_length();
  }
  started = ClpSimplex::startFastDual2(this, a2);
  if ( started )
  {
    ClpSimplex::stopFastDual2(this, a2);
    goto LABEL_102;
  }
  ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
  ClpSimplexDual::changeBounds(this, 3, nullptr, v210);
  if ( !(unsigned int)ClpSimplex::fastDual2(this, a2) )
    goto LABEL_110;
  if ( *((_DWORD *)this + 80) == 3 )
  {
LABEL_108:
    *((_DWORD *)a2 + 41) = -1;
    goto LABEL_102;
  }
  ClpSimplex::checkPrimalSolution(this, *((const double **)this + 151), *((const double **)this + 152));
  if ( *((_DWORD *)this + 308)
    || (*(double *)a3.m128_u64 = (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this,
        *((double *)this + 1) <= *(double *)a3.m128_u64) )
  {
LABEL_110:
    if ( *((_DWORD *)this + 80) > 1u )
      goto LABEL_108;
    v181 = *((_DWORD *)this + 77);
    if ( *((_DWORD *)this + 80) == 1 )
    {
      ClpSimplex::stopFastDual2(this, a2);
      *((_DWORD *)a2 + 42) = 1;
      *((_DWORD *)a2 + 43) = v181;
      goto LABEL_102;
    }
  }
  else
  {
    v98 = *((_DWORD *)this + 77);
    *((_DWORD *)this + 80) = 0;
    v181 = v98;
  }
  v72 = *((_QWORD *)this + 29);
  v73 = *((unsigned int *)this + 27);
  if ( v72 )
  {
    if ( (int)v73 > 0 )
    {
      v74 = 0;
      v75 = 0;
      while ( 1 )
      {
        ++v74;
        *(double *)a3.m128_u64 = *(double *)(*((_QWORD *)this + 150) + v75) * *(double *)(v72 + v75);
        *(_QWORD *)(*((_QWORD *)this + 15) + v75) = a3.m128_u64[0];
        v75 += 8;
        if ( *((_DWORD *)this + 27) <= v74 )
          break;
        v72 = *((_QWORD *)this + 29);
      }
    }
  }
  else
  {
    CoinMemcpyN<double>(*((_QWORD *)this + 150), v73, *((_QWORD *)this + 15));
  }
  v206 = *((double *)v3 + 2);
  ClpSimplexDual::changeBounds(this, 3, nullptr, v210);
  v208 = *((_DWORD *)this + 334);
  v183 = operator new[](0x50u);
  v76 = *((int *)this + 27);
  v77 = *((const void **)this + 22);
  v193 = v76 + *((_DWORD *)this + 26);
  if ( v77 )
  {
    if ( v76 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_337;
    v78 = 8 * v76;
    v191 = (unsigned __int64 *)operator new[](8 * v76);
    memcpy(v191, v77, v78);
    v76 = *((int *)this + 27);
  }
  else
  {
    v191 = nullptr;
  }
  v79 = *((const void **)this + 23);
  if ( v79 )
  {
    if ( v76 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_337;
    v80 = 8 * v76;
    v190 = (unsigned __int64 *)operator new[](8 * v76);
    memcpy(v190, v79, v80);
  }
  else
  {
    v190 = nullptr;
  }
  v81 = *((const void **)this + 123);
  if ( !v81 )
  {
    v83 = *((const void **)this + 126);
    if ( v83 )
    {
      if ( (unsigned __int64)v193 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_337;
      v82 = 8LL * v193;
      v189 = nullptr;
      goto LABEL_126;
    }
    v189 = nullptr;
LABEL_331:
    v195 = nullptr;
    goto LABEL_127;
  }
  if ( (unsigned __int64)v193 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_337;
  v82 = 8LL * v193;
  v189 = (unsigned __int64 *)operator new[](v82);
  memcpy(v189, v81, v82);
  v83 = *((const void **)this + 126);
  if ( !v83 )
    goto LABEL_331;
LABEL_126:
  v195 = (unsigned __int64 *)operator new[](v82);
  memcpy(v195, v83, v82);
LABEL_127:
  v84 = *((int *)this + 27);
  if ( v84 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_337;
  v85 = operator new[](4 * v84);
  v196 = (_DWORD *)v85;
  v86 = *((_DWORD *)this + 27);
  if ( v86 > 0 )
  {
    v87 = (unsigned int)(v86 - 1);
    v88 = *((_QWORD *)this + 34);
    v89 = 0;
    v90 = 0;
    v91 = v87 + 1;
    do
    {
      if ( *(_BYTE *)(v88 + v90) )
        *(_DWORD *)(v85 + 4 * v90) = v89++;
      else
        *(_DWORD *)(v85 + 4 * v90) = -1;
      ++v90;
    }
    while ( v90 != v91 );
  }
  v99 = 0;
  v100 = *((double *)this + 1);
  v187 = 0;
  v203 = nullptr;
  v207 = 1;
  v101 = 1;
  v102 = *(_DWORD *)(*((_QWORD *)this + 43) + 104LL);
  *((_DWORD *)this + 182) |= 0x200000u;
  v204 = nullptr;
  v198 = v193 >> 3;
  v188 = v100;
  v205 = nullptr;
  v185 = v102;
  v201 = 10;
  v192 = 2000;
  v199 = v193 % 8;
  v200 = ((unsigned int)((v193 >> 3) - 1) + 1LL) << 6;
  v194 = 0.00001;
  while ( 1 )
  {
    ++v101;
    ClpSimplexDual::changeBounds(this, 3, nullptr, v210);
    ClpSimplex::fastDual2(this, v3);
    v103 = *((_DWORD *)this + 80);
    v104 = *((_DWORD *)this + 77) + v181;
    v181 = v104;
    if ( v103 > 1 )
    {
      *((_DWORD *)v3 + 41) = -1;
      goto LABEL_168;
    }
    if ( v101 <= 20 )
    {
      if ( v104 > 4000 )
      {
LABEL_167:
        *((_DWORD *)v3 + 41) = -2;
        goto LABEL_168;
      }
    }
    else if ( v104 > 200 * v101 )
    {
      goto LABEL_167;
    }
    if ( v101 == 1000 * (v101 / 0x3E8u) )
      break;
LABEL_163:
    if ( v103 == 1 )
      goto LABEL_192;
    if ( v103 )
      abort();
    *(double *)a3.m128_u64 = (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this;
    if ( *(double *)a3.m128_u64 > v188 )
    {
LABEL_192:
      if ( v185 > 0 )
        printf("infeasible at depth %d\n", v99);
      if ( v99 )
      {
        v141 = (ClpNode **)(v183 + 8LL * v99 - 8);
        v142 = ClpNode::way(*v141);
        *(double *)a3.m128_u64 = v188 - *((double *)*v141 + 2);
        if ( *(double *)a3.m128_u64 > 1.0e10 )
          *(double *)a3.m128_u64 = v194 * 10.0 / ((double)v207 + 1.0);
        ClpNodeStuff::update(v3, v142, v196[*((int *)*v141 + 29)], *(double *)a3.m128_u64, 0);
      }
      goto LABEL_195;
    }
    ClpSimplex::computeDuals(this, nullptr);
    if ( v99 )
    {
      v135 = (ClpNode **)(v183 + 8LL * v99 - 8);
      v136 = ClpNode::way(*v135);
      ClpNodeStuff::update(
        v3,
        v136,
        v196[*((int *)*v135 + 29)],
        *((double *)this + 9) * *(double *)this - *((double *)this + 5) - *((double *)*v135 + 2),
        1);
      ++v207;
      *(double *)a3.m128_u64 = *((double *)this + 9) * *(double *)this
                             - *((double *)this + 5)
                             - *((double *)*v135 + 2)
                             + v194;
      v194 = *(double *)a3.m128_u64;
    }
    if ( v99 >= v187 )
    {
      v137 = (ClpNode *)operator new(0x98u);
      ClpNode::ClpNode(v137, this, v3, v99);
      if ( v99 == v201 )
      {
        v155 = (_QWORD *)operator new[](8LL * (2 * v99 + 10));
        if ( v99 )
        {
          if ( (v183 >= (unsigned __int64)(v155 + 2) || (unsigned __int64)v155 >= v183 + 16) && (unsigned int)v99 > 0x18 )
          {
            if ( ((v183 >> 3) & 1) != 0 )
            {
              v103 = 1;
              *v155 = *(_QWORD *)v183;
            }
            v156 = v99 - ((v183 >> 3) & 1);
            v157 = (v183 >> 3) & 1;
            v158 = 0;
            v159 = v183 + v157 * 8;
            v160 = &v155[v157];
            v161 = 0;
            do
            {
              a3 = (__m128)_mm_load_si128((const __m128i *)(v159 + v158 * 8));
              ++v161;
              *(__m128 *)&v160[v158] = a3;
              v158 += 2;
            }
            while ( v156 >> 1 > v161 );
            v162 = (v156 & 0xFFFFFFFE) + v103;
            if ( v156 != (v156 & 0xFFFFFFFE) )
            {
              v163 = v162;
              v164 = v162 + 1;
              v155[v163] = *(_QWORD *)(v183 + 8 * v163);
              if ( v201 > v164 )
                v155[v164] = *(_QWORD *)(v183 + 8LL * v164);
            }
          }
          else
          {
            v177 = 0;
            do
            {
              v155[v177 / 8] = *(_QWORD *)(v183 + v177);
              v177 += 8LL;
            }
            while ( v177 != 8LL * (unsigned int)(v99 - 1) + 8 );
          }
        }
        v202 = v155;
        operator delete[]((void *)v183);
        v183 = (unsigned __int64)v202;
        v201 = 2 * v99 + 10;
      }
      *(_QWORD *)(v183 + 8LL * v187++) = v137;
    }
    else
    {
      v137 = *(ClpNode **)(v183 + 8LL * v99);
      ClpNode::gutsOfConstructor(v137, this, v3, 1, v99);
    }
    v138 = *((_DWORD *)v137 + 29);
    if ( v138 >= 0
      || (ClpSimplex::doubleCheck(this),
          ClpNode::gutsOfConstructor(v137, this, v3, 1, v99),
          v138 = *((_DWORD *)v137 + 29),
          v138 >= 0) )
    {
      if ( v185 > 0 )
        printf("depth %d variable %d\n", v99, v138);
      if ( ++v99 )
      {
        v139 = (ClpNode **)(v183 + 8LL * v99 - 8);
        ClpNode::applyNode(*v139, this, 0);
        if ( v185 > 0 )
        {
          v140 = *((int *)*v139 + 29);
          a3.m128_u64[0] = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v140);
          printf(
            "No backtracking - applying node at depth-m %d - variable %d (%g,%g)\n",
            v99 - 1,
            *((_DWORD *)*v139 + 29),
            *(double *)a3.m128_u64,
            *(double *)(*((_QWORD *)this + 23) + 8 * v140));
        }
      }
    }
    else
    {
      if ( v188 > *(double *)a3.m128_u64 )
      {
        if ( (*((_BYTE *)this + 729) & 8) != 0 )
        {
          v165 = (CoinMessageHandler *)CoinMessageHandler::message(
                                         *((CoinMessageHandler **)v3 + 16),
                                         90,
                                         (ClpSimplex *)((char *)this + 416));
          v166 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v165);
          v167 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v166);
          v168 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v167);
          v169 = CoinMessageHandler::operator<<(v168);
          CoinMessageHandler::operator<<(v169, 0, *(double *)a3.m128_u64);
        }
        if ( v205 )
          operator delete[](v205);
        v143 = *((const void **)this + 22);
        v144 = *((int *)this + 27);
        if ( v143 )
        {
          if ( v144 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_337;
          v145 = 8 * v144;
          v205 = (void *)operator new[](v145);
          memcpy(v205, v143, v145);
        }
        else
        {
          v205 = nullptr;
        }
        if ( v204 )
          operator delete[](v204);
        v146 = *((const void **)this + 23);
        v147 = *((int *)this + 27);
        if ( v146 )
        {
          if ( v147 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_337;
          v148 = 8 * v147;
          v204 = (void *)operator new[](v148);
          memcpy(v204, v146, v148);
        }
        else
        {
          v204 = nullptr;
        }
        if ( v203 )
          operator delete[](v203);
        v149 = *((const void **)this + 33);
        if ( v149 )
        {
          v203 = (void *)operator new[](v193);
          memcpy(v203, v149, v193);
        }
        else
        {
          v203 = nullptr;
        }
        v188 = *(double *)a3.m128_u64 - v206;
        if ( *((int *)this + 327) <= 99 )
          v188 = fmin(
                   fabs(*(double *)a3.m128_u64 - v206) * 0.0000001 + 0.00001 + *(double *)a3.m128_u64 - v206,
                   *(double *)a3.m128_u64 - 0.00001);
        *(double *)a3.m128_u64 = v188 * *(double *)this;
        ClpModel::setDblParam(this, 0);
      }
LABEL_195:
      v107 = v99 - 1;
      if ( v107 == -1 )
        goto LABEL_168;
      v108 = (ClpNode **)(v183 + 8LL * v107);
      while ( (unsigned __int8)ClpNode::fathomed(*v108) )
      {
        --v107;
        --v108;
        if ( v107 == -1 )
          goto LABEL_168;
      }
      ClpNode::changeState(*v108);
      v109 = *((unsigned __int64 **)this + 123);
      if ( v189 != v109 && v193 )
      {
        if ( v198 <= 0 )
        {
          v113 = v189;
        }
        else
        {
          v110 = v189;
          v111 = *((_QWORD *)this + 123);
          do
          {
            v112 = *v110;
            v110 += 8;
            v111 += 64;
            *(_QWORD *)(v111 - 64) = v112;
            *(_QWORD *)(v111 - 56) = *(v110 - 7);
            *(_QWORD *)(v111 - 48) = *(v110 - 6);
            *(_QWORD *)(v111 - 40) = *(v110 - 5);
            *(_QWORD *)(v111 - 32) = *(v110 - 4);
            *(_QWORD *)(v111 - 24) = *(v110 - 3);
            *(_QWORD *)(v111 - 16) = *(v110 - 2);
            a3.m128_u64[0] = *(v110 - 1);
            *(_QWORD *)(v111 - 8) = a3.m128_u64[0];
          }
          while ( v110 != (unsigned __int64 *)((char *)v189 + v200) );
          v109 = (unsigned __int64 *)((char *)v109 + v200);
          v113 = (unsigned __int64 *)((char *)v189 + v200);
        }
        switch ( v199 )
        {
          case 1:
            goto LABEL_212;
          case 2:
            goto LABEL_211;
          case 3:
            goto LABEL_210;
          case 4:
            goto LABEL_209;
          case 5:
            goto LABEL_208;
          case 6:
            goto LABEL_207;
          case 7:
            v109[6] = v113[6];
LABEL_207:
            v109[5] = v113[5];
LABEL_208:
            v109[4] = v113[4];
LABEL_209:
            v109[3] = v113[3];
LABEL_210:
            v109[2] = v113[2];
LABEL_211:
            v109[1] = v113[1];
LABEL_212:
            a3.m128_u64[0] = *v113;
            *v109 = *v113;
            break;
          default:
            break;
        }
      }
      v114 = *((unsigned __int64 **)this + 126);
      v115 = v195;
      if ( v114 != v195 && v193 )
      {
        if ( v198 > 0 )
        {
          v116 = *((_QWORD *)this + 126);
          do
          {
            v117 = *v115;
            v115 += 8;
            v116 += 64;
            *(_QWORD *)(v116 - 64) = v117;
            *(_QWORD *)(v116 - 56) = *(v115 - 7);
            *(_QWORD *)(v116 - 48) = *(v115 - 6);
            *(_QWORD *)(v116 - 40) = *(v115 - 5);
            *(_QWORD *)(v116 - 32) = *(v115 - 4);
            *(_QWORD *)(v116 - 24) = *(v115 - 3);
            *(_QWORD *)(v116 - 16) = *(v115 - 2);
            a3.m128_u64[0] = *(v115 - 1);
            *(_QWORD *)(v116 - 8) = a3.m128_u64[0];
          }
          while ( v115 != (unsigned __int64 *)((char *)v195 + v200) );
          v114 = (unsigned __int64 *)((char *)v114 + v200);
          v115 = (unsigned __int64 *)((char *)v195 + v200);
        }
        switch ( v199 )
        {
          case 1:
            goto LABEL_226;
          case 2:
            goto LABEL_225;
          case 3:
            goto LABEL_224;
          case 4:
            goto LABEL_223;
          case 5:
            goto LABEL_222;
          case 6:
            goto LABEL_221;
          case 7:
            v114[6] = v115[6];
LABEL_221:
            v114[5] = v115[5];
LABEL_222:
            v114[4] = v115[4];
LABEL_223:
            v114[3] = v115[3];
LABEL_224:
            v114[2] = v115[2];
LABEL_225:
            v114[1] = v115[1];
LABEL_226:
            a3.m128_u64[0] = *v115;
            *v114 = *v115;
            break;
          default:
            break;
        }
      }
      v118 = *((_DWORD *)this + 27);
      v119 = *((unsigned __int64 **)this + 22);
      v120 = v118 == 0;
      if ( v119 != v191 && v118 )
      {
        if ( v118 >> 3 <= 0 )
        {
          v125 = v191;
        }
        else
        {
          v121 = *((_QWORD *)this + 22);
          v122 = v191;
          do
          {
            v123 = *v122;
            v122 += 8;
            v121 += 64;
            *(_QWORD *)(v121 - 64) = v123;
            *(_QWORD *)(v121 - 56) = *(v122 - 7);
            *(_QWORD *)(v121 - 48) = *(v122 - 6);
            *(_QWORD *)(v121 - 40) = *(v122 - 5);
            *(_QWORD *)(v121 - 32) = *(v122 - 4);
            *(_QWORD *)(v121 - 24) = *(v122 - 3);
            *(_QWORD *)(v121 - 16) = *(v122 - 2);
            a3.m128_u64[0] = *(v122 - 1);
            *(_QWORD *)(v121 - 8) = a3.m128_u64[0];
          }
          while ( v122 != &v191[8 * (unsigned int)((v118 >> 3) - 1) + 8] );
          v124 = ((v118 >> 3) - 1 + 1LL) << 6;
          v125 = (unsigned __int64 *)((char *)v191 + v124);
          v119 = (unsigned __int64 *)((char *)v119 + v124);
        }
        switch ( v118 % 8 )
        {
          case 1:
            goto LABEL_240;
          case 2:
            goto LABEL_239;
          case 3:
            goto LABEL_238;
          case 4:
            goto LABEL_237;
          case 5:
            goto LABEL_236;
          case 6:
            goto LABEL_235;
          case 7:
            v119[6] = v125[6];
LABEL_235:
            v119[5] = v125[5];
LABEL_236:
            v119[4] = v125[4];
LABEL_237:
            v119[3] = v125[3];
LABEL_238:
            v119[2] = v125[2];
LABEL_239:
            v119[1] = v125[1];
LABEL_240:
            a3.m128_u64[0] = *v125;
            *v119 = *v125;
            break;
          default:
            break;
        }
        v118 = *((_DWORD *)this + 27);
        v120 = v118 == 0;
      }
      v126 = *((unsigned __int64 **)this + 23);
      if ( v126 != v190 && !v120 )
      {
        if ( v118 >> 3 <= 0 )
        {
          v131 = v190;
        }
        else
        {
          v127 = v190;
          v128 = *((unsigned __int64 **)this + 23);
          do
          {
            v129 = *v127;
            v128 += 8;
            v127 += 8;
            *(v128 - 8) = v129;
            *(v128 - 7) = *(v127 - 7);
            *(v128 - 6) = *(v127 - 6);
            *(v128 - 5) = *(v127 - 5);
            *(v128 - 4) = *(v127 - 4);
            *(v128 - 3) = *(v127 - 3);
            *(v128 - 2) = *(v127 - 2);
            a3.m128_u64[0] = *(v127 - 1);
            *(v128 - 1) = a3.m128_u64[0];
          }
          while ( v128 != &v126[8 * (unsigned int)((v118 >> 3) - 1) + 8] );
          v130 = ((v118 >> 3) - 1 + 1LL) << 6;
          v131 = (unsigned __int64 *)((char *)v190 + v130);
          v126 = (unsigned __int64 *)((char *)v126 + v130);
        }
        switch ( v118 % 8 )
        {
          case 1:
            goto LABEL_255;
          case 2:
            goto LABEL_254;
          case 3:
            goto LABEL_253;
          case 4:
            goto LABEL_252;
          case 5:
            goto LABEL_251;
          case 6:
            goto LABEL_250;
          case 7:
            v126[6] = v131[6];
LABEL_250:
            v126[5] = v131[5];
LABEL_251:
            v126[4] = v131[4];
LABEL_252:
            v126[3] = v131[3];
LABEL_253:
            v126[2] = v131[2];
LABEL_254:
            v126[1] = v131[1];
LABEL_255:
            a3.m128_u64[0] = *v131;
            *v126 = *v131;
            break;
          default:
            break;
        }
      }
      if ( v107 )
      {
        v197 = v3;
        v132 = (ClpNode **)v183;
        do
        {
          v133 = *v132++;
          ClpNode::applyNode(v133, this, 0);
        }
        while ( v132 != (ClpNode **)(v183 + 8LL * (unsigned int)(v107 - 1) + 8) );
        v3 = v197;
      }
      ClpNode::applyNode(*v108, this, 1);
      if ( v185 > 0 )
      {
        v134 = *((int *)*v108 + 29);
        a3.m128_u64[0] = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v134);
        printf(
          "after backtracking - applying node at depth %d - variable %d (%g,%g)\n",
          v107,
          *((_DWORD *)*v108 + 29),
          *(double *)a3.m128_u64,
          *(double *)(*((_QWORD *)this + 23) + 8 * v134));
      }
      v99 = v107 + 1;
    }
  }
  if ( !(v101 % v192) )
  {
    if ( (*((_BYTE *)this + 729) & 8) != 0 )
    {
      v150 = (CoinMessageHandler *)CoinMessageHandler::message(
                                     *((CoinMessageHandler **)v3 + 16),
                                     89,
                                     (ClpSimplex *)((char *)this + 416));
      v151 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v150);
      v152 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v151);
      v153 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v152);
      v154 = CoinMessageHandler::operator<<(v153);
      CoinMessageHandler::operator<<(v154, 0, *(double *)a3.m128_u64);
    }
    v192 *= 2;
  }
  *(double *)a3.m128_u64 = (double)(v104 * (*((_DWORD *)this + 26) + *((_DWORD *)this + 27)));
  if ( *(double *)a3.m128_u64 <= 5.0e10 && (*(double *)a3.m128_u64 = (double)v101, (double)v101 <= 15000.0)
    || (*((_BYTE *)this + 729) & 0x10) != 0 )
  {
    v103 = *((_DWORD *)this + 80);
    goto LABEL_163;
  }
  *((_DWORD *)v3 + 41) = -10;
LABEL_168:
  if ( v187 )
  {
    v105 = (_QWORD *)v183;
    do
    {
      if ( *v105 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v105 + 8LL))(*v105);
      ++v105;
    }
    while ( v105 != (_QWORD *)(v183 + 8LL * (unsigned int)(v187 - 1) + 8) );
  }
  operator delete[]((void *)v183);
  operator delete[](v196);
  ClpSimplex::stopFastDual2(this, v3);
  if ( (*((_BYTE *)this + 729) & 8) != 0 && v101 > 9999 )
  {
    v171 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)v3 + 16),
                                   91,
                                   (ClpSimplex *)((char *)this + 416));
    v172 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v171);
    v173 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v172);
    v174 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v173);
    v175 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v174);
    v176 = CoinMessageHandler::operator<<(v175);
    CoinMessageHandler::operator<<(v176, 0, *(double *)a3.m128_u64);
  }
  if ( v203 )
  {
    CoinMemcpyN<double>(v205, *((unsigned int *)this + 27), *((_QWORD *)this + 22));
    CoinMemcpyN<double>(v204, *((unsigned int *)this + 27), *((_QWORD *)this + 23));
    CoinMemcpyN<unsigned char>(v203, (unsigned int)v193, *((_QWORD *)this + 33));
    if ( v205 )
      operator delete[](v205);
    if ( v204 )
      operator delete[](v204);
    operator delete[](v203);
    ClpModel::setDblParam(this, 0);
    v106 = *((_DWORD *)this + 84);
    *((_DWORD *)this + 84) = v106 & 0xFFFEFFFF;
    ClpSimplex::dual(this, 0, 0);
    *((_DWORD *)this + 84) = v106;
    started = 1;
    *((_DWORD *)v3 + 42) = v101;
    *((_DWORD *)v3 + 43) = v181;
  }
  else
  {
    *((_DWORD *)v3 + 42) = v101;
    *((_DWORD *)v3 + 43) = v181;
  }
  if ( *((int *)v3 + 41) < 0 )
  {
    v170 = *((_QWORD *)this + 123);
    if ( v170 )
    {
      CoinMemcpyN<double>(v189, (unsigned int)v193, v170);
      CoinMemcpyN<double>(v195, (unsigned int)v193, *((_QWORD *)this + 126));
      *((_DWORD *)this + 334) = v208;
    }
    CoinMemcpyN<double>(v191, *((unsigned int *)this + 27), *((_QWORD *)this + 22));
    CoinMemcpyN<double>(v190, *((unsigned int *)this + 27), *((_QWORD *)this + 23));
  }
  if ( v191 )
    operator delete[](v191);
  if ( v190 )
    operator delete[](v190);
  if ( v189 )
    operator delete[](v189);
  if ( v195 )
    operator delete[](v195);
  ClpModel::setMaximumIterations(this, v186);
  ClpModel::setDblParam(this, 0);
  return started;
}

