__int64 __fastcall sub_14970(__int64 a1, __int64 a2, const char *a3, char a4, double a5)
{
  __int64 v5; // r13
  const char *v6; // rax
  unsigned __int64 v7; // r13
  size_t v8; // r12
  __int64 v9; // rax
  char *v10; // r12
  unsigned int utf8_char; // eax
  const char *v12; // rdx
  unsigned int v13; // r15d
  signed __int64 v15; // r8
  char *v16; // r14
  char *v17; // rbx
  unsigned int v18; // eax
  signed __int64 v19; // r8
  unsigned __int64 v20; // r12
  char *v21; // rax
  char *v22; // r8
  __int64 v23; // r14
  size_t v24; // r13
  char *v25; // r8
  int v26; // eax
  __int64 v27; // rax
  char v28; // al
  __int64 v29; // rbx
  __m128i si128; // xmm0
  char v31; // r12
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rax
  void *v37; // r12
  __int64 v38; // rdi
  size_t v39; // r14
  __int64 v40; // r14
  int v41; // eax
  __int64 v42; // rdx
  char *v43; // rcx
  const char *v44; // rsi
  int v45; // eax
  char *v46; // r8
  size_t v47; // rdx
  char *v48; // rbx
  char *v49; // rdx
  size_t v50; // r13
  size_t v51; // r14
  char *v52; // rsi
  int v53; // eax
  __int64 v54; // rdi
  __int64 v55; // r13
  __int64 v56; // r12
  _QWORD *v57; // rbx
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdi
  __int64 v61; // r14
  __int64 v62; // r13
  __int64 v63; // r12
  __int64 *v64; // rbx
  __int64 v65; // rdi
  __int64 v66; // rdi
  const char *v67; // rsi
  __m128i v68; // xmm1
  __int64 v69; // rcx
  __m128 v70; // xmm0
  int v71; // eax
  int v72; // eax
  __int64 v73; // r13
  __int64 v74; // r12
  __int64 v75; // r15
  __int64 *v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rdi
  char v79; // al
  char *v80; // [rsp+8h] [rbp-218h]
  char *v81; // [rsp+8h] [rbp-218h]
  char *v82; // [rsp+8h] [rbp-218h]
  unsigned __int64 v83; // [rsp+10h] [rbp-210h]
  __int64 v84; // [rsp+18h] [rbp-208h]
  char *v85; // [rsp+18h] [rbp-208h]
  char *v86; // [rsp+18h] [rbp-208h]
  char *v87; // [rsp+18h] [rbp-208h]
  char *v88; // [rsp+18h] [rbp-208h]
  __int64 v91; // [rsp+30h] [rbp-1F0h]
  unsigned __int64 v93; // [rsp+40h] [rbp-1E0h]
  __int64 v94; // [rsp+40h] [rbp-1E0h]
  const char *v95; // [rsp+48h] [rbp-1D8h]
  char *s1[2]; // [rsp+50h] [rbp-1D0h] BYREF
  signed __int64 v97; // [rsp+68h] [rbp-1B8h] BYREF
  __int64 v98; // [rsp+70h] [rbp-1B0h] BYREF
  __int64 v99; // [rsp+78h] [rbp-1A8h] BYREF
  __int64 v100; // [rsp+80h] [rbp-1A0h] BYREF
  __m128i v101; // [rsp+88h] [rbp-198h] BYREF
  char *s2; // [rsp+A0h] [rbp-180h] BYREF
  __int128 v103; // [rsp+A8h] [rbp-178h]
  char *v104; // [rsp+C0h] [rbp-160h] BYREF
  __int128 v105; // [rsp+C8h] [rbp-158h]
  char *v106; // [rsp+E0h] [rbp-140h] BYREF
  __int128 v107; // [rsp+E8h] [rbp-138h]
  __int64 v108; // [rsp+100h] [rbp-120h] BYREF
  __int128 v109; // [rsp+108h] [rbp-118h]
  __int128 v110; // [rsp+120h] [rbp-100h] BYREF
  __int64 v111; // [rsp+130h] [rbp-F0h] BYREF
  int v112; // [rsp+138h] [rbp-E8h]
  __int16 v113; // [rsp+13Ch] [rbp-E4h]
  void *v114; // [rsp+140h] [rbp-E0h] BYREF
  __m128i v115; // [rsp+148h] [rbp-D8h] BYREF
  void *v116; // [rsp+158h] [rbp-C8h] BYREF
  __int128 v117; // [rsp+160h] [rbp-C0h]
  int v118; // [rsp+170h] [rbp-B0h]
  char v119; // [rsp+174h] [rbp-ACh]
  char *i; // [rsp+180h] [rbp-A0h] BYREF
  __int128 v121; // [rsp+188h] [rbp-98h]
  __int64 v122; // [rsp+198h] [rbp-88h]
  __int64 v123; // [rsp+1A0h] [rbp-80h] BYREF
  __int64 v124; // [rsp+1A8h] [rbp-78h] BYREF
  __int128 v125; // [rsp+1B0h] [rbp-70h]
  __int64 v126; // [rsp+1C0h] [rbp-60h]
  __m128i v127; // [rsp+1C8h] [rbp-58h] BYREF
  char v128; // [rsp+1D8h] [rbp-48h]
  unsigned __int64 v129; // [rsp+1E8h] [rbp-38h]

  v5 = *(_QWORD *)(a2 + 8);
  v129 = __readfsqword(0x28u);
  v6 = *(const char **)a2;
  v97 = 0;
  v7 = (v5 == 0) + v5 - 1;
  v95 = v6;
  if ( !(_BYTE)byte_28718 && __cxa_guard_acquire(&byte_28718) )
  {
    a5 = 0.0;
    xmmword_28728 = 0;
    qword_28720 = nullptr;
    qword_28720 = (char *)qvector_reserve(&qword_28720, 0, 15, 1);
    *(_QWORD *)&xmmword_28728 = 15;
    strcpy(qword_28720, "(extension in ");
    __cxa_atexit((void (*)(void *))sub_72D0, &qword_28720, &off_274A0);
    __cxa_guard_release(&byte_28718);
  }
  v8 = xmmword_28728;
  v93 = v97;
  s1[0] = (char *)&v95[v7];
  if ( !(_QWORD)xmmword_28728
    || (v8 = xmmword_28728 - 1, !qword_28720)
    || (_QWORD)xmmword_28728 == 1
    || (v9 = *(_QWORD *)(a2 + 8)) != 0 && v9 - 1 >= v8 && !strncmp(*(const char **)a2, qword_28720, v8) )
  {
    v10 = (char *)&v95[v8 + v97];
    for ( i = v10; ; v10 = i )
    {
      if ( v10 >= s1[0] )
        goto LABEL_13;
      utf8_char = get_utf8_char(&i);
      if ( utf8_char == -1 || !(unsigned __int8)is_valid_cp(utf8_char, 2, 0) )
        break;
    }
    v15 = v10 - v95;
    if ( v7 == v10 - v95 || *v10 != 41 || v10[1] != 58 )
    {
LABEL_13:
      v12 = "function";
      if ( a4 )
        v12 = "allocating constructor";
      v13 = 0;
      sub_CB10((__int64)"%a: could not parse the %s '%s' (at position %u)\n", a5, a3, v12, (_DWORD)v95);
      return v13;
    }
    v93 = v15 + 2;
    v97 = v15 + 2;
  }
  v16 = (char *)&v95[v93];
  i = (char *)&v95[v93];
  if ( &v95[v93] >= s1[0] )
    goto LABEL_13;
  while ( 1 )
  {
    v17 = strchr(".", *v16);
    if ( !v17 )
      break;
    i = ++v16;
LABEL_24:
    if ( v16 >= s1[0] )
      goto LABEL_13;
  }
  v18 = get_utf8_char(&i);
  if ( v18 != -1 && (unsigned __int8)is_valid_cp(v18, 2, 0) )
  {
    v16 = i;
    goto LABEL_24;
  }
  v19 = v16 - v95;
  if ( v7 == v16 - v95 || *v16 != 40 )
    goto LABEL_13;
  a5 = 0.0;
  s1[0] = (char *)(v16 - v95);
  v83 = v19 + 1;
  v100 = 0;
  v101 = 0;
  v97 = sub_7E50((__int64)v95, v19 + 1, v7, 41);
  v20 = v97;
  if ( v97 == v7 )
  {
    v46 = (char *)v7;
    goto LABEL_79;
  }
  v103 = 0;
  s2 = nullptr;
  v21 = (char *)qvector_reserve(&s2, 0, 6, 1);
  a5 = 0.0;
  s2 = v21;
  *(_QWORD *)&v103 = 6;
  *(_DWORD *)v21 = 1043144745;
  v21[4] = 32;
  s2[5] = 0;
  v104 = nullptr;
  v105 = 0;
  v104 = (char *)qvector_reserve(&v104, 0, 13, 1);
  v22 = s1[0];
  *(_QWORD *)&v105 = 13;
  strcpy(v104, ") throws -> ");
  if ( !(_QWORD)v103 )
  {
    v23 = v20;
    goto LABEL_36;
  }
  v80 = v104;
  v85 = s1[0];
  s1[0] = (char *)&v95[v20];
  v40 = v103 - 1;
  v41 = strncmp(&v95[v20], s2, v103 - 1);
  v22 = v85;
  v43 = v80;
  if ( v41 )
  {
    if ( (_QWORD)v105 )
    {
      v44 = v80;
      v81 = v85;
      v86 = v43;
      v45 = strncmp(s1[0], v44, v105 - 1);
      v43 = v86;
      v22 = v81;
      if ( v45 )
      {
        v46 = (char *)v20;
        goto LABEL_72;
      }
    }
    v87 = v22;
    sub_1CFA0(a1, &v100, v42, v43);
    v22 = v87;
    v23 = v20;
    if ( (_QWORD)v105 )
    {
      v23 = v20 + v105 - 1;
      s1[0] = (char *)&v95[v23];
    }
  }
  else
  {
    v23 = v20 + v40;
LABEL_36:
    s1[0] = (char *)&v95[v23];
  }
  a5 = 0.0;
  v97 = v23;
  v106 = nullptr;
  v107 = 0;
  v24 = v7 - v23;
  if ( v24 )
  {
    v47 = v24 + 1;
    if ( v24 != -1 )
    {
      v82 = v22;
      v106 = (char *)qvector_reserve(&v106, 0, v47, 1);
      v22 = v82;
      v17 = v106;
      v47 = v24 + 1;
    }
    *(_QWORD *)&v107 = v47;
    v88 = v22;
    memmove(v17, s1[0], v24);
    v22 = v88;
    v106[v24] = 0;
    if ( (_QWORD)v107 )
    {
      v48 = v106;
      if ( *v106 == 91 && (_QWORD)v107 != 1 && v106[(_QWORD)v107 - 2] == 93 )
      {
LABEL_104:
        if ( v48 )
        {
          *(_QWORD *)&v107 = 0;
          qfree(v48);
        }
        v43 = v104;
        v46 = (char *)v23;
LABEL_72:
        if ( v43 )
        {
          s1[0] = v46;
          *(_QWORD *)&v105 = 0;
          qfree(v43);
          v46 = s1[0];
        }
        if ( s2 )
        {
          s1[0] = v46;
          *(_QWORD *)&v103 = 0;
          qfree(s2);
          v46 = s1[0];
        }
LABEL_79:
        if ( v100 )
        {
          s1[0] = v46;
          v101.m128i_i64[0] = 0;
          qfree(v100);
        }
        goto LABEL_13;
      }
    }
  }
  s1[0] = v22;
  v84 = sub_14470(a1, &v106);
  v25 = s1[0];
  if ( *(_DWORD *)(v84 + 68) != 1 )
  {
    sub_11140((__int64 *)&i, v84);
    v49 = (char *)::s1;
    if ( (_QWORD)v107 )
      v49 = v106;
    sub_CB10((__int64)"%a: could not set the function type because its return type '%s' %s\n", 0.0, a3, v49);
    if ( i )
    {
      *(_QWORD *)&v121 = 0;
      qfree(i);
    }
    goto LABEL_92;
  }
  if ( !*(_BYTE *)(v84 + 24) )
  {
    v52 = (char *)::s1;
    if ( (_QWORD)v107 )
      v52 = v106;
    sub_CB10((__int64)"internal: no type info for '%s'\n", v52);
LABEL_92:
    v13 = 0;
    goto LABEL_93;
  }
  if ( !a4 )
    goto LABEL_50;
  if ( (unsigned __int64)v107 > 1 )
  {
    v48 = v106;
    v50 = v107 - 2;
    if ( v106[(_QWORD)v107 - 2] != 63 )
      v50 = v107 - 1;
    if ( &s1[0][-v93] < (char *)v50 )
      goto LABEL_104;
    v53 = strncmp(&v95[v93], v106, v50);
    v25 = s1[0];
    if ( v53 )
      goto LABEL_104;
    v93 += v50;
  }
  v97 = v93;
  if ( !(_BYTE)byte_286F8 )
  {
    s1[0] = v25;
    v26 = __cxa_guard_acquire(&byte_286F8);
    v25 = s1[0];
    if ( v26 )
    {
      sub_B940((__int64)&qword_28700, ".init");
      __cxa_atexit((void (*)(void *))sub_72D0, &qword_28700, &off_274A0);
      __cxa_guard_release(&byte_286F8);
      v25 = s1[0];
    }
  }
  if ( !(_BYTE)byte_286D8 )
  {
    s1[0] = v25;
    v71 = __cxa_guard_acquire(&byte_286D8);
    v25 = s1[0];
    if ( v71 )
    {
      sub_B940((__int64)&qword_286E0, ".__allocating_init");
      __cxa_atexit((void (*)(void *))sub_72D0, &qword_286E0, &off_274A0);
      __cxa_guard_release(&byte_286D8);
      v25 = s1[0];
    }
  }
  v23 = v97;
  if ( !qword_28708 )
  {
    if ( v25 == (char *)v97 )
      goto LABEL_50;
    v27 = qword_286E8;
    if ( !qword_286E8 )
      goto LABEL_116;
    goto LABEL_114;
  }
  if ( (char *)(qword_28708 - 1 + v97) != v25
    || (s1[0] = v25, v72 = strncmp(&v95[v97], qword_28700, qword_28708 - 1), v25 = s1[0], v72) )
  {
    v27 = qword_286E8;
    if ( !qword_286E8 )
    {
      if ( v25 == (char *)v97 )
        goto LABEL_50;
      goto LABEL_116;
    }
LABEL_114:
    if ( (char *)(v27 - 1 + v97) == v25 && !strncmp(&v95[v97], qword_286E0, v27 - 1) )
      goto LABEL_50;
LABEL_116:
    v48 = v106;
    goto LABEL_104;
  }
LABEL_50:
  a5 = 0.0;
  v109 = 0;
  v97 = v83;
  v108 = 0;
  v28 = sub_8690(&v108, (unsigned __int64 *)&v97, (__int64)v95, v20);
  v29 = v108;
  if ( !v28 )
  {
    if ( v108 )
    {
      v73 = v109;
      v74 = 0;
      v75 = 0;
      if ( (_QWORD)v109 )
      {
        do
        {
          v76 = (__int64 *)(v74 + v29);
          v77 = v76[3];
          if ( v77 )
          {
            v76[4] = 0;
            qfree(v77);
          }
          v78 = *v76;
          if ( *v76 )
          {
            v76[1] = 0;
            qfree(v78);
          }
          v29 = v108;
          v74 += 56;
          ++v75;
        }
        while ( v73 != v75 );
      }
      *(_QWORD *)&v109 = 0;
      qfree(v29);
    }
    v48 = v106;
    v23 = v97;
    goto LABEL_104;
  }
  si128.m128i_i64[0] = 0;
  i = nullptr;
  v122 = 0;
  v123 = 0;
  v124 = 0;
  v126 = 0;
  v128 = 16;
  v91 = v108 + 56 * v109;
  v121 = 0;
  v125 = 0;
  v127 = 0;
  if ( v91 == v108 )
  {
    v79 = -112;
LABEL_148:
    v128 = v79;
    *(_QWORD *)&v110 = 0;
    HIDWORD(v122) = 0;
    copy_tinfo_t(&v123, v84 + 24);
    if ( v101.m128i_i64[0] )
    {
      v68 = _mm_loadu_si128(&v127);
      v69 = v100;
      LODWORD(v122) = v122 | 1;
      v70 = _mm_loadh_ps((const double *)&v101.m128i_i64[1]);
      v100 = v126;
      v126 = v69;
      v127 = (__m128i)v70;
      v101 = v68;
    }
    if ( (unsigned __int8)create_tinfo(&v110, 12, 12, &i) )
    {
      lower_type(0, &v110, 0, 0);
      v13 = apply_tinfo(a3, &v110, 3);
      if ( (_BYTE)v13 )
        goto LABEL_152;
      v115 = 0;
      v114 = nullptr;
      if ( (unsigned __int8)print_tinfo(&v114, 0, 0, 0, 0, &v110, 0, 0) )
        sub_CB10((__int64)"%a: could not apply the type '%s'\n", 0.0, a3);
      else
        sub_CB10((__int64)"%a: could not apply the type for '%s'\n", 0.0, a3);
      if ( v114 )
      {
        v115.m128i_i64[0] = 0;
        qfree(v114);
      }
    }
    else
    {
      sub_CB10((__int64)"could not create a function type for '%s'\n", v95);
    }
    v13 = 0;
LABEL_152:
    clear_tinfo_t();
  }
  else
  {
    while ( 1 )
    {
      v114 = nullptr;
      v115 = 0;
      if ( *(_QWORD *)(v29 + 8) )
      {
        v39 = *(_QWORD *)(v29 + 8);
        v114 = (void *)qalloc_or_throw(v39);
        v115.m128i_i64[1] = v39;
        memcpy(v114, *(const void **)v29, v39);
        v115.m128i_i64[0] = v39;
      }
      v116 = nullptr;
      v117 = 0;
      if ( *(_QWORD *)(v29 + 32) )
      {
        v51 = *(_QWORD *)(v29 + 32);
        v116 = (void *)qalloc_or_throw(v51);
        *((_QWORD *)&v117 + 1) = v51;
        memcpy(v116, *(const void **)(v29 + 24), v51);
        *(_QWORD *)&v117 = v51;
      }
      v31 = *(_BYTE *)(v29 + 52);
      v118 = *(_DWORD *)(v29 + 48);
      v119 = v31;
      v32 = sub_14470(a1, &v116);
      v33 = v32;
      if ( *(_DWORD *)(v32 + 68) != 1 )
        break;
      if ( !*(_BYTE *)(v32 + 24) )
      {
        v67 = ::s1;
        if ( (_QWORD)v117 )
          v67 = (const char *)v116;
        sub_CB10((__int64)"internal: no type info for '%s'\n", v67);
        goto LABEL_119;
      }
      v34 = v121;
      v35 = (__int64)i;
      if ( *((_QWORD *)&v121 + 1) < (unsigned __int64)(v121 + 1) )
      {
        i = (char *)qvector_reserve(&i, i, v121 + 1, 80);
        v34 = v121;
        v35 = (__int64)i;
      }
      v36 = v35 + 80 * v34;
      *(_DWORD *)v36 = 0;
      *(_QWORD *)(v36 + 8) = 0;
      *(_QWORD *)(v36 + 16) = 0;
      *(_QWORD *)(v36 + 40) = 0;
      *(_QWORD *)(v36 + 64) = 0;
      *(_DWORD *)(v36 + 72) = 0;
      *(_OWORD *)(v36 + 24) = 0;
      *(_OWORD *)(v36 + 48) = 0;
      v94 = v36;
      *(_QWORD *)&v121 = v121 + 1;
      s1[0] = (char *)(v36 + 64);
      copy_tinfo_t(v36 + 64, v33 + 24);
      if ( v31 )
      {
        v98 = 0;
        v99 = 0;
        v110 = 0;
        copy_tinfo_t((char *)&v110 + 8, &v99);
        v111 = 0;
        copy_tinfo_t(&v111, &v98);
        v112 = 0;
        v113 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t(&v110, s1[0]);
        create_tinfo(s1[0], 10, 10, &v110);
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      v37 = v114;
      v114 = nullptr;
      si128 = _mm_loadu_si128(&v115);
      v115 = 0;
      v38 = *(_QWORD *)(v94 + 16);
      if ( v38 )
      {
        *(_QWORD *)(v94 + 24) = 0;
        *(__m128i *)s1 = si128;
        qfree(v38);
        si128 = _mm_load_si128((const __m128i *)s1);
      }
      *(_QWORD *)(v94 + 16) = v37;
      *(__m128i *)(v94 + 24) = si128;
      if ( v116 )
        qfree(v116);
      v29 += 56;
      if ( v91 == v29 )
      {
        v79 = v128 & 0xF | 0x90;
        goto LABEL_148;
      }
    }
    sub_10F10((__int64)&v110, v32, (__int64)&v116);
    sub_CB10((__int64)"%a: could not set the function type with an argument of %s\n", *(double *)si128.m128i_i64, a3);
    if ( (_QWORD)v110 )
    {
      *((_QWORD *)&v110 + 1) = 0;
      qfree(v110);
    }
LABEL_119:
    if ( v116 )
      qfree(v116);
    if ( v114 )
      qfree(v114);
    v13 = 0;
  }
  if ( v126 )
  {
    v127.m128i_i64[0] = 0;
    qfree(v126);
  }
  cleanup_argloc(&v124);
  clear_tinfo_t();
  v54 = (__int64)i;
  if ( i )
  {
    v55 = v121;
    if ( (_QWORD)v121 )
    {
      v56 = 0;
      do
      {
        v57 = (_QWORD *)(v54 + 80 * v56);
        clear_tinfo_t();
        v58 = v57[5];
        if ( v58 )
        {
          v57[6] = 0;
          qfree(v58);
        }
        v59 = v57[2];
        if ( v59 )
        {
          v57[3] = 0;
          qfree(v59);
        }
        ++v56;
        cleanup_argloc(v57);
        v54 = (__int64)i;
      }
      while ( v55 != v56 );
    }
    *(_QWORD *)&v121 = 0;
    qfree(v54);
  }
  v60 = v108;
  if ( v108 )
  {
    v61 = v109;
    if ( (_QWORD)v109 )
    {
      v62 = 0;
      v63 = 0;
      do
      {
        v64 = (__int64 *)(v60 + v62);
        v65 = *(_QWORD *)(v60 + v62 + 24);
        if ( v65 )
        {
          v64[4] = 0;
          qfree(v65);
        }
        v66 = *v64;
        if ( *v64 )
        {
          v64[1] = 0;
          qfree(v66);
        }
        ++v63;
        v60 = v108;
        v62 += 56;
      }
      while ( v61 != v63 );
    }
    *(_QWORD *)&v109 = 0;
    qfree(v60);
  }
LABEL_93:
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree(v106);
  }
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree(v104);
  }
  if ( s2 )
  {
    *(_QWORD *)&v103 = 0;
    qfree(s2);
  }
  if ( v100 )
  {
    v101.m128i_i64[0] = 0;
    qfree(v100);
  }
  return v13;
}
