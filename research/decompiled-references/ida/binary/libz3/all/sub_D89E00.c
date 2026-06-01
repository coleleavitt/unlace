__int64 __fastcall sub_D89E00(__int64 a1, __int64 a2, __int64 a3)
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
  unsigned __int64 v20; // r13
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v23; // r14
  __int64 v24; // r14
  __int64 v25; // r15
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rcx
  int v29; // eax
  unsigned __int64 v30; // r12
  unsigned int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // ecx
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // r8d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 *v41; // r15
  __int64 v42; // r14
  unsigned int v43; // r8d
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
  unsigned int v54; // r8d
  __int64 *v55; // rcx
  __int64 v56; // rsi
  unsigned __int64 v57; // r15
  __int64 *j; // r14
  __int64 v59; // rsi
  __int64 v60; // r15
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 *v72; // r9
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rax
  _QWORD *v76; // rdi
  char v77; // al
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rdi
  _QWORD *v81; // rdx
  unsigned int v82; // r8d
  unsigned __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 v87; // rcx
  _QWORD *v88; // rsi
  int v89; // eax
  _QWORD *v90; // rdx
  unsigned int v91; // ecx
  unsigned __int64 v92; // r15
  __int64 *v93; // r14
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // r14
  _QWORD *v97; // rcx
  int v98; // eax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rdi
  __int64 v105; // rsi
  int v106; // ecx
  __int64 *v107; // rbx
  unsigned __int64 v108; // r15
  __int64 v109; // rsi
  __int64 *v110; // rbx
  unsigned __int64 v111; // r14
  __int64 v112; // rsi
  _QWORD *v113; // rax
  int v114; // r13d
  int v115; // r12d
  __int64 v116; // rcx
  int v117; // edx
  _QWORD *v118; // rcx
  _QWORD *v119; // rdx
  __int64 v120; // rax
  _DWORD *v121; // rax
  unsigned int v122; // edx
  unsigned int v123; // r15d
  size_t v124; // rsi
  unsigned int *v125; // rdx
  __int64 v126; // rcx
  unsigned int v127; // r15d
  size_t v128; // rsi
  unsigned int *v129; // rax
  _DWORD *v130; // rdx
  __int64 v131; // rax
  _QWORD *v132; // rax
  _QWORD *v133; // rax
  unsigned int v134; // r15d
  size_t v135; // rsi
  unsigned int *v136; // rax
  unsigned int v137; // r9d
  size_t v138; // rsi
  unsigned int *v139; // rax
  __int64 v140; // rsi
  _QWORD *v141; // rax
  __int64 v142; // rcx
  _QWORD *v143; // rax
  char **v144; // r14
  char **v145; // r14
  char **v146; // r14
  char **exception; // r14
  __int64 *v148; // [rsp+0h] [rbp-F0h]
  __int64 *v149; // [rsp+8h] [rbp-E8h]
  __int64 v150; // [rsp+10h] [rbp-E0h]
  __int64 v151; // [rsp+10h] [rbp-E0h]
  __int64 v152; // [rsp+18h] [rbp-D8h]
  __int64 v153; // [rsp+20h] [rbp-D0h]
  int v154; // [rsp+2Ch] [rbp-C4h]
  __int64 v155; // [rsp+30h] [rbp-C0h]
  __int64 v156; // [rsp+30h] [rbp-C0h]
  __int64 v157; // [rsp+30h] [rbp-C0h]
  unsigned int v158; // [rsp+30h] [rbp-C0h]
  unsigned int v159; // [rsp+38h] [rbp-B8h]
  unsigned int v160; // [rsp+38h] [rbp-B8h]
  __int64 *v161; // [rsp+38h] [rbp-B8h]
  unsigned int v162; // [rsp+38h] [rbp-B8h]
  __int64 *v163; // [rsp+38h] [rbp-B8h]
  unsigned int v164; // [rsp+40h] [rbp-B0h]
  _QWORD *v165; // [rsp+40h] [rbp-B0h]
  __int64 v166; // [rsp+40h] [rbp-B0h]
  unsigned int v168; // [rsp+50h] [rbp-A0h]
  __int64 v169; // [rsp+50h] [rbp-A0h]
  __int64 v170; // [rsp+50h] [rbp-A0h]
  __int64 v171; // [rsp+50h] [rbp-A0h]
  unsigned __int64 v172; // [rsp+50h] [rbp-A0h]
  int v173; // [rsp+50h] [rbp-A0h]
  unsigned int v174; // [rsp+50h] [rbp-A0h]
  __int64 v175; // [rsp+50h] [rbp-A0h]
  unsigned int v176; // [rsp+50h] [rbp-A0h]
  __int64 v177; // [rsp+50h] [rbp-A0h]
  __int64 *v178; // [rsp+50h] [rbp-A0h]
  char **v180; // [rsp+58h] [rbp-98h]
  __int64 v181; // [rsp+90h] [rbp-60h] BYREF
  __int64 v182; // [rsp+98h] [rbp-58h]
  __int64 v183[10]; // [rsp+A0h] [rbp-50h] BYREF

  v154 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v113 = *(_QWORD **)(a1 + 160);
  if ( v113 )
    v114 = *((_DWORD *)v113 - 1);
  else
    v114 = 0;
  if ( v154 )
  {
    v115 = 0;
    while ( 1 )
    {
      if ( v113 )
      {
        v122 = *((_DWORD *)v113 - 1);
        if ( v122 == *((_DWORD *)v113 - 2) )
        {
          v123 = (3 * v122 + 1) >> 1;
          v124 = 8 * v123 + 8;
          if ( 8 * v122 + 8 >= (unsigned int)v124 || v122 >= v123 )
          {
LABEL_218:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v183, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v183);
            sub_233E40((__int64)v183);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v125 = (unsigned int *)sub_186B300(v113 - 1, v124);
          v113 = v125 + 2;
          v126 = v125[1];
          *v125 = v123;
          *(_QWORD *)(a1 + 160) = v125 + 2;
          LODWORD(v125) = v126;
          v118 = &v113[v126];
          v117 = (_DWORD)v125 + 1;
        }
        else
        {
          v116 = v122;
          v117 = v122 + 1;
          v118 = &v113[v116];
        }
      }
      else
      {
        v133 = (_QWORD *)sub_186B270(0x18u);
        v117 = 1;
        *v133 = 2;
        v113 = v133 + 1;
        *(_QWORD *)(a1 + 160) = v113;
        v118 = v113;
      }
      *v118 = 0;
      *((_DWORD *)v113 - 1) = v117;
      v119 = *(_QWORD **)(a1 + 528);
      if ( !v119 )
        break;
      v120 = *((unsigned int *)v119 - 1);
      if ( (_DWORD)v120 != *((_DWORD *)v119 - 2) )
      {
        v121 = (_DWORD *)v119 + v120;
        goto LABEL_173;
      }
      v127 = (unsigned int)(3 * v120 + 1) >> 1;
      v128 = 4 * v127 + 8;
      if ( 4 * (int)v120 + 8 >= (unsigned int)v128 || (unsigned int)v120 >= v127 )
        goto LABEL_218;
      ++v115;
      v129 = (unsigned int *)sub_186B300(v119 - 1, v128);
      v130 = v129 + 2;
      *v129 = v127;
      v131 = v129[1];
      *(_QWORD *)(a1 + 528) = v130;
      v130[v131] = v114;
      ++*(v130 - 1);
      if ( v115 == v154 )
        goto LABEL_183;
LABEL_174:
      v113 = *(_QWORD **)(a1 + 160);
    }
    v132 = (_QWORD *)sub_186B270(0x10u);
    v119 = v132 + 1;
    *v132 = 2;
    *(_QWORD *)(a1 + 528) = v132 + 1;
    v121 = v132 + 1;
LABEL_173:
    ++v115;
    *v121 = v114;
    ++*((_DWORD *)v119 - 1);
    if ( v115 == v154 )
      goto LABEL_183;
    goto LABEL_174;
  }
LABEL_183:
  *(_DWORD *)(a1 + 128) += v154;
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
    result = sub_D87EA0(a1, v5, ((unsigned __int8)v6 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v11 = *(unsigned int *)(a2 + 20);
  v12 = *(_QWORD *)(a1 + 8);
  v149 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v164 = *(_DWORD *)(a2 + 72);
  v150 = *v149;
  v153 = v12;
  v168 = *(_DWORD *)(a2 + 76);
  v13 = 16 * v11;
  if ( v164 )
  {
    v14 = v13 + a2;
    v15 = *(_QWORD *)(v13 + a2 + 80);
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v16 = (_QWORD *)sub_186B270(0x18u);
    v17 = v16 + 1;
    *v16 = 2;
    v18 = 1;
    v19 = v164 + 2 * v11;
    v155 = v164;
    v20 = (unsigned __int64)v17;
    v21 = a2 + 8 * v19;
    while ( 1 )
    {
      v14 += 8;
      *v17 = v15;
      *(_DWORD *)(v20 - 4) = v18;
      if ( v14 == v21 )
        break;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 80);
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        v22 = *(_DWORD *)(v20 - 4);
        if ( v22 == *(_DWORD *)(v20 - 8) )
          break;
        v14 += 8;
        *(_QWORD *)(v20 + 8LL * v22) = v15;
        *(_DWORD *)(v20 - 4) = v22 + 1;
        if ( v14 == v21 )
          goto LABEL_21;
      }
      v33 = (3 * v22 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v34 || v22 >= v33 )
      {
        v145 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v183, "Overflow encountered when expanding vector");
        *v145 = (char *)off_1C63128;
        sub_2333C0(v145 + 1, v183);
        sub_233E40((__int64)v183);
        __cxa_throw(v145, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v159 = (3 * v22 + 1) >> 1;
      v35 = (unsigned int *)sub_186B300((void *)(v20 - 8), v34);
      v20 = (unsigned __int64)(v35 + 2);
      *v35 = v159;
      LODWORD(v35) = v35[1];
      v17 = (_QWORD *)(v20 + 8LL * (unsigned int)v35);
      v18 = (_DWORD)v35 + 1;
    }
LABEL_21:
    v23 = *(_QWORD *)(a1 + 8);
    v13 = 16LL * *(unsigned int *)(a2 + 20);
    v152 = v23;
    if ( !v168 )
    {
      v30 = 0;
      v148 = v149 + 1;
      goto LABEL_38;
    }
  }
  else
  {
    v20 = 0;
    v30 = 0;
    v152 = *(_QWORD *)(a1 + 8);
    if ( !v168 )
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
  v30 = (unsigned __int64)v27;
  while ( 1 )
  {
    *v27 = v25;
    ++v28;
    *(_DWORD *)(v30 - 4) = v29;
    if ( (unsigned int)v28 >= v168 )
      break;
    v25 = *(_QWORD *)(v24 + 8 * v28 + 80);
    if ( v25 )
      ++*(_DWORD *)(v25 + 8);
    v31 = *(_DWORD *)(v30 - 4);
    if ( v31 == *(_DWORD *)(v30 - 8) )
    {
      v36 = (3 * v31 + 1) >> 1;
      v37 = 8 * v36 + 8;
      if ( 8 * v31 + 8 >= (unsigned int)v37 || v31 >= v36 )
      {
        v146 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v183, "Overflow encountered when expanding vector");
        *v146 = (char *)off_1C63128;
        sub_2333C0(v146 + 1, v183);
        sub_233E40((__int64)v183);
        __cxa_throw(v146, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v156 = v28;
      v160 = (3 * v31 + 1) >> 1;
      v38 = (unsigned int *)sub_186B300((void *)(v30 - 8), v37);
      v39 = v38[1];
      v30 = (unsigned __int64)(v38 + 2);
      v28 = v156;
      *v38 = v160;
      LODWORD(v38) = v39;
      v27 = (_QWORD *)(v30 + 8 * v39);
      v29 = (_DWORD)v38 + 1;
    }
    else
    {
      v32 = v31;
      v29 = v31 + 1;
      v27 = (_QWORD *)(v30 + 8 * v32);
    }
  }
  v148 = v149 + 1;
  v40 = v164;
  v155 = v164;
  if ( v164 )
  {
    v23 = *(_QWORD *)(a1 + 8);
LABEL_38:
    v41 = v149;
    v164 = 0;
    v161 = &v149[v155];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v23, v41[1]) )
      {
        v42 = v41[1];
        v43 = v164 + 1;
        v44 = (__int64 *)(v20 + 8LL * v164);
        if ( v42 )
          ++*(_DWORD *)(v42 + 8);
        v45 = *v44;
        if ( *v44 )
        {
          v46 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v46 )
          {
            sub_15D7BC0(v153, v45);
            v44 = (__int64 *)(v20 + 8LL * v164);
            v43 = v164 + 1;
          }
        }
        ++v41;
        *v44 = v42;
        v164 = v43;
        if ( v41 == v161 )
        {
LABEL_48:
          if ( v20 )
          {
            v40 = v164;
            goto LABEL_50;
          }
LABEL_57:
          if ( v168 )
            goto LABEL_58;
          goto LABEL_67;
        }
      }
      else if ( ++v41 == v161 )
      {
        goto LABEL_48;
      }
      v23 = *(_QWORD *)(a1 + 8);
    }
  }
  v155 = 0;
  if ( v20 )
  {
LABEL_50:
    v47 = (__int64 *)(v20 + 8 * v40);
    for ( i = v20 + 8LL * *(unsigned int *)(v20 - 4); (unsigned __int64)v47 < i; ++v47 )
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
      sub_15D7BC0(v153, v49);
    }
LABEL_56:
    *(_DWORD *)(v20 - 4) = v164;
    goto LABEL_57;
  }
LABEL_58:
  v50 = v168;
  v168 = 0;
  v51 = &v148[v155];
  v52 = &v148[v155 + v50];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v51) )
    {
      if ( ++v51 == v52 )
        goto LABEL_67;
    }
    v53 = *v51;
    v54 = v168 + 1;
    v55 = (__int64 *)(v30 + 8LL * v168);
    if ( *v51 )
      ++*(_DWORD *)(v53 + 8);
    v56 = *v55;
    if ( *v55 )
    {
      v46 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v46 )
      {
        v158 = v168 + 1;
        v163 = (__int64 *)(v30 + 8LL * v168);
        v175 = v53;
        sub_15D7BC0(v152, v56);
        v54 = v158;
        v55 = v163;
        v53 = v175;
      }
    }
    ++v51;
    *v55 = v53;
    v168 = v54;
  }
  while ( v51 != v52 );
LABEL_67:
  if ( v30 )
  {
    v57 = v30 + 8LL * *(unsigned int *)(v30 - 4);
    for ( j = (__int64 *)(v30 + 8LL * v168); (unsigned __int64)j < v57; ++j )
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
      sub_15D7BC0(v152, v59);
    }
LABEL_74:
    *(_DWORD *)(v30 - 4) = v168;
  }
  v12 = *(_QWORD *)(a1 + 8);
LABEL_76:
  v60 = sub_15DBA30(v12, a2, v164, v20, v168, v30, v150);
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
      v72 = (__int64 *)(a1 + 480);
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
  v63 = *(_QWORD *)(a1 + 8);
  v64 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  if ( v64 )
  {
    ++*(_DWORD *)(v64 + 8);
    *(_QWORD *)(a1 + 496) = v64;
    v65 = sub_15DE700(v63);
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
        v169 = v65;
        sub_15D7BC0(v68, v67);
        v66 = v169;
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
    v69 = sub_15DE370(v63);
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
        v170 = v69;
        sub_15D7BC0(v71, v70);
        v69 = v170;
      }
    }
  }
  *(_QWORD *)(a1 + 496) = v69;
  v72 = (__int64 *)(a1 + 480);
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
      v178 = v72;
      sub_15D7BC0(v74, v73);
      v72 = v178;
    }
  }
  v181 = 0;
  v75 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 480) = v60;
  v76 = *(_QWORD **)(a1 + 144);
  v182 = v75;
  v77 = sub_D83440(v76, v60, v150, v20, v30, v72, &v181);
  v157 = v181;
  v151 = v182;
  if ( v77 )
  {
    v78 = sub_15E2470(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 496), v181);
    if ( v78 )
      ++*(_DWORD *)(v78 + 8);
    v79 = *(_QWORD *)(a1 + 496);
    if ( v79 )
    {
      v80 = *(_QWORD *)(a1 + 504);
      v46 = (*(_DWORD *)(v79 + 8))-- == 1;
      if ( v46 )
      {
        v171 = v78;
        sub_15D7BC0(v80, v79);
        v78 = v171;
      }
    }
    *(_QWORD *)(a1 + 496) = v78;
  }
  v81 = *(_QWORD **)(a1 + 88);
  if ( !v81 )
    goto LABEL_198;
  v82 = *(_DWORD *)(a3 + 12);
  v83 = (unsigned __int64)&v81[*((unsigned int *)v81 - 1)];
  v84 = &v81[v82];
  if ( (unsigned __int64)v84 >= v83 )
    goto LABEL_113;
  do
  {
    while ( 1 )
    {
      v85 = *v84;
      if ( *v84 )
      {
        v86 = *(_QWORD *)(a1 + 80);
        v46 = (*(_DWORD *)(v85 + 8))-- == 1;
        if ( v46 )
          break;
      }
      if ( (unsigned __int64)++v84 >= v83 )
        goto LABEL_112;
    }
    v162 = v82;
    v165 = v84;
    v172 = v83;
    sub_15D7BC0(v86, v85);
    v83 = v172;
    v82 = v162;
    v84 = v165 + 1;
  }
  while ( (unsigned __int64)(v165 + 1) < v172 );
LABEL_112:
  v81 = *(_QWORD **)(a1 + 88);
  if ( v81 )
  {
LABEL_113:
    *((_DWORD *)v81 - 1) = v82;
    v87 = *(_QWORD *)(a1 + 496);
    if ( v87 )
    {
      ++*(_DWORD *)(v87 + 8);
      v82 = *((_DWORD *)v81 - 1);
    }
    if ( *((_DWORD *)v81 - 2) == v82 )
    {
      v137 = (3 * v82 + 1) >> 1;
      v138 = 8 * v137 + 8;
      if ( 8 * v82 + 8 >= (unsigned int)v138 || v82 >= v137 )
      {
        v180 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v183, "Overflow encountered when expanding vector");
        *v180 = (char *)off_1C63128;
        sub_2333C0(v180 + 1, v183);
        sub_233E40((__int64)v183);
        __cxa_throw(v180, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v166 = v87;
      v176 = (3 * v82 + 1) >> 1;
      v139 = (unsigned int *)sub_186B300(v81 - 1, v138);
      v140 = v139[1];
      v81 = v139 + 2;
      *v139 = v176;
      LODWORD(v139) = v140;
      v88 = &v81[v140];
      *(_QWORD *)(a1 + 88) = v81;
      v89 = (_DWORD)v139 + 1;
      v87 = v166;
    }
    else
    {
      v88 = &v81[*((unsigned int *)v81 - 1)];
      v89 = *((_DWORD *)v81 - 1) + 1;
    }
  }
  else
  {
LABEL_198:
    v142 = *(_QWORD *)(a1 + 496);
    if ( v142 )
      ++*(_DWORD *)(v142 + 8);
    v177 = v142;
    v143 = (_QWORD *)sub_186B270(0x18u);
    v81 = v143 + 1;
    *v143 = 2;
    v87 = v177;
    v88 = v143 + 1;
    *(_QWORD *)(a1 + 88) = v143 + 1;
    v89 = 1;
  }
  *v88 = v87;
  *((_DWORD *)v81 - 1) = v89;
  if ( v157 )
  {
    v173 = *(_DWORD *)(v157 + 8);
    *(_DWORD *)(v157 + 8) = v173 - 1;
    if ( v173 == 1 )
      sub_15D7BC0(v151, v157);
  }
  if ( v60 )
  {
    v46 = (*(_DWORD *)(v60 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v12, v60);
  }
  v90 = *(_QWORD **)(a1 + 56);
  if ( !v90 )
    goto LABEL_195;
  v91 = *(_DWORD *)(a3 + 12);
  v92 = (unsigned __int64)&v90[*((unsigned int *)v90 - 1)];
  v93 = &v90[v91];
  if ( (unsigned __int64)v93 >= v92 )
    goto LABEL_131;
  do
  {
    while ( 1 )
    {
      v94 = *v93;
      if ( *v93 )
      {
        v95 = *(_QWORD *)(a1 + 48);
        v46 = (*(_DWORD *)(v94 + 8))-- == 1;
        if ( v46 )
          break;
      }
      if ( (unsigned __int64)++v93 >= v92 )
        goto LABEL_130;
    }
    v174 = v91;
    sub_15D7BC0(v95, v94);
    ++v93;
    v91 = v174;
  }
  while ( (unsigned __int64)v93 < v92 );
LABEL_130:
  v90 = *(_QWORD **)(a1 + 56);
  if ( v90 )
  {
LABEL_131:
    *((_DWORD *)v90 - 1) = v91;
    v96 = *(_QWORD *)(a1 + 480);
    if ( v96 )
    {
      ++*(_DWORD *)(v96 + 8);
      v91 = *((_DWORD *)v90 - 1);
    }
    if ( *((_DWORD *)v90 - 2) == v91 )
    {
      v134 = (3 * v91 + 1) >> 1;
      v135 = 8 * v134 + 8;
      if ( 8 * v91 + 8 >= (unsigned int)v135 || v91 >= v134 )
      {
        v144 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v183, "Overflow encountered when expanding vector");
        *v144 = (char *)off_1C63128;
        sub_2333C0(v144 + 1, v183);
        sub_233E40((__int64)v183);
        __cxa_throw(v144, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v136 = (unsigned int *)sub_186B300(v90 - 1, v135);
      v90 = v136 + 2;
      *v136 = v134;
      *(_QWORD *)(a1 + 56) = v136 + 2;
      LODWORD(v136) = v136[1];
      v97 = &v90[(unsigned int)v136];
      v98 = (_DWORD)v136 + 1;
    }
    else
    {
      v97 = &v90[*((unsigned int *)v90 - 1)];
      v98 = *((_DWORD *)v90 - 1) + 1;
    }
  }
  else
  {
LABEL_195:
    v96 = *(_QWORD *)(a1 + 480);
    if ( v96 )
      ++*(_DWORD *)(v96 + 8);
    v141 = (_QWORD *)sub_186B270(0x18u);
    v90 = v141 + 1;
    *v141 = 2;
    v97 = v141 + 1;
    *(_QWORD *)(a1 + 56) = v141 + 1;
    v98 = 1;
  }
  *v97 = v96;
  *((_DWORD *)v90 - 1) = v98;
  v99 = *(_QWORD *)(a1 + 160);
  if ( v99 )
    *(_DWORD *)(v99 - 4) -= v154;
  v100 = *(_QWORD *)(a1 + 528);
  if ( v100 )
    *(_DWORD *)(v100 - 4) -= v154;
  sub_15844D0(a1);
  v101 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, v101, *(_QWORD *)(a1 + 496));
    v101 = *(_QWORD *)(a1 + 480);
  }
  if ( v101 )
  {
    v102 = *(_QWORD *)(a1 + 488);
    v46 = (*(_DWORD *)(v101 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v102, v101);
  }
  v103 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v103 && (v104 = *(_QWORD *)(a1 + 504), v46 = *(_DWORD *)(v103 + 8) == 1, --*(_DWORD *)(v103 + 8), v46) )
  {
    sub_15D7BC0(v104, v103);
    v105 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v105 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v106 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v106 - 1;
  if ( a2 != v105 && v106 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v106 - 2) + 8) |= 2u;
  if ( v30 )
  {
    v107 = (__int64 *)v30;
    if ( v30 < v30 + 8LL * *(unsigned int *)(v30 - 4) )
    {
      v108 = v30 + 8LL * *(unsigned int *)(v30 - 4);
      do
      {
        while ( 1 )
        {
          v109 = *v107;
          if ( *v107 )
          {
            v46 = (*(_DWORD *)(v109 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( (unsigned __int64)++v107 >= v108 )
            goto LABEL_157;
        }
        ++v107;
        sub_15D7BC0(v152, v109);
      }
      while ( (unsigned __int64)v107 < v108 );
    }
LABEL_157:
    result = sub_186B220((void *)(v30 - 8));
  }
  if ( v20 )
  {
    v110 = (__int64 *)v20;
    if ( v20 < v20 + 8LL * *(unsigned int *)(v20 - 4) )
    {
      v111 = v20 + 8LL * *(unsigned int *)(v20 - 4);
      do
      {
        v112 = *v110;
        if ( *v110 )
        {
          v46 = (*(_DWORD *)(v112 + 8))-- == 1;
          if ( v46 )
            sub_15D7BC0(v153, v112);
        }
        ++v110;
      }
      while ( (unsigned __int64)v110 < v111 );
    }
    return sub_186B220((void *)(v20 - 8));
  }
  return result;
}

