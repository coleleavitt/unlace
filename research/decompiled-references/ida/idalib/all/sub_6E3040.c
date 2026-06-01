__int64 __fastcall sub_6E3040(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        double a4,
        __m128i a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  _QWORD *v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // r13
  char v14; // al
  unsigned __int8 v15; // al
  void *v16; // rdi
  void *v17; // r15
  unsigned __int8 v18; // r15
  char *v19; // r8
  const char *v20; // rcx
  unsigned int v21; // r13d
  const char *v23; // rdx
  const char *v24; // rdx
  bool v25; // sf
  __int64 v26; // rdx
  char *v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbp
  char *v30; // rbx
  void *v31; // rdi
  void *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  const char **v42; // r15
  unsigned __int8 v43; // al
  int v44; // r13d
  int v45; // ebp
  __int64 v46; // r13
  const char **v47; // rbx
  const char **v48; // r14
  const char *v49; // r15
  _QWORD *v50; // rax
  __int64 v51; // r15
  unsigned __int64 v52; // r13
  unsigned __int64 v53; // rax
  __int64 v54; // r12
  unsigned __int64 v55; // rax
  char *v56; // rsi
  __int64 v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  char *v60; // r8
  const char *v61; // rcx
  __int64 v62; // rdx
  void **v63; // rbx
  __int64 v64; // rbp
  __int64 v65; // r12
  void *v66; // rdi
  char v67; // r13
  const char *v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdi
  __int64 v78; // r13
  __int64 v79; // r12
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdi
  __int64 v85; // rcx
  __int64 *v86; // r13
  __int64 v87; // r14
  unsigned int v88; // eax
  char *v89; // r14
  bool v90; // r15
  char *v91; // rbx
  const char *v92; // r12
  const char *v93; // r12
  unsigned int v94; // eax
  const char *v95; // rax
  void *idati; // rdx
  const char *v97; // rcx
  const char *v98; // rcx
  const char *v99; // rcx
  const char *v100; // rcx
  char *v101; // rdx
  double v102; // xmm4_8
  double v103; // xmm5_8
  __int64 *v104; // r12
  void **v105; // rdi
  unsigned __int64 v106; // rdx
  __int64 *v107; // r8
  _BYTE *v108; // rsi
  const char *v109; // r8
  const char *v110; // rcx
  char *v111; // rdx
  __int64 v112; // r12
  __int64 v113; // r15
  char *v114; // rax
  void *v115; // rdi
  void *v116; // rax
  __m128i si128; // [rsp+0h] [rbp-278h]
  __m128i v119; // [rsp+50h] [rbp-228h] BYREF
  void **v120; // [rsp+60h] [rbp-218h]
  void *v121; // [rsp+68h] [rbp-210h]
  __int64 *v122; // [rsp+70h] [rbp-208h]
  bool v123; // [rsp+7Fh] [rbp-1F9h]
  _QWORD *v124; // [rsp+80h] [rbp-1F8h]
  __int64 v125; // [rsp+88h] [rbp-1F0h]
  __int64 v126; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v127; // [rsp+98h] [rbp-1E0h] BYREF
  void *v128; // [rsp+A0h] [rbp-1D8h] BYREF
  unsigned __int64 v129; // [rsp+A8h] [rbp-1D0h]
  void *v130; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v131; // [rsp+C8h] [rbp-1B0h]
  void *v132; // [rsp+E0h] [rbp-198h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-190h]
  void *v134; // [rsp+100h] [rbp-178h] BYREF
  __m128i v135; // [rsp+108h] [rbp-170h]
  char *v136; // [rsp+120h] [rbp-158h] BYREF
  __int64 v137; // [rsp+128h] [rbp-150h]
  __int64 v138; // [rsp+130h] [rbp-148h]
  void *v139; // [rsp+140h] [rbp-138h] BYREF
  __int64 *v140; // [rsp+148h] [rbp-130h]
  unsigned __int64 v141; // [rsp+150h] [rbp-128h]
  void *v142; // [rsp+160h] [rbp-118h] BYREF
  __m128i v143; // [rsp+168h] [rbp-110h] BYREF
  _BYTE v144[24]; // [rsp+180h] [rbp-F8h] BYREF
  __int128 v145; // [rsp+198h] [rbp-E0h]
  __int64 v146; // [rsp+1A8h] [rbp-D0h]
  _BYTE v147[3]; // [rsp+1B0h] [rbp-C8h]
  bool v148; // [rsp+1B3h] [rbp-C5h]
  void *ptr[2]; // [rsp+1C0h] [rbp-B8h] BYREF
  char v150; // [rsp+1D0h] [rbp-A8h] BYREF
  unsigned __int64 v151; // [rsp+238h] [rbp-40h]

  v11 = a1;
  v151 = __readfsqword(0x28u);
  v12 = a3;
  sub_6D7D30((__int64)&v128, (__int64)a1, a3, 1);
  v130 = nullptr;
  v131 = 0;
  if ( v129 <= 1 && (unsigned __int8)sub_6D8C80(a1, (__int64 *)&v130, v12) )
  {
    if ( a2 )
    {
      v23 = haystack;
      if ( (_QWORD)v131 )
        v23 = (const char *)v130;
      sub_6DC6D0((__int64)a1, a2, v23);
    }
    goto LABEL_24;
  }
  if ( (unsigned __int8)sub_6F41D0(a1, v12) )
  {
    if ( a2 )
    {
      sub_6D80F0((__int64)v144, (__int64)a1, v12, 1);
      v24 = haystack;
      if ( *(_QWORD *)&v144[8] )
        v24 = *(const char **)v144;
      sub_6DC6D0((__int64)a1, a2, v24);
      if ( *(_QWORD *)v144 )
      {
        *(_QWORD *)&v144[8] = 0;
        qfree(*(void **)v144);
      }
    }
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 60 <= 1 && v12 && (*(_BYTE *)(v12 + 180) & 7) == 0
    || (v120 = (void **)(v12 + 64), (unsigned __int8)sub_B8E180(v12 + 64)) )
  {
LABEL_24:
    v21 = 1;
    goto LABEL_25;
  }
  v13 = sub_B971E0(v12);
  if ( v13 )
  {
    v14 = *(_BYTE *)(v12 + 74);
    if ( (v14 & 1) == 0 && (v14 & 2) == 0 )
    {
      v50 = (_QWORD *)sub_B97210(v12);
      if ( v50 )
      {
        if ( (*v50 & 6LL) != 2 )
        {
          v51 = *(_QWORD *)(a1[7] + 144LL);
          v144[16] = 0;
          si128 = _mm_load_si128((const __m128i *)v144);
          sub_1DBA4B0((unsigned int)ptr, v51, v12, 0, 0, 0, si128.m128i_i64[0], si128.m128i_i64[1], 0, 0, 0, 0, 0);
          sub_1DD54A0(v51, *(_DWORD *)(v12 + 24), v12, v13, (unsigned int)ptr, 1, 0);
          if ( ptr[0] != &v150 )
            free(ptr[0]);
        }
      }
    }
  }
  sub_6D7650((__int64)&v132, (__int64)a1, v12);
  v15 = *(_BYTE *)(v12 + 73);
  memset(v144, 0, sizeof(v144));
  *(_WORD *)v147 = 1;
  v146 = 0;
  v148 = v15 >> 5 == 2;
  v147[2] = 0;
  v134 = nullptr;
  v126 = 0;
  v145 = 0;
  v135 = 0;
  if ( v129 > 1 )
  {
    sub_6D80F0((__int64)&v142, (__int64)a1, v12, 1);
    v16 = v134;
    v17 = v142;
    a5 = _mm_loadu_si128(&v143);
    v142 = nullptr;
    v143 = 0;
    if ( v134 )
    {
      v119 = a5;
      v135.m128i_i64[0] = 0;
      qfree(v134);
      a5 = _mm_load_si128(&v119);
      v16 = v142;
      v134 = v17;
      v135 = a5;
      if ( v142 )
      {
        v143.m128i_i64[0] = 0;
        qfree(v142);
      }
    }
    else
    {
      v134 = v17;
      v135 = a5;
    }
    v18 = 13;
    if ( v148 )
      v18 = 29;
    if ( *(char *)(v12 + 28) < 0 )
    {
      v119.m128i_i64[0] = (__int64)&v126;
      if ( a2 )
      {
        v95 = haystack;
        if ( v135.m128i_i64[0] )
          v95 = (const char *)v134;
        if ( v95 )
        {
          idati = (void *)v11[2];
          v143.m128i_i64[0] = (__int64)v95;
          v143.m128i_i16[4] = 0;
          if ( !idati )
            idati = (void *)get_idati(v16, 0);
          v142 = idati;
          create_tinfo(a2, v18, 189, &v142);
        }
        v119.m128i_i64[0] = (__int64)&v126;
      }
      goto LABEL_43;
    }
    v19 = (char *)haystack;
    if ( v133 )
      v19 = (char *)v132;
    v20 = haystack;
    if ( v135.m128i_i64[0] )
      v20 = (const char *)v134;
    v119.m128i_i64[0] = (__int64)&v126;
    v21 = sub_6DD660((__int64)v11, &v126, v12, v20, v19, v18);
    if ( !(_BYTE)v21 )
      goto LABEL_44;
    goto LABEL_40;
  }
  v25 = *(char *)(v12 + 28) < 0;
  v119.m128i_i64[0] = (__int64)&v126;
  if ( !v25 )
  {
LABEL_40:
    if ( (*(_BYTE *)(v12 + 74) & 1) == 0 )
    {
      if ( a2 )
      {
        v26 = v126;
        v126 = *a2;
        *a2 = v26;
      }
      goto LABEL_43;
    }
    v122 = (__int64 *)v144;
    sub_6DA960((__int64)v11, (__int64)v144, v12);
    sub_6E2580((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v33, v34, v35, v36);
    v41 = *(_QWORD *)(v12 + 128);
    v138 = 0;
    v123 = (*(_BYTE *)(v41 + 1) & 2) != 0;
    if ( (*(_BYTE *)(v12 + 29) & 1) == 0 )
    {
      v125 = 0;
      v42 = nullptr;
      v121 = nullptr;
LABEL_59:
      v43 = *(_BYTE *)(v12 + 73) >> 5;
      if ( v43 != 3 && v43 > 1u )
        goto LABEL_79;
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 60 > 1
        && (sub_6E2580((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v37, v38, v39, v40),
            (*(_BYTE *)(*(_QWORD *)(v12 + 128) + 1LL) & 1) != 0) )
      {
        v44 = HIDWORD(v146);
        LOBYTE(v44) = BYTE4(v146) & 0x7F;
        HIDWORD(v146) = v44;
        if ( v121 == v42 )
          goto LABEL_79;
      }
      else
      {
        v44 = HIDWORD(v146);
        LOBYTE(v44) = BYTE4(v146) | 0x80;
        HIDWORD(v146) = v44;
        if ( v121 == v42 )
        {
LABEL_124:
          v68 = haystack;
          if ( v135.m128i_i64[0] )
            v68 = (const char *)v134;
          sub_6E2CA0((__int64)v11, (__int64)v122, v12, (__int64)v68, v39, v40);
          sub_6E2580((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v69, v70, v71, v72);
          v77 = *(_QWORD *)(v12 + 128);
          if ( (*(_BYTE *)(v77 + 24) & 1) != 0 )
            v78 = sub_B96980();
          else
            v78 = *(_QWORD *)(v77 + 24);
          sub_6E2580((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v73, v74, v75, v76);
          v79 = v78 + 24LL * *(unsigned int *)(*(_QWORD *)(v12 + 128) + 16LL);
          sub_6E2580((__int64 *)(*(_QWORD *)(v12 + 104) + 96LL), *(_QWORD *)(v12 + 104), v80, v81, v82, v83);
          v84 = *(_QWORD *)(v12 + 128);
          if ( (*(_BYTE *)(v84 + 24) & 1) != 0 )
            v85 = sub_B96980();
          else
            v85 = *(_QWORD *)(v84 + 24);
          if ( v79 != v85 )
          {
            v86 = v122;
            v87 = v85;
            while ( 1 )
            {
              v88 = sub_6E6CA0(v11, v86, v12, v87);
              if ( !(_BYTE)v88 )
                break;
              v87 += 24;
              if ( v79 == v87 )
                goto LABEL_79;
            }
            v21 = v88;
            goto LABEL_117;
          }
LABEL_79:
          if ( (_BYTE)v126 )
          {
            v52 = sub_B8E970(v120);
            if ( v52 )
            {
              while ( (*(_BYTE *)(v52 + 28) & 0x7Fu) - 35 > 3 )
              {
                v53 = *(_QWORD *)(v52 + 8);
                v52 = v53 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v53 <= 7 )
                  goto LABEL_90;
              }
              v54 = v119.m128i_i64[0];
LABEL_85:
              if ( !(unsigned __int8)sub_6E8780(v11, v52, v54) )
              {
                v119.m128i_i64[0] = v54;
                goto LABEL_164;
              }
              while ( 1 )
              {
                v55 = *(_QWORD *)(v52 + 8);
                v52 = v55 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v55 <= 7 )
                  break;
                if ( (*(_BYTE *)(v52 + 28) & 0x7Fu) - 35 <= 3 )
                  goto LABEL_85;
              }
              v119.m128i_i64[0] = v54;
            }
          }
LABEL_90:
          if ( sub_B7E900(v12) && !(unsigned __int8)sub_6EAE40(v11, v122, v12) )
          {
LABEL_164:
            v21 = 0;
LABEL_117:
            v63 = (void **)v121;
            if ( v121 )
            {
              v64 = 0;
              v65 = v125;
              if ( v125 )
              {
                do
                {
                  v66 = *v63;
                  if ( *v63 )
                  {
                    v63[1] = nullptr;
                    qfree(v66);
                  }
                  ++v64;
                  v63 += 3;
                }
                while ( v65 != v64 );
              }
              qfree(v121);
            }
            goto LABEL_44;
          }
          if ( (v146 & 0x40000000000LL) != 0 && !sub_534320((__int64)v122) )
          {
            v97 = haystack;
            if ( v129 )
              v97 = (const char *)v128;
            sub_6DBD10(
              v11,
              v12,
              (__int64)"Inacceptable field offset or total size of the fields is bigger than the struct %s size",
              v97);
            goto LABEL_164;
          }
          if ( v123 )
            HIDWORD(v146) |= 0x80u;
          v56 = (char *)haystack;
          if ( v129 )
            v56 = (char *)v128;
          if ( (unsigned __int8)sub_5EBCA0(v122, v56) )
            HIDWORD(v146) |= 0x100u;
          v57 = 13;
          v127 = 0;
          if ( v148 )
            v57 = 29;
          v21 = create_tinfo(&v127, v57, 13, v122);
          if ( !(_BYTE)v21 )
          {
            v99 = haystack;
            if ( v129 )
              v99 = (const char *)v128;
            sub_6DBD10(v11, v12, (__int64)"Could not create tinfo for %s", v99);
            goto LABEL_177;
          }
          if ( (*(_BYTE *)(v12 + 29) & 1) != 0 )
            sub_6D4540((__int64)&v127, v12);
          v58 = sub_A7A9D0(v11[6], v12);
          if ( (v58 & 1) != 0 || (byte_8[v58 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
          {
            if ( !(_BYTE)v127 )
            {
              if ( (v58 & 4) != 0 )
                goto LABEL_109;
              goto LABEL_106;
            }
            v127 |= 0x40uLL;
          }
          if ( (v58 & 4) != 0 )
            goto LABEL_107;
LABEL_106:
          if ( (byte_8[v58 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
          {
LABEL_107:
            v59 = v127;
            if ( (_BYTE)v127 )
            {
              LOBYTE(v59) = v127 | 0x80;
              v127 = v59;
            }
          }
LABEL_109:
          if ( v129 > 1 )
          {
LABEL_110:
            v60 = (char *)haystack;
            if ( v133 )
              v60 = (char *)v132;
            v61 = haystack;
            if ( v135.m128i_i64[0] )
              v61 = (const char *)v134;
            sub_6DF2F0((__int64)v11, &v127, 1, v61, v60, v12, 0);
            if ( a2 )
            {
              v62 = v127;
              v127 = *a2;
              *a2 = v62;
            }
            goto LABEL_116;
          }
          if ( (unsigned __int8)sub_6DEE50(v11, &v134, (__int64)&v127, 1, nullptr, v12) )
          {
            v101 = (char *)haystack;
            if ( v135.m128i_i64[0] )
              v101 = (char *)v134;
            sub_6D86D0(v11, v12, v101);
            v120 = &v139;
            sub_6D7BB0((__int64 *)&v139, (__int64)v11, v12);
            v104 = v140;
            v105 = v120;
            if ( v140 )
            {
              v106 = (unsigned __int64)v140 + 1;
              v107 = v140;
              v104 = (__int64 *)((char *)v140 - 1);
            }
            else
            {
              v107 = (_QWORD *)(&dword_0 + 1);
              v106 = 2;
            }
            v108 = v139;
            if ( v141 < v106 )
            {
              v122 = v107;
              v120 = (void **)v106;
              v116 = (void *)qvector_reserve(v105, v139, v106, 1);
              v107 = v122;
              v106 = (unsigned __int64)v120;
              v139 = v116;
              v108 = v116;
            }
            v140 = (__int64 *)v106;
            *((_BYTE *)v104 + (_QWORD)v108) = 36;
            *((_BYTE *)v107 + (_QWORD)v139) = 0;
            v109 = haystack;
            v142 = nullptr;
            v143 = 0;
            if ( v135.m128i_i64[0] )
              v109 = (const char *)v134;
            v110 = haystack;
            if ( v140 )
              v110 = (const char *)v139;
            sub_6DC950(
              (__int64)v11,
              &v127,
              (__int64 *)&v142,
              v110,
              v109,
              0.0,
              *(double *)a5.m128i_i64,
              a6,
              a7,
              v102,
              v103,
              a10,
              a11);
            v111 = (char *)v142;
            if ( v142 )
            {
              v112 = 0;
              v113 = v143.m128i_i64[0];
              if ( v143.m128i_i64[0] )
              {
                do
                {
                  v114 = &v111[24 * v112];
                  v115 = *(void **)v114;
                  if ( *(_QWORD *)v114 )
                  {
                    *((_QWORD *)v114 + 1) = 0;
                    qfree(v115);
                    v111 = (char *)v142;
                  }
                  ++v112;
                }
                while ( v113 != v112 );
              }
              v143.m128i_i64[0] = 0;
              qfree(v111);
            }
            if ( v139 )
            {
              v140 = nullptr;
              qfree(v139);
            }
            goto LABEL_110;
          }
LABEL_177:
          v21 = 0;
LABEL_116:
          clear_tinfo_t(&v127);
          goto LABEL_117;
        }
      }
      v124 = v11;
      v45 = v44;
      v46 = v12;
      v47 = v42;
      v48 = (const char **)v121;
      do
      {
        if ( v48[1] )
        {
          v49 = *v48;
          if ( !strcmp(*v48, "__cppobj") )
          {
            LOBYTE(v45) = v45 | 0x80;
            HIDWORD(v146) = v45;
          }
          else if ( !strcmp(v49, "__tuple") )
          {
            v45 |= 0x800u;
            HIDWORD(v146) = v45;
          }
          else if ( !strcmp(v49, "__objc_interface") )
          {
            v45 |= 0x1000u;
            HIDWORD(v146) = v45;
          }
        }
        v48 += 3;
      }
      while ( v47 != v48 );
      v12 = v46;
      v67 = v45;
      v11 = v124;
      if ( (v67 & 0x80) == 0 )
        goto LABEL_79;
      goto LABEL_124;
    }
    v136 = nullptr;
    v137 = 0;
    sub_6D4D40((__int64)v11, (__int64)&v136, v12);
    v38 = (__int64)v136;
    v125 = v137;
    v89 = &v136[24 * v137];
    v121 = v136;
    if ( v89 == v136 )
    {
      v42 = (const char **)v121;
      goto LABEL_59;
    }
    v124 = (_QWORD *)v12;
    v90 = v123;
    v91 = v136;
    while ( 1 )
    {
      v142 = nullptr;
      if ( *((_QWORD *)v91 + 1) )
      {
        v92 = *(const char **)v91;
        if ( !strcmp(*(const char **)v91, "__unaligned") )
        {
          HIDWORD(v146) |= 0x40u;
          goto LABEL_139;
        }
      }
      else
      {
        v92 = haystack;
      }
      if ( (unsigned int)sub_6D4FD0((__int64)&v142, 0, (__int64)v92) == 1 )
      {
        v90 = v148;
        if ( v148 )
        {
          v98 = haystack;
          if ( v129 )
            v98 = (const char *)v128;
          sub_6DBD10(v11, (__int64)v124, (__int64)"Unions %s cannot be fixed", v98);
          goto LABEL_164;
        }
        v37 = 4294967294LL;
        if ( (unsigned __int64)v142 > 0xFFFFFFFE )
        {
          v100 = haystack;
          if ( v129 )
            v100 = (const char *)v128;
          sub_6DBD10(v11, (__int64)v124, (__int64)"Bad struct %s size", v100);
          goto LABEL_164;
        }
        v145 = (unsigned __int64)v142;
        v38 = 0;
        v94 = HIDWORD(v146) & 0xFFFFFFBF;
        *(_WORD *)&v147[1] = 0;
        LODWORD(v146) = 1;
        BYTE1(v94) = ((unsigned __int16)(WORD2(v146) & 0xFFBF) >> 8) | 4;
        HIDWORD(v146) = v94;
      }
      else
      {
        if ( *((_QWORD *)v91 + 1) )
        {
          v93 = *(const char **)v91;
          if ( !strcmp(*(const char **)v91, "__cppobj") || !strcmp(v93, "__tuple") || !strcmp(v93, "__objc_interface") )
            goto LABEL_139;
        }
        else
        {
          v93 = haystack;
        }
        sub_6E0950(v11, (__int64)v124, (__int64)"Misplaced annotation: %s", v93);
      }
LABEL_139:
      v91 += 24;
      if ( v89 == v91 )
      {
        v123 = v90;
        v42 = (const char **)v91;
        v12 = (__int64)v124;
        goto LABEL_59;
      }
    }
  }
LABEL_43:
  v21 = 1;
LABEL_44:
  clear_tinfo_t(v119.m128i_i64[0]);
  if ( v134 )
  {
    v135.m128i_i64[0] = 0;
    qfree(v134);
  }
  v27 = *(char **)v144;
  if ( *(_QWORD *)v144 )
  {
    v28 = *(_QWORD *)&v144[8];
    if ( *(_QWORD *)&v144[8] )
    {
      v29 = 0;
      do
      {
        v30 = &v27[144 * v29];
        clear_tinfo_t(v30 + 64);
        v31 = *((void **)v30 + 5);
        if ( v31 )
        {
          *((_QWORD *)v30 + 6) = 0;
          qfree(v31);
        }
        v32 = *((void **)v30 + 2);
        if ( v32 )
        {
          *((_QWORD *)v30 + 3) = 0;
          qfree(v32);
        }
        ++v29;
        v27 = *(char **)v144;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v144[8] = 0;
    qfree(v27);
  }
  if ( v132 )
  {
    v133 = 0;
    qfree(v132);
  }
LABEL_25:
  if ( v130 )
  {
    *(_QWORD *)&v131 = 0;
    qfree(v130);
  }
  if ( v128 )
  {
    v129 = 0;
    qfree(v128);
  }
  return v21;
}
