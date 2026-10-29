_QWORD *__fastcall sub_39D180(__int64 *a1, int a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD **v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // r15
  bool v9; // cf
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  bool v12; // zf
  __int64 *v13; // rbx
  unsigned __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r8
  int v18; // eax
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // r9d
  _QWORD *v24; // rbx
  int v25; // r9d
  unsigned int v26; // ebp
  __int64 v27; // rdx
  int v28; // eax
  __int64 *v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r14
  __int64 v34; // r13
  int v35; // eax
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r12
  unsigned int v42; // eax
  unsigned int v43; // r14d
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // eax
  __int64 *v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // r12
  __int64 v54; // r13
  int v55; // eax
  int v56; // r8d
  int v57; // r9d
  __int64 v58; // rax
  __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // r12
  unsigned int v62; // eax
  unsigned int v63; // r14d
  size_t v64; // rsi
  unsigned int *v65; // rax
  __int64 v66; // rdx
  unsigned int v67; // ebx
  __int64 v68; // rax
  _BYTE *v69; // rax
  _QWORD *v70; // rcx
  size_t v71; // rax
  size_t v72; // r14
  void *v73; // rbx
  __int64 v74; // r14
  int v75; // eax
  int v76; // r8d
  int v77; // r9d
  __int64 v78; // rbx
  __m128i v79; // xmm0
  __int64 v80; // rcx
  std::ios_base *v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // r13
  unsigned int v86; // eax
  __int64 v87; // rdx
  int v88; // eax
  __int64 *v89; // rdx
  int v90; // ecx
  __int64 v91; // rsi
  __int64 v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // r12
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // r13
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rcx
  __m128i v102; // xmm3
  __int64 v103; // rax
  __int64 v104; // r14
  unsigned int v105; // ecx
  size_t v106; // rsi
  _DWORD *v107; // rax
  __int64 v108; // rdx
  size_t v109; // r14
  unsigned __int64 v110; // rdi
  void *v111; // rax
  void *v112; // rsi
  __int64 v113; // rax
  __int64 v114; // r14
  __int64 v115; // rax
  _QWORD *v116; // rdi
  __int64 v117; // rax
  __int64 v118; // r13
  __m128i v119; // xmm6
  __int64 v120; // rax
  __int64 v121; // rbp
  _BYTE *v122; // rax
  _QWORD *v123; // rcx
  std::ios_base *v124; // rax
  size_t v125; // rbp
  void *v126; // rbx
  __int64 v127; // rbp
  int v128; // eax
  int v129; // r8d
  int v130; // r9d
  __int64 v131; // rbx
  __m128i v132; // xmm0
  std::ios_base *v133; // rdi
  __int64 v134; // rax
  __int64 v135; // rax
  unsigned int v136; // eax
  __int64 v137; // rdx
  int v138; // eax
  __int64 *v139; // rdx
  __int64 v140; // rbx
  __int64 v141; // rdx
  int v142; // eax
  __int64 *v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // rbp
  __int64 v146; // rdi
  unsigned int v147; // eax
  unsigned int v148; // r12d
  size_t v149; // rsi
  unsigned int *v150; // rax
  __int64 v151; // rdx
  _QWORD *v152; // rax
  void *v153; // rsi
  _QWORD *v154; // rax
  unsigned __int64 v155; // rdi
  size_t v156; // rbx
  _QWORD *v157; // rax
  unsigned int v158; // r12d
  size_t v159; // rsi
  unsigned int *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rax
  __int64 v163; // rbx
  int v164; // r8d
  int v165; // r9d
  int v166; // ebp
  int v167; // r8d
  int v168; // r9d
  unsigned int v169; // ebx
  int v170; // eax
  __int64 v171; // rax
  __int64 v172; // rbx
  size_t v173; // rbp
  void *v174; // rsi
  _QWORD *v175; // rax
  _QWORD *v176; // rax
  unsigned __int64 v177; // rdi
  void *v178; // rax
  const void *v179; // rsi
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rbp
  __int64 v183; // rax
  __int64 v184; // rbp
  _QWORD *v185; // rax
  __int64 v186; // rax
  _BYTE *v187; // rax
  _QWORD *v188; // rcx
  size_t v189; // rax
  size_t v190; // r14
  void *v191; // rbx
  __int64 v192; // r14
  int v193; // eax
  int v194; // r8d
  int v195; // r9d
  __int64 v196; // rbx
  __m128i v197; // xmm0
  __int64 v198; // rdx
  std::ios_base *v199; // rdi
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // r13
  unsigned int v204; // eax
  __int64 v205; // rdx
  int v206; // eax
  __int64 *v207; // rdx
  __int64 v208; // rsi
  __int64 v209; // rax
  __int64 v210; // rdi
  __int64 v211; // rax
  __int64 v212; // r12
  __int64 v213; // rbx
  __int64 v214; // rax
  __int64 v215; // r13
  __int64 v216; // rax
  __int64 v217; // rdi
  __int64 v218; // rcx
  __m128i si128; // xmm7
  __int64 v220; // rax
  __int64 v221; // r14
  unsigned int v222; // ecx
  size_t v223; // rsi
  _DWORD *v224; // rax
  __int64 v225; // rdx
  size_t v226; // r14
  unsigned __int64 v227; // rdi
  void *v228; // rax
  void *v229; // rsi
  __int64 v230; // rax
  __int64 v231; // r14
  __int64 v232; // rax
  _QWORD *v233; // rdi
  __int64 v234; // rax
  __int64 v235; // r13
  __m128i v236; // xmm7
  __int64 v237; // rax
  __int64 v238; // rbp
  _BYTE *v239; // rax
  _QWORD *v240; // rcx
  size_t v241; // rax
  size_t v242; // rbp
  void *v243; // rbx
  __int64 v244; // rbp
  int v245; // eax
  int v246; // r8d
  int v247; // r9d
  __int64 v248; // rbx
  __m128i v249; // xmm0
  std::ios_base *v250; // rdi
  __int64 v251; // rax
  __int64 v252; // rax
  unsigned int v253; // eax
  __int64 v254; // rdx
  int v255; // eax
  __int64 *v256; // rdx
  __int64 v257; // rbx
  _QWORD *v258; // rax
  void *v259; // rsi
  _QWORD *v260; // rax
  __int64 v261; // rdx
  int v262; // eax
  __int64 *v263; // rdx
  __int64 v264; // rsi
  __int64 v265; // rbp
  __int64 v266; // rdi
  unsigned int v267; // eax
  unsigned int v268; // r12d
  unsigned int v269; // edx
  unsigned int *v270; // rax
  __int64 v271; // rdx
  unsigned __int64 v272; // rdi
  size_t v273; // rbx
  unsigned int v274; // r12d
  unsigned int v275; // edx
  unsigned int *v276; // rax
  __int64 v277; // rdx
  _QWORD *v278; // rax
  _QWORD *v279; // rax
  unsigned __int64 v280; // rdi
  size_t v281; // rbx
  __int64 v282; // rax
  __int64 v283; // rbx
  size_t v284; // rbp
  _QWORD *v285; // rax
  unsigned __int64 v286; // rdi
  void *v287; // rax
  const void *v288; // rsi
  std::ios_base *v289; // rcx
  _QWORD *v290; // rax
  size_t v291; // rbx
  unsigned __int64 v292; // rdi
  _QWORD *v293; // rax
  void *v294; // rsi
  _QWORD *v295; // rax
  char **exception; // r12
  char **v297; // r12
  char **v298; // r13
  char **v299; // rbx
  __int64 v300; // [rsp+0h] [rbp-618h]
  int v301; // [rsp+0h] [rbp-618h]
  int v302; // [rsp+0h] [rbp-618h]
  int v303; // [rsp+0h] [rbp-618h]
  int v304; // [rsp+0h] [rbp-618h]
  __int64 v305; // [rsp+8h] [rbp-610h]
  int v306; // [rsp+8h] [rbp-610h]
  int v307; // [rsp+8h] [rbp-610h]
  int v308; // [rsp+8h] [rbp-610h]
  __int64 v309; // [rsp+8h] [rbp-610h]
  int v310[2]; // [rsp+8h] [rbp-610h]
  int v311; // [rsp+8h] [rbp-610h]
  int v312; // [rsp+8h] [rbp-610h]
  __int64 v313; // [rsp+8h] [rbp-610h]
  int v314[2]; // [rsp+8h] [rbp-610h]
  int v315; // [rsp+8h] [rbp-610h]
  int v316; // [rsp+8h] [rbp-610h]
  int *v317; // [rsp+10h] [rbp-608h]
  void *v318; // [rsp+10h] [rbp-608h]
  void *v319; // [rsp+10h] [rbp-608h]
  int v320; // [rsp+10h] [rbp-608h]
  void *v321; // [rsp+10h] [rbp-608h]
  int v322; // [rsp+10h] [rbp-608h]
  __m128i *v323; // [rsp+18h] [rbp-600h]
  __int64 v324; // [rsp+18h] [rbp-600h]
  __int64 v325; // [rsp+18h] [rbp-600h]
  __int64 *v326; // [rsp+20h] [rbp-5F8h]
  __int64 v327; // [rsp+20h] [rbp-5F8h]
  __int64 v328; // [rsp+20h] [rbp-5F8h]
  __int64 v329; // [rsp+20h] [rbp-5F8h]
  __int64 v330; // [rsp+20h] [rbp-5F8h]
  void *v331; // [rsp+28h] [rbp-5F0h]
  char v332; // [rsp+28h] [rbp-5F0h]
  char v333; // [rsp+28h] [rbp-5F0h]
  void *v334; // [rsp+28h] [rbp-5F0h]
  void *v335; // [rsp+28h] [rbp-5F0h]
  void *v336; // [rsp+28h] [rbp-5F0h]
  void *v337; // [rsp+28h] [rbp-5F0h]
  void *v338; // [rsp+28h] [rbp-5F0h]
  _QWORD *v339; // [rsp+28h] [rbp-5F0h]
  void *v340; // [rsp+28h] [rbp-5F0h]
  void *v341; // [rsp+28h] [rbp-5F0h]
  void *v342; // [rsp+28h] [rbp-5F0h]
  _QWORD *v343; // [rsp+28h] [rbp-5F0h]
  _QWORD *v344; // [rsp+28h] [rbp-5F0h]
  void *v345; // [rsp+28h] [rbp-5F0h]
  _QWORD *v346; // [rsp+28h] [rbp-5F0h]
  _QWORD *v347; // [rsp+28h] [rbp-5F0h]
  void *v348; // [rsp+30h] [rbp-5E8h]
  int v349; // [rsp+30h] [rbp-5E8h]
  int v350; // [rsp+30h] [rbp-5E8h]
  int v351; // [rsp+30h] [rbp-5E8h]
  int v352; // [rsp+30h] [rbp-5E8h]
  void *ptr; // [rsp+38h] [rbp-5E0h]
  int ptra; // [rsp+38h] [rbp-5E0h]
  int ptrb; // [rsp+38h] [rbp-5E0h]
  std::locale *v356[2]; // [rsp+40h] [rbp-5D8h] BYREF
  char *v357; // [rsp+50h] [rbp-5C8h]
  void *v358; // [rsp+58h] [rbp-5C0h]
  _QWORD *v359; // [rsp+60h] [rbp-5B8h]
  __int64 v360; // [rsp+68h] [rbp-5B0h]
  __int64 v361; // [rsp+70h] [rbp-5A8h]
  __m128i v362; // [rsp+78h] [rbp-5A0h] BYREF
  int v363[2]; // [rsp+88h] [rbp-590h]
  std::ios_base *v364; // [rsp+90h] [rbp-588h]
  int v365; // [rsp+98h] [rbp-580h]
  _BYTE v366[12]; // [rsp+9Ch] [rbp-57Ch]
  std::ios_base *v367; // [rsp+A8h] [rbp-570h]
  int v368[2]; // [rsp+B0h] [rbp-568h]
  __m128i v369; // [rsp+B8h] [rbp-560h] BYREF
  std::ios_base *v370; // [rsp+C8h] [rbp-550h]
  void *v371; // [rsp+D0h] [rbp-548h]
  int v372[2]; // [rsp+D8h] [rbp-540h]
  _QWORD *v373; // [rsp+E0h] [rbp-538h]
  __int64 v374; // [rsp+E8h] [rbp-530h]
  int v375[2]; // [rsp+F0h] [rbp-528h]
  __int64 v376; // [rsp+F8h] [rbp-520h]
  void *v377; // [rsp+100h] [rbp-518h]
  void *v378; // [rsp+108h] [rbp-510h]
  __int64 v379; // [rsp+110h] [rbp-508h]
  int v380; // [rsp+118h] [rbp-500h]
  unsigned int v381; // [rsp+11Ch] [rbp-4FCh]
  int v382[2]; // [rsp+120h] [rbp-4F8h]
  int v383[2]; // [rsp+128h] [rbp-4F0h]
  __int64 v384; // [rsp+130h] [rbp-4E8h]
  int v385[2]; // [rsp+138h] [rbp-4E0h]
  int v386[2]; // [rsp+140h] [rbp-4D8h]
  __int64 v387; // [rsp+148h] [rbp-4D0h]
  _QWORD *v388; // [rsp+150h] [rbp-4C8h]
  char v389[8]; // [rsp+158h] [rbp-4C0h]
  __int64 v390; // [rsp+160h] [rbp-4B8h]
  __m128i *v391; // [rsp+168h] [rbp-4B0h]
  _QWORD *v392; // [rsp+170h] [rbp-4A8h]
  __int64 v393; // [rsp+178h] [rbp-4A0h]
  __int64 *v394; // [rsp+180h] [rbp-498h]
  __int64 *v395; // [rsp+188h] [rbp-490h]
  char v396[8]; // [rsp+198h] [rbp-480h] BYREF
  _QWORD v397[2]; // [rsp+1A0h] [rbp-478h] BYREF
  __int64 v398; // [rsp+1B0h] [rbp-468h] BYREF
  unsigned int *v399; // [rsp+1B8h] [rbp-460h] BYREF
  char v400[8]; // [rsp+1C0h] [rbp-458h] BYREF
  _QWORD *v401; // [rsp+1C8h] [rbp-450h]
  _QWORD v402[2]; // [rsp+1D0h] [rbp-448h] BYREF
  int v403[2]; // [rsp+1E0h] [rbp-438h] BYREF
  __int64 v404; // [rsp+1E8h] [rbp-430h]
  int v405[2]; // [rsp+1F0h] [rbp-428h] BYREF
  __int64 v406; // [rsp+1F8h] [rbp-420h]
  void *v407; // [rsp+200h] [rbp-418h] BYREF
  size_t v408; // [rsp+208h] [rbp-410h]
  _QWORD dest[2]; // [rsp+210h] [rbp-408h] BYREF
  int v410[2]; // [rsp+220h] [rbp-3F8h] BYREF
  __int64 v411; // [rsp+228h] [rbp-3F0h]
  __m128i v412; // [rsp+230h] [rbp-3E8h] BYREF
  __int128 v413; // [rsp+240h] [rbp-3D8h]
  void *src[2]; // [rsp+250h] [rbp-3C8h]
  __int128 v415; // [rsp+260h] [rbp-3B8h]
  int v416; // [rsp+270h] [rbp-3A8h] BYREF
  int v417; // [rsp+278h] [rbp-3A0h]
  void *v418; // [rsp+280h] [rbp-398h]
  size_t n; // [rsp+288h] [rbp-390h]
  _QWORD v420[2]; // [rsp+290h] [rbp-388h] BYREF
  _QWORD v421[27]; // [rsp+2A0h] [rbp-378h] BYREF
  __int64 v422; // [rsp+378h] [rbp-2A0h]
  __int16 v423; // [rsp+380h] [rbp-298h]
  __int128 v424; // [rsp+388h] [rbp-290h]
  __int128 v425; // [rsp+398h] [rbp-280h]
  int v426[2]; // [rsp+3B0h] [rbp-268h] BYREF
  char v427; // [rsp+3B8h] [rbp-260h]
  char v428[8]; // [rsp+3C0h] [rbp-258h] BYREF
  char v429[512]; // [rsp+3C8h] [rbp-250h] BYREF
  _BYTE v430[80]; // [rsp+5C8h] [rbp-50h] BYREF

  v326 = a1;
  result = *(_QWORD **)(*a1 + 104);
  v3 = *(unsigned int *)(*a1 + 112);
  v380 = a2;
  v3 *= 16;
  v4 = (_QWORD *)((char *)result + v3);
  v388 = (_QWORD *)((char *)result + v3);
  if ( result != (_QWORD *)((char *)result + v3) )
  {
    while ( *result <= 1u )
    {
      result += 2;
      if ( v4 == result )
        return result;
    }
    *(_QWORD *)v386 = result;
    if ( v388 != result )
    {
      *(_QWORD *)v372 = *result;
      v391 = (__m128i *)v397;
      *(_QWORD *)v389 = v400;
      v395 = v402;
      v394 = &v398;
      while ( 1 )
      {
        *(_QWORD *)v385 = *(_QWORD *)(*(_QWORD *)v386 + 8LL);
        v5 = *(_QWORD ***)v385;
        *(_QWORD *)v375 = *(_QWORD *)v372 + 16LL;
        sub_39B6D0(v391, (__int64)v326, (const char **)(*(_QWORD *)v372 + 16LL));
        v6 = *v5;
        *(_QWORD *)v403 = 0;
        *(_QWORD *)v405 = 0;
        v390 = v397[0];
        v393 = v397[1];
        v7 = v326[1];
        *(_QWORD *)v382 = v7;
        v398 = v7;
        v402[0] = v7;
        v404 = v7;
        v406 = v7;
        if ( !v6 )
        {
          *(_QWORD *)v410 = 0;
          v317 = v410;
          *(_QWORD *)v363 = v426;
          sub_39A6C0((__int64)v426, v7, (__int64)v410);
          *(_QWORD *)v383 = 0;
          v8 = nullptr;
          v166 = 0;
          goto LABEL_216;
        }
        v379 = v7;
        v8 = nullptr;
        *(_DWORD *)&v366[8] = 0;
        *(_QWORD *)v383 = 0;
        v381 = 0;
        *(_QWORD *)v366 = (unsigned int)(v380 - 1);
        do
        {
          v9 = v381 < *((_DWORD *)v6 - 1);
          v6 = *(_QWORD **)&v366[4];
          if ( !v9 )
          {
            *(_QWORD *)v382 = v379;
            v317 = v410;
            *(_QWORD *)v363 = v426;
            goto LABEL_185;
          }
          if ( *(_QWORD *)&v366[4] )
          {
            v10 = *(_QWORD *)&v366[4] + 8LL * *(unsigned int *)(*(_QWORD *)&v366[4] - 4LL);
            if ( *(_QWORD *)&v366[4] < v10 )
            {
              do
              {
                while ( 1 )
                {
                  v11 = *v6;
                  if ( *v6 )
                  {
                    v12 = (*(_DWORD *)(v11 + 8))-- == 1;
                    if ( v12 )
                      break;
                  }
                  if ( (unsigned __int64)++v6 >= v10 )
                    goto LABEL_17;
                }
                sub_15D7BC0(v379, v11);
                ++v6;
              }
              while ( (unsigned __int64)v6 < v10 );
            }
LABEL_17:
            *(_DWORD *)(*(_QWORD *)&v366[4] - 4LL) = 0;
          }
          if ( v8 )
          {
            v13 = v8;
            v14 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
            if ( (unsigned __int64)v8 < v14 )
            {
              do
              {
                while ( 1 )
                {
                  v15 = *v13;
                  if ( *v13 )
                  {
                    v12 = (*(_DWORD *)(v15 + 8))-- == 1;
                    if ( v12 )
                      break;
                  }
                  if ( (unsigned __int64)++v13 >= v14 )
                    goto LABEL_25;
                }
                sub_15D7BC0(*(_QWORD *)v382, v15);
                ++v13;
              }
              while ( (unsigned __int64)v13 < v14 );
            }
LABEL_25:
            *((_DWORD *)v8 - 1) = 0;
          }
          v360 = *(_QWORD *)(**(_QWORD **)v385 + 8LL * v381);
          *(_QWORD *)v363 = v426;
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v426);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_39A600((__int64)v428, **(const char ***)v375);
          std::__ostream_insert<char,std::char_traits<char>>();
          v306 = v380;
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::stringbuf::str(v410, v429);
          v371 = &v407;
          sub_180C5A0(&v407, *(_QWORD *)v410);
          sub_233E40((__int64)v410);
          v16 = v326[1];
          v17 = *(_QWORD *)(v16 + 840);
          v387 = v16;
          v18 = sub_15E3510(v16, &v407, 0, 0, v17, 0);
          v21 = sub_15DC610(
                  v16,
                  v18,
                  0,
                  0,
                  v19,
                  v20,
                  v300,
                  v306,
                  (int)v410,
                  (int)v323,
                  (int)v326,
                  (char)v331,
                  (int)v348,
                  (int)ptr,
                  (int)v356[0],
                  v356[1]);
          v384 = v21;
          if ( v21 )
          {
            ++*(_DWORD *)(v21 + 8);
            v22 = v21;
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
            *(_QWORD *)v410 = v22;
            ++*(_DWORD *)(v22 + 8);
          }
          else
          {
            std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
            *(_QWORD *)v410 = 0;
          }
          v399 = *(unsigned int **)v383;
          sub_399930(&v399, v317);
          *(_QWORD *)v383 = v399;
          if ( !v380 && *(_DWORD *)(v360 + 68) )
          {
            v162 = sub_15E1A70(v326[1]);
            v163 = v162;
            if ( v162 )
              ++*(_DWORD *)(v162 + 8);
            sub_399450(*(__int64 *)v405, v406);
            *(_QWORD *)v405 = v163;
            sub_E5EBF0(*(_QWORD *)(*v326 + 64), v163);
            sub_399450(v384, v387);
            goto LABEL_183;
          }
          *(_QWORD *)v400 = v379;
          v401 = *(_QWORD **)&v366[4];
          sub_39BFA0((__int64)v326, v360, v380, v381, *(__int64 **)v389, v23);
          v24 = v401;
          v379 = *(_QWORD *)v400;
          *(_QWORD *)&v366[4] = v401;
          sub_399270(*(__int64 *)v363, v326[1], (__int64)v430);
          v430[8] = 0;
          *(_QWORD *)v426 = &off_1C4CA80;
          if ( *(_DWORD *)(*(_QWORD *)v372 + 32LL) )
          {
            v26 = 0;
            v323 = &v412;
            if ( !v24 )
            {
              do
              {
                sub_157BE40(
                  (int)v317,
                  v363[0],
                  *(_QWORD *)(*(_QWORD *)(v360 + 40) + 8LL * v26 + 32),
                  0,
                  0,
                  v25,
                  v300,
                  v305,
                  (int)v317,
                  (int)v323,
                  (int)v326,
                  (int)v331,
                  (__int64)v348,
                  ptr);
                v50 = *(_QWORD *)v405;
                v51 = *(_QWORD *)v410;
                *(_QWORD *)v410 = *(_QWORD *)v405;
                *(_QWORD *)v405 = v51;
                if ( *(_QWORD *)v410 )
                {
                  v52 = v411;
                  v12 = (*(_DWORD *)(v50 + 8))-- == 1;
                  if ( v12 )
                    sub_15D7BC0(v52, v50);
                }
                v53 = *(_QWORD *)(v328 + 8);
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v319);
                sub_39A600(v325, **(const char ***)v375);
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::stringbuf::str(v371, &v412.m128i_u64[1]);
                sub_180C5A0(v396, v407);
                sub_233E40((__int64)v371);
                v54 = *(_QWORD *)(v328 + 8);
                v55 = sub_15E3510(v54, v396, 0, 0, *(_QWORD *)(*(_QWORD *)v372 + 8LL * v26 + 48), 0);
                v58 = sub_15DC610(
                        v54,
                        v55,
                        0,
                        0,
                        v56,
                        v57,
                        v302,
                        v308,
                        (int)v319,
                        v325,
                        v328,
                        v333,
                        v350,
                        ptrb,
                        (int)v356[0],
                        v356[1]);
                v59 = v58;
                if ( v58 )
                  ++*(_DWORD *)(v58 + 8);
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
                v60 = sub_15E1B70(v53);
                v61 = v60;
                if ( v60 )
                  ++*(_DWORD *)(v60 + 8);
                if ( v8 )
                {
                  v62 = *((_DWORD *)v8 - 1);
                  if ( v62 == *((_DWORD *)v8 - 2) )
                  {
                    v63 = (3 * v62 + 1) >> 1;
                    v64 = 8 * v63 + 8;
                    if ( 8 * v62 + 8 >= (unsigned int)v64 || v62 >= v63 )
                      goto LABEL_398;
                    v65 = (unsigned int *)sub_186B300(v8 - 1, v64);
                    v66 = v65[1];
                    v8 = (__int64 *)(v65 + 2);
                    *v65 = v63;
                    LODWORD(v65) = v66;
                    v49 = &v8[v66];
                    v48 = (_DWORD)v65 + 1;
                  }
                  else
                  {
                    v47 = v62;
                    v48 = v62 + 1;
                    v49 = &v8[v47];
                  }
                }
                else
                {
                  v279 = (_QWORD *)sub_186B270(0x18u);
                  v8 = v279 + 1;
                  *v279 = 2;
                  v48 = 1;
                  v49 = v8;
                }
                *v49 = v61;
                *((_DWORD *)v8 - 1) = v48;
                if ( v59 )
                {
                  v12 = (*(_DWORD *)(v59 + 8))-- == 1;
                  if ( v12 )
                    sub_15D7BC0(v54, v59);
                }
                ++v26;
              }
              while ( v26 < *(_DWORD *)(*(_QWORD *)v372 + 32LL) );
              v67 = *(_DWORD *)(v360 + 68);
              if ( !v67 )
              {
                if ( *(_DWORD *)(v360 + 56) )
                  goto LABEL_324;
                goto LABEL_194;
              }
LABEL_232:
              LODWORD(v377) = 0;
              while ( 1 )
              {
                v376 = (unsigned int)v377;
                v186 = *(_QWORD *)(v360 + 8LL * (unsigned int)v377 + 80);
                v340 = *(void **)((v186 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                if ( *((_DWORD *)v340 + 8) )
                {
                  v313 = 0;
                  LODWORD(v364) = v380 - 1;
                  v367 = (std::ios_base *)v421;
                  while ( 1 )
                  {
                    v369.m128i_i32[2] = v313;
                    sub_157BE40(
                      (int)v317,
                      v363[0],
                      *(_QWORD *)((v186 & 0xFFFFFFFFFFFFFFF8LL) + 8LL * (unsigned int)v313 + 32),
                      0,
                      0,
                      v25,
                      v300,
                      v313,
                      (int)v317,
                      (int)v323,
                      (int)v326,
                      (int)v340,
                      (__int64)v348,
                      ptr);
                    v208 = *(_QWORD *)v405;
                    v369.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                      + 64;
                    v209 = *(_QWORD *)v410;
                    *(_QWORD *)v410 = *(_QWORD *)v405;
                    *(_QWORD *)v405 = v209;
                    *(__m128i *)v356 = _mm_unpacklo_epi64(
                                         (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                                 + 64),
                                         (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
                    if ( *(_QWORD *)v410 )
                    {
                      v210 = v411;
                      v12 = (*(_DWORD *)(v208 + 8))-- == 1;
                      if ( v12 )
                        sub_15D7BC0(v210, v208);
                    }
                    v211 = *(_QWORD *)(v330 + 8);
                    v370 = v367;
                    *(_QWORD *)v368 = v211;
                    LODWORD(v374) = (_DWORD)v364;
                    std::ios_base::ios_base(v367);
                    v423 = 0;
                    v424 = 0;
                    v212 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
                    v425 = 0;
                    v213 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
                    v357 = (char *)&`vtable for'std::ios;
                    v421[0] = (char *)&`vtable for'std::ios + 16;
                    v214 = *(_QWORD *)(v212 - 24);
                    v422 = 0;
                    *(_QWORD *)v410 = v212;
                    *(_QWORD *)((char *)v410 + v214) = v213;
                    v411 = 0;
                    v352 = v213;
                    std::ios::init();
                    v215 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
                    v216 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
                    v217 = *(_QWORD *)(v215 - 24);
                    v412.m128i_i64[0] = v215;
                    v361 = v216;
                    *(__int64 *)((char *)v412.m128i_i64 + v217) = v216;
                    std::ios::init();
                    v218 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
                    si128 = _mm_load_si128((const __m128i *)v356);
                    v362.m128i_i64[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
                    v220 = *(_QWORD *)(v362.m128i_i64[0] - 24);
                    v362.m128i_i64[1] = v218;
                    *(_QWORD *)((char *)v410 + v220) = v218;
                    *(_QWORD *)v410 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                    + 24;
                    v421[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                            + 104;
                    v356[0] = (std::locale *)&v416;
                    v412 = si128;
                    v413 = 0;
                    *(_OWORD *)src = 0;
                    v415 = 0;
                    std::locale::locale((std::locale *)&v416);
                    v417 = 24;
                    v358 = &`vtable for'std::stringbuf;
                    v412.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
                    v359 = v420;
                    v418 = v420;
                    n = 0;
                    LOBYTE(v420[0]) = 0;
                    std::ios::init();
                    v221 = *((_QWORD *)v341 + 2);
                    if ( (v221 & 7) != 0 )
                    {
                      std::__ostream_insert<char,std::char_traits<char>>();
                      std::ostream::operator<<();
                    }
                    else
                    {
                      if ( v221 )
                        strlen(*((const char **)v341 + 2));
                      std::__ostream_insert<char,std::char_traits<char>>();
                    }
                    std::__ostream_insert<char,std::char_traits<char>>();
                    std::ostream::_M_insert<unsigned long>();
                    std::__ostream_insert<char,std::char_traits<char>>();
                    std::ostream::_M_insert<unsigned long>();
                    v187 = (_BYTE *)v415;
                    v188 = dest;
                    v408 = 0;
                    v407 = dest;
                    LOBYTE(dest[0]) = 0;
                    if ( (_QWORD)v415 )
                    {
                      if ( src[0] >= (void *)v415 )
                        v187 = src[0];
                      if ( !src[0] )
                        v187 = (_BYTE *)v415;
                      v189 = v187 - (char *)src[1];
                      v190 = v189;
                      if ( (v189 & 0x8000000000000000LL) != 0LL )
                        goto LABEL_403;
                      if ( v189 > 0xF )
                      {
                        if ( v189 > 0x1D )
                        {
                          v227 = v189 + 1;
                          if ( (__int64)(v189 + 1) < 0 )
                            goto LABEL_187;
                          v373 = (_QWORD *)v189;
                        }
                        else
                        {
                          v373 = &qword_18 + 6;
                          v227 = 31;
                        }
                        v392 = dest;
                        v378 = src[1];
                        v228 = (void *)operator new(v227);
                        v229 = v378;
                        v188 = v392;
                        v191 = v228;
                        if ( v378 )
                        {
                          v378 = v392;
                          memcpy(v228, v229, v190);
                          v188 = v378;
                        }
                        if ( v407 != v188 )
                        {
                          v378 = v188;
                          operator delete(v407, dest[0] + 1LL);
                          v188 = v378;
                        }
                        v407 = v191;
                        dest[0] = v373;
                      }
                      else if ( src[1] == dest )
                      {
                        v373 = dest;
                        std::string::_M_replace_cold();
                        v188 = v373;
                        v191 = v407;
                      }
                      else
                      {
                        if ( v189 )
                        {
                          if ( v189 == 1 )
                            LOBYTE(dest[0]) = *(_BYTE *)src[1];
                          else
                            v188 = memcpy(dest, src[1], v189);
                        }
                        v191 = v188;
                      }
                      v408 = v190;
                      *((_BYTE *)v191 + v190) = 0;
                    }
                    else
                    {
                      v226 = n;
                      if ( n > 0xF )
                      {
                        if ( (n & 0x8000000000000000LL) != 0LL )
                          goto LABEL_405;
                        if ( n <= 0x1D )
                        {
                          v273 = 30;
                          v272 = 31;
                        }
                        else
                        {
                          v272 = n + 1;
                          if ( (__int64)(n + 1) < 0 )
                            goto LABEL_357;
                          v273 = n;
                        }
                        v378 = dest;
                        v373 = (_QWORD *)operator new(v272);
                        sub_233E40((__int64)v371);
                        v260 = v373;
                        dest[0] = v273;
                        v259 = v418;
                        v188 = v378;
                        v407 = v373;
                      }
                      else
                      {
                        if ( !n )
                          goto LABEL_278;
                        v259 = v418;
                        v260 = dest;
                        if ( n == 1 )
                        {
                          LOBYTE(dest[0]) = *(_BYTE *)v418;
LABEL_278:
                          v408 = n;
                          *((_BYTE *)dest + n) = 0;
                          goto LABEL_249;
                        }
                      }
                      v373 = v188;
                      memcpy(v260, v259, v226);
                      v408 = v226;
                      v188 = v373;
                      *((_BYTE *)v407 + v226) = 0;
                    }
LABEL_249:
                    v373 = v188;
                    sub_180C5A0(v396, v407);
                    if ( v407 != v373 )
                      operator delete(v407, dest[0] + 1LL);
                    v192 = *(_QWORD *)(v330 + 8);
                    v193 = sub_15E3510(v192, v396, 0, 0, *((_QWORD *)v341 + v369.m128i_u32[2] + 6), 0);
                    v196 = sub_15DC610(
                             v192,
                             v193,
                             0,
                             0,
                             v194,
                             v195,
                             v304,
                             v315,
                             v322,
                             (int)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>,
                             v330,
                             (char)v341,
                             v352,
                             (int)&`vtable for'std::streambuf,
                             (int)v356[0],
                             v356[1]);
                    v197 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v369), (__m128i)((unsigned __int64)v358 + 16));
                    if ( v196 )
                      ++*(_DWORD *)(v196 + 8);
                    v412 = v197;
                    *(_QWORD *)v410 = (char *)v323 + 24;
                    v421[0] = (char *)v323 + 104;
                    if ( v418 != v359 )
                      operator delete(v418, v420[0] + 1LL);
                    v412.m128i_i64[1] = (__int64)ptr + 16;
                    std::locale::~locale(v356[0]);
                    v198 = v361;
                    v199 = v367;
                    *(_QWORD *)((char *)v410 + *(_QWORD *)(v362.m128i_i64[0] - 24)) = v362.m128i_i64[1];
                    v200 = *(_QWORD *)(v215 - 24);
                    v412.m128i_i64[0] = v215;
                    *(__int64 *)((char *)v412.m128i_i64 + v200) = v198;
                    v201 = *(_QWORD *)(v212 - 24);
                    *(_QWORD *)v410 = v212;
                    *(_QWORD *)((char *)v410 + v201) = v348;
                    v411 = 0;
                    v421[0] = v357 + 16;
                    std::ios_base::~ios_base(v199);
                    v202 = sub_15E1B70(v368[0]);
                    v203 = v202;
                    if ( v202 )
                      ++*(_DWORD *)(v202 + 8);
                    if ( v8 )
                    {
                      v204 = *((_DWORD *)v8 - 1);
                      if ( v204 == *((_DWORD *)v8 - 2) )
                      {
                        v222 = (3 * v204 + 1) >> 1;
                        v223 = 8 * v222 + 8;
                        if ( 8 * v204 + 8 >= (unsigned int)v223 || v204 >= v222 )
                          goto LABEL_399;
                        LODWORD(v356[0]) = (3 * v204 + 1) >> 1;
                        v224 = (_DWORD *)sub_186B300(v8 - 1, v223);
                        v225 = (unsigned int)v224[1];
                        v8 = (__int64 *)(v224 + 2);
                        *v224 = v356[0];
                        LODWORD(v224) = v225;
                        v207 = &v8[v225];
                        v206 = (_DWORD)v224 + 1;
                      }
                      else
                      {
                        v205 = v204;
                        v206 = v204 + 1;
                        v207 = &v8[v205];
                      }
                    }
                    else
                    {
                      v258 = (_QWORD *)sub_186B270(0x18u);
                      v8 = v258 + 1;
                      v207 = v258 + 1;
                      *v258 = 2;
                      v206 = 1;
                    }
                    *v207 = v203;
                    *((_DWORD *)v8 - 1) = v206;
                    if ( v196 )
                    {
                      v12 = (*(_DWORD *)(v196 + 8))-- == 1;
                      if ( v12 )
                        sub_15D7BC0(v192, v196);
                    }
                    v313 = *(_QWORD *)v314 + 1LL;
                    if ( (unsigned int)v313 >= *((_DWORD *)v340 + 8) )
                      goto LABEL_289;
                    v186 = *(_QWORD *)(v360 + 8 * v376 + 80);
                  }
                }
                v212 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
                LODWORD(v374) = v380 - 1;
                v348 = (void *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
                v323 = (__m128i *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>;
                ptr = &`vtable for'std::streambuf;
                v370 = (std::ios_base *)v421;
                v357 = (char *)&`vtable for'std::ios;
LABEL_289:
                v362.m128i_i64[0] = (__int64)v323[4].m128i_i64;
                *(__m128i *)v356 = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)&v323[4],
                                     (__m128i)((unsigned __int64)ptr + 16));
                std::ios_base::ios_base(v370);
                v424 = 0;
                v423 = 0;
                v425 = 0;
                v421[0] = v357 + 16;
                v230 = *(_QWORD *)(v212 - 24);
                v422 = 0;
                *(_QWORD *)v410 = v212;
                *(_QWORD *)((char *)v410 + v230) = v348;
                v411 = 0;
                std::ios::init();
                v231 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
                v232 = *(_QWORD *)(v231 - 24);
                v412.m128i_i64[0] = v231;
                v233 = (__int64 *)((char *)v412.m128i_i64 + v232);
                v234 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
                *v233 = v234;
                v316 = v234;
                std::ios::init();
                v235 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
                v236 = _mm_load_si128((const __m128i *)v356);
                v237 = *(_QWORD *)(v235 - 24);
                v361 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
                *(_QWORD *)((char *)v410 + v237) = v361;
                *(_QWORD *)v410 = (char *)v323 + 24;
                v421[0] = (char *)v323 + 104;
                v356[0] = (std::locale *)&v416;
                v412 = v236;
                v413 = 0;
                *(_OWORD *)src = 0;
                v415 = 0;
                std::locale::locale((std::locale *)&v416);
                v417 = 24;
                v358 = &`vtable for'std::stringbuf;
                v412.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
                v359 = v420;
                v418 = v420;
                n = 0;
                LOBYTE(v420[0]) = 0;
                std::ios::init();
                v238 = *((_QWORD *)v340 + 2);
                if ( (v238 & 7) != 0 )
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::operator<<();
                }
                else
                {
                  if ( v238 )
                    strlen(*((const char **)v340 + 2));
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                v239 = (_BYTE *)v415;
                v240 = dest;
                v408 = 0;
                v407 = dest;
                LOBYTE(dest[0]) = 0;
                if ( (_QWORD)v415 )
                {
                  if ( src[0] >= (void *)v415 )
                    v239 = src[0];
                  if ( !src[0] )
                    v239 = (_BYTE *)v415;
                  v241 = v239 - (char *)src[1];
                  v242 = v241;
                  if ( (v241 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_407;
                  if ( v241 > 0xF )
                  {
                    if ( v241 <= 0x1D )
                    {
                      v345 = &qword_18 + 6;
                      v286 = 31;
                    }
                    else
                    {
                      v286 = v241 + 1;
                      if ( (__int64)(v241 + 1) < 0 )
                        goto LABEL_364;
                      v345 = (void *)v241;
                    }
                    v364 = (std::ios_base *)dest;
                    v362.m128i_i64[1] = (__int64)src[1];
                    v287 = (void *)operator new(v286);
                    v288 = (const void *)v362.m128i_i64[1];
                    v289 = v364;
                    v243 = v287;
                    if ( v362.m128i_i64[1] )
                    {
                      v362.m128i_i64[1] = (__int64)v364;
                      memcpy(v287, v288, v242);
                      v289 = (std::ios_base *)v362.m128i_i64[1];
                    }
                    v362.m128i_i64[1] = (__int64)v289;
                    sub_233E40((__int64)v371);
                    v407 = v243;
                    v240 = (_QWORD *)v362.m128i_i64[1];
                    dest[0] = v345;
                  }
                  else if ( src[1] == dest )
                  {
                    std::string::_M_replace_cold();
                    v240 = dest;
                    v243 = v407;
                  }
                  else
                  {
                    if ( v241 )
                    {
                      if ( v241 == 1 )
                        LOBYTE(dest[0]) = *(_BYTE *)src[1];
                      else
                        v240 = memcpy(dest, src[1], v241);
                    }
                    v243 = v240;
                  }
                  v408 = v242;
                  *((_BYTE *)v243 + v242) = 0;
                  goto LABEL_304;
                }
                v284 = n;
                if ( n > 0xF )
                  break;
                if ( n )
                {
                  v294 = v418;
                  v293 = dest;
                  if ( n != 1 )
                    goto LABEL_384;
                  LOBYTE(dest[0]) = *(_BYTE *)v418;
                }
                v285 = dest;
LABEL_368:
                v408 = v284;
                *((_BYTE *)v285 + v284) = 0;
LABEL_304:
                v342 = v240;
                sub_180C5A0(v396, v407);
                if ( v407 != v342 )
                  operator delete(v407, dest[0] + 1LL);
                v244 = v326[1];
                v245 = sub_15E3510(v244, v396, 0, 0, *(_QWORD *)(v244 + 840), 0);
                v248 = sub_15DC610(
                         v244,
                         v245,
                         0,
                         0,
                         v246,
                         v247,
                         v300,
                         v316,
                         (int)v317,
                         (int)v323,
                         (int)v326,
                         (char)v342,
                         (int)v348,
                         (int)ptr,
                         (int)v356[0],
                         v356[1]);
                v249 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v362), (__m128i)((unsigned __int64)v358 + 16));
                if ( v248 )
                  ++*(_DWORD *)(v248 + 8);
                v412 = v249;
                *(_QWORD *)v410 = (char *)v323 + 24;
                v421[0] = (char *)v323 + 104;
                if ( v418 != v359 )
                  operator delete(v418, v420[0] + 1LL);
                v412.m128i_i64[1] = (__int64)ptr + 16;
                std::locale::~locale(v356[0]);
                v250 = v370;
                *(_QWORD *)((char *)v410 + *(_QWORD *)(v235 - 24)) = v361;
                v251 = *(_QWORD *)(v231 - 24);
                v412.m128i_i64[0] = v231;
                *(__int64 *)((char *)v412.m128i_i64 + v251) = v305;
                v252 = *(_QWORD *)(v212 - 24);
                *(_QWORD *)v410 = v212;
                *(_QWORD *)((char *)v410 + v252) = v348;
                v411 = 0;
                v421[0] = v357 + 16;
                std::ios_base::~ios_base(v250);
                if ( v8 )
                {
                  v253 = *((_DWORD *)v8 - 1);
                  if ( v253 == *((_DWORD *)v8 - 2) )
                  {
                    v274 = (3 * v253 + 1) >> 1;
                    v275 = 8 * v274 + 8;
                    if ( 8 * v253 + 8 >= v275 || v253 >= v274 )
                      goto LABEL_404;
                    v276 = (unsigned int *)sub_186B300(v8 - 1, v275);
                    v277 = v276[1];
                    v8 = (__int64 *)(v276 + 2);
                    *v276 = v274;
                    LODWORD(v276) = v277;
                    v256 = &v8[v277];
                    v255 = (_DWORD)v276 + 1;
                  }
                  else
                  {
                    v254 = v253;
                    v255 = v253 + 1;
                    v256 = &v8[v254];
                  }
                }
                else
                {
                  v295 = (_QWORD *)sub_186B270(0x18u);
                  v8 = v295 + 1;
                  *v295 = 2;
                  v255 = 1;
                  v256 = v8;
                }
                *v256 = v248;
                v257 = v360;
                *((_DWORD *)v8 - 1) = v255;
                LODWORD(v377) = (_DWORD)v377 + 1;
                v67 = *(_DWORD *)(v257 + 68);
                if ( (unsigned int)v377 >= v67 )
                {
                  if ( v67 < *(_DWORD *)(v360 + 56) )
                  {
                    while ( 1 )
                    {
LABEL_324:
                      sub_157BE40(
                        (int)v317,
                        v363[0],
                        *(_DWORD *)(v360 + 8LL * v67 + 80) & 0xFFFFFFF8,
                        0,
                        0,
                        v25,
                        v300,
                        v305,
                        (int)v317,
                        (int)v323,
                        (int)v326,
                        (int)v331,
                        (__int64)v348,
                        ptr);
                      v264 = *(_QWORD *)v405;
                      v265 = *(_QWORD *)v410;
                      *(_QWORD *)v410 = *(_QWORD *)v405;
                      *(_QWORD *)v405 = v265;
                      if ( *(_QWORD *)v410 )
                      {
                        v266 = v411;
                        v12 = (*(_DWORD *)(v264 + 8))-- == 1;
                        if ( v12 )
                        {
                          sub_15D7BC0(v266, v264);
                          v265 = *(_QWORD *)v405;
                        }
                      }
                      if ( v265 )
                        ++*(_DWORD *)(v265 + 8);
                      if ( v8 )
                      {
                        v267 = *((_DWORD *)v8 - 1);
                        if ( v267 == *((_DWORD *)v8 - 2) )
                        {
                          v268 = (3 * v267 + 1) >> 1;
                          v269 = 8 * v268 + 8;
                          if ( 8 * v267 + 8 >= v269 || v267 >= v268 )
                            goto LABEL_409;
                          v270 = (unsigned int *)sub_186B300(v8 - 1, v269);
                          v271 = v270[1];
                          v8 = (__int64 *)(v270 + 2);
                          *v270 = v268;
                          LODWORD(v270) = v271;
                          v263 = &v8[v271];
                          v262 = (_DWORD)v270 + 1;
                        }
                        else
                        {
                          v261 = v267;
                          v262 = v267 + 1;
                          v263 = &v8[v261];
                        }
                      }
                      else
                      {
                        v290 = (_QWORD *)sub_186B270(0x18u);
                        v8 = v290 + 1;
                        *v290 = 2;
                        v262 = 1;
                        v263 = v8;
                      }
                      *v263 = v265;
                      ++v67;
                      *((_DWORD *)v8 - 1) = v262;
                      if ( v67 >= *(_DWORD *)(v360 + 56) )
                        goto LABEL_194;
                    }
                  }
LABEL_315:
                  v407 = nullptr;
                  sub_39A6C0((__int64)v317, v326[1], (__int64)v371);
LABEL_195:
                  v169 = *((_DWORD *)v8 - 1);
                  goto LABEL_196;
                }
              }
              if ( (n & 0x8000000000000000LL) != 0LL )
                goto LABEL_400;
              if ( n > 0x1D )
              {
                v292 = n + 1;
                if ( (__int64)(n + 1) < 0 )
                  goto LABEL_397;
                v291 = n;
              }
              else
              {
                v291 = 30;
                v292 = 31;
              }
              v362.m128i_i64[1] = (__int64)dest;
              v346 = (_QWORD *)operator new(v292);
              sub_233E40((__int64)v371);
              v293 = v346;
              dest[0] = v291;
              v294 = v418;
              v240 = (_QWORD *)v362.m128i_i64[1];
              v407 = v346;
LABEL_384:
              v347 = v240;
              memcpy(v293, v294, v284);
              v285 = v407;
              v240 = v347;
              goto LABEL_368;
            }
            do
            {
              sub_157BE40(
                (int)v317,
                v363[0],
                *(_QWORD *)(*(_QWORD *)(v360 + 40) + 8LL * v26 + 32),
                *(_DWORD *)(*(_QWORD *)&v366[4] - 4LL),
                *(int *)&v366[4],
                v25,
                v300,
                v305,
                (int)v317,
                (int)v323,
                (int)v326,
                (int)v331,
                (__int64)v348,
                ptr);
              v30 = *(_QWORD *)v405;
              v31 = *(_QWORD *)v410;
              *(_QWORD *)v410 = *(_QWORD *)v405;
              *(_QWORD *)v405 = v31;
              if ( *(_QWORD *)v410 )
              {
                v32 = v411;
                v12 = (*(_DWORD *)(v30 + 8))-- == 1;
                if ( v12 )
                  sub_15D7BC0(v32, v30);
              }
              v33 = *(_QWORD *)(v327 + 8);
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v318);
              sub_39A600(v324, **(const char ***)v375);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              std::stringbuf::str(v371, &v412.m128i_u64[1]);
              sub_180C5A0(v396, v407);
              sub_233E40((__int64)v371);
              v34 = *(_QWORD *)(v327 + 8);
              v35 = sub_15E3510(v34, v396, 0, 0, *(_QWORD *)(*(_QWORD *)v372 + 8LL * v26 + 48), 0);
              v38 = sub_15DC610(
                      v34,
                      v35,
                      0,
                      0,
                      v36,
                      v37,
                      v301,
                      v307,
                      (int)v318,
                      v324,
                      v327,
                      v332,
                      v349,
                      ptra,
                      (int)v356[0],
                      v356[1]);
              v39 = v38;
              if ( v38 )
                ++*(_DWORD *)(v38 + 8);
              std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
              v40 = sub_15E1B70(v33);
              v41 = v40;
              if ( v40 )
                ++*(_DWORD *)(v40 + 8);
              if ( v8 )
              {
                v42 = *((_DWORD *)v8 - 1);
                if ( v42 == *((_DWORD *)v8 - 2) )
                {
                  v43 = (3 * v42 + 1) >> 1;
                  v44 = 8 * v43 + 8;
                  if ( 8 * v42 + 8 >= (unsigned int)v44 || v42 >= v43 )
                  {
LABEL_398:
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_399470((__int64 *)v317, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v317);
                    sub_233E40((__int64)v317);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v45 = (unsigned int *)sub_186B300(v8 - 1, v44);
                  v46 = v45[1];
                  v8 = (__int64 *)(v45 + 2);
                  *v45 = v43;
                  LODWORD(v45) = v46;
                  v29 = &v8[v46];
                  v28 = (_DWORD)v45 + 1;
                }
                else
                {
                  v27 = v42;
                  v28 = v42 + 1;
                  v29 = &v8[v27];
                }
              }
              else
              {
                v157 = (_QWORD *)sub_186B270(0x18u);
                v8 = v157 + 1;
                *v157 = 2;
                v28 = 1;
                v29 = v8;
              }
              *v29 = v41;
              *((_DWORD *)v8 - 1) = v28;
              if ( v39 )
              {
                v12 = (*(_DWORD *)(v39 + 8))-- == 1;
                if ( v12 )
                  sub_15D7BC0(v34, v39);
              }
              ++v26;
            }
            while ( v26 < *(_DWORD *)(*(_QWORD *)v372 + 32LL) );
            v67 = *(_DWORD *)(v360 + 68);
            if ( !v67 )
            {
              if ( *(_DWORD *)(v360 + 56) )
                goto LABEL_156;
              goto LABEL_194;
            }
          }
          else
          {
            v67 = *(_DWORD *)(v360 + 68);
            if ( !v67 )
            {
              if ( *(_DWORD *)(v360 + 56) )
              {
                if ( !*(_QWORD *)&v366[4] )
                  goto LABEL_324;
                goto LABEL_156;
              }
              goto LABEL_194;
            }
            if ( !*(_QWORD *)&v366[4] )
              goto LABEL_232;
          }
          LODWORD(v376) = 0;
          do
          {
            v374 = (unsigned int)v376;
            v68 = *(_QWORD *)(v360 + 8LL * (unsigned int)v376 + 80);
            v334 = *(void **)((v68 & 0xFFFFFFFFFFFFFFF8LL) + 16);
            if ( *((_DWORD *)v334 + 8) )
            {
              v309 = 0;
              v364 = (std::ios_base *)v421;
              while ( 1 )
              {
                v90 = *(_DWORD *)(*(_QWORD *)&v366[4] - 4LL);
                LODWORD(v367) = v309;
                sub_157BE40(
                  (int)v317,
                  v363[0],
                  *(_QWORD *)((v68 & 0xFFFFFFFFFFFFFFF8LL) + 8LL * (unsigned int)v309 + 32),
                  v90,
                  *(int *)&v366[4],
                  v25,
                  v300,
                  v309,
                  (int)v317,
                  (int)v323,
                  (int)v326,
                  (int)v334,
                  (__int64)v348,
                  ptr);
                v91 = *(_QWORD *)v405;
                v369.m128i_i64[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                  + 64;
                v92 = *(_QWORD *)v410;
                *(_QWORD *)v410 = *(_QWORD *)v405;
                *(_QWORD *)v405 = v92;
                *(__m128i *)v356 = _mm_unpacklo_epi64(
                                     (__m128i)((unsigned __int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                             + 64),
                                     (__m128i)((unsigned __int64)&`vtable for'std::streambuf + 16));
                if ( *(_QWORD *)v410 )
                {
                  v93 = v411;
                  v12 = (*(_DWORD *)(v91 + 8))-- == 1;
                  if ( v12 )
                    sub_15D7BC0(v93, v91);
                }
                v94 = *(_QWORD *)(v329 + 8);
                v370 = v364;
                *(_QWORD *)v368 = v94;
                LODWORD(v373) = *(_DWORD *)v366;
                std::ios_base::ios_base(v364);
                v423 = 0;
                v424 = 0;
                v95 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
                v425 = 0;
                v96 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
                v357 = (char *)&`vtable for'std::ios;
                v421[0] = (char *)&`vtable for'std::ios + 16;
                v97 = *(_QWORD *)(v95 - 24);
                v422 = 0;
                *(_QWORD *)v410 = v95;
                *(_QWORD *)((char *)v410 + v97) = v96;
                v411 = 0;
                v351 = v96;
                std::ios::init();
                v98 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
                v99 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
                v100 = *(_QWORD *)(v98 - 24);
                v412.m128i_i64[0] = v98;
                v361 = v99;
                *(__int64 *)((char *)v412.m128i_i64 + v100) = v99;
                std::ios::init();
                v101 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
                v102 = _mm_load_si128((const __m128i *)v356);
                v362.m128i_i64[0] = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
                v103 = *(_QWORD *)(v362.m128i_i64[0] - 24);
                v362.m128i_i64[1] = v101;
                *(_QWORD *)((char *)v410 + v103) = v101;
                *(_QWORD *)v410 = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                + 24;
                v421[0] = (char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                        + 104;
                v356[0] = (std::locale *)&v416;
                v412 = v102;
                v413 = 0;
                *(_OWORD *)src = 0;
                v415 = 0;
                std::locale::locale((std::locale *)&v416);
                v417 = 24;
                v358 = &`vtable for'std::stringbuf;
                v412.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
                v359 = v420;
                v418 = v420;
                n = 0;
                LOBYTE(v420[0]) = 0;
                std::ios::init();
                v104 = *((_QWORD *)v335 + 2);
                if ( (v104 & 7) != 0 )
                {
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::operator<<();
                }
                else
                {
                  if ( v104 )
                    strlen(*((const char **)v335 + 2));
                  std::__ostream_insert<char,std::char_traits<char>>();
                }
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::_M_insert<unsigned long>();
                v69 = (_BYTE *)v415;
                v70 = dest;
                v408 = 0;
                v407 = dest;
                LOBYTE(dest[0]) = 0;
                if ( (_QWORD)v415 )
                {
                  if ( src[0] >= (void *)v415 )
                    v69 = src[0];
                  if ( !src[0] )
                    v69 = (_BYTE *)v415;
                  v71 = v69 - (char *)src[1];
                  v72 = v71;
                  if ( (v71 & 0x8000000000000000LL) != 0LL )
LABEL_403:
                    std::__throw_length_error("basic_string::_M_replace");
                  if ( v71 > 0xF )
                  {
                    if ( v71 > 0x1D )
                    {
                      v110 = v71 + 1;
                      if ( (__int64)(v71 + 1) < 0 )
LABEL_187:
                        std::__throw_bad_alloc();
                      v369.m128i_i64[1] = v71;
                    }
                    else
                    {
                      v369.m128i_i64[1] = 30;
                      v110 = 31;
                    }
                    v378 = dest;
                    v377 = src[1];
                    v111 = (void *)operator new(v110);
                    v112 = v377;
                    v70 = v378;
                    v73 = v111;
                    if ( v377 )
                    {
                      v377 = v378;
                      memcpy(v111, v112, v72);
                      v70 = v377;
                    }
                    if ( v407 != v70 )
                    {
                      v377 = v70;
                      operator delete(v407, dest[0] + 1LL);
                      v70 = v377;
                    }
                    v407 = v73;
                    dest[0] = v369.m128i_i64[1];
                  }
                  else if ( src[1] == dest )
                  {
                    v369.m128i_i64[1] = (__int64)dest;
                    std::string::_M_replace_cold();
                    v70 = (_QWORD *)v369.m128i_i64[1];
                    v73 = v407;
                  }
                  else
                  {
                    if ( v71 )
                    {
                      if ( v71 == 1 )
                        LOBYTE(dest[0]) = *(_BYTE *)src[1];
                      else
                        v70 = memcpy(dest, src[1], v71);
                    }
                    v73 = v70;
                  }
                  v408 = v72;
                  *((_BYTE *)v73 + v72) = 0;
                }
                else
                {
                  v109 = n;
                  if ( n > 0xF )
                  {
                    if ( (n & 0x8000000000000000LL) != 0LL )
LABEL_405:
                      std::__throw_length_error("basic_string::_M_create");
                    if ( n <= 0x1D )
                    {
                      v156 = 30;
                      v155 = 31;
                    }
                    else
                    {
                      v155 = n + 1;
                      if ( (__int64)(n + 1) < 0 )
LABEL_357:
                        std::__throw_bad_alloc();
                      v156 = n;
                    }
                    v377 = dest;
                    v369.m128i_i64[1] = operator new(v155);
                    sub_233E40((__int64)v371);
                    v154 = (_QWORD *)v369.m128i_i64[1];
                    dest[0] = v156;
                    v153 = v418;
                    v70 = v377;
                    v407 = (void *)v369.m128i_i64[1];
                  }
                  else
                  {
                    if ( !n )
                      goto LABEL_114;
                    v153 = v418;
                    v154 = dest;
                    if ( n == 1 )
                    {
                      LOBYTE(dest[0]) = *(_BYTE *)v418;
LABEL_114:
                      v408 = n;
                      *((_BYTE *)dest + n) = 0;
                      goto LABEL_87;
                    }
                  }
                  v369.m128i_i64[1] = (__int64)v70;
                  memcpy(v154, v153, v109);
                  v408 = v109;
                  v70 = (_QWORD *)v369.m128i_i64[1];
                  *((_BYTE *)v407 + v109) = 0;
                }
LABEL_87:
                v369.m128i_i64[1] = (__int64)v70;
                sub_180C5A0(v396, v407);
                if ( v407 != (void *)v369.m128i_i64[1] )
                  operator delete(v407, dest[0] + 1LL);
                v74 = *(_QWORD *)(v329 + 8);
                v75 = sub_15E3510(v74, v396, 0, 0, *((_QWORD *)v335 + (unsigned int)v367 + 6), 0);
                v78 = sub_15DC610(
                        v74,
                        v75,
                        0,
                        0,
                        v76,
                        v77,
                        v303,
                        v311,
                        v320,
                        (int)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>,
                        v329,
                        (char)v335,
                        v351,
                        (int)&`vtable for'std::streambuf,
                        (int)v356[0],
                        v356[1]);
                v79 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v369), (__m128i)((unsigned __int64)v358 + 16));
                if ( v78 )
                  ++*(_DWORD *)(v78 + 8);
                v412 = v79;
                *(_QWORD *)v410 = (char *)v323 + 24;
                v421[0] = (char *)v323 + 104;
                if ( v418 != v359 )
                  operator delete(v418, v420[0] + 1LL);
                v412.m128i_i64[1] = (__int64)ptr + 16;
                std::locale::~locale(v356[0]);
                v80 = v361;
                v81 = v364;
                *(_QWORD *)((char *)v410 + *(_QWORD *)(v362.m128i_i64[0] - 24)) = v362.m128i_i64[1];
                v82 = *(_QWORD *)(v98 - 24);
                v412.m128i_i64[0] = v98;
                *(__int64 *)((char *)v412.m128i_i64 + v82) = v80;
                v83 = *(_QWORD *)(v95 - 24);
                *(_QWORD *)v410 = v95;
                *(_QWORD *)((char *)v410 + v83) = v348;
                v411 = 0;
                v421[0] = v357 + 16;
                std::ios_base::~ios_base(v81);
                v84 = sub_15E1B70(v368[0]);
                v85 = v84;
                if ( v84 )
                  ++*(_DWORD *)(v84 + 8);
                if ( v8 )
                {
                  v86 = *((_DWORD *)v8 - 1);
                  if ( v86 == *((_DWORD *)v8 - 2) )
                  {
                    v105 = (3 * v86 + 1) >> 1;
                    v106 = 8 * v105 + 8;
                    if ( 8 * v86 + 8 >= (unsigned int)v106 || (LODWORD(v356[0]) = (3 * v86 + 1) >> 1, v86 >= v105) )
                    {
LABEL_399:
                      v297 = (char **)__cxa_allocate_exception(0x28u);
                      sub_399470((__int64 *)v317, "Overflow encountered when expanding vector");
                      *v297 = (char *)off_1C63128;
                      sub_2333C0(v297 + 1, v317);
                      sub_233E40((__int64)v317);
                      __cxa_throw(
                        v297,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v107 = (_DWORD *)sub_186B300(v8 - 1, v106);
                    v108 = (unsigned int)v107[1];
                    v8 = (__int64 *)(v107 + 2);
                    *v107 = v356[0];
                    LODWORD(v107) = v108;
                    v89 = &v8[v108];
                    v88 = (_DWORD)v107 + 1;
                  }
                  else
                  {
                    v87 = v86;
                    v88 = v86 + 1;
                    v89 = &v8[v87];
                  }
                }
                else
                {
                  v152 = (_QWORD *)sub_186B270(0x18u);
                  v8 = v152 + 1;
                  *v152 = 2;
                  v89 = v152 + 1;
                  v88 = 1;
                }
                *v89 = v85;
                *((_DWORD *)v8 - 1) = v88;
                if ( v78 )
                {
                  v12 = (*(_DWORD *)(v78 + 8))-- == 1;
                  if ( v12 )
                    sub_15D7BC0(v74, v78);
                }
                v309 = *(_QWORD *)v310 + 1LL;
                if ( (unsigned int)v309 >= *((_DWORD *)v334 + 8) )
                  goto LABEL_125;
                v68 = *(_QWORD *)(v360 + 8 * v374 + 80);
              }
            }
            v95 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
            LODWORD(v373) = v380 - 1;
            v348 = (void *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
            v323 = (__m128i *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>;
            ptr = &`vtable for'std::streambuf;
            v370 = (std::ios_base *)v421;
            v357 = (char *)&`vtable for'std::ios;
LABEL_125:
            v362.m128i_i64[0] = (__int64)v323[4].m128i_i64;
            *(__m128i *)v356 = _mm_unpacklo_epi64(
                                 (__m128i)(unsigned __int64)&v323[4],
                                 (__m128i)((unsigned __int64)ptr + 16));
            std::ios_base::ios_base(v370);
            v424 = 0;
            v423 = 0;
            v425 = 0;
            v421[0] = v357 + 16;
            v113 = *(_QWORD *)(v95 - 24);
            v422 = 0;
            *(_QWORD *)v410 = v95;
            *(_QWORD *)((char *)v410 + v113) = v348;
            v411 = 0;
            std::ios::init();
            v114 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
            v115 = *(_QWORD *)(v114 - 24);
            v412.m128i_i64[0] = v114;
            v116 = (__int64 *)((char *)v412.m128i_i64 + v115);
            v117 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
            *v116 = v117;
            v312 = v117;
            std::ios::init();
            v118 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
            v119 = _mm_load_si128((const __m128i *)v356);
            v120 = *(_QWORD *)(v118 - 24);
            v361 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
            *(_QWORD *)((char *)v410 + v120) = v361;
            *(_QWORD *)v410 = (char *)v323 + 24;
            v421[0] = (char *)v323 + 104;
            v356[0] = (std::locale *)&v416;
            v412 = v119;
            v413 = 0;
            *(_OWORD *)src = 0;
            v415 = 0;
            std::locale::locale((std::locale *)&v416);
            v417 = 24;
            v358 = &`vtable for'std::stringbuf;
            v412.m128i_i64[1] = (__int64)&`vtable for'std::stringbuf + 16;
            v359 = v420;
            v418 = v420;
            n = 0;
            LOBYTE(v420[0]) = 0;
            std::ios::init();
            v121 = *((_QWORD *)v334 + 2);
            if ( (v121 & 7) != 0 )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::operator<<();
            }
            else
            {
              if ( v121 )
                strlen(*((const char **)v334 + 2));
              std::__ostream_insert<char,std::char_traits<char>>();
            }
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            v122 = (_BYTE *)v415;
            v123 = dest;
            v408 = 0;
            v407 = dest;
            LOBYTE(dest[0]) = 0;
            if ( !(_QWORD)v415 )
            {
              v173 = n;
              if ( n > 0xF )
              {
                if ( (n & 0x8000000000000000LL) != 0LL )
LABEL_400:
                  std::__throw_length_error("basic_string::_M_create");
                if ( n <= 0x1D )
                {
                  v281 = 30;
                  v280 = 31;
                }
                else
                {
                  v280 = n + 1;
                  if ( (__int64)(n + 1) < 0 )
LABEL_397:
                    std::__throw_bad_alloc();
                  v281 = n;
                }
                v362.m128i_i64[1] = (__int64)dest;
                v343 = (_QWORD *)operator new(v280);
                sub_233E40((__int64)v371);
                v175 = v343;
                dest[0] = v281;
                v174 = v418;
                v123 = (_QWORD *)v362.m128i_i64[1];
                v407 = v343;
              }
              else
              {
                if ( !n )
                  goto LABEL_207;
                v174 = v418;
                v175 = dest;
                if ( n == 1 )
                {
                  LOBYTE(dest[0]) = *(_BYTE *)v418;
LABEL_207:
                  v176 = dest;
LABEL_208:
                  v408 = v173;
                  *((_BYTE *)v176 + v173) = 0;
                  goto LABEL_142;
                }
              }
              v344 = v123;
              memcpy(v175, v174, v173);
              v176 = v407;
              v123 = v344;
              goto LABEL_208;
            }
            if ( src[0] >= (void *)v415 )
              v122 = src[0];
            if ( !src[0] )
              v122 = (_BYTE *)v415;
            v124 = (std::ios_base *)(v122 - (char *)src[1]);
            v125 = (size_t)v124;
            if ( (__int64)v124 < 0 )
LABEL_407:
              std::__throw_length_error("basic_string::_M_replace");
            if ( (unsigned __int64)v124 > 0xF )
            {
              if ( (unsigned __int64)v124 <= 0x1D )
              {
                v364 = (std::ios_base *)(&qword_18 + 6);
                v177 = 31;
              }
              else
              {
                v177 = (unsigned __int64)v124 + 1;
                if ( (__int64)v124 + 1 < 0 )
LABEL_364:
                  std::__throw_bad_alloc();
                v364 = v124;
              }
              v362.m128i_i64[1] = (__int64)dest;
              v337 = src[1];
              v178 = (void *)operator new(v177);
              v179 = v337;
              v180 = v362.m128i_i64[1];
              v126 = v178;
              if ( v337 )
              {
                v338 = (void *)v362.m128i_i64[1];
                memcpy(v178, v179, v125);
                v180 = (__int64)v338;
              }
              v339 = (_QWORD *)v180;
              sub_233E40((__int64)v371);
              v123 = v339;
              v407 = v126;
              dest[0] = v364;
            }
            else if ( src[1] == dest )
            {
              std::string::_M_replace_cold();
              v123 = dest;
              v126 = v407;
            }
            else
            {
              if ( v124 )
              {
                if ( v124 == (std::ios_base *)((char *)&dword_0 + 1) )
                  LOBYTE(dest[0]) = *(_BYTE *)src[1];
                else
                  v123 = memcpy(dest, src[1], (size_t)v124);
              }
              v126 = v123;
            }
            v408 = v125;
            *((_BYTE *)v126 + v125) = 0;
LABEL_142:
            v336 = v123;
            sub_180C5A0(v396, v407);
            if ( v407 != v336 )
              operator delete(v407, dest[0] + 1LL);
            v127 = v326[1];
            v128 = sub_15E3510(v127, v396, 0, 0, *(_QWORD *)(v127 + 840), 0);
            v131 = sub_15DC610(
                     v127,
                     v128,
                     0,
                     0,
                     v129,
                     v130,
                     v300,
                     v312,
                     (int)v317,
                     (int)v323,
                     (int)v326,
                     (char)v336,
                     (int)v348,
                     (int)ptr,
                     (int)v356[0],
                     v356[1]);
            v132 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v362), (__m128i)((unsigned __int64)v358 + 16));
            if ( v131 )
              ++*(_DWORD *)(v131 + 8);
            v412 = v132;
            *(_QWORD *)v410 = (char *)v323 + 24;
            v421[0] = (char *)v323 + 104;
            if ( v418 != v359 )
              operator delete(v418, v420[0] + 1LL);
            v412.m128i_i64[1] = (__int64)ptr + 16;
            std::locale::~locale(v356[0]);
            v133 = v370;
            *(_QWORD *)((char *)v410 + *(_QWORD *)(v118 - 24)) = v361;
            v134 = *(_QWORD *)(v114 - 24);
            v412.m128i_i64[0] = v114;
            *(__int64 *)((char *)v412.m128i_i64 + v134) = v305;
            v135 = *(_QWORD *)(v95 - 24);
            *(_QWORD *)v410 = v95;
            *(_QWORD *)((char *)v410 + v135) = v348;
            v411 = 0;
            v421[0] = v357 + 16;
            std::ios_base::~ios_base(v133);
            if ( v8 )
            {
              v136 = *((_DWORD *)v8 - 1);
              if ( v136 == *((_DWORD *)v8 - 2) )
              {
                v158 = (3 * v136 + 1) >> 1;
                v159 = 8 * v158 + 8;
                if ( 8 * v136 + 8 >= (unsigned int)v159 || v136 >= v158 )
                {
LABEL_404:
                  v298 = (char **)__cxa_allocate_exception(0x28u);
                  sub_399470((__int64 *)v317, "Overflow encountered when expanding vector");
                  *v298 = (char *)off_1C63128;
                  sub_2333C0(v298 + 1, v317);
                  sub_233E40((__int64)v317);
                  __cxa_throw(v298, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v160 = (unsigned int *)sub_186B300(v8 - 1, v159);
                v161 = v160[1];
                v8 = (__int64 *)(v160 + 2);
                *v160 = v158;
                LODWORD(v160) = v161;
                v139 = &v8[v161];
                v138 = (_DWORD)v160 + 1;
              }
              else
              {
                v137 = v136;
                v138 = v136 + 1;
                v139 = &v8[v137];
              }
            }
            else
            {
              v278 = (_QWORD *)sub_186B270(0x18u);
              v8 = v278 + 1;
              *v278 = 2;
              v138 = 1;
              v139 = v8;
            }
            *v139 = v131;
            v140 = v360;
            *((_DWORD *)v8 - 1) = v138;
            LODWORD(v376) = v376 + 1;
            v67 = *(_DWORD *)(v140 + 68);
          }
          while ( (unsigned int)v376 < v67 );
          if ( v67 >= *(_DWORD *)(v360 + 56) )
            goto LABEL_315;
          do
          {
LABEL_156:
            sub_157BE40(
              (int)v317,
              v363[0],
              *(_DWORD *)(v360 + 8LL * v67 + 80) & 0xFFFFFFF8,
              *(_DWORD *)(*(_QWORD *)&v366[4] - 4LL),
              *(int *)&v366[4],
              v25,
              v300,
              v305,
              (int)v317,
              (int)v323,
              (int)v326,
              (int)v331,
              (__int64)v348,
              ptr);
            v144 = *(_QWORD *)v405;
            v145 = *(_QWORD *)v410;
            *(_QWORD *)v410 = *(_QWORD *)v405;
            *(_QWORD *)v405 = v145;
            if ( *(_QWORD *)v410 )
            {
              v146 = v411;
              v12 = (*(_DWORD *)(v144 + 8))-- == 1;
              if ( v12 )
              {
                sub_15D7BC0(v146, v144);
                v145 = *(_QWORD *)v405;
              }
            }
            if ( v145 )
              ++*(_DWORD *)(v145 + 8);
            if ( v8 )
            {
              v147 = *((_DWORD *)v8 - 1);
              if ( v147 == *((_DWORD *)v8 - 2) )
              {
                v148 = (3 * v147 + 1) >> 1;
                v149 = 8 * v148 + 8;
                if ( 8 * v147 + 8 >= (unsigned int)v149 || v147 >= v148 )
                {
LABEL_409:
                  v299 = (char **)__cxa_allocate_exception(0x28u);
                  sub_399470((__int64 *)v317, "Overflow encountered when expanding vector");
                  *v299 = (char *)off_1C63128;
                  sub_2333C0(v299 + 1, v317);
                  sub_233E40((__int64)v317);
                  __cxa_throw(v299, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v150 = (unsigned int *)sub_186B300(v8 - 1, v149);
                v151 = v150[1];
                v8 = (__int64 *)(v150 + 2);
                *v150 = v148;
                LODWORD(v150) = v151;
                v143 = &v8[v151];
                v142 = (_DWORD)v150 + 1;
              }
              else
              {
                v141 = v147;
                v142 = v147 + 1;
                v143 = &v8[v141];
              }
            }
            else
            {
              v185 = (_QWORD *)sub_186B270(0x18u);
              v8 = v185 + 1;
              *v185 = 2;
              v142 = 1;
              v143 = v8;
            }
            *v143 = v145;
            ++v67;
            *((_DWORD *)v8 - 1) = v142;
          }
          while ( v67 < *(_DWORD *)(v360 + 56) );
LABEL_194:
          v407 = nullptr;
          sub_39A6C0((__int64)v317, v326[1], (__int64)v371);
          if ( v8 )
            goto LABEL_195;
          v169 = 0;
LABEL_196:
          if ( BYTE3(v411) )
          {
            sub_14E1930((int)v317, v300, v305, (int)v317, (__int64)v323, (__int64)v326, (__int64)v331, v348, (int)ptr);
          }
          else
          {
            if ( (_BYTE)v411 )
              v170 = sub_14DD000(v317, v169, v8, v403);
            else
              v170 = sub_14DC740(
                       (int)v317,
                       v169,
                       (int)v8,
                       (int)v403,
                       v167,
                       v168,
                       v300,
                       v305,
                       (int)v317,
                       (int)v323,
                       (int)v326,
                       v331,
                       (int)v348,
                       (int)ptr,
                       (int)v356[0],
                       (int)v356[1],
                       (int)v357,
                       (int)v358,
                       (int)v359,
                       v360,
                       v361,
                       v362.m128i_i32[0],
                       v362.m128i_i32[2],
                       v363[0],
                       (int)v364,
                       v365,
                       *(int *)&v366[4],
                       (int)v367,
                       v368[0],
                       v369.m128i_i8[0],
                       v369.m128i_i32[2],
                       (int)v370,
                       (int)v371,
                       v372[0],
                       (int)v373,
                       v374,
                       v375[0],
                       v376,
                       (int)v377,
                       (int)v378,
                       v379,
                       v380,
                       v382[0],
                       v383[0],
                       v384,
                       v385[0],
                       v386[0],
                       v387);
            if ( v170 == 5 )
            {
              v282 = sub_15E1AF0(v410[0]);
              v283 = v282;
              if ( v282 )
                ++*(_DWORD *)(v282 + 8);
              sub_399450(*(__int64 *)v403, v404);
              *(_QWORD *)v403 = v283;
            }
          }
          sub_39A7A0((__int64)v317);
          sub_18572D0(v371);
          v171 = sub_15E1B70(v326[1]);
          v172 = v171;
          if ( v171 )
            ++*(_DWORD *)(v171 + 8);
          sub_399450(*(__int64 *)v403, v404);
          *(_QWORD *)v403 = v172;
          sub_E5EBF0(*(_QWORD *)(*v326 + 64), v172);
          *(_QWORD *)v426 = &off_1C4CA80;
          sub_267D20(*(_QWORD **)v363);
          sub_399450(v384, v387);
LABEL_183:
          ++v381;
          v6 = **(_QWORD ***)v385;
        }
        while ( **(_QWORD **)v385 );
        v6 = *(_QWORD **)&v366[4];
        *(_QWORD *)v382 = v379;
LABEL_185:
        *(_QWORD *)v410 = 0;
        sub_39A6C0(*(__int64 *)v363, v326[1], (__int64)v317);
        if ( *(_QWORD *)v383 )
          v166 = *(_DWORD *)(*(_QWORD *)v383 - 4LL);
        else
          v166 = 0;
LABEL_216:
        if ( !v427 )
        {
          if ( (unsigned int)sub_14E03D0(
                               v363[0],
                               v300,
                               v305,
                               (int)v317,
                               (int)v323,
                               (int)v326,
                               (int)v331,
                               (int)v348,
                               ptr,
                               (int)v356[0],
                               (int)v356[1],
                               (int)v357,
                               (int)v358,
                               (int)v359,
                               v360,
                               v361,
                               v362.m128i_i32[0],
                               v362.m128i_i32[2],
                               v363[0],
                               (int)v364,
                               v365,
                               *(int *)&v366[4],
                               (int)v367,
                               v368[0],
                               v369.m128i_i32[0],
                               v369.m128i_i32[2],
                               (char)v370,
                               (int)v371,
                               v372[0],
                               (int)v373,
                               v374,
                               v375[0],
                               v376,
                               (int)v377,
                               (int)v378,
                               v379,
                               v380,
                               v382[0],
                               v383[0],
                               v384,
                               v385[0],
                               v386[0],
                               v387,
                               (int)v388,
                               v389[0]) != 5 )
            goto LABEL_218;
LABEL_227:
          v183 = sub_15E1AF0(v426[0]);
          v184 = v183;
          if ( v183 )
            ++*(_DWORD *)(v183 + 8);
          sub_399450(*(__int64 *)v405, v406);
          *(_QWORD *)v405 = v184;
          goto LABEL_218;
        }
        if ( (unsigned int)sub_14E0E20(
                             v363[0],
                             v166,
                             v383[0],
                             (int)v405,
                             v164,
                             v165,
                             v300,
                             v305,
                             (int)v317,
                             (int)v323,
                             (int)v326,
                             v331) == 5 )
          goto LABEL_227;
LABEL_218:
        sub_39A7A0(*(__int64 *)v363);
        sub_18572D0(v321);
        v181 = sub_15E1B70(v326[1]);
        v182 = v181;
        if ( v181 )
          ++*(_DWORD *)(v181 + 8);
        sub_399450(*(__int64 *)v405, v406);
        *(_QWORD *)v405 = v182;
        sub_E5EBF0(*(_QWORD *)(*v326 + 64), v182);
        sub_399450(*(__int64 *)v405, v406);
        sub_399450(*(__int64 *)v403, v404);
        v402[1] = v8;
        sub_2334C0(v395);
        v401 = v6;
        *(_QWORD *)v400 = *(_QWORD *)v382;
        sub_2334C0(*(__int64 **)v389);
        v399 = *(unsigned int **)v383;
        sub_2334C0(v394);
        sub_399450(v390, v393);
        result = (_QWORD *)(*(_QWORD *)v386 + 16LL);
        if ( v388 != (_QWORD *)(*(_QWORD *)v386 + 16LL) )
        {
          while ( *result <= 1u )
          {
            result += 2;
            if ( v388 == result )
              return result;
          }
          *(_QWORD *)v372 = *result;
          *(_QWORD *)v386 = result;
          if ( v388 != result )
            continue;
        }
        return result;
      }
    }
  }
  return result;
}

