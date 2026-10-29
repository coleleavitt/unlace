__int64 __fastcall sub_6E2510(__int64 a1, __int64 a2, void **a3, int a4, double a5, __m128i si128, __m128 a7)
{
  __int64 v7; // rbp
  int v9; // eax
  __int64 *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r12
  char *v13; // r15
  char *v14; // rax
  size_t v15; // r13
  _QWORD *v16; // rdi
  void **v17; // rsi
  int v18; // r12d
  __m128 v19; // xmm0
  size_t v20; // rax
  size_t v21; // r12
  void *v22; // rdi
  size_t v23; // r13
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  FILE *v27; // r12
  __int64 v28; // rax
  __int64 v29; // r13
  void *v30; // rsi
  size_t v31; // rax
  size_t v32; // r13
  _QWORD *v33; // rsi
  unsigned __int64 v34; // rbx
  char *v35; // r12
  char *v36; // rax
  _QWORD *v37; // r13
  char *v38; // rdi
  __int64 v39; // r14
  __int64 i; // r12
  char *v41; // rbx
  void *v42; // rdi
  void *v43; // rdi
  __int64 v44; // r8
  unsigned int v45; // ebx
  __int64 v46; // r14
  int v47; // eax
  unsigned __int64 v48; // rbx
  size_t v49; // rbx
  const char *v50; // rsi
  unsigned int v51; // eax
  __int64 v52; // r15
  __m128i v53; // xmm0
  __m128i v54; // xmm5
  int v55; // eax
  void *v56; // r12
  size_t v57; // rbx
  __int64 v58; // rax
  unsigned __int64 v59; // rbx
  bool v60; // r10
  void *v61; // rcx
  void *v62; // rsi
  __m128i v63; // xmm6
  __m128i v64; // xmm7
  __int64 v65; // rax
  const void *v67; // rbp
  void *v68; // rax
  void *v69; // rax
  __int64 v70; // rax
  char *v71; // rbp
  bool v72; // r10
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rbx
  __int64 v77; // r13
  __int64 v78; // r12
  __int64 v79; // rbx
  __int64 v80; // rcx
  __m128i v81; // xmm0
  __int64 v82; // rcx
  __m128i v83; // xmm0
  void *v84; // rdi
  void *v85; // rdi
  __m128 *v87; // rax
  void *v88; // r13
  __int64 v89; // rax
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // rdi
  void **v92; // rax
  void *v93; // rdi
  char **p_haystack; // rdi
  int v95; // eax
  __int64 v96; // rdx
  char *v97; // rsi
  __int64 v98; // rbx
  __int64 v99; // r13
  unsigned __int64 v100; // r12
  char *v101; // rsi
  __int64 v102; // rcx
  __int64 *v103; // rcx
  __int64 v104; // rdx
  __m128i v105; // xmm0
  void **v106; // rax
  size_t v107; // r12
  char *v108; // rax
  const char *v109; // rax
  const char *v110; // r12
  size_t v111; // rax
  size_t v112; // r13
  int v113; // eax
  unsigned __int64 v114; // r14
  size_t v115; // r15
  char *v116; // r8
  void *v117; // rdi
  char *v118; // r14
  _DWORD *v119; // rax
  __int64 v120; // rax
  const char *v121; // rsi
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rdi
  void *v124; // r13
  char *v125; // rax
  void *v126; // rdi
  size_t v127; // r13
  void *v128; // r14
  __m128i v129; // xmm0
  __int64 v130; // rdx
  __int64 v131; // rsi
  __int64 v132; // rax
  __m128i v133; // xmm0
  char *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  void *v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  void *v143; // rdi
  size_t v144; // r14
  unsigned __int64 v145; // r14
  __int64 v146; // rax
  char *v147; // rsi
  __int64 v148; // rdx
  __int64 v149; // rcx
  const char *v150; // rax
  const char *v151; // r13
  size_t v152; // rax
  size_t v153; // r14
  char *v154; // rsi
  void *v155; // rdi
  size_t v156; // r15
  __m128i v157; // [rsp+0h] [rbp-188h] BYREF
  void *v158; // [rsp+18h] [rbp-170h]
  __m128i v159; // [rsp+20h] [rbp-168h] BYREF
  __m128i v160; // [rsp+30h] [rbp-158h] BYREF
  unsigned __int64 v161; // [rsp+40h] [rbp-148h]
  __int64 v162; // [rsp+48h] [rbp-140h]
  __int64 v163; // [rsp+50h] [rbp-138h]
  __int64 v164; // [rsp+58h] [rbp-130h]
  char v165; // [rsp+66h] [rbp-122h]
  bool v166; // [rsp+67h] [rbp-121h]
  void *v167; // [rsp+68h] [rbp-120h]
  char *s; // [rsp+70h] [rbp-118h] BYREF
  size_t v169; // [rsp+78h] [rbp-110h]
  unsigned __int64 v170; // [rsp+80h] [rbp-108h]
  char *haystack; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v172; // [rsp+98h] [rbp-F0h]
  void *ptr; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE dest[24]; // [rsp+B8h] [rbp-D0h] BYREF
  void *src; // [rsp+D0h] [rbp-B8h] BYREF
  size_t n[2]; // [rsp+D8h] [rbp-B0h]
  bool v177; // [rsp+E8h] [rbp-A0h]
  void *v178[2]; // [rsp+F0h] [rbp-98h] BYREF
  _QWORD v179[2]; // [rsp+100h] [rbp-88h] BYREF
  void *v180; // [rsp+110h] [rbp-78h] BYREF
  __int64 v181; // [rsp+120h] [rbp-68h] BYREF
  int v182; // [rsp+13Ch] [rbp-4Ch]
  int v183; // [rsp+140h] [rbp-48h]
  unsigned __int64 v184; // [rsp+148h] [rbp-40h]

  v7 = a1;
  v184 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = a2;
  v9 = a4 | 2;
  v10 = *(__int64 **)(a1 + 8);
  if ( (debug & 0x4000) == 0 )
    v9 = a4;
  *(_DWORD *)(a1 + 120) = v9;
  v11 = *v10;
  if ( *v10 >= 0 )
  {
    v12 = *(_QWORD *)(qword_2CA1698 + 1704);
    if ( (v11 & 0x400) == 0 )
    {
      v102 = *v10;
      if ( *(_BYTE *)(v12 + 120) )
        BYTE1(v102) = BYTE1(v11) | 4;
      else
        BYTE1(v102) = BYTE1(v11) & 0xFB;
      *v10 = v102;
    }
    if ( (v11 & 0x800) == 0 )
    {
      v103 = *(__int64 **)(a1 + 8);
      v104 = *v103;
      if ( *(_BYTE *)(v12 + 121) )
        BYTE1(v104) |= 8u;
      else
        BYTE1(v104) &= ~8u;
      *v103 = v104;
    }
    if ( (((unsigned __int8)*(_QWORD *)(v12 + 128) ^ (unsigned __int8)v11) & 0xF) != 0 )
      **(_QWORD **)(a1 + 8) = **(_QWORD **)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL | *(_QWORD *)(v12 + 128) & 0xFLL;
    if ( *(_QWORD *)(a1 + 80) || *(_QWORD *)(v12 + 80) <= 1u )
    {
      if ( *(_QWORD *)(a1 + 104) )
      {
LABEL_11:
        v10 = *(__int64 **)(a1 + 8);
        v11 = *v10;
        goto LABEL_12;
      }
    }
    else
    {
      parse_command_line(a1 + 72, 0, *(_QWORD *)(v12 + 72), 0);
      if ( *(_QWORD *)(a1 + 104) )
        goto LABEL_11;
    }
    if ( *(_QWORD *)(v12 + 104) > 1u )
      sub_4431C0((_QWORD *)(v12 + 96), (__int64 *)(a1 + 96), ";", 1);
    goto LABEL_11;
  }
LABEL_12:
  if ( (v11 & 0x800) != 0 )
  {
    BYTE1(v11) &= ~0x10u;
    *v10 = v11;
    v10 = *(__int64 **)(a1 + 8);
    v11 = *v10;
  }
  else if ( (*(_BYTE *)(a1 + 122) & 0x40) != 0 )
  {
    BYTE1(v11) |= 0x10u;
    *v10 = v11;
    v10 = *(__int64 **)(a1 + 8);
    v11 = *v10;
  }
  if ( (v11 & 0x400) != 0 )
  {
    BYTE1(v11) |= 2u;
    *v10 = v11;
  }
  sub_6D5700((const void **)&s, a1, "-target", 1);
  if ( v169 <= 1 )
  {
    p_haystack = (char **)&byte_5;
    haystack = nullptr;
    v172 = 0;
    v95 = getinf(5);
    v96 = *((_QWORD *)&v172 + 1);
    v97 = haystack;
    switch ( v95 )
    {
      case 18:
        if ( *((_QWORD *)&v172 + 1) <= 8u )
        {
          p_haystack = &haystack;
          haystack = (char *)qvector_reserve(&haystack, haystack, 9, 1);
          v97 = haystack;
        }
        *(_QWORD *)&v172 = 9;
        *(_QWORD *)v97 = 0x78756E696C2D6370LL;
        haystack[8] = 0;
        break;
      case 25:
        if ( *((_QWORD *)&v172 + 1) <= 0xCu )
        {
          p_haystack = &haystack;
          haystack = (char *)qvector_reserve(&haystack, haystack, 13, 1);
          v97 = haystack;
        }
        *(_QWORD *)&v172 = 13;
        qmemcpy(v97, "apple-darwin", 12);
        haystack[12] = 0;
        break;
      case 11:
        if ( *((_QWORD *)&v172 + 1) <= 8u )
        {
          p_haystack = &haystack;
          haystack = (char *)qvector_reserve(&haystack, haystack, 9, 1);
          v97 = haystack;
        }
        *(_QWORD *)&v172 = 9;
        *(_QWORD *)v97 = 0x32336E69772D6370LL;
        haystack[8] = 0;
        break;
      default:
        if ( *((_QWORD *)&v172 + 1) <= 7u )
        {
          p_haystack = &haystack;
          haystack = (char *)qvector_reserve(&haystack, haystack, 8, 1);
          v97 = haystack;
        }
        *(_QWORD *)&v172 = 8;
        *(_DWORD *)v97 = 1852534389;
        *(_DWORD *)(v97 + 3) = 1853321070;
        haystack[7] = 0;
        break;
    }
    ptr = nullptr;
    *(_OWORD *)dest = 0;
    v113 = *(_DWORD *)(get_ph(p_haystack, v97, v96) + 4);
    if ( v113 == 12 )
    {
      if ( (unsigned __int8)getinf_flag(3, 4) )
      {
        v114 = 7;
        v115 = 6;
        v116 = "mips64";
      }
      else
      {
        v114 = 5;
        v115 = 4;
        v116 = "mips";
      }
    }
    else if ( v113 == 13 )
    {
      if ( (unsigned __int8)getinf_flag(3, 4) )
      {
        v114 = 6;
        v115 = 5;
        v116 = "arm64";
      }
      else
      {
        v114 = 4;
        v115 = 3;
        v116 = (char *)"arm";
      }
    }
    else if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      v114 = 7;
      v115 = 6;
      v116 = "x86_64";
    }
    else
    {
      v114 = 5;
      v115 = 4;
      v116 = (char *)"i386";
    }
    v117 = ptr;
    if ( *(_QWORD *)&dest[8] < v114 )
    {
      v157.m128i_i64[0] = (__int64)v116;
      v139 = (void *)qvector_reserve(&ptr, ptr, v114, 1);
      v116 = (char *)v157.m128i_i64[0];
      ptr = v139;
      v117 = v139;
    }
    *(_QWORD *)dest = v114;
    memmove(v117, v116, v115);
    *((_BYTE *)ptr + v115) = 0;
    sub_357520((__int64 *)&s);
    if ( v169 )
    {
      v118 = s;
      if ( !strcmp(s, "arm-pc-linux") || !strcmp(v118, "arm-unknown") )
      {
        if ( v170 <= 0xD )
        {
          s = (char *)qvector_reserve(&s, v118, 14, 1);
          v118 = s;
        }
        v169 = 14;
        qmemcpy(v118, "arm-none-eabi", 13);
        s[13] = 0;
      }
    }
    if ( ptr )
    {
      *(_QWORD *)dest = 0;
      qfree(ptr);
    }
    if ( haystack )
    {
      *(_QWORD *)&v172 = 0;
      qfree(haystack);
    }
    *(_OWORD *)dest = 0;
    ptr = nullptr;
    v119 = (_DWORD *)qvector_reserve(&ptr, 0, 8, 1);
    *(_QWORD *)dest = 8;
    ptr = v119;
    *v119 = 1918989357;
    *(_DWORD *)((char *)v119 + 3) = 1952802674;
    *((_BYTE *)ptr + 7) = 0;
    v120 = *(_QWORD *)(v7 + 80);
    v121 = *(const char **)(v7 + 72);
    v122 = *(_QWORD *)(v7 + 88);
    v123 = v120 + 1;
    if ( &ptr < (void **)v121 || &ptr >= (void **)&v121[24 * v122] )
    {
      if ( v122 < v123 )
      {
        v138 = qvector_reserve(v7 + 72, v121, v120 + 1, 24);
        *(_QWORD *)(v7 + 72) = v138;
        v121 = (const char *)v138;
        v120 = *(_QWORD *)(v7 + 80);
      }
      v133 = _mm_loadu_si128((const __m128i *)dest);
      v134 = (char *)&v121[24 * v120];
      *(_QWORD *)v134 = ptr;
      *(__m128i *)(v134 + 8) = v133;
      ++*(_QWORD *)(v7 + 80);
    }
    else
    {
      v124 = ptr;
      si128 = _mm_loadu_si128((const __m128i *)dest);
      ptr = nullptr;
      *(_OWORD *)dest = 0;
      if ( v122 < v123 )
      {
        v157 = si128;
        v141 = qvector_reserve(v7 + 72, v121, v120 + 1, 24);
        si128 = _mm_load_si128(&v157);
        *(_QWORD *)(v7 + 72) = v141;
        v121 = (const char *)v141;
        v120 = *(_QWORD *)(v7 + 80);
      }
      v125 = (char *)&v121[24 * v120];
      *(_QWORD *)v125 = v124;
      *(__m128i *)(v125 + 8) = si128;
      v126 = ptr;
      ++*(_QWORD *)(v7 + 80);
      if ( v126 )
      {
        *(_QWORD *)dest = 0;
        qfree(v126);
      }
    }
    v127 = v169;
    v128 = nullptr;
    v129 = _mm_unpacklo_epi64((__m128i)v169, (__m128i)v169);
    if ( v169 )
    {
      v157 = v129;
      v128 = (void *)qalloc_or_throw(v169, v121);
      memcpy(v128, s, v127);
      v129 = _mm_load_si128(&v157);
    }
    v130 = *(_QWORD *)(v7 + 80);
    v131 = *(_QWORD *)(v7 + 72);
    if ( *(_QWORD *)(v7 + 88) < (unsigned __int64)(v130 + 1) )
    {
      v157 = v129;
      v136 = qvector_reserve(v7 + 72, v131, v130 + 1, 24);
      v130 = *(_QWORD *)(v7 + 80);
      v129 = _mm_load_si128(&v157);
      *(_QWORD *)(v7 + 72) = v136;
      v131 = v136;
    }
    v132 = v131 + 24 * v130;
    *(_QWORD *)v132 = v128;
    *(__m128i *)(v132 + 8) = v129;
    ++*(_QWORD *)(v7 + 80);
  }
  if ( !(unsigned __int8)sub_6DDBB0((_QWORD *)v7) )
  {
    v45 = 1;
    sub_6D7ED0(v7);
    goto LABEL_94;
  }
  if ( !v169 )
  {
    v178[0] = v179;
    if ( ::haystack )
    {
      ptr = nullptr;
      goto LABEL_24;
    }
LABEL_222:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  v13 = s;
  v178[0] = v179;
  if ( !s )
    goto LABEL_222;
  v14 = (char *)strlen(s);
  ptr = v14;
  v15 = (size_t)v14;
  if ( (unsigned __int64)v14 > 0xF )
  {
    v178[0] = (void *)std::string::_M_create();
    v16 = v178[0];
    v179[0] = ptr;
LABEL_23:
    memcpy(v16, v13, v15);
    goto LABEL_24;
  }
  if ( v14 == (_BYTE *)&dword_0 + 1 )
  {
    LOBYTE(v179[0]) = *v13;
  }
  else if ( v14 )
  {
    v16 = v179;
    goto LABEL_23;
  }
LABEL_24:
  v17 = v178;
  v178[1] = ptr;
  *((_BYTE *)v178[0] + (unsigned __int64)ptr) = 0;
  sub_2296190(&v180, v178);
  if ( v178[0] != v179 )
  {
    v17 = (void **)(v179[0] + 1LL);
    operator delete(v178[0], v179[0] + 1LL);
  }
  if ( v182 == 15 && (v183 == 27 || !v183) )
  {
    *(_OWORD *)dest = 0;
    ptr = nullptr;
    v87 = (__m128 *)qvector_reserve(&ptr, 0, 19, 1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384250);
    *(_QWORD *)dest = 19;
    ptr = v87;
    v87[1].m128_i16[0] = 31092;
    *v87 = (__m128)si128;
    v88 = ptr;
    *((_BYTE *)ptr + 18) = 0;
    v89 = *(_QWORD *)(v7 + 80);
    v17 = *(void ***)(v7 + 72);
    v90 = *(_QWORD *)(v7 + 88);
    v91 = v89 + 1;
    if ( &ptr < v17 || &ptr >= &v17[3 * v90] )
    {
      if ( v90 < v91 )
      {
        v137 = qvector_reserve(v7 + 72, v17, v89 + 1, 24);
        v88 = ptr;
        *(_QWORD *)(v7 + 72) = v137;
        v17 = (void **)v137;
        v89 = *(_QWORD *)(v7 + 80);
      }
      v105 = _mm_loadu_si128((const __m128i *)dest);
      v106 = &v17[3 * v89];
      *v106 = v88;
      *(__m128i *)(v106 + 1) = v105;
      ++*(_QWORD *)(v7 + 80);
    }
    else
    {
      si128 = _mm_loadu_si128((const __m128i *)dest);
      ptr = nullptr;
      *(_OWORD *)dest = 0;
      if ( v90 < v91 )
      {
        v157 = si128;
        v140 = qvector_reserve(v7 + 72, v17, v89 + 1, 24);
        si128 = _mm_load_si128(&v157);
        *(_QWORD *)(v7 + 72) = v140;
        v17 = (void **)v140;
        v89 = *(_QWORD *)(v7 + 80);
      }
      v92 = &v17[3 * v89];
      *v92 = v88;
      *(__m128i *)(v92 + 1) = si128;
      v93 = ptr;
      ++*(_QWORD *)(v7 + 80);
      if ( v93 )
      {
        *(_QWORD *)dest = 0;
        qfree(v93);
      }
    }
  }
  v18 = *(_DWORD *)(v7 + 120);
  v19 = 0;
  haystack = nullptr;
  v172 = 0;
  if ( (v18 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)qfileexist(a3, v17) )
    {
      v45 = 1;
      sub_6DD970((_QWORD *)v7);
      sub_6D7ED0(v7);
      goto LABEL_90;
    }
    if ( a3 && (v20 = strlen((const char *)a3), (v21 = v20) != 0) )
    {
      v22 = *(void **)(v7 + 24);
      v23 = v20 + 1;
      if ( *(_QWORD *)(v7 + 40) < v20 + 1 )
      {
        v142 = qvector_reserve(v7 + 24, *(_QWORD *)(v7 + 24), v23, 1);
        *(_QWORD *)(v7 + 24) = v142;
        v22 = (void *)v142;
      }
      *(_QWORD *)(v7 + 32) = v23;
      v17 = a3;
      memmove(v22, a3, v21);
      *(_BYTE *)(*(_QWORD *)(v7 + 24) + v21) = 0;
    }
    else
    {
      *(_QWORD *)(v7 + 32) = 0;
    }
    v19 = 0;
    ptr = nullptr;
    *(_OWORD *)dest = 0;
    v24 = openR(a3);
    v27 = (FILE *)v24;
    if ( !v24 )
    {
      v109 = (const char *)qstrerror(0xFFFFFFFFLL, v17, v25, v26);
      v110 = v109;
      if ( v109 && (v111 = strlen(v109), (v112 = v111) != 0) )
      {
        v143 = ptr;
        v144 = v111 + 1;
        if ( *(_QWORD *)&dest[8] < v111 + 1 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v144, 1);
          v143 = ptr;
        }
        *(_QWORD *)dest = v144;
        memmove(v143, v110, v112);
        *((_BYTE *)ptr + v112) = 0;
      }
      else
      {
        *(_QWORD *)dest = 0;
      }
      goto LABEL_146;
    }
    v28 = qfsize(v24);
    v29 = v28;
    if ( v28 <= 0 )
    {
      v30 = ptr;
      if ( *(_QWORD *)&dest[8] <= 0xFu )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, 16, 1);
        v30 = ptr;
      }
      *(_QWORD *)dest = 16;
      qmemcpy(v30, "wrong file size", 15);
      *((_BYTE *)ptr + 15) = 0;
      qfclose(v27);
LABEL_146:
      sub_6DD970((_QWORD *)v7);
      sub_6D7ED0(v7);
      if ( ptr )
      {
        *(_QWORD *)dest = 0;
        qfree(ptr);
      }
      v45 = 1;
      goto LABEL_90;
    }
    v145 = v28 + 1;
    v146 = v172;
    if ( (unsigned __int64)v172 < v145 )
    {
      v154 = haystack;
      if ( *((_QWORD *)&v172 + 1) < v145 )
      {
        haystack = (char *)qvector_reserve(&haystack, haystack, v145, 1);
        v154 = haystack;
        v146 = v172;
      }
      memset(&v154[v146], 0, v145 - v146);
      *(_QWORD *)&v172 = v145;
    }
    else if ( v145 != (_QWORD)v172 )
    {
      *(_QWORD *)&v172 = v145;
    }
    haystack[v29] = 0;
    v147 = haystack;
    if ( v29 != qfread(v27, haystack) )
    {
      v150 = (const char *)qstrerror(0xFFFFFFFFLL, v147, v148, v149);
      v151 = v150;
      if ( v150 && (v152 = strlen(v150), (v153 = v152) != 0) )
      {
        v155 = ptr;
        v156 = v152 + 1;
        if ( *(_QWORD *)&dest[8] < v152 + 1 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v156, 1);
          v155 = ptr;
        }
        *(_QWORD *)dest = v156;
        memmove(v155, v151, v153);
        *((_BYTE *)ptr + v153) = 0;
        qfclose(v27);
      }
      else
      {
        *(_QWORD *)dest = 0;
        qfclose(v27);
      }
      goto LABEL_146;
    }
    haystack[v29] = 0;
    qfclose(v27);
    if ( ptr )
    {
      *(_QWORD *)dest = 0;
      qfree(ptr);
    }
  }
  else
  {
    if ( a3 )
    {
      v31 = strlen((const char *)a3);
      v32 = v31;
      if ( v31 )
      {
        v107 = v31 + 1;
        v108 = (char *)qvector_reserve(&haystack, 0, v31 + 1, 1);
        *(_QWORD *)&v172 = v107;
        haystack = v108;
        memmove(v108, a3, v32);
        haystack[v32] = 0;
        v18 = *(_DWORD *)(v7 + 120);
      }
    }
    if ( (v18 & 0x200000) != 0 && *((_BYTE *)a3 + strlen((const char *)a3) - 1) != 59 )
    {
      v98 = v172;
      if ( (_QWORD)v172 )
      {
        v100 = v172 + 1;
        v99 = v172;
        v98 = v172 - 1;
      }
      else
      {
        v99 = 1;
        v100 = 2;
      }
      v101 = haystack;
      if ( *((_QWORD *)&v172 + 1) < v100 )
      {
        haystack = (char *)qvector_reserve(&haystack, haystack, v100, 1);
        v101 = haystack;
      }
      *(_QWORD *)&v172 = v100;
      v101[v98] = 59;
      haystack[v99] = 0;
    }
    v33 = *(_QWORD **)(v7 + 24);
    if ( *(_QWORD *)(v7 + 40) <= 8u )
    {
      v135 = qvector_reserve(v7 + 24, v33, 9, 1);
      *(_QWORD *)(v7 + 24) = v135;
      v33 = (_QWORD *)v135;
    }
    *(_QWORD *)(v7 + 32) = 9;
    *v33 = 0x63632E7475706E69LL;
    *(_BYTE *)(*(_QWORD *)(v7 + 24) + 8LL) = 0;
  }
  v34 = v172;
  if ( (_QWORD)v172 )
  {
    v35 = haystack;
    v36 = strstr(haystack, "This file has been generated by IDA.");
    if ( v36 && v36 - v35 != -1 )
    {
      **(_QWORD **)(v7 + 8) |= 0x1000uLL;
      v34 = v172;
    }
    if ( v34 > 1 )
      sub_6E0F80((_QWORD *)v7, (__int64)&haystack, v19, *(double *)si128.m128i_i64, a7);
  }
  v37 = *(_QWORD **)(v7 + 8);
  v38 = (char *)v37[1];
  if ( v38 )
  {
    v39 = v37[2];
    if ( v39 )
    {
      for ( i = 0; i != v39; ++i )
      {
        v41 = &v38[64 * i];
        v42 = *((void **)v41 + 4);
        if ( v42 )
        {
          *((_QWORD *)v41 + 5) = 0;
          qfree(v42);
        }
        v43 = *((void **)v41 + 1);
        if ( v43 )
        {
          *((_QWORD *)v41 + 2) = 0;
          qfree(v43);
        }
        v38 = (char *)v37[1];
      }
    }
    v37[2] = 0;
    qfree(v38);
    v37[1] = 0;
    v37[3] = 0;
  }
  v44 = *(_QWORD *)(v7 + 600);
  v45 = 0;
  if ( v44 )
  {
    v46 = *(_QWORD *)(v7 + 592);
    v47 = *(_DWORD *)(v7 + 120) & 0x100;
    if ( v46 != v46 + (v44 << 6) )
    {
      v162 = v46 + (v44 << 6);
      v163 = 0;
      v165 = BYTE1(v47) ^ 1;
      v157.m128i_i64[0] = v7;
      while ( 1 )
      {
        while ( (unsigned int)(*(_DWORD *)(v46 + 56) - 4) > 1 && !v165 )
        {
LABEL_70:
          v46 += 64;
          if ( v162 == v46 )
            goto LABEL_88;
        }
        v177 = 0;
        ptr = (void *)-1LL;
        memset(dest, 0, sizeof(dest));
        src = nullptr;
        *(_OWORD *)n = 0;
        sub_6D8480(v157.m128i_i64[0], (__int64 *)&src, v46);
        if ( dest == (_BYTE *)(v46 + 24) )
          goto LABEL_100;
        v48 = *(_QWORD *)(v46 + 32);
        if ( v48 > 1 )
          break;
        *(_QWORD *)&dest[8] = 0;
        v49 = 0;
LABEL_75:
        v50 = (const char *)v157.m128i_i64[0];
        v51 = *(_DWORD *)(v46 + 48);
        v52 = *(_QWORD *)(v157.m128i_i64[0] + 8);
        LODWORD(ptr) = v51;
        v160 = _mm_unpacklo_epi64((__m128i)v49, (__m128i)v49);
        if ( (*(_BYTE *)(v52 + 7) & 0x40) != 0 && v51 != -1 )
          LODWORD(ptr) = --v51;
        v53 = _mm_cvtsi32_si128(*(_DWORD *)(v46 + 52));
        v54 = _mm_cvtsi32_si128(v51);
        HIDWORD(ptr) = _mm_cvtsi128_si32(v53);
        v55 = *(_DWORD *)(v46 + 56);
        v161 = _mm_unpacklo_epi32(v54, v53).m128i_u64[0];
        v177 = (unsigned int)(v55 - 4) > 1;
        v56 = nullptr;
        if ( v49 )
        {
          v69 = (void *)qalloc_or_throw(v49, (const char *)v157.m128i_i64[0]);
          v50 = *(const char **)dest;
          v56 = v69;
          memcpy(v69, *(const void **)dest, v49);
        }
        v57 = n[0];
        v158 = nullptr;
        v159 = _mm_unpacklo_epi64((__m128i)n[0], (__m128i)n[0]);
        if ( n[0] )
        {
          v158 = (void *)qalloc_or_throw(n[0], v50);
          memcpy(v158, src, v57);
        }
        v58 = *(_QWORD *)(v52 + 16);
        v59 = *(_QWORD *)(v52 + 24);
        v60 = v177;
        if ( v59 < v58 + 1 )
        {
          v166 = v177;
          v70 = qvector_reserve(v52 + 8, 0, v58 + 1, 64);
          v71 = *(char **)(v52 + 8);
          v72 = v166;
          v73 = v70;
          v74 = *(_QWORD *)(v52 + 24);
          *(_QWORD *)(v52 + 24) = v59;
          v75 = *(_QWORD *)(v52 + 16);
          v164 = v74;
          v76 = v75 - 1;
          if ( v76 >= 0 )
          {
            v167 = v56;
            v77 = v73;
            v78 = v76;
            v79 = v73;
            do
            {
              *(_QWORD *)v79 = *(_QWORD *)v71;
              v80 = *((_QWORD *)v71 + 1);
              v81 = _mm_loadu_si128((const __m128i *)v71 + 1);
              *((_QWORD *)v71 + 1) = 0;
              *(_QWORD *)(v79 + 8) = v80;
              *(__m128i *)(v79 + 16) = v81;
              v82 = *((_QWORD *)v71 + 4);
              v83 = _mm_loadu_si128((const __m128i *)(v71 + 40));
              *((_OWORD *)v71 + 1) = 0;
              *(_QWORD *)(v79 + 32) = v82;
              *(__m128i *)(v79 + 40) = v83;
              LOBYTE(v82) = v71[56];
              *((_QWORD *)v71 + 4) = 0;
              *((_QWORD *)v71 + 6) = 0;
              *(_BYTE *)(v79 + 56) = v82;
              v84 = *((void **)v71 + 4);
              if ( v84 )
              {
                *((_QWORD *)v71 + 5) = 0;
                qfree(v84);
              }
              v85 = *((void **)v71 + 1);
              if ( v85 )
              {
                *((_QWORD *)v71 + 2) = 0;
                qfree(v85);
              }
              v71 += 64;
              v79 += 64;
            }
            while ( v78-- != 0 );
            v72 = v166;
            v56 = v167;
            v73 = v77;
            v71 = *(char **)(v52 + 8);
          }
          v167 = (void *)v73;
          v166 = v72;
          qfree(v71);
          v61 = v167;
          v60 = v166;
          *(_QWORD *)(v52 + 24) = v164;
          v58 = *(_QWORD *)(v52 + 16);
          *(_QWORD *)(v52 + 8) = v61;
        }
        else
        {
          v61 = *(void **)(v52 + 8);
        }
        v62 = v158;
        v63 = _mm_load_si128(&v160);
        v64 = _mm_load_si128(&v159);
        v65 = (__int64)v61 + 64 * v58;
        *(_QWORD *)v65 = v161;
        *(_QWORD *)(v65 + 8) = v56;
        *(_QWORD *)(v65 + 32) = v62;
        *(_BYTE *)(v65 + 56) = v60;
        *(__m128i *)(v65 + 16) = v63;
        *(__m128i *)(v65 + 40) = v64;
        ++*(_QWORD *)(v52 + 16);
        v163 += (unsigned int)(*(_DWORD *)(v46 + 56) - 4) < 2;
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        if ( !*(_QWORD *)dest )
          goto LABEL_70;
        *(_QWORD *)&dest[8] = 0;
        v46 += 64;
        qfree(*(void **)dest);
        if ( v162 == v46 )
        {
LABEL_88:
          v44 = v163;
          v7 = v157.m128i_i64[0];
          v45 = v163;
          goto LABEL_89;
        }
      }
      v67 = *(const void **)(v46 + 24);
      v68 = *(void **)dest;
      if ( *(_QWORD *)&dest[16] < v48 )
      {
        v68 = (void *)qvector_reserve(dest, *(_QWORD *)dest, *(_QWORD *)(v46 + 32), 1);
        *(_QWORD *)dest = v68;
      }
      *(_QWORD *)&dest[8] = v48;
      memmove(v68, v67, v48 - 1);
      *(_BYTE *)(*(_QWORD *)dest + v48 - 1) = 0;
LABEL_100:
      v49 = *(_QWORD *)&dest[8];
      goto LABEL_75;
    }
    v44 = 0;
  }
LABEL_89:
  sub_6D30C0(v7, (int)"=== Finished with %zu errors\n", v44);
LABEL_90:
  if ( haystack )
  {
    *(_QWORD *)&v172 = 0;
    qfree(haystack);
  }
  if ( v180 != &v181 )
    operator delete(v180, v181 + 1);
LABEL_94:
  if ( s )
  {
    v169 = 0;
    qfree(s);
  }
  return v45;
}

