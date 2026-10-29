__int64 __fastcall sub_D39D40(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v74; // r13
  int v75; // r12d
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // r8
  unsigned int v79; // r12d
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 v82; // rdi
  int v83; // ecx
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // rax
  __int64 v87; // r12
  __int64 v88; // rsi
  __int64 v89; // rdi
  _QWORD *v90; // rdx
  unsigned int v91; // r14d
  unsigned __int64 v92; // r13
  __int64 *v93; // r12
  __int64 v94; // rsi
  __int64 v95; // rdi
  _QWORD *v96; // rdx
  unsigned int v97; // r14d
  unsigned __int64 v98; // r13
  __int64 *v99; // r12
  __int64 v100; // rsi
  __int64 v101; // rdi
  __int64 *v102; // rcx
  int v103; // eax
  __int64 v104; // rcx
  int v105; // esi
  __int64 v106; // rdi
  __int64 v107; // r12
  _QWORD *v108; // rsi
  int v109; // eax
  __int64 v110; // rsi
  __int64 v111; // rsi
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
  int v127; // ecx
  __int64 v128; // rsi
  __int64 v129; // rdi
  _QWORD *v130; // rdx
  _QWORD *v131; // rax
  unsigned int v132; // r13d
  unsigned int v133; // eax
  unsigned int *v134; // rax
  __int64 v135; // rcx
  unsigned int v136; // r13d
  unsigned int v137; // eax
  unsigned int *v138; // rax
  __int64 v139; // rsi
  _QWORD *v140; // rdx
  unsigned int v141; // r13d
  unsigned int v142; // ecx
  unsigned int *v143; // rax
  __int64 v144; // rax
  int v145; // edx
  unsigned int v146; // eax
  __int64 v147; // rcx
  int v148; // eax
  __int64 *v149; // rcx
  unsigned __int8 v150; // al
  _QWORD *v151; // rax
  int v152; // edx
  __int64 v153; // r12
  __int64 v154; // rsi
  __int64 v155; // rdi
  int v156; // edx
  __int64 v157; // rdi
  __int64 v158; // rcx
  __int64 v159; // rsi
  int v160; // ecx
  int v161; // r12d
  int v162; // edx
  __int64 v163; // rsi
  __int64 v164; // r13
  _QWORD *v165; // rdx
  unsigned int v166; // ecx
  int v167; // eax
  __int64 v168; // rdx
  _QWORD *v169; // rax
  _QWORD *v170; // rdx
  unsigned int v171; // r12d
  unsigned int v172; // ecx
  unsigned int *v173; // rax
  __int64 v174; // rcx
  _QWORD *v175; // rax
  unsigned int v176; // r12d
  unsigned int v177; // edx
  unsigned int *v178; // rax
  _QWORD *v179; // rax
  char **v180; // rbp
  char **v181; // rbp
  char **v182; // rbp
  char **exception; // rbp
  char **v184; // rbp
  int v185; // [rsp+0h] [rbp-98h]
  int v186[2]; // [rsp+8h] [rbp-90h]
  int v187[2]; // [rsp+8h] [rbp-90h]
  int v188; // [rsp+8h] [rbp-90h]
  int v189; // [rsp+8h] [rbp-90h]
  int v190; // [rsp+8h] [rbp-90h]
  int v191[2]; // [rsp+8h] [rbp-90h]
  int v192[2]; // [rsp+8h] [rbp-90h]
  int v193[2]; // [rsp+10h] [rbp-88h]
  int v194; // [rsp+18h] [rbp-80h]
  int v195; // [rsp+20h] [rbp-78h]
  char v196; // [rsp+28h] [rbp-70h]
  __int64 v197; // [rsp+30h] [rbp-68h] BYREF
  __int64 v198; // [rsp+38h] [rbp-60h]
  __int64 v199[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v40 = *(_QWORD *)(a1 + 8);
    v41 = *(_DWORD *)(a2 + 24);
    v197 = 0;
    v198 = v40;
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
        v61 = v197;
        if ( v197 )
        {
          v62 = v198;
          v21 = (*(_DWORD *)(v197 + 8))-- == 1;
          if ( v21 )
            return sub_15D7BC0(v62, v61);
        }
        return result;
      }
    }
    else
    {
      sub_1585DF0(a1 + 328, v46, v41, &v197);
      v50 = v197;
      v197 = *(_QWORD *)(a1 + 480);
      v49 = v197;
      *(_QWORD *)(a1 + 480) = v50;
      if ( v49 )
      {
        v51 = v198;
        v21 = (*(_DWORD *)(v49 + 8))-- == 1;
        if ( v21 )
          sub_15D7BC0(v51, v49);
      }
      v197 = 0;
      v52 = *(_QWORD **)(a1 + 56);
      if ( !v52 )
        goto LABEL_109;
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
          sub_24ABB0(v199, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v199);
          sub_233E40((__int64)v199);
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
LABEL_109:
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
          v131 = (_QWORD *)sub_186B270(0x18u);
          v37 = 1;
          v34 = v131 + 1;
          *v131 = 2;
          *(_QWORD *)(a1 + 56) = v131 + 1;
          v38 = v131 + 1;
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
            goto LABEL_244;
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
    {
      v73 = *(_QWORD *)(a1 + 56);
      v74 = *(_QWORD *)(a2 + 16);
      if ( v73 )
        v75 = *(_DWORD *)(v73 - 4);
      else
        v75 = 0;
      v76 = *(unsigned int *)(a3 + 12);
      v77 = *(_QWORD *)(a1 + 512);
      v78 = a1 + 480;
      v79 = v75 - v76;
      v80 = v73 + 8 * v76;
      *(_QWORD *)v193 = *(_QWORD *)(a1 + 8);
      v81 = *(_QWORD *)(a1 + 144);
      if ( v77 )
      {
        v82 = *(_QWORD *)(a1 + 520);
        v21 = (*(_DWORD *)(v77 + 8))-- == 1;
        if ( v21 )
        {
          v194 = a1 + 480;
          *(_QWORD *)v186 = v81;
          sub_15D7BC0(v82, v77);
          v81 = *(_QWORD *)v186;
          v78 = a1 + 480;
        }
      }
      *(_QWORD *)(a1 + 512) = 0;
      v83 = sub_1447860(v81 + 24, v74, v79, v80, v78);
      if ( v83 == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v86 = sub_15DC610(
                  *(_QWORD *)(a1 + 8),
                  v74,
                  v79,
                  v80,
                  v84,
                  v85,
                  v185,
                  v186[0],
                  v193[0],
                  v194,
                  v195,
                  v196,
                  v197,
                  v198,
                  v199[0],
                  (void *)v199[1]);
          v87 = v86;
          if ( v86 )
          {
            v88 = *(_QWORD *)(a1 + 480);
            ++*(_DWORD *)(v86 + 8);
            if ( v88 )
              goto LABEL_100;
            v90 = *(_QWORD **)(a1 + 56);
            *(_QWORD *)(a1 + 480) = v86;
            if ( !v90 )
              goto LABEL_169;
          }
          else
          {
            v88 = *(_QWORD *)(a1 + 480);
            if ( v88 )
            {
LABEL_100:
              v89 = *(_QWORD *)(a1 + 488);
              v21 = (*(_DWORD *)(v88 + 8))-- == 1;
              if ( v21 )
                sub_15D7BC0(v89, v88);
              v90 = *(_QWORD **)(a1 + 56);
              *(_QWORD *)(a1 + 480) = v87;
              if ( !v90 )
                goto LABEL_190;
              goto LABEL_103;
            }
            *(_QWORD *)(a1 + 480) = 0;
            v90 = *(_QWORD **)(a1 + 56);
            if ( !v90 )
              goto LABEL_191;
          }
        }
        else
        {
          v128 = *(_QWORD *)(a1 + 480);
          ++*(_DWORD *)(a2 + 8);
          if ( v128 )
          {
            v129 = *(_QWORD *)(a1 + 488);
            v21 = (*(_DWORD *)(v128 + 8))-- == 1;
            if ( v21 )
              sub_15D7BC0(v129, v128);
          }
          v90 = *(_QWORD **)(a1 + 56);
          *(_QWORD *)(a1 + 480) = a2;
          v87 = a2;
          if ( !v90 )
            goto LABEL_169;
        }
LABEL_103:
        v91 = *(_DWORD *)(a3 + 12);
        v92 = (unsigned __int64)&v90[*((unsigned int *)v90 - 1)];
        v93 = &v90[v91];
        if ( (unsigned __int64)v93 >= v92 )
          goto LABEL_121;
        do
        {
          v94 = *v93;
          if ( *v93 )
          {
            v95 = *(_QWORD *)(a1 + 48);
            v21 = (*(_DWORD *)(v94 + 8))-- == 1;
            if ( v21 )
              sub_15D7BC0(v95, v94);
          }
          ++v93;
        }
        while ( (unsigned __int64)v93 < v92 );
        v90 = *(_QWORD **)(a1 + 56);
        if ( v90 )
        {
LABEL_121:
          v87 = *(_QWORD *)(a1 + 480);
          *((_DWORD *)v90 - 1) = v91;
          if ( v87 )
          {
            ++*(_DWORD *)(v87 + 8);
            v91 = *((_DWORD *)v90 - 1);
          }
          if ( *((_DWORD *)v90 - 2) == v91 )
          {
            v132 = (3 * v91 + 1) >> 1;
            v133 = 8 * v132 + 8;
            if ( 8 * v91 + 8 >= v133 || v91 >= v132 )
            {
              v182 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v199, "Overflow encountered when expanding vector");
              *v182 = (char *)off_1C63128;
              sub_2333C0(v182 + 1, v199);
              sub_233E40((__int64)v199);
              __cxa_throw(v182, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v134 = (unsigned int *)sub_186B300(v90 - 1, v133);
            v135 = v134[1];
            v90 = v134 + 2;
            *v134 = v132;
            *(_QWORD *)(a1 + 56) = v134 + 2;
            LODWORD(v134) = v135;
            v102 = &v90[v135];
            v103 = (_DWORD)v134 + 1;
          }
          else
          {
            v102 = &v90[*((unsigned int *)v90 - 1)];
            v103 = *((_DWORD *)v90 - 1) + 1;
          }
          goto LABEL_125;
        }
        v87 = *(_QWORD *)(a1 + 480);
LABEL_190:
        if ( !v87 )
        {
LABEL_191:
          v87 = 0;
          goto LABEL_170;
        }
LABEL_169:
        ++*(_DWORD *)(v87 + 8);
LABEL_170:
        v130 = (_QWORD *)sub_186B270(0x18u);
        *v130 = 2;
        v103 = 1;
        v90 = v130 + 1;
        *(_QWORD *)(a1 + 56) = v90;
        v102 = v90;
LABEL_125:
        *v102 = v87;
        v104 = *(_QWORD *)(a1 + 480);
        *((_DWORD *)v90 - 1) = v103;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        {
          sub_1584390(a1, a2, 0, v104);
          v104 = *(_QWORD *)(a1 + 480);
        }
        result = *(_QWORD *)(a1 + 40);
        v105 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v105 - 1;
        if ( a2 != v104 && v105 != 1 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v105 - 2) + 8) |= 2u;
          v104 = *(_QWORD *)(a1 + 480);
        }
        if ( !v104 )
          goto LABEL_132;
        v106 = *(_QWORD *)(a1 + 488);
        v21 = (*(_DWORD *)(v104 + 8))-- == 1;
        if ( !v21 )
          goto LABEL_132;
        v111 = v104;
        goto LABEL_225;
      }
      v96 = *(_QWORD **)(a1 + 56);
      if ( !v96 )
        goto LABEL_181;
      v97 = *(_DWORD *)(a3 + 12);
      v98 = (unsigned __int64)&v96[*((unsigned int *)v96 - 1)];
      v99 = &v96[v97];
      if ( (unsigned __int64)v99 >= v98 )
        goto LABEL_134;
      do
      {
        v100 = *v99;
        if ( *v99 )
        {
          v101 = *(_QWORD *)(a1 + 48);
          v21 = (*(_DWORD *)(v100 + 8))-- == 1;
          if ( v21 )
          {
            v188 = v83;
            sub_15D7BC0(v101, v100);
            v83 = v188;
          }
        }
        ++v99;
      }
      while ( (unsigned __int64)v99 < v98 );
      v96 = *(_QWORD **)(a1 + 56);
      if ( v96 )
      {
LABEL_134:
        v107 = *(_QWORD *)(a1 + 480);
        *((_DWORD *)v96 - 1) = v97;
        if ( v107 )
        {
          ++*(_DWORD *)(v107 + 8);
          v97 = *((_DWORD *)v96 - 1);
        }
        if ( *((_DWORD *)v96 - 2) == v97 )
        {
          v136 = (3 * v97 + 1) >> 1;
          v137 = 8 * v136 + 8;
          if ( 8 * v97 + 8 >= v137 || v97 >= v136 )
          {
            v184 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v199, "Overflow encountered when expanding vector");
            *v184 = (char *)off_1C63128;
            sub_2333C0(v184 + 1, v199);
            sub_233E40((__int64)v199);
            __cxa_throw(v184, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v189 = v83;
          v138 = (unsigned int *)sub_186B300(v96 - 1, v137);
          v139 = v138[1];
          v96 = v138 + 2;
          v83 = v189;
          *v138 = v136;
          *(_QWORD *)(a1 + 56) = v138 + 2;
          LODWORD(v138) = v139;
          v108 = &v96[v139];
          v109 = (_DWORD)v138 + 1;
        }
        else
        {
          v108 = &v96[*((unsigned int *)v96 - 1)];
          v109 = *((_DWORD *)v96 - 1) + 1;
        }
      }
      else
      {
LABEL_181:
        v107 = *(_QWORD *)(a1 + 480);
        if ( v107 )
          ++*(_DWORD *)(v107 + 8);
        v190 = v83;
        v140 = (_QWORD *)sub_186B270(0x18u);
        *v140 = 2;
        v83 = v190;
        v109 = 1;
        v96 = v140 + 1;
        *(_QWORD *)(a1 + 56) = v96;
        v108 = v96;
      }
      *v108 = v107;
      v110 = *(_QWORD *)(a1 + 480);
      *((_DWORD *)v96 - 1) = v109;
      if ( v83 == 4 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, v110);
LABEL_160:
        result = *(_QWORD *)(a1 + 40);
        v127 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v127 - 1;
        if ( v127 != 1 )
          *(_BYTE *)(result + 16LL * (unsigned int)(v127 - 2) + 8) |= 2u;
        v111 = *(_QWORD *)(a1 + 480);
        if ( !v111 )
          goto LABEL_132;
        v106 = *(_QWORD *)(a1 + 488);
        v21 = (*(_DWORD *)(v111 + 8))-- == 1;
        if ( !v21 )
          goto LABEL_132;
LABEL_225:
        result = sub_15D7BC0(v106, v111);
        goto LABEL_132;
      }
      *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
      result = sub_D38BA0(a1, v110, (unsigned int)(v83 != 3) + v83);
      v111 = *(_QWORD *)(a1 + 480);
      v106 = *(_QWORD *)(a1 + 488);
      if ( !(_BYTE)result )
      {
        if ( !v111 )
          goto LABEL_132;
        v21 = (*(_DWORD *)(v111 + 8))-- == 1;
        if ( !v21 )
          goto LABEL_132;
        goto LABEL_225;
      }
      v112 = 0xFFFFFFFFLL;
      v113 = *(_QWORD **)(a1 + 56);
      if ( v113 )
        v112 = (unsigned int)(*((_DWORD *)v113 - 1) - 1);
      v114 = v113[v112];
      if ( v114 )
        ++*(_DWORD *)(v114 + 8);
      if ( v111 )
      {
        v21 = (*(_DWORD *)(v111 + 8))-- == 1;
        if ( v21 )
        {
          sub_15D7BC0(v106, v111);
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
LABEL_155:
          v122 = v113;
          if ( !v113 )
          {
            v175 = (_QWORD *)sub_186B270(0x18u);
            *v175 = 2;
            v125 = 1;
            v122 = v175 + 1;
            *(_QWORD *)(a1 + 56) = v175 + 1;
            v126 = v175 + 1;
LABEL_158:
            *v126 = v121;
            *((_DWORD *)v122 - 1) = v125;
            if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
              sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
            goto LABEL_160;
          }
LABEL_156:
          v123 = *((_DWORD *)v113 - 1);
          if ( v123 == *((_DWORD *)v113 - 2) )
          {
            v141 = (3 * v123 + 1) >> 1;
            v142 = 8 * v141 + 8;
            if ( 8 * v123 + 8 >= v142 || v123 >= v141 )
            {
              v180 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v199, "Overflow encountered when expanding vector");
              *v180 = (char *)off_1C63128;
              sub_2333C0(v180 + 1, v199);
              sub_233E40((__int64)v199);
              __cxa_throw(v180, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v143 = (unsigned int *)sub_186B300(v113 - 1, v142);
            v122 = v143 + 2;
            *v143 = v141;
            v144 = v143[1];
            *(_QWORD *)(a1 + 56) = v122;
            v145 = v144;
            v126 = &v122[v144];
            v125 = v145 + 1;
          }
          else
          {
            v124 = v123;
            v125 = v123 + 1;
            v126 = &v113[v124];
          }
          goto LABEL_158;
        }
      }
      else
      {
        v121 = *(_QWORD *)(a1 + 480);
        v122 = v113;
        if ( !v121 )
          goto LABEL_156;
      }
      ++*(_DWORD *)(v121 + 8);
      goto LABEL_155;
    }
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
      break;
    if ( *v15 == *(_QWORD *)(v16 + 864) )
    {
      v17 = *(_QWORD *)(a2 + 48);
      goto LABEL_15;
    }
LABEL_5:
    v8 = *(_QWORD *)(a2 + 8LL * v11 + 32);
    v9 = ((v11 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_D38BA0(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v17 = *(_QWORD *)(a2 + 40);
LABEL_15:
  if ( !v17 )
    goto LABEL_5;
  if ( !v13 )
    goto LABEL_229;
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
          *(_QWORD *)v187 = v17;
          sub_15D7BC0(v20, v19);
          v17 = *(_QWORD *)v187;
        }
      }
      ++v15;
    }
    while ( (unsigned __int64)v15 < v18 );
    v13 = *(__int64 **)(a1 + 56);
    if ( !v13 )
    {
LABEL_229:
      ++*(_DWORD *)(v17 + 8);
      *(_QWORD *)v191 = v17;
      v169 = (_QWORD *)sub_186B270(0x18u);
      v17 = *(_QWORD *)v191;
      v170 = v169;
      *v169 = 2;
      v148 = 1;
      v13 = v170 + 1;
      *(_QWORD *)(a1 + 56) = v13;
      v149 = v13;
      goto LABEL_202;
    }
  }
  *((_DWORD *)v13 - 1) = v14;
  ++*(_DWORD *)(v17 + 8);
  v146 = *((_DWORD *)v13 - 1);
  if ( v146 != *((_DWORD *)v13 - 2) )
  {
    v147 = v146;
    v148 = v146 + 1;
    v149 = &v13[v147];
    goto LABEL_202;
  }
  v171 = (3 * v146 + 1) >> 1;
  v172 = 8 * v171 + 8;
  if ( 8 * v146 + 8 >= v172 || v146 >= v171 )
    goto LABEL_244;
  *(_QWORD *)v192 = v17;
  v173 = (unsigned int *)sub_186B300(v13 - 1, v172);
  v17 = *(_QWORD *)v192;
  v174 = v173[1];
  v13 = (__int64 *)(v173 + 2);
  *v173 = v171;
  *(_QWORD *)(a1 + 56) = v173 + 2;
  LODWORD(v173) = v174;
  v149 = &v13[v174];
  v148 = (_DWORD)v173 + 1;
LABEL_202:
  *v149 = v17;
  *((_DWORD *)v13 - 1) = v148;
  v150 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
  *(_BYTE *)(a3 + 8) = v150;
  result = sub_D38BA0(a1, v17, (v150 >> 4) & 3);
  if ( (_BYTE)result )
  {
    v151 = *(_QWORD **)(a1 + 56);
    if ( v151 )
      v152 = *((_DWORD *)v151 - 1);
    else
      v152 = 0;
    v153 = v151[v152 - 1];
    if ( v153 )
      ++*(_DWORD *)(v153 + 8);
    v154 = *(_QWORD *)(a1 + 480);
    if ( v154 )
    {
      v155 = *(_QWORD *)(a1 + 488);
      v21 = (*(_DWORD *)(v154 + 8))-- == 1;
      if ( v21 )
      {
        sub_15D7BC0(v155, v154);
        v151 = *(_QWORD **)(a1 + 56);
      }
    }
    v156 = *((_DWORD *)v151 - 1);
    v157 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 480) = v153;
    v158 = (unsigned int)(v156 - 1);
    v159 = v151[v158];
    *((_DWORD *)v151 - 1) = v158;
    if ( v159
      && (v160 = *(_DWORD *)(v159 + 8), v161 = v160 - 1, *(_DWORD *)(v159 + 8) = v160 - 1, v160 == 1)
      && (sub_15D7BC0(v157, v159), v151 = *(_QWORD **)(a1 + 56), v157 = *(_QWORD *)(a1 + 48), !v151) )
    {
      v162 = MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    else
    {
      v161 = *((_DWORD *)v151 - 1);
      v162 = v161;
    }
    v163 = v151[v161 - 1];
    *((_DWORD *)v151 - 1) = v162 - 1;
    if ( !v163 || (v21 = *(_DWORD *)(v163 + 8) == 1, --*(_DWORD *)(v163 + 8), !v21) )
    {
      v164 = *(_QWORD *)(a1 + 480);
      v165 = v151;
      if ( v164 )
        goto LABEL_216;
      goto LABEL_218;
    }
    sub_15D7BC0(v157, v163);
    v164 = *(_QWORD *)(a1 + 480);
    v151 = *(_QWORD **)(a1 + 56);
    if ( v164 )
LABEL_216:
      ++*(_DWORD *)(v164 + 8);
    v165 = v151;
    if ( v151 )
    {
LABEL_218:
      v166 = *((_DWORD *)v151 - 2);
      if ( *((_DWORD *)v151 - 1) != v166 )
        goto LABEL_219;
      v176 = (3 * v166 + 1) >> 1;
      v177 = 8 * v176 + 8;
      if ( 8 * v166 + 8 < v177 && v166 < v176 )
      {
        v178 = (unsigned int *)sub_186B300(v151 - 1, v177);
        v165 = v178 + 2;
        *v178 = v176;
        *(_QWORD *)(a1 + 56) = v178 + 2;
        goto LABEL_219;
      }
LABEL_244:
      v181 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v199, "Overflow encountered when expanding vector");
      *v181 = (char *)off_1C63128;
      sub_2333C0(v181 + 1, v199);
      sub_233E40((__int64)v199);
      __cxa_throw(v181, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v179 = (_QWORD *)sub_186B270(0x18u);
    *v179 = 2;
    v165 = v179 + 1;
    *(_QWORD *)(a1 + 56) = v179 + 1;
LABEL_219:
    v167 = *((_DWORD *)v165 - 1);
    v165[v167] = v164;
    *((_DWORD *)v165 - 1) = v167 + 1;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v168 = *(_QWORD *)(a1 + 40);
    result = *(unsigned int *)(v168 - 4);
    *(_DWORD *)(v168 - 4) = result - 1;
    if ( (_DWORD)result != 1 )
    {
      result = 16LL * (unsigned int)(result - 2);
      *(_BYTE *)(v168 + result + 8) |= 2u;
    }
  }
  v111 = *(_QWORD *)(a1 + 480);
  if ( v111 )
  {
    v106 = *(_QWORD *)(a1 + 488);
    v21 = (*(_DWORD *)(v111 + 8))-- == 1;
    if ( v21 )
      goto LABEL_225;
  }
LABEL_132:
  *(_QWORD *)(a1 + 480) = 0;
  return result;
}

