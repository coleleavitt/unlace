__int64 __fastcall sub_D8CAA0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // r13
  __int64 v16; // r15
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // r14
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r15
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // r13
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rsi
  unsigned int v34; // r8d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rsi
  unsigned int v38; // r9d
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 *v43; // r15
  __int64 v44; // rax
  unsigned int v45; // r9d
  __int64 *v46; // r8
  __int64 v47; // rsi
  bool v48; // zf
  __int64 *v49; // r15
  unsigned __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 *v53; // r15
  __int64 v54; // rax
  unsigned int v55; // r9d
  __int64 *v56; // r8
  __int64 v57; // rsi
  unsigned __int64 v58; // rdx
  __int64 *v59; // r15
  __int64 v60; // rsi
  __int64 v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rdi
  _QWORD *v64; // rdx
  unsigned int v65; // r8d
  unsigned __int64 v66; // rcx
  __int64 *v67; // r15
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // r15
  __int64 *v71; // rcx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rsi
  int v80; // ecx
  __int64 *v81; // rbx
  unsigned __int64 v82; // r15
  __int64 v83; // rsi
  __int64 *v84; // rbx
  unsigned __int64 v85; // r15
  __int64 v86; // rsi
  _QWORD *v87; // rax
  int v88; // r14d
  int v89; // r13d
  __int64 v90; // rcx
  int v91; // edx
  _QWORD *v92; // rcx
  _QWORD *v93; // rdx
  __int64 v94; // rax
  _DWORD *v95; // rax
  unsigned int v96; // edx
  unsigned int v97; // ecx
  size_t v98; // rsi
  unsigned int *v99; // rdx
  __int64 v100; // rcx
  unsigned int v101; // ecx
  size_t v102; // rsi
  unsigned int *v103; // rax
  _DWORD *v104; // rdx
  __int64 v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rdi
  unsigned int v110; // ecx
  size_t v111; // rsi
  unsigned int *v112; // rax
  _QWORD *v113; // rax
  char **v114; // r15
  char **v115; // r15
  char **exception; // r14
  char **v117; // r15
  __int64 *v118; // [rsp+0h] [rbp-E0h]
  __int64 v119; // [rsp+8h] [rbp-D8h]
  __int64 *v120; // [rsp+10h] [rbp-D0h]
  unsigned int v121; // [rsp+10h] [rbp-D0h]
  __int64 v122; // [rsp+18h] [rbp-C8h]
  __int64 v123; // [rsp+20h] [rbp-C0h]
  int v124; // [rsp+2Ch] [rbp-B4h]
  __int64 v125; // [rsp+30h] [rbp-B0h]
  __int64 v126; // [rsp+30h] [rbp-B0h]
  __int64 *v127; // [rsp+30h] [rbp-B0h]
  __int64 v128; // [rsp+38h] [rbp-A8h]
  __int64 v129; // [rsp+38h] [rbp-A8h]
  __int64 *v130; // [rsp+38h] [rbp-A8h]
  unsigned int v131; // [rsp+38h] [rbp-A8h]
  unsigned int v133; // [rsp+48h] [rbp-98h]
  unsigned int v134; // [rsp+48h] [rbp-98h]
  __int64 *v135; // [rsp+48h] [rbp-98h]
  unsigned __int64 v136; // [rsp+48h] [rbp-98h]
  __int64 *v137; // [rsp+48h] [rbp-98h]
  unsigned __int64 v138; // [rsp+48h] [rbp-98h]
  unsigned int v139; // [rsp+50h] [rbp-90h]
  unsigned int v140; // [rsp+50h] [rbp-90h]
  __int64 v141; // [rsp+50h] [rbp-90h]
  unsigned int v142; // [rsp+58h] [rbp-88h]
  unsigned __int64 v143; // [rsp+58h] [rbp-88h]
  unsigned int v144; // [rsp+58h] [rbp-88h]
  unsigned int v145; // [rsp+58h] [rbp-88h]
  __int64 v146; // [rsp+58h] [rbp-88h]
  unsigned int v147; // [rsp+58h] [rbp-88h]
  __int64 v148[10]; // [rsp+90h] [rbp-50h] BYREF

  v124 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v87 = *(_QWORD **)(a1 + 160);
  if ( v87 )
    v88 = *((_DWORD *)v87 - 1);
  else
    v88 = 0;
  if ( v124 )
  {
    v89 = 0;
    while ( 1 )
    {
      if ( v87 )
      {
        v96 = *((_DWORD *)v87 - 1);
        if ( v96 == *((_DWORD *)v87 - 2) )
        {
          v97 = (3 * v96 + 1) >> 1;
          v98 = 8 * v97 + 8;
          v144 = v97;
          if ( 8 * v96 + 8 >= (unsigned int)v98 || v96 >= v97 )
          {
LABEL_167:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v148, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v148);
            sub_233E40((__int64)v148);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v99 = (unsigned int *)sub_186B300(v87 - 1, v98);
          v87 = v99 + 2;
          v100 = v99[1];
          *v99 = v144;
          *(_QWORD *)(a1 + 160) = v99 + 2;
          LODWORD(v99) = v100;
          v92 = &v87[v100];
          v91 = (_DWORD)v99 + 1;
        }
        else
        {
          v90 = v96;
          v91 = v96 + 1;
          v92 = &v87[v90];
        }
      }
      else
      {
        v106 = (_QWORD *)sub_186B270(0x18u);
        v91 = 1;
        *v106 = 2;
        v87 = v106 + 1;
        *(_QWORD *)(a1 + 160) = v87;
        v92 = v87;
      }
      *v92 = 0;
      *((_DWORD *)v87 - 1) = v91;
      v93 = *(_QWORD **)(a1 + 528);
      if ( !v93 )
        break;
      v94 = *((unsigned int *)v93 - 1);
      if ( (_DWORD)v94 != *((_DWORD *)v93 - 2) )
      {
        v95 = (_DWORD *)v93 + v94;
        goto LABEL_134;
      }
      v101 = (unsigned int)(3 * v94 + 1) >> 1;
      v102 = 4 * v101 + 8;
      v145 = v101;
      if ( 4 * (int)v94 + 8 >= (unsigned int)v102 || (unsigned int)v94 >= v101 )
        goto LABEL_167;
      ++v89;
      v103 = (unsigned int *)sub_186B300(v93 - 1, v102);
      v104 = v103 + 2;
      *v103 = v145;
      v105 = v103[1];
      *(_QWORD *)(a1 + 528) = v104;
      v104[v105] = v88;
      ++*(v104 - 1);
      if ( v89 == v124 )
        goto LABEL_144;
LABEL_135:
      v87 = *(_QWORD **)(a1 + 160);
    }
    v107 = (_QWORD *)sub_186B270(0x10u);
    v93 = v107 + 1;
    *v107 = 2;
    *(_QWORD *)(a1 + 528) = v107 + 1;
    v95 = v107 + 1;
LABEL_134:
    ++v89;
    *v95 = v88;
    ++*((_DWORD *)v93 - 1);
    if ( v89 == v124 )
      goto LABEL_144;
    goto LABEL_135;
  }
LABEL_144:
  *(_DWORD *)(a1 + 128) += v124;
LABEL_2:
  v5 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v9 >= v5 )
      break;
    if ( v9 )
    {
      v10 = *(_DWORD *)(a2 + 72);
      if ( v10 < v9 )
        v11 = a2 + 8LL * (v9 - v10 - 1);
      else
        v11 = a2 + 8LL * (v9 - 1);
      v6 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + v11 + 80);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 24);
    }
    v7 = ((v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_D869C0(a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v12 = *(unsigned int *)(a2 + 20);
  v120 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v142 = *(_DWORD *)(a2 + 76);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = 16 * v12;
  v119 = *v120;
  v123 = *(_QWORD *)(a1 + 8);
  v139 = *(_DWORD *)(a2 + 72);
  if ( v139 )
  {
    v15 = a2 + v14;
    v16 = *(_QWORD *)(v15 + 80);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = (_QWORD *)sub_186B270(0x18u);
    v18 = v17 + 1;
    *v17 = 2;
    v19 = 1;
    v125 = v139;
    v20 = v139 + 2 * v12;
    v21 = (unsigned __int64)v18;
    v22 = a2 + 8 * v20;
    while ( 1 )
    {
      v15 += 8;
      *v18 = v16;
      *(_DWORD *)(v21 - 4) = v19;
      if ( v22 == v15 )
        break;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v15 + 80);
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v23 = *(_DWORD *)(v21 - 4);
        if ( v23 == *(_DWORD *)(v21 - 8) )
          break;
        v15 += 8;
        *(_QWORD *)(v21 + 8LL * v23) = v16;
        *(_DWORD *)(v21 - 4) = v23 + 1;
        if ( v22 == v15 )
          goto LABEL_22;
      }
      v34 = (3 * v23 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v23 + 8 >= (unsigned int)v35 || v23 >= v34 )
      {
        v115 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v148, "Overflow encountered when expanding vector");
        *v115 = (char *)off_1C63128;
        sub_2333C0(v115 + 1, v148);
        sub_233E40((__int64)v148);
        __cxa_throw(v115, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v128 = v22;
      v133 = (3 * v23 + 1) >> 1;
      v36 = (unsigned int *)sub_186B300((void *)(v21 - 8), v35);
      v37 = v36[1];
      v21 = (unsigned __int64)(v36 + 2);
      v22 = v128;
      *v36 = v133;
      LODWORD(v36) = v37;
      v18 = (_QWORD *)(v21 + 8 * v37);
      v19 = (_DWORD)v36 + 1;
    }
LABEL_22:
    v24 = *(_QWORD *)(a1 + 8);
    v122 = v24;
    v14 = 16LL * *(unsigned int *)(a2 + 20);
    if ( !v142 )
    {
      v30 = 0;
      v130 = v120 + 1;
      v42 = v139;
      goto LABEL_39;
    }
  }
  else
  {
    v21 = 0;
    v122 = v13;
    if ( !v142 )
    {
      v30 = 0;
      goto LABEL_76;
    }
  }
  v25 = *(_QWORD *)(a2 + v14 + 80);
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v26 = (_QWORD *)sub_186B270(0x18u);
  v27 = v26 + 1;
  v28 = a2 + v14;
  *v26 = 2;
  v29 = 0;
  v30 = (unsigned __int64)(v26 + 1);
  v31 = 1;
  while ( 1 )
  {
    *v27 = v25;
    ++v29;
    *(_DWORD *)(v30 - 4) = v31;
    if ( (unsigned int)v29 >= v142 )
      break;
    v25 = *(_QWORD *)(v28 + 8 * v29 + 80);
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    v32 = *(_DWORD *)(v30 - 4);
    if ( v32 == *(_DWORD *)(v30 - 8) )
    {
      v38 = (3 * v32 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v32 + 8 >= (unsigned int)v39 || v32 >= v38 )
      {
        v117 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v148, "Overflow encountered when expanding vector");
        *v117 = (char *)off_1C63128;
        sub_2333C0(v117 + 1, v148);
        sub_233E40((__int64)v148);
        __cxa_throw(v117, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v126 = v29;
      v129 = v28;
      v134 = (3 * v32 + 1) >> 1;
      v40 = (unsigned int *)sub_186B300((void *)(v30 - 8), v39);
      v41 = v40[1];
      v30 = (unsigned __int64)(v40 + 2);
      v28 = v129;
      v29 = v126;
      *v40 = v134;
      LODWORD(v40) = v41;
      v27 = (_QWORD *)(v30 + 8 * v41);
      v31 = (_DWORD)v40 + 1;
    }
    else
    {
      v33 = v32;
      v31 = v32 + 1;
      v27 = (_QWORD *)(v30 + 8 * v33);
    }
  }
  v130 = v120 + 1;
  v42 = v139;
  v125 = v139;
  if ( v139 )
  {
    v24 = *(_QWORD *)(a1 + 8);
LABEL_39:
    v43 = v120;
    v139 = 0;
    v135 = &v120[v42];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v24, v43[1]) )
      {
        v44 = v43[1];
        v45 = v139 + 1;
        v46 = (__int64 *)(v21 + 8LL * v139);
        if ( v44 )
          ++*(_DWORD *)(v44 + 8);
        v47 = *v46;
        if ( *v46 )
        {
          v48 = (*(_DWORD *)(v47 + 8))-- == 1;
          if ( v48 )
          {
            v118 = (__int64 *)(v21 + 8LL * v139);
            v121 = v139 + 1;
            v141 = v44;
            sub_15D7BC0(v123, v47);
            v46 = v118;
            v45 = v121;
            v44 = v141;
          }
        }
        *v46 = v44;
        ++v43;
        v139 = v45;
        if ( v43 == v135 )
        {
LABEL_49:
          if ( v21 )
          {
            v42 = v139;
            goto LABEL_51;
          }
LABEL_58:
          if ( v142 )
            goto LABEL_59;
          goto LABEL_68;
        }
      }
      else if ( ++v43 == v135 )
      {
        goto LABEL_49;
      }
      v24 = *(_QWORD *)(a1 + 8);
    }
  }
  v125 = 0;
  if ( v21 )
  {
LABEL_51:
    v49 = (__int64 *)(v21 + 8 * v42);
    v50 = v21 + 8LL * *(unsigned int *)(v21 - 4);
    if ( (unsigned __int64)v49 < v50 )
    {
      do
      {
        while ( 1 )
        {
          v51 = *v49;
          if ( *v49 )
          {
            v48 = (*(_DWORD *)(v51 + 8))-- == 1;
            if ( v48 )
              break;
          }
          if ( (unsigned __int64)++v49 >= v50 )
            goto LABEL_57;
        }
        v136 = v50;
        sub_15D7BC0(v123, v51);
        v50 = v136;
        ++v49;
      }
      while ( (unsigned __int64)v49 < v136 );
    }
LABEL_57:
    *(_DWORD *)(v21 - 4) = v139;
    goto LABEL_58;
  }
LABEL_59:
  v52 = v142;
  v142 = 0;
  v53 = &v130[v125];
  v137 = &v130[v125 + v52];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v53) )
    {
      if ( ++v53 == v137 )
        goto LABEL_68;
    }
    v54 = *v53;
    v55 = v142 + 1;
    v56 = (__int64 *)(v30 + 8LL * v142);
    if ( *v53 )
      ++*(_DWORD *)(v54 + 8);
    v57 = *v56;
    if ( *v56 )
    {
      v48 = (*(_DWORD *)(v57 + 8))-- == 1;
      if ( v48 )
      {
        v127 = (__int64 *)(v30 + 8LL * v142);
        v131 = v142 + 1;
        v146 = v54;
        sub_15D7BC0(v122, v57);
        v56 = v127;
        v55 = v131;
        v54 = v146;
      }
    }
    *v56 = v54;
    ++v53;
    v142 = v55;
  }
  while ( v53 != v137 );
LABEL_68:
  if ( v30 )
  {
    v58 = v30 + 8LL * *(unsigned int *)(v30 - 4);
    v59 = (__int64 *)(v30 + 8LL * v142);
    if ( (unsigned __int64)v59 < v58 )
    {
      do
      {
        while ( 1 )
        {
          v60 = *v59;
          if ( *v59 )
          {
            v48 = (*(_DWORD *)(v60 + 8))-- == 1;
            if ( v48 )
              break;
          }
          if ( (unsigned __int64)++v59 >= v58 )
            goto LABEL_75;
        }
        v138 = v58;
        sub_15D7BC0(v122, v60);
        v58 = v138;
        ++v59;
      }
      while ( (unsigned __int64)v59 < v138 );
    }
LABEL_75:
    *(_DWORD *)(v30 - 4) = v142;
  }
LABEL_76:
  if ( (unsigned __int8)sub_D83440(
                          *(_QWORD **)(a1 + 144),
                          a2,
                          v119,
                          v21,
                          v30,
                          (__int64 *)(a1 + 480),
                          (__int64 *)(a1 + 496)) )
    goto LABEL_84;
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v61 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v139, v21, v142, v30, v119);
    if ( v61 )
      ++*(_DWORD *)(v61 + 8);
    v62 = *(_QWORD *)(a1 + 480);
    if ( v62 )
    {
      v63 = *(_QWORD *)(a1 + 488);
      v48 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v48 )
        sub_15D7BC0(v63, v62);
    }
    *(_QWORD *)(a1 + 480) = v61;
LABEL_84:
    v64 = *(_QWORD **)(a1 + 56);
    if ( !v64 )
      goto LABEL_158;
    goto LABEL_85;
  }
  v108 = *(_QWORD *)(a1 + 480);
  ++*(_DWORD *)(a2 + 8);
  if ( v108 )
  {
    v109 = *(_QWORD *)(a1 + 488);
    v48 = (*(_DWORD *)(v108 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v109, v108);
  }
  v64 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 480) = a2;
  if ( !v64 )
  {
    v70 = a2;
LABEL_159:
    ++*(_DWORD *)(v70 + 8);
    goto LABEL_160;
  }
LABEL_85:
  v65 = *(_DWORD *)(a3 + 12);
  v66 = (unsigned __int64)&v64[*((unsigned int *)v64 - 1)];
  v67 = &v64[v65];
  if ( (unsigned __int64)v67 >= v66 )
    goto LABEL_92;
  do
  {
    while ( 1 )
    {
      v68 = *v67;
      if ( *v67 )
      {
        v69 = *(_QWORD *)(a1 + 48);
        v48 = (*(_DWORD *)(v68 + 8))-- == 1;
        if ( v48 )
          break;
      }
      if ( (unsigned __int64)++v67 >= v66 )
        goto LABEL_91;
    }
    v140 = v65;
    v143 = v66;
    sub_15D7BC0(v69, v68);
    v66 = v143;
    ++v67;
    v65 = v140;
  }
  while ( (unsigned __int64)v67 < v143 );
LABEL_91:
  v64 = *(_QWORD **)(a1 + 56);
  if ( v64 )
  {
LABEL_92:
    v70 = *(_QWORD *)(a1 + 480);
    *((_DWORD *)v64 - 1) = v65;
    if ( v70 )
    {
      ++*(_DWORD *)(v70 + 8);
      v65 = *((_DWORD *)v64 - 1);
    }
    if ( *((_DWORD *)v64 - 2) == v65 )
    {
      v110 = (3 * v65 + 1) >> 1;
      v111 = 8 * v110 + 8;
      if ( 8 * v65 + 8 >= (unsigned int)v111 || v65 >= v110 )
      {
        v114 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v148, "Overflow encountered when expanding vector");
        *v114 = (char *)off_1C63128;
        sub_2333C0(v114 + 1, v148);
        sub_233E40((__int64)v148);
        __cxa_throw(v114, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v147 = (3 * v65 + 1) >> 1;
      v112 = (unsigned int *)sub_186B300(v64 - 1, v111);
      v64 = v112 + 2;
      *(_QWORD *)(a1 + 56) = v112 + 2;
      *v112 = v147;
      LODWORD(v112) = v112[1];
      v71 = &v64[(unsigned int)v112];
      v72 = (_DWORD)v112 + 1;
    }
    else
    {
      v71 = &v64[*((unsigned int *)v64 - 1)];
      v72 = *((_DWORD *)v64 - 1) + 1;
    }
    goto LABEL_96;
  }
LABEL_158:
  v70 = *(_QWORD *)(a1 + 480);
  if ( v70 )
    goto LABEL_159;
LABEL_160:
  v113 = (_QWORD *)sub_186B270(0x18u);
  v64 = v113 + 1;
  *v113 = 2;
  v72 = 1;
  *(_QWORD *)(a1 + 56) = v64;
  v71 = v64;
LABEL_96:
  *v71 = v70;
  *((_DWORD *)v64 - 1) = v72;
  v73 = *(_QWORD *)(a1 + 160);
  if ( v73 )
    *(_DWORD *)(v73 - 4) -= v124;
  v74 = *(_QWORD *)(a1 + 528);
  if ( v74 )
    *(_DWORD *)(v74 - 4) -= v124;
  sub_15844D0(a1);
  v75 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v75);
    v75 = *(_QWORD *)(a1 + 480);
  }
  if ( v75 )
  {
    v76 = *(_QWORD *)(a1 + 488);
    v48 = (*(_DWORD *)(v75 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v76, v75);
  }
  v77 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v77 && (v78 = *(_QWORD *)(a1 + 504), v48 = *(_DWORD *)(v77 + 8) == 1, --*(_DWORD *)(v77 + 8), v48) )
  {
    sub_15D7BC0(v78, v77);
    v79 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v79 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v80 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v80 - 1;
  if ( a2 != v79 && v80 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v80 - 2) + 8) |= 2u;
  if ( v30 )
  {
    v81 = (__int64 *)v30;
    if ( v30 < v30 + 8LL * *(unsigned int *)(v30 - 4) )
    {
      v82 = v30 + 8LL * *(unsigned int *)(v30 - 4);
      do
      {
        while ( 1 )
        {
          v83 = *v81;
          if ( *v81 )
          {
            v48 = (*(_DWORD *)(v83 + 8))-- == 1;
            if ( v48 )
              break;
          }
          if ( (unsigned __int64)++v81 >= v82 )
            goto LABEL_118;
        }
        ++v81;
        sub_15D7BC0(v122, v83);
      }
      while ( (unsigned __int64)v81 < v82 );
    }
LABEL_118:
    result = sub_186B220((void *)(v30 - 8));
  }
  if ( v21 )
  {
    v84 = (__int64 *)v21;
    if ( v21 < v21 + 8LL * *(unsigned int *)(v21 - 4) )
    {
      v85 = v21 + 8LL * *(unsigned int *)(v21 - 4);
      do
      {
        v86 = *v84;
        if ( *v84 )
        {
          v48 = (*(_DWORD *)(v86 + 8))-- == 1;
          if ( v48 )
            sub_15D7BC0(v123, v86);
        }
        ++v84;
      }
      while ( (unsigned __int64)v84 < v85 );
    }
    return sub_186B220((void *)(v21 - 8));
  }
  return result;
}

