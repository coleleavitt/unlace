__m128 *__fastcall sub_7A5A00(
        const __m128i *a1,
        unsigned __int64 *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        const __m128i *a6,
        double a7,
        int a8,
        const __m128i *a9)
{
  char **v9; // rbp
  char **exception; // rbp
  char **v11; // rbp
  char **v12; // rbp
  char **v13; // rbp
  char **v14; // rbp
  char **v15; // rbp
  char **v16; // rbp
  char **v17; // rbp
  __int64 v20; // r13
  __int64 v22; // rbp
  __int64 v23; // rbx
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rsi
  int v27; // eax
  __int64 *v28; // rsi
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rdi
  __int64 v32; // rbx
  _QWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rsi
  int v36; // eax
  __int64 *v37; // rsi
  unsigned int *v38; // r13
  unsigned int v39; // edx
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rbx
  int v43; // eax
  _QWORD *v44; // rdx
  __int64 v45; // rax
  unsigned int *v46; // rsi
  unsigned int v47; // ebx
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdi
  void (__fastcall *v53)(const __m128i *, __int64); // rbx
  __int64 v54; // rax
  __int64 v55; // rsi
  _QWORD *v56; // rax
  __int32 v57; // r13d
  __int64 v58; // rax
  _QWORD *v59; // rdx
  __int64 v60; // rbx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 *v64; // rcx
  __int64 v65; // rax
  int v66; // ebx
  __int64 v67; // rax
  _QWORD *v68; // rdx
  __int64 v69; // r13
  unsigned int v70; // eax
  __int64 v71; // rcx
  int v72; // eax
  __int64 *v73; // rcx
  __m128i *v74; // rbx
  const __m128i *v75; // r13
  _QWORD *v76; // rax
  int v77; // eax
  __m128i *v78; // rdx
  __int64 v79; // rdx
  __m128i v80; // xmm0
  unsigned int v81; // eax
  unsigned int v82; // ebp
  size_t v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rdi
  _DWORD *v86; // r15
  __int64 v87; // rdx
  unsigned __int64 v88; // rax
  __int64 v89; // rdx
  __int32 v90; // r13d
  __int64 v91; // rax
  _QWORD *v92; // rdx
  __int64 v93; // rbp
  unsigned int v94; // eax
  __int64 v95; // rcx
  int v96; // eax
  __int64 *v97; // rcx
  __int64 v98; // rax
  int v99; // r13d
  __int64 v100; // rax
  _QWORD *v101; // rdx
  __int64 v102; // rbp
  unsigned int v103; // eax
  __int64 v104; // rcx
  int v105; // eax
  __int64 *v106; // rcx
  __m128i *v107; // r15
  const __m128i *v108; // r13
  _QWORD *v109; // rax
  int v110; // eax
  __m128i *v111; // rdx
  __int64 v112; // rdx
  __m128i v113; // xmm0
  unsigned int v114; // eax
  unsigned int v115; // ebx
  size_t v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rdi
  _DWORD *v119; // r12
  __int64 v120; // rdx
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  __int32 v124; // eax
  __int64 v125; // rax
  __int32 v126; // eax
  __int64 (__fastcall *v127)(__int64); // rax
  __m128 *result; // rax
  __m128 v129; // xmm0
  __m128 v130; // xmm1
  __int64 v131; // rdx
  unsigned int v132; // r8d
  size_t v133; // rsi
  unsigned int *v134; // rax
  __int64 v135; // rsi
  unsigned int v136; // r8d
  size_t v137; // rsi
  unsigned int *v138; // rax
  __int64 v139; // rsi
  unsigned int v140; // ebx
  unsigned int v141; // ecx
  unsigned int *v142; // rax
  __int64 v143; // rcx
  unsigned int v144; // r13d
  unsigned int v145; // ecx
  unsigned int *v146; // rax
  __int64 v147; // rcx
  unsigned int v148; // ecx
  size_t v149; // rsi
  unsigned int v150; // ebx
  unsigned int *v151; // rax
  __int64 v152; // rcx
  unsigned int v153; // r13d
  unsigned int v154; // ecx
  unsigned int *v155; // rax
  __int64 v156; // rcx
  __int64 v157; // rbx
  __int64 v158; // rdi
  void (__fastcall *v159)(const __m128i *, __int64); // rbx
  __int64 v160; // rax
  _QWORD *v161; // rdx
  _QWORD *v162; // rdx
  _QWORD *v163; // rdx
  _QWORD *v164; // rdx
  _QWORD *v165; // rdx
  _QWORD *v166; // rdx
  __int64 m128i_i64; // [rsp+0h] [rbp-88h]
  __int32 v169; // [rsp+10h] [rbp-78h]
  unsigned int v170; // [rsp+10h] [rbp-78h]
  unsigned int v171; // [rsp+10h] [rbp-78h]
  int v172; // [rsp+1Ch] [rbp-6Ch]
  __int64 v173[11]; // [rsp+30h] [rbp-58h] BYREF

  v20 = a3;
  v22 = a5;
  sub_7A4170(a1);
  m128i_i64 = (__int64)a1[134].m128i_i64;
  v169 = a1[516].m128i_i32[1];
  v23 = sub_180C100(&a1[134], 24);
  *(_DWORD *)(v23 + 16) = v169;
  v24 = (_QWORD *)a1[133].m128i_i64[0];
  *(_QWORD *)v23 = &off_1C4C070;
  *(_QWORD *)(v23 + 8) = (char *)a1 + 8260;
  if ( v24 )
  {
    v25 = *((_DWORD *)v24 - 1);
    if ( v25 == *((_DWORD *)v24 - 2) )
    {
      v136 = (3 * v25 + 1) >> 1;
      v137 = 8 * v136 + 8;
      if ( 8 * v25 + 8 >= (unsigned int)v137 || v25 >= v136 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v173, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v173);
        sub_233E40((__int64)v173);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v171 = (3 * v25 + 1) >> 1;
      v138 = (unsigned int *)sub_186B300(v24 - 1, v137);
      v139 = v138[1];
      v24 = v138 + 2;
      *v138 = v171;
      LODWORD(v138) = v139;
      a1[133].m128i_i64[0] = (__int64)v24;
      v28 = &v24[v139];
      v27 = (_DWORD)v138 + 1;
    }
    else
    {
      v26 = v25;
      v27 = v25 + 1;
      v28 = &v24[v26];
    }
  }
  else
  {
    v165 = (_QWORD *)sub_186B270(0x18u);
    *v165 = 2;
    v27 = 1;
    v24 = v165 + 1;
    a1[133].m128i_i64[0] = (__int64)v24;
    v28 = v24;
  }
  *v28 = v23;
  *((_DWORD *)v24 - 1) = v27;
  v29 = a1[514].m128i_i64[0];
  if ( v29 )
    v30 = *(_DWORD *)(v29 - 4);
  else
    v30 = 0;
  v31 = (__int64)a1[134].m128i_i64;
  v172 = v30;
  v32 = sub_180C100(m128i_i64, 24);
  *(_DWORD *)(v32 + 16) = v172;
  v33 = (_QWORD *)a1[133].m128i_i64[0];
  *(_QWORD *)v32 = off_1C547E8;
  *(_QWORD *)(v32 + 8) = a1 + 514;
  if ( v33 )
  {
    v34 = *((_DWORD *)v33 - 1);
    if ( v34 == *((_DWORD *)v33 - 2) )
    {
      v132 = (3 * v34 + 1) >> 1;
      v133 = 8 * v132 + 8;
      if ( 8 * v34 + 8 >= (unsigned int)v133 || v34 >= v132 )
      {
        v12 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v173, "Overflow encountered when expanding vector");
        *v12 = (char *)off_1C63128;
        sub_2333C0(v12 + 1, v173);
        sub_233E40((__int64)v173);
        __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = (__int64)(v33 - 1);
      v170 = (3 * v34 + 1) >> 1;
      v134 = (unsigned int *)sub_186B300(v33 - 1, v133);
      v135 = v134[1];
      v33 = v134 + 2;
      *v134 = v170;
      LODWORD(v134) = v135;
      a1[133].m128i_i64[0] = (__int64)v33;
      v37 = &v33[v135];
      v36 = (_DWORD)v134 + 1;
    }
    else
    {
      v35 = v34;
      v36 = v34 + 1;
      v37 = &v33[v35];
    }
  }
  else
  {
    v31 = 24;
    v162 = (_QWORD *)sub_186B270(0x18u);
    *v162 = 2;
    v36 = 1;
    v33 = v162 + 1;
    a1[133].m128i_i64[0] = (__int64)v33;
    v37 = v33;
  }
  *v37 = v32;
  *((_DWORD *)v33 - 1) = v36;
  if ( (_DWORD)v20 )
  {
    v38 = &a4[v20];
    while ( 1 )
    {
      v39 = *a4;
      if ( *a4 == -2 )
        goto LABEL_12;
      v40 = a1[145].m128i_i64[1];
      v41 = v39 >> 1;
      if ( v40 )
      {
        if ( (unsigned int)v41 < *(_DWORD *)(v40 - 4) )
        {
          v40 = *(_QWORD *)(v40 + 8 * v41);
          if ( v40 )
          {
            v42 = a1[9].m128i_i64[0];
            if ( (v39 & 1) == 0 )
              break;
            v31 = a1[9].m128i_i64[0];
            v40 = sub_15EC2C0(v31, v40);
            if ( v40 )
              break;
          }
        }
      }
      sub_180B130(v31);
      if ( !(unsigned __int8)sub_186A530(a7) )
      {
        v157 = sub_180B150(v31, v40);
        if ( *a4 == -2 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        v158 = v157;
        std::__ostream_insert<char,std::char_traits<char>>();
        v159 = *(void (__fastcall **)(const __m128i *, __int64))(a1->m128i_i64[0] + 224);
        v160 = sub_180B150(v158, "\n");
        v31 = (__int64)a1;
        v159(a1, v160);
        goto LABEL_20;
      }
      sub_186A4C0(a7);
      v51 = sub_180B150(v31, v40);
      if ( *a4 == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      v52 = v51;
      std::__ostream_insert<char,std::char_traits<char>>();
      v53 = *(void (__fastcall **)(const __m128i *, __int64))(a1->m128i_i64[0] + 224);
      v54 = sub_180B150(v52, "\n");
      v31 = (__int64)a1;
      v55 = v54;
      v53(a1, v54);
      sub_186A500(a1, v55);
      v44 = (_QWORD *)a1[514].m128i_i64[0];
      if ( v44 )
      {
LABEL_21:
        v45 = *((unsigned int *)v44 - 1);
        v46 = (unsigned int *)v44 + v45;
        if ( (_DWORD)v45 == *((_DWORD *)v44 - 2) )
        {
          v47 = (unsigned int)(3 * v45 + 1) >> 1;
          v48 = 4 * v47 + 8;
          if ( 4 * (int)v45 + 8 >= (unsigned int)v48 || (unsigned int)v45 >= v47 )
          {
            v17 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v173, "Overflow encountered when expanding vector");
            *v17 = (char *)off_1C63128;
            sub_2333C0(v17 + 1, v173);
            sub_233E40((__int64)v173);
            __cxa_throw(v17, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = (__int64)(v44 - 1);
          v49 = (unsigned int *)sub_186B300(v44 - 1, v48);
          v44 = v49 + 2;
          *v49 = v47;
          v50 = v49[1];
          a1[514].m128i_i64[0] = (__int64)v44;
          v46 = (unsigned int *)v44 + v50;
        }
        goto LABEL_11;
      }
LABEL_30:
      v31 = 16;
      v56 = (_QWORD *)sub_186B270(0x10u);
      v44 = v56 + 1;
      *v56 = 2;
      a1[514].m128i_i64[0] = (__int64)(v56 + 1);
      v46 = (unsigned int *)(v56 + 1);
LABEL_11:
      *v46 = *a4;
      ++*((_DWORD *)v44 - 1);
LABEL_12:
      if ( ++a4 == v38 )
        goto LABEL_31;
    }
    v43 = *(_DWORD *)(v40 + 8);
    *(_DWORD *)(v40 + 8) = v43 + 1;
    *(_DWORD *)(v40 + 8) = v43;
    if ( !v43 )
    {
      v31 = v42;
      sub_15D7BC0(v42, v40);
    }
LABEL_20:
    v44 = (_QWORD *)a1[514].m128i_i64[0];
    if ( v44 )
      goto LABEL_21;
    goto LABEL_30;
  }
LABEL_31:
  v57 = a1[517].m128i_i32[1];
  v58 = sub_180C100(m128i_i64, 24);
  v59 = (_QWORD *)a1[133].m128i_i64[0];
  v60 = v58;
  *(_QWORD *)v58 = &off_1C4C070;
  *(_QWORD *)(v58 + 8) = (char *)a1 + 8276;
  *(_DWORD *)(v58 + 16) = v57;
  if ( v59 )
  {
    v61 = *((_DWORD *)v59 - 1);
    if ( v61 == *((_DWORD *)v59 - 2) )
    {
      v153 = (3 * v61 + 1) >> 1;
      v154 = 8 * v153 + 8;
      if ( 8 * v61 + 8 >= v154 || v61 >= v153 )
      {
        v9 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v173, "Overflow encountered when expanding vector");
        *v9 = (char *)off_1C63128;
        sub_2333C0(v9 + 1, v173);
        sub_233E40((__int64)v173);
        __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v155 = (unsigned int *)sub_186B300(v59 - 1, v154);
      v156 = v155[1];
      v59 = v155 + 2;
      *v155 = v153;
      a1[133].m128i_i64[0] = (__int64)(v155 + 2);
      LODWORD(v155) = v156;
      v64 = &v59[v156];
      v63 = (_DWORD)v155 + 1;
    }
    else
    {
      v62 = v61;
      v63 = v61 + 1;
      v64 = &v59[v62];
    }
  }
  else
  {
    v164 = (_QWORD *)sub_186B270(0x18u);
    *v164 = 2;
    v63 = 1;
    v59 = v164 + 1;
    a1[133].m128i_i64[0] = (__int64)v59;
    v64 = v59;
  }
  *v64 = v60;
  *((_DWORD *)v59 - 1) = v63;
  v65 = a1[514].m128i_i64[1];
  if ( v65 )
    v66 = *(_DWORD *)(v65 - 4);
  else
    v66 = 0;
  v67 = sub_180C100(m128i_i64, 24);
  v68 = (_QWORD *)a1[133].m128i_i64[0];
  v69 = v67;
  *(_QWORD *)v67 = off_1C54860;
  *(_QWORD *)(v67 + 8) = (char *)a1 + 8232;
  *(_DWORD *)(v67 + 16) = v66;
  if ( v68 )
  {
    v70 = *((_DWORD *)v68 - 1);
    if ( v70 == *((_DWORD *)v68 - 2) )
    {
      v148 = (3 * v70 + 1) >> 1;
      v149 = 8 * v148 + 8;
      v150 = v148;
      if ( 8 * v70 + 8 >= (unsigned int)v149 || v70 >= v148 )
      {
        v15 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v173, "Overflow encountered when expanding vector");
        *v15 = (char *)off_1C63128;
        sub_2333C0(v15 + 1, v173);
        sub_233E40((__int64)v173);
        __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v151 = (unsigned int *)sub_186B300(v68 - 1, v149);
      v152 = v151[1];
      v68 = v151 + 2;
      *v151 = v150;
      a1[133].m128i_i64[0] = (__int64)(v151 + 2);
      LODWORD(v151) = v152;
      v73 = &v68[v152];
      v72 = (_DWORD)v151 + 1;
    }
    else
    {
      v71 = v70;
      v72 = v70 + 1;
      v73 = &v68[v71];
    }
  }
  else
  {
    v166 = (_QWORD *)sub_186B270(0x18u);
    *v166 = 2;
    v72 = 1;
    v68 = v166 + 1;
    a1[133].m128i_i64[0] = (__int64)v68;
    v73 = v68;
  }
  *v73 = v69;
  *((_DWORD *)v68 - 1) = v72;
  if ( (_DWORD)v22 )
  {
    v74 = (__m128i *)a1[514].m128i_i64[1];
    v75 = &a6[v22];
    if ( v74 )
      goto LABEL_44;
    v76 = (_QWORD *)sub_186B270(0x28u);
    v74 = (__m128i *)(v76 + 1);
    *v76 = 2;
    v77 = 1;
    a1[514].m128i_i64[1] = (__int64)v74;
    v78 = v74;
    while ( 1 )
    {
      v80 = _mm_loadu_si128(a6++);
      *v78 = v80;
      v74[-1].m128i_i32[3] = v77;
      if ( v75 == a6 )
        break;
LABEL_44:
      v81 = v74[-1].m128i_u32[3];
      if ( v81 == v74[-1].m128i_i32[2] )
      {
        v82 = (3 * v81 + 1) >> 1;
        v83 = 16 * v82 + 8;
        if ( 16 * v81 + 8 >= (unsigned int)v83 || v81 >= v82 )
        {
          v16 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v173, "Overflow encountered when expanding vector");
          *v16 = (char *)off_1C63128;
          sub_2333C0(v16 + 1, v173);
          sub_233E40((__int64)v173);
          __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v84 = sub_186B270(v83);
        v85 = a1[514].m128i_i64[1];
        v86 = (_DWORD *)v84;
        v74 = (__m128i *)(v84 + 8);
        if ( v85 )
        {
          v87 = *(unsigned int *)(v85 - 4);
          *(_DWORD *)(v84 + 4) = v87;
          v88 = 0;
          v89 = 16 * v87;
          if ( v89 )
          {
            do
            {
              *(__m128i *)&v86[v88 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v85 + v88));
              v88 += 16LL;
            }
            while ( v89 != v88 );
          }
          sub_186B220((void *)(v85 - 8));
          v78 = &v74[v86[1]];
          v77 = v86[1] + 1;
        }
        else
        {
          *(_DWORD *)(v84 + 4) = 0;
          v78 = (__m128i *)(v84 + 8);
          v77 = 1;
        }
        a1[514].m128i_i64[1] = (__int64)v74;
        *v86 = v82;
      }
      else
      {
        v79 = v81;
        v77 = v81 + 1;
        v78 = &v74[v79];
      }
    }
  }
  v90 = a1[517].m128i_i32[3];
  v91 = sub_180C100(m128i_i64, 24);
  v92 = (_QWORD *)a1[133].m128i_i64[0];
  v93 = v91;
  *(_QWORD *)v91 = &off_1C4C070;
  *(_QWORD *)(v91 + 8) = (char *)a1 + 8284;
  *(_DWORD *)(v91 + 16) = v90;
  if ( v92 )
  {
    v94 = *((_DWORD *)v92 - 1);
    if ( v94 == *((_DWORD *)v92 - 2) )
    {
      v144 = (3 * v94 + 1) >> 1;
      v145 = 8 * v144 + 8;
      if ( 8 * v94 + 8 >= v145 || v94 >= v144 )
      {
        v11 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v173, "Overflow encountered when expanding vector");
        *v11 = (char *)off_1C63128;
        sub_2333C0(v11 + 1, v173);
        sub_233E40((__int64)v173);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v146 = (unsigned int *)sub_186B300(v92 - 1, v145);
      v147 = v146[1];
      v92 = v146 + 2;
      *v146 = v144;
      a1[133].m128i_i64[0] = (__int64)(v146 + 2);
      LODWORD(v146) = v147;
      v97 = &v92[v147];
      v96 = (_DWORD)v146 + 1;
    }
    else
    {
      v95 = v94;
      v96 = v94 + 1;
      v97 = &v92[v95];
    }
  }
  else
  {
    v161 = (_QWORD *)sub_186B270(0x18u);
    *v161 = 2;
    v96 = 1;
    v92 = v161 + 1;
    a1[133].m128i_i64[0] = (__int64)v92;
    v97 = v92;
  }
  *v97 = v93;
  *((_DWORD *)v92 - 1) = v96;
  v98 = a1[515].m128i_i64[0];
  if ( v98 )
    v99 = *(_DWORD *)(v98 - 4);
  else
    v99 = 0;
  v100 = sub_180C100(m128i_i64, 24);
  v101 = (_QWORD *)a1[133].m128i_i64[0];
  v102 = v100;
  *(_QWORD *)v100 = off_1C54860;
  *(_QWORD *)(v100 + 8) = a1 + 515;
  *(_DWORD *)(v100 + 16) = v99;
  if ( v101 )
  {
    v103 = *((_DWORD *)v101 - 1);
    if ( v103 == *((_DWORD *)v101 - 2) )
    {
      v140 = (3 * v103 + 1) >> 1;
      v141 = 8 * v140 + 8;
      if ( 8 * v103 + 8 >= v141 || v103 >= v140 )
      {
        v14 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v173, "Overflow encountered when expanding vector");
        *v14 = (char *)off_1C63128;
        sub_2333C0(v14 + 1, v173);
        sub_233E40((__int64)v173);
        __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v142 = (unsigned int *)sub_186B300(v101 - 1, v141);
      v143 = v142[1];
      v101 = v142 + 2;
      *v142 = v140;
      a1[133].m128i_i64[0] = (__int64)(v142 + 2);
      LODWORD(v142) = v143;
      v106 = &v101[v143];
      v105 = (_DWORD)v142 + 1;
    }
    else
    {
      v104 = v103;
      v105 = v103 + 1;
      v106 = &v101[v104];
    }
  }
  else
  {
    v163 = (_QWORD *)sub_186B270(0x18u);
    *v163 = 2;
    v105 = 1;
    v101 = v163 + 1;
    a1[133].m128i_i64[0] = (__int64)v101;
    v106 = v101;
  }
  *v106 = v102;
  v107 = (__m128i *)a1[515].m128i_i64[0];
  *((_DWORD *)v101 - 1) = v105;
  if ( a8 )
  {
    v108 = a9;
    if ( v107 )
      goto LABEL_65;
    v109 = (_QWORD *)sub_186B270(0x28u);
    v107 = (__m128i *)(v109 + 1);
    *v109 = 2;
    v110 = 1;
    a1[515].m128i_i64[0] = (__int64)v107;
    v111 = v107;
    while ( 1 )
    {
      v113 = _mm_loadu_si128(v108++);
      *v111 = v113;
      v107[-1].m128i_i32[3] = v110;
      if ( v108 == &a9[a8] )
        break;
LABEL_65:
      v114 = v107[-1].m128i_u32[3];
      if ( v114 == v107[-1].m128i_i32[2] )
      {
        v115 = (3 * v114 + 1) >> 1;
        v116 = 16 * v115 + 8;
        if ( 16 * v114 + 8 >= (unsigned int)v116 || v114 >= v115 )
        {
          v13 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v173, "Overflow encountered when expanding vector");
          *v13 = (char *)off_1C63128;
          sub_2333C0(v13 + 1, v173);
          sub_233E40((__int64)v173);
          __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v117 = sub_186B270(v116);
        v118 = a1[515].m128i_i64[0];
        v119 = (_DWORD *)v117;
        v107 = (__m128i *)(v117 + 8);
        if ( v118 )
        {
          v120 = *(unsigned int *)(v118 - 4);
          *(_DWORD *)(v117 + 4) = v120;
          v121 = 0;
          v122 = 16 * v120;
          if ( v122 )
          {
            do
            {
              *(__m128i *)&v119[v121 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v118 + v121));
              v121 += 16LL;
            }
            while ( v122 != v121 );
          }
          sub_186B220((void *)(v118 - 8));
          v111 = &v107[v119[1]];
          v110 = v119[1] + 1;
        }
        else
        {
          *(_DWORD *)(v117 + 4) = 0;
          v111 = (__m128i *)(v117 + 8);
          v110 = 1;
        }
        a1[515].m128i_i64[0] = (__int64)v107;
        *v119 = v115;
      }
      else
      {
        v112 = v114;
        v110 = v114 + 1;
        v111 = &v107[v112];
      }
    }
  }
  a1[516].m128i_i32[0] = a1[516].m128i_i32[1];
  a1[517].m128i_i32[0] = a1[517].m128i_i32[1];
  a1[517].m128i_i32[2] = a1[517].m128i_i32[3];
  v123 = a1[514].m128i_i64[0];
  if ( v123 )
    v124 = *(_DWORD *)(v123 - 4);
  else
    v124 = 0;
  a1[516].m128i_i32[1] = v124;
  v125 = a1[514].m128i_i64[1];
  if ( v125 )
  {
    a1[517].m128i_i32[1] = *(_DWORD *)(v125 - 4);
    if ( v107 )
    {
LABEL_77:
      v126 = v107[-1].m128i_i32[3];
      goto LABEL_78;
    }
  }
  else
  {
    a1[517].m128i_i32[1] = 0;
    if ( v107 )
      goto LABEL_77;
  }
  v126 = 0;
LABEL_78:
  a1[517].m128i_i32[3] = v126;
  v127 = *(__int64 (__fastcall **)(__int64))(a1->m128i_i64[0] + 432);
  if ( v127 != sub_79EFF0 )
    m128i_i64 = v127((__int64)a1);
  result = (__m128 *)sub_180C100(m128i_i64, 40);
  v129 = (__m128)_mm_loadu_si128(a1 + 516);
  v130 = (__m128)_mm_loadu_si128(a1 + 517);
  v131 = a1[517].m128i_i64[1];
  result->m128_u64[0] = (unsigned __int64)off_1C54888;
  result[1] = _mm_shuffle_ps(v129, v130, 68);
  result[2].m128_u64[0] = v131;
  result->m128_u64[1] = *a2;
  return result;
}

