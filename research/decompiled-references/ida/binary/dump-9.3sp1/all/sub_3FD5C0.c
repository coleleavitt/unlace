__int64 __fastcall sub_3FD5C0(__int64 a1, __int64 a2, const __m128i *a3, unsigned __int8 a4)
{
  __m128i v4; // xmm0
  unsigned __int8 *v6; // r13
  __m128 si128; // xmm1
  unsigned __int8 *v9; // rax
  _DWORD *v10; // r14
  int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rcx
  void *v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // rdi
  __int64 v18; // rax
  __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v21; // r14
  unsigned int dtype_size; // ebx
  __m128i v23; // xmm5
  unsigned int v24; // eax
  __int64 v25; // r14
  unsigned int v26; // ebx
  int v27; // ebx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rsi
  _DWORD *v41; // rsi
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int32 v44; // r8d
  __m128i v45; // xmm3
  __int64 v46; // rcx
  int v47; // eax
  unsigned __int8 v48; // bl
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r14
  unsigned int v52; // ebx
  __int64 v53; // r14
  int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rbx
  int v57; // eax
  int v58; // eax
  __int64 v59; // rbx
  int v60; // eax
  __int64 v61; // rbx
  int v62; // eax
  int v63; // esi
  __int64 v64; // r14
  int v65; // ebx
  char v66; // al
  __int32 v67; // r8d
  __int16 *v68; // rbx
  int v69; // eax
  int v70; // eax
  __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  unsigned int v75; // ebx
  int v76; // eax
  char v77; // dl
  char v78; // al
  int v79; // r14d
  __int64 v80; // rsi
  char *v81; // rax
  unsigned int v82; // r14d
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // r14
  int v86; // ebx
  __int64 v87; // rcx
  __m128i *v88; // roff
  char *v89; // rax
  __int64 v90; // rdi
  unsigned __int64 v91; // r14
  __int32 v92; // eax
  unsigned int v93; // r14d
  __int64 v94; // rsi
  __int64 v95; // r14
  __int64 v96; // rdx
  void *v97; // rax
  bool v98; // zf
  unsigned __int8 v99; // al
  int v100; // ecx
  __int32 v101; // eax
  unsigned int v102; // ebx
  __int64 v103; // rax
  const char *v104; // rbx
  char v105; // al
  __int64 v106; // rdi
  __int64 v107; // rsi
  const __m128i *v108; // rdx
  __int64 v109; // rcx
  unsigned __int8 *v110; // rsi
  const __m128i *v111; // rdi
  __m128i v112; // xmm7
  __int64 v113; // rbx
  int v114; // eax
  int v115; // ebx
  int v116; // ebx
  __int64 v117; // r14
  int v118; // ebx
  __int64 v119; // rax
  __int64 v120; // rbx
  __int64 v121; // r8
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  __int64 v126; // rcx
  __int16 v127; // ax
  _WORD *v128; // rdx
  unsigned int v129; // ebx
  int v130; // esi
  int v131; // eax
  __int64 v132; // roff
  __int64 v133; // rsi
  unsigned int v134; // eax
  char *v135; // rax
  char v136; // cl
  char v137; // dl
  int v138; // ebx
  int v139; // eax
  int v140; // ebx
  int v141; // eax
  __int16 *v142; // rbx
  __int16 i; // ax
  __int64 v144; // rdx
  __int64 v145; // rsi
  __int64 v146; // r8
  int v147; // r14d
  int v148; // eax
  int v149; // eax
  unsigned int v150; // r14d
  int v151; // eax
  int v152; // eax
  __int16 v153; // ax
  int v154; // eax
  __int64 v155; // rbx
  __int64 v156; // rbx
  __int64 v157; // rcx
  unsigned __int8 *v158; // rsi
  int v159; // eax
  __int64 v160; // rdx
  _QWORD *v161; // rbx
  unsigned int v162; // ebx
  unsigned int v163; // ebx
  char v164; // al
  __int16 v165; // ax
  __int16 *v166; // rbx
  __int16 j; // ax
  int v168; // eax
  int v169; // eax
  __int16 v170; // ax
  __int16 *v171; // rdx
  __int16 *v172; // rcx
  int v173; // eax
  int v174; // eax
  _WORD *v175; // rdx
  __int16 v176; // ax
  __int64 v177; // rbx
  unsigned __int8 *v178; // r14
  __int64 v179; // rsi
  __int64 v180; // rdx
  int v181; // eax
  __m128i v182; // xmm1
  char *v183; // xmm0_8
  __int64 v184; // rax
  unsigned int v185; // eax
  char v186; // al
  char v187; // al
  char v188; // al
  __int16 v189; // ax
  __int16 *v190; // r14
  char v191; // dl
  int v192; // eax
  char v193; // al
  int v194; // eax
  __int16 v195; // ax
  int v196; // eax
  int v197; // ebx
  __int16 v198; // ax
  __int16 *v199; // rdx
  __int16 *v200; // r14
  int v201; // ebx
  int v202; // eax
  int v203; // eax
  __int64 v204; // rax
  int v205; // esi
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rdx
  __int64 v209; // rcx
  __int32 v210; // eax
  unsigned int v211; // r14d
  __int64 v212; // rax
  char *v213; // r14
  int v214; // eax
  __int32 v215; // eax
  __int64 v216; // rax
  char *v217; // rax
  __int16 v218; // dx
  __int16 *v219; // rax
  void *v220; // rcx
  int v221; // ebx
  int v222; // eax
  int v223; // ebx
  int v224; // eax
  unsigned int v225; // ebx
  int v226; // eax
  unsigned __int64 v227; // rdx
  __int16 v228; // ax
  char *v229; // rax
  int v230; // eax
  unsigned int v231; // ebx
  __int64 v232; // r14
  int v233; // eax
  int v234; // eax
  _QWORD *v235; // rbx
  unsigned __int8 v236; // al
  __int64 v237; // rax
  int v238; // eax
  __int64 v239; // rcx
  int v240; // eax
  int v241; // ebx
  int v242; // eax
  char *v243; // rax
  unsigned int v244; // ebx
  __int16 v245; // ax
  unsigned __int64 v246; // rdx
  char v247; // al
  char v248; // al
  unsigned __int8 v249; // bl
  unsigned int v250; // r14d
  __int64 v251; // rbx
  int v252; // eax
  __int64 v253; // rax
  int v254; // ebx
  __int64 v255; // rbx
  unsigned __int8 v256; // al
  char *v257; // rax
  __int64 v258; // r14
  unsigned int v259; // ebx
  __int64 v260; // r14
  unsigned int v261; // ebx
  unsigned int v262; // ebx
  char v263; // al
  char *v264; // rax
  int v265; // eax
  unsigned int v266; // ebx
  int v267; // eax
  __int64 v268; // rsi
  __m128i v269; // xmm0
  char *v270; // xmm0_8
  __m128i v271; // xmm2
  char v272; // al
  char v273; // al
  __int64 v274; // rbx
  unsigned __int8 v275; // al
  __int64 v276; // r14
  unsigned int v277; // ebx
  __int64 v278; // r14
  unsigned int v279; // ebx
  __int64 v280; // rbx
  unsigned int v281; // ebx
  char v282; // al
  int v283; // ecx
  int v284; // ebx
  __int64 v285; // r14
  int v286; // ebx
  unsigned __int8 v287; // al
  char *v288; // rax
  unsigned int v289; // ebx
  __int64 v290; // r14
  unsigned int v291; // ebx
  char v292; // al
  char v293; // al
  __int64 v294; // rax
  unsigned __int64 v295; // rbx
  unsigned __int64 v296; // r14
  __int64 v297; // rdx
  __int64 v298; // rcx
  __int64 v299; // rax
  unsigned __int64 v300; // rdx
  __int64 v301; // rdx
  __int64 v302; // rcx
  int v303; // r14d
  int v304; // eax
  __int16 v305; // ax
  int v306; // eax
  int v307; // ebx
  __int64 v308; // rsi
  __int64 v309; // rax
  int v310; // ebx
  int v311; // eax
  __int64 v312; // rdx
  __int64 v313; // rcx
  int v314; // eax
  unsigned int v315; // ebx
  unsigned int v316; // r14d
  __m128i *v317; // r14
  unsigned int v318; // ebx
  int tinfo_size; // eax
  __int64 v320; // roff
  __int64 v321; // rax
  char *v322; // rbx
  char *v323; // rax
  __int64 v324; // rax
  int v325; // eax
  int v326; // eax
  __int64 v327; // r14
  int v328; // ebx
  __int64 v329; // rax
  __int64 v330; // rax
  char *v331; // rax
  int v332; // ebx
  int v333; // eax
  int v334; // ebx
  int v335; // eax
  __int64 v336; // r14
  unsigned int v337; // ebx
  __int64 v338; // r14
  unsigned int v339; // ebx
  __int64 v340; // rax
  int v341; // r14d
  __int64 v342; // r14
  unsigned int v343; // ebx
  __int64 v344; // rbx
  int v345; // eax
  int v346; // eax
  int v347; // r14d
  __int64 v348; // rbx
  unsigned __int8 v349; // al
  __int64 v350; // rbx
  unsigned __int8 v351; // al
  unsigned __int8 v352; // cl
  char v353; // al
  char v354; // al
  int v355; // eax
  char *v356; // rax
  __int64 v357; // rbx
  unsigned __int8 v358; // al
  int v359; // eax
  int v360; // eax
  unsigned int v361; // ebx
  char v362; // al
  char v363; // al
  int v364; // eax
  char *v365; // rax
  int v366; // ecx
  int v367; // r14d
  __int64 v368; // r14
  char v369; // dl
  int v370; // edx
  int v371; // eax
  __int16 *v372; // rdx
  int v373; // eax
  __m128i *v374; // rbx
  int v375; // eax
  __int32 v376; // r8d
  int v377; // eax
  int v378; // eax
  int v379; // eax
  int v380; // eax
  int v381; // ebx
  int v382; // eax
  char v383; // bl
  int v384; // r14d
  int v385; // eax
  int v386; // eax
  unsigned int v387; // ebx
  int v388; // eax
  unsigned __int8 v389; // bl
  __int64 v390; // r14
  int v391; // r14d
  unsigned __int8 dtype_by_size; // al
  __int64 v393; // rbx
  unsigned __int64 v394; // rdx
  __int16 v395; // ax
  unsigned int v396; // ebx
  __int64 v397; // rdx
  __int64 v398; // rcx
  unsigned __int64 v399; // rbx
  __m128i v400; // xmm0
  __int64 v401; // rax
  int v402; // edx
  int v403; // esi
  __int64 v404; // rdx
  __int64 v405; // rcx
  __int64 v406; // rdx
  __int64 v407; // rcx
  int v408; // esi
  __int64 v409; // rdx
  __int64 v410; // rcx
  int v411; // esi
  __int64 v412; // rdx
  __int64 v413; // rcx
  int v414; // esi
  __int64 v415; // rdx
  __int64 v416; // rcx
  __int16 v417; // ax
  char v418; // dl
  __int64 v419; // rax
  __int32 v420; // r9d
  unsigned int v421; // eax
  int v422; // eax
  int v423; // eax
  __int32 v424; // eax
  __int64 v425; // rax
  __int64 v426; // rax
  __m128i *v427; // rbx
  int v428; // eax
  __int16 v429; // ax
  __int64 tinfo_property; // rax
  int v431; // r14d
  int v432; // r14d
  int v433; // eax
  __int64 v434; // rax
  int v435; // eax
  char v436; // al
  __int64 v437; // rax
  __int16 v438; // ax
  int v439; // eax
  int v440; // eax
  __int64 v441; // rax
  int v442; // eax
  __int16 v443; // ax
  int v444; // eax
  int v445; // eax
  __m128i *v446; // rax
  char v447; // dl
  int v448; // eax
  int v449; // eax
  unsigned int v450; // [rsp-8h] [rbp-5F8h]
  int v451; // [rsp-8h] [rbp-5F8h]
  int v452; // [rsp-8h] [rbp-5F8h]
  __int64 v453; // [rsp+0h] [rbp-5F0h]
  char v454; // [rsp+8h] [rbp-5E8h]
  int v455; // [rsp+8h] [rbp-5E8h]
  unsigned int v456; // [rsp+Ch] [rbp-5E4h]
  __int64 v457; // [rsp+10h] [rbp-5E0h] BYREF
  int v458; // [rsp+18h] [rbp-5D8h]
  int v459; // [rsp+1Ch] [rbp-5D4h]
  char *v460; // [rsp+20h] [rbp-5D0h]
  void *v461; // [rsp+28h] [rbp-5C8h]
  int v462; // [rsp+30h] [rbp-5C0h]
  unsigned __int8 v463; // [rsp+37h] [rbp-5B9h]
  __int64 v464; // [rsp+38h] [rbp-5B8h]
  __m128i v465; // [rsp+40h] [rbp-5B0h] BYREF
  __m128i *v466; // [rsp+50h] [rbp-5A0h]
  __m128i v467; // [rsp+58h] [rbp-598h] BYREF
  __m128i v468; // [rsp+68h] [rbp-588h] BYREF
  __int64 v469; // [rsp+78h] [rbp-578h]
  __int64 v470; // [rsp+80h] [rbp-570h] BYREF
  int v471; // [rsp+88h] [rbp-568h]
  __int64 v472; // [rsp+90h] [rbp-560h] BYREF
  unsigned __int64 v473; // [rsp+98h] [rbp-558h]
  char v474; // [rsp+A0h] [rbp-550h]
  __int64 v475[2]; // [rsp+B0h] [rbp-540h] BYREF
  __int64 *v476; // [rsp+C0h] [rbp-530h] BYREF
  __m128i v477; // [rsp+C8h] [rbp-528h]
  __int64 v478[2]; // [rsp+E0h] [rbp-510h] BYREF
  void *src; // [rsp+F0h] [rbp-500h] BYREF
  __int128 v480; // [rsp+F8h] [rbp-4F8h]
  __int64 v481; // [rsp+110h] [rbp-4E0h] BYREF
  __int64 v482; // [rsp+118h] [rbp-4D8h]
  __int64 v483; // [rsp+120h] [rbp-4D0h] BYREF
  __m128i v484; // [rsp+128h] [rbp-4C8h] BYREF
  char *s1[3]; // [rsp+140h] [rbp-4B0h] BYREF
  __int128 v486; // [rsp+158h] [rbp-498h]
  unsigned __int8 v487[4]; // [rsp+170h] [rbp-480h] BYREF
  unsigned int v488; // [rsp+174h] [rbp-47Ch]
  __int64 v489; // [rsp+178h] [rbp-478h]
  __int64 v490; // [rsp+180h] [rbp-470h]
  __int64 v491; // [rsp+188h] [rbp-468h]
  char v492[4]; // [rsp+1C0h] [rbp-430h] BYREF
  __int64 v493; // [rsp+1C4h] [rbp-42Ch]
  char v494[24]; // [rsp+210h] [rbp-3E0h] BYREF
  _BYTE v495[24]; // [rsp+260h] [rbp-390h] BYREF
  _BYTE v496[360]; // [rsp+2B0h] [rbp-340h] BYREF
  char v497; // [rsp+418h] [rbp-1D8h] BYREF
  char v498[368]; // [rsp+420h] [rbp-1D0h] BYREF
  char s[31]; // [rsp+590h] [rbp-60h] BYREF
  char v500; // [rsp+5AFh] [rbp-41h] BYREF
  unsigned __int64 v501; // [rsp+5B8h] [rbp-38h]

  v4.m128i_i64[0] = 0;
  v6 = v496;
  v467.m128i_i64[1] = a2;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v466 = (__m128i *)a3;
  v463 = a4;
  v501 = __readfsqword(0x28u);
  v477 = 0;
  v9 = v487;
  v475[0] = 0;
  v475[1] = 0;
  v476 = nullptr;
  v478[0] = 0;
  v478[1] = 0;
  src = nullptr;
  v481 = 0;
  v482 = 0;
  v483 = 0;
  v480 = 0;
  v484 = 0;
  do
  {
    *((_DWORD *)v9 + 1) = -1;
    v9 += 80;
    *((_WORD *)v9 - 40) = 0;
    *((_WORD *)v9 - 39) = 0;
    *((_QWORD *)v9 - 9) = 0;
    *((__m128 *)v9 - 4) = si128;
    *((_QWORD *)v9 - 6) = 0;
    *(_OWORD *)(v9 - 40) = 0;
    *((_DWORD *)v9 - 6) = 0;
    *((_QWORD *)v9 - 2) = 0;
    *((_DWORD *)v9 - 2) = 0;
  }
  while ( v9 != v496 );
  v10 = *(_DWORD **)(a1 + 832);
  v11 = v10[113];
  v12 = (__int64)v10;
  v467.m128i_i32[0] = *(_DWORD *)(a1 + 52) & 7;
  v459 = v11;
  v458 = v10[116];
  v465.m128i_i32[0] = v10[97];
  v13 = (unsigned int)v10[95];
  v462 = v10[95];
  if ( v467.m128i_i32[0] == 2 )
  {
    v19 = *(_WORD *)(a1 + 48);
    if ( v19 == 45 )
    {
      v46 = v467.m128i_i64[1];
      v47 = v10[101];
      *(_BYTE *)(v467.m128i_i64[1] + 16) = 1;
      *(_DWORD *)(v46 + 12) = v47;
    }
    else
    {
      if ( v19 != 133 )
        goto LABEL_6;
      v20 = v467.m128i_i64[1];
      *(_DWORD *)(v467.m128i_i64[1] + 12) = v10[102];
      *(_BYTE *)(v20 + 16) = 1;
      v463 = *(_BYTE *)(a1 + 109);
    }
    if ( v463 > 2u && v463 != 7 )
      goto LABEL_6;
    qsnprintf();
    v21 = *(_QWORD *)(a1 + 832);
    dtype_size = get_dtype_size();
    v468.m128i_i64[0] = (__int64)s1;
    sub_32C430((__int64 *)s1, v21, dtype_size, 2);
    sub_32F0D0((__int64)v487, v462, dtype_size);
    clear_tinfo_t();
    v4 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL));
    if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) )
    {
      v467.m128i_i32[0] = _mm_cvtsi128_si32(v4);
      v248 = sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128);
      v4 = _mm_cvtsi32_si128(v467.m128i_u32[0]);
      if ( !v248 )
        sub_3EB430(*(double *)v4.m128i_i64);
    }
    v492[0] = 1;
    v23 = _mm_cvtsi32_si128(*(_DWORD *)(v467.m128i_i64[1] + 12));
    v467.m128i_i32[0] = *(_DWORD *)(v467.m128i_i64[1] + 12);
    v4.m128i_i64[0] = _mm_unpacklo_epi32(v4, v23).m128i_u64[0];
    v493 = v4.m128i_i64[0];
    v24 = get_dtype_size();
    sub_32C430(&v472, *(_QWORD *)(a1 + 832), v24, 2);
    sub_32C540(v468.m128i_i64[0], *(_QWORD *)(a1 + 832), &v472);
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v25 = *(_QWORD *)(a1 + 832);
    v26 = get_dtype_size();
    sub_32C430((__int64 *)v468.m128i_i64[0], v25, v26, 2);
    sub_32F0D0((__int64)v494, v465.m128i_i32[0], v26);
    v27 = 0;
    v14 = nullptr;
    clear_tinfo_t();
    LOBYTE(v457) = 0;
    LODWORD(v464) = 0;
    v454 = 1;
    v465.m128i_i32[0] = 4;
    v467.m128i_i32[0] = 0;
    v461 = s;
    v456 = 0;
    LODWORD(v460) = 3;
LABEL_27:
    v453 = *(_QWORD *)(a1 + 8);
    if ( (int)v464 < 0 )
    {
      s1[0] = nullptr;
      copy_tinfo_t();
LABEL_29:
      v28 = sub_335B10(v453, *(_QWORD *)(a1 + 40), (__int64)v461, v468.m128i_i64[0], (int)v460, (__int64)v487, v27);
      clear_tinfo_t();
      *(_DWORD *)(*(_QWORD *)(v28 + 72) + 284LL) = v467.m128i_i32[0];
      *(_DWORD *)(*(_QWORD *)(v28 + 72) + 280LL) |= v465.m128i_i32[0];
      if ( !(unsigned __int8)sub_64880(v475) || v477.m128i_i64[0] )
      {
        if ( !(unsigned __int8)sub_64880(&v481) || v484.m128i_i64[0] )
          **(_DWORD **)(a1 + 8) |= 0x40u;
        v31 = (__int64 *)(*(_QWORD *)(v28 + 72) + 136LL);
        v467.m128i_i64[0] = *(_QWORD *)(v28 + 72);
        sub_64280(v31, v475);
        sub_316CB0((__int64 *)(v467.m128i_i64[0] + 152), &v476, v467.m128i_i64[0], v32);
        sub_316CB0((__int64 *)(*(_QWORD *)(v28 + 72) + 216LL), &v476, *(_QWORD *)(v28 + 72), v33);
        v34 = *(_QWORD *)(v28 + 72);
        si128 = (__m128)_mm_loadu_si128(&v484);
        v35 = *(_QWORD *)(v34 + 176);
        *(_QWORD *)(v34 + 176) = v481;
        v36 = v482;
        v4 = _mm_loadu_si128((const __m128i *)(v34 + 200));
        *(__m128 *)(v34 + 200) = si128;
        v481 = v35;
        v37 = *(_QWORD *)(v34 + 184);
        *(_QWORD *)(v34 + 184) = v36;
        v30 = v483;
        v482 = v37;
        v29 = *(_QWORD *)(v34 + 192);
        *(_QWORD *)(v34 + 192) = v483;
        v483 = v29;
        v484 = v4;
      }
      sub_316CB0((__int64 *)(*(_QWORD *)(v28 + 72) + 216LL), (__int64 **)&src, v29, v30);
      if ( v454 )
        *(_DWORD *)(v28 + 4) |= 0x80000u;
      if ( (_BYTE)v457 )
      {
        if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
          && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
        {
          sub_3EB430(*(double *)v4.m128i_i64);
        }
        v4 = _mm_cvtsi32_si128(*(_DWORD *)(v28 + 68));
        s1[0] = &byte_1;
        v45 = _mm_cvtsi32_si128(*(_DWORD *)(v467.m128i_i64[1] + 12));
        v467.m128i_i32[0] = *(_DWORD *)(v467.m128i_i64[1] + 12);
        v4.m128i_i64[0] = _mm_unpacklo_epi32(v4, v45).m128i_u64[0];
        *(__int64 *)((char *)s1 + 4) = v4.m128i_i64[0];
        v28 = (__int64)sub_125260(v28, (unsigned __int8 *)v468.m128i_i64[0], v38, v39);
        sub_11CDA0(v468.m128i_i64[0]);
      }
      goto LABEL_37;
    }
LABEL_28:
    s1[0] = (char *)(unsigned __int8)v464;
    goto LABEL_29;
  }
  if ( v467.m128i_i32[0] != 1 )
  {
    if ( v467.m128i_i32[0] )
      goto LABEL_6;
    v43 = *(unsigned __int16 *)(a1 + 48);
    v44 = v10[114];
    if ( (unsigned __int16)v43 > 0x708u )
      goto LABEL_6;
    if ( (unsigned __int16)v43 > 0x1BBu )
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
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          v282 = *(_BYTE *)(a1 + 65);
          if ( (v282 == 13 || v282 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu)
            && (v436 = *(_BYTE *)(a1 + 105), v436 != 13) )
          {
            if ( v436 == 1 )
              LOBYTE(v457) = (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu;
          }
          else
          {
            LOBYTE(v457) = 0;
          }
          v98 = *(_WORD *)(a1 + 48) == 450;
          LODWORD(v464) = 0;
          v465.m128i_i32[0] = 20;
          v455 = 67;
          v456 = 2;
          LODWORD(v460) = 0;
          if ( !v98 )
            goto LABEL_506;
          LOBYTE(v461) = 3;
          v463 = 3;
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
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v317 = v466;
          s1[0] = byte_9;
          v468.m128i_i64[0] = (__int64)s1;
          v318 = v466->m128i_u32[3];
          tinfo_size = get_tinfo_size();
          v71 = v318;
          v468.m128i_i64[0] = (__int64)s1;
          sub_32F0D0((__int64)v487, v318, tinfo_size);
          clear_tinfo_t();
          LODWORD(v464) = 0;
          v465.m128i_i32[0] = 20;
          v456 = 2;
          v320 = v467.m128i_i64[1];
          LODWORD(v460) = 0;
          *v466 = _mm_loadu_si128((const __m128i *)v467.m128i_i64[1]);
          v317[1].m128i_i8[0] = *(_BYTE *)(v320 + 16);
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
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          v142 = &word_4F0700;
          if ( *(_BYTE *)(a1 + 69) != 7 )
            v142 = &word_4F0740;
          for ( i = *(_WORD *)(a1 + 48); *v142 != i; v142 += 12 )
            ;
          v144 = *(_QWORD *)(a1 + 152);
          v145 = *(_QWORD *)(a1 + 832);
          v146 = *(_QWORD *)(a1 + 40);
          v461 = *((void **)v142 + 1);
          sub_120A10((__int64)v494, v145, v144, 1, v146, 2);
          s1[0] = (_BYTE *)(&dword_30 + 2);
          v468.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v147 = v466->m128i_i32[3];
          v148 = *((_DWORD *)v142 + 5);
          if ( v148 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v148;
          }
          v149 = get_tinfo_size();
          sub_32F0D0((__int64)v492, v147, v149);
          clear_tinfo_t();
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          v150 = *(_DWORD *)(v467.m128i_i64[1] + 12);
          v151 = *((_DWORD *)v142 + 4);
          if ( v151 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v151;
          }
          v152 = get_tinfo_size();
          v71 = v150;
          sub_32F0D0((__int64)v487, v150, v152);
          clear_tinfo_t();
          v72 = get_dtype_size();
          if ( v72 < (int)v493 )
          {
            LODWORD(v464) = sub_3FAE20((__int64)v466, 0.0, si128);
            v391 = sub_3FAE20((__int64)v466, 0.0, si128);
            dtype_by_size = get_dtype_by_size();
            v71 = *(unsigned __int8 *)(a1 + 109);
            sub_1D6840(a1, v71, dtype_by_size, v391, v464, 0);
          }
          v153 = *(_WORD *)(a1 + 48);
          if ( v153 != 703 )
          {
            v72 = *((unsigned int *)v142 + 4);
            LODWORD(v464) = *((_DWORD *)v142 + 4);
            if ( v153 == 704 )
            {
              v73 = v467.m128i_i64[1];
              v154 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
              *(_BYTE *)(v467.m128i_i64[1] + 16) = 1;
              *(_DWORD *)(v73 + 12) = v154;
            }
            LODWORD(v460) = 3;
            goto LABEL_205;
          }
          v434 = v467.m128i_i64[1];
          v73 = v465.m128i_u32[0];
          v98 = v461 == nullptr;
          *(_DWORD *)(v467.m128i_i64[1] + 12) = v465.m128i_i32[0];
          *(_BYTE *)(v434 + 16) = 1;
          if ( v98 )
          {
            LODWORD(v464) = 7;
            v465.m128i_i32[0] = 20;
            v456 = 1;
            LODWORD(v460) = 3;
            goto LABEL_207;
          }
          v437 = *(_QWORD *)(a1 + 8);
          v14 = nullptr;
          LODWORD(v460) = 3;
          v27 = 1;
          v456 = 1;
          v453 = v437;
          v465.m128i_i32[0] = 20;
          v454 = 0;
          LODWORD(v464) = 7;
          goto LABEL_28;
        case 0x1CE:
          v27 = 1;
          v14 = nullptr;
          LOBYTE(v457) = 1;
          v461 = "_mm_getcsr";
          LODWORD(v464) = 7;
          v454 = 0;
          v465.m128i_i32[0] = 4;
          v456 = 2;
          LODWORD(v460) = 0;
          v468.m128i_i64[0] = (__int64)s1;
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
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v166 = &word_4F0900;
          if ( *(_BYTE *)(a1 + 109) != 7 )
            v166 = &word_4F0940;
          for ( j = *(_WORD *)(a1 + 48); *v166 != j; v166 += 12 )
            ;
          v98 = *(_BYTE *)(a1 + 145) == 5;
          v461 = *((void **)v166 + 1);
          if ( v98 )
          {
            v386 = sub_3FAE20((__int64)v466, 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v487, v386, *((_DWORD *)v166 + 4));
            sub_120A10((__int64)v492, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 152), 1, *(_QWORD *)(a1 + 40), 1);
            s1[0] = (_BYTE *)(&dword_30 + 2);
            v71 = (__int64)s1;
            v468.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
            clear_tinfo_t();
          }
          else
          {
            v168 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v487, v168, *((_DWORD *)v166 + 4));
            v169 = sub_3FAE20((__int64)v466, 0.0, si128);
            v71 = (__int64)v492;
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v492, v169, 50);
          }
          LODWORD(v460) = 2;
          LODWORD(v464) = *((_DWORD *)v166 + 5);
          goto LABEL_205;
        case 0x1DD:
        case 0x26B:
        case 0x26C:
        case 0x26D:
          v98 = *(_BYTE *)(a1 + 109) == 7;
          v465.m128i_i64[0] = (__int64)&word_4F0A60;
          if ( !v98 )
            goto LABEL_196;
          goto LABEL_197;
        case 0x1E1:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v359 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
          sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v487, v359, -12);
          v360 = sub_3FAE20((__int64)v466, 0.0, si128);
          sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v492, v360, -12);
          v461 = "_m_maskmovq";
          goto LABEL_587;
        case 0x1E2:
        case 0x1E3:
        case 0x22F:
        case 0x230:
        case 0x231:
        case 0x2C5:
        case 0x2C6:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v198 = *(_WORD *)(a1 + 48);
          v199 = &word_4F0640;
          v200 = &word_4F0640;
          if ( v198 != word_4F0640 )
          {
            do
              v199 += 12;
            while ( *v199 != v198 );
            v200 = v199;
          }
          v461 = *((void **)v200 + 1);
          sub_3FAC20(a1, (__int64)v487, *((_DWORD *)v200 + 4), v467.m128i_i64[1], v475, 0.0);
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v201 = v466->m128i_i32[3];
          v202 = *((_DWORD *)v200 + 5);
          if ( v202 < 0 )
          {
            s1[0] = nullptr;
            v468.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v202;
            v468.m128i_i64[0] = (__int64)s1;
          }
          v203 = get_tinfo_size();
          sub_32F0D0((__int64)v492, v201, v203);
          clear_tinfo_t();
          v454 = 0;
          v465.m128i_i32[0] = 20;
          LODWORD(v460) = 2;
          goto LABEL_315;
        case 0x1E4:
          v255 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v468.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v256 = getinf();
          sub_120A10((__int64)v492, (__int64)v10, 1, v256, v255, -1);
          goto LABEL_453;
        case 0x1E5:
          v357 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v468.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v358 = getinf();
          sub_120A10((__int64)v492, (__int64)v10, 2, v358, v357, -1);
          goto LABEL_453;
        case 0x1E6:
          v350 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v468.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v351 = getinf();
          sub_120A10((__int64)v492, (__int64)v10, 3, v351, v350, -1);
          goto LABEL_453;
        case 0x1E7:
          v348 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v468.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v349 = getinf();
          sub_120A10((__int64)v492, (__int64)v10, 0, v349, v348, -1);
          goto LABEL_453;
        case 0x1E8:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          v257 = "_mm_sfence";
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
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
          LODWORD(v464) = -14;
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
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v176 = *(_WORD *)(a1 + 48);
          v465.m128i_i64[0] = (__int64)&unk_434BE0;
          if ( v176 != 497 )
          {
            v175 = &unk_434BE0;
            do
              v175 += 8;
            while ( *v175 != v176 );
            v465.m128i_i64[0] = (__int64)v175;
          }
          v177 = j__qalloc_or_throw(80, (__int64)v10, (__int64)v175, (__int64)&unk_434BE0);
          v178 = (unsigned __int8 *)(v177 + 32);
          v179 = *(_QWORD *)(a1 + 40);
          v464 = v177 + 48;
          v468.m128i_i64[0] = v177 + 64;
          *(_QWORD *)(v177 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v177 + 40) = 0;
          *(_QWORD *)(v177 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v177 + 56) = 0;
          *(_QWORD *)(v177 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v177 + 72) = 0;
          sub_330970(v177, v179);
          v180 = v465.m128i_i64[0];
          v181 = *(_DWORD *)(v465.m128i_i64[0] + 4);
          *(_DWORD *)(v177 + 4) |= 0x10u;
          *(_DWORD *)v177 = v181;
          v467.m128i_i32[0] = *(_DWORD *)(v180 + 12);
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = &byte_1;
          v182 = _mm_cvtsi32_si128(*(_DWORD *)(v467.m128i_i64[1] + 12));
          v468.m128i_i64[0] = (__int64)s1;
          v183 = (char *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v467.m128i_u32[0]), v182).m128i_u64[0];
          *(char **)((char *)s1 + 4) = v183;
          sub_125180((__int64)v178, (unsigned __int8 *)s1);
          sub_11CDA0((__int64)s1);
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, *(double *)&v183, (__m128)v182) )
            sub_3EB430(*(double *)&v183);
          s1[0] = &byte_1;
          *(char **)((char *)s1 + 4) = (char *)_mm_unpacklo_epi32(
                                                 _mm_cvtsi32_si128(v467.m128i_u32[0]),
                                                 _mm_cvtsi32_si128(v466->m128i_u32[3])).m128i_u64[0];
          sub_125180(v464, (unsigned __int8 *)v468.m128i_i64[0]);
          sub_11CDA0(v468.m128i_i64[0]);
          sub_125180(v177 + 64, v178);
          v184 = v465.m128i_i64[0];
          *(_DWORD *)(v177 + 68) = 1;
          if ( *(_BYTE *)(v184 + 8) )
            sub_12B6F0(v177, *(_QWORD *)(a1 + 832), 6, 1, 1);
          sub_12B6F0(v177, *(_QWORD *)(a1 + 832), 9, v467.m128i_i32[0], 1);
          sub_12B6F0(v177, *(_QWORD *)(a1 + 832), 5, v467.m128i_i32[0], 1);
          sub_B5290(*(_QWORD **)(a1 + 16), v177);
          goto LABEL_272;
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
          sub_3FA780(a1, (__int64)v487, 1, v467.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v478, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v457) = 0;
          v243 = "_mm_clflush";
          LODWORD(v460) = 1;
          v456 = 0;
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
          v463 = 4;
          LODWORD(v464) = 0;
          LODWORD(v460) = 0;
          goto LABEL_481;
        case 0x218:
          LOBYTE(v461) = 3;
          v463 = 4;
          goto LABEL_890;
        case 0x219:
          LOBYTE(v461) = 4;
          goto LABEL_729;
        case 0x21A:
          LOBYTE(v461) = 4;
          v463 = 3;
LABEL_890:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v464) = 0;
          LOBYTE(v457) = 0;
          v465.m128i_i32[0] = 20;
          v455 = 67;
          v456 = 1;
          LODWORD(v460) = 0;
          goto LABEL_483;
        case 0x21E:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v464) = 25;
          v463 = 4;
          goto LABEL_479;
        case 0x221:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          v257 = "_mm_lfence";
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x222:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v325 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v487, v325, -13);
          v326 = sub_3FAE20((__int64)v466, 0.0, si128);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v492, v326, -13);
          v461 = "_mm_maskmoveu_si128";
LABEL_587:
          v327 = *(_QWORD *)(a1 + 832);
          v328 = *(_DWORD *)(v327 + 404);
          v468.m128i_i64[0] = (__int64)s1;
          v465.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v327, v465.m128i_u32[0], 2);
          sub_32F0D0((__int64)v494, v328, v465.m128i_i32[0]);
          clear_tinfo_t();
          copy_tinfo_t();
          LOBYTE(v457) = 0;
          LODWORD(v460) = 3;
          v456 = 0;
          v465.m128i_i32[0] = 20;
          v454 = 0;
          LODWORD(v464) = 0;
          goto LABEL_93;
        case 0x225:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          v257 = "_mm_mfence";
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x22A:
        case 0x22B:
          v186 = *(_BYTE *)(a1 + 65);
          if ( v186 != 13 && (v186 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) > 0xFu) )
            goto LABEL_289;
          v187 = *(_BYTE *)(a1 + 105);
          if ( v187 != 13 && (v187 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu) )
            goto LABEL_289;
LABEL_288:
          v188 = *(_BYTE *)(a1 + 109);
          if ( *(_BYTE *)(a1 + 69) != v188 )
            goto LABEL_289;
          v387 = v188;
          v388 = sub_3FAE20((__int64)v466, 0.0, si128);
          v71 = *(_QWORD *)(a1 + 832);
          sub_3F1CC0((__int64)v487, v71, v388, v387, 2);
          v465.m128i_i32[0] = 4;
          LODWORD(v464) = 0;
          v456 = 2;
          LODWORD(v460) = 0;
          goto LABEL_207;
        case 0x22C:
        case 0x22D:
          if ( (_WORD)v43 == 556 )
          {
            if ( *(_BYTE *)(a1 + 65) == 1 )
            {
              v427 = (__m128i *)v467.m128i_i64[1];
              v428 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            }
            else
            {
              v427 = v466;
              v428 = sub_3FAE20((__int64)v466, 0.0, si128);
            }
            v427[1].m128i_i8[0] = 1;
            v427->m128i_i32[3] = v428 + 8;
          }
          v98 = *(_BYTE *)(a1 + 65) == 1;
          LODWORD(v464) = 0;
          LOBYTE(v457) = 0;
          v465.m128i_i32[0] = 4;
          v455 = 67;
          if ( v98 )
          {
            LOBYTE(v461) = 4;
            v456 = 1;
            LODWORD(v460) = 0;
            v463 = 4;
          }
          else
          {
            v456 = 2;
            LODWORD(v460) = 0;
LABEL_506:
            LOBYTE(v461) = 4;
            v463 = 4;
          }
          goto LABEL_483;
        case 0x239:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          v257 = "_mm_pause";
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x24B:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          if ( ((*(_QWORD *)(a1 + 104) ^ *(_QWORD *)(a1 + 64)) & 0xFFFF00000000FF00LL) == 0 )
          {
            v265 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_3F7E20(a1, 3u, a4, 0, 0x3BEA45E214ADDC55LL, v265, 0);
            goto LABEL_272;
          }
LABEL_209:
          LODWORD(v464) = -15;
LABEL_210:
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          qsnprintf();
          v135 = &s[strlen(s)];
          v136 = *(v135 - 3);
          if ( v135 >= &v500 )
            goto LABEL_214;
          v137 = *(v135 - 1);
          if ( v137 == 100 )
          {
            v418 = *(v135 - 2);
            if ( v418 == 112 || v418 == 115 )
            {
              *(_WORD *)v135 = 100;
              *(v135 - 1) = v418;
              *(v135 - 2) = 95;
            }
          }
          else if ( v137 == 115 )
          {
            v447 = *(v135 - 2);
            if ( v447 == 112 || v447 == 115 )
            {
              if ( v136 != 50 )
              {
                *(_WORD *)v135 = 115;
                *(v135 - 1) = v447;
                *(v135 - 2) = 95;
LABEL_215:
                if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
                  sub_3EB430(0.0);
                s1[0] = nullptr;
                v138 = *(_DWORD *)(v467.m128i_i64[1] + 12);
                v468.m128i_i64[0] = (__int64)s1;
                copy_tinfo_t();
                sub_32F0D0((__int64)v487, v138, 16);
                clear_tinfo_t();
                v139 = get_dtype_size();
                v140 = v139;
                if ( v139 <= 8 )
                {
                  sub_32C150(v468.m128i_i64[0], *(_QWORD *)(a1 + 832), v139);
                  v141 = sub_3FAE20((__int64)v466, 0.0, si128);
                  sub_32F0D0((__int64)v492, v141, v140);
                  v27 = 1;
                  v14 = nullptr;
                  clear_tinfo_t();
                  v454 = 0;
                  v465.m128i_i32[0] = 20;
                  v461 = s;
                  v456 = 2;
                  LODWORD(v460) = 2;
                  goto LABEL_27;
                }
                v378 = sub_3FAE20((__int64)v466, 0.0, si128);
                sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v492, v378, v464);
                LODWORD(v460) = 2;
                v456 = 2;
                v461 = s;
                v465.m128i_i32[0] = 20;
                v454 = 0;
                goto LABEL_93;
              }
LABEL_695:
              *(v135 - 3) = 95;
              goto LABEL_215;
            }
          }
LABEL_214:
          if ( v136 != 50 )
            goto LABEL_215;
          goto LABEL_695;
        case 0x24F:
          v263 = *(_BYTE *)(a1 + 105);
          if ( v263 != 13 && (v263 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu) )
          {
            LOBYTE(v457) = sub_3F7000(a1);
            if ( !(_BYTE)v457 )
              goto LABEL_6;
            sub_3FA780(a1, (__int64)v487, 89, (__int64)v466, 0.0, 0, 0xFFFFFFFF);
            sub_3F0D80(v478, a1 + 104, 0);
            LODWORD(v460) = 1;
            v461 = "_mm_loaddup_pd";
            v456 = 2;
            v465.m128i_i32[0] = 20;
            v454 = 0;
            LODWORD(v464) = -15;
            v468.m128i_i64[0] = (__int64)s1;
            goto LABEL_93;
          }
LABEL_196:
          v465.m128i_i64[0] = (__int64)&word_4F0DC0;
LABEL_197:
          if ( (unsigned __int8)sub_3F7000(a1) )
          {
            v126 = v465.m128i_i64[0];
            v127 = *(_WORD *)(a1 + 48);
            if ( *(_WORD *)v465.m128i_i64[0] != v127 )
            {
              do
              {
                v128 = (_WORD *)(v126 + 24);
                v126 = (__int64)v128;
              }
              while ( *v128 != v127 );
              v465.m128i_i64[0] = (__int64)v128;
            }
            v461 = *(void **)(v465.m128i_i64[0] + 8);
            if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
              sub_3EB430(0.0);
            v129 = v466->m128i_u32[3];
            v130 = *(_DWORD *)(v465.m128i_i64[0] + 16);
            if ( v130 < 0 )
            {
              s1[0] = nullptr;
              v468.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
            }
            else
            {
              s1[0] = (char *)(unsigned __int8)v130;
              v468.m128i_i64[0] = (__int64)s1;
            }
            v131 = get_tinfo_size();
            v71 = v129;
            sub_32F0D0((__int64)v487, v129, v131);
            clear_tinfo_t();
            v72 = (unsigned __int64)v466;
            LODWORD(v460) = 1;
            LODWORD(v464) = *(_DWORD *)(v465.m128i_i64[0] + 20);
            v132 = v467.m128i_i64[1];
            v4 = _mm_loadu_si128((const __m128i *)v467.m128i_i64[1]);
            *v466 = v4;
            *(_BYTE *)(v72 + 16) = *(_BYTE *)(v132 + 16);
            goto LABEL_205;
          }
          goto LABEL_6;
        case 0x25A:
          v454 = sub_3F7000(a1);
          if ( !v454 )
            goto LABEL_6;
          v258 = *(_QWORD *)(a1 + 832);
          v259 = get_dtype_size();
          sub_32C430((__int64 *)s1, v258, v259, 2);
          sub_32F0D0((__int64)v487, 8, v259);
          v468.m128i_i64[0] = (__int64)s1;
          clear_tinfo_t();
          v260 = *(_QWORD *)(a1 + 832);
          v261 = get_dtype_size();
          sub_32C430((__int64 *)s1, v260, v261, 2);
          sub_32F0D0((__int64)v492, v465.m128i_i32[0], v261);
          clear_tinfo_t();
          v465.m128i_i64[0] = *(_QWORD *)(a1 + 832);
          v262 = get_dtype_size();
          sub_32C430((__int64 *)s1, v465.m128i_i64[0], v262, 2);
          sub_32F0D0((__int64)v494, v462, v262);
          clear_tinfo_t();
          copy_tinfo_t();
          LOBYTE(v457) = 0;
          LODWORD(v460) = 3;
          v456 = 0;
          v461 = "_mm_monitor";
          v465.m128i_i32[0] = 4;
          LODWORD(v464) = 0;
          goto LABEL_93;
        case 0x25B:
          v454 = sub_3F7000(a1);
          if ( !v454 )
            goto LABEL_6;
          sub_3F1CC0((__int64)v487, *(_QWORD *)(a1 + 832), v465.m128i_i32[0], 2, 2);
          sub_3F1CC0((__int64)v492, *(_QWORD *)(a1 + 832), 8, 2, 2);
          LOBYTE(v457) = 0;
          v456 = 0;
          v461 = "_mm_mwait";
          LODWORD(v464) = 0;
          LODWORD(v460) = 2;
          v465.m128i_i32[0] = 4;
          v468.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x25D:
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          sub_3FA780(a1, (__int64)v487, -13, (__int64)v466, 0.0, 64, 0xFFFFFFFF);
          sub_3F0D80(v478, a1 + 104, 0);
          LODWORD(v460) = 1;
          v264 = "_mm_lddqu_si128";
          v456 = 2;
          goto LABEL_471;
        case 0x273:
          goto LABEL_363;
        case 0x276:
          v27 = 0;
          LOBYTE(v457) = 0;
          v257 = "__vmx_off";
          LODWORD(v464) = 0;
          v14 = nullptr;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x28E:
        case 0x28F:
        case 0x297:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          v218 = *(_WORD *)(a1 + 48);
          v219 = &word_4EFAA0;
          if ( word_4EFAA0 != v218 )
          {
            do
              v219 += 12;
            while ( *v219 != v218 );
          }
          v220 = *((void **)v219 + 1);
          LODWORD(v464) = *((_DWORD *)v219 + 4);
          v461 = v220;
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          v221 = *(_DWORD *)(v467.m128i_i64[1] + 12);
          if ( (int)v464 < 0 )
          {
            s1[0] = nullptr;
            v468.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v464;
            v468.m128i_i64[0] = (__int64)s1;
          }
          v222 = get_tinfo_size();
          sub_32F0D0((__int64)v487, v221, v222);
          clear_tinfo_t();
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v223 = v466->m128i_i32[3];
          if ( (int)v464 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v464;
          }
          v224 = get_tinfo_size();
          sub_32F0D0((__int64)v492, v223, v224);
          clear_tinfo_t();
          v225 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          if ( (int)v464 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v464;
          }
          v226 = get_tinfo_size();
          v71 = v225;
          sub_32F0D0((__int64)v494, v225, v226);
          clear_tinfo_t();
          LODWORD(v460) = 3;
          goto LABEL_205;
        case 0x294:
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          sub_3FA780(a1, (__int64)v487, -13, (__int64)v466, 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v478, a1 + 104, 0);
          LODWORD(v460) = 1;
          v264 = "_mm_stream_load_si128";
          v456 = 2;
LABEL_471:
          v461 = v264;
          v465.m128i_i32[0] = 20;
          v454 = 0;
          LODWORD(v464) = -13;
          v468.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x2B7:
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          v344 = v467.m128i_i64[1];
          v345 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
          sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v487, v345, -13);
          v346 = sub_3FAE20((__int64)v466, 0.0, si128);
          sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v492, v346, -13);
          *(_BYTE *)(v467.m128i_i64[1] + 16) = 1;
          v14 = nullptr;
          v461 = "_mm_testz_si128";
          *(_DWORD *)(v344 + 12) = 1;
          v27 = 1;
          LODWORD(v464) = 34;
          v454 = 0;
          v465.m128i_i32[0] = 20;
          v456 = 1;
          LODWORD(v460) = 2;
          v468.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x2BC:
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
              sub_3EB430(0.0);
            v12 = *(_QWORD *)(a1 + 832);
          }
          v464 = v12;
          v341 = *(_DWORD *)(v467.m128i_i64[1] + 12);
          v468.m128i_i64[0] = (__int64)s1;
          v465.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v12, v465.m128i_u32[0], 2);
          sub_32F0D0((__int64)v487, v341, v465.m128i_i32[0]);
          clear_tinfo_t();
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v342 = *(_QWORD *)(a1 + 832);
          v465.m128i_i32[0] = v466->m128i_i32[3];
          v343 = get_dtype_size();
          sub_32C430((__int64 *)v468.m128i_i64[0], v342, v343, 2);
          sub_32F0D0((__int64)v492, v465.m128i_i32[0], v343);
          clear_tinfo_t();
          get_dtype_size();
          qsnprintf();
          LOBYTE(v457) = 1;
          LODWORD(v460) = 2;
          v456 = 2;
          v461 = s;
          v465.m128i_i32[0] = 4;
          v454 = 0;
          LODWORD(v464) = 39;
          goto LABEL_93;
        case 0x2BD:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v464) = 7;
          v461 = "_mm_cmpestri";
          goto LABEL_599;
        case 0x2BE:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v464) = -13;
          v461 = "_mm_cmpestrm";
LABEL_599:
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v468.m128i_i64[0] = (__int64)s1;
          v332 = *(_DWORD *)(v467.m128i_i64[1] + 12);
          copy_tinfo_t();
          v333 = get_tinfo_size();
          sub_32F0D0((__int64)v487, v332, v333);
          clear_tinfo_t();
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v334 = v466->m128i_i32[3];
          copy_tinfo_t();
          v335 = get_tinfo_size();
          sub_32F0D0((__int64)v492, v334, v335);
          clear_tinfo_t();
          v336 = *(_QWORD *)(a1 + 832);
          v337 = get_dtype_size();
          sub_32C430((__int64 *)v468.m128i_i64[0], v336, v337, 2);
          sub_32F0D0((__int64)v494, 8, v337);
          clear_tinfo_t();
          v338 = *(_QWORD *)(a1 + 832);
          v339 = get_dtype_size();
          sub_32C430((__int64 *)v468.m128i_i64[0], v338, v339, 2);
          sub_32F0D0((__int64)v495, v462, v339);
          clear_tinfo_t();
          if ( *(_WORD *)(a1 + 48) != 701 )
            v465.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          v340 = v467.m128i_i64[1];
          v14 = nullptr;
          LOBYTE(v457) = 1;
          v454 = 0;
          v27 = 1;
          *(_DWORD *)(v467.m128i_i64[1] + 12) = v465.m128i_i32[0];
          *(_BYTE *)(v340 + 16) = 1;
          v465.m128i_i32[0] = 20;
          v456 = 1;
          LODWORD(v460) = 4;
          goto LABEL_27;
        case 0x2C2:
          if ( !v466[1].m128i_i8[0] )
          {
            if ( !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
              sub_3EB430(0.0);
            v12 = *(_QWORD *)(a1 + 832);
          }
          v464 = v12;
          v347 = v466->m128i_i32[3];
          v468.m128i_i64[0] = (__int64)s1;
          v465.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v12, v465.m128i_u32[0], 2);
          sub_32F0D0((__int64)v487, v347, v465.m128i_i32[0]);
          clear_tinfo_t();
          v461 = "__popcnt";
          if ( v488 == 2 )
            v461 = "__popcnt16";
          v27 = 1;
          v14 = nullptr;
          LOBYTE(v457) = 1;
          v454 = 0;
          LODWORD(v464) = (unsigned __int8)v491;
          v465.m128i_i32[0] = 4;
          v456 = 1;
          LODWORD(v460) = 1;
          goto LABEL_27;
        case 0x2C3:
        case 0x2C4:
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          v304 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v487, v304, -13);
          v305 = *(_WORD *)(a1 + 48);
          if ( *(_BYTE *)(a1 + 105) == 5 )
          {
            v465.m128i_i32[0] = 1;
            v461 = "_mm_extracti_si64";
            if ( v305 == 708 )
            {
              v442 = sub_3FAE20((__int64)v466, 0.0, si128);
              sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v492, v442, -13);
              v465.m128i_i32[0] = 2;
              v461 = "_mm_inserti_si64";
            }
            LODWORD(v460) = v465.m128i_i32[0] + 2;
            do
            {
              sub_120A10(
                (__int64)&v487[80 * v465.m128i_i32[0]],
                *(_QWORD *)(a1 + 832),
                *(_QWORD *)(a1 + 40LL * v465.m128i_i32[0] + 72),
                4,
                *(_QWORD *)(a1 + 40),
                v465.m128i_i32[0]);
              s1[0] = (char *)&dword_14;
              v468.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
              clear_tinfo_t();
              ++v465.m128i_i32[0];
            }
            while ( v465.m128i_i32[0] != (_DWORD)v460 );
          }
          else
          {
            v461 = "_mm_insert_si64";
            if ( v305 == 707 )
              v461 = (void *)"_mm_extract_si64";
            v306 = sub_3FAE20((__int64)v466, 0.0, si128);
            sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v492, v306, -13);
            LODWORD(v460) = 2;
            v468.m128i_i64[0] = (__int64)s1;
          }
          v454 = 0;
          v27 = 1;
          v14 = nullptr;
          LODWORD(v464) = -13;
          v465.m128i_i32[0] = 20;
          v456 = 2;
          goto LABEL_27;
        case 0x2C7:
          if ( !v466[1].m128i_i8[0] )
          {
            if ( !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
              sub_3EB430(0.0);
            v12 = *(_QWORD *)(a1 + 832);
          }
          v464 = v12;
          v303 = v466->m128i_i32[3];
          v468.m128i_i64[0] = (__int64)s1;
          v465.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v12, v465.m128i_u32[0], 2);
          sub_32F0D0((__int64)v487, v303, v465.m128i_i32[0]);
          clear_tinfo_t();
          v461 = "__lzcnt";
          if ( v488 == 2 )
            v461 = "__lzcnt16";
          v27 = 1;
          v14 = nullptr;
          LOBYTE(v457) = 1;
          v454 = 0;
          LODWORD(v464) = (unsigned __int8)v491;
          v465.m128i_i32[0] = 20;
          v456 = 1;
          LODWORD(v460) = 1;
          goto LABEL_27;
        case 0x2C9:
        case 0x708:
          goto LABEL_592;
        case 0x2CA:
        case 0x2F9:
        case 0x707:
          goto LABEL_346;
        case 0x2CD:
          LOBYTE(v457) = 0;
          LODWORD(v460) = 0;
          v456 = 0;
          v243 = "__svm_clgi";
          goto LABEL_387;
        case 0x2CE:
          v329 = *(_QWORD *)(a1 + 800);
          v487[0] = 1;
          LODWORD(v489) = 8;
          v488 = *(_DWORD *)(*(_QWORD *)(v329 + 112) + 80LL);
          copy_tinfo_t();
          v330 = *(_QWORD *)(a1 + 800);
          v492[0] = 1;
          LODWORD(v330) = *(unsigned __int8 *)(v330 + 130);
          s1[0] = &byte_7;
          v4.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v330), _mm_cvtsi32_si128(v465.m128i_u32[0])).m128i_u64[0];
          v468.m128i_i64[0] = (__int64)s1;
          v493 = v4.m128i_i64[0];
          copy_tinfo_t();
          v14 = nullptr;
          v27 = 0;
          clear_tinfo_t();
          LOBYTE(v457) = 0;
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          v461 = "__svm_invlpga";
          v456 = 0;
          LODWORD(v460) = 2;
          goto LABEL_27;
        case 0x2CF:
          v461 = "__svm_skinit";
          goto LABEL_500;
        case 0x2D0:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          LODWORD(v464) = 0;
          v257 = "__svm_stgi";
          v454 = 1;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x2D2:
          v461 = "__svm_vmload";
          goto LABEL_500;
        case 0x2D4:
          v461 = "__svm_vmrun";
          goto LABEL_500;
        case 0x2D5:
          v461 = "__svm_vmsave";
LABEL_500:
          v281 = get_dtype_size();
          v468.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v10, v281, 2);
          sub_32F0D0((__int64)v487, 8, v281);
          v27 = 0;
          clear_tinfo_t();
          LOBYTE(v457) = 0;
          LODWORD(v464) = 0;
          goto LABEL_392;
        case 0x2EA:
          LODWORD(v464) = 36;
          v461 = (void *)"__bextr_u32";
          if ( (unsigned int)get_dtype_size() == 8 )
          {
            LODWORD(v464) = 37;
            v461 = (void *)"__bextr_u64";
          }
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v276 = *(_QWORD *)(a1 + 832);
          v465.m128i_i32[0] = v466->m128i_i32[3];
          v277 = get_dtype_size();
          v468.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v276, v277, 2);
          sub_32F0D0((__int64)v487, v465.m128i_i32[0], v277);
          clear_tinfo_t();
          s1[0] = (char *)a1;
          LOBYTE(s1[2]) = 0;
          s1[1] = (char *)0xFFFFFFFF00000002LL;
          sub_3FA580((int *)s1, 1, 0, 0.0);
          if ( !LOBYTE(s1[2]) && !(unsigned __int8)sub_3FACB0(v468.m128i_i64[0], 0.0, si128) )
            sub_3EB430(0.0);
          v278 = *(_QWORD *)(a1 + 832);
          v465.m128i_i32[0] = HIDWORD(s1[1]);
          v279 = get_dtype_size();
          sub_32C430((__int64 *)v468.m128i_i64[0], v278, v279, 2);
          v460 = v492;
          sub_32F0D0((__int64)v492, v465.m128i_i32[0], v279);
          clear_tinfo_t();
          v280 = *(_QWORD *)(a1 + 832);
          LODWORD(v278) = get_dtype_size();
          sub_32C430((__int64 *)v468.m128i_i64[0], v280, v278, 2);
          sub_32F0D0((__int64)v494, v465.m128i_i32[0], v278);
          clear_tinfo_t();
          sub_126240(v492, *(_QWORD *)(a1 + 832), 0x14u, *(_QWORD *)(a1 + 40), 255, 4);
          sub_126240(v494, *(_QWORD *)(a1 + 832), 0x17u, *(_QWORD *)(a1 + 40), 8, 1);
          sub_126240(v494, *(_QWORD *)(a1 + 832), 0x14u, *(_QWORD *)(a1 + 40), 255, 4);
          sub_3F6F70(a1);
          v454 = 0;
          v465.m128i_i32[0] = 20;
          v456 = 1;
          LODWORD(v460) = 3;
          LOBYTE(v457) = 1;
          goto LABEL_112;
        case 0x491:
          v274 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v468.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v275 = getinf();
          sub_120A10((__int64)v492, (__int64)v10, 6, v275, v274, -1);
LABEL_453:
          sub_3FA780(a1, (__int64)v487, 1, v467.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v478, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v457) = 0;
          LODWORD(v460) = 2;
          v456 = 0;
          v461 = "_mm_prefetch";
          v465.m128i_i32[0] = 4;
          v454 = 1;
          LODWORD(v464) = 0;
          goto LABEL_93;
        default:
          goto LABEL_6;
      }
    }
    if ( (unsigned __int16)v43 <= 0x1B4u )
    {
      if ( (unsigned __int16)v43 <= 5u )
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
              if ( (_WORD)v43 != 143 )
              {
                if ( (v43 & 0xFFFB) != 0x7A )
                {
                  if ( !under_debugger )
                    sub_383060(0xC8C4u, 0.0);
LABEL_944:
                  BUG();
                }
                goto LABEL_278;
              }
            }
            else if ( (_WORD)v43 != 143 )
            {
              if ( (_WORD)v43 == 134 )
              {
                v446 = v466;
                v466->m128i_i32[3] = v459;
                v446[1].m128i_i8[0] = 1;
                sub_3F8EE0(a1);
              }
              v467.m128i_i32[2] = sub_3F9DC0(a1, 0, v459, 0.0);
              LODWORD(s1[0]) = 1;
              HIDWORD(s1[0]) = get_dtype_size();
              LODWORD(s1[1]) = sub_3FAE20((__int64)v466, 0.0, si128);
              v468.m128i_i64[0] = (__int64)s1;
              sub_3F7290(a1, v467.m128i_i32[2], (unsigned __int8 *)s1, 0.0, si128);
              sub_11CDA0((__int64)s1);
              goto LABEL_281;
            }
LABEL_279:
            v185 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_3F7230(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL), v185, 0.0, si128);
            if ( *(_WORD *)(a1 + 48) == 143 )
            {
              v445 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
              sub_3F8D40(a1, v445, v463);
            }
LABEL_281:
            sub_3F6F70(a1);
            v15 = 1;
            goto LABEL_8;
          }
          if ( (v43 & 0xFFFB) == 0x7A && (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
          {
LABEL_278:
            v463 = *(_BYTE *)(a1 + 109);
            goto LABEL_279;
          }
          goto LABEL_6;
        case 0xA:
        case 0xB:
          v465.m128i_i32[0] = get_dtype_size();
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          sub_32F110(
            (__int64)v487,
            *(_QWORD *)(a1 + 832),
            *(unsigned int *)(v467.m128i_i64[1] + 12),
            v465.m128i_u32[0],
            0,
            v465.m128i_i32[0],
            2);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 && v465.m128i_i32[0] == 4 )
            v465.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          s1[1] = nullptr;
          v205 = *(_DWORD *)(v467.m128i_i64[1] + 12);
          v468.m128i_i64[0] = (__int64)s1;
          sub_63E80((__int64 *)s1, v205, v465.m128i_i32[0]);
          s1[2] = nullptr;
          v486 = 0;
          sub_64280(v475, (__int64 *)s1);
          sub_316CB0((__int64 *)&v476, (__int64 **)&s1[2], v206, v207);
          if ( s1[2] )
          {
            *(_QWORD *)&v486 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v468.m128i_i64[0], *(_DWORD *)(v467.m128i_i64[1] + 12), v465.m128i_i32[0]);
          v4.m128i_i64[0] = 0;
          s1[2] = nullptr;
          v486 = 0;
          sub_64280(&v481, (__int64 *)v468.m128i_i64[0]);
          sub_316CB0(&v483, (__int64 **)&s1[2], v208, v209);
          if ( s1[2] )
          {
            *(_QWORD *)&v486 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v210 = v466->m128i_i32[3];
          v464 = *(_QWORD *)(a1 + 832);
          v465.m128i_i32[0] = v210;
          v211 = get_dtype_size();
          sub_32C430((__int64 *)v468.m128i_i64[0], v464, v211, 2);
          sub_32F0D0((__int64)v492, v465.m128i_i32[0], v211);
          clear_tinfo_t();
          v98 = *(_WORD *)(a1 + 48) == 11;
          v461 = "_BitScanForward";
          if ( v98 )
            v461 = "_BitScanReverse";
          if ( a4 == 7 )
          {
            qsnprintf();
            v461 = s;
          }
          v212 = v467.m128i_i64[1];
          v27 = 1;
          v14 = nullptr;
          LOBYTE(v457) = 1;
          LODWORD(v464) = 34;
          *(_DWORD *)(v467.m128i_i64[1] + 12) = 1;
          *(_BYTE *)(v212 + 16) = 1;
          v454 = 0;
          v465.m128i_i32[0] = 36;
          v456 = 1;
          LODWORD(v460) = 2;
          goto LABEL_27;
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
          v213 = (char *)&unk_4EA0E0;
          if ( (_WORD)v43 == 12 )
          {
            v468.m128i_i64[0] = (__int64)v478;
          }
          else
          {
            do
              v213 += 24;
            while ( (_WORD)v43 != *(_WORD *)v213 );
            v468.m128i_i64[0] = (__int64)v475;
          }
          sub_3F0D80((__int64 *)v468.m128i_i64[0], a1 + 64, 0);
          if ( *(_BYTE *)(a1 + 65) == 1 )
          {
            v419 = get_dtype_size();
            v98 = *(_WORD *)(a1 + 48) == 12;
            v467.m128i_i32[0] = v419;
            if ( v98 )
              v420 = 0;
            else
              v420 = v419;
            v464 = v419;
            v465.m128i_i32[0] = v420;
            v421 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_32F110((__int64)v487, *(_QWORD *)(a1 + 832), v421, v467.m128i_u32[0], v464, v465.m128i_i32[0], 1);
            v422 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_3F0F00((__int64 *)v468.m128i_i64[0], v422, v467.m128i_i32[0]);
            if ( *(_WORD *)(a1 + 48) == 12 )
              goto LABEL_821;
            v423 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_3F0F00(&v481, v423, v467.m128i_i32[0]);
          }
          else
          {
            if ( (unsigned __int8)(a4 - 1) > 1u && a4 != 7 )
              goto LABEL_6;
            v214 = sub_3F7140(a4);
            sub_3FA780(a1, (__int64)v487, v214, v467.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          }
          if ( *(_WORD *)(a1 + 48) != 12 )
            goto LABEL_341;
LABEL_821:
          s1[0] = nullptr;
          tinfo_property = get_tinfo_property();
          if ( (_BYTE)tinfo_property )
            tinfo_property |= 0x40uLL;
          s1[0] = (char *)tinfo_property;
          v468.m128i_i64[0] = (__int64)s1;
          sub_3F0910();
          clear_tinfo_t();
LABEL_341:
          v468.m128i_i8[0] = *(_BYTE *)(a1 + 109);
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v215 = v466->m128i_i32[3];
          v464 = *(_QWORD *)(a1 + 832);
          v465.m128i_i32[0] = v215;
          v467.m128i_i32[0] = get_dtype_size();
          v468.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v464, v467.m128i_u32[0], 2);
          v71 = v465.m128i_u32[0];
          sub_32F0D0((__int64)v492, v465.m128i_i32[0], v467.m128i_i32[0]);
          clear_tinfo_t();
          v461 = *((void **)v213 + 1);
          if ( a4 == 7 || a4 == 1 )
          {
            qsnprintf();
            v424 = *((_DWORD *)v213 + 4);
            v461 = s;
            v467.m128i_i32[0] = v424;
            v425 = v467.m128i_i64[1];
            *(_DWORD *)(v467.m128i_i64[1] + 12) = 0;
            *(_BYTE *)(v425 + 16) = 1;
          }
          else
          {
            v73 = 0;
            v98 = v461 == nullptr;
            v467.m128i_i32[0] = *((_DWORD *)v213 + 4);
            v216 = v467.m128i_i64[1];
            *(_DWORD *)(v467.m128i_i64[1] + 12) = 0;
            *(_BYTE *)(v216 + 16) = 1;
            if ( v98 )
            {
              LODWORD(v464) = 34;
              v465.m128i_i32[0] = 4;
              v456 = 1;
              LODWORD(v460) = 2;
              break;
            }
          }
          v426 = *(_QWORD *)(a1 + 8);
          v14 = nullptr;
          LOBYTE(v457) = 1;
          v27 = 1;
          LODWORD(v460) = 2;
          v453 = v426;
          v456 = 1;
          v465.m128i_i32[0] = 4;
          v454 = 0;
          LODWORD(v464) = 34;
          goto LABEL_28;
        case 0x18:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          v257 = "_disable";
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x28:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          v257 = "__halt";
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 12;
          goto LABEL_455;
        case 0x2B:
          if ( a4 == 2 )
          {
            v465.m128i_i64[0] = (__int64)"dword";
          }
          else if ( a4 > 2u )
          {
            if ( a4 != 7 )
              goto LABEL_6;
            v465.m128i_i64[0] = (__int64)"qword";
          }
          else
          {
            v365 = "word";
            if ( !a4 )
              v365 = "byte";
            v465.m128i_i64[0] = (__int64)v365;
          }
          if ( *(_BYTE *)(a1 + 109) != 1 )
          {
            if ( v466[1].m128i_i8[0] )
            {
              v366 = v466->m128i_i32[3];
              v367 = v366;
            }
            else
            {
              if ( !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
                sub_3EB430(0.0);
              v367 = v466->m128i_i32[3];
              v366 = v367;
              if ( !v466[1].m128i_i8[0] )
              {
                if ( !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
                  sub_3EB430(0.0);
                v366 = v466->m128i_i32[3];
              }
            }
            sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), 1, v366, v367, 0);
          }
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v368 = *(_QWORD *)(a1 + 832);
          LODWORD(v464) = v466->m128i_i32[3];
          v468.m128i_i64[0] = (__int64)s1;
          LODWORD(v461) = get_dtype_size();
          sub_32C430((__int64 *)s1, v368, (unsigned int)v461, 2);
          sub_32F0D0((__int64)v487, v464, (int)v461);
          clear_tinfo_t();
          qsnprintf();
          LODWORD(v464) = 35;
          if ( a4 != 1 )
          {
            LODWORD(v464) = 36;
            if ( a4 != 2 )
            {
              LODWORD(v464) = 34;
              if ( a4 )
                LODWORD(v464) = 37;
            }
          }
          v27 = 0;
          v14 = nullptr;
          LOBYTE(v457) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          v461 = s;
          v456 = 0;
          LODWORD(v460) = 1;
          goto LABEL_27;
        case 0x2E:
          v321 = *(_QWORD *)(a1 + 72);
          if ( v321 == 41 )
          {
            sub_3F1CC0((__int64)v487, (__int64)v10, v465.m128i_i32[0], 2, 2);
            LOBYTE(v457) = 0;
            v456 = 0;
            v461 = "__fastfail";
            LODWORD(v464) = 0;
            LODWORD(v460) = 1;
            v467.m128i_i32[0] = 15;
            v465.m128i_i32[0] = 12;
            v454 = 1;
            v468.m128i_i64[0] = (__int64)s1;
            goto LABEL_93;
          }
          if ( v321 != 44 )
            goto LABEL_6;
          v4.m128i_i64[0] = 0;
          memset(s1, 0, sizeof(s1));
          v468.m128i_i64[0] = (__int64)s1;
          if ( get_cmt() <= 0 || s1[1] <= &byte_9[2] )
          {
            v322 = s1[0];
            v465.m128i_i32[0] = 4;
            v461 = "__int2c";
            LODWORD(v460) = 0;
          }
          else
          {
            v322 = s1[0];
            if ( !strncmp(s1[0], "NT_ASSERT(\"", 0xBu) )
            {
              v323 = strrchr(v322 + 11, 34);
              if ( v323 && v323[1] == 41 )
                *v323 = 0;
              v487[0] = 3;
              v489 = qstrdup();
              v488 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
              copy_tinfo_t();
              v324 = *(_QWORD *)(a1 + 40);
              v322 = s1[0];
              v465.m128i_i32[0] = 12;
              LODWORD(v460) = 1;
              v490 = v324;
              v461 = "NT_ASSERT";
            }
            else
            {
              v465.m128i_i32[0] = 4;
              v461 = "__int2c";
              LODWORD(v460) = 0;
            }
          }
          if ( v322 )
          {
            s1[1] = nullptr;
            qfree((__int64)v322);
          }
          LOBYTE(v457) = 0;
          v27 = 0;
          LODWORD(v464) = 0;
          v14 = nullptr;
          v454 = 1;
          v456 = 0;
          goto LABEL_27;
        case 0x30:
          LOBYTE(v457) = 0;
          v27 = 0;
          LODWORD(v464) = 0;
          v454 = 1;
          if ( (get_flags_ex() & 0x10000) != 0 )
            v465.m128i_i32[0] = 4;
          else
            v465.m128i_i32[0] = 12;
          v14 = nullptr;
          v257 = "__debugbreak";
          goto LABEL_455;
        case 0x61:
        case 0x62:
        case 0xDE:
          sub_3FAC20(a1, (__int64)v487, 1, v467.m128i_i64[1], v475, 0.0);
          v245 = *(_WORD *)(a1 + 48);
          v246 = 6;
          v461 = "__lidt";
          if ( v245 != 98 )
          {
            v461 = "__lgdt";
            if ( v245 != 97 )
            {
              v461 = "__invlpg";
              if ( v245 == 222 )
                v246 = 4096;
            }
          }
          sub_3F0D80(v478, a1 + 64, v246);
          LOBYTE(v457) = 0;
          LODWORD(v460) = 1;
          v456 = 0;
          goto LABEL_388;
        case 0x78:
          if ( (unsigned __int64)get_dtype_size() <= 3 )
          {
            if ( v466[1].m128i_i8[0] )
            {
              v283 = v466->m128i_i32[3];
              v284 = v283;
            }
            else
            {
              if ( !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
                sub_3EB430(0.0);
              v284 = v466->m128i_i32[3];
              v283 = v284;
              if ( !v466[1].m128i_i8[0] )
              {
                if ( !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
                  sub_3EB430(0.0);
                v283 = v466->m128i_i32[3];
              }
            }
            sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), 2, v283, v284, 0);
          }
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v285 = *(_QWORD *)(a1 + 832);
          v286 = v466->m128i_i32[3];
          v468.m128i_i64[0] = (__int64)s1;
          v465.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v285, v465.m128i_u32[0], 2);
          sub_32F0D0((__int64)v487, v286, v465.m128i_i32[0]);
          v27 = 1;
          v14 = nullptr;
          clear_tinfo_t();
          LOBYTE(v457) = 1;
          LODWORD(v464) = 36;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          v461 = "__segmentlimit";
          v456 = 1;
          LODWORD(v460) = 1;
          goto LABEL_27;
        case 0x7B:
          v292 = *(_BYTE *)(a1 + 65);
          if ( v292 == 10 )
          {
            v383 = *(_BYTE *)(a1 + 109);
            qsnprintf();
            v384 = 36;
            if ( v383 == 7 )
              v384 = 37;
            v385 = sub_3FAE20((__int64)v466, 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v487, v385, v384);
            LODWORD(v460) = 1;
            LODWORD(v464) = 0;
            v461 = s;
            v456 = 0;
          }
          else if ( v292 == 9 )
          {
            v379 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_3F7E20(a1, 3u, 2, *(unsigned __int16 *)(a1 + 70), 0x3BEA45E214ADDC55LL, v379, 0);
            v380 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v487, v380, 36);
            v381 = 36;
            if ( *(_BYTE *)(a1 + 109) == 7 )
              v381 = 37;
            v382 = sub_3FAE20((__int64)v466, 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v492, v382, v381);
            LODWORD(v460) = 2;
            LODWORD(v464) = 0;
            v461 = "__writedr";
            v456 = 0;
          }
          else
          {
            v293 = *(_BYTE *)(a1 + 105);
            if ( v293 == 10 )
            {
              qsnprintf();
              LODWORD(v464) = 36;
              if ( *(_BYTE *)(a1 + 69) == 7 )
                LODWORD(v464) = 37;
              sub_3F6F70(a1);
              v456 = 1;
              LODWORD(v460) = 0;
              v461 = s;
            }
            else if ( v293 == 9 )
            {
              v448 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
              sub_3F7E20(a1, 3u, 2, *(unsigned __int16 *)(a1 + 110), 0x3BEA45E214ADDC55LL, v448, 0);
              v449 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
              sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v487, v449, 36);
              LODWORD(v464) = 36;
              if ( *(_BYTE *)(a1 + 69) == 7 )
                LODWORD(v464) = 37;
              v456 = 1;
              v461 = "__readdr";
              LODWORD(v460) = 1;
            }
            else
            {
              LODWORD(v464) = 0;
              v461 = nullptr;
              v456 = 0;
              LODWORD(v460) = 0;
            }
          }
          v294 = *(_QWORD *)(a1 + 8);
          memset(s1, 0, sizeof(s1));
          v486 = 0;
          v295 = *(_QWORD *)(v294 + 544);
          v296 = *(_QWORD *)(v294 + 536);
          if ( v296 + v295 - 1 >= v296 )
          {
            s1[2] = (char *)qvector_reserve((__int64)&s1[2], 0, 1, 16);
            *(__m128i *)&s1[2][16 * v486] = _mm_unpacklo_epi64((__m128i)v296, (__m128i)v295);
            *(_QWORD *)&v486 = v486 + 1;
          }
          v468.m128i_i64[0] = (__int64)s1;
          sub_64280(v478, (__int64 *)s1);
          sub_316CB0((__int64 *)&src, (__int64 **)&s1[2], v297, v298);
          if ( s1[2] )
          {
            *(_QWORD *)&v486 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v299 = *(_QWORD *)(a1 + 8);
          v4.m128i_i64[0] = 0;
          memset(s1, 0, sizeof(s1));
          v486 = 0;
          v300 = *(_QWORD *)(v299 + 696);
          v457 = *(_QWORD *)(v299 + 704);
          v465.m128i_i64[0] = v300;
          if ( v300 + v457 - 1 >= v300 )
          {
            s1[2] = (char *)qvector_reserve((__int64)&s1[2], 0, 1, 16);
            v4 = (__m128i)_mm_loadh_ps((const double *)&v457);
            *(__m128i *)&s1[2][16 * v486] = v4;
            *(_QWORD *)&v486 = v486 + 1;
          }
          sub_64280(v478, (__int64 *)v468.m128i_i64[0]);
          sub_316CB0((__int64 *)&src, (__int64 **)&s1[2], v301, v302);
          if ( s1[2] )
          {
            *(_QWORD *)&v486 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v71 = v456;
          if ( v456 )
          {
            if ( !v461 )
            {
              v465.m128i_i32[0] = 4;
              break;
            }
            v441 = *(_QWORD *)(a1 + 8);
            v27 = v456;
            v14 = nullptr;
            LOBYTE(v457) = 1;
            v465.m128i_i32[0] = 4;
            v453 = v441;
            v454 = 1;
            goto LABEL_28;
          }
          sub_3EBDD0(v475, (__int64)v478);
          if ( !v461 )
            goto LABEL_6;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          LOBYTE(v457) = 0;
          goto LABEL_112;
        case 0x84:
          v287 = *(_BYTE *)(a1 + 109);
          LOBYTE(v464) = v287;
          if ( v287 == 2 )
          {
            v465.m128i_i64[0] = (__int64)"dword";
          }
          else if ( v287 > 2u )
          {
            if ( (_BYTE)v464 != 7 )
              goto LABEL_6;
            v465.m128i_i64[0] = (__int64)"qword";
          }
          else
          {
            v98 = v287 == 0;
            v288 = "word";
            if ( v98 )
              v288 = "byte";
            v465.m128i_i64[0] = (__int64)v288;
          }
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
              sub_3EB430(0.0);
            v10 = *(_DWORD **)(a1 + 832);
          }
          LODWORD(v461) = *(_DWORD *)(v467.m128i_i64[1] + 12);
          v289 = get_dtype_size();
          v468.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v10, v289, 2);
          sub_32F0D0((__int64)v487, (int)v461, v289);
          clear_tinfo_t();
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v290 = *(_QWORD *)(a1 + 832);
          LODWORD(v461) = v466->m128i_i32[3];
          v291 = get_dtype_size();
          sub_32C430((__int64 *)v468.m128i_i64[0], v290, v291, 2);
          sub_32F0D0((__int64)v492, (int)v461, v291);
          clear_tinfo_t();
          qsnprintf();
          LOBYTE(v457) = 0;
          LODWORD(v460) = 2;
          v456 = 0;
          v461 = s;
          v465.m128i_i32[0] = 4;
          v454 = 1;
          LODWORD(v464) = 0;
          goto LABEL_93;
        case 0x8C:
        case 0x8E:
          v240 = 140;
          if ( v10[21] == 8 )
            v240 = 142;
          if ( (_DWORD)v43 != v240 )
            goto LABEL_6;
          sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
          sub_3F8EE0(a1);
          v241 = 39;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
            v241 = 37;
          v242 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
          sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v487, v242, v241);
          sub_3F0F00(v475, 0, 5);
          LOBYTE(v457) = 0;
          v243 = "__writeeflags";
          LODWORD(v460) = 1;
          v456 = 0;
          goto LABEL_387;
        case 0x95:
        case 0x97:
          v234 = 149;
          if ( v10[21] == 8 )
            v234 = 151;
          if ( (_DWORD)v43 != v234 )
            goto LABEL_6;
          v235 = *(_QWORD **)(a1 + 8);
          v461 = "__readeflags";
          if ( *(_QWORD *)(a1 + 40) == v235[5] )
            v461 = "__getcallerseflags";
          v236 = 39;
          if ( v10[20] == 8 )
            v236 = 37;
          LODWORD(v464) = v236;
          v468.m128i_i64[0] = (__int64)s1;
          sub_3EBD60(s1, v236);
          v237 = get_tinfo_size();
          v238 = sub_138140(v235, v237, 1);
          v239 = v467.m128i_i64[1];
          v27 = 1;
          v14 = nullptr;
          *(_DWORD *)(v467.m128i_i64[1] + 12) = v238;
          *(_BYTE *)(v239 + 16) = 1;
          clear_tinfo_t();
          LOBYTE(v457) = 1;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          v467.m128i_i32[0] = 16;
          v456 = 1;
          LODWORD(v460) = 0;
          goto LABEL_27;
        case 0x9A:
        case 0x9B:
          if ( a4 != 2 )
            goto LABEL_6;
          v230 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
          sub_3F1CC0((__int64)v487, *(_QWORD *)(a1 + 832), v230, 2, 2);
          HIDWORD(v493) = sub_3FAE20((__int64)v466, 0.0, si128);
          v492[0] = 1;
          LODWORD(v493) = 1;
          s1[0] = (_BYTE *)(&qword_20 + 2);
          v468.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          if ( *(_WORD *)(a1 + 48) == 154 )
          {
            v231 = 27;
            v461 = "_lrotl";
          }
          else
          {
            v231 = 28;
            v461 = "_lrotr";
          }
          v232 = (int)sub_3FAE20((__int64)v466, 0.0, si128);
          v233 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
          sub_3F7E20(a1, v231, 2, v233, v232, 0, 0);
          v454 = 0;
          LODWORD(v464) = 36;
          v465.m128i_i32[0] = 20;
          v456 = 1;
          LODWORD(v460) = 2;
          LOBYTE(v457) = 1;
          goto LABEL_112;
        case 0xC6:
        case 0xC7:
LABEL_363:
          sub_3FAC20(a1, (__int64)v487, 1, v467.m128i_i64[1], v475, 0.0);
          v227 = 6;
          if ( *(_WORD *)(a1 + 48) == 627 )
            v227 = 8;
          sub_3F0D80(v475, a1 + 64, v227);
          v228 = *(_WORD *)(a1 + 48);
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          if ( v228 == 199 )
          {
            v229 = "__sidt";
          }
          else if ( v228 == 198 )
          {
            v229 = "__sgdt";
          }
          else
          {
            v229 = "__vmx_vmptrst";
          }
          v461 = v229;
          v456 = 0;
          LODWORD(v460) = 1;
          v468.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0xCE:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          v257 = "_enable";
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0xD6:
          goto LABEL_129;
        case 0xDA:
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
              sub_3EB430(0.0);
            v12 = *(_QWORD *)(a1 + 832);
          }
          v468.m128i_i64[0] = v12;
          v467.m128i_i32[0] = *(_DWORD *)(v467.m128i_i64[1] + 12);
          v316 = get_dtype_size();
          v468.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v12, v316, 2);
          sub_32F0D0((__int64)v487, v467.m128i_i32[0], v316);
          clear_tinfo_t();
          if ( a4 == 7 )
          {
            v27 = 1;
            v14 = nullptr;
            LOBYTE(v457) = 1;
            LODWORD(v464) = 37;
            v454 = 0;
            v465.m128i_i32[0] = 20;
            v467.m128i_i32[0] = 12;
            v461 = "_byteswap_uint64";
            v456 = 1;
            LODWORD(v460) = 1;
          }
          else
          {
            v98 = a4 == 1;
            LOBYTE(v457) = 1;
            v27 = 1;
            v14 = nullptr;
            if ( v98 )
            {
              LODWORD(v464) = 35;
              v454 = 0;
              v465.m128i_i32[0] = 20;
              v467.m128i_i32[0] = 12;
              v461 = "_byteswap_ushort";
            }
            else
            {
              LODWORD(v464) = 36;
              v454 = 0;
              v465.m128i_i32[0] = 20;
              v467.m128i_i32[0] = 12;
              v461 = "_byteswap_ulong";
            }
            v456 = 1;
            LODWORD(v460) = 1;
          }
          goto LABEL_27;
        case 0xDD:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          v257 = "__wbinvd";
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0xDF:
        case 0x101:
          v244 = get_dtype_size();
          v468.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v10, v244, 2);
          sub_32F0D0((__int64)v487, v465.m128i_i32[0], v244);
          clear_tinfo_t();
          v98 = *(_WORD *)(a1 + 48) == 223;
          v461 = "__readpmc";
          if ( v98 )
            v461 = "__readmsr";
          LOBYTE(v457) = 0;
          v27 = 0;
          LODWORD(v464) = 37;
LABEL_392:
          v454 = 1;
          v14 = nullptr;
          v465.m128i_i32[0] = 4;
          v456 = 0;
          LODWORD(v460) = 1;
          goto LABEL_27;
        case 0xE0:
          v315 = get_dtype_size();
          v468.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v10, v315, 2);
          sub_32F0D0((__int64)v487, v465.m128i_i32[0], v315);
          clear_tinfo_t();
          sub_1252A0((__int64)v492, 8, v462, 4);
          s1[0] = (_BYTE *)(&qword_20 + 5);
          copy_tinfo_t();
          v14 = nullptr;
          v27 = 0;
          clear_tinfo_t();
          LOBYTE(v457) = 0;
          LODWORD(v464) = 0;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          v461 = "__writemsr";
          v456 = 0;
          LODWORD(v460) = 2;
          goto LABEL_27;
        case 0xE3:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          v257 = "__rdtsc";
          LODWORD(v464) = 37;
          v454 = 1;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x15F:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          LODWORD(v464) = 0;
          v257 = "_m_empty";
          v454 = 0;
          v465.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x160:
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          v361 = *(char *)(a1 + 109);
          if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 109) )
          {
            v362 = *(_BYTE *)(a1 + 65);
            if ( v362 != 12 )
            {
              if ( v362 != 1 )
              {
                if ( v362 != 13 )
                  goto LABEL_640;
LABEL_883:
                v439 = sub_3FAE20((__int64)v466, 0.0, si128);
                sub_3F1CC0((__int64)v487, *(_QWORD *)(a1 + 832), v439, 2, 2);
                v454 = 0;
                v27 = 1;
                v14 = nullptr;
                v356 = "_mm_cvtsi32_si128";
                LODWORD(v464) = -13;
                v465.m128i_i32[0] = 20;
                goto LABEL_629;
              }
              v438 = *(_WORD *)(a1 + 70);
              if ( (unsigned __int16)(v438 - 56) > 7u )
              {
                if ( (unsigned __int16)(v438 - 64) > 0xFu )
                {
LABEL_640:
                  v363 = *(_BYTE *)(a1 + 105);
                  if ( v363 != 12 )
                  {
                    if ( v363 != 1 )
                    {
                      if ( v363 != 13 )
                        goto LABEL_6;
                      goto LABEL_643;
                    }
                    v443 = *(_WORD *)(a1 + 110);
                    if ( (unsigned __int16)(v443 - 56) > 7u )
                    {
                      if ( (unsigned __int16)(v443 - 64) <= 0xFu )
                      {
LABEL_643:
                        v364 = sub_3FAE20((__int64)v466, 0.0, si128);
                        sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v487, v364, -13);
                        v454 = 0;
                        v27 = 1;
                        v14 = nullptr;
                        v356 = "_mm_cvtsi128_si32";
                        LODWORD(v464) = 7;
                        v465.m128i_i32[0] = 20;
                        goto LABEL_629;
                      }
                      goto LABEL_6;
                    }
                  }
                  v444 = sub_3FAE20((__int64)v466, 0.0, si128);
                  sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v487, v444, -12);
                  v454 = 0;
                  v27 = 1;
                  v14 = nullptr;
                  v356 = "_mm_cvtsi64_si32";
                  LODWORD(v464) = 7;
                  v465.m128i_i32[0] = 20;
                  goto LABEL_629;
                }
                goto LABEL_883;
              }
            }
            v435 = sub_3FAE20((__int64)v466, 0.0, si128);
            sub_3F1CC0((__int64)v487, *(_QWORD *)(a1 + 832), v435, 2, 2);
            v454 = 0;
            v27 = 1;
            v14 = nullptr;
            v356 = "_mm_cvtsi32_si64";
            LODWORD(v464) = -12;
            v465.m128i_i32[0] = 20;
LABEL_629:
            v461 = v356;
            v456 = 2;
            LODWORD(v460) = 1;
            v468.m128i_i64[0] = (__int64)s1;
            goto LABEL_27;
          }
          v440 = sub_3FAE20((__int64)v466, 0.0, si128);
LABEL_885:
          v71 = *(_QWORD *)(a1 + 832);
          sub_3F1CC0((__int64)v487, v71, v440, v361, 2);
          v465.m128i_i32[0] = 20;
          v73 = 0;
          LODWORD(v464) = 0;
          v456 = 2;
          LODWORD(v460) = 1;
          break;
        case 0x161:
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          v352 = *(_BYTE *)(a1 + 109);
          v454 = *(_BYTE *)(a1 + 69) == v352 && *(_BYTE *)(a1 + 69) <= 7u;
          if ( v454 )
          {
            v361 = v352;
            v440 = sub_3FAE20((__int64)v466, 0.0, si128);
            goto LABEL_885;
          }
          v353 = *(_BYTE *)(a1 + 65);
          if ( v353 == 13 || v353 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu )
          {
            v354 = *(_BYTE *)(a1 + 105);
            if ( v354 == 13 || v354 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) <= 0xFu )
            {
              v355 = sub_3FAE20((__int64)v466, 0.0, si128);
              sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v487, v355, -13);
              v27 = 1;
              v14 = nullptr;
              v356 = "_mm_move_epi64";
              LODWORD(v464) = -13;
              v465.m128i_i32[0] = 20;
              goto LABEL_629;
            }
          }
LABEL_289:
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          v189 = *(_WORD *)(a1 + 48);
          v190 = &word_4F11E0;
          if ( v189 != word_4F11E0 )
          {
            do
              v190 += 12;
            while ( *v190 != v189 );
          }
          v191 = *(_BYTE *)(a1 + 65);
          if ( v191 == 13 )
            goto LABEL_665;
          if ( v191 == 1 )
          {
            if ( (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu )
            {
LABEL_665:
              v369 = *(_BYTE *)(a1 + 105);
              if ( v369 == 13 )
                goto LABEL_6;
              if ( v369 != 1 )
              {
                qsnprintf();
                sub_3FA780(a1, (__int64)v487, *((_DWORD *)v190 + 4), (__int64)v466, 0.0, 64, 0xFFFFFFFF);
                sub_3F0D80(v478, a1 + 104, 0);
                v370 = *((_DWORD *)v190 + 5);
                v27 = 1;
                v14 = nullptr;
                v454 = 0;
                v465.m128i_i32[0] = 20;
                v356 = s;
                LODWORD(v464) = v370;
                goto LABEL_629;
              }
              if ( (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu && v189 == 353 )
              {
                v432 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
                v433 = sub_3FAE20((__int64)v466, 0.0, si128);
                sub_1D6840(a1, 7, a4, v433, v432, 0);
                goto LABEL_272;
              }
              goto LABEL_6;
            }
            if ( v189 == 353 )
            {
              v393 = (int)sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
              v452 = sub_3FAE20((__int64)v466, 0.0, si128);
              sub_3F7E20(a1, 4u, 7, v452, 0x3BEA45E214ADDC55LL, v393, 0);
              goto LABEL_272;
            }
            v468.m128i_i64[0] = get_dtype_size();
            v371 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_3F0F00(v475, v371, v468.m128i_i32[0]);
            v450 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_32F110((__int64)v487, *(_QWORD *)(a1 + 832), v450, v468.m128i_u32[0], 0, v468.m128i_i32[0], 2);
          }
          else
          {
            sub_3FAC20(a1, (__int64)v487, *((_DWORD *)v190 + 4), v467.m128i_i64[1], v475, 0.0);
          }
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v465.m128i_i32[0] = v466->m128i_i32[3];
          v192 = *((_DWORD *)v190 + 5);
          if ( v192 < 0 )
          {
            s1[0] = nullptr;
            v468.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v192;
            v468.m128i_i64[0] = (__int64)s1;
          }
          sub_32F0D0((__int64)v492, v465.m128i_i32[0], 16);
          clear_tinfo_t();
          if ( ((*(_WORD *)(a1 + 48) - 446) & 0xFFFD) != 0 )
          {
            sub_3FB270(a1, 0, SHIDWORD(v493), 0, 0.0, si128);
            goto LABEL_272;
          }
          qsnprintf();
          LOBYTE(v457) = 0;
          LODWORD(v460) = 2;
          v456 = 0;
          v461 = s;
          v465.m128i_i32[0] = 20;
          v454 = 0;
          LODWORD(v464) = 0;
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
          v468.m128i_i32[0] = v10[114];
          v193 = sub_3F7000(a1);
          v44 = v468.m128i_i32[0];
          if ( !v193 || ((*(_QWORD *)(a1 + 104) ^ *(_QWORD *)(a1 + 64)) & 0xFFFF00000000FF00LL) != 0 )
            goto LABEL_113;
          v194 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
          sub_3F7E20(a1, 3u, a4, 0, 0x3BEA45E214ADDC55LL, v194, 0);
          v195 = *(_WORD *)(a1 + 48);
          if ( v195 != 468 && v195 != 397 )
          {
            v468.m128i_i64[0] = (int)sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            v196 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
            sub_3F7E20(a1, 7u, a4, v196, 0x3BEA45E214ADDC55LL, v468.m128i_i64[0], 0);
          }
          goto LABEL_272;
        case 0x18E:
LABEL_346:
          v217 = (char *)&unk_4E9DE0;
          while ( (_WORD)v43 != *(_WORD *)v217 )
          {
            v217 += 16;
            if ( algn_4E9E50 == v217 )
            {
              if ( !under_debugger )
                sub_383060(0xCD2Cu, 0.0);
              goto LABEL_944;
            }
          }
          v461 = *((void **)v217 + 1);
          sub_3FAC20(a1, (__int64)v487, 1, v467.m128i_i64[1], v475, 0.0);
          v394 = 512;
          if ( *(_WORD *)(a1 + 48) == 714 )
            v394 = 832;
          sub_3F0D80(v475, a1 + 64, v394);
          v395 = *(_WORD *)(a1 + 48);
          if ( v395 == 398 || v395 == 1799 )
          {
LABEL_781:
            v454 = 1;
            v465.m128i_i32[0] = 4;
            LODWORD(v460) = 1;
          }
          else
          {
LABEL_762:
            v465.m128i_i64[0] = *(_QWORD *)(a1 + 832);
            v396 = get_dtype_size();
            v468.m128i_i64[0] = (__int64)s1;
            sub_32C430((__int64 *)s1, v465.m128i_i64[0], v396, 2);
            sub_32F0D0((__int64)v492, 8, v396);
            clear_tinfo_t();
            v454 = 1;
            v465.m128i_i32[0] = 4;
            LODWORD(v460) = 2;
          }
LABEL_315:
          if ( !v461 )
            goto LABEL_6;
          v204 = *(_QWORD *)(a1 + 8);
          LOBYTE(v457) = 0;
          v14 = nullptr;
          v27 = 0;
          v456 = 0;
          v453 = v204;
          LODWORD(v464) = 0;
          v468.m128i_i64[0] = (__int64)s1;
          goto LABEL_28;
        case 0x18F:
LABEL_592:
          v331 = (char *)&unk_4E9DE0;
          while ( (_WORD)v43 != *(_WORD *)v331 )
          {
            v331 += 16;
            if ( algn_4E9E50 == v331 )
            {
              if ( !under_debugger )
                sub_383060(0xCD2Cu, 0.0);
              goto LABEL_944;
            }
          }
          v461 = *((void **)v331 + 1);
          sub_3FA780(a1, (__int64)v487, 1, v467.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v478, a1 + 64, 0);
          sub_648D0(v475, v478);
          v399 = v480;
          v468.m128i_i64[0] = 0;
          if ( (_QWORD)v480 )
          {
            v468.m128i_i64[0] = qalloc_or_throw(16 * v480, (__int64)v478, v397, v398);
            memcpy((void *)v468.m128i_i64[0], src, 16 * v399);
          }
          v400 = _mm_unpacklo_epi64((__m128i)v399, (__m128i)v399);
          if ( v476 )
          {
            v465 = v400;
            v477.m128i_i64[0] = 0;
            qfree((__int64)v476);
            v400 = _mm_load_si128(&v465);
          }
          v477 = v400;
          v476 = (__int64 *)v468.m128i_i64[0];
          v401 = *(_QWORD *)(a1 + 832);
          v402 = *(_DWORD *)(v401 + 448);
          v403 = *(_DWORD *)(v401 + 492);
          s1[0] = nullptr;
          s1[1] = nullptr;
          v468.m128i_i64[0] = (__int64)s1;
          sub_63E80((__int64 *)s1, v403, 8 * v402);
          s1[2] = nullptr;
          v486 = 0;
          sub_64280(v475, (__int64 *)v468.m128i_i64[0]);
          sub_316CB0((__int64 *)&v476, (__int64 **)&s1[2], v404, v405);
          if ( s1[2] )
          {
            *(_QWORD *)&v486 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v468.m128i_i64[0], 0, 5);
          s1[2] = nullptr;
          v486 = 0;
          sub_64280(v475, (__int64 *)v468.m128i_i64[0]);
          sub_316CB0((__int64 *)&v476, (__int64 **)&s1[2], v406, v407);
          if ( s1[2] )
          {
            *(_QWORD *)&v486 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v408 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 688LL);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v468.m128i_i64[0], v408, 3);
          s1[2] = nullptr;
          v486 = 0;
          sub_64280(v475, (__int64 *)v468.m128i_i64[0]);
          sub_316CB0((__int64 *)&v476, (__int64 **)&s1[2], v409, v410);
          if ( s1[2] )
          {
            *(_QWORD *)&v486 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v411 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 528LL);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v468.m128i_i64[0], v411, 64);
          s1[2] = nullptr;
          v486 = 0;
          sub_64280(v475, (__int64 *)v468.m128i_i64[0]);
          sub_316CB0((__int64 *)&v476, (__int64 **)&s1[2], v412, v413);
          if ( s1[2] )
          {
            *(_QWORD *)&v486 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v414 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v468.m128i_i64[0], v414, 256);
          v4.m128i_i64[0] = 0;
          s1[2] = nullptr;
          v486 = 0;
          sub_64280(v475, (__int64 *)v468.m128i_i64[0]);
          sub_316CB0((__int64 *)&v476, (__int64 **)&s1[2], v415, v416);
          if ( s1[2] )
          {
            *(_QWORD *)&v486 = 0;
            qfree((__int64)s1[2]);
          }
          qfree((__int64)s1[0]);
          v417 = *(_WORD *)(a1 + 48);
          if ( v417 == 399 || v417 == 1800 )
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
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v115 = v466->m128i_i32[3];
          v468.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          sub_32F0D0((__int64)v492, v115, 8);
          clear_tinfo_t();
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v116 = *(_DWORD *)(v467.m128i_i64[1] + 12);
          copy_tinfo_t();
          sub_32F0D0((__int64)v487, v116, 8);
          clear_tinfo_t();
          LODWORD(v460) = 2;
          goto LABEL_182;
        case 0x19C:
        case 0x19D:
        case 0x19E:
        case 0x19F:
LABEL_305:
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v197 = v466->m128i_i32[3];
          v468.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          sub_32F0D0((__int64)v487, v197, 8);
          clear_tinfo_t();
          LODWORD(v460) = 1;
LABEL_182:
          LOBYTE(v457) = sub_3F7000(a1);
          if ( !(_BYTE)v457 )
            goto LABEL_6;
          qsnprintf();
          v27 = 1;
          v14 = nullptr;
          LODWORD(v464) = -12;
          v454 = 0;
          v465.m128i_i32[0] = 20;
          v461 = s;
          v456 = 2;
          goto LABEL_27;
        case 0x1A5:
          LOBYTE(v457) = 0;
          v27 = 0;
          v14 = nullptr;
          LODWORD(v464) = 0;
          v257 = "_m_femms";
          v454 = 0;
          v465.m128i_i32[0] = 4;
LABEL_455:
          v461 = v257;
          v456 = 0;
          LODWORD(v460) = 0;
          v468.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x1A6:
          sub_3FA780(a1, (__int64)v487, 1, v467.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v478, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v457) = 0;
          v243 = "_m_prefetch";
          LODWORD(v460) = 1;
          v456 = 0;
          goto LABEL_387;
        case 0x1A7:
          sub_3FA780(a1, (__int64)v487, 1, v467.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v478, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v457) = 0;
          v243 = "_m_prefetchw";
          LODWORD(v460) = 1;
          v456 = 0;
LABEL_387:
          v461 = v243;
LABEL_388:
          v465.m128i_i32[0] = 4;
          v454 = 1;
          LODWORD(v464) = 0;
          v468.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x1A9:
          goto LABEL_254;
        case 0x1AE:
LABEL_833:
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v431 = v466->m128i_i32[3];
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          sub_3FA190(a1, *(_DWORD *)(v467.m128i_i64[1] + 12), v431);
          sub_3FB3E0(a1, 12);
          sub_3F5050(a1);
          goto LABEL_272;
        case 0x1AF:
LABEL_751:
          v465.m128i_i64[0] = (__int64)&word_4F0A60;
          goto LABEL_197;
        case 0x1B0:
        case 0x1B3:
LABEL_242:
          v164 = *(_BYTE *)(a1 + 105);
          v465.m128i_i64[0] = (__int64)&word_4F0C40;
          if ( v164 != 13 )
          {
            v465.m128i_i64[0] = (__int64)&word_4F0DC0;
            if ( v164 == 1 )
            {
              v165 = *(_WORD *)(a1 + 110);
              v465.m128i_i64[0] = (__int64)&word_4F0C40;
              if ( (unsigned __int16)(v165 - 64) > 0xFu )
                v465.m128i_i64[0] = (__int64)&word_4F0DC0;
            }
          }
          goto LABEL_197;
        case 0x1B1:
          LOBYTE(v461) = 3;
LABEL_729:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v464) = 0;
          LOBYTE(v457) = 0;
          v465.m128i_i32[0] = 20;
          v455 = 65;
          v456 = 0;
          LODWORD(v460) = 0;
          v463 = 2;
          goto LABEL_483;
        case 0x1B2:
          v463 = 3;
          LODWORD(v464) = 0;
          LODWORD(v460) = 0;
          goto LABEL_481;
        case 0x1B4:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LODWORD(v464) = 9;
          v463 = 3;
LABEL_479:
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v266 = v466->m128i_u32[3];
          s1[0] = (char *)(int)v464;
          v267 = get_tinfo_size();
          v12 = v266;
          v468.m128i_i64[0] = (__int64)s1;
          sub_32F0D0((__int64)v487, v266, v267);
          clear_tinfo_t();
          LODWORD(v460) = 1;
LABEL_481:
          if ( !(unsigned __int8)sub_3F7000(a1) )
            goto LABEL_6;
          LOBYTE(v457) = 0;
          v465.m128i_i32[0] = 20;
          v455 = 63;
          v456 = 1;
          LOBYTE(v461) = 2;
LABEL_483:
          v28 = j__qalloc_or_throw(80, v12, v43, v13);
          v268 = *(_QWORD *)(a1 + 40);
          v467.m128i_i64[0] = v28 + 32;
          *(_QWORD *)(v28 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v28 + 40) = 0;
          *(_QWORD *)(v28 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v28 + 56) = 0;
          *(_QWORD *)(v28 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v28 + 72) = 0;
          sub_330970(v28, v268);
          v269 = (__m128i)(unsigned __int64)get_dtype_size();
          if ( !v466[1].m128i_i8[0] )
          {
            v468.m128i_i64[0] = v269.m128i_i64[0];
            v273 = sub_3FACB0((__int64)v466, *(double *)v269.m128i_i64, si128);
            v269 = _mm_loadl_epi64(&v468);
            if ( !v273 )
              sub_3EB430(*(double *)v269.m128i_i64);
          }
          s1[0] = &byte_1;
          v270 = (char *)_mm_unpacklo_epi32(v269, _mm_cvtsi32_si128(v466->m128i_u32[3])).m128i_u64[0];
          v468.m128i_i64[0] = (__int64)s1;
          *(char **)((char *)s1 + 4) = v270;
          sub_125180(v467.m128i_i64[0], (unsigned __int8 *)s1);
          sub_11CDA0(v468.m128i_i64[0]);
          v4 = (__m128i)(unsigned __int64)get_dtype_size();
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) )
          {
            v467.m128i_i64[0] = v4.m128i_i64[0];
            v272 = sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128);
            v4 = _mm_loadl_epi64(&v467);
            if ( !v272 )
              sub_3EB430(*(double *)v4.m128i_i64);
          }
          s1[0] = &byte_1;
          v271 = _mm_cvtsi32_si128(*(_DWORD *)(v467.m128i_i64[1] + 12));
          v467.m128i_i32[0] = *(_DWORD *)(v467.m128i_i64[1] + 12);
          v4.m128i_i64[0] = _mm_unpacklo_epi32(v4, v271).m128i_u64[0];
          *(__int64 *)((char *)s1 + 4) = v4.m128i_i64[0];
          sub_125180(v28 + 64, (unsigned __int8 *)v468.m128i_i64[0]);
          sub_11CDA0(v468.m128i_i64[0]);
          *(_DWORD *)(v28 + 4) |= 0x10u;
          v98 = (_BYTE)v457 == 0;
          *(_DWORD *)v28 = v455;
          if ( !v98 )
            sub_12B6F0(v28, *(_QWORD *)(a1 + 832), 9, 16, 1);
          v461 = nullptr;
          v14 = nullptr;
          goto LABEL_37;
        default:
          goto LABEL_6;
      }
LABEL_207:
      v28 = j__qalloc_or_throw(80, v71, v72, v73);
      v133 = *(_QWORD *)(a1 + 40);
      v468.m128i_i64[0] = v28 + 32;
      *(_QWORD *)(v28 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v28 + 40) = 0;
      *(_QWORD *)(v28 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v28 + 56) = 0;
      *(_QWORD *)(v28 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v28 + 72) = 0;
      sub_330970(v28, v133);
      sub_125180(v28 + 32, v487);
      v4 = _mm_cvtsi32_si128(v488);
      if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) )
      {
        v468.m128i_i32[0] = _mm_cvtsi128_si32(v4);
        v247 = sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128);
        v4 = _mm_cvtsi32_si128(v468.m128i_u32[0]);
        if ( !v247 )
          sub_3EB430(*(double *)v4.m128i_i64);
      }
      v14 = nullptr;
      v461 = nullptr;
      v134 = *(_DWORD *)(v467.m128i_i64[1] + 12);
      *(_BYTE *)(v28 + 64) = 1;
      *(_DWORD *)v28 = 4;
      v468.m128i_i32[0] = v134;
      v4.m128i_i64[0] = _mm_unpacklo_epi32(v4, _mm_cvtsi32_si128(v134)).m128i_u64[0];
      *(_QWORD *)(v28 + 68) = v4.m128i_i64[0];
LABEL_37:
      v40 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v40 + 84) == 8 && *(_DWORD *)(v28 + 68) == 4 )
      {
        if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) )
        {
          if ( !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
            sub_3EB430(*(double *)v4.m128i_i64);
          v40 = *(_QWORD *)(a1 + 832);
        }
        if ( *(_DWORD *)(v40 + 440) >= *(_DWORD *)(v467.m128i_i64[1] + 12) )
          sub_12B6F0(v28, v40, 9, 8, 1);
      }
      v41 = (_DWORD *)sub_B5290(*(_QWORD **)(a1 + 16), v28);
      if ( (v465.m128i_i8[0] & 8) != 0 )
        goto LABEL_51;
      v42 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v42 <= 0x101u )
      {
        if ( (unsigned __int16)v42 > 0x94u )
        {
          switch ( *(_WORD *)(a1 + 48) )
          {
            case 0x95:
            case 0x97:
              v41[1] |= 0x20000u;
              sub_3F8D40(a1, v41[18], v463);
              break;
            case 0x9A:
            case 0x9B:
              sub_3FB370(a1, 8);
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
              if ( (_DWORD)v460 == 3 )
              {
                if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v4.m128i_i64);
                }
                v251 = *(int *)(v467.m128i_i64[1] + 12);
                v468.m128i_i64[0] = v458;
                v252 = get_dtype_size();
                sub_1D6310(a1, 0x21u, v252, v468.m128i_i64[0], v251, 1, 0);
                LOWORD(v42) = *(_WORD *)(a1 + 48);
              }
              if ( (_WORD)v42 == 217 )
              {
                if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v4.m128i_i64);
                }
                v120 = v458;
                v121 = *(int *)(v467.m128i_i64[1] + 12);
                v468.m128i_i32[0] = v463;
                v467.m128i_i64[0] = v121;
                v122 = get_dtype_size();
                sub_1D6310(a1, 0x23u, v122, v120, v467.m128i_i64[0], 0, 0);
                if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v4.m128i_i64);
                }
                v467.m128i_i64[0] = *(int *)(v467.m128i_i64[1] + 12);
                v123 = get_dtype_size();
                sub_1D6310(a1, 0x1Eu, v123, v120, v467.m128i_i64[0], 3, 0);
                if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v4.m128i_i64);
                }
                v467.m128i_i64[0] = *(int *)(v467.m128i_i64[1] + 12);
                v124 = get_dtype_size();
                sub_1D6310(a1, 0xDu, v124, v120, v467.m128i_i64[0], v120, 0);
                sub_3FB720(a1, 0x1Fu, v458, v468.m128i_u32[0], 4);
                v125 = get_dtype_size();
                sub_1D6310(a1, 0x1Du, v125, v120, 0x3BEA45E214ADDC55LL, 2, 0);
              }
              break;
            case 0xDF:
            case 0xE3:
            case 0x101:
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
              {
                v113 = v462;
                v114 = get_dtype_size();
                sub_1D6310(a1, 4u, v114, 12, 0x3BEA45E214ADDC55LL, v113, 0);
                sub_1D6840(a1, 2, 7, 8, 8, 0);
                sub_1D6840(a1, 2, 7, v462, v462, 0);
              }
              break;
            default:
              goto LABEL_48;
          }
          goto LABEL_48;
        }
        if ( (unsigned __int16)v42 > 0x30u )
        {
          if ( (unsigned __int16)v42 > 0x8Fu )
            goto LABEL_48;
          if ( (unsigned __int16)v42 <= 0x7Au )
          {
            if ( (unsigned __int16)v42 > 0x62u )
            {
              if ( (_WORD)v42 == 120 )
                sub_3FB370(a1, 2);
              goto LABEL_48;
            }
            if ( (unsigned __int16)v42 <= 0x60u )
              goto LABEL_48;
          }
          else if ( ((1LL << ((unsigned __int8)v42 - 123)) & 0xA0601) == 0 )
          {
            if ( (_WORD)v42 == 143 )
            {
              v249 = v463;
              if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
                && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
              {
                sub_3EB430(*(double *)v4.m128i_i64);
              }
              sub_3F8D40(a1, *(_DWORD *)(v467.m128i_i64[1] + 12), v249);
              goto LABEL_48;
            }
            if ( (_WORD)v42 != 131 )
              goto LABEL_48;
LABEL_78:
            sub_3FB3E0(a1, 9);
            goto LABEL_79;
          }
        }
        else
        {
          if ( (unsigned __int16)v42 <= 0x21u )
          {
            if ( (unsigned __int16)v42 > 0xBu )
            {
              if ( (unsigned __int16)(v42 - 12) <= 3u )
                sub_3FB370(a1, 30);
              goto LABEL_48;
            }
            if ( (unsigned __int16)v42 > 9u )
            {
              if ( *v41 != 4 )
              {
                if ( !under_debugger )
                  sub_383060(0xC9CBu, *(double *)v4.m128i_i64);
                goto LABEL_944;
              }
              *v41 = 6;
              sub_3FB370(a1, 29);
              goto LABEL_48;
            }
            if ( (_WORD)v42 != 6 )
            {
LABEL_48:
              if ( v456 == 2 )
              {
                if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v4.m128i_i64);
                }
                sub_3FB270(a1, 0, *(_DWORD *)(v467.m128i_i64[1] + 12), 1, *(double *)v4.m128i_i64, si128);
              }
LABEL_51:
              v15 = 1;
              sub_3ED3A0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1000LL), *(_QWORD *)(a1 + 40));
              goto LABEL_7;
            }
LABEL_79:
            v48 = v463;
            if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
              && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
            {
              sub_3EB430(*(double *)v4.m128i_i64);
            }
            sub_3FD520(a1, *(_DWORD *)(v467.m128i_i64[1] + 12), v48);
            goto LABEL_48;
          }
          if ( ((1LL << v42) & 0x1280000000000LL) == 0 )
          {
            if ( ((1LL << v42) & 0x100400000000LL) != 0 )
              goto LABEL_79;
            if ( (_WORD)v42 != 46 )
              goto LABEL_48;
LABEL_103:
            v41[1] |= 0x20000u;
            sub_3FB370(a1, 31);
            goto LABEL_48;
          }
        }
LABEL_159:
        v41[1] |= 0x20000u;
        goto LABEL_48;
      }
      if ( (unsigned __int16)v42 > 0x2EAu )
        goto LABEL_48;
      if ( (unsigned __int16)v42 > 0x2B6u )
      {
        switch ( *(_WORD *)(a1 + 48) )
        {
          case 0x2B7:
            v155 = *(_QWORD *)(a1 + 8);
            if ( (int)v464 < 0 )
            {
              s1[0] = nullptr;
              v468.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
            }
            else
            {
              s1[0] = (char *)(unsigned __int8)v464;
              v468.m128i_i64[0] = (__int64)s1;
            }
            v156 = sub_335B10(
                     v155,
                     *(_QWORD *)(a1 + 40) + 1LL,
                     (__int64)"_mm_testc_si128",
                     v468.m128i_i64[0],
                     (int)v460,
                     (__int64)v487,
                     1);
            clear_tinfo_t();
            v157 = v465.m128i_u32[0];
            v158 = (unsigned __int8 *)v468.m128i_i64[0];
            *(_DWORD *)(*(_QWORD *)(v156 + 72) + 280LL) |= v465.m128i_i32[0];
            v159 = *(_DWORD *)(v156 + 68);
            LODWORD(s1[0]) = 1;
            LODWORD(s1[1]) = 0;
            HIDWORD(s1[0]) = v159;
            v161 = sub_1251B0(v156, v158, v160, v157);
            sub_11CDA0(v468.m128i_i64[0]);
            sub_B5290(*(_QWORD **)(a1 + 16), (__int64)v161);
            break;
          case 0x2BD:
          case 0x2BF:
            qstrncpy();
            v104 = "zcso";
            v467.m128i_i64[0] = (__int64)&unk_434B90;
            v468.m128i_i64[0] = (__int64)s1;
            do
            {
              v105 = *v104;
              v106 = *(_QWORD *)(a1 + 8);
              s1[0] = (_BYTE *)(&qword_20 + 2);
              v107 = *(_QWORD *)(a1 + 40);
              s[11] = v105;
              v466 = (__m128i *)sub_335B10(v106, v107, (__int64)s, v468.m128i_i64[0], (int)v460, (__int64)v487, 1);
              clear_tinfo_t();
              v108 = v466;
              v109 = v465.m128i_u32[0];
              v110 = (unsigned __int8 *)v468.m128i_i64[0];
              v111 = v466;
              *(_DWORD *)(v466[4].m128i_i64[1] + 280) |= v465.m128i_i32[0];
              v4 = _mm_cvtsi32_si128(v111[4].m128i_u32[1]);
              s1[0] = &byte_1;
              v112 = _mm_cvtsi32_si128(*(_DWORD *)v467.m128i_i64[0]);
              LODWORD(v466) = *(_DWORD *)v467.m128i_i64[0];
              v4.m128i_i64[0] = _mm_unpacklo_epi32(v4, v112).m128i_u64[0];
              *(__int64 *)((char *)s1 + 4) = v4.m128i_i64[0];
              v466 = (__m128i *)sub_1251B0((__int64)v111, v110, (__int64)v108, v109);
              sub_11CDA0(v468.m128i_i64[0]);
              sub_B5290(*(_QWORD **)(a1 + 16), (__int64)v466);
              ++v104;
              v467.m128i_i64[0] += 4;
            }
            while ( "" != v104 );
            break;
          case 0x2C2:
            v163 = v463;
            if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, *(double *)v4.m128i_i64, si128) )
              sub_3EB430(*(double *)v4.m128i_i64);
            sub_3FB720(a1, 0x21u, v466->m128i_i32[3], v163, 1);
            sub_3FB3E0(a1, 29);
            break;
          case 0x2CE:
          case 0x2D0:
            goto LABEL_159;
          case 0x2D2:
          case 0x2D4:
          case 0x2D5:
            goto LABEL_103;
          case 0x2EA:
            sub_3FB3E0(a1, 9);
            sub_3FB370(a1, 20);
            v162 = v463;
            if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
              && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
            {
              sub_3EB430(*(double *)v4.m128i_i64);
            }
            sub_3FB720(a1, 0x21u, *(_DWORD *)(v467.m128i_i64[1] + 12), v162, 1);
            break;
          default:
            goto LABEL_48;
        }
        goto LABEL_48;
      }
      if ( (_WORD)v42 == 595 )
      {
        v59 = v459;
        v60 = get_dtype_size();
        sub_1D6310(a1, 4u, v60, v59, 0x3BEA45E214ADDC55LL, 8, 0);
        v61 = v462;
        v468.m128i_i64[0] = v459 + 8;
        v62 = get_dtype_size();
        sub_1D6310(a1, 4u, v62, v468.m128i_i64[0], 0x3BEA45E214ADDC55LL, v61, 0);
        sub_3FB720(a1, 0x20u, v458, 0, 1);
        goto LABEL_48;
      }
      if ( (unsigned __int16)v42 > 0x253u )
      {
        if ( (_WORD)v42 != 627 && (_WORD)v42 != 630 )
          goto LABEL_48;
        goto LABEL_103;
      }
      if ( (_WORD)v42 != 458 )
      {
        if ( (unsigned __int16)v42 > 0x1CAu )
        {
          if ( (unsigned __int16)v42 > 0x225u )
          {
            if ( (_WORD)v42 != 569 )
              goto LABEL_48;
          }
          else
          {
            if ( (unsigned __int16)v42 <= 0x1E7u )
              goto LABEL_48;
            v96 = 0x2200000000000001LL;
            LOWORD(v42) = v42 - 488;
            if ( !_bittest64(&v96, v42) )
              goto LABEL_48;
          }
          goto LABEL_159;
        }
        if ( (_WORD)v42 != 456 )
          goto LABEL_48;
      }
      if ( !*(_BYTE *)(v467.m128i_i64[1] + 16)
        && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], *(double *)v4.m128i_i64, si128) )
      {
        sub_3EB430(*(double *)v4.m128i_i64);
      }
      v49 = 0x400000001LL;
      v470 = 0x400000001LL;
      v471 = *(_DWORD *)(v467.m128i_i64[1] + 12);
      if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, *(double *)v4.m128i_i64, si128) )
        sub_3EB430(*(double *)v4.m128i_i64);
      s1[1] = nullptr;
      v472 = 0x400000001LL;
      LODWORD(v473) = v466->m128i_i32[3];
      s1[0] = (char *)-4294967283LL;
      v468.m128i_i64[0] = (__int64)s1;
      v467.m128i_i64[0] = (__int64)&v470;
      v50 = j__qalloc_or_throw(20, (__int64)v41, 0x400000001LL, v49);
      *(__m128i *)v50 = _mm_loadu_si128((const __m128i *)((char *)xmmword_42E1E0[1].m128i_i64 + 4));
      *(_DWORD *)(v50 + 16) = xmmword_42E1E0[2].m128i_i32[1];
      s1[1] = (char *)v50;
      v467.m128i_i64[0] = (__int64)&v470;
      HIDWORD(s1[0]) = 4;
      v468.m128i_i64[0] = (__int64)s1;
      sub_1D6450(a1, 72, (unsigned __int8 *)s1, (unsigned __int8 *)&v472, (unsigned __int8 *)&v470);
      sub_11CDA0(v468.m128i_i64[0]);
      sub_11CDA0((__int64)&v472);
      sub_11CDA0(v467.m128i_i64[0]);
      goto LABEL_51;
    }
    v253 = 1LL << ((unsigned __int8)v43 + 75);
    if ( (v253 & 0x29) == 0 )
    {
      if ( (v253 & 0x52) == 0 )
      {
        if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) )
        {
          if ( !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          v12 = *(_QWORD *)(a1 + 832);
        }
        v464 = v12;
        v254 = *(_DWORD *)(v467.m128i_i64[1] + 12);
        v468.m128i_i64[0] = (__int64)s1;
        v465.m128i_i32[0] = get_dtype_size();
        sub_32C430((__int64 *)s1, v12, v465.m128i_u32[0], 2);
        sub_32F0D0((__int64)v487, v254, v465.m128i_i32[0]);
        v27 = 0;
        v14 = nullptr;
        clear_tinfo_t();
        LOBYTE(v457) = 0;
        LODWORD(v464) = 0;
        v454 = 0;
        v465.m128i_i32[0] = 4;
        v461 = "_mm_setcsr";
        v456 = 0;
        LODWORD(v460) = 1;
        goto LABEL_27;
      }
LABEL_254:
      LOBYTE(v457) = sub_3F7000(a1);
      if ( !(_BYTE)v457 )
        goto LABEL_6;
      v170 = *(_WORD *)(a1 + 48);
      v468.m128i_i64[0] = (__int64)&word_4F0B20;
      if ( v170 != word_4F0B20 )
      {
        v171 = &word_4F0B20;
        do
        {
          v172 = v171 + 12;
          v171 = v172;
        }
        while ( *v172 != v170 );
        v468.m128i_i64[0] = (__int64)v172;
      }
      v461 = *(void **)(v468.m128i_i64[0] + 8);
      if ( !v461 )
      {
        v389 = 4;
        if ( *(_DWORD *)(v468.m128i_i64[0] + 20) == 9 )
          v389 = 3;
        v467.m128i_i64[0] = (int)sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
        v390 = (int)sub_3FAE20((__int64)v466, 0.0, si128);
        v451 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
        sub_3F7E20(a1, *(_DWORD *)(v468.m128i_i64[0] + 16), v389, v451, v390, v467.m128i_i64[0], 0);
LABEL_272:
        v14 = nullptr;
        goto LABEL_51;
      }
      LODWORD(v464) = *(_DWORD *)(v468.m128i_i64[0] + 20);
      v173 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
      sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v487, v173, v464);
      v174 = sub_3FAE20((__int64)v466, 0.0, si128);
      sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v492, v174, v464);
      LODWORD(v460) = 2;
      goto LABEL_261;
    }
LABEL_113:
    v468.m128i_i32[0] = v44;
    LOBYTE(v457) = sub_3F7000(a1);
    if ( !(_BYTE)v457 )
      goto LABEL_6;
    v66 = *(_BYTE *)(a1 + 65);
    v67 = v468.m128i_i32[0];
    if ( v66 != 12 )
    {
      if ( v66 != 1 )
      {
        if ( v66 != 13 )
          goto LABEL_6;
        goto LABEL_117;
      }
      v429 = *(_WORD *)(a1 + 70);
      if ( (unsigned __int16)(v429 - 56) > 7u )
      {
        if ( (unsigned __int16)(v429 - 64) > 0xFu )
          goto LABEL_6;
LABEL_117:
        v68 = &word_4EFC80;
        v69 = 0;
        while ( *v68 != *(_WORD *)(a1 + 48) )
        {
          ++v69;
          v68 += 12;
          if ( v69 == 104 )
            goto LABEL_6;
        }
        v461 = *((void **)v68 + 1);
        v70 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
        v71 = (__int64)v487;
        sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v487, v70, *((_DWORD *)v68 + 4));
        if ( *(_BYTE *)(a1 + 105) != 5 )
        {
          v74 = sub_3FAE20((__int64)v466, 0.0, si128);
          v71 = (__int64)v492;
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v492, v74, *((_DWORD *)v68 + 4));
        }
        LODWORD(v464) = *((_DWORD *)v68 + 4);
        goto LABEL_123;
      }
    }
    v372 = &word_4EFB00;
    while ( *v372 != *(_WORD *)(a1 + 48) )
    {
      v372 += 12;
      if ( v372 == (__int16 *)&algn_4EFC64[4] )
      {
        qsnprintf();
        v67 = v468.m128i_i32[0];
        v461 = s;
        goto LABEL_687;
      }
    }
    v461 = *((void **)v372 + 1);
LABEL_687:
    v468.m128i_i32[0] = v67;
    v373 = sub_3FAE20(v467.m128i_i64[1], 0.0, si128);
    sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v487, v373, -12);
    if ( *(_BYTE *)(a1 + 109) != 7 )
    {
      v374 = v466;
      v375 = sub_3FAE20((__int64)v466, 0.0, si128);
      sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), 7, v375, v468.m128i_i32[0], 0);
      v376 = v468.m128i_i32[0];
      v466[1].m128i_i8[0] = 1;
      v374->m128i_i32[3] = v376;
    }
    LODWORD(v464) = -12;
    if ( *(_BYTE *)(a1 + 105) == 5 )
    {
LABEL_124:
      v75 = *(char *)(a1 + 109);
      v76 = sub_3FAE20((__int64)v466, 0.0, si128);
      sub_3F1CC0((__int64)v492, *(_QWORD *)(a1 + 832), v76, v75, 2);
      v77 = *(_BYTE *)(a1 + 65);
      if ( v77 == 13 )
      {
        v78 = v457;
      }
      else
      {
        v78 = 0;
        if ( v77 == 1 )
          v78 = (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu;
      }
      v461 = sub_3EE630((char *)v461, v78);
      if ( !v461 )
      {
        if ( !under_debugger )
          sub_383060(0xC83Eu, 0.0);
        goto LABEL_944;
      }
      v27 = 1;
      v454 = 0;
      v14 = v461;
      v465.m128i_i32[0] = 20;
      v456 = 2;
      LODWORD(v460) = 2;
      v468.m128i_i64[0] = (__int64)s1;
      goto LABEL_27;
    }
    v377 = sub_3FAE20((__int64)v466, 0.0, si128);
    v71 = (__int64)v492;
    sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v492, v377, -12);
    LODWORD(v464) = -12;
LABEL_123:
    LODWORD(v460) = 2;
    if ( *(_BYTE *)(a1 + 105) != 5 )
    {
LABEL_205:
      if ( !v461 )
      {
        v465.m128i_i32[0] = 20;
        v456 = 2;
        goto LABEL_207;
      }
      LOBYTE(v457) = 1;
LABEL_261:
      v454 = 0;
      v456 = 2;
      v465.m128i_i32[0] = 20;
      v468.m128i_i64[0] = (__int64)s1;
      goto LABEL_93;
    }
    goto LABEL_124;
  }
  v18 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)v18 > 0xE2u )
  {
    if ( (_WORD)v18 != 595 )
      goto LABEL_6;
    sub_3FA780(a1, (__int64)v487, 21, v467.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
    v51 = *(_QWORD *)(a1 + 832);
    v52 = get_dtype_size();
    v468.m128i_i64[0] = (__int64)s1;
    sub_32C430((__int64 *)s1, v51, v52, 2);
    sub_32F0D0((__int64)v492, v465.m128i_i32[0], v52);
    clear_tinfo_t();
    s1[0] = (_BYTE *)(&dword_14 + 1);
    copy_tinfo_t();
    clear_tinfo_t();
    v53 = *(_QWORD *)(a1 + 832);
    v54 = *(_DWORD *)(v53 + 396);
    v467.m128i_i32[0] = get_dtype_size();
    sub_32C430((__int64 *)s1, v53, v467.m128i_u32[0], 2);
    sub_32F0D0((__int64)v494, v54, v467.m128i_i32[0]);
    clear_tinfo_t();
    s1[0] = (_BYTE *)(&dword_14 + 1);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32F110((__int64)v495, *(_QWORD *)(a1 + 832), (unsigned int)v459, 16, 16, 16, 1);
    v4.m128i_i64[0] = 0;
    v465.m128i_i64[0] = (__int64)&s1[1];
    v469 = 21;
    v472 = 0;
    v470 = 0;
    v467.m128i_i64[0] = (__int64)&v470;
    *(_OWORD *)s1 = 0;
    copy_tinfo_t();
    s1[2] = nullptr;
    copy_tinfo_t();
    LODWORD(v486) = 0;
    WORD2(v486) = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v55 = v467.m128i_i64[1];
    v56 = v459;
    *(_DWORD *)(v467.m128i_i64[1] + 12) = v458;
    *(_BYTE *)(v55 + 16) = 1;
    v57 = get_dtype_size();
    sub_1D6310(a1, 4u, v57, 8, 0x3BEA45E214ADDC55LL, v56, 0);
    v58 = get_dtype_size();
    sub_1D6310(a1, 4u, v58, v462, 0x3BEA45E214ADDC55LL, v459 + 8, 0);
    sub_3F0D80(v475, a1 + 64, 0);
    LOBYTE(v457) = 1;
    LODWORD(v460) = 4;
    v456 = 1;
    v461 = "_InterlockedCompareExchange128";
    v467.m128i_i32[0] = 0;
    v465.m128i_i32[0] = 4;
    v454 = 1;
    LODWORD(v464) = 34;
LABEL_93:
    v27 = (unsigned __int8)v457;
    v14 = nullptr;
    goto LABEL_27;
  }
  if ( (unsigned __int16)v18 > 0xD0u )
  {
    LOWORD(v18) = v18 - 209;
    switch ( v18 )
    {
      case 0LL:
      case 7LL:
        goto LABEL_105;
      case 5LL:
LABEL_129:
        LOBYTE(v457) = a4 > 1u && *(_BYTE *)(a1 + 105) != 1;
        if ( !(_BYTE)v457 )
          goto LABEL_6;
        LODWORD(v464) = 4;
        v467.m128i_i8[0] = 4;
        if ( a4 == 7 )
        {
          LODWORD(v464) = 5;
          v467.m128i_i8[0] = 5;
        }
        sub_3FA780(a1, (__int64)v487, v464, (__int64)v466, 0.0, 128, 0xFFFFFFFF);
        if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
          sub_3EB430(0.0);
        v468.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v79 = *(_DWORD *)(v467.m128i_i64[1] + 12);
        v80 = v468.m128i_i64[0];
        v465.m128i_i32[0] = get_dtype_size();
        v468.m128i_i64[0] = (__int64)s1;
        sub_32C430((__int64 *)s1, v80, v465.m128i_u32[0], 2);
        sub_32F0D0((__int64)v492, v79, v465.m128i_i32[0]);
        clear_tinfo_t();
        s1[0] = (char *)v467.m128i_u8[0];
        copy_tinfo_t();
        clear_tinfo_t();
        v81 = "_InterlockedExchange64";
        if ( a4 != 7 )
          v81 = "_InterlockedExchange";
        v461 = v81;
        sub_3F0D80(v475, a1 + 104, 0);
        v454 = 0;
        v465.m128i_i32[0] = 4;
        v467.m128i_i32[0] = 0;
        v456 = 1;
        LODWORD(v460) = 2;
        goto LABEL_112;
      case 8LL:
        if ( *(_BYTE *)(a1 + 65) == 1 )
          goto LABEL_6;
        v89 = &v496[40];
        *(_QWORD *)&v496[24] = 0;
        *(_QWORD *)&v496[32] = 0;
        memset(v496, 255, 24);
        v4.m128i_i64[0] = 0;
        do
        {
          *(_WORD *)v89 = 0;
          v89 += 40;
          *((_WORD *)v89 - 19) = 0;
          *((_WORD *)v89 - 18) = 0;
          *((_DWORD *)v89 - 2) = 0;
          *((_WORD *)v89 - 17) = 0;
          *((_OWORD *)v89 - 2) = 0;
          *((_QWORD *)v89 - 2) = 0;
        }
        while ( v89 != &v497 );
        v90 = *(_QWORD *)(a1 + 800);
        v467.m128i_i64[0] = a1 + 24;
        v91 = sub_3F0080(v90, a1 + 24, v496);
        if ( v91 != -1 )
        {
          LOBYTE(v457) = sub_332920(*(_QWORD *)(a1 + 8) + 8LL, *(unsigned __int64 *)&v496[16]);
          if ( (_BYTE)v457 )
          {
            sub_B57F0(*(_QWORD *)(a1 + 8), v91, *(_QWORD *)(a1 + 40));
            v461 = (void *)sub_3EB540((__int64)s, *(unsigned __int16 *)&v496[24], a4, 0.0);
            LODWORD(v464) = 19;
            if ( a4 != 1 )
            {
              LODWORD(v464) = 20;
              if ( a4 != 2 )
              {
                LODWORD(v464) = 18;
                if ( a4 )
                  LODWORD(v464) = 21;
              }
            }
            sub_3FA780(a1, (__int64)v487, v464, v467.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
            v465.m128i_i64[0] = (__int64)v498;
            qmemcpy(v498, (const void *)v467.m128i_i64[0], 0x168u);
            v467.m128i_i64[0] = a1 + 24;
            qmemcpy((void *)(a1 + 24), v496, 0x168u);
            v472 = a1;
            v473 = 0xFFFFFFFF00000001LL;
            v474 = 0;
            sub_3FA580((int *)&v472, 1, 0, 0.0);
            if ( !v474 && !(unsigned __int8)sub_3FACB0((__int64)&v472, 0.0, si128) )
              sub_3EB430(0.0);
            v307 = HIDWORD(v473);
            v308 = *(_QWORD *)(a1 + 832);
            LODWORD(v460) = get_dtype_size();
            v468.m128i_i64[0] = (__int64)s1;
            sub_32C430((__int64 *)s1, v308, (unsigned int)v460, 2);
            sub_32F0D0((__int64)v492, v307, (int)v460);
            clear_tinfo_t();
            v309 = v467.m128i_i64[1];
            qmemcpy((void *)v467.m128i_i64[0], (const void *)v465.m128i_i64[0], 0x168u);
            *(_DWORD *)(v467.m128i_i64[1] + 12) = 8;
            *(_BYTE *)(v309 + 16) = 1;
            sub_3F0D80(v475, a1 + 64, 0);
            v310 = get_dtype_size();
            v311 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)&v496[46]);
            s1[0] = nullptr;
            s1[1] = nullptr;
            sub_63E80((__int64 *)v468.m128i_i64[0], v311, v310);
            v4.m128i_i64[0] = 0;
            s1[2] = nullptr;
            v486 = 0;
            sub_64280(v475, (__int64 *)v468.m128i_i64[0]);
            sub_316CB0((__int64 *)&v476, (__int64 **)&s1[2], v312, v313);
            if ( s1[2] )
            {
              *(_QWORD *)&v486 = 0;
              qfree((__int64)s1[2]);
            }
            qfree((__int64)s1[0]);
            v314 = get_dtype_size();
            sub_1D6310(a1, 4u, v314, 8, 0x3BEA45E214ADDC55LL, v458, 0);
            v27 = 1;
            v14 = nullptr;
            v454 = 0;
            v465.m128i_i32[0] = 4;
            v467.m128i_i32[0] = 0;
            v456 = 1;
            LODWORD(v460) = 2;
            goto LABEL_27;
          }
        }
        if ( a4 == 2 )
        {
          LODWORD(v464) = 20;
          v461 = "_InterlockedCompareExchange";
        }
        else if ( a4 > 2u )
        {
          LODWORD(v464) = 21;
          v461 = "_InterlockedCompareExchange64";
          if ( a4 != 7 )
            goto LABEL_6;
        }
        else
        {
          LODWORD(v464) = 18;
          v461 = "_InterlockedCompareExchange8";
          if ( a4 )
          {
            LODWORD(v464) = 19;
            v461 = "_InterlockedCompareExchange16";
          }
        }
        if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
          sub_3EB430(0.0);
        v92 = v466->m128i_i32[3];
        v468.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v467.m128i_i32[0] = v92;
        v93 = get_dtype_size();
        v94 = v468.m128i_i64[0];
        v468.m128i_i64[0] = (__int64)s1;
        sub_32C430((__int64 *)s1, v94, v93, 2);
        sub_32F0D0((__int64)v492, v467.m128i_i32[0], v93);
        clear_tinfo_t();
        v95 = *(_QWORD *)(a1 + 832);
        v467.m128i_i32[0] = get_dtype_size();
        sub_32C430((__int64 *)s1, v95, v467.m128i_u32[0], 2);
        sub_32F0D0((__int64)v494, 8, v467.m128i_i32[0]);
        clear_tinfo_t();
LABEL_137:
        v83 = get_dtype_size();
        sub_1D6310(a1, 4u, v83, 8, 0x3BEA45E214ADDC55LL, v458, 0);
        sub_3FA780(a1, (__int64)v487, v464, v467.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
        s1[0] = (char *)(int)v464;
        copy_tinfo_t();
        clear_tinfo_t();
        s1[0] = (char *)(int)v464;
        copy_tinfo_t();
        clear_tinfo_t();
        v84 = v467.m128i_i64[1];
        *(_DWORD *)(v467.m128i_i64[1] + 12) = 8;
        *(_BYTE *)(v84 + 16) = 1;
        sub_3F0D80(v475, a1 + 64, 0);
        v454 = 1;
        v465.m128i_i32[0] = 4;
        v467.m128i_i32[0] = 0;
        v456 = 1;
        LODWORD(v460) = 3;
        LOBYTE(v457) = 1;
        break;
      case 10LL:
        v468.m128i_i32[0] = a4;
        v461 = (void *)sub_3EB540((__int64)s, 219, a4, 0.0);
        LODWORD(v464) = 19;
        if ( a4 != 1 )
        {
          LODWORD(v464) = 20;
          if ( a4 != 2 )
            LODWORD(v464) = a4 == 0 ? 18 : 21;
        }
        if ( *(_BYTE *)(a1 + 65) == 1 )
        {
          v250 = get_dtype_size();
          if ( !*(_BYTE *)(v467.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v467.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          sub_32F110(
            (__int64)v487,
            *(_QWORD *)(a1 + 832),
            *(unsigned int *)(v467.m128i_i64[1] + 12),
            v250,
            v250,
            v250,
            1);
        }
        else
        {
          sub_3FA780(a1, (__int64)v487, v464, v467.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
        }
        if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
          sub_3EB430(0.0);
        v85 = *(_QWORD *)(a1 + 832);
        v86 = v466->m128i_i32[3];
        v468.m128i_i64[0] = (__int64)s1;
        v467.m128i_i32[0] = get_dtype_size();
        sub_32C430((__int64 *)s1, v85, v467.m128i_u32[0], 2);
        sub_32F0D0((__int64)v492, v86, v467.m128i_i32[0]);
        clear_tinfo_t();
        v87 = v467.m128i_i64[1];
        v88 = v466;
        v4 = _mm_loadu_si128(v466);
        *(__m128i *)v467.m128i_i64[1] = v4;
        *(_BYTE *)(v87 + 16) = v88[1].m128i_i8[0];
        sub_3F0D80(v475, a1 + 64, 0);
        sub_3F6F70(a1);
        goto LABEL_111;
      case 17LL:
        sub_1252A0((__int64)v492, (unsigned int)v10[99], v465.m128i_i32[0], 4);
        s1[0] = (_BYTE *)(&dword_14 + 1);
        copy_tinfo_t();
        v468.m128i_i64[0] = (__int64)s1;
        clear_tinfo_t();
        v467.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v82 = get_dtype_size();
        sub_32C430((__int64 *)s1, v467.m128i_i64[0], v82, 2);
        sub_32F0D0((__int64)v494, 8, v82);
        clear_tinfo_t();
        LODWORD(v464) = 21;
        v461 = "_InterlockedCompareExchange64";
        goto LABEL_137;
      default:
        goto LABEL_6;
    }
    goto LABEL_112;
  }
  if ( (unsigned __int16)v18 <= 0x2Cu )
  {
    if ( (unsigned __int16)v18 > 5u )
    {
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 6:
          LOBYTE(v457) = equal_bytes();
          if ( !(_BYTE)v457 )
            goto LABEL_105;
          LOBYTE(v469) = 3;
          netnode_supset();
          LOBYTE(v470) = 3;
          netnode_supset();
          sub_3FA780(a1, (__int64)v487, 21, v467.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v117 = *(_QWORD *)(a1 + 832);
          v118 = v466->m128i_i32[3];
          v468.m128i_i64[0] = (__int64)s1;
          v467.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v117, v467.m128i_u32[0], 2);
          sub_32F0D0((__int64)v492, v118, v467.m128i_i32[0]);
          clear_tinfo_t();
          v119 = v467.m128i_i64[1];
          *(_DWORD *)(v467.m128i_i64[1] + 12) = 8;
          *(_BYTE *)(v119 + 16) = 1;
          sub_3F0D80(v475, a1 + 64, 0);
          LODWORD(v460) = 2;
          v456 = 1;
          v461 = "_InterlockedAddLargeStatistic";
          v467.m128i_i32[0] = 0;
          v465.m128i_i32[0] = 4;
          v454 = 0;
          LODWORD(v464) = 20;
          goto LABEL_93;
        case 7:
          goto LABEL_105;
        case 0xE:
        case 0xF:
          if ( *(_BYTE *)(a1 + 65) == 1 )
            goto LABEL_6;
          v97 = (void *)sub_3EB540((__int64)s, (unsigned __int16)v18, a4, 0.0);
          v98 = *(_WORD *)(a1 + 48) == 14;
          v461 = v97;
          v467.m128i_i32[0] = 20;
          if ( v98 )
            v467.m128i_i32[0] = 21;
          sub_3FA780(a1, (__int64)v487, 20, v467.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
          v99 = *(_BYTE *)(a1 + 109);
          if ( v99 < a4 )
          {
            if ( v466[1].m128i_i8[0] )
            {
              v100 = v466->m128i_i32[3];
              v468.m128i_i32[0] = v100;
            }
            else
            {
              if ( !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
                sub_3EB430(0.0);
              v98 = v466[1].m128i_i8[0] == 0;
              v468.m128i_i32[0] = v466->m128i_i32[3];
              if ( v98 )
              {
                if ( !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
                  sub_3EB430(0.0);
                v99 = *(_BYTE *)(a1 + 109);
                v100 = v466->m128i_i32[3];
              }
              else
              {
                v99 = *(_BYTE *)(a1 + 109);
                v100 = v468.m128i_i32[0];
              }
            }
            sub_1D6840(a1, v99, a4, v100, v468.m128i_i32[0], 0);
          }
          if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
            sub_3EB430(0.0);
          v101 = v466->m128i_i32[3];
          v464 = *(_QWORD *)(a1 + 832);
          v465.m128i_i32[0] = v101;
          v102 = get_dtype_size();
          v468.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v464, v102, 2);
          sub_32F0D0((__int64)v492, v465.m128i_i32[0], v102);
          clear_tinfo_t();
          v103 = v467.m128i_i64[1];
          *(_DWORD *)(v467.m128i_i64[1] + 12) = 0;
          *(_BYTE *)(v103 + 16) = 1;
          sub_3F0D80(v475, a1 + 64, 0);
          LODWORD(v464) = 18;
          v454 = 0;
          v465.m128i_i32[0] = 4;
          v456 = 1;
          LODWORD(v460) = 2;
          LOBYTE(v457) = 1;
          goto LABEL_112;
        case 0x22:
        case 0x2C:
          if ( *(_BYTE *)(a1 + 65) == 1 )
            goto LABEL_6;
          v461 = (void *)sub_3EB540((__int64)s, (unsigned __int16)v18, a4, 0.0);
          LODWORD(v464) = 19;
          if ( a4 != 1 )
          {
            LODWORD(v464) = 20;
            if ( a4 != 2 )
              LODWORD(v464) = a4 == 0 ? 18 : 21;
          }
          sub_3FA780(a1, (__int64)v487, v464, v467.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
          sub_3F0D80(v475, a1 + 64, 0);
          v454 = 0;
          v465.m128i_i32[0] = 4;
          v467.m128i_i32[0] = 0;
          v456 = 1;
          LODWORD(v460) = 1;
          LOBYTE(v457) = 1;
          v468.m128i_i64[0] = (__int64)s1;
          goto LABEL_112;
        default:
          goto LABEL_6;
      }
    }
    goto LABEL_6;
  }
  if ( (_WORD)v18 == 131 )
  {
LABEL_105:
    if ( *(_BYTE *)(a1 + 65) == 1 )
      goto LABEL_6;
    v63 = *(unsigned __int16 *)(a1 + 48);
    v468.m128i_i32[0] = a4;
    v461 = (void *)sub_3EB540((__int64)s, v63, a4, 0.0);
    LODWORD(v464) = 19;
    if ( a4 != 1 )
    {
      LODWORD(v464) = 20;
      if ( a4 != 2 )
        LODWORD(v464) = a4 == 0 ? 18 : 21;
    }
    sub_3FA780(a1, (__int64)v487, v464, v467.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
    if ( !v466[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v466, 0.0, si128) )
      sub_3EB430(0.0);
    v64 = *(_QWORD *)(a1 + 832);
    v65 = v466->m128i_i32[3];
    v468.m128i_i64[0] = (__int64)s1;
    v467.m128i_i32[0] = get_dtype_size();
    sub_32C430((__int64 *)s1, v64, v467.m128i_u32[0], 2);
    sub_32F0D0((__int64)v492, v65, v467.m128i_i32[0]);
    clear_tinfo_t();
    sub_3F0D80(v475, a1 + 64, 0);
LABEL_111:
    v454 = 0;
    v465.m128i_i32[0] = 4;
    v467.m128i_i32[0] = 0;
    v456 = 1;
    LODWORD(v460) = 2;
    LOBYTE(v457) = 1;
LABEL_112:
    v27 = (unsigned __int8)v457;
    v14 = nullptr;
    v453 = *(_QWORD *)(a1 + 8);
    goto LABEL_28;
  }
LABEL_6:
  v14 = nullptr;
  v15 = 0;
LABEL_7:
  qfree((__int64)v14);
  do
  {
LABEL_8:
    v6 -= 80;
    cleanup_argloc();
    v16 = *((_QWORD *)v6 + 4);
    if ( v16 )
    {
      *((_QWORD *)v6 + 5) = 0;
      qfree(v16);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v6);
  }
  while ( v6 != v487 );
  if ( v483 )
  {
    v484.m128i_i64[0] = 0;
    qfree(v483);
  }
  qfree(v481);
  if ( src )
  {
    *(_QWORD *)&v480 = 0;
    qfree((__int64)src);
  }
  qfree(v478[0]);
  if ( v476 )
  {
    v477.m128i_i64[0] = 0;
    qfree((__int64)v476);
  }
  qfree(v475[0]);
  return v15;
}
