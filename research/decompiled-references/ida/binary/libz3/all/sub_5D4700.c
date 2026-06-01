__int64 __fastcall sub_5D4700(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v62; // rdi
  __int64 v63; // rsi
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
  __int64 v84; // rax
  unsigned __int64 v85; // r14
  __int64 *v86; // r15
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rdi
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // rsi
  int v97; // ecx
  __int64 *v98; // rbx
  unsigned __int64 v99; // r15
  __int64 v100; // rsi
  __int64 *v101; // rbx
  __int64 v102; // rax
  unsigned __int64 v103; // r15
  __int64 v104; // rsi
  _QWORD *v105; // rax
  int v106; // r14d
  int v107; // r13d
  __int64 v108; // rcx
  int v109; // edx
  _QWORD *v110; // rcx
  _QWORD *v111; // rdx
  __int64 v112; // rax
  _DWORD *v113; // rax
  unsigned int v114; // edx
  unsigned int v115; // ecx
  size_t v116; // rsi
  unsigned int *v117; // rdx
  __int64 v118; // rcx
  unsigned int v119; // ecx
  size_t v120; // rsi
  unsigned int *v121; // rax
  _DWORD *v122; // rdx
  __int64 v123; // rax
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  unsigned int v126; // r9d
  size_t v127; // rsi
  unsigned int *v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rcx
  _QWORD *v131; // rax
  __int64 v132; // rax
  char **v133; // r12
  char **exception; // r15
  char **v135; // r15
  char **v136; // r15
  __int64 *v137; // [rsp+0h] [rbp-E0h]
  __int64 v138; // [rsp+8h] [rbp-D8h]
  __int64 *v139; // [rsp+10h] [rbp-D0h]
  __int64 v140; // [rsp+18h] [rbp-C8h]
  __int64 v141; // [rsp+20h] [rbp-C0h]
  int v142; // [rsp+2Ch] [rbp-B4h]
  __int64 v143; // [rsp+30h] [rbp-B0h]
  __int64 v144; // [rsp+30h] [rbp-B0h]
  unsigned int v145; // [rsp+30h] [rbp-B0h]
  unsigned int v146; // [rsp+38h] [rbp-A8h]
  unsigned int v147; // [rsp+38h] [rbp-A8h]
  __int64 *v148; // [rsp+38h] [rbp-A8h]
  unsigned int v149; // [rsp+38h] [rbp-A8h]
  __int64 *v150; // [rsp+38h] [rbp-A8h]
  unsigned int v152; // [rsp+48h] [rbp-98h]
  unsigned __int64 v153; // [rsp+48h] [rbp-98h]
  unsigned int v154; // [rsp+48h] [rbp-98h]
  unsigned int v155; // [rsp+50h] [rbp-90h]
  __int64 v156; // [rsp+50h] [rbp-90h]
  __int64 v157; // [rsp+50h] [rbp-90h]
  _QWORD *v158; // [rsp+50h] [rbp-90h]
  int v159; // [rsp+50h] [rbp-90h]
  __int64 v160; // [rsp+50h] [rbp-90h]
  __int64 v161; // [rsp+50h] [rbp-90h]
  __int64 v162; // [rsp+50h] [rbp-90h]
  unsigned __int64 v163; // [rsp+58h] [rbp-88h]
  unsigned int v164; // [rsp+58h] [rbp-88h]
  unsigned int v165; // [rsp+58h] [rbp-88h]
  __int64 v166[10]; // [rsp+90h] [rbp-50h] BYREF

  v142 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v105 = *(_QWORD **)(a1 + 160);
  if ( v105 )
    v106 = *((_DWORD *)v105 - 1);
  else
    v106 = 0;
  if ( v142 )
  {
    v107 = 0;
    while ( 1 )
    {
      if ( v105 )
      {
        v114 = *((_DWORD *)v105 - 1);
        if ( v114 == *((_DWORD *)v105 - 2) )
        {
          v115 = (3 * v114 + 1) >> 1;
          v116 = 8 * v115 + 8;
          v164 = v115;
          if ( 8 * v114 + 8 >= (unsigned int)v116 || v114 >= v115 )
          {
LABEL_196:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v166, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v166);
            sub_233E40((__int64)v166);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v117 = (unsigned int *)sub_186B300(v105 - 1, v116);
          v105 = v117 + 2;
          v118 = v117[1];
          *v117 = v164;
          *(_QWORD *)(a1 + 160) = v117 + 2;
          LODWORD(v117) = v118;
          v110 = &v105[v118];
          v109 = (_DWORD)v117 + 1;
        }
        else
        {
          v108 = v114;
          v109 = v114 + 1;
          v110 = &v105[v108];
        }
      }
      else
      {
        v124 = (_QWORD *)sub_186B270(0x18u);
        v109 = 1;
        *v124 = 2;
        v105 = v124 + 1;
        *(_QWORD *)(a1 + 160) = v105;
        v110 = v105;
      }
      *v110 = 0;
      *((_DWORD *)v105 - 1) = v109;
      v111 = *(_QWORD **)(a1 + 528);
      if ( !v111 )
        break;
      v112 = *((unsigned int *)v111 - 1);
      if ( (_DWORD)v112 != *((_DWORD *)v111 - 2) )
      {
        v113 = (_DWORD *)v111 + v112;
        goto LABEL_161;
      }
      v119 = (unsigned int)(3 * v112 + 1) >> 1;
      v120 = 4 * v119 + 8;
      v165 = v119;
      if ( 4 * (int)v112 + 8 >= (unsigned int)v120 || (unsigned int)v112 >= v119 )
        goto LABEL_196;
      ++v107;
      v121 = (unsigned int *)sub_186B300(v111 - 1, v120);
      v122 = v121 + 2;
      *v121 = v165;
      v123 = v121[1];
      *(_QWORD *)(a1 + 528) = v122;
      v122[v123] = v106;
      ++*(v122 - 1);
      if ( v107 == v142 )
        goto LABEL_171;
LABEL_162:
      v105 = *(_QWORD **)(a1 + 160);
    }
    v125 = (_QWORD *)sub_186B270(0x10u);
    v111 = v125 + 1;
    *v125 = 2;
    *(_QWORD *)(a1 + 528) = v125 + 1;
    v113 = v125 + 1;
LABEL_161:
    ++v107;
    *v113 = v106;
    ++*((_DWORD *)v111 - 1);
    if ( v107 == v142 )
      goto LABEL_171;
    goto LABEL_162;
  }
LABEL_171:
  *(_DWORD *)(a1 + 128) += v142;
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
    result = sub_5D4270((_QWORD *)a1, v6, ((unsigned __int8)v7 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v12 = *(unsigned int *)(a2 + 20);
  v139 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v152 = *(_DWORD *)(a2 + 72);
  v13 = 16 * v12;
  v138 = *v139;
  v155 = *(_DWORD *)(a2 + 76);
  v141 = *(_QWORD *)(a1 + 8);
  v14 = v141;
  if ( v152 )
  {
    v15 = a2 + v13;
    v16 = *(_QWORD *)(v15 + 80);
    if ( v16 )
      ++*(_DWORD *)(v16 + 8);
    v17 = (_QWORD *)sub_186B270(0x18u);
    *v17 = 2;
    v143 = v152;
    v18 = v17 + 1;
    v19 = 1;
    v163 = (unsigned __int64)v18;
    v20 = a2 + 8 * (v152 + 2 * v12);
    v21 = v18;
    while ( 1 )
    {
      v15 += 8;
      *v18 = v16;
      *(v21 - 1) = v19;
      if ( v20 == v15 )
        break;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v15 + 80);
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        v22 = *(_DWORD *)(v163 - 4);
        if ( v22 == *(_DWORD *)(v163 - 8) )
          break;
        v15 += 8;
        *(_QWORD *)(v163 + 8LL * v22) = v16;
        *(_DWORD *)(v163 - 4) = v22 + 1;
        if ( v20 == v15 )
          goto LABEL_21;
      }
      v33 = (3 * v22 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v22 + 8 >= (unsigned int)v34 || v22 >= v33 )
      {
        v135 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v166, "Overflow encountered when expanding vector");
        *v135 = (char *)off_1C63128;
        sub_2333C0(v135 + 1, v166);
        sub_233E40((__int64)v166);
        __cxa_throw(v135, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v146 = (3 * v22 + 1) >> 1;
      v35 = (unsigned int *)sub_186B300((void *)(v163 - 8), v34);
      v21 = v35 + 2;
      v163 = (unsigned __int64)(v35 + 2);
      *v35 = v146;
      LODWORD(v35) = v35[1];
      v18 = &v21[2 * (unsigned int)v35];
      v19 = (_DWORD)v35 + 1;
    }
LABEL_21:
    v23 = *(_QWORD *)(a1 + 8);
    v140 = v23;
    v13 = 16LL * *(unsigned int *)(a2 + 20);
    if ( !v155 )
    {
      v30 = nullptr;
      v137 = v139 + 1;
      v40 = v152;
      goto LABEL_38;
    }
  }
  else
  {
    v140 = *(_QWORD *)(a1 + 8);
    v163 = 0;
    if ( !v155 )
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
    if ( (unsigned int)v28 >= v155 )
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
        v136 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v166, "Overflow encountered when expanding vector");
        *v136 = (char *)off_1C63128;
        sub_2333C0(v136 + 1, v166);
        sub_233E40((__int64)v166);
        __cxa_throw(v136, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v144 = v28;
      v147 = (3 * v31 + 1) >> 1;
      v38 = (unsigned int *)sub_186B300(v30 - 1, v37);
      v39 = v38[1];
      v30 = v38 + 2;
      v28 = v144;
      *v38 = v147;
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
  v137 = v139 + 1;
  v40 = v152;
  v143 = v152;
  if ( v152 )
  {
    v23 = *(_QWORD *)(a1 + 8);
LABEL_38:
    v41 = v139;
    v152 = 0;
    v148 = &v139[v40];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v23, v41[1]) )
      {
        v42 = v41[1];
        v43 = v152 + 1;
        v44 = (__int64 *)(v163 + 8LL * v152);
        if ( v42 )
          ++*(_DWORD *)(v42 + 8);
        v45 = *v44;
        if ( *v44 )
        {
          v46 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v46 )
          {
            sub_15D7BC0(v141, v45);
            v44 = (__int64 *)(v163 + 8LL * v152);
            v43 = v152 + 1;
          }
        }
        ++v41;
        *v44 = v42;
        v152 = v43;
        if ( v41 == v148 )
        {
LABEL_48:
          if ( v163 )
          {
            v40 = v152;
            goto LABEL_50;
          }
LABEL_57:
          if ( v155 )
            goto LABEL_58;
          goto LABEL_67;
        }
      }
      else if ( ++v41 == v148 )
      {
        goto LABEL_48;
      }
      v23 = *(_QWORD *)(a1 + 8);
    }
  }
  v143 = 0;
  if ( v163 )
  {
LABEL_50:
    v47 = (__int64 *)(v163 + 8 * v40);
    for ( i = v163 + 8LL * *(unsigned int *)(v163 - 4); (unsigned __int64)v47 < i; ++v47 )
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
      sub_15D7BC0(v141, v49);
    }
LABEL_56:
    *(_DWORD *)(v163 - 4) = v152;
    goto LABEL_57;
  }
LABEL_58:
  v50 = v155;
  v155 = 0;
  v51 = &v137[v143];
  v52 = &v137[v143 + v50];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v51) )
    {
      if ( ++v51 == v52 )
        goto LABEL_67;
    }
    v53 = *v51;
    v54 = v155 + 1;
    v55 = &v30[v155];
    if ( *v51 )
      ++*(_DWORD *)(v53 + 8);
    v56 = *v55;
    if ( *v55 )
    {
      v46 = (*(_DWORD *)(v56 + 8))-- == 1;
      if ( v46 )
      {
        v145 = v155 + 1;
        v150 = &v30[v155];
        v160 = v53;
        sub_15D7BC0(v140, v56);
        v54 = v145;
        v55 = v150;
        v53 = v160;
      }
    }
    ++v51;
    *v55 = v53;
    v155 = v54;
  }
  while ( v51 != v52 );
LABEL_67:
  if ( v30 )
  {
    v57 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
    for ( j = &v30[v155]; (unsigned __int64)j < v57; ++j )
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
      sub_15D7BC0(v140, v59);
    }
LABEL_74:
    v14 = *(_QWORD *)(a1 + 8);
    *((_DWORD *)v30 - 1) = v155;
    v60 = v155;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8);
    v60 = v155;
  }
LABEL_75:
  v61 = sub_15DBA30(v14, a2, v152, v163, v60, (_DWORD)v30, v138);
  v62 = *(_QWORD *)(a1 + 504);
  v63 = *(_QWORD *)(a1 + 496);
  if ( v61 )
  {
    ++*(_DWORD *)(v61 + 8);
    if ( v63 )
    {
      v46 = (*(_DWORD *)(v63 + 8))-- == 1;
      if ( v46 )
        sub_15D7BC0(v62, v63);
    }
    *(_QWORD *)(a1 + 496) = 0;
    if ( a2 == v61 )
      goto LABEL_93;
  }
  else
  {
    if ( v63 )
    {
      v46 = (*(_DWORD *)(v63 + 8))-- == 1;
      if ( v46 )
        sub_15D7BC0(v62, v63);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  v64 = *(_QWORD *)(a1 + 8);
  v65 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  if ( !v65 )
  {
    *(_QWORD *)(a1 + 496) = 0;
    v132 = sub_15DE370(v64);
    if ( v132 )
      ++*(_DWORD *)(v132 + 8);
    v157 = v132;
    sub_5C8320(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    goto LABEL_91;
  }
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
      v156 = v66;
      sub_15D7BC0(v69, v68);
      v67 = v156;
    }
  }
  *(_QWORD *)(a1 + 496) = v67;
  v70 = sub_15DE750(*(_QWORD *)(a1 + 8));
  if ( v70 )
    ++*(_DWORD *)(v70 + 8);
  v71 = *(_QWORD *)(a1 + 496);
  if ( v71 )
  {
    v72 = *(_QWORD *)(a1 + 504);
    v46 = (*(_DWORD *)(v71 + 8))-- == 1;
    if ( v46 )
    {
      v157 = v70;
      sub_15D7BC0(v72, v71);
LABEL_91:
      v70 = v157;
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
    goto LABEL_180;
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
    v149 = v76;
    v153 = v77;
    v158 = v78;
    sub_15D7BC0(v80, v79);
    v77 = v153;
    v76 = v149;
    v78 = v158 + 1;
  }
  while ( (unsigned __int64)(v158 + 1) < v153 );
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
      v126 = (3 * v76 + 1) >> 1;
      v127 = 8 * v126 + 8;
      if ( 8 * v76 + 8 >= (unsigned int)v127 || v76 >= v126 )
      {
        v133 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v166, "Overflow encountered when expanding vector");
        *v133 = (char *)off_1C63128;
        sub_2333C0(v133 + 1, v166);
        sub_233E40((__int64)v166);
        __cxa_throw(v133, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v154 = (3 * v76 + 1) >> 1;
      v161 = v81;
      v128 = (unsigned int *)sub_186B300(v75 - 1, v127);
      v129 = v128[1];
      v75 = v128 + 2;
      *(_QWORD *)(a1 + 88) = v128 + 2;
      v81 = v161;
      *v128 = v154;
      LODWORD(v128) = v129;
      v82 = &v75[v129];
      v83 = (_DWORD)v128 + 1;
    }
    else
    {
      v82 = &v75[*((unsigned int *)v75 - 1)];
      v83 = *((_DWORD *)v75 - 1) + 1;
    }
  }
  else
  {
LABEL_180:
    v130 = *(_QWORD *)(a1 + 496);
    if ( v130 )
      ++*(_DWORD *)(v130 + 8);
    v162 = v130;
    v131 = (_QWORD *)sub_186B270(0x18u);
    v75 = v131 + 1;
    *v131 = 2;
    v81 = v162;
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
  v84 = *(_QWORD *)(a1 + 56);
  if ( v84 )
  {
    v85 = v84 + 8LL * *(unsigned int *)(v84 - 4);
    v86 = (__int64 *)(v84 + 8LL * *(unsigned int *)(a3 + 12));
    v159 = *(_DWORD *)(a3 + 12);
    if ( (unsigned __int64)v86 >= v85 )
      goto LABEL_120;
    do
    {
      while ( 1 )
      {
        v87 = *v86;
        if ( *v86 )
        {
          v88 = *(_QWORD *)(a1 + 48);
          v46 = (*(_DWORD *)(v87 + 8))-- == 1;
          if ( v46 )
            break;
        }
        if ( (unsigned __int64)++v86 >= v85 )
          goto LABEL_119;
      }
      sub_15D7BC0(v88, v87);
      ++v86;
    }
    while ( (unsigned __int64)v86 < v85 );
LABEL_119:
    v84 = *(_QWORD *)(a1 + 56);
    if ( v84 )
LABEL_120:
      *(_DWORD *)(v84 - 4) = v159;
  }
  v89 = *(_QWORD *)(a1 + 480);
  v166[0] = v89;
  if ( v89 )
    ++*(_DWORD *)(v89 + 8);
  sub_5C94A0((_QWORD *)(a1 + 56), v166);
  v90 = *(_QWORD *)(a1 + 160);
  if ( v90 )
    *(_DWORD *)(v90 - 4) -= v142;
  v91 = *(_QWORD *)(a1 + 528);
  if ( v91 )
    *(_DWORD *)(v91 - 4) -= v142;
  sub_15844D0(a1);
  v92 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, v92, *(_QWORD *)(a1 + 496));
    v92 = *(_QWORD *)(a1 + 480);
  }
  if ( v92 )
  {
    v93 = *(_QWORD *)(a1 + 488);
    v46 = (*(_DWORD *)(v92 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v93, v92);
  }
  v94 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v94 && (v95 = *(_QWORD *)(a1 + 504), v46 = *(_DWORD *)(v94 + 8) == 1, --*(_DWORD *)(v94 + 8), v46) )
  {
    sub_15D7BC0(v95, v94);
    v96 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v96 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v97 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v97 - 1;
  if ( a2 != v96 && v97 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v97 - 2) + 8) |= 2u;
  if ( v30 )
  {
    v98 = v30;
    if ( v30 < &v30[*((unsigned int *)v30 - 1)] )
    {
      v99 = (unsigned __int64)&v30[*((unsigned int *)v30 - 1)];
      do
      {
        while ( 1 )
        {
          v100 = *v98;
          if ( *v98 )
          {
            v46 = (*(_DWORD *)(v100 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( (unsigned __int64)++v98 >= v99 )
            goto LABEL_145;
        }
        ++v98;
        sub_15D7BC0(v140, v100);
      }
      while ( (unsigned __int64)v98 < v99 );
    }
LABEL_145:
    result = sub_186B220(v30 - 1);
  }
  v101 = (__int64 *)v163;
  if ( v163 )
  {
    v102 = *(unsigned int *)(v163 - 4);
    if ( v163 < v163 + 8 * v102 )
    {
      v103 = v163 + 8 * v102;
      do
      {
        v104 = *v101;
        if ( *v101 )
        {
          v46 = (*(_DWORD *)(v104 + 8))-- == 1;
          if ( v46 )
            sub_15D7BC0(v141, v104);
        }
        ++v101;
      }
      while ( (unsigned __int64)v101 < v103 );
    }
    return sub_186B220((void *)(v163 - 8));
  }
  return result;
}

