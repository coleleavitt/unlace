__int64 __fastcall sub_1EF8A50(unsigned __int64 *a1)
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
  __m128i v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  char *v15; // rcx
  int v16; // r13d
  unsigned int v17; // r14d
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // r11d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned int i; // eax
  __int64 v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // r13
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  _DWORD *ii; // rdx
  __int64 v34; // rbx
  char *v35; // rdi
  void *v36; // rdi
  __int64 v37; // rax
  char *v38; // rdx
  char *v39; // r15
  unsigned int v40; // ebx
  unsigned __int64 v41; // rbp
  __int64 v42; // r13
  __int64 v43; // rbx
  unsigned __int64 v44; // rdx
  __int64 *v45; // r12
  __int64 v46; // rbx
  __int64 v47; // rax
  _QWORD *v48; // rbx
  unsigned __int64 v49; // r12
  _QWORD *v50; // rax
  char *v51; // rbx
  __int64 v52; // rax
  char *v53; // rdi
  __int64 v54; // rsi
  char *v55; // rax
  int v56; // ebp
  int v57; // eax
  bool v58; // zf
  int v59; // ecx
  unsigned __int64 v60; // rbp
  __int64 v61; // r12
  __int64 *v62; // r13
  unsigned __int64 v63; // r15
  unsigned int v64; // edi
  int v65; // eax
  __int64 *v66; // rsi
  __int64 v67; // rcx
  unsigned __int64 v68; // rdi
  __int64 v69; // rdi
  char *v70; // rax
  char *v71; // r8
  __int64 v72; // rbx
  __int64 *v73; // r14
  unsigned int v74; // ebp
  size_t v75; // rdx
  __int64 *v76; // rax
  unsigned int v77; // r9d
  __int64 v78; // rcx
  int v79; // edx
  char *v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rdx
  int v83; // eax
  int v84; // ecx
  __int64 v85; // rdx
  int v86; // r9d
  __int64 *v87; // r11
  unsigned __int64 v88; // r13
  int v89; // ecx
  __int64 *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  unsigned __int64 v94; // rdi
  unsigned __int64 v95; // rdi
  __int64 v96; // rdi
  char *v97; // rax
  char *v98; // r8
  __int64 v99; // rbx
  __int64 *v100; // r14
  unsigned int v101; // ebp
  size_t v102; // rdx
  __int64 *v103; // rax
  unsigned int v104; // r9d
  int v105; // edx
  char *v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rdx
  int v109; // ecx
  __int64 v110; // rdi
  int v111; // r9d
  __int64 *v112; // r11
  __int64 *v113; // r10
  int v114; // edi
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rdx
  unsigned __int64 v118; // rdi
  __int64 v119; // rdi
  char *v120; // rax
  char *v121; // rcx
  __int64 v122; // rbx
  __int64 *v123; // r13
  unsigned int v124; // r14d
  size_t v125; // rdx
  __int64 *v126; // rax
  unsigned int m; // r8d
  __int64 v128; // r11
  int v129; // edx
  char *v130; // rsi
  __int64 v131; // rdi
  __int64 v132; // rdx
  int v133; // ecx
  __int64 v134; // rdi
  int v135; // edx
  __int64 *v136; // r10
  unsigned __int64 v137; // rdi
  unsigned __int64 v138; // rdx
  __int64 v139; // rdi
  char *v140; // rax
  char *v141; // rcx
  __int64 v142; // r9
  __int64 *v143; // rbx
  unsigned int v144; // r14d
  size_t v145; // rdx
  char *v146; // rax
  __int64 *v147; // rax
  unsigned int v148; // r8d
  int v149; // edx
  char *v150; // rsi
  __int64 v151; // rdi
  __int64 v152; // rdx
  int v153; // r13d
  __int64 v154; // rcx
  int v155; // edx
  __int64 *v156; // r9
  size_t v157; // rdx
  size_t v158; // rdx
  char *v159; // rsi
  __int64 *v160; // rdi
  char *v161; // rsi
  size_t v163; // rdx
  size_t v164; // rdx
  int v165; // r10d
  char *v166; // r11
  int v167; // eax
  __m128i v168; // xmm0
  unsigned __int64 v169; // rax
  int v170; // r10d
  char *v171; // r11
  int v172; // r9d
  char *v173; // r10
  char *v174; // r10
  __int64 v175; // rdi
  __int64 v176; // rdx
  _DWORD *n; // rdx
  int v178; // eax
  unsigned __int64 v179; // rax
  _DWORD *v180; // rax
  __int64 v181; // rdx
  _DWORD *j; // rdx
  __int64 v183; // rbx
  char *v184; // rdi
  void *v185; // rdi
  __int64 v186; // rax
  __int64 v187; // rdx
  _DWORD *k; // rdx
  __int64 v189; // rax
  __int64 v190; // [rsp+10h] [rbp-128h]
  int v191; // [rsp+18h] [rbp-120h]
  __int64 v192; // [rsp+18h] [rbp-120h]
  int v193; // [rsp+18h] [rbp-120h]
  unsigned int v194; // [rsp+20h] [rbp-118h]
  __int64 v195; // [rsp+20h] [rbp-118h]
  __int64 v196; // [rsp+28h] [rbp-110h]
  char *v197; // [rsp+28h] [rbp-110h]
  __int64 v198; // [rsp+30h] [rbp-108h]
  __int64 *v199; // [rsp+38h] [rbp-100h]
  __int64 *v200; // [rsp+40h] [rbp-F8h]
  __int64 *v201; // [rsp+58h] [rbp-E0h]
  __int64 *v202; // [rsp+60h] [rbp-D8h]
  __int64 *v203; // [rsp+68h] [rbp-D0h]
  char *v205; // [rsp+88h] [rbp-B0h] BYREF
  __m128 v206; // [rsp+90h] [rbp-A8h] BYREF
  char *v207; // [rsp+A0h] [rbp-98h] BYREF
  int v208; // [rsp+A8h] [rbp-90h]
  int v209; // [rsp+ACh] [rbp-8Ch]
  __int64 *v210; // [rsp+B0h] [rbp-88h]
  __m128i v211; // [rsp+C0h] [rbp-78h] BYREF
  int v212; // [rsp+D0h] [rbp-68h]
  char *v213; // [rsp+E0h] [rbp-58h] BYREF
  char *v214; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v215; // [rsp+F0h] [rbp-48h]
  unsigned int v216; // [rsp+F8h] [rbp-40h]

  v1 = sub_1EB4020(a1);
  v2 = v1;
  if ( !v1 )
  {
    v189 = operator new(0x30u);
    *(_QWORD *)v189 = 0;
    v2 = v189;
    *(_QWORD *)(v189 + 8) = 0;
    *(_QWORD *)(v189 + 16) = 0;
    *(_QWORD *)(v189 + 24) = 0;
    *(_QWORD *)(v189 + 32) = 0;
    *(_DWORD *)(v189 + 40) = 0;
    v1 = sub_1EB4020(a1);
  }
  v3 = sub_1EAA820(a1, v1 != 0);
  v203 = v4;
  v201 = (__int64 *)v3;
  if ( v4 != (__int64 *)v3 )
  {
    v190 = v2;
    while ( 1 )
    {
      v5 = *v201;
      v208 = 0;
      v5 &= 0xFFFFFFFFFFFFFFF8LL;
      v6 = (__int64 *)(v5 + 32);
      v7 = *(_DWORD *)(v5 + 12);
      v199 = (__int64 *)v5;
      v8 = *(char **)(v5 + 48);
      v200 = v6;
      v209 = v7;
      v207 = v8;
      v210 = v6;
      if ( v7 )
        break;
LABEL_185:
      v159 = *(char **)(v190 + 8);
      if ( v159 == *(char **)(v190 + 16) )
      {
        sub_1ED13D0(v190, v159, v199);
        v160 = v199;
      }
      else
      {
        v160 = v199;
        v161 = v159 + 8;
        *((_QWORD *)v161 - 1) = *v199;
        *(_QWORD *)(v190 + 8) = v161;
      }
      operator delete(v160, 0x38u);
      if ( v203 == ++v201 )
      {
        v2 = v190;
        goto LABEL_189;
      }
    }
    v9 = 6;
    v202 = (__int64 *)(v190 + 24);
    while ( 1 )
    {
      v205 = &v8[v9];
      v10 = sub_1EA7E80(&v205);
      v11 = sub_1EA7E80(&v205);
      v213 = v205;
      v12.m128i_i64[0] = sub_1EF5660(v200, &v213);
      v15 = v213;
      v16 = *(_DWORD *)v213;
      v211 = v12;
      v212 = v16;
      v17 = *(_DWORD *)(v190 + 40);
      if ( !v17 )
        break;
      v18 = *(_QWORD *)(v190 + 24);
      v19 = sub_1EADE10((__int64)&v211);
      v20 = v17 - 1;
      v13 = v211.m128i_u32[0];
      v14 = v211.m128i_i64[1];
      v21 = 1;
      v22 = 0xBF58476D1CE4E5B9LL * ((unsigned int)(37 * v16) | (unsigned __int64)(v19 << 32));
      v23 = 0;
      for ( i = v20 & ((v22 >> 31) ^ v22); ; i = v20 & v26 )
      {
        v25 = v18 + 72LL * i;
        if ( v211.m128i_i32[0] == *(_DWORD *)v25
          && v211.m128i_i64[1] == *(_QWORD *)(v25 + 8)
          && v212 == *(_DWORD *)(v25 + 16) )
        {
          v38 = (char *)(v25 + 24);
          goto LABEL_33;
        }
        if ( *(_DWORD *)v25 == -1 )
          break;
LABEL_11:
        v26 = v21 + i;
        ++v21;
      }
      v175 = *(_QWORD *)(v25 + 8);
      if ( v175 != 1 )
      {
        if ( v175 == 2 && *(_DWORD *)(v25 + 16) == -2 && !v23 )
          v23 = v18 + 72LL * i;
        goto LABEL_11;
      }
      if ( *(_DWORD *)(v25 + 16) != -1 )
        goto LABEL_11;
      if ( !v23 )
        v23 = v18 + 72LL * i;
      v17 = *(_DWORD *)(v190 + 40);
      v178 = *(_DWORD *)(v190 + 32);
      v15 = (char *)(3 * v17);
      v206.m128_u64[0] = v23;
      v167 = v178 + 1;
      if ( 4 * v167 >= (unsigned int)v15 )
        goto LABEL_13;
      v20 = v17 >> 3;
      if ( v17 - (v167 + *(_DWORD *)(v190 + 36)) <= (unsigned int)v20 )
      {
        v27 = *(_QWORD *)(v190 + 24);
        v179 = ((((((((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                    | (v17 - 1)
                    | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
                  | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                  | (v17 - 1)
                  | ((unsigned __int64)(v17 - 1) >> 1)) >> 8)
                | (((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                  | (v17 - 1)
                  | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
                | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                | (v17 - 1)
                | ((unsigned __int64)(v17 - 1) >> 1)) >> 16)
              | (((((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                  | (v17 - 1)
                  | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
                | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                | (v17 - 1)
                | ((unsigned __int64)(v17 - 1) >> 1)) >> 8)
              | (((((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
                | (v17 - 1)
                | ((unsigned __int64)(v17 - 1) >> 1)) >> 4)
              | (((v17 - 1) | ((unsigned __int64)(v17 - 1) >> 1)) >> 2)
              | (v17 - 1)
              | ((unsigned __int64)(v17 - 1) >> 1))
             + 1;
        if ( (unsigned int)v179 < 0x40 )
          LODWORD(v179) = 64;
        *(_DWORD *)(v190 + 40) = v179;
        v180 = (_DWORD *)sub_22300B0(72LL * (unsigned int)v179, 8, 64, v20, v13, v14);
        *(_QWORD *)(v190 + 24) = v180;
        if ( v27 )
        {
          v181 = *(unsigned int *)(v190 + 40);
          v32 = 72LL * v17;
          *(_QWORD *)(v190 + 32) = 0;
          for ( j = &v180[18 * v181]; j != v180; *(v180 - 14) = -1 )
          {
            *v180 = -1;
            v180 += 18;
            *((_QWORD *)v180 - 8) = 1;
          }
          if ( v27 != v27 + v32 )
          {
            v191 = v10;
            v194 = v11;
            v183 = v27;
            v196 = v27;
            while ( *(_DWORD *)v183 == -1 )
            {
              v186 = *(_QWORD *)(v183 + 8);
              if ( v186 == 1 )
              {
                if ( *(_DWORD *)(v183 + 16) != -1 )
                  break;
              }
              else if ( v186 != 2 || *(_DWORD *)(v183 + 16) != -2 )
              {
                break;
              }
LABEL_275:
              v183 += 72;
              if ( v27 + v32 == v183 )
                goto LABEL_209;
            }
            sub_1ED1DC0(v202, v183, &v213);
            v184 = v213;
            *(__m128i *)v213 = _mm_loadu_si128((const __m128i *)v183);
            *((_DWORD *)v184 + 4) = *(_DWORD *)(v183 + 16);
            *((_QWORD *)v184 + 3) = v184 + 40;
            *((_QWORD *)v184 + 4) = 0x400000000LL;
            if ( *(_DWORD *)(v183 + 32) )
              sub_1EB3E90((char ***)v184 + 3, (char ***)(v183 + 24));
            v185 = *(void **)(v183 + 24);
            ++*(_DWORD *)(v190 + 32);
            if ( v185 != (void *)(v183 + 40) )
              free(v185);
            goto LABEL_275;
          }
LABEL_210:
          operator delete(v27, v32, 8);
        }
        else
        {
          v187 = *(unsigned int *)(v190 + 40);
          *(_QWORD *)(v190 + 32) = 0;
          for ( k = &v180[18 * v187]; k != v180; *(v180 - 14) = -1 )
          {
            *v180 = -1;
            v180 += 18;
            *((_QWORD *)v180 - 8) = 1;
          }
        }
LABEL_211:
        sub_1ED1DC0(v202, (__int64)&v211, &v206);
        v23 = v206.m128_u64[0];
        v167 = *(_DWORD *)(v190 + 32) + 1;
      }
      *(_DWORD *)(v190 + 32) = v167;
      if ( *(_DWORD *)v23 != -1 || *(_QWORD *)(v23 + 8) != 1 || *(_DWORD *)(v23 + 16) != -1 )
        --*(_DWORD *)(v190 + 36);
      v168 = _mm_load_si128(&v211);
      *(_DWORD *)(v23 + 16) = v212;
      v169 = v23 + 40;
      v38 = (char *)(v23 + 24);
      *(_QWORD *)v38 = v169;
      *(__m128i *)(v38 - 24) = v168;
      *((_QWORD *)v38 + 1) = 0x400000000LL;
LABEL_33:
      v213 = v38;
      v214 = nullptr;
      v215 = 0;
      v39 = &v205[v10];
      v40 = v11 >> 3;
      v216 = 0;
      if ( v40 )
      {
        v198 = (__int64)&v39[8 * v40];
        while ( 1 )
        {
          v41 = *(_QWORD *)v39;
          v39 += 8;
          v42 = v199[5];
          v43 = v199[4];
          v206.m128_u64[0] = v41;
          if ( v41 > 0x13 )
          {
            v60 = HIDWORD(v41);
            v61 = (unsigned int)sub_B8F2E0((__int64)&v206);
            if ( *(_QWORD *)(v42 + 856) )
              sub_1EDF870(v43, v42);
            if ( v60 )
              v42 = *(_QWORD *)(*(_QWORD *)(v42 + 3320) + 8LL * (unsigned int)(v60 - 1));
            else
              v61 = (unsigned int)(v61 - 20);
            v41 = v61 | ((unsigned __int64)(unsigned int)(*(_DWORD *)v42 + 1) << 32);
          }
          v44 = (unsigned int)v215;
          v45 = (__int64 *)v214;
          v46 = v216;
          if ( !(_DWORD)v215 )
          {
            v44 = (unsigned __int64)v213;
            v47 = *((unsigned int *)v213 + 2);
            if ( (_DWORD)v47 )
              break;
          }
LABEL_84:
          if ( !(_DWORD)v46 )
            goto LABEL_143;
          v44 = (unsigned int)(v46 - 1);
          v88 = ((0xBF58476D1CE4E5B9LL * v41) >> 31) ^ (0xBF58476D1CE4E5B9LL * v41);
          v89 = v88 & (v46 - 1);
          v90 = &v45[v89];
          v91 = *v90;
          if ( *v90 != v41 )
          {
            v114 = 1;
            v13 = 0;
            if ( v91 != -1 )
            {
              while ( 1 )
              {
                if ( v91 == -2 && !v13 )
                  v13 = (__int64)v90;
                v14 = (unsigned int)(v114 + 1);
                v89 = v44 & (v114 + v89);
                v90 = &v45[v89];
                v91 = *v90;
                if ( *v90 == v41 )
                  goto LABEL_86;
                if ( v91 == -1 )
                  break;
                ++v114;
              }
              if ( v13 )
                v90 = (__int64 *)v13;
            }
            v20 = (unsigned int)(3 * v46);
            v115 = v215 + 1;
            if ( 4 * ((int)v215 + 1) >= (unsigned int)v20 )
            {
LABEL_143:
              v118 = (((((((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
                       | (unsigned int)(2 * v46 - 1)
                       | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 4)
                     | (((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
                     | (unsigned int)(2 * v46 - 1)
                     | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 8)
                   | (((((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
                     | (unsigned int)(2 * v46 - 1)
                     | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 4)
                   | (((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * v46 - 1)
                   | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1);
              v119 = ((v118 >> 16) | v118) + 1;
              if ( (unsigned int)v119 < 0x40 )
                LODWORD(v119) = 64;
              v216 = v119;
              v120 = (char *)sub_22300B0(8LL * (unsigned int)v119, 8, v44, v20, v13, v14);
              v121 = v120;
              v214 = v120;
              if ( v45 )
              {
                v122 = v46;
                v215 = 0;
                v123 = &v45[v122];
                v124 = v216;
                v125 = 8LL * v216;
                if ( v120 != &v120[v125] )
                  v121 = (char *)memset(v120, 255, v125);
                v126 = v45;
                for ( m = v124 - 1; v123 != v126; *(_QWORD *)v130 = v132 )
                {
                  while ( 1 )
                  {
                    v128 = *v126;
                    if ( (unsigned __int64)(*v126 + 2) > 1 )
                      break;
                    if ( v123 == ++v126 )
                      goto LABEL_155;
                  }
                  if ( !v124 )
                  {
LABEL_317:
                    *(_QWORD *)&dword_0 = v128;
                    BUG();
                  }
                  v129 = m & (((0xBF58476D1CE4E5B9LL * v128) >> 31) ^ (484763065 * v128));
                  v130 = &v121[8 * v129];
                  v131 = *(_QWORD *)v130;
                  if ( *(_QWORD *)v130 != v128 )
                  {
                    v172 = 1;
                    v173 = nullptr;
                    if ( v131 != -1 )
                    {
                      while ( 1 )
                      {
                        if ( !v173 && v131 == -2 )
                          v173 = v130;
                        v129 = m & (v172 + v129);
                        v130 = &v121[8 * v129];
                        v131 = *(_QWORD *)v130;
                        if ( v128 == *(_QWORD *)v130 )
                          break;
                        if ( v131 == -1 )
                        {
                          if ( v173 )
                            v130 = v173;
                          break;
                        }
                        ++v172;
                      }
                    }
                  }
                  v132 = *v126++;
                  LODWORD(v215) = v215 + 1;
                }
LABEL_155:
                operator delete(v45, v122 * 8, 8);
                v45 = (__int64 *)v214;
                v46 = v216;
                v115 = v215 + 1;
              }
              else
              {
                v215 = 0;
                v46 = v216;
                v163 = 8LL * v216;
                if ( v120 == &v120[v163] )
                  v45 = (__int64 *)v120;
                else
                  v45 = (__int64 *)memset(v120, 255, v163);
                v115 = 1;
              }
              if ( !(_DWORD)v46 )
              {
LABEL_181:
                LODWORD(v215) = v215 + 1;
                BUG();
              }
              v133 = (v46 - 1) & (((0xBF58476D1CE4E5B9LL * v41) >> 31) ^ (484763065 * v41));
              v90 = &v45[v133];
              v117 = v41;
              v134 = *v90;
              if ( *v90 != v41 )
              {
                v135 = 1;
                v136 = nullptr;
                if ( v134 == -1 )
                  goto LABEL_159;
                while ( 1 )
                {
                  if ( v134 != -2 || v136 )
                    v90 = v136;
                  v133 = (v46 - 1) & (v135 + v133);
                  v134 = v45[v133];
                  if ( v134 == v41 )
                  {
                    v117 = v41;
                    v90 = &v45[v133];
                    goto LABEL_130;
                  }
                  if ( v134 == -1 )
                    break;
                  ++v135;
                  v136 = v90;
                  v90 = &v45[v133];
                }
                if ( !v90 )
                {
                  v90 = &v45[v133];
                  goto LABEL_159;
                }
                goto LABEL_129;
              }
            }
            else
            {
              v116 = (unsigned int)v46 >> 3;
              if ( (int)v46 - (v115 + HIDWORD(v215)) > (unsigned int)v116 )
                goto LABEL_129;
              v137 = ((((v44 | (v44 >> 1)) >> 2) | v44 | (v44 >> 1)) >> 4)
                   | ((v44 | (v44 >> 1)) >> 2)
                   | v44
                   | (v44 >> 1);
              v138 = v137 >> 8;
              v139 = (((v138 | v137) >> 16) | v138 | v137) + 1;
              if ( (unsigned int)v139 < 0x40 )
                LODWORD(v139) = 64;
              v216 = v139;
              v140 = (char *)sub_22300B0(8LL * (unsigned int)v139, 8, v138, v116, v13, v14);
              v141 = v140;
              v214 = v140;
              if ( v45 )
              {
                v142 = 8 * v46;
                v215 = 0;
                v143 = &v45[v46];
                v144 = v216;
                v145 = 8LL * v216;
                if ( v140 != &v140[v145] )
                {
                  v192 = v142;
                  v146 = (char *)memset(v140, 255, v145);
                  v142 = v192;
                  v141 = v146;
                }
                v147 = v45;
                v148 = v144 - 1;
                do
                {
                  while ( 1 )
                  {
                    v128 = *v147;
                    if ( (unsigned __int64)(*v147 + 2) > 1 )
                      break;
                    if ( v143 == ++v147 )
                      goto LABEL_171;
                  }
                  if ( !v144 )
                    goto LABEL_317;
                  v149 = v148 & (((0xBF58476D1CE4E5B9LL * v128) >> 31) ^ (484763065 * v128));
                  v150 = &v141[8 * v149];
                  v151 = *(_QWORD *)v150;
                  if ( v128 != *(_QWORD *)v150 && v151 != -1 )
                  {
                    v193 = 1;
                    v174 = nullptr;
                    while ( 1 )
                    {
                      if ( v151 == -2 && !v174 )
                        v174 = v150;
                      v149 = v148 & (v193 + v149);
                      v150 = &v141[8 * v149];
                      v151 = *(_QWORD *)v150;
                      if ( v128 == *(_QWORD *)v150 )
                        break;
                      if ( v151 == -1 )
                      {
                        if ( v174 )
                          v150 = v174;
                        break;
                      }
                      ++v193;
                    }
                  }
                  v152 = *v147++;
                  LODWORD(v215) = v215 + 1;
                  *(_QWORD *)v150 = v152;
                }
                while ( v143 != v147 );
LABEL_171:
                operator delete(v45, v142, 8);
                v45 = (__int64 *)v214;
                v46 = v216;
                v115 = v215 + 1;
              }
              else
              {
                v215 = 0;
                v46 = v216;
                v164 = 8LL * v216;
                if ( v140 == &v140[v164] )
                  v45 = (__int64 *)v140;
                else
                  v45 = (__int64 *)memset(v140, 255, v164);
                v115 = 1;
              }
              if ( !(_DWORD)v46 )
                goto LABEL_181;
              v153 = (v46 - 1) & v88;
              v90 = &v45[v153];
              v117 = v41;
              v154 = *v90;
              if ( *v90 != v41 )
              {
                v155 = 1;
                v156 = nullptr;
                if ( v154 == -1 )
                  goto LABEL_159;
                while ( 1 )
                {
                  if ( v156 || v154 != -2 )
                    v90 = v156;
                  v153 = (v46 - 1) & (v155 + v153);
                  v154 = v45[v153];
                  if ( v154 == v41 )
                  {
                    v117 = v41;
                    v90 = &v45[v153];
                    goto LABEL_130;
                  }
                  if ( v154 == -1 )
                    break;
                  ++v155;
                  v156 = v90;
                  v90 = &v45[v153];
                }
                if ( !v90 )
                {
                  v90 = &v45[v153];
LABEL_159:
                  LODWORD(v215) = v115;
LABEL_132:
                  *v90 = v41;
                  sub_1ECF950(&v206, v90, &v45[v46], (__int64)&v214, 1);
LABEL_48:
                  v51 = v213;
                  v52 = *((unsigned int *)v213 + 2);
                  v20 = *((unsigned int *)v213 + 3);
                  if ( v52 + 1 > v20 )
                  {
                    sub_2237220(v213, v213 + 16, v52 + 1, 8);
                    v52 = *((unsigned int *)v51 + 2);
                  }
                  *(_QWORD *)(*(_QWORD *)v51 + 8 * v52) = v41;
                  ++*((_DWORD *)v51 + 2);
                  goto LABEL_51;
                }
LABEL_129:
                v117 = *v90;
              }
            }
LABEL_130:
            LODWORD(v215) = v115;
            if ( v117 != -1 )
              --HIDWORD(v215);
            goto LABEL_132;
          }
LABEL_86:
          sub_1ECF950(&v206, v90, &v45[v46], (__int64)&v214, 1);
LABEL_51:
          if ( v39 == (char *)v198 )
          {
            v53 = v214;
            v54 = 8LL * v216;
            goto LABEL_53;
          }
        }
        if ( (unsigned int)v47 <= 4 )
        {
          sub_1ECF950(&v206, (__int64 *)&v214[8 * v216], (__int64 *)&v214[8 * v216], (__int64)&v214, 1);
          v49 = v206.m128_u64[1];
          v48 = (_QWORD *)v206.m128_u64[0];
          sub_1ECF950(&v206, (__int64 *)&v214[8 * v216], (__int64 *)&v214[8 * v216], (__int64)&v214, 1);
          if ( (_QWORD *)v206.m128_u64[0] != v48 )
          {
            while ( 1 )
            {
              if ( *v48 == v41 )
                goto LABEL_51;
              if ( v48 + 1 != (_QWORD *)v49 )
              {
                if ( v48[1] < 0xFFFFFFFFFFFFFFFELL )
                {
                  ++v48;
                  goto LABEL_47;
                }
                v50 = v48 + 2;
                while ( 1 )
                {
                  v48 = v50;
                  if ( v50 == (_QWORD *)v49 )
                    break;
                  ++v50;
                  if ( *v48 < 0xFFFFFFFFFFFFFFFELL )
                    goto LABEL_47;
                }
              }
              v48 = (_QWORD *)v49;
LABEL_47:
              if ( v48 == (_QWORD *)v206.m128_u64[0] )
                goto LABEL_48;
            }
          }
          goto LABEL_48;
        }
        v62 = *(__int64 **)v213;
        v197 = v39;
        v63 = v41;
        v195 = *(_QWORD *)v213 + 8 * v47;
        while ( 1 )
        {
          if ( !(_DWORD)v46 )
            goto LABEL_66;
          v64 = v46 - 1;
          v65 = (v46 - 1) & (((0xBF58476D1CE4E5B9LL * *v62) >> 31) ^ (484763065 * *(_DWORD *)v62));
          v66 = &v45[v65];
          v67 = *v66;
          if ( *v62 != *v66 )
            break;
LABEL_64:
          ++v62;
          sub_1ECF950(&v206, v66, &v45[v46], (__int64)&v214, 1);
          v45 = (__int64 *)v214;
          v46 = v216;
          if ( (__int64 *)v195 == v62 )
          {
            v41 = v63;
            v39 = v197;
            goto LABEL_84;
          }
        }
        v13 = 1;
        v14 = 0;
        if ( v67 != -1 )
        {
          while ( 1 )
          {
            if ( !v14 && v67 == -2 )
              v14 = (__int64)v66;
            v65 = v64 & (v13 + v65);
            v66 = &v45[v65];
            v67 = *v66;
            if ( *v62 == *v66 )
              goto LABEL_64;
            if ( v67 == -1 )
              break;
            v13 = (unsigned int)(v13 + 1);
          }
          if ( v14 )
            v66 = (__int64 *)v14;
        }
        v44 = (unsigned int)(3 * v46);
        v83 = v215 + 1;
        v20 = (unsigned int)(4 * (v215 + 1));
        if ( (unsigned int)v20 < (unsigned int)v44 )
        {
          v92 = (unsigned int)(v46 - (v83 + HIDWORD(v215)));
          v93 = (unsigned int)v46 >> 3;
          if ( (unsigned int)v92 > (unsigned int)v93 )
          {
LABEL_91:
            v85 = *v66;
            goto LABEL_92;
          }
          v94 = ((v64 | ((unsigned __int64)v64 >> 1)) >> 2) | v64 | ((unsigned __int64)v64 >> 1);
          v95 = (((v94 >> 4) | v94) >> 8) | (v94 >> 4) | v94;
          v96 = ((v95 >> 16) | v95) + 1;
          if ( (unsigned int)v96 < 0x40 )
            LODWORD(v96) = 64;
          v216 = v96;
          v97 = (char *)sub_22300B0(8LL * (unsigned int)v96, 8, v93, v92, v13, v14);
          v98 = v97;
          v214 = v97;
          if ( v45 )
          {
            v99 = v46;
            v215 = 0;
            v100 = &v45[v99];
            v101 = v216;
            v102 = 8LL * v216;
            if ( v97 != &v97[v102] )
              v98 = (char *)memset(v97, 255, v102);
            v103 = v45;
            v104 = v101 - 1;
            do
            {
              while ( 1 )
              {
                v78 = *v103;
                if ( (unsigned __int64)(*v103 + 2) > 1 )
                  break;
                if ( v100 == ++v103 )
                  goto LABEL_116;
              }
              if ( !v101 )
                goto LABEL_318;
              v105 = v104 & (((0xBF58476D1CE4E5B9LL * v78) >> 31) ^ (484763065 * v78));
              v106 = &v98[8 * v105];
              v107 = *(_QWORD *)v106;
              if ( v78 != *(_QWORD *)v106 )
              {
                v170 = 1;
                v171 = nullptr;
                if ( v107 != -1 )
                {
                  while ( 1 )
                  {
                    if ( !v171 && v107 == -2 )
                      v171 = v106;
                    v105 = v104 & (v170 + v105);
                    v106 = &v98[8 * v105];
                    v107 = *(_QWORD *)v106;
                    if ( v78 == *(_QWORD *)v106 )
                      break;
                    if ( v107 == -1 )
                    {
                      if ( v171 )
                        v106 = v171;
                      break;
                    }
                    ++v170;
                  }
                }
              }
              v108 = *v103++;
              LODWORD(v215) = v215 + 1;
              *(_QWORD *)v106 = v108;
            }
            while ( v100 != v103 );
LABEL_116:
            operator delete(v45, v99 * 8, 8);
            v45 = (__int64 *)v214;
            v46 = v216;
            v83 = v215 + 1;
          }
          else
          {
            v215 = 0;
            v46 = v216;
            v158 = 8LL * v216;
            if ( v97 == &v97[v158] )
              v45 = (__int64 *)v97;
            else
              v45 = (__int64 *)memset(v97, 255, v158);
            v83 = 1;
          }
          if ( !(_DWORD)v46 )
            goto LABEL_181;
          v85 = *v62;
          v109 = (v46 - 1) & (((0xBF58476D1CE4E5B9LL * *v62) >> 31) ^ (484763065 * *(_DWORD *)v62));
          v66 = &v45[v109];
          v110 = *v66;
          if ( *v66 == *v62 )
            goto LABEL_92;
          v111 = 1;
          v112 = nullptr;
          if ( v110 != -1 )
          {
            while ( 1 )
            {
              if ( v110 != -2 || v112 )
                v66 = v112;
              v109 = (v46 - 1) & (v111 + v109);
              v113 = &v45[v109];
              v110 = *v113;
              if ( v85 == *v113 )
                goto LABEL_286;
              if ( v110 == -1 )
              {
LABEL_124:
                if ( v66 )
                  goto LABEL_91;
                v66 = v113;
                goto LABEL_82;
              }
              ++v111;
              v112 = v66;
              v66 = &v45[v109];
            }
          }
          goto LABEL_82;
        }
LABEL_66:
        v68 = (((((((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v46 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 4)
              | (((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v46 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 8)
            | (((((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v46 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v46 - 1) | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v46 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v46 - 1) >> 1);
        v69 = ((v68 >> 16) | v68) + 1;
        if ( (unsigned int)v69 < 0x40 )
          LODWORD(v69) = 64;
        v216 = v69;
        v70 = (char *)sub_22300B0(8LL * (unsigned int)v69, 8, v44, v20, v13, v14);
        v71 = v70;
        v214 = v70;
        if ( v45 )
        {
          v72 = v46;
          v215 = 0;
          v73 = &v45[v72];
          v74 = v216;
          v75 = 8LL * v216;
          if ( v70 != &v70[v75] )
            v71 = (char *)memset(v70, 255, v75);
          v76 = v45;
          v77 = v74 - 1;
          if ( v73 != v45 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v78 = *v76;
                if ( (unsigned __int64)(*v76 + 2) > 1 )
                  break;
                if ( v73 == ++v76 )
                  goto LABEL_78;
              }
              if ( !v74 )
                break;
              v79 = v77 & (((0xBF58476D1CE4E5B9LL * v78) >> 31) ^ (484763065 * v78));
              v80 = &v71[8 * v79];
              v81 = *(_QWORD *)v80;
              if ( v78 != *(_QWORD *)v80 )
              {
                v165 = 1;
                v166 = nullptr;
                if ( v81 != -1 )
                {
                  while ( 1 )
                  {
                    if ( v81 == -2 && !v166 )
                      v166 = v80;
                    v79 = v77 & (v165 + v79);
                    v80 = &v71[8 * v79];
                    v81 = *(_QWORD *)v80;
                    if ( v78 == *(_QWORD *)v80 )
                      break;
                    if ( v81 == -1 )
                    {
                      if ( v166 )
                        v80 = v166;
                      break;
                    }
                    ++v165;
                  }
                }
              }
              v82 = *v76++;
              LODWORD(v215) = v215 + 1;
              *(_QWORD *)v80 = v82;
              if ( v73 == v76 )
                goto LABEL_78;
            }
LABEL_318:
            *(_QWORD *)&dword_0 = v78;
            BUG();
          }
LABEL_78:
          operator delete(v45, v72 * 8, 8);
          v45 = (__int64 *)v214;
          v46 = v216;
          v83 = v215 + 1;
        }
        else
        {
          v215 = 0;
          v46 = v216;
          v157 = 8LL * v216;
          if ( v70 != &v70[v157] )
          {
            v45 = (__int64 *)memset(v70, 255, v157);
            v83 = 1;
            if ( !(_DWORD)v46 )
              goto LABEL_181;
LABEL_80:
            v84 = (v46 - 1) & (((0xBF58476D1CE4E5B9LL * *v62) >> 31) ^ (484763065 * *(_DWORD *)v62));
            v66 = &v45[v84];
            v85 = *v66;
            if ( *v62 == *v66 )
              goto LABEL_92;
            v86 = 1;
            v87 = nullptr;
            if ( v85 != -1 )
            {
              while ( 1 )
              {
                if ( v87 || v85 != -2 )
                  v66 = v87;
                v84 = (v46 - 1) & (v86 + v84);
                v113 = &v45[v84];
                v85 = *v113;
                if ( *v62 == *v113 )
                  break;
                if ( v85 == -1 )
                  goto LABEL_124;
                ++v86;
                v87 = v66;
                v66 = &v45[v84];
              }
LABEL_286:
              v66 = v113;
LABEL_92:
              LODWORD(v215) = v83;
              if ( v85 != -1 )
                --HIDWORD(v215);
              goto LABEL_94;
            }
LABEL_82:
            LODWORD(v215) = v83;
LABEL_94:
            *v66 = *v62;
            goto LABEL_64;
          }
          v45 = (__int64 *)v70;
          v83 = 1;
        }
        if ( !(_DWORD)v46 )
          goto LABEL_181;
        goto LABEL_80;
      }
      v53 = nullptr;
      v54 = 0;
LABEL_53:
      operator delete(v53, v54, 8);
      if ( v208 )
      {
        v55 = v207;
      }
      else
      {
        v55 = v207 + 2;
        v208 = *(unsigned __int16 *)v207;
      }
      v207 = v55 + 4;
      v56 = sub_1EA7E80(&v207);
      v57 = sub_1EA7E80(&v207);
      v8 = &v207[v56 + v57];
      v58 = v209-- == 1;
      v59 = v208 - 1;
      v207 = v8;
      --v208;
      if ( v58 )
        goto LABEL_185;
      v9 = v59 == 0 ? 6LL : 4LL;
    }
    v206.m128_u64[0] = 0;
LABEL_13:
    v27 = *(_QWORD *)(v190 + 24);
    v28 = (((((((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
            | (2 * v17 - 1)
            | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 4)
          | (((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
          | (2 * v17 - 1)
          | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 8)
        | (((((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
          | (2 * v17 - 1)
          | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 4)
        | (((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
        | (2 * v17 - 1)
        | ((unsigned __int64)(2 * v17 - 1) >> 1);
    v29 = ((v28 >> 16) | v28) + 1;
    if ( (unsigned int)v29 < 0x40 )
      LODWORD(v29) = 64;
    *(_DWORD *)(v190 + 40) = v29;
    v30 = (_DWORD *)sub_22300B0(72LL * (unsigned int)v29, 8, 64, v15, v13, v14);
    *(_QWORD *)(v190 + 24) = v30;
    if ( !v27 )
    {
      v176 = *(unsigned int *)(v190 + 40);
      *(_QWORD *)(v190 + 32) = 0;
      for ( n = &v30[18 * v176]; n != v30; *(v30 - 14) = -1 )
      {
        *v30 = -1;
        v30 += 18;
        *((_QWORD *)v30 - 8) = 1;
      }
      goto LABEL_211;
    }
    v31 = *(unsigned int *)(v190 + 40);
    v32 = 72LL * v17;
    *(_QWORD *)(v190 + 32) = 0;
    for ( ii = &v30[18 * v31]; ii != v30; *(v30 - 14) = -1 )
    {
      *v30 = -1;
      v30 += 18;
      *((_QWORD *)v30 - 8) = 1;
    }
    if ( v27 == v27 + v32 )
      goto LABEL_210;
    v191 = v10;
    v194 = v11;
    v34 = v27;
    v196 = v27;
    while ( *(_DWORD *)v34 == -1 )
    {
      v37 = *(_QWORD *)(v34 + 8);
      if ( v37 == 1 )
      {
        if ( *(_DWORD *)(v34 + 16) != -1 )
          break;
      }
      else if ( v37 != 2 || *(_DWORD *)(v34 + 16) != -2 )
      {
        break;
      }
LABEL_24:
      v34 += 72;
      if ( v27 + v32 == v34 )
      {
LABEL_209:
        v10 = v191;
        v11 = v194;
        v27 = v196;
        goto LABEL_210;
      }
    }
    sub_1ED1DC0(v202, v34, &v213);
    v35 = v213;
    *(__m128i *)v213 = _mm_loadu_si128((const __m128i *)v34);
    *((_DWORD *)v35 + 4) = *(_DWORD *)(v34 + 16);
    *((_QWORD *)v35 + 3) = v35 + 40;
    *((_QWORD *)v35 + 4) = 0x400000000LL;
    if ( *(_DWORD *)(v34 + 32) )
      sub_1EB3E90((char ***)v35 + 3, (char ***)(v34 + 24));
    v36 = *(void **)(v34 + 24);
    ++*(_DWORD *)(v190 + 32);
    if ( v36 != (void *)(v34 + 40) )
      free(v36);
    goto LABEL_24;
  }
LABEL_189:
  if ( (*a1 & 2) != 0 )
    *(_DWORD *)((*a1 & 0xFFFFFFFFFFFFFFFCLL) + 8) = 0;
  else
    *a1 = 0;
  return sub_1EB0B70((__int64 *)a1, v2 | 4);
}
