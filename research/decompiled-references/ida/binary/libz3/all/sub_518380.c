void *__fastcall sub_518380(__int64 a1, const void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // r15
  __int64 (__fastcall *v5)(__int64, __int64, _QWORD *); // rax
  void *v6; // r13
  _DWORD *v7; // rax
  __int64 v8; // rax
  _DWORD *v9; // r12
  unsigned int v10; // r14d
  _QWORD *v11; // rax
  unsigned int v12; // ebx
  size_t v13; // rsi
  unsigned int *v14; // rax
  unsigned int v15; // eax
  _DWORD *v16; // rbp
  unsigned int v17; // ebx
  unsigned int v18; // r9d
  __int64 v19; // rbx
  unsigned int v20; // edx
  unsigned int *v21; // rsi
  unsigned int v22; // eax
  _QWORD *v23; // r8
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // r9d
  __int64 v27; // r10
  unsigned int v28; // r11d
  __int64 v29; // r9
  _QWORD *v30; // r10
  __int64 v31; // rax
  __int64 v32; // rsi
  int *v33; // rax
  int *v34; // rsi
  int v35; // edi
  __int64 v36; // rax
  __int64 v37; // r9
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rsi
  int v41; // eax
  __int64 *v42; // rsi
  unsigned int v43; // r9d
  int v44; // r8d
  unsigned int v45; // ecx
  _DWORD *v46; // rbx
  unsigned int v47; // eax
  unsigned int v48; // edx
  __int64 v49; // rax
  unsigned int *v50; // rax
  unsigned int v51; // edx
  __int64 v52; // rax
  unsigned int *v53; // rax
  unsigned int v55; // eax
  __int64 v56; // rdx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  __int64 v59; // r10
  __int64 v60; // rdx
  unsigned int v61; // ecx
  unsigned int v62; // eax
  unsigned int v63; // edx
  __int64 v64; // rax
  unsigned int *v65; // rax
  unsigned int v66; // edx
  unsigned int v67; // ebx
  unsigned int v68; // eax
  __int64 v69; // rcx
  unsigned int v70; // esi
  unsigned int v71; // eax
  __int64 v72; // r9
  __int64 v73; // rcx
  unsigned int v74; // esi
  int v75; // edx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  unsigned int v78; // eax
  __int64 v79; // rdi
  unsigned int *v80; // rsi
  unsigned int v81; // r10d
  size_t v82; // rsi
  unsigned int *v83; // rax
  unsigned int v84; // r8d
  size_t v85; // rsi
  unsigned int *v86; // rax
  __int64 v87; // rsi
  unsigned int v88; // r10d
  size_t v89; // rsi
  unsigned int *v90; // rax
  int v91; // r9d
  unsigned int v92; // eax
  unsigned int v93; // r15d
  unsigned int v94; // eax
  __int64 v95; // rsi
  unsigned int *v96; // rcx
  unsigned int v97; // edx
  size_t v98; // rsi
  unsigned int *v99; // rax
  unsigned int v100; // ecx
  size_t v101; // rsi
  unsigned int *v102; // rax
  unsigned int v103; // r9d
  size_t v104; // rsi
  unsigned int *v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // rax
  _QWORD *v110; // rax
  char **v111; // r14
  char **v112; // r14
  char **v113; // r14
  char **v114; // r14
  char **exception; // rbp
  _DWORD *v116; // [rsp+8h] [rbp-90h]
  unsigned int v117; // [rsp+8h] [rbp-90h]
  unsigned int v118; // [rsp+10h] [rbp-88h]
  unsigned int v119; // [rsp+10h] [rbp-88h]
  unsigned int v120; // [rsp+14h] [rbp-84h]
  unsigned int v121; // [rsp+14h] [rbp-84h]
  unsigned int v122; // [rsp+14h] [rbp-84h]
  int v123; // [rsp+14h] [rbp-84h]
  unsigned int v124; // [rsp+14h] [rbp-84h]
  _QWORD *v125; // [rsp+18h] [rbp-80h]
  unsigned int v126; // [rsp+18h] [rbp-80h]
  int v127; // [rsp+18h] [rbp-80h]
  unsigned int v128; // [rsp+18h] [rbp-80h]
  unsigned int v129; // [rsp+18h] [rbp-80h]
  unsigned int v130; // [rsp+18h] [rbp-80h]
  unsigned int v131; // [rsp+18h] [rbp-80h]
  unsigned int v132; // [rsp+18h] [rbp-80h]
  unsigned int v133; // [rsp+18h] [rbp-80h]
  unsigned int v134; // [rsp+20h] [rbp-78h]
  _QWORD *v135; // [rsp+20h] [rbp-78h]
  __int64 v136; // [rsp+20h] [rbp-78h]
  unsigned int v137; // [rsp+20h] [rbp-78h]
  unsigned int v138; // [rsp+20h] [rbp-78h]
  int v139; // [rsp+20h] [rbp-78h]
  int v140; // [rsp+20h] [rbp-78h]
  __int64 v141; // [rsp+20h] [rbp-78h]
  unsigned int v142; // [rsp+28h] [rbp-70h]
  unsigned int v143; // [rsp+28h] [rbp-70h]
  unsigned int v144; // [rsp+28h] [rbp-70h]
  int v145; // [rsp+28h] [rbp-70h]
  int v146; // [rsp+28h] [rbp-70h]
  unsigned int v147; // [rsp+28h] [rbp-70h]
  unsigned int v148; // [rsp+28h] [rbp-70h]
  unsigned int v149; // [rsp+28h] [rbp-70h]
  unsigned int v150; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v151; // [rsp+2Ch] [rbp-6Ch]
  __int64 v152[11]; // [rsp+40h] [rbp-58h] BYREF

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = v2[1];
  v4 = v2;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v3 + 64LL);
  if ( v5 == sub_512280 )
  {
    v6 = (void *)sub_186B270(0xE0u);
    sub_511520((__int64)v6, v3, (_QWORD *)(a1 + 8), 0);
    goto LABEL_4;
  }
  v6 = (void *)v5(v3, 0, (_QWORD *)(a1 + 8));
  if ( v6 )
  {
LABEL_4:
    v6 = __dynamic_cast(
           v6,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::interval_relation,
           0);
    v7 = *(_DWORD **)(a1 + 16);
    v116 = v7;
    if ( v7 )
      goto LABEL_5;
    goto LABEL_106;
  }
  v7 = *(_DWORD **)(a1 + 16);
  v116 = v7;
  if ( v7 )
  {
LABEL_5:
    v118 = *(v7 - 1);
    v8 = *((_QWORD *)v6 + 2);
    if ( v8 )
      goto LABEL_6;
LABEL_107:
    v109 = v4[2];
    if ( !v109 )
      return v6;
    v10 = *(_DWORD *)(v109 - 4);
    if ( !v10 )
      return v6;
    v120 = 0;
LABEL_8:
    v11 = (_QWORD *)sub_186B270(0x10u);
    v9 = v11 + 1;
    *v11 = 2;
    while ( 1 )
    {
      v15 = *(v9 - 2);
      if ( v15 >= v10 )
        break;
      v12 = (3 * v15 + 1) >> 1;
      v13 = 4 * v12 + 8;
      if ( 4 * v15 + 8 >= (unsigned int)v13 || v15 >= v12 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v152, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v152);
        sub_233E40((__int64)v152);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v14 = (unsigned int *)sub_186B300(v9 - 2, v13);
      *v14 = v12;
      v9 = v14 + 2;
    }
    *(v9 - 1) = v10;
    v16 = nullptr;
    v17 = 0;
    memset(v9, 255, 4LL * v10);
    v134 = 0;
    v18 = 0;
    while ( 1 )
    {
      while ( v18 < v118 && v116[v18] == v17 )
      {
        ++v17;
        ++v18;
        if ( v17 == v10 )
          goto LABEL_17;
      }
      v55 = v17;
      do
      {
        v56 = v55;
        v57 = v55;
        v55 = *(_DWORD *)(*(_QWORD *)(v4[27] + 16LL) + 4LL * v55);
      }
      while ( v57 != v55 );
      v58 = v134;
      v59 = *(_QWORD *)v4[18] + 112 * v56;
      do
      {
        v60 = v58;
        v61 = v58;
        v58 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 27) + 16LL) + 4LL * v58);
      }
      while ( v61 != v58 );
      v126 = v18;
      sub_B290A0(**((_QWORD **)v6 + 18) + 112 * v60, v59);
      v18 = v126;
      v62 = v17;
      do
      {
        v63 = v62;
        v62 = *(_DWORD *)(*(_QWORD *)(v4[27] + 16LL) + 4LL * v62);
      }
      while ( v63 != v62 );
      if ( v16 )
      {
        v64 = (unsigned int)*(v16 - 1);
        if ( (_DWORD)v64 == *(v16 - 2) )
        {
          v81 = (unsigned int)(3 * v64 + 1) >> 1;
          v82 = 4 * v81 + 8;
          if ( 4 * (int)v64 + 8 >= (unsigned int)v82 || (unsigned int)v64 >= v81 )
          {
LABEL_116:
            v112 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v152, "Overflow encountered when expanding vector");
            *v112 = (char *)off_1C63128;
            sub_2333C0(v112 + 1, v152);
            sub_233E40((__int64)v152);
            __cxa_throw(v112, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v150 = (unsigned int)(3 * v64 + 1) >> 1;
          v143 = v126;
          v128 = v63;
          v83 = (unsigned int *)sub_186B300(v16 - 2, v82);
          v16 = v83 + 2;
          v63 = v128;
          v18 = v143;
          *v83 = v150;
          v65 = &v83[v83[1] + 2];
        }
        else
        {
          v65 = &v16[v64];
        }
      }
      else
      {
        v149 = v126;
        v133 = v63;
        v107 = (_QWORD *)sub_186B270(0x10u);
        v16 = v107 + 1;
        v63 = v133;
        v18 = v149;
        *v107 = 2;
        v65 = (unsigned int *)(v107 + 1);
      }
      *v65 = v63;
      v66 = v17 + 1;
      ++*(v16 - 1);
      if ( v17 + 1 == v10 )
        break;
      if ( v18 >= v118 )
      {
        v67 = v134 - v17;
        while ( 1 )
        {
          v68 = v66;
          do
          {
            v69 = v68;
            v70 = v68;
            v68 = *(_DWORD *)(*(_QWORD *)(v4[27] + 16LL) + 4LL * v68);
          }
          while ( v68 != v70 );
          v71 = v66 + v67;
          v72 = *(_QWORD *)v4[18] + 112 * v69;
          do
          {
            v73 = v71;
            v74 = v71;
            v71 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 27) + 16LL) + 4LL * v71);
          }
          while ( v71 != v74 );
          v127 = v66;
          sub_B290A0(**((_QWORD **)v6 + 18) + 112 * v73, v72);
          v75 = v127;
          v76 = v127;
          do
          {
            v77 = v76;
            v76 = *(_DWORD *)(*(_QWORD *)(v4[27] + 16LL) + 4LL * v76);
          }
          while ( v76 != v77 );
          v78 = *(v16 - 2);
          v79 = (unsigned int)*(v16 - 1);
          v80 = &v16[v79];
          if ( v78 == (_DWORD)v79 )
          {
            v147 = v77;
            v103 = (3 * v78 + 1) >> 1;
            v139 = v127;
            v104 = 4 * v103 + 8;
            if ( 4 * v78 + 8 >= (unsigned int)v104 )
              goto LABEL_116;
            v131 = (3 * v78 + 1) >> 1;
            if ( v78 >= v103 )
              goto LABEL_116;
            v105 = (unsigned int *)sub_186B300(v16 - 2, v104);
            v16 = v105 + 2;
            v77 = v147;
            v75 = v139;
            *v105 = v131;
            v80 = &v105[v105[1] + 2];
          }
          v66 = v75 + 1;
          *v80 = v77;
          ++*(v16 - 1);
          if ( v66 >= v10 )
            goto LABEL_17;
        }
      }
      ++v134;
      ++v17;
    }
LABEL_17:
    if ( !v120 )
      goto LABEL_33;
    goto LABEL_18;
  }
LABEL_106:
  v8 = *((_QWORD *)v6 + 2);
  v118 = 0;
  if ( !v8 )
    goto LABEL_107;
LABEL_6:
  v9 = (_DWORD *)v4[2];
  v120 = *(_DWORD *)(v8 - 4);
  if ( v9 )
  {
    v10 = *(v9 - 1);
    if ( v10 )
      goto LABEL_8;
    v16 = nullptr;
    v9 = nullptr;
    if ( !v120 )
      return v6;
  }
  else
  {
    v16 = nullptr;
    v10 = 0;
    if ( !v120 )
      return v6;
  }
LABEL_18:
  v19 = 0;
  do
  {
    while ( 1 )
    {
      v20 = v19;
      v21 = &v9[v16[v19]];
      v22 = *v21;
      if ( *v21 != -1 )
        break;
      *v21 = v19;
LABEL_20:
      if ( (unsigned int)++v19 >= v120 )
        goto LABEL_32;
    }
    v23 = *((_QWORD **)v6 + 27);
    v24 = v23[2];
    do
    {
      v25 = v22;
      v26 = v22;
      v22 = *(_DWORD *)(v24 + 4LL * v22);
    }
    while ( v26 != v22 );
    do
    {
      v27 = v20;
      v28 = v20;
      v20 = *(_DWORD *)(v24 + 4LL * v20);
    }
    while ( v28 != v20 );
    if ( v26 == v20 )
      goto LABEL_20;
    v29 = v23[3];
    if ( *(_DWORD *)(v29 + 4 * v27) >= *(_DWORD *)(v29 + 4 * v25) )
    {
      v20 = v22;
      v22 = v28;
    }
    v30 = (_QWORD *)v23[1];
    v142 = v20;
    *(_DWORD *)(v24 + 4LL * v20) = v22;
    v31 = 4LL * v22;
    v135 = v23;
    *(_DWORD *)(v29 + v31) += *(_DWORD *)(v29 + 4LL * v20);
    v32 = v23[4];
    v125 = v30;
    v33 = (int *)(v32 + v31);
    v34 = (int *)(v32 + 4LL * v20);
    v35 = *v34;
    *v34 = *v33;
    *v33 = v35;
    v36 = sub_180C100(v30 + 2, 24);
    *(_QWORD *)v36 = off_1C4F500;
    v37 = v36;
    *(_DWORD *)(v36 + 16) = v142;
    v38 = (_QWORD *)*v125;
    *(_QWORD *)(v36 + 8) = v135;
    if ( v38 )
    {
      v39 = *((_DWORD *)v38 - 1);
      if ( v39 == *((_DWORD *)v38 - 2) )
      {
        v84 = (3 * v39 + 1) >> 1;
        v85 = 8 * v84 + 8;
        if ( 8 * v39 + 8 >= (unsigned int)v85 || v39 >= v84 )
        {
          v111 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v152, "Overflow encountered when expanding vector");
          *v111 = (char *)off_1C63128;
          sub_2333C0(v111 + 1, v152);
          sub_233E40((__int64)v152);
          __cxa_throw(v111, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v144 = (3 * v39 + 1) >> 1;
        v136 = v37;
        v86 = (unsigned int *)sub_186B300(v38 - 1, v85);
        v87 = v86[1];
        v38 = v86 + 2;
        v37 = v136;
        *v125 = v86 + 2;
        *v86 = v144;
        LODWORD(v86) = v87;
        v42 = &v38[v87];
        v41 = (_DWORD)v86 + 1;
      }
      else
      {
        v40 = v39;
        v41 = v39 + 1;
        v42 = &v38[v40];
      }
    }
    else
    {
      v141 = v36;
      v108 = (_QWORD *)sub_186B270(0x18u);
      v38 = v108 + 1;
      v37 = v141;
      *v108 = 2;
      v42 = v38;
      v41 = 1;
      *v125 = v38;
    }
    *v42 = v37;
    ++v19;
    *((_DWORD *)v38 - 1) = v41;
  }
  while ( (unsigned int)v19 < v120 );
LABEL_32:
  if ( v10 )
  {
LABEL_33:
    if ( v118 && !*v116 )
    {
      v110 = (_QWORD *)sub_186B270(0x10u);
      *v110 = 2;
      v43 = 0;
      v44 = 0;
      v46 = v110 + 1;
      v45 = 0;
      v53 = (unsigned int *)(v110 + 1);
      goto LABEL_48;
    }
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = nullptr;
    while ( 1 )
    {
      v47 = v43;
      do
      {
        v48 = v47;
        v47 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 27) + 16LL) + 4LL * v47);
      }
      while ( v48 != v47 );
      if ( v46 )
      {
        v49 = (unsigned int)*(v46 - 1);
        if ( (_DWORD)v49 == *(v46 - 2) )
        {
          v88 = (unsigned int)(3 * v49 + 1) >> 1;
          v89 = 4 * v88 + 8;
          if ( 4 * (int)v49 + 8 >= (unsigned int)v89 || (unsigned int)v49 >= v88 )
          {
LABEL_117:
            v113 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v152, "Overflow encountered when expanding vector");
            *v113 = (char *)off_1C63128;
            sub_2333C0(v113 + 1, v152);
            sub_233E40((__int64)v152);
            __cxa_throw(v113, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v151 = v48;
          v145 = v44;
          v137 = (unsigned int)(3 * v49 + 1) >> 1;
          v129 = v45;
          v121 = v43;
          v90 = (unsigned int *)sub_186B300(v46 - 2, v89);
          v46 = v90 + 2;
          v43 = v121;
          v45 = v129;
          v44 = v145;
          *v90 = v137;
          v48 = v151;
          v50 = &v90[v90[1] + 2];
        }
        else
        {
          v50 = &v46[v49];
        }
      }
      else
      {
        v148 = v48;
        v140 = v44;
        v132 = v45;
        v124 = v43;
        v106 = (_QWORD *)sub_186B270(0x10u);
        v46 = v106 + 1;
        *v106 = 2;
        v43 = v124;
        v45 = v132;
        v44 = v140;
        v50 = (unsigned int *)(v106 + 1);
        v48 = v148;
      }
      *v50 = v48;
      v51 = v44 + 1;
      ++*(v46 - 1);
      if ( v44 + 1 == v10 )
        break;
      if ( v45 >= v118 )
      {
        v91 = v43 - v44;
        while ( 1 )
        {
          v92 = v91 + v51;
          do
          {
            v93 = v92;
            v92 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 27) + 16LL) + 4LL * v92);
          }
          while ( v92 != v93 );
          v94 = *(v46 - 2);
          v95 = (unsigned int)*(v46 - 1);
          v96 = &v46[v95];
          if ( v94 == (_DWORD)v95 )
          {
            v123 = v91;
            v100 = (3 * v94 + 1) >> 1;
            v117 = v51;
            v101 = 4 * v100 + 8;
            if ( 4 * v94 + 8 >= (unsigned int)v101 )
              goto LABEL_117;
            v119 = (3 * v94 + 1) >> 1;
            if ( v94 >= v100 )
              goto LABEL_117;
            v102 = (unsigned int *)sub_186B300(v46 - 2, v101);
            v46 = v102 + 2;
            v91 = v123;
            v51 = v117;
            *v102 = v119;
            v96 = &v102[v102[1] + 2];
          }
          ++v51;
          *v96 = v93;
          ++*(v46 - 1);
          if ( v51 >= v10 )
            goto LABEL_49;
        }
      }
      ++v43;
      ++v44;
      while ( v45 < v118 && v116[v45] == v44 )
      {
        v52 = (unsigned int)*(v46 - 1);
        if ( (_DWORD)v52 == *(v46 - 2) )
        {
          v97 = (unsigned int)(3 * v52 + 1) >> 1;
          v98 = 4 * v97 + 8;
          if ( 4 * (int)v52 + 8 >= (unsigned int)v98 || (unsigned int)v52 >= v97 )
          {
            v114 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v152, "Overflow encountered when expanding vector");
            *v114 = (char *)off_1C63128;
            sub_2333C0(v114 + 1, v152);
            sub_233E40((__int64)v152);
            __cxa_throw(v114, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v146 = v44;
          v138 = (unsigned int)(3 * v52 + 1) >> 1;
          v130 = v45;
          v122 = v43;
          v99 = (unsigned int *)sub_186B300(v46 - 2, v98);
          v46 = v99 + 2;
          v43 = v122;
          v45 = v130;
          v44 = v146;
          *v99 = v138;
          v53 = &v99[v99[1] + 2];
        }
        else
        {
          v53 = &v46[v52];
        }
LABEL_48:
        ++v44;
        *v53 = -1;
        ++v45;
        ++*(v46 - 1);
        if ( v44 == v10 )
          goto LABEL_49;
      }
    }
LABEL_49:
    sub_186B220(v46 - 2);
  }
  if ( v9 )
    sub_186B220(v9 - 2);
  if ( v16 )
    sub_186B220(v16 - 2);
  return v6;
}

