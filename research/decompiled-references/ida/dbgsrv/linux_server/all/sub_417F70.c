/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_417F70
// Address: 0x0000000000417F70

//----- (0000000000417F70) ----------------------------------------------------
__int64 __fastcall sub_417F70(__int64 a1)
{
  __int64 v2; // rbp
  char **v3; // r12
  __int64 v4; // r13
  char *v5; // rax
  __int64 v6; // rdx
  char *v7; // rsi
  __int64 v8; // rdi
  char *v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  char *v12; // rsi
  __int64 v13; // rdi
  __m128i si128; // xmm0
  char *v15; // rax
  char *v16; // rsi
  char *v17; // r9
  char v18; // r8
  char v19; // cl
  int v20; // edx
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rdx
  char *v24; // rsi
  __int64 v25; // rdi
  __m128i v26; // xmm0
  char *v27; // rax
  char *v28; // rsi
  char v29; // cl
  int v30; // edx
  char *v31; // r9
  char v32; // r8
  __int64 v33; // rbp
  __int64 v34; // rdx
  char *v35; // rsi
  __int64 v36; // rdi
  __m128i v37; // xmm0
  __m128i *v38; // rax
  __int64 v39; // r12
  __int64 v40; // r15
  __int64 v41; // r14
  char *v42; // rsi
  unsigned __int64 v43; // rdx
  __int64 v44; // rcx
  __m128i v45; // xmm0
  char *v46; // rax
  const void *v47; // rsi
  char *v48; // r9
  char v49; // r8
  char v50; // cl
  int v51; // edx
  __int64 v52; // r12
  __int64 v53; // r15
  __int64 v54; // r14
  char *v55; // rsi
  unsigned __int64 v56; // rdx
  __int64 v57; // rcx
  __m128i v58; // xmm0
  char *v59; // rax
  const void *v60; // rsi
  char *v61; // r9
  char v62; // r8
  char v63; // cl
  int v64; // edx
  __int64 v65; // r12
  __int64 v66; // r15
  __int64 v67; // r14
  char *v68; // rsi
  unsigned __int64 v69; // rdx
  __int64 v70; // rcx
  __m128i v71; // xmm0
  char *v72; // rax
  const void *v73; // rsi
  char *v74; // r9
  char v75; // r8
  char v76; // cl
  int v77; // edx
  __int64 v78; // r12
  __int64 v79; // r15
  __int64 v80; // r14
  char *v81; // rsi
  unsigned __int64 v82; // rdx
  __int64 v83; // rcx
  __m128i v84; // xmm0
  char *v85; // rax
  char *v86; // rsi
  char v87; // cl
  int v88; // edx
  char *v89; // r9
  char v90; // r8
  __int64 v91; // r12
  __int64 v92; // r15
  __int64 v93; // r14
  char *v94; // rsi
  unsigned __int64 v95; // rdx
  __int64 v96; // rcx
  __m128i v97; // xmm0
  char *v98; // rax
  const void *v99; // rsi
  char *v100; // r9
  char v101; // r8
  char v102; // cl
  int v103; // edx
  __int64 v104; // r12
  __int64 v105; // r15
  __int64 v106; // r14
  char *v107; // rsi
  unsigned __int64 v108; // rdx
  __int64 v109; // rcx
  __m128i v110; // xmm0
  char *v111; // rax
  const void *v112; // rsi
  char *v113; // r9
  char v114; // r8
  char v115; // cl
  int v116; // edx
  int v117; // r14d
  __int64 v118; // r12
  char v119; // al
  __int64 v120; // r15
  __int64 v121; // rdx
  char *v122; // rsi
  __int64 v123; // rdi
  __m128i v124; // xmm0
  char *v125; // rax
  const void *v126; // rsi
  char *v127; // r9
  char v128; // r8
  char v129; // cl
  int v130; // edx
  __int64 v131; // r12
  char v132; // al
  __int64 v133; // r15
  __int64 v134; // rdx
  char *v135; // rsi
  __int64 v136; // rdi
  __m128i v137; // xmm0
  char *v138; // rax
  const void *v139; // rsi
  char v140; // r8
  char *v141; // r9
  char v142; // cl
  int v143; // edx
  __int64 v144; // r12
  char v145; // al
  __int64 v146; // r15
  __int64 v147; // rdx
  char *v148; // rsi
  __int64 v149; // rdi
  __m128i v150; // xmm0
  char *v151; // rax
  const void *v152; // rsi
  char v153; // cl
  char *v154; // r9
  char v155; // r8
  int v156; // edx
  __int64 v157; // r12
  char v158; // al
  __int64 v159; // r15
  __int64 v160; // rdx
  char *v161; // rsi
  __int64 v162; // rdi
  __m128i v163; // xmm0
  char *v164; // rax
  const void *v165; // rsi
  int v166; // edx
  char *v167; // r9
  char v168; // r8
  char v169; // cl
  __int64 v170; // r12
  char v171; // al
  __int64 v172; // r15
  __int64 v173; // rdx
  char *v174; // rsi
  __int64 v175; // rdi
  __m128i v176; // xmm0
  char *v177; // rax
  const void *v178; // rsi
  char *v179; // r9
  char v180; // r8
  char v181; // cl
  int v182; // edx
  __int64 v183; // r12
  char v184; // al
  __int64 v185; // r15
  __int64 v186; // rdx
  char *v187; // rsi
  __int64 v188; // rdi
  __m128i v189; // xmm0
  char *v190; // rax
  const void *v191; // rsi
  char *v192; // r9
  char v193; // r8
  char v194; // cl
  int v195; // edx
  __int64 v196; // r12
  char v197; // al
  __int64 v198; // r15
  __int64 v199; // rdx
  char *v200; // rsi
  __int64 v201; // rdi
  __m128i v202; // xmm0
  char *v203; // rax
  const void *v204; // rsi
  char *v205; // r9
  char v206; // r8
  char v207; // cl
  int v208; // edx
  __int64 v209; // r12
  char v210; // al
  __int64 v211; // r8
  __int64 v212; // r15
  char *v213; // rsi
  __int64 v214; // rdi
  __int64 v215; // rdx
  __m128i v216; // xmm0
  char *v217; // rax
  const void *v218; // rsi
  char v219; // cl
  int v220; // edx
  char *v221; // r9
  __int64 v222; // r12
  char v223; // al
  __int64 v224; // r8
  __int64 v225; // r15
  char *v226; // rsi
  __int64 v227; // rdi
  __int64 v228; // rdx
  __m128i v229; // xmm0
  char *v230; // rax
  const void *v231; // rsi
  char *v232; // r9
  char v233; // cl
  int v234; // edx
  __int64 v235; // r12
  __int64 v236; // r8
  __int64 v237; // r15
  char *v238; // rsi
  unsigned __int64 v239; // rdx
  __int64 v240; // rcx
  __m128i v241; // xmm0
  char *v242; // rax
  char *v243; // rsi
  char *v244; // r9
  char v245; // cl
  int v246; // edx
  char **v247; // rbp
  bool v248; // r12
  int v249; // r15d
  __int64 v250; // r14
  __int64 v251; // rdx
  char *v252; // rsi
  __int64 v253; // rdi
  char *v254; // rax
  __int64 v255; // r13
  __int64 v256; // r14
  __int64 v257; // rdx
  char *v258; // rsi
  __int64 v259; // rdi
  __m128i v260; // xmm0
  char *v261; // rax
  char *v262; // rsi
  char v263; // r8
  char *v264; // r9
  char v265; // cl
  int v266; // edx
  __int64 v267; // r14
  _UNKNOWN **v268; // rbp
  char *v269; // rax
  __int64 v270; // r13
  __int64 v271; // rdx
  char *v272; // rsi
  __int64 v273; // rdi
  char *v274; // rax
  char *v275; // rax
  char **v276; // rbp
  unsigned __int64 v277; // r14
  __int64 v278; // r13
  __int64 v279; // rdx
  char *v280; // rsi
  __int64 v281; // rdi
  __m128i v282; // xmm1
  __m128i *v283; // rax
  __int64 result; // rax
  char *v285; // rax
  __int64 v286; // r12
  char v287; // al
  __int64 v288; // r15
  char *v289; // rax
  char *v290; // rax
  char *v291; // rax
  char *v292; // rax
  char *v293; // rax
  char *v294; // rax
  char *v295; // rax
  char *v296; // rax
  char *v297; // rax
  char *v298; // rax
  char *v299; // rax
  char *v300; // rax
  char *v301; // rax
  char *v302; // rax
  char *v303; // rax
  char *v304; // rax
  char *v305; // rax
  char *v306; // rax
  char *v307; // rax
  char *v308; // rax
  __int64 v309; // rdx
  char *v310; // rax
  __int64 v311; // rsi
  __m128i v312; // xmm0
  char *v313; // rax
  const void *v314; // rsi
  char *v315; // r9
  char v316; // r8
  char v317; // cl
  int v318; // edx
  __int64 v319; // r12
  char v320; // al
  __int64 v321; // r15
  __int64 v322; // rdx
  char *v323; // rax
  __int64 v324; // rsi
  __m128i v325; // xmm0
  char *v326; // rax
  const void *v327; // rsi
  char v328; // r8
  char *v329; // r9
  char v330; // cl
  int v331; // edx
  __int64 v332; // r12
  char v333; // al
  __int64 v334; // r15
  __int64 v335; // rdx
  char *v336; // rax
  __int64 v337; // rsi
  __m128i v338; // xmm0
  char *v339; // rax
  const void *v340; // rsi
  char v341; // cl
  char *v342; // r9
  char v343; // r8
  int v344; // edx
  __int64 v345; // r12
  char v346; // al
  __int64 v347; // r15
  __int64 v348; // rdx
  char *v349; // rax
  __int64 v350; // rsi
  __m128i v351; // xmm0
  char *v352; // rax
  const void *v353; // rsi
  int v354; // edx
  char *v355; // r9
  char v356; // r8
  char v357; // cl
  __int64 v358; // r12
  char v359; // al
  __int64 v360; // r8
  __int64 v361; // r15
  char *v362; // rsi
  unsigned __int64 v363; // rdx
  __int64 v364; // rcx
  __m128i v365; // xmm0
  char *v366; // rax
  const void *v367; // rsi
  char *v368; // r9
  char v369; // cl
  int v370; // edx
  __int64 v371; // r12
  char v372; // al
  __int64 v373; // r8
  __int64 v374; // r15
  char *v375; // rsi
  unsigned __int64 v376; // rdx
  __int64 v377; // rcx
  __m128i v378; // xmm0
  char *v379; // rax
  const void *v380; // rsi
  char *v381; // r9
  char v382; // cl
  int v383; // edx
  __int64 v384; // r12
  char v385; // al
  __int64 v386; // r15
  __int64 v387; // rdx
  char *v388; // rax
  __int64 v389; // rsi
  __m128i v390; // xmm0
  char *v391; // rax
  const void *v392; // rsi
  char *v393; // r9
  char v394; // r8
  char v395; // cl
  int v396; // edx
  __int64 v397; // r12
  char v398; // al
  __int64 v399; // r15
  __int64 v400; // rdx
  char *v401; // rax
  __int64 v402; // rsi
  __m128i v403; // xmm0
  char *v404; // rax
  const void *v405; // rsi
  char v406; // cl
  int v407; // edx
  char *v408; // r9
  char v409; // r8
  __int64 v410; // r12
  char v411; // al
  __int64 v412; // r15
  __int64 v413; // rdx
  char *v414; // rax
  __int64 v415; // rsi
  __m128i v416; // xmm0
  char *v417; // rax
  const void *v418; // rsi
  char *v419; // r9
  char v420; // r8
  char v421; // cl
  int v422; // edx
  __int64 v423; // r12
  char v424; // al
  __int64 v425; // r15
  __int64 v426; // rdx
  char *v427; // rax
  __int64 v428; // rsi
  __m128i v429; // xmm0
  char *v430; // rax
  const void *v431; // rsi
  char *v432; // r9
  char v433; // r8
  char v434; // cl
  int v435; // edx
  __int64 v436; // r12
  char v437; // al
  __int64 v438; // r15
  __int64 v439; // rdx
  char *v440; // rax
  __int64 v441; // rsi
  __m128i v442; // xmm0
  char *v443; // rax
  const void *v444; // rsi
  char v445; // r8
  char *v446; // r9
  char v447; // cl
  int v448; // edx
  __int64 v449; // r12
  char v450; // al
  __int64 v451; // r15
  __int64 v452; // rdx
  char *v453; // rax
  __int64 v454; // rsi
  __m128i v455; // xmm0
  char *v456; // rax
  const void *v457; // rsi
  char v458; // cl
  char *v459; // r9
  char v460; // r8
  int v461; // edx
  __int64 v462; // r12
  char v463; // al
  __int64 v464; // r15
  __int64 v465; // rdx
  char *v466; // rax
  __int64 v467; // rsi
  __m128i v468; // xmm0
  char *v469; // rax
  const void *v470; // rsi
  int v471; // edx
  char *v472; // r9
  char v473; // r8
  char v474; // cl
  __int64 v475; // r12
  char v476; // al
  __int64 v477; // r15
  __int64 v478; // rdx
  char *v479; // rax
  __int64 v480; // rsi
  __m128i v481; // xmm0
  char *v482; // rax
  const void *v483; // rsi
  char *v484; // r9
  char v485; // r8
  char v486; // cl
  int v487; // edx
  char *v488; // rax
  char *v489; // rax
  __int64 v490; // [rsp-10h] [rbp-68h]
  __m128i v491; // [rsp+0h] [rbp-58h] BYREF
  __int64 v492; // [rsp+18h] [rbp-40h]

  v491 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_4C2290), (__m128i)(unsigned __int64)sub_40D500);
  v2 = operator new(0xDE0u);
  sub_414740(v2, a1 + 672);
  *(_QWORD *)(a1 + 664) = v2;
  v3 = &off_4C7840;
  v4 = 352;
  do
  {
    v6 = *(_QWORD *)(v2 + 24);
    v7 = *(char **)(v2 + 16);
    v8 = v6 + 1;
    if ( *(_QWORD *)(v2 + 32) < (unsigned __int64)(v6 + 1) )
    {
      v9 = (char *)sub_481540(v2 + 16, v7, v6 + 1, 0x28u);
      v6 = *(_QWORD *)(v2 + 24);
      *(_QWORD *)(v2 + 16) = v9;
      v7 = v9;
      v8 = v6 + 1;
    }
    *(_QWORD *)(v2 + 24) = v8;
    v3 += 4;
    v5 = &v7[40 * v6];
    *((_QWORD *)v5 + 2) = v4;
    v4 += 16;
    *(_DWORD *)v5 = 1;
    *((_QWORD *)v5 + 1) = -1;
    *((_QWORD *)v5 + 3) = 10;
    *((_QWORD *)v5 + 4) = 10;
    sub_411320(
      *(char ***)(v2 + 8),
      *(v3 - 4),
      *((_DWORD *)v3 - 6),
      *((_BYTE *)v3 - 19),
      *((_BYTE *)v3 - 20),
      *(v3 - 2),
      (__int64)*(v3 - 1));
    v2 = *(_QWORD *)(a1 + 664);
  }
  while ( v4 != 480 );
  switch ( BYTE5(qword_4C7828[0]) )
  {
    case 2:
      v10 = 4;
      break;
    case 7:
      v10 = 8;
      break;
    case 1:
      v10 = 2;
      break;
    default:
      goto LABEL_293;
  }
  v11 = *(_QWORD *)(v2 + 24);
  v12 = *(char **)(v2 + 16);
  v13 = v11 + 1;
  if ( *(_QWORD *)(v2 + 32) < (unsigned __int64)(v11 + 1) )
  {
    v290 = (char *)sub_481540(v2 + 16, v12, v11 + 1, 0x28u);
    v11 = *(_QWORD *)(v2 + 24);
    *(_QWORD *)(v2 + 16) = v290;
    v12 = v290;
    v13 = v11 + 1;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_48F350);
  *(_QWORD *)(v2 + 24) = v13;
  v15 = &v12[40 * v11];
  *(_DWORD *)v15 = 0;
  v16 = off_4C7820;
  *(__m128i *)(v15 + 8) = si128;
  v17 = (char *)qword_4C7828[1];
  v18 = BYTE4(qword_4C7828[0]);
  v19 = BYTE5(qword_4C7828[0]);
  v20 = qword_4C7828[0];
  *((_QWORD *)v15 + 4) = v10;
  *((_QWORD *)v15 + 3) = 2;
  sub_411320(*(char ***)(v2 + 8), v16, v20, v19, v18, v17, qword_4C7828[2]);
  v21 = *(_QWORD *)(a1 + 664);
  switch ( BYTE5(qword_4C7808[0]) )
  {
    case 2:
      v22 = 4;
      break;
    case 7:
      v22 = 8;
      break;
    case 1:
      v22 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v23 = *(_QWORD *)(v21 + 24);
  v24 = *(char **)(v21 + 16);
  v25 = v23 + 1;
  if ( *(_QWORD *)(v21 + 32) < (unsigned __int64)(v23 + 1) )
  {
    v295 = (char *)sub_481540(v21 + 16, v24, v23 + 1, 0x28u);
    v23 = *(_QWORD *)(v21 + 24);
    *(_QWORD *)(v21 + 16) = v295;
    v24 = v295;
    v25 = v23 + 1;
  }
  v26 = _mm_load_si128((const __m128i *)&xmmword_48F360);
  *(_QWORD *)(v21 + 24) = v25;
  v27 = &v24[40 * v23];
  *(_DWORD *)v27 = 0;
  v28 = off_4C7800;
  *(__m128i *)(v27 + 8) = v26;
  v29 = BYTE5(qword_4C7808[0]);
  v30 = qword_4C7808[0];
  v31 = (char *)qword_4C7808[1];
  v32 = BYTE4(qword_4C7808[0]);
  *((_QWORD *)v27 + 4) = v22;
  *((_QWORD *)v27 + 3) = 2;
  sub_411320(*(char ***)(v21 + 8), v28, v30, v29, v32, v31, qword_4C7808[2]);
  v33 = *(_QWORD *)(a1 + 664);
  v34 = *(_QWORD *)(v33 + 24);
  v35 = *(char **)(v33 + 16);
  v36 = v34 + 1;
  if ( *(_QWORD *)(v33 + 32) < (unsigned __int64)(v34 + 1) )
  {
    v294 = (char *)sub_481540(v33 + 16, v35, v34 + 1, 0x28u);
    v34 = *(_QWORD *)(v33 + 24);
    *(_QWORD *)(v33 + 16) = v294;
    v35 = v294;
    v36 = v34 + 1;
  }
  *(_QWORD *)(v33 + 24) = v36;
  v37 = _mm_loadl_epi64((const __m128i *)&off_4C2298);
  v38 = (__m128i *)&v35[40 * v34];
  v38->m128i_i64[1] = -1;
  v38->m128i_i32[0] = 3;
  v38[1] = _mm_unpacklo_epi64(v37, (__m128i)(unsigned __int64)sub_40D480);
  v38[2].m128i_i64[0] = 0;
  sub_411320(
    *(char ***)(v33 + 8),
    off_4C77E0,
    qword_4C77E8[0],
    SBYTE5(qword_4C77E8[0]),
    SBYTE4(qword_4C77E8[0]),
    (char *)qword_4C77E8[1],
    qword_4C77E8[2]);
  v39 = *(_QWORD *)(a1 + 664);
  switch ( BYTE5(qword_4C77C8[0]) )
  {
    case 2:
      v40 = 4;
      break;
    case 7:
      v40 = 8;
      break;
    case 1:
      v40 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v41 = *(_QWORD *)(v39 + 24);
  v42 = *(char **)(v39 + 16);
  v43 = v41 + 1;
  v44 = v41;
  if ( *(_QWORD *)(v39 + 32) < (unsigned __int64)(v41 + 1) )
  {
    v289 = (char *)sub_481540(v39 + 16, v42, v43, 0x28u);
    v44 = *(_QWORD *)(v39 + 24);
    *(_QWORD *)(v39 + 16) = v289;
    v42 = v289;
    v43 = v44 + 1;
  }
  v45 = _mm_load_si128((const __m128i *)&xmmword_48F370);
  *(_QWORD *)(v39 + 24) = v43;
  v46 = &v42[40 * v44];
  *(_DWORD *)v46 = 0;
  v47 = off_4C77C0;
  *(__m128i *)(v46 + 8) = v45;
  v48 = (char *)qword_4C77C8[1];
  v49 = BYTE4(qword_4C77C8[0]);
  v50 = BYTE5(qword_4C77C8[0]);
  v51 = qword_4C77C8[0];
  *((_QWORD *)v46 + 3) = 8;
  *((_QWORD *)v46 + 4) = v40;
  sub_411320(*(char ***)(v39 + 8), v47, v51, v50, v49, v48, qword_4C77C8[2]);
  *(_DWORD *)(a1 + 932) = v41;
  v52 = *(_QWORD *)(a1 + 664);
  switch ( BYTE5(qword_4C77A8[0]) )
  {
    case 2:
      v53 = 4;
      break;
    case 7:
      v53 = 8;
      break;
    case 1:
      v53 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v54 = *(_QWORD *)(v52 + 24);
  v55 = *(char **)(v52 + 16);
  v56 = v54 + 1;
  v57 = v54;
  if ( *(_QWORD *)(v52 + 32) < (unsigned __int64)(v54 + 1) )
  {
    v291 = (char *)sub_481540(v52 + 16, v55, v56, 0x28u);
    v57 = *(_QWORD *)(v52 + 24);
    *(_QWORD *)(v52 + 16) = v291;
    v55 = v291;
    v56 = v57 + 1;
  }
  v58 = _mm_load_si128((const __m128i *)&xmmword_48F380);
  *(_QWORD *)(v52 + 24) = v56;
  v59 = &v55[40 * v57];
  *(_DWORD *)v59 = 0;
  v60 = off_4C77A0;
  *(__m128i *)(v59 + 8) = v58;
  v61 = (char *)qword_4C77A8[1];
  v62 = BYTE4(qword_4C77A8[0]);
  v63 = BYTE5(qword_4C77A8[0]);
  v64 = qword_4C77A8[0];
  *((_QWORD *)v59 + 3) = 8;
  *((_QWORD *)v59 + 4) = v53;
  sub_411320(*(char ***)(v52 + 8), v60, v64, v63, v62, v61, qword_4C77A8[2]);
  *(_DWORD *)(a1 + 936) = v54;
  v65 = *(_QWORD *)(a1 + 664);
  switch ( BYTE5(qword_4C7788[0]) )
  {
    case 2:
      v66 = 4;
      break;
    case 7:
      v66 = 8;
      break;
    case 1:
      v66 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v67 = *(_QWORD *)(v65 + 24);
  v68 = *(char **)(v65 + 16);
  v69 = v67 + 1;
  v70 = v67;
  if ( *(_QWORD *)(v65 + 32) < (unsigned __int64)(v67 + 1) )
  {
    v292 = (char *)sub_481540(v65 + 16, v68, v69, 0x28u);
    v70 = *(_QWORD *)(v65 + 24);
    *(_QWORD *)(v65 + 16) = v292;
    v68 = v292;
    v69 = v70 + 1;
  }
  v71 = _mm_load_si128((const __m128i *)&xmmword_48F390);
  *(_QWORD *)(v65 + 24) = v69;
  v72 = &v68[40 * v70];
  *(_DWORD *)v72 = 0;
  v73 = off_4C7780;
  *(__m128i *)(v72 + 8) = v71;
  v74 = (char *)qword_4C7788[1];
  v75 = BYTE4(qword_4C7788[0]);
  v76 = BYTE5(qword_4C7788[0]);
  v77 = qword_4C7788[0];
  *((_QWORD *)v72 + 3) = 8;
  *((_QWORD *)v72 + 4) = v66;
  sub_411320(*(char ***)(v65 + 8), v73, v77, v76, v75, v74, qword_4C7788[2]);
  *(_DWORD *)(a1 + 940) = v67;
  v78 = *(_QWORD *)(a1 + 664);
  switch ( BYTE5(qword_4C7768[0]) )
  {
    case 2:
      v79 = 4;
      break;
    case 7:
      v79 = 8;
      break;
    case 1:
      v79 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v80 = *(_QWORD *)(v78 + 24);
  v81 = *(char **)(v78 + 16);
  v82 = v80 + 1;
  v83 = v80;
  if ( *(_QWORD *)(v78 + 32) < (unsigned __int64)(v80 + 1) )
  {
    v298 = (char *)sub_481540(v78 + 16, v81, v82, 0x28u);
    v83 = *(_QWORD *)(v78 + 24);
    *(_QWORD *)(v78 + 16) = v298;
    v81 = v298;
    v82 = v83 + 1;
  }
  v84 = _mm_load_si128((const __m128i *)&xmmword_48F3A0);
  *(_QWORD *)(v78 + 24) = v82;
  v85 = &v81[40 * v83];
  *(_DWORD *)v85 = 0;
  v86 = off_4C7760;
  *(__m128i *)(v85 + 8) = v84;
  v87 = BYTE5(qword_4C7768[0]);
  v88 = qword_4C7768[0];
  v89 = (char *)qword_4C7768[1];
  v90 = BYTE4(qword_4C7768[0]);
  *((_QWORD *)v85 + 4) = v79;
  *((_QWORD *)v85 + 3) = 8;
  sub_411320(*(char ***)(v78 + 8), v86, v88, v87, v90, v89, qword_4C7768[2]);
  *(_DWORD *)(a1 + 924) = v80;
  v91 = *(_QWORD *)(a1 + 664);
  switch ( BYTE5(qword_4C7748[0]) )
  {
    case 2:
      v92 = 4;
      break;
    case 7:
      v92 = 8;
      break;
    case 1:
      v92 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v93 = *(_QWORD *)(v91 + 24);
  v94 = *(char **)(v91 + 16);
  v95 = v93 + 1;
  v96 = v93;
  if ( *(_QWORD *)(v91 + 32) < (unsigned __int64)(v93 + 1) )
  {
    v297 = (char *)sub_481540(v91 + 16, v94, v95, 0x28u);
    v96 = *(_QWORD *)(v91 + 24);
    *(_QWORD *)(v91 + 16) = v297;
    v94 = v297;
    v95 = v96 + 1;
  }
  v97 = _mm_load_si128((const __m128i *)&xmmword_48F3B0);
  *(_QWORD *)(v91 + 24) = v95;
  v98 = &v94[40 * v96];
  *(_DWORD *)v98 = 0;
  v99 = off_4C7740;
  *(__m128i *)(v98 + 8) = v97;
  v100 = (char *)qword_4C7748[1];
  v101 = BYTE4(qword_4C7748[0]);
  v102 = BYTE5(qword_4C7748[0]);
  v103 = qword_4C7748[0];
  *((_QWORD *)v98 + 4) = v92;
  *((_QWORD *)v98 + 3) = 8;
  sub_411320(*(char ***)(v91 + 8), v99, v103, v102, v101, v100, qword_4C7748[2]);
  *(_DWORD *)(a1 + 928) = v93;
  v104 = *(_QWORD *)(a1 + 664);
  switch ( BYTE5(qword_4C7728[0]) )
  {
    case 2:
      v105 = 4;
      break;
    case 7:
      v105 = 8;
      break;
    case 1:
      v105 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v106 = *(_QWORD *)(v104 + 24);
  v107 = *(char **)(v104 + 16);
  v108 = v106 + 1;
  v109 = v106;
  if ( *(_QWORD *)(v104 + 32) < (unsigned __int64)(v106 + 1) )
  {
    v296 = (char *)sub_481540(v104 + 16, v107, v108, 0x28u);
    v109 = *(_QWORD *)(v104 + 24);
    *(_QWORD *)(v104 + 16) = v296;
    v107 = v296;
    v108 = v109 + 1;
  }
  v110 = _mm_load_si128((const __m128i *)&xmmword_48F3C0);
  *(_QWORD *)(v104 + 24) = v108;
  v111 = &v107[40 * v109];
  *(_DWORD *)v111 = 0;
  v112 = off_4C7720;
  *(__m128i *)(v111 + 8) = v110;
  v113 = (char *)qword_4C7728[1];
  v114 = BYTE4(qword_4C7728[0]);
  v115 = BYTE5(qword_4C7728[0]);
  v116 = qword_4C7728[0];
  *((_QWORD *)v111 + 3) = 8;
  *((_QWORD *)v111 + 4) = v105;
  sub_411320(*(char ***)(v104 + 8), v112, v116, v115, v114, v113, qword_4C7728[2]);
  *(_DWORD *)(a1 + 944) = v106;
  v117 = *(_DWORD *)(a1 + 276);
  v118 = *(_QWORD *)(a1 + 664);
  if ( v117 != 8 )
  {
    v119 = BYTE13(xmmword_4C7A60);
    switch ( v119 )
    {
      case 2:
        v120 = 4;
        break;
      case 7:
        v120 = 8;
        break;
      case 1:
        v120 = 2;
        break;
      default:
        if ( !byte_4C94E1 )
          goto LABEL_292;
        goto LABEL_354;
    }
    v121 = *(_QWORD *)(v118 + 24);
    v122 = *(char **)(v118 + 16);
    v123 = v121 + 1;
    if ( *(_QWORD *)(v118 + 32) < (unsigned __int64)(v121 + 1) )
    {
      v302 = (char *)sub_481540(v118 + 16, v122, v121 + 1, 0x28u);
      v121 = *(_QWORD *)(v118 + 24);
      *(_QWORD *)(v118 + 16) = v302;
      v122 = v302;
      v123 = v121 + 1;
    }
    v124 = _mm_load_si128((const __m128i *)&xmmword_48F4B0);
    *(_QWORD *)(v118 + 24) = v123;
    v125 = &v122[40 * v121];
    *(_DWORD *)v125 = 0;
    v126 = (const void *)xmmword_4C7A60;
    *(__m128i *)(v125 + 8) = v124;
    v127 = (char *)xmmword_4C7A70;
    v128 = BYTE12(xmmword_4C7A60);
    v129 = BYTE13(xmmword_4C7A60);
    v130 = DWORD2(xmmword_4C7A60);
    *((_QWORD *)v125 + 3) = 8;
    *((_QWORD *)v125 + 4) = v120;
    sub_411320(*(char ***)(v118 + 8), v126, v130, v129, v128, v127, *((__int64 *)&xmmword_4C7A70 + 1));
    v131 = *(_QWORD *)(a1 + 664);
    v132 = BYTE13(xmmword_4C7A40);
    switch ( v132 )
    {
      case 2:
        v133 = 4;
        break;
      case 7:
        v133 = 8;
        break;
      case 1:
        v133 = 2;
        break;
      default:
        if ( !byte_4C94E1 )
          goto LABEL_292;
        goto LABEL_354;
    }
    v134 = *(_QWORD *)(v131 + 24);
    v135 = *(char **)(v131 + 16);
    v136 = v134 + 1;
    if ( *(_QWORD *)(v131 + 32) < (unsigned __int64)(v134 + 1) )
    {
      v301 = (char *)sub_481540(v131 + 16, v135, v134 + 1, 0x28u);
      v134 = *(_QWORD *)(v131 + 24);
      *(_QWORD *)(v131 + 16) = v301;
      v135 = v301;
      v136 = v134 + 1;
    }
    v137 = _mm_load_si128((const __m128i *)&xmmword_48F4C0);
    *(_QWORD *)(v131 + 24) = v136;
    v138 = &v135[40 * v134];
    *(_DWORD *)v138 = 0;
    v139 = (const void *)xmmword_4C7A40;
    *(__m128i *)(v138 + 8) = v137;
    v140 = BYTE12(xmmword_4C7A40);
    v141 = (char *)xmmword_4C7A50;
    v142 = BYTE13(xmmword_4C7A40);
    v143 = DWORD2(xmmword_4C7A40);
    *((_QWORD *)v138 + 3) = 8;
    *((_QWORD *)v138 + 4) = v133;
    sub_411320(*(char ***)(v131 + 8), v139, v143, v142, v140, v141, *((__int64 *)&xmmword_4C7A50 + 1));
    v144 = *(_QWORD *)(a1 + 664);
    v145 = BYTE13(xmmword_4C7A20);
    switch ( v145 )
    {
      case 2:
        v146 = 4;
        break;
      case 7:
        v146 = 8;
        break;
      case 1:
        v146 = 2;
        break;
      default:
        if ( !byte_4C94E1 )
          goto LABEL_292;
        goto LABEL_354;
    }
    v147 = *(_QWORD *)(v144 + 24);
    v148 = *(char **)(v144 + 16);
    v149 = v147 + 1;
    if ( *(_QWORD *)(v144 + 32) < (unsigned __int64)(v147 + 1) )
    {
      v300 = (char *)sub_481540(v144 + 16, v148, v147 + 1, 0x28u);
      v147 = *(_QWORD *)(v144 + 24);
      *(_QWORD *)(v144 + 16) = v300;
      v148 = v300;
      v149 = v147 + 1;
    }
    v150 = _mm_load_si128((const __m128i *)&xmmword_48F4D0);
    *(_QWORD *)(v144 + 24) = v149;
    v151 = &v148[40 * v147];
    *(_DWORD *)v151 = 0;
    v152 = (const void *)xmmword_4C7A20;
    *(__m128i *)(v151 + 8) = v150;
    v153 = BYTE13(xmmword_4C7A20);
    v154 = (char *)xmmword_4C7A30;
    v155 = BYTE12(xmmword_4C7A20);
    v156 = DWORD2(xmmword_4C7A20);
    *((_QWORD *)v151 + 3) = 8;
    *((_QWORD *)v151 + 4) = v146;
    sub_411320(*(char ***)(v144 + 8), v152, v156, v153, v155, v154, *((__int64 *)&xmmword_4C7A30 + 1));
    v157 = *(_QWORD *)(a1 + 664);
    v158 = BYTE13(xmmword_4C7A00);
    switch ( v158 )
    {
      case 2:
        v159 = 4;
        break;
      case 7:
        v159 = 8;
        break;
      case 1:
        v159 = 2;
        break;
      default:
        if ( !byte_4C94E1 )
          goto LABEL_292;
        goto LABEL_354;
    }
    v160 = *(_QWORD *)(v157 + 24);
    v161 = *(char **)(v157 + 16);
    v162 = v160 + 1;
    if ( *(_QWORD *)(v157 + 32) < (unsigned __int64)(v160 + 1) )
    {
      v308 = (char *)sub_481540(v157 + 16, v161, v160 + 1, 0x28u);
      v160 = *(_QWORD *)(v157 + 24);
      *(_QWORD *)(v157 + 16) = v308;
      v161 = v308;
      v162 = v160 + 1;
    }
    v163 = _mm_load_si128((const __m128i *)&xmmword_48F3D0);
    *(_QWORD *)(v157 + 24) = v162;
    v164 = &v161[40 * v160];
    *(_DWORD *)v164 = 0;
    v165 = (const void *)xmmword_4C7A00;
    *(__m128i *)(v164 + 8) = v163;
    v166 = DWORD2(xmmword_4C7A00);
    v167 = (char *)xmmword_4C7A10;
    v168 = BYTE12(xmmword_4C7A00);
    v169 = BYTE13(xmmword_4C7A00);
    *((_QWORD *)v164 + 4) = v159;
    *((_QWORD *)v164 + 3) = 8;
    sub_411320(*(char ***)(v157 + 8), v165, v166, v169, v168, v167, *((__int64 *)&xmmword_4C7A10 + 1));
    v170 = *(_QWORD *)(a1 + 664);
    v171 = BYTE13(xmmword_4C79E0);
    switch ( v171 )
    {
      case 2:
        v172 = 4;
        break;
      case 7:
        v172 = 8;
        break;
      case 1:
        v172 = 2;
        break;
      default:
        if ( !byte_4C94E1 )
          goto LABEL_292;
        goto LABEL_354;
    }
    v173 = *(_QWORD *)(v170 + 24);
    v174 = *(char **)(v170 + 16);
    v175 = v173 + 1;
    if ( *(_QWORD *)(v170 + 32) < (unsigned __int64)(v173 + 1) )
    {
      v307 = (char *)sub_481540(v170 + 16, v174, v173 + 1, 0x28u);
      v173 = *(_QWORD *)(v170 + 24);
      *(_QWORD *)(v170 + 16) = v307;
      v174 = v307;
      v175 = v173 + 1;
    }
    v176 = _mm_load_si128((const __m128i *)&xmmword_48F3E0);
    *(_QWORD *)(v170 + 24) = v175;
    v177 = &v174[40 * v173];
    *(_DWORD *)v177 = 0;
    v178 = (const void *)xmmword_4C79E0;
    *(__m128i *)(v177 + 8) = v176;
    v179 = (char *)xmmword_4C79F0;
    v180 = BYTE12(xmmword_4C79E0);
    v181 = BYTE13(xmmword_4C79E0);
    v182 = DWORD2(xmmword_4C79E0);
    *((_QWORD *)v177 + 3) = 8;
    *((_QWORD *)v177 + 4) = v172;
    sub_411320(*(char ***)(v170 + 8), v178, v182, v181, v180, v179, *((__int64 *)&xmmword_4C79F0 + 1));
    v183 = *(_QWORD *)(a1 + 664);
    v184 = BYTE13(xmmword_4C79C0);
    switch ( v184 )
    {
      case 2:
        v185 = 4;
        break;
      case 7:
        v185 = 8;
        break;
      case 1:
        v185 = 2;
        break;
      default:
        if ( !byte_4C94E1 )
          goto LABEL_292;
        goto LABEL_354;
    }
    v186 = *(_QWORD *)(v183 + 24);
    v187 = *(char **)(v183 + 16);
    v188 = v186 + 1;
    if ( *(_QWORD *)(v183 + 32) < (unsigned __int64)(v186 + 1) )
    {
      v306 = (char *)sub_481540(v183 + 16, v187, v186 + 1, 0x28u);
      v186 = *(_QWORD *)(v183 + 24);
      *(_QWORD *)(v183 + 16) = v306;
      v187 = v306;
      v188 = v186 + 1;
    }
    v189 = _mm_load_si128((const __m128i *)&xmmword_48F3F0);
    *(_QWORD *)(v183 + 24) = v188;
    v190 = &v187[40 * v186];
    *(_DWORD *)v190 = 0;
    v191 = (const void *)xmmword_4C79C0;
    *(__m128i *)(v190 + 8) = v189;
    v192 = (char *)xmmword_4C79D0;
    v193 = BYTE12(xmmword_4C79C0);
    v194 = BYTE13(xmmword_4C79C0);
    v195 = DWORD2(xmmword_4C79C0);
    *((_QWORD *)v190 + 3) = 8;
    *((_QWORD *)v190 + 4) = v185;
    sub_411320(*(char ***)(v183 + 8), v191, v195, v194, v193, v192, *((__int64 *)&xmmword_4C79D0 + 1));
    v196 = *(_QWORD *)(a1 + 664);
    v197 = BYTE13(xmmword_4C79A0);
    switch ( v197 )
    {
      case 2:
        v198 = 4;
        break;
      case 7:
        v198 = 8;
        break;
      case 1:
        v198 = 2;
        break;
      default:
        if ( !byte_4C94E1 )
          goto LABEL_292;
        goto LABEL_354;
    }
    v199 = *(_QWORD *)(v196 + 24);
    v200 = *(char **)(v196 + 16);
    v201 = v199 + 1;
    if ( *(_QWORD *)(v196 + 32) < (unsigned __int64)(v199 + 1) )
    {
      v305 = (char *)sub_481540(v196 + 16, v200, v199 + 1, 0x28u);
      v199 = *(_QWORD *)(v196 + 24);
      *(_QWORD *)(v196 + 16) = v305;
      v200 = v305;
      v201 = v199 + 1;
    }
    v202 = _mm_load_si128((const __m128i *)&xmmword_48F400);
    *(_QWORD *)(v196 + 24) = v201;
    v203 = &v200[40 * v199];
    *(_DWORD *)v203 = 0;
    v204 = (const void *)xmmword_4C79A0;
    *(__m128i *)(v203 + 8) = v202;
    v205 = (char *)xmmword_4C79B0;
    v206 = BYTE12(xmmword_4C79A0);
    v207 = BYTE13(xmmword_4C79A0);
    v208 = DWORD2(xmmword_4C79A0);
    *((_QWORD *)v203 + 3) = 8;
    *((_QWORD *)v203 + 4) = v198;
    sub_411320(*(char ***)(v196 + 8), v204, v208, v207, v206, v205, *((__int64 *)&xmmword_4C79B0 + 1));
    v209 = *(_QWORD *)(a1 + 664);
    v210 = BYTE13(xmmword_4C7980);
    switch ( v210 )
    {
      case 2:
        v211 = 4;
        break;
      case 7:
        v211 = 8;
        break;
      case 1:
        v211 = 2;
        break;
      default:
        if ( !byte_4C94E1 )
          goto LABEL_292;
        goto LABEL_354;
    }
    v212 = *(_QWORD *)(v209 + 24);
    v213 = *(char **)(v209 + 16);
    v214 = v212 + 1;
    v215 = v212;
    if ( *(_QWORD *)(v209 + 32) < (unsigned __int64)(v212 + 1) )
    {
      v492 = v211;
      v304 = (char *)sub_481540(v209 + 16, v213, v212 + 1, 0x28u);
      v215 = *(_QWORD *)(v209 + 24);
      v211 = v492;
      *(_QWORD *)(v209 + 16) = v304;
      v213 = v304;
      v214 = v215 + 1;
    }
    v216 = _mm_load_si128((const __m128i *)&xmmword_48F410);
    *(_QWORD *)(v209 + 24) = v214;
    v217 = &v213[40 * v215];
    *(_DWORD *)v217 = 0;
    v218 = (const void *)xmmword_4C7980;
    *(__m128i *)(v217 + 8) = v216;
    v219 = BYTE13(xmmword_4C7980);
    v220 = DWORD2(xmmword_4C7980);
    *((_QWORD *)v217 + 4) = v211;
    v221 = (char *)xmmword_4C7990;
    *((_QWORD *)v217 + 3) = 8;
    sub_411320(*(char ***)(v209 + 8), v218, v220, v219, BYTE12(xmmword_4C7980), v221, *((__int64 *)&xmmword_4C7990 + 1));
    *(_DWORD *)(a1 + 780) = v212;
    v222 = *(_QWORD *)(a1 + 664);
    v223 = BYTE13(xmmword_4C7960);
    switch ( v223 )
    {
      case 2:
        v224 = 4;
        goto LABEL_108;
      case 7:
        v224 = 8;
        goto LABEL_108;
      case 1:
        v224 = 2;
LABEL_108:
        v225 = *(_QWORD *)(v222 + 24);
        v226 = *(char **)(v222 + 16);
        v227 = v225 + 1;
        v228 = v225;
        if ( *(_QWORD *)(v222 + 32) < (unsigned __int64)(v225 + 1) )
        {
          v492 = v224;
          v303 = (char *)sub_481540(v222 + 16, v226, v225 + 1, 0x28u);
          v228 = *(_QWORD *)(v222 + 24);
          v224 = v492;
          *(_QWORD *)(v222 + 16) = v303;
          v226 = v303;
          v227 = v228 + 1;
        }
        v229 = _mm_load_si128((const __m128i *)&xmmword_48F420);
        *(_QWORD *)(v222 + 24) = v227;
        v230 = &v226[40 * v228];
        *(_DWORD *)v230 = 0;
        v231 = (const void *)xmmword_4C7960;
        *(__m128i *)(v230 + 8) = v229;
        v232 = (char *)xmmword_4C7970;
        v233 = BYTE13(xmmword_4C7960);
        *((_QWORD *)v230 + 4) = v224;
        v234 = DWORD2(xmmword_4C7960);
        *((_QWORD *)v230 + 3) = 8;
        sub_411320(
          *(char ***)(v222 + 8),
          v231,
          v234,
          v233,
          BYTE12(xmmword_4C7960),
          v232,
          *((__int64 *)&xmmword_4C7970 + 1));
        *(_DWORD *)(a1 + 784) = v225;
        goto LABEL_111;
    }
    if ( !byte_4C94E1 )
      goto LABEL_292;
LABEL_354:
    BUG();
  }
  sub_417DB0(*(_QWORD *)(a1 + 664), (__int64)&xmmword_4C7C80, 184, 8u, 0xFFFFFFFFFFFFFFFFLL);
  sub_417DB0(*(_QWORD *)(a1 + 664), (__int64)&xmmword_4C7C60, 144, 8u, 0xFFFFFFFFFFFFFFFFLL);
  sub_417DB0(*(_QWORD *)(a1 + 664), (__int64)&xmmword_4C7C40, 192, 8u, 0xFFFFFFFFFFFFFFFFLL);
  v286 = *(_QWORD *)(a1 + 664);
  v287 = BYTE13(xmmword_4C7C20);
  switch ( v287 )
  {
    case 2:
      v288 = 4;
      break;
    case 7:
      v288 = 8;
      break;
    case 1:
      v288 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v309 = *(_QWORD *)(v286 + 24);
  v310 = *(char **)(v286 + 16);
  v311 = v309 + 1;
  if ( *(_QWORD *)(v286 + 32) < (unsigned __int64)(v309 + 1) )
  {
    v310 = (char *)sub_481540(v286 + 16, *(void **)(v286 + 16), v309 + 1, 0x28u);
    v309 = *(_QWORD *)(v286 + 24);
    *(_QWORD *)(v286 + 16) = v310;
    v311 = v309 + 1;
  }
  v312 = _mm_load_si128((const __m128i *)&xmmword_48F3D0);
  *(_QWORD *)(v286 + 24) = v311;
  v313 = &v310[40 * v309];
  *(_DWORD *)v313 = 0;
  v314 = (const void *)xmmword_4C7C20;
  *(__m128i *)(v313 + 8) = v312;
  v315 = (char *)xmmword_4C7C30;
  v316 = BYTE12(xmmword_4C7C20);
  v317 = BYTE13(xmmword_4C7C20);
  v318 = DWORD2(xmmword_4C7C20);
  *((_QWORD *)v313 + 3) = 8;
  *((_QWORD *)v313 + 4) = v288;
  sub_411320(*(char ***)(v286 + 8), v314, v318, v317, v316, v315, *((__int64 *)&xmmword_4C7C30 + 1));
  v319 = *(_QWORD *)(a1 + 664);
  v320 = BYTE13(xmmword_4C7C00);
  switch ( v320 )
  {
    case 2:
      v321 = 4;
      break;
    case 7:
      v321 = 8;
      break;
    case 1:
      v321 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v322 = *(_QWORD *)(v319 + 24);
  v323 = *(char **)(v319 + 16);
  v324 = v322 + 1;
  if ( *(_QWORD *)(v319 + 32) < (unsigned __int64)(v322 + 1) )
  {
    v323 = (char *)sub_481540(v319 + 16, *(void **)(v319 + 16), v322 + 1, 0x28u);
    v322 = *(_QWORD *)(v319 + 24);
    *(_QWORD *)(v319 + 16) = v323;
    v324 = v322 + 1;
  }
  v325 = _mm_load_si128((const __m128i *)&xmmword_48F3E0);
  *(_QWORD *)(v319 + 24) = v324;
  v326 = &v323[40 * v322];
  *(_DWORD *)v326 = 0;
  v327 = (const void *)xmmword_4C7C00;
  *(__m128i *)(v326 + 8) = v325;
  v328 = BYTE12(xmmword_4C7C00);
  v329 = (char *)xmmword_4C7C10;
  v330 = BYTE13(xmmword_4C7C00);
  v331 = DWORD2(xmmword_4C7C00);
  *((_QWORD *)v326 + 3) = 8;
  *((_QWORD *)v326 + 4) = v321;
  sub_411320(*(char ***)(v319 + 8), v327, v331, v330, v328, v329, *((__int64 *)&xmmword_4C7C10 + 1));
  v332 = *(_QWORD *)(a1 + 664);
  v333 = BYTE13(xmmword_4C7BE0);
  switch ( v333 )
  {
    case 2:
      v334 = 4;
      break;
    case 7:
      v334 = 8;
      break;
    case 1:
      v334 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v335 = *(_QWORD *)(v332 + 24);
  v336 = *(char **)(v332 + 16);
  v337 = v335 + 1;
  if ( *(_QWORD *)(v332 + 32) < (unsigned __int64)(v335 + 1) )
  {
    v336 = (char *)sub_481540(v332 + 16, *(void **)(v332 + 16), v335 + 1, 0x28u);
    v335 = *(_QWORD *)(v332 + 24);
    *(_QWORD *)(v332 + 16) = v336;
    v337 = v335 + 1;
  }
  v338 = _mm_load_si128((const __m128i *)&xmmword_48F3F0);
  *(_QWORD *)(v332 + 24) = v337;
  v339 = &v336[40 * v335];
  *(_DWORD *)v339 = 0;
  v340 = (const void *)xmmword_4C7BE0;
  *(__m128i *)(v339 + 8) = v338;
  v341 = BYTE13(xmmword_4C7BE0);
  v342 = (char *)xmmword_4C7BF0;
  v343 = BYTE12(xmmword_4C7BE0);
  v344 = DWORD2(xmmword_4C7BE0);
  *((_QWORD *)v339 + 3) = 8;
  *((_QWORD *)v339 + 4) = v334;
  sub_411320(*(char ***)(v332 + 8), v340, v344, v341, v343, v342, *((__int64 *)&xmmword_4C7BF0 + 1));
  v345 = *(_QWORD *)(a1 + 664);
  v346 = BYTE13(xmmword_4C7BC0);
  switch ( v346 )
  {
    case 2:
      v347 = 4;
      break;
    case 7:
      v347 = 8;
      break;
    case 1:
      v347 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v348 = *(_QWORD *)(v345 + 24);
  v349 = *(char **)(v345 + 16);
  v350 = v348 + 1;
  if ( *(_QWORD *)(v345 + 32) < (unsigned __int64)(v348 + 1) )
  {
    v349 = (char *)sub_481540(v345 + 16, *(void **)(v345 + 16), v348 + 1, 0x28u);
    v348 = *(_QWORD *)(v345 + 24);
    *(_QWORD *)(v345 + 16) = v349;
    v350 = v348 + 1;
  }
  v351 = _mm_load_si128((const __m128i *)&xmmword_48F400);
  *(_QWORD *)(v345 + 24) = v350;
  v352 = &v349[40 * v348];
  *(_DWORD *)v352 = 0;
  v353 = (const void *)xmmword_4C7BC0;
  *(__m128i *)(v352 + 8) = v351;
  v354 = DWORD2(xmmword_4C7BC0);
  v355 = (char *)xmmword_4C7BD0;
  v356 = BYTE12(xmmword_4C7BC0);
  v357 = BYTE13(xmmword_4C7BC0);
  *((_QWORD *)v352 + 4) = v347;
  *((_QWORD *)v352 + 3) = 8;
  sub_411320(*(char ***)(v345 + 8), v353, v354, v357, v356, v355, *((__int64 *)&xmmword_4C7BD0 + 1));
  v358 = *(_QWORD *)(a1 + 664);
  v359 = BYTE13(xmmword_4C7BA0);
  switch ( v359 )
  {
    case 2:
      v360 = 4;
      break;
    case 7:
      v360 = 8;
      break;
    case 1:
      v360 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v361 = *(_QWORD *)(v358 + 24);
  v362 = *(char **)(v358 + 16);
  v363 = v361 + 1;
  v364 = v361;
  if ( *(_QWORD *)(v358 + 32) < (unsigned __int64)(v361 + 1) )
  {
    v492 = v360;
    v489 = (char *)sub_481540(v358 + 16, v362, v363, 0x28u);
    v364 = *(_QWORD *)(v358 + 24);
    v360 = v492;
    *(_QWORD *)(v358 + 16) = v489;
    v362 = v489;
    v363 = v364 + 1;
  }
  v365 = _mm_load_si128((const __m128i *)&xmmword_48F410);
  *(_QWORD *)(v358 + 24) = v363;
  v366 = &v362[40 * v364];
  *(_DWORD *)v366 = 0;
  v367 = (const void *)xmmword_4C7BA0;
  *(__m128i *)(v366 + 8) = v365;
  v368 = (char *)xmmword_4C7BB0;
  v369 = BYTE13(xmmword_4C7BA0);
  *((_QWORD *)v366 + 4) = v360;
  v370 = DWORD2(xmmword_4C7BA0);
  *((_QWORD *)v366 + 3) = 8;
  sub_411320(*(char ***)(v358 + 8), v367, v370, v369, BYTE12(xmmword_4C7BA0), v368, *((__int64 *)&xmmword_4C7BB0 + 1));
  *(_DWORD *)(a1 + 780) = v361;
  v371 = *(_QWORD *)(a1 + 664);
  v372 = BYTE13(xmmword_4C7B80);
  switch ( v372 )
  {
    case 2:
      v373 = 4;
      break;
    case 7:
      v373 = 8;
      break;
    case 1:
      v373 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v374 = *(_QWORD *)(v371 + 24);
  v375 = *(char **)(v371 + 16);
  v376 = v374 + 1;
  v377 = v374;
  if ( *(_QWORD *)(v371 + 32) < (unsigned __int64)(v374 + 1) )
  {
    v492 = v373;
    v488 = (char *)sub_481540(v371 + 16, v375, v376, 0x28u);
    v377 = *(_QWORD *)(v371 + 24);
    v373 = v492;
    *(_QWORD *)(v371 + 16) = v488;
    v375 = v488;
    v376 = v377 + 1;
  }
  v378 = _mm_load_si128((const __m128i *)&xmmword_48F420);
  *(_QWORD *)(v371 + 24) = v376;
  v379 = &v375[40 * v377];
  *(_DWORD *)v379 = 0;
  v380 = (const void *)xmmword_4C7B80;
  *(__m128i *)(v379 + 8) = v378;
  v381 = (char *)xmmword_4C7B90;
  v382 = BYTE13(xmmword_4C7B80);
  *((_QWORD *)v379 + 4) = v373;
  v383 = DWORD2(xmmword_4C7B80);
  *((_QWORD *)v379 + 3) = 8;
  sub_411320(*(char ***)(v371 + 8), v380, v383, v382, BYTE12(xmmword_4C7B80), v381, *((__int64 *)&xmmword_4C7B90 + 1));
  *(_DWORD *)(a1 + 784) = v374;
  v384 = *(_QWORD *)(a1 + 664);
  v385 = BYTE13(xmmword_4C7B60);
  switch ( v385 )
  {
    case 2:
      v386 = 4;
      break;
    case 7:
      v386 = 8;
      break;
    case 1:
      v386 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v387 = *(_QWORD *)(v384 + 24);
  v388 = *(char **)(v384 + 16);
  v389 = v387 + 1;
  if ( *(_QWORD *)(v384 + 32) < (unsigned __int64)(v387 + 1) )
  {
    v388 = (char *)sub_481540(v384 + 16, *(void **)(v384 + 16), v387 + 1, 0x28u);
    v387 = *(_QWORD *)(v384 + 24);
    *(_QWORD *)(v384 + 16) = v388;
    v389 = v387 + 1;
  }
  v390 = _mm_load_si128((const __m128i *)&xmmword_48F430);
  *(_QWORD *)(v384 + 24) = v389;
  v391 = &v388[40 * v387];
  *(_DWORD *)v391 = 0;
  v392 = (const void *)xmmword_4C7B60;
  *(__m128i *)(v391 + 8) = v390;
  v393 = (char *)xmmword_4C7B70;
  v394 = BYTE12(xmmword_4C7B60);
  v395 = BYTE13(xmmword_4C7B60);
  v396 = DWORD2(xmmword_4C7B60);
  *((_QWORD *)v391 + 3) = 8;
  *((_QWORD *)v391 + 4) = v386;
  sub_411320(*(char ***)(v384 + 8), v392, v396, v395, v394, v393, *((__int64 *)&xmmword_4C7B70 + 1));
  v397 = *(_QWORD *)(a1 + 664);
  v398 = BYTE13(xmmword_4C7B40);
  switch ( v398 )
  {
    case 2:
      v399 = 4;
      break;
    case 7:
      v399 = 8;
      break;
    case 1:
      v399 = 2;
      break;
    default:
      if ( byte_4C94E1 )
        goto LABEL_354;
      goto LABEL_292;
  }
  v400 = *(_QWORD *)(v397 + 24);
  v401 = *(char **)(v397 + 16);
  v402 = v400 + 1;
  if ( *(_QWORD *)(v397 + 32) < (unsigned __int64)(v400 + 1) )
  {
    v401 = (char *)sub_481540(v397 + 16, *(void **)(v397 + 16), v400 + 1, 0x28u);
    v400 = *(_QWORD *)(v397 + 24);
    *(_QWORD *)(v397 + 16) = v401;
    v402 = v400 + 1;
  }
  v403 = _mm_load_si128((const __m128i *)&xmmword_48F440);
  *(_QWORD *)(v397 + 24) = v402;
  v404 = &v401[40 * v400];
  *(_DWORD *)v404 = 0;
  v405 = (const void *)xmmword_4C7B40;
  *(__m128i *)(v404 + 8) = v403;
  v406 = BYTE13(xmmword_4C7B40);
  v407 = DWORD2(xmmword_4C7B40);
  v408 = (char *)xmmword_4C7B50;
  v409 = BYTE12(xmmword_4C7B40);
  *((_QWORD *)v404 + 4) = v399;
  *((_QWORD *)v404 + 3) = 8;
  sub_411320(*(char ***)(v397 + 8), v405, v407, v406, v409, v408, *((__int64 *)&xmmword_4C7B50 + 1));
  v410 = *(_QWORD *)(a1 + 664);
  v411 = BYTE13(xmmword_4C7B20);
  switch ( v411 )
  {
    case 2:
      v412 = 4;
      break;
    case 7:
      v412 = 8;
      break;
    case 1:
      v412 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v413 = *(_QWORD *)(v410 + 24);
  v414 = *(char **)(v410 + 16);
  v415 = v413 + 1;
  if ( *(_QWORD *)(v410 + 32) < (unsigned __int64)(v413 + 1) )
  {
    v414 = (char *)sub_481540(v410 + 16, *(void **)(v410 + 16), v413 + 1, 0x28u);
    v413 = *(_QWORD *)(v410 + 24);
    *(_QWORD *)(v410 + 16) = v414;
    v415 = v413 + 1;
  }
  v416 = _mm_load_si128((const __m128i *)&xmmword_48F450);
  *(_QWORD *)(v410 + 24) = v415;
  v417 = &v414[40 * v413];
  *(_DWORD *)v417 = 0;
  v418 = (const void *)xmmword_4C7B20;
  *(__m128i *)(v417 + 8) = v416;
  v419 = (char *)xmmword_4C7B30;
  v420 = BYTE12(xmmword_4C7B20);
  v421 = BYTE13(xmmword_4C7B20);
  v422 = DWORD2(xmmword_4C7B20);
  *((_QWORD *)v417 + 4) = v412;
  *((_QWORD *)v417 + 3) = 8;
  sub_411320(*(char ***)(v410 + 8), v418, v422, v421, v420, v419, *((__int64 *)&xmmword_4C7B30 + 1));
  v423 = *(_QWORD *)(a1 + 664);
  v424 = BYTE13(xmmword_4C7B00);
  switch ( v424 )
  {
    case 2:
      v425 = 4;
      break;
    case 7:
      v425 = 8;
      break;
    case 1:
      v425 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v426 = *(_QWORD *)(v423 + 24);
  v427 = *(char **)(v423 + 16);
  v428 = v426 + 1;
  if ( *(_QWORD *)(v423 + 32) < (unsigned __int64)(v426 + 1) )
  {
    v427 = (char *)sub_481540(v423 + 16, *(void **)(v423 + 16), v426 + 1, 0x28u);
    v426 = *(_QWORD *)(v423 + 24);
    *(_QWORD *)(v423 + 16) = v427;
    v428 = v426 + 1;
  }
  v429 = _mm_load_si128((const __m128i *)&xmmword_48F460);
  *(_QWORD *)(v423 + 24) = v428;
  v430 = &v427[40 * v426];
  *(_DWORD *)v430 = 0;
  v431 = (const void *)xmmword_4C7B00;
  *(__m128i *)(v430 + 8) = v429;
  v432 = (char *)xmmword_4C7B10;
  v433 = BYTE12(xmmword_4C7B00);
  v434 = BYTE13(xmmword_4C7B00);
  v435 = DWORD2(xmmword_4C7B00);
  *((_QWORD *)v430 + 3) = 8;
  *((_QWORD *)v430 + 4) = v425;
  sub_411320(*(char ***)(v423 + 8), v431, v435, v434, v433, v432, *((__int64 *)&xmmword_4C7B10 + 1));
  v436 = *(_QWORD *)(a1 + 664);
  v437 = BYTE13(xmmword_4C7AE0);
  switch ( v437 )
  {
    case 2:
      v438 = 4;
      break;
    case 7:
      v438 = 8;
      break;
    case 1:
      v438 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v439 = *(_QWORD *)(v436 + 24);
  v440 = *(char **)(v436 + 16);
  v441 = v439 + 1;
  if ( *(_QWORD *)(v436 + 32) < (unsigned __int64)(v439 + 1) )
  {
    v440 = (char *)sub_481540(v436 + 16, *(void **)(v436 + 16), v439 + 1, 0x28u);
    v439 = *(_QWORD *)(v436 + 24);
    *(_QWORD *)(v436 + 16) = v440;
    v441 = v439 + 1;
  }
  v442 = _mm_load_si128((const __m128i *)&xmmword_48F470);
  *(_QWORD *)(v436 + 24) = v441;
  v443 = &v440[40 * v439];
  *(_DWORD *)v443 = 0;
  v444 = (const void *)xmmword_4C7AE0;
  *(__m128i *)(v443 + 8) = v442;
  v445 = BYTE12(xmmword_4C7AE0);
  v446 = (char *)xmmword_4C7AF0;
  v447 = BYTE13(xmmword_4C7AE0);
  v448 = DWORD2(xmmword_4C7AE0);
  *((_QWORD *)v443 + 3) = 8;
  *((_QWORD *)v443 + 4) = v438;
  sub_411320(*(char ***)(v436 + 8), v444, v448, v447, v445, v446, *((__int64 *)&xmmword_4C7AF0 + 1));
  v449 = *(_QWORD *)(a1 + 664);
  v450 = BYTE13(xmmword_4C7AC0);
  switch ( v450 )
  {
    case 2:
      v451 = 4;
      break;
    case 7:
      v451 = 8;
      break;
    case 1:
      v451 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v452 = *(_QWORD *)(v449 + 24);
  v453 = *(char **)(v449 + 16);
  v454 = v452 + 1;
  if ( *(_QWORD *)(v449 + 32) < (unsigned __int64)(v452 + 1) )
  {
    v453 = (char *)sub_481540(v449 + 16, *(void **)(v449 + 16), v452 + 1, 0x28u);
    v452 = *(_QWORD *)(v449 + 24);
    *(_QWORD *)(v449 + 16) = v453;
    v454 = v452 + 1;
  }
  v455 = _mm_load_si128((const __m128i *)&xmmword_48F480);
  *(_QWORD *)(v449 + 24) = v454;
  v456 = &v453[40 * v452];
  *(_DWORD *)v456 = 0;
  v457 = (const void *)xmmword_4C7AC0;
  *(__m128i *)(v456 + 8) = v455;
  v458 = BYTE13(xmmword_4C7AC0);
  v459 = (char *)xmmword_4C7AD0;
  v460 = BYTE12(xmmword_4C7AC0);
  v461 = DWORD2(xmmword_4C7AC0);
  *((_QWORD *)v456 + 3) = 8;
  *((_QWORD *)v456 + 4) = v451;
  sub_411320(*(char ***)(v449 + 8), v457, v461, v458, v460, v459, *((__int64 *)&xmmword_4C7AD0 + 1));
  v462 = *(_QWORD *)(a1 + 664);
  v463 = BYTE13(xmmword_4C7AA0);
  switch ( v463 )
  {
    case 2:
      v464 = 4;
      break;
    case 7:
      v464 = 8;
      break;
    case 1:
      v464 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v465 = *(_QWORD *)(v462 + 24);
  v466 = *(char **)(v462 + 16);
  v467 = v465 + 1;
  if ( *(_QWORD *)(v462 + 32) < (unsigned __int64)(v465 + 1) )
  {
    v466 = (char *)sub_481540(v462 + 16, *(void **)(v462 + 16), v465 + 1, 0x28u);
    v465 = *(_QWORD *)(v462 + 24);
    *(_QWORD *)(v462 + 16) = v466;
    v467 = v465 + 1;
  }
  v468 = _mm_load_si128((const __m128i *)&xmmword_48F490);
  *(_QWORD *)(v462 + 24) = v467;
  v469 = &v466[40 * v465];
  *(_DWORD *)v469 = 0;
  v470 = (const void *)xmmword_4C7AA0;
  *(__m128i *)(v469 + 8) = v468;
  v471 = DWORD2(xmmword_4C7AA0);
  v472 = (char *)xmmword_4C7AB0;
  v473 = BYTE12(xmmword_4C7AA0);
  v474 = BYTE13(xmmword_4C7AA0);
  *((_QWORD *)v469 + 4) = v464;
  *((_QWORD *)v469 + 3) = 8;
  sub_411320(*(char ***)(v462 + 8), v470, v471, v474, v473, v472, *((__int64 *)&xmmword_4C7AB0 + 1));
  v475 = *(_QWORD *)(a1 + 664);
  v476 = BYTE13(xmmword_4C7A80);
  switch ( v476 )
  {
    case 2:
      v477 = 4;
      break;
    case 7:
      v477 = 8;
      break;
    case 1:
      v477 = 2;
      break;
    default:
      if ( !byte_4C94E1 )
        goto LABEL_292;
      goto LABEL_354;
  }
  v478 = *(_QWORD *)(v475 + 24);
  v479 = *(char **)(v475 + 16);
  v480 = v478 + 1;
  if ( *(_QWORD *)(v475 + 32) < (unsigned __int64)(v478 + 1) )
  {
    v479 = (char *)sub_481540(v475 + 16, *(void **)(v475 + 16), v478 + 1, 0x28u);
    v478 = *(_QWORD *)(v475 + 24);
    *(_QWORD *)(v475 + 16) = v479;
    v480 = v478 + 1;
  }
  v481 = _mm_load_si128((const __m128i *)&xmmword_48F4A0);
  *(_QWORD *)(v475 + 24) = v480;
  v482 = &v479[40 * v478];
  *(_DWORD *)v482 = 0;
  v483 = (const void *)xmmword_4C7A80;
  *(__m128i *)(v482 + 8) = v481;
  v484 = (char *)xmmword_4C7A90;
  v485 = BYTE12(xmmword_4C7A80);
  v486 = BYTE13(xmmword_4C7A80);
  v487 = DWORD2(xmmword_4C7A80);
  *((_QWORD *)v482 + 3) = 8;
  *((_QWORD *)v482 + 4) = v477;
  sub_411320(*(char ***)(v475 + 8), v483, v487, v486, v485, v484, *((__int64 *)&xmmword_4C7A90 + 1));
LABEL_111:
  v235 = *(_QWORD *)(a1 + 664);
  switch ( BYTE5(qword_4C7948[0]) )
  {
    case 2:
      v236 = 4;
      break;
    case 7:
      v236 = 8;
      break;
    case 1:
      v236 = 2;
      break;
    default:
      if ( byte_4C94E1 )
        goto LABEL_354;
      goto LABEL_292;
  }
  v237 = *(_QWORD *)(v235 + 24);
  v238 = *(char **)(v235 + 16);
  v239 = v237 + 1;
  v240 = v237;
  if ( *(_QWORD *)(v235 + 32) < (unsigned __int64)(v237 + 1) )
  {
    v492 = v236;
    v299 = (char *)sub_481540(v235 + 16, v238, v239, 0x28u);
    v240 = *(_QWORD *)(v235 + 24);
    v236 = v492;
    *(_QWORD *)(v235 + 16) = v299;
    v238 = v299;
    v239 = v240 + 1;
  }
  v241 = _mm_load_si128((const __m128i *)&xmmword_48F4E0);
  *(_QWORD *)(v235 + 24) = v239;
  v242 = &v238[40 * v240];
  *(_DWORD *)v242 = 0;
  v243 = off_4C7940;
  *(__m128i *)(v242 + 8) = v241;
  v244 = (char *)qword_4C7948[1];
  v245 = BYTE5(qword_4C7948[0]);
  *((_QWORD *)v242 + 4) = v236;
  v246 = qword_4C7948[0];
  *((_QWORD *)v242 + 3) = 8;
  sub_411320(*(char ***)(v235 + 8), v243, v246, v245, SBYTE4(qword_4C7948[0]), v244, qword_4C7948[2]);
  *(_DWORD *)(a1 + 920) = v237;
  v247 = &off_4C7520;
  v248 = v117 != 8;
  v249 = 0;
  do
  {
    v250 = *(_QWORD *)(a1 + 664);
    v251 = *(_QWORD *)(v250 + 24);
    v252 = *(char **)(v250 + 16);
    v253 = v251 + 1;
    if ( *(_QWORD *)(v250 + 32) < (unsigned __int64)(v251 + 1) )
    {
      v275 = (char *)sub_481540(v250 + 16, v252, v251 + 1, 0x28u);
      v251 = *(_QWORD *)(v250 + 24);
      *(_QWORD *)(v250 + 16) = v275;
      v252 = v275;
      v253 = v251 + 1;
    }
    *(_QWORD *)(v250 + 24) = v253;
    ++v249;
    v254 = &v252[40 * v251];
    *((_QWORD *)v254 + 2) = v4;
    v4 += 16;
    *(_DWORD *)v254 = 2;
    *((_QWORD *)v254 + 1) = -1;
    *((_QWORD *)v254 + 3) = 16;
    *((_QWORD *)v254 + 4) = 16;
    sub_411320(
      *(char ***)(v250 + 8),
      *v247,
      *((_DWORD *)v247 + 2),
      *((_BYTE *)v247 + 13),
      *((_BYTE *)v247 + 12),
      v247[2],
      (__int64)v247[3]);
    if ( v249 == 16 )
      break;
    v247 += 4;
  }
  while ( v249 <= 7 || !v248 );
  v255 = *(_QWORD *)(a1 + 664);
  switch ( BYTE5(qword_4C7508[0]) )
  {
    case 2:
      v256 = 4;
      break;
    case 7:
      v256 = 8;
      break;
    case 1:
      v256 = 2;
      break;
    default:
LABEL_293:
      if ( byte_4C94E1 )
        goto LABEL_354;
LABEL_292:
      sub_481AC0(1798);
  }
  v257 = *(_QWORD *)(v255 + 24);
  v258 = *(char **)(v255 + 16);
  v259 = v257 + 1;
  if ( *(_QWORD *)(v255 + 32) < (unsigned __int64)(v257 + 1) )
  {
    v293 = (char *)sub_481540(v255 + 16, v258, v257 + 1, 0x28u);
    v257 = *(_QWORD *)(v255 + 24);
    *(_QWORD *)(v255 + 16) = v293;
    v258 = v293;
    v259 = v257 + 1;
  }
  v260 = _mm_load_si128((const __m128i *)&xmmword_48F4F0);
  *(_QWORD *)(v255 + 24) = v259;
  v261 = &v258[40 * v257];
  *(_DWORD *)v261 = 0;
  v262 = off_4C7500;
  *(__m128i *)(v261 + 8) = v260;
  v263 = BYTE4(qword_4C7508[0]);
  v264 = (char *)qword_4C7508[1];
  v265 = BYTE5(qword_4C7508[0]);
  v266 = qword_4C7508[0];
  *((_QWORD *)v261 + 4) = v256;
  v267 = 352;
  *((_QWORD *)v261 + 3) = 4;
  sub_411320(*(char ***)(v255 + 8), v262, v266, v265, v263, v264, qword_4C7508[2]);
  v268 = &off_4C7400;
  do
  {
    v270 = *(_QWORD *)(a1 + 664);
    v271 = *(_QWORD *)(v270 + 24);
    v272 = *(char **)(v270 + 16);
    v273 = v271 + 1;
    if ( *(_QWORD *)(v270 + 32) < (unsigned __int64)(v271 + 1) )
    {
      v274 = (char *)sub_481540(v270 + 16, v272, v271 + 1, 0x28u);
      v271 = *(_QWORD *)(v270 + 24);
      *(_QWORD *)(v270 + 16) = v274;
      v272 = v274;
      v273 = v271 + 1;
    }
    *(_QWORD *)(v270 + 24) = v273;
    v268 += 4;
    v269 = &v272[40 * v271];
    *((_QWORD *)v269 + 2) = v267;
    v267 += 16;
    *(_DWORD *)v269 = 2;
    *((_QWORD *)v269 + 1) = -1;
    *((_QWORD *)v269 + 3) = 8;
    *((_QWORD *)v269 + 4) = 8;
    sub_411320(
      *(char ***)(v270 + 8),
      *(v268 - 4),
      *((_DWORD *)v268 - 6),
      *((_BYTE *)v268 - 19),
      *((_BYTE *)v268 - 20),
      (char *)*(v268 - 2),
      (__int64)*(v268 - 1));
  }
  while ( v267 != 480 );
  v276 = &off_4C7200;
  v277 = 0;
  do
  {
    v278 = *(_QWORD *)(a1 + 664);
    v279 = *(_QWORD *)(v278 + 24);
    v280 = *(char **)(v278 + 16);
    v281 = v279 + 1;
    if ( *(_QWORD *)(v278 + 32) < (unsigned __int64)(v279 + 1) )
    {
      v285 = (char *)sub_481540(v278 + 16, v280, v279 + 1, 0x28u);
      v279 = *(_QWORD *)(v278 + 24);
      *(_QWORD *)(v278 + 16) = v285;
      v280 = v285;
      v281 = v279 + 1;
    }
    v282 = _mm_load_si128(&v491);
    *(_QWORD *)(v278 + 24) = v281;
    v283 = (__m128i *)&v280[40 * v279];
    v283[2].m128i_i64[0] = v277++;
    v283->m128i_i32[0] = 3;
    v283->m128i_i64[1] = -1;
    v283[1] = v282;
    sub_411320(
      *(char ***)(v278 + 8),
      *v276,
      *((_DWORD *)v276 + 2),
      *((_BYTE *)v276 + 13),
      *((_BYTE *)v276 + 12),
      v276[2],
      (__int64)v276[3]);
    result = v490;
    if ( v277 == 16 )
      break;
    v276 += 4;
  }
  while ( v277 <= 7 || !v248 );
  return result;
}
// 418F38: variable 'v490' is possibly undefined
// 48F350: using guessed type __int128 xmmword_48F350;
// 48F360: using guessed type __int128 xmmword_48F360;
// 48F370: using guessed type __int128 xmmword_48F370;
// 48F380: using guessed type __int128 xmmword_48F380;
// 48F390: using guessed type __int128 xmmword_48F390;
// 48F3A0: using guessed type __int128 xmmword_48F3A0;
// 48F3B0: using guessed type __int128 xmmword_48F3B0;
// 48F3C0: using guessed type __int128 xmmword_48F3C0;
// 48F3D0: using guessed type __int128 xmmword_48F3D0;
// 48F3E0: using guessed type __int128 xmmword_48F3E0;
// 48F3F0: using guessed type __int128 xmmword_48F3F0;
// 48F400: using guessed type __int128 xmmword_48F400;
// 48F410: using guessed type __int128 xmmword_48F410;
// 48F420: using guessed type __int128 xmmword_48F420;
// 48F430: using guessed type __int128 xmmword_48F430;
// 48F440: using guessed type __int128 xmmword_48F440;
// 48F450: using guessed type __int128 xmmword_48F450;
// 48F460: using guessed type __int128 xmmword_48F460;
// 48F470: using guessed type __int128 xmmword_48F470;
// 48F480: using guessed type __int128 xmmword_48F480;
// 48F490: using guessed type __int128 xmmword_48F490;
// 48F4A0: using guessed type __int128 xmmword_48F4A0;
// 48F4B0: using guessed type __int128 xmmword_48F4B0;
// 48F4C0: using guessed type __int128 xmmword_48F4C0;
// 48F4D0: using guessed type __int128 xmmword_48F4D0;
// 48F4E0: using guessed type __int128 xmmword_48F4E0;
// 48F4F0: using guessed type __int128 xmmword_48F4F0;
// 4C2290: using guessed type __int64 (__fastcall *off_4C2290[2])();
// 4C2298: using guessed type __int64 (__fastcall *off_4C2298)();
// 4C7200: using guessed type char *off_4C7200;
// 4C7400: using guessed type _UNKNOWN *off_4C7400;
// 4C7500: using guessed type char *off_4C7500;
// 4C7508: using guessed type __int64[3];
// 4C7520: using guessed type char *off_4C7520;
// 4C7720: using guessed type _UNKNOWN *off_4C7720;
// 4C7728: using guessed type __int64[3];
// 4C7740: using guessed type _UNKNOWN *off_4C7740;
// 4C7748: using guessed type __int64[3];
// 4C7760: using guessed type char *off_4C7760;
// 4C7768: using guessed type __int64[3];
// 4C7780: using guessed type _UNKNOWN *off_4C7780;
// 4C7788: using guessed type __int64[3];
// 4C77A0: using guessed type _UNKNOWN *off_4C77A0;
// 4C77A8: using guessed type __int64[3];
// 4C77C0: using guessed type _UNKNOWN *off_4C77C0;
// 4C77C8: using guessed type __int64[3];
// 4C77E0: using guessed type char *off_4C77E0;
// 4C77E8: using guessed type __int64[3];
// 4C7800: using guessed type char *off_4C7800;
// 4C7808: using guessed type __int64[3];
// 4C7820: using guessed type char *off_4C7820;
// 4C7828: using guessed type __int64[3];
// 4C7840: using guessed type char *off_4C7840;
// 4C7940: using guessed type char *off_4C7940;
// 4C7948: using guessed type __int64[3];
// 4C7960: using guessed type __int128 xmmword_4C7960;
// 4C7970: using guessed type __int128 xmmword_4C7970;
// 4C7980: using guessed type __int128 xmmword_4C7980;
// 4C7990: using guessed type __int128 xmmword_4C7990;
// 4C79A0: using guessed type __int128 xmmword_4C79A0;
// 4C79B0: using guessed type __int128 xmmword_4C79B0;
// 4C79C0: using guessed type __int128 xmmword_4C79C0;
// 4C79D0: using guessed type __int128 xmmword_4C79D0;
// 4C79E0: using guessed type __int128 xmmword_4C79E0;
// 4C79F0: using guessed type __int128 xmmword_4C79F0;
// 4C7A00: using guessed type __int128 xmmword_4C7A00;
// 4C7A10: using guessed type __int128 xmmword_4C7A10;
// 4C7A20: using guessed type __int128 xmmword_4C7A20;
// 4C7A30: using guessed type __int128 xmmword_4C7A30;
// 4C7A40: using guessed type __int128 xmmword_4C7A40;
// 4C7A50: using guessed type __int128 xmmword_4C7A50;
// 4C7A60: using guessed type __int128 xmmword_4C7A60;
// 4C7A70: using guessed type __int128 xmmword_4C7A70;
// 4C7A80: using guessed type __int128 xmmword_4C7A80;
// 4C7A90: using guessed type __int128 xmmword_4C7A90;
// 4C7AA0: using guessed type __int128 xmmword_4C7AA0;
// 4C7AB0: using guessed type __int128 xmmword_4C7AB0;
// 4C7AC0: using guessed type __int128 xmmword_4C7AC0;
// 4C7AD0: using guessed type __int128 xmmword_4C7AD0;
// 4C7AE0: using guessed type __int128 xmmword_4C7AE0;
// 4C7AF0: using guessed type __int128 xmmword_4C7AF0;
// 4C7B00: using guessed type __int128 xmmword_4C7B00;
// 4C7B10: using guessed type __int128 xmmword_4C7B10;
// 4C7B20: using guessed type __int128 xmmword_4C7B20;
// 4C7B30: using guessed type __int128 xmmword_4C7B30;
// 4C7B40: using guessed type __int128 xmmword_4C7B40;
// 4C7B50: using guessed type __int128 xmmword_4C7B50;
// 4C7B60: using guessed type __int128 xmmword_4C7B60;
// 4C7B70: using guessed type __int128 xmmword_4C7B70;
// 4C7B80: using guessed type __int128 xmmword_4C7B80;
// 4C7B90: using guessed type __int128 xmmword_4C7B90;
// 4C7BA0: using guessed type __int128 xmmword_4C7BA0;
// 4C7BB0: using guessed type __int128 xmmword_4C7BB0;
// 4C7BC0: using guessed type __int128 xmmword_4C7BC0;
// 4C7BD0: using guessed type __int128 xmmword_4C7BD0;
// 4C7BE0: using guessed type __int128 xmmword_4C7BE0;
// 4C7BF0: using guessed type __int128 xmmword_4C7BF0;
// 4C7C00: using guessed type __int128 xmmword_4C7C00;
// 4C7C10: using guessed type __int128 xmmword_4C7C10;
// 4C7C20: using guessed type __int128 xmmword_4C7C20;
// 4C7C30: using guessed type __int128 xmmword_4C7C30;
// 4C7C40: using guessed type __int128 xmmword_4C7C40;
// 4C7C60: using guessed type __int128 xmmword_4C7C60;
// 4C7C80: using guessed type __int128 xmmword_4C7C80;
// 4C94E1: using guessed type char byte_4C94E1;
