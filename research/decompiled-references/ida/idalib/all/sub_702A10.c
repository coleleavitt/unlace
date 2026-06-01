__int64 __fastcall sub_702A10(__int64 a1, __int64 a2, char *a3, int a4, double a5, __m128i si128, __m128 a7)
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
  FILE *v25; // r12
  __int64 v26; // rax
  __int64 v27; // r13
  void *v28; // rsi
  size_t v29; // rax
  size_t v30; // r13
  _QWORD *v31; // rsi
  unsigned __int64 v32; // rbx
  char *v33; // r12
  char *v34; // rax
  _QWORD *v35; // r13
  char *v36; // rdi
  __int64 v37; // r14
  __int64 i; // r12
  char *v39; // rbx
  void *v40; // rdi
  void *v41; // rdi
  __int64 v42; // r8
  unsigned int v43; // ebx
  __int64 v44; // r14
  int v45; // eax
  unsigned __int64 v46; // rbx
  size_t v47; // rbx
  unsigned int v48; // eax
  __int64 v49; // r15
  __m128i v50; // xmm0
  __m128i v51; // xmm5
  int v52; // eax
  void *v53; // r12
  size_t v54; // rbx
  __int64 v55; // rax
  unsigned __int64 v56; // rbx
  bool v57; // r10
  void *v58; // rcx
  void *v59; // rsi
  __m128i v60; // xmm6
  __m128i v61; // xmm7
  __int64 v62; // rax
  const void *v64; // rbp
  void *v65; // rax
  __int64 v66; // rax
  char *v67; // rbp
  bool v68; // r10
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 v72; // rbx
  __int64 v73; // r13
  __int64 v74; // r12
  __int64 v75; // rbx
  __int64 v76; // rcx
  __m128i v77; // xmm0
  __int64 v78; // rcx
  __m128i v79; // xmm0
  void *v80; // rdi
  void *v81; // rdi
  __m128 *v83; // rax
  void *v84; // r13
  __int64 v85; // rax
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rdi
  void **v88; // rax
  void *v89; // rdi
  char **p_haystack; // rdi
  int v91; // eax
  __int64 v92; // rdx
  char *v93; // rsi
  __int64 v94; // rbx
  __int64 v95; // r13
  unsigned __int64 v96; // r12
  char *v97; // rsi
  __int64 v98; // rcx
  __int64 *v99; // rcx
  __int64 v100; // rdx
  __m128i v101; // xmm0
  void **v102; // rax
  size_t v103; // r12
  char *v104; // rax
  const char *v105; // rax
  const char *v106; // r12
  size_t v107; // rax
  size_t v108; // r13
  int v109; // eax
  unsigned __int64 v110; // r14
  size_t v111; // r15
  char *v112; // r8
  void *v113; // rdi
  char *v114; // r14
  _DWORD *v115; // rax
  __int64 v116; // rax
  unsigned __int64 v117; // rsi
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // rdi
  void *v120; // r13
  __int64 v121; // rax
  void *v122; // rdi
  size_t v123; // r13
  void *v124; // r14
  __m128i v125; // xmm0
  __int64 v126; // rdx
  __int64 v127; // rsi
  __int64 v128; // rax
  __m128i v129; // xmm0
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v134; // rax
  void *v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  void *v139; // rdi
  size_t v140; // r14
  unsigned __int64 v141; // r14
  __int64 v142; // rax
  const char *v143; // rax
  const char *v144; // r13
  size_t v145; // rax
  size_t v146; // r14
  char *v147; // rsi
  void *v148; // rdi
  size_t v149; // r15
  __m128i v150; // [rsp+0h] [rbp-188h] BYREF
  void *v151; // [rsp+18h] [rbp-170h]
  __m128i v152; // [rsp+20h] [rbp-168h] BYREF
  __m128i v153; // [rsp+30h] [rbp-158h] BYREF
  unsigned __int64 v154; // [rsp+40h] [rbp-148h]
  __int64 v155; // [rsp+48h] [rbp-140h]
  __int64 v156; // [rsp+50h] [rbp-138h]
  __int64 v157; // [rsp+58h] [rbp-130h]
  char v158; // [rsp+66h] [rbp-122h]
  bool v159; // [rsp+67h] [rbp-121h]
  void *v160; // [rsp+68h] [rbp-120h]
  char *s; // [rsp+70h] [rbp-118h] BYREF
  size_t v162; // [rsp+78h] [rbp-110h]
  unsigned __int64 v163; // [rsp+80h] [rbp-108h]
  char *haystack; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v165; // [rsp+98h] [rbp-F0h]
  void *ptr; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE dest[24]; // [rsp+B8h] [rbp-D0h] BYREF
  void *src; // [rsp+D0h] [rbp-B8h] BYREF
  size_t n[2]; // [rsp+D8h] [rbp-B0h]
  bool v170; // [rsp+E8h] [rbp-A0h]
  void *v171[2]; // [rsp+F0h] [rbp-98h] BYREF
  _QWORD v172[2]; // [rsp+100h] [rbp-88h] BYREF
  void *v173; // [rsp+110h] [rbp-78h] BYREF
  __int64 v174; // [rsp+120h] [rbp-68h] BYREF
  int v175; // [rsp+13Ch] [rbp-4Ch]
  int v176; // [rsp+140h] [rbp-48h]
  unsigned __int64 v177; // [rsp+148h] [rbp-40h]

  v7 = a1;
  v177 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = a2;
  v9 = a4 | 2;
  v10 = *(__int64 **)(a1 + 8);
  if ( (debug & 0x4000) == 0 )
    v9 = a4;
  *(_DWORD *)(a1 + 120) = v9;
  v11 = *v10;
  if ( *v10 >= 0 )
  {
    v12 = *(_QWORD *)(qword_2CCB598 + 1896);
    if ( (v11 & 0x400) == 0 )
    {
      v98 = *v10;
      if ( *(_BYTE *)(v12 + 120) )
        BYTE1(v98) = BYTE1(v11) | 4;
      else
        BYTE1(v98) = BYTE1(v11) & 0xFB;
      *v10 = v98;
    }
    if ( (v11 & 0x800) == 0 )
    {
      v99 = *(__int64 **)(a1 + 8);
      v100 = *v99;
      if ( *(_BYTE *)(v12 + 121) )
        BYTE1(v100) |= 8u;
      else
        BYTE1(v100) &= ~8u;
      *v99 = v100;
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
      sub_456FB0((_QWORD *)(v12 + 96), (__int64 *)(a1 + 96), ";", 1);
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
  sub_6F5D40((const void **)&s, a1, "-target", 1);
  if ( v162 <= 1 )
  {
    p_haystack = (char **)&byte_5;
    haystack = nullptr;
    v165 = 0;
    v91 = getinf(5);
    v92 = *((_QWORD *)&v165 + 1);
    v93 = haystack;
    switch ( v91 )
    {
      case 18:
        if ( *((_QWORD *)&v165 + 1) <= 8u )
        {
          p_haystack = &haystack;
          haystack = (char *)qvector_reserve(&haystack, haystack, 9, 1);
          v93 = haystack;
        }
        *(_QWORD *)&v165 = 9;
        *(_QWORD *)v93 = 0x78756E696C2D6370LL;
        haystack[8] = 0;
        break;
      case 25:
        if ( *((_QWORD *)&v165 + 1) <= 0xCu )
        {
          p_haystack = &haystack;
          haystack = (char *)qvector_reserve(&haystack, haystack, 13, 1);
          v93 = haystack;
        }
        *(_QWORD *)&v165 = 13;
        qmemcpy(v93, "apple-darwin", 12);
        haystack[12] = 0;
        break;
      case 11:
        if ( *((_QWORD *)&v165 + 1) <= 8u )
        {
          p_haystack = &haystack;
          haystack = (char *)qvector_reserve(&haystack, haystack, 9, 1);
          v93 = haystack;
        }
        *(_QWORD *)&v165 = 9;
        *(_QWORD *)v93 = 0x32336E69772D6370LL;
        haystack[8] = 0;
        break;
      default:
        if ( *((_QWORD *)&v165 + 1) <= 7u )
        {
          p_haystack = &haystack;
          haystack = (char *)qvector_reserve(&haystack, haystack, 8, 1);
          v93 = haystack;
        }
        *(_QWORD *)&v165 = 8;
        *(_DWORD *)v93 = 1852534389;
        *(_DWORD *)(v93 + 3) = 1853321070;
        haystack[7] = 0;
        break;
    }
    ptr = nullptr;
    *(_OWORD *)dest = 0;
    v109 = *(_DWORD *)(get_ph(p_haystack, v93, v92) + 4);
    if ( v109 == 12 )
    {
      if ( (unsigned __int8)getinf_flag(3, 4) )
      {
        v110 = 7;
        v111 = 6;
        v112 = "mips64";
      }
      else
      {
        v110 = 5;
        v111 = 4;
        v112 = "mips";
      }
    }
    else if ( v109 == 13 )
    {
      if ( (unsigned __int8)getinf_flag(3, 4) )
      {
        v110 = 6;
        v111 = 5;
        v112 = "arm64";
      }
      else
      {
        v110 = 4;
        v111 = 3;
        v112 = (char *)"arm";
      }
    }
    else if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      v110 = 7;
      v111 = 6;
      v112 = "x86_64";
    }
    else
    {
      v110 = 5;
      v111 = 4;
      v112 = (char *)"i386";
    }
    v113 = ptr;
    if ( *(_QWORD *)&dest[8] < v110 )
    {
      v150.m128i_i64[0] = (__int64)v112;
      v135 = (void *)qvector_reserve(&ptr, ptr, v110, 1);
      v112 = (char *)v150.m128i_i64[0];
      ptr = v135;
      v113 = v135;
    }
    *(_QWORD *)dest = v110;
    memmove(v113, v112, v111);
    *((_BYTE *)ptr + v111) = 0;
    sub_35A910((__int64 *)&s);
    if ( v162 )
    {
      v114 = s;
      if ( !strcmp(s, "arm-pc-linux") || !strcmp(v114, "arm-unknown") )
      {
        if ( v163 <= 0xD )
        {
          s = (char *)qvector_reserve(&s, v114, 14, 1);
          v114 = s;
        }
        v162 = 14;
        qmemcpy(v114, "arm-none-eabi", 13);
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
      *(_QWORD *)&v165 = 0;
      qfree(haystack);
    }
    *(_OWORD *)dest = 0;
    ptr = nullptr;
    v115 = (_DWORD *)qvector_reserve(&ptr, 0, 8, 1);
    *(_QWORD *)dest = 8;
    ptr = v115;
    *v115 = 1918989357;
    *(_DWORD *)((char *)v115 + 3) = 1952802674;
    *((_BYTE *)ptr + 7) = 0;
    v116 = *(_QWORD *)(v7 + 80);
    v117 = *(_QWORD *)(v7 + 72);
    v118 = *(_QWORD *)(v7 + 88);
    v119 = v116 + 1;
    if ( (unsigned __int64)&ptr < v117 || (unsigned __int64)&ptr >= v117 + 24 * v118 )
    {
      if ( v118 < v119 )
      {
        v134 = qvector_reserve(v7 + 72, v117, v116 + 1, 24);
        *(_QWORD *)(v7 + 72) = v134;
        v117 = v134;
        v116 = *(_QWORD *)(v7 + 80);
      }
      v129 = _mm_loadu_si128((const __m128i *)dest);
      v130 = v117 + 24 * v116;
      *(_QWORD *)v130 = ptr;
      *(__m128i *)(v130 + 8) = v129;
      ++*(_QWORD *)(v7 + 80);
    }
    else
    {
      v120 = ptr;
      si128 = _mm_loadu_si128((const __m128i *)dest);
      ptr = nullptr;
      *(_OWORD *)dest = 0;
      if ( v118 < v119 )
      {
        v150 = si128;
        v137 = qvector_reserve(v7 + 72, v117, v116 + 1, 24);
        si128 = _mm_load_si128(&v150);
        *(_QWORD *)(v7 + 72) = v137;
        v117 = v137;
        v116 = *(_QWORD *)(v7 + 80);
      }
      v121 = v117 + 24 * v116;
      *(_QWORD *)v121 = v120;
      *(__m128i *)(v121 + 8) = si128;
      v122 = ptr;
      ++*(_QWORD *)(v7 + 80);
      if ( v122 )
      {
        *(_QWORD *)dest = 0;
        qfree(v122);
      }
    }
    v123 = v162;
    v124 = nullptr;
    v125 = _mm_unpacklo_epi64((__m128i)v162, (__m128i)v162);
    if ( v162 )
    {
      v150 = v125;
      v124 = (void *)qalloc_or_throw(v162);
      memcpy(v124, s, v123);
      v125 = _mm_load_si128(&v150);
    }
    v126 = *(_QWORD *)(v7 + 80);
    v127 = *(_QWORD *)(v7 + 72);
    if ( *(_QWORD *)(v7 + 88) < (unsigned __int64)(v126 + 1) )
    {
      v150 = v125;
      v132 = qvector_reserve(v7 + 72, v127, v126 + 1, 24);
      v126 = *(_QWORD *)(v7 + 80);
      v125 = _mm_load_si128(&v150);
      *(_QWORD *)(v7 + 72) = v132;
      v127 = v132;
    }
    v128 = v127 + 24 * v126;
    *(_QWORD *)v128 = v124;
    *(__m128i *)(v128 + 8) = v125;
    ++*(_QWORD *)(v7 + 80);
  }
  if ( !(unsigned __int8)sub_6FCE00((_QWORD *)v7) )
  {
    v43 = 1;
    sub_6F8510(v7);
    goto LABEL_94;
  }
  if ( !v162 )
  {
    v171[0] = v172;
    if ( ::haystack )
    {
      ptr = nullptr;
      goto LABEL_24;
    }
LABEL_222:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  v13 = s;
  v171[0] = v172;
  if ( !s )
    goto LABEL_222;
  v14 = (char *)strlen(s);
  ptr = v14;
  v15 = (size_t)v14;
  if ( (unsigned __int64)v14 > 0xF )
  {
    v171[0] = (void *)std::string::_M_create(v171, &ptr, 0);
    v16 = v171[0];
    v172[0] = ptr;
LABEL_23:
    memcpy(v16, v13, v15);
    goto LABEL_24;
  }
  if ( v14 == (_BYTE *)&dword_0 + 1 )
  {
    LOBYTE(v172[0]) = *v13;
  }
  else if ( v14 )
  {
    v16 = v172;
    goto LABEL_23;
  }
LABEL_24:
  v17 = v171;
  v171[1] = ptr;
  *((_BYTE *)v171[0] + (unsigned __int64)ptr) = 0;
  sub_22B9ED0(&v173, v171);
  if ( v171[0] != v172 )
  {
    v17 = (void **)(v172[0] + 1LL);
    operator delete(v171[0], v172[0] + 1LL);
  }
  if ( v175 == 15 && (v176 == 27 || !v176) )
  {
    *(_OWORD *)dest = 0;
    ptr = nullptr;
    v83 = (__m128 *)qvector_reserve(&ptr, 0, 19, 1);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8280);
    *(_QWORD *)dest = 19;
    ptr = v83;
    v83[1].m128_i16[0] = 31092;
    *v83 = (__m128)si128;
    v84 = ptr;
    *((_BYTE *)ptr + 18) = 0;
    v85 = *(_QWORD *)(v7 + 80);
    v17 = *(void ***)(v7 + 72);
    v86 = *(_QWORD *)(v7 + 88);
    v87 = v85 + 1;
    if ( &ptr < v17 || &ptr >= &v17[3 * v86] )
    {
      if ( v86 < v87 )
      {
        v133 = qvector_reserve(v7 + 72, v17, v85 + 1, 24);
        v84 = ptr;
        *(_QWORD *)(v7 + 72) = v133;
        v17 = (void **)v133;
        v85 = *(_QWORD *)(v7 + 80);
      }
      v101 = _mm_loadu_si128((const __m128i *)dest);
      v102 = &v17[3 * v85];
      *v102 = v84;
      *(__m128i *)(v102 + 1) = v101;
      ++*(_QWORD *)(v7 + 80);
    }
    else
    {
      si128 = _mm_loadu_si128((const __m128i *)dest);
      ptr = nullptr;
      *(_OWORD *)dest = 0;
      if ( v86 < v87 )
      {
        v150 = si128;
        v136 = qvector_reserve(v7 + 72, v17, v85 + 1, 24);
        si128 = _mm_load_si128(&v150);
        *(_QWORD *)(v7 + 72) = v136;
        v17 = (void **)v136;
        v85 = *(_QWORD *)(v7 + 80);
      }
      v88 = &v17[3 * v85];
      *v88 = v84;
      *(__m128i *)(v88 + 1) = si128;
      v89 = ptr;
      ++*(_QWORD *)(v7 + 80);
      if ( v89 )
      {
        *(_QWORD *)dest = 0;
        qfree(v89);
      }
    }
  }
  v18 = *(_DWORD *)(v7 + 120);
  v19 = 0;
  haystack = nullptr;
  v165 = 0;
  if ( (v18 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)qfileexist(a3, v17) )
    {
      v43 = 1;
      sub_6FCBC0((_QWORD *)v7);
      sub_6F8510(v7);
      goto LABEL_90;
    }
    if ( a3 && (v20 = strlen(a3), (v21 = v20) != 0) )
    {
      v22 = *(void **)(v7 + 24);
      v23 = v20 + 1;
      if ( *(_QWORD *)(v7 + 40) < v20 + 1 )
      {
        v138 = qvector_reserve(v7 + 24, *(_QWORD *)(v7 + 24), v23, 1);
        *(_QWORD *)(v7 + 24) = v138;
        v22 = (void *)v138;
      }
      *(_QWORD *)(v7 + 32) = v23;
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
    v25 = (FILE *)v24;
    if ( !v24 )
    {
      v105 = (const char *)qstrerror(0xFFFFFFFFLL);
      v106 = v105;
      if ( v105 && (v107 = strlen(v105), (v108 = v107) != 0) )
      {
        v139 = ptr;
        v140 = v107 + 1;
        if ( *(_QWORD *)&dest[8] < v107 + 1 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v140, 1);
          v139 = ptr;
        }
        *(_QWORD *)dest = v140;
        memmove(v139, v106, v108);
        *((_BYTE *)ptr + v108) = 0;
      }
      else
      {
        *(_QWORD *)dest = 0;
      }
      goto LABEL_146;
    }
    v26 = qfsize(v24);
    v27 = v26;
    if ( v26 <= 0 )
    {
      v28 = ptr;
      if ( *(_QWORD *)&dest[8] <= 0xFu )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, 16, 1);
        v28 = ptr;
      }
      *(_QWORD *)dest = 16;
      qmemcpy(v28, "wrong file size", 15);
      *((_BYTE *)ptr + 15) = 0;
      qfclose(v25);
LABEL_146:
      sub_6FCBC0((_QWORD *)v7);
      sub_6F8510(v7);
      if ( ptr )
      {
        *(_QWORD *)dest = 0;
        qfree(ptr);
      }
      v43 = 1;
      goto LABEL_90;
    }
    v141 = v26 + 1;
    v142 = v165;
    if ( (unsigned __int64)v165 < v141 )
    {
      v147 = haystack;
      if ( *((_QWORD *)&v165 + 1) < v141 )
      {
        haystack = (char *)qvector_reserve(&haystack, haystack, v141, 1);
        v147 = haystack;
        v142 = v165;
      }
      memset(&v147[v142], 0, v141 - v142);
      *(_QWORD *)&v165 = v141;
    }
    else if ( v141 != (_QWORD)v165 )
    {
      *(_QWORD *)&v165 = v141;
    }
    haystack[v27] = 0;
    if ( v27 != qfread(v25, haystack) )
    {
      v143 = (const char *)qstrerror(0xFFFFFFFFLL);
      v144 = v143;
      if ( v143 && (v145 = strlen(v143), (v146 = v145) != 0) )
      {
        v148 = ptr;
        v149 = v145 + 1;
        if ( *(_QWORD *)&dest[8] < v145 + 1 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v149, 1);
          v148 = ptr;
        }
        *(_QWORD *)dest = v149;
        memmove(v148, v144, v146);
        *((_BYTE *)ptr + v146) = 0;
        qfclose(v25);
      }
      else
      {
        *(_QWORD *)dest = 0;
        qfclose(v25);
      }
      goto LABEL_146;
    }
    haystack[v27] = 0;
    qfclose(v25);
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
      v29 = strlen(a3);
      v30 = v29;
      if ( v29 )
      {
        v103 = v29 + 1;
        v104 = (char *)qvector_reserve(&haystack, 0, v29 + 1, 1);
        *(_QWORD *)&v165 = v103;
        haystack = v104;
        memmove(v104, a3, v30);
        haystack[v30] = 0;
        v18 = *(_DWORD *)(v7 + 120);
      }
    }
    if ( (v18 & 0x200000) != 0 && a3[strlen(a3) - 1] != 59 )
    {
      v94 = v165;
      if ( (_QWORD)v165 )
      {
        v96 = v165 + 1;
        v95 = v165;
        v94 = v165 - 1;
      }
      else
      {
        v95 = 1;
        v96 = 2;
      }
      v97 = haystack;
      if ( *((_QWORD *)&v165 + 1) < v96 )
      {
        haystack = (char *)qvector_reserve(&haystack, haystack, v96, 1);
        v97 = haystack;
      }
      *(_QWORD *)&v165 = v96;
      v97[v94] = 59;
      haystack[v95] = 0;
    }
    v31 = *(_QWORD **)(v7 + 24);
    if ( *(_QWORD *)(v7 + 40) <= 8u )
    {
      v131 = qvector_reserve(v7 + 24, v31, 9, 1);
      *(_QWORD *)(v7 + 24) = v131;
      v31 = (_QWORD *)v131;
    }
    *(_QWORD *)(v7 + 32) = 9;
    *v31 = 0x63632E7475706E69LL;
    *(_BYTE *)(*(_QWORD *)(v7 + 24) + 8LL) = 0;
  }
  v32 = v165;
  if ( (_QWORD)v165 )
  {
    v33 = haystack;
    v34 = strstr(haystack, "This file has been generated by IDA.");
    if ( v34 && v34 - v33 != -1 )
    {
      **(_QWORD **)(v7 + 8) |= 0x1000uLL;
      v32 = v165;
    }
    if ( v32 > 1 )
      sub_701480((_QWORD *)v7, (__int64)&haystack, v19, *(double *)si128.m128i_i64, a7);
  }
  v35 = *(_QWORD **)(v7 + 8);
  v36 = (char *)v35[1];
  if ( v36 )
  {
    v37 = v35[2];
    if ( v37 )
    {
      for ( i = 0; i != v37; ++i )
      {
        v39 = &v36[64 * i];
        v40 = *((void **)v39 + 4);
        if ( v40 )
        {
          *((_QWORD *)v39 + 5) = 0;
          qfree(v40);
        }
        v41 = *((void **)v39 + 1);
        if ( v41 )
        {
          *((_QWORD *)v39 + 2) = 0;
          qfree(v41);
        }
        v36 = (char *)v35[1];
      }
    }
    v35[2] = 0;
    qfree(v36);
    v35[1] = 0;
    v35[3] = 0;
  }
  v42 = *(_QWORD *)(v7 + 600);
  v43 = 0;
  if ( v42 )
  {
    v44 = *(_QWORD *)(v7 + 592);
    v45 = *(_DWORD *)(v7 + 120) & 0x100;
    if ( v44 != v44 + (v42 << 6) )
    {
      v155 = v44 + (v42 << 6);
      v156 = 0;
      v158 = BYTE1(v45) ^ 1;
      v150.m128i_i64[0] = v7;
      while ( 1 )
      {
        while ( (unsigned int)(*(_DWORD *)(v44 + 56) - 4) > 1 && !v158 )
        {
LABEL_70:
          v44 += 64;
          if ( v155 == v44 )
            goto LABEL_88;
        }
        v170 = 0;
        ptr = (void *)-1LL;
        memset(dest, 0, sizeof(dest));
        src = nullptr;
        *(_OWORD *)n = 0;
        sub_6F8AC0(v150.m128i_i64[0], (__int64 *)&src, v44);
        if ( dest == (_BYTE *)(v44 + 24) )
          goto LABEL_100;
        v46 = *(_QWORD *)(v44 + 32);
        if ( v46 > 1 )
          break;
        *(_QWORD *)&dest[8] = 0;
        v47 = 0;
LABEL_75:
        v48 = *(_DWORD *)(v44 + 48);
        v49 = *(_QWORD *)(v150.m128i_i64[0] + 8);
        LODWORD(ptr) = v48;
        v153 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
        if ( (*(_BYTE *)(v49 + 7) & 0x40) != 0 && v48 != -1 )
          LODWORD(ptr) = --v48;
        v50 = _mm_cvtsi32_si128(*(_DWORD *)(v44 + 52));
        v51 = _mm_cvtsi32_si128(v48);
        HIDWORD(ptr) = _mm_cvtsi128_si32(v50);
        v52 = *(_DWORD *)(v44 + 56);
        v154 = _mm_unpacklo_epi32(v51, v50).m128i_u64[0];
        v170 = (unsigned int)(v52 - 4) > 1;
        v53 = nullptr;
        if ( v47 )
        {
          v53 = (void *)qalloc_or_throw(v47);
          memcpy(v53, *(const void **)dest, v47);
        }
        v54 = n[0];
        v151 = nullptr;
        v152 = _mm_unpacklo_epi64((__m128i)n[0], (__m128i)n[0]);
        if ( n[0] )
        {
          v151 = (void *)qalloc_or_throw(n[0]);
          memcpy(v151, src, v54);
        }
        v55 = *(_QWORD *)(v49 + 16);
        v56 = *(_QWORD *)(v49 + 24);
        v57 = v170;
        if ( v56 < v55 + 1 )
        {
          v159 = v170;
          v66 = qvector_reserve(v49 + 8, 0, v55 + 1, 64);
          v67 = *(char **)(v49 + 8);
          v68 = v159;
          v69 = v66;
          v70 = *(_QWORD *)(v49 + 24);
          *(_QWORD *)(v49 + 24) = v56;
          v71 = *(_QWORD *)(v49 + 16);
          v157 = v70;
          v72 = v71 - 1;
          if ( v72 >= 0 )
          {
            v160 = v53;
            v73 = v69;
            v74 = v72;
            v75 = v69;
            do
            {
              *(_QWORD *)v75 = *(_QWORD *)v67;
              v76 = *((_QWORD *)v67 + 1);
              v77 = _mm_loadu_si128((const __m128i *)v67 + 1);
              *((_QWORD *)v67 + 1) = 0;
              *(_QWORD *)(v75 + 8) = v76;
              *(__m128i *)(v75 + 16) = v77;
              v78 = *((_QWORD *)v67 + 4);
              v79 = _mm_loadu_si128((const __m128i *)(v67 + 40));
              *((_OWORD *)v67 + 1) = 0;
              *(_QWORD *)(v75 + 32) = v78;
              *(__m128i *)(v75 + 40) = v79;
              LOBYTE(v78) = v67[56];
              *((_QWORD *)v67 + 4) = 0;
              *((_QWORD *)v67 + 6) = 0;
              *(_BYTE *)(v75 + 56) = v78;
              v80 = *((void **)v67 + 4);
              if ( v80 )
              {
                *((_QWORD *)v67 + 5) = 0;
                qfree(v80);
              }
              v81 = *((void **)v67 + 1);
              if ( v81 )
              {
                *((_QWORD *)v67 + 2) = 0;
                qfree(v81);
              }
              v67 += 64;
              v75 += 64;
            }
            while ( v74-- != 0 );
            v68 = v159;
            v53 = v160;
            v69 = v73;
            v67 = *(char **)(v49 + 8);
          }
          v160 = (void *)v69;
          v159 = v68;
          qfree(v67);
          v58 = v160;
          v57 = v159;
          *(_QWORD *)(v49 + 24) = v157;
          v55 = *(_QWORD *)(v49 + 16);
          *(_QWORD *)(v49 + 8) = v58;
        }
        else
        {
          v58 = *(void **)(v49 + 8);
        }
        v59 = v151;
        v60 = _mm_load_si128(&v153);
        v61 = _mm_load_si128(&v152);
        v62 = (__int64)v58 + 64 * v55;
        *(_QWORD *)v62 = v154;
        *(_QWORD *)(v62 + 8) = v53;
        *(_QWORD *)(v62 + 32) = v59;
        *(_BYTE *)(v62 + 56) = v57;
        *(__m128i *)(v62 + 16) = v60;
        *(__m128i *)(v62 + 40) = v61;
        ++*(_QWORD *)(v49 + 16);
        v156 += (unsigned int)(*(_DWORD *)(v44 + 56) - 4) < 2;
        if ( src )
        {
          n[0] = 0;
          qfree(src);
        }
        if ( !*(_QWORD *)dest )
          goto LABEL_70;
        *(_QWORD *)&dest[8] = 0;
        v44 += 64;
        qfree(*(void **)dest);
        if ( v155 == v44 )
        {
LABEL_88:
          v42 = v156;
          v7 = v150.m128i_i64[0];
          v43 = v156;
          goto LABEL_89;
        }
      }
      v64 = *(const void **)(v44 + 24);
      v65 = *(void **)dest;
      if ( *(_QWORD *)&dest[16] < v46 )
      {
        v65 = (void *)qvector_reserve(dest, *(_QWORD *)dest, *(_QWORD *)(v44 + 32), 1);
        *(_QWORD *)dest = v65;
      }
      *(_QWORD *)&dest[8] = v46;
      memmove(v65, v64, v46 - 1);
      *(_BYTE *)(*(_QWORD *)dest + v46 - 1) = 0;
LABEL_100:
      v47 = *(_QWORD *)&dest[8];
      goto LABEL_75;
    }
    v42 = 0;
  }
LABEL_89:
  sub_6F3700(v7, (int)"=== Finished with %zu errors\n", v42);
LABEL_90:
  if ( haystack )
  {
    *(_QWORD *)&v165 = 0;
    qfree(haystack);
  }
  if ( v173 != &v174 )
    operator delete(v173, v174 + 1);
LABEL_94:
  if ( s )
  {
    v162 = 0;
    qfree(s);
  }
  return v43;
}
