__int64 __fastcall sub_3F2A40(__int64 a1, __int64 a2, const __m128i *a3, unsigned __int8 a4)
{
  unsigned __int8 *v5; // r13
  __m128i si128; // xmm1
  unsigned __int8 *v8; // rax
  _DWORD *v9; // r14
  unsigned int v10; // ecx
  __int64 v11; // rsi
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int16 v15; // ax
  __int64 v16; // rdx
  __int64 v17; // r14
  unsigned int dtype_size; // ebx
  __m128i v19; // xmm0
  __m128i v20; // xmm5
  unsigned int v21; // eax
  __int64 v22; // rsi
  unsigned int v23; // ebx
  int v24; // ebx
  __int64 v25; // rbx
  __int64 *v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm1
  __int64 v29; // rdx
  __int64 v30; // rcx
  __m128i v31; // xmm0
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rsi
  unsigned __int64 v36; // rax
  int v37; // edx
  __int32 v38; // r8d
  __m128i v39; // xmm0
  __m128i v40; // xmm3
  __int64 v41; // rcx
  int v42; // eax
  unsigned __int8 v43; // bl
  __int64 v44; // rax
  int v45; // r9d
  __int64 v46; // r14
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  __int64 v49; // rsi
  __int64 v50; // rax
  unsigned int v51; // ebx
  int v52; // eax
  int v53; // eax
  __int64 v54; // rdi
  __int64 v55; // rdx
  unsigned int v56; // ebx
  int v57; // eax
  unsigned int v58; // ebx
  int v59; // eax
  int v60; // esi
  __int64 v61; // r14
  unsigned __int32 v62; // ebx
  char v63; // al
  __int32 v64; // r8d
  __int16 *v65; // rbx
  int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // ebx
  unsigned int v70; // eax
  char v71; // dl
  char v72; // al
  unsigned int v73; // r14d
  __int64 v74; // rsi
  char *v75; // rax
  unsigned int v76; // r14d
  int v77; // eax
  __int64 v78; // rax
  unsigned __int8 *v79; // rsi
  __int64 v80; // r14
  unsigned __int32 v81; // ebx
  __int64 v82; // rcx
  __m128i *v83; // roff
  char *v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rsi
  unsigned __int64 v87; // r14
  __int32 v88; // eax
  unsigned int v89; // r14d
  __int64 v90; // rsi
  __int64 v91; // r14
  __int64 v92; // rdx
  void *v93; // rax
  bool v94; // zf
  unsigned __int64 v95; // rsi
  unsigned __int8 v96; // al
  __int64 v97; // rcx
  __int32 v98; // eax
  unsigned int v99; // ebx
  __int64 v100; // rax
  const char *v101; // rbx
  char v102; // al
  __int64 v103; // rdi
  __int64 v104; // rsi
  unsigned __int8 *v105; // rsi
  const __m128i *v106; // rdi
  __m128i v107; // xmm0
  __m128i v108; // xmm7
  unsigned int v109; // ebx
  int v110; // eax
  unsigned __int32 v111; // ebx
  unsigned int v112; // ebx
  __int64 v113; // r14
  unsigned __int32 v114; // ebx
  __int64 v115; // rax
  int v116; // ebx
  __int64 v117; // r8
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  __int64 v122; // rcx
  __int16 v123; // ax
  _WORD *v124; // rdx
  unsigned __int32 v125; // ebx
  int v126; // esi
  unsigned int v127; // eax
  __m128i *v128; // rdx
  __int64 v129; // roff
  __int64 v130; // rsi
  __m128i v131; // xmm0
  unsigned int v132; // eax
  char *v133; // rax
  char v134; // cl
  char v135; // dl
  unsigned int v136; // ebx
  int v137; // eax
  unsigned int v138; // ebx
  unsigned int v139; // eax
  __int16 *v140; // rbx
  __int16 i; // ax
  __int64 v142; // rdx
  __int64 v143; // rsi
  __int64 v144; // r8
  unsigned __int32 v145; // r14d
  int v146; // eax
  unsigned int v147; // eax
  unsigned int v148; // r14d
  int v149; // eax
  unsigned int v150; // eax
  __int16 v151; // ax
  __int64 v152; // rcx
  int v153; // eax
  __int64 v154; // rbx
  __int64 v155; // rbx
  unsigned __int8 *v156; // rsi
  int v157; // eax
  _QWORD *v158; // rbx
  unsigned int v159; // ebx
  unsigned int v160; // ebx
  char v161; // al
  __int16 v162; // ax
  __int16 *v163; // rbx
  __int16 j; // ax
  unsigned int v165; // eax
  unsigned int v166; // eax
  __int16 v167; // ax
  __int16 *v168; // rdx
  __int16 *v169; // rcx
  unsigned int v170; // eax
  unsigned int v171; // eax
  __int16 v172; // ax
  _WORD *v173; // rdx
  __int64 v174; // rbx
  unsigned __int8 *v175; // r14
  __int64 v176; // rsi
  __int64 v177; // rdx
  int v178; // eax
  __m128i v179; // xmm1
  __int64 v180; // rax
  unsigned int v181; // eax
  char v182; // al
  char v183; // al
  char v184; // al
  __int16 v185; // ax
  __int16 *v186; // r14
  char v187; // dl
  unsigned __int8 *v188; // rsi
  int v189; // eax
  char v190; // al
  int v191; // eax
  __int16 v192; // ax
  int v193; // eax
  unsigned __int32 v194; // ebx
  __int16 v195; // ax
  __int16 *v196; // rdx
  __int16 *v197; // r14
  unsigned __int32 v198; // ebx
  int v199; // eax
  unsigned int v200; // eax
  __int64 v201; // rax
  __int64 v202; // rsi
  int v203; // esi
  __int32 v204; // eax
  unsigned int v205; // r14d
  __int64 v206; // rax
  char *v207; // r14
  int v208; // eax
  char **v209; // rsi
  __int32 v210; // eax
  __int64 v211; // rax
  char *v212; // rax
  __int16 v213; // dx
  __int16 *v214; // rax
  void *v215; // rcx
  unsigned int v216; // ebx
  unsigned int v217; // eax
  unsigned __int32 v218; // ebx
  unsigned int v219; // eax
  unsigned int v220; // ebx
  unsigned int v221; // eax
  unsigned __int64 v222; // rdx
  __int16 v223; // ax
  char *v224; // rax
  unsigned int v225; // eax
  unsigned int v226; // ebx
  __int64 v227; // r14
  int v228; // eax
  __int64 v229; // r8
  int v230; // eax
  _QWORD *v231; // rbx
  unsigned __int8 v232; // al
  __int64 v233; // rax
  int v234; // eax
  __int64 v235; // rcx
  int v236; // eax
  int v237; // ebx
  unsigned int v238; // eax
  char *v239; // rax
  unsigned int v240; // ebx
  __int16 v241; // ax
  unsigned __int64 v242; // rdx
  __int64 v243; // rdi
  __int64 v244; // rdx
  __int64 v245; // rdi
  char v246; // al
  __int64 v247; // rdx
  __int64 v248; // rdx
  __int64 v249; // rdi
  __int64 v250; // rdx
  unsigned __int8 v251; // bl
  __int64 v252; // rdi
  __int64 v253; // rdx
  __int64 v254; // rdx
  int v255; // r14d
  __int64 v256; // rdi
  __int64 v257; // rdx
  __int64 v258; // rdi
  __int64 v259; // rdx
  __m128i *v260; // rdi
  __int64 v261; // rdx
  __int64 v262; // rdi
  __int64 v263; // rdx
  __m128i *v264; // rdi
  __int64 v265; // rdx
  __int64 v266; // rdx
  int v267; // ebx
  int v268; // eax
  __int64 v269; // rdx
  __int64 v270; // rax
  unsigned int v271; // ebx
  __int64 v272; // rdx
  __int64 v273; // rdx
  __int64 v274; // rdx
  __int64 v275; // rdx
  __int64 v276; // rbx
  unsigned __int8 v277; // al
  char *v278; // rax
  __int64 v279; // rdx
  __int64 v280; // rdx
  __int64 v281; // r14
  unsigned int v282; // ebx
  __int64 v283; // r14
  unsigned int v284; // ebx
  unsigned int v285; // ebx
  char v286; // al
  char *v287; // rax
  int v288; // eax
  unsigned __int32 v289; // ebx
  unsigned int v290; // eax
  __int64 v291; // rsi
  __m128i v292; // xmm0
  char *v293; // xmm0_8
  __m128i v294; // xmm0
  __m128i v295; // xmm2
  char v296; // al
  __int64 v297; // rdx
  char v298; // al
  __int64 v299; // rdx
  __int64 v300; // rbx
  unsigned __int8 v301; // al
  __int64 v302; // r14
  unsigned int v303; // ebx
  __int64 v304; // r14
  unsigned int v305; // ebx
  __int64 v306; // rbx
  unsigned int v307; // ebx
  char v308; // al
  __int64 v309; // rcx
  unsigned __int32 v310; // ebx
  __int64 v311; // r14
  unsigned __int32 v312; // ebx
  unsigned __int8 v313; // al
  char *v314; // rax
  unsigned int v315; // ebx
  __int64 v316; // r14
  unsigned int v317; // ebx
  char v318; // al
  char v319; // al
  __int64 v320; // rax
  unsigned __int64 v321; // rbx
  unsigned __int64 v322; // r14
  __int64 v323; // rax
  unsigned __int64 v324; // rdx
  unsigned __int32 v325; // r14d
  unsigned int v326; // eax
  __int16 v327; // ax
  unsigned int v328; // eax
  unsigned int v329; // ebx
  __int64 v330; // rsi
  __int64 v331; // rax
  int v332; // ebx
  int v333; // eax
  int v334; // eax
  unsigned int v335; // ebx
  unsigned int v336; // r14d
  __m128i *v337; // r14
  unsigned __int32 v338; // ebx
  unsigned int tinfo_size; // eax
  __int64 v340; // roff
  __int64 v341; // rax
  char *v342; // rbx
  char *v343; // rax
  __int64 v344; // rax
  unsigned int v345; // eax
  unsigned int v346; // eax
  __int64 v347; // r14
  unsigned int v348; // ebx
  __int64 v349; // rax
  __int64 v350; // rax
  char *v351; // rax
  unsigned int v352; // ebx
  unsigned int v353; // eax
  unsigned __int32 v354; // ebx
  unsigned int v355; // eax
  __int64 v356; // r14
  unsigned int v357; // ebx
  __int64 v358; // r14
  unsigned int v359; // ebx
  __int64 v360; // rax
  unsigned int v361; // r14d
  __int64 v362; // r14
  unsigned int v363; // ebx
  __int64 v364; // rbx
  unsigned int v365; // eax
  unsigned int v366; // eax
  unsigned __int32 v367; // r14d
  __int64 v368; // rbx
  unsigned __int8 v369; // al
  __int64 v370; // rbx
  unsigned __int8 v371; // al
  unsigned __int8 v372; // cl
  char v373; // al
  char v374; // al
  unsigned int v375; // eax
  char *v376; // rax
  __int64 v377; // rbx
  unsigned __int8 v378; // al
  unsigned int v379; // eax
  unsigned int v380; // eax
  unsigned int v381; // ebx
  char v382; // al
  char v383; // al
  unsigned int v384; // eax
  char *v385; // rax
  __int64 v386; // rcx
  unsigned __int32 v387; // r14d
  __int64 v388; // r14
  __int64 v389; // rdx
  char v390; // dl
  int v391; // edx
  __int64 v392; // rdi
  __int64 v393; // rdx
  __int64 v394; // rdi
  __int64 v395; // rdx
  __int64 v396; // rdi
  __int64 v397; // rdx
  __int64 v398; // rdi
  __int64 v399; // rdx
  int v400; // eax
  __int64 v401; // rax
  __int16 *v402; // rdx
  unsigned int v403; // eax
  __m128i *v404; // rbx
  unsigned int v405; // eax
  __int32 v406; // r8d
  unsigned int v407; // eax
  unsigned int v408; // eax
  __int64 v409; // rdx
  __int64 v410; // rdx
  __int64 v411; // rdx
  __int64 v412; // rdx
  __int64 v413; // rdx
  int v414; // eax
  __int64 v415; // r11
  unsigned int v416; // eax
  int v417; // ebx
  unsigned int v418; // eax
  char v419; // bl
  int v420; // r14d
  unsigned int v421; // eax
  __int64 v422; // rdx
  __int64 v423; // rdx
  unsigned int v424; // eax
  __int64 v425; // rdx
  __int64 v426; // rdx
  __int64 v427; // rdx
  unsigned int v428; // ebx
  unsigned int v429; // eax
  __int64 v430; // rdx
  __int64 v431; // rdx
  __int64 v432; // rdx
  __int64 v433; // rdx
  __int64 v434; // rdx
  unsigned __int8 v435; // bl
  __int64 v436; // r14
  unsigned int v437; // r14d
  unsigned __int8 dtype_by_size; // al
  __int64 v439; // rdx
  __int64 v440; // rdx
  __int64 v441; // rdx
  __int64 v442; // rbx
  unsigned __int64 v443; // rdx
  __int16 v444; // ax
  unsigned int v445; // ebx
  unsigned __int64 v446; // rbx
  __m128i v447; // xmm0
  __int64 v448; // rax
  int v449; // edx
  int v450; // esi
  int v451; // esi
  int v452; // esi
  int v453; // esi
  __int16 v454; // ax
  char v455; // dl
  __int64 v456; // rax
  __int32 v457; // r9d
  int v458; // eax
  __int64 v459; // r10
  int v460; // eax
  unsigned int v461; // eax
  __int64 v462; // rdx
  __int64 v463; // rdx
  __int64 v464; // rdx
  __int64 v465; // rdx
  __int32 v466; // eax
  __int64 v467; // rax
  __int64 v468; // rax
  __m128i *v469; // rbx
  int v470; // eax
  __int16 v471; // ax
  __int64 v472; // rdx
  __int64 v473; // rdx
  __int64 tinfo_property; // rax
  __int64 v475; // rdx
  __int64 v476; // rdx
  __int64 v477; // rdx
  __int64 v478; // rdx
  int v479; // r14d
  __int64 v480; // rdx
  __int64 v481; // rdx
  unsigned int v482; // r14d
  unsigned int v483; // eax
  __int64 v484; // rdx
  __int64 v485; // rdx
  __int64 v486; // rax
  __int64 v487; // rdx
  __int64 v488; // rdx
  __int64 v489; // rdx
  __int64 v490; // rdx
  __int64 v491; // rdx
  __int64 v492; // rdx
  unsigned int v493; // eax
  char v494; // al
  __int64 v495; // rdx
  __int64 v496; // rdx
  __int64 v497; // rax
  __int16 v498; // ax
  unsigned int v499; // eax
  unsigned int v500; // eax
  __int64 v501; // rax
  unsigned int v502; // eax
  __int16 v503; // ax
  unsigned int v504; // eax
  int v505; // eax
  __m128i *v506; // rax
  char v507; // dl
  int v508; // eax
  unsigned int v509; // eax
  __int64 v510; // [rsp-8h] [rbp-5F8h]
  int v511; // [rsp-8h] [rbp-5F8h]
  int v512; // [rsp-8h] [rbp-5F8h]
  char *v513; // [rsp+0h] [rbp-5F0h]
  __int64 v514; // [rsp+0h] [rbp-5F0h]
  char *v515; // [rsp+0h] [rbp-5F0h]
  int v516; // [rsp+8h] [rbp-5E8h]
  int v517; // [rsp+Ch] [rbp-5E4h]
  __int64 v518; // [rsp+10h] [rbp-5E0h] BYREF
  int v519; // [rsp+18h] [rbp-5D8h]
  __int32 v520; // [rsp+1Ch] [rbp-5D4h]
  char *v521; // [rsp+20h] [rbp-5D0h]
  void *v522; // [rsp+28h] [rbp-5C8h]
  unsigned int v523; // [rsp+30h] [rbp-5C0h]
  unsigned __int8 v524; // [rsp+37h] [rbp-5B9h]
  __int64 v525; // [rsp+38h] [rbp-5B8h]
  __m128i v526; // [rsp+40h] [rbp-5B0h] BYREF
  __m128i *v527; // [rsp+50h] [rbp-5A0h]
  __m128i v528; // [rsp+58h] [rbp-598h] BYREF
  __m128i v529; // [rsp+68h] [rbp-588h] BYREF
  __int64 v530; // [rsp+78h] [rbp-578h]
  __int64 v531; // [rsp+80h] [rbp-570h] BYREF
  int v532; // [rsp+88h] [rbp-568h]
  __int64 v533; // [rsp+90h] [rbp-560h] BYREF
  unsigned __int64 v534; // [rsp+98h] [rbp-558h]
  char v535; // [rsp+A0h] [rbp-550h]
  __int64 v536[2]; // [rsp+B0h] [rbp-540h] BYREF
  __int64 v537; // [rsp+C0h] [rbp-530h] BYREF
  __m128i v538; // [rsp+C8h] [rbp-528h]
  __int64 v539[2]; // [rsp+E0h] [rbp-510h] BYREF
  void *src; // [rsp+F0h] [rbp-500h] BYREF
  __int128 v541; // [rsp+F8h] [rbp-4F8h]
  __int64 v542; // [rsp+110h] [rbp-4E0h] BYREF
  __int64 v543; // [rsp+118h] [rbp-4D8h]
  __int64 v544; // [rsp+120h] [rbp-4D0h] BYREF
  __m128i v545; // [rsp+128h] [rbp-4C8h] BYREF
  char *s1[3]; // [rsp+140h] [rbp-4B0h] BYREF
  __int128 v547; // [rsp+158h] [rbp-498h]
  unsigned __int8 v548[4]; // [rsp+170h] [rbp-480h] BYREF
  unsigned int v549; // [rsp+174h] [rbp-47Ch]
  __int64 v550; // [rsp+178h] [rbp-478h]
  __int64 v551; // [rsp+180h] [rbp-470h]
  __int64 v552; // [rsp+188h] [rbp-468h]
  char v553[4]; // [rsp+1C0h] [rbp-430h] BYREF
  unsigned __int64 v554; // [rsp+1C4h] [rbp-42Ch]
  char v555[24]; // [rsp+210h] [rbp-3E0h] BYREF
  _BYTE v556[24]; // [rsp+260h] [rbp-390h] BYREF
  _BYTE v557[360]; // [rsp+2B0h] [rbp-340h] BYREF
  char v558; // [rsp+418h] [rbp-1D8h] BYREF
  char v559[368]; // [rsp+420h] [rbp-1D0h] BYREF
  char s[31]; // [rsp+590h] [rbp-60h] BYREF
  char v561; // [rsp+5AFh] [rbp-41h] BYREF
  unsigned __int64 v562; // [rsp+5B8h] [rbp-38h]

  v5 = v557;
  v528.m128i_i64[1] = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_425B90);
  v527 = (__m128i *)a3;
  v524 = a4;
  v562 = __readfsqword(0x28u);
  v538 = 0;
  v8 = v548;
  v536[0] = 0;
  v536[1] = 0;
  v537 = 0;
  v539[0] = 0;
  v539[1] = 0;
  src = 0;
  v542 = 0;
  v543 = 0;
  v544 = 0;
  v541 = 0;
  v545 = 0;
  do
  {
    *((_DWORD *)v8 + 1) = -1;
    v8 += 80;
    *((_WORD *)v8 - 40) = 0;
    *((_WORD *)v8 - 39) = 0;
    *((_QWORD *)v8 - 9) = 0;
    *((__m128i *)v8 - 4) = si128;
    *((_QWORD *)v8 - 6) = 0;
    *(_OWORD *)(v8 - 40) = 0;
    *((_DWORD *)v8 - 6) = 0;
    *((_QWORD *)v8 - 2) = 0;
    *((_DWORD *)v8 - 2) = 0;
  }
  while ( v8 != v557 );
  v9 = *(_DWORD **)(a1 + 832);
  v10 = v9[113];
  v11 = (__int64)v9;
  v528.m128i_i32[0] = *(_DWORD *)(a1 + 52) & 7;
  v520 = v10;
  v519 = v9[116];
  v526.m128i_i32[0] = v9[97];
  v523 = v9[95];
  if ( v528.m128i_i32[0] == 2 )
  {
    v15 = *(_WORD *)(a1 + 48);
    if ( v15 == 45 )
    {
      v41 = v528.m128i_i64[1];
      v42 = v9[101];
      *(_BYTE *)(v528.m128i_i64[1] + 16) = 1;
      *(_DWORD *)(v41 + 12) = v42;
    }
    else
    {
      if ( v15 != 133 )
        goto LABEL_6;
      v16 = v528.m128i_i64[1];
      *(_DWORD *)(v528.m128i_i64[1] + 12) = v9[102];
      *(_BYTE *)(v16 + 16) = 1;
      v524 = *(_BYTE *)(a1 + 109);
    }
    if ( v524 > 2u && v524 != 7 )
      goto LABEL_6;
    qsnprintf();
    v17 = *(_QWORD *)(a1 + 832);
    dtype_size = get_dtype_size();
    v529.m128i_i64[0] = (__int64)s1;
    sub_328FE0(s1, v17, dtype_size, 2);
    sub_32BC70(v548, v523, dtype_size, s1);
    clear_tinfo_t();
    v19 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL));
    if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
    {
      v528.m128i_i32[0] = _mm_cvtsi128_si32(v19);
      v19 = _mm_cvtsi32_si128(v528.m128i_u32[0]);
      if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
        sub_3E07C0(v528.m128i_i64[1], v523, v248);
    }
    v553[0] = 1;
    v20 = _mm_cvtsi32_si128(*(_DWORD *)(v528.m128i_i64[1] + 12));
    v528.m128i_i32[0] = *(_DWORD *)(v528.m128i_i64[1] + 12);
    v554 = _mm_unpacklo_epi32(v19, v20).m128i_u64[0];
    v21 = get_dtype_size();
    sub_328FE0(&v533, *(_QWORD *)(a1 + 832), v21, 2);
    sub_3290F0(v529.m128i_i64[0], *(_QWORD *)(a1 + 832), &v533);
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v22 = *(_QWORD *)(a1 + 832);
    v23 = get_dtype_size();
    sub_328FE0(v529.m128i_i64[0], v22, v23, 2);
    sub_32BC70(v555, v526.m128i_u32[0], v23, v529.m128i_i64[0]);
    v24 = 0;
    clear_tinfo_t();
    LOBYTE(v518) = 0;
    LODWORD(v525) = 0;
    LOBYTE(v516) = 1;
    v526.m128i_i32[0] = 4;
    v528.m128i_i32[0] = 0;
    v522 = s;
    LODWORD(v521) = 3;
LABEL_27:
    v514 = *(_QWORD *)(a1 + 8);
    if ( (int)v525 < 0 )
    {
      s1[0] = 0;
      copy_tinfo_t();
LABEL_29:
      v25 = sub_332690(
              v514,
              *(_QWORD *)(a1 + 40),
              (_DWORD)v522,
              v529.m128i_i32[0],
              (_DWORD)v521,
              (unsigned int)v548,
              v24,
              v510,
              v514,
              v516,
              v518,
              v519);
      clear_tinfo_t();
      *(_DWORD *)(*(_QWORD *)(v25 + 72) + 284LL) = v528.m128i_i32[0];
      *(_DWORD *)(*(_QWORD *)(v25 + 72) + 280LL) |= v526.m128i_i32[0];
      if ( !(unsigned __int8)sub_63F80(v536) || v538.m128i_i64[0] )
      {
        if ( !(unsigned __int8)sub_63F80(&v542) || v545.m128i_i64[0] )
          **(_DWORD **)(a1 + 8) |= 0x40u;
        v26 = (__int64 *)(*(_QWORD *)(v25 + 72) + 136LL);
        v528.m128i_i64[0] = *(_QWORD *)(v25 + 72);
        sub_63980(v26, v536);
        v513 = (char *)&v537;
        sub_313730(v528.m128i_i64[0] + 152, &v537);
        sub_313730(*(_QWORD *)(v25 + 72) + 216LL, &v537);
        v27 = *(_QWORD *)(v25 + 72);
        v28 = _mm_loadu_si128(&v545);
        v29 = *(_QWORD *)(v27 + 176);
        *(_QWORD *)(v27 + 176) = v542;
        v30 = v543;
        v31 = _mm_loadu_si128((const __m128i *)(v27 + 200));
        *(__m128i *)(v27 + 200) = v28;
        v542 = v29;
        v32 = *(_QWORD *)(v27 + 184);
        *(_QWORD *)(v27 + 184) = v30;
        v543 = v32;
        v33 = *(_QWORD *)(v27 + 192);
        *(_QWORD *)(v27 + 192) = v544;
        v544 = v33;
        v545 = v31;
      }
      sub_313730(*(_QWORD *)(v25 + 72) + 216LL, &src);
      if ( (_BYTE)v516 )
        *(_DWORD *)(v25 + 4) |= 0x80000u;
      if ( (_BYTE)v518 )
      {
        if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
        {
          v243 = v528.m128i_i64[1];
          if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v243, &src, v244);
        }
        v39 = _mm_cvtsi32_si128(*(_DWORD *)(v25 + 68));
        s1[0] = &byte_1;
        v40 = _mm_cvtsi32_si128(*(_DWORD *)(v528.m128i_i64[1] + 12));
        v528.m128i_i32[0] = *(_DWORD *)(v528.m128i_i64[1] + 12);
        *(char **)((char *)s1 + 4) = (char *)_mm_unpacklo_epi32(v39, v40).m128i_u64[0];
        v25 = (__int64)sub_122D60(v25, (unsigned __int8 *)v529.m128i_i64[0]);
        sub_11A960(v529.m128i_i64[0]);
      }
      goto LABEL_37;
    }
LABEL_28:
    s1[0] = (char *)(unsigned __int8)v525;
    goto LABEL_29;
  }
  if ( v528.m128i_i32[0] != 1 )
  {
    if ( v528.m128i_i32[0] )
      goto LABEL_6;
    v37 = *(unsigned __int16 *)(a1 + 48);
    v38 = v9[114];
    if ( (unsigned __int16)v37 > 0x708u )
      goto LABEL_6;
    if ( (unsigned __int16)v37 > 0x1BBu )
    {
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 0x1BC:
        case 0x1C3:
        case 0x228:
        case 0x234:
          goto LABEL_288;
        case 0x1BD:
        case 0x1BF:
        case 0x1C4:
        case 0x1C6:
        case 0x1CF:
        case 0x1D2:
        case 0x1D3:
        case 0x1D5:
        case 0x1D6:
        case 0x1D9:
        case 0x1DA:
        case 0x1DB:
        case 0x1DC:
        case 0x1DE:
        case 0x1DF:
        case 0x238:
        case 0x23A:
        case 0x240:
        case 0x241:
        case 0x242:
        case 0x249:
        case 0x24A:
        case 0x254:
        case 0x255:
        case 0x256:
        case 0x257:
        case 0x258:
        case 0x259:
        case 0x25E:
        case 0x25F:
        case 0x260:
        case 0x261:
        case 0x262:
        case 0x263:
        case 0x264:
        case 0x265:
        case 0x266:
        case 0x267:
        case 0x268:
        case 0x269:
        case 0x296:
        case 0x299:
        case 0x2A1:
        case 0x2A2:
        case 0x2A3:
        case 0x2A4:
        case 0x2A5:
        case 0x2A6:
        case 0x2A7:
        case 0x2A8:
        case 0x2B5:
        case 0x2B6:
        case 0x2C1:
          goto LABEL_113;
        case 0x1BE:
        case 0x1C0:
          goto LABEL_289;
        case 0x1C1:
        case 0x1C7:
        case 0x1C9:
        case 0x1CA:
        case 0x1CC:
        case 0x1CD:
        case 0x210:
        case 0x211:
        case 0x212:
        case 0x213:
        case 0x215:
        case 0x21B:
        case 0x21C:
        case 0x21D:
        case 0x229:
        case 0x22E:
        case 0x244:
        case 0x245:
        case 0x250:
        case 0x251:
        case 0x29D:
          goto LABEL_196;
        case 0x1C2:
        case 0x233:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          v308 = *(_BYTE *)(a1 + 65);
          if ( (v308 == 13 || v308 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu)
            && (v494 = *(_BYTE *)(a1 + 105), v494 != 13) )
          {
            if ( v494 == 1 )
              LOBYTE(v518) = (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu;
          }
          else
          {
            LOBYTE(v518) = 0;
          }
          v94 = *(_WORD *)(a1 + 48) == 450;
          LODWORD(v525) = 0;
          v526.m128i_i32[0] = 20;
          v516 = 67;
          v517 = 2;
          LODWORD(v521) = 0;
          if ( !v94 )
            goto LABEL_506;
          LOBYTE(v522) = 3;
          v524 = 3;
          goto LABEL_483;
        case 0x1C5:
        case 0x1D0:
        case 0x208:
        case 0x220:
        case 0x224:
        case 0x227:
        case 0x236:
        case 0x247:
          goto LABEL_254;
        case 0x1C8:
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v9, v492);
          v337 = v527;
          s1[0] = byte_9;
          v529.m128i_i64[0] = (__int64)s1;
          v338 = v527->m128i_u32[3];
          tinfo_size = get_tinfo_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_32BC70(v548, v338, tinfo_size, s1);
          clear_tinfo_t();
          LODWORD(v525) = 0;
          v526.m128i_i32[0] = 20;
          v517 = 2;
          v340 = v528.m128i_i64[1];
          LODWORD(v521) = 0;
          *v527 = _mm_loadu_si128((const __m128i *)v528.m128i_i64[1]);
          v337[1].m128i_i8[0] = *(_BYTE *)(v340 + 16);
          goto LABEL_207;
        case 0x1CB:
        case 0x1D8:
        case 0x243:
        case 0x26A:
        case 0x28C:
        case 0x28D:
        case 0x290:
        case 0x291:
        case 0x293:
        case 0x295:
        case 0x298:
        case 0x29E:
        case 0x29F:
        case 0x2A0:
        case 0x2BA:
        case 0x2BB:
        case 0x2BF:
        case 0x2C0:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          v140 = &word_4EF380;
          if ( *(_BYTE *)(a1 + 69) != 7 )
            v140 = &word_4EF3C0;
          for ( i = *(_WORD *)(a1 + 48); *v140 != i; v140 += 12 )
            ;
          v142 = *(_QWORD *)(a1 + 152);
          v143 = *(_QWORD *)(a1 + 832);
          v144 = *(_QWORD *)(a1 + 40);
          v522 = (void *)*((_QWORD *)v140 + 1);
          sub_11E5D0((__int64)v555, v143, v142, 1, v144, 2);
          s1[0] = (_BYTE *)(&dword_30 + 2);
          v529.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, s1, v440);
          v145 = v527->m128i_u32[3];
          v146 = *((_DWORD *)v140 + 5);
          if ( v146 < 0 )
          {
            s1[0] = 0;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v146;
          }
          v147 = get_tinfo_size();
          sub_32BC70(v553, v145, v147, v529.m128i_i64[0]);
          clear_tinfo_t();
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], v145, v439);
          v148 = *(_DWORD *)(v528.m128i_i64[1] + 12);
          v149 = *((_DWORD *)v140 + 4);
          if ( v149 < 0 )
          {
            s1[0] = 0;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v149;
          }
          v150 = get_tinfo_size();
          sub_32BC70(v548, v148, v150, v529.m128i_i64[0]);
          clear_tinfo_t();
          if ( get_dtype_size() < (unsigned __int64)(int)v554 )
          {
            LODWORD(v525) = sub_3F02C0((__int64)v527);
            v437 = sub_3F02C0((__int64)v527);
            dtype_by_size = get_dtype_by_size();
            sub_1D3CC0(a1, *(unsigned __int8 *)(a1 + 109), dtype_by_size, v437, (unsigned int)v525, 0);
          }
          v151 = *(_WORD *)(a1 + 48);
          if ( v151 != 703 )
          {
            LODWORD(v525) = *((_DWORD *)v140 + 4);
            if ( v151 == 704 )
            {
              v152 = v528.m128i_i64[1];
              v153 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
              *(_BYTE *)(v528.m128i_i64[1] + 16) = 1;
              *(_DWORD *)(v152 + 12) = v153;
            }
            LODWORD(v521) = 3;
            goto LABEL_205;
          }
          v486 = v528.m128i_i64[1];
          v94 = v522 == 0;
          *(_DWORD *)(v528.m128i_i64[1] + 12) = v526.m128i_i32[0];
          *(_BYTE *)(v486 + 16) = 1;
          if ( v94 )
          {
            LODWORD(v525) = 7;
            v526.m128i_i32[0] = 20;
            v517 = 1;
            LODWORD(v521) = 3;
            goto LABEL_207;
          }
          v497 = *(_QWORD *)(a1 + 8);
          LODWORD(v521) = 3;
          v24 = 1;
          LODWORD(v514) = v497;
          v526.m128i_i32[0] = 20;
          LOBYTE(v516) = 0;
          LODWORD(v525) = 7;
          goto LABEL_28;
        case 0x1CE:
          v24 = 1;
          LOBYTE(v518) = 1;
          v522 = "_mm_getcsr";
          LODWORD(v525) = 7;
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 4;
          LODWORD(v521) = 0;
          v529.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x1D1:
        case 0x20E:
        case 0x248:
          goto LABEL_833;
        case 0x1D4:
          goto LABEL_300;
        case 0x1D7:
        case 0x1E0:
        case 0x23B:
        case 0x23C:
        case 0x23D:
        case 0x23E:
        case 0x23F:
        case 0x292:
        case 0x29A:
        case 0x29B:
        case 0x29C:
        case 0x2B8:
        case 0x2B9:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          v163 = &word_4EF580;
          if ( *(_BYTE *)(a1 + 109) != 7 )
            v163 = &word_4EF5C0;
          for ( j = *(_WORD *)(a1 + 48); *v163 != j; v163 += 12 )
            ;
          v94 = *(_BYTE *)(a1 + 145) == 5;
          v522 = (void *)*((_QWORD *)v163 + 1);
          if ( v94 )
          {
            v424 = sub_3F02C0((__int64)v527);
            sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v548, v424, *((_DWORD *)v163 + 4));
            sub_11E5D0((__int64)v553, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 152), 1, *(_QWORD *)(a1 + 40), 1);
            s1[0] = (_BYTE *)(&dword_30 + 2);
            v529.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
            clear_tinfo_t();
          }
          else
          {
            v165 = sub_3F02C0(v528.m128i_i64[1]);
            sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v548, v165, *((_DWORD *)v163 + 4));
            v166 = sub_3F02C0((__int64)v527);
            sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v553, v166, 50);
          }
          LODWORD(v521) = 2;
          LODWORD(v525) = *((_DWORD *)v163 + 5);
          goto LABEL_205;
        case 0x1DD:
        case 0x26B:
        case 0x26C:
        case 0x26D:
          v94 = *(_BYTE *)(a1 + 109) == 7;
          v526.m128i_i64[0] = (__int64)&word_4EF6E0;
          if ( !v94 )
            goto LABEL_196;
          goto LABEL_197;
        case 0x1E1:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          v379 = sub_3F02C0(v528.m128i_i64[1]);
          sub_3EC180(*(_QWORD *)(a1 + 800), (__int64)v548, v379, -12);
          v380 = sub_3F02C0((__int64)v527);
          sub_3EC180(*(_QWORD *)(a1 + 800), (__int64)v553, v380, -12);
          v522 = "_m_maskmovq";
          goto LABEL_587;
        case 0x1E2:
        case 0x1E3:
        case 0x22F:
        case 0x230:
        case 0x231:
        case 0x2C5:
        case 0x2C6:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          v195 = *(_WORD *)(a1 + 48);
          v196 = &word_4EF2C0;
          v197 = &word_4EF2C0;
          if ( v195 != word_4EF2C0 )
          {
            do
              v196 += 12;
            while ( *v196 != v195 );
            v197 = v196;
          }
          v522 = (void *)*((_QWORD *)v197 + 1);
          sub_3F00C0(a1, (__int64)v548, *((_DWORD *)v197 + 4), v528.m128i_i64[1], v536);
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v548, v490);
          v198 = v527->m128i_u32[3];
          v199 = *((_DWORD *)v197 + 5);
          if ( v199 < 0 )
          {
            s1[0] = 0;
            v529.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v199;
            v529.m128i_i64[0] = (__int64)s1;
          }
          v200 = get_tinfo_size();
          sub_32BC70(v553, v198, v200, v529.m128i_i64[0]);
          clear_tinfo_t();
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 20;
          LODWORD(v521) = 2;
          goto LABEL_315;
        case 0x1E4:
          v276 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v529.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v277 = getinf();
          sub_11E5D0((__int64)v553, (int)v9, 1, v277, v276, -1);
          goto LABEL_453;
        case 0x1E5:
          v377 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v529.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v378 = getinf();
          sub_11E5D0((__int64)v553, (int)v9, 2, v378, v377, -1);
          goto LABEL_453;
        case 0x1E6:
          v370 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v529.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v371 = getinf();
          sub_11E5D0((__int64)v553, (int)v9, 3, v371, v370, -1);
          goto LABEL_453;
        case 0x1E7:
          v368 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v529.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v369 = getinf();
          sub_11E5D0((__int64)v553, (int)v9, 0, v369, v368, -1);
          goto LABEL_453;
        case 0x1E8:
          LOBYTE(v518) = 0;
          v24 = 0;
          v278 = "_mm_sfence";
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x1E9:
        case 0x1EA:
        case 0x1EB:
        case 0x1EC:
        case 0x1ED:
        case 0x1EE:
        case 0x1EF:
        case 0x1F0:
        case 0x1F4:
        case 0x1F8:
          LODWORD(v525) = -14;
          goto LABEL_210;
        case 0x1F1:
        case 0x1F2:
        case 0x1F3:
        case 0x1F5:
        case 0x1F6:
        case 0x1F7:
        case 0x284:
        case 0x285:
        case 0x286:
        case 0x288:
        case 0x289:
        case 0x28A:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          v172 = *(_WORD *)(a1 + 48);
          v526.m128i_i64[0] = (__int64)&unk_435CE0;
          if ( v172 != 497 )
          {
            v173 = &unk_435CE0;
            do
              v173 += 8;
            while ( *v173 != v172 );
            v526.m128i_i64[0] = (__int64)v173;
          }
          v174 = j__qalloc_or_throw();
          v175 = (unsigned __int8 *)(v174 + 32);
          v176 = *(_QWORD *)(a1 + 40);
          v525 = v174 + 48;
          v529.m128i_i64[0] = v174 + 64;
          *(_QWORD *)(v174 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v174 + 40) = 0;
          *(_QWORD *)(v174 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v174 + 56) = 0;
          *(_QWORD *)(v174 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v174 + 72) = 0;
          sub_32D4D0(v174, v176);
          v177 = v526.m128i_i64[0];
          v178 = *(_DWORD *)(v526.m128i_i64[0] + 4);
          *(_DWORD *)(v174 + 4) |= 0x10u;
          *(_DWORD *)v174 = v178;
          v528.m128i_i32[0] = *(_DWORD *)(v177 + 12);
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], v176, v434);
          s1[0] = &byte_1;
          v179 = _mm_cvtsi32_si128(*(_DWORD *)(v528.m128i_i64[1] + 12));
          v529.m128i_i64[0] = (__int64)s1;
          *(char **)((char *)s1 + 4) = (char *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v528.m128i_u32[0]), v179).m128i_u64[0];
          sub_122C80((__int64)v175, (unsigned __int8 *)s1);
          sub_11A960((__int64)s1);
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, s1, v484);
          s1[0] = &byte_1;
          *(char **)((char *)s1 + 4) = (char *)_mm_unpacklo_epi32(
                                                 _mm_cvtsi32_si128(v528.m128i_u32[0]),
                                                 _mm_cvtsi32_si128(v527->m128i_u32[3])).m128i_u64[0];
          sub_122C80(v525, (unsigned __int8 *)v529.m128i_i64[0]);
          sub_11A960(v529.m128i_i64[0]);
          sub_122C80(v174 + 64, v175);
          v180 = v526.m128i_i64[0];
          *(_DWORD *)(v174 + 68) = 1;
          if ( *(_BYTE *)(v180 + 8) )
            sub_1291D0(v174, *(_QWORD *)(a1 + 832), 6, 1, 1);
          sub_1291D0(v174, *(_QWORD *)(a1 + 832), 9, v528.m128i_i32[0], 1);
          sub_1291D0(v174, *(_QWORD *)(a1 + 832), 5, v528.m128i_i32[0], 1);
          sub_B4460(*(_QWORD **)(a1 + 16), v174);
          goto LABEL_51;
        case 0x1F9:
        case 0x1FC:
        case 0x1FD:
          goto LABEL_305;
        case 0x1FA:
        case 0x1FB:
          goto LABEL_179;
        case 0x207:
        case 0x209:
        case 0x20A:
        case 0x21F:
        case 0x223:
        case 0x226:
        case 0x235:
        case 0x237:
        case 0x246:
        case 0x27C:
        case 0x27D:
        case 0x27E:
        case 0x27F:
        case 0x280:
        case 0x281:
        case 0x282:
        case 0x283:
        case 0x287:
        case 0x28B:
          goto LABEL_209;
        case 0x20B:
          sub_3EFC20(a1, (__int64)v548, 1, v528.m128i_i64[1], 0, 0xFFFFFFFF);
          sub_3E6140(v539, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v518) = 0;
          v239 = "_mm_clflush";
          LODWORD(v521) = 1;
          goto LABEL_387;
        case 0x20F:
        case 0x216:
        case 0x2A9:
        case 0x2AA:
        case 0x2AB:
        case 0x2AC:
        case 0x2AD:
        case 0x2AE:
        case 0x2AF:
        case 0x2B0:
        case 0x2B1:
        case 0x2B2:
        case 0x2B3:
        case 0x2B4:
          goto LABEL_242;
        case 0x214:
        case 0x232:
          goto LABEL_751;
        case 0x217:
          v524 = 4;
          LODWORD(v525) = 0;
          LODWORD(v521) = 0;
          goto LABEL_481;
        case 0x218:
          LOBYTE(v522) = 3;
          v524 = 4;
          goto LABEL_890;
        case 0x219:
          LOBYTE(v522) = 4;
          goto LABEL_729;
        case 0x21A:
          LOBYTE(v522) = 4;
          v524 = 3;
LABEL_890:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          LODWORD(v525) = 0;
          LOBYTE(v518) = 0;
          v526.m128i_i32[0] = 20;
          v516 = 67;
          v517 = 1;
          LODWORD(v521) = 0;
          goto LABEL_483;
        case 0x21E:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          LODWORD(v525) = 25;
          v524 = 4;
          goto LABEL_479;
        case 0x221:
          LOBYTE(v518) = 0;
          v24 = 0;
          v278 = "_mm_lfence";
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x222:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          v345 = sub_3F02C0(v528.m128i_i64[1]);
          sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v548, v345, -13);
          v346 = sub_3F02C0((__int64)v527);
          sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v553, v346, -13);
          v522 = "_mm_maskmoveu_si128";
LABEL_587:
          v347 = *(_QWORD *)(a1 + 832);
          v348 = *(_DWORD *)(v347 + 404);
          v529.m128i_i64[0] = (__int64)s1;
          v526.m128i_i32[0] = get_dtype_size();
          sub_328FE0(s1, v347, v526.m128i_u32[0], 2);
          sub_32BC70(v555, v348, v526.m128i_u32[0], s1);
          clear_tinfo_t();
          copy_tinfo_t();
          LOBYTE(v518) = 0;
          LODWORD(v521) = 3;
          v526.m128i_i32[0] = 20;
          LOBYTE(v516) = 0;
          LODWORD(v525) = 0;
          goto LABEL_93;
        case 0x225:
          LOBYTE(v518) = 0;
          v24 = 0;
          v278 = "_mm_mfence";
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x22A:
        case 0x22B:
          v182 = *(_BYTE *)(a1 + 65);
          if ( v182 != 13 && (v182 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) > 0xFu) )
            goto LABEL_289;
          v183 = *(_BYTE *)(a1 + 105);
          if ( v183 != 13 && (v183 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu) )
            goto LABEL_289;
LABEL_288:
          v184 = *(_BYTE *)(a1 + 109);
          if ( *(_BYTE *)(a1 + 69) != v184 )
            goto LABEL_289;
          v428 = v184;
          v429 = sub_3F02C0((__int64)v527);
          sub_3E70C0((__int64)v548, *(_QWORD *)(a1 + 832), v429, v428, 2u);
          v526.m128i_i32[0] = 4;
          LODWORD(v525) = 0;
          v517 = 2;
          LODWORD(v521) = 0;
          goto LABEL_207;
        case 0x22C:
        case 0x22D:
          if ( (_WORD)v37 == 556 )
          {
            if ( *(_BYTE *)(a1 + 65) == 1 )
            {
              v469 = (__m128i *)v528.m128i_i64[1];
              v470 = sub_3F02C0(v528.m128i_i64[1]);
            }
            else
            {
              v469 = v527;
              v470 = sub_3F02C0((__int64)v527);
            }
            v469[1].m128i_i8[0] = 1;
            v469->m128i_i32[3] = v470 + 8;
          }
          v94 = *(_BYTE *)(a1 + 65) == 1;
          LODWORD(v525) = 0;
          LOBYTE(v518) = 0;
          v526.m128i_i32[0] = 4;
          v516 = 67;
          if ( v94 )
          {
            LOBYTE(v522) = 4;
            v517 = 1;
            LODWORD(v521) = 0;
            v524 = 4;
          }
          else
          {
            v517 = 2;
            LODWORD(v521) = 0;
LABEL_506:
            LOBYTE(v522) = 4;
            v524 = 4;
          }
          goto LABEL_483;
        case 0x239:
          LOBYTE(v518) = 0;
          v24 = 0;
          v278 = "_mm_pause";
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x24B:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          if ( ((*(_QWORD *)(a1 + 104) ^ *(_QWORD *)(a1 + 64)) & 0xFFFF00000000FF00LL) == 0 )
          {
            v288 = sub_3F02C0(v528.m128i_i64[1]);
            sub_3ED260(a1, 3u, a4, 0, 0x3BEA45E214ADDC55LL, v288, 0);
            goto LABEL_51;
          }
LABEL_209:
          LODWORD(v525) = -15;
LABEL_210:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          qsnprintf();
          v133 = &s[strlen(s)];
          v134 = *(v133 - 3);
          if ( v133 >= &v561 )
            goto LABEL_214;
          v135 = *(v133 - 1);
          if ( v135 == 100 )
          {
            v455 = *(v133 - 2);
            if ( v455 == 112 || v455 == 115 )
            {
              *(_WORD *)v133 = 100;
              *(v133 - 1) = v455;
              *(v133 - 2) = 95;
            }
          }
          else if ( v135 == 115 )
          {
            v507 = *(v133 - 2);
            if ( v507 == 112 || v507 == 115 )
            {
              if ( v134 != 50 )
              {
                *(_WORD *)v133 = 115;
                *(v133 - 1) = v507;
                *(v133 - 2) = 95;
LABEL_215:
                if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
                  sub_3E07C0(v528.m128i_i64[1], 32, v409);
                s1[0] = 0;
                v136 = *(_DWORD *)(v528.m128i_i64[1] + 12);
                v529.m128i_i64[0] = (__int64)s1;
                copy_tinfo_t();
                sub_32BC70(v548, v136, 16, s1);
                clear_tinfo_t();
                v137 = get_dtype_size();
                v138 = v137;
                if ( v137 <= 8 )
                {
                  sub_328D00(v529.m128i_i64[0], *(_QWORD *)(a1 + 832), (unsigned int)v137);
                  v139 = sub_3F02C0((__int64)v527);
                  sub_32BC70(v553, v139, v138, v529.m128i_i64[0]);
                  v24 = 1;
                  clear_tinfo_t();
                  LOBYTE(v516) = 0;
                  v526.m128i_i32[0] = 20;
                  v522 = s;
                  LODWORD(v521) = 2;
                  goto LABEL_27;
                }
                v408 = sub_3F02C0((__int64)v527);
                sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v553, v408, v525);
                LODWORD(v521) = 2;
                v522 = s;
                v526.m128i_i32[0] = 20;
                LOBYTE(v516) = 0;
                goto LABEL_93;
              }
LABEL_695:
              *(v133 - 3) = 95;
              goto LABEL_215;
            }
          }
LABEL_214:
          if ( v134 != 50 )
            goto LABEL_215;
          goto LABEL_695;
        case 0x24F:
          v286 = *(_BYTE *)(a1 + 105);
          if ( v286 != 13 && (v286 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu) )
          {
            LOBYTE(v518) = sub_3EC430(a1);
            if ( !(_BYTE)v518 )
              goto LABEL_6;
            sub_3EFC20(a1, (__int64)v548, 89, (__int64)v527, 0, 0xFFFFFFFF);
            sub_3E6140(v539, a1 + 104, 0);
            LODWORD(v521) = 1;
            v522 = "_mm_loaddup_pd";
            v526.m128i_i32[0] = 20;
            LOBYTE(v516) = 0;
            LODWORD(v525) = -15;
            v529.m128i_i64[0] = (__int64)s1;
            goto LABEL_93;
          }
LABEL_196:
          v526.m128i_i64[0] = (__int64)&word_4EFA40;
LABEL_197:
          if ( (unsigned __int8)sub_3EC430(a1) )
          {
            v122 = v526.m128i_i64[0];
            v123 = *(_WORD *)(a1 + 48);
            if ( *(_WORD *)v526.m128i_i64[0] != v123 )
            {
              do
              {
                v124 = (_WORD *)(v122 + 24);
                v122 = (__int64)v124;
              }
              while ( *v124 != v123 );
              v526.m128i_i64[0] = (__int64)v124;
            }
            v522 = *(void **)(v526.m128i_i64[0] + 8);
            if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
              sub_3E07C0(v527, v9, v389);
            v125 = v527->m128i_u32[3];
            v126 = *(_DWORD *)(v526.m128i_i64[0] + 16);
            if ( v126 < 0 )
            {
              s1[0] = 0;
              v529.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
            }
            else
            {
              s1[0] = (char *)(unsigned __int8)v126;
              v529.m128i_i64[0] = (__int64)s1;
            }
            v127 = get_tinfo_size();
            sub_32BC70(v548, v125, v127, v529.m128i_i64[0]);
            clear_tinfo_t();
            v128 = v527;
            LODWORD(v521) = 1;
            LODWORD(v525) = *(_DWORD *)(v526.m128i_i64[0] + 20);
            v129 = v528.m128i_i64[1];
            *v527 = _mm_loadu_si128((const __m128i *)v528.m128i_i64[1]);
            v128[1].m128i_i8[0] = *(_BYTE *)(v129 + 16);
            goto LABEL_205;
          }
          goto LABEL_6;
        case 0x25A:
          LOBYTE(v516) = sub_3EC430(a1);
          if ( !(_BYTE)v516 )
            goto LABEL_6;
          v281 = *(_QWORD *)(a1 + 832);
          v282 = get_dtype_size();
          sub_328FE0(s1, v281, v282, 2);
          sub_32BC70(v548, 8, v282, s1);
          v529.m128i_i64[0] = (__int64)s1;
          clear_tinfo_t();
          v283 = *(_QWORD *)(a1 + 832);
          v284 = get_dtype_size();
          sub_328FE0(s1, v283, v284, 2);
          sub_32BC70(v553, v526.m128i_u32[0], v284, s1);
          clear_tinfo_t();
          v526.m128i_i64[0] = *(_QWORD *)(a1 + 832);
          v285 = get_dtype_size();
          sub_328FE0(s1, v526.m128i_i64[0], v285, 2);
          sub_32BC70(v555, v523, v285, s1);
          clear_tinfo_t();
          copy_tinfo_t();
          LOBYTE(v518) = 0;
          LODWORD(v521) = 3;
          v522 = "_mm_monitor";
          v526.m128i_i32[0] = 4;
          LODWORD(v525) = 0;
          goto LABEL_93;
        case 0x25B:
          LOBYTE(v516) = sub_3EC430(a1);
          if ( !(_BYTE)v516 )
            goto LABEL_6;
          sub_3E70C0((__int64)v548, *(_QWORD *)(a1 + 832), v526.m128i_u32[0], 2, 2u);
          sub_3E70C0((__int64)v553, *(_QWORD *)(a1 + 832), 8u, 2, 2u);
          LOBYTE(v518) = 0;
          v522 = "_mm_mwait";
          LODWORD(v525) = 0;
          LODWORD(v521) = 2;
          v526.m128i_i32[0] = 4;
          v529.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x25D:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          sub_3EFC20(a1, (__int64)v548, -13, (__int64)v527, 64, 0xFFFFFFFF);
          sub_3E6140(v539, a1 + 104, 0);
          LODWORD(v521) = 1;
          v287 = "_mm_lddqu_si128";
          goto LABEL_471;
        case 0x273:
          goto LABEL_363;
        case 0x276:
          v24 = 0;
          LOBYTE(v518) = 0;
          v278 = "__vmx_off";
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x28E:
        case 0x28F:
        case 0x297:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          v213 = *(_WORD *)(a1 + 48);
          v214 = &word_4EE720;
          if ( word_4EE720 != v213 )
          {
            do
              v214 += 12;
            while ( *v214 != v213 );
          }
          v215 = (void *)*((_QWORD *)v214 + 1);
          LODWORD(v525) = *((_DWORD *)v214 + 4);
          v522 = v215;
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], v9, v496);
          v216 = *(_DWORD *)(v528.m128i_i64[1] + 12);
          if ( (int)v525 < 0 )
          {
            s1[0] = 0;
            v529.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v525;
            v529.m128i_i64[0] = (__int64)s1;
          }
          v217 = get_tinfo_size();
          sub_32BC70(v548, v216, v217, v529.m128i_i64[0]);
          clear_tinfo_t();
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v216, v495);
          v218 = v527->m128i_u32[3];
          if ( (int)v525 < 0 )
          {
            s1[0] = 0;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v525;
          }
          v219 = get_tinfo_size();
          sub_32BC70(v553, v218, v219, v529.m128i_i64[0]);
          clear_tinfo_t();
          v220 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          if ( (int)v525 < 0 )
          {
            s1[0] = 0;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v525;
          }
          v221 = get_tinfo_size();
          sub_32BC70(v555, v220, v221, v529.m128i_i64[0]);
          clear_tinfo_t();
          LODWORD(v521) = 3;
          goto LABEL_205;
        case 0x294:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          sub_3EFC20(a1, (__int64)v548, -13, (__int64)v527, 0, 0xFFFFFFFF);
          sub_3E6140(v539, a1 + 104, 0);
          LODWORD(v521) = 1;
          v287 = "_mm_stream_load_si128";
LABEL_471:
          v522 = v287;
          v526.m128i_i32[0] = 20;
          LOBYTE(v516) = 0;
          LODWORD(v525) = -13;
          v529.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x2B7:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          v364 = v528.m128i_i64[1];
          v365 = sub_3F02C0(v528.m128i_i64[1]);
          sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v548, v365, -13);
          v366 = sub_3F02C0((__int64)v527);
          sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v553, v366, -13);
          *(_BYTE *)(v528.m128i_i64[1] + 16) = 1;
          v522 = "_mm_testz_si128";
          *(_DWORD *)(v364 + 12) = 1;
          v24 = 1;
          LODWORD(v525) = 34;
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 20;
          LODWORD(v521) = 2;
          v529.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x2BC:
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
              sub_3E07C0(v528.m128i_i64[1], v9, v477);
            v11 = *(_QWORD *)(a1 + 832);
          }
          v525 = v11;
          v361 = *(_DWORD *)(v528.m128i_i64[1] + 12);
          v529.m128i_i64[0] = (__int64)s1;
          v526.m128i_i32[0] = get_dtype_size();
          sub_328FE0(s1, v11, v526.m128i_u32[0], 2);
          sub_32BC70(v548, v361, v526.m128i_u32[0], s1);
          clear_tinfo_t();
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v361, v476);
          v362 = *(_QWORD *)(a1 + 832);
          v526.m128i_i32[0] = v527->m128i_i32[3];
          v363 = get_dtype_size();
          sub_328FE0(v529.m128i_i64[0], v362, v363, 2);
          sub_32BC70(v553, v526.m128i_u32[0], v363, v529.m128i_i64[0]);
          clear_tinfo_t();
          get_dtype_size();
          qsnprintf();
          LOBYTE(v518) = 1;
          LODWORD(v521) = 2;
          v522 = s;
          v526.m128i_i32[0] = 4;
          LOBYTE(v516) = 0;
          LODWORD(v525) = 39;
          goto LABEL_93;
        case 0x2BD:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          LODWORD(v525) = 7;
          v522 = "_mm_cmpestri";
          goto LABEL_599;
        case 0x2BE:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          LODWORD(v525) = -13;
          v522 = "_mm_cmpestrm";
LABEL_599:
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], v9, v465);
          s1[0] = 0;
          v529.m128i_i64[0] = (__int64)s1;
          v352 = *(_DWORD *)(v528.m128i_i64[1] + 12);
          copy_tinfo_t();
          v353 = get_tinfo_size();
          sub_32BC70(v548, v352, v353, s1);
          clear_tinfo_t();
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v352, v475);
          s1[0] = 0;
          v354 = v527->m128i_u32[3];
          copy_tinfo_t();
          v355 = get_tinfo_size();
          sub_32BC70(v553, v354, v355, v529.m128i_i64[0]);
          clear_tinfo_t();
          v356 = *(_QWORD *)(a1 + 832);
          v357 = get_dtype_size();
          sub_328FE0(v529.m128i_i64[0], v356, v357, 2);
          sub_32BC70(v555, 8, v357, v529.m128i_i64[0]);
          clear_tinfo_t();
          v358 = *(_QWORD *)(a1 + 832);
          v359 = get_dtype_size();
          sub_328FE0(v529.m128i_i64[0], v358, v359, 2);
          sub_32BC70(v556, v523, v359, v529.m128i_i64[0]);
          clear_tinfo_t();
          if ( *(_WORD *)(a1 + 48) != 701 )
            v526.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          v360 = v528.m128i_i64[1];
          LOBYTE(v518) = 1;
          LOBYTE(v516) = 0;
          v24 = 1;
          *(_DWORD *)(v528.m128i_i64[1] + 12) = v526.m128i_i32[0];
          *(_BYTE *)(v360 + 16) = 1;
          v526.m128i_i32[0] = 20;
          LODWORD(v521) = 4;
          goto LABEL_27;
        case 0x2C2:
          if ( !v527[1].m128i_i8[0] )
          {
            if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
              sub_3E07C0(v527, v9, v491);
            v11 = *(_QWORD *)(a1 + 832);
          }
          v525 = v11;
          v367 = v527->m128i_u32[3];
          v529.m128i_i64[0] = (__int64)s1;
          v526.m128i_i32[0] = get_dtype_size();
          sub_328FE0(s1, v11, v526.m128i_u32[0], 2);
          sub_32BC70(v548, v367, v526.m128i_u32[0], s1);
          clear_tinfo_t();
          v522 = "__popcnt";
          if ( v549 == 2 )
            v522 = "__popcnt16";
          v24 = 1;
          LOBYTE(v518) = 1;
          LOBYTE(v516) = 0;
          LODWORD(v525) = (unsigned __int8)v552;
          v526.m128i_i32[0] = 4;
          LODWORD(v521) = 1;
          goto LABEL_27;
        case 0x2C3:
        case 0x2C4:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          v326 = sub_3F02C0(v528.m128i_i64[1]);
          sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v548, v326, -13);
          v327 = *(_WORD *)(a1 + 48);
          if ( *(_BYTE *)(a1 + 105) == 5 )
          {
            v526.m128i_i32[0] = 1;
            v522 = "_mm_extracti_si64";
            if ( v327 == 708 )
            {
              v502 = sub_3F02C0((__int64)v527);
              sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v553, v502, -13);
              v526.m128i_i32[0] = 2;
              v522 = "_mm_inserti_si64";
            }
            LODWORD(v521) = v526.m128i_i32[0] + 2;
            do
            {
              sub_11E5D0(
                (__int64)&v548[80 * v526.m128i_i32[0]],
                *(_QWORD *)(a1 + 832),
                *(_QWORD *)(a1 + 40LL * v526.m128i_i32[0] + 72),
                4,
                *(_QWORD *)(a1 + 40),
                v526.m128i_i32[0]);
              s1[0] = (char *)&dword_14;
              v529.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
              clear_tinfo_t();
              ++v526.m128i_i32[0];
            }
            while ( v526.m128i_i32[0] != (_DWORD)v521 );
          }
          else
          {
            v522 = "_mm_insert_si64";
            if ( v327 == 707 )
              v522 = (void *)"_mm_extract_si64";
            v328 = sub_3F02C0((__int64)v527);
            sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v553, v328, -13);
            LODWORD(v521) = 2;
            v529.m128i_i64[0] = (__int64)s1;
          }
          LOBYTE(v516) = 0;
          v24 = 1;
          LODWORD(v525) = -13;
          v526.m128i_i32[0] = 20;
          goto LABEL_27;
        case 0x2C7:
          if ( !v527[1].m128i_i8[0] )
          {
            if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
              sub_3E07C0(v527, v9, v411);
            v11 = *(_QWORD *)(a1 + 832);
          }
          v525 = v11;
          v325 = v527->m128i_u32[3];
          v529.m128i_i64[0] = (__int64)s1;
          v526.m128i_i32[0] = get_dtype_size();
          sub_328FE0(s1, v11, v526.m128i_u32[0], 2);
          sub_32BC70(v548, v325, v526.m128i_u32[0], s1);
          clear_tinfo_t();
          v522 = "__lzcnt";
          if ( v549 == 2 )
            v522 = "__lzcnt16";
          v24 = 1;
          LOBYTE(v518) = 1;
          LOBYTE(v516) = 0;
          LODWORD(v525) = (unsigned __int8)v552;
          v526.m128i_i32[0] = 20;
          LODWORD(v521) = 1;
          goto LABEL_27;
        case 0x2C9:
        case 0x708:
          goto LABEL_592;
        case 0x2CA:
        case 0x2F9:
        case 0x707:
          goto LABEL_346;
        case 0x2CD:
          LOBYTE(v518) = 0;
          LODWORD(v521) = 0;
          v239 = "__svm_clgi";
          goto LABEL_387;
        case 0x2CE:
          v349 = *(_QWORD *)(a1 + 800);
          v548[0] = 1;
          LODWORD(v550) = 8;
          v549 = *(_DWORD *)(*(_QWORD *)(v349 + 112) + 80LL);
          copy_tinfo_t();
          v350 = *(_QWORD *)(a1 + 800);
          v553[0] = 1;
          LODWORD(v350) = *(unsigned __int8 *)(v350 + 130);
          s1[0] = &byte_7;
          v529.m128i_i64[0] = (__int64)s1;
          v554 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v350), _mm_cvtsi32_si128(v526.m128i_u32[0])).m128i_u64[0];
          copy_tinfo_t();
          v24 = 0;
          clear_tinfo_t();
          LOBYTE(v518) = 0;
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          v522 = "__svm_invlpga";
          LODWORD(v521) = 2;
          goto LABEL_27;
        case 0x2CF:
          v522 = "__svm_skinit";
          goto LABEL_500;
        case 0x2D0:
          LOBYTE(v518) = 0;
          v24 = 0;
          LODWORD(v525) = 0;
          v278 = "__svm_stgi";
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x2D2:
          v522 = "__svm_vmload";
          goto LABEL_500;
        case 0x2D4:
          v522 = "__svm_vmrun";
          goto LABEL_500;
        case 0x2D5:
          v522 = "__svm_vmsave";
LABEL_500:
          v307 = get_dtype_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_328FE0(s1, v9, v307, 2);
          sub_32BC70(v548, 8, v307, s1);
          v24 = 0;
          clear_tinfo_t();
          LOBYTE(v518) = 0;
          LODWORD(v525) = 0;
          goto LABEL_392;
        case 0x2EA:
          LODWORD(v525) = 36;
          v522 = (void *)"__bextr_u32";
          if ( (unsigned int)get_dtype_size() == 8 )
          {
            LODWORD(v525) = 37;
            v522 = (void *)"__bextr_u64";
          }
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v9, v430);
          v302 = *(_QWORD *)(a1 + 832);
          v526.m128i_i32[0] = v527->m128i_i32[3];
          v303 = get_dtype_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_328FE0(s1, v302, v303, 2);
          sub_32BC70(v548, v526.m128i_u32[0], v303, s1);
          clear_tinfo_t();
          s1[0] = (char *)a1;
          LOBYTE(s1[2]) = 0;
          s1[1] = (char *)0xFFFFFFFF00000002LL;
          sub_3EFA20((int *)s1, 1, 0);
          if ( !LOBYTE(s1[2]) && !(unsigned __int8)sub_3F0150(v529.m128i_i64[0]) )
            sub_3E07C0(v529.m128i_i64[0], 1, v425);
          v304 = *(_QWORD *)(a1 + 832);
          v526.m128i_i32[0] = HIDWORD(s1[1]);
          v305 = get_dtype_size();
          sub_328FE0(v529.m128i_i64[0], v304, v305, 2);
          v521 = v553;
          sub_32BC70(v553, v526.m128i_u32[0], v305, v529.m128i_i64[0]);
          clear_tinfo_t();
          v306 = *(_QWORD *)(a1 + 832);
          LODWORD(v304) = get_dtype_size();
          sub_328FE0(v529.m128i_i64[0], v306, (unsigned int)v304, 2);
          sub_32BC70(v555, v526.m128i_u32[0], (unsigned int)v304, v529.m128i_i64[0]);
          clear_tinfo_t();
          sub_123D40(v553, *(_QWORD *)(a1 + 832), 20, *(_QWORD *)(a1 + 40), 255, 4);
          sub_123D40(v555, *(_QWORD *)(a1 + 832), 23, *(_QWORD *)(a1 + 40), 8, 1);
          sub_123D40(v555, *(_QWORD *)(a1 + 832), 20, *(_QWORD *)(a1 + 40), 255, 4);
          sub_3EC3A0(a1);
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 20;
          LODWORD(v521) = 3;
          LOBYTE(v518) = 1;
          goto LABEL_112;
        case 0x491:
          v300 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v529.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v301 = getinf();
          sub_11E5D0((__int64)v553, (int)v9, 6, v301, v300, -1);
LABEL_453:
          sub_3EFC20(a1, (__int64)v548, 1, v528.m128i_i64[1], 0, 0xFFFFFFFF);
          sub_3E6140(v539, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v518) = 0;
          LODWORD(v521) = 2;
          v522 = "_mm_prefetch";
          v526.m128i_i32[0] = 4;
          LOBYTE(v516) = 1;
          LODWORD(v525) = 0;
          goto LABEL_93;
        default:
          goto LABEL_6;
      }
    }
    if ( (unsigned __int16)v37 <= 0x1B4u )
    {
      if ( (unsigned __int16)v37 <= 5u )
        goto LABEL_6;
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 6:
        case 0x2C:
        case 0x7A:
        case 0x7E:
        case 0x86:
        case 0x8F:
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 56) - 33) > 1u )
            goto LABEL_6;
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 65) - 2) <= 2u )
          {
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
            {
              if ( (_WORD)v37 != 143 )
              {
                if ( (v37 & 0xFFFB) != 0x7A )
                {
                  if ( !under_debugger )
                    sub_37EA20(51396);
LABEL_944:
                  BUG();
                }
                goto LABEL_278;
              }
            }
            else if ( (_WORD)v37 != 143 )
            {
              if ( (_WORD)v37 == 134 )
              {
                v506 = v527;
                v527->m128i_i32[3] = v520;
                v506[1].m128i_i8[0] = 1;
                sub_3EE380(a1);
              }
              v528.m128i_i32[2] = sub_3EF260(a1, 0, v520);
              LODWORD(s1[0]) = 1;
              HIDWORD(s1[0]) = get_dtype_size();
              LODWORD(s1[1]) = sub_3F02C0((__int64)v527);
              v529.m128i_i64[0] = (__int64)s1;
              sub_3EC6C0(a1, v528.m128i_u32[2], (unsigned __int8 *)s1);
              sub_11A960((__int64)s1);
              goto LABEL_281;
            }
LABEL_279:
            v181 = sub_3F02C0(v528.m128i_i64[1]);
            sub_3EC660(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL), v181);
            if ( *(_WORD *)(a1 + 48) == 143 )
            {
              v505 = sub_3F02C0(v528.m128i_i64[1]);
              sub_3EE1E0(a1, v505, v524);
            }
LABEL_281:
            sub_3EC3A0(a1);
            v12 = 1;
            goto LABEL_8;
          }
          if ( (v37 & 0xFFFB) == 0x7A && (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
          {
LABEL_278:
            v524 = *(_BYTE *)(a1 + 109);
            goto LABEL_279;
          }
          goto LABEL_6;
        case 0xA:
        case 0xB:
          v526.m128i_i32[0] = get_dtype_size();
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], v9, v462);
          v202 = *(_QWORD *)(a1 + 832);
          sub_32BCB0(
            (unsigned int)v548,
            v202,
            *(_DWORD *)(v528.m128i_i64[1] + 12),
            v526.m128i_i32[0],
            0,
            v526.m128i_i32[0],
            2);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 && v526.m128i_i32[0] == 4 )
            v526.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], v202, v463);
          s1[0] = 0;
          s1[1] = 0;
          v203 = *(_DWORD *)(v528.m128i_i64[1] + 12);
          v529.m128i_i64[0] = (__int64)s1;
          sub_63580((__int64 *)s1, v203, v526.m128i_i32[0]);
          s1[2] = 0;
          v547 = 0;
          sub_63980(v536, (__int64 *)s1);
          sub_313730(&v537, &s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v547 = 0;
            qfree();
          }
          qfree();
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], &s1[2], v433);
          s1[0] = 0;
          s1[1] = 0;
          sub_63580((__int64 *)v529.m128i_i64[0], *(_DWORD *)(v528.m128i_i64[1] + 12), v526.m128i_i32[0]);
          s1[2] = 0;
          v547 = 0;
          sub_63980(&v542, (__int64 *)v529.m128i_i64[0]);
          sub_313730(&v544, &s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v547 = 0;
            qfree();
          }
          qfree();
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, &s1[2], v464);
          v204 = v527->m128i_i32[3];
          v525 = *(_QWORD *)(a1 + 832);
          v526.m128i_i32[0] = v204;
          v205 = get_dtype_size();
          sub_328FE0(v529.m128i_i64[0], v525, v205, 2);
          sub_32BC70(v553, v526.m128i_u32[0], v205, v529.m128i_i64[0]);
          clear_tinfo_t();
          v94 = *(_WORD *)(a1 + 48) == 11;
          v522 = "_BitScanForward";
          if ( v94 )
            v522 = "_BitScanReverse";
          if ( a4 == 7 )
          {
            qsnprintf();
            v522 = s;
          }
          v206 = v528.m128i_i64[1];
          v24 = 1;
          LOBYTE(v518) = 1;
          LODWORD(v525) = 34;
          *(_DWORD *)(v528.m128i_i64[1] + 12) = 1;
          *(_BYTE *)(v206 + 16) = 1;
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 36;
          LODWORD(v521) = 2;
          goto LABEL_27;
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
          v207 = (char *)&unk_4E9160;
          if ( (_WORD)v37 == 12 )
          {
            v529.m128i_i64[0] = (__int64)v539;
          }
          else
          {
            do
              v207 += 24;
            while ( (_WORD)v37 != *(_WORD *)v207 );
            v529.m128i_i64[0] = (__int64)v536;
          }
          sub_3E6140((__int64 *)v529.m128i_i64[0], a1 + 64, 0);
          if ( *(_BYTE *)(a1 + 65) == 1 )
          {
            v456 = get_dtype_size();
            v94 = *(_WORD *)(a1 + 48) == 12;
            v528.m128i_i32[0] = v456;
            if ( v94 )
              v457 = 0;
            else
              v457 = v456;
            v525 = v456;
            v526.m128i_i32[0] = v457;
            v458 = sub_3F02C0(v528.m128i_i64[1]);
            v510 = v459;
            sub_32BCB0((unsigned int)v548, *(_QWORD *)(a1 + 832), v458, v528.m128i_i32[0], v525, v526.m128i_i32[0], 1);
            v460 = sub_3F02C0(v528.m128i_i64[1]);
            sub_3E6300((__int64 *)v529.m128i_i64[0], v460, v528.m128i_i32[0]);
            if ( *(_WORD *)(a1 + 48) == 12 )
              goto LABEL_821;
            v461 = sub_3F02C0(v528.m128i_i64[1]);
            v209 = (char **)v461;
            sub_3E6300(&v542, v461, v528.m128i_i32[0]);
          }
          else
          {
            if ( (unsigned __int8)(a4 - 1) > 1u && a4 != 7 )
              goto LABEL_6;
            v208 = sub_3EC570(a4);
            v209 = (char **)v548;
            sub_3EFC20(a1, (__int64)v548, v208, v528.m128i_i64[1], 0, 0xFFFFFFFF);
          }
          if ( *(_WORD *)(a1 + 48) != 12 )
            goto LABEL_341;
LABEL_821:
          s1[0] = 0;
          tinfo_property = get_tinfo_property();
          if ( (_BYTE)tinfo_property )
            tinfo_property |= 0x40uLL;
          s1[0] = (char *)tinfo_property;
          v209 = s1;
          v529.m128i_i64[0] = (__int64)s1;
          sub_3E5CD0();
          clear_tinfo_t();
LABEL_341:
          v529.m128i_i8[0] = *(_BYTE *)(a1 + 109);
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v209, v473);
          v210 = v527->m128i_i32[3];
          v525 = *(_QWORD *)(a1 + 832);
          v526.m128i_i32[0] = v210;
          v528.m128i_i32[0] = get_dtype_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_328FE0(s1, v525, v528.m128i_u32[0], 2);
          sub_32BC70(v553, v526.m128i_u32[0], v528.m128i_u32[0], s1);
          clear_tinfo_t();
          v522 = (void *)*((_QWORD *)v207 + 1);
          if ( a4 == 7 || a4 == 1 )
          {
            qsnprintf();
            v466 = *((_DWORD *)v207 + 4);
            v522 = s;
            v528.m128i_i32[0] = v466;
            v467 = v528.m128i_i64[1];
            *(_DWORD *)(v528.m128i_i64[1] + 12) = 0;
            *(_BYTE *)(v467 + 16) = 1;
          }
          else
          {
            v94 = v522 == 0;
            v528.m128i_i32[0] = *((_DWORD *)v207 + 4);
            v211 = v528.m128i_i64[1];
            *(_DWORD *)(v528.m128i_i64[1] + 12) = 0;
            *(_BYTE *)(v211 + 16) = 1;
            if ( v94 )
            {
              LODWORD(v525) = 34;
              v526.m128i_i32[0] = 4;
              v517 = 1;
              LODWORD(v521) = 2;
              break;
            }
          }
          v468 = *(_QWORD *)(a1 + 8);
          LOBYTE(v518) = 1;
          v24 = 1;
          LODWORD(v521) = 2;
          LODWORD(v514) = v468;
          v526.m128i_i32[0] = 4;
          LOBYTE(v516) = 0;
          LODWORD(v525) = 34;
          goto LABEL_28;
        case 0x18:
          LOBYTE(v518) = 0;
          v24 = 0;
          v278 = "_disable";
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x28:
          LOBYTE(v518) = 0;
          v24 = 0;
          v278 = "__halt";
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 12;
          goto LABEL_455;
        case 0x2B:
          if ( a4 == 2 )
          {
            v526.m128i_i64[0] = (__int64)"dword";
          }
          else if ( a4 > 2u )
          {
            if ( a4 != 7 )
              goto LABEL_6;
            v526.m128i_i64[0] = (__int64)"qword";
          }
          else
          {
            v385 = "word";
            if ( !a4 )
              v385 = "byte";
            v526.m128i_i64[0] = (__int64)v385;
          }
          if ( *(_BYTE *)(a1 + 109) != 1 )
          {
            if ( v527[1].m128i_i8[0] )
            {
              v386 = v527->m128i_u32[3];
              v387 = v527->m128i_u32[3];
            }
            else
            {
              if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
                sub_3E07C0(v527, v9, v431);
              v387 = v527->m128i_u32[3];
              v386 = v387;
              if ( !v527[1].m128i_i8[0] )
              {
                if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
                  sub_3E07C0(v527, v11, v432);
                v386 = v527->m128i_u32[3];
              }
            }
            v11 = *(unsigned __int8 *)(a1 + 109);
            sub_1D3CC0(a1, v11, 1, v386, v387, 0);
          }
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v11, v487);
          v388 = *(_QWORD *)(a1 + 832);
          LODWORD(v525) = v527->m128i_i32[3];
          v529.m128i_i64[0] = (__int64)s1;
          LODWORD(v522) = get_dtype_size();
          sub_328FE0(s1, v388, (unsigned int)v522, 2);
          sub_32BC70(v548, (unsigned int)v525, (unsigned int)v522, s1);
          clear_tinfo_t();
          qsnprintf();
          LODWORD(v525) = 35;
          if ( a4 != 1 )
          {
            LODWORD(v525) = 36;
            if ( a4 != 2 )
            {
              LODWORD(v525) = 34;
              if ( a4 )
                LODWORD(v525) = 37;
            }
          }
          v24 = 0;
          LOBYTE(v518) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          v522 = s;
          LODWORD(v521) = 1;
          goto LABEL_27;
        case 0x2E:
          v341 = *(_QWORD *)(a1 + 72);
          if ( v341 == 41 )
          {
            sub_3E70C0((__int64)v548, (__int64)v9, v526.m128i_u32[0], 2, 2u);
            LOBYTE(v518) = 0;
            v522 = "__fastfail";
            LODWORD(v525) = 0;
            LODWORD(v521) = 1;
            v528.m128i_i32[0] = 15;
            v526.m128i_i32[0] = 12;
            LOBYTE(v516) = 1;
            v529.m128i_i64[0] = (__int64)s1;
            goto LABEL_93;
          }
          if ( v341 != 44 )
            goto LABEL_6;
          memset(s1, 0, sizeof(s1));
          v529.m128i_i64[0] = (__int64)s1;
          if ( get_cmt() <= 0 || s1[1] <= &byte_9[2] )
          {
            v342 = s1[0];
            v526.m128i_i32[0] = 4;
            v522 = "__int2c";
            LODWORD(v521) = 0;
          }
          else
          {
            v342 = s1[0];
            if ( !strncmp(s1[0], "NT_ASSERT(\"", 0xBu) )
            {
              v343 = strrchr(v342 + 11, 34);
              if ( v343 && v343[1] == 41 )
                *v343 = 0;
              v548[0] = 3;
              v550 = qstrdup();
              v549 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
              copy_tinfo_t();
              v344 = *(_QWORD *)(a1 + 40);
              v342 = s1[0];
              v526.m128i_i32[0] = 12;
              LODWORD(v521) = 1;
              v551 = v344;
              v522 = "NT_ASSERT";
            }
            else
            {
              v526.m128i_i32[0] = 4;
              v522 = "__int2c";
              LODWORD(v521) = 0;
            }
          }
          if ( v342 )
          {
            s1[1] = 0;
            qfree();
          }
          LOBYTE(v518) = 0;
          v24 = 0;
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          goto LABEL_27;
        case 0x30:
          LOBYTE(v518) = 0;
          v24 = 0;
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          if ( (get_flags_ex() & 0x10000) != 0 )
            v526.m128i_i32[0] = 4;
          else
            v526.m128i_i32[0] = 12;
          v278 = "__debugbreak";
          goto LABEL_455;
        case 0x61:
        case 0x62:
        case 0xDE:
          sub_3F00C0(a1, (__int64)v548, 1, v528.m128i_i64[1], v536);
          v241 = *(_WORD *)(a1 + 48);
          v242 = 6;
          v522 = "__lidt";
          if ( v241 != 98 )
          {
            v522 = "__lgdt";
            if ( v241 != 97 )
            {
              v522 = "__invlpg";
              if ( v241 == 222 )
                v242 = 4096;
            }
          }
          sub_3E6140(v539, a1 + 64, v242);
          LOBYTE(v518) = 0;
          LODWORD(v521) = 1;
          goto LABEL_388;
        case 0x78:
          if ( (unsigned __int64)get_dtype_size() <= 3 )
          {
            if ( v527[1].m128i_i8[0] )
            {
              v309 = v527->m128i_u32[3];
              v310 = v527->m128i_u32[3];
            }
            else
            {
              if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
                sub_3E07C0(v527, v9, v422);
              v310 = v527->m128i_u32[3];
              v309 = v310;
              if ( !v527[1].m128i_i8[0] )
              {
                if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
                  sub_3E07C0(v527, v9, v423);
                v309 = v527->m128i_u32[3];
              }
            }
            v11 = *(unsigned __int8 *)(a1 + 109);
            sub_1D3CC0(a1, v11, 2, v309, v310, 0);
          }
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v11, v426);
          v311 = *(_QWORD *)(a1 + 832);
          v312 = v527->m128i_u32[3];
          v529.m128i_i64[0] = (__int64)s1;
          v526.m128i_i32[0] = get_dtype_size();
          sub_328FE0(s1, v311, v526.m128i_u32[0], 2);
          sub_32BC70(v548, v312, v526.m128i_u32[0], s1);
          v24 = 1;
          clear_tinfo_t();
          LOBYTE(v518) = 1;
          LODWORD(v525) = 36;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          v522 = "__segmentlimit";
          LODWORD(v521) = 1;
          goto LABEL_27;
        case 0x7B:
          v318 = *(_BYTE *)(a1 + 65);
          if ( v318 == 10 )
          {
            v513 = s;
            v419 = *(_BYTE *)(a1 + 109);
            qsnprintf();
            v420 = 36;
            if ( v419 == 7 )
              v420 = 37;
            v421 = sub_3F02C0((__int64)v527);
            sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v548, v421, v420);
            LODWORD(v521) = 1;
            LODWORD(v525) = 0;
            v522 = s;
            v517 = 0;
          }
          else if ( v318 == 9 )
          {
            v414 = sub_3F02C0(v528.m128i_i64[1]);
            v510 = v415;
            sub_3ED260(a1, 3u, 2, *(unsigned __int16 *)(a1 + 70), 0x3BEA45E214ADDC55LL, v414, 0);
            v416 = sub_3F02C0(v528.m128i_i64[1]);
            sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v548, v416, 36);
            v417 = 36;
            if ( *(_BYTE *)(a1 + 109) == 7 )
              v417 = 37;
            v418 = sub_3F02C0((__int64)v527);
            sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v553, v418, v417);
            LODWORD(v521) = 2;
            LODWORD(v525) = 0;
            v522 = "__writedr";
            v517 = 0;
          }
          else
          {
            v319 = *(_BYTE *)(a1 + 105);
            if ( v319 == 10 )
            {
              v513 = s;
              qsnprintf();
              LODWORD(v525) = 36;
              if ( *(_BYTE *)(a1 + 69) == 7 )
                LODWORD(v525) = 37;
              sub_3EC3A0(a1);
              v517 = 1;
              LODWORD(v521) = 0;
              v522 = s;
            }
            else if ( v319 == 9 )
            {
              v508 = sub_3F02C0(v528.m128i_i64[1]);
              v510 = (__int64)v9;
              sub_3ED260(a1, 3u, 2, *(unsigned __int16 *)(a1 + 110), 0x3BEA45E214ADDC55LL, v508, 0);
              v509 = sub_3F02C0(v528.m128i_i64[1]);
              sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v548, v509, 36);
              LODWORD(v525) = 36;
              if ( *(_BYTE *)(a1 + 69) == 7 )
                LODWORD(v525) = 37;
              v517 = 1;
              v522 = "__readdr";
              LODWORD(v521) = 1;
            }
            else
            {
              LODWORD(v525) = 0;
              v522 = 0;
              v517 = 0;
              LODWORD(v521) = 0;
            }
          }
          v320 = *(_QWORD *)(a1 + 8);
          memset(s1, 0, sizeof(s1));
          v547 = 0;
          v321 = *(_QWORD *)(v320 + 544);
          v322 = *(_QWORD *)(v320 + 536);
          if ( v322 + v321 - 1 >= v322 )
          {
            s1[2] = (char *)qvector_reserve();
            *(__m128i *)&s1[2][16 * v547] = _mm_unpacklo_epi64((__m128i)v322, (__m128i)v321);
            *(_QWORD *)&v547 = v547 + 1;
          }
          v529.m128i_i64[0] = (__int64)s1;
          sub_63980(v539, (__int64 *)s1);
          sub_313730(&src, &s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v547 = 0;
            qfree();
          }
          qfree();
          v323 = *(_QWORD *)(a1 + 8);
          memset(s1, 0, sizeof(s1));
          v547 = 0;
          v324 = *(_QWORD *)(v323 + 696);
          v518 = *(_QWORD *)(v323 + 704);
          v526.m128i_i64[0] = v324;
          if ( v324 + v518 - 1 >= v324 )
          {
            s1[2] = (char *)qvector_reserve();
            *(__m128 *)&s1[2][16 * v547] = _mm_loadh_ps((const double *)&v518);
            *(_QWORD *)&v547 = v547 + 1;
          }
          sub_63980(v539, (__int64 *)v529.m128i_i64[0]);
          sub_313730(&src, &s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v547 = 0;
            qfree();
          }
          qfree();
          if ( v517 )
          {
            if ( !v522 )
            {
              v526.m128i_i32[0] = 4;
              break;
            }
            v501 = *(_QWORD *)(a1 + 8);
            v24 = v517;
            LOBYTE(v518) = 1;
            v526.m128i_i32[0] = 4;
            LODWORD(v514) = v501;
            LOBYTE(v516) = 1;
            goto LABEL_28;
          }
          sub_3E1190(v536, v539);
          if ( !v522 )
            goto LABEL_6;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          LOBYTE(v518) = 0;
          goto LABEL_112;
        case 0x84:
          v313 = *(_BYTE *)(a1 + 109);
          LOBYTE(v525) = v313;
          if ( v313 == 2 )
          {
            v526.m128i_i64[0] = (__int64)"dword";
          }
          else if ( v313 > 2u )
          {
            if ( (_BYTE)v525 != 7 )
              goto LABEL_6;
            v526.m128i_i64[0] = (__int64)"qword";
          }
          else
          {
            v94 = v313 == 0;
            v314 = "word";
            if ( v94 )
              v314 = "byte";
            v526.m128i_i64[0] = (__int64)v314;
          }
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
              sub_3E07C0(v528.m128i_i64[1], v9, v413);
            v9 = *(_DWORD **)(a1 + 832);
          }
          LODWORD(v522) = *(_DWORD *)(v528.m128i_i64[1] + 12);
          v315 = get_dtype_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_328FE0(s1, v9, v315, 2);
          sub_32BC70(v548, (unsigned int)v522, v315, s1);
          clear_tinfo_t();
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, (unsigned int)v522, v412);
          v316 = *(_QWORD *)(a1 + 832);
          LODWORD(v522) = v527->m128i_i32[3];
          v317 = get_dtype_size();
          sub_328FE0(v529.m128i_i64[0], v316, v317, 2);
          sub_32BC70(v553, (unsigned int)v522, v317, v529.m128i_i64[0]);
          clear_tinfo_t();
          qsnprintf();
          LOBYTE(v518) = 0;
          LODWORD(v521) = 2;
          v522 = s;
          v526.m128i_i32[0] = 4;
          LOBYTE(v516) = 1;
          LODWORD(v525) = 0;
          goto LABEL_93;
        case 0x8C:
        case 0x8E:
          v236 = 140;
          if ( v9[21] == 8 )
            v236 = 142;
          if ( v37 != v236 )
            goto LABEL_6;
          sub_3F02C0(v528.m128i_i64[1]);
          sub_3EE380(a1);
          v237 = 39;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
            v237 = 37;
          v238 = sub_3F02C0(v528.m128i_i64[1]);
          sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v548, v238, v237);
          sub_3E6300(v536, 0, 5);
          LOBYTE(v518) = 0;
          v239 = "__writeeflags";
          LODWORD(v521) = 1;
          goto LABEL_387;
        case 0x95:
        case 0x97:
          v230 = 149;
          if ( v9[21] == 8 )
            v230 = 151;
          if ( v37 != v230 )
            goto LABEL_6;
          v231 = *(_QWORD **)(a1 + 8);
          v522 = "__readeflags";
          if ( *(_QWORD *)(a1 + 40) == v231[5] )
            v522 = "__getcallerseflags";
          v232 = 39;
          if ( v9[20] == 8 )
            v232 = 37;
          LODWORD(v525) = v232;
          v529.m128i_i64[0] = (__int64)s1;
          sub_3E1120(s1, v232);
          v233 = get_tinfo_size();
          v234 = sub_135C40(v231, v233, 1);
          v235 = v528.m128i_i64[1];
          v24 = 1;
          *(_DWORD *)(v528.m128i_i64[1] + 12) = v234;
          *(_BYTE *)(v235 + 16) = 1;
          clear_tinfo_t();
          LOBYTE(v518) = 1;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          v528.m128i_i32[0] = 16;
          LODWORD(v521) = 0;
          goto LABEL_27;
        case 0x9A:
        case 0x9B:
          if ( a4 != 2 )
            goto LABEL_6;
          v225 = sub_3F02C0(v528.m128i_i64[1]);
          sub_3E70C0((__int64)v548, *(_QWORD *)(a1 + 832), v225, 2, 2u);
          HIDWORD(v554) = sub_3F02C0((__int64)v527);
          v553[0] = 1;
          LODWORD(v554) = 1;
          s1[0] = (_BYTE *)(&qword_20 + 2);
          v529.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          if ( *(_WORD *)(a1 + 48) == 154 )
          {
            v226 = 27;
            v522 = "_lrotl";
          }
          else
          {
            v226 = 28;
            v522 = "_lrotr";
          }
          v227 = (int)sub_3F02C0((__int64)v527);
          v228 = sub_3F02C0(v528.m128i_i64[1]);
          v510 = v229;
          sub_3ED260(a1, v226, 2, v228, v227, 0, 0);
          LOBYTE(v516) = 0;
          LODWORD(v525) = 36;
          v526.m128i_i32[0] = 20;
          LODWORD(v521) = 2;
          LOBYTE(v518) = 1;
          goto LABEL_112;
        case 0xC6:
        case 0xC7:
LABEL_363:
          sub_3F00C0(a1, (__int64)v548, 1, v528.m128i_i64[1], v536);
          v222 = 6;
          if ( *(_WORD *)(a1 + 48) == 627 )
            v222 = 8;
          sub_3E6140(v536, a1 + 64, v222);
          v223 = *(_WORD *)(a1 + 48);
          LOBYTE(v518) = 0;
          v24 = 0;
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          if ( v223 == 199 )
          {
            v224 = "__sidt";
          }
          else if ( v223 == 198 )
          {
            v224 = "__sgdt";
          }
          else
          {
            v224 = "__vmx_vmptrst";
          }
          v522 = v224;
          LODWORD(v521) = 1;
          v529.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0xCE:
          LOBYTE(v518) = 0;
          v24 = 0;
          v278 = "_enable";
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0xD6:
          goto LABEL_129;
        case 0xDA:
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
              sub_3E07C0(v528.m128i_i64[1], v9, v472);
            v11 = *(_QWORD *)(a1 + 832);
          }
          v529.m128i_i64[0] = v11;
          v528.m128i_i32[0] = *(_DWORD *)(v528.m128i_i64[1] + 12);
          v336 = get_dtype_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_328FE0(s1, v11, v336, 2);
          sub_32BC70(v548, v528.m128i_u32[0], v336, s1);
          clear_tinfo_t();
          if ( a4 == 7 )
          {
            v24 = 1;
            LOBYTE(v518) = 1;
            LODWORD(v525) = 37;
            LOBYTE(v516) = 0;
            v526.m128i_i32[0] = 20;
            v528.m128i_i32[0] = 12;
            v522 = "_byteswap_uint64";
            LODWORD(v521) = 1;
          }
          else
          {
            v94 = a4 == 1;
            LOBYTE(v518) = 1;
            v24 = 1;
            if ( v94 )
            {
              LODWORD(v525) = 35;
              LOBYTE(v516) = 0;
              v526.m128i_i32[0] = 20;
              v528.m128i_i32[0] = 12;
              v522 = "_byteswap_ushort";
            }
            else
            {
              LODWORD(v525) = 36;
              LOBYTE(v516) = 0;
              v526.m128i_i32[0] = 20;
              v528.m128i_i32[0] = 12;
              v522 = "_byteswap_ulong";
            }
            LODWORD(v521) = 1;
          }
          goto LABEL_27;
        case 0xDD:
          LOBYTE(v518) = 0;
          v24 = 0;
          v278 = "__wbinvd";
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0xDF:
        case 0x101:
          v240 = get_dtype_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_328FE0(s1, v9, v240, 2);
          sub_32BC70(v548, v526.m128i_u32[0], v240, s1);
          clear_tinfo_t();
          v94 = *(_WORD *)(a1 + 48) == 223;
          v522 = "__readpmc";
          if ( v94 )
            v522 = "__readmsr";
          LOBYTE(v518) = 0;
          v24 = 0;
          LODWORD(v525) = 37;
LABEL_392:
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          LODWORD(v521) = 1;
          goto LABEL_27;
        case 0xE0:
          v335 = get_dtype_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_328FE0(s1, v9, v335, 2);
          sub_32BC70(v548, v526.m128i_u32[0], v335, s1);
          clear_tinfo_t();
          sub_122DA0((__int64)v553, 8, v523, 4);
          s1[0] = (_BYTE *)(&qword_20 + 5);
          copy_tinfo_t();
          v24 = 0;
          clear_tinfo_t();
          LOBYTE(v518) = 0;
          LODWORD(v525) = 0;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          v522 = "__writemsr";
          LODWORD(v521) = 2;
          goto LABEL_27;
        case 0xE3:
          LOBYTE(v518) = 0;
          v24 = 0;
          v278 = "__rdtsc";
          LODWORD(v525) = 37;
          LOBYTE(v516) = 1;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x15F:
          LOBYTE(v518) = 0;
          v24 = 0;
          LODWORD(v525) = 0;
          v278 = "_m_empty";
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x160:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          v381 = *(char *)(a1 + 109);
          if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 109) )
          {
            v382 = *(_BYTE *)(a1 + 65);
            if ( v382 != 12 )
            {
              if ( v382 != 1 )
              {
                if ( v382 != 13 )
                  goto LABEL_640;
LABEL_883:
                v499 = sub_3F02C0((__int64)v527);
                sub_3E70C0((__int64)v548, *(_QWORD *)(a1 + 832), v499, 2, 2u);
                LOBYTE(v516) = 0;
                v24 = 1;
                v376 = "_mm_cvtsi32_si128";
                LODWORD(v525) = -13;
                v526.m128i_i32[0] = 20;
                goto LABEL_629;
              }
              v498 = *(_WORD *)(a1 + 70);
              if ( (unsigned __int16)(v498 - 56) > 7u )
              {
                if ( (unsigned __int16)(v498 - 64) > 0xFu )
                {
LABEL_640:
                  v383 = *(_BYTE *)(a1 + 105);
                  if ( v383 != 12 )
                  {
                    if ( v383 != 1 )
                    {
                      if ( v383 != 13 )
                        goto LABEL_6;
                      goto LABEL_643;
                    }
                    v503 = *(_WORD *)(a1 + 110);
                    if ( (unsigned __int16)(v503 - 56) > 7u )
                    {
                      if ( (unsigned __int16)(v503 - 64) <= 0xFu )
                      {
LABEL_643:
                        v384 = sub_3F02C0((__int64)v527);
                        sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v548, v384, -13);
                        LOBYTE(v516) = 0;
                        v24 = 1;
                        v376 = "_mm_cvtsi128_si32";
                        LODWORD(v525) = 7;
                        v526.m128i_i32[0] = 20;
                        goto LABEL_629;
                      }
                      goto LABEL_6;
                    }
                  }
                  v504 = sub_3F02C0((__int64)v527);
                  sub_3EC180(*(_QWORD *)(a1 + 800), (__int64)v548, v504, -12);
                  LOBYTE(v516) = 0;
                  v24 = 1;
                  v376 = "_mm_cvtsi64_si32";
                  LODWORD(v525) = 7;
                  v526.m128i_i32[0] = 20;
                  goto LABEL_629;
                }
                goto LABEL_883;
              }
            }
            v493 = sub_3F02C0((__int64)v527);
            sub_3E70C0((__int64)v548, *(_QWORD *)(a1 + 832), v493, 2, 2u);
            LOBYTE(v516) = 0;
            v24 = 1;
            v376 = "_mm_cvtsi32_si64";
            LODWORD(v525) = -12;
            v526.m128i_i32[0] = 20;
LABEL_629:
            v522 = v376;
            LODWORD(v521) = 1;
            v529.m128i_i64[0] = (__int64)s1;
            goto LABEL_27;
          }
          v500 = sub_3F02C0((__int64)v527);
LABEL_885:
          sub_3E70C0((__int64)v548, *(_QWORD *)(a1 + 832), v500, v381, 2u);
          v526.m128i_i32[0] = 20;
          LODWORD(v525) = 0;
          v517 = 2;
          LODWORD(v521) = 1;
          break;
        case 0x161:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          v372 = *(_BYTE *)(a1 + 109);
          LOBYTE(v516) = *(_BYTE *)(a1 + 69) == v372 && *(_BYTE *)(a1 + 69) <= 7u;
          if ( (_BYTE)v516 )
          {
            v381 = v372;
            v500 = sub_3F02C0((__int64)v527);
            goto LABEL_885;
          }
          v373 = *(_BYTE *)(a1 + 65);
          if ( v373 == 13 || v373 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu )
          {
            v374 = *(_BYTE *)(a1 + 105);
            if ( v374 == 13 || v374 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) <= 0xFu )
            {
              v375 = sub_3F02C0((__int64)v527);
              sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v548, v375, -13);
              v24 = 1;
              v376 = "_mm_move_epi64";
              LODWORD(v525) = -13;
              v526.m128i_i32[0] = 20;
              goto LABEL_629;
            }
          }
LABEL_289:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          v185 = *(_WORD *)(a1 + 48);
          v186 = &word_4EFE60;
          if ( v185 != word_4EFE60 )
          {
            do
              v186 += 12;
            while ( *v186 != v185 );
          }
          v187 = *(_BYTE *)(a1 + 65);
          if ( v187 == 13 )
            goto LABEL_665;
          if ( v187 == 1 )
          {
            if ( (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu )
            {
LABEL_665:
              v390 = *(_BYTE *)(a1 + 105);
              if ( v390 == 13 )
                goto LABEL_6;
              if ( v390 != 1 )
              {
                qsnprintf();
                sub_3EFC20(a1, (__int64)v548, *((_DWORD *)v186 + 4), (__int64)v527, 64, 0xFFFFFFFF);
                sub_3E6140(v539, a1 + 104, 0);
                v391 = *((_DWORD *)v186 + 5);
                v24 = 1;
                LOBYTE(v516) = 0;
                v526.m128i_i32[0] = 20;
                v376 = s;
                LODWORD(v525) = v391;
                goto LABEL_629;
              }
              if ( (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu && v185 == 353 )
              {
                v482 = sub_3F02C0(v528.m128i_i64[1]);
                v483 = sub_3F02C0((__int64)v527);
                sub_1D3CC0(a1, 7, a4, v483, v482, 0);
                goto LABEL_51;
              }
              goto LABEL_6;
            }
            if ( v185 == 353 )
            {
              v442 = (int)sub_3F02C0(v528.m128i_i64[1]);
              v512 = sub_3F02C0((__int64)v527);
              sub_3ED260(a1, 4u, 7, v512, 0x3BEA45E214ADDC55LL, v442, 0);
              goto LABEL_51;
            }
            v529.m128i_i64[0] = get_dtype_size();
            v400 = sub_3F02C0(v528.m128i_i64[1]);
            sub_3E6300(v536, v400, v529.m128i_i32[0]);
            v401 = sub_3F02C0(v528.m128i_i64[1]);
            v188 = *(unsigned __int8 **)(a1 + 832);
            v510 = v401;
            sub_32BCB0((unsigned int)v548, (_DWORD)v188, v401, v529.m128i_i32[0], 0, v529.m128i_i32[0], 2);
          }
          else
          {
            v188 = v548;
            sub_3F00C0(a1, (__int64)v548, *((_DWORD *)v186 + 4), v528.m128i_i64[1], v536);
          }
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v188, v441);
          v526.m128i_i32[0] = v527->m128i_i32[3];
          v189 = *((_DWORD *)v186 + 5);
          if ( v189 < 0 )
          {
            s1[0] = 0;
            v529.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v189;
            v529.m128i_i64[0] = (__int64)s1;
          }
          sub_32BC70(v553, v526.m128i_u32[0], 16, v529.m128i_i64[0]);
          clear_tinfo_t();
          if ( ((*(_WORD *)(a1 + 48) - 446) & 0xFFFD) != 0 )
          {
            sub_3F0710(a1, 0, SHIDWORD(v554), 0);
            goto LABEL_51;
          }
          qsnprintf();
          LOBYTE(v518) = 0;
          LODWORD(v521) = 2;
          v522 = s;
          v526.m128i_i32[0] = 20;
          LOBYTE(v516) = 0;
          LODWORD(v525) = 0;
          goto LABEL_93;
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16A:
        case 0x16B:
        case 0x16C:
        case 0x16D:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17A:
        case 0x17B:
        case 0x17C:
        case 0x17D:
        case 0x17E:
        case 0x17F:
        case 0x180:
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18A:
        case 0x18B:
        case 0x18C:
        case 0x1A8:
        case 0x1AA:
        case 0x1AB:
          goto LABEL_113;
        case 0x16E:
        case 0x16F:
        case 0x170:
        case 0x18D:
LABEL_300:
          v529.m128i_i32[0] = v9[114];
          v190 = sub_3EC430(a1);
          v38 = v529.m128i_i32[0];
          if ( !v190 || ((*(_QWORD *)(a1 + 104) ^ *(_QWORD *)(a1 + 64)) & 0xFFFF00000000FF00LL) != 0 )
            goto LABEL_113;
          v191 = sub_3F02C0(v528.m128i_i64[1]);
          sub_3ED260(a1, 3u, a4, 0, 0x3BEA45E214ADDC55LL, v191, 0);
          v192 = *(_WORD *)(a1 + 48);
          if ( v192 != 468 && v192 != 397 )
          {
            v529.m128i_i64[0] = (int)sub_3F02C0(v528.m128i_i64[1]);
            v193 = sub_3F02C0(v528.m128i_i64[1]);
            sub_3ED260(a1, 7u, a4, v193, 0x3BEA45E214ADDC55LL, v529.m128i_i64[0], 0);
          }
          goto LABEL_51;
        case 0x18E:
LABEL_346:
          v212 = (char *)&unk_4E8E60;
          while ( (_WORD)v37 != *(_WORD *)v212 )
          {
            v212 += 16;
            if ( algn_4E8ED0 == v212 )
            {
              if ( !under_debugger )
                sub_37EA20(52524);
              goto LABEL_944;
            }
          }
          v522 = (void *)*((_QWORD *)v212 + 1);
          sub_3F00C0(a1, (__int64)v548, 1, v528.m128i_i64[1], v536);
          v443 = 512;
          if ( *(_WORD *)(a1 + 48) == 714 )
            v443 = 832;
          sub_3E6140(v536, a1 + 64, v443);
          v444 = *(_WORD *)(a1 + 48);
          if ( v444 == 398 || v444 == 1799 )
          {
LABEL_781:
            LOBYTE(v516) = 1;
            v526.m128i_i32[0] = 4;
            LODWORD(v521) = 1;
          }
          else
          {
LABEL_762:
            v526.m128i_i64[0] = *(_QWORD *)(a1 + 832);
            v445 = get_dtype_size();
            v529.m128i_i64[0] = (__int64)s1;
            sub_328FE0(s1, v526.m128i_i64[0], v445, 2);
            sub_32BC70(v553, 8, v445, s1);
            clear_tinfo_t();
            LOBYTE(v516) = 1;
            v526.m128i_i32[0] = 4;
            LODWORD(v521) = 2;
          }
LABEL_315:
          if ( !v522 )
            goto LABEL_6;
          v201 = *(_QWORD *)(a1 + 8);
          LOBYTE(v518) = 0;
          v24 = 0;
          LODWORD(v514) = v201;
          LODWORD(v525) = 0;
          v529.m128i_i64[0] = (__int64)s1;
          goto LABEL_28;
        case 0x18F:
LABEL_592:
          v351 = (char *)&unk_4E8E60;
          while ( (_WORD)v37 != *(_WORD *)v351 )
          {
            v351 += 16;
            if ( algn_4E8ED0 == v351 )
            {
              if ( !under_debugger )
                sub_37EA20(52524);
              goto LABEL_944;
            }
          }
          v522 = (void *)*((_QWORD *)v351 + 1);
          sub_3EFC20(a1, (__int64)v548, 1, v528.m128i_i64[1], 0, 0xFFFFFFFF);
          sub_3E6140(v539, a1 + 64, 0);
          sub_63FD0(v536, v539);
          v446 = v541;
          v529.m128i_i64[0] = 0;
          if ( (_QWORD)v541 )
          {
            v529.m128i_i64[0] = qalloc_or_throw();
            memcpy((void *)v529.m128i_i64[0], src, 16 * v446);
          }
          v447 = _mm_unpacklo_epi64((__m128i)v446, (__m128i)v446);
          if ( v537 )
          {
            v526 = v447;
            v538.m128i_i64[0] = 0;
            qfree();
            v447 = _mm_load_si128(&v526);
          }
          v538 = v447;
          v537 = v529.m128i_i64[0];
          v448 = *(_QWORD *)(a1 + 832);
          v449 = *(_DWORD *)(v448 + 448);
          v450 = *(_DWORD *)(v448 + 492);
          s1[0] = 0;
          s1[1] = 0;
          v529.m128i_i64[0] = (__int64)s1;
          sub_63580((__int64 *)s1, v450, 8 * v449);
          s1[2] = 0;
          v547 = 0;
          sub_63980(v536, (__int64 *)v529.m128i_i64[0]);
          sub_313730(&v537, &s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v547 = 0;
            qfree();
          }
          qfree();
          s1[0] = 0;
          s1[1] = 0;
          sub_63580((__int64 *)v529.m128i_i64[0], 0, 5);
          s1[2] = 0;
          v547 = 0;
          sub_63980(v536, (__int64 *)v529.m128i_i64[0]);
          sub_313730(&v537, &s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v547 = 0;
            qfree();
          }
          qfree();
          v451 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 688LL);
          s1[0] = 0;
          s1[1] = 0;
          sub_63580((__int64 *)v529.m128i_i64[0], v451, 3);
          s1[2] = 0;
          v547 = 0;
          sub_63980(v536, (__int64 *)v529.m128i_i64[0]);
          sub_313730(&v537, &s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v547 = 0;
            qfree();
          }
          qfree();
          v452 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 528LL);
          s1[0] = 0;
          s1[1] = 0;
          sub_63580((__int64 *)v529.m128i_i64[0], v452, 64);
          s1[2] = 0;
          v547 = 0;
          sub_63980(v536, (__int64 *)v529.m128i_i64[0]);
          sub_313730(&v537, &s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v547 = 0;
            qfree();
          }
          qfree();
          v453 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          s1[0] = 0;
          s1[1] = 0;
          sub_63580((__int64 *)v529.m128i_i64[0], v453, 256);
          s1[2] = 0;
          v547 = 0;
          sub_63980(v536, (__int64 *)v529.m128i_i64[0]);
          sub_313730(&v537, &s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v547 = 0;
            qfree();
          }
          qfree();
          v454 = *(_WORD *)(a1 + 48);
          if ( v454 == 399 || v454 == 1800 )
            goto LABEL_781;
          goto LABEL_762;
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19A:
        case 0x19B:
        case 0x1A0:
        case 0x1A1:
        case 0x1A2:
        case 0x1A3:
        case 0x1A4:
LABEL_179:
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v9, v489);
          s1[0] = 0;
          v111 = v527->m128i_u32[3];
          v529.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          sub_32BC70(v553, v111, 8, s1);
          clear_tinfo_t();
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], v111, v488);
          s1[0] = 0;
          v112 = *(_DWORD *)(v528.m128i_i64[1] + 12);
          copy_tinfo_t();
          sub_32BC70(v548, v112, 8, v529.m128i_i64[0]);
          clear_tinfo_t();
          LODWORD(v521) = 2;
          goto LABEL_182;
        case 0x19C:
        case 0x19D:
        case 0x19E:
        case 0x19F:
LABEL_305:
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v9, v478);
          s1[0] = 0;
          v194 = v527->m128i_u32[3];
          v529.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          sub_32BC70(v548, v194, 8, s1);
          clear_tinfo_t();
          LODWORD(v521) = 1;
LABEL_182:
          LOBYTE(v518) = sub_3EC430(a1);
          if ( !(_BYTE)v518 )
            goto LABEL_6;
          qsnprintf();
          v24 = 1;
          LODWORD(v525) = -12;
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 20;
          v522 = s;
          goto LABEL_27;
        case 0x1A5:
          LOBYTE(v518) = 0;
          v24 = 0;
          LODWORD(v525) = 0;
          v278 = "_m_femms";
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 4;
LABEL_455:
          v522 = v278;
          LODWORD(v521) = 0;
          v529.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x1A6:
          sub_3EFC20(a1, (__int64)v548, 1, v528.m128i_i64[1], 0, 0xFFFFFFFF);
          sub_3E6140(v539, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v518) = 0;
          v239 = "_m_prefetch";
          LODWORD(v521) = 1;
          goto LABEL_387;
        case 0x1A7:
          sub_3EFC20(a1, (__int64)v548, 1, v528.m128i_i64[1], 0, 0xFFFFFFFF);
          sub_3E6140(v539, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v518) = 0;
          v239 = "_m_prefetchw";
          LODWORD(v521) = 1;
LABEL_387:
          v522 = v239;
LABEL_388:
          v526.m128i_i32[0] = 4;
          LOBYTE(v516) = 1;
          LODWORD(v525) = 0;
          v529.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x1A9:
          goto LABEL_254;
        case 0x1AE:
LABEL_833:
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v9, v480);
          v479 = v527->m128i_i32[3];
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], v11, v481);
          sub_3EF630(a1, *(_DWORD *)(v528.m128i_i64[1] + 12), v479);
          sub_3F0880(a1, 12);
          sub_3EA490(a1);
          goto LABEL_51;
        case 0x1AF:
LABEL_751:
          v526.m128i_i64[0] = (__int64)&word_4EF6E0;
          goto LABEL_197;
        case 0x1B0:
        case 0x1B3:
LABEL_242:
          v161 = *(_BYTE *)(a1 + 105);
          v526.m128i_i64[0] = (__int64)&word_4EF8C0;
          if ( v161 != 13 )
          {
            v526.m128i_i64[0] = (__int64)&word_4EFA40;
            if ( v161 == 1 )
            {
              v162 = *(_WORD *)(a1 + 110);
              v526.m128i_i64[0] = (__int64)&word_4EF8C0;
              if ( (unsigned __int16)(v162 - 64) > 0xFu )
                v526.m128i_i64[0] = (__int64)&word_4EFA40;
            }
          }
          goto LABEL_197;
        case 0x1B1:
          LOBYTE(v522) = 3;
LABEL_729:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          LODWORD(v525) = 0;
          LOBYTE(v518) = 0;
          v526.m128i_i32[0] = 20;
          v516 = 65;
          v517 = 0;
          LODWORD(v521) = 0;
          v524 = 2;
          goto LABEL_483;
        case 0x1B2:
          v524 = 3;
          LODWORD(v525) = 0;
          LODWORD(v521) = 0;
          goto LABEL_481;
        case 0x1B4:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          LODWORD(v525) = 9;
          v524 = 3;
LABEL_479:
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v9, v427);
          v289 = v527->m128i_u32[3];
          s1[0] = (char *)(int)v525;
          v290 = get_tinfo_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_32BC70(v548, v289, v290, s1);
          clear_tinfo_t();
          LODWORD(v521) = 1;
LABEL_481:
          if ( !(unsigned __int8)sub_3EC430(a1) )
            goto LABEL_6;
          LOBYTE(v518) = 0;
          v526.m128i_i32[0] = 20;
          v516 = 63;
          v517 = 1;
          LOBYTE(v522) = 2;
LABEL_483:
          v25 = j__qalloc_or_throw();
          v291 = *(_QWORD *)(a1 + 40);
          v528.m128i_i64[0] = v25 + 32;
          *(_QWORD *)(v25 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v25 + 40) = 0;
          *(_QWORD *)(v25 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v25 + 56) = 0;
          *(_QWORD *)(v25 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v25 + 72) = 0;
          sub_32D4D0(v25, v291);
          v292 = (__m128i)(unsigned __int64)get_dtype_size();
          if ( !v527[1].m128i_i8[0] )
          {
            v529.m128i_i64[0] = v292.m128i_i64[0];
            v298 = sub_3F0150((__int64)v527);
            v292 = _mm_loadl_epi64(&v529);
            if ( !v298 )
              sub_3E07C0(v527, v291, v299);
          }
          s1[0] = &byte_1;
          v293 = (char *)_mm_unpacklo_epi32(v292, _mm_cvtsi32_si128(v527->m128i_u32[3])).m128i_u64[0];
          v529.m128i_i64[0] = (__int64)s1;
          *(char **)((char *)s1 + 4) = v293;
          sub_122C80(v528.m128i_i64[0], (unsigned __int8 *)s1);
          sub_11A960(v529.m128i_i64[0]);
          v294 = (__m128i)(unsigned __int64)get_dtype_size();
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
          {
            v528.m128i_i64[0] = v294.m128i_i64[0];
            v296 = sub_3F0150(v528.m128i_i64[1]);
            v294 = _mm_loadl_epi64(&v528);
            if ( !v296 )
              sub_3E07C0(v528.m128i_i64[1], s1, v297);
          }
          s1[0] = &byte_1;
          v295 = _mm_cvtsi32_si128(*(_DWORD *)(v528.m128i_i64[1] + 12));
          v528.m128i_i32[0] = *(_DWORD *)(v528.m128i_i64[1] + 12);
          *(char **)((char *)s1 + 4) = (char *)_mm_unpacklo_epi32(v294, v295).m128i_u64[0];
          sub_122C80(v25 + 64, (unsigned __int8 *)v529.m128i_i64[0]);
          sub_11A960(v529.m128i_i64[0]);
          *(_DWORD *)(v25 + 4) |= 0x10u;
          v94 = (_BYTE)v518 == 0;
          *(_DWORD *)v25 = v516;
          if ( !v94 )
            sub_1291D0(v25, *(_QWORD *)(a1 + 832), 9, 16, 1);
          v522 = 0;
          goto LABEL_37;
        default:
          goto LABEL_6;
      }
LABEL_207:
      v25 = j__qalloc_or_throw();
      v130 = *(_QWORD *)(a1 + 40);
      v529.m128i_i64[0] = v25 + 32;
      *(_QWORD *)(v25 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v25 + 40) = 0;
      *(_QWORD *)(v25 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v25 + 56) = 0;
      *(_QWORD *)(v25 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v25 + 72) = 0;
      sub_32D4D0(v25, v130);
      sub_122C80(v25 + 32, v548);
      v131 = _mm_cvtsi32_si128(v549);
      if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
      {
        v245 = v528.m128i_i64[1];
        v529.m128i_i32[0] = _mm_cvtsi128_si32(v131);
        v246 = sub_3F0150(v528.m128i_i64[1]);
        v131 = _mm_cvtsi32_si128(v529.m128i_u32[0]);
        if ( !v246 )
          sub_3E07C0(v245, v548, v247);
      }
      v522 = 0;
      v132 = *(_DWORD *)(v528.m128i_i64[1] + 12);
      *(_BYTE *)(v25 + 64) = 1;
      *(_DWORD *)v25 = 4;
      v529.m128i_i32[0] = v132;
      *(_QWORD *)(v25 + 68) = _mm_unpacklo_epi32(v131, _mm_cvtsi32_si128(v132)).m128i_u64[0];
LABEL_37:
      v34 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v34 + 84) == 8 && *(_DWORD *)(v25 + 68) == 4 )
      {
        if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
        {
          v249 = v528.m128i_i64[1];
          if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v249, v34, v250);
          v34 = *(_QWORD *)(a1 + 832);
        }
        if ( *(_DWORD *)(v34 + 440) >= *(_DWORD *)(v528.m128i_i64[1] + 12) )
          sub_1291D0(v25, v34, 9, 8, 1);
      }
      v35 = sub_B4460(*(_QWORD **)(a1 + 16), v25);
      if ( (v526.m128i_i8[0] & 8) != 0 )
        goto LABEL_51;
      v36 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v36 <= 0x101u )
      {
        if ( (unsigned __int16)v36 > 0x94u )
        {
          switch ( *(_WORD *)(a1 + 48) )
          {
            case 0x95:
            case 0x97:
              *(_DWORD *)(v35 + 4) |= 0x20000u;
              v35 = *(unsigned int *)(v35 + 72);
              sub_3EE1E0(a1, v35, v524);
              break;
            case 0x9A:
            case 0x9B:
              v35 = 8;
              sub_3F0810(a1, 8);
              break;
            case 0xC6:
            case 0xC7:
            case 0xCE:
            case 0xDD:
            case 0xDE:
              goto LABEL_159;
            case 0xD1:
            case 0xDB:
              goto LABEL_79;
            case 0xD8:
              goto LABEL_78;
            case 0xD9:
            case 0xE2:
              if ( (_DWORD)v521 == 3 )
              {
                if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
                {
                  v396 = v528.m128i_i64[1];
                  if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
                    sub_3E07C0(v396, v35, v397);
                }
                v267 = *(_DWORD *)(v528.m128i_i64[1] + 12);
                v529.m128i_i64[0] = v519;
                v268 = get_dtype_size();
                sub_1D3790(a1, 33, v268, v529.m128i_i32[0], v267, 1, 0);
                LOWORD(v36) = *(_WORD *)(a1 + 48);
                v35 = v510;
              }
              if ( (_WORD)v36 == 217 )
              {
                if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
                {
                  v394 = v528.m128i_i64[1];
                  if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
                    sub_3E07C0(v394, v35, v395);
                }
                v116 = v519;
                v117 = *(int *)(v528.m128i_i64[1] + 12);
                v529.m128i_i32[0] = v524;
                v528.m128i_i64[0] = v117;
                v118 = get_dtype_size();
                sub_1D3790(a1, 35, v118, v116, v528.m128i_i32[0], 0, 0);
                if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
                {
                  v398 = v528.m128i_i64[1];
                  if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
                    sub_3E07C0(v398, 35, v399);
                }
                v528.m128i_i64[0] = *(int *)(v528.m128i_i64[1] + 12);
                v119 = get_dtype_size();
                sub_1D3790(a1, 30, v119, v116, v528.m128i_i32[0], 3, 0);
                if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
                {
                  v392 = v528.m128i_i64[1];
                  if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
                    sub_3E07C0(v392, 30, v393);
                }
                v528.m128i_i64[0] = *(int *)(v528.m128i_i64[1] + 12);
                v120 = get_dtype_size();
                sub_1D3790(a1, 13, v120, v116, v528.m128i_i32[0], v116, 0);
                sub_3F0BC0(a1, 31, v519, v529.m128i_u32[0], 4);
                v121 = get_dtype_size();
                v35 = 29;
                sub_1D3790(a1, 29, v121, v116, 346938453, 2, 0);
              }
              break;
            case 0xDF:
            case 0xE3:
            case 0x101:
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
              {
                v109 = v523;
                v110 = get_dtype_size();
                sub_1D3790(a1, 4, v110, 12, 346938453, v109, 0);
                sub_1D3CC0(a1, 2, 7, 8, 8, 0);
                v35 = 2;
                sub_1D3CC0(a1, 2, 7, v523, v523, 0);
              }
              break;
            default:
              goto LABEL_48;
          }
          goto LABEL_48;
        }
        if ( (unsigned __int16)v36 > 0x30u )
        {
          if ( (unsigned __int16)v36 > 0x8Fu )
            goto LABEL_48;
          if ( (unsigned __int16)v36 <= 0x7Au )
          {
            if ( (unsigned __int16)v36 > 0x62u )
            {
              if ( (_WORD)v36 == 120 )
              {
                v35 = 2;
                sub_3F0810(a1, 2);
              }
              goto LABEL_48;
            }
            if ( (unsigned __int16)v36 <= 0x60u )
              goto LABEL_48;
          }
          else if ( ((1LL << ((unsigned __int8)v36 - 123)) & 0xA0601) == 0 )
          {
            if ( (_WORD)v36 == 143 )
            {
              v251 = v524;
              if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
              {
                v258 = v528.m128i_i64[1];
                if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
                  sub_3E07C0(v258, v35, v259);
              }
              v35 = *(unsigned int *)(v528.m128i_i64[1] + 12);
              sub_3EE1E0(a1, v35, v251);
              goto LABEL_48;
            }
            if ( (_WORD)v36 != 131 )
              goto LABEL_48;
LABEL_78:
            v35 = 9;
            sub_3F0880(a1, 9);
            goto LABEL_79;
          }
        }
        else
        {
          if ( (unsigned __int16)v36 <= 0x21u )
          {
            if ( (unsigned __int16)v36 > 0xBu )
            {
              if ( (unsigned __int16)(v36 - 12) <= 3u )
              {
                v35 = 30;
                sub_3F0810(a1, 30);
              }
              goto LABEL_48;
            }
            if ( (unsigned __int16)v36 > 9u )
            {
              if ( *(_DWORD *)v35 != 4 )
              {
                if ( !under_debugger )
                  sub_37EA20(51659);
                goto LABEL_944;
              }
              *(_DWORD *)v35 = 6;
              v35 = 29;
              sub_3F0810(a1, 29);
              goto LABEL_48;
            }
            if ( (_WORD)v36 != 6 )
            {
LABEL_48:
              if ( v517 == 2 )
              {
                if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
                {
                  v54 = v528.m128i_i64[1];
                  if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
                    sub_3E07C0(v54, v35, v55);
                }
                sub_3F0710(a1, 0, *(_DWORD *)(v528.m128i_i64[1] + 12), 1);
              }
LABEL_51:
              v12 = 1;
              sub_3E2760((_QWORD *)(*(_QWORD *)(a1 + 8) + 1000LL), *(_QWORD *)(a1 + 40));
              goto LABEL_7;
            }
LABEL_79:
            v43 = v524;
            if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
            {
              v252 = v528.m128i_i64[1];
              if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
                sub_3E07C0(v252, v35, v253);
            }
            v35 = *(unsigned int *)(v528.m128i_i64[1] + 12);
            sub_3F29C0(a1, v35, v43);
            goto LABEL_48;
          }
          if ( ((1LL << v36) & 0x1280000000000LL) == 0 )
          {
            if ( ((1LL << v36) & 0x100400000000LL) != 0 )
              goto LABEL_79;
            if ( (_WORD)v36 != 46 )
              goto LABEL_48;
LABEL_103:
            *(_DWORD *)(v35 + 4) |= 0x20000u;
            v35 = 31;
            sub_3F0810(a1, 31);
            goto LABEL_48;
          }
        }
LABEL_159:
        *(_DWORD *)(v35 + 4) |= 0x20000u;
        goto LABEL_48;
      }
      if ( (unsigned __int16)v36 > 0x2EAu )
        goto LABEL_48;
      if ( (unsigned __int16)v36 > 0x2B6u )
      {
        switch ( *(_WORD *)(a1 + 48) )
        {
          case 0x2B7:
            v154 = *(_QWORD *)(a1 + 8);
            if ( (int)v525 < 0 )
            {
              s1[0] = 0;
              v529.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
            }
            else
            {
              s1[0] = (char *)(unsigned __int8)v525;
              v529.m128i_i64[0] = (__int64)s1;
            }
            v155 = sub_332690(
                     v154,
                     *(_DWORD *)(a1 + 40) + 1,
                     (unsigned int)"_mm_testc_si128",
                     v529.m128i_i32[0],
                     (_DWORD)v521,
                     (unsigned int)v548,
                     1,
                     v510,
                     (_DWORD)v513,
                     v516,
                     v518,
                     v519);
            clear_tinfo_t();
            v156 = (unsigned __int8 *)v529.m128i_i64[0];
            *(_DWORD *)(*(_QWORD *)(v155 + 72) + 280LL) |= v526.m128i_i32[0];
            v157 = *(_DWORD *)(v155 + 68);
            LODWORD(s1[0]) = 1;
            LODWORD(s1[1]) = 0;
            HIDWORD(s1[0]) = v157;
            v158 = sub_122CB0(v155, v156);
            sub_11A960(v529.m128i_i64[0]);
            v35 = (__int64)v158;
            sub_B4460(*(_QWORD **)(a1 + 16), (__int64)v158);
            break;
          case 0x2BD:
          case 0x2BF:
            v515 = s;
            qstrncpy();
            v101 = "zcso";
            v528.m128i_i64[0] = (__int64)&unk_435C90;
            v529.m128i_i64[0] = (__int64)s1;
            do
            {
              v102 = *v101;
              v103 = *(_QWORD *)(a1 + 8);
              s1[0] = (_BYTE *)(&qword_20 + 2);
              v104 = *(_QWORD *)(a1 + 40);
              s[11] = v102;
              v527 = (__m128i *)sub_332690(
                                  v103,
                                  v104,
                                  (_DWORD)v515,
                                  v529.m128i_i32[0],
                                  (_DWORD)v521,
                                  (unsigned int)v548,
                                  1,
                                  v510,
                                  (_DWORD)v515,
                                  v516,
                                  v518,
                                  v519);
              clear_tinfo_t();
              v105 = (unsigned __int8 *)v529.m128i_i64[0];
              v106 = v527;
              *(_DWORD *)(v527[4].m128i_i64[1] + 280) |= v526.m128i_i32[0];
              v107 = _mm_cvtsi32_si128(v106[4].m128i_u32[1]);
              s1[0] = &byte_1;
              v108 = _mm_cvtsi32_si128(*(_DWORD *)v528.m128i_i64[0]);
              LODWORD(v527) = *(_DWORD *)v528.m128i_i64[0];
              *(char **)((char *)s1 + 4) = (char *)_mm_unpacklo_epi32(v107, v108).m128i_u64[0];
              v527 = (__m128i *)sub_122CB0((__int64)v106, v105);
              sub_11A960(v529.m128i_i64[0]);
              v35 = (__int64)v527;
              sub_B4460(*(_QWORD **)(a1 + 16), (__int64)v527);
              ++v101;
              v528.m128i_i64[0] += 4;
            }
            while ( "" != v101 );
            break;
          case 0x2C2:
            v160 = v524;
            if ( !v527[1].m128i_i8[0] )
            {
              v264 = v527;
              if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
                sub_3E07C0(v264, v35, v265);
            }
            sub_3F0BC0(a1, 33, v527->m128i_i32[3], v160, 1);
            v35 = 29;
            sub_3F0880(a1, 29);
            break;
          case 0x2CE:
          case 0x2D0:
            goto LABEL_159;
          case 0x2D2:
          case 0x2D4:
          case 0x2D5:
            goto LABEL_103;
          case 0x2EA:
            sub_3F0880(a1, 9);
            sub_3F0810(a1, 20);
            v159 = v524;
            if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
            {
              v256 = v528.m128i_i64[1];
              if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
                sub_3E07C0(v256, 20, v257);
            }
            v35 = 33;
            sub_3F0BC0(a1, 33, *(_DWORD *)(v528.m128i_i64[1] + 12), v159, 1);
            break;
          default:
            goto LABEL_48;
        }
        goto LABEL_48;
      }
      if ( (_WORD)v36 == 595 )
      {
        v56 = v520;
        v57 = get_dtype_size();
        sub_1D3790(a1, 4, v57, v56, 346938453, 8, 0);
        v58 = v523;
        v529.m128i_i64[0] = v520 + 8;
        v59 = get_dtype_size();
        sub_1D3790(a1, 4, v59, v529.m128i_i32[0], 346938453, v58, 0);
        v35 = 32;
        sub_3F0BC0(a1, 32, v519, 0, 1);
        goto LABEL_48;
      }
      if ( (unsigned __int16)v36 > 0x253u )
      {
        if ( (_WORD)v36 != 627 && (_WORD)v36 != 630 )
          goto LABEL_48;
        goto LABEL_103;
      }
      if ( (_WORD)v36 != 458 )
      {
        if ( (unsigned __int16)v36 > 0x1CAu )
        {
          if ( (unsigned __int16)v36 > 0x225u )
          {
            if ( (_WORD)v36 != 569 )
              goto LABEL_48;
          }
          else
          {
            if ( (unsigned __int16)v36 <= 0x1E7u )
              goto LABEL_48;
            v92 = 0x2200000000000001LL;
            LOWORD(v36) = v36 - 488;
            if ( !_bittest64(&v92, v36) )
              goto LABEL_48;
          }
          goto LABEL_159;
        }
        if ( (_WORD)v36 != 456 )
          goto LABEL_48;
      }
      if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
      {
        v262 = v528.m128i_i64[1];
        if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
          sub_3E07C0(v262, v35, v263);
      }
      v531 = 0x400000001LL;
      v532 = *(_DWORD *)(v528.m128i_i64[1] + 12);
      if ( !v527[1].m128i_i8[0] )
      {
        v260 = v527;
        if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
          sub_3E07C0(v260, v35, v261);
      }
      s1[1] = 0;
      v533 = 0x400000001LL;
      LODWORD(v534) = v527->m128i_i32[3];
      s1[0] = (char *)-4294967283LL;
      v529.m128i_i64[0] = (__int64)s1;
      v528.m128i_i64[0] = (__int64)&v531;
      v44 = j__qalloc_or_throw();
      *(__m128i *)v44 = _mm_loadu_si128(xmmword_42F514);
      *(_DWORD *)(v44 + 16) = xmmword_42F514[1].m128i_i32[0];
      s1[1] = (char *)v44;
      v528.m128i_i64[0] = (__int64)&v531;
      HIDWORD(s1[0]) = 4;
      v529.m128i_i64[0] = (__int64)s1;
      sub_1D38D0(a1, 72, (unsigned int)s1, (unsigned int)&v533, (unsigned int)&v531, v45);
      sub_11A960(v529.m128i_i64[0]);
      sub_11A960((__int64)&v533);
      sub_11A960(v528.m128i_i64[0]);
      goto LABEL_51;
    }
    v270 = 1LL << ((unsigned __int8)v37 + 75);
    if ( (v270 & 0x29) == 0 )
    {
      if ( (v270 & 0x52) == 0 )
      {
        if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) )
        {
          if ( !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], v9, v485);
          v11 = *(_QWORD *)(a1 + 832);
        }
        v525 = v11;
        v271 = *(_DWORD *)(v528.m128i_i64[1] + 12);
        v529.m128i_i64[0] = (__int64)s1;
        v526.m128i_i32[0] = get_dtype_size();
        sub_328FE0(s1, v11, v526.m128i_u32[0], 2);
        sub_32BC70(v548, v271, v526.m128i_u32[0], s1);
        v24 = 0;
        clear_tinfo_t();
        LOBYTE(v518) = 0;
        LODWORD(v525) = 0;
        LOBYTE(v516) = 0;
        v526.m128i_i32[0] = 4;
        v522 = "_mm_setcsr";
        LODWORD(v521) = 1;
        goto LABEL_27;
      }
LABEL_254:
      LOBYTE(v518) = sub_3EC430(a1);
      if ( !(_BYTE)v518 )
        goto LABEL_6;
      v167 = *(_WORD *)(a1 + 48);
      v529.m128i_i64[0] = (__int64)&word_4EF7A0;
      if ( v167 != word_4EF7A0 )
      {
        v168 = &word_4EF7A0;
        do
        {
          v169 = v168 + 12;
          v168 = v169;
        }
        while ( *v169 != v167 );
        v529.m128i_i64[0] = (__int64)v169;
      }
      v522 = *(void **)(v529.m128i_i64[0] + 8);
      if ( !v522 )
      {
        v435 = 4;
        if ( *(_DWORD *)(v529.m128i_i64[0] + 20) == 9 )
          v435 = 3;
        v528.m128i_i64[0] = (int)sub_3F02C0(v528.m128i_i64[1]);
        v436 = (int)sub_3F02C0((__int64)v527);
        v511 = sub_3F02C0(v528.m128i_i64[1]);
        sub_3ED260(a1, *(_DWORD *)(v529.m128i_i64[0] + 16), v435, v511, v436, v528.m128i_i64[0], 0);
        goto LABEL_51;
      }
      LODWORD(v525) = *(_DWORD *)(v529.m128i_i64[0] + 20);
      v170 = sub_3F02C0(v528.m128i_i64[1]);
      sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v548, v170, v525);
      v171 = sub_3F02C0((__int64)v527);
      sub_3EC2E0(*(_QWORD *)(a1 + 800), (__int64)v553, v171, v525);
      LODWORD(v521) = 2;
      goto LABEL_261;
    }
LABEL_113:
    v529.m128i_i32[0] = v38;
    LOBYTE(v518) = sub_3EC430(a1);
    if ( !(_BYTE)v518 )
      goto LABEL_6;
    v63 = *(_BYTE *)(a1 + 65);
    v64 = v529.m128i_i32[0];
    if ( v63 != 12 )
    {
      if ( v63 != 1 )
      {
        if ( v63 != 13 )
          goto LABEL_6;
        goto LABEL_117;
      }
      v471 = *(_WORD *)(a1 + 70);
      if ( (unsigned __int16)(v471 - 56) > 7u )
      {
        if ( (unsigned __int16)(v471 - 64) > 0xFu )
          goto LABEL_6;
LABEL_117:
        v65 = &word_4EE900;
        v66 = 0;
        while ( *v65 != *(_WORD *)(a1 + 48) )
        {
          ++v66;
          v65 += 12;
          if ( v66 == 104 )
            goto LABEL_6;
        }
        v522 = (void *)*((_QWORD *)v65 + 1);
        v67 = sub_3F02C0(v528.m128i_i64[1]);
        sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v548, v67, *((_DWORD *)v65 + 4));
        if ( *(_BYTE *)(a1 + 105) != 5 )
        {
          v68 = sub_3F02C0((__int64)v527);
          sub_3EC230(*(_QWORD *)(a1 + 800), (__int64)v553, v68, *((_DWORD *)v65 + 4));
        }
        LODWORD(v525) = *((_DWORD *)v65 + 4);
        goto LABEL_123;
      }
    }
    v402 = &word_4EE780;
    while ( *v402 != *(_WORD *)(a1 + 48) )
    {
      v402 += 12;
      if ( v402 == (__int16 *)&algn_4EE8E4[4] )
      {
        v513 = s;
        qsnprintf();
        v64 = v529.m128i_i32[0];
        v522 = s;
        goto LABEL_687;
      }
    }
    v522 = (void *)*((_QWORD *)v402 + 1);
LABEL_687:
    v529.m128i_i32[0] = v64;
    v403 = sub_3F02C0(v528.m128i_i64[1]);
    sub_3EC180(*(_QWORD *)(a1 + 800), (__int64)v548, v403, -12);
    if ( *(_BYTE *)(a1 + 109) != 7 )
    {
      v404 = v527;
      v405 = sub_3F02C0((__int64)v527);
      sub_1D3CC0(a1, *(unsigned __int8 *)(a1 + 109), 7, v405, v529.m128i_u32[0], 0);
      v406 = v529.m128i_i32[0];
      v527[1].m128i_i8[0] = 1;
      v404->m128i_i32[3] = v406;
    }
    LODWORD(v525) = -12;
    if ( *(_BYTE *)(a1 + 105) == 5 )
    {
LABEL_124:
      v69 = *(char *)(a1 + 109);
      v70 = sub_3F02C0((__int64)v527);
      sub_3E70C0((__int64)v553, *(_QWORD *)(a1 + 832), v70, v69, 2u);
      v71 = *(_BYTE *)(a1 + 65);
      if ( v71 == 13 )
      {
        v72 = v518;
      }
      else
      {
        v72 = 0;
        if ( v71 == 1 )
          v72 = (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu;
      }
      v522 = sub_3E39F0((char *)v522, v72);
      if ( !v522 )
      {
        if ( !under_debugger )
          sub_37EA20(51262);
        goto LABEL_944;
      }
      v24 = 1;
      LOBYTE(v516) = 0;
      v526.m128i_i32[0] = 20;
      LODWORD(v521) = 2;
      v529.m128i_i64[0] = (__int64)s1;
      goto LABEL_27;
    }
    v407 = sub_3F02C0((__int64)v527);
    sub_3EC180(*(_QWORD *)(a1 + 800), (__int64)v553, v407, -12);
    LODWORD(v525) = -12;
LABEL_123:
    LODWORD(v521) = 2;
    if ( *(_BYTE *)(a1 + 105) != 5 )
    {
LABEL_205:
      if ( !v522 )
      {
        v526.m128i_i32[0] = 20;
        v517 = 2;
        goto LABEL_207;
      }
      LOBYTE(v518) = 1;
LABEL_261:
      LOBYTE(v516) = 0;
      v526.m128i_i32[0] = 20;
      v529.m128i_i64[0] = (__int64)s1;
      goto LABEL_93;
    }
    goto LABEL_124;
  }
  v14 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)v14 > 0xE2u )
  {
    if ( (_WORD)v14 != 595 )
      goto LABEL_6;
    sub_3EFC20(a1, (__int64)v548, 21, v528.m128i_i64[1], 128, 0xFFFFFFFF);
    v46 = *(_QWORD *)(a1 + 832);
    v47 = get_dtype_size();
    v529.m128i_i64[0] = (__int64)s1;
    sub_328FE0(s1, v46, v47, 2);
    sub_32BC70(v553, v526.m128i_u32[0], v47, s1);
    clear_tinfo_t();
    s1[0] = (_BYTE *)(&dword_14 + 1);
    copy_tinfo_t();
    clear_tinfo_t();
    v48 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 396LL);
    v49 = *(_QWORD *)(a1 + 832);
    v528.m128i_i32[0] = get_dtype_size();
    sub_328FE0(s1, v49, v528.m128i_u32[0], 2);
    sub_32BC70(v555, v48, v528.m128i_u32[0], s1);
    clear_tinfo_t();
    s1[0] = (_BYTE *)(&dword_14 + 1);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32BCB0((unsigned int)v556, *(_QWORD *)(a1 + 832), v520, 16, 16, 16, 1);
    v526.m128i_i64[0] = (__int64)&s1[1];
    v530 = 21;
    v533 = 0;
    v531 = 0;
    v528.m128i_i64[0] = (__int64)&v531;
    *(_OWORD *)s1 = 0;
    copy_tinfo_t();
    s1[2] = 0;
    copy_tinfo_t();
    LODWORD(v547) = 0;
    WORD2(v547) = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v50 = v528.m128i_i64[1];
    v51 = v520;
    *(_DWORD *)(v528.m128i_i64[1] + 12) = v519;
    *(_BYTE *)(v50 + 16) = 1;
    v52 = get_dtype_size();
    sub_1D3790(a1, 4, v52, 8, 346938453, v51, 0);
    v53 = get_dtype_size();
    sub_1D3790(a1, 4, v53, v523, 346938453, v520 + 8, 0);
    sub_3E6140(v536, a1 + 64, 0);
    LOBYTE(v518) = 1;
    LODWORD(v521) = 4;
    v522 = "_InterlockedCompareExchange128";
    v528.m128i_i32[0] = 0;
    v526.m128i_i32[0] = 4;
    LOBYTE(v516) = 1;
    LODWORD(v525) = 34;
LABEL_93:
    v24 = (unsigned __int8)v518;
    goto LABEL_27;
  }
  if ( (unsigned __int16)v14 > 0xD0u )
  {
    LOWORD(v14) = v14 - 209;
    switch ( v14 )
    {
      case 0LL:
      case 7LL:
        goto LABEL_105;
      case 5LL:
LABEL_129:
        LOBYTE(v518) = a4 > 1u && *(_BYTE *)(a1 + 105) != 1;
        if ( !(_BYTE)v518 )
          goto LABEL_6;
        LODWORD(v525) = 4;
        v528.m128i_i8[0] = 4;
        if ( a4 == 7 )
        {
          LODWORD(v525) = 5;
          v528.m128i_i8[0] = 5;
        }
        sub_3EFC20(a1, (__int64)v548, v525, (__int64)v527, 128, 0xFFFFFFFF);
        if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
          sub_3E07C0(v528.m128i_i64[1], v548, v272);
        v529.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v73 = *(_DWORD *)(v528.m128i_i64[1] + 12);
        v74 = v529.m128i_i64[0];
        v526.m128i_i32[0] = get_dtype_size();
        v529.m128i_i64[0] = (__int64)s1;
        sub_328FE0(s1, v74, v526.m128i_u32[0], 2);
        sub_32BC70(v553, v73, v526.m128i_u32[0], s1);
        clear_tinfo_t();
        s1[0] = (char *)v528.m128i_u8[0];
        copy_tinfo_t();
        clear_tinfo_t();
        v75 = "_InterlockedExchange64";
        if ( a4 != 7 )
          v75 = "_InterlockedExchange";
        v522 = v75;
        sub_3E6140(v536, a1 + 104, 0);
        LOBYTE(v516) = 0;
        v526.m128i_i32[0] = 4;
        v528.m128i_i32[0] = 0;
        LODWORD(v521) = 2;
        goto LABEL_112;
      case 8LL:
        if ( *(_BYTE *)(a1 + 65) == 1 )
          goto LABEL_6;
        v84 = &v557[40];
        *(_QWORD *)&v557[24] = 0;
        *(_QWORD *)&v557[32] = 0;
        memset(v557, 255, 24);
        do
        {
          *(_WORD *)v84 = 0;
          v84 += 40;
          *((_WORD *)v84 - 19) = 0;
          *((_WORD *)v84 - 18) = 0;
          *((_DWORD *)v84 - 2) = 0;
          *((_WORD *)v84 - 17) = 0;
          *((_OWORD *)v84 - 2) = 0;
          *((_QWORD *)v84 - 2) = 0;
        }
        while ( v84 != &v558 );
        v85 = *(_QWORD *)(a1 + 800);
        v86 = a1 + 24;
        v528.m128i_i64[0] = a1 + 24;
        v87 = sub_3E5440(v85, a1 + 24, v557);
        if ( v87 != -1 )
        {
          v86 = *(_QWORD *)&v557[16];
          LOBYTE(v518) = sub_32F4A0(*(_QWORD *)(a1 + 8) + 8LL, *(_QWORD *)&v557[16]);
          if ( (_BYTE)v518 )
          {
            sub_B49C0(*(_QWORD *)(a1 + 8), v87, *(_QWORD *)(a1 + 40));
            v522 = (void *)sub_3E08D0((__int64)s, *(unsigned __int16 *)&v557[24], a4);
            LODWORD(v525) = 19;
            if ( a4 != 1 )
            {
              LODWORD(v525) = 20;
              if ( a4 != 2 )
              {
                LODWORD(v525) = 18;
                if ( a4 )
                  LODWORD(v525) = 21;
              }
            }
            sub_3EFC20(a1, (__int64)v548, v525, v528.m128i_i64[1], 128, 0xFFFFFFFF);
            v526.m128i_i64[0] = (__int64)v559;
            qmemcpy(v559, (const void *)v528.m128i_i64[0], 0x168u);
            v528.m128i_i64[0] = a1 + 24;
            qmemcpy((void *)(a1 + 24), v557, 0x168u);
            v533 = a1;
            v534 = 0xFFFFFFFF00000001LL;
            v535 = 0;
            sub_3EFA20((int *)&v533, 1, 0);
            if ( !v535 && !(unsigned __int8)sub_3F0150((__int64)&v533) )
              sub_3E07C0(&v533, 1, v410);
            v329 = HIDWORD(v534);
            v330 = *(_QWORD *)(a1 + 832);
            LODWORD(v521) = get_dtype_size();
            v529.m128i_i64[0] = (__int64)s1;
            sub_328FE0(s1, v330, (unsigned int)v521, 2);
            sub_32BC70(v553, v329, (unsigned int)v521, s1);
            clear_tinfo_t();
            v331 = v528.m128i_i64[1];
            qmemcpy((void *)v528.m128i_i64[0], (const void *)v526.m128i_i64[0], 0x168u);
            *(_DWORD *)(v528.m128i_i64[1] + 12) = 8;
            *(_BYTE *)(v331 + 16) = 1;
            sub_3E6140(v536, a1 + 64, 0);
            v332 = get_dtype_size();
            v333 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)&v557[46],
                     0.0);
            s1[0] = 0;
            s1[1] = 0;
            sub_63580((__int64 *)v529.m128i_i64[0], v333, v332);
            s1[2] = 0;
            v547 = 0;
            sub_63980(v536, (__int64 *)v529.m128i_i64[0]);
            sub_313730(&v537, &s1[2]);
            if ( s1[2] )
            {
              *(_QWORD *)&v547 = 0;
              qfree();
            }
            qfree();
            v334 = get_dtype_size();
            sub_1D3790(a1, 4, v334, 8, 346938453, v519, 0);
            v24 = 1;
            LOBYTE(v516) = 0;
            v526.m128i_i32[0] = 4;
            v528.m128i_i32[0] = 0;
            LODWORD(v521) = 2;
            goto LABEL_27;
          }
        }
        if ( a4 == 2 )
        {
          LODWORD(v525) = 20;
          v522 = "_InterlockedCompareExchange";
        }
        else if ( a4 > 2u )
        {
          LODWORD(v525) = 21;
          v522 = "_InterlockedCompareExchange64";
          if ( a4 != 7 )
            goto LABEL_6;
        }
        else
        {
          LODWORD(v525) = 18;
          v522 = "_InterlockedCompareExchange8";
          if ( a4 )
          {
            LODWORD(v525) = 19;
            v522 = "_InterlockedCompareExchange16";
          }
        }
        if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
          sub_3E07C0(v527, v86, v274);
        v88 = v527->m128i_i32[3];
        v529.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v528.m128i_i32[0] = v88;
        v89 = get_dtype_size();
        v90 = v529.m128i_i64[0];
        v529.m128i_i64[0] = (__int64)s1;
        sub_328FE0(s1, v90, v89, 2);
        sub_32BC70(v553, v528.m128i_u32[0], v89, s1);
        clear_tinfo_t();
        v91 = *(_QWORD *)(a1 + 832);
        v528.m128i_i32[0] = get_dtype_size();
        sub_328FE0(s1, v91, v528.m128i_u32[0], 2);
        sub_32BC70(v555, 8, v528.m128i_u32[0], s1);
        clear_tinfo_t();
LABEL_137:
        v77 = get_dtype_size();
        sub_1D3790(a1, 4, v77, 8, 346938453, v519, 0);
        sub_3EFC20(a1, (__int64)v548, v525, v528.m128i_i64[1], 128, 0xFFFFFFFF);
        s1[0] = (char *)(int)v525;
        copy_tinfo_t();
        clear_tinfo_t();
        s1[0] = (char *)(int)v525;
        copy_tinfo_t();
        clear_tinfo_t();
        v78 = v528.m128i_i64[1];
        *(_DWORD *)(v528.m128i_i64[1] + 12) = 8;
        *(_BYTE *)(v78 + 16) = 1;
        sub_3E6140(v536, a1 + 64, 0);
        LOBYTE(v516) = 1;
        v526.m128i_i32[0] = 4;
        v528.m128i_i32[0] = 0;
        LODWORD(v521) = 3;
        LOBYTE(v518) = 1;
        break;
      case 10LL:
        v529.m128i_i32[0] = a4;
        v522 = (void *)sub_3E08D0((__int64)s, 219, a4);
        LODWORD(v525) = 19;
        if ( a4 != 1 )
        {
          LODWORD(v525) = 20;
          if ( a4 != 2 )
            LODWORD(v525) = a4 == 0 ? 18 : 21;
        }
        if ( *(_BYTE *)(a1 + 65) == 1 )
        {
          v255 = get_dtype_size();
          if ( !*(_BYTE *)(v528.m128i_i64[1] + 16) && !(unsigned __int8)sub_3F0150(v528.m128i_i64[1]) )
            sub_3E07C0(v528.m128i_i64[1], 219, v275);
          v79 = *(unsigned __int8 **)(a1 + 832);
          sub_32BCB0((unsigned int)v548, (_DWORD)v79, *(_DWORD *)(v528.m128i_i64[1] + 12), v255, v255, v255, 1);
        }
        else
        {
          v79 = v548;
          sub_3EFC20(a1, (__int64)v548, v525, v528.m128i_i64[1], 128, 0xFFFFFFFF);
        }
        if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
          sub_3E07C0(v527, v79, v254);
        v80 = *(_QWORD *)(a1 + 832);
        v81 = v527->m128i_u32[3];
        v529.m128i_i64[0] = (__int64)s1;
        v528.m128i_i32[0] = get_dtype_size();
        sub_328FE0(s1, v80, v528.m128i_u32[0], 2);
        sub_32BC70(v553, v81, v528.m128i_u32[0], s1);
        clear_tinfo_t();
        v82 = v528.m128i_i64[1];
        v83 = v527;
        *(__m128i *)v528.m128i_i64[1] = _mm_loadu_si128(v527);
        *(_BYTE *)(v82 + 16) = v83[1].m128i_i8[0];
        sub_3E6140(v536, a1 + 64, 0);
        sub_3EC3A0(a1);
        goto LABEL_111;
      case 17LL:
        sub_122DA0((__int64)v553, v9[99], v526.m128i_i32[0], 4);
        s1[0] = (_BYTE *)(&dword_14 + 1);
        copy_tinfo_t();
        v529.m128i_i64[0] = (__int64)s1;
        clear_tinfo_t();
        v528.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v76 = get_dtype_size();
        sub_328FE0(s1, v528.m128i_i64[0], v76, 2);
        sub_32BC70(v555, 8, v76, s1);
        clear_tinfo_t();
        LODWORD(v525) = 21;
        v522 = "_InterlockedCompareExchange64";
        goto LABEL_137;
      default:
        goto LABEL_6;
    }
    goto LABEL_112;
  }
  if ( (unsigned __int16)v14 <= 0x2Cu )
  {
    if ( (unsigned __int16)v14 > 5u )
    {
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 6:
          LOBYTE(v518) = equal_bytes();
          if ( !(_BYTE)v518 )
            goto LABEL_105;
          LOBYTE(v530) = 3;
          netnode_supset();
          LOBYTE(v531) = 3;
          netnode_supset();
          sub_3EFC20(a1, (__int64)v548, 21, v528.m128i_i64[1], 128, 0xFFFFFFFF);
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v548, v273);
          v113 = *(_QWORD *)(a1 + 832);
          v114 = v527->m128i_u32[3];
          v529.m128i_i64[0] = (__int64)s1;
          v528.m128i_i32[0] = get_dtype_size();
          sub_328FE0(s1, v113, v528.m128i_u32[0], 2);
          sub_32BC70(v553, v114, v528.m128i_u32[0], s1);
          clear_tinfo_t();
          v115 = v528.m128i_i64[1];
          *(_DWORD *)(v528.m128i_i64[1] + 12) = 8;
          *(_BYTE *)(v115 + 16) = 1;
          sub_3E6140(v536, a1 + 64, 0);
          LODWORD(v521) = 2;
          v522 = "_InterlockedAddLargeStatistic";
          v528.m128i_i32[0] = 0;
          v526.m128i_i32[0] = 4;
          LOBYTE(v516) = 0;
          LODWORD(v525) = 20;
          goto LABEL_93;
        case 7:
          goto LABEL_105;
        case 0xE:
        case 0xF:
          if ( *(_BYTE *)(a1 + 65) == 1 )
            goto LABEL_6;
          v93 = (void *)sub_3E08D0((__int64)s, (unsigned __int16)v14, a4);
          v94 = *(_WORD *)(a1 + 48) == 14;
          v522 = v93;
          v528.m128i_i32[0] = 20;
          if ( v94 )
            v528.m128i_i32[0] = 21;
          v95 = (unsigned __int64)v548;
          sub_3EFC20(a1, (__int64)v548, 20, v528.m128i_i64[1], 128, 0xFFFFFFFF);
          v96 = *(_BYTE *)(a1 + 109);
          if ( v96 < a4 )
          {
            if ( v527[1].m128i_i8[0] )
            {
              v97 = v527->m128i_u32[3];
              v529.m128i_i32[0] = v527->m128i_i32[3];
            }
            else
            {
              if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
                sub_3E07C0(v527, v548, v279);
              v94 = v527[1].m128i_i8[0] == 0;
              v529.m128i_i32[0] = v527->m128i_i32[3];
              if ( v94 )
              {
                if ( !(unsigned __int8)sub_3F0150((__int64)v527) )
                  sub_3E07C0(v527, v548, v280);
                v96 = *(_BYTE *)(a1 + 109);
                v97 = v527->m128i_u32[3];
              }
              else
              {
                v96 = *(_BYTE *)(a1 + 109);
                v97 = v529.m128i_u32[0];
              }
            }
            v95 = v96;
            sub_1D3CC0(a1, v96, a4, v97, v529.m128i_u32[0], 0);
          }
          if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
            sub_3E07C0(v527, v95, v269);
          v98 = v527->m128i_i32[3];
          v525 = *(_QWORD *)(a1 + 832);
          v526.m128i_i32[0] = v98;
          v99 = get_dtype_size();
          v529.m128i_i64[0] = (__int64)s1;
          sub_328FE0(s1, v525, v99, 2);
          sub_32BC70(v553, v526.m128i_u32[0], v99, s1);
          clear_tinfo_t();
          v100 = v528.m128i_i64[1];
          *(_DWORD *)(v528.m128i_i64[1] + 12) = 0;
          *(_BYTE *)(v100 + 16) = 1;
          sub_3E6140(v536, a1 + 64, 0);
          LODWORD(v525) = 18;
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 4;
          LODWORD(v521) = 2;
          LOBYTE(v518) = 1;
          goto LABEL_112;
        case 0x22:
        case 0x2C:
          if ( *(_BYTE *)(a1 + 65) == 1 )
            goto LABEL_6;
          v522 = (void *)sub_3E08D0((__int64)s, (unsigned __int16)v14, a4);
          LODWORD(v525) = 19;
          if ( a4 != 1 )
          {
            LODWORD(v525) = 20;
            if ( a4 != 2 )
              LODWORD(v525) = a4 == 0 ? 18 : 21;
          }
          sub_3EFC20(a1, (__int64)v548, v525, v528.m128i_i64[1], 128, 0xFFFFFFFF);
          sub_3E6140(v536, a1 + 64, 0);
          LOBYTE(v516) = 0;
          v526.m128i_i32[0] = 4;
          v528.m128i_i32[0] = 0;
          LODWORD(v521) = 1;
          LOBYTE(v518) = 1;
          v529.m128i_i64[0] = (__int64)s1;
          goto LABEL_112;
        default:
          goto LABEL_6;
      }
    }
    goto LABEL_6;
  }
  if ( (_WORD)v14 == 131 )
  {
LABEL_105:
    if ( *(_BYTE *)(a1 + 65) == 1 )
      goto LABEL_6;
    v60 = *(unsigned __int16 *)(a1 + 48);
    v529.m128i_i32[0] = a4;
    v522 = (void *)sub_3E08D0((__int64)s, v60, a4);
    LODWORD(v525) = 19;
    if ( a4 != 1 )
    {
      LODWORD(v525) = 20;
      if ( a4 != 2 )
        LODWORD(v525) = a4 == 0 ? 18 : 21;
    }
    sub_3EFC20(a1, (__int64)v548, v525, v528.m128i_i64[1], 128, 0xFFFFFFFF);
    if ( !v527[1].m128i_i8[0] && !(unsigned __int8)sub_3F0150((__int64)v527) )
      sub_3E07C0(v527, v548, v266);
    v61 = *(_QWORD *)(a1 + 832);
    v62 = v527->m128i_u32[3];
    v529.m128i_i64[0] = (__int64)s1;
    v528.m128i_i32[0] = get_dtype_size();
    sub_328FE0(s1, v61, v528.m128i_u32[0], 2);
    sub_32BC70(v553, v62, v528.m128i_u32[0], s1);
    clear_tinfo_t();
    sub_3E6140(v536, a1 + 64, 0);
LABEL_111:
    LOBYTE(v516) = 0;
    v526.m128i_i32[0] = 4;
    v528.m128i_i32[0] = 0;
    LODWORD(v521) = 2;
    LOBYTE(v518) = 1;
LABEL_112:
    v24 = (unsigned __int8)v518;
    v514 = *(_QWORD *)(a1 + 8);
    goto LABEL_28;
  }
LABEL_6:
  v12 = 0;
LABEL_7:
  qfree();
  do
  {
LABEL_8:
    v5 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v5 + 4) )
    {
      *((_QWORD *)v5 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11A960((__int64)v5);
  }
  while ( v5 != v548 );
  if ( v544 )
  {
    v545.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( src )
  {
    *(_QWORD *)&v541 = 0;
    qfree();
  }
  qfree();
  if ( v537 )
  {
    v538.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v12;
}
