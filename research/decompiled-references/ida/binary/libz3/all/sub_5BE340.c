__int64 __fastcall sub_5BE340(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **exception; // rbp
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rbp
  _QWORD *v11; // r12
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rdx
  unsigned int v19; // r15d
  int v20; // esi
  __int64 *v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 *v24; // r8
  __int64 v25; // rdx
  __int64 *v26; // rdi
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 result; // rax
  unsigned int v30; // r15d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  __int64 *v39; // rcx
  __int64 v40; // rcx
  int v41; // esi
  unsigned int v42; // r9d
  __int64 *v43; // r13
  unsigned int v44; // r8d
  __int64 v45; // rcx
  __int64 *v46; // r15
  int v47; // edi
  __int64 v48; // r8
  __int64 *v49; // r9
  __int64 *v50; // rax
  __int64 *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rsi
  int v60; // eax
  __int64 *v61; // rsi
  __int64 v62; // r8
  unsigned int v63; // esi
  __m128i *v64; // r13
  unsigned int v65; // r10d
  __int64 v66; // r8
  __int64 *v67; // r15
  int v68; // esi
  __int64 v69; // r10
  __m128i *v70; // rdi
  __m128i *v71; // rax
  __int64 *v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rax
  _QWORD *v75; // rax
  unsigned int v76; // r13d
  unsigned int v77; // ecx
  unsigned int *v78; // rax
  __int64 v79; // rcx
  unsigned int v80; // r13d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rsi
  __int64 v84; // r8
  _DWORD *v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // eax
  unsigned int v88; // r13d
  __int64 v89; // rsi
  unsigned int v90; // eax
  __int64 *v91; // rsi
  __int64 v92; // rdx
  unsigned int v93; // edi
  __m128i *v94; // r13
  __int64 v95; // r11
  __m128i *v96; // r15
  int v97; // esi
  __int64 v98; // rax
  __m128i *v99; // rdi
  __m128i *v100; // rax
  __int64 *v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // r15
  __int64 *v105; // rax
  int v106; // r9d
  char *v107; // rax
  char *v108; // r10
  __int64 v109; // rdx
  __int64 *v110; // rsi
  __int64 *v111; // rdx
  __int64 v112; // rsi
  __m128i *v113; // rax
  __m128i *v114; // r9
  const __m128i *v115; // rax
  __m128i *v116; // r11
  __int64 v117; // rdx
  __m128i *v118; // rsi
  __m128i *v119; // rdx
  __m128i v120; // xmm0
  unsigned int v121; // r13d
  size_t v122; // rsi
  unsigned int *v123; // rax
  size_t v124; // rsi
  unsigned int *v125; // rax
  __int64 v126; // rsi
  __m128i *v127; // rax
  __m128i *v128; // r9
  const __m128i *v129; // rax
  __m128i *v130; // r10
  __int64 v131; // rdx
  __m128i *v132; // rsi
  __m128i *v133; // rdx
  __m128i v134; // xmm0
  int v135; // esi
  _QWORD *v136; // rdi
  __int64 v137; // rcx
  _QWORD *v138; // rax
  _QWORD *v139; // rdx
  unsigned int v140; // ebx
  unsigned int v141; // ebp
  size_t v142; // rbx
  _OWORD *v143; // rdx
  _OWORD *v144; // rcx
  _OWORD *v145; // rax
  _QWORD *v146; // rax
  _QWORD *v147; // rax
  __int64 v148; // rax
  size_t v149; // rcx
  unsigned int v151; // [rsp+8h] [rbp-C0h]
  unsigned int v152; // [rsp+8h] [rbp-C0h]
  unsigned int v153; // [rsp+8h] [rbp-C0h]
  size_t v154; // [rsp+8h] [rbp-C0h]
  unsigned int v155; // [rsp+8h] [rbp-C0h]
  __int64 v156; // [rsp+8h] [rbp-C0h]
  size_t v157; // [rsp+8h] [rbp-C0h]
  __int64 v158; // [rsp+10h] [rbp-B8h]
  int v159; // [rsp+10h] [rbp-B8h]
  __int64 v160; // [rsp+10h] [rbp-B8h]
  __int64 v161; // [rsp+10h] [rbp-B8h]
  __int64 v162; // [rsp+10h] [rbp-B8h]
  int v163; // [rsp+10h] [rbp-B8h]
  int v164; // [rsp+10h] [rbp-B8h]
  __int64 v165; // [rsp+10h] [rbp-B8h]
  __int64 v166; // [rsp+10h] [rbp-B8h]
  __int64 v167; // [rsp+10h] [rbp-B8h]
  __int64 v168; // [rsp+10h] [rbp-B8h]
  __int64 v169; // [rsp+10h] [rbp-B8h]
  char v172; // [rsp+2Ch] [rbp-9Ch]
  int v173; // [rsp+2Ch] [rbp-9Ch]
  __int64 v174; // [rsp+30h] [rbp-98h]
  __int64 v175; // [rsp+30h] [rbp-98h]
  __int64 v176; // [rsp+30h] [rbp-98h]
  __int64 v177; // [rsp+38h] [rbp-90h]
  __int64 v178; // [rsp+38h] [rbp-90h]
  __int64 v179; // [rsp+40h] [rbp-88h]
  __int64 v180[11]; // [rsp+70h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a1 + 112);
  v9 = v8 + 24LL * *(unsigned int *)(a1 + 120);
  if ( v8 != v9 )
  {
    while ( *(_QWORD *)v8 <= 1u )
    {
      v8 += 24;
      if ( v9 == v8 )
        goto LABEL_246;
    }
    if ( v9 != v8 )
    {
      v172 = 0;
      v10 = *(_QWORD *)v8;
      v11 = nullptr;
      while ( 1 )
      {
        if ( v11 )
        {
          *((_DWORD *)v11 - 1) = 0;
          if ( *(_DWORD *)(v8 + 8) )
            goto LABEL_9;
        }
        else if ( *(_DWORD *)(v8 + 8) )
        {
LABEL_9:
          v12 = 0;
          do
          {
            while ( (*(_DWORD *)(*(_QWORD *)(v8 + 16) + 4LL * (v12 >> 5)) & (1 << v12)) != 0 )
            {
              v13 = *(_DWORD *)(v8 + 8);
              if ( ++v12 >= v13 )
                goto LABEL_16;
            }
            v14 = *(_QWORD *)(v10 + 8LL * v12 + 48);
            if ( v11 )
            {
              v15 = *((_DWORD *)v11 - 1);
              if ( v15 == *((_DWORD *)v11 - 2) )
              {
                v30 = (3 * v15 + 1) >> 1;
                v31 = 8 * v30 + 8;
                if ( 8 * v15 + 8 >= (unsigned int)v31 || v15 >= v30 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v180, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v180);
                  sub_233E40((__int64)v180);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v158 = *(_QWORD *)(v10 + 8LL * v12 + 48);
                v151 = v12;
                v32 = (unsigned int *)sub_186B300(v11 - 1, v31);
                v33 = v32[1];
                v11 = v32 + 2;
                v12 = v151;
                *v32 = v30;
                v14 = v158;
                LODWORD(v32) = v33;
                v18 = &v11[v33];
                v17 = (_DWORD)v32 + 1;
              }
              else
              {
                v16 = v15;
                v17 = v15 + 1;
                v18 = &v11[v16];
              }
            }
            else
            {
              v160 = *(_QWORD *)(v10 + 8LL * v12 + 48);
              v152 = v12;
              v75 = (_QWORD *)sub_186B270(0x18u);
              v11 = v75 + 1;
              v12 = v152;
              v14 = v160;
              v18 = v75 + 1;
              *v75 = 2;
              v17 = 1;
            }
            *v18 = v14;
            ++v12;
            *((_DWORD *)v11 - 1) = v17;
            v13 = *(_DWORD *)(v8 + 8);
          }
          while ( v12 < v13 );
LABEL_16:
          if ( v11 )
            v19 = *((_DWORD *)v11 - 1);
          else
            v19 = 0;
          if ( v19 < v13 )
          {
            v54 = *(_QWORD *)(a1 + 24);
            sub_180C5A0(v180, "slice");
            v55 = sub_651680(v54, v10 + 16, v180, v19, v11, v10);
            v56 = v55;
            if ( v55 )
              ++*(_DWORD *)(v55 + 8);
            v57 = *(_QWORD **)(a1 + 144);
            if ( v57 )
            {
              v58 = *((_DWORD *)v57 - 1);
              if ( v58 == *((_DWORD *)v57 - 2) )
              {
                v80 = (3 * v58 + 1) >> 1;
                v81 = 8 * v80 + 8;
                if ( 8 * v58 + 8 >= (unsigned int)v81 || v58 >= v80 )
                {
                  v5 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v180, "Overflow encountered when expanding vector");
                  *v5 = (char *)off_1C63128;
                  sub_2333C0(v5 + 1, v180);
                  sub_233E40((__int64)v180);
                  __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v161 = v56;
                v82 = (unsigned int *)sub_186B300(v57 - 1, v81);
                v83 = v82[1];
                v57 = v82 + 2;
                *v82 = v80;
                v56 = v161;
                LODWORD(v82) = v83;
                *(_QWORD *)(a1 + 144) = v57;
                v61 = &v57[v83];
                v60 = (_DWORD)v82 + 1;
              }
              else
              {
                v59 = v58;
                v60 = v58 + 1;
                v61 = &v57[v59];
              }
            }
            else
            {
              v168 = v55;
              v147 = (_QWORD *)sub_186B270(0x18u);
              *v147 = 2;
              v57 = v147 + 1;
              v56 = v168;
              *(_QWORD *)(a1 + 144) = v147 + 1;
              v61 = v147 + 1;
              v60 = 1;
            }
            *v61 = v56;
            *((_DWORD *)v57 - 1) = v60;
            v62 = *(unsigned int *)(a1 + 96);
            v63 = 2 * v62;
            v159 = 2 * v62;
            if ( 3 * (int)v62 < (unsigned int)(4 * (*(_DWORD *)(a1 + 100) + *(_DWORD *)(a1 + 104))) )
            {
              v177 = v56;
              v113 = (__m128i *)sub_186B270(16LL * v63);
              v66 = 16LL * v63;
              v56 = v177;
              v64 = v113;
              v114 = (__m128i *)((char *)v113 + v66);
              if ( v63 )
              {
                if ( ((16 * (_BYTE)v63) & 0x10) == 0 || (*v113 = 0, ++v113, v113 != v114) )
                {
                  do
                  {
                    *v113 = 0;
                    v113 += 2;
                    v113[-1] = 0;
                  }
                  while ( v113 != v114 );
                }
              }
              v67 = (__int64 *)v114;
              v115 = *(const __m128i **)(a1 + 88);
              v65 = v159 - 1;
              v116 = (__m128i *)&v115[*(unsigned int *)(a1 + 96)];
              if ( v115 != v116 )
              {
                do
                {
                  while ( v115->m128i_i64[0] <= 1uLL )
                  {
                    if ( v116 == ++v115 )
                      goto LABEL_158;
                  }
                  v117 = 16LL * (*(_DWORD *)(v115->m128i_i64[0] + 12) & v65);
                  v118 = &v64[(unsigned __int64)v117 / 0x10];
                  if ( v66 == v117 )
                  {
LABEL_162:
                    if ( v64 == v118 )
                    {
LABEL_183:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v119 = v64;
                    while ( v119->m128i_i64[0] )
                    {
                      if ( v118 == ++v119 )
                        goto LABEL_183;
                    }
                  }
                  else
                  {
                    v119 = &v64[(unsigned __int64)v117 / 0x10];
                    while ( v119->m128i_i64[0] )
                    {
                      if ( v114 == ++v119 )
                        goto LABEL_162;
                    }
                  }
                  v120 = _mm_loadu_si128(v115++);
                  *v119 = v120;
                }
                while ( v116 != v115 );
LABEL_158:
                v116 = *(__m128i **)(a1 + 88);
              }
              if ( v116 )
              {
                v179 = v66;
                sub_186B220(v116);
                v66 = v179;
                v65 = v159 - 1;
                v56 = v177;
              }
              *(_QWORD *)(a1 + 88) = v64;
              *(_DWORD *)(a1 + 96) = v159;
              *(_DWORD *)(a1 + 104) = 0;
            }
            else
            {
              v64 = *(__m128i **)(a1 + 88);
              v65 = v62 - 1;
              v66 = 16 * v62;
              v67 = (__int64 *)((char *)v64->m128i_i64 + v66);
            }
            v68 = *(_DWORD *)(v10 + 12);
            v69 = 16LL * (v68 & v65);
            v70 = &v64[(unsigned __int64)v69 / 0x10];
            if ( v69 != v66 )
            {
              v71 = &v64[(unsigned __int64)v69 / 0x10];
              v72 = nullptr;
              while ( 1 )
              {
                v73 = v71->m128i_i64[0];
                if ( v71->m128i_i64[0] > 1uLL )
                {
                  if ( *(_DWORD *)(v73 + 12) == v68 && v73 == v10 )
                  {
                    v71->m128i_i64[0] = v10;
                    v71->m128i_i64[1] = v56;
                    goto LABEL_101;
                  }
                }
                else
                {
                  if ( !v73 )
                  {
                    if ( v72 )
                      goto LABEL_171;
                    v72 = (__int64 *)v71;
                    goto LABEL_172;
                  }
                  v72 = (__int64 *)v71;
                }
                if ( ++v71 == (__m128i *)v67 )
                  goto LABEL_84;
              }
            }
            v72 = nullptr;
            while ( 1 )
            {
LABEL_84:
              if ( v70 == v64 )
              {
                sub_1872CE0("");
                sub_1873130(114, 405);
              }
              v74 = v64->m128i_i64[0];
              if ( v64->m128i_i64[0] > 1uLL )
              {
                if ( *(_DWORD *)(v74 + 12) == v68 && v74 == v10 )
                {
                  v64->m128i_i64[0] = v10;
                  v64->m128i_i64[1] = v56;
LABEL_101:
                  v162 = v56;
                  sub_63F9D0(a3, a2, v10, v56);
                  v84 = *(_QWORD *)(a1 + 160);
                  if ( !v84 )
                    goto LABEL_26;
                  v85 = *(_DWORD **)(v84 + 96);
                  ++*(_DWORD *)(v10 + 8);
                  v86 = v162;
                  if ( v85 )
                  {
                    v87 = *(v85 - 1);
                    v88 = *(v85 - 2);
                    if ( v87 == v88 )
                    {
                      v88 = (3 * v87 + 1) >> 1;
                      v124 = 8 * v88 + 8;
                      if ( 8 * v87 + 8 >= (unsigned int)v124 || v87 >= v88 )
                      {
                        v4 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v180, "Overflow encountered when expanding vector");
                        *v4 = (char *)off_1C63128;
                        sub_2333C0(v4 + 1, v180);
                        sub_233E40((__int64)v180);
                        __cxa_throw(
                          v4,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v174 = v162;
                      v167 = v84;
                      v125 = (unsigned int *)sub_186B300(v85 - 2, v124);
                      v126 = v125[1];
                      v84 = v167;
                      v85 = v125 + 2;
                      v86 = v174;
                      *(_QWORD *)(v167 + 96) = v125 + 2;
                      *v125 = v88;
                      LODWORD(v125) = v126;
                      v91 = (__int64 *)&v85[2 * v126];
                      v90 = (_DWORD)v125 + 1;
                    }
                    else
                    {
                      v89 = v87;
                      v90 = v87 + 1;
                      v91 = (__int64 *)&v85[2 * v89];
                    }
                    *v91 = v10;
                    *(v85 - 1) = v90;
                    if ( v86 )
                    {
LABEL_106:
                      ++*(_DWORD *)(v86 + 8);
                      v90 = *(v85 - 1);
                      v88 = *(v85 - 2);
                    }
                    if ( v90 == v88 )
                    {
                      v121 = (3 * v90 + 1) >> 1;
                      v122 = 8 * v121 + 8;
                      if ( 8 * v90 + 8 >= (unsigned int)v122 || v90 >= v121 )
                      {
                        v6 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v180, "Overflow encountered when expanding vector");
                        *v6 = (char *)off_1C63128;
                        sub_2333C0(v6 + 1, v180);
                        sub_233E40((__int64)v180);
                        __cxa_throw(
                          v6,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v166 = v86;
                      v156 = v84;
                      v123 = (unsigned int *)sub_186B300(v85 - 2, v122);
                      v84 = v156;
                      v85 = v123 + 2;
                      v86 = v166;
                      *(_QWORD *)(v156 + 96) = v123 + 2;
                      *v123 = v121;
                      v90 = v123[1];
                    }
                  }
                  else
                  {
                    v176 = v162;
                    v169 = v84;
                    v148 = sub_186B270(0x18u);
                    v84 = v169;
                    v86 = v176;
                    v85 = (_DWORD *)(v148 + 8);
                    *(_QWORD *)v148 = 2;
                    *(_QWORD *)(v169 + 96) = v148 + 8;
                    *(_QWORD *)(v148 + 8) = v10;
                    *(_DWORD *)(v148 + 4) = 1;
                    v90 = 1;
                    if ( v176 )
                      goto LABEL_106;
                  }
                  *(_QWORD *)&v85[2 * v90] = v86;
                  *(v85 - 1) = v90 + 1;
                  v92 = *(unsigned int *)(v84 + 48);
                  v93 = 2 * v92;
                  v163 = 2 * v92;
                  if ( 3 * (int)v92 < (unsigned int)(4 * (*(_DWORD *)(v84 + 52) + *(_DWORD *)(v84 + 56))) )
                  {
                    v178 = v86;
                    v175 = v84;
                    v157 = 16LL * v93;
                    v127 = (__m128i *)sub_186B270(v157);
                    v95 = v157;
                    v84 = v175;
                    v94 = v127;
                    v86 = v178;
                    v128 = &v127[v157 / 0x10];
                    if ( v93 )
                    {
                      if ( (v157 & 0x10) == 0 || (*v127 = 0, ++v127, v127 != v128) )
                      {
                        do
                        {
                          *v127 = 0;
                          v127 += 2;
                          v127[-1] = 0;
                        }
                        while ( v127 != v128 );
                      }
                    }
                    v129 = *(const __m128i **)(v175 + 40);
                    v96 = v128;
                    v130 = (__m128i *)&v129[*(unsigned int *)(v175 + 48)];
                    v153 = v163 - 1;
                    if ( v129 != v130 )
                    {
                      do
                      {
                        while ( v129->m128i_i64[0] <= 1uLL )
                        {
                          if ( v130 == ++v129 )
                            goto LABEL_199;
                        }
                        v131 = 16LL * (*(_DWORD *)(v129->m128i_i64[0] + 12) & v153);
                        v132 = &v94[(unsigned __int64)v131 / 0x10];
                        if ( v95 == v131 )
                        {
LABEL_203:
                          if ( v94 == v132 )
                          {
LABEL_227:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v133 = v94;
                          while ( v133->m128i_i64[0] )
                          {
                            if ( v132 == ++v133 )
                              goto LABEL_227;
                          }
                        }
                        else
                        {
                          v133 = &v94[(unsigned __int64)v131 / 0x10];
                          while ( v133->m128i_i64[0] )
                          {
                            if ( v128 == ++v133 )
                              goto LABEL_203;
                          }
                        }
                        v134 = _mm_loadu_si128(v129++);
                        *v133 = v134;
                      }
                      while ( v130 != v129 );
LABEL_199:
                      v130 = *(__m128i **)(v175 + 40);
                    }
                    if ( v130 )
                    {
                      sub_186B220(v130);
                      v95 = 16LL * v93;
                      v86 = v178;
                      v84 = v175;
                    }
                    *(_QWORD *)(v84 + 40) = v94;
                    *(_DWORD *)(v84 + 56) = 0;
                    *(_DWORD *)(v84 + 48) = v163;
                  }
                  else
                  {
                    v94 = *(__m128i **)(v84 + 40);
                    v153 = v92 - 1;
                    v95 = 16 * v92;
                    v96 = &v94[v92];
                  }
                  v97 = *(_DWORD *)(v86 + 12);
                  v98 = 16LL * (v97 & v153);
                  v99 = &v94[(unsigned __int64)v98 / 0x10];
                  if ( v98 != v95 )
                  {
                    v100 = &v94[(unsigned __int64)v98 / 0x10];
                    v101 = nullptr;
                    while ( 1 )
                    {
                      v102 = v100->m128i_i64[0];
                      if ( v100->m128i_i64[0] > 1uLL )
                      {
                        if ( *(_DWORD *)(v102 + 12) == v97 && v86 == v102 )
                        {
                          v100->m128i_i64[0] = v86;
                          v100->m128i_i64[1] = v10;
                          goto LABEL_26;
                        }
                      }
                      else
                      {
                        if ( !v102 )
                        {
                          if ( v101 )
                            goto LABEL_209;
                          v101 = (__int64 *)v100;
                          goto LABEL_210;
                        }
                        v101 = (__int64 *)v100;
                      }
                      if ( ++v100 == v96 )
                        goto LABEL_121;
                    }
                  }
                  v101 = nullptr;
                  while ( 1 )
                  {
LABEL_121:
                    if ( v99 == v94 )
                    {
                      sub_1872CE0("");
                      sub_1873130(114, 405);
                    }
                    v103 = v94->m128i_i64[0];
                    if ( v94->m128i_i64[0] > 1uLL )
                    {
                      if ( *(_DWORD *)(v103 + 12) == v97 && v86 == v103 )
                      {
                        v94->m128i_i64[0] = v86;
                        v94->m128i_i64[1] = v10;
                        goto LABEL_26;
                      }
                    }
                    else
                    {
                      if ( !v103 )
                      {
                        if ( v101 )
LABEL_209:
                          --*(_DWORD *)(v84 + 56);
                        else
                          v101 = (__int64 *)v94;
LABEL_210:
                        *v101 = v86;
                        v101[1] = v10;
                        ++*(_DWORD *)(v84 + 52);
                        goto LABEL_26;
                      }
                      v101 = (__int64 *)v94;
                    }
                    ++v94;
                  }
                }
              }
              else
              {
                if ( !v74 )
                {
                  if ( v72 )
LABEL_171:
                    --*(_DWORD *)(a1 + 104);
                  else
                    v72 = (__int64 *)v64;
LABEL_172:
                  *v72 = v10;
                  v72[1] = v56;
                  ++*(_DWORD *)(a1 + 100);
                  goto LABEL_101;
                }
                v72 = (__int64 *)v64;
              }
              ++v64;
            }
          }
        }
        v20 = *(_DWORD *)(v10 + 12);
        v21 = *(__int64 **)(a2 + 152);
        v22 = *(unsigned int *)(a2 + 160);
        v23 = v22 - 1;
        v22 *= 8;
        v24 = (__int64 *)((char *)v21 + v22);
        v25 = 8LL * (v20 & v23);
        v26 = &v21[(unsigned __int64)v25 / 8];
        if ( v25 == v22 )
        {
LABEL_38:
          if ( v21 == v26 )
            goto LABEL_26;
          while ( 1 )
          {
            v34 = *v21;
            if ( (unsigned __int64)*v21 > 1 )
            {
              if ( *(_DWORD *)(v34 + 12) == v20 && v34 == v10 )
                goto LABEL_46;
            }
            else if ( !v34 )
            {
              goto LABEL_26;
            }
            if ( v26 == ++v21 )
              goto LABEL_26;
          }
        }
        v27 = &v21[(unsigned __int64)v25 / 8];
        while ( 1 )
        {
          v28 = *v27;
          if ( (unsigned __int64)*v27 <= 1 )
          {
            if ( !v28 )
              goto LABEL_26;
            goto LABEL_23;
          }
          if ( *(_DWORD *)(v28 + 12) == v20 && v28 == v10 )
            break;
LABEL_23:
          if ( v24 == ++v27 )
            goto LABEL_38;
        }
LABEL_46:
        ++*(_DWORD *)(v10 + 8);
        v35 = *(_QWORD **)(a3 + 232);
        if ( v35 )
        {
          v36 = *((_DWORD *)v35 - 1);
          if ( v36 == *((_DWORD *)v35 - 2) )
          {
            v76 = (3 * v36 + 1) >> 1;
            v77 = 8 * v76 + 8;
            if ( 8 * v36 + 8 >= v77 || v36 >= v76 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v180, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v180);
              sub_233E40((__int64)v180);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v78 = (unsigned int *)sub_186B300(v35 - 1, v77);
            v79 = v78[1];
            v35 = v78 + 2;
            *v78 = v76;
            LODWORD(v78) = v79;
            *(_QWORD *)(a3 + 232) = v35;
            v39 = &v35[v79];
            v38 = (_DWORD)v78 + 1;
          }
          else
          {
            v37 = v36;
            v38 = v36 + 1;
            v39 = &v35[v37];
          }
        }
        else
        {
          v146 = (_QWORD *)sub_186B270(0x18u);
          *v146 = 2;
          v35 = v146 + 1;
          *(_QWORD *)(a3 + 232) = v146 + 1;
          v39 = v146 + 1;
          v38 = 1;
        }
        *v39 = v10;
        *((_DWORD *)v35 - 1) = v38;
        v40 = *(unsigned int *)(a3 + 160);
        v41 = *(_DWORD *)(a3 + 168);
        v42 = 2 * v40;
        if ( 3 * (int)v40 < (unsigned int)(4 * (v41 + *(_DWORD *)(a3 + 164))) )
        {
          v104 = v42;
          v164 = 2 * v40;
          v154 = 8LL * v42;
          v105 = (__int64 *)sub_186B270(v154);
          v106 = v164;
          v45 = v154;
          v43 = v105;
          if ( v164 )
          {
            memset(v105, 0, 8 * v104);
            v45 = v154;
            v106 = v164;
          }
          v44 = v106 - 1;
          v46 = (__int64 *)((char *)v43 + v45);
          v107 = *(char **)(a3 + 152);
          v108 = &v107[8 * *(unsigned int *)(a3 + 160)];
          if ( v107 != v108 )
          {
            do
            {
              while ( *(_QWORD *)v107 <= 1u )
              {
                v107 += 8;
                if ( v108 == v107 )
                  goto LABEL_136;
              }
              v109 = 8LL * (*(_DWORD *)(*(_QWORD *)v107 + 12LL) & v44);
              v110 = &v43[(unsigned __int64)v109 / 8];
              if ( v45 == v109 )
              {
LABEL_140:
                if ( v43 == v110 )
                {
LABEL_173:
                  sub_1872CE0("");
                  sub_1873130(114, 213);
                }
                v111 = v43;
                while ( *v111 )
                {
                  if ( v110 == ++v111 )
                    goto LABEL_173;
                }
              }
              else
              {
                v111 = &v43[(unsigned __int64)v109 / 8];
                while ( *v111 )
                {
                  if ( v46 == ++v111 )
                    goto LABEL_140;
                }
              }
              v112 = *(_QWORD *)v107;
              v107 += 8;
              *v111 = v112;
            }
            while ( v108 != v107 );
LABEL_136:
            v108 = *(char **)(a3 + 152);
          }
          if ( v108 )
          {
            v173 = v106;
            v165 = v45;
            v155 = v106 - 1;
            sub_186B220(v108);
            v106 = v173;
            v45 = v165;
            v44 = v155;
          }
          v41 = 0;
          *(_QWORD *)(a3 + 152) = v43;
          *(_DWORD *)(a3 + 160) = v106;
          *(_DWORD *)(a3 + 168) = 0;
        }
        else
        {
          v43 = *(__int64 **)(a3 + 152);
          v44 = v40 - 1;
          v45 = 8 * v40;
          v46 = (__int64 *)((char *)v43 + v45);
        }
        v47 = *(_DWORD *)(v10 + 12);
        v48 = 8LL * (v47 & v44);
        v49 = &v43[(unsigned __int64)v48 / 8];
        if ( v48 != v45 )
        {
          v50 = &v43[(unsigned __int64)v48 / 8];
          v51 = nullptr;
          while ( 1 )
          {
            v52 = *v50;
            if ( (unsigned __int64)*v50 > 1 )
            {
              if ( *(_DWORD *)(v52 + 12) == v47 && v52 == v10 )
              {
                *v50 = v10;
                goto LABEL_96;
              }
            }
            else
            {
              if ( !v52 )
              {
                if ( v51 )
                  goto LABEL_168;
                v51 = v50;
                goto LABEL_169;
              }
              v51 = v50;
            }
            if ( ++v50 == v46 )
              goto LABEL_62;
          }
        }
        v51 = nullptr;
LABEL_62:
        while ( 2 )
        {
          if ( v49 == v43 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v53 = *v43;
          if ( (unsigned __int64)*v43 > 1 )
          {
            if ( *(_DWORD *)(v53 + 12) == v47 && v53 == v10 )
            {
              *v43 = v10;
              goto LABEL_96;
            }
            goto LABEL_61;
          }
          if ( v53 )
          {
            v51 = v43;
LABEL_61:
            ++v43;
            continue;
          }
          break;
        }
        if ( v51 )
LABEL_168:
          *(_DWORD *)(a3 + 168) = v41 - 1;
        else
          v51 = v43;
LABEL_169:
        *v51 = v10;
        ++*(_DWORD *)(a3 + 164);
LABEL_96:
        v172 = 1;
LABEL_26:
        result = v8 + 24;
        if ( v9 != v8 + 24 )
        {
          while ( 1 )
          {
            v10 = *(_QWORD *)result;
            v8 = result;
            if ( *(_QWORD *)result > 1u )
              break;
            result += 24;
            if ( v9 == result )
              goto LABEL_31;
          }
          if ( result != v9 )
            continue;
        }
LABEL_31:
        if ( v172 || !*(_DWORD *)(a1 + 100) && (result = *(unsigned int *)(a1 + 104), !(_DWORD)result) )
        {
LABEL_32:
          if ( v11 )
            return sub_186B220(v11 - 1);
          return result;
        }
LABEL_213:
        v135 = 0;
        v136 = *(_QWORD **)(a1 + 88);
        v137 = *(unsigned int *)(a1 + 96);
        v138 = v136;
        v139 = &v136[2 * v137];
        if ( v136 != v139 )
        {
          do
          {
            while ( *v138 )
            {
              *v138 = 0;
              v138 += 2;
              if ( v139 == v138 )
                goto LABEL_218;
            }
            v138 += 2;
            ++v135;
          }
          while ( v139 != v138 );
LABEL_218:
          if ( (unsigned int)v137 > 0x10 && 3 * (int)v137 < (unsigned int)(4 * v135) )
          {
            if ( v136 )
            {
              sub_186B220(v136);
              v140 = *(_DWORD *)(a1 + 96);
              *(_QWORD *)(a1 + 88) = 0;
              v141 = v140 >> 1;
              *(_DWORD *)(a1 + 96) = v140 >> 1;
              v142 = v140 >> 1;
              v143 = (_OWORD *)sub_186B270(v142 * 16);
              if ( v141 )
                goto LABEL_222;
            }
            else
            {
              v149 = (unsigned int)v137 >> 1;
              *(_QWORD *)(a1 + 88) = 0;
              v142 = v149;
              *(_DWORD *)(a1 + 96) = v149;
              v143 = (_OWORD *)sub_186B270(16 * v149);
LABEL_222:
              v144 = &v143[v142];
              v145 = v143;
              if ( ((v142 * 16) & 0x10) == 0 || (v145 = v143 + 1, *v143 = 0, v143 + 1 != v144) )
              {
                do
                {
                  *v145 = 0;
                  v145 += 2;
                  *(v145 - 1) = 0;
                }
                while ( v145 != v144 );
              }
            }
            *(_QWORD *)(a1 + 88) = v143;
          }
        }
        result = a1;
        *(_QWORD *)(a1 + 100) = 0;
        goto LABEL_32;
      }
    }
  }
LABEL_246:
  result = a1;
  if ( *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 104) )
  {
    v11 = nullptr;
    goto LABEL_213;
  }
  return result;
}

