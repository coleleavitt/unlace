__int64 *__fastcall sub_6E4130(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128i a6,
        double a7,
        __m128 a8,
        double a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 *v12; // r13
  __int64 v15; // rdi
  __int64 v17; // rdx
  __int64 v18; // r15
  unsigned __int64 v19; // r14
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // r8
  _QWORD *v30; // r14
  char *v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r13
  char *v34; // r12
  void *v35; // rdi
  void *v36; // rdi
  __int64 v37; // rax
  char v38; // dl
  __int64 v39; // r14
  __int64 v40; // r13
  char *v41; // r12
  void *v42; // rdi
  void *v43; // rdi
  __int64 v44; // rsi
  char *v45; // r15
  int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r14
  __int32 v53; // r8d
  char v54; // al
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r13
  const char *v60; // rdx
  char *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdi
  __int64 v66; // r15
  __int64 *v67; // r14
  __int64 v68; // rax
  __m128i v69; // xmm0
  int v70; // eax
  char *v71; // rcx
  __int64 v72; // rdi
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  unsigned int *v77; // r14
  size_t v78; // r13
  void *v79; // rax
  void *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r13
  double v84; // xmm4_8
  double v85; // xmm5_8
  int v86; // eax
  __int64 v87; // r15
  __int64 v88; // rax
  size_t v89; // r13
  const char *v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdi
  unsigned __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rax
  __int64 v96; // r13
  const char *v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // r15
  char *v100; // rcx
  bool v101; // zf
  __m128i v102; // xmm0
  __m128i si128; // xmm0
  char *v104; // r14
  void *v105; // rax
  size_t v106; // rdx
  __int64 v107; // r14
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // r13
  const char *v114; // rdx
  __int64 v115; // rdx
  char *v116; // rdi
  size_t v117; // r14
  __int64 v118; // r13
  char *v119; // r12
  void *v120; // rdi
  void *v121; // rdi
  void *v122; // rax
  size_t v123; // rdx
  __int64 v124; // rax
  const char *v125; // rdx
  char *v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // r13
  _BYTE *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rsi
  unsigned __int8 v133; // al
  int v134; // eax
  __int64 v135; // rdi
  char v136; // cl
  char *v137; // rdx
  double v138; // xmm4_8
  double v139; // xmm5_8
  __int64 v140; // rax
  const char *v141; // rcx
  __int64 v142; // rdx
  char v143; // al
  size_t v144; // r14
  char *v145; // rdx
  void *v146; // rax
  __int64 v147; // r13
  __m128i v148; // xmm0
  __m128i v149; // xmm0
  size_t v150; // r14
  __int64 v151; // r13
  char *v152; // r12
  void *v153; // rdi
  void *v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // r15
  __m128i v159; // [rsp+0h] [rbp-198h] BYREF
  __m128i *v160; // [rsp+10h] [rbp-188h]
  char **p_s1; // [rsp+18h] [rbp-180h]
  _BYTE *v162; // [rsp+20h] [rbp-178h]
  size_t n; // [rsp+28h] [rbp-170h]
  __int64 v164; // [rsp+38h] [rbp-160h] BYREF
  _BYTE v165[24]; // [rsp+40h] [rbp-158h] BYREF
  char *s1; // [rsp+60h] [rbp-138h] BYREF
  size_t v167[2]; // [rsp+68h] [rbp-130h]
  __int128 v168; // [rsp+78h] [rbp-120h]
  __int64 v169; // [rsp+88h] [rbp-110h]
  int v170; // [rsp+90h] [rbp-108h]
  __m128i v171[9]; // [rsp+A0h] [rbp-F8h] BYREF
  void *v172[2]; // [rsp+130h] [rbp-68h] BYREF
  _QWORD v173[11]; // [rsp+140h] [rbp-58h] BYREF

  v12 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v173[3] = __readfsqword(0x28u);
  v17 = *(unsigned __int8 *)(v15 + 16);
  if ( (_BYTE)v17 != 8 )
  {
    *a1 = 0;
    v21 = (unsigned __int8)v17;
    v18 = a3;
    v19 = (unsigned __int64)v12;
    if ( (unsigned __int8)v17 <= 0x3Au )
    {
LABEL_5:
      switch ( v17 )
      {
        case 1LL:
          v57 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 1 && v57 )
            goto LABEL_85;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 1 )
            goto LABEL_84;
          v57 = 0;
          goto LABEL_85;
        case 2LL:
        case 4LL:
        case 5LL:
        case 6LL:
          v48 = *v12;
          v49 = *(_QWORD *)(*v12 + 32);
          if ( (_DWORD)v21 != 2 )
            goto LABEL_60;
          v132 = *(_QWORD *)(v48 + 40);
          v133 = *(_BYTE *)(v48 + 19);
          if ( (v133 & 2) != 0 )
          {
            v134 = *(_DWORD *)(v132 + 8);
            v171[0].m128i_i32[2] = v134;
            if ( (unsigned int)v134 <= 0x40 )
            {
              v171[0].m128i_i64[0] = *(_QWORD *)v132;
LABEL_278:
              v135 = v171[0].m128i_i64[0];
              goto LABEL_279;
            }
            sub_2205510(v171);
          }
          else
          {
            v134 = 8 * ((v133 >> 2) & 0x1F);
            v171[0].m128i_i32[2] = v134;
            if ( v134 <= 64 )
            {
              v171[0].m128i_i64[0] = v132;
              goto LABEL_278;
            }
            sub_2205470(v171, v132, 0);
          }
          v134 = v171[0].m128i_i32[2];
          v135 = v171[0].m128i_i64[0];
          if ( v171[0].m128i_i32[2] > 0x40u )
          {
            v158 = *(_QWORD *)v171[0].m128i_i64[0];
            if ( v171[0].m128i_i64[0] )
              operator delete[]((void *)v171[0].m128i_i64[0]);
            LODWORD(v50) = 0;
            if ( v158 >= 0 )
              LODWORD(v50) = v158;
            goto LABEL_61;
          }
LABEL_279:
          if ( v134 )
          {
            v136 = 64 - v134;
            LODWORD(v50) = 0;
            if ( v135 << v136 >> v136 >= 0 )
              v50 = v135 << v136 >> v136;
          }
          else
          {
LABEL_60:
            LODWORD(v50) = 0;
          }
LABEL_61:
          v171[0].m128i_i32[2] = 0;
          v171[0].m128i_i32[3] = v50;
          v171[0].m128i_i64[0] = 0;
          sub_6E4130(&s1, a2, v49);
          copy_tinfo_t(v171);
          clear_tinfo_t(&s1);
          if ( v171[0].m128i_i8[0] )
            create_tinfo(a1, 11, 11, v171);
LABEL_63:
          clear_tinfo_t(v171);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 7LL:
          v57 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 7 && v57 )
            goto LABEL_85;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 7 )
            goto LABEL_121;
          goto LABEL_84;
        case 11LL:
          v171[0].m128i_i64[0] = 0;
          get_stock_tinfo(v171, 7);
          copy_tinfo_t(a1);
          clear_tinfo_t(v171);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 13LL:
          sub_6DF8C0(v171, (_QWORD *)a2, a3);
          goto LABEL_74;
        case 14LL:
          sub_6E6950(v171, a2, a3, *v12, v21);
          goto LABEL_79;
        case 15LL:
          v66 = *v12;
          v67 = *(__int64 **)(*v12 + 32);
          sub_6E4130(v171, a2, v67);
          copy_tinfo_t(a1);
          clear_tinfo_t(v171);
          v37 = *a1;
          v38 = *a1;
          if ( v38 )
            goto LABEL_30;
          if ( !*(_QWORD *)(v66 + 24) )
            goto LABEL_29;
          v68 = *(_QWORD *)(a2 + 48);
          v159.m128i_i64[0] = (__int64)v173;
          v69 = _mm_loadu_si128((const __m128i *)(v68 + 17464));
          v172[0] = v173;
          v171[2].m128i_i64[1] = 0x100000000LL;
          *(__m128i *)v165 = v69;
          memset(&v171[1], 0, 24);
          v171[0].m128i_i64[0] = (__int64)&off_2BEBE68;
          *(_DWORD *)v165 = _mm_cvtsi128_si32(v69) & 0xFDBF8FFF | 0x2001000;
          v171[3].m128i_i64[0] = (__int64)v172;
          v172[1] = nullptr;
          LOBYTE(v173[0]) = 0;
          v171[0].m128i_i64[1] = 0;
          sub_227B8B0(v171, 0, 0, 0);
          sub_F07C00(*(_QWORD *)(v66 + 24), (unsigned int)v171, 0, (unsigned int)v165, 0, 0, (__int64)"\n", 1);
          s1 = nullptr;
          *(_OWORD *)v167 = 0;
          sub_35A790(&s1);
          if ( !v167[0] )
            goto LABEL_289;
          v160 = (__m128i *)s1;
          v70 = strcmp(s1, "decltype(nullptr)");
          v71 = (char *)v160;
          if ( !v70 )
          {
            sub_6D4670((__int64 *)&s1, "std::nullptr_t");
            if ( v167[0] )
              v71 = s1;
            else
LABEL_289:
              v71 = (char *)haystack;
          }
          sub_6DF680(&v164, a2, v67, v71);
          copy_tinfo_t(a1);
          clear_tinfo_t(&v164);
          if ( s1 )
          {
            v167[0] = 0;
            qfree(s1);
          }
          v171[0].m128i_i64[0] = (__int64)&off_2BEBE68;
          sub_227B7A0(v171);
          if ( v172[0] != (void *)v159.m128i_i64[0] )
            operator delete(v172[0], v173[0] + 1LL);
          goto LABEL_28;
        case 16LL:
        case 17LL:
          v56 = *v12;
          if ( !*v12 )
            return a1;
          if ( (*(_QWORD *)(v56 + 24) & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
          {
            sub_6E4130(v171, a2, *(_QWORD *)(v56 + 24));
            copy_tinfo_t(a1);
            clear_tinfo_t(v171);
          }
          else
          {
            create_tinfo(a1, 1, 7, 0);
          }
          goto LABEL_28;
        case 24LL:
          v92 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 24 && v92 )
            goto LABEL_163;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v92 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
            goto LABEL_162;
          goto LABEL_194;
        case 25LL:
          v81 = *v12;
          memset(v171, 0, 88);
          v171[5].m128i_i8[8] = 16;
          v171[1].m128i_i32[2] = 2 * (*(_BYTE *)(v81 + 21) & 1);
          sub_6E4130(&s1, a2, *(_QWORD *)(v81 + 24));
          copy_tinfo_t(&v171[2]);
          clear_tinfo_t(&s1);
          if ( v171[2].m128i_i8[0] && !(unsigned __int8)create_tinfo(a1, 12, 12, v171) )
          {
            sub_6DB090((_QWORD *)a2, nullptr, a3);
            clear_tinfo_t(a1);
          }
          sub_5E5B70((char **)v171);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 26LL:
          goto LABEL_9;
        case 30LL:
          v72 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 30 || !v72 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 30 )
              v72 = sub_F63050(v72, a2, v17, a4, v21);
            else
              v72 = 0;
          }
          goto LABEL_114;
        case 33LL:
          v99 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 33 || !v99 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v99 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
              v99 = sub_F63050(*v12, a2, v17, a4, v21);
            else
              v99 = 0;
          }
          v162 = (_BYTE *)sub_F61C10(v99, a2, v17, a4, v21);
          memset(v171, 0, sizeof(v171));
          s1 = nullptr;
          v169 = 0;
          v170 = 1;
          v171[7].m128i_i64[0] = 1;
          v171[7].m128i_i32[2] = -1;
          p_s1 = &s1;
          *(_OWORD *)v167 = 0;
          v168 = 0;
          s1 = (char *)qvector_reserve(&s1, 0, 2, 144);
          v100 = s1;
          if ( v167[0] > 1 )
          {
            v160 = &v171[4];
          }
          else
          {
            v160 = &v171[4];
            v159.m128i_i64[0] = 144 * v167[0];
            while ( 1 )
            {
              si128 = _mm_load_si128(v171);
              v104 = &v100[v159.m128i_i64[0]];
              *((_QWORD *)v104 + 2) = 0;
              *(__m128i *)v104 = si128;
              *(_OWORD *)(v104 + 24) = 0;
              if ( v171[1].m128i_i64[1] )
              {
                n = v171[1].m128i_u64[1];
                v105 = (void *)qalloc_or_throw(v171[1].m128i_i64[1]);
                v106 = n;
                *((_QWORD *)v104 + 2) = v105;
                *((_QWORD *)v104 + 4) = v106;
                memcpy(v105, (const void *)v171[1].m128i_i64[0], v106);
                *((_QWORD *)v104 + 3) = n;
              }
              *((_QWORD *)v104 + 5) = 0;
              *((_OWORD *)v104 + 3) = 0;
              if ( v171[3].m128i_i64[0] )
              {
                n = v171[3].m128i_u64[0];
                v122 = (void *)qalloc_or_throw(v171[3].m128i_i64[0]);
                v123 = n;
                *((_QWORD *)v104 + 5) = v122;
                *((_QWORD *)v104 + 7) = v123;
                memcpy(v122, (const void *)v171[2].m128i_i64[1], v123);
                *((_QWORD *)v104 + 6) = n;
              }
              *((_QWORD *)v104 + 8) = 0;
              copy_tinfo_t(v104 + 64);
              v101 = v159.m128i_i64[0] == 0;
              v102 = _mm_loadu_si128((const __m128i *)&v171[4].m128i_u64[1]);
              *((_QWORD *)v104 + 15) = v171[7].m128i_i64[1];
              *(__m128i *)(v104 + 72) = v102;
              *(__m128i *)(v104 + 88) = _mm_loadu_si128((const __m128i *)&v171[5].m128i_u64[1]);
              *(__m128i *)(v104 + 104) = _mm_loadu_si128((const __m128i *)&v171[6].m128i_u64[1]);
              *((_QWORD *)v104 + 16) = v171[8].m128i_i64[0];
              v104[136] = v171[8].m128i_i8[8];
              if ( !v101 )
                break;
              v159.m128i_i64[0] = 144;
              v100 = s1;
            }
          }
          v167[0] = 2;
          clear_tinfo_t(v160);
          if ( v171[2].m128i_i64[1] )
          {
            v171[3].m128i_i64[0] = 0;
            qfree((void *)v171[2].m128i_i64[1]);
          }
          if ( v171[1].m128i_i64[0] )
          {
            v171[1].m128i_i64[1] = 0;
            qfree((void *)v171[1].m128i_i64[0]);
          }
          sub_6D4670((__int64 *)s1 + 2, "ptr");
          v115 = *(_QWORD *)(v99 + 32);
          *(_QWORD *)v165 = 0;
          sub_6E4130(v171, a2, v115);
          copy_tinfo_t(v165);
          clear_tinfo_t(v171);
          if ( !v165[0] )
            goto LABEL_226;
          if ( !(unsigned __int8)sub_6D5330((__int64)(s1 + 64), (__int64)v165, 0, 0xAu) )
            goto LABEL_258;
          sub_6D4670((__int64 *)s1 + 20, "adj");
          if ( !(unsigned __int8)sub_6DC6D0(a2, (__int64 *)s1 + 26, "size_t") )
            goto LABEL_226;
          if ( (unsigned __int8)create_tinfo(a1, 13, 13, p_s1) )
          {
            sub_6DF2F0(a2, a1, 1, nullptr, nullptr, (__int64)v162, 0);
            clear_tinfo_t(v165);
            if ( s1 )
            {
              v150 = v167[0];
              v151 = 0;
              if ( v167[0] )
              {
                do
                {
                  v152 = &s1[144 * v151];
                  clear_tinfo_t(v152 + 64);
                  v153 = *((void **)v152 + 5);
                  if ( v153 )
                  {
                    *((_QWORD *)v152 + 6) = 0;
                    qfree(v153);
                  }
                  v154 = *((void **)v152 + 2);
                  if ( v154 )
                  {
                    *((_QWORD *)v152 + 3) = 0;
                    qfree(v154);
                  }
                  ++v151;
                }
                while ( v150 != v151 );
              }
              v167[0] = 0;
              qfree(s1);
            }
          }
          else
          {
LABEL_258:
            sub_6DB090((_QWORD *)a2, v162, a3);
LABEL_226:
            clear_tinfo_t(v165);
            v116 = s1;
            if ( s1 )
            {
              v117 = v167[0];
              if ( v167[0] )
              {
                v118 = 0;
                do
                {
                  v119 = &v116[144 * v118];
                  clear_tinfo_t(v119 + 64);
                  v120 = *((void **)v119 + 5);
                  if ( v120 )
                  {
                    *((_QWORD *)v119 + 6) = 0;
                    qfree(v120);
                  }
                  v121 = *((void **)v119 + 2);
                  if ( v121 )
                  {
                    *((_QWORD *)v119 + 3) = 0;
                    qfree(v121);
                  }
                  ++v118;
                  v116 = s1;
                }
                while ( v117 != v118 );
              }
              v167[0] = 0;
              qfree(v116);
            }
          }
          goto LABEL_28;
        case 34LL:
          v107 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 34 || !v107 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v107 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
              v107 = sub_F63050(*v12, a2, v17, a4, v21);
            else
              v107 = 0;
          }
          v108 = *(_QWORD *)(*(_QWORD *)(v107 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v108 + 16) - 35 > 1 || !v108 )
            v108 = sub_F63050(v108, a2, v17, a4, v21);
          if ( !(*(_BYTE *)(v108 + 19) >> 2) )
          {
            v109 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v108 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v109 + 16) == 13 && v109 && ((*(_WORD *)(v109 + 18) >> 3) & 0x1FF) == 0x1E9 )
              goto LABEL_178;
          }
          v110 = *(_QWORD *)(*(_QWORD *)(v107 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v110 + 16) - 35 > 1 || !v110 )
            v110 = sub_F63050(v110, a2, v17, a4, v21);
          if ( !(*(_BYTE *)(v110 + 19) >> 2) )
          {
            v111 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v110 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v111 + 16) == 13 && v111 && ((*(_WORD *)(v111 + 18) >> 3) & 0x1FF) == 0x1EA )
              goto LABEL_211;
          }
          v127 = v107;
          if ( *(_BYTE *)(v107 + 16) == 42 && v107
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v107 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
            && (v127 = sub_F63050(v107, a2, v17, a4, v21)) != 0 )
          {
            v128 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v127 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v128 + 16) == 13 && v128 && ((*(_WORD *)(v128 + 18) >> 3) & 0x1FF) == 0x1EB )
            {
              v55 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 19152LL);
              goto LABEL_73;
            }
          }
          v131 = sub_F68450(*v12, a2, v17, a4, v21);
          sub_6E4130(v171, a2, v131);
          copy_tinfo_t(a1);
          clear_tinfo_t(v171);
          if ( !*(_BYTE *)a1 )
            return a1;
          if ( (unsigned __int8)sub_6D5330((__int64)a1, (__int64)a1, 0, 0xAu) )
            goto LABEL_28;
          clear_tinfo_t(a1);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 35LL:
          v72 = *v12;
          if ( (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 35 > 1 || !v72 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v72 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 35 > 1 )
              v72 = 0;
            else
              v72 = sub_F63050(v72, a2, v17, a4, v21);
          }
          v98 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v72 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v98 + 16) == 13 && v98 && ((*(_WORD *)(v98 + 18) >> 3) & 0x1FF) == 0x1E9 )
          {
LABEL_178:
            v55 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 19136LL);
            goto LABEL_73;
          }
          v124 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v72 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v124 + 16) == 13 && v124 && ((*(_WORD *)(v124 + 18) >> 3) & 0x1FF) == 0x1EA )
          {
LABEL_211:
            v55 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 19144LL);
LABEL_73:
            sub_6E4130(v171, a2, v55);
LABEL_74:
            copy_tinfo_t(a1);
            goto LABEL_63;
          }
          if ( (*(_WORD *)(v72 + 18) & 0x3F8) == 0 )
          {
LABEL_114:
            v55 = *(_QWORD *)(v72 + 24);
            goto LABEL_73;
          }
          sub_6D83C0((__int64)v171, a2, a3);
          v125 = haystack;
          if ( v171[0].m128i_i64[1] )
            v125 = (const char *)v171[0].m128i_i64[0];
          sub_6D5280((__int64)a1, *(_QWORD *)(a2 + 16), (__int64)v125, 0xDu, 0, 0);
          v31 = (char *)v171[0].m128i_i64[0];
          if ( v171[0].m128i_i64[0] )
            goto LABEL_27;
          break;
        case 36LL:
          v93 = *(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL;
          v94 = *(_QWORD *)v93;
          if ( *(_BYTE *)(*(_QWORD *)v93 + 16LL) != 36 )
            v94 = 0;
          v95 = sub_F62610(v94, a2, v17, a4, v21);
          v96 = v95;
          if ( *(char *)(v95 + 28) < 0 )
            goto LABEL_28;
          sub_6D80F0((__int64)v171, a2, v95, 1);
          sub_6DA080(a2, (__int64)v171);
          v97 = haystack;
          s1 = nullptr;
          if ( v171[0].m128i_i64[1] )
            v97 = (const char *)v171[0].m128i_i64[0];
          if ( (unsigned __int8)sub_6DC6D0(a2, (__int64 *)&s1, v97) )
            goto LABEL_252;
          sub_6EDBC0(a2, a1, v96);
          goto LABEL_171;
        case 40LL:
          v57 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 40 && v57 )
            goto LABEL_85;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 )
LABEL_84:
            v57 = sub_F63050(v57, a2, v17, a4, v21);
          else
LABEL_121:
            v57 = 0;
LABEL_85:
          v55 = *(_QWORD *)(v57 + 32);
          goto LABEL_73;
        case 42LL:
        case 43LL:
        case 44LL:
          v51 = *v12;
          v159.m128i_i32[0] = v21;
          v52 = sub_F68450(v51, a2, v17, a4, v21);
          sub_6E4130(v171, a2, v52);
          copy_tinfo_t(a1);
          clear_tinfo_t(v171);
          if ( !*(_BYTE *)a1 )
            return a1;
          v53 = v159.m128i_i32[0];
          if ( (**(_QWORD **)(a2 + 8) & 0xFLL) != 2 )
          {
            sub_6DABF0(a2, a1);
            v53 = v159.m128i_i32[0];
          }
          v159.m128i_i32[0] = v53;
          v54 = sub_6D5330((__int64)a1, (__int64)a1, 0, 0xAu);
          if ( v159.m128i_i32[0] != 42 || !v54 )
            goto LABEL_28;
          memset(v171, 0, 24);
          if ( sub_6DA320(a2, v171[0].m128i_i64, v52) )
            sub_6DA4C0(a2, a1, v171[0].m128i_i64);
          sub_37D470((char **)v171);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 46LL:
          if ( (unsigned __int8)sub_6E5F90(a2, a1, a3, a4, v21) )
            goto LABEL_28;
          v65 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 46 || !v65 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 46 )
              v65 = sub_F63050(v65, a1, v62, v63, v64);
            else
              v65 = 0;
          }
          if ( (*(_BYTE *)(v65 + 18) & 8) != 0 )
            v55 = *(_QWORD *)(v65 + 48);
          else
            v55 = *(_QWORD *)(v65 + 8);
          goto LABEL_73;
        case 47LL:
          if ( !*v12 )
            return a1;
          v58 = sub_F60F10(*v12, a2, v17, a4, v21);
          v59 = v58;
          if ( !v58 )
            goto LABEL_28;
          sub_6D80F0((__int64)v171, a2, v58, 1);
          sub_6DA080(a2, (__int64)v171);
          v60 = haystack;
          s1 = nullptr;
          if ( v171[0].m128i_i64[1] )
            v60 = (const char *)v171[0].m128i_i64[0];
          p_s1 = &s1;
          if ( !(unsigned __int8)sub_6DC6D0(a2, (__int64 *)&s1, v60) )
          {
            if ( *(char *)(v59 + 28) >= 0 && !(unsigned __int8)sub_B8E180(v59 + 64) )
              sub_6E0A20((_QWORD *)a2, a1, v59, a5, a6, a7, a8, v138, v139, a11, a12);
            goto LABEL_142;
          }
          v61 = (char *)*a1;
          *a1 = (__int64)s1;
          s1 = v61;
          clear_tinfo_t(&s1);
          v31 = (char *)v171[0].m128i_i64[0];
          if ( v171[0].m128i_i64[0] )
            goto LABEL_27;
          goto LABEL_28;
        case 48LL:
          v82 = sub_F63240(*v12, a2, v17, a4, v21);
          v83 = v82;
          if ( !v82 )
            goto LABEL_28;
          sub_6D80F0((__int64)v171, a2, v82, 1);
          sub_6DA080(a2, (__int64)v171);
          s1 = nullptr;
          p_s1 = &s1;
          if ( v171[0].m128i_i64[1] > 1uLL
            && (unsigned __int8)sub_6DC6D0(a2, (__int64 *)&s1, (const char *)v171[0].m128i_i64[0]) )
          {
            v137 = s1;
            s1 = (char *)*a1;
            *a1 = (__int64)v137;
          }
          else
          {
            v86 = *(_BYTE *)(v83 + 28) & 0x7F;
            if ( (unsigned int)(v86 - 60) <= 1 )
            {
              if ( !(unsigned __int8)sub_6DDDA0(a2, a1, v83) )
                goto LABEL_142;
              v86 = *(_BYTE *)(v83 + 28) & 0x7F;
            }
            if ( (unsigned int)(v86 - 59) > 2 )
              sub_6EB8B0(a2, a1, v83);
            else
              sub_6E4100((_QWORD *)a2, a1, v83, a5, a6, a7, *(double *)a8.m128_u64, v84, v85, a11, a12);
          }
LABEL_142:
          clear_tinfo_t(p_s1);
          v31 = (char *)v171[0].m128i_i64[0];
          if ( !v171[0].m128i_i64[0] )
            goto LABEL_28;
          goto LABEL_27;
        case 49LL:
          if ( (unsigned __int8)sub_6E5F90(a2, a1, a3, a4, v21) )
            goto LABEL_28;
          v87 = *v12;
          if ( (*(_BYTE *)(*v12 + 18) & 8) != 0 )
          {
            sub_6D83C0((__int64)v165, a2, a3);
            v172[0] = *(void **)(v87 + 32);
            v88 = sub_F22BD0(v172, 0);
            sub_6D7BB0((__int64 *)&s1, a2, v88);
            v89 = v167[0];
            if ( v167[0] > 1 )
            {
              memset(v171, 0, 24);
              v146 = (void *)qalloc_or_throw(v167[0]);
              v171[1].m128i_i64[0] = v89;
              v171[0].m128i_i64[0] = (__int64)v146;
              memcpy(v146, s1, v89);
              v171[0].m128i_i64[1] = v89;
              sub_6D4710(v171[0].m128i_i64, (__int64)v165);
              v147 = v171[0].m128i_i64[0];
              v148 = _mm_loadu_si128((const __m128i *)&v171[0].m128i_u64[1]);
              memset(v171, 0, 24);
              if ( *(_QWORD *)v165 )
              {
                v159 = v148;
                *(_QWORD *)&v165[8] = 0;
                qfree(*(void **)v165);
                v149 = _mm_load_si128(&v159);
                *(_QWORD *)v165 = v147;
                *(__m128i *)&v165[8] = v149;
                if ( v171[0].m128i_i64[0] )
                {
                  v171[0].m128i_i64[1] = 0;
                  qfree((void *)v171[0].m128i_i64[0]);
                }
              }
              else
              {
                *(_QWORD *)v165 = v147;
                *(__m128i *)&v165[8] = v148;
              }
            }
            sub_6DA080(a2, (__int64)v165);
            v164 = 0;
            v90 = haystack;
            if ( *(_QWORD *)&v165[8] )
              v90 = *(const char **)v165;
            if ( (unsigned __int8)sub_6DC6D0(a2, &v164, v90) )
            {
              v91 = v164;
              v164 = *a1;
              *a1 = v91;
            }
            else
            {
              v140 = sub_F5E8A0(v87);
              sub_6E4130(v171, a2, v140);
              copy_tinfo_t(a1);
              clear_tinfo_t(v171);
              if ( *(_BYTE *)a1 )
              {
                v141 = haystack;
                if ( *(_QWORD *)&v165[8] )
                  v141 = *(const char **)v165;
                sub_6DF2F0(a2, a1, 1, v141, nullptr, 0, 0);
              }
            }
            clear_tinfo_t(&v164);
            if ( s1 )
            {
              v167[0] = 0;
              qfree(s1);
            }
            if ( *(_QWORD *)v165 )
            {
              *(_QWORD *)&v165[8] = 0;
              qfree(*(void **)v165);
            }
            goto LABEL_28;
          }
          v129 = *(_QWORD *)(v87 + 8);
          v130 = (_BYTE *)sub_F63270(*(_QWORD *)(v129 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v130 && (v130[28] & 0x7Fu) - 60 <= 1 )
          {
            if ( !(unsigned __int8)sub_6DDDA0(a2, a1, (__int64)v130) )
              goto LABEL_28;
            sub_6E4130(v171, a2, v129);
LABEL_79:
            copy_tinfo_t(a1);
            clear_tinfo_t(v171);
            v37 = *a1;
            v38 = *a1;
          }
          else
          {
            sub_6DB090((_QWORD *)a2, v130, a3);
            v37 = *a1;
            v38 = *a1;
          }
          goto LABEL_29;
        case 50LL:
          v74 = *(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL;
          v75 = *(_QWORD *)v74;
          if ( *(_BYTE *)(*(_QWORD *)v74 + 16LL) != 50 )
            v75 = 0;
          v76 = sub_F5E320(v75, a2, v17, a4, v21);
          if ( v76 )
          {
            v77 = *(unsigned int **)(v76 + 16);
            v78 = *v77;
            if ( *v77 )
            {
              memset(v171, 0, 24);
              v79 = (void *)qvector_reserve(v171, 0, v78 + 1, 1);
              v171[0].m128i_i64[1] = v78 + 1;
              v171[0].m128i_i64[0] = (__int64)v79;
              memmove(v79, v77 + 4, v78);
              *(_BYTE *)(v171[0].m128i_i64[0] + v78) = 0;
              v80 = (void *)v171[0].m128i_i64[0];
              if ( v171[0].m128i_i64[1] > 1uLL )
              {
                sub_6D5280((__int64)a1, *(_QWORD *)(a2 + 16), v171[0].m128i_i64[0], 0x3Du, 0, 1);
                v80 = (void *)v171[0].m128i_i64[0];
              }
              if ( v80 )
              {
                v171[0].m128i_i64[1] = 0;
                qfree(v80);
              }
            }
          }
          goto LABEL_28;
        case 51LL:
        case 52LL:
          v55 = v12[1] | a3 & 7;
          goto LABEL_73;
        case 53LL:
          v112 = *v12;
          if ( !*v12 )
            return a1;
          v113 = *(_QWORD *)(v112 + 32);
          if ( !v113 )
            return a1;
          sub_6D80F0((__int64)v171, a2, *(_QWORD *)(v112 + 32), 1);
          sub_6DA080(a2, (__int64)v171);
          v114 = haystack;
          s1 = nullptr;
          if ( v171[0].m128i_i64[1] )
            v114 = (const char *)v171[0].m128i_i64[0];
          if ( (unsigned __int8)sub_6DC6D0(a2, (__int64 *)&s1, v114) )
          {
LABEL_252:
            v126 = s1;
            s1 = (char *)*a1;
            *a1 = (__int64)v126;
          }
          else
          {
            sub_6EC250(a2, a1, v113, (*(_BYTE *)(v113 + 28) & 0x7F) == 65);
          }
LABEL_171:
          clear_tinfo_t(&s1);
          v31 = (char *)v171[0].m128i_i64[0];
          if ( !v171[0].m128i_i64[0] )
            goto LABEL_28;
          goto LABEL_27;
        case 54LL:
          v92 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 54 && v92 )
            goto LABEL_163;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v92 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 54 )
LABEL_162:
            v92 = sub_F63050(v92, a2, v17, a4, v21);
          else
LABEL_194:
            v92 = 0;
LABEL_163:
          v55 = *(_QWORD *)(v92 + 40);
          goto LABEL_73;
        case 56LL:
          v73 = sub_F6A8C0(*v12, a2, v17, a4, v21);
          v55 = sub_F5DBF0(v73);
          goto LABEL_73;
        case 57LL:
        case 58LL:
          sub_6E6390(v171, a2, a3, *v12, v21);
          goto LABEL_79;
        default:
          goto LABEL_37;
      }
      goto LABEL_28;
    }
LABEL_37:
    sub_6DB090((_QWORD *)a2, nullptr, a3);
    goto LABEL_28;
  }
  do
  {
    v18 = *(_QWORD *)(((__int64 (*)(void))sub_F6A5F0)() + 48);
    v19 = v18 & 0xFFFFFFFFFFFFFFF0LL;
    v20 = *(unsigned __int8 *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  }
  while ( v20 == 8 );
  v21 = *(unsigned __int8 *)(*v12 + 16);
  v17 = v21;
  if ( (_BYTE)v21 != 8 )
  {
    *a1 = 0;
    goto LABEL_5;
  }
  *a1 = 0;
  if ( v20 != 26 )
  {
    v22 = sub_F6A5F0(*v12, a2, v21);
    sub_6E4130(v171, a2, *(_QWORD *)(v22 + 48));
    copy_tinfo_t(a1);
    clear_tinfo_t(v171);
    v23 = *a1;
    if ( !(unsigned __int8)*a1 )
      return a1;
    v167[1] = 0;
    v44 = *(_QWORD *)(v22 + 32);
    if ( !v44 || *(_WORD *)(v44 + 36) != 2 )
    {
      if ( (get_tinfo_property(v23, 2) & 0xF) != 0xC )
        goto LABEL_28;
      v45 = nullptr;
      goto LABEL_53;
    }
    v142 = *(_QWORD *)(a2 + 48);
    s1 = nullptr;
    v167[0] = 0;
    v143 = sub_6D4A70(&s1, v44, v142);
    v45 = s1;
    v144 = v167[0];
    if ( !v143 )
      goto LABEL_301;
    v145 = (char *)haystack;
    if ( v167[0] )
      v145 = s1;
    if ( (unsigned __int8)sub_6DE9E0((_QWORD *)a2, a1, v145) || !get_tinfo_property(*a1, 6) )
    {
LABEL_301:
      if ( (get_tinfo_property(*a1, 2) & 0xF) != 0xC )
      {
LABEL_57:
        if ( v45 )
          qfree(v45);
        goto LABEL_28;
      }
LABEL_53:
      v46 = get_tinfo_property(*a1, 20) & 0xFFFFFFF0;
      if ( v46 != 64 && v46 != 208 )
      {
        v47 = sub_6DB820((_QWORD *)a2, a3, 0);
        if ( v47 != 16 )
          set_tinfo_property4(a1, 35, v47, 0, 0, 0);
      }
      goto LABEL_57;
    }
    memset(v171, 0, 24);
    if ( v144 )
    {
      v159.m128i_i64[0] = qalloc_or_throw(v144);
      memcpy((void *)v159.m128i_i64[0], v45, v144);
      v156 = v171[0].m128i_i64[1];
      v155 = v171[0].m128i_i64[1] + 1;
      if ( v171[1].m128i_i64[0] >= (unsigned __int64)(v171[0].m128i_i64[1] + 1) )
        goto LABEL_321;
    }
    else
    {
      v155 = 1;
      v159.m128i_i64[0] = 0;
    }
    v171[0].m128i_i64[0] = qvector_reserve(v171, v171[0].m128i_i64[0], v155, 24);
    v156 = v171[0].m128i_i64[1];
LABEL_321:
    v157 = v171[0].m128i_i64[0] + 24 * v156;
    *(_QWORD *)v157 = v159.m128i_i64[0];
    *(__m128i *)(v157 + 8) = _mm_unpacklo_epi64((__m128i)v144, (__m128i)v144);
    ++v171[0].m128i_i64[1];
    sub_6DA4C0(a2, a1, v171[0].m128i_i64);
    sub_37D470((char **)v171);
    goto LABEL_301;
  }
LABEL_9:
  LOBYTE(s1) = 12;
  memset(v171, 0, 88);
  v171[5].m128i_i8[8] = 16;
  if ( !(unsigned __int8)sub_6E6E70(a2, v171, &s1, a3, 0, 0) )
  {
    if ( v171[4].m128i_i64[0] )
    {
      v171[4].m128i_i64[1] = 0;
      qfree((void *)v171[4].m128i_i64[0]);
    }
    cleanup_argloc(&v171[2].m128i_u64[1]);
    clear_tinfo_t(&v171[2]);
    v31 = (char *)v171[0].m128i_i64[0];
    if ( !v171[0].m128i_i64[0] )
      goto LABEL_28;
    v39 = v171[0].m128i_i64[1];
    if ( v171[0].m128i_i64[1] )
    {
      v40 = 0;
      do
      {
        v41 = &v31[80 * v40];
        clear_tinfo_t(v41 + 64);
        v42 = *((void **)v41 + 5);
        if ( v42 )
        {
          *((_QWORD *)v41 + 6) = 0;
          qfree(v42);
        }
        v43 = *((void **)v41 + 2);
        if ( v43 )
        {
          *((_QWORD *)v41 + 3) = 0;
          qfree(v43);
        }
        ++v40;
        cleanup_argloc(v41);
        v31 = (char *)v171[0].m128i_i64[0];
      }
      while ( v39 != v40 );
    }
LABEL_27:
    v171[0].m128i_i64[1] = 0;
    qfree(v31);
    goto LABEL_28;
  }
  v28 = *(_QWORD *)v19;
  if ( *(_BYTE *)(*(_QWORD *)v19 + 16LL) == 26 && v28 )
    goto LABEL_12;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
  {
    v28 = sub_F63050(v28, v171, v25, v26, v27);
LABEL_12:
    v29 = v28 + 48;
    goto LABEL_13;
  }
  v29 = 48;
  v28 = 0;
LABEL_13:
  v159.m128i_i64[0] = v29 + 8LL * *(unsigned __int16 *)(v28 + 22);
  if ( v159.m128i_i64[0] == v29 )
  {
LABEL_235:
    if ( (unsigned __int8)sub_6DEBE0((_QWORD *)a2, v171[0].m128i_i64, 0) )
    {
      if ( !(unsigned __int8)create_tinfo(a1, (unsigned __int8)s1, 12, v171) )
      {
        sub_6DB090((_QWORD *)a2, nullptr, v18);
        clear_tinfo_t(a1);
      }
      if ( (*(_BYTE *)(a2 + 122) & 1) != 0 && *(_BYTE *)a1 )
        lower_type(*(_QWORD *)(a2 + 16), a1, 0, 0);
    }
  }
  else
  {
    v30 = (_QWORD *)v29;
    while ( (unsigned __int8)sub_6E7490(a2, v171, *v30, 0) )
    {
      if ( (_QWORD *)v159.m128i_i64[0] == ++v30 )
        goto LABEL_235;
    }
  }
  if ( v171[4].m128i_i64[0] )
  {
    v171[4].m128i_i64[1] = 0;
    qfree((void *)v171[4].m128i_i64[0]);
  }
  cleanup_argloc(&v171[2].m128i_u64[1]);
  clear_tinfo_t(&v171[2]);
  v31 = (char *)v171[0].m128i_i64[0];
  if ( v171[0].m128i_i64[0] )
  {
    v32 = v171[0].m128i_i64[1];
    if ( v171[0].m128i_i64[1] )
    {
      v33 = 0;
      do
      {
        v34 = &v31[80 * v33];
        clear_tinfo_t(v34 + 64);
        v35 = *((void **)v34 + 5);
        if ( v35 )
        {
          *((_QWORD *)v34 + 6) = 0;
          qfree(v35);
        }
        v36 = *((void **)v34 + 2);
        if ( v36 )
        {
          *((_QWORD *)v34 + 3) = 0;
          qfree(v36);
        }
        ++v33;
        cleanup_argloc(v34);
        v31 = (char *)v171[0].m128i_i64[0];
      }
      while ( v32 != v33 );
    }
    goto LABEL_27;
  }
LABEL_28:
  v37 = *a1;
  v38 = *a1;
LABEL_29:
  if ( v38 )
  {
LABEL_30:
    if ( (a3 & 1) != 0 )
    {
      v37 |= 0x40uLL;
      *a1 = v37;
    }
    if ( (a3 & 4) != 0 )
    {
      LOBYTE(v37) = v37 | 0x80;
      *a1 = v37;
    }
  }
  return a1;
}
