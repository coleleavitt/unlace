__int64 __fastcall sub_D27990(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r15
  char **v4; // r15
  char **exception; // r14
  char **v6; // r14
  char **v7; // r15
  unsigned int v10; // r13d
  __int64 v11; // rsi
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r13
  __int64 v21; // r15
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  int v25; // eax
  _QWORD *v26; // r14
  unsigned int v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // r8
  _QWORD *v36; // r13
  int v37; // eax
  unsigned int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // r9d
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rdx
  unsigned int v44; // r10d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 *v49; // r15
  __int64 v50; // rax
  unsigned int v51; // r9d
  __int64 *v52; // r8
  __int64 v53; // rsi
  bool v54; // zf
  __int64 *v55; // r15
  unsigned __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 *v59; // r15
  __int64 v60; // rax
  unsigned int v61; // r9d
  __int64 *v62; // r8
  __int64 v63; // rsi
  unsigned __int64 v64; // rdx
  __int64 *v65; // r15
  __int64 v66; // rsi
  __int64 v67; // r8
  __int64 v68; // rsi
  __int64 v69; // rdi
  _QWORD *v70; // rdx
  _QWORD *v71; // rax
  int v72; // eax
  __int64 *v73; // rcx
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
  __int64 v107; // rsi
  __int64 v108; // rdi
  unsigned int v109; // r9d
  unsigned __int64 v110; // rcx
  __int64 *v111; // r15
  __int64 v112; // rsi
  __int64 v113; // rdi
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  unsigned int v116; // r15d
  size_t v117; // rsi
  unsigned int *v118; // rax
  __int64 v119; // rcx
  __int64 *v120; // [rsp+0h] [rbp-D0h]
  __int64 v121; // [rsp+8h] [rbp-C8h]
  __int64 *v122; // [rsp+10h] [rbp-C0h]
  unsigned int v123; // [rsp+10h] [rbp-C0h]
  __int64 v124; // [rsp+18h] [rbp-B8h]
  __int64 v125; // [rsp+20h] [rbp-B0h]
  int v126; // [rsp+2Ch] [rbp-A4h]
  __int64 v127; // [rsp+30h] [rbp-A0h]
  __int64 v128; // [rsp+30h] [rbp-A0h]
  __int64 *v129; // [rsp+30h] [rbp-A0h]
  __int64 v130; // [rsp+38h] [rbp-98h]
  __int64 v131; // [rsp+38h] [rbp-98h]
  __int64 v132; // [rsp+38h] [rbp-98h]
  __int64 *v133; // [rsp+38h] [rbp-98h]
  unsigned int v134; // [rsp+38h] [rbp-98h]
  __int64 v136; // [rsp+48h] [rbp-88h]
  unsigned int v137; // [rsp+48h] [rbp-88h]
  unsigned int v138; // [rsp+48h] [rbp-88h]
  __int64 *v139; // [rsp+48h] [rbp-88h]
  unsigned __int64 v140; // [rsp+48h] [rbp-88h]
  __int64 *v141; // [rsp+48h] [rbp-88h]
  unsigned __int64 v142; // [rsp+48h] [rbp-88h]
  unsigned int v143; // [rsp+50h] [rbp-80h]
  __int64 v144; // [rsp+50h] [rbp-80h]
  unsigned int v145; // [rsp+50h] [rbp-80h]
  unsigned int v146; // [rsp+58h] [rbp-78h]
  __int64 v147; // [rsp+58h] [rbp-78h]
  unsigned int v148; // [rsp+58h] [rbp-78h]
  unsigned int v149; // [rsp+58h] [rbp-78h]
  __int64 v150; // [rsp+58h] [rbp-78h]
  unsigned __int64 v151; // [rsp+58h] [rbp-78h]
  __int64 v152; // [rsp+58h] [rbp-78h]
  __int64 v153; // [rsp+58h] [rbp-78h]
  __int64 v154[10]; // [rsp+80h] [rbp-50h] BYREF

  v126 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v88 = *(_QWORD **)(a1 + 160);
  if ( v88 )
    v89 = *((_DWORD *)v88 - 1);
  else
    v89 = 0;
  if ( v126 )
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
          v148 = v98;
          if ( 8 * v97 + 8 >= (unsigned int)v99 || v97 >= v98 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_D240F0(v154, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v154);
            sub_233E40((__int64)v154);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v100 = (unsigned int *)sub_186B300(v88 - 1, v99);
          v88 = v100 + 2;
          *v100 = v148;
          v101 = v100[1];
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
        v115 = (_QWORD *)sub_186B270(0x18u);
        v92 = 1;
        *v115 = 2;
        v88 = v115 + 1;
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
        goto LABEL_123;
      }
      v102 = (unsigned int)(3 * v95 + 1) >> 1;
      v103 = 4 * v102 + 8;
      v149 = v102;
      if ( 4 * (int)v95 + 8 >= (unsigned int)v103 || (unsigned int)v95 >= v102 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_D240F0(v154, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v154);
        sub_233E40((__int64)v154);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v90;
      v104 = (unsigned int *)sub_186B300(v94 - 1, v103);
      v105 = v104 + 2;
      *v104 = v149;
      v106 = v104[1];
      *(_QWORD *)(a1 + 528) = v105;
      v105[v106] = v89;
      ++*(v105 - 1);
      if ( v90 == v126 )
        goto LABEL_133;
LABEL_124:
      v88 = *(_QWORD **)(a1 + 160);
    }
    v114 = (_QWORD *)sub_186B270(0x10u);
    v94 = v114 + 1;
    *v114 = 2;
    *(_QWORD *)(a1 + 528) = v114 + 1;
    v96 = v114 + 1;
LABEL_123:
    ++v90;
    *v96 = v89;
    ++*((_DWORD *)v94 - 1);
    if ( v90 == v126 )
      goto LABEL_133;
    goto LABEL_124;
  }
LABEL_133:
  *(_DWORD *)(a1 + 128) += v126;
LABEL_2:
  v10 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v14 >= v10 )
      break;
    if ( v14 )
    {
      v15 = *(_DWORD *)(a2 + 72);
      if ( v15 < v14 )
        v16 = a2 + 8LL * (v14 - v15 - 1);
      else
        v16 = a2 + 8LL * (v14 - 1);
      v11 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + v16 + 80);
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 24);
    }
    v12 = ((v14 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v12;
    result = sub_D27520(a1, v11, ((unsigned __int8)v12 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v17 = *(unsigned int *)(a2 + 20);
  v18 = *(_QWORD *)(a1 + 8);
  v122 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v146 = *(_DWORD *)(a2 + 76);
  v121 = *v122;
  v19 = 16 * v17;
  v125 = *(_QWORD *)(a1 + 8);
  v143 = *(_DWORD *)(a2 + 72);
  if ( v143 )
  {
    v20 = v19 + a2;
    v21 = *(_QWORD *)(v19 + a2 + 80);
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v22 = (_QWORD *)sub_186B270(0x18u);
    *v22 = 2;
    v127 = v143;
    v23 = a2 + 8 * (v143 + 2 * v17);
    v24 = v22 + 1;
    v25 = 1;
    v26 = v24;
    while ( 1 )
    {
      v20 += 8;
      *v24 = v21;
      *((_DWORD *)v26 - 1) = v25;
      if ( v23 == v20 )
        break;
      while ( 1 )
      {
        v21 = *(_QWORD *)(v20 + 80);
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        v27 = *((_DWORD *)v26 - 1);
        if ( v27 == *((_DWORD *)v26 - 2) )
          break;
        v20 += 8;
        v26[v27] = v21;
        *((_DWORD *)v26 - 1) = v27 + 1;
        if ( v23 == v20 )
          goto LABEL_22;
      }
      v40 = (3 * v27 + 1) >> 1;
      v41 = 8 * v40 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v41 || v27 >= v40 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_D240F0(v154, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v154);
        sub_233E40((__int64)v154);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v131 = v23;
      v137 = (3 * v27 + 1) >> 1;
      v42 = (unsigned int *)sub_186B300(v26 - 1, v41);
      v43 = v42[1];
      v26 = v42 + 2;
      v23 = v131;
      *v42 = v137;
      LODWORD(v42) = v43;
      v24 = &v26[v43];
      v25 = (_DWORD)v42 + 1;
    }
LABEL_22:
    v28 = *(_QWORD *)(a1 + 8);
    v124 = v28;
    v19 = 16LL * *(unsigned int *)(a2 + 20);
    if ( !v146 )
    {
      v36 = nullptr;
      v133 = v122 + 1;
      v48 = v143;
      goto LABEL_39;
    }
  }
  else
  {
    v26 = nullptr;
    v36 = nullptr;
    v124 = v18;
    if ( !v146 )
      goto LABEL_76;
  }
  v29 = a2 + v19;
  v30 = *(_QWORD *)(v29 + 80);
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  v130 = v30;
  v136 = v29;
  v31 = (_QWORD *)sub_186B270(0x18u);
  v32 = v31 + 1;
  v33 = v136;
  v34 = 0;
  v35 = v130;
  *v31 = 2;
  v36 = v31 + 1;
  v37 = 1;
  while ( 1 )
  {
    *v32 = v35;
    ++v34;
    *((_DWORD *)v36 - 1) = v37;
    if ( (unsigned int)v34 >= v146 )
      break;
    v35 = *(_QWORD *)(v33 + 8 * v34 + 80);
    if ( v35 )
      ++*(_DWORD *)(v35 + 8);
    v38 = *((_DWORD *)v36 - 1);
    if ( v38 == *((_DWORD *)v36 - 2) )
    {
      v44 = (3 * v38 + 1) >> 1;
      v45 = 8 * v44 + 8;
      if ( 8 * v38 + 8 >= (unsigned int)v45 || v38 >= v44 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_D240F0(v154, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v154);
        sub_233E40((__int64)v154);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v128 = v35;
      v132 = v33;
      v138 = (3 * v38 + 1) >> 1;
      v46 = (unsigned int *)sub_186B300(v36 - 1, v45);
      v47 = v46[1];
      v36 = v46 + 2;
      v33 = v132;
      v35 = v128;
      *v46 = v138;
      LODWORD(v46) = v47;
      v32 = &v36[v47];
      v37 = (_DWORD)v46 + 1;
    }
    else
    {
      v39 = v38;
      v37 = v38 + 1;
      v32 = &v36[v39];
    }
  }
  v133 = v122 + 1;
  v48 = v143;
  v127 = v143;
  if ( v143 )
  {
    v28 = *(_QWORD *)(a1 + 8);
LABEL_39:
    v49 = v122;
    v143 = 0;
    v139 = &v122[v48];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v28, v49[1]) )
      {
        v50 = v49[1];
        v51 = v143 + 1;
        v52 = &v26[v143];
        if ( v50 )
          ++*(_DWORD *)(v50 + 8);
        v53 = *v52;
        if ( *v52 )
        {
          v54 = (*(_DWORD *)(v53 + 8))-- == 1;
          if ( v54 )
          {
            v120 = &v26[v143];
            v123 = v143 + 1;
            v144 = v50;
            sub_15D7BC0(v125, v53);
            v52 = v120;
            v51 = v123;
            v50 = v144;
          }
        }
        *v52 = v50;
        ++v49;
        v143 = v51;
        if ( v49 == v139 )
        {
LABEL_49:
          if ( v26 )
          {
            v48 = v143;
            goto LABEL_51;
          }
LABEL_58:
          if ( v146 )
            goto LABEL_59;
          goto LABEL_68;
        }
      }
      else if ( ++v49 == v139 )
      {
        goto LABEL_49;
      }
      v28 = *(_QWORD *)(a1 + 8);
    }
  }
  v127 = 0;
  if ( v26 )
  {
LABEL_51:
    v55 = &v26[v48];
    v56 = (unsigned __int64)&v26[*((unsigned int *)v26 - 1)];
    if ( (unsigned __int64)v55 < v56 )
    {
      do
      {
        while ( 1 )
        {
          v57 = *v55;
          if ( *v55 )
          {
            v54 = (*(_DWORD *)(v57 + 8))-- == 1;
            if ( v54 )
              break;
          }
          if ( (unsigned __int64)++v55 >= v56 )
            goto LABEL_57;
        }
        v140 = v56;
        sub_15D7BC0(v125, v57);
        v56 = v140;
        ++v55;
      }
      while ( (unsigned __int64)v55 < v140 );
    }
LABEL_57:
    *((_DWORD *)v26 - 1) = v143;
    goto LABEL_58;
  }
LABEL_59:
  v58 = v146;
  v146 = 0;
  v59 = &v133[v127];
  v141 = &v133[v127 + v58];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v59) )
    {
      if ( ++v59 == v141 )
        goto LABEL_68;
    }
    v60 = *v59;
    v61 = v146 + 1;
    v62 = &v36[v146];
    if ( *v59 )
      ++*(_DWORD *)(v60 + 8);
    v63 = *v62;
    if ( *v62 )
    {
      v54 = (*(_DWORD *)(v63 + 8))-- == 1;
      if ( v54 )
      {
        v129 = &v36[v146];
        v134 = v146 + 1;
        v150 = v60;
        sub_15D7BC0(v124, v63);
        v62 = v129;
        v61 = v134;
        v60 = v150;
      }
    }
    *v62 = v60;
    ++v59;
    v146 = v61;
  }
  while ( v59 != v141 );
LABEL_68:
  if ( v36 )
  {
    v64 = (unsigned __int64)&v36[*((unsigned int *)v36 - 1)];
    v65 = &v36[v146];
    if ( (unsigned __int64)v65 < v64 )
    {
      do
      {
        while ( 1 )
        {
          v66 = *v65;
          if ( *v65 )
          {
            v54 = (*(_DWORD *)(v66 + 8))-- == 1;
            if ( v54 )
              break;
          }
          if ( (unsigned __int64)++v65 >= v64 )
            goto LABEL_75;
        }
        v142 = v64;
        sub_15D7BC0(v124, v66);
        v64 = v142;
        ++v65;
      }
      while ( (unsigned __int64)v65 < v142 );
    }
LABEL_75:
    *((_DWORD *)v36 - 1) = v146;
  }
LABEL_76:
  if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
  {
    v107 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(a2 + 8);
    if ( v107 )
    {
      v108 = *(_QWORD *)(a1 + 488);
      v54 = (*(_DWORD *)(v107 + 8))-- == 1;
      if ( v54 )
        sub_15D7BC0(v108, v107);
      v70 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = a2;
      if ( v70 )
      {
        v67 = a2;
        goto LABEL_139;
      }
    }
    else
    {
      v70 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = a2;
      v67 = a2;
      if ( v70 )
        goto LABEL_139;
    }
    v67 = a2;
    goto LABEL_83;
  }
  v67 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v143, (_DWORD)v26, v146, (_DWORD)v36, v121);
  if ( v67 )
  {
    v68 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(v67 + 8);
    if ( v68 )
      goto LABEL_79;
    v70 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = v67;
    if ( !v70 )
      goto LABEL_83;
  }
  else
  {
    v68 = *(_QWORD *)(a1 + 480);
    if ( v68 )
    {
LABEL_79:
      v69 = *(_QWORD *)(a1 + 488);
      v54 = (*(_DWORD *)(v68 + 8))-- == 1;
      if ( v54 )
      {
        v153 = v67;
        sub_15D7BC0(v69, v68);
        v67 = v153;
      }
      v70 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = v67;
      if ( !v70 )
        goto LABEL_82;
      goto LABEL_139;
    }
    *(_QWORD *)(a1 + 480) = 0;
    v70 = *(_QWORD **)(a1 + 56);
    if ( !v70 )
      goto LABEL_154;
  }
LABEL_139:
  v109 = *(_DWORD *)(a3 + 12);
  v110 = (unsigned __int64)&v70[*((unsigned int *)v70 - 1)];
  v111 = &v70[v109];
  if ( (unsigned __int64)v111 >= v110 )
    goto LABEL_146;
  do
  {
    while ( 1 )
    {
      v112 = *v111;
      if ( *v111 )
      {
        v113 = *(_QWORD *)(a1 + 48);
        v54 = (*(_DWORD *)(v112 + 8))-- == 1;
        if ( v54 )
          break;
      }
      if ( (unsigned __int64)++v111 >= v110 )
        goto LABEL_145;
    }
    v145 = v109;
    v151 = v110;
    sub_15D7BC0(v113, v112);
    v110 = v151;
    ++v111;
    v109 = v145;
  }
  while ( (unsigned __int64)v111 < v151 );
LABEL_145:
  v70 = *(_QWORD **)(a1 + 56);
  v67 = *(_QWORD *)(a1 + 480);
  if ( v70 )
  {
LABEL_146:
    *((_DWORD *)v70 - 1) = v109;
    if ( v67 )
    {
      ++*(_DWORD *)(v67 + 8);
      v109 = *((_DWORD *)v70 - 1);
    }
    if ( *((_DWORD *)v70 - 2) == v109 )
    {
      v116 = (3 * v109 + 1) >> 1;
      v117 = 8 * v116 + 8;
      if ( 8 * v109 + 8 >= (unsigned int)v117 || v109 >= v116 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_D240F0(v154, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v154);
        sub_233E40((__int64)v154);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v152 = v67;
      v118 = (unsigned int *)sub_186B300(v70 - 1, v117);
      v119 = v118[1];
      v70 = v118 + 2;
      v67 = v152;
      *v118 = v116;
      *(_QWORD *)(a1 + 56) = v118 + 2;
      LODWORD(v118) = v119;
      v73 = &v70[v119];
      v72 = (_DWORD)v118 + 1;
    }
    else
    {
      v73 = &v70[*((unsigned int *)v70 - 1)];
      v72 = *((_DWORD *)v70 - 1) + 1;
    }
    goto LABEL_85;
  }
LABEL_82:
  if ( !v67 )
  {
LABEL_154:
    v67 = 0;
    goto LABEL_84;
  }
LABEL_83:
  ++*(_DWORD *)(v67 + 8);
LABEL_84:
  v147 = v67;
  v71 = (_QWORD *)sub_186B270(0x18u);
  v70 = v71 + 1;
  v67 = v147;
  *v71 = 2;
  v72 = 1;
  *(_QWORD *)(a1 + 56) = v70;
  v73 = v70;
LABEL_85:
  *v73 = v67;
  *((_DWORD *)v70 - 1) = v72;
  v74 = *(_QWORD *)(a1 + 160);
  if ( v74 )
    *(_DWORD *)(v74 - 4) -= v126;
  v75 = *(_QWORD *)(a1 + 528);
  if ( v75 )
    *(_DWORD *)(v75 - 4) -= v126;
  sub_15844D0(a1);
  v76 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v76);
    v76 = *(_QWORD *)(a1 + 480);
  }
  if ( v76 )
  {
    v77 = *(_QWORD *)(a1 + 488);
    v54 = (*(_DWORD *)(v76 + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v77, v76);
  }
  v78 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v78 && (v79 = *(_QWORD *)(a1 + 504), v54 = *(_DWORD *)(v78 + 8) == 1, --*(_DWORD *)(v78 + 8), v54) )
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
  if ( v36 )
  {
    v82 = v36;
    if ( v36 < &v36[*((unsigned int *)v36 - 1)] )
    {
      v83 = (unsigned __int64)&v36[*((unsigned int *)v36 - 1)];
      do
      {
        while ( 1 )
        {
          v84 = *v82;
          if ( *v82 )
          {
            v54 = (*(_DWORD *)(v84 + 8))-- == 1;
            if ( v54 )
              break;
          }
          if ( (unsigned __int64)++v82 >= v83 )
            goto LABEL_107;
        }
        ++v82;
        sub_15D7BC0(v124, v84);
      }
      while ( (unsigned __int64)v82 < v83 );
    }
LABEL_107:
    result = sub_186B220(v36 - 1);
  }
  if ( v26 )
  {
    v85 = v26;
    if ( v26 < &v26[*((unsigned int *)v26 - 1)] )
    {
      v86 = (unsigned __int64)&v26[*((unsigned int *)v26 - 1)];
      do
      {
        v87 = *v85;
        if ( *v85 )
        {
          v54 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v54 )
            sub_15D7BC0(v125, v87);
        }
        ++v85;
      }
      while ( (unsigned __int64)v85 < v86 );
    }
    return sub_186B220(v26 - 1);
  }
  return result;
}

