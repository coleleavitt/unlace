__m128i *__fastcall sub_6B3C80(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __m128i *result; // rax
  _QWORD *v7; // r13
  __int64 v8; // r12
  const __m128i *v9; // rbp
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  int v13; // ecx
  int v14; // r15d
  int v15; // r11d
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  int *v18; // rdi
  int v19; // ecx
  unsigned int *v20; // r10
  char v21; // dl
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i *v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // r8
  unsigned __int32 v29; // ecx
  __m128i *v30; // rdx
  int v31; // r10d
  int *v32; // r8
  int v33; // r9d
  _DWORD *v34; // rax
  int v35; // esi
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rax
  __m128i *v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int32 v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // r14
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // eax
  int v49; // esi
  unsigned __int8 v50; // cl
  char v51; // r11
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rsi
  int v55; // r11d
  _DWORD *v56; // rdx
  int v57; // ecx
  __int64 v58; // rax
  _DWORD *v59; // rsi
  int *v60; // r14
  int *v61; // r12
  _QWORD *v62; // rbp
  int *v63; // rbx
  int v64; // r14d
  int v65; // eax
  int v66; // esi
  __int64 v67; // rsi
  __int64 v68; // r10
  int v69; // r8d
  int *v70; // rcx
  unsigned int v71; // edi
  int *v72; // rdx
  int v73; // r9d
  __int64 v74; // rax
  __m128 v75; // xmm0
  __int64 v76; // rsi
  __int64 v77; // rax
  _QWORD *v78; // r13
  void *v79; // rdi
  unsigned int v80; // eax
  _DWORD *v81; // rax
  int v82; // r11d
  _DWORD *v83; // rdx
  unsigned int v84; // edi
  __int64 v85; // rcx
  _DWORD *v86; // rsi
  int *v87; // r12
  int v88; // eax
  int v89; // ecx
  __int64 v90; // rcx
  __int64 v91; // r10
  int v92; // r8d
  __int64 v93; // rsi
  unsigned int v94; // edi
  __int64 v95; // rdx
  int v96; // r9d
  __int64 v97; // rax
  __m128 v98; // xmm0
  __int64 v99; // rcx
  __int64 v100; // rax
  _QWORD *v101; // r13
  void *v102; // rdi
  int v103; // ecx
  __int64 v104; // r10
  int v105; // edi
  int v106; // r12d
  _DWORD *v107; // r8
  unsigned int v108; // edi
  int v109; // r12d
  __int64 v110; // r10
  int v111; // ecx
  _DWORD *v112; // rax
  __int64 v113; // r9
  int v114; // r10d
  _DWORD *v115; // rax
  int v116; // ecx
  unsigned __int64 v117; // rdx
  unsigned int v118; // eax
  _DWORD *v119; // rax
  int v120; // r11d
  _DWORD *v121; // rdx
  unsigned int v122; // esi
  __int64 v123; // rdi
  _DWORD *v124; // rcx
  _QWORD *v125; // r12
  int *v126; // rbx
  int *v127; // rbp
  int v128; // r14d
  int v129; // r9d
  int v130; // edx
  int v131; // r8d
  __int64 v132; // r10
  int *v133; // rax
  unsigned int v134; // esi
  __int64 v135; // rcx
  int *v136; // rdx
  int v137; // edi
  __int64 v138; // rsi
  __m128 v139; // xmm0
  __int64 v140; // rdi
  __int64 v141; // rsi
  _QWORD *v142; // r13
  void *v143; // rdi
  unsigned int v144; // eax
  __int64 v145; // rax
  __int64 v146; // rcx
  int v147; // r11d
  _DWORD *v148; // rdx
  int v149; // esi
  __int64 v150; // rax
  _DWORD *v151; // rcx
  int *v152; // rbp
  _QWORD *v153; // r12
  int *v154; // rbx
  int v155; // r14d
  int v156; // r8d
  int v157; // edx
  __int64 v158; // rsi
  __int64 v159; // r10
  __int64 v160; // rcx
  int *v161; // rax
  unsigned int v162; // edi
  int *v163; // rdx
  int v164; // r9d
  __int64 v165; // rdi
  __m128 v166; // xmm0
  __int64 v167; // r8
  __int64 v168; // rdi
  _QWORD *v169; // r13
  void *v170; // rdi
  unsigned int v171; // esi
  __int64 v172; // r10
  int v173; // edi
  int v174; // r9d
  _DWORD *v175; // r8
  int v176; // esi
  int v177; // r9d
  __int64 v178; // r10
  int v179; // edi
  _DWORD *v180; // rax
  unsigned int v181; // r11d
  unsigned int v182; // r11d
  int *v183; // [rsp+0h] [rbp-A8h]
  unsigned int *v184; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v185; // [rsp+0h] [rbp-A8h]
  __int64 v186; // [rsp+8h] [rbp-A0h]
  unsigned int v187; // [rsp+10h] [rbp-98h]
  int v188; // [rsp+10h] [rbp-98h]
  int v189; // [rsp+10h] [rbp-98h]
  int v190; // [rsp+10h] [rbp-98h]
  const __m128i *v191; // [rsp+10h] [rbp-98h]
  int v192; // [rsp+10h] [rbp-98h]
  int v193; // [rsp+10h] [rbp-98h]
  int v194; // [rsp+10h] [rbp-98h]
  const __m128i *v195; // [rsp+10h] [rbp-98h]
  int v196; // [rsp+10h] [rbp-98h]
  const __m128i *v197; // [rsp+10h] [rbp-98h]
  unsigned __int32 v198; // [rsp+18h] [rbp-90h]
  unsigned int *v199; // [rsp+18h] [rbp-90h]
  _QWORD *v200; // [rsp+18h] [rbp-90h]
  int v201; // [rsp+18h] [rbp-90h]
  __int64 v202; // [rsp+18h] [rbp-90h]
  __int64 v203; // [rsp+18h] [rbp-90h]
  int v204; // [rsp+20h] [rbp-88h]
  unsigned __int64 v205; // [rsp+20h] [rbp-88h]
  _QWORD *v206; // [rsp+20h] [rbp-88h]
  _QWORD *v207; // [rsp+20h] [rbp-88h]
  _QWORD *v208; // [rsp+20h] [rbp-88h]
  int v209; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int32 v210; // [rsp+3Ch] [rbp-6Ch] BYREF
  __m128i v211; // [rsp+40h] [rbp-68h] BYREF
  __m128i v212; // [rsp+50h] [rbp-58h] BYREF
  __int8 v213; // [rsp+60h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 2160);
  v3 = (_QWORD *)(a1 + 2192);
  v4 = a1 + 18224;
  v5 = v2 + 536;
  if ( (a2[2].m128i_i8[0] & 0x1C) == 0 )
    return (__m128i *)nullsub_704(v4, a2, v5, v3);
  result = (__m128i *)((a2[2].m128i_i8[0] & 0x1Cu) - 4);
  v7 = v3;
  v8 = v5;
  v9 = a2;
  v10 = (_QWORD *)v4;
  if ( (((a2[2].m128i_i8[0] & 0x1C) - 4) & 0xF8) != 0 || *(_BYTE *)(v5 + 24) )
  {
    v11 = sub_633200(*(_QWORD *)v4, a2->m128i_i32[0]);
    v12 = *(unsigned int *)(v4 + 24);
    v13 = 0;
    v14 = v11;
    v15 = v11;
    v210 = HIDWORD(v11);
    v186 = v4 + 8;
    v183 = *(int **)(v4 + 8);
    if ( !(_DWORD)v12 )
      goto LABEL_73;
    v16 = (unsigned int)(v12 - 1);
    LODWORD(v17) = v11 & (v12 - 1);
    v18 = &v183[14 * (unsigned int)v17];
    v19 = *v18;
    if ( *v18 == (_DWORD)v11 )
    {
      if ( *((_QWORD *)v18 + 6) )
        goto LABEL_14;
      goto LABEL_43;
    }
    v187 = v11 & (v12 - 1);
    v31 = *v18;
    v32 = &v183[14 * v187];
    v33 = 1;
    v34 = nullptr;
    while ( v31 )
    {
      if ( v31 == -1 && !v34 )
        v34 = v32;
      v201 = v33 + 1;
      v113 = (unsigned int)v16 & (v33 + v187);
      v187 = v113;
      v32 = &v183[14 * v113];
      v31 = *v32;
      if ( *v32 == v15 )
      {
        if ( *((_QWORD *)v32 + 6) )
        {
          v114 = 1;
          v115 = nullptr;
          while ( v19 )
          {
            if ( v19 == -1 && !v115 )
              v115 = v18;
            v17 = (unsigned int)v16 & ((_DWORD)v17 + v114);
            v18 = &v183[14 * v17];
            v19 = *v18;
            if ( *v18 == v15 )
              goto LABEL_14;
            ++v114;
          }
          if ( !v115 )
            v115 = v18;
          v116 = *((_DWORD *)v10 + 4) + 1;
          if ( 4 * v116 < (unsigned int)(3 * v12) )
          {
            if ( (unsigned int)v12 >> 3 < (int)v12 - *((_DWORD *)v10 + 5) - v116 )
              goto LABEL_155;
            v196 = v15;
            v144 = (((((((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
                      | ((v16 | (v16 >> 1)) >> 2)
                      | v16
                      | (v16 >> 1)) >> 8)
                    | ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
                    | ((v16 | (v16 >> 1)) >> 2)
                    | v16
                    | (v16 >> 1)) >> 16)
                  | ((((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
                    | ((v16 | (v16 >> 1)) >> 2)
                    | v16
                    | (v16 >> 1)) >> 8)
                  | ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
                  | ((v16 | (v16 >> 1)) >> 2)
                  | v16
                  | (v16 >> 1))
                 + 1;
            if ( v144 < 0x40 )
              v144 = 64;
            *((_DWORD *)v10 + 6) = v144;
            v145 = sub_25CC9C0(56LL * v144, 8);
            v146 = *((unsigned int *)v10 + 6);
            v147 = v196;
            v148 = (_DWORD *)v145;
            v10[1] = v145;
            v149 = v146;
            v150 = 56 * v146;
            v151 = &v148[14 * v146];
            if ( v183 )
            {
              v10[2] = 0;
              if ( v150 )
              {
                if ( (((_BYTE)v151 - (_BYTE)v148) & 8) == 0 || (*v148 = 0, v148 += 14, v148 != v151) )
                {
                  do
                  {
                    *v148 = 0;
                    v148 += 28;
                    *(v148 - 14) = 0;
                  }
                  while ( v148 != v151 );
                }
              }
              v197 = v9;
              v152 = &v183[14 * v12];
              v203 = v8;
              v153 = v10;
              v208 = v7;
              v154 = v183;
              v155 = v147;
              do
              {
                v156 = *v154;
                if ( (unsigned int)(*v154 + 1) > 1 )
                {
                  v157 = *((_DWORD *)v153 + 6);
                  if ( !v157 )
                  {
                    dword_0 = *v154;
                    BUG();
                  }
                  v158 = (unsigned int)(v157 - 1);
                  v159 = v153[1];
                  v160 = 1;
                  v161 = nullptr;
                  v162 = v156 & (v157 - 1);
                  v163 = (int *)(v159 + 56LL * v162);
                  v164 = *v163;
                  if ( *v163 != v156 )
                  {
                    while ( v164 )
                    {
                      if ( v164 == -1 && !v161 )
                        v161 = v163;
                      v182 = v160 + 1;
                      v160 = (unsigned int)v158 & (v162 + (_DWORD)v160);
                      v162 = v160;
                      v163 = (int *)(v159 + 56LL * (unsigned int)v160);
                      v164 = *v163;
                      if ( v156 == *v163 )
                        goto LABEL_187;
                      v160 = v182;
                    }
                    if ( v161 )
                      v163 = v161;
                  }
LABEL_187:
                  *v163 = *v154;
                  v165 = *((_QWORD *)v154 + 3);
                  if ( v165 )
                  {
                    v166 = _mm_loadh_ps((const double *)v154 + 4);
                    v163[4] = v154[4];
                    v167 = *((_QWORD *)v154 + 5);
                    *(__m128 *)(v163 + 6) = v166;
                    *((_QWORD *)v163 + 5) = v167;
                    *(_QWORD *)(v165 + 8) = v163 + 4;
                    v168 = *((_QWORD *)v154 + 6);
                    *((_QWORD *)v154 + 3) = 0;
                    *((_QWORD *)v163 + 6) = v168;
                    v163 = v154 + 4;
                    *((_QWORD *)v154 + 4) = v154 + 4;
                    *((_QWORD *)v154 + 5) = v154 + 4;
                    *((_QWORD *)v154 + 6) = 0;
                  }
                  else
                  {
                    v163[4] = 0;
                    *((_QWORD *)v163 + 3) = 0;
                    *((_QWORD *)v163 + 4) = v163 + 4;
                    *((_QWORD *)v163 + 5) = v163 + 4;
                    *((_QWORD *)v163 + 6) = 0;
                  }
                  ++*((_DWORD *)v153 + 4);
                  v169 = *((_QWORD **)v154 + 3);
                  while ( v169 )
                  {
                    sub_AA49E0(v169[3], v158, v163, v160);
                    v170 = v169;
                    v169 = (_QWORD *)v169[2];
                    v158 = 48;
                    operator delete(v170, 0x30u);
                  }
                }
                v154 += 14;
              }
              while ( v152 != v154 );
              v10 = v153;
              v9 = v197;
              v8 = v203;
              v7 = v208;
              operator delete();
              v148 = (_DWORD *)v10[1];
              v149 = *((_DWORD *)v10 + 6);
              v147 = v155;
              v116 = *((_DWORD *)v10 + 4) + 1;
            }
            else
            {
              v10[2] = 0;
              v180 = v148;
              if ( v148 != v151 )
              {
                if ( (((_BYTE)v151 - (_BYTE)v148) & 8) == 0 || (v180 = v148 + 14, *v148 = 0, v148 + 14 != v151) )
                {
                  do
                  {
                    *v180 = 0;
                    v180 += 28;
                    *(v180 - 14) = 0;
                  }
                  while ( v180 != v151 );
                }
              }
              v116 = 1;
            }
            if ( v149 )
            {
              v176 = v149 - 1;
              v177 = 1;
              v175 = nullptr;
              LODWORD(v178) = v14 & v176;
              v115 = &v148[14 * (v14 & v176)];
              v179 = *v115;
              if ( *v115 != v14 )
              {
                while ( v179 )
                {
                  if ( v179 == -1 && !v175 )
                    v175 = v115;
                  v178 = v176 & (unsigned int)(v178 + v177);
                  v115 = &v148[14 * v178];
                  v179 = *v115;
                  if ( *v115 == v147 )
                    goto LABEL_155;
                  ++v177;
                }
                goto LABEL_197;
              }
              goto LABEL_155;
            }
LABEL_5:
            *((_DWORD *)v10 + 4) = v116;
            BUG();
          }
          v117 = (unsigned int)(2 * v12 - 1);
          v194 = v15;
          v118 = (((((((((v117 | (v117 >> 1)) >> 2) | v117 | (v117 >> 1)) >> 4)
                    | ((v117 | (v117 >> 1)) >> 2)
                    | v117
                    | (v117 >> 1)) >> 8)
                  | ((((v117 | (v117 >> 1)) >> 2) | v117 | (v117 >> 1)) >> 4)
                  | ((v117 | (v117 >> 1)) >> 2)
                  | v117
                  | (v117 >> 1)) >> 16)
                | ((((((v117 | (v117 >> 1)) >> 2) | v117 | (v117 >> 1)) >> 4)
                  | ((v117 | (v117 >> 1)) >> 2)
                  | v117
                  | (v117 >> 1)) >> 8)
                | ((((v117 | (v117 >> 1)) >> 2) | v117 | (v117 >> 1)) >> 4)
                | ((v117 | (v117 >> 1)) >> 2)
                | v117
                | (v117 >> 1))
               + 1;
          if ( v118 < 0x40 )
            v118 = 64;
          *((_DWORD *)v10 + 6) = v118;
          v119 = (_DWORD *)sub_25CC9C0(56LL * v118, 8);
          v120 = v194;
          v121 = v119;
          v10[1] = v119;
          v122 = *((_DWORD *)v10 + 6);
          v123 = 14LL * v122;
          v124 = &v119[v123];
          if ( v183 )
          {
            v10[2] = 0;
            if ( v123 * 4 )
            {
              if ( ((56 * (_BYTE)v122) & 8) == 0 || (*v119 = 0, v121 = v119 + 14, v119 + 14 != v124) )
              {
                do
                {
                  *v121 = 0;
                  v121 += 28;
                  *(v121 - 14) = 0;
                }
                while ( v121 != v124 );
              }
            }
            v195 = v9;
            v202 = v8;
            v125 = v10;
            v126 = &v183[14 * v12];
            v127 = v183;
            v207 = v7;
            v128 = v120;
            do
            {
              v129 = *v127;
              if ( (unsigned int)(*v127 + 1) > 1 )
              {
                v130 = *((_DWORD *)v125 + 6);
                if ( !v130 )
                {
                  dword_0 = *v127;
                  BUG();
                }
                v131 = v130 - 1;
                v132 = v125[1];
                v133 = nullptr;
                v134 = (v130 - 1) & v129;
                v135 = 1;
                v136 = (int *)(v132 + 56LL * v134);
                v137 = *v136;
                if ( v129 != *v136 )
                {
                  while ( v137 )
                  {
                    if ( !v133 && v137 == -1 )
                      v133 = v136;
                    v181 = v135 + 1;
                    v135 = v131 & (v134 + (unsigned int)v135);
                    v134 = v135;
                    v136 = (int *)(v132 + 56LL * (unsigned int)v135);
                    v137 = *v136;
                    if ( v129 == *v136 )
                      goto LABEL_170;
                    v135 = v181;
                  }
                  if ( v133 )
                    v136 = v133;
                }
LABEL_170:
                *v136 = *v127;
                v138 = *((_QWORD *)v127 + 3);
                if ( v138 )
                {
                  v139 = _mm_loadh_ps((const double *)v127 + 4);
                  v136[4] = v127[4];
                  v140 = *((_QWORD *)v127 + 5);
                  *(__m128 *)(v136 + 6) = v139;
                  *((_QWORD *)v136 + 5) = v140;
                  *(_QWORD *)(v138 + 8) = v136 + 4;
                  v141 = *((_QWORD *)v127 + 6);
                  *((_QWORD *)v127 + 3) = 0;
                  *((_QWORD *)v136 + 6) = v141;
                  v136 = v127 + 4;
                  *((_QWORD *)v127 + 4) = v127 + 4;
                  *((_QWORD *)v127 + 5) = v127 + 4;
                  *((_QWORD *)v127 + 6) = 0;
                }
                else
                {
                  v141 = (__int64)(v136 + 4);
                  v136[4] = 0;
                  *((_QWORD *)v136 + 3) = 0;
                  *((_QWORD *)v136 + 4) = v136 + 4;
                  *((_QWORD *)v136 + 5) = v136 + 4;
                  *((_QWORD *)v136 + 6) = 0;
                }
                ++*((_DWORD *)v125 + 4);
                v142 = *((_QWORD **)v127 + 3);
                while ( v142 )
                {
                  sub_AA49E0(v142[3], v141, v136, v135);
                  v143 = v142;
                  v142 = (_QWORD *)v142[2];
                  v141 = 48;
                  operator delete(v143, 0x30u);
                }
              }
              v127 += 14;
            }
            while ( v126 != v127 );
            v10 = v125;
            v9 = v195;
            v8 = v202;
            v7 = v207;
            operator delete();
            v121 = (_DWORD *)v10[1];
            v122 = *((_DWORD *)v10 + 6);
            v120 = v128;
            v116 = *((_DWORD *)v10 + 4) + 1;
          }
          else
          {
            v10[2] = 0;
            if ( v119 != v124 )
            {
              if ( ((56 * (_BYTE)v122) & 8) == 0 || (v119 += 14, *v121 = 0, v121 + 14 != v124) )
              {
                do
                {
                  *v119 = 0;
                  v119 += 28;
                  *(v119 - 14) = 0;
                }
                while ( v119 != v124 );
              }
            }
            v116 = 1;
          }
          if ( !v122 )
            goto LABEL_5;
          v171 = v122 - 1;
          LODWORD(v172) = v14 & v171;
          v115 = &v121[14 * (v14 & v171)];
          v173 = *v115;
          if ( *v115 != v14 )
          {
            v174 = 1;
            v175 = nullptr;
            while ( v173 )
            {
              if ( !v175 && v173 == -1 )
                v175 = v115;
              v172 = v171 & ((_DWORD)v172 + v174);
              v115 = &v121[14 * v172];
              v173 = *v115;
              if ( *v115 == v120 )
                goto LABEL_155;
              ++v174;
            }
LABEL_197:
            if ( v175 )
              v115 = v175;
          }
LABEL_155:
          *((_DWORD *)v10 + 4) = v116;
          if ( *v115 )
            --*((_DWORD *)v10 + 5);
          *v115 = v14;
          *(_OWORD *)(v115 + 6) = 0;
          *(_OWORD *)(v115 + 10) = 0;
          *(_OWORD *)(v115 + 2) = 0;
          *((__m128i *)v115 + 2) = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)(v115 + 4),
                                     (__m128i)(unsigned __int64)(v115 + 4));
LABEL_14:
          v20 = *(unsigned int **)(std::_Rb_tree_decrement() + 40);
          v21 = (unsigned __int8)(v9[2].m128i_i8[0] & 0x40) >> 6;
          if ( v21 == ((v20[8] & 0x40) != 0)
            || !v21
            && (v20[8] & 0x40) != 0
            && (((unsigned __int8)v9[2].m128i_i8[0] >> 2) & 7u) - 1 <= 1
            && (v40 = *v10,
                v41 = *v20,
                v184 = v20,
                v42 = v9->m128i_i32[0],
                v211.m128i_i8[0] = 0,
                v198 = v42,
                v43 = sub_CAE7F0(v40, v41, &v211),
                !v211.m128i_i8[0])
            && (v204 = v43, v44 = sub_CAE7F0(v40, v198, &v211), v211.m128i_i8[0] != 1)
            && (v20 = v184, v204 == v44) )
          {
            v45 = *v10;
            v199 = v20;
            v188 = v9->m128i_i32[0];
            v185 = sub_633200(*v10, v20[1]);
            v46 = sub_633200(v45, v188);
            if ( (_DWORD)v185 == (_DWORD)v46 )
            {
              v189 = HIDWORD(v46);
              v205 = HIDWORD(v46);
              v211.m128i_i8[0] = 0;
              v47 = sub_CAC050(v45, (unsigned int)v185, &v211);
              if ( !v211.m128i_i8[0] )
              {
                v48 = HIDWORD(v185);
                if ( (_DWORD)v205 == HIDWORD(v185) )
                {
LABEL_94:
                  sub_AA5310(&v211, *v10, ((unsigned __int64)v9->m128i_u32[1] << 32) | *v199, v8, 1);
                  v209 = v14;
                  sub_AA6940(v186, &v209);
                  result = *(__m128i **)(std::_Rb_tree_decrement() + 40);
                  *result = _mm_load_si128(&v211);
                  result[1] = _mm_load_si128(&v212);
                  result[2].m128i_i8[0] = v213;
                  return result;
                }
                v49 = 0;
                while ( 1 )
                {
                  v50 = *(_BYTE *)(v47 + v48);
                  if ( v50 > 0x20u )
                    break;
                  if ( ((1LL << v50) & 0x100001A00LL) != 0 )
                  {
                    ++v48;
                  }
                  else
                  {
                    if ( ((1LL << v50) & 0x2400) == 0 )
                      break;
                    if ( (unsigned int)++v49 > 1 )
                      break;
                    if ( v189 == v48 + 1 )
                      goto LABEL_94;
                    v51 = *(_BYTE *)(v47 + v48 + 1);
                    if ( v51 != 10 && v51 != 13 || v50 == v51 )
                    {
                      ++v48;
                      continue;
                    }
                    v48 += 2;
                  }
                  if ( v189 == v48 )
                    goto LABEL_94;
                }
              }
            }
          }
          v22 = *v7;
          v7[10] += 40LL;
          v23 = (v22 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v7[1] >= v23 + 40 && v22 )
            *v7 = v23 + 40;
          else
            v23 = sub_AA48A0(v7, 40, 4);
          v24 = _mm_loadu_si128(v9);
          v209 = v14;
          *(__m128i *)v23 = v24;
          *(__m128i *)(v23 + 16) = _mm_loadu_si128(v9 + 1);
          *(_QWORD *)(v23 + 32) = v9[2].m128i_i64[0];
          v25 = sub_AA6940(v186, &v209);
          v26 = *(__m128i **)(v25 + 16);
          v27 = v25;
          v28 = v25 + 8;
          if ( v26 )
          {
            v29 = v210;
            result = (__m128i *)(v25 + 8);
            while ( 1 )
            {
              if ( v26[2].m128i_i32[0] < v210 )
              {
                v30 = (__m128i *)v26[1].m128i_i64[1];
                if ( !v30 )
                {
                  v26 = result;
LABEL_29:
                  if ( (__m128i *)v28 != v26 )
                  {
LABEL_30:
                    if ( v29 < v26[2].m128i_i32[0] )
                      goto LABEL_31;
LABEL_32:
                    v26[2].m128i_i64[1] = v23;
                    return result;
                  }
LABEL_31:
                  v211.m128i_i64[0] = (__int64)&v210;
                  result = (__m128i *)sub_AA4BC0(v27, v26, &v211);
                  v26 = result;
                  goto LABEL_32;
                }
              }
              else
              {
                v30 = (__m128i *)v26[1].m128i_i64[0];
                if ( !v30 )
                  goto LABEL_29;
                result = v26;
              }
              v26 = v30;
            }
          }
LABEL_72:
          v26 = (__m128i *)v28;
          goto LABEL_31;
        }
LABEL_43:
        v36 = *v7;
        v7[10] += 40LL;
        v23 = (v36 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( v7[1] >= v23 + 40 && v36 )
          *v7 = v23 + 40;
        else
          v23 = sub_AA48A0(v7, 40, 4);
        v37 = _mm_loadu_si128(v9);
        v209 = v14;
        *(__m128i *)v23 = v37;
        *(__m128i *)(v23 + 16) = _mm_loadu_si128(v9 + 1);
        *(_QWORD *)(v23 + 32) = v9[2].m128i_i64[0];
        v38 = sub_AA6940(v186, &v209);
        v26 = *(__m128i **)(v38 + 16);
        v27 = v38;
        v28 = v38 + 8;
        if ( v26 )
        {
          v29 = v210;
          result = (__m128i *)(v38 + 8);
          while ( 1 )
          {
            if ( v26[2].m128i_i32[0] < v210 )
            {
              v39 = (__m128i *)v26[1].m128i_i64[1];
              if ( !v39 )
              {
                v26 = result;
LABEL_54:
                if ( v26 != (__m128i *)v28 )
                  goto LABEL_30;
                goto LABEL_31;
              }
            }
            else
            {
              v39 = (__m128i *)v26[1].m128i_i64[0];
              if ( !v39 )
                goto LABEL_54;
              result = v26;
            }
            v26 = v39;
          }
        }
        goto LABEL_72;
      }
      v33 = v201;
    }
    if ( !v34 )
      v34 = v32;
    v35 = *((_DWORD *)v10 + 4) + 1;
    v13 = 2 * v12;
    if ( 4 * v35 < (unsigned int)(3 * v12) )
    {
      if ( (unsigned int)v12 >> 3 < (int)v12 - *((_DWORD *)v10 + 5) - v35 )
      {
LABEL_40:
        *((_DWORD *)v10 + 4) = v35;
        if ( *v34 )
          --*((_DWORD *)v10 + 5);
        *v34 = v14;
        *(_OWORD *)(v34 + 6) = 0;
        *(_OWORD *)(v34 + 10) = 0;
        *(_OWORD *)(v34 + 2) = 0;
        *((__m128i *)v34 + 2) = _mm_unpacklo_epi64(
                                  (__m128i)(unsigned __int64)(v34 + 4),
                                  (__m128i)(unsigned __int64)(v34 + 4));
        goto LABEL_43;
      }
      v192 = v15;
      v80 = (((((((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4) | ((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 8)
             | ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
             | ((v16 | (v16 >> 1)) >> 2)
             | v16
             | (v16 >> 1)) >> 16)
           | ((((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4) | ((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 8)
           | ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
           | ((v16 | (v16 >> 1)) >> 2)
           | v16
           | (v16 >> 1))
          + 1;
      if ( v80 < 0x40 )
        v80 = 64;
      *((_DWORD *)v10 + 6) = v80;
      v81 = (_DWORD *)sub_25CC9C0(56LL * v80, 8);
      v82 = v192;
      v83 = v81;
      v10[1] = v81;
      v84 = *((_DWORD *)v10 + 6);
      v85 = 14LL * v84;
      v86 = &v81[v85];
      if ( v183 )
      {
        v10[2] = 0;
        if ( v85 * 4 )
        {
          if ( ((56 * (_BYTE)v84) & 8) == 0 || (*v81 = 0, v83 = v81 + 14, v81 + 14 != v86) )
          {
            do
            {
              *v83 = 0;
              v83 += 28;
              *(v83 - 14) = 0;
            }
            while ( v83 != v86 );
          }
        }
        v87 = v183;
        v206 = v7;
        do
        {
          v88 = *v87;
          if ( (unsigned int)(*v87 + 1) > 1 )
          {
            v89 = *((_DWORD *)v10 + 6);
            if ( !v89 )
            {
              dword_0 = *v87;
              BUG();
            }
            v90 = (unsigned int)(v89 - 1);
            v91 = v10[1];
            v92 = 1;
            v93 = 0;
            v94 = v88 & v90;
            v95 = v91 + 56LL * (v88 & (unsigned int)v90);
            v96 = *(_DWORD *)v95;
            if ( *(_DWORD *)v95 != v88 )
            {
              while ( v96 )
              {
                if ( v96 == -1 && !v93 )
                  v93 = v95;
                v94 = v90 & (v94 + v92);
                v95 = v91 + 56LL * v94;
                v96 = *(_DWORD *)v95;
                if ( v88 == *(_DWORD *)v95 )
                  goto LABEL_108;
                ++v92;
              }
              if ( v93 )
                v95 = v93;
            }
LABEL_108:
            *(_DWORD *)v95 = *v87;
            v97 = *((_QWORD *)v87 + 3);
            if ( v97 )
            {
              v98 = _mm_loadh_ps((const double *)v87 + 4);
              *(_DWORD *)(v95 + 16) = v87[4];
              v99 = *((_QWORD *)v87 + 5);
              *(__m128 *)(v95 + 24) = v98;
              *(_QWORD *)(v95 + 40) = v99;
              v90 = v95 + 16;
              *(_QWORD *)(v97 + 8) = v95 + 16;
              v100 = *((_QWORD *)v87 + 6);
              *((_QWORD *)v87 + 3) = 0;
              *(_QWORD *)(v95 + 48) = v100;
              *((_QWORD *)v87 + 4) = v87 + 4;
              *((_QWORD *)v87 + 5) = v87 + 4;
              *((_QWORD *)v87 + 6) = 0;
            }
            else
            {
              *(_DWORD *)(v95 + 16) = 0;
              *(_QWORD *)(v95 + 24) = 0;
              *(_QWORD *)(v95 + 32) = v95 + 16;
              *(_QWORD *)(v95 + 40) = v95 + 16;
              *(_QWORD *)(v95 + 48) = 0;
            }
            ++*((_DWORD *)v10 + 4);
            v101 = *((_QWORD **)v87 + 3);
            while ( v101 )
            {
              sub_AA49E0(v101[3], v93, v95, v90);
              v102 = v101;
              v101 = (_QWORD *)v101[2];
              v93 = 48;
              operator delete(v102, 0x30u);
            }
          }
          v87 += 14;
        }
        while ( &v183[14 * v12] != v87 );
        v7 = v206;
        operator delete();
        v83 = (_DWORD *)v10[1];
        v84 = *((_DWORD *)v10 + 6);
        v82 = v192;
        v35 = *((_DWORD *)v10 + 4) + 1;
      }
      else
      {
        v10[2] = 0;
        if ( v81 != v86 )
        {
          if ( ((56 * (_BYTE)v84) & 8) == 0 || (v81 += 14, *v83 = 0, v83 + 14 != v86) )
          {
            do
            {
              *v81 = 0;
              v81 += 28;
              *(v81 - 14) = 0;
            }
            while ( v81 != v86 );
          }
        }
        v35 = 1;
      }
      if ( v84 )
      {
        v108 = v84 - 1;
        v109 = 1;
        v107 = nullptr;
        LODWORD(v110) = v14 & v108;
        v34 = &v83[14 * (v14 & v108)];
        v111 = *v34;
        if ( *v34 == v14 )
          goto LABEL_40;
        while ( v111 )
        {
          if ( v111 == -1 && !v107 )
            v107 = v34;
          v110 = v108 & ((_DWORD)v110 + v109);
          v34 = &v83[14 * v110];
          v111 = *v34;
          if ( *v34 == v82 )
            goto LABEL_40;
          ++v109;
        }
        goto LABEL_119;
      }
    }
    else
    {
LABEL_73:
      v190 = v15;
      v52 = ((((((((((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
                 | (unsigned int)(v13 - 1)
                 | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 4)
               | (((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
               | (unsigned int)(v13 - 1)
               | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
               | (unsigned int)(v13 - 1)
               | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 4)
             | (((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
             | (unsigned int)(v13 - 1)
             | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
               | (unsigned int)(v13 - 1)
               | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 4)
             | (((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
             | (unsigned int)(v13 - 1)
             | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
             | (unsigned int)(v13 - 1)
             | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 4)
           | (((unsigned int)(v13 - 1) | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1)) >> 2)
           | (unsigned int)(v13 - 1)
           | ((unsigned __int64)(unsigned int)(v13 - 1) >> 1))
          + 1;
      if ( (unsigned int)v52 < 0x40 )
        LODWORD(v52) = 64;
      *((_DWORD *)v10 + 6) = v52;
      v53 = sub_25CC9C0(56LL * (unsigned int)v52, 8);
      v54 = *((unsigned int *)v10 + 6);
      v55 = v190;
      v56 = (_DWORD *)v53;
      v10[1] = v53;
      v57 = v54;
      v58 = 56 * v54;
      v59 = &v56[14 * v54];
      if ( v183 )
      {
        v10[2] = 0;
        v60 = &v183[14 * v12];
        if ( v58 )
        {
          if ( (((_BYTE)v59 - (_BYTE)v56) & 8) == 0 || (*v56 = 0, v56 += 14, v56 != v59) )
          {
            do
            {
              *v56 = 0;
              v56 += 28;
              *(v56 - 14) = 0;
            }
            while ( v56 != v59 );
          }
        }
        v61 = v183;
        if ( v183 != v60 )
        {
          v191 = v9;
          v62 = v10;
          v63 = v60;
          v64 = v55;
          v200 = v7;
          do
          {
            v65 = *v61;
            if ( (unsigned int)(*v61 + 1) > 1 )
            {
              v66 = *((_DWORD *)v62 + 6);
              if ( !v66 )
              {
                dword_0 = *v61;
                BUG();
              }
              v67 = (unsigned int)(v66 - 1);
              v68 = v62[1];
              v69 = 1;
              v70 = nullptr;
              v71 = v65 & v67;
              v72 = (int *)(v68 + 56LL * (v65 & (unsigned int)v67));
              v73 = *v72;
              if ( v65 != *v72 )
              {
                while ( v73 )
                {
                  if ( v73 == -1 && !v70 )
                    v70 = v72;
                  v71 = v67 & (v71 + v69);
                  v72 = (int *)(v68 + 56LL * v71);
                  v73 = *v72;
                  if ( v65 == *v72 )
                    goto LABEL_86;
                  ++v69;
                }
                if ( v70 )
                  v72 = v70;
              }
LABEL_86:
              *v72 = *v61;
              v74 = *((_QWORD *)v61 + 3);
              if ( v74 )
              {
                v75 = _mm_loadh_ps((const double *)v61 + 4);
                v72[4] = v61[4];
                v76 = *((_QWORD *)v61 + 5);
                *(__m128 *)(v72 + 6) = v75;
                *((_QWORD *)v72 + 5) = v76;
                v67 = (__int64)(v72 + 4);
                *(_QWORD *)(v74 + 8) = v72 + 4;
                v77 = *((_QWORD *)v61 + 6);
                *((_QWORD *)v61 + 3) = 0;
                *((_QWORD *)v72 + 6) = v77;
                *((_QWORD *)v61 + 4) = v61 + 4;
                *((_QWORD *)v61 + 5) = v61 + 4;
                *((_QWORD *)v61 + 6) = 0;
              }
              else
              {
                v72[4] = 0;
                *((_QWORD *)v72 + 3) = 0;
                *((_QWORD *)v72 + 4) = v72 + 4;
                *((_QWORD *)v72 + 5) = v72 + 4;
                *((_QWORD *)v72 + 6) = 0;
              }
              ++*((_DWORD *)v62 + 4);
              v78 = *((_QWORD **)v61 + 3);
              while ( v78 )
              {
                sub_AA49E0(v78[3], v67, v72, v70);
                v79 = v78;
                v78 = (_QWORD *)v78[2];
                v67 = 48;
                operator delete(v79, 0x30u);
              }
            }
            v61 += 14;
          }
          while ( v63 != v61 );
          v10 = v62;
          v7 = v200;
          v9 = v191;
          v55 = v64;
        }
        v193 = v55;
        operator delete();
        v56 = (_DWORD *)v10[1];
        v57 = *((_DWORD *)v10 + 6);
        v55 = v193;
        v35 = *((_DWORD *)v10 + 4) + 1;
      }
      else
      {
        v10[2] = 0;
        v112 = v56;
        if ( v56 != v59 )
        {
          if ( (((_BYTE)v59 - (_BYTE)v56) & 8) == 0 || (v112 = v56 + 14, *v56 = 0, v56 + 14 != v59) )
          {
            do
            {
              *v112 = 0;
              v112 += 28;
              *(v112 - 14) = 0;
            }
            while ( v112 != v59 );
          }
        }
        v35 = 1;
      }
      if ( v57 )
      {
        v103 = v57 - 1;
        LODWORD(v104) = v14 & v103;
        v34 = &v56[14 * (v14 & v103)];
        v105 = *v34;
        if ( *v34 == v14 )
          goto LABEL_40;
        v106 = 1;
        v107 = nullptr;
        while ( v105 )
        {
          if ( v105 == -1 && !v107 )
            v107 = v34;
          v104 = v103 & (unsigned int)(v104 + v106);
          v34 = &v56[14 * v104];
          v105 = *v34;
          if ( *v34 == v55 )
            goto LABEL_40;
          ++v106;
        }
LABEL_119:
        if ( v107 )
          v34 = v107;
        goto LABEL_40;
      }
    }
    *((_DWORD *)v10 + 4) = v35;
    BUG();
  }
  return result;
}

