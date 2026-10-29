__int64 __fastcall sub_CEE8A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  unsigned int v7; // ebp
  __int64 v8; // rsi
  int v9; // eax
  __int64 result; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // r12d
  __int64 v16; // rdx
  int v17; // r12d
  int v18; // r8d
  _QWORD *v19; // r9
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rbp
  __int64 v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // rsi
  __int64 v36; // rdi
  _QWORD *v37; // rdx
  __int64 v38; // r12
  _QWORD *v39; // rax
  int v40; // eax
  __int64 *v41; // rcx
  _QWORD *v42; // rdx
  unsigned int v43; // r14d
  unsigned __int64 v44; // r13
  __int64 *v45; // r12
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rbp
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // r13
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // r12
  int v65; // eax
  _QWORD *v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int64 *v70; // rcx
  __int64 v71; // rdx
  _QWORD *v72; // rax
  __int64 v73; // rbp
  __int64 v74; // rsi
  __int64 v75; // rdi
  int v76; // ecx
  __int64 v77; // rdi
  int v78; // edx
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rsi
  __int64 v82; // rbp
  _QWORD *v83; // rcx
  unsigned int v84; // edx
  __int64 v85; // rsi
  int v86; // edx
  _QWORD *v87; // rax
  int v88; // ecx
  unsigned int v89; // r8d
  size_t v90; // rsi
  unsigned int *v91; // rax
  __int64 v92; // rcx
  unsigned int v93; // r12d
  size_t v94; // rsi
  unsigned int *v95; // rax
  __int64 v96; // rax
  int v97; // edx
  __int64 v98; // rax
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rdi
  unsigned int v103; // r8d
  unsigned __int64 v104; // r13
  __int64 *v105; // r12
  __int64 v106; // rsi
  __int64 v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rdx
  __int64 *v112; // rcx
  __int64 v113; // rdx
  unsigned int v114; // r11d
  __int64 *v115; // r10
  __int64 *v116; // rdx
  __int64 v117; // r11
  __int64 v118; // r12
  _QWORD *v119; // rcx
  int v120; // eax
  __int64 v121; // rsi
  __int64 v122; // rdi
  __int64 v123; // rsi
  int v124; // ecx
  __int64 v125; // rdi
  unsigned int v126; // r13d
  unsigned int v127; // eax
  unsigned int *v128; // rax
  __int64 v129; // rcx
  unsigned int v130; // r13d
  unsigned int v131; // eax
  unsigned int *v132; // rax
  __int64 v133; // rcx
  _QWORD *v134; // rax
  _QWORD *v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // rax
  __int64 v138; // r12
  _QWORD *v139; // rdx
  unsigned int v140; // r8d
  unsigned __int64 v141; // r13
  __int64 *v142; // r12
  __int64 v143; // rsi
  __int64 v144; // rdi
  __int64 v145; // r12
  _QWORD *v146; // rcx
  int v147; // eax
  __int64 v148; // rax
  unsigned __int64 v149; // r12
  __int64 *v150; // r13
  __int64 v151; // rsi
  __int64 v152; // rdi
  __int64 v153; // rdx
  __int64 v154; // rax
  __int64 v155; // rdi
  __int64 v156; // rsi
  __int64 v157; // r12
  int v158; // eax
  _QWORD *v159; // rdx
  unsigned int v160; // eax
  __int64 v161; // rcx
  int v162; // eax
  __int64 *v163; // rcx
  __int64 v164; // rsi
  __int64 v165; // rdi
  int v166; // ecx
  __int64 v167; // rsi
  __int64 v168; // rdi
  __int64 v169; // rsi
  __int64 v170; // rdi
  unsigned int v171; // r13d
  unsigned int v172; // eax
  unsigned int *v173; // rax
  __int64 v174; // rcx
  unsigned int v175; // r13d
  unsigned int v176; // ecx
  unsigned int *v177; // rax
  __int64 v178; // rcx
  _QWORD *v179; // rax
  __int64 v180; // rax
  __int64 v181; // rsi
  __int64 v182; // rdi
  _QWORD *v183; // rdx
  __int64 v184; // rdx
  char **exception; // r14
  char **v186; // r13
  char **v187; // r13
  char **v188; // rbp
  char **v189; // r13
  char **v190; // r13
  int v191; // [rsp+0h] [rbp-88h]
  _QWORD *v192; // [rsp+8h] [rbp-80h]
  int v193[2]; // [rsp+8h] [rbp-80h]
  unsigned int v194; // [rsp+8h] [rbp-80h]
  int v195[2]; // [rsp+8h] [rbp-80h]
  unsigned int v196; // [rsp+8h] [rbp-80h]
  unsigned int v197; // [rsp+8h] [rbp-80h]
  int v198[2]; // [rsp+8h] [rbp-80h]
  int v199[2]; // [rsp+10h] [rbp-78h]
  unsigned int v200; // [rsp+10h] [rbp-78h]
  int v201[2]; // [rsp+18h] [rbp-70h]
  __int64 v202; // [rsp+20h] [rbp-68h]
  __int64 *v203; // [rsp+28h] [rbp-60h]
  __int64 v204; // [rsp+30h] [rbp-58h] BYREF
  int v205; // [rsp+38h] [rbp-50h]
  int v206; // [rsp+40h] [rbp-48h]
  void *v207; // [rsp+48h] [rbp-40h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v48 = 515;
LABEL_44:
    sub_1872CE0("");
    sub_1873130(107, v48);
  }
  if ( v3 == 3 )
  {
    v48 = 520;
    goto LABEL_44;
  }
  if ( v3 )
  {
    v49 = a1[1];
    v50 = a1[11];
    v51 = a1[10];
    *(_QWORD *)v193 = v49;
    if ( v50 )
    {
      v52 = (unsigned int)(*(_DWORD *)(v50 - 4) - 1);
      v53 = *(_QWORD *)(v50 + 8 * v52);
      v54 = *(_DWORD *)(v50 - 4) - 1;
      if ( !v53 )
      {
        *(_DWORD *)(v50 - 4) = v52;
        goto LABEL_50;
      }
      ++*(_DWORD *)(v53 + 8);
      v55 = (unsigned int)(*(_DWORD *)(v50 - 4) - 1);
      v56 = *(_QWORD *)(v50 + 8 * v55);
      v54 = *(_DWORD *)(v50 - 4) - 1;
      *(_DWORD *)(v50 - 4) = v55;
      if ( !v56 )
      {
LABEL_50:
        v57 = (unsigned int)(v54 - 1);
        v58 = *(_QWORD *)(v50 + 8 * v57);
        if ( !v58 )
        {
          *(_DWORD *)(v50 - 4) = v57;
          goto LABEL_54;
        }
        ++*(_DWORD *)(v58 + 8);
        v59 = (unsigned int)(*(_DWORD *)(v50 - 4) - 1);
        v60 = *(_QWORD *)(v50 + 8 * v59);
        *(_DWORD *)(v50 - 4) = v59;
        if ( !v60 )
          goto LABEL_54;
        goto LABEL_52;
      }
    }
    else
    {
      v53 = MEMORY[0x7FFFFFFF8];
      if ( !MEMORY[0x7FFFFFFF8] )
      {
        v54 = --MEMORY[0xFFFFFFFFFFFFFFFC];
        goto LABEL_50;
      }
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v56 = MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    v25 = (*(_DWORD *)(v56 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v51, v56);
      v50 = a1[11];
      if ( !v50 )
      {
        v58 = MEMORY[0x7FFFFFFF8];
        if ( !MEMORY[0x7FFFFFFF8] )
        {
          --MEMORY[0xFFFFFFFFFFFFFFFC];
          goto LABEL_54;
        }
        ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
        v60 = MEMORY[0x7FFFFFFF8];
        v51 = a1[10];
        --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_52:
        v25 = (*(_DWORD *)(v60 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v51, v60);
LABEL_54:
        v61 = sub_15E2470(a1[1], v58, v53);
        v62 = a1[63];
        v63 = a1[62];
        v64 = v61;
        if ( v61 )
        {
          v65 = *(_DWORD *)(v61 + 8) + 1;
          *(_DWORD *)(v64 + 8) = v65;
          if ( v63 )
          {
            v25 = (*(_DWORD *)(v63 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v62, v63);
            a1[62] = v64;
            v65 = *(_DWORD *)(v64 + 8);
          }
          else
          {
            a1[62] = v64;
          }
          *(_DWORD *)(v64 + 8) = v65 + 1;
        }
        else
        {
          if ( v63 )
          {
            v25 = (*(_DWORD *)(v63 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v62, v63);
          }
          a1[62] = 0;
        }
        v66 = (_QWORD *)a1[11];
        if ( v66 )
        {
          v67 = *((_DWORD *)v66 - 1);
          if ( v67 == *((_DWORD *)v66 - 2) )
          {
            v89 = (3 * v67 + 1) >> 1;
            v90 = 8 * v89 + 8;
            if ( 8 * v67 + 8 >= (unsigned int)v90 || v67 >= v89 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_CECA40(&v204, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v204);
              sub_233E40((__int64)&v204);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v200 = (3 * v67 + 1) >> 1;
            v91 = (unsigned int *)sub_186B300(v66 - 1, v90);
            v92 = v91[1];
            v66 = v91 + 2;
            a1[11] = v91 + 2;
            *v91 = v200;
            LODWORD(v91) = v92;
            v70 = &v66[v92];
            v69 = (_DWORD)v91 + 1;
          }
          else
          {
            v68 = v67;
            v69 = v67 + 1;
            v70 = &v66[v68];
          }
        }
        else
        {
          v135 = (_QWORD *)sub_186B270(0x18u);
          v66 = v135 + 1;
          *v135 = 2;
          v69 = 1;
          a1[11] = v66;
          v70 = v66;
        }
        *v70 = v64;
        *((_DWORD *)v66 - 1) = v69;
        if ( v58 )
        {
          v25 = (*(_DWORD *)(v58 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(*(_QWORD *)v193, v58);
        }
        if ( v53 )
        {
          v25 = (*(_DWORD *)(v53 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(*(_QWORD *)v193, v53);
        }
        v71 = 0xFFFFFFFFLL;
        v72 = (_QWORD *)a1[7];
        if ( v72 )
          v71 = (unsigned int)(*((_DWORD *)v72 - 1) - 1);
        v73 = v72[v71];
        if ( v73 )
          ++*(_DWORD *)(v73 + 8);
        v74 = a1[60];
        if ( v74 )
        {
          v75 = a1[61];
          v25 = (*(_DWORD *)(v74 + 8))-- == 1;
          if ( v25 )
          {
            sub_15D7BC0(v75, v74);
            v72 = (_QWORD *)a1[7];
          }
        }
        v76 = *((_DWORD *)v72 - 1);
        v77 = a1[6];
        a1[60] = v73;
        v78 = v76 - 1;
        v79 = v72[v76 - 1];
        *((_DWORD *)v72 - 1) = v76 - 1;
        if ( v79 )
        {
          v25 = (*(_DWORD *)(v79 + 8))-- == 1;
          if ( v25 )
          {
            sub_15D7BC0(v77, v79);
            v72 = (_QWORD *)a1[7];
            v77 = a1[6];
          }
          v78 = *((_DWORD *)v72 - 1);
        }
        v80 = (unsigned int)(v78 - 1);
        v81 = v72[v80];
        *((_DWORD *)v72 - 1) = v80;
        if ( v81 && (v25 = *(_DWORD *)(v81 + 8) == 1, --*(_DWORD *)(v81 + 8), v25) )
        {
          sub_15D7BC0(v77, v81);
          v82 = a1[60];
          v72 = (_QWORD *)a1[7];
          if ( !v82 )
          {
LABEL_84:
            v83 = v72;
            if ( !v72 )
            {
              v134 = (_QWORD *)sub_186B270(0x18u);
              v86 = 1;
              v83 = v134 + 1;
              *v134 = 2;
              a1[7] = v134 + 1;
              v87 = v134 + 1;
LABEL_87:
              *v87 = v82;
              *((_DWORD *)v83 - 1) = v86;
              if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
                sub_15843A0(a1, a2, a1[60], a1[62]);
              result = a1[5];
              v88 = *(_DWORD *)(result - 4);
              *(_DWORD *)(result - 4) = v88 - 1;
              if ( v88 != 1 )
                *(_BYTE *)(result + 16LL * (unsigned int)(v88 - 2) + 8) |= 2u;
              return result;
            }
LABEL_85:
            v84 = *((_DWORD *)v72 - 1);
            if ( v84 == *((_DWORD *)v72 - 2) )
            {
              v93 = (3 * v84 + 1) >> 1;
              v94 = 8 * v93 + 8;
              if ( 8 * v84 + 8 >= (unsigned int)v94 || v84 >= v93 )
              {
                v188 = (char **)__cxa_allocate_exception(0x28u);
                sub_CECA40(&v204, "Overflow encountered when expanding vector");
                *v188 = (char *)off_1C63128;
                sub_2333C0(v188 + 1, &v204);
                sub_233E40((__int64)&v204);
                __cxa_throw(v188, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v95 = (unsigned int *)sub_186B300(v72 - 1, v94);
              v83 = v95 + 2;
              *v95 = v93;
              v96 = v95[1];
              a1[7] = v83;
              v97 = v96;
              v87 = &v83[v96];
              v86 = v97 + 1;
            }
            else
            {
              v85 = v84;
              v86 = v84 + 1;
              v87 = &v72[v85];
            }
            goto LABEL_87;
          }
        }
        else
        {
          v82 = a1[60];
          v83 = v72;
          if ( !v82 )
            goto LABEL_85;
        }
        ++*(_DWORD *)(v82 + 8);
        goto LABEL_84;
      }
      v54 = *(_DWORD *)(v50 - 4);
      v51 = a1[10];
    }
    else
    {
      v54 = *(_DWORD *)(v50 - 4);
    }
    goto LABEL_50;
  }
  v7 = *(_DWORD *)(a2 + 24);
  while ( 1 )
  {
    v11 = *(_DWORD *)(a3 + 8);
    v12 = v11 >> 6;
    if ( v11 >> 6 >= v7 )
      break;
    v8 = *(_QWORD *)(a2 + 8LL * v12 + 32);
    v9 = ((v12 + 1) << 6) | v11 & 0x3F;
    *(_DWORD *)(a3 + 8) = v9;
    result = sub_CEDFE0(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
    if ( !(_BYTE)result )
      return result;
  }
  v13 = a1[7];
  v14 = *(_QWORD *)(a2 + 16);
  if ( v13 )
    v15 = *(_DWORD *)(v13 - 4);
  else
    v15 = 0;
  v16 = *(unsigned int *)(a3 + 12);
  v17 = v15 - v16;
  v192 = (_QWORD *)(v13 + 8 * v16);
  *(_QWORD *)v199 = a1[1];
  sub_1584610(a1, v16);
  v20 = a1[11];
  if ( v20 )
    v21 = *(_DWORD *)(v20 - 4);
  else
    v21 = 0;
  v22 = v21 - *(_DWORD *)(a3 + 12);
  if ( v22 )
  {
    v98 = sub_15DC610(
            a1[1],
            v14,
            v17,
            (int)v192,
            v18,
            (int)v19,
            v191,
            (int)v192,
            v199[0],
            v22,
            v202,
            (char)v203,
            v204,
            v205,
            v206,
            v207);
    v26 = v98;
    if ( v98 )
      ++*(_DWORD *)(v98 + 8);
    v27 = sub_15E2980(a1[1]);
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v99 = a1[62];
    if ( v99 )
    {
      v100 = a1[63];
      v25 = (*(_DWORD *)(v99 + 8))-- == 1;
      if ( v25 )
      {
        *(_QWORD *)v201 = v27;
        sub_15D7BC0(v100, v99);
        v27 = *(_QWORD *)v201;
      }
    }
  }
  else
  {
    v23 = a1[62];
    ++*(_DWORD *)(a2 + 8);
    if ( v23 )
    {
      v24 = a1[63];
      v25 = (*(_DWORD *)(v23 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v24, v23);
    }
    v26 = a2;
    v27 = 0;
  }
  a1[62] = v27;
  if ( v17 != 2
    || (v28 = *(_DWORD **)(v14 + 24)) == nullptr
    || *v28
    || v28[1] != 2
    || (v108 = *v192, *(_WORD *)(*v192 + 4LL))
    || (v109 = v192[1], *(_WORD *)(v109 + 4))
    || (v110 = *(_QWORD *)(v108 + 16), v110 != *(_QWORD *)(v109 + 16))
    || *(_DWORD *)(v108 + 24) != 1
    || (v201[0] = *(_DWORD *)(v109 + 24), v201[0] != 1) )
  {
LABEL_19:
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v29 = sub_15DC610(
              a1[1],
              v14,
              v17,
              (int)v192,
              v18,
              (int)v19,
              v191,
              (int)v192,
              v199[0],
              v201[0],
              v202,
              (char)v203,
              v204,
              v205,
              v206,
              v207);
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      v31 = a1[60];
      if ( v31 )
      {
        v32 = a1[61];
        v25 = (*(_DWORD *)(v31 + 8))-- == 1;
        if ( v25 )
        {
          *(_QWORD *)v195 = v29;
          sub_15D7BC0(v32, v31);
          v30 = *(_QWORD *)v195;
        }
      }
      a1[60] = v30;
      v33 = sub_15DE370(a1[1]);
      v34 = v33;
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      v35 = a1[62];
      if ( v35 )
      {
        v36 = a1[63];
        v25 = (*(_DWORD *)(v35 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v36, v35);
      }
      v37 = (_QWORD *)a1[7];
      a1[62] = v34;
      if ( !v37 )
        goto LABEL_31;
    }
    else
    {
      v101 = a1[60];
      ++*(_DWORD *)(a2 + 8);
      if ( v101 )
      {
        v102 = a1[61];
        v25 = (*(_DWORD *)(v101 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v102, v101);
      }
      v37 = (_QWORD *)a1[7];
      a1[60] = a2;
      if ( !v37 )
      {
        v38 = a2;
        goto LABEL_32;
      }
    }
    v103 = *(_DWORD *)(a3 + 12);
    v104 = (unsigned __int64)&v37[*((unsigned int *)v37 - 1)];
    v105 = &v37[v103];
    if ( (unsigned __int64)v105 >= v104 )
      goto LABEL_145;
    do
    {
      v106 = *v105;
      if ( *v105 )
      {
        v107 = a1[6];
        v25 = (*(_DWORD *)(v106 + 8))-- == 1;
        if ( v25 )
        {
          v194 = v103;
          sub_15D7BC0(v107, v106);
          v103 = v194;
        }
      }
      ++v105;
    }
    while ( (unsigned __int64)v105 < v104 );
    v37 = (_QWORD *)a1[7];
    if ( v37 )
    {
LABEL_145:
      v38 = a1[60];
      *((_DWORD *)v37 - 1) = v103;
      if ( v38 )
      {
        ++*(_DWORD *)(v38 + 8);
        v103 = *((_DWORD *)v37 - 1);
      }
      if ( *((_DWORD *)v37 - 2) == v103 )
      {
        v126 = (3 * v103 + 1) >> 1;
        v127 = 8 * v126 + 8;
        if ( 8 * v103 + 8 >= v127 || v103 >= v126 )
        {
          v189 = (char **)__cxa_allocate_exception(0x28u);
          sub_CECA40(&v204, "Overflow encountered when expanding vector");
          *v189 = (char *)off_1C63128;
          sub_2333C0(v189 + 1, &v204);
          sub_233E40((__int64)&v204);
          __cxa_throw(v189, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v128 = (unsigned int *)sub_186B300(v37 - 1, v127);
        v129 = v128[1];
        v37 = v128 + 2;
        *v128 = v126;
        a1[7] = v128 + 2;
        LODWORD(v128) = v129;
        v41 = &v37[v129];
        v40 = (_DWORD)v128 + 1;
      }
      else
      {
        v41 = &v37[*((unsigned int *)v37 - 1)];
        v40 = *((_DWORD *)v37 - 1) + 1;
      }
      goto LABEL_34;
    }
LABEL_31:
    v38 = a1[60];
    if ( !v38 )
    {
LABEL_33:
      v39 = (_QWORD *)sub_186B270(0x18u);
      v37 = v39 + 1;
      *v39 = 2;
      v40 = 1;
      a1[7] = v37;
      v41 = v37;
LABEL_34:
      *v41 = v38;
      *((_DWORD *)v37 - 1) = v40;
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_15843A0(a1, a2, a1[60], a1[62]);
      v42 = (_QWORD *)a1[11];
      if ( !v42 )
        goto LABEL_177;
      v43 = *(_DWORD *)(a3 + 12);
      v44 = (unsigned __int64)&v42[*((unsigned int *)v42 - 1)];
      v45 = &v42[v43];
      if ( (unsigned __int64)v45 >= v44 )
        goto LABEL_150;
      do
      {
        v46 = *v45;
        if ( *v45 )
        {
          v47 = a1[10];
          v25 = (*(_DWORD *)(v46 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v47, v46);
        }
        ++v45;
      }
      while ( (unsigned __int64)v45 < v44 );
      v42 = (_QWORD *)a1[11];
      if ( v42 )
      {
LABEL_150:
        v118 = a1[62];
        *((_DWORD *)v42 - 1) = v43;
        if ( v118 )
        {
          ++*(_DWORD *)(v118 + 8);
          v43 = *((_DWORD *)v42 - 1);
        }
        if ( *((_DWORD *)v42 - 2) == v43 )
        {
          v130 = (3 * v43 + 1) >> 1;
          v131 = 8 * v130 + 8;
          if ( 8 * v43 + 8 >= v131 || v43 >= v130 )
          {
            v190 = (char **)__cxa_allocate_exception(0x28u);
            sub_CECA40(&v204, "Overflow encountered when expanding vector");
            *v190 = (char *)off_1C63128;
            sub_2333C0(v190 + 1, &v204);
            sub_233E40((__int64)&v204);
            __cxa_throw(v190, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v132 = (unsigned int *)sub_186B300(v42 - 1, v131);
          v133 = v132[1];
          v42 = v132 + 2;
          *v132 = v130;
          a1[11] = v132 + 2;
          LODWORD(v132) = v133;
          v119 = &v42[v133];
          v120 = (_DWORD)v132 + 1;
        }
        else
        {
          v119 = &v42[*((unsigned int *)v42 - 1)];
          v120 = *((_DWORD *)v42 - 1) + 1;
        }
      }
      else
      {
LABEL_177:
        v118 = a1[62];
        if ( v118 )
          ++*(_DWORD *)(v118 + 8);
        v136 = (_QWORD *)sub_186B270(0x18u);
        v42 = v136 + 1;
        *v136 = 2;
        v120 = 1;
        a1[11] = v42;
        v119 = v42;
      }
      *v119 = v118;
      v121 = a1[62];
      *((_DWORD *)v42 - 1) = v120;
      if ( v121 )
      {
        v122 = a1[63];
        v25 = (*(_DWORD *)(v121 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v122, v121);
      }
      result = a1[5];
      v123 = a1[60];
      a1[62] = 0;
      v124 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v124 - 1;
      if ( a2 != v123 && v124 != 1 )
      {
        *(_BYTE *)(result + 16LL * (unsigned int)(v124 - 2) + 8) |= 2u;
        v123 = a1[60];
      }
      if ( v123 )
      {
        v125 = a1[61];
        v25 = (*(_DWORD *)(v123 + 8))-- == 1;
        if ( v25 )
          result = sub_15D7BC0(v125, v123);
      }
      a1[60] = 0;
      goto LABEL_164;
    }
LABEL_32:
    ++*(_DWORD *)(v38 + 8);
    goto LABEL_33;
  }
  v19 = (_QWORD *)a1[18];
  v18 = *(_DWORD *)(v110 + 12);
  v111 = v19[1];
  v112 = *(__int64 **)v111;
  v113 = *(unsigned int *)(v111 + 8);
  v114 = v113 - 1;
  v113 *= 16;
  v202 = 16LL * (v18 & v114);
  v115 = &v112[(unsigned __int64)v202 / 8];
  v203 = (__int64 *)((char *)v112 + v113);
  if ( v202 == v113 )
  {
LABEL_252:
    if ( v112 != v115 )
    {
      while ( 1 )
      {
        v184 = *v112;
        if ( (unsigned __int64)*v112 > 1 )
        {
          if ( *(_DWORD *)(v184 + 12) == v18 && v110 == v184 )
            goto LABEL_184;
        }
        else if ( !v184 )
        {
          goto LABEL_19;
        }
        v112 += 2;
        if ( v115 == v112 )
          goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
  v116 = &v112[(unsigned __int64)v202 / 8];
  while ( 1 )
  {
    v117 = *v116;
    if ( (unsigned __int64)*v116 > 1 )
      break;
    if ( !v117 )
      goto LABEL_19;
LABEL_132:
    v116 += 2;
    if ( v203 == v116 )
      goto LABEL_252;
  }
  if ( *(_DWORD *)(v117 + 12) != v18 || v110 != v117 )
    goto LABEL_132;
LABEL_184:
  v137 = sub_15E1B70(*v19);
  v138 = v137;
  if ( v137 )
    ++*(_DWORD *)(v137 + 8);
  sub_CECA20(a1[60], a1[61]);
  a1[60] = v138;
  sub_CECA00(a1[64], a1[65]);
  a1[64] = 0;
  v139 = (_QWORD *)a1[7];
  if ( !v139 )
    goto LABEL_237;
  v140 = *(_DWORD *)(a3 + 12);
  v141 = (unsigned __int64)&v139[*((unsigned int *)v139 - 1)];
  v142 = &v139[v140];
  if ( (unsigned __int64)v142 >= v141 )
    goto LABEL_194;
  do
  {
    v143 = *v142;
    if ( *v142 )
    {
      v144 = a1[6];
      v25 = (*(_DWORD *)(v143 + 8))-- == 1;
      if ( v25 )
      {
        v196 = v140;
        sub_15D7BC0(v144, v143);
        v140 = v196;
      }
    }
    ++v142;
  }
  while ( (unsigned __int64)v142 < v141 );
  v139 = (_QWORD *)a1[7];
  if ( v139 )
  {
LABEL_194:
    v145 = a1[60];
    *((_DWORD *)v139 - 1) = v140;
    if ( v145 )
    {
      ++*(_DWORD *)(v145 + 8);
      v140 = *((_DWORD *)v139 - 1);
    }
    if ( *((_DWORD *)v139 - 2) == v140 )
    {
      v171 = (3 * v140 + 1) >> 1;
      v172 = 8 * v171 + 8;
      if ( 8 * v140 + 8 >= v172 || v140 >= v171 )
      {
        v186 = (char **)__cxa_allocate_exception(0x28u);
        sub_CECA40(&v204, "Overflow encountered when expanding vector");
        *v186 = (char *)off_1C63128;
        sub_2333C0(v186 + 1, &v204);
        sub_233E40((__int64)&v204);
        __cxa_throw(v186, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v173 = (unsigned int *)sub_186B300(v139 - 1, v172);
      v174 = v173[1];
      v139 = v173 + 2;
      *v173 = v171;
      a1[7] = v173 + 2;
      LODWORD(v173) = v174;
      v146 = &v139[v174];
      v147 = (_DWORD)v173 + 1;
    }
    else
    {
      v146 = &v139[*((unsigned int *)v139 - 1)];
      v147 = *((_DWORD *)v139 - 1) + 1;
    }
  }
  else
  {
LABEL_237:
    v145 = a1[60];
    if ( v145 )
      ++*(_DWORD *)(v145 + 8);
    v179 = (_QWORD *)sub_186B270(0x18u);
    v139 = v179 + 1;
    *v179 = 2;
    v147 = 1;
    a1[7] = v139;
    v146 = v139;
  }
  *v146 = v145;
  *((_DWORD *)v139 - 1) = v147;
  v148 = a1[11];
  if ( v148 )
  {
    v149 = v148 + 8LL * *(unsigned int *)(v148 - 4);
    v197 = *(_DWORD *)(a3 + 12);
    v150 = (__int64 *)(v148 + 8LL * v197);
    if ( (unsigned __int64)v150 >= v149 )
      goto LABEL_206;
    do
    {
      v151 = *v150;
      if ( *v150 )
      {
        v152 = a1[10];
        v25 = (*(_DWORD *)(v151 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v152, v151);
      }
      ++v150;
    }
    while ( (unsigned __int64)v150 < v149 );
    v148 = a1[11];
    if ( v148 )
LABEL_206:
      *(_DWORD *)(v148 - 4) = v197;
  }
  v153 = a1[64];
  if ( !v153 )
  {
    v180 = sub_15DE370(a1[1]);
    v153 = v180;
    if ( v180 )
      ++*(_DWORD *)(v180 + 8);
    v181 = a1[64];
    if ( v181 )
    {
      v182 = a1[65];
      v25 = (*(_DWORD *)(v181 + 8))-- == 1;
      if ( v25 )
      {
        *(_QWORD *)v198 = v180;
        sub_15D7BC0(v182, v181);
        v153 = *(_QWORD *)v198;
      }
    }
    a1[64] = v153;
  }
  v154 = sub_15E2470(a1[1], a1[62], v153);
  v155 = a1[63];
  v156 = a1[62];
  v157 = v154;
  if ( v154 )
  {
    v158 = *(_DWORD *)(v154 + 8) + 1;
    *(_DWORD *)(v157 + 8) = v158;
    if ( v156 )
    {
      v25 = (*(_DWORD *)(v156 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v155, v156);
      a1[62] = v157;
      v158 = *(_DWORD *)(v157 + 8);
    }
    else
    {
      a1[62] = v157;
    }
    *(_DWORD *)(v157 + 8) = v158 + 1;
  }
  else
  {
    if ( v156 )
    {
      v25 = (*(_DWORD *)(v156 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v155, v156);
    }
    a1[62] = 0;
  }
  v159 = (_QWORD *)a1[11];
  if ( v159 )
  {
    v160 = *((_DWORD *)v159 - 1);
    if ( v160 == *((_DWORD *)v159 - 2) )
    {
      v175 = (3 * v160 + 1) >> 1;
      v176 = 8 * v175 + 8;
      if ( 8 * v160 + 8 >= v176 || v160 >= v175 )
      {
        v187 = (char **)__cxa_allocate_exception(0x28u);
        sub_CECA40(&v204, "Overflow encountered when expanding vector");
        *v187 = (char *)off_1C63128;
        sub_2333C0(v187 + 1, &v204);
        sub_233E40((__int64)&v204);
        __cxa_throw(v187, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v177 = (unsigned int *)sub_186B300(v159 - 1, v176);
      v178 = v177[1];
      v159 = v177 + 2;
      *v177 = v175;
      a1[11] = v177 + 2;
      LODWORD(v177) = v178;
      v163 = &v159[v178];
      v162 = (_DWORD)v177 + 1;
    }
    else
    {
      v161 = v160;
      v162 = v160 + 1;
      v163 = &v159[v161];
    }
  }
  else
  {
    v183 = (_QWORD *)sub_186B270(0x18u);
    *v183 = 2;
    v162 = 1;
    v159 = v183 + 1;
    a1[11] = v159;
    v163 = v159;
  }
  *v163 = v157;
  v164 = a1[64];
  *((_DWORD *)v159 - 1) = v162;
  if ( v164 )
  {
    v165 = a1[65];
    v25 = (*(_DWORD *)(v164 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v165, v164);
  }
  a1[64] = 0;
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, a1[60], a1[62]);
  result = a1[5];
  v166 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v166 - 1;
  if ( v166 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v166 - 2) + 8) |= 2u;
  v167 = a1[60];
  if ( v167 )
  {
    v168 = a1[61];
    v25 = (*(_DWORD *)(v167 + 8))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v168, v167);
  }
  v169 = a1[62];
  a1[60] = 0;
  if ( v169 )
  {
    v170 = a1[63];
    v25 = (*(_DWORD *)(v169 + 8))-- == 1;
    if ( v25 )
      result = sub_15D7BC0(v170, v169);
  }
  a1[62] = 0;
LABEL_164:
  if ( v26 )
  {
    v25 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v25 )
      return sub_15D7BC0(*(_QWORD *)v199, v26);
  }
  return result;
}

