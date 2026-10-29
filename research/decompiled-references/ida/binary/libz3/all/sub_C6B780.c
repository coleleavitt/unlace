__int64 __fastcall sub_C6B780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, _QWORD *a6)
{
  char v9; // al
  unsigned int v10; // ebp
  __int64 v11; // rsi
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  __int64 *v16; // rdx
  __int64 v17; // r15
  __int64 *v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rdi
  int v30; // ecx
  __int64 v31; // rdi
  int v32; // edx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rbp
  _QWORD *v37; // rcx
  unsigned int v38; // edx
  __int64 v39; // rsi
  int v40; // edx
  _QWORD *v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // r14d
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdi
  _QWORD *v55; // rdx
  unsigned int v56; // r15d
  unsigned __int64 v57; // r14
  __int64 *v58; // rbp
  __int64 v59; // rsi
  __int64 v60; // rdi
  _QWORD *v61; // rcx
  int v62; // eax
  int v63; // ecx
  __int64 v64; // rsi
  __int64 v65; // rdi
  _QWORD *v66; // rax
  unsigned int v67; // r14d
  size_t v68; // rsi
  unsigned int *v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // r14d
  size_t v72; // rsi
  unsigned int *v73; // rax
  __int64 v74; // rax
  int v75; // edx
  __int64 v76; // rdx
  __int64 v77; // r14
  int v78; // ebp
  __int64 v79; // rax
  int v80; // ebp
  __int64 *v81; // r15
  int *v82; // rax
  int v83; // edx
  _QWORD *v84; // rdx
  unsigned int v85; // r15d
  unsigned __int64 v86; // r14
  __int64 *v87; // rbp
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rbp
  __int64 v92; // rsi
  __int64 v93; // rdi
  _QWORD *v94; // rdx
  _QWORD *v95; // rdx
  int v96; // eax
  __int64 *v97; // rcx
  __int64 v98; // rcx
  int v99; // esi
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rdi
  unsigned int v103; // r15d
  unsigned __int64 v104; // r14
  __int64 *v105; // rbp
  __int64 v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rbp
  _QWORD *v109; // rcx
  int v110; // eax
  int v111; // ecx
  __int64 v112; // rsi
  __int64 v113; // rdi
  _QWORD *v114; // rax
  __int64 v115; // rsi
  _DWORD *v116; // rax
  __int64 v117; // rax
  _DWORD *v118; // rax
  char v119; // al
  unsigned int v120; // r14d
  unsigned int v121; // eax
  unsigned int *v122; // rax
  __int64 v123; // rcx
  unsigned int v124; // r14d
  unsigned int v125; // eax
  unsigned int *v126; // rax
  __int64 v127; // rcx
  _QWORD *v128; // rdx
  unsigned int v129; // eax
  __int64 v130; // rsi
  int v131; // eax
  __int64 *v132; // rsi
  unsigned __int8 v133; // al
  _QWORD *v134; // rax
  int v135; // edx
  __int64 v136; // rbp
  __int64 v137; // rsi
  __int64 v138; // rdi
  int v139; // edx
  __int64 v140; // rdi
  __int64 v141; // rcx
  __int64 v142; // rsi
  int v143; // ecx
  int v144; // ebp
  int v145; // edx
  __int64 v146; // rsi
  __int64 v147; // r14
  _QWORD *v148; // rdx
  unsigned int v149; // ecx
  int v150; // eax
  __int64 v151; // rdx
  _QWORD *v152; // rax
  _QWORD *v153; // rdx
  unsigned int v154; // ebp
  size_t v155; // rsi
  unsigned int *v156; // rax
  __int64 v157; // rsi
  unsigned int v158; // ebp
  unsigned int v159; // edx
  unsigned int *v160; // rax
  _QWORD *v161; // rax
  char **v162; // rbp
  char **exception; // rbp
  _QWORD *v164; // [rsp+0h] [rbp-78h]
  __int64 v165; // [rsp+0h] [rbp-78h]
  __int64 v166; // [rsp+0h] [rbp-78h]
  __int64 v167; // [rsp+0h] [rbp-78h]
  int v168; // [rsp+8h] [rbp-70h]
  __int64 v169; // [rsp+10h] [rbp-68h] BYREF
  __int64 v170; // [rsp+18h] [rbp-60h]
  __int64 v171; // [rsp+20h] [rbp-58h] BYREF
  char v172; // [rsp+28h] [rbp-50h]
  int v173; // [rsp+30h] [rbp-48h]
  int v174; // [rsp+38h] [rbp-40h]
  int v175; // [rsp+40h] [rbp-38h]
  void *v176; // [rsp+48h] [rbp-30h]

  v9 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v9 == 2 )
  {
    v43 = *(_QWORD *)(a1 + 8);
    v44 = *(_DWORD *)(a2 + 24);
    v169 = 0;
    v170 = v43;
    v45 = *(_QWORD *)(a1 + 160);
    if ( v45 )
      *(_DWORD *)(v45 - 4) -= v44;
    v46 = *(_QWORD *)(a1 + 528);
    if ( v46 )
      *(_DWORD *)(v46 - 4) -= v44;
    *(_DWORD *)(a1 + 128) -= v44;
    sub_15844D0(a1);
    v47 = 0x7FFFFFFF8LL;
    v48 = *(_QWORD *)(a1 + 56);
    if ( v48 )
      v47 = 8LL * (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
    v49 = *(_QWORD *)(v48 + v47);
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    v50 = *(_QWORD *)(a1 + 480);
    if ( v50 )
    {
      v51 = *(_QWORD *)(a1 + 488);
      v24 = (*(_DWORD *)(v50 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v51, v50);
    }
    v24 = *(_WORD *)(v49 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v49;
    if ( v24 && (*(_BYTE *)(v49 + 30) & 1) != 0 )
    {
      v55 = *(_QWORD **)(a1 + 56);
      if ( !v55 )
      {
LABEL_83:
        ++*(_DWORD *)(v49 + 8);
LABEL_84:
        v66 = (_QWORD *)sub_186B270(0x18u);
        v55 = v66 + 1;
        *v66 = 2;
        v62 = 1;
        *(_QWORD *)(a1 + 56) = v55;
        v61 = v55;
LABEL_74:
        *v61 = v49;
        *((_DWORD *)v55 - 1) = v62;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        result = *(_QWORD *)(a1 + 40);
        v63 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v63 - 1;
        if ( v63 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v63 - 2) + 8) |= 2u;
        v64 = v169;
        if ( v169 )
        {
          v65 = v170;
          v24 = (*(_DWORD *)(v169 + 8))-- == 1;
          if ( v24 )
            return sub_15D7BC0(v65, v64);
        }
        return result;
      }
    }
    else
    {
      sub_1585DF0(a1 + 328, v49, v44, &v169);
      v53 = v169;
      v169 = *(_QWORD *)(a1 + 480);
      v52 = v169;
      *(_QWORD *)(a1 + 480) = v53;
      if ( v52 )
      {
        v54 = v170;
        v24 = (*(_DWORD *)(v52 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v54, v52);
      }
      v169 = 0;
      v55 = *(_QWORD **)(a1 + 56);
      if ( !v55 )
        goto LABEL_124;
    }
    v56 = *(_DWORD *)(a3 + 12);
    v57 = (unsigned __int64)&v55[*((unsigned int *)v55 - 1)];
    v58 = &v55[v56];
    if ( (unsigned __int64)v58 >= v57 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v59 = *v58;
        if ( *v58 )
        {
          v60 = *(_QWORD *)(a1 + 48);
          v24 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v24 )
            break;
        }
        if ( (unsigned __int64)++v58 >= v57 )
          goto LABEL_69;
      }
      sub_15D7BC0(v60, v59);
      ++v58;
    }
    while ( (unsigned __int64)v58 < v57 );
LABEL_69:
    v55 = *(_QWORD **)(a1 + 56);
    if ( v55 )
    {
LABEL_70:
      v49 = *(_QWORD *)(a1 + 480);
      *((_DWORD *)v55 - 1) = v56;
      if ( v49 )
      {
        ++*(_DWORD *)(v49 + 8);
        v56 = *((_DWORD *)v55 - 1);
      }
      if ( *((_DWORD *)v55 - 2) == v56 )
      {
        v67 = (3 * v56 + 1) >> 1;
        v68 = 8 * v67 + 8;
        if ( 8 * v56 + 8 >= (unsigned int)v68 || v56 >= v67 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_C63CB0(&v171, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v171);
          sub_233E40((__int64)&v171);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v69 = (unsigned int *)sub_186B300(v55 - 1, v68);
        v70 = v69[1];
        v55 = v69 + 2;
        *v69 = v67;
        *(_QWORD *)(a1 + 56) = v69 + 2;
        LODWORD(v69) = v70;
        v61 = &v55[v70];
        v62 = (_DWORD)v69 + 1;
      }
      else
      {
        v61 = &v55[*((unsigned int *)v55 - 1)];
        v62 = *((_DWORD *)v55 - 1) + 1;
      }
      goto LABEL_74;
    }
LABEL_124:
    v49 = *(_QWORD *)(a1 + 480);
    if ( !v49 )
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
    v25 = 0xFFFFFFFFLL;
    v26 = *(_QWORD **)(a1 + 56);
    if ( v26 )
      v25 = (unsigned int)(*((_DWORD *)v26 - 1) - 1);
    v27 = v26[v25];
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v28 = *(_QWORD *)(a1 + 480);
    if ( v28 )
    {
      v29 = *(_QWORD *)(a1 + 488);
      v24 = (*(_DWORD *)(v28 + 8))-- == 1;
      if ( v24 )
      {
        sub_15D7BC0(v29, v28);
        v26 = *(_QWORD **)(a1 + 56);
      }
    }
    v30 = *((_DWORD *)v26 - 1);
    v31 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v27;
    v32 = v30 - 1;
    v33 = v26[v30 - 1];
    *((_DWORD *)v26 - 1) = v30 - 1;
    if ( v33 )
    {
      v24 = (*(_DWORD *)(v33 + 8))-- == 1;
      if ( v24 )
      {
        sub_15D7BC0(v31, v33);
        v26 = *(_QWORD **)(a1 + 56);
        v31 = *(_QWORD *)(a1 + 48);
      }
      v32 = *((_DWORD *)v26 - 1);
    }
    v34 = (unsigned int)(v32 - 1);
    v35 = v26[v34];
    *((_DWORD *)v26 - 1) = v34;
    if ( v35 && (v24 = *(_DWORD *)(v35 + 8) == 1, --*(_DWORD *)(v35 + 8), v24) )
    {
      sub_15D7BC0(v31, v35);
      v36 = *(_QWORD *)(a1 + 480);
      v26 = *(_QWORD **)(a1 + 56);
      if ( !v36 )
      {
LABEL_39:
        v37 = v26;
        if ( !v26 )
        {
          v114 = (_QWORD *)sub_186B270(0x18u);
          v40 = 1;
          v37 = v114 + 1;
          *v114 = 2;
          *(_QWORD *)(a1 + 56) = v114 + 1;
          v41 = v114 + 1;
LABEL_42:
          *v41 = v36;
          *((_DWORD *)v37 - 1) = v40;
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          result = *(_QWORD *)(a1 + 40);
          v42 = *(_DWORD *)(result - 4);
          *(_DWORD *)(result - 4) = v42 - 1;
          if ( v42 != 1 )
            *(_BYTE *)(result + 16LL * (unsigned int)(v42 - 2) + 8) |= 2u;
          return result;
        }
LABEL_40:
        v38 = *((_DWORD *)v26 - 1);
        if ( v38 == *((_DWORD *)v26 - 2) )
        {
          v71 = (3 * v38 + 1) >> 1;
          v72 = 8 * v71 + 8;
          if ( 8 * v38 + 8 >= (unsigned int)v72 || v38 >= v71 )
            goto LABEL_220;
          v73 = (unsigned int *)sub_186B300(v26 - 1, v72);
          v37 = v73 + 2;
          *v73 = v71;
          v74 = v73[1];
          *(_QWORD *)(a1 + 56) = v37;
          v75 = v74;
          v41 = &v37[v74];
          v40 = v75 + 1;
        }
        else
        {
          v39 = v38;
          v40 = v38 + 1;
          v41 = &v26[v39];
        }
        goto LABEL_42;
      }
    }
    else
    {
      v36 = *(_QWORD *)(a1 + 480);
      v37 = v26;
      if ( !v36 )
        goto LABEL_40;
    }
    ++*(_DWORD *)(v36 + 8);
    goto LABEL_39;
  }
  v10 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v14 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v14 >= v10 )
      break;
    if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFC0) != 0x40 )
      goto LABEL_5;
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v15 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v15 || *v15 || v15[1] != 4 )
      goto LABEL_5;
    v16 = *(__int64 **)(a1 + 56);
    v17 = *(unsigned int *)(a3 + 12);
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
        goto LABEL_207;
      v21 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
      if ( (unsigned __int64)v18 < v21 )
      {
        do
        {
          v22 = *v18;
          if ( *v18 )
          {
            v23 = *(_QWORD *)(a1 + 48);
            v24 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( v24 )
            {
              v165 = v20;
              sub_15D7BC0(v23, v22);
              v20 = v165;
            }
          }
          ++v18;
        }
        while ( (unsigned __int64)v18 < v21 );
        v16 = *(__int64 **)(a1 + 56);
        if ( !v16 )
        {
LABEL_207:
          ++*(_DWORD *)(v20 + 8);
          v166 = v20;
          v152 = (_QWORD *)sub_186B270(0x18u);
          v20 = v166;
          v153 = v152;
          *v152 = 2;
          v131 = 1;
          v16 = v153 + 1;
          *(_QWORD *)(a1 + 56) = v16;
          v132 = v16;
          goto LABEL_183;
        }
      }
      *((_DWORD *)v16 - 1) = v17;
      ++*(_DWORD *)(v20 + 8);
      v129 = *((_DWORD *)v16 - 1);
      if ( v129 != *((_DWORD *)v16 - 2) )
      {
        v130 = v129;
        v131 = v129 + 1;
        v132 = &v16[v130];
        goto LABEL_183;
      }
      v154 = (3 * v129 + 1) >> 1;
      v155 = 8 * v154 + 8;
      if ( 8 * v129 + 8 >= (unsigned int)v155 || v129 >= v154 )
        goto LABEL_220;
      v167 = v20;
      v156 = (unsigned int *)sub_186B300(v16 - 1, v155);
      v20 = v167;
      v157 = v156[1];
      v16 = (__int64 *)(v156 + 2);
      *v156 = v154;
      *(_QWORD *)(a1 + 56) = v156 + 2;
      LODWORD(v156) = v157;
      v132 = &v16[v157];
      v131 = (_DWORD)v156 + 1;
LABEL_183:
      *v132 = v20;
      *((_DWORD *)v16 - 1) = v131;
      v133 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v133;
      result = sub_C6B0F0((_QWORD *)a1, v20, (v133 >> 4) & 3);
      if ( (_BYTE)result )
      {
        v134 = *(_QWORD **)(a1 + 56);
        if ( v134 )
          v135 = *((_DWORD *)v134 - 1);
        else
          v135 = 0;
        v136 = v134[v135 - 1];
        if ( v136 )
          ++*(_DWORD *)(v136 + 8);
        v137 = *(_QWORD *)(a1 + 480);
        if ( v137 )
        {
          v138 = *(_QWORD *)(a1 + 488);
          v24 = (*(_DWORD *)(v137 + 8))-- == 1;
          if ( v24 )
          {
            sub_15D7BC0(v138, v137);
            v134 = *(_QWORD **)(a1 + 56);
          }
        }
        v139 = *((_DWORD *)v134 - 1);
        v140 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 480) = v136;
        v141 = (unsigned int)(v139 - 1);
        v142 = v134[v141];
        *((_DWORD *)v134 - 1) = v141;
        if ( v142
          && (v143 = *(_DWORD *)(v142 + 8), v144 = v143 - 1, *(_DWORD *)(v142 + 8) = v143 - 1, v143 == 1)
          && (sub_15D7BC0(v140, v142), v134 = *(_QWORD **)(a1 + 56), v140 = *(_QWORD *)(a1 + 48), !v134) )
        {
          v145 = MEMORY[0xFFFFFFFFFFFFFFFC];
        }
        else
        {
          v144 = *((_DWORD *)v134 - 1);
          v145 = v144;
        }
        v146 = v134[v144 - 1];
        *((_DWORD *)v134 - 1) = v145 - 1;
        if ( !v146 || (v24 = *(_DWORD *)(v146 + 8) == 1, --*(_DWORD *)(v146 + 8), !v24) )
        {
          v147 = *(_QWORD *)(a1 + 480);
          v148 = v134;
          if ( v147 )
            goto LABEL_197;
          goto LABEL_199;
        }
        sub_15D7BC0(v140, v146);
        v147 = *(_QWORD *)(a1 + 480);
        v134 = *(_QWORD **)(a1 + 56);
        if ( v147 )
LABEL_197:
          ++*(_DWORD *)(v147 + 8);
        v148 = v134;
        if ( v134 )
        {
LABEL_199:
          v149 = *((_DWORD *)v134 - 2);
          if ( *((_DWORD *)v134 - 1) != v149 )
            goto LABEL_200;
          v158 = (3 * v149 + 1) >> 1;
          v159 = 8 * v158 + 8;
          if ( 8 * v149 + 8 < v159 && v149 < v158 )
          {
            v160 = (unsigned int *)sub_186B300(v134 - 1, v159);
            v148 = v160 + 2;
            *v160 = v158;
            *(_QWORD *)(a1 + 56) = v160 + 2;
            goto LABEL_200;
          }
LABEL_220:
          v162 = (char **)__cxa_allocate_exception(0x28u);
          sub_C63CB0(&v171, "Overflow encountered when expanding vector");
          *v162 = (char *)off_1C63128;
          sub_2333C0(v162 + 1, &v171);
          sub_233E40((__int64)&v171);
          __cxa_throw(v162, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v161 = (_QWORD *)sub_186B270(0x18u);
        *v161 = 2;
        v148 = v161 + 1;
        *(_QWORD *)(a1 + 56) = v161 + 1;
LABEL_200:
        v150 = *((_DWORD *)v148 - 1);
        v148[v150] = v147;
        *((_DWORD *)v148 - 1) = v150 + 1;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v151 = *(_QWORD *)(a1 + 40);
        result = *(unsigned int *)(v151 - 4);
        *(_DWORD *)(v151 - 4) = result - 1;
        if ( (_DWORD)result != 1 )
        {
          result = 16LL * (unsigned int)(result - 2);
          *(_BYTE *)(v151 + result + 8) |= 2u;
        }
      }
      goto LABEL_152;
    }
LABEL_5:
    v11 = *(_QWORD *)(a2 + 8LL * v14 + 32);
    v12 = ((v14 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v12;
    result = sub_C6B0F0((_QWORD *)a1, v11, ((unsigned __int8)v12 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v76 = *(_QWORD *)(a1 + 56);
  v77 = *(_QWORD *)(a2 + 16);
  if ( v76 )
    v78 = *(_DWORD *)(v76 - 4);
  else
    v78 = 0;
  v79 = *(unsigned int *)(a3 + 12);
  v80 = v78 - v79;
  v81 = (__int64 *)(v76 + 8 * v79);
  if ( v80 == 2 )
  {
    v82 = *(int **)(v77 + 24);
    if ( v82 )
    {
      v83 = *v82;
      a6 = *(_QWORD **)(a1 + 144);
      a5 = (__int64 *)(a1 + 480);
      if ( *v82 )
      {
LABEL_96:
        if ( v83 == 5 && (unsigned int)(v82[1] - 2) <= 3 )
          goto LABEL_98;
      }
      else if ( v82[1] == 2 )
      {
        if ( (v115 = *v81, !*(_WORD *)(*v81 + 4))
          && (v116 = *(_DWORD **)(*(_QWORD *)(v115 + 16) + 24LL)) != nullptr
          && *v116 == 5
          || (v117 = v81[1], !*(_WORD *)(v117 + 4))
          && (v118 = *(_DWORD **)(*(_QWORD *)(v117 + 16) + 24LL)) != nullptr
          && *v118 == 5 )
        {
          v168 = a1 + 480;
          v164 = *(_QWORD **)(a1 + 144);
          v119 = sub_15D2CB0(*a6, v115);
          a6 = v164;
          a5 = (__int64 *)(a1 + 480);
          if ( v119 )
          {
            v82 = *(int **)(v77 + 24);
            if ( v82 )
            {
              v83 = *v82;
              goto LABEL_96;
            }
          }
          else
          {
LABEL_98:
            if ( (unsigned int)sub_C66640((__int64)a6, v77, *v81, v81[1], a5) != 5 )
            {
              v84 = *(_QWORD **)(a1 + 56);
              if ( !v84 )
                goto LABEL_173;
              v85 = *(_DWORD *)(a3 + 12);
              v86 = (unsigned __int64)&v84[*((unsigned int *)v84 - 1)];
              v87 = &v84[v85];
              if ( (unsigned __int64)v87 >= v86 )
                goto LABEL_144;
              do
              {
                v88 = *v87;
                if ( *v87 )
                {
                  v89 = *(_QWORD *)(a1 + 48);
                  v24 = (*(_DWORD *)(v88 + 8))-- == 1;
                  if ( v24 )
                    sub_15D7BC0(v89, v88);
                }
                ++v87;
              }
              while ( (unsigned __int64)v87 < v86 );
              v84 = *(_QWORD **)(a1 + 56);
              if ( v84 )
              {
LABEL_144:
                v108 = *(_QWORD *)(a1 + 480);
                *((_DWORD *)v84 - 1) = v85;
                if ( v108 )
                {
                  ++*(_DWORD *)(v108 + 8);
                  v85 = *((_DWORD *)v84 - 1);
                }
                if ( *((_DWORD *)v84 - 2) == v85 )
                {
                  v124 = (3 * v85 + 1) >> 1;
                  v125 = 8 * v124 + 8;
                  if ( 8 * v85 + 8 >= v125 || v85 >= v124 )
                    goto LABEL_220;
                  v126 = (unsigned int *)sub_186B300(v84 - 1, v125);
                  v127 = v126[1];
                  v84 = v126 + 2;
                  *v126 = v124;
                  *(_QWORD *)(a1 + 56) = v126 + 2;
                  LODWORD(v126) = v127;
                  v109 = &v84[v127];
                  v110 = (_DWORD)v126 + 1;
                }
                else
                {
                  v109 = &v84[*((unsigned int *)v84 - 1)];
                  v110 = *((_DWORD *)v84 - 1) + 1;
                }
              }
              else
              {
LABEL_173:
                v108 = *(_QWORD *)(a1 + 480);
                if ( v108 )
                  ++*(_DWORD *)(v108 + 8);
                v128 = (_QWORD *)sub_186B270(0x18u);
                *v128 = 2;
                v110 = 1;
                v84 = v128 + 1;
                *(_QWORD *)(a1 + 56) = v84;
                v109 = v84;
              }
              *v109 = v108;
              *((_DWORD *)v84 - 1) = v110;
              if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
                sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
              result = *(_QWORD *)(a1 + 40);
              v111 = *(_DWORD *)(result - 4);
              *(_DWORD *)(result - 4) = v111 - 1;
              if ( v111 != 1 )
                *(_BYTE *)(result + 16LL * (unsigned int)(v111 - 2) + 8) |= 2u;
LABEL_152:
              v112 = *(_QWORD *)(a1 + 480);
              if ( v112 )
              {
                v113 = *(_QWORD *)(a1 + 488);
                v24 = (*(_DWORD *)(v112 + 8))-- == 1;
                if ( v24 )
                  result = sub_15D7BC0(v113, v112);
              }
              goto LABEL_123;
            }
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
  {
    v101 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(a2 + 8);
    if ( v101 )
    {
      v102 = *(_QWORD *)(a1 + 488);
      v24 = (*(_DWORD *)(v101 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v102, v101);
    }
    v94 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    v91 = a2;
    if ( !v94 )
      goto LABEL_113;
    goto LABEL_130;
  }
  v90 = sub_15DC610(
          *(_QWORD *)(a1 + 8),
          v77,
          v80,
          (int)v81,
          (int)a5,
          (int)a6,
          (int)v164,
          v168,
          v169,
          v170,
          v171,
          v172,
          v173,
          v174,
          v175,
          v176);
  v91 = v90;
  if ( v90 )
  {
    v92 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(v90 + 8);
    if ( v92 )
      goto LABEL_109;
    v94 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = v90;
    if ( !v94 )
    {
LABEL_113:
      ++*(_DWORD *)(v91 + 8);
      goto LABEL_114;
    }
LABEL_130:
    v103 = *(_DWORD *)(a3 + 12);
    v104 = (unsigned __int64)&v94[*((unsigned int *)v94 - 1)];
    v105 = &v94[v103];
    if ( (unsigned __int64)v105 >= v104 )
      goto LABEL_139;
    do
    {
      v106 = *v105;
      if ( *v105 )
      {
        v107 = *(_QWORD *)(a1 + 48);
        v24 = (*(_DWORD *)(v106 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v107, v106);
      }
      ++v105;
    }
    while ( (unsigned __int64)v105 < v104 );
    v94 = *(_QWORD **)(a1 + 56);
    if ( v94 )
    {
LABEL_139:
      v91 = *(_QWORD *)(a1 + 480);
      *((_DWORD *)v94 - 1) = v103;
      if ( v91 )
      {
        ++*(_DWORD *)(v91 + 8);
        v103 = *((_DWORD *)v94 - 1);
      }
      if ( *((_DWORD *)v94 - 2) == v103 )
      {
        v120 = (3 * v103 + 1) >> 1;
        v121 = 8 * v120 + 8;
        if ( 8 * v103 + 8 >= v121 || v103 >= v120 )
          goto LABEL_220;
        v122 = (unsigned int *)sub_186B300(v94 - 1, v121);
        v123 = v122[1];
        v94 = v122 + 2;
        *v122 = v120;
        *(_QWORD *)(a1 + 56) = v122 + 2;
        LODWORD(v122) = v123;
        v97 = &v94[v123];
        v96 = (_DWORD)v122 + 1;
      }
      else
      {
        v97 = &v94[*((unsigned int *)v94 - 1)];
        v96 = *((_DWORD *)v94 - 1) + 1;
      }
      goto LABEL_115;
    }
    v91 = *(_QWORD *)(a1 + 480);
LABEL_112:
    if ( v91 )
      goto LABEL_113;
  }
  else
  {
    v92 = *(_QWORD *)(a1 + 480);
    if ( v92 )
    {
LABEL_109:
      v93 = *(_QWORD *)(a1 + 488);
      v24 = (*(_DWORD *)(v92 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v93, v92);
      v94 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = v91;
      if ( v94 )
        goto LABEL_130;
      goto LABEL_112;
    }
    v94 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = 0;
    if ( v94 )
      goto LABEL_130;
  }
  v91 = 0;
LABEL_114:
  v95 = (_QWORD *)sub_186B270(0x18u);
  *v95 = 2;
  v96 = 1;
  v94 = v95 + 1;
  *(_QWORD *)(a1 + 56) = v94;
  v97 = v94;
LABEL_115:
  *v97 = v91;
  v98 = *(_QWORD *)(a1 + 480);
  *((_DWORD *)v94 - 1) = v96;
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v98);
    v98 = *(_QWORD *)(a1 + 480);
  }
  result = *(_QWORD *)(a1 + 40);
  v99 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v99 - 1;
  if ( a2 != v98 && v99 != 1 )
  {
    *(_BYTE *)(result + 16LL * (unsigned int)(v99 - 2) + 8) |= 2u;
    v98 = *(_QWORD *)(a1 + 480);
  }
  if ( v98 )
  {
    v100 = *(_QWORD *)(a1 + 488);
    v24 = (*(_DWORD *)(v98 + 8))-- == 1;
    if ( v24 )
      result = sub_15D7BC0(v100, v98);
  }
LABEL_123:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

