__int64 __fastcall sub_7475D0(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r14
  char **v4; // r14
  char **v5; // r14
  char **v6; // r14
  char **exception; // r14
  unsigned int v9; // r12d
  __int64 v10; // rsi
  int v11; // edx
  __int64 result; // rax
  unsigned int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r12
  _QWORD *v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // rdx
  int v24; // eax
  _QWORD *v25; // r13
  unsigned int v26; // eax
  __int64 v27; // r14
  __int64 v28; // r14
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r15
  _QWORD *v34; // r12
  int v35; // eax
  unsigned int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // ecx
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // r9d
  size_t v43; // rsi
  unsigned int *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 *v47; // r15
  __int64 v48; // r14
  unsigned int v49; // r8d
  __int64 *v50; // rcx
  __int64 v51; // rsi
  bool v52; // zf
  __int64 *v53; // r14
  unsigned __int64 i; // r15
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 *v57; // r15
  __int64 *v58; // r14
  __int64 v59; // rax
  unsigned int v60; // r8d
  __int64 *v61; // rcx
  __int64 v62; // rsi
  unsigned __int64 v63; // r15
  __int64 *j; // r14
  __int64 v65; // rsi
  size_t v66; // r15
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 *v78; // rcx
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 *v81; // rdi
  char v82; // al
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdi
  _QWORD *v86; // rdx
  unsigned int v87; // r8d
  unsigned __int64 v88; // rcx
  _QWORD *v89; // rax
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rcx
  _QWORD *v93; // rsi
  int v94; // eax
  _QWORD *v95; // rdx
  unsigned int v96; // ecx
  unsigned __int64 v97; // r15
  __int64 *v98; // r14
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // r14
  _QWORD *v102; // rcx
  int v103; // eax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rdi
  __int64 v110; // rsi
  int v111; // ecx
  __int64 *v112; // rbx
  unsigned __int64 v113; // r15
  __int64 v114; // rsi
  __int64 *v115; // rbx
  unsigned __int64 v116; // r14
  __int64 v117; // rsi
  _QWORD *v118; // rax
  int v119; // r13d
  int v120; // r12d
  __int64 v121; // rcx
  int v122; // edx
  _QWORD *v123; // rcx
  _QWORD *v124; // rdx
  __int64 v125; // rax
  _DWORD *v126; // rax
  unsigned int v127; // edx
  unsigned int v128; // r15d
  size_t v129; // rsi
  unsigned int *v130; // rdx
  __int64 v131; // rcx
  unsigned int v132; // r15d
  size_t v133; // rsi
  unsigned int *v134; // rax
  _DWORD *v135; // rdx
  __int64 v136; // rax
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  unsigned int v139; // r9d
  size_t v140; // rsi
  unsigned int *v141; // rax
  __int64 v142; // rsi
  unsigned int v143; // r15d
  size_t v144; // rsi
  unsigned int *v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rcx
  _QWORD *v148; // rax
  __int64 *v149; // [rsp+0h] [rbp-E0h]
  __int64 *v150; // [rsp+8h] [rbp-D8h]
  __int64 v151; // [rsp+10h] [rbp-D0h]
  __int64 v152; // [rsp+10h] [rbp-D0h]
  __int64 v153; // [rsp+18h] [rbp-C8h]
  __int64 v154; // [rsp+20h] [rbp-C0h]
  int v155; // [rsp+2Ch] [rbp-B4h]
  __int64 v156; // [rsp+30h] [rbp-B0h]
  unsigned int v157; // [rsp+30h] [rbp-B0h]
  __int64 v158; // [rsp+30h] [rbp-B0h]
  unsigned int v159; // [rsp+30h] [rbp-B0h]
  __int64 v160; // [rsp+38h] [rbp-A8h]
  unsigned int v161; // [rsp+38h] [rbp-A8h]
  __int64 v162; // [rsp+38h] [rbp-A8h]
  __int64 *v163; // [rsp+38h] [rbp-A8h]
  unsigned int v164; // [rsp+38h] [rbp-A8h]
  __int64 *v165; // [rsp+38h] [rbp-A8h]
  unsigned int v166; // [rsp+40h] [rbp-A0h]
  _QWORD *v167; // [rsp+40h] [rbp-A0h]
  __int64 v168; // [rsp+40h] [rbp-A0h]
  unsigned int v170; // [rsp+50h] [rbp-90h]
  __int64 v171; // [rsp+50h] [rbp-90h]
  __int64 v172; // [rsp+50h] [rbp-90h]
  unsigned __int64 v173; // [rsp+50h] [rbp-90h]
  int v174; // [rsp+50h] [rbp-90h]
  unsigned int v175; // [rsp+50h] [rbp-90h]
  __int64 v176; // [rsp+50h] [rbp-90h]
  __int64 v177; // [rsp+50h] [rbp-90h]
  unsigned int v178; // [rsp+50h] [rbp-90h]
  __int64 v179; // [rsp+50h] [rbp-90h]
  __int64 *v180; // [rsp+50h] [rbp-90h]
  char **v181; // [rsp+58h] [rbp-88h]
  __int64 v183; // [rsp+80h] [rbp-60h] BYREF
  __int64 v184; // [rsp+88h] [rbp-58h]
  __int64 v185[10]; // [rsp+90h] [rbp-50h] BYREF

  v155 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v118 = *(_QWORD **)(a1 + 160);
  if ( v118 )
    v119 = *((_DWORD *)v118 - 1);
  else
    v119 = 0;
  if ( v155 )
  {
    v120 = 0;
    while ( 1 )
    {
      if ( v118 )
      {
        v127 = *((_DWORD *)v118 - 1);
        if ( v127 == *((_DWORD *)v118 - 2) )
        {
          v128 = (3 * v127 + 1) >> 1;
          v129 = 8 * v128 + 8;
          if ( 8 * v127 + 8 >= (unsigned int)v129 || v127 >= v128 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_743560(v185, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v185);
            sub_233E40((__int64)v185);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v130 = (unsigned int *)sub_186B300(v118 - 1, v129);
          v118 = v130 + 2;
          v131 = v130[1];
          *v130 = v128;
          *(_QWORD *)(a1 + 160) = v130 + 2;
          LODWORD(v130) = v131;
          v123 = &v118[v131];
          v122 = (_DWORD)v130 + 1;
        }
        else
        {
          v121 = v127;
          v122 = v127 + 1;
          v123 = &v118[v121];
        }
      }
      else
      {
        v138 = (_QWORD *)sub_186B270(0x18u);
        v122 = 1;
        *v138 = 2;
        v118 = v138 + 1;
        *(_QWORD *)(a1 + 160) = v118;
        v123 = v118;
      }
      *v123 = 0;
      *((_DWORD *)v118 - 1) = v122;
      v124 = *(_QWORD **)(a1 + 528);
      if ( !v124 )
        break;
      v125 = *((unsigned int *)v124 - 1);
      if ( (_DWORD)v125 != *((_DWORD *)v124 - 2) )
      {
        v126 = (_DWORD *)v124 + v125;
        goto LABEL_173;
      }
      v132 = (unsigned int)(3 * v125 + 1) >> 1;
      v133 = 4 * v132 + 8;
      if ( 4 * (int)v125 + 8 >= (unsigned int)v133 || (unsigned int)v125 >= v132 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(v185, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v185);
        sub_233E40((__int64)v185);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v120;
      v134 = (unsigned int *)sub_186B300(v124 - 1, v133);
      v135 = v134 + 2;
      *v134 = v132;
      v136 = v134[1];
      *(_QWORD *)(a1 + 528) = v135;
      v135[v136] = v119;
      ++*(v135 - 1);
      if ( v120 == v155 )
        goto LABEL_183;
LABEL_174:
      v118 = *(_QWORD **)(a1 + 160);
    }
    v137 = (_QWORD *)sub_186B270(0x10u);
    v124 = v137 + 1;
    *v137 = 2;
    *(_QWORD *)(a1 + 528) = v137 + 1;
    v126 = v137 + 1;
LABEL_173:
    ++v120;
    *v126 = v119;
    ++*((_DWORD *)v124 - 1);
    if ( v120 == v155 )
      goto LABEL_183;
    goto LABEL_174;
  }
LABEL_183:
  *(_DWORD *)(a1 + 128) += v155;
LABEL_2:
  v9 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v13 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v13 >= v9 )
      break;
    if ( v13 )
    {
      v14 = *(_DWORD *)(a2 + 72);
      v15 = v13 - 1;
      if ( v14 < v13 )
        v15 = (unsigned int)v15 - v14;
      v10 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + a2 + 8 * v15 + 80);
    }
    else
    {
      v10 = *(_QWORD *)(a2 + 24);
    }
    v11 = ((v13 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v11;
    result = sub_746BF0((_QWORD *)a1, v10, ((unsigned __int8)v11 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v16 = *(unsigned int *)(a2 + 20);
  v17 = *(_QWORD *)(a1 + 8);
  v150 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v166 = *(_DWORD *)(a2 + 72);
  v151 = *v150;
  v154 = v17;
  v170 = *(_DWORD *)(a2 + 76);
  v18 = 16 * v16;
  if ( v166 )
  {
    v19 = v18 + a2;
    v20 = *(_QWORD *)(v18 + a2 + 80);
    if ( v20 )
      ++*(_DWORD *)(v20 + 8);
    v21 = (_QWORD *)sub_186B270(0x18u);
    *v21 = 2;
    v156 = v166;
    v22 = a2 + 8 * (v166 + 2 * v16);
    v23 = v21 + 1;
    v24 = 1;
    v25 = v23;
    while ( 1 )
    {
      v19 += 8;
      *v23 = v20;
      *((_DWORD *)v25 - 1) = v24;
      if ( v19 == v22 )
        break;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v19 + 80);
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        v26 = *((_DWORD *)v25 - 1);
        if ( v26 == *((_DWORD *)v25 - 2) )
          break;
        v19 += 8;
        v25[v26] = v20;
        *((_DWORD *)v25 - 1) = v26 + 1;
        if ( v19 == v22 )
          goto LABEL_21;
      }
      v38 = (3 * v26 + 1) >> 1;
      v39 = 8 * v38 + 8;
      if ( 8 * v26 + 8 >= (unsigned int)v39 || v26 >= v38 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(v185, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v185);
        sub_233E40((__int64)v185);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v161 = (3 * v26 + 1) >> 1;
      v40 = (unsigned int *)sub_186B300(v25 - 1, v39);
      v41 = v40[1];
      v25 = v40 + 2;
      *v40 = v161;
      LODWORD(v40) = v41;
      v23 = &v25[v41];
      v24 = (_DWORD)v40 + 1;
    }
LABEL_21:
    v27 = *(_QWORD *)(a1 + 8);
    v18 = 16LL * *(unsigned int *)(a2 + 20);
    v153 = v27;
    if ( !v170 )
    {
      v34 = nullptr;
      v149 = v150 + 1;
      goto LABEL_38;
    }
  }
  else
  {
    v25 = nullptr;
    v34 = nullptr;
    v153 = *(_QWORD *)(a1 + 8);
    if ( !v170 )
      goto LABEL_76;
  }
  v28 = a2 + v18;
  v29 = *(_QWORD *)(a2 + v18 + 80);
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v160 = v29;
  v30 = (_QWORD *)sub_186B270(0x18u);
  v31 = v30 + 1;
  v32 = v160;
  *v30 = 2;
  v33 = 0;
  v34 = v30 + 1;
  v35 = 1;
  while ( 1 )
  {
    *v31 = v32;
    ++v33;
    *((_DWORD *)v34 - 1) = v35;
    if ( (unsigned int)v33 >= v170 )
      break;
    v32 = *(_QWORD *)(v28 + 8 * v33 + 80);
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    v36 = *((_DWORD *)v34 - 1);
    if ( v36 == *((_DWORD *)v34 - 2) )
    {
      v42 = (3 * v36 + 1) >> 1;
      v43 = 8 * v42 + 8;
      if ( 8 * v36 + 8 >= (unsigned int)v43 || v36 >= v42 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(v185, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v185);
        sub_233E40((__int64)v185);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v157 = (3 * v36 + 1) >> 1;
      v162 = v32;
      v44 = (unsigned int *)sub_186B300(v34 - 1, v43);
      v45 = v44[1];
      v34 = v44 + 2;
      v32 = v162;
      *v44 = v157;
      LODWORD(v44) = v45;
      v31 = &v34[v45];
      v35 = (_DWORD)v44 + 1;
    }
    else
    {
      v37 = v36;
      v35 = v36 + 1;
      v31 = &v34[v37];
    }
  }
  v149 = v150 + 1;
  v46 = v166;
  v156 = v166;
  if ( v166 )
  {
    v27 = *(_QWORD *)(a1 + 8);
LABEL_38:
    v47 = v150;
    v166 = 0;
    v163 = &v150[v156];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v27, v47[1]) )
      {
        v48 = v47[1];
        v49 = v166 + 1;
        v50 = &v25[v166];
        if ( v48 )
          ++*(_DWORD *)(v48 + 8);
        v51 = *v50;
        if ( *v50 )
        {
          v52 = (*(_DWORD *)(v51 + 8))-- == 1;
          if ( v52 )
          {
            sub_15D7BC0(v154, v51);
            v50 = &v25[v166];
            v49 = v166 + 1;
          }
        }
        ++v47;
        *v50 = v48;
        v166 = v49;
        if ( v47 == v163 )
        {
LABEL_48:
          if ( v25 )
          {
            v46 = v166;
            goto LABEL_50;
          }
LABEL_57:
          if ( v170 )
            goto LABEL_58;
          goto LABEL_67;
        }
      }
      else if ( ++v47 == v163 )
      {
        goto LABEL_48;
      }
      v27 = *(_QWORD *)(a1 + 8);
    }
  }
  v156 = 0;
  if ( v25 )
  {
LABEL_50:
    v53 = &v25[v46];
    for ( i = (unsigned __int64)&v25[*((unsigned int *)v25 - 1)]; (unsigned __int64)v53 < i; ++v53 )
    {
      while ( 1 )
      {
        v55 = *v53;
        if ( *v53 )
        {
          v52 = (*(_DWORD *)(v55 + 8))-- == 1;
          if ( v52 )
            break;
        }
        if ( (unsigned __int64)++v53 >= i )
          goto LABEL_56;
      }
      sub_15D7BC0(v154, v55);
    }
LABEL_56:
    *((_DWORD *)v25 - 1) = v166;
    goto LABEL_57;
  }
LABEL_58:
  v56 = v170;
  v170 = 0;
  v57 = &v149[v156];
  v58 = &v149[v156 + v56];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v57) )
    {
      if ( ++v57 == v58 )
        goto LABEL_67;
    }
    v59 = *v57;
    v60 = v170 + 1;
    v61 = &v34[v170];
    if ( *v57 )
      ++*(_DWORD *)(v59 + 8);
    v62 = *v61;
    if ( *v61 )
    {
      v52 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v52 )
      {
        v159 = v170 + 1;
        v165 = &v34[v170];
        v176 = v59;
        sub_15D7BC0(v153, v62);
        v60 = v159;
        v61 = v165;
        v59 = v176;
      }
    }
    ++v57;
    *v61 = v59;
    v170 = v60;
  }
  while ( v57 != v58 );
LABEL_67:
  if ( v34 )
  {
    v63 = (unsigned __int64)&v34[*((unsigned int *)v34 - 1)];
    for ( j = &v34[v170]; (unsigned __int64)j < v63; ++j )
    {
      while ( 1 )
      {
        v65 = *j;
        if ( *j )
        {
          v52 = (*(_DWORD *)(v65 + 8))-- == 1;
          if ( v52 )
            break;
        }
        if ( (unsigned __int64)++j >= v63 )
          goto LABEL_74;
      }
      sub_15D7BC0(v153, v65);
    }
LABEL_74:
    *((_DWORD *)v34 - 1) = v170;
  }
  v17 = *(_QWORD *)(a1 + 8);
LABEL_76:
  v66 = sub_15DBA30(v17, a2, v166, (_DWORD)v25, v170, (_DWORD)v34, v151);
  v67 = *(_QWORD *)(a1 + 504);
  v68 = *(_QWORD *)(a1 + 496);
  if ( v66 )
  {
    ++*(_DWORD *)(v66 + 8);
    if ( v68 )
    {
      v52 = (*(_DWORD *)(v68 + 8))-- == 1;
      if ( v52 )
        sub_15D7BC0(v67, v68);
    }
    *(_QWORD *)(a1 + 496) = 0;
    if ( a2 == v66 )
    {
      v78 = (__int64 *)(a1 + 480);
LABEL_94:
      ++*(_DWORD *)(v66 + 8);
      goto LABEL_95;
    }
  }
  else
  {
    if ( v68 )
    {
      v52 = (*(_DWORD *)(v68 + 8))-- == 1;
      if ( v52 )
        sub_15D7BC0(v67, v68);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  v69 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  v70 = *(_QWORD *)(a1 + 8);
  if ( v69 )
  {
    ++*(_DWORD *)(v69 + 8);
    *(_QWORD *)(a1 + 496) = v69;
    v71 = sub_15DE700(v70);
    v72 = v71;
    if ( v71 )
      ++*(_DWORD *)(v71 + 8);
    v73 = *(_QWORD *)(a1 + 496);
    if ( v73 )
    {
      v74 = *(_QWORD *)(a1 + 504);
      v52 = (*(_DWORD *)(v73 + 8))-- == 1;
      if ( v52 )
      {
        v171 = v71;
        sub_15D7BC0(v74, v73);
        v72 = v171;
      }
    }
    *(_QWORD *)(a1 + 496) = v72;
    v75 = sub_15DE750(*(_QWORD *)(a1 + 8));
  }
  else
  {
    *(_QWORD *)(a1 + 496) = 0;
    v75 = sub_15DE370(v70);
  }
  if ( v75 )
    ++*(_DWORD *)(v75 + 8);
  v76 = *(_QWORD *)(a1 + 496);
  if ( v76 )
  {
    v77 = *(_QWORD *)(a1 + 504);
    v52 = (*(_DWORD *)(v76 + 8))-- == 1;
    if ( v52 )
    {
      v177 = v75;
      sub_15D7BC0(v77, v76);
      v75 = v177;
    }
  }
  *(_QWORD *)(a1 + 496) = v75;
  v78 = (__int64 *)(a1 + 480);
  if ( v66 )
    goto LABEL_94;
LABEL_95:
  v79 = *(_QWORD *)(a1 + 480);
  if ( v79 )
  {
    v80 = *(_QWORD *)(a1 + 488);
    v52 = (*(_DWORD *)(v79 + 8))-- == 1;
    if ( v52 )
    {
      v180 = v78;
      sub_15D7BC0(v80, v79);
      v78 = v180;
    }
  }
  v183 = 0;
  *(_QWORD *)(a1 + 480) = v66;
  v81 = *(__int64 **)(a1 + 144);
  v184 = *(_QWORD *)(a1 + 8);
  v82 = sub_744F00(v81, v66, v151, v78, &v183);
  v158 = v183;
  v152 = v184;
  if ( v82 )
  {
    v83 = sub_15E2470(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 496), v183);
    if ( v83 )
      ++*(_DWORD *)(v83 + 8);
    v84 = *(_QWORD *)(a1 + 496);
    if ( v84 )
    {
      v85 = *(_QWORD *)(a1 + 504);
      v52 = (*(_DWORD *)(v84 + 8))-- == 1;
      if ( v52 )
      {
        v172 = v83;
        sub_15D7BC0(v85, v84);
        v83 = v172;
      }
    }
    *(_QWORD *)(a1 + 496) = v83;
  }
  v86 = *(_QWORD **)(a1 + 88);
  if ( !v86 )
    goto LABEL_198;
  v87 = *(_DWORD *)(a3 + 12);
  v88 = (unsigned __int64)&v86[*((unsigned int *)v86 - 1)];
  v89 = &v86[v87];
  if ( (unsigned __int64)v89 >= v88 )
    goto LABEL_113;
  do
  {
    while ( 1 )
    {
      v90 = *v89;
      if ( *v89 )
      {
        v91 = *(_QWORD *)(a1 + 80);
        v52 = (*(_DWORD *)(v90 + 8))-- == 1;
        if ( v52 )
          break;
      }
      if ( (unsigned __int64)++v89 >= v88 )
        goto LABEL_112;
    }
    v164 = v87;
    v167 = v89;
    v173 = v88;
    sub_15D7BC0(v91, v90);
    v88 = v173;
    v87 = v164;
    v89 = v167 + 1;
  }
  while ( (unsigned __int64)(v167 + 1) < v173 );
LABEL_112:
  v86 = *(_QWORD **)(a1 + 88);
  if ( v86 )
  {
LABEL_113:
    *((_DWORD *)v86 - 1) = v87;
    v92 = *(_QWORD *)(a1 + 496);
    if ( v92 )
    {
      ++*(_DWORD *)(v92 + 8);
      v87 = *((_DWORD *)v86 - 1);
    }
    if ( *((_DWORD *)v86 - 2) == v87 )
    {
      v139 = (3 * v87 + 1) >> 1;
      v140 = 8 * v139 + 8;
      if ( 8 * v87 + 8 >= (unsigned int)v140 || v87 >= v139 )
      {
        v181 = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(v185, "Overflow encountered when expanding vector");
        *v181 = (char *)off_1C63128;
        sub_2333C0(v181 + 1, v185);
        sub_233E40((__int64)v185);
        __cxa_throw(v181, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v168 = v92;
      v178 = (3 * v87 + 1) >> 1;
      v141 = (unsigned int *)sub_186B300(v86 - 1, v140);
      v142 = v141[1];
      v86 = v141 + 2;
      v92 = v168;
      *v141 = v178;
      LODWORD(v141) = v142;
      v93 = &v86[v142];
      *(_QWORD *)(a1 + 88) = v86;
      v94 = (_DWORD)v141 + 1;
    }
    else
    {
      v93 = &v86[*((unsigned int *)v86 - 1)];
      v94 = *((_DWORD *)v86 - 1) + 1;
    }
  }
  else
  {
LABEL_198:
    v147 = *(_QWORD *)(a1 + 496);
    if ( v147 )
      ++*(_DWORD *)(v147 + 8);
    v179 = v147;
    v148 = (_QWORD *)sub_186B270(0x18u);
    v86 = v148 + 1;
    *v148 = 2;
    v92 = v179;
    v93 = v148 + 1;
    *(_QWORD *)(a1 + 88) = v148 + 1;
    v94 = 1;
  }
  *v93 = v92;
  *((_DWORD *)v86 - 1) = v94;
  if ( v158 )
  {
    v174 = *(_DWORD *)(v158 + 8);
    *(_DWORD *)(v158 + 8) = v174 - 1;
    if ( v174 == 1 )
      sub_15D7BC0(v152, v158);
  }
  if ( v66 )
  {
    v52 = (*(_DWORD *)(v66 + 8))-- == 1;
    if ( v52 )
      sub_15D7BC0(v17, v66);
  }
  v95 = *(_QWORD **)(a1 + 56);
  if ( !v95 )
    goto LABEL_195;
  v96 = *(_DWORD *)(a3 + 12);
  v97 = (unsigned __int64)&v95[*((unsigned int *)v95 - 1)];
  v98 = &v95[v96];
  if ( (unsigned __int64)v98 >= v97 )
    goto LABEL_131;
  do
  {
    while ( 1 )
    {
      v99 = *v98;
      if ( *v98 )
      {
        v100 = *(_QWORD *)(a1 + 48);
        v52 = (*(_DWORD *)(v99 + 8))-- == 1;
        if ( v52 )
          break;
      }
      if ( (unsigned __int64)++v98 >= v97 )
        goto LABEL_130;
    }
    v175 = v96;
    sub_15D7BC0(v100, v99);
    ++v98;
    v96 = v175;
  }
  while ( (unsigned __int64)v98 < v97 );
LABEL_130:
  v95 = *(_QWORD **)(a1 + 56);
  if ( v95 )
  {
LABEL_131:
    *((_DWORD *)v95 - 1) = v96;
    v101 = *(_QWORD *)(a1 + 480);
    if ( v101 )
    {
      ++*(_DWORD *)(v101 + 8);
      v96 = *((_DWORD *)v95 - 1);
    }
    if ( *((_DWORD *)v95 - 2) == v96 )
    {
      v143 = (3 * v96 + 1) >> 1;
      v144 = 8 * v143 + 8;
      if ( 8 * v96 + 8 >= (unsigned int)v144 || v96 >= v143 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(v185, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v185);
        sub_233E40((__int64)v185);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v145 = (unsigned int *)sub_186B300(v95 - 1, v144);
      v95 = v145 + 2;
      *v145 = v143;
      *(_QWORD *)(a1 + 56) = v145 + 2;
      LODWORD(v145) = v145[1];
      v102 = &v95[(unsigned int)v145];
      v103 = (_DWORD)v145 + 1;
    }
    else
    {
      v102 = &v95[*((unsigned int *)v95 - 1)];
      v103 = *((_DWORD *)v95 - 1) + 1;
    }
  }
  else
  {
LABEL_195:
    v101 = *(_QWORD *)(a1 + 480);
    if ( v101 )
      ++*(_DWORD *)(v101 + 8);
    v146 = (_QWORD *)sub_186B270(0x18u);
    v95 = v146 + 1;
    *v146 = 2;
    v102 = v146 + 1;
    *(_QWORD *)(a1 + 56) = v146 + 1;
    v103 = 1;
  }
  *v102 = v101;
  *((_DWORD *)v95 - 1) = v103;
  v104 = *(_QWORD *)(a1 + 160);
  if ( v104 )
    *(_DWORD *)(v104 - 4) -= v155;
  v105 = *(_QWORD *)(a1 + 528);
  if ( v105 )
    *(_DWORD *)(v105 - 4) -= v155;
  sub_15844D0(a1);
  v106 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, v106, *(_QWORD *)(a1 + 496));
    v106 = *(_QWORD *)(a1 + 480);
  }
  if ( v106 )
  {
    v107 = *(_QWORD *)(a1 + 488);
    v52 = (*(_DWORD *)(v106 + 8))-- == 1;
    if ( v52 )
      sub_15D7BC0(v107, v106);
  }
  v108 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v108 && (v109 = *(_QWORD *)(a1 + 504), v52 = *(_DWORD *)(v108 + 8) == 1, --*(_DWORD *)(v108 + 8), v52) )
  {
    sub_15D7BC0(v109, v108);
    v110 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v110 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v111 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v111 - 1;
  if ( a2 != v110 && v111 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v111 - 2) + 8) |= 2u;
  if ( v34 )
  {
    v112 = v34;
    if ( v34 < &v34[*((unsigned int *)v34 - 1)] )
    {
      v113 = (unsigned __int64)&v34[*((unsigned int *)v34 - 1)];
      do
      {
        while ( 1 )
        {
          v114 = *v112;
          if ( *v112 )
          {
            v52 = (*(_DWORD *)(v114 + 8))-- == 1;
            if ( v52 )
              break;
          }
          if ( (unsigned __int64)++v112 >= v113 )
            goto LABEL_157;
        }
        ++v112;
        sub_15D7BC0(v153, v114);
      }
      while ( (unsigned __int64)v112 < v113 );
    }
LABEL_157:
    result = sub_186B220(v34 - 1);
  }
  if ( v25 )
  {
    v115 = v25;
    if ( v25 < &v25[*((unsigned int *)v25 - 1)] )
    {
      v116 = (unsigned __int64)&v25[*((unsigned int *)v25 - 1)];
      do
      {
        v117 = *v115;
        if ( *v115 )
        {
          v52 = (*(_DWORD *)(v117 + 8))-- == 1;
          if ( v52 )
            sub_15D7BC0(v154, v117);
        }
        ++v115;
      }
      while ( (unsigned __int64)v115 < v116 );
    }
    return sub_186B220(v25 - 1);
  }
  return result;
}

