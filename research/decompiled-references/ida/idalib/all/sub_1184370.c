void __fastcall sub_1184370(__m128i *a1, __int64 *a2, void *a3, __int64 a4)
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
  __int64 v158; // rdi
  __int64 *v159; // rdi
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rax
  _QWORD *v163; // r13
  __int64 v164; // rbx
  __int64 v165; // r12
  _QWORD *v166; // rsi
  __int64 v167; // rax
  unsigned __int64 v168; // rsi
  __int64 v169; // r12
  char *v170; // rsi
  size_t v171; // r8
  void *v172; // rdi
  _BYTE *v173; // rcx
  char *v174; // r15
  unsigned __int64 v175; // rax
  _BYTE *v176; // rdi
  char *v177; // r15
  unsigned __int64 v178; // rdx
  void *v179; // rdx
  unsigned __int8 **v180; // r13
  _BYTE *v181; // r14
  __int64 v182; // rbx
  unsigned __int8 **v183; // r15
  void **v184; // r12
  unsigned __int64 v185; // rax
  void **v186; // rbp
  void **v187; // r13
  void **v188; // rdi
  void **v189; // rdi
  void **v190; // rbp
  void **v191; // r13
  __int64 v192; // r12
  _BYTE *v193; // r14
  _BYTE *v194; // rdi
  _BYTE *v195; // rdi
  void **v196; // rdi
  void **v197; // r15
  void **v198; // r13
  _BYTE *v199; // rdi
  _BYTE *v200; // rdi
  void **v201; // r12
  void *v202; // rdi
  __int64 v203; // rdx
  size_t v204; // rax
  __int64 v205; // r12
  size_t v206; // rax
  __int64 v207; // rax
  size_t v208; // rax
  size_t v209; // rax
  __int64 v210; // r12
  size_t v211; // rax
  __int64 v212; // rdi
  _BOOL4 v213; // r12d
  __int64 v214; // rax
  size_t v215; // r13
  int v216; // eax
  size_t v217; // rax
  size_t v218; // r12
  int v219; // eax
  size_t v220; // r12
  _BOOL8 v221; // rdi
  __int64 *v222; // rax
  char *v223; // rcx
  char *v224; // r13
  char *v225; // r14
  char *v226; // rdi
  char *v227; // rdi
  void **v228; // r15
  void **v229; // r12
  char *v230; // rdi
  char *v231; // rdi
  void (__fastcall *v232)(__m128i *, __m128i *, __int64); // rcx
  __m128i v233; // xmm7
  __int64 v234; // rdx
  __m128i v235; // xmm0
  __m128i v236; // xmm7
  void (__fastcall *v237)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v238)(__m128i *, __m128i *, __int64); // rcx
  __m128i v239; // xmm7
  __int64 v240; // rdx
  __m128i v241; // xmm0
  __m128i v242; // xmm7
  void (__fastcall *v243)(__m128i *, __m128i *, __int64); // rax
  char *v244; // r14
  char *j; // r12
  void **v246; // r15
  void **v247; // r13
  char *v248; // rdi
  char *v249; // rdi
  size_t v250; // rax
  __int64 v251; // r12
  size_t v252; // rax
  __int64 v253; // rax
  size_t v254; // rax
  size_t v255; // rax
  __int64 v256; // r12
  size_t v257; // rax
  __int64 v258; // rax
  size_t v259; // rax
  size_t v260; // rax
  __int64 v261; // r12
  size_t v262; // rax
  __int64 v263; // rax
  size_t v264; // rax
  size_t v265; // rax
  __int64 v266; // r12
  size_t v267; // rax
  __int64 v268; // rax
  size_t v269; // rax
  size_t v270; // rax
  __int64 v271; // r12
  size_t v272; // rax
  __int64 v273; // rdi
  _BOOL4 v274; // r12d
  __int64 v275; // rax
  _BOOL4 v276; // r13d
  _BOOL4 v277; // r14d
  size_t v278; // rax
  size_t v279; // rax
  size_t v280; // r12
  int v281; // eax
  size_t v282; // r12
  int v283; // eax
  size_t v284; // rax
  size_t v285; // r12
  int v286; // eax
  size_t v287; // r12
  _BOOL8 v288; // rdi
  __int64 *v289; // rax
  char *v290; // rcx
  char *v291; // r13
  char *v292; // r14
  char *v293; // rdi
  char *v294; // rdi
  void **v295; // r15
  void **v296; // r12
  char *v297; // rdi
  char *v298; // rdi
  void (__fastcall *v299)(__m128i *, __m128i *, __int64); // rcx
  __m128i v300; // xmm7
  __int64 v301; // rdx
  __m128i v302; // xmm0
  __m128i v303; // xmm7
  void (__fastcall *v304)(__m128i *, __m128i *, __int64); // rax
  void (__fastcall *v305)(__m128i *, __m128i *, __int64); // rcx
  __m128i v306; // xmm7
  __int64 v307; // rdx
  __m128i v308; // xmm0
  __m128i v309; // xmm7
  void (__fastcall *v310)(__m128i *, __m128i *, __int64); // rax
  char *v311; // r14
  char *i; // r12
  void **v313; // r15
  void **v314; // r13
  char *v315; // rdi
  char *v316; // rdi
  void **v317; // [rsp+0h] [rbp-9C0h]
  __int64 *v318; // [rsp+8h] [rbp-9B8h] BYREF
  void **p_src; // [rsp+10h] [rbp-9B0h]
  void **v320; // [rsp+18h] [rbp-9A8h]
  void *v321; // [rsp+20h] [rbp-9A0h] BYREF
  __int64 *v322; // [rsp+28h] [rbp-998h]
  __int64 v323; // [rsp+30h] [rbp-990h]
  unsigned __int8 **v324; // [rsp+38h] [rbp-988h]
  void **v325; // [rsp+40h] [rbp-980h]
  void **v326; // [rsp+48h] [rbp-978h]
  void *s1; // [rsp+50h] [rbp-970h]
  __int64 v328; // [rsp+58h] [rbp-968h]
  __int64 v329; // [rsp+60h] [rbp-960h]
  __int64 v330; // [rsp+68h] [rbp-958h]
  __int64 v331; // [rsp+70h] [rbp-950h]
  __m128i *v332; // [rsp+78h] [rbp-948h]
  __int64 *v333; // [rsp+80h] [rbp-940h]
  void *v334[2]; // [rsp+88h] [rbp-938h] BYREF
  __int64 v335; // [rsp+98h] [rbp-928h]
  void *v336[2]; // [rsp+A8h] [rbp-918h] BYREF
  __int64 v337; // [rsp+B8h] [rbp-908h]
  void *v338[2]; // [rsp+C8h] [rbp-8F8h] BYREF
  char v339; // [rsp+D8h] [rbp-8E8h]
  void *v340[2]; // [rsp+E8h] [rbp-8D8h] BYREF
  void (__fastcall *v341)(__m128i *, __m128i *, __int64); // [rsp+F8h] [rbp-8C8h]
  __int64 v342; // [rsp+100h] [rbp-8C0h]
  void *v343; // [rsp+108h] [rbp-8B8h] BYREF
  size_t v344; // [rsp+110h] [rbp-8B0h]
  _QWORD v345[14]; // [rsp+118h] [rbp-8A8h] BYREF
  void *v346[2]; // [rsp+188h] [rbp-838h] BYREF
  _QWORD v347[14]; // [rsp+198h] [rbp-828h] BYREF
  void *v348[2]; // [rsp+208h] [rbp-7B8h] BYREF
  void (__fastcall *v349)(__m128i *, __m128i *, __int64); // [rsp+218h] [rbp-7A8h] BYREF
  __int64 v350; // [rsp+220h] [rbp-7A0h]
  __int16 v351; // [rsp+228h] [rbp-798h]
  void *v352; // [rsp+288h] [rbp-738h] BYREF
  unsigned __int64 v353; // [rsp+290h] [rbp-730h]
  __int64 v354; // [rsp+298h] [rbp-728h]
  void *v355; // [rsp+2A8h] [rbp-718h]
  __int16 v356; // [rsp+2C8h] [rbp-6F8h]
  void *v357[20]; // [rsp+308h] [rbp-6B8h] BYREF
  void *src; // [rsp+3A8h] [rbp-618h] BYREF
  size_t n; // [rsp+3B0h] [rbp-610h]
  __int64 v360; // [rsp+3B8h] [rbp-608h]
  void *v361; // [rsp+3C8h] [rbp-5F8h]
  __int16 v362; // [rsp+3E8h] [rbp-5D8h]
  void (__fastcall *v363)(__m128i *, __m128i *, __int64); // [rsp+4C8h] [rbp-4F8h]
  __int64 v364; // [rsp+4D0h] [rbp-4F0h]
  void (__fastcall *v365)(__m128i *, __m128i *, __int64); // [rsp+4E8h] [rbp-4D8h]
  __int64 v366; // [rsp+4F0h] [rbp-4D0h]
  char v367; // [rsp+4F8h] [rbp-4C8h]
  __m128i ptr[2]; // [rsp+508h] [rbp-4B8h] BYREF
  __int128 v369; // [rsp+528h] [rbp-498h]
  __int128 v370; // [rsp+538h] [rbp-488h]
  __int128 v371; // [rsp+548h] [rbp-478h]
  _DWORD v372[4]; // [rsp+558h] [rbp-468h] BYREF
  void *v373[2]; // [rsp+568h] [rbp-458h] BYREF
  _BYTE v374[16]; // [rsp+578h] [rbp-448h] BYREF
  _QWORD v375[18]; // [rsp+588h] [rbp-438h] BYREF
  __m128i v376; // [rsp+618h] [rbp-3A8h] BYREF
  void (__fastcall *v377)(__m128i *, __m128i *, __int64); // [rsp+628h] [rbp-398h]
  __int64 v378; // [rsp+630h] [rbp-390h]
  __m128i v379; // [rsp+638h] [rbp-388h] BYREF
  void (__fastcall *v380)(__m128i *, __m128i *, __int64); // [rsp+648h] [rbp-378h]
  __int64 v381; // [rsp+650h] [rbp-370h]
  __int64 v382; // [rsp+660h] [rbp-360h]
  __int16 v383; // [rsp+668h] [rbp-358h]
  __int128 v384; // [rsp+670h] [rbp-350h]
  __int128 v385; // [rsp+680h] [rbp-340h]
  void *v386[2]; // [rsp+698h] [rbp-328h] BYREF
  __int64 v387; // [rsp+6A8h] [rbp-318h]
  __int64 *v388; // [rsp+6B0h] [rbp-310h] BYREF
  __int64 v389; // [rsp+6B8h] [rbp-308h]
  __int64 v390; // [rsp+6C0h] [rbp-300h] BYREF
  void **v391; // [rsp+6F8h] [rbp-2C8h] BYREF
  __int64 v392; // [rsp+700h] [rbp-2C0h]
  __int64 v393; // [rsp+708h] [rbp-2B8h] BYREF
  __m128i v394; // [rsp+7A8h] [rbp-218h] BYREF
  void (__fastcall *v395)(__m128i *, __m128i *, __int64); // [rsp+7B8h] [rbp-208h]
  __int64 v396; // [rsp+7C0h] [rbp-200h]
  __m128i v397; // [rsp+7C8h] [rbp-1F8h] BYREF
  void (__fastcall *v398)(__m128i *, __m128i *, __int64); // [rsp+7D8h] [rbp-1E8h]
  __int64 v399; // [rsp+7E0h] [rbp-1E0h]
  _BYTE *v400; // [rsp+7E8h] [rbp-1D8h] BYREF
  __int64 v401; // [rsp+7F0h] [rbp-1D0h]
  _BYTE v402[192]; // [rsp+7F8h] [rbp-1C8h] BYREF
  __int64 v403; // [rsp+8B8h] [rbp-108h] BYREF
  char v404; // [rsp+978h] [rbp-48h]

  v6 = (__int64 *)v386;
  v321 = a3;
  v318 = a2;
  v388 = &v390;
  v389 = 0x100000000LL;
  v392 = 0x100000000LL;
  v401 = 0x100000000LL;
  v391 = (void **)&v393;
  ptr[0].m128i_i64[0] = (__int64)&ptr[1].m128i_i64[1];
  v400 = v402;
  *(_OWORD *)v386 = 0;
  v387 = 0;
  v395 = nullptr;
  v398 = nullptr;
  v404 = 0;
  *(__m128i *)((char *)ptr + 8) = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  LODWORD(src) = 2923;
  p_src = &src;
  v7 = sub_21B6DA0(a4, &src, 1);
  v8 = *(_QWORD *)(a4 + 8);
  v9 = (_QWORD *)(v8 + 8LL * (unsigned int)v7);
  v10 = (_QWORD *)(v8 + 8 * HIDWORD(v7));
  if ( v9 == v10 )
    goto LABEL_5;
  while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 2923) )
  {
    if ( v10 == ++v9 )
      goto LABEL_5;
  }
  if ( v10 == v9 )
  {
LABEL_5:
    sub_117E990(p_src, (__int64)v318, 0);
    v11 = src;
    v12 = n;
    v13 = 0;
    ptr[0].m128i_i64[1] = 0;
    if ( n > ptr[1].m128i_i64[0] )
    {
      sub_2236E10(ptr, &ptr[1].m128i_u64[1], n, 1);
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
    LOWORD(v361) = 262;
    src = "multilib.yaml";
    v351 = 257;
    LOWORD(v355) = 257;
    LOWORD(v357[4]) = 257;
    n = 13;
    v320 = v357;
    sub_228A3B0(ptr, p_src, v357, &v352, v348);
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
      while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 2923) )
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
        sub_2236E10(ptr, &ptr[1].m128i_u64[1], v19, 1);
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
    v22 = v318[1];
    v23 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v22 + 96LL);
    LOWORD(v361) = 261;
    src = v21;
    n = v20;
    v320 = v357;
    if ( !v23(v22, p_src) )
    {
      sub_FC70B0((__int64)p_src, *v318, 0, 443);
      sub_AEC220((unsigned __int8 **)p_src, ptr[0].m128i_i64[0], ptr[0].m128i_i64[1]);
      if ( (_BYTE)v362 )
      {
        sub_FC7790(v360, (__int64 *)p_src, SHIBYTE(v362));
        v360 = 0;
        v362 = 0;
      }
      if ( v361 != p_src + 6 )
        operator delete(v361);
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
      v320 = v357;
      memset(v357, 0, sizeof(v357));
      v25 = (__m128i *)ptr[0].m128i_i64[0];
      if ( (unsigned __int64 *)ptr[0].m128i_i64[0] == &ptr[1].m128i_u64[1] )
        goto LABEL_203;
      goto LABEL_27;
    }
  }
  v24 = (void *)ptr[0].m128i_i64[1];
  v25 = (__m128i *)ptr[0].m128i_i64[0];
  *(__m128i *)&v357[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v357[0] = v320 + 3;
  if ( !ptr[0].m128i_i64[1] )
  {
LABEL_26:
    LOBYTE(v357[19]) = 1;
    if ( v25 == (__m128i *)&ptr[1].m128i_u64[1] )
      goto LABEL_28;
LABEL_27:
    free(v25);
    if ( LOBYTE(v357[19]) )
      goto LABEL_28;
LABEL_203:
    if ( v404 )
      sub_110AEF0((__int64)&v403);
    v106 = (__int64)v400;
    v107 = (__int64)&v400[192 * (unsigned int)v401];
    if ( v400 != (_BYTE *)v107 )
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
      v107 = (__int64)v400;
    }
    if ( (_BYTE *)v107 != v402 )
      free((void *)v107);
    sub_117EEA0((__int64 *)v386);
    return;
  }
  if ( (unsigned __int64 *)ptr[0].m128i_i64[0] == &ptr[1].m128i_u64[1] )
  {
    v129 = ptr[0].m128i_u64[1];
    v130 = v320 + 3;
    if ( ptr[0].m128i_i64[1] <= 0x80uLL
      || (sub_2236E10(v320, v320 + 3, ptr[0].m128i_i64[1], 1),
          v129 = ptr[0].m128i_u64[1],
          v130 = v357[0],
          v25 = (__m128i *)ptr[0].m128i_i64[0],
          ptr[0].m128i_i64[1]) )
    {
      memcpy(v130, v25, v129);
      v25 = (__m128i *)ptr[0].m128i_i64[0];
    }
    v357[1] = v24;
    ptr[0].m128i_i64[1] = 0;
    goto LABEL_26;
  }
  v357[0] = (void *)ptr[0].m128i_i64[0];
  *(__m128i *)&v357[1] = *(__m128i *)((char *)ptr + 8);
  LOBYTE(v357[19]) = 1;
LABEL_28:
  v26 = v318[1];
  v27 = *(unsigned __int8 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v26 + 96LL);
  ptr[0] = *(__m128i *)v357;
  LOWORD(v369) = 261;
  if ( v27(v26, ptr) )
  {
    sub_117E990(ptr, (__int64)v318, 0);
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
        v321 = (void *)ptr[1].m128i_i64[0];
        a1[311].m128i_i64[1] = ptr[0].m128i_i64[0];
        a1[312] = (__m128i)_mm_loadh_ps((const double *)&v321);
      }
      else
      {
        v321 = (void *)ptr[1].m128i_i64[0];
        v29 = a1[312].m128i_i64[1];
        a1[311].m128i_i64[1] = ptr[0].m128i_i64[0];
        a1[312] = (__m128i)_mm_loadh_ps((const double *)&v321);
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
    v321 = v348;
    v348[0] = &v349;
    v348[1] = (void *)0x300000000LL;
    LOWORD(v369) = 261;
    v30 = v318[1];
    ptr[0] = *(__m128i *)v357;
    v322 = (__int64 *)v338;
    sub_225D6F0((unsigned int)v338, v30, (unsigned int)ptr, -1, 1, 0, 1);
    if ( (v339 & 1) != 0 )
      goto LABEL_44;
    sub_1135F20((__int64)v340, (__int64)a1, a4);
    sub_2231100(ptr, v338[0]);
    sub_1115160((__m128i *)p_src, 0, 0, v31, v32, v33, (__int128)ptr[0], (__int128)ptr[1]);
    if ( (v367 & 1) == 0 || !(_DWORD)src )
    {
      sub_117F8A0((__int64 *)v386, (__int64 *)p_src);
      sub_1180210((__int64)&v388, (__int64)(p_src + 3));
      sub_1180630((__int64)&v391, (__int64)(p_src + 12));
      v116 = v363;
      ptr[1].m128i_i64[0] = 0;
      v117 = ptr[1].m128i_i64[1];
      if ( v363 )
      {
        v363(ptr, (__m128i *)p_src + 17, 2);
        v117 = v364;
        v116 = v363;
      }
      si128 = _mm_load_si128(ptr);
      v119 = v395;
      v395 = v116;
      v120 = _mm_load_si128(&v394);
      v121 = v396;
      v396 = v117;
      v394 = si128;
      ptr[0] = v120;
      ptr[1].m128i_i64[0] = (__int64)v119;
      ptr[1].m128i_i64[1] = v121;
      if ( v119 )
        v119(ptr, ptr, 3);
      v122 = v365;
      v123 = ptr[1].m128i_i64[1];
      ptr[1].m128i_i64[0] = 0;
      if ( v365 )
      {
        v365(ptr, (__m128i *)p_src + 19, 2);
        v123 = v366;
        v122 = v365;
      }
      v124 = _mm_load_si128(ptr);
      v125 = v398;
      v398 = v122;
      v126 = _mm_load_si128(&v397);
      v127 = v399;
      v399 = v123;
      v397 = v124;
      ptr[0] = v126;
      ptr[1].m128i_i64[0] = (__int64)v125;
      ptr[1].m128i_i64[1] = v127;
      if ( v125 )
        v125(ptr, ptr, 3);
      if ( !(unsigned __int8)sub_1110810((__int64)v386, v318, (__int64)v340, (__int64 *)&v400, (__int64)v321) )
      {
        v131 = *v318;
        v324 = (unsigned __int8 **)&v352;
        sub_FC70B0((__int64)&v352, v131, 0, 567);
        v132 = j__strlen(" ");
        v133 = (char *)v340[1];
        v134 = v345;
        v135 = v132;
        v343 = v345;
        v326 = &v343;
        v344 = 0;
        LOBYTE(v345[0]) = 0;
        if ( v340[1] == v340[0] )
        {
          v154 = 0;
        }
        else
        {
          v136 = v340[0];
          v137 = v135 * ((((char *)v340[1] - (char *)v340[0]) >> 5) - 1);
          do
          {
            v137 += v136[1];
            v136 += 4;
          }
          while ( v340[1] != v136 );
          v138 = v326;
          v139 = (char *)v340[0] + 32;
          sub_995C30((__int64)v326, v137);
          sub_9EE560(v138, *((_BYTE **)v139 - 4), *((_QWORD *)v139 - 3));
          if ( v133 != v139 )
          {
            v140 = v344;
            if ( v135 > 0x7FFFFFFFFFFFFFFFLL - v344 )
LABEL_524:
              std::__throw_length_error("basic_string::append");
            s1 = v386;
            v141 = v135;
            v323 = 0x7FFFFFFFFFFFFFFFLL;
            v142 = v326 + 2;
            v325 = (void **)a1;
            v143 = v326;
            while ( 1 )
            {
              v145 = v343;
              v152 = v141 + v140;
              v153 = v343 == v142 ? 15LL : v345[0];
              if ( v152 <= v153 )
              {
                if ( v141 )
                {
                  v144 = (char *)v343 + v140;
                  if ( v141 == 1 )
                    *v144 = 32;
                  else
                    memcpy(v144, " ", v141);
                  v145 = v343;
                }
              }
              else
              {
                sub_998B30((__int64)v143, v140, 0, " ", v141);
                v145 = v343;
              }
              v344 = v141 + v140;
              v145[v152] = 0;
              v146 = *((_QWORD *)v139 + 1);
              v147 = v343;
              v148 = *(_BYTE **)v139;
              v149 = v146 + v344;
              v150 = v343 == v142 ? 15LL : v345[0];
              if ( v149 > v150 )
              {
                sub_998B30((__int64)v143, v344, 0, v148, v146);
                v147 = v343;
              }
              else if ( v146 )
              {
                v151 = (char *)v343 + v344;
                if ( v146 == 1 )
                  *v151 = *v148;
                else
                  memcpy(v151, *(const void **)v139, *((_QWORD *)v139 + 1));
                v147 = v343;
              }
              v139 += 32;
              v344 = v149;
              v147[v149] = 0;
              if ( v133 == v139 )
                break;
              v140 = v344;
              if ( v141 > v323 - v344 )
                goto LABEL_524;
            }
            a1 = (__m128i *)v325;
            v6 = (__int64 *)s1;
          }
          v134 = v343;
          v154 = v344;
        }
        sub_AEC220(v324, v134, v154);
        if ( v343 != v326 + 2 )
          operator delete(v343);
        sub_AEA040((__int64)v324);
        std::ios_base::ios_base((std::ios_base *)v375);
        v383 = 0;
        v155 = (void **)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
        v384 = 0;
        v156 = (void *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
        v385 = 0;
        v375[0] = (char *)&`vtable for'std::ios + 16;
        v157 = (__int64)*(v155 - 3);
        ptr[0].m128i_i64[0] = (__int64)v155;
        v382 = 0;
        *(__int64 *)((char *)ptr[0].m128i_i64 + v157) = (__int64)v156;
        ptr[0].m128i_i64[1] = 0;
        v158 = (__int64)*(v155 - 3);
        s1 = v156;
        v326 = v155;
        std::ios::init((char *)ptr + v158, 0);
        ptr[1].m128i_i64[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
        v328 = ptr[1].m128i_i64[0];
        v159 = (__int64 *)((char *)ptr[1].m128i_i64 + *(_QWORD *)(ptr[1].m128i_i64[0] - 24));
        v160 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
        *v159 = v160;
        v329 = v160;
        std::ios::init(v159, 0);
        v161 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
        v330 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
        v162 = *(_QWORD *)(v330 - 24);
        v331 = v161;
        *(__int64 *)((char *)ptr[0].m128i_i64 + v162) = v161;
        v369 = 0;
        v370 = 0;
        ptr[0].m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                            + 24;
        v371 = 0;
        v375[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
        ptr[1].m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                            + 64;
        ptr[1].m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
        std::locale::locale((std::locale *)v372);
        v372[2] = 24;
        v374[0] = 0;
        ptr[1].m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
        v373[0] = v374;
        v373[1] = nullptr;
        std::ios::init(v375, &ptr[1].m128i_u64[1]);
        v163 = v386[0];
        v325 = v346;
        v323 = (__int64)v386[1];
        if ( v386[0] != v386[1] )
        {
          v332 = a1;
          v333 = v6;
          do
          {
            if ( !*((_BYTE *)v163 + 184) )
            {
              std::__ostream_insert<char,std::char_traits<char>>(&ptr[1], "\n", 1);
              v164 = v163[13];
              v165 = v163[12];
              v166 = v347;
              v346[0] = v347;
              v346[1] = nullptr;
              LOBYTE(v347[0]) = 0;
              if ( v164 == v165 )
              {
                v179 = nullptr;
              }
              else
              {
                v167 = v165;
                v168 = ((v164 - v165) >> 5) - 1;
                do
                {
                  v168 += *(_QWORD *)(v167 + 8);
                  v167 += 32;
                }
                while ( v164 != v167 );
                v169 = v165 + 32;
                sub_995C30((__int64)v346, v168);
                sub_9EE560(v346, *(_BYTE **)(v169 - 32), *(_QWORD *)(v169 - 24));
                if ( v164 != v169 )
                {
                  v170 = (char *)v346[1];
                  if ( v346[1] == (void *)0x7FFFFFFFFFFFFFFFLL )
                    goto LABEL_524;
                  while ( 1 )
                  {
                    v177 = v170 + 1;
                    v178 = v346[0] == v347 ? 15LL : v347[0];
                    if ( (unsigned __int64)v177 <= v178 )
                      *((_BYTE *)v346[0] + (unsigned __int64)v170) = 32;
                    else
                      sub_998B30((__int64)v346, (size_t)v170, 0, " ", 1u);
                    v346[1] = v170 + 1;
                    *((_BYTE *)v346[0] + (unsigned __int64)v177) = 0;
                    v171 = *(_QWORD *)(v169 + 8);
                    v172 = v346[0];
                    v173 = *(_BYTE **)v169;
                    v174 = (char *)v346[1] + v171;
                    v175 = v346[0] == v347 ? 15LL : v347[0];
                    if ( (unsigned __int64)v174 > v175 )
                    {
                      sub_998B30((__int64)v346, (size_t)v346[1], 0, v173, v171);
                      v172 = v346[0];
                    }
                    else if ( v171 )
                    {
                      v176 = (char *)v346[1] + (unsigned __int64)v346[0];
                      if ( v171 == 1 )
                        *v176 = *v173;
                      else
                        memcpy(v176, *(const void **)v169, *(_QWORD *)(v169 + 8));
                      v172 = v346[0];
                    }
                    v169 += 32;
                    v346[1] = v174;
                    v174[(_QWORD)v172] = 0;
                    if ( v164 == v169 )
                      break;
                    v170 = (char *)v346[1];
                    if ( v346[1] == (void *)0x7FFFFFFFFFFFFFFFLL )
                      goto LABEL_524;
                  }
                }
                v179 = v346[1];
                v166 = v346[0];
              }
              std::__ostream_insert<char,std::char_traits<char>>(&ptr[1], v166, v179);
              if ( v346[0] != v347 )
                operator delete(v346[0]);
            }
            v163 += 24;
          }
          while ( (_QWORD *)v323 != v163 );
          a1 = v332;
          v6 = v333;
        }
        sub_FC70B0((__int64)v324, *v318, 0, 522);
        v346[1] = nullptr;
        LOBYTE(v347[0]) = 0;
        v346[0] = v325 + 2;
        if ( (_QWORD)v371 )
        {
          if ( (unsigned __int64)v371 <= (unsigned __int64)v370 )
            sub_99BDC0(v325, 0, 0, *((_BYTE **)&v370 + 1), v370 - *((_QWORD *)&v370 + 1));
          else
            sub_99BDC0(v325, 0, 0, *((_BYTE **)&v370 + 1), v371 - *((_QWORD *)&v370 + 1));
        }
        else
        {
          sub_9EE8A0((__int64)v325, (__int64)v373);
        }
        sub_AEC220(v324, (_BYTE *)v346[0], (signed __int64)v346[1]);
        if ( v346[0] != v325 + 2 )
          operator delete(v346[0]);
        v180 = v324;
        sub_AEA040((__int64)v324);
        v323 = (__int64)(v180 + 6);
        v181 = &v400[192 * (unsigned int)v401];
        if ( v400 != v181 )
        {
          v332 = (__m128i *)v6;
          v182 = (__int64)v400;
          v183 = v324;
          v325 = (void **)a1;
          do
          {
            if ( *(_BYTE *)(v182 + 184) )
            {
              sub_FC70B0((__int64)v183, *v318, 0, 426);
              if ( !*(_BYTE *)(v182 + 184) )
                abort();
              sub_AEC220(v183, *(_BYTE **)(v182 + 152), *(_QWORD *)(v182 + 160));
              if ( (_BYTE)v356 )
              {
                sub_FC7790(v354, (__int64 *)v183, SHIBYTE(v356));
                v354 = 0;
                v356 = 0;
              }
              if ( v355 != (void *)v323 )
                operator delete(v355);
              v184 = (void **)v352;
              if ( v352 )
              {
                v185 = v353;
                if ( v353 )
                {
                  if ( (unsigned __int64)v352 < v353 || (unsigned __int64)v352 > v353 + 14848 )
                  {
                    v186 = *((void ***)v352 + 66);
                    v187 = &v186[8 * (unsigned __int64)*((unsigned int *)v352 + 134)];
                    if ( v186 != v187 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v187 -= 8;
                          v188 = (void **)v187[3];
                          if ( v188 == v187 + 5 )
                            break;
                          operator delete(v188);
                          if ( v186 == v187 )
                            goto LABEL_349;
                        }
                      }
                      while ( v186 != v187 );
LABEL_349:
                      v187 = (void **)v184[66];
                    }
                    if ( v187 != v184 + 68 )
                      free(v187);
                    v189 = (void **)v184[52];
                    if ( v189 != v184 + 54 )
                      free(v189);
                    v190 = v184 + 48;
                    v191 = v184 + 8;
                    do
                    {
                      while ( *v190 != v190 + 2 )
                      {
                        operator delete(*v190);
                        v190 -= 4;
                        if ( v190 == v191 )
                          goto LABEL_357;
                      }
                      v190 -= 4;
                    }
                    while ( v191 != v190 );
LABEL_357:
                    operator delete(v184, 0x3A0u);
                  }
                  else
                  {
                    v203 = *(unsigned int *)(v353 + 14976);
                    *(_DWORD *)(v353 + 14976) = v203 + 1;
                    *(_QWORD *)(v185 + 8 * v203 + 14848) = v184;
                  }
                }
              }
            }
            v182 += 192;
          }
          while ( v181 != (_BYTE *)v182 );
          v192 = (__int64)v400;
          a1 = (__m128i *)v325;
          v6 = (__int64 *)v332;
          v193 = &v400[192 * (unsigned int)v401];
          while ( (_BYTE *)v192 != v193 )
          {
            while ( 1 )
            {
              v193 -= 192;
              if ( v193[184] )
              {
                v194 = *((_BYTE **)v193 + 19);
                if ( v194 != v193 + 168 )
                  operator delete(v194);
              }
              v195 = *((_BYTE **)v193 + 15);
              if ( v195 != v193 + 136 )
                operator delete(v195);
              v196 = *((void ***)v193 + 12);
              v197 = *((void ***)v193 + 13);
              v198 = v196;
              if ( v197 != v196 )
              {
                do
                {
                  while ( *v198 != v198 + 2 )
                  {
                    operator delete(*v198);
                    v198 += 4;
                    if ( v198 == v197 )
                      goto LABEL_372;
                  }
                  v198 += 4;
                }
                while ( v197 != v198 );
LABEL_372:
                v196 = *((void ***)v193 + 12);
              }
              if ( v196 )
                operator delete(v196);
              v199 = *((_BYTE **)v193 + 8);
              if ( v199 != v193 + 80 )
                operator delete(v199);
              v200 = *((_BYTE **)v193 + 4);
              if ( v200 != v193 + 48 )
                operator delete(v200);
              if ( *(_BYTE **)v193 == v193 + 16 )
                break;
              operator delete(*(void **)v193);
              if ( (_BYTE *)v192 == v193 )
                goto LABEL_381;
            }
          }
        }
LABEL_381:
        LODWORD(v401) = 0;
        ptr[0].m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                            + 24;
        v375[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
        v318 = (__int64 *)((char *)&`vtable for'std::stringbuf + 16);
        ptr[1] = (__m128i)_mm_loadh_ps((const double *)&v318);
        if ( v373[0] != v374 )
          operator delete(v373[0]);
        ptr[1].m128i_i64[1] = (__int64)&`vtable for'std::streambuf + 16;
        std::locale::~locale((std::locale *)v372);
        *(__int64 *)((char *)ptr[0].m128i_i64 + *(_QWORD *)(v330 - 24)) = v331;
        ptr[1].m128i_i64[0] = v328;
        *(__int64 *)((char *)ptr[1].m128i_i64 + *(_QWORD *)(v328 - 24)) = v329;
        ptr[0].m128i_i64[0] = (__int64)v326;
        *(__int64 *)((char *)ptr[0].m128i_i64 + (_QWORD)*(v326 - 3)) = (__int64)s1;
        ptr[0].m128i_i64[1] = 0;
        v375[0] = (char *)&`vtable for'std::ios + 16;
        std::ios_base::~ios_base((std::ios_base *)v375);
        if ( (v367 & 1) == 0 )
          sub_117EEA0((__int64 *)p_src);
        v201 = (void **)v340[1];
        v35 = (void **)v340[0];
        if ( v340[1] == v340[0] )
          goto LABEL_42;
        while ( 1 )
        {
          v202 = *v35;
          if ( *v35 != v35 + 2 )
            break;
LABEL_389:
          v35 += 4;
          if ( v201 == v35 )
            goto LABEL_41;
        }
        while ( 1 )
        {
          operator delete(v202);
          v35 += 4;
          if ( v35 == v201 )
            goto LABEL_41;
          v202 = *v35;
          if ( *v35 == v35 + 2 )
            goto LABEL_389;
        }
      }
      if ( (v367 & 1) == 0 )
        sub_117EEA0((__int64 *)p_src);
    }
    v34 = (void **)v340[1];
    v35 = (void **)v340[0];
    if ( v340[1] == v340[0] )
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
    v35 = (void **)v340[0];
LABEL_42:
    if ( v35 )
      operator delete(v35);
LABEL_44:
    sub_FC2AF0(v322);
    sub_1183BF0((__int64)a1[136].m128i_i64, (__int64)(v6 + 42));
    sub_117F8A0(a1[115].m128i_i64, v6);
    sub_1180210((__int64)&a1[116].m128i_i64[1], (__int64)(v6 + 3));
    sub_1180630((__int64)a1[121].m128i_i64, (__int64)(v6 + 12));
    v36 = v395;
    ptr[1].m128i_i64[0] = 0;
    v37 = ptr[1].m128i_i64[1];
    if ( v395 )
    {
      v395(ptr, (__m128i *)v6 + 17, 2);
      v37 = v396;
      v36 = v395;
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
    v42 = v398;
    v43 = ptr[1].m128i_i64[1];
    ptr[1].m128i_i64[0] = 0;
    if ( v398 )
    {
      v398(ptr, (__m128i *)v6 + 19, 2);
      v43 = v399;
      v42 = v398;
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
    v48 = (char *)v348[0];
    v49 = a1[314].m128i_u32[2];
    v50 = 16LL * LODWORD(v348[1]);
    v51 = (char *)v348[0] + v50;
    v52 = v50 >> 4;
    if ( v52 + v49 > (unsigned __int64)a1[314].m128i_u32[3] )
    {
      sub_A8C1F0((__int64)a1[314].m128i_i64, v52 + v49);
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
        sub_117E5C0(v56, v55, (__int64)&v55[v54]);
      }
      while ( v51 != v48 );
      LODWORD(v49) = a1[314].m128i_i32[2];
    }
    v57 = v49 + v52;
    v58 = (char *)v321;
    v59 = (char *)v348[0];
    a1[314].m128i_i32[2] = v57;
    if ( v59 != v58 + 16 )
      free(v59);
    goto LABEL_59;
  }
  LODWORD(v322) = *((_DWORD *)v321 + 8);
  if ( (unsigned int)((_DWORD)v322 - 27) <= 1 && !*((_DWORD *)v321 + 10) && !*((_DWORD *)v321 + 11) )
  {
    v86 = j__strlen("elf");
    v87 = (const void *)sub_22B76B0(v321);
    if ( v86 == v88 && (!v86 || !memcmp(v87, "elf", v86)) )
    {
      v89 = sub_117E470((__int64)v318);
      if ( !v89 )
      {
        *(_OWORD *)v334 = 0;
        v322 = (__int64 *)v338;
        v335 = 0;
        sub_11598D0((__m128i **)v338, a4, v321);
        s1 = sub_115A2B0(a4, v321);
        v90 = *((_DWORD *)v321 + 8);
        v92 = v91;
        if ( v90 != 28 )
        {
          if ( v90 != 27 )
          {
LABEL_148:
            if ( v338[0] != v322 + 2 )
              operator delete(v338[0]);
            v93 = (void **)v334[1];
            v94 = (void **)v334[0];
            if ( v334[1] != v334[0] )
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
              v94 = (void **)v334[0];
            }
            if ( v94 )
              operator delete(v94);
            if ( v89 )
            {
              sub_1183BF0((__int64)a1[136].m128i_i64, (__int64)&v400);
              sub_11809E0(a1 + 115, (__int64 *)v386);
            }
            goto LABEL_59;
          }
          sub_111A340((__int64)ptr, nullptr, 0);
          v250 = j__strlen("-march=rv32imac");
          v251 = sub_1117D00((__int64)ptr, (__int64)"-march=rv32imac", v250, 0);
          v252 = j__strlen("-mabi=ilp32");
          v253 = sub_1117D00(v251, (__int64)"-mabi=ilp32", v252, 0);
          v326 = &v343;
          sub_117F2D0((__int64)&v343, v253);
          sub_117F230((__int64)ptr);
          v254 = j__strlen("/rv32i/ilp32");
          sub_111A340((__int64)ptr, "/rv32i/ilp32", v254);
          v255 = j__strlen("-march=rv32i");
          v256 = sub_1117D00((__int64)ptr, (__int64)"-march=rv32i", v255, 0);
          v257 = j__strlen("-mabi=ilp32");
          v258 = sub_1117D00(v256, (__int64)"-mabi=ilp32", v257, 0);
          v325 = v346;
          sub_117F2D0((__int64)v346, v258);
          sub_117F230((__int64)ptr);
          v259 = j__strlen("/rv32im/ilp32");
          sub_111A340((__int64)ptr, "/rv32im/ilp32", v259);
          v260 = j__strlen("-march=rv32im");
          v261 = sub_1117D00((__int64)ptr, (__int64)"-march=rv32im", v260, 0);
          v262 = j__strlen("-mabi=ilp32");
          v263 = sub_1117D00(v261, (__int64)"-mabi=ilp32", v262, 0);
          v321 = v348;
          sub_117F2D0((__int64)v348, v263);
          sub_117F230((__int64)ptr);
          v264 = j__strlen("/rv32iac/ilp32");
          sub_111A340((__int64)ptr, "/rv32iac/ilp32", v264);
          v265 = j__strlen("-march=rv32iac");
          v266 = sub_1117D00((__int64)ptr, (__int64)"-march=rv32iac", v265, 0);
          v267 = j__strlen("-mabi=ilp32");
          v268 = sub_1117D00(v266, (__int64)"-mabi=ilp32", v267, 0);
          v324 = (unsigned __int8 **)&v352;
          sub_117F2D0((__int64)&v352, v268);
          sub_117F230((__int64)ptr);
          v269 = j__strlen("/rv32imafc/ilp32f");
          sub_111A340((__int64)ptr, "/rv32imafc/ilp32f", v269);
          v270 = j__strlen("-march=rv32imafc");
          v271 = sub_1117D00((__int64)ptr, (__int64)"-march=rv32imafc", v270, 0);
          v272 = j__strlen("-mabi=ilp32f");
          v273 = v271;
          v274 = 1;
          v275 = sub_1117D00(v273, (__int64)"-mabi=ilp32f", v272, 0);
          sub_117F2D0((__int64)p_src, v275);
          sub_117F230((__int64)ptr);
          if ( sub_9B4AA0((__int64)v322, "rv32i") )
            v274 = sub_9B4AA0((__int64)v322, "rv32ic") == 0;
          v276 = 1;
          if ( sub_9B4AA0((__int64)v322, "rv32im") )
            v276 = sub_9B4AA0((__int64)v322, "rv32imc") == 0;
          v277 = 1;
          if ( sub_9B4AA0((__int64)v322, "rv32imafc") && sub_9B4AA0((__int64)v322, "rv32imafdc") )
            v277 = sub_9B4AA0((__int64)v322, "rv32gc") == 0;
          v278 = j__strlen("-march=rv32i");
          v323 = (__int64)v334;
          sub_11C67F0(v274, "-march=rv32i", v278, v334);
          v279 = j__strlen("-march=rv32im");
          sub_11C67F0(v276, "-march=rv32im", v279, v334);
          v280 = j__strlen("-march=rv32iac");
          v281 = sub_9B4AA0((__int64)v322, "rv32iac");
          sub_11C67F0(v281 == 0, "-march=rv32iac", v280, v334);
          v282 = j__strlen("-march=rv32imac");
          v283 = sub_9B4AA0((__int64)v322, "rv32imac");
          sub_11C67F0(v283 == 0, "-march=rv32imac", v282, v334);
          v284 = j__strlen("-march=rv32imafc");
          sub_11C67F0(v277, "-march=rv32imafc", v284, v334);
          v285 = j__strlen("-mabi=ilp32");
          if ( j__strlen("ilp32") == v92 )
          {
            if ( v92 )
            {
              v286 = memcmp(s1, "ilp32", v92);
              sub_11C67F0(v286 == 0, "-mabi=ilp32", v285, v334);
              v287 = j__strlen("-mabi=ilp32f");
              if ( j__strlen("ilp32f") == v92 )
              {
LABEL_463:
                v288 = memcmp(s1, "ilp32f", v92) == 0;
LABEL_464:
                sub_11C67F0(v288, "-mabi=ilp32f", v287, v323);
                *(_OWORD *)v336 = 0;
                v337 = 0;
                v289 = sub_111BCA0(
                         (__int64 *)v336,
                         (__int64)v325,
                         (__int64)v321,
                         (__int64)v324,
                         (__int64)v326,
                         (__int64)p_src);
                sub_11187A0((__int64)ptr, v289);
                v290 = (char *)v386[0];
                v291 = (char *)v386[1];
                *(__m128i *)v386 = ptr[0];
                v292 = v290;
                s1 = v290;
                memset(ptr, 0, 24);
                v387 = ptr[1].m128i_i64[0];
                if ( v290 != v291 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      if ( v292[184] )
                      {
                        v293 = *((char **)v292 + 19);
                        if ( v293 != v292 + 168 )
                          operator delete(v293);
                      }
                      v294 = *((char **)v292 + 15);
                      if ( v294 != v292 + 136 )
                        operator delete(v294);
                      v295 = *((void ***)v292 + 13);
                      v296 = *((void ***)v292 + 12);
                      if ( v295 != v296 )
                      {
                        do
                        {
                          while ( *v296 != v296 + 2 )
                          {
                            operator delete(*v296);
                            v296 += 4;
                            if ( v295 == v296 )
                              goto LABEL_473;
                          }
                          v296 += 4;
                        }
                        while ( v295 != v296 );
LABEL_473:
                        v296 = *((void ***)v292 + 12);
                      }
                      if ( v296 )
                        operator delete(v296);
                      v297 = *((char **)v292 + 8);
                      if ( v297 != v292 + 80 )
                        operator delete(v297);
                      v298 = *((char **)v292 + 4);
                      if ( v298 != v292 + 48 )
                        operator delete(v298);
                      if ( *(char **)v292 == v292 + 16 )
                        break;
                      operator delete(*(void **)v292);
                      v292 += 192;
                      if ( v291 == v292 )
                        goto LABEL_482;
                    }
                    v292 += 192;
                  }
                  while ( v291 != v292 );
                }
LABEL_482:
                if ( s1 )
                  operator delete(s1);
                sub_110B1B0((__int64)&v388, (__int64)&ptr[1].m128i_i64[1]);
                sub_1114800((__int64)&v391, (__int64)v373);
                v299 = v377;
                v300 = _mm_load_si128((const __m128i *)v340);
                v377 = nullptr;
                v301 = v378;
                v302 = _mm_load_si128(&v376);
                v376 = v300;
                v303 = _mm_load_si128(&v394);
                v378 = v342;
                v304 = v395;
                v395 = v299;
                *(__m128i *)v340 = v303;
                v394 = v302;
                v341 = v304;
                v342 = v396;
                v396 = v301;
                if ( v304 )
                  v304((__m128i *)v340, (__m128i *)v340, 3);
                v305 = v380;
                v306 = _mm_load_si128((const __m128i *)v340);
                v380 = nullptr;
                v307 = v381;
                v308 = _mm_load_si128(&v379);
                v379 = v306;
                v309 = _mm_load_si128(&v397);
                v381 = v342;
                v310 = v398;
                v398 = v305;
                *(__m128i *)v340 = v309;
                v397 = v308;
                v341 = v310;
                v342 = v399;
                v399 = v307;
                if ( v310 )
                  v310((__m128i *)v340, (__m128i *)v340, 3);
                sub_117EEA0(ptr[0].m128i_i64);
                v311 = (char *)v336[1];
                for ( i = (char *)v336[0]; v311 != i; i += 120 )
                {
                  while ( 1 )
                  {
                    v313 = *((void ***)i + 13);
                    v314 = *((void ***)i + 12);
                    if ( v313 != v314 )
                    {
                      do
                      {
                        while ( *v314 != v314 + 2 )
                        {
                          operator delete(*v314);
                          v314 += 4;
                          if ( v314 == v313 )
                            goto LABEL_492;
                        }
                        v314 += 4;
                      }
                      while ( v313 != v314 );
LABEL_492:
                      v314 = *((void ***)i + 12);
                    }
                    if ( v314 )
                      operator delete(v314);
                    v315 = *((char **)i + 8);
                    if ( v315 != i + 80 )
                      operator delete(v315);
                    v316 = *((char **)i + 4);
                    if ( v316 != i + 48 )
                      operator delete(v316);
                    if ( *(char **)i == i + 16 )
                      break;
                    operator delete(*(void **)i);
                    i += 120;
                    if ( i == v311 )
                      goto LABEL_501;
                  }
                }
LABEL_501:
                if ( v336[0] )
                  operator delete(v336[0]);
                v89 = sub_1110810((__int64)v386, v318, v323, (__int64 *)&v400, 0);
                sub_117F230((__int64)p_src);
                sub_117F230((__int64)v324);
                sub_117F230((__int64)v321);
                sub_117F230((__int64)v325);
                sub_117F230((__int64)v326);
                goto LABEL_148;
              }
LABEL_518:
              v288 = 0;
              goto LABEL_464;
            }
            sub_11C67F0(1, "-mabi=ilp32", v285, v323);
            v287 = j__strlen("-mabi=ilp32f");
            if ( j__strlen("ilp32f") )
              goto LABEL_518;
          }
          else
          {
            sub_11C67F0(0, "-mabi=ilp32", v285, v323);
            v287 = j__strlen("-mabi=ilp32f");
            if ( j__strlen("ilp32f") != v92 )
              goto LABEL_518;
            if ( v92 )
              goto LABEL_463;
          }
          v288 = 1;
          goto LABEL_464;
        }
        sub_111A340((__int64)ptr, nullptr, 0);
        v204 = j__strlen("-march=rv64imac");
        v205 = sub_1117D00((__int64)ptr, (__int64)"-march=rv64imac", v204, 0);
        v206 = j__strlen("-mabi=lp64");
        v207 = sub_1117D00(v205, (__int64)"-mabi=lp64", v206, 0);
        v324 = (unsigned __int8 **)&v352;
        sub_117F2D0((__int64)&v352, v207);
        sub_117F230((__int64)ptr);
        v208 = j__strlen("/rv64imafdc/lp64d");
        sub_111A340((__int64)ptr, "/rv64imafdc/lp64d", v208);
        v209 = j__strlen("-march=rv64imafdc");
        v210 = sub_1117D00((__int64)ptr, (__int64)"-march=rv64imafdc", v209, 0);
        v211 = j__strlen("-mabi=lp64d");
        v212 = v210;
        v213 = 1;
        v214 = sub_1117D00(v212, (__int64)"-mabi=lp64d", v211, 0);
        sub_117F2D0((__int64)p_src, v214);
        sub_117F230((__int64)ptr);
        if ( sub_9B4AA0((__int64)v322, "rv64imafdc") )
          v213 = sub_9B4AA0((__int64)v322, "rv64gc") == 0;
        v215 = j__strlen("-march=rv64imac");
        v216 = sub_9B4AA0((__int64)v322, "rv64imac");
        v323 = (__int64)v334;
        sub_11C67F0(v216 == 0, "-march=rv64imac", v215, v334);
        v217 = j__strlen("-march=rv64imafdc");
        sub_11C67F0(v213, "-march=rv64imafdc", v217, v334);
        v218 = j__strlen("-mabi=lp64");
        if ( j__strlen("lp64") == v92 )
        {
          if ( v92 )
          {
            v219 = memcmp(s1, "lp64", v92);
            sub_11C67F0(v219 == 0, "-mabi=lp64", v218, v334);
            v220 = j__strlen("-mabi=lp64d");
            if ( j__strlen("lp64d") == v92 )
            {
LABEL_405:
              v221 = memcmp(s1, "lp64d", v92) == 0;
LABEL_406:
              sub_11C67F0(v221, "-mabi=lp64d", v220, v323);
              *(_OWORD *)v346 = 0;
              v347[0] = 0;
              v222 = sub_111D520((__int64 *)v346, (__int64)v324, (__int64)p_src);
              sub_11187A0((__int64)ptr, v222);
              v223 = (char *)v386[0];
              v224 = (char *)v386[1];
              *(__m128i *)v386 = ptr[0];
              v225 = v223;
              v321 = v223;
              memset(ptr, 0, 24);
              v387 = ptr[1].m128i_i64[0];
              if ( v223 != v224 )
              {
                do
                {
                  while ( 1 )
                  {
                    if ( v225[184] )
                    {
                      v226 = *((char **)v225 + 19);
                      if ( v226 != v225 + 168 )
                        operator delete(v226);
                    }
                    v227 = *((char **)v225 + 15);
                    if ( v227 != v225 + 136 )
                      operator delete(v227);
                    v228 = *((void ***)v225 + 13);
                    v229 = *((void ***)v225 + 12);
                    if ( v228 != v229 )
                    {
                      do
                      {
                        while ( *v229 != v229 + 2 )
                        {
                          operator delete(*v229);
                          v229 += 4;
                          if ( v228 == v229 )
                            goto LABEL_415;
                        }
                        v229 += 4;
                      }
                      while ( v228 != v229 );
LABEL_415:
                      v229 = *((void ***)v225 + 12);
                    }
                    if ( v229 )
                      operator delete(v229);
                    v230 = *((char **)v225 + 8);
                    if ( v230 != v225 + 80 )
                      operator delete(v230);
                    v231 = *((char **)v225 + 4);
                    if ( v231 != v225 + 48 )
                      operator delete(v231);
                    if ( *(char **)v225 == v225 + 16 )
                      break;
                    operator delete(*(void **)v225);
                    v225 += 192;
                    if ( v224 == v225 )
                      goto LABEL_424;
                  }
                  v225 += 192;
                }
                while ( v224 != v225 );
              }
LABEL_424:
              if ( v321 )
                operator delete(v321);
              sub_110B1B0((__int64)&v388, (__int64)&ptr[1].m128i_i64[1]);
              sub_1114800((__int64)&v391, (__int64)v373);
              v232 = v377;
              v233 = _mm_load_si128((const __m128i *)v348);
              v377 = nullptr;
              v234 = v378;
              v235 = _mm_load_si128(&v376);
              v376 = v233;
              v236 = _mm_load_si128(&v394);
              v378 = v350;
              v237 = v395;
              v395 = v232;
              *(__m128i *)v348 = v236;
              v394 = v235;
              v349 = v237;
              v350 = v396;
              v396 = v234;
              if ( v237 )
                v237((__m128i *)v348, (__m128i *)v348, 3);
              v238 = v380;
              v239 = _mm_load_si128((const __m128i *)v348);
              v380 = nullptr;
              v240 = v381;
              v241 = _mm_load_si128(&v379);
              v379 = v239;
              v242 = _mm_load_si128(&v397);
              v381 = v350;
              v243 = v398;
              v398 = v238;
              *(__m128i *)v348 = v242;
              v397 = v241;
              v349 = v243;
              v350 = v399;
              v399 = v240;
              if ( v243 )
                v243((__m128i *)v348, (__m128i *)v348, 3);
              sub_117EEA0(ptr[0].m128i_i64);
              v244 = (char *)v346[1];
              for ( j = (char *)v346[0]; v244 != j; j += 120 )
              {
                while ( 1 )
                {
                  v246 = *((void ***)j + 13);
                  v247 = *((void ***)j + 12);
                  if ( v246 != v247 )
                  {
                    do
                    {
                      while ( *v247 != v247 + 2 )
                      {
                        operator delete(*v247);
                        v247 += 4;
                        if ( v246 == v247 )
                          goto LABEL_434;
                      }
                      v247 += 4;
                    }
                    while ( v246 != v247 );
LABEL_434:
                    v247 = *((void ***)j + 12);
                  }
                  if ( v247 )
                    operator delete(v247);
                  v248 = *((char **)j + 8);
                  if ( v248 != j + 80 )
                    operator delete(v248);
                  v249 = *((char **)j + 4);
                  if ( v249 != j + 48 )
                    operator delete(v249);
                  if ( *(char **)j == j + 16 )
                    break;
                  operator delete(*(void **)j);
                  j += 120;
                  if ( v244 == j )
                    goto LABEL_443;
                }
              }
LABEL_443:
              if ( v346[0] )
                operator delete(v346[0]);
              v89 = sub_1110810((__int64)v386, v318, v323, (__int64 *)&v400, 0);
              sub_117F230((__int64)p_src);
              sub_117F230((__int64)v324);
              goto LABEL_148;
            }
LABEL_513:
            v221 = 0;
            goto LABEL_406;
          }
          sub_11C67F0(1, "-mabi=lp64", v218, v323);
          v220 = j__strlen("-mabi=lp64d");
          if ( j__strlen("lp64d") )
            goto LABEL_513;
        }
        else
        {
          sub_11C67F0(0, "-mabi=lp64", v218, v323);
          v220 = j__strlen("-mabi=lp64d");
          if ( j__strlen("lp64d") != v92 )
            goto LABEL_513;
          if ( v92 )
            goto LABEL_405;
        }
        v221 = 1;
        goto LABEL_406;
      }
    }
  }
LABEL_59:
  if ( LOBYTE(v357[19]) && v357[0] != v320 + 3 )
    free(v357[0]);
  if ( v404 )
    sub_110AEF0((__int64)(v6 + 68));
  v60 = (__int64)v400;
  v61 = (__int64)&v400[192 * (unsigned int)v401];
  if ( v400 != (_BYTE *)v61 )
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
    v61 = (__int64)v400;
  }
  if ( (__int64 *)v61 != v6 + 44 )
    free((void *)v61);
  if ( v398 )
    v398((__m128i *)v6 + 19, (__m128i *)v6 + 19, 3);
  if ( v395 )
    v395((__m128i *)v6 + 17, (__m128i *)v6 + 17, 3);
  v317 = v391;
  v69 = 20LL * (unsigned int)v392;
  v70 = &v391[v69];
  if ( v391 != &v391[v69] )
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
        if ( v317 == v70 )
        {
LABEL_99:
          v70 = v391;
          goto LABEL_100;
        }
      }
      else
      {
        operator delete(*v70);
        if ( v317 == v70 )
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
  v73 = v388;
  v74 = &v388[7 * (unsigned int)v389];
  if ( v388 != v74 )
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
    v74 = v388;
  }
  if ( v74 != v6 + 5 )
    free(v74);
  v78 = (char *)v386[1];
  v79 = (char *)v386[0];
  if ( v386[1] != v386[0] )
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
    v79 = (char *)v386[0];
  }
  if ( v79 )
    operator delete(v79);
}
