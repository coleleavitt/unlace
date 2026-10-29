_QWORD *__fastcall sub_12E5AC0(_QWORD *a1, _QWORD *a2, _DWORD **a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  volatile signed __int32 *v12; // r12
  volatile signed __int32 *v13; // r12
  volatile signed __int32 *v14; // r12
  volatile signed __int32 *v15; // r12
  volatile signed __int32 *v16; // r12
  volatile signed __int32 *v17; // r12
  volatile signed __int32 *v18; // r12
  volatile signed __int32 *v19; // r12
  volatile signed __int32 *v20; // r12
  volatile signed __int32 *v21; // r12
  volatile signed __int32 *v22; // r12
  volatile signed __int32 *v23; // r12
  volatile signed __int32 *v24; // r12
  _QWORD *v25; // r13
  void **v26; // rbx
  void **v27; // r12
  void **v28; // rbp
  _QWORD *v29; // rax
  _BYTE *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rbx
  void **v33; // rbp
  void **v34; // r13
  void **v35; // r12
  void **v36; // rbp
  void **v37; // r13
  void **v38; // r12
  void **v39; // rbp
  void **v40; // r13
  void **v41; // r12
  __int64 v42; // rbx
  void **v43; // r12
  void **v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  _BYTE *v48; // rbp
  signed __int64 v49; // rbx
  void *v50; // rax
  __int64 v51; // r13
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r12
  void *v56; // rax
  void **v57; // rbx
  __m128i *v58; // rdi
  void *v59; // rsi
  __m128i v60; // xmm1
  _QWORD *v61; // r14
  __int64 v62; // r13
  __int64 v63; // r12
  __int64 v64; // rbx
  _DWORD *v65; // r15
  __int64 v66; // rax
  __int64 v67; // r12
  _DWORD *v68; // rax
  __int64 v69; // rcx
  _DWORD *v70; // rbx
  void *v71; // rbx
  bool v72; // zf
  __int64 v73; // r14
  volatile signed __int32 *v74; // r12
  size_t v75; // r15
  volatile signed __int32 *v76; // r13
  _QWORD *v77; // r12
  volatile signed __int32 *v78; // r12
  volatile signed __int32 *v79; // r12
  _QWORD *v80; // r12
  _QWORD *v81; // rax
  void *v82; // rdi
  void (*v83)(); // rax
  __m128 v84; // xmm0
  size_t v85; // r12
  _QWORD *v86; // rax
  __int64 v87; // r14
  __int64 v88; // r15
  void *v89; // r13
  volatile signed __int32 *v90; // r14
  __int64 v91; // r14
  __int64 v92; // rax
  _QWORD *v93; // rdi
  volatile signed __int32 **v94; // r15
  volatile signed __int32 **v95; // r13
  __int64 v96; // rdx
  unsigned __int64 v97; // rsi
  int v98; // eax
  volatile signed __int32 *v99; // rsi
  void **v100; // rcx
  void *v101; // rdi
  __int64 v102; // r14
  void **v103; // rdi
  __int64 v104; // rdi
  unsigned __int64 v105; // rsi
  void **v106; // rax
  void **v107; // rdx
  void **v108; // rdi
  __int64 v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // r15
  int v112; // edx
  _QWORD *v113; // rdi
  __int64 v114; // rdx
  __int64 v115; // rdi
  __int64 v116; // rdi
  volatile signed __int32 *v117; // r13
  volatile signed __int32 *v118; // r14
  void (*v119)(void); // rax
  __int64 v120; // rdx
  __int64 v121; // rdx
  unsigned __int64 v122; // rsi
  int v123; // eax
  volatile signed __int32 **v124; // rsi
  volatile signed __int32 **v125; // rcx
  volatile signed __int32 *v126; // rdi
  _QWORD *v127; // rax
  char *v128; // rsi
  _QWORD *v129; // rcx
  void *v130; // rcx
  _QWORD *v131; // r12
  volatile signed __int32 *v132; // r13
  volatile signed __int32 *v133; // r13
  volatile signed __int32 *v134; // r13
  volatile signed __int32 *v135; // r13
  volatile signed __int32 *v136; // r13
  volatile signed __int32 *v137; // r13
  volatile signed __int32 *v138; // r13
  volatile signed __int32 *v139; // r13
  volatile signed __int32 *v140; // r13
  volatile signed __int32 *v141; // r13
  volatile signed __int32 *v142; // r13
  volatile signed __int32 *v143; // r13
  volatile signed __int32 *v144; // r13
  void *v145; // r15
  void *v146; // r15
  int v147; // eax
  signed __int32 v148; // eax
  int v149; // eax
  signed __int32 v150; // eax
  int v151; // eax
  signed __int32 v152; // eax
  int v153; // eax
  signed __int32 v154; // eax
  int v155; // eax
  signed __int32 v156; // eax
  int v157; // eax
  signed __int32 v158; // eax
  int v159; // eax
  signed __int32 v160; // eax
  int v161; // eax
  signed __int32 v162; // eax
  int v163; // eax
  signed __int32 v164; // eax
  int v165; // eax
  signed __int32 v166; // eax
  int v167; // eax
  signed __int32 v168; // eax
  int v169; // eax
  signed __int32 v170; // eax
  int v171; // eax
  signed __int32 v172; // eax
  int v173; // eax
  signed __int32 v174; // eax
  int v175; // eax
  signed __int32 v176; // eax
  int v177; // eax
  signed __int32 v178; // eax
  int v179; // eax
  signed __int32 v180; // eax
  int v181; // eax
  signed __int32 v182; // eax
  int v183; // eax
  signed __int32 v184; // eax
  int v185; // eax
  signed __int32 v186; // eax
  int v187; // eax
  signed __int32 v188; // eax
  int v189; // eax
  signed __int32 v190; // eax
  int v191; // eax
  signed __int32 v192; // eax
  int v193; // eax
  signed __int32 v194; // eax
  int v195; // eax
  signed __int32 v196; // eax
  int v197; // eax
  signed __int32 v198; // eax
  int v199; // eax
  signed __int32 v200; // eax
  int v201; // eax
  signed __int32 v202; // eax
  int v203; // eax
  signed __int32 v204; // eax
  int v205; // eax
  signed __int32 v206; // eax
  int v207; // eax
  signed __int32 v208; // eax
  int v209; // eax
  signed __int32 v210; // eax
  unsigned __int64 v211; // rcx
  void *v212; // r14
  char *v213; // rbx
  void *v214; // rdi
  int v215; // r12d
  __int64 v216; // rdx
  void *v217; // rdi
  int v218; // ebx
  __int64 v219; // rdx
  volatile signed __int32 **v220; // r13
  void **v221; // r14
  _QWORD *v222; // rcx
  void *v223; // rcx
  void *v224; // rbx
  void **v225; // rbp
  void **v226; // rbx
  volatile signed __int32 **v227; // rbp
  volatile signed __int32 **v228; // rbx
  __int64 *v229; // rbp
  __int64 *v230; // rbx
  __int64 v231; // rdi
  size_t v233; // r12
  size_t v234; // r13
  __int64 v235; // rbx
  char *v236; // r14
  __int64 v237; // rdi
  unsigned __int64 v238; // rsi
  void **v239; // rax
  void **p_src; // rdx
  void **v241; // rdi
  _QWORD *v242; // rax
  _DWORD **v243; // rcx
  _DWORD *v244; // rdi
  volatile signed __int32 **v245; // rbx
  unsigned __int64 v246; // r13
  __m128 *v247; // r12
  __int64 *v248; // rax
  __m128 v249; // xmm0
  __int64 v250; // r13
  __int64 v251; // rbx
  _QWORD *v252; // rax
  volatile signed __int32 *v253; // rbp
  volatile signed __int32 *v254; // r13
  int v255; // eax
  signed __int32 v256; // eax
  void *v257; // rbx
  void *v258; // rbx
  signed __int64 v259; // rbx
  unsigned __int64 v260; // rdi
  char *v261; // rax
  __int128 *v262; // r15
  void **v263; // rbx
  volatile signed __int32 **v264; // [rsp+0h] [rbp-2C0h] BYREF
  void **v265; // [rsp+8h] [rbp-2B8h]
  __int64 v266; // [rsp+10h] [rbp-2B0h]
  void *v267; // [rsp+18h] [rbp-2A8h]
  _QWORD *v268; // [rsp+20h] [rbp-2A0h]
  const char *v269; // [rsp+28h] [rbp-298h]
  __int64 v270; // [rsp+30h] [rbp-290h]
  __int64 v271; // [rsp+38h] [rbp-288h]
  __int64 v272; // [rsp+40h] [rbp-280h]
  void *v273; // [rsp+48h] [rbp-278h]
  _QWORD *v274; // [rsp+50h] [rbp-270h]
  __int64 v275; // [rsp+58h] [rbp-268h]
  volatile signed __int32 *v276; // [rsp+60h] [rbp-260h]
  volatile signed __int32 *v277; // [rsp+68h] [rbp-258h]
  int v278; // [rsp+74h] [rbp-24Ch]
  __int64 v279; // [rsp+78h] [rbp-248h]
  void ***v280; // [rsp+80h] [rbp-240h]
  volatile signed __int32 *v281; // [rsp+88h] [rbp-238h]
  volatile signed __int32 ***v282; // [rsp+90h] [rbp-230h]
  _QWORD *v283; // [rsp+98h] [rbp-228h]
  _DWORD **v284; // [rsp+A0h] [rbp-220h]
  void *v285; // [rsp+B0h] [rbp-210h] BYREF
  _QWORD *v286; // [rsp+B8h] [rbp-208h] BYREF
  _QWORD *v287; // [rsp+C0h] [rbp-200h] BYREF
  void *v288[2]; // [rsp+C8h] [rbp-1F8h] BYREF
  void *v289; // [rsp+D8h] [rbp-1E8h]
  void *v290[2]; // [rsp+E8h] [rbp-1D8h] BYREF
  _BYTE v291[16]; // [rsp+F8h] [rbp-1C8h] BYREF
  volatile signed __int32 **v292; // [rsp+108h] [rbp-1B8h] BYREF
  __int64 v293; // [rsp+110h] [rbp-1B0h]
  char v294; // [rsp+118h] [rbp-1A8h] BYREF
  volatile signed __int32 *v295; // [rsp+138h] [rbp-188h] BYREF
  __int64 v296; // [rsp+140h] [rbp-180h]
  char v297; // [rsp+148h] [rbp-178h] BYREF
  void *src; // [rsp+168h] [rbp-158h] BYREF
  size_t n; // [rsp+170h] [rbp-150h]
  __int128 v300; // [rsp+178h] [rbp-148h] BYREF
  _DWORD *v301; // [rsp+188h] [rbp-138h]
  char v302; // [rsp+190h] [rbp-130h]
  int v303; // [rsp+194h] [rbp-12Ch]
  void **v304; // [rsp+198h] [rbp-128h]
  void *v305; // [rsp+1A8h] [rbp-118h] BYREF
  signed __int64 v306; // [rsp+1B0h] [rbp-110h]
  signed __int64 v307; // [rsp+1B8h] [rbp-108h]
  char v308; // [rsp+1E8h] [rbp-D8h]
  int v309; // [rsp+1F0h] [rbp-D0h]
  char v310; // [rsp+1F4h] [rbp-CCh]
  void **v311; // [rsp+1F8h] [rbp-C8h] BYREF
  __int64 v312; // [rsp+200h] [rbp-C0h]
  char v313; // [rsp+208h] [rbp-B8h] BYREF

  v3 = a2[2];
  v284 = a3;
  v4 = *(_QWORD *)(v3 + 160);
  v5 = *(_QWORD *)(v3 + 64);
  v311 = (void **)&v313;
  v268 = a2;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = *(_QWORD *)(v5 + 152);
  v283 = a1;
  v275 = v5;
  LODWORD(v6) = *(_DWORD *)(v6 + 72);
  *(_OWORD *)v288 = 0;
  v289 = nullptr;
  v278 = v6;
  v282 = &v292;
  v292 = (volatile signed __int32 **)&v294;
  v293 = 0x400000000LL;
  v312 = 0x400000000LL;
  v8 = (v7 - *(_QWORD *)(v5 + 144)) >> 5;
  v280 = &v311;
  if ( !(_DWORD)v8 )
  {
LABEL_474:
    src = &v300;
    sub_12E5050(&src, *(_BYTE **)(v7 - 32), *(_QWORD *)(v7 - 32) + *(_QWORD *)(v7 - 24));
    v233 = n;
    if ( 0x7FFFFFFFFFFFFFFFLL - n <= 9 )
      std::__throw_length_error("basic_string::append");
    v234 = n + 10;
    if ( src == &v300 )
    {
      v235 = 15;
      if ( v234 <= 0xF )
        goto LABEL_477;
    }
    else
    {
      v235 = v300;
      if ( v234 <= (unsigned __int64)v300 )
      {
LABEL_477:
        qmemcpy((char *)src + n, ".pch-final", 10);
        v236 = (char *)src;
        goto LABEL_478;
      }
    }
    if ( (v234 & 0x8000000000000000LL) != 0LL )
LABEL_526:
      std::__throw_length_error("basic_string::_M_create");
    v259 = 2 * v235;
    if ( v234 < v259 )
    {
      v260 = v259 + 1;
      if ( v259 < 0 )
      {
        v260 = 0x8000000000000000LL;
        v259 = 0x7FFFFFFFFFFFFFFFLL;
      }
    }
    else
    {
      v260 = n + 11;
      v259 = n + 10;
    }
    v261 = (char *)operator new(v260);
    v262 = (__int128 *)src;
    v236 = v261;
    if ( v233 )
    {
      if ( v233 == 1 )
        *v261 = *(_BYTE *)src;
      else
        memcpy(v261, src, v233);
    }
    qmemcpy(&v236[v233], ".pch-final", 10);
    if ( v262 != &v300 )
      operator delete(v262);
    src = v236;
    *(_QWORD *)&v300 = v259;
LABEL_478:
    n = v233 + 10;
    v236[v233 + 10] = 0;
    v237 = (unsigned int)v312;
    v238 = (unsigned int)v312 + 1LL;
    if ( v238 > HIDWORD(v312) )
    {
      v263 = v311;
      if ( v311 > &src || &src >= &v311[4 * (unsigned int)v312] )
      {
        sub_A8C1F0((__int64)v280, v238);
        v239 = v311;
        v237 = (unsigned int)v312;
        p_src = &src;
      }
      else
      {
        sub_A8C1F0((__int64)v280, v238);
        v239 = v311;
        v237 = (unsigned int)v312;
        p_src = (void **)((char *)v311 + (char *)&src - (char *)v263);
      }
    }
    else
    {
      v239 = v311;
      p_src = &src;
    }
    v241 = &v239[4 * v237];
    *v241 = v241 + 2;
    sub_12E5050(v241, *p_src, (__int64)p_src[1] + (_QWORD)*p_src);
    LODWORD(v312) = v312 + 1;
    v242 = sub_12E5520(v268, (__int64)src, n, v282, (__int64)v280, 0);
    if ( v242 )
    {
      v243 = v284;
      ++*((_DWORD *)v242 + 8);
      v244 = *v243;
      *v243 = v242 + 3;
      if ( !v244 )
        goto LABEL_487;
      v72 = v244[2]-- == 1;
      if ( !v72 )
        goto LABEL_487;
    }
    else
    {
      v244 = *v284;
      *v284 = nullptr;
      if ( !v244 )
        goto LABEL_484;
      v72 = v244[2]-- == 1;
      if ( !v72 )
        goto LABEL_484;
    }
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v244 + 8LL))(v244);
    if ( !*v284 )
    {
LABEL_484:
      *v283 = 0;
LABEL_485:
      if ( src != &v300 )
        operator delete(src);
      goto LABEL_448;
    }
LABEL_487:
    v245 = (volatile signed __int32 **)v288[1];
    v246 = (unsigned __int64)v289;
    *(_OWORD *)v288 = 0;
    v289 = nullptr;
    v264 = v245;
    v247 = (__m128 *)operator new(0x28u);
    v247->m128_u64[0] = (unsigned __int64)&off_2C42DE8;
    v248 = (__int64 *)v284;
    v247[2].m128_u64[0] = v246;
    v249 = _mm_loadh_ps((const double *)&v264);
    v247->m128_u64[1] = 1;
    v250 = *v248;
    v247[1] = v249;
    v251 = operator new(0x30u);
    sub_15D25C0(v251, v247, v250);
    ++*(_DWORD *)(v251 + 8);
    v252 = v283;
    v72 = v247->m128_i32[2]-- == 1;
    *v252 = v251;
    if ( v72 )
      (*(void (__fastcall **)(__m128 *))(v247->m128_u64[0] + 8))(v247);
    goto LABEL_485;
  }
  v266 = 0;
  v279 = (unsigned int)(v8 - 1);
  v265 = &v305;
  v264 = &v295;
  v277 = (volatile signed __int32 *)&v297;
  while ( 1 )
  {
    v285 = nullptr;
    v9 = (_QWORD *)operator new(0xD0u);
    *v9 = 0;
    v10 = v9;
    v9[1] = 0;
    v9[2] = 0;
    v9[3] = 0;
    v9[4] = 0;
    v9[5] = 0;
    v9[6] = 0;
    v9[7] = 0;
    v9[8] = 0;
    v9[9] = 0;
    v9[10] = 0;
    v9[11] = 0;
    v9[12] = 0;
    v9[13] = 0;
    v9[14] = 0;
    v9[15] = 0;
    v9[16] = 0;
    v9[17] = 0;
    v9[18] = 0;
    v9[19] = 0;
    v9[20] = 0;
    v9[21] = 0;
    v9[22] = 0;
    v9[23] = 0;
    v9[24] = 0;
    v9[25] = 0;
    sub_1356A60(v9, v3);
    v11 = v285;
    v285 = v10;
    if ( !v11 )
      goto LABEL_44;
    v12 = (volatile signed __int32 *)v11[25];
    if ( v12 )
    {
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_7;
      }
      else
      {
        v169 = *((_DWORD *)v12 + 2);
        *((_DWORD *)v12 + 2) = v169 - 1;
        if ( v169 != 1 )
          goto LABEL_7;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
      if ( &_pthread_key_create )
      {
        v170 = _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF);
      }
      else
      {
        v170 = *((_DWORD *)v12 + 3);
        *((_DWORD *)v12 + 3) = v170 - 1;
      }
      if ( v170 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
    }
LABEL_7:
    v13 = (volatile signed __int32 *)v11[23];
    if ( !v13 )
      goto LABEL_10;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_10;
    }
    else
    {
      v171 = *((_DWORD *)v13 + 2);
      *((_DWORD *)v13 + 2) = v171 - 1;
      if ( v171 != 1 )
        goto LABEL_10;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
    if ( &_pthread_key_create )
    {
      v172 = _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF);
    }
    else
    {
      v172 = *((_DWORD *)v13 + 3);
      *((_DWORD *)v13 + 3) = v172 - 1;
    }
    if ( v172 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 24LL))(v13);
LABEL_10:
    v14 = (volatile signed __int32 *)v11[21];
    if ( !v14 )
      goto LABEL_13;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_13;
    }
    else
    {
      v173 = *((_DWORD *)v14 + 2);
      *((_DWORD *)v14 + 2) = v173 - 1;
      if ( v173 != 1 )
        goto LABEL_13;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    if ( &_pthread_key_create )
    {
      v174 = _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF);
    }
    else
    {
      v174 = *((_DWORD *)v14 + 3);
      *((_DWORD *)v14 + 3) = v174 - 1;
    }
    if ( v174 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 24LL))(v14);
LABEL_13:
    v15 = (volatile signed __int32 *)v11[19];
    if ( !v15 )
      goto LABEL_16;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_16;
    }
    else
    {
      v175 = *((_DWORD *)v15 + 2);
      *((_DWORD *)v15 + 2) = v175 - 1;
      if ( v175 != 1 )
        goto LABEL_16;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    if ( &_pthread_key_create )
    {
      v176 = _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF);
    }
    else
    {
      v176 = *((_DWORD *)v15 + 3);
      *((_DWORD *)v15 + 3) = v176 - 1;
    }
    if ( v176 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 24LL))(v15);
LABEL_16:
    v16 = (volatile signed __int32 *)v11[17];
    if ( !v16 )
      goto LABEL_19;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_19;
    }
    else
    {
      v177 = *((_DWORD *)v16 + 2);
      *((_DWORD *)v16 + 2) = v177 - 1;
      if ( v177 != 1 )
        goto LABEL_19;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    if ( &_pthread_key_create )
    {
      v178 = _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF);
    }
    else
    {
      v178 = *((_DWORD *)v16 + 3);
      *((_DWORD *)v16 + 3) = v178 - 1;
    }
    if ( v178 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 24LL))(v16);
LABEL_19:
    v17 = (volatile signed __int32 *)v11[15];
    if ( !v17 )
      goto LABEL_22;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_22;
    }
    else
    {
      v179 = *((_DWORD *)v17 + 2);
      *((_DWORD *)v17 + 2) = v179 - 1;
      if ( v179 != 1 )
        goto LABEL_22;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
    if ( &_pthread_key_create )
    {
      v180 = _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF);
    }
    else
    {
      v180 = *((_DWORD *)v17 + 3);
      *((_DWORD *)v17 + 3) = v180 - 1;
    }
    if ( v180 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17);
LABEL_22:
    v18 = (volatile signed __int32 *)v11[13];
    if ( !v18 )
      goto LABEL_25;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_25;
    }
    else
    {
      v181 = *((_DWORD *)v18 + 2);
      *((_DWORD *)v18 + 2) = v181 - 1;
      if ( v181 != 1 )
        goto LABEL_25;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( &_pthread_key_create )
    {
      v182 = _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF);
    }
    else
    {
      v182 = *((_DWORD *)v18 + 3);
      *((_DWORD *)v18 + 3) = v182 - 1;
    }
    if ( v182 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 24LL))(v18);
LABEL_25:
    v19 = (volatile signed __int32 *)v11[11];
    if ( !v19 )
      goto LABEL_28;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_28;
    }
    else
    {
      v183 = *((_DWORD *)v19 + 2);
      *((_DWORD *)v19 + 2) = v183 - 1;
      if ( v183 != 1 )
        goto LABEL_28;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
    if ( &_pthread_key_create )
    {
      v184 = _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF);
    }
    else
    {
      v184 = *((_DWORD *)v19 + 3);
      *((_DWORD *)v19 + 3) = v184 - 1;
    }
    if ( v184 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 24LL))(v19);
LABEL_28:
    v20 = (volatile signed __int32 *)v11[9];
    if ( !v20 )
      goto LABEL_31;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_31;
    }
    else
    {
      v161 = *((_DWORD *)v20 + 2);
      *((_DWORD *)v20 + 2) = v161 - 1;
      if ( v161 != 1 )
        goto LABEL_31;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
    if ( &_pthread_key_create )
    {
      v162 = _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF);
    }
    else
    {
      v162 = *((_DWORD *)v20 + 3);
      *((_DWORD *)v20 + 3) = v162 - 1;
    }
    if ( v162 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 24LL))(v20);
LABEL_31:
    v21 = (volatile signed __int32 *)v11[7];
    if ( !v21 )
      goto LABEL_34;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_34;
    }
    else
    {
      v163 = *((_DWORD *)v21 + 2);
      *((_DWORD *)v21 + 2) = v163 - 1;
      if ( v163 != 1 )
        goto LABEL_34;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    if ( &_pthread_key_create )
    {
      v164 = _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF);
    }
    else
    {
      v164 = *((_DWORD *)v21 + 3);
      *((_DWORD *)v21 + 3) = v164 - 1;
    }
    if ( v164 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 24LL))(v21);
LABEL_34:
    v22 = (volatile signed __int32 *)v11[5];
    if ( !v22 )
      goto LABEL_37;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_37;
    }
    else
    {
      v165 = *((_DWORD *)v22 + 2);
      *((_DWORD *)v22 + 2) = v165 - 1;
      if ( v165 != 1 )
        goto LABEL_37;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    if ( &_pthread_key_create )
    {
      v166 = _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF);
    }
    else
    {
      v166 = *((_DWORD *)v22 + 3);
      *((_DWORD *)v22 + 3) = v166 - 1;
    }
    if ( v166 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 24LL))(v22);
LABEL_37:
    v23 = (volatile signed __int32 *)v11[3];
    if ( !v23 )
      goto LABEL_40;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_40;
    }
    else
    {
      v167 = *((_DWORD *)v23 + 2);
      *((_DWORD *)v23 + 2) = v167 - 1;
      if ( v167 != 1 )
        goto LABEL_40;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
    if ( &_pthread_key_create )
    {
      v168 = _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF);
    }
    else
    {
      v168 = *((_DWORD *)v23 + 3);
      *((_DWORD *)v23 + 3) = v168 - 1;
    }
    if ( v168 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 24LL))(v23);
LABEL_40:
    v24 = (volatile signed __int32 *)v11[1];
    if ( v24 )
    {
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
          goto LABEL_257;
      }
      else
      {
        v159 = *((_DWORD *)v24 + 2);
        *((_DWORD *)v24 + 2) = v159 - 1;
        if ( v159 == 1 )
        {
LABEL_257:
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
          if ( &_pthread_key_create )
          {
            v160 = _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF);
          }
          else
          {
            v160 = *((_DWORD *)v24 + 3);
            *((_DWORD *)v24 + 3) = v160 - 1;
          }
          if ( v160 == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 24LL))(v24);
        }
      }
    }
    operator delete(v11, 0xD0u);
    v10 = v285;
LABEL_44:
    v25 = (_QWORD *)v10[8];
    v26 = (void **)v25[18];
    v27 = (void **)v25[19];
    if ( v26 != v27 )
    {
      v28 = (void **)v25[18];
      do
      {
        while ( *v28 != v28 + 2 )
        {
          operator delete(*v28);
          v28 += 4;
          if ( v27 == v28 )
            goto LABEL_48;
        }
        v28 += 4;
      }
      while ( v27 != v28 );
LABEL_48:
      v29 = v285;
      v25[19] = v26;
      v25 = (_QWORD *)v29[8];
    }
    v30 = (_BYTE *)v25[14];
    v25[15] = 0;
    *v30 = 0;
    v31 = v285;
    v32 = *((_QWORD *)v285 + 8);
    v33 = *(void ***)(v32 + 24);
    v34 = *(void ***)(v32 + 32);
    *(_DWORD *)(v32 + 168) = 1;
    if ( v33 != v34 )
    {
      v35 = v33;
      do
      {
        while ( *v35 != v35 + 2 )
        {
          operator delete(*v35);
          v35 += 4;
          if ( v34 == v35 )
            goto LABEL_53;
        }
        v35 += 4;
      }
      while ( v34 != v35 );
LABEL_53:
      v31 = v285;
      *(_QWORD *)(v32 + 32) = v33;
      v32 = v31[8];
    }
    v36 = *(void ***)(v32 + 48);
    v37 = *(void ***)(v32 + 56);
    if ( v36 != v37 )
    {
      v38 = *(void ***)(v32 + 48);
      do
      {
        while ( *v38 != v38 + 2 )
        {
          operator delete(*v38);
          v38 += 4;
          if ( v37 == v38 )
            goto LABEL_58;
        }
        v38 += 4;
      }
      while ( v37 != v38 );
LABEL_58:
      v31 = v285;
      *(_QWORD *)(v32 + 56) = v36;
      v32 = v31[8];
    }
    v39 = *(void ***)v32;
    v40 = *(void ***)(v32 + 8);
    if ( *(void ***)v32 != v40 )
    {
      v41 = *(void ***)v32;
      do
      {
        while ( *v41 != v41 + 2 )
        {
          operator delete(*v41);
          v41 += 5;
          if ( v40 == v41 )
            goto LABEL_63;
        }
        v41 += 5;
      }
      while ( v40 != v41 );
LABEL_63:
      *(_QWORD *)(v32 + 8) = v39;
      v31 = v285;
    }
    v42 = v31[20];
    v43 = *(void ***)(v42 + 24);
    v44 = &v43[10 * *(unsigned int *)(v42 + 32)];
    while ( v43 != v44 )
    {
      while ( 1 )
      {
        v44 -= 10;
        if ( *v44 == v44 + 2 )
          break;
        operator delete(*v44);
        if ( v43 == v44 )
          goto LABEL_68;
      }
    }
LABEL_68:
    v45 = v266;
    v46 = v275;
    *(_DWORD *)(v42 + 32) = 0;
    v47 = *(_QWORD *)(v46 + 144) + 32 * v45;
    v48 = *(_BYTE **)v47;
    v49 = *(_QWORD *)(v47 + 8);
    if ( *(_QWORD *)v47 )
    {
      v50 = v265 + 2;
      v305 = v265 + 2;
      if ( (unsigned __int64)v49 > 0xF )
      {
        if ( v49 < 0 )
          goto LABEL_526;
        v50 = (void *)operator new(v49 + 1);
        v307 = v49;
        v305 = v50;
      }
      else
      {
        if ( v49 == 1 )
        {
          LOBYTE(v307) = *v48;
LABEL_72:
          v306 = v49;
          *((_BYTE *)v50 + v49) = 0;
          goto LABEL_73;
        }
        if ( !v49 )
          goto LABEL_72;
      }
      memcpy(v50, v48, v49);
      v50 = v305;
      goto LABEL_72;
    }
    LOBYTE(v307) = 0;
    v306 = 0;
    v305 = v265 + 2;
LABEL_73:
    v308 = 0;
    v310 = 0;
    v309 = v278;
    v51 = *((_QWORD *)v285 + 20);
    v52 = *(unsigned int *)(v51 + 32);
    v53 = v52 + 1;
    v54 = 80 * v52;
    v55 = v54;
    if ( v53 > *(unsigned int *)(v51 + 36) )
    {
      v211 = *(_QWORD *)(v51 + 24);
      v212 = (void *)(v51 + 40);
      if ( v211 > (unsigned __int64)v265 || (unsigned __int64)v265 >= v211 + v54 )
      {
        v267 = (void *)sub_2237400(v51 + 24, v51 + 40, v53, 80, &src);
        sub_12E5990(v51 + 24, (__m128i *)v267);
        v217 = *(void **)(v51 + 24);
        v56 = v267;
        v218 = (int)src;
        if ( v217 != v212 )
        {
          free(v217);
          v56 = v267;
        }
        v219 = *(unsigned int *)(v51 + 32);
        *(_DWORD *)(v51 + 36) = v218;
        *(_QWORD *)(v51 + 24) = v56;
        v57 = v265;
        v55 = 80 * v219;
      }
      else
      {
        v213 = (char *)v265 - v211;
        v267 = (void *)sub_2237400(v51 + 24, v51 + 40, v53, 80, &src);
        sub_12E5990(v51 + 24, (__m128i *)v267);
        v214 = *(void **)(v51 + 24);
        v56 = v267;
        v215 = (int)src;
        if ( v214 != v212 )
        {
          free(v214);
          v56 = v267;
        }
        v216 = *(unsigned int *)(v51 + 32);
        *(_DWORD *)(v51 + 36) = v215;
        v57 = (void **)&v213[(_QWORD)v56];
        *(_QWORD *)(v51 + 24) = v56;
        v55 = 80 * v216;
      }
    }
    else
    {
      v56 = *(void **)(v51 + 24);
      v57 = v265;
    }
    v58 = (__m128i *)((char *)v56 + v55);
    v58->m128i_i64[0] = (__int64)v58[1].m128i_i64;
    v59 = *v57;
    sub_12E5050((char *)v56 + v55, *v57, (__int64)v57[1] + (_QWORD)*v57);
    v60 = _mm_loadu_si128((const __m128i *)v57 + 2);
    v58[2] = v60;
    v58[3] = _mm_loadu_si128((const __m128i *)v57 + 3);
    v58[4].m128i_i64[0] = (__int64)v57[8];
    v58[4].m128i_i32[2] = *((_DWORD *)v57 + 18);
    v58[4].m128i_i8[12] = *((_BYTE *)v57 + 76);
    ++*(_DWORD *)(v51 + 32);
    v61 = v268;
    v62 = sub_227D6D0(v58, v59);
    v63 = *(_QWORD *)(v268[2] + 32LL);
    v64 = operator new(0x50u);
    sub_13B38A0(v64, v62, v63, 0);
    v65 = (_DWORD *)operator new(0x18u);
    v273 = v65;
    sub_FD3570((__int64)v65);
    *v65 += 2;
    v66 = v61[2];
    src = v65;
    v67 = *(_QWORD *)(v66 + 32);
    v68 = (_DWORD *)operator new(0x3B90u);
    v69 = v64;
    v70 = v68;
    v267 = v68;
    sub_FCA6E0((__int64)v68, (__int64 *)&src, v67, v69, 1);
    ++*v70;
    v71 = src;
    if ( src )
    {
      v72 = (*(_DWORD *)src)-- == 1;
      if ( v72 )
      {
        sub_FD5580((__int64)v71);
        operator delete(v71, 0x18u);
      }
    }
    v73 = v268[25];
    v74 = (volatile signed __int32 *)v268[24];
    if ( v73 )
    {
      if ( &_pthread_key_create )
        _InterlockedAdd((volatile signed __int32 *)(v73 + 8), 1u);
      else
        ++*(_DWORD *)(v73 + 8);
    }
    n = 0;
    src = v285;
    sub_12E0560(v264, (__int64 *)&v285);
    v75 = (size_t)v295;
    v76 = (volatile signed __int32 *)n;
    if ( v295 != (volatile signed __int32 *)n )
    {
      if ( v295 )
      {
        if ( &_pthread_key_create )
        {
          _InterlockedAdd(v295 + 2, 1u);
          v76 = (volatile signed __int32 *)n;
        }
        else
        {
          ++*((_DWORD *)v295 + 2);
        }
      }
      if ( !v76 )
        goto LABEL_88;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) != 1 )
        {
LABEL_88:
          n = v75;
          v76 = v295;
          goto LABEL_89;
        }
      }
      else
      {
        v157 = *((_DWORD *)v76 + 2);
        *((_DWORD *)v76 + 2) = v157 - 1;
        if ( v157 != 1 )
          goto LABEL_88;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 16LL))(v76);
      if ( &_pthread_key_create )
      {
        v158 = _InterlockedExchangeAdd(v76 + 3, 0xFFFFFFFF);
      }
      else
      {
        v158 = *((_DWORD *)v76 + 3);
        *((_DWORD *)v76 + 3) = v158 - 1;
      }
      if ( v158 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 24LL))(v76);
      goto LABEL_88;
    }
LABEL_89:
    if ( !v76 )
      goto LABEL_92;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_92;
    }
    else
    {
      v149 = *((_DWORD *)v76 + 2);
      *((_DWORD *)v76 + 2) = v149 - 1;
      if ( v149 != 1 )
        goto LABEL_92;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 16LL))(v76);
    if ( &_pthread_key_create )
    {
      v150 = _InterlockedExchangeAdd(v76 + 3, 0xFFFFFFFF);
    }
    else
    {
      v150 = *((_DWORD *)v76 + 3);
      *((_DWORD *)v76 + 3) = v150 - 1;
    }
    if ( v150 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 24LL))(v76);
LABEL_92:
    v295 = v74;
    v296 = v73;
    v77 = (_QWORD *)operator new(0x178u);
    sub_12E9950(v77, &src, v264, 0);
    v286 = v77;
    v78 = (volatile signed __int32 *)v296;
    if ( !v296 )
      goto LABEL_95;
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v296 + 8), 0xFFFFFFFF) != 1 )
        goto LABEL_95;
    }
    else
    {
      v151 = *(_DWORD *)(v296 + 8);
      *(_DWORD *)(v296 + 8) = v151 - 1;
      if ( v151 != 1 )
        goto LABEL_95;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 16LL))(v78);
    if ( &_pthread_key_create )
    {
      v152 = _InterlockedExchangeAdd(v78 + 3, 0xFFFFFFFF);
    }
    else
    {
      v152 = *((_DWORD *)v78 + 3);
      *((_DWORD *)v78 + 3) = v152 - 1;
    }
    if ( v152 == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 24LL))(v78);
LABEL_95:
    v79 = (volatile signed __int32 *)n;
    if ( n )
    {
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(n + 8), 0xFFFFFFFF) != 1 )
          goto LABEL_98;
      }
      else
      {
        v153 = *(_DWORD *)(n + 8);
        *(_DWORD *)(n + 8) = v153 - 1;
        if ( v153 != 1 )
          goto LABEL_98;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
      if ( &_pthread_key_create )
      {
        v154 = _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF);
      }
      else
      {
        v154 = *((_DWORD *)v79 + 3);
        *((_DWORD *)v79 + 3) = v154 - 1;
      }
      if ( v154 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 24LL))(v79);
    }
LABEL_98:
    sub_12E9BC0(v286, v267);
    v80 = v286;
    v81 = sub_105D340(v286[4], *(_QWORD *)(v286[2] + 16LL));
    sub_12E9C00(v80, v81);
    src = nullptr;
    sub_12E9EF0(v286, &src);
    v82 = src;
    if ( src && !_InterlockedSub((volatile signed __int32 *)src + 2, 1u) )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v82 + 8LL))(v82);
    sub_12EA0B0(v286, v286[8]);
    sub_12EF450(v286, 1);
    v83 = *(void (**)())(**(_QWORD **)(v286[4] + 48LL) + 24LL);
    if ( v83 != nullsub_555 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))v83)(*(_QWORD *)(v286[4] + 48LL), *(_QWORD *)v286[2], v286[12]);
    sub_12EA130();
    v84 = 0;
    v270 = 0;
    v85 = operator new(0x48u);
    *(_QWORD *)(v85 + 8) = 0x100000001LL;
    *(_OWORD *)(v85 + 32) = 0;
    *(_OWORD *)(v85 + 16) = 0;
    *(_QWORD *)v85 = off_2C42F98;
    *(_QWORD *)(v85 + 40) = v85 + 64;
    v86 = v286;
    *(_QWORD *)(v85 + 64) = 0;
    v87 = v86[10];
    v88 = v86[12];
    *(_QWORD *)(v85 + 48) = 0;
    v269 = &byte_22F0C30;
    src = (void *)(v85 + 16);
    *(_QWORD *)(v85 + 56) = 0;
    n = v85;
    v276 = (volatile signed __int32 *)(v85 + 8);
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v85 + 8), 1u);
    else
      *(_DWORD *)(v85 + 8) = 2;
    v271 = 0;
    v272 = 0;
    v89 = (void *)operator new(0xF18u);
    sub_1FCFD20(v89, v88, v87, "-", 1, &src, v269, v270, 0, 0, 1, 1, 0, 0, 0);
    v90 = (volatile signed __int32 *)n;
    if ( n )
    {
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(n + 8), 0xFFFFFFFF) != 1 )
          goto LABEL_108;
      }
      else
      {
        v147 = *(_DWORD *)(n + 8);
        *(_DWORD *)(n + 8) = v147 - 1;
        if ( v147 != 1 )
          goto LABEL_108;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 16LL))(v90);
      if ( &_pthread_key_create )
      {
        v148 = _InterlockedExchangeAdd(v90 + 3, 0xFFFFFFFF);
      }
      else
      {
        v148 = *((_DWORD *)v90 + 3);
        *((_DWORD *)v90 + 3) = v148 - 1;
      }
      if ( v148 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 24LL))(v90);
    }
LABEL_108:
    v91 = v286[14];
    v92 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v89 + 136LL))(v89);
    v93 = v286;
    *(_QWORD *)(v91 + 18368) = v92;
    src = v89;
    sub_12E9E10(v93, &src);
    if ( src )
      (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
    sub_12EA240(v286, 1, 0);
    LODWORD(v274) = v266;
    if ( !v266 )
    {
      sub_FBE4E0(*(_QWORD *)(v286[12] + 688LL), v286[12] + 552LL, *(_QWORD *)(v286[12] + 56LL));
      goto LABEL_137;
    }
    v295 = v277;
    v94 = v292;
    v296 = 0x400000000LL;
    v95 = &v292[(unsigned int)v293];
    if ( v292 != v95 )
    {
      do
      {
        while ( 1 )
        {
          sub_2230330(&src, *((_QWORD *)*v94 + 1), *((_QWORD *)*v94 + 2) - *((_QWORD *)*v94 + 1), &byte_22F0C30, 0, 1);
          v96 = (unsigned int)v296;
          v97 = (unsigned int)v296 + 1LL;
          v98 = v296;
          if ( v97 > HIDWORD(v296) )
          {
            if ( v295 > (volatile signed __int32 *)&src || (v281 = v295, &src >= (void **)&v295[2 * (unsigned int)v296]) )
            {
              sub_12E53B0((__int64)v264, v97, (__m128)0LL, *(double *)v60.m128i_i64);
              v96 = (unsigned int)v296;
              v99 = v295;
              v100 = &src;
              v98 = v296;
            }
            else
            {
              sub_12E53B0((__int64)v264, v97, (__m128)0LL, *(double *)v60.m128i_i64);
              v99 = v295;
              v96 = (unsigned int)v296;
              v100 = (void **)((char *)v295 + (char *)&src - (char *)v281);
              v98 = v296;
            }
          }
          else
          {
            v99 = v295;
            v100 = &src;
          }
          v101 = *v100;
          *v100 = nullptr;
          *(_QWORD *)&v99[2 * v96] = v101;
          LODWORD(v296) = v98 + 1;
          if ( !src )
            break;
          ++v94;
          (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
          if ( v95 == v94 )
            goto LABEL_116;
        }
        ++v94;
      }
      while ( v95 != v94 );
    }
LABEL_116:
    v102 = (unsigned int)((_DWORD)v274 - 1);
    v290[0] = v291;
    sub_12E5050(
      v290,
      *(_BYTE **)(*(_QWORD *)(v275 + 144) + 32 * v102),
      *(_QWORD *)(*(_QWORD *)(v275 + 144) + 32 * v102) + *(_QWORD *)(*(_QWORD *)(v275 + 144) + 32 * v102 + 8));
    v84 = 0;
    LODWORD(n) = 0;
    v302 = 0;
    src = &off_2BEBE68;
    v303 = 1;
    v301 = nullptr;
    v300 = 0;
    v304 = v290;
    sub_227B8B0(&src, 0, 0, 0);
    if ( *((_QWORD *)&v300 + 1) - (_QWORD)v301 > 3u )
    {
      *v301 = 1751347246;
      v103 = &src;
      ++v301;
    }
    else
    {
      v103 = (void **)sub_227BF10(&src, ".pch", 4);
    }
    sub_227B910(v103, v102);
    v104 = (unsigned int)v312;
    v105 = (unsigned int)v312 + 1LL;
    if ( v105 > HIDWORD(v312) )
    {
      v221 = v311;
      if ( v311 > v290 || v290 >= &v311[4 * (unsigned int)v312] )
      {
        sub_A8C1F0((__int64)v280, v105);
        v106 = v311;
        v104 = (unsigned int)v312;
        v107 = v290;
      }
      else
      {
        sub_A8C1F0((__int64)v280, v105);
        v106 = v311;
        v104 = (unsigned int)v312;
        v107 = (void **)((char *)v311 + (char *)v290 - (char *)v221);
      }
    }
    else
    {
      v106 = v311;
      v107 = v290;
    }
    v108 = &v106[4 * v104];
    *v108 = v108 + 2;
    sub_12E5050(v108, *v107, (__int64)v107[1] + (_QWORD)*v107);
    LODWORD(v312) = v312 + 1;
    v109 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v286[16] + 144LL))(v286[16]);
    v110 = sub_12E5520(v286, (__int64)v290[0], (__int64)v290[1], v264, (__int64)v280, v109);
    v111 = v110;
    if ( !v110 )
      break;
    v112 = *((_DWORD *)v110 + 8);
    v287 = v110;
    v113 = v286;
    *((_DWORD *)v110 + 8) = v112 + 2;
    sub_12E9EB0(v113, &v287);
    v114 = (__int64)v287;
    if ( v287 )
    {
      v72 = (*((_DWORD *)v287 + 8))-- == 1;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v114 + 24) + 8LL))(v114 + 24);
    }
    v274 = v111 + 3;
    v115 = v286[14];
    ++*((_DWORD *)v111 + 8);
    v287 = v111 + 3;
    sub_A5F5F0(v115, (__int64 *)&v287);
    v116 = (__int64)v287;
    if ( v287 )
    {
      v72 = (*((_DWORD *)v287 + 2))-- == 1;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v116 + 8LL))(v116);
    }
    v72 = (*((_DWORD *)v111 + 8))-- == 1;
    if ( v72 )
      (*(void (__fastcall **)(_QWORD *))(v111[3] + 8LL))(v274);
    src = &off_2BEBE68;
    sub_227B7A0(&src);
    if ( v290[0] != v291 )
      operator delete(v290[0]);
    v117 = v295;
    v118 = &v295[2 * (unsigned int)v296];
    if ( v295 != v118 )
    {
      do
      {
        while ( 1 )
        {
          v118 -= 2;
          if ( !*(_QWORD *)v118 )
            break;
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v118 + 8LL))(*(_QWORD *)v118);
          if ( v117 == v118 )
            goto LABEL_134;
        }
      }
      while ( v117 != v118 );
LABEL_134:
      v118 = v295;
    }
    if ( v118 != v277 )
      free((void *)v118);
LABEL_137:
    if ( !(unsigned __int8)sub_12EB670(v286, v265) )
    {
      *v283 = 0;
      goto LABEL_436;
    }
    sub_1469FA0(v286[18], 0, 0);
    v119 = *(void (**)(void))(**(_QWORD **)(v286[4] + 48LL) + 32LL);
    if ( v119 != nullsub_556 )
      v119();
    v120 = *(_QWORD *)(v85 + 48);
    LOWORD(v301) = 257;
    sub_22307C0(v264, *(_QWORD *)(v85 + 40), v120, &src);
    v121 = (unsigned int)v293;
    v122 = (unsigned int)v293 + 1LL;
    v123 = v293;
    if ( v122 > HIDWORD(v293) )
    {
      v220 = v292;
      if ( v292 > v264 || v264 >= &v292[(unsigned int)v293] )
      {
        sub_12E53B0((__int64)v282, v122, v84, *(double *)v60.m128i_i64);
        v121 = (unsigned int)v293;
        v125 = v264;
        v124 = v292;
        v123 = v293;
      }
      else
      {
        sub_12E53B0((__int64)v282, v122, v84, *(double *)v60.m128i_i64);
        v124 = v292;
        v121 = (unsigned int)v293;
        v125 = (volatile signed __int32 **)((char *)v292 + (char *)v264 - (char *)v220);
        v123 = v293;
      }
    }
    else
    {
      v124 = v292;
      v125 = v264;
    }
    v126 = *v125;
    *v125 = nullptr;
    v124[v121] = v126;
    LODWORD(v293) = v123 + 1;
    if ( v295 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v295 + 8LL))(v295);
    *(_QWORD *)(v85 + 48) = 0;
    if ( v288[1] == v289 )
    {
      sub_12E5110((__int64)v288, (char *)v288[1], &v286);
    }
    else
    {
      v127 = v286;
      v128 = (char *)v288[1] + 8;
      v286 = nullptr;
      *(_QWORD *)v288[1] = v127;
      v288[1] = v128;
    }
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v276, 0xFFFFFFFF) != 1 )
        goto LABEL_148;
    }
    else
    {
      v155 = *(_DWORD *)(v85 + 8);
      *(_DWORD *)(v85 + 8) = v155 - 1;
      if ( v155 != 1 )
        goto LABEL_148;
    }
    (*(void (__fastcall **)(size_t))(*(_QWORD *)v85 + 16LL))(v85);
    if ( &_pthread_key_create )
    {
      v156 = _InterlockedExchangeAdd((volatile signed __int32 *)(v85 + 12), 0xFFFFFFFF);
    }
    else
    {
      v156 = *(_DWORD *)(v85 + 12);
      *(_DWORD *)(v85 + 12) = v156 - 1;
    }
    if ( v156 == 1 )
      (*(void (__fastcall **)(size_t))(*(_QWORD *)v85 + 24LL))(v85);
LABEL_148:
    if ( v286 )
      (*(void (__fastcall **)(_QWORD *))(*v286 + 8LL))(v286);
    v129 = v267;
    LODWORD(v274) = *(_DWORD *)v267;
    v72 = (_DWORD)v274 == 1;
    *(_DWORD *)v267 = (_DWORD)v274 - 1;
    if ( v72 )
    {
      v145 = v129;
      sub_FCAA60(v129);
      operator delete(v145, 0x3B90u);
    }
    v130 = v273;
    LODWORD(v267) = *(_DWORD *)v273;
    v72 = (_DWORD)v267 == 1;
    *(_DWORD *)v273 = (_DWORD)v267 - 1;
    if ( v72 )
    {
      v146 = v130;
      sub_FD5580((__int64)v130);
      operator delete(v146, 0x18u);
    }
    if ( v305 != v265 + 2 )
      operator delete(v305);
    v131 = v285;
    if ( v285 )
    {
      v132 = *((volatile signed __int32 **)v285 + 25);
      if ( !v132 )
        goto LABEL_160;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v132 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_160;
      }
      else
      {
        v209 = *((_DWORD *)v132 + 2);
        *((_DWORD *)v132 + 2) = v209 - 1;
        if ( v209 != 1 )
          goto LABEL_160;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v132 + 16LL))(v132);
      if ( &_pthread_key_create )
      {
        v210 = _InterlockedExchangeAdd(v132 + 3, 0xFFFFFFFF);
      }
      else
      {
        v210 = *((_DWORD *)v132 + 3);
        *((_DWORD *)v132 + 3) = v210 - 1;
      }
      if ( v210 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v132 + 24LL))(v132);
LABEL_160:
      v133 = (volatile signed __int32 *)v131[23];
      if ( !v133 )
        goto LABEL_163;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v133 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_163;
      }
      else
      {
        v207 = *((_DWORD *)v133 + 2);
        *((_DWORD *)v133 + 2) = v207 - 1;
        if ( v207 != 1 )
          goto LABEL_163;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v133 + 16LL))(v133);
      if ( &_pthread_key_create )
      {
        v208 = _InterlockedExchangeAdd(v133 + 3, 0xFFFFFFFF);
      }
      else
      {
        v208 = *((_DWORD *)v133 + 3);
        *((_DWORD *)v133 + 3) = v208 - 1;
      }
      if ( v208 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v133 + 24LL))(v133);
LABEL_163:
      v134 = (volatile signed __int32 *)v131[21];
      if ( !v134 )
        goto LABEL_166;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v134 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_166;
      }
      else
      {
        v185 = *((_DWORD *)v134 + 2);
        *((_DWORD *)v134 + 2) = v185 - 1;
        if ( v185 != 1 )
          goto LABEL_166;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v134 + 16LL))(v134);
      if ( &_pthread_key_create )
      {
        v186 = _InterlockedExchangeAdd(v134 + 3, 0xFFFFFFFF);
      }
      else
      {
        v186 = *((_DWORD *)v134 + 3);
        *((_DWORD *)v134 + 3) = v186 - 1;
      }
      if ( v186 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v134 + 24LL))(v134);
LABEL_166:
      v135 = (volatile signed __int32 *)v131[19];
      if ( !v135 )
        goto LABEL_169;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v135 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_169;
      }
      else
      {
        v187 = *((_DWORD *)v135 + 2);
        *((_DWORD *)v135 + 2) = v187 - 1;
        if ( v187 != 1 )
          goto LABEL_169;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v135 + 16LL))(v135);
      if ( &_pthread_key_create )
      {
        v188 = _InterlockedExchangeAdd(v135 + 3, 0xFFFFFFFF);
      }
      else
      {
        v188 = *((_DWORD *)v135 + 3);
        *((_DWORD *)v135 + 3) = v188 - 1;
      }
      if ( v188 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v135 + 24LL))(v135);
LABEL_169:
      v136 = (volatile signed __int32 *)v131[17];
      if ( !v136 )
        goto LABEL_172;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v136 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_172;
      }
      else
      {
        v189 = *((_DWORD *)v136 + 2);
        *((_DWORD *)v136 + 2) = v189 - 1;
        if ( v189 != 1 )
          goto LABEL_172;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v136 + 16LL))(v136);
      if ( &_pthread_key_create )
      {
        v190 = _InterlockedExchangeAdd(v136 + 3, 0xFFFFFFFF);
      }
      else
      {
        v190 = *((_DWORD *)v136 + 3);
        *((_DWORD *)v136 + 3) = v190 - 1;
      }
      if ( v190 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v136 + 24LL))(v136);
LABEL_172:
      v137 = (volatile signed __int32 *)v131[15];
      if ( !v137 )
        goto LABEL_175;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v137 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_175;
      }
      else
      {
        v191 = *((_DWORD *)v137 + 2);
        *((_DWORD *)v137 + 2) = v191 - 1;
        if ( v191 != 1 )
          goto LABEL_175;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v137 + 16LL))(v137);
      if ( &_pthread_key_create )
      {
        v192 = _InterlockedExchangeAdd(v137 + 3, 0xFFFFFFFF);
      }
      else
      {
        v192 = *((_DWORD *)v137 + 3);
        *((_DWORD *)v137 + 3) = v192 - 1;
      }
      if ( v192 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v137 + 24LL))(v137);
LABEL_175:
      v138 = (volatile signed __int32 *)v131[13];
      if ( !v138 )
        goto LABEL_178;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v138 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_178;
      }
      else
      {
        v193 = *((_DWORD *)v138 + 2);
        *((_DWORD *)v138 + 2) = v193 - 1;
        if ( v193 != 1 )
          goto LABEL_178;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v138 + 16LL))(v138);
      if ( &_pthread_key_create )
      {
        v194 = _InterlockedExchangeAdd(v138 + 3, 0xFFFFFFFF);
      }
      else
      {
        v194 = *((_DWORD *)v138 + 3);
        *((_DWORD *)v138 + 3) = v194 - 1;
      }
      if ( v194 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v138 + 24LL))(v138);
LABEL_178:
      v139 = (volatile signed __int32 *)v131[11];
      if ( !v139 )
        goto LABEL_181;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v139 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_181;
      }
      else
      {
        v195 = *((_DWORD *)v139 + 2);
        *((_DWORD *)v139 + 2) = v195 - 1;
        if ( v195 != 1 )
          goto LABEL_181;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v139 + 16LL))(v139);
      if ( &_pthread_key_create )
      {
        v196 = _InterlockedExchangeAdd(v139 + 3, 0xFFFFFFFF);
      }
      else
      {
        v196 = *((_DWORD *)v139 + 3);
        *((_DWORD *)v139 + 3) = v196 - 1;
      }
      if ( v196 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v139 + 24LL))(v139);
LABEL_181:
      v140 = (volatile signed __int32 *)v131[9];
      if ( !v140 )
        goto LABEL_184;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v140 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_184;
      }
      else
      {
        v197 = *((_DWORD *)v140 + 2);
        *((_DWORD *)v140 + 2) = v197 - 1;
        if ( v197 != 1 )
          goto LABEL_184;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v140 + 16LL))(v140);
      if ( &_pthread_key_create )
      {
        v198 = _InterlockedExchangeAdd(v140 + 3, 0xFFFFFFFF);
      }
      else
      {
        v198 = *((_DWORD *)v140 + 3);
        *((_DWORD *)v140 + 3) = v198 - 1;
      }
      if ( v198 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v140 + 24LL))(v140);
LABEL_184:
      v141 = (volatile signed __int32 *)v131[7];
      if ( !v141 )
        goto LABEL_187;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v141 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_187;
      }
      else
      {
        v199 = *((_DWORD *)v141 + 2);
        *((_DWORD *)v141 + 2) = v199 - 1;
        if ( v199 != 1 )
          goto LABEL_187;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v141 + 16LL))(v141);
      if ( &_pthread_key_create )
      {
        v200 = _InterlockedExchangeAdd(v141 + 3, 0xFFFFFFFF);
      }
      else
      {
        v200 = *((_DWORD *)v141 + 3);
        *((_DWORD *)v141 + 3) = v200 - 1;
      }
      if ( v200 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v141 + 24LL))(v141);
LABEL_187:
      v142 = (volatile signed __int32 *)v131[5];
      if ( !v142 )
        goto LABEL_190;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v142 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_190;
      }
      else
      {
        v201 = *((_DWORD *)v142 + 2);
        *((_DWORD *)v142 + 2) = v201 - 1;
        if ( v201 != 1 )
          goto LABEL_190;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v142 + 16LL))(v142);
      if ( &_pthread_key_create )
      {
        v202 = _InterlockedExchangeAdd(v142 + 3, 0xFFFFFFFF);
      }
      else
      {
        v202 = *((_DWORD *)v142 + 3);
        *((_DWORD *)v142 + 3) = v202 - 1;
      }
      if ( v202 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v142 + 24LL))(v142);
LABEL_190:
      v143 = (volatile signed __int32 *)v131[3];
      if ( !v143 )
        goto LABEL_193;
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v143 + 2, 0xFFFFFFFF) != 1 )
          goto LABEL_193;
      }
      else
      {
        v203 = *((_DWORD *)v143 + 2);
        *((_DWORD *)v143 + 2) = v203 - 1;
        if ( v203 != 1 )
          goto LABEL_193;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v143 + 16LL))(v143);
      if ( &_pthread_key_create )
      {
        v204 = _InterlockedExchangeAdd(v143 + 3, 0xFFFFFFFF);
      }
      else
      {
        v204 = *((_DWORD *)v143 + 3);
        *((_DWORD *)v143 + 3) = v204 - 1;
      }
      if ( v204 == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v143 + 24LL))(v143);
LABEL_193:
      v144 = (volatile signed __int32 *)v131[1];
      if ( v144 )
      {
        if ( &_pthread_key_create )
        {
          if ( _InterlockedExchangeAdd(v144 + 2, 0xFFFFFFFF) != 1 )
            goto LABEL_196;
        }
        else
        {
          v205 = *((_DWORD *)v144 + 2);
          *((_DWORD *)v144 + 2) = v205 - 1;
          if ( v205 != 1 )
            goto LABEL_196;
        }
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v144 + 16LL))(v144);
        if ( &_pthread_key_create )
        {
          v206 = _InterlockedExchangeAdd(v144 + 3, 0xFFFFFFFF);
        }
        else
        {
          v206 = *((_DWORD *)v144 + 3);
          *((_DWORD *)v144 + 3) = v206 - 1;
        }
        if ( v206 == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v144 + 24LL))(v144);
      }
LABEL_196:
      operator delete(v131, 0xD0u);
    }
    if ( v279 == v266 )
    {
      v7 = *(_QWORD *)(v275 + 152);
      goto LABEL_474;
    }
    ++v266;
    v3 = v268[2];
  }
  *v283 = 0;
  src = &off_2BEBE68;
  sub_227B7A0(&src);
  if ( v290[0] != v291 )
    operator delete(v290[0]);
  v253 = v295;
  v254 = &v295[2 * (unsigned int)v296];
  if ( v295 != v254 )
  {
    do
    {
      while ( 1 )
      {
        v254 -= 2;
        if ( !*(_QWORD *)v254 )
          break;
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v254 + 8LL))(*(_QWORD *)v254);
        if ( v253 == v254 )
          goto LABEL_494;
      }
    }
    while ( v253 != v254 );
LABEL_494:
    v254 = v295;
  }
  if ( v254 == (volatile signed __int32 *)(v264 + 2) )
  {
LABEL_436:
    if ( !&_pthread_key_create )
      goto LABEL_497;
LABEL_437:
    if ( _InterlockedExchangeAdd(v276, 0xFFFFFFFF) != 1 )
      goto LABEL_438;
    goto LABEL_498;
  }
  free((void *)v254);
  if ( &_pthread_key_create )
    goto LABEL_437;
LABEL_497:
  v255 = *(_DWORD *)(v85 + 8);
  *(_DWORD *)(v85 + 8) = v255 - 1;
  if ( v255 != 1 )
    goto LABEL_438;
LABEL_498:
  (*(void (__fastcall **)(size_t))(*(_QWORD *)v85 + 16LL))(v85);
  if ( &_pthread_key_create )
  {
    v256 = _InterlockedExchangeAdd((volatile signed __int32 *)(v85 + 12), 0xFFFFFFFF);
  }
  else
  {
    v256 = *(_DWORD *)(v85 + 12);
    *(_DWORD *)(v85 + 12) = v256 - 1;
  }
  if ( v256 == 1 )
    (*(void (__fastcall **)(size_t))(*(_QWORD *)v85 + 24LL))(v85);
LABEL_438:
  if ( v286 )
    (*(void (__fastcall **)(_QWORD *))(*v286 + 8LL))(v286);
  v222 = v267;
  LODWORD(v264) = *(_DWORD *)v267;
  v72 = (_DWORD)v264 == 1;
  *(_DWORD *)v267 = (_DWORD)v264 - 1;
  if ( v72 )
  {
    v258 = v222;
    sub_FCAA60(v222);
    operator delete(v258, 0x3B90u);
  }
  v223 = v273;
  LODWORD(v264) = *(_DWORD *)v273;
  v72 = (_DWORD)v264 == 1;
  *(_DWORD *)v273 = (_DWORD)v264 - 1;
  if ( v72 )
  {
    v257 = v223;
    sub_FD5580((__int64)v223);
    operator delete(v257, 0x18u);
  }
  if ( v305 != v265 + 2 )
    operator delete(v305);
  v224 = v285;
  if ( v285 )
  {
    sub_12DC1F0(v285);
    operator delete(v224, 0xD0u);
  }
LABEL_448:
  v225 = v311;
  v226 = &v311[4 * (unsigned int)v312];
  if ( v311 != v226 )
  {
    do
    {
      while ( 1 )
      {
        v226 -= 4;
        if ( *v226 == v226 + 2 )
          break;
        operator delete(*v226);
        if ( v225 == v226 )
          goto LABEL_451;
      }
    }
    while ( v225 != v226 );
LABEL_451:
    v226 = v311;
  }
  if ( v226 != (void **)(v280 + 2) )
    free(v226);
  v227 = v292;
  v228 = &v292[(unsigned int)v293];
  if ( v292 != v228 )
  {
    do
    {
      while ( *--v228 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)*v228 + 8LL))(*v228);
        if ( v227 == v228 )
          goto LABEL_457;
      }
    }
    while ( v227 != v228 );
LABEL_457:
    v228 = v292;
  }
  if ( v228 != (volatile signed __int32 **)(v282 + 2) )
    free(v228);
  v229 = (__int64 *)v288[1];
  v230 = (__int64 *)v288[0];
  if ( v288[1] != v288[0] )
  {
    do
    {
      while ( 1 )
      {
        v231 = *v230;
        if ( !*v230 )
          break;
        ++v230;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v231 + 8LL))(v231);
        if ( v230 == v229 )
          goto LABEL_463;
      }
      ++v230;
    }
    while ( v229 != v230 );
LABEL_463:
    v230 = (__int64 *)v288[0];
  }
  if ( v230 )
    operator delete(v230);
  return v283;
}
