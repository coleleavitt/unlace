__int64 __fastcall sub_5F2EA0(_QWORD *a1, __int64 a2, __int64 a3)
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
  unsigned int v16; // edx
  int v17; // r12d
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
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rdi
  _QWORD *v36; // rdx
  unsigned int v37; // ecx
  unsigned __int64 v38; // r13
  __int64 *v39; // r12
  __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int64 v47; // rbp
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // r13
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // r12
  int v59; // eax
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 *v64; // rcx
  __int64 v65; // rdx
  _QWORD *v66; // rax
  __int64 v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rdi
  int v70; // ecx
  __int64 v71; // rdi
  int v72; // edx
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 v76; // rbp
  _QWORD *v77; // rcx
  unsigned int v78; // edx
  __int64 v79; // rsi
  int v80; // edx
  _QWORD *v81; // rax
  int v82; // ecx
  __int64 v83; // r12
  __int64 *v84; // rcx
  int v85; // eax
  _QWORD *v86; // rdx
  unsigned int v87; // r14d
  unsigned __int64 v88; // r13
  __int64 *v89; // r12
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // r12
  _QWORD *v93; // rcx
  int v94; // eax
  __int64 v95; // rsi
  __int64 v96; // rdi
  __int64 v97; // rsi
  int v98; // ecx
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
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rsi
  __int64 v113; // rdi
  _QWORD *v114; // rax
  unsigned int v115; // r13d
  size_t v116; // rsi
  unsigned int *v117; // rax
  __int64 v118; // rcx
  unsigned int v119; // r13d
  size_t v120; // rsi
  unsigned int *v121; // rax
  __int64 v122; // rcx
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  char **v126; // rbp
  char **v127; // r14
  char **exception; // r13
  char **v129; // r13
  int v130; // [rsp+0h] [rbp-88h]
  int v131; // [rsp+8h] [rbp-80h]
  int v132[2]; // [rsp+8h] [rbp-80h]
  unsigned int v133; // [rsp+8h] [rbp-80h]
  int v134[2]; // [rsp+8h] [rbp-80h]
  int v135[2]; // [rsp+10h] [rbp-78h]
  unsigned int v136; // [rsp+10h] [rbp-78h]
  int v137[2]; // [rsp+18h] [rbp-70h]
  int v138; // [rsp+20h] [rbp-68h]
  char v139; // [rsp+28h] [rbp-60h]
  __int64 v140; // [rsp+30h] [rbp-58h] BYREF
  int v141; // [rsp+38h] [rbp-50h]
  int v142; // [rsp+40h] [rbp-48h]
  void *v143; // [rsp+48h] [rbp-40h]

  v3 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v3 )
  {
    case 2:
      v42 = 515;
LABEL_35:
      sub_1872CE0("");
      sub_1873130(107, v42);
    case 3:
      v42 = 520;
      goto LABEL_35;
    case 0:
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
        result = sub_5F2580(a1, v8, ((unsigned __int8)v9 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
      v13 = a1[7];
      v14 = *(_QWORD *)(a2 + 16);
      if ( v13 )
        v15 = *(_DWORD *)(v13 - 4);
      else
        v15 = 0;
      v16 = *(_DWORD *)(a3 + 12);
      v17 = v15 - v16;
      v131 = v13 + 8 * v16;
      *(_QWORD *)v135 = a1[1];
      sub_1584610(a1, v16);
      v20 = a1[11];
      if ( v20 )
        v21 = *(_DWORD *)(v20 - 4);
      else
        v21 = 0;
      v22 = v21 - *(_DWORD *)(a3 + 12);
      if ( v22 )
      {
        v111 = sub_15DC610(
                 a1[1],
                 v14,
                 v17,
                 v131,
                 v18,
                 v19,
                 v130,
                 v131,
                 v135[0],
                 v22,
                 v138,
                 v139,
                 v140,
                 v141,
                 v142,
                 v143);
        v26 = v111;
        if ( v111 )
          ++*(_DWORD *)(v111 + 8);
        v27 = sub_15E2980(a1[1]);
        if ( v27 )
          ++*(_DWORD *)(v27 + 8);
        v112 = a1[62];
        if ( v112 )
        {
          v113 = a1[63];
          v25 = (*(_DWORD *)(v112 + 8))-- == 1;
          if ( v25 )
          {
            *(_QWORD *)v137 = v27;
            sub_15D7BC0(v113, v112);
            v27 = *(_QWORD *)v137;
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
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v28 = sub_15DC610(
                a1[1],
                v14,
                v17,
                v131,
                v18,
                v19,
                v130,
                v131,
                v135[0],
                v137[0],
                v138,
                v139,
                v140,
                v141,
                v142,
                v143);
        v29 = v28;
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        v30 = a1[60];
        if ( v30 )
        {
          v31 = a1[61];
          v25 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v25 )
          {
            *(_QWORD *)v132 = v28;
            sub_15D7BC0(v31, v30);
            v29 = *(_QWORD *)v132;
          }
        }
        a1[60] = v29;
        v32 = sub_15DE370(a1[1]);
        v33 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        v34 = a1[62];
        if ( v34 )
        {
          v35 = a1[63];
          v25 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v35, v34);
        }
        v36 = (_QWORD *)a1[7];
        a1[62] = v33;
        if ( !v36 )
          goto LABEL_139;
      }
      else
      {
        v109 = a1[60];
        ++*(_DWORD *)(a2 + 8);
        if ( v109 )
        {
          v110 = a1[61];
          v25 = (*(_DWORD *)(v109 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v110, v109);
        }
        v36 = (_QWORD *)a1[7];
        a1[60] = a2;
        if ( !v36 )
        {
          v83 = a2;
          goto LABEL_140;
        }
      }
      v37 = *(_DWORD *)(a3 + 12);
      v38 = (unsigned __int64)&v36[*((unsigned int *)v36 - 1)];
      v39 = &v36[v37];
      if ( (unsigned __int64)v39 >= v38 )
        goto LABEL_85;
      do
      {
        v40 = *v39;
        if ( *v39 )
        {
          v41 = a1[6];
          v25 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v25 )
          {
            v133 = v37;
            sub_15D7BC0(v41, v40);
            v37 = v133;
          }
        }
        ++v39;
      }
      while ( (unsigned __int64)v39 < v38 );
      v36 = (_QWORD *)a1[7];
      if ( v36 )
      {
LABEL_85:
        v83 = a1[60];
        *((_DWORD *)v36 - 1) = v37;
        if ( v83 )
        {
          ++*(_DWORD *)(v83 + 8);
          v37 = *((_DWORD *)v36 - 1);
        }
        if ( *((_DWORD *)v36 - 2) == v37 )
        {
          v115 = (3 * v37 + 1) >> 1;
          v116 = 8 * v115 + 8;
          if ( 8 * v37 + 8 >= (unsigned int)v116 || v37 >= v115 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v140, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v140);
            sub_233E40((__int64)&v140);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v117 = (unsigned int *)sub_186B300(v36 - 1, v116);
          v118 = v117[1];
          v36 = v117 + 2;
          *v117 = v115;
          a1[7] = v117 + 2;
          LODWORD(v117) = v118;
          v84 = &v36[v118];
          v85 = (_DWORD)v117 + 1;
        }
        else
        {
          v84 = &v36[*((unsigned int *)v36 - 1)];
          v85 = *((_DWORD *)v36 - 1) + 1;
        }
        goto LABEL_89;
      }
LABEL_139:
      v83 = a1[60];
      if ( !v83 )
      {
LABEL_141:
        v114 = (_QWORD *)sub_186B270(0x18u);
        v36 = v114 + 1;
        *v114 = 2;
        v85 = 1;
        a1[7] = v36;
        v84 = v36;
LABEL_89:
        *v84 = v83;
        *((_DWORD *)v36 - 1) = v85;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        v86 = (_QWORD *)a1[11];
        if ( !v86 )
          goto LABEL_156;
        v87 = *(_DWORD *)(a3 + 12);
        v88 = (unsigned __int64)&v86[*((unsigned int *)v86 - 1)];
        v89 = &v86[v87];
        if ( (unsigned __int64)v89 >= v88 )
          goto LABEL_99;
        do
        {
          v90 = *v89;
          if ( *v89 )
          {
            v91 = a1[10];
            v25 = (*(_DWORD *)(v90 + 8))-- == 1;
            if ( v25 )
              sub_15D7BC0(v91, v90);
          }
          ++v89;
        }
        while ( (unsigned __int64)v89 < v88 );
        v86 = (_QWORD *)a1[11];
        if ( v86 )
        {
LABEL_99:
          v92 = a1[62];
          *((_DWORD *)v86 - 1) = v87;
          if ( v92 )
          {
            ++*(_DWORD *)(v92 + 8);
            v87 = *((_DWORD *)v86 - 1);
          }
          if ( *((_DWORD *)v86 - 2) == v87 )
          {
            v119 = (3 * v87 + 1) >> 1;
            v120 = 8 * v119 + 8;
            if ( 8 * v87 + 8 >= (unsigned int)v120 || v87 >= v119 )
            {
              v129 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v140, "Overflow encountered when expanding vector");
              *v129 = (char *)off_1C63128;
              sub_2333C0(v129 + 1, &v140);
              sub_233E40((__int64)&v140);
              __cxa_throw(v129, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v121 = (unsigned int *)sub_186B300(v86 - 1, v120);
            v122 = v121[1];
            v86 = v121 + 2;
            *v121 = v119;
            a1[11] = v121 + 2;
            LODWORD(v121) = v122;
            v93 = &v86[v122];
            v94 = (_DWORD)v121 + 1;
          }
          else
          {
            v93 = &v86[*((unsigned int *)v86 - 1)];
            v94 = *((_DWORD *)v86 - 1) + 1;
          }
        }
        else
        {
LABEL_156:
          v92 = a1[62];
          if ( v92 )
            ++*(_DWORD *)(v92 + 8);
          v123 = (_QWORD *)sub_186B270(0x18u);
          v86 = v123 + 1;
          *v123 = 2;
          v94 = 1;
          a1[11] = v86;
          v93 = v86;
        }
        *v93 = v92;
        v95 = a1[62];
        *((_DWORD *)v86 - 1) = v94;
        if ( v95 )
        {
          v96 = a1[63];
          v25 = (*(_DWORD *)(v95 + 8))-- == 1;
          if ( v25 )
            sub_15D7BC0(v96, v95);
        }
        result = a1[5];
        v97 = a1[60];
        a1[62] = 0;
        v98 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v98 - 1;
        if ( v98 != 1 && a2 != v97 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v98 - 2) + 8) |= 2u;
          v97 = a1[60];
        }
        if ( v97 )
        {
          v99 = a1[61];
          v25 = (*(_DWORD *)(v97 + 8))-- == 1;
          if ( v25 )
            result = sub_15D7BC0(v99, v97);
        }
        a1[60] = 0;
        if ( v26 )
        {
          v25 = (*(_DWORD *)(v26 + 8))-- == 1;
          if ( v25 )
            return sub_15D7BC0(*(_QWORD *)v135, v26);
        }
        return result;
      }
LABEL_140:
      ++*(_DWORD *)(v83 + 8);
      goto LABEL_141;
  }
  v43 = a1[1];
  v44 = a1[11];
  v45 = a1[10];
  *(_QWORD *)v134 = v43;
  if ( v44 )
  {
    v46 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
    v47 = *(_QWORD *)(v44 + 8 * v46);
    v48 = *(_DWORD *)(v44 - 4) - 1;
    if ( !v47 )
    {
      *(_DWORD *)(v44 - 4) = v46;
      goto LABEL_41;
    }
    ++*(_DWORD *)(v47 + 8);
    v49 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
    v50 = *(_QWORD *)(v44 + 8 * v49);
    v48 = *(_DWORD *)(v44 - 4) - 1;
    *(_DWORD *)(v44 - 4) = v49;
    if ( !v50 )
    {
LABEL_41:
      v51 = (unsigned int)(v48 - 1);
      v52 = *(_QWORD *)(v44 + 8 * v51);
      if ( !v52 )
      {
        *(_DWORD *)(v44 - 4) = v51;
        goto LABEL_45;
      }
      ++*(_DWORD *)(v52 + 8);
      v53 = (unsigned int)(*(_DWORD *)(v44 - 4) - 1);
      v54 = *(_QWORD *)(v44 + 8 * v53);
      *(_DWORD *)(v44 - 4) = v53;
      if ( !v54 )
        goto LABEL_45;
      goto LABEL_43;
    }
  }
  else
  {
    v47 = MEMORY[0x7FFFFFFF8];
    if ( !MEMORY[0x7FFFFFFF8] )
    {
      v48 = --MEMORY[0xFFFFFFFFFFFFFFFC];
      goto LABEL_41;
    }
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v50 = MEMORY[0x7FFFFFFF8];
    --MEMORY[0xFFFFFFFFFFFFFFFC];
  }
  v25 = (*(_DWORD *)(v50 + 8))-- == 1;
  if ( !v25 )
  {
    v48 = *(_DWORD *)(v44 - 4);
    goto LABEL_41;
  }
  sub_15D7BC0(v45, v50);
  v44 = a1[11];
  if ( v44 )
  {
    v48 = *(_DWORD *)(v44 - 4);
    v45 = a1[10];
    goto LABEL_41;
  }
  v52 = MEMORY[0x7FFFFFFF8];
  if ( !MEMORY[0x7FFFFFFF8] )
  {
    --MEMORY[0xFFFFFFFFFFFFFFFC];
    goto LABEL_45;
  }
  ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
  v54 = MEMORY[0x7FFFFFFF8];
  v45 = a1[10];
  --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_43:
  v25 = (*(_DWORD *)(v54 + 8))-- == 1;
  if ( v25 )
    sub_15D7BC0(v45, v54);
LABEL_45:
  v55 = sub_15E2470(a1[1], v52, v47);
  v56 = a1[63];
  v57 = a1[62];
  v58 = v55;
  if ( v55 )
  {
    v59 = *(_DWORD *)(v55 + 8) + 1;
    *(_DWORD *)(v58 + 8) = v59;
    if ( v57 )
    {
      v25 = (*(_DWORD *)(v57 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v56, v57);
      a1[62] = v58;
      v59 = *(_DWORD *)(v58 + 8);
    }
    else
    {
      a1[62] = v58;
    }
    *(_DWORD *)(v58 + 8) = v59 + 1;
  }
  else
  {
    if ( v57 )
    {
      v25 = (*(_DWORD *)(v57 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v56, v57);
    }
    a1[62] = 0;
  }
  v60 = (_QWORD *)a1[11];
  if ( v60 )
  {
    v61 = *((_DWORD *)v60 - 1);
    if ( v61 == *((_DWORD *)v60 - 2) )
    {
      v100 = (3 * v61 + 1) >> 1;
      v101 = 8 * v100 + 8;
      if ( 8 * v61 + 8 >= (unsigned int)v101 || v61 >= v100 )
      {
        v127 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v140, "Overflow encountered when expanding vector");
        *v127 = (char *)off_1C63128;
        sub_2333C0(v127 + 1, &v140);
        sub_233E40((__int64)&v140);
        __cxa_throw(v127, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v136 = (3 * v61 + 1) >> 1;
      v102 = (unsigned int *)sub_186B300(v60 - 1, v101);
      v103 = v102[1];
      v60 = v102 + 2;
      a1[11] = v102 + 2;
      *v102 = v136;
      LODWORD(v102) = v103;
      v64 = &v60[v103];
      v63 = (_DWORD)v102 + 1;
    }
    else
    {
      v62 = v61;
      v63 = v61 + 1;
      v64 = &v60[v62];
    }
  }
  else
  {
    v124 = (_QWORD *)sub_186B270(0x18u);
    v60 = v124 + 1;
    *v124 = 2;
    v63 = 1;
    a1[11] = v60;
    v64 = v60;
  }
  *v64 = v58;
  *((_DWORD *)v60 - 1) = v63;
  if ( v52 )
  {
    v25 = (*(_DWORD *)(v52 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(*(_QWORD *)v134, v52);
  }
  if ( v47 )
  {
    v25 = (*(_DWORD *)(v47 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(*(_QWORD *)v134, v47);
  }
  v65 = 0xFFFFFFFFLL;
  v66 = (_QWORD *)a1[7];
  if ( v66 )
    v65 = (unsigned int)(*((_DWORD *)v66 - 1) - 1);
  v67 = v66[v65];
  if ( v67 )
    ++*(_DWORD *)(v67 + 8);
  v68 = a1[60];
  if ( v68 )
  {
    v69 = a1[61];
    v25 = (*(_DWORD *)(v68 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v69, v68);
      v66 = (_QWORD *)a1[7];
    }
  }
  v70 = *((_DWORD *)v66 - 1);
  v71 = a1[6];
  a1[60] = v67;
  v72 = v70 - 1;
  v73 = v66[v70 - 1];
  *((_DWORD *)v66 - 1) = v70 - 1;
  if ( v73 )
  {
    v25 = (*(_DWORD *)(v73 + 8))-- == 1;
    if ( v25 )
    {
      sub_15D7BC0(v71, v73);
      v66 = (_QWORD *)a1[7];
      v71 = a1[6];
    }
    v72 = *((_DWORD *)v66 - 1);
  }
  v74 = (unsigned int)(v72 - 1);
  v75 = v66[v74];
  *((_DWORD *)v66 - 1) = v74;
  if ( !v75 || (v25 = *(_DWORD *)(v75 + 8) == 1, --*(_DWORD *)(v75 + 8), !v25) )
  {
    v76 = a1[60];
    v77 = v66;
    if ( !v76 )
      goto LABEL_76;
    goto LABEL_74;
  }
  sub_15D7BC0(v71, v75);
  v76 = a1[60];
  v66 = (_QWORD *)a1[7];
  if ( v76 )
LABEL_74:
    ++*(_DWORD *)(v76 + 8);
  v77 = v66;
  if ( v66 )
  {
LABEL_76:
    v78 = *((_DWORD *)v66 - 1);
    if ( v78 == *((_DWORD *)v66 - 2) )
    {
      v104 = (3 * v78 + 1) >> 1;
      v105 = 8 * v104 + 8;
      if ( 8 * v78 + 8 >= (unsigned int)v105 || v78 >= v104 )
      {
        v126 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v140, "Overflow encountered when expanding vector");
        *v126 = (char *)off_1C63128;
        sub_2333C0(v126 + 1, &v140);
        sub_233E40((__int64)&v140);
        __cxa_throw(v126, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v106 = (unsigned int *)sub_186B300(v66 - 1, v105);
      v77 = v106 + 2;
      *v106 = v104;
      v107 = v106[1];
      a1[7] = v77;
      v108 = v107;
      v81 = &v77[v107];
      v80 = v108 + 1;
    }
    else
    {
      v79 = v78;
      v80 = v78 + 1;
      v81 = &v66[v79];
    }
    goto LABEL_78;
  }
  v125 = (_QWORD *)sub_186B270(0x18u);
  v80 = 1;
  v77 = v125 + 1;
  *v125 = 2;
  a1[7] = v125 + 1;
  v81 = v125 + 1;
LABEL_78:
  *v81 = v76;
  *((_DWORD *)v77 - 1) = v80;
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, a1[60], a1[62]);
  result = a1[5];
  v82 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v82 - 1;
  if ( v82 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v82 - 2) + 8) |= 2u;
  return result;
}

