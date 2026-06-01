__int64 __fastcall sub_CF2140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  _QWORD *v8; // rbx
  char v9; // al
  unsigned int v10; // r13d
  __int64 v11; // rsi
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // r15
  __int64 *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rdi
  bool v27; // zf
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdi
  int v33; // ecx
  __int64 v34; // rdi
  int v35; // edx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // r13
  _QWORD *v40; // rcx
  unsigned int v41; // edx
  __int64 v42; // rsi
  int v43; // edx
  _QWORD *v44; // rax
  int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // r14d
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r13
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdi
  _QWORD *v58; // rdx
  unsigned int v59; // r15d
  unsigned __int64 v60; // r14
  __int64 *v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rdi
  _QWORD *v64; // rcx
  int v65; // eax
  int v66; // ecx
  __int64 v67; // rsi
  __int64 v68; // rdi
  _QWORD *v69; // rax
  unsigned int v70; // r14d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rcx
  unsigned int v74; // r14d
  size_t v75; // rsi
  unsigned int *v76; // rax
  __int64 v77; // rax
  int v78; // edx
  _QWORD *v79; // rdx
  __int64 v80; // rsi
  int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  unsigned int v84; // r13d
  _QWORD *v85; // r8
  _DWORD *v86; // rdi
  __int64 v87; // r10
  __int64 v88; // r15
  __int64 v89; // r11
  int v90; // r14d
  __int64 v91; // r9
  __int64 *v92; // rdi
  __int64 v93; // r11
  __int64 v94; // rax
  __int64 v95; // r14
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 *v98; // r14
  unsigned __int64 v99; // r15
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 *v102; // rcx
  int v103; // eax
  __int64 v104; // rcx
  int v105; // esi
  __int64 v106; // rdi
  __int64 v107; // rsi
  __int64 v108; // rdi
  _QWORD *v109; // rax
  unsigned int v110; // r15d
  unsigned int v111; // eax
  unsigned int *v112; // rax
  __int64 v113; // rcx
  _QWORD *v114; // rdx
  unsigned int v115; // eax
  __int64 v116; // rsi
  int v117; // eax
  __int64 *v118; // rsi
  unsigned __int8 v119; // al
  _QWORD *v120; // rax
  int v121; // edx
  __int64 v122; // r13
  __int64 v123; // rsi
  __int64 v124; // rdi
  int v125; // edx
  __int64 v126; // rdi
  __int64 v127; // rcx
  __int64 v128; // rsi
  int v129; // ecx
  int v130; // r13d
  int v131; // edx
  __int64 v132; // rsi
  __int64 v133; // r14
  _QWORD *v134; // rdx
  unsigned int v135; // ecx
  int v136; // eax
  __int64 v137; // rdx
  __int64 v138; // rsi
  __int64 v139; // rdi
  _QWORD *v140; // rax
  _QWORD *v141; // rdx
  unsigned int v142; // r13d
  size_t v143; // rsi
  unsigned int *v144; // rax
  __int64 v145; // rsi
  unsigned int v146; // r13d
  unsigned int v147; // edx
  unsigned int *v148; // rax
  _QWORD *v149; // rax
  __int64 v150; // rax
  __int64 v151; // r13
  _QWORD *v152; // rdx
  unsigned int v153; // eax
  __int64 *v154; // r13
  _QWORD *v155; // rbp
  unsigned __int64 v156; // rbx
  unsigned int v157; // r15d
  __int64 v158; // rsi
  __int64 v159; // rdi
  __int64 v160; // r13
  _QWORD *v161; // rax
  int v162; // ecx
  unsigned int v163; // r14d
  unsigned int v164; // ecx
  unsigned int *v165; // rax
  __int64 v166; // rax
  int v167; // r14d
  _QWORD *v168; // rax
  char **v169; // rbp
  char **exception; // rbp
  __int64 *v171; // [rsp+0h] [rbp-98h]
  __int64 v172; // [rsp+0h] [rbp-98h]
  __int64 v173; // [rsp+0h] [rbp-98h]
  __int64 v174; // [rsp+0h] [rbp-98h]
  __int64 v175; // [rsp+0h] [rbp-98h]
  __int64 v176; // [rsp+8h] [rbp-90h]
  char *v177; // [rsp+10h] [rbp-88h]
  unsigned int v178; // [rsp+10h] [rbp-88h]
  int v179; // [rsp+18h] [rbp-80h]
  int v180; // [rsp+1Ch] [rbp-7Ch]
  __int64 v181; // [rsp+20h] [rbp-78h]
  _QWORD *v182; // [rsp+28h] [rbp-70h]
  __int64 v183; // [rsp+30h] [rbp-68h] BYREF
  __int64 v184; // [rsp+38h] [rbp-60h]
  __int64 v185[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = a3;
  v8 = (_QWORD *)a1;
  v9 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v9 == 2 )
  {
    v46 = *(_QWORD *)(a1 + 8);
    v47 = *(_DWORD *)(a2 + 24);
    v183 = 0;
    v184 = v46;
    v48 = *(_QWORD *)(a1 + 160);
    if ( v48 )
      *(_DWORD *)(v48 - 4) -= v47;
    v49 = *(_QWORD *)(a1 + 528);
    if ( v49 )
      *(_DWORD *)(v49 - 4) -= v47;
    *(_DWORD *)(a1 + 128) -= v47;
    sub_15844D0(a1);
    v50 = 0x7FFFFFFF8LL;
    v51 = *(_QWORD *)(a1 + 56);
    if ( v51 )
      v50 = 8LL * (unsigned int)(*(_DWORD *)(v51 - 4) - 1);
    v52 = *(_QWORD *)(v51 + v50);
    if ( v52 )
      ++*(_DWORD *)(v52 + 8);
    v53 = *(_QWORD *)(a1 + 480);
    if ( v53 )
    {
      v54 = *(_QWORD *)(a1 + 488);
      v27 = (*(_DWORD *)(v53 + 8))-- == 1;
      if ( v27 )
        sub_15D7BC0(v54, v53);
    }
    v27 = *(_WORD *)(v52 + 4) == 0;
    v8[60] = v52;
    if ( v27 && (*(_BYTE *)(v52 + 30) & 1) != 0 )
    {
      v58 = (_QWORD *)v8[7];
      if ( !v58 )
      {
LABEL_83:
        ++*(_DWORD *)(v52 + 8);
LABEL_84:
        v69 = (_QWORD *)sub_186B270(0x18u);
        v58 = v69 + 1;
        *v69 = 2;
        v65 = 1;
        v8[7] = v58;
        v64 = v58;
LABEL_74:
        *v64 = v52;
        *((_DWORD *)v58 - 1) = v65;
        if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
          sub_1584390(v8, a2, 0, v8[60]);
        result = v8[5];
        v66 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v66 - 1;
        if ( v66 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v66 - 2) + 8) |= 2u;
        v67 = v183;
        if ( v183 )
        {
          v68 = v184;
          v27 = (*(_DWORD *)(v183 + 8))-- == 1;
          if ( v27 )
            return sub_15D7BC0(v68, v67);
        }
        return result;
      }
    }
    else
    {
      sub_1585DF0(v8 + 41, v52, v47, &v183);
      v56 = v183;
      v183 = v8[60];
      v55 = v183;
      v8[60] = v56;
      if ( v55 )
      {
        v57 = v184;
        v27 = (*(_DWORD *)(v55 + 8))-- == 1;
        if ( v27 )
          sub_15D7BC0(v57, v55);
      }
      v183 = 0;
      v58 = (_QWORD *)v8[7];
      if ( !v58 )
        goto LABEL_123;
    }
    v59 = *(_DWORD *)(v7 + 12);
    v60 = (unsigned __int64)&v58[*((unsigned int *)v58 - 1)];
    v61 = &v58[v59];
    if ( (unsigned __int64)v61 >= v60 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v62 = *v61;
        if ( *v61 )
        {
          v63 = v8[6];
          v27 = (*(_DWORD *)(v62 + 8))-- == 1;
          if ( v27 )
            break;
        }
        if ( (unsigned __int64)++v61 >= v60 )
          goto LABEL_69;
      }
      sub_15D7BC0(v63, v62);
      ++v61;
    }
    while ( (unsigned __int64)v61 < v60 );
LABEL_69:
    v58 = (_QWORD *)v8[7];
    if ( v58 )
    {
LABEL_70:
      v52 = v8[60];
      *((_DWORD *)v58 - 1) = v59;
      if ( v52 )
      {
        ++*(_DWORD *)(v52 + 8);
        v59 = *((_DWORD *)v58 - 1);
      }
      if ( *((_DWORD *)v58 - 2) == v59 )
      {
        v70 = (3 * v59 + 1) >> 1;
        v71 = 8 * v70 + 8;
        if ( 8 * v59 + 8 >= (unsigned int)v71 || v59 >= v70 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_CECA40(v185, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v185);
          sub_233E40((__int64)v185);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v72 = (unsigned int *)sub_186B300(v58 - 1, v71);
        v73 = v72[1];
        v58 = v72 + 2;
        *v72 = v70;
        v8[7] = v72 + 2;
        LODWORD(v72) = v73;
        v64 = &v58[v73];
        v65 = (_DWORD)v72 + 1;
      }
      else
      {
        v64 = &v58[*((unsigned int *)v58 - 1)];
        v65 = *((_DWORD *)v58 - 1) + 1;
      }
      goto LABEL_74;
    }
LABEL_123:
    v52 = v8[60];
    if ( !v52 )
      goto LABEL_84;
    goto LABEL_83;
  }
  if ( v9 == 3 )
  {
    sub_1872CE0("");
    sub_1873130(107, 520);
  }
  if ( v9 )
  {
    v28 = 0xFFFFFFFFLL;
    v29 = *(_QWORD **)(a1 + 56);
    if ( v29 )
      v28 = (unsigned int)(*((_DWORD *)v29 - 1) - 1);
    v30 = v29[v28];
    if ( v30 )
      ++*(_DWORD *)(v30 + 8);
    v31 = *(_QWORD *)(a1 + 480);
    if ( v31 )
    {
      v32 = *(_QWORD *)(a1 + 488);
      v27 = (*(_DWORD *)(v31 + 8))-- == 1;
      if ( v27 )
      {
        sub_15D7BC0(v32, v31);
        v29 = (_QWORD *)v8[7];
      }
    }
    v33 = *((_DWORD *)v29 - 1);
    v34 = v8[6];
    v8[60] = v30;
    v35 = v33 - 1;
    v36 = v29[v33 - 1];
    *((_DWORD *)v29 - 1) = v33 - 1;
    if ( v36 )
    {
      v27 = (*(_DWORD *)(v36 + 8))-- == 1;
      if ( v27 )
      {
        sub_15D7BC0(v34, v36);
        v29 = (_QWORD *)v8[7];
        v34 = v8[6];
      }
      v35 = *((_DWORD *)v29 - 1);
    }
    v37 = (unsigned int)(v35 - 1);
    v38 = v29[v37];
    *((_DWORD *)v29 - 1) = v37;
    if ( v38 && (v27 = *(_DWORD *)(v38 + 8) == 1, --*(_DWORD *)(v38 + 8), v27) )
    {
      sub_15D7BC0(v34, v38);
      v39 = v8[60];
      v29 = (_QWORD *)v8[7];
      if ( !v39 )
      {
LABEL_39:
        v40 = v29;
        if ( !v29 )
        {
          v109 = (_QWORD *)sub_186B270(0x18u);
          v43 = 1;
          v40 = v109 + 1;
          *v109 = 2;
          v8[7] = v109 + 1;
          v44 = v109 + 1;
LABEL_42:
          *v44 = v39;
          *((_DWORD *)v40 - 1) = v43;
          if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
            sub_1584390(v8, a2, 0, v8[60]);
          result = v8[5];
          v45 = *(_DWORD *)(result - 4);
          *(_DWORD *)(result - 4) = v45 - 1;
          if ( v45 != 1 )
            *(_BYTE *)(result + 16LL * (unsigned int)(v45 - 2) + 8) |= 2u;
          return result;
        }
LABEL_40:
        v41 = *((_DWORD *)v29 - 1);
        if ( v41 == *((_DWORD *)v29 - 2) )
        {
          v74 = (3 * v41 + 1) >> 1;
          v75 = 8 * v74 + 8;
          if ( 8 * v41 + 8 >= (unsigned int)v75 || v41 >= v74 )
            goto LABEL_230;
          v76 = (unsigned int *)sub_186B300(v29 - 1, v75);
          v40 = v76 + 2;
          *v76 = v74;
          v77 = v76[1];
          v8[7] = v40;
          v78 = v77;
          v44 = &v40[v77];
          v43 = v78 + 1;
        }
        else
        {
          v42 = v41;
          v43 = v41 + 1;
          v44 = &v29[v42];
        }
        goto LABEL_42;
      }
    }
    else
    {
      v39 = v8[60];
      v40 = v29;
      if ( !v39 )
        goto LABEL_40;
    }
    ++*(_DWORD *)(v39 + 8);
    goto LABEL_39;
  }
  v10 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v14 = *(_DWORD *)(v7 + 8) >> 6;
    if ( v14 >= v10 )
      break;
    if ( (*(_DWORD *)(v7 + 8) & 0xFFFFFFC0) != 0x40 )
      goto LABEL_5;
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v15 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v15 || *v15 || v15[1] != 4 )
      goto LABEL_5;
    v16 = *(_QWORD **)(a1 + 56);
    v17 = *(unsigned int *)(v7 + 12);
    v18 = &v16[v17];
    v19 = *(_QWORD *)(a1 + 8);
    if ( *v18 == *(_QWORD *)(v19 + 856) )
    {
      v20 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      if ( *v18 != *(_QWORD *)(v19 + 864) )
        goto LABEL_5;
      v20 = *(_QWORD *)(a2 + 48);
    }
    if ( v20 )
    {
      if ( !v16 )
        goto LABEL_185;
      v21 = *((unsigned int *)v16 - 1);
      if ( v18 >= &v16[v21] )
        goto LABEL_158;
      v172 = v7;
      v23 = (unsigned __int64)&v16[v21];
      v24 = v20;
      do
      {
        v25 = *v18;
        if ( *v18 )
        {
          v26 = *(_QWORD *)(a1 + 48);
          v27 = (*(_DWORD *)(v25 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v26, v25);
        }
        ++v18;
      }
      while ( (unsigned __int64)v18 < v23 );
      v8 = (_QWORD *)a1;
      v20 = v24;
      v7 = v172;
      v16 = (_QWORD *)v8[7];
      if ( v16 )
      {
LABEL_158:
        *((_DWORD *)v16 - 1) = v17;
        ++*(_DWORD *)(v20 + 8);
        v115 = *((_DWORD *)v16 - 1);
        if ( v115 == *((_DWORD *)v16 - 2) )
        {
          v142 = (3 * v115 + 1) >> 1;
          v143 = 8 * v142 + 8;
          if ( 8 * v115 + 8 >= (unsigned int)v143 || v115 >= v142 )
            goto LABEL_230;
          v174 = v20;
          v144 = (unsigned int *)sub_186B300(v16 - 1, v143);
          v20 = v174;
          v145 = v144[1];
          v16 = v144 + 2;
          *v144 = v142;
          v8[7] = v144 + 2;
          LODWORD(v144) = v145;
          v118 = &v16[v145];
          v117 = (_DWORD)v144 + 1;
        }
        else
        {
          v116 = v115;
          v117 = v115 + 1;
          v118 = &v16[v116];
        }
      }
      else
      {
LABEL_185:
        ++*(_DWORD *)(v20 + 8);
        v173 = v20;
        v140 = (_QWORD *)sub_186B270(0x18u);
        v20 = v173;
        v141 = v140;
        *v140 = 2;
        v117 = 1;
        v16 = v141 + 1;
        v8[7] = v16;
        v118 = v16;
      }
      *v118 = v20;
      *((_DWORD *)v16 - 1) = v117;
      v119 = *(_BYTE *)(v7 + 8) & 0xF3 | 4;
      *(_BYTE *)(v7 + 8) = v119;
      result = sub_CF1AB0(v8, v20, (v119 >> 4) & 3);
      if ( !(_BYTE)result )
        goto LABEL_181;
      v120 = (_QWORD *)v8[7];
      if ( v120 )
        v121 = *((_DWORD *)v120 - 1);
      else
        v121 = 0;
      v122 = v120[v121 - 1];
      if ( v122 )
        ++*(_DWORD *)(v122 + 8);
      v123 = v8[60];
      if ( v123 )
      {
        v124 = v8[61];
        v27 = (*(_DWORD *)(v123 + 8))-- == 1;
        if ( v27 )
        {
          sub_15D7BC0(v124, v123);
          v120 = (_QWORD *)v8[7];
        }
      }
      v125 = *((_DWORD *)v120 - 1);
      v126 = v8[6];
      v8[60] = v122;
      v127 = (unsigned int)(v125 - 1);
      v128 = v120[v127];
      *((_DWORD *)v120 - 1) = v127;
      if ( v128
        && (v129 = *(_DWORD *)(v128 + 8), v130 = v129 - 1, *(_DWORD *)(v128 + 8) = v129 - 1, v129 == 1)
        && (sub_15D7BC0(v126, v128), v120 = (_QWORD *)v8[7], v126 = v8[6], !v120) )
      {
        v131 = MEMORY[0xFFFFFFFFFFFFFFFC];
      }
      else
      {
        v130 = *((_DWORD *)v120 - 1);
        v131 = v130;
      }
      v132 = v120[v130 - 1];
      *((_DWORD *)v120 - 1) = v131 - 1;
      if ( !v132 || (v27 = *(_DWORD *)(v132 + 8) == 1, --*(_DWORD *)(v132 + 8), !v27) )
      {
        v133 = v8[60];
        v134 = v120;
        if ( v133 )
          goto LABEL_174;
        goto LABEL_176;
      }
      sub_15D7BC0(v126, v132);
      v133 = v8[60];
      v120 = (_QWORD *)v8[7];
      if ( v133 )
LABEL_174:
        ++*(_DWORD *)(v133 + 8);
      v134 = v120;
      if ( v120 )
      {
LABEL_176:
        v135 = *((_DWORD *)v120 - 2);
        if ( *((_DWORD *)v120 - 1) == v135 )
        {
          v146 = (3 * v135 + 1) >> 1;
          v147 = 8 * v146 + 8;
          if ( 8 * v135 + 8 >= v147 || v135 >= v146 )
            goto LABEL_230;
          v148 = (unsigned int *)sub_186B300(v120 - 1, v147);
          v134 = v148 + 2;
          *v148 = v146;
          v8[7] = v148 + 2;
        }
      }
      else
      {
        v149 = (_QWORD *)sub_186B270(0x18u);
        *v149 = 2;
        v134 = v149 + 1;
        v8[7] = v149 + 1;
      }
      v136 = *((_DWORD *)v134 - 1);
      v134[v136] = v133;
      *((_DWORD *)v134 - 1) = v136 + 1;
      if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
        sub_1584390(v8, a2, 0, v8[60]);
      v137 = v8[5];
      result = *(unsigned int *)(v137 - 4);
      *(_DWORD *)(v137 - 4) = result - 1;
      if ( (_DWORD)result != 1 )
      {
        result = 16LL * (unsigned int)(result - 2);
        *(_BYTE *)(v137 + result + 8) |= 2u;
      }
      goto LABEL_181;
    }
LABEL_5:
    v11 = *(_QWORD *)(a2 + 8LL * v14 + 32);
    v12 = ((v14 + 1) << 6) | *(_DWORD *)(v7 + 8) & 0x3F;
    *(_DWORD *)(v7 + 8) = v12;
    result = sub_CF1AB0((_QWORD *)a1, v11, ((unsigned __int8)v12 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v79 = *(_QWORD **)(a1 + 56);
  v80 = *(_QWORD *)(a2 + 16);
  if ( v79 )
    v81 = *((_DWORD *)v79 - 1);
  else
    v81 = 0;
  v82 = *(unsigned int *)(v7 + 12);
  v83 = v81 - v82;
  v84 = *(_DWORD *)(v7 + 12);
  v85 = &v79[v82];
  if ( v83 != 2
    || (v86 = *(_DWORD **)(v80 + 24)) == nullptr
    || (LODWORD(a6) = *v86) != 0
    || v86[1] != 2
    || (v87 = *v85, *(_WORD *)(*v85 + 4LL))
    || (v88 = v85[1], *(_WORD *)(v88 + 4))
    || (v89 = *(_QWORD *)(v87 + 16), v176 = v89, v89 != *(_QWORD *)(v88 + 16))
    || *(_DWORD *)(v87 + 24) != 1
    || (v90 = *(_DWORD *)(v88 + 24), v90 != 1) )
  {
LABEL_109:
    if ( (*(_BYTE *)(v7 + 8) & 2) != 0 )
    {
      v94 = sub_15DC610(
              v8[1],
              v80,
              v83,
              (int)v79 + 8 * (int)v82,
              (int)v85,
              a6,
              (int)v171,
              v176,
              (int)v177,
              v179,
              v181,
              (char)v182,
              v183,
              v184,
              v185[0],
              (void *)v185[1]);
      v95 = v94;
      if ( v94 )
        ++*(_DWORD *)(v94 + 8);
      v96 = v8[60];
      if ( v96 )
      {
        v97 = v8[61];
        v27 = (*(_DWORD *)(v96 + 8))-- == 1;
        if ( v27 )
          sub_15D7BC0(v97, v96);
      }
      v79 = (_QWORD *)v8[7];
      v8[60] = v95;
      if ( !v79 )
        goto LABEL_153;
      v82 = *(unsigned int *)(v7 + 12);
      v84 = *(_DWORD *)(v7 + 12);
LABEL_117:
      v98 = &v79[v82];
      v99 = (unsigned __int64)&v79[*((unsigned int *)v79 - 1)];
      if ( (unsigned __int64)v98 >= v99 )
        goto LABEL_128;
      do
      {
        v100 = *v98;
        if ( *v98 )
        {
          v101 = v8[6];
          v27 = (*(_DWORD *)(v100 + 8))-- == 1;
          if ( v27 )
            sub_15D7BC0(v101, v100);
        }
        ++v98;
      }
      while ( (unsigned __int64)v98 < v99 );
      v79 = (_QWORD *)v8[7];
      if ( v79 )
      {
LABEL_128:
        v95 = v8[60];
        *((_DWORD *)v79 - 1) = v84;
        if ( v95 )
        {
          ++*(_DWORD *)(v95 + 8);
          v84 = *((_DWORD *)v79 - 1);
        }
        if ( *((_DWORD *)v79 - 2) == v84 )
        {
          v110 = (3 * v84 + 1) >> 1;
          v111 = 8 * v110 + 8;
          if ( 8 * v84 + 8 >= v111 || v84 >= v110 )
            goto LABEL_230;
          v112 = (unsigned int *)sub_186B300(v79 - 1, v111);
          v113 = v112[1];
          v79 = v112 + 2;
          *v112 = v110;
          v8[7] = v112 + 2;
          LODWORD(v112) = v113;
          v102 = &v79[v113];
          v103 = (_DWORD)v112 + 1;
        }
        else
        {
          v102 = &v79[*((unsigned int *)v79 - 1)];
          v103 = *((_DWORD *)v79 - 1) + 1;
        }
        goto LABEL_132;
      }
      v95 = v8[60];
LABEL_153:
      if ( !v95 )
      {
LABEL_155:
        v114 = (_QWORD *)sub_186B270(0x18u);
        *v114 = 2;
        v103 = 1;
        v79 = v114 + 1;
        v8[7] = v79;
        v102 = v79;
LABEL_132:
        *v102 = v95;
        v104 = v8[60];
        *((_DWORD *)v79 - 1) = v103;
        if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
        {
          sub_1584390(v8, a2, 0, v104);
          v104 = v8[60];
        }
        result = v8[5];
        v105 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v105 - 1;
        if ( a2 != v104 && v105 != 1 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v105 - 2) + 8) |= 2u;
          v104 = v8[60];
        }
        if ( v104 )
        {
          v106 = v8[61];
          v27 = (*(_DWORD *)(v104 + 8))-- == 1;
          if ( v27 )
            result = sub_15D7BC0(v106, v104);
        }
        goto LABEL_140;
      }
LABEL_154:
      ++*(_DWORD *)(v95 + 8);
      goto LABEL_155;
    }
    v107 = v8[60];
    ++*(_DWORD *)(a2 + 8);
    if ( v107 )
    {
      v108 = v8[61];
      v27 = (*(_DWORD *)(v107 + 8))-- == 1;
      if ( v27 )
      {
        sub_15D7BC0(v108, v107);
        v84 = *(_DWORD *)(v7 + 12);
        v79 = (_QWORD *)v8[7];
      }
      v8[60] = a2;
      if ( v79 )
      {
        v82 = v84;
        goto LABEL_117;
      }
    }
    else
    {
      v8[60] = a2;
      if ( v79 )
        goto LABEL_117;
    }
    v95 = a2;
    goto LABEL_154;
  }
  v91 = *(_QWORD *)(v8[18] + 8LL);
  v182 = (_QWORD *)v8[18];
  v92 = *(__int64 **)v91;
  v178 = *(_DWORD *)(v91 + 8);
  v180 = *(_DWORD *)(v89 + 12);
  v181 = 16LL * (v180 & (v178 - 1));
  v171 = (__int64 *)(*(_QWORD *)v91 + v181);
  a6 = 16LL * v178;
  v177 = (char *)v92 + a6;
  if ( v181 == a6 )
  {
LABEL_198:
    if ( v92 != v171 )
    {
      while ( 1 )
      {
        a6 = *v92;
        if ( (unsigned __int64)*v92 > 1 )
        {
          if ( *(_DWORD *)(a6 + 12) == v180 && v176 == a6 )
            goto LABEL_206;
        }
        else if ( !a6 )
        {
          goto LABEL_109;
        }
        v92 += 2;
        if ( v171 == v92 )
          goto LABEL_109;
      }
    }
    goto LABEL_109;
  }
  LODWORD(v181) = (_DWORD)v92;
  a6 = (__int64)v171;
  while ( 1 )
  {
    v93 = *(_QWORD *)a6;
    if ( *(_QWORD *)a6 > 1u )
      break;
    if ( !v93 )
      goto LABEL_109;
LABEL_106:
    a6 += 16;
    if ( v177 == (char *)a6 )
      goto LABEL_198;
  }
  if ( *(_DWORD *)(v93 + 12) != v180 || v176 != v93 )
    goto LABEL_106;
LABEL_206:
  v150 = sub_15E1B70(*v182);
  v151 = v150;
  if ( v150 )
    ++*(_DWORD *)(v150 + 8);
  sub_CECA20(v8[60], v8[61]);
  v8[60] = v151;
  sub_CECA00(v8[64], v8[65]);
  v152 = (_QWORD *)v8[7];
  v8[64] = 0;
  if ( v152 )
  {
    v153 = *(_DWORD *)(v7 + 12);
    v154 = &v152[v153];
    if ( v154 >= &v152[*((unsigned int *)v152 - 1)] )
      goto LABEL_216;
    v175 = v7;
    v155 = v8;
    v156 = (unsigned __int64)&v152[*((unsigned int *)v152 - 1)];
    v157 = v153;
    do
    {
      v158 = *v154;
      if ( *v154 )
      {
        v159 = v155[6];
        v27 = (*(_DWORD *)(v158 + 8))-- == 1;
        if ( v27 )
          sub_15D7BC0(v159, v158);
      }
      ++v154;
    }
    while ( (unsigned __int64)v154 < v156 );
    v8 = v155;
    v153 = v157;
    v7 = v175;
    v152 = (_QWORD *)v8[7];
    if ( v152 )
    {
LABEL_216:
      v160 = v8[60];
      *((_DWORD *)v152 - 1) = v153;
      if ( v160 )
      {
        ++*(_DWORD *)(v160 + 8);
        v153 = *((_DWORD *)v152 - 1);
      }
      if ( *((_DWORD *)v152 - 2) != v153 )
      {
        v161 = &v152[*((unsigned int *)v152 - 1)];
        v90 = *((_DWORD *)v152 - 1) + 1;
        goto LABEL_220;
      }
      v163 = (3 * v153 + 1) >> 1;
      v164 = 8 * v163 + 8;
      if ( 8 * v153 + 8 < v164 && v153 < v163 )
      {
        v165 = (unsigned int *)sub_186B300(v152 - 1, v164);
        v152 = v165 + 2;
        *v165 = v163;
        v166 = v165[1];
        v8[7] = v152;
        v167 = v166;
        v161 = &v152[v166];
        v90 = v167 + 1;
        goto LABEL_220;
      }
LABEL_230:
      v169 = (char **)__cxa_allocate_exception(0x28u);
      sub_CECA40(v185, "Overflow encountered when expanding vector");
      *v169 = (char *)off_1C63128;
      sub_2333C0(v169 + 1, v185);
      sub_233E40((__int64)v185);
      __cxa_throw(v169, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
  }
  v160 = v8[60];
  if ( v160 )
    ++*(_DWORD *)(v160 + 8);
  v168 = (_QWORD *)sub_186B270(0x18u);
  *v168 = 2;
  v152 = v168 + 1;
  v8[7] = v168 + 1;
  v161 = v168 + 1;
LABEL_220:
  *v161 = v160;
  *((_DWORD *)v152 - 1) = v90;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
    sub_1584390(v8, a2, 0, v8[60]);
  result = v8[5];
  v162 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v162 - 1;
  if ( v162 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v162 - 2) + 8) |= 2u;
LABEL_181:
  v138 = v8[60];
  if ( v138 )
  {
    v139 = v8[61];
    v27 = (*(_DWORD *)(v138 + 8))-- == 1;
    if ( v27 )
      result = sub_15D7BC0(v139, v138);
  }
LABEL_140:
  v8[60] = 0;
  return result;
}

