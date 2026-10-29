__int64 __fastcall sub_763B00(_QWORD *a1, __int64 a2, __int64 a3)
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
  unsigned int v17; // r12d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  __int64 *v32; // r13
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // r13
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rbp
  __int64 v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // r12
  int v52; // eax
  _QWORD *v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 *v57; // rcx
  __int64 v58; // rdx
  _QWORD *v59; // rax
  __int64 v60; // rbp
  __int64 v61; // rsi
  __int64 v62; // rdi
  int v63; // ecx
  __int64 v64; // rdi
  int v65; // edx
  __int64 v66; // rsi
  __int64 v67; // rcx
  __int64 v68; // rsi
  __int64 v69; // rbp
  _QWORD *v70; // rcx
  unsigned int v71; // edx
  __int64 v72; // rsi
  int v73; // edx
  _QWORD *v74; // rax
  int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // r12
  __int64 *v79; // r13
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // r12
  int v87; // eax
  _QWORD *v88; // rdx
  unsigned int v89; // eax
  __int64 v90; // rcx
  int v91; // eax
  __int64 *v92; // rcx
  __int64 v93; // rsi
  __int64 v94; // rdi
  int v95; // ecx
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rdi
  unsigned int v100; // r8d
  size_t v101; // rsi
  unsigned int *v102; // rax
  __int64 v103; // rcx
  unsigned int v104; // r12d
  size_t v105; // rsi
  unsigned int *v106; // rax
  __int64 v107; // rax
  int v108; // edx
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rsi
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // r12
  __int64 v115; // rsi
  __int64 v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rdi
  __int64 v120; // rsi
  __int64 v121; // rdi
  __int64 v122; // rax
  unsigned __int64 v123; // r12
  __int64 *v124; // r13
  __int64 v125; // rsi
  __int64 v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rsi
  __int64 v129; // rdi
  __int64 v130; // rax
  _QWORD *v131; // rdx
  unsigned int v132; // r12d
  unsigned __int64 v133; // r14
  __int64 *v134; // r13
  __int64 v135; // rsi
  __int64 v136; // rdi
  __int64 v137; // r13
  _QWORD *v138; // rcx
  int v139; // eax
  __int64 v140; // rsi
  __int64 v141; // rdi
  __int64 v142; // rsi
  int v143; // ecx
  __int64 v144; // rdi
  unsigned int v145; // r14d
  unsigned int v146; // eax
  unsigned int *v147; // rax
  __int64 v148; // rcx
  unsigned int v149; // r13d
  unsigned int v150; // ecx
  unsigned int *v151; // rax
  __int64 v152; // rcx
  _QWORD *v153; // rax
  _QWORD *v154; // rax
  _QWORD *v155; // rax
  _QWORD *v156; // rdx
  char **v157; // rbx
  char **v158; // rbx
  char **exception; // r15
  char **v160; // rbx
  int v161; // [rsp+0h] [rbp-88h]
  int v162[2]; // [rsp+8h] [rbp-80h]
  unsigned int v163; // [rsp+8h] [rbp-80h]
  int v164[2]; // [rsp+8h] [rbp-80h]
  unsigned int v165; // [rsp+8h] [rbp-80h]
  unsigned int v166; // [rsp+8h] [rbp-80h]
  int v167[2]; // [rsp+8h] [rbp-80h]
  int v168[2]; // [rsp+8h] [rbp-80h]
  int v169[2]; // [rsp+10h] [rbp-78h]
  unsigned int v170; // [rsp+10h] [rbp-78h]
  int v171[2]; // [rsp+18h] [rbp-70h]
  int v172; // [rsp+20h] [rbp-68h]
  __int64 v173; // [rsp+28h] [rbp-60h] BYREF
  __int64 v174; // [rsp+30h] [rbp-58h] BYREF
  int v175; // [rsp+38h] [rbp-50h]
  int v176; // [rsp+40h] [rbp-48h]
  void *v177; // [rsp+48h] [rbp-40h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v3 == 2 )
  {
    v35 = 515;
LABEL_25:
    sub_1872CE0("");
    sub_1873130(107, v35);
  }
  if ( v3 == 3 )
  {
    v35 = 520;
    goto LABEL_25;
  }
  if ( v3 )
  {
    v36 = a1[1];
    v37 = a1[11];
    v38 = a1[10];
    *(_QWORD *)v164 = v36;
    if ( v37 )
    {
      v39 = (unsigned int)(*(_DWORD *)(v37 - 4) - 1);
      v40 = *(_QWORD *)(v37 + 8 * v39);
      v41 = *(_DWORD *)(v37 - 4) - 1;
      if ( !v40 )
      {
        *(_DWORD *)(v37 - 4) = v39;
        goto LABEL_31;
      }
      ++*(_DWORD *)(v40 + 8);
      v42 = (unsigned int)(*(_DWORD *)(v37 - 4) - 1);
      v43 = *(_QWORD *)(v37 + 8 * v42);
      v41 = *(_DWORD *)(v37 - 4) - 1;
      *(_DWORD *)(v37 - 4) = v42;
      if ( !v43 )
      {
LABEL_31:
        v44 = (unsigned int)(v41 - 1);
        v45 = *(_QWORD *)(v37 + 8 * v44);
        if ( !v45 )
        {
          *(_DWORD *)(v37 - 4) = v44;
          goto LABEL_35;
        }
        ++*(_DWORD *)(v45 + 8);
        v46 = (unsigned int)(*(_DWORD *)(v37 - 4) - 1);
        v47 = *(_QWORD *)(v37 + 8 * v46);
        *(_DWORD *)(v37 - 4) = v46;
        if ( !v47 )
          goto LABEL_35;
        goto LABEL_33;
      }
    }
    else
    {
      v40 = MEMORY[0x7FFFFFFF8];
      if ( !MEMORY[0x7FFFFFFF8] )
      {
        v41 = --MEMORY[0xFFFFFFFFFFFFFFFC];
        goto LABEL_31;
      }
      ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
      v43 = MEMORY[0x7FFFFFFF8];
      --MEMORY[0xFFFFFFFFFFFFFFFC];
    }
    v25 = (*(_DWORD *)(v43 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v38, v43);
      v37 = a1[11];
      if ( !v37 )
      {
        v45 = MEMORY[0x7FFFFFFF8];
        if ( !MEMORY[0x7FFFFFFF8] )
        {
          --MEMORY[0xFFFFFFFFFFFFFFFC];
          goto LABEL_35;
        }
        ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
        v47 = MEMORY[0x7FFFFFFF8];
        v38 = a1[10];
        --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_33:
        v25 = (*(_DWORD *)(v47 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v38, v47);
LABEL_35:
        v48 = sub_15E2470(a1[1], v45, v40);
        v49 = a1[62];
        v50 = a1[63];
        v51 = v48;
        if ( v48 )
        {
          v52 = *(_DWORD *)(v48 + 8) + 1;
          *(_DWORD *)(v51 + 8) = v52;
          if ( v49 )
          {
            v25 = (*(_DWORD *)(v49 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v50, v49);
            a1[62] = v51;
            v52 = *(_DWORD *)(v51 + 8);
          }
          else
          {
            a1[62] = v51;
          }
          *(_DWORD *)(v51 + 8) = v52 + 1;
        }
        else
        {
          if ( v49 )
          {
            v25 = (*(_DWORD *)(v49 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v50, v49);
          }
          a1[62] = 0;
        }
        v53 = (_QWORD *)a1[11];
        if ( v53 )
        {
          v54 = *((_DWORD *)v53 - 1);
          if ( v54 == *((_DWORD *)v53 - 2) )
          {
            v100 = (3 * v54 + 1) >> 1;
            v101 = 8 * v100 + 8;
            if ( 8 * v54 + 8 >= (unsigned int)v101 || v54 >= v100 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_75C2B0(&v174, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v174);
              sub_233E40((__int64)&v174);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v170 = (3 * v54 + 1) >> 1;
            v102 = (unsigned int *)sub_186B300(v53 - 1, v101);
            v103 = v102[1];
            v53 = v102 + 2;
            a1[11] = v102 + 2;
            *v102 = v170;
            LODWORD(v102) = v103;
            v57 = &v53[v103];
            v56 = (_DWORD)v102 + 1;
          }
          else
          {
            v55 = v54;
            v56 = v54 + 1;
            v57 = &v53[v55];
          }
        }
        else
        {
          v154 = (_QWORD *)sub_186B270(0x18u);
          v53 = v154 + 1;
          *v154 = 2;
          v56 = 1;
          a1[11] = v53;
          v57 = v53;
        }
        *v57 = v51;
        *((_DWORD *)v53 - 1) = v56;
        if ( v45 )
        {
          v25 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(*(_QWORD *)v164, v45);
        }
        if ( v40 )
        {
          v25 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(*(_QWORD *)v164, v40);
        }
        v58 = 0xFFFFFFFFLL;
        v59 = (_QWORD *)a1[7];
        if ( v59 )
          v58 = (unsigned int)(*((_DWORD *)v59 - 1) - 1);
        v60 = v59[v58];
        if ( v60 )
          ++*(_DWORD *)(v60 + 8);
        v61 = a1[60];
        if ( v61 )
        {
          v62 = a1[61];
          v25 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v25 )
          {
            sub_15D7BC0(v62, v61);
            v59 = (_QWORD *)a1[7];
          }
        }
        v63 = *((_DWORD *)v59 - 1);
        v64 = a1[6];
        a1[60] = v60;
        v65 = v63 - 1;
        v66 = v59[v63 - 1];
        *((_DWORD *)v59 - 1) = v63 - 1;
        if ( v66 )
        {
          v25 = (*(_DWORD *)(v66 + 8))-- == 1;
          if ( v25 )
          {
            sub_15D7BC0(v64, v66);
            v59 = (_QWORD *)a1[7];
            v64 = a1[6];
          }
          v65 = *((_DWORD *)v59 - 1);
        }
        v67 = (unsigned int)(v65 - 1);
        v68 = v59[v67];
        *((_DWORD *)v59 - 1) = v67;
        if ( v68 && (v25 = *(_DWORD *)(v68 + 8) == 1, --*(_DWORD *)(v68 + 8), v25) )
        {
          sub_15D7BC0(v64, v68);
          v69 = a1[60];
          v59 = (_QWORD *)a1[7];
          if ( !v69 )
          {
LABEL_65:
            v70 = v59;
            if ( !v59 )
            {
              v153 = (_QWORD *)sub_186B270(0x18u);
              v73 = 1;
              v70 = v153 + 1;
              *v153 = 2;
              a1[7] = v153 + 1;
              v74 = v153 + 1;
LABEL_68:
              *v74 = v69;
              *((_DWORD *)v70 - 1) = v73;
              if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
                sub_15843A0(a1, a2, a1[60], a1[62]);
              result = a1[5];
              v75 = *(_DWORD *)(result - 4);
              *(_DWORD *)(result - 4) = v75 - 1;
              if ( v75 != 1 )
                *(_BYTE *)(result + 16LL * (unsigned int)(v75 - 2) + 8) |= 2u;
              return result;
            }
LABEL_66:
            v71 = *((_DWORD *)v59 - 1);
            if ( v71 == *((_DWORD *)v59 - 2) )
            {
              v104 = (3 * v71 + 1) >> 1;
              v105 = 8 * v104 + 8;
              if ( 8 * v71 + 8 >= (unsigned int)v105 || v71 >= v104 )
              {
                v158 = (char **)__cxa_allocate_exception(0x28u);
                sub_75C2B0(&v174, "Overflow encountered when expanding vector");
                *v158 = (char *)off_1C63128;
                sub_2333C0(v158 + 1, &v174);
                sub_233E40((__int64)&v174);
                __cxa_throw(v158, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v106 = (unsigned int *)sub_186B300(v59 - 1, v105);
              v70 = v106 + 2;
              *v106 = v104;
              v107 = v106[1];
              a1[7] = v70;
              v108 = v107;
              v74 = &v70[v107];
              v73 = v108 + 1;
            }
            else
            {
              v72 = v71;
              v73 = v71 + 1;
              v74 = &v59[v72];
            }
            goto LABEL_68;
          }
        }
        else
        {
          v69 = a1[60];
          v70 = v59;
          if ( !v69 )
            goto LABEL_66;
        }
        ++*(_DWORD *)(v69 + 8);
        goto LABEL_65;
      }
      v41 = *(_DWORD *)(v37 - 4);
      v38 = a1[10];
    }
    else
    {
      v41 = *(_DWORD *)(v37 - 4);
    }
    goto LABEL_31;
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
    result = sub_763290(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
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
  *(_QWORD *)v162 = v13 + 8 * v16;
  *(_QWORD *)v169 = a1[1];
  sub_1584610(a1, v16);
  v20 = a1[11];
  if ( v20 )
    v21 = *(_DWORD *)(v20 - 4);
  else
    v21 = 0;
  v22 = v21 - *(_DWORD *)(a3 + 12);
  if ( v22 )
  {
    v117 = sub_15DC610(
             a1[1],
             v14,
             v17,
             v162[0],
             v18,
             v19,
             v161,
             v162[0],
             v169[0],
             v22,
             v172,
             v173,
             v174,
             v175,
             v176,
             v177);
    v26 = v117;
    if ( v117 )
      ++*(_DWORD *)(v117 + 8);
    v27 = sub_15E2980(a1[1]);
    if ( v27 )
      ++*(_DWORD *)(v27 + 8);
    v118 = a1[62];
    if ( v118 )
    {
      v119 = a1[63];
      v25 = (*(_DWORD *)(v118 + 8))-- == 1;
      if ( v25 )
      {
        *(_QWORD *)v171 = v27;
        sub_15D7BC0(v119, v118);
        v27 = *(_QWORD *)v171;
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
  if ( (unsigned int)sub_762950(a1[18], v14, v17, *(_QWORD *)v162, a1 + 60, a1 + 64) == 5 )
  {
    if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
    {
      v109 = sub_15DC610(
               a1[1],
               v14,
               v17,
               v162[0],
               v28,
               v29,
               v161,
               v162[0],
               v169[0],
               v171[0],
               v172,
               v173,
               v174,
               v175,
               v176,
               v177);
      v110 = v109;
      if ( v109 )
        ++*(_DWORD *)(v109 + 8);
      v111 = a1[60];
      if ( v111 )
      {
        v112 = a1[61];
        v25 = (*(_DWORD *)(v111 + 8))-- == 1;
        if ( v25 )
        {
          *(_QWORD *)v167 = v109;
          sub_15D7BC0(v112, v111);
          v110 = *(_QWORD *)v167;
        }
      }
      a1[60] = v110;
      v113 = sub_15DE370(a1[1]);
      v114 = v113;
      if ( v113 )
        ++*(_DWORD *)(v113 + 8);
      v115 = a1[62];
      if ( v115 )
      {
        v116 = a1[63];
        v25 = (*(_DWORD *)(v115 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v116, v115);
      }
      a1[62] = v114;
    }
    else
    {
      v120 = a1[60];
      ++*(_DWORD *)(a2 + 8);
      if ( v120 )
      {
        v121 = a1[61];
        v25 = (*(_DWORD *)(v120 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v121, v120);
      }
      a1[60] = a2;
    }
    v122 = a1[7];
    if ( v122 )
    {
      v123 = v122 + 8LL * *(unsigned int *)(v122 - 4);
      v166 = *(_DWORD *)(a3 + 12);
      v124 = (__int64 *)(v122 + 8LL * v166);
      if ( (unsigned __int64)v124 >= v123 )
        goto LABEL_167;
      do
      {
        v125 = *v124;
        if ( *v124 )
        {
          v126 = a1[6];
          v25 = (*(_DWORD *)(v125 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v126, v125);
        }
        ++v124;
      }
      while ( (unsigned __int64)v124 < v123 );
      v122 = a1[7];
      if ( v122 )
LABEL_167:
        *(_DWORD *)(v122 - 4) = v166;
    }
    v130 = a1[60];
    v174 = v130;
    if ( v130 )
      ++*(_DWORD *)(v130 + 8);
    sub_75C790(a1 + 7, &v174);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    v131 = (_QWORD *)a1[11];
    if ( !v131 )
      goto LABEL_212;
    v132 = *(_DWORD *)(a3 + 12);
    v133 = (unsigned __int64)&v131[*((unsigned int *)v131 - 1)];
    v134 = &v131[v132];
    if ( (unsigned __int64)v134 >= v133 )
      goto LABEL_188;
    do
    {
      v135 = *v134;
      if ( *v134 )
      {
        v136 = a1[10];
        v25 = (*(_DWORD *)(v135 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v136, v135);
      }
      ++v134;
    }
    while ( (unsigned __int64)v134 < v133 );
    v131 = (_QWORD *)a1[11];
    if ( v131 )
    {
LABEL_188:
      v137 = a1[62];
      *((_DWORD *)v131 - 1) = v132;
      if ( v137 )
      {
        ++*(_DWORD *)(v137 + 8);
        v132 = *((_DWORD *)v131 - 1);
      }
      if ( *((_DWORD *)v131 - 2) == v132 )
      {
        v145 = (3 * v132 + 1) >> 1;
        v146 = 8 * v145 + 8;
        if ( 8 * v132 + 8 >= v146 || v132 >= v145 )
        {
          v157 = (char **)__cxa_allocate_exception(0x28u);
          sub_75C2B0(&v174, "Overflow encountered when expanding vector");
          *v157 = (char *)off_1C63128;
          sub_2333C0(v157 + 1, &v174);
          sub_233E40((__int64)&v174);
          __cxa_throw(v157, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v147 = (unsigned int *)sub_186B300(v131 - 1, v146);
        v148 = v147[1];
        v131 = v147 + 2;
        *v147 = v145;
        a1[11] = v147 + 2;
        LODWORD(v147) = v148;
        v138 = &v131[v148];
        v139 = (_DWORD)v147 + 1;
      }
      else
      {
        v138 = &v131[*((unsigned int *)v131 - 1)];
        v139 = *((_DWORD *)v131 - 1) + 1;
      }
    }
    else
    {
LABEL_212:
      v137 = a1[62];
      if ( v137 )
        ++*(_DWORD *)(v137 + 8);
      v155 = (_QWORD *)sub_186B270(0x18u);
      v131 = v155 + 1;
      *v155 = 2;
      v139 = 1;
      a1[11] = v131;
      v138 = v131;
    }
    *v138 = v137;
    v140 = a1[62];
    *((_DWORD *)v131 - 1) = v139;
    if ( v140 )
    {
      v141 = a1[63];
      v25 = (*(_DWORD *)(v140 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v141, v140);
    }
    result = a1[5];
    v142 = a1[60];
    a1[62] = 0;
    v143 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v143 - 1;
    if ( a2 != v142 && v143 != 1 )
    {
      *(_BYTE *)(result + 16LL * (unsigned int)(v143 - 2) + 8) |= 2u;
      v142 = a1[60];
    }
    if ( v142 )
    {
      v144 = a1[61];
      v25 = (*(_DWORD *)(v142 + 8))-- == 1;
      if ( v25 )
        result = sub_15D7BC0(v144, v142);
    }
    a1[60] = 0;
  }
  else
  {
    v30 = a1[7];
    if ( v30 )
    {
      v31 = v30 + 8LL * *(unsigned int *)(v30 - 4);
      v163 = *(_DWORD *)(a3 + 12);
      v32 = (__int64 *)(v30 + 8LL * v163);
      if ( (unsigned __int64)v32 >= v31 )
        goto LABEL_75;
      do
      {
        v33 = *v32;
        if ( *v32 )
        {
          v34 = a1[6];
          v25 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v34, v33);
        }
        ++v32;
      }
      while ( (unsigned __int64)v32 < v31 );
      v30 = a1[7];
      if ( v30 )
LABEL_75:
        *(_DWORD *)(v30 - 4) = v163;
    }
    v76 = a1[60];
    v173 = v76;
    if ( v76 )
      ++*(_DWORD *)(v76 + 8);
    sub_75C790(a1 + 7, &v173);
    v77 = a1[11];
    if ( v77 )
    {
      v78 = v77 + 8LL * *(unsigned int *)(v77 - 4);
      v165 = *(_DWORD *)(a3 + 12);
      v79 = (__int64 *)(v77 + 8LL * v165);
      if ( (unsigned __int64)v79 >= v78 )
        goto LABEL_86;
      do
      {
        v80 = *v79;
        if ( *v79 )
        {
          v81 = a1[10];
          v25 = (*(_DWORD *)(v80 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v81, v80);
        }
        ++v79;
      }
      while ( (unsigned __int64)v79 < v78 );
      v77 = a1[11];
      if ( v77 )
LABEL_86:
        *(_DWORD *)(v77 - 4) = v165;
    }
    v82 = a1[64];
    if ( !v82 )
    {
      v127 = sub_15DE370(a1[1]);
      v82 = v127;
      if ( v127 )
        ++*(_DWORD *)(v127 + 8);
      v128 = a1[64];
      if ( v128 )
      {
        v129 = a1[65];
        v25 = (*(_DWORD *)(v128 + 8))-- == 1;
        if ( v25 )
        {
          *(_QWORD *)v168 = v127;
          sub_15D7BC0(v129, v128);
          v82 = *(_QWORD *)v168;
        }
      }
      a1[64] = v82;
    }
    v83 = sub_15E2470(a1[1], a1[62], v82);
    v84 = a1[62];
    v85 = a1[63];
    v86 = v83;
    if ( v83 )
    {
      v87 = *(_DWORD *)(v83 + 8) + 1;
      *(_DWORD *)(v86 + 8) = v87;
      if ( v84 )
      {
        v25 = (*(_DWORD *)(v84 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v85, v84);
        a1[62] = v86;
        v87 = *(_DWORD *)(v86 + 8);
      }
      else
      {
        a1[62] = v86;
      }
      *(_DWORD *)(v86 + 8) = v87 + 1;
    }
    else
    {
      if ( v84 )
      {
        v25 = (*(_DWORD *)(v84 + 8))-- == 1;
        if ( v25 )
          sub_15D7BC0(v85, v84);
      }
      a1[62] = 0;
    }
    v88 = (_QWORD *)a1[11];
    if ( v88 )
    {
      v89 = *((_DWORD *)v88 - 1);
      if ( v89 == *((_DWORD *)v88 - 2) )
      {
        v149 = (3 * v89 + 1) >> 1;
        v150 = 8 * v149 + 8;
        if ( 8 * v89 + 8 >= v150 || v89 >= v149 )
        {
          v160 = (char **)__cxa_allocate_exception(0x28u);
          sub_75C2B0(&v174, "Overflow encountered when expanding vector");
          *v160 = (char *)off_1C63128;
          sub_2333C0(v160 + 1, &v174);
          sub_233E40((__int64)&v174);
          __cxa_throw(v160, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v151 = (unsigned int *)sub_186B300(v88 - 1, v150);
        v152 = v151[1];
        v88 = v151 + 2;
        *v151 = v149;
        a1[11] = v151 + 2;
        LODWORD(v151) = v152;
        v92 = &v88[v152];
        v91 = (_DWORD)v151 + 1;
      }
      else
      {
        v90 = v89;
        v91 = v89 + 1;
        v92 = &v88[v90];
      }
    }
    else
    {
      v156 = (_QWORD *)sub_186B270(0x18u);
      *v156 = 2;
      v91 = 1;
      v88 = v156 + 1;
      a1[11] = v88;
      v92 = v88;
    }
    *v92 = v86;
    v93 = a1[64];
    *((_DWORD *)v88 - 1) = v91;
    if ( v93 )
    {
      v94 = a1[65];
      v25 = (*(_DWORD *)(v93 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v94, v93);
    }
    a1[64] = 0;
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_15843A0(a1, a2, a1[60], a1[62]);
    result = a1[5];
    v95 = *(_DWORD *)(result - 4);
    *(_DWORD *)(result - 4) = v95 - 1;
    if ( v95 != 1 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v95 - 2) + 8) |= 2u;
    v96 = a1[60];
    if ( v96 )
    {
      v97 = a1[61];
      v25 = (*(_DWORD *)(v96 + 8))-- == 1;
      if ( v25 )
        result = sub_15D7BC0(v97, v96);
    }
    v98 = a1[62];
    a1[60] = 0;
    if ( v98 )
    {
      v99 = a1[63];
      v25 = (*(_DWORD *)(v98 + 8))-- == 1;
      if ( v25 )
        result = sub_15D7BC0(v99, v98);
    }
    a1[62] = 0;
  }
  if ( v26 )
  {
    v25 = (*(_DWORD *)(v26 + 8))-- == 1;
    if ( v25 )
      return sub_15D7BC0(*(_QWORD *)v169, v26);
  }
  return result;
}

