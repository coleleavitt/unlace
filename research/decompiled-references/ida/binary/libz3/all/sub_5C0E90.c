_DWORD *__fastcall sub_5C0E90(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  char **v5; // r14
  char **exception; // r13
  char **v7; // r13
  char **v8; // r14
  __int64 v9; // r13
  __int64 v11; // rbx
  _DWORD *result; // rax
  int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // rax
  __m128 *v16; // rbx
  int v17; // edx
  __m128 *v18; // r12
  __int64 v19; // rdx
  __m128 *v20; // r14
  __m128 *v21; // r15
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  _QWORD *v26; // rbx
  unsigned int v27; // r15d
  __int64 v28; // rdx
  int v29; // eax
  __int64 *v30; // rdx
  __int64 v31; // rcx
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r14
  unsigned int v36; // eax
  unsigned int v37; // edx
  size_t v38; // rsi
  __int64 v39; // rax
  _QWORD *v40; // r14
  _QWORD *v41; // r15
  __int64 v42; // rsi
  __int64 v43; // rdi
  _QWORD *v44; // rdx
  unsigned int v45; // r15d
  __int64 v46; // r14
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  _QWORD *v50; // rcx
  __int64 v51; // rdi
  int v52; // r9d
  int v53; // edx
  __int64 v54; // r14
  __int64 v55; // rdi
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  __int64 *v60; // r15
  unsigned __int64 v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 *v64; // r15
  unsigned __int64 v65; // r14
  __int64 v66; // rsi
  unsigned int v67; // edx
  size_t v68; // rsi
  __int64 v69; // rax
  _QWORD *v70; // rax
  __m128 v71; // xmm0
  __int64 v72; // rax
  __int64 v73; // rbx
  _QWORD *v74; // rdx
  unsigned int v75; // eax
  __int64 v76; // rcx
  int v77; // eax
  __int64 *v78; // rcx
  __int64 v79; // rbx
  _QWORD *v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  _QWORD *v84; // rcx
  _DWORD *v85; // rcx
  int v86; // edx
  unsigned int v87; // r12d
  __int64 v88; // rax
  __int64 *v89; // rbx
  int v90; // ecx
  __int64 *v91; // r12
  __int64 v92; // rcx
  __int64 *v93; // r14
  __int64 *v94; // r15
  __int64 v95; // rdi
  int v96; // eax
  unsigned __int64 v97; // rdi
  __int64 v98; // rdi
  int v99; // eax
  unsigned int v100; // ebx
  size_t v101; // rsi
  unsigned int *v102; // rax
  __int64 v103; // rcx
  unsigned int v104; // ebx
  size_t v105; // rsi
  unsigned int *v106; // rax
  __int64 v107; // rcx
  __m128i *v108; // rax
  __m128i *v109; // r12
  __m128i *v110; // r8
  const __m128i *v111; // r14
  __int64 v112; // rcx
  __m128i *v113; // r15
  __int64 v114; // rdi
  int v115; // eax
  __int64 v116; // rax
  __m128i *v117; // rdx
  __m128i *v118; // rax
  __m128i v119; // xmm0
  __int64 v120; // rax
  __m128i *v121; // rax
  __m128i *v122; // r15
  char *v123; // rdx
  __int64 v124; // rax
  __int64 *v125; // r14
  char *v126; // rbx
  __int64 *v127; // rax
  unsigned __int64 v128; // rdi
  __int64 *v129; // rax
  __m128i *v130; // rdx
  __m128i *v131; // rax
  __int64 v132; // rdx
  char *v133; // r14
  char *v134; // r15
  __int64 v135; // rdi
  __int64 v136; // rax
  __int64 *v137; // rdx
  _QWORD *v138; // rax
  _QWORD *v139; // rax
  _QWORD *v140; // rax
  __int64 v141; // [rsp+8h] [rbp-E8h]
  __int64 v142; // [rsp+10h] [rbp-E0h]
  __int64 v143; // [rsp+18h] [rbp-D8h]
  __m128i *v144; // [rsp+18h] [rbp-D8h]
  __int64 *v146; // [rsp+28h] [rbp-C8h] BYREF
  __m128i *v147; // [rsp+30h] [rbp-C0h]
  __int64 v148; // [rsp+38h] [rbp-B8h]
  __int64 *v149; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v150; // [rsp+58h] [rbp-98h]
  __int64 v151; // [rsp+60h] [rbp-90h]
  __int64 v152; // [rsp+70h] [rbp-80h] BYREF
  __int64 v153; // [rsp+78h] [rbp-78h]
  __int64 v154; // [rsp+80h] [rbp-70h] BYREF
  __int64 v155; // [rsp+88h] [rbp-68h]
  __int64 v156; // [rsp+90h] [rbp-60h] BYREF
  _QWORD *v157; // [rsp+98h] [rbp-58h]
  __int64 v158[10]; // [rsp+A0h] [rbp-50h] BYREF

  v9 = a2;
  v11 = a1[5];
  v149 = nullptr;
  v150 = v11;
  if ( (unsigned __int8)sub_5BDD30((__int64)a1, a2, a3, a4) )
  {
    sub_5C01D0(a1, a2);
    v24 = a1[4];
    v25 = *(_QWORD *)(a2 + 40);
    v152 = 0;
    v142 = v24;
    v151 = v24;
    v153 = v24;
    sub_5C0BB0((__int64)a1, v25, &v152);
    v26 = nullptr;
    v143 = v152;
    v141 = v153;
    if ( *(_DWORD *)(v9 + 68) )
    {
      v27 = 0;
      v146 = &v154;
      do
      {
        v33 = a1[4];
        v154 = 0;
        v34 = *(_QWORD *)(v9 + 8LL * v27 + 80);
        v155 = v33;
        sub_5C0BB0((__int64)a1, v34 & 0xFFFFFFFFFFFFFFF8LL, v146);
        v35 = v155;
        v148 = v154;
        if ( v154 )
          ++*(_DWORD *)(v154 + 8);
        if ( v26 )
        {
          v36 = *((_DWORD *)v26 - 1);
          if ( v36 == *((_DWORD *)v26 - 2) )
          {
            v37 = (3 * v36 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v36 + 8 >= (unsigned int)v38 || v36 >= v37 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v158, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v158);
              sub_233E40((__int64)v158);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v147) = (3 * v36 + 1) >> 1;
            v39 = sub_186B300(v26 - 1, v38);
            v26 = (_QWORD *)(v39 + 8);
            *(_DWORD *)v39 = (_DWORD)v147;
            LODWORD(v39) = *(_DWORD *)(v39 + 4);
            v30 = &v26[(unsigned int)v39];
            v29 = v39 + 1;
          }
          else
          {
            v28 = v36;
            v29 = v36 + 1;
            v30 = &v26[v28];
          }
        }
        else
        {
          v70 = (_QWORD *)sub_186B270(0x18u);
          v26 = v70 + 1;
          *v70 = 2;
          v29 = 1;
          v30 = v26;
        }
        v31 = v148;
        *v30 = v148;
        *((_DWORD *)v26 - 1) = v29;
        if ( v31 )
        {
          LODWORD(v147) = *(_DWORD *)(v31 + 8);
          v32 = (_DWORD)v147 == 1;
          *(_DWORD *)(v31 + 8) = (_DWORD)v147 - 1;
          if ( v32 )
            sub_15D7BC0(v35, v31);
        }
        ++v27;
      }
      while ( v27 < *(_DWORD *)(v9 + 68) );
    }
    v147 = (__m128i *)&v156;
    sub_5BE210(&v156, (__int64)a1, v9);
    v40 = (_QWORD *)a1[9];
    if ( v40 )
    {
      v41 = &v40[*((unsigned int *)v40 - 1)];
      if ( v40 >= v41 )
        goto LABEL_44;
      do
      {
        while ( 1 )
        {
          v42 = *v40;
          if ( *v40 )
          {
            v43 = a1[8];
            v32 = (*(_DWORD *)(v42 + 8))-- == 1;
            if ( v32 )
              break;
          }
          if ( ++v40 >= v41 )
            goto LABEL_43;
        }
        sub_15D7BC0(v43, v42);
        ++v40;
      }
      while ( v40 < v41 );
LABEL_43:
      v40 = (_QWORD *)a1[9];
      if ( v40 )
LABEL_44:
        *((_DWORD *)v40 - 1) = 0;
    }
    v44 = v157;
    if ( v157 )
    {
      v45 = 0;
      while ( v45 < *((_DWORD *)v44 - 1) )
      {
        v46 = v44[v45];
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
        if ( v26 )
        {
          v47 = *((_DWORD *)v26 - 1);
          if ( v47 == *((_DWORD *)v26 - 2) )
          {
            v67 = (3 * v47 + 1) >> 1;
            v68 = 8 * v67 + 8;
            LODWORD(v148) = v67;
            if ( 8 * v47 + 8 >= (unsigned int)v68 || v47 >= v67 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v158, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v158);
              sub_233E40((__int64)v158);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v69 = sub_186B300(v26 - 1, v68);
            v26 = (_QWORD *)(v69 + 8);
            *(_DWORD *)v69 = v148;
            LODWORD(v69) = *(_DWORD *)(v69 + 4);
            v50 = &v26[(unsigned int)v69];
            v44 = v157;
            v49 = v69 + 1;
          }
          else
          {
            v48 = v47;
            v49 = v47 + 1;
            v50 = &v26[v48];
          }
        }
        else
        {
          v138 = (_QWORD *)sub_186B270(0x18u);
          v26 = v138 + 1;
          *v138 = 2;
          v44 = v157;
          v49 = 1;
          v50 = v26;
        }
        *v50 = v46;
        ++v45;
        *((_DWORD *)v26 - 1) = v49;
        if ( !v44 )
        {
          v51 = a1[5];
          v52 = v9 + 72;
          goto LABEL_55;
        }
      }
    }
    v51 = a1[5];
    v52 = v9 + 72;
    v53 = 0;
    if ( v26 )
LABEL_55:
      v53 = *((_DWORD *)v26 - 1);
    v54 = sub_62C680(v51, v143, v53, (_DWORD)v26, 0, v52, 1);
    if ( v54 )
      sub_62A000(v150, v54);
    if ( v149 )
      sub_62A410(v150, v149);
    v55 = a1[5];
    v149 = (__int64 *)v54;
    sub_630200(v55, &v149, 0);
    if ( (unsigned __int8)sub_64AF30(a1[3]) )
      sub_62F900(a1[5], (_DWORD)v149, v56, v57, v58, v59);
    v60 = v157;
    if ( v157 )
    {
      v61 = (unsigned __int64)&v157[*((unsigned int *)v157 - 1)];
      if ( (unsigned __int64)v157 >= v61 )
        goto LABEL_70;
      do
      {
        while ( 1 )
        {
          v62 = *v60;
          if ( *v60 )
          {
            v63 = v156;
            v32 = (*(_DWORD *)(v62 + 8))-- == 1;
            if ( v32 )
              break;
          }
          if ( (unsigned __int64)++v60 >= v61 )
            goto LABEL_69;
        }
        sub_15D7BC0(v63, v62);
        ++v60;
      }
      while ( (unsigned __int64)v60 < v61 );
LABEL_69:
      v60 = v157;
      if ( v157 )
LABEL_70:
        sub_186B220(v60 - 1);
    }
    if ( v143 )
    {
      LODWORD(v148) = *(_DWORD *)(v143 + 8);
      v32 = (_DWORD)v148 == 1;
      *(_DWORD *)(v143 + 8) = v148 - 1;
      if ( v32 )
        sub_15D7BC0(v141, v143);
    }
    if ( v26 )
    {
      v64 = v26;
      v65 = (unsigned __int64)&v26[*((unsigned int *)v26 - 1)];
      if ( (unsigned __int64)v26 < v65 )
      {
        do
        {
          while ( 1 )
          {
            v66 = *v64;
            if ( *v64 )
            {
              v32 = (*(_DWORD *)(v66 + 8))-- == 1;
              if ( v32 )
                break;
            }
            if ( (unsigned __int64)++v64 >= v65 )
              goto LABEL_81;
          }
          sub_15D7BC0(v142, v66);
          ++v64;
        }
        while ( (unsigned __int64)v64 < v65 );
      }
LABEL_81:
      sub_186B220(v26 - 1);
    }
    a2 = (__int64)v149;
  }
  else
  {
    sub_62A000(v11, a2);
    v149 = (__int64 *)a2;
  }
  sub_63DAD0(a3, a2, a5);
  result = (_DWORD *)a1[19];
  v148 = (__int64)result;
  if ( !result )
    goto LABEL_19;
  v146 = v149;
  v13 = result[20];
  v14 = 2 * v13;
  if ( 3 * v13 < (unsigned int)(4 * (result[21] + result[22])) )
  {
    v108 = (__m128i *)sub_186B270(16LL * v14);
    v109 = v108;
    v110 = &v108[v14];
    if ( v14 )
    {
      if ( ((16 * (_BYTE)v14) & 0x10) == 0 || (*v108 = 0, ++v108, v108 != v110) )
      {
        do
        {
          *v108 = 0;
          v108 += 2;
          v108[-1] = 0;
        }
        while ( v108 != v110 );
      }
    }
    v111 = *(const __m128i **)(v148 + 72);
    v112 = *(unsigned int *)(v148 + 80);
    v113 = (__m128i *)&v111[v112];
    if ( v111 != &v111[v112] )
    {
      do
      {
        while ( 1 )
        {
          v114 = v111->m128i_i64[0];
          if ( v111->m128i_i64[0] > 1uLL )
            break;
          if ( v113 == ++v111 )
            goto LABEL_146;
        }
        v147 = v110;
        v115 = sub_62A5E0(v114);
        v110 = v147;
        v116 = (v14 - 1) & v115;
        v117 = &v109[v116];
        if ( v14 == v116 )
        {
LABEL_182:
          if ( v109 == v117 )
          {
LABEL_200:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v118 = v109;
          while ( v118->m128i_i64[0] )
          {
            if ( v117 == ++v118 )
              goto LABEL_200;
          }
        }
        else
        {
          v118 = &v109[v116];
          while ( v118->m128i_i64[0] )
          {
            if ( v147 == ++v118 )
              goto LABEL_182;
          }
        }
        v119 = _mm_loadu_si128(v111++);
        *v118 = v119;
      }
      while ( v113 != v111 );
LABEL_146:
      v113 = *(__m128i **)(v148 + 72);
    }
    if ( v113 )
      sub_186B220(v113);
    v120 = v148;
    *(_QWORD *)(v148 + 72) = v109;
    *(_DWORD *)(v120 + 80) = v14;
    *(_DWORD *)(v120 + 88) = 0;
  }
  LODWORD(v147) = sub_62A5E0(v9);
  v15 = *(unsigned int *)(v148 + 80);
  v16 = *(__m128 **)(v148 + 72);
  v17 = v15 - 1;
  v15 *= 16;
  v18 = (__m128 *)((char *)v16 + v15);
  v19 = 16LL * ((unsigned int)v147 & v17);
  v20 = &v16[(unsigned __int64)v19 / 0x10];
  if ( v19 != v15 )
  {
    v16 = (__m128 *)((char *)v16 + v19);
    v21 = nullptr;
    while ( 1 )
    {
      v22 = v16->m128_u64[0];
      if ( v16->m128_u64[0] <= 1 )
      {
        if ( !v22 )
          goto LABEL_87;
        v21 = v16;
      }
      else if ( (_DWORD)v147 == (unsigned int)sub_62A5E0(v22) && v9 == v16->m128_u64[0] )
      {
        goto LABEL_13;
      }
      if ( v18 == ++v16 )
      {
        v16 = *(__m128 **)(v148 + 72);
        goto LABEL_112;
      }
    }
  }
  v21 = nullptr;
  while ( 1 )
  {
LABEL_112:
    if ( v20 == v16 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v97 = v16->m128_u64[0];
    if ( v16->m128_u64[0] <= 1 )
      break;
    if ( (_DWORD)v147 == (unsigned int)sub_62A5E0(v97) && v9 == v16->m128_u64[0] )
    {
LABEL_13:
      *v16 = _mm_loadh_ps((const double *)&v146);
      goto LABEL_90;
    }
LABEL_111:
    ++v16;
  }
  if ( v97 )
  {
    v21 = v16;
    goto LABEL_111;
  }
LABEL_87:
  v71 = _mm_loadh_ps((const double *)&v146);
  if ( v21 )
    --*(_DWORD *)(v148 + 88);
  else
    v21 = v16;
  v72 = v148;
  *v21 = v71;
  ++*(_DWORD *)(v72 + 84);
LABEL_90:
  v73 = v148;
  sub_62A000(*(_QWORD *)(v148 + 40), v9);
  v74 = *(_QWORD **)(v73 + 48);
  if ( v74 )
  {
    v75 = *((_DWORD *)v74 - 1);
    if ( v75 == *((_DWORD *)v74 - 2) )
    {
      v104 = (3 * v75 + 1) >> 1;
      v105 = 8 * v104 + 8;
      if ( 8 * v75 + 8 >= (unsigned int)v105 || v75 >= v104 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v158, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v158);
        sub_233E40((__int64)v158);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v106 = (unsigned int *)sub_186B300(v74 - 1, v105);
      v74 = v106 + 2;
      *(_QWORD *)(v148 + 48) = v106 + 2;
      v107 = v106[1];
      *v106 = v104;
      LODWORD(v106) = v107;
      v78 = &v74[v107];
      v77 = (_DWORD)v106 + 1;
    }
    else
    {
      v76 = v75;
      v77 = v75 + 1;
      v78 = &v74[v76];
    }
  }
  else
  {
    v140 = (_QWORD *)sub_186B270(0x18u);
    v74 = v140 + 1;
    *v140 = 2;
    v78 = v140 + 1;
    *(_QWORD *)(v148 + 48) = v140 + 1;
    v77 = 1;
  }
  v79 = v148;
  *v78 = v9;
  *((_DWORD *)v74 - 1) = v77;
  sub_62A000(*(_QWORD *)(v79 + 40), v146);
  v80 = *(_QWORD **)(v79 + 48);
  if ( v80 )
  {
    v81 = *((_DWORD *)v80 - 1);
    if ( v81 == *((_DWORD *)v80 - 2) )
    {
      v100 = (3 * v81 + 1) >> 1;
      v101 = 8 * v100 + 8;
      if ( 8 * v81 + 8 >= (unsigned int)v101 || v81 >= v100 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v158, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, v158);
        sub_233E40((__int64)v158);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v102 = (unsigned int *)sub_186B300(v80 - 1, v101);
      v103 = v102[1];
      v80 = v102 + 2;
      *(_QWORD *)(v148 + 48) = v102 + 2;
      *v102 = v100;
      LODWORD(v102) = v103;
      v84 = &v80[v103];
      v83 = (_DWORD)v102 + 1;
    }
    else
    {
      v82 = v81;
      v83 = v81 + 1;
      v84 = &v80[v82];
    }
  }
  else
  {
    v139 = (_QWORD *)sub_186B270(0x18u);
    v80 = v139 + 1;
    *v139 = 2;
    v84 = v139 + 1;
    *(_QWORD *)(v148 + 48) = v139 + 1;
    v83 = 1;
  }
  *v84 = v146;
  v85 = (_DWORD *)v148;
  *((_DWORD *)v80 - 1) = v83;
  v86 = v85[26];
  v87 = 2 * v86;
  if ( 3 * v86 < (unsigned int)(4 * (v85[27] + v85[28])) )
  {
    v146 = (__int64 *)(16LL * v87);
    v121 = (__m128i *)sub_186B270((size_t)v146);
    v147 = v121;
    v122 = &v121[v87];
    if ( v87 )
    {
      if ( ((16 * (_BYTE)v87) & 0x10) == 0 || (*v121 = 0, ++v121, v121 != v122) )
      {
        do
        {
          *v121 = 0;
          v121 += 2;
          v121[-1] = 0;
        }
        while ( v121 != v122 );
      }
    }
    v123 = *(char **)(v148 + 96);
    v124 = *(unsigned int *)(v148 + 104);
    v125 = (__int64 *)(v123 + 8);
    v126 = &v123[16 * v124];
    if ( v123 == v126 )
    {
LABEL_170:
      if ( v126 )
      {
        if ( (_DWORD)v124 )
        {
          v133 = v126;
          v134 = &v126[16 * v124];
          do
          {
            while ( 1 )
            {
              v135 = *((_QWORD *)v133 + 1);
              if ( !v135 )
                break;
              v133 += 16;
              sub_186B220((void *)(v135 - 8));
              if ( v134 == v133 )
                goto LABEL_175;
            }
            v133 += 16;
          }
          while ( v133 != v134 );
        }
LABEL_175:
        sub_186B220(v126);
      }
      v136 = v148;
      v137 = (__int64 *)v147;
      *(_DWORD *)(v148 + 104) = v87;
      *(_QWORD *)(v136 + 96) = v137;
      *(_DWORD *)(v136 + 112) = 0;
      goto LABEL_97;
    }
    while ( 1 )
    {
      v128 = *(v125 - 1);
      if ( v128 <= 1 )
      {
LABEL_158:
        v127 = v125 + 2;
        if ( v126 == (char *)(v125 + 1) )
          goto LABEL_169;
        goto LABEL_159;
      }
      v129 = (__int64 *)(16LL * ((v87 - 1) & (unsigned int)sub_62A5E0(v128)));
      v130 = (__m128i *)((char *)v147 + (_QWORD)v129);
      if ( v146 == v129 )
      {
LABEL_187:
        v131 = v147;
        if ( v147 == v130 )
        {
LABEL_201:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        while ( v131->m128i_i64[0] )
        {
          if ( v130 == ++v131 )
            goto LABEL_201;
        }
        v131->m128i_i64[0] = *(v125 - 1);
        if ( v125 == (__int64 *)&v131->m128i_u64[1] )
          goto LABEL_158;
        v132 = v131->m128i_i64[1];
        if ( v132 )
          goto LABEL_167;
      }
      else
      {
        v131 = (__m128i *)((char *)v147 + (_QWORD)v129);
        while ( v131->m128i_i64[0] )
        {
          if ( v122 == ++v131 )
            goto LABEL_187;
        }
        v131->m128i_i64[0] = *(v125 - 1);
        if ( v125 == (__int64 *)&v131->m128i_u64[1] )
          goto LABEL_158;
        v132 = v131->m128i_i64[1];
        if ( v132 )
        {
LABEL_167:
          v144 = v131;
          sub_186B220((void *)(v132 - 8));
          v131 = v144;
        }
      }
      v131->m128i_i64[1] = 0;
      v131->m128i_i64[1] = *v125;
      v127 = v125 + 2;
      *v125 = 0;
      if ( v126 == (char *)(v125 + 1) )
      {
LABEL_169:
        v124 = *(unsigned int *)(v148 + 104);
        v126 = *(char **)(v148 + 96);
        goto LABEL_170;
      }
LABEL_159:
      v125 = v127;
    }
  }
LABEL_97:
  LODWORD(v147) = sub_62A5E0(v9);
  v88 = *(unsigned int *)(v148 + 104);
  v89 = *(__int64 **)(v148 + 96);
  v90 = v88 - 1;
  v88 *= 16;
  v91 = (__int64 *)((char *)v89 + v88);
  v92 = 16LL * ((unsigned int)v147 & v90);
  v93 = &v89[(unsigned __int64)v92 / 8];
  if ( v92 == v88 )
  {
    v94 = nullptr;
    while ( 1 )
    {
LABEL_121:
      if ( v93 == v89 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v98 = *v89;
      if ( (unsigned __int64)*v89 <= 1 )
      {
        if ( !v98 )
        {
          if ( v94 )
            --*(_DWORD *)(v148 + 112);
          else
            v94 = v89;
          v23 = v94[1];
          *v94 = v9;
          if ( v23 )
            goto LABEL_17;
          goto LABEL_18;
        }
        v94 = v89;
      }
      else
      {
        v99 = sub_62A5E0(v98);
        if ( (_DWORD)v147 == v99 && v9 == *v89 )
        {
          result = (_DWORD *)v89[1];
          if ( result )
LABEL_106:
            result = (_DWORD *)sub_186B220(result - 2);
LABEL_107:
          v89[1] = 0;
          goto LABEL_19;
        }
      }
      v89 += 2;
    }
  }
  v89 = (__int64 *)((char *)v89 + v92);
  v94 = nullptr;
  while ( 2 )
  {
    v95 = *v89;
    if ( (unsigned __int64)*v89 > 1 )
    {
      v96 = sub_62A5E0(v95);
      if ( (_DWORD)v147 == v96 && v9 == *v89 )
      {
        result = (_DWORD *)v89[1];
        if ( !result )
          goto LABEL_107;
        goto LABEL_106;
      }
      goto LABEL_101;
    }
    if ( v95 )
    {
      v94 = v89;
LABEL_101:
      v89 += 2;
      if ( v91 == v89 )
      {
        v89 = *(__int64 **)(v148 + 96);
        goto LABEL_121;
      }
      continue;
    }
    break;
  }
  if ( v94 )
    --*(_DWORD *)(v148 + 112);
  else
    v94 = v89;
  v23 = v94[1];
  *v94 = v9;
  if ( !v23 )
    goto LABEL_18;
LABEL_17:
  sub_186B220((void *)(v23 - 8));
LABEL_18:
  result = (_DWORD *)v148;
  v94[1] = 0;
  ++result[27];
LABEL_19:
  if ( v149 )
    return (_DWORD *)sub_62A410(v150, v149);
  return result;
}

