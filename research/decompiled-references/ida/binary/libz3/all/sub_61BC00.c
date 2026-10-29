__int64 __fastcall sub_61BC00(__int64 a1, __int64 a2, int a3)
{
  char **v3; // r12
  char **v4; // r15
  char **exception; // rbp
  char **v6; // r12
  char **v7; // r12
  __int64 v9; // rbp
  char *v10; // r12
  int v11; // ecx
  unsigned int v12; // esi
  char *v13; // rax
  char *v14; // rdx
  char *v15; // rbx
  char *v16; // rbp
  __int64 v17; // rax
  unsigned int v18; // ebp
  size_t v19; // rbx
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  _OWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rdi
  int v27; // ecx
  __int64 v28; // rsi
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // rbp
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rbx
  _QWORD *v36; // rbp
  __int64 v37; // rsi
  __int64 v38; // rdi
  bool v39; // zf
  int v40; // eax
  int v41; // r10d
  char *v42; // rdi
  int v43; // ecx
  __int64 v44; // rsi
  char *v45; // rax
  char *v46; // rdx
  unsigned int v47; // ebp
  size_t v48; // rbx
  _OWORD *v49; // rdx
  _OWORD *v50; // rcx
  _OWORD *v51; // rax
  _QWORD *v52; // rbx
  _QWORD *v53; // rbp
  __int64 v54; // rsi
  __int64 v55; // rdi
  unsigned int v56; // ebx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r13
  _QWORD *v59; // rax
  unsigned __int64 *v60; // rdx
  __int64 v61; // rbp
  __int64 v62; // r12
  _QWORD *v63; // rdi
  int i; // eax
  unsigned int v65; // eax
  __int64 v66; // r12
  unsigned __int64 v67; // r13
  _QWORD *v68; // rax
  __int64 v69; // rbx
  unsigned __int64 *v70; // rdx
  __int64 *v71; // rbp
  unsigned int j; // eax
  unsigned int v73; // eax
  __int64 v74; // rdx
  unsigned int k; // ebx
  __int64 v76; // r13
  _QWORD *v77; // rbx
  unsigned int v78; // r12d
  _QWORD *m; // rax
  unsigned __int64 v80; // r15
  unsigned int n; // ecx
  __int64 v82; // rsi
  int v83; // eax
  _QWORD *v84; // rsi
  __int64 v85; // rax
  __int64 v86; // r13
  unsigned int v87; // eax
  unsigned int v88; // r8d
  size_t v89; // rsi
  unsigned int *v90; // rax
  __int64 v91; // rsi
  __int64 *v92; // r13
  __int64 *v93; // r10
  __int64 v94; // r12
  __int64 v95; // rax
  __int64 v96; // r15
  unsigned int v97; // eax
  __int64 v98; // rdx
  int v99; // eax
  __int64 *v100; // rdx
  __int64 v101; // r14
  int v102; // r12d
  int v103; // eax
  int v104; // r9d
  __int64 result; // rax
  __int64 *v106; // r12
  unsigned __int64 v107; // r13
  __int64 v108; // rsi
  __int64 *v109; // rbx
  unsigned __int64 v110; // r12
  __int64 v111; // rsi
  __int64 *v112; // rbx
  __int64 *v113; // r12
  __int64 v114; // rsi
  unsigned int v115; // r15d
  size_t v116; // rsi
  unsigned int *v117; // rax
  __int64 v118; // rdx
  unsigned int v119; // r8d
  size_t v120; // rsi
  unsigned int v121; // r15d
  unsigned int *v122; // rax
  __int64 v123; // rdx
  __int64 *v124; // r13
  unsigned __int64 v125; // rbx
  __int64 v126; // rsi
  _QWORD *v127; // rax
  unsigned int v128; // edx
  size_t v129; // rsi
  unsigned int *v130; // rax
  _QWORD *v131; // rax
  size_t v132; // rsi
  __int64 v133; // r12
  _QWORD *v134; // rax
  __int64 v135; // r13
  _QWORD *v136; // rdx
  int ii; // eax
  unsigned int v138; // eax
  unsigned int v139; // r15d
  size_t v140; // rsi
  unsigned int *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rax
  size_t v144; // rsi
  _QWORD *v145; // [rsp+8h] [rbp-110h]
  int v146[2]; // [rsp+10h] [rbp-108h]
  unsigned int v147; // [rsp+10h] [rbp-108h]
  int v148[2]; // [rsp+10h] [rbp-108h]
  int v149; // [rsp+10h] [rbp-108h]
  int v150[2]; // [rsp+10h] [rbp-108h]
  unsigned int v151; // [rsp+10h] [rbp-108h]
  unsigned int v152; // [rsp+18h] [rbp-100h]
  unsigned int v153; // [rsp+18h] [rbp-100h]
  __int64 *v154; // [rsp+18h] [rbp-100h]
  _QWORD *v155; // [rsp+18h] [rbp-100h]
  __int64 *v156; // [rsp+18h] [rbp-100h]
  unsigned int v158; // [rsp+28h] [rbp-F0h]
  __int64 v159; // [rsp+30h] [rbp-E8h]
  __int64 v160; // [rsp+38h] [rbp-E0h]
  __int64 v162; // [rsp+50h] [rbp-C8h]
  __int64 v163; // [rsp+58h] [rbp-C0h]
  _QWORD v164[2]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v165; // [rsp+A0h] [rbp-78h]
  __int64 v166; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v167; // [rsp+B8h] [rbp-60h]
  __int64 v168[11]; // [rsp+C0h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 92) || *(_DWORD *)(a1 + 96) )
  {
    v9 = *(unsigned int *)(a1 + 88);
    v10 = *(char **)(a1 + 80);
    v11 = 0;
    v12 = *(_DWORD *)(a1 + 88);
    v13 = v10;
    v14 = &v10[16 * v9];
    if ( v10 == v14 )
      goto LABEL_19;
    do
    {
      while ( *(_QWORD *)v13 )
      {
        *(_QWORD *)v13 = 0;
        v13 += 16;
        if ( v14 == v13 )
          goto LABEL_8;
      }
      v13 += 16;
      ++v11;
    }
    while ( v14 != v13 );
LABEL_8:
    if ( v12 <= 0x10 || 3 * v12 >= 4 * v11 )
      goto LABEL_19;
    if ( v10 )
    {
      v15 = v10;
      v16 = &v10[16 * v9];
      do
      {
        while ( 1 )
        {
          v17 = *((_QWORD *)v15 + 1);
          if ( !v17 )
            break;
          v15 += 16;
          sub_186B220((void *)(v17 - 8));
          if ( v16 == v15 )
            goto LABEL_14;
        }
        v15 += 16;
      }
      while ( v15 != v16 );
LABEL_14:
      sub_186B220(v10);
      v18 = *(_DWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = 0;
      v18 >>= 1;
      *(_DWORD *)(a1 + 88) = v18;
      v19 = v18;
      v20 = (_OWORD *)sub_186B270(v19 * 16);
      if ( !v18 )
        goto LABEL_18;
    }
    else
    {
      v144 = v12 >> 1;
      *(_QWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 88) = v144;
      v19 = v144;
      v20 = (_OWORD *)sub_186B270(16 * v144);
    }
    v21 = &v20[v19];
    v22 = v20;
    if ( ((v19 * 16) & 0x10) == 0 || (v22 = v20 + 1, *v20 = 0, v20 + 1 != v21) )
    {
      do
      {
        *v22 = 0;
        v22 += 2;
        *(v22 - 1) = 0;
      }
      while ( v22 != v21 );
    }
LABEL_18:
    *(_QWORD *)(a1 + 80) = v20;
LABEL_19:
    *(_QWORD *)(a1 + 92) = 0;
  }
  v23 = *(_QWORD *)(a1 + 104);
  if ( v23 )
    *(_DWORD *)(v23 - 4) = 0;
  v24 = *(_QWORD *)(a1 + 120);
  if ( v24 )
    *(_DWORD *)(v24 - 4) = 0;
  v25 = *(_QWORD *)(a1 + 112);
  if ( v25 )
    *(_DWORD *)(v25 - 4) = 0;
  if ( !*(_DWORD *)(a1 + 140) && !*(_DWORD *)(a1 + 144) )
    goto LABEL_41;
  v26 = *(_QWORD **)(a1 + 128);
  v27 = 0;
  v28 = *(unsigned int *)(a1 + 136);
  v29 = v26;
  v30 = &v26[2 * v28];
  if ( v26 != v30 )
  {
    do
    {
      while ( *v29 )
      {
        *v29 = 0;
        v29 += 2;
        if ( v30 == v29 )
          goto LABEL_33;
      }
      v29 += 2;
      ++v27;
    }
    while ( v30 != v29 );
LABEL_33:
    if ( (unsigned int)v28 > 0x10 && 3 * (int)v28 < (unsigned int)(4 * v27) )
    {
      if ( v26 )
      {
        sub_186B220(v26);
        v31 = *(_DWORD *)(a1 + 136);
        *(_QWORD *)(a1 + 128) = 0;
        v31 >>= 1;
        *(_DWORD *)(a1 + 136) = v31;
        v32 = v31;
        v33 = sub_186B270(16LL * v31);
        if ( !v31 )
        {
LABEL_39:
          *(_QWORD *)(a1 + 128) = v33;
          goto LABEL_40;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 128) = 0;
        *(_DWORD *)(a1 + 136) = (unsigned int)v28 >> 1;
        v32 = (unsigned int)v28 >> 1;
        v33 = sub_186B270(16 * v32);
      }
      v34 = (_QWORD *)v33;
      do
      {
        *v34 = 0;
        v34 += 2;
        *((_DWORD *)v34 - 2) = 0;
      }
      while ( v34 != (_QWORD *)(v33 + 16 * v32) );
      goto LABEL_39;
    }
  }
LABEL_40:
  *(_QWORD *)(a1 + 140) = 0;
LABEL_41:
  v35 = *(_QWORD **)(a1 + 160);
  if ( v35 )
  {
    v36 = &v35[*((unsigned int *)v35 - 1)];
    if ( v35 >= v36 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v37 = *v35;
        if ( *v35 )
        {
          v38 = *(_QWORD *)(a1 + 152);
          v39 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v39 )
            break;
        }
        if ( ++v35 >= v36 )
          goto LABEL_48;
      }
      sub_15D7BC0(v38, v37);
      ++v35;
    }
    while ( v35 < v36 );
LABEL_48:
    v35 = *(_QWORD **)(a1 + 160);
    if ( v35 )
LABEL_49:
      *((_DWORD *)v35 - 1) = 0;
  }
  v40 = sub_648530(*(_QWORD *)(a1 + 72) + 16LL, a2);
  v41 = *(_DWORD *)(a1 + 188);
  *(_DWORD *)(a1 + 168) = v40 + 1;
  if ( v41 || *(_DWORD *)(a1 + 192) )
  {
    v42 = *(char **)(a1 + 176);
    v43 = 0;
    v44 = *(unsigned int *)(a1 + 184);
    v45 = v42;
    v46 = &v42[16 * v44];
    if ( v42 == v46 )
      goto LABEL_65;
    do
    {
      while ( *(_QWORD *)v45 )
      {
        *(_QWORD *)v45 = 0;
        v45 += 16;
        if ( v46 == v45 )
          goto LABEL_57;
      }
      v45 += 16;
      ++v43;
    }
    while ( v46 != v45 );
LABEL_57:
    if ( (unsigned int)v44 <= 0x10 || 3 * (int)v44 >= (unsigned int)(4 * v43) )
      goto LABEL_65;
    if ( v42 )
    {
      sub_186B220(v42);
      v47 = *(_DWORD *)(a1 + 184);
      *(_QWORD *)(a1 + 176) = 0;
      v47 >>= 1;
      *(_DWORD *)(a1 + 184) = v47;
      v48 = v47;
      v49 = (_OWORD *)sub_186B270(v48 * 16);
      if ( !v47 )
      {
LABEL_64:
        *(_QWORD *)(a1 + 176) = v49;
LABEL_65:
        *(_QWORD *)(a1 + 188) = 0;
        goto LABEL_66;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 176) = 0;
      v132 = (unsigned int)v44 >> 1;
      *(_DWORD *)(a1 + 184) = v132;
      v48 = v132;
      v49 = (_OWORD *)sub_186B270(16 * v132);
    }
    v50 = &v49[v48];
    v51 = v49;
    if ( ((v48 * 16) & 0x10) == 0 || (v51 = v49 + 1, *v49 = 0, v49 + 1 != v50) )
    {
      do
      {
        *v51 = 0;
        v51 += 2;
        *(v51 - 1) = 0;
      }
      while ( v51 != v50 );
    }
    goto LABEL_64;
  }
LABEL_66:
  v52 = *(_QWORD **)(a1 + 208);
  if ( v52 )
  {
    v53 = &v52[*((unsigned int *)v52 - 1)];
    if ( v52 >= v53 )
      goto LABEL_74;
    do
    {
      while ( 1 )
      {
        v54 = *v52;
        if ( *v52 )
        {
          v55 = *(_QWORD *)(a1 + 200);
          v39 = (*(_DWORD *)(v54 + 8))-- == 1;
          if ( v39 )
            break;
        }
        if ( ++v52 >= v53 )
          goto LABEL_73;
      }
      sub_15D7BC0(v55, v54);
      ++v52;
    }
    while ( v52 < v53 );
LABEL_73:
    v52 = *(_QWORD **)(a1 + 208);
    if ( v52 )
LABEL_74:
      *((_DWORD *)v52 - 1) = 0;
  }
  v159 = *(_QWORD *)(a1 + 24);
  sub_618A10(v164, a1, *(_QWORD *)(a2 + 40));
  v160 = v164[0];
  v163 = v164[1];
  v56 = *(_DWORD *)(a2 + 68);
  v152 = *(_DWORD *)(a2 + 56);
  if ( v56 )
  {
    v57 = *(_QWORD *)(a2 + 80);
    v58 = v57 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v57 > 7 )
      ++*(_DWORD *)(v58 + 8);
    v59 = (_QWORD *)sub_186B270(0x18u);
    v60 = v59 + 1;
    *(_QWORD *)v146 = v56;
    v61 = a2 + 8LL * v56;
    v145 = v59 + 1;
    v62 = a2;
    v63 = v59 + 1;
    *v59 = 2;
    for ( i = 1; ; i = (_DWORD)v122 + 1 )
    {
      v62 += 8;
      *v60 = v58;
      *((_DWORD *)v63 - 1) = i;
      if ( v62 == v61 )
        break;
      while ( 1 )
      {
        v58 = *(_QWORD *)(v62 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v62 + 80) > 7u )
          ++*(_DWORD *)(v58 + 8);
        v65 = *((_DWORD *)v145 - 1);
        if ( v65 == *((_DWORD *)v145 - 2) )
          break;
        v62 += 8;
        v145[v65] = v58;
        *((_DWORD *)v145 - 1) = v65 + 1;
        if ( v62 == v61 )
          goto LABEL_84;
      }
      v119 = (3 * v65 + 1) >> 1;
      v120 = 8 * v119 + 8;
      v121 = v119;
      if ( 8 * v65 + 8 >= (unsigned int)v120 || v65 >= v119 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v168, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v168);
        sub_233E40((__int64)v168);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v122 = (unsigned int *)sub_186B300(v145 - 1, v120);
      v123 = v122[1];
      *v122 = v121;
      v145 = v122 + 2;
      v63 = v122 + 2;
      LODWORD(v122) = v123;
      v60 = &v145[v123];
    }
LABEL_84:
    if ( v56 >= v152 )
    {
      v71 = nullptr;
      v162 = *(_QWORD *)(a1 + 24);
      v165 = v162;
      goto LABEL_97;
    }
LABEL_85:
    v66 = a2 + 8LL * *(_QWORD *)v146;
    v67 = *(_QWORD *)(v66 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v66 + 80) > 7u )
      ++*(_DWORD *)(v67 + 8);
    v68 = (_QWORD *)sub_186B270(0x18u);
    v69 = a2 + 8 * (*(_QWORD *)v146 + v152 - 1 - v56) + 8;
    v70 = v68 + 1;
    v71 = v68 + 1;
    *v68 = 2;
    for ( j = 1; ; j = (_DWORD)v117 + 1 )
    {
      v66 += 8;
      *v70 = v67;
      *((_DWORD *)v71 - 1) = j;
      if ( v66 == v69 )
        break;
      while ( 1 )
      {
        v67 = *(_QWORD *)(v66 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v66 + 80) > 7u )
          ++*(_DWORD *)(v67 + 8);
        v73 = *((_DWORD *)v71 - 1);
        if ( v73 == *((_DWORD *)v71 - 2) )
          break;
        v74 = v73;
        v66 += 8;
        j = v73 + 1;
        v71[v74] = v67;
        *((_DWORD *)v71 - 1) = j;
        if ( v66 == v69 )
          goto LABEL_93;
      }
      v115 = (3 * v73 + 1) >> 1;
      v116 = 8 * v115 + 8;
      if ( 8 * v73 + 8 >= (unsigned int)v116 || v73 >= v115 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v168, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v168);
        sub_233E40((__int64)v168);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v117 = (unsigned int *)sub_186B300(v71 - 1, v116);
      v118 = v117[1];
      v71 = (__int64 *)(v117 + 2);
      *v117 = v115;
      LODWORD(v117) = v118;
      v70 = (unsigned __int64 *)&v71[v118];
    }
LABEL_93:
    for ( k = 0; k < j; ++k )
    {
      sub_61A170(a1, v71[k]);
      j = *((_DWORD *)v71 - 1);
    }
    v162 = *(_QWORD *)(a1 + 24);
    v76 = v162;
    v165 = v162;
    if ( !v145 )
    {
      if ( j )
      {
        v133 = *v71;
        m = nullptr;
        if ( !*v71 )
          goto LABEL_189;
        goto LABEL_187;
      }
      m = nullptr;
LABEL_209:
      v77 = v145;
      *(_QWORD *)v148 = v76;
      v145 = m;
LABEL_115:
      v92 = *(__int64 **)(a1 + 176);
      v93 = &v92[2 * *(unsigned int *)(a1 + 184)];
      if ( v92 != v93 )
        goto LABEL_118;
LABEL_184:
      v101 = *(_QWORD *)(a1 + 72);
      v102 = a2 + 72;
      goto LABEL_134;
    }
LABEL_97:
    v77 = nullptr;
    v78 = 0;
    for ( m = v145; v78 < *((_DWORD *)v145 - 1); ++v78 )
    {
      sub_61A670(&v166, a1, m[v78]);
      v80 = v167;
      if ( v167 )
      {
        for ( n = 0; ; ++n )
        {
          v85 = *(unsigned int *)(v80 - 4);
          if ( n >= (unsigned int)v85 )
            break;
          v86 = *(_QWORD *)(v80 + 8LL * n);
          if ( v86 )
            ++*(_DWORD *)(v86 + 8);
          if ( v77 )
          {
            v87 = *((_DWORD *)v77 - 1);
            if ( v87 == *((_DWORD *)v77 - 2) )
            {
              v88 = (3 * v87 + 1) >> 1;
              v89 = 8 * v88 + 8;
              if ( 8 * v87 + 8 >= (unsigned int)v89 || v87 >= v88 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v168, "Overflow encountered when expanding vector");
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, v168);
                sub_233E40((__int64)v168);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v153 = (3 * v87 + 1) >> 1;
              v147 = n;
              v90 = (unsigned int *)sub_186B300(v77 - 1, v89);
              v91 = v90[1];
              v77 = v90 + 2;
              n = v147;
              *v90 = v153;
              LODWORD(v90) = v91;
              v84 = &v77[v91];
              v83 = (_DWORD)v90 + 1;
            }
            else
            {
              v82 = v87;
              v83 = v87 + 1;
              v84 = &v77[v82];
            }
          }
          else
          {
            v151 = n;
            v127 = (_QWORD *)sub_186B270(0x18u);
            v77 = v127 + 1;
            v84 = v127 + 1;
            *v127 = 2;
            n = v151;
            v83 = 1;
          }
          *v84 = v86;
          *((_DWORD *)v77 - 1) = v83;
        }
        if ( v80 < v80 + 8 * v85 )
        {
          v155 = v77;
          v124 = (__int64 *)v80;
          v125 = v80 + 8 * v85;
          *(_QWORD *)v150 = v166;
          do
          {
            v126 = *v124;
            if ( *v124 )
            {
              v39 = (*(_DWORD *)(v126 + 8))-- == 1;
              if ( v39 )
                sub_15D7BC0(*(_QWORD *)v150, v126);
            }
            ++v124;
          }
          while ( (unsigned __int64)v124 < v125 );
          v77 = v155;
        }
        sub_186B220((void *)(v80 - 8));
      }
      m = v145;
    }
    if ( !v71 )
    {
      *(_QWORD *)v148 = *(_QWORD *)(a1 + 24);
      goto LABEL_115;
    }
    if ( *((_DWORD *)v71 - 1) )
    {
      v133 = *v71;
      if ( !*v71 )
      {
LABEL_188:
        if ( v77 )
        {
          v135 = 0;
          goto LABEL_193;
        }
LABEL_189:
        v134 = (_QWORD *)sub_186B270(0x18u);
        v135 = 0;
        v77 = v134 + 1;
        *v134 = 2;
        v136 = v134 + 1;
        for ( ii = 1; ; ii = (_DWORD)v141 + 1 )
        {
          *v136 = v133;
          ++v135;
          *((_DWORD *)v77 - 1) = ii;
          if ( (unsigned int)v135 >= *((_DWORD *)v71 - 1) )
            break;
          while ( 1 )
          {
            v133 = v71[v135];
            if ( v133 )
              ++*(_DWORD *)(v133 + 8);
LABEL_193:
            v138 = *((_DWORD *)v77 - 1);
            if ( v138 == *((_DWORD *)v77 - 2) )
              break;
            ++v135;
            v77[v138] = v133;
            *((_DWORD *)v77 - 1) = v138 + 1;
            if ( (unsigned int)v135 >= *((_DWORD *)v71 - 1) )
              goto LABEL_195;
          }
          v139 = (3 * v138 + 1) >> 1;
          v140 = 8 * v139 + 8;
          if ( 8 * v138 + 8 >= (unsigned int)v140 || v138 >= v139 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v168, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v168);
            sub_233E40((__int64)v168);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v141 = (unsigned int *)sub_186B300(v77 - 1, v140);
          v142 = v141[1];
          v77 = v141 + 2;
          *v141 = v139;
          LODWORD(v141) = v142;
          v136 = &v77[v142];
        }
LABEL_195:
        v92 = *(__int64 **)(a1 + 176);
        v93 = &v92[2 * *(unsigned int *)(a1 + 184)];
        *(_QWORD *)v148 = *(_QWORD *)(a1 + 24);
        if ( v92 != v93 )
          goto LABEL_118;
        goto LABEL_133;
      }
      v145 = v77;
LABEL_187:
      ++*(_DWORD *)(v133 + 8);
      v77 = v145;
      v145 = m;
      goto LABEL_188;
    }
    v145 = v77;
    v76 = *(_QWORD *)(a1 + 24);
    goto LABEL_209;
  }
  v145 = nullptr;
  *(_QWORD *)v146 = 0;
  if ( v152 )
    goto LABEL_85;
  v143 = *(_QWORD *)(a1 + 24);
  v71 = nullptr;
  v77 = nullptr;
  v92 = *(__int64 **)(a1 + 176);
  *(_QWORD *)v148 = v143;
  v93 = &v92[2 * *(unsigned int *)(a1 + 184)];
  v165 = v143;
  v162 = v143;
  if ( v92 != v93 )
  {
LABEL_118:
    while ( (unsigned __int64)*v92 <= 1 )
    {
      v92 += 2;
      if ( v92 == v93 )
        goto LABEL_184;
    }
    if ( v92 == v93 )
      goto LABEL_184;
    do
    {
      v94 = *v92;
      if ( *v92 )
        ++*(_DWORD *)(v94 + 8);
      v154 = v93;
      v95 = sub_15E1B70(v148[0]);
      v93 = v154;
      v96 = v95;
      if ( v95 )
        ++*(_DWORD *)(v95 + 8);
      if ( v77 )
      {
        v97 = *((_DWORD *)v77 - 1);
        if ( v97 == *((_DWORD *)v77 - 2) )
        {
          v128 = (3 * v97 + 1) >> 1;
          v129 = 8 * v128 + 8;
          if ( 8 * v97 + 8 >= (unsigned int)v129 || v97 >= v128 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v168, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, v168);
            sub_233E40((__int64)v168);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v158 = (3 * v97 + 1) >> 1;
          v130 = (unsigned int *)sub_186B300(v77 - 1, v129);
          v77 = v130 + 2;
          v93 = v154;
          *v130 = v158;
          LODWORD(v130) = v130[1];
          v100 = &v77[(unsigned int)v130];
          v99 = (_DWORD)v130 + 1;
        }
        else
        {
          v98 = v97;
          v99 = v97 + 1;
          v100 = &v77[v98];
        }
      }
      else
      {
        v131 = (_QWORD *)sub_186B270(0x18u);
        v77 = v131 + 1;
        *v131 = 2;
        v93 = v154;
        v99 = 1;
        v100 = v77;
      }
      *v100 = v96;
      *((_DWORD *)v77 - 1) = v99;
      if ( v94 )
      {
        v39 = (*(_DWORD *)(v94 + 8))-- == 1;
        if ( v39 )
        {
          v156 = v93;
          sub_15D7BC0(*(_QWORD *)v148, v94);
          v93 = v156;
        }
      }
      do
        v92 += 2;
      while ( v92 != v93 && (unsigned __int64)*v92 <= 1 );
      *(_QWORD *)v148 = *(_QWORD *)(a1 + 24);
    }
    while ( v92 != (__int64 *)(*(_QWORD *)(a1 + 176) + 16LL * *(unsigned int *)(a1 + 184)) );
LABEL_133:
    v101 = *(_QWORD *)(a1 + 72);
    v102 = a2 + 72;
    goto LABEL_134;
  }
  v162 = v143;
  v71 = nullptr;
  v77 = nullptr;
  v101 = *(_QWORD *)(a1 + 72);
  v102 = a2 + 72;
LABEL_134:
  sub_15E1AF0(v148[0]);
  v103 = sub_15E1B70(v148[0]);
  result = sub_631ED0(v101, v103, 0, a3, v102, v104);
  if ( v77 )
  {
    v106 = v77;
    v107 = (unsigned __int64)&v77[*((unsigned int *)v77 - 1)];
    if ( (unsigned __int64)v77 < v107 )
    {
      do
      {
        while ( 1 )
        {
          v108 = *v106;
          if ( *v106 )
          {
            v39 = (*(_DWORD *)(v108 + 8))-- == 1;
            if ( v39 )
              break;
          }
          if ( (unsigned __int64)++v106 >= v107 )
            goto LABEL_141;
        }
        ++v106;
        sub_15D7BC0(v162, v108);
      }
      while ( (unsigned __int64)v106 < v107 );
    }
LABEL_141:
    result = sub_186B220(v77 - 1);
  }
  if ( v160 )
  {
    v149 = *(_DWORD *)(v160 + 8);
    result = (unsigned int)(v149 - 1);
    *(_DWORD *)(v160 + 8) = result;
    if ( v149 == 1 )
      result = sub_15D7BC0(v163, v160);
  }
  if ( v145 )
  {
    v109 = v145;
    v110 = (unsigned __int64)&v145[*((unsigned int *)v145 - 1)];
    if ( (unsigned __int64)v145 < v110 )
    {
      do
      {
        while ( 1 )
        {
          v111 = *v109;
          if ( *v109 )
          {
            v39 = (*(_DWORD *)(v111 + 8))-- == 1;
            if ( v39 )
              break;
          }
          if ( (unsigned __int64)++v109 >= v110 )
            goto LABEL_152;
        }
        ++v109;
        sub_15D7BC0(v159, v111);
      }
      while ( (unsigned __int64)v109 < v110 );
    }
LABEL_152:
    result = sub_186B220(v145 - 1);
  }
  if ( v71 )
  {
    v112 = v71;
    v113 = &v71[*((unsigned int *)v71 - 1)];
    if ( v71 < v113 )
    {
      do
      {
        while ( 1 )
        {
          v114 = *v112;
          if ( *v112 )
          {
            v39 = (*(_DWORD *)(v114 + 8))-- == 1;
            if ( v39 )
              break;
          }
          if ( ++v112 >= v113 )
            return sub_186B220(v71 - 1);
        }
        ++v112;
        sub_15D7BC0(v159, v114);
      }
      while ( v112 < v113 );
    }
    return sub_186B220(v71 - 1);
  }
  return result;
}

