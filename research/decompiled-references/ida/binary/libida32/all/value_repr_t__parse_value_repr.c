__int64 __fastcall value_repr_t__parse_value_repr(__int64 a1, __int64 a2, int a3)
{
  size_t v3; // r13
  char *v5; // r14
  char **p_nptr; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  char *v9; // rbx
  const char *v10; // rsi
  size_t v11; // rdx
  bool v12; // r10
  char *v13; // r15
  int v14; // ebx
  void *lexer; // r13
  size_t v17; // rax
  char *v18; // rax
  const void *v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  char v22; // al
  char *v23; // r8
  char *v24; // r12
  size_t v25; // r13
  char *v26; // r15
  int v27; // edx
  char v28; // al
  char *v29; // rdi
  char *v30; // rax
  __int64 v31; // r13
  char *v32; // rax
  signed __int64 v33; // rcx
  size_t v34; // rax
  size_t v35; // rdx
  bool v36; // cc
  __int64 v37; // r13
  char *v38; // r14
  size_t v39; // r13
  char *v40; // rdi
  char *v41; // r12
  __m128i si128; // xmm0
  char *v43; // rdi
  int v44; // eax
  char *v45; // rdi
  char *v46; // rdi
  __int64 v47; // r13
  unsigned __int64 v48; // r12
  char *v49; // rax
  const char *v50; // r13
  int v51; // eax
  unsigned int v52; // eax
  const char *v53; // rsi
  int i; // eax
  char v55; // r10
  unsigned __int64 v56; // r15
  char *v57; // rdi
  __int64 v58; // r14
  char v59; // bl
  char *v60; // rdx
  void *v61; // rax
  __int64 v62; // rax
  char v63; // al
  _BYTE *v64; // r13
  void *v65; // rdx
  const char **v66; // r13
  int v67; // r14d
  const char **v68; // rbx
  int v69; // eax
  int v70; // ecx
  int v71; // r13d
  __int64 v72; // rdi
  const char *v73; // rdi
  char v74; // al
  const char *v75; // rax
  const char **v76; // rbx
  const char *v77; // r13
  int v78; // eax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r14
  char **v81; // rbx
  char *v82; // rdi
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r14
  char **v85; // r13
  char *v86; // rdi
  char *v87; // rdi
  unsigned int v88; // eax
  int custom_data_type; // r13d
  char *v90; // rdi
  unsigned int v91; // eax
  int custom_data_format; // eax
  bool v93; // zf
  const char *v94; // rdi
  char v95; // dl
  const char *v96; // r14
  char *v97; // rax
  int v98; // eax
  __int64 v99; // rdi
  unsigned int default_encoding_idx; // eax
  const char *encoding_name; // rax
  int v102; // r13d
  int v103; // eax
  const char *v104; // rsi
  __int64 v105; // rdi
  const char *v106; // rdi
  unsigned __int8 v107; // al
  const char *v108; // rdi
  __int64 v109; // rax
  size_t v110; // r14
  size_t v111; // r12
  size_t v112; // r15
  size_t v113; // rdx
  void *v114; // rdi
  __int64 v115; // rax
  size_t v116; // r14
  size_t v117; // r12
  size_t v118; // r15
  size_t v119; // rdx
  __int64 v120; // rax
  size_t v121; // r14
  size_t v122; // r12
  size_t v123; // r15
  size_t v124; // rdx
  size_t v125; // r12
  size_t v126; // r15
  void *v127; // r12
  __int64 v128; // rax
  char *v129; // rax
  size_t v130; // r12
  __int64 v131; // rax
  void *v132; // r15
  char *v133; // rax
  __int64 v134; // rax
  char *v135; // rdi
  __int64 v136; // rax
  int v137; // r13d
  const char *v138; // rdx
  const char *v139; // r14
  char v140; // al
  size_t v141; // rcx
  const char *v142; // rbx
  const char *v143; // r14
  int v144; // edx
  int v145; // eax
  unsigned __int64 v146; // rax
  char **v147; // rax
  const char *v148; // r14
  int v149; // edx
  int v150; // eax
  unsigned __int64 v151; // rax
  char **v152; // rax
  const char *v153; // r13
  int v154; // edx
  int v155; // eax
  void *v156; // [rsp+8h] [rbp-158h]
  int v157; // [rsp+10h] [rbp-150h]
  bool v158; // [rsp+10h] [rbp-150h]
  bool v159; // [rsp+10h] [rbp-150h]
  bool v160; // [rsp+10h] [rbp-150h]
  int v161; // [rsp+18h] [rbp-148h]
  unsigned __int64 v162; // [rsp+18h] [rbp-148h]
  char *accept; // [rsp+28h] [rbp-138h]
  bool accepta; // [rsp+28h] [rbp-138h]
  int acceptb; // [rsp+28h] [rbp-138h]
  char acceptd; // [rsp+28h] [rbp-138h]
  char accepte; // [rsp+28h] [rbp-138h]
  char acceptg; // [rsp+28h] [rbp-138h]
  char *acceptf; // [rsp+28h] [rbp-138h]
  char *acceptc; // [rsp+28h] [rbp-138h]
  char accepti; // [rsp+28h] [rbp-138h]
  char *accepth; // [rsp+28h] [rbp-138h]
  char acceptj; // [rsp+28h] [rbp-138h]
  unsigned __int64 v175; // [rsp+30h] [rbp-130h]
  char *v176; // [rsp+30h] [rbp-130h]
  size_t v177; // [rsp+30h] [rbp-130h]
  bool v178; // [rsp+38h] [rbp-128h]
  unsigned __int64 v179; // [rsp+38h] [rbp-128h]
  size_t n[2]; // [rsp+40h] [rbp-120h] BYREF
  char *s1; // [rsp+50h] [rbp-110h] BYREF
  __int128 v182; // [rsp+58h] [rbp-108h]
  __int64 v183; // [rsp+80h] [rbp-E0h]
  char *s; // [rsp+90h] [rbp-D0h] BYREF
  __m128i v185; // [rsp+98h] [rbp-C8h]
  char *nptr; // [rsp+B0h] [rbp-B0h] BYREF
  size_t v187[3]; // [rsp+B8h] [rbp-A8h]
  void *src; // [rsp+D0h] [rbp-90h] BYREF
  __m128i v189; // [rsp+D8h] [rbp-88h] BYREF
  void *ptr; // [rsp+F0h] [rbp-70h] BYREF
  __int128 v191; // [rsp+F8h] [rbp-68h]
  __int64 v192; // [rsp+108h] [rbp-58h]
  __int64 v193; // [rsp+110h] [rbp-50h]
  __int128 v194; // [rsp+118h] [rbp-48h]
  unsigned __int64 v195; // [rsp+128h] [rbp-38h]

  v3 = *(_QWORD *)(a2 + 8);
  v195 = __readfsqword(0x28u);
  v182 = 0;
  s1 = nullptr;
  if ( v3 )
  {
    v18 = (char *)qalloc_or_throw(v3, (const char *)a2);
    v19 = *(const void **)a2;
    *((_QWORD *)&v182 + 1) = v3;
    s1 = v18;
    memcpy(v18, v19, v3);
    *(_QWORD *)&v182 = v3;
  }
  sub_5671B0((__int64 *)&s1, 32);
  v5 = (char *)haystack;
  p_nptr = &off_2B048A0;
  v161 = a3;
  n[0] = (size_t)s1;
  v7 = v182;
  v178 = (unsigned __int64)v182 > 1;
  accept = (char *)(v182 - 1);
  if ( (_QWORD)v182 )
    v5 = s1;
  while ( 1 )
  {
    v9 = p_nptr[1];
    if ( !v9 )
      break;
    v10 = *p_nptr;
    v11 = (size_t)p_nptr[1];
    if ( *p_nptr )
    {
      if ( v9 != (char *)-1LL )
        goto LABEL_12;
      v176 = *p_nptr;
      v17 = strlen(*p_nptr);
      v10 = v176;
      if ( v17 )
      {
        v11 = v17;
LABEL_12:
        if ( !v7 || (unsigned __int64)accept < v11 || strncmp((const char *)n[0], v10, v11) )
          goto LABEL_8;
      }
    }
    v12 = v178 && v9[n[0]] == 40;
    if ( v12 && *(_BYTE *)(n[0] + v7 - 2) == 41 )
    {
      v13 = v9;
      v14 = v161;
      v179 = (unsigned __int64)p_nptr[2];
      v175 = v179 & 0xF;
      v162 = (0x900uLL >> (v179 & 0xF)) & 1;
      if ( ((0x900uLL >> (v179 & 0xF)) & 1) == 0 )
      {
        accepta = v12;
        v183 = 0;
        lexer = (void *)create_lexer(&unk_238B4A8, 0, 0, 0);
        if ( (unsigned int)lex_init_string(lexer, n[0], 0) )
        {
LABEL_43:
          if ( lexer )
LABEL_24:
            destroy_lexer(lexer);
LABEL_25:
          n[0] = (size_t)s1;
LABEL_26:
          LODWORD(p_nptr) = 0;
          goto LABEL_27;
        }
        v191 = 0;
        ptr = nullptr;
        v192 = 0;
        v193 = 0;
        n[0] = (size_t)&ptr;
        v194 = 0;
        if ( (unsigned int)lex_get_token((int)lexer) || (unsigned int)lex_get_token((int)lexer) || (_WORD)v192 != 40 )
        {
          if ( ptr )
          {
            *(_QWORD *)&v191 = 0;
            qfree(ptr);
            if ( !lexer )
              goto LABEL_25;
            goto LABEL_24;
          }
          goto LABEL_43;
        }
        v53 = (const char *)n[0];
        s = nullptr;
        nptr = nullptr;
        v185 = 0;
        *(_OWORD *)v187 = 0;
        for ( i = lex_get_token((int)lexer); ; i = lex_get_token((int)lexer) )
        {
          v55 = accepta;
          if ( i )
            goto LABEL_126;
          if ( (unsigned __int16)v192 <= 0x2Du )
            break;
          if ( (_WORD)v192 == 124 )
          {
LABEL_285:
            src = nullptr;
            v189 = 0;
            lex_print_token(&src, n[0]);
            v55 = accepta;
            if ( v189.m128i_i64[0] )
            {
              v115 = v189.m128i_i64[0] - 1;
              v116 = v189.m128i_i64[0] - 1;
              if ( v189.m128i_i64[0] != 1 )
              {
                v117 = (v187[0] == 0) + v187[0] - 1;
                v118 = v115 + v117;
                v119 = v115 + (v187[0] == 0) + v187[0];
                if ( v187[1] < v119 )
                {
                  v158 = accepta;
                  acceptf = (char *)(v115 + (v187[0] == 0) + v187[0]);
                  nptr = (char *)qvector_reserve(&nptr, nptr, v119, 1);
                  v55 = v158;
                  v119 = (size_t)acceptf;
                }
                v187[0] = v119;
                acceptg = v55;
                nptr[v118] = 0;
                memcpy(&nptr[v117], src, v116);
                v55 = acceptg;
              }
            }
            v114 = src;
            if ( src )
            {
LABEL_283:
              accepte = v55;
              v189.m128i_i64[0] = 0;
              qfree(v114);
              v55 = accepte;
            }
          }
          else
          {
            if ( (_WORD)v192 != 14906 )
              goto LABEL_126;
            v125 = (v187[0] == 0) + v187[0] - 1;
            if ( v187[1] < v125 + 3 )
            {
              nptr = (char *)qvector_reserve(&nptr, nptr, v125 + 3, 1);
              v55 = accepta;
            }
            v187[0] = v125 + 3;
            nptr[v125 + 2] = 0;
            *(_WORD *)&nptr[v125] = 14906;
          }
LABEL_284:
          v53 = (const char *)n[0];
          accepta = v55;
        }
        if ( (unsigned __int16)v192 <= 1u )
        {
LABEL_126:
          v56 = 0;
          p_nptr = nullptr;
          v55 = 0;
        }
        else
        {
          switch ( (__int16)v192 )
          {
            case 2:
            case 6:
              if ( (_QWORD)v191 )
              {
                v120 = v191 - 1;
                v121 = v191 - 1;
                if ( (_QWORD)v191 != 1 )
                {
                  v122 = (v187[0] == 0) + v187[0] - 1;
                  v123 = v120 + v122;
                  v124 = v120 + (v187[0] == 0) + v187[0];
                  if ( v187[1] < v124 )
                  {
                    v160 = accepta;
                    accepth = (char *)(v120 + (v187[0] == 0) + v187[0]);
                    nptr = (char *)qvector_reserve(&nptr, nptr, v124, 1);
                    v55 = v160;
                    v124 = (size_t)accepth;
                  }
                  v187[0] = v124;
                  accepti = v55;
                  nptr[v123] = 0;
                  memcpy(&nptr[v122], ptr, v121);
                  v55 = accepti;
                }
              }
              goto LABEL_284;
            case 3:
            case 45:
              goto LABEL_285;
            case 4:
              src = nullptr;
              v189 = 0;
              sub_3573A0((char **)&src);
              v55 = accepta;
              if ( v189.m128i_i64[0] )
              {
                v109 = v189.m128i_i64[0] - 1;
                v110 = v189.m128i_i64[0] - 1;
                if ( v189.m128i_i64[0] != 1 )
                {
                  v111 = (v187[0] == 0) + v187[0] - 1;
                  v112 = v109 + v111;
                  v113 = v109 + (v187[0] == 0) + v187[0];
                  if ( v187[1] < v113 )
                  {
                    v159 = accepta;
                    acceptc = (char *)(v109 + (v187[0] == 0) + v187[0]);
                    nptr = (char *)qvector_reserve(&nptr, nptr, v113, 1);
                    v55 = v159;
                    v113 = (size_t)acceptc;
                  }
                  v187[0] = v113;
                  acceptd = v55;
                  nptr[v112] = 0;
                  memcpy(&nptr[v111], src, v110);
                  v55 = acceptd;
                }
              }
              v114 = src;
              if ( src )
                goto LABEL_283;
              goto LABEL_284;
            case 41:
              v56 = v185.m128i_i64[0];
              v130 = v187[0];
              v131 = v185.m128i_i64[0];
              if ( !v185.m128i_i64[0] )
              {
                if ( v187[0] <= 1 )
                  goto LABEL_313;
                goto LABEL_309;
              }
              v132 = nullptr;
              if ( v187[0] )
              {
LABEL_309:
                LOBYTE(n[0]) = accepta;
                v132 = (void *)qalloc_or_throw(v187[0], v53);
                memcpy(v132, nptr, v130);
                v131 = v185.m128i_i64[0];
                v55 = accepta;
              }
              if ( v185.m128i_i64[1] < (unsigned __int64)(v131 + 1) )
              {
                LOBYTE(n[0]) = v55;
                s = (char *)qvector_reserve(&s, s, v131 + 1, 24);
                v55 = n[0];
                v131 = v185.m128i_i64[0];
              }
              v133 = &s[24 * v131];
              *(_QWORD *)v133 = v132;
              *(__m128i *)(v133 + 8) = _mm_unpacklo_epi64((__m128i)v130, (__m128i)v130);
              v56 = v185.m128i_i64[0] + 1;
LABEL_313:
              v134 = v185.m128i_i64[1];
              p_nptr = (char **)s;
              v185 = 0;
              v183 = v134;
              s = nullptr;
              break;
            case 44:
              v126 = v187[0];
              v127 = nullptr;
              if ( v187[0] )
              {
                v127 = (void *)qalloc_or_throw(v187[0], v53);
                memcpy(v127, nptr, v126);
                v55 = accepta;
              }
              v128 = v185.m128i_i64[0];
              if ( v185.m128i_i64[1] < (unsigned __int64)(v185.m128i_i64[0] + 1) )
              {
                acceptj = v55;
                s = (char *)qvector_reserve(&s, s, v185.m128i_i64[0] + 1, 24);
                v55 = acceptj;
                v128 = v185.m128i_i64[0];
              }
              v129 = &s[24 * v128];
              *(_QWORD *)v129 = v127;
              *(__m128i *)(v129 + 8) = _mm_unpacklo_epi64((__m128i)v126, (__m128i)v126);
              v187[0] = 0;
              ++v185.m128i_i64[0];
              goto LABEL_284;
            default:
              goto LABEL_126;
          }
        }
        if ( nptr )
        {
          LOBYTE(n[0]) = v55;
          v187[0] = 0;
          qfree(nptr);
          v55 = n[0];
        }
        if ( s )
        {
          if ( v185.m128i_i64[0] )
          {
            v57 = s;
            n[0] = v185.m128i_i64[0];
            v58 = 0;
            acceptb = v14;
            v59 = v55;
            do
            {
              v60 = &v57[24 * v58];
              v61 = *(void **)v60;
              if ( *(_QWORD *)v60 )
              {
                *((_QWORD *)v60 + 1) = 0;
                qfree(v61);
                v57 = s;
              }
              ++v58;
            }
            while ( n[0] != v58 );
            v55 = v59;
            v14 = acceptb;
          }
          else
          {
            v57 = s;
          }
          LOBYTE(n[0]) = v55;
          v185.m128i_i64[0] = 0;
          qfree(v57);
          v55 = n[0];
        }
        if ( ptr )
        {
          LOBYTE(n[0]) = v55;
          *(_QWORD *)&v191 = 0;
          qfree(ptr);
          v55 = n[0];
        }
        if ( lexer )
        {
          LOBYTE(n[0]) = v55;
          destroy_lexer(lexer);
          v55 = n[0];
        }
        if ( v55 )
        {
          if ( v56 )
          {
            if ( v175 != 10 )
            {
              if ( v175 != 12 )
              {
                if ( v175 != 9 )
                {
                  if ( (v179 & 0xF) != 0 )
                    goto LABEL_179;
                  v83 = v179;
                  if ( (v179 & 0x1000) != 0 )
                  {
                    if ( v56 > 3 )
                      goto LABEL_179;
                    *(_QWORD *)(a1 + 24) = 1;
                    *(_DWORD *)(a1 + 32) = -1;
                    if ( (unsigned __int64)p_nptr[1] > 1 )
                    {
                      v135 = *p_nptr;
                      n[0] = (size_t)&src;
                      v136 = qstrtok(v135, "|");
                      v137 = 1;
                      do
                      {
                        v139 = (const char *)skip_spaces(v136);
                        v140 = *v139;
                        v138 = v139;
                        if ( *v139 )
                        {
                          v141 = n[0];
                          LODWORD(n[0]) = v14;
                          v142 = v139;
                          v177 = v141;
                          do
                          {
                            if ( (unsigned int)v140 <= 0x7F && isspace(v140) )
                              break;
                            v140 = *++v142;
                          }
                          while ( v140 );
                          v138 = v142;
                          v14 = n[0];
                          n[0] = v177;
                        }
                        *v138 = 0;
                        if ( !strcmp(v139, "NODUPS") )
                        {
                          v137 &= ~1u;
                        }
                        else if ( !strcmp(v139, "HEX") )
                        {
                          LOBYTE(v137) = v137 & 0xF;
                          v137 |= 0x14u;
                        }
                        else if ( !strcmp(v139, "DEC") )
                        {
                          LOBYTE(v137) = v137 & 0xF;
                          v137 |= 4u;
                        }
                        else if ( !strcmp(v139, "OCT") )
                        {
                          LOBYTE(v137) = v137 & 0xF;
                          v137 |= 0x24u;
                        }
                        else
                        {
                          if ( strcmp(v139, "BIN") )
                            goto LABEL_179;
                          LOBYTE(v137) = v137 & 0xF;
                          v137 |= 0x34u;
                        }
                        v136 = qstrtok(nullptr, "|");
                      }
                      while ( v136 );
                      *(_DWORD *)(a1 + 24) = v137;
                    }
                    if ( v56 != 1 )
                    {
                      if ( (unsigned __int64)p_nptr[4] > 1 )
                        *(_DWORD *)(a1 + 28) = strtol(p_nptr[3], nullptr, 0);
                      if ( v56 == 3 && (unsigned __int64)p_nptr[7] > 1 )
                        *(_DWORD *)(a1 + 32) = strtol(p_nptr[6], nullptr, 0);
                    }
                    if ( *(_DWORD *)(a1 + 24) != 1 || *(_DWORD *)(a1 + 28) || *(_DWORD *)(a1 + 32) != -1 )
                    {
                      if ( !p_nptr )
                      {
                        v30 = s1;
                        goto LABEL_62;
                      }
                      goto LABEL_195;
                    }
                    v179 &= ~0x1000uLL;
                    v83 = v179;
                  }
                  if ( !p_nptr )
                  {
                    v93 = v83 == 0;
                    v30 = s1;
                    if ( v93 )
                      goto LABEL_63;
                    goto LABEL_62;
                  }
                  goto LABEL_195;
                }
                if ( (unsigned __int64)p_nptr[1] <= 1 || v56 > 4 )
                {
LABEL_179:
                  if ( !p_nptr )
                    goto LABEL_25;
LABEL_180:
                  v80 = (0x900uLL >> (v179 & 0xF)) & 1;
                  v81 = p_nptr;
                  do
                  {
                    v82 = *v81;
                    if ( *v81 )
                    {
                      v81[1] = nullptr;
                      qfree(v82);
                    }
                    v81 += 3;
                    ++v80;
                  }
                  while ( v80 < v56 );
                  goto LABEL_184;
                }
                v62 = qstrtok(*p_nptr, "|");
                n[0] = skip_spaces(v62);
                v63 = *(_BYTE *)n[0];
                if ( *(_BYTE *)n[0] )
                {
                  v64 = (_BYTE *)n[0];
                  do
                  {
                    if ( (unsigned int)v63 <= 0x7F && isspace(v63) )
                      break;
                    v63 = *++v64;
                  }
                  while ( v63 );
                }
                else
                {
                  v64 = (_BYTE *)n[0];
                }
                *v64 = 0;
                src = nullptr;
                v189 = 0;
                get_refinfo_descs(&src);
                v65 = src;
                if ( src == (char *)src + 24 * v189.m128i_i64[0] )
                {
LABEL_173:
                  v77 = (const char *)n[0];
                  LOBYTE(n[0]) = *(_BYTE *)n[0];
                  if ( (unsigned __int8)(LOBYTE(n[0]) - 48) > 9u
                    || (n[0] = (size_t)v65, v78 = strcmp(v77, "BADADDR"), v65 = (void *)n[0], !v78) )
                  {
LABEL_177:
                    if ( v65 )
                    {
                      v189.m128i_i64[0] = 0;
                      qfree(v65);
                    }
                    goto LABEL_179;
                  }
                  v79 = strtoull(v77, &nptr, 0);
                  if ( *nptr )
                    goto LABEL_176;
                  if ( v79 > 0xFFFFFFFF )
                    goto LABEL_176;
                  v70 = v79;
                  if ( !(_DWORD)v79 || (v79 & 0xFFFFFFB0) != 0 )
                    goto LABEL_176;
                }
                else
                {
                  v66 = (const char **)src;
                  v67 = v14;
                  v68 = (const char **)((char *)src + 24 * v189.m128i_i64[0]);
                  while ( 1 )
                  {
                    v156 = v65;
                    v69 = strcmp(v66[1], (const char *)n[0]);
                    v65 = v156;
                    if ( !v69 )
                      break;
                    v66 += 3;
                    if ( v68 == v66 )
                    {
                      v14 = v67;
                      goto LABEL_173;
                    }
                  }
                  v70 = *(_DWORD *)v66;
                  v14 = v67;
                  if ( !*(_DWORD *)v66 )
                    goto LABEL_173;
                }
                *(_DWORD *)(a1 + 20) = v70;
                *(_QWORD *)(a1 + 8) = 0xFFFFFFFFLL;
                *(_DWORD *)(a1 + 16) = 0;
                v71 = 1;
LABEL_159:
                while ( 1 )
                {
                  v72 = qstrtok(nullptr, "|");
                  if ( !v72 )
                    break;
                  v73 = (const char *)skip_spaces(v72);
                  v74 = *v73;
                  if ( *v73 )
                  {
                    n[0] = (size_t)v73;
                    do
                    {
                      if ( (unsigned int)v74 <= 0x7F && isspace(v74) )
                        break;
                      v74 = *(_BYTE *)++n[0];
                    }
                    while ( *(_BYTE *)n[0] );
                    v75 = (const char *)n[0];
                  }
                  else
                  {
                    v75 = v73;
                  }
                  *v75 = 0;
                  n[0] = 0;
                  v157 = v14;
                  v76 = (const char **)&off_2B04AC8;
                  do
                  {
                    if ( !strcmp(v73, *v76) )
                    {
                      v14 = v157;
                      *(_DWORD *)(a1 + 20) |= *((_DWORD *)&unk_2B04AC0 + 4 * n[0]);
                      goto LABEL_159;
                    }
                    ++n[0];
                    v76 += 2;
                  }
                  while ( n[0] != 8 );
                  v14 = v157;
                  v71 = strcmp(v73, "AUTO");
                  if ( v71 )
                    goto LABEL_176;
                  *(_DWORD *)(a1 + 12) = -1;
                }
                if ( v71 >= v56 )
                  goto LABEL_349;
                if ( !v71 )
                {
LABEL_342:
                  v146 = v71 + 1;
                  if ( v146 >= v56 )
                    goto LABEL_349;
                  v147 = &p_nptr[3 * v146];
                  if ( v147[1] )
                  {
                    v148 = *v147;
                    v149 = strcmp(*v147, "BADADDR");
                    v150 = -1;
                    if ( !v149 )
                    {
LABEL_345:
                      *(_DWORD *)(a1 + 16) = v150;
                      v151 = v71 + 2;
                      if ( v151 >= v56 )
                        goto LABEL_349;
                      v152 = &p_nptr[3 * v151];
                      if ( v152[1] )
                      {
                        v153 = *v152;
                        v154 = strcmp(*v152, "BADADDR");
                        v155 = -1;
                        if ( !v154 )
                        {
LABEL_348:
                          *(_DWORD *)(a1 + 8) = v155;
LABEL_349:
                          if ( src )
                          {
                            v189.m128i_i64[0] = 0;
                            qfree(src);
                          }
LABEL_107:
                          if ( !p_nptr )
                            goto LABEL_108;
LABEL_195:
                          v84 = v162;
                          v85 = p_nptr;
                          do
                          {
                            v86 = *v85;
                            if ( *v85 )
                            {
                              v85[1] = nullptr;
                              qfree(v86);
                            }
                            v85 += 3;
                            ++v84;
                          }
                          while ( v56 != v84 );
                          qfree(p_nptr);
                          v30 = s1;
                          n[0] = (size_t)s1;
                          if ( !v179 )
                            goto LABEL_36;
                          v175 = v179 & 0xF;
                          if ( (v179 & 0xF) == 0 )
                            goto LABEL_62;
                          goto LABEL_61;
                        }
                      }
                      else
                      {
                        v153 = haystack;
                      }
                      v155 = strtoull(v153, &nptr, 0);
                      if ( !*nptr )
                        goto LABEL_348;
                      goto LABEL_176;
                    }
                  }
                  else
                  {
                    v148 = haystack;
                  }
                  v150 = strtoull(v148, &nptr, 0);
                  if ( !*nptr )
                    goto LABEL_345;
LABEL_176:
                  v65 = src;
                  goto LABEL_177;
                }
                if ( p_nptr[4] )
                {
                  v143 = p_nptr[3];
                  v144 = strcmp(v143, "BADADDR");
                  v145 = -1;
                  if ( !v144 )
                  {
LABEL_341:
                    *(_DWORD *)(a1 + 12) = v145;
                    goto LABEL_342;
                  }
                }
                else
                {
                  v143 = haystack;
                }
                v145 = strtoull(v143, &nptr, 0);
                if ( *nptr )
                  goto LABEL_176;
                goto LABEL_341;
              }
              if ( v56 != 2 || (unsigned __int64)p_nptr[1] <= 1 || (unsigned __int64)p_nptr[4] <= 1 )
                goto LABEL_179;
              sub_567480(p_nptr);
              sub_567480(p_nptr + 3);
              if ( p_nptr[1] )
              {
                v87 = *p_nptr;
                v88 = **p_nptr;
                if ( v88 <= 0x7F && v88 - 48 <= 9 )
                  goto LABEL_208;
              }
              else
              {
                if ( (unsigned int)byte_2CA12E1 <= 0x7F && (unsigned int)(byte_2CA12E1 - 48) <= 9 )
                {
                  v87 = (char *)haystack;
LABEL_208:
                  custom_data_type = strtol(v87, nullptr, 0);
                  goto LABEL_209;
                }
                v87 = (char *)haystack;
              }
              custom_data_type = find_custom_data_type(v87);
LABEL_209:
              if ( custom_data_type == -1 )
                goto LABEL_179;
              if ( p_nptr[4] )
              {
                v90 = p_nptr[3];
                v91 = *v90;
                if ( v91 <= 0x7F && v91 - 48 <= 9 )
                {
LABEL_213:
                  custom_data_format = strtol(v90, nullptr, 0);
                  goto LABEL_214;
                }
              }
              else
              {
                v90 = (char *)haystack;
                if ( (unsigned int)byte_2CA12E1 <= 0x7F )
                {
                  v90 = (char *)haystack;
                  if ( (unsigned int)(byte_2CA12E1 - 48) <= 9 )
                    goto LABEL_213;
                }
              }
              custom_data_format = find_custom_data_format(v90);
LABEL_214:
              if ( custom_data_format != -1 )
              {
                *(_WORD *)(a1 + 8) = custom_data_type;
                *(_WORD *)(a1 + 10) = custom_data_format;
                if ( !p_nptr )
                  goto LABEL_108;
                goto LABEL_195;
              }
              goto LABEL_179;
            }
            if ( (unsigned __int64)p_nptr[1] <= 1 || v56 > 4 || v56 == 3 )
              goto LABEL_179;
            v50 = *p_nptr;
            v51 = strcmp(*p_nptr, "C");
            if ( v51 )
            {
              if ( !strcmp(v50, "C_16") )
              {
                v51 = 1;
              }
              else if ( !strcmp(v50, "C_32") )
              {
                v51 = 2;
              }
              else if ( !strcmp(v50, "PASCAL") )
              {
                v51 = 4;
              }
              else if ( !strcmp(v50, "PASCAL_16") )
              {
                v51 = 5;
              }
              else if ( !strcmp(v50, "LEN2") )
              {
                v51 = 8;
              }
              else if ( sub_567F00((__int64)p_nptr, "LEN2_16") )
              {
                v51 = 9;
              }
              else if ( sub_567F00((__int64)p_nptr, "LEN4") )
              {
                v51 = 12;
              }
              else
              {
                if ( !sub_567F00((__int64)p_nptr, "LEN4_16") )
                {
                  if ( v56 == 1 )
                  {
                    v52 = *v50;
                    if ( v52 <= 0x7F && v52 - 48 <= 9 )
                    {
                      *(_DWORD *)(a1 + 8) = strtol(v50, nullptr, 0);
                      goto LABEL_107;
                    }
                  }
                  goto LABEL_179;
                }
                v51 = 13;
              }
            }
            *(_DWORD *)(a1 + 8) = v51;
            if ( v56 == 1 )
              goto LABEL_107;
            if ( v56 == 4 )
            {
              v106 = haystack;
              if ( p_nptr[4] )
                v106 = p_nptr[3];
              v107 = strtol(v106, nullptr, 0);
              v108 = haystack;
              if ( p_nptr[7] )
                v108 = p_nptr[6];
              *(_DWORD *)(a1 + 8) |= ((unsigned __int8)strtol(v108, nullptr, 0) << 16) | (v107 << 8);
              v94 = p_nptr[9];
            }
            else
            {
              v94 = p_nptr[3];
            }
            if ( v94 && (v95 = *v94) != 0 )
            {
              if ( (unsigned int)v95 > 0x7F )
                goto LABEL_179;
              if ( (unsigned int)(v95 - 48) > 9 )
              {
                if ( v95 != 34 )
                  goto LABEL_179;
                v96 = v94 + 1;
                v97 = strchr(v94 + 1, 34);
                if ( v97 )
                  *v97 = 0;
                v98 = *(_DWORD *)(a1 + 8) & 3;
                if ( v98 == 1 )
                {
                  v99 = 2;
                }
                else
                {
                  v99 = 1;
                  if ( v98 == 2 )
                    v99 = 4;
                }
                default_encoding_idx = get_default_encoding_idx(v99);
                encoding_name = (const char *)get_encoding_name(default_encoding_idx);
                n[0] = (size_t)encoding_name;
                if ( !encoding_name || !strcmp(v96, encoding_name) )
                {
                  v102 = 0;
                }
                else
                {
                  v102 = 1;
                  if ( !strcmp(v96, "no_conversion") )
                  {
                    v102 = -1;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      if ( v102 >= (int)get_encoding_qty() )
                        sub_365330();
                      v104 = (const char *)get_encoding_name((unsigned int)v102);
                      if ( !strcmp(v96, v104) )
                        break;
                      ++v102;
                    }
                  }
                }
LABEL_249:
                *(_DWORD *)(a1 + 8) |= v102 << 24;
                if ( !p_nptr )
                  goto LABEL_108;
                goto LABEL_195;
              }
              v103 = strtol(v94, nullptr, 0);
            }
            else
            {
              LODWORD(n[0]) = *(_DWORD *)(a1 + 8);
              if ( (n[0] & 3) == 1 )
              {
                v105 = 2;
              }
              else
              {
                v105 = 1;
                if ( (n[0] & 3) == 2 )
                  v105 = 4;
              }
              v103 = get_default_encoding_idx(v105);
            }
            v102 = v103;
            goto LABEL_249;
          }
          if ( !p_nptr )
            goto LABEL_25;
        }
        else
        {
          if ( !p_nptr )
            goto LABEL_25;
          if ( v56 )
            goto LABEL_180;
        }
LABEL_184:
        qfree(p_nptr);
        goto LABEL_25;
      }
      v23 = v13 + 1;
      s = nullptr;
      v185 = 0;
      if ( v13 + 1 > accept )
        v23 = accept;
      v24 = v23;
      v25 = accept - v23;
      if ( accept != v23 )
      {
        v46 = nullptr;
        if ( v25 != -1 )
        {
          s = (char *)qvector_reserve(&s, 0, v25 + 1, 1);
          v46 = s;
        }
        v185.m128i_i64[0] = v25 + 1;
        memmove(v46, &v24[n[0]], v25);
        s[v25] = 0;
        v47 = v185.m128i_i64[0];
        v48 = v185.m128i_i64[0] - 1;
        v49 = s;
        if ( v185.m128i_i64[0] - 1 <= 1 )
        {
          if ( s )
          {
            v185.m128i_i64[0] = 0;
            qfree(s);
            s = nullptr;
            v185.m128i_i64[1] = 0;
          }
        }
        else
        {
          if ( v185.m128i_i64[1] < v48 )
          {
            v49 = (char *)qvector_reserve(&s, s, v185.m128i_i64[0] - 1, 1);
            s = v49;
          }
          v185.m128i_i64[0] = v48;
          v49[v47 - 2] = 0;
        }
      }
      p_nptr = &nptr;
      *(_DWORD *)(a1 + 8) = 0;
      if ( v175 != 11 )
      {
LABEL_49:
        if ( v185.m128i_i64[0] )
        {
          v26 = s;
          goto LABEL_51;
        }
        goto LABEL_119;
      }
      v31 = v185.m128i_i64[0];
      if ( !v185.m128i_i64[0] )
      {
LABEL_119:
        v26 = (char *)haystack;
        goto LABEL_51;
      }
      v26 = s;
      v32 = strrchr(s, 44);
      if ( !v32 || (v33 = v32 - v26, n[0] = v32 - v26, v32 - v26 == -1) )
      {
LABEL_51:
        LODWORD(nptr) = 0;
        src = nullptr;
        get_named_type(0, (int)v26, 3, (int)&src, 0, 0, 0, 0, (__int64)&nptr);
        v27 = (int)nptr;
        if ( (_DWORD)nptr )
        {
          if ( !src )
          {
            if ( !under_debugger )
              interr(3442);
            BUG();
          }
          v28 = *(_BYTE *)src & 0x3F;
          if ( v175 == 8 )
          {
            if ( v28 != 45 )
              goto LABEL_54;
          }
          else if ( v28 != 13 )
          {
            goto LABEL_54;
          }
        }
        else
        {
          if ( *v26 != 34 || v26[1] != 35 )
          {
LABEL_54:
            if ( s )
            {
              v185.m128i_i64[0] = 0;
              qfree(s);
            }
            goto LABEL_25;
          }
          LODWORD(nptr) = strtol(v26 + 2, nullptr, 0);
          v27 = (int)nptr;
        }
        v29 = s;
        *(_DWORD *)(a1 + 12) = v27;
        if ( v29 )
        {
          v185.m128i_i64[0] = 0;
          qfree(v29);
          v30 = s1;
LABEL_61:
          n[0] = *(_QWORD *)a1;
          *(_QWORD *)a1 = v175 | n[0] & 0xFFFFFFFFFFFFFBF0LL;
LABEL_62:
          *(_QWORD *)a1 |= v179 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_63:
          n[0] = (size_t)v30;
          goto LABEL_36;
        }
LABEL_108:
        v30 = s1;
        goto LABEL_61;
      }
      v34 = v31 - 1;
      v35 = v33 + 1;
      v36 = v33 + 1 <= (unsigned __int64)(v31 - 1);
      v37 = v31 - 1;
      *(_OWORD *)v187 = 0;
      if ( !v36 )
        v35 = v34;
      nptr = nullptr;
      v38 = &v26[v35];
      v39 = v37 - v35;
      if ( v39 )
      {
        v40 = nullptr;
        if ( v39 != -1 )
        {
          nptr = (char *)qvector_reserve(&nptr, 0, v39 + 1, 1);
          v40 = nptr;
        }
        v187[0] = v39 + 1;
        memmove(v40, v38, v39);
        nptr[v39] = 0;
        if ( !v185.m128i_i64[0] )
        {
          if ( n[0] )
          {
            src = nullptr;
            v189 = 0;
LABEL_77:
            v41 = (char *)src;
            si128 = _mm_loadu_si128(&v189);
            src = nullptr;
            v189 = 0;
            if ( s )
            {
              *(__m128i *)n = si128;
              v185.m128i_i64[0] = 0;
              qfree(s);
              si128 = _mm_load_si128((const __m128i *)n);
            }
            s = v41;
            v185 = si128;
            if ( src )
            {
              v189.m128i_i64[0] = 0;
              qfree(src);
            }
            sub_5671B0((__int64 *)&s, 32);
            p_nptr = &nptr;
            sub_5671B0((__int64 *)&nptr, 32);
            v43 = (char *)haystack;
            if ( v187[0] )
              v43 = nptr;
            v44 = strtol(v43, nullptr, 0);
            v45 = nptr;
            *(_DWORD *)(a1 + 8) = v44;
            if ( v45 )
            {
              v187[0] = 0;
              qfree(v45);
            }
            goto LABEL_49;
          }
          v26 = (char *)haystack;
LABEL_75:
          src = nullptr;
          v189 = 0;
          if ( n[0] )
          {
            src = (void *)qvector_reserve(&src, 0, n[0] + 1, 1);
            v189.m128i_i64[0] = n[0] + 1;
            memmove(src, v26, n[0]);
            *((_BYTE *)src + n[0]) = 0;
          }
          goto LABEL_77;
        }
        v26 = s;
        v34 = v185.m128i_i64[0] - 1;
      }
      if ( n[0] <= v34 )
        v34 = n[0];
      n[0] = v34;
      goto LABEL_75;
    }
LABEL_8:
    p_nptr += 3;
    if ( p_nptr == (char **)&unk_2B04AB0 )
      goto LABEL_26;
  }
  if ( strcmp(v5, *p_nptr) )
    goto LABEL_8;
  v8 = (unsigned __int64)p_nptr[2];
  if ( !v8 )
    goto LABEL_8;
  LOBYTE(v14) = v161;
  v20 = *(_QWORD *)a1;
  if ( (v8 & 0xF) != 0 )
    v20 = (unsigned __int64)p_nptr[2] & 0xF | v20 & 0xFFFFFFFFFFFFFBF0LL;
  *(_QWORD *)a1 = v20 | v8 & 0xFFFFFFFFFFFFFFF0LL;
  if ( p_nptr[2] == byte_9 )
  {
    v22 = getinf_flag(3, 4);
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 20) = v22 == 0 ? 2 : 9;
    *(_QWORD *)(a1 + 8) = 0xFFFFFFFFLL;
    n[0] = (size_t)s1;
  }
LABEL_36:
  if ( (v14 & 0xFu) > 9 )
  {
    if ( (v14 & 0x3F) == 0x2D )
    {
      v21 = -96;
      LODWORD(p_nptr) = 0;
      if ( !_bittest64(&v21, *(_QWORD *)a1 & 0xFLL) )
        LOBYTE(p_nptr) = (*(_QWORD *)a1 & 0xFFFFFFFFFFFFF0F0LL) == 0;
    }
    else
    {
      LODWORD(p_nptr) = 1;
      if ( (v14 & 0x2F) == 0xD )
        LODWORD(p_nptr) = (*(_BYTE *)(a1 + 1) & 0x10) == 0;
    }
  }
  else
  {
    LOBYTE(p_nptr) = (*(_QWORD *)a1 & 0xFLL) != 10;
  }
LABEL_27:
  if ( n[0] )
  {
    *(_QWORD *)&v182 = 0;
    qfree((void *)n[0]);
  }
  return (unsigned int)p_nptr;
}

