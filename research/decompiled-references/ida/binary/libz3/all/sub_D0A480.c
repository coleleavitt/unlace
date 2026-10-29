__int64 __fastcall sub_D0A480(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v106; // rdi
  __int64 v107; // rdx
  _QWORD *v108; // rax
  __int64 v109; // r12
  int v110; // ecx
  __int64 v111; // rdi
  int v112; // edx
  __int64 v113; // rsi
  __int64 v114; // rcx
  __int64 v115; // rsi
  __int64 v116; // r12
  _QWORD *v117; // rcx
  unsigned int v118; // edx
  __int64 v119; // rsi
  int v120; // edx
  _QWORD *v121; // rax
  int v122; // ecx
  __int64 v123; // rsi
  __int64 v124; // rdi
  _QWORD *v125; // rdx
  _QWORD *v126; // rax
  unsigned int v127; // r13d
  unsigned int v128; // eax
  unsigned int *v129; // rax
  __int64 v130; // rcx
  unsigned int v131; // r14d
  unsigned int v132; // eax
  unsigned int *v133; // rax
  __int64 v134; // rcx
  unsigned int v135; // r13d
  unsigned int v136; // ecx
  unsigned int *v137; // rax
  __int64 v138; // rax
  int v139; // edx
  _QWORD *v140; // rdx
  unsigned int v141; // eax
  __int64 v142; // rcx
  int v143; // eax
  __int64 *v144; // rcx
  unsigned __int8 v145; // al
  _QWORD *v146; // rax
  int v147; // edx
  __int64 v148; // r12
  __int64 v149; // rsi
  __int64 v150; // rdi
  int v151; // edx
  __int64 v152; // rdi
  __int64 v153; // rcx
  __int64 v154; // rsi
  int v155; // ecx
  int v156; // r12d
  int v157; // edx
  __int64 v158; // rsi
  __int64 v159; // r13
  _QWORD *v160; // rdx
  unsigned int v161; // ecx
  int v162; // eax
  __int64 v163; // rdx
  _QWORD *v164; // rax
  _QWORD *v165; // rdx
  _QWORD *v166; // rax
  unsigned int v167; // r12d
  unsigned int v168; // ecx
  unsigned int *v169; // rax
  __int64 v170; // rcx
  unsigned int v171; // r12d
  unsigned int v172; // edx
  unsigned int *v173; // rax
  _QWORD *v174; // rax
  char **v175; // rbp
  char **exception; // rbp
  int v177; // [rsp+0h] [rbp-78h]
  int v178[2]; // [rsp+8h] [rbp-70h]
  __int64 *v179; // [rsp+8h] [rbp-70h]
  unsigned int v180; // [rsp+8h] [rbp-70h]
  int v181[2]; // [rsp+8h] [rbp-70h]
  int v182[2]; // [rsp+8h] [rbp-70h]
  __int64 v183; // [rsp+10h] [rbp-68h] BYREF
  __int64 v184; // [rsp+18h] [rbp-60h]
  __int64 v185; // [rsp+20h] [rbp-58h] BYREF
  char v186; // [rsp+28h] [rbp-50h]
  int v187; // [rsp+30h] [rbp-48h]
  int v188; // [rsp+38h] [rbp-40h]
  int v189; // [rsp+40h] [rbp-38h]
  void *v190; // [rsp+48h] [rbp-30h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v40 = *(_QWORD *)(a1 + 8);
    v41 = *(_DWORD *)(a2 + 24);
    v183 = 0;
    v184 = v40;
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
        v61 = v183;
        if ( v183 )
        {
          v62 = v184;
          v21 = (*(_DWORD *)(v183 + 8))-- == 1;
          if ( v21 )
            return sub_15D7BC0(v62, v61);
        }
        return result;
      }
    }
    else
    {
      sub_1585DF0(a1 + 328, v46, v41, &v183);
      v50 = v183;
      v183 = *(_QWORD *)(a1 + 480);
      v49 = v183;
      *(_QWORD *)(a1 + 480) = v50;
      if ( v49 )
      {
        v51 = v184;
        v21 = (*(_DWORD *)(v49 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v51, v49);
      }
      v183 = 0;
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
          sub_D03640(&v185, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v185);
          sub_233E40((__int64)&v185);
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
          v126 = (_QWORD *)sub_186B270(0x18u);
          v37 = 1;
          v34 = v126 + 1;
          *v126 = 2;
          *(_QWORD *)(a1 + 56) = v126 + 1;
          v38 = v126 + 1;
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
            goto LABEL_234;
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
        goto LABEL_220;
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
              *(_QWORD *)v178 = v17;
              sub_15D7BC0(v20, v19);
              v17 = *(_QWORD *)v178;
            }
          }
          ++v15;
        }
        while ( (unsigned __int64)v15 < v18 );
        v13 = *(__int64 **)(a1 + 56);
        if ( !v13 )
        {
LABEL_220:
          ++*(_DWORD *)(v17 + 8);
          *(_QWORD *)v181 = v17;
          v164 = (_QWORD *)sub_186B270(0x18u);
          v17 = *(_QWORD *)v181;
          v165 = v164;
          *v164 = 2;
          v143 = 1;
          v13 = v165 + 1;
          *(_QWORD *)(a1 + 56) = v13;
          v144 = v13;
          goto LABEL_196;
        }
      }
      *((_DWORD *)v13 - 1) = v14;
      ++*(_DWORD *)(v17 + 8);
      v141 = *((_DWORD *)v13 - 1);
      if ( v141 != *((_DWORD *)v13 - 2) )
      {
        v142 = v141;
        v143 = v141 + 1;
        v144 = &v13[v142];
        goto LABEL_196;
      }
      v167 = (3 * v141 + 1) >> 1;
      v168 = 8 * v167 + 8;
      if ( 8 * v141 + 8 >= v168 || v141 >= v167 )
        goto LABEL_234;
      *(_QWORD *)v182 = v17;
      v169 = (unsigned int *)sub_186B300(v13 - 1, v168);
      v17 = *(_QWORD *)v182;
      v170 = v169[1];
      v13 = (__int64 *)(v169 + 2);
      *v169 = v167;
      *(_QWORD *)(a1 + 56) = v169 + 2;
      LODWORD(v169) = v170;
      v144 = &v13[v170];
      v143 = (_DWORD)v169 + 1;
LABEL_196:
      *v144 = v17;
      *((_DWORD *)v13 - 1) = v143;
      v145 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      *(_BYTE *)(a3 + 8) = v145;
      result = sub_D09F90((_QWORD *)a1, v17, (v145 >> 4) & 3);
      if ( (_BYTE)result )
      {
        v146 = *(_QWORD **)(a1 + 56);
        if ( v146 )
          v147 = *((_DWORD *)v146 - 1);
        else
          v147 = 0;
        v148 = v146[v147 - 1];
        if ( v148 )
          ++*(_DWORD *)(v148 + 8);
        v149 = *(_QWORD *)(a1 + 480);
        if ( v149 )
        {
          v150 = *(_QWORD *)(a1 + 488);
          v21 = (*(_DWORD *)(v149 + 8))-- == 1;
          if ( v21 )
          {
            sub_15D7BC0(v150, v149);
            v146 = *(_QWORD **)(a1 + 56);
          }
        }
        v151 = *((_DWORD *)v146 - 1);
        v152 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 480) = v148;
        v153 = (unsigned int)(v151 - 1);
        v154 = v146[v153];
        *((_DWORD *)v146 - 1) = v153;
        if ( v154
          && (v155 = *(_DWORD *)(v154 + 8), v156 = v155 - 1, *(_DWORD *)(v154 + 8) = v155 - 1, v155 == 1)
          && (sub_15D7BC0(v152, v154), v146 = *(_QWORD **)(a1 + 56), v152 = *(_QWORD *)(a1 + 48), !v146) )
        {
          v157 = MEMORY[0xFFFFFFFFFFFFFFFC];
        }
        else
        {
          v156 = *((_DWORD *)v146 - 1);
          v157 = v156;
        }
        v158 = v146[v156 - 1];
        *((_DWORD *)v146 - 1) = v157 - 1;
        if ( !v158 || (v21 = *(_DWORD *)(v158 + 8) == 1, --*(_DWORD *)(v158 + 8), !v21) )
        {
          v159 = *(_QWORD *)(a1 + 480);
          v160 = v146;
          if ( v159 )
            goto LABEL_210;
          goto LABEL_212;
        }
        sub_15D7BC0(v152, v158);
        v159 = *(_QWORD *)(a1 + 480);
        v146 = *(_QWORD **)(a1 + 56);
        if ( v159 )
LABEL_210:
          ++*(_DWORD *)(v159 + 8);
        v160 = v146;
        if ( v146 )
        {
LABEL_212:
          v161 = *((_DWORD *)v146 - 2);
          if ( *((_DWORD *)v146 - 1) != v161 )
            goto LABEL_213;
          v171 = (3 * v161 + 1) >> 1;
          v172 = 8 * v171 + 8;
          if ( 8 * v161 + 8 < v172 && v161 < v171 )
          {
            v173 = (unsigned int *)sub_186B300(v146 - 1, v172);
            v160 = v173 + 2;
            *v173 = v171;
            *(_QWORD *)(a1 + 56) = v173 + 2;
            goto LABEL_213;
          }
LABEL_234:
          v175 = (char **)__cxa_allocate_exception(0x28u);
          sub_D03640(&v185, "Overflow encountered when expanding vector");
          *v175 = (char *)off_1C63128;
          sub_2333C0(v175 + 1, &v185);
          sub_233E40((__int64)&v185);
          __cxa_throw(v175, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v174 = (_QWORD *)sub_186B270(0x18u);
        *v174 = 2;
        v160 = v174 + 1;
        *(_QWORD *)(a1 + 56) = v174 + 1;
LABEL_213:
        v162 = *((_DWORD *)v160 - 1);
        v160[v162] = v159;
        *((_DWORD *)v160 - 1) = v162 + 1;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v163 = *(_QWORD *)(a1 + 40);
        result = *(unsigned int *)(v163 - 4);
        *(_DWORD *)(v163 - 4) = result - 1;
        if ( (_DWORD)result != 1 )
        {
          result = 16LL * (unsigned int)(result - 2);
          *(_BYTE *)(v163 + result + 8) |= 2u;
        }
      }
LABEL_159:
      v105 = *(_QWORD *)(a1 + 480);
      if ( !v105 )
        goto LABEL_130;
      v106 = *(_QWORD *)(a1 + 488);
LABEL_161:
      v21 = (*(_DWORD *)(v105 + 8))-- == 1;
      if ( v21 )
        result = sub_15D7BC0(v106, v105);
      goto LABEL_130;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_D09F90((_QWORD *)a1, v8, ((unsigned __int8)v9 >> 4) & 3);
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
  v179 = (__int64 *)(v73 + 8 * v76);
  v80 = sub_D045A0(*(_QWORD **)(a1 + 144), *(_QWORD *)(a2 + 16), v77, v179, (int)a1 + 480);
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
          v180 = v92;
          sub_15D7BC0(v96, v95);
          v92 = v180;
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
        v131 = (3 * v92 + 1) >> 1;
        v132 = 8 * v131 + 8;
        if ( 8 * v92 + 8 >= v132 || v92 >= v131 )
          goto LABEL_234;
        v133 = (unsigned int *)sub_186B300(v91 - 1, v132);
        v134 = v133[1];
        v91 = v133 + 2;
        *v133 = v131;
        *(_QWORD *)(a1 + 56) = v133 + 2;
        LODWORD(v133) = v134;
        v103 = &v91[v134];
        v104 = (_DWORD)v133 + 1;
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
      v140 = (_QWORD *)sub_186B270(0x18u);
      *v140 = 2;
      v104 = 1;
      v91 = v140 + 1;
      *(_QWORD *)(a1 + 56) = v91;
      v103 = v91;
    }
    *v103 = v102;
    *((_DWORD *)v91 - 1) = v104;
    *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
    result = sub_D09F90((_QWORD *)a1, *(_QWORD *)(a1 + 480), v80 + 1);
    v105 = *(_QWORD *)(a1 + 480);
    v106 = *(_QWORD *)(a1 + 488);
    if ( !(_BYTE)result )
    {
      if ( !v105 )
        goto LABEL_130;
      goto LABEL_161;
    }
    v107 = 0xFFFFFFFFLL;
    v108 = *(_QWORD **)(a1 + 56);
    if ( v108 )
      v107 = (unsigned int)(*((_DWORD *)v108 - 1) - 1);
    v109 = v108[v107];
    if ( v109 )
      ++*(_DWORD *)(v109 + 8);
    if ( v105 )
    {
      v21 = (*(_DWORD *)(v105 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v106, v105);
        v108 = *(_QWORD **)(a1 + 56);
      }
    }
    v110 = *((_DWORD *)v108 - 1);
    v111 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v109;
    v112 = v110 - 1;
    v113 = v108[v110 - 1];
    *((_DWORD *)v108 - 1) = v110 - 1;
    if ( v113 )
    {
      v21 = (*(_DWORD *)(v113 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v111, v113);
        v108 = *(_QWORD **)(a1 + 56);
        v111 = *(_QWORD *)(a1 + 48);
      }
      v112 = *((_DWORD *)v108 - 1);
    }
    v114 = (unsigned int)(v112 - 1);
    v115 = v108[v114];
    *((_DWORD *)v108 - 1) = v114;
    if ( v115 && (v21 = *(_DWORD *)(v115 + 8) == 1, --*(_DWORD *)(v115 + 8), v21) )
    {
      sub_15D7BC0(v111, v115);
      v116 = *(_QWORD *)(a1 + 480);
      v108 = *(_QWORD **)(a1 + 56);
      if ( !v116 )
      {
LABEL_152:
        v117 = v108;
        if ( !v108 )
        {
          v166 = (_QWORD *)sub_186B270(0x18u);
          v120 = 1;
          *v166 = 2;
          v117 = v166 + 1;
          *(_QWORD *)(a1 + 56) = v166 + 1;
          v121 = v166 + 1;
LABEL_155:
          *v121 = v116;
          *((_DWORD *)v117 - 1) = v120;
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
            sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          result = *(_QWORD *)(a1 + 40);
          v122 = *(_DWORD *)(result - 4);
          *(_DWORD *)(result - 4) = v122 - 1;
          if ( v122 != 1 )
            *(_BYTE *)(result + 16LL * (unsigned int)(v122 - 2) + 8) |= 2u;
          goto LABEL_159;
        }
LABEL_153:
        v118 = *((_DWORD *)v108 - 1);
        if ( v118 == *((_DWORD *)v108 - 2) )
        {
          v135 = (3 * v118 + 1) >> 1;
          v136 = 8 * v135 + 8;
          if ( 8 * v118 + 8 >= v136 || v118 >= v135 )
            goto LABEL_234;
          v137 = (unsigned int *)sub_186B300(v108 - 1, v136);
          v117 = v137 + 2;
          *v137 = v135;
          v138 = v137[1];
          *(_QWORD *)(a1 + 56) = v117;
          v139 = v138;
          v121 = &v117[v138];
          v120 = v139 + 1;
        }
        else
        {
          v119 = v118;
          v120 = v118 + 1;
          v121 = &v108[v119];
        }
        goto LABEL_155;
      }
    }
    else
    {
      v116 = *(_QWORD *)(a1 + 480);
      v117 = v108;
      if ( !v116 )
        goto LABEL_153;
    }
    ++*(_DWORD *)(v116 + 8);
    goto LABEL_152;
  }
  if ( (*(_BYTE *)(a3 + 8) & 2) == 0 )
  {
    v123 = *(_QWORD *)(a1 + 480);
    ++*(_DWORD *)(a2 + 8);
    if ( v123 )
    {
      v124 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v21 )
        sub_15D7BC0(v124, v123);
    }
    v85 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 480) = a2;
    v82 = a2;
    if ( !v85 )
      goto LABEL_167;
    goto LABEL_100;
  }
  v81 = sub_15DC610(
          *(_QWORD *)(a1 + 8),
          v74,
          v77,
          (int)v179,
          v78,
          v79,
          v177,
          (int)v179,
          v183,
          v184,
          v185,
          v186,
          v187,
          v188,
          v189,
          v190);
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
LABEL_167:
      ++*(_DWORD *)(v82 + 8);
      goto LABEL_168;
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
        v127 = (3 * v86 + 1) >> 1;
        v128 = 8 * v127 + 8;
        if ( 8 * v86 + 8 >= v128 || v86 >= v127 )
          goto LABEL_234;
        v129 = (unsigned int *)sub_186B300(v85 - 1, v128);
        v130 = v129[1];
        v85 = v129 + 2;
        *v129 = v127;
        *(_QWORD *)(a1 + 56) = v129 + 2;
        LODWORD(v129) = v130;
        v97 = &v85[v130];
        v98 = (_DWORD)v129 + 1;
      }
      else
      {
        v97 = &v85[*((unsigned int *)v85 - 1)];
        v98 = *((_DWORD *)v85 - 1) + 1;
      }
      goto LABEL_122;
    }
    v82 = *(_QWORD *)(a1 + 480);
LABEL_187:
    if ( v82 )
      goto LABEL_167;
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
      goto LABEL_187;
    }
    *(_QWORD *)(a1 + 480) = 0;
    v85 = *(_QWORD **)(a1 + 56);
    if ( v85 )
      goto LABEL_100;
  }
  v82 = 0;
LABEL_168:
  v125 = (_QWORD *)sub_186B270(0x18u);
  *v125 = 2;
  v98 = 1;
  v85 = v125 + 1;
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

