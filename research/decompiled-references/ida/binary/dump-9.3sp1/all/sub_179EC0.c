__int64 __fastcall sub_179EC0(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int a9)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  unsigned int v15; // ebx
  __int64 *v17; // r14
  int v18; // r13d
  __int64 v19; // rbx
  int v20; // edx
  unsigned __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // r14
  __int64 *v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // r14
  __int64 *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // r12
  __int64 v44; // rax
  __int64 v45; // r14
  int v46; // r14d
  unsigned int v47; // ebx
  __int64 *p_src; // rsi
  __int64 v49; // r8
  int v50; // r9d
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rdi
  __m128i si128; // xmm0
  _QWORD *v59; // r8
  _QWORD *v60; // rdx
  __int64 *v61; // rsi
  __int64 v62; // rcx
  __m128i v63; // xmm0
  __m128i v64; // xmm0
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r13
  __int64 v69; // rdx
  void *v70; // rbx
  __int64 v71; // rcx
  __int64 *v72; // rsi
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned __int64 v76; // r13
  size_t v77; // r15
  size_t v78; // rdi
  __m128i v79; // xmm0
  __int64 v80; // rdx
  __int64 v81; // r13
  __int64 v82; // rdi
  __int64 v83; // r13
  size_t v84; // r15
  __int64 v85; // rbx
  __int64 v86; // rax
  unsigned __int64 v87; // r13
  unsigned __int64 v88; // rsi
  __int64 v89; // r13
  __int64 v90; // r15
  __int64 *v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // r8
  int i; // r13d
  unsigned __int64 v95; // rdx
  int v96; // eax
  void *v97; // rax
  const void *v98; // rsi
  __int64 v99; // r15
  unsigned __int64 v100; // r13
  __int64 v101; // rbx
  __int64 v102; // rax
  size_t v103; // rbx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r9
  __int64 v108; // r14
  __int64 *v109; // r13
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  int v115; // r15d
  __int64 (__fastcall ***v116)(); // rcx
  char *v117; // rax
  __int64 *v118; // r14
  __int64 v119; // rcx
  unsigned __int64 *v120; // rbx
  __int64 v121; // r15
  unsigned __int64 v122; // rcx
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rsi
  _QWORD *v125; // rcx
  _QWORD *v126; // rsi
  int v127; // ebx
  _QWORD *v128; // rbx
  _QWORD *v129; // rdx
  _QWORD *v130; // rax
  __int64 v131; // rax
  _DWORD *v132; // rsi
  unsigned __int64 v133; // rsi
  __int64 v134; // rax
  unsigned __int64 v135; // rbx
  __int64 (__fastcall **v136)(); // rdi
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  __int64 v141; // rdx
  __int64 v142; // rdi
  __int64 v143; // rax
  __int64 (__fastcall *v144)(__int64); // rax
  __int64 v145; // rax
  unsigned __int64 v146; // rbx
  int v147; // r14d
  int v148; // esi
  __int64 *v149; // rax
  __int64 *v150; // rdx
  __int64 *j; // r14
  __int64 v152; // rdx
  int v153; // edi
  __int64 (__fastcall *v154)(__int64, int); // rax
  int v155; // eax
  __int64 v156; // r15
  __int64 v157; // r13
  __int64 (__fastcall *v158)(__int64, int, int); // rax
  int v159; // eax
  int v160; // r10d
  __int64 *v161; // rdi
  __int64 v162; // rcx
  _DWORD *v163; // rdx
  _DWORD *v164; // rax
  __int64 (__fastcall *v165)(__int64, int); // rax
  int v166; // eax
  __int64 v167; // r13
  __int64 v168; // r15
  __int64 (__fastcall *v169)(__int64, int, int); // rax
  int v170; // eax
  int v171; // r10d
  __int64 *v172; // rdi
  __int64 v173; // rsi
  __int64 v174; // rcx
  _DWORD *v175; // rdx
  _DWORD *v176; // rax
  __int64 v177; // r12
  unsigned __int64 v178; // rsi
  _DWORD *v179; // rsi
  __int64 v180; // rax
  __int64 *v181; // rdi
  __int64 v182; // rax
  __int64 v183; // rsi
  __int64 *v184; // rdi
  __int64 v185; // rax
  __int64 v186; // rsi
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rax
  __int64 v190; // rdx
  __int64 *v191; // r15
  size_t v192; // r14
  size_t v193; // r15
  __int64 v194; // rsi
  __int64 *v195; // r8
  __int64 v196; // r14
  void *v197; // rax
  size_t v198; // r13
  size_t v199; // r15
  __int64 v200; // rax
  unsigned __int64 v201; // r15
  __int64 v202; // rbx
  int v203; // eax
  int k; // r14d
  int v205; // eax
  size_t v206; // rsi
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // rdx
  __int64 v211; // rax
  _DWORD *v212; // r14
  __int64 v213; // r8
  unsigned int v214; // eax
  _QWORD *v215; // rdx
  unsigned __int64 v216; // rax
  __int64 (__fastcall **v217)(); // rsi
  int v218; // r14d
  __int64 v219; // rax
  __int64 v220; // rax
  size_t v221; // rax
  __int64 v222; // rsi
  size_t v223; // r15
  unsigned __int64 v224; // rbx
  __int64 v225; // rax
  unsigned __int64 v226; // rbx
  size_t v227; // r15
  __int64 v228; // rax
  __int64 v229; // rax
  _QWORD *v230; // [rsp+0h] [rbp-400h]
  int v231; // [rsp+0h] [rbp-400h]
  int v232; // [rsp+0h] [rbp-400h]
  int v233; // [rsp+0h] [rbp-400h]
  __int64 v234; // [rsp+8h] [rbp-3F8h]
  size_t v235[2]; // [rsp+10h] [rbp-3F0h] BYREF
  __int64 *v236; // [rsp+20h] [rbp-3E0h]
  __int64 v237; // [rsp+28h] [rbp-3D8h]
  __m128i v238; // [rsp+30h] [rbp-3D0h] BYREF
  __int64 v239; // [rsp+40h] [rbp-3C0h]
  size_t n; // [rsp+48h] [rbp-3B8h]
  __int64 *v241; // [rsp+50h] [rbp-3B0h]
  __int64 *v242; // [rsp+58h] [rbp-3A8h]
  __int64 *v243; // [rsp+60h] [rbp-3A0h]
  __int64 *v244; // [rsp+68h] [rbp-398h]
  size_t v245; // [rsp+70h] [rbp-390h]
  __int64 *v246; // [rsp+78h] [rbp-388h]
  int v247; // [rsp+80h] [rbp-380h]
  unsigned int v248; // [rsp+84h] [rbp-37Ch]
  __int64 *v249; // [rsp+88h] [rbp-378h]
  size_t v250[2]; // [rsp+90h] [rbp-370h] BYREF
  unsigned int v251; // [rsp+ACh] [rbp-354h] BYREF
  __int64 v252[2]; // [rsp+B0h] [rbp-350h] BYREF
  __int64 *v253; // [rsp+C0h] [rbp-340h] BYREF
  int v254; // [rsp+C8h] [rbp-338h]
  _DWORD *v255; // [rsp+D0h] [rbp-330h] BYREF
  __int128 v256; // [rsp+D8h] [rbp-328h]
  unsigned __int64 v257; // [rsp+F0h] [rbp-310h] BYREF
  __int128 v258; // [rsp+F8h] [rbp-308h]
  __int64 (__fastcall ***v259)(); // [rsp+110h] [rbp-2F0h] BYREF
  __int128 v260; // [rsp+118h] [rbp-2E8h]
  _QWORD *v261; // [rsp+130h] [rbp-2D0h] BYREF
  __int128 v262; // [rsp+138h] [rbp-2C8h]
  __int64 *v263; // [rsp+150h] [rbp-2B0h] BYREF
  __int128 v264; // [rsp+158h] [rbp-2A8h]
  __int64 v265; // [rsp+170h] [rbp-290h] BYREF
  __int128 v266; // [rsp+178h] [rbp-288h]
  __int64 v267[2]; // [rsp+190h] [rbp-270h] BYREF
  int v268; // [rsp+1A0h] [rbp-260h]
  __int64 v269[2]; // [rsp+1B0h] [rbp-250h] BYREF
  int v270; // [rsp+1C0h] [rbp-240h]
  __int64 (__fastcall **v271)(); // [rsp+1D0h] [rbp-230h] BYREF
  __int64 v272[2]; // [rsp+1D8h] [rbp-228h] BYREF
  char v273; // [rsp+1E8h] [rbp-218h]
  __int64 v274; // [rsp+1F0h] [rbp-210h] BYREF
  int v275; // [rsp+1F8h] [rbp-208h]
  void *src; // [rsp+200h] [rbp-200h] BYREF
  __int128 v277; // [rsp+208h] [rbp-1F8h]
  __int64 v278[2]; // [rsp+220h] [rbp-1E0h] BYREF
  size_t v279; // [rsp+230h] [rbp-1D0h]
  __m128i v280; // [rsp+238h] [rbp-1C8h]
  __int64 v281[2]; // [rsp+250h] [rbp-1B0h] BYREF
  __int64 v282; // [rsp+260h] [rbp-1A0h] BYREF
  __int128 v283; // [rsp+268h] [rbp-198h]
  __int64 v284; // [rsp+280h] [rbp-180h] BYREF
  int v285; // [rsp+288h] [rbp-178h] BYREF
  _QWORD *v286; // [rsp+290h] [rbp-170h]
  int *v287; // [rsp+298h] [rbp-168h]
  int *v288; // [rsp+2A0h] [rbp-160h]
  __int64 v289; // [rsp+2A8h] [rbp-158h]
  __int64 (__fastcall **v290)(); // [rsp+2B0h] [rbp-150h] BYREF
  _BYTE v291[24]; // [rsp+2B8h] [rbp-148h] BYREF
  __int64 v292[2]; // [rsp+2D0h] [rbp-130h] BYREF
  int v293; // [rsp+2E0h] [rbp-120h]
  __int64 v294; // [rsp+2E8h] [rbp-118h] BYREF
  int v295; // [rsp+2F8h] [rbp-108h]
  int v296; // [rsp+300h] [rbp-100h]
  unsigned __int64 *v297; // [rsp+308h] [rbp-F8h]
  __int64 (__fastcall **v298)(); // [rsp+310h] [rbp-F0h] BYREF
  __int64 v299; // [rsp+318h] [rbp-E8h]
  __int128 v300; // [rsp+320h] [rbp-E0h]
  char v301; // [rsp+330h] [rbp-D0h]
  unsigned __int64 v302; // [rsp+334h] [rbp-CCh]
  __int64 v303; // [rsp+340h] [rbp-C0h]
  __int128 v304; // [rsp+348h] [rbp-B8h]
  __int64 v305; // [rsp+358h] [rbp-A8h]
  __int128 v306; // [rsp+360h] [rbp-A0h]
  __int64 v307; // [rsp+370h] [rbp-90h]
  __int128 v308; // [rsp+378h] [rbp-88h]
  __int64 v309; // [rsp+388h] [rbp-78h]
  __int128 v310; // [rsp+390h] [rbp-70h]
  int v311; // [rsp+3A0h] [rbp-60h]
  __int64 v312; // [rsp+3A8h] [rbp-58h]
  __int128 v313; // [rsp+3B0h] [rbp-50h]
  unsigned __int64 v314; // [rsp+3C8h] [rbp-38h]

  v249 = a1;
  v243 = a2;
  v239 = a7;
  LODWORD(v244) = a4;
  v248 = a5;
  LODWORD(v241) = a8;
  LOBYTE(v236) = a8;
  v314 = __readfsqword(0x28u);
  v246 = &v274;
  sub_64000(&v274, a3);
  v14 = *(_QWORD *)(a3 + 24);
  src = nullptr;
  v277 = 0;
  if ( v14 )
  {
    v97 = (void *)qalloc_or_throw(16 * v14, a3, v12, v13);
    v98 = *(const void **)(a3 + 16);
    src = v97;
    *((_QWORD *)&v277 + 1) = v14;
    memcpy(v97, v98, 16 * v14);
    *(_QWORD *)&v277 = v14;
  }
  v278[0] = 0;
  v280 = 0;
  v278[1] = 0;
  v279 = 0;
  v247 = (unsigned __int8)v241;
  if ( sub_1787A0(v249, v243, &v251, v246, (unsigned int)v244, v248, a6, v239, (unsigned __int8)v241, a9) )
  {
    v15 = v251;
    goto LABEL_5;
  }
  v252[0] = 0;
  v252[1] = 0;
  sub_64190(v252, (int)v244);
  if ( v248 != -1 )
    sub_6FCF0((__int64)v249, v248, v252);
  v271 = off_4DBB18;
  v272[0] = 0;
  v272[1] = 0;
  v273 = 0;
  sub_6F590((__int64 *)&v271, v249, (int)v244, 0);
  v17 = v272;
  if ( v248 != -1 )
  {
    sub_64700(v252, v272);
    v17 = v252;
  }
  v15 = 0;
  if ( (unsigned __int8)sub_64880(v17) )
    goto LABEL_83;
  v255 = nullptr;
  v256 = 0;
  LODWORD(v242) = -1;
  v18 = sub_64960(v17, 0);
  v19 = -1;
  while ( v18 != *((_DWORD *)v17 + 2) )
  {
    v180 = v256;
    if ( (_DWORD)v244 == v18 )
    {
      v19 = (int)v256;
    }
    else
    {
      v20 = (int)v242;
      if ( v18 == v248 )
        v20 = v256;
      LODWORD(v242) = v20;
    }
    v179 = v255;
    LODWORD(v298) = v18;
    v21 = v256 + 1;
    if ( &v298 < (__int64 (__fastcall ***)())v255 || &v298 >= (__int64 (__fastcall ***)())&v255[*((_QWORD *)&v256 + 1)] )
    {
      if ( *((_QWORD *)&v256 + 1) < v21 )
      {
        v255 = (_DWORD *)qvector_reserve((__int64)&v255, (__int64)v255, v21, 4);
        v179 = v255;
        v22 = (int)v298;
        v180 = v256;
      }
      else
      {
        v22 = v18;
      }
      v179[v180] = v22;
    }
    else
    {
      if ( *((_QWORD *)&v256 + 1) < v21 )
      {
        v255 = (_DWORD *)qvector_reserve((__int64)&v255, (__int64)v255, v21, 4);
        v179 = v255;
        v180 = v256;
      }
      v179[v180] = v18;
    }
    *(_QWORD *)&v256 = v256 + 1;
    v18 = sub_64960(v17, v18 + 1);
  }
  if ( (_DWORD)v19 == -1 )
  {
    if ( !under_debugger )
      sub_383060(50542);
    goto LABEL_372;
  }
  if ( (_DWORD)v19 )
  {
    v255[v19] = *v255;
    *v255 = (_DWORD)v244;
  }
  v46 = v256;
  if ( (_DWORD)v242 != -1 && (int)v242 != (_QWORD)v256 - 1LL )
  {
    v47 = v248;
    v255[(int)v242] = v255[(_QWORD)v256 - 1];
    v255[(_QWORD)v256 - 1] = v47;
    v46 = v256;
  }
  LODWORD(v245) = v46;
  v257 = 0;
  v259 = nullptr;
  v261 = nullptr;
  v263 = nullptr;
  v265 = 0;
  v258 = 0;
  v260 = 0;
  v262 = 0;
  v264 = 0;
  v266 = 0;
  if ( v46 )
  {
    p_src = nullptr;
    v265 = qvector_reserve((__int64)&v265, 0, v46, 24);
    if ( (unsigned __int64)v266 < v46 )
    {
      v51 = v266 + 1;
      v52 = 24 * v266;
      v53 = 24 * v266 + v265;
      *(_QWORD *)v53 = 0;
      *(_OWORD *)(v53 + 8) = 0;
      if ( v51 < v46 )
      {
        v54 = v52 + 24;
        do
        {
          ++v51;
          v55 = v54 + v265;
          v54 += 24;
          *(_QWORD *)v55 = 0;
          *(_OWORD *)(v55 + 8) = 0;
        }
        while ( v46 != v51 );
      }
    }
    v56 = (unsigned int)v245;
    *(_QWORD *)&v266 = v46;
    if ( (int)v245 > 0 )
    {
      v250[0] = 0;
      v237 = 4LL * (unsigned int)(v46 - 1) + 4;
      while ( 1 )
      {
        v65 = v249[5];
        v66 = *(unsigned int *)((char *)v255 + v250[0]);
        if ( (unsigned int)v66 >= *(_DWORD *)(v65 + 64) )
          break;
        v67 = *(_QWORD *)(v65 + 528);
        v68 = *(_QWORD *)(v67 + 8 * v66);
        if ( (*(_DWORD *)(v68 + 24) & 0x600) != 0x200 )
        {
          p_src = nullptr;
          sub_A7590(v68, 0, v67, v56, v49, v50);
        }
        v59 = (_QWORD *)(v265 + 6 * v250[0]);
        v69 = v68 + 200;
        v238.m128i_i8[0] = a9 & 1;
        if ( (a9 & 1) == 0 )
          v69 = v68 + 240;
        v70 = nullptr;
        v71 = *(_QWORD *)(v69 + 24);
        if ( v71 )
        {
          v230 = (_QWORD *)(v265 + 6 * v250[0]);
          v234 = v69;
          v235[0] = *(_QWORD *)(v69 + 24);
          n = 16 * v71;
          v70 = (void *)qalloc_or_throw(16 * v71, (__int64)p_src, v69, v71);
          memcpy(v70, *(const void **)(v234 + 16), n);
          v59 = v230;
          v71 = v235[0];
        }
        v57 = *v59;
        si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v71, (__m128i)(unsigned __int64)v71);
        if ( *v59 )
        {
          v59[1] = 0;
          n = (size_t)v59;
          *(__m128i *)v235 = si128;
          qfree(v57);
          si128 = _mm_load_si128((const __m128i *)v235);
          v59 = (_QWORD *)n;
        }
        *v59 = v70;
        *(__m128i *)(v59 + 1) = si128;
        p_src = (__int64 *)&src;
        n = (size_t)&src;
        sub_3180C0(v59, &src);
        if ( ((unsigned __int8)v236 & 1) != 0 && *(_DWORD *)(v68 + 72) != (_DWORD)v244 )
        {
          v60 = (_QWORD *)(v68 + 200);
          if ( v238.m128i_i8[0] )
            v60 = (_QWORD *)(v68 + 240);
          v238.m128i_i64[0] = (__int64)v60;
          if ( (unsigned __int8)sub_64780(v60, v246)
            || (p_src = (__int64 *)n, (unsigned __int8)sub_318470(v238.m128i_i64[0] + 16, n)) )
          {
            v61 = v246;
            sub_648D0(v278, v246);
            n = 0;
            v238.m128i_i64[0] = v277;
            if ( (_QWORD)v277 )
            {
              v235[0] = 16 * v277;
              n = qalloc_or_throw(16 * v277, (__int64)v61, 16 * v277, v62);
              memcpy((void *)n, src, v235[0]);
            }
            v63 = _mm_loadl_epi64(&v238);
            v64 = _mm_unpacklo_epi64(v63, v63);
            if ( v279 )
            {
              v238 = v64;
              v280.m128i_i64[0] = 0;
              qfree(v279);
              v64 = _mm_load_si128(&v238);
            }
            v280 = v64;
            p_src = v278;
            v279 = n;
            v15 = sub_173040(v243, v278, v68, 0, 0, v247, a9);
            v251 = v15;
            if ( v15 )
              goto LABEL_63;
          }
        }
        v250[0] += 4LL;
        if ( v237 == v250[0] )
          goto LABEL_117;
      }
      if ( !under_debugger )
        sub_383060(52719);
LABEL_372:
      BUG();
    }
  }
LABEL_117:
  if ( ((unsigned __int8)v241 & 1) != 0 )
  {
    if ( v248 != -1 )
    {
      v72 = v246;
      sub_648D0(v278, v246);
      v76 = v277;
      v77 = 0;
      if ( (_QWORD)v277 )
      {
        v250[0] = 16 * v277;
        v197 = (void *)qalloc_or_throw(16 * v277, (__int64)v72, 16 * v277, v73);
        v72 = (__int64 *)src;
        v77 = (size_t)v197;
        memcpy(v197, src, v250[0]);
      }
      v78 = v279;
      v79 = _mm_unpacklo_epi64((__m128i)v76, (__m128i)v76);
      if ( v279 )
      {
        *(__m128i *)v250 = v79;
        v280.m128i_i64[0] = 0;
        qfree(v279);
        v79 = _mm_load_si128((const __m128i *)v250);
      }
      v279 = v77;
      v280 = v79;
      v80 = v249[5];
      if ( v248 >= *(_DWORD *)(v80 + 64) )
        sub_1733C0(v78, v72, v80, v73, v74, v75);
      v15 = sub_173040(v243, v278, *(_QWORD *)(*(_QWORD *)(v80 + 528) + 8LL * v248), 0, v239, v247, a9);
      v251 = v15;
      if ( v15 )
        goto LABEL_63;
    }
    if ( ((unsigned __int8)v241 & 2) == 0 )
    {
      v15 = 0;
      goto LABEL_63;
    }
  }
  v285 = 0;
  v250[0] = (size_t)&v285;
  v287 = &v285;
  v288 = &v285;
  v286 = nullptr;
  v244 = &v284;
  v289 = 0;
  n = (size_t)&src;
  sub_179E20(&v284, (__int64)&src);
  if ( (int)v245 > 0 )
  {
    v81 = 0;
    do
    {
      sub_179E20(v244, v81 + v265);
      v81 += 24;
    }
    while ( v81 != 8 * (3LL * (unsigned int)(v46 - 1) + 3) );
  }
  LODWORD(v237) = sub_64B20((__int64)v246);
  v82 = v257;
  v267[0] = 0;
  v267[1] = 0;
  v238.m128i_i64[0] = v289;
  v268 = 0;
  if ( v257 )
  {
    v83 = v258;
    if ( (_QWORD)v258 )
    {
      v84 = v250[0];
      v85 = 0;
      do
      {
        v86 = 3 * v85++;
        qfree(*(_QWORD *)(v82 + 8 * v86));
        v82 = v257;
      }
      while ( v83 != v85 );
      v250[0] = v84;
    }
    *(_QWORD *)&v258 = 0;
    qfree(v82);
    v257 = 0;
    *((_QWORD *)&v258 + 1) = 0;
  }
  v87 = v258;
  if ( v46 < (unsigned __int64)v258 )
  {
    v223 = v250[0];
    v224 = v46;
    do
    {
      v225 = 3 * v224++;
      qfree(*(_QWORD *)(v257 + 8 * v225));
    }
    while ( v224 < v87 );
    v250[0] = v223;
    *(_QWORD *)&v258 = v46;
  }
  else if ( (unsigned __int64)v258 < v46 )
  {
    v88 = v257;
    if ( (unsigned __int64)v267 < v257 || (unsigned __int64)v267 >= v257 + 24LL * *((_QWORD *)&v258 + 1) )
    {
      if ( *((_QWORD *)&v258 + 1) >= (unsigned __int64)v46
        || (v229 = qvector_reserve((__int64)&v257, v257, v46, 24),
            v87 = v258,
            v257 = v229,
            v88 = v229,
            (unsigned __int64)v258 < v46) )
      {
        while ( 1 )
        {
          v226 = v88 + 24 * v87;
          sub_64000((__int64 *)v226, (__int64)v267);
          ++v87;
          *(_DWORD *)(v226 + 16) = v268;
          if ( v87 >= v46 )
            break;
          v88 = v257;
        }
      }
      *(_QWORD *)&v258 = v46;
    }
    else
    {
      sub_64000((__int64 *)&v298, (__int64)v267);
      LODWORD(v300) = v268;
      if ( *((_QWORD *)&v258 + 1) < (unsigned __int64)v46 )
        v257 = qvector_reserve((__int64)&v257, v257, v46, 24);
      v89 = v258;
      if ( (unsigned __int64)v258 < v46 )
      {
        do
        {
          v90 = v257 + 24 * v89;
          sub_64000((__int64 *)v90, (__int64)&v298);
          ++v89;
          *(_DWORD *)(v90 + 16) = v300;
        }
        while ( v46 != v89 );
      }
      *(_QWORD *)&v258 = v46;
      qfree((__int64)v298);
    }
  }
  v91 = v246;
  v92 = 0;
  for ( i = sub_64960(v246, 0); ; i = sub_64960(v246, v92) )
  {
    v177 = v260;
    if ( i == v275 )
      break;
    v178 = (unsigned __int64)v259;
    LODWORD(v298) = i;
    v95 = v260 + 1;
    if ( &v298 < v259 || &v298 >= (__int64 (__fastcall ***)())((char *)v259 + 4 * *((_QWORD *)&v260 + 1)) )
    {
      if ( *((_QWORD *)&v260 + 1) < v95 )
      {
        v259 = (__int64 (__fastcall ***)())qvector_reserve((__int64)&v259, (__int64)v259, v95, 4);
        v178 = (unsigned __int64)v259;
        v177 = v260;
        v96 = (int)v298;
      }
      else
      {
        v96 = i;
      }
      *(_DWORD *)(v178 + 4 * v177) = v96;
    }
    else
    {
      if ( *((_QWORD *)&v260 + 1) < v95 )
      {
        v259 = (__int64 (__fastcall ***)())qvector_reserve((__int64)&v259, (__int64)v259, v95, 4);
        v177 = v260;
        v178 = (unsigned __int64)v259;
      }
      *(_DWORD *)(v178 + 4 * v177) = i;
    }
    v91 = v246;
    v92 = (unsigned int)(i + 1);
    *(_QWORD *)&v260 = v260 + 1;
  }
  v99 = (__int64)v287;
  v100 = v262;
  if ( v287 != (int *)v250[0] )
  {
    v241 = (__int64 *)&v261;
    do
    {
      v101 = *(_QWORD *)(v99 + 32);
      v92 = (__int64)v261;
      if ( *((_QWORD *)&v262 + 1) < v100 + 1 )
      {
        v261 = (_QWORD *)qvector_reserve((__int64)v241, (__int64)v261, v100 + 1, 8);
        v100 = v262;
        v92 = (__int64)v261;
      }
      *(_QWORD *)(v92 + 8 * v100) = v101;
      v91 = (__int64 *)v99;
      v100 = v262 + 1;
      *(_QWORD *)&v262 = v262 + 1;
      v99 = std::_Rb_tree_increment();
    }
    while ( v99 != v250[0] );
  }
  v102 = v264;
  if ( (unsigned __int64)v264 < v100 )
  {
    v222 = (__int64)v263;
    if ( *((_QWORD *)&v264 + 1) < v100 )
    {
      v263 = (__int64 *)qvector_reserve((__int64)&v263, (__int64)v263, v100, 8);
      v222 = (__int64)v263;
      v102 = v264;
    }
    v91 = (__int64 *)(v222 + 8 * v102);
    v92 = 0;
    memset(v91, 0, 8 * (v100 - v102));
    *(_QWORD *)&v264 = v100;
    v100 = v262;
  }
  else if ( v100 != (_QWORD)v264 )
  {
    *(_QWORD *)&v264 = v100;
  }
  v103 = v250[0];
  v104 = 0;
  v105 = 0;
  if ( v100 )
  {
    do
    {
      v104 = (unsigned int)(v104 + 1);
      v92 = v105;
      v106 = -1;
      v105 = (int)v104;
      if ( (int)v104 < v100 )
        v106 = v261[(int)v104];
      v91 = v263;
      v263[v92] = v106 - v261[v92];
      v100 = v262;
    }
    while ( (int)v104 < (unsigned __int64)v262 );
    v250[0] = v103;
  }
  v107 = (unsigned int)v245;
  if ( (int)v245 > 0 )
  {
    v241 = nullptr;
    v236 = (__int64 *)(4LL * (unsigned int)(v46 - 1) + 4);
    LOBYTE(v235[0]) = a9 & 1;
    while ( 1 )
    {
      v108 = 6LL * (_QWORD)v241;
      v109 = (__int64 *)(6LL * (_QWORD)v241 + v257);
      v110 = v249[5];
      v111 = *(unsigned int *)((char *)v241 + (_QWORD)v255);
      if ( (unsigned int)v111 >= *(_DWORD *)(v110 + 64) )
        sub_1733C0(v91, v92, v110, v104, v93, v107);
      v112 = *(_QWORD *)(*(_QWORD *)(v110 + 528) + 8 * v111);
      if ( (*(_DWORD *)(v112 + 24) & 0x600) != 0x200 )
      {
        if ( !under_debugger )
          sub_383060(50543);
        goto LABEL_372;
      }
      v113 = v112 + 240;
      v114 = v112 + 200;
      if ( !LOBYTE(v235[0]) )
        v113 = v114;
      sub_64000((__int64 *)&v253, v113);
      sub_64700((__int64 *)&v253, v246);
      v115 = sub_64960(&v253, 0);
      if ( v115 != v254 )
        break;
LABEL_183:
      v118 = (__int64 *)(v265 + v108);
      v119 = v118[1];
      v92 = *v118;
      v120 = (unsigned __int64 *)*v118;
      if ( !(16 * v119) )
        goto LABEL_196;
      do
      {
        v121 = (__int64)v287;
        if ( v287 == (int *)v250[0] )
          goto LABEL_195;
        do
        {
          v122 = v120[1];
          v123 = *(_QWORD *)(v121 + 32);
          v124 = *v120;
          if ( v122 && v123 >= v124 && v122 + v124 - 1 >= v123 )
          {
            v125 = &v261[v262];
            if ( v261 == v125 )
            {
LABEL_248:
              if ( !under_debugger )
                sub_383060(50545);
              goto LABEL_372;
            }
            v126 = v261;
            while ( v123 != *v126 )
            {
              if ( v125 == ++v126 )
                goto LABEL_248;
            }
            sub_64190(v109, v177 + v126 - v261);
          }
          v121 = std::_Rb_tree_increment();
        }
        while ( v121 != v250[0] );
        v92 = *v118;
        v119 = v118[1];
LABEL_195:
        v120 += 2;
      }
      while ( v120 != (unsigned __int64 *)(v92 + 16 * v119) );
LABEL_196:
      v91 = v253;
      qfree((__int64)v253);
      v241 = (__int64 *)((char *)v241 + 4);
      if ( v236 == v241 )
        goto LABEL_197;
    }
    while ( 1 )
    {
      v116 = (__int64 (__fastcall ***)())((char *)v259 + 4 * v260);
      if ( v259 == v116 )
        break;
      v117 = (char *)v259;
      while ( *(_DWORD *)v117 != v115 )
      {
        v117 += 4;
        if ( v116 == (__int64 (__fastcall ***)())v117 )
          goto LABEL_352;
      }
      sub_64190(v109, (v117 - (char *)v259) >> 2);
      v115 = sub_64960(&v253, v115 + 1);
      if ( v115 == v254 )
        goto LABEL_183;
    }
LABEL_352:
    if ( !under_debugger )
      sub_383060(50544);
    goto LABEL_372;
  }
LABEL_197:
  v127 = v238.m128i_i32[0] + v237;
  if ( (_QWORD)v262 + (int)v177 != v238.m128i_i32[0] + (_DWORD)v237 )
  {
    if ( !under_debugger )
      sub_383060(50546);
    goto LABEL_372;
  }
  qfree(v267[0]);
  sub_173AB0(v286);
  v270 = v127;
  v269[0] = 0;
  v241 = v269;
  v269[1] = 0;
  sub_63E80(v269, 0, v177);
  v128 = src;
  if ( 16LL * (_QWORD)v277 )
  {
    while ( 1 )
    {
      v129 = &v261[v262];
      if ( v261 == v129 )
        break;
      v130 = v261;
      while ( *v128 != *v130 )
      {
        if ( v129 == ++v130 )
          goto LABEL_340;
      }
      sub_64190(v241, v177 + v130 - v261);
      v128 += 2;
      if ( v128 == (_QWORD *)((char *)src + 16 * (_QWORD)v277) )
        goto LABEL_204;
    }
LABEL_340:
    if ( !under_debugger )
      sub_383060(50547);
    goto LABEL_372;
  }
LABEL_204:
  if ( v248 != -1 && (_DWORD)v242 == -1 )
  {
    v131 = v256;
    v132 = v255;
    if ( *((_QWORD *)&v256 + 1) < (unsigned __int64)(v256 + 1) )
    {
      v255 = (_DWORD *)qvector_reserve((__int64)&v255, (__int64)v255, v256 + 1, 4);
      v132 = v255;
      v131 = v256;
    }
    v132[v131] = v248;
    *(_QWORD *)&v256 = v256 + 1;
    sub_64000((__int64 *)&v298, (__int64)v241);
    v133 = v257;
    LODWORD(v300) = v270;
    v134 = v258;
    if ( *((_QWORD *)&v258 + 1) < (unsigned __int64)(v258 + 1) )
    {
      v257 = qvector_reserve((__int64)&v257, v257, v258 + 1, 24);
      v133 = v257;
      v134 = v258;
    }
    v135 = v133 + 24 * v134;
    sub_64000((__int64 *)v135, (__int64)&v298);
    *(_QWORD *)&v258 = v258 + 1;
    *(_DWORD *)(v135 + 16) = v300;
    v136 = v298;
    qfree((__int64)v298);
    v140 = v249[5];
    if ( v248 >= *(_DWORD *)(v140 + 64) )
      sub_1733C0(v136, &v298, v140, v137, v138, v139);
    v141 = *(_QWORD *)(v140 + 528);
    v142 = *(_QWORD *)(v141 + 8LL * v248);
    if ( (*(_DWORD *)(v142 + 24) & 0x600) != 0x200 )
      sub_A7590(v142, 0, v141, v137, v138, v139);
    LODWORD(v245) = v245 + 1;
  }
  v299 = 0;
  v301 = 0;
  v310 = 0;
  v298 = off_4EBC98;
  v303 = 0;
  v302 = 0xFFFFFFFF00000000LL;
  v143 = *v249;
  v305 = 0;
  v307 = 0;
  v309 = 0;
  v311 = 0;
  v312 = 0;
  v290 = nullptr;
  LODWORD(v284) = -1;
  v300 = 0;
  v304 = 0;
  v306 = 0;
  v308 = 0;
  v313 = 0;
  *(_OWORD *)v291 = 0;
  v144 = *(__int64 (__fastcall **)(__int64))(v143 + 56);
  if ( v144 != sub_101AA0 )
  {
    v146 = (int)v144((__int64)v249);
    if ( v146 < *(_QWORD *)v291 )
    {
LABEL_330:
      *(_QWORD *)v291 = v146;
      goto LABEL_216;
    }
    if ( *(_QWORD *)v291 >= v146 )
      goto LABEL_216;
    v217 = v290;
    v216 = *(_QWORD *)&v291[8];
    if ( v244 < (__int64 *)v290 )
    {
LABEL_334:
      if ( v216 < v146 )
        v290 = (__int64 (__fastcall **)())qvector_reserve((__int64)&v290, (__int64)v217, v146, 4);
      v220 = *(_QWORD *)v291;
      if ( *(_QWORD *)v291 < v146 )
      {
        do
          *((_DWORD *)v290 + v220++) = v284;
        while ( v146 != v220 );
      }
      goto LABEL_330;
    }
LABEL_325:
    if ( v244 < (__int64 *)((char *)v217 + 4 * v216) )
    {
      v218 = v284;
      if ( v216 < v146 )
        v290 = (__int64 (__fastcall **)())qvector_reserve((__int64)&v290, (__int64)v217, v146, 4);
      v219 = *(_QWORD *)v291;
      if ( *(_QWORD *)v291 < v146 )
      {
        do
          *((_DWORD *)v290 + v219++) = v218;
        while ( v219 != v146 );
      }
      goto LABEL_330;
    }
    goto LABEL_334;
  }
  v145 = v249[5];
  v146 = *(int *)(v145 + 64);
  if ( *(_DWORD *)(v145 + 64) )
  {
    v216 = *(_QWORD *)&v291[8];
    v217 = nullptr;
    goto LABEL_325;
  }
LABEL_216:
  v147 = v256;
  v148 = v256;
  if ( (int)v256 <= 0 )
  {
    sub_673C0((__int64)&v298, v256);
    LODWORD(v235[0]) = v147 - 1;
  }
  else
  {
    LODWORD(v235[0]) = v256 - 1;
    v236 = (__int64 *)(unsigned int)(v256 - 1);
    v149 = nullptr;
    do
    {
      *((_DWORD *)v290 + (int)v255[(_QWORD)v149]) = (_DWORD)v149;
      v150 = v149;
      v149 = (__int64 *)((char *)v149 + 1);
    }
    while ( v236 != v150 );
    sub_673C0((__int64)&v298, v148);
    v242 = nullptr;
    for ( j = nullptr; ; j = (__int64 *)((char *)j + 1) )
    {
      v238.m128i_i32[0] = (int)j;
      v152 = *v249;
      v153 = v255[(_QWORD)j];
      v154 = *(__int64 (__fastcall **)(__int64, int))(*v249 + 104);
      LODWORD(v250[0]) = v153;
      if ( v154 == sub_134310 )
      {
        v155 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v249[5] + 528) + 8LL * v153) + 352LL);
      }
      else
      {
        v191 = v249;
        v155 = v154((__int64)v249, v250[0]);
        v152 = *v191;
      }
      if ( v155 > 0 )
      {
        v156 = v155;
        v157 = 0;
        v237 = 8LL * SLODWORD(v250[0]);
        do
        {
          v158 = *(__int64 (__fastcall **)(__int64, int, int))(v152 + 120);
          if ( v158 == sub_172890 )
            v159 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v249[5] + 528) + v237) + 344LL) + 4 * v157);
          else
            v159 = v158((__int64)v249, v250[0], v157);
          v160 = *((_DWORD *)v290 + v159);
          if ( v160 != -1 )
          {
            v161 = (__int64 *)(v303 + 24LL * v160);
            v162 = v161[1];
            v163 = (_DWORD *)(*v161 + 4 * v162);
            if ( (_DWORD *)*v161 == v163 )
              goto LABEL_250;
            v164 = (_DWORD *)*v161;
            while ( *v164 != (_DWORD)j )
            {
              if ( v163 == ++v164 )
                goto LABEL_250;
            }
            if ( v163 == v164 )
            {
LABEL_250:
              if ( v161[2] < (unsigned __int64)(v162 + 1) )
              {
                v233 = v160;
                v189 = qvector_reserve((__int64)v161, *v161, v162 + 1, 4);
                v160 = v233;
                v190 = v161[1];
                *v161 = v189;
                v163 = (_DWORD *)(v189 + 4 * v190);
              }
              *v163 = v238.m128i_i32[0];
              ++v161[1];
              v181 = (__int64 *)((char *)v242 + v305);
              v182 = *(__int64 *)((char *)v242 + v305 + 8);
              v183 = *(__int64 *)((char *)v242 + v305);
              if ( *(__int64 *)((char *)v242 + v305 + 16) < (unsigned __int64)(v182 + 1) )
              {
                v232 = v160;
                v183 = qvector_reserve((__int64)v181, v183, v182 + 1, 4);
                v160 = v232;
                *v181 = v183;
                v182 = v181[1];
              }
              *(_DWORD *)(v183 + 4 * v182) = v160;
              ++v181[1];
            }
          }
          ++v157;
          v152 = *v249;
        }
        while ( v157 != v156 );
      }
      v165 = *(__int64 (__fastcall **)(__int64, int))(v152 + 96);
      if ( v165 == sub_1342F0 )
        v166 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v249[5] + 528) + 8LL * SLODWORD(v250[0])) + 376LL);
      else
        v166 = v165((__int64)v249, v250[0]);
      if ( v166 > 0 )
      {
        v167 = 0;
        v237 = v166;
        v168 = 8LL * SLODWORD(v250[0]);
        do
        {
          v169 = *(__int64 (__fastcall **)(__int64, int, int))(*v249 + 112);
          if ( v169 == sub_134330 )
            v170 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v249[5] + 528) + v168) + 368LL) + 4 * v167);
          else
            v170 = v169((__int64)v249, v250[0], v167);
          v171 = *((_DWORD *)v290 + v170);
          if ( v171 != -1 )
          {
            v172 = (__int64 *)((char *)v242 + v303);
            v173 = *(__int64 *)((char *)v242 + v303);
            v174 = *(__int64 *)((char *)v242 + v303 + 8);
            v175 = (_DWORD *)(v173 + 4 * v174);
            if ( (_DWORD *)v173 == v175 )
              goto LABEL_255;
            v176 = *(_DWORD **)((char *)v242 + v303);
            while ( v171 != *v176 )
            {
              if ( v175 == ++v176 )
                goto LABEL_255;
            }
            if ( v176 == v175 )
            {
LABEL_255:
              if ( v172[2] < (unsigned __int64)(v174 + 1) )
              {
                v231 = v171;
                v187 = qvector_reserve((__int64)v172, v173, v174 + 1, 4);
                v171 = v231;
                v188 = v172[1];
                *v172 = v187;
                v175 = (_DWORD *)(v187 + 4 * v188);
              }
              *v175 = v171;
              ++v172[1];
              v184 = (__int64 *)(v305 + 24LL * v171);
              v185 = v184[1];
              v186 = *v184;
              if ( v184[2] < (unsigned __int64)(v185 + 1) )
              {
                v186 = qvector_reserve((__int64)v184, v186, v185 + 1, 4);
                *v184 = v186;
                v185 = v184[1];
              }
              *(_DWORD *)(v186 + 4 * v185) = v238.m128i_i32[0];
              ++v184[1];
            }
          }
          ++v167;
        }
        while ( v237 != v167 );
      }
      v242 += 3;
      if ( j == v236 )
        break;
    }
  }
  HIDWORD(v302) = v235[0];
  if ( v290 )
  {
    *(_QWORD *)v291 = 0;
    qfree((__int64)v290);
  }
  memset(v291, 0, sizeof(v291));
  v250[0] = (int)v245;
  v290 = (__int64 (__fastcall **)())&unk_4EBEA0;
  v292[0] = 0;
  v292[1] = 0;
  v293 = v270;
  sub_64000(&v294, (__int64)v241);
  v192 = *(_QWORD *)&v291[8];
  v296 = 1;
  v295 = v270;
  if ( v250[0] < *(_QWORD *)&v291[8] )
  {
    v198 = v250[0];
    v199 = v250[0];
    do
    {
      v200 = 3 * v198++;
      qfree(*(_QWORD *)(*(_QWORD *)v291 + 8 * v200));
    }
    while ( v198 < v192 );
    v250[0] = v199;
    *(_QWORD *)&v291[8] = v199;
  }
  else
  {
    v193 = v250[0];
    if ( *(_QWORD *)&v291[8] < v250[0] )
    {
      v194 = *(_QWORD *)v291;
      v195 = v292;
      if ( (unsigned __int64)v292 < *(_QWORD *)v291
        || (unsigned __int64)v292 >= *(_QWORD *)v291 + 24LL * *(_QWORD *)&v291[16] )
      {
        if ( *(_QWORD *)&v291[16] >= v250[0]
          || (v227 = v250[0],
              v244 = v292,
              v228 = qvector_reserve((__int64)v291, *(__int64 *)v291, v250[0], 24),
              v192 = *(_QWORD *)&v291[8],
              *(_QWORD *)v291 = v228,
              v194 = v228,
              v195 = v244,
              *(_QWORD *)&v291[8] < v227) )
        {
          while ( 1 )
          {
            v242 = v195;
            v244 = (__int64 *)(v194 + 24 * v192);
            sub_64000(v244, (__int64)v195);
            ++v192;
            v221 = v250[0];
            *((_DWORD *)v244 + 4) = v293;
            if ( v192 >= v221 )
              break;
            v194 = *(_QWORD *)v291;
            v195 = v242;
          }
        }
        *(_QWORD *)&v291[8] = v250[0];
      }
      else
      {
        sub_64000(v244, (__int64)v292);
        LODWORD(v286) = v293;
        if ( *(_QWORD *)&v291[16] < v193 )
          *(_QWORD *)v291 = qvector_reserve((__int64)v291, *(__int64 *)v291, v250[0], 24);
        v196 = *(_QWORD *)&v291[8];
        if ( *(_QWORD *)&v291[8] < v250[0] )
        {
          do
          {
            v242 = (__int64 *)(*(_QWORD *)v291 + 24 * v196);
            sub_64000(v242, (__int64)v244);
            ++v196;
            *((_DWORD *)v242 + 4) = (_DWORD)v286;
          }
          while ( v250[0] != v196 );
        }
        *(_QWORD *)&v291[8] = v250[0];
        qfree(v284);
      }
    }
  }
  v290 = &off_4DDFC8;
  v297 = &v257;
  sub_311760(&v298, &v290);
  if ( (int)v245 <= 0 )
  {
LABEL_318:
    v15 = 0;
    goto LABEL_35;
  }
  v201 = 0;
  v245 = 4 * v250[0];
  while ( 1 )
  {
    v202 = *(_QWORD *)v291 + 6 * v201;
    if ( !(unsigned __int8)sub_64880((_QWORD *)v202) )
      break;
LABEL_281:
    v201 += 4LL;
    if ( v245 == v201 )
      goto LABEL_318;
  }
  if ( (int)sub_64C00((_QWORD *)v202) >= *(_DWORD *)(v202 + 16) )
  {
    if ( !under_debugger )
      sub_383060(50548);
    goto LABEL_372;
  }
  v281[0] = 0;
  v281[1] = 0;
  v282 = 0;
  v283 = 0;
  v203 = sub_64960((_QWORD *)v202, 0);
  v250[0] = (size_t)v281;
  for ( k = v203; k != *(_DWORD *)(v202 + 8); k = sub_64960((_QWORD *)v202, k + 1) )
  {
    if ( k >= (int)v177 )
    {
      v205 = k - v177;
      if ( k - (int)v177 < 0 || v205 >= (unsigned __int64)v262 )
      {
        if ( !under_debugger )
          sub_383060(50549);
        goto LABEL_372;
      }
      sub_122B20((__int64 *)v250[0], v261[v205], v263[v205]);
    }
    else
    {
      sub_64190((__int64 *)v250[0], *((_DWORD *)v259 + k));
    }
  }
  sub_64700(v281, v246);
  v206 = n;
  sub_3180C0(&v282, n);
  if ( (unsigned __int8)sub_64880(v281) && !(_QWORD)v283 )
  {
    if ( v282 )
      qfree(v282);
LABEL_296:
    qfree(v281[0]);
    goto LABEL_281;
  }
  v210 = v249[5];
  v211 = (unsigned int)v255[v201 / 4];
  if ( (unsigned int)v211 >= *(_DWORD *)(v210 + 64) )
    sub_1733C0(v281, v206, v210, v207, v208, v209);
  v212 = *(_DWORD **)(*(_QWORD *)(v210 + 528) + 8 * v211);
  LODWORD(v250[0]) = v212[6];
  if ( (v250[0] & 0x600) != 0x200 )
  {
    if ( !under_debugger )
      sub_383060(50550);
    goto LABEL_372;
  }
  if ( v212[19] == 1 )
  {
    v215 = v212 + 30;
    if ( (a9 & 1) != 0 )
      v215 = v212 + 40;
    v250[0] = (size_t)v215;
    if ( !(unsigned __int8)sub_64780(v281, v215) && !(unsigned __int8)sub_318470(&v282, v250[0] + 16) )
      goto LABEL_304;
    v214 = sub_173040(v243, v281, (__int64)v212, 0, 0, v247, a9);
  }
  else
  {
    v213 = 0;
    if ( v212[18] == v248 )
      v213 = v239;
    v214 = sub_173040(v243, v281, (__int64)v212, 0, v213, v247, a9);
  }
  v15 = v214;
  v251 = v214;
  if ( !v214 )
  {
LABEL_304:
    if ( v282 )
    {
      *(_QWORD *)&v283 = 0;
      qfree(v282);
    }
    goto LABEL_296;
  }
  if ( v282 )
  {
    *(_QWORD *)&v283 = 0;
    qfree(v282);
  }
  qfree(v281[0]);
LABEL_35:
  v290 = (__int64 (__fastcall **)())&unk_4EBEA0;
  qfree(v294);
  qfree(v292[0]);
  v23 = *(_QWORD *)v291;
  if ( *(_QWORD *)v291 )
  {
    v24 = *(_QWORD *)&v291[8];
    if ( *(_QWORD *)&v291[8] )
    {
      v25 = 0;
      do
      {
        v26 = v25 + 1;
        qfree(*(_QWORD *)(v23 + 24 * v25));
        v23 = *(_QWORD *)v291;
        v25 = v26;
      }
      while ( v24 != v26 );
    }
    *(_QWORD *)&v291[8] = 0;
    qfree(v23);
  }
  v298 = off_4EBC98;
  if ( v312 )
  {
    *(_QWORD *)&v313 = 0;
    qfree(v312);
  }
  if ( v309 )
  {
    *(_QWORD *)&v310 = 0;
    qfree(v309);
  }
  if ( v307 )
  {
    *(_QWORD *)&v308 = 0;
    qfree(v307);
  }
  v27 = v305;
  if ( v305 )
  {
    v28 = v306;
    if ( (_QWORD)v306 )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v27 + 24 * v29);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31);
          v27 = v305;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v306 = 0;
    qfree(v27);
  }
  v32 = v303;
  if ( v303 )
  {
    v33 = v304;
    if ( (_QWORD)v304 )
    {
      v34 = 0;
      do
      {
        v35 = (__int64 *)(v32 + 24 * v34);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36);
          v32 = v303;
        }
        ++v34;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v304 = 0;
    qfree(v32);
  }
  v298 = (__int64 (__fastcall **)())&unk_4EC808;
  if ( v299 )
  {
    *(_QWORD *)&v300 = 0;
    qfree(v299);
  }
  qfree(v269[0]);
LABEL_63:
  v37 = v265;
  if ( v265 )
  {
    v38 = v266;
    if ( (_QWORD)v266 )
    {
      v39 = 0;
      do
      {
        v40 = (__int64 *)(v37 + 24 * v39);
        v41 = *v40;
        if ( *v40 )
        {
          v40[1] = 0;
          qfree(v41);
          v37 = v265;
        }
        ++v39;
      }
      while ( v38 != v39 );
    }
    *(_QWORD *)&v266 = 0;
    qfree(v37);
  }
  if ( v263 )
  {
    *(_QWORD *)&v264 = 0;
    qfree((__int64)v263);
  }
  if ( v261 )
  {
    *(_QWORD *)&v262 = 0;
    qfree((__int64)v261);
  }
  if ( v259 )
  {
    *(_QWORD *)&v260 = 0;
    qfree((__int64)v259);
  }
  v42 = v257;
  if ( v257 )
  {
    v43 = v258;
    if ( (_QWORD)v258 )
    {
      v44 = 0;
      do
      {
        v45 = v44 + 1;
        qfree(*(_QWORD *)(v42 + 24 * v44));
        v42 = v257;
        v44 = v45;
      }
      while ( v43 != v45 );
    }
    *(_QWORD *)&v258 = 0;
    qfree(v42);
  }
  if ( v255 )
  {
    *(_QWORD *)&v256 = 0;
    qfree((__int64)v255);
  }
LABEL_83:
  v271 = off_4DBB18;
  qfree(v272[0]);
  qfree(v252[0]);
LABEL_5:
  if ( v279 )
  {
    v280.m128i_i64[0] = 0;
    qfree(v279);
  }
  qfree(v278[0]);
  if ( src )
  {
    *(_QWORD *)&v277 = 0;
    qfree((__int64)src);
  }
  qfree(v274);
  return v15;
}
