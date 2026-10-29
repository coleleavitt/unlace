_QWORD *__fastcall sub_21177C0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        void **a4,
        void **a5,
        int *a6,
        _BYTE *a7,
        _DWORD *a8)
{
  _WORD *v10; // r15
  size_t v11; // rbp
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // r13
  __m128i *v16; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __m128i *v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __int64 v26; // rdx
  __m128i *v27; // rax
  __m128i si128; // xmm0
  _QWORD *v29; // r13
  size_t v30; // r15
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  void *v33; // rdx
  __int64 v34; // rax
  size_t v35; // rdx
  size_t v36; // rax
  bool v37; // cc
  size_t v38; // rax
  size_t v39; // rbp
  _QWORD *v40; // r15
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  void *v43; // rdx
  __int64 v44; // rax
  size_t v45; // rdx
  size_t v46; // rax
  size_t v47; // rax
  _QWORD *v48; // rbp
  size_t v49; // r15
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  void *v52; // rdx
  size_t v53; // rax
  size_t v54; // rbp
  size_t v55; // rax
  size_t v56; // r12
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rdx
  void *v59; // rdx
  size_t v60; // rax
  size_t v61; // rax
  size_t v62; // r12
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rdx
  void *v65; // rdx
  __int64 v66; // rax
  size_t v67; // rdx
  size_t v68; // rax
  size_t v69; // rax
  char **v70; // rax
  char **v71; // rax
  char **v72; // rdx
  __int64 v73; // rax
  bool v74; // zf
  char **v75; // rax
  char **v76; // rax
  char *v77; // rbp
  char *i; // rbx
  size_t v79; // rax
  size_t v80; // rdx
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rdx
  char *v83; // r14
  size_t v84; // r15
  size_t v85; // rax
  size_t v86; // rdx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rdx
  size_t v89; // r15
  size_t v90; // rax
  size_t v91; // rdx
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rdx
  size_t v94; // r15
  size_t v95; // rax
  size_t v96; // rdx
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rdx
  size_t v99; // r14
  int v100; // eax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rdx
  size_t v103; // r8
  size_t v104; // rax
  size_t v105; // rdx
  char *v106; // r15
  size_t v107; // r14
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rdx
  size_t v110; // rax
  size_t v111; // rdx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // rdx
  size_t v114; // r14
  size_t v115; // rax
  size_t v116; // rdx
  unsigned int v117; // eax
  unsigned int v118; // ebx
  __int64 v119; // rdx
  __int64 v120; // rbp
  __m128i *v121; // rax
  __m128i v122; // xmm0
  void *v123; // rdi
  __int64 v124; // rdx
  __m128i *v125; // rax
  __m128i v126; // xmm0
  unsigned int v127; // ebp
  __int64 v128; // rdx
  __int64 v129; // r12
  __m128i *v130; // rax
  __m128i v131; // xmm0
  __m128i v132; // xmm0
  __m128i v133; // xmm0
  __m128i v134; // xmm0
  unsigned int v135; // eax
  __int64 v136; // rdx
  __m128i *v137; // rax
  __m128i v138; // xmm0
  __int64 v139; // rdx
  __m128i *v140; // rax
  __m128i v141; // xmm0
  size_t v144; // [rsp+10h] [rbp-128h]
  _QWORD *v145; // [rsp+10h] [rbp-128h]
  _QWORD *v146; // [rsp+10h] [rbp-128h]
  void *v147; // [rsp+18h] [rbp-120h]
  char *v148; // [rsp+20h] [rbp-118h]
  size_t v149; // [rsp+38h] [rbp-100h]
  _QWORD v150[2]; // [rsp+40h] [rbp-F8h] BYREF
  void *v151; // [rsp+50h] [rbp-E8h] BYREF
  size_t v152; // [rsp+58h] [rbp-E0h]
  void *v153; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v154; // [rsp+68h] [rbp-D0h]
  _BYTE v155[16]; // [rsp+70h] [rbp-C8h] BYREF
  void *s1; // [rsp+80h] [rbp-B8h] BYREF
  size_t n; // [rsp+88h] [rbp-B0h]
  _QWORD v158[2]; // [rsp+90h] [rbp-A8h] BYREF
  void *ptr; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v160; // [rsp+A8h] [rbp-90h]
  _BYTE v161[136]; // [rsp+B0h] [rbp-88h] BYREF

  v150[0] = a2;
  *a7 = 0;
  v150[1] = a3;
  ptr = v161;
  v160 = 0x500000000LL;
  sub_22476F0(v150, &ptr, 44, 0xFFFFFFFFLL, 1);
  if ( !(_DWORD)v160 )
  {
    *a4 = nullptr;
    v10 = nullptr;
    a4[1] = nullptr;
    v11 = 0;
    *a5 = nullptr;
    a5[1] = nullptr;
LABEL_3:
    v151 = nullptr;
    v152 = 0;
LABEL_4:
    v144 = 0;
    v147 = nullptr;
    goto LABEL_5;
  }
  v29 = ptr;
  v30 = 0;
  v31 = sub_2246FB0(ptr, asc_22E1692, 6, 0);
  v32 = v29[1];
  if ( v31 < v32 )
  {
    v30 = v32 - v31;
    v32 = v31;
  }
  v33 = (void *)(*v29 + v32);
  n = v30;
  s1 = v33;
  v34 = sub_2247130(&s1, asc_22E1692, 6, -1);
  v35 = n;
  v36 = v34 + 1;
  v37 = v36 <= n;
  *a4 = s1;
  if ( !v37 )
    v36 = v35;
  v38 = v35 - v30 + v36;
  if ( v38 > v35 )
    v38 = v35;
  v37 = (unsigned int)v160 <= 1;
  a4[1] = (void *)v38;
  if ( v37 )
  {
    *a5 = nullptr;
    a5[1] = nullptr;
LABEL_74:
    v10 = nullptr;
    v11 = 0;
    goto LABEL_3;
  }
  v39 = 0;
  v40 = ptr;
  v41 = sub_2246FB0((char *)ptr + 16, asc_22E1692, 6, 0);
  v42 = v40[3];
  if ( v41 < v42 )
  {
    v39 = v42 - v41;
    v42 = v41;
  }
  v43 = (void *)(v40[2] + v42);
  n = v39;
  s1 = v43;
  v44 = sub_2247130(&s1, asc_22E1692, 6, -1);
  v45 = n;
  v46 = v44 + 1;
  v37 = v46 <= n;
  *a5 = s1;
  if ( !v37 )
    v46 = v45;
  v47 = v45 - v39 + v46;
  if ( v47 > v45 )
    v47 = v45;
  v37 = (unsigned int)v160 <= 2;
  a5[1] = (void *)v47;
  if ( v37 )
    goto LABEL_74;
  v48 = ptr;
  v49 = 0;
  v50 = sub_2246FB0((char *)ptr + 32, asc_22E1692, 6, 0);
  v51 = v48[5];
  if ( v50 < v51 )
  {
    v49 = v51 - v50;
    v51 = v50;
  }
  v52 = (void *)(v48[4] + v51);
  n = v49;
  s1 = v52;
  v53 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
  if ( v53 > n )
    v53 = n;
  v54 = v53;
  v55 = n - v49;
  v10 = s1;
  v11 = v55 + v54;
  if ( v11 > n )
    v11 = n;
  if ( (unsigned int)v160 <= 3 )
    goto LABEL_3;
  v56 = 0;
  v145 = ptr;
  v57 = sub_2246FB0((char *)ptr + 48, asc_22E1692, 6, 0);
  v58 = v145[7];
  if ( v57 < v58 )
  {
    v56 = v58 - v57;
    v58 = v57;
  }
  v59 = (void *)(v145[6] + v58);
  n = v56;
  s1 = v59;
  v60 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
  v151 = s1;
  if ( v60 > n )
    v60 = n;
  v61 = n - v56 + v60;
  if ( v61 > n )
    v61 = n;
  v152 = v61;
  if ( (unsigned int)v160 <= 4 )
    goto LABEL_4;
  v62 = 0;
  v146 = ptr;
  v63 = sub_2246FB0((char *)ptr + 64, asc_22E1692, 6, 0);
  v64 = v146[9];
  if ( v63 < v64 )
  {
    v62 = v64 - v63;
    v64 = v63;
  }
  v65 = (void *)(v146[8] + v64);
  n = v62;
  s1 = v65;
  v66 = sub_2247130(&s1, asc_22E1692, 6, -1);
  v67 = n;
  v68 = v66 + 1;
  if ( v68 > n )
    v68 = n;
  v69 = n - v62 + v68;
  if ( v69 <= n )
    v67 = v69;
  v144 = v67;
  v147 = s1;
LABEL_5:
  v12 = (unsigned __int64)a5[1];
  if ( !v12 )
  {
    v13 = sub_2220490();
    v15 = v26;
    s1 = v158;
    v27 = (__m128i *)operator new(0x4Du);
    v158[0] = 76;
    s1 = v27;
    *v27 = _mm_load_si128((const __m128i *)&xmmword_23AB270);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB280);
    strcpy(v27[4].m128i_i8, "d by a comma");
    v27[1] = si128;
    v27[2] = _mm_load_si128((const __m128i *)&xmmword_23AB290);
    n = 76;
    v27[3] = _mm_load_si128((const __m128i *)&xmmword_23AB2A0);
    goto LABEL_13;
  }
  if ( v12 > 0x10 )
  {
    v13 = sub_2220490();
    v15 = v19;
    s1 = v158;
    v20 = (__m128i *)operator new(0x58u);
    v158[0] = 87;
    s1 = v20;
    *v20 = _mm_load_si128((const __m128i *)&xmmword_23AB270);
    v21 = _mm_load_si128((const __m128i *)&xmmword_23AB280);
    v20[5].m128i_i32[0] = 1952670066;
    v20[1] = v21;
    v22 = _mm_load_si128((const __m128i *)&xmmword_23AB2B0);
    v20[5].m128i_i16[2] = 29285;
    v20[2] = v22;
    v23 = _mm_load_si128((const __m128i *)&xmmword_23AB2C0);
    v20[5].m128i_i8[6] = 115;
    v20[3] = v23;
    v24 = _mm_load_si128((const __m128i *)&xmmword_23AB2D0);
    n = 87;
    v20[5].m128i_i8[7] = 0;
    v20[4] = v24;
    goto LABEL_13;
  }
  *a6 = 0;
  *a8 = 0;
  switch ( v11 )
  {
    case 0uLL:
LABEL_60:
      *a1 = 0;
      goto LABEL_15;
    case 7uLL:
      if ( *(_DWORD *)v10 != 1969710450 )
        goto LABEL_11;
      if ( v10[2] != 24940 )
        goto LABEL_11;
      v72 = (char **)&off_2BE8F40;
      v71 = (char **)&off_2BE8F40;
      if ( *((_BYTE *)v10 + 6) != 114 )
        goto LABEL_11;
      goto LABEL_58;
    case 8uLL:
      if ( *(_QWORD *)v10 != 0x6C6C69666F72657ALL )
      {
LABEL_11:
        v13 = sub_2220490();
        v15 = v14;
        s1 = v158;
        v16 = (__m128i *)operator new(0x36u);
        v158[0] = 53;
        s1 = v16;
        *v16 = _mm_load_si128((const __m128i *)&xmmword_23AB270);
        v17 = _mm_load_si128((const __m128i *)&xmmword_23AB2E0);
        v16[3].m128i_i32[0] = 1887007776;
        v16[1] = v17;
        v18 = _mm_load_si128((const __m128i *)&xmmword_23AB2F0);
        v16[3].m128i_i8[4] = 101;
        v16[2] = v18;
        n = 53;
        v16[3].m128i_i8[5] = 0;
        goto LABEL_13;
      }
      v75 = (char **)&off_2BE8F40;
      goto LABEL_77;
    case 0x10uLL:
      v70 = (char **)&off_2BE8F40;
      if ( !(*(_QWORD *)v10 ^ 0x5F676E6972747363LL | *((_QWORD *)v10 + 1) ^ 0x736C61726574696CLL) )
        goto LABEL_56;
      v75 = &off_2BE8FC0;
      if ( *(_QWORD *)v10 ^ 0x5F6C61726574696CLL | *((_QWORD *)v10 + 1) ^ 0x737265746E696F70LL )
        goto LABEL_11;
LABEL_77:
      v71 = v75 + 4;
      goto LABEL_57;
    case 0xEuLL:
      if ( *(_QWORD *)v10 != 0x696C5F6574796234LL
        || *((_DWORD *)v10 + 2) != 1634887028
        || (v76 = (char **)&off_2BE8F40, v10[6] != 29548) )
      {
        if ( *(_QWORD *)v10 == 0x696C5F6574796238LL && *((_DWORD *)v10 + 2) == 1634887028 && v10[6] == 29548 )
        {
          v71 = &off_2BE8FC0;
          v72 = &off_2BE8FC0 - 16;
          goto LABEL_58;
        }
        if ( *(_QWORD *)v10 == 0x74696E695F646F6DLL && *((_DWORD *)v10 + 2) == 1853187679 )
        {
          v75 = &off_2BE9040;
          if ( v10[6] == 29539 )
            goto LABEL_77;
        }
        if ( *(_QWORD *)v10 != 0x6D7265745F646F6DLL || *((_DWORD *)v10 + 2) != 1853187679 || v10[6] != 29539 )
          goto LABEL_11;
        v70 = &off_2BE9040;
LABEL_56:
        v71 = v70 + 8;
        goto LABEL_57;
      }
      break;
    case 0x18uLL:
      if ( *(_QWORD *)v10 ^ 0x797A616C5F6E6F6ELL | *((_QWORD *)v10 + 1) ^ 0x5F6C6F626D79735FLL
        || *((_QWORD *)v10 + 2) != 0x737265746E696F70LL )
      {
        goto LABEL_11;
      }
      v70 = &off_2BE8FC0;
      goto LABEL_56;
    case 0x14uLL:
      if ( *(_QWORD *)v10 ^ 0x6D79735F797A616CLL | *((_QWORD *)v10 + 1) ^ 0x6E696F705F6C6F62LL
        || (v76 = &off_2BE8FC0, *((_DWORD *)v10 + 4) != 1936876916) )
      {
        if ( *(_QWORD *)v10 ^ 0x6C5F646165726874LL | *((_QWORD *)v10 + 1) ^ 0x6765725F6C61636FLL )
          goto LABEL_11;
        v75 = (char **)&off_2BE9140;
        if ( *((_DWORD *)v10 + 4) != 1918987381 )
          goto LABEL_11;
        goto LABEL_77;
      }
      break;
    case 0xCuLL:
      if ( *(_QWORD *)v10 != 0x735F6C6F626D7973LL )
        goto LABEL_11;
      v71 = &off_2BE9040;
      v72 = &off_2BE9040 - 32;
      if ( *((_DWORD *)v10 + 2) != 1935832436 )
        goto LABEL_11;
      goto LABEL_58;
    case 9uLL:
      if ( *(_QWORD *)v10 != 0x656373656C616F63LL )
        goto LABEL_11;
      v76 = &off_2BE9040;
      if ( *((_BYTE *)v10 + 8) != 100 )
        goto LABEL_11;
      break;
    default:
      switch ( v11 )
      {
        case 0xBuLL:
          if ( *(_QWORD *)v10 != 0x736F707265746E69LL )
            goto LABEL_11;
          if ( v10[4] != 28265 )
            goto LABEL_11;
          v75 = (char **)&off_2BE90C0;
          if ( *((_BYTE *)v10 + 10) != 103 )
            goto LABEL_11;
          goto LABEL_77;
        case 0xFuLL:
          if ( *(_QWORD *)v10 != 0x6C5F657479623631LL )
            goto LABEL_11;
          if ( *((_DWORD *)v10 + 2) != 1919251561 )
            goto LABEL_11;
          if ( v10[6] != 27745 )
            goto LABEL_11;
          v70 = (char **)&off_2BE90C0;
          if ( *((_BYTE *)v10 + 14) != 115 )
            goto LABEL_11;
          goto LABEL_56;
        case 0x15uLL:
          if ( *(_QWORD *)v10 ^ 0x6C5F646165726874LL | *((_QWORD *)v10 + 1) ^ 0x72657A5F6C61636FLL )
            goto LABEL_11;
          if ( *((_DWORD *)v10 + 4) != 1818846831 )
            goto LABEL_11;
          v70 = (char **)&off_2BE9140;
          if ( *((_BYTE *)v10 + 20) != 108 )
            goto LABEL_11;
          goto LABEL_56;
      }
      if ( v11 != 22 )
      {
        if ( v11 == 30 )
        {
          if ( *(_QWORD *)v10 ^ 0x6C5F646165726874LL | *((_QWORD *)v10 + 1) ^ 0x7261765F6C61636FLL
            || *((_QWORD *)v10 + 2) != 0x6F705F656C626169LL
            || *((_DWORD *)v10 + 6) != 1702129257
            || v10[14] != 29554 )
          {
            goto LABEL_11;
          }
          v71 = &off_2BE91C0;
          v72 = &off_2BE91C0 - 80;
        }
        else
        {
          if ( v11 != 35
            || *(_QWORD *)v10 ^ 0x6C5F646165726874LL | *((_QWORD *)v10 + 1) ^ 0x696E695F6C61636FLL
            || *((_QWORD *)v10 + 2) ^ 0x6974636E75665F74LL | *((_QWORD *)v10 + 3) ^ 0x746E696F705F6E6FLL
            || v10[16] != 29285
            || *((_BYTE *)v10 + 34) != 115 )
          {
            goto LABEL_11;
          }
          v71 = &off_2BE91E0;
          v72 = &off_2BE91E0 - 84;
        }
        goto LABEL_58;
      }
      if ( *(_QWORD *)v10 ^ 0x6C5F646165726874LL | *((_QWORD *)v10 + 1) ^ 0x7261765F6C61636FLL
        || *((_DWORD *)v10 + 4) != 1818386793
        || v10[10] != 29541 )
      {
        goto LABEL_11;
      }
      v76 = (char **)&off_2BE9140;
      break;
  }
  v71 = v76 + 12;
LABEL_57:
  v72 = (char **)&off_2BE8F40;
  if ( v71 == (char **)&unk_2BE9220 )
    goto LABEL_11;
LABEL_58:
  v73 = ((char *)v71 - (char *)v72) >> 5;
  v74 = v152 == 0;
  *a6 = v73;
  *a7 = 1;
  if ( v74 )
  {
    if ( (_DWORD)v73 != 8 )
      goto LABEL_60;
    v13 = sub_2220490();
    v15 = v124;
    s1 = v158;
    v125 = (__m128i *)operator new(0x4Au);
    v158[0] = 73;
    s1 = v125;
    *v125 = _mm_load_si128((const __m128i *)&xmmword_23AB270);
    v126 = _mm_load_si128((const __m128i *)&xmmword_23AB300);
    strcpy(v125[4].m128i_i8, "specifier");
    v125[1] = v126;
    v125[2] = _mm_load_si128((const __m128i *)&xmmword_23AB310);
    n = 73;
    v125[3] = _mm_load_si128((const __m128i *)&xmmword_23AB320);
LABEL_13:
    sub_22205D0(a1, &s1, v13, v15);
    if ( s1 != v158 )
      operator delete(s1);
    goto LABEL_15;
  }
  v153 = v155;
  v154 = 0x100000000LL;
  sub_22476F0(&v151, &v153, 43, 0xFFFFFFFFLL, 0);
  v77 = (char *)v153;
  v148 = (char *)v153 + 16 * (unsigned int)v154;
  if ( v153 == v148 )
  {
    v100 = *a6;
  }
  else
  {
    while ( 2 )
    {
      for ( i = (char *)&unk_2BE8D80; ; i += 160 )
      {
        v97 = sub_2246FB0(v77, asc_22E1692, 6, 0);
        v98 = *((_QWORD *)v77 + 1);
        v99 = 0;
        if ( v97 < v98 )
        {
          v99 = v98 - v97;
          v98 = v97;
        }
        s1 = (void *)(*(_QWORD *)v77 + v98);
        n = v99;
        v79 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
        if ( v79 > n )
          v79 = n;
        v80 = n - v99 + v79;
        if ( v80 > n )
          v80 = n;
        if ( *((_QWORD *)i + 2) == v80 && (!v80 || !memcmp(s1, *((const void **)i + 1), v80)) )
          goto LABEL_165;
        v81 = sub_2246FB0(v77, asc_22E1692, 6, 0);
        v82 = *((_QWORD *)v77 + 1);
        v83 = i + 40;
        v84 = 0;
        if ( v81 < v82 )
        {
          v84 = v82 - v81;
          v82 = v81;
        }
        s1 = (void *)(*(_QWORD *)v77 + v82);
        n = v84;
        v85 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
        if ( v85 > n )
          v85 = n;
        v86 = n - v84 + v85;
        if ( v86 > n )
          v86 = n;
        if ( *((_QWORD *)i + 7) == v86 && (!v86 || !memcmp(s1, *((const void **)i + 6), v86)) )
          goto LABEL_164;
        v87 = sub_2246FB0(v77, asc_22E1692, 6, 0);
        v88 = *((_QWORD *)v77 + 1);
        v83 = i + 80;
        v89 = 0;
        if ( v87 < v88 )
        {
          v89 = v88 - v87;
          v88 = v87;
        }
        s1 = (void *)(*(_QWORD *)v77 + v88);
        n = v89;
        v90 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
        if ( v90 > n )
          v90 = n;
        v91 = n - v89 + v90;
        if ( v91 > n )
          v91 = n;
        if ( *((_QWORD *)i + 12) == v91 && (!v91 || !memcmp(s1, *((const void **)i + 11), v91)) )
          goto LABEL_164;
        v92 = sub_2246FB0(v77, asc_22E1692, 6, 0);
        v93 = *((_QWORD *)v77 + 1);
        v83 = i + 120;
        v94 = 0;
        if ( v92 < v93 )
        {
          v94 = v93 - v92;
          v93 = v92;
        }
        s1 = (void *)(*(_QWORD *)v77 + v93);
        n = v94;
        v95 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
        if ( v95 > n )
          v95 = n;
        v96 = n - v94 + v95;
        if ( v96 > n )
          v96 = n;
        if ( *((_QWORD *)i + 17) == v96 && (!v96 || !memcmp(s1, *((const void **)i + 16), v96)) )
        {
LABEL_164:
          i = v83;
          goto LABEL_165;
        }
        if ( i + 160 == (char *)&unk_2BE8EC0 )
          break;
      }
      v101 = sub_2246FB0(v77, asc_22E1692, 6, 0);
      v102 = *((_QWORD *)v77 + 1);
      v103 = 0;
      if ( v101 < v102 )
      {
        v103 = v102 - v101;
        v102 = v101;
      }
      v149 = v103;
      s1 = (void *)(*(_QWORD *)v77 + v102);
      n = v103;
      v104 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
      if ( v104 > n )
        v104 = n;
      v105 = v104 + n - v149;
      if ( v105 > n )
        v105 = n;
      if ( *((_QWORD *)i + 22) == v105 && (!v105 || !memcmp(s1, *((const void **)i + 21), v105)) )
      {
        i += 160;
        goto LABEL_166;
      }
      v106 = i + 200;
      v107 = 0;
      v108 = sub_2246FB0(v77, asc_22E1692, 6, 0);
      v109 = *((_QWORD *)v77 + 1);
      if ( v108 < v109 )
      {
        v107 = v109 - v108;
        v109 = v108;
      }
      s1 = (void *)(*(_QWORD *)v77 + v109);
      n = v107;
      v110 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
      if ( v110 > n )
        v110 = n;
      v111 = v110 + n - v107;
      if ( v111 > n )
        v111 = n;
      if ( *((_QWORD *)i + 27) != v111 || v111 && memcmp(s1, *((const void **)i + 26), v111) )
      {
        v112 = sub_2246FB0(v77, asc_22E1692, 6, 0);
        v113 = *((_QWORD *)v77 + 1);
        v106 = i + 240;
        v114 = 0;
        if ( v112 < v113 )
        {
          v114 = v113 - v112;
          v113 = v112;
        }
        s1 = (void *)(*(_QWORD *)v77 + v113);
        n = v114;
        v115 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
        if ( v115 > n )
          v115 = n;
        v116 = v115 + n - v114;
        if ( v116 > n )
          v116 = n;
        if ( *((_QWORD *)i + 32) != v116 || v116 && memcmp(s1, *((const void **)i + 31), v116) )
        {
LABEL_197:
          v117 = sub_2220490();
          s1 = v158;
          v118 = v117;
          v120 = v119;
          v121 = (__m128i *)operator new(0x2Fu);
          v122 = _mm_load_si128((const __m128i *)&xmmword_23AB270);
          v158[0] = 46;
          strcpy(v121[2].m128i_i8, "alid attribute");
          *v121 = v122;
          s1 = v121;
          n = 46;
          v121[1] = _mm_load_si128((const __m128i *)&xmmword_23AB330);
          goto LABEL_198;
        }
      }
      i = v106;
LABEL_165:
      if ( i == (char *)&unk_2BE8F38 )
        goto LABEL_197;
LABEL_166:
      v77 += 16;
      v100 = *(_DWORD *)i | *a6;
      *a6 = v100;
      if ( v148 != v77 )
        continue;
      break;
    }
  }
  if ( v144 )
  {
    if ( (_BYTE)v100 == 8 )
    {
      if ( !(unsigned __int8)sub_2247970(v147, v144, 0, &s1) && s1 == (void *)(unsigned int)s1 )
      {
        *a8 = (_DWORD)s1;
        goto LABEL_169;
      }
      v135 = sub_2220490();
      v120 = v136;
      v118 = v135;
      s1 = v158;
      v137 = (__m128i *)operator new(0x33u);
      v158[0] = 50;
      s1 = v137;
      *v137 = _mm_load_si128((const __m128i *)&xmmword_23AB270);
      v138 = _mm_load_si128((const __m128i *)&xmmword_23AB390);
      strcpy(v137[3].m128i_i8, "ze");
      v137[1] = v138;
      n = 50;
      v137[2] = _mm_load_si128((const __m128i *)&xmmword_23AB3A0);
LABEL_198:
      sub_22205D0(a1, &s1, v118, v120);
      v123 = s1;
      if ( s1 == v158 )
        goto LABEL_170;
      goto LABEL_199;
    }
    v127 = sub_2220490();
    v129 = v128;
    s1 = v158;
    v130 = (__m128i *)operator new(0x68u);
    v158[0] = 103;
    s1 = v130;
    *v130 = _mm_load_si128((const __m128i *)&xmmword_23AB270);
    v131 = _mm_load_si128((const __m128i *)&xmmword_23AB340);
    v130[6].m128i_i32[0] = 1970565983;
    v130[1] = v131;
    v132 = _mm_load_si128((const __m128i *)&xmmword_23AB350);
    v130[6].m128i_i16[2] = 29538;
    v130[2] = v132;
    v133 = _mm_load_si128((const __m128i *)&xmmword_23AB360);
    v130[6].m128i_i8[6] = 39;
    v130[3] = v133;
    n = 103;
    v130[4] = _mm_load_si128((const __m128i *)&xmmword_23AB370);
    v134 = _mm_load_si128((const __m128i *)&xmmword_23AB380);
    v130[6].m128i_i8[7] = 0;
    v130[5] = v134;
  }
  else
  {
    if ( v100 != 8 )
    {
LABEL_169:
      *a1 = 0;
      goto LABEL_170;
    }
    v127 = sub_2220490();
    v129 = v139;
    s1 = v158;
    v140 = (__m128i *)operator new(0x4Au);
    v158[0] = 73;
    s1 = v140;
    *v140 = _mm_load_si128((const __m128i *)&xmmword_23AB270);
    v141 = _mm_load_si128((const __m128i *)&xmmword_23AB300);
    strcpy(v140[4].m128i_i8, "specifier");
    v140[1] = v141;
    v140[2] = _mm_load_si128((const __m128i *)&xmmword_23AB310);
    n = 73;
    v140[3] = _mm_load_si128((const __m128i *)&xmmword_23AB320);
  }
  sub_22205D0(a1, &s1, v127, v129);
  v123 = s1;
  if ( s1 != v158 )
LABEL_199:
    operator delete(v123);
LABEL_170:
  if ( v153 != v155 )
    free(v153);
LABEL_15:
  if ( ptr != v161 )
    free(ptr);
  return a1;
}
