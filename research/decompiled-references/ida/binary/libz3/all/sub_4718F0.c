__int64 __fastcall sub_4718F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char **exception; // rbp
  __int64 v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  char *v10; // rcx
  int v11; // edi
  unsigned int v12; // edx
  char *v13; // rsi
  __int64 v14; // rdx
  char *v15; // r9
  char *i; // rax
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __m128i *v24; // r14
  int v25; // r11d
  __int64 v26; // r9
  __int8 *v27; // r15
  int v28; // esi
  __int64 v29; // r11
  __m128i *v30; // rdi
  __m128i *v31; // rax
  __m128i *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // edi
  char *v36; // rcx
  unsigned int v37; // edx
  char *v38; // rsi
  __int64 v39; // rdx
  char *v40; // r9
  char *j; // rax
  __int64 v42; // r12
  unsigned int v43; // r14d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // eax
  unsigned int v49; // ecx
  __m128i *v50; // r15
  __int64 v51; // r10
  __int8 *v52; // rcx
  int v53; // esi
  __int64 v54; // rax
  __m128i *v55; // rdi
  __m128i *v56; // rax
  __m128i *v57; // r9
  __int64 v58; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __m128i *v64; // rax
  int v65; // edx
  __m128i *v66; // r11
  __int64 v67; // r9
  __int64 v68; // rsi
  void *v69; // r8
  __int64 v70; // rax
  __m128i *v71; // rbp
  __int64 v72; // r11
  const __m128i *v73; // r12
  __int64 v74; // r8
  __int64 v75; // r13
  const __m128i *v76; // rbx
  __int64 v77; // rdx
  __m128i *v78; // rsi
  __m128i *v79; // rdx
  __m128i *v80; // rax
  int v81; // edx
  __m128i *v82; // r10
  __int64 v83; // rcx
  __int64 v84; // rsi
  void *v85; // r8
  __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // r13
  __m128i *v89; // rbp
  const __m128i *v90; // rbx
  __int64 v91; // r10
  const __m128i *v92; // r12
  __int64 v93; // rdx
  __m128i *v94; // rsi
  __m128i *v95; // rdx
  unsigned int v96; // ecx
  __m128i *v97; // r15
  __int64 v98; // r10
  __int8 *v99; // rcx
  int v100; // esi
  __int64 v101; // rax
  __m128i *v102; // rdi
  __m128i *v103; // rax
  __m128i *v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rax
  _QWORD *v107; // rcx
  unsigned int v108; // eax
  unsigned int v109; // r15d
  unsigned int v110; // r14d
  unsigned int v111; // edx
  size_t v112; // rsi
  unsigned int v113; // ebp
  unsigned int *v114; // rax
  unsigned int v115; // eax
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rax
  unsigned int v120; // ecx
  __m128i *v121; // r14
  int v122; // r11d
  __int64 v123; // r9
  __int8 *v124; // r15
  int v125; // esi
  __int64 v126; // r11
  __m128i *v127; // rdi
  __m128i *v128; // rax
  __m128i *v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rax
  _QWORD *v132; // r15
  unsigned int v133; // eax
  unsigned int v134; // r14d
  _QWORD *v135; // rdi
  __int64 v136; // r15
  __int64 v137; // r12
  unsigned int v138; // edx
  size_t v139; // rsi
  unsigned int v140; // ebp
  unsigned int *v141; // rax
  unsigned int v142; // eax
  __int64 v143; // rdx
  __int64 v144; // rax
  _QWORD *v145; // rdi
  __int64 v146; // rax
  __m128i *v147; // rax
  int v148; // edx
  __m128i *v149; // r10
  __int64 v150; // rcx
  __int64 v151; // rsi
  void *v152; // r8
  __int64 v153; // rdi
  __int64 v154; // rax
  __int64 v155; // r13
  __m128i *v156; // rbp
  const __m128i *v157; // rbx
  __int64 v158; // r10
  const __m128i *v159; // r12
  __int64 v160; // rdx
  __m128i *v161; // rsi
  __m128i *v162; // rdx
  __m128i *v163; // rax
  int v164; // edx
  __m128i *v165; // r11
  __int64 v166; // r9
  __int64 v167; // rsi
  void *v168; // r8
  __int64 v169; // rax
  __m128i *v170; // rbp
  __int64 v171; // r11
  const __m128i *v172; // r12
  __int64 v173; // r8
  __int64 v174; // r13
  const __m128i *v175; // rbx
  __int64 v176; // rdx
  __m128i *v177; // rsi
  __m128i *v178; // rdx
  _QWORD *v179; // rax
  _QWORD *v180; // rax
  unsigned int v181; // [rsp+0h] [rbp-A8h]
  unsigned int v182; // [rsp+4h] [rbp-A4h]
  unsigned int v183; // [rsp+4h] [rbp-A4h]
  int v184; // [rsp+8h] [rbp-A0h]
  size_t v185; // [rsp+8h] [rbp-A0h]
  size_t v186; // [rsp+8h] [rbp-A0h]
  int v187; // [rsp+8h] [rbp-A0h]
  unsigned int v188; // [rsp+8h] [rbp-A0h]
  _QWORD *v189; // [rsp+8h] [rbp-A0h]
  unsigned int v190; // [rsp+8h] [rbp-A0h]
  size_t v191; // [rsp+8h] [rbp-A0h]
  int v192; // [rsp+8h] [rbp-A0h]
  size_t v193; // [rsp+8h] [rbp-A0h]
  int v194; // [rsp+8h] [rbp-A0h]
  int v195; // [rsp+10h] [rbp-98h]
  int v196; // [rsp+10h] [rbp-98h]
  __int64 v197; // [rsp+10h] [rbp-98h]
  int v198; // [rsp+10h] [rbp-98h]
  size_t v199; // [rsp+10h] [rbp-98h]
  int v200; // [rsp+10h] [rbp-98h]
  __int64 v201; // [rsp+10h] [rbp-98h]
  __int64 v202; // [rsp+10h] [rbp-98h]
  size_t v203; // [rsp+10h] [rbp-98h]
  int v204; // [rsp+18h] [rbp-90h]
  __int8 *v205; // [rsp+18h] [rbp-90h]
  __int8 *v206; // [rsp+18h] [rbp-90h]
  int v207; // [rsp+18h] [rbp-90h]
  int v208; // [rsp+20h] [rbp-88h]
  int v209; // [rsp+20h] [rbp-88h]
  __int64 v210[11]; // [rsp+50h] [rbp-58h] BYREF

  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( !a2 )
  {
    if ( !a3 )
    {
      v181 = 0;
      v43 = 1;
      goto LABEL_59;
    }
    v181 = 0;
    goto LABEL_21;
  }
  v9 = *(unsigned int *)(a1 + 112);
  v10 = *(char **)(a1 + 104);
  v11 = *(_DWORD *)(a2 + 12);
  v12 = v9 - 1;
  v9 *= 16;
  v13 = &v10[v9];
  v14 = 16LL * (v11 & v12);
  v15 = &v10[v14];
  if ( v14 != v9 )
  {
    for ( i = &v10[v14]; v13 != i; i += 16 )
    {
      v14 = *(_QWORD *)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( *(_DWORD *)(v14 + 12) == v11 && v7 == v14 )
        {
LABEL_20:
          v181 = *((_DWORD *)i + 2);
          if ( !v6 )
          {
            v43 = 1;
            v17 = v8 + 192;
            return sub_1819120(v17, v181, v43, 1);
          }
          goto LABEL_21;
        }
      }
      else if ( !v14 )
      {
        goto LABEL_9;
      }
    }
  }
  for ( ; v15 != v10; v10 += 16 )
  {
    v61 = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 > 1u )
    {
      if ( *(_DWORD *)(v61 + 12) == v11 && v7 == v61 )
      {
        i = v10;
        goto LABEL_20;
      }
    }
    else if ( !v61 )
    {
      break;
    }
  }
LABEL_9:
  v17 = v8 + 192;
  v182 = sub_1819420(v8 + 192, v13, v14, v10, a5, v15);
  v22 = sub_1819420(v8 + 192, v13, v18, v19, v20, v21);
  v23 = *(_DWORD *)(v8 + 88);
  v181 = v22;
  if ( 3 * v23 < 4 * (*(_DWORD *)(v8 + 92) + *(_DWORD *)(v8 + 96)) )
  {
    v196 = 2 * v23;
    v186 = 32LL * v23;
    v80 = (__m128i *)sub_186B270(v186);
    v26 = v186;
    v81 = v196;
    v24 = v80;
    v82 = &v80[v186 / 0x10];
    if ( v196 )
    {
      do
      {
        v80->m128i_i64[0] = 0;
        ++v80;
        v80[-1].m128i_i32[2] = 0;
      }
      while ( v80 != v82 );
    }
    v83 = *(_QWORD *)(v8 + 80);
    v25 = v196 - 1;
    v27 = (__int8 *)v82;
    v84 = 16LL * *(unsigned int *)(v8 + 88);
    v85 = (void *)(v83 + v84);
    if ( v83 != v83 + v84 )
    {
      v86 = v6;
      v87 = v7;
      v88 = v8;
      v89 = v82;
      v90 = *(const __m128i **)(v8 + 80);
      v91 = v17;
      v92 = (const __m128i *)(v83 + v84);
      do
      {
        if ( v90->m128i_i64[0] > 1uLL )
        {
          v93 = 16LL * (*(_DWORD *)(v90->m128i_i64[0] + 12) & (unsigned int)v25);
          v94 = &v24[(unsigned __int64)v93 / 0x10];
          if ( v186 == v93 )
          {
LABEL_106:
            if ( v24 == v94 )
            {
LABEL_236:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v95 = v24;
            while ( v95->m128i_i64[0] )
            {
              if ( v94 == ++v95 )
                goto LABEL_236;
            }
          }
          else
          {
            v95 = &v24[(unsigned __int64)v93 / 0x10];
            while ( v95->m128i_i64[0] )
            {
              if ( v89 == ++v95 )
                goto LABEL_106;
            }
          }
          *v95 = _mm_loadu_si128(v90);
        }
        ++v90;
      }
      while ( v92 != v90 );
      v8 = v88;
      v81 = v196;
      v7 = v87;
      v6 = v86;
      v85 = *(void **)(v8 + 80);
      v17 = v91;
    }
    if ( v85 )
    {
      v207 = v81;
      v203 = v186;
      v194 = v25;
      sub_186B220(v85);
      v81 = v207;
      v26 = v203;
      v25 = v194;
    }
    *(_QWORD *)(v8 + 80) = v24;
    *(_DWORD *)(v8 + 88) = v81;
    *(_DWORD *)(v8 + 96) = 0;
  }
  else
  {
    v24 = *(__m128i **)(v8 + 80);
    v25 = v23 - 1;
    v26 = 16LL * v23;
    v27 = &v24->m128i_i8[v26];
  }
  v28 = *(_DWORD *)(v7 + 12);
  v29 = 16LL * (v28 & (unsigned int)v25);
  v30 = &v24[(unsigned __int64)v29 / 0x10];
  if ( v29 != v26 )
  {
    v31 = &v24[(unsigned __int64)v29 / 0x10];
    v32 = nullptr;
    while ( 1 )
    {
      v33 = v31->m128i_i64[0];
      if ( v31->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v33 + 12) == v28 && v7 == v33 )
        {
          v31->m128i_i64[0] = v7;
          v31->m128i_i32[2] = v182;
          goto LABEL_142;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_224;
          v32 = v31;
          goto LABEL_225;
        }
        v32 = v31;
      }
      if ( ++v31 == (__m128i *)v27 )
        goto LABEL_74;
    }
  }
  v32 = nullptr;
  while ( 1 )
  {
LABEL_74:
    if ( v30 == v24 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v63 = v24->m128i_i64[0];
    if ( v24->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v63 + 12) == v28 && v7 == v63 )
    {
      v24->m128i_i64[0] = v7;
      v24->m128i_i32[2] = v182;
      goto LABEL_142;
    }
LABEL_73:
    ++v24;
  }
  if ( v63 )
  {
    v32 = v24;
    goto LABEL_73;
  }
  if ( v32 )
LABEL_224:
    --*(_DWORD *)(v8 + 96);
  else
    v32 = v24;
LABEL_225:
  v32->m128i_i64[0] = v7;
  v32->m128i_i32[2] = v182;
  ++*(_DWORD *)(v8 + 92);
LABEL_142:
  v120 = *(_DWORD *)(v8 + 112);
  if ( 3 * v120 < 4 * (*(_DWORD *)(v8 + 116) + *(_DWORD *)(v8 + 120)) )
  {
    v198 = 2 * v120;
    v191 = 32LL * v120;
    v147 = (__m128i *)sub_186B270(v191);
    v123 = v191;
    v148 = v198;
    v121 = v147;
    v149 = &v147[v191 / 0x10];
    if ( v198 )
    {
      do
      {
        v147->m128i_i64[0] = 0;
        ++v147;
        v147[-1].m128i_i32[2] = 0;
      }
      while ( v147 != v149 );
    }
    v150 = *(_QWORD *)(v8 + 104);
    v122 = v198 - 1;
    v124 = (__int8 *)v149;
    v151 = 16LL * *(unsigned int *)(v8 + 112);
    v152 = (void *)(v150 + v151);
    if ( v150 != v150 + v151 )
    {
      v153 = v6;
      v154 = v7;
      v155 = v8;
      v156 = v149;
      v157 = *(const __m128i **)(v8 + 104);
      v158 = v17;
      v159 = (const __m128i *)(v150 + v151);
      do
      {
        if ( v157->m128i_i64[0] > 1uLL )
        {
          v160 = 16LL * (*(_DWORD *)(v157->m128i_i64[0] + 12) & (unsigned int)v122);
          v161 = &v121[(unsigned __int64)v160 / 0x10];
          if ( v191 == v160 )
          {
LABEL_183:
            if ( v121 == v161 )
            {
LABEL_239:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v162 = v121;
            while ( v162->m128i_i64[0] )
            {
              if ( v161 == ++v162 )
                goto LABEL_239;
            }
          }
          else
          {
            v162 = &v121[(unsigned __int64)v160 / 0x10];
            while ( v162->m128i_i64[0] )
            {
              if ( v156 == ++v162 )
                goto LABEL_183;
            }
          }
          *v162 = _mm_loadu_si128(v157);
        }
        ++v157;
      }
      while ( v159 != v157 );
      v8 = v155;
      v148 = v198;
      v7 = v154;
      v6 = v153;
      v152 = *(void **)(v8 + 104);
      v17 = v158;
    }
    if ( v152 )
    {
      v204 = v148;
      v199 = v191;
      v192 = v122;
      sub_186B220(v152);
      v148 = v204;
      v123 = v199;
      v122 = v192;
    }
    *(_QWORD *)(v8 + 104) = v121;
    *(_DWORD *)(v8 + 112) = v148;
    *(_DWORD *)(v8 + 120) = 0;
  }
  else
  {
    v121 = *(__m128i **)(v8 + 104);
    v122 = v120 - 1;
    v123 = 16LL * v120;
    v124 = &v121->m128i_i8[v123];
  }
  v125 = *(_DWORD *)(v7 + 12);
  v126 = 16LL * (v125 & (unsigned int)v122);
  v127 = &v121[(unsigned __int64)v126 / 0x10];
  if ( v126 != v123 )
  {
    v128 = &v121[(unsigned __int64)v126 / 0x10];
    v129 = nullptr;
    while ( 1 )
    {
      v130 = v128->m128i_i64[0];
      if ( v128->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v130 + 12) == v125 && v7 == v130 )
        {
          v128->m128i_i64[0] = v7;
          v128->m128i_i32[2] = v181;
          goto LABEL_160;
        }
      }
      else
      {
        if ( !v130 )
        {
          if ( v129 )
            goto LABEL_227;
          v129 = v128;
          goto LABEL_228;
        }
        v129 = v128;
      }
      if ( ++v128 == (__m128i *)v124 )
        goto LABEL_155;
    }
  }
  v129 = nullptr;
LABEL_155:
  while ( 2 )
  {
    if ( v127 == v121 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v131 = v121->m128i_i64[0];
    if ( v121->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v131 + 12) == v125 && v7 == v131 )
      {
        v121->m128i_i64[0] = v7;
        v121->m128i_i32[2] = v181;
        goto LABEL_160;
      }
      goto LABEL_154;
    }
    if ( v131 )
    {
      v129 = v121;
LABEL_154:
      ++v121;
      continue;
    }
    break;
  }
  if ( v129 )
LABEL_227:
    --*(_DWORD *)(v8 + 120);
  else
    v129 = v121;
LABEL_228:
  v129->m128i_i64[0] = v7;
  v129->m128i_i32[2] = v181;
  ++*(_DWORD *)(v8 + 116);
LABEL_160:
  v132 = *(_QWORD **)(v8 + 128);
  if ( v132 )
  {
    v133 = *((_DWORD *)v132 - 1);
    if ( v181 >= v133 )
    {
      v134 = v181 + 1;
      if ( v133 < v181 + 1 )
      {
        v135 = *(_QWORD **)(v8 + 128);
        v190 = *((_DWORD *)v132 - 1);
        v136 = v17;
        v137 = v7;
        goto LABEL_167;
      }
      *((_DWORD *)v132 - 1) = v134;
    }
  }
  else
  {
    v134 = v181 + 1;
    if ( v181 != -1 )
    {
      v179 = (_QWORD *)sub_186B270(0x18u);
      *v179 = 2;
      *(_QWORD *)(v8 + 128) = v179 + 1;
      v135 = v179 + 1;
      v136 = v17;
      v137 = v7;
      v190 = 0;
LABEL_167:
      while ( 1 )
      {
        v142 = *((_DWORD *)v135 - 2);
        if ( v142 >= v134 )
          break;
        v138 = (3 * v142 + 1) >> 1;
        v139 = 8 * v138 + 8;
        v140 = v138;
        if ( 8 * v142 + 8 >= (unsigned int)v139 || v142 >= v138 )
        {
LABEL_266:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v210, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v210);
          sub_233E40((__int64)v210);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v141 = (unsigned int *)sub_186B300(v135 - 1, v139);
        v135 = v141 + 2;
        *v141 = v140;
        *(_QWORD *)(v8 + 128) = v141 + 2;
      }
      *((_DWORD *)v135 - 1) = v134;
      v7 = v137;
      v143 = 8LL * v134;
      v17 = v136;
      v132 = v135;
      v144 = 8LL * v190;
      v145 = &v135[(unsigned __int64)v144 / 8];
      if ( v144 != v143 )
        memset(v145, 0, v143 - v144);
    }
  }
  v146 = *(_QWORD *)(v7 + 8LL * (unsigned int)(*(_DWORD *)(v7 + 24) - 1) + 32);
  v132[v182] = v146;
  v132[v181] = v146;
  sub_1819120(v17, v182, v181, 1);
  if ( !v6 )
  {
    v43 = 1;
    return sub_1819120(v17, v181, v43, 1);
  }
LABEL_21:
  v34 = *(unsigned int *)(v8 + 88);
  v35 = *(_DWORD *)(v6 + 12);
  v36 = *(char **)(v8 + 80);
  v37 = v34 - 1;
  v34 *= 16;
  v38 = &v36[v34];
  v39 = 16LL * (v35 & v37);
  v40 = &v36[v39];
  if ( v39 != v34 )
  {
    for ( j = &v36[v39]; v38 != j; j += 16 )
    {
      v39 = *(_QWORD *)j;
      if ( *(_QWORD *)j > 1u )
      {
        if ( *(_DWORD *)(v39 + 12) == v35 && v6 == v39 )
          goto LABEL_39;
      }
      else if ( !v39 )
      {
        goto LABEL_28;
      }
    }
  }
  for ( ; v40 != v36; v36 += 16 )
  {
    v60 = *(_QWORD *)v36;
    if ( *(_QWORD *)v36 > 1u )
    {
      if ( *(_DWORD *)(v60 + 12) == v35 && v6 == v60 )
      {
        j = v36;
LABEL_39:
        v43 = *((_DWORD *)j + 2);
        goto LABEL_40;
      }
    }
    else if ( !v60 )
    {
      break;
    }
  }
LABEL_28:
  v42 = v8 + 192;
  v43 = sub_1819420(v8 + 192, v38, v39, v36, a5, v40);
  v48 = sub_1819420(v8 + 192, v38, v44, v45, v46, v47);
  v49 = *(_DWORD *)(v8 + 88);
  v183 = v48;
  if ( 3 * v49 < 4 * (*(_DWORD *)(v8 + 92) + *(_DWORD *)(v8 + 96)) )
  {
    v195 = 2 * v49;
    v185 = 32LL * v49;
    v64 = (__m128i *)sub_186B270(v185);
    v51 = v185;
    v65 = v195;
    v50 = v64;
    v66 = &v64[v185 / 0x10];
    if ( v195 )
    {
      do
      {
        v64->m128i_i64[0] = 0;
        ++v64;
        v64[-1].m128i_i32[2] = 0;
      }
      while ( v64 != v66 );
    }
    v67 = *(_QWORD *)(v8 + 80);
    v52 = (__int8 *)v66;
    v184 = v195 - 1;
    v68 = 16LL * *(unsigned int *)(v8 + 88);
    v69 = (void *)(v67 + v68);
    if ( v67 != v67 + v68 )
    {
      v70 = v7;
      v71 = v66;
      v72 = v8 + 192;
      v73 = (const __m128i *)(v67 + v68);
      v74 = v6;
      v75 = v8;
      v76 = *(const __m128i **)(v8 + 80);
      do
      {
        if ( v76->m128i_i64[0] > 1uLL )
        {
          v77 = 16LL * (*(_DWORD *)(v76->m128i_i64[0] + 12) & (unsigned int)v184);
          v78 = &v50[(unsigned __int64)v77 / 0x10];
          if ( v51 == v77 )
          {
LABEL_101:
            if ( v50 == v78 )
            {
LABEL_237:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v79 = v50;
            while ( v79->m128i_i64[0] )
            {
              if ( v78 == ++v79 )
                goto LABEL_237;
            }
          }
          else
          {
            v79 = &v50[(unsigned __int64)v77 / 0x10];
            while ( v79->m128i_i64[0] )
            {
              if ( v71 == ++v79 )
                goto LABEL_101;
            }
          }
          *v79 = _mm_loadu_si128(v76);
        }
        ++v76;
      }
      while ( v73 != v76 );
      v8 = v75;
      v6 = v74;
      v7 = v70;
      v65 = v195;
      v69 = *(void **)(v8 + 80);
      v42 = v72;
    }
    if ( v69 )
    {
      v209 = v65;
      v206 = v52;
      v202 = v51;
      sub_186B220(v69);
      v65 = v209;
      v52 = v206;
      v51 = v202;
    }
    *(_QWORD *)(v8 + 80) = v50;
    *(_DWORD *)(v8 + 88) = v65;
    *(_DWORD *)(v8 + 96) = 0;
  }
  else
  {
    v50 = *(__m128i **)(v8 + 80);
    v184 = v49 - 1;
    v51 = 16LL * v49;
    v52 = &v50->m128i_i8[v51];
  }
  v53 = *(_DWORD *)(v6 + 12);
  v54 = 16LL * (v53 & (unsigned int)v184);
  v55 = &v50[(unsigned __int64)v54 / 0x10];
  if ( v54 != v51 )
  {
    v56 = &v50[(unsigned __int64)v54 / 0x10];
    v57 = nullptr;
    while ( 1 )
    {
      v58 = v56->m128i_i64[0];
      if ( v56->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v58 + 12) == v53 && v6 == v58 )
        {
          v56->m128i_i64[0] = v6;
          v56->m128i_i32[2] = v43;
          goto LABEL_112;
        }
      }
      else
      {
        if ( !v58 )
        {
          if ( v57 )
            goto LABEL_230;
          v57 = v56;
          goto LABEL_231;
        }
        v57 = v56;
      }
      if ( ++v56 == (__m128i *)v52 )
        goto LABEL_67;
    }
  }
  v57 = nullptr;
LABEL_67:
  while ( 2 )
  {
    if ( v55 == v50 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v62 = v50->m128i_i64[0];
    if ( v50->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v62 + 12) == v53 && v6 == v62 )
      {
        v50->m128i_i64[0] = v6;
        v50->m128i_i32[2] = v43;
        goto LABEL_112;
      }
      goto LABEL_66;
    }
    if ( v62 )
    {
      v57 = v50;
LABEL_66:
      ++v50;
      continue;
    }
    break;
  }
  if ( v57 )
LABEL_230:
    --*(_DWORD *)(v8 + 96);
  else
    v57 = v50;
LABEL_231:
  v57->m128i_i64[0] = v6;
  v57->m128i_i32[2] = v43;
  ++*(_DWORD *)(v8 + 92);
LABEL_112:
  v96 = *(_DWORD *)(v8 + 112);
  if ( 3 * v96 < 4 * (*(_DWORD *)(v8 + 116) + *(_DWORD *)(v8 + 120)) )
  {
    v200 = 2 * v96;
    v193 = 32LL * v96;
    v163 = (__m128i *)sub_186B270(v193);
    v98 = v193;
    v164 = v200;
    v97 = v163;
    v165 = &v163[v193 / 0x10];
    if ( v200 )
    {
      do
      {
        v163->m128i_i64[0] = 0;
        ++v163;
        v163[-1].m128i_i32[2] = 0;
      }
      while ( v163 != v165 );
    }
    v166 = *(_QWORD *)(v8 + 104);
    v99 = (__int8 *)v165;
    v187 = v200 - 1;
    v167 = 16LL * *(unsigned int *)(v8 + 112);
    v168 = (void *)(v166 + v167);
    if ( v166 != v166 + v167 )
    {
      v169 = v7;
      v170 = v165;
      v171 = v42;
      v172 = (const __m128i *)(v166 + v167);
      v173 = v6;
      v174 = v8;
      v175 = *(const __m128i **)(v8 + 104);
      do
      {
        if ( v175->m128i_i64[0] > 1uLL )
        {
          v176 = 16LL * (*(_DWORD *)(v175->m128i_i64[0] + 12) & (unsigned int)v187);
          v177 = &v97[(unsigned __int64)v176 / 0x10];
          if ( v98 == v176 )
          {
LABEL_203:
            if ( v97 == v177 )
            {
LABEL_238:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v178 = v97;
            while ( v178->m128i_i64[0] )
            {
              if ( v177 == ++v178 )
                goto LABEL_238;
            }
          }
          else
          {
            v178 = &v97[(unsigned __int64)v176 / 0x10];
            while ( v178->m128i_i64[0] )
            {
              if ( v170 == ++v178 )
                goto LABEL_203;
            }
          }
          *v178 = _mm_loadu_si128(v175);
        }
        ++v175;
      }
      while ( v172 != v175 );
      v8 = v174;
      v6 = v173;
      v7 = v169;
      v164 = v200;
      v168 = *(void **)(v8 + 104);
      v42 = v171;
    }
    if ( v168 )
    {
      v208 = v164;
      v205 = v99;
      v201 = v98;
      sub_186B220(v168);
      v164 = v208;
      v99 = v205;
      v98 = v201;
    }
    *(_QWORD *)(v8 + 104) = v97;
    *(_DWORD *)(v8 + 112) = v164;
    *(_DWORD *)(v8 + 120) = 0;
  }
  else
  {
    v97 = *(__m128i **)(v8 + 104);
    v187 = v96 - 1;
    v98 = 16LL * v96;
    v99 = &v97->m128i_i8[v98];
  }
  v100 = *(_DWORD *)(v6 + 12);
  v101 = 16LL * (v100 & (unsigned int)v187);
  v102 = &v97[(unsigned __int64)v101 / 0x10];
  if ( v101 != v98 )
  {
    v103 = &v97[(unsigned __int64)v101 / 0x10];
    v104 = nullptr;
    while ( 1 )
    {
      v105 = v103->m128i_i64[0];
      if ( v103->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v105 + 12) == v100 && v6 == v105 )
        {
          v103->m128i_i64[0] = v6;
          v103->m128i_i32[2] = v183;
          goto LABEL_130;
        }
      }
      else
      {
        if ( !v105 )
        {
          if ( v104 )
            goto LABEL_221;
          v104 = v103;
          goto LABEL_222;
        }
        v104 = v103;
      }
      if ( ++v103 == (__m128i *)v99 )
        goto LABEL_125;
    }
  }
  v104 = nullptr;
LABEL_125:
  while ( 2 )
  {
    if ( v102 == v97 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v106 = v97->m128i_i64[0];
    if ( v97->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v106 + 12) == v100 && v6 == v106 )
      {
        v97->m128i_i64[0] = v6;
        v97->m128i_i32[2] = v183;
        goto LABEL_130;
      }
      goto LABEL_124;
    }
    if ( v106 )
    {
      v104 = v97;
LABEL_124:
      ++v97;
      continue;
    }
    break;
  }
  if ( v104 )
LABEL_221:
    --*(_DWORD *)(v8 + 120);
  else
    v104 = v97;
LABEL_222:
  v104->m128i_i64[0] = v6;
  v104->m128i_i32[2] = v183;
  ++*(_DWORD *)(v8 + 116);
LABEL_130:
  v107 = *(_QWORD **)(v8 + 128);
  if ( v107 )
  {
    v108 = *((_DWORD *)v107 - 1);
    if ( v183 >= v108 )
    {
      v109 = v183 + 1;
      if ( v108 < v183 + 1 )
      {
        v188 = v43;
        v110 = *((_DWORD *)v107 - 1);
        v197 = v7;
        goto LABEL_137;
      }
      *((_DWORD *)v107 - 1) = v109;
    }
  }
  else
  {
    v109 = v183 + 1;
    if ( v183 != -1 )
    {
      v180 = (_QWORD *)sub_186B270(0x18u);
      v188 = v43;
      v107 = v180 + 1;
      *v180 = 2;
      *(_QWORD *)(v8 + 128) = v180 + 1;
      v110 = 0;
      v197 = v7;
LABEL_137:
      while ( 1 )
      {
        v115 = *((_DWORD *)v107 - 2);
        if ( v115 >= v109 )
          break;
        v111 = (3 * v115 + 1) >> 1;
        v112 = 8 * v111 + 8;
        v113 = v111;
        if ( 8 * v115 + 8 >= (unsigned int)v112 || v115 >= v111 )
          goto LABEL_266;
        v114 = (unsigned int *)sub_186B300(v107 - 1, v112);
        v107 = v114 + 2;
        *v114 = v113;
        *(_QWORD *)(v8 + 128) = v114 + 2;
      }
      v116 = v110;
      *((_DWORD *)v107 - 1) = v109;
      v43 = v188;
      v117 = 8 * v116;
      v118 = 8LL * v109;
      v7 = v197;
      if ( v117 != v118 )
      {
        v189 = v107;
        memset(&v107[(unsigned __int64)v117 / 8], 0, v118 - v117);
        v107 = v189;
      }
    }
  }
  v119 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(v6 + 24) - 1) + 32);
  v107[v43] = v119;
  v107[v183] = v119;
  sub_1819120(v42, v43, v183, 1);
LABEL_40:
  v17 = v8 + 192;
  if ( v7 )
    return sub_1819120(v17, v181, v43, 1);
LABEL_59:
  if ( !(unsigned __int8)sub_15D37A0(v8 + 136, v6) )
    sub_1819120(v8 + 192, v181, v43, 1);
  return sub_15D0A90(v8 + 136, v6, 1);
}

