__int64 __fastcall sub_25DAA0(
        __int32 a1,
        __int64 *a2,
        __int64 *a3,
        char *a4,
        const char *a5,
        const char *a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        char *a15,
        __int64 *a16,
        __int64 a17,
        __int64 *a18,
        _QWORD *a19)
{
  const char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r14
  int *v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  size_t v33; // r9
  __int64 v34; // r8
  size_t v35; // r10
  _BYTE *v36; // rsi
  __int64 v37; // r8
  _BYTE *v38; // rsi
  __int64 v39; // r9
  __int64 v40; // rdx
  char v41; // al
  __int64 v42; // rax
  __m128 si128; // xmm0
  __int64 v44; // rsi
  __int64 v45; // rax
  const void *v46; // r15
  size_t v47; // rax
  __int64 v48; // r8
  size_t v49; // r9
  size_t v50; // r10
  size_t v51; // rdx
  const char *v52; // rsi
  int v53; // r9d
  int v54; // eax
  double v55; // xmm4_8
  double v56; // xmm5_8
  unsigned int v57; // ebx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  const char *v62; // r9
  const char *v63; // r8
  const char *v64; // rsi
  double v65; // xmm0_8
  __int64 v67; // r15
  size_t v68; // r8
  __int64 v69; // r15
  size_t v70; // r8
  const char *v71; // rsi
  const char *v72; // rsi
  __int64 v73; // r15
  size_t v74; // r8
  unsigned __int64 v75; // r15
  size_t v76; // r8
  char v77; // r14
  unsigned __int64 v78; // r15
  const char *v79; // rdx
  const char *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // r15
  __int64 i; // r14
  __int64 *v84; // rax
  __int64 v85; // rdi
  const char *v86; // r13
  char *v87; // r15
  size_t v88; // r11
  __int64 v89; // rdi
  __int64 v90; // r8
  __int64 v91; // rsi
  size_t v92; // rdx
  char *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rsi
  char *v96; // r9
  char *v97; // r14
  __int64 v98; // rax
  __int64 v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // rax
  size_t v102; // r9
  __int64 v103; // rax
  size_t v104; // r8
  const char *v105; // r13
  void *v106; // rdi
  const char *v107; // r13
  void *v108; // rdi
  const char *v109; // r13
  void *v110; // rdi
  void *v111; // r13
  void *v112; // rdi
  void *v113; // r13
  void *v114; // rdi
  __int64 v115; // rax
  const char *v116; // [rsp-10h] [rbp-310h]
  size_t v117; // [rsp+0h] [rbp-300h]
  size_t v118; // [rsp+0h] [rbp-300h]
  char v119; // [rsp+8h] [rbp-2F8h]
  __int64 v120; // [rsp+10h] [rbp-2F0h]
  __int64 v121; // [rsp+10h] [rbp-2F0h]
  size_t v122; // [rsp+10h] [rbp-2F0h]
  __int64 v123; // [rsp+10h] [rbp-2F0h]
  __int64 v124; // [rsp+18h] [rbp-2E8h]
  size_t v125; // [rsp+18h] [rbp-2E8h]
  __int64 v126; // [rsp+18h] [rbp-2E8h]
  size_t v127; // [rsp+18h] [rbp-2E8h]
  size_t v128; // [rsp+18h] [rbp-2E8h]
  size_t v129; // [rsp+18h] [rbp-2E8h]
  size_t v131; // [rsp+20h] [rbp-2E0h]
  size_t v132; // [rsp+20h] [rbp-2E0h]
  size_t v133; // [rsp+20h] [rbp-2E0h]
  size_t v134; // [rsp+20h] [rbp-2E0h]
  __int64 v135; // [rsp+28h] [rbp-2D8h]
  __int64 v136; // [rsp+28h] [rbp-2D8h]
  unsigned __int64 v137; // [rsp+28h] [rbp-2D8h]
  size_t v138; // [rsp+28h] [rbp-2D8h]
  size_t v139; // [rsp+30h] [rbp-2D0h]
  size_t v143; // [rsp+58h] [rbp-2A8h]
  void *src; // [rsp+70h] [rbp-290h] BYREF
  __int128 v146; // [rsp+78h] [rbp-288h]
  __int64 v147; // [rsp+90h] [rbp-270h] BYREF
  __int128 v148; // [rsp+98h] [rbp-268h]
  __int64 v149; // [rsp+B0h] [rbp-250h] BYREF
  __int128 v150; // [rsp+B8h] [rbp-248h]
  __int64 v151; // [rsp+D0h] [rbp-230h] BYREF
  __int128 v152; // [rsp+D8h] [rbp-228h]
  const char *v153; // [rsp+1D8h] [rbp-128h]
  __int64 v154; // [rsp+1E0h] [rbp-120h]
  const char *v155; // [rsp+1F0h] [rbp-110h]
  __int64 v156; // [rsp+1F8h] [rbp-108h]
  const char *v157; // [rsp+208h] [rbp-F8h]
  __int64 v158; // [rsp+210h] [rbp-F0h]
  void *v159; // [rsp+220h] [rbp-E0h]
  unsigned __int64 v160; // [rsp+228h] [rbp-D8h]
  void *v161; // [rsp+238h] [rbp-C8h]
  unsigned __int64 v162; // [rsp+240h] [rbp-C0h]
  __int64 v163; // [rsp+250h] [rbp-B0h]
  void *v164; // [rsp+258h] [rbp-A8h]
  unsigned __int64 v165; // [rsp+260h] [rbp-A0h]
  void *v166; // [rsp+270h] [rbp-90h]
  unsigned __int64 v167; // [rsp+278h] [rbp-88h]
  char v168; // [rsp+288h] [rbp-78h]
  char v169; // [rsp+289h] [rbp-77h]
  void *v170; // [rsp+290h] [rbp-70h]
  unsigned __int64 v171; // [rsp+298h] [rbp-68h]
  char v172; // [rsp+2A8h] [rbp-58h]
  unsigned __int64 v173; // [rsp+2C8h] [rbp-38h]

  v173 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr(40571, 0, a3, a4, a7);
LABEL_171:
    BUG();
  }
  if ( !a3 )
  {
LABEL_169:
    if ( !under_debugger )
      interr(40572, a2, a3, a4, a7);
    goto LABEL_171;
  }
  if ( !a16 )
  {
    if ( under_debugger )
      goto LABEL_171;
    interr(40573, a2, a3, a4, a7);
    goto LABEL_169;
  }
  if ( !(unsigned __int8)sub_256790(a2, "Host") )
    reg_str_get(a2, "DefaultRemoteHost64", 0);
  if ( !(unsigned __int8)sub_256790(a3, "Password") )
    reg_str_get(a3, "DefaultRemotePass64", 0);
  sub_256BC0((__int64)a4, (const char *)&stru_1000);
  sub_256C80(a15, (const char *)&stru_1000);
  v20 = "Parameters";
  sub_256790(a16, "Parameters");
  sub_2294E0(a17);
  if ( a5 )
  {
    v152 = 0;
    v151 = 0;
    v21 = qvector_reserve(&v151, 0, 10, 1);
    v151 = v21;
    *(_QWORD *)&v152 = 10;
    *(_QWORD *)v21 = 0x6C69467475706E49LL;
    *(_BYTE *)(v21 + 8) = 101;
    v22 = v151;
    *(_BYTE *)(v151 + 9) = 0;
    v23 = (int *)sub_24D6C0((__int64)&qword_8CC080, (__int64)&v151);
    if ( v22 )
    {
      *(_QWORD *)&v152 = 0;
      qfree(v22, (const char *)&v151);
    }
    if ( v23 == &dword_8CC088 )
    {
      v20 = a6;
      if ( dbg_get_input_path(a5, a6) < 0 )
        *a5 = 0;
    }
    else
    {
      v20 = &s1;
      if ( *((_QWORD *)v23 + 8) )
        v20 = *((const char **)v23 + 7);
      qstrncpy(a5, v20, a6);
    }
  }
  v24 = qword_8CC070;
  if ( !qword_8CC070 )
  {
    netnode_check(&v151, "$ debugger application", 0, 0);
    v20 = (_BYTE *)(&dword_0 + 1);
    v24 = netnode_altval(v151, 1, 65);
    if ( v24 )
    {
      qword_8CC070 = v24;
    }
    else
    {
      v20 = nullptr;
      v24 = (int)reg_int_op("DefaultRemotePort64", 0, 23946, 0);
    }
  }
  *a18 = v24;
  v25 = dbg;
  if ( (*(_BYTE *)(dbg + 32) & 1) == 0 )
  {
    v99 = *a2;
    if ( *a2 )
    {
      a2[1] = 0;
      qfree(v99, v20);
      *a2 = 0;
      a2[2] = 0;
    }
    v100 = *a3;
    if ( *a3 )
    {
      a3[1] = 0;
      qfree(v100, v20);
      *a3 = 0;
      a3[2] = 0;
    }
    v25 = dbg;
  }
  if ( v25 && (unsigned int)sub_20CEA0(v25, 44, 0, " ", 0, 0, 0) )
    qword_8CC0E0 = dbg;
  v26 = *(_QWORD *)(a17 + 8);
  src = nullptr;
  v146 = 0;
  if ( v26 )
  {
    v27 = *(_QWORD *)a17;
    v28 = v26 - 1;
    v29 = *(_QWORD *)a17 + 24 * v26;
    if ( *(_QWORD *)a17 == v29 )
    {
      if ( v26 == 1 )
        goto LABEL_41;
    }
    else
    {
      v30 = *(_QWORD *)a17;
      do
      {
        v31 = *(_QWORD *)(v30 + 8);
        if ( v31 )
          v28 = v28 + v31 - 1;
        v30 += 24;
      }
      while ( v29 != v30 );
      if ( !v28 )
      {
        do
        {
LABEL_37:
          v37 = v146;
          if ( (unsigned __int64)v146 > 1 )
          {
            v38 = src;
            v39 = v146 - 1;
            v40 = v146 + 1;
            if ( *((_QWORD *)&v146 + 1) < (unsigned __int64)(v146 + 1) )
            {
              v120 = v146 - 1;
              v124 = v146;
              v135 = v146 + 1;
              src = (void *)qvector_reserve(&src, src, v40, 1);
              v39 = v120;
              v38 = src;
              v37 = v124;
              v40 = v135;
            }
            *(_QWORD *)&v146 = v40;
            v38[v37] = 0;
            *((_BYTE *)src + v39) = 59;
          }
          v32 = *(_QWORD *)(v27 + 8);
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v32 != 1 )
            {
              v34 = v146;
              v35 = v32 - 1;
              if ( (_QWORD)v146 )
              {
                v34 = v146 - 1;
                v35 = v33 + v146 - 1;
                v32 += v146 - 1;
              }
              v36 = src;
              if ( *((_QWORD *)&v146 + 1) < v32 )
              {
                v117 = v35;
                v121 = v34;
                v125 = v33;
                v137 = v32;
                src = (void *)qvector_reserve(&src, src, v32, 1);
                v35 = v117;
                v36 = src;
                v34 = v121;
                v33 = v125;
                v32 = v137;
              }
              *(_QWORD *)&v146 = v32;
              v36[v35] = 0;
              memcpy((char *)src + v34, *(const void **)v27, v33);
            }
          }
          v27 += 24;
        }
        while ( v29 != v27 );
        goto LABEL_41;
      }
    }
    src = (void *)qvector_reserve(&src, 0, v28, 1);
    v27 = *(_QWORD *)a17;
    v29 = *(_QWORD *)a17 + 24LL * *(_QWORD *)(a17 + 8);
    if ( *(_QWORD *)a17 == v29 )
      goto LABEL_41;
    goto LABEL_37;
  }
LABEL_41:
  v41 = *(_BYTE *)(a17 + 24);
  v147 = 0;
  v119 = v41;
  v149 = 0;
  v148 = 0;
  v150 = 0;
  v42 = qvector_reserve(&v149, 0, 26, 1);
  v149 = v42;
  *(_QWORD *)&v150 = 26;
  *(__m128i *)v42 = _mm_load_si128((const __m128i *)&xmmword_5DCA90);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DCAA0);
  v44 = v149;
  *(__m128 *)(v42 + 9) = si128;
  v45 = dbg;
  *(_BYTE *)(v44 + 25) = 0;
  v46 = *(const void **)(v45 + 8);
  if ( v46 )
  {
    v136 = v150;
    v47 = strlen(*(const char **)(v45 + 8));
    v48 = v136;
    v49 = v47;
    v50 = v47;
    if ( v136 )
    {
      v48 = v136 - 1;
      v50 = v47 + v136 - 1;
    }
    v51 = v50 + 1;
    if ( *((_QWORD *)&v150 + 1) < v50 + 1 )
    {
      v118 = v47;
      v122 = v50;
      v126 = v48;
      v138 = v50 + 1;
      v149 = qvector_reserve(&v149, v44, v51, 1);
      v49 = v118;
      v44 = v149;
      v50 = v122;
      v48 = v126;
      v51 = v138;
    }
    *(_QWORD *)&v150 = v51;
    *(_BYTE *)(v44 + v50) = 0;
    memmove((void *)(v48 + v149), v46, v49);
    v46 = *(const void **)(dbg + 8);
  }
  v52 = &s1;
  if ( (_QWORD)v150 )
    v52 = (const char *)v149;
  sub_245AC0(
    (__int64)&v151,
    v52,
    (const char *)v46,
    a1,
    (const void **)a2,
    (__int64)a3,
    a4,
    (size_t)a5,
    a15,
    (__int64)a16,
    (__int64)&src,
    *a18,
    *(unsigned __int8 *)(a17 + 24),
    (__int64)a19);
  if ( !v172 )
    goto LABEL_70;
  v52 = nullptr;
  v54 = callui(203, 0, (unsigned int)&v151, (unsigned int)&v147, (unsigned int)&callui, v53);
  switch ( v54 )
  {
    case 0:
LABEL_56:
      v57 = 0;
      goto LABEL_71;
    case 1:
      v67 = v162;
      if ( v162 && (v68 = v162 - 1, v162 != 1) )
      {
        v113 = v161;
        v114 = (void *)*a2;
        if ( a2[2] < v162 )
        {
          v128 = v162 - 1;
          v115 = qvector_reserve(a2, *a2, v162, 1);
          *a2 = v115;
          v68 = v128;
          v114 = (void *)v115;
        }
        a2[1] = v67;
        memmove(v114, v113, v68);
        *(_BYTE *)(*a2 + v67 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
      v69 = v165;
      if ( v165 && (v70 = v165 - 1, v165 != 1) )
      {
        v111 = v164;
        v112 = (void *)*a3;
        if ( a3[2] < v165 )
        {
          v129 = v165 - 1;
          v112 = (void *)qvector_reserve(a3, *a3, v165, 1);
          v70 = v129;
          *a3 = (__int64)v112;
        }
        a3[1] = v69;
        memmove(v112, v111, v70);
        *(_BYTE *)(*a3 + v69 - 1) = 0;
      }
      else
      {
        a3[1] = 0;
      }
      v71 = &s1;
      if ( v154 )
        v71 = v153;
      qstrncpy(a4, v71, 4096);
      if ( a5 )
      {
        v72 = &s1;
        if ( v156 )
          v72 = v155;
        qstrncpy(a5, v72, a6);
      }
      v52 = &s1;
      if ( v158 )
        v52 = v157;
      qstrncpy(a15, v52, 4096);
      v73 = v160;
      if ( v160 && (v74 = v160 - 1, v160 != 1) )
      {
        v109 = (const char *)v159;
        v110 = (void *)*a16;
        if ( a16[2] < v160 )
        {
          v133 = v160 - 1;
          v110 = (void *)qvector_reserve(a16, *a16, v160, 1);
          v74 = v133;
          *a16 = (__int64)v110;
        }
        v52 = v109;
        a16[1] = v73;
        memmove(v110, v109, v74);
        *(_BYTE *)(*a16 + v73 - 1) = 0;
      }
      else
      {
        a16[1] = 0;
      }
      v75 = v167;
      if ( v167 && (v76 = v167 - 1, v167 != 1) )
      {
        v107 = (const char *)v166;
        v108 = src;
        if ( *((_QWORD *)&v146 + 1) < v167 )
        {
          v132 = v167 - 1;
          src = (void *)qvector_reserve(&src, src, v167, 1);
          v76 = v132;
          v108 = src;
        }
        v52 = v107;
        *(_QWORD *)&v146 = v75;
        memmove(v108, v107, v76);
        *((char *)src + v75 - 1) = 0;
      }
      else
      {
        *(_QWORD *)&v146 = 0;
      }
      v77 = v168;
      *a18 = v163;
      v119 = v169;
      if ( a19 )
      {
        v78 = v171;
        if ( !v171 || (v104 = v171 - 1, v171 == 1) )
        {
          a19[1] = 0;
        }
        else
        {
          v105 = (const char *)v170;
          v106 = (void *)*a19;
          if ( a19[2] < v171 )
          {
            v134 = v171 - 1;
            v106 = (void *)qvector_reserve(a19, *a19, v171, 1);
            v104 = v134;
            *a19 = v106;
          }
          v52 = v105;
          a19[1] = v78;
          memmove(v106, v105, v104);
          *(_BYTE *)(*a19 + v78 - 1) = 0;
        }
      }
      if ( v77 )
      {
        if ( (a1 & 2) != 0 )
        {
          v79 = &s1;
          if ( a2[1] )
            v79 = (const char *)*a2;
          reg_str_set("DefaultRemoteHost64", 0, v79);
        }
        if ( (a1 & 4) != 0 )
        {
          v80 = &s1;
          if ( a3[1] )
            v80 = (const char *)*a3;
          reg_str_set("DefaultRemotePass64", 0, v80);
        }
        v52 = (_BYTE *)(&dword_0 + 1);
        reg_int_op("DefaultRemotePort64", 1, *(unsigned int *)a18, 0);
      }
      break;
    case -1:
      if ( (unsigned __int64)v148 > 1 && a19 )
      {
        v52 = (const char *)&v147;
        sub_229AB0((__int64)a19, (__int64)&v147);
      }
      goto LABEL_56;
  }
  if ( (a1 & 0x40) != 0 && a5 )
    sub_25D800(a5);
  v81 = *(_QWORD *)a17;
  if ( *(_QWORD *)a17 )
  {
    v82 = *(_QWORD *)(a17 + 8);
    if ( v82 )
    {
      for ( i = 0; i != v82; ++i )
      {
        v84 = (__int64 *)(v81 + 24 * i);
        v85 = *v84;
        if ( *v84 )
        {
          v84[1] = 0;
          qfree(v85, v52);
          v81 = *(_QWORD *)a17;
        }
      }
    }
    *(_QWORD *)(a17 + 8) = 0;
    *(double *)si128.m128_u64 = qfree(v81, v52);
    *(_QWORD *)a17 = 0;
    *(_QWORD *)(a17 + 16) = 0;
  }
  v58 = v146;
  if ( (_QWORD)v146 )
  {
    v86 = (const char *)src;
    v87 = (char *)src + v146 - 1;
    if ( src >= v87 )
      goto LABEL_59;
    do
    {
      v93 = strchr(v86, 59);
      v94 = *(_QWORD *)(a17 + 8);
      v95 = *(_QWORD *)a17;
      v96 = v93;
      v97 = v93;
      if ( !v93 )
        v96 = v87;
      v102 = v96 - v86;
      if ( *(_QWORD *)(a17 + 16) < (unsigned __int64)(v94 + 1) )
      {
        v143 = v102;
        v98 = qvector_reserve(a17, v95, v94 + 1, 24);
        *(_QWORD *)a17 = v98;
        v94 = *(_QWORD *)(a17 + 8);
        v95 = v98;
        v102 = v143;
      }
      a8 = 0;
      v88 = v102;
      v89 = v95 + 24 * v94;
      *(_OWORD *)(v89 + 8) = 0;
      *(_QWORD *)v89 = 0;
      ++*(_QWORD *)(a17 + 8);
      v90 = *(_QWORD *)(v89 + 8);
      if ( v90 )
      {
        --v90;
        v88 = v102 + v90;
      }
      v91 = *(_QWORD *)v89;
      v92 = v88 + 1;
      if ( *(_QWORD *)(v89 + 16) < v88 + 1 )
      {
        v123 = v90;
        v127 = v102;
        v131 = v88;
        v139 = v88 + 1;
        v101 = qvector_reserve(v89, v91, v92, 1);
        v90 = v123;
        v91 = v101;
        v102 = v127;
        v88 = v131;
        *(_QWORD *)v89 = v101;
        v92 = v139;
      }
      *(_QWORD *)(v89 + 8) = v92;
      *(_BYTE *)(v91 + v88) = 0;
      memmove((void *)(*(_QWORD *)v89 + v90), v86, v102);
      if ( !v97 )
        break;
      v86 = v97 + 1;
    }
    while ( v97 + 1 < v87 );
    v58 = v146;
    if ( (_QWORD)v146 )
    {
LABEL_59:
      if ( v58 != 1 && *((char *)src + v58 - 2) == 59 )
      {
        v59 = *(_QWORD *)(a17 + 8);
        v60 = *(_QWORD *)a17;
        if ( *(_QWORD *)(a17 + 16) < (unsigned __int64)(v59 + 1) )
        {
          v103 = qvector_reserve(a17, v60, v59 + 1, 24);
          *(_QWORD *)a17 = v103;
          v59 = *(_QWORD *)(a17 + 8);
          v60 = v103;
        }
        si128 = 0;
        v61 = v60 + 24 * v59;
        *(_QWORD *)v61 = 0;
        *(_OWORD *)(v61 + 8) = 0;
        ++*(_QWORD *)(a17 + 8);
      }
    }
  }
  if ( (a1 & 0x200) != 0 )
    *(_BYTE *)(a17 + 24) = v119;
  v62 = &s1;
  if ( a3[1] )
  {
    v62 = (const char *)*a3;
    v63 = &s1;
    if ( !a2[1] )
      goto LABEL_67;
    goto LABEL_142;
  }
  v63 = &s1;
  if ( a2[1] )
LABEL_142:
    v63 = (const char *)*a2;
LABEL_67:
  v64 = &s1;
  if ( a16[1] )
    v64 = (const char *)*a16;
  sub_258BD0(a4, v64, (__int64 *)a17, a15, v63, v62, si128, a8, a9, a10, v55, v56, a13, a14, *a18);
  v52 = v116;
LABEL_70:
  v57 = 1;
LABEL_71:
  v65 = setup_process_dialog_t__::vfunc_0(&v151, v52);
  if ( v149 )
  {
    *(_QWORD *)&v150 = 0;
    v65 = qfree(v149, v52, v65);
  }
  if ( v147 )
  {
    *(_QWORD *)&v148 = 0;
    v65 = qfree(v147, v52, v65);
  }
  if ( src )
  {
    *(_QWORD *)&v146 = 0;
    qfree(src, v52, v65);
  }
  return v57;
}
