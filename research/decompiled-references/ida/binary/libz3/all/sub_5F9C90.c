void *__fastcall sub_5F9C90(__int64 a1, __int64 a2, double a3)
{
  char **v3; // r12
  char **exception; // r14
  char **v5; // r12
  char **v6; // r13
  char **v7; // r14
  char **v8; // r12
  char **v9; // r12
  _QWORD *v10; // rbx
  _QWORD *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  int v16; // ecx
  char *v17; // rdi
  __int64 v18; // rsi
  char *v19; // rax
  char *v20; // rdx
  unsigned int v21; // ebx
  unsigned int v22; // r15d
  size_t v23; // rbx
  _OWORD *v24; // rdx
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  int v27; // ecx
  _QWORD *v28; // rdi
  __int64 v29; // rsi
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // ebx
  unsigned int v33; // r15d
  size_t v34; // rbx
  _OWORD *v35; // rdx
  _OWORD *v36; // rcx
  _OWORD *v37; // rax
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  bool *v41; // rbx
  __int64 v42; // r15
  int v43; // eax
  unsigned int v44; // esi
  unsigned int v45; // r12d
  _QWORD *v46; // r15
  __int64 v47; // rdx
  _DWORD *v48; // rdi
  int v49; // eax
  _QWORD *v50; // rdx
  bool v51; // r13
  unsigned int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  bool *v55; // rdx
  __int64 v56; // r13
  unsigned int v57; // eax
  unsigned int v58; // edx
  size_t v59; // rsi
  unsigned int *v60; // rax
  _DWORD *v61; // rcx
  unsigned int v62; // edx
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 *v65; // r13
  unsigned __int64 v66; // r12
  unsigned __int64 v67; // r14
  __int64 v68; // rax
  _QWORD *v69; // rdx
  _DWORD *v70; // rdi
  int v71; // eax
  unsigned int v72; // eax
  __int64 v73; // rdx
  int v74; // eax
  bool *v75; // rdx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // r13
  _DWORD *v82; // r15
  __int64 v83; // rax
  int v84; // ecx
  int v85; // r8d
  int v86; // r9d
  __int64 v87; // rdi
  __int64 v88; // rax
  __int64 v89; // r15
  unsigned int v90; // eax
  __int64 v91; // rdx
  _QWORD *v92; // rcx
  int v93; // eax
  __int64 *v94; // rdx
  void *v95; // r12
  unsigned int v96; // eax
  __int64 v97; // rdx
  int v98; // eax
  bool *v99; // rdx
  int v100; // r9d
  int v101; // edx
  __int64 v102; // r12
  __int64 *v103; // r13
  unsigned __int64 v104; // r14
  __int64 v105; // rsi
  unsigned int v106; // edx
  size_t v107; // rsi
  unsigned int *v108; // rax
  unsigned int v109; // r14d
  size_t v110; // rsi
  unsigned int *v111; // rax
  __int64 v112; // rdx
  _QWORD *v113; // rax
  __int64 v114; // rax
  unsigned int v115; // r12d
  size_t v116; // rsi
  unsigned int *v117; // rax
  __int64 v118; // rdx
  unsigned int v119; // edx
  size_t v120; // rsi
  unsigned int *v121; // rax
  _DWORD *v122; // rdi
  __int64 v123; // r12
  _QWORD *v124; // rax
  _QWORD *v125; // rcx
  int v126; // eax
  __int64 v127; // r15
  __int64 v128; // r14
  _QWORD *v129; // r13
  unsigned int v130; // eax
  int v131; // ecx
  int v132; // r8d
  int v133; // r9d
  __int64 v134; // rdi
  __int64 v135; // rax
  __int64 *v136; // rcx
  __int64 v137; // rsi
  void *v138; // r12
  int v139; // r8d
  int v140; // r9d
  int v141; // edx
  __int64 v142; // rax
  __int64 *v143; // r12
  unsigned __int64 v144; // r14
  __int64 v145; // rsi
  unsigned int v146; // ecx
  size_t v147; // rsi
  unsigned int *v148; // rax
  _QWORD *v150; // rax
  __int64 v151; // rax
  __int64 *v152; // rbx
  unsigned __int64 v153; // r13
  __int64 v154; // rsi
  size_t v155; // rsi
  size_t v156; // rsi
  __int64 v157; // [rsp+0h] [rbp-110h]
  __int64 v158; // [rsp+8h] [rbp-108h]
  __int64 v159; // [rsp+10h] [rbp-100h]
  unsigned int v160; // [rsp+18h] [rbp-F8h]
  __int64 v161; // [rsp+20h] [rbp-F0h]
  __int64 v162; // [rsp+28h] [rbp-E8h]
  __int64 v163; // [rsp+30h] [rbp-E0h]
  __int64 v164; // [rsp+30h] [rbp-E0h]
  unsigned int v165; // [rsp+38h] [rbp-D8h]
  __int64 v166; // [rsp+38h] [rbp-D8h]
  __int64 v167; // [rsp+38h] [rbp-D8h]
  __int64 v168; // [rsp+40h] [rbp-D0h]
  __int64 *v169; // [rsp+48h] [rbp-C8h]
  int v170; // [rsp+48h] [rbp-C8h]
  unsigned int v171; // [rsp+50h] [rbp-C0h]
  unsigned int v172; // [rsp+50h] [rbp-C0h]
  int v173; // [rsp+50h] [rbp-C0h]
  int v174; // [rsp+50h] [rbp-C0h]
  unsigned int v175; // [rsp+50h] [rbp-C0h]
  unsigned int v176; // [rsp+50h] [rbp-C0h]
  int v177; // [rsp+50h] [rbp-C0h]
  unsigned int v178; // [rsp+50h] [rbp-C0h]
  int v179[2]; // [rsp+50h] [rbp-C0h]
  unsigned int v180; // [rsp+58h] [rbp-B8h]
  __int64 v181; // [rsp+58h] [rbp-B8h]
  void *ptr; // [rsp+60h] [rbp-B0h]
  int v185; // [rsp+70h] [rbp-A0h]
  _DWORD *v186; // [rsp+78h] [rbp-98h]
  _QWORD v187[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v188[2]; // [rsp+B0h] [rbp-60h] BYREF
  __int64 v189; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v190; // [rsp+C8h] [rbp-48h]
  _QWORD v191[8]; // [rsp+D0h] [rbp-40h] BYREF

  v10 = *(_QWORD **)(a1 + 64);
  if ( v10 )
  {
    if ( v10 >= &v10[*((unsigned int *)v10 - 1)] )
      goto LABEL_9;
    v12 = &v10[*((unsigned int *)v10 - 1)];
    do
    {
      while ( 1 )
      {
        v13 = *v10;
        if ( *v10 )
        {
          v14 = *(_QWORD *)(a1 + 56);
          v15 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( ++v10 >= v12 )
          goto LABEL_8;
      }
      sub_15D7BC0(v14, v13);
      ++v10;
    }
    while ( v10 < v12 );
LABEL_8:
    v10 = *(_QWORD **)(a1 + 64);
    if ( v10 )
LABEL_9:
      *((_DWORD *)v10 - 1) = 0;
  }
  if ( *(_DWORD *)(a1 + 108) || *(_DWORD *)(a1 + 112) )
  {
    v16 = 0;
    v17 = *(char **)(a1 + 96);
    v18 = *(unsigned int *)(a1 + 104);
    v19 = v17;
    v20 = &v17[16 * v18];
    if ( v17 == v20 )
      goto LABEL_25;
    do
    {
      while ( *(_QWORD *)v19 )
      {
        *(_QWORD *)v19 = 0;
        v19 += 16;
        if ( v20 == v19 )
          goto LABEL_17;
      }
      v19 += 16;
      ++v16;
    }
    while ( v20 != v19 );
LABEL_17:
    if ( (unsigned int)v18 <= 0x10 || 3 * (int)v18 >= (unsigned int)(4 * v16) )
      goto LABEL_25;
    if ( v17 )
    {
      sub_186B220(v17);
      v21 = *(_DWORD *)(a1 + 104);
      *(_QWORD *)(a1 + 96) = 0;
      v22 = v21 >> 1;
      *(_DWORD *)(a1 + 104) = v21 >> 1;
      v23 = v21 >> 1;
      v24 = (_OWORD *)sub_186B270(v23 * 16);
      if ( !v22 )
      {
LABEL_24:
        *(_QWORD *)(a1 + 96) = v24;
LABEL_25:
        *(_QWORD *)(a1 + 108) = 0;
        goto LABEL_26;
      }
    }
    else
    {
      v156 = (unsigned int)v18 >> 1;
      *(_QWORD *)(a1 + 96) = 0;
      v23 = v156;
      *(_DWORD *)(a1 + 104) = v156;
      v24 = (_OWORD *)sub_186B270(16 * v156);
    }
    v25 = &v24[v23];
    a3 = 0.0;
    v26 = v24;
    if ( ((v23 * 16) & 0x10) == 0 || (v26 = v24 + 1, *v24 = 0, v24 + 1 != v25) )
    {
      do
      {
        *v26 = 0;
        v26 += 2;
        *(v26 - 1) = 0;
      }
      while ( v26 != v25 );
    }
    goto LABEL_24;
  }
LABEL_26:
  if ( !*(_DWORD *)(a1 + 84) && !*(_DWORD *)(a1 + 88) )
    goto LABEL_42;
  v27 = 0;
  v28 = *(_QWORD **)(a1 + 72);
  v29 = *(unsigned int *)(a1 + 80);
  v30 = v28;
  v31 = &v28[2 * v29];
  if ( v28 != v31 )
  {
    do
    {
      while ( *v30 )
      {
        *v30 = 0;
        v30 += 2;
        if ( v31 == v30 )
          goto LABEL_33;
      }
      v30 += 2;
      ++v27;
    }
    while ( v31 != v30 );
LABEL_33:
    if ( (unsigned int)v29 > 0x10 && 3 * (int)v29 < (unsigned int)(4 * v27) )
    {
      if ( v28 )
      {
        sub_186B220(v28);
        v32 = *(_DWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 72) = 0;
        v33 = v32 >> 1;
        *(_DWORD *)(a1 + 80) = v32 >> 1;
        v34 = v32 >> 1;
        v35 = (_OWORD *)sub_186B270(v34 * 16);
        if ( !v33 )
        {
LABEL_40:
          *(_QWORD *)(a1 + 72) = v35;
          goto LABEL_41;
        }
      }
      else
      {
        v155 = (unsigned int)v29 >> 1;
        *(_QWORD *)(a1 + 72) = 0;
        v34 = v155;
        *(_DWORD *)(a1 + 80) = v155;
        v35 = (_OWORD *)sub_186B270(16 * v155);
      }
      v36 = &v35[v34];
      a3 = 0.0;
      v37 = v35;
      if ( ((v34 * 16) & 0x10) == 0 || (v37 = v35 + 1, *v35 = 0, v35 + 1 != v36) )
      {
        do
        {
          *v37 = 0;
          v37 += 2;
          *(v37 - 1) = 0;
        }
        while ( v37 != v36 );
      }
      goto LABEL_40;
    }
  }
LABEL_41:
  *(_QWORD *)(a1 + 84) = 0;
LABEL_42:
  v38 = *(_QWORD *)(a2 + 8);
  v159 = v38;
  ptr = (void *)sub_186B270(0xF8u);
  sub_63D370(ptr, *(_QWORD *)(a1 + 32));
  v39 = *(_QWORD *)(a2 + 24);
  if ( !v39 )
    return ptr;
  v40 = *(unsigned int *)(v39 - 4);
  v161 = *(_QWORD *)(a1 + 24);
  v158 = v38 + 16;
  if ( !(_DWORD)v40 )
    return ptr;
  v186 = nullptr;
  v162 = 0;
  v168 = 0;
  v163 = 0;
  v157 = 8 * v40;
  v41 = nullptr;
  while ( 1 )
  {
    if ( v41 )
      *((_DWORD *)v41 - 1) = 0;
    v42 = *(_QWORD *)(v39 + v168);
    v169 = (__int64 *)v42;
    v43 = sub_648530(v158, v42);
    v44 = *(_DWORD *)(v42 + 68);
    v45 = v43 + 1;
    v165 = v44;
    v160 = *(_DWORD *)(v42 + 56);
    if ( v44 )
    {
      v46 = (_QWORD *)(v42 + 80);
      v180 = v43 + v44 + 1;
      do
      {
        sub_5F8C80((int)v187, a1, a2, (__int64)ptr, *v46 & 0xFFFFFFFFFFFFFFF8LL, v45);
        v56 = v187[0];
        if ( v186 )
        {
          v57 = *(v186 - 1);
          if ( v57 == *(v186 - 2) )
          {
            v58 = (3 * v57 + 1) >> 1;
            v59 = 8 * v58 + 8;
            if ( 8 * v57 + 8 >= (unsigned int)v59 || v57 >= v58 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v189, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v189);
              sub_233E40((__int64)&v189);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v171 = (3 * v57 + 1) >> 1;
            v60 = (unsigned int *)sub_186B300(v186 - 2, v59);
            v61 = v60 + 2;
            v186 = v60 + 2;
            v48 = v60 + 2;
            *v60 = v171;
            LODWORD(v60) = v60[1];
            v50 = &v61[2 * (unsigned int)v60];
            v49 = (_DWORD)v60 + 1;
          }
          else
          {
            v47 = v57;
            v48 = v186;
            v49 = v57 + 1;
            v50 = &v186[2 * v47];
          }
        }
        else
        {
          v114 = sub_186B270(0x18u) + 8;
          *(_QWORD *)(v114 - 8) = 2;
          v50 = (_QWORD *)v114;
          v186 = (_DWORD *)v114;
          v49 = 1;
          v48 = v186;
        }
        *v50 = v56;
        *(v48 - 1) = v49;
        v51 = (*v46 & 7LL) == 1;
        if ( v41 )
        {
          v52 = *((_DWORD *)v41 - 1);
          if ( v52 == *((_DWORD *)v41 - 2) )
          {
            v62 = (3 * v52 + 1) >> 1;
            v63 = v62 + 8;
            if ( v52 + 8 >= (unsigned int)v63 || v52 >= v62 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v189, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, &v189);
              sub_233E40((__int64)&v189);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v172 = (3 * v52 + 1) >> 1;
            v64 = (unsigned int *)sub_186B300(v41 - 8, v63);
            v41 = (bool *)(v64 + 2);
            *v64 = v172;
            LODWORD(v64) = v64[1];
            v55 = &v41[(unsigned int)v64];
            v54 = (_DWORD)v64 + 1;
          }
          else
          {
            v53 = v52;
            v54 = v52 + 1;
            v55 = &v41[v53];
          }
        }
        else
        {
          v113 = (_QWORD *)sub_186B270(0xAu);
          *v113 = 2;
          v41 = (bool *)(v113 + 1);
          v54 = 1;
          v55 = v41;
        }
        *v55 = v51;
        ++v45;
        ++v46;
        *((_DWORD *)v41 - 1) = v54;
      }
      while ( v45 != v180 );
    }
    else
    {
      v180 = v43 + 1;
    }
    if ( v165 < v160 )
    {
      v65 = &v169[v165];
      v66 = (unsigned __int64)&v169[v165 + 1 + (unsigned __int64)(v160 - 1 - v165)];
      v67 = v65[10] & 0xFFFFFFFFFFFFFFF8LL;
      if ( (unsigned __int64)v65[10] > 7 )
        ++*(_DWORD *)(v67 + 8);
      if ( !v186 )
      {
        v68 = sub_186B270(0x18u) + 8;
        *(_QWORD *)(v68 - 8) = 2;
        v69 = (_QWORD *)v68;
        v186 = (_DWORD *)v68;
        v70 = (_DWORD *)v68;
        v71 = 1;
        goto LABEL_68;
      }
      while ( 1 )
      {
        v78 = *(v186 - 1);
        if ( v78 == *(v186 - 2) )
        {
          v106 = (3 * v78 + 1) >> 1;
          v107 = 8 * v106 + 8;
          if ( 8 * v78 + 8 >= (unsigned int)v107 || v78 >= v106 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v189, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, &v189);
            sub_233E40((__int64)&v189);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v175 = (3 * v78 + 1) >> 1;
          v108 = (unsigned int *)sub_186B300(v186 - 2, v107);
          v70 = v108 + 2;
          v186 = v108 + 2;
          *v108 = v175;
          LODWORD(v108) = v108[1];
          v69 = &v70[2 * (unsigned int)v108];
          v71 = (_DWORD)v108 + 1;
LABEL_68:
          *v69 = v67;
          *(v70 - 1) = v71;
          if ( !v41 )
          {
LABEL_76:
            v79 = sub_186B270(0xAu);
            ++v65;
            *(_QWORD *)v79 = 2;
            v41 = (bool *)(v79 + 8);
            *(_BYTE *)(v79 + 8) = 0;
            *(_DWORD *)(v79 + 4) = 1;
            if ( (__int64 *)v66 == v65 )
              break;
            goto LABEL_72;
          }
        }
        else
        {
          *(_QWORD *)&v186[2 * v78] = v67;
          *(v186 - 1) = v78 + 1;
          if ( !v41 )
            goto LABEL_76;
        }
        v72 = *((_DWORD *)v41 - 1);
        if ( v72 == *((_DWORD *)v41 - 2) )
        {
          v109 = (3 * v72 + 1) >> 1;
          v110 = v109 + 8;
          if ( v72 + 8 >= (unsigned int)v110 || v72 >= v109 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v189, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, &v189);
            sub_233E40((__int64)&v189);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v111 = (unsigned int *)sub_186B300(v41 - 8, v110);
          v112 = v111[1];
          v41 = (bool *)(v111 + 2);
          *v111 = v109;
          LODWORD(v111) = v112;
          v75 = &v41[v112];
          v74 = (_DWORD)v111 + 1;
        }
        else
        {
          v73 = v72;
          v74 = v72 + 1;
          v75 = &v41[v73];
        }
        ++v65;
        *v75 = 0;
        *((_DWORD *)v41 - 1) = v74;
        if ( (__int64 *)v66 == v65 )
          break;
LABEL_72:
        v76 = v65[10];
        v67 = 0;
        if ( v76 > 7 )
        {
          v77 = v76 & 0xFFFFFFFFFFFFFFF8LL;
          ++*(_DWORD *)(v77 + 8);
          v67 = v77;
        }
      }
    }
    sub_5F8C80((int)&v189, a1, a2, (__int64)ptr, v169[5], v180);
    v181 = v189;
    if ( v163 )
    {
      v80 = v190;
      v173 = *(_DWORD *)(v163 + 8);
      *(_DWORD *)(v163 + 8) = v173 - 1;
      if ( v173 == 1 )
        sub_15D7BC0(v80, v163);
    }
    v81 = *(unsigned int *)(v181 + 24);
    LODWORD(v164) = v81 - 1;
    if ( v165 )
    {
      v82 = v186;
      while ( *(_QWORD *)(*(_QWORD *)v82 + 16LL) != *(_QWORD *)(v181 + 16) )
      {
        v82 += 2;
        if ( &v186[2 * v165] == v82 )
          goto LABEL_124;
      }
      v187[0] = 1;
      v83 = *(_QWORD *)(a1 + 24);
      v187[1] = 0;
      v188[0] = 1;
      v174 = v83;
      v188[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v188);
      BYTE4(v188[0]) &= ~1u;
      LODWORD(v188[0]) = 1;
      v87 = *(_QWORD *)(a1 + 48);
      if ( !v87 )
      {
        sub_16669E0(a1 + 40);
        v87 = *(_QWORD *)(a1 + 48);
      }
      sub_166A700(v87, (unsigned int)v187, 1, v84, v85, v86);
      sub_15E1B70(*(_QWORD *)(a1 + 40));
      v88 = sub_15E1B70(v174);
      v89 = v88;
      if ( v88 )
        ++*(_DWORD *)(v88 + 8);
      if ( v186 )
      {
        v90 = *(v186 - 1);
        if ( v90 == *(v186 - 2) )
        {
          v119 = (3 * v90 + 1) >> 1;
          v120 = 8 * v119 + 8;
          if ( 8 * v90 + 8 >= (unsigned int)v120 || v90 >= v119 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v189, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, &v189);
            sub_233E40((__int64)&v189);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v176 = (3 * v90 + 1) >> 1;
          v121 = (unsigned int *)sub_186B300(v186 - 2, v120);
          v122 = v121 + 2;
          v186 = v121 + 2;
          v92 = v121 + 2;
          *v121 = v176;
          LODWORD(v121) = v121[1];
          v94 = (__int64 *)&v122[2 * (unsigned int)v121];
          v93 = (_DWORD)v121 + 1;
        }
        else
        {
          v91 = v90;
          v92 = v186;
          v93 = v90 + 1;
          v94 = (__int64 *)&v186[2 * v91];
        }
      }
      else
      {
        v150 = (_QWORD *)sub_186B270(0x18u);
        *v150 = 2;
        v186 = v150 + 1;
        v94 = v150 + 1;
        v92 = v150 + 1;
        v93 = 1;
      }
      v95 = qword_1C7F2C0;
      *v94 = v89;
      *((_DWORD *)v92 - 1) = v93;
      sub_182CBA0(v95, v187);
      sub_182CBA0(v95, v188);
      if ( v41 )
      {
        v96 = *((_DWORD *)v41 - 1);
        if ( v96 == *((_DWORD *)v41 - 2) )
        {
          v115 = (3 * v96 + 1) >> 1;
          v116 = v115 + 8;
          if ( v96 + 8 >= (unsigned int)v116 || v96 >= v115 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v189, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v189);
            sub_233E40((__int64)&v189);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v117 = (unsigned int *)sub_186B300(v41 - 8, v116);
          v118 = v117[1];
          v41 = (bool *)(v117 + 2);
          *v117 = v115;
          LODWORD(v117) = v118;
          v99 = &v41[v118];
          v98 = (_DWORD)v117 + 1;
        }
        else
        {
          v97 = v96;
          v98 = v96 + 1;
          v99 = &v41[v97];
        }
        *v99 = 0;
        *((_DWORD *)v41 - 1) = v98;
        v100 = (_DWORD)v169 + 72;
      }
      else
      {
        v151 = sub_186B270(0xAu);
        *(_BYTE *)(v151 + 8) = 0;
        v41 = (bool *)(v151 + 8);
        *(_QWORD *)v151 = 0x100000002LL;
        v100 = (_DWORD)v169 + 72;
      }
      goto LABEL_95;
    }
LABEL_124:
    v166 = *(_QWORD *)(a1 + 24);
    v187[0] = v166;
    if ( (_DWORD)v81 )
    {
      v123 = *(_QWORD *)(v181 + 32);
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      v124 = (_QWORD *)sub_186B270(0x18u);
      v125 = v124 + 1;
      *v124 = 2;
      v126 = 1;
      v127 = v181 + 8 * v81;
      v128 = v181;
      v129 = v125;
      while ( 1 )
      {
        v128 += 8;
        *v125 = v123;
        *((_DWORD *)v129 - 1) = v126;
        if ( v128 == v127 )
          break;
        while ( 1 )
        {
          v123 = *(_QWORD *)(v128 + 32);
          if ( v123 )
            ++*(_DWORD *)(v123 + 8);
          v130 = *((_DWORD *)v129 - 1);
          if ( v130 == *((_DWORD *)v129 - 2) )
            break;
          v128 += 8;
          v129[v130] = v123;
          *((_DWORD *)v129 - 1) = v130 + 1;
          if ( v128 == v127 )
            goto LABEL_133;
        }
        v146 = (3 * v130 + 1) >> 1;
        v147 = 8 * v146 + 8;
        if ( 8 * v130 + 8 >= (unsigned int)v147 || v130 >= v146 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v189, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v189);
          sub_233E40((__int64)&v189);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v178 = (3 * v130 + 1) >> 1;
        v148 = (unsigned int *)sub_186B300(v129 - 1, v147);
        v129 = v148 + 2;
        *v148 = v178;
        LODWORD(v148) = v148[1];
        v125 = &v129[(unsigned int)v148];
        v126 = (_DWORD)v148 + 1;
      }
    }
    else
    {
      v129 = nullptr;
    }
LABEL_133:
    v189 = 0;
    v190 = 0;
    v191[0] = 1;
    v191[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v191);
    BYTE4(v191[0]) &= ~1u;
    LODWORD(v191[0]) = 1;
    v134 = *(_QWORD *)(a1 + 48);
    if ( !v134 )
    {
      sub_16669E0(a1 + 40);
      v134 = *(_QWORD *)(a1 + 48);
    }
    v135 = sub_166A700(v134, (unsigned int)&v189, 1, v131, v132, v133);
    v136 = &v129[(unsigned int)v164];
    if ( v135 )
      ++*(_DWORD *)(v135 + 8);
    v137 = *v136;
    if ( *v136 )
    {
      v15 = (*(_DWORD *)(v137 + 8))-- == 1;
      if ( v15 )
      {
        v164 = v135;
        *(_QWORD *)v179 = v136;
        sub_15D7BC0(v166, v137);
        v135 = v164;
        v136 = *(__int64 **)v179;
      }
    }
    v138 = qword_1C7F2C0;
    *v136 = v135;
    sub_182CBA0(v138, &v189);
    sub_182CBA0(v138, v191);
    if ( v129 )
      v141 = *((_DWORD *)v129 - 1);
    else
      v141 = 0;
    v142 = sub_15DC610(
             *(_QWORD *)(a1 + 24),
             *(_QWORD *)(v181 + 16),
             v141,
             (int)v129,
             v139,
             v140,
             v157,
             v158,
             v159,
             (int)&v189,
             v161,
             v162,
             v164,
             v166,
             v168,
             v169);
    v163 = v142;
    if ( v142 )
      ++*(_DWORD *)(v142 + 8);
    v177 = *(_DWORD *)(v181 + 8);
    *(_DWORD *)(v181 + 8) = v177 - 1;
    if ( v177 == 1 )
      sub_15D7BC0(v161, v181);
    if ( v129 )
    {
      v143 = v129;
      v144 = (unsigned __int64)&v129[*((unsigned int *)v129 - 1)];
      if ( (unsigned __int64)v129 < v144 )
      {
        do
        {
          while ( 1 )
          {
            v145 = *v143;
            if ( *v143 )
            {
              v15 = (*(_DWORD *)(v145 + 8))-- == 1;
              if ( v15 )
                break;
            }
            if ( (unsigned __int64)++v143 >= v144 )
              goto LABEL_153;
          }
          ++v143;
          sub_15D7BC0(v167, v145);
        }
        while ( (unsigned __int64)v143 < v144 );
      }
LABEL_153:
      sub_186B220(v129 - 1);
    }
    v100 = v170 + 72;
    if ( v186 )
    {
      v181 = v163;
LABEL_95:
      v101 = *(v186 - 1);
      v163 = v181;
      goto LABEL_96;
    }
    v101 = 0;
LABEL_96:
    v102 = sub_62C680(v159, v163, v101, (_DWORD)v186, (_DWORD)v41, v100, 1);
    if ( v102 )
      sub_62A000(v159, v102);
    if ( v162 )
      sub_62A410(v159, v162);
    sub_63DAD0(ptr, v102, a3);
    v168 += 8;
    if ( v157 == v168 )
      break;
    if ( v186 )
    {
      v103 = (__int64 *)v186;
      v104 = (unsigned __int64)&v186[2 * *(v186 - 1)];
      if ( (unsigned __int64)v186 < v104 )
      {
        do
        {
          while ( 1 )
          {
            v105 = *v103;
            if ( *v103 )
            {
              v15 = (*(_DWORD *)(v105 + 8))-- == 1;
              if ( v15 )
                break;
            }
            if ( (unsigned __int64)++v103 >= v104 )
              goto LABEL_108;
          }
          sub_15D7BC0(v161, v105);
          ++v103;
        }
        while ( (unsigned __int64)v103 < v104 );
      }
LABEL_108:
      *(v186 - 1) = 0;
    }
    v162 = v102;
    v39 = *(_QWORD *)(a2 + 24);
  }
  if ( v41 )
    sub_186B220(v41 - 8);
  if ( v163 )
  {
    v185 = *(_DWORD *)(v163 + 8);
    *(_DWORD *)(v163 + 8) = v185 - 1;
    if ( v185 == 1 )
      sub_15D7BC0(v161, v163);
  }
  v152 = (__int64 *)v186;
  if ( v186 )
  {
    v153 = (unsigned __int64)&v186[2 * *(v186 - 1)];
    if ( (unsigned __int64)v186 < v153 )
    {
      do
      {
        v154 = *v152;
        if ( *v152 )
        {
          v15 = (*(_DWORD *)(v154 + 8))-- == 1;
          if ( v15 )
            sub_15D7BC0(v161, v154);
        }
        ++v152;
      }
      while ( (unsigned __int64)v152 < v153 );
    }
    sub_186B220(v186 - 2);
  }
  if ( v102 )
    sub_62A410(v159, v102);
  return ptr;
}

