__int64 __fastcall sub_C8E040(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v45; // r15
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // rsi
  __int64 v50; // rdi
  _QWORD *v51; // rdx
  unsigned int v52; // r15d
  unsigned __int64 v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rdi
  __int64 v57; // rcx
  _QWORD *v58; // rsi
  int v59; // eax
  __int64 v60; // rax
  __int64 *v61; // r15
  unsigned __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rsi
  int v73; // ecx
  __int64 *v74; // rbx
  unsigned __int64 v75; // r13
  __int64 v76; // rsi
  __int64 *v77; // rbx
  unsigned __int64 v78; // r14
  __int64 v79; // rsi
  _QWORD *v80; // rax
  int v81; // r12d
  __int64 v82; // rcx
  int v83; // edx
  _QWORD *v84; // rcx
  _QWORD *v85; // rdx
  __int64 v86; // rax
  _DWORD *v87; // rax
  unsigned int v88; // edx
  unsigned int v89; // ebx
  size_t v90; // rsi
  unsigned int *v91; // rdx
  __int64 v92; // rcx
  unsigned int v93; // ebx
  size_t v94; // rsi
  unsigned int *v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rax
  _QWORD *v98; // rax
  unsigned int v99; // r9d
  size_t v100; // rsi
  unsigned int *v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rcx
  _QWORD *v104; // rax
  char **v105; // r13
  char **v106; // r13
  char **exception; // r14
  char **v108; // r14
  __int64 v109; // [rsp+0h] [rbp-C0h]
  __int64 v110; // [rsp+8h] [rbp-B8h]
  __int64 v111; // [rsp+10h] [rbp-B0h]
  __int64 v112; // [rsp+18h] [rbp-A8h]
  unsigned int v113; // [rsp+24h] [rbp-9Ch]
  unsigned int v114; // [rsp+28h] [rbp-98h]
  int v115; // [rsp+2Ch] [rbp-94h]
  _QWORD *v116; // [rsp+30h] [rbp-90h]
  unsigned __int64 v117; // [rsp+30h] [rbp-90h]
  __int64 v118; // [rsp+30h] [rbp-90h]
  __int64 v119; // [rsp+38h] [rbp-88h]
  _QWORD *v120; // [rsp+38h] [rbp-88h]
  _QWORD *v121; // [rsp+38h] [rbp-88h]
  int v122; // [rsp+38h] [rbp-88h]
  int v123; // [rsp+38h] [rbp-88h]
  __int64 v124; // [rsp+38h] [rbp-88h]
  unsigned int v125; // [rsp+40h] [rbp-80h]
  __int64 v126; // [rsp+40h] [rbp-80h]
  unsigned int v127; // [rsp+40h] [rbp-80h]
  __int64 v128; // [rsp+40h] [rbp-80h]
  unsigned __int64 v129; // [rsp+40h] [rbp-80h]
  __int64 v130; // [rsp+40h] [rbp-80h]
  __int64 v131; // [rsp+48h] [rbp-78h]
  __int64 v132; // [rsp+48h] [rbp-78h]
  _QWORD *v133; // [rsp+48h] [rbp-78h]
  int v134; // [rsp+48h] [rbp-78h]
  __int64 v135[10]; // [rsp+70h] [rbp-50h] BYREF

  v5 = a3;
  v115 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) <= 0x3Fu )
  {
    sub_15856A0(a1);
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
    v80 = *(_QWORD **)(a1 + 160);
    if ( v80 )
      v81 = *((_DWORD *)v80 - 1);
    else
      v81 = 0;
    if ( v115 )
    {
      v130 = v5;
      v134 = 0;
      while ( 1 )
      {
        if ( v80 )
        {
          v88 = *((_DWORD *)v80 - 1);
          if ( v88 == *((_DWORD *)v80 - 2) )
          {
            v89 = (3 * v88 + 1) >> 1;
            v90 = 8 * v89 + 8;
            if ( 8 * v88 + 8 >= (unsigned int)v90 || v88 >= v89 )
            {
LABEL_144:
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C8AA10(v135, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v135);
              sub_233E40((__int64)v135);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v91 = (unsigned int *)sub_186B300(v80 - 1, v90);
            v80 = v91 + 2;
            v92 = v91[1];
            *v91 = v89;
            *(_QWORD *)(a1 + 160) = v91 + 2;
            LODWORD(v91) = v92;
            v84 = &v80[v92];
            v83 = (_DWORD)v91 + 1;
          }
          else
          {
            v82 = v88;
            v83 = v88 + 1;
            v84 = &v80[v82];
          }
        }
        else
        {
          v97 = (_QWORD *)sub_186B270(0x18u);
          v83 = 1;
          *v97 = 2;
          v80 = v97 + 1;
          *(_QWORD *)(a1 + 160) = v80;
          v84 = v80;
        }
        *v84 = 0;
        *((_DWORD *)v80 - 1) = v83;
        v85 = *(_QWORD **)(a1 + 528);
        if ( v85 )
        {
          v86 = *((unsigned int *)v85 - 1);
          if ( (_DWORD)v86 == *((_DWORD *)v85 - 2) )
          {
            v93 = (unsigned int)(3 * v86 + 1) >> 1;
            v94 = 4 * v93 + 8;
            if ( 4 * (int)v86 + 8 >= (unsigned int)v94 || (unsigned int)v86 >= v93 )
              goto LABEL_144;
            v95 = (unsigned int *)sub_186B300(v85 - 1, v94);
            v85 = v95 + 2;
            *v95 = v93;
            v96 = v95[1];
            *(_QWORD *)(a1 + 528) = v85;
            v87 = (_DWORD *)v85 + v96;
          }
          else
          {
            v87 = (_DWORD *)v85 + v86;
          }
        }
        else
        {
          v98 = (_QWORD *)sub_186B270(0x10u);
          v85 = v98 + 1;
          *v98 = 2;
          *(_QWORD *)(a1 + 528) = v98 + 1;
          v87 = v98 + 1;
        }
        *v87 = v81;
        ++v134;
        ++*((_DWORD *)v85 - 1);
        if ( v134 == v115 )
          break;
        v80 = *(_QWORD **)(a1 + 160);
      }
      v5 = v130;
    }
    *(_DWORD *)(a1 + 128) += v115;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v5 + 8);
    if ( v9 >> 6 )
      break;
    v6 = *(_QWORD *)(a2 + 24);
    v7 = v9 & 0x3F | 0x40;
    *(_DWORD *)(v5 + 8) = v7;
    result = sub_C8DA40((_QWORD *)a1, v6, ((unsigned __int16)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v10 = *(unsigned int *)(a2 + 20);
  v11 = *(_QWORD *)(a1 + 8);
  v109 = *(_QWORD *)(a1 + 8);
  v110 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(v5 + 12));
  v113 = *(_DWORD *)(a2 + 72);
  v114 = *(_DWORD *)(a2 + 76);
  v131 = 16 * v10;
  if ( v113 )
  {
    v12 = *(_QWORD *)(a2 + 16 * v10 + 80);
    v132 = a2 + 16 * v10;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    v13 = (_QWORD *)sub_186B270(0x18u);
    v14 = v13 + 1;
    *v13 = 2;
    v15 = 1;
    v16 = v113 + 2 * v10;
    v17 = v14;
    v18 = a2 + 8 * v16;
    while ( 1 )
    {
      v132 += 8;
      *v14 = v12;
      *((_DWORD *)v17 - 1) = v15;
      if ( v18 == v132 )
        break;
      v12 = *(_QWORD *)(v132 + 80);
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v19 = *((_DWORD *)v17 - 1);
      if ( v19 == *((_DWORD *)v17 - 2) )
      {
        v21 = (3 * v19 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v22 || v19 >= v21 )
        {
          v108 = (char **)__cxa_allocate_exception(0x28u);
          sub_C8AA10(v135, "Overflow encountered when expanding vector");
          *v108 = (char *)off_1C63128;
          sub_2333C0(v108 + 1, v135);
          sub_233E40((__int64)v135);
          __cxa_throw(v108, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v119 = v18;
        v125 = (3 * v19 + 1) >> 1;
        v23 = (unsigned int *)sub_186B300(v17 - 1, v22);
        v17 = v23 + 2;
        v18 = v119;
        *v23 = v125;
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
    v112 = *(_QWORD *)(a1 + 8);
    v131 = 16LL * *(unsigned int *)(a2 + 20);
  }
  else
  {
    v112 = v11;
    v17 = nullptr;
  }
  if ( v114 )
  {
    v24 = *(_QWORD *)(a2 + v131 + 80);
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v126 = a2 + v131 + 80;
    v25 = (_QWORD *)sub_186B270(0x18u);
    v26 = v25 + 1;
    v27 = v131;
    *v25 = 2;
    v133 = v25 + 1;
    v28 = (_QWORD *)v126;
    v29 = 1;
    v30 = (_QWORD *)(v27 + a2 + 8LL * v114 + 80);
    while ( 1 )
    {
      ++v28;
      *v26 = v24;
      *((_DWORD *)v133 - 1) = v29;
      if ( v28 == v30 )
        break;
      v24 = *v28;
      if ( *v28 )
        ++*(_DWORD *)(v24 + 8);
      v31 = *((_DWORD *)v133 - 1);
      if ( v31 == *((_DWORD *)v133 - 2) )
      {
        v33 = (3 * v31 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v34 || v31 >= v33 )
        {
          v106 = (char **)__cxa_allocate_exception(0x28u);
          sub_C8AA10(v135, "Overflow encountered when expanding vector");
          *v106 = (char *)off_1C63128;
          sub_2333C0(v106 + 1, v135);
          sub_233E40((__int64)v135);
          __cxa_throw(v106, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v116 = v30;
        v120 = v28;
        v127 = (3 * v31 + 1) >> 1;
        v35 = (unsigned int *)sub_186B300(v133 - 1, v34);
        v36 = v35[1];
        v37 = v35 + 2;
        v133 = v35 + 2;
        v28 = v120;
        *v35 = v127;
        LODWORD(v35) = v36;
        v26 = &v37[2 * v36];
        v30 = v116;
        v29 = (_DWORD)v35 + 1;
      }
      else
      {
        v32 = v31;
        v29 = v31 + 1;
        v26 = &v133[v32];
      }
    }
    v111 = *(_QWORD *)(a1 + 8);
    v38 = sub_15DBA30(v111, a2, v113, (_DWORD)v17, v114, (_DWORD)v133, v110);
  }
  else
  {
    v133 = nullptr;
    v111 = v112;
    v38 = sub_15DBA30(v112, a2, v113, (_DWORD)v17, 0, 0, v110);
  }
  v128 = v38;
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
    if ( a2 == v128 )
      goto LABEL_45;
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
    sub_C8A9D0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    v46 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 496) = v45;
    v47 = sub_15DE750(v46);
  }
  else
  {
    *(_QWORD *)(a1 + 496) = 0;
    v47 = sub_15DE370(v42);
  }
  v48 = v47;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  sub_C8A9D0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
  *(_QWORD *)(a1 + 496) = v48;
  if ( v128 )
LABEL_45:
    ++*(_DWORD *)(v128 + 8);
  v49 = *(_QWORD *)(a1 + 480);
  if ( v49 )
  {
    v50 = *(_QWORD *)(a1 + 488);
    v41 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v50, v49);
  }
  v51 = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v128;
  if ( !v51 )
    goto LABEL_132;
  v52 = *(_DWORD *)(v5 + 12);
  v53 = (unsigned __int64)&v51[*((unsigned int *)v51 - 1)];
  v54 = &v51[v52];
  if ( (unsigned __int64)v54 >= v53 )
    goto LABEL_57;
  do
  {
    while ( 1 )
    {
      v55 = *v54;
      if ( *v54 )
      {
        v56 = *(_QWORD *)(a1 + 80);
        v41 = (*(_DWORD *)(v55 + 8))-- == 1;
        if ( v41 )
          break;
      }
      if ( (unsigned __int64)++v54 >= v53 )
        goto LABEL_56;
    }
    v117 = v53;
    v121 = v54;
    sub_15D7BC0(v56, v55);
    v53 = v117;
    v54 = v121 + 1;
  }
  while ( (unsigned __int64)(v121 + 1) < v117 );
LABEL_56:
  v51 = *(_QWORD **)(a1 + 88);
  if ( v51 )
  {
LABEL_57:
    v57 = *(_QWORD *)(a1 + 496);
    *((_DWORD *)v51 - 1) = v52;
    if ( v57 )
    {
      ++*(_DWORD *)(v57 + 8);
      v52 = *((_DWORD *)v51 - 1);
    }
    if ( *((_DWORD *)v51 - 2) == v52 )
    {
      v99 = (3 * v52 + 1) >> 1;
      v100 = 8 * v99 + 8;
      if ( 8 * v52 + 8 >= (unsigned int)v100 || v52 >= v99 )
      {
        v105 = (char **)__cxa_allocate_exception(0x28u);
        sub_C8AA10(v135, "Overflow encountered when expanding vector");
        *v105 = (char *)off_1C63128;
        sub_2333C0(v105 + 1, v135);
        sub_233E40((__int64)v135);
        __cxa_throw(v105, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v118 = v57;
      v101 = (unsigned int *)sub_186B300(v51 - 1, v100);
      v102 = v101[1];
      v51 = v101 + 2;
      *(_QWORD *)(a1 + 88) = v101 + 2;
      v57 = v118;
      *v101 = (3 * v52 + 1) >> 1;
      LODWORD(v101) = v102;
      v58 = &v51[v102];
      v59 = (_DWORD)v101 + 1;
    }
    else
    {
      v58 = &v51[*((unsigned int *)v51 - 1)];
      v59 = *((_DWORD *)v51 - 1) + 1;
    }
  }
  else
  {
LABEL_132:
    v103 = *(_QWORD *)(a1 + 496);
    if ( v103 )
      ++*(_DWORD *)(v103 + 8);
    v124 = v103;
    v104 = (_QWORD *)sub_186B270(0x18u);
    v51 = v104 + 1;
    *v104 = 2;
    v57 = v124;
    v59 = 1;
    *(_QWORD *)(a1 + 88) = v51;
    v58 = v51;
  }
  *v58 = v57;
  *((_DWORD *)v51 - 1) = v59;
  if ( v128 )
  {
    v122 = *(_DWORD *)(v128 + 8);
    *(_DWORD *)(v128 + 8) = v122 - 1;
    if ( v122 == 1 )
      sub_15D7BC0(v111, v128);
  }
  v60 = *(_QWORD *)(a1 + 56);
  if ( v60 )
  {
    v61 = (__int64 *)(v60 + 8LL * *(unsigned int *)(v5 + 12));
    v62 = v60 + 8LL * *(unsigned int *)(v60 - 4);
    v123 = *(_DWORD *)(v5 + 12);
    if ( (unsigned __int64)v61 >= v62 )
      goto LABEL_72;
    do
    {
      while ( 1 )
      {
        v63 = *v61;
        if ( *v61 )
        {
          v64 = *(_QWORD *)(a1 + 48);
          v41 = (*(_DWORD *)(v63 + 8))-- == 1;
          if ( v41 )
            break;
        }
        if ( (unsigned __int64)++v61 >= v62 )
          goto LABEL_71;
      }
      v129 = v62;
      sub_15D7BC0(v64, v63);
      v62 = v129;
      ++v61;
    }
    while ( (unsigned __int64)v61 < v129 );
LABEL_71:
    v60 = *(_QWORD *)(a1 + 56);
    if ( v60 )
LABEL_72:
      *(_DWORD *)(v60 - 4) = v123;
  }
  v65 = *(_QWORD *)(a1 + 480);
  v135[0] = v65;
  if ( v65 )
    ++*(_DWORD *)(v65 + 8);
  sub_C8B2F0((_QWORD *)(a1 + 56), v135);
  v66 = *(_QWORD *)(a1 + 160);
  if ( v66 )
    *(_DWORD *)(v66 - 4) -= v115;
  v67 = *(_QWORD *)(a1 + 528);
  if ( v67 )
    *(_DWORD *)(v67 - 4) -= v115;
  sub_15844D0(a1);
  v68 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(v5 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, v68, *(_QWORD *)(a1 + 496));
    v68 = *(_QWORD *)(a1 + 480);
  }
  if ( v68 )
  {
    v69 = *(_QWORD *)(a1 + 488);
    v41 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v69, v68);
  }
  v70 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v70 && (v71 = *(_QWORD *)(a1 + 504), v41 = *(_DWORD *)(v70 + 8) == 1, --*(_DWORD *)(v70 + 8), v41) )
  {
    sub_15D7BC0(v71, v70);
    v72 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v72 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v73 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v73 - 1;
  if ( a2 != v72 && v73 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v73 - 2) + 8) |= 2u;
  v74 = v133;
  if ( v133 )
  {
    v75 = (unsigned __int64)&v133[*((unsigned int *)v133 - 1)];
    if ( (unsigned __int64)v133 < v75 )
    {
      do
      {
        while ( 1 )
        {
          v76 = *v74;
          if ( *v74 )
          {
            v41 = (*(_DWORD *)(v76 + 8))-- == 1;
            if ( v41 )
              break;
          }
          if ( (unsigned __int64)++v74 >= v75 )
            goto LABEL_97;
        }
        ++v74;
        sub_15D7BC0(v112, v76);
      }
      while ( (unsigned __int64)v74 < v75 );
    }
LABEL_97:
    result = sub_186B220(v133 - 1);
  }
  if ( v17 )
  {
    v77 = v17;
    if ( v17 < &v17[*((unsigned int *)v17 - 1)] )
    {
      v78 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
      do
      {
        v79 = *v77;
        if ( *v77 )
        {
          v41 = (*(_DWORD *)(v79 + 8))-- == 1;
          if ( v41 )
            sub_15D7BC0(v109, v79);
        }
        ++v77;
      }
      while ( (unsigned __int64)v77 < v78 );
    }
    return sub_186B220(v17 - 1);
  }
  return result;
}

