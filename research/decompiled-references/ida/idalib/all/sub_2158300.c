__int64 __fastcall sub_2158300(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  void *v6; // rax
  char *v8; // r12
  _BOOL8 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r15
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  size_t v39; // rax
  size_t v40; // r13
  size_t v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 (*v45)(); // rdx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 (*v48)(); // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  size_t v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __m128i v55; // xmm2
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  void *v68; // rax
  size_t v69; // rax
  size_t v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // r9
  unsigned __int64 v79; // r10
  unsigned __int64 v80; // rcx
  __m128i si128; // xmm0
  __int64 v82; // rdx
  __int64 v83; // r8
  __m128i v84; // xmm0
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __m128i *v90; // rdi
  void *v91; // rdi
  size_t v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // r9
  size_t v103; // r10
  unsigned __int64 v104; // rcx
  __m128i v105; // xmm0
  __m128i *v106; // rdx
  __m128i v107; // xmm0
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __m128i *v112; // rdi
  __int64 v113; // r14
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rax
  __int64 v130; // [rsp+0h] [rbp-248h]
  __int64 v131; // [rsp+8h] [rbp-240h]
  size_t v132; // [rsp+8h] [rbp-240h]
  __int64 v133; // [rsp+8h] [rbp-240h]
  __int64 v134; // [rsp+8h] [rbp-240h]
  unsigned __int64 v135; // [rsp+10h] [rbp-238h]
  __int64 v136; // [rsp+10h] [rbp-238h]
  __int64 v137; // [rsp+10h] [rbp-238h]
  __int64 v138; // [rsp+10h] [rbp-238h]
  __int64 v139; // [rsp+10h] [rbp-238h]
  size_t v140; // [rsp+10h] [rbp-238h]
  __int64 v141; // [rsp+18h] [rbp-230h]
  size_t v142; // [rsp+18h] [rbp-230h]
  __int64 v143; // [rsp+20h] [rbp-228h] BYREF
  __int64 v144; // [rsp+28h] [rbp-220h] BYREF
  size_t n[2]; // [rsp+30h] [rbp-218h] BYREF
  void *s1[2]; // [rsp+40h] [rbp-208h] BYREF
  char v147; // [rsp+50h] [rbp-1F8h]
  _QWORD v148[2]; // [rsp+60h] [rbp-1E8h] BYREF
  _BYTE v149[16]; // [rsp+70h] [rbp-1D8h] BYREF
  void *v150; // [rsp+80h] [rbp-1C8h] BYREF
  __int64 v151; // [rsp+88h] [rbp-1C0h]
  __m128i v152; // [rsp+90h] [rbp-1B8h] BYREF
  __m128i v153; // [rsp+A0h] [rbp-1A8h] BYREF
  _BYTE v154[16]; // [rsp+B0h] [rbp-198h] BYREF
  __int16 v155; // [rsp+C0h] [rbp-188h]
  __m128i v156; // [rsp+D0h] [rbp-178h] BYREF
  __m128i v157; // [rsp+E0h] [rbp-168h] BYREF
  __int64 v158; // [rsp+F0h] [rbp-158h]
  __m128i v159; // [rsp+100h] [rbp-148h] BYREF
  __m128i v160; // [rsp+110h] [rbp-138h] BYREF
  __int64 v161; // [rsp+120h] [rbp-128h]
  __m128i v162; // [rsp+130h] [rbp-118h] BYREF
  __m128i v163; // [rsp+140h] [rbp-108h] BYREF
  __int64 v164; // [rsp+150h] [rbp-F8h]
  __m128i v165; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v166; // [rsp+180h] [rbp-C8h]
  __m128i v167; // [rsp+190h] [rbp-B8h] BYREF
  __int128 v168; // [rsp+1A0h] [rbp-A8h]
  __int64 v169; // [rsp+1B0h] [rbp-98h]
  char v170; // [rsp+1B8h] [rbp-90h]
  int v171; // [rsp+1BCh] [rbp-8Ch]
  _QWORD *v172; // [rsp+1C0h] [rbp-88h]
  __m128i v173; // [rsp+1D0h] [rbp-78h] BYREF
  __int128 v174; // [rsp+1E0h] [rbp-68h]
  __int64 v175; // [rsp+1F0h] [rbp-58h]
  char v176; // [rsp+1F8h] [rbp-50h]
  int v177; // [rsp+1FCh] [rbp-4Ch]
  __m128i *v178; // [rsp+200h] [rbp-48h]

  if ( a3 <= 0xF )
  {
    v30 = a2[2];
    v31 = sub_215DEC0(a2[1]);
    LOWORD(v169) = 267;
    v167.m128i_i64[0] = (__int64)&v162;
    v162.m128i_i64[0] = v30 - v31;
    v173.m128i_i64[0] = (__int64)"archive header truncated before the name field for archive member header at offset ";
    LOWORD(v175) = 259;
    sub_A41580(&v156, &v173, &v167, 259, v32, v33);
    sub_2158040(&v165, (__int64)&v173, v34, v35, v36, v37, v156.m128i_i8[0]);
    v38 = v165.m128i_i64[0];
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_QWORD *)a1 = v38;
    return a1;
  }
  (*(void (__fastcall **)(void **))(*a2 + 24LL))(s1);
  if ( (v147 & 1) == 0 )
  {
    v8 = (char *)s1[0];
    *(__m128i *)n = _mm_load_si128((const __m128i *)s1);
    if ( *(_BYTE *)s1[0] != 47 )
    {
      v39 = j__strlen("#1/");
      v40 = n[1];
      if ( v39 > n[1] || v39 && memcmp(v8, "#1/", v39) )
      {
        v52 = n[1] - 1;
        if ( v8[n[1] - 1] != 47 )
        {
          v53 = sub_A41530((__int64)n, 32);
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(_QWORD *)a1 = v53;
          *(_QWORD *)(a1 + 8) = v54;
          goto LABEL_4;
        }
        *(_QWORD *)a1 = v8;
        if ( v52 > v40 )
          v52 = 0;
        *(_BYTE *)(a1 + 16) &= ~1u;
LABEL_52:
        *(_QWORD *)(a1 + 8) = v52;
        goto LABEL_4;
      }
      v41 = 0;
      if ( n[1] > 2 )
      {
        v41 = n[1] - 3;
        v40 = 3;
      }
      v173.m128i_i64[1] = v41;
      v173.m128i_i64[0] = (__int64)&v8[v40];
      v132 = v41;
      v42 = sub_22470F0(&v173, 32, -1) + 1;
      if ( v42 > v173.m128i_i64[1] )
        v42 = v173.m128i_u64[1];
      v43 = v42 + v173.m128i_i64[1] - v132;
      if ( v43 > v173.m128i_i64[1] )
        v43 = v173.m128i_u64[1];
      if ( !(unsigned __int8)sub_2247970(v173.m128i_i64[0], v43, 10, &v167) )
      {
        v44 = v167.m128i_i64[0];
        v45 = *(__int64 (**)())(*a2 + 104LL);
        v144 = v167.m128i_i64[0];
        v46 = 60;
        if ( v45 != sub_2156B30 )
        {
          v46 = ((__int64 (__fastcall *)(_QWORD *))v45)(a2);
          v44 = v144;
        }
        v47 = a2[2];
        if ( v44 + v46 <= a3 )
        {
          v48 = *(__int64 (**)())(*a2 + 104LL);
          v49 = 60;
          if ( v48 != sub_2156B30 )
          {
            v139 = a2[2];
            v134 = v44;
            v49 = ((__int64 (__fastcall *)(_QWORD *))v48)(a2);
            v47 = v139;
            v44 = v134;
          }
          v173.m128i_i64[1] = v44;
          v173.m128i_i64[0] = v47 + v49;
          v50 = sub_A41530((__int64)&v173, 0);
          *(_BYTE *)(a1 + 16) &= ~1u;
          *(_QWORD *)a1 = v50;
          *(_QWORD *)(a1 + 8) = v51;
          goto LABEL_4;
        }
        v133 = a2[2];
        v56 = sub_215DEC0(a2[1]);
        LOWORD(v164) = 259;
        LOWORD(v158) = 259;
        LOWORD(v169) = 267;
        v167.m128i_i64[0] = (__int64)v148;
        v162.m128i_i64[0] = (__int64)" extends past the end of the member or archive for archive member header at offset ";
        v153.m128i_i64[0] = (__int64)&v144;
        v148[0] = v133 - v56;
        v155 = 267;
        v156.m128i_i64[0] = (__int64)"long name length: ";
        sub_A41580(&v159, &v156, &v153, 267, v133 - v56, v57);
        sub_A41580(&v165, &v159, &v162, v58, v59, v60);
        sub_A41580(&v173, &v165, &v167, v61, v62, v63);
        sub_2158040(&v150, (__int64)&v165, v64, v65, v66, v67, v173.m128i_i8[0]);
        goto LABEL_48;
      }
      v153.m128i_i64[1] = 0;
      v153.m128i_i64[0] = (__int64)v154;
      v154[0] = 0;
      v173.m128i_i64[0] = (__int64)&off_2BEBE68;
      v173.m128i_i32[2] = 0;
      v176 = 0;
      v177 = 1;
      v175 = 0;
      v174 = 0;
      v178 = &v153;
      sub_227B8B0(&v173, 0, 0, 0);
      v69 = n[1];
      v70 = 0;
      if ( n[1] > 2 )
      {
        v70 = n[1] - 3;
        v69 = 3;
      }
      v167.m128i_i64[1] = v70;
      v167.m128i_i64[0] = n[0] + v69;
      v71 = sub_A41530((__int64)&v167, 32);
      sub_227BA90(&v173, v71, v72, 0);
      if ( v175 != (_QWORD)v174 )
        sub_227B9F0(&v173, v71, v73, v74, v75, v76, v130);
      v136 = a2[2];
      v77 = sub_215DEC0(a2[1]);
      LOWORD(v164) = 267;
      v144 = v136 - v77;
      v162.m128i_i64[0] = (__int64)&v144;
      sub_C05100(
        (__int64)&v156,
        "long name length characters after the #1/ are not all decimal numbers: '",
        (__int64)&v153);
      v78 = v156.m128i_i64[1];
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v156.m128i_i64[1]) > 0x25 )
      {
        v79 = v156.m128i_i64[1] + 38;
        if ( (__m128i *)v156.m128i_i64[0] == &v157 )
          v80 = 15;
        else
          v80 = v157.m128i_i64[0];
        if ( v79 > v80 )
        {
          v141 = v156.m128i_i64[1] + 38;
          v138 = v156.m128i_i64[1];
          sub_998B30((__int64)&v156, v156.m128i_u64[1], 0, "' for archive member header at offset ", 0x26u);
          v79 = v141;
          v78 = v138;
        }
        else
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_23AB510);
          v82 = v156.m128i_i64[1] + v156.m128i_i64[0];
          v83 = 8308;
          *(_DWORD *)(v82 + 32) = 1702061670;
          *(__m128i *)v82 = si128;
          v84 = _mm_load_si128((const __m128i *)&xmmword_23AB520);
          *(_WORD *)(v82 + 36) = 8308;
          *(__m128i *)(v82 + 16) = v84;
        }
        v156.m128i_i64[1] = v79;
        *(_BYTE *)(v156.m128i_i64[0] + v78 + 38) = 0;
        v159.m128i_i64[0] = (__int64)&v160;
        if ( (__m128i *)v156.m128i_i64[0] == &v157 )
        {
          v160 = _mm_load_si128(&v157);
        }
        else
        {
          v159.m128i_i64[0] = v156.m128i_i64[0];
          v160.m128i_i64[0] = v157.m128i_i64[0];
        }
        v85 = v156.m128i_i64[1];
        v156.m128i_i64[1] = 0;
        LOWORD(v166) = 260;
        v159.m128i_i64[1] = v85;
        v156.m128i_i64[0] = (__int64)&v157;
        v157.m128i_i8[0] = 0;
        v165.m128i_i64[0] = (__int64)&v159;
        sub_A41580(&v167, &v165, &v162, (__int64)&v159, v83, v78);
        sub_2158040(&v150, (__int64)&v165, v86, v87, v88, v89, v167.m128i_i8[0]);
        *(_BYTE *)(a1 + 16) |= 1u;
        v90 = (__m128i *)v159.m128i_i64[0];
        *(_QWORD *)a1 = v150;
        if ( v90 != &v160 )
          operator delete(v90);
        if ( (__m128i *)v156.m128i_i64[0] != &v157 )
          operator delete((void *)v156.m128i_i64[0]);
        v173.m128i_i64[0] = (__int64)&off_2BEBE68;
        sub_227B7A0(&v173);
        v91 = (void *)v153.m128i_i64[0];
        if ( (_BYTE *)v153.m128i_i64[0] == v154 )
          goto LABEL_4;
LABEL_69:
        operator delete(v91);
        goto LABEL_4;
      }
LABEL_101:
      std::__throw_length_error("basic_string::append");
    }
    if ( n[1] == 1 )
      goto LABEL_42;
    if ( n[1] == 2 )
    {
      if ( *((_BYTE *)s1[0] + 1) == 47 )
        goto LABEL_42;
      if ( j__strlen("/<XFGHASHMAP>/") != 2 )
      {
        if ( j__strlen("/<ECSYMBOLS>/") != 2 )
          goto LABEL_13;
LABEL_12:
        if ( memcmp(v8, "/<ECSYMBOLS>/", n[1]) )
          goto LABEL_13;
LABEL_42:
        v55 = _mm_load_si128((const __m128i *)n);
        *(_BYTE *)(a1 + 16) &= ~1u;
        *(__m128i *)a1 = v55;
        goto LABEL_4;
      }
    }
    else
    {
      if ( n[1] != j__strlen("/<XFGHASHMAP>/") )
      {
        if ( n[1] == j__strlen("/<ECSYMBOLS>/") )
        {
          if ( !n[1] )
            goto LABEL_42;
          goto LABEL_12;
        }
        goto LABEL_13;
      }
      if ( !n[1] )
        goto LABEL_42;
    }
    if ( !memcmp(v8, "/<XFGHASHMAP>/", n[1]) )
      goto LABEL_42;
    if ( j__strlen("/<ECSYMBOLS>/") == n[1] )
      goto LABEL_12;
LABEL_13:
    v9 = n[1] != 0;
    v173.m128i_i64[0] = (__int64)&v8[v9];
    v173.m128i_i64[1] = n[1] - v9;
    v10 = sub_A41530((__int64)&v173, 32);
    if ( !(unsigned __int8)sub_2247970(v10, v11, 10, &v167) )
    {
      v12 = v167.m128i_i64[0];
      v13 = a2[1];
      v144 = v167.m128i_i64[0];
      v14 = *(_QWORD *)(v13 + 88);
      if ( v167.m128i_i64[0] < v14 )
      {
        v15 = *(_QWORD *)(v13 + 80);
        v16 = v15 + v167.m128i_i64[0];
        if ( (*(_BYTE *)(v13 + 114) & 7u) <= 1 )
        {
          v131 = *(_QWORD *)(v13 + 80);
          v135 = *(_QWORD *)(v13 + 88);
          v17 = (char *)memchr((const void *)(v15 + v167.m128i_i64[0]), 10, v14 - v167.m128i_i64[0]);
          if ( v17
            && (v19 = v131, v21 = (unsigned __int64)&v17[-v131 - 1], v21 <= 0xFFFFFFFFFFFFFFFDLL)
            && (v18 = v135, *(v17 - 1) == 47) )
          {
            v128 = 0;
            if ( v21 >= v12 )
            {
              v129 = v135;
              if ( v21 <= v135 )
                v129 = v21;
              v128 = v129 - v12;
            }
            *(_BYTE *)(a1 + 16) &= ~1u;
            *(_QWORD *)a1 = v16;
            *(_QWORD *)(a1 + 8) = v128;
          }
          else
          {
            v173.m128i_i64[0] = (__int64)"not terminated";
            v159.m128i_i64[0] = (__int64)&v144;
            LOWORD(v175) = 259;
            LOWORD(v161) = 267;
            v162.m128i_i64[0] = (__int64)"string table at long name offset ";
            LOWORD(v164) = 259;
            sub_A41580(&v167, &v162, &v159, v18, v19, v20);
            sub_A41580(&v165, &v167, &v173, v22, v23, v24);
            sub_2158040(&v156, (__int64)&v167, v25, v26, v27, v28, v165.m128i_i8[0]);
            v29 = v156.m128i_i64[0];
            *(_BYTE *)(a1 + 16) |= 1u;
            *(_QWORD *)a1 = v29;
          }
          goto LABEL_4;
        }
        *(_BYTE *)(a1 + 16) &= ~1u;
        v52 = 0;
        *(_QWORD *)a1 = v16;
        if ( v16 )
          v52 = j__strlen((const char *)(v15 + v12));
        goto LABEL_52;
      }
      v113 = a2[2];
      v114 = sub_215DEC0(v13);
      LOWORD(v175) = 267;
      v173.m128i_i64[0] = (__int64)v148;
      v165.m128i_i64[0] = (__int64)" past the end of the string table for archive member header at offset ";
      LOWORD(v166) = 259;
      v155 = 267;
      v148[0] = v113 - v114;
      v153.m128i_i64[0] = (__int64)&v144;
      v156.m128i_i64[0] = (__int64)"long name offset ";
      LOWORD(v158) = 259;
      sub_A41580(&v159, &v156, &v153, v115, v116, v117);
      sub_A41580(&v167, &v159, &v165, v118, v119, v120);
      sub_A41580(&v162, &v167, &v173, v121, v122, v123);
      sub_2158040(&v150, (__int64)&v167, v124, v125, v126, v127, v162.m128i_i8[0]);
LABEL_48:
      v68 = v150;
      *(_BYTE *)(a1 + 16) |= 1u;
      *(_QWORD *)a1 = v68;
      goto LABEL_4;
    }
    v149[0] = 0;
    v148[0] = v149;
    v148[1] = 0;
    v167.m128i_i64[0] = (__int64)&off_2BEBE68;
    v167.m128i_i32[2] = 0;
    v170 = 0;
    v171 = 1;
    v169 = 0;
    v168 = 0;
    v172 = v148;
    sub_227B8B0(&v167, 0, 0, 0);
    v92 = n[1];
    v93 = 0;
    if ( n[1] )
    {
      v92 = n[1] - 1;
      v93 = 1;
    }
    v173.m128i_i64[1] = v92;
    v173.m128i_i64[0] = n[0] + v93;
    v94 = sub_A41530((__int64)&v173, 32);
    sub_227BA90(&v167, v94, v95, 0);
    if ( v169 != (_QWORD)v168 )
      sub_227B9F0(&v167, v94, v96, v97, v98, v99, v130);
    v137 = a2[2];
    v100 = sub_215DEC0(a2[1]);
    LOWORD(v166) = 267;
    v143 = v137 - v100;
    v165.m128i_i64[0] = (__int64)&v143;
    sub_C05100(
      (__int64)&v150,
      "long name offset characters after the '/' are not all decimal numbers: '",
      (__int64)v148);
    v102 = v151;
    if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v151) > 0x25 )
    {
      v103 = v151 + 38;
      if ( v150 == &v152 )
        v104 = 15;
      else
        v104 = v152.m128i_i64[0];
      if ( v103 > v104 )
      {
        v142 = v151 + 38;
        v140 = v151;
        sub_998B30((__int64)&v150, v151, 0, "' for archive member header at offset ", 0x26u);
        v103 = v142;
        v102 = v140;
      }
      else
      {
        v105 = _mm_load_si128((const __m128i *)&xmmword_23AB510);
        v106 = (__m128i *)((char *)v150 + v151);
        v106[2].m128i_i32[0] = 1702061670;
        *v106 = v105;
        v107 = _mm_load_si128((const __m128i *)&xmmword_23AB520);
        v106[2].m128i_i16[2] = 8308;
        v106[1] = v107;
      }
      v151 = v103;
      *((_BYTE *)v150 + v102 + 38) = 0;
      v162.m128i_i64[0] = (__int64)&v163;
      if ( v150 == &v152 )
      {
        v163 = _mm_load_si128(&v152);
      }
      else
      {
        v162.m128i_i64[0] = (__int64)v150;
        v163.m128i_i64[0] = v152.m128i_i64[0];
      }
      v152.m128i_i8[0] = 0;
      v162.m128i_i64[1] = v151;
      v150 = &v152;
      v151 = 0;
      LOWORD(v175) = 260;
      v173.m128i_i64[0] = (__int64)&v162;
      sub_A41580(&v159, &v173, &v165, (__int64)&v162, v101, v102);
      sub_2158040(&v156, (__int64)&v173, v108, v109, v110, v111, v159.m128i_i8[0]);
      *(_BYTE *)(a1 + 16) |= 1u;
      v112 = (__m128i *)v162.m128i_i64[0];
      *(_QWORD *)a1 = v156.m128i_i64[0];
      if ( v112 != &v163 )
        operator delete(v112);
      if ( v150 != &v152 )
        operator delete(v150);
      v167.m128i_i64[0] = (__int64)&off_2BEBE68;
      sub_227B7A0(&v167);
      v91 = (void *)v148[0];
      if ( (_BYTE *)v148[0] == v149 )
        goto LABEL_4;
      goto LABEL_69;
    }
    goto LABEL_101;
  }
  v6 = s1[0];
  *(_BYTE *)(a1 + 16) |= 1u;
  s1[0] = nullptr;
  *(_QWORD *)a1 = v6;
LABEL_4:
  sub_111DFC0((__int64 *)s1);
  return a1;
}
