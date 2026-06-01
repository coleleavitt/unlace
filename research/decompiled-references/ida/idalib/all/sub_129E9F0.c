void __fastcall sub_129E9F0(__m128i *a1, __int64 a2, __m128i *a3, __int64 a4)
{
  __m128i *v5; // rbp
  void **v6; // rbx
  void **v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  char v12; // bl
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r15
  _QWORD *v16; // rbx
  char v17; // bl
  int v18; // ebx
  void **v19; // rbx
  void **v20; // r13
  void **v21; // rbx
  void **v22; // r13
  __m128i *v23; // rax
  __m128i si128; // xmm0
  _QWORD *v25; // rax
  _BYTE *v26; // rsi
  __int64 v27; // rdx
  _QWORD *v28; // rbx
  void *v29; // r13
  _BYTE *v30; // rsi
  __int64 v31; // rdx
  void **v32; // rbx
  void **v33; // r13
  void **v34; // rbx
  void **v35; // r13
  void **v36; // r13
  char *v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rax
  __m128i v40; // xmm0
  _QWORD *v41; // r15
  _BYTE *v42; // rsi
  void *v43; // rdx
  _QWORD *v44; // rdi
  void **v45; // rbx
  void **v46; // r13
  void **v47; // rbx
  void **v48; // r13
  void **v49; // rbx
  void **v50; // r13
  __m128i *v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rax
  __m128i v54; // xmm0
  _QWORD *v55; // r15
  _BYTE *v56; // rsi
  void *v57; // rdx
  _QWORD *v58; // rdi
  void **v59; // rbx
  void **v60; // r13
  void **v61; // rbx
  void **v62; // r13
  void **v63; // rbx
  void (__fastcall *v64)(_QWORD, _QWORD, _QWORD); // rax
  _BYTE *v65; // rbx
  _BYTE *v66; // rbp
  char *v67; // rbx
  char *v68; // r13
  __int64 *v69; // r15
  void **v70; // rdi
  void **v71; // r13
  void **v72; // rbx
  char *v73; // rbx
  char *v74; // rdi
  char *v75; // rdi
  void **v76; // r15
  void **v77; // r13
  char *v78; // rdi
  char *v79; // rdi
  void **v80; // rbx
  void **v81; // r13
  void (__fastcall *v82)(_QWORD, _QWORD, _QWORD); // rax
  __int64 *v83; // rdx
  __m128i v84; // xmm0
  __m128i v85; // xmm1
  void (__fastcall *v86)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 *v87; // rax
  void (__fastcall *v88)(_QWORD, _QWORD, _QWORD); // rax
  __int64 *v89; // rdx
  __m128i v90; // xmm0
  __m128i v91; // xmm2
  void (__fastcall *v92)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 *v93; // rax
  __int64 v94; // rax
  void **v95; // r13
  void **v96; // rbx
  char *v97; // rbx
  char *v98; // r13
  char *v99; // r15
  __int64 v100; // rax
  unsigned __int8 (__fastcall *v101)(__int64, void **); // rdx
  __int64 v102; // rdi
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rsi
  char *v105; // rdi
  char *v106; // r13
  void **v107; // r13
  void **v108; // rbx
  void **v109; // rbx
  __int64 v110; // rcx
  void **v111; // r15
  void **v112; // r13
  __int64 v113; // rax
  unsigned __int8 (__fastcall *v114)(__int64, void **); // rdx
  __int64 v115; // rdi
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // rsi
  void **v118; // rdi
  void **v119; // rbx
  __int64 v120; // rcx
  void **v121; // rbx
  _BYTE *v122; // rsi
  __int64 v123; // rdx
  _BYTE *v124; // rsi
  __int64 v125; // rdx
  void **v126; // rbx
  _BYTE *v127; // rsi
  __int64 v128; // rdx
  void **v129; // rbx
  __int64 v130; // r12
  __int64 v131; // rbx
  void *v132; // rdi
  void *v133; // rdi
  void **v134; // rdi
  void **v135; // r13
  void **v136; // rbp
  void *v137; // rdi
  void *v138; // rdi
  _BYTE *v139; // r13
  _BYTE *v140; // rbp
  char *v141; // r14
  char *v142; // rbx
  _BYTE *v143; // r12
  _BYTE *v144; // rbp
  void **v145; // rdi
  void **v146; // r13
  void **v147; // rbx
  char *v148; // r13
  char *v149; // rbx
  char *v150; // rdi
  char *v151; // rdi
  void **v152; // r12
  void **v153; // rbp
  char *v154; // rdi
  char *v155; // rdi
  __int64 v156; // r14
  __int64 v157; // rax
  const char **v158; // rax
  const char *v159; // r15
  __int64 v160; // r14
  __int64 v161; // rax
  const char **v162; // rax
  const char *v163; // r15
  void **v164; // r15
  void **v165; // r12
  void **v166; // r15
  void **v167; // r12
  __int64 v168; // rbx
  __m128i *v169; // rdi
  __m128i *v170; // rdi
  void **v171; // rbp
  void **v172; // rbx
  char *v173; // r13
  __int64 v174; // rax
  char *v175; // r15
  __int64 v176; // rax
  void (__fastcall *v177)(_QWORD, _QWORD, _QWORD); // rax
  __int64 *v178; // rdx
  __m128i v179; // xmm0
  void (__fastcall *v180)(_QWORD, _QWORD, _QWORD); // rcx
  __m128i v181; // xmm3
  __int64 *v182; // rax
  __int64 *v183; // rsi
  void (__fastcall *v184)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 *v185; // rdx
  __m128i v186; // xmm0
  __m128i v187; // xmm4
  void *v189; // [rsp+18h] [rbp-720h]
  void *v190; // [rsp+18h] [rbp-720h]
  _BYTE *v191; // [rsp+18h] [rbp-720h]
  __int64 *v192; // [rsp+18h] [rbp-720h]
  char *v193; // [rsp+18h] [rbp-720h]
  __int64 m128i_i64; // [rsp+18h] [rbp-720h]
  __m128i *v196; // [rsp+48h] [rbp-6F0h]
  __int64 v197; // [rsp+48h] [rbp-6F0h]
  __int64 v198; // [rsp+58h] [rbp-6E0h]
  void *v199[2]; // [rsp+60h] [rbp-6D8h] BYREF
  __int64 v200; // [rsp+70h] [rbp-6C8h]
  void *v201[2]; // [rsp+80h] [rbp-6B8h] BYREF
  __int64 v202; // [rsp+90h] [rbp-6A8h] BYREF
  void *v203[2]; // [rsp+A0h] [rbp-698h] BYREF
  _QWORD *v204; // [rsp+B0h] [rbp-688h] BYREF
  void *v205[2]; // [rsp+C0h] [rbp-678h] BYREF
  __int64 v206; // [rsp+D0h] [rbp-668h] BYREF
  void *v207; // [rsp+E0h] [rbp-658h] BYREF
  __int64 v208; // [rsp+E8h] [rbp-650h]
  char v209[16]; // [rsp+F0h] [rbp-648h] BYREF
  void *v210; // [rsp+100h] [rbp-638h]
  __int64 v211; // [rsp+108h] [rbp-630h]
  _QWORD v212[2]; // [rsp+110h] [rbp-628h] BYREF
  _QWORD *v213; // [rsp+120h] [rbp-618h]
  __int64 v214; // [rsp+128h] [rbp-610h]
  _QWORD v215[2]; // [rsp+130h] [rbp-608h] BYREF
  void *v216[2]; // [rsp+140h] [rbp-5F8h] BYREF
  void (__fastcall *v217)(_QWORD, _QWORD, _QWORD); // [rsp+150h] [rbp-5E8h] BYREF
  __int64 *v218; // [rsp+158h] [rbp-5E0h]
  void *v219; // [rsp+160h] [rbp-5D8h]
  _BYTE v220[16]; // [rsp+170h] [rbp-5C8h] BYREF
  void *v221; // [rsp+180h] [rbp-5B8h]
  _BYTE v222[16]; // [rsp+190h] [rbp-5A8h] BYREF
  void *v223; // [rsp+1A0h] [rbp-598h]
  void **v224; // [rsp+1A8h] [rbp-590h]
  void *v225; // [rsp+1B8h] [rbp-580h]
  _BYTE v226[16]; // [rsp+1C8h] [rbp-570h] BYREF
  void *v227; // [rsp+1D8h] [rbp-560h]
  _BYTE v228[16]; // [rsp+1E8h] [rbp-550h] BYREF
  char v229; // [rsp+1F8h] [rbp-540h]
  void *ptr[2]; // [rsp+200h] [rbp-538h] BYREF
  void (__fastcall *v231)(_QWORD, _QWORD, _QWORD); // [rsp+210h] [rbp-528h] BYREF
  __int64 *v232; // [rsp+218h] [rbp-520h] BYREF
  void *v233; // [rsp+220h] [rbp-518h] BYREF
  __int64 v234; // [rsp+228h] [rbp-510h] BYREF
  char v235[16]; // [rsp+230h] [rbp-508h] BYREF
  char *v236; // [rsp+240h] [rbp-4F8h] BYREF
  __int64 v237; // [rsp+248h] [rbp-4F0h]
  char v238[16]; // [rsp+250h] [rbp-4E8h] BYREF
  _BYTE *v239; // [rsp+260h] [rbp-4D8h] BYREF
  __int64 v240; // [rsp+268h] [rbp-4D0h]
  _BYTE v241[16]; // [rsp+270h] [rbp-4C8h] BYREF
  __int64 *v242; // [rsp+280h] [rbp-4B8h] BYREF
  __int64 v243; // [rsp+290h] [rbp-4A8h] BYREF
  __int64 v244; // [rsp+2A0h] [rbp-498h] BYREF
  _BYTE v245[16]; // [rsp+310h] [rbp-428h] BYREF
  void (__fastcall *v246)(_QWORD, _QWORD, _QWORD); // [rsp+320h] [rbp-418h]
  __int64 *v247; // [rsp+328h] [rbp-410h]
  _BYTE v248[16]; // [rsp+330h] [rbp-408h] BYREF
  void (__fastcall *v249)(_QWORD, _QWORD, _QWORD); // [rsp+340h] [rbp-3F8h]
  __int64 *v250; // [rsp+348h] [rbp-3F0h]
  void *v251[2]; // [rsp+410h] [rbp-328h] BYREF
  __int64 v252; // [rsp+420h] [rbp-318h]
  _BYTE *v253; // [rsp+428h] [rbp-310h] BYREF
  __int64 v254; // [rsp+430h] [rbp-308h]
  _BYTE v255[56]; // [rsp+438h] [rbp-300h] BYREF
  _BYTE *v256; // [rsp+470h] [rbp-2C8h] BYREF
  __int64 v257; // [rsp+478h] [rbp-2C0h]
  _BYTE v258[160]; // [rsp+480h] [rbp-2B8h] BYREF
  __m128i v259; // [rsp+520h] [rbp-218h] BYREF
  void (__fastcall *v260)(_QWORD, _QWORD, _QWORD); // [rsp+530h] [rbp-208h]
  __int64 *v261; // [rsp+538h] [rbp-200h]
  __m128i v262; // [rsp+540h] [rbp-1F8h] BYREF
  void (__fastcall *v263)(_QWORD, _QWORD, _QWORD); // [rsp+550h] [rbp-1E8h]
  __int64 *v264; // [rsp+558h] [rbp-1E0h]
  _BYTE *v265; // [rsp+560h] [rbp-1D8h] BYREF
  __int64 v266; // [rsp+568h] [rbp-1D0h]
  _BYTE v267[192]; // [rsp+570h] [rbp-1C8h] BYREF
  void *v268; // [rsp+630h] [rbp-108h]
  __int64 v269; // [rsp+640h] [rbp-F8h] BYREF
  void *v270; // [rsp+650h] [rbp-E8h]
  __int64 v271; // [rsp+660h] [rbp-D8h] BYREF
  void *v272; // [rsp+670h] [rbp-C8h]
  __int64 v273; // [rsp+680h] [rbp-B8h] BYREF
  void *v274; // [rsp+690h] [rbp-A8h]
  void **v275; // [rsp+698h] [rbp-A0h]
  void *v276; // [rsp+6A8h] [rbp-90h]
  __int64 v277; // [rsp+6B8h] [rbp-80h] BYREF
  void *v278; // [rsp+6C8h] [rbp-70h]
  _BYTE v279[24]; // [rsp+6D8h] [rbp-60h] BYREF
  char v280; // [rsp+6F0h] [rbp-48h]

  v5 = a1;
  sub_121FCF0((__int64)a1, a2, a3, a4);
  v198 = (__int64)&a1[311].m128i_i64[1];
  LOBYTE(v252) = 0;
  *(_OWORD *)ptr = 0;
  v231 = nullptr;
  a1->m128i_i64[0] = (__int64)off_2C3EC90;
  sub_110B910(
    (__int64)&a1[311].m128i_i64[1],
    nullptr,
    0,
    0,
    0,
    (__int64 *)ptr,
    nullptr,
    0,
    nullptr,
    0,
    (_BYTE *)v251[0],
    (__int64)v251[1],
    v252);
  v6 = (void **)ptr[1];
  v7 = (void **)ptr[0];
  if ( ptr[1] != ptr[0] )
  {
    do
    {
      while ( *v7 != v7 + 2 )
      {
        operator delete(*v7);
        v7 += 4;
        if ( v6 == v7 )
          goto LABEL_4;
      }
      v7 += 4;
    }
    while ( v6 != v7 );
LABEL_4:
    v7 = (void **)ptr[0];
  }
  if ( v7 )
    operator delete(v7);
  sub_129C650((__int64)v201, (__int64)a1);
  *(_OWORD *)v251 = 0;
  v256 = v258;
  v253 = v255;
  v265 = v267;
  v252 = 0;
  v254 = 0x100000000LL;
  v257 = 0x100000000LL;
  v260 = nullptr;
  v263 = nullptr;
  v266 = 0x100000000LL;
  v280 = 0;
  *(_OWORD *)v199 = 0;
  v200 = 0;
  LODWORD(ptr[0]) = 2323;
  v8 = sub_21B6DA0(a4, ptr, 1);
  v9 = *(_QWORD *)(a4 + 8);
  v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
  v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
  if ( v10 == v11 )
    goto LABEL_11;
  while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 2323) )
  {
    if ( v11 == ++v10 )
      goto LABEL_11;
  }
  if ( v11 == v10 )
  {
LABEL_11:
    v12 = 0;
  }
  else
  {
    do
    {
      v156 = *v10;
      v157 = *(_QWORD *)(*v10 + 16LL);
      if ( !v157 )
        v157 = *v10;
      ++v10;
      *(_BYTE *)(v157 + 44) |= 1u;
      if ( v10 == v11 )
        break;
      while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 2323) )
      {
        if ( v11 == ++v10 )
          goto LABEL_322;
      }
    }
    while ( v11 != v10 );
LABEL_322:
    v158 = *(const char ***)(v156 + 48);
    v12 = 0;
    v159 = *v158;
    if ( *v158 && strlen(*v158) == 9 )
    {
      if ( *(_QWORD *)v159 != 0x612D786574726F63LL || v159[8] != 55 )
        v12 = 1;
      v12 ^= 1u;
    }
  }
  sub_11C67F0(v12, "-mcpu=cortex-a7", 15, (__int64)v199);
  LODWORD(ptr[0]) = 2382;
  v13 = sub_21B6DA0(a4, ptr, 1);
  v14 = *(_QWORD *)(a4 + 8);
  v15 = (_QWORD *)(v14 + 8LL * (unsigned int)v13);
  v16 = (_QWORD *)(v14 + 8 * HIDWORD(v13));
  if ( v15 == v16 )
    goto LABEL_16;
  while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 2382) )
  {
    if ( v16 == ++v15 )
      goto LABEL_16;
  }
  if ( v16 == v15 )
  {
LABEL_16:
    v17 = 0;
  }
  else
  {
    do
    {
      v160 = *v15;
      v161 = *(_QWORD *)(*v15 + 16LL);
      if ( !v161 )
        v161 = *v15;
      ++v15;
      *(_BYTE *)(v161 + 44) |= 1u;
      if ( v15 == v16 )
        break;
      while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 2382) )
      {
        if ( v16 == ++v15 )
          goto LABEL_336;
      }
    }
    while ( v16 != v15 );
LABEL_336:
    v162 = *(const char ***)(v160 + 48);
    v17 = 0;
    v163 = *v162;
    if ( *v162 && strlen(*v162) == 10 )
    {
      if ( *(_QWORD *)v163 != 0x7066762D6E6F656ELL || *((_WORD *)v163 + 4) != 13430 )
        v17 = 1;
      v17 ^= 1u;
    }
  }
  sub_11C67F0(v17, "-mfpu=neon-vfpv4", 16, (__int64)v199);
  v18 = sub_113EC30((__int64 *)a2, a3, a4);
  sub_11C67F0(v18 == 1, "-mfloat-abi=soft", 16, (__int64)v199);
  sub_11C67F0(v18 == 2, "-mfloat-abi=softfp", 18, (__int64)v199);
  sub_11C67F0(v18 == 3, "-mfloat-abi=hard", 16, (__int64)v199);
  v232 = &v234;
  *(_OWORD *)ptr = 0;
  v233 = (void *)0x100000000LL;
  v240 = 0x100000000LL;
  v239 = v241;
  *(_OWORD *)v205 = 0;
  v231 = nullptr;
  v246 = nullptr;
  v249 = nullptr;
  v209[0] = 0;
  v206 = 0;
  sub_110B910((__int64)v216, nullptr, 0, 0, 0, (__int64 *)v205, nullptr, 0, nullptr, 0, v207, v208, 0);
  sub_110E210((char **)ptr, (__int64)v216);
  if ( v229 && v227 != v228 )
    operator delete(v227);
  if ( v225 != v226 )
    operator delete(v225);
  v19 = v224;
  v20 = (void **)v223;
  if ( v224 != v223 )
  {
    do
    {
      while ( *v20 != v20 + 2 )
      {
        operator delete(*v20);
        v20 += 4;
        if ( v19 == v20 )
          goto LABEL_23;
      }
      v20 += 4;
    }
    while ( v19 != v20 );
LABEL_23:
    v20 = (void **)v223;
  }
  if ( v20 )
    operator delete(v20);
  if ( v221 != v222 )
    operator delete(v221);
  if ( v219 != v220 )
    operator delete(v219);
  if ( v216[0] != &v217 )
    operator delete(v216[0]);
  v21 = (void **)v205[1];
  v22 = (void **)v205[0];
  if ( v205[1] != v205[0] )
  {
    do
    {
      while ( *v22 != v22 + 2 )
      {
        operator delete(*v22);
        v22 += 4;
        if ( v21 == v22 )
          goto LABEL_35;
      }
      v22 += 4;
    }
    while ( v21 != v22 );
LABEL_35:
    v22 = (void **)v205[0];
  }
  if ( v22 )
    operator delete(v22);
  v207 = v209;
  strcpy(v209, "-mcpu=cortex-a7");
  LOBYTE(v206) = 0;
  v208 = 15;
  v210 = v212;
  v23 = (__m128i *)operator new(0x11u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9F00);
  v212[0] = 16;
  v23[1].m128i_i8[0] = 0;
  *v23 = si128;
  *(_OWORD *)v203 = 0;
  v210 = v23;
  v211 = 16;
  v204 = nullptr;
  v25 = (_QWORD *)operator new(0x40u);
  v26 = v207;
  v27 = v208;
  v203[0] = v25;
  v28 = v25;
  v29 = v25 + 8;
  *v25 = v25 + 2;
  v204 = v25 + 8;
  sub_129A5D0(v25, v26, (__int64)&v26[v27]);
  v30 = v210;
  v31 = v211;
  v28[4] = v28 + 6;
  sub_129A5D0(v28 + 4, v30, (__int64)&v30[v31]);
  v203[1] = v29;
  sub_110B910(
    (__int64)v216,
    "/a7_soft",
    8,
    0,
    0,
    (__int64 *)v203,
    nullptr,
    0,
    nullptr,
    0,
    (_BYTE *)v205[0],
    (__int64)v205[1],
    v206);
  sub_110E210((char **)ptr, (__int64)v216);
  if ( v229 && v227 != v228 )
    operator delete(v227);
  if ( v225 != v226 )
    operator delete(v225);
  v32 = v224;
  v33 = (void **)v223;
  if ( v224 != v223 )
  {
    do
    {
      while ( *v33 != v33 + 2 )
      {
        operator delete(*v33);
        v33 += 4;
        if ( v32 == v33 )
          goto LABEL_44;
      }
      v33 += 4;
    }
    while ( v32 != v33 );
LABEL_44:
    v33 = (void **)v223;
  }
  if ( v33 )
    operator delete(v33);
  if ( v221 != v222 )
    operator delete(v221);
  if ( v219 != v220 )
    operator delete(v219);
  if ( v216[0] != &v217 )
    operator delete(v216[0]);
  v34 = (void **)v203[1];
  v35 = (void **)v203[0];
  if ( v203[1] != v203[0] )
  {
    do
    {
      while ( *v35 != v35 + 2 )
      {
        operator delete(*v35);
        v35 += 4;
        if ( v34 == v35 )
          goto LABEL_56;
      }
      v35 += 4;
    }
    while ( v34 != v35 );
LABEL_56:
    v35 = (void **)v203[0];
  }
  if ( v35 )
    operator delete(v35);
  if ( v210 != v212 )
    operator delete(v210);
  if ( v207 != v209 )
    operator delete(v207);
  strcpy(v209, "-mcpu=cortex-a7");
  LOBYTE(v206) = 0;
  v36 = &v207;
  v207 = v209;
  v208 = 15;
  v210 = v212;
  v37 = (char *)operator new(0x13u);
  v38 = _mm_load_si128((const __m128i *)&xmmword_23A9F00);
  strcpy(v37 + 16, "fp");
  *(__m128i *)v37 = v38;
  v210 = v37;
  v212[0] = 18;
  v211 = 18;
  v213 = v215;
  v39 = operator new(0x11u);
  v40 = _mm_load_si128((const __m128i *)&xmmword_23A9F10);
  v215[0] = 16;
  *(_BYTE *)(v39 + 16) = 0;
  *(__m128i *)v39 = v40;
  v213 = (_QWORD *)v39;
  v214 = 16;
  *(_OWORD *)v203 = 0;
  v204 = nullptr;
  v41 = (_QWORD *)operator new(0x60u);
  v203[0] = v41;
  v189 = v41 + 12;
  v204 = v41 + 12;
  do
  {
    v42 = *v36;
    v43 = v36[1];
    v44 = v41;
    *v41 = v41 + 2;
    v36 += 4;
    v41 += 4;
    sub_129A5D0(v44, v42, (__int64)v43 + (_QWORD)v42);
  }
  while ( v36 != v216 );
  v203[1] = v189;
  sub_110B910(
    (__int64)v216,
    "/a7_softfp_neon-vfpv4",
    21,
    0,
    0,
    (__int64 *)v203,
    nullptr,
    0,
    nullptr,
    0,
    (_BYTE *)v205[0],
    (__int64)v205[1],
    v206);
  sub_110E210((char **)ptr, (__int64)v216);
  if ( v229 && v227 != v228 )
    operator delete(v227);
  if ( v225 != v226 )
    operator delete(v225);
  v45 = v224;
  v46 = (void **)v223;
  if ( v224 != v223 )
  {
    do
    {
      while ( *v46 != v46 + 2 )
      {
        operator delete(*v46);
        v46 += 4;
        if ( v45 == v46 )
          goto LABEL_71;
      }
      v46 += 4;
    }
    while ( v45 != v46 );
LABEL_71:
    v46 = (void **)v223;
  }
  if ( v46 )
    operator delete(v46);
  if ( v221 != v222 )
    operator delete(v221);
  if ( v219 != v220 )
    operator delete(v219);
  if ( v216[0] != &v217 )
    operator delete(v216[0]);
  v47 = (void **)v203[1];
  v48 = (void **)v203[0];
  if ( v203[1] != v203[0] )
  {
    do
    {
      while ( *v48 != v48 + 2 )
      {
        operator delete(*v48);
        v48 += 4;
        if ( v47 == v48 )
          goto LABEL_83;
      }
      v48 += 4;
    }
    while ( v47 != v48 );
LABEL_83:
    v48 = (void **)v203[0];
  }
  if ( v48 )
    operator delete(v48);
  v49 = v216;
  do
  {
    while ( 1 )
    {
      v49 -= 4;
      if ( *v49 == v49 + 2 )
        break;
      operator delete(*v49);
      if ( v49 == &v207 )
        goto LABEL_89;
    }
  }
  while ( v49 != &v207 );
LABEL_89:
  strcpy(v209, "-mcpu=cortex-a7");
  LOBYTE(v206) = 0;
  v207 = v209;
  v50 = &v207;
  v208 = 15;
  v210 = v212;
  v51 = (__m128i *)operator new(0x11u);
  v52 = _mm_load_si128((const __m128i *)&xmmword_23A9F20);
  v212[0] = 16;
  v51[1].m128i_i8[0] = 0;
  *v51 = v52;
  v210 = v51;
  v211 = 16;
  v213 = v215;
  v53 = operator new(0x11u);
  v54 = _mm_load_si128((const __m128i *)&xmmword_23A9F10);
  v215[0] = 16;
  *(_BYTE *)(v53 + 16) = 0;
  *(__m128i *)v53 = v54;
  v213 = (_QWORD *)v53;
  v214 = 16;
  *(_OWORD *)v203 = 0;
  v204 = nullptr;
  v55 = (_QWORD *)operator new(0x60u);
  v203[0] = v55;
  v190 = v55 + 12;
  v204 = v55 + 12;
  do
  {
    v56 = *v50;
    v57 = v50[1];
    v58 = v55;
    *v55 = v55 + 2;
    v50 += 4;
    v55 += 4;
    sub_129A5D0(v58, v56, (__int64)v57 + (_QWORD)v56);
  }
  while ( v50 != v216 );
  v203[1] = v190;
  sub_110B910(
    (__int64)v216,
    "/a7_hard_neon-vfpv4",
    19,
    0,
    0,
    (__int64 *)v203,
    nullptr,
    0,
    nullptr,
    0,
    (_BYTE *)v205[0],
    (__int64)v205[1],
    v206);
  sub_110E210((char **)ptr, (__int64)v216);
  if ( v229 && v227 != v228 )
    operator delete(v227);
  if ( v225 != v226 )
    operator delete(v225);
  v59 = v224;
  v60 = (void **)v223;
  if ( v224 != v223 )
  {
    do
    {
      while ( *v60 != v60 + 2 )
      {
        operator delete(*v60);
        v60 += 4;
        if ( v59 == v60 )
          goto LABEL_97;
      }
      v60 += 4;
    }
    while ( v59 != v60 );
LABEL_97:
    v60 = (void **)v223;
  }
  if ( v60 )
    operator delete(v60);
  if ( v221 != v222 )
    operator delete(v221);
  if ( v219 != v220 )
    operator delete(v219);
  if ( v216[0] != &v217 )
    operator delete(v216[0]);
  v61 = (void **)v203[1];
  v62 = (void **)v203[0];
  if ( v203[1] != v203[0] )
  {
    do
    {
      while ( *v62 != v62 + 2 )
      {
        operator delete(*v62);
        v62 += 4;
        if ( v61 == v62 )
          goto LABEL_109;
      }
      v62 += 4;
    }
    while ( v61 != v62 );
LABEL_109:
    v62 = (void **)v203[0];
  }
  if ( v62 )
    operator delete(v62);
  v63 = v216;
  do
  {
    while ( 1 )
    {
      v63 -= 4;
      if ( *v63 == v63 + 2 )
        break;
      operator delete(*v63);
      if ( v63 == &v207 )
        goto LABEL_115;
    }
  }
  while ( v63 != &v207 );
LABEL_115:
  if ( !(unsigned __int8)sub_1110810((__int64)ptr, (__int64 *)a2, (__int64)v199, (__int64 *)&v265, 0) )
    goto LABEL_116;
  sub_117F8A0((__int64 *)v251, (__int64 *)ptr);
  sub_1180210((__int64)&v253, (__int64)&v232);
  sub_1180630((__int64)&v256, (__int64)&v239);
  v177 = v246;
  v217 = nullptr;
  v178 = v218;
  if ( v246 )
  {
    v246(v216, v245, 2);
    v178 = v247;
    v177 = v246;
  }
  v179 = _mm_load_si128((const __m128i *)v216);
  v180 = v260;
  v260 = v177;
  v181 = _mm_load_si128(&v259);
  v182 = v261;
  v261 = v178;
  v259 = v179;
  *(__m128i *)v216 = v181;
  v217 = v180;
  v218 = v182;
  if ( v180 )
    v180(v216, v216, 3);
  v64 = v249;
  v183 = v218;
  v217 = nullptr;
  if ( v249 )
  {
    v249(v216, v248, 2);
    v183 = v250;
    v64 = v249;
  }
  v184 = v263;
  v185 = v264;
  v263 = v64;
  v186 = _mm_load_si128((const __m128i *)v216);
  v264 = v183;
  v187 = _mm_load_si128(&v262);
  v217 = v184;
  v262 = v186;
  *(__m128i *)v216 = v187;
  v218 = v185;
  if ( v184 )
  {
    v184(v216, v216, 3);
LABEL_116:
    v64 = v249;
  }
  if ( v64 )
    v64(v248, v248, 3);
  if ( v246 )
    v246(v245, v245, 3);
  v191 = v239;
  v65 = &v239[160 * (unsigned int)v240];
  if ( v239 != v65 )
  {
    v196 = v5;
    v66 = &v239[160 * (unsigned int)v240];
    while ( 1 )
    {
      v66 -= 160;
      v67 = *((char **)v66 + 4);
      v68 = &v67[96 * *((unsigned int *)v66 + 10)];
      if ( v67 != v68 )
        break;
LABEL_128:
      if ( v67 != v66 + 48 )
        free(v67);
      if ( *(_BYTE **)v66 == v66 + 16 )
      {
        if ( v191 == v66 )
        {
LABEL_132:
          v5 = v196;
          v65 = v239;
          goto LABEL_133;
        }
      }
      else
      {
        operator delete(*(void **)v66);
        if ( v191 == v66 )
          goto LABEL_132;
      }
    }
    while ( 1 )
    {
      v68 -= 96;
      if ( v68[80] )
        goto LABEL_347;
      while ( *(char **)v68 == v68 + 16 )
      {
        if ( v67 == v68 )
        {
LABEL_127:
          v67 = *((char **)v66 + 4);
          goto LABEL_128;
        }
        v68 -= 96;
        if ( v68[80] )
        {
LABEL_347:
          v164 = *((void ***)v68 + 4);
          v165 = &v164[4 * *((unsigned int *)v68 + 10)];
          if ( v164 != v165 )
          {
            do
            {
              while ( 1 )
              {
                v165 -= 4;
                if ( *v165 == v165 + 2 )
                  break;
                operator delete(*v165);
                if ( v164 == v165 )
                  goto LABEL_350;
              }
            }
            while ( v164 != v165 );
LABEL_350:
            v164 = *((void ***)v68 + 4);
          }
          if ( v164 != (void **)(v68 + 48) )
            free(v164);
        }
      }
      operator delete(*(void **)v68);
      if ( v67 == v68 )
        goto LABEL_127;
    }
  }
LABEL_133:
  if ( v65 != v241 )
    free(v65);
  v192 = v232;
  v69 = &v232[7 * (unsigned int)v233];
  if ( v232 != v69 )
  {
    do
    {
      while ( 1 )
      {
        v69 -= 7;
        v70 = (void **)v69[4];
        v71 = (void **)v69[5];
        v72 = v70;
        if ( v71 != v70 )
        {
          do
          {
            while ( *v72 != v72 + 2 )
            {
              operator delete(*v72);
              v72 += 4;
              if ( v71 == v72 )
                goto LABEL_139;
            }
            v72 += 4;
          }
          while ( v71 != v72 );
LABEL_139:
          v70 = (void **)v69[4];
        }
        if ( v70 )
          operator delete(v70);
        if ( (__int64 *)*v69 == v69 + 2 )
          break;
        operator delete((void *)*v69);
        if ( v192 == v69 )
          goto LABEL_144;
      }
    }
    while ( v192 != v69 );
LABEL_144:
    v69 = v232;
  }
  if ( v69 != &v234 )
    free(v69);
  v73 = (char *)ptr[0];
  v193 = (char *)ptr[1];
  if ( ptr[1] != ptr[0] )
  {
    do
    {
      while ( 1 )
      {
        if ( v73[184] )
        {
          v74 = *((char **)v73 + 19);
          if ( v74 != v73 + 168 )
            operator delete(v74);
        }
        v75 = *((char **)v73 + 15);
        if ( v75 != v73 + 136 )
          operator delete(v75);
        v76 = *((void ***)v73 + 13);
        v77 = *((void ***)v73 + 12);
        if ( v76 != v77 )
        {
          do
          {
            while ( *v77 != v77 + 2 )
            {
              operator delete(*v77);
              v77 += 4;
              if ( v77 == v76 )
                goto LABEL_156;
            }
            v77 += 4;
          }
          while ( v76 != v77 );
LABEL_156:
          v77 = *((void ***)v73 + 12);
        }
        if ( v77 )
          operator delete(v77);
        v78 = *((char **)v73 + 8);
        if ( v78 != v73 + 80 )
          operator delete(v78);
        v79 = *((char **)v73 + 4);
        if ( v79 != v73 + 48 )
          operator delete(v79);
        if ( *(char **)v73 == v73 + 16 )
          break;
        operator delete(*(void **)v73);
        v73 += 192;
        if ( v193 == v73 )
          goto LABEL_165;
      }
      v73 += 192;
    }
    while ( v193 != v73 );
LABEL_165:
    v73 = (char *)ptr[0];
  }
  if ( v73 )
    operator delete(v73);
  v80 = (void **)v199[1];
  v81 = (void **)v199[0];
  if ( v199[1] != v199[0] )
  {
    do
    {
      while ( *v81 != v81 + 2 )
      {
        operator delete(*v81);
        v81 += 4;
        if ( v80 == v81 )
          goto LABEL_171;
      }
      v81 += 4;
    }
    while ( v80 != v81 );
LABEL_171:
    v81 = (void **)v199[0];
  }
  if ( v81 )
    operator delete(v81);
  sub_117F8A0(v5[115].m128i_i64, (__int64 *)v251);
  sub_1180210((__int64)&v5[116].m128i_i64[1], (__int64)&v253);
  sub_1180630((__int64)v5[121].m128i_i64, (__int64)&v256);
  v82 = v260;
  v231 = nullptr;
  v83 = v232;
  if ( v260 )
  {
    v260(ptr, &v259, 2);
    v83 = v261;
    v82 = v260;
  }
  v84 = _mm_load_si128((const __m128i *)ptr);
  v85 = _mm_loadu_si128(v5 + 132);
  v86 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v5[133].m128i_i64[0];
  v5[133].m128i_i64[0] = (__int64)v82;
  v87 = (__int64 *)v5[133].m128i_i64[1];
  *(__m128i *)ptr = v85;
  v5[132] = v84;
  v231 = v86;
  v232 = v87;
  v5[133].m128i_i64[1] = (__int64)v83;
  if ( v86 )
    v86(ptr, ptr, 3);
  v88 = v263;
  v89 = v232;
  v231 = nullptr;
  if ( v263 )
  {
    v263(ptr, &v262, 2);
    v89 = v264;
    v88 = v263;
  }
  v90 = _mm_load_si128((const __m128i *)ptr);
  v91 = _mm_loadu_si128(v5 + 134);
  v92 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))v5[135].m128i_i64[0];
  v5[135].m128i_i64[0] = (__int64)v88;
  v93 = (__int64 *)v5[135].m128i_i64[1];
  *(__m128i *)ptr = v91;
  v5[134] = v90;
  v231 = v92;
  v232 = v93;
  v5[135].m128i_i64[1] = (__int64)v89;
  if ( v92 )
    v92(ptr, ptr, 3);
  sub_1183BF0((__int64)v5[136].m128i_i64, (__int64)&v265);
  v94 = v5[136].m128i_u32[2];
  if ( (_DWORD)v94 )
  {
    v168 = v5[136].m128i_i64[0] + 192 * v94 - 192;
    sub_9EE8A0(v198, v168);
    sub_9EE8A0((__int64)&v5[313].m128i_i64[1], v168 + 32);
    sub_9EE8A0((__int64)&v5[315].m128i_i64[1], v168 + 64);
    sub_11189B0((__int64)&v5[317].m128i_i64[1], (__int64 *)(v168 + 96));
    sub_9EE8A0((__int64)v5[319].m128i_i64, v168 + 120);
    v169 = v5 + 321;
    if ( v5[323].m128i_i8[0] )
    {
      if ( *(_BYTE *)(v168 + 184) )
      {
        sub_9EE8A0((__int64)v169, v168 + 152);
      }
      else
      {
        v170 = (__m128i *)v5[321].m128i_i64[0];
        v5[323].m128i_i8[0] = 0;
        if ( v170 != &v5[322] )
          operator delete(v170);
      }
    }
    else if ( *(_BYTE *)(v168 + 184) )
    {
      v5[321].m128i_i64[0] = (__int64)v5[322].m128i_i64;
      sub_129A5D0(v169, *(_BYTE **)(v168 + 152), *(_QWORD *)(v168 + 152) + *(_QWORD *)(v168 + 160));
      v5[323].m128i_i8[0] = 1;
    }
  }
  v95 = (void **)v5[39].m128i_i64[0];
  m128i_i64 = (__int64)v5[39].m128i_i64;
  v96 = &v95[4 * v5[39].m128i_u32[2]];
  while ( v95 != v96 )
  {
    while ( 1 )
    {
      v96 -= 4;
      if ( *v96 == v96 + 2 )
        break;
      operator delete(*v96);
      if ( v95 == v96 )
        goto LABEL_187;
    }
  }
LABEL_187:
  v5[39].m128i_i32[2] = 0;
  sub_129CF60((__int64)ptr, v5);
  v97 = (char *)ptr[0];
  v98 = (char *)ptr[0] + 32 * LODWORD(ptr[1]);
  if ( v98 != ptr[0] )
  {
    do
    {
      while ( 1 )
      {
        v99 = v97;
        v100 = sub_112C5D0((__int64)v5);
        v101 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v100 + 96LL);
        v216[0] = v97;
        LOWORD(v219) = 260;
        if ( v101(v100, v216) )
          break;
        v97 += 32;
        if ( v98 == v97 )
          goto LABEL_193;
      }
      v102 = v5[39].m128i_u32[2];
      v103 = v5[39].m128i_u64[0];
      v104 = v102 + 1;
      v105 = (char *)(v103 + 32 * v102);
      if ( v104 > v5[39].m128i_u32[3] )
      {
        if ( v103 > (unsigned __int64)v97 || v105 <= v97 )
        {
          sub_A8C1F0(m128i_i64, v104);
          v105 = (char *)(v5[39].m128i_i64[0] + 32LL * v5[39].m128i_u32[2]);
        }
        else
        {
          v175 = &v97[-v103];
          sub_A8C1F0(m128i_i64, v104);
          v176 = v5[39].m128i_i64[0];
          v99 = &v175[v176];
          v105 = (char *)(v176 + 32LL * v5[39].m128i_u32[2]);
        }
      }
      v97 += 32;
      *(_QWORD *)v105 = v105 + 16;
      sub_129A5D0(v105, *(_BYTE **)v99, *(_QWORD *)v99 + *((_QWORD *)v99 + 1));
      ++v5[39].m128i_i32[2];
    }
    while ( v98 != v97 );
LABEL_193:
    v106 = (char *)ptr[0];
    v97 = (char *)ptr[0] + 32 * LODWORD(ptr[1]);
    if ( ptr[0] != v97 )
    {
      do
      {
        while ( 1 )
        {
          v97 -= 32;
          if ( *(char **)v97 == v97 + 16 )
            break;
          operator delete(*(void **)v97);
          if ( v106 == v97 )
          {
            v97 = (char *)ptr[0];
            goto LABEL_197;
          }
        }
      }
      while ( v106 != v97 );
      v97 = (char *)ptr[0];
    }
  }
LABEL_197:
  if ( v97 != (char *)&v231 )
    free(v97);
  v107 = (void **)v5[6].m128i_i64[0];
  v197 = (__int64)v5[6].m128i_i64;
  v108 = &v107[4 * v5[6].m128i_u32[2]];
  while ( v107 != v108 )
  {
    while ( 1 )
    {
      v108 -= 4;
      if ( *v108 == v108 + 2 )
        break;
      operator delete(*v108);
      if ( v107 == v108 )
        goto LABEL_203;
    }
  }
LABEL_203:
  v5[6].m128i_i32[2] = 0;
  sub_129D170((__int64)ptr, v5);
  v109 = (void **)ptr[0];
  v110 = 32LL * LODWORD(ptr[1]);
  v111 = (void **)((char *)ptr[0] + v110);
  if ( ptr[0] != (char *)ptr[0] + v110 )
  {
    do
    {
      while ( 1 )
      {
        v112 = v109;
        v113 = sub_112C5D0((__int64)v5);
        v114 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v113 + 96LL);
        v216[0] = v109;
        LOWORD(v219) = 260;
        if ( v114(v113, v216) )
          break;
        v109 += 4;
        if ( v111 == v109 )
          goto LABEL_209;
      }
      v115 = v5[6].m128i_u32[2];
      v116 = v5[6].m128i_u64[0];
      v117 = v115 + 1;
      v118 = (void **)(v116 + 32 * v115);
      if ( v117 > v5[6].m128i_u32[3] )
      {
        if ( v116 > (unsigned __int64)v109 || v118 <= v109 )
        {
          sub_A8C1F0(v197, v117);
          v118 = (void **)(v5[6].m128i_i64[0] + 32LL * v5[6].m128i_u32[2]);
        }
        else
        {
          v173 = (char *)v109 - v116;
          sub_A8C1F0(v197, v117);
          v174 = v5[6].m128i_i64[0];
          v112 = (void **)&v173[v174];
          v118 = (void **)(v174 + 32LL * v5[6].m128i_u32[2]);
        }
      }
      v109 += 4;
      *v118 = v118 + 2;
      sub_129A5D0(v118, *v112, (__int64)v112[1] + (_QWORD)*v112);
      ++v5[6].m128i_i32[2];
    }
    while ( v111 != v109 );
LABEL_209:
    v119 = (void **)ptr[0];
    v120 = 32LL * LODWORD(ptr[1]);
    v111 = (void **)((char *)ptr[0] + v120);
    if ( ptr[0] != (char *)ptr[0] + v120 )
    {
      do
      {
        while ( 1 )
        {
          v111 -= 4;
          if ( *v111 == v111 + 2 )
            break;
          operator delete(*v111);
          if ( v119 == v111 )
          {
            v111 = (void **)ptr[0];
            goto LABEL_213;
          }
        }
      }
      while ( v119 != v111 );
      v111 = (void **)ptr[0];
    }
  }
LABEL_213:
  if ( v111 != (void **)&v231 )
    free(v111);
  v121 = (void **)&v239;
  ptr[0] = &v231;
  sub_129A5D0(ptr, (_BYTE *)v201[0], (__int64)v201[0] + (unsigned __int64)v201[1]);
  v233 = v235;
  strcpy(v235, "usr");
  v234 = 3;
  v236 = v238;
  strcpy(v238, "lib");
  v216[0] = ptr;
  v237 = 3;
  v216[1] = &dword_0 + 3;
  sub_129A750(v203, (__int64 *)v216);
  do
  {
    while ( 1 )
    {
      v121 -= 4;
      if ( *v121 == v121 + 2 )
        break;
      operator delete(*v121);
      if ( v121 == ptr )
        goto LABEL_218;
    }
  }
  while ( v121 != ptr );
LABEL_218:
  sub_129BDF0((char *)v205, (__int64)v5[1].m128i_i64);
  ptr[0] = &v231;
  sub_129A5D0(ptr, (_BYTE *)v203[0], (__int64)v203[0] + (unsigned __int64)v203[1]);
  v122 = (_BYTE *)v5[311].m128i_i64[1];
  v123 = v5[312].m128i_i64[0];
  v233 = v235;
  sub_129A5D0(&v233, v122, (__int64)&v122[v123]);
  v199[0] = ptr;
  v199[1] = &dword_0 + 2;
  sub_129A750(&v207, (__int64 *)v199);
  LOWORD(v219) = 260;
  v216[0] = &v207;
  sub_11C52D0(a2, (__int64)v216, m128i_i64);
  if ( v207 != v209 )
    operator delete(v207);
  if ( v233 != v235 )
    operator delete(v233);
  if ( ptr[0] != &v231 )
    operator delete(ptr[0]);
  ptr[0] = &v231;
  sub_129A5D0(ptr, *(_BYTE **)(a2 + 104), *(_QWORD *)(a2 + 104) + *(_QWORD *)(a2 + 112));
  v233 = v235;
  strcpy(v238, "lib");
  strcpy(v235, "..");
  v236 = v238;
  v234 = 2;
  v239 = v241;
  v237 = 3;
  sub_129A5D0(&v239, (_BYTE *)v205[0], (__int64)v205[0] + (unsigned __int64)v205[1]);
  v124 = (_BYTE *)v5[311].m128i_i64[1];
  v125 = v5[312].m128i_i64[0];
  v242 = &v243;
  sub_129A5D0(&v242, v124, (__int64)&v124[v125]);
  v199[0] = ptr;
  v199[1] = &byte_5;
  sub_129A750(&v207, (__int64 *)v199);
  LOWORD(v219) = 260;
  v216[0] = &v207;
  sub_11C52D0(a2, (__int64)v216, m128i_i64);
  if ( v207 != v209 )
    operator delete(v207);
  v126 = (void **)&v244;
  do
  {
    while ( 1 )
    {
      v126 -= 4;
      if ( *v126 == v126 + 2 )
        break;
      operator delete(*v126);
      if ( v126 == ptr )
        goto LABEL_229;
    }
  }
  while ( v126 != ptr );
LABEL_229:
  ptr[0] = &v231;
  sub_129A5D0(ptr, (_BYTE *)v203[0], (__int64)v203[0] + (unsigned __int64)v203[1]);
  v233 = v235;
  sub_129A5D0(&v233, (_BYTE *)v205[0], (__int64)v205[0] + (unsigned __int64)v205[1]);
  v127 = (_BYTE *)v5[311].m128i_i64[1];
  v128 = v5[312].m128i_i64[0];
  v236 = v238;
  sub_129A5D0(&v236, v127, (__int64)&v127[v128]);
  v199[0] = ptr;
  v199[1] = &dword_0 + 3;
  sub_129A750(&v207, (__int64 *)v199);
  v216[0] = &v207;
  LOWORD(v219) = 260;
  sub_11C52D0(a2, (__int64)v216, m128i_i64);
  if ( v207 != v209 )
    operator delete(v207);
  v129 = (void **)&v239;
  do
  {
    while ( 1 )
    {
      v129 -= 4;
      if ( *v129 == v129 + 2 )
        break;
      operator delete(*v129);
      if ( v129 == ptr )
        goto LABEL_234;
    }
  }
  while ( v129 != ptr );
LABEL_234:
  if ( v205[0] != &v206 )
    operator delete(v205[0]);
  if ( v203[0] != &v204 )
    operator delete(v203[0]);
  if ( v280 )
  {
    if ( v279[16] && v278 != v279 )
      operator delete(v278);
    if ( v276 != &v277 )
      operator delete(v276);
    v171 = v275;
    v172 = (void **)v274;
    if ( v275 != v274 )
    {
      do
      {
        while ( *v172 != v172 + 2 )
        {
          operator delete(*v172);
          v172 += 4;
          if ( v172 == v171 )
            goto LABEL_439;
        }
        v172 += 4;
      }
      while ( v171 != v172 );
LABEL_439:
      v172 = (void **)v274;
    }
    if ( v172 )
      operator delete(v172);
    if ( v272 != &v273 )
      operator delete(v272);
    if ( v270 != &v271 )
      operator delete(v270);
    if ( v268 != &v269 )
      operator delete(v268);
  }
  v130 = (__int64)v265;
  v131 = (__int64)&v265[192 * (unsigned int)v266];
  if ( v265 != (_BYTE *)v131 )
  {
    do
    {
      while ( 1 )
      {
        v131 -= 192;
        if ( *(_BYTE *)(v131 + 184) )
        {
          v132 = *(void **)(v131 + 152);
          if ( v132 != (void *)(v131 + 168) )
            operator delete(v132);
        }
        v133 = *(void **)(v131 + 120);
        if ( v133 != (void *)(v131 + 136) )
          operator delete(v133);
        v134 = *(void ***)(v131 + 96);
        v135 = *(void ***)(v131 + 104);
        v136 = v134;
        if ( v135 != v134 )
        {
          do
          {
            while ( *v136 != v136 + 2 )
            {
              operator delete(*v136);
              v136 += 4;
              if ( v136 == v135 )
                goto LABEL_248;
            }
            v136 += 4;
          }
          while ( v135 != v136 );
LABEL_248:
          v134 = *(void ***)(v131 + 96);
        }
        if ( v134 )
          operator delete(v134);
        v137 = *(void **)(v131 + 64);
        if ( v137 != (void *)(v131 + 80) )
          operator delete(v137);
        v138 = *(void **)(v131 + 32);
        if ( v138 != (void *)(v131 + 48) )
          operator delete(v138);
        if ( *(_QWORD *)v131 == v131 + 16 )
          break;
        operator delete(*(void **)v131);
        if ( v130 == v131 )
          goto LABEL_257;
      }
    }
    while ( v130 != v131 );
LABEL_257:
    v131 = (__int64)v265;
  }
  if ( (_BYTE *)v131 != v267 )
    free((void *)v131);
  if ( v263 )
    v263(&v262, &v262, 3);
  if ( v260 )
    v260(&v259, &v259, 3);
  v139 = v256;
  v140 = &v256[160 * (unsigned int)v257];
  if ( v256 != v140 )
  {
    while ( 1 )
    {
      v140 -= 160;
      v141 = *((char **)v140 + 4);
      v142 = &v141[96 * *((unsigned int *)v140 + 10)];
      if ( v141 != v142 )
        break;
LABEL_270:
      if ( v141 != v140 + 48 )
        free(v141);
      if ( *(_BYTE **)v140 == v140 + 16 )
      {
        if ( v139 == v140 )
        {
LABEL_274:
          v140 = v256;
          goto LABEL_275;
        }
      }
      else
      {
        operator delete(*(void **)v140);
        if ( v139 == v140 )
          goto LABEL_274;
      }
    }
    while ( 1 )
    {
      v142 -= 96;
      if ( v142[80] )
        goto LABEL_391;
      while ( *(char **)v142 == v142 + 16 )
      {
        if ( v141 == v142 )
        {
LABEL_269:
          v141 = *((char **)v140 + 4);
          goto LABEL_270;
        }
        v142 -= 96;
        if ( v142[80] )
        {
LABEL_391:
          v166 = *((void ***)v142 + 4);
          v167 = &v166[4 * *((unsigned int *)v142 + 10)];
          if ( v166 != v167 )
          {
            do
            {
              while ( 1 )
              {
                v167 -= 4;
                if ( *v167 == v167 + 2 )
                  break;
                operator delete(*v167);
                if ( v166 == v167 )
                  goto LABEL_394;
              }
            }
            while ( v166 != v167 );
LABEL_394:
            v166 = *((void ***)v142 + 4);
          }
          if ( v166 != (void **)(v142 + 48) )
            free(v166);
        }
      }
      operator delete(*(void **)v142);
      if ( v141 == v142 )
        goto LABEL_269;
    }
  }
LABEL_275:
  if ( v140 != v258 )
    free(v140);
  v143 = v253;
  v144 = &v253[56 * (unsigned int)v254];
  if ( v253 != v144 )
  {
    do
    {
      while ( 1 )
      {
        v144 -= 56;
        v145 = *((void ***)v144 + 4);
        v146 = *((void ***)v144 + 5);
        v147 = v145;
        if ( v146 != v145 )
        {
          do
          {
            while ( *v147 != v147 + 2 )
            {
              operator delete(*v147);
              v147 += 4;
              if ( v147 == v146 )
                goto LABEL_281;
            }
            v147 += 4;
          }
          while ( v146 != v147 );
LABEL_281:
          v145 = *((void ***)v144 + 4);
        }
        if ( v145 )
          operator delete(v145);
        if ( *(_BYTE **)v144 == v144 + 16 )
          break;
        operator delete(*(void **)v144);
        if ( v143 == v144 )
          goto LABEL_286;
      }
    }
    while ( v143 != v144 );
LABEL_286:
    v144 = v253;
  }
  if ( v144 != v255 )
    free(v144);
  v148 = (char *)v251[1];
  v149 = (char *)v251[0];
  if ( v251[1] != v251[0] )
  {
    do
    {
      while ( 1 )
      {
        if ( v149[184] )
        {
          v150 = *((char **)v149 + 19);
          if ( v150 != v149 + 168 )
            operator delete(v150);
        }
        v151 = *((char **)v149 + 15);
        if ( v151 != v149 + 136 )
          operator delete(v151);
        v152 = *((void ***)v149 + 13);
        v153 = *((void ***)v149 + 12);
        if ( v152 != v153 )
        {
          do
          {
            while ( *v153 != v153 + 2 )
            {
              operator delete(*v153);
              v153 += 4;
              if ( v153 == v152 )
                goto LABEL_298;
            }
            v153 += 4;
          }
          while ( v152 != v153 );
LABEL_298:
          v153 = *((void ***)v149 + 12);
        }
        if ( v153 )
          operator delete(v153);
        v154 = *((char **)v149 + 8);
        if ( v154 != v149 + 80 )
          operator delete(v154);
        v155 = *((char **)v149 + 4);
        if ( v155 != v149 + 48 )
          operator delete(v155);
        if ( *(char **)v149 == v149 + 16 )
          break;
        operator delete(*(void **)v149);
        v149 += 192;
        if ( v148 == v149 )
          goto LABEL_307;
      }
      v149 += 192;
    }
    while ( v148 != v149 );
LABEL_307:
    v149 = (char *)v251[0];
  }
  if ( v149 )
    operator delete(v149);
  if ( v201[0] != &v202 )
    operator delete(v201[0]);
}
