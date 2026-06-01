void __fastcall sub_117B500(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _QWORD *a6,
        __m128 si128,
        __m128i a8)
{
  _QWORD *v9; // rbx
  _QWORD *v10; // r13
  void *v11; // rbp
  size_t v12; // r15
  char **v13; // r14
  char **v14; // r14
  void *v15; // rbp
  size_t v16; // r15
  void **p_src; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // r14
  _QWORD *v21; // r15
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // r14
  _QWORD *v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r15
  _QWORD *v34; // r14
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // r14
  _QWORD *v38; // r15
  unsigned __int8 *v39; // r14
  __int8 *v40; // rsi
  __int64 v41; // r15
  __m128i *v42; // rax
  _QWORD *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __m128i **v47; // r15
  __m128i *v48; // rdi
  __int64 v49; // rax
  void **v50; // r14
  __int64 v51; // rax
  void **v52; // rdx
  void **v53; // r15
  _QWORD *v54; // rbp
  void **v55; // rbx
  void **v56; // rdi
  void **v57; // rdi
  void **v58; // r15
  int v59; // eax
  __int64 v60; // rbx
  const __m128i *v61; // r13
  __int64 v62; // r14
  void *v63; // r15
  __int64 v64; // rdx
  __int64 v65; // rsi
  int v66; // eax
  __int64 v67; // rcx
  void *v68; // rsi
  _QWORD *v69; // rbx
  void (__fastcall *v70)(_QWORD *); // rax
  __int64 v71; // rbp
  __int64 v72; // r12
  void *v73; // rdi
  _QWORD *v74; // rdi
  _QWORD *v75; // rdi
  void **v76; // r12
  void **v77; // rbp
  void *v78; // rdi
  _QWORD *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  unsigned __int64 v84; // rdx
  size_t v85; // r14
  size_t v86; // r15
  __m128i *v87; // r13
  __m128i *v88; // rdi
  size_t v89; // rsi
  unsigned __int64 v90; // rax
  size_t v91; // r8
  unsigned __int64 v92; // r15
  unsigned __int64 v93; // rax
  __m128i *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rcx
  unsigned __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  size_t v100; // r13
  void *v101; // rcx
  size_t v102; // r10
  __m128i *v103; // r15
  _BYTE *v104; // rsi
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rcx
  unsigned __int64 v109; // rdx
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rax
  __int64 v113; // rcx
  _QWORD *v114; // r15
  _QWORD *v115; // r13
  __int64 v116; // rax
  __int8 *v117; // rdi
  __int64 v118; // rax
  __int64 (__fastcall *v119)(_QWORD *, void *, _QWORD); // r14
  __int64 v120; // r14
  __int64 v121; // rcx
  unsigned __int64 v122; // rdx
  __int64 v123; // rax
  __int64 (__fastcall *v124)(_QWORD *, void *, _QWORD); // r15
  __int64 v125; // r15
  __int64 v126; // rcx
  unsigned __int64 v127; // rdx
  __int64 v128; // rax
  unsigned __int64 v129; // rdx
  unsigned __int64 v130; // rbx
  __int64 v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rcx
  unsigned __int64 v134; // rdx
  void *v135; // rsi
  __int64 v136; // rcx
  __m128i *v137; // rax
  __int64 v138; // rax
  unsigned __int64 v139; // r9
  unsigned __int64 v140; // rcx
  unsigned __int64 v141; // r9
  __int64 v142; // rax
  unsigned __int64 v143; // rdx
  char *v144; // rdi
  __int64 v145; // rax
  unsigned __int64 v146; // r9
  unsigned __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rdx
  int v150; // eax
  __int64 v151; // rdx
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rax
  __int64 v156; // rbx
  __int64 v157; // rbp
  void *v158; // rdi
  __int64 v159; // rax
  __int64 v160; // rcx
  unsigned __int64 v161; // rdx
  size_t v162; // r15
  char **v163; // r14
  char *v164; // rsi
  char *v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r9
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rax
  __int64 v174; // r9
  __int64 v175; // rdx
  __int64 v176; // rax
  __int64 v177; // rcx
  __int64 v178; // r8
  __int64 v179; // r9
  __int64 v180; // rax
  size_t v181; // rax
  __int64 v186; // [rsp+38h] [rbp-400h]
  char v187; // [rsp+40h] [rbp-3F8h]
  int v188; // [rsp+48h] [rbp-3F0h]
  unsigned __int64 v189; // [rsp+48h] [rbp-3F0h]
  __int64 v190; // [rsp+48h] [rbp-3F0h]
  __int64 v191; // [rsp+48h] [rbp-3F0h]
  unsigned __int64 v192; // [rsp+48h] [rbp-3F0h]
  __int64 v193; // [rsp+48h] [rbp-3F0h]
  __int64 v194; // [rsp+48h] [rbp-3F0h]
  size_t v195; // [rsp+48h] [rbp-3F0h]
  __int64 v196; // [rsp+48h] [rbp-3F0h]
  char v197; // [rsp+5Fh] [rbp-3D9h]
  char v198; // [rsp+68h] [rbp-3D0h]
  void **v199; // [rsp+68h] [rbp-3D0h]
  void *v200; // [rsp+68h] [rbp-3D0h]
  void *v201; // [rsp+68h] [rbp-3D0h]
  void *v202; // [rsp+68h] [rbp-3D0h]
  void *v203; // [rsp+68h] [rbp-3D0h]
  __int8 *v204; // [rsp+68h] [rbp-3D0h]
  void *v205; // [rsp+68h] [rbp-3D0h]
  void *v206; // [rsp+68h] [rbp-3D0h]
  void *v207; // [rsp+68h] [rbp-3D0h]
  unsigned __int64 v208; // [rsp+70h] [rbp-3C8h]
  char *v209; // [rsp+78h] [rbp-3C0h]
  unsigned int v210; // [rsp+80h] [rbp-3B8h]
  _QWORD *v211; // [rsp+80h] [rbp-3B8h]
  const void *v212; // [rsp+90h] [rbp-3A8h]
  void *s2; // [rsp+A0h] [rbp-398h] BYREF
  size_t n; // [rsp+A8h] [rbp-390h]
  __int64 v215; // [rsp+B0h] [rbp-388h] BYREF
  __m128i v216; // [rsp+C0h] [rbp-378h] BYREF
  __int64 v217; // [rsp+D0h] [rbp-368h] BYREF
  void *v218[2]; // [rsp+E0h] [rbp-358h] BYREF
  _BYTE v219[16]; // [rsp+F0h] [rbp-348h] BYREF
  void *v220; // [rsp+100h] [rbp-338h] BYREF
  size_t v221; // [rsp+108h] [rbp-330h]
  __int64 v222; // [rsp+110h] [rbp-328h] BYREF
  char v223; // [rsp+120h] [rbp-318h]
  __m128i v224[2]; // [rsp+130h] [rbp-308h] BYREF
  __int16 v225; // [rsp+150h] [rbp-2E8h]
  __m128i v226[2]; // [rsp+160h] [rbp-2D8h] BYREF
  __int16 v227; // [rsp+180h] [rbp-2B8h]
  __m128i v228; // [rsp+190h] [rbp-2A8h] BYREF
  __int64 v229; // [rsp+1A0h] [rbp-298h]
  __int64 v230; // [rsp+1A8h] [rbp-290h]
  __int16 v231; // [rsp+1B0h] [rbp-288h]
  __m128i v232; // [rsp+1C0h] [rbp-278h] BYREF
  __m128i v233; // [rsp+1D0h] [rbp-268h] BYREF
  __int16 v234; // [rsp+1E0h] [rbp-258h]
  __m128i v235; // [rsp+1F0h] [rbp-248h] BYREF
  __m128i v236; // [rsp+200h] [rbp-238h] BYREF
  __int16 v237; // [rsp+210h] [rbp-228h]
  __m128i v238; // [rsp+220h] [rbp-218h] BYREF
  __m128i v239; // [rsp+230h] [rbp-208h] BYREF
  __int16 v240; // [rsp+240h] [rbp-1F8h]
  void *ptr; // [rsp+250h] [rbp-1E8h] BYREF
  __int64 v242; // [rsp+258h] [rbp-1E0h]
  _QWORD v243[16]; // [rsp+260h] [rbp-1D8h] BYREF
  void *src; // [rsp+2E0h] [rbp-158h] BYREF
  _BYTE v245[24]; // [rsp+2E8h] [rbp-150h] BYREF
  void *v246; // [rsp+300h] [rbp-138h]
  __int64 v247; // [rsp+310h] [rbp-128h] BYREF
  __int16 v248; // [rsp+320h] [rbp-118h]

  v9 = a6;
  v10 = *(_QWORD **)(a1 + 24);
  v186 = v10[1];
  sub_11C8180(&s2, v186, a6, v10 + 2, 0);
  v11 = s2;
  v12 = n;
  v13 = &off_2BA9C40;
  do
  {
    if ( (char *)v12 == v13[1] && (!v12 || !memcmp(*v13, v11, v12)) )
    {
      v197 = 1;
      v209 = v13[4];
      v208 = (unsigned __int64)v13[5];
      goto LABEL_7;
    }
    v13 += 7;
  }
  while ( &unk_2BAEB70 != (_UNKNOWN *)v13 );
  v197 = 0;
LABEL_7:
  v14 = &off_2BA9C40;
  sub_117AB60((__int64)&v220, v10);
  v15 = s2;
  v16 = n;
  do
  {
    if ( (char *)v16 == v14[1] && (!v16 || !memcmp(*v14, v15, v16)) )
    {
      v210 = *((_DWORD *)v14 + 12);
      if ( v210 )
      {
        v198 = 1;
        goto LABEL_14;
      }
    }
    v14 += 7;
  }
  while ( &unk_2BAEB70 != (_UNKNOWN *)v14 );
  v198 = 0;
LABEL_14:
  p_src = &src;
  LODWORD(src) = 1916;
  v18 = sub_21B6DA0(v9, &src, 1);
  v19 = v9[1];
  v20 = (_QWORD *)(v19 + 8LL * (unsigned int)v18);
  v21 = (_QWORD *)(v19 + 8 * HIDWORD(v18));
  if ( v20 == v21 )
    goto LABEL_18;
  while ( !*v20 || !(unsigned __int8)sub_21B9810(*v20, 1916) )
  {
    if ( v21 == ++v20 )
      goto LABEL_18;
  }
  if ( v21 == v20 )
  {
LABEL_18:
    sub_112D530(&v216, *(_QWORD *)(a1 + 24), *(char **)(a1 + 16));
  }
  else
  {
    do
    {
      v22 = *v20;
      if ( *(_QWORD *)(*v20 + 16LL) )
        v22 = *(_QWORD *)(*v20 + 16LL);
      ++v20;
      *(_BYTE *)(v22 + 44) |= 1u;
      if ( v20 == v21 )
        break;
      while ( !*v20 || !(unsigned __int8)sub_21B9810(*v20, 1916) )
      {
        if ( v21 == ++v20 )
          goto LABEL_26;
      }
    }
    while ( v21 != v20 );
LABEL_26:
    sub_1132E50(&v216, *(_QWORD *)(a1 + 24), nullptr);
  }
  ptr = v243;
  v243[0] = "-o";
  LODWORD(src) = 3236;
  v243[1] = *a4;
  v242 = 0x1000000002LL;
  v23 = sub_21B6DA0(v9, &src, 1);
  v24 = v9[1];
  v25 = (_QWORD *)(v24 + 8LL * (unsigned int)v23);
  v26 = (_QWORD *)(v24 + 8 * HIDWORD(v23));
  if ( v25 == v26 )
    goto LABEL_31;
  while ( !*v25 || !(unsigned __int8)sub_21B9810(*v25, 3236) )
  {
    if ( v26 == ++v25 )
      goto LABEL_31;
  }
  if ( v26 == v25 )
  {
LABEL_31:
    v27 = (unsigned int)v242;
    v28 = (unsigned int)v242 + 1LL;
    if ( v28 > HIDWORD(v242) )
    {
      sub_2237220(&ptr, v243, v28, 8);
      v27 = (unsigned int)v242;
    }
    *((_QWORD *)ptr + v27) = "--gc-sections";
    LODWORD(v242) = v242 + 1;
  }
  else
  {
    do
    {
      v80 = *v25;
      if ( *(_QWORD *)(*v25 + 16LL) )
        v80 = *(_QWORD *)(*v25 + 16LL);
      ++v25;
      *(_BYTE *)(v80 + 44) |= 1u;
      if ( v25 == v26 )
        break;
      while ( !*v25 || !(unsigned __int8)sub_21B9810(*v25, 3236) )
      {
        if ( v26 == ++v25 )
          goto LABEL_34;
      }
    }
    while ( v26 != v25 );
  }
LABEL_34:
  sub_21B7F70(v9, &ptr, 2204);
  sub_112D940(*(_QWORD *)(a1 + 24), (__int64)v9, (__int64)&ptr, v29, v30);
  v188 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 600LL))(v10, v9);
  LODWORD(src) = 3056;
  v31 = sub_21B6DA0(v9, &src, 1);
  v32 = v9[1];
  v33 = (_QWORD *)(v32 + 8LL * (unsigned int)v31);
  v34 = (_QWORD *)(v32 + 8 * HIDWORD(v31));
  if ( v33 != v34 )
  {
    while ( !*v33 || !(unsigned __int8)sub_21B9810(*v33, 3056) )
    {
      if ( v34 == ++v33 )
        goto LABEL_38;
    }
    if ( v34 != v33 )
    {
      do
      {
        v81 = *v33;
        if ( *(_QWORD *)(*v33 + 16LL) )
          v81 = *(_QWORD *)(*v33 + 16LL);
        ++v33;
        *(_BYTE *)(v81 + 44) |= 1u;
        if ( v33 == v34 )
          break;
        while ( !*v33 || !(unsigned __int8)sub_21B9810(*v33, 3056) )
        {
          if ( v34 == ++v33 )
            goto LABEL_39;
        }
      }
      while ( v34 != v33 );
      goto LABEL_39;
    }
  }
LABEL_38:
  if ( sub_10DCD30((__int64)v9, 0xCA4u) || sub_10DCD30((__int64)v9, 0xBDDu) )
  {
LABEL_39:
    v187 = 0;
    goto LABEL_40;
  }
  if ( !n )
  {
LABEL_271:
    sub_FC70B0((__int64)&src, *(_QWORD *)v186, 0, 539);
    sub_AEA040((__int64)&src);
    goto LABEL_39;
  }
  if ( !v197 )
  {
    sub_FC70B0((__int64)&src, *(_QWORD *)v186, 0, 535);
    sub_AEC220((unsigned __int8 **)&src, s2, n);
    sub_AEA040((__int64)&src);
    goto LABEL_271;
  }
  v187 = v223;
  if ( !v223 )
  {
    sub_FC70B0((__int64)&src, *(_QWORD *)v186, 0, 536);
    sub_AEA040((__int64)&src);
    goto LABEL_271;
  }
  v162 = n;
  v163 = &off_2BA9C40;
  v212 = s2;
  do
  {
    if ( (char *)v162 == v163[1] && !memcmp(*v163, v212, v162) )
    {
      v164 = v163[2];
      v165 = v163[3];
      v218[0] = v219;
      sub_1179C40(v218, v164, (__int64)&v165[(_QWORD)v164]);
      goto LABEL_345;
    }
    v163 += 7;
  }
  while ( &unk_2BAEB70 != (_UNKNOWN *)v163 );
  v218[0] = v219;
  v181 = j__strlen(&byte_22F0C30);
  sub_1179C40(v218, &byte_22F0C30, (__int64)(&byte_22F0C30 + v181));
LABEL_345:
  v238.m128i_i64[0] = (__int64)v218;
  v232.m128i_i64[0] = (__int64)"/lib/";
  v234 = 259;
  v227 = 260;
  v224[0].m128i_i64[0] = (__int64)"-L";
  v226[0].m128i_i64[0] = (__int64)&v220;
  v225 = 259;
  v240 = 260;
  sub_A41580(&v228, v224, v226, v166, (__int64)"-L", v167);
  sub_A41580(&v235, &v228, &v232, (__int64)&v232, v168, v169);
  sub_A41580((__m128i *)&src, &v235, &v238, v170, v171, v172);
  v173 = sub_10DA6C0((__int64)v9, (__int64)&src);
  sub_10DC5D0((__int64)&ptr, v173);
  if ( v188 == 1 )
  {
    v240 = 260;
    v238.m128i_i64[0] = (__int64)v218;
    v232.m128i_i64[0] = (__int64)"/";
    v234 = 259;
    v175 = v10[623];
    v176 = v10[624];
    v228.m128i_i64[0] = (__int64)"-L";
    v229 = v175;
    v230 = v176;
    v231 = 1283;
    sub_A41580(&v235, &v228, &v232, (__int64)&v232, (__int64)"-L", v174);
    sub_A41580((__m128i *)&src, &v235, &v238, v177, v178, v179);
    v180 = sub_10DA6C0((__int64)v9, (__int64)&src);
    sub_10DC5D0((__int64)&ptr, v180);
  }
  if ( v218[0] != v219 )
    operator delete(v218[0]);
LABEL_40:
  LODWORD(src) = 3236;
  v35 = sub_21B6DA0(v9, &src, 1);
  v36 = v9[1];
  v37 = (_QWORD *)(v36 + 8LL * (unsigned int)v35);
  v38 = (_QWORD *)(v36 + 8 * HIDWORD(v35));
  if ( v37 == v38 )
    goto LABEL_44;
  while ( !*v37 || !(unsigned __int8)sub_21B9810(*v37, 3236) )
  {
    if ( v38 == ++v37 )
      goto LABEL_44;
  }
  if ( v38 == v37 )
  {
LABEL_44:
    if ( v198 )
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      src = &v245[16];
      v235.m128i_i64[0] = v210;
      v238.m128i_i64[0] = (__int64)"--defsym=__DATA_REGION_ORIGIN__=0x";
      v239.m128i_i64[0] = (__int64)&v235;
      v123 = *v9;
      v240 = 3843;
      v124 = *(__int64 (__fastcall **)(_QWORD *, void *, _QWORD))(v123 + 16);
      *(__m128 *)v245 = si128;
      sub_22538C0(&v238, &src);
      v125 = v124(v9, src, *(_QWORD *)v245);
      if ( src != &v245[16] )
        free(src);
      v126 = (unsigned int)v242;
      v127 = (unsigned int)v242 + 1LL;
      if ( v127 > HIDWORD(v242) )
      {
        sub_2237220(&ptr, v243, v127, 8);
        v126 = (unsigned int)v242;
      }
      *((_QWORD *)ptr + v126) = v125;
      LODWORD(v242) = v242 + 1;
      goto LABEL_78;
    }
    sub_FC70B0((__int64)&src, *(_QWORD *)v186, 0, 537);
    v39 = (unsigned __int8 *)src;
    v40 = (__int8 *)s2;
    v41 = n;
    if ( !src )
    {
      v149 = *(_QWORD *)v245;
      v150 = *(_DWORD *)(*(_QWORD *)v245 + 14976LL);
      if ( v150 )
      {
        v152 = (unsigned int)(v150 - 1);
        *(_DWORD *)(*(_QWORD *)v245 + 14976LL) = v152;
        v39 = *(unsigned __int8 **)(v149 + 8 * v152 + 14848);
        v153 = *((unsigned int *)v39 + 134);
        *v39 = 0;
        v154 = *((_QWORD *)v39 + 66);
        *((_DWORD *)v39 + 106) = 0;
        v155 = v154 + (v153 << 6);
        if ( v154 != v155 )
        {
          v211 = v9;
          v156 = v155;
          v157 = v154;
          do
          {
            while ( 1 )
            {
              v156 -= 64;
              v158 = *(void **)(v156 + 24);
              if ( v158 == (void *)(v156 + 40) )
                break;
              operator delete(v158);
              if ( v157 == v156 )
                goto LABEL_320;
            }
          }
          while ( v157 != v156 );
LABEL_320:
          v9 = v211;
          p_src = &src;
        }
        *((_DWORD *)v39 + 134) = 0;
      }
      else
      {
        v204 = (__int8 *)s2;
        v39 = (unsigned __int8 *)operator new(0x3A0u);
        *v39 = 0;
        *((_QWORD *)v39 + 12) = v39 + 112;
        *((_QWORD *)v39 + 16) = v39 + 144;
        *((_QWORD *)v39 + 20) = v39 + 176;
        *((_QWORD *)v39 + 24) = v39 + 208;
        *((_QWORD *)v39 + 28) = v39 + 240;
        *((_QWORD *)v39 + 32) = v39 + 272;
        *((_QWORD *)v39 + 36) = v39 + 304;
        *((_QWORD *)v39 + 40) = v39 + 336;
        *((_QWORD *)v39 + 44) = v39 + 368;
        *((_QWORD *)v39 + 48) = v39 + 400;
        *((_QWORD *)v39 + 52) = v39 + 432;
        *((_QWORD *)v39 + 13) = 0;
        v39[112] = 0;
        *((_QWORD *)v39 + 17) = 0;
        v39[144] = 0;
        *((_QWORD *)v39 + 21) = 0;
        v39[176] = 0;
        *((_QWORD *)v39 + 25) = 0;
        v39[208] = 0;
        *((_QWORD *)v39 + 29) = 0;
        v39[240] = 0;
        *((_QWORD *)v39 + 33) = 0;
        v39[272] = 0;
        *((_QWORD *)v39 + 37) = 0;
        v39[304] = 0;
        *((_QWORD *)v39 + 41) = 0;
        v39[336] = 0;
        *((_QWORD *)v39 + 45) = 0;
        v39[368] = 0;
        *((_QWORD *)v39 + 49) = 0;
        v39[400] = 0;
        *((_QWORD *)v39 + 53) = 0x800000000LL;
        v40 = v204;
        *((_QWORD *)v39 + 66) = v39 + 544;
        *((_QWORD *)v39 + 67) = 0x600000000LL;
      }
      src = v39;
    }
    v39[*v39 + 1] = 0;
    v238.m128i_i64[0] = (__int64)&v239;
    if ( &v40[v41] && !v40 )
      goto LABEL_351;
    if ( (unsigned __int64)v41 > 0xF )
    {
      if ( v41 < 0 )
        goto LABEL_352;
      v42 = (__m128i *)operator new(v41 + 1);
      v239.m128i_i64[0] = v41;
      v238.m128i_i64[0] = (__int64)v42;
    }
    else
    {
      if ( v41 == 1 )
      {
        v239.m128i_i8[0] = *v40;
        v42 = &v239;
        goto LABEL_51;
      }
      v42 = &v239;
      if ( !v41 )
      {
LABEL_51:
        v238.m128i_i64[1] = v41;
        v42->m128i_i8[v41] = 0;
        v43 = src;
        v44 = *(unsigned __int8 *)src;
        *(_BYTE *)src = v44 + 1;
        v45 = (unsigned __int8)v44;
        v46 = 4 * (v44 + 3);
        v47 = (__m128i **)&v43[v46];
        v48 = (__m128i *)v43[v46];
        if ( (__m128i *)v238.m128i_i64[0] == &v239 )
        {
          v148 = v238.m128i_i64[1];
          if ( v238.m128i_i64[1] )
          {
            if ( v238.m128i_i64[1] == 1 )
              v48->m128i_i8[0] = v239.m128i_i8[0];
            else
              memcpy(v48, (const void *)v238.m128i_i64[0], v238.m128i_u64[1]);
            v148 = v238.m128i_i64[1];
            v48 = *v47;
          }
          v47[1] = (__m128i *)v148;
          v48->m128i_i8[v148] = 0;
          v48 = (__m128i *)v238.m128i_i64[0];
        }
        else
        {
          if ( v48 == (__m128i *)&v43[v46 + 2] )
          {
            *(__m128i *)v47 = v238;
            v47[2] = (__m128i *)v239.m128i_i64[0];
          }
          else
          {
            v49 = v43[4 * v45 + 14];
            *(__m128i *)v47 = v238;
            v47[2] = (__m128i *)v239.m128i_i64[0];
            if ( v48 )
            {
              v238.m128i_i64[0] = (__int64)v48;
              v239.m128i_i64[0] = v49;
              goto LABEL_55;
            }
          }
          v48 = &v239;
          v238.m128i_i64[0] = (__int64)&v239;
        }
LABEL_55:
        v238.m128i_i64[1] = 0;
        v48->m128i_i8[0] = 0;
        if ( (__m128i *)v238.m128i_i64[0] != &v239 )
          operator delete((void *)v238.m128i_i64[0]);
        if ( (_BYTE)v248 )
        {
          sub_FC7790(*(__int64 *)&v245[8], (__int64 *)&src, SHIBYTE(v248));
          *(_QWORD *)&v245[8] = 0;
          v248 = 0;
        }
        if ( v246 != &v247 )
          operator delete(v246);
        v50 = (void **)src;
        if ( src )
        {
          v51 = *(_QWORD *)v245;
          if ( *(_QWORD *)v245 )
          {
            if ( (unsigned __int64)src >= *(_QWORD *)v245 && (unsigned __int64)src <= *(_QWORD *)v245 + 14848LL )
            {
              v151 = *(unsigned int *)(*(_QWORD *)v245 + 14976LL);
              *(_DWORD *)(*(_QWORD *)v245 + 14976LL) = v151 + 1;
              *(_QWORD *)(v51 + 8 * v151 + 14848) = v50;
            }
            else
            {
              v52 = *((void ***)src + 66);
              v53 = &v52[8 * (unsigned __int64)*((unsigned int *)src + 134)];
              if ( v52 != v53 )
              {
                v54 = v9;
                v55 = *((void ***)src + 66);
                do
                {
                  while ( 1 )
                  {
                    v53 -= 8;
                    v56 = (void **)v53[3];
                    if ( v56 == v53 + 5 )
                      break;
                    operator delete(v56);
                    if ( v55 == v53 )
                      goto LABEL_69;
                  }
                }
                while ( v55 != v53 );
LABEL_69:
                v9 = v54;
                v53 = (void **)v50[66];
                p_src = &src;
              }
              if ( v53 != v50 + 68 )
                free(v53);
              v57 = (void **)v50[52];
              if ( v57 != v50 + 54 )
                free(v57);
              v58 = v50 + 48;
              v199 = v50 + 8;
              do
              {
                while ( *v58 != v58 + 2 )
                {
                  operator delete(*v58);
                  v58 -= 4;
                  if ( v58 == v199 )
                    goto LABEL_77;
                }
                v58 -= 4;
              }
              while ( v199 != v58 );
LABEL_77:
              operator delete(v50, 0x3A0u);
            }
          }
        }
LABEL_78:
        v59 = *(_DWORD *)(v186 + 40);
        if ( v59 )
          goto LABEL_152;
LABEL_79:
        if ( v187 )
          goto LABEL_153;
        goto LABEL_80;
      }
    }
    memcpy(v42, v40, v41);
    v42 = (__m128i *)v238.m128i_i64[0];
    goto LABEL_51;
  }
LABEL_145:
  v82 = *v37;
  if ( *(_QWORD *)(*v37 + 16LL) )
    v82 = *(_QWORD *)(*v37 + 16LL);
  ++v37;
  *(_BYTE *)(v82 + 44) |= 1u;
  if ( v37 == v38 )
    goto LABEL_78;
  do
  {
    if ( *v37 && (unsigned __int8)sub_21B9810(*v37, 3236) )
    {
      if ( v38 == v37 )
        goto LABEL_78;
      goto LABEL_145;
    }
    ++v37;
  }
  while ( v38 != v37 );
  v59 = *(_DWORD *)(v186 + 40);
  if ( !v59 )
    goto LABEL_79;
LABEL_152:
  sub_11C8A90(v10, v9, &ptr, a4, a5, v59 == 2);
  if ( !v187 )
  {
LABEL_80:
    sub_11C3660(*(_QWORD *)(a1 + 24), a5, v9, &ptr, a3);
    goto LABEL_81;
  }
LABEL_153:
  v83 = (unsigned int)v242;
  v84 = (unsigned int)v242 + 1LL;
  if ( v84 > HIDWORD(v242) )
  {
    sub_2237220(&ptr, v243, v84, 8);
    v83 = (unsigned int)v242;
  }
  *((_QWORD *)ptr + v83) = "--start-group";
  v85 = n;
  src = &v245[8];
  v86 = n + 6;
  v235.m128i_i64[0] = (__int64)&v236;
  strcpy(v236.m128i_i8, "-l:crt");
  LODWORD(v242) = v242 + 1;
  strcpy(&v245[8], ".o");
  *(_QWORD *)v245 = 2;
  v235.m128i_i64[1] = 6;
  if ( n + 6 > 0xF )
  {
    sub_998B30((__int64)&v235, 6u, 0, s2, n);
    v87 = (__m128i *)v235.m128i_i64[0];
  }
  else
  {
    v87 = &v236;
    if ( n )
    {
      if ( n == 1 )
        v236.m128i_i8[6] = *(_BYTE *)s2;
      else
        memcpy(&v236.m128i_u16[3], s2, n);
    }
  }
  v235.m128i_i64[1] = v86;
  v87->m128i_i8[v85 + 6] = 0;
  v88 = (__m128i *)v235.m128i_i64[0];
  v238.m128i_i64[0] = (__int64)&v239;
  if ( (__m128i *)v235.m128i_i64[0] == &v236 )
  {
    v89 = v235.m128i_u64[1];
    v91 = *(_QWORD *)v245;
    v88 = &v239;
    v90 = 15;
    a8 = _mm_load_si128(&v236);
    v235.m128i_i64[1] = 0;
    v238.m128i_i64[1] = v89;
    v92 = *(_QWORD *)v245 + v89;
    v239 = a8;
    v236.m128i_i8[0] = 0;
  }
  else
  {
    v89 = v235.m128i_u64[1];
    v90 = v236.m128i_i64[0];
    v235.m128i_i64[0] = (__int64)&v236;
    v91 = *(_QWORD *)v245;
    v238.m128i_i64[0] = (__int64)v88;
    v238.m128i_i64[1] = v235.m128i_i64[1];
    v235.m128i_i64[1] = 0;
    v92 = *(_QWORD *)v245 + v238.m128i_i64[1];
    v236.m128i_i8[0] = 0;
    v239.m128i_i64[0] = v90;
    if ( v88 == &v239 )
      v90 = 15;
  }
  if ( v90 >= v92 )
  {
    if ( v91 )
    {
      v117 = &v88->m128i_i8[v89];
      if ( v91 == 1 )
        *v117 = *(_BYTE *)src;
      else
        memcpy(v117, src, v91);
      v88 = (__m128i *)v238.m128i_i64[0];
    }
LABEL_165:
    v238.m128i_i64[1] = v92;
    v94 = &v238;
    v88->m128i_i8[v92] = 0;
  }
  else
  {
    if ( src == &v245[8] )
      v93 = 15;
    else
      v93 = *(_QWORD *)&v245[8];
    if ( v93 < v92 )
    {
      sub_998B30((__int64)&v238, v89, 0, src, v91);
      v88 = (__m128i *)v238.m128i_i64[0];
      goto LABEL_165;
    }
    v94 = (__m128i *)sub_99BDC0(&src, 0, 0, v88, v89);
  }
  v232.m128i_i64[0] = (__int64)&v233;
  if ( (__m128i *)v94->m128i_i64[0] == &v94[1] )
  {
    v233 = _mm_loadu_si128(v94 + 1);
  }
  else
  {
    v232.m128i_i64[0] = v94->m128i_i64[0];
    v233.m128i_i64[0] = v94[1].m128i_i64[0];
  }
  v232.m128i_i64[1] = v94->m128i_i64[1];
  v94->m128i_i64[0] = (__int64)v94[1].m128i_i64;
  v94->m128i_i64[1] = 0;
  v94[1].m128i_i8[0] = 0;
  if ( (__m128i *)v238.m128i_i64[0] != &v239 )
    operator delete((void *)v238.m128i_i64[0]);
  if ( (__m128i *)v235.m128i_i64[0] != &v236 )
    operator delete((void *)v235.m128i_i64[0]);
  if ( src != &v245[8] )
    operator delete(src);
  v95 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v9 + 16LL))(v9, v232.m128i_i64[0], v232.m128i_i64[1]);
  v96 = (unsigned int)v242;
  v97 = (unsigned int)v242 + 1LL;
  if ( v97 > HIDWORD(v242) )
  {
    v203 = (void *)v95;
    sub_2237220(&ptr, v243, v97, 8);
    v96 = (unsigned int)v242;
    v95 = (__int64)v203;
  }
  *((_QWORD *)ptr + v96) = v95;
  v98 = (unsigned int)(v242 + 1);
  LODWORD(v242) = v242 + 1;
  if ( v188 == 1 )
  {
    if ( v98 + 1 > (unsigned __int64)HIDWORD(v242) )
    {
      sub_2237220(&ptr, v243, v98 + 1, 8);
      v98 = (unsigned int)v242;
    }
    *((_QWORD *)ptr + v98) = "-lgcc";
    v98 = (unsigned int)(v242 + 1);
    LODWORD(v242) = v242 + 1;
  }
  if ( v98 + 1 > (unsigned __int64)HIDWORD(v242) )
  {
    sub_2237220(&ptr, v243, v98 + 1, 8);
    v98 = (unsigned int)v242;
  }
  *((_QWORD *)ptr + v98) = "-lm";
  LODWORD(v242) = v242 + 1;
  v99 = (unsigned int)v242;
  if ( (unsigned __int64)(unsigned int)v242 + 1 > HIDWORD(v242) )
  {
    sub_2237220(&ptr, v243, (unsigned int)v242 + 1LL, 8);
    v99 = (unsigned int)v242;
  }
  *((_QWORD *)ptr + v99) = "-lc";
  v100 = n;
  LODWORD(v242) = v242 + 1;
  v101 = s2;
  v102 = n + 2;
  v238.m128i_i64[0] = (__int64)&v239;
  strcpy(v239.m128i_i8, "-l");
  v238.m128i_i64[1] = 2;
  if ( n + 2 > 0xF )
  {
    v201 = (void *)(n + 2);
    sub_998B30((__int64)&v238, 2u, 0, s2, n);
    v103 = (__m128i *)v238.m128i_i64[0];
    v102 = (size_t)v201;
  }
  else
  {
    v103 = &v239;
    if ( n )
    {
      if ( n == 1 )
      {
        v239.m128i_i8[2] = *(_BYTE *)s2;
      }
      else
      {
        v200 = (void *)(n + 2);
        memcpy(&v239.m128i_i16[1], s2, n);
        v102 = (size_t)v200;
      }
    }
  }
  v238.m128i_i64[1] = v102;
  v103->m128i_i8[v100 + 2] = 0;
  v104 = (_BYTE *)v238.m128i_i64[0];
  src = &v245[8];
  if ( (__m128i *)v238.m128i_i64[0] == &v239 )
  {
    v104 = &v245[8];
    *(__m128i *)&v245[8] = _mm_load_si128(&v239);
  }
  else
  {
    src = (void *)v238.m128i_i64[0];
    *(_QWORD *)&v245[8] = v239.m128i_i64[0];
  }
  v105 = v238.m128i_i64[1];
  v239.m128i_i8[0] = 0;
  v238.m128i_i64[0] = (__int64)&v239;
  v106 = *v9;
  *(_QWORD *)v245 = v238.m128i_i64[1];
  v238.m128i_i64[1] = 0;
  v107 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64, void *))(v106 + 16))(v9, v104, v105, v101);
  v108 = (unsigned int)v242;
  v109 = (unsigned int)v242 + 1LL;
  if ( v109 > HIDWORD(v242) )
  {
    v202 = (void *)v107;
    sub_2237220(&ptr, v243, v109, 8);
    v108 = (unsigned int)v242;
    v107 = (__int64)v202;
  }
  *((_QWORD *)ptr + v108) = v107;
  LODWORD(v242) = v242 + 1;
  if ( src != &v245[8] )
    operator delete(src);
  if ( (__m128i *)v238.m128i_i64[0] != &v239 )
    operator delete((void *)v238.m128i_i64[0]);
  sub_11C3660(*(_QWORD *)(a1 + 24), a5, v9, &ptr, a3);
  if ( !v188 )
  {
    (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD *, char *, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 24)
                                                                                          + 304LL))(
      &v238,
      *(_QWORD *)(a1 + 24),
      v9,
      "builtins",
      8,
      1,
      0);
    LOWORD(v246) = 260;
    src = &v238;
    if ( !(unsigned int)sub_228C1E0(&src, 0) )
    {
      v132 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v9 + 16LL))(
               v9,
               v238.m128i_i64[0],
               v238.m128i_i64[1]);
      v133 = (unsigned int)v242;
      v134 = (unsigned int)v242 + 1LL;
      if ( v134 > HIDWORD(v242) )
      {
        v190 = v132;
        sub_2237220(&ptr, v243, v134, 8);
        v133 = (unsigned int)v242;
        v132 = v190;
      }
      *((_QWORD *)ptr + v133) = v132;
      LODWORD(v242) = v242 + 1;
    }
    if ( (__m128i *)v238.m128i_i64[0] != &v239 )
      operator delete((void *)v238.m128i_i64[0]);
  }
  v110 = (unsigned int)v242;
  v111 = (unsigned int)v242 + 1LL;
  if ( v111 > HIDWORD(v242) )
  {
    sub_2237220(&ptr, v243, v111, 8);
    v110 = (unsigned int)v242;
  }
  *((_QWORD *)ptr + v110) = "--end-group";
  LODWORD(v242) = v242 + 1;
  LODWORD(src) = 3349;
  v112 = sub_21B6DA0(v9, &src, 1);
  v113 = v9[1];
  v114 = (_QWORD *)(v113 + 8LL * (unsigned int)v112);
  v115 = (_QWORD *)(v113 + 8 * HIDWORD(v112));
  if ( v114 == v115 )
    goto LABEL_198;
  while ( !*v114 || !(unsigned __int8)sub_21B9810(*v114, 3349) )
  {
    if ( v115 == ++v114 )
      goto LABEL_198;
  }
  if ( v115 == v114 )
  {
LABEL_198:
    if ( sub_9983C0(v216.m128i_i64, "avr-ld", 0, 6u) != -1 )
      goto LABEL_199;
    v135 = v220;
    v136 = v221;
    v235.m128i_i64[0] = (__int64)&v236;
    if ( !((char *)v220 + v221) || v220 )
    {
      if ( v221 <= 0xF )
      {
        if ( v221 == 1 )
        {
          v236.m128i_i8[0] = *(_BYTE *)v220;
          v137 = &v236;
LABEL_277:
          v235.m128i_i64[1] = v136;
          v137->m128i_i8[v136] = 0;
          v138 = v235.m128i_i64[1];
          if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v235.m128i_i64[1]) <= 0xE )
            goto LABEL_353;
          v139 = v235.m128i_i64[1] + 15;
          v140 = (__m128i *)v235.m128i_i64[0] == &v236 ? 15LL : v236.m128i_i64[0];
          if ( v139 > v140 )
          {
            v206 = (void *)(v235.m128i_i64[1] + 15);
            v194 = v235.m128i_i64[1];
            sub_998B30((__int64)&v235, v235.m128i_u64[1], 0, "/lib/ldscripts/", 0xFu);
            v139 = (unsigned __int64)v206;
            v138 = v194;
          }
          else
          {
            qmemcpy((void *)(v235.m128i_i64[1] + v235.m128i_i64[0]), "/lib/ldscripts/", 15);
          }
          v235.m128i_i64[1] = v139;
          *(_BYTE *)(v235.m128i_i64[0] + v138 + 15) = 0;
          if ( 0x7FFFFFFFFFFFFFFFLL - v235.m128i_i64[1] < v208 )
            goto LABEL_353;
          v141 = v235.m128i_i64[1] + v208;
          v142 = v235.m128i_i64[0];
          v143 = (__m128i *)v235.m128i_i64[0] == &v236 ? 15LL : v236.m128i_i64[0];
          if ( v141 > v143 )
          {
            v192 = v235.m128i_i64[1] + v208;
            sub_998B30((__int64)&v235, v235.m128i_u64[1], 0, v209, v208);
            v142 = v235.m128i_i64[0];
            v141 = v192;
          }
          else if ( v208 )
          {
            v144 = (char *)(v235.m128i_i64[0] + v235.m128i_i64[1]);
            if ( v208 == 1 )
            {
              *v144 = *v209;
              v142 = v235.m128i_i64[0];
            }
            else
            {
              v189 = v235.m128i_i64[1] + v208;
              memcpy(v144, v209, v208);
              v142 = v235.m128i_i64[0];
              v141 = v189;
            }
          }
          v235.m128i_i64[1] = v141;
          *(_BYTE *)(v142 + v141) = 0;
          v145 = v235.m128i_i64[1];
          if ( v235.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL || v235.m128i_i64[1] == 9223372036854775806LL )
LABEL_353:
            std::__throw_length_error("basic_string::append");
          v146 = v235.m128i_i64[1] + 2;
          if ( (__m128i *)v235.m128i_i64[0] == &v236 )
            v147 = 15;
          else
            v147 = v236.m128i_i64[0];
          if ( v146 > v147 )
          {
            v205 = (void *)(v235.m128i_i64[1] + 2);
            v193 = v235.m128i_i64[1];
            sub_998B30((__int64)&v235, v235.m128i_u64[1], 0, ".x", 2u);
            v146 = (unsigned __int64)v205;
            v145 = v193;
          }
          else
          {
            *(_WORD *)(v235.m128i_i64[0] + v235.m128i_i64[1]) = 30766;
          }
          v235.m128i_i64[1] = v146;
          *(_BYTE *)(v235.m128i_i64[0] + v145 + 2) = 0;
          LOWORD(v246) = 260;
          src = &v235;
          if ( !(unsigned int)sub_228C1E0(&src, 0) )
          {
            sub_C05100((__int64)&v238, "-T", (__int64)&v235);
            LOWORD(v246) = 260;
            src = &v238;
            v159 = sub_10DA6C0((__int64)v9, (__int64)&src);
            v160 = (unsigned int)v242;
            v161 = (unsigned int)v242 + 1LL;
            if ( v161 > HIDWORD(v242) )
            {
              v196 = v159;
              sub_2237220(&ptr, v243, v161, 8);
              v160 = (unsigned int)v242;
              v159 = v196;
            }
            *((_QWORD *)ptr + v160) = v159;
            LODWORD(v242) = v242 + 1;
            if ( (__m128i *)v238.m128i_i64[0] != &v239 )
              operator delete((void *)v238.m128i_i64[0]);
          }
          if ( (__m128i *)v235.m128i_i64[0] != &v236 )
            operator delete((void *)v235.m128i_i64[0]);
          goto LABEL_200;
        }
        v137 = &v236;
        if ( !v221 )
          goto LABEL_277;
LABEL_325:
        v191 = v136;
        memcpy(v137, v135, v136);
        v137 = (__m128i *)v235.m128i_i64[0];
        v136 = v191;
        goto LABEL_277;
      }
      v207 = v220;
      if ( (v221 & 0x8000000000000000LL) == 0LL )
      {
        v195 = v221;
        v137 = (__m128i *)operator new(v221 + 1);
        v136 = v195;
        v135 = v207;
        v235.m128i_i64[0] = (__int64)v137;
        v236.m128i_i64[0] = v195;
        goto LABEL_325;
      }
LABEL_352:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_351:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  do
  {
    v116 = *v114;
    if ( *(_QWORD *)(*v114 + 16LL) )
      v116 = *(_QWORD *)(*v114 + 16LL);
    ++v114;
    *(_BYTE *)(v116 + 44) |= 1u;
    if ( v114 == v115 )
      break;
    while ( !*v114 || !(unsigned __int8)sub_21B9810(*v114, 3349) )
    {
      if ( v115 == ++v114 )
        goto LABEL_199;
    }
  }
  while ( v114 != v115 );
LABEL_199:
  sub_21B7F70(v9, &ptr, 3349);
LABEL_200:
  if ( (unsigned __int8)sub_21B7850(v9, 2839, 2700, 1) )
  {
    v128 = (unsigned int)v242;
    v129 = (unsigned int)v242 + 1LL;
    if ( v129 > HIDWORD(v242) )
    {
      sub_2237220(&ptr, v243, v129, 8);
      v128 = (unsigned int)v242;
    }
    *((_QWORD *)ptr + v128) = "--relax";
    LODWORD(v242) = v242 + 1;
  }
  if ( (__m128i *)v232.m128i_i64[0] != &v233 )
    operator delete((void *)v232.m128i_i64[0]);
LABEL_81:
  if ( sub_9983C0(v216.m128i_i64, "avr-ld", 0, 6u) != -1 && v197 )
  {
    v237 = 261;
    v232.m128i_i64[0] = (__int64)&v233;
    v118 = *v9;
    strcpy(v233.m128i_i8, "-m");
    v238.m128i_i64[0] = (__int64)&v232;
    v235.m128i_i64[0] = (__int64)v209;
    v235.m128i_i64[1] = v208;
    v239.m128i_i64[0] = (__int64)v209;
    v239.m128i_i64[1] = v208;
    v240 = 1284;
    src = &v245[16];
    v119 = *(__int64 (__fastcall **)(_QWORD *, void *, _QWORD))(v118 + 16);
    v232.m128i_i64[1] = 2;
    *(_QWORD *)v245 = 0;
    *(_QWORD *)&v245[8] = 256;
    sub_22538C0(&v238, &src);
    v120 = v119(v9, src, *(_QWORD *)v245);
    if ( src != &v245[16] )
      free(src);
    v121 = (unsigned int)v242;
    v122 = (unsigned int)v242 + 1LL;
    if ( v122 > HIDWORD(v242) )
    {
      sub_2237220(&ptr, v243, v122, 8);
      v121 = (unsigned int)v242;
    }
    *((_QWORD *)ptr + v121) = v120;
    LODWORD(v242) = v242 + 1;
    if ( (__m128i *)v232.m128i_i64[0] != &v233 )
      operator delete((void *)v232.m128i_i64[0]);
  }
  v60 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v9 + 16LL))(v9, v216.m128i_i64[0], v216.m128i_i64[1]);
  v61 = *(const __m128i **)a5;
  v62 = *(unsigned int *)(a5 + 8);
  v63 = (void *)operator new(0x208u);
  sub_1106AE0((__int64)v63, a3, a1, 0x100000000LL, (__int64)"@", v60, (__int64)&ptr, v61, v62, (__int64)a4, 1, 0);
  src = v63;
  v64 = *(unsigned int *)(a2 + 160);
  v65 = v64 + 1;
  v66 = *(_DWORD *)(a2 + 160);
  if ( v64 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v130 = *(_QWORD *)(a2 + 152);
    v131 = a2 + 152;
    if ( v130 > (unsigned __int64)&src || (unsigned __int64)&src >= v130 + 8 * v64 )
    {
      sub_11673D0(v131, v65, si128, *(double *)a8.m128i_i64);
      v64 = *(unsigned int *)(a2 + 160);
      v67 = *(_QWORD *)(a2 + 152);
      v66 = *(_DWORD *)(a2 + 160);
    }
    else
    {
      sub_11673D0(v131, v65, si128, *(double *)a8.m128i_i64);
      v67 = *(_QWORD *)(a2 + 152);
      v64 = *(unsigned int *)(a2 + 160);
      p_src = (void **)&v245[v67 - 8 - v130];
      v66 = *(_DWORD *)(a2 + 160);
    }
  }
  else
  {
    v67 = *(_QWORD *)(a2 + 152);
  }
  v68 = *p_src;
  *p_src = nullptr;
  *(_QWORD *)(v67 + 8 * v64) = v68;
  v69 = src;
  *(_DWORD *)(a2 + 160) = v66 + 1;
  if ( v69 )
  {
    v70 = *(void (__fastcall **)(_QWORD *))(*v69 + 8LL);
    if ( v70 == sub_10D4290 )
    {
      v71 = v69[58];
      v72 = v69[57];
      *v69 = &off_2BA8F30;
      if ( v71 != v72 )
      {
        do
        {
          if ( *(_BYTE *)(v72 + 32) && *(_QWORD *)v72 != v72 + 16 )
            operator delete(*(void **)v72);
          v72 += 40;
        }
        while ( v71 != v72 );
        v72 = v69[57];
      }
      if ( v72 )
        operator delete((void *)v72);
      v73 = (void *)v69[54];
      if ( v73 )
        operator delete(v73);
      v74 = (_QWORD *)v69[50];
      if ( v74 != v69 + 52 )
        operator delete(v74);
      v75 = (_QWORD *)v69[32];
      if ( v75 != v69 + 34 )
        free(v75);
      v76 = (void **)v69[29];
      v77 = (void **)v69[28];
      if ( v76 != v77 )
      {
        do
        {
          while ( *v77 != v77 + 2 )
          {
            operator delete(*v77);
            v77 += 4;
            if ( v76 == v77 )
              goto LABEL_104;
          }
          v77 += 4;
        }
        while ( v76 != v77 );
LABEL_104:
        v77 = (void **)v69[28];
      }
      if ( v77 )
        operator delete(v77);
      v78 = (void *)v69[25];
      if ( v78 )
        operator delete(v78);
      v79 = (_QWORD *)v69[7];
      if ( v79 != v69 + 9 )
        free(v79);
      operator delete(v69, 0x208u);
    }
    else
    {
      v70(v69);
    }
  }
  if ( ptr != v243 )
    free(ptr);
  if ( (__int64 *)v216.m128i_i64[0] != &v217 )
    operator delete((void *)v216.m128i_i64[0]);
  if ( v223 && v220 != &v222 )
    operator delete(v220);
  if ( s2 != &v215 )
    operator delete(s2);
}
