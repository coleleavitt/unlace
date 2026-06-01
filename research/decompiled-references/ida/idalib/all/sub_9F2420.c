_QWORD *__fastcall sub_9F2420(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rbx
  unsigned __int64 v12; // r12
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbp
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 *v18; // rbp
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 *v22; // rdi
  __int64 v23; // rdx
  void *v25; // r12
  void **v26; // rbp
  void **v27; // rbx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  bool v33; // zf
  unsigned __int64 v34; // rax
  size_t v35; // rax
  __int64 (__fastcall *v36)(__int64); // rax
  __int64 v37; // rdi
  __int64 v38; // rbp
  unsigned int v39; // eax
  char v40; // bp
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  _QWORD *v47; // rdi
  int v48; // edx
  __int32 v49; // edx
  unsigned __int64 v50; // rax
  void (__fastcall *v51)(void **, __int64, _QWORD, const char *, size_t); // rbp
  size_t v52; // rbx
  unsigned int v53; // eax
  size_t v54; // rax
  _BYTE *v55; // r12
  void *v56; // rbp
  int v57; // eax
  size_t v58; // rax
  size_t v59; // rax
  _QWORD *v60; // rbp
  __int64 v61; // rbp
  unsigned int v62; // eax
  void *v63; // rdx
  __m128i *v64; // rsi
  unsigned __int64 v65; // r15
  double v66; // xmm0_8
  int v67; // eax
  __int64 v68; // rax
  unsigned __int64 v69; // rbx
  __int64 v70; // rbp
  _BYTE *v71; // rsi
  __int64 v72; // rdx
  void *v73; // rdx
  __m128i *v74; // rsi
  __int64 *v75; // rdi
  size_t v76; // rax
  __int64 v77; // rbx
  unsigned int v78; // ebp
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  void (__fastcall *v81)(void **, __int64, _QWORD, const char *, void *); // r12
  unsigned int v82; // eax
  size_t v83; // rax
  __int64 v84; // r12
  void *v85; // rdx
  __m128i *v86; // rsi
  __int64 v87; // r12
  size_t v88; // rax
  __int64 v89; // rax
  unsigned __int64 v90; // rax
  _QWORD *v91; // rdx
  void *v92; // rax
  _QWORD *v93; // rax
  char v94; // cl
  unsigned int v95; // eax
  unsigned int v96; // edx
  unsigned int v97; // ebp
  void *v98; // rcx
  __int64 v99; // rax
  unsigned int v100; // eax
  __int64 v101; // rax
  size_t v102; // rax
  void *v103; // rdx
  __m128i *v104; // rsi
  __int64 v105; // rax
  unsigned __int64 v106; // r12
  int v107; // eax
  __int64 v108; // r9
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  __int64 *v111; // rax
  __int64 v112; // rdx
  void *v113; // rdx
  __m128i *v114; // rsi
  size_t v115; // rax
  void *v116; // rax
  __int64 v117; // rax
  __int64 *v118; // rdx
  unsigned __int64 v119; // rcx
  __int64 *v120; // rax
  __int64 *v121; // rax
  __int64 v122; // rcx
  size_t v123; // rax
  __int64 v124; // rax
  unsigned int *v125; // rax
  __int64 v126; // rdx
  _BYTE *v127; // rax
  void *v128; // rdx
  __m128i *v129; // rsi
  size_t v130; // rax
  size_t v131; // rax
  __int64 v132; // rax
  size_t v133; // rax
  size_t v134; // rax
  _QWORD *v135; // rax
  __int64 v136; // rbx
  __int64 v137; // rcx
  unsigned __int64 v138; // rdx
  unsigned __int64 v139; // rax
  unsigned __int64 v140; // rdx
  __int64 v141; // [rsp+8h] [rbp-410h]
  __int64 v142; // [rsp+10h] [rbp-408h]
  void *srcb; // [rsp+18h] [rbp-400h]
  void *src; // [rsp+18h] [rbp-400h]
  unsigned __int64 srca; // [rsp+18h] [rbp-400h]
  unsigned int v146; // [rsp+20h] [rbp-3F8h]
  __int64 v147; // [rsp+20h] [rbp-3F8h]
  int v148; // [rsp+20h] [rbp-3F8h]
  int v149; // [rsp+28h] [rbp-3F0h]
  __int64 v150; // [rsp+28h] [rbp-3F0h]
  __int64 v151; // [rsp+28h] [rbp-3F0h]
  char v153; // [rsp+38h] [rbp-3E0h]
  char *v154; // [rsp+40h] [rbp-3D8h]
  int v155; // [rsp+40h] [rbp-3D8h]
  char v156; // [rsp+50h] [rbp-3C8h]
  _QWORD *v157; // [rsp+58h] [rbp-3C0h] BYREF
  unsigned __int64 v158; // [rsp+60h] [rbp-3B8h]
  __int64 v159; // [rsp+68h] [rbp-3B0h]
  __m128i *v160; // [rsp+70h] [rbp-3A8h]
  size_t v161; // [rsp+78h] [rbp-3A0h]
  void *v162[2]; // [rsp+80h] [rbp-398h]
  _BYTE *v163[2]; // [rsp+A0h] [rbp-378h] BYREF
  char v164; // [rsp+B0h] [rbp-368h]
  void *v165; // [rsp+C0h] [rbp-358h] BYREF
  void *v166; // [rsp+C8h] [rbp-350h]
  __m128i v167; // [rsp+D0h] [rbp-348h] BYREF
  char *v168; // [rsp+E0h] [rbp-338h]
  char *v169; // [rsp+100h] [rbp-318h]
  void *v170[2]; // [rsp+110h] [rbp-308h] BYREF
  __m128i v171; // [rsp+120h] [rbp-2F8h] BYREF
  char v172; // [rsp+130h] [rbp-2E8h]
  __m128i v173; // [rsp+140h] [rbp-2D8h] BYREF
  _QWORD v174[32]; // [rsp+150h] [rbp-2C8h] BYREF
  __m128i v175; // [rsp+250h] [rbp-1C8h] BYREF
  __int64 v176; // [rsp+260h] [rbp-1B8h] BYREF
  void *v177; // [rsp+268h] [rbp-1B0h] BYREF
  char v178; // [rsp+270h] [rbp-1A8h]
  _BYTE v179[416]; // [rsp+278h] [rbp-1A0h] BYREF

  v7 = a3[2];
  v159 = a5;
  v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v7 & 4) != 0 )
    v8 = (_QWORD *)*v8;
  v9 = sub_B94670(v8, a3[5]);
  if ( !v9 || (v9 & 4) != 0 )
  {
    *((_BYTE *)a1 + 272) = 0;
    return a1;
  }
  v142 = *(_QWORD *)(a4 + 2312);
  v141 = *(_QWORD *)(a4 + 2320);
  sub_B76070(a3);
  v11 = v10;
  v146 = v10;
  *(_OWORD *)v162 = 0;
  if ( !v10 )
  {
    memset(a1, 0, 0x118u);
    goto LABEL_33;
  }
  v12 = 4LL * v10;
  v13 = (_QWORD *)operator new(v12 * 8);
  v14 = v11;
  v162[0] = v13;
  v15 = v13;
  do
  {
    v16 = v13 + 2;
    v13[1] = 0;
    v13 += 4;
    *(v13 - 4) = v16;
    *((_BYTE *)v13 - 16) = 0;
    --v14;
  }
  while ( v14 );
  v162[1] = &v15[v12];
  v17 = 8 * ((unsigned __int64)(v11 + 63) >> 6);
  v154 = (char *)operator new(v17);
  v169 = &v154[v17];
  v168 = v154;
  memset(v154, 0, v17);
  if ( !v146 )
    goto LABEL_210;
  v18 = v15 + 2;
  v19 = 0;
  v153 = 0;
  do
  {
    v21 = *(_QWORD *)(a3[15] + 8 * v19);
    if ( !(unsigned int)sub_9EF070(a2, v21) )
      goto LABEL_18;
    if ( (unsigned int)sub_9EF070(a2, v21) != 1
      || (*(_OWORD *)v170 = 0, sub_9B4ED0(&v175, v21, v142, v141, (__int64)v170), (v153 = v178) == 0) )
    {
      *((_BYTE *)a1 + 272) = 0;
      goto LABEL_42;
    }
    sub_9EFC70(&v173, v175.m128i_i64[0], v175.m128i_i64[1], (__int64)v170[0], (__int64)v170[1]);
    v22 = (__int64 *)*(v18 - 2);
    if ( (_QWORD *)v173.m128i_i64[0] == v174 )
    {
      v23 = v173.m128i_i64[1];
      if ( v173.m128i_i64[1] )
      {
        if ( v173.m128i_i64[1] == 1 )
          *(_BYTE *)v22 = v174[0];
        else
          memcpy(v22, v174, v173.m128i_u64[1]);
        v23 = v173.m128i_i64[1];
        v22 = (__int64 *)*(v18 - 2);
      }
      *(v18 - 1) = v23;
      *((_BYTE *)v22 + v23) = 0;
      v22 = (__int64 *)v173.m128i_i64[0];
      goto LABEL_13;
    }
    if ( v22 == v18 )
    {
      v157 = (_QWORD *)v174[0];
      *(v18 - 2) = v173.m128i_i64[0];
      *(__m128 *)(v18 - 1) = _mm_loadh_ps((const double *)&v157);
LABEL_31:
      v173.m128i_i64[0] = (__int64)v174;
      v22 = v174;
      goto LABEL_13;
    }
    v157 = (_QWORD *)v174[0];
    v20 = *v18;
    *(v18 - 2) = v173.m128i_i64[0];
    *(__m128 *)(v18 - 1) = _mm_loadh_ps((const double *)&v157);
    if ( !v22 )
      goto LABEL_31;
    v173.m128i_i64[0] = (__int64)v22;
    v174[0] = v20;
LABEL_13:
    v173.m128i_i64[1] = 0;
    *(_BYTE *)v22 = 0;
    if ( (_QWORD *)v173.m128i_i64[0] != v174 )
      operator delete((void *)v173.m128i_i64[0]);
    *(_QWORD *)&v154[8 * (v19 >> 6)] |= 1LL << v19;
    if ( v178 && (__int64 *)v175.m128i_i64[0] != &v176 )
      operator delete((void *)v175.m128i_i64[0]);
LABEL_18:
    ++v19;
    v18 += 4;
  }
  while ( v146 > (unsigned int)v19 );
  if ( !v153 )
  {
LABEL_210:
    memset(a1, 0, 0x118u);
    goto LABEL_42;
  }
  v156 = 0;
  v28 = (unsigned __int64)a3;
  v173.m128i_i64[0] = (__int64)v174;
  v173.m128i_i64[1] = 0x400000000LL;
  v157 = a3;
  do
  {
    v29 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v28 + 16LL))(v28);
    v30 = sub_13DC060(HIDWORD(v29), 0, v142, v141);
    if ( !v30 )
    {
LABEL_46:
      memset(a1, 0, 0x118u);
      goto LABEL_47;
    }
    v32 = v30 | v158 & 0xFFFFFFFF00000000LL;
    v33 = (*(_BYTE *)(v28 + 82) & 0x40) == 0;
    v34 = *(_QWORD *)(v28 + 80);
    v155 = v32;
    v158 = v32;
    if ( (v33 || (v34 & 0x2000000) != 0)
      && (v34 & 0x2000000) == 0
      && ((*(_BYTE *)(v28 + 83) & 8) != 0 || (*(_BYTE *)(v28 + 128) & 1) == 0 && !*(_QWORD *)(v28 + 128))
      && (*(_BYTE *)(v28 + 83) & 0x40) == 0 )
    {
      v50 = HIDWORD(v34);
      if ( (v50 & 0x20) == 0
        && (v50 & 0x40) == 0
        && !(unsigned __int8)sub_B8CF80(v28, 0, *(_BYTE *)(v28 + 83) & 0x40, v31) )
      {
        if ( (*(_BYTE *)(v28 + 29) & 1) != 0 )
        {
          v117 = sub_B8C3D0(v28);
          v118 = *(__int64 **)v117;
          v119 = *(_QWORD *)v117 + 8LL * *(unsigned int *)(v117 + 8);
          if ( *(_QWORD *)v117 >= v119 )
          {
            if ( v118 != (__int64 *)v119 )
            {
              if ( *(_WORD *)(*(_QWORD *)v119 + 36LL) == 388 )
                goto LABEL_96;
              v121 = (__int64 *)(v119 + 8);
              while ( v118 != v121 )
              {
                v122 = *v121++;
                if ( *(_WORD *)(v122 + 36) == 388 )
                  goto LABEL_96;
              }
            }
          }
          else
          {
            v120 = *(__int64 **)v117;
            while ( *(_WORD *)(*v120 + 36) != 388 )
            {
              if ( (__int64 *)v119 == ++v120 )
                goto LABEL_90;
            }
            if ( (__int64 *)v119 != v120 )
            {
LABEL_96:
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&v175, 24);
              v58 = j__strlen(";");
              std::__ostream_insert<char,std::char_traits<char>>(&v176, ";", v58);
              v59 = j__strlen("\n");
              v170[0] = &v171;
              sub_9EB4F0(v170, "\n", (__int64)&aSubcommands[v59 + 13]);
              std::__ostream_insert<char,std::char_traits<char>>(&v176, v170[0], v170[1]);
              if ( v170[0] != &v171 )
                operator delete(v170[0]);
              v60 = *(_QWORD **)(v28 + 120);
              sub_B76070(v28);
              v61 = (unsigned int)sub_B73090(*v60);
              v62 = sub_B73090(v28);
              sub_9B4C60((__int64)&v165, (v61 << 32) | v62, v142, v141);
              if ( !v167.m128i_i8[0] )
                goto LABEL_60;
              if ( v165 )
              {
                v170[0] = &v171;
                sub_9EB4F0(v170, v165, (__int64)v166 + (_QWORD)v165);
                v63 = v170[1];
                v64 = (__m128i *)v170[0];
              }
              else
              {
                v64 = &v171;
                v171.m128i_i8[0] = 0;
                v63 = nullptr;
                v170[0] = &v171;
                v170[1] = nullptr;
              }
              std::__ostream_insert<char,std::char_traits<char>>(&v176, v64, v63);
              if ( v170[0] != &v171 )
                operator delete(v170[0]);
              v65 = 0;
              v66 = sub_B76070(v28);
              v149 = v67 - 1;
              v147 = (unsigned int)(v67 - 1);
              if ( v67 )
              {
                while ( 1 )
                {
                  v77 = *(_QWORD *)(*(_QWORD *)(v28 + 120) + 8 * v65);
                  if ( (*(_BYTE *)(v77 + 29) & 2) != 0 )
                    goto LABEL_114;
                  if ( ((1LL << v65) & *(_QWORD *)&v168[8 * (v65 >> 6)]) == 0 )
                    break;
                  std::__ostream_insert<char,std::char_traits<char>>(
                    &v176,
                    *((_QWORD *)v162[0] + 4 * v65),
                    *((_QWORD *)v162[0] + 4 * v65 + 1));
                  v68 = *(_QWORD *)(v77 + 40);
                  if ( (v68 & 7) == 0 )
                  {
                    v69 = v68 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v68 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                    {
                      LOBYTE(v170[0]) = 32;
                      v70 = std::__ostream_insert<char,std::char_traits<char>>(&v176, v170, 1);
                      v71 = (_BYTE *)(*(_QWORD *)(v69 + 16) + 16LL);
                      if ( *(_QWORD *)(v69 + 16) == -16 )
                      {
                        v74 = &v171;
                        v171.m128i_i8[0] = 0;
                        v73 = nullptr;
                        v170[0] = &v171;
                        v170[1] = nullptr;
                      }
                      else
                      {
                        v72 = **(_QWORD **)(v69 + 16);
                        v170[0] = &v171;
                        sub_9EB4F0(v170, v71, (__int64)&v71[(unsigned int)v72]);
                        v73 = v170[1];
                        v74 = (__m128i *)v170[0];
                      }
                      v75 = (__int64 *)v70;
LABEL_110:
                      std::__ostream_insert<char,std::char_traits<char>>(v75, v74, v73);
                      if ( v170[0] != &v171 )
                        operator delete(v170[0]);
                    }
                  }
                  if ( v149 != (_DWORD)v65 )
                  {
                    v76 = j__strlen(", ");
                    std::__ostream_insert<char,std::char_traits<char>>(&v176, ", ", v76);
                  }
LABEL_114:
                  if ( v147 == v65 )
                    goto LABEL_166;
                  ++v65;
                }
                v78 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v77 + 16LL))(v77, v66);
                v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
                v80 = sub_13DC060(HIDWORD(v79), 0, v142, v141);
                sub_9B4C60((__int64)&v165, (v80 << 32) | v78, v142, v141);
                if ( !v167.m128i_i8[0] )
                  goto LABEL_60;
                if ( v165 )
                {
                  v170[0] = &v171;
                  sub_9EB4F0(v170, v165, (__int64)v166 + (_QWORD)v165);
                  v73 = v170[1];
                  v74 = (__m128i *)v170[0];
                }
                else
                {
                  v74 = &v171;
                  v171.m128i_i8[0] = 0;
                  v73 = nullptr;
                  v170[0] = &v171;
                  v170[1] = nullptr;
                }
                v75 = &v176;
                goto LABEL_110;
              }
LABEL_166:
              v115 = j__strlen(")");
              std::__ostream_insert<char,std::char_traits<char>>(&v176, ")", v115);
              std::stringbuf::str(&v165, &v177);
              v170[0] = &v171;
              v116 = v165;
              if ( v165 == &v167 )
                goto LABEL_198;
              goto LABEL_167;
            }
          }
        }
LABEL_90:
        v51 = *(void (__fastcall **)(void **, __int64, _QWORD, const char *, size_t))(*(_QWORD *)v159 + 72LL);
        v52 = j__strlen(" ");
        v53 = sub_B73090(v28);
        if ( (char *)v51 == (char *)sub_9EC2C0 )
        {
          v170[0] = &v171;
          v54 = j__strlen(&byte_22F0C30);
          sub_9EB4F0(v170, &byte_22F0C30, (__int64)(&byte_22F0C30 + v54));
        }
        else
        {
          v51(v170, v159, v53, " ", v52);
        }
        v55 = v170[0];
        v56 = v170[1];
        v57 = sub_B73090(v28);
        sub_9EC740((__int64)&v175, v57, v55, (__int64)v56, 0);
        sub_9EF910((__int64)&v173, (__int64)&v175);
        if ( v177 != v179 )
          operator delete(v177);
        if ( v170[0] != &v171 )
          operator delete(v170[0]);
        goto LABEL_96;
      }
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(&v175, 24);
    v35 = j__strlen("\n");
    v170[0] = &v171;
    sub_9EB4F0(v170, "\n", (__int64)&aSubcommands[v35 + 13]);
    std::__ostream_insert<char,std::char_traits<char>>(&v176, v170[0], v170[1]);
    if ( v170[0] != &v171 )
      operator delete(v170[0]);
    v36 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 64LL);
    if ( v36 == sub_6EF210 )
      v37 = sub_B7F750(v28, v170);
    else
      v37 = v36(v28);
    v38 = (unsigned int)sub_EEB7E0(v37);
    v39 = sub_B73090(v28);
    sub_9B4C60((__int64)v163, (v38 << 32) | v39, v142, v141);
    v40 = v164;
    if ( !v164 )
      goto LABEL_60;
    v81 = *(void (__fastcall **)(void **, __int64, _QWORD, const char *, void *))(*(_QWORD *)v159 + 72LL);
    src = (void *)j__strlen(" ");
    v82 = sub_B73090(v28);
    if ( (char *)v81 == (char *)sub_9EC2C0 )
    {
      v170[0] = &v171;
      v83 = j__strlen(&byte_22F0C30);
      sub_9EB4F0(v170, &byte_22F0C30, (__int64)(&byte_22F0C30 + v83));
    }
    else
    {
      v81(v170, v159, v82, " ", src);
    }
    v84 = std::__ostream_insert<char,std::char_traits<char>>(&v176, v170[0], v170[1]);
    if ( v163[0] )
    {
      v165 = &v167;
      sub_9EB4F0(&v165, v163[0], (__int64)&v163[0][(unsigned __int64)v163[1]]);
      v85 = v166;
      v86 = (__m128i *)v165;
    }
    else
    {
      v86 = &v167;
      v85 = nullptr;
      v166 = nullptr;
      v165 = &v167;
      v167.m128i_i8[0] = 0;
    }
    v87 = std::__ostream_insert<char,std::char_traits<char>>(v84, v86, v85);
    v88 = j__strlen("{");
    std::__ostream_insert<char,std::char_traits<char>>(v87, "{", v88);
    if ( v165 != &v167 )
      operator delete(v165);
    if ( v170[0] != &v171 )
      operator delete(v170[0]);
    v89 = *(_QWORD *)(v28 + 56);
    if ( (v89 & 4) != 0 && (v90 = v89 & 0xFFFFFFFFFFFFFFF8LL, (v91 = *(_QWORD **)v90) != nullptr) )
    {
      v92 = *(void **)(v90 + 8);
      v170[0] = v91;
      v170[1] = v92;
      v93 = (_QWORD *)(v91[1] & 0xFFFFFFFFFFFFFFF8LL);
      if ( v93 )
      {
        v170[0] = (void *)(v91[1] & 0xFFFFFFFFFFFFFFF8LL);
        v94 = 0;
        while ( (v93[1] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v94 = v40;
          v93 = (_QWORD *)(v93[1] & 0xFFFFFFFFFFFFFFF8LL);
        }
        if ( v94 )
          v170[0] = v93;
      }
      v95 = sub_E90530(v170);
      v96 = *(_DWORD *)(v28 + 24);
      v97 = v95;
    }
    else
    {
      v97 = *(_DWORD *)(v28 + 24);
      v96 = v97;
    }
    v98 = *(void **)(v28 + 40);
    v99 = *(_QWORD *)(v28 + 160);
    LODWORD(v170[1]) = v96;
    v170[0] = v98;
    v171.m128i_i64[0] = v99;
    v100 = sub_B85A10(v170);
    if ( !v100 )
      v100 = (unsigned int)v170[1];
    v101 = sub_13DC060(v100, 0, v142, v141);
    sub_9B4C60((__int64)&v165, (v101 << 32) | v97, v142, v141);
    if ( !v167.m128i_i8[0] )
    {
LABEL_60:
      v172 = 0;
      goto LABEL_61;
    }
    v102 = j__strlen("return ");
    std::__ostream_insert<char,std::char_traits<char>>(&v176, "return ", v102);
    if ( v165 )
    {
      v170[0] = &v171;
      sub_9EB4F0(v170, v165, (__int64)v166 + (_QWORD)v165);
      v103 = v170[1];
      v104 = (__m128i *)v170[0];
    }
    else
    {
      v104 = &v171;
      v171.m128i_i8[0] = 0;
      v103 = nullptr;
      v170[0] = &v171;
      v170[1] = nullptr;
    }
    v105 = std::__ostream_insert<char,std::char_traits<char>>(&v176, v104, v103);
    std::operator<<<std::char_traits<char>>(v105, "(");
    if ( v170[0] != &v171 )
      operator delete(v170[0]);
    v106 = 0;
    sub_B76070(v28);
    v148 = v107 - 1;
    srca = (unsigned int)(v107 - 1);
    if ( v107 )
    {
      while ( 1 )
      {
        v108 = *(_QWORD *)(*(_QWORD *)(v28 + 120) + 8 * v106);
        if ( (*(_BYTE *)(v108 + 29) & 2) == 0 )
        {
          v109 = *(_QWORD *)(v108 + 40);
          if ( (v109 & 7) != 0 )
            goto LABEL_60;
          v110 = v109 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v110 )
            goto LABEL_60;
          if ( ((1LL << v106) & *(_QWORD *)&v168[8 * (v106 >> 6)]) != 0 )
          {
            v160 = *(__m128i **)(*(_QWORD *)(v28 + 120) + 8 * v106);
            v150 = std::__ostream_insert<char,std::char_traits<char>>(
                     &v176,
                     *((_QWORD *)v162[0] + 4 * v106),
                     *((_QWORD *)v162[0] + 4 * v106 + 1));
            v123 = j__strlen("(");
            std::__ostream_insert<char,std::char_traits<char>>(v150, "(", v123);
            v124 = v160[2].m128i_i64[1];
            if ( (v124 & 7) != 0 )
              BUG();
            v125 = *(unsigned int **)((v124 & 0xFFFFFFFFFFFFFFF8LL) + 16);
            v126 = *v125;
            v127 = v125 + 4;
            if ( v127 )
            {
              v170[0] = &v171;
              sub_9EB4F0(v170, v127, (__int64)&v127[v126]);
              v128 = v170[1];
              v129 = (__m128i *)v170[0];
            }
            else
            {
              v129 = &v171;
              v171.m128i_i8[0] = 0;
              v128 = nullptr;
              v170[0] = &v171;
              v170[1] = nullptr;
            }
            v151 = std::__ostream_insert<char,std::char_traits<char>>(v150, v129, v128);
            v130 = j__strlen(", ");
            std::__ostream_insert<char,std::char_traits<char>>(v151, ", ", v130);
            v161 = j__strlen("size");
            v160 = &v167;
            v165 = &v167;
            v131 = j__strlen("<# ");
            sub_9EB4F0(&v165, "<# ", (__int64)&asc_22E15CE[v131]);
            if ( v161 > 0x7FFFFFFFFFFFFFFFLL - (__int64)v166 )
              std::__throw_length_error("basic_string::append");
            sub_9EE560(&v165, "size", v161);
            sub_9EE7C0(&v165, " #>");
            v132 = std::__ostream_insert<char,std::char_traits<char>>(v151, v165, v166);
            std::operator<<<std::char_traits<char>>(v132, ")");
            if ( v165 != v160 )
              operator delete(v165);
          }
          else
          {
            v111 = *(__int64 **)(v110 + 16);
            if ( v111 == (__int64 *)-16LL )
            {
              v114 = &v171;
              v171.m128i_i8[0] = 0;
              v113 = nullptr;
              v170[0] = &v171;
              v170[1] = nullptr;
            }
            else
            {
              v112 = *v111;
              v170[0] = &v171;
              sub_9EB4F0(v170, (_BYTE *)v111 + 16, (__int64)v111 + (unsigned int)v112 + 16);
              v113 = v170[1];
              v114 = (__m128i *)v170[0];
            }
            std::__ostream_insert<char,std::char_traits<char>>(&v176, v114, v113);
          }
          if ( v170[0] != &v171 )
            operator delete(v170[0]);
          if ( (_DWORD)v106 != v148 )
            std::operator<<<std::char_traits<char>>(&v176, ", ");
        }
        if ( v106 == srca )
          break;
        ++v106;
      }
    }
    v133 = j__strlen(");}");
    std::__ostream_insert<char,std::char_traits<char>>(&v176, ");}", v133);
    v134 = j__strlen("\n");
    v170[0] = &v171;
    sub_9EB4F0(v170, "\n", (__int64)&aSubcommands[v134 + 13]);
    std::__ostream_insert<char,std::char_traits<char>>(&v176, v170[0], v170[1]);
    if ( v170[0] != &v171 )
      operator delete(v170[0]);
    std::stringbuf::str(&v165, &v177);
    v170[0] = &v171;
    v116 = v165;
    if ( v165 == &v167 )
    {
LABEL_198:
      v171 = _mm_load_si128(&v167);
      goto LABEL_168;
    }
LABEL_167:
    v170[0] = v116;
    v171.m128i_i64[0] = v167.m128i_i64[0];
LABEL_168:
    v172 = 1;
    v170[1] = v166;
LABEL_61:
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(&v175);
    if ( !v172 )
      goto LABEL_46;
    sub_9EC740((__int64)&v175, v155, (_BYTE *)v170[0], (__int64)v170[1], 0);
    sub_9EF910((__int64)&v173, (__int64)&v175);
    if ( v177 != v179 )
      operator delete(v177);
    if ( v172 && v170[0] != &v171 )
      operator delete(v170[0]);
    v43 = *(_QWORD *)(v28 + 104);
    if ( (v43 & 1) != 0 )
    {
      if ( v156 )
        break;
      v45 = v43 & 0xFFFFFFFFFFFFFFFELL;
LABEL_75:
      v46 = v43 & 0xFFFFFFFFFFFFFFF8LL;
      v156 = 1;
      v44 = v46;
      if ( v45 && (v45 & 4) != 0 && v46 )
      {
        v47 = *(_QWORD **)v46;
        v48 = *(_DWORD *)(*(_QWORD *)v46 + 12LL);
        if ( *(_DWORD *)(v46 + 8) != v48 )
        {
          *(_DWORD *)(v46 + 8) = v48;
          srcb = (void *)v46;
          (*(void (__fastcall **)(_QWORD *, unsigned __int64, _QWORD, unsigned __int64))(*v47 + 152LL))(
            v47,
            v28,
            *v47,
            v46);
          v46 = (unsigned __int64)srcb;
        }
        v44 = *(_QWORD *)(v46 + 16);
        v156 = 1;
      }
      goto LABEL_70;
    }
    if ( (v43 & 2) != 0 )
    {
      if ( v156 )
        break;
      v135 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
      if ( !v135 )
      {
        v156 = 1;
LABEL_200:
        v44 = 0;
        goto LABEL_70;
      }
      v136 = v135[2295];
      if ( v136 )
      {
        v137 = v135[294];
        v135[304] += 24LL;
        v138 = (v137 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v135[295] >= v138 + 24 && v137 )
        {
          v135[294] = v138 + 24;
          v139 = (v137 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v139 = sub_986170((__int64)(v135 + 294), 24, 24, 3, v41, v42);
          v138 = v139 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v139 = v136;
        v140 = v138 | 4;
        *(_DWORD *)(v139 + 8) = 0;
        *(_QWORD *)(v139 + 16) = v28;
      }
      else
      {
        v140 = v28 & 0xFFFFFFFFFFFFFFFBLL;
      }
      v45 = v140 & 0xFFFFFFFFFFFFFFFELL;
      v43 = v45 | 1;
      *(_QWORD *)(v28 + 104) = v45 | 1;
      goto LABEL_75;
    }
    v44 = v43 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v43 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_200;
LABEL_70:
    if ( v157 == (_QWORD *)v44 )
      break;
    v28 = v44;
  }
  while ( v44 );
  v49 = v173.m128i_i32[2];
  *a1 = a1 + 2;
  a1[1] = 0x400000000LL;
  if ( v49 )
    sub_9F0880((__int64)a1, (__int64)&v173);
  *((_BYTE *)a1 + 272) = 1;
LABEL_47:
  sub_9ED140((__int64)&v173);
  v154 = v168;
  if ( v168 )
LABEL_42:
    operator delete(v154);
LABEL_33:
  v25 = v162[0];
  v26 = (void **)v162[1];
  v27 = (void **)v162[0];
  if ( v162[1] == v162[0] )
  {
LABEL_36:
    if ( !v25 )
      return a1;
LABEL_37:
    operator delete(v25);
    return a1;
  }
  do
  {
    while ( *v27 != v27 + 2 )
    {
      operator delete(*v27);
      v27 += 4;
      if ( v26 == v27 )
        goto LABEL_36;
    }
    v27 += 4;
  }
  while ( v26 != v27 );
  if ( v25 )
    goto LABEL_37;
  return a1;
}
