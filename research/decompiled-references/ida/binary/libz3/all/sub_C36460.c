__int64 __fastcall sub_C36460(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // r14
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // r13
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  int v29; // eax
  __int64 v30; // r14
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int *v35; // rax
  _DWORD *v36; // rdi
  __int64 v37; // r13
  __int64 v38; // r13
  __int64 v39; // r14
  _QWORD *v40; // rax
  _QWORD *v41; // rsi
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // r12
  unsigned int v45; // eax
  __int64 v46; // rsi
  unsigned int v47; // r8d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 *v52; // r14
  __int64 v53; // r13
  unsigned int v54; // r8d
  __int64 *v55; // rcx
  __int64 v56; // rsi
  bool v57; // zf
  __int64 *v58; // r13
  unsigned __int64 i; // r14
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 *v62; // r14
  __int64 *v63; // r13
  __int64 v64; // rax
  unsigned int v65; // ecx
  __int64 *v66; // r8
  __int64 v67; // rsi
  unsigned __int64 v68; // r14
  __int64 *j; // r13
  __int64 v70; // rsi
  unsigned int v71; // r8d
  __int64 v72; // r14
  __int64 v73; // rdi
  __int64 v74; // rsi
  __int64 v75; // rsi
  __int64 v76; // rdx
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rax
  unsigned __int64 v87; // r13
  __int64 *v88; // r14
  __int64 v89; // rsi
  __int64 v90; // rdi
  _QWORD *v91; // rax
  int v92; // r13d
  int v93; // r12d
  __int64 v94; // rcx
  int v95; // edx
  _QWORD *v96; // rcx
  _QWORD *v97; // rdx
  __int64 v98; // rax
  _DWORD *v99; // rax
  unsigned int v100; // edx
  unsigned int v101; // ecx
  size_t v102; // rsi
  unsigned int *v103; // rdx
  __int64 v104; // rcx
  unsigned int v105; // ecx
  size_t v106; // rsi
  unsigned int *v107; // rax
  _DWORD *v108; // rdx
  __int64 v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rdi
  char **v113; // r15
  char **exception; // r15
  char **v115; // r15
  __int64 *v116; // [rsp+0h] [rbp-E0h]
  __int64 v117; // [rsp+8h] [rbp-D8h]
  __int64 *v118; // [rsp+10h] [rbp-D0h]
  __int64 v119; // [rsp+18h] [rbp-C8h]
  __int64 v120; // [rsp+20h] [rbp-C0h]
  int v121; // [rsp+2Ch] [rbp-B4h]
  __int64 v122; // [rsp+30h] [rbp-B0h]
  __int64 v123; // [rsp+30h] [rbp-B0h]
  unsigned int v124; // [rsp+30h] [rbp-B0h]
  unsigned int v125; // [rsp+38h] [rbp-A8h]
  unsigned int v126; // [rsp+38h] [rbp-A8h]
  __int64 *v127; // [rsp+38h] [rbp-A8h]
  unsigned int v128; // [rsp+38h] [rbp-A8h]
  __int64 *v129; // [rsp+38h] [rbp-A8h]
  unsigned int v131; // [rsp+48h] [rbp-98h]
  unsigned __int64 v132; // [rsp+48h] [rbp-98h]
  unsigned int v133; // [rsp+50h] [rbp-90h]
  __int64 v134; // [rsp+50h] [rbp-90h]
  __int64 v135; // [rsp+50h] [rbp-90h]
  __int64 v136; // [rsp+50h] [rbp-90h]
  _QWORD *v137; // [rsp+50h] [rbp-90h]
  unsigned int v138; // [rsp+50h] [rbp-90h]
  __int64 v139; // [rsp+50h] [rbp-90h]
  __int64 v140; // [rsp+58h] [rbp-88h]
  unsigned int v141; // [rsp+58h] [rbp-88h]
  unsigned int v142; // [rsp+58h] [rbp-88h]
  __int64 v143; // [rsp+68h] [rbp-78h] BYREF
  __int64 v144[2]; // [rsp+70h] [rbp-70h] BYREF
  __int64 v145[2]; // [rsp+80h] [rbp-60h] BYREF
  __int64 v146[10]; // [rsp+90h] [rbp-50h] BYREF

  v121 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v91 = *(_QWORD **)(a1 + 160);
  if ( v91 )
    v92 = *((_DWORD *)v91 - 1);
  else
    v92 = 0;
  if ( v121 )
  {
    v93 = 0;
    while ( 1 )
    {
      if ( v91 )
      {
        v100 = *((_DWORD *)v91 - 1);
        if ( v100 == *((_DWORD *)v91 - 2) )
        {
          v101 = (3 * v100 + 1) >> 1;
          v102 = 8 * v101 + 8;
          v141 = v101;
          if ( 8 * v100 + 8 >= (unsigned int)v102 || v100 >= v101 )
          {
LABEL_150:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C282D0(v146, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v146);
            sub_233E40((__int64)v146);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v103 = (unsigned int *)sub_186B300(v91 - 1, v102);
          v91 = v103 + 2;
          v104 = v103[1];
          *v103 = v141;
          *(_QWORD *)(a1 + 160) = v103 + 2;
          LODWORD(v103) = v104;
          v96 = &v91[v104];
          v95 = (_DWORD)v103 + 1;
        }
        else
        {
          v94 = v100;
          v95 = v100 + 1;
          v96 = &v91[v94];
        }
      }
      else
      {
        v110 = (_QWORD *)sub_186B270(0x18u);
        v95 = 1;
        *v110 = 2;
        v91 = v110 + 1;
        *(_QWORD *)(a1 + 160) = v91;
        v96 = v91;
      }
      *v96 = 0;
      *((_DWORD *)v91 - 1) = v95;
      v97 = *(_QWORD **)(a1 + 528);
      if ( !v97 )
        break;
      v98 = *((unsigned int *)v97 - 1);
      if ( (_DWORD)v98 != *((_DWORD *)v97 - 2) )
      {
        v99 = (_DWORD *)v97 + v98;
        goto LABEL_127;
      }
      v105 = (unsigned int)(3 * v98 + 1) >> 1;
      v106 = 4 * v105 + 8;
      v142 = v105;
      if ( 4 * (int)v98 + 8 >= (unsigned int)v106 || (unsigned int)v98 >= v105 )
        goto LABEL_150;
      ++v93;
      v107 = (unsigned int *)sub_186B300(v97 - 1, v106);
      v108 = v107 + 2;
      *v107 = v142;
      v109 = v107[1];
      *(_QWORD *)(a1 + 528) = v108;
      v108[v109] = v92;
      ++*(v108 - 1);
      if ( v93 == v121 )
        goto LABEL_137;
LABEL_128:
      v91 = *(_QWORD **)(a1 + 160);
    }
    v111 = (_QWORD *)sub_186B270(0x10u);
    v97 = v111 + 1;
    *v111 = 2;
    *(_QWORD *)(a1 + 528) = v111 + 1;
    v99 = v111 + 1;
LABEL_127:
    ++v93;
    *v99 = v92;
    ++*((_DWORD *)v97 - 1);
    if ( v93 == v121 )
      goto LABEL_137;
    goto LABEL_128;
  }
LABEL_137:
  *(_DWORD *)(a1 + 128) += v121;
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
      v11 = v9 - 1;
      if ( v10 < v9 )
        v11 = (unsigned int)v11 - v10;
      v6 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + a2 + 8 * v11 + 80);
    }
    else
    {
      v6 = *(_QWORD *)(a2 + 24);
    }
    v7 = ((v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v7;
    result = sub_C351E0((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v21 = *(unsigned int *)(a2 + 20);
  v118 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v131 = *(_DWORD *)(a2 + 72);
  v22 = 16 * v21;
  v117 = *v118;
  v133 = *(_DWORD *)(a2 + 76);
  v23 = *(_QWORD *)(a1 + 8);
  v120 = v23;
  v24 = v23;
  v144[0] = v23;
  if ( v131 )
  {
    v25 = a2 + v22;
    v26 = *(_QWORD *)(v25 + 80);
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    v27 = (_QWORD *)sub_186B270(0x18u);
    v28 = v27 + 1;
    *v27 = 2;
    v29 = 1;
    v140 = (__int64)v28;
    v122 = v131;
    v30 = a2 + 8 * (v131 + 2 * v21);
    while ( 1 )
    {
      *v28 = v26;
      v25 += 8;
      *(_DWORD *)(v140 - 4) = v29;
      if ( v30 == v25 )
        break;
      v26 = *(_QWORD *)(v25 + 80);
      if ( v26 )
        ++*(_DWORD *)(v26 + 8);
      v31 = *(_DWORD *)(v140 - 4);
      if ( v31 == *(_DWORD *)(v140 - 8) )
      {
        v33 = (3 * v31 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v34 || v31 >= v33 )
        {
          v115 = (char **)__cxa_allocate_exception(0x28u);
          sub_C282D0(v146, "Overflow encountered when expanding vector");
          *v115 = (char *)off_1C63128;
          sub_2333C0(v115 + 1, v146);
          sub_233E40((__int64)v146);
          __cxa_throw(v115, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v125 = (3 * v31 + 1) >> 1;
        v35 = (unsigned int *)sub_186B300((void *)(v140 - 8), v34);
        v36 = v35 + 2;
        v140 = (__int64)(v35 + 2);
        *v35 = v125;
        LODWORD(v35) = v35[1];
        v28 = &v36[2 * (unsigned int)v35];
        v29 = (_DWORD)v35 + 1;
      }
      else
      {
        v32 = v31;
        v29 = v31 + 1;
        v28 = (_QWORD *)(v140 + 8 * v32);
      }
    }
    v37 = *(_QWORD *)(a1 + 8);
    v119 = v37;
    v22 = 16LL * *(unsigned int *)(a2 + 20);
    v145[0] = v37;
    if ( !v133 )
    {
      v44 = 0;
      v116 = v118 + 1;
      v51 = v131;
      goto LABEL_51;
    }
  }
  else
  {
    v145[0] = v23;
    v119 = v23;
    v140 = 0;
    if ( !v133 )
    {
      v71 = 0;
      v44 = 0;
      goto LABEL_88;
    }
  }
  v38 = a2 + v22;
  v39 = *(_QWORD *)(a2 + v22 + 80);
  if ( v39 )
    ++*(_DWORD *)(v39 + 8);
  v40 = (_QWORD *)sub_186B270(0x18u);
  v41 = v40 + 1;
  *v40 = 2;
  v42 = 0;
  v43 = 1;
  v44 = (__int64)v41;
  while ( 1 )
  {
    *v41 = v39;
    ++v42;
    *(_DWORD *)(v44 - 4) = v43;
    if ( (unsigned int)v42 >= v133 )
      break;
    v39 = *(_QWORD *)(v38 + 8 * v42 + 80);
    if ( v39 )
      ++*(_DWORD *)(v39 + 8);
    v45 = *(_DWORD *)(v44 - 4);
    if ( v45 == *(_DWORD *)(v44 - 8) )
    {
      v47 = (3 * v45 + 1) >> 1;
      v48 = 8 * v47 + 8;
      if ( 8 * v45 + 8 >= (unsigned int)v48 || v45 >= v47 )
      {
        v113 = (char **)__cxa_allocate_exception(0x28u);
        sub_C282D0(v146, "Overflow encountered when expanding vector");
        *v113 = (char *)off_1C63128;
        sub_2333C0(v113 + 1, v146);
        sub_233E40((__int64)v146);
        __cxa_throw(v113, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v123 = v42;
      v126 = (3 * v45 + 1) >> 1;
      v49 = (unsigned int *)sub_186B300((void *)(v44 - 8), v48);
      v50 = v49[1];
      v44 = (__int64)(v49 + 2);
      v42 = v123;
      *v49 = v126;
      LODWORD(v49) = v50;
      v41 = (_QWORD *)(v44 + 8 * v50);
      v43 = (_DWORD)v49 + 1;
    }
    else
    {
      v46 = v45;
      v43 = v45 + 1;
      v41 = (_QWORD *)(v44 + 8 * v46);
    }
  }
  v116 = v118 + 1;
  v51 = v131;
  v122 = v131;
  if ( v131 )
  {
    v37 = *(_QWORD *)(a1 + 8);
LABEL_51:
    v52 = v118;
    v131 = 0;
    v127 = &v118[v51];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v37, v52[1]) )
      {
        v53 = v52[1];
        v54 = v131 + 1;
        v55 = (__int64 *)(v140 + 8LL * v131);
        if ( v53 )
          ++*(_DWORD *)(v53 + 8);
        v56 = *v55;
        if ( *v55 )
        {
          v57 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v57 )
          {
            sub_15D7BC0(v120, v56);
            v55 = (__int64 *)(v140 + 8LL * v131);
            v54 = v131 + 1;
          }
        }
        ++v52;
        *v55 = v53;
        v131 = v54;
        if ( v52 == v127 )
        {
LABEL_61:
          if ( v140 )
          {
            v51 = v131;
            goto LABEL_63;
          }
LABEL_70:
          if ( v133 )
            goto LABEL_71;
          goto LABEL_80;
        }
      }
      else if ( ++v52 == v127 )
      {
        goto LABEL_61;
      }
      v37 = *(_QWORD *)(a1 + 8);
    }
  }
  v122 = 0;
  if ( v140 )
  {
LABEL_63:
    v58 = (__int64 *)(v140 + 8 * v51);
    for ( i = v140 + 8LL * *(unsigned int *)(v140 - 4); (unsigned __int64)v58 < i; ++v58 )
    {
      while ( 1 )
      {
        v60 = *v58;
        if ( *v58 )
        {
          v57 = (*(_DWORD *)(v60 + 8))-- == 1;
          if ( v57 )
            break;
        }
        if ( (unsigned __int64)++v58 >= i )
          goto LABEL_69;
      }
      sub_15D7BC0(v120, v60);
    }
LABEL_69:
    *(_DWORD *)(v140 - 4) = v131;
    goto LABEL_70;
  }
LABEL_71:
  v61 = v133;
  v133 = 0;
  v62 = &v116[v122];
  v63 = &v116[v122 + v61];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v62) )
    {
      if ( ++v62 == v63 )
        goto LABEL_80;
    }
    v64 = *v62;
    v65 = v133 + 1;
    v66 = (__int64 *)(v44 + 8LL * v133);
    if ( *v62 )
      ++*(_DWORD *)(v64 + 8);
    v67 = *v66;
    if ( *v66 )
    {
      v57 = (*(_DWORD *)(v67 + 8))-- == 1;
      if ( v57 )
      {
        v124 = v133 + 1;
        v129 = (__int64 *)(v44 + 8LL * v133);
        v139 = v64;
        sub_15D7BC0(v119, v67);
        v65 = v124;
        v66 = v129;
        v64 = v139;
      }
    }
    ++v62;
    *v66 = v64;
    v133 = v65;
  }
  while ( v62 != v63 );
LABEL_80:
  if ( v44 )
  {
    v68 = v44 + 8LL * *(unsigned int *)(v44 - 4);
    for ( j = (__int64 *)(v44 + 8LL * v133); (unsigned __int64)j < v68; ++j )
    {
      while ( 1 )
      {
        v70 = *j;
        if ( *j )
        {
          v57 = (*(_DWORD *)(v70 + 8))-- == 1;
          if ( v57 )
            break;
        }
        if ( (unsigned __int64)++j >= v68 )
          goto LABEL_87;
      }
      sub_15D7BC0(v119, v70);
    }
LABEL_87:
    v24 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(v44 - 4) = v133;
    v71 = v133;
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 8);
    v71 = v133;
  }
LABEL_88:
  v72 = sub_15DBA30(v24, a2, v131, v140, v71, v44, v117);
  v73 = *(_QWORD *)(a1 + 496);
  v74 = *(_QWORD *)(a1 + 504);
  if ( v72 )
  {
    ++*(_DWORD *)(v72 + 8);
    sub_C28290(v73, v74);
    *(_QWORD *)(a1 + 496) = 0;
    if ( a2 == v72 )
    {
LABEL_97:
      ++*(_DWORD *)(v72 + 8);
      goto LABEL_98;
    }
  }
  else
  {
    sub_C28290(v73, v74);
    *(_QWORD *)(a1 + 496) = 0;
  }
  v75 = *(_QWORD *)(a1 + 504);
  v76 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  if ( v76 )
  {
    ++*(_DWORD *)(v76 + 8);
    v134 = v76;
    sub_C28290(0, v75);
    v77 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 496) = v134;
    v78 = sub_15DE700(v77);
    if ( v78 )
      ++*(_DWORD *)(v78 + 8);
    v135 = v78;
    sub_C28290(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    v79 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 496) = v135;
    v80 = sub_15DE750(v79);
  }
  else
  {
    sub_C28290(0, v75);
    v112 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 496) = 0;
    v80 = sub_15DE370(v112);
  }
  if ( v80 )
    ++*(_DWORD *)(v80 + 8);
  v136 = v80;
  sub_C28290(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
  *(_QWORD *)(a1 + 496) = v136;
  if ( v72 )
    goto LABEL_97;
LABEL_98:
  sub_C282B0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  v81 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v72;
  if ( v81 )
  {
    v82 = v81 + 8LL * *(unsigned int *)(v81 - 4);
    v128 = *(_DWORD *)(a3 + 12);
    v83 = (_QWORD *)(v81 + 8LL * v128);
    if ( (unsigned __int64)v83 >= v82 )
      goto LABEL_106;
    do
    {
      while ( 1 )
      {
        v84 = *v83;
        if ( *v83 )
        {
          v85 = *(_QWORD *)(a1 + 80);
          v57 = (*(_DWORD *)(v84 + 8))-- == 1;
          if ( v57 )
            break;
        }
        if ( (unsigned __int64)++v83 >= v82 )
          goto LABEL_105;
      }
      v132 = v82;
      v137 = v83;
      sub_15D7BC0(v85, v84);
      v82 = v132;
      v83 = v137 + 1;
    }
    while ( (unsigned __int64)(v137 + 1) < v132 );
LABEL_105:
    v81 = *(_QWORD *)(a1 + 88);
    if ( v81 )
LABEL_106:
      *(_DWORD *)(v81 - 4) = v128;
  }
  v86 = *(_QWORD *)(a1 + 496);
  v143 = v86;
  if ( v86 )
    ++*(_DWORD *)(v86 + 8);
  sub_C28470((_QWORD *)(a1 + 88), &v143);
  if ( v72 )
  {
    v57 = (*(_DWORD *)(v72 + 8))-- == 1;
    if ( v57 )
      sub_15D7BC0(v24, v72);
  }
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    v87 = v12 + 8LL * *(unsigned int *)(v12 - 4);
    v138 = *(_DWORD *)(a3 + 12);
    v88 = (__int64 *)(v12 + 8LL * v138);
    if ( (unsigned __int64)v88 >= v87 )
      goto LABEL_11;
    do
    {
      v89 = *v88;
      if ( *v88 )
      {
        v90 = *(_QWORD *)(a1 + 48);
        v57 = (*(_DWORD *)(v89 + 8))-- == 1;
        if ( v57 )
          sub_15D7BC0(v90, v89);
      }
      ++v88;
    }
    while ( (unsigned __int64)v88 < v87 );
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 )
LABEL_11:
      *(_DWORD *)(v12 - 4) = v138;
  }
  v13 = *(_QWORD *)(a1 + 480);
  v146[0] = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_C28530((_QWORD *)(a1 + 56), v146);
  v14 = *(_QWORD *)(a1 + 160);
  if ( v14 )
    *(_DWORD *)(v14 - 4) -= v121;
  v15 = *(_QWORD *)(a1 + 528);
  if ( v15 )
    *(_DWORD *)(v15 - 4) -= v121;
  sub_15844D0(a1);
  v16 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, *(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 496));
    v16 = *(_QWORD *)(a1 + 480);
  }
  sub_C282B0(v16, *(_QWORD *)(a1 + 488));
  v17 = *(_QWORD *)(a1 + 504);
  v18 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  sub_C28290(v18, v17);
  *(_QWORD *)(a1 + 496) = 0;
  v19 = *(_QWORD *)(a1 + 40);
  v20 = *(_DWORD *)(v19 - 4);
  *(_DWORD *)(v19 - 4) = v20 - 1;
  if ( *(_QWORD *)(a1 + 480) != a2 && v20 != 1 )
    *(_BYTE *)(v19 + 16LL * (unsigned int)(v20 - 2) + 8) |= 2u;
  v145[1] = v44;
  sub_2334C0(v145);
  v144[1] = v140;
  return sub_2334C0(v144);
}

