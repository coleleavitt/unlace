__int64 __fastcall sub_2EA480(__int64 a1, const char **a2, char *a3)
{
  bool v5; // zf
  const char *v6; // rax
  const char *v7; // rsi
  const char *v8; // r13
  unsigned __int64 v9; // r13
  unsigned int v10; // eax
  const char *v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  size_t v14; // rax
  size_t v15; // r8
  const char *v16; // rsi
  __int64 v17; // rdx
  char v18; // al
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  const char *v21; // rsi
  int tinfo_udt_member; // r14d
  __m128i si128; // xmm6
  __m128i v24; // xmm5
  __m128i v25; // xmm4
  __m128i v26; // xmm9
  __m128i v27; // xmm3
  __m128i v28; // xmm8
  __m128i v29; // xmm2
  __m128i v30; // xmm1
  __m128i v31; // xmm9
  __m128i v32; // xmm0
  __m128i v33; // xmm9
  __m128i v34; // xmm9
  __m128i v35; // xmm9
  __m128i v36; // xmm9
  __m128i v37; // xmm9
  __m128i v38; // xmm9
  __m128i v39; // xmm9
  const char *v40; // rax
  size_t v41; // r14
  size_t v42; // r14
  __int64 v43; // rax
  size_t v44; // r15
  __int64 v45; // r14
  __int16 v46; // ax
  __int64 v47; // rax
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // r14
  __int64 v52; // r8
  __int64 v53; // r15
  __int64 v54; // rdx
  char *v55; // r13
  __int64 v56; // rax
  const char *v57; // rsi
  volatile signed __int32 *v58; // rax
  volatile signed __int32 *v59; // rdi
  volatile signed __int32 *v60; // rdx
  signed __int32 v61; // eax
  QT::QLabel *v63; // r12
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  int v66; // r8d
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r15
  char *v70; // r14
  __int64 v71; // r13
  int v72; // r12d
  const char *v73; // rsi
  const char *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rax
  size_t v79; // r14
  __int64 v80; // r12
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  const char *v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // r14
  void *v87; // rax
  __int64 v88; // rax
  unsigned int v89; // eax
  size_t v90; // r8
  size_t v91; // r15
  size_t v92; // r9
  _BYTE *v93; // rsi
  size_t v94; // r8
  size_t v95; // r15
  __int64 v96; // r9
  _BYTE *v97; // rsi
  const char *v98; // r14
  size_t v99; // r8
  void *v100; // rax
  const void *v101; // rsi
  void *v102; // rdi
  __int64 v103; // rdx
  size_t v104; // rax
  size_t v105; // r8
  void *v106; // rdi
  size_t v107; // rdx
  const char *v108; // r12
  void *v109; // rdi
  __int64 v110; // [rsp+8h] [rbp-2B8h]
  size_t v111; // [rsp+8h] [rbp-2B8h]
  char v112; // [rsp+10h] [rbp-2B0h]
  size_t v113; // [rsp+10h] [rbp-2B0h]
  size_t v114; // [rsp+10h] [rbp-2B0h]
  char *s; // [rsp+18h] [rbp-2A8h]
  char sa; // [rsp+18h] [rbp-2A8h]
  char *sd; // [rsp+18h] [rbp-2A8h]
  char *sb; // [rsp+18h] [rbp-2A8h]
  char *sc; // [rsp+18h] [rbp-2A8h]
  unsigned __int64 v120; // [rsp+20h] [rbp-2A0h]
  __int64 v121; // [rsp+20h] [rbp-2A0h]
  size_t v122; // [rsp+20h] [rbp-2A0h]
  char *nptr; // [rsp+28h] [rbp-298h]
  char nptra; // [rsp+28h] [rbp-298h]
  char *nptrb; // [rsp+28h] [rbp-298h]
  char *nptrd; // [rsp+28h] [rbp-298h]
  char *nptrc; // [rsp+28h] [rbp-298h]
  unsigned __int64 v128; // [rsp+30h] [rbp-290h]
  unsigned int v129; // [rsp+3Ch] [rbp-284h]
  unsigned __int64 v130; // [rsp+48h] [rbp-278h]
  unsigned __int64 v131; // [rsp+50h] [rbp-270h]
  __int64 v132; // [rsp+50h] [rbp-270h]
  char *v133; // [rsp+50h] [rbp-270h]
  __int64 v134; // [rsp+50h] [rbp-270h]
  unsigned __int64 v136; // [rsp+58h] [rbp-268h]
  _WORD v137[5]; // [rsp+66h] [rbp-25Ah] BYREF
  __int64 v138; // [rsp+70h] [rbp-250h] BYREF
  __int128 v139; // [rsp+78h] [rbp-248h]
  void *src; // [rsp+90h] [rbp-230h] BYREF
  size_t n[3]; // [rsp+98h] [rbp-228h]
  void *v142; // [rsp+B0h] [rbp-210h] BYREF
  __int128 v143; // [rsp+B8h] [rbp-208h]
  __m128i v144[3]; // [rsp+D0h] [rbp-1F0h] BYREF
  __m128i v145; // [rsp+100h] [rbp-1C0h] BYREF
  __m128i v146; // [rsp+110h] [rbp-1B0h] BYREF
  __m128i v147; // [rsp+120h] [rbp-1A0h] BYREF
  __m128i v148; // [rsp+130h] [rbp-190h] BYREF
  __m128i v149; // [rsp+140h] [rbp-180h] BYREF
  __m128i v150; // [rsp+150h] [rbp-170h] BYREF
  _BYTE endptr[48]; // [rsp+160h] [rbp-160h] BYREF
  __m128i v152; // [rsp+190h] [rbp-130h] BYREF
  __m128i v153; // [rsp+1A0h] [rbp-120h] BYREF
  __m128i v154; // [rsp+1B0h] [rbp-110h] BYREF
  __m128i v155; // [rsp+1C0h] [rbp-100h] BYREF
  __m128i v156; // [rsp+1D0h] [rbp-F0h] BYREF
  __m128i v157[2]; // [rsp+1E0h] [rbp-E0h] BYREF
  __m128i v158; // [rsp+200h] [rbp-C0h]
  __m128i v159; // [rsp+210h] [rbp-B0h]
  __m128i v160; // [rsp+220h] [rbp-A0h]
  __m128i v161; // [rsp+230h] [rbp-90h]
  __m128i v162; // [rsp+240h] [rbp-80h]
  __m128i v163; // [rsp+250h] [rbp-70h]
  __m128i v164; // [rsp+260h] [rbp-60h]
  __m128i v165; // [rsp+270h] [rbp-50h]
  unsigned __int64 v166; // [rsp+288h] [rbp-38h]

  v5 = *(_QWORD *)(a1 + 176) == 0;
  v166 = __readfsqword(0x28u);
  v6 = a2[1];
  if ( v5 )
  {
    v7 = &s1;
    if ( !v6 )
    {
      v8 = &s1;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = *(const char **)(a1 + 168);
    v8 = &s1;
    if ( !v6 )
    {
      if ( !strcmp(&s1, v7) )
        goto LABEL_4;
      return free_result_vec(a3);
    }
  }
  v8 = *a2;
  if ( strcmp(*a2, v7) )
    return free_result_vec(a3);
LABEL_4:
  *(_QWORD *)endptr = sub_2407B0(v8);
  v9 = *(_QWORD *)endptr;
  if ( *(_QWORD *)endptr != -1 )
    goto LABEL_5;
  v77 = *(_QWORD *)(a1 + 136);
  if ( a2[1] )
  {
    if ( (unsigned __int8)str2ea(endptr, *a2, v77) )
      goto LABEL_121;
LABEL_142:
    v130 = getinf(20);
    v138 = 0;
    v128 = getinf(19);
    v89 = *(_DWORD *)(a1 + 144);
    v139 = 0;
    v129 = v89;
    if ( !v89 )
    {
      *(_QWORD *)(a1 + 160) = -1;
      v54 = *((_QWORD *)a3 + 1);
      goto LABEL_82;
    }
    goto LABEL_6;
  }
  if ( !(unsigned __int8)str2ea(endptr, &s1, v77) )
    goto LABEL_142;
LABEL_121:
  v9 = *(_QWORD *)endptr;
LABEL_5:
  v130 = getinf(20);
  v138 = 0;
  v128 = getinf(19);
  v10 = *(_DWORD *)(a1 + 144);
  v139 = 0;
  v129 = v10;
  if ( !v10 )
    goto LABEL_73;
LABEL_6:
  v11 = &s1;
  if ( a2[1] )
    v11 = *a2;
  v12 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)&v137[1] = 0;
  *(_QWORD *)&endptr[8] = v129;
  v131 = v12;
  *(_WORD *)&endptr[16] = 257;
  *(_QWORD *)endptr = get_idati(19);
  create_tinfo(&v137[1], 61, 189, endptr);
  if ( (get_tinfo_property(*(_QWORD *)&v137[1], 2) & 0x2F) == 0xD )
  {
    *(_QWORD *)&endptr[16] = 0;
    *(_QWORD *)&endptr[40] = 0;
    v156.m128i_i64[0] = 1;
    v13 = 0;
    v156.m128i_i32[2] = -1;
    if ( v12 != -1 )
      v13 = v12 >> 3;
    v157[0].m128i_i8[8] = 0;
    v157[0].m128i_i64[0] = 0;
    v120 = v13;
    *(_OWORD *)endptr = 0;
    *(_OWORD *)&endptr[24] = 0;
    v152 = 0;
    v153 = 0;
    if ( v11 )
    {
      v14 = strlen(v11);
      if ( v14 )
      {
        sb = (char *)v14;
        nptrb = (char *)(v14 + 1);
        *(_QWORD *)&endptr[16] = qvector_reserve(&endptr[16], 0, v14 + 1, 1);
        *(_QWORD *)&endptr[24] = nptrb;
        memmove(*(void **)&endptr[16], v11, (size_t)sb);
        sb[*(_QWORD *)&endptr[16]] = 0;
      }
    }
    nptr = strchr(v11, 43);
    if ( nptr || (nptr = strchr(v11, 45)) != nullptr )
    {
      memset(v144, 0, 24);
      s = nullptr;
      v15 = nptr - v11;
      if ( nptr == v11 )
        goto LABEL_16;
      v102 = nullptr;
      v103 = v15 + 1;
      if ( v15 != -1 )
      {
        sc = (char *)(v15 + 1);
        v144[0].m128i_i64[0] = qvector_reserve(v144, 0, v103, 1);
        v15 = nptr - v11;
        v102 = (void *)v144[0].m128i_i64[0];
        v103 = (__int64)sc;
      }
      v144[0].m128i_i64[1] = v103;
      sd = (char *)v15;
      memmove(v102, v11, v15);
      sd[v144[0].m128i_i64[0]] = 0;
      s = (char *)v144[0].m128i_i64[0];
      if ( v144[0].m128i_i64[1]
        && v144[0].m128i_i64[0]
        && (v104 = strlen((const char *)v144[0].m128i_i64[0]), (v105 = v104) != 0) )
      {
        v106 = *(void **)&endptr[16];
        v107 = v104 + 1;
        if ( *(_QWORD *)&endptr[32] < v104 + 1 )
        {
          v111 = v104;
          v114 = v104 + 1;
          *(_QWORD *)&endptr[16] = qvector_reserve(&endptr[16], *(_QWORD *)&endptr[16], v107, 1);
          v105 = v111;
          v106 = *(void **)&endptr[16];
          v107 = v114;
        }
        *(_QWORD *)&endptr[24] = v107;
        v113 = v105;
        memmove(v106, s, v105);
        *(_BYTE *)(*(_QWORD *)&endptr[16] + v113) = 0;
      }
      else
      {
LABEL_16:
        *(_QWORD *)&endptr[24] = 0;
      }
    }
    else
    {
      s = nullptr;
      nptr = (char *)v11;
    }
    v16 = *(const char **)&v137[1];
    if ( (int)find_tinfo_udt_member(endptr, *(_QWORD *)&v137[1], 3) < 0 )
      nptr = nullptr;
    else
      v131 = *(_QWORD *)endptr;
    clear_tinfo_t(&v153);
    if ( *(_QWORD *)&endptr[40] )
    {
      v152.m128i_i64[0] = 0;
      qfree(*(_QWORD *)&endptr[40], v16);
    }
    if ( *(_QWORD *)&endptr[16] )
    {
      *(_QWORD *)&endptr[24] = 0;
      qfree(*(_QWORD *)&endptr[16], v16);
    }
    if ( s )
      qfree(s, v16);
    if ( nptr )
    {
      v11 = nptr;
      v18 = *nptr;
      if ( v131 == -1 )
      {
        if ( !v18 )
          goto LABEL_188;
        v11 = nptr;
        sa = 1;
        v120 = -1;
        nptra = 1;
      }
      else
      {
        if ( !v18 )
        {
LABEL_42:
          nptra = 1;
LABEL_43:
          src = nullptr;
          *(_OWORD *)n = 0;
          if ( (v137[1] & 0x100) != 0 )
            get_tinfo_pdata(&src, *(_QWORD *)&v137[1], 0);
          v21 = (const char *)&v137[1];
          v137[0] = 0;
          v149.m128i_i64[0] = 1;
          v149.m128i_i32[2] = -1;
          v150.m128i_i64[0] = 0;
          v150.m128i_i8[8] = 0;
          memset(v144, 0, sizeof(v144));
          v145 = 0;
          v146 = 0;
          ltype_info_t(0.0, (int)v137, (__int64)&v137[1], v17);
          if ( nptra )
          {
            v21 = *(const char **)&v137[1];
            memset(&endptr[8], 0, 40);
            v156.m128i_i64[0] = 1;
            v156.m128i_i32[2] = -1;
            v157[0].m128i_i64[0] = 0;
            v157[0].m128i_i8[8] = 0;
            *(_QWORD *)endptr = v131;
            v152 = 0;
            v153 = 0;
            tinfo_udt_member = find_tinfo_udt_member(endptr, *(_QWORD *)&v137[1], 0);
            if ( tinfo_udt_member >= 0 )
            {
              si128 = _mm_load_si128(&v144[2]);
              v24 = _mm_load_si128(&v145);
              v25 = _mm_load_si128(&v146);
              v26 = _mm_load_si128((const __m128i *)endptr);
              v27 = _mm_load_si128(&v147);
              v158 = _mm_load_si128(&v144[1]);
              v28 = _mm_load_si128(v144);
              v29 = _mm_load_si128(&v148);
              v159 = si128;
              v144[0] = v26;
              v30 = _mm_load_si128(&v149);
              v31 = _mm_load_si128((const __m128i *)&endptr[16]);
              v32 = _mm_load_si128(&v150);
              v157[1] = v28;
              v144[1] = v31;
              v33 = _mm_load_si128((const __m128i *)&endptr[32]);
              v160 = v24;
              v144[2] = v33;
              v34 = _mm_load_si128(&v152);
              v161 = v25;
              v145 = v34;
              v35 = _mm_load_si128(&v153);
              v162 = v27;
              v146 = v35;
              v36 = _mm_load_si128(&v154);
              v163 = v29;
              v147 = v36;
              v37 = _mm_load_si128(&v155);
              v164 = v30;
              v165 = v32;
              v148 = v37;
              v38 = _mm_load_si128(&v156);
              *(__m128i *)endptr = v28;
              v149 = v38;
              v39 = _mm_load_si128(v157);
              *(__m128i *)&endptr[16] = v158;
              v150 = v39;
              *(__m128i *)&endptr[32] = si128;
              v152 = v24;
              v153 = v25;
              v154 = v27;
              v155 = v29;
              v156 = v30;
              v157[0] = v32;
            }
            clear_tinfo_t(&v153);
            if ( *(_QWORD *)&endptr[40] )
            {
              v152.m128i_i64[0] = 0;
              qfree(*(_QWORD *)&endptr[40], v21);
            }
            if ( *(_QWORD *)&endptr[16] )
            {
              *(_QWORD *)&endptr[24] = 0;
              qfree(*(_QWORD *)&endptr[16], v21);
            }
            if ( tinfo_udt_member >= 0 )
            {
              v142 = nullptr;
              v40 = &s1;
              v143 = 0;
              if ( v144[1].m128i_i64[1] )
                v40 = (const char *)v144[1].m128i_i64[0];
              print_tinfo(&v142, 0, 0, 0, 16, &v146, v40, 0);
              v21 = nullptr;
              memset(endptr, 0, 24);
              *(_QWORD *)endptr = qvector_reserve(endptr, 0, 3, 1);
              *(_QWORD *)&endptr[8] = 3;
              strcpy(*(char **)endptr, ": ");
              v41 = *(_QWORD *)&endptr[8];
              if ( *(_QWORD *)&endptr[8] )
              {
                v94 = *(_QWORD *)&endptr[8] - 1LL;
                if ( *(_QWORD *)&endptr[8] != 1 )
                {
                  v95 = n[0];
                  v96 = *(_QWORD *)&endptr[8] - 1LL;
                  if ( n[0] )
                  {
                    v95 = n[0] - 1;
                    v96 = v94 + n[0] - 1;
                    v41 = *(_QWORD *)&endptr[8] + n[0] - 1;
                  }
                  v97 = src;
                  if ( n[1] < v41 )
                  {
                    v121 = v96;
                    nptrd = (char *)(*(_QWORD *)&endptr[8] - 1LL);
                    src = (void *)qvector_reserve(&src, src, v41, 1);
                    v96 = v121;
                    v97 = src;
                    v94 = (size_t)nptrd;
                  }
                  n[0] = v41;
                  v97[v96] = 0;
                  v21 = *(const char **)endptr;
                  memcpy((char *)src + v95, *(const void **)endptr, v94);
                }
              }
              if ( *(_QWORD *)endptr )
              {
                *(_QWORD *)&endptr[8] = 0;
                qfree(*(_QWORD *)endptr, v21);
              }
              v42 = v143;
              if ( (_QWORD)v143 )
              {
                v90 = v143 - 1;
                if ( (_QWORD)v143 != 1 )
                {
                  v91 = n[0];
                  v92 = v143 - 1;
                  if ( n[0] )
                  {
                    v91 = n[0] - 1;
                    v92 = v90 + n[0] - 1;
                    v42 = v143 + n[0] - 1;
                  }
                  v93 = src;
                  if ( n[1] < v42 )
                  {
                    v122 = v92;
                    nptrc = (char *)(v143 - 1);
                    src = (void *)qvector_reserve(&src, src, v42, 1);
                    v92 = v122;
                    v93 = src;
                    v90 = (size_t)nptrc;
                  }
                  n[0] = v42;
                  v93[v92] = 0;
                  v21 = (const char *)v142;
                  memcpy((char *)src + v91, v142, v90);
                }
              }
              if ( v142 )
              {
                *(_QWORD *)&v143 = 0;
                qfree(v142, v21);
              }
            }
          }
          v43 = operator new(0x58u);
          v44 = n[0];
          v45 = v43;
          *(_QWORD *)v43 = &search_result_t___vtable;
          *(_QWORD *)(v43 + 8) = 0;
          *(_OWORD *)(v43 + 16) = 0;
          if ( v44 )
          {
            v87 = (void *)qalloc_or_throw(v44);
            *(_QWORD *)(v45 + 8) = v87;
            v21 = (const char *)src;
            *(_QWORD *)(v45 + 24) = v44;
            memcpy(v87, v21, v44);
            *(_QWORD *)(v45 + 16) = v44;
          }
          *(_BYTE *)(v45 + 76) = 1;
          *(_QWORD *)v45 = &ltypes_search_result_t___vtable;
          v46 = v137[0];
          *(_QWORD *)(v45 + 32) = 2;
          *(_WORD *)(v45 + 68) = v46;
          *(_QWORD *)(v45 + 40) = 0;
          *(_DWORD *)(v45 + 72) = v129;
          *(_OWORD *)(v45 + 48) = 0;
          *(_QWORD *)(v45 + 80) = v131;
          clear_tinfo_t(&v146);
          if ( v144[2].m128i_i64[1] )
          {
            v145.m128i_i64[0] = 0;
            qfree(v144[2].m128i_i64[1], v21);
          }
          if ( v144[1].m128i_i64[0] )
          {
            v144[1].m128i_i64[1] = 0;
            qfree(v144[1].m128i_i64[0], v21);
          }
          if ( src )
          {
            n[0] = 0;
            qfree(src, v21);
          }
          clear_tinfo_t(&v137[1]);
          if ( v45 )
          {
            v47 = v139;
            v48 = v138;
            if ( *((_QWORD *)&v139 + 1) < (unsigned __int64)(v139 + 1) )
            {
              v138 = qvector_reserve(&v138, v138, v139 + 1, 8);
              v48 = v138;
              v47 = v139;
            }
            *(_QWORD *)(v48 + 8 * v47) = v45;
            *(_QWORD *)&v139 = v139 + 1;
          }
          goto LABEL_73;
        }
        nptra = 1;
        v120 = v131 >> 3;
        sa = 1;
      }
LABEL_33:
      if ( v18 == 45 )
      {
        v110 = -1;
      }
      else
      {
        v112 = 0;
        v110 = 1;
        if ( v18 != 43 )
          goto LABEL_35;
      }
      v112 = 1;
      ++v11;
LABEL_35:
      *(_QWORD *)endptr = 0;
      v20 = strtoull(v11, (char **)endptr, 16);
      v17 = *(_QWORD *)endptr;
      if ( *(_QWORD *)endptr && !**(_BYTE **)endptr )
      {
        if ( v112 )
        {
          if ( v110 == -1 )
          {
            if ( v120 <= v20 )
              v20 = v120;
            v17 = v20;
            v20 = v120 - v20;
          }
          else
          {
            v17 = ~v120;
            if ( ~v120 <= v20 )
              v20 = ~v120;
            v20 += v120;
          }
        }
        else if ( v110 == -1 )
        {
          v131 = 0;
          if ( nptra )
            goto LABEL_42;
          goto LABEL_177;
        }
        if ( nptra )
        {
          if ( v20 != -1 )
          {
            v131 = 8 * v20;
            goto LABEL_42;
          }
LABEL_188:
          nptra = 1;
          v131 = -1;
          goto LABEL_43;
        }
        v131 = v20;
LABEL_177:
        nptra = 0;
        goto LABEL_43;
      }
      if ( sa )
        goto LABEL_43;
      goto LABEL_138;
    }
    if ( v11 )
    {
      v18 = *v11;
      if ( *v11 )
      {
        nptra = 1;
        sa = 0;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v19 = 0;
    if ( v12 != -1 )
      v19 = v12;
    v120 = v19;
    if ( v11 )
    {
      v18 = *v11;
      nptra = 0;
      sa = 0;
      if ( *v11 )
        goto LABEL_33;
    }
  }
LABEL_138:
  clear_tinfo_t(&v137[1]);
LABEL_73:
  if ( v9 < v130 && v9 >= v128 )
  {
    memset(endptr, 0, 24);
    get_ea_name(endptr, v9, 0, 0);
    if ( *(_QWORD *)&endptr[8] <= 1u )
    {
      v98 = a2[1];
      if ( v98 && (v99 = (size_t)(v98 - 1), v98 != (_BYTE *)&dword_0 + 1) )
      {
        v108 = *a2;
        v109 = *(void **)endptr;
        if ( *(_QWORD *)&endptr[16] < (unsigned __int64)v98 )
        {
          *(_QWORD *)endptr = qvector_reserve(endptr, *(_QWORD *)endptr, v98, 1);
          v99 = (size_t)(v98 - 1);
          v109 = *(void **)endptr;
        }
        *(_QWORD *)&endptr[8] = v98;
        memmove(v109, v108, v99);
        v98[*(_QWORD *)endptr - 1] = 0;
      }
      else
      {
        *(_QWORD *)&endptr[8] = 0;
      }
    }
    v78 = operator new(0x50u);
    v79 = *(_QWORD *)&endptr[8];
    v80 = v78;
    *(_QWORD *)v78 = &search_result_t___vtable;
    *(_QWORD *)(v78 + 8) = 0;
    *(_OWORD *)(v78 + 16) = 0;
    if ( v79 )
    {
      v100 = (void *)qalloc_or_throw(v79);
      *(_QWORD *)(v80 + 8) = v100;
      v101 = *(const void **)endptr;
      *(_QWORD *)(v80 + 24) = v79;
      memcpy(v100, v101, v79);
      *(_QWORD *)(v80 + 16) = v79;
    }
    v81 = *((_QWORD *)&v139 + 1);
    *(_QWORD *)(v80 + 32) = 0;
    *(_QWORD *)v80 = &dummy_search_result_t___vtable;
    v82 = v139;
    *(_QWORD *)(v80 + 40) = 0;
    v83 = (const char *)v138;
    *(_QWORD *)(v80 + 72) = v9;
    *(_DWORD *)(v80 + 64) = 100;
    v144[0].m128i_i64[0] = v80;
    *(_OWORD *)(v80 + 48) = 0;
    if ( v81 < v82 + 1 )
    {
      v138 = qvector_reserve(&v138, v83, v82 + 1, 8);
      v83 = (const char *)v138;
      v82 = v139;
    }
    *(_QWORD *)&v83[8 * v82] = v80;
    v84 = v139;
    v85 = *(_QWORD *)endptr;
    *(_QWORD *)(a1 + 160) = v9;
    v86 = v84 + 1;
    *(_QWORD *)&v139 = v84 + 1;
    if ( v85 )
    {
      *(_QWORD *)&endptr[8] = 0;
      qfree(v85, v83);
      v86 = v139;
    }
    v51 = 8 * v86;
    v50 = v138;
    v52 = v138 + v51;
    v53 = v51 >> 3;
  }
  else
  {
    v49 = v139;
    v50 = v138;
    *(_QWORD *)(a1 + 160) = -1;
    v51 = 8 * v49;
    v52 = v50 + 8 * v49;
    v53 = (8 * v49) >> 3;
  }
  v54 = *((_QWORD *)a3 + 1);
  if ( v53 )
  {
    v55 = *(char **)a3;
    if ( *((_QWORD *)a3 + 2) < (unsigned __int64)(v53 + v54) )
    {
      v134 = v52;
      v55 = (char *)qvector_reserve(a3, v55, v53 + v54, 8);
      v52 = v134;
      *(_QWORD *)a3 = v55;
      v54 = *((_QWORD *)a3 + 1);
    }
    v132 = v52;
    memmove(&v55[v51], v55, 8 * v54);
    v56 = 0;
    if ( v50 != v132 )
    {
      do
      {
        *(_QWORD *)&v55[v56] = *(_QWORD *)(v50 + v56);
        v56 += 8;
      }
      while ( v132 - v50 != v56 );
    }
    v54 = v53 + *((_QWORD *)a3 + 1);
    *((_QWORD *)a3 + 1) = v54;
  }
LABEL_82:
  if ( v54 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 72LL) = 2;
    v63 = *(QT::QLabel **)(a1 + 88);
    QT::QString::asprintf((QT::QString *)endptr, "Found %zu matches.", *((_QWORD *)a3 + 1));
    QT::QLabel::setText(v63, (const QT::QString *)endptr);
    if ( *(_QWORD *)endptr && !_InterlockedSub(*(volatile signed __int32 **)endptr, 1u) )
      free(*(void **)endptr);
    QT::QWidget::show(*(QT::QWidget **)(a1 + 88));
    v64 = *(_QWORD *)(a1 + 216);
    v65 = *(_QWORD *)(a1 + 176);
    v66 = 0;
    if ( v65 < v64 )
      goto LABEL_123;
    if ( v64 && v65 )
    {
      v67 = 0;
      v68 = 0;
      do
      {
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 168) + v67) == *(_BYTE *)(*(_QWORD *)(a1 + 208) + v68) )
          ++v68;
        ++v67;
      }
      while ( v68 < v64 && v67 < v65 );
    }
    else
    {
      v68 = 0;
    }
    v66 = 0;
    if ( v68 != v64 || (v69 = *((_QWORD *)a3 + 1)) == 0 )
    {
LABEL_123:
      v57 = a3;
      sub_2E7380(*(QT::QAbstractItemModel **)(a1 + 80), (__int64)a3, v66);
      goto LABEL_84;
    }
    v133 = a3;
    v70 = *(char **)a3;
    v136 = 0;
    v71 = *(_QWORD *)(a1 + 240);
    v72 = 0;
    while ( 1 )
    {
      v75 = *(_QWORD *)&v70[8 * v136];
      v76 = *(_QWORD *)(v75 + 16);
      if ( v71 )
        break;
      v73 = &s1;
      if ( v76 )
        goto LABEL_111;
LABEL_117:
      v72 = v136;
LABEL_113:
      if ( ++v136 == 1000 || v136 >= v69 )
      {
        v66 = v72;
        a3 = v133;
        goto LABEL_123;
      }
    }
    v73 = *(const char **)(a1 + 232);
    v74 = &s1;
    if ( v76 )
LABEL_111:
      v74 = *(const char **)(v75 + 8);
    if ( strcmp(v74, v73) )
      goto LABEL_113;
    goto LABEL_117;
  }
  v57 = (_BYTE *)(&dword_0 + 1);
  sub_2EA290(a1, 1);
LABEL_84:
  v58 = *(volatile signed __int32 **)(a1 + 200);
  *(_OWORD *)(a1 + 192) = 0;
  v59 = v58;
  if ( v58 )
  {
    v60 = v58 + 2;
    if ( *((_QWORD *)v58 + 1) == 0x100000001LL )
    {
      v88 = *(_QWORD *)v58;
      *((_QWORD *)v59 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, const char *, volatile signed __int32 *))(v88 + 16))(
        v59,
        v57,
        v60);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 24LL))(v59);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v61 = _InterlockedExchangeAdd(v60, 0xFFFFFFFF);
      }
      else
      {
        v61 = *((_DWORD *)v58 + 2);
        *((_DWORD *)v59 + 2) = v61 - 1;
      }
      if ( v61 == 1 )
        sub_28E9C0(v59);
    }
  }
  if ( v138 )
  {
    *(_QWORD *)&v139 = 0;
    qfree(v138, v57);
  }
  return v166 - __readfsqword(0x28u);
}
