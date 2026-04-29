__int64 __fastcall sub_3FD5C0(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        unsigned __int8 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __m128i v12; // xmm0
  unsigned __int8 *v14; // r13
  __m128 si128; // xmm1
  unsigned __int8 *v17; // rax
  _DWORD *v18; // r14
  int v19; // ecx
  __int64 v20; // rsi
  unsigned int v21; // ebx
  __int64 v23; // rax
  __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // r14
  unsigned int dtype_size; // ebx
  __m128i v28; // xmm5
  unsigned int v29; // eax
  __int64 v30; // r14
  unsigned int v31; // ebx
  int v32; // ebx
  __int64 v33; // rbx
  __int64 *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rsi
  _DWORD *v41; // rsi
  unsigned __int64 v42; // rax
  int v43; // edx
  __int32 v44; // r8d
  __m128i v45; // xmm3
  __int64 v46; // rcx
  int v47; // eax
  unsigned __int8 v48; // bl
  __int64 v49; // rax
  __int64 v50; // r14
  unsigned int v51; // ebx
  __int64 v52; // r14
  int v53; // ebx
  __int64 v54; // rax
  __int64 v55; // rbx
  int v56; // eax
  int v57; // eax
  __int64 v58; // rbx
  int v59; // eax
  __int64 v60; // rbx
  int v61; // eax
  int v62; // esi
  __int64 v63; // r14
  int v64; // ebx
  char v65; // al
  __int32 v66; // r8d
  __int16 *v67; // rbx
  int v68; // eax
  int v69; // eax
  int v70; // eax
  unsigned int v71; // ebx
  int v72; // eax
  char v73; // dl
  char v74; // al
  int v75; // r14d
  __int64 v76; // rsi
  char *v77; // rax
  unsigned int v78; // r14d
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // r14
  int v82; // ebx
  __int64 v83; // rcx
  __m128i *v84; // roff
  char *v85; // rax
  __int64 v86; // rdi
  unsigned __int64 v87; // r14
  __int32 v88; // eax
  unsigned int v89; // r14d
  __int64 v90; // rsi
  __int64 v91; // r14
  __int64 v92; // rdx
  void *v93; // rax
  bool v94; // zf
  unsigned __int8 v95; // al
  int v96; // ecx
  __int32 v97; // eax
  unsigned int v98; // ebx
  __int64 v99; // rax
  const char *v100; // rbx
  char v101; // al
  __int64 v102; // rdi
  __int64 v103; // rsi
  unsigned __int8 *v104; // rsi
  const __m128i *v105; // rdi
  __m128i v106; // xmm7
  __int64 v107; // rbx
  int v108; // eax
  int v109; // ebx
  int v110; // ebx
  double v111; // xmm4_8
  double v112; // xmm5_8
  __int64 v113; // r14
  int v114; // ebx
  __int64 v115; // rax
  __int64 v116; // rbx
  __int64 v117; // r8
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  __int64 v122; // rcx
  __int16 v123; // ax
  _WORD *v124; // rdx
  int v125; // ebx
  int v126; // esi
  int v127; // eax
  __m128i *v128; // rdx
  __int64 v129; // roff
  __int64 v130; // rsi
  unsigned int v131; // eax
  char *v132; // rax
  char v133; // cl
  char v134; // dl
  int v135; // ebx
  int v136; // eax
  int v137; // ebx
  int v138; // eax
  __int16 *v139; // rbx
  __int16 i; // ax
  __int64 v141; // rdx
  __int64 v142; // rsi
  __int64 v143; // r8
  int v144; // r14d
  int v145; // eax
  int v146; // eax
  int v147; // r14d
  int v148; // eax
  int v149; // eax
  __int16 v150; // ax
  __int64 v151; // rcx
  int v152; // eax
  __int64 v153; // rbx
  __int64 v154; // rbx
  unsigned __int8 *v155; // rsi
  int v156; // eax
  _QWORD *v157; // rbx
  unsigned int v158; // ebx
  unsigned int v159; // ebx
  char v160; // al
  __int16 v161; // ax
  __int16 *v162; // rbx
  __int16 j; // ax
  int v164; // eax
  int v165; // eax
  __int16 v166; // ax
  __int16 *v167; // rdx
  __int16 *v168; // rcx
  int v169; // eax
  int v170; // eax
  __int16 v171; // ax
  _WORD *v172; // rdx
  __int64 v173; // rbx
  unsigned __int8 *v174; // r14
  __int64 v175; // rsi
  __int64 v176; // rdx
  int v177; // eax
  __m128i v178; // xmm1
  char *v179; // xmm0_8
  __int64 v180; // rax
  unsigned int v181; // eax
  char v182; // al
  char v183; // al
  char v184; // al
  __int16 v185; // ax
  __int16 *v186; // r14
  char v187; // dl
  int v188; // eax
  char v189; // al
  int v190; // eax
  __int16 v191; // ax
  int v192; // eax
  int v193; // ebx
  __int16 v194; // ax
  __int16 *v195; // rdx
  __int16 *v196; // r14
  int v197; // ebx
  int v198; // eax
  int v199; // eax
  __int64 v200; // rax
  int v201; // esi
  __int32 v202; // eax
  unsigned int v203; // r14d
  __int64 v204; // rax
  char *v205; // r14
  int v206; // eax
  __int32 v207; // eax
  __int64 v208; // rax
  char *v209; // rax
  __int16 v210; // dx
  __int16 *v211; // rax
  void *v212; // rcx
  int v213; // ebx
  int v214; // eax
  int v215; // ebx
  int v216; // eax
  int v217; // ebx
  int v218; // eax
  unsigned __int64 v219; // rdx
  __int16 v220; // ax
  char *v221; // rax
  int v222; // eax
  unsigned int v223; // ebx
  __int64 v224; // r14
  int v225; // eax
  int v226; // eax
  _QWORD *v227; // rbx
  unsigned __int8 v228; // al
  __int64 v229; // rax
  int v230; // eax
  __int64 v231; // rcx
  int v232; // eax
  int v233; // ebx
  int v234; // eax
  char *v235; // rax
  unsigned int v236; // ebx
  __int16 v237; // ax
  unsigned __int64 v238; // rdx
  char v239; // al
  char v240; // al
  unsigned __int8 v241; // bl
  unsigned int v242; // r14d
  __int64 v243; // rbx
  int v244; // eax
  __int64 v245; // rax
  int v246; // ebx
  __int64 v247; // rbx
  unsigned __int8 v248; // al
  char *v249; // rax
  __int64 v250; // r14
  unsigned int v251; // ebx
  __int64 v252; // r14
  unsigned int v253; // ebx
  unsigned int v254; // ebx
  char v255; // al
  char *v256; // rax
  int v257; // eax
  int v258; // ebx
  int v259; // eax
  __int64 v260; // rsi
  __m128i v261; // xmm0
  char *v262; // xmm0_8
  __m128i v263; // xmm2
  char v264; // al
  char v265; // al
  __int64 v266; // rbx
  unsigned __int8 v267; // al
  __int64 v268; // r14
  unsigned int v269; // ebx
  __int64 v270; // r14
  unsigned int v271; // ebx
  __int64 v272; // rbx
  unsigned int v273; // ebx
  char v274; // al
  int v275; // ecx
  int v276; // ebx
  __int64 v277; // r14
  int v278; // ebx
  unsigned __int8 v279; // al
  char *v280; // rax
  unsigned int v281; // ebx
  __int64 v282; // r14
  unsigned int v283; // ebx
  char v284; // al
  char v285; // al
  __int64 v286; // rax
  unsigned __int64 v287; // rbx
  unsigned __int64 v288; // r14
  __int64 v289; // rax
  unsigned __int64 v290; // rdx
  int v291; // r14d
  int v292; // eax
  __int16 v293; // ax
  int v294; // eax
  int v295; // ebx
  __int64 v296; // rsi
  __int64 v297; // rax
  int v298; // ebx
  int v299; // eax
  int v300; // eax
  unsigned int v301; // ebx
  unsigned int v302; // r14d
  __m128i *v303; // r14
  int v304; // ebx
  int tinfo_size; // eax
  __int64 v306; // roff
  __int64 v307; // rax
  char *v308; // rbx
  char *v309; // rax
  __int64 v310; // rax
  int v311; // eax
  int v312; // eax
  __int64 v313; // r14
  int v314; // ebx
  __int64 v315; // rax
  __int64 v316; // rax
  char *v317; // rax
  int v318; // ebx
  int v319; // eax
  int v320; // ebx
  int v321; // eax
  __int64 v322; // r14
  unsigned int v323; // ebx
  __int64 v324; // r14
  unsigned int v325; // ebx
  __int64 v326; // rax
  int v327; // r14d
  __int64 v328; // r14
  unsigned int v329; // ebx
  __int64 v330; // rbx
  int v331; // eax
  int v332; // eax
  int v333; // r14d
  __int64 v334; // rbx
  unsigned __int8 v335; // al
  __int64 v336; // rbx
  unsigned __int8 v337; // al
  unsigned __int8 v338; // cl
  char v339; // al
  char v340; // al
  int v341; // eax
  char *v342; // rax
  __int64 v343; // rbx
  unsigned __int8 v344; // al
  int v345; // eax
  int v346; // eax
  unsigned int v347; // ebx
  char v348; // al
  char v349; // al
  int v350; // eax
  char *v351; // rax
  int v352; // ecx
  int v353; // r14d
  __int64 v354; // r14
  char v355; // dl
  int v356; // edx
  int v357; // eax
  __int16 *v358; // rdx
  int v359; // eax
  __m128i *v360; // rbx
  int v361; // eax
  __int32 v362; // r8d
  int v363; // eax
  int v364; // eax
  int v365; // eax
  int v366; // eax
  int v367; // ebx
  int v368; // eax
  char v369; // bl
  int v370; // r14d
  int v371; // eax
  int v372; // eax
  unsigned int v373; // ebx
  int v374; // eax
  unsigned __int8 v375; // bl
  __int64 v376; // r14
  int v377; // r14d
  unsigned __int8 dtype_by_size; // al
  __int64 v379; // rbx
  unsigned __int64 v380; // rdx
  __int16 v381; // ax
  unsigned int v382; // ebx
  unsigned __int64 v383; // rbx
  __m128i v384; // xmm0
  __int64 v385; // rax
  int v386; // edx
  int v387; // esi
  int v388; // esi
  int v389; // esi
  int v390; // esi
  __int16 v391; // ax
  char v392; // dl
  __int64 v393; // rax
  __int32 v394; // r9d
  int v395; // eax
  int v396; // eax
  int v397; // eax
  __int32 v398; // eax
  __int64 v399; // rax
  __int64 v400; // rax
  __m128i *v401; // rbx
  int v402; // eax
  __int16 v403; // ax
  __int64 tinfo_property; // rax
  int v405; // r14d
  int v406; // r14d
  int v407; // eax
  __int64 v408; // rax
  int v409; // eax
  char v410; // al
  __int64 v411; // rax
  __int16 v412; // ax
  int v413; // eax
  int v414; // eax
  __int64 v415; // rax
  int v416; // eax
  __int16 v417; // ax
  int v418; // eax
  int v419; // eax
  __m128i *v420; // rax
  char v421; // dl
  int v422; // eax
  int v423; // eax
  int v424; // [rsp-8h] [rbp-5F8h]
  int v425; // [rsp-8h] [rbp-5F8h]
  int v426; // [rsp-8h] [rbp-5F8h]
  __int64 v427; // [rsp+0h] [rbp-5F0h]
  char v428; // [rsp+8h] [rbp-5E8h]
  int v429; // [rsp+8h] [rbp-5E8h]
  int v430; // [rsp+Ch] [rbp-5E4h]
  __int64 v431; // [rsp+10h] [rbp-5E0h] BYREF
  int v432; // [rsp+18h] [rbp-5D8h]
  int v433; // [rsp+1Ch] [rbp-5D4h]
  char *v434; // [rsp+20h] [rbp-5D0h]
  void *v435; // [rsp+28h] [rbp-5C8h]
  int v436; // [rsp+30h] [rbp-5C0h]
  unsigned __int8 v437; // [rsp+37h] [rbp-5B9h]
  __int64 v438; // [rsp+38h] [rbp-5B8h]
  __m128i v439; // [rsp+40h] [rbp-5B0h] BYREF
  __m128i *v440; // [rsp+50h] [rbp-5A0h]
  __m128i v441; // [rsp+58h] [rbp-598h] BYREF
  __m128i v442; // [rsp+68h] [rbp-588h] BYREF
  __int64 v443; // [rsp+78h] [rbp-578h]
  __int64 v444; // [rsp+80h] [rbp-570h] BYREF
  int v445; // [rsp+88h] [rbp-568h]
  __int64 v446; // [rsp+90h] [rbp-560h] BYREF
  unsigned __int64 v447; // [rsp+98h] [rbp-558h]
  char v448; // [rsp+A0h] [rbp-550h]
  __int64 v449[2]; // [rsp+B0h] [rbp-540h] BYREF
  __int64 *v450; // [rsp+C0h] [rbp-530h] BYREF
  __m128i v451; // [rsp+C8h] [rbp-528h]
  __int64 v452[2]; // [rsp+E0h] [rbp-510h] BYREF
  void *src; // [rsp+F0h] [rbp-500h] BYREF
  __int128 v454; // [rsp+F8h] [rbp-4F8h]
  __int64 v455; // [rsp+110h] [rbp-4E0h] BYREF
  __int64 v456; // [rsp+118h] [rbp-4D8h]
  __int64 v457; // [rsp+120h] [rbp-4D0h] BYREF
  __m128i v458; // [rsp+128h] [rbp-4C8h] BYREF
  char *s1[3]; // [rsp+140h] [rbp-4B0h] BYREF
  __int128 v460; // [rsp+158h] [rbp-498h]
  unsigned __int8 v461[4]; // [rsp+170h] [rbp-480h] BYREF
  unsigned int v462; // [rsp+174h] [rbp-47Ch]
  __int64 v463; // [rsp+178h] [rbp-478h]
  __int64 v464; // [rsp+180h] [rbp-470h]
  __int64 v465; // [rsp+188h] [rbp-468h]
  char v466[4]; // [rsp+1C0h] [rbp-430h] BYREF
  __int64 v467; // [rsp+1C4h] [rbp-42Ch]
  char v468[24]; // [rsp+210h] [rbp-3E0h] BYREF
  _BYTE v469[24]; // [rsp+260h] [rbp-390h] BYREF
  _BYTE v470[360]; // [rsp+2B0h] [rbp-340h] BYREF
  char v471; // [rsp+418h] [rbp-1D8h] BYREF
  char v472[368]; // [rsp+420h] [rbp-1D0h] BYREF
  char s[31]; // [rsp+590h] [rbp-60h] BYREF
  char v474; // [rsp+5AFh] [rbp-41h] BYREF
  unsigned __int64 v475; // [rsp+5B8h] [rbp-38h]

  v12.m128i_i64[0] = 0;
  v14 = v470;
  v441.m128i_i64[1] = a2;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_4247F0);
  v440 = (__m128i *)a3;
  v437 = a4;
  v475 = __readfsqword(0x28u);
  v451 = 0;
  v17 = v461;
  v449[0] = 0;
  v449[1] = 0;
  v450 = nullptr;
  v452[0] = 0;
  v452[1] = 0;
  src = nullptr;
  v455 = 0;
  v456 = 0;
  v457 = 0;
  v454 = 0;
  v458 = 0;
  do
  {
    *((_DWORD *)v17 + 1) = -1;
    v17 += 80;
    *((_WORD *)v17 - 40) = 0;
    *((_WORD *)v17 - 39) = 0;
    *((_QWORD *)v17 - 9) = 0;
    *((__m128 *)v17 - 4) = si128;
    *((_QWORD *)v17 - 6) = 0;
    *(_OWORD *)(v17 - 40) = 0;
    *((_DWORD *)v17 - 6) = 0;
    *((_QWORD *)v17 - 2) = 0;
    *((_DWORD *)v17 - 2) = 0;
  }
  while ( v17 != v470 );
  v18 = *(_DWORD **)(a1 + 832);
  v19 = v18[113];
  v20 = (__int64)v18;
  v441.m128i_i32[0] = *(_DWORD *)(a1 + 52) & 7;
  v433 = v19;
  v432 = v18[116];
  v439.m128i_i32[0] = v18[97];
  v436 = v18[95];
  if ( v441.m128i_i32[0] == 2 )
  {
    v24 = *(_WORD *)(a1 + 48);
    if ( v24 == 45 )
    {
      v46 = v441.m128i_i64[1];
      v47 = v18[101];
      *(_BYTE *)(v441.m128i_i64[1] + 16) = 1;
      *(_DWORD *)(v46 + 12) = v47;
    }
    else
    {
      if ( v24 != 133 )
        goto LABEL_6;
      v25 = v441.m128i_i64[1];
      *(_DWORD *)(v441.m128i_i64[1] + 12) = v18[102];
      *(_BYTE *)(v25 + 16) = 1;
      v437 = *(_BYTE *)(a1 + 109);
    }
    if ( v437 > 2u && v437 != 7 )
      goto LABEL_6;
    qsnprintf();
    v26 = *(_QWORD *)(a1 + 832);
    dtype_size = get_dtype_size();
    v442.m128i_i64[0] = (__int64)s1;
    sub_32C430((__int64 *)s1, v26, dtype_size, 2);
    sub_32F0D0((__int64)v461, v436, dtype_size);
    clear_tinfo_t();
    v12 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL));
    if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) )
    {
      v441.m128i_i32[0] = _mm_cvtsi128_si32(v12);
      v240 = sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128);
      v12 = _mm_cvtsi32_si128(v441.m128i_u32[0]);
      if ( !v240 )
        sub_3EB430(*(double *)v12.m128i_i64);
    }
    v466[0] = 1;
    v28 = _mm_cvtsi32_si128(*(_DWORD *)(v441.m128i_i64[1] + 12));
    v441.m128i_i32[0] = *(_DWORD *)(v441.m128i_i64[1] + 12);
    v12.m128i_i64[0] = _mm_unpacklo_epi32(v12, v28).m128i_u64[0];
    v467 = v12.m128i_i64[0];
    v29 = get_dtype_size();
    sub_32C430(&v446, *(_QWORD *)(a1 + 832), v29, 2);
    sub_32C540(v442.m128i_i64[0], *(_QWORD *)(a1 + 832), &v446);
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v30 = *(_QWORD *)(a1 + 832);
    v31 = get_dtype_size();
    sub_32C430((__int64 *)v442.m128i_i64[0], v30, v31, 2);
    sub_32F0D0((__int64)v468, v439.m128i_i32[0], v31);
    v32 = 0;
    clear_tinfo_t();
    LOBYTE(v431) = 0;
    LODWORD(v438) = 0;
    v428 = 1;
    v439.m128i_i32[0] = 4;
    v441.m128i_i32[0] = 0;
    v435 = s;
    v430 = 0;
    LODWORD(v434) = 3;
LABEL_27:
    v427 = *(_QWORD *)(a1 + 8);
    if ( (int)v438 < 0 )
    {
      s1[0] = nullptr;
      copy_tinfo_t();
LABEL_29:
      v33 = sub_335B10(v427, *(_QWORD *)(a1 + 40), (__int64)v435, v442.m128i_i64[0], (int)v434, (__int64)v461, v32);
      clear_tinfo_t();
      *(_DWORD *)(*(_QWORD *)(v33 + 72) + 284LL) = v441.m128i_i32[0];
      *(_DWORD *)(*(_QWORD *)(v33 + 72) + 280LL) |= v439.m128i_i32[0];
      if ( !(unsigned __int8)sub_64880(v449) || v451.m128i_i64[0] )
      {
        if ( !(unsigned __int8)sub_64880(&v455) || v458.m128i_i64[0] )
          **(_DWORD **)(a1 + 8) |= 0x40u;
        v34 = (__int64 *)(*(_QWORD *)(v33 + 72) + 136LL);
        v441.m128i_i64[0] = *(_QWORD *)(v33 + 72);
        sub_64280(v34, v449);
        sub_316CB0((__int64 *)(v441.m128i_i64[0] + 152), &v450);
        sub_316CB0((__int64 *)(*(_QWORD *)(v33 + 72) + 216LL), &v450);
        v35 = *(_QWORD *)(v33 + 72);
        si128 = (__m128)_mm_loadu_si128(&v458);
        v36 = *(_QWORD *)(v35 + 176);
        *(_QWORD *)(v35 + 176) = v455;
        v37 = v456;
        v12 = _mm_loadu_si128((const __m128i *)(v35 + 200));
        *(__m128 *)(v35 + 200) = si128;
        v455 = v36;
        v38 = *(_QWORD *)(v35 + 184);
        *(_QWORD *)(v35 + 184) = v37;
        v456 = v38;
        v39 = *(_QWORD *)(v35 + 192);
        *(_QWORD *)(v35 + 192) = v457;
        v457 = v39;
        v458 = v12;
      }
      sub_316CB0((__int64 *)(*(_QWORD *)(v33 + 72) + 216LL), (__int64 **)&src);
      if ( v428 )
        *(_DWORD *)(v33 + 4) |= 0x80000u;
      if ( (_BYTE)v431 )
      {
        if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
          && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
        {
          sub_3EB430(*(double *)v12.m128i_i64);
        }
        v12 = _mm_cvtsi32_si128(*(_DWORD *)(v33 + 68));
        s1[0] = &byte_1;
        v45 = _mm_cvtsi32_si128(*(_DWORD *)(v441.m128i_i64[1] + 12));
        v441.m128i_i32[0] = *(_DWORD *)(v441.m128i_i64[1] + 12);
        v12.m128i_i64[0] = _mm_unpacklo_epi32(v12, v45).m128i_u64[0];
        *(__int64 *)((char *)s1 + 4) = v12.m128i_i64[0];
        v33 = (__int64)sub_125260(v33, (unsigned __int8 *)v442.m128i_i64[0]);
        sub_11CDA0(v442.m128i_i64[0]);
      }
      goto LABEL_37;
    }
LABEL_28:
    s1[0] = (char *)(unsigned __int8)v438;
    goto LABEL_29;
  }
  if ( v441.m128i_i32[0] != 1 )
  {
    if ( v441.m128i_i32[0] )
      goto LABEL_6;
    v43 = *(unsigned __int16 *)(a1 + 48);
    v44 = v18[114];
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
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          v274 = *(_BYTE *)(a1 + 65);
          if ( (v274 == 13 || v274 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu)
            && (v410 = *(_BYTE *)(a1 + 105), v410 != 13) )
          {
            if ( v410 == 1 )
              LOBYTE(v431) = (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu;
          }
          else
          {
            LOBYTE(v431) = 0;
          }
          v94 = *(_WORD *)(a1 + 48) == 450;
          LODWORD(v438) = 0;
          v439.m128i_i32[0] = 20;
          v429 = 67;
          v430 = 2;
          LODWORD(v434) = 0;
          if ( !v94 )
            goto LABEL_506;
          LOBYTE(v435) = 3;
          v437 = 3;
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
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v303 = v440;
          s1[0] = byte_9;
          v442.m128i_i64[0] = (__int64)s1;
          v304 = v440->m128i_i32[3];
          tinfo_size = get_tinfo_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32F0D0((__int64)v461, v304, tinfo_size);
          clear_tinfo_t();
          LODWORD(v438) = 0;
          v439.m128i_i32[0] = 20;
          v430 = 2;
          v306 = v441.m128i_i64[1];
          LODWORD(v434) = 0;
          *v440 = _mm_loadu_si128((const __m128i *)v441.m128i_i64[1]);
          v303[1].m128i_i8[0] = *(_BYTE *)(v306 + 16);
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
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          v139 = &word_4F0700;
          if ( *(_BYTE *)(a1 + 69) != 7 )
            v139 = &word_4F0740;
          for ( i = *(_WORD *)(a1 + 48); *v139 != i; v139 += 12 )
            ;
          v141 = *(_QWORD *)(a1 + 152);
          v142 = *(_QWORD *)(a1 + 832);
          v143 = *(_QWORD *)(a1 + 40);
          v435 = *((void **)v139 + 1);
          sub_120A10((__int64)v468, v142, v141, 1, v143, 2);
          s1[0] = (_BYTE *)(&dword_30 + 2);
          v442.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v144 = v440->m128i_i32[3];
          v145 = *((_DWORD *)v139 + 5);
          if ( v145 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v145;
          }
          v146 = get_tinfo_size();
          sub_32F0D0((__int64)v466, v144, v146);
          clear_tinfo_t();
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          v147 = *(_DWORD *)(v441.m128i_i64[1] + 12);
          v148 = *((_DWORD *)v139 + 4);
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
          sub_32F0D0((__int64)v461, v147, v149);
          clear_tinfo_t();
          if ( get_dtype_size() < (unsigned __int64)(int)v467 )
          {
            LODWORD(v438) = sub_3FAE20((__int64)v440, 0.0, si128);
            v377 = sub_3FAE20((__int64)v440, 0.0, si128);
            dtype_by_size = get_dtype_by_size();
            sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), dtype_by_size, v377, v438, 0);
          }
          v150 = *(_WORD *)(a1 + 48);
          if ( v150 != 703 )
          {
            LODWORD(v438) = *((_DWORD *)v139 + 4);
            if ( v150 == 704 )
            {
              v151 = v441.m128i_i64[1];
              v152 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
              *(_BYTE *)(v441.m128i_i64[1] + 16) = 1;
              *(_DWORD *)(v151 + 12) = v152;
            }
            LODWORD(v434) = 3;
            goto LABEL_205;
          }
          v408 = v441.m128i_i64[1];
          v94 = v435 == nullptr;
          *(_DWORD *)(v441.m128i_i64[1] + 12) = v439.m128i_i32[0];
          *(_BYTE *)(v408 + 16) = 1;
          if ( v94 )
          {
            LODWORD(v438) = 7;
            v439.m128i_i32[0] = 20;
            v430 = 1;
            LODWORD(v434) = 3;
            goto LABEL_207;
          }
          v411 = *(_QWORD *)(a1 + 8);
          LODWORD(v434) = 3;
          v32 = 1;
          v430 = 1;
          v427 = v411;
          v439.m128i_i32[0] = 20;
          v428 = 0;
          LODWORD(v438) = 7;
          goto LABEL_28;
        case 0x1CE:
          v32 = 1;
          LOBYTE(v431) = 1;
          v435 = "_mm_getcsr";
          LODWORD(v438) = 7;
          v428 = 0;
          v439.m128i_i32[0] = 4;
          v430 = 2;
          LODWORD(v434) = 0;
          v442.m128i_i64[0] = (__int64)s1;
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
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          v162 = &word_4F0900;
          if ( *(_BYTE *)(a1 + 109) != 7 )
            v162 = &word_4F0940;
          for ( j = *(_WORD *)(a1 + 48); *v162 != j; v162 += 12 )
            ;
          v94 = *(_BYTE *)(a1 + 145) == 5;
          v435 = *((void **)v162 + 1);
          if ( v94 )
          {
            v372 = sub_3FAE20((__int64)v440, 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v461, v372, *((_DWORD *)v162 + 4));
            sub_120A10((__int64)v466, *(_QWORD *)(a1 + 832), *(_QWORD *)(a1 + 152), 1, *(_QWORD *)(a1 + 40), 1);
            s1[0] = (_BYTE *)(&dword_30 + 2);
            v442.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
            clear_tinfo_t();
          }
          else
          {
            v164 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v461, v164, *((_DWORD *)v162 + 4));
            v165 = sub_3FAE20((__int64)v440, 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v466, v165, 50);
          }
          LODWORD(v434) = 2;
          LODWORD(v438) = *((_DWORD *)v162 + 5);
          goto LABEL_205;
        case 0x1DD:
        case 0x26B:
        case 0x26C:
        case 0x26D:
          v94 = *(_BYTE *)(a1 + 109) == 7;
          v439.m128i_i64[0] = (__int64)&word_4F0A60;
          if ( !v94 )
            goto LABEL_196;
          goto LABEL_197;
        case 0x1E1:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          v345 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
          sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v461, v345, -12);
          v346 = sub_3FAE20((__int64)v440, 0.0, si128);
          sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v466, v346, -12);
          v435 = "_m_maskmovq";
          goto LABEL_587;
        case 0x1E2:
        case 0x1E3:
        case 0x22F:
        case 0x230:
        case 0x231:
        case 0x2C5:
        case 0x2C6:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          v194 = *(_WORD *)(a1 + 48);
          v195 = &word_4F0640;
          v196 = &word_4F0640;
          if ( v194 != word_4F0640 )
          {
            do
              v195 += 12;
            while ( *v195 != v194 );
            v196 = v195;
          }
          v435 = *((void **)v196 + 1);
          sub_3FAC20(a1, (__int64)v461, *((_DWORD *)v196 + 4), v441.m128i_i64[1], v449, 0.0);
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v197 = v440->m128i_i32[3];
          v198 = *((_DWORD *)v196 + 5);
          if ( v198 < 0 )
          {
            s1[0] = nullptr;
            v442.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v198;
            v442.m128i_i64[0] = (__int64)s1;
          }
          v199 = get_tinfo_size();
          sub_32F0D0((__int64)v466, v197, v199);
          clear_tinfo_t();
          v428 = 0;
          v439.m128i_i32[0] = 20;
          LODWORD(v434) = 2;
          goto LABEL_315;
        case 0x1E4:
          v247 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v442.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v248 = getinf();
          sub_120A10((__int64)v466, (int)v18, 1, v248, v247, -1);
          goto LABEL_453;
        case 0x1E5:
          v343 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v442.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v344 = getinf();
          sub_120A10((__int64)v466, (int)v18, 2, v344, v343, -1);
          goto LABEL_453;
        case 0x1E6:
          v336 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v442.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v337 = getinf();
          sub_120A10((__int64)v466, (int)v18, 3, v337, v336, -1);
          goto LABEL_453;
        case 0x1E7:
          v334 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v442.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v335 = getinf();
          sub_120A10((__int64)v466, (int)v18, 0, v335, v334, -1);
          goto LABEL_453;
        case 0x1E8:
          LOBYTE(v431) = 0;
          v32 = 0;
          v249 = "_mm_sfence";
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
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
          LODWORD(v438) = -14;
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
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          v171 = *(_WORD *)(a1 + 48);
          v439.m128i_i64[0] = (__int64)&unk_434BE0;
          if ( v171 != 497 )
          {
            v172 = &unk_434BE0;
            do
              v172 += 8;
            while ( *v172 != v171 );
            v439.m128i_i64[0] = (__int64)v172;
          }
          v173 = j__qalloc_or_throw();
          v174 = (unsigned __int8 *)(v173 + 32);
          v175 = *(_QWORD *)(a1 + 40);
          v438 = v173 + 48;
          v442.m128i_i64[0] = v173 + 64;
          *(_QWORD *)(v173 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v173 + 40) = 0;
          *(_QWORD *)(v173 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v173 + 56) = 0;
          *(_QWORD *)(v173 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v173 + 72) = 0;
          sub_330970(v173, v175);
          v176 = v439.m128i_i64[0];
          v177 = *(_DWORD *)(v439.m128i_i64[0] + 4);
          *(_DWORD *)(v173 + 4) |= 0x10u;
          *(_DWORD *)v173 = v177;
          v441.m128i_i32[0] = *(_DWORD *)(v176 + 12);
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = &byte_1;
          v178 = _mm_cvtsi32_si128(*(_DWORD *)(v441.m128i_i64[1] + 12));
          v442.m128i_i64[0] = (__int64)s1;
          v179 = (char *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v441.m128i_u32[0]), v178).m128i_u64[0];
          *(char **)((char *)s1 + 4) = v179;
          sub_125180((__int64)v174, (unsigned __int8 *)s1);
          sub_11CDA0((__int64)s1);
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, *(double *)&v179, (__m128)v178) )
            sub_3EB430(*(double *)&v179);
          s1[0] = &byte_1;
          *(char **)((char *)s1 + 4) = (char *)_mm_unpacklo_epi32(
                                                 _mm_cvtsi32_si128(v441.m128i_u32[0]),
                                                 _mm_cvtsi32_si128(v440->m128i_u32[3])).m128i_u64[0];
          sub_125180(v438, (unsigned __int8 *)v442.m128i_i64[0]);
          sub_11CDA0(v442.m128i_i64[0]);
          sub_125180(v173 + 64, v174);
          v180 = v439.m128i_i64[0];
          *(_DWORD *)(v173 + 68) = 1;
          if ( *(_BYTE *)(v180 + 8) )
            sub_12B6F0(v173, *(_QWORD *)(a1 + 832), 6, 1, 1);
          sub_12B6F0(v173, *(_QWORD *)(a1 + 832), 9, v441.m128i_i32[0], 1);
          sub_12B6F0(v173, *(_QWORD *)(a1 + 832), 5, v441.m128i_i32[0], 1);
          sub_B5290(*(_QWORD **)(a1 + 16), v173);
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
          sub_3FA780(a1, (__int64)v461, 1, v441.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v452, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v431) = 0;
          v235 = "_mm_clflush";
          LODWORD(v434) = 1;
          v430 = 0;
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
          v437 = 4;
          LODWORD(v438) = 0;
          LODWORD(v434) = 0;
          goto LABEL_481;
        case 0x218:
          LOBYTE(v435) = 3;
          v437 = 4;
          goto LABEL_890;
        case 0x219:
          LOBYTE(v435) = 4;
          goto LABEL_729;
        case 0x21A:
          LOBYTE(v435) = 4;
          v437 = 3;
LABEL_890:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          LODWORD(v438) = 0;
          LOBYTE(v431) = 0;
          v439.m128i_i32[0] = 20;
          v429 = 67;
          v430 = 1;
          LODWORD(v434) = 0;
          goto LABEL_483;
        case 0x21E:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          LODWORD(v438) = 25;
          v437 = 4;
          goto LABEL_479;
        case 0x221:
          LOBYTE(v431) = 0;
          v32 = 0;
          v249 = "_mm_lfence";
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x222:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          v311 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v461, v311, -13);
          v312 = sub_3FAE20((__int64)v440, 0.0, si128);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v466, v312, -13);
          v435 = "_mm_maskmoveu_si128";
LABEL_587:
          v313 = *(_QWORD *)(a1 + 832);
          v314 = *(_DWORD *)(v313 + 404);
          v442.m128i_i64[0] = (__int64)s1;
          v439.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v313, v439.m128i_u32[0], 2);
          sub_32F0D0((__int64)v468, v314, v439.m128i_i32[0]);
          clear_tinfo_t();
          copy_tinfo_t();
          LOBYTE(v431) = 0;
          LODWORD(v434) = 3;
          v430 = 0;
          v439.m128i_i32[0] = 20;
          v428 = 0;
          LODWORD(v438) = 0;
          goto LABEL_93;
        case 0x225:
          LOBYTE(v431) = 0;
          v32 = 0;
          v249 = "_mm_mfence";
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
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
          v373 = v184;
          v374 = sub_3FAE20((__int64)v440, 0.0, si128);
          sub_3F1CC0((__int64)v461, *(_QWORD *)(a1 + 832), v374, v373, 2);
          v439.m128i_i32[0] = 4;
          LODWORD(v438) = 0;
          v430 = 2;
          LODWORD(v434) = 0;
          goto LABEL_207;
        case 0x22C:
        case 0x22D:
          if ( (_WORD)v43 == 556 )
          {
            if ( *(_BYTE *)(a1 + 65) == 1 )
            {
              v401 = (__m128i *)v441.m128i_i64[1];
              v402 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            }
            else
            {
              v401 = v440;
              v402 = sub_3FAE20((__int64)v440, 0.0, si128);
            }
            v401[1].m128i_i8[0] = 1;
            v401->m128i_i32[3] = v402 + 8;
          }
          v94 = *(_BYTE *)(a1 + 65) == 1;
          LODWORD(v438) = 0;
          LOBYTE(v431) = 0;
          v439.m128i_i32[0] = 4;
          v429 = 67;
          if ( v94 )
          {
            LOBYTE(v435) = 4;
            v430 = 1;
            LODWORD(v434) = 0;
            v437 = 4;
          }
          else
          {
            v430 = 2;
            LODWORD(v434) = 0;
LABEL_506:
            LOBYTE(v435) = 4;
            v437 = 4;
          }
          goto LABEL_483;
        case 0x239:
          LOBYTE(v431) = 0;
          v32 = 0;
          v249 = "_mm_pause";
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x24B:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          if ( ((*(_QWORD *)(a1 + 104) ^ *(_QWORD *)(a1 + 64)) & 0xFFFF00000000FF00LL) == 0 )
          {
            v257 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_3F7E20(a1, 3u, a4, 0, 0x3BEA45E214ADDC55LL, v257, 0);
            goto LABEL_51;
          }
LABEL_209:
          LODWORD(v438) = -15;
LABEL_210:
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          qsnprintf();
          v132 = &s[strlen(s)];
          v133 = *(v132 - 3);
          if ( v132 >= &v474 )
            goto LABEL_214;
          v134 = *(v132 - 1);
          if ( v134 == 100 )
          {
            v392 = *(v132 - 2);
            if ( v392 == 112 || v392 == 115 )
            {
              *(_WORD *)v132 = 100;
              *(v132 - 1) = v392;
              *(v132 - 2) = 95;
            }
          }
          else if ( v134 == 115 )
          {
            v421 = *(v132 - 2);
            if ( v421 == 112 || v421 == 115 )
            {
              if ( v133 != 50 )
              {
                *(_WORD *)v132 = 115;
                *(v132 - 1) = v421;
                *(v132 - 2) = 95;
LABEL_215:
                if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
                  sub_3EB430(0.0);
                s1[0] = nullptr;
                v135 = *(_DWORD *)(v441.m128i_i64[1] + 12);
                v442.m128i_i64[0] = (__int64)s1;
                copy_tinfo_t();
                sub_32F0D0((__int64)v461, v135, 16);
                clear_tinfo_t();
                v136 = get_dtype_size();
                v137 = v136;
                if ( v136 <= 8 )
                {
                  sub_32C150(v442.m128i_i64[0], *(_QWORD *)(a1 + 832), v136);
                  v138 = sub_3FAE20((__int64)v440, 0.0, si128);
                  sub_32F0D0((__int64)v466, v138, v137);
                  v32 = 1;
                  clear_tinfo_t();
                  v428 = 0;
                  v439.m128i_i32[0] = 20;
                  v435 = s;
                  v430 = 2;
                  LODWORD(v434) = 2;
                  goto LABEL_27;
                }
                v364 = sub_3FAE20((__int64)v440, 0.0, si128);
                sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v466, v364, v438);
                LODWORD(v434) = 2;
                v430 = 2;
                v435 = s;
                v439.m128i_i32[0] = 20;
                v428 = 0;
                goto LABEL_93;
              }
LABEL_695:
              *(v132 - 3) = 95;
              goto LABEL_215;
            }
          }
LABEL_214:
          if ( v133 != 50 )
            goto LABEL_215;
          goto LABEL_695;
        case 0x24F:
          v255 = *(_BYTE *)(a1 + 105);
          if ( v255 != 13 && (v255 != 1 || (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu) )
          {
            LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
            if ( !(_BYTE)v431 )
              goto LABEL_6;
            sub_3FA780(a1, (__int64)v461, 89, (__int64)v440, 0.0, 0, 0xFFFFFFFF);
            sub_3F0D80(v452, a1 + 104, 0);
            LODWORD(v434) = 1;
            v435 = "_mm_loaddup_pd";
            v430 = 2;
            v439.m128i_i32[0] = 20;
            v428 = 0;
            LODWORD(v438) = -15;
            v442.m128i_i64[0] = (__int64)s1;
            goto LABEL_93;
          }
LABEL_196:
          v439.m128i_i64[0] = (__int64)&word_4F0DC0;
LABEL_197:
          if ( (unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
          {
            v122 = v439.m128i_i64[0];
            v123 = *(_WORD *)(a1 + 48);
            if ( *(_WORD *)v439.m128i_i64[0] != v123 )
            {
              do
              {
                v124 = (_WORD *)(v122 + 24);
                v122 = (__int64)v124;
              }
              while ( *v124 != v123 );
              v439.m128i_i64[0] = (__int64)v124;
            }
            v435 = *(void **)(v439.m128i_i64[0] + 8);
            if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
              sub_3EB430(0.0);
            v125 = v440->m128i_i32[3];
            v126 = *(_DWORD *)(v439.m128i_i64[0] + 16);
            if ( v126 < 0 )
            {
              s1[0] = nullptr;
              v442.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
            }
            else
            {
              s1[0] = (char *)(unsigned __int8)v126;
              v442.m128i_i64[0] = (__int64)s1;
            }
            v127 = get_tinfo_size();
            sub_32F0D0((__int64)v461, v125, v127);
            clear_tinfo_t();
            v128 = v440;
            LODWORD(v434) = 1;
            LODWORD(v438) = *(_DWORD *)(v439.m128i_i64[0] + 20);
            v129 = v441.m128i_i64[1];
            v12 = _mm_loadu_si128((const __m128i *)v441.m128i_i64[1]);
            *v440 = v12;
            v128[1].m128i_i8[0] = *(_BYTE *)(v129 + 16);
            goto LABEL_205;
          }
          goto LABEL_6;
        case 0x25A:
          v428 = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !v428 )
            goto LABEL_6;
          v250 = *(_QWORD *)(a1 + 832);
          v251 = get_dtype_size();
          sub_32C430((__int64 *)s1, v250, v251, 2);
          sub_32F0D0((__int64)v461, 8, v251);
          v442.m128i_i64[0] = (__int64)s1;
          clear_tinfo_t();
          v252 = *(_QWORD *)(a1 + 832);
          v253 = get_dtype_size();
          sub_32C430((__int64 *)s1, v252, v253, 2);
          sub_32F0D0((__int64)v466, v439.m128i_i32[0], v253);
          clear_tinfo_t();
          v439.m128i_i64[0] = *(_QWORD *)(a1 + 832);
          v254 = get_dtype_size();
          sub_32C430((__int64 *)s1, v439.m128i_i64[0], v254, 2);
          sub_32F0D0((__int64)v468, v436, v254);
          clear_tinfo_t();
          copy_tinfo_t();
          LOBYTE(v431) = 0;
          LODWORD(v434) = 3;
          v430 = 0;
          v435 = "_mm_monitor";
          v439.m128i_i32[0] = 4;
          LODWORD(v438) = 0;
          goto LABEL_93;
        case 0x25B:
          v428 = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !v428 )
            goto LABEL_6;
          sub_3F1CC0((__int64)v461, *(_QWORD *)(a1 + 832), v439.m128i_i32[0], 2, 2);
          sub_3F1CC0((__int64)v466, *(_QWORD *)(a1 + 832), 8, 2, 2);
          LOBYTE(v431) = 0;
          v430 = 0;
          v435 = "_mm_mwait";
          LODWORD(v438) = 0;
          LODWORD(v434) = 2;
          v439.m128i_i32[0] = 4;
          v442.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x25D:
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          sub_3FA780(a1, (__int64)v461, -13, (__int64)v440, 0.0, 64, 0xFFFFFFFF);
          sub_3F0D80(v452, a1 + 104, 0);
          LODWORD(v434) = 1;
          v256 = "_mm_lddqu_si128";
          v430 = 2;
          goto LABEL_471;
        case 0x273:
          goto LABEL_363;
        case 0x276:
          v32 = 0;
          LOBYTE(v431) = 0;
          v249 = "__vmx_off";
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x28E:
        case 0x28F:
        case 0x297:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          v210 = *(_WORD *)(a1 + 48);
          v211 = &word_4EFAA0;
          if ( word_4EFAA0 != v210 )
          {
            do
              v211 += 12;
            while ( *v211 != v210 );
          }
          v212 = *((void **)v211 + 1);
          LODWORD(v438) = *((_DWORD *)v211 + 4);
          v435 = v212;
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          v213 = *(_DWORD *)(v441.m128i_i64[1] + 12);
          if ( (int)v438 < 0 )
          {
            s1[0] = nullptr;
            v442.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v438;
            v442.m128i_i64[0] = (__int64)s1;
          }
          v214 = get_tinfo_size();
          sub_32F0D0((__int64)v461, v213, v214);
          clear_tinfo_t();
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v215 = v440->m128i_i32[3];
          if ( (int)v438 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v438;
          }
          v216 = get_tinfo_size();
          sub_32F0D0((__int64)v466, v215, v216);
          clear_tinfo_t();
          v217 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          if ( (int)v438 < 0 )
          {
            s1[0] = nullptr;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v438;
          }
          v218 = get_tinfo_size();
          sub_32F0D0((__int64)v468, v217, v218);
          clear_tinfo_t();
          LODWORD(v434) = 3;
          goto LABEL_205;
        case 0x294:
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          sub_3FA780(a1, (__int64)v461, -13, (__int64)v440, 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v452, a1 + 104, 0);
          LODWORD(v434) = 1;
          v256 = "_mm_stream_load_si128";
          v430 = 2;
LABEL_471:
          v435 = v256;
          v439.m128i_i32[0] = 20;
          v428 = 0;
          LODWORD(v438) = -13;
          v442.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x2B7:
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          v330 = v441.m128i_i64[1];
          v331 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
          sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v461, v331, -13);
          v332 = sub_3FAE20((__int64)v440, 0.0, si128);
          sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v466, v332, -13);
          *(_BYTE *)(v441.m128i_i64[1] + 16) = 1;
          v435 = "_mm_testz_si128";
          *(_DWORD *)(v330 + 12) = 1;
          v32 = 1;
          LODWORD(v438) = 34;
          v428 = 0;
          v439.m128i_i32[0] = 20;
          v430 = 1;
          LODWORD(v434) = 2;
          v442.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x2BC:
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
              sub_3EB430(0.0);
            v20 = *(_QWORD *)(a1 + 832);
          }
          v438 = v20;
          v327 = *(_DWORD *)(v441.m128i_i64[1] + 12);
          v442.m128i_i64[0] = (__int64)s1;
          v439.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v20, v439.m128i_u32[0], 2);
          sub_32F0D0((__int64)v461, v327, v439.m128i_i32[0]);
          clear_tinfo_t();
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v328 = *(_QWORD *)(a1 + 832);
          v439.m128i_i32[0] = v440->m128i_i32[3];
          v329 = get_dtype_size();
          sub_32C430((__int64 *)v442.m128i_i64[0], v328, v329, 2);
          sub_32F0D0((__int64)v466, v439.m128i_i32[0], v329);
          clear_tinfo_t();
          get_dtype_size();
          qsnprintf();
          LOBYTE(v431) = 1;
          LODWORD(v434) = 2;
          v430 = 2;
          v435 = s;
          v439.m128i_i32[0] = 4;
          v428 = 0;
          LODWORD(v438) = 39;
          goto LABEL_93;
        case 0x2BD:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          LODWORD(v438) = 7;
          v435 = "_mm_cmpestri";
          goto LABEL_599;
        case 0x2BE:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          LODWORD(v438) = -13;
          v435 = "_mm_cmpestrm";
LABEL_599:
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v442.m128i_i64[0] = (__int64)s1;
          v318 = *(_DWORD *)(v441.m128i_i64[1] + 12);
          copy_tinfo_t();
          v319 = get_tinfo_size();
          sub_32F0D0((__int64)v461, v318, v319);
          clear_tinfo_t();
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v320 = v440->m128i_i32[3];
          copy_tinfo_t();
          v321 = get_tinfo_size();
          sub_32F0D0((__int64)v466, v320, v321);
          clear_tinfo_t();
          v322 = *(_QWORD *)(a1 + 832);
          v323 = get_dtype_size();
          sub_32C430((__int64 *)v442.m128i_i64[0], v322, v323, 2);
          sub_32F0D0((__int64)v468, 8, v323);
          clear_tinfo_t();
          v324 = *(_QWORD *)(a1 + 832);
          v325 = get_dtype_size();
          sub_32C430((__int64 *)v442.m128i_i64[0], v324, v325, 2);
          sub_32F0D0((__int64)v469, v436, v325);
          clear_tinfo_t();
          if ( *(_WORD *)(a1 + 48) != 701 )
            v439.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          v326 = v441.m128i_i64[1];
          LOBYTE(v431) = 1;
          v428 = 0;
          v32 = 1;
          *(_DWORD *)(v441.m128i_i64[1] + 12) = v439.m128i_i32[0];
          *(_BYTE *)(v326 + 16) = 1;
          v439.m128i_i32[0] = 20;
          v430 = 1;
          LODWORD(v434) = 4;
          goto LABEL_27;
        case 0x2C2:
          if ( !v440[1].m128i_i8[0] )
          {
            if ( !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
              sub_3EB430(0.0);
            v20 = *(_QWORD *)(a1 + 832);
          }
          v438 = v20;
          v333 = v440->m128i_i32[3];
          v442.m128i_i64[0] = (__int64)s1;
          v439.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v20, v439.m128i_u32[0], 2);
          sub_32F0D0((__int64)v461, v333, v439.m128i_i32[0]);
          clear_tinfo_t();
          v435 = "__popcnt";
          if ( v462 == 2 )
            v435 = "__popcnt16";
          v32 = 1;
          LOBYTE(v431) = 1;
          v428 = 0;
          LODWORD(v438) = (unsigned __int8)v465;
          v439.m128i_i32[0] = 4;
          v430 = 1;
          LODWORD(v434) = 1;
          goto LABEL_27;
        case 0x2C3:
        case 0x2C4:
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          v292 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v461, v292, -13);
          v293 = *(_WORD *)(a1 + 48);
          if ( *(_BYTE *)(a1 + 105) == 5 )
          {
            v439.m128i_i32[0] = 1;
            v435 = "_mm_extracti_si64";
            if ( v293 == 708 )
            {
              v416 = sub_3FAE20((__int64)v440, 0.0, si128);
              sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v466, v416, -13);
              v439.m128i_i32[0] = 2;
              v435 = "_mm_inserti_si64";
            }
            LODWORD(v434) = v439.m128i_i32[0] + 2;
            do
            {
              sub_120A10(
                (__int64)&v461[80 * v439.m128i_i32[0]],
                *(_QWORD *)(a1 + 832),
                *(_QWORD *)(a1 + 40LL * v439.m128i_i32[0] + 72),
                4,
                *(_QWORD *)(a1 + 40),
                v439.m128i_i32[0]);
              s1[0] = (char *)&dword_14;
              v442.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
              clear_tinfo_t();
              ++v439.m128i_i32[0];
            }
            while ( v439.m128i_i32[0] != (_DWORD)v434 );
          }
          else
          {
            v435 = "_mm_insert_si64";
            if ( v293 == 707 )
              v435 = (void *)"_mm_extract_si64";
            v294 = sub_3FAE20((__int64)v440, 0.0, si128);
            sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v466, v294, -13);
            LODWORD(v434) = 2;
            v442.m128i_i64[0] = (__int64)s1;
          }
          v428 = 0;
          v32 = 1;
          LODWORD(v438) = -13;
          v439.m128i_i32[0] = 20;
          v430 = 2;
          goto LABEL_27;
        case 0x2C7:
          if ( !v440[1].m128i_i8[0] )
          {
            if ( !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
              sub_3EB430(0.0);
            v20 = *(_QWORD *)(a1 + 832);
          }
          v438 = v20;
          v291 = v440->m128i_i32[3];
          v442.m128i_i64[0] = (__int64)s1;
          v439.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v20, v439.m128i_u32[0], 2);
          sub_32F0D0((__int64)v461, v291, v439.m128i_i32[0]);
          clear_tinfo_t();
          v435 = "__lzcnt";
          if ( v462 == 2 )
            v435 = "__lzcnt16";
          v32 = 1;
          LOBYTE(v431) = 1;
          v428 = 0;
          LODWORD(v438) = (unsigned __int8)v465;
          v439.m128i_i32[0] = 20;
          v430 = 1;
          LODWORD(v434) = 1;
          goto LABEL_27;
        case 0x2C9:
        case 0x708:
          goto LABEL_592;
        case 0x2CA:
        case 0x2F9:
        case 0x707:
          goto LABEL_346;
        case 0x2CD:
          LOBYTE(v431) = 0;
          LODWORD(v434) = 0;
          v430 = 0;
          v235 = "__svm_clgi";
          goto LABEL_387;
        case 0x2CE:
          v315 = *(_QWORD *)(a1 + 800);
          v461[0] = 1;
          LODWORD(v463) = 8;
          v462 = *(_DWORD *)(*(_QWORD *)(v315 + 112) + 80LL);
          copy_tinfo_t();
          v316 = *(_QWORD *)(a1 + 800);
          v466[0] = 1;
          LODWORD(v316) = *(unsigned __int8 *)(v316 + 130);
          s1[0] = &byte_7;
          v12.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v316), _mm_cvtsi32_si128(v439.m128i_u32[0])).m128i_u64[0];
          v442.m128i_i64[0] = (__int64)s1;
          v467 = v12.m128i_i64[0];
          copy_tinfo_t();
          v32 = 0;
          clear_tinfo_t();
          LOBYTE(v431) = 0;
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          v435 = "__svm_invlpga";
          v430 = 0;
          LODWORD(v434) = 2;
          goto LABEL_27;
        case 0x2CF:
          v435 = "__svm_skinit";
          goto LABEL_500;
        case 0x2D0:
          LOBYTE(v431) = 0;
          v32 = 0;
          LODWORD(v438) = 0;
          v249 = "__svm_stgi";
          v428 = 1;
          v439.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x2D2:
          v435 = "__svm_vmload";
          goto LABEL_500;
        case 0x2D4:
          v435 = "__svm_vmrun";
          goto LABEL_500;
        case 0x2D5:
          v435 = "__svm_vmsave";
LABEL_500:
          v273 = get_dtype_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v18, v273, 2);
          sub_32F0D0((__int64)v461, 8, v273);
          v32 = 0;
          clear_tinfo_t();
          LOBYTE(v431) = 0;
          LODWORD(v438) = 0;
          goto LABEL_392;
        case 0x2EA:
          LODWORD(v438) = 36;
          v435 = (void *)"__bextr_u32";
          if ( (unsigned int)get_dtype_size() == 8 )
          {
            LODWORD(v438) = 37;
            v435 = (void *)"__bextr_u64";
          }
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v268 = *(_QWORD *)(a1 + 832);
          v439.m128i_i32[0] = v440->m128i_i32[3];
          v269 = get_dtype_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v268, v269, 2);
          sub_32F0D0((__int64)v461, v439.m128i_i32[0], v269);
          clear_tinfo_t();
          s1[0] = (char *)a1;
          LOBYTE(s1[2]) = 0;
          s1[1] = (char *)0xFFFFFFFF00000002LL;
          sub_3FA580((int *)s1, 1, 0, 0.0);
          if ( !LOBYTE(s1[2]) && !(unsigned __int8)sub_3FACB0(v442.m128i_i64[0], 0.0, si128) )
            sub_3EB430(0.0);
          v270 = *(_QWORD *)(a1 + 832);
          v439.m128i_i32[0] = HIDWORD(s1[1]);
          v271 = get_dtype_size();
          sub_32C430((__int64 *)v442.m128i_i64[0], v270, v271, 2);
          v434 = v466;
          sub_32F0D0((__int64)v466, v439.m128i_i32[0], v271);
          clear_tinfo_t();
          v272 = *(_QWORD *)(a1 + 832);
          LODWORD(v270) = get_dtype_size();
          sub_32C430((__int64 *)v442.m128i_i64[0], v272, v270, 2);
          sub_32F0D0((__int64)v468, v439.m128i_i32[0], v270);
          clear_tinfo_t();
          sub_126240(v466, *(_QWORD *)(a1 + 832), 20, *(_QWORD *)(a1 + 40), 255, 4);
          sub_126240(v468, *(_QWORD *)(a1 + 832), 23, *(_QWORD *)(a1 + 40), 8, 1);
          sub_126240(v468, *(_QWORD *)(a1 + 832), 20, *(_QWORD *)(a1 + 40), 255, 4);
          sub_3F6F70(a1);
          v428 = 0;
          v439.m128i_i32[0] = 20;
          v430 = 1;
          LODWORD(v434) = 3;
          LOBYTE(v431) = 1;
          goto LABEL_112;
        case 0x491:
          v266 = *(_QWORD *)(a1 + 40);
          s1[0] = &byte_7;
          v442.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          v267 = getinf();
          sub_120A10((__int64)v466, (int)v18, 6, v267, v266, -1);
LABEL_453:
          sub_3FA780(a1, (__int64)v461, 1, v441.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v452, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v431) = 0;
          LODWORD(v434) = 2;
          v430 = 0;
          v435 = "_mm_prefetch";
          v439.m128i_i32[0] = 4;
          v428 = 1;
          LODWORD(v438) = 0;
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
                v420 = v440;
                v440->m128i_i32[3] = v433;
                v420[1].m128i_i8[0] = 1;
                sub_3F8EE0(a1);
              }
              v441.m128i_i32[2] = sub_3F9DC0(a1, 0, v433, 0.0);
              LODWORD(s1[0]) = 1;
              HIDWORD(s1[0]) = get_dtype_size();
              LODWORD(s1[1]) = sub_3FAE20((__int64)v440, 0.0, si128);
              v442.m128i_i64[0] = (__int64)s1;
              sub_3F7290(a1, v441.m128i_i32[2], (unsigned __int8 *)s1, 0.0, si128);
              sub_11CDA0((__int64)s1);
              goto LABEL_281;
            }
LABEL_279:
            v181 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_3F7230(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 468LL), v181, 0.0, si128);
            if ( *(_WORD *)(a1 + 48) == 143 )
            {
              v419 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
              sub_3F8D40(a1, v419, v437);
            }
LABEL_281:
            sub_3F6F70(a1);
            v21 = 1;
            goto LABEL_8;
          }
          if ( (v43 & 0xFFFB) == 0x7A && (unsigned __int8)(*(_BYTE *)(a1 + 105) - 2) <= 2u )
          {
LABEL_278:
            v437 = *(_BYTE *)(a1 + 109);
            goto LABEL_279;
          }
          goto LABEL_6;
        case 0xA:
        case 0xB:
          v439.m128i_i32[0] = get_dtype_size();
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          sub_32F110(
            (__int64)v461,
            *(_QWORD *)(a1 + 832),
            *(_DWORD *)(v441.m128i_i64[1] + 12),
            v439.m128i_u32[0],
            0,
            v439.m128i_i32[0],
            2);
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 && v439.m128i_i32[0] == 4 )
            v439.m128i_i32[0] = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          s1[1] = nullptr;
          v201 = *(_DWORD *)(v441.m128i_i64[1] + 12);
          v442.m128i_i64[0] = (__int64)s1;
          sub_63E80((__int64 *)s1, v201, v439.m128i_i32[0]);
          s1[2] = nullptr;
          v460 = 0;
          sub_64280(v449, (__int64 *)s1);
          sub_316CB0((__int64 *)&v450, (__int64 **)&s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v460 = 0;
            qfree();
          }
          qfree();
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v442.m128i_i64[0], *(_DWORD *)(v441.m128i_i64[1] + 12), v439.m128i_i32[0]);
          v12.m128i_i64[0] = 0;
          s1[2] = nullptr;
          v460 = 0;
          sub_64280(&v455, (__int64 *)v442.m128i_i64[0]);
          sub_316CB0(&v457, (__int64 **)&s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v460 = 0;
            qfree();
          }
          qfree();
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v202 = v440->m128i_i32[3];
          v438 = *(_QWORD *)(a1 + 832);
          v439.m128i_i32[0] = v202;
          v203 = get_dtype_size();
          sub_32C430((__int64 *)v442.m128i_i64[0], v438, v203, 2);
          sub_32F0D0((__int64)v466, v439.m128i_i32[0], v203);
          clear_tinfo_t();
          v94 = *(_WORD *)(a1 + 48) == 11;
          v435 = "_BitScanForward";
          if ( v94 )
            v435 = "_BitScanReverse";
          if ( a4 == 7 )
          {
            qsnprintf();
            v435 = s;
          }
          v204 = v441.m128i_i64[1];
          v32 = 1;
          LOBYTE(v431) = 1;
          LODWORD(v438) = 34;
          *(_DWORD *)(v441.m128i_i64[1] + 12) = 1;
          *(_BYTE *)(v204 + 16) = 1;
          v428 = 0;
          v439.m128i_i32[0] = 36;
          v430 = 1;
          LODWORD(v434) = 2;
          goto LABEL_27;
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
          v205 = (char *)&unk_4EA0E0;
          if ( (_WORD)v43 == 12 )
          {
            v442.m128i_i64[0] = (__int64)v452;
          }
          else
          {
            do
              v205 += 24;
            while ( (_WORD)v43 != *(_WORD *)v205 );
            v442.m128i_i64[0] = (__int64)v449;
          }
          sub_3F0D80((__int64 *)v442.m128i_i64[0], a1 + 64, 0);
          if ( *(_BYTE *)(a1 + 65) == 1 )
          {
            v393 = get_dtype_size();
            v94 = *(_WORD *)(a1 + 48) == 12;
            v441.m128i_i32[0] = v393;
            if ( v94 )
              v394 = 0;
            else
              v394 = v393;
            v438 = v393;
            v439.m128i_i32[0] = v394;
            v395 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_32F110((__int64)v461, *(_QWORD *)(a1 + 832), v395, v441.m128i_u32[0], v438, v439.m128i_i32[0], 1);
            v396 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_3F0F00((__int64 *)v442.m128i_i64[0], v396, v441.m128i_i32[0]);
            if ( *(_WORD *)(a1 + 48) == 12 )
              goto LABEL_821;
            v397 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_3F0F00(&v455, v397, v441.m128i_i32[0]);
          }
          else
          {
            if ( (unsigned __int8)(a4 - 1) > 1u && a4 != 7 )
              goto LABEL_6;
            v206 = sub_3F7140(a4);
            sub_3FA780(a1, (__int64)v461, v206, v441.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          }
          if ( *(_WORD *)(a1 + 48) != 12 )
            goto LABEL_341;
LABEL_821:
          s1[0] = nullptr;
          tinfo_property = get_tinfo_property();
          if ( (_BYTE)tinfo_property )
            tinfo_property |= 0x40uLL;
          s1[0] = (char *)tinfo_property;
          v442.m128i_i64[0] = (__int64)s1;
          sub_3F0910();
          clear_tinfo_t();
LABEL_341:
          v442.m128i_i8[0] = *(_BYTE *)(a1 + 109);
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v207 = v440->m128i_i32[3];
          v438 = *(_QWORD *)(a1 + 832);
          v439.m128i_i32[0] = v207;
          v441.m128i_i32[0] = get_dtype_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v438, v441.m128i_u32[0], 2);
          sub_32F0D0((__int64)v466, v439.m128i_i32[0], v441.m128i_i32[0]);
          clear_tinfo_t();
          v435 = *((void **)v205 + 1);
          if ( a4 == 7 || a4 == 1 )
          {
            qsnprintf();
            v398 = *((_DWORD *)v205 + 4);
            v435 = s;
            v441.m128i_i32[0] = v398;
            v399 = v441.m128i_i64[1];
            *(_DWORD *)(v441.m128i_i64[1] + 12) = 0;
            *(_BYTE *)(v399 + 16) = 1;
          }
          else
          {
            v94 = v435 == nullptr;
            v441.m128i_i32[0] = *((_DWORD *)v205 + 4);
            v208 = v441.m128i_i64[1];
            *(_DWORD *)(v441.m128i_i64[1] + 12) = 0;
            *(_BYTE *)(v208 + 16) = 1;
            if ( v94 )
            {
              LODWORD(v438) = 34;
              v439.m128i_i32[0] = 4;
              v430 = 1;
              LODWORD(v434) = 2;
              break;
            }
          }
          v400 = *(_QWORD *)(a1 + 8);
          LOBYTE(v431) = 1;
          v32 = 1;
          LODWORD(v434) = 2;
          v427 = v400;
          v430 = 1;
          v439.m128i_i32[0] = 4;
          v428 = 0;
          LODWORD(v438) = 34;
          goto LABEL_28;
        case 0x18:
          LOBYTE(v431) = 0;
          v32 = 0;
          v249 = "_disable";
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x28:
          LOBYTE(v431) = 0;
          v32 = 0;
          v249 = "__halt";
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 12;
          goto LABEL_455;
        case 0x2B:
          if ( a4 == 2 )
          {
            v439.m128i_i64[0] = (__int64)"dword";
          }
          else if ( a4 > 2u )
          {
            if ( a4 != 7 )
              goto LABEL_6;
            v439.m128i_i64[0] = (__int64)"qword";
          }
          else
          {
            v351 = "word";
            if ( !a4 )
              v351 = "byte";
            v439.m128i_i64[0] = (__int64)v351;
          }
          if ( *(_BYTE *)(a1 + 109) != 1 )
          {
            if ( v440[1].m128i_i8[0] )
            {
              v352 = v440->m128i_i32[3];
              v353 = v352;
            }
            else
            {
              if ( !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
                sub_3EB430(0.0);
              v353 = v440->m128i_i32[3];
              v352 = v353;
              if ( !v440[1].m128i_i8[0] )
              {
                if ( !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
                  sub_3EB430(0.0);
                v352 = v440->m128i_i32[3];
              }
            }
            sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), 1, v352, v353, 0);
          }
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v354 = *(_QWORD *)(a1 + 832);
          LODWORD(v438) = v440->m128i_i32[3];
          v442.m128i_i64[0] = (__int64)s1;
          LODWORD(v435) = get_dtype_size();
          sub_32C430((__int64 *)s1, v354, (unsigned int)v435, 2);
          sub_32F0D0((__int64)v461, v438, (int)v435);
          clear_tinfo_t();
          qsnprintf();
          LODWORD(v438) = 35;
          if ( a4 != 1 )
          {
            LODWORD(v438) = 36;
            if ( a4 != 2 )
            {
              LODWORD(v438) = 34;
              if ( a4 )
                LODWORD(v438) = 37;
            }
          }
          v32 = 0;
          LOBYTE(v431) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          v435 = s;
          v430 = 0;
          LODWORD(v434) = 1;
          goto LABEL_27;
        case 0x2E:
          v307 = *(_QWORD *)(a1 + 72);
          if ( v307 == 41 )
          {
            sub_3F1CC0((__int64)v461, (__int64)v18, v439.m128i_i32[0], 2, 2);
            LOBYTE(v431) = 0;
            v430 = 0;
            v435 = "__fastfail";
            LODWORD(v438) = 0;
            LODWORD(v434) = 1;
            v441.m128i_i32[0] = 15;
            v439.m128i_i32[0] = 12;
            v428 = 1;
            v442.m128i_i64[0] = (__int64)s1;
            goto LABEL_93;
          }
          if ( v307 != 44 )
            goto LABEL_6;
          v12.m128i_i64[0] = 0;
          memset(s1, 0, sizeof(s1));
          v442.m128i_i64[0] = (__int64)s1;
          if ( get_cmt() <= 0 || s1[1] <= &byte_9[2] )
          {
            v308 = s1[0];
            v439.m128i_i32[0] = 4;
            v435 = "__int2c";
            LODWORD(v434) = 0;
          }
          else
          {
            v308 = s1[0];
            if ( !strncmp(s1[0], "NT_ASSERT(\"", 0xBu) )
            {
              v309 = strrchr(v308 + 11, 34);
              if ( v309 && v309[1] == 41 )
                *v309 = 0;
              v461[0] = 3;
              v463 = qstrdup();
              v462 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
              copy_tinfo_t();
              v310 = *(_QWORD *)(a1 + 40);
              v308 = s1[0];
              v439.m128i_i32[0] = 12;
              LODWORD(v434) = 1;
              v464 = v310;
              v435 = "NT_ASSERT";
            }
            else
            {
              v439.m128i_i32[0] = 4;
              v435 = "__int2c";
              LODWORD(v434) = 0;
            }
          }
          if ( v308 )
          {
            s1[1] = nullptr;
            qfree();
          }
          LOBYTE(v431) = 0;
          v32 = 0;
          LODWORD(v438) = 0;
          v428 = 1;
          v430 = 0;
          goto LABEL_27;
        case 0x30:
          LOBYTE(v431) = 0;
          v32 = 0;
          LODWORD(v438) = 0;
          v428 = 1;
          if ( (get_flags_ex() & 0x10000) != 0 )
            v439.m128i_i32[0] = 4;
          else
            v439.m128i_i32[0] = 12;
          v249 = "__debugbreak";
          goto LABEL_455;
        case 0x61:
        case 0x62:
        case 0xDE:
          sub_3FAC20(a1, (__int64)v461, 1, v441.m128i_i64[1], v449, 0.0);
          v237 = *(_WORD *)(a1 + 48);
          v238 = 6;
          v435 = "__lidt";
          if ( v237 != 98 )
          {
            v435 = "__lgdt";
            if ( v237 != 97 )
            {
              v435 = "__invlpg";
              if ( v237 == 222 )
                v238 = 4096;
            }
          }
          sub_3F0D80(v452, a1 + 64, v238);
          LOBYTE(v431) = 0;
          LODWORD(v434) = 1;
          v430 = 0;
          goto LABEL_388;
        case 0x78:
          if ( (unsigned __int64)get_dtype_size() <= 3 )
          {
            if ( v440[1].m128i_i8[0] )
            {
              v275 = v440->m128i_i32[3];
              v276 = v275;
            }
            else
            {
              if ( !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
                sub_3EB430(0.0);
              v276 = v440->m128i_i32[3];
              v275 = v276;
              if ( !v440[1].m128i_i8[0] )
              {
                if ( !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
                  sub_3EB430(0.0);
                v275 = v440->m128i_i32[3];
              }
            }
            sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), 2, v275, v276, 0);
          }
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v277 = *(_QWORD *)(a1 + 832);
          v278 = v440->m128i_i32[3];
          v442.m128i_i64[0] = (__int64)s1;
          v439.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v277, v439.m128i_u32[0], 2);
          sub_32F0D0((__int64)v461, v278, v439.m128i_i32[0]);
          v32 = 1;
          clear_tinfo_t();
          LOBYTE(v431) = 1;
          LODWORD(v438) = 36;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          v435 = "__segmentlimit";
          v430 = 1;
          LODWORD(v434) = 1;
          goto LABEL_27;
        case 0x7B:
          v284 = *(_BYTE *)(a1 + 65);
          if ( v284 == 10 )
          {
            v369 = *(_BYTE *)(a1 + 109);
            qsnprintf();
            v370 = 36;
            if ( v369 == 7 )
              v370 = 37;
            v371 = sub_3FAE20((__int64)v440, 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v461, v371, v370);
            LODWORD(v434) = 1;
            LODWORD(v438) = 0;
            v435 = s;
            v430 = 0;
          }
          else if ( v284 == 9 )
          {
            v365 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_3F7E20(a1, 3u, 2, *(unsigned __int16 *)(a1 + 70), 0x3BEA45E214ADDC55LL, v365, 0);
            v366 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v461, v366, 36);
            v367 = 36;
            if ( *(_BYTE *)(a1 + 109) == 7 )
              v367 = 37;
            v368 = sub_3FAE20((__int64)v440, 0.0, si128);
            sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v466, v368, v367);
            LODWORD(v434) = 2;
            LODWORD(v438) = 0;
            v435 = "__writedr";
            v430 = 0;
          }
          else
          {
            v285 = *(_BYTE *)(a1 + 105);
            if ( v285 == 10 )
            {
              qsnprintf();
              LODWORD(v438) = 36;
              if ( *(_BYTE *)(a1 + 69) == 7 )
                LODWORD(v438) = 37;
              sub_3F6F70(a1);
              v430 = 1;
              LODWORD(v434) = 0;
              v435 = s;
            }
            else if ( v285 == 9 )
            {
              v422 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
              sub_3F7E20(a1, 3u, 2, *(unsigned __int16 *)(a1 + 110), 0x3BEA45E214ADDC55LL, v422, 0);
              v423 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
              sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v461, v423, 36);
              LODWORD(v438) = 36;
              if ( *(_BYTE *)(a1 + 69) == 7 )
                LODWORD(v438) = 37;
              v430 = 1;
              v435 = "__readdr";
              LODWORD(v434) = 1;
            }
            else
            {
              LODWORD(v438) = 0;
              v435 = nullptr;
              v430 = 0;
              LODWORD(v434) = 0;
            }
          }
          v286 = *(_QWORD *)(a1 + 8);
          memset(s1, 0, sizeof(s1));
          v460 = 0;
          v287 = *(_QWORD *)(v286 + 544);
          v288 = *(_QWORD *)(v286 + 536);
          if ( v288 + v287 - 1 >= v288 )
          {
            s1[2] = (char *)qvector_reserve();
            *(__m128i *)&s1[2][16 * v460] = _mm_unpacklo_epi64((__m128i)v288, (__m128i)v287);
            *(_QWORD *)&v460 = v460 + 1;
          }
          v442.m128i_i64[0] = (__int64)s1;
          sub_64280(v452, (__int64 *)s1);
          sub_316CB0((__int64 *)&src, (__int64 **)&s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v460 = 0;
            qfree();
          }
          qfree();
          v289 = *(_QWORD *)(a1 + 8);
          v12.m128i_i64[0] = 0;
          memset(s1, 0, sizeof(s1));
          v460 = 0;
          v290 = *(_QWORD *)(v289 + 696);
          v431 = *(_QWORD *)(v289 + 704);
          v439.m128i_i64[0] = v290;
          if ( v290 + v431 - 1 >= v290 )
          {
            s1[2] = (char *)qvector_reserve();
            v12 = (__m128i)_mm_loadh_ps((const double *)&v431);
            *(__m128i *)&s1[2][16 * v460] = v12;
            *(_QWORD *)&v460 = v460 + 1;
          }
          sub_64280(v452, (__int64 *)v442.m128i_i64[0]);
          sub_316CB0((__int64 *)&src, (__int64 **)&s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v460 = 0;
            qfree();
          }
          qfree();
          if ( v430 )
          {
            if ( !v435 )
            {
              v439.m128i_i32[0] = 4;
              break;
            }
            v415 = *(_QWORD *)(a1 + 8);
            v32 = v430;
            LOBYTE(v431) = 1;
            v439.m128i_i32[0] = 4;
            v427 = v415;
            v428 = 1;
            goto LABEL_28;
          }
          sub_3EBDD0(v449, (__int64)v452);
          if ( !v435 )
            goto LABEL_6;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          LOBYTE(v431) = 0;
          goto LABEL_112;
        case 0x84:
          v279 = *(_BYTE *)(a1 + 109);
          LOBYTE(v438) = v279;
          if ( v279 == 2 )
          {
            v439.m128i_i64[0] = (__int64)"dword";
          }
          else if ( v279 > 2u )
          {
            if ( (_BYTE)v438 != 7 )
              goto LABEL_6;
            v439.m128i_i64[0] = (__int64)"qword";
          }
          else
          {
            v94 = v279 == 0;
            v280 = "word";
            if ( v94 )
              v280 = "byte";
            v439.m128i_i64[0] = (__int64)v280;
          }
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
              sub_3EB430(0.0);
            v18 = *(_DWORD **)(a1 + 832);
          }
          LODWORD(v435) = *(_DWORD *)(v441.m128i_i64[1] + 12);
          v281 = get_dtype_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v18, v281, 2);
          sub_32F0D0((__int64)v461, (int)v435, v281);
          clear_tinfo_t();
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v282 = *(_QWORD *)(a1 + 832);
          LODWORD(v435) = v440->m128i_i32[3];
          v283 = get_dtype_size();
          sub_32C430((__int64 *)v442.m128i_i64[0], v282, v283, 2);
          sub_32F0D0((__int64)v466, (int)v435, v283);
          clear_tinfo_t();
          qsnprintf();
          LOBYTE(v431) = 0;
          LODWORD(v434) = 2;
          v430 = 0;
          v435 = s;
          v439.m128i_i32[0] = 4;
          v428 = 1;
          LODWORD(v438) = 0;
          goto LABEL_93;
        case 0x8C:
        case 0x8E:
          v232 = 140;
          if ( v18[21] == 8 )
            v232 = 142;
          if ( v43 != v232 )
            goto LABEL_6;
          sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
          sub_3F8EE0(a1);
          v233 = 39;
          if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
            v233 = 37;
          v234 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
          sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v461, v234, v233);
          sub_3F0F00(v449, 0, 5);
          LOBYTE(v431) = 0;
          v235 = "__writeeflags";
          LODWORD(v434) = 1;
          v430 = 0;
          goto LABEL_387;
        case 0x95:
        case 0x97:
          v226 = 149;
          if ( v18[21] == 8 )
            v226 = 151;
          if ( v43 != v226 )
            goto LABEL_6;
          v227 = *(_QWORD **)(a1 + 8);
          v435 = "__readeflags";
          if ( *(_QWORD *)(a1 + 40) == v227[5] )
            v435 = "__getcallerseflags";
          v228 = 39;
          if ( v18[20] == 8 )
            v228 = 37;
          LODWORD(v438) = v228;
          v442.m128i_i64[0] = (__int64)s1;
          sub_3EBD60(s1, v228);
          v229 = get_tinfo_size();
          v230 = sub_138140(v227, v229, 1);
          v231 = v441.m128i_i64[1];
          v32 = 1;
          *(_DWORD *)(v441.m128i_i64[1] + 12) = v230;
          *(_BYTE *)(v231 + 16) = 1;
          clear_tinfo_t();
          LOBYTE(v431) = 1;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          v441.m128i_i32[0] = 16;
          v430 = 1;
          LODWORD(v434) = 0;
          goto LABEL_27;
        case 0x9A:
        case 0x9B:
          if ( a4 != 2 )
            goto LABEL_6;
          v222 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
          sub_3F1CC0((__int64)v461, *(_QWORD *)(a1 + 832), v222, 2, 2);
          HIDWORD(v467) = sub_3FAE20((__int64)v440, 0.0, si128);
          v466[0] = 1;
          LODWORD(v467) = 1;
          s1[0] = (_BYTE *)(&qword_20 + 2);
          v442.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          clear_tinfo_t();
          if ( *(_WORD *)(a1 + 48) == 154 )
          {
            v223 = 27;
            v435 = "_lrotl";
          }
          else
          {
            v223 = 28;
            v435 = "_lrotr";
          }
          v224 = (int)sub_3FAE20((__int64)v440, 0.0, si128);
          v225 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
          sub_3F7E20(a1, v223, 2, v225, v224, 0, 0);
          v428 = 0;
          LODWORD(v438) = 36;
          v439.m128i_i32[0] = 20;
          v430 = 1;
          LODWORD(v434) = 2;
          LOBYTE(v431) = 1;
          goto LABEL_112;
        case 0xC6:
        case 0xC7:
LABEL_363:
          sub_3FAC20(a1, (__int64)v461, 1, v441.m128i_i64[1], v449, 0.0);
          v219 = 6;
          if ( *(_WORD *)(a1 + 48) == 627 )
            v219 = 8;
          sub_3F0D80(v449, a1 + 64, v219);
          v220 = *(_WORD *)(a1 + 48);
          LOBYTE(v431) = 0;
          v32 = 0;
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          if ( v220 == 199 )
          {
            v221 = "__sidt";
          }
          else if ( v220 == 198 )
          {
            v221 = "__sgdt";
          }
          else
          {
            v221 = "__vmx_vmptrst";
          }
          v435 = v221;
          v430 = 0;
          LODWORD(v434) = 1;
          v442.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0xCE:
          LOBYTE(v431) = 0;
          v32 = 0;
          v249 = "_enable";
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0xD6:
          goto LABEL_129;
        case 0xDA:
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) )
          {
            if ( !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
              sub_3EB430(0.0);
            v20 = *(_QWORD *)(a1 + 832);
          }
          v442.m128i_i64[0] = v20;
          v441.m128i_i32[0] = *(_DWORD *)(v441.m128i_i64[1] + 12);
          v302 = get_dtype_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v20, v302, 2);
          sub_32F0D0((__int64)v461, v441.m128i_i32[0], v302);
          clear_tinfo_t();
          if ( a4 == 7 )
          {
            v32 = 1;
            LOBYTE(v431) = 1;
            LODWORD(v438) = 37;
            v428 = 0;
            v439.m128i_i32[0] = 20;
            v441.m128i_i32[0] = 12;
            v435 = "_byteswap_uint64";
            v430 = 1;
            LODWORD(v434) = 1;
          }
          else
          {
            v94 = a4 == 1;
            LOBYTE(v431) = 1;
            v32 = 1;
            if ( v94 )
            {
              LODWORD(v438) = 35;
              v428 = 0;
              v439.m128i_i32[0] = 20;
              v441.m128i_i32[0] = 12;
              v435 = "_byteswap_ushort";
            }
            else
            {
              LODWORD(v438) = 36;
              v428 = 0;
              v439.m128i_i32[0] = 20;
              v441.m128i_i32[0] = 12;
              v435 = "_byteswap_ulong";
            }
            v430 = 1;
            LODWORD(v434) = 1;
          }
          goto LABEL_27;
        case 0xDD:
          LOBYTE(v431) = 0;
          v32 = 0;
          v249 = "__wbinvd";
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0xDF:
        case 0x101:
          v236 = get_dtype_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v18, v236, 2);
          sub_32F0D0((__int64)v461, v439.m128i_i32[0], v236);
          clear_tinfo_t();
          v94 = *(_WORD *)(a1 + 48) == 223;
          v435 = "__readpmc";
          if ( v94 )
            v435 = "__readmsr";
          LOBYTE(v431) = 0;
          v32 = 0;
          LODWORD(v438) = 37;
LABEL_392:
          v428 = 1;
          v439.m128i_i32[0] = 4;
          v430 = 0;
          LODWORD(v434) = 1;
          goto LABEL_27;
        case 0xE0:
          v301 = get_dtype_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, (__int64)v18, v301, 2);
          sub_32F0D0((__int64)v461, v439.m128i_i32[0], v301);
          clear_tinfo_t();
          sub_1252A0((__int64)v466, 8, v436, 4);
          s1[0] = (_BYTE *)(&qword_20 + 5);
          copy_tinfo_t();
          v32 = 0;
          clear_tinfo_t();
          LOBYTE(v431) = 0;
          LODWORD(v438) = 0;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          v435 = "__writemsr";
          v430 = 0;
          LODWORD(v434) = 2;
          goto LABEL_27;
        case 0xE3:
          LOBYTE(v431) = 0;
          v32 = 0;
          v249 = "__rdtsc";
          LODWORD(v438) = 37;
          v428 = 1;
          v439.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x15F:
          LOBYTE(v431) = 0;
          v32 = 0;
          LODWORD(v438) = 0;
          v249 = "_m_empty";
          v428 = 0;
          v439.m128i_i32[0] = 4;
          goto LABEL_455;
        case 0x160:
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          v347 = *(char *)(a1 + 109);
          if ( *(_BYTE *)(a1 + 69) != *(_BYTE *)(a1 + 109) )
          {
            v348 = *(_BYTE *)(a1 + 65);
            if ( v348 != 12 )
            {
              if ( v348 != 1 )
              {
                if ( v348 != 13 )
                  goto LABEL_640;
LABEL_883:
                v413 = sub_3FAE20((__int64)v440, 0.0, si128);
                sub_3F1CC0((__int64)v461, *(_QWORD *)(a1 + 832), v413, 2, 2);
                v428 = 0;
                v32 = 1;
                v342 = "_mm_cvtsi32_si128";
                LODWORD(v438) = -13;
                v439.m128i_i32[0] = 20;
                goto LABEL_629;
              }
              v412 = *(_WORD *)(a1 + 70);
              if ( (unsigned __int16)(v412 - 56) > 7u )
              {
                if ( (unsigned __int16)(v412 - 64) > 0xFu )
                {
LABEL_640:
                  v349 = *(_BYTE *)(a1 + 105);
                  if ( v349 != 12 )
                  {
                    if ( v349 != 1 )
                    {
                      if ( v349 != 13 )
                        goto LABEL_6;
                      goto LABEL_643;
                    }
                    v417 = *(_WORD *)(a1 + 110);
                    if ( (unsigned __int16)(v417 - 56) > 7u )
                    {
                      if ( (unsigned __int16)(v417 - 64) <= 0xFu )
                      {
LABEL_643:
                        v350 = sub_3FAE20((__int64)v440, 0.0, si128);
                        sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v461, v350, -13);
                        v428 = 0;
                        v32 = 1;
                        v342 = "_mm_cvtsi128_si32";
                        LODWORD(v438) = 7;
                        v439.m128i_i32[0] = 20;
                        goto LABEL_629;
                      }
                      goto LABEL_6;
                    }
                  }
                  v418 = sub_3FAE20((__int64)v440, 0.0, si128);
                  sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v461, v418, -12);
                  v428 = 0;
                  v32 = 1;
                  v342 = "_mm_cvtsi64_si32";
                  LODWORD(v438) = 7;
                  v439.m128i_i32[0] = 20;
                  goto LABEL_629;
                }
                goto LABEL_883;
              }
            }
            v409 = sub_3FAE20((__int64)v440, 0.0, si128);
            sub_3F1CC0((__int64)v461, *(_QWORD *)(a1 + 832), v409, 2, 2);
            v428 = 0;
            v32 = 1;
            v342 = "_mm_cvtsi32_si64";
            LODWORD(v438) = -12;
            v439.m128i_i32[0] = 20;
LABEL_629:
            v435 = v342;
            v430 = 2;
            LODWORD(v434) = 1;
            v442.m128i_i64[0] = (__int64)s1;
            goto LABEL_27;
          }
          v414 = sub_3FAE20((__int64)v440, 0.0, si128);
LABEL_885:
          sub_3F1CC0((__int64)v461, *(_QWORD *)(a1 + 832), v414, v347, 2);
          v439.m128i_i32[0] = 20;
          LODWORD(v438) = 0;
          v430 = 2;
          LODWORD(v434) = 1;
          break;
        case 0x161:
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          v338 = *(_BYTE *)(a1 + 109);
          v428 = *(_BYTE *)(a1 + 69) == v338 && *(_BYTE *)(a1 + 69) <= 7u;
          if ( v428 )
          {
            v347 = v338;
            v414 = sub_3FAE20((__int64)v440, 0.0, si128);
            goto LABEL_885;
          }
          v339 = *(_BYTE *)(a1 + 65);
          if ( v339 == 13 || v339 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu )
          {
            v340 = *(_BYTE *)(a1 + 105);
            if ( v340 == 13 || v340 == 1 && (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) <= 0xFu )
            {
              v341 = sub_3FAE20((__int64)v440, 0.0, si128);
              sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v461, v341, -13);
              v32 = 1;
              v342 = "_mm_move_epi64";
              LODWORD(v438) = -13;
              v439.m128i_i32[0] = 20;
              goto LABEL_629;
            }
          }
LABEL_289:
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          v185 = *(_WORD *)(a1 + 48);
          v186 = &word_4F11E0;
          if ( v185 != word_4F11E0 )
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
              v355 = *(_BYTE *)(a1 + 105);
              if ( v355 == 13 )
                goto LABEL_6;
              if ( v355 != 1 )
              {
                qsnprintf();
                sub_3FA780(a1, (__int64)v461, *((_DWORD *)v186 + 4), (__int64)v440, 0.0, 64, 0xFFFFFFFF);
                sub_3F0D80(v452, a1 + 104, 0);
                v356 = *((_DWORD *)v186 + 5);
                v32 = 1;
                v428 = 0;
                v439.m128i_i32[0] = 20;
                v342 = s;
                LODWORD(v438) = v356;
                goto LABEL_629;
              }
              if ( (unsigned __int16)(*(_WORD *)(a1 + 110) - 64) > 0xFu && v185 == 353 )
              {
                v406 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
                v407 = sub_3FAE20((__int64)v440, 0.0, si128);
                sub_1D6840(a1, 7, a4, v407, v406, 0);
                goto LABEL_51;
              }
              goto LABEL_6;
            }
            if ( v185 == 353 )
            {
              v379 = (int)sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
              v426 = sub_3FAE20((__int64)v440, 0.0, si128);
              sub_3F7E20(a1, 4u, 7, v426, 0x3BEA45E214ADDC55LL, v379, 0);
              goto LABEL_51;
            }
            v442.m128i_i64[0] = get_dtype_size();
            v357 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_3F0F00(v449, v357, v442.m128i_i32[0]);
            v424 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_32F110((__int64)v461, *(_QWORD *)(a1 + 832), v424, v442.m128i_u32[0], 0, v442.m128i_i32[0], 2);
          }
          else
          {
            sub_3FAC20(a1, (__int64)v461, *((_DWORD *)v186 + 4), v441.m128i_i64[1], v449, 0.0);
          }
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v439.m128i_i32[0] = v440->m128i_i32[3];
          v188 = *((_DWORD *)v186 + 5);
          if ( v188 < 0 )
          {
            s1[0] = nullptr;
            v442.m128i_i64[0] = (__int64)s1;
            copy_tinfo_t();
          }
          else
          {
            s1[0] = (char *)(unsigned __int8)v188;
            v442.m128i_i64[0] = (__int64)s1;
          }
          sub_32F0D0((__int64)v466, v439.m128i_i32[0], 16);
          clear_tinfo_t();
          if ( ((*(_WORD *)(a1 + 48) - 446) & 0xFFFD) != 0 )
          {
            sub_3FB270(a1, 0, SHIDWORD(v467), 0, 0.0, si128);
            goto LABEL_51;
          }
          qsnprintf();
          LOBYTE(v431) = 0;
          LODWORD(v434) = 2;
          v430 = 0;
          v435 = s;
          v439.m128i_i32[0] = 20;
          v428 = 0;
          LODWORD(v438) = 0;
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
          v442.m128i_i32[0] = v18[114];
          v189 = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
          v44 = v442.m128i_i32[0];
          if ( !v189 || ((*(_QWORD *)(a1 + 104) ^ *(_QWORD *)(a1 + 64)) & 0xFFFF00000000FF00LL) != 0 )
            goto LABEL_113;
          v190 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
          sub_3F7E20(a1, 3u, a4, 0, 0x3BEA45E214ADDC55LL, v190, 0);
          v191 = *(_WORD *)(a1 + 48);
          if ( v191 != 468 && v191 != 397 )
          {
            v442.m128i_i64[0] = (int)sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            v192 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
            sub_3F7E20(a1, 7u, a4, v192, 0x3BEA45E214ADDC55LL, v442.m128i_i64[0], 0);
          }
          goto LABEL_51;
        case 0x18E:
LABEL_346:
          v209 = (char *)&unk_4E9DE0;
          while ( (_WORD)v43 != *(_WORD *)v209 )
          {
            v209 += 16;
            if ( algn_4E9E50 == v209 )
            {
              if ( !under_debugger )
                sub_383060(0xCD2Cu, 0.0);
              goto LABEL_944;
            }
          }
          v435 = *((void **)v209 + 1);
          sub_3FAC20(a1, (__int64)v461, 1, v441.m128i_i64[1], v449, 0.0);
          v380 = 512;
          if ( *(_WORD *)(a1 + 48) == 714 )
            v380 = 832;
          sub_3F0D80(v449, a1 + 64, v380);
          v381 = *(_WORD *)(a1 + 48);
          if ( v381 == 398 || v381 == 1799 )
          {
LABEL_781:
            v428 = 1;
            v439.m128i_i32[0] = 4;
            LODWORD(v434) = 1;
          }
          else
          {
LABEL_762:
            v439.m128i_i64[0] = *(_QWORD *)(a1 + 832);
            v382 = get_dtype_size();
            v442.m128i_i64[0] = (__int64)s1;
            sub_32C430((__int64 *)s1, v439.m128i_i64[0], v382, 2);
            sub_32F0D0((__int64)v466, 8, v382);
            clear_tinfo_t();
            v428 = 1;
            v439.m128i_i32[0] = 4;
            LODWORD(v434) = 2;
          }
LABEL_315:
          if ( !v435 )
            goto LABEL_6;
          v200 = *(_QWORD *)(a1 + 8);
          LOBYTE(v431) = 0;
          v32 = 0;
          v430 = 0;
          v427 = v200;
          LODWORD(v438) = 0;
          v442.m128i_i64[0] = (__int64)s1;
          goto LABEL_28;
        case 0x18F:
LABEL_592:
          v317 = (char *)&unk_4E9DE0;
          while ( (_WORD)v43 != *(_WORD *)v317 )
          {
            v317 += 16;
            if ( algn_4E9E50 == v317 )
            {
              if ( !under_debugger )
                sub_383060(0xCD2Cu, 0.0);
              goto LABEL_944;
            }
          }
          v435 = *((void **)v317 + 1);
          sub_3FA780(a1, (__int64)v461, 1, v441.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v452, a1 + 64, 0);
          sub_648D0(v449, v452);
          v383 = v454;
          v442.m128i_i64[0] = 0;
          if ( (_QWORD)v454 )
          {
            v442.m128i_i64[0] = qalloc_or_throw();
            memcpy((void *)v442.m128i_i64[0], src, 16 * v383);
          }
          v384 = _mm_unpacklo_epi64((__m128i)v383, (__m128i)v383);
          if ( v450 )
          {
            v439 = v384;
            v451.m128i_i64[0] = 0;
            qfree();
            v384 = _mm_load_si128(&v439);
          }
          v451 = v384;
          v450 = (__int64 *)v442.m128i_i64[0];
          v385 = *(_QWORD *)(a1 + 832);
          v386 = *(_DWORD *)(v385 + 448);
          v387 = *(_DWORD *)(v385 + 492);
          s1[0] = nullptr;
          s1[1] = nullptr;
          v442.m128i_i64[0] = (__int64)s1;
          sub_63E80((__int64 *)s1, v387, 8 * v386);
          s1[2] = nullptr;
          v460 = 0;
          sub_64280(v449, (__int64 *)v442.m128i_i64[0]);
          sub_316CB0((__int64 *)&v450, (__int64 **)&s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v460 = 0;
            qfree();
          }
          qfree();
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v442.m128i_i64[0], 0, 5);
          s1[2] = nullptr;
          v460 = 0;
          sub_64280(v449, (__int64 *)v442.m128i_i64[0]);
          sub_316CB0((__int64 *)&v450, (__int64 **)&s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v460 = 0;
            qfree();
          }
          qfree();
          v388 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 688LL);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v442.m128i_i64[0], v388, 3);
          s1[2] = nullptr;
          v460 = 0;
          sub_64280(v449, (__int64 *)v442.m128i_i64[0]);
          sub_316CB0((__int64 *)&v450, (__int64 **)&s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v460 = 0;
            qfree();
          }
          qfree();
          v389 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 528LL);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v442.m128i_i64[0], v389, 64);
          s1[2] = nullptr;
          v460 = 0;
          sub_64280(v449, (__int64 *)v442.m128i_i64[0]);
          sub_316CB0((__int64 *)&v450, (__int64 **)&s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v460 = 0;
            qfree();
          }
          qfree();
          v390 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 560LL);
          s1[0] = nullptr;
          s1[1] = nullptr;
          sub_63E80((__int64 *)v442.m128i_i64[0], v390, 256);
          v12.m128i_i64[0] = 0;
          s1[2] = nullptr;
          v460 = 0;
          sub_64280(v449, (__int64 *)v442.m128i_i64[0]);
          sub_316CB0((__int64 *)&v450, (__int64 **)&s1[2]);
          if ( s1[2] )
          {
            *(_QWORD *)&v460 = 0;
            qfree();
          }
          qfree();
          v391 = *(_WORD *)(a1 + 48);
          if ( v391 == 399 || v391 == 1800 )
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
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v109 = v440->m128i_i32[3];
          v442.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          sub_32F0D0((__int64)v466, v109, 8);
          clear_tinfo_t();
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v110 = *(_DWORD *)(v441.m128i_i64[1] + 12);
          copy_tinfo_t();
          sub_32F0D0((__int64)v461, v110, 8);
          clear_tinfo_t();
          LODWORD(v434) = 2;
          goto LABEL_182;
        case 0x19C:
        case 0x19D:
        case 0x19E:
        case 0x19F:
LABEL_305:
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          s1[0] = nullptr;
          v193 = v440->m128i_i32[3];
          v442.m128i_i64[0] = (__int64)s1;
          copy_tinfo_t();
          sub_32F0D0((__int64)v461, v193, 8);
          clear_tinfo_t();
          LODWORD(v434) = 1;
LABEL_182:
          LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, v111, v112, a11, a12);
          if ( !(_BYTE)v431 )
            goto LABEL_6;
          qsnprintf();
          v32 = 1;
          LODWORD(v438) = -12;
          v428 = 0;
          v439.m128i_i32[0] = 20;
          v435 = s;
          v430 = 2;
          goto LABEL_27;
        case 0x1A5:
          LOBYTE(v431) = 0;
          v32 = 0;
          LODWORD(v438) = 0;
          v249 = "_m_femms";
          v428 = 0;
          v439.m128i_i32[0] = 4;
LABEL_455:
          v435 = v249;
          v430 = 0;
          LODWORD(v434) = 0;
          v442.m128i_i64[0] = (__int64)s1;
          goto LABEL_27;
        case 0x1A6:
          sub_3FA780(a1, (__int64)v461, 1, v441.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v452, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v431) = 0;
          v235 = "_m_prefetch";
          LODWORD(v434) = 1;
          v430 = 0;
          goto LABEL_387;
        case 0x1A7:
          sub_3FA780(a1, (__int64)v461, 1, v441.m128i_i64[1], 0.0, 0, 0xFFFFFFFF);
          sub_3F0D80(v452, a1 + 64, 0);
          copy_tinfo_t();
          LOBYTE(v431) = 0;
          v235 = "_m_prefetchw";
          LODWORD(v434) = 1;
          v430 = 0;
LABEL_387:
          v435 = v235;
LABEL_388:
          v439.m128i_i32[0] = 4;
          v428 = 1;
          LODWORD(v438) = 0;
          v442.m128i_i64[0] = (__int64)s1;
          goto LABEL_93;
        case 0x1A9:
          goto LABEL_254;
        case 0x1AE:
LABEL_833:
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v405 = v440->m128i_i32[3];
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          sub_3FA190(a1, *(_DWORD *)(v441.m128i_i64[1] + 12), v405);
          sub_3FB3E0(a1, 12);
          sub_3F5050(a1);
          goto LABEL_51;
        case 0x1AF:
LABEL_751:
          v439.m128i_i64[0] = (__int64)&word_4F0A60;
          goto LABEL_197;
        case 0x1B0:
        case 0x1B3:
LABEL_242:
          v160 = *(_BYTE *)(a1 + 105);
          v439.m128i_i64[0] = (__int64)&word_4F0C40;
          if ( v160 != 13 )
          {
            v439.m128i_i64[0] = (__int64)&word_4F0DC0;
            if ( v160 == 1 )
            {
              v161 = *(_WORD *)(a1 + 110);
              v439.m128i_i64[0] = (__int64)&word_4F0C40;
              if ( (unsigned __int16)(v161 - 64) > 0xFu )
                v439.m128i_i64[0] = (__int64)&word_4F0DC0;
            }
          }
          goto LABEL_197;
        case 0x1B1:
          LOBYTE(v435) = 3;
LABEL_729:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          LODWORD(v438) = 0;
          LOBYTE(v431) = 0;
          v439.m128i_i32[0] = 20;
          v429 = 65;
          v430 = 0;
          LODWORD(v434) = 0;
          v437 = 2;
          goto LABEL_483;
        case 0x1B2:
          v437 = 3;
          LODWORD(v438) = 0;
          LODWORD(v434) = 0;
          goto LABEL_481;
        case 0x1B4:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          LODWORD(v438) = 9;
          v437 = 3;
LABEL_479:
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v258 = v440->m128i_i32[3];
          s1[0] = (char *)(int)v438;
          v259 = get_tinfo_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32F0D0((__int64)v461, v258, v259);
          clear_tinfo_t();
          LODWORD(v434) = 1;
LABEL_481:
          if ( !(unsigned __int8)sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12) )
            goto LABEL_6;
          LOBYTE(v431) = 0;
          v439.m128i_i32[0] = 20;
          v429 = 63;
          v430 = 1;
          LOBYTE(v435) = 2;
LABEL_483:
          v33 = j__qalloc_or_throw();
          v260 = *(_QWORD *)(a1 + 40);
          v441.m128i_i64[0] = v33 + 32;
          *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v33 + 40) = 0;
          *(_QWORD *)(v33 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v33 + 56) = 0;
          *(_QWORD *)(v33 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v33 + 72) = 0;
          sub_330970(v33, v260);
          v261 = (__m128i)(unsigned __int64)get_dtype_size();
          if ( !v440[1].m128i_i8[0] )
          {
            v442.m128i_i64[0] = v261.m128i_i64[0];
            v265 = sub_3FACB0((__int64)v440, *(double *)v261.m128i_i64, si128);
            v261 = _mm_loadl_epi64(&v442);
            if ( !v265 )
              sub_3EB430(*(double *)v261.m128i_i64);
          }
          s1[0] = &byte_1;
          v262 = (char *)_mm_unpacklo_epi32(v261, _mm_cvtsi32_si128(v440->m128i_u32[3])).m128i_u64[0];
          v442.m128i_i64[0] = (__int64)s1;
          *(char **)((char *)s1 + 4) = v262;
          sub_125180(v441.m128i_i64[0], (unsigned __int8 *)s1);
          sub_11CDA0(v442.m128i_i64[0]);
          v12 = (__m128i)(unsigned __int64)get_dtype_size();
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) )
          {
            v441.m128i_i64[0] = v12.m128i_i64[0];
            v264 = sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128);
            v12 = _mm_loadl_epi64(&v441);
            if ( !v264 )
              sub_3EB430(*(double *)v12.m128i_i64);
          }
          s1[0] = &byte_1;
          v263 = _mm_cvtsi32_si128(*(_DWORD *)(v441.m128i_i64[1] + 12));
          v441.m128i_i32[0] = *(_DWORD *)(v441.m128i_i64[1] + 12);
          v12.m128i_i64[0] = _mm_unpacklo_epi32(v12, v263).m128i_u64[0];
          *(__int64 *)((char *)s1 + 4) = v12.m128i_i64[0];
          sub_125180(v33 + 64, (unsigned __int8 *)v442.m128i_i64[0]);
          sub_11CDA0(v442.m128i_i64[0]);
          *(_DWORD *)(v33 + 4) |= 0x10u;
          v94 = (_BYTE)v431 == 0;
          *(_DWORD *)v33 = v429;
          if ( !v94 )
            sub_12B6F0(v33, *(_QWORD *)(a1 + 832), 9, 16, 1);
          v435 = nullptr;
          goto LABEL_37;
        default:
          goto LABEL_6;
      }
LABEL_207:
      v33 = j__qalloc_or_throw();
      v130 = *(_QWORD *)(a1 + 40);
      v442.m128i_i64[0] = v33 + 32;
      *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v33 + 40) = 0;
      *(_QWORD *)(v33 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v33 + 56) = 0;
      *(_QWORD *)(v33 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v33 + 72) = 0;
      sub_330970(v33, v130);
      sub_125180(v33 + 32, v461);
      v12 = _mm_cvtsi32_si128(v462);
      if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) )
      {
        v442.m128i_i32[0] = _mm_cvtsi128_si32(v12);
        v239 = sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128);
        v12 = _mm_cvtsi32_si128(v442.m128i_u32[0]);
        if ( !v239 )
          sub_3EB430(*(double *)v12.m128i_i64);
      }
      v435 = nullptr;
      v131 = *(_DWORD *)(v441.m128i_i64[1] + 12);
      *(_BYTE *)(v33 + 64) = 1;
      *(_DWORD *)v33 = 4;
      v442.m128i_i32[0] = v131;
      v12.m128i_i64[0] = _mm_unpacklo_epi32(v12, _mm_cvtsi32_si128(v131)).m128i_u64[0];
      *(_QWORD *)(v33 + 68) = v12.m128i_i64[0];
LABEL_37:
      v40 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v40 + 84) == 8 && *(_DWORD *)(v33 + 68) == 4 )
      {
        if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) )
        {
          if ( !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
            sub_3EB430(*(double *)v12.m128i_i64);
          v40 = *(_QWORD *)(a1 + 832);
        }
        if ( *(_DWORD *)(v40 + 440) >= *(_DWORD *)(v441.m128i_i64[1] + 12) )
          sub_12B6F0(v33, v40, 9, 8, 1);
      }
      v41 = (_DWORD *)sub_B5290(*(_QWORD **)(a1 + 16), v33);
      if ( (v439.m128i_i8[0] & 8) != 0 )
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
              sub_3F8D40(a1, v41[18], v437);
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
              if ( (_DWORD)v434 == 3 )
              {
                if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v12.m128i_i64);
                }
                v243 = *(int *)(v441.m128i_i64[1] + 12);
                v442.m128i_i64[0] = v432;
                v244 = get_dtype_size();
                sub_1D6310(a1, 0x21u, v244, v442.m128i_i64[0], v243, 1, 0);
                LOWORD(v42) = *(_WORD *)(a1 + 48);
              }
              if ( (_WORD)v42 == 217 )
              {
                if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v12.m128i_i64);
                }
                v116 = v432;
                v117 = *(int *)(v441.m128i_i64[1] + 12);
                v442.m128i_i32[0] = v437;
                v441.m128i_i64[0] = v117;
                v118 = get_dtype_size();
                sub_1D6310(a1, 0x23u, v118, v116, v441.m128i_i64[0], 0, 0);
                if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v12.m128i_i64);
                }
                v441.m128i_i64[0] = *(int *)(v441.m128i_i64[1] + 12);
                v119 = get_dtype_size();
                sub_1D6310(a1, 0x1Eu, v119, v116, v441.m128i_i64[0], 3, 0);
                if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v12.m128i_i64);
                }
                v441.m128i_i64[0] = *(int *)(v441.m128i_i64[1] + 12);
                v120 = get_dtype_size();
                sub_1D6310(a1, 0xDu, v120, v116, v441.m128i_i64[0], v116, 0);
                sub_3FB720(a1, 31, v432, v442.m128i_u32[0], 4);
                v121 = get_dtype_size();
                sub_1D6310(a1, 0x1Du, v121, v116, 0x3BEA45E214ADDC55LL, 2, 0);
              }
              break;
            case 0xDF:
            case 0xE3:
            case 0x101:
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
              {
                v107 = v436;
                v108 = get_dtype_size();
                sub_1D6310(a1, 4u, v108, 12, 0x3BEA45E214ADDC55LL, v107, 0);
                sub_1D6840(a1, 2, 7, 8, 8, 0);
                sub_1D6840(a1, 2, 7, v436, v436, 0);
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
              v241 = v437;
              if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
                && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
              {
                sub_3EB430(*(double *)v12.m128i_i64);
              }
              sub_3F8D40(a1, *(_DWORD *)(v441.m128i_i64[1] + 12), v241);
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
                  sub_383060(0xC9CBu, *(double *)v12.m128i_i64);
                goto LABEL_944;
              }
              *v41 = 6;
              sub_3FB370(a1, 29);
              goto LABEL_48;
            }
            if ( (_WORD)v42 != 6 )
            {
LABEL_48:
              if ( v430 == 2 )
              {
                if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
                  && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
                {
                  sub_3EB430(*(double *)v12.m128i_i64);
                }
                sub_3FB270(a1, 0, *(_DWORD *)(v441.m128i_i64[1] + 12), 1, *(double *)v12.m128i_i64, si128);
              }
LABEL_51:
              v21 = 1;
              sub_3ED3A0((_QWORD *)(*(_QWORD *)(a1 + 8) + 1000LL), *(_QWORD *)(a1 + 40));
              goto LABEL_7;
            }
LABEL_79:
            v48 = v437;
            if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
              && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
            {
              sub_3EB430(*(double *)v12.m128i_i64);
            }
            sub_3FD520(a1, *(_DWORD *)(v441.m128i_i64[1] + 12), v48);
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
            v153 = *(_QWORD *)(a1 + 8);
            if ( (int)v438 < 0 )
            {
              s1[0] = nullptr;
              v442.m128i_i64[0] = (__int64)s1;
              copy_tinfo_t();
            }
            else
            {
              s1[0] = (char *)(unsigned __int8)v438;
              v442.m128i_i64[0] = (__int64)s1;
            }
            v154 = sub_335B10(
                     v153,
                     *(_QWORD *)(a1 + 40) + 1LL,
                     (__int64)"_mm_testc_si128",
                     v442.m128i_i64[0],
                     (int)v434,
                     (__int64)v461,
                     1);
            clear_tinfo_t();
            v155 = (unsigned __int8 *)v442.m128i_i64[0];
            *(_DWORD *)(*(_QWORD *)(v154 + 72) + 280LL) |= v439.m128i_i32[0];
            v156 = *(_DWORD *)(v154 + 68);
            LODWORD(s1[0]) = 1;
            LODWORD(s1[1]) = 0;
            HIDWORD(s1[0]) = v156;
            v157 = sub_1251B0(v154, v155);
            sub_11CDA0(v442.m128i_i64[0]);
            sub_B5290(*(_QWORD **)(a1 + 16), (__int64)v157);
            break;
          case 0x2BD:
          case 0x2BF:
            qstrncpy();
            v100 = "zcso";
            v441.m128i_i64[0] = (__int64)&unk_434B90;
            v442.m128i_i64[0] = (__int64)s1;
            do
            {
              v101 = *v100;
              v102 = *(_QWORD *)(a1 + 8);
              s1[0] = (_BYTE *)(&qword_20 + 2);
              v103 = *(_QWORD *)(a1 + 40);
              s[11] = v101;
              v440 = (__m128i *)sub_335B10(v102, v103, (__int64)s, v442.m128i_i64[0], (int)v434, (__int64)v461, 1);
              clear_tinfo_t();
              v104 = (unsigned __int8 *)v442.m128i_i64[0];
              v105 = v440;
              *(_DWORD *)(v440[4].m128i_i64[1] + 280) |= v439.m128i_i32[0];
              v12 = _mm_cvtsi32_si128(v105[4].m128i_u32[1]);
              s1[0] = &byte_1;
              v106 = _mm_cvtsi32_si128(*(_DWORD *)v441.m128i_i64[0]);
              LODWORD(v440) = *(_DWORD *)v441.m128i_i64[0];
              v12.m128i_i64[0] = _mm_unpacklo_epi32(v12, v106).m128i_u64[0];
              *(__int64 *)((char *)s1 + 4) = v12.m128i_i64[0];
              v440 = (__m128i *)sub_1251B0((__int64)v105, v104);
              sub_11CDA0(v442.m128i_i64[0]);
              sub_B5290(*(_QWORD **)(a1 + 16), (__int64)v440);
              ++v100;
              v441.m128i_i64[0] += 4;
            }
            while ( "" != v100 );
            break;
          case 0x2C2:
            v159 = v437;
            if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, *(double *)v12.m128i_i64, si128) )
              sub_3EB430(*(double *)v12.m128i_i64);
            sub_3FB720(a1, 33, v440->m128i_i32[3], v159, 1);
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
            v158 = v437;
            if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
              && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
            {
              sub_3EB430(*(double *)v12.m128i_i64);
            }
            sub_3FB720(a1, 33, *(_DWORD *)(v441.m128i_i64[1] + 12), v158, 1);
            break;
          default:
            goto LABEL_48;
        }
        goto LABEL_48;
      }
      if ( (_WORD)v42 == 595 )
      {
        v58 = v433;
        v59 = get_dtype_size();
        sub_1D6310(a1, 4u, v59, v58, 0x3BEA45E214ADDC55LL, 8, 0);
        v60 = v436;
        v442.m128i_i64[0] = v433 + 8;
        v61 = get_dtype_size();
        sub_1D6310(a1, 4u, v61, v442.m128i_i64[0], 0x3BEA45E214ADDC55LL, v60, 0);
        sub_3FB720(a1, 32, v432, 0, 1);
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
            v92 = 0x2200000000000001LL;
            LOWORD(v42) = v42 - 488;
            if ( !_bittest64(&v92, v42) )
              goto LABEL_48;
          }
          goto LABEL_159;
        }
        if ( (_WORD)v42 != 456 )
          goto LABEL_48;
      }
      if ( !*(_BYTE *)(v441.m128i_i64[1] + 16)
        && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], *(double *)v12.m128i_i64, si128) )
      {
        sub_3EB430(*(double *)v12.m128i_i64);
      }
      v444 = 0x400000001LL;
      v445 = *(_DWORD *)(v441.m128i_i64[1] + 12);
      if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, *(double *)v12.m128i_i64, si128) )
        sub_3EB430(*(double *)v12.m128i_i64);
      s1[1] = nullptr;
      v446 = 0x400000001LL;
      LODWORD(v447) = v440->m128i_i32[3];
      s1[0] = (char *)-4294967283LL;
      v442.m128i_i64[0] = (__int64)s1;
      v441.m128i_i64[0] = (__int64)&v444;
      v49 = j__qalloc_or_throw();
      *(__m128i *)v49 = _mm_loadu_si128((const __m128i *)((char *)xmmword_42E1E0[1].m128i_i64 + 4));
      *(_DWORD *)(v49 + 16) = xmmword_42E1E0[2].m128i_i32[1];
      s1[1] = (char *)v49;
      v441.m128i_i64[0] = (__int64)&v444;
      HIDWORD(s1[0]) = 4;
      v442.m128i_i64[0] = (__int64)s1;
      sub_1D6450(a1, 72, (unsigned __int8 *)s1, (unsigned __int8 *)&v446, (unsigned __int8 *)&v444);
      sub_11CDA0(v442.m128i_i64[0]);
      sub_11CDA0((__int64)&v446);
      sub_11CDA0(v441.m128i_i64[0]);
      goto LABEL_51;
    }
    v245 = 1LL << ((unsigned __int8)v43 + 75);
    if ( (v245 & 0x29) == 0 )
    {
      if ( (v245 & 0x52) == 0 )
      {
        if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) )
        {
          if ( !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          v20 = *(_QWORD *)(a1 + 832);
        }
        v438 = v20;
        v246 = *(_DWORD *)(v441.m128i_i64[1] + 12);
        v442.m128i_i64[0] = (__int64)s1;
        v439.m128i_i32[0] = get_dtype_size();
        sub_32C430((__int64 *)s1, v20, v439.m128i_u32[0], 2);
        sub_32F0D0((__int64)v461, v246, v439.m128i_i32[0]);
        v32 = 0;
        clear_tinfo_t();
        LOBYTE(v431) = 0;
        LODWORD(v438) = 0;
        v428 = 0;
        v439.m128i_i32[0] = 4;
        v435 = "_mm_setcsr";
        v430 = 0;
        LODWORD(v434) = 1;
        goto LABEL_27;
      }
LABEL_254:
      LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
      if ( !(_BYTE)v431 )
        goto LABEL_6;
      v166 = *(_WORD *)(a1 + 48);
      v442.m128i_i64[0] = (__int64)&word_4F0B20;
      if ( v166 != word_4F0B20 )
      {
        v167 = &word_4F0B20;
        do
        {
          v168 = v167 + 12;
          v167 = v168;
        }
        while ( *v168 != v166 );
        v442.m128i_i64[0] = (__int64)v168;
      }
      v435 = *(void **)(v442.m128i_i64[0] + 8);
      if ( !v435 )
      {
        v375 = 4;
        if ( *(_DWORD *)(v442.m128i_i64[0] + 20) == 9 )
          v375 = 3;
        v441.m128i_i64[0] = (int)sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
        v376 = (int)sub_3FAE20((__int64)v440, 0.0, si128);
        v425 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
        sub_3F7E20(a1, *(_DWORD *)(v442.m128i_i64[0] + 16), v375, v425, v376, v441.m128i_i64[0], 0);
        goto LABEL_51;
      }
      LODWORD(v438) = *(_DWORD *)(v442.m128i_i64[0] + 20);
      v169 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
      sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v461, v169, v438);
      v170 = sub_3FAE20((__int64)v440, 0.0, si128);
      sub_3F6EB0(*(_QWORD *)(a1 + 800), (__int64)v466, v170, v438);
      LODWORD(v434) = 2;
      goto LABEL_261;
    }
LABEL_113:
    v442.m128i_i32[0] = v44;
    LOBYTE(v431) = sub_3F7000(a1, (__m128)0LL, si128, a7, a8, a9, a10, a11, a12);
    if ( !(_BYTE)v431 )
      goto LABEL_6;
    v65 = *(_BYTE *)(a1 + 65);
    v66 = v442.m128i_i32[0];
    if ( v65 != 12 )
    {
      if ( v65 != 1 )
      {
        if ( v65 != 13 )
          goto LABEL_6;
        goto LABEL_117;
      }
      v403 = *(_WORD *)(a1 + 70);
      if ( (unsigned __int16)(v403 - 56) > 7u )
      {
        if ( (unsigned __int16)(v403 - 64) > 0xFu )
          goto LABEL_6;
LABEL_117:
        v67 = &word_4EFC80;
        v68 = 0;
        while ( *v67 != *(_WORD *)(a1 + 48) )
        {
          ++v68;
          v67 += 12;
          if ( v68 == 104 )
            goto LABEL_6;
        }
        v435 = *((void **)v67 + 1);
        v69 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
        sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v461, v69, *((_DWORD *)v67 + 4));
        if ( *(_BYTE *)(a1 + 105) != 5 )
        {
          v70 = sub_3FAE20((__int64)v440, 0.0, si128);
          sub_3F6E00(*(_QWORD *)(a1 + 800), (__int64)v466, v70, *((_DWORD *)v67 + 4));
        }
        LODWORD(v438) = *((_DWORD *)v67 + 4);
        goto LABEL_123;
      }
    }
    v358 = &word_4EFB00;
    while ( *v358 != *(_WORD *)(a1 + 48) )
    {
      v358 += 12;
      if ( v358 == (__int16 *)&algn_4EFC64[4] )
      {
        qsnprintf();
        v66 = v442.m128i_i32[0];
        v435 = s;
        goto LABEL_687;
      }
    }
    v435 = *((void **)v358 + 1);
LABEL_687:
    v442.m128i_i32[0] = v66;
    v359 = sub_3FAE20(v441.m128i_i64[1], 0.0, si128);
    sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v461, v359, -12);
    if ( *(_BYTE *)(a1 + 109) != 7 )
    {
      v360 = v440;
      v361 = sub_3FAE20((__int64)v440, 0.0, si128);
      sub_1D6840(a1, *(unsigned __int8 *)(a1 + 109), 7, v361, v442.m128i_i32[0], 0);
      v362 = v442.m128i_i32[0];
      v440[1].m128i_i8[0] = 1;
      v360->m128i_i32[3] = v362;
    }
    LODWORD(v438) = -12;
    if ( *(_BYTE *)(a1 + 105) == 5 )
    {
LABEL_124:
      v71 = *(char *)(a1 + 109);
      v72 = sub_3FAE20((__int64)v440, 0.0, si128);
      sub_3F1CC0((__int64)v466, *(_QWORD *)(a1 + 832), v72, v71, 2);
      v73 = *(_BYTE *)(a1 + 65);
      if ( v73 == 13 )
      {
        v74 = v431;
      }
      else
      {
        v74 = 0;
        if ( v73 == 1 )
          v74 = (unsigned __int16)(*(_WORD *)(a1 + 70) - 64) <= 0xFu;
      }
      v435 = sub_3EE630((char *)v435, v74);
      if ( !v435 )
      {
        if ( !under_debugger )
          sub_383060(0xC83Eu, 0.0);
        goto LABEL_944;
      }
      v32 = 1;
      v428 = 0;
      v439.m128i_i32[0] = 20;
      v430 = 2;
      LODWORD(v434) = 2;
      v442.m128i_i64[0] = (__int64)s1;
      goto LABEL_27;
    }
    v363 = sub_3FAE20((__int64)v440, 0.0, si128);
    sub_3F6D50(*(_QWORD *)(a1 + 800), (__int64)v466, v363, -12);
    LODWORD(v438) = -12;
LABEL_123:
    LODWORD(v434) = 2;
    if ( *(_BYTE *)(a1 + 105) != 5 )
    {
LABEL_205:
      if ( !v435 )
      {
        v439.m128i_i32[0] = 20;
        v430 = 2;
        goto LABEL_207;
      }
      LOBYTE(v431) = 1;
LABEL_261:
      v428 = 0;
      v430 = 2;
      v439.m128i_i32[0] = 20;
      v442.m128i_i64[0] = (__int64)s1;
      goto LABEL_93;
    }
    goto LABEL_124;
  }
  v23 = *(unsigned __int16 *)(a1 + 48);
  if ( (unsigned __int16)v23 > 0xE2u )
  {
    if ( (_WORD)v23 != 595 )
      goto LABEL_6;
    sub_3FA780(a1, (__int64)v461, 21, v441.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
    v50 = *(_QWORD *)(a1 + 832);
    v51 = get_dtype_size();
    v442.m128i_i64[0] = (__int64)s1;
    sub_32C430((__int64 *)s1, v50, v51, 2);
    sub_32F0D0((__int64)v466, v439.m128i_i32[0], v51);
    clear_tinfo_t();
    s1[0] = (_BYTE *)(&dword_14 + 1);
    copy_tinfo_t();
    clear_tinfo_t();
    v52 = *(_QWORD *)(a1 + 832);
    v53 = *(_DWORD *)(v52 + 396);
    v441.m128i_i32[0] = get_dtype_size();
    sub_32C430((__int64 *)s1, v52, v441.m128i_u32[0], 2);
    sub_32F0D0((__int64)v468, v53, v441.m128i_i32[0]);
    clear_tinfo_t();
    s1[0] = (_BYTE *)(&dword_14 + 1);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_32F110((__int64)v469, *(_QWORD *)(a1 + 832), v433, 0x10u, 16, 16, 1);
    v12.m128i_i64[0] = 0;
    v439.m128i_i64[0] = (__int64)&s1[1];
    v443 = 21;
    v446 = 0;
    v444 = 0;
    v441.m128i_i64[0] = (__int64)&v444;
    *(_OWORD *)s1 = 0;
    copy_tinfo_t();
    s1[2] = nullptr;
    copy_tinfo_t();
    LODWORD(v460) = 0;
    WORD2(v460) = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    v54 = v441.m128i_i64[1];
    v55 = v433;
    *(_DWORD *)(v441.m128i_i64[1] + 12) = v432;
    *(_BYTE *)(v54 + 16) = 1;
    v56 = get_dtype_size();
    sub_1D6310(a1, 4u, v56, 8, 0x3BEA45E214ADDC55LL, v55, 0);
    v57 = get_dtype_size();
    sub_1D6310(a1, 4u, v57, v436, 0x3BEA45E214ADDC55LL, v433 + 8, 0);
    sub_3F0D80(v449, a1 + 64, 0);
    LOBYTE(v431) = 1;
    LODWORD(v434) = 4;
    v430 = 1;
    v435 = "_InterlockedCompareExchange128";
    v441.m128i_i32[0] = 0;
    v439.m128i_i32[0] = 4;
    v428 = 1;
    LODWORD(v438) = 34;
LABEL_93:
    v32 = (unsigned __int8)v431;
    goto LABEL_27;
  }
  if ( (unsigned __int16)v23 > 0xD0u )
  {
    LOWORD(v23) = v23 - 209;
    switch ( v23 )
    {
      case 0LL:
      case 7LL:
        goto LABEL_105;
      case 5LL:
LABEL_129:
        LOBYTE(v431) = a4 > 1u && *(_BYTE *)(a1 + 105) != 1;
        if ( !(_BYTE)v431 )
          goto LABEL_6;
        LODWORD(v438) = 4;
        v441.m128i_i8[0] = 4;
        if ( a4 == 7 )
        {
          LODWORD(v438) = 5;
          v441.m128i_i8[0] = 5;
        }
        sub_3FA780(a1, (__int64)v461, v438, (__int64)v440, 0.0, 128, 0xFFFFFFFF);
        if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
          sub_3EB430(0.0);
        v442.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v75 = *(_DWORD *)(v441.m128i_i64[1] + 12);
        v76 = v442.m128i_i64[0];
        v439.m128i_i32[0] = get_dtype_size();
        v442.m128i_i64[0] = (__int64)s1;
        sub_32C430((__int64 *)s1, v76, v439.m128i_u32[0], 2);
        sub_32F0D0((__int64)v466, v75, v439.m128i_i32[0]);
        clear_tinfo_t();
        s1[0] = (char *)v441.m128i_u8[0];
        copy_tinfo_t();
        clear_tinfo_t();
        v77 = "_InterlockedExchange64";
        if ( a4 != 7 )
          v77 = "_InterlockedExchange";
        v435 = v77;
        sub_3F0D80(v449, a1 + 104, 0);
        v428 = 0;
        v439.m128i_i32[0] = 4;
        v441.m128i_i32[0] = 0;
        v430 = 1;
        LODWORD(v434) = 2;
        goto LABEL_112;
      case 8LL:
        if ( *(_BYTE *)(a1 + 65) == 1 )
          goto LABEL_6;
        v85 = &v470[40];
        *(_QWORD *)&v470[24] = 0;
        *(_QWORD *)&v470[32] = 0;
        memset(v470, 255, 24);
        v12.m128i_i64[0] = 0;
        do
        {
          *(_WORD *)v85 = 0;
          v85 += 40;
          *((_WORD *)v85 - 19) = 0;
          *((_WORD *)v85 - 18) = 0;
          *((_DWORD *)v85 - 2) = 0;
          *((_WORD *)v85 - 17) = 0;
          *((_OWORD *)v85 - 2) = 0;
          *((_QWORD *)v85 - 2) = 0;
        }
        while ( v85 != &v471 );
        v86 = *(_QWORD *)(a1 + 800);
        v441.m128i_i64[0] = a1 + 24;
        v87 = sub_3F0080(v86, a1 + 24, v470);
        if ( v87 != -1 )
        {
          LOBYTE(v431) = sub_332920(*(_QWORD *)(a1 + 8) + 8LL, *(unsigned __int64 *)&v470[16]);
          if ( (_BYTE)v431 )
          {
            sub_B57F0(*(_QWORD *)(a1 + 8), v87, *(_QWORD *)(a1 + 40));
            v435 = (void *)sub_3EB540((__int64)s, *(unsigned __int16 *)&v470[24], a4, 0.0);
            LODWORD(v438) = 19;
            if ( a4 != 1 )
            {
              LODWORD(v438) = 20;
              if ( a4 != 2 )
              {
                LODWORD(v438) = 18;
                if ( a4 )
                  LODWORD(v438) = 21;
              }
            }
            sub_3FA780(a1, (__int64)v461, v438, v441.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
            v439.m128i_i64[0] = (__int64)v472;
            qmemcpy(v472, (const void *)v441.m128i_i64[0], 0x168u);
            v441.m128i_i64[0] = a1 + 24;
            qmemcpy((void *)(a1 + 24), v470, 0x168u);
            v446 = a1;
            v447 = 0xFFFFFFFF00000001LL;
            v448 = 0;
            sub_3FA580((int *)&v446, 1, 0, 0.0);
            if ( !v448 && !(unsigned __int8)sub_3FACB0((__int64)&v446, 0.0, si128) )
              sub_3EB430(0.0);
            v295 = HIDWORD(v447);
            v296 = *(_QWORD *)(a1 + 832);
            LODWORD(v434) = get_dtype_size();
            v442.m128i_i64[0] = (__int64)s1;
            sub_32C430((__int64 *)s1, v296, (unsigned int)v434, 2);
            sub_32F0D0((__int64)v466, v295, (int)v434);
            clear_tinfo_t();
            v297 = v441.m128i_i64[1];
            qmemcpy((void *)v441.m128i_i64[0], (const void *)v439.m128i_i64[0], 0x168u);
            *(_DWORD *)(v441.m128i_i64[1] + 12) = 8;
            *(_BYTE *)(v297 + 16) = 1;
            sub_3F0D80(v449, a1 + 64, 0);
            v298 = get_dtype_size();
            v299 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                     *(_QWORD *)(a1 + 832),
                     *(unsigned __int16 *)&v470[46]);
            s1[0] = nullptr;
            s1[1] = nullptr;
            sub_63E80((__int64 *)v442.m128i_i64[0], v299, v298);
            v12.m128i_i64[0] = 0;
            s1[2] = nullptr;
            v460 = 0;
            sub_64280(v449, (__int64 *)v442.m128i_i64[0]);
            sub_316CB0((__int64 *)&v450, (__int64 **)&s1[2]);
            if ( s1[2] )
            {
              *(_QWORD *)&v460 = 0;
              qfree();
            }
            qfree();
            v300 = get_dtype_size();
            sub_1D6310(a1, 4u, v300, 8, 0x3BEA45E214ADDC55LL, v432, 0);
            v32 = 1;
            v428 = 0;
            v439.m128i_i32[0] = 4;
            v441.m128i_i32[0] = 0;
            v430 = 1;
            LODWORD(v434) = 2;
            goto LABEL_27;
          }
        }
        if ( a4 == 2 )
        {
          LODWORD(v438) = 20;
          v435 = "_InterlockedCompareExchange";
        }
        else if ( a4 > 2u )
        {
          LODWORD(v438) = 21;
          v435 = "_InterlockedCompareExchange64";
          if ( a4 != 7 )
            goto LABEL_6;
        }
        else
        {
          LODWORD(v438) = 18;
          v435 = "_InterlockedCompareExchange8";
          if ( a4 )
          {
            LODWORD(v438) = 19;
            v435 = "_InterlockedCompareExchange16";
          }
        }
        if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
          sub_3EB430(0.0);
        v88 = v440->m128i_i32[3];
        v442.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v441.m128i_i32[0] = v88;
        v89 = get_dtype_size();
        v90 = v442.m128i_i64[0];
        v442.m128i_i64[0] = (__int64)s1;
        sub_32C430((__int64 *)s1, v90, v89, 2);
        sub_32F0D0((__int64)v466, v441.m128i_i32[0], v89);
        clear_tinfo_t();
        v91 = *(_QWORD *)(a1 + 832);
        v441.m128i_i32[0] = get_dtype_size();
        sub_32C430((__int64 *)s1, v91, v441.m128i_u32[0], 2);
        sub_32F0D0((__int64)v468, 8, v441.m128i_i32[0]);
        clear_tinfo_t();
LABEL_137:
        v79 = get_dtype_size();
        sub_1D6310(a1, 4u, v79, 8, 0x3BEA45E214ADDC55LL, v432, 0);
        sub_3FA780(a1, (__int64)v461, v438, v441.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
        s1[0] = (char *)(int)v438;
        copy_tinfo_t();
        clear_tinfo_t();
        s1[0] = (char *)(int)v438;
        copy_tinfo_t();
        clear_tinfo_t();
        v80 = v441.m128i_i64[1];
        *(_DWORD *)(v441.m128i_i64[1] + 12) = 8;
        *(_BYTE *)(v80 + 16) = 1;
        sub_3F0D80(v449, a1 + 64, 0);
        v428 = 1;
        v439.m128i_i32[0] = 4;
        v441.m128i_i32[0] = 0;
        v430 = 1;
        LODWORD(v434) = 3;
        LOBYTE(v431) = 1;
        break;
      case 10LL:
        v442.m128i_i32[0] = a4;
        v435 = (void *)sub_3EB540((__int64)s, 219, a4, 0.0);
        LODWORD(v438) = 19;
        if ( a4 != 1 )
        {
          LODWORD(v438) = 20;
          if ( a4 != 2 )
            LODWORD(v438) = a4 == 0 ? 18 : 21;
        }
        if ( *(_BYTE *)(a1 + 65) == 1 )
        {
          v242 = get_dtype_size();
          if ( !*(_BYTE *)(v441.m128i_i64[1] + 16) && !(unsigned __int8)sub_3FACB0(v441.m128i_i64[1], 0.0, si128) )
            sub_3EB430(0.0);
          sub_32F110((__int64)v461, *(_QWORD *)(a1 + 832), *(_DWORD *)(v441.m128i_i64[1] + 12), v242, v242, v242, 1);
        }
        else
        {
          sub_3FA780(a1, (__int64)v461, v438, v441.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
        }
        if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
          sub_3EB430(0.0);
        v81 = *(_QWORD *)(a1 + 832);
        v82 = v440->m128i_i32[3];
        v442.m128i_i64[0] = (__int64)s1;
        v441.m128i_i32[0] = get_dtype_size();
        sub_32C430((__int64 *)s1, v81, v441.m128i_u32[0], 2);
        sub_32F0D0((__int64)v466, v82, v441.m128i_i32[0]);
        clear_tinfo_t();
        v83 = v441.m128i_i64[1];
        v84 = v440;
        v12 = _mm_loadu_si128(v440);
        *(__m128i *)v441.m128i_i64[1] = v12;
        *(_BYTE *)(v83 + 16) = v84[1].m128i_i8[0];
        sub_3F0D80(v449, a1 + 64, 0);
        sub_3F6F70(a1);
        goto LABEL_111;
      case 17LL:
        sub_1252A0((__int64)v466, v18[99], v439.m128i_i32[0], 4);
        s1[0] = (_BYTE *)(&dword_14 + 1);
        copy_tinfo_t();
        v442.m128i_i64[0] = (__int64)s1;
        clear_tinfo_t();
        v441.m128i_i64[0] = *(_QWORD *)(a1 + 832);
        v78 = get_dtype_size();
        sub_32C430((__int64 *)s1, v441.m128i_i64[0], v78, 2);
        sub_32F0D0((__int64)v468, 8, v78);
        clear_tinfo_t();
        LODWORD(v438) = 21;
        v435 = "_InterlockedCompareExchange64";
        goto LABEL_137;
      default:
        goto LABEL_6;
    }
    goto LABEL_112;
  }
  if ( (unsigned __int16)v23 <= 0x2Cu )
  {
    if ( (unsigned __int16)v23 > 5u )
    {
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 6:
          LOBYTE(v431) = equal_bytes(*(_QWORD *)(a1 + 40), &unk_434BA0, 0, 10, 1);
          if ( !(_BYTE)v431 )
            goto LABEL_105;
          LOBYTE(v443) = 3;
          netnode_supset();
          LOBYTE(v444) = 3;
          netnode_supset();
          sub_3FA780(a1, (__int64)v461, 21, v441.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v113 = *(_QWORD *)(a1 + 832);
          v114 = v440->m128i_i32[3];
          v442.m128i_i64[0] = (__int64)s1;
          v441.m128i_i32[0] = get_dtype_size();
          sub_32C430((__int64 *)s1, v113, v441.m128i_u32[0], 2);
          sub_32F0D0((__int64)v466, v114, v441.m128i_i32[0]);
          clear_tinfo_t();
          v115 = v441.m128i_i64[1];
          *(_DWORD *)(v441.m128i_i64[1] + 12) = 8;
          *(_BYTE *)(v115 + 16) = 1;
          sub_3F0D80(v449, a1 + 64, 0);
          LODWORD(v434) = 2;
          v430 = 1;
          v435 = "_InterlockedAddLargeStatistic";
          v441.m128i_i32[0] = 0;
          v439.m128i_i32[0] = 4;
          v428 = 0;
          LODWORD(v438) = 20;
          goto LABEL_93;
        case 7:
          goto LABEL_105;
        case 0xE:
        case 0xF:
          if ( *(_BYTE *)(a1 + 65) == 1 )
            goto LABEL_6;
          v93 = (void *)sub_3EB540((__int64)s, (unsigned __int16)v23, a4, 0.0);
          v94 = *(_WORD *)(a1 + 48) == 14;
          v435 = v93;
          v441.m128i_i32[0] = 20;
          if ( v94 )
            v441.m128i_i32[0] = 21;
          sub_3FA780(a1, (__int64)v461, 20, v441.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
          v95 = *(_BYTE *)(a1 + 109);
          if ( v95 < a4 )
          {
            if ( v440[1].m128i_i8[0] )
            {
              v96 = v440->m128i_i32[3];
              v442.m128i_i32[0] = v96;
            }
            else
            {
              if ( !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
                sub_3EB430(0.0);
              v94 = v440[1].m128i_i8[0] == 0;
              v442.m128i_i32[0] = v440->m128i_i32[3];
              if ( v94 )
              {
                if ( !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
                  sub_3EB430(0.0);
                v95 = *(_BYTE *)(a1 + 109);
                v96 = v440->m128i_i32[3];
              }
              else
              {
                v95 = *(_BYTE *)(a1 + 109);
                v96 = v442.m128i_i32[0];
              }
            }
            sub_1D6840(a1, v95, a4, v96, v442.m128i_i32[0], 0);
          }
          if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
            sub_3EB430(0.0);
          v97 = v440->m128i_i32[3];
          v438 = *(_QWORD *)(a1 + 832);
          v439.m128i_i32[0] = v97;
          v98 = get_dtype_size();
          v442.m128i_i64[0] = (__int64)s1;
          sub_32C430((__int64 *)s1, v438, v98, 2);
          sub_32F0D0((__int64)v466, v439.m128i_i32[0], v98);
          clear_tinfo_t();
          v99 = v441.m128i_i64[1];
          *(_DWORD *)(v441.m128i_i64[1] + 12) = 0;
          *(_BYTE *)(v99 + 16) = 1;
          sub_3F0D80(v449, a1 + 64, 0);
          LODWORD(v438) = 18;
          v428 = 0;
          v439.m128i_i32[0] = 4;
          v430 = 1;
          LODWORD(v434) = 2;
          LOBYTE(v431) = 1;
          goto LABEL_112;
        case 0x22:
        case 0x2C:
          if ( *(_BYTE *)(a1 + 65) == 1 )
            goto LABEL_6;
          v435 = (void *)sub_3EB540((__int64)s, (unsigned __int16)v23, a4, 0.0);
          LODWORD(v438) = 19;
          if ( a4 != 1 )
          {
            LODWORD(v438) = 20;
            if ( a4 != 2 )
              LODWORD(v438) = a4 == 0 ? 18 : 21;
          }
          sub_3FA780(a1, (__int64)v461, v438, v441.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
          sub_3F0D80(v449, a1 + 64, 0);
          v428 = 0;
          v439.m128i_i32[0] = 4;
          v441.m128i_i32[0] = 0;
          v430 = 1;
          LODWORD(v434) = 1;
          LOBYTE(v431) = 1;
          v442.m128i_i64[0] = (__int64)s1;
          goto LABEL_112;
        default:
          goto LABEL_6;
      }
    }
    goto LABEL_6;
  }
  if ( (_WORD)v23 == 131 )
  {
LABEL_105:
    if ( *(_BYTE *)(a1 + 65) == 1 )
      goto LABEL_6;
    v62 = *(unsigned __int16 *)(a1 + 48);
    v442.m128i_i32[0] = a4;
    v435 = (void *)sub_3EB540((__int64)s, v62, a4, 0.0);
    LODWORD(v438) = 19;
    if ( a4 != 1 )
    {
      LODWORD(v438) = 20;
      if ( a4 != 2 )
        LODWORD(v438) = a4 == 0 ? 18 : 21;
    }
    sub_3FA780(a1, (__int64)v461, v438, v441.m128i_i64[1], 0.0, 128, 0xFFFFFFFF);
    if ( !v440[1].m128i_i8[0] && !(unsigned __int8)sub_3FACB0((__int64)v440, 0.0, si128) )
      sub_3EB430(0.0);
    v63 = *(_QWORD *)(a1 + 832);
    v64 = v440->m128i_i32[3];
    v442.m128i_i64[0] = (__int64)s1;
    v441.m128i_i32[0] = get_dtype_size();
    sub_32C430((__int64 *)s1, v63, v441.m128i_u32[0], 2);
    sub_32F0D0((__int64)v466, v64, v441.m128i_i32[0]);
    clear_tinfo_t();
    sub_3F0D80(v449, a1 + 64, 0);
LABEL_111:
    v428 = 0;
    v439.m128i_i32[0] = 4;
    v441.m128i_i32[0] = 0;
    v430 = 1;
    LODWORD(v434) = 2;
    LOBYTE(v431) = 1;
LABEL_112:
    v32 = (unsigned __int8)v431;
    v427 = *(_QWORD *)(a1 + 8);
    goto LABEL_28;
  }
LABEL_6:
  v21 = 0;
LABEL_7:
  qfree();
  do
  {
LABEL_8:
    v14 -= 80;
    cleanup_argloc();
    if ( *((_QWORD *)v14 + 4) )
    {
      *((_QWORD *)v14 + 5) = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v14);
  }
  while ( v14 != v461 );
  if ( v457 )
  {
    v458.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( src )
  {
    *(_QWORD *)&v454 = 0;
    qfree();
  }
  qfree();
  if ( v450 )
  {
    v451.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  return v21;
}
