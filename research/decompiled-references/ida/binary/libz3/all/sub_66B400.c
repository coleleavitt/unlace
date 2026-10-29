__int64 __fastcall sub_66B400(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  _QWORD *v4; // rbp
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 result; // rax
  _QWORD *v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebp
  unsigned int v13; // edx
  unsigned int v14; // edx
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 *v19; // r11
  int v20; // esi
  unsigned int v21; // edx
  __int64 *v22; // rcx
  __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 *i; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // r11
  __int64 *v29; // r15
  unsigned int v30; // edx
  __int64 v31; // rdi
  __int64 *v32; // rsi
  int v33; // ecx
  __int64 v34; // rdx
  __int64 *v35; // r10
  __int64 *j; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 *v39; // r11
  unsigned int v40; // edx
  __int64 *v41; // rsi
  __int64 v42; // rdx
  __int64 *v43; // r10
  __int64 *k; // rax
  __int64 v45; // rdx
  void *v46; // r15
  unsigned int v47; // r14d
  unsigned int v48; // r12d
  unsigned int v49; // r15d
  size_t v50; // rsi
  unsigned int *v51; // rdx
  unsigned int v52; // edx
  __int64 v53; // rdx
  _QWORD *v54; // rdi
  __int64 v55; // r12
  unsigned int v56; // r14d
  size_t v57; // rsi
  unsigned int *v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rdi
  _QWORD *v63; // rax
  __int64 v64; // rdx
  unsigned int v65; // r12d
  unsigned int v66; // r14d
  size_t v67; // rsi
  unsigned int *v68; // rdx
  unsigned int v69; // edx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdx
  void *v73; // rbp
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 *v77; // rcx
  __int64 v78; // rdi
  unsigned int v79; // edx
  int v80; // eax
  unsigned int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  char *v85; // r15
  __int64 v86; // rdx
  __int64 v87; // rax
  char *v88; // rcx
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rdi
  __int64 v92; // rdx
  int v93; // esi
  __int64 v94; // rdi
  __int64 v95; // rsi
  char v96; // r11
  char v97; // r11
  __int64 v98; // rdi
  __int64 v99; // rsi
  char v100; // r11
  char v101; // r11
  _QWORD *v102; // rcx
  __int64 v103; // rdi
  unsigned int v104; // edx
  int v105; // eax
  unsigned int v106; // eax
  _QWORD *v107; // rsi
  __int64 v108; // rdi
  unsigned int v109; // edx
  int v110; // eax
  unsigned int v111; // eax
  __m128i *v112; // rax
  __m128i *v113; // r11
  __m128i *v114; // rdx
  __int64 v115; // rax
  const __m128i *v116; // r15
  unsigned int v117; // r9d
  __int64 v118; // rax
  __m128i *v119; // r8
  __m128i *v120; // rcx
  __int64 v121; // rdi
  unsigned int v122; // r13d
  unsigned int v123; // r9d
  const __m128i *v124; // rbp
  __int64 v125; // r8
  __int64 v126; // r14
  unsigned int v127; // eax
  __m128i *v128; // rbx
  unsigned __int64 v129; // rcx
  __m128i *v130; // r12
  unsigned int v131; // r11d
  __int64 v132; // rax
  __m128i *v133; // rdx
  __m128i *v134; // rax
  _QWORD *v135; // rax
  unsigned __int64 v136; // r14
  __int64 *v137; // r12
  __int64 v138; // rsi
  __int64 v139; // rdi
  unsigned __int64 v140; // r14
  __int64 *v141; // r12
  __int64 v142; // rsi
  __int64 v143; // rdi
  _QWORD *v144; // rax
  _QWORD *v145; // rax
  __m128i *v146; // rax
  __m128i *v147; // r11
  __m128i *v148; // rdx
  __int64 v149; // rax
  const __m128i *v150; // r15
  unsigned int v151; // r9d
  __int64 v152; // rax
  __m128i *v153; // r8
  __m128i *v154; // rcx
  __int64 v155; // rdi
  unsigned int v156; // r13d
  unsigned int v157; // r9d
  const __m128i *v158; // rbp
  __int64 v159; // r8
  __int64 v160; // r14
  unsigned int v161; // eax
  __m128i *v162; // rbx
  unsigned __int64 v163; // rcx
  __m128i *v164; // r12
  unsigned int v165; // r11d
  __int64 v166; // rax
  __m128i *v167; // rdx
  __m128i *v168; // rax
  char *v169; // rbx
  void *v170; // rbp
  char *v171; // rsi
  __int64 v172; // rdx
  char **exception; // rbp
  __int64 v174; // rdx
  unsigned int v175; // [rsp+1Ch] [rbp-9Ch]
  __int64 v176; // [rsp+20h] [rbp-98h]
  __int64 v177; // [rsp+28h] [rbp-90h]
  unsigned int v178; // [rsp+28h] [rbp-90h]
  unsigned int v179; // [rsp+28h] [rbp-90h]
  __m128i *v180; // [rsp+28h] [rbp-90h]
  __m128i *v181; // [rsp+28h] [rbp-90h]
  unsigned int v182; // [rsp+30h] [rbp-88h]
  unsigned int v183; // [rsp+30h] [rbp-88h]
  char *v184; // [rsp+30h] [rbp-88h]
  unsigned int v185; // [rsp+38h] [rbp-80h]
  char *v186; // [rsp+40h] [rbp-78h]
  unsigned int v187; // [rsp+48h] [rbp-70h]
  __int64 v188; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v189[2]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v190[10]; // [rsp+68h] [rbp-50h] BYREF

  v2 = a1;
  v4 = *(_QWORD **)(a1 + 176);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = *(_QWORD *)(v2 + 168);
          v8 = (*(_DWORD *)(v6 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_8;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_8:
    v4 = *(_QWORD **)(v2 + 176);
    if ( v4 )
LABEL_9:
      *((_DWORD *)v4 - 1) = 0;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 184) + 200LL))(*(_QWORD *)(v2 + 184), a2);
  if ( a2 )
  {
    v10 = *(_QWORD **)(v2 + 232);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v2 + 224);
      v175 = *((_DWORD *)v10 - 1) - a2;
      v12 = *((_DWORD *)v10 + v175);
      v176 = 4LL * v175;
      if ( !v11 )
        goto LABEL_39;
      v13 = *(_DWORD *)(v11 - 4);
      if ( v12 >= v13 )
        goto LABEL_39;
    }
    else
    {
      v11 = *(_QWORD *)(v2 + 224);
      v175 = -a2;
      v12 = *(_DWORD *)(4LL * -a2);
      v176 = 4LL * -a2;
      if ( !v11 )
        goto LABEL_146;
      v13 = *(_DWORD *)(v11 - 4);
      if ( v12 >= v13 )
        goto LABEL_146;
    }
    v14 = v13 - 1;
    v15 = 8LL * v14;
    v16 = 8 * (v14 - (unsigned __int64)(v14 - v12));
    while ( 1 )
    {
      v17 = *(_QWORD *)(v11 + v15);
      v18 = *(unsigned int *)(v2 + 248);
      v19 = *(__int64 **)(v2 + 240);
      v20 = *(_DWORD *)(v17 + 12);
      v21 = v18 - 1;
      v18 *= 16;
      v22 = (__int64 *)((char *)v19 + v18);
      v23 = 16LL * (v20 & v21);
      v24 = &v19[(unsigned __int64)v23 / 8];
      if ( v23 != v18 )
      {
        for ( i = &v19[(unsigned __int64)v23 / 8]; v22 != i; i += 2 )
        {
          v26 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v26 + 12) == v20 && v17 == v26 )
            {
LABEL_124:
              v107 = i + 2;
              v108 = *(unsigned int *)(v2 + 252);
              if ( v22 == i + 2 )
                v107 = *(_QWORD **)(v2 + 240);
              v109 = v108 - 1;
              if ( *v107 )
              {
                *i = 1;
                v110 = *(_DWORD *)(v2 + 256);
                *(_DWORD *)(v2 + 252) = v109;
                v111 = v110 + 1;
                if ( v109 < 0x40 )
                  v109 = 64;
                *(_DWORD *)(v2 + 256) = v111;
                if ( v109 < v111 && !(unsigned __int8)sub_186AF10(v108) )
                {
                  v178 = *(_DWORD *)(v2 + 248);
                  v112 = (__m128i *)sub_186B270(16LL * v178);
                  v113 = v112;
                  v114 = &v112[v178];
                  if ( v178 )
                  {
                    if ( ((16 * (_BYTE)v178) & 0x10) == 0 || (*v112 = 0, ++v112, v114 != v112) )
                    {
                      do
                      {
                        *v112 = 0;
                        v112 += 2;
                        v112[-1] = 0;
                      }
                      while ( v114 != v112 );
                    }
                  }
                  v115 = *(unsigned int *)(v2 + 248);
                  v116 = *(const __m128i **)(v2 + 240);
                  v117 = v115 - 1;
                  v118 = v115;
                  v119 = (__m128i *)&v116[v118];
                  v120 = &v113[v118];
                  if ( v116 != &v116[v118] )
                  {
                    v121 = v2;
                    v122 = v117;
                    v123 = v12;
                    v124 = &v116[v118];
                    v125 = v15;
                    v126 = v118 * 16;
                    v127 = a2;
                    v128 = v120;
                    v129 = v16;
                    v130 = v113;
                    v131 = v127;
                    do
                    {
                      if ( v116->m128i_i64[0] > 1uLL )
                      {
                        v132 = 16LL * (*(_DWORD *)(v116->m128i_i64[0] + 12) & v122);
                        v133 = &v130[(unsigned __int64)v132 / 0x10];
                        if ( v126 == v132 )
                        {
LABEL_193:
                          if ( v130 == v133 )
                          {
LABEL_225:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v134 = v130;
                          while ( v134->m128i_i64[0] )
                          {
                            if ( v133 == ++v134 )
                              goto LABEL_225;
                          }
                        }
                        else
                        {
                          v134 = &v130[(unsigned __int64)v132 / 0x10];
                          while ( v134->m128i_i64[0] )
                          {
                            if ( v128 == ++v134 )
                              goto LABEL_193;
                          }
                        }
                        *v134 = _mm_loadu_si128(v116);
                      }
                      ++v116;
                    }
                    while ( v124 != v116 );
                    v15 = v125;
                    v119 = *(__m128i **)(v121 + 240);
                    a2 = v131;
                    v12 = v123;
                    v113 = v130;
                    v2 = v121;
                    v16 = v129;
                  }
                  if ( v119 )
                  {
                    v181 = v113;
                    sub_186B220(v119);
                    v113 = v181;
                  }
                  *(_QWORD *)(v2 + 240) = v113;
                  *(_DWORD *)(v2 + 256) = 0;
                }
              }
              else
              {
                *i = 0;
                *(_DWORD *)(v2 + 252) = v109;
              }
              goto LABEL_22;
            }
          }
          else if ( !v26 )
          {
            goto LABEL_22;
          }
        }
      }
      if ( v19 != v24 )
      {
        for ( i = *(__int64 **)(v2 + 240); v24 != i; i += 2 )
        {
          v76 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v76 + 12) == v20 && v17 == v76 )
              goto LABEL_124;
          }
          else if ( !v76 )
          {
            break;
          }
        }
      }
LABEL_22:
      v27 = *(unsigned int *)(v2 + 272);
      v28 = *(__int64 **)(v2 + 264);
      v29 = (__int64 *)(v15 + *(_QWORD *)(v2 + 208));
      v30 = v27 - 1;
      v27 *= 16;
      v31 = *v29;
      v32 = (__int64 *)((char *)v28 + v27);
      v33 = *(_DWORD *)(*v29 + 12);
      v34 = 16LL * (v33 & v30);
      v35 = &v28[(unsigned __int64)v34 / 8];
      if ( v34 != v27 )
      {
        for ( j = &v28[(unsigned __int64)v34 / 8]; v32 != j; j += 2 )
        {
          v37 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v37 + 12) == v33 && v31 == v37 )
            {
LABEL_117:
              v102 = j + 2;
              v103 = *(unsigned int *)(v2 + 276);
              if ( v32 == j + 2 )
                v102 = *(_QWORD **)(v2 + 264);
              v104 = v103 - 1;
              if ( *v102 )
              {
                *j = 1;
                v105 = *(_DWORD *)(v2 + 280);
                *(_DWORD *)(v2 + 276) = v104;
                v106 = v105 + 1;
                if ( v104 < 0x40 )
                  v104 = 64;
                *(_DWORD *)(v2 + 280) = v106;
                if ( v104 < v106 )
                {
                  if ( !(unsigned __int8)sub_186AF10(v103) )
                  {
                    v179 = *(_DWORD *)(v2 + 272);
                    v146 = (__m128i *)sub_186B270(16LL * v179);
                    v147 = v146;
                    v148 = &v146[v179];
                    if ( v179 )
                    {
                      if ( ((16 * (_BYTE)v179) & 0x10) == 0 || (*v146 = 0, ++v146, v146 != v148) )
                      {
                        do
                        {
                          *v146 = 0;
                          v146 += 2;
                          v146[-1] = 0;
                        }
                        while ( v146 != v148 );
                      }
                    }
                    v149 = *(unsigned int *)(v2 + 272);
                    v150 = *(const __m128i **)(v2 + 264);
                    v151 = v149 - 1;
                    v152 = v149;
                    v153 = (__m128i *)&v150[v152];
                    v154 = &v147[v152];
                    if ( v150 != &v150[v152] )
                    {
                      v155 = v2;
                      v156 = v151;
                      v157 = v12;
                      v158 = &v150[v152];
                      v159 = v15;
                      v160 = v152 * 16;
                      v161 = a2;
                      v162 = v154;
                      v163 = v16;
                      v164 = v147;
                      v165 = v161;
                      do
                      {
                        if ( v150->m128i_i64[0] > 1uLL )
                        {
                          v166 = 16LL * (*(_DWORD *)(v150->m128i_i64[0] + 12) & v156);
                          v167 = &v164[(unsigned __int64)v166 / 0x10];
                          if ( v160 == v166 )
                          {
LABEL_188:
                            if ( v164 == v167 )
                            {
LABEL_223:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v168 = v164;
                            while ( v168->m128i_i64[0] )
                            {
                              if ( v167 == ++v168 )
                                goto LABEL_223;
                            }
                          }
                          else
                          {
                            v168 = &v164[(unsigned __int64)v166 / 0x10];
                            while ( v168->m128i_i64[0] )
                            {
                              if ( v162 == ++v168 )
                                goto LABEL_188;
                            }
                          }
                          *v168 = _mm_loadu_si128(v150);
                        }
                        ++v150;
                      }
                      while ( v158 != v150 );
                      v15 = v159;
                      v153 = *(__m128i **)(v155 + 264);
                      a2 = v165;
                      v12 = v157;
                      v147 = v164;
                      v2 = v155;
                      v16 = v163;
                    }
                    if ( v153 )
                    {
                      v180 = v147;
                      sub_186B220(v153);
                      v147 = v180;
                    }
                    *(_QWORD *)(v2 + 264) = v147;
                    *(_DWORD *)(v2 + 280) = 0;
                  }
                  v31 = *(_QWORD *)(*(_QWORD *)(v2 + 208) + v15);
                  v33 = *(_DWORD *)(v31 + 12);
                }
                else
                {
                  v31 = *v29;
                  v33 = *(_DWORD *)(*v29 + 12);
                }
              }
              else
              {
                *j = 0;
                v31 = *v29;
                *(_DWORD *)(v2 + 276) = v104;
                v33 = *(_DWORD *)(v31 + 12);
              }
              goto LABEL_29;
            }
          }
          else if ( !v37 )
          {
            goto LABEL_29;
          }
        }
      }
      if ( v28 != v35 )
      {
        for ( j = *(__int64 **)(v2 + 264); v35 != j; j += 2 )
        {
          v75 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v75 + 12) == v33 && v31 == v75 )
              goto LABEL_117;
          }
          else if ( !v75 )
          {
            break;
          }
        }
      }
LABEL_29:
      v38 = *(unsigned int *)(v2 + 296);
      v39 = *(__int64 **)(v2 + 288);
      v188 = v31;
      v189[0] = 0;
      v189[1] = 0;
      v40 = v38 - 1;
      v190[0] = 1;
      v38 *= 40;
      v41 = (__int64 *)((char *)v39 + v38);
      v190[1] = 0;
      v42 = 40LL * (v33 & v40);
      v43 = &v39[(unsigned __int64)v42 / 8];
      if ( v42 != v38 )
      {
        for ( k = &v39[(unsigned __int64)v42 / 8]; v41 != k; k += 5 )
        {
          v45 = *k;
          if ( (unsigned __int64)*k > 1 )
          {
            if ( *(_DWORD *)(v45 + 12) == v33 && v45 == v31 )
            {
LABEL_98:
              v77 = k + 5;
              v78 = *(unsigned int *)(v2 + 300);
              if ( v41 == k + 5 )
                v77 = v39;
              v79 = v78 - 1;
              if ( *v77 )
              {
                *k = 1;
                v80 = *(_DWORD *)(v2 + 304);
                *(_DWORD *)(v2 + 300) = v79;
                v81 = v80 + 1;
                if ( v79 < 0x40 )
                  v79 = 64;
                *(_DWORD *)(v2 + 304) = v81;
                if ( v79 < v81 && !(unsigned __int8)sub_186AF10(v78) )
                {
                  v182 = *(_DWORD *)(v2 + 296);
                  v82 = sub_186B270(40LL * v182);
                  v177 = v82;
                  if ( v182 )
                  {
                    v83 = v82 + 40LL * v182;
                    do
                    {
                      *(_OWORD *)(v82 + 24) = 0;
                      v82 += 40;
                      *(_OWORD *)(v82 - 32) = 0;
                      *(_QWORD *)(v82 - 40) = 0;
                      *(_BYTE *)(v82 - 28) = 0;
                      *(_DWORD *)(v82 - 16) = 1;
                      *(_BYTE *)(v82 - 12) = 0;
                    }
                    while ( v83 != v82 );
                  }
                  v84 = *(unsigned int *)(v2 + 296);
                  v85 = *(char **)(v2 + 288);
                  v86 = v84;
                  v183 = v84 - 1;
                  v87 = 40 * v84;
                  v88 = &v85[40 * v84];
                  if ( v85 != v88 )
                  {
                    do
                    {
                      v89 = *(_QWORD *)v85;
                      if ( *(_QWORD *)v85 > 1u )
                      {
                        v90 = 40LL * (*(_DWORD *)(v89 + 12) & v183);
                        v91 = v177 + v90;
                        if ( v87 == v90 )
                        {
LABEL_198:
                          if ( v177 == v91 )
                          {
LABEL_224:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v92 = v177;
                          while ( *(_QWORD *)v92 )
                          {
                            v92 += 40;
                            if ( v91 == v92 )
                              goto LABEL_224;
                          }
                        }
                        else
                        {
                          v92 = v177 + v90;
                          while ( *(_QWORD *)v92 )
                          {
                            v92 += 40;
                            if ( v177 + v87 == v92 )
                              goto LABEL_198;
                          }
                        }
                        *(_QWORD *)v92 = v89;
                        v93 = *(_DWORD *)(v92 + 8);
                        *(_DWORD *)(v92 + 8) = *((_DWORD *)v85 + 2);
                        v94 = *((_QWORD *)v85 + 2);
                        *((_DWORD *)v85 + 2) = v93;
                        v95 = *(_QWORD *)(v92 + 16);
                        *(_QWORD *)(v92 + 16) = v94;
                        v96 = v85[12];
                        *((_QWORD *)v85 + 2) = v95;
                        LOBYTE(v95) = *(_BYTE *)(v92 + 12);
                        *(_BYTE *)(v92 + 12) = v96 & 2 | v95 & 0xFD;
                        LOBYTE(v95) = v95 & 2 | v85[12] & 0xFD;
                        v85[12] = v95;
                        v97 = *(_BYTE *)(v92 + 12);
                        *(_BYTE *)(v92 + 12) = v97 & 0xFE | v95 & 1;
                        LODWORD(v94) = *((_DWORD *)v85 + 6);
                        v85[12] = v97 & 1 | v85[12] & 0xFE;
                        LODWORD(v95) = *(_DWORD *)(v92 + 24);
                        *(_DWORD *)(v92 + 24) = v94;
                        v98 = *((_QWORD *)v85 + 4);
                        *((_DWORD *)v85 + 6) = v95;
                        v99 = *(_QWORD *)(v92 + 32);
                        *(_QWORD *)(v92 + 32) = v98;
                        v100 = v85[28];
                        *((_QWORD *)v85 + 4) = v99;
                        LOBYTE(v99) = *(_BYTE *)(v92 + 28);
                        *(_BYTE *)(v92 + 28) = v100 & 2 | v99 & 0xFD;
                        LOBYTE(v99) = v99 & 2 | v85[28] & 0xFD;
                        v85[28] = v99;
                        v101 = *(_BYTE *)(v92 + 28) & 1;
                        *(_BYTE *)(v92 + 28) = *(_BYTE *)(v92 + 28) & 0xFE | v99 & 1;
                        v85[28] = v101 | v85[28] & 0xFE;
                      }
                      v85 += 40;
                    }
                    while ( v88 != v85 );
                    v86 = *(unsigned int *)(v2 + 296);
                    v88 = *(char **)(v2 + 288);
                  }
                  if ( v88 )
                  {
                    if ( (_DWORD)v86 )
                    {
                      v185 = v12;
                      v186 = v88;
                      v184 = &v88[40 * v86];
                      v187 = a2;
                      v169 = v88;
                      do
                      {
                        v170 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, v169 + 8);
                        v171 = v169 + 24;
                        v169 += 40;
                        sub_182CBA0(v170, v171);
                      }
                      while ( v169 != v184 );
                      v12 = v185;
                      v88 = v186;
                      a2 = v187;
                    }
                    sub_186B220(v88);
                  }
                  *(_DWORD *)(v2 + 304) = 0;
                  *(_QWORD *)(v2 + 288) = v177;
                }
              }
              else
              {
                *k = 0;
                *(_DWORD *)(v2 + 300) = v79;
              }
              goto LABEL_36;
            }
          }
          else if ( !v45 )
          {
            goto LABEL_36;
          }
        }
      }
      if ( v39 != v43 )
      {
        for ( k = v39; v43 != k; k += 5 )
        {
          v74 = *k;
          if ( (unsigned __int64)*k > 1 )
          {
            if ( *(_DWORD *)(v74 + 12) == v33 && v74 == v31 )
              goto LABEL_98;
          }
          else if ( !v74 )
          {
            break;
          }
        }
      }
LABEL_36:
      v46 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v189);
      sub_182CBA0(v46, v190);
      if ( v16 == v15 )
        break;
      v11 = *(_QWORD *)(v2 + 224);
      v15 -= 8;
    }
    v10 = *(_QWORD **)(v2 + 232);
    if ( v10 )
    {
LABEL_39:
      v47 = *((_DWORD *)v10 - 1);
      v48 = v175;
      if ( v47 >= v175 )
      {
        *((_DWORD *)v10 - 1) = v175;
        goto LABEL_47;
      }
      goto LABEL_44;
    }
    if ( !v175 )
      goto LABEL_47;
LABEL_146:
    v47 = 0;
    v135 = (_QWORD *)sub_186B270(0x10u);
    v48 = v175;
    *v135 = 2;
    v10 = v135 + 1;
    *(_QWORD *)(v2 + 232) = v10;
LABEL_44:
    while ( 1 )
    {
      v52 = *((_DWORD *)v10 - 2);
      if ( v52 >= v48 )
        break;
      v49 = (3 * v52 + 1) >> 1;
      v50 = 4 * v49 + 8;
      if ( 4 * v52 + 8 >= (unsigned int)v50 || v52 >= v49 )
      {
LABEL_226:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_107D5E(&v188, "Overflow encountered when expanding vector", v174);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v188);
        sub_233E40((__int64)&v188);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v10 - 1, v50);
      v10 = v51 + 2;
      *(_QWORD *)(v2 + 232) = v51 + 2;
      *v51 = v49;
    }
    v53 = 4LL * v47;
    *((_DWORD *)v10 - 1) = v175;
    if ( v53 != v176 )
      memset((char *)v10 + v53, 0, v176 - v53);
LABEL_47:
    v54 = *(_QWORD **)(v2 + 208);
    if ( v54 )
    {
      v55 = *((unsigned int *)v54 - 1);
      if ( v12 >= (unsigned int)v55 )
      {
        if ( (unsigned int)v55 < v12 )
          goto LABEL_54;
        goto LABEL_158;
      }
      v136 = (unsigned __int64)&v54[v55];
      v137 = &v54[v12];
      if ( (unsigned __int64)v137 >= v136 )
      {
LABEL_158:
        *((_DWORD *)v54 - 1) = v12;
        goto LABEL_57;
      }
      do
      {
        while ( 1 )
        {
          v138 = *v137;
          if ( *v137 )
          {
            v139 = *(_QWORD *)(v2 + 200);
            v8 = (*(_DWORD *)(v138 + 8))-- == 1;
            if ( v8 )
              break;
          }
          if ( (unsigned __int64)++v137 >= v136 )
            goto LABEL_156;
        }
        sub_15D7BC0(v139, v138);
        ++v137;
      }
      while ( (unsigned __int64)v137 < v136 );
LABEL_156:
      v54 = *(_QWORD **)(v2 + 208);
      if ( v54 )
      {
        LODWORD(v55) = *((_DWORD *)v54 - 1);
        if ( (unsigned int)v55 < v12 )
          goto LABEL_54;
        goto LABEL_158;
      }
    }
    if ( !v12 )
    {
      v63 = *(_QWORD **)(v2 + 224);
      if ( !v63 )
        goto LABEL_67;
      v172 = *((unsigned int *)v63 - 1);
      if ( (_DWORD)v172 )
      {
        v140 = (unsigned __int64)&v63[v172];
        if ( (unsigned __int64)v63 < v140 )
        {
          v141 = *(__int64 **)(v2 + 224);
          goto LABEL_162;
        }
      }
      goto LABEL_168;
    }
    LODWORD(v55) = 0;
    v145 = (_QWORD *)sub_186B270(0x18u);
    *v145 = 2;
    v54 = v145 + 1;
    *(_QWORD *)(v2 + 208) = v145 + 1;
LABEL_54:
    while ( 1 )
    {
      v59 = *((_DWORD *)v54 - 2);
      if ( v59 >= v12 )
        break;
      v56 = (3 * v59 + 1) >> 1;
      v57 = 8 * v56 + 8;
      if ( 8 * v59 + 8 >= (unsigned int)v57 || v59 >= v56 )
        goto LABEL_226;
      v58 = (unsigned int *)sub_186B300(v54 - 1, v57);
      v54 = v58 + 2;
      *v58 = v56;
      *(_QWORD *)(v2 + 208) = v58 + 2;
    }
    *((_DWORD *)v54 - 1) = v12;
    v60 = 8LL * (unsigned int)v55;
    v61 = 8LL * v12;
    v62 = &v54[(unsigned __int64)v60 / 8];
    if ( v60 != v61 )
      memset(v62, 0, v61 - v60);
LABEL_57:
    v63 = *(_QWORD **)(v2 + 224);
    if ( v63 )
    {
      v64 = *((unsigned int *)v63 - 1);
      if ( v12 >= (unsigned int)v64 )
      {
LABEL_59:
        v65 = *((_DWORD *)v63 - 1);
        if ( v65 < v12 )
          goto LABEL_64;
        goto LABEL_168;
      }
      v140 = (unsigned __int64)&v63[v64];
      v141 = &v63[v12];
      if ( (unsigned __int64)v141 >= v140 )
      {
LABEL_168:
        *((_DWORD *)v63 - 1) = v12;
LABEL_67:
        result = *(_QWORD *)(v2 + 192);
        v72 = 0x7FFFFFFF8LL;
        if ( !result )
          goto LABEL_71;
        do
        {
          while ( 1 )
          {
            v72 = 8LL * (unsigned int)(*(_DWORD *)(result - 4) - 1);
LABEL_71:
            v73 = *(void **)(result + v72);
            if ( !v73 )
              break;
            sub_F74720(*(_QWORD *)(result + v72));
            sub_186B220(v73);
            result = *(_QWORD *)(v2 + 192);
            --*(_DWORD *)(result - 4);
            if ( !--a2 )
              return result;
          }
          --*(_DWORD *)(result - 4);
          --a2;
        }
        while ( a2 );
        return result;
      }
      do
      {
LABEL_162:
        while ( 1 )
        {
          v142 = *v141;
          if ( *v141 )
          {
            v143 = *(_QWORD *)(v2 + 216);
            v8 = (*(_DWORD *)(v142 + 8))-- == 1;
            if ( v8 )
              break;
          }
          if ( (unsigned __int64)++v141 >= v140 )
            goto LABEL_165;
        }
        sub_15D7BC0(v143, v142);
        ++v141;
      }
      while ( (unsigned __int64)v141 < v140 );
LABEL_165:
      v63 = *(_QWORD **)(v2 + 224);
      if ( v63 )
        goto LABEL_59;
    }
    if ( v12 )
    {
      v65 = 0;
      v144 = (_QWORD *)sub_186B270(0x18u);
      *v144 = 2;
      v63 = v144 + 1;
      *(_QWORD *)(v2 + 224) = v63;
LABEL_64:
      while ( 1 )
      {
        v69 = *((_DWORD *)v63 - 2);
        if ( v69 >= v12 )
          break;
        v66 = (3 * v69 + 1) >> 1;
        v67 = 8 * v66 + 8;
        if ( 8 * v69 + 8 >= (unsigned int)v67 || v69 >= v66 )
          goto LABEL_226;
        v68 = (unsigned int *)sub_186B300(v63 - 1, v67);
        v63 = v68 + 2;
        *(_QWORD *)(v2 + 224) = v68 + 2;
        *v68 = v66;
      }
      *((_DWORD *)v63 - 1) = v12;
      v70 = 8LL * v65;
      v71 = 8LL * v12;
      if ( v70 != v71 )
        memset(&v63[(unsigned __int64)v70 / 8], 0, v71 - v70);
    }
    goto LABEL_67;
  }
  return result;
}

