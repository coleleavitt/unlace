__int64 __fastcall sub_4616E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v7; // r12
  __int64 *v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r14
  bool v13; // al
  bool v14; // dl
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rbp
  int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // esi
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  unsigned int i; // r15d
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  int v29; // r14d
  char v30; // cl
  __int64 v31; // r14
  char v32; // al
  __int64 v33; // rdi
  __int64 result; // rax
  unsigned int v35; // r15d
  _DWORD *ph; // rax
  int v37; // edx
  int v38; // edx
  _DWORD *v39; // rax
  int v40; // edx
  int v41; // edx
  int v42; // esi
  char v43; // al
  char v44; // al
  char *v45; // rsi
  char *v46; // rdi
  char *v47; // rsi
  char *v48; // rdi
  int v49; // r15d
  char v50; // cl
  __int64 v51; // r15
  char v52; // al
  char v53; // al
  char v54; // al
  int *v55; // rbx
  int *v56; // rax
  int *v57; // rax
  int v58; // edx
  _BOOL8 v59; // rax
  unsigned __int64 v60; // rbp
  __int64 v61; // rbx
  const char *v62; // rsi
  const char *v63; // rdi
  char v64; // al
  __int64 v65; // rax
  int *v66; // rbp
  _BOOL8 v67; // r13
  void *v68; // rdi
  _BOOL8 v69; // rax
  __int64 v70; // rbp
  void *v71; // rdi
  int v72; // [rsp+0h] [rbp-468h]
  __int64 v73; // [rsp+0h] [rbp-468h]
  __int64 v74; // [rsp+0h] [rbp-468h]
  __int64 v75; // [rsp+0h] [rbp-468h]
  __int64 v76; // [rsp+0h] [rbp-468h]
  char v77; // [rsp+0h] [rbp-468h]
  char v78; // [rsp+0h] [rbp-468h]
  _BOOL8 v79; // [rsp+0h] [rbp-468h]
  _BOOL8 v80; // [rsp+0h] [rbp-468h]
  char v82; // [rsp+20h] [rbp-448h]
  unsigned __int32 v83; // [rsp+28h] [rbp-440h]
  unsigned __int32 v84; // [rsp+28h] [rbp-440h]
  char v85; // [rsp+2Fh] [rbp-439h]
  unsigned int v86; // [rsp+38h] [rbp-430h] BYREF
  unsigned int v87; // [rsp+3Ch] [rbp-42Ch] BYREF
  char *s1; // [rsp+40h] [rbp-428h] BYREF
  __int128 v89; // [rsp+48h] [rbp-420h] BYREF
  char *v90; // [rsp+58h] [rbp-410h]
  __int128 v91; // [rsp+60h] [rbp-408h]
  char v92; // [rsp+70h] [rbp-3F8h]
  char *s2; // [rsp+80h] [rbp-3E8h] BYREF
  __int128 v94; // [rsp+88h] [rbp-3E0h] BYREF
  char *v95; // [rsp+98h] [rbp-3D0h]
  __int128 v96; // [rsp+A0h] [rbp-3C8h]
  char v97; // [rsp+B0h] [rbp-3B8h]
  unsigned int v98; // [rsp+C0h] [rbp-3A8h]
  __int64 v99; // [rsp+C8h] [rbp-3A0h]
  unsigned __int64 v100; // [rsp+D0h] [rbp-398h]
  unsigned int v101; // [rsp+D8h] [rbp-390h]
  __m128i v102[8]; // [rsp+DCh] [rbp-38Ch] BYREF
  char v103; // [rsp+164h] [rbp-304h]
  _DWORD v104[4]; // [rsp+170h] [rbp-2F8h] BYREF
  void *v105; // [rsp+180h] [rbp-2E8h]
  __int128 v106; // [rsp+188h] [rbp-2E0h]
  _BYTE v107[192]; // [rsp+198h] [rbp-2D0h] BYREF
  int v108; // [rsp+258h] [rbp-210h] BYREF
  __int64 v109; // [rsp+260h] [rbp-208h]
  __m256i v110; // [rsp+268h] [rbp-200h]
  __int64 v111; // [rsp+288h] [rbp-1E0h]
  unsigned __int64 v112; // [rsp+290h] [rbp-1D8h]
  void *v113; // [rsp+298h] [rbp-1D0h]
  __int128 v114; // [rsp+2A0h] [rbp-1C8h]
  int v115; // [rsp+2B0h] [rbp-1B8h]
  int v116; // [rsp+2B4h] [rbp-1B4h]
  char v117; // [rsp+2B8h] [rbp-1B0h]
  __int64 v118; // [rsp+2B9h] [rbp-1AFh]
  _WORD v119[7]; // [rsp+2C1h] [rbp-1A7h]
  __m128i v120; // [rsp+2D0h] [rbp-198h] BYREF
  void *v121; // [rsp+2E0h] [rbp-188h]
  __int128 v122; // [rsp+2E8h] [rbp-180h]
  _BYTE v123[192]; // [rsp+2F8h] [rbp-170h] BYREF
  int v124; // [rsp+3B8h] [rbp-B0h] BYREF
  __int64 v125; // [rsp+3C0h] [rbp-A8h]
  __m256i v126; // [rsp+3C8h] [rbp-A0h]
  __int64 v127; // [rsp+3E8h] [rbp-80h]
  unsigned __int64 v128; // [rsp+3F0h] [rbp-78h]
  void *ptr; // [rsp+3F8h] [rbp-70h]
  __int128 v130; // [rsp+400h] [rbp-68h]
  int v131; // [rsp+410h] [rbp-58h]
  int v132; // [rsp+414h] [rbp-54h]
  char v133; // [rsp+418h] [rbp-50h]
  __int64 v134; // [rsp+419h] [rbp-4Fh]
  __int16 v135; // [rsp+421h] [rbp-47h]
  char v136; // [rsp+423h] [rbp-45h]
  unsigned __int64 v137; // [rsp+428h] [rbp-40h]

  v137 = __readfsqword(0x28u);
  if ( sub_443A40() )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v7 = sub_45DF20(a2, a3);
    switch_dbctx(*(int *)(a1 + 8));
    v8 = sub_45DF20(a1, a3);
    v9 = *v7;
    v10 = *v8;
    v11 = *v8 + 24 * v8[1];
    v12 = *v7 + 24 * v7[1];
    v13 = *v8 != v11;
    v14 = *v7 != v12;
    if ( *v7 != v12 && v10 != v11 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v10 + 8);
        if ( *(_QWORD *)(v9 + 8) )
          break;
        v15 = haystack;
        if ( v17 )
          goto LABEL_6;
LABEL_8:
        v10 += 24;
        v9 += 24;
        v13 = v11 != v10;
        v14 = v12 != v9;
        if ( v11 == v10 || v12 == v9 )
          goto LABEL_36;
      }
      v15 = *(const char **)v9;
      v16 = haystack;
      if ( v17 )
LABEL_6:
        v16 = *(const char **)v10;
      if ( strcmp(v16, v15) )
        return 1;
      goto LABEL_8;
    }
LABEL_36:
    if ( v11 != v10 || !v14 )
      return (v9 == v12) & (unsigned __int8)v13;
    return 1;
  }
  v18 = sub_458D90(*(_QWORD *)(a1 + 32), &v86, a3, *(_DWORD *)(a1 + 12), 1);
  v19 = sub_458D90(*(_QWORD *)(a2 + 32), &v87, a3, *(_DWORD *)(a2 + 12), 1);
  v20 = v19;
  if ( v86 != v87 )
    return 2;
  v21 = v19 ^ v18;
  if ( (((unsigned __int16)v20 ^ (unsigned __int16)v18) & 0x600) != 0 )
    return 2;
  v22 = *(_DWORD *)(a2 + 12);
  v23 = *(_DWORD *)(a1 + 12);
  v98 = a3;
  v24 = *(_QWORD *)(a1 + 32);
  v25 = v18 & 0x600;
  v101 = -1;
  v103 = 0;
  v99 = v24;
  v100 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v22)).m128i_u64[0];
  if ( v25 == 1536 )
  {
    if ( (v21 & 0x40000000) != 0 )
      return 1;
    v35 = a3 + v86;
    switch_dbctx(*(int *)(a2 + 8));
    s1 = (char *)__PAIR64__(v35, a3);
    *(_QWORD *)&v89 = 0;
    LODWORD(v90) = -1;
    ph = (_DWORD *)get_ph();
    v37 = ph[1];
    if ( v37 != 13 )
    {
      if ( v37 == 12 )
      {
        v38 = ph[18] - 1;
        goto LABEL_44;
      }
      if ( v37 != 15 )
      {
        LODWORD(v90) = -1;
        goto LABEL_46;
      }
    }
    v38 = ph[17];
LABEL_44:
    LODWORD(v90) = v38;
    if ( v38 != -1 && !(unsigned __int8)get_sreg_range(&v89, (unsigned int)s1) )
      goto LABEL_205;
LABEL_46:
    switch_dbctx(*(int *)(a1 + 8));
    s2 = (char *)__PAIR64__(v35, a3);
    *(_QWORD *)&v94 = 0;
    LODWORD(v95) = -1;
    v39 = (_DWORD *)get_ph();
    v40 = v39[1];
    if ( v40 != 13 )
    {
      if ( v40 == 12 )
      {
        v41 = v39[18] - 1;
        goto LABEL_50;
      }
      if ( v40 != 15 )
      {
LABEL_51:
        v42 = *(_DWORD *)(a1 + 12);
        if ( (v42 == 2
           || *(_DWORD *)(a2 + 12) == 2
           || (v18 & 0x10000000) == 0 && ((~(_WORD)v20 & 0x600) != 0 || (v20 & 0x10000000) == 0))
          && !(unsigned __int8)sub_456FA0(*(_QWORD *)(a1 + 32), v42, v18, *(_DWORD *)(a2 + 12), v20, a3) )
        {
          return 1;
        }
        v72 = 8;
        goto LABEL_23;
      }
    }
    v41 = v39[17];
LABEL_50:
    LODWORD(v95) = v41;
    if ( v41 == -1 )
      goto LABEL_51;
    if ( (unsigned __int8)get_sreg_range(&v94, (unsigned int)s2) )
    {
      if ( (_DWORD)v95 != -1 && (DWORD2(v94) != DWORD2(v89) || BYTE12(v94) != BYTE12(v89)) )
        return 1;
      goto LABEL_51;
    }
LABEL_205:
    sub_454C90();
  }
  if ( v25 != 1024 )
  {
    if ( v23 != 2 && v22 != 2 )
      goto LABEL_19;
LABEL_21:
    if ( !(unsigned __int8)sub_456FA0(v24, v23, v18, v22, v20, a3) )
      return 1;
    goto LABEL_22;
  }
  if ( (v21 & 0xF0000600) != 0 )
    return 2;
  v101 = 0;
  v49 = *(_DWORD *)(qword_2CA1698 + 88);
  if ( !(unsigned __int8)sub_455D20(v102, v24, v22, a3, 0, v20) )
    goto LABEL_88;
  v53 = sub_461060(v99, v102[0].m128i_i16, v20, v101, HIDWORD(v100), v100, 1);
  v50 = v53;
  if ( !v53 )
    goto LABEL_88;
  if ( (v20 & 0x600) == 0x400 && (v20 & 0xF0000000) == 0x60000000 || (v77 = v53, v54 = is_enum(v20, 0), v50 = v77, v54) )
  {
    v84 = v102[0].m128i_i32[0];
    if ( v102[0].m128i_i32[0] != -1 )
    {
      v78 = v50;
      switch_dbctx(*(int *)(v99 + 4LL * (int)v100 + 16));
      s2 = nullptr;
      if ( (unsigned __int8)get_type_by_tid(&s2, v84) && get_tinfo_size(0, s2, 0) != -1 )
      {
        clear_tinfo_t(&s2);
        v50 = v78;
        goto LABEL_89;
      }
      clear_tinfo_t(&s2);
LABEL_88:
      v50 = 0;
    }
  }
LABEL_89:
  v103 = v50;
  switch_dbctx(v49);
  v51 = *(int *)(qword_2CA1698 + 88);
  v52 = sub_455D20(&v120, v99, v100, v98, v101, v18);
  if ( v52 != v103 )
  {
    switch_dbctx(v51);
    return 1;
  }
  if ( v52 )
  {
    v33 = v51;
    if ( sub_3C03F0(v120.m128i_i32, v102, v18, v101) )
    {
LABEL_31:
      switch_dbctx(v33);
      return 1;
    }
  }
  switch_dbctx(v51);
  v23 = *(_DWORD *)(a1 + 12);
  v22 = *(_DWORD *)(a2 + 12);
  if ( v23 == 2 || v22 == 2 )
  {
    v24 = *(_QWORD *)(a1 + 32);
    goto LABEL_21;
  }
LABEL_19:
  if ( (~(_WORD)v20 & 0x600) != 0 )
  {
    v22 = *(_DWORD *)(a2 + 12);
    v24 = *(_QWORD *)(a1 + 32);
    goto LABEL_21;
  }
  if ( (v20 & 0x10000000) == 0
    && !(unsigned __int8)sub_456FA0(*(_QWORD *)(a1 + 32), v23, v18, *(_DWORD *)(a2 + 12), v20, a3) )
  {
    return 1;
  }
LABEL_22:
  v72 = 1;
LABEL_23:
  for ( i = 0; i != v72; ++i )
  {
    v27 = 15LL << (4 * ((unsigned __int8)i + ((int)i > 1) + 5));
    v28 = v27 & v18;
    if ( (v27 & v18) != (v27 & v20) )
      return 1;
    if ( (v27 & (v20 | v18)) == 0
      || !(unsigned __int8)is_off(v27 & v18, i)
      && !(unsigned __int8)is_enum(v28, i)
      && !(unsigned __int8)is_stroff(v28, i)
      && !(unsigned __int8)is_custfmt(v28, i) )
    {
      continue;
    }
    v101 = i;
    v29 = *(_DWORD *)(qword_2CA1698 + 88);
    if ( !(unsigned __int8)sub_455D20(v102, v99, HIDWORD(v100), v98, i, v20) )
      goto LABEL_28;
    v43 = sub_461060(v99, v102[0].m128i_i16, v20, v101, HIDWORD(v100), v100, 1);
    v30 = v43;
    if ( !v43 )
      goto LABEL_28;
    if ( (v20 & 0x600) != 0x400 || (v20 & 0xF0000000) != 0x60000000 )
    {
      v82 = v43;
      v44 = is_enum(v20, i);
      v30 = v82;
      if ( !v44 )
        goto LABEL_29;
    }
    v83 = v102[0].m128i_i32[0];
    if ( v102[0].m128i_i32[0] == -1 )
      goto LABEL_29;
    v85 = v30;
    switch_dbctx(*(int *)(v99 + 4LL * (int)v100 + 16));
    s2 = nullptr;
    if ( !(unsigned __int8)get_type_by_tid(&s2, v83) || get_tinfo_size(0, s2, 0) == -1 )
    {
      clear_tinfo_t(&s2);
LABEL_28:
      v30 = 0;
      goto LABEL_29;
    }
    clear_tinfo_t(&s2);
    v30 = v85;
LABEL_29:
    v103 = v30;
    switch_dbctx(v29);
    v31 = *(int *)(qword_2CA1698 + 88);
    v32 = sub_455D20(&v120, v99, v100, v98, v101, v18);
    if ( v32 != v103 || v32 && sub_3C03F0(v120.m128i_i32, v102, v18, v101) )
    {
      v33 = v31;
      goto LABEL_31;
    }
    switch_dbctx(v31);
  }
  switch_dbctx(*(int *)(a1 + 8));
  v92 = 0;
  v89 = 0;
  s1 = nullptr;
  v90 = nullptr;
  v91 = 0;
  sub_3C09E0((__int64)&s1, a3, v18);
  switch_dbctx(*(int *)(a2 + 8));
  v97 = 0;
  s2 = nullptr;
  v95 = nullptr;
  v94 = 0;
  v96 = 0;
  sub_3C09E0((__int64)&s2, a3, v20);
  if ( !(_QWORD)v94 )
  {
    v45 = (char *)haystack;
    if ( (_QWORD)v89 )
    {
LABEL_68:
      v46 = s1;
      goto LABEL_69;
    }
LABEL_70:
    if ( (_QWORD)v96 )
    {
      v47 = v95;
      v48 = (char *)haystack;
      if ( !(_QWORD)v91 )
        goto LABEL_73;
    }
    else
    {
      v47 = (char *)haystack;
      if ( !(_QWORD)v91 )
        goto LABEL_74;
    }
    v48 = v90;
LABEL_73:
    if ( strcmp(v48, v47) )
      goto LABEL_104;
LABEL_74:
    result = 1;
    if ( v92 != v97 )
      goto LABEL_75;
    switch_dbctx(*(int *)(a1 + 8));
    v104[0] = -1;
    v55 = &v108;
    v105 = nullptr;
    v56 = (int *)v107;
    v106 = 0;
    do
    {
      *(_QWORD *)v56 = 0;
      v56 += 6;
      *((_OWORD *)v56 - 1) = 0;
    }
    while ( &v108 != v56 );
    v110.m256i_i64[3] = 0xFFFFFFFF00000000LL;
    v112 = 0xFFFFFFFF00000002LL;
    v119[0] = 0;
    v108 = -1;
    v109 = 0x800000;
    v110.m256i_i64[2] = 0;
    v111 = 0;
    v113 = nullptr;
    v117 = 0;
    LOBYTE(v119[1]) = 0;
    memset(&v104[1], 0, 12);
    v118 = 0;
    *(__m128i *)v110.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
    v114 = 0;
    sub_457330((__int64)v104, a3, v18);
    switch_dbctx(*(int *)(a2 + 8));
    v120.m128i_i32[0] = -1;
    v121 = nullptr;
    v57 = (int *)v123;
    v122 = 0;
    do
    {
      *(_QWORD *)v57 = 0;
      v57 += 6;
      *((_OWORD *)v57 - 1) = 0;
    }
    while ( v57 != &v124 );
    v126.m256i_i64[3] = 0xFFFFFFFF00000000LL;
    v128 = 0xFFFFFFFF00000002LL;
    v135 = 0;
    v124 = -1;
    v125 = 0x800000;
    v126.m256i_i64[2] = 0;
    v127 = 0;
    ptr = nullptr;
    v133 = 0;
    v136 = 0;
    *(__int64 *)((char *)v120.m128i_i64 + 4) = 0;
    v120.m128i_i32[3] = 0;
    v134 = 0;
    *(__m128i *)v126.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_23838B0);
    v130 = 0;
    sub_457330((__int64)&v120, a3, v20);
    if ( v117 )
    {
      v59 = 1;
      if ( v104[0] != v120.m128i_i32[0]
        || !v133
        || v104[1] != v120.m128i_i32[1]
        || *(_QWORD *)&v104[2] != v120.m128i_i64[1] )
      {
        goto LABEL_130;
      }
    }
    else if ( (_QWORD)v106 || LOBYTE(v119[0]) || (v104[0] & v108) != 0xFFFFFFFF || *(_WORD *)((char *)v119 + 1) )
    {
      if ( v104[0] != v120.m128i_i32[0] || v133 )
        goto LABEL_203;
    }
    else
    {
      v59 = 1;
      if ( v120.m128i_i32[0] != -1 )
        goto LABEL_130;
      if ( v133 )
        goto LABEL_130;
      if ( !(_QWORD)v122 && !(_BYTE)v135 && v124 == -1 && !HIBYTE(v135) )
      {
        v59 = 0;
        if ( !v136 )
          goto LABEL_130;
      }
    }
    v58 = sub_454F80(v105, v106, v121, v122);
    v59 = 1;
    if ( !v58 && LOBYTE(v119[0]) == (_BYTE)v135 )
    {
      if ( LOBYTE(v119[0]) )
      {
        v60 = 40;
        v61 = 329;
        while ( 1 )
        {
          v64 = *((_BYTE *)v104 + v61);
          if ( v64 != v120.m128i_i8[v61] )
          {
LABEL_204:
            v55 = &v108;
            v59 = 1;
            goto LABEL_130;
          }
          if ( v64 )
            break;
LABEL_120:
          v60 += 24LL;
          ++v61;
          if ( v60 == 232 )
          {
            v55 = &v108;
            goto LABEL_182;
          }
        }
        v65 = *(_QWORD *)&v104[v60 / 4 + 2];
        if ( v120.m128i_i64[v60 / 8 + 1] )
        {
          v62 = (const char *)v120.m128i_i64[v60 / 8];
          v63 = haystack;
          if ( !v65 )
            goto LABEL_119;
        }
        else
        {
          v62 = haystack;
          if ( !v65 )
            goto LABEL_120;
        }
        v63 = *(const char **)&v104[v60 / 4];
LABEL_119:
        if ( strcmp(v63, v62) )
          goto LABEL_204;
        goto LABEL_120;
      }
LABEL_182:
      v59 = 1;
      if ( v108 == v124 && HIBYTE(v119[0]) == HIBYTE(v135) )
      {
        if ( !HIBYTE(v119[0]) )
        {
LABEL_197:
          v59 = 1;
          if ( LOBYTE(v119[1]) == v136 )
          {
            v59 = 0;
            if ( LOBYTE(v119[1]) )
            {
              v59 = 1;
              if ( v115 == v131 )
                v59 = v116 != v132;
            }
          }
          goto LABEL_130;
        }
        if ( (_DWORD)v109 == (_DWORD)v125
          && WORD2(v109) == WORD2(v125)
          && v110.m256i_i32[0] == v126.m256i_i32[0]
          && *(_OWORD *)((char *)v110.m256i_i64 + 4) == *(_OWORD *)((char *)v126.m256i_i64 + 4)
          && *(__int64 *)((char *)&v110.m256i_i64[2] + 4) == *(__int64 *)((char *)&v126.m256i_i64[2] + 4)
          && v110.m256i_i32[7] == v126.m256i_i32[7]
          && (_BYTE)v111 == (_BYTE)v127
          && HIDWORD(v111) == HIDWORD(v127) )
        {
          if ( (v109 & 0x800000) == 0 || (int)v112 <= 1 )
            goto LABEL_197;
          if ( v112 != v128 )
            goto LABEL_130;
          if ( !(unsigned int)sub_454F80(v113, v114, ptr, v130) )
            goto LABEL_197;
LABEL_203:
          v59 = 1;
        }
      }
    }
LABEL_130:
    if ( ptr )
    {
      v79 = v59;
      *(_QWORD *)&v130 = 0;
      qfree(ptr);
      v59 = v79;
    }
    v66 = &v124;
    v67 = v59;
    do
    {
      v68 = *((void **)v66 - 3);
      v66 -= 6;
      if ( v68 )
      {
        *((_QWORD *)v66 + 1) = 0;
        qfree(v68);
      }
    }
    while ( v66 != (int *)v123 );
    v69 = v67;
    if ( v121 )
    {
      *(_QWORD *)&v122 = 0;
      qfree(v121);
      v69 = v67;
    }
    if ( v113 )
    {
      v80 = v69;
      *(_QWORD *)&v114 = 0;
      qfree(v113);
      v69 = v80;
    }
    v70 = v69;
    do
    {
      v71 = *((void **)v55 - 3);
      v55 -= 6;
      if ( v71 )
      {
        *((_QWORD *)v55 + 1) = 0;
        qfree(v71);
      }
    }
    while ( v55 != (int *)v107 );
    result = v70;
    if ( v105 )
    {
      *(_QWORD *)&v106 = 0;
      qfree(v105);
      result = v70;
    }
    goto LABEL_75;
  }
  v45 = s2;
  v46 = (char *)haystack;
  if ( (_QWORD)v89 )
    goto LABEL_68;
LABEL_69:
  if ( !strcmp(v46, v45) )
    goto LABEL_70;
LABEL_104:
  result = 1;
LABEL_75:
  if ( v95 )
  {
    v73 = result;
    *(_QWORD *)&v96 = 0;
    qfree(v95);
    result = v73;
  }
  if ( s2 )
  {
    v74 = result;
    *(_QWORD *)&v94 = 0;
    qfree(s2);
    result = v74;
  }
  if ( v90 )
  {
    v75 = result;
    *(_QWORD *)&v91 = 0;
    qfree(v90);
    result = v75;
  }
  if ( s1 )
  {
    v76 = result;
    *(_QWORD *)&v89 = 0;
    qfree(s1);
    return v76;
  }
  return result;
}

