__int64 __fastcall sub_52B980(
        __int64 *a1,
        char *a2,
        __int64 a3,
        const char **a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __m128 v14; // xmm0
  size_t v16; // rax
  __int64 v17; // r13
  size_t v18; // rbp
  const char *v19; // r15
  const char *v20; // r14
  __int64 v21; // rbp
  __int64 v22; // r12
  const char *v23; // rdi
  const char *v24; // rcx
  __m128 v25; // xmm0
  const char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r12
  char v30; // r14
  __int64 v31; // rbp
  __int64 v32; // rdi
  const char *v33; // rdx
  __int64 v34; // rax
  const char *v35; // r13
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r13
  const char *v44; // r15
  __int64 i; // r12
  __int64 v46; // r14
  size_t v47; // rax
  size_t v48; // r10
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rax
  void *v52; // rdi
  size_t v53; // rdx
  void *v54; // rsi
  __int64 v55; // rax
  __int64 v57; // r13
  __int64 v58; // rbp
  __int64 v59; // rdx
  __int64 *v60; // rax
  __int64 v61; // rdi
  size_t v62; // rax
  __int64 v63; // r13
  size_t v64; // rbp
  const char *v65; // rsi
  const char *v66; // rdx
  const char *v67; // rax
  const char *v68; // rdi
  void *v69; // rbp
  __m128i v70; // xmm0
  __m128 v71; // xmm0
  char *v72; // rax
  void *v73; // rdi
  void *v74; // rdx
  char *v75; // rax
  __int64 v76; // r14
  __int64 v77; // r13
  unsigned __int64 v78; // r15
  const char *v79; // rbx
  char *v80; // rax
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __m128 v84; // xmm4
  __m128 v85; // xmm5
  unsigned __int64 v86; // rax
  const char *v87; // rsi
  __int64 v88; // rax
  const char *v89; // r13
  char *v90; // rax
  _BYTE *v91; // r14
  char *v92; // rax
  size_t v93; // rax
  size_t v94; // r13
  const char *v95; // rsi
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r15
  __int64 v99; // r13
  __int64 *v100; // rax
  __int64 v101; // rdi
  char *v102; // rdx
  __int64 v103; // r15
  __int64 v104; // r13
  char *v105; // rax
  __int64 v106; // rdi
  void *v107; // rdi
  __int64 v108; // rdx
  const char **v109; // r15
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rbp
  __int64 v113; // rbx
  __int64 *v114; // rax
  __int64 v115; // rdi
  char *v116; // rdx
  __int64 v117; // rbp
  __int64 v118; // rbx
  char *v119; // rax
  __int64 v120; // rdi
  const char **v121; // r15
  __int64 v122; // rax
  __int64 *v123; // [rsp+0h] [rbp-4108h]
  __m128i v124; // [rsp+8h] [rbp-4100h] BYREF
  __int64 v125; // [rsp+18h] [rbp-40F0h]
  _BYTE *v126; // [rsp+20h] [rbp-40E8h]
  __int64 *v127; // [rsp+28h] [rbp-40E0h]
  size_t v128; // [rsp+30h] [rbp-40D8h]
  const char **v129; // [rsp+38h] [rbp-40D0h]
  char *s; // [rsp+40h] [rbp-40C8h]
  int v131; // [rsp+48h] [rbp-40C0h]
  char v132; // [rsp+4Eh] [rbp-40BAh]
  unsigned __int8 v133; // [rsp+4Fh] [rbp-40B9h]
  size_t v134; // [rsp+50h] [rbp-40B8h]
  __int64 *v135; // [rsp+58h] [rbp-40B0h]
  char v136[8]; // [rsp+68h] [rbp-40A0h] BYREF
  __int64 v137; // [rsp+70h] [rbp-4098h] BYREF
  __int128 v138; // [rsp+78h] [rbp-4090h]
  char *v139; // [rsp+90h] [rbp-4078h] BYREF
  __m128i v140; // [rsp+98h] [rbp-4070h] BYREF
  __int64 v141; // [rsp+A8h] [rbp-4060h]
  __int128 v142; // [rsp+B0h] [rbp-4058h]
  _BYTE v143[4096]; // [rsp+C0h] [rbp-4048h] BYREF
  char v144[4096]; // [rsp+10C0h] [rbp-3048h] BYREF
  _BYTE v145[4096]; // [rsp+20C0h] [rbp-2048h] BYREF
  _BYTE v146[4104]; // [rsp+30C0h] [rbp-1048h] BYREF
  unsigned __int64 v147; // [rsp+40C8h] [rbp-40h]

  v14 = 0;
  s = a2;
  v131 = a3;
  v129 = a4;
  v123 = (__int64 *)a5;
  v133 = a3;
  v147 = __readfsqword(0x28u);
  v140 = 0;
  v139 = nullptr;
  if ( a2 )
  {
    v16 = strlen(s);
    v17 = v16 + 1;
    v18 = v16;
    a2 = s;
    v139 = (char *)qvector_reserve(&v139, 0, v16 + 1, 1);
    v140.m128i_i64[0] = v17;
    memmove(v139, s, v18);
    v139[v18] = 0;
    v19 = v139;
    v20 = *v129;
    v21 = (__int64)&(*v129)[24 * (_QWORD)v129[1]];
    if ( *v129 == (const char *)v21 )
    {
      if ( v139 )
      {
        v140.m128i_i64[0] = 0;
        qfree(v139, a2);
      }
      goto LABEL_14;
    }
  }
  else
  {
    v20 = *a4;
    v19 = nullptr;
    v21 = (__int64)&(*a4)[24 * (_QWORD)a4[1]];
    if ( (const char *)v21 == *a4 )
      goto LABEL_14;
  }
  v22 = v140.m128i_i64[0];
  while ( *((_QWORD *)v20 + 1) )
  {
    a2 = *(char **)v20;
    v23 = &s1;
    if ( v22 )
      goto LABEL_10;
LABEL_5:
    if ( !strcmp(v23, a2) )
      goto LABEL_11;
    v20 += 24;
    if ( (const char *)v21 == v20 )
    {
      if ( !v19 )
        goto LABEL_14;
      goto LABEL_12;
    }
  }
  if ( v22 )
  {
    a2 = (char *)&s1;
LABEL_10:
    v23 = v19;
    goto LABEL_5;
  }
LABEL_11:
  if ( !v19 )
    goto LABEL_13;
LABEL_12:
  v140.m128i_i64[0] = 0;
  *(double *)v14.m128_u64 = qfree(v19, a2);
LABEL_13:
  if ( (const char *)v21 != v20 )
  {
    if ( (debug & 0x1000000) != 0 )
      sub_16B860(
        (int)"Themes: Theme \"%s\" already imported. Ignoring.\n",
        (__int64)s,
        a3,
        (__int64)a4,
        a5,
        a6,
        v14,
        a8,
        a9,
        a10,
        a11,
        a12,
        a13,
        a14,
        (char)v123);
    return 1;
  }
LABEL_14:
  v24 = "theme.css";
  if ( (_BYTE)v131 )
    v24 = "user.css";
  v126 = v143;
  qmakepath(v143, 4096, s, v24, 0);
  v25 = 0;
  v137 = 0;
  v138 = 0;
  v135 = &v137;
  v26 = (const char *)&v137;
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*QT::QCoreApplication::self + 240LL))(QT::QCoreApplication::self, &v137);
  v29 = v123[1];
  if ( v29 > 1 )
  {
    if ( !under_debugger )
      interr(40664, &v137, v27, v28, 0.0);
    BUG();
  }
  v30 = 0;
  v31 = 0;
  v125 = v138;
  if ( !(_QWORD)v138 )
  {
    if ( v137 )
      qfree(v137, (const char *)&v137);
    v30 = 0;
    goto LABEL_60;
  }
  while ( 2 )
  {
    v32 = v137;
    if ( v29 > 1 )
    {
      if ( v137 )
      {
        v57 = v138;
        if ( (_QWORD)v138 )
        {
LABEL_53:
          v58 = 0;
          v59 = v32;
          do
          {
            v60 = (__int64 *)(v59 + 24 * v58);
            v61 = *v60;
            if ( *v60 )
            {
              v60[1] = 0;
              qfree(v61, v26);
              v59 = v137;
            }
            ++v58;
          }
          while ( v58 != v57 );
          v32 = v59;
LABEL_58:
          *(_QWORD *)&v138 = 0;
          qfree(v32, v26);
          goto LABEL_59;
        }
        qfree(v137, v26);
        return 0;
      }
      return 0;
    }
    v33 = &s1;
    v34 = v137 + 24 * v31;
    if ( *(_QWORD *)(v34 + 8) )
      v33 = *(const char **)v34;
    v26 = (_BYTE *)&stru_1000;
    v35 = (const char *)qmakepath(v144, 4096, v33, v126, 0);
    v36 = qfileexist(v35);
    if ( (debug & 0x1000000) != 0 )
    {
      if ( v36 )
      {
        sub_16B860(
          (int)"Themes: Trying file \"%s\" ... %s.\n",
          (__int64)v35,
          (__int64)"found",
          v37,
          v38,
          v39,
          v25,
          a8,
          a9,
          a10,
          v40,
          v41,
          a13,
          a14,
          (char)v123);
LABEL_27:
        v25 = 0;
        v26 = v35;
        v140 = 0;
        v139 = nullptr;
        v132 = sub_52B550((__int64 *)&v139, v35, v123);
        if ( v132 )
        {
          v127 = a1 + 3;
          v42 = a1[4] + 50;
          if ( a1[5] < v42 )
            a1[3] = qvector_reserve(v127, a1[3], v42, 40);
          qdirname(v145, 4096, v35);
          v124.m128i_i64[0] = (__int64)v146;
          qstrncpy(v146, v145, 4096);
          strrpl(v146, 92, 47);
          v43 = sub_52AE50(a1, (__int64)v35);
          v26 = "\n";
          v124.m128i_i64[1] = (__int64)v136;
          v44 = (const char *)qstrtok(v139, "\n", v136);
          for ( i = 0; v44; ++i )
          {
            v49 = a1[4];
            v50 = a1[3];
            if ( a1[5] < (unsigned __int64)(v49 + 1) )
            {
              v51 = qvector_reserve(v127, v50, v49 + 1, 40);
              a1[3] = v51;
              v49 = a1[4];
              v50 = v51;
            }
            v25 = 0;
            v46 = v50 + 40 * v49;
            *(_QWORD *)v46 = 0;
            *(_OWORD *)(v46 + 8) = 0;
            ++a1[4];
            *(_QWORD *)(v46 + 24) = v43;
            *(_QWORD *)(v46 + 32) = i;
            v47 = strlen(v44);
            v48 = v47;
            if ( v47 )
            {
              v52 = *(void **)v46;
              v53 = v47 + 1;
              if ( *(_QWORD *)(v46 + 16) < v47 + 1 )
              {
                v54 = *(void **)v46;
                v134 = v47;
                v128 = v47 + 1;
                v55 = qvector_reserve(v46, v54, v53, 1);
                v48 = v134;
                v53 = v128;
                *(_QWORD *)v46 = v55;
                v52 = (void *)v55;
              }
              *(_QWORD *)(v46 + 8) = v53;
              v128 = v48;
              memmove(v52, v44, v48);
              *(_BYTE *)(*(_QWORD *)v46 + v128) = 0;
            }
            else
            {
              *(_QWORD *)(v46 + 8) = 0;
            }
            sub_52AB70(v46, "$RELPATH", (const char *)v124.m128i_i64[0]);
            v26 = "\n";
            v44 = (const char *)qstrtok(0, "\n", v124.m128i_i64[1]);
          }
          v30 = v132;
        }
        if ( v139 )
        {
          v140.m128i_i64[0] = 0;
          *(double *)v25.m128_u64 = qfree(v139, v26);
        }
      }
      else
      {
        v26 = v35;
        sub_16B860(
          (int)"Themes: Trying file \"%s\" ... %s.\n",
          (__int64)v35,
          (__int64)"not found",
          v37,
          v38,
          v39,
          v25,
          a8,
          a9,
          a10,
          v40,
          v41,
          a13,
          a14,
          (char)v123);
      }
    }
    else if ( v36 )
    {
      goto LABEL_27;
    }
    ++v31;
    v29 = v123[1];
    if ( v31 != v125 )
      continue;
    break;
  }
  v32 = v137;
  if ( v137 )
  {
    v57 = v138;
    if ( !(_QWORD)v138 )
      goto LABEL_58;
    goto LABEL_53;
  }
LABEL_59:
  if ( v29 > 1 )
    return 0;
LABEL_60:
  if ( (_BYTE)v131 || v30 )
  {
    v139 = nullptr;
    v140 = 0;
    if ( s )
    {
      v62 = strlen(s);
      v63 = v62 + 1;
      v64 = v62;
      v139 = (char *)qvector_reserve(&v139, 0, v62 + 1, 1);
      v140.m128i_i64[0] = v63;
      memmove(v139, s, v64);
      v139[v64] = 0;
    }
    v65 = *v129;
    v66 = v129[2];
    v67 = v129[1];
    v68 = v67 + 1;
    if ( &v139 < (char **)*v129 || &v139 >= (char **)&v65[24 * (_QWORD)v66] )
    {
      if ( v66 < v68 )
      {
        v109 = v129;
        v110 = qvector_reserve(v129, v65, v67 + 1, 24);
        *v129 = (const char *)v110;
        v65 = (const char *)v110;
        v67 = v109[1];
      }
      v74 = v139;
      v71 = (__m128)_mm_loadu_si128(&v140);
      v75 = (char *)&v65[24 * (_QWORD)v67];
      *(__m128 *)(v75 + 8) = v71;
      *(_QWORD *)v75 = v74;
      ++v129[1];
    }
    else
    {
      a9 = 0;
      v69 = v139;
      v70 = _mm_loadl_epi64(&v140);
      v139 = nullptr;
      a8 = (__m128)_mm_loadl_epi64((const __m128i *)&v140.m128i_u64[1]);
      v140 = 0;
      if ( v66 < v68 )
      {
        v121 = v129;
        v124.m128i_i64[1] = a8.m128_u64[0];
        v124.m128i_i64[0] = v70.m128i_i64[0];
        v122 = qvector_reserve(v129, v65, v67 + 1, 24);
        *v129 = (const char *)v122;
        v65 = (const char *)v122;
        a8 = (__m128)_mm_loadl_epi64((const __m128i *)&v124.m128i_u64[1]);
        v67 = v121[1];
        v70 = _mm_loadl_epi64(&v124);
      }
      v71 = (__m128)_mm_unpacklo_epi64(v70, (__m128i)a8);
      v72 = (char *)&v65[24 * (_QWORD)v67];
      *(__m128 *)(v72 + 8) = v71;
      *(_QWORD *)v72 = v69;
      v73 = v139;
      ++v129[1];
      if ( v73 )
      {
        v140.m128i_i64[0] = 0;
        *(double *)v71.m128_u64 = qfree(v73, v65);
      }
    }
    while ( 1 )
    {
      v76 = a1[4];
      if ( !v76 )
        return 1;
      v124.m128i_i64[0] = (__int64)a1;
      v77 = a1[3];
      v78 = 0;
      while ( 1 )
      {
        if ( *(_QWORD *)(v77 + 8) )
        {
          v79 = *(const char **)v77;
          v80 = strstr(*(const char **)v77, "@importtheme");
          if ( v80 )
          {
            if ( v79 == v80 )
              break;
          }
        }
        ++v78;
        v77 += 40;
        if ( v76 == v78 )
          return 1;
      }
      a1 = (__int64 *)v124.m128i_i64[0];
      if ( (debug & 0x1000000) != 0 )
      {
        v86 = *(_QWORD *)(v77 + 24);
        v87 = nullptr;
        if ( v86 < *(_QWORD *)(v124.m128i_i64[0] + 8) )
        {
          v81 = 3 * v86;
          v87 = &s1;
          v88 = *(_QWORD *)v124.m128i_i64[0] + 24 * v86;
          if ( *(_QWORD *)(v88 + 8) )
            v87 = *(const char **)v88;
        }
        sub_16B860(
          (int)"Themes: Found @importtheme (%s:%zu)\n",
          (__int64)v87,
          *(_QWORD *)(v77 + 32),
          v81,
          v82,
          v83,
          v71,
          a8,
          a9,
          a10,
          v84,
          v85,
          a13,
          a14,
          (char)v123);
        if ( !*(_QWORD *)(v77 + 8) )
        {
          v89 = &s1;
LABEL_85:
          sub_169A50(v123, (__int64)"Malformed @importtheme: %s", v89);
          return 0;
        }
      }
      v89 = *(const char **)v77;
      v90 = strchr(v89, 34);
      if ( !v90 )
        goto LABEL_85;
      v91 = v90 + 1;
      v92 = strchr(v90 + 1, 34);
      if ( !v92 )
        goto LABEL_85;
      v137 = 0;
      v71 = 0;
      v93 = v92 - v91;
      v138 = 0;
      v94 = v93;
      if ( !v93 )
        break;
      v107 = nullptr;
      v108 = v93 + 1;
      if ( v93 != -1 )
      {
        v124.m128i_i64[0] = v93 + 1;
        v137 = qvector_reserve(v135, 0, v108, 1);
        v108 = v124.m128i_i64[0];
        v107 = (void *)v137;
      }
      *(_QWORD *)&v138 = v108;
      memmove(v107, v91, v94);
      v71 = 0;
      *(_BYTE *)(v137 + v94) = 0;
      v95 = (const char *)v137;
      v140 = 0;
      v139 = nullptr;
      v141 = 0;
      v142 = 0;
      if ( !(_QWORD)v138 )
        goto LABEL_94;
LABEL_95:
      if ( !(unsigned __int8)sub_52B980(&v139, v95, v133, v129, v123) )
      {
        v111 = v141;
        if ( v141 )
        {
          v112 = v142;
          if ( (_QWORD)v142 )
          {
            v113 = 0;
            do
            {
              v114 = (__int64 *)(v111 + 40 * v113);
              v115 = *v114;
              if ( *v114 )
              {
                v114[1] = 0;
                qfree(v115, v95);
                v111 = v141;
              }
              ++v113;
            }
            while ( v112 != v113 );
          }
          *(_QWORD *)&v142 = 0;
          qfree(v111, v95);
        }
        v116 = v139;
        if ( v139 )
        {
          v117 = v140.m128i_i64[0];
          if ( v140.m128i_i64[0] )
          {
            v118 = 0;
            do
            {
              v119 = &v116[24 * v118];
              v120 = *(_QWORD *)v119;
              if ( *(_QWORD *)v119 )
              {
                *((_QWORD *)v119 + 1) = 0;
                qfree(v120, v95);
                v116 = v139;
              }
              ++v118;
            }
            while ( v117 != v118 );
          }
          v140.m128i_i64[0] = 0;
          qfree(v116, v95);
        }
        if ( v137 )
        {
          *(_QWORD *)&v138 = 0;
          qfree(v137, v95);
          return 0;
        }
        return 0;
      }
      sub_52B100(a1, (const char *)&v139, v78, v96, *(double *)v71.m128_u64);
      v97 = v141;
      if ( v141 )
      {
        v98 = v142;
        if ( (_QWORD)v142 )
        {
          v99 = 0;
          do
          {
            v100 = (__int64 *)(v97 + 40 * v99);
            v101 = *v100;
            if ( *v100 )
            {
              v100[1] = 0;
              qfree(v101, (const char *)&v139);
              v97 = v141;
            }
            ++v99;
          }
          while ( v98 != v99 );
        }
        *(_QWORD *)&v142 = 0;
        *(double *)v71.m128_u64 = qfree(v97, (const char *)&v139);
      }
      v102 = v139;
      if ( v139 )
      {
        v103 = v140.m128i_i64[0];
        if ( v140.m128i_i64[0] )
        {
          v104 = 0;
          do
          {
            v105 = &v102[24 * v104];
            v106 = *(_QWORD *)v105;
            if ( *(_QWORD *)v105 )
            {
              *((_QWORD *)v105 + 1) = 0;
              *(double *)v71.m128_u64 = qfree(v106, (const char *)&v139, *(double *)v71.m128_u64);
              v102 = v139;
            }
            ++v104;
          }
          while ( v103 != v104 );
        }
        v140.m128i_i64[0] = 0;
        *(double *)v71.m128_u64 = qfree(v102, (const char *)&v139, *(double *)v71.m128_u64);
      }
      if ( v137 )
      {
        *(_QWORD *)&v138 = 0;
        *(double *)v71.m128_u64 = qfree(v137, (const char *)&v139, *(double *)v71.m128_u64);
      }
    }
    v139 = nullptr;
    v141 = 0;
    v140 = 0;
    v142 = 0;
LABEL_94:
    v95 = &s1;
    goto LABEL_95;
  }
  sub_169A50(v123, (__int64)"Theme \"%s\" not found", s);
  return 0;
}
