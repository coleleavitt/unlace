__int64 __fastcall sub_775B00(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // r12d
  __int64 v8; // rsi
  int v9; // edx
  __int64 result; // rax
  unsigned int v11; // eax
  _DWORD *v12; // rdx
  __int64 *v13; // rdx
  __int64 v14; // r14
  __int64 *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  bool v21; // zf
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // ecx
  __int64 v28; // rdi
  int v29; // edx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // r12
  _QWORD *v34; // rcx
  unsigned int v35; // edx
  __int64 v36; // rsi
  int v37; // edx
  _QWORD *v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  unsigned int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdi
  _QWORD *v52; // rdx
  unsigned int v53; // r14d
  unsigned __int64 v54; // r13
  __int64 *v55; // r12
  __int64 v56; // rsi
  __int64 v57; // rdi
  _QWORD *v58; // rcx
  int v59; // eax
  int v60; // ecx
  __int64 v61; // rsi
  __int64 v62; // rdi
  _QWORD *v63; // rax
  unsigned int v64; // r13d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rcx
  unsigned int v68; // r13d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rax
  int v72; // edx
  __int64 v73; // rdx
  __int64 v74; // r14
  int v75; // r13d
  __int64 v76; // rax
  unsigned int v77; // r13d
  int v78; // r8d
  int v79; // r9d
  int v80; // r12d
  __int64 v81; // rax
  __int64 v82; // r12
  __int64 v83; // rsi
  __int64 v84; // rdi
  _QWORD *v85; // rdx
  unsigned int v86; // r14d
  unsigned __int64 v87; // r13
  __int64 *v88; // r12
  __int64 v89; // rsi
  __int64 v90; // rdi
  _QWORD *v91; // rdx
  unsigned int v92; // r8d
  unsigned __int64 v93; // r14
  __int64 *v94; // r13
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 *v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  int v100; // esi
  __int64 v101; // rdi
  __int64 v102; // r13
  _QWORD *v103; // rcx
  int v104; // eax
  __int64 v105; // rsi
  int v106; // ecx
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rdi
  _QWORD *v111; // rdx
  __int64 v112; // rdx
  _QWORD *v113; // rax
  __int64 v114; // r12
  int v115; // ecx
  __int64 v116; // rdi
  int v117; // edx
  __int64 v118; // rsi
  __int64 v119; // rcx
  __int64 v120; // rsi
  __int64 v121; // r12
  _QWORD *v122; // rcx
  unsigned int v123; // edx
  __int64 v124; // rsi
  int v125; // edx
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  unsigned int v128; // r13d
  unsigned int v129; // eax
  unsigned int *v130; // rax
  __int64 v131; // rcx
  unsigned int v132; // r14d
  unsigned int v133; // eax
  unsigned int *v134; // rax
  __int64 v135; // rcx
  _QWORD *v136; // rdx
  unsigned int v137; // r13d
  unsigned int v138; // ecx
  unsigned int *v139; // rax
  __int64 v140; // rax
  int v141; // edx
  unsigned int v142; // eax
  __int64 v143; // rcx
  int v144; // eax
  __int64 *v145; // rcx
  unsigned __int8 v146; // al
  _QWORD *v147; // rax
  int v148; // edx
  __int64 v149; // r12
  __int64 v150; // rsi
  __int64 v151; // rdi
  int v152; // edx
  __int64 v153; // rdi
  __int64 v154; // rcx
  __int64 v155; // rsi
  int v156; // ecx
  int v157; // r12d
  int v158; // edx
  __int64 v159; // rsi
  __int64 v160; // r13
  _QWORD *v161; // rdx
  unsigned int v162; // ecx
  int v163; // eax
  __int64 v164; // rdx
  _QWORD *v165; // rax
  _QWORD *v166; // rdx
  unsigned int v167; // r12d
  unsigned int v168; // ecx
  unsigned int *v169; // rax
  __int64 v170; // rcx
  _QWORD *v171; // rax
  unsigned int v172; // r12d
  unsigned int v173; // edx
  unsigned int *v174; // rax
  _QWORD *v175; // rax
  char **v176; // rbp
  char **exception; // rbp
  int v178; // [rsp+0h] [rbp-78h]
  int v179[2]; // [rsp+8h] [rbp-70h]
  _QWORD *v180; // [rsp+8h] [rbp-70h]
  unsigned int v181; // [rsp+8h] [rbp-70h]
  int v182[2]; // [rsp+8h] [rbp-70h]
  int v183[2]; // [rsp+8h] [rbp-70h]
  __int64 v184; // [rsp+10h] [rbp-68h] BYREF
  __int64 v185; // [rsp+18h] [rbp-60h]
  __int64 v186; // [rsp+20h] [rbp-58h] BYREF
  char v187; // [rsp+28h] [rbp-50h]
  int v188; // [rsp+30h] [rbp-48h]
  int v189; // [rsp+38h] [rbp-40h]
  int v190; // [rsp+40h] [rbp-38h]
  void *v191; // [rsp+48h] [rbp-30h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v40 = *(_QWORD *)(a1 + 8);
    v41 = *(_DWORD *)(a2 + 24);
    v184 = 0;
    v185 = v40;
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
        v61 = v184;
        if ( v184 )
        {
          v62 = v185;
          v21 = (*(_DWORD *)(v184 + 8))-- == 1;
          if ( v21 )
            return sub_15D7BC0(v62, v61);
        }
        return result;
      }
    }
    else
    {
      sub_1585DF0(a1 + 328, v46, v41, &v184);
      v50 = v184;
      v184 = *(_QWORD *)(a1 + 480);
      v49 = v184;
      *(_QWORD *)(a1 + 480) = v50;
      if ( v49 )
      {
        v51 = v185;
        v21 = (*(_DWORD *)(v49 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v51, v49);
      }
      v184 = 0;
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
          sub_76A180(&v186, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v186);
          sub_233E40((__int64)&v186);
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
          v127 = (_QWORD *)sub_186B270(0x18u);
          v37 = 1;
          v34 = v127 + 1;
          *v127 = 2;
          *(_QWORD *)(a1 + 56) = v127 + 1;
          v38 = v127 + 1;
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
            goto LABEL_237;
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
        goto LABEL_219;
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
              *(_QWORD *)v179 = v17;
              sub_15D7BC0(v20, v19);
              v17 = *(_QWORD *)v179;
            }
          }
          ++v15;
        }
        while ( (unsigned __int64)v15 < v18 );
        v13 = *(__int64 **)(a1 + 56);
        if ( !v13 )
        {
LABEL_219:
          ++*(_DWORD *)(v17 + 8);
          *(_QWORD *)v182 = v17;
          v165 = (_QWORD *)sub_186B270(0x18u);
          v17 = *(_QWORD *)v182;
          v166 = v165;
          *v165 = 2;
          v144 = 1;
          v13 = v166 + 1;
          *(_QWORD *)(a1 + 56) = v13;
          v145 = v13;
          goto LABEL_195;
        }
      }
      *((_DWORD *)v13 - 1) = v14;
      ++*(_DWORD *)(v17 + 8);
      v142 = *((_DWORD *)v13 - 1);
      if ( v142 != *((_DWORD *)v13 - 2) )
      {
        v143 = v142;
        v144 = v142 + 1;
        v145 = &v13[v143];
        goto LABEL_195;
      }
      v167 = (3 * v142 + 1) >> 1;
      v168 = 8 * v167 + 8;
      if ( 8 * v142 + 8 >= v168 || v142 >= v167 )
        goto LABEL_237;
      *(_QWORD *)v183 = v17;
      v169 = (unsigned int *)sub_186B300(v13 - 1, v168);
      v17 = *(_QWORD *)v183;
      v170 = v169[1];
      v13 = (__int64 *)(v169 + 2);
      *v169 = v167;
      *(_QWORD *)(a1 + 56) = v169 + 2;
      LODWORD(v169) = v170;
      v145 = &v13[v170];
      v144 = (_DWORD)v169 + 1;
LABEL_195:
      *v145 = v17;
      *((_DWORD *)v13 - 1) = v144;
      v146 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v146;
      result = sub_773C40(a1, v17, (v146 >> 4) & 3);
      if ( (_BYTE)result )
      {
        v147 = *(_QWORD **)(a1 + 56);
        if ( v147 )
          v148 = *((_DWORD *)v147 - 1);
        else
          v148 = 0;
        v149 = v147[v148 - 1];
        if ( v149 )
          ++*(_DWORD *)(v149 + 8);
        v150 = *(_QWORD *)(a1 + 480);
        if ( v150 )
        {
          v151 = *(_QWORD *)(a1 + 488);
          v21 = (*(_DWORD *)(v150 + 8))-- == 1;
          if ( v21 )
          {
            sub_15D7BC0(v151, v150);
            v147 = *(_QWORD **)(a1 + 56);
          }
        }
        v152 = *((_DWORD *)v147 - 1);
        v153 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 480) = v149;
        v154 = (unsigned int)(v152 - 1);
        v155 = v147[v154];
        *((_DWORD *)v147 - 1) = v154;
        if ( v155
          && (v156 = *(_DWORD *)(v155 + 8), v157 = v156 - 1, *(_DWORD *)(v155 + 8) = v156 - 1, v156 == 1)
          && (sub_15D7BC0(v153, v155), v147 = *(_QWORD **)(a1 + 56), v153 = *(_QWORD *)(a1 + 48), !v147) )
        {
          v158 = MEMORY[0xFFFFFFFFFFFFFFFC];
        }
        else
        {
          v157 = *((_DWORD *)v147 - 1);
          v158 = v157;
        }
        v159 = v147[v157 - 1];
        *((_DWORD *)v147 - 1) = v158 - 1;
        if ( !v159 || (v21 = *(_DWORD *)(v159 + 8) == 1, --*(_DWORD *)(v159 + 8), !v21) )
        {
          v160 = *(_QWORD *)(a1 + 480);
          v161 = v147;
          if ( v160 )
            goto LABEL_209;
          goto LABEL_211;
        }
        sub_15D7BC0(v153, v159);
        v160 = *(_QWORD *)(a1 + 480);
        v147 = *(_QWORD **)(a1 + 56);
        if ( v160 )
LABEL_209:
          ++*(_DWORD *)(v160 + 8);
        v161 = v147;
        if ( v147 )
        {
LABEL_211:
          v162 = *((_DWORD *)v147 - 2);
          if ( *((_DWORD *)v147 - 1) != v162 )
            goto LABEL_212;
          v172 = (3 * v162 + 1) >> 1;
          v173 = 8 * v172 + 8;
          if ( 8 * v162 + 8 < v173 && v162 < v172 )
          {
            v174 = (unsigned int *)sub_186B300(v147 - 1, v173);
            v161 = v174 + 2;
            *v174 = v172;
            *(_QWORD *)(a1 + 56) = v174 + 2;
            goto LABEL_212;
          }
LABEL_237:
          v176 = (char **)__cxa_allocate_exception(0x28u);
          sub_76A180(&v186, "Overflow encountered when expanding vector");
          *v176 = (char *)off_1C63128;
          sub_2333C0(v176 + 1, &v186);
          sub_233E40((__int64)&v186);
          __cxa_throw(v176, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v175 = (_QWORD *)sub_186B270(0x18u);
        *v175 = 2;
        v161 = v175 + 1;
        *(_QWORD *)(a1 + 56) = v175 + 1;
LABEL_212:
        v163 = *((_DWORD *)v161 - 1);
        v161[v163] = v160;
        *((_DWORD *)v161 - 1) = v163 + 1;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v164 = *(_QWORD *)(a1 + 40);
        result = *(unsigned int *)(v164 - 4);
        *(_DWORD *)(v164 - 4) = result - 1;
        if ( (_DWORD)result != 1 )
        {
          result = 16LL * (unsigned int)(result - 2);
          *(_BYTE *)(v164 + result + 8) |= 2u;
        }
      }
LABEL_141:
      v107 = *(_QWORD *)(a1 + 480);
      if ( !v107 )
        goto LABEL_130;
      v108 = *(_QWORD *)(a1 + 488);
LABEL_143:
      v21 = (*(_DWORD *)(v107 + 8))-- == 1;
      if ( v21 )
        result = sub_15D7BC0(v108, v107);
      goto LABEL_130;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_773C40(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v73 = *(_QWORD *)(a1 + 56);
  v74 = *(_QWORD *)(a2 + 16);
  if ( v73 )
    v75 = *(_DWORD *)(v73 - 4);
  else
    v75 = 0;
  v76 = *(unsigned int *)(a3 + 12);
  v77 = v75 - v76;
  v180 = (_QWORD *)(v73 + 8 * v76);
  v80 = sub_76B2E0(*(_QWORD **)(a1 + 144), *(_QWORD **)(a2 + 16), v77, v180, (__int64 *)(a1 + 480), (int)a1 + 512);
  if ( v80 != 5 )
  {
    v91 = *(_QWORD **)(a1 + 56);
    if ( !v91 )
      goto LABEL_180;
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
        {
          v181 = v92;
          sub_15D7BC0(v96, v95);
          v92 = v181;
        }
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
        v132 = (3 * v92 + 1) >> 1;
        v133 = 8 * v132 + 8;
        if ( 8 * v92 + 8 >= v133 || v92 >= v132 )
          goto LABEL_237;
        v134 = (unsigned int *)sub_186B300(v91 - 1, v133);
        v135 = v134[1];
        v91 = v134 + 2;
        *v134 = v132;
        *(_QWORD *)(a1 + 56) = v134 + 2;
        LODWORD(v134) = v135;
        v103 = &v91[v135];
        v104 = (_DWORD)v134 + 1;
      }
      else
      {
        v103 = &v91[*((unsigned int *)v91 - 1)];
        v104 = *((_DWORD *)v91 - 1) + 1;
      }
    }
    else
    {
LABEL_180:
      v102 = *(_QWORD *)(a1 + 480);
      if ( v102 )
        ++*(_DWORD *)(v102 + 8);
      v136 = (_QWORD *)sub_186B270(0x18u);
      *v136 = 2;
      v104 = 1;
      v91 = v136 + 1;
      *(_QWORD *)(a1 + 56) = v91;
      v103 = v91;
    }
    *v103 = v102;
    v105 = *(_QWORD *)(a1 + 480);
    *((_DWORD *)v91 - 1) = v104;
    if ( v80 == 4 )
    {
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, v105);
LABEL_139:
      result = *(_QWORD *)(a1 + 40);
      v106 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v106 - 1;
      if ( v106 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v106 - 2) + 8) |= 2u;
      goto LABEL_141;
    }
    *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
    result = sub_773C40(a1, v105, 1);
    v107 = *(_QWORD *)(a1 + 480);
    v108 = *(_QWORD *)(a1 + 488);
    if ( !(_BYTE)result )
    {
      if ( !v107 )
        goto LABEL_130;
      goto LABEL_143;
    }
    v112 = 0xFFFFFFFFLL;
    v113 = *(_QWORD **)(a1 + 56);
    if ( v113 )
      v112 = (unsigned int)(*((_DWORD *)v113 - 1) - 1);
    v114 = v113[v112];
    if ( v114 )
      ++*(_DWORD *)(v114 + 8);
    if ( v107 )
    {
      v21 = (*(_DWORD *)(v107 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v108, v107);
        v113 = *(_QWORD **)(a1 + 56);
      }
    }
    v115 = *((_DWORD *)v113 - 1);
    v116 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v114;
    v117 = v115 - 1;
    v118 = v113[v115 - 1];
    *((_DWORD *)v113 - 1) = v115 - 1;
    if ( v118 )
    {
      v21 = (*(_DWORD *)(v118 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v116, v118);
        v113 = *(_QWORD **)(a1 + 56);
        v116 = *(_QWORD *)(a1 + 48);
      }
      v117 = *((_DWORD *)v113 - 1);
    }
    v119 = (unsigned int)(v117 - 1);
    v120 = v113[v119];
    *((_DWORD *)v113 - 1) = v119;
    if ( v120 && (v21 = *(_DWORD *)(v120 + 8) == 1, --*(_DWORD *)(v120 + 8), v21) )
    {
      sub_15D7BC0(v116, v120);
      v121 = *(_QWORD *)(a1 + 480);
      v113 = *(_QWORD **)(a1 + 56);
      if ( !v121 )
      {
LABEL_167:
        v122 = v113;
        if ( !v113 )
        {
          v171 = (_QWORD *)sub_186B270(0x18u);
          v125 = 1;
          *v171 = 2;
          v122 = v171 + 1;
          *(_QWORD *)(a1 + 56) = v171 + 1;
          v126 = v171 + 1;
LABEL_170:
          *v126 = v121;
          *((_DWORD *)v122 - 1) = v125;
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          goto LABEL_139;
        }
LABEL_168:
        v123 = *((_DWORD *)v113 - 1);
        if ( v123 == *((_DWORD *)v113 - 2) )
        {
          v137 = (3 * v123 + 1) >> 1;
          v138 = 8 * v137 + 8;
          if ( 8 * v123 + 8 >= v138 || v123 >= v137 )
            goto LABEL_237;
          v139 = (unsigned int *)sub_186B300(v113 - 1, v138);
          v122 = v139 + 2;
          *v139 = v137;
          v140 = v139[1];
          *(_QWORD *)(a1 + 56) = v122;
          v141 = v140;
          v126 = &v122[v140];
          v125 = v141 + 1;
        }
        else
        {
          v124 = v123;
          v125 = v123 + 1;
          v126 = &v113[v124];
        }
        goto LABEL_170;
      }
    }
    else
    {
      v121 = *(_QWORD *)(a1 + 480);
      v122 = v113;
      if ( !v121 )
        goto LABEL_168;
    }
    ++*(_DWORD *)(v121 + 8);
    goto LABEL_167;
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
  {
    v109 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(a2 + 8);
    if ( v109 )
    {
      v110 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v109 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v110, v109);
    }
    v85 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    v82 = a2;
    if ( !v85 )
      goto LABEL_149;
    goto LABEL_100;
  }
  v81 = sub_15DC610(
          *(_QWORD *)(a1 + 8),
          v74,
          v77,
          (int)v180,
          v78,
          v79,
          v178,
          (int)v180,
          v184,
          v185,
          v186,
          v187,
          v188,
          v189,
          v190,
          v191);
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
LABEL_149:
      ++*(_DWORD *)(v82 + 8);
      goto LABEL_150;
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
        v128 = (3 * v86 + 1) >> 1;
        v129 = 8 * v128 + 8;
        if ( 8 * v86 + 8 >= v129 || v86 >= v128 )
          goto LABEL_237;
        v130 = (unsigned int *)sub_186B300(v85 - 1, v129);
        v131 = v130[1];
        v85 = v130 + 2;
        *v130 = v128;
        *(_QWORD *)(a1 + 56) = v130 + 2;
        LODWORD(v130) = v131;
        v97 = &v85[v131];
        v98 = (_DWORD)v130 + 1;
      }
      else
      {
        v97 = &v85[*((unsigned int *)v85 - 1)];
        v98 = *((_DWORD *)v85 - 1) + 1;
      }
      goto LABEL_122;
    }
    v82 = *(_QWORD *)(a1 + 480);
LABEL_185:
    if ( v82 )
      goto LABEL_149;
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
      goto LABEL_185;
    }
    *(_QWORD *)(a1 + 480) = 0;
    v85 = *(_QWORD **)(a1 + 56);
    if ( v85 )
      goto LABEL_100;
  }
  v82 = 0;
LABEL_150:
  v111 = (_QWORD *)sub_186B270(0x18u);
  *v111 = 2;
  v98 = 1;
  v85 = v111 + 1;
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

