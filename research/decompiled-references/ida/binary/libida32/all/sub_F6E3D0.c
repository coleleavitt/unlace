__int64 __fastcall sub_F6E3D0(__int64 a1, char *a2)
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
  __int64 v176; // rdi
  __int64 ***v177; // rax
  __int64 **v178; // rdx
  __int64 *v179; // rax
  char *v180; // rbx
  char *v181; // rbp
  size_t v182; // r12
  __int64 v183; // rax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  __int64 v187; // r9
  __int64 v188; // r15
  void *v189; // rdi
  __int64 v190; // rsi
  __m128 *v191; // r15
  __int64 v192; // rax
  __int64 v193; // rbp
  const __m128i *v194; // r14
  const __m128i *v195; // r12
  const __m128i *v196; // r13
  const __m128i *v197; // rbp
  __int64 v198; // r15
  const __m128i *v199; // rax
  __m128i *v200; // rsi
  const __m128i *v201; // rax
  __int64 *v202; // rdx
  int v203; // ecx
  unsigned __int64 v204; // r15
  void *v205; // r13
  unsigned __int64 v206; // r12
  __int64 v207; // rbp
  bool v208; // zf
  __int64 v209; // r9
  _QWORD *m128i_i64; // rax
  void *v211; // r12
  __m128 *v212; // r15
  __int64 v213; // rbp
  __int64 *v214; // r14
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  __int64 v218; // r9
  __int64 *v219; // r12
  __int64 *v220; // r13
  char *v221; // rax
  __int64 *v222; // r15
  __int64 *v223; // rbx
  char *v224; // r14
  __int64 v225; // rsi
  __int64 v226; // rdx
  unsigned int v227; // eax
  __int64 *v228; // rbp
  __int64 v229; // rdi
  _QWORD *v230; // rdx
  char *v231; // rax
  _QWORD *v232; // r14
  __m128i *v233; // rbp
  _QWORD *v234; // rbp
  _QWORD *v235; // r12
  _QWORD *v236; // rdi
  unsigned __int64 v237; // rsi
  __int64 *v238; // r12
  __int64 v239; // rax
  __m128i *v240; // rbp
  __int64 *v241; // rbp
  __int64 *i1; // r13
  __int64 v243; // r12
  __int64 v244; // rbx
  __int64 v245; // rax
  std::__detail::_List_node_base *v246; // rbx
  std::__detail::_List_node_base *v247; // r12
  void *v248; // rdi
  std::__detail::_List_node_base *v249; // rbp
  __m128i *v250; // r15
  __m128i *v251; // r12
  __int64 *v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __m128i *v255; // rbx
  __int64 v256; // rsi
  __int64 v257; // r9
  __int64 v258; // r14
  __int64 v259; // rax
  __int64 v260; // rsi
  __int64 v261; // rax
  __m128i *v262; // rax
  __int32 v263; // ecx
  __m128i *v264; // rax
  __int64 v265; // rdx
  int v266; // esi
  __int64 v267; // r9
  __int64 v268; // r8
  int v269; // r10d
  int v270; // eax
  int v271; // eax
  int v272; // ecx
  __int64 v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // r8
  int v276; // esi
  __int64 v277; // rdx
  char *v278; // rcx
  char *v279; // rcx
  __int64 *v280; // r13
  __int64 *v281; // rbp
  __int64 *v282; // rbx
  __int64 v283; // r13
  __int64 v284; // rax
  char *v285; // rax
  char *v286; // rsi
  __int64 *v287; // rax
  __int64 v288; // rdx
  size_t v289; // r14
  size_t v290; // r12
  size_t v291; // r15
  char v292; // al
  __int64 v293; // r13
  __int64 v294; // rcx
  char *v295; // r8
  __int64 v296; // r9
  __int64 v297; // rdx
  __int64 *v298; // rsi
  char *v299; // rdi
  size_t *v300; // rax
  int v301; // edx
  size_t v302; // rcx
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 v305; // r8
  __int64 v306; // r9
  char v307; // al
  const __m128i *v308; // rax
  __int64 v309; // rax
  __int64 *v310; // r15
  unsigned __int64 *v311; // rax
  unsigned __int64 v312; // rsi
  unsigned __int64 v313; // rdi
  unsigned __int64 v314; // rax
  unsigned int v315; // eax
  __int64 v316; // rax
  _QWORD *v317; // rax
  __m128i *v318; // rbx
  int v319; // ecx
  __m128i *v320; // rax
  __int64 v321; // rcx
  __int64 v322; // r8
  __int64 v323; // r9
  __m128i *v324; // rax
  __int64 v325; // rax
  _BYTE *v326; // rdx
  __int64 v327; // rcx
  __int64 v328; // r8
  __int64 v329; // r9
  char v330; // bl
  const __m128i *v331; // r15
  char *v332; // rbx
  __int64 v333; // r12
  char *v334; // rdi
  char *v335; // rbp
  const __m128i *v336; // rbp
  const __m128i *v337; // r15
  __m128 *v338; // r12
  const __m128i *v339; // rax
  unsigned __int64 v340; // r14
  _QWORD *v341; // rax
  __int64 *v342; // rcx
  char *v343; // r9
  unsigned __int64 v344; // rsi
  __m128i si128; // xmm0
  char *v346; // rax
  size_t v347; // r10
  _QWORD *v348; // rdi
  _QWORD *v349; // rax
  _BYTE *v350; // rax
  __m128 *v351; // r11
  size_t v352; // rdx
  void *v353; // rax
  __m128i v354; // xmm0
  __m128i *v355; // rax
  __int64 v356; // rax
  __int64 v357; // rax
  const char *v358; // rsi
  __int64 v359; // rax
  _QWORD *v360; // r14
  __int64 v361; // r13
  __int64 v362; // rbp
  std::__detail::_List_node_base *v363; // r12
  __int64 v364; // rax
  __int64 v365; // rax
  char *v366; // rax
  __int64 v367; // rax
  __int64 v368; // rax
  _BYTE *v369; // rdx
  __int64 v370; // rax
  __int64 v371; // rax
  _BYTE *v372; // rax
  __int64 v373; // rbx
  int v374; // ebp
  __int64 v375; // rdx
  __int64 v376; // rcx
  __int64 v377; // r8
  __int64 v378; // r9
  _QWORD *v379; // rax
  unsigned int v380; // edx
  unsigned __int64 v381; // rax
  __int64 v382; // [rsp-10h] [rbp-5A8h]
  __int64 v383; // [rsp-8h] [rbp-5A0h]
  __m128 v384; // [rsp+0h] [rbp-598h] BYREF
  __int64 v385; // [rsp+10h] [rbp-588h]
  std::__detail::_List_node_base *v386; // [rsp+18h] [rbp-580h]
  int v387[2]; // [rsp+20h] [rbp-578h]
  __m128 *v388; // [rsp+28h] [rbp-570h]
  __int64 *v389; // [rsp+30h] [rbp-568h] BYREF
  size_t n; // [rsp+38h] [rbp-560h] BYREF
  __int64 *v391; // [rsp+40h] [rbp-558h]
  __int64 *v392; // [rsp+48h] [rbp-550h]
  char *v393; // [rsp+50h] [rbp-548h]
  __int64 *v394; // [rsp+58h] [rbp-540h]
  std::__detail::_List_node_base *v395; // [rsp+60h] [rbp-538h]
  char *v396; // [rsp+68h] [rbp-530h]
  __int64 v397; // [rsp+70h] [rbp-528h]
  void **v398; // [rsp+78h] [rbp-520h]
  char *v399; // [rsp+80h] [rbp-518h]
  int v400[2]; // [rsp+88h] [rbp-510h]
  __int64 *v401; // [rsp+90h] [rbp-508h]
  unsigned __int64 v402; // [rsp+98h] [rbp-500h]
  __m128i v403; // [rsp+A0h] [rbp-4F8h] BYREF
  __int64 v404; // [rsp+B0h] [rbp-4E8h]
  int v405[2]; // [rsp+B8h] [rbp-4E0h]
  __int64 *v406; // [rsp+C0h] [rbp-4D8h]
  __int64 v407; // [rsp+C8h] [rbp-4D0h]
  __int64 **v408; // [rsp+D0h] [rbp-4C8h]
  char *v409; // [rsp+D8h] [rbp-4C0h] BYREF
  _QWORD v410[2]; // [rsp+E0h] [rbp-4B8h] BYREF
  int v411; // [rsp+F0h] [rbp-4A8h]
  std::__detail::_List_node_base *v412[2]; // [rsp+100h] [rbp-498h] BYREF
  __int64 v413; // [rsp+110h] [rbp-488h]
  _QWORD *v414; // [rsp+120h] [rbp-478h] BYREF
  __int64 v415; // [rsp+128h] [rbp-470h]
  unsigned int v416; // [rsp+130h] [rbp-468h]
  void *v417[2]; // [rsp+138h] [rbp-460h]
  __int64 v418; // [rsp+148h] [rbp-450h]
  __m128i *v419; // [rsp+150h] [rbp-448h] BYREF
  int v420; // [rsp+158h] [rbp-440h] BYREF
  __m128 v421; // [rsp+160h] [rbp-438h]
  int *v422; // [rsp+170h] [rbp-428h]
  __int64 v423; // [rsp+178h] [rbp-420h]
  char *v424; // [rsp+180h] [rbp-418h] BYREF
  __int64 v425; // [rsp+188h] [rbp-410h]
  __m128 v426; // [rsp+190h] [rbp-408h]
  __int64 v427; // [rsp+1A0h] [rbp-3F8h]
  __int64 v428; // [rsp+1A8h] [rbp-3F0h]
  __m128i *v429; // [rsp+1B0h] [rbp-3E8h] BYREF
  __int64 v430; // [rsp+1B8h] [rbp-3E0h]
  _QWORD *v431; // [rsp+1C0h] [rbp-3D8h]
  unsigned __int64 *v432; // [rsp+1C8h] [rbp-3D0h]
  unsigned __int64 *v433; // [rsp+1D0h] [rbp-3C8h]
  __int64 v434; // [rsp+1D8h] [rbp-3C0h]
  void *v435[2]; // [rsp+1E0h] [rbp-3B8h] BYREF
  _QWORD *v436; // [rsp+1F0h] [rbp-3A8h] BYREF
  void **v437; // [rsp+1F8h] [rbp-3A0h]
  void **v438; // [rsp+200h] [rbp-398h]
  __int64 v439; // [rsp+208h] [rbp-390h]
  void *src[2]; // [rsp+210h] [rbp-388h] BYREF
  char *v441; // [rsp+220h] [rbp-378h]
  void *ptr; // [rsp+228h] [rbp-370h]
  __int64 v443; // [rsp+230h] [rbp-368h]
  __int64 v444; // [rsp+238h] [rbp-360h]
  int v445; // [rsp+248h] [rbp-350h]
  char *v446; // [rsp+280h] [rbp-318h] BYREF
  void *v447[2]; // [rsp+288h] [rbp-310h] BYREF
  __m128 v448; // [rsp+298h] [rbp-300h]
  __int64 v449; // [rsp+2A8h] [rbp-2F0h]
  __int64 v450; // [rsp+2D0h] [rbp-2C8h]
  void *v451; // [rsp+2E8h] [rbp-2B0h]
  __int64 v452; // [rsp+2F0h] [rbp-2A8h]
  __int64 v453; // [rsp+4F8h] [rbp-A0h]
  __int64 v454; // [rsp+500h] [rbp-98h]
  unsigned int v455; // [rsp+508h] [rbp-90h]
  char v456; // [rsp+510h] [rbp-88h]
  __int64 *v457; // [rsp+518h] [rbp-80h]
  __int64 v458; // [rsp+520h] [rbp-78h]
  unsigned int v459; // [rsp+528h] [rbp-70h]
  __int64 *v460; // [rsp+530h] [rbp-68h]
  __int64 v461; // [rsp+538h] [rbp-60h]
  unsigned int v462; // [rsp+540h] [rbp-58h]
  _QWORD *v463; // [rsp+548h] [rbp-50h]
  __int64 v464; // [rsp+550h] [rbp-48h]
  unsigned int v465; // [rsp+558h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 88);
  v3 = *(_QWORD *)(a1 + 72);
  v409 = a2;
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
  v407 = a1;
  v384.m128_u64[0] = (unsigned __int64)v412;
  v9 = _mm_loadl_epi64((const __m128i *)&v384);
  v386 = (std::__detail::_List_node_base *)v412;
  v410[0] = 0;
  v403 = _mm_unpacklo_epi64(v9, v9);
  v410[1] = 0;
  v411 = 0;
  v10 = (__int64 **)operator new(0x20u);
  v11 = v409;
  v12 = v10;
  v408 = v10;
  *v10 = (__int64 *)(v10 + 2);
  v10[1] = (__int64 *)0x200000000LL;
  sub_F61A00((__int64 *)a1, 0, v11, (__int64)v10, v13, v14);
  v15 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v400 = v409;
  *(_QWORD *)v387 = v15;
  v20 = sub_EBA840(v15, v409, v16, v17, v18, v19);
  v21 = *((unsigned int *)v12 + 2);
  v22 = _mm_load_si128(&v403);
  *(_QWORD *)v405 = v20;
  v23 = *v12;
  v414 = nullptr;
  *(_OWORD *)v417 = 0;
  v415 = 0;
  v416 = 0;
  v418 = 0;
  *(__m128i *)v412 = v22;
  v413 = 0;
  v406 = &v23[v21];
  if ( v23 != v406 )
  {
    v394 = v23;
    v404 = (__int64)&v414;
    while ( 1 )
    {
      sub_F6DF70(
        *(__int64 *)v387,
        *(__int64 *)v405,
        *(char **)v400,
        0,
        *(_QWORD *)(*v394 + 8),
        *(_QWORD *)(*v394 + 104),
        v404,
        v386);
      v26 = v382;
      v27 = v383;
      if ( !(_DWORD)v415 )
        break;
      j = (unsigned int)(4 * v415);
      v26 = 64;
      v28 = v414;
      if ( (unsigned int)j < 0x40 )
        j = 64;
      if ( (unsigned int)j >= v416 )
      {
        v29 = 2LL * v416;
LABEL_13:
        for ( i = &v28[v29]; i != v28; *(v28 - 1) = 0x7FFFFFFFFFFFFFFFLL )
        {
          *v28 = -4096;
          v28 += 2;
        }
        v415 = 0;
        goto LABEL_16;
      }
      if ( (_DWORD)v415 == 1 )
      {
        v373 = 2048;
        v374 = 128;
      }
      else
      {
        _BitScanReverse(&v315, v415 - 1);
        v25 = 33 - (v315 ^ 0x1F);
        v316 = (unsigned int)(1 << (33 - (v315 ^ 0x1F)));
        if ( (int)v316 < 64 )
          v316 = 64;
        if ( (_DWORD)v316 == v416 )
        {
          v415 = 0;
          j = -4096;
          v317 = &v414[2 * v316];
          do
          {
            *v28 = -4096;
            v28 += 2;
            *(v28 - 1) = 0x7FFFFFFFFFFFFFFFLL;
          }
          while ( v317 != v28 );
          goto LABEL_16;
        }
        v380 = 4 * (int)v316 / 3u;
        v381 = (((v380 + 1)
               | ((unsigned __int64)(v380 + 1) >> 1)
               | (((v380 + 1) | ((unsigned __int64)(v380 + 1) >> 1)) >> 2)) >> 4)
             | (v380 + 1)
             | ((unsigned __int64)(v380 + 1) >> 1)
             | (((v380 + 1) | ((unsigned __int64)(v380 + 1) >> 1)) >> 2)
             | (((((v380 + 1)
                 | ((unsigned __int64)(v380 + 1) >> 1)
                 | (((v380 + 1) | ((unsigned __int64)(v380 + 1) >> 1)) >> 2)) >> 4)
               | (v380 + 1)
               | ((unsigned __int64)(v380 + 1) >> 1)
               | (((v380 + 1) | ((unsigned __int64)(v380 + 1) >> 1)) >> 2)) >> 8);
        v374 = (v381 | (v381 >> 16)) + 1;
        v373 = 16 * ((v381 | (v381 >> 16)) + 1);
      }
      operator delete();
      v416 = v374;
      v379 = (_QWORD *)sub_220C370(v373, 8, v375, v376, v377, v378);
      v415 = 0;
      v25 = -4096;
      v414 = v379;
      for ( j = (__int64)&v379[2 * v416]; (_QWORD *)j != v379; *(v379 - 1) = 0x7FFFFFFFFFFFFFFFLL )
      {
        *v379 = -4096;
        v379 += 2;
      }
LABEL_16:
      if ( v417[0] != v417[1] )
        v417[1] = v417[0];
      v31 = v412[0];
      v32 = v412[0];
      if ( v412[0] == v386 )
      {
        *(_DWORD *)(*v394 + 88) = 0;
        goto LABEL_226;
      }
      do
      {
        v389 = *(__int64 **)v32;
        v388 = (__m128 *)((char *)v32 + 16);
        if ( v31 == v386 )
          goto LABEL_32;
        while ( v388 == (__m128 *)((char *)v31 + 16) )
        {
LABEL_30:
          v31 = *(std::__detail::_List_node_base **)v31;
          if ( v31 == v386 )
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
          v384.m128_i32[0] = 1;
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
            v41 = v27 & (v384.m128_i32[0] + v41);
            ++v384.m128_i32[0];
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
        --v413;
        std::__detail::_List_node_base::_M_unhook(v32);
        v108 = *((void **)v32 + 5);
        if ( v108 )
          operator delete(v108);
        operator delete();
        operator delete(v32);
LABEL_31:
        v31 = v412[0];
LABEL_32:
        v32 = (std::__detail::_List_node_base *)v389;
      }
      while ( v389 != (__int64 *)v386 );
      v397 = *v394;
      *(_DWORD *)(v397 + 88) = 0;
      if ( v31 == v386 )
        goto LABEL_226;
      v399 = (char *)v31 + 16;
      if ( v413 == 1 )
        goto LABEL_299;
      v420 = 0;
      n = (size_t)&v419;
      v421.m128_u64[1] = (unsigned __int64)&v420;
      v422 = &v420;
      v384.m128_u64[0] = (unsigned __int64)&v424;
      v398 = src;
      v421.m128_u64[0] = 0;
      v423 = 0;
      v396 = (char *)v31 + 16;
      v399 = nullptr;
      v388 = (__m128 *)&v429;
      while ( 2 )
      {
        LODWORD(v425) = 0;
        v43 = -1;
        v426.m128_u64[0] = 0;
        v428 = 0;
        v426.m128_u64[1] = v384.m128_u64[0] + 8;
        v427 = v384.m128_u64[0] + 8;
        v393 = **((char ***)v31 + 5);
        v44 = v393;
        v45 = sub_EBA840(*(__int64 *)v387, v393, j, v25, v26, v27);
        v50 = *((__int64 **)v31 + 5);
        v391 = v45;
        v392 = *((__int64 **)v31 + 6);
        if ( v50 == v392 )
          goto LABEL_64;
        v51 = v50;
        v395 = v31;
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
          v55 = sub_EBA840(*(__int64 *)v387, v52, v46, v47, v48, v49);
          v56 = *((_QWORD *)v52 + 13);
          v389 = v55;
          sub_6E4DB0((__int64 *)(v56 + 96), v56, v57, v58, v59, v60);
          v65 = *((_QWORD *)v52 + 16);
          if ( (*(_BYTE *)(v65 + 24) & 1) != 0 )
            v66 = sub_B72C40(v65);
          else
            v66 = *(_QWORD *)(v65 + 24);
          sub_6E4DB0((__int64 *)(*((_QWORD *)v52 + 13) + 96LL), *((_QWORD *)v52 + 13), v61, v62, v63, v64);
          v67 = *((_QWORD *)v52 + 13);
          v68 = (__int64 **)(v66 + 24LL * *(unsigned int *)(*((_QWORD *)v52 + 16) + 16LL));
          sub_6E4DB0((__int64 *)(v67 + 96), v67, v69, v70, v71, v72);
          v75 = *((_QWORD *)v52 + 16);
          if ( (*(_BYTE *)(v75 + 24) & 1) != 0 )
            v76 = (__int64 **)sub_B72C40(v75);
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
              v142 = sub_F55F20(v76[2], v67, v79, 0xAAAAAAAAAAAAAAABLL, v73);
              if ( v54 == (char *)sub_F3F530(*(_QWORD *)(v142 & 0xFFFFFFFFFFFFFFF0LL), v67, v143, v144, v145, v146) )
                goto LABEL_58;
              v76 += 3;
            }
            v147 = sub_F55F20(v76[2], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F3F530(*(_QWORD *)(v147 & 0xFFFFFFFFFFFFFFF0LL), v67, v148, v149, v150, v151) )
              goto LABEL_58;
            v76 += 3;
LABEL_139:
            v119 = sub_F55F20(v76[2], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F3F530(*(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF0LL), v67, v120, v121, v122, v123) )
              v68 = v76;
            goto LABEL_59;
          }
          v80 = &v76[12 * v79];
          while ( 1 )
          {
            v84 = *(_QWORD *)(*v76[2] & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v84 + 8) & 0xF) != 0 )
              v84 = sub_F411C0(*v76[2], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F3F530(*(_QWORD *)(v84 & 0xFFFFFFFFFFFFFFF0LL), v67, v79, v77, v73, v74) )
              break;
            v81 = *(_QWORD *)(*v76[5] & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v81 + 8) & 0xF) != 0 )
              v81 = sub_F411C0(*v76[5], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F3F530(*(_QWORD *)(v81 & 0xFFFFFFFFFFFFFFF0LL), v67, v79, v77, v73, v74) )
            {
              v68 = v76 + 3;
              goto LABEL_59;
            }
            v82 = *(_QWORD *)(*v76[8] & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v82 + 8) & 0xF) != 0 )
              v82 = sub_F411C0(*v76[8], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F3F530(*(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFF0LL), v67, v79, v77, v73, v74) )
            {
              v68 = v76 + 6;
              goto LABEL_59;
            }
            v83 = *(_QWORD *)(*v76[11] & 0xFFFFFFFFFFFFFFF0LL);
            if ( (*(_BYTE *)(v83 + 8) & 0xF) != 0 )
              v83 = sub_F411C0(*v76[11], v67, v79, v77, v73);
            if ( v54 == (char *)sub_F3F530(*(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFF0LL), v67, v79, v77, v73, v74) )
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
            v43 = sub_F5E070(v391 + 9, (__int64)v54, (__int64 *)v79, v77, v73, v74);
          else
            v43 += sub_F5D7C0(v389 + 9, (__int64)v54, v79, v77, v73, v74);
          v52 = v54;
LABEL_62:
          v53 += 2;
          if ( v392 != v53 )
            continue;
          break;
        }
        v31 = v395;
LABEL_64:
        sub_F5F3C0((__int64)v398, v393, 0, (__int64)v393);
        v85 = *(_QWORD *)(v397 + 8) + 64LL;
        v389 = *(__int64 **)(v397 + 8);
        v86 = sub_B6AC30(v85);
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
          && !(unsigned int)sub_B747A0(v152)
          || (unsigned __int8)sub_B59AB0((__int64)v87) )
        {
          goto LABEL_170;
        }
        v154 = (*(__int64 (__fastcall **)(_QWORD *))(*v87 + 32LL))(v87);
        if ( v445 )
        {
          v156 = 1;
          for ( nn = (v445 - 1)
                   & (((0xBF58476D1CE4E5B9LL
                      * ((unsigned int)(37 * v43)
                       | ((unsigned __int64)(((unsigned int)v154 >> 9) ^ ((unsigned int)v154 >> 4)) << 32))) >> 31)
                    ^ (756364221 * v43)); ; nn = (v445 - 1) & v159 )
          {
            v158 = (__int64 *)(v444 + 40LL * nn);
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
        v435[0] = v160;
        sub_F5D5B0((__m128 *)&v446, *(__int64 *)v387, (__int64)v160, (__int64)v87, v155, v156);
        if ( !v447[1] && !v447[0] )
          goto LABEL_170;
        v161 = *(_QWORD *)(sub_B68470((__int64)v435[0] + 72) + 16);
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
          v279 = *((char **)v31 + 5);
LABEL_199:
          if ( v166 != 2 )
          {
            if ( v166 != 3 )
            {
              if ( v166 != 1 )
                goto LABEL_170;
              goto LABEL_202;
            }
            if ( v162 == *(_QWORD *)v279 )
              goto LABEL_203;
            v279 += 16;
          }
          if ( v162 == *(_QWORD *)v279 )
            goto LABEL_203;
          v279 += 16;
LABEL_202:
          if ( v162 != *(_QWORD *)v279 )
            goto LABEL_170;
          goto LABEL_203;
        }
        if ( v162 == *(_QWORD *)v164 )
        {
          v279 = *((char **)v31 + 5);
        }
        else if ( v162 == *((_QWORD *)v164 + 2) )
        {
          v279 = v164 + 16;
        }
        else if ( v162 == *((_QWORD *)v164 + 4) )
        {
          v279 = v164 + 32;
        }
        else
        {
          v167 = &v164[64 * v165];
          if ( v162 == *((_QWORD *)v164 + 6) )
          {
            v279 = v164 + 48;
          }
          else
          {
            while ( 1 )
            {
              v279 = v164 + 64;
              if ( v167 == v164 + 64 )
              {
                v166 = (v163 - v279) >> 4;
                goto LABEL_199;
              }
              if ( v162 == *((_QWORD *)v164 + 8) )
                goto LABEL_203;
              if ( v162 == *((_QWORD *)v164 + 10) )
              {
                v279 = v164 + 80;
                goto LABEL_203;
              }
              if ( v162 == *((_QWORD *)v164 + 12) )
              {
                v279 = v164 + 96;
                goto LABEL_203;
              }
              if ( v162 == *((_QWORD *)v164 + 14) )
                break;
              v164 += 64;
            }
            v279 = v164 + 112;
          }
        }
LABEL_203:
        if ( v163 != v279 )
          sub_F5B200(v384.m128_u64[0], (unsigned __int64 *)v435);
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
        LODWORD(v430) = 0;
        v90 = v426.m128_i64[1];
        v431 = nullptr;
        v91 = n + 8;
        v434 = 0;
        v432 = &v388->m128_u64[1];
        v433 = &v388->m128_u64[1];
        if ( v426.m128_u64[1] != v384.m128_u64[0] + 8 )
        {
          do
          {
            v92 = (_QWORD *)v421.m128_u64[0];
            if ( !v421.m128_u64[0] )
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
              sub_F5B200(v388, (unsigned __int64 *)(v90 + 32));
            v90 = std::_Rb_tree_increment();
          }
          while ( v90 != v384.m128_u64[0] + 8 );
          if ( v434 )
          {
            v95 = v421.m128_i64[1];
            LODWORD(v435[1]) = 0;
            v96 = n;
            v436 = nullptr;
            v437 = &v435[1];
            v438 = &v435[1];
            v439 = 0;
            if ( v421.m128_u64[1] == n + 8 )
              goto LABEL_218;
            do
            {
              v97 = (_QWORD *)v426.m128_u64[0];
              if ( !v426.m128_u64[0] )
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
                sub_F5B200(v435, (unsigned __int64 *)(v95 + 32));
              v95 = std::_Rb_tree_increment();
            }
            while ( v95 != v96 + 8 );
            if ( !v439 )
            {
LABEL_218:
              v168 = v421.m128_u64[0];
              if ( v426.m128_u64[0] )
              {
                v169 = (int *)v427;
                v170 = v428;
                v389 = (__int64 *)v426.m128_u64[1];
                if ( v421.m128_u64[0] )
                {
                  v426 = v421;
                  v427 = (__int64)v422;
                  v421 = _mm_loadh_ps((const double *)&v389);
                  v422 = v169;
                  *(_QWORD *)(v168 + 8) = v384.m128_u64[0] + 8;
                  *(_QWORD *)(v421.m128_u64[0] + 8) = n + 8;
                  v171 = v423;
                  v423 = v170;
                  v428 = v171;
                }
                else
                {
                  v420 = v425;
                  v422 = (int *)v427;
                  v421 = _mm_loadh_ps((const double *)&v389);
                  *(_QWORD *)(v426.m128_u64[0] + 8) = n + 8;
                  v423 = v170;
                  v426.m128_u64[0] = 0;
                  v426.m128_u64[1] = v384.m128_u64[0] + 8;
                  v427 = v384.m128_u64[0] + 8;
                  v428 = 0;
                }
                v399 = v396;
              }
              else
              {
                v399 = v396;
                if ( v421.m128_u64[0] )
                {
                  v426 = v421;
                  LODWORD(v425) = v420;
                  v427 = (__int64)v422;
                  *(_QWORD *)(v421.m128_u64[0] + 8) = v384.m128_u64[0] + 8;
                  v421.m128_u64[0] = 0;
                  v428 = v423;
                  v423 = 0;
                  v421.m128_u64[1] = n + 8;
                  v422 = (int *)(n + 8);
                }
              }
            }
            else
            {
              v100 = sub_A3ED80(*(__int64 *)v387);
              v101 = v432[4];
              v102 = (__int64)v437[4];
              sub_FA3370(&v446, v100, *(unsigned int *)(*(_QWORD *)v400 + 24LL), 2364);
              sub_AC60B0((unsigned __int8 **)&v446, *(__int64 *)v400, 0xAu);
              sub_AC6300((__int64)&v446);
              sub_FA3370(&v446, v100, *(unsigned int *)(v101 + 24), 2507);
              sub_AC60B0((unsigned __int8 **)&v446, v101, 0xAu);
              sub_AC6300((__int64)&v446);
              sub_FA3370(&v446, v100, *(unsigned int *)(v102 + 24), 2507);
              sub_AC60B0((unsigned __int8 **)&v446, v102, 0xAu);
              sub_AC6300((__int64)&v446);
            }
            sub_F5B1C0((__int64)v435, v436);
          }
          v89 = v431;
        }
        sub_F5B1C0((__int64)v388, v89);
        operator delete();
        sub_F5B1C0(v384.m128_i64[0], v426.m128_u64[0]);
        v31 = *(std::__detail::_List_node_base **)v31;
        if ( v31 != v386 )
        {
          v396 = (char *)v31 + 16;
          continue;
        }
        break;
      }
      if ( !v399 )
        v399 = (char *)v412[0] + 16;
      sub_F5B1C0(n, v421.m128_u64[0]);
LABEL_299:
      if ( v399 )
      {
        v241 = *((__int64 **)v399 + 3);
        for ( i1 = *((__int64 **)v399 + 4); i1 != v241; ++*(_DWORD *)(v244 + 88) )
        {
          while ( 1 )
          {
            v243 = *v241;
            v244 = *v394;
            v245 = *(unsigned int *)(*v394 + 88);
            if ( v245 + 1 > (unsigned __int64)*(unsigned int *)(*v394 + 92) )
              break;
            v241 += 2;
            *(_QWORD *)(*(_QWORD *)(v244 + 80) + 8 * v245) = v243;
            ++*(_DWORD *)(v244 + 88);
            if ( i1 == v241 )
              goto LABEL_305;
          }
          v241 += 2;
          sub_22134E0(v244 + 80, v244 + 96, v245 + 1, 8);
          *(_QWORD *)(*(_QWORD *)(v244 + 80) + 8LL * *(unsigned int *)(v244 + 88)) = v243;
        }
      }
LABEL_305:
      v246 = v412[0];
      v247 = v386;
      if ( v412[0] != v386 )
      {
        while ( 1 )
        {
          v248 = *((void **)v246 + 5);
          v249 = *(std::__detail::_List_node_base **)v246;
          if ( v248 )
            operator delete(v248);
          operator delete();
          operator delete(v246);
          if ( v249 == v247 )
            break;
          v246 = v249;
        }
      }
LABEL_226:
      v172 = _mm_load_si128(&v403);
      ++v394;
      v413 = 0;
      *(__m128i *)v412 = v172;
      if ( v406 == v394 )
      {
        if ( v417[0] )
          operator delete(v417[0]);
        goto LABEL_229;
      }
    }
    if ( !HIDWORD(v415) )
      goto LABEL_16;
    v28 = v414;
    v29 = 2LL * v416;
    if ( v416 > 0x40 )
    {
      operator delete();
      v414 = nullptr;
      v415 = 0;
      v416 = 0;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
LABEL_229:
  v173 = v407 + 72;
  operator delete();
  v174 = (void **)sub_F60C60(v173, (__int64 *)&v409);
  v175 = *v174;
  *v174 = v408;
  if ( v175 )
  {
    sub_F5B600((__int64)v175);
    operator delete(v175, 0x20u);
  }
  v176 = v173;
  v429 = nullptr;
  v430 = 0;
  LODWORD(v431) = 0;
  v177 = (__int64 ***)sub_F60C60(v173, (__int64 *)&v409);
  v178 = *v177;
  v179 = **v177;
  v395 = (std::__detail::_List_node_base *)&v179[*((unsigned int *)v178 + 2)];
  if ( v395 != (std::__detail::_List_node_base *)v179 )
  {
    v389 = v179;
    v180 = (char *)v407;
    v404 = (__int64)&v414;
    v386 = (std::__detail::_List_node_base *)&v419;
    v392 = (__int64 *)&v424;
    v388 = (__m128 *)src;
    *(_QWORD *)v387 = &v446;
    v394 = (__int64 *)(v407 + 96);
    v384.m128_u64[0] = (unsigned __int64)v435;
    v397 = v407 + 8;
    v396 = (char *)v410;
    do
    {
      v181 = v409;
      v182 = *v389;
      v446 = v180;
      v183 = sub_B685F0((__int64)v409);
      n = (size_t)v181;
      *(__m128 *)v447 = _mm_loadh_ps((const double *)&n);
      sub_EBA840(v183, v181, v184, v185, v186, v187);
      v188 = *(_QWORD *)v387;
      n = v182;
      v448 = _mm_loadh_ps((const double *)&n);
      sub_F5F3C0(*(_QWORD *)v387 + 40LL, v181, 0, (__int64)v181);
      v453 = 0;
      v451 = (void *)(v188 + 120);
      v452 = 0x4000000000LL;
      v454 = 0;
      v455 = 0;
      v456 = 0;
      v457 = nullptr;
      v458 = 0;
      v459 = 0;
      v460 = nullptr;
      v461 = 0;
      v462 = 0;
      v463 = nullptr;
      v464 = 0;
      v465 = 0;
      if ( (*(_BYTE *)(*((_QWORD *)v447[0] + 290) + 14LL) & 0x10) != 0 )
      {
        v456 = 1;
        sub_F59E60(v188 + 104, (unsigned __int64)v447[1] | 3);
      }
      src[0] = nullptr;
      src[1] = nullptr;
      ptr = &v388[2].m128_u16[4];
      LODWORD(v441) = 0;
      v443 = 0x800000000LL;
      sub_F64290(*(__int64 **)v387, (__int64)v447[1], 0, 0, 0, (__int64)v388);
      if ( (_DWORD)v458 )
      {
        v280 = v457;
        v281 = &v457[4 * v459];
        if ( v457 != v281 )
        {
          while ( *v280 == -8192 || *v280 == -4096 )
          {
            v280 += 4;
            if ( v281 == v280 )
              goto LABEL_236;
          }
          v391 = (__int64 *)v180;
          v282 = v280;
LABEL_379:
          v283 = *v282;
          v284 = *(_QWORD *)(sub_B68470(*v282 + 72) + 16);
          if ( (v284 & 4) != 0 )
            v285 = *(char **)(v284 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v285 = (char *)(v284 & 0xFFFFFFFFFFFFFFF8LL);
          v286 = v285 - 64;
          if ( v285 )
            v285 -= 64;
          if ( v447[1] != v285 || *((_BYTE *)v282 + 24) )
            goto LABEL_384;
          v289 = v282[2];
          v290 = 0;
          if ( *(_DWORD *)(v448.m128_u64[1] + 64) )
          {
            v286 = *(char **)(v448.m128_u64[1] + 56);
            v290 = *(_QWORD *)v286;
          }
          v291 = *(_QWORD *)(v448.m128_u64[1] + 16);
          v292 = *(_BYTE *)(v283 + 28) & 0x7F;
          n = v282[1];
          if ( v292 == 36 )
          {
            LODWORD(v435[1]) = 0;
            v435[0] = (void *)(v283 & 0xFFFFFFFFFFFFFFF8LL);
            v293 = *(_QWORD *)v387 + 632LL;
            if ( !sub_F5B0D0((__int64 *)(*(_QWORD *)v387 + 632LL), (__int64 *)v384.m128_u64[0], v392) )
            {
              v297 = (__int64)v424;
              v298 = (__int64 *)v384.m128_u64[0];
              v299 = (char *)v293;
              goto LABEL_398;
            }
LABEL_401:
            v300 = (size_t *)(v424 + 16);
            goto LABEL_399;
          }
          v435[0] = nullptr;
          LODWORD(v435[1]) = 0;
          if ( !sub_B55E40(v283) )
          {
            v435[0] = (void *)(v283 | (__int64)v435[0] & 7);
LABEL_404:
            v393 = (char *)(*(_QWORD *)v387 + 632LL);
            v307 = sub_F5B0D0((__int64 *)(*(_QWORD *)v387 + 632LL), (__int64 *)v384.m128_u64[0], v392);
            v295 = v393;
            if ( v307 )
              goto LABEL_401;
            v297 = (__int64)v424;
            v298 = (__int64 *)v384.m128_u64[0];
            v299 = v393;
LABEL_398:
            v300 = (size_t *)(sub_F60990((__int64)v299, v298, v297, v294, (__int64)v295, v296) + 16);
            *(v300 - 2) = (size_t)v435[0];
            v301 = (int)v435[1];
            *v300 = 0;
            *((_DWORD *)v300 - 2) = v301;
            v300[1] = 0;
            v300[2] = 0;
            v300[3] = 0;
LABEL_399:
            v302 = n;
            v300[1] = v290;
            v300[2] = v291;
            *v300 = v302;
            v300[3] = v289;
LABEL_384:
            v287 = v282 + 4;
            if ( v282 + 4 == v281 )
              goto LABEL_390;
            v288 = v282[4];
            if ( v288 != -8192 )
              goto LABEL_388;
            while ( 1 )
            {
              do
              {
                v287 += 4;
                if ( v287 == v281 )
                {
LABEL_390:
                  v180 = (char *)v391;
                  goto LABEL_236;
                }
                v288 = *v287;
              }
              while ( *v287 == -8192 );
LABEL_388:
              if ( v288 != -4096 )
              {
                v282 = v287;
                goto LABEL_379;
              }
            }
          }
          if ( (*(_BYTE *)(v283 + 29) & 1) != 0 )
          {
            v311 = sub_B68690(v283, (__int64)v286, v303, v304, v305, v306);
            v312 = *v311;
            v313 = *v311 + 8LL * *((unsigned int *)v311 + 2);
            if ( *v311 >= v313 )
            {
              if ( v312 == v313 )
                goto LABEL_408;
              while ( *(_WORD *)(*(_QWORD *)v313 + 36LL) != 64 )
              {
                v313 += 8LL;
                if ( v312 == v313 )
                  goto LABEL_408;
              }
              v309 = 0;
            }
            else
            {
              v314 = *v311;
              while ( *(_WORD *)(*(_QWORD *)v314 + 36LL) != 64 )
              {
                v314 += 8LL;
                if ( v313 == v314 )
                  goto LABEL_408;
              }
              if ( v314 == v313 )
                goto LABEL_408;
              v309 = 0;
            }
          }
          else
          {
LABEL_408:
            v309 = ((*(_BYTE *)(sub_B68890(v283) + 89) >> 2) ^ 1) & 1;
          }
          v435[0] = (void *)(v283 & 0xFFFFFFFFFFFFFFF8LL | v309);
          goto LABEL_404;
        }
      }
LABEL_236:
      if ( ptr != &v388[2].m128_u16[4] )
        free(ptr);
      v189 = src[0];
      v190 = 8LL * (unsigned int)v441;
      operator delete();
      if ( *(char *)(*((_QWORD *)v447[0] + 290) + 104LL) < 0 )
      {
        v308 = (const __m128i *)sub_22598C0(v189, v190);
        sub_F6D1F0(*(__int64 *)v387, v308);
      }
      v191 = v388;
      v192 = *v389;
      v424 = v409;
      v425 = *(_QWORD *)(v192 + 104);
      v193 = *(_QWORD *)v387 + 688LL;
      sub_F5B950(v388, &v460[8 * (unsigned __int64)v462], &v460[8 * (unsigned __int64)v462], *(_QWORD *)v387 + 688LL, 1);
      v194 = (const __m128i *)src[0];
      if ( (_DWORD)v461 )
        sub_F5B950(v388, v460, &v460[8 * (unsigned __int64)v462], v193, 0);
      else
        sub_F5B950(v191, &v460[8 * (unsigned __int64)v462], &v460[8 * (unsigned __int64)v462], v193, 1);
      v195 = (const __m128i *)src[0];
      v196 = (const __m128i *)src[1];
      src[1] = (void *)0x100000000LL;
      src[0] = &v388[1];
      if ( v195 != v194 )
      {
        v197 = v195;
        v198 = 0;
        while ( 1 )
        {
          if ( &v197[4] != v196 )
          {
            if ( v197[4].m128i_i64[0] < 0xFFFFFFFFFFFFFFFELL )
            {
              v197 += 4;
              goto LABEL_250;
            }
            v199 = v197 + 8;
            while ( 1 )
            {
              v197 = v199;
              if ( v199 == v196 )
                break;
              v199 += 4;
              if ( v197->m128i_i64[0] < 0xFFFFFFFFFFFFFFFELL )
                goto LABEL_250;
            }
          }
          v197 = v196;
LABEL_250:
          ++v198;
          if ( v194 == v197 )
          {
            v200 = (__m128i *)&v388[1];
            if ( v198 != 1 )
            {
              sub_22134E0(v388, v200, v198, 64);
              v200 = (__m128i *)((char *)src[0] + 64 * (unsigned __int64)LODWORD(src[1]));
            }
            while ( 1 )
            {
              v201 = v195 + 4;
              *v200 = _mm_loadu_si128(v195);
              v200[1] = _mm_loadu_si128(v195 + 1);
              v200[2] = _mm_loadu_si128(v195 + 2);
              v200[3] = _mm_loadu_si128(v195 + 3);
              if ( &v195[4] != v196 )
              {
                if ( v195[4].m128i_i64[0] != -2 && v195[4].m128i_i64[0] != -1 )
                {
LABEL_295:
                  v195 = v201;
                  goto LABEL_259;
                }
                while ( 1 )
                {
                  v201 += 4;
                  if ( v201 == v196 )
                    break;
                  if ( v201->m128i_i64[0] < 0xFFFFFFFFFFFFFFFELL )
                    goto LABEL_295;
                }
              }
              v195 = v196;
LABEL_259:
              v200 += 4;
              if ( v195 == v197 )
              {
                v202 = (__int64 *)src[0];
                v203 = LODWORD(src[1]) + v198;
                v204 = (unsigned int)(LODWORD(src[1]) + v198);
                goto LABEL_261;
              }
            }
          }
        }
      }
      v204 = 0;
      v203 = 0;
      v202 = (__int64 *)&v388[1];
LABEL_261:
      LODWORD(src[1]) = v203;
      v205 = v451;
      v206 = (unsigned int)v452;
      v401 = v202;
      v414 = nullptr;
      v402 = v204;
      v207 = operator new(0x68u);
      sub_F6AE00(v207, (const void *)v404, 1u, v205, v206, (__int64)v396, v401, v402);
      v208 = (unsigned __int8)sub_F5B3D0(v394, v392, (__int64 **)v386) == 0;
      m128i_i64 = v419->m128i_i64;
      if ( !v208 )
      {
        v211 = (void *)v419[1].m128i_i64[0];
        v419[1].m128i_i64[0] = v207;
        if ( v211 )
        {
          sub_F59490((__int64)v211);
          operator delete(v211, 0x68u);
        }
        goto LABEL_264;
      }
      v272 = *((_DWORD *)v180 + 26);
      v435[0] = v419;
      v273 = (unsigned int)(v272 + 1);
      v274 = *((unsigned int *)v180 + 28);
      v275 = (unsigned int)(4 * v273);
      v276 = 2 * v274;
      if ( (unsigned int)v275 < 3 * (int)v274 )
      {
        if ( (int)v274 - *((_DWORD *)v180 + 27) - (int)v273 > (unsigned int)v274 >> 3 )
          goto LABEL_364;
        v276 = *((_DWORD *)v180 + 28);
      }
      v310 = v394;
      sub_F60E70((__int64)v394, v276, v273, v274, v275, v209);
      sub_F5B3D0(v310, v392, (__int64 **)v384.m128_u64[0]);
      LODWORD(v273) = *((_DWORD *)v180 + 26) + 1;
      m128i_i64 = v435[0];
LABEL_364:
      v208 = *m128i_i64 == -4096;
      *((_DWORD *)v180 + 26) = v273;
      if ( !v208 || m128i_i64[1] != 0x7FFFFFFFFFFFFFFFLL )
        --*((_DWORD *)v180 + 27);
      v277 = v425;
      v278 = v424;
      m128i_i64[2] = v207;
      *m128i_i64 = v278;
      m128i_i64[1] = v277;
LABEL_264:
      v212 = (__m128 *)v384.m128_u64[0];
      v213 = *(_QWORD *)v387 + 712LL;
      sub_F5B8E0((__m128 *)v384.m128_u64[0], &v463[10 * v465], &v463[10 * v465], *(_QWORD *)v387 + 712LL, 1);
      v214 = (__int64 *)v435[0];
      if ( (_DWORD)v464 )
        sub_F5B8E0((__m128 *)v384.m128_u64[0], v463, &v463[10 * v465], v213, 0);
      else
        sub_F5B8E0(v212, &v463[10 * v465], &v463[10 * v465], v213, 1);
      v219 = (__int64 *)v435[0];
      v220 = (__int64 *)v435[1];
      if ( v214 != v435[0] )
      {
        v221 = v180;
        v222 = (__int64 *)v397;
        v223 = v214;
        v224 = v221;
        while ( 1 )
        {
          v225 = *((unsigned int *)v224 + 6);
          if ( !(_DWORD)v225 )
            break;
          v216 = *v219;
          v217 = (unsigned int)(v225 - 1);
          v226 = *((_QWORD *)v224 + 1);
          v227 = v217 & (((unsigned int)*v219 >> 9) ^ ((unsigned int)*v219 >> 4));
          v228 = (__int64 *)(v226 + 80LL * v227);
          v229 = *v228;
          if ( *v219 != *v228 )
          {
            v269 = 1;
            v218 = 0;
            if ( v229 == -4096 )
            {
LABEL_341:
              v270 = *((_DWORD *)v224 + 4);
              v215 = (unsigned int)(3 * v225);
              v435[0] = v228;
              v271 = v270 + 1;
              if ( 4 * v271 < (unsigned int)v215 )
              {
                v215 = (unsigned int)(v225 - *((_DWORD *)v224 + 5) - v271);
                if ( (unsigned int)v215 > (unsigned int)v225 >> 3 )
                {
LABEL_343:
                  v208 = *v228 == -4096;
                  *((_DWORD *)v224 + 4) = v271;
                  if ( !v208 )
                    --*((_DWORD *)v224 + 5);
                  *v228 = v216;
                  v228[1] = (__int64)(v228 + 3);
                  v228[2] = 0x100000000LL;
                  if ( *((_DWORD *)v219 + 4) )
                    sub_F5AEF0(v228 + 1, v219 + 1);
                  v230 = (_QWORD *)(*((_QWORD *)v224 + 1) + 80LL * *((unsigned int *)v224 + 6));
                  goto LABEL_271;
                }
LABEL_350:
                sub_F5FC90((__int64)v222, v225, v215, v216, v217, v218);
                sub_F5A900(v222, v219, v384.m128_u64[0]);
                v216 = *v219;
                v228 = (__int64 *)v435[0];
                v271 = *((_DWORD *)v224 + 4) + 1;
                goto LABEL_343;
              }
LABEL_349:
              LODWORD(v225) = 2 * v225;
              goto LABEL_350;
            }
            while ( 1 )
            {
              if ( !v218 && v229 == -8192 )
                v218 = (__int64)v228;
              v227 = v217 & (v269 + v227);
              v228 = (__int64 *)(v226 + 80LL * v227);
              v229 = *v228;
              if ( v216 == *v228 )
                break;
              if ( v229 == -4096 )
              {
                if ( v218 )
                  v228 = (__int64 *)v218;
                goto LABEL_341;
              }
              ++v269;
            }
          }
          v230 = (_QWORD *)(80 * v225 + v226);
LABEL_271:
          sub_F5B6B0((__m128 *)v384.m128_u64[0], v228, v230, (__int64)v222, 1);
          v231 = (char *)(v219 + 10);
          if ( v220 == v219 + 10 )
          {
            v219 = v220;
            if ( v220 == v223 )
              goto LABEL_278;
          }
          else
          {
            v215 = v219[10];
            if ( v215 == -4096 || (v219 += 10, v215 == -8192) )
            {
              do
              {
                v219 = (__int64 *)(v231 + 80);
                if ( v220 == (__int64 *)(v231 + 80) )
                  break;
                v215 = *((_QWORD *)v231 + 10);
                v231 += 80;
              }
              while ( v215 == -8192 || v215 == -4096 );
            }
            if ( v219 == v223 )
            {
LABEL_278:
              v180 = v224;
              goto LABEL_279;
            }
          }
        }
        v435[0] = nullptr;
        goto LABEL_349;
      }
LABEL_279:
      v232 = sub_EBA840(*((_QWORD *)v180 + 5), v409, v215, v216, v217, v218);
      v233 = (__m128i *)(v453 + 48LL * v455);
      if ( (_DWORD)v454 )
      {
        n = v453 + 48LL * v455;
        *(__m128 *)v435 = _mm_loadh_ps((const double *)&n);
        sub_F55E70((__int64 *)v384.m128_u64[0]);
        v250 = (__m128i *)v435[0];
        v251 = (__m128i *)v435[1];
        if ( v233 != v435[0] )
        {
          v393 = v180;
          n = (size_t)(v232 + 9);
          while ( 1 )
          {
            while ( sub_F5B0D0((__int64 *)&v429, v250->m128i_i64, v386) )
            {
              v255 = v419;
              v256 = v250[1].m128i_i64[1];
              v257 = v250[2].m128i_i64[0];
              v258 = v419[2].m128i_i64[0];
              if ( v256 )
              {
                v391 = (__int64 *)v250[2].m128i_i64[0];
                v259 = sub_F5E070((__int64 *)n, v256, v252, v253, v254, v257);
                v257 = (__int64)v391 + v259;
              }
              v260 = v255[1].m128i_i64[1];
              if ( v260 )
              {
                v391 = (__int64 *)v257;
                v261 = sub_F5E070((__int64 *)n, v260, v252, v253, v254, v257);
                v257 = (__int64)v391;
                v258 += v261;
              }
              if ( v257 < v258 )
              {
                v255[1] = _mm_loadu_si128(v250 + 1);
                v255[2] = _mm_loadu_si128(v250 + 2);
              }
              v262 = v250 + 3;
              if ( &v250[3] != v251 )
                goto LABEL_325;
LABEL_336:
              v250 = v251;
LABEL_316:
              if ( v233 == v250 )
                goto LABEL_329;
            }
            v264 = v419;
            v265 = (unsigned int)(v430 + 1);
            v266 = 2 * (_DWORD)v431;
            v267 = (unsigned int)(4 * v265);
            v268 = (unsigned int)(3 * (_DWORD)v431);
            v435[0] = v419;
            if ( (unsigned int)v267 >= (unsigned int)v268 )
              goto LABEL_352;
            v268 = (unsigned int)v431 >> 3;
            if ( (int)v431 - HIDWORD(v430) - (int)v265 <= (unsigned int)v268 )
              break;
LABEL_332:
            LODWORD(v430) = v265;
            if ( v264->m128i_i64[0] || v264->m128i_i32[2] )
              --HIDWORD(v430);
            v264->m128i_i64[0] = v250->m128i_i64[0];
            v264->m128i_i32[2] = v250->m128i_i32[2];
            v264[1] = _mm_loadu_si128(v250 + 1);
            v264[2] = _mm_loadu_si128(v250 + 2);
            v262 = v250 + 3;
            if ( &v250[3] == v251 )
              goto LABEL_336;
            do
            {
LABEL_325:
              v250 = v262;
              v263 = v262->m128i_i32[2];
              if ( v262->m128i_i64[0] )
              {
                if ( v263 || v262->m128i_i64[0] != -1 )
                  goto LABEL_316;
              }
              else if ( v263 )
              {
                goto LABEL_316;
              }
              v262 += 3;
              v250 = v262;
            }
            while ( v251 != v262 );
            if ( v233 == v262 )
            {
LABEL_329:
              v180 = v393;
              goto LABEL_280;
            }
          }
          v266 = (int)v431;
LABEL_352:
          sub_F607F0((__int64)&v429, v266, v265, v253, v268, v267);
          sub_F5B0D0((__int64 *)&v429, v250->m128i_i64, v384.m128_u64[0]);
          LODWORD(v265) = v430 + 1;
          v264 = (__m128i *)v435[0];
          goto LABEL_332;
        }
      }
LABEL_280:
      if ( src[0] != &v388[1] )
        free(src[0]);
      v234 = v463;
      if ( v465 )
      {
        v235 = &v463[10 * v465];
        do
        {
          if ( *v234 != -4096 && *v234 != -8192 )
          {
            v236 = (_QWORD *)v234[1];
            if ( v236 != v234 + 3 )
              free(v236);
          }
          v234 += 10;
        }
        while ( v235 != v234 );
      }
      operator delete();
      operator delete();
      operator delete();
      operator delete();
      if ( v451 != (void *)(*(_QWORD *)v387 + 120LL) )
        free(v451);
      v176 = v450;
      operator delete();
      ++v389;
    }
    while ( v395 != (std::__detail::_List_node_base *)v389 );
  }
  v237 = (unsigned int)v430;
  v238 = (__int64 *)(v407 + 48);
  v239 = (__int64)v429;
  v240 = &v429[3 * (unsigned int)v431];
  if ( !(_DWORD)v430 || v429 == v240 )
    goto LABEL_293;
  while ( 1 )
  {
    v318 = (__m128i *)v239;
    v319 = *(_DWORD *)(v239 + 8);
    if ( *(_QWORD *)v239 )
      break;
    if ( v319 )
      goto LABEL_451;
LABEL_448:
    v239 += 48;
    if ( v240 == (__m128i *)v239 )
      goto LABEL_293;
  }
  if ( !v319 && *(_QWORD *)v239 == -1 )
    goto LABEL_448;
LABEL_451:
  if ( v240 != (__m128i *)v239 )
  {
    do
    {
      v237 = (unsigned __int64)v318;
      v176 = (__int64)v238;
      if ( !sub_F5B0D0(v238, v318->m128i_i64, &v446) )
      {
        v237 = (unsigned __int64)v318;
        v176 = (__int64)v238;
        v324 = (__m128i *)sub_F60990((__int64)v238, v318->m128i_i64, (__int64)v446, v321, v322, v323);
        v324->m128i_i64[0] = v318->m128i_i64[0];
        v324->m128i_i32[2] = v318->m128i_i32[2];
        v324[1] = _mm_loadu_si128(v318 + 1);
        v324[2] = _mm_loadu_si128(v318 + 2);
      }
      v320 = v318 + 3;
      if ( v240 == &v318[3] )
        break;
      while ( 1 )
      {
        v318 = v320;
        if ( v320->m128i_i64[0] )
        {
          if ( v320->m128i_i64[0] != -1 )
            break;
        }
        if ( v320->m128i_i32[2] )
          break;
        v320 += 3;
        if ( v240 == v320 )
          goto LABEL_293;
      }
    }
    while ( v240 != v320 );
  }
LABEL_293:
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v407 + 40) + 2320LL) + 104LL) >= 0 )
    goto LABEL_294;
  v325 = sub_22598C0(v176, v237);
  v330 = 0;
  LODWORD(v447[0]) = 0;
  v447[1] = nullptr;
  v331 = (const __m128i *)v325;
  v449 = 0;
  v392 = (__int64 *)v409;
  *(_QWORD *)v387 = &v446;
  v448.m128_u64[0] = (unsigned __int64)v447;
  v448.m128_u64[1] = (unsigned __int64)v447;
  if ( !(_DWORD)v430 )
    goto LABEL_468;
  v384.m128_u64[0] = (unsigned __int64)&v429[3 * (unsigned int)v431];
  v388 = (__m128 *)src;
  *(__m128 *)src = _mm_loadh_ps((const double *)v384.m128_u64);
  sub_F55E70((__int64 *)src);
  v336 = (const __m128i *)src[1];
  v384.m128_u64[0] = (unsigned __int64)&v429[3 * (unsigned int)v431];
  if ( (void *)v384.m128_u64[0] == src[0] )
    goto LABEL_468;
  v389 = (__int64 *)v331;
  v337 = (const __m128i *)src[0];
  v338 = v388 + 1;
  v386 = (std::__detail::_List_node_base *)&v424;
  while ( 2 )
  {
    v340 = v337->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
    sub_BE1550(v435, 7u, v340, 0);
    if ( (*(_BYTE *)(v340 + 28) & 0x7F) != 0x24 )
    {
      v341 = sub_F5CF20(*(_QWORD **)v387, v337 + 1);
      v237 = (unsigned __int64)v435;
      sub_9CAB60((__int64)v341, (__int64)v435);
      goto LABEL_492;
    }
    src[0] = v338;
    sub_F56710(v388, (_BYTE *)v435[0], (__int64)v435[0] + (unsigned __int64)v435[1]);
    v342 = (__int64 *)src[1];
    if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)src[1] <= 0x11 )
      std::__throw_length_error("basic_string::append");
    v343 = (char *)src[1] + 18;
    if ( src[0] == v338 )
    {
      if ( (unsigned __int64)v343 > 0xF )
      {
        v424 = (char *)src[1] + 18;
        v344 = 15;
        goto LABEL_504;
      }
LABEL_497:
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385150);
      v346 = (char *)src[1] + (unsigned __int64)src[0];
      *((_WORD *)v346 + 8) = 23911;
      *(__m128i *)v346 = si128;
      v347 = (size_t)src[0];
    }
    else
    {
      v344 = (unsigned __int64)v441;
      if ( v343 <= v441 )
        goto LABEL_497;
      v424 = (char *)src[1] + 18;
LABEL_504:
      v391 = (__int64 *)((char *)src[1] + 18);
      n = (size_t)src[1];
      v350 = (_BYTE *)sub_F55EB0((__int64 *)v386, v344);
      v342 = (__int64 *)n;
      v343 = (char *)v391;
      v347 = (size_t)v350;
      v351 = (__m128 *)src[0];
      if ( n )
      {
        if ( n == 1 )
        {
          *v350 = *(_BYTE *)src[0];
        }
        else
        {
          v352 = n;
          v393 = (char *)v391;
          v391 = (__int64 *)n;
          n = (size_t)src[0];
          v353 = memcpy(v350, src[0], v352);
          v343 = v393;
          v342 = v391;
          v351 = (__m128 *)n;
          v347 = (size_t)v353;
        }
      }
      v354 = _mm_load_si128((const __m128i *)&xmmword_2385150);
      v355 = (__m128i *)((char *)v342 + v347);
      v355[1].m128i_i16[0] = 23911;
      *v355 = v354;
      if ( v351 != v338 )
      {
        v393 = v343;
        v391 = v342;
        n = v347;
        operator delete(v351);
        v343 = v393;
        v342 = v391;
        v347 = n;
      }
      src[0] = (void *)v347;
      v441 = v424;
    }
    src[1] = v343;
    v348 = *(_QWORD **)v387;
    *((_BYTE *)v342 + v347 + 18) = 0;
    v349 = sub_F5CF20(v348, v337 + 1);
    v237 = (unsigned __int64)v388;
    sub_9E6D90((__int64)v349, v388);
    if ( src[0] != v338 )
      operator delete(src[0]);
LABEL_492:
    if ( v337[2].m128i_i64[0] )
    {
      v330 = 1;
    }
    else if ( v337[1].m128i_i64[0] )
    {
      v330 = 1;
    }
    if ( v435[0] != &v436 )
      operator delete(v435[0]);
    v337 += 3;
    if ( v337 != v336 )
    {
      v339 = v337;
      do
      {
        v326 = (_BYTE *)v339->m128i_i64[0];
        v337 = v339;
        v327 = v339->m128i_u32[2];
        if ( v339->m128i_i64[0] && v326 != (_BYTE *)-1LL )
          break;
        if ( (_DWORD)v327 )
          break;
        v339 += 3;
        v337 = v339;
      }
      while ( v336 != v339 );
    }
    if ( (const __m128i *)v384.m128_u64[0] != v337 )
      continue;
    break;
  }
  v331 = (const __m128i *)v389;
LABEL_468:
  if ( v449 )
  {
    sub_971800((__int64)v331, "VFTable indices for ");
    sub_971800((__int64)v331, "'");
    sub_B53250(v392, v331);
    v356 = sub_971800((__int64)v331, "' (");
    v357 = sub_2257BD0(v356, v449);
    v358 = " entry";
    if ( v449 != 1 )
      v358 = " entries";
    v359 = sub_971800(v357, v358);
    v237 = (unsigned __int64)").\n";
    sub_971800(v359, ").\n");
    v360 = (_QWORD *)v448.m128_u64[0];
    if ( v448.m128_u64[0] != *(_QWORD *)v387 + 8LL )
    {
      v361 = -1;
      v386 = nullptr;
      v388 = (__m128 *)src;
      v384.m128_u64[0] = (unsigned __int64)"%4lu | ";
      v384 = _mm_loadh_ps((const double *)v384.m128_u64);
      do
      {
        if ( v330 )
        {
          v362 = v360[6];
          v363 = (std::__detail::_List_node_base *)v360[4];
          if ( v362 != v361 || v386 != v363 )
          {
            sub_971800((__int64)v331, " -- accessible via ");
            if ( v363 )
            {
              v370 = sub_971800((__int64)v331, "vbtable index ");
              v371 = sub_2257BD0(v370, v363);
              sub_971800(v371, ", ");
            }
            v361 = v362;
            v364 = sub_971800((__int64)v331, "vfptr at offset ");
            v365 = sub_2257BF0(v364, v362);
            sub_971800(v365, " --\n");
            v386 = v363;
          }
        }
        v366 = (char *)v360[7];
        *(__m128i *)src = _mm_load_si128((const __m128i *)&v384);
        v441 = v366;
        v367 = sub_2258820(v331, v388);
        v237 = v360[8];
        v368 = sub_22581D0(v367, v237, v360[9]);
        v369 = *(_BYTE **)(v368 + 32);
        if ( (unsigned __int64)v369 < *(_QWORD *)(v368 + 24) )
        {
          *(_QWORD *)(v368 + 32) = v369 + 1;
          *v369 = 10;
        }
        else
        {
          v237 = 10;
          sub_2257CD0(v368, 10);
        }
        v360 = (_QWORD *)std::_Rb_tree_increment();
      }
      while ( v360 != (_QWORD *)(*(_QWORD *)v387 + 8LL) );
    }
    v372 = (_BYTE *)v331[2].m128i_i64[0];
    if ( (unsigned __int64)v372 >= v331[1].m128i_i64[1] )
    {
      v237 = 10;
      sub_2257CD0(v331, 10);
    }
    else
    {
      v326 = v372 + 1;
      v331[2].m128i_i64[0] = (__int64)(v372 + 1);
      *v372 = 10;
    }
  }
  if ( v331[2].m128i_i64[0] != v331[1].m128i_i64[0] )
    sub_2257CB0(v331, v237, v326, v327, v328, v329, v384.m128_u64[0], v384.m128_u64[1], v385);
  v332 = (char *)v447[1];
  if ( v447[1] )
  {
    v333 = *(_QWORD *)v387;
    while ( 1 )
    {
      sub_F5B4D0(v333, *((_QWORD **)v332 + 3));
      v334 = *((char **)v332 + 8);
      v335 = *((char **)v332 + 2);
      if ( v334 == v332 + 80 )
      {
        operator delete(v332);
        if ( !v335 )
          break;
      }
      else
      {
        operator delete(v334);
        operator delete(v332);
        if ( !v335 )
          break;
      }
      v332 = v335;
    }
  }
LABEL_294:
  operator delete();
  return operator delete();
}

