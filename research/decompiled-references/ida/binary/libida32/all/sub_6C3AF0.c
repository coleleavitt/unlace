__int64 *__fastcall sub_6C3AF0(
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
  __m128i v68; // xmm0
  int v69; // eax
  char *v70; // rcx
  __int64 v71; // rdi
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned int *v76; // r14
  size_t v77; // r13
  void *v78; // rax
  void *v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // r13
  double v83; // xmm4_8
  double v84; // xmm5_8
  int v85; // eax
  __int64 v86; // r15
  __int64 v87; // rax
  size_t v88; // r13
  const char *v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rdi
  unsigned __int64 v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r13
  const char *v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // r15
  _BYTE *v99; // rax
  const char *v100; // rsi
  char *v101; // rcx
  bool v102; // zf
  __m128i v103; // xmm0
  __m128i si128; // xmm0
  char *v105; // r14
  void *v106; // rax
  size_t v107; // rdx
  __int64 v108; // r14
  __int64 v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // r13
  const char *v115; // rdx
  __int64 v116; // rdx
  char *v117; // rdi
  size_t v118; // r14
  __int64 v119; // r13
  char *v120; // r12
  void *v121; // rdi
  void *v122; // rdi
  void *v123; // rax
  size_t v124; // rdx
  __int64 v125; // rax
  const char *v126; // rdx
  char *v127; // rdx
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // r13
  _BYTE *v131; // rax
  __int64 v132; // rax
  __int64 v133; // rsi
  unsigned __int8 v134; // al
  int v135; // eax
  __int64 v136; // rdi
  char v137; // cl
  char *v138; // rdx
  double v139; // xmm4_8
  double v140; // xmm5_8
  __int64 v141; // rax
  const char *v142; // rcx
  __int64 v143; // rdx
  char v144; // al
  size_t v145; // r14
  char *v146; // rdx
  void *v147; // rax
  __int64 v148; // r13
  __m128i v149; // xmm0
  __m128i v150; // xmm0
  size_t v151; // r14
  __int64 v152; // r13
  char *v153; // r12
  void *v154; // rdi
  void *v155; // rdi
  __int64 v156; // rdx
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // r15
  __m128i v160; // [rsp+0h] [rbp-188h] BYREF
  __m128i *v161; // [rsp+10h] [rbp-178h]
  char **p_s1; // [rsp+18h] [rbp-170h]
  _BYTE *v163; // [rsp+20h] [rbp-168h]
  size_t n; // [rsp+28h] [rbp-160h]
  __int64 v165; // [rsp+38h] [rbp-150h] BYREF
  _BYTE v166[24]; // [rsp+40h] [rbp-148h] BYREF
  char *s1; // [rsp+60h] [rbp-128h] BYREF
  size_t v168[2]; // [rsp+68h] [rbp-120h]
  __int128 v169; // [rsp+78h] [rbp-110h]
  __int64 v170; // [rsp+88h] [rbp-100h]
  int v171; // [rsp+90h] [rbp-F8h]
  __m128i v172[8]; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD v173[2]; // [rsp+120h] [rbp-68h] BYREF
  char v174; // [rsp+130h] [rbp-58h] BYREF
  unsigned __int64 v175; // [rsp+148h] [rbp-40h]

  v12 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v175 = __readfsqword(0x28u);
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
          v133 = *(_QWORD *)(v48 + 40);
          v134 = *(_BYTE *)(v48 + 19);
          if ( (v134 & 2) != 0 )
          {
            v135 = *(_DWORD *)(v133 + 8);
            v172[0].m128i_i32[2] = v135;
            if ( (unsigned int)v135 <= 0x40 )
            {
              v172[0].m128i_i64[0] = *(_QWORD *)v133;
LABEL_277:
              v136 = v172[0].m128i_i64[0];
              goto LABEL_278;
            }
            sub_21E17D0(v172);
          }
          else
          {
            v135 = 8 * ((v134 >> 2) & 0x1F);
            v172[0].m128i_i32[2] = v135;
            if ( v135 <= 64 )
            {
              v172[0].m128i_i64[0] = v133;
              goto LABEL_277;
            }
            sub_21E1730(v172, v133, 0);
          }
          v135 = v172[0].m128i_i32[2];
          v136 = v172[0].m128i_i64[0];
          if ( v172[0].m128i_i32[2] > 0x40u )
          {
            v159 = *(_QWORD *)v172[0].m128i_i64[0];
            if ( v172[0].m128i_i64[0] )
              operator delete[]((void *)v172[0].m128i_i64[0]);
            LODWORD(v50) = 0;
            if ( v159 >= 0 )
              LODWORD(v50) = v159;
            goto LABEL_61;
          }
LABEL_278:
          if ( v135 )
          {
            v137 = 64 - v135;
            LODWORD(v50) = 0;
            if ( v136 << v137 >> v137 >= 0 )
              v50 = v136 << v137 >> v137;
          }
          else
          {
LABEL_60:
            LODWORD(v50) = 0;
          }
LABEL_61:
          v172[0].m128i_i32[2] = 0;
          v172[0].m128i_i32[3] = v50;
          v172[0].m128i_i64[0] = 0;
          sub_6C3AF0(&s1, a2, v49);
          copy_tinfo_t(v172);
          clear_tinfo_t(&s1);
          if ( v172[0].m128i_i8[0] )
            create_tinfo(a1, 11, 11, v172);
LABEL_63:
          clear_tinfo_t(v172);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 7LL:
          v57 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 7 && v57 )
            goto LABEL_85;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 7 )
            goto LABEL_120;
          goto LABEL_84;
        case 11LL:
          v172[0].m128i_i64[0] = 0;
          get_stock_tinfo(v172, 7);
          copy_tinfo_t(a1);
          clear_tinfo_t(v172);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 13LL:
          sub_6BF2C0(v172, (_QWORD *)a2, a3);
          goto LABEL_74;
        case 14LL:
          sub_6C62E0(v172, a2, a3, *v12, v21);
          goto LABEL_79;
        case 15LL:
          v66 = *v12;
          v67 = *(__int64 **)(*v12 + 32);
          sub_6C3AF0(v172, a2, v67);
          copy_tinfo_t(a1);
          clear_tinfo_t(v172);
          v37 = *a1;
          v38 = *a1;
          if ( v38 )
            goto LABEL_30;
          if ( !*(_QWORD *)(v66 + 24) )
            goto LABEL_29;
          v68 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a2 + 48) + 17464LL));
          v160.m128i_i64[0] = (__int64)v173;
          v172[3].m128i_i64[0] = (__int64)v173;
          *(__m128i *)v166 = v68;
          memset(&v172[1], 0, 24);
          v173[1] = 0;
          *(_DWORD *)v166 = _mm_cvtsi128_si32(v68) & 0xFDBF8FFF | 0x2001000;
          v173[0] = &v174;
          v172[2].m128i_i64[1] = 0x100000000LL;
          v174 = 0;
          v172[0].m128i_i64[1] = 0;
          v172[0].m128i_i64[0] = (__int64)&off_2BC1EC8;
          sub_2257B70(v172, 0, 0, 0);
          sub_EE3EC0(*(_QWORD *)(v66 + 24), (unsigned int)v172, 0, (unsigned int)v166, 0, 0, (__int64)"\n", 1);
          s1 = nullptr;
          *(_OWORD *)v168 = 0;
          sub_3573A0(&s1);
          if ( !v168[0] )
            goto LABEL_288;
          v161 = (__m128i *)s1;
          v69 = strcmp(s1, "decltype(nullptr)");
          v70 = (char *)v161;
          if ( !v69 )
          {
            sub_6B40D0((__int64 *)&s1, "std::nullptr_t");
            if ( v168[0] )
              v70 = s1;
            else
LABEL_288:
              v70 = (char *)haystack;
          }
          sub_6BF080(&v165, a2, v67, v70);
          copy_tinfo_t(a1);
          clear_tinfo_t(&v165);
          if ( s1 )
          {
            v168[0] = 0;
            qfree(s1);
          }
          v172[0].m128i_i64[0] = (__int64)&off_2BC1EC8;
          sub_2257A60(v172);
          std::string::_M_dispose();
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 16LL:
        case 17LL:
          v56 = *v12;
          if ( !*v12 )
            return a1;
          if ( (*(_QWORD *)(v56 + 24) & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
          {
            sub_6C3AF0(v172, a2, *(_QWORD *)(v56 + 24));
            copy_tinfo_t(a1);
            clear_tinfo_t(v172);
          }
          else
          {
            create_tinfo(a1, 1, 7, 0);
          }
          goto LABEL_28;
        case 24LL:
          v91 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 24 && v91 )
            goto LABEL_162;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v91 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 24 )
            goto LABEL_161;
          goto LABEL_193;
        case 25LL:
          v80 = *v12;
          memset(v172, 0, 60);
          memset(&v172[4], 0, 24);
          v172[5].m128i_i8[8] = 16;
          v172[1].m128i_i32[2] = 2 * (*(_BYTE *)(v80 + 21) & 1);
          sub_6C3AF0(&s1, a2, *(_QWORD *)(v80 + 24));
          copy_tinfo_t(&v172[2]);
          clear_tinfo_t(&s1);
          if ( v172[2].m128i_i8[0] && !(unsigned __int8)create_tinfo(a1, 12, 12, v172) )
          {
            sub_6BAAB0((_QWORD *)a2, nullptr, a3);
            clear_tinfo_t(a1);
          }
          sub_5C9DC0((char **)v172);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 26LL:
          goto LABEL_9;
        case 30LL:
          v71 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 30 || !v71 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 30 )
              v71 = sub_F3F310(v71, a2, v17, a4, v21);
            else
              v71 = 0;
          }
          goto LABEL_113;
        case 33LL:
          v98 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 33 || !v98 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v98 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
              v98 = sub_F3F310(*v12, a2, v17, a4, v21);
            else
              v98 = 0;
          }
          v99 = (_BYTE *)sub_F3DED0(v98, a2, v17, a4, v21);
          v100 = nullptr;
          v163 = v99;
          memset(v172, 0, sizeof(v172));
          s1 = nullptr;
          v170 = 0;
          v171 = 1;
          v172[6].m128i_i64[0] = 1;
          v172[6].m128i_i32[2] = -1;
          p_s1 = &s1;
          *(_OWORD *)v168 = 0;
          v169 = 0;
          s1 = (char *)qvector_reserve(&s1, 0, 2, 128);
          v101 = s1;
          if ( v168[0] > 1 )
          {
            v161 = &v172[4];
          }
          else
          {
            v160.m128i_i64[0] = v168[0] << 7;
            v161 = &v172[4];
            while ( 1 )
            {
              si128 = _mm_load_si128(v172);
              v105 = &v101[v160.m128i_i64[0]];
              *((_QWORD *)v105 + 2) = 0;
              *(__m128i *)v105 = si128;
              *(_OWORD *)(v105 + 24) = 0;
              if ( v172[1].m128i_i64[1] )
              {
                n = v172[1].m128i_u64[1];
                v106 = (void *)qalloc_or_throw(v172[1].m128i_i64[1], v100);
                v107 = n;
                *((_QWORD *)v105 + 2) = v106;
                *((_QWORD *)v105 + 4) = v107;
                v100 = (const char *)v172[1].m128i_i64[0];
                memcpy(v106, (const void *)v172[1].m128i_i64[0], v107);
                *((_QWORD *)v105 + 3) = n;
              }
              *((_QWORD *)v105 + 5) = 0;
              *((_OWORD *)v105 + 3) = 0;
              if ( v172[3].m128i_i64[0] )
              {
                n = v172[3].m128i_u64[0];
                v123 = (void *)qalloc_or_throw(v172[3].m128i_i64[0], v100);
                v124 = n;
                *((_QWORD *)v105 + 5) = v123;
                *((_QWORD *)v105 + 7) = v124;
                memcpy(v123, (const void *)v172[2].m128i_i64[1], v124);
                *((_QWORD *)v105 + 6) = n;
              }
              *((_QWORD *)v105 + 8) = 0;
              v100 = (const char *)v161;
              copy_tinfo_t(v105 + 64);
              v102 = v160.m128i_i64[0] == 0;
              v103 = _mm_loadu_si128((const __m128i *)&v172[4].m128i_u64[1]);
              *((_QWORD *)v105 + 13) = v172[6].m128i_i64[1];
              *(__m128i *)(v105 + 72) = v103;
              *(__m128i *)(v105 + 88) = _mm_loadu_si128((const __m128i *)&v172[5].m128i_u64[1]);
              *((_QWORD *)v105 + 14) = v172[7].m128i_i64[0];
              v105[120] = v172[7].m128i_i8[8];
              if ( !v102 )
                break;
              v160.m128i_i64[0] = 128;
              v101 = s1;
            }
          }
          v168[0] = 2;
          clear_tinfo_t(v161);
          if ( v172[2].m128i_i64[1] )
          {
            v172[3].m128i_i64[0] = 0;
            qfree((void *)v172[2].m128i_i64[1]);
          }
          if ( v172[1].m128i_i64[0] )
          {
            v172[1].m128i_i64[1] = 0;
            qfree((void *)v172[1].m128i_i64[0]);
          }
          sub_6B40D0((__int64 *)s1 + 2, "ptr");
          v116 = *(_QWORD *)(v98 + 32);
          *(_QWORD *)v166 = 0;
          sub_6C3AF0(v172, a2, v116);
          copy_tinfo_t(v166);
          clear_tinfo_t(v172);
          if ( !v166[0] )
            goto LABEL_225;
          if ( !(unsigned __int8)sub_6B4D60((__int64)(s1 + 64), (__int64)v166, 0, 0xAu) )
            goto LABEL_257;
          sub_6B40D0((__int64 *)s1 + 18, "adj");
          if ( !(unsigned __int8)sub_6BC100(a2, (__int64 *)s1 + 24, "size_t") )
            goto LABEL_225;
          if ( (unsigned __int8)create_tinfo(a1, 13, 13, p_s1) )
          {
            sub_6BED00(a2, a1, 1, nullptr, nullptr, (__int64)v163, 0);
            clear_tinfo_t(v166);
            if ( s1 )
            {
              v151 = v168[0];
              v152 = 0;
              if ( v168[0] )
              {
                do
                {
                  v153 = &s1[128 * v152];
                  clear_tinfo_t(v153 + 64);
                  v154 = *((void **)v153 + 5);
                  if ( v154 )
                  {
                    *((_QWORD *)v153 + 6) = 0;
                    qfree(v154);
                  }
                  v155 = *((void **)v153 + 2);
                  if ( v155 )
                  {
                    *((_QWORD *)v153 + 3) = 0;
                    qfree(v155);
                  }
                  ++v152;
                }
                while ( v151 != v152 );
              }
              v168[0] = 0;
              qfree(s1);
            }
          }
          else
          {
LABEL_257:
            sub_6BAAB0((_QWORD *)a2, v163, a3);
LABEL_225:
            clear_tinfo_t(v166);
            v117 = s1;
            if ( s1 )
            {
              v118 = v168[0];
              if ( v168[0] )
              {
                v119 = 0;
                do
                {
                  v120 = &v117[128 * v119];
                  clear_tinfo_t(v120 + 64);
                  v121 = *((void **)v120 + 5);
                  if ( v121 )
                  {
                    *((_QWORD *)v120 + 6) = 0;
                    qfree(v121);
                  }
                  v122 = *((void **)v120 + 2);
                  if ( v122 )
                  {
                    *((_QWORD *)v120 + 3) = 0;
                    qfree(v122);
                  }
                  ++v119;
                  v117 = s1;
                }
                while ( v118 != v119 );
              }
              v168[0] = 0;
              qfree(v117);
            }
          }
          goto LABEL_28;
        case 34LL:
          v108 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 34 || !v108 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v108 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
              v108 = sub_F3F310(*v12, a2, v17, a4, v21);
            else
              v108 = 0;
          }
          v109 = *(_QWORD *)(*(_QWORD *)(v108 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v109 + 16) - 35 > 1 || !v109 )
            v109 = sub_F3F310(v109, a2, v17, a4, v21);
          if ( !(*(_BYTE *)(v109 + 19) >> 2) )
          {
            v110 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v109 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v110 + 16) == 13 && v110 && ((*(_WORD *)(v110 + 18) >> 3) & 0x1FF) == 0x1E9 )
              goto LABEL_177;
          }
          v111 = *(_QWORD *)(*(_QWORD *)(v108 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v111 + 16) - 35 > 1 || !v111 )
            v111 = sub_F3F310(v111, a2, v17, a4, v21);
          if ( !(*(_BYTE *)(v111 + 19) >> 2) )
          {
            v112 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v111 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v112 + 16) == 13 && v112 && ((*(_WORD *)(v112 + 18) >> 3) & 0x1FF) == 0x1EA )
              goto LABEL_210;
          }
          v128 = v108;
          if ( *(_BYTE *)(v108 + 16) == 42 && v108
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v108 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42
            && (v128 = sub_F3F310(v108, a2, v17, a4, v21)) != 0 )
          {
            v129 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v128 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v129 + 16) == 13 && v129 && ((*(_WORD *)(v129 + 18) >> 3) & 0x1FF) == 0x1EB )
            {
              v55 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 19152LL);
              goto LABEL_73;
            }
          }
          v132 = sub_F44710(*v12, a2, v17, a4, v21);
          sub_6C3AF0(v172, a2, v132);
          copy_tinfo_t(a1);
          clear_tinfo_t(v172);
          if ( !*(_BYTE *)a1 )
            return a1;
          if ( (unsigned __int8)sub_6B4D60((__int64)a1, (__int64)a1, 0, 0xAu) )
            goto LABEL_28;
          clear_tinfo_t(a1);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 35LL:
          v71 = *v12;
          if ( (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 35 > 1 || !v71 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 35 > 1 )
              v71 = 0;
            else
              v71 = sub_F3F310(v71, a2, v17, a4, v21);
          }
          v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v97 + 16) == 13 && v97 && ((*(_WORD *)(v97 + 18) >> 3) & 0x1FF) == 0x1E9 )
          {
LABEL_177:
            v55 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 19136LL);
            goto LABEL_73;
          }
          v125 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v125 + 16) == 13 && v125 && ((*(_WORD *)(v125 + 18) >> 3) & 0x1FF) == 0x1EA )
          {
LABEL_210:
            v55 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 19144LL);
LABEL_73:
            sub_6C3AF0(v172, a2, v55);
LABEL_74:
            copy_tinfo_t(a1);
            goto LABEL_63;
          }
          if ( (*(_WORD *)(v71 + 18) & 0x3F8) == 0 )
          {
LABEL_113:
            v55 = *(_QWORD *)(v71 + 24);
            goto LABEL_73;
          }
          sub_6B7DE0((__int64)v172, a2, a3);
          v126 = haystack;
          if ( v172[0].m128i_i64[1] )
            v126 = (const char *)v172[0].m128i_i64[0];
          sub_6B4CB0((__int64)a1, *(_QWORD *)(a2 + 16), (__int64)v126, 0xDu, 0, 0);
          v31 = (char *)v172[0].m128i_i64[0];
          if ( v172[0].m128i_i64[0] )
            goto LABEL_27;
          break;
        case 36LL:
          v92 = *(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL;
          v93 = *(_QWORD *)v92;
          if ( *(_BYTE *)(*(_QWORD *)v92 + 16LL) != 36 )
            v93 = 0;
          v94 = sub_F3E8D0(v93, a2, v17, a4, v21);
          v95 = v94;
          if ( *(char *)(v94 + 28) < 0 )
            goto LABEL_28;
          sub_6B7B10((__int64)v172, a2, v94, 1);
          sub_6B9AB0(a2, (__int64)v172);
          v96 = haystack;
          s1 = nullptr;
          if ( v172[0].m128i_i64[1] )
            v96 = (const char *)v172[0].m128i_i64[0];
          if ( (unsigned __int8)sub_6BC100(a2, (__int64 *)&s1, v96) )
            goto LABEL_251;
          sub_6CD5A0(a2, a1, v95);
          goto LABEL_170;
        case 40LL:
          v57 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 40 && v57 )
            goto LABEL_85;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 )
LABEL_84:
            v57 = sub_F3F310(v57, a2, v17, a4, v21);
          else
LABEL_120:
            v57 = 0;
LABEL_85:
          v55 = *(_QWORD *)(v57 + 32);
          goto LABEL_73;
        case 42LL:
        case 43LL:
        case 44LL:
          v51 = *v12;
          v160.m128i_i32[0] = v21;
          v52 = sub_F44710(v51, a2, v17, a4, v21);
          sub_6C3AF0(v172, a2, v52);
          copy_tinfo_t(a1);
          clear_tinfo_t(v172);
          if ( !*(_BYTE *)a1 )
            return a1;
          v53 = v160.m128i_i32[0];
          if ( (**(_QWORD **)(a2 + 8) & 0xFLL) != 2 )
          {
            sub_6BA610(a2, a1);
            v53 = v160.m128i_i32[0];
          }
          v160.m128i_i32[0] = v53;
          v54 = sub_6B4D60((__int64)a1, (__int64)a1, 0, 0xAu);
          if ( v160.m128i_i32[0] != 42 || !v54 )
            goto LABEL_28;
          memset(v172, 0, 24);
          if ( sub_6B9D50(a2, v172[0].m128i_i64, v52) )
            sub_6B9EF0(a2, a1, v172[0].m128i_i64);
          sub_379A30((char **)v172);
          v37 = *a1;
          v38 = *a1;
          goto LABEL_29;
        case 46LL:
          if ( (unsigned __int8)sub_6C5940(a2, a1, a3, a4, v21) )
            goto LABEL_28;
          v65 = *v12;
          if ( *(_BYTE *)(*v12 + 16) != 46 || !v65 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v65 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 46 )
              v65 = sub_F3F310(v65, a1, v62, v63, v64);
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
          v58 = sub_F3D1D0(*v12, a2, v17, a4, v21);
          v59 = v58;
          if ( !v58 )
            goto LABEL_28;
          sub_6B7B10((__int64)v172, a2, v58, 1);
          sub_6B9AB0(a2, (__int64)v172);
          v60 = haystack;
          s1 = nullptr;
          if ( v172[0].m128i_i64[1] )
            v60 = (const char *)v172[0].m128i_i64[0];
          p_s1 = &s1;
          if ( !(unsigned __int8)sub_6BC100(a2, (__int64 *)&s1, v60) )
          {
            if ( *(char *)(v59 + 28) >= 0 && !(unsigned __int8)sub_B6A440(v59 + 64) )
              sub_6C03E0((_QWORD *)a2, a1, v59, a5, a6, a7, a8, v139, v140, a11, a12);
            goto LABEL_141;
          }
          v61 = (char *)*a1;
          *a1 = (__int64)s1;
          s1 = v61;
          clear_tinfo_t(&s1);
          v31 = (char *)v172[0].m128i_i64[0];
          if ( v172[0].m128i_i64[0] )
            goto LABEL_27;
          goto LABEL_28;
        case 48LL:
          v81 = sub_F3F500(*v12, a2, v17, a4, v21);
          v82 = v81;
          if ( !v81 )
            goto LABEL_28;
          sub_6B7B10((__int64)v172, a2, v81, 1);
          sub_6B9AB0(a2, (__int64)v172);
          s1 = nullptr;
          p_s1 = &s1;
          if ( v172[0].m128i_i64[1] > 1uLL
            && (unsigned __int8)sub_6BC100(a2, (__int64 *)&s1, (const char *)v172[0].m128i_i64[0]) )
          {
            v138 = s1;
            s1 = (char *)*a1;
            *a1 = (__int64)v138;
          }
          else
          {
            v85 = *(_BYTE *)(v82 + 28) & 0x7F;
            if ( (unsigned int)(v85 - 60) <= 1 )
            {
              if ( !(unsigned __int8)sub_6BD7E0(a2, a1, v82) )
                goto LABEL_141;
              v85 = *(_BYTE *)(v82 + 28) & 0x7F;
            }
            if ( (unsigned int)(v85 - 59) > 2 )
              sub_6CB220(a2, a1, v82);
            else
              sub_6C3AC0((_QWORD *)a2, a1, v82, a5, a6, a7, *(double *)a8.m128_u64, v83, v84, a11, a12);
          }
LABEL_141:
          clear_tinfo_t(p_s1);
          v31 = (char *)v172[0].m128i_i64[0];
          if ( !v172[0].m128i_i64[0] )
            goto LABEL_28;
          goto LABEL_27;
        case 49LL:
          if ( (unsigned __int8)sub_6C5940(a2, a1, a3, a4, v21) )
            goto LABEL_28;
          v86 = *v12;
          if ( (*(_BYTE *)(*v12 + 18) & 8) != 0 )
          {
            sub_6B7DE0((__int64)v166, a2, a3);
            v173[0] = *(_QWORD *)(v86 + 32);
            v87 = sub_EFEE90(v173, 0);
            sub_6B75D0((__int64 *)&s1, a2, v87);
            v88 = v168[0];
            if ( v168[0] > 1 )
            {
              memset(v172, 0, 24);
              v147 = (void *)qalloc_or_throw(v168[0], (const char *)a2);
              v172[1].m128i_i64[0] = v88;
              v172[0].m128i_i64[0] = (__int64)v147;
              memcpy(v147, s1, v88);
              v172[0].m128i_i64[1] = v88;
              sub_6B4170(v172[0].m128i_i64, (__int64)v166);
              v148 = v172[0].m128i_i64[0];
              v149 = _mm_loadu_si128((const __m128i *)&v172[0].m128i_u64[1]);
              memset(v172, 0, 24);
              if ( *(_QWORD *)v166 )
              {
                v160 = v149;
                *(_QWORD *)&v166[8] = 0;
                qfree(*(void **)v166);
                v150 = _mm_load_si128(&v160);
                *(_QWORD *)v166 = v148;
                *(__m128i *)&v166[8] = v150;
                if ( v172[0].m128i_i64[0] )
                {
                  v172[0].m128i_i64[1] = 0;
                  qfree((void *)v172[0].m128i_i64[0]);
                }
              }
              else
              {
                *(_QWORD *)v166 = v148;
                *(__m128i *)&v166[8] = v149;
              }
            }
            sub_6B9AB0(a2, (__int64)v166);
            v165 = 0;
            v89 = haystack;
            if ( *(_QWORD *)&v166[8] )
              v89 = *(const char **)v166;
            if ( (unsigned __int8)sub_6BC100(a2, &v165, v89) )
            {
              v90 = v165;
              v165 = *a1;
              *a1 = v90;
            }
            else
            {
              v141 = sub_F3AB60(v86);
              sub_6C3AF0(v172, a2, v141);
              copy_tinfo_t(a1);
              clear_tinfo_t(v172);
              if ( *(_BYTE *)a1 )
              {
                v142 = haystack;
                if ( *(_QWORD *)&v166[8] )
                  v142 = *(const char **)v166;
                sub_6BED00(a2, a1, 1, v142, nullptr, 0, 0);
              }
            }
            clear_tinfo_t(&v165);
            if ( s1 )
            {
              v168[0] = 0;
              qfree(s1);
            }
            if ( *(_QWORD *)v166 )
            {
              *(_QWORD *)&v166[8] = 0;
              qfree(*(void **)v166);
            }
            goto LABEL_28;
          }
          v130 = *(_QWORD *)(v86 + 8);
          v131 = (_BYTE *)sub_F3F530(*(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v131 && (v131[28] & 0x7Fu) - 60 <= 1 )
          {
            if ( !(unsigned __int8)sub_6BD7E0(a2, a1, (__int64)v131) )
              goto LABEL_28;
            sub_6C3AF0(v172, a2, v130);
LABEL_79:
            copy_tinfo_t(a1);
            clear_tinfo_t(v172);
            v37 = *a1;
            v38 = *a1;
          }
          else
          {
            sub_6BAAB0((_QWORD *)a2, v131, a3);
            v37 = *a1;
            v38 = *a1;
          }
          goto LABEL_29;
        case 50LL:
          v73 = *(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL;
          v74 = *(_QWORD *)v73;
          if ( *(_BYTE *)(*(_QWORD *)v73 + 16LL) != 50 )
            v74 = 0;
          v75 = sub_F3A5E0(v74, a2, v17, a4, v21);
          if ( v75 )
          {
            v76 = *(unsigned int **)(v75 + 16);
            v77 = *v76;
            if ( *v76 )
            {
              memset(v172, 0, 24);
              v78 = (void *)qvector_reserve(v172, 0, v77 + 1, 1);
              v172[0].m128i_i64[1] = v77 + 1;
              v172[0].m128i_i64[0] = (__int64)v78;
              memmove(v78, v76 + 4, v77);
              *(_BYTE *)(v172[0].m128i_i64[0] + v77) = 0;
              v79 = (void *)v172[0].m128i_i64[0];
              if ( v172[0].m128i_i64[1] > 1uLL )
              {
                sub_6B4CB0((__int64)a1, *(_QWORD *)(a2 + 16), v172[0].m128i_i64[0], 0x3Du, 0, 1);
                v79 = (void *)v172[0].m128i_i64[0];
              }
              if ( v79 )
              {
                v172[0].m128i_i64[1] = 0;
                qfree(v79);
              }
            }
          }
          goto LABEL_28;
        case 51LL:
        case 52LL:
          v55 = v12[1] | a3 & 7;
          goto LABEL_73;
        case 53LL:
          v113 = *v12;
          if ( !*v12 )
            return a1;
          v114 = *(_QWORD *)(v113 + 32);
          if ( !v114 )
            return a1;
          sub_6B7B10((__int64)v172, a2, *(_QWORD *)(v113 + 32), 1);
          sub_6B9AB0(a2, (__int64)v172);
          v115 = haystack;
          s1 = nullptr;
          if ( v172[0].m128i_i64[1] )
            v115 = (const char *)v172[0].m128i_i64[0];
          if ( (unsigned __int8)sub_6BC100(a2, (__int64 *)&s1, v115) )
          {
LABEL_251:
            v127 = s1;
            s1 = (char *)*a1;
            *a1 = (__int64)v127;
          }
          else
          {
            sub_6CBBC0(a2, a1, v114, (*(_BYTE *)(v114 + 28) & 0x7F) == 65);
          }
LABEL_170:
          clear_tinfo_t(&s1);
          v31 = (char *)v172[0].m128i_i64[0];
          if ( !v172[0].m128i_i64[0] )
            goto LABEL_28;
          goto LABEL_27;
        case 54LL:
          v91 = *v12;
          if ( *(_BYTE *)(*v12 + 16) == 54 && v91 )
            goto LABEL_162;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v91 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 54 )
LABEL_161:
            v91 = sub_F3F310(v91, a2, v17, a4, v21);
          else
LABEL_193:
            v91 = 0;
LABEL_162:
          v55 = *(_QWORD *)(v91 + 40);
          goto LABEL_73;
        case 56LL:
          v72 = sub_F46B80(*v12, a2, v17, a4, v21);
          v55 = sub_F39EB0(v72);
          goto LABEL_73;
        case 57LL:
        case 58LL:
          sub_6C5D40(v172, a2, a3, *v12, v21);
          goto LABEL_79;
        default:
          goto LABEL_37;
      }
      goto LABEL_28;
    }
LABEL_37:
    sub_6BAAB0((_QWORD *)a2, nullptr, a3);
    goto LABEL_28;
  }
  do
  {
    v18 = *(_QWORD *)(((__int64 (*)(void))sub_F468B0)() + 48);
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
    v22 = sub_F468B0(*v12, a2, v21);
    sub_6C3AF0(v172, a2, *(_QWORD *)(v22 + 48));
    copy_tinfo_t(a1);
    clear_tinfo_t(v172);
    v23 = *a1;
    if ( !(unsigned __int8)*a1 )
      return a1;
    v168[1] = 0;
    v44 = *(_QWORD *)(v22 + 32);
    if ( !v44 || *(_WORD *)(v44 + 36) != 2 )
    {
      if ( (get_tinfo_property(v23, 2) & 0xF) != 0xC )
        goto LABEL_28;
      v45 = nullptr;
      goto LABEL_53;
    }
    v143 = *(_QWORD *)(a2 + 48);
    s1 = nullptr;
    v168[0] = 0;
    v144 = sub_6B44D0(&s1, v44, v143);
    v45 = s1;
    v145 = v168[0];
    if ( !v144 )
      goto LABEL_300;
    v146 = (char *)haystack;
    if ( v168[0] )
      v146 = s1;
    if ( (unsigned __int8)sub_6BE3F0((_QWORD *)a2, a1, v146) || !get_tinfo_property(*a1, 6) )
    {
LABEL_300:
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
        v47 = sub_6BB240((_QWORD *)a2, a3, 0);
        if ( v47 != 16 )
          set_tinfo_property4(a1, 35, v47, 0, 0, 0);
      }
      goto LABEL_57;
    }
    memset(v172, 0, 24);
    if ( v145 )
    {
      v160.m128i_i64[0] = qalloc_or_throw(v145, &byte_6);
      memcpy((void *)v160.m128i_i64[0], v45, v145);
      v157 = v172[0].m128i_i64[1];
      v156 = v172[0].m128i_i64[1] + 1;
      if ( v172[1].m128i_i64[0] >= (unsigned __int64)(v172[0].m128i_i64[1] + 1) )
        goto LABEL_320;
    }
    else
    {
      v156 = 1;
      v160.m128i_i64[0] = 0;
    }
    v172[0].m128i_i64[0] = qvector_reserve(v172, v172[0].m128i_i64[0], v156, 24);
    v157 = v172[0].m128i_i64[1];
LABEL_320:
    v158 = v172[0].m128i_i64[0] + 24 * v157;
    *(_QWORD *)v158 = v160.m128i_i64[0];
    *(__m128i *)(v158 + 8) = _mm_unpacklo_epi64((__m128i)v145, (__m128i)v145);
    ++v172[0].m128i_i64[1];
    sub_6B9EF0(a2, a1, v172[0].m128i_i64);
    sub_379A30((char **)v172);
    goto LABEL_300;
  }
LABEL_9:
  LOBYTE(s1) = 12;
  memset(v172, 0, 60);
  memset(&v172[4], 0, 24);
  v172[5].m128i_i8[8] = 16;
  if ( !(unsigned __int8)sub_6C67C0(a2, v172, &s1, a3, 0, 0) )
  {
    if ( v172[4].m128i_i64[0] )
    {
      v172[4].m128i_i64[1] = 0;
      qfree((void *)v172[4].m128i_i64[0]);
    }
    cleanup_argloc(&v172[2].m128i_u64[1]);
    clear_tinfo_t(&v172[2]);
    v31 = (char *)v172[0].m128i_i64[0];
    if ( !v172[0].m128i_i64[0] )
      goto LABEL_28;
    v39 = v172[0].m128i_i64[1];
    if ( v172[0].m128i_i64[1] )
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
        v31 = (char *)v172[0].m128i_i64[0];
      }
      while ( v39 != v40 );
    }
LABEL_27:
    v172[0].m128i_i64[1] = 0;
    qfree(v31);
    goto LABEL_28;
  }
  v28 = *(_QWORD *)v19;
  if ( *(_BYTE *)(*(_QWORD *)v19 + 16LL) == 26 && v28 )
    goto LABEL_12;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
  {
    v28 = sub_F3F310(v28, v172, v25, v26, v27);
LABEL_12:
    v29 = v28 + 48;
    goto LABEL_13;
  }
  v29 = 48;
  v28 = 0;
LABEL_13:
  v160.m128i_i64[0] = v29 + 8LL * *(unsigned __int16 *)(v28 + 22);
  if ( v160.m128i_i64[0] == v29 )
  {
LABEL_234:
    if ( (unsigned __int8)sub_6BE5F0((_QWORD *)a2, v172[0].m128i_i64, 0) )
    {
      if ( !(unsigned __int8)create_tinfo(a1, (unsigned __int8)s1, 12, v172) )
      {
        sub_6BAAB0((_QWORD *)a2, nullptr, v18);
        clear_tinfo_t(a1);
      }
      if ( (*(_BYTE *)(a2 + 122) & 1) != 0 && *(_BYTE *)a1 )
        lower_type(*(_QWORD *)(a2 + 16), a1, 0, 0);
    }
  }
  else
  {
    v30 = (_QWORD *)v29;
    while ( (unsigned __int8)sub_6C6DE0(a2, v172, *v30, 0) )
    {
      if ( (_QWORD *)v160.m128i_i64[0] == ++v30 )
        goto LABEL_234;
    }
  }
  if ( v172[4].m128i_i64[0] )
  {
    v172[4].m128i_i64[1] = 0;
    qfree((void *)v172[4].m128i_i64[0]);
  }
  cleanup_argloc(&v172[2].m128i_u64[1]);
  clear_tinfo_t(&v172[2]);
  v31 = (char *)v172[0].m128i_i64[0];
  if ( v172[0].m128i_i64[0] )
  {
    v32 = v172[0].m128i_i64[1];
    if ( v172[0].m128i_i64[1] )
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
        v31 = (char *)v172[0].m128i_i64[0];
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

