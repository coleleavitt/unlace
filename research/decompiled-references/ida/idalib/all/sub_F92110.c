__int64 __fastcall sub_F92110(__int64 a1, char *a2)
{
  int v2; // eax
  __int64 v3; // r8
  int v4; // ecx
  __int64 result; // rax
  char *v6; // rdx
  int v7; // edx
  char *v8; // r9
  __m128i v9; // xmm5
  __int64 **v10; // rax
  char *v11; // rdx
  __int64 **v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __m128i v22; // xmm5
  __int64 *v23; // rax
  __int64 j; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rdi
  __int64 v29; // rsi
  _QWORD *i; // rsi
  std::__detail::_List_node_base *v31; // r15
  std::__detail::_List_node_base *v32; // r14
  __int64 v33; // r12
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // rax
  _QWORD *v38; // rdi
  __int64 k; // rbp
  __int64 v40; // r11
  unsigned int v41; // eax
  _QWORD *v42; // rsi
  __int64 v43; // r12
  char *v44; // r14
  __int64 *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 *v50; // r13
  __int64 *v51; // rax
  char *v52; // r13
  __int64 *v53; // r15
  char *v54; // rbx
  __int64 *v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdi
  __int64 v66; // rbp
  __int64 v67; // rsi
  __int64 **v68; // rbp
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdi
  __int64 **v76; // r14
  __int64 v77; // rcx
  signed __int64 v78; // rax
  __int64 v79; // rdx
  __int64 **v80; // r13
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rax
  _QWORD *v87; // r14
  unsigned __int64 v88; // rax
  _QWORD *v89; // rsi
  __int64 v90; // rbp
  size_t v91; // rbx
  _QWORD *v92; // rax
  unsigned __int64 v93; // rcx
  _QWORD *v94; // rdx
  __int64 v95; // r12
  size_t v96; // r13
  _QWORD *v97; // rax
  unsigned __int64 v98; // rcx
  _QWORD *v99; // rdx
  __int64 v100; // r14
  __int64 v101; // r13
  __int64 v102; // r12
  __int64 v103; // rsi
  __int64 v104; // rcx
  int v105; // r11d
  unsigned int m; // eax
  unsigned int v107; // eax
  void *v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rcx
  int v111; // r11d
  unsigned int ii; // eax
  unsigned int v113; // eax
  __int64 v114; // rsi
  __int64 v115; // rcx
  int v116; // r11d
  unsigned int jj; // eax
  unsigned int v118; // eax
  unsigned __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rsi
  __int64 v125; // rax
  __int64 v126; // rdi
  int v127; // r11d
  unsigned int mm; // eax
  _QWORD *v129; // r10
  unsigned int v130; // eax
  __int64 v131; // rax
  __int64 v132; // rdi
  int v133; // r11d
  _QWORD *v134; // r10
  int v135; // edx
  __int64 v136; // rax
  __int64 v137; // rdi
  int v138; // r11d
  unsigned int kk; // eax
  _QWORD *v140; // r10
  unsigned int v141; // eax
  unsigned __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  unsigned __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rax
  unsigned __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // r8
  __int64 v156; // r9
  unsigned int nn; // edx
  __int64 *v158; // rsi
  int v159; // edx
  void *v160; // rdx
  __int64 v161; // rax
  unsigned __int64 v162; // rax
  char *v163; // rdi
  char *v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rsi
  char *v167; // rsi
  unsigned __int64 v168; // rax
  int *v169; // rsi
  __int64 v170; // rcx
  __int64 v171; // rax
  __m128i v172; // xmm7
  __int64 v173; // rbx
  void **v174; // rax
  void *v175; // r12
  __int64 ***v176; // rax
  __int64 **v177; // rdx
  __int64 *v178; // rax
  char *v179; // rbx
  char *v180; // rbp
  size_t v181; // r12
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // r15
  __m128 *v188; // r15
  __int64 v189; // rax
  __int64 v190; // rbp
  const __m128i *v191; // r14
  const __m128i *v192; // r12
  const __m128i *v193; // r13
  const __m128i *v194; // rbp
  __int64 v195; // r15
  const __m128i *v196; // rax
  __m128i *v197; // rsi
  const __m128i *v198; // rax
  __int64 *v199; // rdx
  int v200; // ecx
  unsigned __int64 v201; // r15
  void *v202; // r13
  unsigned __int64 v203; // r12
  __int64 v204; // rbp
  bool v205; // zf
  __int64 v206; // r9
  _QWORD *m128i_i64; // rax
  void *v208; // r12
  __m128 *v209; // r15
  __int64 v210; // rbp
  __int64 *v211; // r14
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // r8
  __int64 v215; // r9
  __int64 *v216; // r12
  __int64 *v217; // r13
  char *v218; // rax
  __int64 *v219; // r15
  __int64 *v220; // rbx
  char *v221; // r14
  __int64 v222; // rsi
  __int64 v223; // rdx
  unsigned int v224; // eax
  __int64 *v225; // rbp
  __int64 v226; // rdi
  _QWORD *v227; // rdx
  char *v228; // rax
  _QWORD *v229; // r14
  __m128i *v230; // rbp
  _QWORD *v231; // rbp
  __int64 v232; // rsi
  _QWORD *v233; // r12
  _QWORD *v234; // rdi
  const char *v235; // rsi
  __int64 *v236; // r12
  __int64 v237; // rax
  __m128i *v238; // rbp
  __int64 *v239; // rbp
  __int64 *i1; // r13
  __int64 v241; // r12
  __int64 v242; // rbx
  __int64 v243; // rax
  std::__detail::_List_node_base *v244; // rbx
  std::__detail::_List_node_base *v245; // r12
  void *v246; // rdi
  std::__detail::_List_node_base *v247; // rbp
  __m128i *v248; // r15
  __m128i *v249; // r12
  __int64 *v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  __m128i *v253; // rbx
  __int64 v254; // rsi
  __int64 v255; // r9
  __int64 v256; // r14
  __int64 v257; // rax
  __int64 v258; // rsi
  __int64 v259; // rax
  __m128i *v260; // rax
  __int32 v261; // ecx
  __m128i *v262; // rax
  __int64 v263; // rdx
  int v264; // esi
  __int64 v265; // r9
  __int64 v266; // r8
  int v267; // r10d
  int v268; // eax
  int v269; // eax
  int v270; // ecx
  __int64 v271; // rdx
  __int64 v272; // rcx
  __int64 v273; // r8
  int v274; // esi
  __int64 v275; // rdx
  char *v276; // rcx
  char *v277; // rcx
  __int64 *v278; // r13
  __int64 *v279; // rbp
  __int64 *v280; // rbx
  __int64 v281; // r13
  __int64 v282; // rax
  char *v283; // rax
  char *v284; // rsi
  __int64 *v285; // rax
  __int64 v286; // rdx
  size_t v287; // r14
  size_t v288; // r12
  size_t v289; // r15
  char v290; // al
  __int64 v291; // r13
  __int64 v292; // rcx
  char *v293; // r8
  __int64 v294; // r9
  __int64 v295; // rdx
  __int64 *v296; // rsi
  char *v297; // rdi
  size_t *v298; // rax
  int v299; // edx
  size_t v300; // rcx
  __int64 v301; // rdx
  __int64 v302; // rcx
  __int64 v303; // r8
  __int64 v304; // r9
  char v305; // al
  const __m128i *v306; // rax
  __int64 v307; // rax
  __int64 *v308; // r15
  unsigned __int64 *v309; // rax
  unsigned __int64 v310; // rsi
  unsigned __int64 v311; // rdi
  unsigned __int64 v312; // rax
  unsigned int v313; // eax
  __int64 v314; // rax
  _QWORD *v315; // rax
  __m128i *v316; // rbx
  int v317; // ecx
  __m128i *v318; // rax
  __int64 v319; // rcx
  __int64 v320; // r8
  __int64 v321; // r9
  __m128i *v322; // rax
  __int64 v323; // rax
  _BYTE *v324; // rdx
  __int64 v325; // rcx
  __int64 v326; // r8
  __int64 v327; // r9
  char v328; // bl
  const __m128i *v329; // r15
  char *v330; // rbx
  __int64 v331; // r12
  char *v332; // rdi
  char *v333; // rbp
  const __m128i *v334; // rbp
  const __m128i *v335; // r15
  __m128 *v336; // r12
  const __m128i *v337; // rax
  unsigned __int64 v338; // r14
  unsigned __int64 *v339; // rax
  __int64 *v340; // rcx
  char *v341; // r9
  unsigned __int64 v342; // rsi
  __m128i si128; // xmm0
  char *v344; // rax
  size_t v345; // r10
  _QWORD *v346; // rdi
  unsigned __int64 *v347; // rax
  _BYTE *v348; // rax
  __m128 *v349; // r11
  size_t v350; // rdx
  void *v351; // rax
  __m128i v352; // xmm0
  __m128i *v353; // rax
  __int64 v354; // rax
  __int64 v355; // rax
  const char *v356; // rsi
  __int64 v357; // rax
  _QWORD *v358; // r14
  __int64 v359; // r13
  __int64 v360; // rbp
  std::__detail::_List_node_base *v361; // r12
  __int64 v362; // rax
  __int64 v363; // rax
  char *v364; // rax
  __int64 v365; // rax
  __int64 v366; // rax
  _BYTE *v367; // rdx
  __int64 v368; // rax
  __int64 v369; // rax
  _BYTE *v370; // rax
  __int64 v371; // rbx
  int v372; // ebp
  __int64 v373; // rdx
  __int64 v374; // rcx
  __int64 v375; // r8
  __int64 v376; // r9
  _QWORD *v377; // rax
  unsigned int v378; // edx
  unsigned __int64 v379; // rax
  __int64 v380; // [rsp-10h] [rbp-5A8h]
  __int64 v381; // [rsp-8h] [rbp-5A0h]
  __m128 v382; // [rsp+0h] [rbp-598h] BYREF
  __int64 v383; // [rsp+10h] [rbp-588h]
  std::__detail::_List_node_base *v384; // [rsp+18h] [rbp-580h]
  int v385[2]; // [rsp+20h] [rbp-578h]
  __m128 *v386; // [rsp+28h] [rbp-570h]
  __int64 *v387; // [rsp+30h] [rbp-568h] BYREF
  size_t n; // [rsp+38h] [rbp-560h] BYREF
  __int64 *v389; // [rsp+40h] [rbp-558h]
  __int64 *v390; // [rsp+48h] [rbp-550h]
  char *v391; // [rsp+50h] [rbp-548h]
  __int64 *v392; // [rsp+58h] [rbp-540h]
  std::__detail::_List_node_base *v393; // [rsp+60h] [rbp-538h]
  char *v394; // [rsp+68h] [rbp-530h]
  __int64 v395; // [rsp+70h] [rbp-528h]
  void **v396; // [rsp+78h] [rbp-520h]
  char *v397; // [rsp+80h] [rbp-518h]
  int v398[2]; // [rsp+88h] [rbp-510h]
  __int64 *v399; // [rsp+90h] [rbp-508h]
  unsigned __int64 v400; // [rsp+98h] [rbp-500h]
  __m128i v401; // [rsp+A0h] [rbp-4F8h] BYREF
  __int64 v402; // [rsp+B0h] [rbp-4E8h]
  int v403[2]; // [rsp+B8h] [rbp-4E0h]
  __int64 *v404; // [rsp+C0h] [rbp-4D8h]
  __int64 v405; // [rsp+C8h] [rbp-4D0h]
  __int64 **v406; // [rsp+D0h] [rbp-4C8h]
  char *v407; // [rsp+D8h] [rbp-4C0h] BYREF
  _QWORD v408[2]; // [rsp+E0h] [rbp-4B8h] BYREF
  unsigned int v409; // [rsp+F0h] [rbp-4A8h]
  std::__detail::_List_node_base *v410[2]; // [rsp+100h] [rbp-498h] BYREF
  __int64 v411; // [rsp+110h] [rbp-488h]
  _QWORD *v412; // [rsp+120h] [rbp-478h] BYREF
  __int64 v413; // [rsp+128h] [rbp-470h]
  unsigned int v414; // [rsp+130h] [rbp-468h]
  void *v415[2]; // [rsp+138h] [rbp-460h]
  __int64 v416; // [rsp+148h] [rbp-450h]
  __m128i *v417; // [rsp+150h] [rbp-448h] BYREF
  int v418; // [rsp+158h] [rbp-440h] BYREF
  __m128 v419; // [rsp+160h] [rbp-438h]
  int *v420; // [rsp+170h] [rbp-428h]
  __int64 v421; // [rsp+178h] [rbp-420h]
  char *v422; // [rsp+180h] [rbp-418h] BYREF
  __int64 v423; // [rsp+188h] [rbp-410h]
  __m128 v424; // [rsp+190h] [rbp-408h]
  __int64 v425; // [rsp+1A0h] [rbp-3F8h]
  __int64 v426; // [rsp+1A8h] [rbp-3F0h]
  __m128i *v427; // [rsp+1B0h] [rbp-3E8h] BYREF
  __int64 v428; // [rsp+1B8h] [rbp-3E0h]
  _QWORD *v429; // [rsp+1C0h] [rbp-3D8h]
  unsigned __int64 *v430; // [rsp+1C8h] [rbp-3D0h]
  unsigned __int64 *v431; // [rsp+1D0h] [rbp-3C8h]
  __int64 v432; // [rsp+1D8h] [rbp-3C0h]
  void *v433[2]; // [rsp+1E0h] [rbp-3B8h] BYREF
  _QWORD *v434; // [rsp+1F0h] [rbp-3A8h] BYREF
  void **v435; // [rsp+1F8h] [rbp-3A0h]
  void **v436; // [rsp+200h] [rbp-398h]
  __int64 v437; // [rsp+208h] [rbp-390h]
  void *src[2]; // [rsp+210h] [rbp-388h] BYREF
  char *v439; // [rsp+220h] [rbp-378h]
  void *ptr; // [rsp+228h] [rbp-370h]
  __int64 v441; // [rsp+230h] [rbp-368h]
  __int64 v442; // [rsp+238h] [rbp-360h]
  unsigned int v443; // [rsp+248h] [rbp-350h]
  char *v444; // [rsp+280h] [rbp-318h] BYREF
  void *v445[2]; // [rsp+288h] [rbp-310h] BYREF
  __m128 v446; // [rsp+298h] [rbp-300h]
  __int64 v447; // [rsp+2A8h] [rbp-2F0h]
  __int64 v448; // [rsp+2D0h] [rbp-2C8h]
  unsigned int v449; // [rsp+2E0h] [rbp-2B8h]
  void *v450; // [rsp+2E8h] [rbp-2B0h]
  __int64 v451; // [rsp+2F0h] [rbp-2A8h]
  __int64 v452; // [rsp+4F8h] [rbp-A0h]
  __int64 v453; // [rsp+500h] [rbp-98h]
  unsigned int v454; // [rsp+508h] [rbp-90h]
  char v455; // [rsp+510h] [rbp-88h]
  __int64 *v456; // [rsp+518h] [rbp-80h]
  __int64 v457; // [rsp+520h] [rbp-78h]
  unsigned int v458; // [rsp+528h] [rbp-70h]
  __int64 *v459; // [rsp+530h] [rbp-68h]
  __int64 v460; // [rsp+538h] [rbp-60h]
  unsigned int v461; // [rsp+540h] [rbp-58h]
  _QWORD *v462; // [rsp+548h] [rbp-50h]
  __int64 v463; // [rsp+550h] [rbp-48h]
  unsigned int v464; // [rsp+558h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 88);
  v3 = *(_QWORD *)(a1 + 72);
  v407 = a2;
  if ( v2 )
  {
    v4 = v2 - 1;
    result = (v2 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = *(char **)(v3 + 16 * result);
    if ( a2 == v6 )
      return result;
    if ( v6 != (char *)-4096LL )
    {
      v7 = 1;
      do
      {
        result = v4 & (unsigned int)(v7 + result);
        v8 = *(char **)(v3 + 16LL * (unsigned int)result);
        if ( a2 == v8 )
          return result;
        ++v7;
      }
      while ( v8 != (char *)-4096LL );
    }
  }
  v405 = a1;
  v382.m128_u64[0] = (unsigned __int64)v410;
  v9 = _mm_loadl_epi64((const __m128i *)&v382);
  v384 = (std::__detail::_List_node_base *)v410;
  v408[0] = 0;
  v401 = _mm_unpacklo_epi64(v9, v9);
  v408[1] = 0;
  v409 = 0;
  v10 = (__int64 **)operator new(0x20u);
  v11 = v407;
  v12 = v10;
  v406 = v10;
  *v10 = (__int64 *)(v10 + 2);
  v10[1] = (__int64 *)0x200000000LL;
  sub_F85740((__int64 *)a1, 0, v11, (__int64)v10, v13, v14);
  v15 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v398 = v407;
  *(_QWORD *)v385 = v15;
  v20 = sub_EDE580(v15, v407, v16, v17, v18, v19);
  v21 = *((unsigned int *)v12 + 2);
  v22 = _mm_load_si128(&v401);
  *(_QWORD *)v403 = v20;
  v23 = *v12;
  v412 = nullptr;
  *(_OWORD *)v415 = 0;
  v413 = 0;
  v414 = 0;
  v416 = 0;
  *(__m128i *)v410 = v22;
  v411 = 0;
  v404 = &v23[v21];
  if ( v23 != v404 )
  {
    v392 = v23;
    v402 = (__int64)&v412;
    while ( 1 )
    {
      sub_F91CB0(
        *(__int64 *)v385,
        *(__int64 *)v403,
        *(char **)v398,
        0,
        *(_QWORD *)(*v392 + 8),
        *(_QWORD *)(*v392 + 104),
        v402,
        v384);
      v26 = v380;
      v27 = v381;
      if ( !(_DWORD)v413 )
        break;
      j = (unsigned int)(4 * v413);
      v26 = 64;
      v28 = v412;
      if ( (unsigned int)j < 0x40 )
        j = 64;
      if ( (unsigned int)j >= v414 )
      {
        v29 = 2LL * v414;
LABEL_13:
        for ( i = &v28[v29]; i != v28; *(v28 - 1) = 0x7FFFFFFFFFFFFFFFLL )
        {
          *v28 = -4096;
          v28 += 2;
        }
        v413 = 0;
        goto LABEL_16;
      }
      if ( (_DWORD)v413 == 1 )
      {
        v371 = 2048;
        v372 = 128;
      }
      else
      {
        _BitScanReverse(&v313, v413 - 1);
        v25 = 33 - (v313 ^ 0x1F);
        v314 = (unsigned int)(1 << (33 - (v313 ^ 0x1F)));
        if ( (int)v314 < 64 )
          v314 = 64;
        if ( (_DWORD)v314 == v414 )
        {
          v413 = 0;
          j = -4096;
          v315 = &v412[2 * v314];
          do
          {
            *v28 = -4096;
            v28 += 2;
            *(v28 - 1) = 0x7FFFFFFFFFFFFFFFLL;
          }
          while ( v315 != v28 );
          goto LABEL_16;
        }
        v378 = 4 * (int)v314 / 3u;
        v379 = (((v378 + 1)
               | ((unsigned __int64)(v378 + 1) >> 1)
               | (((v378 + 1) | ((unsigned __int64)(v378 + 1) >> 1)) >> 2)) >> 4)
             | (v378 + 1)
             | ((unsigned __int64)(v378 + 1) >> 1)
             | (((v378 + 1) | ((unsigned __int64)(v378 + 1) >> 1)) >> 2)
             | (((((v378 + 1)
                 | ((unsigned __int64)(v378 + 1) >> 1)
                 | (((v378 + 1) | ((unsigned __int64)(v378 + 1) >> 1)) >> 2)) >> 4)
               | (v378 + 1)
               | ((unsigned __int64)(v378 + 1) >> 1)
               | (((v378 + 1) | ((unsigned __int64)(v378 + 1) >> 1)) >> 2)) >> 8);
        v372 = (v379 | (v379 >> 16)) + 1;
        v371 = 16 * ((v379 | (v379 >> 16)) + 1);
      }
      operator delete(v412, 16LL * v414, 8);
      v414 = v372;
      v377 = (_QWORD *)sub_22300B0(v371, 8, v373, v374, v375, v376);
      v413 = 0;
      v25 = -4096;
      v412 = v377;
      for ( j = (__int64)&v377[2 * v414]; (_QWORD *)j != v377; *(v377 - 1) = 0x7FFFFFFFFFFFFFFFLL )
      {
        *v377 = -4096;
        v377 += 2;
      }
LABEL_16:
      if ( v415[0] != v415[1] )
        v415[1] = v415[0];
      v31 = v410[0];
      v32 = v410[0];
      if ( v410[0] == v384 )
      {
        *(_DWORD *)(*v392 + 88) = 0;
        goto LABEL_226;
      }
      do
      {
        v387 = *(__int64 **)v32;
        v386 = (__m128 *)((char *)v32 + 16);
        if ( v31 == v384 )
          goto LABEL_32;
        while ( v386 == (__m128 *)((char *)v31 + 16) )
        {
LABEL_30:
          v31 = *(std::__detail::_List_node_base **)v31;
          if ( v31 == v384 )
            goto LABEL_31;
        }
        v33 = *((_QWORD *)v32 + 6);
        v25 = *((_QWORD *)v32 + 5);
        v34 = (v33 - v25) >> 6;
        v35 = (v33 - v25) >> 4;
        if ( v34 <= 0 )
          goto LABEL_107;
        v36 = *((_QWORD *)v31 + 2);
        v37 = *((unsigned int *)v31 + 8);
        v38 = (_QWORD *)(v36 + 16 * v37);
        if ( !(_DWORD)v37 )
          goto LABEL_29;
        j = *((_QWORD *)v32 + 5);
        v27 = (unsigned int)(v37 - 1);
        for ( k = v34 - 1; ; --k )
        {
          v40 = *(_QWORD *)j;
          v26 = *(_QWORD *)(j + 8);
          v382.m128_i32[0] = 1;
          v25 = j;
          v41 = v27
              & (((0xBF58476D1CE4E5B9LL
                 * ((unsigned int)(37 * v26)
                  | ((unsigned __int64)(((unsigned int)v40 >> 9) ^ ((unsigned int)v40 >> 4)) << 32))) >> 31)
               ^ (756364221 * v26));
          while ( 1 )
          {
            v42 = (_QWORD *)(v36 + 16LL * v41);
            if ( v40 == *v42 && v26 == v42[1] )
              break;
            if ( *v42 == -4096 && v42[1] == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_29;
            v41 = v27 & (v382.m128_i32[0] + v41);
            ++v382.m128_i32[0];
          }
          if ( v38 == v42 )
            goto LABEL_29;
          v103 = *(_QWORD *)(j + 16);
          v104 = *(_QWORD *)(j + 24);
          v105 = 1;
          for ( m = v27
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)(37 * v104)
                      | ((unsigned __int64)(((unsigned int)v103 >> 9) ^ ((unsigned int)v103 >> 4)) << 32))) >> 31)
                   ^ (756364221 * v104)); ; m = v27 & v107 )
          {
            v26 = v36 + 16LL * m;
            if ( v103 == *(_QWORD *)v26 && v104 == *(_QWORD *)(v26 + 8) )
              break;
            if ( *(_QWORD *)v26 == -4096 && *(_QWORD *)(v26 + 8) == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_114;
            v107 = v105 + m;
            ++v105;
          }
          if ( v38 == (_QWORD *)v26 )
          {
LABEL_114:
            v25 = j + 16;
            goto LABEL_29;
          }
          v109 = *(_QWORD *)(j + 32);
          v110 = *(_QWORD *)(j + 40);
          v111 = 1;
          for ( ii = v27
                   & (((0xBF58476D1CE4E5B9LL
                      * ((unsigned int)(37 * v110)
                       | ((unsigned __int64)(((unsigned int)v109 >> 9) ^ ((unsigned int)v109 >> 4)) << 32))) >> 31)
                    ^ (756364221 * v110)); ; ii = v27 & v113 )
          {
            v26 = v36 + 16LL * ii;
            if ( v109 == *(_QWORD *)v26 && v110 == *(_QWORD *)(v26 + 8) )
              break;
            if ( *(_QWORD *)v26 == -4096 && *(_QWORD *)(v26 + 8) == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_128;
            v113 = v111 + ii;
            ++v111;
          }
          if ( v38 == (_QWORD *)v26 )
          {
LABEL_128:
            v25 = j + 32;
            goto LABEL_29;
          }
          v114 = *(_QWORD *)(j + 48);
          v115 = *(_QWORD *)(j + 56);
          v116 = 1;
          for ( jj = v27
                   & (((0xBF58476D1CE4E5B9LL
                      * ((unsigned int)(37 * v115)
                       | ((unsigned __int64)(((unsigned int)v114 >> 9) ^ ((unsigned int)v114 >> 4)) << 32))) >> 31)
                    ^ (756364221 * v115)); ; jj = v27 & v118 )
          {
            v26 = v36 + 16LL * jj;
            if ( v114 == *(_QWORD *)v26 && v115 == *(_QWORD *)(v26 + 8) )
              break;
            if ( *(_QWORD *)v26 == -4096 && *(_QWORD *)(v26 + 8) == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_130;
            v118 = v116 + jj;
            ++v116;
          }
          if ( v38 == (_QWORD *)v26 )
          {
LABEL_130:
            v25 = j + 48;
            goto LABEL_29;
          }
          j += 64;
          v25 = j;
          if ( !k )
            break;
        }
        v35 = (v33 - j) >> 4;
LABEL_107:
        if ( v35 == 2 )
        {
          v124 = *((_QWORD *)v31 + 2);
          v136 = *((unsigned int *)v31 + 8);
          j = v124 + 16 * v136;
          if ( (_DWORD)v136 )
          {
            v27 = (unsigned int)(v136 - 1);
            goto LABEL_157;
          }
LABEL_29:
          if ( v33 == v25 )
            goto LABEL_110;
          goto LABEL_30;
        }
        if ( v35 == 3 )
        {
          v131 = *((unsigned int *)v31 + 8);
          v124 = *((_QWORD *)v31 + 2);
          if ( !(_DWORD)v131 )
            goto LABEL_29;
          v26 = *(_QWORD *)v25;
          v132 = *(_QWORD *)(v25 + 8);
          v133 = 1;
          v27 = (unsigned int)(v131 - 1);
          for ( j = (unsigned int)v27
                  & ((unsigned int)((0xBF58476D1CE4E5B9LL
                                   * ((unsigned int)(37 * v132)
                                    | ((unsigned __int64)(((unsigned int)*(_QWORD *)v25 >> 9)
                                                        ^ ((unsigned int)*(_QWORD *)v25 >> 4)) << 32))) >> 31)
                   ^ (756364221 * (_DWORD)v132)); ; j = (unsigned int)v27 & v135 )
          {
            v134 = (_QWORD *)(v124 + 16LL * (unsigned int)j);
            if ( v26 == *v134 && v132 == v134[1] )
              break;
            if ( *v134 == -4096 && v134[1] == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_29;
            v135 = v133 + j;
            ++v133;
          }
          j = v124 + 16 * v131;
          if ( (_QWORD *)j == v134 )
            goto LABEL_29;
          v25 += 16;
LABEL_157:
          v26 = *(_QWORD *)v25;
          v137 = *(_QWORD *)(v25 + 8);
          v138 = 1;
          for ( kk = v27
                   & (((0xBF58476D1CE4E5B9LL
                      * ((unsigned int)(37 * v137)
                       | ((unsigned __int64)(((unsigned int)*(_QWORD *)v25 >> 9) ^ ((unsigned int)*(_QWORD *)v25 >> 4)) << 32))) >> 31)
                    ^ (756364221 * v137)); ; kk = v27 & v141 )
          {
            v140 = (_QWORD *)(v124 + 16LL * kk);
            if ( v26 == *v140 && v137 == v140[1] )
              break;
            if ( *v140 == -4096 && v140[1] == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_29;
            v141 = v138 + kk;
            ++v138;
          }
          if ( v140 != (_QWORD *)j )
          {
            v25 += 16;
            goto LABEL_146;
          }
          goto LABEL_29;
        }
        if ( v35 != 1 )
          goto LABEL_110;
        v124 = *((_QWORD *)v31 + 2);
        v125 = *((unsigned int *)v31 + 8);
        j = v124 + 16 * v125;
        v27 = (unsigned int)(v125 - 1);
        if ( !(_DWORD)v125 )
          goto LABEL_29;
LABEL_146:
        v26 = *(_QWORD *)v25;
        v126 = *(_QWORD *)(v25 + 8);
        v127 = 1;
        for ( mm = v27
                 & (((0xBF58476D1CE4E5B9LL
                    * ((unsigned int)(37 * v126)
                     | ((unsigned __int64)(((unsigned int)*(_QWORD *)v25 >> 9) ^ ((unsigned int)*(_QWORD *)v25 >> 4)) << 32))) >> 31)
                  ^ (756364221 * v126)); ; mm = v27 & v130 )
        {
          v129 = (_QWORD *)(v124 + 16LL * mm);
          if ( v26 == *v129 && v126 == v129[1] )
            break;
          if ( *v129 == -4096 && v129[1] == 0x7FFFFFFFFFFFFFFFLL )
            goto LABEL_29;
          v130 = v127 + mm;
          ++v127;
        }
        if ( v129 == (_QWORD *)j )
          goto LABEL_29;
LABEL_110:
        --v411;
        std::__detail::_List_node_base::_M_unhook(v32);
        v108 = *((void **)v32 + 5);
        if ( v108 )
          operator delete(v108);
        operator delete(*((_QWORD *)v32 + 2), 16LL * *((unsigned int *)v32 + 8), 8);
        operator delete(v32);
LABEL_31:
        v31 = v410[0];
LABEL_32:
        v32 = (std::__detail::_List_node_base *)v387;
      }
      while ( v387 != (__int64 *)v384 );
      v395 = *v392;
      *(_DWORD *)(v395 + 88) = 0;
      if ( v31 == v384 )
        goto LABEL_226;
      v397 = (char *)v31 + 16;
      if ( v411 == 1 )
        goto LABEL_300;
      v418 = 0;
      n = (size_t)&v417;
      v419.m128_u64[1] = (unsigned __int64)&v418;
      v420 = &v418;
      v382.m128_u64[0] = (unsigned __int64)&v422;
      v396 = src;
      v419.m128_u64[0] = 0;
      v421 = 0;
      v394 = (char *)v31 + 16;
      v397 = nullptr;
      v386 = (__m128 *)&v427;
      while ( 2 )
      {
        LODWORD(v423) = 0;
        v43 = -1;
        v424.m128_u64[0] = 0;
        v426 = 0;
        v424.m128_u64[1] = v382.m128_u64[0] + 8;
        v425 = v382.m128_u64[0] + 8;
        v391 = **((char ***)v31 + 5);
        v44 = v391;
        v45 = sub_EDE580(*(__int64 *)v385, v391, j, v25, v26, v27);
        v50 = *((__int64 **)v31 + 5);
        v389 = v45;
        v390 = *((__int64 **)v31 + 6);
        if ( v50 == v390 )
          goto LABEL_64;
        v51 = v50;
        v393 = v31;
        v52 = v44;
        v53 = v51;
        while ( 2 )
        {
          v54 = (char *)*v53;
          if ( (char *)*v53 == v52 )
          {
            v43 = 0;
            goto LABEL_62;
          }
          v55 = sub_EDE580(*(__int64 *)v385, v52, v46, v47, v48, v49);
          v56 = *((_QWORD *)v52 + 13);
          v387 = v55;
          sub_7052B0((__int64 *)(v56 + 96), v56, v57, v58, v59, v60);
          v65 = *((_QWORD *)v52 + 16);
          if ( (*(_BYTE *)(v65 + 24) & 1) != 0 )
            v66 = sub_B96980(v65);
          else
            v66 = *(_QWORD *)(v65 + 24);
          sub_7052B0((__int64 *)(*((_QWORD *)v52 + 13) + 96LL), *((_QWORD *)v52 + 13), v61, v62, v63, v64);
          v67 = *((_QWORD *)v52 + 13);
          v68 = (__int64 **)(v66 + 24LL * *(unsigned int *)(*((_QWORD *)v52 + 16) + 16LL));
          sub_7052B0((__int64 *)(v67 + 96), v67, v69, v70, v71, v72);
          v75 = *((_QWORD *)v52 + 16);
          if ( (*(_BYTE *)(v75 + 24) & 1) != 0 )
            v76 = (__int64 **)sub_B96980(v75);
          else
            v76 = *(__int64 ***)(v75 + 24);
          v77 = 0xAAAAAAAAAAAAAAABLL;
          v78 = 0xAAAAAAAAAAAAAAABLL * (v68 - v76);
          v79 = v78 >> 2;
          if ( v78 >> 2 <= 0 )
          {
LABEL_136:
            if ( v78 != 2 )
            {
              if ( v78 != 3 )
              {
                if ( v78 != 1 )
                  goto LABEL_59;
                goto LABEL_139;
              }
              v142 = sub_F79C60(v76[2], v67, v79, 0xAAAAAAAAAAAAAAABLL, v73);
              if ( v54 == (char *)sub_F63270(*(_QWORD *)(v142 & 0xFFFFFFFFFFFFFFF0LL), v67, v143, v144, v145, v146) )
                goto LABEL_58;
              v76 += 3;
            }
            v147 = sub_F79C60(v76[2], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F63270(*(_QWORD *)(v147 & 0xFFFFFFFFFFFFFFF0LL), v67, v148, v149, v150, v151) )
              goto LABEL_58;
            v76 += 3;
LABEL_139:
            v119 = sub_F79C60(v76[2], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F63270(*(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL), v67, v120, v121, v122, v123) )
              v68 = v76;
            goto LABEL_59;
          }
          v80 = &v76[12 * v79];
          while ( 1 )
          {
            v84 = *(_QWORD *)(*v76[2] & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v84 + 8) & 0xF) != 0 )
              v84 = sub_F64F00(*v76[2], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F63270(*(_QWORD *)(v84 & 0xFFFFFFFFFFFFFFF0LL), v67, v79, v77, v73, v74) )
              break;
            v81 = *(_QWORD *)(*v76[5] & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v81 + 8) & 0xF) != 0 )
              v81 = sub_F64F00(*v76[5], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F63270(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL), v67, v79, v77, v73, v74) )
            {
              v68 = v76 + 3;
              goto LABEL_59;
            }
            v82 = *(_QWORD *)(*v76[8] & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v82 + 8) & 0xF) != 0 )
              v82 = sub_F64F00(*v76[8], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F63270(*(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFF0LL), v67, v79, v77, v73, v74) )
            {
              v68 = v76 + 6;
              goto LABEL_59;
            }
            v83 = *(_QWORD *)(*v76[11] & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v83 + 8) & 0xF) != 0 )
              v83 = sub_F64F00(*v76[11], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F63270(*(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFF0LL), v67, v79, v77, v73, v74) )
            {
              v68 = v76 + 9;
              goto LABEL_59;
            }
            v76 += 12;
            if ( v80 == v76 )
            {
              v77 = 0xAAAAAAAAAAAAAAABLL;
              v78 = 0xAAAAAAAAAAAAAAABLL * (v68 - v76);
              goto LABEL_136;
            }
          }
LABEL_58:
          v68 = v76;
LABEL_59:
          if ( (*((_BYTE *)v68 + 12) & 1) != 0 )
            v43 = sub_F81DB0(v389 + 9, (__int64)v54, (__int64 *)v79, v77, v73, v74);
          else
            v43 += sub_F81500(v387 + 9, (__int64)v54, v79, v77, v73, v74);
          v52 = v54;
LABEL_62:
          v53 += 2;
          if ( v390 != v53 )
            continue;
          break;
        }
        v31 = v393;
LABEL_64:
        sub_F83100((__int64)v396, v391, 0, (__int64)v391);
        v85 = *(_QWORD *)(v395 + 8) + 64LL;
        v387 = *(__int64 **)(v395 + 8);
        v86 = sub_B8E970(v85);
        v87 = (_QWORD *)v86;
        if ( !v86 )
          goto LABEL_69;
        if ( (*(_BYTE *)(v86 + 28) & 0x7Fu) - 35 > 3 )
        {
          do
          {
            v88 = v87[1] & 0xFFFFFFFFFFFFFFF8LL;
            v87 = (_QWORD *)v88;
            if ( !v88 )
              goto LABEL_69;
          }
          while ( (*(_BYTE *)(v88 + 28) & 0x7Fu) - 35 > 3 );
        }
LABEL_165:
        v152 = (*(__int64 (__fastcall **)(_QWORD *))(*v87 + 32LL))(v87);
        if ( (*(_QWORD *)(v152 + 80) & 0x40000LL) == 0
          && ((*(_QWORD *)(v152 + 80) >> 16) & 8) == 0
          && !(unsigned int)sub_B984E0(v152)
          || (unsigned __int8)sub_B7D7F0((__int64)v87) )
        {
          goto LABEL_170;
        }
        v154 = (*(__int64 (__fastcall **)(_QWORD *))(*v87 + 32LL))(v87);
        if ( v443 )
        {
          v156 = 1;
          for ( nn = (v443 - 1)
                   & (((0xBF58476D1CE4E5B9LL
                      * ((unsigned int)(37 * v43)
                       | ((unsigned __int64)(((unsigned int)v154 >> 9) ^ ((unsigned int)v154 >> 4)) << 32))) >> 31)
                    ^ (756364221 * v43)); ; nn = (v443 - 1) & v159 )
          {
            v158 = (__int64 *)(v442 + 40LL * nn);
            v155 = *v158;
            if ( v154 == *v158 && v158[1] == v43 )
              break;
            if ( v155 == -4096 && v158[1] == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_179;
            v159 = v156 + nn;
            v156 = (unsigned int)(v156 + 1);
          }
          v160 = (void *)v158[2];
        }
        else
        {
LABEL_179:
          v160 = nullptr;
        }
        v433[0] = v160;
        sub_F812F0((__m128 *)&v444, *(__int64 *)v385, (__int64)v160, (__int64)v87, v155, v156);
        if ( !v445[1] && !v445[0] )
          goto LABEL_170;
        v161 = *(_QWORD *)(sub_B8C1B0((__int64)v433[0] + 72) + 16);
        if ( (v161 & 4) != 0 )
          v162 = *(_QWORD *)(v161 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v162 = v161 & 0xFFFFFFFFFFFFFFF8LL;
        v163 = *((char **)v31 + 6);
        if ( v162 )
          v162 -= 64LL;
        v164 = *((char **)v31 + 5);
        v165 = (v163 - v164) >> 6;
        v166 = (v163 - v164) >> 4;
        if ( v165 <= 0 )
        {
          v277 = *((char **)v31 + 5);
LABEL_199:
          if ( v166 != 2 )
          {
            if ( v166 != 3 )
            {
              if ( v166 != 1 )
                goto LABEL_170;
              goto LABEL_202;
            }
            if ( v162 == *(_QWORD *)v277 )
              goto LABEL_203;
            v277 += 16;
          }
          if ( v162 == *(_QWORD *)v277 )
            goto LABEL_203;
          v277 += 16;
LABEL_202:
          if ( v162 != *(_QWORD *)v277 )
            goto LABEL_170;
          goto LABEL_203;
        }
        if ( v162 == *(_QWORD *)v164 )
        {
          v277 = *((char **)v31 + 5);
        }
        else if ( v162 == *((_QWORD *)v164 + 2) )
        {
          v277 = v164 + 16;
        }
        else if ( v162 == *((_QWORD *)v164 + 4) )
        {
          v277 = v164 + 32;
        }
        else
        {
          v167 = &v164[64 * v165];
          if ( v162 == *((_QWORD *)v164 + 6) )
          {
            v277 = v164 + 48;
          }
          else
          {
            while ( 1 )
            {
              v277 = v164 + 64;
              if ( v167 == v164 + 64 )
              {
                v166 = (v163 - v277) >> 4;
                goto LABEL_199;
              }
              if ( v162 == *((_QWORD *)v164 + 8) )
                goto LABEL_203;
              if ( v162 == *((_QWORD *)v164 + 10) )
              {
                v277 = v164 + 80;
                goto LABEL_203;
              }
              if ( v162 == *((_QWORD *)v164 + 12) )
              {
                v277 = v164 + 96;
                goto LABEL_203;
              }
              if ( v162 == *((_QWORD *)v164 + 14) )
                break;
              v164 += 64;
            }
            v277 = v164 + 112;
          }
        }
LABEL_203:
        if ( v163 != v277 )
          sub_F7EF40(v382.m128_u64[0], (unsigned __int64 *)v433);
LABEL_170:
        while ( 1 )
        {
          v153 = v87[1] & 0xFFFFFFFFFFFFFFF8LL;
          v87 = (_QWORD *)v153;
          if ( !v153 )
            break;
          if ( (*(_BYTE *)(v153 + 28) & 0x7Fu) - 35 <= 3 )
            goto LABEL_165;
        }
LABEL_69:
        v89 = nullptr;
        LODWORD(v428) = 0;
        v90 = v424.m128_i64[1];
        v429 = nullptr;
        v91 = n + 8;
        v432 = 0;
        v430 = &v386->m128_u64[1];
        v431 = &v386->m128_u64[1];
        if ( v424.m128_u64[1] != v382.m128_u64[0] + 8 )
        {
          do
          {
            v92 = (_QWORD *)v419.m128_u64[0];
            if ( !v419.m128_u64[0] )
              goto LABEL_77;
            v93 = *(_QWORD *)(v90 + 32);
            v94 = (_QWORD *)v91;
            do
            {
              while ( v92[4] >= v93 )
              {
                v94 = v92;
                v92 = (_QWORD *)v92[2];
                if ( !v92 )
                  goto LABEL_75;
              }
              v92 = (_QWORD *)v92[3];
            }
            while ( v92 );
LABEL_75:
            if ( v94 == (_QWORD *)v91 || v94[4] > v93 )
LABEL_77:
              sub_F7EF40(v386, (unsigned __int64 *)(v90 + 32));
            v90 = std::_Rb_tree_increment(v90);
          }
          while ( v90 != v382.m128_u64[0] + 8 );
          if ( v432 )
          {
            v95 = v419.m128_i64[1];
            LODWORD(v433[1]) = 0;
            v96 = n;
            v434 = nullptr;
            v435 = &v433[1];
            v436 = &v433[1];
            v437 = 0;
            if ( v419.m128_u64[1] == n + 8 )
              goto LABEL_218;
            do
            {
              v97 = (_QWORD *)v424.m128_u64[0];
              if ( !v424.m128_u64[0] )
                goto LABEL_88;
              v98 = *(_QWORD *)(v95 + 32);
              v99 = (_QWORD *)v90;
              do
              {
                while ( v97[4] >= v98 )
                {
                  v99 = v97;
                  v97 = (_QWORD *)v97[2];
                  if ( !v97 )
                    goto LABEL_86;
                }
                v97 = (_QWORD *)v97[3];
              }
              while ( v97 );
LABEL_86:
              if ( v99 == (_QWORD *)v90 || v99[4] > v98 )
LABEL_88:
                sub_F7EF40(v433, (unsigned __int64 *)(v95 + 32));
              v95 = std::_Rb_tree_increment(v95);
            }
            while ( v95 != v96 + 8 );
            if ( !v437 )
            {
LABEL_218:
              v168 = v419.m128_u64[0];
              if ( v424.m128_u64[0] )
              {
                v169 = (int *)v425;
                v170 = v426;
                v387 = (__int64 *)v424.m128_u64[1];
                if ( v419.m128_u64[0] )
                {
                  v424 = v419;
                  v425 = (__int64)v420;
                  v419 = _mm_loadh_ps((const double *)&v387);
                  v420 = v169;
                  *(_QWORD *)(v168 + 8) = v382.m128_u64[0] + 8;
                  *(_QWORD *)(v419.m128_u64[0] + 8) = n + 8;
                  v171 = v421;
                  v421 = v170;
                  v426 = v171;
                }
                else
                {
                  v418 = v423;
                  v420 = (int *)v425;
                  v419 = _mm_loadh_ps((const double *)&v387);
                  *(_QWORD *)(v424.m128_u64[0] + 8) = n + 8;
                  v421 = v170;
                  v424.m128_u64[0] = 0;
                  v424.m128_u64[1] = v382.m128_u64[0] + 8;
                  v425 = v382.m128_u64[0] + 8;
                  v426 = 0;
                }
                v397 = v394;
              }
              else
              {
                v397 = v394;
                if ( v419.m128_u64[0] )
                {
                  v424 = v419;
                  LODWORD(v423) = v418;
                  v425 = (__int64)v420;
                  *(_QWORD *)(v419.m128_u64[0] + 8) = v382.m128_u64[0] + 8;
                  v419.m128_u64[0] = 0;
                  v426 = v421;
                  v421 = 0;
                  v419.m128_u64[1] = n + 8;
                  v420 = (int *)(n + 8);
                }
              }
            }
            else
            {
              v100 = sub_A62AC0(*(__int64 *)v385);
              v101 = v430[4];
              v102 = (__int64)v435[4];
              sub_FC70B0(&v444, v100, *(unsigned int *)(*(_QWORD *)v398 + 24LL), 2364);
              sub_AE9DF0((unsigned __int8 **)&v444, *(__int64 *)v398, 0xAu);
              sub_AEA040((__int64)&v444);
              sub_FC70B0(&v444, v100, *(unsigned int *)(v101 + 24), 2507);
              sub_AE9DF0((unsigned __int8 **)&v444, v101, 0xAu);
              sub_AEA040((__int64)&v444);
              sub_FC70B0(&v444, v100, *(unsigned int *)(v102 + 24), 2507);
              sub_AE9DF0((unsigned __int8 **)&v444, v102, 0xAu);
              sub_AEA040((__int64)&v444);
            }
            sub_F7EF00((__int64)v433, v434);
          }
          v89 = v429;
        }
        sub_F7EF00((__int64)v386, v89);
        operator delete(v442, 40LL * v443, 8);
        sub_F7EF00(v382.m128_i64[0], v424.m128_u64[0]);
        v31 = *(std::__detail::_List_node_base **)v31;
        if ( v31 != v384 )
        {
          v394 = (char *)v31 + 16;
          continue;
        }
        break;
      }
      if ( !v397 )
        v397 = (char *)v410[0] + 16;
      sub_F7EF00(n, v419.m128_u64[0]);
LABEL_300:
      if ( v397 )
      {
        v239 = *((__int64 **)v397 + 3);
        for ( i1 = *((__int64 **)v397 + 4); i1 != v239; ++*(_DWORD *)(v242 + 88) )
        {
          while ( 1 )
          {
            v241 = *v239;
            v242 = *v392;
            v243 = *(unsigned int *)(*v392 + 88);
            if ( v243 + 1 > (unsigned __int64)*(unsigned int *)(*v392 + 92) )
              break;
            v239 += 2;
            *(_QWORD *)(*(_QWORD *)(v242 + 80) + 8 * v243) = v241;
            ++*(_DWORD *)(v242 + 88);
            if ( i1 == v239 )
              goto LABEL_306;
          }
          v239 += 2;
          sub_2237220(v242 + 80, v242 + 96, v243 + 1, 8);
          *(_QWORD *)(*(_QWORD *)(v242 + 80) + 8LL * *(unsigned int *)(v242 + 88)) = v241;
        }
      }
LABEL_306:
      v244 = v410[0];
      v245 = v384;
      if ( v410[0] != v384 )
      {
        while ( 1 )
        {
          v246 = *((void **)v244 + 5);
          v247 = *(std::__detail::_List_node_base **)v244;
          if ( v246 )
            operator delete(v246);
          operator delete(*((_QWORD *)v244 + 2), 16LL * *((unsigned int *)v244 + 8), 8);
          operator delete(v244);
          if ( v247 == v245 )
            break;
          v244 = v247;
        }
      }
LABEL_226:
      v172 = _mm_load_si128(&v401);
      ++v392;
      v411 = 0;
      *(__m128i *)v410 = v172;
      if ( v404 == v392 )
      {
        if ( v415[0] )
          operator delete(v415[0]);
        goto LABEL_229;
      }
    }
    if ( !HIDWORD(v413) )
      goto LABEL_16;
    v28 = v412;
    v29 = 2LL * v414;
    if ( v414 > 0x40 )
    {
      operator delete(v412, v29 * 8, 8);
      v412 = nullptr;
      v413 = 0;
      v414 = 0;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
LABEL_229:
  v173 = v405 + 72;
  operator delete(v412, 16LL * v414, 8);
  v174 = (void **)sub_F849A0(v173, (__int64 *)&v407);
  v175 = *v174;
  *v174 = v406;
  if ( v175 )
  {
    sub_F7F340((__int64)v175);
    operator delete(v175, 0x20u);
  }
  v427 = nullptr;
  v428 = 0;
  LODWORD(v429) = 0;
  v176 = (__int64 ***)sub_F849A0(v173, (__int64 *)&v407);
  v177 = *v176;
  v178 = **v176;
  v393 = (std::__detail::_List_node_base *)&v178[*((unsigned int *)v177 + 2)];
  if ( v393 != (std::__detail::_List_node_base *)v178 )
  {
    v387 = v178;
    v179 = (char *)v405;
    v402 = (__int64)&v412;
    v384 = (std::__detail::_List_node_base *)&v417;
    v390 = (__int64 *)&v422;
    v386 = (__m128 *)src;
    *(_QWORD *)v385 = &v444;
    v392 = (__int64 *)(v405 + 96);
    v382.m128_u64[0] = (unsigned __int64)v433;
    v395 = v405 + 8;
    v394 = (char *)v408;
    do
    {
      v180 = v407;
      v181 = *v387;
      v444 = v179;
      v182 = sub_B8C330((__int64)v407);
      n = (size_t)v180;
      *(__m128 *)v445 = _mm_loadh_ps((const double *)&n);
      sub_EDE580(v182, v180, v183, v184, v185, v186);
      v187 = *(_QWORD *)v385;
      n = v181;
      v446 = _mm_loadh_ps((const double *)&n);
      sub_F83100(*(_QWORD *)v385 + 40LL, v180, 0, (__int64)v180);
      v452 = 0;
      v450 = (void *)(v187 + 120);
      v451 = 0x4000000000LL;
      v453 = 0;
      v454 = 0;
      v455 = 0;
      v456 = nullptr;
      v457 = 0;
      v458 = 0;
      v459 = nullptr;
      v460 = 0;
      v461 = 0;
      v462 = nullptr;
      v463 = 0;
      v464 = 0;
      if ( (*(_BYTE *)(*((_QWORD *)v445[0] + 290) + 14LL) & 0x10) != 0 )
      {
        v455 = 1;
        sub_F7DBA0(v187 + 104, (unsigned __int64)v445[1] | 3);
      }
      src[0] = nullptr;
      src[1] = nullptr;
      ptr = &v386[2].m128_u16[4];
      LODWORD(v439) = 0;
      v441 = 0x800000000LL;
      sub_F87FD0(*(__int64 **)v385, (__int64)v445[1], 0, 0, 0, (__int64)v386);
      if ( (_DWORD)v457 )
      {
        v278 = v456;
        v279 = &v456[4 * v458];
        if ( v456 != v279 )
        {
          while ( *v278 == -8192 || *v278 == -4096 )
          {
            v278 += 4;
            if ( v279 == v278 )
              goto LABEL_236;
          }
          v389 = (__int64 *)v179;
          v280 = v278;
LABEL_380:
          v281 = *v280;
          v282 = *(_QWORD *)(sub_B8C1B0(*v280 + 72) + 16);
          if ( (v282 & 4) != 0 )
            v283 = *(char **)(v282 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v283 = (char *)(v282 & 0xFFFFFFFFFFFFFFF8LL);
          v284 = v283 - 64;
          if ( v283 )
            v283 -= 64;
          if ( v445[1] != v283 || *((_BYTE *)v280 + 24) )
            goto LABEL_385;
          v287 = v280[2];
          v288 = 0;
          if ( *(_DWORD *)(v446.m128_u64[1] + 64) )
          {
            v284 = *(char **)(v446.m128_u64[1] + 56);
            v288 = *(_QWORD *)v284;
          }
          v289 = *(_QWORD *)(v446.m128_u64[1] + 16);
          v290 = *(_BYTE *)(v281 + 28) & 0x7F;
          n = v280[1];
          if ( v290 == 36 )
          {
            LODWORD(v433[1]) = 0;
            v433[0] = (void *)(v281 & 0xFFFFFFFFFFFFFFF8LL);
            v291 = *(_QWORD *)v385 + 632LL;
            if ( !sub_F7EE10((__int64 *)(*(_QWORD *)v385 + 632LL), (__int64 *)v382.m128_u64[0], v390) )
            {
              v295 = (__int64)v422;
              v296 = (__int64 *)v382.m128_u64[0];
              v297 = (char *)v291;
              goto LABEL_399;
            }
LABEL_402:
            v298 = (size_t *)(v422 + 16);
            goto LABEL_400;
          }
          v433[0] = nullptr;
          LODWORD(v433[1]) = 0;
          if ( !sub_B79B80(v281) )
          {
            v433[0] = (void *)(v281 | (__int64)v433[0] & 7);
LABEL_405:
            v391 = (char *)(*(_QWORD *)v385 + 632LL);
            v305 = sub_F7EE10((__int64 *)(*(_QWORD *)v385 + 632LL), (__int64 *)v382.m128_u64[0], v390);
            v293 = v391;
            if ( v305 )
              goto LABEL_402;
            v295 = (__int64)v422;
            v296 = (__int64 *)v382.m128_u64[0];
            v297 = v391;
LABEL_399:
            v298 = (size_t *)(sub_F846D0((__int64)v297, v296, v295, v292, (__int64)v293, v294) + 16);
            *(v298 - 2) = (size_t)v433[0];
            v299 = (int)v433[1];
            *v298 = 0;
            *((_DWORD *)v298 - 2) = v299;
            v298[1] = 0;
            v298[2] = 0;
            v298[3] = 0;
LABEL_400:
            v300 = n;
            v298[1] = v288;
            v298[2] = v289;
            *v298 = v300;
            v298[3] = v287;
LABEL_385:
            v285 = v280 + 4;
            if ( v280 + 4 == v279 )
              goto LABEL_391;
            v286 = v280[4];
            if ( v286 != -8192 )
              goto LABEL_389;
            while ( 1 )
            {
              do
              {
                v285 += 4;
                if ( v285 == v279 )
                {
LABEL_391:
                  v179 = (char *)v389;
                  goto LABEL_236;
                }
                v286 = *v285;
              }
              while ( *v285 == -8192 );
LABEL_389:
              if ( v286 != -4096 )
              {
                v280 = v285;
                goto LABEL_380;
              }
            }
          }
          if ( (*(_BYTE *)(v281 + 29) & 1) != 0 )
          {
            v309 = sub_B8C3D0(v281, (__int64)v284, v301, v302, v303, v304);
            v310 = *v309;
            v311 = *v309 + 8LL * *((unsigned int *)v309 + 2);
            if ( *v309 >= v311 )
            {
              if ( v310 == v311 )
                goto LABEL_409;
              while ( *(_WORD *)(*(_QWORD *)v311 + 36LL) != 64 )
              {
                v311 += 8LL;
                if ( v310 == v311 )
                  goto LABEL_409;
              }
              v307 = 0;
            }
            else
            {
              v312 = *v309;
              while ( *(_WORD *)(*(_QWORD *)v312 + 36LL) != 64 )
              {
                v312 += 8LL;
                if ( v311 == v312 )
                  goto LABEL_409;
              }
              if ( v312 == v311 )
                goto LABEL_409;
              v307 = 0;
            }
          }
          else
          {
LABEL_409:
            v307 = ((*(_BYTE *)(sub_B8C5D0(v281) + 89) >> 2) ^ 1) & 1;
          }
          v433[0] = (void *)(v281 & 0xFFFFFFFFFFFFFFF8LL | v307);
          goto LABEL_405;
        }
      }
LABEL_236:
      if ( ptr != &v386[2].m128_u16[4] )
        free(ptr);
      operator delete(src[0], 8LL * (unsigned int)v439, 8);
      if ( *(char *)(*((_QWORD *)v445[0] + 290) + 104LL) < 0 )
      {
        v306 = (const __m128i *)sub_227D600();
        sub_F90F30(*(__int64 *)v385, v306);
      }
      v188 = v386;
      v189 = *v387;
      v422 = v407;
      v423 = *(_QWORD *)(v189 + 104);
      v190 = *(_QWORD *)v385 + 688LL;
      sub_F7F690(v386, &v459[8 * (unsigned __int64)v461], &v459[8 * (unsigned __int64)v461], *(_QWORD *)v385 + 688LL, 1);
      v191 = (const __m128i *)src[0];
      if ( (_DWORD)v460 )
        sub_F7F690(v386, v459, &v459[8 * (unsigned __int64)v461], v190, 0);
      else
        sub_F7F690(v188, &v459[8 * (unsigned __int64)v461], &v459[8 * (unsigned __int64)v461], v190, 1);
      v192 = (const __m128i *)src[0];
      v193 = (const __m128i *)src[1];
      src[1] = (void *)0x100000000LL;
      src[0] = &v386[1];
      if ( v192 != v191 )
      {
        v194 = v192;
        v195 = 0;
        while ( 1 )
        {
          if ( &v194[4] != v193 )
          {
            if ( v194[4].m128i_i64[0] < 0xFFFFFFFFFFFFFFFELL )
            {
              v194 += 4;
              goto LABEL_250;
            }
            v196 = v194 + 8;
            while ( 1 )
            {
              v194 = v196;
              if ( v196 == v193 )
                break;
              v196 += 4;
              if ( v194->m128i_i64[0] < 0xFFFFFFFFFFFFFFFELL )
                goto LABEL_250;
            }
          }
          v194 = v193;
LABEL_250:
          ++v195;
          if ( v191 == v194 )
          {
            v197 = (__m128i *)&v386[1];
            if ( v195 != 1 )
            {
              sub_2237220(v386, v197, v195, 64);
              v197 = (__m128i *)((char *)src[0] + 64 * (unsigned __int64)LODWORD(src[1]));
            }
            while ( 1 )
            {
              v198 = v192 + 4;
              *v197 = _mm_loadu_si128(v192);
              v197[1] = _mm_loadu_si128(v192 + 1);
              v197[2] = _mm_loadu_si128(v192 + 2);
              v197[3] = _mm_loadu_si128(v192 + 3);
              if ( &v192[4] != v193 )
              {
                if ( v192[4].m128i_i64[0] != -2 && v192[4].m128i_i64[0] != -1 )
                {
LABEL_296:
                  v192 = v198;
                  goto LABEL_259;
                }
                while ( 1 )
                {
                  v198 += 4;
                  if ( v198 == v193 )
                    break;
                  if ( v198->m128i_i64[0] < 0xFFFFFFFFFFFFFFFELL )
                    goto LABEL_296;
                }
              }
              v192 = v193;
LABEL_259:
              v197 += 4;
              if ( v192 == v194 )
              {
                v199 = (__int64 *)src[0];
                v200 = LODWORD(src[1]) + v195;
                v201 = (unsigned int)(LODWORD(src[1]) + v195);
                goto LABEL_261;
              }
            }
          }
        }
      }
      v201 = 0;
      v200 = 0;
      v199 = (__int64 *)&v386[1];
LABEL_261:
      LODWORD(src[1]) = v200;
      v202 = v450;
      v203 = (unsigned int)v451;
      v399 = v199;
      v412 = nullptr;
      v400 = v201;
      v204 = operator new(0x68u);
      sub_F8EB40(v204, (const void *)v402, 1u, v202, v203, (__int64)v394, v399, v400);
      v205 = (unsigned __int8)sub_F7F110(v392, v390, (__int64 **)v384) == 0;
      m128i_i64 = v417->m128i_i64;
      if ( !v205 )
      {
        v208 = (void *)v417[1].m128i_i64[0];
        v417[1].m128i_i64[0] = v204;
        if ( v208 )
        {
          sub_F7D1D0((__int64)v208);
          operator delete(v208, 0x68u);
        }
        goto LABEL_264;
      }
      v270 = *((_DWORD *)v179 + 26);
      v433[0] = v417;
      v271 = (unsigned int)(v270 + 1);
      v272 = *((unsigned int *)v179 + 28);
      v273 = (unsigned int)(4 * v271);
      v274 = 2 * v272;
      if ( (unsigned int)v273 < 3 * (int)v272 )
      {
        if ( (int)v272 - *((_DWORD *)v179 + 27) - (int)v271 > (unsigned int)v272 >> 3 )
          goto LABEL_365;
        v274 = *((_DWORD *)v179 + 28);
      }
      v308 = v392;
      sub_F84BB0((__int64)v392, v274, v271, v272, v273, v206);
      sub_F7F110(v308, v390, (__int64 **)v382.m128_u64[0]);
      LODWORD(v271) = *((_DWORD *)v179 + 26) + 1;
      m128i_i64 = v433[0];
LABEL_365:
      v205 = *m128i_i64 == -4096;
      *((_DWORD *)v179 + 26) = v271;
      if ( !v205 || m128i_i64[1] != 0x7FFFFFFFFFFFFFFFLL )
        --*((_DWORD *)v179 + 27);
      v275 = v423;
      v276 = v422;
      m128i_i64[2] = v204;
      *m128i_i64 = v276;
      m128i_i64[1] = v275;
LABEL_264:
      v209 = (__m128 *)v382.m128_u64[0];
      v210 = *(_QWORD *)v385 + 712LL;
      sub_F7F620((__m128 *)v382.m128_u64[0], &v462[10 * v464], &v462[10 * v464], *(_QWORD *)v385 + 712LL, 1);
      v211 = (__int64 *)v433[0];
      if ( (_DWORD)v463 )
        sub_F7F620((__m128 *)v382.m128_u64[0], v462, &v462[10 * v464], v210, 0);
      else
        sub_F7F620(v209, &v462[10 * v464], &v462[10 * v464], v210, 1);
      v216 = (__int64 *)v433[0];
      v217 = (__int64 *)v433[1];
      if ( v211 != v433[0] )
      {
        v218 = v179;
        v219 = (__int64 *)v395;
        v220 = v211;
        v221 = v218;
        while ( 1 )
        {
          v222 = *((unsigned int *)v221 + 6);
          if ( !(_DWORD)v222 )
            break;
          v213 = *v216;
          v214 = (unsigned int)(v222 - 1);
          v223 = *((_QWORD *)v221 + 1);
          v224 = v214 & (((unsigned int)*v216 >> 9) ^ ((unsigned int)*v216 >> 4));
          v225 = (__int64 *)(v223 + 80LL * v224);
          v226 = *v225;
          if ( *v216 != *v225 )
          {
            v267 = 1;
            v215 = 0;
            if ( v226 == -4096 )
            {
LABEL_342:
              v268 = *((_DWORD *)v221 + 4);
              v212 = (unsigned int)(3 * v222);
              v433[0] = v225;
              v269 = v268 + 1;
              if ( 4 * v269 < (unsigned int)v212 )
              {
                v212 = (unsigned int)(v222 - *((_DWORD *)v221 + 5) - v269);
                if ( (unsigned int)v212 > (unsigned int)v222 >> 3 )
                {
LABEL_344:
                  v205 = *v225 == -4096;
                  *((_DWORD *)v221 + 4) = v269;
                  if ( !v205 )
                    --*((_DWORD *)v221 + 5);
                  *v225 = v213;
                  v225[1] = (__int64)(v225 + 3);
                  v225[2] = 0x100000000LL;
                  if ( *((_DWORD *)v216 + 4) )
                    sub_F7EC30(v225 + 1, v216 + 1);
                  v227 = (_QWORD *)(*((_QWORD *)v221 + 1) + 80LL * *((unsigned int *)v221 + 6));
                  goto LABEL_271;
                }
LABEL_351:
                sub_F839D0((__int64)v219, v222, v212, v213, v214, v215);
                sub_F7E640(v219, v216, v382.m128_u64[0]);
                v213 = *v216;
                v225 = (__int64 *)v433[0];
                v269 = *((_DWORD *)v221 + 4) + 1;
                goto LABEL_344;
              }
LABEL_350:
              LODWORD(v222) = 2 * v222;
              goto LABEL_351;
            }
            while ( 1 )
            {
              if ( !v215 && v226 == -8192 )
                v215 = (__int64)v225;
              v224 = v214 & (v267 + v224);
              v225 = (__int64 *)(v223 + 80LL * v224);
              v226 = *v225;
              if ( v213 == *v225 )
                break;
              if ( v226 == -4096 )
              {
                if ( v215 )
                  v225 = (__int64 *)v215;
                goto LABEL_342;
              }
              ++v267;
            }
          }
          v227 = (_QWORD *)(80 * v222 + v223);
LABEL_271:
          sub_F7F3F0((__m128 *)v382.m128_u64[0], v225, v227, (__int64)v219, 1);
          v228 = (char *)(v216 + 10);
          if ( v217 == v216 + 10 )
          {
            v216 = v217;
            if ( v217 == v220 )
              goto LABEL_278;
          }
          else
          {
            v212 = v216[10];
            if ( v212 == -4096 || (v216 += 10, v212 == -8192) )
            {
              do
              {
                v216 = (__int64 *)(v228 + 80);
                if ( v217 == (__int64 *)(v228 + 80) )
                  break;
                v212 = *((_QWORD *)v228 + 10);
                v228 += 80;
              }
              while ( v212 == -8192 || v212 == -4096 );
            }
            if ( v216 == v220 )
            {
LABEL_278:
              v179 = v221;
              goto LABEL_279;
            }
          }
        }
        v433[0] = nullptr;
        goto LABEL_350;
      }
LABEL_279:
      v229 = sub_EDE580(*((_QWORD *)v179 + 5), v407, v212, v213, v214, v215);
      v230 = (__m128i *)(v452 + 48LL * v454);
      if ( (_DWORD)v453 )
      {
        n = v452 + 48LL * v454;
        *(__m128 *)v433 = _mm_loadh_ps((const double *)&n);
        sub_F79BB0((__int64 *)v382.m128_u64[0]);
        v248 = (__m128i *)v433[0];
        v249 = (__m128i *)v433[1];
        if ( v230 != v433[0] )
        {
          v391 = v179;
          n = (size_t)(v229 + 9);
          while ( 1 )
          {
            while ( sub_F7EE10((__int64 *)&v427, v248->m128i_i64, v384) )
            {
              v253 = v417;
              v254 = v248[1].m128i_i64[1];
              v255 = v248[2].m128i_i64[0];
              v256 = v417[2].m128i_i64[0];
              if ( v254 )
              {
                v389 = (__int64 *)v248[2].m128i_i64[0];
                v257 = sub_F81DB0((__int64 *)n, v254, v250, v251, v252, v255);
                v255 = (__int64)v389 + v257;
              }
              v258 = v253[1].m128i_i64[1];
              if ( v258 )
              {
                v389 = (__int64 *)v255;
                v259 = sub_F81DB0((__int64 *)n, v258, v250, v251, v252, v255);
                v255 = (__int64)v389;
                v256 += v259;
              }
              if ( v255 < v256 )
              {
                v253[1] = _mm_loadu_si128(v248 + 1);
                v253[2] = _mm_loadu_si128(v248 + 2);
              }
              v260 = v248 + 3;
              if ( &v248[3] != v249 )
                goto LABEL_326;
LABEL_337:
              v248 = v249;
LABEL_317:
              if ( v230 == v248 )
                goto LABEL_330;
            }
            v262 = v417;
            v263 = (unsigned int)(v428 + 1);
            v264 = 2 * (_DWORD)v429;
            v265 = (unsigned int)(4 * v263);
            v266 = (unsigned int)(3 * (_DWORD)v429);
            v433[0] = v417;
            if ( (unsigned int)v265 >= (unsigned int)v266 )
              goto LABEL_353;
            v266 = (unsigned int)v429 >> 3;
            if ( (int)v429 - HIDWORD(v428) - (int)v263 <= (unsigned int)v266 )
              break;
LABEL_333:
            LODWORD(v428) = v263;
            if ( v262->m128i_i64[0] || v262->m128i_i32[2] )
              --HIDWORD(v428);
            v262->m128i_i64[0] = v248->m128i_i64[0];
            v262->m128i_i32[2] = v248->m128i_i32[2];
            v262[1] = _mm_loadu_si128(v248 + 1);
            v262[2] = _mm_loadu_si128(v248 + 2);
            v260 = v248 + 3;
            if ( &v248[3] == v249 )
              goto LABEL_337;
            do
            {
LABEL_326:
              v248 = v260;
              v261 = v260->m128i_i32[2];
              if ( v260->m128i_i64[0] )
              {
                if ( v261 || v260->m128i_i64[0] != -1 )
                  goto LABEL_317;
              }
              else if ( v261 )
              {
                goto LABEL_317;
              }
              v260 += 3;
              v248 = v260;
            }
            while ( v249 != v260 );
            if ( v230 == v260 )
            {
LABEL_330:
              v179 = v391;
              goto LABEL_280;
            }
          }
          v264 = (int)v429;
LABEL_353:
          sub_F84530((__int64)&v427, v264, v263, v251, v266, v265);
          sub_F7EE10((__int64 *)&v427, v248->m128i_i64, v382.m128_u64[0]);
          LODWORD(v263) = v428 + 1;
          v262 = (__m128i *)v433[0];
          goto LABEL_333;
        }
      }
LABEL_280:
      if ( src[0] != &v386[1] )
        free(src[0]);
      v231 = v462;
      v232 = 80LL * v464;
      if ( v464 )
      {
        v233 = &v462[10 * v464];
        do
        {
          if ( *v231 != -4096 && *v231 != -8192 )
          {
            v234 = (_QWORD *)v231[1];
            if ( v234 != v231 + 3 )
              free(v234);
          }
          v231 += 10;
        }
        while ( v233 != v231 );
        v231 = v462;
        v232 = 80LL * v464;
      }
      operator delete(v231, v232, 8);
      operator delete(v459, (unsigned __int64)v461 << 6, 8);
      operator delete(v456, 32LL * v458, 8);
      operator delete(v452, 48LL * v454, 8);
      if ( v450 != (void *)(*(_QWORD *)v385 + 120LL) )
        free(v450);
      operator delete(v448, 40LL * v449, 8);
      ++v387;
    }
    while ( v393 != (std::__detail::_List_node_base *)v387 );
  }
  v235 = (const char *)(unsigned int)v428;
  v236 = (__int64 *)(v405 + 48);
  v237 = (__int64)v427;
  v238 = &v427[3 * (unsigned int)v429];
  if ( !(_DWORD)v428 || v427 == v238 )
    goto LABEL_294;
  while ( 1 )
  {
    v316 = (__m128i *)v237;
    v317 = *(_DWORD *)(v237 + 8);
    if ( *(_QWORD *)v237 )
      break;
    if ( v317 )
      goto LABEL_452;
LABEL_449:
    v237 += 48;
    if ( v238 == (__m128i *)v237 )
      goto LABEL_294;
  }
  if ( !v317 && *(_QWORD *)v237 == -1 )
    goto LABEL_449;
LABEL_452:
  if ( v238 != (__m128i *)v237 )
  {
    do
    {
      v235 = (const char *)v316;
      if ( !sub_F7EE10(v236, v316->m128i_i64, &v444) )
      {
        v235 = (const char *)v316;
        v322 = (__m128i *)sub_F846D0((__int64)v236, v316->m128i_i64, (__int64)v444, v319, v320, v321);
        v322->m128i_i64[0] = v316->m128i_i64[0];
        v322->m128i_i32[2] = v316->m128i_i32[2];
        v322[1] = _mm_loadu_si128(v316 + 1);
        v322[2] = _mm_loadu_si128(v316 + 2);
      }
      v318 = v316 + 3;
      if ( v238 == &v316[3] )
        break;
      while ( 1 )
      {
        v316 = v318;
        if ( v318->m128i_i64[0] )
        {
          if ( v318->m128i_i64[0] != -1 )
            break;
        }
        if ( v318->m128i_i32[2] )
          break;
        v318 += 3;
        if ( v238 == v318 )
          goto LABEL_294;
      }
    }
    while ( v238 != v318 );
  }
LABEL_294:
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v405 + 40) + 2320LL) + 104LL) >= 0 )
    goto LABEL_295;
  v323 = sub_227D600();
  v328 = 0;
  LODWORD(v445[0]) = 0;
  v445[1] = nullptr;
  v329 = (const __m128i *)v323;
  v447 = 0;
  v390 = (__int64 *)v407;
  *(_QWORD *)v385 = &v444;
  v446.m128_u64[0] = (unsigned __int64)v445;
  v446.m128_u64[1] = (unsigned __int64)v445;
  if ( !(_DWORD)v428 )
    goto LABEL_469;
  v382.m128_u64[0] = (unsigned __int64)&v427[3 * (unsigned int)v429];
  v386 = (__m128 *)src;
  *(__m128 *)src = _mm_loadh_ps((const double *)v382.m128_u64);
  sub_F79BB0((__int64 *)src);
  v334 = (const __m128i *)src[1];
  v382.m128_u64[0] = (unsigned __int64)&v427[3 * (unsigned int)v429];
  if ( (void *)v382.m128_u64[0] == src[0] )
    goto LABEL_469;
  v387 = (__int64 *)v329;
  v335 = (const __m128i *)src[0];
  v336 = v386 + 1;
  v384 = (std::__detail::_List_node_base *)&v422;
  while ( 2 )
  {
    v338 = v335->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
    sub_C05290(v433, 7u, v338, 0);
    if ( (*(_BYTE *)(v338 + 28) & 0x7F) != 0x24 )
    {
      v339 = sub_F80C60(*(_QWORD **)v385, v335 + 1);
      v235 = (const char *)v433;
      sub_9EE8A0((__int64)v339, (__int64)v433);
      goto LABEL_493;
    }
    src[0] = v336;
    sub_F7A450(v386, (_BYTE *)v433[0], (__int64)v433[0] + (unsigned __int64)v433[1]);
    v340 = (__int64 *)src[1];
    if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)src[1] <= 0x11 )
      std::__throw_length_error("basic_string::append");
    v341 = (char *)src[1] + 18;
    if ( src[0] == v336 )
    {
      if ( (unsigned __int64)v341 > 0xF )
      {
        v422 = (char *)src[1] + 18;
        v342 = 15;
        goto LABEL_505;
      }
LABEL_498:
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A9180);
      v344 = (char *)src[1] + (unsigned __int64)src[0];
      *((_WORD *)v344 + 8) = 23911;
      *(__m128i *)v344 = si128;
      v345 = (size_t)src[0];
    }
    else
    {
      v342 = (unsigned __int64)v439;
      if ( v341 <= v439 )
        goto LABEL_498;
      v422 = (char *)src[1] + 18;
LABEL_505:
      v389 = (__int64 *)((char *)src[1] + 18);
      n = (size_t)src[1];
      v348 = (_BYTE *)sub_F79BF0((__int64 *)v384, v342);
      v340 = (__int64 *)n;
      v341 = (char *)v389;
      v345 = (size_t)v348;
      v349 = (__m128 *)src[0];
      if ( n )
      {
        if ( n == 1 )
        {
          *v348 = *(_BYTE *)src[0];
        }
        else
        {
          v350 = n;
          v391 = (char *)v389;
          v389 = (__int64 *)n;
          n = (size_t)src[0];
          v351 = memcpy(v348, src[0], v350);
          v341 = v391;
          v340 = v389;
          v349 = (__m128 *)n;
          v345 = (size_t)v351;
        }
      }
      v352 = _mm_load_si128((const __m128i *)&xmmword_23A9180);
      v353 = (__m128i *)((char *)v340 + v345);
      v353[1].m128i_i16[0] = 23911;
      *v353 = v352;
      if ( v349 != v336 )
      {
        v391 = v341;
        v389 = v340;
        n = v345;
        operator delete(v349);
        v341 = v391;
        v340 = v389;
        v345 = n;
      }
      src[0] = (void *)v345;
      v439 = v422;
    }
    src[1] = v341;
    v346 = *(_QWORD **)v385;
    *((_BYTE *)v340 + v345 + 18) = 0;
    v347 = sub_F80C60(v346, v335 + 1);
    v235 = (const char *)v386;
    sub_A0AAD0((__int64)v347, v386);
    if ( src[0] != v336 )
      operator delete(src[0]);
LABEL_493:
    if ( v335[2].m128i_i64[0] )
    {
      v328 = 1;
    }
    else if ( v335[1].m128i_i64[0] )
    {
      v328 = 1;
    }
    if ( v433[0] != &v434 )
      operator delete(v433[0]);
    v335 += 3;
    if ( v335 != v334 )
    {
      v337 = v335;
      do
      {
        v324 = (_BYTE *)v337->m128i_i64[0];
        v335 = v337;
        v325 = v337->m128i_u32[2];
        if ( v337->m128i_i64[0] && v324 != (_BYTE *)-1LL )
          break;
        if ( (_DWORD)v325 )
          break;
        v337 += 3;
        v335 = v337;
      }
      while ( v334 != v337 );
    }
    if ( (const __m128i *)v382.m128_u64[0] != v335 )
      continue;
    break;
  }
  v329 = (const __m128i *)v387;
LABEL_469:
  if ( v447 )
  {
    sub_995540((__int64)v329, "VFTable indices for ");
    sub_995540((__int64)v329, "'");
    sub_B76F90(v390, v329);
    v354 = sub_995540((__int64)v329, "' (");
    v355 = sub_227B910(v354, v447);
    v356 = " entry";
    if ( v447 != 1 )
      v356 = " entries";
    v357 = sub_995540(v355, v356);
    v235 = ").\n";
    sub_995540(v357, ").\n");
    v358 = (_QWORD *)v446.m128_u64[0];
    if ( v446.m128_u64[0] != *(_QWORD *)v385 + 8LL )
    {
      v359 = -1;
      v384 = nullptr;
      v386 = (__m128 *)src;
      v382.m128_u64[0] = (unsigned __int64)"%4lu | ";
      v382 = _mm_loadh_ps((const double *)v382.m128_u64);
      do
      {
        if ( v328 )
        {
          v360 = v358[6];
          v361 = (std::__detail::_List_node_base *)v358[4];
          if ( v360 != v359 || v384 != v361 )
          {
            sub_995540((__int64)v329, " -- accessible via ");
            if ( v361 )
            {
              v368 = sub_995540((__int64)v329, "vbtable index ");
              v369 = sub_227B910(v368, v361);
              sub_995540(v369, ", ");
            }
            v359 = v360;
            v362 = sub_995540((__int64)v329, "vfptr at offset ");
            v363 = sub_227B930(v362, v360);
            sub_995540(v363, " --\n");
            v384 = v361;
          }
        }
        v364 = (char *)v358[7];
        *(__m128i *)src = _mm_load_si128((const __m128i *)&v382);
        v439 = v364;
        v365 = sub_227C560(v329, v386);
        v235 = (const char *)v358[8];
        v366 = sub_227BF10(v365, v235, v358[9]);
        v367 = *(_BYTE **)(v366 + 32);
        if ( (unsigned __int64)v367 < *(_QWORD *)(v366 + 24) )
        {
          *(_QWORD *)(v366 + 32) = v367 + 1;
          *v367 = 10;
        }
        else
        {
          v235 = byte_9 + 1;
          sub_227BA10(v366, 10);
        }
        v358 = (_QWORD *)std::_Rb_tree_increment(v358, v235);
      }
      while ( v358 != (_QWORD *)(*(_QWORD *)v385 + 8LL) );
    }
    v370 = (_BYTE *)v329[2].m128i_i64[0];
    if ( (unsigned __int64)v370 >= v329[1].m128i_i64[1] )
    {
      v235 = byte_9 + 1;
      sub_227BA10(v329, 10);
    }
    else
    {
      v324 = v370 + 1;
      v329[2].m128i_i64[0] = (__int64)(v370 + 1);
      *v370 = 10;
    }
  }
  if ( v329[2].m128i_i64[0] != v329[1].m128i_i64[0] )
    sub_227B9F0(v329, v235, v324, v325, v326, v327, v382.m128_u64[0], v382.m128_u64[1], v383);
  v330 = (char *)v445[1];
  if ( v445[1] )
  {
    v331 = *(_QWORD *)v385;
    while ( 1 )
    {
      sub_F7F210(v331, *((_QWORD **)v330 + 3));
      v332 = *((char **)v330 + 8);
      v333 = *((char **)v330 + 2);
      if ( v332 == v330 + 80 )
      {
        operator delete(v330);
        if ( !v333 )
          break;
      }
      else
      {
        operator delete(v332);
        operator delete(v330);
        if ( !v333 )
          break;
      }
      v330 = v333;
    }
  }
LABEL_295:
  operator delete(v427, 48LL * (unsigned int)v429, 8);
  return operator delete(v408[0], 24LL * v409, 8);
}
