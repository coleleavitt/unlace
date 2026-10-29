__int64 __fastcall sub_7486C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **v3; // rbp
  char **v4; // r14
  char **exception; // r13
  char **v6; // r13
  char v7; // al
  unsigned int v11; // ebp
  __int64 v12; // rsi
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // r13
  int v19; // r12d
  unsigned int v20; // edx
  int v21; // r12d
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdi
  bool v29; // zf
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rsi
  __int64 v39; // rdi
  _QWORD *v40; // rdx
  unsigned int v41; // ecx
  unsigned __int64 v42; // r13
  __int64 *v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rcx
  __int64 v51; // rbp
  int v52; // eax
  __int64 v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // r13
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // r12
  int v63; // eax
  _QWORD *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  __int64 *v68; // rcx
  __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rbp
  __int64 v72; // rsi
  __int64 v73; // rdi
  int v74; // ecx
  __int64 v75; // rdi
  int v76; // edx
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rsi
  __int64 v80; // rbp
  _QWORD *v81; // rcx
  unsigned int v82; // edx
  __int64 v83; // rsi
  int v84; // edx
  _QWORD *v85; // rax
  int v86; // ecx
  __int64 v87; // r12
  __int64 *v88; // rcx
  int v89; // eax
  _QWORD *v90; // rdx
  unsigned int v91; // r14d
  unsigned __int64 v92; // r13
  __int64 *v93; // r12
  __int64 v94; // rsi
  __int64 v95; // rdi
  __int64 v96; // r12
  _QWORD *v97; // rcx
  int v98; // eax
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // rsi
  int v102; // ecx
  __int64 v103; // rdi
  unsigned int v104; // r8d
  size_t v105; // rsi
  unsigned int *v106; // rax
  __int64 v107; // rcx
  unsigned int v108; // r12d
  size_t v109; // rsi
  unsigned int *v110; // rax
  __int64 v111; // rax
  int v112; // edx
  __int64 v113; // rsi
  __int64 v114; // rdi
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // rdi
  _QWORD *v118; // rax
  unsigned int v119; // r13d
  size_t v120; // rsi
  unsigned int *v121; // rax
  __int64 v122; // rcx
  unsigned int v123; // r13d
  size_t v124; // rsi
  unsigned int *v125; // rax
  __int64 v126; // rcx
  _QWORD *v127; // rax
  _QWORD *v128; // rax
  _QWORD *v129; // rax
  int v130; // [rsp+0h] [rbp-78h]
  int v131; // [rsp+8h] [rbp-70h]
  int v132[2]; // [rsp+8h] [rbp-70h]
  unsigned int v133; // [rsp+8h] [rbp-70h]
  int v134[2]; // [rsp+8h] [rbp-70h]
  int v135[2]; // [rsp+10h] [rbp-68h]
  unsigned int v136; // [rsp+10h] [rbp-68h]
  int v137[2]; // [rsp+18h] [rbp-60h]
  __int64 v138; // [rsp+20h] [rbp-58h] BYREF
  char v139; // [rsp+28h] [rbp-50h]
  int v140; // [rsp+30h] [rbp-48h]
  int v141; // [rsp+38h] [rbp-40h]
  int v142; // [rsp+40h] [rbp-38h]
  void *v143; // [rsp+48h] [rbp-30h]

  v7 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v7 )
  {
    case 2:
      v46 = 515;
LABEL_35:
      sub_1872CE0("");
      sub_1873130(107, v46);
    case 3:
      v46 = 520;
      goto LABEL_35;
    case 0:
      v11 = *(_DWORD *)(a2 + 24);
      while ( 1 )
      {
        v15 = *(_DWORD *)(a3 + 8);
        v16 = v15 >> 6;
        if ( v15 >> 6 >= v11 )
          break;
        v12 = *(_QWORD *)(a2 + 8LL * v16 + 32);
        v13 = ((v16 + 1) << 6) | v15 & 0x3F;
        *(_DWORD *)(a3 + 8) = v13;
        result = sub_746BF0(a1, v12, ((unsigned __int8)v13 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
      v17 = a1[7];
      v18 = *(_QWORD *)(a2 + 16);
      if ( v17 )
        v19 = *(_DWORD *)(v17 - 4);
      else
        v19 = 0;
      v20 = *(_DWORD *)(a3 + 12);
      v21 = v19 - v20;
      v131 = v17 + 8 * v20;
      *(_QWORD *)v135 = a1[1];
      sub_1584610(a1, v20);
      v24 = a1[11];
      if ( v24 )
        v25 = *(_DWORD *)(v24 - 4);
      else
        v25 = 0;
      v26 = v25 - *(_DWORD *)(a3 + 12);
      if ( v26 )
      {
        v115 = sub_15DC610(
                 a1[1],
                 v18,
                 v21,
                 v131,
                 v22,
                 v23,
                 v130,
                 v131,
                 v135[0],
                 v26,
                 v138,
                 v139,
                 v140,
                 v141,
                 v142,
                 v143);
        v30 = v115;
        if ( v115 )
          ++*(_DWORD *)(v115 + 8);
        v31 = sub_15E2980(a1[1]);
        if ( v31 )
          ++*(_DWORD *)(v31 + 8);
        v116 = a1[62];
        if ( v116 )
        {
          v117 = a1[63];
          v29 = (*(_DWORD *)(v116 + 8))-- == 1;
          if ( v29 )
          {
            *(_QWORD *)v137 = v31;
            sub_15D7BC0(v117, v116);
            v31 = *(_QWORD *)v137;
          }
        }
      }
      else
      {
        v27 = a1[62];
        ++*(_DWORD *)(a2 + 8);
        if ( v27 )
        {
          v28 = a1[63];
          v29 = (*(_DWORD *)(v27 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v28, v27);
        }
        v30 = a2;
        v31 = 0;
      }
      a1[62] = v31;
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v32 = sub_15DC610(
                a1[1],
                v18,
                v21,
                v131,
                v22,
                v23,
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
        v33 = v32;
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        v34 = a1[60];
        if ( v34 )
        {
          v35 = a1[61];
          v29 = (*(_DWORD *)(v34 + 8))-- == 1;
          if ( v29 )
          {
            *(_QWORD *)v132 = v32;
            sub_15D7BC0(v35, v34);
            v33 = *(_QWORD *)v132;
          }
        }
        a1[60] = v33;
        v36 = sub_15DE370(a1[1]);
        v37 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        v38 = a1[62];
        if ( v38 )
        {
          v39 = a1[63];
          v29 = (*(_DWORD *)(v38 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v39, v38);
        }
        v40 = (_QWORD *)a1[7];
        a1[62] = v37;
        if ( !v40 )
          goto LABEL_139;
      }
      else
      {
        v113 = a1[60];
        ++*(_DWORD *)(a2 + 8);
        if ( v113 )
        {
          v114 = a1[61];
          v29 = (*(_DWORD *)(v113 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v114, v113);
        }
        v40 = (_QWORD *)a1[7];
        a1[60] = a2;
        if ( !v40 )
        {
          v87 = a2;
          goto LABEL_140;
        }
      }
      v41 = *(_DWORD *)(a3 + 12);
      v42 = (unsigned __int64)&v40[*((unsigned int *)v40 - 1)];
      v43 = &v40[v41];
      if ( (unsigned __int64)v43 >= v42 )
        goto LABEL_85;
      do
      {
        v44 = *v43;
        if ( *v43 )
        {
          v45 = a1[6];
          v29 = (*(_DWORD *)(v44 + 8))-- == 1;
          if ( v29 )
          {
            v133 = v41;
            sub_15D7BC0(v45, v44);
            v41 = v133;
          }
        }
        ++v43;
      }
      while ( (unsigned __int64)v43 < v42 );
      v40 = (_QWORD *)a1[7];
      if ( v40 )
      {
LABEL_85:
        v87 = a1[60];
        *((_DWORD *)v40 - 1) = v41;
        if ( v87 )
        {
          ++*(_DWORD *)(v87 + 8);
          v41 = *((_DWORD *)v40 - 1);
        }
        if ( *((_DWORD *)v40 - 2) == v41 )
        {
          v119 = (3 * v41 + 1) >> 1;
          v120 = 8 * v119 + 8;
          if ( 8 * v41 + 8 >= (unsigned int)v120 || v41 >= v119 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_743560(&v138, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v138);
            sub_233E40((__int64)&v138);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v121 = (unsigned int *)sub_186B300(v40 - 1, v120);
          v122 = v121[1];
          v40 = v121 + 2;
          *v121 = v119;
          a1[7] = v121 + 2;
          LODWORD(v121) = v122;
          v88 = &v40[v122];
          v89 = (_DWORD)v121 + 1;
        }
        else
        {
          v88 = &v40[*((unsigned int *)v40 - 1)];
          v89 = *((_DWORD *)v40 - 1) + 1;
        }
        goto LABEL_89;
      }
LABEL_139:
      v87 = a1[60];
      if ( !v87 )
      {
LABEL_141:
        v118 = (_QWORD *)sub_186B270(0x18u);
        v40 = v118 + 1;
        *v118 = 2;
        v89 = 1;
        a1[7] = v40;
        v88 = v40;
LABEL_89:
        *v88 = v87;
        *((_DWORD *)v40 - 1) = v89;
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_15843A0(a1, a2, a1[60], a1[62]);
        v90 = (_QWORD *)a1[11];
        if ( !v90 )
          goto LABEL_156;
        v91 = *(_DWORD *)(a3 + 12);
        v92 = (unsigned __int64)&v90[*((unsigned int *)v90 - 1)];
        v93 = &v90[v91];
        if ( (unsigned __int64)v93 >= v92 )
          goto LABEL_99;
        do
        {
          v94 = *v93;
          if ( *v93 )
          {
            v95 = a1[10];
            v29 = (*(_DWORD *)(v94 + 8))-- == 1;
            if ( v29 )
              sub_15D7BC0(v95, v94);
          }
          ++v93;
        }
        while ( (unsigned __int64)v93 < v92 );
        v90 = (_QWORD *)a1[11];
        if ( v90 )
        {
LABEL_99:
          v96 = a1[62];
          *((_DWORD *)v90 - 1) = v91;
          if ( v96 )
          {
            ++*(_DWORD *)(v96 + 8);
            v91 = *((_DWORD *)v90 - 1);
          }
          if ( *((_DWORD *)v90 - 2) == v91 )
          {
            v123 = (3 * v91 + 1) >> 1;
            v124 = 8 * v123 + 8;
            if ( 8 * v91 + 8 >= (unsigned int)v124 || v91 >= v123 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_743560(&v138, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, &v138);
              sub_233E40((__int64)&v138);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v125 = (unsigned int *)sub_186B300(v90 - 1, v124);
            v126 = v125[1];
            v90 = v125 + 2;
            *v125 = v123;
            a1[11] = v125 + 2;
            LODWORD(v125) = v126;
            v97 = &v90[v126];
            v98 = (_DWORD)v125 + 1;
          }
          else
          {
            v97 = &v90[*((unsigned int *)v90 - 1)];
            v98 = *((_DWORD *)v90 - 1) + 1;
          }
        }
        else
        {
LABEL_156:
          v96 = a1[62];
          if ( v96 )
            ++*(_DWORD *)(v96 + 8);
          v127 = (_QWORD *)sub_186B270(0x18u);
          v90 = v127 + 1;
          *v127 = 2;
          v98 = 1;
          a1[11] = v90;
          v97 = v90;
        }
        *v97 = v96;
        v99 = a1[62];
        *((_DWORD *)v90 - 1) = v98;
        if ( v99 )
        {
          v100 = a1[63];
          v29 = (*(_DWORD *)(v99 + 8))-- == 1;
          if ( v29 )
            sub_15D7BC0(v100, v99);
        }
        result = a1[5];
        v101 = a1[60];
        a1[62] = 0;
        v102 = *(_DWORD *)(result - 4);
        *(_DWORD *)(result - 4) = v102 - 1;
        if ( v102 != 1 && a2 != v101 )
        {
          *(_BYTE *)(result + 16LL * (unsigned int)(v102 - 2) + 8) |= 2u;
          v101 = a1[60];
        }
        if ( v101 )
        {
          v103 = a1[61];
          v29 = (*(_DWORD *)(v101 + 8))-- == 1;
          if ( v29 )
            result = sub_15D7BC0(v103, v101);
        }
        a1[60] = 0;
        if ( v30 )
        {
          v29 = (*(_DWORD *)(v30 + 8))-- == 1;
          if ( v29 )
            return sub_15D7BC0(*(_QWORD *)v135, v30);
        }
        return result;
      }
LABEL_140:
      ++*(_DWORD *)(v87 + 8);
      goto LABEL_141;
  }
  v47 = a1[1];
  v48 = a1[11];
  v49 = a1[10];
  *(_QWORD *)v134 = v47;
  if ( v48 )
  {
    v50 = (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
    v51 = *(_QWORD *)(v48 + 8 * v50);
    v52 = *(_DWORD *)(v48 - 4) - 1;
    if ( !v51 )
    {
      *(_DWORD *)(v48 - 4) = v50;
      goto LABEL_41;
    }
    ++*(_DWORD *)(v51 + 8);
    v53 = (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
    v54 = *(_QWORD *)(v48 + 8 * v53);
    v52 = *(_DWORD *)(v48 - 4) - 1;
    *(_DWORD *)(v48 - 4) = v53;
    if ( !v54 )
    {
LABEL_41:
      v55 = (unsigned int)(v52 - 1);
      v56 = *(_QWORD *)(v48 + 8 * v55);
      if ( !v56 )
      {
        *(_DWORD *)(v48 - 4) = v55;
        goto LABEL_45;
      }
      ++*(_DWORD *)(v56 + 8);
      v57 = (unsigned int)(*(_DWORD *)(v48 - 4) - 1);
      v58 = *(_QWORD *)(v48 + 8 * v57);
      *(_DWORD *)(v48 - 4) = v57;
      if ( !v58 )
        goto LABEL_45;
      goto LABEL_43;
    }
  }
  else
  {
    v51 = MEMORY[0x7FFFFFFF8];
    if ( !MEMORY[0x7FFFFFFF8] )
    {
      v52 = --MEMORY[0xFFFFFFFFFFFFFFFC];
      goto LABEL_41;
    }
    ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
    v54 = MEMORY[0x7FFFFFFF8];
    --MEMORY[0xFFFFFFFFFFFFFFFC];
  }
  v29 = (*(_DWORD *)(v54 + 8))-- == 1;
  if ( !v29 )
  {
    v52 = *(_DWORD *)(v48 - 4);
    goto LABEL_41;
  }
  sub_15D7BC0(v49, v54);
  v48 = a1[11];
  if ( v48 )
  {
    v52 = *(_DWORD *)(v48 - 4);
    v49 = a1[10];
    goto LABEL_41;
  }
  v56 = MEMORY[0x7FFFFFFF8];
  if ( !MEMORY[0x7FFFFFFF8] )
  {
    --MEMORY[0xFFFFFFFFFFFFFFFC];
    goto LABEL_45;
  }
  ++*(_DWORD *)(MEMORY[0x7FFFFFFF8] + 8LL);
  v58 = MEMORY[0x7FFFFFFF8];
  v49 = a1[10];
  --MEMORY[0xFFFFFFFFFFFFFFFC];
LABEL_43:
  v29 = (*(_DWORD *)(v58 + 8))-- == 1;
  if ( v29 )
    sub_15D7BC0(v49, v58);
LABEL_45:
  v59 = sub_15E2470(a1[1], v56, v51);
  v60 = a1[63];
  v61 = a1[62];
  v62 = v59;
  if ( v59 )
  {
    v63 = *(_DWORD *)(v59 + 8) + 1;
    *(_DWORD *)(v62 + 8) = v63;
    if ( v61 )
    {
      v29 = (*(_DWORD *)(v61 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v60, v61);
      a1[62] = v62;
      v63 = *(_DWORD *)(v62 + 8);
    }
    else
    {
      a1[62] = v62;
    }
    *(_DWORD *)(v62 + 8) = v63 + 1;
  }
  else
  {
    if ( v61 )
    {
      v29 = (*(_DWORD *)(v61 + 8))-- == 1;
      if ( v29 )
        sub_15D7BC0(v60, v61);
    }
    a1[62] = 0;
  }
  v64 = (_QWORD *)a1[11];
  if ( v64 )
  {
    v65 = *((_DWORD *)v64 - 1);
    if ( v65 == *((_DWORD *)v64 - 2) )
    {
      v104 = (3 * v65 + 1) >> 1;
      v105 = 8 * v104 + 8;
      if ( 8 * v65 + 8 >= (unsigned int)v105 || v65 >= v104 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(&v138, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, &v138);
        sub_233E40((__int64)&v138);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v136 = (3 * v65 + 1) >> 1;
      v106 = (unsigned int *)sub_186B300(v64 - 1, v105);
      v107 = v106[1];
      v64 = v106 + 2;
      a1[11] = v106 + 2;
      *v106 = v136;
      LODWORD(v106) = v107;
      v68 = &v64[v107];
      v67 = (_DWORD)v106 + 1;
    }
    else
    {
      v66 = v65;
      v67 = v65 + 1;
      v68 = &v64[v66];
    }
  }
  else
  {
    v128 = (_QWORD *)sub_186B270(0x18u);
    v64 = v128 + 1;
    *v128 = 2;
    v67 = 1;
    a1[11] = v64;
    v68 = v64;
  }
  *v68 = v62;
  *((_DWORD *)v64 - 1) = v67;
  if ( v56 )
  {
    v29 = (*(_DWORD *)(v56 + 8))-- == 1;
    if ( v29 )
      sub_15D7BC0(*(_QWORD *)v134, v56);
  }
  if ( v51 )
  {
    v29 = (*(_DWORD *)(v51 + 8))-- == 1;
    if ( v29 )
      sub_15D7BC0(*(_QWORD *)v134, v51);
  }
  v69 = 0xFFFFFFFFLL;
  v70 = (_QWORD *)a1[7];
  if ( v70 )
    v69 = (unsigned int)(*((_DWORD *)v70 - 1) - 1);
  v71 = v70[v69];
  if ( v71 )
    ++*(_DWORD *)(v71 + 8);
  v72 = a1[60];
  if ( v72 )
  {
    v73 = a1[61];
    v29 = (*(_DWORD *)(v72 + 8))-- == 1;
    if ( v29 )
    {
      sub_15D7BC0(v73, v72);
      v70 = (_QWORD *)a1[7];
    }
  }
  v74 = *((_DWORD *)v70 - 1);
  v75 = a1[6];
  a1[60] = v71;
  v76 = v74 - 1;
  v77 = v70[v74 - 1];
  *((_DWORD *)v70 - 1) = v74 - 1;
  if ( v77 )
  {
    v29 = (*(_DWORD *)(v77 + 8))-- == 1;
    if ( v29 )
    {
      sub_15D7BC0(v75, v77);
      v70 = (_QWORD *)a1[7];
      v75 = a1[6];
    }
    v76 = *((_DWORD *)v70 - 1);
  }
  v78 = (unsigned int)(v76 - 1);
  v79 = v70[v78];
  *((_DWORD *)v70 - 1) = v78;
  if ( !v79 || (v29 = *(_DWORD *)(v79 + 8) == 1, --*(_DWORD *)(v79 + 8), !v29) )
  {
    v80 = a1[60];
    v81 = v70;
    if ( !v80 )
      goto LABEL_76;
    goto LABEL_74;
  }
  sub_15D7BC0(v75, v79);
  v80 = a1[60];
  v70 = (_QWORD *)a1[7];
  if ( v80 )
LABEL_74:
    ++*(_DWORD *)(v80 + 8);
  v81 = v70;
  if ( v70 )
  {
LABEL_76:
    v82 = *((_DWORD *)v70 - 1);
    if ( v82 == *((_DWORD *)v70 - 2) )
    {
      v108 = (3 * v82 + 1) >> 1;
      v109 = 8 * v108 + 8;
      if ( 8 * v82 + 8 >= (unsigned int)v109 || v82 >= v108 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_743560(&v138, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, &v138);
        sub_233E40((__int64)&v138);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v110 = (unsigned int *)sub_186B300(v70 - 1, v109);
      v81 = v110 + 2;
      *v110 = v108;
      v111 = v110[1];
      a1[7] = v81;
      v112 = v111;
      v85 = &v81[v111];
      v84 = v112 + 1;
    }
    else
    {
      v83 = v82;
      v84 = v82 + 1;
      v85 = &v70[v83];
    }
    goto LABEL_78;
  }
  v129 = (_QWORD *)sub_186B270(0x18u);
  v84 = 1;
  v81 = v129 + 1;
  *v129 = 2;
  a1[7] = v129 + 1;
  v85 = v129 + 1;
LABEL_78:
  *v85 = v80;
  *((_DWORD *)v81 - 1) = v84;
  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
    sub_15843A0(a1, a2, a1[60], a1[62]);
  result = a1[5];
  v86 = *(_DWORD *)(result - 4);
  *(_DWORD *)(result - 4) = v86 - 1;
  if ( v86 != 1 )
    *(_BYTE *)(result + 16LL * (unsigned int)(v86 - 2) + 8) |= 2u;
  return result;
}

