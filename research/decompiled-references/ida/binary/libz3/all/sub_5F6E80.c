__int64 __fastcall sub_5F6E80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r14
  void *v13; // rdi
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
  void *v24; // rdi
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
  _DWORD *v40; // rax
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
  __int64 v62; // r15
  __int64 v63; // rsi
  __int64 v64; // rdi
  _QWORD *v65; // rdx
  unsigned int v66; // r8d
  unsigned __int64 v67; // rcx
  __int64 *v68; // r15
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // r15
  _QWORD *v72; // rcx
  int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdi
  __int64 v78; // rsi
  __int64 v79; // rdi
  __int64 v80; // rsi
  int v81; // ecx
  __int64 *v82; // rbx
  unsigned __int64 v83; // r15
  __int64 v84; // rsi
  __int64 *v85; // rbx
  unsigned __int64 v86; // r15
  __int64 v87; // rsi
  _QWORD *v88; // rax
  int v89; // r14d
  int v90; // r13d
  __int64 v91; // rcx
  int v92; // edx
  _QWORD *v93; // rcx
  _QWORD *v94; // rdx
  __int64 v95; // rax
  _DWORD *v96; // rax
  unsigned int v97; // edx
  unsigned int v98; // ecx
  size_t v99; // rsi
  unsigned int *v100; // rdx
  __int64 v101; // rcx
  unsigned int v102; // ecx
  size_t v103; // rsi
  unsigned int *v104; // rax
  _DWORD *v105; // rdx
  __int64 v106; // rax
  _QWORD *v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rsi
  __int64 v110; // rdi
  unsigned int v111; // ecx
  size_t v112; // rsi
  unsigned int *v113; // rax
  _QWORD *v114; // rax
  char **v115; // r15
  char **v116; // r15
  char **exception; // r14
  char **v118; // r15
  __int64 v119; // [rsp-8h] [rbp-E8h]
  __int64 *v120; // [rsp+0h] [rbp-E0h]
  __int64 v121; // [rsp+8h] [rbp-D8h]
  __int64 *v122; // [rsp+10h] [rbp-D0h]
  void *v123; // [rsp+18h] [rbp-C8h]
  __int64 v124; // [rsp+18h] [rbp-C8h]
  __int64 v125; // [rsp+20h] [rbp-C0h]
  __int64 v126; // [rsp+20h] [rbp-C0h]
  __int64 v127; // [rsp+28h] [rbp-B8h]
  int v128; // [rsp+2Ch] [rbp-B4h]
  __int64 v129; // [rsp+30h] [rbp-B0h]
  __int64 v130; // [rsp+30h] [rbp-B0h]
  __int64 v131; // [rsp+38h] [rbp-A8h]
  __int64 v132; // [rsp+38h] [rbp-A8h]
  __int64 v133; // [rsp+38h] [rbp-A8h]
  __int64 v135; // [rsp+40h] [rbp-A0h]
  __int64 *v136; // [rsp+48h] [rbp-98h]
  unsigned int v137; // [rsp+48h] [rbp-98h]
  unsigned int v138; // [rsp+50h] [rbp-90h]
  int v139; // [rsp+50h] [rbp-90h]
  unsigned int v140; // [rsp+50h] [rbp-90h]
  __int64 v141; // [rsp+50h] [rbp-90h]
  unsigned int v142; // [rsp+58h] [rbp-88h]
  int v143; // [rsp+58h] [rbp-88h]
  unsigned __int64 v144; // [rsp+58h] [rbp-88h]
  unsigned int v145; // [rsp+58h] [rbp-88h]
  unsigned int v146; // [rsp+58h] [rbp-88h]
  __int64 v147; // [rsp+58h] [rbp-88h]
  unsigned int v148; // [rsp+58h] [rbp-88h]
  int v149; // [rsp+60h] [rbp-80h]
  int v150; // [rsp+68h] [rbp-78h]
  __int64 v151; // [rsp+78h] [rbp-68h]
  void *v152; // [rsp+80h] [rbp-60h]
  int v153; // [rsp+88h] [rbp-58h]
  __int64 v154[10]; // [rsp+90h] [rbp-50h] BYREF

  HIDWORD(v127) = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v88 = *(_QWORD **)(a1 + 160);
  if ( v88 )
    v89 = *((_DWORD *)v88 - 1);
  else
    v89 = 0;
  if ( HIDWORD(v127) )
  {
    v90 = 0;
    while ( 1 )
    {
      if ( v88 )
      {
        v97 = *((_DWORD *)v88 - 1);
        if ( v97 == *((_DWORD *)v88 - 2) )
        {
          v98 = (3 * v97 + 1) >> 1;
          v99 = 8 * v98 + 8;
          v145 = v98;
          if ( 8 * v97 + 8 >= (unsigned int)v99 || v97 >= v98 )
          {
LABEL_167:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v154, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v154);
            sub_233E40((__int64)v154);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v100 = (unsigned int *)sub_186B300(v88 - 1, v99);
          v88 = v100 + 2;
          v101 = v100[1];
          *v100 = v145;
          *(_QWORD *)(a1 + 160) = v100 + 2;
          LODWORD(v100) = v101;
          v93 = &v88[v101];
          v92 = (_DWORD)v100 + 1;
        }
        else
        {
          v91 = v97;
          v92 = v97 + 1;
          v93 = &v88[v91];
        }
      }
      else
      {
        v107 = (_QWORD *)sub_186B270(0x18u);
        v92 = 1;
        *v107 = 2;
        v88 = v107 + 1;
        *(_QWORD *)(a1 + 160) = v88;
        v93 = v88;
      }
      *v93 = 0;
      *((_DWORD *)v88 - 1) = v92;
      v94 = *(_QWORD **)(a1 + 528);
      if ( !v94 )
        break;
      v95 = *((unsigned int *)v94 - 1);
      if ( (_DWORD)v95 != *((_DWORD *)v94 - 2) )
      {
        v96 = (_DWORD *)v94 + v95;
        goto LABEL_134;
      }
      v102 = (unsigned int)(3 * v95 + 1) >> 1;
      v103 = 4 * v102 + 8;
      v146 = v102;
      if ( 4 * (int)v95 + 8 >= (unsigned int)v103 || (unsigned int)v95 >= v102 )
        goto LABEL_167;
      ++v90;
      v104 = (unsigned int *)sub_186B300(v94 - 1, v103);
      v105 = v104 + 2;
      *v104 = v146;
      v106 = v104[1];
      *(_QWORD *)(a1 + 528) = v105;
      v105[v106] = v89;
      ++*(v105 - 1);
      if ( v90 == HIDWORD(v127) )
        goto LABEL_144;
LABEL_135:
      v88 = *(_QWORD **)(a1 + 160);
    }
    v108 = (_QWORD *)sub_186B270(0x10u);
    v94 = v108 + 1;
    *v108 = 2;
    *(_QWORD *)(a1 + 528) = v108 + 1;
    v96 = v108 + 1;
LABEL_134:
    ++v90;
    *v96 = v89;
    ++*((_DWORD *)v94 - 1);
    if ( v90 == HIDWORD(v127) )
      goto LABEL_144;
    goto LABEL_135;
  }
LABEL_144:
  *(_DWORD *)(a1 + 128) += HIDWORD(v127);
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
    result = sub_5F5A10((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v12 = *(unsigned int *)(a2 + 20);
  v122 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v142 = *(_DWORD *)(a2 + 76);
  v13 = *(void **)(a1 + 8);
  v14 = 16 * v12;
  v121 = *v122;
  v125 = *(_QWORD *)(a1 + 8);
  v138 = *(_DWORD *)(a2 + 72);
  if ( v138 )
  {
    v15 = a2 + v14;
    v16 = *(_QWORD *)(v15 + 80);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = (_QWORD *)sub_186B270(0x18u);
    v18 = v17 + 1;
    *v17 = 2;
    v19 = 1;
    v129 = v138;
    v20 = v138 + 2 * v12;
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
        v116 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v154, "Overflow encountered when expanding vector");
        *v116 = (char *)off_1C63128;
        sub_2333C0(v116 + 1, v154);
        sub_233E40((__int64)v154);
        __cxa_throw(v116, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v132 = v22;
      v137 = (3 * v23 + 1) >> 1;
      v36 = (unsigned int *)sub_186B300(v21 - 1, v35);
      v37 = v36[1];
      v21 = v36 + 2;
      v22 = v132;
      *v36 = v137;
      LODWORD(v36) = v37;
      v18 = &v21[v37];
      v19 = (_DWORD)v36 + 1;
    }
LABEL_22:
    v24 = *(void **)(a1 + 8);
    v123 = v24;
    v14 = 16LL * *(unsigned int *)(a2 + 20);
    v152 = v24;
    if ( !v142 )
    {
      v30 = nullptr;
      v131 = (__int64)(v122 + 1);
      v42 = v138;
      goto LABEL_39;
    }
  }
  else
  {
    v152 = v13;
    v21 = nullptr;
    v123 = v13;
    if ( !v142 )
    {
      v30 = nullptr;
      goto LABEL_76;
    }
  }
  v25 = *(_QWORD *)(a2 + v14 + 80);
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  LODWORD(v136) = a2 + v14;
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
        v118 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v154, "Overflow encountered when expanding vector");
        *v118 = (char *)off_1C63128;
        sub_2333C0(v118 + 1, v154);
        sub_233E40((__int64)v154);
        __cxa_throw(v118, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v130 = v29;
      v133 = v28;
      LODWORD(v136) = (3 * v32 + 1) >> 1;
      v40 = (_DWORD *)sub_186B300(v30 - 1, v39);
      v41 = (unsigned int)v40[1];
      v30 = v40 + 2;
      v28 = v133;
      v29 = v130;
      *v40 = (_DWORD)v136;
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
  v131 = (__int64)(v122 + 1);
  v42 = v138;
  v129 = v138;
  if ( v138 )
  {
    v24 = *(void **)(a1 + 8);
LABEL_39:
    v43 = v122;
    v138 = 0;
    v136 = &v122[v42];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v24, v43[1]) )
      {
        v44 = v43[1];
        v45 = v138 + 1;
        v46 = &v21[v138];
        if ( v44 )
          ++*(_DWORD *)(v44 + 8);
        v47 = *v46;
        if ( *v46 )
        {
          v48 = (*(_DWORD *)(v47 + 8))-- == 1;
          if ( v48 )
          {
            v120 = &v21[v138];
            LODWORD(v122) = v138 + 1;
            v141 = v44;
            sub_15D7BC0(v125, v47);
            v46 = v120;
            v45 = (unsigned int)v122;
            v44 = v141;
          }
        }
        *v46 = v44;
        ++v43;
        v138 = v45;
        if ( v43 == v136 )
        {
LABEL_49:
          if ( v21 )
          {
            v42 = v138;
            goto LABEL_51;
          }
LABEL_58:
          if ( v142 )
            goto LABEL_59;
          goto LABEL_68;
        }
      }
      else if ( ++v43 == v136 )
      {
        goto LABEL_49;
      }
      v24 = *(void **)(a1 + 8);
    }
  }
  v129 = 0;
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
        v136 = (__int64 *)v50;
        sub_15D7BC0(v125, v51);
        v50 = (unsigned __int64)v136;
        ++v49;
      }
      while ( v49 < v136 );
    }
LABEL_57:
    *((_DWORD *)v21 - 1) = v138;
    goto LABEL_58;
  }
LABEL_59:
  v52 = v142;
  v142 = 0;
  v53 = (__int64 *)(v131 + 8 * v129);
  v136 = (__int64 *)(v131 + 8 * (v129 + v52));
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v53) )
    {
      if ( ++v53 == v136 )
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
        v129 = (__int64)&v30[v142];
        LODWORD(v131) = v142 + 1;
        v147 = v54;
        sub_15D7BC0(v123, v57);
        v56 = (__int64 *)v129;
        v55 = v131;
        v54 = v147;
      }
    }
    *v56 = v54;
    ++v53;
    v142 = v55;
  }
  while ( v53 != v136 );
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
        v136 = (__int64 *)v58;
        sub_15D7BC0(v123, v60);
        v58 = (unsigned __int64)v136;
        ++v59;
      }
      while ( v59 < v136 );
    }
LABEL_75:
    *((_DWORD *)v30 - 1) = v142;
  }
LABEL_76:
  v61 = v121;
  if ( (unsigned __int8)sub_DB79F0(
                          *(_QWORD *)(a1 + 144),
                          a2,
                          v121,
                          (int)v21,
                          (int)v30,
                          (int)a1 + 480,
                          a1 + 496,
                          v119,
                          (char)v120,
                          v121,
                          (char)v122,
                          (int)v123,
                          v125,
                          v127,
                          v129,
                          v131,
                          a3,
                          (int)v136,
                          v138,
                          v142,
                          v149,
                          v150,
                          v125,
                          v151,
                          v152,
                          v153) )
    goto LABEL_84;
  if ( (*(_BYTE *)(v135 + 8) & 2) != 0 )
  {
    v62 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v139, (_DWORD)v21, v143, (_DWORD)v30, v61);
    if ( v62 )
      ++*(_DWORD *)(v62 + 8);
    v63 = *(_QWORD *)(a1 + 480);
    if ( v63 )
    {
      v64 = *(_QWORD *)(a1 + 488);
      v48 = (*(_DWORD *)(v63 + 8))-- == 1;
      if ( v48 )
        sub_15D7BC0(v64, v63);
    }
    *(_QWORD *)(a1 + 480) = v62;
LABEL_84:
    v65 = *(_QWORD **)(a1 + 56);
    if ( !v65 )
      goto LABEL_158;
    goto LABEL_85;
  }
  v109 = *(_QWORD *)(a1 + 480);
  ++*(_DWORD *)(a2 + 8);
  if ( v109 )
  {
    v110 = *(_QWORD *)(a1 + 488);
    v48 = (*(_DWORD *)(v109 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v110, v109);
  }
  v65 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 480) = a2;
  if ( !v65 )
  {
    v71 = a2;
LABEL_159:
    ++*(_DWORD *)(v71 + 8);
    goto LABEL_160;
  }
LABEL_85:
  v66 = *(_DWORD *)(v135 + 12);
  v67 = (unsigned __int64)&v65[*((unsigned int *)v65 - 1)];
  v68 = &v65[v66];
  if ( (unsigned __int64)v68 >= v67 )
    goto LABEL_92;
  do
  {
    while ( 1 )
    {
      v69 = *v68;
      if ( *v68 )
      {
        v70 = *(_QWORD *)(a1 + 48);
        v48 = (*(_DWORD *)(v69 + 8))-- == 1;
        if ( v48 )
          break;
      }
      if ( (unsigned __int64)++v68 >= v67 )
        goto LABEL_91;
    }
    v140 = v66;
    v144 = v67;
    sub_15D7BC0(v70, v69);
    v67 = v144;
    ++v68;
    v66 = v140;
  }
  while ( (unsigned __int64)v68 < v144 );
LABEL_91:
  v65 = *(_QWORD **)(a1 + 56);
  if ( v65 )
  {
LABEL_92:
    v71 = *(_QWORD *)(a1 + 480);
    *((_DWORD *)v65 - 1) = v66;
    if ( v71 )
    {
      ++*(_DWORD *)(v71 + 8);
      v66 = *((_DWORD *)v65 - 1);
    }
    if ( *((_DWORD *)v65 - 2) == v66 )
    {
      v111 = (3 * v66 + 1) >> 1;
      v112 = 8 * v111 + 8;
      if ( 8 * v66 + 8 >= (unsigned int)v112 || v66 >= v111 )
      {
        v115 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v154, "Overflow encountered when expanding vector");
        *v115 = (char *)off_1C63128;
        sub_2333C0(v115 + 1, v154);
        sub_233E40((__int64)v154);
        __cxa_throw(v115, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v148 = (3 * v66 + 1) >> 1;
      v113 = (unsigned int *)sub_186B300(v65 - 1, v112);
      v65 = v113 + 2;
      *(_QWORD *)(a1 + 56) = v113 + 2;
      *v113 = v148;
      LODWORD(v113) = v113[1];
      v72 = &v65[(unsigned int)v113];
      v73 = (_DWORD)v113 + 1;
    }
    else
    {
      v72 = &v65[*((unsigned int *)v65 - 1)];
      v73 = *((_DWORD *)v65 - 1) + 1;
    }
    goto LABEL_96;
  }
LABEL_158:
  v71 = *(_QWORD *)(a1 + 480);
  if ( v71 )
    goto LABEL_159;
LABEL_160:
  v114 = (_QWORD *)sub_186B270(0x18u);
  v65 = v114 + 1;
  *v114 = 2;
  v73 = 1;
  *(_QWORD *)(a1 + 56) = v65;
  v72 = v65;
LABEL_96:
  *v72 = v71;
  *((_DWORD *)v65 - 1) = v73;
  v74 = *(_QWORD *)(a1 + 160);
  if ( v74 )
    *(_DWORD *)(v74 - 4) -= v128;
  v75 = *(_QWORD *)(a1 + 528);
  if ( v75 )
    *(_DWORD *)(v75 - 4) -= v128;
  sub_15844D0(a1);
  v76 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v135 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v76);
    v76 = *(_QWORD *)(a1 + 480);
  }
  if ( v76 )
  {
    v77 = *(_QWORD *)(a1 + 488);
    v48 = (*(_DWORD *)(v76 + 8))-- == 1;
    if ( v48 )
      sub_15D7BC0(v77, v76);
  }
  v78 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v78 && (v79 = *(_QWORD *)(a1 + 504), v48 = *(_DWORD *)(v78 + 8) == 1, --*(_DWORD *)(v78 + 8), v48) )
  {
    sub_15D7BC0(v79, v78);
    v80 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v80 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v81 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v81 - 1;
  if ( a2 != v80 && v81 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v81 - 2) + 8) |= 2u;
  if ( v30 )
  {
    v82 = v30;
    if ( v30 < &v30[*((unsigned int *)v30 - 1)] )
    {
      v83 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
      do
      {
        while ( 1 )
        {
          v84 = *v82;
          if ( *v82 )
          {
            v48 = (*(_DWORD *)(v84 + 8))-- == 1;
            if ( v48 )
              break;
          }
          if ( (unsigned __int64)++v82 >= v83 )
            goto LABEL_118;
        }
        ++v82;
        sub_15D7BC0(v124, v84);
      }
      while ( (unsigned __int64)v82 < v83 );
    }
LABEL_118:
    result = sub_186B220(v30 - 1);
  }
  if ( v21 )
  {
    v85 = v21;
    if ( v21 < &v21[*((unsigned int *)v21 - 1)] )
    {
      v86 = (unsigned __int64)&v21[*((unsigned int *)v21 - 1)];
      do
      {
        v87 = *v85;
        if ( *v85 )
        {
          v48 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v48 )
            sub_15D7BC0(v126, v87);
        }
        ++v85;
      }
      while ( (unsigned __int64)v85 < v86 );
    }
    return sub_186B220(v21 - 1);
  }
  return result;
}

