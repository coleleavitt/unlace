__int64 __fastcall sub_D4D520(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // ebp
  __int64 v8; // rsi
  int v9; // edx
  __int64 result; // rax
  unsigned int v11; // eax
  _DWORD *v12; // rdx
  __int64 *v13; // rdx
  __int64 v14; // r15
  __int64 *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // ecx
  __int64 v28; // rdi
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rbp
  _QWORD *v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rsi
  int v37; // edx
  _QWORD *v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  unsigned int v41; // r14d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rbp
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdi
  _QWORD *v52; // rdx
  unsigned int v53; // r15d
  unsigned __int64 v54; // r14
  __int64 *v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // rdi
  _QWORD *v58; // rcx
  int v59; // eax
  int v60; // ecx
  __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v63; // rax
  unsigned int v64; // r14d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r14d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rax
  int v72; // edx
  __int64 v73; // rdx
  __int64 v74; // r14
  int v75; // ebp
  int v76; // eax
  int v77; // ebp
  int v78; // r15d
  int v79; // r8d
  int v80; // r9d
  __int64 v81; // rax
  __int64 v82; // rbp
  __int64 v83; // rsi
  __int64 v84; // rdi
  _QWORD *v85; // rdx
  unsigned int v86; // r15d
  unsigned __int64 v87; // r14
  __int64 *v88; // rbp
  __int64 v89; // rsi
  __int64 v90; // rdi
  _QWORD *v91; // rdx
  unsigned int v92; // r15d
  unsigned __int64 v93; // r14
  __int64 *v94; // rbp
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 *v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  int v100; // esi
  __int64 v101; // rdi
  __int64 v102; // rbp
  _QWORD *v103; // rcx
  int v104; // eax
  int v105; // ecx
  __int64 v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rdi
  _QWORD *v110; // rdx
  _QWORD *v111; // rax
  unsigned int v112; // r14d
  unsigned int v113; // eax
  unsigned int *v114; // rax
  __int64 v115; // rcx
  unsigned int v116; // r14d
  unsigned int v117; // eax
  unsigned int *v118; // rax
  __int64 v119; // rcx
  _QWORD *v120; // rdx
  unsigned int v121; // eax
  __int64 v122; // rsi
  int v123; // eax
  __int64 *v124; // rsi
  unsigned __int8 v125; // al
  _QWORD *v126; // rax
  int v127; // edx
  __int64 v128; // rbp
  __int64 v129; // rsi
  __int64 v130; // rdi
  int v131; // edx
  __int64 v132; // rdi
  __int64 v133; // rcx
  __int64 v134; // rsi
  int v135; // ecx
  int v136; // ebp
  int v137; // edx
  __int64 v138; // rsi
  __int64 v139; // r14
  _QWORD *v140; // rdx
  unsigned int v141; // ecx
  int v142; // eax
  __int64 v143; // rdx
  _QWORD *v144; // rax
  _QWORD *v145; // rdx
  unsigned int v146; // ebp
  size_t v147; // rsi
  unsigned int *v148; // rax
  __int64 v149; // rsi
  unsigned int v150; // ebp
  unsigned int v151; // edx
  unsigned int *v152; // rax
  _QWORD *v153; // rax
  char **v154; // rbp
  char **exception; // rbp
  int v156; // [rsp+0h] [rbp-78h]
  int v157; // [rsp+8h] [rbp-70h]
  __int64 v158; // [rsp+8h] [rbp-70h]
  __int64 v159; // [rsp+8h] [rbp-70h]
  __int64 v160; // [rsp+8h] [rbp-70h]
  __int64 v161; // [rsp+10h] [rbp-68h] BYREF
  __int64 v162; // [rsp+18h] [rbp-60h]
  __int64 v163; // [rsp+20h] [rbp-58h] BYREF
  char v164; // [rsp+28h] [rbp-50h]
  int v165; // [rsp+30h] [rbp-48h]
  int v166; // [rsp+38h] [rbp-40h]
  int v167; // [rsp+40h] [rbp-38h]
  void *v168; // [rsp+48h] [rbp-30h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v40 = *(_QWORD *)(a1 + 8);
    v41 = *(_DWORD *)(a2 + 24);
    v161 = 0;
    v162 = v40;
    v42 = *(_QWORD *)(a1 + 160);
    if ( v42 )
      *(_DWORD *)(v42 - 4) -= v41;
    v43 = *(_QWORD *)(a1 + 528);
    if ( v43 )
      *(_DWORD *)(v43 - 4) -= v41;
    *(_DWORD *)(a1 + 128) -= v41;
    sub_15844D0(a1);
    v44 = 0x7FFFFFFF8LL;
    v45 = *(_QWORD *)(a1 + 56);
    if ( v45 )
      v44 = 8LL * (unsigned int)(*(_DWORD *)(v45 - 4) - 1);
    v46 = *(_QWORD *)(v45 + v44);
    if ( v46 )
      ++*(_DWORD *)(v46 + 8);
    v47 = *(_QWORD *)(a1 + 480);
    if ( v47 )
    {
      v48 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v47 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v48, v47);
    }
    v21 = *(_WORD *)(v46 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v46;
    if ( v21 && (*(_BYTE *)(v46 + 30) & 1) != 0 )
    {
      v52 = *(_QWORD **)(a1 + 56);
      if ( !v52 )
      {
LABEL_83:
        ++*(_DWORD *)(v46 + 8);
LABEL_84:
        v63 = (_QWORD *)sub_186B270(0x18u);
        v52 = v63 + 1;
        *v63 = 2;
        v59 = 1;
        *(_QWORD *)(a1 + 56) = v52;
        v58 = v52;
LABEL_74:
        *v58 = v46;
        *((_DWORD *)v52 - 1) = v59;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        result = *(_QWORD *)(a1 + 40);
        v60 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v60 - 1;
        if ( v60 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v60 - 2) + 8) |= 2u;
        v61 = v161;
        if ( v161 )
        {
          v62 = v162;
          v21 = (*(_DWORD *)(v161 + 8))-- == 1;
          if ( v21 )
            return sub_15D7BC0(v62, v61);
        }
        return result;
      }
    }
    else
    {
      sub_1585DF0(a1 + 328, v46, v41, &v161);
      v50 = v161;
      v161 = *(_QWORD *)(a1 + 480);
      v49 = v161;
      *(_QWORD *)(a1 + 480) = v50;
      if ( v49 )
      {
        v51 = v162;
        v21 = (*(_DWORD *)(v49 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v51, v49);
      }
      v161 = 0;
      v52 = *(_QWORD **)(a1 + 56);
      if ( !v52 )
        goto LABEL_106;
    }
    v53 = *(_DWORD *)(a3 + 12);
    v54 = (unsigned __int64)&v52[*((unsigned int *)v52 - 1)];
    v55 = &v52[v53];
    if ( (unsigned __int64)v55 >= v54 )
      goto LABEL_70;
    do
    {
      while ( 1 )
      {
        v56 = *v55;
        if ( *v55 )
        {
          v57 = *(_QWORD *)(a1 + 48);
          v21 = (*(_DWORD *)(v56 + 8))-- == 1;
          if ( v21 )
            break;
        }
        if ( (unsigned __int64)++v55 >= v54 )
          goto LABEL_69;
      }
      sub_15D7BC0(v57, v56);
      ++v55;
    }
    while ( (unsigned __int64)v55 < v54 );
LABEL_69:
    v52 = *(_QWORD **)(a1 + 56);
    if ( v52 )
    {
LABEL_70:
      v46 = *(_QWORD *)(a1 + 480);
      *((_DWORD *)v52 - 1) = v53;
      if ( v46 )
      {
        ++*(_DWORD *)(v46 + 8);
        v53 = *((_DWORD *)v52 - 1);
      }
      if ( *((_DWORD *)v52 - 2) == v53 )
      {
        v64 = (3 * v53 + 1) >> 1;
        v65 = 8 * v64 + 8;
        if ( 8 * v53 + 8 >= (unsigned int)v65 || v53 >= v64 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_D47290(&v163, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v163);
          sub_233E40((__int64)&v163);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v66 = (unsigned int *)sub_186B300(v52 - 1, v65);
        v67 = v66[1];
        v52 = v66 + 2;
        *v66 = v64;
        *(_QWORD *)(a1 + 56) = v66 + 2;
        LODWORD(v66) = v67;
        v58 = &v52[v67];
        v59 = (_DWORD)v66 + 1;
      }
      else
      {
        v58 = &v52[*((unsigned int *)v52 - 1)];
        v59 = *((_DWORD *)v52 - 1) + 1;
      }
      goto LABEL_74;
    }
LABEL_106:
    v46 = *(_QWORD *)(a1 + 480);
    if ( !v46 )
      goto LABEL_84;
    goto LABEL_83;
  }
  if ( v6 == 3 )
  {
    sub_1872CE0("");
    sub_1873130(107, 520);
  }
  if ( v6 )
  {
    v22 = 0xFFFFFFFFLL;
    v23 = *(_QWORD **)(a1 + 56);
    if ( v23 )
      v22 = (unsigned int)(*((_DWORD *)v23 - 1) - 1);
    v24 = v23[v22];
    if ( v24 )
      ++*(_DWORD *)(v24 + 8);
    v25 = *(_QWORD *)(a1 + 480);
    if ( v25 )
    {
      v26 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v26, v25);
        v23 = *(_QWORD **)(a1 + 56);
      }
    }
    v27 = *((_DWORD *)v23 - 1);
    v28 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v24;
    v29 = v27 - 1;
    v30 = v23[v27 - 1];
    *((_DWORD *)v23 - 1) = v27 - 1;
    if ( v30 )
    {
      v21 = (*(_DWORD *)(v30 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v28, v30);
        v23 = *(_QWORD **)(a1 + 56);
        v28 = *(_QWORD *)(a1 + 48);
      }
      v29 = *((_DWORD *)v23 - 1);
    }
    v31 = (unsigned int)(v29 - 1);
    v32 = v23[v31];
    *((_DWORD *)v23 - 1) = v31;
    if ( v32 && (v21 = *(_DWORD *)(v32 + 8) == 1, --*(_DWORD *)(v32 + 8), v21) )
    {
      sub_15D7BC0(v28, v32);
      v33 = *(_QWORD *)(a1 + 480);
      v23 = *(_QWORD **)(a1 + 56);
      if ( !v33 )
      {
LABEL_39:
        v34 = v23;
        if ( !v23 )
        {
          v111 = (_QWORD *)sub_186B270(0x18u);
          v37 = 1;
          v34 = v111 + 1;
          *v111 = 2;
          *(_QWORD *)(a1 + 56) = v111 + 1;
          v38 = v111 + 1;
LABEL_42:
          *v38 = v33;
          *((_DWORD *)v34 - 1) = v37;
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          result = *(_QWORD *)(a1 + 40);
          v39 = *(_DWORD *)(result - 4);
          *(_DWORD *)(result - 4) = v39 - 1;
          if ( v39 != 1 )
            *(_BYTE *)(result + 16LL * (unsigned int)(v39 - 2) + 8) |= 2u;
          return result;
        }
LABEL_40:
        v35 = *((_DWORD *)v23 - 1);
        if ( v35 == *((_DWORD *)v23 - 2) )
        {
          v68 = (3 * v35 + 1) >> 1;
          v69 = 8 * v68 + 8;
          if ( 8 * v35 + 8 >= (unsigned int)v69 || v35 >= v68 )
            goto LABEL_206;
          v70 = (unsigned int *)sub_186B300(v23 - 1, v69);
          v34 = v70 + 2;
          *v70 = v68;
          v71 = v70[1];
          *(_QWORD *)(a1 + 56) = v34;
          v72 = v71;
          v38 = &v34[v71];
          v37 = v72 + 1;
        }
        else
        {
          v36 = v35;
          v37 = v35 + 1;
          v38 = &v23[v36];
        }
        goto LABEL_42;
      }
    }
    else
    {
      v33 = *(_QWORD *)(a1 + 480);
      v34 = v23;
      if ( !v33 )
        goto LABEL_40;
    }
    ++*(_DWORD *)(v33 + 8);
    goto LABEL_39;
  }
  v7 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v11 = *(_DWORD *)(a3 + 8) >> 6;
    if ( v11 >= v7 )
      break;
    if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFC0) != 0x40 )
      goto LABEL_5;
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_5;
    v12 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v12 || *v12 || v12[1] != 4 )
      goto LABEL_5;
    v13 = *(__int64 **)(a1 + 56);
    v14 = *(unsigned int *)(a3 + 12);
    v15 = &v13[v14];
    v16 = *(_QWORD *)(a1 + 8);
    if ( *v15 == *(_QWORD *)(v16 + 856) )
    {
      v17 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      if ( *v15 != *(_QWORD *)(v16 + 864) )
        goto LABEL_5;
      v17 = *(_QWORD *)(a2 + 48);
    }
    if ( v17 )
    {
      if ( !v13 )
        goto LABEL_193;
      v18 = (unsigned __int64)&v13[*((unsigned int *)v13 - 1)];
      if ( (unsigned __int64)v15 < v18 )
      {
        do
        {
          v19 = *v15;
          if ( *v15 )
          {
            v20 = *(_QWORD *)(a1 + 48);
            v21 = (*(_DWORD *)(v19 + 8))-- == 1;
            if ( v21 )
            {
              v158 = v17;
              sub_15D7BC0(v20, v19);
              v17 = v158;
            }
          }
          ++v15;
        }
        while ( (unsigned __int64)v15 < v18 );
        v13 = *(__int64 **)(a1 + 56);
        if ( !v13 )
        {
LABEL_193:
          ++*(_DWORD *)(v17 + 8);
          v159 = v17;
          v144 = (_QWORD *)sub_186B270(0x18u);
          v17 = v159;
          v145 = v144;
          *v144 = 2;
          v123 = 1;
          v13 = v145 + 1;
          *(_QWORD *)(a1 + 56) = v13;
          v124 = v13;
          goto LABEL_169;
        }
      }
      *((_DWORD *)v13 - 1) = v14;
      ++*(_DWORD *)(v17 + 8);
      v121 = *((_DWORD *)v13 - 1);
      if ( v121 != *((_DWORD *)v13 - 2) )
      {
        v122 = v121;
        v123 = v121 + 1;
        v124 = &v13[v122];
        goto LABEL_169;
      }
      v146 = (3 * v121 + 1) >> 1;
      v147 = 8 * v146 + 8;
      if ( 8 * v121 + 8 >= (unsigned int)v147 || v121 >= v146 )
        goto LABEL_206;
      v160 = v17;
      v148 = (unsigned int *)sub_186B300(v13 - 1, v147);
      v17 = v160;
      v149 = v148[1];
      v13 = (__int64 *)(v148 + 2);
      *v148 = v146;
      *(_QWORD *)(a1 + 56) = v148 + 2;
      LODWORD(v148) = v149;
      v124 = &v13[v149];
      v123 = (_DWORD)v148 + 1;
LABEL_169:
      *v124 = v17;
      *((_DWORD *)v13 - 1) = v123;
      v125 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v125;
      result = sub_D4CD90((_QWORD *)a1, v17, (v125 >> 4) & 3);
      if ( (_BYTE)result )
      {
        v126 = *(_QWORD **)(a1 + 56);
        if ( v126 )
          v127 = *((_DWORD *)v126 - 1);
        else
          v127 = 0;
        v128 = v126[v127 - 1];
        if ( v128 )
          ++*(_DWORD *)(v128 + 8);
        v129 = *(_QWORD *)(a1 + 480);
        if ( v129 )
        {
          v130 = *(_QWORD *)(a1 + 488);
          v21 = (*(_DWORD *)(v129 + 8))-- == 1;
          if ( v21 )
          {
            sub_15D7BC0(v130, v129);
            v126 = *(_QWORD **)(a1 + 56);
          }
        }
        v131 = *((_DWORD *)v126 - 1);
        v132 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 480) = v128;
        v133 = (unsigned int)(v131 - 1);
        v134 = v126[v133];
        *((_DWORD *)v126 - 1) = v133;
        if ( v134
          && (v135 = *(_DWORD *)(v134 + 8), v136 = v135 - 1, *(_DWORD *)(v134 + 8) = v135 - 1, v135 == 1)
          && (sub_15D7BC0(v132, v134), v126 = *(_QWORD **)(a1 + 56), v132 = *(_QWORD *)(a1 + 48), !v126) )
        {
          v137 = MEMORY[0xFFFFFFFFFFFFFFFC];
        }
        else
        {
          v136 = *((_DWORD *)v126 - 1);
          v137 = v136;
        }
        v138 = v126[v136 - 1];
        *((_DWORD *)v126 - 1) = v137 - 1;
        if ( !v138 || (v21 = *(_DWORD *)(v138 + 8) == 1, --*(_DWORD *)(v138 + 8), !v21) )
        {
          v139 = *(_QWORD *)(a1 + 480);
          v140 = v126;
          if ( v139 )
            goto LABEL_183;
          goto LABEL_185;
        }
        sub_15D7BC0(v132, v138);
        v139 = *(_QWORD *)(a1 + 480);
        v126 = *(_QWORD **)(a1 + 56);
        if ( v139 )
LABEL_183:
          ++*(_DWORD *)(v139 + 8);
        v140 = v126;
        if ( v126 )
        {
LABEL_185:
          v141 = *((_DWORD *)v126 - 2);
          if ( *((_DWORD *)v126 - 1) != v141 )
            goto LABEL_186;
          v150 = (3 * v141 + 1) >> 1;
          v151 = 8 * v150 + 8;
          if ( 8 * v141 + 8 < v151 && v141 < v150 )
          {
            v152 = (unsigned int *)sub_186B300(v126 - 1, v151);
            v140 = v152 + 2;
            *v152 = v150;
            *(_QWORD *)(a1 + 56) = v152 + 2;
            goto LABEL_186;
          }
LABEL_206:
          v154 = (char **)__cxa_allocate_exception(0x28u);
          sub_D47290(&v163, "Overflow encountered when expanding vector");
          *v154 = (char *)off_1C63128;
          sub_2333C0(v154 + 1, &v163);
          sub_233E40((__int64)&v163);
          __cxa_throw(v154, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v153 = (_QWORD *)sub_186B270(0x18u);
        *v153 = 2;
        v140 = v153 + 1;
        *(_QWORD *)(a1 + 56) = v153 + 1;
LABEL_186:
        v142 = *((_DWORD *)v140 - 1);
        v140[v142] = v139;
        *((_DWORD *)v140 - 1) = v142 + 1;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v143 = *(_QWORD *)(a1 + 40);
        result = *(unsigned int *)(v143 - 4);
        *(_DWORD *)(v143 - 4) = result - 1;
        if ( (_DWORD)result != 1 )
        {
          result = 16LL * (unsigned int)(result - 2);
          *(_BYTE *)(v143 + result + 8) |= 2u;
        }
      }
      goto LABEL_140;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_D4CD90((_QWORD *)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v73 = *(_QWORD *)(a1 + 56);
  v74 = *(_QWORD *)(a2 + 16);
  if ( v73 )
    v75 = *(_DWORD *)(v73 - 4);
  else
    v75 = 0;
  v76 = *(_DWORD *)(a3 + 12);
  v77 = v75 - v76;
  v78 = v73 + 8 * v76;
  if ( (unsigned int)sub_D48360(*(_QWORD *)(a1 + 144), *(_QWORD *)(a2 + 16), v77, v78, (_QWORD *)(a1 + 480), a1 + 512) != 5 )
  {
    v91 = *(_QWORD **)(a1 + 56);
    if ( !v91 )
      goto LABEL_157;
    v92 = *(_DWORD *)(a3 + 12);
    v93 = (unsigned __int64)&v91[*((unsigned int *)v91 - 1)];
    v94 = &v91[v92];
    if ( (unsigned __int64)v94 >= v93 )
      goto LABEL_132;
    do
    {
      v95 = *v94;
      if ( *v94 )
      {
        v96 = *(_QWORD *)(a1 + 48);
        v21 = (*(_DWORD *)(v95 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v96, v95);
      }
      ++v94;
    }
    while ( (unsigned __int64)v94 < v93 );
    v91 = *(_QWORD **)(a1 + 56);
    if ( v91 )
    {
LABEL_132:
      v102 = *(_QWORD *)(a1 + 480);
      *((_DWORD *)v91 - 1) = v92;
      if ( v102 )
      {
        ++*(_DWORD *)(v102 + 8);
        v92 = *((_DWORD *)v91 - 1);
      }
      if ( *((_DWORD *)v91 - 2) == v92 )
      {
        v116 = (3 * v92 + 1) >> 1;
        v117 = 8 * v116 + 8;
        if ( 8 * v92 + 8 >= v117 || v92 >= v116 )
          goto LABEL_206;
        v118 = (unsigned int *)sub_186B300(v91 - 1, v117);
        v119 = v118[1];
        v91 = v118 + 2;
        *v118 = v116;
        *(_QWORD *)(a1 + 56) = v118 + 2;
        LODWORD(v118) = v119;
        v103 = &v91[v119];
        v104 = (_DWORD)v118 + 1;
      }
      else
      {
        v103 = &v91[*((unsigned int *)v91 - 1)];
        v104 = *((_DWORD *)v91 - 1) + 1;
      }
    }
    else
    {
LABEL_157:
      v102 = *(_QWORD *)(a1 + 480);
      if ( v102 )
        ++*(_DWORD *)(v102 + 8);
      v120 = (_QWORD *)sub_186B270(0x18u);
      *v120 = 2;
      v104 = 1;
      v91 = v120 + 1;
      *(_QWORD *)(a1 + 56) = v91;
      v103 = v91;
    }
    *v103 = v102;
    *((_DWORD *)v91 - 1) = v104;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    result = *(_QWORD *)(a1 + 40);
    v105 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v105 - 1;
    if ( v105 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v105 - 2) + 8) |= 2u;
LABEL_140:
    v106 = *(_QWORD *)(a1 + 480);
    if ( v106 )
    {
      v107 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v106 + 8))-- == 1;
      if ( v21 )
        result = sub_15D7BC0(v107, v106);
    }
    goto LABEL_130;
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
  {
    v108 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(a2 + 8);
    if ( v108 )
    {
      v109 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v108 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v109, v108);
    }
    v85 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    v82 = a2;
    if ( !v85 )
      goto LABEL_147;
    goto LABEL_100;
  }
  v81 = sub_15DC610(
          *(_QWORD *)(a1 + 8),
          v74,
          v77,
          v78,
          v79,
          v80,
          v156,
          v157,
          v161,
          v162,
          v163,
          v164,
          v165,
          v166,
          v167,
          v168);
  v82 = v81;
  if ( v81 )
  {
    v83 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(v81 + 8);
    if ( v83 )
      goto LABEL_97;
    v85 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = v81;
    if ( !v85 )
    {
LABEL_147:
      ++*(_DWORD *)(v82 + 8);
      goto LABEL_148;
    }
LABEL_100:
    v86 = *(_DWORD *)(a3 + 12);
    v87 = (unsigned __int64)&v85[*((unsigned int *)v85 - 1)];
    v88 = &v85[v86];
    if ( (unsigned __int64)v88 >= v87 )
      goto LABEL_118;
    do
    {
      v89 = *v88;
      if ( *v88 )
      {
        v90 = *(_QWORD *)(a1 + 48);
        v21 = (*(_DWORD *)(v89 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v90, v89);
      }
      ++v88;
    }
    while ( (unsigned __int64)v88 < v87 );
    v85 = *(_QWORD **)(a1 + 56);
    if ( v85 )
    {
LABEL_118:
      v82 = *(_QWORD *)(a1 + 480);
      *((_DWORD *)v85 - 1) = v86;
      if ( v82 )
      {
        ++*(_DWORD *)(v82 + 8);
        v86 = *((_DWORD *)v85 - 1);
      }
      if ( *((_DWORD *)v85 - 2) == v86 )
      {
        v112 = (3 * v86 + 1) >> 1;
        v113 = 8 * v112 + 8;
        if ( 8 * v86 + 8 >= v113 || v86 >= v112 )
          goto LABEL_206;
        v114 = (unsigned int *)sub_186B300(v85 - 1, v113);
        v115 = v114[1];
        v85 = v114 + 2;
        *v114 = v112;
        *(_QWORD *)(a1 + 56) = v114 + 2;
        LODWORD(v114) = v115;
        v97 = &v85[v115];
        v98 = (_DWORD)v114 + 1;
      }
      else
      {
        v97 = &v85[*((unsigned int *)v85 - 1)];
        v98 = *((_DWORD *)v85 - 1) + 1;
      }
      goto LABEL_122;
    }
    v82 = *(_QWORD *)(a1 + 480);
LABEL_162:
    if ( v82 )
      goto LABEL_147;
    v82 = 0;
  }
  else
  {
    v83 = *(_QWORD *)(a1 + 480);
    if ( v83 )
    {
LABEL_97:
      v84 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v83 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v84, v83);
      v85 = *(_QWORD **)(a1 + 56);
      *(_QWORD *)(a1 + 480) = v82;
      if ( v85 )
        goto LABEL_100;
      goto LABEL_162;
    }
    v85 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = 0;
    if ( v85 )
      goto LABEL_100;
    v82 = 0;
  }
LABEL_148:
  v110 = (_QWORD *)sub_186B270(0x18u);
  *v110 = 2;
  v98 = 1;
  v85 = v110 + 1;
  *(_QWORD *)(a1 + 56) = v85;
  v97 = v85;
LABEL_122:
  *v97 = v82;
  v99 = *(_QWORD *)(a1 + 480);
  *((_DWORD *)v85 - 1) = v98;
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
  {
    sub_1584390(a1, a2, 0, v99);
    v99 = *(_QWORD *)(a1 + 480);
  }
  result = *(_QWORD *)(a1 + 40);
  v100 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v100 - 1;
  if ( a2 != v99 && v100 != 1 )
  {
    *(_BYTE *)(result + 16LL * (unsigned int)(v100 - 2) + 8) |= 2u;
    v99 = *(_QWORD *)(a1 + 480);
  }
  if ( v99 )
  {
    v101 = *(_QWORD *)(a1 + 488);
    v21 = (*(_DWORD *)(v99 + 8))-- == 1;
    if ( v21 )
      result = sub_15D7BC0(v101, v99);
  }
LABEL_130:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

