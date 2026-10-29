__int64 __fastcall sub_5D63E0(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rsi
  unsigned __int64 v65; // r15
  _QWORD *v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rsi
  int v76; // ecx
  __int64 *v77; // rbx
  unsigned __int64 v78; // r15
  __int64 v79; // rsi
  __int64 *v80; // rbx
  unsigned __int64 v81; // r15
  __int64 v82; // rsi
  _QWORD *v83; // rax
  int v84; // r14d
  int v85; // r13d
  __int64 v86; // rcx
  int v87; // edx
  _QWORD *v88; // rcx
  _QWORD *v89; // rdx
  __int64 v90; // rax
  _DWORD *v91; // rax
  unsigned int v92; // edx
  unsigned int v93; // ecx
  size_t v94; // rsi
  unsigned int *v95; // rdx
  __int64 v96; // rcx
  unsigned int v97; // ecx
  size_t v98; // rsi
  unsigned int *v99; // rax
  _DWORD *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rdi
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  char **v106; // r15
  char **exception; // r14
  char **v108; // r15
  __int64 *v109; // [rsp+0h] [rbp-E0h]
  __int64 v110; // [rsp+8h] [rbp-D8h]
  __int64 *v111; // [rsp+10h] [rbp-D0h]
  unsigned int v112; // [rsp+10h] [rbp-D0h]
  __int64 v113; // [rsp+18h] [rbp-C8h]
  __int64 v114; // [rsp+20h] [rbp-C0h]
  int v115; // [rsp+2Ch] [rbp-B4h]
  __int64 v116; // [rsp+30h] [rbp-B0h]
  __int64 v117; // [rsp+30h] [rbp-B0h]
  __int64 *v118; // [rsp+30h] [rbp-B0h]
  __int64 v119; // [rsp+38h] [rbp-A8h]
  __int64 v120; // [rsp+38h] [rbp-A8h]
  __int64 *v121; // [rsp+38h] [rbp-A8h]
  unsigned int v122; // [rsp+38h] [rbp-A8h]
  unsigned int v124; // [rsp+48h] [rbp-98h]
  unsigned int v125; // [rsp+48h] [rbp-98h]
  __int64 *v126; // [rsp+48h] [rbp-98h]
  unsigned __int64 v127; // [rsp+48h] [rbp-98h]
  __int64 *v128; // [rsp+48h] [rbp-98h]
  unsigned __int64 v129; // [rsp+48h] [rbp-98h]
  unsigned int v130; // [rsp+50h] [rbp-90h]
  unsigned int v131; // [rsp+50h] [rbp-90h]
  __int64 v132; // [rsp+50h] [rbp-90h]
  unsigned int v133; // [rsp+58h] [rbp-88h]
  __int64 v134; // [rsp+58h] [rbp-88h]
  _QWORD *v135; // [rsp+58h] [rbp-88h]
  unsigned int v136; // [rsp+58h] [rbp-88h]
  unsigned int v137; // [rsp+58h] [rbp-88h]
  __int64 v138; // [rsp+58h] [rbp-88h]
  __int64 v139[10]; // [rsp+90h] [rbp-50h] BYREF

  v115 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v83 = *(_QWORD **)(a1 + 160);
  if ( v83 )
    v84 = *((_DWORD *)v83 - 1);
  else
    v84 = 0;
  if ( v115 )
  {
    v85 = 0;
    while ( 1 )
    {
      if ( v83 )
      {
        v92 = *((_DWORD *)v83 - 1);
        if ( v92 == *((_DWORD *)v83 - 2) )
        {
          v93 = (3 * v92 + 1) >> 1;
          v94 = 8 * v93 + 8;
          v136 = v93;
          if ( 8 * v92 + 8 >= (unsigned int)v94 || v92 >= v93 )
          {
LABEL_159:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v139, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v139);
            sub_233E40((__int64)v139);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v95 = (unsigned int *)sub_186B300(v83 - 1, v94);
          v83 = v95 + 2;
          v96 = v95[1];
          *v95 = v136;
          *(_QWORD *)(a1 + 160) = v95 + 2;
          LODWORD(v95) = v96;
          v88 = &v83[v96];
          v87 = (_DWORD)v95 + 1;
        }
        else
        {
          v86 = v92;
          v87 = v92 + 1;
          v88 = &v83[v86];
        }
      }
      else
      {
        v105 = (_QWORD *)sub_186B270(0x18u);
        v87 = 1;
        *v105 = 2;
        v83 = v105 + 1;
        *(_QWORD *)(a1 + 160) = v83;
        v88 = v83;
      }
      *v88 = 0;
      *((_DWORD *)v83 - 1) = v87;
      v89 = *(_QWORD **)(a1 + 528);
      if ( !v89 )
        break;
      v90 = *((unsigned int *)v89 - 1);
      if ( (_DWORD)v90 != *((_DWORD *)v89 - 2) )
      {
        v91 = (_DWORD *)v89 + v90;
        goto LABEL_131;
      }
      v97 = (unsigned int)(3 * v90 + 1) >> 1;
      v98 = 4 * v97 + 8;
      v137 = v97;
      if ( 4 * (int)v90 + 8 >= (unsigned int)v98 || (unsigned int)v90 >= v97 )
        goto LABEL_159;
      ++v85;
      v99 = (unsigned int *)sub_186B300(v89 - 1, v98);
      v100 = v99 + 2;
      *v99 = v137;
      v101 = v99[1];
      *(_QWORD *)(a1 + 528) = v100;
      v100[v101] = v84;
      ++*(v100 - 1);
      if ( v85 == v115 )
        goto LABEL_141;
LABEL_132:
      v83 = *(_QWORD **)(a1 + 160);
    }
    v104 = (_QWORD *)sub_186B270(0x10u);
    v89 = v104 + 1;
    *v104 = 2;
    *(_QWORD *)(a1 + 528) = v104 + 1;
    v91 = v104 + 1;
LABEL_131:
    ++v85;
    *v91 = v84;
    ++*((_DWORD *)v89 - 1);
    if ( v85 == v115 )
      goto LABEL_141;
    goto LABEL_132;
  }
LABEL_141:
  *(_DWORD *)(a1 + 128) += v115;
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
    result = sub_5D5790((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v12 = *(unsigned int *)(a2 + 20);
  v111 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v133 = *(_DWORD *)(a2 + 76);
  v13 = *(_QWORD *)(a1 + 8);
  v14 = 16 * v12;
  v110 = *v111;
  v114 = *(_QWORD *)(a1 + 8);
  v130 = *(_DWORD *)(a2 + 72);
  if ( v130 )
  {
    v15 = a2 + v14;
    v16 = *(_QWORD *)(v15 + 80);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = (_QWORD *)sub_186B270(0x18u);
    v18 = v17 + 1;
    *v17 = 2;
    v19 = 1;
    v116 = v130;
    v20 = v130 + 2 * v12;
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
        v108 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v139, "Overflow encountered when expanding vector");
        *v108 = (char *)off_1C63128;
        sub_2333C0(v108 + 1, v139);
        sub_233E40((__int64)v139);
        __cxa_throw(v108, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v119 = v22;
      v124 = (3 * v23 + 1) >> 1;
      v36 = (unsigned int *)sub_186B300(v21 - 1, v35);
      v37 = v36[1];
      v21 = v36 + 2;
      v22 = v119;
      *v36 = v124;
      LODWORD(v36) = v37;
      v18 = &v21[v37];
      v19 = (_DWORD)v36 + 1;
    }
LABEL_22:
    v24 = *(_QWORD *)(a1 + 8);
    v113 = v24;
    v14 = 16LL * *(unsigned int *)(a2 + 20);
    if ( !v133 )
    {
      v30 = nullptr;
      v121 = v111 + 1;
      v42 = v130;
      goto LABEL_39;
    }
  }
  else
  {
    v21 = nullptr;
    v113 = v13;
    if ( !v133 )
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
    if ( (unsigned int)v29 >= v133 )
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
        v106 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v139, "Overflow encountered when expanding vector");
        *v106 = (char *)off_1C63128;
        sub_2333C0(v106 + 1, v139);
        sub_233E40((__int64)v139);
        __cxa_throw(v106, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v117 = v28;
      v120 = v29;
      v125 = (3 * v32 + 1) >> 1;
      v40 = (unsigned int *)sub_186B300(v30 - 1, v39);
      v41 = v40[1];
      v30 = v40 + 2;
      v29 = v120;
      v28 = v117;
      *v40 = v125;
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
  v121 = v111 + 1;
  v42 = v130;
  v116 = v130;
  if ( v130 )
  {
    v24 = *(_QWORD *)(a1 + 8);
LABEL_39:
    v43 = v111;
    v130 = 0;
    v126 = &v111[v42];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v24, v43[1]) )
      {
        v44 = v43[1];
        v45 = v130 + 1;
        v46 = &v21[v130];
        if ( v44 )
          ++*(_DWORD *)(v44 + 8);
        v47 = *v46;
        if ( *v46 )
        {
          v48 = (*(_DWORD *)(v47 + 8))-- == 1;
          if ( v48 )
          {
            v109 = &v21[v130];
            v112 = v130 + 1;
            v132 = v44;
            sub_15D7BC0(v114, v47);
            v46 = v109;
            v45 = v112;
            v44 = v132;
          }
        }
        *v46 = v44;
        ++v43;
        v130 = v45;
        if ( v43 == v126 )
        {
LABEL_49:
          if ( v21 )
          {
            v42 = v130;
            goto LABEL_51;
          }
LABEL_58:
          if ( v133 )
            goto LABEL_59;
          goto LABEL_68;
        }
      }
      else if ( ++v43 == v126 )
      {
        goto LABEL_49;
      }
      v24 = *(_QWORD *)(a1 + 8);
    }
  }
  v116 = 0;
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
        v127 = v50;
        sub_15D7BC0(v114, v51);
        v50 = v127;
        ++v49;
      }
      while ( (unsigned __int64)v49 < v127 );
    }
LABEL_57:
    *((_DWORD *)v21 - 1) = v130;
    goto LABEL_58;
  }
LABEL_59:
  v52 = v133;
  v133 = 0;
  v53 = &v121[v116];
  v128 = &v121[v116 + v52];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v53) )
    {
      if ( ++v53 == v128 )
        goto LABEL_68;
    }
    v54 = *v53;
    v55 = v133 + 1;
    v56 = &v30[v133];
    if ( *v53 )
      ++*(_DWORD *)(v54 + 8);
    v57 = *v56;
    if ( *v56 )
    {
      v48 = (*(_DWORD *)(v57 + 8))-- == 1;
      if ( v48 )
      {
        v118 = &v30[v133];
        v122 = v133 + 1;
        v138 = v54;
        sub_15D7BC0(v113, v57);
        v56 = v118;
        v55 = v122;
        v54 = v138;
      }
    }
    *v56 = v54;
    ++v53;
    v133 = v55;
  }
  while ( v53 != v128 );
LABEL_68:
  if ( v30 )
  {
    v58 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
    v59 = &v30[v133];
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
        v129 = v58;
        sub_15D7BC0(v113, v60);
        v58 = v129;
        ++v59;
      }
      while ( (unsigned __int64)v59 < v129 );
    }
LABEL_75:
    *((_DWORD *)v30 - 1) = v133;
  }
LABEL_76:
  if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
  {
    v61 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v130, (_DWORD)v21, v133, (_DWORD)v30, v110);
    if ( v61 )
      ++*(_DWORD *)(v61 + 8);
    v62 = *(_QWORD *)(a1 + 480);
    if ( v62 )
    {
      v63 = *(_QWORD *)(a1 + 488);
      v48 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v48 )
      {
        v134 = v61;
        sub_15D7BC0(v63, v62);
        v61 = v134;
      }
    }
    v64 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 480) = v61;
    if ( !v64 )
      goto LABEL_91;
    goto LABEL_83;
  }
  v102 = *(_QWORD *)(a1 + 480);
  ++*(_DWORD *)(a2 + 8);
  if ( !v102 )
  {
    v64 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    v61 = a2;
    if ( v64 )
      goto LABEL_83;
LABEL_151:
    v139[0] = a2;
    v61 = a2;
    goto LABEL_92;
  }
  v103 = *(_QWORD *)(a1 + 488);
  v48 = (*(_DWORD *)(v102 + 8))-- == 1;
  if ( v48 )
    sub_15D7BC0(v103, v102);
  v64 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 480) = a2;
  if ( !v64 )
    goto LABEL_151;
  v61 = a2;
LABEL_83:
  v65 = v64 + 8LL * *(unsigned int *)(v64 - 4);
  v131 = *(_DWORD *)(a3 + 12);
  v66 = (_QWORD *)(v64 + 8LL * v131);
  if ( (unsigned __int64)v66 >= v65 )
    goto LABEL_90;
  do
  {
    while ( 1 )
    {
      v67 = *v66;
      if ( *v66 )
      {
        v68 = *(_QWORD *)(a1 + 48);
        v48 = (*(_DWORD *)(v67 + 8))-- == 1;
        if ( v48 )
          break;
      }
      if ( (unsigned __int64)++v66 >= v65 )
        goto LABEL_89;
    }
    v135 = v66;
    sub_15D7BC0(v68, v67);
    v66 = v135 + 1;
  }
  while ( (unsigned __int64)(v135 + 1) < v65 );
LABEL_89:
  v64 = *(_QWORD *)(a1 + 56);
  v61 = *(_QWORD *)(a1 + 480);
  if ( v64 )
LABEL_90:
    *(_DWORD *)(v64 - 4) = v131;
LABEL_91:
  v139[0] = v61;
  if ( v61 )
LABEL_92:
    ++*(_DWORD *)(v61 + 8);
  sub_5C94A0((_QWORD *)(a1 + 56), v139);
  v69 = *(_QWORD *)(a1 + 160);
  if ( v69 )
    *(_DWORD *)(v69 - 4) -= v115;
  v70 = *(_QWORD *)(a1 + 528);
  if ( v70 )
    *(_DWORD *)(v70 - 4) -= v115;
  sub_15844D0(a1);
  v71 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v71);
    v71 = *(_QWORD *)(a1 + 480);
  }
  if ( v71 )
  {
    v72 = *(_QWORD *)(a1 + 488);
    v48 = (*(_DWORD *)(v71 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v72, v71);
  }
  v73 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v73 && (v74 = *(_QWORD *)(a1 + 504), v48 = *(_DWORD *)(v73 + 8) == 1, --*(_DWORD *)(v73 + 8), v48) )
  {
    sub_15D7BC0(v74, v73);
    v75 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v75 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v76 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v76 - 1;
  if ( a2 != v75 && v76 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v76 - 2) + 8) |= 2u;
  if ( v30 )
  {
    v77 = v30;
    if ( v30 < &v30[*((unsigned int *)v30 - 1)] )
    {
      v78 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
      do
      {
        while ( 1 )
        {
          v79 = *v77;
          if ( *v77 )
          {
            v48 = (*(_DWORD *)(v79 + 8))-- == 1;
            if ( v48 )
              break;
          }
          if ( (unsigned __int64)++v77 >= v78 )
            goto LABEL_115;
        }
        ++v77;
        sub_15D7BC0(v113, v79);
      }
      while ( (unsigned __int64)v77 < v78 );
    }
LABEL_115:
    result = sub_186B220(v30 - 1);
  }
  if ( v21 )
  {
    v80 = v21;
    if ( v21 < &v21[*((unsigned int *)v21 - 1)] )
    {
      v81 = (unsigned __int64)&v21[*((unsigned int *)v21 - 1)];
      do
      {
        v82 = *v80;
        if ( *v80 )
        {
          v48 = (*(_DWORD *)(v82 + 8))-- == 1;
          if ( v48 )
            sub_15D7BC0(v114, v82);
        }
        ++v80;
      }
      while ( (unsigned __int64)v80 < v81 );
    }
    return sub_186B220(v21 - 1);
  }
  return result;
}

