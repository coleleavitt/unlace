__int64 __fastcall sub_73F360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r15
  _QWORD *v13; // rax
  __int64 v14; // r14
  _QWORD *v15; // rcx
  int v16; // eax
  _QWORD *v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ecx
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 *v23; // r14
  __int64 v24; // r15
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  int v27; // eax
  __int64 v28; // rdi
  __int64 *v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rsi
  unsigned int v32; // r8d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  _DWORD *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rdi
  __int64 v40; // rsi
  bool v41; // zf
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  _QWORD *v54; // rdx
  unsigned int v55; // r15d
  unsigned __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 v60; // rcx
  _QWORD *v61; // rsi
  int v62; // eax
  _QWORD *v63; // rdx
  unsigned int v64; // ecx
  unsigned __int64 v65; // r15
  __int64 *v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // r14
  _QWORD *v70; // rcx
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // rsi
  int v79; // ecx
  __int64 *v80; // rbx
  unsigned __int64 v81; // r13
  __int64 v82; // rsi
  __int64 *v83; // rbx
  unsigned __int64 v84; // r15
  __int64 v85; // rsi
  _QWORD *v86; // rax
  int v87; // r12d
  __int64 v88; // rcx
  int v89; // edx
  _QWORD *v90; // rcx
  _QWORD *v91; // rdx
  __int64 v92; // rax
  _DWORD *v93; // rax
  unsigned int v94; // edx
  unsigned int v95; // r15d
  size_t v96; // rsi
  unsigned int *v97; // rdx
  __int64 v98; // rcx
  unsigned int v99; // r15d
  size_t v100; // rsi
  unsigned int *v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  unsigned int v105; // r15d
  size_t v106; // rsi
  unsigned int *v107; // rax
  __int64 v108; // rcx
  unsigned int v109; // r9d
  size_t v110; // rsi
  unsigned int *v111; // rax
  __int64 v112; // rsi
  __int64 v113; // rcx
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  char **v116; // r13
  char **v117; // r13
  char **v118; // r13
  char **v119; // r14
  char **exception; // r14
  __int64 v121; // [rsp+0h] [rbp-C0h]
  __int64 v122; // [rsp+8h] [rbp-B8h]
  __int64 v123; // [rsp+10h] [rbp-B0h]
  __int64 v124; // [rsp+18h] [rbp-A8h]
  unsigned int v125; // [rsp+24h] [rbp-9Ch]
  unsigned int v126; // [rsp+28h] [rbp-98h]
  int v127; // [rsp+2Ch] [rbp-94h]
  __int64 *v128; // [rsp+30h] [rbp-90h]
  unsigned __int64 v129; // [rsp+30h] [rbp-90h]
  unsigned int v130; // [rsp+38h] [rbp-88h]
  unsigned int v131; // [rsp+38h] [rbp-88h]
  __int64 v132; // [rsp+38h] [rbp-88h]
  _QWORD *v133; // [rsp+38h] [rbp-88h]
  unsigned int v134; // [rsp+38h] [rbp-88h]
  __int64 v135; // [rsp+38h] [rbp-88h]
  __int64 v136; // [rsp+38h] [rbp-88h]
  __int64 v138; // [rsp+48h] [rbp-78h]
  __int64 v139; // [rsp+48h] [rbp-78h]
  _QWORD *v140; // [rsp+48h] [rbp-78h]
  int v141; // [rsp+48h] [rbp-78h]
  __int64 v142[10]; // [rsp+70h] [rbp-50h] BYREF

  v3 = a2;
  v127 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v86 = *(_QWORD **)(a1 + 160);
    if ( v86 )
      v87 = *((_DWORD *)v86 - 1);
    else
      v87 = 0;
    if ( !v127 )
    {
LABEL_130:
      v3 = a2;
      *(_DWORD *)(a1 + 128) += v127;
      goto LABEL_4;
    }
    v141 = 0;
    while ( 1 )
    {
      if ( v86 )
      {
        v94 = *((_DWORD *)v86 - 1);
        if ( v94 == *((_DWORD *)v86 - 2) )
        {
          v95 = (3 * v94 + 1) >> 1;
          v96 = 8 * v95 + 8;
          if ( 8 * v94 + 8 >= (unsigned int)v96 || v94 >= v95 )
          {
LABEL_158:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_737700(v142, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v142);
            sub_233E40((__int64)v142);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v97 = (unsigned int *)sub_186B300(v86 - 1, v96);
          v86 = v97 + 2;
          v98 = v97[1];
          *v97 = v95;
          *(_QWORD *)(a1 + 160) = v97 + 2;
          LODWORD(v97) = v98;
          v90 = &v86[v98];
          v89 = (_DWORD)v97 + 1;
        }
        else
        {
          v88 = v94;
          v89 = v94 + 1;
          v90 = &v86[v88];
        }
      }
      else
      {
        v104 = (_QWORD *)sub_186B270(0x18u);
        v89 = 1;
        *v104 = 2;
        v86 = v104 + 1;
        *(_QWORD *)(a1 + 160) = v86;
        v90 = v86;
      }
      *v90 = 0;
      *((_DWORD *)v86 - 1) = v89;
      v91 = *(_QWORD **)(a1 + 528);
      if ( v91 )
      {
        v92 = *((unsigned int *)v91 - 1);
        if ( (_DWORD)v92 == *((_DWORD *)v91 - 2) )
        {
          v99 = (unsigned int)(3 * v92 + 1) >> 1;
          v100 = 4 * v99 + 8;
          if ( 4 * (int)v92 + 8 >= (unsigned int)v100 || (unsigned int)v92 >= v99 )
            goto LABEL_158;
          v101 = (unsigned int *)sub_186B300(v91 - 1, v100);
          v91 = v101 + 2;
          *v101 = v99;
          v102 = v101[1];
          *(_QWORD *)(a1 + 528) = v91;
          v93 = (_DWORD *)v91 + v102;
        }
        else
        {
          v93 = (_DWORD *)v91 + v92;
        }
      }
      else
      {
        v103 = (_QWORD *)sub_186B270(0x10u);
        v91 = v103 + 1;
        *v103 = 2;
        *(_QWORD *)(a1 + 528) = v103 + 1;
        v93 = v103 + 1;
      }
      *v93 = v87;
      ++v141;
      ++*((_DWORD *)v91 - 1);
      if ( v141 == v127 )
        goto LABEL_130;
      v86 = *(_QWORD **)(a1 + 160);
    }
  }
LABEL_4:
  while ( 1 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(v3 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_73C1C0(a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(unsigned int *)(a2 + 20);
  v121 = v10;
  v122 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v125 = *(_DWORD *)(a2 + 72);
  v126 = *(_DWORD *)(a2 + 76);
  v138 = 16 * v11;
  if ( v125 )
  {
    v12 = *(_QWORD *)(a2 + 16 * v11 + 80);
    v139 = a2 + 16 * v11;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v13 = (_QWORD *)sub_186B270(0x18u);
    *v13 = 2;
    v14 = a2 + 8 * (v125 + 2 * v11);
    v15 = v13 + 1;
    v16 = 1;
    v17 = v15;
    while ( 1 )
    {
      v139 += 8;
      *v15 = v12;
      *((_DWORD *)v17 - 1) = v16;
      if ( v139 == v14 )
        break;
      v12 = *(_QWORD *)(v139 + 80);
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v18 = *((_DWORD *)v17 - 1);
      if ( v18 == *((_DWORD *)v17 - 2) )
      {
        v20 = (3 * v18 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v18 + 8 >= (unsigned int)v21 || v18 >= v20 )
        {
          v119 = (char **)__cxa_allocate_exception(0x28u);
          sub_737700(v142, "Overflow encountered when expanding vector");
          *v119 = (char *)off_1C63128;
          sub_2333C0(v119 + 1, v142);
          sub_233E40((__int64)v142);
          __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v130 = (3 * v18 + 1) >> 1;
        v22 = (unsigned int *)sub_186B300(v17 - 1, v21);
        v17 = v22 + 2;
        *v22 = v130;
        LODWORD(v22) = v22[1];
        v15 = &v17[(unsigned int)v22];
        v16 = (_DWORD)v22 + 1;
      }
      else
      {
        v19 = v18;
        v16 = v18 + 1;
        v15 = &v17[v19];
      }
    }
    v124 = *(_QWORD *)(a1 + 8);
    v138 = 16LL * *(unsigned int *)(a2 + 20);
  }
  else
  {
    v124 = v10;
    v17 = nullptr;
  }
  if ( v126 )
  {
    v23 = (__int64 *)(a2 + v138 + 80);
    v24 = *v23;
    if ( *v23 )
      ++*(_DWORD *)(v24 + 8);
    v25 = (_QWORD *)sub_186B270(0x18u);
    v26 = v25 + 1;
    *v25 = 2;
    v27 = 1;
    v28 = v138;
    v140 = v26;
    v29 = (__int64 *)(v28 + a2 + 8LL * v126 + 80);
    while ( 1 )
    {
      ++v23;
      *v26 = v24;
      *((_DWORD *)v140 - 1) = v27;
      if ( v23 == v29 )
        break;
      v24 = *v23;
      if ( *v23 )
        ++*(_DWORD *)(v24 + 8);
      v30 = *((_DWORD *)v140 - 1);
      if ( v30 == *((_DWORD *)v140 - 2) )
      {
        v32 = (3 * v30 + 1) >> 1;
        v33 = 8 * v32 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v33 || v30 >= v32 )
        {
          v118 = (char **)__cxa_allocate_exception(0x28u);
          sub_737700(v142, "Overflow encountered when expanding vector");
          *v118 = (char *)off_1C63128;
          sub_2333C0(v118 + 1, v142);
          sub_233E40((__int64)v142);
          __cxa_throw(v118, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v128 = v29;
        v131 = (3 * v30 + 1) >> 1;
        v34 = (unsigned int *)sub_186B300(v140 - 1, v33);
        v35 = v34[1];
        v36 = v34 + 2;
        v140 = v34 + 2;
        *v34 = v131;
        LODWORD(v34) = v35;
        v26 = &v36[2 * v35];
        v29 = v128;
        v27 = (_DWORD)v34 + 1;
      }
      else
      {
        v31 = v30;
        v27 = v30 + 1;
        v26 = &v140[v31];
      }
    }
    v123 = *(_QWORD *)(a1 + 8);
    v37 = sub_15DBA30(v123, a2, v125, (_DWORD)v17, v126, (_DWORD)v140, v122);
  }
  else
  {
    v140 = nullptr;
    v123 = v124;
    v37 = sub_15DBA30(v124, a2, v125, (_DWORD)v17, 0, 0, v122);
  }
  v38 = v37;
  v39 = *(_QWORD *)(a1 + 504);
  v40 = *(_QWORD *)(a1 + 496);
  if ( v37 )
  {
    ++*(_DWORD *)(v37 + 8);
    if ( v40 )
    {
      v41 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v41 )
        sub_15D7BC0(v39, v40);
    }
    *(_QWORD *)(a1 + 496) = 0;
    if ( a2 == v38 )
      goto LABEL_51;
  }
  else
  {
    if ( v40 )
    {
      v41 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v41 )
        sub_15D7BC0(v39, v40);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  v42 = *(_QWORD *)(a1 + 8);
  v43 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  if ( v43 )
  {
    ++*(_DWORD *)(v43 + 8);
    *(_QWORD *)(a1 + 496) = v43;
    v44 = sub_15DE700(v42);
    v45 = v44;
    if ( v44 )
      ++*(_DWORD *)(v44 + 8);
    v46 = *(_QWORD *)(a1 + 496);
    if ( v46 )
    {
      v47 = *(_QWORD *)(a1 + 504);
      v41 = (*(_DWORD *)(v46 + 8))-- == 1;
      if ( v41 )
      {
        v132 = v44;
        sub_15D7BC0(v47, v46);
        v45 = v132;
      }
    }
    *(_QWORD *)(a1 + 496) = v45;
    v48 = sub_15DE750(*(_QWORD *)(a1 + 8));
  }
  else
  {
    *(_QWORD *)(a1 + 496) = 0;
    v48 = sub_15DE370(v42);
  }
  v49 = v48;
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  v50 = *(_QWORD *)(a1 + 496);
  if ( v50 )
  {
    v51 = *(_QWORD *)(a1 + 504);
    v41 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v51, v50);
  }
  *(_QWORD *)(a1 + 496) = v49;
  if ( v38 )
LABEL_51:
    ++*(_DWORD *)(v38 + 8);
  v52 = *(_QWORD *)(a1 + 480);
  if ( v52 )
  {
    v53 = *(_QWORD *)(a1 + 488);
    v41 = (*(_DWORD *)(v52 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v53, v52);
  }
  v54 = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v38;
  if ( !v54 )
    goto LABEL_141;
  v55 = *(_DWORD *)(a3 + 12);
  v56 = (unsigned __int64)&v54[*((unsigned int *)v54 - 1)];
  v57 = &v54[v55];
  if ( (unsigned __int64)v57 >= v56 )
    goto LABEL_63;
  do
  {
    while ( 1 )
    {
      v58 = *v57;
      if ( *v57 )
      {
        v59 = *(_QWORD *)(a1 + 80);
        v41 = (*(_DWORD *)(v58 + 8))-- == 1;
        if ( v41 )
          break;
      }
      if ( (unsigned __int64)++v57 >= v56 )
        goto LABEL_62;
    }
    v129 = v56;
    v133 = v57;
    sub_15D7BC0(v59, v58);
    v56 = v129;
    v57 = v133 + 1;
  }
  while ( (unsigned __int64)(v133 + 1) < v129 );
LABEL_62:
  v54 = *(_QWORD **)(a1 + 88);
  if ( v54 )
  {
LABEL_63:
    v60 = *(_QWORD *)(a1 + 496);
    *((_DWORD *)v54 - 1) = v55;
    if ( v60 )
    {
      ++*(_DWORD *)(v60 + 8);
      v55 = *((_DWORD *)v54 - 1);
    }
    if ( *((_DWORD *)v54 - 2) == v55 )
    {
      v109 = (3 * v55 + 1) >> 1;
      v110 = 8 * v109 + 8;
      if ( 8 * v55 + 8 >= (unsigned int)v110 || v55 >= v109 )
      {
        v116 = (char **)__cxa_allocate_exception(0x28u);
        sub_737700(v142, "Overflow encountered when expanding vector");
        *v116 = (char *)off_1C63128;
        sub_2333C0(v116 + 1, v142);
        sub_233E40((__int64)v142);
        __cxa_throw(v116, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v135 = v60;
      v111 = (unsigned int *)sub_186B300(v54 - 1, v110);
      v112 = v111[1];
      v54 = v111 + 2;
      *(_QWORD *)(a1 + 88) = v111 + 2;
      v60 = v135;
      *v111 = (3 * v55 + 1) >> 1;
      LODWORD(v111) = v112;
      v61 = &v54[v112];
      v62 = (_DWORD)v111 + 1;
    }
    else
    {
      v61 = &v54[*((unsigned int *)v54 - 1)];
      v62 = *((_DWORD *)v54 - 1) + 1;
    }
  }
  else
  {
LABEL_141:
    v113 = *(_QWORD *)(a1 + 496);
    if ( v113 )
      ++*(_DWORD *)(v113 + 8);
    v136 = v113;
    v114 = (_QWORD *)sub_186B270(0x18u);
    v54 = v114 + 1;
    *v114 = 2;
    v60 = v136;
    v62 = 1;
    *(_QWORD *)(a1 + 88) = v54;
    v61 = v54;
  }
  *v61 = v60;
  *((_DWORD *)v54 - 1) = v62;
  if ( v38 )
  {
    v41 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v123, v38);
  }
  v63 = *(_QWORD **)(a1 + 56);
  if ( !v63 )
    goto LABEL_144;
  v64 = *(_DWORD *)(a3 + 12);
  v65 = (unsigned __int64)&v63[*((unsigned int *)v63 - 1)];
  v66 = &v63[v64];
  if ( (unsigned __int64)v66 >= v65 )
    goto LABEL_78;
  do
  {
    while ( 1 )
    {
      v67 = *v66;
      if ( *v66 )
      {
        v68 = *(_QWORD *)(a1 + 48);
        v41 = (*(_DWORD *)(v67 + 8))-- == 1;
        if ( v41 )
          break;
      }
      if ( (unsigned __int64)++v66 >= v65 )
        goto LABEL_77;
    }
    v134 = v64;
    sub_15D7BC0(v68, v67);
    ++v66;
    v64 = v134;
  }
  while ( (unsigned __int64)v66 < v65 );
LABEL_77:
  v63 = *(_QWORD **)(a1 + 56);
  if ( v63 )
  {
LABEL_78:
    v69 = *(_QWORD *)(a1 + 480);
    *((_DWORD *)v63 - 1) = v64;
    if ( v69 )
    {
      ++*(_DWORD *)(v69 + 8);
      v64 = *((_DWORD *)v63 - 1);
    }
    if ( *((_DWORD *)v63 - 2) == v64 )
    {
      v105 = (3 * v64 + 1) >> 1;
      v106 = 8 * v105 + 8;
      if ( 8 * v64 + 8 >= (unsigned int)v106 || v64 >= v105 )
      {
        v117 = (char **)__cxa_allocate_exception(0x28u);
        sub_737700(v142, "Overflow encountered when expanding vector");
        *v117 = (char *)off_1C63128;
        sub_2333C0(v117 + 1, v142);
        sub_233E40((__int64)v142);
        __cxa_throw(v117, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v107 = (unsigned int *)sub_186B300(v63 - 1, v106);
      v108 = v107[1];
      v63 = v107 + 2;
      *v107 = v105;
      *(_QWORD *)(a1 + 56) = v107 + 2;
      LODWORD(v107) = v108;
      v70 = &v63[v108];
      v71 = (_DWORD)v107 + 1;
    }
    else
    {
      v70 = &v63[*((unsigned int *)v63 - 1)];
      v71 = *((_DWORD *)v63 - 1) + 1;
    }
  }
  else
  {
LABEL_144:
    v69 = *(_QWORD *)(a1 + 480);
    if ( v69 )
      ++*(_DWORD *)(v69 + 8);
    v115 = (_QWORD *)sub_186B270(0x18u);
    v63 = v115 + 1;
    *v115 = 2;
    v71 = 1;
    *(_QWORD *)(a1 + 56) = v63;
    v70 = v63;
  }
  *v70 = v69;
  *((_DWORD *)v63 - 1) = v71;
  v72 = *(_QWORD *)(a1 + 160);
  if ( v72 )
    *(_DWORD *)(v72 - 4) -= v127;
  v73 = *(_QWORD *)(a1 + 528);
  if ( v73 )
    *(_DWORD *)(v73 - 4) -= v127;
  sub_15844D0(a1);
  v74 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, v74, *(_QWORD *)(a1 + 496));
    v74 = *(_QWORD *)(a1 + 480);
  }
  if ( v74 )
  {
    v75 = *(_QWORD *)(a1 + 488);
    v41 = (*(_DWORD *)(v74 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v75, v74);
  }
  v76 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v76 && (v77 = *(_QWORD *)(a1 + 504), v41 = *(_DWORD *)(v76 + 8) == 1, --*(_DWORD *)(v76 + 8), v41) )
  {
    sub_15D7BC0(v77, v76);
    v78 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v78 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v79 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v79 - 1;
  if ( a2 != v78 && v79 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v79 - 2) + 8) |= 2u;
  v80 = v140;
  if ( v140 )
  {
    v81 = (unsigned __int64)&v140[*((unsigned int *)v140 - 1)];
    if ( (unsigned __int64)v140 < v81 )
    {
      do
      {
        while ( 1 )
        {
          v82 = *v80;
          if ( *v80 )
          {
            v41 = (*(_DWORD *)(v82 + 8))-- == 1;
            if ( v41 )
              break;
          }
          if ( (unsigned __int64)++v80 >= v81 )
            goto LABEL_104;
        }
        ++v80;
        sub_15D7BC0(v124, v82);
      }
      while ( (unsigned __int64)v80 < v81 );
    }
LABEL_104:
    result = sub_186B220(v140 - 1);
  }
  if ( v17 )
  {
    v83 = v17;
    if ( v17 < &v17[*((unsigned int *)v17 - 1)] )
    {
      v84 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
      do
      {
        v85 = *v83;
        if ( *v83 )
        {
          v41 = (*(_DWORD *)(v85 + 8))-- == 1;
          if ( v41 )
            sub_15D7BC0(v121, v85);
        }
        ++v83;
      }
      while ( (unsigned __int64)v83 < v84 );
    }
    return sub_186B220(v17 - 1);
  }
  return result;
}

