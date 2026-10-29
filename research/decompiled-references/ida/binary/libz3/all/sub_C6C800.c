__int64 __fastcall sub_C6C800(__int64 a1, __int64 a2, __int64 a3)
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
  _QWORD *v21; // r14
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r15
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // r13
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
  __int64 v61; // r8
  __int64 v62; // rsi
  __int64 v63; // rdi
  _QWORD *v64; // rdx
  _QWORD *v65; // rax
  int v66; // eax
  __int64 *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rsi
  int v75; // ecx
  __int64 *v76; // rbx
  unsigned __int64 v77; // r15
  __int64 v78; // rsi
  __int64 *v79; // rbx
  unsigned __int64 v80; // r15
  __int64 v81; // rsi
  _QWORD *v82; // rax
  int v83; // r14d
  int v84; // r13d
  __int64 v85; // rcx
  int v86; // edx
  _QWORD *v87; // rcx
  _QWORD *v88; // rdx
  __int64 v89; // rax
  _DWORD *v90; // rax
  unsigned int v91; // edx
  unsigned int v92; // ecx
  size_t v93; // rsi
  unsigned int *v94; // rdx
  __int64 v95; // rcx
  unsigned int v96; // ecx
  size_t v97; // rsi
  unsigned int *v98; // rax
  _DWORD *v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rdi
  unsigned int v103; // r9d
  unsigned __int64 v104; // rcx
  __int64 *v105; // r15
  __int64 v106; // rsi
  __int64 v107; // rdi
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  unsigned int v110; // r15d
  size_t v111; // rsi
  unsigned int *v112; // rax
  __int64 v113; // rcx
  char **v114; // r15
  char **v115; // r15
  char **exception; // r14
  char **v117; // r15
  __int64 *v118; // [rsp+0h] [rbp-D0h]
  __int64 v119; // [rsp+8h] [rbp-C8h]
  __int64 *v120; // [rsp+10h] [rbp-C0h]
  unsigned int v121; // [rsp+10h] [rbp-C0h]
  __int64 v122; // [rsp+18h] [rbp-B8h]
  __int64 v123; // [rsp+20h] [rbp-B0h]
  int v124; // [rsp+2Ch] [rbp-A4h]
  __int64 v125; // [rsp+30h] [rbp-A0h]
  __int64 v126; // [rsp+30h] [rbp-A0h]
  __int64 *v127; // [rsp+30h] [rbp-A0h]
  __int64 v128; // [rsp+38h] [rbp-98h]
  __int64 v129; // [rsp+38h] [rbp-98h]
  __int64 *v130; // [rsp+38h] [rbp-98h]
  unsigned int v131; // [rsp+38h] [rbp-98h]
  unsigned int v133; // [rsp+48h] [rbp-88h]
  unsigned int v134; // [rsp+48h] [rbp-88h]
  __int64 *v135; // [rsp+48h] [rbp-88h]
  unsigned __int64 v136; // [rsp+48h] [rbp-88h]
  __int64 *v137; // [rsp+48h] [rbp-88h]
  unsigned __int64 v138; // [rsp+48h] [rbp-88h]
  unsigned int v139; // [rsp+50h] [rbp-80h]
  __int64 v140; // [rsp+50h] [rbp-80h]
  unsigned int v141; // [rsp+50h] [rbp-80h]
  unsigned int v142; // [rsp+58h] [rbp-78h]
  __int64 v143; // [rsp+58h] [rbp-78h]
  unsigned int v144; // [rsp+58h] [rbp-78h]
  unsigned int v145; // [rsp+58h] [rbp-78h]
  __int64 v146; // [rsp+58h] [rbp-78h]
  unsigned __int64 v147; // [rsp+58h] [rbp-78h]
  __int64 v148; // [rsp+58h] [rbp-78h]
  __int64 v149; // [rsp+58h] [rbp-78h]
  __int64 v150[10]; // [rsp+80h] [rbp-50h] BYREF

  v124 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v82 = *(_QWORD **)(a1 + 160);
  if ( v82 )
    v83 = *((_DWORD *)v82 - 1);
  else
    v83 = 0;
  if ( v124 )
  {
    v84 = 0;
    while ( 1 )
    {
      if ( v82 )
      {
        v91 = *((_DWORD *)v82 - 1);
        if ( v91 == *((_DWORD *)v82 - 2) )
        {
          v92 = (3 * v91 + 1) >> 1;
          v93 = 8 * v92 + 8;
          v144 = v92;
          if ( 8 * v91 + 8 >= (unsigned int)v93 || v91 >= v92 )
          {
LABEL_171:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C63CB0(v150, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v150);
            sub_233E40((__int64)v150);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v94 = (unsigned int *)sub_186B300(v82 - 1, v93);
          v82 = v94 + 2;
          v95 = v94[1];
          *v94 = v144;
          *(_QWORD *)(a1 + 160) = v94 + 2;
          LODWORD(v94) = v95;
          v87 = &v82[v95];
          v86 = (_DWORD)v94 + 1;
        }
        else
        {
          v85 = v91;
          v86 = v91 + 1;
          v87 = &v82[v85];
        }
      }
      else
      {
        v109 = (_QWORD *)sub_186B270(0x18u);
        v86 = 1;
        *v109 = 2;
        v82 = v109 + 1;
        *(_QWORD *)(a1 + 160) = v82;
        v87 = v82;
      }
      *v87 = 0;
      *((_DWORD *)v82 - 1) = v86;
      v88 = *(_QWORD **)(a1 + 528);
      if ( !v88 )
        break;
      v89 = *((unsigned int *)v88 - 1);
      if ( (_DWORD)v89 != *((_DWORD *)v88 - 2) )
      {
        v90 = (_DWORD *)v88 + v89;
        goto LABEL_123;
      }
      v96 = (unsigned int)(3 * v89 + 1) >> 1;
      v97 = 4 * v96 + 8;
      v145 = v96;
      if ( 4 * (int)v89 + 8 >= (unsigned int)v97 || (unsigned int)v89 >= v96 )
        goto LABEL_171;
      ++v84;
      v98 = (unsigned int *)sub_186B300(v88 - 1, v97);
      v99 = v98 + 2;
      *v98 = v145;
      v100 = v98[1];
      *(_QWORD *)(a1 + 528) = v99;
      v99[v100] = v83;
      ++*(v99 - 1);
      if ( v84 == v124 )
        goto LABEL_133;
LABEL_124:
      v82 = *(_QWORD **)(a1 + 160);
    }
    v108 = (_QWORD *)sub_186B270(0x10u);
    v88 = v108 + 1;
    *v108 = 2;
    *(_QWORD *)(a1 + 528) = v108 + 1;
    v90 = v108 + 1;
LABEL_123:
    ++v84;
    *v90 = v83;
    ++*((_DWORD *)v88 - 1);
    if ( v84 == v124 )
      goto LABEL_133;
    goto LABEL_124;
  }
LABEL_133:
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
    result = sub_C6B0F0((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
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
    v21 = v18;
    v22 = a2 + 8 * v20;
    while ( 1 )
    {
      v15 += 8;
      *v18 = v16;
      *((_DWORD *)v21 - 1) = v19;
      if ( v22 == v15 )
        break;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v15 + 80);
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v23 = *((_DWORD *)v21 - 1);
        if ( v23 == *((_DWORD *)v21 - 2) )
          break;
        v15 += 8;
        v21[v23] = v16;
        *((_DWORD *)v21 - 1) = v23 + 1;
        if ( v22 == v15 )
          goto LABEL_22;
      }
      v34 = (3 * v23 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v23 + 8 >= (unsigned int)v35 || v23 >= v34 )
      {
        v117 = (char **)__cxa_allocate_exception(0x28u);
        sub_C63CB0(v150, "Overflow encountered when expanding vector");
        *v117 = (char *)off_1C63128;
        sub_2333C0(v117 + 1, v150);
        sub_233E40((__int64)v150);
        __cxa_throw(v117, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v128 = v22;
      v133 = (3 * v23 + 1) >> 1;
      v36 = (unsigned int *)sub_186B300(v21 - 1, v35);
      v37 = v36[1];
      v21 = v36 + 2;
      v22 = v128;
      *v36 = v133;
      LODWORD(v36) = v37;
      v18 = &v21[v37];
      v19 = (_DWORD)v36 + 1;
    }
LABEL_22:
    v24 = *(_QWORD *)(a1 + 8);
    v122 = v24;
    v14 = 16LL * *(unsigned int *)(a2 + 20);
    if ( !v142 )
    {
      v30 = nullptr;
      v130 = v120 + 1;
      v42 = v139;
      goto LABEL_39;
    }
  }
  else
  {
    v21 = nullptr;
    v122 = v13;
    if ( !v142 )
    {
      v30 = nullptr;
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
  v30 = v26 + 1;
  v31 = 1;
  while ( 1 )
  {
    *v27 = v25;
    ++v29;
    *((_DWORD *)v30 - 1) = v31;
    if ( (unsigned int)v29 >= v142 )
      break;
    v25 = *(_QWORD *)(v28 + 8 * v29 + 80);
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    v32 = *((_DWORD *)v30 - 1);
    if ( v32 == *((_DWORD *)v30 - 2) )
    {
      v38 = (3 * v32 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v32 + 8 >= (unsigned int)v39 || v32 >= v38 )
      {
        v115 = (char **)__cxa_allocate_exception(0x28u);
        sub_C63CB0(v150, "Overflow encountered when expanding vector");
        *v115 = (char *)off_1C63128;
        sub_2333C0(v115 + 1, v150);
        sub_233E40((__int64)v150);
        __cxa_throw(v115, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v126 = v29;
      v129 = v28;
      v134 = (3 * v32 + 1) >> 1;
      v40 = (unsigned int *)sub_186B300(v30 - 1, v39);
      v41 = v40[1];
      v30 = v40 + 2;
      v28 = v129;
      v29 = v126;
      *v40 = v134;
      LODWORD(v40) = v41;
      v27 = &v30[v41];
      v31 = (_DWORD)v40 + 1;
    }
    else
    {
      v33 = v32;
      v31 = v32 + 1;
      v27 = &v30[v33];
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
        v46 = &v21[v139];
        if ( v44 )
          ++*(_DWORD *)(v44 + 8);
        v47 = *v46;
        if ( *v46 )
        {
          v48 = (*(_DWORD *)(v47 + 8))-- == 1;
          if ( v48 )
          {
            v118 = &v21[v139];
            v121 = v139 + 1;
            v140 = v44;
            sub_15D7BC0(v123, v47);
            v46 = v118;
            v45 = v121;
            v44 = v140;
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
    v49 = &v21[v42];
    v50 = (unsigned __int64)&v21[*((unsigned int *)v21 - 1)];
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
    *((_DWORD *)v21 - 1) = v139;
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
    v56 = &v30[v142];
    if ( *v53 )
      ++*(_DWORD *)(v54 + 8);
    v57 = *v56;
    if ( *v56 )
    {
      v48 = (*(_DWORD *)(v57 + 8))-- == 1;
      if ( v48 )
      {
        v127 = &v30[v142];
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
    v58 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
    v59 = &v30[v142];
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
    *((_DWORD *)v30 - 1) = v142;
  }
LABEL_76:
  if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
  {
    v101 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(a2 + 8);
    if ( v101 )
    {
      v102 = *(_QWORD *)(a1 + 488);
      v48 = (*(_DWORD *)(v101 + 8))-- == 1;
      if ( v48 )
        sub_15D7BC0(v102, v101);
      v64 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = a2;
      if ( v64 )
      {
        v61 = a2;
        goto LABEL_139;
      }
    }
    else
    {
      v64 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = a2;
      v61 = a2;
      if ( v64 )
        goto LABEL_139;
    }
    v61 = a2;
    goto LABEL_83;
  }
  v61 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v139, (_DWORD)v21, v142, (_DWORD)v30, v119);
  if ( v61 )
  {
    v62 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(v61 + 8);
    if ( v62 )
      goto LABEL_79;
    v64 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = v61;
    if ( !v64 )
      goto LABEL_83;
  }
  else
  {
    v62 = *(_QWORD *)(a1 + 480);
    if ( v62 )
    {
LABEL_79:
      v63 = *(_QWORD *)(a1 + 488);
      v48 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v48 )
      {
        v149 = v61;
        sub_15D7BC0(v63, v62);
        v61 = v149;
      }
      v64 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = v61;
      if ( !v64 )
        goto LABEL_82;
      goto LABEL_139;
    }
    *(_QWORD *)(a1 + 480) = 0;
    v64 = *(_QWORD **)(a1 + 56);
    if ( !v64 )
      goto LABEL_154;
  }
LABEL_139:
  v103 = *(_DWORD *)(a3 + 12);
  v104 = (unsigned __int64)&v64[*((unsigned int *)v64 - 1)];
  v105 = &v64[v103];
  if ( (unsigned __int64)v105 >= v104 )
    goto LABEL_146;
  do
  {
    while ( 1 )
    {
      v106 = *v105;
      if ( *v105 )
      {
        v107 = *(_QWORD *)(a1 + 48);
        v48 = (*(_DWORD *)(v106 + 8))-- == 1;
        if ( v48 )
          break;
      }
      if ( (unsigned __int64)++v105 >= v104 )
        goto LABEL_145;
    }
    v141 = v103;
    v147 = v104;
    sub_15D7BC0(v107, v106);
    v104 = v147;
    ++v105;
    v103 = v141;
  }
  while ( (unsigned __int64)v105 < v147 );
LABEL_145:
  v64 = *(_QWORD **)(a1 + 56);
  v61 = *(_QWORD *)(a1 + 480);
  if ( v64 )
  {
LABEL_146:
    *((_DWORD *)v64 - 1) = v103;
    if ( v61 )
    {
      ++*(_DWORD *)(v61 + 8);
      v103 = *((_DWORD *)v64 - 1);
    }
    if ( *((_DWORD *)v64 - 2) == v103 )
    {
      v110 = (3 * v103 + 1) >> 1;
      v111 = 8 * v110 + 8;
      if ( 8 * v103 + 8 >= (unsigned int)v111 || v103 >= v110 )
      {
        v114 = (char **)__cxa_allocate_exception(0x28u);
        sub_C63CB0(v150, "Overflow encountered when expanding vector");
        *v114 = (char *)off_1C63128;
        sub_2333C0(v114 + 1, v150);
        sub_233E40((__int64)v150);
        __cxa_throw(v114, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v148 = v61;
      v112 = (unsigned int *)sub_186B300(v64 - 1, v111);
      v113 = v112[1];
      v64 = v112 + 2;
      v61 = v148;
      *v112 = v110;
      *(_QWORD *)(a1 + 56) = v112 + 2;
      LODWORD(v112) = v113;
      v67 = &v64[v113];
      v66 = (_DWORD)v112 + 1;
    }
    else
    {
      v67 = &v64[*((unsigned int *)v64 - 1)];
      v66 = *((_DWORD *)v64 - 1) + 1;
    }
    goto LABEL_85;
  }
LABEL_82:
  if ( !v61 )
  {
LABEL_154:
    v61 = 0;
    goto LABEL_84;
  }
LABEL_83:
  ++*(_DWORD *)(v61 + 8);
LABEL_84:
  v143 = v61;
  v65 = (_QWORD *)sub_186B270(0x18u);
  v64 = v65 + 1;
  v61 = v143;
  *v65 = 2;
  v66 = 1;
  *(_QWORD *)(a1 + 56) = v64;
  v67 = v64;
LABEL_85:
  *v67 = v61;
  *((_DWORD *)v64 - 1) = v66;
  v68 = *(_QWORD *)(a1 + 160);
  if ( v68 )
    *(_DWORD *)(v68 - 4) -= v124;
  v69 = *(_QWORD *)(a1 + 528);
  if ( v69 )
    *(_DWORD *)(v69 - 4) -= v124;
  sub_15844D0(a1);
  v70 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v70);
    v70 = *(_QWORD *)(a1 + 480);
  }
  if ( v70 )
  {
    v71 = *(_QWORD *)(a1 + 488);
    v48 = (*(_DWORD *)(v70 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v71, v70);
  }
  v72 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v72 && (v73 = *(_QWORD *)(a1 + 504), v48 = *(_DWORD *)(v72 + 8) == 1, --*(_DWORD *)(v72 + 8), v48) )
  {
    sub_15D7BC0(v73, v72);
    v74 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v74 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v75 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v75 - 1;
  if ( a2 != v74 && v75 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v75 - 2) + 8) |= 2u;
  if ( v30 )
  {
    v76 = v30;
    if ( v30 < &v30[*((unsigned int *)v30 - 1)] )
    {
      v77 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
      do
      {
        while ( 1 )
        {
          v78 = *v76;
          if ( *v76 )
          {
            v48 = (*(_DWORD *)(v78 + 8))-- == 1;
            if ( v48 )
              break;
          }
          if ( (unsigned __int64)++v76 >= v77 )
            goto LABEL_107;
        }
        ++v76;
        sub_15D7BC0(v122, v78);
      }
      while ( (unsigned __int64)v76 < v77 );
    }
LABEL_107:
    result = sub_186B220(v30 - 1);
  }
  if ( v21 )
  {
    v79 = v21;
    if ( v21 < &v21[*((unsigned int *)v21 - 1)] )
    {
      v80 = (unsigned __int64)&v21[*((unsigned int *)v21 - 1)];
      do
      {
        v81 = *v79;
        if ( *v79 )
        {
          v48 = (*(_DWORD *)(v81 + 8))-- == 1;
          if ( v48 )
            sub_15D7BC0(v123, v81);
        }
        ++v79;
      }
      while ( (unsigned __int64)v79 < v80 );
    }
    return sub_186B220(v21 - 1);
  }
  return result;
}

