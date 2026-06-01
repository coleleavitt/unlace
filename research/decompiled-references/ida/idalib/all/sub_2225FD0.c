__int64 __fastcall sub_2225FD0(__int64 a1, __int64 a2, size_t a3, unsigned __int64 a4, char a5)
{
  size_t v5; // r14
  unsigned __int64 v7; // rax
  size_t v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r12
  size_t v11; // rbp
  bool v12; // zf
  unsigned int *v13; // r12
  _BYTE *v14; // rsi
  char *v15; // rdx
  unsigned int *v16; // rdi
  _BYTE *v17; // rax
  unsigned __int64 v18; // r15
  size_t v19; // rbx
  char v20; // al
  size_t v21; // rbx
  _BYTE *v22; // rax
  __int64 v23; // rax
  char *v24; // rax
  __int64 v25; // rbx
  void *v26; // rbp
  unsigned int *v27; // rbp
  unsigned int *v28; // rbx
  unsigned int *v29; // rdi
  void *v30; // rbx
  _QWORD *v31; // rax
  void **v32; // rbp
  void **v33; // rbx
  char *v34; // rbp
  char *v35; // r12
  char *v36; // rdi
  char *v37; // r13
  __int64 v38; // rbx
  void *v39; // rdi
  __m128i *v41; // rsi
  int v42; // r8d
  __m128i v43; // xmm2
  __int64 v44; // rax
  void **v45; // r13
  void **v46; // rbp
  __m128i *v47; // rcx
  int v48; // edx
  __m128i v49; // xmm3
  __int64 v50; // rax
  void *v51; // r15
  _BYTE *v52; // r15
  void **v53; // r12
  unsigned __int64 v54; // rsi
  char *v55; // rbx
  int v56; // eax
  void **v57; // r8
  size_t v58; // rdx
  unsigned int *v59; // rax
  unsigned int *v60; // rdx
  size_t v61; // r8
  size_t v62; // rax
  __int64 v63; // rcx
  size_t v64; // rbx
  _BYTE *v65; // r9
  _QWORD *v66; // rcx
  __int64 v67; // rax
  size_t v68; // rdx
  void *v69; // r8
  void *v70; // rcx
  _BYTE *v71; // r9
  unsigned __int64 v72; // rdx
  _QWORD *v73; // rax
  size_t v74; // rax
  void **v75; // rbp
  void **v76; // rbx
  __int64 v77; // r14
  unsigned __int64 v78; // rax
  __int64 v79; // r9
  unsigned int *v80; // r8
  __int64 v81; // r9
  unsigned int *v82; // r15
  size_t v83; // r12
  char *v84; // rbp
  char *v85; // r15
  _BYTE *v86; // rax
  unsigned int *v87; // rax
  unsigned int v88; // ebx
  char *v89; // rdx
  _BYTE *v90; // rsi
  int v91; // eax
  unsigned int *v92; // r14
  unsigned __int64 v93; // r9
  int v94; // r14d
  size_t v95; // rdx
  _QWORD *v96; // rcx
  void *v97; // rax
  unsigned int *v98; // r8
  __int64 v99; // rsi
  unsigned __int64 v100; // rcx
  bool v101; // al
  void **v102; // rbp
  __int64 v103; // rdx
  __int64 v104; // rax
  _BYTE *v105; // r13
  size_t v106; // rbx
  size_t v107; // r10
  size_t v108; // r11
  char *v109; // rsi
  char *v110; // rdi
  _BYTE *v111; // rdx
  _BYTE *v112; // r12
  _BYTE *v113; // r12
  __int64 v114; // r15
  _QWORD *v115; // rdi
  __int64 v116; // rdx
  _BYTE *v117; // rsi
  __m128i *v118; // r14
  size_t v119; // rcx
  size_t v120; // r15
  _BYTE *v121; // rax
  unsigned __int64 v122; // rbp
  unsigned __int64 v123; // r12
  _BYTE *v124; // r12
  bool v125; // r15
  _BYTE *v126; // rsi
  _BYTE *v127; // rdi
  unsigned __int64 v128; // rdi
  _BYTE *v129; // rax
  size_t v130; // r10
  size_t v131; // r11
  _BYTE *v132; // rsi
  _BYTE *v133; // rdi
  __m128i *v134; // rdi
  char *v135; // rsi
  char *v136; // rdi
  void **v137; // rbx
  __m128i *v138; // rbp
  __m128i *v139; // rdi
  void **v140; // r12
  const __m128i *v141; // rax
  __m128i *v142; // rdx
  unsigned __int64 v143; // rsi
  const __m128i *v144; // rcx
  void **v145; // r15
  int v146; // r15d
  _BYTE *v147; // rsi
  size_t v148; // rdx
  _BYTE *v149; // r8
  _BYTE *v150; // rcx
  size_t v151; // r15
  void **v153; // [rsp+8h] [rbp-1F0h]
  __int64 *m128i_i64; // [rsp+10h] [rbp-1E8h]
  unsigned int *v155; // [rsp+10h] [rbp-1E8h]
  size_t v156; // [rsp+10h] [rbp-1E8h]
  __int64 v157; // [rsp+10h] [rbp-1E8h]
  _BYTE *v158; // [rsp+10h] [rbp-1E8h]
  unsigned int *dest; // [rsp+18h] [rbp-1E0h]
  _BYTE *destc; // [rsp+18h] [rbp-1E0h]
  char *desta; // [rsp+18h] [rbp-1E0h]
  void *deste; // [rsp+18h] [rbp-1E0h]
  __int64 destb; // [rsp+18h] [rbp-1E0h]
  _BYTE *destf; // [rsp+18h] [rbp-1E0h]
  void *destd; // [rsp+18h] [rbp-1E0h]
  size_t v166; // [rsp+20h] [rbp-1D8h]
  size_t n; // [rsp+30h] [rbp-1C8h]
  size_t v168; // [rsp+38h] [rbp-1C0h]
  size_t v169; // [rsp+38h] [rbp-1C0h]
  size_t v170; // [rsp+40h] [rbp-1B8h]
  size_t v171; // [rsp+40h] [rbp-1B8h]
  void **v172; // [rsp+50h] [rbp-1A8h]
  bool v173; // [rsp+5Fh] [rbp-199h]
  __int64 v174; // [rsp+60h] [rbp-198h]
  unsigned int *v175; // [rsp+68h] [rbp-190h]
  __m128i *v176; // [rsp+70h] [rbp-188h]
  __int64 v177; // [rsp+78h] [rbp-180h]
  void ***v178; // [rsp+80h] [rbp-178h]
  __int64 *v179; // [rsp+88h] [rbp-170h]
  unsigned int *v180; // [rsp+90h] [rbp-168h]
  unsigned int *v181; // [rsp+98h] [rbp-160h]
  __int64 v182; // [rsp+A0h] [rbp-158h] BYREF
  size_t v183; // [rsp+A8h] [rbp-150h]
  __int64 v184; // [rsp+B8h] [rbp-140h] BYREF
  unsigned int *v185; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v186; // [rsp+C8h] [rbp-130h]
  void **v187; // [rsp+D0h] [rbp-128h] BYREF
  __int64 v188; // [rsp+D8h] [rbp-120h]
  char v189; // [rsp+E0h] [rbp-118h] BYREF
  void *ptr; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v191; // [rsp+108h] [rbp-F0h]
  _QWORD v192[2]; // [rsp+110h] [rbp-E8h] BYREF
  char v193; // [rsp+120h] [rbp-D8h] BYREF
  void *v194; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v195; // [rsp+138h] [rbp-C0h]
  _BYTE v196[16]; // [rsp+140h] [rbp-B8h] BYREF
  __int16 v197; // [rsp+150h] [rbp-A8h]
  char v198; // [rsp+158h] [rbp-A0h]
  char v199; // [rsp+160h] [rbp-98h]
  __m128i v200; // [rsp+170h] [rbp-88h] BYREF
  void *v201; // [rsp+180h] [rbp-78h]
  __int64 v202; // [rsp+188h] [rbp-70h]
  char v203; // [rsp+190h] [rbp-68h] BYREF

  v174 = a1;
  v182 = a2;
  v183 = a3;
  v176 = &v200;
  v200 = 0u;
  v201 = &v203;
  v202 = 0x100000000LL;
  v7 = sub_2246EC0(&v182, "?*[{\\", 5, 0);
  v8 = v183;
  v9 = v182;
  v10 = v183;
  v200.m128i_i64[0] = v182;
  if ( v7 <= v183 )
    v10 = v7;
  v200.m128i_i64[1] = v10;
  if ( v7 != -1 )
  {
    v188 = 0x100000000LL;
    v11 = v183 - v10;
    v178 = &v187;
    v12 = v182 + v10 == 0;
    v13 = (unsigned int *)(v182 + v10);
    v182 = (__int64)v13;
    v183 = v11;
    v187 = (void **)&v189;
    if ( v12 )
    {
      v15 = v196;
      v195 = 0;
      v14 = v196;
      v194 = v196;
      v196[0] = 0;
    }
    else
    {
      v194 = v196;
      sub_22243F0(&v194, v13, v9 + v8);
      v14 = v194;
      v15 = (char *)v194 + v195;
    }
    ptr = v192;
    v192[0] = &v193;
    v191 = 0x100000000LL;
    sub_2224330(v192, v14, (__int64)v15);
    LODWORD(v191) = v191 + 1;
    if ( v194 != v196 )
      operator delete(v194);
    if ( a5 )
    {
      if ( v11 )
      {
        v16 = v13;
        v17 = memchr(v13, 123, v11);
        if ( v17 )
        {
          if ( v17 - (_BYTE *)v13 != -1 )
          {
            v18 = 0;
            v19 = 0;
            v186 = 0;
            v180 = (unsigned int *)&v185;
            v185 = (unsigned int *)&v187;
            while ( 1 )
            {
              while ( 1 )
              {
                v20 = *((_BYTE *)v13 + v19);
                if ( v20 != 91 )
                  break;
                v21 = v19 + 2;
                if ( v11 <= v21
                  || (v16 = (unsigned int *)((char *)v13 + v21), v11 == v21)
                  || (v22 = memchr(v16, 93, v11 - v21)) == nullptr
                  || (v23 = v22 - (_BYTE *)v13, v23 == -1) )
                {
                  v24 = "invalid glob pattern, unmatched '['";
                  goto LABEL_26;
                }
                v19 = v23 + 1;
                if ( v11 == v23 + 1 )
                  goto LABEL_25;
              }
              if ( v20 != 123 )
              {
                switch ( v20 )
                {
                  case ',':
                    v61 = v19 + 1;
                    if ( v18 )
                    {
                      v62 = v5;
                      v63 = *(unsigned int *)(v18 + 24);
                      if ( v11 <= v5 )
                        v62 = v11;
                      v64 = v19 - v5;
                      v65 = (char *)v13 + v62;
                      if ( v64 > v11 - v62 )
                        v64 = v11 - v62;
                      if ( v63 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 28) )
                      {
                        v16 = (unsigned int *)(v18 + 16);
                        destc = (char *)v13 + v62;
                        v156 = v61;
                        sub_2237220(v18 + 16, v18 + 32, v63 + 1, 16);
                        v63 = *(unsigned int *)(v18 + 24);
                        v65 = destc;
                        v61 = v156;
                      }
                      v66 = (_QWORD *)(*(_QWORD *)(v18 + 16) + 16 * v63);
                      v5 = v61;
                      v66[1] = v64;
                      v19 = v61;
                      *v66 = v65;
                      ++*(_DWORD *)(v18 + 24);
                    }
                    else
                    {
                      ++v19;
                    }
                    goto LABEL_18;
                  case '}':
                    if ( !v18 )
                    {
                      ++v19;
                      goto LABEL_18;
                    }
                    v67 = *(unsigned int *)(v18 + 24);
                    if ( (_DWORD)v67 )
                    {
                      v68 = v5;
                      if ( v11 <= v5 )
                        v68 = v11;
                      v69 = (void *)(v19 - v5);
                      v70 = (void *)(v11 - v68);
                      v71 = (char *)v13 + v68;
                      v72 = v67 + 1;
                      if ( v19 - v5 > (unsigned __int64)v70 )
                        v69 = v70;
                      if ( v72 > *(unsigned int *)(v18 + 28) )
                      {
                        v16 = (unsigned int *)(v18 + 16);
                        destd = v69;
                        v158 = v71;
                        sub_2237220(v18 + 16, v18 + 32, v72, 16);
                        v67 = *(unsigned int *)(v18 + 24);
                        v69 = destd;
                        v71 = v158;
                      }
                      ++v19;
                      v73 = (_QWORD *)(*(_QWORD *)(v18 + 16) + 16 * v67);
                      *v73 = v71;
                      v73[1] = v69;
                      v74 = v19 - *(_QWORD *)v18;
                      ++*(_DWORD *)(v18 + 24);
                      *(_QWORD *)(v18 + 8) = v74;
                      v18 = 0;
                      goto LABEL_18;
                    }
                    v24 = "empty or singleton brace expansions are not supported";
                    break;
                  case '\\':
                    if ( v11 != v19 + 1 )
                    {
                      v19 += 2LL;
                      goto LABEL_18;
                    }
                    v24 = "invalid glob pattern, stray '\\'";
                    break;
                  default:
                    ++v19;
                    goto LABEL_18;
                }
                goto LABEL_26;
              }
              if ( v18 )
              {
                v24 = "nested brace expansions are not supported";
                goto LABEL_26;
              }
              if ( HIDWORD(v186) > (unsigned int)v186 )
              {
                v59 = &v185[16 * (unsigned __int64)(unsigned int)v186];
                *(_OWORD *)v59 = 0;
                *((_QWORD *)v59 + 2) = v59 + 8;
                v60 = v185;
                *((_OWORD *)v59 + 2) = 0;
                *((_OWORD *)v59 + 3) = 0;
                *((_QWORD *)v59 + 3) = 0x200000000LL;
                LODWORD(v186) = v186 + 1;
                v18 = (unsigned __int64)&v60[16 * (unsigned __int64)(unsigned int)v186 - 16];
                goto LABEL_83;
              }
              v16 = v180;
              v77 = sub_2237400(v180, v180 + 4, 0, 64, &v194);
              v155 = (unsigned int *)v77;
              v78 = v77 + ((unsigned __int64)(unsigned int)v186 << 6);
              *(_OWORD *)v78 = 0;
              v79 = (unsigned int)v186;
              v80 = v185;
              *(_OWORD *)(v78 + 32) = 0;
              v81 = v79 << 6;
              *(_OWORD *)(v78 + 48) = 0;
              v82 = (unsigned int *)((char *)v80 + v81);
              *(_QWORD *)(v78 + 16) = v78 + 32;
              *(_QWORD *)(v78 + 24) = 0x200000000LL;
              if ( v80 == (unsigned int *)((char *)v80 + v81) )
                goto LABEL_127;
              dest = v13;
              v83 = v11;
              v84 = (char *)v80 + v81;
              v85 = (char *)v80;
              v166 = v19;
              do
              {
                while ( 1 )
                {
                  *(_QWORD *)v77 = *(_QWORD *)v85;
                  v86 = *((_BYTE **)v85 + 1);
                  *(_DWORD *)(v77 + 24) = 0;
                  *(_QWORD *)(v77 + 8) = v86;
                  v87 = (unsigned int *)(v77 + 32);
                  *(_DWORD *)(v77 + 28) = 2;
                  v88 = *((_DWORD *)v85 + 6);
                  *(_QWORD *)(v77 + 16) = v77 + 32;
                  if ( v88 )
                  {
                    v16 = (unsigned int *)(v77 + 16);
                    if ( (char *)(v77 + 16) != v85 + 16 )
                      break;
                  }
LABEL_118:
                  v85 += 64;
                  v77 += 64;
                  if ( v84 == v85 )
                    goto LABEL_123;
                }
                v89 = *((char **)v85 + 2);
                v90 = v85 + 32;
                if ( v89 == v85 + 32 )
                {
                  v95 = 16LL * v88;
                  if ( v88 <= 2uLL
                    || (sub_2237220(v16, v77 + 32, v88, 16),
                        v87 = *(unsigned int **)(v77 + 16),
                        v90 = *((_BYTE **)v85 + 2),
                        (v95 = 16LL * *((unsigned int *)v85 + 6)) != 0) )
                  {
                    v16 = v87;
                    memcpy(v87, v90, v95);
                  }
                  *(_DWORD *)(v77 + 24) = v88;
                  *((_DWORD *)v85 + 6) = 0;
                  goto LABEL_118;
                }
                *(_DWORD *)(v77 + 24) = v88;
                v91 = *((_DWORD *)v85 + 7);
                v85 += 64;
                v77 += 64;
                *(_QWORD *)(v77 - 48) = v89;
                *(_DWORD *)(v77 - 36) = v91;
                *((_QWORD *)v85 - 6) = v90;
                *((_DWORD *)v85 - 9) = 0;
                *((_DWORD *)v85 - 10) = 0;
              }
              while ( v84 != v85 );
LABEL_123:
              v92 = v185;
              v11 = v83;
              v19 = v166;
              v13 = dest;
              v93 = (unsigned __int64)(unsigned int)v186 << 6;
              v82 = (unsigned int *)((char *)v185 + v93);
              if ( v185 != (unsigned int *)((char *)v185 + v93) )
              {
                do
                {
                  while ( 1 )
                  {
                    v82 -= 16;
                    v16 = *((unsigned int **)v82 + 2);
                    if ( v16 == v82 + 8 )
                      break;
                    free(v16);
                    if ( v82 == v92 )
                      goto LABEL_126;
                  }
                }
                while ( v82 != v92 );
LABEL_126:
                v82 = v185;
              }
LABEL_127:
              v94 = (int)v194;
              if ( v82 != v180 + 4 )
              {
                v16 = v82;
                free(v82);
              }
              HIDWORD(v186) = v94;
              v185 = v155;
              LODWORD(v186) = v186 + 1;
              v18 = (unsigned __int64)&v155[16 * (unsigned __int64)(unsigned int)v186 - 16];
LABEL_83:
              *(_QWORD *)v18 = v19++;
              v5 = v19;
LABEL_18:
              if ( v11 == v19 )
              {
LABEL_25:
                v24 = "incomplete brace expansion";
                if ( v18 )
                {
LABEL_26:
                  v194 = v24;
                  v197 = 259;
                  v25 = std::_V2::generic_category((std::_V2 *)v16);
                  v26 = (void *)operator new(0x40u);
                  sub_2220590((__int64)v26, (__int64)&v194, 22, v25);
                  v199 |= 1u;
                  v194 = v26;
                  goto LABEL_27;
                }
                v181 = v185;
                v98 = &v185[16 * (unsigned __int64)(unsigned int)v186];
                v175 = v98;
                if ( v185 != v98 )
                {
                  v99 = v185[6];
                  v16 = v185 + 16;
                  v100 = 1;
                  while ( 1 )
                  {
                    v100 *= v99;
                    if ( v98 == v16 )
                      break;
                    v99 = v16[6];
                    v101 = (v16[6] * (unsigned __int128)v100) >> 64 != 0;
                    v16 += 16;
                    if ( v101 )
                    {
                      if ( a4 != -1 )
                        goto LABEL_252;
LABEL_142:
                      while ( 1 )
                      {
                        v194 = v196;
                        v195 = 0x100000000LL;
                        sub_E7C0E0((__int64)&ptr, (__int64)&v194);
                        v102 = (void **)v194;
                        v103 = *((_QWORD *)v175 - 6);
                        v177 = v103 + 16LL * *(v175 - 10);
                        if ( v103 != v177 )
                          break;
                        v137 = (void **)((char *)v194 + 32 * (unsigned int)v195);
LABEL_198:
                        if ( v102 != v137 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v137 -= 4;
                              if ( *v137 == v137 + 2 )
                                break;
                              operator delete(*v137);
                              if ( v137 == v102 )
                                goto LABEL_201;
                            }
                          }
                          while ( v137 != v102 );
LABEL_201:
                          v137 = (void **)v194;
                        }
                        if ( v137 == (void **)v196 )
                        {
                          v175 -= 16;
                          if ( v181 == v175 )
                            goto LABEL_204;
                        }
                        else
                        {
                          free(v137);
                          v175 -= 16;
                          if ( v181 == v175 )
                            goto LABEL_204;
                        }
                      }
                      v157 = v103;
                      v104 = (unsigned int)v195;
                      v179 = &v184;
                      while ( 1 )
                      {
                        v105 = *(_BYTE **)v157;
                        v106 = *(_QWORD *)(v157 + 8);
                        v172 = &v102[4 * v104];
                        if ( v172 != v102 )
                          break;
                        v137 = v102;
LABEL_197:
                        v157 += 16;
                        if ( v177 == v157 )
                          goto LABEL_198;
                      }
                      v153 = v102;
                      v173 = v106 != 0 && v105 != nullptr;
                      while ( 2 )
                      {
                        v113 = *v153;
                        v114 = (__int64)v153[1] + (_QWORD)*v153;
                        if ( HIDWORD(v191) <= (unsigned int)v191 )
                        {
                          v138 = (__m128i *)sub_2237400(&ptr, v192, 0, 32, v179);
                          v139 = &v138[2 * (unsigned int)v191];
                          v139->m128i_i64[0] = (__int64)v139[1].m128i_i64;
                          sub_22243F0(v139, v113, v114);
                          v140 = (void **)((char *)ptr + 32 * (unsigned int)v191);
                          if ( ptr != v140 )
                          {
                            v141 = (const __m128i *)((char *)ptr + 16);
                            v142 = v138;
                            v143 = (unsigned __int64)v138[2].m128i_u64
                                 + ((32LL * (unsigned int)v191 - 32) & 0xFFFFFFFFFFFFFFE0LL);
                            do
                            {
                              v142->m128i_i64[0] = (__int64)v142[1].m128i_i64;
                              v144 = (const __m128i *)v141[-1].m128i_i64[0];
                              if ( v144 == v141 )
                              {
                                v142[1] = _mm_loadu_si128(v141);
                              }
                              else
                              {
                                v142->m128i_i64[0] = (__int64)v144;
                                v142[1].m128i_i64[0] = v141->m128i_i64[0];
                              }
                              v142 += 2;
                              v142[-2].m128i_i64[1] = v141[-1].m128i_i64[1];
                              v141[-1].m128i_i64[0] = (__int64)v141;
                              v141 += 2;
                              v141[-3].m128i_i64[1] = 0;
                              v141[-2].m128i_i8[0] = 0;
                            }
                            while ( v142 != (__m128i *)v143 );
                            v145 = (void **)ptr;
                            v140 = (void **)((char *)ptr + 32 * (unsigned int)v191);
                            if ( ptr != v140 )
                            {
                              do
                              {
                                while ( 1 )
                                {
                                  v140 -= 4;
                                  if ( *v140 == v140 + 2 )
                                    break;
                                  operator delete(*v140);
                                  if ( v145 == v140 )
                                  {
                                    v140 = (void **)ptr;
                                    goto LABEL_216;
                                  }
                                }
                              }
                              while ( v145 != v140 );
                              v140 = (void **)ptr;
                            }
                          }
LABEL_216:
                          v146 = v184;
                          if ( v140 != v192 )
                            free(v140);
                          ptr = v138;
                          HIDWORD(v191) = v146;
                          LODWORD(v191) = v191 + 1;
                          v118 = &v138[2 * (unsigned int)v191 - 2];
                        }
                        else
                        {
                          v115 = (char *)ptr + 32 * (unsigned int)v191;
                          v116 = (__int64)v153[1] + (_QWORD)*v153;
                          v117 = *v153;
                          *v115 = v115 + 2;
                          sub_22243F0(v115, v117, v116);
                          LODWORD(v191) = v191 + 1;
                          v118 = (__m128i *)((char *)ptr + 32 * (unsigned int)v191 - 32);
                        }
                        v119 = v118->m128i_u64[1];
                        v120 = *((_QWORD *)v175 - 8);
                        v107 = v119 - v120;
                        if ( *((_QWORD *)v175 - 7) <= v119 - v120 )
                          v107 = *((_QWORD *)v175 - 7);
                        if ( v120 > v119 )
                          std::__throw_out_of_range_fmt(
                            "%s: __pos (which is %zu) > this->size() (which is %zu)",
                            "basic_string::replace",
                            *((_QWORD *)v175 - 8),
                            v119);
                        if ( v106 > v107 + 0x7FFFFFFFFFFFFFFFLL - v119 )
                          std::__throw_length_error("basic_string::_M_replace");
                        v121 = (_BYTE *)v118->m128i_i64[0];
                        v108 = v119 - v120 - v107;
                        v122 = v106 + v119 - v107;
                        if ( (__m128i *)v118->m128i_i64[0] == &v118[1] )
                        {
                          v123 = 15;
                          if ( v122 <= 0xF )
                            goto LABEL_166;
                        }
                        else
                        {
                          v123 = v118[1].m128i_u64[0];
                          if ( v122 <= v123 )
                          {
LABEL_166:
                            v124 = &v121[v120];
                            v125 = v119 - v120 != v107 && v106 != v107;
                            if ( v121 > v105 || v105 > &v121[v119] )
                            {
                              if ( v125 )
                              {
                                v126 = &v124[v107];
                                v127 = &v124[v106];
                                if ( v108 == 1 )
                                  *v127 = *v126;
                                else
                                  memmove(v127, v126, v108);
                              }
                              if ( !v106 )
                                goto LABEL_173;
                              if ( v106 != 1 )
                              {
                                memcpy(v124, v105, v106);
                                goto LABEL_173;
                              }
                              goto LABEL_219;
                            }
                            if ( v106 <= v107 && v106 )
                            {
                              if ( v106 != 1 )
                              {
                                n = v108;
                                desta = (char *)v107;
                                memmove(v124, v105, v106);
                                v107 = (size_t)desta;
                                v108 = n;
                                if ( v125 )
                                {
                                  v109 = &desta[(_QWORD)v124];
                                  v110 = &v124[v106];
                                  if ( n != 1 )
                                    goto LABEL_152;
LABEL_177:
                                  *v110 = *v109;
                                  goto LABEL_153;
                                }
                                goto LABEL_173;
                              }
                              *v124 = *v105;
                            }
                            if ( v125 )
                            {
                              v109 = &v124[v107];
                              v110 = &v124[v106];
                              if ( v108 == 1 )
                                goto LABEL_177;
LABEL_152:
                              deste = (void *)v107;
                              memmove(v110, v109, v108);
                              v107 = (size_t)deste;
                            }
LABEL_153:
                            if ( v106 <= v107 )
                            {
LABEL_173:
                              v112 = (_BYTE *)v118->m128i_i64[0];
                              goto LABEL_157;
                            }
                            v111 = &v124[v107];
                            if ( &v124[v107] >= &v105[v106] )
                            {
                              if ( v106 != 1 )
                              {
                                memmove(v124, v105, v106);
                                v112 = (_BYTE *)v118->m128i_i64[0];
                                goto LABEL_157;
                              }
LABEL_219:
                              *v124 = *v105;
                              v112 = (_BYTE *)v118->m128i_i64[0];
LABEL_157:
                              v118->m128i_i64[1] = v122;
                              v153 += 4;
                              v112[v122] = 0;
                              if ( v172 == v153 )
                              {
                                v104 = (unsigned int)v195;
                                v102 = (void **)v194;
                                v137 = (void **)((char *)v194 + 32 * (unsigned int)v195);
                                goto LABEL_197;
                              }
                              continue;
                            }
                            if ( v105 >= v111 )
                            {
                              v147 = &v105[v106 - v107];
                              if ( v106 == 1 )
                                *v124 = *v147;
                              else
                                memcpy(v124, v147, v106);
                              v112 = (_BYTE *)v118->m128i_i64[0];
                              goto LABEL_157;
                            }
                            v148 = v111 - v105;
                            v149 = &v124[v106];
                            v150 = &v124[v148];
                            v151 = v106 - v148;
                            if ( v148 == 1 )
                            {
                              *v124 = *v105;
LABEL_237:
                              if ( v151 == 1 )
                                goto LABEL_245;
                              if ( !v151 )
                                goto LABEL_173;
                            }
                            else
                            {
                              if ( v148 )
                              {
                                destf = &v124[v148];
                                memmove(v124, v105, v148);
                                v149 = &v124[v106];
                                v150 = destf;
                                goto LABEL_237;
                              }
                              if ( v151 == 1 )
                              {
LABEL_245:
                                *v150 = *v149;
                                v112 = (_BYTE *)v118->m128i_i64[0];
                                goto LABEL_157;
                              }
                            }
                            memcpy(v150, v149, v151);
                            v112 = (_BYTE *)v118->m128i_i64[0];
                            goto LABEL_157;
                          }
                        }
                        break;
                      }
                      if ( (v122 & 0x8000000000000000LL) != 0LL )
                        std::__throw_length_error("basic_string::_M_create");
                      destb = 2 * v123;
                      if ( v122 < 2 * v123 )
                      {
                        v128 = 2 * v123 + 1;
                        if ( (v123 & 0x4000000000000000LL) != 0 )
                        {
                          v128 = 0x8000000000000000LL;
                          destb = 0x7FFFFFFFFFFFFFFFLL;
                        }
                      }
                      else
                      {
                        destb = v106 + v119 - v107;
                        v128 = v122 + 1;
                      }
                      v170 = v119 - v120 - v107;
                      v168 = v107;
                      v129 = (_BYTE *)operator new(v128);
                      v130 = v168;
                      v131 = v170;
                      v112 = v129;
                      if ( v120 )
                      {
                        v132 = (_BYTE *)v118->m128i_i64[0];
                        if ( v120 == 1 )
                        {
                          *v129 = *v132;
                        }
                        else
                        {
                          memcpy(v129, v132, v120);
                          v131 = v170;
                          v130 = v168;
                        }
                      }
                      if ( v173 )
                      {
                        v133 = &v112[v120];
                        if ( v106 == 1 )
                        {
                          *v133 = *v105;
                        }
                        else
                        {
                          v171 = v131;
                          v169 = v130;
                          memcpy(v133, v105, v106);
                          v131 = v171;
                          v130 = v169;
                        }
                      }
                      v134 = (__m128i *)v118->m128i_i64[0];
                      if ( v131 )
                      {
                        v135 = &v134->m128i_i8[v120 + v130];
                        v136 = &v112[v106 + v120];
                        if ( v131 == 1 )
                          *v136 = *v135;
                        else
                          memcpy(v136, v135, v131);
                        v134 = (__m128i *)v118->m128i_i64[0];
                      }
                      if ( &v118[1] != v134 )
                        operator delete(v134);
                      v118->m128i_i64[0] = (__int64)v112;
                      v118[1].m128i_i64[0] = destb;
                      goto LABEL_157;
                    }
                  }
                  if ( a4 >= v100 )
                    goto LABEL_142;
                  goto LABEL_252;
                }
                if ( !a4 )
                {
LABEL_252:
                  v24 = "too many brace expansions";
                  goto LABEL_26;
                }
LABEL_204:
                v199 &= ~1u;
                v194 = v196;
                v195 = 0x100000000LL;
                if ( (_DWORD)v191 )
                  sub_CEFDD0((__int64)&v194, (__int64)&ptr);
LABEL_27:
                v27 = v185;
                v28 = &v185[16 * (unsigned __int64)(unsigned int)v186];
                if ( v185 != v28 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v28 -= 16;
                      v29 = *((unsigned int **)v28 + 2);
                      if ( v29 == v28 + 8 )
                        break;
                      free(v29);
                      if ( v27 == v28 )
                        goto LABEL_30;
                    }
                  }
                  while ( v27 != v28 );
LABEL_30:
                  v28 = v185;
                }
                if ( v28 != v180 + 4 )
                  free(v28);
LABEL_109:
                v75 = (void **)ptr;
                v76 = (void **)((char *)ptr + 32 * (unsigned int)v191);
                while ( v75 != v76 )
                {
                  while ( 1 )
                  {
                    v76 -= 4;
                    if ( *v76 == v76 + 2 )
                      break;
                    operator delete(*v76);
                    if ( v75 == v76 )
                      goto LABEL_35;
                  }
                }
                goto LABEL_35;
              }
            }
          }
        }
      }
    }
    v199 &= ~1u;
    v194 = v196;
    v195 = 0x100000000LL;
    if ( (_DWORD)v191 )
    {
      sub_CEFDD0((__int64)&v194, (__int64)&ptr);
      goto LABEL_109;
    }
LABEL_35:
    if ( ptr != v192 )
      free(ptr);
    if ( (v199 & 1) != 0 || (sub_CEFDD0((__int64)v178, (__int64)&v194), (v199 & 1) != 0) )
    {
      v30 = v194;
      v194 = nullptr;
      sub_10DFE60((void ***)&v194);
      if ( v30 )
      {
        v31 = (_QWORD *)v174;
        *(_BYTE *)(v174 + 72) |= 1u;
        *v31 = v30;
LABEL_40:
        v32 = v187;
        v33 = &v187[4 * (unsigned int)v188];
        if ( v187 != v33 )
        {
          do
          {
            while ( 1 )
            {
              v33 -= 4;
              if ( *v33 == v33 + 2 )
                break;
              operator delete(*v33);
              if ( v32 == v33 )
                goto LABEL_43;
            }
          }
          while ( v32 != v33 );
LABEL_43:
          v33 = v187;
        }
        if ( v33 != (void **)(v178 + 2) )
          free(v33);
        goto LABEL_46;
      }
    }
    else
    {
      sub_10DFE60((void ***)&v194);
    }
    v45 = v187;
    v46 = &v187[4 * (unsigned int)v188];
    m128i_i64 = v176[1].m128i_i64;
    if ( v187 == v46 )
    {
LABEL_68:
      v47 = (__m128i *)v174;
      v48 = v202;
      v49 = _mm_load_si128(&v200);
      v50 = v174 + 32;
      *(_BYTE *)(v174 + 72) &= ~1u;
      v47[1].m128i_i64[0] = v50;
      *v47 = v49;
      v47[1].m128i_i64[1] = 0x100000000LL;
      if ( v48 )
        sub_22255F0((char **)(v174 + 16), (char **)&v176[1]);
    }
    else
    {
      while ( 1 )
      {
        sub_2224ED0((__int64)&v194, (__int64)*v45, (unsigned __int64)v45[1]);
        if ( (v198 & 1) != 0 )
          break;
        v52 = v201;
        v53 = &v194;
        v54 = (unsigned int)v202 + 1LL;
        v55 = (char *)v201 + 40 * (unsigned int)v202;
        if ( v54 > HIDWORD(v202) )
        {
          if ( v201 > &v194 || v55 <= (char *)&v194 )
          {
            sub_2225440(m128i_i64, v54);
            v53 = &v194;
            v55 = (char *)v201 + 40 * (unsigned int)v202;
          }
          else
          {
            sub_2225440(m128i_i64, v54);
            v53 = (void **)((char *)v201 + (char *)&v194 - v52);
            v55 = (char *)v201 + 40 * (unsigned int)v202;
          }
        }
        *((_QWORD *)v55 + 1) = 0;
        v56 = *((_DWORD *)v53 + 2);
        v57 = (void **)(v55 + 16);
        *(_QWORD *)v55 = v55 + 16;
        if ( v56 )
        {
          sub_2225DA0((__int64)v55, (__int64 *)v53);
          v57 = (void **)(v55 + 16);
        }
        *(_OWORD *)(v55 + 24) = 0;
        v51 = v53[3];
        *((_QWORD *)v55 + 2) = v55 + 40;
        if ( v51 && v57 != v53 + 2 )
        {
          sub_2236E10(v57, v55 + 40, v51, 1);
          v58 = (size_t)v53[3];
          if ( v58 )
            memcpy(*((void **)v55 + 2), v53[2], v58);
          *((_QWORD *)v55 + 3) = v51;
        }
        v45 += 4;
        LODWORD(v202) = v202 + 1;
        sub_2224700((__int64)&v194);
        if ( v46 == v45 )
          goto LABEL_68;
      }
      v96 = (_QWORD *)v174;
      v97 = v194;
      v194 = nullptr;
      *(_BYTE *)(v174 + 72) |= 1u;
      *v96 = v97;
      sub_2224700((__int64)&v194);
    }
    goto LABEL_40;
  }
  v41 = (__m128i *)v174;
  v42 = v202;
  v43 = _mm_load_si128(&v200);
  v44 = v174 + 32;
  *(_BYTE *)(v174 + 72) &= ~1u;
  *v41 = v43;
  v41[1].m128i_i64[0] = v44;
  v41[1].m128i_i64[1] = 0x100000000LL;
  if ( !v42 )
    goto LABEL_56;
  sub_22255F0((char **)(v174 + 16), (char **)&v176[1]);
LABEL_46:
  v34 = (char *)v201;
  v35 = (char *)v201 + 40 * (unsigned int)v202;
  while ( v34 != v35 )
  {
    while ( 1 )
    {
      v35 -= 40;
      v36 = *((char **)v35 + 2);
      if ( v36 != v35 + 40 )
        free(v36);
      v37 = *(char **)v35;
      v38 = *(_QWORD *)v35 + 80LL * *((unsigned int *)v35 + 2);
      if ( *(_QWORD *)v35 != v38 )
      {
        do
        {
          while ( 1 )
          {
            v38 -= 80;
            v39 = *(void **)(v38 + 8);
            if ( v39 == (void *)(v38 + 24) )
              break;
            free(v39);
            if ( v37 == (char *)v38 )
              goto LABEL_53;
          }
        }
        while ( v37 != (char *)v38 );
LABEL_53:
        v37 = *(char **)v35;
      }
      if ( v37 == v35 + 16 )
        break;
      free(v37);
      if ( v34 == v35 )
        goto LABEL_56;
    }
  }
LABEL_56:
  if ( v201 != &v176[2] )
    free(v201);
  return v174;
}
