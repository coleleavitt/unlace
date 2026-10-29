__int64 __fastcall sub_475BA0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v6; // r12
  __int64 *v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r14
  bool v12; // al
  bool v13; // dl
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  char *v19; // r15
  __int64 v20; // r12
  int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // esi
  __int64 v24; // rdi
  unsigned __int64 v25; // rcx
  unsigned int i; // ebp
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  char v29; // cl
  __int64 v30; // r15
  char v31; // al
  __int64 v32; // rdi
  __int64 result; // rax
  char *v34; // r15
  _DWORD *ph; // rax
  int v36; // edx
  int v37; // edx
  _DWORD *v38; // rax
  int v39; // edx
  int v40; // edx
  int v41; // esi
  char v42; // al
  char v43; // al
  const char *v44; // rsi
  const char *v45; // rdi
  const char *v46; // rsi
  const char *v47; // rdi
  int v48; // ebp
  char v49; // cl
  char v50; // al
  char v51; // al
  char v52; // al
  __int64 *v53; // rbx
  __int64 *v54; // rax
  __int64 *v55; // rax
  _BOOL8 v56; // rax
  int v57; // edx
  unsigned __int64 v58; // rbp
  __int64 v59; // rbx
  const char *v60; // rsi
  const char *v61; // rdi
  char v62; // al
  __int64 v63; // rax
  __int64 *v64; // rbp
  _BOOL8 v65; // r12
  void *v66; // rdi
  _BOOL8 v67; // rax
  __int64 v68; // rbp
  void *v69; // rdi
  __int64 v71; // [rsp+8h] [rbp-560h]
  __int64 v72; // [rsp+8h] [rbp-560h]
  __int64 v73; // [rsp+8h] [rbp-560h]
  __int64 v74; // [rsp+8h] [rbp-560h]
  _BOOL8 v75; // [rsp+8h] [rbp-560h]
  _BOOL8 v76; // [rsp+8h] [rbp-560h]
  int v77; // [rsp+10h] [rbp-558h]
  char v78; // [rsp+10h] [rbp-558h]
  char v79; // [rsp+10h] [rbp-558h]
  int v80; // [rsp+18h] [rbp-550h]
  __int64 v81; // [rsp+18h] [rbp-550h]
  char v82; // [rsp+28h] [rbp-540h]
  __int64 v83; // [rsp+30h] [rbp-538h]
  char v84; // [rsp+3Fh] [rbp-529h]
  char *v85; // [rsp+40h] [rbp-528h] BYREF
  char *v86; // [rsp+48h] [rbp-520h] BYREF
  char *s1[4]; // [rsp+50h] [rbp-518h] BYREF
  __int128 v88; // [rsp+70h] [rbp-4F8h]
  int v89; // [rsp+80h] [rbp-4E8h]
  char *s2[4]; // [rsp+90h] [rbp-4D8h] BYREF
  __int128 v91; // [rsp+B0h] [rbp-4B8h]
  int v92; // [rsp+C0h] [rbp-4A8h]
  __int64 *v93; // [rsp+D0h] [rbp-498h]
  __int64 v94; // [rsp+D8h] [rbp-490h]
  unsigned __int64 v95; // [rsp+E0h] [rbp-488h]
  unsigned int v96; // [rsp+E8h] [rbp-480h]
  __m128i v97[17]; // [rsp+F0h] [rbp-478h] BYREF
  char v98; // [rsp+200h] [rbp-368h]
  _DWORD v99[4]; // [rsp+210h] [rbp-358h] BYREF
  void *v100; // [rsp+220h] [rbp-348h]
  __int128 v101; // [rsp+228h] [rbp-340h]
  _BYTE v102[192]; // [rsp+238h] [rbp-330h] BYREF
  __int64 v103; // [rsp+2F8h] [rbp-270h] BYREF
  void *v104; // [rsp+300h] [rbp-268h]
  __m256i v105; // [rsp+308h] [rbp-260h]
  __int64 v106; // [rsp+328h] [rbp-240h]
  __int64 v107; // [rsp+330h] [rbp-238h]
  __int64 v108; // [rsp+338h] [rbp-230h]
  __int64 v109; // [rsp+340h] [rbp-228h]
  __int64 v110; // [rsp+348h] [rbp-220h]
  __int64 v111; // [rsp+350h] [rbp-218h]
  __int64 v112; // [rsp+358h] [rbp-210h]
  void *v113; // [rsp+360h] [rbp-208h]
  __int128 v114; // [rsp+368h] [rbp-200h]
  __int64 v115; // [rsp+378h] [rbp-1F0h]
  __int64 v116; // [rsp+380h] [rbp-1E8h]
  char v117; // [rsp+388h] [rbp-1E0h]
  __int64 v118; // [rsp+389h] [rbp-1DFh]
  _WORD v119[7]; // [rsp+391h] [rbp-1D7h]
  __m128i v120; // [rsp+3A0h] [rbp-1C8h] BYREF
  void *v121; // [rsp+3B0h] [rbp-1B8h]
  __int128 v122; // [rsp+3B8h] [rbp-1B0h]
  _BYTE v123[192]; // [rsp+3C8h] [rbp-1A0h] BYREF
  __int64 v124; // [rsp+488h] [rbp-E0h] BYREF
  void *v125; // [rsp+490h] [rbp-D8h]
  __m256i v126; // [rsp+498h] [rbp-D0h]
  __int64 v127; // [rsp+4B8h] [rbp-B0h]
  __int64 v128; // [rsp+4C0h] [rbp-A8h]
  __int64 v129; // [rsp+4C8h] [rbp-A0h]
  __int64 v130; // [rsp+4D0h] [rbp-98h]
  __int64 v131; // [rsp+4D8h] [rbp-90h]
  __int64 v132; // [rsp+4E0h] [rbp-88h]
  __int64 v133; // [rsp+4E8h] [rbp-80h]
  void *ptr; // [rsp+4F0h] [rbp-78h]
  __int128 v135; // [rsp+4F8h] [rbp-70h]
  __int64 v136; // [rsp+508h] [rbp-60h]
  __int64 v137; // [rsp+510h] [rbp-58h]
  char v138; // [rsp+518h] [rbp-50h]
  __int64 v139; // [rsp+519h] [rbp-4Fh]
  __int16 v140; // [rsp+521h] [rbp-47h]
  char v141; // [rsp+523h] [rbp-45h]
  unsigned __int64 v142; // [rsp+528h] [rbp-40h]

  v142 = __readfsqword(0x28u);
  if ( sub_457830() )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v6 = sub_472390(a2, (unsigned __int64)a3);
    switch_dbctx(*(int *)(a1 + 8));
    v7 = sub_472390(a1, (unsigned __int64)a3);
    v8 = *v6;
    v9 = *v7;
    v10 = *v7 + 24 * v7[1];
    v11 = *v6 + 24 * v6[1];
    v12 = *v7 != v10;
    v13 = *v6 != v11;
    if ( *v6 != v11 && v9 != v10 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v9 + 8);
        if ( *(_QWORD *)(v8 + 8) )
          break;
        v14 = haystack;
        if ( v16 )
          goto LABEL_6;
LABEL_8:
        v9 += 24;
        v8 += 24;
        v12 = v10 != v9;
        v13 = v11 != v8;
        if ( v10 == v9 || v11 == v8 )
          goto LABEL_36;
      }
      v14 = *(const char **)v8;
      v15 = haystack;
      if ( v16 )
LABEL_6:
        v15 = *(const char **)v9;
      if ( strcmp(v15, v14) )
        return 1;
      goto LABEL_8;
    }
LABEL_36:
    if ( v10 != v9 || !v13 )
      return (v8 == v11) & (unsigned __int8)v12;
    return 1;
  }
  v17 = sub_46D210(*(_QWORD *)(a1 + 32), &v85, a3, *(_DWORD *)(a1 + 12), 1);
  v18 = sub_46D210(*(_QWORD *)(a2 + 32), &v86, a3, *(_DWORD *)(a2 + 12), 1);
  v19 = v85;
  v20 = v18;
  if ( v85 != v86 )
    return 2;
  v21 = v18 ^ v17;
  if ( (((unsigned __int16)v20 ^ (unsigned __int16)v17) & 0x600) != 0 )
    return 2;
  v22 = *(_DWORD *)(a2 + 12);
  v96 = -1;
  v23 = *(_DWORD *)(a1 + 12);
  v24 = *(_QWORD *)(a1 + 32);
  v98 = 0;
  v93 = a3;
  v25 = v17 & 0x600;
  v94 = v24;
  v95 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(v22)).m128i_u64[0];
  if ( v25 == 1536 )
  {
    if ( (v21 & 0x40000000) != 0 )
      return 1;
    switch_dbctx(*(int *)(a2 + 8));
    v89 = -1;
    *(_OWORD *)&s1[2] = 0;
    v34 = &v19[(_QWORD)a3];
    s1[0] = (char *)a3;
    s1[1] = v34;
    ph = (_DWORD *)get_ph();
    v36 = ph[1];
    if ( v36 != 13 )
    {
      if ( v36 == 12 )
      {
        v37 = ph[18] - 1;
        goto LABEL_44;
      }
      if ( v36 != 15 )
      {
        v89 = -1;
        goto LABEL_46;
      }
    }
    v37 = ph[17];
LABEL_44:
    v89 = v37;
    if ( v37 != -1 && !(unsigned __int8)get_sreg_range(&s1[2], s1[0]) )
      goto LABEL_207;
LABEL_46:
    switch_dbctx(*(int *)(a1 + 8));
    s2[1] = v34;
    v92 = -1;
    s2[0] = (char *)a3;
    *(_OWORD *)&s2[2] = 0;
    v38 = (_DWORD *)get_ph();
    v39 = v38[1];
    if ( v39 != 13 )
    {
      if ( v39 == 12 )
      {
        v40 = v38[18] - 1;
        goto LABEL_50;
      }
      if ( v39 != 15 )
      {
LABEL_51:
        v41 = *(_DWORD *)(a1 + 12);
        if ( (v41 == 2
           || *(_DWORD *)(a2 + 12) == 2
           || (v17 & 0x10000000) == 0 && ((~(_WORD)v20 & 0x600) != 0 || (v20 & 0x10000000) == 0))
          && !(unsigned __int8)sub_46B3A0(*(_QWORD *)(a1 + 32), v41, v17, *(_DWORD *)(a2 + 12), v20, (__int64)a3) )
        {
          return 1;
        }
        v77 = 8;
        goto LABEL_23;
      }
    }
    v40 = v38[17];
LABEL_50:
    v92 = v40;
    if ( v40 == -1 )
      goto LABEL_51;
    if ( (unsigned __int8)get_sreg_range(&s2[2], s2[0]) )
    {
      if ( v92 != -1 && ((_QWORD)v91 != (_QWORD)v88 || BYTE8(v91) != BYTE8(v88)) )
        return 1;
      goto LABEL_51;
    }
LABEL_207:
    sub_469070();
  }
  if ( v25 != 1024 )
  {
    if ( v23 != 2 && v22 != 2 )
      goto LABEL_19;
LABEL_21:
    if ( !(unsigned __int8)sub_46B3A0(v24, v23, v17, v22, v20, (__int64)a3) )
      return 1;
    goto LABEL_22;
  }
  if ( (v21 & 0xF0000600) != 0 )
    return 2;
  v96 = 0;
  v48 = *(_DWORD *)(qword_2CCB598 + 88);
  if ( !(unsigned __int8)sub_46A0E0(v97, v24, v22, (unsigned __int64)a3, 0, v20) )
    goto LABEL_88;
  v51 = sub_475520(v94, v97[0].m128i_i16, v20, v96, HIDWORD(v95), v95, 1);
  v49 = v51;
  if ( !v51 )
    goto LABEL_88;
  if ( (v20 & 0x600) == 0x400 && (v20 & 0xF0000000) == 0x60000000 || (v78 = v51, v52 = is_enum(v20, 0), v49 = v78, v52) )
  {
    v81 = v97[0].m128i_i64[0];
    if ( v97[0].m128i_i64[0] != -1 )
    {
      v79 = v49;
      switch_dbctx(*(int *)(v94 + 4LL * (int)v95 + 16));
      s2[0] = nullptr;
      if ( (unsigned __int8)get_type_by_tid(s2, v81) && get_tinfo_size(0, s2[0], 0) != -1 )
      {
        clear_tinfo_t(s2);
        v49 = v79;
        goto LABEL_89;
      }
      clear_tinfo_t(s2);
LABEL_88:
      v49 = 0;
    }
  }
LABEL_89:
  v98 = v49;
  switch_dbctx(v48);
  v30 = *(int *)(qword_2CCB598 + 88);
  v50 = sub_46A0E0(&v120, v94, v95, (unsigned __int64)v93, v96, v17);
  if ( v50 != v98 )
  {
LABEL_30:
    v32 = v30;
LABEL_31:
    switch_dbctx(v32);
    return 1;
  }
  if ( v50 )
  {
    v32 = v30;
    if ( sub_3C54F0(v120.m128i_i32, (__int64)v97, v17, v96) )
      goto LABEL_31;
  }
  switch_dbctx(v30);
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
    && !(unsigned __int8)sub_46B3A0(*(_QWORD *)(a1 + 32), v23, v17, *(_DWORD *)(a2 + 12), v20, (__int64)a3) )
  {
    return 1;
  }
LABEL_22:
  v77 = 1;
LABEL_23:
  for ( i = 0; i != v77; ++i )
  {
    v27 = 15LL << (4 * ((unsigned __int8)i + ((int)i > 1) + 5));
    v28 = v27 & v17;
    if ( (v27 & v17) != (v27 & v20) )
      return 1;
    if ( (v27 & (v20 | v17)) != 0
      && ((unsigned __int8)is_off(v27 & v17, i)
       || (unsigned __int8)is_enum(v28, i)
       || (unsigned __int8)is_stroff(v28, i)
       || (unsigned __int8)is_custfmt(v28, i)) )
    {
      v96 = i;
      v80 = *(_DWORD *)(qword_2CCB598 + 88);
      if ( (unsigned __int8)sub_46A0E0(v97, v94, HIDWORD(v95), (unsigned __int64)v93, i, v20) )
      {
        v42 = sub_475520(v94, v97[0].m128i_i16, v20, v96, HIDWORD(v95), v95, 1);
        v29 = v42;
        if ( v42 )
        {
          if ( (v20 & 0x600) != 0x400 || (v20 & 0xF0000000) != 0x60000000 )
          {
            v82 = v42;
            v43 = is_enum(v20, i);
            v29 = v82;
            if ( !v43 )
              goto LABEL_29;
          }
          v83 = v97[0].m128i_i64[0];
          if ( v97[0].m128i_i64[0] == -1 )
            goto LABEL_29;
          v84 = v29;
          switch_dbctx(*(int *)(v94 + 4LL * (int)v95 + 16));
          s2[0] = nullptr;
          if ( (unsigned __int8)get_type_by_tid(s2, v83) && get_tinfo_size(0, s2[0], 0) != -1 )
          {
            clear_tinfo_t(s2);
            v29 = v84;
LABEL_29:
            v98 = v29;
            switch_dbctx(v80);
            v30 = *(int *)(qword_2CCB598 + 88);
            v31 = sub_46A0E0(&v120, v94, v95, (unsigned __int64)v93, v96, v17);
            if ( v31 != v98 || v31 && sub_3C54F0(v120.m128i_i32, (__int64)v97, v17, v96) )
              goto LABEL_30;
            switch_dbctx(v30);
            continue;
          }
          clear_tinfo_t(s2);
        }
      }
      v29 = 0;
      goto LABEL_29;
    }
  }
  switch_dbctx(*(int *)(a1 + 8));
  memset(s1, 0, sizeof(s1));
  LOBYTE(v89) = 0;
  v88 = 0;
  sub_3C5AF0((__int64)s1, (__int64)a3, v17);
  switch_dbctx(*(int *)(a2 + 8));
  LOBYTE(v92) = 0;
  memset(s2, 0, sizeof(s2));
  v91 = 0;
  sub_3C5AF0((__int64)s2, (__int64)a3, v20);
  if ( !s2[1] )
  {
    v44 = haystack;
    if ( s1[1] )
    {
LABEL_68:
      v45 = s1[0];
      goto LABEL_69;
    }
LABEL_70:
    if ( (_QWORD)v91 )
    {
      v46 = s2[3];
      v47 = haystack;
      if ( !(_QWORD)v88 )
        goto LABEL_73;
    }
    else
    {
      v46 = haystack;
      if ( !(_QWORD)v88 )
        goto LABEL_74;
    }
    v47 = s1[3];
LABEL_73:
    if ( strcmp(v47, v46) )
      goto LABEL_107;
LABEL_74:
    result = 1;
    if ( (_BYTE)v89 != (_BYTE)v92 )
      goto LABEL_75;
    switch_dbctx(*(int *)(a1 + 8));
    v99[0] = -1;
    v53 = &v103;
    v100 = nullptr;
    v54 = (__int64 *)v102;
    v101 = 0;
    do
    {
      *v54 = 0;
      v54 += 3;
      *((_OWORD *)v54 - 1) = 0;
    }
    while ( &v103 != v54 );
    v109 = 0xFFFFFFFFLL;
    v119[0] = 0;
    v103 = -1;
    v104 = &loc_800000;
    v106 = 0;
    v107 = 0;
    v108 = 0;
    v110 = 0;
    v111 = 2;
    v112 = -1;
    v113 = nullptr;
    v117 = 0;
    LOBYTE(v119[1]) = 0;
    memset(&v99[1], 0, 12);
    v118 = 0;
    *(__m128i *)v105.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    *(_OWORD *)&v105.m256i_u64[2] = -1;
    v114 = 0;
    sub_46B730((__int64)v99, (unsigned __int64)a3, v17);
    switch_dbctx(*(int *)(a2 + 8));
    v120.m128i_i32[0] = -1;
    v121 = nullptr;
    v55 = (__int64 *)v123;
    v122 = 0;
    do
    {
      *v55 = 0;
      v55 += 3;
      *((_OWORD *)v55 - 1) = 0;
    }
    while ( v55 != &v124 );
    v130 = 0xFFFFFFFFLL;
    v140 = 0;
    v124 = -1;
    v125 = &loc_800000;
    v127 = 0;
    v128 = 0;
    v129 = 0;
    v131 = 0;
    v132 = 2;
    v133 = -1;
    ptr = nullptr;
    v138 = 0;
    v141 = 0;
    *(__int64 *)((char *)v120.m128i_i64 + 4) = 0;
    v120.m128i_i32[3] = 0;
    v139 = 0;
    *(__m128i *)v126.m256i_i8 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    *(_OWORD *)&v126.m256i_u64[2] = -1;
    v135 = 0;
    sub_46B730((__int64)&v120, (unsigned __int64)a3, v20);
    if ( v99[0] != -1 || v117 || (_QWORD)v101 || LOBYTE(v119[0]) || v103 != -1 || *(_WORD *)((char *)v119 + 1) )
    {
      v56 = 1;
      if ( v99[0] != v120.m128i_i32[0]
        || v138 != v117
        || v117 && (v99[1] != v120.m128i_i32[1] || *(_QWORD *)&v99[2] != v120.m128i_i64[1]) )
      {
        goto LABEL_132;
      }
    }
    else
    {
      v56 = 1;
      if ( v120.m128i_i32[0] != -1 )
        goto LABEL_132;
      if ( v138 )
        goto LABEL_132;
      if ( !(_QWORD)v122 && !(_BYTE)v140 && v124 == -1 && !HIBYTE(v140) )
      {
        v56 = 0;
        if ( !v141 )
          goto LABEL_132;
      }
    }
    v57 = sub_469340(v100, v101, v121, v122);
    v56 = 1;
    if ( !v57 && LOBYTE(v119[0]) == (_BYTE)v140 )
    {
      if ( LOBYTE(v119[0]) )
      {
        v58 = 40;
        v59 = 377;
        while ( 1 )
        {
          v62 = *((_BYTE *)v99 + v59);
          if ( v62 != v120.m128i_i8[v59] )
          {
LABEL_131:
            v53 = &v103;
            v56 = 1;
            goto LABEL_132;
          }
          if ( !v62 )
            goto LABEL_125;
          v63 = *(_QWORD *)&v99[v58 / 4 + 2];
          if ( v120.m128i_i64[v58 / 8 + 1] )
            break;
          v60 = haystack;
          if ( v63 )
            goto LABEL_123;
LABEL_125:
          v58 += 24LL;
          ++v59;
          if ( v58 == 232 )
          {
            v53 = &v103;
            goto LABEL_182;
          }
        }
        v60 = (const char *)v120.m128i_i64[v58 / 8];
        v61 = haystack;
        if ( v63 )
LABEL_123:
          v61 = *(const char **)&v99[v58 / 4];
        if ( strcmp(v61, v60) )
          goto LABEL_131;
        goto LABEL_125;
      }
LABEL_182:
      v56 = 1;
      if ( v103 == v124 && HIBYTE(v119[0]) == HIBYTE(v140) )
      {
        if ( !HIBYTE(v119[0]) )
          goto LABEL_201;
        if ( (_DWORD)v104 != (_DWORD)v125
          || WORD2(v104) != WORD2(v125)
          || v105.m256i_i64[0] != v126.m256i_i64[0]
          || *(_OWORD *)&v105.m256i_u64[1] != *(_OWORD *)&v126.m256i_u64[1]
          || v105.m256i_i64[3] != v126.m256i_i64[3]
          || (_DWORD)v106 != (_DWORD)v127
          || v107 != v128
          || v108 != v129
          || (_DWORD)v109 != (_DWORD)v130
          || BYTE4(v109) != BYTE4(v130)
          || v110 != v131 )
        {
          goto LABEL_132;
        }
        if ( ((unsigned int)v104 & 0x800000) == 0 || (int)v111 <= 1 )
        {
LABEL_201:
          v56 = 1;
          if ( LOBYTE(v119[1]) == v141 )
          {
            v56 = 0;
            if ( LOBYTE(v119[1]) )
            {
              v56 = 1;
              if ( v115 == v136 )
                v56 = v116 != v137;
            }
          }
          goto LABEL_132;
        }
        if ( (_DWORD)v111 == (_DWORD)v132 && v112 == v133 )
        {
          if ( !(unsigned int)sub_469340(v113, v114, ptr, v135) )
            goto LABEL_201;
          v56 = 1;
        }
      }
    }
LABEL_132:
    if ( ptr )
    {
      v75 = v56;
      *(_QWORD *)&v135 = 0;
      qfree(ptr);
      v56 = v75;
    }
    v64 = &v124;
    v65 = v56;
    do
    {
      v66 = (void *)*(v64 - 3);
      v64 -= 3;
      if ( v66 )
      {
        v64[1] = 0;
        qfree(v66);
      }
    }
    while ( v64 != (__int64 *)v123 );
    v67 = v65;
    if ( v121 )
    {
      *(_QWORD *)&v122 = 0;
      qfree(v121);
      v67 = v65;
    }
    if ( v113 )
    {
      v76 = v67;
      *(_QWORD *)&v114 = 0;
      qfree(v113);
      v67 = v76;
    }
    v68 = v67;
    do
    {
      v69 = (void *)*(v53 - 3);
      v53 -= 3;
      if ( v69 )
      {
        v53[1] = 0;
        qfree(v69);
      }
    }
    while ( v53 != (__int64 *)v102 );
    result = v68;
    if ( v100 )
    {
      *(_QWORD *)&v101 = 0;
      qfree(v100);
      result = v68;
    }
    goto LABEL_75;
  }
  v44 = s2[0];
  v45 = haystack;
  if ( s1[1] )
    goto LABEL_68;
LABEL_69:
  if ( !strcmp(v45, v44) )
    goto LABEL_70;
LABEL_107:
  result = 1;
LABEL_75:
  if ( s2[3] )
  {
    v71 = result;
    *(_QWORD *)&v91 = 0;
    qfree(s2[3]);
    result = v71;
  }
  if ( s2[0] )
  {
    v72 = result;
    s2[1] = nullptr;
    qfree(s2[0]);
    result = v72;
  }
  if ( s1[3] )
  {
    v73 = result;
    *(_QWORD *)&v88 = 0;
    qfree(s1[3]);
    result = v73;
  }
  if ( s1[0] )
  {
    v74 = result;
    s1[1] = nullptr;
    qfree(s1[0]);
    return v74;
  }
  return result;
}
