__int64 __fastcall sub_C31FC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // r13
  __int64 v27; // r15
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // r15
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r13
  int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // rsi
  unsigned int v45; // r8d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rsi
  unsigned int v49; // r9d
  size_t v50; // rsi
  unsigned int *v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 *v54; // r15
  __int64 v55; // rax
  unsigned int v56; // r9d
  __int64 *v57; // r8
  __int64 v58; // rsi
  __int64 *v59; // r15
  unsigned __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 *v63; // r15
  __int64 v64; // rax
  unsigned int v65; // r9d
  __int64 *v66; // r8
  __int64 v67; // rsi
  unsigned __int64 v68; // rdx
  __int64 *v69; // r15
  __int64 v70; // rsi
  __int64 v71; // rax
  unsigned __int64 v72; // r15
  _QWORD *v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // rdi
  _QWORD *v76; // rax
  int v77; // r14d
  int v78; // r13d
  __int64 v79; // rcx
  int v80; // edx
  _QWORD *v81; // rcx
  _QWORD *v82; // rdx
  __int64 v83; // rax
  _DWORD *v84; // rax
  unsigned int v85; // edx
  unsigned int v86; // ecx
  size_t v87; // rsi
  unsigned int *v88; // rdx
  __int64 v89; // rcx
  unsigned int v90; // ecx
  size_t v91; // rsi
  unsigned int *v92; // rax
  _DWORD *v93; // rdx
  __int64 v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rax
  char **v97; // r15
  char **v98; // r15
  char **exception; // r14
  __int64 *v100; // [rsp+0h] [rbp-D0h]
  __int64 v101; // [rsp+8h] [rbp-C8h]
  __int64 *v102; // [rsp+10h] [rbp-C0h]
  unsigned int v103; // [rsp+10h] [rbp-C0h]
  __int64 v104; // [rsp+18h] [rbp-B8h]
  __int64 v105; // [rsp+20h] [rbp-B0h]
  int v106; // [rsp+2Ch] [rbp-A4h]
  __int64 v107; // [rsp+30h] [rbp-A0h]
  __int64 v108; // [rsp+30h] [rbp-A0h]
  __int64 *v109; // [rsp+30h] [rbp-A0h]
  __int64 v110; // [rsp+38h] [rbp-98h]
  __int64 v111; // [rsp+38h] [rbp-98h]
  __int64 *v112; // [rsp+38h] [rbp-98h]
  unsigned int v113; // [rsp+38h] [rbp-98h]
  unsigned int v115; // [rsp+48h] [rbp-88h]
  unsigned int v116; // [rsp+48h] [rbp-88h]
  __int64 *v117; // [rsp+48h] [rbp-88h]
  unsigned __int64 v118; // [rsp+48h] [rbp-88h]
  __int64 *v119; // [rsp+48h] [rbp-88h]
  unsigned __int64 v120; // [rsp+48h] [rbp-88h]
  unsigned int v121; // [rsp+50h] [rbp-80h]
  unsigned int v122; // [rsp+50h] [rbp-80h]
  __int64 v123; // [rsp+50h] [rbp-80h]
  unsigned int v124; // [rsp+58h] [rbp-78h]
  __int64 v125; // [rsp+58h] [rbp-78h]
  _QWORD *v126; // [rsp+58h] [rbp-78h]
  unsigned int v127; // [rsp+58h] [rbp-78h]
  unsigned int v128; // [rsp+58h] [rbp-78h]
  __int64 v129; // [rsp+58h] [rbp-78h]
  __int64 v130[2]; // [rsp+60h] [rbp-70h] BYREF
  __int64 v131[2]; // [rsp+70h] [rbp-60h] BYREF
  __int64 v132[10]; // [rsp+80h] [rbp-50h] BYREF

  v106 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v76 = *(_QWORD **)(a1 + 160);
  if ( v76 )
    v77 = *((_DWORD *)v76 - 1);
  else
    v77 = 0;
  if ( v106 )
  {
    v78 = 0;
    while ( 1 )
    {
      if ( v76 )
      {
        v85 = *((_DWORD *)v76 - 1);
        if ( v85 == *((_DWORD *)v76 - 2) )
        {
          v86 = (3 * v85 + 1) >> 1;
          v87 = 8 * v86 + 8;
          v127 = v86;
          if ( 8 * v85 + 8 >= (unsigned int)v87 || v85 >= v86 )
          {
LABEL_134:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_C282D0(v132, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v132);
            sub_233E40((__int64)v132);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v88 = (unsigned int *)sub_186B300(v76 - 1, v87);
          v76 = v88 + 2;
          v89 = v88[1];
          *v88 = v127;
          *(_QWORD *)(a1 + 160) = v88 + 2;
          LODWORD(v88) = v89;
          v81 = &v76[v89];
          v80 = (_DWORD)v88 + 1;
        }
        else
        {
          v79 = v85;
          v80 = v85 + 1;
          v81 = &v76[v79];
        }
      }
      else
      {
        v96 = (_QWORD *)sub_186B270(0x18u);
        v80 = 1;
        *v96 = 2;
        v76 = v96 + 1;
        *(_QWORD *)(a1 + 160) = v76;
        v81 = v76;
      }
      *v81 = 0;
      *((_DWORD *)v76 - 1) = v80;
      v82 = *(_QWORD **)(a1 + 528);
      if ( !v82 )
        break;
      v83 = *((unsigned int *)v82 - 1);
      if ( (_DWORD)v83 != *((_DWORD *)v82 - 2) )
      {
        v84 = (_DWORD *)v82 + v83;
        goto LABEL_110;
      }
      v90 = (unsigned int)(3 * v83 + 1) >> 1;
      v91 = 4 * v90 + 8;
      v128 = v90;
      if ( 4 * (int)v83 + 8 >= (unsigned int)v91 || (unsigned int)v83 >= v90 )
        goto LABEL_134;
      ++v78;
      v92 = (unsigned int *)sub_186B300(v82 - 1, v91);
      v93 = v92 + 2;
      *v92 = v128;
      v94 = v92[1];
      *(_QWORD *)(a1 + 528) = v93;
      v93[v94] = v77;
      ++*(v93 - 1);
      if ( v78 == v106 )
        goto LABEL_120;
LABEL_111:
      v76 = *(_QWORD **)(a1 + 160);
    }
    v95 = (_QWORD *)sub_186B270(0x10u);
    v82 = v95 + 1;
    *v95 = 2;
    *(_QWORD *)(a1 + 528) = v95 + 1;
    v84 = v95 + 1;
LABEL_110:
    ++v78;
    *v84 = v77;
    ++*((_DWORD *)v82 - 1);
    if ( v78 == v106 )
      goto LABEL_120;
    goto LABEL_111;
  }
LABEL_120:
  *(_DWORD *)(a1 + 128) += v106;
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
    result = sub_C31A90((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v23 = *(unsigned int *)(a2 + 20);
  v102 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v124 = *(_DWORD *)(a2 + 76);
  v24 = *(_QWORD *)(a1 + 8);
  v25 = 16 * v23;
  v101 = *v102;
  v105 = *(_QWORD *)(a1 + 8);
  v121 = *(_DWORD *)(a2 + 72);
  v130[0] = v105;
  if ( v121 )
  {
    v26 = a2 + v25;
    v27 = *(_QWORD *)(v26 + 80);
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v28 = (_QWORD *)sub_186B270(0x18u);
    v29 = v28 + 1;
    *v28 = 2;
    v30 = 1;
    v107 = v121;
    v31 = v121 + 2 * v23;
    v32 = (__int64)v29;
    v33 = a2 + 8 * v31;
    while ( 1 )
    {
      v26 += 8;
      *v29 = v27;
      *(_DWORD *)(v32 - 4) = v30;
      if ( v33 == v26 )
        break;
      while ( 1 )
      {
        v27 = *(_QWORD *)(v26 + 80);
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        v34 = *(_DWORD *)(v32 - 4);
        if ( v34 == *(_DWORD *)(v32 - 8) )
          break;
        v26 += 8;
        *(_QWORD *)(v32 + 8LL * v34) = v27;
        *(_DWORD *)(v32 - 4) = v34 + 1;
        if ( v33 == v26 )
          goto LABEL_38;
      }
      v45 = (3 * v34 + 1) >> 1;
      v46 = 8 * v45 + 8;
      if ( 8 * v34 + 8 >= (unsigned int)v46 || v34 >= v45 )
      {
        v97 = (char **)__cxa_allocate_exception(0x28u);
        sub_C282D0(v132, "Overflow encountered when expanding vector");
        *v97 = (char *)off_1C63128;
        sub_2333C0(v97 + 1, v132);
        sub_233E40((__int64)v132);
        __cxa_throw(v97, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v110 = v33;
      v115 = (3 * v34 + 1) >> 1;
      v47 = (unsigned int *)sub_186B300((void *)(v32 - 8), v46);
      v48 = v47[1];
      v32 = (__int64)(v47 + 2);
      v33 = v110;
      *v47 = v115;
      LODWORD(v47) = v48;
      v29 = (_QWORD *)(v32 + 8 * v48);
      v30 = (_DWORD)v47 + 1;
    }
LABEL_38:
    v35 = *(_QWORD *)(a1 + 8);
    v104 = v35;
    v25 = 16LL * *(unsigned int *)(a2 + 20);
    v131[0] = v35;
    if ( !v124 )
    {
      v41 = 0;
      v112 = v102 + 1;
      v53 = v121;
      goto LABEL_55;
    }
  }
  else
  {
    v131[0] = v24;
    v32 = 0;
    v104 = v24;
    if ( !v124 )
    {
      v41 = 0;
      goto LABEL_92;
    }
  }
  v36 = *(_QWORD *)(a2 + v25 + 80);
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  v37 = (_QWORD *)sub_186B270(0x18u);
  v38 = v37 + 1;
  v39 = a2 + v25;
  *v37 = 2;
  v40 = 0;
  v41 = (__int64)(v37 + 1);
  v42 = 1;
  while ( 1 )
  {
    *v38 = v36;
    ++v40;
    *(_DWORD *)(v41 - 4) = v42;
    if ( (unsigned int)v40 >= v124 )
      break;
    v36 = *(_QWORD *)(v39 + 8 * v40 + 80);
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    v43 = *(_DWORD *)(v41 - 4);
    if ( v43 == *(_DWORD *)(v41 - 8) )
    {
      v49 = (3 * v43 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v43 + 8 >= (unsigned int)v50 || v43 >= v49 )
      {
        v98 = (char **)__cxa_allocate_exception(0x28u);
        sub_C282D0(v132, "Overflow encountered when expanding vector");
        *v98 = (char *)off_1C63128;
        sub_2333C0(v98 + 1, v132);
        sub_233E40((__int64)v132);
        __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v108 = v39;
      v111 = v40;
      v116 = (3 * v43 + 1) >> 1;
      v51 = (unsigned int *)sub_186B300((void *)(v41 - 8), v50);
      v52 = v51[1];
      v41 = (__int64)(v51 + 2);
      v40 = v111;
      v39 = v108;
      *v51 = v116;
      LODWORD(v51) = v52;
      v38 = (_QWORD *)(v41 + 8 * v52);
      v42 = (_DWORD)v51 + 1;
    }
    else
    {
      v44 = v43;
      v42 = v43 + 1;
      v38 = (_QWORD *)(v41 + 8 * v44);
    }
  }
  v112 = v102 + 1;
  v53 = v121;
  v107 = v121;
  if ( v121 )
  {
    v35 = *(_QWORD *)(a1 + 8);
LABEL_55:
    v54 = v102;
    v121 = 0;
    v117 = &v102[v53];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v35, v54[1]) )
      {
        v55 = v54[1];
        v56 = v121 + 1;
        v57 = (__int64 *)(v32 + 8LL * v121);
        if ( v55 )
          ++*(_DWORD *)(v55 + 8);
        v58 = *v57;
        if ( *v57 )
        {
          v19 = (*(_DWORD *)(v58 + 8))-- == 1;
          if ( v19 )
          {
            v100 = (__int64 *)(v32 + 8LL * v121);
            v103 = v121 + 1;
            v123 = v55;
            sub_15D7BC0(v105, v58);
            v57 = v100;
            v56 = v103;
            v55 = v123;
          }
        }
        *v57 = v55;
        ++v54;
        v121 = v56;
        if ( v54 == v117 )
        {
LABEL_65:
          if ( v32 )
          {
            v53 = v121;
            goto LABEL_67;
          }
LABEL_74:
          if ( v124 )
            goto LABEL_75;
          goto LABEL_84;
        }
      }
      else if ( ++v54 == v117 )
      {
        goto LABEL_65;
      }
      v35 = *(_QWORD *)(a1 + 8);
    }
  }
  v107 = 0;
  if ( v32 )
  {
LABEL_67:
    v59 = (__int64 *)(v32 + 8 * v53);
    v60 = v32 + 8LL * *(unsigned int *)(v32 - 4);
    if ( (unsigned __int64)v59 < v60 )
    {
      do
      {
        while ( 1 )
        {
          v61 = *v59;
          if ( *v59 )
          {
            v19 = (*(_DWORD *)(v61 + 8))-- == 1;
            if ( v19 )
              break;
          }
          if ( (unsigned __int64)++v59 >= v60 )
            goto LABEL_73;
        }
        v118 = v60;
        sub_15D7BC0(v105, v61);
        v60 = v118;
        ++v59;
      }
      while ( (unsigned __int64)v59 < v118 );
    }
LABEL_73:
    *(_DWORD *)(v32 - 4) = v121;
    goto LABEL_74;
  }
LABEL_75:
  v62 = v124;
  v124 = 0;
  v63 = &v112[v107];
  v119 = &v112[v107 + v62];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v63) )
    {
      if ( ++v63 == v119 )
        goto LABEL_84;
    }
    v64 = *v63;
    v65 = v124 + 1;
    v66 = (__int64 *)(v41 + 8LL * v124);
    if ( *v63 )
      ++*(_DWORD *)(v64 + 8);
    v67 = *v66;
    if ( *v66 )
    {
      v19 = (*(_DWORD *)(v67 + 8))-- == 1;
      if ( v19 )
      {
        v109 = (__int64 *)(v41 + 8LL * v124);
        v113 = v124 + 1;
        v129 = v64;
        sub_15D7BC0(v104, v67);
        v66 = v109;
        v65 = v113;
        v64 = v129;
      }
    }
    *v66 = v64;
    ++v63;
    v124 = v65;
  }
  while ( v63 != v119 );
LABEL_84:
  if ( v41 )
  {
    v68 = v41 + 8LL * *(unsigned int *)(v41 - 4);
    v69 = (__int64 *)(v41 + 8LL * v124);
    if ( (unsigned __int64)v69 < v68 )
    {
      do
      {
        while ( 1 )
        {
          v70 = *v69;
          if ( *v69 )
          {
            v19 = (*(_DWORD *)(v70 + 8))-- == 1;
            if ( v19 )
              break;
          }
          if ( (unsigned __int64)++v69 >= v68 )
            goto LABEL_91;
        }
        v120 = v68;
        sub_15D7BC0(v104, v70);
        v68 = v120;
        ++v69;
      }
      while ( (unsigned __int64)v69 < v120 );
    }
LABEL_91:
    *(_DWORD *)(v41 - 4) = v124;
  }
LABEL_92:
  if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
  {
    ++*(_DWORD *)(a2 + 8);
    sub_C282B0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v12 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    v13 = a2;
    if ( !v12 )
    {
      v132[0] = a2;
      goto LABEL_14;
    }
    goto LABEL_96;
  }
  v71 = sub_15DBA30(*(_QWORD *)(a1 + 8), a2, v121, v32, v124, v41, v101);
  if ( v71 )
    ++*(_DWORD *)(v71 + 8);
  v125 = v71;
  sub_C282B0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
  v13 = v125;
  v12 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 480) = v125;
  if ( v12 )
  {
LABEL_96:
    v72 = v12 + 8LL * *(unsigned int *)(v12 - 4);
    v122 = *(_DWORD *)(a3 + 12);
    v73 = (_QWORD *)(v12 + 8LL * v122);
    if ( (unsigned __int64)v73 >= v72 )
      goto LABEL_12;
    do
    {
      v74 = *v73;
      if ( *v73 )
      {
        v75 = *(_QWORD *)(a1 + 48);
        v19 = (*(_DWORD *)(v74 + 8))-- == 1;
        if ( v19 )
        {
          v126 = v73;
          sub_15D7BC0(v75, v74);
          v73 = v126;
        }
      }
      ++v73;
    }
    while ( (unsigned __int64)v73 < v72 );
    v12 = *(_QWORD *)(a1 + 56);
    v13 = *(_QWORD *)(a1 + 480);
    if ( v12 )
LABEL_12:
      *(_DWORD *)(v12 - 4) = v122;
  }
  v132[0] = v13;
  if ( v13 )
LABEL_14:
    ++*(_DWORD *)(v13 + 8);
  sub_C28530((_QWORD *)(a1 + 56), v132);
  v14 = *(_QWORD *)(a1 + 160);
  if ( v14 )
    *(_DWORD *)(v14 - 4) -= v106;
  v15 = *(_QWORD *)(a1 + 528);
  if ( v15 )
    *(_DWORD *)(v15 - 4) -= v106;
  sub_15844D0(a1);
  v16 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v16 = *(_QWORD *)(a1 + 480);
  }
  sub_C282B0(v16, *(_QWORD *)(a1 + 488));
  v17 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v17 && (v18 = *(_QWORD *)(a1 + 504), v19 = *(_DWORD *)(v17 + 8) == 1, --*(_DWORD *)(v17 + 8), v19) )
  {
    sub_15D7BC0(v18, v17);
    v20 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v20 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  v21 = *(_QWORD *)(a1 + 40);
  v22 = *(_DWORD *)(v21 - 4);
  *(_DWORD *)(v21 - 4) = v22 - 1;
  if ( a2 != v20 && v22 != 1 )
    *(_BYTE *)(v21 + 16LL * (unsigned int)(v22 - 2) + 8) |= 2u;
  v131[1] = v41;
  sub_2334C0(v131);
  v130[1] = v32;
  return sub_2334C0(v130);
}

