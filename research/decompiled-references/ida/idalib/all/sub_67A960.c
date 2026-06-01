__int64 __fastcall sub_67A960(__int64 *a1, __int64 *a2, __int64 a3, char *a4, int a5, unsigned int a6, char **a7)
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
  unsigned __int64 v24; // rdx
  int v25; // r13d
  __int64 v26; // rax
  _BYTE *v27; // rsi
  unsigned __int64 v28; // rdi
  char v29; // dl
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  char v32; // dl
  __int64 v33; // rbx
  char *v34; // r15
  unsigned __int64 v35; // rbp
  char *v36; // rax
  char *v37; // r13
  char *v38; // rbp
  unsigned __int64 v39; // r10
  char *v40; // r9
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // r15
  char *v43; // rax
  char *v44; // r15
  unsigned int v45; // edi
  char v46; // bl
  int v47; // esi
  signed __int64 v48; // r13
  char *v49; // rax
  char *v50; // rsi
  void *v51; // rax
  unsigned int v52; // r15d
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // r8
  int v55; // r15d
  bool v56; // cf
  __int64 v57; // rax
  _BYTE *v58; // rsi
  __int8 v59; // r10
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rdi
  char v62; // dl
  char v63; // si
  signed __int64 v64; // r13
  char *v65; // rsi
  char **v66; // rax
  __m128i v67; // xmm0
  __m128i v68; // xmm0
  unsigned int v69; // ebx
  bool v71; // al
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdi
  const char *v76; // rbp
  unsigned int v77; // r13d
  char *v78; // rsi
  char **v79; // rax
  __m128i si128; // xmm0
  char *v81; // rsi
  char **v82; // rax
  int v83; // ebp
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  unsigned int v87; // r15d
  char *v88; // rax
  __int64 v89; // rax
  char *v90; // rsi
  char **v91; // rax
  const char *v92; // rax
  const char *v93; // rbx
  size_t v94; // rax
  size_t v95; // r13
  __int64 v96; // rax
  char *v97; // rsi
  unsigned __int64 v98; // rdi
  void *v99; // rbx
  __m128i v100; // xmm0
  __int64 v101; // r12
  unsigned int v102; // ebp
  char *v103; // rax
  __int64 v104; // rax
  __int64 v105; // rbx
  const char *v106; // r12
  __int64 v107; // rbp
  char *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rsi
  __int64 *v111; // rax
  __int64 v112; // r15
  unsigned __int64 v113; // r13
  __int64 v114; // rbp
  __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rax
  unsigned __int64 *v118; // r14
  unsigned __int64 v119; // r8
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rsi
  __int64 v123; // rax
  char *v124; // rax
  char *v125; // rax
  unsigned __int64 v126; // r13
  unsigned __int64 v127; // rdx
  unsigned __int64 v128; // rsi
  unsigned __int64 v129; // rcx
  __int64 v130; // rdi
  int v131; // eax
  char *v132; // rdx
  __int64 v133; // rsi
  char **v134; // rdi
  __int64 v135; // rax
  __int64 *v136; // r14
  __int64 v137; // rax
  char *v138; // rax
  char *v139; // rdx
  __int64 v140; // rbp
  char *v141; // rax
  void *v142; // rdi
  char *v143; // rax
  __int64 v144; // rax
  void *v145; // rax
  __int64 v146; // rax
  __int64 v147; // r12
  void *v148; // rdi
  void *v149; // rdi
  void *v150; // rdi
  char *v151; // rsi
  void *v152; // rax
  int encoding_qty; // r15d
  unsigned int v154; // ebx
  void *v155; // r12
  __m128i v156; // xmm0
  __m128i v157; // xmm1
  unsigned int v158; // r13d
  char *v159; // rax
  const char *encoding_name; // rax
  const char *v161; // r12
  size_t v162; // rax
  size_t v163; // r13
  unsigned __int64 v164; // rdi
  char *v165; // rsi
  void *v166; // rax
  void *v167; // rdi
  __int64 v168; // r14
  __int64 v169; // rax
  char *v170; // rsi
  __int64 v171; // rax
  char *v172; // rsi
  char **v173; // rax
  __m128i v174; // xmm0
  char *v175; // rsi
  char **v176; // rax
  __m128i v177; // xmm0
  void *v178; // rdi
  __int64 v179; // r12
  char *v180; // rax
  char *v181; // rax
  __m128i v182; // [rsp+0h] [rbp-148h] BYREF
  char **v183; // [rsp+10h] [rbp-138h]
  __int64 *v184; // [rsp+18h] [rbp-130h]
  int v185; // [rsp+24h] [rbp-124h]
  char *v186; // [rsp+28h] [rbp-120h]
  char *v187; // [rsp+30h] [rbp-118h]
  unsigned int default_encoding_idx; // [rsp+38h] [rbp-110h]
  int v189; // [rsp+3Ch] [rbp-10Ch]
  int v190; // [rsp+40h] [rbp-108h]
  char v191; // [rsp+44h] [rbp-104h]
  char v192; // [rsp+45h] [rbp-103h]
  char v193; // [rsp+46h] [rbp-102h]
  unsigned __int8 v194; // [rsp+47h] [rbp-101h]
  unsigned __int64 v195; // [rsp+48h] [rbp-100h]
  char v196; // [rsp+5Fh] [rbp-E9h] BYREF
  char *s; // [rsp+60h] [rbp-E8h] BYREF
  char *v198; // [rsp+68h] [rbp-E0h] BYREF
  void *v199; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v200; // [rsp+78h] [rbp-D0h]
  void *dest; // [rsp+90h] [rbp-B8h] BYREF
  __m128i v202; // [rsp+98h] [rbp-B0h] BYREF
  unsigned int v203; // [rsp+A8h] [rbp-A0h]
  void *v204; // [rsp+B0h] [rbp-98h] BYREF
  __int128 v205; // [rsp+B8h] [rbp-90h]
  void *v206; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v207; // [rsp+D0h] [rbp-78h]
  void *v208; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v209; // [rsp+E8h] [rbp-60h]
  int v210; // [rsp+F8h] [rbp-50h]
  _BYTE v211[8]; // [rsp+100h] [rbp-48h] BYREF
  unsigned __int64 v212; // [rsp+108h] [rbp-40h]

  v184 = a2;
  v186 = a4;
  default_encoding_idx = a6;
  v183 = a7;
  v212 = __readfsqword(0x28u);
  if ( !a4 )
  {
    if ( v183 )
    {
      v90 = *v183;
      if ( (unsigned __int64)v183[2] <= 0xF )
      {
        v143 = (char *)qvector_reserve(v183, v90, 16, 1);
        *v183 = v143;
        v90 = v143;
      }
      v91 = v183;
      v183[1] = (char *)&word_10;
      qmemcpy(v90, "No input given.", 15);
      v69 = 0;
      (*v91)[15] = 0;
      return v69;
    }
    return 0;
  }
  if ( !v184 )
  {
    if ( v183 )
    {
      v78 = *v183;
      if ( (unsigned __int64)v183[2] <= 0x17 )
      {
        v138 = (char *)qvector_reserve(v183, v78, 24, 1);
        *v183 = v138;
        v78 = v138;
      }
      v79 = v183;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7E80);
      v183[1] = (char *)&qword_18;
      *(__m128i *)v78 = si128;
      *(_QWORD *)(v78 + 15) = 0x2E6E657669672072LL;
      (*v79)[23] = 0;
    }
    return 0;
  }
  v9 = sub_3BDA80((__int64)a1, a3);
  v12 = *a1;
  v13 = v9;
  v190 = v9;
  v14 = v9 + 14;
  v15 = (unsigned int)(v13 + 7);
  if ( (int)v15 >= 0 )
    v14 = v15;
  v189 = v15;
  v185 = v14 >> 3;
  v16 = sub_631C90(v12, 3, 32, v15, v10, v11);
  v17 = *a1;
  v18 = (_BYTE *)(&dword_0 + 3);
  v192 = v16;
  v193 = sub_631C90(v17, 3, 64, v19, v20, v21);
  if ( !a5 )
    a5 = 16;
  v204 = nullptr;
  v206 = nullptr;
  s = v186;
  v208 = nullptr;
  v205 = 0;
  v207 = 0;
  v209 = 0;
  v210 = add_encoding((int)"UTF-8");
  v194 = 0;
  v191 = 0;
  LOBYTE(v187) = 0;
  v182.m128i_i64[0] = (__int64)&s;
  while ( 1 )
  {
    utf8_char = get_utf8_char(v182.m128i_i64[0]);
    if ( utf8_char == -1 )
    {
      v23 = s++;
      utf8_char = (unsigned __int8)*v23;
    }
    if ( !utf8_char )
      break;
    if ( utf8_char == 76 )
    {
      v43 = s;
      if ( *s == 34 )
      {
        v71 = sub_5A98C0(v182.m128i_i64[0], v18);
        v75 = *a1;
        if ( v71 )
        {
          v76 = "UTF-16LE";
          if ( sub_631C90(v75, 3, 32, v72, v73, v74) )
            v76 = "UTF-16BE";
        }
        else
        {
          v76 = "UTF-32LE";
          if ( sub_631C90(v75, 3, 32, v72, v73, v74) )
            v76 = "UTF-32BE";
        }
        v77 = add_encoding((int)v76);
        if ( v77 != default_encoding_idx )
        {
          if ( v183 )
            sub_35A790(v183);
          v194 = 1;
        }
        v33 = v209;
        default_encoding_idx = v77;
        v34 = s + 1;
        v35 = v209 + 1;
        ++s;
LABEL_33:
        v36 = strchr(v34, 34);
        v37 = v36;
        if ( !v36 )
          v36 = &v34[strlen(v34)];
        s = v36;
        v18 = (const char *)v208;
        if ( *((_QWORD *)&v209 + 1) < v35 )
        {
          v208 = (void *)qvector_reserve(&v208, v208, v35, 16);
          v33 = v209;
          v18 = (const char *)v208;
        }
        v38 = (char *)&v18[16 * v33];
        *(_OWORD *)v38 = 0;
        v39 = v205;
        *(_QWORD *)&v209 = v209 + 1;
        *(_QWORD *)v38 = v205;
        v40 = (char *)(s - v34);
        if ( s != v34 )
        {
          v41 = (unsigned __int64)&v40[v39];
          if ( __CFADD__(v39, v40) )
          {
            if ( v39 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( v39 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v205 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_42;
            }
            v41 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v50 = (char *)v204;
          if ( *((_QWORD *)&v205 + 1) < v41 )
          {
            v195 = v39;
            v187 = (char *)(s - v34);
            v182.m128i_i64[1] = v41;
            v204 = (void *)qvector_reserve(&v204, v204, v41, 1);
            v39 = v195;
            v50 = (char *)v204;
            v40 = v187;
            v41 = v182.m128i_u64[1];
          }
          v195 = v39;
          v187 = v40;
          v182.m128i_i64[1] = v41;
          memset(&v50[v205], 0, v41 - v205);
          v40 = v187;
          v39 = v195;
          *(_QWORD *)&v205 = v182.m128i_i64[1];
LABEL_42:
          v18 = v34;
          memcpy((char *)v204 + v39, v34, (size_t)v40);
        }
        v42 = v205;
        *((_QWORD *)v38 + 1) = v205;
        v24 = v207;
        LOBYTE(dest) = -1;
        if ( v42 >= (unsigned __int64)v207 )
        {
          if ( (unsigned __int64)v207 < v42 )
          {
            v18 = (const char *)v206;
            if ( &dest < v206 || &dest >= (void **)((char *)v206 + *((_QWORD *)&v207 + 1)) )
            {
              if ( *((_QWORD *)&v207 + 1) >= v42
                || (v51 = (void *)qvector_reserve(&v206, v206, v42, 1),
                    v24 = v207,
                    v206 = v51,
                    v18 = (const char *)v51,
                    (unsigned __int64)v207 < v42) )
              {
                while ( 1 )
                {
                  v18[v24++] = (char)dest;
                  if ( v42 == v24 )
                    break;
                  v18 = (const char *)v206;
                }
              }
            }
            else if ( *((_QWORD *)&v207 + 1) >= v42
                   || (v145 = (void *)qvector_reserve(&v206, v206, v42, 1),
                       v24 = v207,
                       v206 = v145,
                       v18 = (const char *)v145,
                       (unsigned __int64)v207 < v42) )
            {
              while ( 1 )
              {
                v18[v24++] = -1;
                if ( v42 == v24 )
                  break;
                v18 = (const char *)v206;
              }
            }
            goto LABEL_44;
          }
        }
        else
        {
LABEL_44:
          *(_QWORD *)&v207 = v42;
          v24 = v42;
        }
        if ( v37 )
          ++s;
        LOBYTE(v187) = 1;
        goto LABEL_15;
      }
      v44 = s - 1;
      if ( (unsigned int)(a5 - 1) > 0x19 )
      {
LABEL_143:
        if ( v183 )
        {
          v81 = *v183;
          if ( (unsigned __int64)v183[2] <= 0xF )
          {
            v125 = (char *)qvector_reserve(v183, v81, 16, 1);
            *v183 = v125;
            v81 = v125;
          }
          v82 = v183;
          v183[1] = (char *)&word_10;
          qmemcpy(v81, "Bad radix value", 15);
          (*v82)[15] = 0;
        }
        goto LABEL_121;
      }
LABEL_50:
      v45 = *(v43 - 1);
      v46 = *(v43 - 1);
      if ( v45 > 0x7F )
      {
        v47 = 0;
        goto LABEL_52;
      }
      while ( 1 )
      {
        v47 = isspace(v45);
        if ( !v47 )
          break;
        v45 = *++v44;
        v46 = v45;
        if ( v45 > 0x7F )
          goto LABEL_65;
      }
      if ( v46 == 45 )
      {
        v46 = v44[1];
        v49 = v44 + 1;
        v47 = 1;
        if ( v46 != 48 )
        {
          ++v44;
          if ( v46 )
            goto LABEL_63;
          v48 = 0;
          goto LABEL_92;
        }
      }
      else
      {
        if ( v46 == 43 )
        {
          v46 = v44[1];
          v49 = v44 + 1;
          if ( v46 == 48 )
            goto LABEL_60;
          ++v44;
          if ( !v46 )
          {
LABEL_246:
            v48 = 0;
            goto LABEL_93;
          }
LABEL_63:
          v45 = v46;
LABEL_52:
          LODWORD(v195) = v47;
          v48 = 0;
          v182.m128i_i64[1] = (unsigned int)a5;
          while ( 1 )
          {
            if ( v45 > 0x7F )
              goto LABEL_54;
            if ( isspace(v45) )
              break;
            v63 = v46 - 48;
            if ( (unsigned __int8)(v46 - 48) > 9u )
            {
              v63 = v46 - 87;
              if ( (unsigned __int8)(v46 - 97) > 0x19u )
              {
                if ( (unsigned __int8)(v46 - 65) > 0x19u )
                  goto LABEL_54;
                v63 = v46 - 55;
              }
            }
            if ( a5 <= v63 )
              goto LABEL_54;
            if ( !is_mul_ok(v48, v182.m128i_u64[1]) )
              goto LABEL_293;
            v64 = a5 * v48;
            v56 = __CFADD__(v63, v64);
            v48 = v63 + v64;
            if ( v56 )
              goto LABEL_293;
            v46 = *++v44;
            if ( !v46 )
              break;
            v45 = v46;
          }
          v47 = v195;
          if ( v48 < 0 && (v195 & 1) != 0 )
          {
LABEL_293:
            if ( v183 )
            {
              v175 = *v183;
              if ( (unsigned __int64)v183[2] <= 0x5F )
              {
                v181 = (char *)qvector_reserve(v183, v175, 96, 1);
                *v183 = v181;
                v175 = v181;
              }
              v176 = v183;
              v177 = _mm_load_si128((const __m128i *)&xmmword_23A7F00);
              v183[1] = (char *)&qword_60;
              *(__m128i *)v175 = v177;
              *((__m128i *)v175 + 1) = _mm_load_si128((const __m128i *)&xmmword_23A7F10);
              *((__m128i *)v175 + 2) = _mm_load_si128((const __m128i *)&xmmword_23A7F20);
              *((__m128i *)v175 + 3) = _mm_load_si128((const __m128i *)&xmmword_23A7F30);
              *((__m128i *)v175 + 4) = _mm_load_si128((const __m128i *)&xmmword_23A7F40);
              *(__m128i *)(v175 + 79) = _mm_load_si128((const __m128i *)&xmmword_23A7F50);
              (*v176)[95] = 0;
            }
            goto LABEL_121;
          }
LABEL_91:
          if ( v47 )
LABEL_92:
            v48 = -v48;
LABEL_93:
          s = v44;
LABEL_94:
          v52 = 0;
          v53 = v48;
          do
          {
            v53 >>= 8 * (unsigned __int8)v185;
            ++v52;
          }
          while ( v53 );
          v18 = (const char *)v52;
          v54 = sub_676100(v48, v52, v190, v193, v192);
          v55 = v185 * v52 - 1;
          if ( v55 >= 0 )
          {
            do
            {
              v57 = v205;
              v58 = v204;
              v59 = v54;
              LOBYTE(dest) = v54;
              v60 = v205 + 1;
              if ( &dest < v204 || &dest >= (void **)((char *)v204 + *((_QWORD *)&v205 + 1)) )
              {
                if ( *((_QWORD *)&v205 + 1) < v60 )
                {
                  v182.m128i_i64[1] = v54;
                  v204 = (void *)qvector_reserve(&v204, v204, v205 + 1, 1);
                  v58 = v204;
                  v54 = v182.m128i_u64[1];
                  v57 = v205;
                  v59 = (char)dest;
                }
              }
              else if ( *((_QWORD *)&v205 + 1) < v60 )
              {
                v195 = v54;
                v182.m128i_i8[8] = v54;
                v204 = (void *)qvector_reserve(&v204, v204, v205 + 1, 1);
                v58 = v204;
                v54 = v195;
                v57 = v205;
                v59 = v182.m128i_i8[8];
              }
              v58[v57] = v59;
              v89 = v207;
              v18 = (const char *)v206;
              LOBYTE(dest) = -1;
              *(_QWORD *)&v205 = v205 + 1;
              v61 = v207 + 1;
              if ( &dest < v206 || &dest >= (void **)((char *)v206 + *((_QWORD *)&v207 + 1)) )
              {
                if ( *((_QWORD *)&v207 + 1) < v61 )
                {
                  v182.m128i_i64[1] = v54;
                  v206 = (void *)qvector_reserve(&v206, v206, v207 + 1, 1);
                  v18 = (const char *)v206;
                  v54 = v182.m128i_u64[1];
                  v89 = v207;
                  v62 = (char)dest;
                }
                else
                {
                  v62 = -1;
                }
                v18[v89] = v62;
              }
              else
              {
                if ( *((_QWORD *)&v207 + 1) < v61 )
                {
                  v182.m128i_i64[1] = v54;
                  v206 = (void *)qvector_reserve(&v206, v206, v207 + 1, 1);
                  v18 = (const char *)v206;
                  v54 = v182.m128i_u64[1];
                  v89 = v207;
                }
                v18[v89] = -1;
              }
              v54 >>= 8;
              v24 = v207 + 1;
              *(_QWORD *)&v207 = v207 + 1;
              v56 = v55-- == 0;
            }
            while ( !v56 );
            goto LABEL_15;
          }
          goto LABEL_14;
        }
LABEL_65:
        v46 = *v44;
        if ( *v44 != 48 )
        {
          if ( !v46 )
            goto LABEL_246;
          v47 = 0;
          v45 = v46;
          goto LABEL_52;
        }
        v49 = v44;
        v47 = 0;
      }
LABEL_60:
      if ( (v49[1] & 0xDF) != 0x58 )
      {
        v44 = v49;
        v46 = 48;
        v45 = 48;
        goto LABEL_52;
      }
      if ( a5 != 16 )
      {
LABEL_54:
        if ( !(_BYTE)v187 )
          sub_378E50();
        if ( v183 )
        {
          v172 = *v183;
          if ( (unsigned __int64)v183[2] <= 0x45 )
          {
            v180 = (char *)qvector_reserve(v183, v172, 70, 1);
            *v183 = v180;
            v172 = v180;
          }
          v173 = v183;
          v174 = _mm_load_si128((const __m128i *)&xmmword_23A7EC0);
          v183[1] = (_BYTE *)(&dword_44 + 2);
          *(__m128i *)v172 = v174;
          *((__m128i *)v172 + 1) = _mm_load_si128((const __m128i *)&xmmword_23A7ED0);
          *((__m128i *)v172 + 2) = _mm_load_si128((const __m128i *)&xmmword_23A7EE0);
          *((__m128i *)v172 + 3) = _mm_load_si128((const __m128i *)&xmmword_23A7EF0);
          *(_QWORD *)(v172 + 61) = 0x2E65736162207265LL;
          (*v173)[69] = 0;
        }
        goto LABEL_121;
      }
      v46 = v49[2];
      v44 = v49 + 2;
      if ( v46 )
        goto LABEL_63;
      v48 = 0;
      goto LABEL_91;
    }
    if ( utf8_char != 9 )
    {
      switch ( utf8_char )
      {
        case ' ':
        case ',':
          goto LABEL_14;
        case '"':
          v33 = v209;
          v34 = s;
          v35 = v209 + 1;
          goto LABEL_33;
        case '\'':
          v48 = 0;
          v83 = 0;
          v182.m128i_i64[1] = (__int64)&v204;
          break;
        case '?':
          if ( v189 <= 7 )
          {
            v24 = v207;
          }
          else
          {
            v25 = 0;
            do
            {
              v26 = v205;
              v27 = v204;
              LOBYTE(dest) = -1;
              v28 = v205 + 1;
              if ( &dest >= v204 && &dest < (void **)((char *)v204 + *((_QWORD *)&v205 + 1)) )
              {
                if ( *((_QWORD *)&v205 + 1) < v28 )
                {
                  v204 = (void *)qvector_reserve(&v204, v204, v205 + 1, 1);
                  v27 = v204;
                  v26 = v205;
                }
                v27[v26] = -1;
              }
              else
              {
                if ( *((_QWORD *)&v205 + 1) < v28 )
                {
                  v204 = (void *)qvector_reserve(&v204, v204, v205 + 1, 1);
                  v27 = v204;
                  v29 = (char)dest;
                  v26 = v205;
                }
                else
                {
                  v29 = -1;
                }
                v27[v26] = v29;
              }
              v30 = v207;
              v18 = (const char *)v206;
              LOBYTE(dest) = 0;
              *(_QWORD *)&v205 = v205 + 1;
              v31 = v207 + 1;
              if ( &dest >= v206 && &dest < (void **)((char *)v206 + *((_QWORD *)&v207 + 1)) )
              {
                if ( *((_QWORD *)&v207 + 1) < v31 )
                {
                  v206 = (void *)qvector_reserve(&v206, v206, v207 + 1, 1);
                  v18 = (const char *)v206;
                  v30 = v207;
                }
                v18[v30] = 0;
              }
              else
              {
                if ( *((_QWORD *)&v207 + 1) < v31 )
                {
                  v206 = (void *)qvector_reserve(&v206, v206, v207 + 1, 1);
                  v18 = (const char *)v206;
                  v32 = (char)dest;
                  v30 = v207;
                }
                else
                {
                  v32 = 0;
                }
                v18[v30] = v32;
              }
              ++v25;
              v24 = v207 + 1;
              *(_QWORD *)&v207 = v207 + 1;
            }
            while ( v185 > v25 );
          }
          v191 = 1;
          if ( *s == 63 )
            ++s;
          goto LABEL_15;
        default:
          v43 = s;
          v44 = s - 1;
          if ( (unsigned int)(a5 - 1) > 0x19 )
            goto LABEL_143;
          goto LABEL_50;
      }
      while ( 1 )
      {
        v87 = get_utf8_char(v182.m128i_i64[0]);
        if ( v87 == -1 )
        {
          v88 = s++;
          v87 = *v88;
        }
        if ( !v87 )
          goto LABEL_179;
        if ( v87 == 39 )
          goto LABEL_94;
        if ( v83 == 64 )
          break;
        if ( sub_631C90(*a1, 3, 32, v84, v85, v86) )
          v48 |= (unsigned __int64)v87 << v83;
        else
          v48 = v87 | (unsigned __int64)(v48 << 8);
        v83 += 8;
      }
      if ( v183 )
      {
        v65 = *v183;
        if ( (unsigned __int64)v183[2] <= 0x34 )
        {
          v124 = (char *)qvector_reserve(v183, v65, 53, 1);
          *v183 = v124;
          v65 = v124;
        }
        v66 = v183;
        v67 = _mm_load_si128((const __m128i *)&xmmword_23A7E90);
        v183[1] = (_BYTE *)(&word_34 + 1);
        *(__m128i *)v65 = v67;
        v68 = _mm_load_si128((const __m128i *)&xmmword_23A7EA0);
        *((_DWORD *)v65 + 12) = 779384176;
        *((__m128i *)v65 + 1) = v68;
        *((__m128i *)v65 + 2) = _mm_load_si128((const __m128i *)&xmmword_23A7EB0);
        (*v66)[52] = 0;
      }
LABEL_121:
      v69 = 0;
      goto LABEL_122;
    }
LABEL_14:
    v24 = v207;
LABEL_15:
    if ( (_QWORD)v205 != v24 )
    {
      if ( !under_debugger )
        interr(1499);
      goto LABEL_309;
    }
  }
LABEL_179:
  if ( !v191 && v206 )
  {
    *(_QWORD *)&v207 = 0;
    qfree(v206);
    v206 = nullptr;
    *((_QWORD *)&v207 + 1) = 0;
  }
  if ( !(_QWORD)v205 )
    goto LABEL_121;
  if ( !(_BYTE)v187 )
  {
    sub_67A740(v184, (__int64)&v204);
    goto LABEL_218;
  }
  if ( !default_encoding_idx )
    default_encoding_idx = get_default_encoding_idx(1);
  v199 = nullptr;
  v200 = 0;
  if ( default_encoding_idx == -1 )
  {
    encoding_qty = get_encoding_qty(0.0);
    v154 = 1;
    if ( encoding_qty > 1 )
    {
      do
      {
        v203 = v154;
        dest = nullptr;
        v202 = 0;
        encoding_name = (const char *)get_encoding_name(v154);
        v161 = encoding_name;
        if ( encoding_name && (v162 = strlen(encoding_name), (v163 = v162) != 0) )
        {
          v167 = dest;
          v168 = v162 + 1;
          if ( v202.m128i_i64[1] < v162 + 1 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v162 + 1, 1);
            v167 = dest;
          }
          v202.m128i_i64[0] = v168;
          memmove(v167, v161, v163);
          *((_BYTE *)dest + v163) = 0;
        }
        else
        {
          v202.m128i_i64[0] = 0;
        }
        v171 = v200;
        v170 = (char *)v199;
        v164 = v200 + 1;
        if ( &dest < v199 || &dest >= (void **)((char *)v199 + 32 * *((_QWORD *)&v200 + 1)) )
        {
          if ( *((_QWORD *)&v200 + 1) < v164 )
          {
            v199 = (void *)qvector_reserve(&v199, v199, v200 + 1, 32);
            v170 = (char *)v199;
            v171 = v200;
          }
          v165 = &v170[32 * v171];
          v166 = dest;
          *(__m128i *)(v165 + 8) = _mm_loadu_si128(&v202);
          *(_QWORD *)v165 = v166;
          *(_QWORD *)&v200 = v200 + 1;
          *((_DWORD *)v165 + 6) = v203;
        }
        else
        {
          v155 = dest;
          v156 = _mm_loadl_epi64(&v202);
          dest = nullptr;
          v157 = _mm_loadl_epi64((const __m128i *)&v202.m128i_u64[1]);
          v158 = v203;
          v202 = 0;
          if ( *((_QWORD *)&v200 + 1) < v164 )
          {
            v182.m128i_i64[1] = v157.m128i_i64[0];
            v182.m128i_i64[0] = v156.m128i_i64[0];
            v199 = (void *)qvector_reserve(&v199, v199, v200 + 1, 32);
            v170 = (char *)v199;
            v157 = _mm_loadl_epi64((const __m128i *)&v182.m128i_u64[1]);
            v171 = v200;
            v156 = _mm_loadl_epi64(&v182);
          }
          v159 = &v170[32 * v171];
          *(_QWORD *)v159 = v155;
          *(__m128i *)(v159 + 8) = _mm_unpacklo_epi64(v156, v157);
          *((_DWORD *)v159 + 6) = v158;
          *(_QWORD *)&v200 = v200 + 1;
          if ( dest )
          {
            v202.m128i_i64[0] = 0;
            qfree(dest);
          }
        }
        ++v154;
      }
      while ( encoding_qty != v154 );
    }
LABEL_194:
    v104 = v200;
  }
  else
  {
    v202 = 0;
    dest = nullptr;
    v203 = default_encoding_idx;
    v92 = (const char *)get_encoding_name(default_encoding_idx);
    v93 = v92;
    if ( v92 && (v94 = strlen(v92), (v95 = v94) != 0) )
    {
      v178 = dest;
      v179 = v94 + 1;
      if ( v202.m128i_i64[1] < v94 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v94 + 1, 1);
        v178 = dest;
      }
      v202.m128i_i64[0] = v179;
      memmove(v178, v93, v95);
      *((_BYTE *)dest + v95) = 0;
    }
    else
    {
      v202.m128i_i64[0] = 0;
    }
    v96 = v200;
    v97 = (char *)v199;
    v98 = v200 + 1;
    if ( &dest < v199 || &dest >= (void **)((char *)v199 + 32 * *((_QWORD *)&v200 + 1)) )
    {
      if ( *((_QWORD *)&v200 + 1) < v98 )
      {
        v199 = (void *)qvector_reserve(&v199, v199, v200 + 1, 32);
        v97 = (char *)v199;
        v96 = v200;
      }
      v151 = &v97[32 * v96];
      v152 = dest;
      *(__m128i *)(v151 + 8) = _mm_loadu_si128(&v202);
      *(_QWORD *)v151 = v152;
      *((_DWORD *)v151 + 6) = v203;
      v104 = v200 + 1;
      *(_QWORD *)&v200 = v200 + 1;
    }
    else
    {
      v99 = dest;
      v100 = _mm_loadl_epi64(&v202);
      dest = nullptr;
      v101 = v202.m128i_i64[1];
      v102 = v203;
      v202 = 0;
      if ( *((_QWORD *)&v200 + 1) < v98 )
      {
        v182.m128i_i64[0] = v100.m128i_i64[0];
        v199 = (void *)qvector_reserve(&v199, v199, v200 + 1, 32);
        v97 = (char *)v199;
        v100 = _mm_loadl_epi64(&v182);
        v96 = v200;
      }
      v103 = &v97[32 * v96];
      *(_QWORD *)v103 = v99;
      *(__m128i *)(v103 + 8) = _mm_unpacklo_epi64(v100, (__m128i)(unsigned __int64)v101);
      *((_DWORD *)v103 + 6) = v102;
      v104 = v200 + 1;
      *(_QWORD *)&v200 = v200 + 1;
      if ( dest )
      {
        v202.m128i_i64[0] = 0;
        qfree(dest);
        goto LABEL_194;
      }
    }
  }
  if ( !v104 )
  {
    v139 = (char *)v199;
    if ( v199 )
      goto LABEL_253;
    goto LABEL_218;
  }
  v182.m128i_i64[1] = 0;
  LOBYTE(v185) = v183 != nullptr;
  while ( 2 )
  {
    v106 = haystack;
    v107 = 32 * v182.m128i_i64[1];
    v108 = (char *)v199 + 32 * v182.m128i_i64[1];
    if ( *((_QWORD *)v108 + 1) )
      v106 = *(const char **)v108;
    if ( *(_DWORD *)((char *)v199 + v107 + 24) != (unsigned int)add_encoding((int)v106) )
    {
      if ( !under_debugger )
        interr(2355);
LABEL_309:
      BUG();
    }
    if ( sub_5AA100((__int64)v106) )
    {
      sub_67A740(v184, (__int64)&v204);
      goto LABEL_198;
    }
    v109 = v184[1];
    v110 = *v184;
    if ( v184[2] < (unsigned __int64)(v109 + 1) )
    {
      v136 = v184;
      v137 = qvector_reserve(v184, v110, v109 + 1, 80);
      *v136 = v137;
      v109 = v136[1];
      v110 = v137;
    }
    v111 = v184;
    v112 = v110 + 80 * v109;
    *(_QWORD *)v112 = 0;
    *(_QWORD *)(v112 + 24) = 0;
    *(_QWORD *)(v112 + 48) = 0;
    *(_DWORD *)(v112 + 72) = -1;
    *(_OWORD *)(v112 + 8) = 0;
    *(_OWORD *)(v112 + 32) = 0;
    *(_OWORD *)(v112 + 56) = 0;
    v113 = v209;
    ++v111[1];
    *(_DWORD *)(v112 + 72) = *(_DWORD *)((char *)v199 + v107 + 24);
    if ( !v113 )
      goto LABEL_239;
    v113 = 0;
    v114 = 0;
    while ( 2 )
    {
      v118 = (unsigned __int64 *)((char *)v208 + 16 * v114);
      sub_675FC0((__int64 *)v112, &v204, v113, *v118);
      v202 = 0;
      dest = nullptr;
      v119 = v118[1];
      v198 = (char *)v204 + *v118;
      v182.m128i_i64[0] = v119 - *v118;
      v120 = convert_encoding(&dest, "UTF-8", v106, v198, v182.m128i_i64[0], 0);
      if ( v120 == v182.m128i_i64[0] )
      {
        v121 = *(_QWORD *)(v112 + 56);
        v122 = *(_QWORD *)(v112 + 48);
        if ( *(_QWORD *)(v112 + 64) < (unsigned __int64)(v121 + 1) )
        {
          v123 = qvector_reserve(v112 + 48, v122, v121 + 1, 16);
          *(_QWORD *)(v112 + 48) = v123;
          v122 = v123;
          v121 = *(_QWORD *)(v112 + 56);
        }
        v115 = 16 * v121 + v122;
        *(_OWORD *)v115 = 0;
        v116 = *(_QWORD *)(v112 + 8);
        ++*(_QWORD *)(v112 + 56);
        *(_QWORD *)v115 = v116;
        *(_QWORD *)(v115 + 8) = v202.m128i_i64[0] + v116;
        if ( v202.m128i_i64[0] )
          sub_675F00((__int64 *)v112, dest, v202.m128i_u64[0]);
        if ( (_QWORD)v207 )
        {
          v126 = *(_QWORD *)(v112 + 8);
          v127 = *(_QWORD *)(v112 + 32);
          v196 = -1;
          if ( v126 >= v127 )
          {
            if ( v127 >= v126 )
              goto LABEL_210;
            v128 = *(_QWORD *)(v112 + 24);
            v129 = *(_QWORD *)(v112 + 40);
            v130 = v112 + 24;
            if ( (unsigned __int64)&v196 < v128 || (unsigned __int64)&v196 >= v128 + v129 )
            {
              if ( v129 >= v126
                || (v144 = qvector_reserve(v130, v128, v126, 1),
                    v127 = *(_QWORD *)(v112 + 32),
                    *(_QWORD *)(v112 + 24) = v144,
                    v128 = v144,
                    v127 < v126) )
              {
                while ( 1 )
                {
                  *(_BYTE *)(v128 + v127++) = v196;
                  if ( v126 == v127 )
                    break;
                  v128 = *(_QWORD *)(v112 + 24);
                }
              }
            }
            else if ( v129 >= v126
                   || (v169 = qvector_reserve(v130, v128, v126, 1),
                       v127 = *(_QWORD *)(v112 + 32),
                       *(_QWORD *)(v112 + 24) = v169,
                       v128 = v169,
                       v127 < v126) )
            {
              while ( 1 )
              {
                *(_BYTE *)(v128 + v127++) = -1;
                if ( v126 == v127 )
                  break;
                v128 = *(_QWORD *)(v112 + 24);
              }
            }
          }
          *(_QWORD *)(v112 + 32) = v126;
        }
LABEL_210:
        v113 = v118[1];
        if ( dest )
        {
          v202.m128i_i64[0] = 0;
          qfree(dest);
        }
        v117 = v209;
        if ( ++v114 >= (unsigned __int64)v209 )
          goto LABEL_238;
        continue;
      }
      break;
    }
    if ( v120 >= 0 && (_BYTE)v185 )
    {
      v198 += v120;
      v182.m128i_i64[0] = (__int64)v198;
      v131 = get_utf8_char(&v198);
      v132 = v198;
      v133 = v182.m128i_i64[0];
      if ( v131 == -1 )
        v132 = ++v198;
      v182.m128i_i64[0] = (__int64)&v132[-v182.m128i_i64[0]];
      __memcpy_chk(v211, v133, v182.m128i_i64[0], 8);
      v134 = v183;
      v211[v182.m128i_i64[0]] = 0;
      sub_35A790(v134);
    }
    v135 = v184[1];
    if ( v135 )
    {
      v146 = v135 - 1;
      v147 = *v184 + 80 * v146;
      v184[1] = v146;
      v148 = *(void **)(v147 + 48);
      if ( v148 )
      {
        *(_QWORD *)(v147 + 56) = 0;
        qfree(v148);
      }
      v149 = *(void **)(v147 + 24);
      if ( v149 )
      {
        *(_QWORD *)(v147 + 32) = 0;
        qfree(v149);
      }
      v150 = *(void **)v147;
      if ( *(_QWORD *)v147 )
      {
        *(_QWORD *)(v147 + 8) = 0;
        qfree(v150);
      }
    }
    if ( dest )
    {
      v202.m128i_i64[0] = 0;
      qfree(dest);
    }
    v117 = v209;
    v194 = (unsigned __int8)v187;
LABEL_238:
    if ( v114 == v117 )
LABEL_239:
      sub_675FC0((__int64 *)v112, &v204, v113, v205);
LABEL_198:
    ++v182.m128i_i64[1];
    v105 = v200;
    if ( v182.m128i_i64[1] < (unsigned __int64)v200 )
      continue;
    break;
  }
  v139 = (char *)v199;
  if ( v199 )
  {
    if ( (_QWORD)v200 )
    {
      v140 = 0;
      do
      {
        v141 = &v139[32 * v140];
        v142 = *(void **)v141;
        if ( *(_QWORD *)v141 )
        {
          *((_QWORD *)v141 + 1) = 0;
          qfree(v142);
          v139 = (char *)v199;
        }
        ++v140;
      }
      while ( v105 != v140 );
    }
LABEL_253:
    *(_QWORD *)&v200 = 0;
    qfree(v139);
  }
LABEL_218:
  v69 = v194 ^ 1;
LABEL_122:
  if ( v208 )
  {
    *(_QWORD *)&v209 = 0;
    qfree(v208);
  }
  if ( v206 )
  {
    *(_QWORD *)&v207 = 0;
    qfree(v206);
  }
  if ( v204 )
  {
    *(_QWORD *)&v205 = 0;
    qfree(v204);
  }
  return v69;
}
