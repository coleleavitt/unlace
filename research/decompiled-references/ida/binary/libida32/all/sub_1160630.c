void __fastcall sub_1160630(__m128i *a1, __int64 *a2, void *a3, __int64 a4)
{
  __int64 *v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // r13
  _QWORD *v10; // r14
  void *v11; // r14
  size_t v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rax
  const char **v16; // rax
  const char *v17; // r14
  size_t v18; // rax
  size_t v19; // r15
  size_t v20; // rax
  void *v21; // rdx
  __int64 v22; // rdi
  unsigned __int8 (__fastcall *v23)(__int64, void **); // rcx
  void *v24; // r14
  __m128i *v25; // rdi
  __int64 v26; // rdi
  unsigned __int8 (__fastcall *v27)(__int64, __m128i *); // rax
  __m128i *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  int v32; // r8d
  int v33; // r9d
  void **v34; // r12
  void **v35; // r13
  void (__fastcall *v36)(__m128i *, __m128i *, __int64); // rax
  __int64 v37; // rdx
  __m128i v38; // xmm0
  __m128i v39; // xmm3
  void (__fastcall *v40)(__m128i *, __m128i *, __int64); // rcx
  __int64 v41; // rax
  void (__fastcall *v42)(__m128i *, __m128i *, __int64); // rax
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __m128i v45; // xmm4
  void (__fastcall *v46)(__m128i *, __m128i *, __int64); // rcx
  __int64 v47; // rax
  char *v48; // r14
  __int64 v49; // rax
  __int64 v50; // r12
  char *v51; // r13
  __int64 v52; // r12
  _QWORD *v53; // r15
  __int64 v54; // rdx
  _BYTE *v55; // rsi
  _QWORD *v56; // rdi
  __int32 v57; // r12d
  char *v58; // rax
  char *v59; // rdi
  __int64 v60; // r14
  __int64 v61; // rbp
  void *v62; // rdi
  void *v63; // rdi
  void **v64; // rdi
  void **v65; // r13
  void **v66; // r12
  void *v67; // rdi
  void *v68; // rdi
  __int64 v69; // rdi
  void **v70; // r15
  char *v71; // r13
  char *v72; // rbp
  __int64 *v73; // r13
  __int64 *v74; // rbp
  void **v75; // rdi
  void **v76; // r14
  void **v77; // r12
  char *v78; // r13
  char *v79; // r12
  char *v80; // rdi
  char *v81; // rdi
  void **v82; // rbp
  void **v83; // rbx
  char *v84; // rdi
  char *v85; // rdi
  size_t v86; // r14
  const void *v87; // rax
  __int64 v88; // rdx
  char v89; // r14
  int v90; // eax
  size_t v91; // rdx
  size_t v92; // r15
  void **v93; // r13
  void **v94; // r12
  void **v95; // r14
  void **v96; // r12
  void **v97; // r14
  size_t v98; // rax
  void **v99; // rdx
  void **v100; // r15
  void **v101; // r13
  void **v102; // rdi
  void **v103; // rdi
  void **v104; // r15
  void **v105; // r13
  __int64 v106; // r14
  __int64 v107; // rbp
  void *v108; // rdi
  void *v109; // rdi
  void **v110; // rdi
  void **v111; // r13
  void **v112; // r12
  void *v113; // rdi
  void *v114; // rdi
  __int64 v115; // rdx
  void (__fastcall *v116)(__m128i *, __m128i *, __int64); // rax
  __int64 v117; // rdx
  __m128i si128; // xmm0
  void (__fastcall *v119)(__m128i *, __m128i *, __int64); // rcx
  __m128i v120; // xmm5
  __int64 v121; // rax
  void (__fastcall *v122)(__m128i *, __m128i *, __int64); // rax
  __int64 v123; // rdx
  __m128i v124; // xmm0
  void (__fastcall *v125)(__m128i *, __m128i *, __int64); // rcx
  __m128i v126; // xmm6
  __int64 v127; // rax
  __int64 v128; // rdx
  size_t v129; // rdx
  void *v130; // rax
  __int64 v131; // rsi
  size_t v132; // rax
  char *v133; // r12
  _BYTE *v134; // rsi
  size_t v135; // r15
  _QWORD *v136; // rax
  unsigned __int64 v137; // rsi
  void **v138; // r13
  char *v139; // r14
  size_t v140; // rsi
  size_t v141; // rbx
  void *v142; // r13
  void **v143; // r15
  _BYTE *v144; // rdi
  _BYTE *v145; // rdi
  size_t v146; // r8
  _BYTE *v147; // rdi
  _BYTE *v148; // rcx
  size_t v149; // rbp
  unsigned __int64 v150; // rax
  _BYTE *v151; // rdi
  unsigned __int64 v152; // rbp
  unsigned __int64 v153; // rax
  signed __int64 v154; // rdx
  void **v155; // rcx
  void *v156; // rdx
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rax
  _QWORD *v161; // r13
  __int64 v162; // rbx
  __int64 v163; // r12
  __int64 v164; // rax
  unsigned __int64 v165; // rsi
  __int64 v166; // r12
  char *v167; // rsi
  size_t v168; // r8
  void *v169; // rdi
  _BYTE *v170; // rcx
  char *v171; // r15
  unsigned __int64 v172; // rax
  _BYTE *v173; // rdi
  char *v174; // r15
  unsigned __int64 v175; // rdx
  unsigned __int8 **v176; // r13
  _BYTE *v177; // r14
  __int64 v178; // rbx
  unsigned __int8 **v179; // r15
  void **v180; // r12
  unsigned __int64 v181; // rax
  void **v182; // rbp
  void **v183; // r13
  void **v184; // rdi
  void **v185; // rdi
  void **v186; // rbp
  void **v187; // r13
  __int64 v188; // r12
  _BYTE *v189; // r14
  _BYTE *v190; // rdi
  _BYTE *v191; // rdi
  void **v192; // rdi
  void **v193; // r15
  void **v194; // r13
  _BYTE *v195; // rdi
  _BYTE *v196; // rdi
  void **v197; // r12
  void *v198; // rdi
  __int64 v199; // rdx
  size_t v200; // rax
  __int64 v201; // r12
  size_t v202; // rax
  __int64 v203; // rax
  size_t v204; // rax
  size_t v205; // rax
  __int64 v206; // r12
  size_t v207; // rax
  __int64 v208; // rdi
  _BOOL4 v209; // r12d
  __int64 v210; // rax
  size_t v211; // r13
  int v212; // eax
  size_t v213; // rax
  size_t v214; // r12
  int v215; // eax
  size_t v216; // r12
  _BOOL8 v217; // rdi
  __int64 *v218; // rax
  char *v219; // rcx
  char *v220; // r13
  char *v221; // r14
  char *v222; // rdi
  char *v223; // rdi
  void **v224; // r15
  void **v225; // r12
  char *v226; // rdi
  char *v227; // rdi
  void (__fastcall *v228)(__m128i *, __m128i *, __int64); // rcx
  __m128i v229; // xmm7
  __int64 v230; // rdx
  __m128i v231; // xmm0
  __m128i v232; // xmm7
  void (__fastcall *v233)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v234)(__m128i *, __m128i *, __int64); // rcx
  __m128i v235; // xmm7
  __int64 v236; // rdx
  __m128i v237; // xmm0
  __m128i v238; // xmm7
  void (__fastcall *v239)(__m128i *, __m128i *, __int64); // rax
  char *v240; // r14
  char *j; // r12
  void **v242; // r15
  void **v243; // r13
  char *v244; // rdi
  char *v245; // rdi
  size_t v246; // rax
  __int64 v247; // r12
  size_t v248; // rax
  __int64 v249; // rax
  size_t v250; // rax
  size_t v251; // rax
  __int64 v252; // r12
  size_t v253; // rax
  __int64 v254; // rax
  size_t v255; // rax
  size_t v256; // rax
  __int64 v257; // r12
  size_t v258; // rax
  __int64 v259; // rax
  size_t v260; // rax
  size_t v261; // rax
  __int64 v262; // r12
  size_t v263; // rax
  __int64 v264; // rax
  size_t v265; // rax
  size_t v266; // rax
  __int64 v267; // r12
  size_t v268; // rax
  __int64 v269; // rdi
  _BOOL4 v270; // r12d
  __int64 v271; // rax
  _BOOL4 v272; // r13d
  _BOOL4 v273; // r14d
  size_t v274; // rax
  size_t v275; // rax
  size_t v276; // r12
  int v277; // eax
  size_t v278; // r12
  int v279; // eax
  size_t v280; // rax
  size_t v281; // r12
  int v282; // eax
  size_t v283; // r12
  _BOOL8 v284; // rdi
  __int64 *v285; // rax
  char *v286; // rcx
  char *v287; // r13
  char *v288; // r14
  char *v289; // rdi
  char *v290; // rdi
  void **v291; // r15
  void **v292; // r12
  char *v293; // rdi
  char *v294; // rdi
  void (__fastcall *v295)(__m128i *, __m128i *, __int64); // rcx
  __m128i v296; // xmm7
  __int64 v297; // rdx
  __m128i v298; // xmm0
  __m128i v299; // xmm7
  void (__fastcall *v300)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v301)(__m128i *, __m128i *, __int64); // rcx
  __m128i v302; // xmm7
  __int64 v303; // rdx
  __m128i v304; // xmm0
  __m128i v305; // xmm7
  void (__fastcall *v306)(__m128i *, __m128i *, __int64); // rax
  char *v307; // r14
  char *i; // r12
  void **v309; // r15
  void **v310; // r13
  char *v311; // rdi
  char *v312; // rdi
  void **v313; // [rsp+0h] [rbp-9C0h]
  __int64 *v314; // [rsp+8h] [rbp-9B8h] BYREF
  void **p_src; // [rsp+10h] [rbp-9B0h]
  void **v316; // [rsp+18h] [rbp-9A8h]
  void *v317; // [rsp+20h] [rbp-9A0h] BYREF
  __int64 *v318; // [rsp+28h] [rbp-998h]
  __int64 v319; // [rsp+30h] [rbp-990h]
  unsigned __int8 **v320; // [rsp+38h] [rbp-988h]
  void **v321; // [rsp+40h] [rbp-980h]
  void **v322; // [rsp+48h] [rbp-978h]
  void *s1; // [rsp+50h] [rbp-970h]
  __int64 v324; // [rsp+58h] [rbp-968h]
  __int64 v325; // [rsp+60h] [rbp-960h]
  __int64 v326; // [rsp+68h] [rbp-958h]
  __int64 v327; // [rsp+70h] [rbp-950h]
  __m128i *v328; // [rsp+78h] [rbp-948h]
  __int64 *v329; // [rsp+80h] [rbp-940h]
  void *v330[2]; // [rsp+88h] [rbp-938h] BYREF
  __int64 v331; // [rsp+98h] [rbp-928h]
  void *v332[2]; // [rsp+A8h] [rbp-918h] BYREF
  __int64 v333; // [rsp+B8h] [rbp-908h]
  void *v334[2]; // [rsp+C8h] [rbp-8F8h] BYREF
  char v335; // [rsp+D8h] [rbp-8E8h]
  void *v336[2]; // [rsp+E8h] [rbp-8D8h] BYREF
  void (__fastcall *v337)(__m128i *, __m128i *, __int64); // [rsp+F8h] [rbp-8C8h]
  __int64 v338; // [rsp+100h] [rbp-8C0h]
  void *v339; // [rsp+108h] [rbp-8B8h] BYREF
  size_t v340; // [rsp+110h] [rbp-8B0h]
  _QWORD v341[14]; // [rsp+118h] [rbp-8A8h] BYREF
  void *v342[2]; // [rsp+188h] [rbp-838h] BYREF
  _QWORD v343[14]; // [rsp+198h] [rbp-828h] BYREF
  void *v344[2]; // [rsp+208h] [rbp-7B8h] BYREF
  void (__fastcall *v345)(__m128i *, __m128i *, __int64); // [rsp+218h] [rbp-7A8h] BYREF
  __int64 v346; // [rsp+220h] [rbp-7A0h]
  __int16 v347; // [rsp+228h] [rbp-798h]
  void *v348; // [rsp+288h] [rbp-738h] BYREF
  unsigned __int64 v349; // [rsp+290h] [rbp-730h]
  __int64 v350; // [rsp+298h] [rbp-728h]
  void *v351; // [rsp+2A8h] [rbp-718h]
  __int16 v352; // [rsp+2C8h] [rbp-6F8h]
  void *v353[20]; // [rsp+308h] [rbp-6B8h] BYREF
  void *src; // [rsp+3A8h] [rbp-618h] BYREF
  size_t n; // [rsp+3B0h] [rbp-610h]
  __int64 v356; // [rsp+3B8h] [rbp-608h]
  void *v357; // [rsp+3C8h] [rbp-5F8h]
  __int16 v358; // [rsp+3E8h] [rbp-5D8h]
  void (__fastcall *v359)(__m128i *, __m128i *, __int64); // [rsp+4C8h] [rbp-4F8h]
  __int64 v360; // [rsp+4D0h] [rbp-4F0h]
  void (__fastcall *v361)(__m128i *, __m128i *, __int64); // [rsp+4E8h] [rbp-4D8h]
  __int64 v362; // [rsp+4F0h] [rbp-4D0h]
  char v363; // [rsp+4F8h] [rbp-4C8h]
  __m128i ptr[2]; // [rsp+508h] [rbp-4B8h] BYREF
  __int128 v365; // [rsp+528h] [rbp-498h]
  __int128 v366; // [rsp+538h] [rbp-488h]
  __int128 v367; // [rsp+548h] [rbp-478h]
  _DWORD v368[4]; // [rsp+558h] [rbp-468h] BYREF
  void *v369[2]; // [rsp+568h] [rbp-458h] BYREF
  _BYTE v370[16]; // [rsp+578h] [rbp-448h] BYREF
  _QWORD v371[18]; // [rsp+588h] [rbp-438h] BYREF
  __m128i v372; // [rsp+618h] [rbp-3A8h] BYREF
  void (__fastcall *v373)(__m128i *, __m128i *, __int64); // [rsp+628h] [rbp-398h]
  __int64 v374; // [rsp+630h] [rbp-390h]
  __m128i v375; // [rsp+638h] [rbp-388h] BYREF
  void (__fastcall *v376)(__m128i *, __m128i *, __int64); // [rsp+648h] [rbp-378h]
  __int64 v377; // [rsp+650h] [rbp-370h]
  __int64 v378; // [rsp+660h] [rbp-360h]
  __int16 v379; // [rsp+668h] [rbp-358h]
  __int128 v380; // [rsp+670h] [rbp-350h]
  __int128 v381; // [rsp+680h] [rbp-340h]
  void *v382[2]; // [rsp+698h] [rbp-328h] BYREF
  __int64 v383; // [rsp+6A8h] [rbp-318h]
  __int64 *v384; // [rsp+6B0h] [rbp-310h] BYREF
  __int64 v385; // [rsp+6B8h] [rbp-308h]
  __int64 v386; // [rsp+6C0h] [rbp-300h] BYREF
  void **v387; // [rsp+6F8h] [rbp-2C8h] BYREF
  __int64 v388; // [rsp+700h] [rbp-2C0h]
  __int64 v389; // [rsp+708h] [rbp-2B8h] BYREF
  __m128i v390; // [rsp+7A8h] [rbp-218h] BYREF
  void (__fastcall *v391)(__m128i *, __m128i *, __int64); // [rsp+7B8h] [rbp-208h]
  __int64 v392; // [rsp+7C0h] [rbp-200h]
  __m128i v393; // [rsp+7C8h] [rbp-1F8h] BYREF
  void (__fastcall *v394)(__m128i *, __m128i *, __int64); // [rsp+7D8h] [rbp-1E8h]
  __int64 v395; // [rsp+7E0h] [rbp-1E0h]
  _BYTE *v396; // [rsp+7E8h] [rbp-1D8h] BYREF
  __int64 v397; // [rsp+7F0h] [rbp-1D0h]
  _BYTE v398[192]; // [rsp+7F8h] [rbp-1C8h] BYREF
  __int64 v399; // [rsp+8B8h] [rbp-108h] BYREF
  char v400; // [rsp+978h] [rbp-48h]

  v6 = (__int64 *)v382;
  v317 = a3;
  v314 = a2;
  v384 = &v386;
  v385 = 0x100000000LL;
  v388 = 0x100000000LL;
  v397 = 0x100000000LL;
  v387 = (void **)&v389;
  ptr[0].m128i_i64[0] = (__int64)&ptr[1].m128i_i64[1];
  v396 = v398;
  *(_OWORD *)v382 = 0;
  v383 = 0;
  v391 = nullptr;
  v394 = nullptr;
  v400 = 0;
  *(__m128i *)((char *)ptr + 8) = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  LODWORD(src) = 2923;
  p_src = &src;
  v7 = sub_2193060(a4, &src, 1);
  v8 = *(_QWORD *)(a4 + 8);
  v9 = (_QWORD *)(v8 + 8LL * (unsigned int)v7);
  v10 = (_QWORD *)(v8 + 8 * HIDWORD(v7));
  if ( v9 == v10 )
    goto LABEL_5;
  while ( !*v9 || !(unsigned __int8)sub_2195AD0(*v9, 2923) )
  {
    if ( v10 == ++v9 )
      goto LABEL_5;
  }
  if ( v10 == v9 )
  {
LABEL_5:
    sub_115AC50(p_src, (__int64)v314, 0);
    v11 = src;
    v12 = n;
    v13 = 0;
    ptr[0].m128i_i64[1] = 0;
    if ( n > ptr[1].m128i_i64[0] )
    {
      sub_22130D0(ptr, &ptr[1].m128i_u64[1], n, 1);
      v13 = ptr[0].m128i_i64[1];
    }
    if ( v12 )
    {
      memcpy((void *)(ptr[0].m128i_i64[0] + v13), v11, v12);
      v13 = ptr[0].m128i_i64[1];
    }
    ptr[0].m128i_i64[1] = v12 + v13;
    if ( src != p_src + 2 )
      operator delete(src);
    LOWORD(v357) = 262;
    src = "multilib.yaml";
    v347 = 257;
    LOWORD(v351) = 257;
    LOWORD(v353[4]) = 257;
    n = 13;
    v316 = v353;
    sub_2266670(ptr, p_src, v353, &v348, v344);
  }
  else
  {
    do
    {
      v14 = *v9;
      v15 = *(_QWORD *)(*v9 + 16LL);
      if ( !v15 )
        v15 = *v9;
      ++v9;
      *(_BYTE *)(v15 + 44) |= 1u;
      if ( v9 == v10 )
        break;
      while ( !*v9 || !(unsigned __int8)sub_2195AD0(*v9, 2923) )
      {
        if ( v10 == ++v9 )
          goto LABEL_19;
      }
    }
    while ( v10 != v9 );
LABEL_19:
    v16 = *(const char ***)(v14 + 48);
    v17 = *v16;
    if ( *v16 )
    {
      v18 = strlen(*v16);
      ptr[0].m128i_i64[1] = 0;
      v19 = v18;
      v20 = 0;
      if ( v19 > ptr[1].m128i_i64[0] )
      {
        sub_22130D0(ptr, &ptr[1].m128i_u64[1], v19, 1);
        v20 = ptr[0].m128i_u64[1];
      }
      v21 = (void *)ptr[0].m128i_i64[0];
      if ( v19 )
      {
        memcpy((void *)(ptr[0].m128i_i64[0] + v20), v17, v19);
        v21 = (void *)ptr[0].m128i_i64[0];
        v20 = v19 + ptr[0].m128i_i64[1];
      }
    }
    else
    {
      v21 = (void *)ptr[0].m128i_i64[0];
      v20 = 0;
    }
    ptr[0].m128i_i64[1] = v20;
    v22 = v314[1];
    v23 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v22 + 96LL);
    LOWORD(v357) = 261;
    src = v21;
    n = v20;
    v316 = v353;
    if ( !v23(v22, p_src) )
    {
      sub_FA3370((__int64)p_src, *v314, 0, 443);
      sub_AC84E0((unsigned __int8 **)p_src, ptr[0].m128i_i64[0], ptr[0].m128i_i64[1]);
      if ( (_BYTE)v358 )
      {
        sub_FA3A50(v356, (__int64)p_src, SHIBYTE(v358));
        v356 = 0;
        v358 = 0;
      }
      if ( v357 != p_src + 6 )
        operator delete(v357);
      v97 = (void **)src;
      if ( src )
      {
        v98 = n;
        if ( n )
        {
          if ( (unsigned __int64)src < n || (unsigned __int64)src > n + 14848 )
          {
            v99 = *((void ***)src + 66);
            v100 = &v99[8 * (unsigned __int64)*((unsigned int *)src + 134)];
            if ( v99 != v100 )
            {
              v101 = *((void ***)src + 66);
              do
              {
                while ( 1 )
                {
                  v100 -= 8;
                  v102 = (void **)v100[3];
                  if ( v102 == v100 + 5 )
                    break;
                  operator delete(v102);
                  if ( v101 == v100 )
                    goto LABEL_193;
                }
              }
              while ( v101 != v100 );
LABEL_193:
              v100 = (void **)v97[66];
            }
            if ( v100 != v97 + 68 )
              free(v100);
            v103 = (void **)v97[52];
            if ( v103 != v97 + 54 )
              free(v103);
            v104 = v97 + 48;
            v105 = v97 + 8;
            do
            {
              while ( *v104 != v104 + 2 )
              {
                operator delete(*v104);
                v104 -= 4;
                if ( v104 == v105 )
                  goto LABEL_201;
              }
              v104 -= 4;
            }
            while ( v105 != v104 );
LABEL_201:
            operator delete(v97, 0x3A0u);
          }
          else
          {
            v128 = *(unsigned int *)(n + 14976);
            *(_DWORD *)(n + 14976) = v128 + 1;
            *(_QWORD *)(v98 + 8 * v128 + 14848) = v97;
          }
        }
      }
      v316 = v353;
      memset(v353, 0, sizeof(v353));
      v25 = (__m128i *)ptr[0].m128i_i64[0];
      if ( (unsigned __int64 *)ptr[0].m128i_i64[0] == &ptr[1].m128i_u64[1] )
        goto LABEL_203;
      goto LABEL_27;
    }
  }
  v24 = (void *)ptr[0].m128i_i64[1];
  v25 = (__m128i *)ptr[0].m128i_i64[0];
  *(__m128i *)&v353[1] = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v353[0] = v316 + 3;
  if ( !ptr[0].m128i_i64[1] )
  {
LABEL_26:
    LOBYTE(v353[19]) = 1;
    if ( v25 == (__m128i *)&ptr[1].m128i_u64[1] )
      goto LABEL_28;
LABEL_27:
    free(v25);
    if ( LOBYTE(v353[19]) )
      goto LABEL_28;
LABEL_203:
    if ( v400 )
      sub_10E71B0((__int64)&v399);
    v106 = (__int64)v396;
    v107 = (__int64)&v396[192 * (unsigned int)v397];
    if ( v396 != (_BYTE *)v107 )
    {
      do
      {
        while ( 1 )
        {
          v107 -= 192;
          if ( *(_BYTE *)(v107 + 184) )
          {
            v108 = *(void **)(v107 + 152);
            if ( v108 != (void *)(v107 + 168) )
              operator delete(v108);
          }
          v109 = *(void **)(v107 + 120);
          if ( v109 != (void *)(v107 + 136) )
            operator delete(v109);
          v110 = *(void ***)(v107 + 96);
          v111 = *(void ***)(v107 + 104);
          v112 = v110;
          if ( v111 != v110 )
          {
            do
            {
              while ( *v112 != v112 + 2 )
              {
                operator delete(*v112);
                v112 += 4;
                if ( v111 == v112 )
                  goto LABEL_214;
              }
              v112 += 4;
            }
            while ( v111 != v112 );
LABEL_214:
            v110 = *(void ***)(v107 + 96);
          }
          if ( v110 )
            operator delete(v110);
          v113 = *(void **)(v107 + 64);
          if ( v113 != (void *)(v107 + 80) )
            operator delete(v113);
          v114 = *(void **)(v107 + 32);
          if ( v114 != (void *)(v107 + 48) )
            operator delete(v114);
          if ( *(_QWORD *)v107 == v107 + 16 )
            break;
          operator delete(*(void **)v107);
          if ( v106 == v107 )
            goto LABEL_223;
        }
      }
      while ( v106 != v107 );
LABEL_223:
      v107 = (__int64)v396;
    }
    if ( (_BYTE *)v107 != v398 )
      free((void *)v107);
    sub_115B160((__int64 *)v382);
    return;
  }
  if ( (unsigned __int64 *)ptr[0].m128i_i64[0] == &ptr[1].m128i_u64[1] )
  {
    v129 = ptr[0].m128i_u64[1];
    v130 = v316 + 3;
    if ( ptr[0].m128i_i64[1] <= 0x80uLL
      || (sub_22130D0(v316, v316 + 3, ptr[0].m128i_i64[1], 1),
          v129 = ptr[0].m128i_u64[1],
          v130 = v353[0],
          v25 = (__m128i *)ptr[0].m128i_i64[0],
          ptr[0].m128i_i64[1]) )
    {
      memcpy(v130, v25, v129);
      v25 = (__m128i *)ptr[0].m128i_i64[0];
    }
    v353[1] = v24;
    ptr[0].m128i_i64[1] = 0;
    goto LABEL_26;
  }
  v353[0] = (void *)ptr[0].m128i_i64[0];
  *(__m128i *)&v353[1] = *(__m128i *)((char *)ptr + 8);
  LOBYTE(v353[19]) = 1;
LABEL_28:
  v26 = v314[1];
  v27 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v26 + 96LL);
  ptr[0] = *(__m128i *)v353;
  LOWORD(v365) = 261;
  if ( v27(v26, ptr) )
  {
    sub_115AC50(ptr, (__int64)v314, 0);
    v28 = (__m128i *)a1[311].m128i_i64[1];
    if ( (__m128i *)ptr[0].m128i_i64[0] == &ptr[1] )
    {
      v115 = ptr[0].m128i_i64[1];
      if ( ptr[0].m128i_i64[1] )
      {
        if ( ptr[0].m128i_i64[1] == 1 )
          v28->m128i_i8[0] = ptr[1].m128i_i8[0];
        else
          memcpy(v28, (const void *)ptr[0].m128i_i64[0], ptr[0].m128i_u64[1]);
        v115 = ptr[0].m128i_i64[1];
        v28 = (__m128i *)a1[311].m128i_i64[1];
      }
      a1[312].m128i_i64[0] = v115;
      v28->m128i_i8[v115] = 0;
      v28 = (__m128i *)ptr[0].m128i_i64[0];
    }
    else
    {
      if ( v28 == (__m128i *)&a1[312].m128i_u64[1] )
      {
        v317 = (void *)ptr[1].m128i_i64[0];
        a1[311].m128i_i64[1] = ptr[0].m128i_i64[0];
        a1[312] = (__m128i)_mm_loadh_ps((const double *)&v317);
      }
      else
      {
        v317 = (void *)ptr[1].m128i_i64[0];
        v29 = a1[312].m128i_i64[1];
        a1[311].m128i_i64[1] = ptr[0].m128i_i64[0];
        a1[312] = (__m128i)_mm_loadh_ps((const double *)&v317);
        if ( v28 )
        {
          ptr[0].m128i_i64[0] = (__int64)v28;
          ptr[1].m128i_i64[0] = v29;
          goto LABEL_33;
        }
      }
      v28 = &ptr[1];
      ptr[0].m128i_i64[0] = (__int64)ptr[1].m128i_i64;
    }
LABEL_33:
    ptr[0].m128i_i64[1] = 0;
    v28->m128i_i8[0] = 0;
    if ( (__m128i *)ptr[0].m128i_i64[0] != &ptr[1] )
      operator delete((void *)ptr[0].m128i_i64[0]);
    v317 = v344;
    v344[0] = &v345;
    v344[1] = (void *)0x300000000LL;
    LOWORD(v365) = 261;
    v30 = v314[1];
    ptr[0] = *(__m128i *)v353;
    v318 = (__int64 *)v334;
    sub_22399B0((unsigned int)v334, v30, (unsigned int)ptr, -1, 1, 0, 1);
    if ( (v335 & 1) != 0 )
      goto LABEL_44;
    sub_11121E0((__int64)v336, (__int64)a1, a4);
    sub_220D3C0(ptr, v334[0]);
    sub_10F1420((__m128i *)p_src, 0, 0, v31, v32, v33, (__int128)ptr[0], (__int128)ptr[1]);
    if ( (v363 & 1) == 0 || !(_DWORD)src )
    {
      sub_115BB60((__int64 *)v382, (__int64 *)p_src);
      sub_115C4D0((__int64)&v384, (__int64)(p_src + 3));
      sub_115C8F0((__int64)&v387, (__int64)(p_src + 12));
      v116 = v359;
      ptr[1].m128i_i64[0] = 0;
      v117 = ptr[1].m128i_i64[1];
      if ( v359 )
      {
        v359(ptr, (__m128i *)p_src + 17, 2);
        v117 = v360;
        v116 = v359;
      }
      si128 = _mm_load_si128(ptr);
      v119 = v391;
      v391 = v116;
      v120 = _mm_load_si128(&v390);
      v121 = v392;
      v392 = v117;
      v390 = si128;
      ptr[0] = v120;
      ptr[1].m128i_i64[0] = (__int64)v119;
      ptr[1].m128i_i64[1] = v121;
      if ( v119 )
        v119(ptr, ptr, 3);
      v122 = v361;
      v123 = ptr[1].m128i_i64[1];
      ptr[1].m128i_i64[0] = 0;
      if ( v361 )
      {
        v361(ptr, (__m128i *)p_src + 19, 2);
        v123 = v362;
        v122 = v361;
      }
      v124 = _mm_load_si128(ptr);
      v125 = v394;
      v394 = v122;
      v126 = _mm_load_si128(&v393);
      v127 = v395;
      v395 = v123;
      v393 = v124;
      ptr[0] = v126;
      ptr[1].m128i_i64[0] = (__int64)v125;
      ptr[1].m128i_i64[1] = v127;
      if ( v125 )
        v125(ptr, ptr, 3);
      if ( !(unsigned __int8)sub_10ECAD0((__int64)v382, v314, (__int64)v336, (__int64 *)&v396, (__int64)v317) )
      {
        v131 = *v314;
        v320 = (unsigned __int8 **)&v348;
        sub_FA3370((__int64)&v348, v131, 0, 567);
        v132 = j__strlen(" ");
        v133 = (char *)v336[1];
        v134 = v341;
        v135 = v132;
        v339 = v341;
        v322 = &v339;
        v340 = 0;
        LOBYTE(v341[0]) = 0;
        if ( v336[1] == v336[0] )
        {
          v154 = 0;
        }
        else
        {
          v136 = v336[0];
          v137 = v135 * ((((char *)v336[1] - (char *)v336[0]) >> 5) - 1);
          do
          {
            v137 += v136[1];
            v136 += 4;
          }
          while ( v336[1] != v136 );
          v138 = v322;
          v139 = (char *)v336[0] + 32;
          sub_971EF0((__int64)v322, v137);
          sub_9CA820(v138, *((_BYTE **)v139 - 4), *((_QWORD *)v139 - 3));
          if ( v133 != v139 )
          {
            v140 = v340;
            if ( v135 > 0x7FFFFFFFFFFFFFFFLL - v340 )
LABEL_523:
              std::__throw_length_error("basic_string::append");
            s1 = v382;
            v141 = v135;
            v319 = 0x7FFFFFFFFFFFFFFFLL;
            v142 = v322 + 2;
            v321 = (void **)a1;
            v143 = v322;
            while ( 1 )
            {
              v145 = v339;
              v152 = v141 + v140;
              v153 = v339 == v142 ? 15LL : v341[0];
              if ( v152 <= v153 )
              {
                if ( v141 )
                {
                  v144 = (char *)v339 + v140;
                  if ( v141 == 1 )
                    *v144 = 32;
                  else
                    memcpy(v144, " ", v141);
                  v145 = v339;
                }
              }
              else
              {
                sub_974DF0((__int64)v143, v140, 0, " ", v141);
                v145 = v339;
              }
              v340 = v141 + v140;
              v145[v152] = 0;
              v146 = *((_QWORD *)v139 + 1);
              v147 = v339;
              v148 = *(_BYTE **)v139;
              v149 = v146 + v340;
              v150 = v339 == v142 ? 15LL : v341[0];
              if ( v149 > v150 )
              {
                sub_974DF0((__int64)v143, v340, 0, v148, v146);
                v147 = v339;
              }
              else if ( v146 )
              {
                v151 = (char *)v339 + v340;
                if ( v146 == 1 )
                  *v151 = *v148;
                else
                  memcpy(v151, *(const void **)v139, *((_QWORD *)v139 + 1));
                v147 = v339;
              }
              v139 += 32;
              v340 = v149;
              v147[v149] = 0;
              if ( v133 == v139 )
                break;
              v140 = v340;
              if ( v141 > v319 - v340 )
                goto LABEL_523;
            }
            a1 = (__m128i *)v321;
            v6 = (__int64 *)s1;
          }
          v134 = v339;
          v154 = v340;
        }
        sub_AC84E0(v320, v134, v154);
        if ( v339 != v322 + 2 )
          operator delete(v339);
        sub_AC6300((__int64)v320);
        std::ios_base::ios_base((std::ios_base *)v371);
        v379 = 0;
        v155 = (void **)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
        v380 = 0;
        v156 = (void *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
        v381 = 0;
        v371[0] = (char *)&`vtable for'std::ios + 16;
        v157 = (__int64)*(v155 - 3);
        ptr[0].m128i_i64[0] = (__int64)v155;
        v378 = 0;
        *(__int64 *)((char *)ptr[0].m128i_i64 + v157) = (__int64)v156;
        ptr[0].m128i_i64[1] = 0;
        s1 = v156;
        v322 = v155;
        std::ios::init();
        ptr[1].m128i_i64[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
        v324 = ptr[1].m128i_i64[0];
        v158 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
        *(__int64 *)((char *)ptr[1].m128i_i64 + *(_QWORD *)(ptr[1].m128i_i64[0] - 24)) = v158;
        v325 = v158;
        std::ios::init();
        v159 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
        v326 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
        v160 = *(_QWORD *)(v326 - 24);
        v327 = v159;
        *(__int64 *)((char *)ptr[0].m128i_i64 + v160) = v159;
        v365 = 0;
        v366 = 0;
        ptr[0].m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                            + 24;
        v367 = 0;
        v371[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
        ptr[1].m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                            + 64;
        ptr[1].m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
        std::locale::locale((std::locale *)v368);
        v368[2] = 24;
        v370[0] = 0;
        ptr[1].m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
        v369[0] = v370;
        v369[1] = nullptr;
        std::ios::init();
        v161 = v382[0];
        v321 = v342;
        v319 = (__int64)v382[1];
        if ( v382[0] != v382[1] )
        {
          v328 = a1;
          v329 = v6;
          do
          {
            if ( !*((_BYTE *)v161 + 184) )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              v162 = v161[13];
              v163 = v161[12];
              v342[0] = v343;
              v342[1] = nullptr;
              LOBYTE(v343[0]) = 0;
              if ( v162 != v163 )
              {
                v164 = v163;
                v165 = ((v162 - v163) >> 5) - 1;
                do
                {
                  v165 += *(_QWORD *)(v164 + 8);
                  v164 += 32;
                }
                while ( v162 != v164 );
                v166 = v163 + 32;
                sub_971EF0((__int64)v342, v165);
                sub_9CA820(v342, *(_BYTE **)(v166 - 32), *(_QWORD *)(v166 - 24));
                if ( v162 != v166 )
                {
                  v167 = (char *)v342[1];
                  if ( v342[1] == (void *)0x7FFFFFFFFFFFFFFFLL )
                    goto LABEL_523;
                  while ( 1 )
                  {
                    v174 = v167 + 1;
                    v175 = v342[0] == v343 ? 15LL : v343[0];
                    if ( (unsigned __int64)v174 <= v175 )
                      *((_BYTE *)v342[0] + (unsigned __int64)v167) = 32;
                    else
                      sub_974DF0((__int64)v342, (size_t)v167, 0, " ", 1u);
                    v342[1] = v167 + 1;
                    *((_BYTE *)v342[0] + (unsigned __int64)v174) = 0;
                    v168 = *(_QWORD *)(v166 + 8);
                    v169 = v342[0];
                    v170 = *(_BYTE **)v166;
                    v171 = (char *)v342[1] + v168;
                    v172 = v342[0] == v343 ? 15LL : v343[0];
                    if ( (unsigned __int64)v171 > v172 )
                    {
                      sub_974DF0((__int64)v342, (size_t)v342[1], 0, v170, v168);
                      v169 = v342[0];
                    }
                    else if ( v168 )
                    {
                      v173 = (char *)v342[1] + (unsigned __int64)v342[0];
                      if ( v168 == 1 )
                        *v173 = *v170;
                      else
                        memcpy(v173, *(const void **)v166, *(_QWORD *)(v166 + 8));
                      v169 = v342[0];
                    }
                    v166 += 32;
                    v342[1] = v171;
                    v171[(_QWORD)v169] = 0;
                    if ( v162 == v166 )
                      break;
                    v167 = (char *)v342[1];
                    if ( v342[1] == (void *)0x7FFFFFFFFFFFFFFFLL )
                      goto LABEL_523;
                  }
                }
              }
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( v342[0] != v343 )
                operator delete(v342[0]);
            }
            v161 += 24;
          }
          while ( (_QWORD *)v319 != v161 );
          a1 = v328;
          v6 = v329;
        }
        sub_FA3370((__int64)v320, *v314, 0, 522);
        v342[1] = nullptr;
        LOBYTE(v343[0]) = 0;
        v342[0] = v321 + 2;
        if ( (_QWORD)v367 )
        {
          if ( (unsigned __int64)v367 <= (unsigned __int64)v366 )
            sub_978080(v321, 0, 0, *((_BYTE **)&v366 + 1), v366 - *((_QWORD *)&v366 + 1));
          else
            sub_978080(v321, 0, 0, *((_BYTE **)&v366 + 1), v367 - *((_QWORD *)&v366 + 1));
        }
        else
        {
          sub_9CAB60((__int64)v321, (__int64)v369);
        }
        sub_AC84E0(v320, (_BYTE *)v342[0], (signed __int64)v342[1]);
        if ( v342[0] != v321 + 2 )
          operator delete(v342[0]);
        v176 = v320;
        sub_AC6300((__int64)v320);
        v319 = (__int64)(v176 + 6);
        v177 = &v396[192 * (unsigned int)v397];
        if ( v396 != v177 )
        {
          v328 = (__m128i *)v6;
          v178 = (__int64)v396;
          v179 = v320;
          v321 = (void **)a1;
          do
          {
            if ( *(_BYTE *)(v178 + 184) )
            {
              sub_FA3370((__int64)v179, *v314, 0, 426);
              if ( !*(_BYTE *)(v178 + 184) )
                abort();
              sub_AC84E0(v179, *(_BYTE **)(v178 + 152), *(_QWORD *)(v178 + 160));
              if ( (_BYTE)v352 )
              {
                sub_FA3A50(v350, (__int64)v179, SHIBYTE(v352));
                v350 = 0;
                v352 = 0;
              }
              if ( v351 != (void *)v319 )
                operator delete(v351);
              v180 = (void **)v348;
              if ( v348 )
              {
                v181 = v349;
                if ( v349 )
                {
                  if ( (unsigned __int64)v348 < v349 || (unsigned __int64)v348 > v349 + 14848 )
                  {
                    v182 = *((void ***)v348 + 66);
                    v183 = &v182[8 * (unsigned __int64)*((unsigned int *)v348 + 134)];
                    if ( v182 != v183 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v183 -= 8;
                          v184 = (void **)v183[3];
                          if ( v184 == v183 + 5 )
                            break;
                          operator delete(v184);
                          if ( v182 == v183 )
                            goto LABEL_348;
                        }
                      }
                      while ( v182 != v183 );
LABEL_348:
                      v183 = (void **)v180[66];
                    }
                    if ( v183 != v180 + 68 )
                      free(v183);
                    v185 = (void **)v180[52];
                    if ( v185 != v180 + 54 )
                      free(v185);
                    v186 = v180 + 48;
                    v187 = v180 + 8;
                    do
                    {
                      while ( *v186 != v186 + 2 )
                      {
                        operator delete(*v186);
                        v186 -= 4;
                        if ( v186 == v187 )
                          goto LABEL_356;
                      }
                      v186 -= 4;
                    }
                    while ( v187 != v186 );
LABEL_356:
                    operator delete(v180, 0x3A0u);
                  }
                  else
                  {
                    v199 = *(unsigned int *)(v349 + 14976);
                    *(_DWORD *)(v349 + 14976) = v199 + 1;
                    *(_QWORD *)(v181 + 8 * v199 + 14848) = v180;
                  }
                }
              }
            }
            v178 += 192;
          }
          while ( v177 != (_BYTE *)v178 );
          v188 = (__int64)v396;
          a1 = (__m128i *)v321;
          v6 = (__int64 *)v328;
          v189 = &v396[192 * (unsigned int)v397];
          while ( (_BYTE *)v188 != v189 )
          {
            while ( 1 )
            {
              v189 -= 192;
              if ( v189[184] )
              {
                v190 = *((_BYTE **)v189 + 19);
                if ( v190 != v189 + 168 )
                  operator delete(v190);
              }
              v191 = *((_BYTE **)v189 + 15);
              if ( v191 != v189 + 136 )
                operator delete(v191);
              v192 = *((void ***)v189 + 12);
              v193 = *((void ***)v189 + 13);
              v194 = v192;
              if ( v193 != v192 )
              {
                do
                {
                  while ( *v194 != v194 + 2 )
                  {
                    operator delete(*v194);
                    v194 += 4;
                    if ( v194 == v193 )
                      goto LABEL_371;
                  }
                  v194 += 4;
                }
                while ( v193 != v194 );
LABEL_371:
                v192 = *((void ***)v189 + 12);
              }
              if ( v192 )
                operator delete(v192);
              v195 = *((_BYTE **)v189 + 8);
              if ( v195 != v189 + 80 )
                operator delete(v195);
              v196 = *((_BYTE **)v189 + 4);
              if ( v196 != v189 + 48 )
                operator delete(v196);
              if ( *(_BYTE **)v189 == v189 + 16 )
                break;
              operator delete(*(void **)v189);
              if ( (_BYTE *)v188 == v189 )
                goto LABEL_380;
            }
          }
        }
LABEL_380:
        LODWORD(v397) = 0;
        ptr[0].m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                            + 24;
        v371[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
        v314 = (__int64 *)((char *)&`vtable for'std::stringbuf + 16);
        ptr[1] = (__m128i)_mm_loadh_ps((const double *)&v314);
        if ( v369[0] != v370 )
          operator delete(v369[0]);
        ptr[1].m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
        std::locale::~locale((std::locale *)v368);
        *(__int64 *)((char *)ptr[0].m128i_i64 + *(_QWORD *)(v326 - 24)) = v327;
        ptr[1].m128i_i64[0] = v324;
        *(__int64 *)((char *)ptr[1].m128i_i64 + *(_QWORD *)(v324 - 24)) = v325;
        ptr[0].m128i_i64[0] = (__int64)v322;
        *(__int64 *)((char *)ptr[0].m128i_i64 + (_QWORD)*(v322 - 3)) = (__int64)s1;
        ptr[0].m128i_i64[1] = 0;
        v371[0] = (char *)&`vtable for'std::ios + 16;
        std::ios_base::~ios_base((std::ios_base *)v371);
        if ( (v363 & 1) == 0 )
          sub_115B160((__int64 *)p_src);
        v197 = (void **)v336[1];
        v35 = (void **)v336[0];
        if ( v336[1] == v336[0] )
          goto LABEL_42;
        while ( 1 )
        {
          v198 = *v35;
          if ( *v35 != v35 + 2 )
            break;
LABEL_388:
          v35 += 4;
          if ( v197 == v35 )
            goto LABEL_41;
        }
        while ( 1 )
        {
          operator delete(v198);
          v35 += 4;
          if ( v35 == v197 )
            goto LABEL_41;
          v198 = *v35;
          if ( *v35 == v35 + 2 )
            goto LABEL_388;
        }
      }
      if ( (v363 & 1) == 0 )
        sub_115B160((__int64 *)p_src);
    }
    v34 = (void **)v336[1];
    v35 = (void **)v336[0];
    if ( v336[1] == v336[0] )
      goto LABEL_42;
    do
    {
      while ( *v35 != v35 + 2 )
      {
        operator delete(*v35);
        v35 += 4;
        if ( v34 == v35 )
          goto LABEL_41;
      }
      v35 += 4;
    }
    while ( v34 != v35 );
LABEL_41:
    v35 = (void **)v336[0];
LABEL_42:
    if ( v35 )
      operator delete(v35);
LABEL_44:
    sub_F9EDB0(v318);
    sub_115FEB0((__int64)a1[136].m128i_i64, (__int64)(v6 + 42));
    sub_115BB60(a1[115].m128i_i64, v6);
    sub_115C4D0((__int64)&a1[116].m128i_i64[1], (__int64)(v6 + 3));
    sub_115C8F0((__int64)a1[121].m128i_i64, (__int64)(v6 + 12));
    v36 = v391;
    ptr[1].m128i_i64[0] = 0;
    v37 = ptr[1].m128i_i64[1];
    if ( v391 )
    {
      v391(ptr, (__m128i *)v6 + 17, 2);
      v37 = v392;
      v36 = v391;
    }
    v38 = _mm_load_si128(ptr);
    v39 = _mm_loadu_si128(a1 + 132);
    v40 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[133].m128i_i64[0];
    a1[133].m128i_i64[0] = (__int64)v36;
    v41 = a1[133].m128i_i64[1];
    ptr[0] = v39;
    a1[132] = v38;
    ptr[1].m128i_i64[0] = (__int64)v40;
    ptr[1].m128i_i64[1] = v41;
    a1[133].m128i_i64[1] = v37;
    if ( v40 )
      v40(ptr, ptr, 3);
    v42 = v394;
    v43 = ptr[1].m128i_i64[1];
    ptr[1].m128i_i64[0] = 0;
    if ( v394 )
    {
      v394(ptr, (__m128i *)v6 + 19, 2);
      v43 = v395;
      v42 = v394;
    }
    v44 = _mm_load_si128(ptr);
    v45 = _mm_loadu_si128(a1 + 134);
    v46 = (void (__fastcall *)(__m128i *, __m128i *, __int64))a1[135].m128i_i64[0];
    a1[135].m128i_i64[0] = (__int64)v42;
    v47 = a1[135].m128i_i64[1];
    ptr[0] = v45;
    a1[134] = v44;
    ptr[1].m128i_i64[0] = (__int64)v46;
    ptr[1].m128i_i64[1] = v47;
    a1[135].m128i_i64[1] = v43;
    if ( v46 )
      v46(ptr, ptr, 3);
    v48 = (char *)v344[0];
    v49 = a1[314].m128i_u32[2];
    v50 = 16LL * LODWORD(v344[1]);
    v51 = (char *)v344[0] + v50;
    v52 = v50 >> 4;
    if ( v52 + v49 > (unsigned __int64)a1[314].m128i_u32[3] )
    {
      sub_A684B0((__int64)a1[314].m128i_i64, v52 + v49);
      v49 = a1[314].m128i_u32[2];
    }
    v53 = (_QWORD *)(a1[314].m128i_i64[0] + 32 * v49);
    if ( v48 != v51 )
    {
      do
      {
        v54 = *((_QWORD *)v48 + 1);
        v55 = *(_BYTE **)v48;
        v56 = v53;
        *v53 = v53 + 2;
        v48 += 16;
        v53 += 4;
        sub_115A880(v56, v55, (__int64)&v55[v54]);
      }
      while ( v51 != v48 );
      LODWORD(v49) = a1[314].m128i_i32[2];
    }
    v57 = v49 + v52;
    v58 = (char *)v317;
    v59 = (char *)v344[0];
    a1[314].m128i_i32[2] = v57;
    if ( v59 != v58 + 16 )
      free(v59);
    goto LABEL_59;
  }
  LODWORD(v318) = *((_DWORD *)v317 + 8);
  if ( (unsigned int)((_DWORD)v318 - 27) <= 1 && !*((_DWORD *)v317 + 10) && !*((_DWORD *)v317 + 11) )
  {
    v86 = j__strlen("elf");
    v87 = (const void *)sub_2293970(v317);
    if ( v86 == v88 && (!v86 || !memcmp(v87, "elf", v86)) )
    {
      v89 = sub_115A730((__int64)v314);
      if ( !v89 )
      {
        *(_OWORD *)v330 = 0;
        v318 = (__int64 *)v334;
        v331 = 0;
        sub_1135B90((__int64 *)v334, a4, v317);
        s1 = sub_1136570(a4, v317);
        v90 = *((_DWORD *)v317 + 8);
        v92 = v91;
        if ( v90 != 28 )
        {
          if ( v90 != 27 )
          {
LABEL_148:
            if ( v334[0] != v318 + 2 )
              operator delete(v334[0]);
            v93 = (void **)v330[1];
            v94 = (void **)v330[0];
            if ( v330[1] != v330[0] )
            {
              do
              {
                while ( *v94 != v94 + 2 )
                {
                  operator delete(*v94);
                  v94 += 4;
                  if ( v93 == v94 )
                    goto LABEL_153;
                }
                v94 += 4;
              }
              while ( v93 != v94 );
LABEL_153:
              v94 = (void **)v330[0];
            }
            if ( v94 )
              operator delete(v94);
            if ( v89 )
            {
              sub_115FEB0((__int64)a1[136].m128i_i64, (__int64)&v396);
              sub_115CCA0(a1 + 115, (__int64 *)v382);
            }
            goto LABEL_59;
          }
          sub_10F6600((__int64)ptr, nullptr, 0);
          v246 = j__strlen("-march=rv32imac");
          v247 = sub_10F3FC0((__int64)ptr, (__int64)"-march=rv32imac", v246, 0);
          v248 = j__strlen("-mabi=ilp32");
          v249 = sub_10F3FC0(v247, (__int64)"-mabi=ilp32", v248, 0);
          v322 = &v339;
          sub_115B590((__int64)&v339, v249);
          sub_115B4F0((__int64)ptr);
          v250 = j__strlen("/rv32i/ilp32");
          sub_10F6600((__int64)ptr, "/rv32i/ilp32", v250);
          v251 = j__strlen("-march=rv32i");
          v252 = sub_10F3FC0((__int64)ptr, (__int64)"-march=rv32i", v251, 0);
          v253 = j__strlen("-mabi=ilp32");
          v254 = sub_10F3FC0(v252, (__int64)"-mabi=ilp32", v253, 0);
          v321 = v342;
          sub_115B590((__int64)v342, v254);
          sub_115B4F0((__int64)ptr);
          v255 = j__strlen("/rv32im/ilp32");
          sub_10F6600((__int64)ptr, "/rv32im/ilp32", v255);
          v256 = j__strlen("-march=rv32im");
          v257 = sub_10F3FC0((__int64)ptr, (__int64)"-march=rv32im", v256, 0);
          v258 = j__strlen("-mabi=ilp32");
          v259 = sub_10F3FC0(v257, (__int64)"-mabi=ilp32", v258, 0);
          v317 = v344;
          sub_115B590((__int64)v344, v259);
          sub_115B4F0((__int64)ptr);
          v260 = j__strlen("/rv32iac/ilp32");
          sub_10F6600((__int64)ptr, "/rv32iac/ilp32", v260);
          v261 = j__strlen("-march=rv32iac");
          v262 = sub_10F3FC0((__int64)ptr, (__int64)"-march=rv32iac", v261, 0);
          v263 = j__strlen("-mabi=ilp32");
          v264 = sub_10F3FC0(v262, (__int64)"-mabi=ilp32", v263, 0);
          v320 = (unsigned __int8 **)&v348;
          sub_115B590((__int64)&v348, v264);
          sub_115B4F0((__int64)ptr);
          v265 = j__strlen("/rv32imafc/ilp32f");
          sub_10F6600((__int64)ptr, "/rv32imafc/ilp32f", v265);
          v266 = j__strlen("-march=rv32imafc");
          v267 = sub_10F3FC0((__int64)ptr, (__int64)"-march=rv32imafc", v266, 0);
          v268 = j__strlen("-mabi=ilp32f");
          v269 = v267;
          v270 = 1;
          v271 = sub_10F3FC0(v269, (__int64)"-mabi=ilp32f", v268, 0);
          sub_115B590((__int64)p_src, v271);
          sub_115B4F0((__int64)ptr);
          if ( sub_990D60((__int64)v318, "rv32i") )
            v270 = sub_990D60((__int64)v318, "rv32ic") == 0;
          v272 = 1;
          if ( sub_990D60((__int64)v318, "rv32im") )
            v272 = sub_990D60((__int64)v318, "rv32imc") == 0;
          v273 = 1;
          if ( sub_990D60((__int64)v318, "rv32imafc") && sub_990D60((__int64)v318, "rv32imafdc") )
            v273 = sub_990D60((__int64)v318, "rv32gc") == 0;
          v274 = j__strlen("-march=rv32i");
          v319 = (__int64)v330;
          sub_11A2AB0(v270, "-march=rv32i", v274, v330);
          v275 = j__strlen("-march=rv32im");
          sub_11A2AB0(v272, "-march=rv32im", v275, v330);
          v276 = j__strlen("-march=rv32iac");
          v277 = sub_990D60((__int64)v318, "rv32iac");
          sub_11A2AB0(v277 == 0, "-march=rv32iac", v276, v330);
          v278 = j__strlen("-march=rv32imac");
          v279 = sub_990D60((__int64)v318, "rv32imac");
          sub_11A2AB0(v279 == 0, "-march=rv32imac", v278, v330);
          v280 = j__strlen("-march=rv32imafc");
          sub_11A2AB0(v273, "-march=rv32imafc", v280, v330);
          v281 = j__strlen("-mabi=ilp32");
          if ( j__strlen("ilp32") == v92 )
          {
            if ( v92 )
            {
              v282 = memcmp(s1, "ilp32", v92);
              sub_11A2AB0(v282 == 0, "-mabi=ilp32", v281, v330);
              v283 = j__strlen("-mabi=ilp32f");
              if ( j__strlen("ilp32f") == v92 )
              {
LABEL_462:
                v284 = memcmp(s1, "ilp32f", v92) == 0;
LABEL_463:
                sub_11A2AB0(v284, "-mabi=ilp32f", v283, v319);
                *(_OWORD *)v332 = 0;
                v333 = 0;
                v285 = sub_10F7F60(
                         (__int64 *)v332,
                         (__int64)v321,
                         (__int64)v317,
                         (__int64)v320,
                         (__int64)v322,
                         (__int64)p_src);
                sub_10F4A60((__int64)ptr, v285);
                v286 = (char *)v382[0];
                v287 = (char *)v382[1];
                *(__m128i *)v382 = ptr[0];
                v288 = v286;
                s1 = v286;
                memset(ptr, 0, 24);
                v383 = ptr[1].m128i_i64[0];
                if ( v286 != v287 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      if ( v288[184] )
                      {
                        v289 = *((char **)v288 + 19);
                        if ( v289 != v288 + 168 )
                          operator delete(v289);
                      }
                      v290 = *((char **)v288 + 15);
                      if ( v290 != v288 + 136 )
                        operator delete(v290);
                      v291 = *((void ***)v288 + 13);
                      v292 = *((void ***)v288 + 12);
                      if ( v291 != v292 )
                      {
                        do
                        {
                          while ( *v292 != v292 + 2 )
                          {
                            operator delete(*v292);
                            v292 += 4;
                            if ( v291 == v292 )
                              goto LABEL_472;
                          }
                          v292 += 4;
                        }
                        while ( v291 != v292 );
LABEL_472:
                        v292 = *((void ***)v288 + 12);
                      }
                      if ( v292 )
                        operator delete(v292);
                      v293 = *((char **)v288 + 8);
                      if ( v293 != v288 + 80 )
                        operator delete(v293);
                      v294 = *((char **)v288 + 4);
                      if ( v294 != v288 + 48 )
                        operator delete(v294);
                      if ( *(char **)v288 == v288 + 16 )
                        break;
                      operator delete(*(void **)v288);
                      v288 += 192;
                      if ( v287 == v288 )
                        goto LABEL_481;
                    }
                    v288 += 192;
                  }
                  while ( v287 != v288 );
                }
LABEL_481:
                if ( s1 )
                  operator delete(s1);
                sub_10E7470((__int64)&v384, (__int64)&ptr[1].m128i_i64[1]);
                sub_10F0AC0((__int64)&v387, (__int64)v369);
                v295 = v373;
                v296 = _mm_load_si128((const __m128i *)v336);
                v373 = nullptr;
                v297 = v374;
                v298 = _mm_load_si128(&v372);
                v372 = v296;
                v299 = _mm_load_si128(&v390);
                v374 = v338;
                v300 = v391;
                v391 = v295;
                *(__m128i *)v336 = v299;
                v390 = v298;
                v337 = v300;
                v338 = v392;
                v392 = v297;
                if ( v300 )
                  v300((__m128i *)v336, (__m128i *)v336, 3);
                v301 = v376;
                v302 = _mm_load_si128((const __m128i *)v336);
                v376 = nullptr;
                v303 = v377;
                v304 = _mm_load_si128(&v375);
                v375 = v302;
                v305 = _mm_load_si128(&v393);
                v377 = v338;
                v306 = v394;
                v394 = v301;
                *(__m128i *)v336 = v305;
                v393 = v304;
                v337 = v306;
                v338 = v395;
                v395 = v303;
                if ( v306 )
                  v306((__m128i *)v336, (__m128i *)v336, 3);
                sub_115B160(ptr[0].m128i_i64);
                v307 = (char *)v332[1];
                for ( i = (char *)v332[0]; v307 != i; i += 120 )
                {
                  while ( 1 )
                  {
                    v309 = *((void ***)i + 13);
                    v310 = *((void ***)i + 12);
                    if ( v309 != v310 )
                    {
                      do
                      {
                        while ( *v310 != v310 + 2 )
                        {
                          operator delete(*v310);
                          v310 += 4;
                          if ( v310 == v309 )
                            goto LABEL_491;
                        }
                        v310 += 4;
                      }
                      while ( v309 != v310 );
LABEL_491:
                      v310 = *((void ***)i + 12);
                    }
                    if ( v310 )
                      operator delete(v310);
                    v311 = *((char **)i + 8);
                    if ( v311 != i + 80 )
                      operator delete(v311);
                    v312 = *((char **)i + 4);
                    if ( v312 != i + 48 )
                      operator delete(v312);
                    if ( *(char **)i == i + 16 )
                      break;
                    operator delete(*(void **)i);
                    i += 120;
                    if ( i == v307 )
                      goto LABEL_500;
                  }
                }
LABEL_500:
                if ( v332[0] )
                  operator delete(v332[0]);
                v89 = sub_10ECAD0((__int64)v382, v314, v319, (__int64 *)&v396, 0);
                sub_115B4F0((__int64)p_src);
                sub_115B4F0((__int64)v320);
                sub_115B4F0((__int64)v317);
                sub_115B4F0((__int64)v321);
                sub_115B4F0((__int64)v322);
                goto LABEL_148;
              }
LABEL_517:
              v284 = 0;
              goto LABEL_463;
            }
            sub_11A2AB0(1, "-mabi=ilp32", v281, v319);
            v283 = j__strlen("-mabi=ilp32f");
            if ( j__strlen("ilp32f") )
              goto LABEL_517;
          }
          else
          {
            sub_11A2AB0(0, "-mabi=ilp32", v281, v319);
            v283 = j__strlen("-mabi=ilp32f");
            if ( j__strlen("ilp32f") != v92 )
              goto LABEL_517;
            if ( v92 )
              goto LABEL_462;
          }
          v284 = 1;
          goto LABEL_463;
        }
        sub_10F6600((__int64)ptr, nullptr, 0);
        v200 = j__strlen("-march=rv64imac");
        v201 = sub_10F3FC0((__int64)ptr, (__int64)"-march=rv64imac", v200, 0);
        v202 = j__strlen("-mabi=lp64");
        v203 = sub_10F3FC0(v201, (__int64)"-mabi=lp64", v202, 0);
        v320 = (unsigned __int8 **)&v348;
        sub_115B590((__int64)&v348, v203);
        sub_115B4F0((__int64)ptr);
        v204 = j__strlen("/rv64imafdc/lp64d");
        sub_10F6600((__int64)ptr, "/rv64imafdc/lp64d", v204);
        v205 = j__strlen("-march=rv64imafdc");
        v206 = sub_10F3FC0((__int64)ptr, (__int64)"-march=rv64imafdc", v205, 0);
        v207 = j__strlen("-mabi=lp64d");
        v208 = v206;
        v209 = 1;
        v210 = sub_10F3FC0(v208, (__int64)"-mabi=lp64d", v207, 0);
        sub_115B590((__int64)p_src, v210);
        sub_115B4F0((__int64)ptr);
        if ( sub_990D60((__int64)v318, "rv64imafdc") )
          v209 = sub_990D60((__int64)v318, "rv64gc") == 0;
        v211 = j__strlen("-march=rv64imac");
        v212 = sub_990D60((__int64)v318, "rv64imac");
        v319 = (__int64)v330;
        sub_11A2AB0(v212 == 0, "-march=rv64imac", v211, v330);
        v213 = j__strlen("-march=rv64imafdc");
        sub_11A2AB0(v209, "-march=rv64imafdc", v213, v330);
        v214 = j__strlen("-mabi=lp64");
        if ( j__strlen("lp64") == v92 )
        {
          if ( v92 )
          {
            v215 = memcmp(s1, "lp64", v92);
            sub_11A2AB0(v215 == 0, "-mabi=lp64", v214, v330);
            v216 = j__strlen("-mabi=lp64d");
            if ( j__strlen("lp64d") == v92 )
            {
LABEL_404:
              v217 = memcmp(s1, "lp64d", v92) == 0;
LABEL_405:
              sub_11A2AB0(v217, "-mabi=lp64d", v216, v319);
              *(_OWORD *)v342 = 0;
              v343[0] = 0;
              v218 = sub_10F97E0((__int64 *)v342, (__int64)v320, (__int64)p_src);
              sub_10F4A60((__int64)ptr, v218);
              v219 = (char *)v382[0];
              v220 = (char *)v382[1];
              *(__m128i *)v382 = ptr[0];
              v221 = v219;
              v317 = v219;
              memset(ptr, 0, 24);
              v383 = ptr[1].m128i_i64[0];
              if ( v219 != v220 )
              {
                do
                {
                  while ( 1 )
                  {
                    if ( v221[184] )
                    {
                      v222 = *((char **)v221 + 19);
                      if ( v222 != v221 + 168 )
                        operator delete(v222);
                    }
                    v223 = *((char **)v221 + 15);
                    if ( v223 != v221 + 136 )
                      operator delete(v223);
                    v224 = *((void ***)v221 + 13);
                    v225 = *((void ***)v221 + 12);
                    if ( v224 != v225 )
                    {
                      do
                      {
                        while ( *v225 != v225 + 2 )
                        {
                          operator delete(*v225);
                          v225 += 4;
                          if ( v224 == v225 )
                            goto LABEL_414;
                        }
                        v225 += 4;
                      }
                      while ( v224 != v225 );
LABEL_414:
                      v225 = *((void ***)v221 + 12);
                    }
                    if ( v225 )
                      operator delete(v225);
                    v226 = *((char **)v221 + 8);
                    if ( v226 != v221 + 80 )
                      operator delete(v226);
                    v227 = *((char **)v221 + 4);
                    if ( v227 != v221 + 48 )
                      operator delete(v227);
                    if ( *(char **)v221 == v221 + 16 )
                      break;
                    operator delete(*(void **)v221);
                    v221 += 192;
                    if ( v220 == v221 )
                      goto LABEL_423;
                  }
                  v221 += 192;
                }
                while ( v220 != v221 );
              }
LABEL_423:
              if ( v317 )
                operator delete(v317);
              sub_10E7470((__int64)&v384, (__int64)&ptr[1].m128i_i64[1]);
              sub_10F0AC0((__int64)&v387, (__int64)v369);
              v228 = v373;
              v229 = _mm_load_si128((const __m128i *)v344);
              v373 = nullptr;
              v230 = v374;
              v231 = _mm_load_si128(&v372);
              v372 = v229;
              v232 = _mm_load_si128(&v390);
              v374 = v346;
              v233 = v391;
              v391 = v228;
              *(__m128i *)v344 = v232;
              v390 = v231;
              v345 = v233;
              v346 = v392;
              v392 = v230;
              if ( v233 )
                v233((__m128i *)v344, (__m128i *)v344, 3);
              v234 = v376;
              v235 = _mm_load_si128((const __m128i *)v344);
              v376 = nullptr;
              v236 = v377;
              v237 = _mm_load_si128(&v375);
              v375 = v235;
              v238 = _mm_load_si128(&v393);
              v377 = v346;
              v239 = v394;
              v394 = v234;
              *(__m128i *)v344 = v238;
              v393 = v237;
              v345 = v239;
              v346 = v395;
              v395 = v236;
              if ( v239 )
                v239((__m128i *)v344, (__m128i *)v344, 3);
              sub_115B160(ptr[0].m128i_i64);
              v240 = (char *)v342[1];
              for ( j = (char *)v342[0]; v240 != j; j += 120 )
              {
                while ( 1 )
                {
                  v242 = *((void ***)j + 13);
                  v243 = *((void ***)j + 12);
                  if ( v242 != v243 )
                  {
                    do
                    {
                      while ( *v243 != v243 + 2 )
                      {
                        operator delete(*v243);
                        v243 += 4;
                        if ( v242 == v243 )
                          goto LABEL_433;
                      }
                      v243 += 4;
                    }
                    while ( v242 != v243 );
LABEL_433:
                    v243 = *((void ***)j + 12);
                  }
                  if ( v243 )
                    operator delete(v243);
                  v244 = *((char **)j + 8);
                  if ( v244 != j + 80 )
                    operator delete(v244);
                  v245 = *((char **)j + 4);
                  if ( v245 != j + 48 )
                    operator delete(v245);
                  if ( *(char **)j == j + 16 )
                    break;
                  operator delete(*(void **)j);
                  j += 120;
                  if ( v240 == j )
                    goto LABEL_442;
                }
              }
LABEL_442:
              if ( v342[0] )
                operator delete(v342[0]);
              v89 = sub_10ECAD0((__int64)v382, v314, v319, (__int64 *)&v396, 0);
              sub_115B4F0((__int64)p_src);
              sub_115B4F0((__int64)v320);
              goto LABEL_148;
            }
LABEL_512:
            v217 = 0;
            goto LABEL_405;
          }
          sub_11A2AB0(1, "-mabi=lp64", v214, v319);
          v216 = j__strlen("-mabi=lp64d");
          if ( j__strlen("lp64d") )
            goto LABEL_512;
        }
        else
        {
          sub_11A2AB0(0, "-mabi=lp64", v214, v319);
          v216 = j__strlen("-mabi=lp64d");
          if ( j__strlen("lp64d") != v92 )
            goto LABEL_512;
          if ( v92 )
            goto LABEL_404;
        }
        v217 = 1;
        goto LABEL_405;
      }
    }
  }
LABEL_59:
  if ( LOBYTE(v353[19]) && v353[0] != v316 + 3 )
    free(v353[0]);
  if ( v400 )
    sub_10E71B0((__int64)(v6 + 68));
  v60 = (__int64)v396;
  v61 = (__int64)&v396[192 * (unsigned int)v397];
  if ( v396 != (_BYTE *)v61 )
  {
    do
    {
      while ( 1 )
      {
        v61 -= 192;
        if ( *(_BYTE *)(v61 + 184) )
        {
          v62 = *(void **)(v61 + 152);
          if ( v62 != (void *)(v61 + 168) )
            operator delete(v62);
        }
        v63 = *(void **)(v61 + 120);
        if ( v63 != (void *)(v61 + 136) )
          operator delete(v63);
        v64 = *(void ***)(v61 + 96);
        v65 = *(void ***)(v61 + 104);
        v66 = v64;
        if ( v65 != v64 )
        {
          do
          {
            while ( *v66 != v66 + 2 )
            {
              operator delete(*v66);
              v66 += 4;
              if ( v66 == v65 )
                goto LABEL_73;
            }
            v66 += 4;
          }
          while ( v65 != v66 );
LABEL_73:
          v64 = *(void ***)(v61 + 96);
        }
        if ( v64 )
          operator delete(v64);
        v67 = *(void **)(v61 + 64);
        if ( v67 != (void *)(v61 + 80) )
          operator delete(v67);
        v68 = *(void **)(v61 + 32);
        if ( v68 != (void *)(v61 + 48) )
          operator delete(v68);
        if ( *(_QWORD *)v61 == v61 + 16 )
          break;
        operator delete(*(void **)v61);
        if ( v60 == v61 )
          goto LABEL_82;
      }
    }
    while ( v60 != v61 );
LABEL_82:
    v61 = (__int64)v396;
  }
  if ( (__int64 *)v61 != v6 + 44 )
    free((void *)v61);
  if ( v394 )
    v394((__m128i *)v6 + 19, (__m128i *)v6 + 19, 3);
  if ( v391 )
    v391((__m128i *)v6 + 17, (__m128i *)v6 + 17, 3);
  v313 = v387;
  v69 = 20LL * (unsigned int)v388;
  v70 = &v387[v69];
  if ( v387 != &v387[v69] )
  {
    while ( 1 )
    {
      v70 -= 20;
      v71 = (char *)v70[4];
      v72 = &v71[96 * *((unsigned int *)v70 + 10)];
      if ( v71 != v72 )
        break;
LABEL_95:
      if ( v71 != (char *)(v70 + 6) )
        free(v71);
      if ( *v70 == v70 + 2 )
      {
        if ( v313 == v70 )
        {
LABEL_99:
          v70 = v387;
          goto LABEL_100;
        }
      }
      else
      {
        operator delete(*v70);
        if ( v313 == v70 )
          goto LABEL_99;
      }
    }
    while ( 1 )
    {
      v72 -= 96;
      if ( v72[80] )
        goto LABEL_170;
      while ( *(char **)v72 == v72 + 16 )
      {
        if ( v71 == v72 )
        {
LABEL_94:
          v71 = (char *)v70[4];
          goto LABEL_95;
        }
        v72 -= 96;
        if ( v72[80] )
        {
LABEL_170:
          v95 = *((void ***)v72 + 4);
          v96 = &v95[4 * *((unsigned int *)v72 + 10)];
          if ( v95 != v96 )
          {
            do
            {
              while ( 1 )
              {
                v96 -= 4;
                if ( *v96 == v96 + 2 )
                  break;
                operator delete(*v96);
                if ( v95 == v96 )
                  goto LABEL_173;
              }
            }
            while ( v95 != v96 );
LABEL_173:
            v95 = *((void ***)v72 + 4);
          }
          if ( v95 != (void **)(v72 + 48) )
            free(v95);
        }
      }
      operator delete(*(void **)v72);
      if ( v71 == v72 )
        goto LABEL_94;
    }
  }
LABEL_100:
  if ( v70 != (void **)(v6 + 14) )
    free(v70);
  v73 = v384;
  v74 = &v384[7 * (unsigned int)v385];
  if ( v384 != v74 )
  {
    do
    {
      while ( 1 )
      {
        v74 -= 7;
        v75 = (void **)v74[4];
        v76 = (void **)v74[5];
        v77 = v75;
        if ( v76 != v75 )
        {
          do
          {
            while ( *v77 != v77 + 2 )
            {
              operator delete(*v77);
              v77 += 4;
              if ( v77 == v76 )
                goto LABEL_106;
            }
            v77 += 4;
          }
          while ( v76 != v77 );
LABEL_106:
          v75 = (void **)v74[4];
        }
        if ( v75 )
          operator delete(v75);
        if ( (__int64 *)*v74 == v74 + 2 )
          break;
        operator delete((void *)*v74);
        if ( v73 == v74 )
          goto LABEL_111;
      }
    }
    while ( v73 != v74 );
LABEL_111:
    v74 = v384;
  }
  if ( v74 != v6 + 5 )
    free(v74);
  v78 = (char *)v382[1];
  v79 = (char *)v382[0];
  if ( v382[1] != v382[0] )
  {
    do
    {
      while ( 1 )
      {
        if ( v79[184] )
        {
          v80 = *((char **)v79 + 19);
          if ( v80 != v79 + 168 )
            operator delete(v80);
        }
        v81 = *((char **)v79 + 15);
        if ( v81 != v79 + 136 )
          operator delete(v81);
        v82 = *((void ***)v79 + 13);
        v83 = *((void ***)v79 + 12);
        if ( v82 != v83 )
        {
          do
          {
            while ( *v83 != v83 + 2 )
            {
              operator delete(*v83);
              v83 += 4;
              if ( v83 == v82 )
                goto LABEL_123;
            }
            v83 += 4;
          }
          while ( v82 != v83 );
LABEL_123:
          v83 = *((void ***)v79 + 12);
        }
        if ( v83 )
          operator delete(v83);
        v84 = *((char **)v79 + 8);
        if ( v84 != v79 + 80 )
          operator delete(v84);
        v85 = *((char **)v79 + 4);
        if ( v85 != v79 + 48 )
          operator delete(v85);
        if ( *(char **)v79 == v79 + 16 )
          break;
        operator delete(*(void **)v79);
        v79 += 192;
        if ( v79 == v78 )
          goto LABEL_132;
      }
      v79 += 192;
    }
    while ( v78 != v79 );
LABEL_132:
    v79 = (char *)v382[0];
  }
  if ( v79 )
    operator delete(v79);
}

