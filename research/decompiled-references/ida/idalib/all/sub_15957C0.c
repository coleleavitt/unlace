void __fastcall sub_15957C0(__int64 *a1, char a2, __int64 a3, _DWORD *a4, unsigned __int64 a5)
{
  char v5; // al
  int v6; // esi
  int v7; // eax
  unsigned __int64 v8; // rax
  __m128 si128; // xmm0
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 *v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r12
  unsigned __int64 v22; // rdx
  _WORD **v23; // rbx
  __int64 v24; // r14
  _WORD *v25; // rsi
  __int64 v26; // r12
  unsigned __int64 v27; // rdx
  _WORD **v28; // rcx
  __int64 v29; // rbp
  _WORD **v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  unsigned __int8 v38; // al
  __int64 v39; // rbx
  int v40; // ecx
  int v41; // ebx
  int v42; // rax^4
  __int64 *v43; // rdx
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  void **i; // rbp
  unsigned int *v55; // rbx
  unsigned int *v56; // r14
  __int64 v57; // rdx
  unsigned int *v58; // rcx
  unsigned int v59; // eax
  __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v62; // eax
  __int64 v63; // r8
  __int64 v64; // r9
  void *v65; // rbp
  void *v66; // rax
  _QWORD *v67; // rax
  unsigned int v68; // eax
  __int64 v69; // rax
  unsigned int v70; // ebx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  void *v76; // rdx
  __int64 v77; // rax
  unsigned int v78; // eax
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned int *v81; // rax
  unsigned int v82; // eax
  __int64 v83; // r8
  __int64 v84; // r9
  char v85; // bl
  unsigned int v86; // eax
  __int64 v87; // r8
  __int64 v88; // r9
  char v89; // al
  __int64 (__fastcall *v90)(_DWORD *); // rax
  unsigned int v91; // eax
  __int64 v92; // r8
  __int64 v93; // r9
  unsigned int v94; // eax
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r14
  __int64 **v99; // rax
  void **v100; // rdi
  __int64 *v101; // rdx
  __int64 v102; // rsi
  unsigned int v103; // eax
  __int64 v104; // rdx
  void *v105; // rdx
  __int64 *v106; // rbx
  __int64 v107; // r15
  char v108; // bp
  char *v109; // rcx
  __int64 *v110; // rdx
  char *v111; // rax
  char *v112; // rdx
  __int64 v113; // r13
  __int64 v114; // r14
  unsigned __int64 v115; // rdi
  __int64 v116; // rax
  unsigned __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  unsigned int v120; // eax
  unsigned int v121; // eax
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rcx
  unsigned int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 *v131; // rbp
  __int64 v132; // rbx
  int v133; // eax
  void *v134; // rbx
  __int64 v135; // rax
  void *v136; // rax
  _QWORD *v137; // rbx
  __int64 *v138; // rbx
  __int64 *v139; // r14
  __int64 v140; // r12
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 *v143; // rax
  unsigned __int64 v144; // r12
  __int64 *v145; // r12
  __int64 *v146; // rbp
  __int64 *v147; // rcx
  __int64 *v148; // rdx
  __int64 v149; // rax
  __int64 *v150; // rbx
  __int64 *v151; // rax
  const __m128i *v152; // rbx
  __int64 v153; // rbp
  const __m128i *v154; // r14
  __int64 v155; // r12
  unsigned __int64 v156; // rax
  unsigned __int64 v157; // rsi
  __int64 v158; // r8
  __int64 v159; // r9
  const __m128i *v160; // rdi
  const __m128i *v161; // r14
  const __m128i *v162; // r15
  unsigned __int64 v163; // rbp
  __m128i v164; // xmm1
  unsigned __int64 v165; // rdi
  __m128i *v166; // rbx
  int v167; // r13d
  unsigned int v168; // eax
  __m128i v169; // xmm4
  char v170; // al
  __int64 *v171; // rdi
  void **v172; // rbx
  unsigned __int64 v173; // r13
  unsigned __int64 v174; // rbp
  __int64 v175; // r14
  __int64 v176; // rcx
  unsigned __int8 v177; // al
  __int64 v178; // rdx
  __int64 v179; // r15
  unsigned int v180; // eax
  unsigned __int64 v181; // rax
  unsigned int v182; // r14d
  unsigned __int64 v183; // r15
  _QWORD *v184; // r13
  _QWORD *v185; // r15
  unsigned __int64 v186; // rdi
  unsigned int v187; // eax
  unsigned __int64 v188; // r14
  unsigned __int64 v189; // r12
  unsigned __int64 v190; // rax
  unsigned __int64 v191; // rdi
  unsigned __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // rdx
  unsigned __int64 *v195; // rax
  unsigned __int64 *v196; // rdx
  unsigned __int64 v197; // rax
  unsigned int v198; // edx
  int v199; // eax
  __int64 v200; // rax
  char v201; // bp
  bool v202; // al
  _BYTE *v203; // rdx
  __int64 v204; // rdi
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // r8
  __int64 v208; // r9
  unsigned __int64 *v209; // rax
  __int64 *v210; // rdx
  unsigned __int64 v211; // rcx
  unsigned __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 *v217; // rax
  _QWORD *v218; // rax
  __int64 v219; // rdi
  unsigned __int64 v220; // r8
  unsigned __int64 v221; // rdx
  char v222; // dl
  __int64 v223; // rax
  unsigned __int64 v224; // rdx
  _BYTE *v225; // rbx
  unsigned __int64 v226; // rdx
  __m128i *v227; // rcx
  const __m128i *v228; // rax
  char v229; // dl
  unsigned __int64 v230; // rax
  unsigned __int64 v231; // rcx
  void ***v232; // r15
  __int64 v233; // rax
  unsigned __int64 v234; // rdx
  __int64 v235; // rax
  __int64 v236; // rdx
  int v237; // eax
  __int64 v238; // rdx
  __int64 v239; // rcx
  __int64 v240; // r8
  __int64 v241; // r9
  __int64 *v242; // rax
  _QWORD *v243; // rax
  __int64 v244; // rcx
  unsigned __int64 v245; // rax
  unsigned __int64 v246; // rdi
  unsigned __int64 v247; // rdx
  __int64 v248; // rdx
  __int64 v249; // rdx
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 v253; // r14
  __int64 *v254; // rax
  _QWORD *v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rcx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 v260; // r15
  __int64 *v261; // rax
  _QWORD *v262; // rax
  __int64 v263; // rdx
  __int64 v264; // rcx
  __int64 v265; // r8
  __int64 v266; // r9
  __int64 *v267; // rax
  _QWORD *v268; // rax
  __int64 v269; // rdx
  int v270; // eax
  __int64 *v271; // rcx
  __int64 v272; // rax
  unsigned __int16 v273; // dx
  unsigned __int64 v274; // rdi
  char v275; // al
  char v276; // dl
  bool v277; // dl
  unsigned __int64 v278; // rdx
  char v279; // al
  unsigned __int8 v280; // cl
  __int64 v281; // rcx
  unsigned __int64 v282; // rdi
  int v283; // eax
  unsigned __int64 v284; // rax
  __int64 v285; // rax
  __int64 v286; // rdx
  __int64 v287; // rsi
  __int64 v288; // rdx
  __int64 v289; // rbx
  void *v290; // rdi
  __int64 v291; // rax
  __int64 v292; // rdx
  __int64 v293; // r8
  __int64 v294; // rdx
  __int64 v295; // rbp
  __int64 v296; // rbx
  void *v297; // rdi
  unsigned __int64 *v298; // rax
  unsigned int v299; // eax
  __int64 v300; // r8
  __int64 v301; // r9
  unsigned int v302; // eax
  __int64 v303; // r8
  __int64 v304; // r9
  unsigned int v305; // eax
  __int64 v306; // r8
  __int64 v307; // r9
  _DWORD *v308; // rax
  unsigned int v309; // edx
  __int64 v310; // rax
  unsigned __int64 v311; // rax
  __int64 v312; // rax
  __int64 v313; // rdx
  int v314; // eax
  __int64 v315; // rax
  __int64 v316; // rdx
  int v317; // eax
  __int64 v318; // rax
  __int64 v319; // rax
  void **v320; // rsi
  void **v321; // rax
  void **v322; // r12
  void **v323; // rdi
  _BYTE *v324; // rax
  __int64 v325; // rax
  __int64 v326; // rdx
  __int64 v327; // r8
  __int64 v328; // rdx
  __int64 v329; // r12
  __int64 v330; // r14
  __int64 v331; // rbx
  void *v332; // rdi
  __int64 *v333; // rax
  __int64 *v334; // rbp
  int v335; // r14d
  unsigned int v336; // ebx
  unsigned int v337; // eax
  __int64 v338; // rcx
  __int64 *v339; // rdi
  __int64 v340; // rbx
  __int64 *v341; // r13
  __int64 v342; // rax
  __int64 v343; // r14
  __int64 v344; // r12
  __int64 v345; // rdx
  int v346; // eax
  unsigned __int64 v347; // r15
  __int64 *v348; // rcx
  __int64 v349; // rax
  unsigned __int64 v350; // rdi
  unsigned __int64 v351; // rax
  unsigned __int8 v352; // cl
  unsigned __int64 v355; // [rsp+10h] [rbp-358h]
  __int64 *v357; // [rsp+18h] [rbp-350h]
  __int64 **v358; // [rsp+18h] [rbp-350h]
  const __m128i *v359; // [rsp+18h] [rbp-350h]
  __int64 v360; // [rsp+18h] [rbp-350h]
  int v361; // [rsp+18h] [rbp-350h]
  void *v362; // [rsp+18h] [rbp-350h]
  __int64 v363; // [rsp+20h] [rbp-348h]
  __int64 v364; // [rsp+20h] [rbp-348h]
  __int64 v365; // [rsp+20h] [rbp-348h]
  unsigned __int64 *v366; // [rsp+20h] [rbp-348h]
  __int64 v367; // [rsp+20h] [rbp-348h]
  int v369; // [rsp+30h] [rbp-338h]
  unsigned int v370; // [rsp+30h] [rbp-338h]
  char v371; // [rsp+30h] [rbp-338h]
  __int64 v372; // [rsp+30h] [rbp-338h]
  __int64 v373; // [rsp+30h] [rbp-338h]
  int v374; // [rsp+30h] [rbp-338h]
  char v375; // [rsp+30h] [rbp-338h]
  unsigned __int64 v376; // [rsp+30h] [rbp-338h]
  int v377; // [rsp+30h] [rbp-338h]
  __int64 v378; // [rsp+30h] [rbp-338h]
  unsigned __int64 v379; // [rsp+30h] [rbp-338h]
  unsigned __int64 v380; // [rsp+30h] [rbp-338h]
  int v381; // [rsp+30h] [rbp-338h]
  unsigned __int64 v382; // [rsp+30h] [rbp-338h]
  __int64 v383; // [rsp+38h] [rbp-330h]
  __int64 v384; // [rsp+38h] [rbp-330h]
  unsigned __int64 v385; // [rsp+38h] [rbp-330h]
  int v386; // [rsp+38h] [rbp-330h]
  unsigned __int64 v387; // [rsp+38h] [rbp-330h]
  unsigned __int64 v388; // [rsp+38h] [rbp-330h]
  unsigned int v389; // [rsp+38h] [rbp-330h]
  __int64 v391; // [rsp+40h] [rbp-328h]
  char v392; // [rsp+48h] [rbp-320h]
  unsigned __int64 *v393; // [rsp+48h] [rbp-320h]
  char v394; // [rsp+50h] [rbp-318h]
  __int64 v395; // [rsp+50h] [rbp-318h]
  unsigned int v396; // [rsp+50h] [rbp-318h]
  char v397; // [rsp+5Fh] [rbp-309h]
  unsigned __int64 v398; // [rsp+60h] [rbp-308h]
  __int64 v399; // [rsp+68h] [rbp-300h]
  void **v400; // [rsp+68h] [rbp-300h]
  void **v401; // [rsp+70h] [rbp-2F8h]
  void **v402; // [rsp+78h] [rbp-2F0h]
  __int64 *v403; // [rsp+98h] [rbp-2D0h] BYREF
  unsigned __int64 v404; // [rsp+A0h] [rbp-2C8h] BYREF
  int v405; // [rsp+A8h] [rbp-2C0h]
  __int128 v406; // [rsp+B0h] [rbp-2B8h] BYREF
  __int64 v407; // [rsp+C0h] [rbp-2A8h]
  void *v408[2]; // [rsp+D0h] [rbp-298h] BYREF
  __int64 *v409; // [rsp+E0h] [rbp-288h] BYREF
  void **v410; // [rsp+E8h] [rbp-280h] BYREF
  void ***v411; // [rsp+F0h] [rbp-278h]
  __int64 v412; // [rsp+F8h] [rbp-270h]
  int v413; // [rsp+100h] [rbp-268h]
  int v414; // [rsp+104h] [rbp-264h]
  __int64 v415; // [rsp+108h] [rbp-260h]
  char v416; // [rsp+110h] [rbp-258h]
  char v417; // [rsp+148h] [rbp-220h]
  unsigned int v418; // [rsp+150h] [rbp-218h]
  char v419; // [rsp+154h] [rbp-214h]
  void *s[2]; // [rsp+160h] [rbp-208h] BYREF
  __int64 v421; // [rsp+170h] [rbp-1F8h] BYREF
  void *v422; // [rsp+178h] [rbp-1F0h] BYREF
  __int64 v423; // [rsp+180h] [rbp-1E8h]
  void *ptr; // [rsp+188h] [rbp-1E0h]
  void *v425; // [rsp+190h] [rbp-1D8h]
  int v426; // [rsp+198h] [rbp-1D0h] BYREF
  void **v427; // [rsp+1A0h] [rbp-1C8h]
  __int64 v428; // [rsp+230h] [rbp-138h] BYREF
  _DWORD *v429; // [rsp+238h] [rbp-130h]
  __m128i v430[2]; // [rsp+258h] [rbp-110h] BYREF
  __int64 v431; // [rsp+278h] [rbp-F0h]
  __int128 *v432; // [rsp+288h] [rbp-E0h]
  int v433; // [rsp+290h] [rbp-D8h]
  char v434; // [rsp+296h] [rbp-D2h]
  __int16 v435; // [rsp+299h] [rbp-CFh]
  char v436; // [rsp+2A8h] [rbp-C0h]

  v355 = *(_QWORD *)(*a1 + 264);
  v5 = *(_BYTE *)(*(_QWORD *)(v355 + 152) + 24LL);
  if ( (v5 & 1) != 0 )
    return;
  if ( (v5 & 0x10) != 0 )
  {
    v6 = a4[6];
    if ( v6 )
    {
      v7 = sub_1021680(*(_QWORD *)(*a1 + 272), v6);
      if ( v7 != 3 )
      {
        if ( v7 )
          return;
      }
    }
  }
  v8 = sub_B8D340((__int64)a4);
  if ( (unsigned __int8)sub_B8E180(v8) )
    return;
  v397 = sub_15F7970(*a1);
  if ( v397 )
  {
    sub_157D800(*a1, a3);
    return;
  }
  v398 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 64LL))(a4);
  sub_984440((__int64)&v428, 0, (__int64)a4);
  v433 = 16842753;
  v434 = 1;
  v435 = 256;
  if ( (a2 & 0xE) != 0 )
  {
    v431 = 1;
    memset(v430, 255, sizeof(v430));
  }
  else
  {
    v430[0] = _mm_or_si128(_mm_loadu_si128(v430), (__m128i)xmmword_23AA770);
  }
  si128 = 0;
  v407 = 0;
  v406 = 0;
  v394 = *(_BYTE *)(*(_QWORD *)(*a1 + 232) + 200LL) & 0x10;
  v10 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
  if ( sub_157D730(v355, v10, v11, v12, v13, v14) )
  {
    v17 = *a1;
    LOBYTE(v407) = 1;
    *(_QWORD *)&v406 = off_2BB3D68;
    *((_QWORD *)&v406 + 1) = v17;
    v432 = &v406;
  }
  v18 = a3;
  v19 = *(unsigned int *)(a3 + 456);
  if ( !(_DWORD)v19 )
    goto LABEL_34;
  v20 = *(_QWORD *)(a3 + 448);
  v21 = v20 + 40 * v19;
  do
  {
    v22 = *(_QWORD *)(v20 + 32) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v20 + 32) & 4) != 0 )
    {
      v23 = *(_WORD ***)v22;
      v20 += 40;
      v24 = *(_QWORD *)v22 + 8LL * *(unsigned int *)(v22 + 8);
    }
    else
    {
      v23 = (_WORD **)(v20 + 32);
      v20 += 40;
      if ( !v22 )
        continue;
      v24 = v20;
    }
    while ( (_WORD **)v24 != v23 )
    {
      v25 = *v23++;
      sub_984800((__int64)&v428, v25, v22, v18, v15, v16);
    }
  }
  while ( v20 != v21 );
  if ( sub_986B70((__int64)&v428) )
  {
    v26 = *(_QWORD *)(a3 + 448);
    v383 = v26 + 40LL * *(unsigned int *)(a3 + 456);
    if ( v26 != v383 )
    {
      do
      {
        v27 = *(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v26 + 32) & 4) != 0 )
        {
          v28 = *(_WORD ***)v27;
          v29 = *(_QWORD *)v27 + 8LL * *(unsigned int *)(v27 + 8);
          v363 = v26 + 40;
        }
        else
        {
          v28 = (_WORD **)(v26 + 32);
          v363 = v26 + 40;
          if ( !v27 )
            goto LABEL_32;
          v29 = v26 + 40;
        }
        if ( (_WORD **)v29 != v28 )
        {
          v30 = v28;
          do
          {
            v31 = sub_987040((__int64)&v428, *v30);
            v32 = sub_986A50((__int64)&v428);
            v33 = v32;
            if ( v31 )
            {
              if ( v32 )
              {
                v34 = *(_QWORD *)sub_986B70((__int64)&v428);
                if ( !(unsigned __int8)sub_9A8610(v33, v34, v31, v35, v36, v37) )
                  goto LABEL_33;
              }
            }
            ++v30;
          }
          while ( (_WORD **)v29 != v30 );
        }
LABEL_32:
        sub_168CDE0(s, *a1 + 8, *(unsigned int *)(v26 + 24), v26, 0);
        sub_15F7200(s);
LABEL_33:
        v26 = v363;
      }
      while ( v383 != v363 );
    }
  }
  else
  {
    sub_157D800(*a1, a3);
  }
LABEL_34:
  if ( (a2 & 1) == 0 )
    goto LABEL_41;
  v38 = a4[7] & 0x7F;
  if ( v38 == 8 )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA780);
    LODWORD(v421) = 0;
    *(__m128 *)s = si128;
    v39 = *a1;
    goto LABEL_40;
  }
  if ( (unsigned int)v38 - 35 > 3 || (unsigned int)sub_B77890((__int64)a4) != 42 )
  {
    v39 = *a1;
    goto LABEL_38;
  }
  v310 = *(_QWORD *)(sub_B8C1B0((__int64)(a4 + 18)) + 16);
  if ( (v310 & 4) != 0 )
    v311 = *(_QWORD *)(v310 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v311 = v310 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v311 )
    BUG();
  v312 = *(_QWORD *)(v311 + 64);
  v39 = *a1;
  if ( !v312 || (*(_BYTE *)(v312 + 10) & 0x20) == 0 )
  {
LABEL_38:
    v40 = *(_DWORD *)(a3 + 12);
    LODWORD(v421) = a4[6];
    if ( v40 )
    {
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA7A0);
      *(__m128 *)s = si128;
      goto LABEL_40;
    }
    LODWORD(s[1]) = 0;
    s[0] = (void *)0x1AEB00001BECLL;
    v199 = a4[7] & 0x7F;
    if ( (unsigned int)(v199 - 35) > 3 )
    {
      v201 = 0;
      if ( (unsigned int)(v199 - 34) > 5 )
        goto LABEL_235;
    }
    else
    {
      v200 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 32LL))(a4);
      if ( (*(_QWORD *)(v200 + 80) & 0x40000LL) != 0 || ((*(_QWORD *)(v200 + 80) >> 16) & 8) != 0 )
      {
        if ( (a4[7] & 0x7Fu) - 34 > 5
          || (sub_B77D90((__int64)a4), v324 = *(_BYTE **)(v39 + 232), (v324[1] & 8) != 0)
          || (*v324 & 1) != 0
          || (v201 = sub_B81C90((__int64)a4)) == 0 )
        {
          v39 = *a1;
          goto LABEL_236;
        }
        goto LABEL_472;
      }
      v201 = (unsigned int)sub_B984E0(v200) != 0;
      if ( (a4[7] & 0x7Fu) - 34 > 5 )
        goto LABEL_234;
    }
    v202 = sub_B77D90((__int64)a4);
    v203 = *(_BYTE **)(v39 + 232);
    v201 |= v202;
    if ( (v203[1] & 8) != 0 || (*v203 & 1) != 0 || !(unsigned __int8)sub_B81C90((__int64)a4) )
    {
LABEL_234:
      v39 = *a1;
      if ( v201 )
      {
LABEL_236:
        HIDWORD(s[1]) = 0;
        goto LABEL_40;
      }
LABEL_235:
      LODWORD(s[1]) = 7402;
      goto LABEL_236;
    }
LABEL_472:
    HIDWORD(s[0]) = 5601;
    goto LABEL_234;
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA790);
  LODWORD(v421) = 0;
  *(__m128 *)s = si128;
LABEL_40:
  sub_158FC10(v39, (__int64)a4, v398, a5, (unsigned int *)s, (__int64)&v428, *(double *)si128.m128_u64);
LABEL_41:
  if ( (a2 & 2) != 0 && ((a4[7] & 0x7Fu) - 34 > 5 || !sub_B77D90((__int64)a4)) )
  {
    v131 = (__int64 *)*a1;
    v132 = *(_QWORD *)(*a1 + 272);
    v133 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v429 + 16LL))(v429);
    if ( sub_1021600(v132, v133) )
    {
      s[1] = v131;
      s[0] = off_2C44B08;
      v421 = 0;
      sub_9C7240((__int64)&v428, v131[30], (__int64)s);
    }
  }
  if ( (a2 & 4) != 0 )
  {
    v41 = v429[6];
    v42 = (unsigned __int64)(*(__int64 (**)(void))(*(_QWORD *)v429 + 16LL))() >> 32;
    v43 = (__int64 *)*a1;
    v414 = v42;
    v44 = *(_QWORD *)a4;
    v408[0] = &off_2BB3E28;
    v409 = v43;
    v411 = &v410;
    v410 = (void **)&v410;
    LOBYTE(v408[1]) = 0;
    v412 = 0;
    v413 = v41;
    v415 = 0;
    v416 = 0;
    v45 = (*(__int64 (__fastcall **)(_DWORD *))(v44 + 16))(a4);
    if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1D12u, v45, v355, v46, v47) != 1 )
      LOBYTE(v408[1]) = 1;
    v48 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
    if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1D13u, v48, v355, v49, v50) != 1 )
      v416 = 1;
    sub_9DC5C0((__int64)&v428, (__int64)v408, (__int64 *)(*a1 + 432), v51, v52, v53);
    sub_1581CA0((std::__detail::_List_node_base **)&v410, v409[34]);
    for ( i = v410; i != (void **)&v410; i = (void **)*i )
    {
      sub_168CDE0(s, v409 + 1, *((unsigned int *)i + 4), i + 3, 0);
      sub_15F7200(s);
      v55 = (unsigned int *)i[6];
      v56 = &v55[8 * *((unsigned int *)i + 14)];
      while ( v56 != v55 )
      {
        v57 = *v55;
        v58 = v55 + 2;
        v55 += 8;
        sub_168CDE0(s, v409 + 1, v57, v58, 0);
        sub_15F7200(s);
      }
    }
    v408[0] = &off_2BB3E28;
    sub_1581A00((void **)&v410);
    nullsub_387();
  }
  if ( (a2 & 8) != 0 )
  {
    v411 = nullptr;
    v136 = (void *)*a1;
    v427 = v408;
    v408[0] = &off_2BB3ED8;
    v408[1] = v136;
    v410 = (void **)&v409;
    v409 = (__int64 *)&v409;
    s[0] = nullptr;
    s[1] = nullptr;
    v421 = 0;
    v422 = nullptr;
    v423 = 0;
    ptr = nullptr;
    v425 = nullptr;
    v426 = 0;
    sub_9B3210((__int64 *)s, (__int64)&v428);
    v137 = v425;
    if ( v425 )
    {
      operator delete(*((_QWORD *)v425 + 5), 16LL * *((unsigned int *)v425 + 14), 8);
      operator delete(v137[2], 16LL * *((unsigned int *)v137 + 8), 8);
      operator delete(v137, 0x40u);
    }
    if ( v422 )
      operator delete(v422);
    v138 = (__int64 *)s[1];
    v139 = (__int64 *)s[0];
    if ( s[1] != s[0] )
    {
      do
      {
        while ( 1 )
        {
          v140 = *v139;
          if ( !*v139 )
            break;
          ++v139;
          operator delete(*(_QWORD *)(v140 + 40), 16LL * *(unsigned int *)(v140 + 56), 8);
          operator delete(*(_QWORD *)(v140 + 16), 16LL * *(unsigned int *)(v140 + 32), 8);
          operator delete((void *)v140, 0x40u);
          if ( v138 == v139 )
            goto LABEL_157;
        }
        ++v139;
      }
      while ( v138 != v139 );
LABEL_157:
      v139 = (__int64 *)s[0];
    }
    if ( v139 )
      operator delete(v139);
    v408[0] = &off_2BB3ED8;
    sub_1581A00((void **)&v409);
    nullsub_358();
  }
  v59 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1D3Du, v59, v355, v60, v61) != 1
    || (v62 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4),
        (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1CD1u, v62, v355, v63, v64) != 1)
    || (v299 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4),
        (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1BAEu, v299, v355, v300, v301) != 1)
    || (v302 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4),
        (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1D3Au, v302, v355, v303, v304) != 1)
    || (v305 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4),
        (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1D39u, v305, v355, v306, v307) != 1) )
  {
    v65 = sub_986B70((__int64)&v428);
    if ( v65 )
    {
      s[0] = &off_2BB3DA8;
      v421 = 0;
      v66 = (void *)*a1;
      v422 = nullptr;
      s[1] = v66;
      LODWORD(v423) = 0;
      ptr = &v426;
      v425 = nullptr;
      v408[0] = nullptr;
      v67 = (_QWORD *)sub_B8D340((__int64)a4);
      sub_9E6EB0(v67, (unsigned __int64)v65, &v428, (__int64)s, v408);
      if ( *(_BYTE *)(*a1 + 16) )
      {
        v68 = (unsigned int)v408[0];
        if ( LODWORD(v408[0]) )
        {
          v198 = HIDWORD(v408[0]);
          *((_DWORD *)a1 + 16) += LODWORD(v408[0]);
          *((_DWORD *)a1 + 18) += v198;
          ++*((_DWORD *)a1 + 15);
          if ( *((_DWORD *)a1 + 17) >= v68 )
            v68 = *((_DWORD *)a1 + 17);
          if ( *((_DWORD *)a1 + 19) >= v198 )
            v198 = *((_DWORD *)a1 + 19);
          *((_DWORD *)a1 + 17) = v68;
          *((_DWORD *)a1 + 19) = v198;
        }
      }
      s[0] = &off_2BB3DA8;
      sub_1593710((__int64)s, si128);
      if ( ptr != &v426 )
        free(ptr);
      operator delete(v421, 16LL * (unsigned int)v423, 8);
      nullsub_389();
    }
  }
  v69 = *(_QWORD *)(*a1 + 232);
  if ( v394 )
  {
    if ( (*(_BYTE *)(v69 + 1) & 8) == 0 )
    {
      if ( (*(_BYTE *)(v69 + 2) & 4) != 0 )
        goto LABEL_66;
      goto LABEL_69;
    }
    v134 = sub_986B70((__int64)&v428);
    if ( v134 )
    {
      v135 = sub_B8D340((__int64)a4);
      sub_9C2F70(v135, (__int64)v134, (__int64)&v428);
    }
    v69 = *(_QWORD *)(*a1 + 232);
  }
  if ( (*(_BYTE *)(v69 + 2) & 4) != 0 && (*(_BYTE *)(v69 + 1) & 8) == 0 )
  {
LABEL_66:
    v70 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
    if ( (sub_157D9C0((unsigned int *)&jpt_15999FC[-3], (__int64)jpt_15999FC, v355, v70, v71, v72) != (unsigned int *)jpt_15999FC
       || sub_157D9C0(&dword_261B93C[-3], (__int64)dword_261B93C, v355, v70, v73, v74) != dword_261B93C)
      && sub_986B70((__int64)&v428) )
    {
      v75 = a1[1];
      v76 = (void *)*a1;
      s[0] = off_2BB3DD8;
      v421 = v75;
      v77 = *(_QWORD *)a4;
      s[1] = v76;
      v78 = (*(__int64 (__fastcall **)(_DWORD *))(v77 + 16))(a4);
      v81 = sub_157D9C0(&dword_261B93C[-3], (__int64)dword_261B93C, v355, v78, v79, v80);
      sub_994310((__int64)&v428, (__int64)s, v81 != dword_261B93C);
    }
  }
LABEL_69:
  v82 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
  v85 = sub_FD3830(*(_QWORD *)(v355 + 32), 0x1D24u, v82, v355, v83, v84);
  v86 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
  v89 = sub_FD3830(*(_QWORD *)(v355 + 32), 0x1D25u, v86, v355, v87, v88);
  if ( v85 != 1 || v89 != 1 || (*(_BYTE *)(a3 + 9) & 2) != 0 )
    sub_1589560(*a1, &v428, v85 == 1, si128);
  v90 = *(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL);
  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 107LL) & 0x10) == 0 )
  {
LABEL_76:
    v94 = v90(a4);
    goto LABEL_77;
  }
  v91 = v90(a4);
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1968u, v91, v355, v92, v93) == 1 )
  {
    v90 = *(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL);
    goto LABEL_76;
  }
  v358 = (__int64 **)sub_986EA0((__int64)&v428);
  v391 = *a1;
  v365 = *(_QWORD *)(*a1 + 248);
  s[0] = &v421;
  s[1] = (void *)0x800000000LL;
  if ( !(*(_DWORD *)(a3 + 760) >> 1) )
    goto LABEL_221;
  if ( (*(_BYTE *)(a3 + 760) & 1) != 0 )
  {
    v143 = (__int64 *)(a3 + 768);
    v144 = 512;
  }
  else
  {
    v143 = *(__int64 **)(a3 + 768);
    v144 = (unsigned __int64)*(unsigned int *)(a3 + 776) << 6;
  }
  v145 = (__int64 *)((char *)v143 + v144);
  if ( v145 == v143 )
    goto LABEL_221;
  while ( 1 )
  {
    v146 = v143;
    if ( *v143 )
    {
      if ( *v143 != 4 )
        break;
    }
    if ( v143[1] )
      break;
    v143 += 8;
    if ( v145 == v143 )
      goto LABEL_221;
  }
  if ( v145 == v143 )
    goto LABEL_221;
  while ( 2 )
  {
    v147 = (__int64 *)v146[2];
    v148 = &v147[*((unsigned int *)v146 + 6)];
    if ( v147 == v148 )
      goto LABEL_176;
    v149 = *v147;
    v150 = (__int64 *)v146[2];
    if ( (*v147 & 2) == 0 )
    {
      do
      {
        if ( v148 == ++v150 )
          goto LABEL_176;
        v149 = *v150;
      }
      while ( (*v150 & 2) == 0 );
      if ( v147 != v150 )
      {
LABEL_261:
        v225 = s[0];
        v408[1] = v146;
        v408[0] = (void *)(v149 & 0xFFFFFFFFFFFFFFFCLL);
        v409 = v145;
        v226 = LODWORD(s[1]) + 1LL;
        v227 = (__m128i *)((char *)s[0] + 24 * LODWORD(s[1]));
        v228 = (const __m128i *)v408;
        if ( v226 > HIDWORD(s[1]) )
        {
          if ( s[0] > v408 || v227 <= (__m128i *)v408 )
          {
            sub_2237220(s, &v421, v226, 24);
            v227 = (__m128i *)((char *)s[0] + 24 * LODWORD(s[1]));
            v228 = (const __m128i *)v408;
          }
          else
          {
            sub_2237220(s, &v421, v226, 24);
            v228 = (const __m128i *)((char *)s[0] + (char *)v408 - v225);
            v227 = (__m128i *)((char *)s[0] + 24 * LODWORD(s[1]));
          }
        }
        *v227 = _mm_loadu_si128(v228);
        v227[1].m128i_i64[0] = v228[1].m128i_i64[0];
        ++LODWORD(s[1]);
        goto LABEL_176;
      }
    }
    v271 = v150 + 1;
    if ( v148 != v150 + 1 )
    {
      if ( (v150[1] & 2) != 0 )
        goto LABEL_261;
      while ( v148 != ++v271 )
      {
        if ( (*(_BYTE *)v271 & 2) != 0 )
          goto LABEL_261;
      }
    }
    v272 = v149 & 0xFFFFFFFFFFFFFFFCLL;
    while ( 2 )
    {
      v273 = *(_WORD *)v272 & 0x1FF;
      if ( v273 == 243 )
        goto LABEL_318;
      if ( v273 <= 0xF3u )
      {
        if ( v273 == 1 || v273 == 154 )
          goto LABEL_318;
        goto LABEL_386;
      }
      if ( v273 != 244 )
      {
        if ( v273 == 252 )
          goto LABEL_318;
LABEL_386:
        v272 = sub_EC5B90(v358, v272);
        if ( !v272 )
          goto LABEL_176;
        continue;
      }
      break;
    }
    v274 = *(_QWORD *)(v272 + 16);
    LOWORD(v408[0]) = 0;
    v408[1] = nullptr;
    LODWORD(v409) = 0;
    BYTE4(v409) &= ~1u;
    v275 = sub_C3F220(v274, (__int64)v408, v365, 0, 0, v142);
    v276 = 1;
    if ( v275 )
    {
      if ( (unsigned int)v411 <= 0x40 )
      {
        v277 = v410 == nullptr;
      }
      else
      {
        v374 = (int)v411;
        v277 = v374 == (unsigned int)sub_2206780(&v410);
      }
      v276 = !v277;
    }
    if ( (unsigned int)v409 > 1 )
    {
      v375 = v276;
      sub_A4F8E0((int *)&v409);
      v276 = v375;
    }
    if ( !v276 )
      goto LABEL_176;
LABEL_318:
    if ( (*v146 & 4) == 0 )
      goto LABEL_176;
    v278 = *v146 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v278 )
      v278 = v146[1];
    v279 = *(_BYTE *)(v278 + 28);
    v141 = v279 & 0x7F;
    if ( (v279 & 0x7Fu) - 40 > 6 )
      goto LABEL_334;
    v280 = *(_BYTE *)(v278 + 96) & 7;
    v142 = v280;
    if ( v280 )
    {
      if ( v280 == 5 )
      {
        if ( (_DWORD)v141 != 40 && (_DWORD)v141 != 46 )
          goto LABEL_334;
        v350 = *(_QWORD *)(v278 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v278 + 16) & 4) != 0 )
          v350 = *(_QWORD *)(v350 + 8);
        if ( !v350 )
          goto LABEL_334;
        v382 = v278;
        v351 = sub_B8EAA0(v350);
        v278 = v382;
        v352 = *(_BYTE *)(v351 + 8) & 0x7F;
        if ( v352 > 0x12u )
        {
          if ( ((v352 + 94) & 0x7Fu) > 5 )
            goto LABEL_334;
        }
        else if ( ((1LL << v352) & 0x40182) == 0 )
        {
          goto LABEL_334;
        }
        v280 = *(_BYTE *)(v382 + 96) & 7;
      }
      if ( v280 > 3u )
      {
        v279 = *(_BYTE *)(v278 + 28);
LABEL_455:
        if ( (v279 & 0x7F) != 0x2B )
          goto LABEL_176;
      }
LABEL_334:
      v149 = *v150;
      goto LABEL_261;
    }
    v281 = *(_QWORD *)&byte_8[*(_QWORD *)(v278 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v281 & 8) != 0 )
    {
      v141 = v281 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_DWORD *)((char *)&qword_18 + (v281 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v281 & 7)) >> 9 == 3 )
        goto LABEL_334;
    }
    if ( (((v279 & 0x7F) + 85) & 0x7D) == 0 )
    {
      if ( (*(_BYTE *)(v278 + 96) & 0x18) == 0 )
        goto LABEL_455;
      goto LABEL_334;
    }
    v282 = *(_QWORD *)(v278 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v278 + 16) & 4) != 0 )
      v282 = *(_QWORD *)(v282 + 8);
    v376 = v278;
    v283 = *(_BYTE *)(sub_B8EAA0(v282) + 8) & 0x7F;
    if ( !v283 || v283 == 24 || (*(_BYTE *)(v376 + 28) & 0x7F) == 0x2B )
      goto LABEL_334;
    v284 = *(_QWORD *)(v376 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v376 + 16) & 4) != 0 )
      v284 = *(_QWORD *)v284;
    if ( ((*(_BYTE *)(v284 + 8) + 70) & 0x7Fu) <= 3 || (*(_BYTE *)(v376 + 96) & 0x18) != 0 )
      goto LABEL_334;
LABEL_176:
    v151 = v146 + 8;
    if ( v146 + 8 != v145 )
    {
      while ( 1 )
      {
        v146 = v151;
        if ( *v151 )
        {
          if ( *v151 != 4 )
            break;
        }
        if ( v151[1] )
          break;
        v151 += 8;
        if ( v145 == v151 )
          goto LABEL_180;
      }
      if ( v145 != v151 )
        continue;
    }
    break;
  }
LABEL_180:
  v152 = (const __m128i *)s[0];
  if ( LODWORD(s[1]) )
  {
    v153 = 24LL * LODWORD(s[1]);
    v154 = (const __m128i *)((char *)s[0] + v153);
    v359 = (const __m128i *)((char *)s[0] + v153);
    v155 = *(_QWORD *)(v391 + 272);
    _BitScanReverse64(&v156, 0xAAAAAAAAAAAAAAABLL * (v153 >> 3));
    sub_157E9C0(
      (__int64)s[0],
      (unsigned __int64 *)((char *)s[0] + v153),
      2LL * (int)(63 - (v156 ^ 0x3F)),
      v155,
      v141,
      v142,
      si128);
    if ( (unsigned __int64)v153 <= 0x180 )
    {
      v157 = (unsigned __int64)v359;
      sub_157E830((__int64)v152, (__int64)v359, v155, (__m128i)si128);
    }
    else
    {
      v157 = (unsigned __int64)&v152[24];
      sub_157E830((__int64)v152, (__int64)v152[24].m128i_i64, v155, (__m128i)si128);
      v160 = v154;
      v161 = v152 + 24;
      if ( v160 != &v152[24] )
      {
        do
        {
          v162 = v161;
          *(__m128i *)v408 = _mm_loadu_si128(v161);
          v409 = (__int64 *)v161[1].m128i_i64[0];
          v163 = v161->m128i_i64[0];
          while ( 1 )
          {
            v165 = v162[-2].m128i_u64[1];
            v166 = (__m128i *)v162;
            v162 = (const __m128i *)((char *)v162 - 24);
            v167 = sub_EEB7E0(v165, v157, *(double *)si128.m128_u64);
            v168 = sub_EEB7E0(v163, v157, *(double *)si128.m128_u64);
            v157 = v168;
            if ( !sub_10246C0(v155, v168, v167) )
              break;
            v164 = _mm_loadu_si128((const __m128i *)&v162->m128i_u64[1]);
            v162[1].m128i_i64[1] = v162->m128i_i64[0];
            v162[2] = v164;
          }
          v169 = _mm_loadu_si128((const __m128i *)&v408[1]);
          v166->m128i_i64[0] = v163;
          v161 = (const __m128i *)((char *)v161 + 24);
          *(__m128i *)((char *)v166 + 8) = v169;
        }
        while ( v359 != v161 );
      }
    }
    v396 = 2;
    v170 = *(_BYTE *)(a3 + 8) & 7;
    if ( v170 != 1 )
    {
      v396 = 3;
      if ( v170 != 2 )
        v396 = (a4[7] & 0x7F) == 18;
    }
    v171 = (__int64 *)s[0];
    v393 = (unsigned __int64 *)((char *)s[0] + 24 * LODWORD(s[1]));
    if ( s[0] != v393 )
    {
      v366 = (unsigned __int64 *)s[0];
      v172 = v408;
      while ( 1 )
      {
        v173 = v366[1];
        v174 = *v366;
        v175 = *(_QWORD *)(v173 + 8);
        v176 = (unsigned int)((*(_BYTE *)v173 & 4) != 0) + 6503;
        v177 = *(_BYTE *)(v175 + 28) & 0x7F;
        v178 = (unsigned int)v177 - 40;
        if ( (unsigned int)v178 <= 6 )
        {
          v179 = 0;
          if ( v177 != 75 )
            goto LABEL_193;
        }
        else
        {
          if ( v177 != 75 )
          {
            v179 = (v177 != 18) + 2LL;
            goto LABEL_193;
          }
          v179 = 1;
        }
        if ( (*(_BYTE *)(v175 + 29) & 1) != 0 )
        {
          v361 = ((*(_BYTE *)v173 & 4) != 0) + 6503;
          v195 = sub_B8C3D0(*(_QWORD *)(v173 + 8), v157, v178, v176, v158, v159);
          LODWORD(v176) = v361;
          v196 = (unsigned __int64 *)*v195;
          v157 = *v195 + 8LL * *((unsigned int *)v195 + 2);
          if ( *v195 >= v157 )
          {
            if ( v196 != (unsigned __int64 *)v157 )
            {
              if ( *(_WORD *)(*(_QWORD *)v157 + 36LL) == 234 )
                goto LABEL_217;
              v298 = (unsigned __int64 *)(v157 + 8);
              while ( 1 )
              {
                v157 = (unsigned __int64)v298;
                if ( v196 == v298 )
                  break;
                v157 = *v298++;
                if ( *(_WORD *)(v157 + 36) == 234 )
                  goto LABEL_217;
              }
            }
          }
          else
          {
            v197 = *v195;
            while ( *(_WORD *)(*(_QWORD *)v197 + 36LL) != 234 )
            {
              v197 += 8LL;
              if ( v157 == v197 )
                goto LABEL_193;
            }
            if ( v157 != v197 )
              goto LABEL_217;
          }
        }
LABEL_193:
        v370 = v176;
        v360 = v391 + 8;
        v180 = sub_EEB7E0(v174, v157, *(double *)si128.m128_u64);
        v157 = v391 + 8;
        sub_168B9F0(v172, v391 + 8, v180, v370, 0);
        if ( v417 )
        {
          v157 = v179;
          sub_157E4A0((unsigned __int8 **)v172 + 4, v179);
        }
        else
        {
          if ( !v419 )
            goto LABEL_195;
          v263 = sub_168B9E0(v172);
          v267 = v409;
          if ( v409 )
          {
            v373 = v263;
            v267 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v409 + 32))(v409);
            v263 = v373;
          }
          v404 = (unsigned __int64)v267;
          v268 = sub_1587BC0(v263, (__int64 *)&v404, v263, v264, v265, v266);
          v157 = v179;
          sub_157E4A0((unsigned __int8 **)(*v268 + 32LL * v418 + 8), v179);
        }
        if ( v417 )
        {
          v157 = v175;
          sub_157E260((unsigned __int8 **)v172 + 4, v175);
        }
        else
        {
          if ( !v419 )
          {
LABEL_195:
            v181 = sub_EEC8C0(v174, v157, *(double *)si128.m128_u64);
            v182 = v181;
            v183 = HIDWORD(v181);
LABEL_196:
            if ( v419 )
            {
              v238 = sub_168B9E0(v172);
              v242 = v409;
              if ( v409 )
              {
                v372 = v238;
                v242 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v409 + 32))(v409);
                v238 = v372;
              }
              v403 = v242;
              v243 = sub_1587BC0(v238, (__int64 *)&v403, v238, v239, v240, v241);
              v244 = *v243 + 32LL * v418;
              v245 = *(_QWORD *)(v244 + 8);
              if ( v245 )
              {
                v157 = *(unsigned int *)(v245 + 424);
                v246 = *(unsigned int *)(v245 + 428);
                v247 = v157 + 1;
              }
              else
              {
                v316 = *(_QWORD *)(v244 + 16);
                v317 = *(_DWORD *)(v316 + 14976);
                if ( v317 )
                {
                  v325 = (unsigned int)(v317 - 1);
                  *(_DWORD *)(v316 + 14976) = v325;
                  v245 = *(_QWORD *)(v316 + 8 * v325 + 14848);
                  v326 = *(unsigned int *)(v245 + 536);
                  *(_BYTE *)v245 = 0;
                  v327 = *(_QWORD *)(v245 + 528);
                  *(_DWORD *)(v245 + 424) = 0;
                  v328 = v327 + (v326 << 6);
                  if ( v327 != v328 )
                  {
                    v381 = v183;
                    v329 = v328;
                    v183 = v245;
                    v389 = v182;
                    v330 = v244;
                    v400 = v172;
                    v331 = v327;
                    do
                    {
                      while ( 1 )
                      {
                        v329 -= 64;
                        v332 = *(void **)(v329 + 24);
                        if ( v332 == (void *)(v329 + 40) )
                          break;
                        operator delete(v332);
                        if ( v331 == v329 )
                          goto LABEL_420;
                      }
                    }
                    while ( v331 != v329 );
LABEL_420:
                    v244 = v330;
                    v245 = v183;
                    v182 = v389;
                    LODWORD(v183) = v381;
                    v172 = v400;
                  }
                  v157 = *(unsigned int *)(v245 + 424);
                  v246 = *(unsigned int *)(v245 + 428);
                  *(_DWORD *)(v245 + 536) = 0;
                  v247 = v157 + 1;
                }
                else
                {
                  v378 = v244;
                  v245 = operator new(0x3A0u);
                  v246 = 8;
                  *(_BYTE *)v245 = 0;
                  *(_QWORD *)(v245 + 96) = v245 + 112;
                  *(_QWORD *)(v245 + 128) = v245 + 144;
                  *(_QWORD *)(v245 + 160) = v245 + 176;
                  *(_QWORD *)(v245 + 192) = v245 + 208;
                  *(_QWORD *)(v245 + 224) = v245 + 240;
                  *(_QWORD *)(v245 + 256) = v245 + 272;
                  *(_QWORD *)(v245 + 288) = v245 + 304;
                  *(_QWORD *)(v245 + 320) = v245 + 336;
                  *(_QWORD *)(v245 + 352) = v245 + 368;
                  *(_QWORD *)(v245 + 384) = v245 + 400;
                  *(_QWORD *)(v245 + 416) = v245 + 432;
                  *(_QWORD *)(v245 + 104) = 0;
                  *(_BYTE *)(v245 + 112) = 0;
                  *(_QWORD *)(v245 + 136) = 0;
                  *(_BYTE *)(v245 + 144) = 0;
                  *(_QWORD *)(v245 + 168) = 0;
                  *(_BYTE *)(v245 + 176) = 0;
                  *(_QWORD *)(v245 + 200) = 0;
                  *(_BYTE *)(v245 + 208) = 0;
                  *(_QWORD *)(v245 + 232) = 0;
                  *(_BYTE *)(v245 + 240) = 0;
                  *(_QWORD *)(v245 + 264) = 0;
                  *(_BYTE *)(v245 + 272) = 0;
                  *(_QWORD *)(v245 + 296) = 0;
                  *(_BYTE *)(v245 + 304) = 0;
                  *(_QWORD *)(v245 + 328) = 0;
                  *(_BYTE *)(v245 + 336) = 0;
                  *(_QWORD *)(v245 + 360) = 0;
                  *(_BYTE *)(v245 + 368) = 0;
                  *(_QWORD *)(v245 + 392) = 0;
                  *(_BYTE *)(v245 + 400) = 0;
                  *(_QWORD *)(v245 + 424) = 0x800000000LL;
                  v244 = v378;
                  *(_QWORD *)(v245 + 528) = v245 + 544;
                  v247 = 1;
                  *(_QWORD *)(v245 + 536) = 0x600000000LL;
                  v157 = 0;
                }
                *(_QWORD *)(v244 + 8) = v245;
              }
              v404 = __PAIR64__(v183, v182);
              LOBYTE(v405) = 1;
              if ( v247 > v246 )
              {
                v380 = v245;
                sub_2237220(v245 + 416, v245 + 432, v247, 12);
                v245 = v380;
                v157 = *(unsigned int *)(v380 + 424);
              }
              v248 = *(_QWORD *)(v245 + 416) + 12 * v157;
              *(_QWORD *)v248 = v404;
              *(_DWORD *)(v248 + 8) = v405;
              ++*(_DWORD *)(v245 + 424);
            }
            goto LABEL_197;
          }
          v260 = sub_168B9E0(v172);
          v261 = v409;
          if ( v409 )
            v261 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v409 + 32))(v409);
          v404 = (unsigned __int64)v261;
          v262 = sub_1587BC0(v260, (__int64 *)&v404, v256, v257, v258, v259);
          v157 = v175;
          sub_157E260((unsigned __int8 **)(*v262 + 32LL * v418 + 8), v175);
        }
        if ( v417 )
        {
          v157 = v396;
          sub_157E4A0((unsigned __int8 **)v172 + 4, v396);
          v229 = v417;
        }
        else
        {
          if ( !v419 )
            goto LABEL_195;
          v253 = sub_168B9E0(v172);
          v254 = v409;
          if ( v409 )
            v254 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v409 + 32))(v409);
          v404 = (unsigned __int64)v254;
          v255 = sub_1587BC0(v253, (__int64 *)&v404, v249, v250, v251, v252);
          v157 = v396;
          sub_157E4A0((unsigned __int8 **)(*v255 + 32LL * v418 + 8), v396);
          v229 = v417;
        }
        v371 = v229;
        v230 = sub_EEC8C0(v174, v157, *(double *)si128.m128_u64);
        v182 = v230;
        v231 = HIDWORD(v230);
        LODWORD(v183) = HIDWORD(v230);
        if ( !v371 )
          goto LABEL_196;
        v232 = v411;
        if ( v411 )
        {
          v233 = *((unsigned int *)v411 + 106);
          v157 = *((unsigned int *)v411 + 107);
          v234 = v233 + 1;
        }
        else
        {
          v313 = v412;
          v314 = *(_DWORD *)(v412 + 14976);
          if ( v314 )
          {
            v318 = (unsigned int)(v314 - 1);
            *(_DWORD *)(v412 + 14976) = v318;
            v232 = *(void ****)(v313 + 8 * v318 + 14848);
            v319 = *((unsigned int *)v232 + 134);
            *(_BYTE *)v232 = 0;
            v320 = v232[66];
            *((_DWORD *)v232 + 106) = 0;
            v321 = &v320[8 * v319];
            if ( v320 == v321 )
            {
              v234 = 1;
              v233 = 0;
            }
            else
            {
              v322 = v321;
              do
              {
                while ( 1 )
                {
                  v322 -= 8;
                  v323 = (void **)v322[3];
                  if ( v323 == v322 + 5 )
                    break;
                  v379 = v231;
                  operator delete(v323);
                  v231 = v379;
                  if ( v320 == v322 )
                    goto LABEL_408;
                }
              }
              while ( v320 != v322 );
LABEL_408:
              v233 = *((unsigned int *)v232 + 106);
              v234 = v233 + 1;
            }
            *((_DWORD *)v232 + 134) = 0;
            v157 = *((unsigned int *)v232 + 107);
          }
          else
          {
            v377 = v231;
            v315 = operator new(0x3A0u);
            v157 = 8;
            v234 = 1;
            v232 = (void ***)v315;
            *(_BYTE *)v315 = 0;
            *(_QWORD *)(v315 + 96) = v315 + 112;
            *(_QWORD *)(v315 + 128) = v315 + 144;
            *(_QWORD *)(v315 + 160) = v315 + 176;
            *(_QWORD *)(v315 + 192) = v315 + 208;
            *(_QWORD *)(v315 + 224) = v315 + 240;
            *(_QWORD *)(v315 + 256) = v315 + 272;
            *(_QWORD *)(v315 + 288) = v315 + 304;
            *(_QWORD *)(v315 + 320) = v315 + 336;
            *(_QWORD *)(v315 + 352) = v315 + 368;
            *(_QWORD *)(v315 + 384) = v315 + 400;
            *(_QWORD *)(v315 + 416) = v315 + 432;
            *(_QWORD *)(v315 + 104) = 0;
            *(_BYTE *)(v315 + 112) = 0;
            *(_QWORD *)(v315 + 136) = 0;
            *(_BYTE *)(v315 + 144) = 0;
            *(_QWORD *)(v315 + 168) = 0;
            *(_BYTE *)(v315 + 176) = 0;
            *(_QWORD *)(v315 + 200) = 0;
            *(_BYTE *)(v315 + 208) = 0;
            *(_QWORD *)(v315 + 232) = 0;
            *(_BYTE *)(v315 + 240) = 0;
            *(_QWORD *)(v315 + 264) = 0;
            *(_BYTE *)(v315 + 272) = 0;
            *(_QWORD *)(v315 + 296) = 0;
            *(_BYTE *)(v315 + 304) = 0;
            *(_QWORD *)(v315 + 328) = 0;
            *(_BYTE *)(v315 + 336) = 0;
            *(_QWORD *)(v315 + 360) = 0;
            *(_BYTE *)(v315 + 368) = 0;
            *(_QWORD *)(v315 + 392) = 0;
            *(_BYTE *)(v315 + 400) = 0;
            *(_QWORD *)(v315 + 424) = 0x800000000LL;
            LODWORD(v231) = v377;
            *(_QWORD *)(v315 + 528) = v315 + 544;
            *(_QWORD *)(v315 + 536) = 0x600000000LL;
            v233 = 0;
          }
          v411 = v232;
        }
        v404 = __PAIR64__(v231, v182);
        LOBYTE(v405) = 1;
        if ( v234 > v157 )
        {
          v157 = (unsigned __int64)(v232 + 54);
          sub_2237220(v232 + 52, v232 + 54, v234, 12);
          v233 = *((unsigned int *)v232 + 106);
        }
        v235 = (__int64)v232[52] + 12 * v233;
        *(_QWORD *)v235 = v404;
        *(_DWORD *)(v235 + 8) = v405;
        ++*((_DWORD *)v232 + 106);
LABEL_197:
        sub_15F7200(v172);
        v159 = *(_QWORD *)(v173 + 16);
        v184 = (_QWORD *)(v159 + 8LL * *(unsigned int *)(v173 + 24));
        if ( (_QWORD *)v159 != v184 )
        {
          v185 = (_QWORD *)v159;
          while ( 2 )
          {
            v186 = *v185 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v174 == v186 )
              goto LABEL_201;
            v187 = sub_EEB7E0(v186, v157, *(double *)si128.m128_u64);
            v157 = v391 + 8;
            sub_168B9F0(v172, v360, v187, 5786, 0);
            v188 = sub_EEC8C0(*v185 & 0xFFFFFFFFFFFFFFFCLL, v360, *(double *)si128.m128_u64);
            v189 = HIDWORD(v188);
            if ( v417 )
            {
              v190 = (unsigned __int64)v411;
              if ( v411 )
              {
                v157 = *((unsigned int *)v411 + 106);
                v191 = *((unsigned int *)v411 + 107);
                v192 = v157 + 1;
              }
              else
              {
                v236 = v412;
                v237 = *(_DWORD *)(v412 + 14976);
                if ( v237 )
                {
                  v285 = (unsigned int)(v237 - 1);
                  *(_DWORD *)(v412 + 14976) = v285;
                  v190 = *(_QWORD *)(v236 + 8 * v285 + 14848);
                  v286 = *(unsigned int *)(v190 + 536);
                  *(_BYTE *)v190 = 0;
                  v287 = *(_QWORD *)(v190 + 528);
                  *(_DWORD *)(v190 + 424) = 0;
                  v288 = v287 + (v286 << 6);
                  if ( v287 == v288 )
                  {
                    v192 = 1;
                    v157 = 0;
                  }
                  else
                  {
                    v386 = v188;
                    v188 = v190;
                    v401 = v172;
                    v289 = v288;
                    do
                    {
                      while ( 1 )
                      {
                        v289 -= 64;
                        v290 = *(void **)(v289 + 24);
                        if ( v290 == (void *)(v289 + 40) )
                          break;
                        operator delete(v290);
                        if ( v287 == v289 )
                          goto LABEL_340;
                      }
                    }
                    while ( v287 != v289 );
LABEL_340:
                    v190 = v188;
                    LODWORD(v188) = v386;
                    v157 = *(unsigned int *)(v190 + 424);
                    v172 = v401;
                    v192 = v157 + 1;
                  }
                  *(_DWORD *)(v190 + 536) = 0;
                  v191 = *(unsigned int *)(v190 + 428);
                }
                else
                {
                  v190 = operator new(0x3A0u);
                  v191 = 8;
                  v157 = 0;
                  *(_BYTE *)v190 = 0;
                  *(_QWORD *)(v190 + 96) = v190 + 112;
                  *(_QWORD *)(v190 + 128) = v190 + 144;
                  *(_QWORD *)(v190 + 160) = v190 + 176;
                  *(_QWORD *)(v190 + 192) = v190 + 208;
                  *(_QWORD *)(v190 + 224) = v190 + 240;
                  *(_QWORD *)(v190 + 256) = v190 + 272;
                  *(_QWORD *)(v190 + 288) = v190 + 304;
                  *(_QWORD *)(v190 + 320) = v190 + 336;
                  *(_QWORD *)(v190 + 352) = v190 + 368;
                  *(_QWORD *)(v190 + 384) = v190 + 400;
                  *(_QWORD *)(v190 + 416) = v190 + 432;
                  *(_QWORD *)(v190 + 104) = 0;
                  *(_BYTE *)(v190 + 112) = 0;
                  *(_QWORD *)(v190 + 136) = 0;
                  *(_BYTE *)(v190 + 144) = 0;
                  *(_QWORD *)(v190 + 168) = 0;
                  *(_BYTE *)(v190 + 176) = 0;
                  *(_QWORD *)(v190 + 200) = 0;
                  *(_BYTE *)(v190 + 208) = 0;
                  *(_QWORD *)(v190 + 232) = 0;
                  *(_BYTE *)(v190 + 240) = 0;
                  *(_QWORD *)(v190 + 264) = 0;
                  *(_BYTE *)(v190 + 272) = 0;
                  *(_QWORD *)(v190 + 296) = 0;
                  *(_BYTE *)(v190 + 304) = 0;
                  *(_QWORD *)(v190 + 328) = 0;
                  *(_BYTE *)(v190 + 336) = 0;
                  *(_QWORD *)(v190 + 360) = 0;
                  *(_BYTE *)(v190 + 368) = 0;
                  *(_QWORD *)(v190 + 392) = 0;
                  *(_BYTE *)(v190 + 400) = 0;
                  *(_QWORD *)(v190 + 424) = 0x800000000LL;
                  *(_QWORD *)(v190 + 536) = 0x600000000LL;
                  *(_QWORD *)(v190 + 528) = v190 + 544;
                  v192 = 1;
                }
                v411 = (void ***)v190;
              }
              v404 = __PAIR64__(v189, v188);
              LOBYTE(v405) = 1;
              if ( v192 > v191 )
              {
                v385 = v190;
                sub_2237220(v190 + 416, v190 + 432, v192, 12);
                v190 = v385;
                v157 = *(unsigned int *)(v385 + 424);
              }
              v193 = 3 * v157;
              goto LABEL_209;
            }
            if ( v419 )
            {
              v213 = sub_168B9E0(v172);
              v217 = v409;
              if ( v409 )
              {
                v384 = v213;
                v217 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(*v409 + 32))(v409);
                v213 = v384;
              }
              v403 = v217;
              v218 = sub_1587BC0(v213, (__int64 *)&v403, v213, v214, v215, v216);
              v157 = *v218 + 32LL * v418;
              v190 = *(_QWORD *)(v157 + 8);
              if ( v190 )
              {
                v219 = *(unsigned int *)(v190 + 424);
                v220 = *(unsigned int *)(v190 + 428);
                v221 = v219 + 1;
              }
              else
              {
                v269 = *(_QWORD *)(v157 + 16);
                v270 = *(_DWORD *)(v269 + 14976);
                if ( v270 )
                {
                  v291 = (unsigned int)(v270 - 1);
                  *(_DWORD *)(v269 + 14976) = v291;
                  v190 = *(_QWORD *)(v269 + 8 * v291 + 14848);
                  v292 = *(unsigned int *)(v190 + 536);
                  *(_BYTE *)v190 = 0;
                  v293 = *(_QWORD *)(v190 + 528);
                  *(_DWORD *)(v190 + 424) = 0;
                  v294 = v293 + (v292 << 6);
                  if ( v293 == v294 )
                  {
                    v221 = 1;
                    v219 = 0;
                  }
                  else
                  {
                    v189 = v174;
                    v295 = v293;
                    v402 = v172;
                    v296 = v294;
                    do
                    {
                      while ( 1 )
                      {
                        v296 -= 64;
                        v297 = *(void **)(v296 + 24);
                        if ( v297 == (void *)(v296 + 40) )
                          break;
                        v388 = v190;
                        operator delete(v297);
                        v190 = v388;
                        if ( v295 == v296 )
                          goto LABEL_348;
                      }
                    }
                    while ( v295 != v296 );
LABEL_348:
                    v219 = *(unsigned int *)(v190 + 424);
                    v174 = v189;
                    LODWORD(v189) = HIDWORD(v188);
                    v172 = v402;
                    v221 = v219 + 1;
                  }
                  *(_DWORD *)(v190 + 536) = 0;
                  v220 = *(unsigned int *)(v190 + 428);
                }
                else
                {
                  v190 = operator new(0x3A0u);
                  v220 = 8;
                  v219 = 0;
                  *(_BYTE *)v190 = 0;
                  *(_QWORD *)(v190 + 96) = v190 + 112;
                  *(_QWORD *)(v190 + 128) = v190 + 144;
                  *(_QWORD *)(v190 + 160) = v190 + 176;
                  *(_QWORD *)(v190 + 192) = v190 + 208;
                  *(_QWORD *)(v190 + 224) = v190 + 240;
                  *(_QWORD *)(v190 + 256) = v190 + 272;
                  *(_QWORD *)(v190 + 288) = v190 + 304;
                  *(_QWORD *)(v190 + 320) = v190 + 336;
                  *(_QWORD *)(v190 + 352) = v190 + 368;
                  *(_QWORD *)(v190 + 384) = v190 + 400;
                  *(_QWORD *)(v190 + 416) = v190 + 432;
                  *(_QWORD *)(v190 + 104) = 0;
                  *(_BYTE *)(v190 + 112) = 0;
                  *(_QWORD *)(v190 + 136) = 0;
                  *(_BYTE *)(v190 + 144) = 0;
                  *(_QWORD *)(v190 + 168) = 0;
                  *(_BYTE *)(v190 + 176) = 0;
                  *(_QWORD *)(v190 + 200) = 0;
                  *(_BYTE *)(v190 + 208) = 0;
                  *(_QWORD *)(v190 + 232) = 0;
                  *(_BYTE *)(v190 + 240) = 0;
                  *(_QWORD *)(v190 + 264) = 0;
                  *(_BYTE *)(v190 + 272) = 0;
                  *(_QWORD *)(v190 + 296) = 0;
                  *(_BYTE *)(v190 + 304) = 0;
                  *(_QWORD *)(v190 + 328) = 0;
                  *(_BYTE *)(v190 + 336) = 0;
                  *(_QWORD *)(v190 + 360) = 0;
                  *(_BYTE *)(v190 + 368) = 0;
                  *(_QWORD *)(v190 + 392) = 0;
                  *(_BYTE *)(v190 + 400) = 0;
                  *(_QWORD *)(v190 + 424) = 0x800000000LL;
                  *(_QWORD *)(v190 + 536) = 0x600000000LL;
                  *(_QWORD *)(v190 + 528) = v190 + 544;
                  v221 = 1;
                }
                *(_QWORD *)(v157 + 8) = v190;
              }
              v404 = __PAIR64__(v189, v188);
              LOBYTE(v405) = 1;
              if ( v221 > v220 )
              {
                v387 = v190;
                v157 = v190 + 432;
                sub_2237220(v190 + 416, v190 + 432, v221, 12);
                v190 = v387;
                v219 = *(unsigned int *)(v387 + 424);
              }
              v193 = 3 * v219;
LABEL_209:
              v194 = *(_QWORD *)(v190 + 416) + 4 * v193;
              *(_QWORD *)v194 = v404;
              *(_DWORD *)(v194 + 8) = v405;
              ++*(_DWORD *)(v190 + 424);
            }
            sub_15F7200(v172);
LABEL_201:
            if ( v184 == ++v185 )
              break;
            continue;
          }
        }
LABEL_217:
        v366 += 3;
        if ( v393 == v366 )
        {
          v171 = (__int64 *)s[0];
          break;
        }
      }
    }
    if ( v171 != &v421 )
      free(v171);
  }
  else if ( s[0] != &v421 )
  {
    free(s[0]);
  }
LABEL_221:
  v94 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
LABEL_77:
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1B82u, v94, v355, v95, v96) == 1 )
    goto LABEL_129;
  v97 = *(_QWORD *)a4;
  if ( (a4[7] & 0x7Fu) - 34 > 5 )
    goto LABEL_130;
  v399 = *a1;
  v98 = (*(__int64 (__fastcall **)(_DWORD *))(v97 + 32))(a4);
  v364 = v98;
  if ( (unsigned int)sub_B778D0(v98) && (unsigned int)sub_B778D0(v98) != 2 )
  {
    v97 = *(_QWORD *)a4;
    goto LABEL_130;
  }
  v99 = (__int64 **)sub_986B70((__int64)&v428);
  if ( !v99 || v99[1][7] == v99[1][8] )
    goto LABEL_129;
  v100 = (void **)&v409;
  s[1] = &word_10;
  s[0] = &v422;
  LODWORD(v421) = 0;
  BYTE4(v421) = 1;
  v408[0] = &v409;
  v408[1] = (void *)0x1000000000LL;
  v101 = v99[1];
  v102 = *((unsigned int *)v101 + 12);
  v392 = 0;
  v369 = *((_DWORD *)v101 + 12);
  v409 = *v99;
  v103 = 1;
  while ( 1 )
  {
    v104 = v103--;
    v105 = v100[v104 - 1];
    LODWORD(v408[1]) = v103;
    v106 = *((__int64 **)v105 + 10);
    v357 = *((__int64 **)v105 + 11);
    if ( v106 != v357 )
      break;
LABEL_121:
    if ( !v103 )
    {
      v397 = v392;
      goto LABEL_123;
    }
  }
  while ( 2 )
  {
    v107 = *v106;
    if ( !*v106 )
      goto LABEL_119;
    v108 = BYTE4(v421);
    if ( BYTE4(v421) )
    {
      v109 = (char *)s[0];
      v102 = 8LL * HIDWORD(s[1]);
      v110 = (__int64 *)((char *)s[0] + v102);
      if ( s[0] != (char *)s[0] + v102 )
      {
        v111 = (char *)s[0];
        if ( v107 == *(_QWORD *)s[0] )
        {
LABEL_266:
          v108 = 0;
LABEL_94:
          v112 = &v109[8 * HIDWORD(s[1])];
          goto LABEL_95;
        }
        while ( 1 )
        {
          v111 += 8;
          if ( v110 == (__int64 *)v111 )
            break;
          if ( v107 == *(_QWORD *)v111 )
            goto LABEL_266;
        }
      }
      if ( HIDWORD(s[1]) < LODWORD(s[1]) )
      {
        ++HIDWORD(s[1]);
        *v110 = v107;
        v109 = (char *)s[0];
        v111 = (char *)s[0] + v102;
        goto LABEL_94;
      }
    }
    v102 = *v106;
    v111 = (char *)sub_2236760(s, *v106);
    v109 = (char *)s[0];
    v108 = v222;
    if ( BYTE4(v421) )
      goto LABEL_94;
    v112 = (char *)s[0] + 8 * LODWORD(s[1]);
LABEL_95:
    if ( v112 != v111 && (*(_QWORD *)v111 == -2 || *(_QWORD *)v111 == -1) )
    {
      do
        v111 += 8;
      while ( v112 != v111 && *(_QWORD *)v111 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( !v108 )
    {
LABEL_119:
      v106 += 2;
      if ( v357 == v106 )
      {
        v103 = (unsigned int)v408[1];
        v100 = (void **)v408[0];
        goto LABEL_121;
      }
      continue;
    }
    break;
  }
  if ( v369 != *(_DWORD *)(v107 + 48) )
  {
    v113 = *(_QWORD *)(v107 + 8);
    v114 = *(_QWORD *)v107;
    if ( v113 == *(_QWORD *)v107 )
    {
LABEL_257:
      v223 = LODWORD(v408[1]);
      v224 = LODWORD(v408[1]) + 1LL;
      if ( v224 > HIDWORD(v408[1]) )
      {
        v102 = (__int64)&v409;
        sub_2237220(v408, &v409, v224, 8);
        v223 = LODWORD(v408[1]);
      }
      *((_QWORD *)v408[0] + v223) = v107;
      ++LODWORD(v408[1]);
    }
    else
    {
      while ( 1 )
      {
        if ( (*(_DWORD *)(v113 - 16) & 3 | (4 * (*(_QWORD *)(v113 - 8) & 3))) == 6 )
        {
          v115 = *(_QWORD *)(v113 - 16) & 0xFFFFFFFFFFFFFFFCLL;
          if ( ((*(_WORD *)v115 + 423) & 0x1FFu) <= 4 )
          {
            if ( sub_BFBC70(*(_QWORD *)(v115 + 32)) )
            {
              v116 = sub_BFBC70(*(_QWORD *)(v115 + 32));
              if ( v364 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v116 + 32LL))(v116) )
              {
                v117 = sub_BFBAE0(*(_QWORD *)(v115 + 32));
                if ( (*(_WORD *)v117 & 0x1FF) != 0x47 )
                  goto LABEL_113;
                if ( (*(_QWORD *)v117 & 0x80000LL) == 0 )
                  goto LABEL_113;
                if ( !*(_QWORD *)(v117 + 32) )
                  goto LABEL_113;
                v395 = *(_QWORD *)(v117 + 32);
                if ( (unsigned int)sub_E90000(v395) != 3 )
                  goto LABEL_113;
                if ( ((*(__int64 *)(v395 + 8) >> 1) & 3) != 2 )
                  BUG();
                if ( *(_BYTE *)(*(_QWORD *)(v395 + 16) + 16LL) != 49 )
                {
LABEL_113:
                  if ( (*(_WORD *)v115 & 0x1FF) != 0x5C )
                    break;
                  if ( (*(_WORD *)sub_C94680(v115) & 0x1FF) == 0x62 )
                    break;
                  v118 = sub_C946E0(v115);
                  v119 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v118 + 32LL))(v118);
                  if ( (*(_QWORD *)(v119 + 80) & 0x40000LL) == 0
                    && ((*(_QWORD *)(v119 + 80) >> 16) & 8) == 0
                    && !(unsigned int)sub_B984E0(v119) )
                  {
                    break;
                  }
                }
              }
            }
          }
        }
        v113 -= 16;
        if ( v114 == v113 )
          goto LABEL_257;
      }
      v392 = v108;
    }
    goto LABEL_119;
  }
  v100 = (void **)v408[0];
LABEL_123:
  if ( v100 != (void **)&v409 )
    free(v100);
  if ( !BYTE4(v421) )
    free(s[0]);
  if ( v397 )
  {
    v120 = sub_EEB7E0(v398, v102, *(double *)si128.m128_u64);
    sub_168B9F0(s, v399 + 8, v120, 7042, 0);
    sub_15F7200(s);
  }
LABEL_129:
  v97 = *(_QWORD *)a4;
LABEL_130:
  v121 = (*(__int64 (__fastcall **)(_DWORD *))(v97 + 16))(a4);
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v355 + 32), 0x1D14u, v121, v355, v122, v123) != 1
    && (a4[7] & 0x7Fu) - 34 <= 5
    && (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) != 0
    && !*(_DWORD *)(a3 + 12) )
  {
    v204 = *(_QWORD *)(*((_QWORD *)a4 + 6) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v204 + 16) != 26 )
      v204 = sub_F63050(v204, 7444, v124, v125);
    if ( (unsigned int)sub_F63060(v204) )
    {
      if ( (*((_BYTE *)a4 + 29) & 1) == 0 )
        goto LABEL_134;
      v209 = sub_B8C3D0((__int64)a4, 7444, v205, v206, v207, v208);
      v210 = (__int64 *)*v209;
      v211 = *v209 + 8LL * *((unsigned int *)v209 + 2);
      if ( *v209 >= v211 )
      {
        if ( v210 == (__int64 *)v211 )
          goto LABEL_134;
        if ( *(_WORD *)(*(_QWORD *)v211 + 36LL) != 286 )
        {
          v348 = (__int64 *)(v211 + 8);
          while ( v348 != v210 )
          {
            v349 = *v348++;
            if ( *(_WORD *)(v349 + 36) == 286 )
              goto LABEL_427;
          }
          goto LABEL_134;
        }
      }
      else
      {
        v212 = *v209;
        while ( *(_WORD *)(*(_QWORD *)v212 + 36LL) != 286 )
        {
          v212 += 8LL;
          if ( v211 == v212 )
            goto LABEL_134;
        }
        if ( v211 == v212 )
          goto LABEL_134;
      }
    }
LABEL_427:
    v362 = (void *)*a1;
    v403 = (__int64 *)a4;
    v333 = (__int64 *)sub_986B70((__int64)&v428);
    v334 = v333;
    v404 = (unsigned __int64)v333;
    if ( v333 && *(_QWORD *)(v333[1] + 56) != *(_QWORD *)(v333[1] + 64) )
    {
      v408[0] = v362;
      v408[1] = &v404;
      v409 = (__int64 *)&v403;
      v335 = *((_DWORD *)v333 + 6);
      s[0] = &v421;
      s[1] = (void *)0x600000000LL;
      v336 = (unsigned int)(v335 + 63) >> 6;
      if ( v336 > 6 )
      {
        sub_2237220(s, &v421, v336, 8);
        memset(s[0], 0, 8LL * v336);
        LODWORD(s[1]) = (unsigned int)(v335 + 63) >> 6;
      }
      else
      {
        if ( v336 )
        {
          v337 = 0;
          do
          {
            v338 = v337;
            v337 += 8;
            *(__int64 *)((char *)&v421 + v338) = 0;
          }
          while ( v337 < 8 * v336 );
        }
        LODWORD(s[1]) = (unsigned int)(v335 + 63) >> 6;
      }
      LODWORD(v427) = v335;
      sub_9C7230(*v334, (__int64 *)s);
      v339 = (__int64 *)s[0];
      v367 = v334[6];
      if ( v334[5] != v367 )
      {
        v340 = v334[5];
        do
        {
          v341 = *(__int64 **)v340;
          v342 = v339[*(_DWORD *)(*(_QWORD *)v340 + 48LL) >> 6];
          if ( _bittest64(&v342, *(unsigned int *)(*(_QWORD *)v340 + 48LL)) )
          {
            v343 = v341[1];
            v344 = *v341;
            if ( v343 != *v341 )
            {
              do
              {
                v345 = *(_QWORD *)(v343 - 16);
                v346 = *(_DWORD *)(v343 - 16) & 3 | (4 * (*(_QWORD *)(v343 - 8) & 3));
                if ( v346 <= 8 && (unsigned int)v346 > 5 )
                {
                  v347 = v345 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( (*(_WORD *)(v345 & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF) == 0x61 )
                  {
                    if ( (unsigned __int8)sub_157EF90((__int64)v362, v347, (__int64)v341, (__int64)v334) )
                      sub_158ADE0((__int64)v362, *(_DWORD *)(v347 + 4), (__int64)a4);
                  }
                }
                v343 -= 16;
              }
              while ( v344 != v343 );
              v339 = (__int64 *)s[0];
            }
          }
          v340 += 8;
        }
        while ( v367 != v340 );
      }
      if ( v339 != &v421 )
        free(v339);
    }
  }
LABEL_134:
  v126 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a4 + 16LL))(a4);
  if ( sub_157D730(v355, v126, v127, v128, v129, v130) )
    sub_986B70((__int64)&v428);
  *((_BYTE *)a1 + 40) &= 0xF1u;
  if ( *(_BYTE *)(*a1 + 16) && v436 )
  {
    ++*((_DWORD *)a1 + 11);
    v308 = sub_986B70((__int64)&v428);
    if ( v308 )
    {
      *((_DWORD *)a1 + 13) += v308[6];
      v309 = *((_DWORD *)a1 + 14);
      if ( v308[6] >= v309 )
        v309 = v308[6];
      *((_DWORD *)a1 + 14) = v309;
    }
    else
    {
      ++*((_DWORD *)a1 + 12);
    }
  }
  sub_9855D0((__int64)&v428);
}
