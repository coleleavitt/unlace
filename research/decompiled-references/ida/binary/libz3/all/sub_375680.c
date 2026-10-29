__int64 __fastcall sub_375680(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // rax
  unsigned int *v6; // r15
  _QWORD *v7; // rbx
  __int64 v8; // r12
  _DWORD *v9; // rax
  bool v10; // zf
  _QWORD *v11; // r12
  __int64 v12; // rsi
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r14
  _DWORD *v18; // r9
  _QWORD *v19; // rax
  void *v20; // r9
  __int64 v21; // rcx
  char *v22; // rdx
  char *v23; // r14
  __int64 i; // rax
  _DWORD *v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rdx
  char *v28; // r8
  unsigned __int64 v29; // r12
  __int64 v30; // rdx
  int v31; // eax
  _QWORD *v32; // rdx
  __int64 v33; // rax
  char *v34; // r8
  void *v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // r9d
  unsigned int v38; // edx
  unsigned int *v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // r8d
  unsigned int v42; // edx
  unsigned int *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // r8
  int v47; // eax
  int v48; // esi
  int v49; // eax
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rsi
  unsigned int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  char *v56; // rdx
  int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rdi
  unsigned int v61; // edx
  size_t v62; // rsi
  unsigned int *v63; // rax
  _DWORD *v64; // rcx
  __int64 v65; // rcx
  char *v66; // rdx
  char *v67; // r13
  unsigned __int64 v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 *v71; // r13
  unsigned __int64 v72; // rbx
  __int64 v73; // rsi
  __int64 *v74; // r12
  unsigned __int64 v75; // r13
  __int64 v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // rdx
  unsigned __int64 v79; // rdx
  char *v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rax
  char *v83; // rdx
  char *v84; // rcx
  __int64 v85; // rsi
  unsigned int v86; // eax
  unsigned int *v87; // rdi
  _DWORD *v88; // r9
  unsigned int v89; // eax
  unsigned int v90; // r8d
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rsi
  __int64 v96; // rdx
  char **exception; // r12
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // rdx
  void *v101; // [rsp+0h] [rbp-D8h]
  char *v102; // [rsp+0h] [rbp-D8h]
  void *v103; // [rsp+0h] [rbp-D8h]
  void *v104; // [rsp+0h] [rbp-D8h]
  void *v105; // [rsp+0h] [rbp-D8h]
  char *v106; // [rsp+0h] [rbp-D8h]
  _QWORD *v107; // [rsp+0h] [rbp-D8h]
  char **v108; // [rsp+0h] [rbp-D8h]
  unsigned __int8 v110; // [rsp+8h] [rbp-D0h]
  char *v111; // [rsp+8h] [rbp-D0h]
  _DWORD *v112; // [rsp+8h] [rbp-D0h]
  char **v113; // [rsp+8h] [rbp-D0h]
  char **v114; // [rsp+8h] [rbp-D0h]
  _QWORD *v116; // [rsp+10h] [rbp-C8h]
  char *v117; // [rsp+18h] [rbp-C0h]
  unsigned int v118; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v119; // [rsp+18h] [rbp-C0h]
  unsigned int v120; // [rsp+18h] [rbp-C0h]
  unsigned int v121; // [rsp+20h] [rbp-B8h]
  __int64 v122; // [rsp+20h] [rbp-B8h]
  char *v123; // [rsp+20h] [rbp-B8h]
  __int64 v124; // [rsp+20h] [rbp-B8h]
  __int64 v125; // [rsp+20h] [rbp-B8h]
  __int64 v126; // [rsp+20h] [rbp-B8h]
  __int64 v127; // [rsp+20h] [rbp-B8h]
  __int64 v128; // [rsp+20h] [rbp-B8h]
  __int64 v129; // [rsp+20h] [rbp-B8h]
  int v130; // [rsp+20h] [rbp-B8h]
  __int64 v131; // [rsp+20h] [rbp-B8h]
  char *v132; // [rsp+20h] [rbp-B8h]
  __int64 v133; // [rsp+20h] [rbp-B8h]
  char *v134; // [rsp+28h] [rbp-B0h]
  __int64 v135; // [rsp+28h] [rbp-B0h]
  __int64 v136; // [rsp+28h] [rbp-B0h]
  unsigned int v137; // [rsp+28h] [rbp-B0h]
  int v138; // [rsp+28h] [rbp-B0h]
  __int64 v139; // [rsp+28h] [rbp-B0h]
  __int64 v140; // [rsp+28h] [rbp-B0h]
  char *v141; // [rsp+28h] [rbp-B0h]
  __int64 v142; // [rsp+28h] [rbp-B0h]
  __int64 v143; // [rsp+30h] [rbp-A8h]
  __int64 v144; // [rsp+38h] [rbp-A0h]
  __int64 v145; // [rsp+38h] [rbp-A0h]
  __int64 v146[11]; // [rsp+80h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = sub_15E1A70(v2);
  v4 = v3;
  if ( v3 )
    *(_DWORD *)(v3 + 8) += 2;
  v5 = (_QWORD *)sub_186B270(0x18u);
  v5[1] = v4;
  v6 = (unsigned int *)v5;
  v7 = v5 + 1;
  *v5 = 0x100000002LL;
  if ( (unsigned int)sub_E60CB0(*(std::ios_base **)(a1 + 32), 1, (int)v5 + 8) == -1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 856LL);
    if ( v14 )
      ++*(_DWORD *)(v14 + 8);
    v15 = *a2;
    if ( *a2 )
    {
      v16 = a2[1];
      v10 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v16, v15);
    }
    *a2 = v14;
    if ( v4 )
    {
      v10 = (*(_DWORD *)(v4 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v2, v4);
    }
    v110 = 1;
    goto LABEL_11;
  }
  v8 = *a2;
  if ( *(_WORD *)(*a2 + 4)
    || (v9 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL)) == nullptr
    || *v9
    || v9[1] != 6
    || (v17 = *(unsigned int *)(v8 + 24), !(_DWORD)v17) )
  {
    if ( v4 )
    {
      v10 = (*(_DWORD *)(v4 + 8))-- == 1;
      if ( v10 )
        sub_15D7BC0(v2, v4);
    }
    v110 = 0;
    goto LABEL_11;
  }
  v18 = *(_DWORD **)(v8 + 32);
  if ( v18 )
    ++v18[2];
  v101 = v18;
  v19 = (_QWORD *)sub_186B270(0x18u);
  v20 = v101;
  v21 = v8 + 8 * v17;
  v22 = (char *)(v19 + 1);
  *v19 = 2;
  v23 = (char *)(v19 + 1);
  for ( i = 1; ; i = (unsigned int)((_DWORD)v43 + 1) )
  {
    v8 += 8;
    *(_QWORD *)v22 = v20;
    *((_DWORD *)v23 - 1) = i;
    if ( v21 == v8 )
      break;
    while ( 1 )
    {
      v25 = *(_DWORD **)(v8 + 32);
      if ( v25 )
        ++v25[2];
      v26 = *((_DWORD *)v23 - 1);
      if ( v26 == *((_DWORD *)v23 - 2) )
        break;
      v27 = v26;
      v8 += 8;
      i = v26 + 1;
      *(_QWORD *)&v23[8 * v27] = v25;
      *((_DWORD *)v23 - 1) = i;
      if ( v21 == v8 )
        goto LABEL_37;
    }
    v41 = (3 * v26 + 1) >> 1;
    v42 = 8 * v41 + 8;
    if ( 8 * v26 + 8 >= v42 || v26 >= v41 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_C29C8(v146, "Overflow encountered when expanding vector", v98);
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v146);
      sub_233E40((__int64)v146);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v122 = v21;
    v118 = (3 * v26 + 1) >> 1;
    v104 = v25;
    v43 = (unsigned int *)sub_186B300(v23 - 8, v42);
    v44 = v43[1];
    v23 = (char *)(v43 + 2);
    v20 = v104;
    v21 = v122;
    *v43 = v118;
    LODWORD(v43) = v44;
    v22 = &v23[8 * v44];
  }
LABEL_37:
  v117 = &v23[8 * i];
  if ( v23 != v117 )
  {
    v28 = v23;
    v29 = 0;
    do
    {
      v102 = v28;
      v33 = sub_15EC2C0(*(_QWORD *)(a1 + 16), *(_QWORD *)v28);
      v34 = v102;
      v35 = (void *)v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      if ( v29 )
      {
        v36 = *(_DWORD *)(v29 - 4);
        if ( v36 == *(_DWORD *)(v29 - 8) )
        {
          v37 = (3 * v36 + 1) >> 1;
          v38 = 8 * v37 + 8;
          if ( 8 * v36 + 8 >= v38 || v36 >= v37 )
          {
            v108 = (char **)__cxa_allocate_exception(0x28u);
            sub_C29C8(v146, "Overflow encountered when expanding vector", v100);
            *v108 = (char *)off_1C63128;
            sub_2333C0(v108 + 1, v146);
            sub_233E40((__int64)v146);
            __cxa_throw(v108, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v134 = v102;
          v121 = (3 * v36 + 1) >> 1;
          v103 = v35;
          v39 = (unsigned int *)sub_186B300((void *)(v29 - 8), v38);
          v40 = v39[1];
          v29 = (unsigned __int64)(v39 + 2);
          v35 = v103;
          v34 = v134;
          *v39 = v121;
          LODWORD(v39) = v40;
          v32 = (_QWORD *)(v29 + 8 * v40);
          v31 = (_DWORD)v39 + 1;
        }
        else
        {
          v30 = v36;
          v31 = v36 + 1;
          v32 = (_QWORD *)(v29 + 8 * v30);
        }
      }
      else
      {
        v123 = v102;
        v105 = (void *)v33;
        v45 = (_QWORD *)sub_186B270(0x18u);
        v35 = v105;
        v29 = (unsigned __int64)(v45 + 1);
        v34 = v123;
        *v45 = 2;
        v32 = v45 + 1;
        v31 = 1;
      }
      *v32 = v35;
      v28 = v34 + 8;
      *(_DWORD *)(v29 - 4) = v31;
    }
    while ( v117 != v28 );
    if ( *((_DWORD *)v23 - 1) )
      goto LABEL_53;
    v110 = 0;
    if ( !v4 )
      goto LABEL_95;
LABEL_165:
    v106 = nullptr;
LABEL_144:
    v10 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v10 )
    {
      sub_15D7BC0(v2, v4);
      if ( v106 )
        goto LABEL_86;
      goto LABEL_94;
    }
    if ( v106 )
      goto LABEL_86;
    if ( v29 )
    {
LABEL_95:
      v70 = *(unsigned int *)(v29 - 4);
      v71 = (__int64 *)v29;
      if ( v29 < v29 + 8 * v70 )
      {
        v107 = v7;
        v72 = v29 + 8 * v70;
        do
        {
          while ( 1 )
          {
            v73 = *v71;
            if ( *v71 )
            {
              v10 = (*(_DWORD *)(v73 + 8))-- == 1;
              if ( v10 )
                break;
            }
            if ( (unsigned __int64)++v71 >= v72 )
              goto LABEL_101;
          }
          ++v71;
          sub_15D7BC0(v2, v73);
        }
        while ( (unsigned __int64)v71 < v72 );
LABEL_101:
        v7 = v107;
      }
      sub_186B220((void *)(v29 - 8));
      goto LABEL_103;
    }
LABEL_104:
    v74 = (__int64 *)v23;
    v75 = (unsigned __int64)&v23[8 * *((unsigned int *)v23 - 1)];
    if ( (unsigned __int64)v23 < v75 )
    {
      do
      {
        while ( 1 )
        {
          v76 = *v74;
          if ( *v74 )
          {
            v10 = (*(_DWORD *)(v76 + 8))-- == 1;
            if ( v10 )
              break;
          }
          if ( (unsigned __int64)++v74 >= v75 )
            goto LABEL_110;
        }
        ++v74;
        sub_15D7BC0(v2, v76);
      }
      while ( (unsigned __int64)v74 < v75 );
    }
    goto LABEL_110;
  }
  v29 = 0;
  if ( !*((_DWORD *)v23 - 1) )
  {
    v110 = 0;
    if ( !v4 )
    {
LABEL_110:
      sub_186B220(v23 - 8);
      goto LABEL_11;
    }
    goto LABEL_165;
  }
LABEL_53:
  v106 = nullptr;
  v46 = 0;
  do
  {
    v60 = *(_QWORD *)(v29 + 8 * v46);
    v77 = *(_QWORD *)&v23[8 * v46];
    v143 = *(_QWORD *)(a1 + 16);
    if ( v60 )
    {
      v47 = *(_DWORD *)(v60 + 8);
      *(_DWORD *)(v60 + 8) = v47 + 1;
      if ( v77 )
      {
        ++*(_DWORD *)(v77 + 8);
        v47 = *(_DWORD *)(v60 + 8) - 1;
      }
      *(_DWORD *)(v60 + 8) = v47;
      if ( !v47 )
      {
        v139 = v46;
        v129 = v77;
        sub_15D7BC0(v2, v60);
        v77 = v129;
        v46 = v139;
      }
    }
    else if ( v77 )
    {
      ++*(_DWORD *)(v77 + 8);
      *(_QWORD *)(v29 + 8 * v46) = v77;
      v136 = v77;
      v125 = v46;
      v49 = sub_E60CB0(*(std::ios_base **)(a1 + 32), *(_DWORD *)(v29 - 4), v29);
      v50 = v125;
      v51 = v136;
      goto LABEL_60;
    }
    v48 = *(_DWORD *)(v29 - 4);
    *(_QWORD *)(v29 + 8 * v46) = v77;
    v135 = v77;
    v124 = v46;
    v49 = sub_E60CB0(*(std::ios_base **)(a1 + 32), v48, v29);
    v50 = v124;
    v51 = v135;
    if ( v60 )
      ++*(_DWORD *)(v60 + 8);
LABEL_60:
    v52 = *(_QWORD *)(v29 + 8 * v50);
    if ( v52 )
    {
      v10 = (*(_DWORD *)(v52 + 8))-- == 1;
      if ( v10 )
      {
        v145 = v50;
        v138 = v49;
        v128 = v51;
        sub_15D7BC0(v2, v52);
        v50 = v145;
        v49 = v138;
        v51 = v128;
      }
    }
    *(_QWORD *)(v29 + 8 * v50) = v60;
    if ( v49 == -1 )
    {
      v78 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 856LL);
      if ( v78 )
        ++*(_DWORD *)(v78 + 8);
      if ( !v60 )
      {
        *(_QWORD *)(v29 + 8 * v50) = v78;
        goto LABEL_73;
      }
      v130 = *(_DWORD *)(v60 + 8);
      v57 = v130 - 1;
      *(_DWORD *)(v60 + 8) = v130 - 1;
      if ( v130 == 1 )
      {
        v142 = v50;
        v133 = v78;
        sub_15D7BC0(v2, v60);
        v50 = v142;
        *(_QWORD *)(v29 + 8 * v142) = v133;
        v57 = *(_DWORD *)(v60 + 8);
      }
      else
      {
        *(_QWORD *)(v29 + 8 * v50) = v78;
      }
      goto LABEL_71;
    }
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    if ( v106 )
    {
      v53 = *((_DWORD *)v106 - 1);
      if ( v53 == *((_DWORD *)v106 - 2) )
      {
        v61 = (3 * v53 + 1) >> 1;
        v62 = 8 * v61 + 8;
        if ( 8 * v53 + 8 >= (unsigned int)v62 || v53 >= v61 )
        {
          v113 = (char **)__cxa_allocate_exception(0x28u);
          sub_C29C8(v146, "Overflow encountered when expanding vector", v96);
          *v113 = (char *)off_1C63128;
          sub_2333C0(v113 + 1, v146);
          sub_233E40((__int64)v146);
          __cxa_throw(v113, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v144 = v50;
        v137 = (3 * v53 + 1) >> 1;
        v126 = v51;
        v63 = (unsigned int *)sub_186B300(v106 - 8, v62);
        v64 = v63 + 2;
        v50 = v144;
        v106 = (char *)(v63 + 2);
        *v63 = v137;
        LODWORD(v63) = v63[1];
        v56 = (char *)&v64[2 * (unsigned int)v63];
        v51 = v126;
        v55 = (_DWORD)v63 + 1;
      }
      else
      {
        v54 = v53;
        v55 = v53 + 1;
        v56 = &v106[8 * v54];
      }
    }
    else
    {
      v140 = v50;
      v131 = v51;
      v82 = sub_186B270(0x18u) + 8;
      v51 = v131;
      v50 = v140;
      *(_QWORD *)(v82 - 8) = 2;
      v56 = (char *)v82;
      v106 = (char *)v82;
      v55 = 1;
    }
    *(_QWORD *)v56 = v51;
    *((_DWORD *)v106 - 1) = v55;
    if ( v60 )
    {
      v57 = *(_DWORD *)(v60 + 8);
LABEL_71:
      v58 = v57 - 1;
      *(_DWORD *)(v60 + 8) = v58;
      if ( !v58 )
      {
        v127 = v50;
        sub_15D7BC0(v143, v60);
        v50 = v127;
      }
    }
LABEL_73:
    v59 = *((unsigned int *)v23 - 1);
    v46 = v50 + 1;
  }
  while ( (unsigned int)v46 < (unsigned int)v59 );
  if ( !v106 )
  {
    if ( !(_DWORD)v59 )
    {
      if ( v4 )
      {
        v10 = (*(_DWORD *)(v4 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v2, v4);
      }
LABEL_158:
      v110 = 0;
      goto LABEL_95;
    }
    v79 = (unsigned __int64)&v23[8 * v59];
    if ( (unsigned __int64)v23 >= v79 )
    {
      *((_DWORD *)v23 - 1) = 0;
      goto LABEL_137;
    }
LABEL_117:
    v80 = v23;
    do
    {
      v81 = *(_QWORD *)v80;
      if ( *(_QWORD *)v80 )
      {
        v10 = (*(_DWORD *)(v81 + 8))-- == 1;
        if ( v10 )
        {
          v119 = v79;
          v111 = v80;
          sub_15D7BC0(v2, v81);
          v79 = v119;
          v80 = v111;
        }
      }
      v80 += 8;
    }
    while ( (unsigned __int64)v80 < v79 );
    *((_DWORD *)v23 - 1) = 0;
    if ( v106 )
    {
      v65 = *((unsigned int *)v106 - 1);
      goto LABEL_125;
    }
LABEL_137:
    v86 = 0;
    goto LABEL_138;
  }
  v65 = *((unsigned int *)v106 - 1);
  if ( (_DWORD)v59 != (_DWORD)v65 )
  {
    v79 = (unsigned __int64)&v23[8 * v59];
    if ( (unsigned __int64)v23 >= v79 )
    {
      *((_DWORD *)v23 - 1) = 0;
LABEL_125:
      if ( (_DWORD)v65 )
      {
        v83 = v106;
        v84 = &v106[8 * v65];
        do
        {
          v88 = *(_DWORD **)v83;
          if ( *(_QWORD *)v83 )
            ++v88[2];
          v89 = *((_DWORD *)v23 - 1);
          if ( v89 == *((_DWORD *)v23 - 2) )
          {
            v90 = (3 * v89 + 1) >> 1;
            v91 = 8 * v90 + 8;
            if ( 8 * v89 + 8 >= (unsigned int)v91 || v89 >= v90 )
            {
              v114 = (char **)__cxa_allocate_exception(0x28u);
              sub_C29C8(v146, "Overflow encountered when expanding vector", v99);
              *v114 = (char *)off_1C63128;
              sub_2333C0(v114 + 1, v146);
              sub_233E40((__int64)v146);
              __cxa_throw(v114, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v141 = v83;
            v132 = v84;
            v120 = (3 * v89 + 1) >> 1;
            v112 = v88;
            v92 = (unsigned int *)sub_186B300(v23 - 8, v91);
            v93 = v92[1];
            v23 = (char *)(v92 + 2);
            v88 = v112;
            v84 = v132;
            *v92 = v120;
            v83 = v141;
            v87 = &v92[2 * v93 + 2];
            v86 = v93 + 1;
          }
          else
          {
            v85 = v89;
            v86 = v89 + 1;
            v87 = (unsigned int *)&v23[8 * v85];
          }
          v83 += 8;
          *(_QWORD *)v87 = v88;
          *((_DWORD *)v23 - 1) = v86;
        }
        while ( v84 != v83 );
      }
      else
      {
        v86 = *((_DWORD *)v23 - 1);
      }
LABEL_138:
      v94 = sub_15EC240(v2, v86);
      if ( v94 )
        ++*(_DWORD *)(v94 + 8);
      v95 = *a2;
      *a2 = v94;
      if ( v95 )
      {
        v10 = (*(_DWORD *)(v95 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v2, v95);
      }
      v110 = 1;
      if ( !v4 )
      {
        if ( v106 )
          goto LABEL_86;
        goto LABEL_95;
      }
      goto LABEL_144;
    }
    goto LABEL_117;
  }
  if ( !v4 )
  {
    v66 = &v106[8 * v59];
    v110 = 0;
    if ( v106 < v66 )
      goto LABEL_87;
    sub_186B220(v106 - 8);
    goto LABEL_158;
  }
  v10 = (*(_DWORD *)(v4 + 8))-- == 1;
  if ( v10 )
    sub_15D7BC0(v2, v4);
  v110 = 0;
LABEL_86:
  v66 = &v106[8 * *((unsigned int *)v106 - 1)];
  if ( v106 < v66 )
  {
LABEL_87:
    v116 = v7;
    v67 = v106;
    v68 = (unsigned __int64)v66;
    do
    {
      while ( 1 )
      {
        v69 = *(_QWORD *)v67;
        if ( *(_QWORD *)v67 )
        {
          v10 = (*(_DWORD *)(v69 + 8))-- == 1;
          if ( v10 )
            break;
        }
        v67 += 8;
        if ( (unsigned __int64)v67 >= v68 )
          goto LABEL_92;
      }
      v67 += 8;
      sub_15D7BC0(v2, v69);
    }
    while ( (unsigned __int64)v67 < v68 );
LABEL_92:
    v7 = v116;
  }
  sub_186B220(v106 - 8);
LABEL_94:
  if ( v29 )
    goto LABEL_95;
LABEL_103:
  if ( v23 )
    goto LABEL_104;
LABEL_11:
  v11 = &v7[v6[1]];
  while ( v7 < v11 )
  {
    while ( 1 )
    {
      v12 = *v7;
      if ( *v7 )
      {
        v10 = (*(_DWORD *)(v12 + 8))-- == 1;
        if ( v10 )
          break;
      }
      if ( ++v7 >= v11 )
        goto LABEL_17;
    }
    ++v7;
    sub_15D7BC0(v2, v12);
  }
LABEL_17:
  sub_186B220(v6);
  return v110;
}

