__int64 *__fastcall sub_5F8C80(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  char **v6; // r12
  char **exception; // r12
  char **v8; // r12
  char **v9; // r12
  char **v10; // r12
  char **v11; // r12
  __int64 v13; // rbx
  unsigned __int64 v14; // rbp
  __int64 v15; // r15
  _QWORD *v16; // rax
  __int64 *v17; // rsi
  int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 *v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  unsigned int v27; // r8d
  __int64 v28; // rax
  int v29; // r8d
  __int64 *v30; // rax
  __int64 v31; // rax
  int v32; // edi
  unsigned int v33; // edx
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 *v36; // rsi
  __int64 *v37; // r9
  __int64 *i; // rax
  __int64 v39; // rdx
  __int64 v40; // r13
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  unsigned __int64 v43; // r15
  unsigned __int64 v44; // r14
  _QWORD *v45; // r13
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // r8d
  size_t v50; // rsi
  _DWORD *v51; // rax
  __int64 v52; // rsi
  __int64 v53; // r15
  __int64 v54; // rbp
  __int64 v55; // rax
  __int64 *v56; // rbp
  unsigned __int64 v57; // r12
  __int64 v58; // rsi
  __int64 v61; // rax
  unsigned int v62; // edx
  size_t v63; // rsi
  unsigned int *v64; // rax
  unsigned int v65; // r15d
  size_t v66; // rsi
  unsigned int *v67; // rax
  __int64 v68; // rax
  int v69; // r8d
  __int64 v70; // r14
  unsigned int v71; // eax
  __int64 *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned int v76; // edx
  __m128i *v77; // r14
  unsigned int v78; // r11d
  __int64 v79; // r8
  __m128i *v80; // rax
  int v81; // esi
  __m128i v82; // xmm0
  __int64 v83; // rdx
  __m128i *v84; // rdi
  __m128i *v85; // rdx
  __m128i *v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rax
  unsigned int v89; // r15d
  unsigned int v90; // edx
  unsigned int *v91; // rax
  __int64 v92; // rdx
  unsigned int v93; // eax
  int v94; // esi
  __m128i *v95; // r14
  unsigned int v96; // r11d
  __int64 v97; // r8
  __m128i *v98; // rax
  int v99; // edi
  __m128i v100; // xmm0
  __int64 v101; // rdx
  __m128i *v102; // r9
  __m128i *v103; // rdx
  __m128i *v104; // r8
  __int64 v105; // rcx
  __int64 v106; // rax
  _QWORD *v107; // rdx
  unsigned int v108; // eax
  __int64 v109; // rcx
  int v110; // eax
  __int64 *v111; // rcx
  __int64 v112; // rdi
  int v113; // edi
  __int64 *v114; // rsi
  __int64 v115; // rax
  unsigned int v116; // edx
  __int64 *v117; // rcx
  __int64 v118; // rdx
  __int64 *v119; // r8
  __int64 *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  _QWORD *v123; // rdx
  unsigned int v124; // eax
  __int64 v125; // rcx
  int v126; // eax
  __int64 *v127; // rcx
  __int64 v128; // rax
  int v129; // esi
  unsigned int v130; // r8d
  __int64 *v131; // rbp
  __int64 v132; // rcx
  unsigned int v133; // r10d
  __int64 *v134; // r14
  int v135; // edi
  __int64 v136; // r10
  __int64 *v137; // r8
  __int64 *v138; // rax
  __int64 *v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rax
  unsigned int v142; // r14d
  unsigned int v143; // ecx
  unsigned int *v144; // rax
  __int64 v145; // rcx
  __m128i *v146; // rax
  __m128i *v147; // r9
  const __m128i *v148; // rcx
  __m128i *v149; // r10
  __int64 v150; // rdx
  __m128i *v151; // rsi
  __m128i *v152; // rdx
  __m128i *v153; // rax
  __m128i *v154; // r9
  const __m128i *v155; // rcx
  __m128i *v156; // r10
  __int64 v157; // rdx
  __m128i *v158; // rsi
  __m128i *v159; // rdx
  _QWORD *v160; // rax
  unsigned int v161; // ebp
  unsigned int v162; // ecx
  unsigned int *v163; // rax
  __int64 v164; // rcx
  __int64 v165; // r14
  __int64 *v166; // rax
  unsigned int v167; // r8d
  char *v168; // rax
  char *v169; // r9
  __int64 v170; // rdx
  __int64 *v171; // rsi
  __int64 *v172; // rdx
  _QWORD *v173; // rax
  _QWORD *v174; // rdx
  _QWORD *v175; // rax
  int v176; // [rsp+0h] [rbp-D8h]
  __int64 v177; // [rsp+8h] [rbp-D0h]
  unsigned int v178; // [rsp+8h] [rbp-D0h]
  unsigned int v179; // [rsp+8h] [rbp-D0h]
  __int64 *v181; // [rsp+10h] [rbp-C8h]
  __int64 v182; // [rsp+18h] [rbp-C0h]
  __int64 v184; // [rsp+28h] [rbp-B0h]
  __int64 v185; // [rsp+28h] [rbp-B0h]
  __m128i *v188; // [rsp+40h] [rbp-98h]
  void *v189; // [rsp+48h] [rbp-90h]
  __int64 v190[11]; // [rsp+80h] [rbp-58h] BYREF

  v13 = *(unsigned int *)(a5 + 24);
  v14 = *(_QWORD *)(a5 + 16);
  v182 = a5;
  v184 = *(_QWORD *)(a2 + 24);
  if ( (_DWORD)v13 )
  {
    v15 = *(_QWORD *)(a5 + 32);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v16 = (_QWORD *)sub_186B270(0x18u);
    v17 = v16 + 1;
    *v16 = 2;
    v18 = 1;
    v19 = v182 + 8 * v13;
    v20 = v182;
    v21 = v17;
    while ( 1 )
    {
      v20 += 8;
      *v17 = v15;
      *((_DWORD *)v21 - 1) = v18;
      if ( v20 == v19 )
        break;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v20 + 32);
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        v22 = *((_DWORD *)v21 - 1);
        if ( v22 == *((_DWORD *)v21 - 2) )
          break;
        v20 += 8;
        v21[v22] = v15;
        *((_DWORD *)v21 - 1) = v22 + 1;
        if ( v20 == v19 )
          goto LABEL_10;
      }
      v49 = (3 * v22 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v50 || v22 >= v49 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v190, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v190);
        sub_233E40((__int64)v190);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v177) = (3 * v22 + 1) >> 1;
      v51 = (_DWORD *)sub_186B300(v21 - 1, v50);
      v52 = (unsigned int)v51[1];
      v21 = (__int64 *)(v51 + 2);
      *v51 = v177;
      LODWORD(v51) = v52;
      v17 = &v21[v52];
      v18 = (_DWORD)v51 + 1;
    }
LABEL_10:
    v23 = *(_QWORD *)(a2 + 24);
  }
  else
  {
    v23 = *(_QWORD *)(a2 + 24);
    v21 = nullptr;
  }
  v24 = sub_15D2CD0(*(_QWORD *)(a2 + 40), 5, 1, 0, 0);
  v25 = sub_15DB5C0(v23, a6, v24);
  v26 = v25;
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  if ( v21 )
  {
    v27 = *((_DWORD *)v21 - 1);
    if ( v27 == *((_DWORD *)v21 - 2) )
    {
      v65 = (3 * v27 + 1) >> 1;
      v66 = 8 * v65 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v66 || v27 >= v65 )
      {
        v11 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v190, "Overflow encountered when expanding vector");
        *v11 = (char *)off_1C63128;
        sub_2333C0(v11 + 1, v190);
        sub_233E40((__int64)v190);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v67 = (unsigned int *)sub_186B300(v21 - 1, v66);
      v21 = (__int64 *)(v67 + 2);
      *v67 = v65;
      v68 = v67[1];
      v69 = v68;
      v30 = &v21[v68];
      v29 = v69 + 1;
    }
    else
    {
      v28 = v27;
      v29 = v27 + 1;
      v30 = &v21[v28];
    }
  }
  else
  {
    v160 = (_QWORD *)sub_186B270(0x18u);
    *v160 = 2;
    v30 = v160 + 1;
    v29 = 1;
    v21 = v30;
  }
  *v30 = v26;
  v31 = *(unsigned int *)(a2 + 104);
  *((_DWORD *)v21 - 1) = v29;
  v32 = *(_DWORD *)(v14 + 12);
  v33 = v31 - 1;
  v34 = *(__int64 **)(a2 + 96);
  v31 *= 16;
  v35 = 16LL * (v32 & v33);
  v36 = (__int64 *)((char *)v34 + v31);
  v37 = &v34[(unsigned __int64)v35 / 8];
  if ( v35 != v31 )
  {
    for ( i = &v34[(unsigned __int64)v35 / 8]; v36 != i; i += 2 )
    {
      v39 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v39 + 12) == v32 && v14 == v39 )
          goto LABEL_32;
      }
      else if ( !v39 )
      {
        goto LABEL_23;
      }
    }
  }
  for ( ; v37 != v34; v34 += 2 )
  {
    v61 = *v34;
    if ( (unsigned __int64)*v34 > 1 )
    {
      if ( *(_DWORD *)(v61 + 12) == v32 && v14 == v61 )
      {
        i = v34;
LABEL_32:
        v53 = i[1];
        v54 = *(_QWORD *)(a2 + 24);
        goto LABEL_33;
      }
    }
    else if ( !v61 )
    {
      break;
    }
  }
LABEL_23:
  v40 = *(unsigned int *)(v182 + 24);
  if ( (_DWORD)v40 )
  {
    v41 = (_QWORD *)sub_186B270(0x18u);
    v42 = v41 + 1;
    *v41 = 2;
    v43 = v14 + 8 * v40;
    v44 = v14;
    v45 = v41 + 1;
    v46 = 1;
    while ( 1 )
    {
      v47 = *(_QWORD *)(v44 + 48);
      v44 += 8LL;
      *v42 = v47;
      *((_DWORD *)v45 - 1) = v46;
      if ( v44 == v43 )
        break;
      if ( *((_DWORD *)v45 - 2) == v46 )
      {
        v62 = (3 * v46 + 1) >> 1;
        v63 = 8 * v62 + 8;
        if ( 8 * v46 + 8 >= (unsigned int)v63 || v46 >= v62 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v190, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v190);
          sub_233E40((__int64)v190);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v178 = (3 * v46 + 1) >> 1;
        v64 = (unsigned int *)sub_186B300(v45 - 1, v63);
        v45 = v64 + 2;
        *v64 = v178;
        LODWORD(v64) = v64[1];
        v42 = &v45[(unsigned int)v64];
        v46 = (_DWORD)v64 + 1;
      }
      else
      {
        v48 = v46++;
        v42 = &v45[v48];
      }
    }
  }
  else
  {
    v45 = nullptr;
  }
  v70 = sub_15D2CD0(*(_QWORD *)(a2 + 40), 5, 1, 0, 0);
  if ( v45 )
  {
    v71 = *((_DWORD *)v45 - 1);
    if ( v71 == *((_DWORD *)v45 - 2) )
    {
      v89 = (3 * v71 + 1) >> 1;
      v90 = 8 * v89 + 8;
      if ( 8 * v71 + 8 >= v90 || v71 >= v89 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v190, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v190);
        sub_233E40((__int64)v190);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v91 = (unsigned int *)sub_186B300(v45 - 1, v90);
      v92 = v91[1];
      v45 = v91 + 2;
      *v91 = v89;
      v72 = (__int64 *)&v91[2 * v92 + 2];
      v73 = (unsigned int)(v92 + 1);
    }
    else
    {
      v72 = &v45[v71];
      v73 = v71 + 1;
    }
  }
  else
  {
    v173 = (_QWORD *)sub_186B270(0x18u);
    *v173 = 2;
    v73 = 1;
    v45 = v173 + 1;
    v72 = v173 + 1;
  }
  *v72 = v70;
  v74 = *(_QWORD *)(a2 + 24);
  *((_DWORD *)v45 - 1) = v73;
  v75 = sub_15E3510(v74, v14 + 16, v73, v45, *(_QWORD *)(v14 + 40), 0);
  v76 = *(_DWORD *)(a2 + 104);
  v53 = v75;
  v179 = 2 * v76;
  if ( 3 * v76 < 4 * (*(_DWORD *)(a2 + 108) + *(_DWORD *)(a2 + 112)) )
  {
    v182 = 16LL * v179;
    v153 = (__m128i *)sub_186B270(v182);
    v79 = v182;
    v77 = v153;
    v154 = (__m128i *)((char *)v153 + v182);
    if ( v179 )
    {
      if ( (v182 & 0x10) == 0 || (*v153 = 0, ++v153, v153 != v154) )
      {
        do
        {
          *v153 = 0;
          v153 += 2;
          v153[-1] = 0;
        }
        while ( v153 != v154 );
      }
    }
    v155 = *(const __m128i **)(a2 + 96);
    v78 = v179 - 1;
    v156 = (__m128i *)&v155[*(unsigned int *)(a2 + 104)];
    v80 = v154;
    if ( v155 != v156 )
    {
      do
      {
        if ( v155->m128i_i64[0] > 1uLL )
        {
          v157 = 16LL * (*(_DWORD *)(v155->m128i_i64[0] + 12) & v78);
          v158 = &v77[(unsigned __int64)v157 / 0x10];
          if ( v182 == v157 )
          {
LABEL_177:
            if ( v77 == v158 )
            {
LABEL_198:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v159 = v77;
            while ( v159->m128i_i64[0] )
            {
              if ( v158 == ++v159 )
                goto LABEL_198;
            }
          }
          else
          {
            v159 = &v77[(unsigned __int64)v157 / 0x10];
            while ( v159->m128i_i64[0] )
            {
              if ( v154 == ++v159 )
                goto LABEL_177;
            }
          }
          *v159 = _mm_loadu_si128(v155);
        }
        ++v155;
      }
      while ( v156 != v155 );
      v156 = *(__m128i **)(a2 + 96);
    }
    if ( v156 )
    {
      v188 = v154;
      a6 = 16 * v179;
      LODWORD(v182) = v179 - 1;
      sub_186B220(v156);
      v80 = v188;
      v79 = 16LL * v179;
      v78 = v179 - 1;
    }
    *(_QWORD *)(a2 + 96) = v77;
    *(_DWORD *)(a2 + 112) = 0;
    *(_DWORD *)(a2 + 104) = v179;
  }
  else
  {
    v77 = *(__m128i **)(a2 + 96);
    v78 = v76 - 1;
    v79 = 16LL * v76;
    v80 = (__m128i *)((char *)v77 + v79);
  }
  v81 = *(_DWORD *)(v14 + 12);
  v82 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)(unsigned __int64)v53);
  v83 = 16LL * (v81 & v78);
  v84 = &v77[(unsigned __int64)v83 / 0x10];
  if ( v83 != v79 )
  {
    v85 = &v77[(unsigned __int64)v83 / 0x10];
    v86 = nullptr;
    while ( 1 )
    {
      v87 = v85->m128i_i64[0];
      if ( v85->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v87 + 12) == v81 && v14 == v87 )
        {
          *v85 = v82;
          goto LABEL_81;
        }
      }
      else
      {
        if ( !v87 )
        {
          if ( v86 )
            goto LABEL_190;
          v86 = v85;
          goto LABEL_191;
        }
        v86 = v85;
      }
      if ( ++v85 == v80 )
        goto LABEL_73;
    }
  }
  v86 = nullptr;
  while ( 1 )
  {
LABEL_73:
    if ( v84 == v77 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v88 = v77->m128i_i64[0];
    if ( v77->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v88 + 12) == v81 && v14 == v88 )
    {
      *v77 = v82;
      goto LABEL_81;
    }
LABEL_72:
    ++v77;
  }
  if ( v88 )
  {
    v86 = v77;
    goto LABEL_72;
  }
  if ( v86 )
LABEL_190:
    --*(_DWORD *)(a2 + 112);
  else
    v86 = v77;
LABEL_191:
  *v86 = v82;
  ++*(_DWORD *)(a2 + 108);
LABEL_81:
  v93 = *(_DWORD *)(a2 + 80);
  v94 = *(_DWORD *)(a2 + 88);
  LODWORD(v177) = 2 * v93;
  if ( 3 * v93 < 4 * (v94 + *(_DWORD *)(a2 + 84)) )
  {
    v182 = 16LL * (unsigned int)v177;
    v146 = (__m128i *)sub_186B270(v182);
    v97 = v182;
    v95 = v146;
    v147 = (__m128i *)((char *)v146 + v182);
    if ( (_DWORD)v177 )
    {
      if ( (v182 & 0x10) == 0 || (*v146 = 0, ++v146, v146 != v147) )
      {
        do
        {
          *v146 = 0;
          v146 += 2;
          v146[-1] = 0;
        }
        while ( v146 != v147 );
      }
    }
    v148 = *(const __m128i **)(a2 + 72);
    v96 = v177 - 1;
    v149 = (__m128i *)&v148[*(unsigned int *)(a2 + 80)];
    v98 = v147;
    if ( v148 != v149 )
    {
      do
      {
        if ( v148->m128i_i64[0] > 1uLL )
        {
          v150 = 16LL * (*(_DWORD *)(v148->m128i_i64[0] + 12) & v96);
          v151 = &v95[(unsigned __int64)v150 / 0x10];
          if ( v182 == v150 )
          {
LABEL_155:
            if ( v95 == v151 )
            {
LABEL_197:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v152 = v95;
            while ( v152->m128i_i64[0] )
            {
              if ( v151 == ++v152 )
                goto LABEL_197;
            }
          }
          else
          {
            v152 = &v95[(unsigned __int64)v150 / 0x10];
            while ( v152->m128i_i64[0] )
            {
              if ( v147 == ++v152 )
                goto LABEL_155;
            }
          }
          *v152 = _mm_loadu_si128(v148);
        }
        ++v148;
      }
      while ( v149 != v148 );
      v149 = *(__m128i **)(a2 + 72);
    }
    if ( v149 )
    {
      v188 = v147;
      a6 = 16 * v177;
      LODWORD(v182) = v177 - 1;
      sub_186B220(v149);
      v98 = v188;
      v97 = 16LL * (unsigned int)v177;
      v96 = v177 - 1;
    }
    *(_QWORD *)(a2 + 72) = v95;
    v94 = 0;
    *(_DWORD *)(a2 + 88) = 0;
    *(_DWORD *)(a2 + 80) = v177;
  }
  else
  {
    v95 = *(__m128i **)(a2 + 72);
    v96 = v93 - 1;
    v97 = 16LL * v93;
    v98 = (__m128i *)((char *)v95 + v97);
  }
  v99 = *(_DWORD *)(v53 + 12);
  v100 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v53, (__m128i)v14);
  v101 = 16LL * (v99 & v96);
  v102 = &v95[(unsigned __int64)v101 / 0x10];
  if ( v101 != v97 )
  {
    v103 = &v95[(unsigned __int64)v101 / 0x10];
    v104 = nullptr;
    while ( 1 )
    {
      v105 = v103->m128i_i64[0];
      if ( v103->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v105 + 12) == v99 && v53 == v105 )
        {
          *v103 = v100;
          goto LABEL_99;
        }
      }
      else
      {
        if ( !v105 )
        {
          if ( v104 )
            goto LABEL_187;
          v104 = v103;
          goto LABEL_188;
        }
        v104 = v103;
      }
      if ( ++v103 == v98 )
        goto LABEL_94;
    }
  }
  v104 = nullptr;
LABEL_94:
  while ( 2 )
  {
    if ( v102 == v95 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v106 = v95->m128i_i64[0];
    if ( v95->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v106 + 12) == v99 && v53 == v106 )
      {
        *v95 = v100;
        goto LABEL_99;
      }
      goto LABEL_93;
    }
    if ( v106 )
    {
      v104 = v95;
LABEL_93:
      ++v95;
      continue;
    }
    break;
  }
  if ( v104 )
LABEL_187:
    *(_DWORD *)(a2 + 88) = v94 - 1;
  else
    v104 = v95;
LABEL_188:
  *v104 = v100;
  ++*(_DWORD *)(a2 + 84);
LABEL_99:
  v107 = *(_QWORD **)(a2 + 64);
  ++*(_DWORD *)(v53 + 8);
  if ( v107 )
  {
    v108 = *((_DWORD *)v107 - 1);
    if ( v108 == *((_DWORD *)v107 - 2) )
    {
      v142 = (3 * v108 + 1) >> 1;
      v143 = 8 * v142 + 8;
      if ( 8 * v108 + 8 >= v143 || v108 >= v142 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v190, "Overflow encountered when expanding vector");
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, v190);
        sub_233E40((__int64)v190);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v144 = (unsigned int *)sub_186B300(v107 - 1, v143);
      v145 = v144[1];
      v107 = v144 + 2;
      *v144 = v142;
      *(_QWORD *)(a2 + 64) = v144 + 2;
      LODWORD(v144) = v145;
      v111 = &v107[v145];
      v110 = (_DWORD)v144 + 1;
    }
    else
    {
      v109 = v108;
      v110 = v108 + 1;
      v111 = &v107[v109];
    }
  }
  else
  {
    v174 = (_QWORD *)sub_186B270(0x18u);
    *v174 = 2;
    v110 = 1;
    v107 = v174 + 1;
    *(_QWORD *)(a2 + 64) = v107;
    v111 = v107;
  }
  *v111 = v53;
  v112 = *(_QWORD *)(a2 + 32);
  *((_DWORD *)v107 - 1) = v110;
  sub_6511B0(v112, v53, 0);
  v113 = *(_DWORD *)(v14 + 12);
  v114 = *(__int64 **)(a3 + 152);
  v115 = *(unsigned int *)(a3 + 160);
  v116 = v115 - 1;
  v115 *= 8;
  v117 = (__int64 *)((char *)v114 + v115);
  v118 = 8LL * (v113 & v116);
  v119 = &v114[(unsigned __int64)v118 / 8];
  if ( v118 == v115 )
  {
LABEL_110:
    if ( v114 == v119 )
      goto LABEL_109;
    while ( 1 )
    {
      v122 = *v114;
      if ( (unsigned __int64)*v114 > 1 )
      {
        if ( *(_DWORD *)(v122 + 12) == v113 && v14 == v122 )
          goto LABEL_118;
      }
      else if ( !v122 )
      {
        goto LABEL_109;
      }
      if ( v119 == ++v114 )
        goto LABEL_109;
    }
  }
  v120 = &v114[(unsigned __int64)v118 / 8];
  while ( 2 )
  {
    v121 = *v120;
    if ( (unsigned __int64)*v120 <= 1 )
    {
      if ( !v121 )
        goto LABEL_109;
LABEL_106:
      if ( v117 == ++v120 )
        goto LABEL_110;
      continue;
    }
    break;
  }
  if ( *(_DWORD *)(v121 + 12) != v113 || v14 != v121 )
    goto LABEL_106;
LABEL_118:
  ++*(_DWORD *)(v53 + 8);
  v123 = *(_QWORD **)(a4 + 232);
  if ( v123 )
  {
    v124 = *((_DWORD *)v123 - 1);
    if ( v124 == *((_DWORD *)v123 - 2) )
    {
      v161 = (3 * v124 + 1) >> 1;
      v162 = 8 * v161 + 8;
      if ( 8 * v124 + 8 >= v162 || v124 >= v161 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v190, "Overflow encountered when expanding vector");
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, v190);
        sub_233E40((__int64)v190);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v163 = (unsigned int *)sub_186B300(v123 - 1, v162);
      v164 = v163[1];
      v123 = v163 + 2;
      *v163 = v161;
      LODWORD(v163) = v164;
      *(_QWORD *)(a4 + 232) = v123;
      v127 = &v123[v164];
      v126 = (_DWORD)v163 + 1;
    }
    else
    {
      v125 = v124;
      v126 = v124 + 1;
      v127 = &v123[v125];
    }
  }
  else
  {
    v175 = (_QWORD *)sub_186B270(0x18u);
    *v175 = 2;
    v123 = v175 + 1;
    *(_QWORD *)(a4 + 232) = v175 + 1;
    v127 = v175 + 1;
    v126 = 1;
  }
  *v127 = v53;
  *((_DWORD *)v123 - 1) = v126;
  v128 = *(unsigned int *)(a4 + 160);
  v129 = *(_DWORD *)(a4 + 168);
  v130 = 2 * v128;
  if ( 3 * (int)v128 < (unsigned int)(4 * (v129 + *(_DWORD *)(a4 + 164))) )
  {
    v165 = v130;
    LODWORD(v182) = 2 * v128;
    v177 = 8LL * v130;
    v166 = (__int64 *)sub_186B270(v177);
    v167 = v182;
    v132 = v177;
    v131 = v166;
    if ( (_DWORD)v182 )
    {
      memset(v166, 0, 8 * v165);
      v132 = v177;
      v167 = v182;
    }
    v133 = v167 - 1;
    v134 = (__int64 *)((char *)v131 + v132);
    v168 = *(char **)(a4 + 152);
    v169 = &v168[8 * *(unsigned int *)(a4 + 160)];
    if ( v168 != v169 )
    {
      do
      {
        if ( *(_QWORD *)v168 > 1u )
        {
          v170 = 8LL * (*(_DWORD *)(*(_QWORD *)v168 + 12LL) & v133);
          v171 = &v131[(unsigned __int64)v170 / 8];
          if ( v132 == v170 )
          {
LABEL_215:
            if ( v131 == v171 )
            {
LABEL_227:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v172 = v131;
            while ( *v172 )
            {
              if ( v171 == ++v172 )
                goto LABEL_227;
            }
          }
          else
          {
            v172 = &v131[(unsigned __int64)v170 / 8];
            while ( *v172 )
            {
              if ( v134 == ++v172 )
                goto LABEL_215;
            }
          }
          *v172 = *(_QWORD *)v168;
        }
        v168 += 8;
      }
      while ( v169 != v168 );
      v169 = *(char **)(a4 + 152);
    }
    if ( v169 )
    {
      a6 = v167;
      v182 = v132;
      LODWORD(v177) = v167 - 1;
      sub_186B220(v169);
      v167 = a6;
      v132 = v182;
      v133 = v177;
    }
    v129 = 0;
    *(_QWORD *)(a4 + 152) = v131;
    *(_DWORD *)(a4 + 160) = v167;
    *(_DWORD *)(a4 + 168) = 0;
  }
  else
  {
    v131 = *(__int64 **)(a4 + 152);
    v132 = 8 * v128;
    v133 = v128 - 1;
    v134 = &v131[v128];
  }
  v135 = *(_DWORD *)(v53 + 12);
  v136 = v135 & v133;
  v137 = &v131[v136];
  if ( 8 * v136 != v132 )
  {
    v138 = &v131[v136];
    v139 = nullptr;
    while ( 1 )
    {
      v140 = *v138;
      if ( (unsigned __int64)*v138 > 1 )
      {
        if ( *(_DWORD *)(v140 + 12) == v135 && v53 == v140 )
        {
          *v138 = v53;
          goto LABEL_109;
        }
      }
      else
      {
        if ( !v140 )
        {
          if ( v139 )
            goto LABEL_224;
          v139 = v138;
          goto LABEL_225;
        }
        v139 = v138;
      }
      if ( ++v138 == v134 )
        goto LABEL_134;
    }
  }
  v139 = nullptr;
LABEL_134:
  while ( 2 )
  {
    if ( v137 == v131 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v141 = *v131;
    if ( (unsigned __int64)*v131 > 1 )
    {
      if ( *(_DWORD *)(v141 + 12) == v135 && v53 == v141 )
      {
        *v131 = v53;
        goto LABEL_109;
      }
      goto LABEL_133;
    }
    if ( v141 )
    {
      v139 = v131;
LABEL_133:
      ++v131;
      continue;
    }
    break;
  }
  if ( v139 )
LABEL_224:
    *(_DWORD *)(a4 + 168) = v129 - 1;
  else
    v139 = v131;
LABEL_225:
  *v139 = v53;
  ++*(_DWORD *)(a4 + 164);
LABEL_109:
  sub_186B220(v45 - 1);
  v54 = *(_QWORD *)(a2 + 24);
  v29 = *((_DWORD *)v21 - 1);
LABEL_33:
  v55 = sub_15DC610(v54, v53, v29, (int)v21, v29, (int)v37, v176, v177, a1, v182, a6, v184, a4, a3, (int)v188, v189);
  *v181 = v55;
  v181[1] = v54;
  if ( v55 )
    ++*(_DWORD *)(v55 + 8);
  v56 = v21;
  v57 = (unsigned __int64)&v21[*((unsigned int *)v21 - 1)];
  if ( (unsigned __int64)v21 < v57 )
  {
    do
    {
      while ( 1 )
      {
        v58 = *v56;
        if ( *v56 )
        {
          if ( (*(_DWORD *)(v58 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v56 >= v57 )
          goto LABEL_41;
      }
      ++v56;
      sub_15D7BC0(v185, v58);
    }
    while ( (unsigned __int64)v56 < v57 );
  }
LABEL_41:
  sub_186B220(v21 - 1);
  return v181;
}

