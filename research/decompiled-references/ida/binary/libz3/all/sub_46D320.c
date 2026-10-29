__int64 __fastcall sub_46D320(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // r15
  char **v4; // r15
  char **v5; // r15
  char **v6; // r15
  char **v7; // r12
  char **v8; // r15
  unsigned int v11; // r13d
  __int64 v12; // rsi
  int v13; // edx
  __int64 result; // rax
  unsigned int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  _QWORD *v24; // rax
  __int64 v25; // r15
  _QWORD *v26; // rdx
  int v27; // eax
  _DWORD *v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // r14
  __int64 v31; // r14
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r15
  _QWORD *v37; // r13
  int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // r8d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rdx
  _DWORD *v45; // rdi
  unsigned int v46; // r9d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 *v51; // r15
  __int64 v52; // r14
  unsigned int v53; // r8d
  __int64 *v54; // rcx
  __int64 v55; // rsi
  bool v56; // zf
  __int64 *v57; // r14
  unsigned __int64 i; // r15
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 *v61; // r15
  __int64 *v62; // r14
  __int64 v63; // rax
  unsigned int v64; // r8d
  __int64 *v65; // rcx
  __int64 v66; // rsi
  unsigned __int64 v67; // r15
  __int64 *j; // r14
  __int64 v69; // rsi
  unsigned int v70; // r8d
  __int64 v71; // r15
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rdi
  _QWORD *v85; // rdx
  unsigned int v86; // r8d
  unsigned __int64 v87; // rcx
  _QWORD *v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rdi
  __int64 v91; // rcx
  _QWORD *v92; // rsi
  int v93; // eax
  _QWORD *v94; // rdx
  unsigned int v95; // ecx
  unsigned __int64 v96; // r15
  __int64 *v97; // r14
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // r14
  _QWORD *v101; // rcx
  int v102; // eax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rsi
  int v110; // ecx
  __int64 *v111; // rbx
  unsigned __int64 v112; // r14
  __int64 v113; // rsi
  __int64 *v114; // rbx
  __int64 v115; // rax
  unsigned __int64 v116; // r14
  __int64 v117; // rsi
  _QWORD *v118; // rax
  int v119; // r14d
  int v120; // r13d
  __int64 v121; // rcx
  int v122; // edx
  _QWORD *v123; // rcx
  _QWORD *v124; // rdx
  __int64 v125; // rax
  _DWORD *v126; // rax
  unsigned int v127; // edx
  unsigned int v128; // ecx
  size_t v129; // rsi
  unsigned int *v130; // rdx
  __int64 v131; // rcx
  unsigned int v132; // ecx
  size_t v133; // rsi
  unsigned int *v134; // rax
  _DWORD *v135; // rdx
  __int64 v136; // rax
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  unsigned int v139; // r9d
  size_t v140; // rsi
  unsigned int *v141; // rax
  __int64 v142; // rsi
  unsigned int v143; // r15d
  size_t v144; // rsi
  unsigned int *v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rcx
  _QWORD *v148; // rax
  _QWORD *v149; // rax
  __int64 *v150; // [rsp+0h] [rbp-E0h]
  __int64 v151; // [rsp+8h] [rbp-D8h]
  __int64 *v152; // [rsp+10h] [rbp-D0h]
  __int64 v153; // [rsp+18h] [rbp-C8h]
  __int64 v154; // [rsp+20h] [rbp-C0h]
  int v155; // [rsp+2Ch] [rbp-B4h]
  __int64 v156; // [rsp+30h] [rbp-B0h]
  unsigned int v157; // [rsp+30h] [rbp-B0h]
  unsigned int v158; // [rsp+30h] [rbp-B0h]
  __int64 v159; // [rsp+38h] [rbp-A8h]
  unsigned int v160; // [rsp+38h] [rbp-A8h]
  __int64 v161; // [rsp+38h] [rbp-A8h]
  __int64 *v162; // [rsp+38h] [rbp-A8h]
  unsigned int v163; // [rsp+38h] [rbp-A8h]
  __int64 *v164; // [rsp+38h] [rbp-A8h]
  unsigned int v166; // [rsp+48h] [rbp-98h]
  unsigned __int64 v167; // [rsp+48h] [rbp-98h]
  __int64 v168; // [rsp+48h] [rbp-98h]
  unsigned int v169; // [rsp+50h] [rbp-90h]
  __int64 v170; // [rsp+50h] [rbp-90h]
  _QWORD *v171; // [rsp+50h] [rbp-90h]
  unsigned int v172; // [rsp+50h] [rbp-90h]
  __int64 v173; // [rsp+50h] [rbp-90h]
  __int64 v174; // [rsp+50h] [rbp-90h]
  unsigned int v175; // [rsp+50h] [rbp-90h]
  __int64 v176; // [rsp+50h] [rbp-90h]
  unsigned __int64 v177; // [rsp+58h] [rbp-88h]
  unsigned int v178; // [rsp+58h] [rbp-88h]
  unsigned int v179; // [rsp+58h] [rbp-88h]
  __int64 v180[10]; // [rsp+90h] [rbp-50h] BYREF

  v155 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v118 = *(_QWORD **)(a1 + 160);
  if ( v118 )
    v119 = *((_DWORD *)v118 - 1);
  else
    v119 = 0;
  if ( v155 )
  {
    v120 = 0;
    while ( 1 )
    {
      if ( v118 )
      {
        v127 = *((_DWORD *)v118 - 1);
        if ( v127 == *((_DWORD *)v118 - 2) )
        {
          v128 = (3 * v127 + 1) >> 1;
          v129 = 8 * v128 + 8;
          v178 = v128;
          if ( 8 * v127 + 8 >= (unsigned int)v129 || v127 >= v128 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v180, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v180);
            sub_233E40((__int64)v180);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v130 = (unsigned int *)sub_186B300(v118 - 1, v129);
          v118 = v130 + 2;
          *v130 = v178;
          v131 = v130[1];
          *(_QWORD *)(a1 + 160) = v130 + 2;
          LODWORD(v130) = v131;
          v123 = &v118[v131];
          v122 = (_DWORD)v130 + 1;
        }
        else
        {
          v121 = v127;
          v122 = v127 + 1;
          v123 = &v118[v121];
        }
      }
      else
      {
        v137 = (_QWORD *)sub_186B270(0x18u);
        v122 = 1;
        *v137 = 2;
        v118 = v137 + 1;
        *(_QWORD *)(a1 + 160) = v118;
        v123 = v118;
      }
      *v123 = 0;
      *((_DWORD *)v118 - 1) = v122;
      v124 = *(_QWORD **)(a1 + 528);
      if ( !v124 )
        break;
      v125 = *((unsigned int *)v124 - 1);
      if ( (_DWORD)v125 != *((_DWORD *)v124 - 2) )
      {
        v126 = (_DWORD *)v124 + v125;
        goto LABEL_162;
      }
      v132 = (unsigned int)(3 * v125 + 1) >> 1;
      v133 = 4 * v132 + 8;
      v179 = v132;
      if ( 4 * (int)v125 + 8 >= (unsigned int)v133 || (unsigned int)v125 >= v132 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v180, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v180);
        sub_233E40((__int64)v180);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v120;
      v134 = (unsigned int *)sub_186B300(v124 - 1, v133);
      v135 = v134 + 2;
      *v134 = v179;
      v136 = v134[1];
      *(_QWORD *)(a1 + 528) = v135;
      v135[v136] = v119;
      ++*(v135 - 1);
      if ( v120 == v155 )
        goto LABEL_172;
LABEL_163:
      v118 = *(_QWORD **)(a1 + 160);
    }
    v138 = (_QWORD *)sub_186B270(0x10u);
    v124 = v138 + 1;
    *v138 = 2;
    *(_QWORD *)(a1 + 528) = v138 + 1;
    v126 = v138 + 1;
LABEL_162:
    ++v120;
    *v126 = v119;
    ++*((_DWORD *)v124 - 1);
    if ( v120 == v155 )
      goto LABEL_172;
    goto LABEL_163;
  }
LABEL_172:
  *(_DWORD *)(a1 + 128) += v155;
LABEL_2:
  v11 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v15 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v15 >= v11 )
      break;
    if ( v15 )
    {
      v16 = *(_DWORD *)(a2 + 72);
      v17 = v15 - 1;
      if ( v16 < v15 )
        v17 = (unsigned int)v17 - v16;
      v12 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + a2 + 8 * v17 + 80);
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 24);
    }
    v13 = ((v15 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v13;
    result = sub_46B680(a1, v12, ((unsigned __int8)v13 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v18 = *(unsigned int *)(a2 + 20);
  v19 = *(_QWORD *)(a1 + 8);
  v152 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v20 = *(_QWORD *)(a1 + 8);
  v166 = *(_DWORD *)(a2 + 72);
  v151 = *v152;
  v154 = v20;
  v169 = *(_DWORD *)(a2 + 76);
  v21 = 16 * v18;
  if ( v166 )
  {
    v22 = v21 + a2;
    v23 = *(_QWORD *)(v21 + a2 + 80);
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    v24 = (_QWORD *)sub_186B270(0x18u);
    *v24 = 2;
    v156 = v166;
    v25 = a2 + 8 * (v166 + 2 * v18);
    v26 = v24 + 1;
    v27 = 1;
    v177 = (unsigned __int64)v26;
    v28 = v26;
    while ( 1 )
    {
      v22 += 8;
      *v26 = v23;
      *(v28 - 1) = v27;
      if ( v22 == v25 )
        break;
      while ( 1 )
      {
        v23 = *(_QWORD *)(v22 + 80);
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        v29 = *(_DWORD *)(v177 - 4);
        if ( v29 == *(_DWORD *)(v177 - 8) )
          break;
        v22 += 8;
        *(_QWORD *)(v177 + 8LL * v29) = v23;
        *(_DWORD *)(v177 - 4) = v29 + 1;
        if ( v22 == v25 )
          goto LABEL_21;
      }
      v41 = (3 * v29 + 1) >> 1;
      v42 = 8 * v41 + 8;
      if ( 8 * v29 + 8 >= (unsigned int)v42 || v29 >= v41 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v180, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v180);
        sub_233E40((__int64)v180);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v160 = (3 * v29 + 1) >> 1;
      v43 = (unsigned int *)sub_186B300((void *)(v177 - 8), v42);
      v44 = v43[1];
      v45 = v43 + 2;
      v177 = (unsigned __int64)(v43 + 2);
      v28 = v43 + 2;
      *v43 = v160;
      LODWORD(v43) = v44;
      v26 = &v45[2 * v44];
      v27 = (_DWORD)v43 + 1;
    }
LABEL_21:
    v30 = *(_QWORD *)(a1 + 8);
    v21 = 16LL * *(unsigned int *)(a2 + 20);
    v153 = v30;
    if ( !v169 )
    {
      v37 = nullptr;
      v150 = v152 + 1;
      v50 = v166;
      goto LABEL_38;
    }
  }
  else
  {
    v153 = v19;
    v177 = 0;
    if ( !v169 )
    {
      v70 = 0;
      v37 = nullptr;
      goto LABEL_75;
    }
  }
  v31 = a2 + v21;
  v32 = *(_QWORD *)(a2 + v21 + 80);
  if ( v32 )
    ++*(_DWORD *)(v32 + 8);
  v159 = v32;
  v33 = (_QWORD *)sub_186B270(0x18u);
  v34 = v33 + 1;
  v35 = v159;
  *v33 = 2;
  v36 = 0;
  v37 = v33 + 1;
  v38 = 1;
  while ( 1 )
  {
    *v34 = v35;
    ++v36;
    *((_DWORD *)v37 - 1) = v38;
    if ( (unsigned int)v36 >= v169 )
      break;
    v35 = *(_QWORD *)(v31 + 8 * v36 + 80);
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    v39 = *((_DWORD *)v37 - 1);
    if ( v39 == *((_DWORD *)v37 - 2) )
    {
      v46 = (3 * v39 + 1) >> 1;
      v47 = 8 * v46 + 8;
      if ( 8 * v39 + 8 >= (unsigned int)v47 || v39 >= v46 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v180, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v180);
        sub_233E40((__int64)v180);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v157 = (3 * v39 + 1) >> 1;
      v161 = v35;
      v48 = (unsigned int *)sub_186B300(v37 - 1, v47);
      v49 = v48[1];
      v37 = v48 + 2;
      v35 = v161;
      *v48 = v157;
      LODWORD(v48) = v49;
      v34 = &v37[v49];
      v38 = (_DWORD)v48 + 1;
    }
    else
    {
      v40 = v39;
      v38 = v39 + 1;
      v34 = &v37[v40];
    }
  }
  v150 = v152 + 1;
  v50 = v166;
  v156 = v166;
  if ( v166 )
  {
    v30 = *(_QWORD *)(a1 + 8);
LABEL_38:
    v51 = v152;
    v166 = 0;
    v162 = &v152[v50];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v30, v51[1]) )
      {
        v52 = v51[1];
        v53 = v166 + 1;
        v54 = (__int64 *)(v177 + 8LL * v166);
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        v55 = *v54;
        if ( *v54 )
        {
          v56 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v56 )
          {
            sub_15D7BC0(v154, v55);
            v54 = (__int64 *)(v177 + 8LL * v166);
            v53 = v166 + 1;
          }
        }
        ++v51;
        *v54 = v52;
        v166 = v53;
        if ( v51 == v162 )
        {
LABEL_48:
          if ( v177 )
          {
            v50 = v166;
            goto LABEL_50;
          }
LABEL_57:
          if ( v169 )
            goto LABEL_58;
          goto LABEL_67;
        }
      }
      else if ( ++v51 == v162 )
      {
        goto LABEL_48;
      }
      v30 = *(_QWORD *)(a1 + 8);
    }
  }
  v156 = 0;
  if ( v177 )
  {
LABEL_50:
    v57 = (__int64 *)(v177 + 8 * v50);
    for ( i = v177 + 8LL * *(unsigned int *)(v177 - 4); (unsigned __int64)v57 < i; ++v57 )
    {
      while ( 1 )
      {
        v59 = *v57;
        if ( *v57 )
        {
          v56 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v56 )
            break;
        }
        if ( (unsigned __int64)++v57 >= i )
          goto LABEL_56;
      }
      sub_15D7BC0(v154, v59);
    }
LABEL_56:
    *(_DWORD *)(v177 - 4) = v166;
    goto LABEL_57;
  }
LABEL_58:
  v60 = v169;
  v169 = 0;
  v61 = &v150[v156];
  v62 = &v150[v156 + v60];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v61) )
    {
      if ( ++v61 == v62 )
        goto LABEL_67;
    }
    v63 = *v61;
    v64 = v169 + 1;
    v65 = &v37[v169];
    if ( *v61 )
      ++*(_DWORD *)(v63 + 8);
    v66 = *v65;
    if ( *v65 )
    {
      v56 = (*(_DWORD *)(v66 + 8))-- == 1;
      if ( v56 )
      {
        v158 = v169 + 1;
        v164 = &v37[v169];
        v173 = v63;
        sub_15D7BC0(v153, v66);
        v64 = v158;
        v65 = v164;
        v63 = v173;
      }
    }
    ++v61;
    *v65 = v63;
    v169 = v64;
  }
  while ( v61 != v62 );
LABEL_67:
  if ( v37 )
  {
    v67 = (unsigned __int64)&v37[*((unsigned int *)v37 - 1)];
    for ( j = &v37[v169]; (unsigned __int64)j < v67; ++j )
    {
      while ( 1 )
      {
        v69 = *j;
        if ( *j )
        {
          v56 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v56 )
            break;
        }
        if ( (unsigned __int64)++j >= v67 )
          goto LABEL_74;
      }
      sub_15D7BC0(v153, v69);
    }
LABEL_74:
    v20 = *(_QWORD *)(a1 + 8);
    *((_DWORD *)v37 - 1) = v169;
    v70 = v169;
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 8);
    v70 = v169;
  }
LABEL_75:
  v71 = sub_15DBA30(v20, a2, v166, v177, v70, (_DWORD)v37, v151);
  v72 = *(_QWORD *)(a1 + 496);
  v73 = *(_QWORD *)(a1 + 504);
  if ( v71 )
  {
    ++*(_DWORD *)(v71 + 8);
    if ( v72 )
    {
      v56 = (*(_DWORD *)(v72 + 8))-- == 1;
      if ( v56 )
        sub_15D7BC0(v73, v72);
    }
    *(_QWORD *)(a1 + 496) = 0;
    if ( a2 == v71 )
      goto LABEL_93;
  }
  else
  {
    if ( v72 )
    {
      v56 = (*(_DWORD *)(v72 + 8))-- == 1;
      if ( v56 )
        sub_15D7BC0(v73, v72);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  v74 = *(_QWORD *)(a1 + 8);
  v75 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  if ( v75 )
  {
    ++*(_DWORD *)(v75 + 8);
    *(_QWORD *)(a1 + 496) = v75;
    v76 = sub_15DE700(v74);
    v77 = v76;
    if ( v76 )
      ++*(_DWORD *)(v76 + 8);
    v78 = *(_QWORD *)(a1 + 496);
    if ( v78 )
    {
      v79 = *(_QWORD *)(a1 + 504);
      v56 = (*(_DWORD *)(v78 + 8))-- == 1;
      if ( v56 )
      {
        v170 = v76;
        sub_15D7BC0(v79, v78);
        v77 = v170;
      }
    }
    *(_QWORD *)(a1 + 496) = v77;
    v80 = sub_15DE750(*(_QWORD *)(a1 + 8));
  }
  else
  {
    *(_QWORD *)(a1 + 496) = 0;
    v80 = sub_15DE370(v74);
  }
  if ( v80 )
    ++*(_DWORD *)(v80 + 8);
  v81 = *(_QWORD *)(a1 + 496);
  if ( v81 )
  {
    v82 = *(_QWORD *)(a1 + 504);
    v56 = (*(_DWORD *)(v81 + 8))-- == 1;
    if ( v56 )
    {
      v174 = v80;
      sub_15D7BC0(v82, v81);
      v80 = v174;
    }
  }
  *(_QWORD *)(a1 + 496) = v80;
  if ( v71 )
LABEL_93:
    ++*(_DWORD *)(v71 + 8);
  v83 = *(_QWORD *)(a1 + 480);
  if ( v83 )
  {
    v84 = *(_QWORD *)(a1 + 488);
    v56 = (*(_DWORD *)(v83 + 8))-- == 1;
    if ( v56 )
      sub_15D7BC0(v84, v83);
  }
  v85 = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v71;
  if ( !v85 )
    goto LABEL_184;
  v86 = *(_DWORD *)(a3 + 12);
  v87 = (unsigned __int64)&v85[*((unsigned int *)v85 - 1)];
  v88 = &v85[v86];
  if ( (unsigned __int64)v88 >= v87 )
    goto LABEL_105;
  do
  {
    while ( 1 )
    {
      v89 = *v88;
      if ( *v88 )
      {
        v90 = *(_QWORD *)(a1 + 80);
        v56 = (*(_DWORD *)(v89 + 8))-- == 1;
        if ( v56 )
          break;
      }
      if ( (unsigned __int64)++v88 >= v87 )
        goto LABEL_104;
    }
    v163 = v86;
    v167 = v87;
    v171 = v88;
    sub_15D7BC0(v90, v89);
    v87 = v167;
    v86 = v163;
    v88 = v171 + 1;
  }
  while ( (unsigned __int64)(v171 + 1) < v167 );
LABEL_104:
  v85 = *(_QWORD **)(a1 + 88);
  if ( v85 )
  {
LABEL_105:
    v91 = *(_QWORD *)(a1 + 496);
    *((_DWORD *)v85 - 1) = v86;
    if ( v91 )
    {
      ++*(_DWORD *)(v91 + 8);
      v86 = *((_DWORD *)v85 - 1);
    }
    if ( *((_DWORD *)v85 - 2) == v86 )
    {
      v139 = (3 * v86 + 1) >> 1;
      v140 = 8 * v139 + 8;
      if ( 8 * v86 + 8 >= (unsigned int)v140 || v86 >= v139 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v180, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v180);
        sub_233E40((__int64)v180);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v168 = v91;
      v175 = (3 * v86 + 1) >> 1;
      v141 = (unsigned int *)sub_186B300(v85 - 1, v140);
      v142 = v141[1];
      v85 = v141 + 2;
      *(_QWORD *)(a1 + 88) = v141 + 2;
      v91 = v168;
      *v141 = v175;
      LODWORD(v141) = v142;
      v92 = &v85[v142];
      v93 = (_DWORD)v141 + 1;
    }
    else
    {
      v92 = &v85[*((unsigned int *)v85 - 1)];
      v93 = *((_DWORD *)v85 - 1) + 1;
    }
  }
  else
  {
LABEL_184:
    v147 = *(_QWORD *)(a1 + 496);
    if ( v147 )
      ++*(_DWORD *)(v147 + 8);
    v176 = v147;
    v148 = (_QWORD *)sub_186B270(0x18u);
    v85 = v148 + 1;
    *v148 = 2;
    v91 = v176;
    v93 = 1;
    *(_QWORD *)(a1 + 88) = v85;
    v92 = v85;
  }
  *v92 = v91;
  *((_DWORD *)v85 - 1) = v93;
  if ( v71 )
  {
    v56 = (*(_DWORD *)(v71 + 8))-- == 1;
    if ( v56 )
      sub_15D7BC0(v20, v71);
  }
  v94 = *(_QWORD **)(a1 + 56);
  if ( !v94 )
    goto LABEL_187;
  v95 = *(_DWORD *)(a3 + 12);
  v96 = (unsigned __int64)&v94[*((unsigned int *)v94 - 1)];
  v97 = &v94[v95];
  if ( (unsigned __int64)v97 >= v96 )
    goto LABEL_120;
  do
  {
    while ( 1 )
    {
      v98 = *v97;
      if ( *v97 )
      {
        v99 = *(_QWORD *)(a1 + 48);
        v56 = (*(_DWORD *)(v98 + 8))-- == 1;
        if ( v56 )
          break;
      }
      if ( (unsigned __int64)++v97 >= v96 )
        goto LABEL_119;
    }
    v172 = v95;
    sub_15D7BC0(v99, v98);
    ++v97;
    v95 = v172;
  }
  while ( (unsigned __int64)v97 < v96 );
LABEL_119:
  v94 = *(_QWORD **)(a1 + 56);
  if ( v94 )
  {
LABEL_120:
    v100 = *(_QWORD *)(a1 + 480);
    *((_DWORD *)v94 - 1) = v95;
    if ( v100 )
    {
      ++*(_DWORD *)(v100 + 8);
      v95 = *((_DWORD *)v94 - 1);
    }
    if ( *((_DWORD *)v94 - 2) == v95 )
    {
      v143 = (3 * v95 + 1) >> 1;
      v144 = 8 * v143 + 8;
      if ( 8 * v95 + 8 >= (unsigned int)v144 || v95 >= v143 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v180, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v180);
        sub_233E40((__int64)v180);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v145 = (unsigned int *)sub_186B300(v94 - 1, v144);
      v146 = v145[1];
      v94 = v145 + 2;
      *v145 = v143;
      *(_QWORD *)(a1 + 56) = v145 + 2;
      LODWORD(v145) = v146;
      v101 = &v94[v146];
      v102 = (_DWORD)v145 + 1;
    }
    else
    {
      v101 = &v94[*((unsigned int *)v94 - 1)];
      v102 = *((_DWORD *)v94 - 1) + 1;
    }
  }
  else
  {
LABEL_187:
    v100 = *(_QWORD *)(a1 + 480);
    if ( v100 )
      ++*(_DWORD *)(v100 + 8);
    v149 = (_QWORD *)sub_186B270(0x18u);
    v94 = v149 + 1;
    *v149 = 2;
    v102 = 1;
    *(_QWORD *)(a1 + 56) = v94;
    v101 = v94;
  }
  *v101 = v100;
  *((_DWORD *)v94 - 1) = v102;
  v103 = *(_QWORD *)(a1 + 160);
  if ( v103 )
    *(_DWORD *)(v103 - 4) -= v155;
  v104 = *(_QWORD *)(a1 + 528);
  if ( v104 )
    *(_DWORD *)(v104 - 4) -= v155;
  sub_15844D0(a1);
  v105 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, v105, *(_QWORD *)(a1 + 496));
    v105 = *(_QWORD *)(a1 + 480);
  }
  if ( v105 )
  {
    v106 = *(_QWORD *)(a1 + 488);
    v56 = (*(_DWORD *)(v105 + 8))-- == 1;
    if ( v56 )
      sub_15D7BC0(v106, v105);
  }
  v107 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v107 && (v108 = *(_QWORD *)(a1 + 504), v56 = *(_DWORD *)(v107 + 8) == 1, --*(_DWORD *)(v107 + 8), v56) )
  {
    sub_15D7BC0(v108, v107);
    v109 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v109 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v110 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v110 - 1;
  if ( a2 != v109 && v110 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v110 - 2) + 8) |= 2u;
  if ( v37 )
  {
    v111 = v37;
    if ( v37 < &v37[*((unsigned int *)v37 - 1)] )
    {
      v112 = (unsigned __int64)&v37[*((unsigned int *)v37 - 1)];
      do
      {
        while ( 1 )
        {
          v113 = *v111;
          if ( *v111 )
          {
            v56 = (*(_DWORD *)(v113 + 8))-- == 1;
            if ( v56 )
              break;
          }
          if ( (unsigned __int64)++v111 >= v112 )
            goto LABEL_146;
        }
        ++v111;
        sub_15D7BC0(v153, v113);
      }
      while ( (unsigned __int64)v111 < v112 );
    }
LABEL_146:
    result = sub_186B220(v37 - 1);
  }
  v114 = (__int64 *)v177;
  if ( v177 )
  {
    v115 = *(unsigned int *)(v177 - 4);
    if ( v177 < v177 + 8 * v115 )
    {
      v116 = v177 + 8 * v115;
      do
      {
        v117 = *v114;
        if ( *v114 )
        {
          v56 = (*(_DWORD *)(v117 + 8))-- == 1;
          if ( v56 )
            sub_15D7BC0(v154, v117);
        }
        ++v114;
      }
      while ( (unsigned __int64)v114 < v116 );
    }
    return sub_186B220((void *)(v177 - 8));
  }
  return result;
}

