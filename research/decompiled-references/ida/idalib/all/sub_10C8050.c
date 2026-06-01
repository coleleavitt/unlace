__int64 __fastcall sub_10C8050(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t a5, void **a6)
{
  __int64 v6; // r14
  bool v7; // zf
  __m128i *v8; // rbp
  __m128i *p_src; // r13
  __int64 v10; // rax
  size_t v11; // rbx
  char *v12; // r12
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // r15d
  __int64 *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  size_t v23; // rbx
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rbx
  char v27; // r15
  size_t v28; // rbx
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // rbx
  size_t v32; // rbx
  unsigned int v33; // eax
  int v34; // eax
  __int64 v35; // rbx
  void **v36; // rbx
  void **v37; // r12
  void *v38; // rdx
  unsigned __int64 v39; // rdx
  int v40; // eax
  _QWORD *v41; // rdi
  __m128i *v42; // rsi
  __m128i *v43; // rsi
  __m128i *v44; // rsi
  __m128i *v45; // rbx
  __m128i *v46; // rbp
  const __m128i *v47; // r12
  unsigned __int64 v48; // rdx
  const __m128i *v49; // rax
  __int64 *v50; // rdi
  void *v51; // rdi
  __int64 *v52; // r15
  void **v53; // rbp
  unsigned __int64 v54; // rax
  __m128i *v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  void **v58; // r12
  __m128i *v59; // rax
  unsigned __int8 *v60; // rax
  _BYTE *v61; // rsi
  void **v62; // rdx
  __int64 v63; // rcx
  _QWORD *v64; // rdx
  __m128i *v65; // r9
  __int64 v66; // r8
  __int64 v67; // rax
  __m128i *v68; // rcx
  __m128i *v69; // rdi
  __int64 v70; // rax
  void **v71; // rbp
  size_t v72; // rax
  void **v73; // r15
  void **v74; // r12
  void **v75; // rdi
  void **v76; // rdi
  void **v77; // r15
  void **v78; // r12
  unsigned int v79; // r12d
  size_t v80; // rbx
  unsigned int v81; // eax
  int v82; // eax
  __int64 v83; // rbx
  size_t v84; // rbx
  unsigned int v85; // eax
  int v86; // eax
  __int64 v87; // rbx
  size_t v88; // rbx
  unsigned int v89; // eax
  int v90; // eax
  __int64 v91; // rbx
  size_t v92; // rbx
  unsigned int v93; // eax
  int v94; // eax
  __int64 v95; // rbx
  void **v96; // rbp
  void **v97; // rbx
  void **v98; // rbp
  void **v99; // rbx
  _WORD *v101; // rax
  _QWORD *v102; // rdi
  char *v103; // rbx
  unsigned __int64 v104; // rax
  unsigned __int8 *v105; // rbx
  _BYTE *v106; // rsi
  void **v107; // rbp
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  void **v112; // rbp
  __int64 *v113; // rdi
  __int64 v114; // rax
  void **v115; // rbx
  __int64 v116; // rax
  void **v117; // r12
  void **v118; // rbp
  void **v119; // rdi
  void **v120; // rdi
  void **v121; // r12
  void **v122; // rbp
  const char *v123; // rsi
  const __m128i *v124; // rsi
  unsigned __int64 v125; // rcx
  bool v126; // cf
  unsigned __int64 v127; // rdx
  unsigned __int64 v128; // rbx
  void **v129; // rax
  const __m128i *v130; // rax
  unsigned __int64 v131; // rcx
  __m128i *v132; // rdx
  __m128i *v133; // rdi
  const __m128i *v134; // rsi
  __m128i *v135; // rdx
  size_t v136; // rax
  size_t v137; // rbx
  unsigned int v138; // eax
  unsigned int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  unsigned int v143; // r13d
  __int64 *v144; // r12
  void *v145; // rax
  __int64 v146; // rbp
  __int64 *v147; // rsi
  void ***v148; // rbx
  void ***v149; // r12
  __m128i *v150; // rbx
  void **v151; // rdx
  void ***v152; // rdi
  const __m128i *v153; // r12
  void **v154; // r8
  unsigned __int64 v155; // rbp
  __m128i *v156; // rbx
  const __m128i *v157; // rax
  __m128i *v158; // rdx
  __m128i *v159; // rsi
  const __m128i *v160; // rcx
  void **v161; // rbp
  void **v162; // r12
  __m128 v163; // xmm0
  char *v164; // r15
  signed __int64 v165; // rdx
  signed __int64 v166; // rax
  char *v167; // r12
  __m128i *v168; // rax
  char *v169; // r13
  __m128i *v170; // r15
  char *v171; // rbp
  __m128i *v172; // rax
  size_t v173; // rax
  char *v174; // r15
  signed __int64 v175; // rdx
  signed __int64 v176; // rax
  char *v177; // r12
  __m128i *v178; // rax
  char *v179; // r13
  __m128i *v180; // r15
  char *v181; // rbp
  __m128i *v182; // rax
  size_t v183; // rax
  __m128i *v184; // r15
  signed __int64 v185; // r13
  signed __int64 v186; // rax
  char *v187; // r13
  __m128i *v188; // rbp
  size_t v189; // rax
  char *v190; // r15
  signed __int64 v191; // rdx
  signed __int64 v192; // rax
  char *v193; // r12
  __m128i *v194; // rax
  char *v195; // r13
  __m128i *v196; // r15
  char *v197; // rbp
  __m128i *v198; // rax
  size_t v199; // rax
  __int64 v200; // rdx
  size_t v201; // rcx
  int v202; // eax
  size_t v203; // rdx
  __m128i *v204; // rax
  __int64 v205; // rdx
  __m128i *v206; // rax
  __m128i *v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rax
  __int64 v210; // rcx
  __m128i *v211; // rdi
  __m128i *v212; // rcx
  void **v213; // r12
  __m128i *v214; // rbx
  unsigned __int8 *v215; // r13
  unsigned __int64 *v216; // rdi
  __int64 v217; // rdx
  int v218; // eax
  __int64 v219; // rax
  __int64 v220; // rax
  __int64 v221; // r15
  __int64 v222; // rax
  unsigned __int8 *v223; // r13
  __int64 v224; // rbx
  void *v225; // rdi
  int v226; // [rsp+8h] [rbp-340h]
  unsigned __int8 v227; // [rsp+8h] [rbp-340h]
  char *v228; // [rsp+8h] [rbp-340h]
  char *v229; // [rsp+8h] [rbp-340h]
  char *v230; // [rsp+8h] [rbp-340h]
  _BYTE *v231; // [rsp+8h] [rbp-340h]
  __m128i *v232; // [rsp+10h] [rbp-338h] BYREF
  void **v233; // [rsp+18h] [rbp-330h]
  void **v234; // [rsp+20h] [rbp-328h]
  __int64 **p_ptr; // [rsp+28h] [rbp-320h]
  void *s2; // [rsp+30h] [rbp-318h]
  size_t v237; // [rsp+38h] [rbp-310h]
  void **v238; // [rsp+40h] [rbp-308h]
  __int64 v239; // [rsp+48h] [rbp-300h]
  void **v240; // [rsp+50h] [rbp-2F8h]
  void **v241; // [rsp+58h] [rbp-2F0h]
  __int64 v242; // [rsp+60h] [rbp-2E8h]
  void ***v243; // [rsp+68h] [rbp-2E0h]
  const __m128i *v244; // [rsp+70h] [rbp-2D8h]
  void **v245; // [rsp+78h] [rbp-2D0h]
  void *v246[2]; // [rsp+80h] [rbp-2C8h] BYREF
  void **v247; // [rsp+90h] [rbp-2B8h]
  void *v248[2]; // [rsp+A0h] [rbp-2A8h] BYREF
  void *v249; // [rsp+B0h] [rbp-298h]
  void *v250; // [rsp+C0h] [rbp-288h] BYREF
  size_t v251; // [rsp+C8h] [rbp-280h]
  char v252; // [rsp+D0h] [rbp-278h] BYREF
  void *v253; // [rsp+E0h] [rbp-268h] BYREF
  __int64 v254; // [rsp+E8h] [rbp-260h]
  char v255; // [rsp+F0h] [rbp-258h] BYREF
  void *v256[2]; // [rsp+100h] [rbp-248h] BYREF
  __int64 v257; // [rsp+110h] [rbp-238h] BYREF
  void *v258; // [rsp+120h] [rbp-228h] BYREF
  __int64 v259; // [rsp+128h] [rbp-220h]
  __m128i v260; // [rsp+130h] [rbp-218h] BYREF
  void *v261; // [rsp+140h] [rbp-208h] BYREF
  void **v262; // [rsp+148h] [rbp-200h]
  __m128i v263; // [rsp+150h] [rbp-1F8h] BYREF
  void *v264; // [rsp+160h] [rbp-1E8h] BYREF
  size_t v265; // [rsp+168h] [rbp-1E0h]
  __int64 v266[2]; // [rsp+170h] [rbp-1D8h] BYREF
  void *v267; // [rsp+180h] [rbp-1C8h]
  __int16 v268; // [rsp+1A0h] [rbp-1A8h]
  __m128i src; // [rsp+1B0h] [rbp-198h] BYREF
  __m128i v270; // [rsp+1C0h] [rbp-188h] BYREF
  void *v271; // [rsp+1D0h] [rbp-178h]
  __int16 v272; // [rsp+1F0h] [rbp-158h]
  void *ptr; // [rsp+200h] [rbp-148h] BYREF
  __int64 v274; // [rsp+208h] [rbp-140h]

  v6 = a2;
  v7 = *(_DWORD *)(a1 + 248) == 38;
  v242 = a1;
  v239 = a3;
  s2 = a4;
  v237 = a5;
  v240 = a6;
  p_ptr = (__int64 **)&ptr;
  if ( v7 )
  {
    v137 = j__strlen("sse2");
    v138 = sub_2244B30("sse2", v137);
    v139 = sub_2244CB0(a2, "sse2", v137, v138);
    v143 = v139;
    v144 = (__int64 *)(*(_QWORD *)a2 + 8LL * v139);
    if ( *v144 )
    {
      if ( *v144 != -8 )
      {
        sub_10298F0(p_ptr, v144, 0);
        v145 = ptr;
LABEL_240:
        *(_BYTE *)(*(_QWORD *)v145 + 8LL) = 1;
        sub_22BECB0("sse2", v137);
        goto LABEL_2;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v146 = sub_22300B0(v137 + 17, 8, v139, v140, v141, v142);
    if ( v137 )
      memcpy((void *)(v146 + 16), "sse2", v137);
    *(_BYTE *)(v146 + v137 + 16) = 0;
    *(_QWORD *)v146 = v137;
    *(_BYTE *)(v146 + 8) = 0;
    *v144 = v146;
    ++*(_DWORD *)(a2 + 12);
    v147 = (__int64 *)(*(_QWORD *)a2 + 8LL * (unsigned int)sub_22450D0(a2, v143));
    p_ptr = (__int64 **)&ptr;
    sub_10298F0((__int64 **)&ptr, v147, 0);
    v145 = ptr;
    goto LABEL_240;
  }
LABEL_2:
  ptr = p_ptr + 2;
  v274 = 0x1000000000LL;
  sub_22BE580(s2, v237);
  v8 = (__m128i *)ptr;
  p_src = &src;
  v232 = (__m128i *)((char *)ptr + 16 * (unsigned int)v274);
  if ( v232 == ptr )
    goto LABEL_16;
  do
  {
    v11 = v8->m128i_u64[1];
    v12 = (char *)v8->m128i_i64[0];
    if ( v11 == 4 && *(_DWORD *)v12 == 879063923 )
    {
      v11 = 6;
      v12 = (char *)"sse4.2";
    }
    v13 = sub_2244B30(v12, v11);
    v14 = sub_2244CB0(v6, v12, v11, v13);
    v18 = v14;
    v19 = (__int64 *)(*(_QWORD *)v6 + 8LL * v14);
    if ( *v19 )
    {
      if ( *v19 != -8 )
      {
        sub_10298F0((__int64 **)&src, v19, 0);
        v10 = src.m128i_i64[0];
        goto LABEL_5;
      }
      --*(_DWORD *)(v6 + 16);
    }
    v20 = sub_22300B0(v11 + 17, 8, v14, v15, v16, v17);
    v21 = v20;
    if ( v11 )
    {
      v233 = (void **)v20;
      memcpy((void *)(v20 + 16), v12, v11);
      v21 = (__int64)v233;
    }
    *(_BYTE *)(v21 + v11 + 16) = 0;
    *(_QWORD *)v21 = v11;
    *(_BYTE *)(v21 + 8) = 0;
    *v19 = v21;
    ++*(_DWORD *)(v6 + 12);
    v22 = sub_22450D0(v6, v18);
    sub_10298F0((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * v22), 0);
    v10 = src.m128i_i64[0];
LABEL_5:
    ++v8;
    *(_BYTE *)(*(_QWORD *)v10 + 8LL) = 1;
    sub_22BECB0(v12, v11);
  }
  while ( v232 != v8 );
  p_src = &src;
LABEL_16:
  v247 = nullptr;
  *(_OWORD *)v246 = 0;
  *(_OWORD *)v248 = 0;
  v249 = nullptr;
  v23 = j__strlen("avx512f");
  v24 = sub_2244B30("avx512f", v23);
  v25 = sub_2244E60(v6, "avx512f", v23, v24);
  if ( v25 == -1 )
    sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
  else
    sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * v25), 1);
  v26 = src.m128i_i64[0];
  v27 = 0;
  sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
  if ( src.m128i_i64[0] != v26 )
    v27 = *(_BYTE *)(*(_QWORD *)v26 + 8LL);
  v28 = j__strlen("avx10.1-256");
  v29 = sub_2244B30("avx10.1-256", v28);
  v30 = sub_2244E60(v6, "avx10.1-256", v28, v29);
  if ( v30 == -1 )
    sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
  else
    sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * v30), 1);
  v31 = src.m128i_i64[0];
  sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
  LOBYTE(v234) = 0;
  if ( src.m128i_i64[0] != v31 )
    LOBYTE(v234) = *(_BYTE *)(*(_QWORD *)v31 + 8LL);
  v32 = j__strlen("avx10.1-512");
  v33 = sub_2244B30("avx10.1-512", v32);
  v34 = sub_2244E60(v6, "avx10.1-512", v32, v33);
  if ( v34 == -1 )
    sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
  else
    sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * v34), 1);
  v35 = src.m128i_i64[0];
  sub_EC0F90((__int64 **)&src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
  LOBYTE(v233) = 0;
  if ( src.m128i_i64[0] != v35 )
    LOBYTE(v233) = *(_BYTE *)(*(_QWORD *)v35 + 8LL);
  v251 = 0;
  v238 = &v250;
  v250 = &v252;
  v241 = &v253;
  v253 = &v255;
  v252 = 0;
  v36 = (void **)*v240;
  v37 = (void **)v240[1];
  v254 = 0;
  v255 = 0;
  v226 = -1;
  if ( v36 != v37 )
  {
    v240 = (void **)v6;
    v243 = (void ***)v248;
    while ( 1 )
    {
      while ( !sub_9B4AA0((__int64)v36, "+general-regs-only") )
      {
        src.m128i_i64[0] = (__int64)&v270;
        sub_10BB0C0(&src, "-x87", (__int64)"");
        v42 = (__m128i *)v246[1];
        if ( v246[1] == v247 )
        {
          sub_A82970((void ***)v246, (const __m128i *)v246[1], &src);
          if ( (__m128i *)src.m128i_i64[0] != &v270 )
            operator delete((void *)src.m128i_i64[0]);
        }
        else
        {
          *(_QWORD *)v246[1] = (char *)v246[1] + 16;
          if ( (__m128i *)src.m128i_i64[0] == &v270 )
          {
            v42[1] = _mm_load_si128(&v270);
          }
          else
          {
            v42->m128i_i64[0] = src.m128i_i64[0];
            v42[1].m128i_i64[0] = v270.m128i_i64[0];
          }
          v42->m128i_i64[1] = src.m128i_i64[1];
          v246[1] = (char *)v246[1] + 32;
        }
        src.m128i_i64[0] = (__int64)&v270;
        sub_10BB0C0(&src, "-mmx", (__int64)"");
        v43 = (__m128i *)v246[1];
        if ( v246[1] == v247 )
        {
          sub_A82970((void ***)v246, (const __m128i *)v246[1], &src);
          if ( (__m128i *)src.m128i_i64[0] != &v270 )
            operator delete((void *)src.m128i_i64[0]);
        }
        else
        {
          *(_QWORD *)v246[1] = (char *)v246[1] + 16;
          if ( (__m128i *)src.m128i_i64[0] == &v270 )
          {
            v43[1] = _mm_load_si128(&v270);
          }
          else
          {
            v43->m128i_i64[0] = src.m128i_i64[0];
            v43[1].m128i_i64[0] = v270.m128i_i64[0];
          }
          v43->m128i_i64[1] = src.m128i_i64[1];
          v246[1] = (char *)v246[1] + 32;
        }
        src.m128i_i64[0] = (__int64)&v270;
        sub_10BB0C0(&src, "-sse", (__int64)"");
        v44 = (__m128i *)v246[1];
        if ( v246[1] == v247 )
        {
          sub_A82970((void ***)v246, (const __m128i *)v246[1], &src);
          if ( (__m128i *)src.m128i_i64[0] != &v270 )
            operator delete((void *)src.m128i_i64[0]);
          goto LABEL_42;
        }
        *(_QWORD *)v246[1] = (char *)v246[1] + 16;
        if ( (__m128i *)src.m128i_i64[0] == &v270 )
        {
          v44[1] = _mm_load_si128(&v270);
        }
        else
        {
          v44->m128i_i64[0] = src.m128i_i64[0];
          v44[1].m128i_i64[0] = v270.m128i_i64[0];
        }
        v36 += 4;
        v44->m128i_i64[1] = src.m128i_i64[1];
        v246[1] = (char *)v246[1] + 32;
        if ( v37 == v36 )
        {
LABEL_56:
          v6 = (__int64)v240;
          goto LABEL_57;
        }
      }
      if ( !v36[1] )
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::substr",
          1u,
          0);
      src.m128i_i64[0] = (__int64)&v270;
      v38 = v36[1];
      if ( !v38 )
        std::__throw_out_of_range_fmt(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          "basic_string::basic_string",
          1u,
          0);
      v39 = (unsigned __int64)v38 - 1;
      if ( v39 > 6 )
        v39 = 6;
      sub_10BB0C0(&src, (_BYTE *)*v36 + 1, (__int64)*v36 + v39 + 1);
      v40 = sub_9B4AA0((__int64)&src, "avx10.");
      if ( (__m128i *)src.m128i_i64[0] != &v270 )
      {
        LODWORD(v232) = v40;
        operator delete((void *)src.m128i_i64[0]);
        v40 = (int)v232;
      }
      if ( !v40 )
      {
        if ( *(_BYTE *)*v36 == 43 )
        {
          v135 = (__m128i *)v36[1];
          v234 = (void **)*v36;
          v232 = v135;
          v136 = j__strlen("512");
          if ( v136 <= (unsigned __int64)v232 && (!v136 || !memcmp(&v232->m128i_i8[(_QWORD)v234 - v136], "512", v136)) )
            LOBYTE(v233) = 1;
          sub_9EE8A0((__int64)v238, (__int64)v36);
          LOBYTE(v234) = 1;
        }
        else if ( !(_BYTE)v234 || sub_9B4AA0((__int64)v36, "-avx10.1-256") )
        {
          if ( (_BYTE)v233 )
            LOBYTE(v233) = sub_9B4AA0((__int64)v36, "-avx10.1-512") != 0;
        }
        else
        {
          LOBYTE(v233) = 0;
          LOBYTE(v234) = 0;
        }
        v102 = v248[1];
        if ( v248[1] == v249 )
        {
          sub_10BCB90(v243, (const __m128i *)v248[1], (__int64)v36);
        }
        else
        {
          *(_QWORD *)v248[1] = (char *)v248[1] + 16;
          sub_10BB180(v102, *v36, (__int64)v36[1] + (_QWORD)*v36);
          v248[1] = (char *)v248[1] + 32;
        }
        goto LABEL_42;
      }
      if ( v27 )
      {
        if ( !sub_9B4AA0((__int64)v36, "-avx512f") )
        {
          v27 = 0;
          goto LABEL_40;
        }
      }
      else
      {
        v101 = *v36;
        if ( (unsigned __int64)v36[1] > 6
          && *(_DWORD *)v101 == 2021024043
          && v101[2] == 12597
          && *((_BYTE *)v101 + 6) == 50 )
        {
          v27 = 1;
          sub_9EE8A0((__int64)v241, (__int64)v36);
LABEL_40:
          v41 = v246[1];
          if ( v246[1] == v247 )
          {
            sub_10BCB90((void ***)v246, (const __m128i *)v246[1], (__int64)v36);
          }
          else
          {
            *(_QWORD *)v246[1] = (char *)v246[1] + 16;
            sub_10BB180(v41, *v36, (__int64)v36[1] + (_QWORD)*v36);
            v246[1] = (char *)v246[1] + 32;
          }
          goto LABEL_42;
        }
      }
      if ( v226 != 1 )
      {
        if ( !sub_9B4AA0((__int64)v36, "+evex512") )
        {
          v226 = 1;
          goto LABEL_42;
        }
        if ( !v226 )
          goto LABEL_40;
      }
      if ( sub_9B4AA0((__int64)v36, "-evex512") )
        goto LABEL_40;
      v226 = 0;
LABEL_42:
      v36 += 4;
      if ( v37 == v36 )
        goto LABEL_56;
    }
  }
LABEL_57:
  v45 = (__m128i *)v248[0];
  v46 = (__m128i *)v248[1];
  v47 = (const __m128i *)v246[1];
  v232 = (__m128i *)v248[0];
  if ( v248[1] != v248[0] )
  {
    v240 = (void **)((char *)v248[1] - (char *)v248[0]);
    v48 = ((char *)v248[1] - (char *)v248[0]) >> 5;
    if ( v48 <= ((char *)v247 - (char *)v246[1]) >> 5 )
    {
      do
      {
        v49 = v47 + 1;
        v50 = (__int64 *)v47;
        v45 += 2;
        v47 += 2;
        v47[-2].m128i_i64[0] = (__int64)v49;
        sub_10BB180(v50, (_BYTE *)v45[-2].m128i_i64[0], v45[-2].m128i_i64[0] + v45[-2].m128i_i64[1]);
      }
      while ( v46 != v45 );
      v246[1] = (char *)v246[1] + (unsigned __int64)v240;
      goto LABEL_61;
    }
    v124 = (const __m128i *)v246[0];
    v125 = ((char *)v246[1] - (char *)v246[0]) >> 5;
    if ( v48 > 0x7FFFFFFFFFFFFFFLL - v125 )
      std::__throw_length_error("vector::_M_range_insert");
    if ( v48 < v125 )
      v48 = ((char *)v246[1] - (char *)v246[0]) >> 5;
    v126 = __CFADD__(v125, v48);
    v127 = v125 + v48;
    if ( v126 || v127 > 0x7FFFFFFFFFFFFFFLL )
    {
      v128 = 0x1FFFFFFFFFFFFFFCLL;
LABEL_213:
      v129 = (void **)operator new(v128 * 8);
      v124 = (const __m128i *)v246[0];
      v240 = v129;
      v245 = &v129[v128];
    }
    else
    {
      if ( v127 )
      {
        v128 = 4 * v127;
        goto LABEL_213;
      }
      v245 = nullptr;
      v240 = nullptr;
    }
    if ( v124 == v47 )
    {
      v243 = (void ***)v240;
      v148 = (void ***)v240;
    }
    else
    {
      v130 = v124 + 1;
      v131 = ((unsigned __int64)((char *)&v47[-2] - (char *)v124) >> 5) + 1;
      v132 = (__m128i *)v240;
      v133 = (__m128i *)&v240[4 * v131];
      do
      {
        v132->m128i_i64[0] = (__int64)v132[1].m128i_i64;
        v134 = (const __m128i *)v130[-1].m128i_i64[0];
        if ( v134 == v130 )
        {
          v132[1] = _mm_loadu_si128(v130);
        }
        else
        {
          v132->m128i_i64[0] = (__int64)v134;
          v132[1].m128i_i64[0] = v130->m128i_i64[0];
        }
        v132 += 2;
        v132[-2].m128i_i64[1] = v130[-1].m128i_i64[1];
        v130[-1].m128i_i64[0] = (__int64)v130;
        v130 += 2;
        v130[-3].m128i_i64[1] = 0;
        v130[-2].m128i_i8[0] = 0;
      }
      while ( v132 != v133 );
      v243 = (void ***)&v240[4 * v131];
      v148 = v243;
    }
    v244 = v47;
    v149 = v148;
    v150 = v232;
    do
    {
      v151 = (void **)(v149 + 2);
      v152 = v149;
      v150 += 2;
      v149 += 4;
      *(v149 - 4) = v151;
      sub_10BB180(v152, (_BYTE *)v150[-2].m128i_i64[0], v150[-2].m128i_i64[0] + v150[-2].m128i_i64[1]);
    }
    while ( v46 != v150 );
    v153 = v244;
    v154 = (void **)v246[1];
    v155 = ((char *)&v46[-2] - (char *)v232) & 0xFFFFFFFFFFFFFFE0LL;
    v156 = (__m128i *)((char *)v243 + v155 + 32);
    if ( v244 != v246[1] )
    {
      v157 = v244 + 1;
      v158 = (__m128i *)((char *)v243 + v155 + 32);
      v159 = &v156[2 * ((unsigned __int64)((char *)v246[1] - 32 - (char *)v244) >> 5) + 2];
      do
      {
        v158->m128i_i64[0] = (__int64)v158[1].m128i_i64;
        v160 = (const __m128i *)v157[-1].m128i_i64[0];
        if ( v157 == v160 )
        {
          v158[1] = _mm_loadu_si128(v157);
        }
        else
        {
          v158->m128i_i64[0] = (__int64)v160;
          v158[1].m128i_i64[0] = v157->m128i_i64[0];
        }
        v158 += 2;
        v158[-2].m128i_i64[1] = v157[-1].m128i_i64[1];
        v157[-1].m128i_i64[0] = (__int64)v157;
        v157 += 2;
        v157[-3].m128i_i64[1] = 0;
        v157[-2].m128i_i8[0] = 0;
      }
      while ( v159 != v158 );
      v156 += 2 * ((unsigned __int64)((char *)(v154 - 4) - (char *)v153) >> 5) + 2;
    }
    v161 = (void **)v246[0];
    if ( v154 != v246[0] )
    {
      v162 = v154;
      do
      {
        while ( *v161 != v161 + 2 )
        {
          operator delete(*v161);
          v161 += 4;
          if ( v162 == v161 )
            goto LABEL_263;
        }
        v161 += 4;
      }
      while ( v162 != v161 );
LABEL_263:
      v161 = (void **)v246[0];
    }
    if ( v161 )
      operator delete(v161);
    v232 = v156;
    v163 = _mm_loadh_ps((const double *)&v232);
    v247 = v245;
    *(__m128 *)v246 = v163;
  }
LABEL_61:
  if ( (_BYTE)v233 == 1 || !v27 )
  {
    if ( !(_BYTE)v234 )
      goto LABEL_107;
    if ( v27 == 1 || v226 == -1 )
      goto LABEL_202;
    sub_FC70B0((__int64)&src, v239, 0, 141);
    v103 = " +evex512";
    if ( v226 != 1 )
      v103 = " -evex512";
    v261 = &v263;
    sub_10BB180(&v261, v250, (__int64)v250 + v251);
    v104 = j__strlen(v103);
    if ( v104 > 0x7FFFFFFFFFFFFFFFLL - (__int64)v262 )
      goto LABEL_406;
    sub_9EE560(&v261, v103, v104);
    v105 = (unsigned __int8 *)src.m128i_i64[0];
    v106 = v261;
    v107 = v262;
    if ( !src.m128i_i64[0] )
    {
      v217 = src.m128i_i64[1];
      v218 = *(_DWORD *)(src.m128i_i64[1] + 14976);
      if ( v218 )
      {
        v219 = (unsigned int)(v218 - 1);
        *(_DWORD *)(src.m128i_i64[1] + 14976) = v219;
        v105 = *(unsigned __int8 **)(v217 + 8 * v219 + 14848);
        v220 = *((unsigned int *)v105 + 134);
        *v105 = 0;
        v221 = *((_QWORD *)v105 + 66);
        *((_DWORD *)v105 + 106) = 0;
        v222 = v220 << 6;
        if ( v221 != v221 + v222 )
        {
          v232 = &src;
          v223 = v105;
          v224 = v221 + v222;
          do
          {
            while ( 1 )
            {
              v224 -= 64;
              v225 = *(void **)(v224 + 24);
              if ( v225 == (void *)(v224 + 40) )
                break;
              operator delete(v225);
              if ( v221 == v224 )
                goto LABEL_399;
            }
          }
          while ( v221 != v224 );
LABEL_399:
          v105 = v223;
          p_src = v232;
        }
        *((_DWORD *)v105 + 134) = 0;
      }
      else
      {
        v231 = v261;
        v105 = (unsigned __int8 *)operator new(0x3A0u);
        *v105 = 0;
        *((_QWORD *)v105 + 12) = v105 + 112;
        *((_QWORD *)v105 + 16) = v105 + 144;
        *((_QWORD *)v105 + 20) = v105 + 176;
        *((_QWORD *)v105 + 24) = v105 + 208;
        *((_QWORD *)v105 + 28) = v105 + 240;
        *((_QWORD *)v105 + 32) = v105 + 272;
        *((_QWORD *)v105 + 36) = v105 + 304;
        *((_QWORD *)v105 + 40) = v105 + 336;
        *((_QWORD *)v105 + 44) = v105 + 368;
        *((_QWORD *)v105 + 48) = v105 + 400;
        *((_QWORD *)v105 + 52) = v105 + 432;
        *((_QWORD *)v105 + 13) = 0;
        v105[112] = 0;
        *((_QWORD *)v105 + 17) = 0;
        v105[144] = 0;
        *((_QWORD *)v105 + 21) = 0;
        v105[176] = 0;
        *((_QWORD *)v105 + 25) = 0;
        v105[208] = 0;
        *((_QWORD *)v105 + 29) = 0;
        v105[240] = 0;
        *((_QWORD *)v105 + 33) = 0;
        v105[272] = 0;
        *((_QWORD *)v105 + 37) = 0;
        v105[304] = 0;
        *((_QWORD *)v105 + 41) = 0;
        v105[336] = 0;
        *((_QWORD *)v105 + 45) = 0;
        v105[368] = 0;
        *((_QWORD *)v105 + 49) = 0;
        v105[400] = 0;
        *((_QWORD *)v105 + 53) = 0x800000000LL;
        v106 = v231;
        *((_QWORD *)v105 + 66) = v105 + 544;
        *((_QWORD *)v105 + 67) = 0x600000000LL;
      }
      src.m128i_i64[0] = (__int64)v105;
    }
    v105[*v105 + 1] = 0;
    v264 = v266;
    sub_10BB0C0(&v264, v106, (__int64)v107 + (_QWORD)v106);
    v108 = src.m128i_i64[0];
    v109 = *(unsigned __int8 *)src.m128i_i64[0];
    *(_BYTE *)src.m128i_i64[0] = v109 + 1;
    v110 = (unsigned __int8)v109;
    v111 = 32 * (v109 + 3);
    v112 = (void **)(v108 + v111);
    v113 = *(__int64 **)(v108 + v111);
    if ( v264 == v266 )
    {
      v203 = v265;
      if ( v265 )
      {
        if ( v265 == 1 )
          *(_BYTE *)v113 = v266[0];
        else
          memcpy(v113, v264, v265);
        v203 = v265;
        v113 = (__int64 *)*v112;
      }
      v112[1] = (void *)v203;
      *((_BYTE *)v113 + v203) = 0;
      v113 = (__int64 *)v264;
    }
    else
    {
      if ( v113 == (__int64 *)(v108 + v111 + 16) )
      {
        *v112 = v264;
        v112[1] = (void *)v265;
        v112[2] = (void *)v266[0];
      }
      else
      {
        v114 = *(_QWORD *)(v108 + 32 * v110 + 112);
        *v112 = v264;
        v112[1] = (void *)v265;
        v112[2] = (void *)v266[0];
        if ( v113 )
        {
          v264 = v113;
          v266[0] = v114;
          goto LABEL_179;
        }
      }
      v113 = v266;
      v264 = v266;
    }
LABEL_179:
    v265 = 0;
    *(_BYTE *)v113 = 0;
    if ( v264 != v266 )
      operator delete(v264);
    if ( v261 != &v263 )
      operator delete(v261);
    if ( (_BYTE)v272 )
    {
      sub_FC7790(v270.m128i_i64[0], p_src->m128i_i64, SHIBYTE(v272));
      v270.m128i_i64[0] = 0;
      v272 = 0;
    }
    if ( v271 != &p_src[3] )
      operator delete(v271);
    v115 = (void **)src.m128i_i64[0];
    if ( src.m128i_i64[0] )
    {
      v116 = src.m128i_i64[1];
      if ( src.m128i_i64[1] )
      {
        if ( src.m128i_i64[0] < (unsigned __int64)src.m128i_i64[1]
          || src.m128i_i64[0] > (unsigned __int64)(src.m128i_i64[1] + 14848) )
        {
          v117 = *(void ***)(src.m128i_i64[0] + 528);
          v118 = &v117[8 * (unsigned __int64)*(unsigned int *)(src.m128i_i64[0] + 536)];
          if ( v117 != v118 )
          {
            do
            {
              while ( 1 )
              {
                v118 -= 8;
                v119 = (void **)v118[3];
                if ( v119 == v118 + 5 )
                  break;
                operator delete(v119);
                if ( v117 == v118 )
                  goto LABEL_193;
              }
            }
            while ( v117 != v118 );
LABEL_193:
            v118 = (void **)v115[66];
          }
          if ( v118 != v115 + 68 )
            free(v118);
          v120 = (void **)v115[52];
          if ( v120 != v115 + 54 )
            free(v120);
          v121 = v115 + 48;
          v122 = v115 + 8;
          do
          {
            while ( *v121 != v121 + 2 )
            {
              operator delete(*v121);
              v121 -= 4;
              if ( v121 == v122 )
                goto LABEL_201;
            }
            v121 -= 4;
          }
          while ( v121 != v122 );
LABEL_201:
          operator delete(v115, 0x3A0u);
        }
        else
        {
          v205 = *(unsigned int *)(src.m128i_i64[1] + 14976);
          *(_DWORD *)(src.m128i_i64[1] + 14976) = v205 + 1;
          *(_QWORD *)(v116 + 8 * v205 + 14848) = v115;
        }
      }
    }
LABEL_202:
    v123 = "+evex512";
    if ( !(_BYTE)v233 )
      v123 = "-evex512";
    sub_10BB320(p_src, v123);
    sub_A82C60((__int64)v246, p_src);
    if ( (__m128i *)src.m128i_i64[0] != &p_src[1] )
      operator delete((void *)src.m128i_i64[0]);
    goto LABEL_107;
  }
  if ( !v226 )
  {
    src.m128i_i64[0] = (__int64)&v270;
    sub_10BB0C0(&src, "-evex512", (__int64)"");
    sub_A82C60((__int64)v246, &src);
    v51 = (void *)src.m128i_i64[0];
    if ( (__m128i *)src.m128i_i64[0] != &v270 )
      goto LABEL_65;
    goto LABEL_107;
  }
  src.m128i_i64[0] = (__int64)&v270;
  sub_10BB0C0(&src, "+evex512", (__int64)"");
  sub_A82C60((__int64)v246, &src);
  v51 = (void *)src.m128i_i64[0];
  if ( (__m128i *)src.m128i_i64[0] != &v270 )
LABEL_65:
    operator delete(v51);
  if ( v226 && (_BYTE)v234 )
  {
    v52 = (__int64 *)&v264;
    v53 = v256;
    sub_FC70B0((__int64)&v264, v239, 0, 141);
    v256[0] = &v257;
    sub_10BB180(v256, v253, (__int64)v253 + v254);
    v54 = j__strlen(" ");
    if ( v54 <= 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v256[1] )
    {
      sub_9EE560(v256, " ", v54);
      v55 = (__m128i *)sub_9EE560(v256, v250, v251);
      v258 = &v260;
      if ( (__m128i *)v55->m128i_i64[0] == &v55[1] )
      {
        v260 = _mm_loadu_si128(v55 + 1);
      }
      else
      {
        v258 = (void *)v55->m128i_i64[0];
        v260.m128i_i64[0] = v55[1].m128i_i64[0];
      }
      v56 = v55->m128i_i64[1];
      v55[1].m128i_i8[0] = 0;
      v259 = v56;
      v55->m128i_i64[0] = (__int64)v55[1].m128i_i64;
      v55->m128i_i64[1] = 0;
      v57 = j__strlen("; will be promoted to avx10.1-512");
      if ( v57 <= 0x7FFFFFFFFFFFFFFFLL - v259 )
      {
        v58 = &v261;
        v59 = (__m128i *)sub_9EE560(&v258, "; will be promoted to avx10.1-512", v57);
        v261 = &v263;
        if ( (__m128i *)v59->m128i_i64[0] == &v59[1] )
        {
          v263 = _mm_loadu_si128(v59 + 1);
        }
        else
        {
          v261 = (void *)v59->m128i_i64[0];
          v263.m128i_i64[0] = v59[1].m128i_i64[0];
        }
        v262 = (void **)v59->m128i_i64[1];
        v59->m128i_i64[0] = (__int64)v59[1].m128i_i64;
        v59->m128i_i64[1] = 0;
        v59[1].m128i_i8[0] = 0;
        v60 = (unsigned __int8 *)v264;
        v61 = v261;
        v62 = v262;
        if ( !v264 )
        {
          v201 = v265;
          v202 = *(_DWORD *)(v265 + 14976);
          if ( v202 )
          {
            v209 = (unsigned int)(v202 - 1);
            *(_DWORD *)(v265 + 14976) = v209;
            v60 = *(unsigned __int8 **)(v201 + 8 * v209 + 14848);
            v210 = *((unsigned int *)v60 + 134);
            *v60 = 0;
            v211 = *((__m128i **)v60 + 66);
            *((_DWORD *)v60 + 106) = 0;
            v212 = &v211[4 * v210];
            v232 = v211;
            if ( v211 != v212 )
            {
              v233 = v256;
              v234 = &v261;
              v213 = v62;
              v240 = &v264;
              v214 = v212;
              v243 = (void ***)&src;
              v215 = v60;
              do
              {
                while ( 1 )
                {
                  v214 -= 4;
                  v216 = (unsigned __int64 *)v214[1].m128i_i64[1];
                  if ( v216 == &v214[2].m128i_u64[1] )
                    break;
                  operator delete(v216);
                  if ( v232 == v214 )
                    goto LABEL_371;
                }
              }
              while ( v232 != v214 );
LABEL_371:
              v62 = v213;
              v60 = v215;
              v53 = v233;
              v58 = v234;
              v52 = (__int64 *)v240;
              p_src = (__m128i *)v243;
            }
            *((_DWORD *)v60 + 134) = 0;
          }
          else
          {
            v233 = v262;
            v232 = (__m128i *)v261;
            v60 = (unsigned __int8 *)operator new(0x3A0u);
            *v60 = 0;
            *((_QWORD *)v60 + 12) = v60 + 112;
            *((_QWORD *)v60 + 16) = v60 + 144;
            *((_QWORD *)v60 + 20) = v60 + 176;
            *((_QWORD *)v60 + 24) = v60 + 208;
            *((_QWORD *)v60 + 28) = v60 + 240;
            *((_QWORD *)v60 + 32) = v60 + 272;
            *((_QWORD *)v60 + 36) = v60 + 304;
            *((_QWORD *)v60 + 40) = v60 + 336;
            *((_QWORD *)v60 + 44) = v60 + 368;
            *((_QWORD *)v60 + 48) = v60 + 400;
            *((_QWORD *)v60 + 52) = v60 + 432;
            *((_QWORD *)v60 + 13) = 0;
            v60[112] = 0;
            *((_QWORD *)v60 + 17) = 0;
            v60[144] = 0;
            *((_QWORD *)v60 + 21) = 0;
            v60[176] = 0;
            *((_QWORD *)v60 + 25) = 0;
            v60[208] = 0;
            *((_QWORD *)v60 + 29) = 0;
            v60[240] = 0;
            *((_QWORD *)v60 + 33) = 0;
            v60[272] = 0;
            *((_QWORD *)v60 + 37) = 0;
            v60[304] = 0;
            *((_QWORD *)v60 + 41) = 0;
            v60[336] = 0;
            *((_QWORD *)v60 + 45) = 0;
            v60[368] = 0;
            *((_QWORD *)v60 + 49) = 0;
            v60[400] = 0;
            *((_QWORD *)v60 + 53) = 0x800000000LL;
            v61 = v232;
            *((_QWORD *)v60 + 66) = v60 + 544;
            v62 = v233;
            *((_QWORD *)v60 + 67) = 0x600000000LL;
          }
          v264 = v60;
        }
        v63 = *v60;
        v232 = p_src + 1;
        v60[v63 + 1] = 0;
        src.m128i_i64[0] = (__int64)p_src[1].m128i_i64;
        sub_10BB0C0(p_src, v61, (__int64)v62 + (_QWORD)v61);
        v64 = v264;
        v65 = v232;
        v66 = *(unsigned __int8 *)v264;
        *(_BYTE *)v264 = v66 + 1;
        v67 = 4 * (v66 + 3);
        v68 = (__m128i *)&v64[v67];
        v69 = (__m128i *)v64[v67];
        if ( (__m128i *)src.m128i_i64[0] == v65 )
        {
          v200 = src.m128i_i64[1];
          if ( src.m128i_i64[1] )
          {
            if ( src.m128i_i64[1] == 1 )
            {
              v69->m128i_i8[0] = v270.m128i_i8[0];
              v200 = src.m128i_i64[1];
              v69 = (__m128i *)v68->m128i_i64[0];
            }
            else
            {
              v232 = v68;
              memcpy(v69, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
              v68 = v232;
              v200 = src.m128i_i64[1];
              v69 = (__m128i *)v232->m128i_i64[0];
            }
          }
          v68->m128i_i64[1] = v200;
          v69->m128i_i8[v200] = 0;
          v69 = (__m128i *)src.m128i_i64[0];
        }
        else
        {
          if ( v69 == (__m128i *)&v64[v67 + 2] )
          {
            *v68 = src;
            v68[1].m128i_i64[0] = v270.m128i_i64[0];
          }
          else
          {
            v70 = v64[4 * (int)v66 + 14];
            *v68 = src;
            v68[1].m128i_i64[0] = v270.m128i_i64[0];
            if ( v69 )
            {
              src.m128i_i64[0] = (__int64)v69;
              v270.m128i_i64[0] = v70;
              goto LABEL_79;
            }
          }
          v69 = p_src + 1;
          src.m128i_i64[0] = (__int64)p_src[1].m128i_i64;
        }
LABEL_79:
        src.m128i_i64[1] = 0;
        v69->m128i_i8[0] = 0;
        if ( (__m128i *)src.m128i_i64[0] != &p_src[1] )
          operator delete((void *)src.m128i_i64[0]);
        if ( v261 != v58 + 2 )
          operator delete(v261);
        if ( v258 != &v260 )
          operator delete(v258);
        if ( v256[0] != v53 + 2 )
          operator delete(v256[0]);
        if ( (_BYTE)v268 )
        {
          sub_FC7790(v266[0], v52, SHIBYTE(v268));
          v266[0] = 0;
          v268 = 0;
        }
        if ( v267 != v52 + 6 )
          operator delete(v267);
        v71 = (void **)v264;
        if ( v264 )
        {
          v72 = v265;
          if ( v265 )
          {
            if ( (unsigned __int64)v264 >= v265 && (unsigned __int64)v264 <= v265 + 14848 )
            {
              v208 = *(unsigned int *)(v265 + 14976);
              *(_DWORD *)(v265 + 14976) = v208 + 1;
              *(_QWORD *)(v72 + 8 * v208 + 14848) = v71;
            }
            else
            {
              v73 = *((void ***)v264 + 66);
              v74 = &v73[8 * (unsigned __int64)*((unsigned int *)v264 + 134)];
              if ( v73 != v74 )
              {
                do
                {
                  while ( 1 )
                  {
                    v74 -= 8;
                    v75 = (void **)v74[3];
                    if ( v75 == v74 + 5 )
                      break;
                    operator delete(v75);
                    if ( v73 == v74 )
                      goto LABEL_98;
                  }
                }
                while ( v73 != v74 );
LABEL_98:
                v74 = (void **)v71[66];
              }
              if ( v74 != v71 + 68 )
                free(v74);
              v76 = (void **)v71[52];
              if ( v76 != v71 + 54 )
                free(v76);
              v77 = v71 + 48;
              v78 = v71 + 8;
              do
              {
                while ( *v77 != v77 + 2 )
                {
                  operator delete(*v77);
                  v77 -= 4;
                  if ( v78 == v77 )
                    goto LABEL_106;
                }
                v77 -= 4;
              }
              while ( v77 != v78 );
LABEL_106:
              operator delete(v71, 0x3A0u);
            }
          }
        }
        goto LABEL_107;
      }
    }
LABEL_406:
    std::__throw_length_error("basic_string::append");
  }
LABEL_107:
  v79 = sub_102FFA0(v242, v6, v239, (__int64)s2, v237, (char ***)v246);
  if ( (_BYTE)v79 )
  {
    v80 = j__strlen("sse4.2");
    v81 = sub_2244B30("sse4.2", v80);
    v82 = sub_2244E60(v6, "sse4.2", v80, v81);
    if ( v82 == -1 )
      sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
    else
      sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * v82), 1);
    v83 = src.m128i_i64[0];
    sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
    if ( src.m128i_i64[0] == v83 || !*(_BYTE *)(*(_QWORD *)v83 + 8LL) )
    {
LABEL_112:
      v84 = j__strlen("sse");
      v85 = sub_2244B30("sse", v84);
      v86 = sub_2244E60(v6, "sse", v84, v85);
      if ( v86 == -1 )
        sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
      else
        sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * v86), 1);
      v87 = src.m128i_i64[0];
      sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
      if ( src.m128i_i64[0] == v87 || !*(_BYTE *)(*(_QWORD *)v87 + 8LL) )
      {
LABEL_116:
        v88 = j__strlen("avx");
        v89 = sub_2244B30("avx", v88);
        v90 = sub_2244E60(v6, "avx", v88, v89);
        if ( v90 == -1 )
          sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
        else
          sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * v90), 1);
        v91 = src.m128i_i64[0];
        sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
        if ( src.m128i_i64[0] == v91 || !*(_BYTE *)(*(_QWORD *)v91 + 8LL) )
        {
LABEL_120:
          v92 = j__strlen("sse4.2");
          v93 = sub_2244B30("sse4.2", v92);
          v94 = sub_2244E60(v6, "sse4.2", v92, v93);
          if ( v94 == -1 )
            sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
          else
            sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * v94), 1);
          v95 = src.m128i_i64[0];
          sub_10298F0((__int64 **)p_src, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
          if ( src.m128i_i64[0] == v95 )
            goto LABEL_124;
          v227 = *(_BYTE *)(*(_QWORD *)v95 + 8LL);
          if ( !v227 )
            goto LABEL_124;
          v184 = (__m128i *)v246[0];
          v232 = (__m128i *)v246[1];
          v185 = ((char *)v246[1] - (char *)v246[0]) >> 7;
          v186 = ((char *)v246[1] - (char *)v246[0]) >> 5;
          if ( v185 > 0 )
          {
            v187 = (char *)v246[0] + 128 * v185;
            while ( sub_9B4AA0((__int64)v184, "-crc32") )
            {
              v188 = v184;
              v184 += 2;
              if ( !sub_9B4AA0((__int64)v184, "-crc32") )
                break;
              v184 = v188 + 4;
              if ( !sub_9B4AA0((__int64)v188[4].m128i_i64, "-crc32") )
                break;
              v184 = v188 + 6;
              if ( !sub_9B4AA0((__int64)v188[6].m128i_i64, "-crc32") )
                break;
              v184 = v188 + 8;
              if ( &v188[8] == (__m128i *)v187 )
              {
                v186 = ((char *)v232 - (char *)v184) >> 5;
                goto LABEL_349;
              }
            }
            goto LABEL_300;
          }
LABEL_349:
          switch ( v186 )
          {
            case 2LL:
LABEL_392:
              if ( sub_9B4AA0((__int64)v184, "-crc32") )
              {
                v184 += 2;
LABEL_352:
                if ( sub_9B4AA0((__int64)v184, "-crc32") )
                {
LABEL_301:
                  v189 = j__strlen("crc32");
                  v79 = v227;
                  *(_BYTE *)sub_102FB20(v6, "crc32", v189) = 1;
                  goto LABEL_124;
                }
              }
              break;
            case 3LL:
              if ( sub_9B4AA0((__int64)v184, "-crc32") )
              {
                v184 += 2;
                goto LABEL_392;
              }
              break;
            case 1LL:
              goto LABEL_352;
            default:
              goto LABEL_301;
          }
LABEL_300:
          if ( v232 != v184 )
            goto LABEL_124;
          goto LABEL_301;
        }
        v164 = (char *)v246[0];
        v228 = (char *)v246[1];
        v165 = ((char *)v246[1] - (char *)v246[0]) >> 7;
        v166 = ((char *)v246[1] - (char *)v246[0]) >> 5;
        if ( v165 > 0 )
        {
          LOBYTE(v232) = v79;
          v167 = (char *)v246[0] + 128 * v165;
          v168 = p_src;
          v169 = (char *)v246[0];
          v170 = v168;
          do
          {
            if ( !sub_9B4AA0((__int64)v169, "-xsave")
              || (v171 = v169, v169 += 32, !sub_9B4AA0((__int64)v169, "-xsave"))
              || (v169 = v171 + 64, !sub_9B4AA0((__int64)(v171 + 64), "-xsave"))
              || (v169 = v171 + 96, !sub_9B4AA0((__int64)(v171 + 96), "-xsave")) )
            {
              v172 = v170;
              v79 = (unsigned __int8)v232;
              v164 = v169;
              p_src = v172;
              goto LABEL_281;
            }
            v169 = v171 + 128;
          }
          while ( v171 + 128 != v167 );
          v204 = v170;
          v164 = v171 + 128;
          v79 = (unsigned __int8)v232;
          p_src = v204;
          v166 = (v228 - (v171 + 128)) >> 5;
        }
        switch ( v166 )
        {
          case 2LL:
LABEL_384:
            if ( sub_9B4AA0((__int64)v164, "-xsave") )
            {
              v164 += 32;
LABEL_344:
              if ( sub_9B4AA0((__int64)v164, "-xsave") )
              {
LABEL_282:
                v173 = j__strlen("xsave");
                *(_BYTE *)sub_102FB20(v6, "xsave", v173) = 1;
                goto LABEL_120;
              }
            }
            break;
          case 3LL:
            if ( sub_9B4AA0((__int64)v164, "-xsave") )
            {
              v164 += 32;
              goto LABEL_384;
            }
            break;
          case 1LL:
            goto LABEL_344;
          default:
            goto LABEL_282;
        }
LABEL_281:
        if ( v228 != v164 )
          goto LABEL_120;
        goto LABEL_282;
      }
      v174 = (char *)v246[0];
      v229 = (char *)v246[1];
      v175 = ((char *)v246[1] - (char *)v246[0]) >> 7;
      v176 = ((char *)v246[1] - (char *)v246[0]) >> 5;
      if ( v175 > 0 )
      {
        LOBYTE(v232) = v79;
        v177 = (char *)v246[0] + 128 * v175;
        v178 = p_src;
        v179 = (char *)v246[0];
        v180 = v178;
        do
        {
          if ( !sub_9B4AA0((__int64)v179, "-mmx")
            || (v181 = v179, v179 += 32, !sub_9B4AA0((__int64)v179, "-mmx"))
            || (v179 = v181 + 64, !sub_9B4AA0((__int64)(v181 + 64), "-mmx"))
            || (v179 = v181 + 96, !sub_9B4AA0((__int64)(v181 + 96), "-mmx")) )
          {
            v182 = v180;
            v79 = (unsigned __int8)v232;
            v174 = v179;
            p_src = v182;
            goto LABEL_291;
          }
          v179 = v181 + 128;
        }
        while ( v181 + 128 != v177 );
        v206 = v180;
        v174 = v181 + 128;
        v79 = (unsigned __int8)v232;
        p_src = v206;
        v176 = (v229 - (v181 + 128)) >> 5;
      }
      switch ( v176 )
      {
        case 2LL:
LABEL_388:
          if ( sub_9B4AA0((__int64)v174, "-mmx") )
          {
            v174 += 32;
LABEL_358:
            if ( sub_9B4AA0((__int64)v174, "-mmx") )
            {
LABEL_292:
              v183 = j__strlen("mmx");
              *(_BYTE *)sub_102FB20(v6, "mmx", v183) = 1;
              goto LABEL_116;
            }
          }
          break;
        case 3LL:
          if ( sub_9B4AA0((__int64)v174, "-mmx") )
          {
            v174 += 32;
            goto LABEL_388;
          }
          break;
        case 1LL:
          goto LABEL_358;
        default:
          goto LABEL_292;
      }
LABEL_291:
      if ( v229 != v174 )
        goto LABEL_116;
      goto LABEL_292;
    }
    v190 = (char *)v246[0];
    v230 = (char *)v246[1];
    v191 = ((char *)v246[1] - (char *)v246[0]) >> 7;
    v192 = ((char *)v246[1] - (char *)v246[0]) >> 5;
    if ( v191 > 0 )
    {
      LOBYTE(v232) = v79;
      v193 = (char *)v246[0] + 128 * v191;
      v194 = p_src;
      v195 = (char *)v246[0];
      v196 = v194;
      do
      {
        if ( !sub_9B4AA0((__int64)v195, "-popcnt")
          || (v197 = v195, v195 += 32, !sub_9B4AA0((__int64)v195, "-popcnt"))
          || (v195 = v197 + 64, !sub_9B4AA0((__int64)(v197 + 64), "-popcnt"))
          || (v195 = v197 + 96, !sub_9B4AA0((__int64)(v197 + 96), "-popcnt")) )
        {
          v198 = v196;
          v79 = (unsigned __int8)v232;
          v190 = v195;
          p_src = v198;
          goto LABEL_310;
        }
        v195 = v197 + 128;
      }
      while ( v197 + 128 != v193 );
      v207 = v196;
      v190 = v197 + 128;
      v79 = (unsigned __int8)v232;
      p_src = v207;
      v192 = (v230 - (v197 + 128)) >> 5;
    }
    switch ( v192 )
    {
      case 2LL:
LABEL_380:
        if ( sub_9B4AA0((__int64)v190, "-popcnt") )
        {
          v190 += 32;
LABEL_364:
          if ( sub_9B4AA0((__int64)v190, "-popcnt") )
          {
LABEL_311:
            v199 = j__strlen("popcnt");
            *(_BYTE *)sub_102FB20(v6, "popcnt", v199) = 1;
            goto LABEL_112;
          }
        }
        break;
      case 3LL:
        if ( sub_9B4AA0((__int64)v190, "-popcnt") )
        {
          v190 += 32;
          goto LABEL_380;
        }
        break;
      case 1LL:
        goto LABEL_364;
      default:
        goto LABEL_311;
    }
LABEL_310:
    if ( v230 != v190 )
      goto LABEL_112;
    goto LABEL_311;
  }
LABEL_124:
  if ( v253 != v241 + 2 )
    operator delete(v253);
  if ( v250 != v238 + 2 )
    operator delete(v250);
  v96 = (void **)v248[1];
  v97 = (void **)v248[0];
  if ( v248[1] != v248[0] )
  {
    do
    {
      while ( *v97 != v97 + 2 )
      {
        operator delete(*v97);
        v97 += 4;
        if ( v96 == v97 )
          goto LABEL_131;
      }
      v97 += 4;
    }
    while ( v96 != v97 );
LABEL_131:
    v97 = (void **)v248[0];
  }
  if ( v97 )
    operator delete(v97);
  v98 = (void **)v246[1];
  v99 = (void **)v246[0];
  if ( v246[1] != v246[0] )
  {
    do
    {
      while ( *v99 != v99 + 2 )
      {
        operator delete(*v99);
        v99 += 4;
        if ( v98 == v99 )
          goto LABEL_137;
      }
      v99 += 4;
    }
    while ( v98 != v99 );
LABEL_137:
    v99 = (void **)v246[0];
  }
  if ( v99 )
    operator delete(v99);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v79;
}
