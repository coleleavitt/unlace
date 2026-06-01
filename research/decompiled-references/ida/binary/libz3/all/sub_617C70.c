__int64 *__fastcall sub_617C70(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  char **v4; // rbp
  char **exception; // rbp
  char **v6; // r14
  char **v7; // r14
  __int64 *v10; // rbx
  __int64 v11; // rdx
  unsigned int v12; // r12d
  __int64 v13; // rbp
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 *v17; // rcx
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  size_t v21; // r14
  unsigned int i; // r12d
  __int64 v23; // rdx
  int v24; // eax
  __int64 *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbp
  unsigned int v28; // eax
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // r15d
  unsigned int j; // ebp
  __int64 *v39; // r12
  __int64 v40; // rsi
  _DWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rsi
  bool v45; // zf
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r12
  _QWORD *v49; // rax
  int v50; // edx
  int v51; // r8d
  int v52; // r9d
  __int64 *v53; // rax
  __int64 v54; // r14
  __int64 *v55; // rbp
  __int64 v56; // rax
  unsigned int v57; // r10d
  size_t v58; // r15
  void *v59; // rbp
  __int64 *v60; // r12
  __int64 v61; // rsi
  __int64 v62; // rax
  size_t v63; // r12
  size_t v64; // rcx
  char *v65; // rax
  char *v66; // r8
  _QWORD *v67; // rsi
  size_t v68; // rax
  __int64 v69; // rax
  __int64 v70; // r12
  __int64 v71; // rax
  __int64 *v72; // r9
  __int64 *v73; // rcx
  __int64 v74; // rax
  int v75; // edi
  unsigned int v76; // edx
  __int64 *v77; // rsi
  __int64 v78; // rdx
  __int64 *v79; // r8
  __int64 *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdi
  int v83; // edx
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 *v88; // r12
  unsigned __int64 v89; // r13
  __int64 v90; // rsi
  __int64 *v91; // rbp
  __int64 *v92; // r12
  __int64 v93; // rsi
  __int64 v95; // rax
  _QWORD *v96; // rdx
  unsigned int v97; // eax
  __int64 v98; // rcx
  int v99; // eax
  __int64 *v100; // rcx
  __int64 v101; // rcx
  int v102; // esi
  unsigned int v103; // r9d
  __int64 *v104; // r14
  int v105; // r11d
  __int64 v106; // rcx
  __int64 *v107; // r15
  int v108; // edi
  __int64 v109; // r11
  __int64 *v110; // rax
  __int64 *v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rax
  unsigned int v114; // r15d
  size_t v115; // rsi
  unsigned int *v116; // rax
  __int64 v117; // r10
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  unsigned __int64 v120; // rdi
  char *v121; // rax
  size_t *v122; // r9
  char *v123; // rax
  char *v124; // rax
  unsigned int v125; // r14d
  unsigned int v126; // ecx
  unsigned int *v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  int v130; // edx
  size_t *v131; // rdi
  size_t *v132; // rcx
  __int64 v133; // rsi
  __int64 v134; // r15
  __int64 *v135; // rax
  int v136; // r9d
  char *v137; // rax
  char *v138; // r10
  __int64 v139; // rdx
  __int64 *v140; // rsi
  __int64 *v141; // rdx
  __int64 v142; // rsi
  __int64 v143; // rcx
  __int64 v144; // rsi
  _QWORD *v145; // rdx
  int v146; // [rsp+0h] [rbp-E8h]
  __int64 *v147; // [rsp+0h] [rbp-E8h]
  __int64 v149; // [rsp+8h] [rbp-E0h]
  int v150; // [rsp+10h] [rbp-D8h]
  int v151; // [rsp+10h] [rbp-D8h]
  int v152[2]; // [rsp+10h] [rbp-D8h]
  __int64 v153; // [rsp+18h] [rbp-D0h]
  _QWORD *v154; // [rsp+18h] [rbp-D0h]
  size_t v155; // [rsp+18h] [rbp-D0h]
  int v156[2]; // [rsp+20h] [rbp-C8h]
  int v157[2]; // [rsp+20h] [rbp-C8h]
  int v158[2]; // [rsp+20h] [rbp-C8h]
  int v159[2]; // [rsp+28h] [rbp-C0h]
  int v160[2]; // [rsp+30h] [rbp-B8h]
  __int64 v161; // [rsp+38h] [rbp-B0h]
  int v162; // [rsp+38h] [rbp-B0h]
  __int64 v163; // [rsp+38h] [rbp-B0h]
  int v164; // [rsp+40h] [rbp-A8h]
  size_t *v165; // [rsp+40h] [rbp-A8h]
  int v166; // [rsp+48h] [rbp-A0h]
  char *v167; // [rsp+48h] [rbp-A0h]
  int v168; // [rsp+50h] [rbp-98h]
  int v169; // [rsp+58h] [rbp-90h] BYREF
  __int64 v170; // [rsp+60h] [rbp-88h]
  __int64 v171; // [rsp+68h] [rbp-80h]
  void *src; // [rsp+70h] [rbp-78h] BYREF
  size_t n; // [rsp+78h] [rbp-70h]
  size_t v174; // [rsp+80h] [rbp-68h] BYREF
  int v175; // [rsp+88h] [rbp-60h]
  void *v176; // [rsp+90h] [rbp-58h] BYREF
  size_t v177; // [rsp+98h] [rbp-50h]
  size_t v178; // [rsp+A0h] [rbp-48h] BYREF
  void *v179; // [rsp+A8h] [rbp-40h]
  int v180; // [rsp+B0h] [rbp-38h]
  __int64 v181; // [rsp+B8h] [rbp-30h]

  v10 = nullptr;
  v11 = *(_QWORD *)(a4 + 8);
  v161 = *(_QWORD *)(a2 + 24);
  v170 = v161;
  if ( v11 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= *(_DWORD *)(v11 - 4) )
        break;
      v13 = *(_QWORD *)(v11 + 8LL * v12);
      if ( v13 )
        ++*(_DWORD *)(v13 + 8);
      if ( v10 )
      {
        v14 = *((_DWORD *)v10 - 1);
        if ( v14 == *((_DWORD *)v10 - 2) )
        {
          v33 = (3 * v14 + 1) >> 1;
          v34 = 8 * v33 + 8;
          if ( 8 * v14 + 8 >= (unsigned int)v34 || v14 >= v33 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v176, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v176);
            sub_233E40((__int64)&v176);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v35 = (unsigned int *)sub_186B300(v10 - 1, v34);
          v36 = v35[1];
          v10 = (__int64 *)(v35 + 2);
          *v35 = v33;
          LODWORD(v35) = v36;
          v17 = &v10[v36];
          v11 = *(_QWORD *)(a4 + 8);
          v16 = (_DWORD)v35 + 1;
        }
        else
        {
          v15 = v14;
          v16 = v14 + 1;
          v17 = &v10[v15];
        }
      }
      else
      {
        v119 = (_QWORD *)sub_186B270(0x18u);
        v17 = v119 + 1;
        *v119 = 2;
        v11 = *(_QWORD *)(a4 + 8);
        v16 = 1;
        v10 = v17;
      }
      *v17 = v13;
      ++v12;
      *((_DWORD *)v10 - 1) = v16;
    }
    while ( v11 );
  }
  sub_617610(&src, a2, (__int64)a3, a4);
  v21 = n;
  if ( n )
  {
    for ( i = 0; ; ++i )
    {
      v26 = *(unsigned int *)(v21 - 4);
      if ( i >= (unsigned int)v26 )
        break;
      v27 = *(_QWORD *)(v21 + 8LL * i);
      if ( v27 )
        ++*(_DWORD *)(v27 + 8);
      if ( v10 )
      {
        v28 = *((_DWORD *)v10 - 1);
        if ( v28 == *((_DWORD *)v10 - 2) )
        {
          v29 = (3 * v28 + 1) >> 1;
          v30 = 8 * v29 + 8;
          if ( 8 * v28 + 8 >= (unsigned int)v30 || v28 >= v29 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v176, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v176);
            sub_233E40((__int64)&v176);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = (unsigned int *)sub_186B300(v10 - 1, v30);
          v32 = v31[1];
          v10 = (__int64 *)(v31 + 2);
          *v31 = v29;
          LODWORD(v31) = v32;
          v25 = &v10[v32];
          v24 = (_DWORD)v31 + 1;
        }
        else
        {
          v23 = v28;
          v24 = v28 + 1;
          v25 = &v10[v23];
        }
      }
      else
      {
        v118 = (_QWORD *)sub_186B270(0x18u);
        v10 = v118 + 1;
        *v118 = 2;
        v24 = 1;
        v25 = v10;
      }
      *v25 = v27;
      *((_DWORD *)v10 - 1) = v24;
    }
    v58 = v21 + 8 * v26;
    if ( v21 < v58 )
    {
      v59 = src;
      v60 = (__int64 *)v21;
      do
      {
        v61 = *v60;
        if ( *v60 )
        {
          v45 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v45 )
            sub_15D7BC0(v59, v61);
        }
        ++v60;
      }
      while ( (unsigned __int64)v60 < v58 );
    }
    sub_186B220((void *)(v21 - 8));
  }
  if ( v10 )
  {
    v37 = *((_DWORD *)v10 - 1);
    for ( j = 0; j < v37; ++j )
    {
      v39 = &v10[j];
      v40 = *v39;
      if ( !*(_WORD *)(*v39 + 4) )
      {
        v41 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
        if ( v41 )
        {
          if ( *v41 == *(_DWORD *)(a2 + 40) && v41[1] == 1 )
          {
            v42 = sub_6177B0(a2, v40);
            v43 = v42;
            if ( v42 )
              ++*(_DWORD *)(v42 + 8);
            v44 = *v39;
            if ( *v39 )
            {
              v45 = (*(_DWORD *)(v44 + 8))-- == 1;
              if ( v45 )
                sub_15D7BC0(v161, v44);
            }
            *v39 = v43;
            v37 = *((_DWORD *)v10 - 1);
          }
        }
      }
    }
    v46 = *(_QWORD *)(a2 + 24);
    v150 = v46;
    if ( v37 )
    {
      v47 = sub_15D1F10(*v10);
      v48 = v47;
      if ( v47 )
        ++*(_DWORD *)(v47 + 8);
      v49 = (_QWORD *)sub_186B270(0x18u);
      *v49 = 2;
      v53 = v49 + 1;
      v54 = 0;
      v37 = 1;
      v55 = v53;
      while ( 1 )
      {
        *v53 = v48;
        ++v54;
        *((_DWORD *)v55 - 1) = v37;
        if ( (unsigned int)v54 >= *((_DWORD *)v10 - 1) )
          break;
        v56 = sub_15D1F10(v10[v54]);
        v48 = v56;
        if ( v56 )
          ++*(_DWORD *)(v56 + 8);
        v57 = *((_DWORD *)v55 - 1);
        if ( v57 == *((_DWORD *)v55 - 2) )
        {
          v114 = (3 * v57 + 1) >> 1;
          v115 = 8 * v114 + 8;
          if ( 8 * v57 + 8 >= (unsigned int)v115 || v57 >= v114 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v176, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v176);
            sub_233E40((__int64)&v176);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v116 = (unsigned int *)sub_186B300(v55 - 1, v115);
          *v116 = v114;
          v55 = (__int64 *)(v116 + 2);
          v117 = v116[1];
          v53 = (__int64 *)&v116[2 * v117 + 2];
          v37 = v117 + 1;
        }
        else
        {
          v37 = v57 + 1;
          v53 = &v55[v57];
        }
      }
      *(_QWORD *)v158 = *(_QWORD *)(a2 + 24);
      a1[1] = *(_QWORD *)v158;
      *a1 = 0;
      sub_180CE20(
        (int)&src,
        a3[2] + 16,
        v50,
        (int)a1,
        v51,
        v52,
        (int)a1,
        a3,
        v150,
        v153,
        v158[0],
        (int)&src,
        *(_QWORD *)(a3[2] + 40LL),
        v161,
        v164,
        v166,
        v168,
        v169,
        v170,
        v171,
        (int)src,
        n,
        v174,
        v175,
        (int)v176,
        v177,
        v178,
        v179,
        v180,
        v181);
    }
    else
    {
      v55 = nullptr;
      *a1 = 0;
      a1[1] = v46;
      sub_180CE20(
        (int)&src,
        a3[2] + 16,
        v18,
        v46,
        v19,
        v20,
        (int)a1,
        a3,
        v46,
        v153,
        v46,
        (int)&src,
        *(_QWORD *)(a3[2] + 40LL),
        v161,
        v164,
        v166,
        v168,
        v169,
        v170,
        v171,
        (int)src,
        n,
        v174,
        v175,
        (int)v176,
        v177,
        v178,
        v179,
        v180,
        v181);
    }
  }
  else
  {
    v62 = *(_QWORD *)(a2 + 24);
    v55 = nullptr;
    v37 = 0;
    *a1 = 0;
    a1[1] = v62;
    sub_180CE20(
      (int)&src,
      a3[2] + 16,
      v18,
      (int)a3,
      v19,
      v20,
      (int)a1,
      a3,
      v62,
      v153,
      v62,
      (int)&src,
      *(_QWORD *)(a3[2] + 40LL),
      v161,
      v164,
      v166,
      v168,
      v169,
      v170,
      v171,
      (int)src,
      n,
      v174,
      v175,
      (int)v176,
      v177,
      v178,
      v179,
      v180,
      v181);
  }
  v63 = n;
  if ( 0x7FFFFFFFFFFFFFFFLL - n <= 4 )
    std::__throw_length_error("basic_string::append");
  v64 = n + 5;
  if ( src == &v174 )
  {
    if ( v64 <= 0xF )
      goto LABEL_60;
    v129 = operator new(0x1Fu);
    v122 = (size_t *)src;
    v64 = v63 + 5;
    v66 = (char *)v129;
    v155 = 30;
    goto LABEL_147;
  }
  if ( v174 < v64 )
  {
    if ( (v64 & 0x8000000000000000LL) != 0LL )
      std::__throw_length_error("basic_string::_M_create");
    v155 = 2 * v174;
    if ( v64 < 2 * v174 )
    {
      v120 = 2 * v174 + 1;
      if ( (v174 & 0x4000000000000000LL) == 0 )
        goto LABEL_142;
    }
    else
    {
      v155 = n + 5;
      v120 = n + 6;
      if ( (__int64)(n + 6) >= 0 )
      {
LABEL_142:
        LODWORD(v165) = n + 5;
        v121 = (char *)operator new(v120);
        v122 = (size_t *)src;
        v64 = v63 + 5;
        v66 = v121;
        if ( !v63 )
        {
LABEL_143:
          v123 = &v66[v63];
          *(_DWORD *)v123 = 1936615713;
          v123[4] = 116;
          if ( v122 != &v174 )
          {
            v167 = v66;
            v165 = (size_t *)v64;
            operator delete(v122, v174 + 1);
            v66 = v167;
            v64 = (size_t)v165;
          }
          src = v66;
          v174 = v155;
          goto LABEL_61;
        }
        if ( v63 == 1 )
        {
          *v121 = *(_BYTE *)src;
          goto LABEL_143;
        }
LABEL_147:
        v167 = (char *)v64;
        v165 = v122;
        v124 = (char *)memcpy(v66, v122, v63);
        v64 = (size_t)v167;
        v122 = v165;
        v66 = v124;
        goto LABEL_143;
      }
    }
    std::__throw_bad_alloc();
  }
LABEL_60:
  v65 = (char *)src + n;
  *(_DWORD *)v65 = 1936615713;
  v65[4] = 116;
  v66 = (char *)src;
LABEL_61:
  n = v64;
  v66[v63 + 5] = 0;
  v67 = src;
  v154 = &v178;
  v176 = &v178;
  v68 = n;
  if ( src == &v174 )
  {
    v130 = n + 1;
    v131 = &v178;
    v132 = &v174;
    if ( (unsigned int)(n + 1) >= 8 )
    {
      LODWORD(v143) = 0;
      do
      {
        v144 = (unsigned int)v143;
        v143 = (unsigned int)(v143 + 8);
        *(size_t *)((char *)&v178 + v144) = *(size_t *)((char *)&v174 + v144);
      }
      while ( (unsigned int)v143 < (v130 & 0xFFFFFFF8) );
      v131 = (size_t *)((char *)&v178 + v143);
      v132 = (size_t *)((char *)&v174 + v143);
    }
    v133 = 0;
    if ( (v130 & 4) != 0 )
    {
      *(_DWORD *)v131 = *(_DWORD *)v132;
      v133 = 4;
    }
    if ( (v130 & 2) != 0 )
    {
      *(_WORD *)((char *)v131 + v133) = *(_WORD *)((char *)v132 + v133);
      v133 += 2;
    }
    if ( (v130 & 1) != 0 )
      *((_BYTE *)v131 + v133) = *((_BYTE *)v132 + v133);
    v67 = &v178;
  }
  else
  {
    v176 = src;
    v178 = v174;
  }
  src = &v174;
  v177 = v68;
  n = 0;
  LOBYTE(v174) = 0;
  sub_180C5A0(&v169, v67);
  v69 = sub_15E3510(*(_QWORD *)v156, &v169, v37, v55, *(_QWORD *)v160, 0);
  v70 = v69;
  if ( v69 )
    ++*(_DWORD *)(v69 + 8);
  if ( v176 != &v178 )
    operator delete(v176, v178 + 1);
  if ( src != &v174 )
    operator delete(src, v174 + 1);
  sub_6511B0(*(_QWORD *)(a2 + 32), v70, 0);
  v71 = *(_QWORD *)(a2 + 56);
  v72 = *(__int64 **)(v149 + 16);
  v73 = *(__int64 **)(v71 + 152);
  v74 = *(unsigned int *)(v71 + 160);
  v75 = *((_DWORD *)v72 + 3);
  v76 = v74 - 1;
  v74 *= 8;
  v77 = (__int64 *)((char *)v73 + v74);
  v78 = 8LL * (v75 & v76);
  v79 = &v73[(unsigned __int64)v78 / 8];
  if ( v78 == v74 )
  {
LABEL_103:
    if ( v73 == v79 )
      goto LABEL_76;
    while ( 1 )
    {
      v95 = *v73;
      if ( (unsigned __int64)*v73 > 1 )
      {
        if ( *(_DWORD *)(v95 + 12) == v75 && v72 == (__int64 *)v95 )
          goto LABEL_112;
      }
      else if ( !v95 )
      {
        v82 = *(_QWORD *)(a2 + 24);
        if ( v10 )
          goto LABEL_77;
        goto LABEL_111;
      }
      if ( v79 == ++v73 )
        goto LABEL_76;
    }
  }
  v80 = &v73[(unsigned __int64)v78 / 8];
  while ( 1 )
  {
    v81 = *v80;
    if ( (unsigned __int64)*v80 <= 1 )
    {
      if ( !v81 )
        goto LABEL_76;
      goto LABEL_73;
    }
    if ( *(_DWORD *)(v81 + 12) == v75 && v72 == (__int64 *)v81 )
      break;
LABEL_73:
    if ( v77 == ++v80 )
      goto LABEL_103;
  }
LABEL_112:
  v79 = *(__int64 **)(a2 + 64);
  if ( v70 )
    ++*(_DWORD *)(v70 + 8);
  v96 = (_QWORD *)v79[29];
  if ( v96 )
  {
    v97 = *((_DWORD *)v96 - 1);
    if ( v97 == *((_DWORD *)v96 - 2) )
    {
      v125 = (3 * v97 + 1) >> 1;
      v126 = 8 * v125 + 8;
      if ( 8 * v97 + 8 >= v126 || v97 >= v125 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)&v176, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, &v176);
        sub_233E40((__int64)&v176);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v149 = (__int64)v79;
      v127 = (unsigned int *)sub_186B300(v96 - 1, v126);
      v128 = v127[1];
      v79 = (__int64 *)v149;
      v96 = v127 + 2;
      *(_QWORD *)(v149 + 232) = v127 + 2;
      *v127 = v125;
      LODWORD(v127) = v128;
      v100 = &v96[v128];
      v99 = (_DWORD)v127 + 1;
    }
    else
    {
      v98 = v97;
      v99 = v97 + 1;
      v100 = &v96[v98];
    }
  }
  else
  {
    v149 = (__int64)v79;
    v145 = (_QWORD *)sub_186B270(0x18u);
    v79 = (__int64 *)v149;
    *v145 = 2;
    v99 = 1;
    v96 = v145 + 1;
    *(_QWORD *)(v149 + 232) = v96;
    v100 = v96;
  }
  *v100 = v70;
  *((_DWORD *)v96 - 1) = v99;
  v101 = *((unsigned int *)v79 + 40);
  v102 = *((_DWORD *)v79 + 42);
  v103 = 2 * v101;
  if ( 3 * (int)v101 < (unsigned int)(4 * (v102 + *((_DWORD *)v79 + 41))) )
  {
    v134 = v103;
    *(_QWORD *)v159 = v79;
    LODWORD(v154) = 2 * v101;
    v149 = 8LL * v103;
    v135 = (__int64 *)sub_186B270(v149);
    v136 = (int)v154;
    v106 = v149;
    v104 = v135;
    v79 = *(__int64 **)v159;
    if ( (_DWORD)v154 )
    {
      v159[0] = (int)v154;
      v154 = (_QWORD *)v149;
      v149 = (__int64)v79;
      memset(v135, 0, 8 * v134);
      v79 = (__int64 *)v149;
      v106 = (__int64)v154;
      v136 = v159[0];
    }
    v137 = (char *)v79[19];
    v105 = v136 - 1;
    v107 = (__int64 *)((char *)v104 + v106);
    v138 = &v137[8 * *((unsigned int *)v79 + 40)];
    if ( v137 != v138 )
    {
      do
      {
        while ( *(_QWORD *)v137 <= 1u )
        {
          v137 += 8;
          if ( v138 == v137 )
            goto LABEL_176;
        }
        v139 = 8LL * (*(_DWORD *)(*(_QWORD *)v137 + 12LL) & (unsigned int)v105);
        v140 = &v104[(unsigned __int64)v139 / 8];
        if ( v106 == v139 )
        {
LABEL_180:
          if ( v104 == v140 )
          {
LABEL_188:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v141 = v104;
          while ( *v141 )
          {
            if ( v140 == ++v141 )
              goto LABEL_188;
          }
        }
        else
        {
          v141 = &v104[(unsigned __int64)v139 / 8];
          while ( *v141 )
          {
            if ( v107 == ++v141 )
              goto LABEL_180;
          }
        }
        v142 = *(_QWORD *)v137;
        v137 += 8;
        *v141 = v142;
      }
      while ( v138 != v137 );
LABEL_176:
      v138 = (char *)v79[19];
    }
    if ( v138 )
    {
      v160[0] = v136;
      *(_QWORD *)v159 = v106;
      LODWORD(v154) = v136 - 1;
      v149 = (__int64)v79;
      sub_186B220(v138);
      v136 = v160[0];
      v106 = *(_QWORD *)v159;
      v105 = (int)v154;
      v79 = (__int64 *)v149;
    }
    v79[19] = (__int64)v104;
    v102 = 0;
    *((_DWORD *)v79 + 40) = v136;
    *((_DWORD *)v79 + 42) = 0;
  }
  else
  {
    v104 = (__int64 *)v79[19];
    v105 = v101 - 1;
    v106 = 8 * v101;
    v107 = (__int64 *)((char *)v104 + v106);
  }
  v108 = *(_DWORD *)(v70 + 12);
  v109 = 8LL * (v108 & (unsigned int)v105);
  v72 = &v104[(unsigned __int64)v109 / 8];
  if ( v109 != v106 )
  {
    v110 = &v104[(unsigned __int64)v109 / 8];
    v111 = nullptr;
    while ( 1 )
    {
      v112 = *v110;
      if ( (unsigned __int64)*v110 > 1 )
      {
        if ( *(_DWORD *)(v112 + 12) == v108 && v70 == v112 )
        {
          *v110 = v70;
          goto LABEL_76;
        }
      }
      else
      {
        if ( !v112 )
        {
          if ( v111 )
            goto LABEL_186;
          v111 = v110;
          goto LABEL_187;
        }
        v111 = v110;
      }
      if ( ++v110 == v107 )
        goto LABEL_130;
    }
  }
  v111 = nullptr;
LABEL_130:
  while ( 2 )
  {
    if ( v72 == v104 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v113 = *v104;
    if ( (unsigned __int64)*v104 > 1 )
    {
      if ( *(_DWORD *)(v113 + 12) == v108 && v70 == v113 )
      {
        *v104 = v70;
        goto LABEL_76;
      }
      goto LABEL_129;
    }
    if ( v113 )
    {
      v111 = v104;
LABEL_129:
      ++v104;
      continue;
    }
    break;
  }
  if ( v111 )
LABEL_186:
    *((_DWORD *)v79 + 42) = v102 - 1;
  else
    v111 = v104;
LABEL_187:
  *v111 = v70;
  ++*((_DWORD *)v79 + 41);
LABEL_76:
  v82 = *(_QWORD *)(a2 + 24);
  if ( v10 )
  {
LABEL_77:
    v83 = *((_DWORD *)v10 - 1);
    goto LABEL_78;
  }
LABEL_111:
  v83 = 0;
LABEL_78:
  v84 = sub_15DC610(
          v82,
          v70,
          v83,
          (int)v10,
          (int)v79,
          (int)v72,
          v146,
          v149,
          v151,
          (int)v154,
          v156[0],
          v159[0],
          v160[0],
          v162,
          (int)v165,
          v167);
  v85 = v84;
  if ( v84 )
    ++*(_DWORD *)(v84 + 8);
  v86 = *v147;
  if ( *v147 )
  {
    v87 = v147[1];
    v45 = (*(_DWORD *)(v86 + 8))-- == 1;
    if ( v45 )
      sub_15D7BC0(v87, v86);
  }
  *v147 = v85;
  if ( v70 )
  {
    v45 = (*(_DWORD *)(v70 + 8))-- == 1;
    if ( v45 )
      sub_15D7BC0(*(_QWORD *)v157, v70);
  }
  if ( v55 )
  {
    v88 = v55;
    v89 = (unsigned __int64)&v55[*((unsigned int *)v55 - 1)];
    if ( (unsigned __int64)v55 < v89 )
    {
      do
      {
        while ( 1 )
        {
          v90 = *v88;
          if ( *v88 )
          {
            v45 = (*(_DWORD *)(v90 + 8))-- == 1;
            if ( v45 )
              break;
          }
          if ( (unsigned __int64)++v88 >= v89 )
            goto LABEL_93;
        }
        ++v88;
        sub_15D7BC0(*(_QWORD *)v152, v90);
      }
      while ( (unsigned __int64)v88 < v89 );
    }
LABEL_93:
    sub_186B220(v55 - 1);
  }
  if ( v10 )
  {
    v91 = v10;
    v92 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 < v92 )
    {
      do
      {
        while ( 1 )
        {
          v93 = *v91;
          if ( *v91 )
          {
            v45 = (*(_DWORD *)(v93 + 8))-- == 1;
            if ( v45 )
              break;
          }
          if ( ++v91 >= v92 )
            goto LABEL_101;
        }
        ++v91;
        sub_15D7BC0(v163, v93);
      }
      while ( v91 < v92 );
    }
LABEL_101:
    sub_186B220(v10 - 1);
  }
  return v147;
}

