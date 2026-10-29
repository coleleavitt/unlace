__int64 __fastcall sub_65C800(__int64 *a1, __int64 *a2, unsigned int a3, char *a4, int a5, unsigned int a6, char **a7)
{
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rcx
  bool v16; // al
  __int64 v17; // rdi
  const char *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int utf8_char; // eax
  char *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r15
  int v26; // r13d
  __int64 v27; // rax
  _BYTE *v28; // rsi
  unsigned __int64 v29; // rdi
  char v30; // dl
  __int64 v31; // rax
  unsigned __int64 v32; // rdi
  char v33; // dl
  __int64 v34; // rbx
  char *v35; // rbp
  unsigned __int64 v36; // r15
  char *v37; // rax
  char *v38; // r13
  __int64 v39; // r9
  char *v40; // r15
  __int64 v41; // r10
  unsigned __int64 v42; // r11
  __int64 v43; // rdx
  char *v44; // rax
  char *v45; // r15
  unsigned int v46; // edi
  char v47; // bl
  int v48; // esi
  signed __int64 v49; // r13
  char *v50; // rax
  char *v51; // rsi
  __int64 v52; // rax
  void *v53; // rax
  unsigned int v54; // ebx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r10
  int v57; // r8d
  bool v58; // cf
  __int64 v59; // rax
  _BYTE *v60; // rsi
  char v61; // r15
  unsigned __int64 v62; // rdi
  unsigned __int64 v63; // rdi
  char v64; // dl
  char v65; // si
  signed __int64 v66; // r13
  char *v67; // rsi
  char **v68; // rax
  __m128i v69; // xmm0
  __m128i v70; // xmm0
  unsigned int v71; // ebx
  bool v73; // al
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rdi
  const char *v78; // rbp
  unsigned int v79; // r13d
  char *v80; // rsi
  char **v81; // rax
  __m128i si128; // xmm0
  char *v83; // rsi
  char **v84; // rax
  int v85; // ebp
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  unsigned int v89; // r15d
  char *v90; // rax
  __int64 v91; // rax
  char *v92; // rsi
  char **v93; // rax
  const char *v94; // rax
  const char *v95; // rbx
  size_t v96; // rax
  size_t v97; // r13
  __int64 v98; // rax
  char *v99; // rsi
  unsigned __int64 v100; // rdi
  void *v101; // rbx
  __m128i v102; // xmm0
  __int64 v103; // r12
  unsigned int v104; // ebp
  char *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rbx
  const char *v108; // r12
  __int64 v109; // rbp
  char *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rsi
  __int64 *v113; // rax
  __int64 v114; // r15
  unsigned __int64 v115; // rdx
  unsigned int v116; // r13d
  __int64 v117; // rbp
  __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rax
  unsigned int *v121; // r14
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rsi
  __int64 v125; // rax
  char *v126; // rax
  char *v127; // rax
  unsigned __int64 v128; // r13
  unsigned __int64 v129; // rdx
  unsigned __int64 v130; // rsi
  unsigned __int64 v131; // rcx
  __int64 v132; // rdi
  int v133; // eax
  char *v134; // rdx
  char **v135; // rdi
  __int64 v136; // rax
  __int64 *v137; // r14
  __int64 v138; // rax
  char *v139; // rax
  char *v140; // rdx
  __int64 v141; // rbp
  char *v142; // rax
  void *v143; // rdi
  char *v144; // rax
  __int64 v145; // rax
  void *v146; // rax
  __int64 v147; // rax
  __int64 v148; // r12
  void *v149; // rdi
  void *v150; // rdi
  void *v151; // rdi
  char *v152; // rsi
  void *v153; // rax
  int encoding_qty; // r15d
  unsigned int v155; // ebx
  void *v156; // r12
  __m128i v157; // xmm0
  __m128i v158; // xmm1
  unsigned int v159; // r13d
  char *v160; // rax
  const char *encoding_name; // rax
  const char *v162; // r12
  size_t v163; // rax
  size_t v164; // r13
  unsigned __int64 v165; // rdi
  char *v166; // rsi
  void *v167; // rax
  void *v168; // rdi
  __int64 v169; // r14
  __int64 v170; // rax
  char *v171; // rsi
  __int64 v172; // rax
  char *v173; // rsi
  char **v174; // rax
  __m128i v175; // xmm0
  char *v176; // rsi
  char **v177; // rax
  __m128i v178; // xmm0
  void *v179; // rdi
  __int64 v180; // r12
  char *v181; // rax
  char *v182; // rax
  __m128i v183; // [rsp+0h] [rbp-148h] BYREF
  char **v184; // [rsp+10h] [rbp-138h]
  __int64 *v185; // [rsp+18h] [rbp-130h]
  int v186; // [rsp+24h] [rbp-124h]
  __int64 v187; // [rsp+28h] [rbp-120h]
  char *v188; // [rsp+30h] [rbp-118h]
  __int64 v189; // [rsp+38h] [rbp-110h]
  unsigned int default_encoding_idx; // [rsp+40h] [rbp-108h]
  int v191; // [rsp+44h] [rbp-104h]
  int v192; // [rsp+48h] [rbp-100h]
  char v193; // [rsp+4Ch] [rbp-FCh]
  char v194; // [rsp+4Dh] [rbp-FBh]
  char v195; // [rsp+4Eh] [rbp-FAh]
  unsigned __int8 v196; // [rsp+4Fh] [rbp-F9h]
  char v197; // [rsp+5Fh] [rbp-E9h] BYREF
  char *s; // [rsp+60h] [rbp-E8h] BYREF
  char *v199; // [rsp+68h] [rbp-E0h] BYREF
  void *v200; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v201; // [rsp+78h] [rbp-D0h]
  void *dest; // [rsp+90h] [rbp-B8h] BYREF
  __m128i v203; // [rsp+98h] [rbp-B0h] BYREF
  unsigned int v204; // [rsp+A8h] [rbp-A0h]
  void *v205; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v206; // [rsp+B8h] [rbp-90h]
  void *v207; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v208; // [rsp+D0h] [rbp-78h]
  void *v209; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v210; // [rsp+E8h] [rbp-60h]
  int v211; // [rsp+F8h] [rbp-50h]
  _BYTE v212[8]; // [rsp+100h] [rbp-48h]
  unsigned __int64 v213; // [rsp+108h] [rbp-40h]

  v185 = a2;
  v188 = a4;
  default_encoding_idx = a6;
  v184 = a7;
  v213 = __readfsqword(0x28u);
  if ( !a4 )
  {
    if ( v184 )
    {
      v92 = *v184;
      if ( (unsigned __int64)v184[2] <= 0xF )
      {
        v144 = (char *)qvector_reserve(v184, v92, 16, 1);
        *v184 = v144;
        v92 = v144;
      }
      v93 = v184;
      v71 = 0;
      v184[1] = (char *)&word_10;
      qmemcpy(v92, "No input given.", 15);
      (*v93)[15] = 0;
      return v71;
    }
    return 0;
  }
  if ( !v185 )
  {
    if ( v184 )
    {
      v80 = *v184;
      if ( (unsigned __int64)v184[2] <= 0x17 )
      {
        v139 = (char *)qvector_reserve(v184, v80, 24, 1);
        *v184 = v139;
        v80 = v139;
      }
      v81 = v184;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2383E60);
      v184[1] = (char *)&qword_18;
      *(__m128i *)v80 = si128;
      *(_QWORD *)(v80 + 15) = 0x2E6E657669672072LL;
      (*v81)[23] = 0;
    }
    return 0;
  }
  v9 = sub_3B8DF0((__int64)a1, a3);
  v12 = *a1;
  v13 = v9;
  v192 = v9;
  v14 = v9 + 14;
  v15 = (unsigned int)(v13 + 7);
  if ( (int)v15 >= 0 )
    v14 = v15;
  v191 = v15;
  v186 = v14 >> 3;
  v16 = sub_615160(v12, 3, 32, v15, v10, v11);
  v17 = *a1;
  v18 = (_BYTE *)(&dword_0 + 3);
  v194 = v16;
  v195 = sub_615160(v17, 3, 64, v19, v20, v21);
  if ( !a5 )
    a5 = 16;
  v205 = nullptr;
  v207 = nullptr;
  s = v188;
  v209 = nullptr;
  v206 = 0;
  v208 = 0;
  v210 = 0;
  v211 = add_encoding((int)"UTF-8");
  v196 = 0;
  v193 = 0;
  LOBYTE(v189) = 0;
  v183.m128i_i64[0] = (__int64)&s;
  while ( 1 )
  {
    utf8_char = get_utf8_char(v183.m128i_i64[0]);
    if ( utf8_char == -1 )
    {
      v23 = s++;
      utf8_char = (unsigned __int8)*v23;
    }
    if ( !utf8_char )
      break;
    if ( utf8_char == 76 )
    {
      v44 = s;
      if ( *s != 34 )
      {
        v45 = s - 1;
        if ( (unsigned int)(a5 - 1) > 0x19 )
        {
LABEL_146:
          if ( v184 )
          {
            v83 = *v184;
            if ( (unsigned __int64)v184[2] <= 0xF )
            {
              v127 = (char *)qvector_reserve(v184, v83, 16, 1);
              *v184 = v127;
              v83 = v127;
            }
            v84 = v184;
            v184[1] = (char *)&word_10;
            qmemcpy(v83, "Bad radix value", 15);
            (*v84)[15] = 0;
          }
          goto LABEL_124;
        }
LABEL_49:
        v46 = *(v44 - 1);
        v47 = *(v44 - 1);
        if ( v46 > 0x7F )
        {
          v48 = 0;
          goto LABEL_51;
        }
        while ( 1 )
        {
          v48 = isspace(v46);
          if ( !v48 )
            break;
          v46 = *++v45;
          v47 = v46;
          if ( v46 > 0x7F )
            goto LABEL_64;
        }
        if ( v47 == 45 )
        {
          v47 = v45[1];
          v50 = v45 + 1;
          v48 = 1;
          if ( v47 != 48 )
          {
            ++v45;
            if ( v47 )
              goto LABEL_62;
            v49 = 0;
            goto LABEL_95;
          }
        }
        else
        {
          if ( v47 == 43 )
          {
            v47 = v45[1];
            v50 = v45 + 1;
            if ( v47 == 48 )
              goto LABEL_59;
            ++v45;
            if ( !v47 )
            {
LABEL_251:
              v49 = 0;
              goto LABEL_96;
            }
LABEL_62:
            v46 = v47;
LABEL_51:
            LODWORD(v187) = v48;
            v49 = 0;
            v183.m128i_i64[1] = (unsigned int)a5;
            while ( 1 )
            {
              if ( v46 > 0x7F )
                goto LABEL_53;
              if ( isspace(v46) )
                break;
              v65 = v47 - 48;
              if ( (unsigned __int8)(v47 - 48) > 9u )
              {
                v65 = v47 - 87;
                if ( (unsigned __int8)(v47 - 97) > 0x19u )
                {
                  if ( (unsigned __int8)(v47 - 65) > 0x19u )
                    goto LABEL_53;
                  v65 = v47 - 55;
                }
              }
              if ( a5 <= v65 )
                goto LABEL_53;
              if ( !is_mul_ok(v49, v183.m128i_u64[1]) )
                goto LABEL_298;
              v66 = a5 * v49;
              v58 = __CFADD__(v65, v66);
              v49 = v65 + v66;
              if ( v58 )
                goto LABEL_298;
              v47 = *++v45;
              if ( !v47 )
                break;
              v46 = v47;
            }
            v48 = v187;
            if ( v49 < 0 && (v187 & 1) != 0 )
            {
LABEL_298:
              if ( v184 )
              {
                v176 = *v184;
                if ( (unsigned __int64)v184[2] <= 0x5F )
                {
                  v182 = (char *)qvector_reserve(v184, v176, 96, 1);
                  *v184 = v182;
                  v176 = v182;
                }
                v177 = v184;
                v178 = _mm_load_si128((const __m128i *)&xmmword_2383EE0);
                v184[1] = (char *)&qword_60;
                *(__m128i *)v176 = v178;
                *((__m128i *)v176 + 1) = _mm_load_si128((const __m128i *)&xmmword_2383EF0);
                *((__m128i *)v176 + 2) = _mm_load_si128((const __m128i *)&xmmword_2383F00);
                *((__m128i *)v176 + 3) = _mm_load_si128((const __m128i *)&xmmword_2383F10);
                *((__m128i *)v176 + 4) = _mm_load_si128((const __m128i *)&xmmword_2383F20);
                *(__m128i *)(v176 + 79) = _mm_load_si128((const __m128i *)&xmmword_2383F30);
                (*v177)[95] = 0;
              }
              goto LABEL_124;
            }
LABEL_94:
            if ( v48 )
LABEL_95:
              v49 = -v49;
LABEL_96:
            s = v45;
LABEL_97:
            v54 = 0;
            v55 = v49;
            do
            {
              v55 >>= 8 * (unsigned __int8)v186;
              ++v54;
            }
            while ( v55 );
            v18 = (const char *)v54;
            v56 = sub_658210(v49, v54, v192, v195, v194);
            v57 = v54 * v186 - 1;
            if ( v57 >= 0 )
            {
              do
              {
                v59 = v206;
                v60 = v205;
                v61 = v56;
                LOBYTE(dest) = v56;
                v62 = v206 + 1;
                if ( &dest < v205 || &dest >= (void **)((char *)v205 + *((_QWORD *)&v206 + 1)) )
                {
                  if ( *((_QWORD *)&v206 + 1) < v62 )
                  {
                    LODWORD(v187) = v57;
                    v183.m128i_i64[1] = v56;
                    v205 = (void *)qvector_reserve(&v205, v205, v206 + 1, 1);
                    v60 = v205;
                    v57 = v187;
                    v59 = v206;
                    v56 = v183.m128i_u64[1];
                    v61 = (char)dest;
                  }
                }
                else if ( *((_QWORD *)&v206 + 1) < v62 )
                {
                  LODWORD(v187) = v57;
                  v183.m128i_i64[1] = v56;
                  v205 = (void *)qvector_reserve(&v205, v205, v206 + 1, 1);
                  v60 = v205;
                  v57 = v187;
                  v59 = v206;
                  v56 = v183.m128i_u64[1];
                }
                v60[v59] = v61;
                v91 = v208;
                v18 = (const char *)v207;
                LOBYTE(dest) = -1;
                *(_QWORD *)&v206 = v206 + 1;
                v63 = v208 + 1;
                if ( &dest < v207 || &dest >= (void **)((char *)v207 + *((_QWORD *)&v208 + 1)) )
                {
                  if ( *((_QWORD *)&v208 + 1) < v63 )
                  {
                    LODWORD(v187) = v57;
                    v183.m128i_i64[1] = v56;
                    v207 = (void *)qvector_reserve(&v207, v207, v208 + 1, 1);
                    v18 = (const char *)v207;
                    v57 = v187;
                    v91 = v208;
                    v64 = (char)dest;
                    v56 = v183.m128i_u64[1];
                  }
                  else
                  {
                    v64 = -1;
                  }
                  v18[v91] = v64;
                }
                else
                {
                  if ( *((_QWORD *)&v208 + 1) < v63 )
                  {
                    LODWORD(v187) = v57;
                    v183.m128i_i64[1] = v56;
                    v207 = (void *)qvector_reserve(&v207, v207, v208 + 1, 1);
                    v18 = (const char *)v207;
                    v57 = v187;
                    v91 = v208;
                    v56 = v183.m128i_u64[1];
                  }
                  v18[v91] = -1;
                }
                v56 >>= 8;
                v25 = v208 + 1;
                *(_QWORD *)&v208 = v208 + 1;
                v58 = v57-- == 0;
              }
              while ( !v58 );
              v24 = v206;
              goto LABEL_15;
            }
            goto LABEL_14;
          }
LABEL_64:
          v47 = *v45;
          if ( *v45 != 48 )
          {
            if ( !v47 )
              goto LABEL_251;
            v48 = 0;
            v46 = v47;
            goto LABEL_51;
          }
          v50 = v45;
          v48 = 0;
        }
LABEL_59:
        if ( (v50[1] & 0xDF) != 0x58 )
        {
          v45 = v50;
          v47 = 48;
          v46 = 48;
          goto LABEL_51;
        }
        if ( a5 != 16 )
        {
LABEL_53:
          if ( !(_BYTE)v189 )
            sub_375500();
          if ( v184 )
          {
            v173 = *v184;
            if ( (unsigned __int64)v184[2] <= 0x45 )
            {
              v181 = (char *)qvector_reserve(v184, v173, 70, 1);
              *v184 = v181;
              v173 = v181;
            }
            v174 = v184;
            v175 = _mm_load_si128((const __m128i *)&xmmword_2383EA0);
            v184[1] = (_BYTE *)(&dword_44 + 2);
            *(__m128i *)v173 = v175;
            *((__m128i *)v173 + 1) = _mm_load_si128((const __m128i *)&xmmword_2383EB0);
            *((__m128i *)v173 + 2) = _mm_load_si128((const __m128i *)&xmmword_2383EC0);
            *((__m128i *)v173 + 3) = _mm_load_si128((const __m128i *)&xmmword_2383ED0);
            *(_QWORD *)(v173 + 61) = 0x2E65736162207265LL;
            (*v174)[69] = 0;
          }
          goto LABEL_124;
        }
        v47 = v50[2];
        v45 = v50 + 2;
        if ( v47 )
          goto LABEL_62;
        v49 = 0;
        goto LABEL_94;
      }
      v73 = sub_58F700(v183.m128i_i64[0], v18);
      v77 = *a1;
      if ( v73 )
      {
        v78 = "UTF-16LE";
        if ( sub_615160(v77, 3, 32, v74, v75, v76) )
          v78 = "UTF-16BE";
      }
      else
      {
        v78 = "UTF-32LE";
        if ( sub_615160(v77, 3, 32, v74, v75, v76) )
          v78 = "UTF-32BE";
      }
      v79 = add_encoding((int)v78);
      if ( v79 != default_encoding_idx )
      {
        if ( v184 )
          sub_3573A0(v184);
        v196 = 1;
      }
      v34 = v210;
      default_encoding_idx = v79;
      v35 = s + 1;
      v36 = v210 + 1;
      ++s;
LABEL_33:
      v37 = strchr(v35, 34);
      v38 = v37;
      if ( !v37 )
        v37 = &v35[strlen(v35)];
      s = v37;
      v18 = (const char *)v209;
      if ( *((_QWORD *)&v210 + 1) < v36 )
      {
        v209 = (void *)qvector_reserve(&v209, v209, v36, 8);
        v34 = v210;
        v18 = (const char *)v209;
      }
      v39 = (__int64)&v18[8 * v34];
      *(_QWORD *)v39 = 0;
      *(_QWORD *)&v210 = v210 + 1;
      *(_DWORD *)v39 = v206;
      v40 = (char *)(s - v35);
      if ( s != v35 )
      {
        v41 = v206;
        v42 = (unsigned __int64)&v40[v206];
        if ( __CFADD__((_QWORD)v206, v40) )
        {
          if ( (unsigned __int64)v206 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v206 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v206 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_42:
            v18 = v35;
            v183.m128i_i64[1] = v39;
            memcpy((char *)v205 + v41, v35, (size_t)v40);
            v39 = v183.m128i_i64[1];
            goto LABEL_43;
          }
          v42 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v51 = (char *)v205;
        v52 = v206;
        if ( *((_QWORD *)&v206 + 1) < v42 )
        {
          v189 = v206;
          v187 = v39;
          v183.m128i_i64[1] = v42;
          v205 = (void *)qvector_reserve(&v205, v205, v42, 1);
          v51 = (char *)v205;
          v41 = v189;
          v52 = v206;
          v39 = v187;
          v42 = v183.m128i_u64[1];
        }
        v189 = v41;
        v187 = v39;
        v183.m128i_i64[1] = v42;
        memset(&v51[v52], 0, v42 - v52);
        v39 = v187;
        v41 = v189;
        *(_QWORD *)&v206 = v183.m128i_i64[1];
        goto LABEL_42;
      }
LABEL_43:
      *(_DWORD *)(v39 + 4) = v206;
      v25 = v206;
      v43 = v208;
      LOBYTE(dest) = -1;
      if ( (unsigned __int64)v206 < (unsigned __int64)v208 )
      {
        *(_QWORD *)&v208 = v206;
        if ( !v38 )
          goto LABEL_46;
LABEL_45:
        ++s;
        goto LABEL_46;
      }
      if ( (unsigned __int64)v208 < (unsigned __int64)v206 )
      {
        v18 = (const char *)v207;
        if ( &dest < v207 || &dest >= (void **)((char *)v207 + *((_QWORD *)&v208 + 1)) )
        {
          if ( *((_QWORD *)&v208 + 1) >= (unsigned __int64)v206
            || (v53 = (void *)qvector_reserve(&v207, v207, v206, 1),
                v43 = v208,
                v207 = v53,
                v18 = (const char *)v53,
                (unsigned __int64)v208 < v25) )
          {
            while ( 1 )
            {
              v18[v43++] = (char)dest;
              if ( v25 == v43 )
                break;
              v18 = (const char *)v207;
            }
          }
        }
        else if ( *((_QWORD *)&v208 + 1) >= (unsigned __int64)v206
               || (v146 = (void *)qvector_reserve(&v207, v207, v206, 1),
                   v43 = v208,
                   v207 = v146,
                   v18 = (const char *)v146,
                   (unsigned __int64)v208 < v25) )
        {
          while ( 1 )
          {
            v18[v43++] = -1;
            if ( v25 == v43 )
              break;
            v18 = (const char *)v207;
          }
        }
        *(_QWORD *)&v208 = v25;
        v24 = v206;
        if ( v38 )
          ++s;
        LOBYTE(v189) = 1;
        goto LABEL_15;
      }
      if ( v38 )
        goto LABEL_45;
LABEL_46:
      LOBYTE(v189) = 1;
    }
    else
    {
      if ( utf8_char != 9 )
      {
        switch ( utf8_char )
        {
          case ' ':
          case ',':
            goto LABEL_14;
          case '"':
            v34 = v210;
            v35 = s;
            v36 = v210 + 1;
            goto LABEL_33;
          case '\'':
            v49 = 0;
            v85 = 0;
            v183.m128i_i64[1] = (__int64)&v205;
            break;
          case '?':
            if ( v191 <= 7 )
            {
              v25 = v208;
            }
            else
            {
              v26 = 0;
              do
              {
                v27 = v206;
                v28 = v205;
                LOBYTE(dest) = -1;
                v29 = v206 + 1;
                if ( &dest >= v205 && &dest < (void **)((char *)v205 + *((_QWORD *)&v206 + 1)) )
                {
                  if ( *((_QWORD *)&v206 + 1) < v29 )
                  {
                    v205 = (void *)qvector_reserve(&v205, v205, v206 + 1, 1);
                    v28 = v205;
                    v27 = v206;
                  }
                  v28[v27] = -1;
                }
                else
                {
                  if ( *((_QWORD *)&v206 + 1) < v29 )
                  {
                    v205 = (void *)qvector_reserve(&v205, v205, v206 + 1, 1);
                    v28 = v205;
                    v30 = (char)dest;
                    v27 = v206;
                  }
                  else
                  {
                    v30 = -1;
                  }
                  v28[v27] = v30;
                }
                v31 = v208;
                v18 = (const char *)v207;
                LOBYTE(dest) = 0;
                *(_QWORD *)&v206 = v206 + 1;
                v32 = v208 + 1;
                if ( &dest >= v207 && &dest < (void **)((char *)v207 + *((_QWORD *)&v208 + 1)) )
                {
                  if ( *((_QWORD *)&v208 + 1) < v32 )
                  {
                    v207 = (void *)qvector_reserve(&v207, v207, v208 + 1, 1);
                    v18 = (const char *)v207;
                    v31 = v208;
                  }
                  v18[v31] = 0;
                }
                else
                {
                  if ( *((_QWORD *)&v208 + 1) < v32 )
                  {
                    v207 = (void *)qvector_reserve(&v207, v207, v208 + 1, 1);
                    v18 = (const char *)v207;
                    v33 = (char)dest;
                    v31 = v208;
                  }
                  else
                  {
                    v33 = 0;
                  }
                  v18[v31] = v33;
                }
                ++v26;
                v25 = v208 + 1;
                *(_QWORD *)&v208 = v208 + 1;
              }
              while ( v186 > v26 );
            }
            v193 = 1;
            v24 = v206;
            if ( *s == 63 )
              ++s;
            goto LABEL_15;
          default:
            v44 = s;
            v45 = s - 1;
            if ( (unsigned int)(a5 - 1) > 0x19 )
              goto LABEL_146;
            goto LABEL_49;
        }
        while ( 1 )
        {
          v89 = get_utf8_char(v183.m128i_i64[0]);
          if ( v89 == -1 )
          {
            v90 = s++;
            v89 = *v90;
          }
          if ( !v89 )
            goto LABEL_183;
          if ( v89 == 39 )
            goto LABEL_97;
          if ( v85 == 64 )
            break;
          if ( sub_615160(*a1, 3, 32, v86, v87, v88) )
            v49 |= (unsigned __int64)v89 << v85;
          else
            v49 = v89 | (unsigned __int64)(v49 << 8);
          v85 += 8;
        }
        if ( v184 )
        {
          v67 = *v184;
          if ( (unsigned __int64)v184[2] <= 0x34 )
          {
            v126 = (char *)qvector_reserve(v184, v67, 53, 1);
            *v184 = v126;
            v67 = v126;
          }
          v68 = v184;
          v69 = _mm_load_si128((const __m128i *)&xmmword_2383E70);
          v184[1] = (_BYTE *)(&word_34 + 1);
          *(__m128i *)v67 = v69;
          v70 = _mm_load_si128((const __m128i *)&xmmword_2383E80);
          *((_DWORD *)v67 + 12) = 779384176;
          *((__m128i *)v67 + 1) = v70;
          *((__m128i *)v67 + 2) = _mm_load_si128((const __m128i *)&xmmword_2383E90);
          (*v68)[52] = 0;
        }
LABEL_124:
        v71 = 0;
        goto LABEL_125;
      }
LABEL_14:
      v24 = v206;
      v25 = v208;
LABEL_15:
      if ( v25 != v24 )
      {
        if ( !under_debugger )
          interr(1499);
        goto LABEL_314;
      }
    }
  }
LABEL_183:
  if ( !v193 && v207 )
  {
    *(_QWORD *)&v208 = 0;
    qfree(v207);
    v207 = nullptr;
    *((_QWORD *)&v208 + 1) = 0;
  }
  if ( !(_QWORD)v206 )
    goto LABEL_124;
  if ( !(_BYTE)v189 )
  {
    sub_65C5D0(v185, (const char *)&v205);
    goto LABEL_222;
  }
  if ( !default_encoding_idx )
    default_encoding_idx = get_default_encoding_idx(1);
  v200 = nullptr;
  v201 = 0;
  if ( default_encoding_idx == -1 )
  {
    encoding_qty = get_encoding_qty(0.0);
    v155 = 1;
    if ( encoding_qty > 1 )
    {
      do
      {
        v204 = v155;
        dest = nullptr;
        v203 = 0;
        encoding_name = (const char *)get_encoding_name(v155);
        v162 = encoding_name;
        if ( encoding_name && (v163 = strlen(encoding_name), (v164 = v163) != 0) )
        {
          v168 = dest;
          v169 = v163 + 1;
          if ( v203.m128i_i64[1] < v163 + 1 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v163 + 1, 1);
            v168 = dest;
          }
          v203.m128i_i64[0] = v169;
          memmove(v168, v162, v164);
          *((_BYTE *)dest + v164) = 0;
        }
        else
        {
          v203.m128i_i64[0] = 0;
        }
        v172 = v201;
        v171 = (char *)v200;
        v165 = v201 + 1;
        if ( &dest < v200 || &dest >= (void **)((char *)v200 + 32 * *((_QWORD *)&v201 + 1)) )
        {
          if ( *((_QWORD *)&v201 + 1) < v165 )
          {
            v200 = (void *)qvector_reserve(&v200, v200, v201 + 1, 32);
            v171 = (char *)v200;
            v172 = v201;
          }
          v166 = &v171[32 * v172];
          v167 = dest;
          *(__m128i *)(v166 + 8) = _mm_loadu_si128(&v203);
          *(_QWORD *)v166 = v167;
          *(_QWORD *)&v201 = v201 + 1;
          *((_DWORD *)v166 + 6) = v204;
        }
        else
        {
          v156 = dest;
          v157 = _mm_loadl_epi64(&v203);
          dest = nullptr;
          v158 = _mm_loadl_epi64((const __m128i *)&v203.m128i_u64[1]);
          v159 = v204;
          v203 = 0;
          if ( *((_QWORD *)&v201 + 1) < v165 )
          {
            v183.m128i_i64[1] = v158.m128i_i64[0];
            v183.m128i_i64[0] = v157.m128i_i64[0];
            v200 = (void *)qvector_reserve(&v200, v200, v201 + 1, 32);
            v171 = (char *)v200;
            v158 = _mm_loadl_epi64((const __m128i *)&v183.m128i_u64[1]);
            v172 = v201;
            v157 = _mm_loadl_epi64(&v183);
          }
          v160 = &v171[32 * v172];
          *(_QWORD *)v160 = v156;
          *(__m128i *)(v160 + 8) = _mm_unpacklo_epi64(v157, v158);
          *((_DWORD *)v160 + 6) = v159;
          *(_QWORD *)&v201 = v201 + 1;
          if ( dest )
          {
            v203.m128i_i64[0] = 0;
            qfree(dest);
          }
        }
        ++v155;
      }
      while ( encoding_qty != v155 );
    }
LABEL_198:
    v106 = v201;
  }
  else
  {
    v203 = 0;
    dest = nullptr;
    v204 = default_encoding_idx;
    v94 = (const char *)get_encoding_name(default_encoding_idx);
    v95 = v94;
    if ( v94 && (v96 = strlen(v94), (v97 = v96) != 0) )
    {
      v179 = dest;
      v180 = v96 + 1;
      if ( v203.m128i_i64[1] < v96 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v96 + 1, 1);
        v179 = dest;
      }
      v203.m128i_i64[0] = v180;
      memmove(v179, v95, v97);
      *((_BYTE *)dest + v97) = 0;
    }
    else
    {
      v203.m128i_i64[0] = 0;
    }
    v98 = v201;
    v99 = (char *)v200;
    v100 = v201 + 1;
    if ( &dest < v200 || &dest >= (void **)((char *)v200 + 32 * *((_QWORD *)&v201 + 1)) )
    {
      if ( *((_QWORD *)&v201 + 1) < v100 )
      {
        v200 = (void *)qvector_reserve(&v200, v200, v201 + 1, 32);
        v99 = (char *)v200;
        v98 = v201;
      }
      v152 = &v99[32 * v98];
      v153 = dest;
      *(__m128i *)(v152 + 8) = _mm_loadu_si128(&v203);
      *(_QWORD *)v152 = v153;
      *((_DWORD *)v152 + 6) = v204;
      v106 = v201 + 1;
      *(_QWORD *)&v201 = v201 + 1;
    }
    else
    {
      v101 = dest;
      v102 = _mm_loadl_epi64(&v203);
      dest = nullptr;
      v103 = v203.m128i_i64[1];
      v104 = v204;
      v203 = 0;
      if ( *((_QWORD *)&v201 + 1) < v100 )
      {
        v183.m128i_i64[0] = v102.m128i_i64[0];
        v200 = (void *)qvector_reserve(&v200, v200, v201 + 1, 32);
        v99 = (char *)v200;
        v102 = _mm_loadl_epi64(&v183);
        v98 = v201;
      }
      v105 = &v99[32 * v98];
      *(_QWORD *)v105 = v101;
      *(__m128i *)(v105 + 8) = _mm_unpacklo_epi64(v102, (__m128i)(unsigned __int64)v103);
      *((_DWORD *)v105 + 6) = v104;
      v106 = v201 + 1;
      *(_QWORD *)&v201 = v201 + 1;
      if ( dest )
      {
        v203.m128i_i64[0] = 0;
        qfree(dest);
        goto LABEL_198;
      }
    }
  }
  if ( !v106 )
  {
    v140 = (char *)v200;
    if ( v200 )
      goto LABEL_258;
    goto LABEL_222;
  }
  v183.m128i_i64[1] = 0;
  LOBYTE(v186) = v184 != nullptr;
  while ( 2 )
  {
    v108 = haystack;
    v109 = 32 * v183.m128i_i64[1];
    v110 = (char *)v200 + 32 * v183.m128i_i64[1];
    if ( *((_QWORD *)v110 + 1) )
      v108 = *(const char **)v110;
    if ( *(_DWORD *)((char *)v200 + v109 + 24) != (unsigned int)add_encoding((int)v108) )
    {
      if ( !under_debugger )
        interr(2355);
LABEL_314:
      BUG();
    }
    if ( sub_58FF40((__int64)v108) )
    {
      sub_65C5D0(v185, (const char *)&v205);
      goto LABEL_202;
    }
    v111 = v185[1];
    v112 = *v185;
    if ( v185[2] < (unsigned __int64)(v111 + 1) )
    {
      v137 = v185;
      v138 = qvector_reserve(v185, v112, v111 + 1, 80);
      *v137 = v138;
      v111 = v137[1];
      v112 = v138;
    }
    v113 = v185;
    v114 = v112 + 80 * v111;
    *(_QWORD *)v114 = 0;
    *(_QWORD *)(v114 + 24) = 0;
    *(_QWORD *)(v114 + 48) = 0;
    *(_DWORD *)(v114 + 72) = -1;
    *(_OWORD *)(v114 + 8) = 0;
    *(_OWORD *)(v114 + 32) = 0;
    *(_OWORD *)(v114 + 56) = 0;
    v115 = v210;
    ++v113[1];
    *(_DWORD *)(v114 + 72) = *(_DWORD *)((char *)v200 + v109 + 24);
    if ( !v115 )
    {
LABEL_244:
      sub_6580D0((__int64 *)v114, &v205, v115, v206);
      goto LABEL_202;
    }
    v116 = 0;
    v117 = 0;
    while ( 2 )
    {
      v121 = (unsigned int *)((char *)v209 + 8 * v117);
      sub_6580D0((__int64 *)v114, &v205, v116, *v121);
      v203 = 0;
      dest = nullptr;
      v199 = (char *)v205 + *v121;
      v183.m128i_i64[0] = v121[1] - *v121;
      v122 = convert_encoding();
      if ( v183.m128i_i64[0] == v122 )
      {
        v123 = *(_QWORD *)(v114 + 56);
        v124 = *(_QWORD *)(v114 + 48);
        if ( *(_QWORD *)(v114 + 64) < (unsigned __int64)(v123 + 1) )
        {
          v125 = qvector_reserve(v114 + 48, v124, v123 + 1, 8);
          *(_QWORD *)(v114 + 48) = v125;
          v124 = v125;
          v123 = *(_QWORD *)(v114 + 56);
        }
        v118 = v124 + 8 * v123;
        *(_QWORD *)v118 = 0;
        v119 = *(_QWORD *)(v114 + 8);
        ++*(_QWORD *)(v114 + 56);
        *(_DWORD *)v118 = v119;
        *(_DWORD *)(v118 + 4) = v203.m128i_i32[0] + v119;
        if ( v203.m128i_i64[0] )
          sub_658010((__int64 *)v114, dest, v203.m128i_u64[0]);
        if ( (_QWORD)v208 )
        {
          v128 = *(_QWORD *)(v114 + 8);
          v129 = *(_QWORD *)(v114 + 32);
          v197 = -1;
          if ( v128 >= v129 )
          {
            if ( v129 >= v128 )
              goto LABEL_214;
            v130 = *(_QWORD *)(v114 + 24);
            v131 = *(_QWORD *)(v114 + 40);
            v132 = v114 + 24;
            if ( (unsigned __int64)&v197 < v130 || (unsigned __int64)&v197 >= v130 + v131 )
            {
              if ( v131 >= v128
                || (v145 = qvector_reserve(v132, v130, v128, 1),
                    v129 = *(_QWORD *)(v114 + 32),
                    *(_QWORD *)(v114 + 24) = v145,
                    v130 = v145,
                    v129 < v128) )
              {
                while ( 1 )
                {
                  *(_BYTE *)(v130 + v129++) = v197;
                  if ( v128 == v129 )
                    break;
                  v130 = *(_QWORD *)(v114 + 24);
                }
              }
            }
            else if ( v131 >= v128
                   || (v170 = qvector_reserve(v132, v130, v128, 1),
                       v129 = *(_QWORD *)(v114 + 32),
                       *(_QWORD *)(v114 + 24) = v170,
                       v130 = v170,
                       v129 < v128) )
            {
              while ( 1 )
              {
                *(_BYTE *)(v130 + v129++) = -1;
                if ( v128 == v129 )
                  break;
                v130 = *(_QWORD *)(v114 + 24);
              }
            }
          }
          *(_QWORD *)(v114 + 32) = v128;
        }
LABEL_214:
        v116 = v121[1];
        if ( dest )
        {
          v203.m128i_i64[0] = 0;
          qfree(dest);
        }
        v120 = v210;
        if ( ++v117 >= (unsigned __int64)v210 )
          goto LABEL_242;
        continue;
      }
      break;
    }
    if ( v122 >= 0 && (_BYTE)v186 )
    {
      v199 += v122;
      v183.m128i_i64[0] = (__int64)v199;
      v133 = get_utf8_char(&v199);
      v134 = v199;
      if ( v133 == -1 )
        v134 = ++v199;
      v183.m128i_i64[0] = (__int64)&v134[-v183.m128i_i64[0]];
      __memcpy_chk();
      v135 = v184;
      v212[v183.m128i_i64[0]] = 0;
      sub_3573A0(v135);
    }
    v136 = v185[1];
    if ( v136 )
    {
      v147 = v136 - 1;
      v148 = *v185 + 80 * v147;
      v185[1] = v147;
      v149 = *(void **)(v148 + 48);
      if ( v149 )
      {
        *(_QWORD *)(v148 + 56) = 0;
        qfree(v149);
      }
      v150 = *(void **)(v148 + 24);
      if ( v150 )
      {
        *(_QWORD *)(v148 + 32) = 0;
        qfree(v150);
      }
      v151 = *(void **)v148;
      if ( *(_QWORD *)v148 )
      {
        *(_QWORD *)(v148 + 8) = 0;
        qfree(v151);
      }
    }
    if ( dest )
    {
      v203.m128i_i64[0] = 0;
      qfree(dest);
    }
    v120 = v210;
    v196 = v189;
LABEL_242:
    if ( v117 == v120 )
    {
      v115 = v116;
      goto LABEL_244;
    }
LABEL_202:
    ++v183.m128i_i64[1];
    v107 = v201;
    if ( v183.m128i_i64[1] < (unsigned __int64)v201 )
      continue;
    break;
  }
  v140 = (char *)v200;
  if ( v200 )
  {
    if ( (_QWORD)v201 )
    {
      v141 = 0;
      do
      {
        v142 = &v140[32 * v141];
        v143 = *(void **)v142;
        if ( *(_QWORD *)v142 )
        {
          *((_QWORD *)v142 + 1) = 0;
          qfree(v143);
          v140 = (char *)v200;
        }
        ++v141;
      }
      while ( v107 != v141 );
    }
LABEL_258:
    *(_QWORD *)&v201 = 0;
    qfree(v140);
  }
LABEL_222:
  v71 = v196 ^ 1;
LABEL_125:
  if ( v209 )
  {
    *(_QWORD *)&v210 = 0;
    qfree(v209);
  }
  if ( v207 )
  {
    *(_QWORD *)&v208 = 0;
    qfree(v207);
  }
  if ( v205 )
  {
    *(_QWORD *)&v206 = 0;
    qfree(v205);
  }
  return v71;
}

