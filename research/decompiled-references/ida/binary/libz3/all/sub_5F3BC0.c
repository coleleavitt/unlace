__int64 __fastcall sub_5F3BC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rsi
  int v6; // edx
  __int64 result; // rax
  unsigned int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r12
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  _QWORD *v20; // r13
  __int64 v21; // r15
  unsigned int v22; // eax
  void *v23; // r14
  __int64 v24; // r14
  __int64 v25; // r15
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rcx
  int v29; // eax
  _QWORD *v30; // r12
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // ecx
  size_t v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // r8d
  size_t v37; // rsi
  _DWORD *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 *v41; // r15
  __int64 v42; // r14
  int v43; // r8d
  __int64 *v44; // rcx
  __int64 v45; // rsi
  bool v46; // zf
  __int64 *v47; // r14
  unsigned __int64 i; // r15
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 *v51; // r15
  __int64 *v52; // r14
  __int64 v53; // rax
  int v54; // r8d
  __int64 *v55; // rcx
  __int64 v56; // rsi
  unsigned __int64 v57; // r15
  __int64 *j; // r14
  __int64 v59; // rsi
  __int64 v60; // r15
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdi
  int v72; // r9d
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // rdi
  _QWORD *v80; // rdx
  unsigned int v81; // r8d
  unsigned __int64 v82; // rcx
  _QWORD *v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rcx
  _QWORD *v87; // rsi
  int v88; // eax
  __int64 v89; // rsi
  __int64 v90; // rdi
  _QWORD *v91; // rdx
  unsigned int v92; // ecx
  unsigned __int64 v93; // r15
  __int64 *v94; // r14
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // r14
  _QWORD *v98; // rcx
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rdi
  __int64 v104; // rsi
  __int64 v105; // rdi
  __int64 v106; // rsi
  int v107; // ecx
  __int64 *v108; // rbx
  unsigned __int64 v109; // r15
  __int64 v110; // rsi
  __int64 *v111; // rbx
  unsigned __int64 v112; // r14
  __int64 v113; // rsi
  _QWORD *v114; // rax
  int v115; // r13d
  int v116; // r12d
  __int64 v117; // rcx
  int v118; // edx
  _QWORD *v119; // rcx
  _QWORD *v120; // rdx
  __int64 v121; // rax
  _DWORD *v122; // rax
  unsigned int v123; // edx
  unsigned int v124; // r15d
  size_t v125; // rsi
  unsigned int *v126; // rdx
  __int64 v127; // rcx
  unsigned int v128; // r15d
  size_t v129; // rsi
  unsigned int *v130; // rax
  _DWORD *v131; // rdx
  __int64 v132; // rax
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  unsigned int v135; // r9d
  size_t v136; // rsi
  unsigned int *v137; // rax
  __int64 v138; // rsi
  unsigned int v139; // r15d
  size_t v140; // rsi
  unsigned int *v141; // rax
  __int64 v142; // rcx
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  char **v145; // r14
  char **exception; // r14
  char **v147; // r14
  char **v148; // r14
  __int64 v149; // [rsp-8h] [rbp-F8h]
  __int64 *v150; // [rsp+0h] [rbp-F0h]
  __int64 *v151; // [rsp+8h] [rbp-E8h]
  __int64 v152; // [rsp+10h] [rbp-E0h]
  void *v153; // [rsp+18h] [rbp-D8h]
  __int64 v154; // [rsp+18h] [rbp-D8h]
  __int64 v155; // [rsp+20h] [rbp-D0h]
  __int64 v156; // [rsp+28h] [rbp-C8h]
  int v157; // [rsp+2Ch] [rbp-C4h]
  __int64 v158; // [rsp+30h] [rbp-C0h]
  __int64 v159; // [rsp+30h] [rbp-C0h]
  int v160; // [rsp+30h] [rbp-C0h]
  __int64 v161; // [rsp+38h] [rbp-B8h]
  unsigned int v162; // [rsp+38h] [rbp-B8h]
  __int64 v163; // [rsp+40h] [rbp-B0h]
  _QWORD *v164; // [rsp+40h] [rbp-B0h]
  __int64 v165; // [rsp+40h] [rbp-B0h]
  __int64 v167; // [rsp+48h] [rbp-A8h]
  __int64 v168; // [rsp+50h] [rbp-A0h]
  __int64 v169; // [rsp+50h] [rbp-A0h]
  unsigned __int64 v170; // [rsp+50h] [rbp-A0h]
  unsigned int v171; // [rsp+50h] [rbp-A0h]
  __int64 v172; // [rsp+50h] [rbp-A0h]
  unsigned int v173; // [rsp+50h] [rbp-A0h]
  __int64 v174; // [rsp+50h] [rbp-A0h]
  _QWORD *v176; // [rsp+58h] [rbp-98h]
  char **v177; // [rsp+58h] [rbp-98h]
  int v178; // [rsp+60h] [rbp-90h]
  int v179; // [rsp+68h] [rbp-88h]
  __int64 v180; // [rsp+70h] [rbp-80h]
  __int64 v181; // [rsp+78h] [rbp-78h]
  void *v182; // [rsp+80h] [rbp-70h]
  int v183; // [rsp+88h] [rbp-68h]
  __int64 v184; // [rsp+90h] [rbp-60h] BYREF
  __int64 v185; // [rsp+98h] [rbp-58h]
  __int64 v186[10]; // [rsp+A0h] [rbp-50h] BYREF

  HIDWORD(v156) = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v114 = *(_QWORD **)(a1 + 160);
  if ( v114 )
    v115 = *((_DWORD *)v114 - 1);
  else
    v115 = 0;
  if ( HIDWORD(v156) )
  {
    v116 = 0;
    while ( 1 )
    {
      if ( v114 )
      {
        v123 = *((_DWORD *)v114 - 1);
        if ( v123 == *((_DWORD *)v114 - 2) )
        {
          v124 = (3 * v123 + 1) >> 1;
          v125 = 8 * v124 + 8;
          if ( 8 * v123 + 8 >= (unsigned int)v125 || v123 >= v124 )
          {
LABEL_216:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v186, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v186);
            sub_233E40((__int64)v186);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v126 = (unsigned int *)sub_186B300(v114 - 1, v125);
          v114 = v126 + 2;
          v127 = v126[1];
          *v126 = v124;
          *(_QWORD *)(a1 + 160) = v126 + 2;
          LODWORD(v126) = v127;
          v119 = &v114[v127];
          v118 = (_DWORD)v126 + 1;
        }
        else
        {
          v117 = v123;
          v118 = v123 + 1;
          v119 = &v114[v117];
        }
      }
      else
      {
        v134 = (_QWORD *)sub_186B270(0x18u);
        v118 = 1;
        *v134 = 2;
        v114 = v134 + 1;
        *(_QWORD *)(a1 + 160) = v114;
        v119 = v114;
      }
      *v119 = 0;
      *((_DWORD *)v114 - 1) = v118;
      v120 = *(_QWORD **)(a1 + 528);
      if ( !v120 )
        break;
      v121 = *((unsigned int *)v120 - 1);
      if ( (_DWORD)v121 != *((_DWORD *)v120 - 2) )
      {
        v122 = (_DWORD *)v120 + v121;
        goto LABEL_173;
      }
      v128 = (unsigned int)(3 * v121 + 1) >> 1;
      v129 = 4 * v128 + 8;
      if ( 4 * (int)v121 + 8 >= (unsigned int)v129 || (unsigned int)v121 >= v128 )
        goto LABEL_216;
      ++v116;
      v130 = (unsigned int *)sub_186B300(v120 - 1, v129);
      v131 = v130 + 2;
      *v130 = v128;
      v132 = v130[1];
      *(_QWORD *)(a1 + 528) = v131;
      v131[v132] = v115;
      ++*(v131 - 1);
      if ( v116 == HIDWORD(v156) )
        goto LABEL_183;
LABEL_174:
      v114 = *(_QWORD **)(a1 + 160);
    }
    v133 = (_QWORD *)sub_186B270(0x10u);
    v120 = v133 + 1;
    *v133 = 2;
    *(_QWORD *)(a1 + 528) = v133 + 1;
    v122 = v133 + 1;
LABEL_173:
    ++v116;
    *v122 = v115;
    ++*((_DWORD *)v120 - 1);
    if ( v116 == HIDWORD(v156) )
      goto LABEL_183;
    goto LABEL_174;
  }
LABEL_183:
  *(_DWORD *)(a1 + 128) += HIDWORD(v156);
LABEL_2:
  v4 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v8 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v8 >= v4 )
      break;
    if ( v8 )
    {
      v9 = *(_DWORD *)(a2 + 72);
      v10 = v8 - 1;
      if ( v9 < v8 )
        v10 = (unsigned int)v10 - v9;
      v5 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + a2 + 8 * v10 + 80);
    }
    else
    {
      v5 = *(_QWORD *)(a2 + 24);
    }
    v6 = ((v8 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v6;
    result = sub_5F2580((_QWORD *)a1, v5, ((unsigned __int8)v6 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v11 = *(unsigned int *)(a2 + 20);
  v180 = *(_QWORD *)(a1 + 8);
  v12 = v180;
  v151 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  LODWORD(v163) = *(_DWORD *)(a2 + 72);
  v152 = *v151;
  LODWORD(v168) = *(_DWORD *)(a2 + 76);
  v13 = 16 * v11;
  if ( (_DWORD)v163 )
  {
    v14 = v13 + a2;
    v15 = *(_QWORD *)(v13 + a2 + 80);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v16 = (_QWORD *)sub_186B270(0x18u);
    v17 = v16 + 1;
    *v16 = 2;
    v18 = 1;
    v19 = (unsigned int)v163 + 2 * v11;
    v158 = (unsigned int)v163;
    v20 = v17;
    v21 = a2 + 8 * v19;
    while ( 1 )
    {
      v14 += 8;
      *v17 = v15;
      *((_DWORD *)v20 - 1) = v18;
      if ( v14 == v21 )
        break;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 80);
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        v22 = *((_DWORD *)v20 - 1);
        if ( v22 == *((_DWORD *)v20 - 2) )
          break;
        v14 += 8;
        v20[v22] = v15;
        *((_DWORD *)v20 - 1) = v22 + 1;
        if ( v14 == v21 )
          goto LABEL_21;
      }
      v33 = (3 * v22 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v34 || v22 >= v33 )
      {
        v147 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v186, "Overflow encountered when expanding vector");
        *v147 = (char *)off_1C63128;
        sub_2333C0(v147 + 1, v186);
        sub_233E40((__int64)v186);
        __cxa_throw(v147, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v161) = (3 * v22 + 1) >> 1;
      v35 = sub_186B300(v20 - 1, v34);
      v20 = (_QWORD *)(v35 + 8);
      *(_DWORD *)v35 = v161;
      LODWORD(v35) = *(_DWORD *)(v35 + 4);
      v17 = &v20[(unsigned int)v35];
      v18 = v35 + 1;
    }
LABEL_21:
    v23 = *(void **)(a1 + 8);
    v13 = 16LL * *(unsigned int *)(a2 + 20);
    v153 = v23;
    v182 = v23;
    if ( !(_DWORD)v168 )
    {
      v30 = nullptr;
      v150 = v151 + 1;
      goto LABEL_38;
    }
  }
  else
  {
    v182 = *(void **)(a1 + 8);
    v20 = nullptr;
    v30 = nullptr;
    v153 = v182;
    if ( !(_DWORD)v168 )
      goto LABEL_76;
  }
  v24 = a2 + v13;
  v25 = *(_QWORD *)(a2 + v13 + 80);
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v26 = (_QWORD *)sub_186B270(0x18u);
  v27 = v26 + 1;
  *v26 = 2;
  v28 = 0;
  v29 = 1;
  v30 = v27;
  while ( 1 )
  {
    *v27 = v25;
    ++v28;
    *((_DWORD *)v30 - 1) = v29;
    if ( (unsigned int)v28 >= (unsigned int)v168 )
      break;
    v25 = *(_QWORD *)(v24 + 8 * v28 + 80);
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    v31 = *((_DWORD *)v30 - 1);
    if ( v31 == *((_DWORD *)v30 - 2) )
    {
      v36 = (3 * v31 + 1) >> 1;
      v37 = 8 * v36 + 8;
      if ( 8 * v31 + 8 >= (unsigned int)v37 || v31 >= v36 )
      {
        v148 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v186, "Overflow encountered when expanding vector");
        *v148 = (char *)off_1C63128;
        sub_2333C0(v148 + 1, v186);
        sub_233E40((__int64)v186);
        __cxa_throw(v148, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v159 = v28;
      LODWORD(v161) = (3 * v31 + 1) >> 1;
      v38 = (_DWORD *)sub_186B300(v30 - 1, v37);
      v39 = (unsigned int)v38[1];
      v30 = v38 + 2;
      v28 = v159;
      *v38 = v161;
      LODWORD(v38) = v39;
      v27 = &v30[v39];
      v29 = (_DWORD)v38 + 1;
    }
    else
    {
      v32 = v31;
      v29 = v31 + 1;
      v27 = &v30[v32];
    }
  }
  v150 = v151 + 1;
  v40 = (unsigned int)v163;
  v158 = (unsigned int)v163;
  if ( (_DWORD)v163 )
  {
    v23 = *(void **)(a1 + 8);
LABEL_38:
    v41 = v151;
    LODWORD(v163) = 0;
    v161 = (__int64)&v151[v158];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v23, v41[1]) )
      {
        v42 = v41[1];
        v43 = v163 + 1;
        v44 = &v20[(unsigned int)v163];
        if ( v42 )
          ++*(_DWORD *)(v42 + 8);
        v45 = *v44;
        if ( *v44 )
        {
          v46 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v46 )
          {
            v151 = &v20[(unsigned int)v163];
            sub_15D7BC0(v180, v45);
            v44 = v151;
            v43 = v163 + 1;
          }
        }
        ++v41;
        *v44 = v42;
        LODWORD(v163) = v43;
        if ( v41 == (__int64 *)v161 )
        {
LABEL_48:
          if ( v20 )
          {
            v40 = (unsigned int)v163;
            goto LABEL_50;
          }
LABEL_57:
          if ( (_DWORD)v168 )
            goto LABEL_58;
          goto LABEL_67;
        }
      }
      else if ( ++v41 == (__int64 *)v161 )
      {
        goto LABEL_48;
      }
      v23 = *(void **)(a1 + 8);
    }
  }
  v158 = 0;
  if ( v20 )
  {
LABEL_50:
    v47 = &v20[v40];
    for ( i = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)]; (unsigned __int64)v47 < i; ++v47 )
    {
      while ( 1 )
      {
        v49 = *v47;
        if ( *v47 )
        {
          v46 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v46 )
            break;
        }
        if ( (unsigned __int64)++v47 >= i )
          goto LABEL_56;
      }
      sub_15D7BC0(v180, v49);
    }
LABEL_56:
    *((_DWORD *)v20 - 1) = v163;
    goto LABEL_57;
  }
LABEL_58:
  v50 = (unsigned int)v168;
  LODWORD(v168) = 0;
  v51 = &v150[v158];
  v52 = &v150[v158 + v50];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v51) )
    {
      if ( ++v51 == v52 )
        goto LABEL_67;
    }
    v53 = *v51;
    v54 = v168 + 1;
    v55 = &v30[(unsigned int)v168];
    if ( *v51 )
      ++*(_DWORD *)(v53 + 8);
    v56 = *v55;
    if ( *v55 )
    {
      v46 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v46 )
      {
        v160 = v168 + 1;
        v161 = (__int64)&v30[(unsigned int)v168];
        v172 = v53;
        sub_15D7BC0(v153, v56);
        v54 = v160;
        v55 = (__int64 *)v161;
        v53 = v172;
      }
    }
    ++v51;
    *v55 = v53;
    LODWORD(v168) = v54;
  }
  while ( v51 != v52 );
LABEL_67:
  if ( v30 )
  {
    v57 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
    for ( j = &v30[(unsigned int)v168]; (unsigned __int64)j < v57; ++j )
    {
      while ( 1 )
      {
        v59 = *j;
        if ( *j )
        {
          v46 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v46 )
            break;
        }
        if ( (unsigned __int64)++j >= v57 )
          goto LABEL_74;
      }
      sub_15D7BC0(v153, v59);
    }
LABEL_74:
    *((_DWORD *)v30 - 1) = v168;
  }
  v12 = *(_QWORD *)(a1 + 8);
LABEL_76:
  v60 = sub_15DBA30(v12, a2, v163, (_DWORD)v20, v168, (_DWORD)v30, v152);
  v61 = *(_QWORD *)(a1 + 496);
  v62 = *(_QWORD *)(a1 + 504);
  if ( v60 )
  {
    ++*(_DWORD *)(v60 + 8);
    if ( v61 )
    {
      v46 = (*(_DWORD *)(v61 + 8))-- == 1;
      if ( v46 )
        sub_15D7BC0(v62, v61);
    }
    *(_QWORD *)(a1 + 496) = 0;
    if ( a2 == v60 )
    {
      v72 = a1 + 480;
      goto LABEL_94;
    }
  }
  else
  {
    if ( v61 )
    {
      v46 = (*(_DWORD *)(v61 + 8))-- == 1;
      if ( v46 )
        sub_15D7BC0(v62, v61);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  v63 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  v64 = *(_QWORD *)(a1 + 8);
  if ( v63 )
  {
    ++*(_DWORD *)(v63 + 8);
    *(_QWORD *)(a1 + 496) = v63;
    v65 = sub_15DE700(v64);
    v66 = v65;
    if ( v65 )
      ++*(_DWORD *)(v65 + 8);
    v67 = *(_QWORD *)(a1 + 496);
    if ( v67 )
    {
      v68 = *(_QWORD *)(a1 + 504);
      v46 = (*(_DWORD *)(v67 + 8))-- == 1;
      if ( v46 )
      {
        v168 = v65;
        sub_15D7BC0(v68, v67);
        v66 = v168;
      }
    }
    *(_QWORD *)(a1 + 496) = v66;
    v69 = sub_15DE750(*(_QWORD *)(a1 + 8));
    if ( v69 )
      ++*(_DWORD *)(v69 + 8);
    v70 = *(_QWORD *)(a1 + 496);
    if ( v70 )
    {
      v71 = *(_QWORD *)(a1 + 504);
      goto LABEL_91;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 496) = 0;
    v69 = sub_15DE370(v64);
    if ( v69 )
      ++*(_DWORD *)(v69 + 8);
    v70 = *(_QWORD *)(a1 + 496);
    if ( v70 )
    {
      v71 = *(_QWORD *)(a1 + 504);
LABEL_91:
      v46 = (*(_DWORD *)(v70 + 8))-- == 1;
      if ( v46 )
      {
        v168 = v69;
        sub_15D7BC0(v71, v70);
        v69 = v168;
      }
    }
  }
  *(_QWORD *)(a1 + 496) = v69;
  v72 = a1 + 480;
  if ( v60 )
LABEL_94:
    ++*(_DWORD *)(v60 + 8);
  v73 = *(_QWORD *)(a1 + 480);
  if ( v73 )
  {
    v74 = *(_QWORD *)(a1 + 488);
    v46 = (*(_DWORD *)(v73 + 8))-- == 1;
    if ( v46 )
    {
      LODWORD(v168) = v72;
      sub_15D7BC0(v74, v73);
      v72 = v168;
    }
  }
  v184 = 0;
  v75 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 480) = v60;
  v76 = *(_QWORD *)(a1 + 144);
  v185 = v75;
  if ( (unsigned __int8)sub_DB79F0(
                          v76,
                          v60,
                          v152,
                          (int)v20,
                          (int)v30,
                          v72,
                          (__int64)&v184,
                          v149,
                          (char)v150,
                          (__int64)v151,
                          v152,
                          (int)v153,
                          v180,
                          v156,
                          (__int64)&v184,
                          v161,
                          v163,
                          a2,
                          v168,
                          a1,
                          v178,
                          v179,
                          v180,
                          v181,
                          v182,
                          v183) )
  {
    v77 = sub_15E2470(v176[1], v176[62], v184);
    if ( v77 )
      ++*(_DWORD *)(v77 + 8);
    v78 = v176[62];
    if ( v78 )
    {
      v79 = v176[63];
      v46 = (*(_DWORD *)(v78 + 8))-- == 1;
      if ( v46 )
      {
        v169 = v77;
        sub_15D7BC0(v79, v78);
        v77 = v169;
      }
    }
    v176[62] = v77;
  }
  v80 = (_QWORD *)v176[11];
  if ( !v80 )
    goto LABEL_199;
  v81 = *(_DWORD *)(a3 + 12);
  v82 = (unsigned __int64)&v80[*((unsigned int *)v80 - 1)];
  v83 = &v80[v81];
  if ( (unsigned __int64)v83 >= v82 )
    goto LABEL_113;
  do
  {
    while ( 1 )
    {
      v84 = *v83;
      if ( *v83 )
      {
        v85 = v176[10];
        v46 = (*(_DWORD *)(v84 + 8))-- == 1;
        if ( v46 )
          break;
      }
      if ( (unsigned __int64)++v83 >= v82 )
        goto LABEL_112;
    }
    v162 = v81;
    v164 = v83;
    v170 = v82;
    sub_15D7BC0(v85, v84);
    v82 = v170;
    v81 = v162;
    v83 = v164 + 1;
  }
  while ( (unsigned __int64)(v164 + 1) < v170 );
LABEL_112:
  v80 = (_QWORD *)v176[11];
  if ( v80 )
  {
LABEL_113:
    *((_DWORD *)v80 - 1) = v81;
    v86 = v176[62];
    if ( v86 )
    {
      ++*(_DWORD *)(v86 + 8);
      v81 = *((_DWORD *)v80 - 1);
    }
    if ( *((_DWORD *)v80 - 2) == v81 )
    {
      v135 = (3 * v81 + 1) >> 1;
      v136 = 8 * v135 + 8;
      if ( 8 * v81 + 8 >= (unsigned int)v136 || v81 >= v135 )
      {
        v177 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v186, "Overflow encountered when expanding vector");
        *v177 = (char *)off_1C63128;
        sub_2333C0(v177 + 1, v186);
        sub_233E40((__int64)v186);
        __cxa_throw(v177, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v165 = v86;
      v173 = (3 * v81 + 1) >> 1;
      v137 = (unsigned int *)sub_186B300(v80 - 1, v136);
      v138 = v137[1];
      v80 = v137 + 2;
      v86 = v165;
      *v137 = v173;
      LODWORD(v137) = v138;
      v87 = &v80[v138];
      v176[11] = v80;
      v88 = (_DWORD)v137 + 1;
    }
    else
    {
      v87 = &v80[*((unsigned int *)v80 - 1)];
      v88 = *((_DWORD *)v80 - 1) + 1;
    }
  }
  else
  {
LABEL_199:
    v142 = v176[62];
    if ( v142 )
      ++*(_DWORD *)(v142 + 8);
    v174 = v142;
    v143 = (_QWORD *)sub_186B270(0x18u);
    v80 = v143 + 1;
    *v143 = 2;
    v86 = v174;
    v87 = v143 + 1;
    v176[11] = v143 + 1;
    v88 = 1;
  }
  *v87 = v86;
  v89 = v184;
  *((_DWORD *)v80 - 1) = v88;
  if ( v89 )
  {
    v90 = v185;
    v46 = (*(_DWORD *)(v89 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v90, v89);
  }
  if ( v60 )
  {
    v46 = (*(_DWORD *)(v60 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v12, v60);
  }
  v91 = (_QWORD *)v176[7];
  if ( !v91 )
    goto LABEL_202;
  v92 = *(_DWORD *)(a3 + 12);
  v93 = (unsigned __int64)&v91[*((unsigned int *)v91 - 1)];
  v94 = &v91[v92];
  if ( (unsigned __int64)v94 >= v93 )
    goto LABEL_131;
  do
  {
    while ( 1 )
    {
      v95 = *v94;
      if ( *v94 )
      {
        v96 = v176[6];
        v46 = (*(_DWORD *)(v95 + 8))-- == 1;
        if ( v46 )
          break;
      }
      if ( (unsigned __int64)++v94 >= v93 )
        goto LABEL_130;
    }
    v171 = v92;
    sub_15D7BC0(v96, v95);
    ++v94;
    v92 = v171;
  }
  while ( (unsigned __int64)v94 < v93 );
LABEL_130:
  v91 = (_QWORD *)v176[7];
  if ( v91 )
  {
LABEL_131:
    *((_DWORD *)v91 - 1) = v92;
    v97 = v176[60];
    if ( v97 )
    {
      ++*(_DWORD *)(v97 + 8);
      v92 = *((_DWORD *)v91 - 1);
    }
    if ( *((_DWORD *)v91 - 2) == v92 )
    {
      v139 = (3 * v92 + 1) >> 1;
      v140 = 8 * v139 + 8;
      if ( 8 * v92 + 8 >= (unsigned int)v140 || v92 >= v139 )
      {
        v145 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v186, "Overflow encountered when expanding vector");
        *v145 = (char *)off_1C63128;
        sub_2333C0(v145 + 1, v186);
        sub_233E40((__int64)v186);
        __cxa_throw(v145, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v141 = (unsigned int *)sub_186B300(v91 - 1, v140);
      v91 = v141 + 2;
      *v141 = v139;
      v176[7] = v141 + 2;
      LODWORD(v141) = v141[1];
      v98 = &v91[(unsigned int)v141];
      v99 = (_DWORD)v141 + 1;
    }
    else
    {
      v98 = &v91[*((unsigned int *)v91 - 1)];
      v99 = *((_DWORD *)v91 - 1) + 1;
    }
  }
  else
  {
LABEL_202:
    v97 = v176[60];
    if ( v97 )
      ++*(_DWORD *)(v97 + 8);
    v144 = (_QWORD *)sub_186B270(0x18u);
    v91 = v144 + 1;
    *v144 = 2;
    v98 = v144 + 1;
    v176[7] = v144 + 1;
    v99 = 1;
  }
  *v98 = v97;
  *((_DWORD *)v91 - 1) = v99;
  v100 = v176[20];
  if ( v100 )
    *(_DWORD *)(v100 - 4) -= v157;
  v101 = v176[66];
  if ( v101 )
    *(_DWORD *)(v101 - 4) -= v157;
  sub_15844D0(v176);
  v102 = v176[60];
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(v176, v167, v102, v176[62]);
    v102 = v176[60];
  }
  if ( v102 )
  {
    v103 = v176[61];
    v46 = (*(_DWORD *)(v102 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v103, v102);
  }
  v104 = v176[62];
  v176[60] = 0;
  if ( v104 && (v105 = v176[63], v46 = *(_DWORD *)(v104 + 8) == 1, --*(_DWORD *)(v104 + 8), v46) )
  {
    sub_15D7BC0(v105, v104);
    v106 = v176[60];
  }
  else
  {
    v106 = 0;
  }
  v176[62] = 0;
  result = v176[5];
  v107 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v107 - 1;
  if ( v167 != v106 && v107 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v107 - 2) + 8) |= 2u;
  if ( v30 )
  {
    v108 = v30;
    if ( v30 < &v30[*((unsigned int *)v30 - 1)] )
    {
      v109 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
      do
      {
        while ( 1 )
        {
          v110 = *v108;
          if ( *v108 )
          {
            v46 = (*(_DWORD *)(v110 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( (unsigned __int64)++v108 >= v109 )
            goto LABEL_157;
        }
        ++v108;
        sub_15D7BC0(v154, v110);
      }
      while ( (unsigned __int64)v108 < v109 );
    }
LABEL_157:
    result = sub_186B220(v30 - 1);
  }
  if ( v20 )
  {
    v111 = v20;
    if ( v20 < &v20[*((unsigned int *)v20 - 1)] )
    {
      v112 = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)];
      do
      {
        v113 = *v111;
        if ( *v111 )
        {
          v46 = (*(_DWORD *)(v113 + 8))-- == 1;
          if ( v46 )
            sub_15D7BC0(v155, v113);
        }
        ++v111;
      }
      while ( (unsigned __int64)v111 < v112 );
    }
    return sub_186B220(v20 - 1);
  }
  return result;
}

