__int64 __fastcall sub_B35EF0(__int64 a1, unsigned int *a2, int a3)
{
  char **v3; // r12
  __int64 v4; // rdx
  char **exception; // r14
  __int64 v6; // rdx
  char **v7; // r14
  __int64 v8; // rdx
  char **v9; // r14
  __int64 v10; // rdx
  char **v11; // r14
  __int64 v12; // rdx
  void *v15; // rax
  unsigned int *v16; // rbx
  int *v17; // rax
  int *v18; // r15
  __int64 result; // rax
  __int64 (__fastcall *v20)(__int64, __int64); // rax
  _DWORD *v21; // rdx
  unsigned int v22; // r12d
  int **v23; // rcx
  int v24; // eax
  unsigned int v25; // r15d
  _QWORD *v26; // rcx
  __int64 v27; // rdi
  unsigned int **v28; // r15
  unsigned int *v29; // rsi
  bool v30; // zf
  unsigned int v31; // eax
  _QWORD *v32; // rcx
  unsigned int v33; // edi
  unsigned int v34; // r14d
  unsigned int v35; // edx
  size_t v36; // rsi
  unsigned int v37; // r15d
  unsigned int *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdi
  char v43; // al
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rax
  _QWORD *v47; // rdi
  __int64 v48; // rcx
  __int64 v49; // rsi
  void *v50; // rdi
  __int64 v51; // r8
  unsigned int v52; // ecx
  unsigned int **v53; // r15
  unsigned int v54; // edi
  int v55; // r9d
  __int64 v56; // r8
  unsigned int **v57; // r12
  __int64 v58; // rdi
  unsigned int **v59; // rsi
  unsigned int *v60; // rdx
  unsigned int v61; // ebx
  unsigned int **v62; // rax
  unsigned int **v63; // rdi
  unsigned int *v64; // rdx
  void *v65; // rdi
  unsigned int *v66; // rax
  unsigned int *v67; // rdx
  unsigned int v68; // edx
  size_t v69; // rsi
  unsigned int *v70; // rax
  unsigned int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rax
  unsigned int **v74; // rax
  char *v75; // rcx
  unsigned int v76; // r9d
  char *v77; // r11
  __int64 v78; // rax
  unsigned int **v79; // rdx
  unsigned int **v80; // rax
  unsigned int v81; // ecx
  unsigned int v82; // eax
  unsigned int *v83; // rax
  void *v84; // r15
  unsigned int v85; // ebx
  _QWORD *v86; // rax
  __int64 v87; // rdi
  __int64 i; // rdx
  _QWORD *v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // r12
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  _QWORD *v94; // rbx
  unsigned int v95; // eax
  __int64 v96; // rcx
  int v97; // eax
  _QWORD *v98; // rcx
  __int64 v99; // rbx
  int v100; // r12d
  int v101; // eax
  int v102; // r8d
  int v103; // r9d
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rsi
  void *v107; // rdi
  __int64 v108; // r12
  __int64 v109; // rax
  __int64 v110; // rbx
  __int64 v111; // r15
  unsigned int v112; // r15d
  unsigned int v113; // ecx
  unsigned int *v114; // rax
  __int64 v115; // rcx
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  unsigned int v119; // ebx
  unsigned int v120; // ebx
  unsigned int v121; // eax
  unsigned int v122; // ebx
  unsigned int v123; // eax
  __int64 v124; // rax
  _QWORD *v125; // r14
  __int64 v126; // rcx
  __int64 v127; // rax
  _QWORD *v128; // rdx
  __int64 v129; // rdi
  _QWORD *v130; // rax
  _QWORD *v131; // rdi
  __int64 v132; // rsi
  __int64 v133; // rsi
  __int64 v134; // rsi
  __int64 v135; // rsi
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rsi
  __int64 v140; // rdi
  __int64 v141; // rax
  _QWORD *v142; // rdx
  _QWORD *v143; // rax
  int v144; // [rsp-8h] [rbp-D8h]
  int v145; // [rsp+0h] [rbp-D0h]
  int v146; // [rsp+0h] [rbp-D0h]
  int v147; // [rsp+8h] [rbp-C8h]
  int v148; // [rsp+8h] [rbp-C8h]
  unsigned int v149; // [rsp+Ch] [rbp-C4h]
  int v150; // [rsp+10h] [rbp-C0h]
  unsigned int v151; // [rsp+10h] [rbp-C0h]
  unsigned int v152; // [rsp+10h] [rbp-C0h]
  _QWORD *v153; // [rsp+10h] [rbp-C0h]
  int v154; // [rsp+10h] [rbp-C0h]
  _DWORD *v155; // [rsp+10h] [rbp-C0h]
  __int64 *v156; // [rsp+18h] [rbp-B8h]
  _QWORD *v157; // [rsp+18h] [rbp-B8h]
  int v158; // [rsp+18h] [rbp-B8h]
  __int64 v159; // [rsp+20h] [rbp-B0h]
  unsigned int v160; // [rsp+20h] [rbp-B0h]
  unsigned int v161; // [rsp+20h] [rbp-B0h]
  _QWORD *v162; // [rsp+20h] [rbp-B0h]
  unsigned int v163; // [rsp+20h] [rbp-B0h]
  int v164; // [rsp+20h] [rbp-B0h]
  __int64 v165; // [rsp+20h] [rbp-B0h]
  _QWORD *v166; // [rsp+20h] [rbp-B0h]
  int v167; // [rsp+28h] [rbp-A8h]
  int *v168; // [rsp+28h] [rbp-A8h]
  __int64 v169; // [rsp+28h] [rbp-A8h]
  char v170; // [rsp+28h] [rbp-A8h]
  char v171; // [rsp+30h] [rbp-A0h]
  int v172; // [rsp+30h] [rbp-A0h]
  __int64 v173; // [rsp+38h] [rbp-98h] BYREF
  __int64 v174; // [rsp+40h] [rbp-90h] BYREF
  void *v175; // [rsp+48h] [rbp-88h]
  __int64 v176; // [rsp+50h] [rbp-80h] BYREF
  int v177; // [rsp+58h] [rbp-78h]
  int v178; // [rsp+60h] [rbp-70h]
  int v179; // [rsp+68h] [rbp-68h]
  int v180[2]; // [rsp+70h] [rbp-60h] BYREF
  __int64 v181; // [rsp+78h] [rbp-58h]
  void *v182; // [rsp+80h] [rbp-50h]
  __int64 v183; // [rsp+88h] [rbp-48h]
  __int64 v184; // [rsp+90h] [rbp-40h]
  unsigned int v185; // [rsp+98h] [rbp-38h]
  int v186; // [rsp+A0h] [rbp-30h]
  void *v187; // [rsp+A8h] [rbp-28h]
  int v188; // [rsp+B0h] [rbp-20h]
  __int64 v189; // [rsp+B8h] [rbp-18h]

  v167 = a3;
  sub_B34CD0(a1);
  v15 = *(void **)(a1 + 24);
  v174 = 0;
  v175 = v15;
  v156 = &v174;
  sub_14B9BF0(*(_QWORD *)(a1 + 16) + 7456LL, a2, &v174);
  v16 = (unsigned int *)v174;
  if ( !*(_WORD *)(v174 + 4) && (*(_BYTE *)(v174 + 30) & 1) != 0 )
    goto LABEL_3;
  v51 = *(unsigned int *)(a1 + 544);
  v52 = a2[3];
  v53 = *(unsigned int ***)(a1 + 536);
  v54 = v51 - 1;
  v55 = *(_DWORD *)(a1 + 544);
  v56 = 8 * v51;
  v57 = (unsigned int **)((char *)v53 + v56);
  v58 = 8LL * (v52 & v54);
  v59 = &v53[(unsigned __int64)v58 / 8];
  if ( v58 != v56 )
  {
    for ( result = (__int64)&v53[(unsigned __int64)v58 / 8]; v57 != (unsigned int **)result; result += 8 )
    {
      v60 = *(unsigned int **)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( v60[3] == v52 && v60 == a2 )
          goto LABEL_57;
      }
      else if ( !v60 )
      {
        goto LABEL_47;
      }
    }
  }
  if ( v53 != v59 )
  {
    for ( result = *(_QWORD *)(a1 + 536); v59 != (unsigned int **)result; result += 8 )
    {
      v67 = *(unsigned int **)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( v67[3] == v52 && v67 == a2 )
          goto LABEL_57;
      }
      else if ( !v67 )
      {
        break;
      }
    }
  }
LABEL_47:
  v61 = 2 * v55;
  if ( 3 * v55 < (unsigned int)(4 * (*(_DWORD *)(a1 + 548) + *(_DWORD *)(a1 + 552))) )
  {
    LODWORD(v159) = 16 * v55;
    v74 = (unsigned int **)sub_186B270(8LL * v61);
    v56 = 8LL * v61;
    v53 = v74;
    if ( v61 )
    {
      memset(v74, 0, 8LL * v61);
      v56 = 8LL * v61;
    }
    v75 = *(char **)(a1 + 536);
    v76 = v61 - 1;
    v57 = (unsigned int **)((char *)v53 + v56);
    v77 = &v75[8 * *(unsigned int *)(a1 + 544)];
    if ( v75 != v77 )
    {
      do
      {
        if ( *(_QWORD *)v75 > 1u )
        {
          v78 = 8LL * (*(_DWORD *)(*(_QWORD *)v75 + 12LL) & v76);
          v79 = &v53[(unsigned __int64)v78 / 8];
          if ( v56 == v78 )
          {
LABEL_108:
            if ( v53 == v79 )
            {
LABEL_148:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v80 = v53;
            while ( *v80 )
            {
              if ( v79 == ++v80 )
                goto LABEL_148;
            }
          }
          else
          {
            v80 = &v53[(unsigned __int64)v78 / 8];
            while ( *v80 )
            {
              if ( v57 == ++v80 )
                goto LABEL_108;
            }
          }
          *v80 = *(unsigned int **)v75;
        }
        v75 += 8;
      }
      while ( v77 != v75 );
      v77 = *(char **)(a1 + 536);
    }
    if ( v77 )
    {
      v150 = v61 - 1;
      v159 = v56;
      sub_186B220(v77);
      v76 = v61 - 1;
      v56 = v159;
    }
    v52 = a2[3];
    *(_QWORD *)(a1 + 536) = v53;
    *(_DWORD *)(a1 + 544) = v61;
    *(_DWORD *)(a1 + 552) = 0;
    v58 = 8LL * (v52 & v76);
    v59 = &v53[(unsigned __int64)v58 / 8];
  }
  if ( v58 != v56 )
  {
    v62 = v59;
    v63 = nullptr;
    while ( 1 )
    {
      v64 = *v62;
      if ( (unsigned __int64)*v62 > 1 )
      {
        if ( v64[3] == v52 && v64 == a2 )
        {
          *v62 = a2;
          goto LABEL_114;
        }
      }
      else
      {
        if ( !v64 )
        {
          if ( v63 )
            goto LABEL_136;
          v63 = v62;
          goto LABEL_137;
        }
        v63 = v62;
      }
      if ( ++v62 == v57 )
        goto LABEL_63;
    }
  }
  v63 = nullptr;
  while ( 1 )
  {
LABEL_63:
    if ( v53 == v59 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v66 = *v53;
    if ( (unsigned __int64)*v53 <= 1 )
      break;
    if ( v66[3] == v52 && v66 == a2 )
    {
      *v53 = a2;
      goto LABEL_114;
    }
LABEL_62:
    ++v53;
  }
  if ( v66 )
  {
    v63 = v53;
    goto LABEL_62;
  }
  if ( v63 )
LABEL_136:
    --*(_DWORD *)(a1 + 552);
  else
    v63 = v53;
LABEL_137:
  *v63 = a2;
  ++*(_DWORD *)(a1 + 548);
LABEL_114:
  v91 = *(_QWORD *)(a1 + 16);
  v92 = (_QWORD *)sub_180C100(v91 + 8400, 24);
  v93 = *(_QWORD **)(v91 + 9456);
  v94 = v92;
  *v92 = off_1C4D780;
  v92[1] = a1 + 536;
  v92[2] = a2;
  if ( v93 )
  {
    v95 = *((_DWORD *)v93 - 1);
    if ( v95 == *((_DWORD *)v93 - 2) )
    {
      v112 = (3 * v95 + 1) >> 1;
      v113 = 8 * v112 + 8;
      if ( 8 * v95 + 8 >= v113 || v95 >= v112 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_147B96((__int64 *)v180, "Overflow encountered when expanding vector", v6);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v180);
        sub_233E40((__int64)v180);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v114 = (unsigned int *)sub_186B300(v93 - 1, v113);
      v115 = v114[1];
      v93 = v114 + 2;
      *(_QWORD *)(v91 + 9456) = v114 + 2;
      *v114 = v112;
      LODWORD(v114) = v115;
      v98 = &v93[v115];
      v97 = (_DWORD)v114 + 1;
    }
    else
    {
      v96 = v95;
      v97 = v95 + 1;
      v98 = &v93[v96];
    }
  }
  else
  {
    v142 = (_QWORD *)sub_186B270(0x18u);
    *v142 = 2;
    v97 = 1;
    v93 = v142 + 1;
    *(_QWORD *)(v91 + 9456) = v93;
    v98 = v93;
  }
  *v98 = v94;
  v99 = *(_QWORD *)(a1 + 24);
  *((_DWORD *)v93 - 1) = v97;
  v100 = sub_15D1F10(a2);
  sub_180C5A0(v180, "aux-expr");
  v101 = sub_15E3D10(
           v99,
           (int)v180,
           (int)&qword_18D6CD0,
           0,
           0,
           v100,
           1,
           v144,
           v145,
           v147,
           v150,
           (int)&v174,
           v159,
           v167,
           v171,
           v173,
           v174,
           (int)v175,
           v176,
           v177,
           v178,
           v179,
           v180[0],
           v181,
           (int)v182,
           v183,
           v184,
           v185,
           v186,
           v187,
           v188,
           v189);
  v104 = sub_15DC610(v99, v101, 0, 0, v102, v103, v146, v148, v154, v158, v164, v170, v172, v173, v174, v175);
  v105 = v104;
  if ( v104 )
    ++*(_DWORD *)(v104 + 8);
  v106 = v174;
  if ( v174 )
  {
    v107 = v175;
    v30 = (*(_DWORD *)(v174 + 8))-- == 1;
    if ( v30 )
    {
      v165 = v104;
      sub_15D7BC0(v107, v106);
      v105 = v165;
    }
  }
  v108 = *(_QWORD *)(a1 + 24);
  v174 = v105;
  v109 = sub_15E1B70(v108);
  v110 = v109;
  if ( v109 )
    ++*(_DWORD *)(v109 + 8);
  sub_8F8A20(*(_QWORD *)(a1 + 16));
  sub_8EA730(*(_QWORD *)(a1 + 16));
  v111 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v111 + 7488) + 48LL))(*(_QWORD *)(v111 + 7488), v110);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v111 + 7488) + 64LL))(*(_QWORD *)(v111 + 7488));
  if ( v110 )
  {
    v30 = (*(_DWORD *)(v110 + 8))-- == 1;
    if ( v30 )
      sub_15D7BC0(v108, v110);
  }
  v16 = (unsigned int *)v174;
LABEL_3:
  if ( (_BYTE)v167 )
    v17 = (int *)sub_966570(a1, v16);
  else
    v17 = *(int **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v16);
  v168 = v17;
  v18 = v17;
  LODWORD(result) = sub_B39350(v17, *(unsigned int *)(a1 + 8));
  if ( (_DWORD)result != -1 )
  {
    result = (unsigned int)result;
    if ( v18 == *(int **)(*(_QWORD *)(a1 + 32) + 8LL * (unsigned int)result) )
    {
      v16 = (unsigned int *)v174;
LABEL_57:
      if ( v16 )
      {
        v65 = v175;
        v30 = v16[2]-- == 1;
        if ( v30 )
          return sub_15D7BC0(v65, v16);
      }
      return result;
    }
  }
  v20 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
  if ( v20 != sub_902EE0 )
  {
    v22 = v20(a1, (__int64)v168);
    v25 = v22 + 1;
    goto LABEL_12;
  }
  v21 = *(_DWORD **)(a1 + 32);
  if ( !v21 )
  {
    v118 = (_QWORD *)sub_186B270(0x18u);
    v25 = 1;
    v22 = 0;
    *(_QWORD *)(a1 + 32) = v118 + 1;
    v118[1] = v168;
    *v118 = 0x100000002LL;
    v26 = *(_QWORD **)(a1 + 448);
    if ( v26 )
      goto LABEL_13;
    goto LABEL_142;
  }
  v22 = *(v21 - 1);
  if ( v22 == *(v21 - 2) )
  {
    v25 = v22 + 1;
    v81 = (3 * v22 + 1) >> 1;
    v82 = 8 * v81 + 8;
    if ( 8 * (v22 + 1) >= v82 || v22 >= v81 )
    {
      v11 = (char **)__cxa_allocate_exception(0x28u);
      sub_147B96((__int64 *)v180, "Overflow encountered when expanding vector", v12);
      *v11 = (char *)off_1C63128;
      sub_2333C0(v11 + 1, v180);
      sub_233E40((__int64)v180);
      __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v83 = (unsigned int *)sub_186B300(v21 - 2, v82);
    v21 = v83 + 2;
    *(_QWORD *)(a1 + 32) = v83 + 2;
    *v83 = (3 * v22 + 1) >> 1;
    LODWORD(v83) = v83[1];
    v23 = (int **)&v21[2 * (unsigned int)v83];
    v24 = (_DWORD)v83 + 1;
  }
  else
  {
    v23 = (int **)&v21[2 * v22];
    v24 = v22 + 1;
    v25 = v22 + 1;
  }
  *v23 = v168;
  *(v21 - 1) = v24;
LABEL_12:
  v26 = *(_QWORD **)(a1 + 448);
  if ( !v26 )
  {
    if ( !v25 )
      goto LABEL_14;
LABEL_142:
    v117 = (_QWORD *)sub_186B270(0x18u);
    v26 = v117 + 1;
    *v117 = 2;
    *(_QWORD *)(a1 + 448) = v117 + 1;
    v151 = 0;
    goto LABEL_78;
  }
LABEL_13:
  v151 = *((_DWORD *)v26 - 1);
  if ( v151 >= v25 )
    goto LABEL_14;
LABEL_78:
  while ( 1 )
  {
    v71 = *((_DWORD *)v26 - 2);
    if ( v71 >= v25 )
      break;
    v68 = (3 * v71 + 1) >> 1;
    v69 = 8 * v68 + 8;
    if ( 8 * v71 + 8 >= (unsigned int)v69 || v71 >= v68 )
    {
      v7 = (char **)__cxa_allocate_exception(0x28u);
      sub_147B96((__int64 *)v180, "Overflow encountered when expanding vector", v8);
      *v7 = (char *)off_1C63128;
      sub_2333C0(v7 + 1, v180);
      sub_233E40((__int64)v180);
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v161 = (3 * v71 + 1) >> 1;
    v70 = (unsigned int *)sub_186B300(v26 - 1, v69);
    v26 = v70 + 2;
    *(_QWORD *)(a1 + 448) = v70 + 2;
    *v70 = v161;
  }
  *((_DWORD *)v26 - 1) = v25;
  v72 = 8LL * v25;
  v73 = 8LL * v151;
  if ( v73 != v72 )
  {
    v162 = v26;
    memset(&v26[(unsigned __int64)v73 / 8], 0, v72 - v73);
    v26 = v162;
  }
LABEL_14:
  v27 = *(_QWORD *)(a1 + 440);
  v28 = (unsigned int **)&v26[v22];
  if ( a2 )
    ++a2[2];
  v29 = *v28;
  if ( *v28 )
  {
    v30 = v29[2]-- == 1;
    if ( v30 )
      sub_15D7BC0(v27, v29);
  }
  v31 = *a2;
  v32 = *(_QWORD **)(a1 + 456);
  *v28 = a2;
  v160 = v31;
  if ( !v32 )
  {
    v34 = v31 + 1;
    if ( v31 == -1 )
      goto LABEL_29;
    v116 = (_QWORD *)sub_186B270(0x10u);
    v32 = v116 + 1;
    *v116 = 2;
    *(_QWORD *)(a1 + 456) = v116 + 1;
    v152 = 0;
    goto LABEL_26;
  }
  v33 = *((_DWORD *)v32 - 1);
  v152 = v33;
  if ( v31 >= v33 )
  {
    v34 = v31 + 1;
    if ( v33 >= v31 + 1 )
    {
      *((_DWORD *)v32 - 1) = v34;
      goto LABEL_29;
    }
LABEL_26:
    while ( 1 )
    {
      v39 = *((_DWORD *)v32 - 2);
      if ( v39 >= v34 )
        break;
      v35 = (3 * v39 + 1) >> 1;
      v36 = 4 * v35 + 8;
      v37 = v35;
      if ( 4 * v39 + 8 >= (unsigned int)v36 || v39 >= v35 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_147B96((__int64 *)v180, "Overflow encountered when expanding vector", v10);
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, v180);
        sub_233E40((__int64)v180);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300(v32 - 1, v36);
      v32 = v38 + 2;
      *v38 = v37;
      *(_QWORD *)(a1 + 456) = v38 + 2;
    }
    *((_DWORD *)v32 - 1) = v34;
    v40 = 4LL * v34;
    v41 = 4LL * v152;
    if ( v41 != v40 )
    {
      v153 = v32;
      memset((char *)v32 + v41, 255, v40 - v41);
      v32 = v153;
    }
  }
LABEL_29:
  v42 = *(_QWORD *)(a1 + 24);
  *((_DWORD *)v32 + v160) = v22;
  v43 = sub_15D2CB0(v42, v16);
  v44 = *(_QWORD *)(a1 + 16);
  if ( v43 )
  {
    v45 = *(_QWORD *)(v44 + 8832);
    if ( !v45 || (v46 = *v16, (unsigned int)v46 >= *(_DWORD *)(v45 - 4)) || *(_DWORD *)(v45 + 4 * v46) == 0x7FFFFFFF )
    {
      v119 = sub_B67520(v44, v16);
      sub_8F1CE0(*(_QWORD *)(a1 + 16), v119, *(_DWORD *)(a1 + 8));
      sub_B66DE0(*(_QWORD *)(a1 + 16), v119, 1);
      v44 = *(_QWORD *)(a1 + 16);
    }
  }
  sub_B66EF0(v44, v168, a1, v22);
  v47 = *(_QWORD **)(a1 + 16);
  v173 = 0;
  result = sub_8F6650(v47, v168, v156, &v173);
  v48 = v173;
  if ( (_BYTE)result )
  {
    v84 = v175;
    *(_QWORD *)v180 = 0;
    v169 = v174;
    v181 = v174;
    v182 = v175;
    if ( v174 )
      ++*(_DWORD *)(v174 + 8);
    v183 = 0;
    if ( v48 )
    {
      v85 = *(_DWORD *)(v48 - 4);
      v163 = *(_DWORD *)(v48 - 8);
      v86 = (_QWORD *)sub_186B270(4LL * v163 + 8);
      v48 = v173;
      *v86 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v163), _mm_cvtsi32_si128(v85)).m128i_u64[0];
      if ( v48 )
      {
        v87 = 4LL * *(unsigned int *)(v48 - 4);
        if ( v87 )
        {
          for ( i = 0; i != v87; i += 4 )
            *(_DWORD *)((char *)v86 + i + 8) = *(_DWORD *)(v48 + i);
        }
      }
      v157 = v86 + 1;
    }
    else
    {
      v157 = nullptr;
    }
    v89 = *(_QWORD **)(a1 + 384);
    v185 = v22;
    if ( v89 )
    {
      v90 = *((unsigned int *)v89 - 1);
      if ( (_DWORD)v90 == *((_DWORD *)v89 - 2) )
      {
        v120 = 3 * v90 + 1;
        v121 = v120 & 0xFFFFFFFE;
        v122 = v120 >> 1;
        v149 = v122;
        v123 = 16 * (v122 + v121) + 8;
        if ( 48 * (int)v90 + 8 >= v123 || (unsigned int)v90 >= v122 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_147B96(&v176, "Overflow encountered when expanding vector", v4);
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &v176);
          sub_233E40((__int64)&v176);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v124 = sub_186B270(v123);
        v125 = *(_QWORD **)(a1 + 384);
        v155 = (_DWORD *)v124;
        v126 = v124;
        v89 = (_QWORD *)(v124 + 8);
        if ( v125 )
        {
          v127 = *((unsigned int *)v125 - 1);
          v128 = v89;
          v129 = 3 * v127;
          *(_DWORD *)(v126 + 4) = v127;
          v130 = v125;
          v131 = &v125[2 * v129];
          if ( v125 != v131 )
          {
            do
            {
              v132 = *v130;
              *v130 = 0;
              v130 += 6;
              v128 += 6;
              *(v128 - 6) = v132;
              *(v128 - 4) = *(v130 - 4);
              v133 = *(v130 - 5);
              *(v130 - 5) = 0;
              *(v128 - 5) = v133;
              v134 = *(v130 - 3);
              *(v130 - 3) = 0;
              *(v128 - 3) = v134;
              v135 = *(v130 - 2);
              *(v130 - 2) = 0;
              *(v128 - 2) = v135;
              *((_DWORD *)v128 - 2) = *((_DWORD *)v130 - 2);
            }
            while ( v131 != v130 );
          }
          v136 = *((unsigned int *)v125 - 1);
          if ( (_DWORD)v136 )
          {
            v166 = &v125[6 * v136];
            do
            {
              while ( 1 )
              {
                v137 = v125[4];
                if ( v137 )
                  sub_186B220((void *)(v137 - 8));
                v138 = v125[3];
                if ( v138 )
                  sub_186B220((void *)(v138 - 8));
                v139 = v125[1];
                if ( v139 )
                {
                  v140 = v125[2];
                  v30 = (*(_DWORD *)(v139 + 8))-- == 1;
                  if ( v30 )
                    sub_15D7BC0(v140, v139);
                }
                v141 = *v125;
                if ( !*v125 )
                  break;
                v125 += 6;
                sub_186B220((void *)(v141 - 8));
                if ( v166 == v125 )
                  goto LABEL_167;
              }
              v125 += 6;
            }
            while ( v125 != v166 );
LABEL_167:
            v125 = *(_QWORD **)(a1 + 384);
          }
          sub_186B220(v125 - 1);
          result = (__int64)&v89[6 * (unsigned int)v155[1]];
        }
        else
        {
          *(_DWORD *)(v124 + 4) = 0;
          result = v124 + 8;
        }
        *(_QWORD *)(a1 + 384) = v89;
        *v155 = v149;
        v48 = v173;
      }
      else
      {
        result = (__int64)&v89[6 * v90];
      }
    }
    else
    {
      v143 = (_QWORD *)sub_186B270(0x68u);
      v89 = v143 + 1;
      *v143 = 2;
      v48 = v173;
      *(_QWORD *)(a1 + 384) = v143 + 1;
      result = (__int64)(v143 + 1);
    }
    *(_QWORD *)result = 0;
    *(_QWORD *)(result + 16) = v84;
    *(_QWORD *)(result + 8) = v169;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 32) = v157;
    *(_DWORD *)(result + 40) = v22;
    ++*((_DWORD *)v89 - 1);
  }
  if ( v48 )
    result = sub_186B220((void *)(v48 - 8));
  v49 = v174;
  if ( v174 )
  {
    v50 = v175;
    v30 = (*(_DWORD *)(v174 + 8))-- == 1;
    if ( v30 )
      return sub_15D7BC0(v50, v49);
  }
  return result;
}

