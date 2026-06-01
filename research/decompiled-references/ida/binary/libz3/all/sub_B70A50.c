__int64 __fastcall sub_B70A50(__int64 *a1, __int64 a2, int a3, unsigned int a4, _QWORD **a5, __int64 a6)
{
  char **v6; // rbp
  char **v7; // rbp
  char **exception; // rbp
  __int64 v9; // r13
  unsigned int *v14; // rdx
  int v15; // r9d
  int v16; // eax
  int v17; // edi
  unsigned int v18; // esi
  unsigned int v19; // ecx
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // r14d
  __int64 v26; // r15
  __int64 v27; // rcx
  int v28; // eax
  unsigned int *v29; // rsi
  _QWORD *v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r9
  __int64 v37; // rsi
  int v38; // r10d
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // r10
  __int64 v42; // r8
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned int *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  const void *v50; // r15
  __int64 v51; // rdi
  size_t v52; // r13
  void *v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  unsigned int v56; // eax
  __int64 v57; // rsi
  int v58; // eax
  __int64 *v59; // rsi
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rsi
  int v63; // eax
  _QWORD *v64; // rsi
  unsigned int v65; // eax
  int v66; // r10d
  __m128i *v67; // rbx
  int v68; // r15d
  size_t v69; // r14
  __m128i *v70; // rbp
  __int32 v71; // esi
  __int64 v72; // r15
  __m128i *v73; // r8
  __m128i *v74; // rax
  __m128i *v75; // rdi
  unsigned __int64 v76; // rdx
  __int64 v77; // r15
  __int64 v78; // rcx
  __int64 v80; // r10
  __int64 v81; // rcx
  _QWORD *v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // rcx
  __int64 v85; // r15
  __int64 v86; // rcx
  unsigned __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rax
  int v90; // eax
  unsigned int v91; // ecx
  int v92; // r9d
  int v93; // eax
  unsigned int v94; // edi
  unsigned int v95; // ecx
  int v96; // eax
  unsigned int v97; // edi
  unsigned int v98; // ecx
  int v99; // eax
  unsigned int v100; // r9d
  unsigned int v101; // edi
  int v102; // eax
  unsigned int v103; // r9d
  unsigned int v104; // edi
  int v105; // eax
  unsigned int v106; // ecx
  int v107; // edi
  unsigned __int64 v108; // rax
  unsigned int v109; // ebx
  size_t v110; // rsi
  unsigned int *v111; // rax
  __int64 v112; // rsi
  __int64 v113; // r9
  __int64 v114; // r13
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rdx
  __int64 v118; // r11
  __int64 v119; // rdx
  __int64 v120; // rax
  unsigned int v121; // ebx
  size_t v122; // rsi
  unsigned int *v123; // rax
  __int64 v124; // rsi
  __int64 v125; // rax
  int v126; // r8d
  __m128i *v127; // r9
  const __m128i *v128; // r13
  __m128i *v129; // r10
  __int64 v130; // rax
  __m128i *v131; // rdx
  __m128i *v132; // rax
  __int64 v133; // r9
  unsigned int v134; // eax
  unsigned int v135; // edi
  int v136; // r11d
  unsigned int v137; // edi
  int v138; // r11d
  unsigned int v139; // eax
  int v140; // r11d
  unsigned int v141; // ecx
  unsigned int v142; // r10d
  int v143; // edi
  unsigned int v144; // eax
  unsigned int v145; // ecx
  int v146; // esi
  int v147; // esi
  unsigned int v148; // ecx
  unsigned int v149; // eax
  int v150; // esi
  unsigned int v151; // ecx
  unsigned int v152; // eax
  int v153; // esi
  _QWORD *v154; // rax
  _QWORD *v155; // rdx
  _QWORD *v156; // rax
  _QWORD *v157; // rdx
  unsigned int v158; // [rsp+0h] [rbp-88h]
  __int64 v159; // [rsp+0h] [rbp-88h]
  __int64 v160; // [rsp+0h] [rbp-88h]
  int v161; // [rsp+0h] [rbp-88h]
  __int64 v162; // [rsp+0h] [rbp-88h]
  __int64 v163; // [rsp+0h] [rbp-88h]
  __int64 v165; // [rsp+8h] [rbp-80h]
  int v166; // [rsp+8h] [rbp-80h]
  __int64 v167[11]; // [rsp+30h] [rbp-58h] BYREF

  v9 = a4;
  v14 = (unsigned int *)a1[8];
  if ( a4 == 2 )
  {
    v105 = *(_DWORD *)(**a5 + 12LL);
    v106 = *(_DWORD *)(*a5[1] + 12LL) + 11;
    v107 = v105 - 1640531527;
    v102 = (a3 - v105 - v106) ^ (v106 >> 13);
    v18 = (v107 - v106 - v102) ^ (v102 << 8);
    v104 = v106 - v102;
    goto LABEL_97;
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
    {
      v90 = *(_DWORD *)(*a5[1] + 12LL);
      v91 = *(_DWORD *)(*a5[2] + 12LL) + 11;
      v92 = v90 - 1640531527;
      v93 = (*(_DWORD *)(**a5 + 12LL) - v90 - v91) ^ (v91 >> 13);
      v94 = (v92 - v91 - v93) ^ (v93 << 8);
      v95 = (v91 - v93 - v94) ^ (v94 >> 13);
      v96 = (v93 - v94 - v95) ^ (v95 >> 12);
      v97 = (v94 - v95 - v96) ^ (v96 << 16);
      v98 = (v95 - v96 - v97) ^ (v97 >> 5);
      v99 = (v96 - v97 - v98) ^ (v98 >> 3);
      v100 = (v97 - v98 - v99) ^ (v99 << 10);
      v101 = (v98 - v99 - v100) ^ (v100 >> 15);
      v102 = (a3 + v99 - v100 - v101) ^ (v101 >> 13);
      v103 = v100 - v101 - v102;
      v104 = v101 - v102;
      v18 = v103 ^ (v102 << 8);
LABEL_97:
      v19 = (v104 - v18) ^ (v18 >> 13);
      v20 = v102 - v18 - v19;
      goto LABEL_5;
    }
    LODWORD(v133) = a4;
    v134 = 11;
    v135 = -1640531527;
    v136 = -1640531527;
    do
    {
      v137 = *(_DWORD *)(*a5[(unsigned int)(v133 - 2)] + 12LL) + v135;
      v138 = *(_DWORD *)(*a5[(unsigned int)(v133 - 1)] + 12LL) + v136;
      v133 = (unsigned int)(v133 - 3);
      v139 = *(_DWORD *)(*a5[v133] + 12LL) + v134;
      v140 = (v138 - (v137 + v139)) ^ (v139 >> 13);
      v141 = (v137 - v139 - v140) ^ (v140 << 8);
      v142 = (v139 - v140 - v141) ^ (v141 >> 13);
      v143 = (v140 - v141 - v142) ^ (v142 >> 12);
      v144 = (v141 - v142 - v143) ^ (v143 << 16);
      v145 = (v142 - v143 - v144) ^ (v144 >> 5);
      v136 = (v143 - v144 - v145) ^ (v145 >> 3);
      v135 = (v144 - v145 - v136) ^ (v136 << 10);
      v134 = (v145 - v136 - v135) ^ (v135 >> 15);
    }
    while ( (unsigned int)v133 > 2 );
    v146 = v136 + a3;
    if ( (_DWORD)v133 != 1 )
    {
      if ( (_DWORD)v133 != 2 )
      {
LABEL_154:
        v147 = (v134 >> 13) ^ (v146 - v135 - v134);
        v148 = (v135 - v134 - v147) ^ (v147 << 8);
        v149 = (v148 >> 13) ^ (v134 - v147 - v148);
        v150 = (v147 - v148 - v149) ^ (v149 >> 12);
        v151 = (v148 - v149 - v150) ^ (v150 << 16);
        v152 = (v149 - v150 - v151) ^ (v151 >> 5);
        v153 = (v152 >> 3) ^ (v150 - v151 - v152);
        v25 = (v152 - v153 - ((v151 - v152 - v153) ^ (v153 << 10))) ^ (((v151 - v152 - v153) ^ (v153 << 10)) >> 15);
        goto LABEL_6;
      }
      v135 += *(_DWORD *)(*a5[1] + 12LL);
    }
    v134 += *(_DWORD *)(**a5 + 12LL);
    goto LABEL_154;
  }
  if ( a4 )
  {
    v15 = a3 - 1640531538;
    v16 = *(_DWORD *)(**a5 + 12LL);
    v17 = a3 - 1640531538 - v16;
    v18 = (1640531527 - a3 + 2 * v16) ^ (v17 << 8);
    v19 = (v16 - v15 + 11 - v18) ^ (v18 >> 13);
    v20 = v17 - v18 - v19;
LABEL_5:
    v21 = v20 ^ (v19 >> 12);
    v22 = (v18 - v19 - v21) ^ (v21 << 16);
    v23 = (v19 - v21 - v22) ^ (v22 >> 5);
    v24 = (v23 >> 3) ^ (v21 - v22 - v23);
    v25 = (v23 - v24 - ((v22 - v23 - v24) ^ (v24 << 10))) ^ (((v22 - v23 - v24) ^ (v24 << 10)) >> 15);
LABEL_6:
    if ( !v14 )
    {
      v26 = 0;
      v82 = (_QWORD *)sub_186B270(0x18u);
      v14 = (unsigned int *)(v82 + 1);
      *v82 = 2;
      v28 = 1;
      a1[8] = (__int64)v14;
      v29 = v14;
      goto LABEL_9;
    }
    *(v14 - 1) = 0;
    v26 = 0;
    do
    {
      v31 = *(v14 - 1);
      if ( v31 == *(v14 - 2) )
      {
        v32 = (3 * v31 + 1) >> 1;
        v33 = 8 * v32 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v167, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v167);
          sub_233E40((__int64)v167);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v158 = (3 * v31 + 1) >> 1;
        v34 = (unsigned int *)sub_186B300(v14 - 2, v33);
        v14 = v34 + 2;
        *v34 = v158;
        v35 = v34[1];
        a1[8] = (__int64)(v34 + 2);
        v29 = &v34[2 * v35 + 2];
        v28 = v35 + 1;
      }
      else
      {
        v27 = v31;
        v28 = v31 + 1;
        v29 = &v14[2 * v27];
      }
LABEL_9:
      v30 = a5[v26++];
      *(_QWORD *)v29 = v30;
      *(v14 - 1) = v28;
    }
    while ( (unsigned int)v26 < (unsigned int)v9 );
    goto LABEL_17;
  }
  if ( v14 )
    *(v14 - 1) = 0;
  v25 = 11;
LABEL_17:
  v36 = *((unsigned int *)a1 + 4);
  v37 = a1[1];
  a1[9] = a2;
  *((_DWORD *)a1 + 20) = v25;
  v38 = v36 - 1;
  v39 = 16 * v36;
  *((_DWORD *)a1 + 24) = v9;
  a1[13] = (__int64)v14;
  v40 = v37 + v39;
  v41 = 16LL * (v25 & v38);
  v42 = v37 + v41;
  if ( v41 != v39 )
  {
    v43 = v37 + v41;
    do
    {
      v44 = *(_QWORD *)(v43 + 8);
      if ( v44 > 1 )
      {
        if ( *(_DWORD *)v43 == v25 && a2 == *(_QWORD *)v44 && (_DWORD)v9 == *(_DWORD *)(v44 + 24) )
        {
          if ( !(_DWORD)v9 )
            return 0;
          v77 = *(_QWORD *)(v44 + 32);
          v78 = 0;
          while ( *(_QWORD *)(v77 + v78 * 4) == *(_QWORD *)&v14[v78] )
          {
            v78 += 2;
            if ( v78 == 2LL * (unsigned int)v9 )
              return 0;
          }
        }
      }
      else if ( !v44 )
      {
        goto LABEL_23;
      }
      v43 += 16;
    }
    while ( v40 != v43 );
    if ( v37 != v42 )
    {
      v83 = v37;
      goto LABEL_69;
    }
    if ( (_DWORD)v9 )
    {
LABEL_24:
      v45 = v14;
      do
      {
        v46 = *(_QWORD *)v45;
        v45 += 2;
        *((_QWORD *)v45 - 1) = *(_QWORD *)(v46 + 8);
      }
      while ( &v14[2 * (unsigned int)v9] != v45 );
      goto LABEL_26;
    }
    if ( v39 )
    {
LABEL_27:
      v47 = v37 + v41;
      while ( 1 )
      {
        v48 = *(_QWORD *)(v47 + 8);
        if ( v48 > 1 )
        {
          if ( *(_DWORD *)v47 == v25 && *(_QWORD *)v48 == a1[9] && (_DWORD)v9 == *(_DWORD *)(v48 + 24) )
          {
            if ( !(_DWORD)v9 )
              return 0;
            v80 = *(_QWORD *)(v48 + 32);
            v81 = 0;
            while ( *(_QWORD *)(v80 + v81 * 4) == *(_QWORD *)&v14[v81] )
            {
              v81 += 2;
              if ( 2LL * (unsigned int)v9 == v81 )
                return 0;
            }
          }
        }
        else if ( !v48 )
        {
          goto LABEL_32;
        }
        v47 += 16;
        if ( v40 == v47 )
          goto LABEL_81;
      }
    }
    goto LABEL_32;
  }
  v83 = v37;
  if ( v37 == v42 )
  {
    if ( (_DWORD)v9 )
      goto LABEL_24;
    goto LABEL_81;
  }
  do
  {
LABEL_69:
    v84 = *(_QWORD *)(v83 + 8);
    if ( v84 > 1 )
    {
      if ( *(_DWORD *)v83 == v25 && a2 == *(_QWORD *)v84 && (_DWORD)v9 == *(_DWORD *)(v84 + 24) )
      {
        if ( !(_DWORD)v9 )
          return 0;
        v85 = *(_QWORD *)(v84 + 32);
        v86 = 0;
        while ( *(_QWORD *)(v85 + v86 * 4) == *(_QWORD *)&v14[v86] )
        {
          v86 += 2;
          if ( v86 == 2LL * (unsigned int)v9 )
            return 0;
        }
      }
      goto LABEL_68;
    }
    if ( !v84 )
      break;
LABEL_68:
    v83 += 16;
  }
  while ( v42 != v83 );
LABEL_23:
  if ( (_DWORD)v9 )
    goto LABEL_24;
LABEL_26:
  if ( v41 != v39 )
    goto LABEL_27;
LABEL_81:
  while ( v42 != v37 )
  {
    v87 = *(_QWORD *)(v37 + 8);
    if ( v87 > 1 )
    {
      if ( v25 == *(_DWORD *)v37 && *(_QWORD *)v87 == a1[9] && (_DWORD)v9 == *(_DWORD *)(v87 + 24) )
      {
        if ( !(_DWORD)v9 )
          return 0;
        v88 = *(_QWORD *)(v87 + 32);
        v89 = 0;
        while ( *(_QWORD *)(v88 + v89 * 4) == *(_QWORD *)&v14[v89] )
        {
          v89 += 2;
          if ( 2LL * (unsigned int)v9 == v89 )
            return 0;
        }
      }
    }
    else if ( !v87 )
    {
      break;
    }
    v37 += 16;
  }
LABEL_32:
  v49 = sub_180C100(*a1, 40);
  v50 = (const void *)a1[13];
  v51 = *a1;
  *(_QWORD *)v49 = a2;
  *(_DWORD *)(v49 + 8) = v25;
  *(_DWORD *)(v49 + 24) = v9;
  v52 = 8 * v9;
  *(_QWORD *)(v49 + 16) = a6;
  *(_QWORD *)(v49 + 32) = 0;
  v159 = v49;
  v53 = (void *)sub_180C100(v51, v52);
  *(_QWORD *)(v159 + 32) = v53;
  memcpy(v53, v50, v52);
  v54 = (_QWORD *)a1[4];
  v55 = v159;
  if ( v54 )
  {
    v56 = *((_DWORD *)v54 - 1);
    if ( v56 == *((_DWORD *)v54 - 2) )
    {
      v109 = (3 * v56 + 1) >> 1;
      v110 = 8 * v109 + 8;
      if ( 8 * v56 + 8 >= (unsigned int)v110 || v56 >= v109 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v167, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v167);
        sub_233E40((__int64)v167);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v111 = (unsigned int *)sub_186B300(v54 - 1, v110);
      v55 = v159;
      v112 = v111[1];
      v54 = v111 + 2;
      *v111 = v109;
      a1[4] = (__int64)(v111 + 2);
      LODWORD(v111) = v112;
      v59 = &v54[v112];
      v58 = (_DWORD)v111 + 1;
    }
    else
    {
      v57 = v56;
      v58 = v56 + 1;
      v59 = &v54[v57];
    }
  }
  else
  {
    v156 = (_QWORD *)sub_186B270(0x18u);
    v55 = v159;
    v157 = v156;
    *v156 = 2;
    v58 = 1;
    v54 = v157 + 1;
    a1[4] = (__int64)v54;
    v59 = v54;
  }
  *v59 = v55;
  *((_DWORD *)v54 - 1) = v58;
  if ( a6 )
    ++*(_DWORD *)(a6 + 8);
  v60 = (_QWORD *)a1[6];
  if ( v60 )
  {
    v61 = *((_DWORD *)v60 - 1);
    if ( v61 == *((_DWORD *)v60 - 2) )
    {
      v121 = (3 * v61 + 1) >> 1;
      v122 = 8 * v121 + 8;
      if ( 8 * v61 + 8 >= (unsigned int)v122 || v61 >= v121 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v167, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v167);
        sub_233E40((__int64)v167);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v160 = v55;
      v123 = (unsigned int *)sub_186B300(v60 - 1, v122);
      v55 = v160;
      v124 = v123[1];
      v60 = v123 + 2;
      *v123 = v121;
      a1[6] = (__int64)(v123 + 2);
      LODWORD(v123) = v124;
      v64 = &v60[v124];
      v63 = (_DWORD)v123 + 1;
    }
    else
    {
      v62 = v61;
      v63 = v61 + 1;
      v64 = &v60[v62];
    }
  }
  else
  {
    v163 = v55;
    v154 = (_QWORD *)sub_186B270(0x18u);
    v55 = v163;
    v155 = v154;
    *v154 = 2;
    v63 = 1;
    v60 = v155 + 1;
    a1[6] = (__int64)v60;
    v64 = v60;
  }
  *v64 = a6;
  *((_DWORD *)v60 - 1) = v63;
  v65 = *((_DWORD *)a1 + 4);
  v66 = *((_DWORD *)a1 + 6);
  if ( 3 * v65 < 4 * (v66 + *((_DWORD *)a1 + 5)) )
  {
    v165 = v55;
    v69 = 32LL * v65;
    v161 = 2 * v65;
    v125 = sub_186B270(v69);
    v126 = v161;
    v55 = v165;
    v67 = (__m128i *)v125;
    v127 = (__m128i *)(v125 + v69);
    if ( v161 )
    {
      if ( (v69 & 0x10) == 0 || (*(_QWORD *)(v125 + 8) = 0, v125 += 16, (__m128i *)v125 != v127) )
      {
        do
        {
          *(_QWORD *)(v125 + 8) = 0;
          v125 += 32;
          *(_QWORD *)(v125 - 8) = 0;
        }
        while ( (__m128i *)v125 != v127 );
      }
    }
    v128 = (const __m128i *)a1[1];
    v68 = v161 - 1;
    v70 = v127;
    v129 = (__m128i *)&v128[*((unsigned int *)a1 + 4)];
    if ( v128 != v129 )
    {
      do
      {
        if ( v128->m128i_i64[1] > 1uLL )
        {
          v130 = 16LL * (v128->m128i_i32[0] & (unsigned int)v68);
          v131 = &v67[(unsigned __int64)v130 / 0x10];
          if ( v69 == v130 )
          {
LABEL_139:
            if ( v67 == v131 )
            {
LABEL_158:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v132 = v67;
            while ( v132->m128i_i64[1] )
            {
              if ( v131 == ++v132 )
                goto LABEL_158;
            }
          }
          else
          {
            v132 = &v67[(unsigned __int64)v130 / 0x10];
            while ( v132->m128i_i64[1] )
            {
              if ( v127 == ++v132 )
                goto LABEL_139;
            }
          }
          *v132 = _mm_loadu_si128(v128);
        }
        ++v128;
      }
      while ( v129 != v128 );
      v129 = (__m128i *)a1[1];
    }
    if ( v129 )
    {
      v166 = v161;
      v162 = v55;
      sub_186B220(v129);
      v126 = v166;
      v55 = v162;
    }
    a1[1] = (__int64)v67;
    v66 = 0;
    *((_DWORD *)a1 + 4) = v126;
    *((_DWORD *)a1 + 6) = 0;
  }
  else
  {
    v67 = (__m128i *)a1[1];
    v68 = v65 - 1;
    v69 = 16LL * v65;
    v70 = &v67[v69 / 0x10];
  }
  v71 = *(_DWORD *)(v55 + 8);
  v72 = 16LL * (v71 & (unsigned int)v68);
  v73 = &v67[(unsigned __int64)v72 / 0x10];
  if ( v72 != v69 )
  {
    v74 = &v67[(unsigned __int64)v72 / 0x10];
    v75 = nullptr;
    while ( 1 )
    {
      v76 = v74->m128i_u64[1];
      if ( v76 > 1 )
      {
        if ( v71 == v74->m128i_i32[0] && *(_QWORD *)v76 == *(_QWORD *)v55 )
        {
          v113 = *(unsigned int *)(v76 + 24);
          if ( (_DWORD)v113 == *(_DWORD *)(v55 + 24) )
          {
            if ( !(_DWORD)v113 )
            {
LABEL_114:
              v74->m128i_i64[1] = v55;
              return v55;
            }
            v114 = *(_QWORD *)(v76 + 32);
            v115 = 8 * v113;
            v116 = 0;
            while ( *(_QWORD *)(v114 + v116) == *(_QWORD *)(*(_QWORD *)(v55 + 32) + v116) )
            {
              v116 += 8;
              if ( v115 == v116 )
                goto LABEL_114;
            }
          }
        }
      }
      else
      {
        if ( !v76 )
        {
          if ( v75 )
            goto LABEL_156;
          v75 = v74;
          goto LABEL_157;
        }
        v75 = v74;
      }
      if ( ++v74 == v70 )
        goto LABEL_101;
    }
  }
  v75 = nullptr;
LABEL_101:
  while ( 2 )
  {
    if ( v73 == v67 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v108 = v67->m128i_u64[1];
    if ( v108 > 1 )
    {
      if ( v71 == v67->m128i_i32[0] && *(_QWORD *)v108 == *(_QWORD *)v55 )
      {
        v117 = *(unsigned int *)(v108 + 24);
        if ( (_DWORD)v117 == *(_DWORD *)(v55 + 24) )
        {
          if ( !(_DWORD)v117 )
          {
LABEL_121:
            v67->m128i_i64[1] = v55;
            return v55;
          }
          v118 = *(_QWORD *)(v108 + 32);
          v119 = 8 * v117;
          v120 = 0;
          while ( *(_QWORD *)(v118 + v120) == *(_QWORD *)(*(_QWORD *)(v55 + 32) + v120) )
          {
            v120 += 8;
            if ( v119 == v120 )
              goto LABEL_121;
          }
        }
      }
      goto LABEL_100;
    }
    if ( v108 )
    {
      v75 = v67;
LABEL_100:
      ++v67;
      continue;
    }
    break;
  }
  if ( v75 )
LABEL_156:
    *((_DWORD *)a1 + 6) = v66 - 1;
  else
    v75 = v67;
LABEL_157:
  v75->m128i_i64[1] = v55;
  v75->m128i_i32[0] = v71;
  ++*((_DWORD *)a1 + 5);
  return v55;
}

