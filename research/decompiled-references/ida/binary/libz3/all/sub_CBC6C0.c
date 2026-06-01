__int64 __fastcall sub_CBC6C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // r15
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  _QWORD *v17; // r12
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // ecx
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // r15
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // rdx
  int v29; // eax
  _QWORD *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // r8d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rsi
  _DWORD *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rdi
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
  _QWORD *v52; // rdx
  unsigned int v53; // r15d
  unsigned __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rcx
  _QWORD *v59; // rsi
  int v60; // eax
  __int64 v61; // rax
  __int64 *v62; // r15
  unsigned __int64 v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rsi
  int v74; // ecx
  __int64 *v75; // rbx
  unsigned __int64 v76; // r13
  __int64 v77; // rsi
  __int64 *v78; // rbx
  unsigned __int64 v79; // r14
  __int64 v80; // rsi
  _QWORD *v81; // rax
  int v82; // r12d
  __int64 v83; // rcx
  int v84; // edx
  _QWORD *v85; // rcx
  _QWORD *v86; // rdx
  __int64 v87; // rax
  _DWORD *v88; // rax
  unsigned int v89; // edx
  unsigned int v90; // ebx
  size_t v91; // rsi
  unsigned int *v92; // rdx
  __int64 v93; // rcx
  unsigned int v94; // ebx
  size_t v95; // rsi
  unsigned int *v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  unsigned int v100; // r9d
  size_t v101; // rsi
  unsigned int *v102; // rax
  __int64 v103; // rsi
  __int64 v104; // rcx
  _QWORD *v105; // rax
  char **v106; // r13
  char **v107; // r13
  char **exception; // r14
  char **v109; // r14
  __int64 v110; // [rsp+0h] [rbp-D0h]
  __int64 v111; // [rsp+8h] [rbp-C8h]
  __int64 v112; // [rsp+10h] [rbp-C0h]
  __int64 v113; // [rsp+18h] [rbp-B8h]
  unsigned int v114; // [rsp+24h] [rbp-ACh]
  unsigned int v115; // [rsp+28h] [rbp-A8h]
  int v116; // [rsp+2Ch] [rbp-A4h]
  _QWORD *v117; // [rsp+30h] [rbp-A0h]
  unsigned __int64 v118; // [rsp+30h] [rbp-A0h]
  __int64 v119; // [rsp+30h] [rbp-A0h]
  __int64 v120; // [rsp+38h] [rbp-98h]
  _QWORD *v121; // [rsp+38h] [rbp-98h]
  __int64 v122; // [rsp+38h] [rbp-98h]
  _QWORD *v123; // [rsp+38h] [rbp-98h]
  int v124; // [rsp+38h] [rbp-98h]
  int v125; // [rsp+38h] [rbp-98h]
  __int64 v126; // [rsp+38h] [rbp-98h]
  unsigned int v127; // [rsp+40h] [rbp-90h]
  __int64 v128; // [rsp+40h] [rbp-90h]
  unsigned int v129; // [rsp+40h] [rbp-90h]
  __int64 v130; // [rsp+40h] [rbp-90h]
  unsigned __int64 v131; // [rsp+40h] [rbp-90h]
  __int64 v132; // [rsp+40h] [rbp-90h]
  __int64 v133; // [rsp+48h] [rbp-88h]
  __int64 v134; // [rsp+48h] [rbp-88h]
  _QWORD *v135; // [rsp+48h] [rbp-88h]
  int v136; // [rsp+48h] [rbp-88h]
  __int64 v137[10]; // [rsp+80h] [rbp-50h] BYREF

  v5 = a3;
  v116 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v81 = *(_QWORD **)(a1 + 160);
    if ( v81 )
      v82 = *((_DWORD *)v81 - 1);
    else
      v82 = 0;
    if ( v116 )
    {
      v132 = v5;
      v136 = 0;
      while ( 1 )
      {
        if ( v81 )
        {
          v89 = *((_DWORD *)v81 - 1);
          if ( v89 == *((_DWORD *)v81 - 2) )
          {
            v90 = (3 * v89 + 1) >> 1;
            v91 = 8 * v90 + 8;
            if ( 8 * v89 + 8 >= (unsigned int)v91 || v89 >= v90 )
            {
LABEL_147:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v137, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v137);
              sub_233E40((__int64)v137);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v92 = (unsigned int *)sub_186B300(v81 - 1, v91);
            v81 = v92 + 2;
            v93 = v92[1];
            *v92 = v90;
            *(_QWORD *)(a1 + 160) = v92 + 2;
            LODWORD(v92) = v93;
            v85 = &v81[v93];
            v84 = (_DWORD)v92 + 1;
          }
          else
          {
            v83 = v89;
            v84 = v89 + 1;
            v85 = &v81[v83];
          }
        }
        else
        {
          v98 = (_QWORD *)sub_186B270(0x18u);
          v84 = 1;
          *v98 = 2;
          v81 = v98 + 1;
          *(_QWORD *)(a1 + 160) = v81;
          v85 = v81;
        }
        *v85 = 0;
        *((_DWORD *)v81 - 1) = v84;
        v86 = *(_QWORD **)(a1 + 528);
        if ( v86 )
        {
          v87 = *((unsigned int *)v86 - 1);
          if ( (_DWORD)v87 == *((_DWORD *)v86 - 2) )
          {
            v94 = (unsigned int)(3 * v87 + 1) >> 1;
            v95 = 4 * v94 + 8;
            if ( 4 * (int)v87 + 8 >= (unsigned int)v95 || (unsigned int)v87 >= v94 )
              goto LABEL_147;
            v96 = (unsigned int *)sub_186B300(v86 - 1, v95);
            v86 = v96 + 2;
            *v96 = v94;
            v97 = v96[1];
            *(_QWORD *)(a1 + 528) = v86;
            v88 = (_DWORD *)v86 + v97;
          }
          else
          {
            v88 = (_DWORD *)v86 + v87;
          }
        }
        else
        {
          v99 = (_QWORD *)sub_186B270(0x10u);
          v86 = v99 + 1;
          *v99 = 2;
          *(_QWORD *)(a1 + 528) = v99 + 1;
          v88 = v99 + 1;
        }
        *v88 = v82;
        ++v136;
        ++*((_DWORD *)v86 - 1);
        if ( v136 == v116 )
          break;
        v81 = *(_QWORD **)(a1 + 160);
      }
      v5 = v132;
    }
    *(_DWORD *)(a1 + 128) += v116;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v5 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(a2 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(v5 + 8) = v7;
    result = sub_CBB3E0(a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v10 = *(unsigned int *)(a2 + 20);
  v11 = *(_QWORD *)(a1 + 8);
  v110 = *(_QWORD *)(a1 + 8);
  v111 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(v5 + 12));
  v114 = *(_DWORD *)(a2 + 72);
  v115 = *(_DWORD *)(a2 + 76);
  v133 = 16 * v10;
  if ( v114 )
  {
    v12 = *(_QWORD *)(a2 + 16 * v10 + 80);
    v134 = a2 + 16 * v10;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v13 = (_QWORD *)sub_186B270(0x18u);
    v14 = v13 + 1;
    *v13 = 2;
    v15 = 1;
    v16 = v114 + 2 * v10;
    v17 = v14;
    v18 = a2 + 8 * v16;
    while ( 1 )
    {
      v134 += 8;
      *v14 = v12;
      *((_DWORD *)v17 - 1) = v15;
      if ( v18 == v134 )
        break;
      v12 = *(_QWORD *)(v134 + 80);
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v19 = *((_DWORD *)v17 - 1);
      if ( v19 == *((_DWORD *)v17 - 2) )
      {
        v21 = (3 * v19 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v22 || v19 >= v21 )
        {
          v109 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v137, "Overflow encountered when expanding vector");
          *v109 = (char *)off_1C63128;
          sub_2333C0(v109 + 1, v137);
          sub_233E40((__int64)v137);
          __cxa_throw(v109, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v120 = v18;
        v127 = (3 * v19 + 1) >> 1;
        v23 = (unsigned int *)sub_186B300(v17 - 1, v22);
        v17 = v23 + 2;
        v18 = v120;
        *v23 = v127;
        LODWORD(v23) = v23[1];
        v14 = &v17[(unsigned int)v23];
        v15 = (_DWORD)v23 + 1;
      }
      else
      {
        v20 = v19;
        v15 = v19 + 1;
        v14 = &v17[v20];
      }
    }
    v113 = *(_QWORD *)(a1 + 8);
    v133 = 16LL * *(unsigned int *)(a2 + 20);
  }
  else
  {
    v113 = v11;
    v17 = nullptr;
  }
  if ( v115 )
  {
    v24 = *(_QWORD *)(a2 + v133 + 80);
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v128 = a2 + v133 + 80;
    v25 = (_QWORD *)sub_186B270(0x18u);
    v26 = v25 + 1;
    v27 = v133;
    *v25 = 2;
    v135 = v25 + 1;
    v28 = (_QWORD *)v128;
    v29 = 1;
    v30 = (_QWORD *)(v27 + a2 + 8LL * v115 + 80);
    while ( 1 )
    {
      ++v28;
      *v26 = v24;
      *((_DWORD *)v135 - 1) = v29;
      if ( v28 == v30 )
        break;
      v24 = *v28;
      if ( *v28 )
        ++*(_DWORD *)(v24 + 8);
      v31 = *((_DWORD *)v135 - 1);
      if ( v31 == *((_DWORD *)v135 - 2) )
      {
        v33 = (3 * v31 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v34 || v31 >= v33 )
        {
          v107 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v137, "Overflow encountered when expanding vector");
          *v107 = (char *)off_1C63128;
          sub_2333C0(v107 + 1, v137);
          sub_233E40((__int64)v137);
          __cxa_throw(v107, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v117 = v30;
        v121 = v28;
        v129 = (3 * v31 + 1) >> 1;
        v35 = (unsigned int *)sub_186B300(v135 - 1, v34);
        v36 = v35[1];
        v37 = v35 + 2;
        v135 = v35 + 2;
        v28 = v121;
        *v35 = v129;
        LODWORD(v35) = v36;
        v26 = &v37[2 * v36];
        v30 = v117;
        v29 = (_DWORD)v35 + 1;
      }
      else
      {
        v32 = v31;
        v29 = v31 + 1;
        v26 = &v135[v32];
      }
    }
    v112 = *(_QWORD *)(a1 + 8);
    v38 = sub_15DBA30(v112, a2, v114, (_DWORD)v17, v115, (_DWORD)v135, v111);
  }
  else
  {
    v135 = nullptr;
    v112 = v113;
    v38 = sub_15DBA30(v113, a2, v114, (_DWORD)v17, 0, 0, v111);
  }
  v130 = v38;
  v39 = *(_QWORD *)(a1 + 496);
  v40 = *(_QWORD *)(a1 + 504);
  if ( v38 )
  {
    ++*(_DWORD *)(v38 + 8);
    if ( v39 )
    {
      v41 = (*(_DWORD *)(v39 + 8))-- == 1;
      if ( v41 )
        sub_15D7BC0(v40, v39);
    }
    *(_QWORD *)(a1 + 496) = 0;
    if ( a2 == v130 )
      goto LABEL_48;
  }
  else
  {
    if ( v39 )
    {
      v41 = (*(_DWORD *)(v39 + 8))-- == 1;
      if ( v41 )
        sub_15D7BC0(v40, v39);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  v42 = *(_QWORD *)(a1 + 8);
  v43 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(v5 + 12));
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
        v122 = v44;
        sub_15D7BC0(v47, v46);
        v45 = v122;
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
  sub_CB1640(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
  *(_QWORD *)(a1 + 496) = v49;
  if ( v130 )
LABEL_48:
    ++*(_DWORD *)(v130 + 8);
  v50 = *(_QWORD *)(a1 + 480);
  if ( v50 )
  {
    v51 = *(_QWORD *)(a1 + 488);
    v41 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v51, v50);
  }
  v52 = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v130;
  if ( !v52 )
    goto LABEL_139;
  v53 = *(_DWORD *)(v5 + 12);
  v54 = (unsigned __int64)&v52[*((unsigned int *)v52 - 1)];
  v55 = &v52[v53];
  if ( (unsigned __int64)v55 >= v54 )
    goto LABEL_60;
  do
  {
    while ( 1 )
    {
      v56 = *v55;
      if ( *v55 )
      {
        v57 = *(_QWORD *)(a1 + 80);
        v41 = (*(_DWORD *)(v56 + 8))-- == 1;
        if ( v41 )
          break;
      }
      if ( (unsigned __int64)++v55 >= v54 )
        goto LABEL_59;
    }
    v118 = v54;
    v123 = v55;
    sub_15D7BC0(v57, v56);
    v54 = v118;
    v55 = v123 + 1;
  }
  while ( (unsigned __int64)(v123 + 1) < v118 );
LABEL_59:
  v52 = *(_QWORD **)(a1 + 88);
  if ( v52 )
  {
LABEL_60:
    v58 = *(_QWORD *)(a1 + 496);
    *((_DWORD *)v52 - 1) = v53;
    if ( v58 )
    {
      ++*(_DWORD *)(v58 + 8);
      v53 = *((_DWORD *)v52 - 1);
    }
    if ( *((_DWORD *)v52 - 2) == v53 )
    {
      v100 = (3 * v53 + 1) >> 1;
      v101 = 8 * v100 + 8;
      if ( 8 * v53 + 8 >= (unsigned int)v101 || v53 >= v100 )
      {
        v106 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v137, "Overflow encountered when expanding vector");
        *v106 = (char *)off_1C63128;
        sub_2333C0(v106 + 1, v137);
        sub_233E40((__int64)v137);
        __cxa_throw(v106, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v119 = v58;
      v102 = (unsigned int *)sub_186B300(v52 - 1, v101);
      v103 = v102[1];
      v52 = v102 + 2;
      *(_QWORD *)(a1 + 88) = v102 + 2;
      v58 = v119;
      *v102 = (3 * v53 + 1) >> 1;
      LODWORD(v102) = v103;
      v59 = &v52[v103];
      v60 = (_DWORD)v102 + 1;
    }
    else
    {
      v59 = &v52[*((unsigned int *)v52 - 1)];
      v60 = *((_DWORD *)v52 - 1) + 1;
    }
  }
  else
  {
LABEL_139:
    v104 = *(_QWORD *)(a1 + 496);
    if ( v104 )
      ++*(_DWORD *)(v104 + 8);
    v126 = v104;
    v105 = (_QWORD *)sub_186B270(0x18u);
    v52 = v105 + 1;
    *v105 = 2;
    v58 = v126;
    v60 = 1;
    *(_QWORD *)(a1 + 88) = v52;
    v59 = v52;
  }
  *v59 = v58;
  *((_DWORD *)v52 - 1) = v60;
  if ( v130 )
  {
    v124 = *(_DWORD *)(v130 + 8);
    *(_DWORD *)(v130 + 8) = v124 - 1;
    if ( v124 == 1 )
      sub_15D7BC0(v112, v130);
  }
  v61 = *(_QWORD *)(a1 + 56);
  if ( v61 )
  {
    v62 = (__int64 *)(v61 + 8LL * *(unsigned int *)(v5 + 12));
    v63 = v61 + 8LL * *(unsigned int *)(v61 - 4);
    v125 = *(_DWORD *)(v5 + 12);
    if ( (unsigned __int64)v62 >= v63 )
      goto LABEL_75;
    do
    {
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 )
        {
          v65 = *(_QWORD *)(a1 + 48);
          v41 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v41 )
            break;
        }
        if ( (unsigned __int64)++v62 >= v63 )
          goto LABEL_74;
      }
      v131 = v63;
      sub_15D7BC0(v65, v64);
      v63 = v131;
      ++v62;
    }
    while ( (unsigned __int64)v62 < v131 );
LABEL_74:
    v61 = *(_QWORD *)(a1 + 56);
    if ( v61 )
LABEL_75:
      *(_DWORD *)(v61 - 4) = v125;
  }
  v66 = *(_QWORD *)(a1 + 480);
  v137[0] = v66;
  if ( v66 )
    ++*(_DWORD *)(v66 + 8);
  sub_CB55F0((_QWORD *)(a1 + 56), v137);
  v67 = *(_QWORD *)(a1 + 160);
  if ( v67 )
    *(_DWORD *)(v67 - 4) -= v116;
  v68 = *(_QWORD *)(a1 + 528);
  if ( v68 )
    *(_DWORD *)(v68 - 4) -= v116;
  sub_15844D0(a1);
  v69 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, v69, *(_QWORD *)(a1 + 496));
    v69 = *(_QWORD *)(a1 + 480);
  }
  if ( v69 )
  {
    v70 = *(_QWORD *)(a1 + 488);
    v41 = (*(_DWORD *)(v69 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v70, v69);
  }
  v71 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v71 && (v72 = *(_QWORD *)(a1 + 504), v41 = *(_DWORD *)(v71 + 8) == 1, --*(_DWORD *)(v71 + 8), v41) )
  {
    sub_15D7BC0(v72, v71);
    v73 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v73 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v74 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v74 - 1;
  if ( a2 != v73 && v74 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v74 - 2) + 8) |= 2u;
  v75 = v135;
  if ( v135 )
  {
    v76 = (unsigned __int64)&v135[*((unsigned int *)v135 - 1)];
    if ( (unsigned __int64)v135 < v76 )
    {
      do
      {
        while ( 1 )
        {
          v77 = *v75;
          if ( *v75 )
          {
            v41 = (*(_DWORD *)(v77 + 8))-- == 1;
            if ( v41 )
              break;
          }
          if ( (unsigned __int64)++v75 >= v76 )
            goto LABEL_100;
        }
        ++v75;
        sub_15D7BC0(v113, v77);
      }
      while ( (unsigned __int64)v75 < v76 );
    }
LABEL_100:
    result = sub_186B220(v135 - 1);
  }
  if ( v17 )
  {
    v78 = v17;
    if ( v17 < &v17[*((unsigned int *)v17 - 1)] )
    {
      v79 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
      do
      {
        v80 = *v78;
        if ( *v78 )
        {
          v41 = (*(_DWORD *)(v80 + 8))-- == 1;
          if ( v41 )
            sub_15D7BC0(v110, v80);
        }
        ++v78;
      }
      while ( (unsigned __int64)v78 < v79 );
    }
    return sub_186B220(v17 - 1);
  }
  return result;
}

