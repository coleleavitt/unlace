__int64 __fastcall sub_CFEE40(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // r12
  char **v4; // r15
  char **v5; // r15
  char **v6; // r15
  char **exception; // r15
  unsigned int v10; // r13d
  __int64 v11; // rsi
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r13
  _QWORD *v22; // rax
  __int64 v23; // r15
  _QWORD *v24; // rdx
  int v25; // eax
  _DWORD *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r15
  _QWORD *v35; // r13
  int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // r8d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rdx
  _DWORD *v43; // rdi
  unsigned int v44; // r9d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 *v49; // r15
  __int64 v50; // r14
  unsigned int v51; // r8d
  __int64 *v52; // rcx
  __int64 v53; // rsi
  bool v54; // zf
  __int64 *v55; // r14
  unsigned __int64 i; // r15
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 *v59; // r15
  __int64 *v60; // r14
  __int64 v61; // rax
  unsigned int v62; // r8d
  __int64 *v63; // rcx
  __int64 v64; // rsi
  unsigned __int64 v65; // r15
  __int64 *j; // r14
  __int64 v67; // rsi
  unsigned int v68; // r8d
  __int64 v69; // r15
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rdi
  _QWORD *v83; // rdx
  unsigned int v84; // r8d
  unsigned __int64 v85; // rcx
  _QWORD *v86; // rax
  __int64 v87; // rsi
  __int64 v88; // rdi
  __int64 v89; // rcx
  _QWORD *v90; // rsi
  int v91; // eax
  __int64 v92; // rax
  unsigned __int64 v93; // r14
  __int64 *v94; // r15
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rsi
  int v105; // ecx
  __int64 *v106; // rbx
  unsigned __int64 v107; // r15
  __int64 v108; // rsi
  __int64 *v109; // rbx
  __int64 v110; // rax
  unsigned __int64 v111; // r15
  __int64 v112; // rsi
  _QWORD *v113; // rax
  int v114; // r14d
  int v115; // r13d
  __int64 v116; // rcx
  int v117; // edx
  _QWORD *v118; // rcx
  _QWORD *v119; // rdx
  __int64 v120; // rax
  _DWORD *v121; // rax
  unsigned int v122; // edx
  unsigned int v123; // ecx
  size_t v124; // rsi
  unsigned int *v125; // rdx
  __int64 v126; // rcx
  unsigned int v127; // ecx
  size_t v128; // rsi
  unsigned int *v129; // rax
  _DWORD *v130; // rdx
  __int64 v131; // rax
  _QWORD *v132; // rax
  _QWORD *v133; // rax
  unsigned int v134; // r9d
  size_t v135; // rsi
  unsigned int *v136; // rax
  __int64 v137; // rsi
  __int64 v138; // rcx
  _QWORD *v139; // rax
  __int64 v140; // rax
  __int64 *v141; // [rsp+0h] [rbp-D0h]
  __int64 v142; // [rsp+8h] [rbp-C8h]
  __int64 *v143; // [rsp+10h] [rbp-C0h]
  __int64 v144; // [rsp+18h] [rbp-B8h]
  __int64 v145; // [rsp+20h] [rbp-B0h]
  int v146; // [rsp+2Ch] [rbp-A4h]
  __int64 v147; // [rsp+30h] [rbp-A0h]
  unsigned int v148; // [rsp+30h] [rbp-A0h]
  unsigned int v149; // [rsp+30h] [rbp-A0h]
  __int64 v150; // [rsp+38h] [rbp-98h]
  unsigned int v151; // [rsp+38h] [rbp-98h]
  __int64 v152; // [rsp+38h] [rbp-98h]
  __int64 *v153; // [rsp+38h] [rbp-98h]
  unsigned int v154; // [rsp+38h] [rbp-98h]
  __int64 *v155; // [rsp+38h] [rbp-98h]
  unsigned int v157; // [rsp+48h] [rbp-88h]
  unsigned __int64 v158; // [rsp+48h] [rbp-88h]
  unsigned int v159; // [rsp+48h] [rbp-88h]
  unsigned int v160; // [rsp+50h] [rbp-80h]
  __int64 v161; // [rsp+50h] [rbp-80h]
  __int64 v162; // [rsp+50h] [rbp-80h]
  _QWORD *v163; // [rsp+50h] [rbp-80h]
  int v164; // [rsp+50h] [rbp-80h]
  __int64 v165; // [rsp+50h] [rbp-80h]
  __int64 v166; // [rsp+50h] [rbp-80h]
  __int64 v167; // [rsp+50h] [rbp-80h]
  unsigned __int64 v168; // [rsp+58h] [rbp-78h]
  unsigned int v169; // [rsp+58h] [rbp-78h]
  unsigned int v170; // [rsp+58h] [rbp-78h]
  __int64 v171[10]; // [rsp+80h] [rbp-50h] BYREF

  v146 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(a3 + 8) > 0x3Fu )
    goto LABEL_2;
  sub_15856A0(a1);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  v113 = *(_QWORD **)(a1 + 160);
  if ( v113 )
    v114 = *((_DWORD *)v113 - 1);
  else
    v114 = 0;
  if ( v146 )
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
          v169 = v123;
          if ( 8 * v122 + 8 >= (unsigned int)v124 || v122 >= v123 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_CF7210(v171, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v171);
            sub_233E40((__int64)v171);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v125 = (unsigned int *)sub_186B300(v113 - 1, v124);
          v113 = v125 + 2;
          v126 = v125[1];
          *v125 = v169;
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
        v132 = (_QWORD *)sub_186B270(0x18u);
        v117 = 1;
        *v132 = 2;
        v113 = v132 + 1;
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
        goto LABEL_161;
      }
      v127 = (unsigned int)(3 * v120 + 1) >> 1;
      v128 = 4 * v127 + 8;
      v170 = v127;
      if ( 4 * (int)v120 + 8 >= (unsigned int)v128 || (unsigned int)v120 >= v127 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_CF7210(v171, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v171);
        sub_233E40((__int64)v171);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      ++v115;
      v129 = (unsigned int *)sub_186B300(v119 - 1, v128);
      v130 = v129 + 2;
      *v129 = v170;
      v131 = v129[1];
      *(_QWORD *)(a1 + 528) = v130;
      v130[v131] = v114;
      ++*(v130 - 1);
      if ( v115 == v146 )
        goto LABEL_171;
LABEL_162:
      v113 = *(_QWORD **)(a1 + 160);
    }
    v133 = (_QWORD *)sub_186B270(0x10u);
    v119 = v133 + 1;
    *v133 = 2;
    *(_QWORD *)(a1 + 528) = v133 + 1;
    v121 = v133 + 1;
LABEL_161:
    ++v115;
    *v121 = v114;
    ++*((_DWORD *)v119 - 1);
    if ( v115 == v146 )
      goto LABEL_171;
    goto LABEL_162;
  }
LABEL_171:
  *(_DWORD *)(a1 + 128) += v146;
LABEL_2:
  v10 = *(_DWORD *)(a2 + 76) + *(_DWORD *)(a2 + 72) + 1;
  while ( 1 )
  {
    v14 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v14 >= v10 )
      break;
    if ( v14 )
    {
      v15 = *(_DWORD *)(a2 + 72);
      v16 = v14 - 1;
      if ( v15 < v14 )
        v16 = (unsigned int)v16 - v15;
      v11 = *(_QWORD *)(16LL * *(unsigned int *)(a2 + 20) + a2 + 8 * v16 + 80);
    }
    else
    {
      v11 = *(_QWORD *)(a2 + 24);
    }
    v12 = ((v14 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v12;
    result = sub_CFEA40((_QWORD *)a1, v11, ((unsigned __int8)v12 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v17 = *(unsigned int *)(a2 + 20);
  v143 = (__int64 *)(*(_QWORD *)(a1 + 56) + 8LL * *(unsigned int *)(a3 + 12));
  v18 = *(_QWORD *)(a1 + 8);
  v157 = *(_DWORD *)(a2 + 72);
  v142 = *v143;
  v145 = v18;
  v160 = *(_DWORD *)(a2 + 76);
  v19 = 16 * v17;
  if ( v157 )
  {
    v20 = v19 + a2;
    v21 = *(_QWORD *)(v19 + a2 + 80);
    if ( v21 )
      ++*(_DWORD *)(v21 + 8);
    v22 = (_QWORD *)sub_186B270(0x18u);
    *v22 = 2;
    v147 = v157;
    v23 = a2 + 8 * (v157 + 2 * v17);
    v24 = v22 + 1;
    v25 = 1;
    v168 = (unsigned __int64)v24;
    v26 = v24;
    while ( 1 )
    {
      v20 += 8;
      *v24 = v21;
      *(v26 - 1) = v25;
      if ( v23 == v20 )
        break;
      while ( 1 )
      {
        v21 = *(_QWORD *)(v20 + 80);
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        v27 = *(_DWORD *)(v168 - 4);
        if ( v27 == *(_DWORD *)(v168 - 8) )
          break;
        v20 += 8;
        *(_QWORD *)(v168 + 8LL * v27) = v21;
        *(_DWORD *)(v168 - 4) = v27 + 1;
        if ( v23 == v20 )
          goto LABEL_21;
      }
      v39 = (3 * v27 + 1) >> 1;
      v40 = 8 * v39 + 8;
      if ( 8 * v27 + 8 >= (unsigned int)v40 || v27 >= v39 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_CF7210(v171, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v171);
        sub_233E40((__int64)v171);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v151 = (3 * v27 + 1) >> 1;
      v41 = (unsigned int *)sub_186B300((void *)(v168 - 8), v40);
      v42 = v41[1];
      v43 = v41 + 2;
      v168 = (unsigned __int64)(v41 + 2);
      v26 = v41 + 2;
      *v41 = v151;
      LODWORD(v41) = v42;
      v24 = &v43[2 * v42];
      v25 = (_DWORD)v41 + 1;
    }
LABEL_21:
    v28 = *(_QWORD *)(a1 + 8);
    v19 = 16LL * *(unsigned int *)(a2 + 20);
    v144 = v28;
    if ( !v160 )
    {
      v35 = nullptr;
      v141 = v143 + 1;
      v48 = v157;
      goto LABEL_38;
    }
  }
  else
  {
    v144 = *(_QWORD *)(a1 + 8);
    v168 = 0;
    if ( !v160 )
    {
      v68 = 0;
      v35 = nullptr;
      goto LABEL_75;
    }
  }
  v29 = a2 + v19;
  v30 = *(_QWORD *)(a2 + v19 + 80);
  if ( v30 )
    ++*(_DWORD *)(v30 + 8);
  v150 = v30;
  v31 = (_QWORD *)sub_186B270(0x18u);
  v32 = v31 + 1;
  v33 = v150;
  *v31 = 2;
  v34 = 0;
  v35 = v31 + 1;
  v36 = 1;
  while ( 1 )
  {
    *v32 = v33;
    ++v34;
    *((_DWORD *)v35 - 1) = v36;
    if ( (unsigned int)v34 >= v160 )
      break;
    v33 = *(_QWORD *)(v29 + 8 * v34 + 80);
    if ( v33 )
      ++*(_DWORD *)(v33 + 8);
    v37 = *((_DWORD *)v35 - 1);
    if ( v37 == *((_DWORD *)v35 - 2) )
    {
      v44 = (3 * v37 + 1) >> 1;
      v45 = 8 * v44 + 8;
      if ( 8 * v37 + 8 >= (unsigned int)v45 || v37 >= v44 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_CF7210(v171, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v171);
        sub_233E40((__int64)v171);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v148 = (3 * v37 + 1) >> 1;
      v152 = v33;
      v46 = (unsigned int *)sub_186B300(v35 - 1, v45);
      v47 = v46[1];
      v35 = v46 + 2;
      v33 = v152;
      *v46 = v148;
      LODWORD(v46) = v47;
      v32 = &v35[v47];
      v36 = (_DWORD)v46 + 1;
    }
    else
    {
      v38 = v37;
      v36 = v37 + 1;
      v32 = &v35[v38];
    }
  }
  v141 = v143 + 1;
  v48 = v157;
  v147 = v157;
  if ( v157 )
  {
    v28 = *(_QWORD *)(a1 + 8);
LABEL_38:
    v49 = v143;
    v157 = 0;
    v153 = &v143[v48];
    while ( 1 )
    {
      if ( (unsigned __int8)sub_15D3190(v28, v49[1]) )
      {
        v50 = v49[1];
        v51 = v157 + 1;
        v52 = (__int64 *)(v168 + 8LL * v157);
        if ( v50 )
          ++*(_DWORD *)(v50 + 8);
        v53 = *v52;
        if ( *v52 )
        {
          v54 = (*(_DWORD *)(v53 + 8))-- == 1;
          if ( v54 )
          {
            sub_15D7BC0(v145, v53);
            v52 = (__int64 *)(v168 + 8LL * v157);
            v51 = v157 + 1;
          }
        }
        ++v49;
        *v52 = v50;
        v157 = v51;
        if ( v49 == v153 )
        {
LABEL_48:
          if ( v168 )
          {
            v48 = v157;
            goto LABEL_50;
          }
LABEL_57:
          if ( v160 )
            goto LABEL_58;
          goto LABEL_67;
        }
      }
      else if ( ++v49 == v153 )
      {
        goto LABEL_48;
      }
      v28 = *(_QWORD *)(a1 + 8);
    }
  }
  v147 = 0;
  if ( v168 )
  {
LABEL_50:
    v55 = (__int64 *)(v168 + 8 * v48);
    for ( i = v168 + 8LL * *(unsigned int *)(v168 - 4); (unsigned __int64)v55 < i; ++v55 )
    {
      while ( 1 )
      {
        v57 = *v55;
        if ( *v55 )
        {
          v54 = (*(_DWORD *)(v57 + 8))-- == 1;
          if ( v54 )
            break;
        }
        if ( (unsigned __int64)++v55 >= i )
          goto LABEL_56;
      }
      sub_15D7BC0(v145, v57);
    }
LABEL_56:
    *(_DWORD *)(v168 - 4) = v157;
    goto LABEL_57;
  }
LABEL_58:
  v58 = v160;
  v160 = 0;
  v59 = &v141[v147];
  v60 = &v141[v147 + v58];
  do
  {
    while ( !(unsigned __int8)sub_15D3190(*(_QWORD *)(a1 + 8), *v59) )
    {
      if ( ++v59 == v60 )
        goto LABEL_67;
    }
    v61 = *v59;
    v62 = v160 + 1;
    v63 = &v35[v160];
    if ( *v59 )
      ++*(_DWORD *)(v61 + 8);
    v64 = *v63;
    if ( *v63 )
    {
      v54 = (*(_DWORD *)(v64 + 8))-- == 1;
      if ( v54 )
      {
        v149 = v160 + 1;
        v155 = &v35[v160];
        v165 = v61;
        sub_15D7BC0(v144, v64);
        v62 = v149;
        v63 = v155;
        v61 = v165;
      }
    }
    ++v59;
    *v63 = v61;
    v160 = v62;
  }
  while ( v59 != v60 );
LABEL_67:
  if ( v35 )
  {
    v65 = (unsigned __int64)&v35[*((unsigned int *)v35 - 1)];
    for ( j = &v35[v160]; (unsigned __int64)j < v65; ++j )
    {
      while ( 1 )
      {
        v67 = *j;
        if ( *j )
        {
          v54 = (*(_DWORD *)(v67 + 8))-- == 1;
          if ( v54 )
            break;
        }
        if ( (unsigned __int64)++j >= v65 )
          goto LABEL_74;
      }
      sub_15D7BC0(v144, v67);
    }
LABEL_74:
    v18 = *(_QWORD *)(a1 + 8);
    *((_DWORD *)v35 - 1) = v160;
    v68 = v160;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 8);
    v68 = v160;
  }
LABEL_75:
  v69 = sub_15DBA30(v18, a2, v157, v168, v68, (_DWORD)v35, v142);
  v70 = *(_QWORD *)(a1 + 504);
  v71 = *(_QWORD *)(a1 + 496);
  if ( v69 )
  {
    ++*(_DWORD *)(v69 + 8);
    if ( v71 )
    {
      v54 = (*(_DWORD *)(v71 + 8))-- == 1;
      if ( v54 )
        sub_15D7BC0(v70, v71);
    }
    *(_QWORD *)(a1 + 496) = 0;
    if ( a2 == v69 )
      goto LABEL_93;
  }
  else
  {
    if ( v71 )
    {
      v54 = (*(_DWORD *)(v71 + 8))-- == 1;
      if ( v54 )
        sub_15D7BC0(v70, v71);
    }
    *(_QWORD *)(a1 + 496) = 0;
  }
  v72 = *(_QWORD *)(a1 + 8);
  v73 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * *(unsigned int *)(a3 + 12));
  if ( !v73 )
  {
    *(_QWORD *)(a1 + 496) = 0;
    v140 = sub_15DE370(v72);
    if ( v140 )
      ++*(_DWORD *)(v140 + 8);
    v162 = v140;
    sub_CF71D0(*(_QWORD *)(a1 + 496), *(_QWORD *)(a1 + 504));
    goto LABEL_91;
  }
  ++*(_DWORD *)(v73 + 8);
  *(_QWORD *)(a1 + 496) = v73;
  v74 = sub_15DE700(v72);
  v75 = v74;
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  v76 = *(_QWORD *)(a1 + 496);
  if ( v76 )
  {
    v77 = *(_QWORD *)(a1 + 504);
    v54 = (*(_DWORD *)(v76 + 8))-- == 1;
    if ( v54 )
    {
      v161 = v74;
      sub_15D7BC0(v77, v76);
      v75 = v161;
    }
  }
  *(_QWORD *)(a1 + 496) = v75;
  v78 = sub_15DE750(*(_QWORD *)(a1 + 8));
  if ( v78 )
    ++*(_DWORD *)(v78 + 8);
  v79 = *(_QWORD *)(a1 + 496);
  if ( v79 )
  {
    v80 = *(_QWORD *)(a1 + 504);
    v54 = (*(_DWORD *)(v79 + 8))-- == 1;
    if ( v54 )
    {
      v162 = v78;
      sub_15D7BC0(v80, v79);
LABEL_91:
      v78 = v162;
    }
  }
  *(_QWORD *)(a1 + 496) = v78;
  if ( v69 )
LABEL_93:
    ++*(_DWORD *)(v69 + 8);
  v81 = *(_QWORD *)(a1 + 480);
  if ( v81 )
  {
    v82 = *(_QWORD *)(a1 + 488);
    v54 = (*(_DWORD *)(v81 + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v82, v81);
  }
  v83 = *(_QWORD **)(a1 + 88);
  *(_QWORD *)(a1 + 480) = v69;
  if ( !v83 )
    goto LABEL_180;
  v84 = *(_DWORD *)(a3 + 12);
  v85 = (unsigned __int64)&v83[*((unsigned int *)v83 - 1)];
  v86 = &v83[v84];
  if ( (unsigned __int64)v86 >= v85 )
    goto LABEL_105;
  do
  {
    while ( 1 )
    {
      v87 = *v86;
      if ( *v86 )
      {
        v88 = *(_QWORD *)(a1 + 80);
        v54 = (*(_DWORD *)(v87 + 8))-- == 1;
        if ( v54 )
          break;
      }
      if ( (unsigned __int64)++v86 >= v85 )
        goto LABEL_104;
    }
    v154 = v84;
    v158 = v85;
    v163 = v86;
    sub_15D7BC0(v88, v87);
    v85 = v158;
    v84 = v154;
    v86 = v163 + 1;
  }
  while ( (unsigned __int64)(v163 + 1) < v158 );
LABEL_104:
  v83 = *(_QWORD **)(a1 + 88);
  if ( v83 )
  {
LABEL_105:
    v89 = *(_QWORD *)(a1 + 496);
    *((_DWORD *)v83 - 1) = v84;
    if ( v89 )
    {
      ++*(_DWORD *)(v89 + 8);
      v84 = *((_DWORD *)v83 - 1);
    }
    if ( *((_DWORD *)v83 - 2) == v84 )
    {
      v134 = (3 * v84 + 1) >> 1;
      v135 = 8 * v134 + 8;
      if ( 8 * v84 + 8 >= (unsigned int)v135 || v84 >= v134 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_CF7210(v171, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v171);
        sub_233E40((__int64)v171);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v159 = (3 * v84 + 1) >> 1;
      v166 = v89;
      v136 = (unsigned int *)sub_186B300(v83 - 1, v135);
      v137 = v136[1];
      v83 = v136 + 2;
      *(_QWORD *)(a1 + 88) = v136 + 2;
      v89 = v166;
      *v136 = v159;
      LODWORD(v136) = v137;
      v90 = &v83[v137];
      v91 = (_DWORD)v136 + 1;
    }
    else
    {
      v90 = &v83[*((unsigned int *)v83 - 1)];
      v91 = *((_DWORD *)v83 - 1) + 1;
    }
  }
  else
  {
LABEL_180:
    v138 = *(_QWORD *)(a1 + 496);
    if ( v138 )
      ++*(_DWORD *)(v138 + 8);
    v167 = v138;
    v139 = (_QWORD *)sub_186B270(0x18u);
    v83 = v139 + 1;
    *v139 = 2;
    v89 = v167;
    v91 = 1;
    *(_QWORD *)(a1 + 88) = v83;
    v90 = v83;
  }
  *v90 = v89;
  *((_DWORD *)v83 - 1) = v91;
  if ( v69 )
  {
    v54 = (*(_DWORD *)(v69 + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v18, v69);
  }
  v92 = *(_QWORD *)(a1 + 56);
  if ( v92 )
  {
    v93 = v92 + 8LL * *(unsigned int *)(v92 - 4);
    v94 = (__int64 *)(v92 + 8LL * *(unsigned int *)(a3 + 12));
    v164 = *(_DWORD *)(a3 + 12);
    if ( (unsigned __int64)v94 >= v93 )
      goto LABEL_120;
    do
    {
      while ( 1 )
      {
        v95 = *v94;
        if ( *v94 )
        {
          v96 = *(_QWORD *)(a1 + 48);
          v54 = (*(_DWORD *)(v95 + 8))-- == 1;
          if ( v54 )
            break;
        }
        if ( (unsigned __int64)++v94 >= v93 )
          goto LABEL_119;
      }
      sub_15D7BC0(v96, v95);
      ++v94;
    }
    while ( (unsigned __int64)v94 < v93 );
LABEL_119:
    v92 = *(_QWORD *)(a1 + 56);
    if ( v92 )
LABEL_120:
      *(_DWORD *)(v92 - 4) = v164;
  }
  v97 = *(_QWORD *)(a1 + 480);
  v171[0] = v97;
  if ( v97 )
    ++*(_DWORD *)(v97 + 8);
  sub_CF8D70((_QWORD *)(a1 + 56), v171);
  v98 = *(_QWORD *)(a1 + 160);
  if ( v98 )
    *(_DWORD *)(v98 - 4) -= v146;
  v99 = *(_QWORD *)(a1 + 528);
  if ( v99 )
    *(_DWORD *)(v99 - 4) -= v146;
  sub_15844D0(a1);
  v100 = *(_QWORD *)(a1 + 480);
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_15843A0(a1, a2, v100, *(_QWORD *)(a1 + 496));
    v100 = *(_QWORD *)(a1 + 480);
  }
  if ( v100 )
  {
    v101 = *(_QWORD *)(a1 + 488);
    v54 = (*(_DWORD *)(v100 + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v101, v100);
  }
  v102 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 480) = 0;
  if ( v102 && (v103 = *(_QWORD *)(a1 + 504), v54 = *(_DWORD *)(v102 + 8) == 1, --*(_DWORD *)(v102 + 8), v54) )
  {
    sub_15D7BC0(v103, v102);
    v104 = *(_QWORD *)(a1 + 480);
  }
  else
  {
    v104 = 0;
  }
  *(_QWORD *)(a1 + 496) = 0;
  result = *(_QWORD *)(a1 + 40);
  v105 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v105 - 1;
  if ( a2 != v104 && v105 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v105 - 2) + 8) |= 2u;
  if ( v35 )
  {
    v106 = v35;
    if ( v35 < &v35[*((unsigned int *)v35 - 1)] )
    {
      v107 = (unsigned __int64)&v35[*((unsigned int *)v35 - 1)];
      do
      {
        while ( 1 )
        {
          v108 = *v106;
          if ( *v106 )
          {
            v54 = (*(_DWORD *)(v108 + 8))-- == 1;
            if ( v54 )
              break;
          }
          if ( (unsigned __int64)++v106 >= v107 )
            goto LABEL_145;
        }
        ++v106;
        sub_15D7BC0(v144, v108);
      }
      while ( (unsigned __int64)v106 < v107 );
    }
LABEL_145:
    result = sub_186B220(v35 - 1);
  }
  v109 = (__int64 *)v168;
  if ( v168 )
  {
    v110 = *(unsigned int *)(v168 - 4);
    if ( v168 < v168 + 8 * v110 )
    {
      v111 = v168 + 8 * v110;
      do
      {
        v112 = *v109;
        if ( *v109 )
        {
          v54 = (*(_DWORD *)(v112 + 8))-- == 1;
          if ( v54 )
            sub_15D7BC0(v145, v112);
        }
        ++v109;
      }
      while ( (unsigned __int64)v109 < v111 );
    }
    return sub_186B220((void *)(v168 - 8));
  }
  return result;
}

