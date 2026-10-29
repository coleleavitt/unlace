__int64 __fastcall sub_1EF7120(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r15
  __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 *v6; // rsi
  int v7; // edx
  char *v8; // rax
  __int64 v9; // rdx
  int v10; // ebp
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // r14
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // r13
  _DWORD *k; // rdx
  __int64 v25; // r12
  int v26; // ebp
  __int64 v27; // r14
  int v28; // eax
  __int64 v29; // r8
  unsigned int v30; // eax
  int m; // r9d
  __int64 v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // r12
  unsigned int v35; // r13d
  int v36; // eax
  char *v37; // rdx
  unsigned int j; // eax
  unsigned __int64 v39; // rcx
  int v40; // eax
  __m128i *v41; // rdx
  unsigned int v42; // ebx
  unsigned __int64 v43; // rbp
  __int64 v44; // r13
  __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  __int64 *v47; // r12
  __int64 v48; // rbx
  __int64 v49; // rax
  _QWORD *v50; // rbx
  unsigned __int64 v51; // r12
  _QWORD *v52; // rax
  char *v53; // rbx
  __int64 v54; // rax
  char *v55; // rdi
  __int64 v56; // rsi
  char *v57; // rax
  int v58; // ebp
  int v59; // eax
  bool v60; // zf
  int v61; // ecx
  __int64 *v62; // r13
  unsigned __int64 v63; // r14
  unsigned int v64; // edi
  int v65; // eax
  __int64 *v66; // rsi
  __int64 v67; // rcx
  unsigned __int64 v68; // rdi
  __int64 v69; // rdi
  char *v70; // rax
  char *v71; // r8
  __int64 v72; // rbx
  __int64 *v73; // r10
  unsigned int v74; // ebp
  size_t v75; // rdx
  char *v76; // rax
  __int64 *v77; // rax
  unsigned int v78; // r9d
  __int64 v79; // rcx
  int v80; // edx
  char *v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rdx
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdi
  int v88; // r9d
  __int64 *v89; // r11
  unsigned __int64 v90; // r13
  int v91; // ecx
  __int64 *v92; // rsi
  __int64 v93; // rax
  unsigned __int64 v94; // rbp
  __int64 v95; // r12
  __int64 v96; // rcx
  __int64 v97; // rdx
  unsigned __int64 v98; // rdi
  unsigned __int64 v99; // rdi
  __int64 v100; // rdi
  char *v101; // rax
  char *v102; // r8
  __int64 v103; // r10
  __int64 *v104; // rbp
  unsigned int v105; // ebx
  size_t v106; // rdx
  char *v107; // rax
  __int64 *v108; // rax
  unsigned int v109; // r9d
  int v110; // edx
  char *v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rdx
  __int64 v114; // rcx
  int v115; // r9d
  __int64 *v116; // r11
  __int64 *v117; // r10
  int v118; // edi
  int v119; // eax
  __int64 v120; // rcx
  unsigned __int64 v121; // rdx
  unsigned __int64 v122; // rdi
  __int64 v123; // rdi
  char *v124; // rax
  char *v125; // rcx
  __int64 v126; // rbx
  __int64 *v127; // r13
  unsigned int v128; // r14d
  size_t v129; // rdx
  __int64 *v130; // rax
  unsigned int v131; // r8d
  __int64 v132; // r11
  int v133; // edx
  char *v134; // rsi
  __int64 v135; // rdi
  __int64 v136; // rdx
  int v137; // ecx
  __int64 v138; // rdi
  int v139; // edx
  __int64 *v140; // r10
  unsigned __int64 v141; // rdi
  unsigned __int64 v142; // rdx
  __int64 v143; // rdi
  char *v144; // rax
  char *v145; // rcx
  __int64 v146; // r9
  __int64 *v147; // rbx
  unsigned int v148; // r14d
  size_t v149; // rdx
  char *v150; // rax
  __int64 *v151; // rax
  unsigned int v152; // r8d
  __int64 v153; // r10
  int v154; // edx
  char *v155; // rsi
  __int64 v156; // rdi
  __int64 v157; // rdx
  int v158; // r13d
  __int64 v159; // rcx
  int v160; // edx
  __int64 *v161; // r9
  size_t v162; // rdx
  size_t v163; // rdx
  char *v164; // rsi
  __int64 *v165; // rdi
  char *v166; // rsi
  size_t v168; // rdx
  size_t v169; // rdx
  int v170; // eax
  __m128i v171; // xmm1
  char *v172; // rax
  char *v173; // r11
  char *v174; // r11
  int v175; // r9d
  char *v176; // r10
  char *v177; // r11
  __m128i v178; // xmm2
  void *v179; // rdi
  __int64 v180; // rdx
  _DWORD *n; // rdx
  int v182; // eax
  unsigned __int64 v183; // rax
  _DWORD *v184; // rax
  __int64 v185; // rdx
  unsigned __int64 v186; // r13
  _DWORD *ii; // rdx
  int v188; // ebp
  __int64 v189; // r14
  int v190; // eax
  __int64 v191; // r8
  unsigned int v192; // eax
  int jj; // r9d
  __int64 v194; // rdi
  unsigned int v195; // eax
  __m128i v196; // xmm3
  void *v197; // rdi
  __int64 v198; // rdx
  _DWORD *kk; // rdx
  __int64 v200; // rdx
  __int64 v201; // rdx
  __int64 v202; // rax
  unsigned __int64 v203; // [rsp+8h] [rbp-120h]
  char *v204; // [rsp+8h] [rbp-120h]
  int v205; // [rsp+10h] [rbp-118h]
  __int64 v206; // [rsp+10h] [rbp-118h]
  int v207; // [rsp+10h] [rbp-118h]
  __int64 v208; // [rsp+18h] [rbp-110h]
  unsigned int v209; // [rsp+20h] [rbp-108h]
  __int64 v210; // [rsp+20h] [rbp-108h]
  __int64 v211; // [rsp+28h] [rbp-100h]
  __int64 *v212; // [rsp+30h] [rbp-F8h]
  __int64 *v213; // [rsp+38h] [rbp-F0h]
  __int64 v214; // [rsp+50h] [rbp-D8h]
  int v215; // [rsp+50h] [rbp-D8h]
  int v216; // [rsp+50h] [rbp-D8h]
  __int64 *i; // [rsp+58h] [rbp-D0h]
  __int64 *v218; // [rsp+60h] [rbp-C8h]
  __int64 *v219; // [rsp+68h] [rbp-C0h]
  char *v221; // [rsp+88h] [rbp-A0h] BYREF
  __m128i v222; // [rsp+90h] [rbp-98h] BYREF
  __m128 v223; // [rsp+A0h] [rbp-88h] BYREF
  char *v224; // [rsp+B0h] [rbp-78h] BYREF
  int v225; // [rsp+B8h] [rbp-70h]
  int v226; // [rsp+BCh] [rbp-6Ch]
  __int64 *v227; // [rsp+C0h] [rbp-68h]
  char *v228; // [rsp+D0h] [rbp-58h] BYREF
  char *v229; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v230; // [rsp+E0h] [rbp-48h]
  unsigned int v231; // [rsp+E8h] [rbp-40h]

  v1 = sub_1EB3FD0(a1);
  v2 = v1;
  if ( !v1 )
  {
    v202 = operator new(0x30u);
    *(_QWORD *)v202 = 0;
    v2 = v202;
    *(_QWORD *)(v202 + 8) = 0;
    *(_QWORD *)(v202 + 16) = 0;
    *(_QWORD *)(v202 + 24) = 0;
    *(_QWORD *)(v202 + 32) = 0;
    *(_DWORD *)(v202 + 40) = 0;
    v1 = sub_1EB3FD0(a1);
  }
  v3 = sub_1EAA820(a1, v1 != 0);
  v219 = v4;
  for ( i = (__int64 *)v3; v219 != i; ++i )
  {
    v5 = *i;
    v225 = 0;
    v5 &= 0xFFFFFFFFFFFFFFF8LL;
    v6 = (__int64 *)(v5 + 32);
    v7 = *(_DWORD *)(v5 + 12);
    v212 = (__int64 *)v5;
    v8 = *(char **)(v5 + 48);
    v213 = v6;
    v226 = v7;
    v224 = v8;
    v227 = v6;
    if ( v7 )
    {
      v208 = v2;
      v9 = 6;
      v218 = (__int64 *)(v2 + 24);
      while ( 2 )
      {
        v221 = &v8[v9];
        v10 = sub_1EA7E80(&v221);
        v11 = sub_1EA7E80(&v221);
        v228 = v221;
        v222.m128i_i32[0] = sub_1EF5660(v213, &v228);
        v222.m128i_i64[1] = v15;
        v16 = *(_DWORD *)(v208 + 40);
        if ( !v16 )
        {
          v228 = nullptr;
          v17 = v208;
          goto LABEL_8;
        }
        v34 = *(_QWORD *)(v208 + 24);
        v35 = v16 - 1;
        v36 = sub_1EADE10((__int64)&v222);
        v13 = 1;
        v37 = nullptr;
        for ( j = v35 & v36; ; j = v35 & v40 )
        {
          v39 = v34 + ((unsigned __int64)j << 6);
          v14 = *(unsigned int *)v39;
          if ( v222.m128i_i32[0] == (_DWORD)v14 && v222.m128i_i64[1] == *(_QWORD *)(v39 + 8) )
          {
            v41 = (__m128i *)(v39 + 16);
            goto LABEL_27;
          }
          if ( (_DWORD)v14 == -1 )
            break;
LABEL_24:
          v40 = v13 + j;
          v13 = (unsigned int)(v13 + 1);
        }
        v14 = *(_QWORD *)(v39 + 8);
        if ( v14 != 1 )
        {
          if ( v14 == 2 && !v37 )
            v37 = (char *)(v34 + ((unsigned __int64)j << 6));
          goto LABEL_24;
        }
        if ( !v37 )
          v37 = (char *)(v34 + ((unsigned __int64)j << 6));
        v16 = *(_DWORD *)(v208 + 40);
        v182 = *(_DWORD *)(v208 + 32);
        v228 = v37;
        v170 = v182 + 1;
        v12 = 3 * v16;
        if ( 4 * v170 >= (unsigned int)v12 )
        {
          v17 = v208;
LABEL_8:
          v18 = *(_QWORD *)(v17 + 24);
          v19 = (((((((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
                  | (2 * v16 - 1)
                  | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 4)
                | (((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
                | (2 * v16 - 1)
                | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 8)
              | (((((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
                | (2 * v16 - 1)
                | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 4)
              | (((2 * v16 - 1) | ((unsigned __int64)(2 * v16 - 1) >> 1)) >> 2)
              | (2 * v16 - 1)
              | ((unsigned __int64)(2 * v16 - 1) >> 1);
          v20 = ((v19 >> 16) | v19) + 1;
          if ( (unsigned int)v20 < 0x40 )
            LODWORD(v20) = 64;
          *(_DWORD *)(v17 + 40) = v20;
          v21 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v20 << 6, 8, 64, v12, v13, v14);
          *(_QWORD *)(v17 + 24) = v21;
          if ( v18 )
          {
            v22 = *(unsigned int *)(v208 + 40);
            v203 = (unsigned __int64)v16 << 6;
            v23 = v18 + v203;
            *(_QWORD *)(v208 + 32) = 0;
            for ( k = &v21[16 * v22]; k != v21; *((_QWORD *)v21 - 7) = 1 )
            {
              *v21 = -1;
              v21 += 16;
            }
            v25 = v18;
            if ( v18 != v23 )
            {
              v205 = v10;
              v209 = v11;
              do
              {
                while ( 1 )
                {
                  if ( *(_DWORD *)v25 != -1 || (unsigned __int64)(*(_QWORD *)(v25 + 8) - 1LL) > 1 )
                  {
                    v26 = *(_DWORD *)(v208 + 40);
                    if ( !v26 )
                      goto LABEL_336;
                    v27 = *(_QWORD *)(v208 + 24);
                    v28 = sub_1EADE10(v25);
                    v29 = 0;
                    v30 = (v26 - 1) & v28;
                    for ( m = 1; ; ++m )
                    {
                      v32 = v27 + ((unsigned __int64)v30 << 6);
                      if ( *(_DWORD *)v25 == *(_DWORD *)v32 && *(_QWORD *)(v25 + 8) == *(_QWORD *)(v32 + 8) )
                        break;
                      if ( *(_DWORD *)v32 == -1 )
                      {
                        v200 = *(_QWORD *)(v32 + 8);
                        if ( v200 == 1 )
                        {
                          if ( v29 )
                            v32 = v29;
                          break;
                        }
                        if ( v200 == 2 && !v29 )
                          v29 = v27 + ((unsigned __int64)v30 << 6);
                      }
                      v33 = m + v30;
                      v30 = (v26 - 1) & v33;
                    }
                    v178 = _mm_loadu_si128((const __m128i *)v25);
                    *(_QWORD *)(v32 + 16) = v32 + 32;
                    *(__m128i *)v32 = v178;
                    *(_QWORD *)(v32 + 24) = 0x400000000LL;
                    if ( *(_DWORD *)(v25 + 24) )
                      sub_1EB3E90((char ***)(v32 + 16), (char ***)(v25 + 16));
                    v179 = *(void **)(v25 + 16);
                    ++*(_DWORD *)(v208 + 32);
                    if ( v179 != (void *)(v25 + 32) )
                      break;
                  }
                  v25 += 64;
                  if ( v23 == v25 )
                    goto LABEL_196;
                }
                free(v179);
                v25 += 64;
              }
              while ( v23 != v25 );
              goto LABEL_196;
            }
            goto LABEL_197;
          }
          v180 = *(unsigned int *)(v208 + 40);
          *(_QWORD *)(v208 + 32) = 0;
          for ( n = &v21[16 * v180]; n != v21; *((_QWORD *)v21 - 7) = 1 )
          {
            *v21 = -1;
            v21 += 16;
          }
LABEL_198:
          sub_1ED1910(v218, (__int64)&v222, &v228);
          v37 = v228;
          v170 = *(_DWORD *)(v208 + 32) + 1;
          goto LABEL_199;
        }
        v39 = v16 >> 3;
        if ( v16 - (v170 + *(_DWORD *)(v208 + 36)) <= (unsigned int)v39 )
        {
          v18 = *(_QWORD *)(v208 + 24);
          v183 = ((((((((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                      | (v16 - 1)
                      | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
                    | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                    | (v16 - 1)
                    | ((unsigned __int64)(v16 - 1) >> 1)) >> 8)
                  | (((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                    | (v16 - 1)
                    | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
                  | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                  | (v16 - 1)
                  | ((unsigned __int64)(v16 - 1) >> 1)) >> 16)
                | (((((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                    | (v16 - 1)
                    | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
                  | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                  | (v16 - 1)
                  | ((unsigned __int64)(v16 - 1) >> 1)) >> 8)
                | (((((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                  | (v16 - 1)
                  | ((unsigned __int64)(v16 - 1) >> 1)) >> 4)
                | (((v16 - 1) | ((unsigned __int64)(v16 - 1) >> 1)) >> 2)
                | (v16 - 1)
                | ((unsigned __int64)(v16 - 1) >> 1))
               + 1;
          if ( (unsigned int)v183 < 0x40 )
            LODWORD(v183) = 64;
          *(_DWORD *)(v208 + 40) = v183;
          v184 = (_DWORD *)sub_22300B0((unsigned __int64)(unsigned int)v183 << 6, 8, 64, v39, v13, 1);
          *(_QWORD *)(v208 + 24) = v184;
          if ( v18 )
          {
            v185 = *(unsigned int *)(v208 + 40);
            v203 = (unsigned __int64)v16 << 6;
            v186 = v18 + v203;
            *(_QWORD *)(v208 + 32) = 0;
            for ( ii = &v184[16 * v185]; ii != v184; *((_QWORD *)v184 - 7) = 1 )
            {
              *v184 = -1;
              v184 += 16;
            }
            v25 = v18;
            if ( v18 != v186 )
            {
              v205 = v10;
              v209 = v11;
              do
              {
                if ( *(_DWORD *)v25 != -1 || (unsigned __int64)(*(_QWORD *)(v25 + 8) - 1LL) > 1 )
                {
                  v188 = *(_DWORD *)(v208 + 40);
                  if ( !v188 )
                  {
LABEL_336:
                    *(__m128i *)&dword_0 = _mm_loadu_si128((const __m128i *)v25);
                    BUG();
                  }
                  v189 = *(_QWORD *)(v208 + 24);
                  v190 = sub_1EADE10(v25);
                  v191 = 0;
                  v192 = (v188 - 1) & v190;
                  for ( jj = 1; ; ++jj )
                  {
                    v194 = v189 + ((unsigned __int64)v192 << 6);
                    if ( *(_DWORD *)v25 == *(_DWORD *)v194 && *(_QWORD *)(v25 + 8) == *(_QWORD *)(v194 + 8) )
                      break;
                    if ( *(_DWORD *)v194 == -1 )
                    {
                      v201 = *(_QWORD *)(v194 + 8);
                      if ( v201 == 1 )
                      {
                        if ( v191 )
                          v194 = v191;
                        break;
                      }
                      if ( v201 == 2 && !v191 )
                        v191 = v189 + ((unsigned __int64)v192 << 6);
                    }
                    v195 = jj + v192;
                    v192 = (v188 - 1) & v195;
                  }
                  v196 = _mm_loadu_si128((const __m128i *)v25);
                  *(_QWORD *)(v194 + 16) = v194 + 32;
                  *(__m128i *)v194 = v196;
                  *(_QWORD *)(v194 + 24) = 0x400000000LL;
                  if ( *(_DWORD *)(v25 + 24) )
                    sub_1EB3E90((char ***)(v194 + 16), (char ***)(v25 + 16));
                  v197 = *(void **)(v25 + 16);
                  ++*(_DWORD *)(v208 + 32);
                  if ( v197 != (void *)(v25 + 32) )
                    free(v197);
                }
                v25 += 64;
              }
              while ( v186 != v25 );
LABEL_196:
              v10 = v205;
              v11 = v209;
            }
LABEL_197:
            operator delete(v18, v203, 8);
          }
          else
          {
            v198 = *(unsigned int *)(v208 + 40);
            *(_QWORD *)(v208 + 32) = 0;
            for ( kk = &v184[16 * v198]; kk != v184; *((_QWORD *)v184 - 7) = 1 )
            {
              *v184 = -1;
              v184 += 16;
            }
          }
          goto LABEL_198;
        }
LABEL_199:
        *(_DWORD *)(v208 + 32) = v170;
        if ( *(_DWORD *)v37 != -1 || *((_QWORD *)v37 + 1) != 1 )
          --*(_DWORD *)(v208 + 36);
        v171 = _mm_load_si128(&v222);
        v172 = v37 + 32;
        v41 = (__m128i *)(v37 + 16);
        v41->m128i_i64[0] = (__int64)v172;
        v41[-1] = v171;
        v41->m128i_i64[1] = 0x400000000LL;
LABEL_27:
        v228 = (char *)v41;
        v229 = nullptr;
        v230 = 0;
        v42 = v11 >> 3;
        v231 = 0;
        if ( v42 )
        {
          v204 = &v221[v10];
          v211 = (__int64)&v204[8 * v42];
          while ( 1 )
          {
            v43 = *(_QWORD *)v204;
            v204 += 8;
            v44 = v212[5];
            v45 = v212[4];
            v223.m128_u64[0] = v43;
            if ( v43 > 0x13 )
            {
              v94 = HIDWORD(v43);
              v95 = (unsigned int)sub_B8F2E0((__int64)&v223);
              if ( *(_QWORD *)(v44 + 856) )
                sub_1EDF870(v45, v44);
              if ( v94 )
                v44 = *(_QWORD *)(*(_QWORD *)(v44 + 3320) + 8LL * (unsigned int)(v94 - 1));
              else
                v95 = (unsigned int)(v95 - 20);
              v43 = v95 | ((unsigned __int64)(unsigned int)(*(_DWORD *)v44 + 1) << 32);
            }
            v46 = (unsigned int)v230;
            v47 = (__int64 *)v229;
            v48 = v231;
            if ( !(_DWORD)v230 )
            {
              v46 = (unsigned __int64)v228;
              v49 = *((unsigned int *)v228 + 2);
              if ( (_DWORD)v49 )
                break;
            }
LABEL_73:
            if ( !(_DWORD)v48 )
              goto LABEL_137;
            v46 = (unsigned int)(v48 - 1);
            v90 = ((0xBF58476D1CE4E5B9LL * v43) >> 31) ^ (0xBF58476D1CE4E5B9LL * v43);
            v91 = v90 & (v48 - 1);
            v92 = &v47[v91];
            v93 = *v92;
            if ( *v92 != v43 )
            {
              v118 = 1;
              v13 = 0;
              if ( v93 != -1 )
              {
                while ( 1 )
                {
                  if ( v93 == -2 && !v13 )
                    v13 = (__int64)v92;
                  v14 = (unsigned int)(v118 + 1);
                  v91 = v46 & (v118 + v91);
                  v92 = &v47[v91];
                  v93 = *v92;
                  if ( *v92 == v43 )
                    goto LABEL_75;
                  if ( v93 == -1 )
                    break;
                  ++v118;
                }
                if ( v13 )
                  v92 = (__int64 *)v13;
              }
              v39 = (unsigned int)(3 * v48);
              v119 = v230 + 1;
              if ( 4 * ((int)v230 + 1) >= (unsigned int)v39 )
              {
LABEL_137:
                v122 = (((((((unsigned int)(2 * v48 - 1) | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 2)
                         | (unsigned int)(2 * v48 - 1)
                         | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 4)
                       | (((unsigned int)(2 * v48 - 1) | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 2)
                       | (unsigned int)(2 * v48 - 1)
                       | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 8)
                     | (((((unsigned int)(2 * v48 - 1) | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 2)
                       | (unsigned int)(2 * v48 - 1)
                       | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 4)
                     | (((unsigned int)(2 * v48 - 1) | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 2)
                     | (unsigned int)(2 * v48 - 1)
                     | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1);
                v123 = ((v122 >> 16) | v122) + 1;
                if ( (unsigned int)v123 < 0x40 )
                  LODWORD(v123) = 64;
                v231 = v123;
                v124 = (char *)sub_22300B0(8LL * (unsigned int)v123, 8, v46, v39, v13, v14);
                v125 = v124;
                v229 = v124;
                if ( v47 )
                {
                  v126 = v48;
                  v230 = 0;
                  v127 = &v47[v126];
                  v128 = v231;
                  v129 = 8LL * v231;
                  if ( v124 != &v124[v129] )
                    v125 = (char *)memset(v124, 255, v129);
                  v130 = v47;
                  v131 = v128 - 1;
                  if ( v127 != v47 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v132 = *v130;
                        if ( (unsigned __int64)(*v130 + 2) > 1 )
                          break;
                        if ( v127 == ++v130 )
                          goto LABEL_149;
                      }
                      if ( !v128 )
                        break;
                      v133 = v131 & (((0xBF58476D1CE4E5B9LL * v132) >> 31) ^ (484763065 * v132));
                      v134 = &v125[8 * v133];
                      v135 = *(_QWORD *)v134;
                      if ( *(_QWORD *)v134 != v132 )
                      {
                        v175 = 1;
                        v176 = nullptr;
                        if ( v135 != -1 )
                        {
                          while ( 1 )
                          {
                            if ( !v176 && v135 == -2 )
                              v176 = v134;
                            v133 = v131 & (v175 + v133);
                            v134 = &v125[8 * v133];
                            v135 = *(_QWORD *)v134;
                            if ( v132 == *(_QWORD *)v134 )
                              break;
                            if ( v135 == -1 )
                            {
                              if ( v176 )
                                v134 = v176;
                              break;
                            }
                            ++v175;
                          }
                        }
                      }
                      v136 = *v130++;
                      LODWORD(v230) = v230 + 1;
                      *(_QWORD *)v134 = v136;
                      if ( v127 == v130 )
                        goto LABEL_149;
                    }
LABEL_338:
                    *(_QWORD *)&dword_0 = v132;
                    BUG();
                  }
LABEL_149:
                  operator delete(v47, v126 * 8, 8);
                  v47 = (__int64 *)v229;
                  v48 = v231;
                  v119 = v230 + 1;
                }
                else
                {
                  v230 = 0;
                  v48 = v231;
                  v168 = 8LL * v231;
                  if ( v124 == &v124[v168] )
                    v47 = (__int64 *)v124;
                  else
                    v47 = (__int64 *)memset(v124, 255, v168);
                  v119 = 1;
                }
                if ( !(_DWORD)v48 )
                  goto LABEL_175;
                v137 = (v48 - 1) & (((0xBF58476D1CE4E5B9LL * v43) >> 31) ^ (484763065 * v43));
                v92 = &v47[v137];
                v121 = v43;
                v138 = *v92;
                if ( *v92 == v43 )
                  goto LABEL_124;
                v139 = 1;
                v140 = nullptr;
                if ( v138 == -1 )
                  goto LABEL_153;
                while ( 1 )
                {
                  if ( v138 != -2 || v140 )
                    v92 = v140;
                  v137 = (v48 - 1) & (v139 + v137);
                  v138 = v47[v137];
                  if ( v138 == v43 )
                  {
                    v121 = v43;
                    v92 = &v47[v137];
                    goto LABEL_124;
                  }
                  if ( v138 == -1 )
                    break;
                  ++v139;
                  v140 = v92;
                  v92 = &v47[v137];
                }
                if ( v92 )
                  goto LABEL_123;
                v92 = &v47[v137];
LABEL_153:
                LODWORD(v230) = v119;
              }
              else
              {
                v120 = (unsigned int)v48 >> 3;
                if ( (int)v48 - (v119 + HIDWORD(v230)) > (unsigned int)v120 )
                  goto LABEL_123;
                v141 = ((((v46 | (v46 >> 1)) >> 2) | v46 | (v46 >> 1)) >> 4)
                     | ((v46 | (v46 >> 1)) >> 2)
                     | v46
                     | (v46 >> 1);
                v142 = v141 >> 8;
                v143 = (((v142 | v141) >> 16) | v142 | v141) + 1;
                if ( (unsigned int)v143 < 0x40 )
                  LODWORD(v143) = 64;
                v231 = v143;
                v144 = (char *)sub_22300B0(8LL * (unsigned int)v143, 8, v142, v120, v13, v14);
                v145 = v144;
                v229 = v144;
                if ( v47 )
                {
                  v146 = 8 * v48;
                  v230 = 0;
                  v147 = &v47[v48];
                  v148 = v231;
                  v149 = 8LL * v231;
                  if ( v144 != &v144[v149] )
                  {
                    v206 = v146;
                    v150 = (char *)memset(v144, 255, v149);
                    v146 = v206;
                    v145 = v150;
                  }
                  v151 = v47;
                  v152 = v148 - 1;
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v153 = *v151;
                      if ( (unsigned __int64)(*v151 + 2) > 1 )
                        break;
                      if ( v147 == ++v151 )
                        goto LABEL_165;
                    }
                    if ( !v148 )
                      break;
                    v154 = v152 & (((0xBF58476D1CE4E5B9LL * v153) >> 31) ^ (484763065 * v153));
                    v155 = &v145[8 * v154];
                    v156 = *(_QWORD *)v155;
                    if ( *(_QWORD *)v155 != v153 && v156 != -1 )
                    {
                      v207 = 1;
                      v177 = nullptr;
                      while ( 1 )
                      {
                        if ( !v177 && v156 == -2 )
                          v177 = v155;
                        v154 = v152 & (v207 + v154);
                        v155 = &v145[8 * v154];
                        v156 = *(_QWORD *)v155;
                        if ( v153 == *(_QWORD *)v155 )
                          break;
                        if ( v156 == -1 )
                        {
                          if ( v177 )
                            v155 = v177;
                          break;
                        }
                        ++v207;
                      }
                    }
                    v157 = *v151++;
                    LODWORD(v230) = v230 + 1;
                    *(_QWORD *)v155 = v157;
                    if ( v147 == v151 )
                    {
LABEL_165:
                      operator delete(v47, v146, 8);
                      v47 = (__int64 *)v229;
                      v48 = v231;
                      v119 = v230 + 1;
                      goto LABEL_166;
                    }
                  }
                  v132 = *v151;
                  goto LABEL_338;
                }
                v230 = 0;
                v48 = v231;
                v169 = 8LL * v231;
                if ( v144 == &v144[v169] )
                  v47 = (__int64 *)v144;
                else
                  v47 = (__int64 *)memset(v144, 255, v169);
                v119 = 1;
LABEL_166:
                if ( !(_DWORD)v48 )
                {
LABEL_175:
                  LODWORD(v230) = v230 + 1;
                  BUG();
                }
                v158 = (v48 - 1) & v90;
                v92 = &v47[v158];
                v121 = v43;
                v159 = *v92;
                if ( *v92 != v43 )
                {
                  v160 = 1;
                  v161 = nullptr;
                  if ( v159 == -1 )
                    goto LABEL_153;
                  while ( 1 )
                  {
                    if ( v161 || v159 != -2 )
                      v92 = v161;
                    v158 = (v48 - 1) & (v160 + v158);
                    v159 = v47[v158];
                    if ( v159 == v43 )
                    {
                      v121 = v43;
                      v92 = &v47[v158];
                      goto LABEL_124;
                    }
                    if ( v159 == -1 )
                      break;
                    ++v160;
                    v161 = v92;
                    v92 = &v47[v158];
                  }
                  if ( !v92 )
                  {
                    v92 = &v47[v158];
                    goto LABEL_153;
                  }
LABEL_123:
                  v121 = *v92;
                }
LABEL_124:
                LODWORD(v230) = v119;
                if ( v121 != -1 )
                  --HIDWORD(v230);
              }
              *v92 = v43;
              sub_1ECF950(&v223, v92, &v47[v48], (__int64)&v229, 1);
LABEL_42:
              v53 = v228;
              v54 = *((unsigned int *)v228 + 2);
              v39 = *((unsigned int *)v228 + 3);
              if ( v54 + 1 > v39 )
              {
                sub_2237220(v228, v228 + 16, v54 + 1, 8);
                v54 = *((unsigned int *)v53 + 2);
              }
              *(_QWORD *)(*(_QWORD *)v53 + 8 * v54) = v43;
              ++*((_DWORD *)v53 + 2);
              goto LABEL_45;
            }
LABEL_75:
            sub_1ECF950(&v223, v92, &v47[v48], (__int64)&v229, 1);
LABEL_45:
            if ( v204 == (char *)v211 )
            {
              v55 = v229;
              v56 = 8LL * v231;
              goto LABEL_47;
            }
          }
          if ( (unsigned int)v49 <= 4 )
          {
            sub_1ECF950(&v223, (__int64 *)&v229[8 * v231], (__int64 *)&v229[8 * v231], (__int64)&v229, 1);
            v51 = v223.m128_u64[1];
            v50 = (_QWORD *)v223.m128_u64[0];
            sub_1ECF950(&v223, (__int64 *)&v229[8 * v231], (__int64 *)&v229[8 * v231], (__int64)&v229, 1);
            if ( (_QWORD *)v223.m128_u64[0] != v50 )
            {
              while ( 1 )
              {
                if ( *v50 == v43 )
                  goto LABEL_45;
                if ( v50 + 1 != (_QWORD *)v51 )
                {
                  if ( v50[1] < 0xFFFFFFFFFFFFFFFELL )
                  {
                    ++v50;
                    goto LABEL_41;
                  }
                  v52 = v50 + 2;
                  while ( 1 )
                  {
                    v50 = v52;
                    if ( v52 == (_QWORD *)v51 )
                      break;
                    ++v52;
                    if ( *v50 < 0xFFFFFFFFFFFFFFFELL )
                      goto LABEL_41;
                  }
                }
                v50 = (_QWORD *)v51;
LABEL_41:
                if ( v50 == (_QWORD *)v223.m128_u64[0] )
                  goto LABEL_42;
              }
            }
            goto LABEL_42;
          }
          v62 = *(__int64 **)v228;
          v63 = v43;
          v210 = *(_QWORD *)v228 + 8 * v49;
          while ( 2 )
          {
            if ( !(_DWORD)v48 )
            {
LABEL_55:
              v68 = (((((((unsigned int)(2 * v48 - 1) | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 2)
                      | (unsigned int)(2 * v48 - 1)
                      | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 4)
                    | (((unsigned int)(2 * v48 - 1) | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v48 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 8)
                  | (((((unsigned int)(2 * v48 - 1) | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v48 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v48 - 1) | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v48 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v48 - 1) >> 1);
              v69 = ((v68 >> 16) | v68) + 1;
              if ( (unsigned int)v69 < 0x40 )
                LODWORD(v69) = 64;
              v231 = v69;
              v70 = (char *)sub_22300B0(8LL * (unsigned int)v69, 8, v46, v39, v13, v14);
              v71 = v70;
              v229 = v70;
              if ( v47 )
              {
                v72 = v48;
                v230 = 0;
                v73 = &v47[v72];
                v74 = v231;
                v75 = 8LL * v231;
                if ( v70 != &v70[v75] )
                {
                  v76 = (char *)memset(v70, 255, v75);
                  v73 = &v47[v72];
                  v71 = v76;
                }
                v77 = v47;
                v78 = v74 - 1;
                if ( v73 != v47 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v79 = *v77;
                      if ( (unsigned __int64)(*v77 + 2) > 1 )
                        break;
                      if ( v73 == ++v77 )
                        goto LABEL_67;
                    }
                    if ( !v74 )
                      break;
                    v80 = v78 & (((0xBF58476D1CE4E5B9LL * v79) >> 31) ^ (484763065 * v79));
                    v81 = &v71[8 * v80];
                    v82 = *(_QWORD *)v81;
                    if ( v79 != *(_QWORD *)v81 && v82 != -1 )
                    {
                      v215 = 1;
                      v173 = nullptr;
                      while ( 1 )
                      {
                        if ( v82 == -2 && !v173 )
                          v173 = v81;
                        v80 = v78 & (v215 + v80);
                        v81 = &v71[8 * v80];
                        v82 = *(_QWORD *)v81;
                        if ( v79 == *(_QWORD *)v81 )
                          break;
                        if ( v82 == -1 )
                        {
                          if ( v173 )
                            v81 = v173;
                          break;
                        }
                        ++v215;
                      }
                    }
                    v83 = *v77++;
                    LODWORD(v230) = v230 + 1;
                    *(_QWORD *)v81 = v83;
                    if ( v73 == v77 )
                      goto LABEL_67;
                  }
LABEL_339:
                  *(_QWORD *)&dword_0 = v79;
                  BUG();
                }
LABEL_67:
                operator delete(v47, v72 * 8, 8);
                v47 = (__int64 *)v229;
                v48 = v231;
                v84 = v230 + 1;
                goto LABEL_68;
              }
              v230 = 0;
              v48 = v231;
              v162 = 8LL * v231;
              if ( v70 == &v70[v162] )
              {
                v47 = (__int64 *)v70;
                v84 = 1;
LABEL_68:
                if ( !(_DWORD)v48 )
                  goto LABEL_175;
              }
              else
              {
                v47 = (__int64 *)memset(v70, 255, v162);
                v84 = 1;
                if ( !(_DWORD)v48 )
                  goto LABEL_175;
              }
              v85 = *v62;
              LODWORD(v86) = (v48 - 1) & (((0xBF58476D1CE4E5B9LL * *v62) >> 31) ^ (484763065 * *(_DWORD *)v62));
              v66 = &v47[(unsigned int)v86];
              v87 = *v66;
              if ( *v66 != *v62 )
              {
                v88 = 1;
                v89 = nullptr;
                if ( v87 == -1 )
                  goto LABEL_71;
                while ( 1 )
                {
                  if ( v89 || v87 != -2 )
                    v66 = v89;
                  v86 = ((_DWORD)v48 - 1) & (unsigned int)(v86 + v88);
                  v117 = &v47[v86];
                  v87 = *v117;
                  if ( v85 == *v117 )
                    break;
                  if ( v87 == -1 )
                    goto LABEL_118;
                  ++v88;
                  v89 = v66;
                  v66 = &v47[v86];
                }
LABEL_289:
                v66 = v117;
              }
              goto LABEL_86;
            }
            v64 = v48 - 1;
            v65 = (v48 - 1) & (((0xBF58476D1CE4E5B9LL * *v62) >> 31) ^ (484763065 * *(_DWORD *)v62));
            v66 = &v47[v65];
            v67 = *v66;
            if ( *v62 != *v66 )
            {
              v13 = 1;
              v14 = 0;
              if ( v67 != -1 )
              {
                while ( 1 )
                {
                  if ( v67 == -2 && !v14 )
                    v14 = (unsigned __int64)v66;
                  v65 = v64 & (v13 + v65);
                  v66 = &v47[v65];
                  v67 = *v66;
                  if ( *v62 == *v66 )
                    goto LABEL_53;
                  if ( v67 == -1 )
                    break;
                  v13 = (unsigned int)(v13 + 1);
                }
                if ( v14 )
                  v66 = (__int64 *)v14;
              }
              v46 = (unsigned int)(3 * v48);
              v84 = v230 + 1;
              v39 = (unsigned int)(4 * (v230 + 1));
              if ( (unsigned int)v39 >= (unsigned int)v46 )
                goto LABEL_55;
              v96 = (unsigned int)(v48 - (v84 + HIDWORD(v230)));
              v97 = (unsigned int)v48 >> 3;
              if ( (unsigned int)v96 > (unsigned int)v97 )
              {
LABEL_85:
                v85 = *v66;
                goto LABEL_86;
              }
              v98 = ((v64 | ((unsigned __int64)v64 >> 1)) >> 2) | v64 | ((unsigned __int64)v64 >> 1);
              v99 = (((v98 >> 4) | v98) >> 8) | (v98 >> 4) | v98;
              v100 = ((v99 >> 16) | v99) + 1;
              if ( (unsigned int)v100 < 0x40 )
                LODWORD(v100) = 64;
              v231 = v100;
              v101 = (char *)sub_22300B0(8LL * (unsigned int)v100, 8, v97, v96, v13, v14);
              v102 = v101;
              v229 = v101;
              if ( v47 )
              {
                v103 = 8 * v48;
                v230 = 0;
                v104 = &v47[v48];
                v105 = v231;
                v106 = 8LL * v231;
                if ( v101 != &v101[v106] )
                {
                  v214 = v103;
                  v107 = (char *)memset(v101, 255, v106);
                  v103 = v214;
                  v102 = v107;
                }
                v108 = v47;
                v109 = v105 - 1;
                do
                {
                  while ( 1 )
                  {
                    v79 = *v108;
                    if ( (unsigned __int64)(*v108 + 2) > 1 )
                      break;
                    if ( v104 == ++v108 )
                      goto LABEL_110;
                  }
                  if ( !v105 )
                    goto LABEL_339;
                  v110 = v109 & (((0xBF58476D1CE4E5B9LL * v79) >> 31) ^ (484763065 * v79));
                  v111 = &v102[8 * v110];
                  v112 = *(_QWORD *)v111;
                  if ( v79 != *(_QWORD *)v111 && v112 != -1 )
                  {
                    v216 = 1;
                    v174 = nullptr;
                    while ( 1 )
                    {
                      if ( !v174 && v112 == -2 )
                        v174 = v111;
                      v110 = v109 & (v216 + v110);
                      v111 = &v102[8 * v110];
                      v112 = *(_QWORD *)v111;
                      if ( v79 == *(_QWORD *)v111 )
                        break;
                      if ( v112 == -1 )
                      {
                        if ( v174 )
                          v111 = v174;
                        break;
                      }
                      ++v216;
                    }
                  }
                  v113 = *v108++;
                  LODWORD(v230) = v230 + 1;
                  *(_QWORD *)v111 = v113;
                }
                while ( v104 != v108 );
LABEL_110:
                operator delete(v47, v103, 8);
                v47 = (__int64 *)v229;
                v48 = v231;
                v84 = v230 + 1;
              }
              else
              {
                v230 = 0;
                v48 = v231;
                v163 = 8LL * v231;
                if ( v101 == &v101[v163] )
                  v47 = (__int64 *)v101;
                else
                  v47 = (__int64 *)memset(v101, 255, v163);
                v84 = 1;
              }
              if ( !(_DWORD)v48 )
                goto LABEL_175;
              LODWORD(v114) = (v48 - 1) & (((0xBF58476D1CE4E5B9LL * *v62) >> 31) ^ (484763065 * *(_DWORD *)v62));
              v66 = &v47[(unsigned int)v114];
              v85 = *v66;
              if ( *v62 == *v66 )
              {
LABEL_86:
                LODWORD(v230) = v84;
                if ( v85 != -1 )
                  --HIDWORD(v230);
              }
              else
              {
                v115 = 1;
                v116 = nullptr;
                if ( v85 != -1 )
                {
                  while ( 1 )
                  {
                    if ( v85 != -2 || v116 )
                      v66 = v116;
                    v114 = ((_DWORD)v48 - 1) & (unsigned int)(v114 + v115);
                    v117 = &v47[v114];
                    v85 = *v117;
                    if ( *v62 == *v117 )
                      goto LABEL_289;
                    if ( v85 == -1 )
                    {
LABEL_118:
                      if ( v66 )
                        goto LABEL_85;
                      v66 = v117;
                      break;
                    }
                    ++v115;
                    v116 = v66;
                    v66 = &v47[v114];
                  }
                }
LABEL_71:
                LODWORD(v230) = v84;
              }
              *v66 = *v62;
            }
LABEL_53:
            ++v62;
            sub_1ECF950(&v223, v66, &v47[v48], (__int64)&v229, 1);
            v47 = (__int64 *)v229;
            v48 = v231;
            if ( (__int64 *)v210 == v62 )
            {
              v43 = v63;
              goto LABEL_73;
            }
            continue;
          }
        }
        v55 = nullptr;
        v56 = 0;
LABEL_47:
        operator delete(v55, v56, 8);
        if ( v225 )
        {
          v57 = v224;
        }
        else
        {
          v57 = v224 + 2;
          v225 = *(unsigned __int16 *)v224;
        }
        v224 = v57 + 4;
        v58 = sub_1EA7E80(&v224);
        v59 = sub_1EA7E80(&v224);
        v8 = &v224[v58 + v59];
        v60 = v226-- == 1;
        v61 = v225 - 1;
        v224 = v8;
        --v225;
        if ( !v60 )
        {
          v9 = v61 == 0 ? 6LL : 4LL;
          continue;
        }
        break;
      }
      v2 = v208;
    }
    v164 = *(char **)(v2 + 8);
    if ( v164 == *(char **)(v2 + 16) )
    {
      sub_1ED13D0(v2, v164, v212);
      v165 = v212;
    }
    else
    {
      v165 = v212;
      v166 = v164 + 8;
      *((_QWORD *)v166 - 1) = *v212;
      *(_QWORD *)(v2 + 8) = v166;
    }
    operator delete(v165, 0x38u);
  }
  if ( (*a1 & 2) != 0 )
    *(_DWORD *)((*a1 & 0xFFFFFFFFFFFFFFFCLL) + 8) = 0;
  else
    *a1 = 0;
  return sub_1EB0B70((__int64 *)a1, v2 | 4);
}
