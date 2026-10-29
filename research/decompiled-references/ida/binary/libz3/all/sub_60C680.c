__int64 __fastcall sub_60C680(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  __int64 v6; // rsi
  int v7; // edx
  __int64 result; // rax
  unsigned int v9; // eax
  unsigned int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r13
  __int64 v16; // r14
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // r15
  _DWORD *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // r14
  __int64 v24; // r14
  __int64 v25; // r15
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rcx
  int v29; // eax
  _QWORD *v30; // r13
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
  unsigned int v60; // r8d
  __int64 v61; // r15
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdi
  _QWORD *v75; // rdx
  unsigned int v76; // r8d
  unsigned __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rcx
  _QWORD *v82; // rsi
  int v83; // eax
  _QWORD *v84; // rdx
  unsigned int v85; // ecx
  unsigned __int64 v86; // r15
  __int64 *v87; // r14
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // r14
  _QWORD *v91; // rcx
  int v92; // eax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rdi
  __int64 v97; // rsi
  __int64 v98; // rdi
  __int64 v99; // rsi
  int v100; // ecx
  __int64 *v101; // rbx
  unsigned __int64 v102; // r14
  __int64 v103; // rsi
  __int64 *v104; // rbx
  __int64 v105; // rax
  unsigned __int64 v106; // r14
  __int64 v107; // rsi
  _QWORD *v108; // rax
  int v109; // r14d
  int v110; // r13d
  __int64 v111; // rcx
  int v112; // edx
  _QWORD *v113; // rcx
  _QWORD *v114; // rdx
  __int64 v115; // rax
  _DWORD *v116; // rax
  unsigned int v117; // edx
  unsigned int v118; // ecx
  size_t v119; // rsi
  unsigned int *v120; // rdx
  __int64 v121; // rcx
  unsigned int v122; // ecx
  size_t v123; // rsi
  unsigned int *v124; // rax
  _DWORD *v125; // rdx
  __int64 v126; // rax
  _QWORD *v127; // rax
  _QWORD *v128; // rax
  unsigned int v129; // r9d
  size_t v130; // rsi
  unsigned int *v131; // rax
  __int64 v132; // rsi
  unsigned int v133; // r15d
  size_t v134; // rsi
  unsigned int *v135; // rax
  __int64 v136; // rcx
  __int64 v137; // rcx
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  char **exception; // r14
  char **v141; // r14
  char **v142; // r14
  char **v143; // r12
  char **v144; // r14
  __int64 *v145; // [rsp+0h] [rbp-E0h]
  __int64 v146; // [rsp+8h] [rbp-D8h]
  __int64 *v147; // [rsp+10h] [rbp-D0h]
  __int64 v148; // [rsp+18h] [rbp-C8h]
  __int64 v149; // [rsp+20h] [rbp-C0h]
  int v150; // [rsp+2Ch] [rbp-B4h]
  __int64 v151; // [rsp+30h] [rbp-B0h]
  __int64 v152; // [rsp+30h] [rbp-B0h]
  unsigned int v153; // [rsp+30h] [rbp-B0h]
  unsigned int v154; // [rsp+38h] [rbp-A8h]
  unsigned int v155; // [rsp+38h] [rbp-A8h]
  __int64 *v156; // [rsp+38h] [rbp-A8h]
  unsigned int v157; // [rsp+38h] [rbp-A8h]
  __int64 *v158; // [rsp+38h] [rbp-A8h]
  unsigned int v160; // [rsp+48h] [rbp-98h]
  unsigned __int64 v161; // [rsp+48h] [rbp-98h]
  __int64 v162; // [rsp+48h] [rbp-98h]
  unsigned int v163; // [rsp+50h] [rbp-90h]
  __int64 v164; // [rsp+50h] [rbp-90h]
  _QWORD *v165; // [rsp+50h] [rbp-90h]
  unsigned int v166; // [rsp+50h] [rbp-90h]
  __int64 v167; // [rsp+50h] [rbp-90h]
  __int64 v168; // [rsp+50h] [rbp-90h]
  unsigned int v169; // [rsp+50h] [rbp-90h]
  __int64 v170; // [rsp+50h] [rbp-90h]
  unsigned __int64 v171; // [rsp+58h] [rbp-88h]
  unsigned int v172; // [rsp+58h] [rbp-88h]
  unsigned int v173; // [rsp+58h] [rbp-88h]
  __int64 v174[10]; // [rsp+90h] [rbp-50h] BYREF

  v150 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v108 = *(_QWORD **)(a1 + 160);
  if ( v108 )
    v109 = *((_DWORD *)v108 - 1);
  else
    v109 = 0;
  if ( v150 )
  {
    v110 = 0;
    while ( 1 )
    {
      if ( v108 )
      {
        v117 = *((_DWORD *)v108 - 1);
        if ( v117 == *((_DWORD *)v108 - 2) )
        {
          v118 = (3 * v117 + 1) >> 1;
          v119 = 8 * v118 + 8;
          v172 = v118;
          if ( 8 * v117 + 8 >= (unsigned int)v119 || v117 >= v118 )
          {
LABEL_200:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v174, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v174);
            sub_233E40((__int64)v174);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v120 = (unsigned int *)sub_186B300(v108 - 1, v119);
          v108 = v120 + 2;
          v121 = v120[1];
          *v120 = v172;
          *(_QWORD *)(a1 + 160) = v120 + 2;
          LODWORD(v120) = v121;
          v113 = &v108[v121];
          v112 = (_DWORD)v120 + 1;
        }
        else
        {
          v111 = v117;
          v112 = v117 + 1;
          v113 = &v108[v111];
        }
      }
      else
      {
        v127 = (_QWORD *)sub_186B270(0x18u);
        v112 = 1;
        *v127 = 2;
        v108 = v127 + 1;
        *(_QWORD *)(a1 + 160) = v108;
        v113 = v108;
      }
      *v113 = 0;
      *((_DWORD *)v108 - 1) = v112;
      v114 = *(_QWORD **)(a1 + 528);
      if ( !v114 )
        break;
      v115 = *((unsigned int *)v114 - 1);
      if ( (_DWORD)v115 != *((_DWORD *)v114 - 2) )
      {
        v116 = (_DWORD *)v114 + v115;
        goto LABEL_162;
      }
      v122 = (unsigned int)(3 * v115 + 1) >> 1;
      v123 = 4 * v122 + 8;
      v173 = v122;
      if ( 4 * (int)v115 + 8 >= (unsigned int)v123 || (unsigned int)v115 >= v122 )
        goto LABEL_200;
      ++v110;
      v124 = (unsigned int *)sub_186B300(v114 - 1, v123);
      v125 = v124 + 2;
      *v124 = v173;
      v126 = v124[1];
      *(_QWORD *)(a1 + 528) = v125;
      v125[v126] = v109;
      ++*(v125 - 1);
      if ( v110 == v150 )
        goto LABEL_172;
LABEL_163:
      v108 = *(_QWORD **)(a1 + 160);
    }
    v128 = (_QWORD *)sub_186B270(0x10u);
    v114 = v128 + 1;
    *v128 = 2;
    *(_QWORD *)(a1 + 528) = v128 + 1;
    v116 = v128 + 1;
LABEL_162:
    ++v110;
    *v116 = v109;
    ++*((_DWORD *)v114 - 1);
    if ( v110 == v150 )
      goto LABEL_172;
    goto LABEL_163;
  }
LABEL_172:
  *(_DWORD *)(a1 + 128) += v150;
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
    result = sub_60A620((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v12 = *(unsigned int *)(a2 + 20);
  v147 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v160 = *(_DWORD *)(a2 + 72);
  v13 = 16 * v12;
  v146 = *v147;
  v163 = *(_DWORD *)(a2 + 76);
  v149 = *(_QWORD *)(a1 + 8);
  v14 = v149;
  if ( v160 )
  {
    v15 = a2 + v13;
    v16 = *(_QWORD *)(v15 + 80);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = (_QWORD *)sub_186B270(0x18u);
    *v17 = 2;
    v151 = v160;
    v18 = v17 + 1;
    v19 = 1;
    v171 = (unsigned __int64)v18;
    v20 = a2 + 8 * (v160 + 2 * v12);
    v21 = v18;
    while ( 1 )
    {
      v15 += 8;
      *v18 = v16;
      *(v21 - 1) = v19;
      if ( v15 == v20 )
        break;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v15 + 80);
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v22 = *(_DWORD *)(v171 - 4);
        if ( v22 == *(_DWORD *)(v171 - 8) )
          break;
        v15 += 8;
        *(_QWORD *)(v171 + 8LL * v22) = v16;
        *(_DWORD *)(v171 - 4) = v22 + 1;
        if ( v15 == v20 )
          goto LABEL_21;
      }
      v33 = (3 * v22 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v34 || v22 >= v33 )
      {
        v144 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v174, "Overflow encountered when expanding vector");
        *v144 = (char *)off_1C63128;
        sub_2333C0(v144 + 1, v174);
        sub_233E40((__int64)v174);
        __cxa_throw(v144, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v154 = (3 * v22 + 1) >> 1;
      v35 = (unsigned int *)sub_186B300((void *)(v171 - 8), v34);
      v21 = v35 + 2;
      v171 = (unsigned __int64)(v35 + 2);
      *v35 = v154;
      LODWORD(v35) = v35[1];
      v18 = &v21[2 * (unsigned int)v35];
      v19 = (_DWORD)v35 + 1;
    }
LABEL_21:
    v23 = *(_QWORD *)(a1 + 8);
    v148 = v23;
    v13 = 16LL * *(unsigned int *)(a2 + 20);
    if ( !v163 )
    {
      v30 = nullptr;
      v145 = v147 + 1;
      v40 = v160;
      goto LABEL_38;
    }
  }
  else
  {
    v148 = *(_QWORD *)(a1 + 8);
    v171 = 0;
    if ( !v163 )
    {
      v60 = 0;
      v30 = nullptr;
      goto LABEL_75;
    }
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
    if ( (unsigned int)v28 >= v163 )
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
        v141 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v174, "Overflow encountered when expanding vector");
        *v141 = (char *)off_1C63128;
        sub_2333C0(v141 + 1, v174);
        sub_233E40((__int64)v174);
        __cxa_throw(v141, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v152 = v28;
      v155 = (3 * v31 + 1) >> 1;
      v38 = (unsigned int *)sub_186B300(v30 - 1, v37);
      v39 = v38[1];
      v30 = v38 + 2;
      v28 = v152;
      *v38 = v155;
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
  v145 = v147 + 1;
  v40 = v160;
  v151 = v160;
  if ( v160 )
  {
    v23 = *(_QWORD *)(a1 + 8);
LABEL_38:
    v41 = v147;
    v160 = 0;
    v156 = &v147[v40];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v23, v41[1]) )
      {
        v42 = v41[1];
        v43 = v160 + 1;
        v44 = (__int64 *)(v171 + 8LL * v160);
        if ( v42 )
          ++*(_DWORD *)(v42 + 8);
        v45 = *v44;
        if ( *v44 )
        {
          v46 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v46 )
          {
            sub_15D7BC0(v149, v45);
            v44 = (__int64 *)(v171 + 8LL * v160);
            v43 = v160 + 1;
          }
        }
        ++v41;
        *v44 = v42;
        v160 = v43;
        if ( v41 == v156 )
        {
LABEL_48:
          if ( v171 )
          {
            v40 = v160;
            goto LABEL_50;
          }
LABEL_57:
          if ( v163 )
            goto LABEL_58;
          goto LABEL_67;
        }
      }
      else if ( ++v41 == v156 )
      {
        goto LABEL_48;
      }
      v23 = *(_QWORD *)(a1 + 8);
    }
  }
  v151 = 0;
  if ( v171 )
  {
LABEL_50:
    v47 = (__int64 *)(v171 + 8 * v40);
    for ( i = v171 + 8LL * *(unsigned int *)(v171 - 4); (unsigned __int64)v47 < i; ++v47 )
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
      sub_15D7BC0(v149, v49);
    }
LABEL_56:
    *(_DWORD *)(v171 - 4) = v160;
    goto LABEL_57;
  }
LABEL_58:
  v50 = v163;
  v163 = 0;
  v51 = &v145[v151];
  v52 = &v145[v151 + v50];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v51) )
    {
      if ( ++v51 == v52 )
        goto LABEL_67;
    }
    v53 = *v51;
    v54 = v163 + 1;
    v55 = &v30[v163];
    if ( *v51 )
      ++*(_DWORD *)(v53 + 8);
    v56 = *v55;
    if ( *v55 )
    {
      v46 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v46 )
      {
        v153 = v163 + 1;
        v158 = &v30[v163];
        v167 = v53;
        sub_15D7BC0(v148, v56);
        v54 = v153;
        v55 = v158;
        v53 = v167;
      }
    }
    ++v51;
    *v55 = v53;
    v163 = v54;
  }
  while ( v51 != v52 );
LABEL_67:
  if ( v30 )
  {
    v57 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
    for ( j = &v30[v163]; (unsigned __int64)j < v57; ++j )
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
      sub_15D7BC0(v148, v59);
    }
LABEL_74:
    v14 = *(_QWORD *)(a1 + 8);
    *((_DWORD *)v30 - 1) = v163;
    v60 = v163;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8);
    v60 = v163;
  }
LABEL_75:
  v61 = sub_15DBA30(v14, a2, v160, v171, v60, (_DWORD)v30, v146);
  v62 = *(_QWORD *)(a1 + 496);
  v63 = *(_QWORD *)(a1 + 504);
  if ( v61 )
  {
    ++*(_DWORD *)(v61 + 8);
    if ( v62 )
    {
      v46 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v46 )
        sub_15D7BC0(v63, v62);
    }
    *(_QWORD *)(a1 + 496) = 0;
    if ( a2 == v61 )
      goto LABEL_93;
  }
  else
  {
    if ( v62 )
    {
      v46 = (*(_DWORD *)(v62 + 8))-- == 1;
      if ( v46 )
        sub_15D7BC0(v63, v62);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  v64 = *(_QWORD *)(a1 + 8);
  v65 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  if ( v65 )
  {
    ++*(_DWORD *)(v65 + 8);
    *(_QWORD *)(a1 + 496) = v65;
    v66 = sub_15DE700(v64);
    v67 = v66;
    if ( v66 )
      ++*(_DWORD *)(v66 + 8);
    v68 = *(_QWORD *)(a1 + 496);
    if ( v68 )
    {
      v69 = *(_QWORD *)(a1 + 504);
      v46 = (*(_DWORD *)(v68 + 8))-- == 1;
      if ( v46 )
      {
        v164 = v66;
        sub_15D7BC0(v69, v68);
        v67 = v164;
      }
    }
    *(_QWORD *)(a1 + 496) = v67;
    v70 = sub_15DE750(*(_QWORD *)(a1 + 8));
  }
  else
  {
    *(_QWORD *)(a1 + 496) = 0;
    v70 = sub_15DE370(v64);
  }
  if ( v70 )
    ++*(_DWORD *)(v70 + 8);
  v71 = *(_QWORD *)(a1 + 496);
  if ( v71 )
  {
    v72 = *(_QWORD *)(a1 + 504);
    v46 = (*(_DWORD *)(v71 + 8))-- == 1;
    if ( v46 )
    {
      v168 = v70;
      sub_15D7BC0(v72, v71);
      v70 = v168;
    }
  }
  *(_QWORD *)(a1 + 496) = v70;
  if ( v61 )
LABEL_93:
    ++*(_DWORD *)(v61 + 8);
  v73 = *(_QWORD *)(a1 + 480);
  if ( v73 )
  {
    v74 = *(_QWORD *)(a1 + 488);
    v46 = (*(_DWORD *)(v73 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v74, v73);
  }
  v75 = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v61;
  if ( !v75 )
    goto LABEL_184;
  v76 = *(_DWORD *)(a3 + 12);
  v77 = (unsigned __int64)&v75[*((unsigned int *)v75 - 1)];
  v78 = &v75[v76];
  if ( (unsigned __int64)v78 >= v77 )
    goto LABEL_105;
  do
  {
    while ( 1 )
    {
      v79 = *v78;
      if ( *v78 )
      {
        v80 = *(_QWORD *)(a1 + 80);
        v46 = (*(_DWORD *)(v79 + 8))-- == 1;
        if ( v46 )
          break;
      }
      if ( (unsigned __int64)++v78 >= v77 )
        goto LABEL_104;
    }
    v157 = v76;
    v161 = v77;
    v165 = v78;
    sub_15D7BC0(v80, v79);
    v77 = v161;
    v76 = v157;
    v78 = v165 + 1;
  }
  while ( (unsigned __int64)(v165 + 1) < v161 );
LABEL_104:
  v75 = *(_QWORD **)(a1 + 88);
  if ( v75 )
  {
LABEL_105:
    v81 = *(_QWORD *)(a1 + 496);
    *((_DWORD *)v75 - 1) = v76;
    if ( v81 )
    {
      ++*(_DWORD *)(v81 + 8);
      v76 = *((_DWORD *)v75 - 1);
    }
    if ( *((_DWORD *)v75 - 2) == v76 )
    {
      v129 = (3 * v76 + 1) >> 1;
      v130 = 8 * v129 + 8;
      if ( 8 * v76 + 8 >= (unsigned int)v130 || v76 >= v129 )
      {
        v143 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v174, "Overflow encountered when expanding vector");
        *v143 = (char *)off_1C63128;
        sub_2333C0(v143 + 1, v174);
        sub_233E40((__int64)v174);
        __cxa_throw(v143, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v162 = v81;
      v169 = (3 * v76 + 1) >> 1;
      v131 = (unsigned int *)sub_186B300(v75 - 1, v130);
      v132 = v131[1];
      v75 = v131 + 2;
      *(_QWORD *)(a1 + 88) = v131 + 2;
      v81 = v162;
      *v131 = v169;
      LODWORD(v131) = v132;
      v82 = &v75[v132];
      v83 = (_DWORD)v131 + 1;
    }
    else
    {
      v82 = &v75[*((unsigned int *)v75 - 1)];
      v83 = *((_DWORD *)v75 - 1) + 1;
    }
  }
  else
  {
LABEL_184:
    v137 = *(_QWORD *)(a1 + 496);
    if ( v137 )
      ++*(_DWORD *)(v137 + 8);
    v170 = v137;
    v138 = (_QWORD *)sub_186B270(0x18u);
    v75 = v138 + 1;
    *v138 = 2;
    v81 = v170;
    v83 = 1;
    *(_QWORD *)(a1 + 88) = v75;
    v82 = v75;
  }
  *v82 = v81;
  *((_DWORD *)v75 - 1) = v83;
  if ( v61 )
  {
    v46 = (*(_DWORD *)(v61 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v14, v61);
  }
  v84 = *(_QWORD **)(a1 + 56);
  if ( !v84 )
    goto LABEL_187;
  v85 = *(_DWORD *)(a3 + 12);
  v86 = (unsigned __int64)&v84[*((unsigned int *)v84 - 1)];
  v87 = &v84[v85];
  if ( (unsigned __int64)v87 >= v86 )
    goto LABEL_120;
  do
  {
    while ( 1 )
    {
      v88 = *v87;
      if ( *v87 )
      {
        v89 = *(_QWORD *)(a1 + 48);
        v46 = (*(_DWORD *)(v88 + 8))-- == 1;
        if ( v46 )
          break;
      }
      if ( (unsigned __int64)++v87 >= v86 )
        goto LABEL_119;
    }
    v166 = v85;
    sub_15D7BC0(v89, v88);
    ++v87;
    v85 = v166;
  }
  while ( (unsigned __int64)v87 < v86 );
LABEL_119:
  v84 = *(_QWORD **)(a1 + 56);
  if ( v84 )
  {
LABEL_120:
    v90 = *(_QWORD *)(a1 + 480);
    *((_DWORD *)v84 - 1) = v85;
    if ( v90 )
    {
      ++*(_DWORD *)(v90 + 8);
      v85 = *((_DWORD *)v84 - 1);
    }
    if ( *((_DWORD *)v84 - 2) == v85 )
    {
      v133 = (3 * v85 + 1) >> 1;
      v134 = 8 * v133 + 8;
      if ( 8 * v85 + 8 >= (unsigned int)v134 || v85 >= v133 )
      {
        v142 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v174, "Overflow encountered when expanding vector");
        *v142 = (char *)off_1C63128;
        sub_2333C0(v142 + 1, v174);
        sub_233E40((__int64)v174);
        __cxa_throw(v142, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v135 = (unsigned int *)sub_186B300(v84 - 1, v134);
      v136 = v135[1];
      v84 = v135 + 2;
      *v135 = v133;
      *(_QWORD *)(a1 + 56) = v135 + 2;
      LODWORD(v135) = v136;
      v91 = &v84[v136];
      v92 = (_DWORD)v135 + 1;
    }
    else
    {
      v91 = &v84[*((unsigned int *)v84 - 1)];
      v92 = *((_DWORD *)v84 - 1) + 1;
    }
  }
  else
  {
LABEL_187:
    v90 = *(_QWORD *)(a1 + 480);
    if ( v90 )
      ++*(_DWORD *)(v90 + 8);
    v139 = (_QWORD *)sub_186B270(0x18u);
    v84 = v139 + 1;
    *v139 = 2;
    v92 = 1;
    *(_QWORD *)(a1 + 56) = v84;
    v91 = v84;
  }
  *v91 = v90;
  *((_DWORD *)v84 - 1) = v92;
  v93 = *(_QWORD *)(a1 + 160);
  if ( v93 )
    *(_DWORD *)(v93 - 4) -= v150;
  v94 = *(_QWORD *)(a1 + 528);
  if ( v94 )
    *(_DWORD *)(v94 - 4) -= v150;
  sub_15844D0(a1);
  v95 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, v95, *(_QWORD *)(a1 + 496));
    v95 = *(_QWORD *)(a1 + 480);
  }
  if ( v95 )
  {
    v96 = *(_QWORD *)(a1 + 488);
    v46 = (*(_DWORD *)(v95 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v96, v95);
  }
  v97 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v97 && (v98 = *(_QWORD *)(a1 + 504), v46 = *(_DWORD *)(v97 + 8) == 1, --*(_DWORD *)(v97 + 8), v46) )
  {
    sub_15D7BC0(v98, v97);
    v99 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v99 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v100 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v100 - 1;
  if ( a2 != v99 && v100 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v100 - 2) + 8) |= 2u;
  if ( v30 )
  {
    v101 = v30;
    if ( v30 < &v30[*((unsigned int *)v30 - 1)] )
    {
      v102 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
      do
      {
        while ( 1 )
        {
          v103 = *v101;
          if ( *v101 )
          {
            v46 = (*(_DWORD *)(v103 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( (unsigned __int64)++v101 >= v102 )
            goto LABEL_146;
        }
        ++v101;
        sub_15D7BC0(v148, v103);
      }
      while ( (unsigned __int64)v101 < v102 );
    }
LABEL_146:
    result = sub_186B220(v30 - 1);
  }
  v104 = (__int64 *)v171;
  if ( v171 )
  {
    v105 = *(unsigned int *)(v171 - 4);
    if ( v171 < v171 + 8 * v105 )
    {
      v106 = v171 + 8 * v105;
      do
      {
        v107 = *v104;
        if ( *v104 )
        {
          v46 = (*(_DWORD *)(v107 + 8))-- == 1;
          if ( v46 )
            sub_15D7BC0(v149, v107);
        }
        ++v104;
      }
      while ( (unsigned __int64)v104 < v106 );
    }
    return sub_186B220((void *)(v171 - 8));
  }
  return result;
}

