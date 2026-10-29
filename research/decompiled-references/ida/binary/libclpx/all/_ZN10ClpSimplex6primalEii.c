__int64 __fastcall ClpSimplex::primal(ClpSimplex *this, int a2, int a3)
{
  __int64 v5; // rax
  int v6; // edi
  _BYTE *v7; // rsi
  __int64 v8; // rax
  char v9; // dl
  int v10; // edx
  int v11; // esi
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  __int64 (*v14)(void); // rdx
  __int64 (*v15)(void); // rdx
  __int64 (*v16)(void); // rdx
  __int64 (*v17)(void); // rax
  int v18; // edx
  __int64 v19; // rcx
  double v20; // xmm1_8
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rsi
  double v27; // xmm0_8
  double v28; // xmm1_8
  double v29; // xmm0_8
  double v30; // xmm2_8
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  char *v34; // r12
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  double v38; // xmm0_8
  double v39; // xmm0_8
  double v40; // xmm1_8
  _DWORD *v41; // rcx
  __int64 v42; // rsi
  int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // r15d
  int v46; // esi
  int v47; // eax
  int v48; // eax
  int v50; // eax
  int v51; // r13d
  char v52; // r12
  int v53; // eax
  __int64 v54; // rdi
  bool v55; // zf
  int v56; // edx
  unsigned __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rdx
  unsigned int v60; // edi
  int v61; // r8d
  unsigned int v62; // esi
  __m128i si128; // xmm1
  unsigned __int64 v64; // rdx
  unsigned int v65; // esi
  unsigned int v66; // eax
  __m128i v67; // xmm0
  unsigned int v68; // eax
  int v69; // edx
  int v70; // eax
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  const void *v73; // r13
  unsigned __int64 v74; // rdx
  size_t v75; // r15
  char *v76; // r14
  const void *v77; // r15
  char *v78; // r13
  int v79; // r8d
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rdi
  __int64 v83; // rax
  double v84; // xmm1_8
  __int64 v85; // rax
  __int64 v86; // r11
  __int64 v87; // r9
  __int64 v88; // r10
  __int64 v89; // rax
  __int64 v90; // rsi
  double v91; // xmm0_8
  __int64 v92; // rax
  int v93; // edx
  double v94; // xmm0_8
  ClpSimplex *v95; // r15
  ClpSimplex **v96; // rax
  ClpSimplex **v97; // r15
  int v98; // esi
  __int64 v99; // r8
  __int64 v100; // rdi
  __int64 v101; // rdx
  double v102; // xmm0_8
  int v103; // eax
  __int64 v104; // r13
  int v105; // eax
  ClpSimplex *v106; // r8
  int v107; // r12d
  __int64 v108; // rdi
  __int64 v109; // r11
  __int64 v110; // rdx
  char v111; // cl
  int v112; // eax
  ClpSimplex *v113; // rcx
  __int64 v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rsi
  int v117; // esi
  int i; // ecx
  int v119; // eax
  int v120; // edx
  __int64 v121; // rcx
  double v122; // xmm1_8
  __int64 v123; // rax
  __int64 v124; // r13
  __int64 v125; // r8
  __int64 v126; // rax
  __int64 v127; // rdi
  __int64 v128; // rsi
  double v129; // xmm0_8
  int v130; // eax
  _QWORD *v131; // rsi
  int v132; // eax
  __int64 v133; // rdi
  _QWORD *v134; // rax
  int v135; // ecx
  _QWORD *v136; // rdi
  __int64 v137; // rax
  _DWORD *v138; // r12
  __int64 v139; // rax
  __int64 v140; // rcx
  _BYTE *v141; // rax
  int v142; // r8d
  int v143; // edx
  int v144; // r8d
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // r11
  void *v149; // r15
  int v150; // eax
  __int64 v151; // rsi
  __int64 v152; // rdx
  int v153; // r12d
  __int64 v154; // rcx
  double v155; // xmm1_8
  double v156; // xmm0_8
  double v157; // xmm1_8
  __int64 v158; // rax
  __int64 v159; // rsi
  int v160; // r12d
  int *v161; // rax
  __int64 v162; // rcx
  double v163; // xmm0_8
  _BYTE *v164; // rsi
  double v165; // xmm1_8
  double v166; // xmm0_8
  char v167; // dl
  char v168; // cl
  ClpSimplex **v169; // [rsp+10h] [rbp-B0h]
  signed int v170; // [rsp+24h] [rbp-9Ch]
  int v171; // [rsp+28h] [rbp-98h]
  int v172; // [rsp+2Ch] [rbp-94h]
  int *v173; // [rsp+30h] [rbp-90h]
  ClpSimplex **v174; // [rsp+38h] [rbp-88h]
  ClpSimplex *v175; // [rsp+38h] [rbp-88h]
  int *v176; // [rsp+40h] [rbp-80h]
  __int64 v177; // [rsp+48h] [rbp-78h]
  __int64 v178; // [rsp+50h] [rbp-70h]
  __int64 v179; // [rsp+58h] [rbp-68h]
  __int64 v180; // [rsp+60h] [rbp-60h]
  int v181; // [rsp+68h] [rbp-58h]
  __int64 nb; // [rsp+70h] [rbp-50h]
  int n; // [rsp+70h] [rbp-50h]
  int na; // [rsp+70h] [rbp-50h]
  double v186; // [rsp+78h] [rbp-48h]
  char v187[52]; // [rsp+8Ch] [rbp-34h] BYREF

  v5 = *((_QWORD *)this + 20);
  if ( *(int *)(v5 + 16) > 1 && *(_DWORD *)(v5 + 20) )
    return (unsigned int)ClpSimplex::reducedGradient(this, 0);
  if ( a2 <= 11 )
  {
    v44 = ClpSimplexPrimal::primal(this, a2, a3);
  }
  else
  {
    v6 = *((_DWORD *)this + 27);
    v181 = (a2 > 99) + 1;
    if ( v6 <= 0 )
    {
      v10 = 0;
    }
    else
    {
      v7 = *((_BYTE **)this + 33);
      if ( (*v7 & 7) == 1 )
        goto LABEL_44;
      v8 = 1;
      while ( 1 )
      {
        v10 = v8;
        if ( (unsigned int)(v6 - 1) + 1LL == v8 )
          break;
        v9 = v7[v8++];
        if ( (v9 & 7) == 1 )
          goto LABEL_44;
      }
    }
    if ( v6 == v10 )
    {
      v11 = *((_DWORD *)this + 26);
      if ( v11 )
        sub_1023E0(*((_QWORD **)this + 14), v11);
      v12 = *((_QWORD **)this + 24);
      v13 = (_QWORD *)*v12;
      v14 = *(__int64 (**)(void))(*v12 + 48LL);
      if ( (char *)v14 == (char *)ClpPackedMatrix::getIndices )
      {
        v180 = *(_QWORD *)(v12[11] + 40LL);
      }
      else
      {
        v145 = v14();
        v12 = *((_QWORD **)this + 24);
        v180 = v145;
        v13 = (_QWORD *)*v12;
      }
      v15 = (__int64 (*)(void))v13[7];
      if ( (char *)v15 == (char *)ClpPackedMatrix::getVectorStarts )
      {
        v178 = *(_QWORD *)(v12[11] + 48LL);
      }
      else
      {
        v147 = v15();
        v12 = *((_QWORD **)this + 24);
        v178 = v147;
        v13 = (_QWORD *)*v12;
      }
      v16 = (__int64 (*)(void))v13[8];
      if ( (char *)v16 == (char *)ClpPackedMatrix::getVectorLengths )
      {
        v177 = *(_QWORD *)(v12[11] + 56LL);
      }
      else
      {
        v146 = v16();
        v12 = *((_QWORD **)this + 24);
        v177 = v146;
        v13 = (_QWORD *)*v12;
      }
      v17 = (__int64 (*)(void))v13[5];
      if ( (char *)v17 == (char *)ClpPackedMatrix::getElements )
        v179 = *(_QWORD *)(v12[11] + 32LL);
      else
        v179 = v17();
      v18 = *((_DWORD *)this + 27);
      if ( v18 > 0 )
      {
        v19 = 0;
        do
        {
          while ( 1 )
          {
            v20 = *(double *)(*((_QWORD *)this + 15) + 8 * v19);
            if ( v20 != 0.0 )
            {
              v21 = *(int *)(v178 + 4 * v19);
              if ( (int)v21 < (int)v21 + *(_DWORD *)(v177 + 4 * v19) )
                break;
            }
            if ( (int)++v19 >= v18 )
              goto LABEL_28;
          }
          v22 = (unsigned int)(*(_DWORD *)(v177 + 4 * v19) - 1) + 1LL;
          v23 = v180 + 4 * v21;
          v24 = v179 + 8 * v21;
          v25 = 0;
          do
          {
            v26 = *(int *)(v23 + 4 * v25);
            v27 = *(double *)(v24 + 8 * v25++);
            *(double *)(*((_QWORD *)this + 14) + 8 * v26) = v27 * v20 + *(double *)(*((_QWORD *)this + 14) + 8 * v26);
          }
          while ( v22 != v25 );
          v18 = *((_DWORD *)this + 27);
          ++v19;
        }
        while ( (int)v19 < v18 );
      }
LABEL_28:
      ClpSimplex::checkSolutionInternal(this);
      v28 = *((double *)this + 112);
      v29 = (double)*((int *)this + 26);
      v30 = sqrt(v29);
      if ( v29 < 0.0 )
        sqrt(v29);
      if ( v28 * v30 < 1.0 )
      {
        v31 = *((int *)this + 26);
        v170 = (a2 - 10) % 0x64u;
        if ( v31 > 0xFFFFFFFFFFFFFFFLL )
          goto LABEL_198;
        v32 = operator new[](8 * v31);
        v33 = *((int *)this + 26);
        v34 = (char *)v32;
        if ( (int)v33 > 0 )
        {
          v35 = *((_QWORD *)this + 14);
          v36 = *((_QWORD *)this + 19);
          v37 = 0;
          do
          {
            v40 = *(double *)(v35 + v37);
            v38 = *(double *)(v36 + v37);
            if ( v40 > v38 || (v38 = *(double *)(*((_QWORD *)this + 18) + v37), v38 > v40) )
              v39 = v38 - v40;
            else
              v39 = 0.0;
            *(double *)&v34[v37] = v39 * (1.0 / (double)((a2 - 10) % 0x64u));
            v37 += 8;
          }
          while ( 8LL * (unsigned int)(v33 - 1) + 8 != v37 );
        }
        v172 = (v170 + *((_DWORD *)this + 27) - 1) / v170;
        if ( v33 > 0x1FFFFFFFFFFFFFFELL )
          goto LABEL_198;
        v57 = operator new[](4 * v33);
        v58 = *((_DWORD *)this + 26);
        v176 = (int *)v57;
        if ( v58 > 0 )
        {
          v59 = -(int)(v57 >> 2) & 3;
          if ( (unsigned int)(v58 - 1) <= 5 )
          {
            v68 = 0;
          }
          else
          {
            v60 = 0;
            if ( (_DWORD)v59 )
            {
              *(_DWORD *)v57 = 0;
              v60 = 1;
              if ( (_DWORD)v59 != 1 )
              {
                *(_DWORD *)(v57 + 4) = 1;
                v60 = 2;
                if ( (_DWORD)v59 != 2 )
                {
                  *(_DWORD *)(v57 + 8) = 2;
                  v60 = 3;
                }
              }
            }
            v61 = v58 - v59;
            v62 = v58 - v59;
            si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
            v64 = v57 + 4 * v59;
            v65 = v62 >> 2;
            v66 = 0;
            v67 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v60), 0), (__m128i)xmmword_289BB0);
            do
            {
              ++v66;
              v64 += 16LL;
              *(__m128i *)(v64 - 16) = v67;
              v67 = _mm_add_epi32(v67, si128);
            }
            while ( v66 < v65 );
            v68 = (v61 & 0xFFFFFFFC) + v60;
            if ( (v61 & 0xFFFFFFFC) == v61 )
              goto LABEL_87;
          }
          v176[v68] = v68;
          if ( (int)(v68 + 1) < v58 )
          {
            v176[v68 + 1] = v68 + 1;
            if ( v58 > (int)(v68 + 2) )
            {
              v176[v68 + 2] = v68 + 2;
              if ( (int)(v68 + 3) < v58 )
              {
                v176[v68 + 3] = v68 + 3;
                v69 = v68 + 4;
                if ( (int)(v68 + 4) < v58 )
                {
                  v70 = v68 + 5;
                  v176[v69] = v69;
                  if ( v58 > v70 )
                    v176[v70] = v70;
                }
              }
            }
          }
        }
LABEL_87:
        v71 = *((int *)this + 27);
        if ( v71 > 0x1FFFFFFFFFFFFFFELL )
          goto LABEL_198;
        v173 = (int *)operator new[](4 * v71);
        v72 = operator new[](8LL * v170);
        v73 = *((const void **)this + 18);
        v169 = (ClpSimplex **)v72;
        v74 = *((int *)this + 26);
        if ( v73 )
        {
          if ( v74 > 0xFFFFFFFFFFFFFFFLL )
            goto LABEL_198;
          v75 = 8 * v74;
          v76 = (char *)operator new[](8 * v74);
          memcpy(v76, v73, v75);
          v74 = *((int *)this + 26);
        }
        else
        {
          v76 = nullptr;
        }
        v77 = *((const void **)this + 19);
        if ( !v77 )
        {
          v78 = nullptr;
          goto LABEL_94;
        }
        if ( v74 <= 0xFFFFFFFFFFFFFFFLL )
        {
          nb = 8 * v74;
          v78 = (char *)operator new[](8 * v74);
          memcpy(v78, v77, nb);
          LODWORD(v74) = *((_DWORD *)this + 26);
LABEL_94:
          v79 = 0;
          v174 = v169;
          while ( 1 )
          {
            v80 = v79 + v172;
            if ( *((_DWORD *)this + 27) <= v79 + v172 )
              v80 = *((_DWORD *)this + 27);
            n = v80;
            if ( (_DWORD)v74 )
              break;
            if ( v80 > v79 )
              goto LABEL_99;
LABEL_112:
            v171 = v79;
            v95 = (ClpSimplex *)operator new(0x6F0u);
            ClpSimplex::ClpSimplex(v95, this, *((_DWORD *)this + 26), v176, n - v171, v173, 1, 1, 0);
            v74 = *((int *)this + 26);
            v79 = n;
            *v174++ = v95;
            if ( &v169[(unsigned int)(v170 - 1) + 1] == v174 )
            {
              memcpy(*((void **)this + 18), v76, 8 * v74);
              memcpy(*((void **)this + 19), v78, 8LL * *((int *)this + 26));
              operator delete[](v76);
              operator delete[](v78);
              operator delete[](v34);
              v96 = v169;
              do
              {
                v97 = v96;
                ClpSimplex::primal(*v96, 1, 0);
                v96 = v97 + 1;
              }
              while ( v174 != v97 + 1 );
              v98 = *((_DWORD *)this + 26);
              if ( v98 > 0 )
              {
                v99 = *((_QWORD *)this + 19);
                v100 = *((_QWORD *)this + 18);
                v101 = 0;
                do
                {
                  v102 = *(double *)(v100 + 8 * v101);
                  v103 = (*(double *)(v99 + 8 * v101) > 1.0e30) + (*(double *)(v99 + 8 * v101) > v102);
                  if ( v102 < -1.0e30 )
                    ++v103;
                  v176[v101++] = 1000 * v103;
                }
                while ( v98 > (int)v101 );
              }
              v104 = 0;
              v105 = 0;
              na = 0;
              while ( 1 )
              {
                v106 = v169[v104];
                v107 = v172 + v105;
                if ( *((_DWORD *)this + 27) <= v172 + v105 )
                  v107 = *((_DWORD *)this + 27);
                if ( v107 <= v105 )
                {
                  v112 = *((_DWORD *)this + 26);
                  v113 = v169[v104];
                  if ( v112 <= 0 )
                  {
LABEL_132:
                    v175 = v113;
                    ClpSimplex::~ClpSimplex(v113);
                    operator delete(v175);
                    goto LABEL_133;
                  }
                }
                else
                {
                  v108 = 8LL * v105;
                  v109 = *((_QWORD *)v106 + 15) - v108;
                  v110 = 0;
                  do
                  {
                    *(_QWORD *)(*((_QWORD *)this + 15) + v108) = *(_QWORD *)(v109 + v108);
                    v111 = *(_BYTE *)(*((_QWORD *)v106 + 33) + v110) & 7;
                    *(_BYTE *)(*((_QWORD *)this + 33) + v105 + v110) = v111
                                                                     | *(_BYTE *)(*((_QWORD *)this + 33) + v105 + v110)
                                                                     & 0xF8;
                    ++v110;
                    na += v111 == 1;
                    v108 += 8;
                  }
                  while ( v110 != (unsigned int)(~v105 + v107) + 1LL );
                  v112 = *((_DWORD *)this + 26);
                  v113 = v169[v104];
                  if ( v112 <= 0 )
                    goto LABEL_131;
                }
                v114 = (unsigned int)(v112 - 1);
                v115 = 0;
                v116 = v114 + 1;
                do
                {
                  if ( (*(_BYTE *)(*((_QWORD *)v106 + 33) + (int)v115 + *((_DWORD *)v106 + 27)) & 7) == 1 )
                    ++v176[v115];
                  ++v115;
                }
                while ( v116 != v115 );
LABEL_131:
                if ( v113 )
                  goto LABEL_132;
LABEL_133:
                ++v104;
                v105 = v107;
                if ( v170 <= (int)v104 )
                {
                  operator delete[](v169);
                  v117 = *((_DWORD *)this + 26);
                  if ( v117 > 0 )
                  {
                    for ( i = 0; i < v117; ++i )
                    {
                      v119 = i + *((_DWORD *)this + 27);
                      *(_BYTE *)(*((_QWORD *)this + 33) + v119) = *(_BYTE *)(*((_QWORD *)this + 33) + v119) & 0xF8 | 4;
                      v117 = *((_DWORD *)this + 26);
                    }
                  }
                  if ( v117 )
                    sub_1023E0(*((_QWORD **)this + 14), v117);
                  v120 = *((_DWORD *)this + 27);
                  if ( v120 > 0 )
                  {
                    v121 = 0;
                    do
                    {
                      v122 = *(double *)(*((_QWORD *)this + 15) + 8 * v121);
                      if ( v122 != 0.0 )
                      {
                        v123 = *(int *)(v178 + 4 * v121);
                        if ( (int)v123 < (int)v123 + *(_DWORD *)(v177 + 4 * v121) )
                        {
                          v124 = v180 + 4 * v123;
                          v125 = v179 + 8 * v123;
                          v126 = 0;
                          v127 = (unsigned int)(*(_DWORD *)(v177 + 4 * v121) - 1) + 1LL;
                          do
                          {
                            v128 = *(int *)(v124 + 4 * v126);
                            v129 = *(double *)(v125 + 8 * v126++);
                            *(double *)(*((_QWORD *)this + 14) + 8 * v128) = v129 * v122
                                                                           + *(double *)(*((_QWORD *)this + 14)
                                                                                       + 8 * v128);
                          }
                          while ( v126 != v127 );
                          v120 = *((_DWORD *)this + 27);
                        }
                      }
                      ++v121;
                    }
                    while ( (int)v121 < v120 );
                  }
                  ClpSimplex::checkSolutionInternal(this);
                  v137 = *((int *)this + 26);
                  if ( (int)v137 <= na )
                  {
                    if ( (int)v137 < na )
                    {
                      v148 = operator new[](8LL * na);
                      v149 = (void *)v148;
                      v150 = *((_DWORD *)this + 27);
                      if ( v150 <= 0 )
                      {
                        v159 = v148;
                        v153 = 0;
                      }
                      else
                      {
                        v151 = *((_QWORD *)this + 33);
                        v152 = 0;
                        v153 = 0;
                        v154 = (unsigned int)(v150 - 1) + 1LL;
                        do
                        {
                          if ( (*(_BYTE *)(v151 + v152) & 7) == 1 )
                          {
                            v155 = *(double *)(*((_QWORD *)this + 15) + 8 * v152);
                            v156 = *(double *)(*((_QWORD *)this + 23) + 8 * v152) - v155;
                            v157 = v155 - *(double *)(*((_QWORD *)this + 22) + 8 * v152);
                            v158 = v153++;
                            v173[v158] = v152;
                            *(double *)(v148 + 8 * v158) = fmin(v157, v156);
                          }
                          ++v152;
                        }
                        while ( v154 != v152 );
                        v149 = (void *)v148;
                        v159 = v148 + 8LL * v153;
                      }
                      CoinSort_2<double,int>(v149, v159, v173);
                      v160 = v153 - *((_DWORD *)this + 26);
                      if ( v160 > 0 )
                      {
                        v161 = v173;
                        do
                        {
                          v162 = *v161;
                          v163 = *(double *)(*((_QWORD *)this + 15) + 8 * v162);
                          v164 = (_BYTE *)(v162 + *((_QWORD *)this + 33));
                          v165 = *(double *)(*((_QWORD *)this + 23) + 8 * v162) - v163;
                          v166 = v163 - *(double *)(*((_QWORD *)this + 22) + 8 * v162);
                          LOBYTE(v162) = *v164 & 0xF8;
                          v167 = v162 | 2;
                          v168 = v162 | 3;
                          if ( v165 > v166 )
                            v167 = v168;
                          ++v161;
                          *v164 = v167;
                        }
                        while ( &v173[v160 - 1 + 1] != v161 );
                      }
                      operator delete[](v149);
                    }
                  }
                  else
                  {
                    v138 = (_DWORD *)operator new[](4 * v137);
                    v139 = *((int *)this + 26);
                    if ( (int)v139 > 0 )
                    {
                      v140 = 0;
                      do
                      {
                        v141 = (_BYTE *)(*((_QWORD *)this + 33) + (int)v140 + *((_DWORD *)this + 27));
                        *v141 = *v141 & 0xF8 | 4;
                        v142 = v176[v140];
                        v143 = (unsigned __int64)(274877907LL * v142) >> 32;
                        v144 = v142 % 1000;
                        if ( v144 )
                          v176[v140] = (v176[v140] >> 31) - (v143 >> 5) - v144;
                        else
                          v176[v140] = 0;
                        v139 = *((int *)this + 26);
                        v138[v140] = v140;
                        ++v140;
                      }
                      while ( (int)v140 < (int)v139 );
                    }
                    CoinSort_2<int,int>(v176, &v176[v139], v138);
                    if ( *((_DWORD *)this + 26) - na > 0 )
                    {
                      v41 = v138;
                      v42 = (__int64)&v138[*((_DWORD *)this + 26) - na - 1 + 1];
                      do
                      {
                        v43 = *v41++ + *((_DWORD *)this + 27);
                        *(_BYTE *)(*((_QWORD *)this + 33) + v43) = *(_BYTE *)(*((_QWORD *)this + 33) + v43) & 0xF8 | 1;
                      }
                      while ( (_DWORD *)v42 != v41 );
                    }
                    operator delete[](v138);
                  }
                  operator delete[](v173);
                  operator delete[](v176);
                  goto LABEL_44;
                }
              }
            }
          }
          v130 = v74 + 7;
          v131 = *((_QWORD **)this + 14);
          if ( (v74 & 0x80000000) == 0LL )
            v130 = v74;
          v132 = v130 >> 3;
          if ( v132 > 0 )
          {
            v133 = (unsigned int)(v132 - 1);
            v134 = *((_QWORD **)this + 14);
            v135 = v133;
            v136 = &v131[8 * v133 + 8];
            do
            {
              *v134 = 0;
              v134[1] = 0;
              v134 += 8;
              *(v134 - 6) = 0;
              *(v134 - 5) = 0;
              *(v134 - 4) = 0;
              *(v134 - 3) = 0;
              *(v134 - 2) = 0;
              *(v134 - 1) = 0;
            }
            while ( v134 != v136 );
            v131 += 8 * v135 + 8;
          }
          switch ( (int)v74 % 8 )
          {
            case 1:
              goto LABEL_162;
            case 2:
              goto LABEL_161;
            case 3:
              goto LABEL_160;
            case 4:
              goto LABEL_159;
            case 5:
              goto LABEL_158;
            case 6:
              goto LABEL_157;
            case 7:
              v131[6] = 0;
LABEL_157:
              v131[5] = 0;
LABEL_158:
              v131[4] = 0;
LABEL_159:
              v131[3] = 0;
LABEL_160:
              v131[2] = 0;
LABEL_161:
              v131[1] = 0;
LABEL_162:
              *v131 = 0;
              break;
            default:
              break;
          }
          if ( n > v79 )
          {
LABEL_99:
            v81 = v79;
            v82 = 8LL * v79;
            do
            {
              while ( 1 )
              {
                v83 = *((_QWORD *)this + 15);
                v173[v81 - v79] = v81;
                v84 = *(double *)(v83 + v82);
                if ( v84 != 0.0 )
                {
                  v85 = *(int *)(v178 + 4 * v81);
                  if ( (int)v85 < (int)v85 + *(_DWORD *)(v177 + 4 * v81) )
                    break;
                }
                ++v81;
                v82 += 8;
                if ( n <= (int)v81 )
                  goto LABEL_106;
              }
              v86 = v180 + 4 * v85;
              v87 = (unsigned int)(*(_DWORD *)(v177 + 4 * v81) - 1) + 1LL;
              v88 = v179 + 8 * v85;
              v89 = 0;
              do
              {
                v90 = *(int *)(v86 + 4 * v89);
                v91 = *(double *)(v88 + 8 * v89++);
                *(double *)(*((_QWORD *)this + 14) + 8 * v90) = v91 * v84
                                                              + *(double *)(*((_QWORD *)this + 14) + 8 * v90);
              }
              while ( v87 != v89 );
              ++v81;
              v82 += 8;
            }
            while ( n > (int)v81 );
          }
LABEL_106:
          if ( *((int *)this + 26) > 0 )
          {
            v92 = 0;
            v93 = 0;
            do
            {
              while ( 1 )
              {
                v94 = *(double *)(*((_QWORD *)this + 14) + v92) + *(double *)&v34[v92];
                if ( *(double *)&v78[v92] < 1.0e30 )
                  *(double *)(*((_QWORD *)this + 19) + v92) = v94;
                if ( *(double *)&v76[v92] <= -1.0e30 )
                  break;
                ++v93;
                *(double *)(*((_QWORD *)this + 18) + v92) = v94;
                v92 += 8;
                if ( v93 >= *((_DWORD *)this + 26) )
                  goto LABEL_112;
              }
              ++v93;
              v92 += 8;
            }
            while ( *((_DWORD *)this + 26) > v93 );
          }
          goto LABEL_112;
        }
LABEL_198:
        __cxa_throw_bad_array_new_length();
      }
    }
LABEL_44:
    v44 = ClpSimplexPrimal::primal(this, v181, a3);
  }
  v45 = v44;
  (***((void (__fastcall ****)(_QWORD, __int64))this + 45))(*((_QWORD *)this + 45), 118);
  if ( *((_DWORD *)this + 80) == 10 )
  {
    v51 = *((_DWORD *)this + 327);
    *((_DWORD *)this + 327) = 100;
    v52 = ClpSimplex::initialDenseFactorization(this);
    ClpSimplex::setInitialDenseFactorization(this, 1);
    v53 = *((_DWORD *)this + 77);
    v54 = *((_QWORD *)this + 24);
    *((_DWORD *)this + 182) |= 0x100u;
    *((_DWORD *)this + 183) = v53;
    if ( ((*(__int64 (__fastcall **)(__int64, ClpSimplex *, __int64, char *))(*(_QWORD *)v54 + 320LL))(
            v54,
            this,
            4,
            v187)
        & 2) == 0
      || (*((_BYTE *)this + 337) & 0x20) != 0 )
    {
      v45 = ClpSimplexPrimal::primal(this, 0, a3);
    }
    else
    {
      v186 = *((double *)this + 98);
      *((double *)this + 98) = fmin(fmax(*((double *)this + 107) + *((double *)this + 107), 100000000.0), v186);
      v45 = ClpSimplexDual::dual(this, 0, a3);
      *((double *)this + 98) = v186;
    }
    *((_DWORD *)this + 182) &= ~0x100u;
    *((_DWORD *)this + 183) = 0;
    ClpSimplex::setInitialDenseFactorization(this, v52);
    v55 = *((_DWORD *)this + 80) == 10;
    *((_DWORD *)this + 327) = v51;
    if ( v55 )
    {
      if ( *((_DWORD *)this + 308) )
      {
        *((_DWORD *)this + 80) = 4;
      }
      else
      {
        *((_DWORD *)this + 80) = 0;
        *((_DWORD *)this + 306) = 0;
      }
    }
  }
  ClpModel::onStopped(this);
  if ( !*((_DWORD *)this + 80) )
  {
    v46 = *((_DWORD *)this + 308);
    if ( *(_DWORD *)(*((_QWORD *)this + 43) + 104LL) == 63 )
    {
      v56 = *((_DWORD *)this + 306);
      if ( !v46 && !v56 )
        return v45;
      printf(
        "minor inaccuracy primal sum %g (%d) error %g, dual %g (%d) %g\n",
        *((double *)this + 112),
        v46,
        *((double *)this + 95),
        *((double *)this + 111),
        v56,
        *((double *)this + 96));
      v46 = *((_DWORD *)this + 308);
    }
    if ( v46 )
    {
      v47 = *((_DWORD *)this + 81);
      *((_DWORD *)this + 308) = 0;
      *((_QWORD *)this + 112) = 0;
      if ( !v47 )
      {
        v48 = *((_DWORD *)this + 306);
        *((_DWORD *)this + 81) = 2;
        if ( !v48 )
          return v45;
        goto LABEL_55;
      }
      if ( v47 == 3 )
        *((_DWORD *)this + 81) = 4;
    }
    if ( !*((_DWORD *)this + 306) )
      return v45;
LABEL_55:
    v50 = *((_DWORD *)this + 81);
    *((_DWORD *)this + 306) = 0;
    *((_QWORD *)this + 111) = 0;
    if ( v50 )
    {
      if ( v50 == 2 )
        *((_DWORD *)this + 81) = 4;
    }
    else
    {
      *((_DWORD *)this + 81) = 3;
    }
  }
  return v45;
}

