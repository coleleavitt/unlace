/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86C84
// Address: 0x00086C84

//----- (00086C84) --------------------------------------------------------
int __fastcall sub_86C84(int result, int a2, int a3)
{
  int v3; // r8
  int v4; // r3
  int v5; // r3
  int v6; // r5
  int v7; // r2
  int v9; // r7
  size_t v10; // r4
  _DWORD *v11; // r3
  _BYTE *v12; // r3
  int v13; // r2
  int v14; // r2
  unsigned __int8 *v15; // r3
  int v16; // r1
  _DWORD *v17; // r3
  int v18; // r3
  char *v19; // r7
  int v20; // r1
  char v21; // r10
  char v22; // t1
  int v23; // r2
  void (__fastcall *v24)(size_t, int, int); // r3
  int v25; // r7
  __int64 v26; // kr08_8
  int v27; // r3
  int v28; // r3
  char *v29; // r7
  int v30; // r1
  char v31; // r10
  char v32; // t1
  int v33; // r2
  void (__fastcall *v34)(size_t, int, int); // r3
  int v35; // r7
  __int64 v36; // kr18_8
  int v37; // r3
  int v38; // r3
  int v39; // r1
  int v40; // r5
  int v41; // r11
  int v42; // r3
  const char *v43; // r9
  int v44; // r1
  char v45; // r8
  char v46; // t1
  int v47; // r2
  int (__fastcall *v48)(size_t, int, int); // r3
  bool v49; // zf
  int v50; // r3
  char *v51; // r7
  int v52; // r1
  char v53; // r10
  char v54; // t1
  int v55; // r2
  void (__fastcall *v56)(size_t, int, int); // r3
  int v57; // r3
  char *v58; // r7
  int v59; // r1
  char v60; // r10
  char v61; // t1
  int v62; // r2
  void (__fastcall *v63)(size_t, int, int); // r3
  int v64; // r3
  char *v65; // r6
  int v66; // r1
  char v67; // r9
  char v68; // t1
  int v69; // r2
  void (__fastcall *v70)(size_t, int, int); // r3
  char *v71; // r6
  size_t v72; // r0
  int v73; // r3
  char *v74; // r7
  int v75; // r1
  char v76; // r9
  char v77; // t1
  int v78; // r2
  void (__fastcall *v79)(size_t, int, int); // r3
  int v80; // r3
  int v81; // r1
  int v82; // r3
  char *v83; // r7
  int v84; // r1
  char v85; // r10
  char v86; // t1
  int v87; // r2
  void (__fastcall *v88)(size_t, int, int); // r3
  int v89; // r2
  int v90; // r7
  const char *v91; // r9
  int v92; // r3
  int v93; // r1
  char v94; // r6
  char v95; // t1
  int v96; // r2
  void (__fastcall *v97)(size_t, int, int); // r3
  char *v98; // r6
  size_t v99; // r0
  int v100; // r3
  char *v101; // r7
  int v102; // r1
  char v103; // r9
  char v104; // t1
  int v105; // r2
  void (__fastcall *v106)(size_t, int, int); // r3
  int v107; // r3
  int v108; // r3
  char *v109; // r7
  int v110; // r1
  char v111; // r10
  char v112; // t1
  int v113; // r2
  void (__fastcall *v114)(size_t, int, int); // r3
  int v115; // r3
  char *v116; // r7
  int v117; // r1
  char v118; // r10
  char v119; // t1
  int v120; // r2
  void (__fastcall *v121)(size_t, int, int); // r3
  char *v122; // r6
  int v123; // r3
  char *v124; // r7
  int v125; // r1
  char v126; // r9
  char v127; // t1
  int v128; // r2
  int (__fastcall *v129)(size_t, int, int); // r3
  int v130; // r7
  char v131; // r8
  __int64 v132; // kr78_8
  int v133; // r3
  int v134; // r3
  char *v135; // r7
  int v136; // r1
  char v137; // r10
  char v138; // t1
  int v139; // r2
  void (__fastcall *v140)(size_t, int, int); // r3
  int v141; // r7
  __int64 v142; // kr88_8
  int v143; // r3
  int v144; // r3
  char *v145; // r7
  int v146; // r1
  char v147; // r10
  char v148; // t1
  int v149; // r2
  void (__fastcall *v150)(size_t, int, int); // r3
  _DWORD *v151; // r3
  unsigned int v152; // r8
  int v153; // r7
  __int64 v154; // kr98_8
  int v155; // r3
  int v156; // r3
  int v157; // r3
  int v158; // r2
  int v159; // r3
  unsigned int *v160; // r8
  int v161; // r10
  int v162; // r7
  __int64 v163; // krA8_8
  int v164; // r3
  int v165; // r7
  __int64 v166; // krB0_8
  int v167; // r3
  int v168; // r3
  char *v169; // r7
  int v170; // r1
  char v171; // r10
  char v172; // t1
  int v173; // r2
  void (__fastcall *v174)(size_t, int, int); // r3
  int v175; // r1
  _DWORD *v176; // r2
  int v177; // r3
  char *v178; // r7
  int v179; // r1
  char v180; // r10
  char v181; // t1
  int v182; // r2
  void (__fastcall *v183)(size_t, int, int); // r3
  int v184; // r10
  int v185; // r3
  int v186; // r7
  char *v187; // r6
  int v188; // r1
  char v189; // r11
  char v190; // t1
  int v191; // r2
  int (__fastcall *v192)(size_t, int, int); // r3
  unsigned __int8 *v193; // r6
  int v194; // r3
  int v195; // r2
  int v196; // r3
  unsigned __int8 *v197; // r6
  unsigned __int8 *v198; // r7
  int v199; // r1
  char v200; // r9
  char v201; // t1
  int v202; // r2
  int (__fastcall *v203)(size_t, int, int); // r3
  __int64 v204; // krD8_8
  int v205; // r7
  __int64 v206; // krE0_8
  int v207; // r3
  int v208; // r7
  __int64 v209; // krE8_8
  int v210; // r3
  int v211; // r2
  int v212; // r7
  __int64 v213; // krF0_8
  int v214; // r3
  int v215; // r3
  char *v216; // r6
  int v217; // r1
  char v218; // r7
  char v219; // t1
  int v220; // r2
  int (__fastcall *v221)(size_t, int, int); // r3
  int v222; // r1
  int v223; // r2
  int v224; // r2
  int v225; // r2
  unsigned int v226; // r7
  int v227; // r1
  int v228; // r3
  int v229; // r10
  const char *v230; // r11
  unsigned int v231; // r1
  unsigned int v232; // r9
  char v233; // r8
  char v234; // t1
  int v235; // r1
  int v236; // r6
  int v237; // r2
  int v238; // r9
  size_t v239; // r3
  unsigned int v240; // r8
  int *v241; // r7
  char *v242; // r4
  size_t v243; // lr
  int v244; // r10
  _BYTE *v245; // r11
  int v247; // r1
  int v248; // r2
  int v249; // r3
  int v250; // r3
  char *v251; // r8
  _DWORD *v252; // r2
  int v253; // r3
  char *v254; // r7
  int v255; // r1
  char v256; // r10
  char v257; // t1
  int v258; // r2
  void (__fastcall *v259)(size_t, int, int); // r3
  int v260; // r3
  char *v261; // r7
  int v262; // r1
  char v263; // r10
  char v264; // t1
  int v265; // r2
  void (__fastcall *v266)(size_t, int, int); // r3
  int v267; // r3
  char *v268; // r7
  int v269; // r1
  char v270; // r10
  char v271; // t1
  int v272; // r2
  void (__fastcall *v273)(size_t, int, int); // r3
  int v274; // r3
  char *v275; // r7
  int v276; // r1
  char v277; // r10
  char v278; // t1
  int v279; // r2
  void (__fastcall *v280)(size_t, int, int); // r3
  int v281; // r3
  char *v282; // r7
  int v283; // r1
  char v284; // r10
  char v285; // t1
  int v286; // r2
  void (__fastcall *v287)(size_t, int, int); // r3
  int v288; // r3
  char *v289; // r7
  int v290; // r1
  char v291; // r10
  char v292; // t1
  int v293; // r2
  void (__fastcall *v294)(size_t, int, int); // r3
  int v295; // r3
  char *v296; // r7
  int v297; // r1
  char v298; // r10
  char v299; // t1
  int v300; // r2
  void (__fastcall *v301)(size_t, int, int); // r3
  int v302; // r3
  char *v303; // r7
  int v304; // r1
  char v305; // r10
  char v306; // t1
  int v307; // r2
  void (__fastcall *v308)(size_t, int, int); // r3
  int v309; // r3
  char *v310; // r7
  int v311; // r1
  char v312; // r10
  char v313; // t1
  int v314; // r2
  void (__fastcall *v315)(size_t, int, int); // r3
  int v316; // r3
  char *v317; // r7
  int v318; // r1
  char v319; // r10
  char v320; // t1
  int v321; // r2
  void (__fastcall *v322)(size_t, int, int); // r3
  _DWORD *v323; // r9
  int v324; // r3
  int **v325; // lr
  int v326; // r1
  int v327; // r2
  int v328; // r1
  int v329; // r1
  __int64 v330; // kr150_8
  int v331; // r3
  int v332; // r7
  int v333; // r1
  char v334; // r6
  char v335; // t1
  int v336; // r2
  int (__fastcall *v337)(size_t, int, int); // r3
  unsigned int v338; // r8
  int v339; // r2
  int **v340; // r3
  int v341; // r2
  __int64 v342; // kr160_8
  int v343; // r3
  int v344; // r6
  int v345; // r1
  char v346; // r9
  char v347; // t1
  int v348; // r2
  int (__fastcall *v349)(size_t, int, int); // r3
  int v350; // r3
  char *v351; // r7
  int v352; // r1
  char v353; // r10
  char v354; // t1
  int v355; // r2
  void (__fastcall *v356)(size_t, int, int); // r3
  int v357; // r3
  char *v358; // r7
  int v359; // r1
  char v360; // r10
  char v361; // t1
  int v362; // r2
  void (__fastcall *v363)(size_t, int, int); // r3
  int v364; // r3
  char *v365; // r7
  int v366; // r1
  char v367; // r10
  char v368; // t1
  int v369; // r2
  void (__fastcall *v370)(size_t, int, int); // r3
  int v371; // r3
  char *v372; // r7
  int v373; // r1
  char v374; // r10
  char v375; // t1
  int v376; // r2
  void (__fastcall *v377)(size_t, int, int); // r3
  int v378; // r7
  __int64 v379; // kr190_8
  int v380; // r3
  int v381; // r3
  char *v382; // r7
  int v383; // r1
  char v384; // r10
  char v385; // t1
  int v386; // r2
  void (__fastcall *v387)(size_t, int, int); // r3
  int v388; // r3
  char *v389; // r7
  int v390; // r1
  char v391; // r10
  char v392; // t1
  int v393; // r2
  void (__fastcall *v394)(size_t, int, int); // r3
  int v395; // r3
  char *v396; // r7
  int v397; // r1
  char v398; // r10
  char v399; // t1
  int v400; // r2
  void (__fastcall *v401)(size_t, int, int); // r3
  int v402; // r3
  unsigned int *v403; // r8
  int v404; // r7
  char *v405; // r2
  size_t v406; // r11
  int v407; // r3
  int v408; // r4
  unsigned int *v409; // r1
  unsigned int v410; // r10
  int v411; // r1
  int v412; // r2
  int v413; // r2
  int v414; // r7
  int v415; // r7
  __int64 v416; // kr1B0_8
  int v417; // r3
  _DWORD *v418; // r7
  unsigned __int8 *v419; // r7
  int v420; // r1
  int v421; // r3
  int v422; // r8
  unsigned __int8 *v423; // r7
  int v424; // r1
  char v425; // r6
  char v426; // t1
  int v427; // r2
  int (__fastcall *v428)(size_t, int, int); // r3
  int v429; // r2
  _DWORD *v430; // r7
  int v431; // r8
  int v432; // r3
  char *v433; // r6
  int v434; // r1
  char v435; // r7
  char v436; // t1
  int v437; // r2
  void (__fastcall *v438)(size_t, int, int); // r3
  char *v439; // r6
  int v440; // r3
  char *v441; // r9
  int v442; // r1
  char v443; // r7
  char v444; // t1
  int v445; // r2
  int (__fastcall *v446)(size_t, int, int); // r3
  int v447; // r7
  __int64 v448; // kr1D0_8
  int v449; // r3
  int v450; // r9
  int v451; // r8
  int v452; // r7
  int v453; // r7
  __int64 v454; // kr1D8_8
  int v455; // r3
  int v456; // r7
  __int64 v457; // kr1E0_8
  int v458; // r3
  __int64 v459; // kr1E8_8
  int v460; // r3
  int v461; // r6
  int v462; // r1
  char v463; // r8
  char v464; // t1
  int v465; // r2
  int (__fastcall *v466)(size_t, int, int); // r3
  __int16 v467; // r8
  char *v468; // r6
  int v469; // r1
  char v470; // r7
  char v471; // t1
  int v472; // r2
  int (__fastcall *v473)(size_t, int, int); // r3
  int v474; // r3
  char *v475; // r6
  int v476; // r1
  char v477; // r7
  char v478; // t1
  int v479; // r2
  void (__fastcall *v480)(size_t, int, int); // r3
  char *v481; // r6
  int v482; // r3
  char *v483; // r9
  int v484; // r1
  char v485; // r7
  char v486; // t1
  int v487; // r2
  int (__fastcall *v488)(size_t, int, int); // r3
  char *v489; // r6
  int v490; // r1
  char v491; // r7
  char v492; // t1
  int v493; // r2
  int (__fastcall *v494)(size_t, int, int); // r3
  unsigned __int8 *v495; // r6
  int v496; // r1
  int v497; // r2
  int (__fastcall *v498)(size_t, int, int); // r3
  int v499; // r2
  int v500; // r9
  unsigned __int8 *v501; // r1
  int v502; // r2
  unsigned __int8 *v503; // r10
  int v504; // r3
  int v505; // t1
  unsigned int v506; // lr
  char v507; // r9
  int (__fastcall *v508)(size_t, int, _DWORD); // r3
  int v509; // r3
  int v510; // r2
  int v511; // r3
  const char *v512; // r9
  int v513; // r1
  char v514; // r8
  char v515; // t1
  int v516; // r2
  void (__fastcall *v517)(size_t, int, int); // r3
  int v518; // r7
  __int64 v519; // kr220_8
  int v520; // r3
  __int64 v521; // kr228_8
  _DWORD *v522; // r1
  __int64 v523; // kr230_8
  _BYTE *v524; // r3
  __int64 v525; // kr238_8
  int v526; // r2
  unsigned __int8 *v527; // r3
  int v528; // r3
  int v529; // r7
  __int64 v530; // kr240_8
  int v531; // r3
  int v532; // r7
  __int64 v533; // kr248_8
  int v534; // r3
  int v535; // r7
  __int64 v536; // kr250_8
  int v537; // r3
  int v538; // r7
  __int64 v539; // kr258_8
  int v540; // r3
  unsigned int v541; // r2
  unsigned __int8 *v542; // r9
  int v543; // r3
  int v544; // r3
  _DWORD *v545; // r0
  int v546; // r6
  _DWORD *v547; // r7
  int v548; // r3
  _DWORD *v549; // r0
  int v550; // r3
  int v551; // r3
  int v552; // r3
  int v553; // r3
  int v554; // r3
  char *v555; // r7
  int v556; // r1
  char v557; // r8
  char v558; // t1
  int v559; // r2
  void (__fastcall *v560)(size_t, int, int); // r3
  __int64 v561; // kr268_8
  int v562; // r3
  int v563; // r2
  int v564; // r7
  __int64 v565; // kr270_8
  int v566; // r3
  int v567; // r7
  __int64 v568; // kr278_8
  int v569; // r3
  int v570; // r7
  __int64 v571; // kr280_8
  int v572; // r3
  int v573; // r7
  void (__fastcall *v574)(size_t, int, _DWORD); // r3
  int v575; // r3
  int v576; // r7
  __int64 v577; // kr288_8
  int v578; // r3
  int v579; // r1
  _DWORD *v580; // r8
  unsigned int *v581; // r9
  char *v582; // r11
  char *v583; // r12
  char *v584; // lr
  _DWORD *v585; // r10
  int v586; // r0
  int v587; // r1
  int v588; // r2
  int v589; // r3
  int v590; // r7
  int v591; // r3
  int v592; // r2
  void (__fastcall *v593)(size_t, int, int); // r3
  int v594; // r2
  _DWORD *v595; // r2
  int v596; // r3
  _DWORD *v597; // r12
  _DWORD *v598; // r11
  int v599; // lr
  _DWORD *v600; // r10
  _DWORD *v601; // lr
  _DWORD *v602; // r1
  int v603; // r12
  int v604; // r3
  int v605; // r2
  _DWORD *v606; // r3
  int v607; // r7
  int v608; // r6
  int v609; // r7
  void (__fastcall *v610)(size_t, int, _DWORD); // r3
  int v611; // r3
  int *v612; // r3
  _BOOL4 v613; // r2
  int v614; // r1
  int v615; // r3
  int v616; // r7
  __int64 v617; // kr2A8_8
  int v618; // r3
  int v619; // r2
  int v620; // r7
  int v621; // r3
  int v622; // r7
  __int64 v623; // kr2B0_8
  int v624; // r3
  int v625; // r7
  __int64 v626; // kr2B8_8
  int v627; // r3
  int v628; // r8
  int v629; // r7
  void (__fastcall *v630)(size_t, int, _DWORD); // r3
  int v631; // r3
  int v632; // r7
  __int64 v633; // kr2C0_8
  int v634; // r3
  int v635; // r7
  __int64 v636; // kr2C8_8
  int v637; // r3
  int v638; // r7
  __int64 v639; // kr2D0_8
  int v640; // r3
  int v641; // r7
  void (__fastcall *v642)(size_t, int, _DWORD); // r3
  int v643; // r3
  int v644; // r7
  __int64 v645; // kr2D8_8
  int v646; // r3
  int v647; // [sp+4h] [bp-84h]
  int v648; // [sp+8h] [bp-80h]
  int v649; // [sp+8h] [bp-80h]
  int v650; // [sp+Ch] [bp-7Ch]
  int v651; // [sp+Ch] [bp-7Ch]
  int v652; // [sp+10h] [bp-78h] BYREF
  int v653; // [sp+14h] [bp-74h]
  _DWORD v654[2]; // [sp+18h] [bp-70h] BYREF
  char s[4]; // [sp+20h] [bp-68h] BYREF
  _DWORD *v656; // [sp+24h] [bp-64h]
  int v657; // [sp+28h] [bp-60h]
  int v658; // [sp+2Ch] [bp-5Ch]
  _BYTE v659[68]; // [sp+30h] [bp-58h] BYREF
  int v660; // [sp+74h] [bp-14h]

  if ( !a3 || (v4 = *(_DWORD *)(a3 + 4), v4 > 1) )
  {
    *(_DWORD *)(result + 280) = 1;
    return result;
  }
  v660 = v3;
  v5 = v4 + 1;
  v6 = a3;
  v7 = *(_DWORD *)(result + 296);
  *(_DWORD *)(v6 + 4) = v5;
  v9 = *(_DWORD *)(result + 280);
  v10 = result;
  v652 = v6;
  v653 = v7;
  *(_DWORD *)(result + 296) = &v652;
  if ( v9 )
    goto LABEL_20;
  result = *(_DWORD *)v6;
  switch ( *(_DWORD *)v6 )
  {
    case 0:
      v419 = *(unsigned __int8 **)(v6 + 8);
      if ( (a2 & 4) == 0 )
      {
        v420 = *(_DWORD *)(v6 + 12);
        if ( v420 )
        {
          v421 = *(_DWORD *)(v10 + 256);
          v422 = (int)&v419[v420 - 1];
          v423 = v419 - 1;
          do
          {
            v424 = v421;
            result = v10;
            v426 = *++v423;
            v425 = v426;
            if ( v421 == 255 )
            {
              v427 = *(_DWORD *)(v10 + 268);
              v428 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
              *(_BYTE *)(v10 + 255) = 0;
              result = v428(v10, 255, v427);
              v421 = 1;
              v424 = 0;
              ++*(_DWORD *)(v10 + 292);
            }
            else
            {
              ++v421;
            }
            *(_DWORD *)(v10 + 256) = v421;
            *(_BYTE *)(v10 + v424) = v425;
            *(_BYTE *)(v10 + 260) = v425;
          }
          while ( (unsigned __int8 *)v422 != v423 );
          v7 = v653;
          v5 = *(_DWORD *)(v6 + 4);
        }
        goto LABEL_20;
      }
      v495 = &v419[*(_DWORD *)(v6 + 12)];
      if ( v495 <= v419 )
        goto LABEL_20;
LABEL_486:
      v500 = *v419;
      if ( v495 - v419 <= 3 || v500 != 95 || v419[1] != 95 || v419[2] != 85 )
      {
LABEL_480:
        v496 = *(_DWORD *)(v10 + 256);
        goto LABEL_481;
      }
      v501 = v419 + 3;
      for ( result = 0; ; result = v502 + 16 * result )
      {
        v503 = v501;
        if ( v495 <= v501 )
          goto LABEL_480;
        v505 = *v501++;
        v504 = v505;
        v502 = v505 - 48;
        v506 = v505 - 65;
        if ( (unsigned __int8)(v505 - 48) > 9u )
        {
          v502 = v504 - 87;
          if ( v506 <= 5 )
          {
            v502 = v504 - 55;
          }
          else if ( (unsigned int)(v504 - 97) > 5 )
          {
            v496 = *(_DWORD *)(v10 + 256);
            if ( (unsigned int)result <= 0xFF && v504 == 95 )
            {
              v507 = result;
              if ( v496 == 255 )
              {
                v508 = *(int (__fastcall **)(size_t, int, _DWORD))(v10 + 264);
                *(_BYTE *)(v10 + 255) = 0;
                result = v508(v10, 255, *(_DWORD *)(v10 + 268));
                v509 = *(_DWORD *)(v10 + 292);
                v496 = 0;
                *(_DWORD *)(v10 + 256) = 0;
                *(_DWORD *)(v10 + 292) = v509 + 1;
              }
              v419 = v503;
              *(_DWORD *)(v10 + 256) = v496 + 1;
              *(_BYTE *)(v10 + v496) = v507;
              *(_BYTE *)(v10 + 260) = v507;
              goto LABEL_485;
            }
LABEL_481:
            if ( v496 == 255 )
            {
              v498 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
              v499 = *(_DWORD *)(v10 + 268);
              *(_BYTE *)(v10 + 255) = 0;
              result = v498(v10, 255, v499);
              v497 = 1;
              v496 = 0;
              ++*(_DWORD *)(v10 + 292);
            }
            else
            {
              v497 = v496 + 1;
            }
            *(_DWORD *)(v10 + 256) = v497;
            *(_BYTE *)(v10 + v496) = v500;
            *(_BYTE *)(v10 + 260) = v500;
LABEL_485:
            if ( v495 <= ++v419 )
            {
              v7 = v653;
              v5 = *(_DWORD *)(v6 + 4);
              goto LABEL_20;
            }
            goto LABEL_486;
          }
        }
      }
    case 1:
    case 2:
      sub_86C84(v10, a2, *(_DWORD *)(v6 + 8));
      v414 = a2 & 4;
      if ( (a2 & 4) != 0 )
      {
        v415 = *(_DWORD *)(v10 + 256);
        if ( v415 == 255 )
        {
          v416 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v415 = 0;
          ((void (__fastcall *)(size_t, int, _DWORD))v416)(v10, 255, HIDWORD(v416));
          v417 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v417 + 1;
        }
        *(_DWORD *)(v10 + 256) = v415 + 1;
        *(_BYTE *)(v10 + v415) = 46;
        *(_BYTE *)(v10 + 260) = 46;
      }
      else
      {
        v511 = *(_DWORD *)(v10 + 256);
        v512 = "::";
        while ( 1 )
        {
          v513 = v511;
          if ( v511 != 255 )
            v413 = v511;
          v515 = *v512++;
          v514 = v515;
          if ( v511 == 255 )
          {
            v516 = *(_DWORD *)(v10 + 268);
            v517 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v517(v10, v513, v516);
            v511 = 1;
            v413 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v511;
          }
          *(_DWORD *)(v10 + 256) = v511;
          *(_BYTE *)(v10 + v413) = v514;
          *(_BYTE *)(v10 + 260) = v514;
          if ( v414 )
            break;
          v414 = 1;
        }
      }
      v418 = *(_DWORD **)(v6 + 12);
      if ( *v418 == 70 )
      {
        sub_84350(v10, (int)"{default arg#", 13);
        sub_84988(v10, v418[3] + 1);
        sub_84350(v10, (int)"}::", 3);
        v418 = (_DWORD *)v418[2];
      }
      result = sub_86C84(v10, a2, v418);
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 3:
      v402 = *(_DWORD *)(v10 + 276);
      v403 = *(unsigned int **)(v6 + 8);
      *(_DWORD *)(v10 + 276) = 0;
      v651 = v402;
      if ( !v403 )
        goto LABEL_395;
      v404 = 0;
      v405 = s;
      v406 = v10;
      v407 = 0;
      v408 = *(_DWORD *)(v10 + 272);
      v409 = v403;
      v649 = v408;
      while ( 1 )
      {
        v410 = *v409;
        ++v404;
        *(_DWORD *)v405 = v407;
        *((_DWORD *)v405 + 1) = v409;
        *((_DWORD *)v405 + 2) = 0;
        *((_DWORD *)v405 + 3) = v408;
        result = sub_843A4(v410);
        if ( !result )
          break;
        v409 = *(unsigned int **)(v411 + 8);
        v407 = v412;
        if ( !v409 )
        {
          v10 = v406;
          *(_DWORD *)(v406 + 276) = v412;
          goto LABEL_395;
        }
        v405 = (char *)(v412 + 16);
        if ( v404 == 4 )
        {
          v10 = v406;
          *(_DWORD *)(v406 + 276) = v407;
LABEL_395:
          *(_DWORD *)(v10 + 280) = 1;
          goto LABEL_396;
        }
      }
      v580 = (_DWORD *)v411;
      v10 = v406;
      *(_DWORD *)(v406 + 276) = v412;
      if ( v410 == 4 )
      {
        v654[1] = v411;
        v654[0] = v649;
        *(_DWORD *)(v406 + 272) = v654;
      }
      else if ( v410 == 2 )
      {
        v581 = *(unsigned int **)(v411 + 12);
        if ( *v581 == 70 )
        {
          v581 = (unsigned int *)v581[2];
          if ( !v581 )
            goto LABEL_395;
        }
        v582 = &s[16 * v404 - 12];
        while ( 1 )
        {
          result = sub_843A4(*v581);
          if ( !result )
            break;
          v49 = v404 == 4;
          v583 = v582 + 16;
          v584 = v582 - 4;
          v585 = v582 + 12;
          ++v404;
          v582 += 16;
          if ( v49 )
            goto LABEL_395;
          v586 = *(_DWORD *)v584;
          v587 = *((_DWORD *)v584 + 1);
          v588 = *((_DWORD *)v584 + 2);
          v589 = *((_DWORD *)v584 + 3);
          *(_DWORD *)(v10 + 276) = v585;
          *v585 = v586;
          v585[1] = v587;
          v585[2] = v588;
          v585[3] = v589;
          *((_DWORD *)v583 - 3) = 0;
          *((_DWORD *)v583 - 4) = v581;
          v581 = (unsigned int *)v581[2];
          *((_DWORD *)v583 - 1) = v584;
          *((_DWORD *)v583 - 2) = v649;
        }
      }
      v590 = 4 * v404;
      result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
      if ( *v580 == 4 )
        *(_DWORD *)(v10 + 272) = v654[0];
      do
      {
        if ( !v654[v590] )
        {
          v591 = *(_DWORD *)(v10 + 256);
          if ( v591 == 255 )
          {
            v592 = *(_DWORD *)(v10 + 268);
            v593 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v593(v10, 255, v592);
            v594 = *(_DWORD *)(v10 + 292);
            v591 = 0;
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v594 + 1;
          }
          v595 = (_DWORD *)v654[v590 - 1];
          *(_DWORD *)(v10 + 256) = v591 + 1;
          *(_BYTE *)(v10 + v591) = 32;
          *(_BYTE *)(v10 + 260) = 32;
          result = sub_89888(v10, a2, v595);
        }
        v590 -= 4;
      }
      while ( v590 * 4 );
      *(_DWORD *)(v10 + 276) = v651;
LABEL_396:
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 4:
      v450 = *(_DWORD *)(v10 + 276);
      v451 = *(_DWORD *)(v10 + 324);
      *(_DWORD *)(v10 + 276) = 0;
      *(_DWORD *)(v10 + 324) = v6;
      v452 = *(_DWORD *)(v6 + 8);
      if ( (a2 & 4) != 0
        && !*(_DWORD *)v452
        && *(_DWORD *)(v452 + 12) == 6
        && !strncmp(*(const char **)(v452 + 8), "JArray", 6u) )
      {
        sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
        result = sub_84350(v10, (int)"[]", 2);
      }
      else
      {
        sub_86C84(v10, a2, v452);
        if ( *(_BYTE *)(v10 + 260) == 60 )
        {
          v518 = *(_DWORD *)(v10 + 256);
          if ( v518 == 255 )
          {
            v519 = *(_QWORD *)(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v518 = 0;
            ((void (__fastcall *)(size_t, int, _DWORD))v519)(v10, 255, HIDWORD(v519));
            v520 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v520 + 1;
          }
          *(_DWORD *)(v10 + 256) = v518 + 1;
          *(_BYTE *)(v10 + v518) = 32;
          *(_BYTE *)(v10 + 260) = 32;
        }
        v453 = *(_DWORD *)(v10 + 256);
        if ( v453 == 255 )
        {
          v454 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v453 = 0;
          ((void (__fastcall *)(size_t, int, _DWORD))v454)(v10, 255, HIDWORD(v454));
          v455 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v455 + 1;
        }
        *(_DWORD *)(v10 + 256) = v453 + 1;
        *(_BYTE *)(v10 + v453) = 60;
        *(_BYTE *)(v10 + 260) = 60;
        result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
        if ( *(_BYTE *)(v10 + 260) == 62 )
        {
          v570 = *(_DWORD *)(v10 + 256);
          if ( v570 == 255 )
          {
            v571 = *(_QWORD *)(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v570 = 0;
            result = ((int (__fastcall *)(size_t, int, _DWORD))v571)(v10, 255, HIDWORD(v571));
            v572 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v572 + 1;
          }
          *(_DWORD *)(v10 + 256) = v570 + 1;
          *(_BYTE *)(v10 + v570) = 32;
          *(_BYTE *)(v10 + 260) = 32;
        }
        v456 = *(_DWORD *)(v10 + 256);
        if ( v456 == 255 )
        {
          v457 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v456 = 0;
          result = ((int (__fastcall *)(size_t, int, _DWORD))v457)(v10, 255, HIDWORD(v457));
          v458 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v458 + 1;
        }
        *(_DWORD *)(v10 + 256) = v456 + 1;
        *(_BYTE *)(v10 + v456) = 62;
        *(_BYTE *)(v10 + 260) = 62;
      }
      *(_DWORD *)(v10 + 276) = v450;
      *(_DWORD *)(v10 + 324) = v451;
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 5:
      if ( *(_DWORD *)(v10 + 284) )
      {
        v474 = *(_DWORD *)(v10 + 256);
        v475 = "auto:";
        do
        {
          v476 = v474;
          v478 = *v475++;
          v477 = v478;
          if ( v474 == 255 )
          {
            v479 = *(_DWORD *)(v10 + 268);
            v480 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v480(v10, 255, v479);
            v474 = 1;
            v476 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v474;
          }
          *(_DWORD *)(v10 + 256) = v474;
          *(_BYTE *)(v10 + v476) = v477;
          *(_BYTE *)(v10 + 260) = v477;
        }
        while ( "" != v475 );
        v481 = s;
        sprintf(s, "%d", *(_DWORD *)(v6 + 8) + 1);
        result = strlen(s);
        if ( result )
        {
          v482 = *(_DWORD *)(v10 + 256);
          v483 = &s[result];
          do
          {
            v484 = v482;
            result = v10;
            v486 = *v481++;
            v485 = v486;
            if ( v482 == 255 )
            {
              v487 = *(_DWORD *)(v10 + 268);
              v488 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
              *(_BYTE *)(v10 + 255) = 0;
              result = v488(v10, 255, v487);
              v482 = 1;
              v484 = 0;
              ++*(_DWORD *)(v10 + 292);
            }
            else
            {
              ++v482;
            }
            *(_DWORD *)(v10 + 256) = v482;
            *(_BYTE *)(v10 + v484) = v485;
            *(_BYTE *)(v10 + 260) = v485;
          }
          while ( v483 != v481 );
        }
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
      }
      else
      {
        result = (int)sub_84800(v10, (int *)(v6 + 8));
        v429 = result;
        if ( result
          && (*(_DWORD *)result != 47
           || (v579 = *(_DWORD *)(v10 + 288), v579 < 0)
           || (result = (int)sub_847D4((_DWORD *)result, v579), (v429 = result) != 0)) )
        {
          v430 = *(_DWORD **)(v10 + 272);
          *(_DWORD *)(v10 + 272) = *v430;
          result = sub_86C84(v10, a2, v429);
          *(_DWORD *)(v10 + 272) = v430;
          v7 = v653;
          v5 = *(_DWORD *)(v6 + 4);
        }
        else
        {
          v7 = v653;
          *(_DWORD *)(v10 + 280) = 1;
          v5 = *(_DWORD *)(v6 + 4);
        }
      }
      goto LABEL_20;
    case 6:
      v431 = *(_DWORD *)(v6 + 8);
      v432 = *(_DWORD *)(v10 + 256);
      if ( v431 )
      {
        v433 = "{parm#";
        do
        {
          v434 = v432;
          v436 = *v433++;
          v435 = v436;
          if ( v432 == 255 )
          {
            v437 = *(_DWORD *)(v10 + 268);
            v438 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v438(v10, 255, v437);
            v432 = 1;
            v434 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v432;
          }
          *(_DWORD *)(v10 + 256) = v432;
          *(_BYTE *)(v10 + v434) = v435;
          *(_BYTE *)(v10 + 260) = v435;
        }
        while ( "" != v433 );
        v439 = s;
        sprintf(s, "%d", v431);
        result = strlen(s);
        if ( result )
        {
          v440 = *(_DWORD *)(v10 + 256);
          v441 = &s[result];
          do
          {
            v442 = v440;
            result = v10;
            v444 = *v439++;
            v443 = v444;
            if ( v440 == 255 )
            {
              v445 = *(_DWORD *)(v10 + 268);
              v446 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
              *(_BYTE *)(v10 + 255) = 0;
              result = v446(v10, 255, v445);
              v440 = 1;
              v442 = 0;
              ++*(_DWORD *)(v10 + 292);
            }
            else
            {
              ++v440;
            }
            *(_DWORD *)(v10 + 256) = v440;
            *(_BYTE *)(v10 + v442) = v443;
            *(_BYTE *)(v10 + 260) = v443;
          }
          while ( v441 != v439 );
        }
        v447 = *(_DWORD *)(v10 + 256);
        if ( v447 == 255 )
        {
          v448 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v447 = 0;
          result = ((int (__fastcall *)(size_t, int, _DWORD))v448)(v10, 255, HIDWORD(v448));
          v449 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v449 + 1;
        }
        *(_DWORD *)(v10 + 256) = v447 + 1;
        *(_BYTE *)(v10 + v447) = 125;
        v7 = v653;
        *(_BYTE *)(v10 + 260) = 125;
        v5 = *(_DWORD *)(v6 + 4);
      }
      else
      {
        v489 = "this";
        do
        {
          v490 = v432;
          result = v10;
          v492 = *v489++;
          v491 = v492;
          if ( v432 == 255 )
          {
            v493 = *(_DWORD *)(v10 + 268);
            v494 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            result = v494(v10, 255, v493);
            v432 = 1;
            v490 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v432;
          }
          *(_DWORD *)(v10 + 256) = v432;
          *(_BYTE *)(v10 + v490) = v491;
          *(_BYTE *)(v10 + 260) = v491;
        }
        while ( "" != v489 );
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
      }
      goto LABEL_20;
    case 7:
      goto LABEL_355;
    case 8:
      v378 = *(_DWORD *)(v10 + 256);
      if ( v378 == 255 )
      {
        v379 = *(_QWORD *)(v10 + 264);
        *(_BYTE *)(v10 + 255) = 0;
        v378 = 0;
        ((void (__fastcall *)(size_t, int, _DWORD))v379)(v10, 255, HIDWORD(v379));
        v380 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v380 + 1;
      }
      *(_DWORD *)(v10 + 256) = v378 + 1;
      *(_BYTE *)(v10 + v378) = 126;
      *(_BYTE *)(v10 + 260) = 126;
      result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 9:
      v371 = *(_DWORD *)(v10 + 256);
      v372 = &byte_B64DF;
      do
      {
        v373 = v371;
        v375 = *++v372;
        v374 = v375;
        if ( v371 == 255 )
        {
          v376 = *(_DWORD *)(v10 + 268);
          v377 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v377(v10, 255, v376);
          v371 = 1;
          v373 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v371;
        }
        *(_DWORD *)(v10 + 256) = v371;
        *(_BYTE *)(v10 + v373) = v374;
        *(_BYTE *)(v10 + 260) = v374;
      }
      while ( " " != v372 );
      goto LABEL_388;
    case 0xA:
      v364 = *(_DWORD *)(v10 + 256);
      v365 = "";
      do
      {
        v366 = v364;
        v368 = *++v365;
        v367 = v368;
        if ( v364 == 255 )
        {
          v369 = *(_DWORD *)(v10 + 268);
          v370 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v370(v10, 255, v369);
          v364 = 1;
          v366 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v364;
        }
        *(_DWORD *)(v10 + 256) = v364;
        *(_BYTE *)(v10 + v366) = v367;
        *(_BYTE *)(v10 + 260) = v367;
      }
      while ( " " != v365 );
      goto LABEL_388;
    case 0xB:
      v350 = *(_DWORD *)(v10 + 256);
      v351 = &byte_B64F7;
      do
      {
        v352 = v350;
        v354 = *++v351;
        v353 = v354;
        if ( v350 == 255 )
        {
          v355 = *(_DWORD *)(v10 + 268);
          v356 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v356(v10, 255, v355);
          v350 = 1;
          v352 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v350;
        }
        *(_DWORD *)(v10 + 256) = v350;
        *(_BYTE *)(v10 + v352) = v353;
        *(_BYTE *)(v10 + 260) = v353;
      }
      while ( " " != v351 );
      sub_86C84(v10, a2, *(_DWORD *)(v6 + 8));
      v357 = *(_DWORD *)(v10 + 256);
      v358 = "-in-";
      do
      {
        v359 = v357;
        v361 = *v358++;
        v360 = v361;
        if ( v357 == 255 )
        {
          v362 = *(_DWORD *)(v10 + 268);
          v363 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v363(v10, 255, v362);
          v357 = 1;
          v359 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v357;
        }
        *(_DWORD *)(v10 + 256) = v357;
        *(_BYTE *)(v10 + v359) = v360;
        *(_BYTE *)(v10 + 260) = v360;
      }
      while ( "" != v358 );
      goto LABEL_355;
    case 0xC:
      v388 = *(_DWORD *)(v10 + 256);
      v389 = &byte_B651B;
      do
      {
        v390 = v388;
        v392 = *++v389;
        v391 = v392;
        if ( v388 == 255 )
        {
          v393 = *(_DWORD *)(v10 + 268);
          v394 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v394(v10, 255, v393);
          v388 = 1;
          v390 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v388;
        }
        *(_DWORD *)(v10 + 256) = v388;
        *(_BYTE *)(v10 + v390) = v391;
        *(_BYTE *)(v10 + 260) = v391;
      }
      while ( " " != v389 );
      goto LABEL_388;
    case 0xD:
      v381 = *(_DWORD *)(v10 + 256);
      v382 = "typeinfo name for ";
      do
      {
        v383 = v381;
        v385 = *v382++;
        v384 = v385;
        if ( v381 == 255 )
        {
          v386 = *(_DWORD *)(v10 + 268);
          v387 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v387(v10, 255, v386);
          v381 = 1;
          v383 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v381;
        }
        *(_DWORD *)(v10 + 256) = v381;
        *(_BYTE *)(v10 + v383) = v384;
        *(_BYTE *)(v10 + 260) = v384;
      }
      while ( "" != v382 );
      goto LABEL_388;
    case 0xE:
      v395 = *(_DWORD *)(v10 + 256);
      v396 = &byte_B653F;
      do
      {
        v397 = v395;
        v399 = *++v396;
        v398 = v399;
        if ( v395 == 255 )
        {
          v400 = *(_DWORD *)(v10 + 268);
          v401 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v401(v10, 255, v400);
          v395 = 1;
          v397 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v395;
        }
        *(_DWORD *)(v10 + 256) = v395;
        *(_BYTE *)(v10 + v397) = v398;
        *(_BYTE *)(v10 + 260) = v398;
      }
      while ( " " != v396 );
      goto LABEL_388;
    case 0xF:
      v253 = *(_DWORD *)(v10 + 256);
      v254 = "non-virtual thunk to ";
      do
      {
        v255 = v253;
        v257 = *v254++;
        v256 = v257;
        if ( v253 == 255 )
        {
          v258 = *(_DWORD *)(v10 + 268);
          v259 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v259(v10, 255, v258);
          v253 = 1;
          v255 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v253;
        }
        *(_DWORD *)(v10 + 256) = v253;
        *(_BYTE *)(v10 + v255) = v256;
        *(_BYTE *)(v10 + 260) = v256;
      }
      while ( "" != v254 );
      goto LABEL_388;
    case 0x10:
      v316 = *(_DWORD *)(v10 + 256);
      v317 = "-virtual thunk to ";
      do
      {
        v318 = v316;
        v320 = *++v317;
        v319 = v320;
        if ( v316 == 255 )
        {
          v321 = *(_DWORD *)(v10 + 268);
          v322 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v322(v10, 255, v321);
          v316 = 1;
          v318 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v316;
        }
        *(_DWORD *)(v10 + 256) = v316;
        *(_BYTE *)(v10 + v318) = v319;
        *(_BYTE *)(v10 + 260) = v319;
      }
      while ( " " != v317 );
      goto LABEL_388;
    case 0x11:
      v309 = *(_DWORD *)(v10 + 256);
      v310 = &byte_B656B;
      do
      {
        v311 = v309;
        v313 = *++v310;
        v312 = v313;
        if ( v309 == 255 )
        {
          v314 = *(_DWORD *)(v10 + 268);
          v315 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v315(v10, 255, v314);
          v309 = 1;
          v311 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v309;
        }
        *(_DWORD *)(v10 + 256) = v309;
        *(_BYTE *)(v10 + v311) = v312;
        *(_BYTE *)(v10 + 260) = v312;
      }
      while ( " " != v310 );
      goto LABEL_388;
    case 0x12:
      v302 = *(_DWORD *)(v10 + 256);
      v303 = &byte_B6587;
      do
      {
        v304 = v302;
        v306 = *++v303;
        v305 = v306;
        if ( v302 == 255 )
        {
          v307 = *(_DWORD *)(v10 + 268);
          v308 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v308(v10, 255, v307);
          v302 = 1;
          v304 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v302;
        }
        *(_DWORD *)(v10 + 256) = v302;
        *(_BYTE *)(v10 + v304) = v305;
        *(_BYTE *)(v10 + 260) = v305;
      }
      while ( " " != v303 );
      goto LABEL_388;
    case 0x13:
      v295 = *(_DWORD *)(v10 + 256);
      v296 = "guard variable for ";
      do
      {
        v297 = v295;
        v299 = *v296++;
        v298 = v299;
        if ( v295 == 255 )
        {
          v300 = *(_DWORD *)(v10 + 268);
          v301 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v301(v10, 255, v300);
          v295 = 1;
          v297 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v295;
        }
        *(_DWORD *)(v10 + 256) = v295;
        *(_BYTE *)(v10 + v297) = v298;
        *(_BYTE *)(v10 + 260) = v298;
      }
      while ( "" != v296 );
      goto LABEL_388;
    case 0x14:
      v288 = *(_DWORD *)(v10 + 256);
      v289 = "";
      do
      {
        v290 = v288;
        v292 = *++v289;
        v291 = v292;
        if ( v288 == 255 )
        {
          v293 = *(_DWORD *)(v10 + 268);
          v294 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v294(v10, 255, v293);
          v288 = 1;
          v290 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v288;
        }
        *(_DWORD *)(v10 + 256) = v288;
        *(_BYTE *)(v10 + v290) = v291;
        *(_BYTE *)(v10 + 260) = v291;
      }
      while ( " " != v289 );
      goto LABEL_388;
    case 0x15:
      v281 = *(_DWORD *)(v10 + 256);
      v282 = &byte_B65C3;
      do
      {
        v283 = v281;
        v285 = *++v282;
        v284 = v285;
        if ( v281 == 255 )
        {
          v286 = *(_DWORD *)(v10 + 268);
          v287 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v287(v10, 255, v286);
          v281 = 1;
          v283 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v281;
        }
        *(_DWORD *)(v10 + 256) = v281;
        *(_BYTE *)(v10 + v283) = v284;
        *(_BYTE *)(v10 + 260) = v284;
      }
      while ( " " != v282 );
      goto LABEL_388;
    case 0x16:
      v267 = *(_DWORD *)(v10 + 256);
      v268 = "reference temporary #";
      do
      {
        v269 = v267;
        v271 = *v268++;
        v270 = v271;
        if ( v267 == 255 )
        {
          v272 = *(_DWORD *)(v10 + 268);
          v273 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v273(v10, 255, v272);
          v267 = 1;
          v269 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v267;
        }
        *(_DWORD *)(v10 + 256) = v267;
        *(_BYTE *)(v10 + v269) = v270;
        *(_BYTE *)(v10 + 260) = v270;
      }
      while ( "" != v268 );
      sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
      v274 = *(_DWORD *)(v10 + 256);
      v275 = " for ";
      do
      {
        v276 = v274;
        v278 = *v275++;
        v277 = v278;
        if ( v274 == 255 )
        {
          v279 = *(_DWORD *)(v10 + 268);
          v280 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v280(v10, 255, v279);
          v274 = 1;
          v276 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v274;
        }
        *(_DWORD *)(v10 + 256) = v274;
        *(_BYTE *)(v10 + v276) = v277;
        *(_BYTE *)(v10 + 260) = v277;
      }
      while ( "" != v275 );
      goto LABEL_388;
    case 0x17:
      v260 = *(_DWORD *)(v10 + 256);
      v261 = &byte_B65F7;
      do
      {
        v262 = v260;
        v264 = *++v261;
        v263 = v264;
        if ( v260 == 255 )
        {
          v265 = *(_DWORD *)(v10 + 268);
          v266 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v266(v10, 255, v265);
          v260 = 1;
          v262 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v260;
        }
        *(_DWORD *)(v10 + 256) = v260;
        *(_BYTE *)(v10 + v262) = v263;
        *(_BYTE *)(v10 + 260) = v263;
      }
      while ( " " != v261 );
      goto LABEL_388;
    case 0x18:
      v342 = *(_QWORD *)(v6 + 8);
      if ( HIDWORD(v342) )
      {
        v343 = *(_DWORD *)(v10 + 256);
        v344 = v342 - 1;
        do
        {
          v345 = v343;
          result = v10;
          v347 = *(_BYTE *)++v344;
          v346 = v347;
          if ( v343 == 255 )
          {
            v348 = *(_DWORD *)(v10 + 268);
            v349 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            result = v349(v10, 255, v348);
            v343 = 1;
            v345 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v343;
          }
          *(_DWORD *)(v10 + 256) = v343;
          *(_BYTE *)(v10 + v345) = v346;
          *(_BYTE *)(v10 + 260) = v346;
        }
        while ( HIDWORD(v342) + (_DWORD)v342 - 1 != v344 );
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
      }
      goto LABEL_20;
    case 0x19:
    case 0x1A:
    case 0x1B:
      v325 = *(int ***)(v10 + 276);
      v340 = v325;
      if ( !v325 )
        goto LABEL_310;
      while ( 1 )
      {
        if ( !v340[2] )
        {
          v341 = *v340[1];
          if ( (unsigned int)(v341 - 25) > 2 )
          {
            v9 = (int)v340[2];
            v323 = (_DWORD *)v6;
            goto LABEL_311;
          }
          if ( result == v341 )
            break;
        }
        v340 = (int **)*v340;
        if ( !v340 )
        {
LABEL_310:
          v323 = (_DWORD *)v6;
LABEL_311:
          v326 = *(_DWORD *)(v10 + 272);
          *(_DWORD *)s = v325;
          v656 = v323;
          v658 = v326;
          *(_DWORD *)(v10 + 276) = s;
          v657 = 0;
          goto LABEL_312;
        }
      }
LABEL_388:
      result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 8));
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x4C:
    case 0x4E:
    case 0x4F:
      v327 = 0;
      goto LABEL_314;
    case 0x23:
    case 0x24:
      v9 = *(_DWORD *)(v10 + 284);
      v323 = *(_DWORD **)(v6 + 8);
      if ( v9 )
      {
        v9 = 0;
        goto LABEL_306;
      }
      if ( *v323 != 5 )
        goto LABEL_306;
      result = *(_DWORD *)(v10 + 304);
      v597 = *(_DWORD **)(v10 + 300);
      if ( result <= 0 )
        goto LABEL_650;
      if ( v323 == (_DWORD *)*v597 )
      {
        v600 = *(_DWORD **)(v10 + 300);
LABEL_661:
        v612 = &v652;
        do
        {
          if ( v323 == (_DWORD *)*v612 )
            goto LABEL_667;
          v613 = v6 == *v612;
          if ( v612 == &v652 )
            v613 = 0;
          if ( v613 )
            goto LABEL_667;
          v612 = (int *)v612[1];
        }
        while ( v612 );
        v3 = *(_DWORD *)(v10 + 272);
        v9 = 1;
        *(_DWORD *)(v10 + 272) = v600[1];
        result = (int)sub_84800(v10, v323 + 2);
        v323 = (_DWORD *)result;
        if ( !result )
          goto LABEL_672;
        goto LABEL_668;
      }
      v598 = v597 + 2;
      v599 = *(_DWORD *)(v10 + 284);
      while ( 1 )
      {
        ++v599;
        v600 = v598;
        v598 += 2;
        if ( result == v599 )
          break;
        if ( v323 == (_DWORD *)v597[2 * v599] )
          goto LABEL_661;
      }
LABEL_650:
      if ( result >= *(_DWORD *)(v10 + 308) )
        goto LABEL_713;
      *(_DWORD *)(v10 + 304) = result + 1;
      v597[2 * result] = v323;
      v601 = &v597[2 * result + 1];
      v602 = *(_DWORD **)(v10 + 272);
      v603 = v7;
      while ( 1 )
      {
        if ( !v602 )
        {
          *v601 = 0;
LABEL_667:
          result = (int)sub_84800(v10, v323 + 2);
          v323 = (_DWORD *)result;
          if ( !result )
            goto LABEL_673;
LABEL_668:
          v324 = *v323;
          if ( *v323 == 47 )
          {
            v614 = *(_DWORD *)(v10 + 288);
            if ( v614 < 0 )
            {
LABEL_307:
              if ( *(_DWORD *)v6 != v324 )
              {
                if ( v324 != 36 )
                {
                  v325 = *(int ***)(v10 + 276);
                  goto LABEL_310;
                }
                v327 = v323[2];
LABEL_314:
                v328 = *(_DWORD *)(v10 + 276);
                v656 = (_DWORD *)v6;
                v657 = 0;
                v323 = (_DWORD *)v6;
                *(_DWORD *)s = v328;
                v329 = *(_DWORD *)(v10 + 272);
                *(_DWORD *)(v10 + 276) = s;
                v658 = v329;
                if ( !v327 )
LABEL_312:
                  v327 = v323[2];
                result = sub_86C84(v10, a2, v327);
                if ( !v657 )
                  result = sub_89888(v10, a2, v323);
                *(_DWORD *)(v10 + 276) = *(_DWORD *)s;
                if ( v9 )
                  *(_DWORD *)(v10 + 272) = v3;
                v7 = v653;
                v5 = *(_DWORD *)(v6 + 4);
                goto LABEL_20;
              }
LABEL_470:
              v325 = *(int ***)(v10 + 276);
              goto LABEL_311;
            }
            result = (int)sub_847D4(v323, v614);
            v323 = (_DWORD *)result;
            if ( !result )
            {
              if ( v9 )
LABEL_672:
                *(_DWORD *)(v10 + 272) = v3;
LABEL_673:
              v7 = v653;
              *(_DWORD *)(v10 + 280) = 1;
              v5 = *(_DWORD *)(v6 + 4);
              goto LABEL_20;
            }
          }
LABEL_306:
          v324 = *v323;
          if ( *v323 == 35 )
            goto LABEL_470;
          goto LABEL_307;
        }
        result = *(_DWORD *)(v10 + 316);
        if ( result >= *(_DWORD *)(v10 + 320) )
          break;
        v604 = *(_DWORD *)(v10 + 312);
        v605 = v602[1];
        *(_DWORD *)(v10 + 316) = result + 1;
        v606 = (_DWORD *)(v604 + 8 * result);
        v606[1] = v605;
        *v601 = v606;
        v601 = v606;
        v602 = (_DWORD *)*v602;
      }
      v7 = v603;
LABEL_713:
      *(_DWORD *)(v10 + 280) = 1;
      v5 = *(_DWORD *)(v6 + 4);
LABEL_20:
      *(_DWORD *)(v10 + 296) = v7;
      *(_DWORD *)(v6 + 4) = v5 - 1;
      return result;
    case 0x27:
      result = *(_DWORD *)(v6 + 8);
      if ( (a2 & 4) != 0 )
      {
        v459 = *(_QWORD *)(result + 8);
        if ( HIDWORD(v459) )
        {
          v460 = *(_DWORD *)(v10 + 256);
          v461 = v459 - 1;
          do
          {
            v462 = v460;
            result = v10;
            v464 = *(_BYTE *)++v461;
            v463 = v464;
            if ( v460 == 255 )
            {
              v465 = *(_DWORD *)(v10 + 268);
              v466 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
              *(_BYTE *)(v10 + 255) = 0;
              result = v466(v10, 255, v465);
              v460 = 1;
              v462 = 0;
              ++*(_DWORD *)(v10 + 292);
            }
            else
            {
              ++v460;
            }
            *(_DWORD *)(v10 + 256) = v460;
            *(_BYTE *)(v10 + v462) = v463;
            *(_BYTE *)(v10 + 260) = v463;
          }
          while ( HIDWORD(v459) + (_DWORD)v459 - 1 != v461 );
          v7 = v653;
          v5 = *(_DWORD *)(v6 + 4);
        }
      }
      else
      {
        v330 = *(_QWORD *)result;
        if ( *(_DWORD *)(result + 4) )
        {
          v331 = *(_DWORD *)(v10 + 256);
          v332 = v330 - 1;
          do
          {
            v333 = v331;
            result = v10;
            v335 = *(_BYTE *)++v332;
            v334 = v335;
            if ( v331 == 255 )
            {
              v336 = *(_DWORD *)(v10 + 268);
              v337 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
              *(_BYTE *)(v10 + 255) = 0;
              result = v337(v10, 255, v336);
              v331 = 1;
              v333 = 0;
              ++*(_DWORD *)(v10 + 292);
            }
            else
            {
              ++v331;
            }
            *(_DWORD *)(v10 + 256) = v331;
            *(_BYTE *)(v10 + v333) = v334;
            *(_BYTE *)(v10 + 260) = v334;
          }
          while ( HIDWORD(v330) + (_DWORD)v330 - 1 != v332 );
          v7 = v653;
          v5 = *(_DWORD *)(v6 + 4);
        }
      }
      goto LABEL_20;
    case 0x28:
      goto LABEL_388;
    case 0x29:
      v338 = a2 & 0xFFFFFF9F;
      if ( (a2 & 0x20) == 0 )
      {
        v339 = *(_DWORD *)(v6 + 8);
        if ( v339 && (a2 & 0x40) == 0 )
        {
          v607 = *(_DWORD *)(v10 + 272);
          *(_DWORD *)s = *(_DWORD *)(v10 + 276);
          *(_DWORD *)(v10 + 276) = s;
          v657 = 0;
          v656 = (_DWORD *)v6;
          v658 = v607;
          result = sub_86C84(v10, v338, v339);
          v608 = v657;
          *(_DWORD *)(v10 + 276) = *(_DWORD *)s;
          if ( v608 )
          {
            v7 = v653;
            v5 = *(_DWORD *)(v6 + 4);
            goto LABEL_20;
          }
          v609 = *(_DWORD *)(v10 + 256);
          if ( v609 == 255 )
          {
            v610 = *(void (__fastcall **)(size_t, int, _DWORD))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v609 = 0;
            v610(v10, 255, *(_DWORD *)(v10 + 268));
            v611 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v611 + 1;
          }
          *(_DWORD *)(v10 + 256) = v609 + 1;
          *(_BYTE *)(v10 + v609) = 32;
          *(_BYTE *)(v10 + 260) = 32;
        }
        result = sub_89E90(v10, v338, (int *)(v6 + 12), *(int **********)(v10 + 276));
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
        goto LABEL_20;
      }
      result = sub_89E90(v10, a2 & 0xFFFFFF9F, (int *)(v6 + 12), *(int **********)(v10 + 276));
      v510 = *(_DWORD *)(v6 + 8);
      if ( v510 )
        result = sub_86C84(v10, a2 & 0xFFFFFF9F, v510);
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x2A:
      v237 = *(_DWORD *)(v10 + 272);
      *(_DWORD *)s = *(_DWORD *)(v10 + 276);
      v238 = *(_DWORD *)s;
      v656 = (_DWORD *)v6;
      *(_DWORD *)(v10 + 276) = s;
      v657 = 0;
      v658 = v237;
      if ( v238 && (unsigned int)(**(_DWORD **)(v238 + 4) - 25) <= 2 )
      {
        v239 = v10;
        v240 = 1;
        v241 = (int *)v238;
        v242 = s;
        v243 = v239;
        while ( 1 )
        {
          v244 = 16 * v240;
          v245 = &v659[16 * v240 + 48];
          if ( !v241[2] )
          {
            if ( v240++ > 3 )
            {
              v10 = v243;
              *(_DWORD *)(v243 + 280) = 1;
              goto LABEL_244;
            }
            result = *v241;
            v247 = v241[1];
            v248 = v241[2];
            v249 = v241[3];
            *((_DWORD *)v245 - 16) = *v241;
            *((_DWORD *)v245 - 15) = v247;
            *((_DWORD *)v245 - 14) = v248;
            *((_DWORD *)v245 - 13) = v249;
            *((_DWORD *)v245 - 16) = v242;
            v242 = &s[v244];
            *(_DWORD *)(v243 + 276) = &s[v244];
            v241[2] = 1;
          }
          v241 = (int *)*v241;
          if ( !v241 || (unsigned int)(*(_DWORD *)v241[1] - 25) > 2 )
          {
            v10 = v243;
            result = sub_86C84(v243, a2, *(_DWORD *)(v6 + 12));
            v250 = v657;
            *(_DWORD *)(v10 + 276) = v238;
            if ( v250 )
              goto LABEL_244;
            if ( v240 != 1 )
            {
              v251 = &s[16 * v240];
              do
              {
                v252 = *((_DWORD **)v251 - 3);
                v251 -= 16;
                sub_89888(v10, a2, v252);
              }
              while ( v659 != v251 );
            }
            goto LABEL_243;
          }
        }
      }
      result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
      v596 = v657;
      *(_DWORD *)(v10 + 276) = v238;
      if ( !v596 )
LABEL_243:
        result = sub_8A2C4(v10, a2, (int *)(v6 + 8), *(int **********)(v10 + 276));
LABEL_244:
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x2B:
    case 0x2D:
      v222 = *(_DWORD *)(v10 + 276);
      v223 = *(_DWORD *)(v10 + 272);
      v656 = (_DWORD *)v6;
      *(_DWORD *)s = v222;
      *(_DWORD *)(v10 + 276) = s;
      v658 = v223;
      v224 = *(_DWORD *)(v6 + 12);
      v657 = 0;
      result = sub_86C84(v10, a2, v224);
      if ( !v657 )
        result = sub_89888(v10, a2, (_DWORD *)v6);
      v5 = *(_DWORD *)(v6 + 4);
      v7 = v653;
      *(_DWORD *)(v10 + 276) = *(_DWORD *)s;
      goto LABEL_20;
    case 0x2C:
      if ( *(_WORD *)(v6 + 14) )
      {
        v554 = *(_DWORD *)(v10 + 256);
        v555 = "_Sat ";
        do
        {
          v556 = v554;
          if ( v554 != 255 )
            v7 = v554;
          v558 = *v555++;
          v557 = v558;
          if ( v554 == 255 )
          {
            v559 = *(_DWORD *)(v10 + 268);
            v560 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v560(v10, v556, v559);
            v554 = 1;
            v7 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v554;
          }
          *(_DWORD *)(v10 + 256) = v554;
          *(_BYTE *)(v10 + v7) = v557;
          *(_BYTE *)(v10 + 260) = v557;
        }
        while ( v555 != "" );
      }
      v211 = *(_DWORD *)(v6 + 8);
      if ( *(char ***)(v211 + 8) != &off_D1EBC )
      {
        sub_86C84(v10, a2, v211);
        v212 = *(_DWORD *)(v10 + 256);
        if ( v212 == 255 )
        {
          v213 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v212 = 0;
          ((void (__fastcall *)(size_t, int, _DWORD))v213)(v10, 255, HIDWORD(v213));
          v214 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v214 + 1;
        }
        *(_DWORD *)(v10 + 256) = v212 + 1;
        *(_BYTE *)(v10 + v212) = 32;
        *(_BYTE *)(v10 + 260) = 32;
      }
      v215 = *(_DWORD *)(v10 + 256);
      if ( *(_WORD *)(v6 + 12) )
      {
        v216 = "_Accum";
        do
        {
          v217 = v215;
          result = v10;
          v219 = *v216++;
          v218 = v219;
          if ( v215 == 255 )
          {
            v220 = *(_DWORD *)(v10 + 268);
            v221 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            result = v221(v10, 255, v220);
            v215 = 1;
            v217 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v215;
          }
          *(_DWORD *)(v10 + 256) = v215;
          *(_BYTE *)(v10 + v217) = v218;
          *(_BYTE *)(v10 + 260) = v218;
        }
        while ( v216 != "" );
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
      }
      else
      {
        v467 = *(_WORD *)(v6 + 12);
        v468 = "_Fract";
        do
        {
          v469 = v215;
          result = v10;
          v471 = *v468++;
          v470 = v471;
          if ( v215 == 255 )
          {
            v472 = *(_DWORD *)(v10 + 268);
            v473 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = v467;
            result = v473(v10, 255, v472);
            v215 = 1;
            v469 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v215;
          }
          *(_DWORD *)(v10 + 256) = v215;
          *(_BYTE *)(v10 + v469) = v470;
          *(_BYTE *)(v10 + 260) = v470;
        }
        while ( "" != v468 );
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
      }
      goto LABEL_20;
    case 0x2E:
    case 0x2F:
      v225 = *(_DWORD *)(v6 + 8);
      if ( v225 )
        result = sub_86C84(v10, a2, v225);
      if ( *(_DWORD *)(v6 + 12) )
      {
        v226 = *(_DWORD *)(v10 + 256);
        if ( v226 > 0xFD )
        {
          v227 = *(_DWORD *)(v10 + 256);
          *(_BYTE *)(v10 + v226) = 0;
          v226 = 0;
          (*(void (__fastcall **)(size_t, int, _DWORD))(v10 + 264))(v10, v227, *(_DWORD *)(v10 + 268));
          v228 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v228 + 1;
        }
        v229 = 2;
        v230 = ", ";
        do
        {
          v231 = v226;
          v232 = 0;
          if ( v226 != 255 )
            v232 = v226;
          v234 = *v230++;
          v233 = v234;
          if ( v226 == 255 )
          {
            v226 = 1;
            *(_BYTE *)(v10 + 255) = 0;
            (*(void (__fastcall **)(size_t, unsigned int, _DWORD))(v10 + 264))(v10, v231, *(_DWORD *)(v10 + 268));
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v226;
          }
          v49 = v229 == 1;
          *(_DWORD *)(v10 + 256) = v226;
          v229 = 1;
          *(_BYTE *)(v10 + v232) = v233;
          *(_BYTE *)(v10 + 260) = v233;
        }
        while ( !v49 );
        v235 = a2;
        v236 = *(_DWORD *)(v10 + 292);
        result = sub_86C84(v10, v235, *(_DWORD *)(v6 + 12));
        if ( v236 == *(_DWORD *)(v10 + 292) )
        {
          v7 = v653;
          v5 = *(_DWORD *)(v6 + 4);
          if ( *(_DWORD *)(v10 + 256) == v226 )
            *(_DWORD *)(v10 + 256) = v232 - 1;
        }
        else
        {
          v7 = v653;
          v5 = *(_DWORD *)(v6 + 4);
        }
      }
      else
      {
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
      }
      goto LABEL_20;
    case 0x30:
      v204 = *(_QWORD *)(v6 + 8);
      if ( (_DWORD)v204 )
        sub_86C84(v10, a2, v204);
      v205 = *(_DWORD *)(v10 + 256);
      if ( v205 == 255 )
      {
        v206 = *(_QWORD *)(v10 + 264);
        *(_BYTE *)(v10 + 255) = 0;
        v205 = 0;
        ((void (__fastcall *)(size_t, int, _DWORD))v206)(v10, 255, HIDWORD(v206));
        v207 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v207 + 1;
      }
      *(_DWORD *)(v10 + 256) = v205 + 1;
      *(_BYTE *)(v10 + v205) = 123;
      *(_BYTE *)(v10 + 260) = 123;
      result = sub_86C84(v10, a2, HIDWORD(v204));
      v208 = *(_DWORD *)(v10 + 256);
      if ( v208 == 255 )
      {
        v209 = *(_QWORD *)(v10 + 264);
        *(_BYTE *)(v10 + 255) = 0;
        v208 = 0;
        result = ((int (__fastcall *)(size_t, int, _DWORD))v209)(v10, 255, HIDWORD(v209));
        v210 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v210 + 1;
      }
      *(_DWORD *)(v10 + 256) = v208 + 1;
      *(_BYTE *)(v10 + v208) = 125;
      v7 = v653;
      *(_BYTE *)(v10 + 260) = 125;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x31:
      v184 = *(_DWORD *)(v6 + 8);
      v185 = *(_DWORD *)(v10 + 256);
      v186 = *(_DWORD *)(v184 + 8);
      v187 = &byte_B6643;
      do
      {
        v188 = v185;
        result = v10;
        v190 = *++v187;
        v189 = v190;
        if ( v185 == 255 )
        {
          v191 = *(_DWORD *)(v10 + 268);
          v192 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          result = v192(v10, 255, v191);
          v185 = 1;
          v188 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v185;
        }
        *(_DWORD *)(v10 + 256) = v185;
        *(_BYTE *)(v10 + v188) = v189;
        *(_BYTE *)(v10 + 260) = v189;
      }
      while ( "r" != v187 );
      v193 = *(unsigned __int8 **)(v184 + 4);
      if ( (unsigned int)*v193 - 97 <= 0x19 )
      {
        if ( v185 == 255 )
        {
          *(_BYTE *)(v10 + 255) = 0;
          result = (*(int (__fastcall **)(size_t, int, _DWORD))(v10 + 264))(v10, 255, *(_DWORD *)(v10 + 268));
          v194 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v194 + 1;
        }
        v195 = *(_DWORD *)(v10 + 256);
        *(_DWORD *)(v10 + 256) = v195 + 1;
        *(_BYTE *)(v10 + v195) = 32;
        *(_BYTE *)(v10 + 260) = 32;
        v193 = *(unsigned __int8 **)(v184 + 4);
      }
      if ( v193[v186 - 1] == 32 )
        --v186;
      if ( v186 )
      {
        v196 = *(_DWORD *)(v10 + 256);
        v197 = v193 - 1;
        v198 = &v197[v186];
        do
        {
          v199 = v196;
          result = v10;
          v201 = *++v197;
          v200 = v201;
          if ( v196 == 255 )
          {
            v202 = *(_DWORD *)(v10 + 268);
            v203 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            result = v203(v10, 255, v202);
            v196 = 1;
            v199 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v196;
          }
          *(_DWORD *)(v10 + 256) = v196;
          *(_BYTE *)(v10 + v199) = v200;
          *(_BYTE *)(v10 + 260) = v200;
        }
        while ( v198 != v197 );
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
      }
      else
      {
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
      }
      goto LABEL_20;
    case 0x32:
      v177 = *(_DWORD *)(v10 + 256);
      v178 = "operator ";
      do
      {
        v179 = v177;
        v181 = *v178++;
        v180 = v181;
        if ( v177 == 255 )
        {
          v182 = *(_DWORD *)(v10 + 268);
          v183 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v183(v10, 255, v182);
          v177 = 1;
          v179 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v177;
        }
        *(_DWORD *)(v10 + 256) = v177;
        *(_BYTE *)(v10 + v179) = v180;
        *(_BYTE *)(v10 + 260) = v180;
      }
      while ( "" != v178 );
      goto LABEL_355;
    case 0x34:
      v168 = *(_DWORD *)(v10 + 256);
      v169 = "operator ";
      do
      {
        v170 = v168;
        v172 = *v169++;
        v171 = v172;
        if ( v168 == 255 )
        {
          v173 = *(_DWORD *)(v10 + 268);
          v174 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v174(v10, 255, v173);
          v168 = 1;
          v170 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v168;
        }
        *(_DWORD *)(v10 + 256) = v168;
        *(_BYTE *)(v10 + v170) = v171;
        *(_BYTE *)(v10 + 260) = v171;
      }
      while ( "" != v169 );
      if ( *(_DWORD *)(v10 + 324) )
      {
        v175 = *(_DWORD *)(v10 + 272);
        v656 = *(_DWORD **)(v10 + 324);
        *(_DWORD *)s = v175;
        *(_DWORD *)(v10 + 272) = s;
      }
      v176 = *(_DWORD **)(v6 + 8);
      if ( *v176 == 4 )
      {
        sub_86C84(v10, a2, v176[2]);
        if ( *(_DWORD *)(v10 + 324) )
          *(_DWORD *)(v10 + 272) = *(_DWORD *)s;
        if ( *(_BYTE *)(v10 + 260) == 60 )
        {
          v622 = *(_DWORD *)(v10 + 256);
          if ( v622 == 255 )
          {
            v623 = *(_QWORD *)(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v622 = 0;
            ((void (__fastcall *)(size_t, int, _DWORD))v623)(v10, 255, HIDWORD(v623));
            v624 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v624 + 1;
          }
          *(_DWORD *)(v10 + 256) = v622 + 1;
          *(_BYTE *)(v10 + v622) = 32;
          *(_BYTE *)(v10 + 260) = 32;
        }
        v535 = *(_DWORD *)(v10 + 256);
        if ( v535 == 255 )
        {
          v536 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v535 = 0;
          ((void (__fastcall *)(size_t, int, _DWORD))v536)(v10, 255, HIDWORD(v536));
          v537 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v537 + 1;
        }
        *(_DWORD *)(v10 + 256) = v535 + 1;
        *(_BYTE *)(v10 + v535) = 60;
        *(_BYTE *)(v10 + 260) = 60;
        result = sub_86C84(v10, a2, *(_DWORD *)(*(_DWORD *)(v6 + 8) + 12));
        if ( *(_BYTE *)(v10 + 260) == 62 )
        {
          v625 = *(_DWORD *)(v10 + 256);
          if ( v625 == 255 )
          {
            v626 = *(_QWORD *)(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v625 = 0;
            result = ((int (__fastcall *)(size_t, int, _DWORD))v626)(v10, 255, HIDWORD(v626));
            v627 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v627 + 1;
          }
          *(_DWORD *)(v10 + 256) = v625 + 1;
          *(_BYTE *)(v10 + v625) = 32;
          *(_BYTE *)(v10 + 260) = 32;
        }
        v538 = *(_DWORD *)(v10 + 256);
        if ( v538 == 255 )
        {
          v539 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v538 = 0;
          result = ((int (__fastcall *)(size_t, int, _DWORD))v539)(v10, 255, HIDWORD(v539));
          v540 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v540 + 1;
        }
        *(_DWORD *)(v10 + 256) = v538 + 1;
        *(_BYTE *)(v10 + v538) = 62;
        *(_BYTE *)(v10 + 260) = 62;
      }
      else
      {
        result = sub_86C84(v10, a2, v176);
        if ( *(_DWORD *)(v10 + 324) )
          *(_DWORD *)(v10 + 272) = *(_DWORD *)s;
      }
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x35:
      result = sub_8A454(v10, a2, *(_DWORD **)(v6 + 8));
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x36:
      v160 = *(unsigned int **)(v6 + 12);
      v161 = *(_DWORD *)(v6 + 8);
      if ( *(_DWORD *)v161 == 49 )
      {
        v541 = *v160;
        v542 = **(unsigned __int8 ***)(v161 + 8);
        v543 = *v542;
        if ( v543 == 97 && v542[1] == 100 && !v542[2] && v541 == 3 )
        {
          if ( *(_DWORD *)v160[2] == 1 && *(_DWORD *)v160[3] == 41 )
            v160 = (unsigned int *)v160[2];
        }
        else
        {
          if ( v541 == 56 )
          {
            sub_8A4B8(v10, a2, (unsigned int *)v160[2]);
            result = sub_8A454(v10, a2, (_DWORD *)v161);
            v7 = v653;
            v5 = *(_DWORD *)(v6 + 4);
            goto LABEL_20;
          }
          if ( v543 == 115 )
          {
            v544 = v542[1];
            if ( v544 == 90 )
            {
              if ( !v542[2] )
              {
                v545 = sub_84820(v10, v160);
                while ( v545 && *v545 == 47 && v545[2] )
                {
                  v545 = (_DWORD *)v545[3];
                  ++v9;
                }
                result = sub_84988(v10, v9);
                v7 = v653;
                v5 = *(_DWORD *)(v6 + 4);
                goto LABEL_20;
              }
            }
            else if ( v544 == 80 && !v542[2] )
            {
              v546 = v542[2];
              v547 = *(_DWORD **)(v6 + 12);
              do
              {
                if ( *v547 != 47 )
                  break;
                v548 = v547[2];
                if ( !v548 )
                  break;
                if ( *(_DWORD *)v548 == 74 )
                {
                  v549 = sub_84820(v10, *(_DWORD **)(v548 + 8));
                  if ( v549 && *v549 == 47 )
                  {
                    v550 = v549[2];
                    if ( v550 )
                    {
                      v550 = 0;
                      do
                      {
                        v549 = (_DWORD *)v549[3];
                        ++v550;
                      }
                      while ( v549 && *v549 == 47 && v549[2] );
                    }
                    v546 += v550;
                  }
                }
                else
                {
                  ++v546;
                }
                v547 = (_DWORD *)v547[3];
              }
              while ( v547 );
              result = sub_84988(v10, v546);
              v7 = v653;
              v5 = *(_DWORD *)(v6 + 4);
              goto LABEL_20;
            }
          }
        }
      }
      else
      {
        if ( *(_DWORD *)v161 == 51 )
        {
          v162 = *(_DWORD *)(v10 + 256);
          if ( v162 == 255 )
          {
            v163 = *(_QWORD *)(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v162 = 0;
            ((void (__fastcall *)(size_t, int, _DWORD))v163)(v10, 255, HIDWORD(v163));
            v164 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v164 + 1;
          }
          *(_DWORD *)(v10 + 256) = v162 + 1;
          *(_BYTE *)(v10 + v162) = 40;
          *(_BYTE *)(v10 + 260) = 40;
          sub_86C84(v10, a2, *(_DWORD *)(v161 + 8));
          v165 = *(_DWORD *)(v10 + 256);
          if ( v165 == 255 )
          {
            v166 = *(_QWORD *)(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v165 = 0;
            ((void (__fastcall *)(size_t, int, _DWORD))v166)(v10, 255, HIDWORD(v166));
            v167 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v167 + 1;
          }
          *(_DWORD *)(v10 + 256) = v165 + 1;
          *(_BYTE *)(v10 + v165) = 41;
          *(_BYTE *)(v10 + 260) = 41;
          goto LABEL_157;
        }
        v542 = nullptr;
      }
      sub_8A454(v10, a2, (_DWORD *)v161);
      if ( v542 )
      {
        v551 = *v542;
        if ( v551 == 103 )
        {
          if ( v542[1] == 115 && !v542[2] )
          {
            result = sub_86C84(v10, a2, v160);
            v7 = v653;
            v5 = *(_DWORD *)(v6 + 4);
            goto LABEL_20;
          }
        }
        else if ( v551 == 115 && v542[1] == 116 && !v542[2] )
        {
          v573 = *(_DWORD *)(v10 + 256);
          if ( v573 == 255 )
          {
            v574 = *(void (__fastcall **)(size_t, int, _DWORD))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v573 = 0;
            v574(v10, 255, *(_DWORD *)(v10 + 268));
            v575 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v575 + 1;
          }
          *(_DWORD *)(v10 + 256) = v573 + 1;
          *(_BYTE *)(v10 + v573) = 40;
          *(_BYTE *)(v10 + 260) = 40;
          result = sub_86C84(v10, a2, v160);
          v576 = *(_DWORD *)(v10 + 256);
          if ( v576 == 255 )
          {
            v577 = *(_QWORD *)(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v576 = 0;
            result = ((int (__fastcall *)(size_t, int, _DWORD))v577)(v10, 255, HIDWORD(v577));
            v578 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v578 + 1;
          }
          *(_DWORD *)(v10 + 256) = v576 + 1;
          *(_BYTE *)(v10 + v576) = 41;
          v7 = v653;
          *(_BYTE *)(v10 + 260) = 41;
          v5 = *(_DWORD *)(v6 + 4);
          goto LABEL_20;
        }
      }
LABEL_157:
      result = sub_8A4B8(v10, a2, v160);
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x37:
      if ( **(_DWORD **)(v6 + 12) != 56 )
      {
        *(_DWORD *)(v10 + 280) = 1;
        v5 = *(_DWORD *)(v6 + 4);
        goto LABEL_20;
      }
      v526 = *(_DWORD *)(v6 + 8);
      v527 = **(unsigned __int8 ***)(v526 + 8);
      if ( v527[1] == 99 )
      {
        v528 = *v527;
        if ( (unsigned int)(v528 - 99) <= 1 || (unsigned int)(v528 - 114) <= 1 )
        {
          sub_8A454(v10, a2, (_DWORD *)v526);
          v529 = *(_DWORD *)(v10 + 256);
          if ( v529 == 255 )
          {
            v530 = *(_QWORD *)(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v529 = 0;
            ((void (__fastcall *)(size_t, int, _DWORD))v530)(v10, 255, HIDWORD(v530));
            v531 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v531 + 1;
          }
          *(_DWORD *)(v10 + 256) = v529 + 1;
          *(_BYTE *)(v10 + v529) = 60;
          *(_BYTE *)(v10 + 260) = 60;
          sub_86C84(v10, a2, *(_DWORD *)(*(_DWORD *)(v6 + 12) + 8));
          sub_84350(v10, (int)">(", 2);
          result = sub_86C84(v10, a2, *(_DWORD *)(*(_DWORD *)(v6 + 12) + 12));
          v532 = *(_DWORD *)(v10 + 256);
          if ( v532 == 255 )
          {
            v533 = *(_QWORD *)(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v532 = 0;
            result = ((int (__fastcall *)(size_t, int, _DWORD))v533)(v10, 255, HIDWORD(v533));
            v534 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v534 + 1;
          }
          *(_DWORD *)(v10 + 256) = v532 + 1;
          *(_BYTE *)(v10 + v532) = 41;
          v7 = v653;
          *(_BYTE *)(v10 + 260) = 41;
          v5 = *(_DWORD *)(v6 + 4);
          goto LABEL_20;
        }
      }
      result = sub_8A550(v10, a2, v526, v6 + 12);
      if ( result )
      {
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
        goto LABEL_20;
      }
      v11 = *(_DWORD **)(v6 + 8);
      if ( *v11 == 49 )
      {
        v619 = v11[2];
        if ( *(_DWORD *)(v619 + 8) == 1 && **(_BYTE **)(v619 + 4) == 62 )
        {
          v620 = *(_DWORD *)(v10 + 256);
          if ( v620 == 255 )
          {
            *(_BYTE *)(v10 + 255) = 0;
            v620 = 0;
            (*(void (__fastcall **)(size_t, int, _DWORD))(v10 + 264))(v10, 255, *(_DWORD *)(v10 + 268));
            v621 = *(_DWORD *)(v10 + 292);
            *(_DWORD *)(v10 + 256) = 0;
            *(_DWORD *)(v10 + 292) = v621 + 1;
          }
          *(_DWORD *)(v10 + 256) = v620 + 1;
          *(_BYTE *)(v10 + v620) = 40;
          *(_BYTE *)(v10 + 260) = 40;
          v11 = *(_DWORD **)(v6 + 8);
        }
      }
      v12 = *(_BYTE **)v11[2];
      v13 = *(_DWORD *)(*(_DWORD *)(v6 + 12) + 8);
      if ( *v12 == 99 && v12[1] == 108 && !v12[2] && *(_DWORD *)v13 == 3 )
      {
        if ( **(_DWORD **)(v13 + 12) != 41 )
          *(_DWORD *)(v10 + 280) = 1;
        sub_8A4B8(v10, a2, *(unsigned int **)(v13 + 8));
      }
      else
      {
        sub_8A4B8(v10, a2, (unsigned int *)v13);
      }
      v14 = *(_DWORD *)(v6 + 8);
      v15 = **(unsigned __int8 ***)(v14 + 8);
      v16 = *v15;
      if ( v16 == 105 )
      {
        if ( v15[1] == 120 )
        {
          v628 = v15[2];
          if ( !v15[2] )
          {
            v629 = *(_DWORD *)(v10 + 256);
            if ( v629 == 255 )
            {
              v630 = *(void (__fastcall **)(size_t, int, _DWORD))(v10 + 264);
              *(_BYTE *)(v10 + 255) = v628;
              v629 = v628;
              v630(v10, 255, *(_DWORD *)(v10 + 268));
              v631 = *(_DWORD *)(v10 + 292);
              *(_DWORD *)(v10 + 256) = v628;
              *(_DWORD *)(v10 + 292) = v631 + 1;
            }
            *(_DWORD *)(v10 + 256) = v629 + 1;
            *(_BYTE *)(v10 + v629) = 91;
            *(_BYTE *)(v10 + 260) = 91;
            result = sub_86C84(v10, a2, *(_DWORD *)(*(_DWORD *)(v6 + 12) + 12));
            v632 = *(_DWORD *)(v10 + 256);
            if ( v632 == 255 )
            {
              v633 = *(_QWORD *)(v10 + 264);
              *(_BYTE *)(v10 + 255) = 0;
              v632 = 0;
              result = ((int (__fastcall *)(size_t, int, _DWORD))v633)(v10, 255, HIDWORD(v633));
              v634 = *(_DWORD *)(v10 + 292);
              *(_DWORD *)(v10 + 256) = 0;
              *(_DWORD *)(v10 + 292) = v634 + 1;
            }
            *(_DWORD *)(v10 + 256) = v632 + 1;
            *(_BYTE *)(v10 + v632) = 93;
            *(_BYTE *)(v10 + 260) = 93;
LABEL_18:
            v17 = *(_DWORD **)(v6 + 8);
            if ( *v17 == 49 && (v615 = v17[2], *(_DWORD *)(v615 + 8) == 1) && **(_BYTE **)(v615 + 4) == 62 )
            {
              v616 = *(_DWORD *)(v10 + 256);
              if ( v616 == 255 )
              {
                v617 = *(_QWORD *)(v10 + 264);
                *(_BYTE *)(v10 + 255) = 0;
                v616 = 0;
                result = ((int (__fastcall *)(size_t, int, _DWORD))v617)(v10, 255, HIDWORD(v617));
                v618 = *(_DWORD *)(v10 + 292);
                *(_DWORD *)(v10 + 256) = 0;
                *(_DWORD *)(v10 + 292) = v618 + 1;
              }
              *(_DWORD *)(v10 + 256) = v616 + 1;
              *(_BYTE *)(v10 + v616) = 41;
              v7 = v653;
              *(_BYTE *)(v10 + 260) = 41;
              v5 = *(_DWORD *)(v6 + 4);
            }
            else
            {
              v7 = v653;
              v5 = *(_DWORD *)(v6 + 4);
            }
            goto LABEL_20;
          }
        }
      }
      else if ( v16 == 99 && v15[1] == 108 && !v15[2] )
      {
        goto LABEL_17;
      }
      sub_8A454(v10, a2, (_DWORD *)v14);
LABEL_17:
      result = sub_8A4B8(v10, a2, *(unsigned int **)(*(_DWORD *)(v6 + 12) + 12));
      goto LABEL_18;
    case 0x38:
      *(_DWORD *)(v10 + 280) = 1;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x39:
      v159 = *(_DWORD *)(v6 + 12);
      if ( *(_DWORD *)v159 == 58 && **(_DWORD **)(v159 + 12) == 59 )
      {
        result = sub_8A550(v10, a2, *(_DWORD *)(v6 + 8), v6 + 12);
        if ( result )
        {
          v7 = v653;
          v5 = *(_DWORD *)(v6 + 4);
        }
        else
        {
          v521 = *(_QWORD *)(v6 + 8);
          v522 = *(_DWORD **)(v521 + 8);
          v523 = *(_QWORD *)(HIDWORD(v521) + 8);
          v524 = (_BYTE *)*v522;
          v525 = *(_QWORD *)(HIDWORD(v523) + 8);
          if ( *(_BYTE *)*v522 == 113 && v524[1] == 117 && !v524[2] )
          {
            sub_8A4B8(v10, a2, (unsigned int *)v523);
            sub_8A454(v10, a2, (_DWORD *)v521);
            sub_8A4B8(v10, a2, (unsigned int *)v525);
            sub_84350(v10, (int)" : ", 3);
            result = sub_8A4B8(v10, a2, (unsigned int *)HIDWORD(v525));
            v7 = v653;
            v5 = *(_DWORD *)(v6 + 4);
          }
          else
          {
            sub_84350(v10, (int)"new ", 4);
            if ( *(_DWORD *)(v523 + 8) )
            {
              sub_8A4B8(v10, a2, (unsigned int *)v523);
              v644 = *(_DWORD *)(v10 + 256);
              if ( v644 == 255 )
              {
                v645 = *(_QWORD *)(v10 + 264);
                *(_BYTE *)(v10 + 255) = 0;
                v644 = 0;
                ((void (__fastcall *)(size_t, int, _DWORD))v645)(v10, 255, HIDWORD(v645));
                v646 = *(_DWORD *)(v10 + 292);
                *(_DWORD *)(v10 + 256) = 0;
                *(_DWORD *)(v10 + 292) = v646 + 1;
              }
              *(_DWORD *)(v10 + 256) = v644 + 1;
              *(_BYTE *)(v10 + v644) = 32;
              *(_BYTE *)(v10 + 260) = 32;
            }
            result = sub_86C84(v10, a2, v525);
            if ( HIDWORD(v525) )
              result = sub_8A4B8(v10, a2, (unsigned int *)HIDWORD(v525));
            v7 = v653;
            v5 = *(_DWORD *)(v6 + 4);
          }
        }
      }
      else
      {
        *(_DWORD *)(v10 + 280) = 1;
        v5 = *(_DWORD *)(v6 + 4);
      }
      goto LABEL_20;
    case 0x3A:
    case 0x3B:
      *(_DWORD *)(v10 + 280) = 1;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x3C:
    case 0x3D:
      v151 = *(_DWORD **)(v6 + 8);
      if ( *v151 == 39 )
      {
        v152 = *(_DWORD *)(v151[2] + 16);
        if ( v152 )
        {
          if ( v152 <= 6 )
          {
            if ( !**(_DWORD **)(v6 + 12) )
            {
              if ( result == 61 )
              {
                v641 = *(_DWORD *)(v10 + 256);
                if ( v641 == 255 )
                {
                  v642 = *(void (__fastcall **)(size_t, int, _DWORD))(v10 + 264);
                  *(_BYTE *)(v10 + 255) = 0;
                  v641 = 0;
                  v642(v10, 255, *(_DWORD *)(v10 + 268));
                  v643 = *(_DWORD *)(v10 + 292);
                  *(_DWORD *)(v10 + 256) = 0;
                  *(_DWORD *)(v10 + 292) = v643 + 1;
                }
                *(_DWORD *)(v10 + 256) = v641 + 1;
                *(_BYTE *)(v10 + v641) = 45;
                *(_BYTE *)(v10 + 260) = 45;
              }
              result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
              switch ( v152 )
              {
                case 2u:
                  v638 = *(_DWORD *)(v10 + 256);
                  if ( v638 == 255 )
                  {
                    v639 = *(_QWORD *)(v10 + 264);
                    *(_BYTE *)(v10 + 255) = 0;
                    v638 = 0;
                    result = ((int (__fastcall *)(size_t, int, _DWORD))v639)(v10, 255, HIDWORD(v639));
                    v640 = *(_DWORD *)(v10 + 292);
                    *(_DWORD *)(v10 + 256) = 0;
                    *(_DWORD *)(v10 + 292) = v640 + 1;
                  }
                  *(_DWORD *)(v10 + 256) = v638 + 1;
                  *(_BYTE *)(v10 + v638) = 117;
                  v7 = v653;
                  *(_BYTE *)(v10 + 260) = 117;
                  v5 = *(_DWORD *)(v6 + 4);
                  break;
                case 3u:
                  v635 = *(_DWORD *)(v10 + 256);
                  if ( v635 == 255 )
                  {
                    v636 = *(_QWORD *)(v10 + 264);
                    *(_BYTE *)(v10 + 255) = 0;
                    v635 = 0;
                    result = ((int (__fastcall *)(size_t, int, _DWORD))v636)(v10, 255, HIDWORD(v636));
                    v637 = *(_DWORD *)(v10 + 292);
                    *(_DWORD *)(v10 + 256) = 0;
                    *(_DWORD *)(v10 + 292) = v637 + 1;
                  }
                  *(_DWORD *)(v10 + 256) = v635 + 1;
                  *(_BYTE *)(v10 + v635) = 108;
                  v7 = v653;
                  *(_BYTE *)(v10 + 260) = 108;
                  v5 = *(_DWORD *)(v6 + 4);
                  break;
                case 4u:
                  result = sub_84350(v10, (int)"ul", 2);
                  v7 = v653;
                  v5 = *(_DWORD *)(v6 + 4);
                  break;
                case 5u:
                  result = sub_84350(v10, (int)"ll", 2);
                  v7 = v653;
                  v5 = *(_DWORD *)(v6 + 4);
                  break;
                case 6u:
                  result = sub_84350(v10, (int)"ull", 3);
                  v7 = v653;
                  v5 = *(_DWORD *)(v6 + 4);
                  break;
                default:
                  v7 = v653;
                  v5 = *(_DWORD *)(v6 + 4);
                  break;
              }
              goto LABEL_20;
            }
          }
          else if ( v152 == 7 )
          {
            v552 = *(_DWORD *)(v6 + 12);
            if ( !*(_DWORD *)v552 && *(_DWORD *)(v552 + 12) == 1 && result == 60 )
            {
              v553 = **(unsigned __int8 **)(v552 + 8);
              if ( v553 == 48 )
              {
                result = sub_84350(v10, (int)"false", 5);
                v7 = v653;
                v5 = *(_DWORD *)(v6 + 4);
                goto LABEL_20;
              }
              if ( v553 == 49 )
              {
                result = sub_84350(v10, (int)"true", 4);
                v7 = v653;
                v5 = *(_DWORD *)(v6 + 4);
                goto LABEL_20;
              }
            }
          }
        }
      }
      else
      {
        v152 = 0;
      }
      v153 = *(_DWORD *)(v10 + 256);
      if ( v153 == 255 )
      {
        v154 = *(_QWORD *)(v10 + 264);
        *(_BYTE *)(v10 + 255) = 0;
        v153 = 0;
        ((void (__fastcall *)(size_t, int, _DWORD))v154)(v10, 255, HIDWORD(v154));
        v155 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v155 + 1;
      }
      *(_DWORD *)(v10 + 256) = v153 + 1;
      *(_BYTE *)(v10 + v153) = 40;
      *(_BYTE *)(v10 + 260) = 40;
      sub_86C84(v10, a2, *(_DWORD *)(v6 + 8));
      v156 = *(_DWORD *)(v10 + 256);
      if ( v156 == 255 )
      {
        *(_BYTE *)(v10 + 255) = 0;
        (*(void (__fastcall **)(size_t, int, _DWORD))(v10 + 264))(v10, 255, *(_DWORD *)(v10 + 268));
        v157 = *(_DWORD *)(v10 + 292);
        *(_BYTE *)v10 = 41;
        *(_BYTE *)(v10 + 260) = 41;
        v158 = *(_DWORD *)v6;
        *(_DWORD *)(v10 + 292) = v157 + 1;
        *(_DWORD *)(v10 + 256) = 1;
        if ( v158 != 61 )
          goto LABEL_142;
      }
      else
      {
        *(_DWORD *)(v10 + 256) = v156 + 1;
        *(_BYTE *)(v10 + v156) = 41;
        *(_BYTE *)(v10 + 260) = 41;
        if ( *(_DWORD *)v6 != 61 )
          goto LABEL_142;
        if ( v156 == 254 )
        {
          v561 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          ((void (__fastcall *)(size_t, int, _DWORD))v561)(v10, 255, HIDWORD(v561));
          v562 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v562 + 1;
        }
      }
      v563 = *(_DWORD *)(v10 + 256);
      *(_DWORD *)(v10 + 256) = v563 + 1;
      *(_BYTE *)(v10 + v563) = 45;
      *(_BYTE *)(v10 + 260) = 45;
LABEL_142:
      if ( v152 == 8 )
      {
        v564 = *(_DWORD *)(v10 + 256);
        if ( v564 == 255 )
        {
          v565 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v564 = 0;
          ((void (__fastcall *)(size_t, int, _DWORD))v565)(v10, 255, HIDWORD(v565));
          v566 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v566 + 1;
        }
        *(_DWORD *)(v10 + 256) = v564 + 1;
        *(_BYTE *)(v10 + v564) = 91;
        *(_BYTE *)(v10 + 260) = 91;
        result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
        v567 = *(_DWORD *)(v10 + 256);
        if ( v567 == 255 )
        {
          v568 = *(_QWORD *)(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v567 = 0;
          result = ((int (__fastcall *)(size_t, int, _DWORD))v568)(v10, 255, HIDWORD(v568));
          v569 = *(_DWORD *)(v10 + 292);
          *(_DWORD *)(v10 + 256) = 0;
          *(_DWORD *)(v10 + 292) = v569 + 1;
        }
        *(_DWORD *)(v10 + 256) = v567 + 1;
        *(_BYTE *)(v10 + v567) = 93;
        v7 = v653;
        *(_BYTE *)(v10 + 260) = 93;
        v5 = *(_DWORD *)(v6 + 4);
      }
      else
      {
LABEL_355:
        result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
      }
      goto LABEL_20;
    case 0x3E:
      v144 = *(_DWORD *)(v10 + 256);
      v145 = "";
      do
      {
        v146 = v144;
        v148 = *++v145;
        v147 = v148;
        if ( v144 == 255 )
        {
          v149 = *(_DWORD *)(v10 + 268);
          v150 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v150(v10, 255, v149);
          v144 = 1;
          v146 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v144;
        }
        *(_DWORD *)(v10 + 256) = v144;
        *(_BYTE *)(v10 + v146) = v147;
        *(_BYTE *)(v10 + 260) = v147;
      }
      while ( " " != v145 );
      goto LABEL_388;
    case 0x3F:
      sub_86C84(v10, a2, *(_DWORD *)(v6 + 8));
      result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x40:
      v130 = *(_DWORD *)(v10 + 256);
      v131 = *(_BYTE *)(v6 + 8);
      if ( v130 == 255 )
      {
        v132 = *(_QWORD *)(v10 + 264);
        *(_BYTE *)(v10 + 255) = 0;
        v130 = 0;
        result = ((int (__fastcall *)(size_t, int, _DWORD))v132)(v10, 255, HIDWORD(v132));
        v133 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v133 + 1;
      }
      v7 = v653;
      *(_DWORD *)(v10 + 256) = v130 + 1;
      *(_BYTE *)(v10 + v130) = v131;
      *(_BYTE *)(v10 + 260) = v131;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x41:
      v122 = s;
      sprintf(s, "%d", *(_DWORD *)(v6 + 8));
      result = strlen(s);
      if ( result )
      {
        v123 = *(_DWORD *)(v10 + 256);
        v124 = &s[result];
        do
        {
          v125 = v123;
          result = v10;
          v127 = *v122++;
          v126 = v127;
          if ( v123 == 255 )
          {
            v128 = *(_DWORD *)(v10 + 268);
            v129 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            result = v129(v10, 255, v128);
            v123 = 1;
            v125 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v123;
          }
          *(_DWORD *)(v10 + 256) = v123;
          *(_BYTE *)(v10 + v125) = v126;
          *(_BYTE *)(v10 + 260) = v126;
        }
        while ( v124 != v122 );
      }
      v7 = v653;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x42:
      v134 = *(_DWORD *)(v10 + 256);
      v135 = "decltype (";
      do
      {
        v136 = v134;
        v138 = *v135++;
        v137 = v138;
        if ( v134 == 255 )
        {
          v139 = *(_DWORD *)(v10 + 268);
          v140 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v140(v10, 255, v139);
          v134 = 1;
          v136 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v134;
        }
        *(_DWORD *)(v10 + 256) = v134;
        *(_BYTE *)(v10 + v136) = v137;
        *(_BYTE *)(v10 + 260) = v137;
      }
      while ( "" != v135 );
      result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 8));
      v141 = *(_DWORD *)(v10 + 256);
      if ( v141 == 255 )
      {
        v142 = *(_QWORD *)(v10 + 264);
        *(_BYTE *)(v10 + 255) = 0;
        v141 = 0;
        result = ((int (__fastcall *)(size_t, int, _DWORD))v142)(v10, 255, HIDWORD(v142));
        v143 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v143 + 1;
      }
      *(_DWORD *)(v10 + 256) = v141 + 1;
      *(_BYTE *)(v10 + v141) = 41;
      v7 = v653;
      *(_BYTE *)(v10 + 260) = 41;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x43:
      v108 = *(_DWORD *)(v10 + 256);
      v109 = &byte_B6693;
      do
      {
        v110 = v108;
        v112 = *++v109;
        v111 = v112;
        if ( v108 == 255 )
        {
          v113 = *(_DWORD *)(v10 + 268);
          v114 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v114(v10, 255, v113);
          v108 = 1;
          v110 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v108;
        }
        *(_DWORD *)(v10 + 256) = v108;
        *(_BYTE *)(v10 + v110) = v111;
        *(_BYTE *)(v10 + 260) = v111;
      }
      while ( " " != v109 );
      goto LABEL_388;
    case 0x44:
      v115 = *(_DWORD *)(v10 + 256);
      v116 = &byte_B66B3;
      do
      {
        v117 = v115;
        v119 = *++v116;
        v118 = v119;
        if ( v115 == 255 )
        {
          v120 = *(_DWORD *)(v10 + 268);
          v121 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v121(v10, 255, v120);
          v115 = 1;
          v117 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v115;
        }
        *(_DWORD *)(v10 + 256) = v115;
        *(_BYTE *)(v10 + v117) = v118;
        *(_BYTE *)(v10 + 260) = v118;
      }
      while ( " " != v116 );
      goto LABEL_388;
    case 0x45:
      v82 = *(_DWORD *)(v10 + 256);
      v83 = &byte_B66D3;
      do
      {
        v84 = v82;
        v86 = *++v83;
        v85 = v86;
        if ( v82 == 255 )
        {
          v87 = *(_DWORD *)(v10 + 268);
          v88 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v88(v10, 255, v87);
          v82 = 1;
          v84 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v82;
        }
        *(_DWORD *)(v10 + 256) = v82;
        *(_BYTE *)(v10 + v84) = v85;
        *(_BYTE *)(v10 + 260) = v85;
      }
      while ( "(" != v83 );
      v89 = *(_DWORD *)(v6 + 8);
      v90 = 2;
      ++*(_DWORD *)(v10 + 284);
      sub_86C84(v10, a2, v89);
      v91 = ")#";
      v92 = *(_DWORD *)(v10 + 256);
      --*(_DWORD *)(v10 + 284);
      do
      {
        v93 = v92;
        v95 = *v91++;
        v94 = v95;
        if ( v92 == 255 )
        {
          v96 = *(_DWORD *)(v10 + 268);
          v97 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v97(v10, 255, v96);
          v92 = 1;
          v93 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v92;
        }
        v49 = v90 == 1;
        *(_DWORD *)(v10 + 256) = v92;
        v90 = 1;
        *(_BYTE *)(v10 + v93) = v94;
        *(_BYTE *)(v10 + 260) = v94;
      }
      while ( !v49 );
      v98 = s;
      sprintf(s, "%d", *(_DWORD *)(v6 + 12) + 1);
      v99 = strlen(s);
      v100 = *(_DWORD *)(v10 + 256);
      if ( v99 )
      {
        v101 = &s[v99];
        do
        {
          v102 = v100;
          v104 = *v98++;
          v103 = v104;
          if ( v100 == 255 )
          {
            v105 = *(_DWORD *)(v10 + 268);
            v106 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v106(v10, 255, v105);
            v100 = 1;
            v102 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v100;
          }
          *(_DWORD *)(v10 + 256) = v100;
          *(_BYTE *)(v10 + v102) = v103;
          *(_BYTE *)(v10 + 260) = v103;
        }
        while ( v101 != v98 );
      }
      if ( v100 == 255 )
      {
        *(_BYTE *)(v10 + 255) = 0;
        (*(void (__fastcall **)(size_t, int, _DWORD))(v10 + 264))(v10, 255, *(_DWORD *)(v10 + 268));
        v107 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v107 + 1;
      }
      goto LABEL_77;
    case 0x47:
      v64 = *(_DWORD *)(v10 + 256);
      v65 = &algn_B66E3;
      do
      {
        v66 = v64;
        v68 = *++v65;
        v67 = v68;
        if ( v64 == 255 )
        {
          v69 = *(_DWORD *)(v10 + 268);
          v70 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v70(v10, 255, v69);
          v64 = 1;
          v66 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v64;
        }
        *(_DWORD *)(v10 + 256) = v64;
        *(_BYTE *)(v10 + v66) = v67;
        *(_BYTE *)(v10 + 260) = v67;
      }
      while ( v65 != "#" );
      v71 = s;
      sprintf(s, "%d", *(_DWORD *)(v6 + 8) + 1);
      v72 = strlen(s);
      v73 = *(_DWORD *)(v10 + 256);
      if ( v72 )
      {
        v74 = &s[v72];
        do
        {
          v75 = v73;
          v77 = *v71++;
          v76 = v77;
          if ( v73 == 255 )
          {
            v78 = *(_DWORD *)(v10 + 268);
            v79 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
            *(_BYTE *)(v10 + 255) = 0;
            v79(v10, 255, v78);
            v73 = 1;
            v75 = 0;
            ++*(_DWORD *)(v10 + 292);
          }
          else
          {
            ++v73;
          }
          *(_DWORD *)(v10 + 256) = v73;
          *(_BYTE *)(v10 + v75) = v76;
          *(_BYTE *)(v10 + 260) = v76;
        }
        while ( v74 != v71 );
      }
      if ( v73 == 255 )
      {
        *(_BYTE *)(v10 + 255) = 0;
        (*(void (__fastcall **)(size_t, int, _DWORD))(v10 + 264))(v10, 255, *(_DWORD *)(v10 + 268));
        v80 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v80 + 1;
      }
LABEL_77:
      v81 = *(_DWORD *)(v10 + 256);
      v7 = v653;
      result = v81 + 1;
      *(_DWORD *)(v10 + 256) = v81 + 1;
      *(_BYTE *)(v10 + v81) = 125;
      *(_BYTE *)(v10 + 260) = 125;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x48:
      v57 = *(_DWORD *)(v10 + 256);
      v58 = "-transaction clone for ";
      do
      {
        v59 = v57;
        v61 = *++v58;
        v60 = v61;
        if ( v57 == 255 )
        {
          v62 = *(_DWORD *)(v10 + 268);
          v63 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v63(v10, 255, v62);
          v57 = 1;
          v59 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v57;
        }
        *(_DWORD *)(v10 + 256) = v57;
        *(_BYTE *)(v10 + v59) = v60;
        *(_BYTE *)(v10 + 260) = v60;
      }
      while ( v58 != " " );
      goto LABEL_388;
    case 0x49:
      v50 = *(_DWORD *)(v10 + 256);
      v51 = &byte_B660B;
      do
      {
        v52 = v50;
        v54 = *++v51;
        v53 = v54;
        if ( v50 == 255 )
        {
          v55 = *(_DWORD *)(v10 + 268);
          v56 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v56(v10, 255, v55);
          v50 = 1;
          v52 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v50;
        }
        *(_DWORD *)(v10 + 256) = v50;
        *(_BYTE *)(v10 + v52) = v53;
        *(_BYTE *)(v10 + 260) = v53;
      }
      while ( " " != v51 );
      goto LABEL_388;
    case 0x4A:
      result = (int)sub_84820(v10, *(_DWORD **)(v6 + 8));
      v38 = 0;
      if ( !result )
      {
        sub_8A4B8(v10, a2, *(unsigned int **)(v6 + 8));
        result = sub_84350(v10, (int)"...", 3);
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
        goto LABEL_20;
      }
      while ( *(_DWORD *)result == 47 && *(_DWORD *)(result + 8) )
      {
        result = *(_DWORD *)(result + 12);
        ++v38;
        if ( !result )
        {
          v39 = v38;
          v647 = *(_DWORD *)(v6 + 8);
LABEL_42:
          v650 = v6;
          v40 = v39;
          v648 = v39 - 1;
          do
          {
            *(_DWORD *)(v10 + 288) = v9;
            result = sub_86C84(v10, a2, v647);
            if ( v9 < v648 )
            {
              v41 = 2;
              v42 = *(_DWORD *)(v10 + 256);
              v43 = ", ";
              do
              {
                v44 = v42;
                result = v10;
                v46 = *v43++;
                v45 = v46;
                if ( v42 == 255 )
                {
                  v47 = *(_DWORD *)(v10 + 268);
                  v48 = *(int (__fastcall **)(size_t, int, int))(v10 + 264);
                  *(_BYTE *)(v10 + 255) = 0;
                  result = v48(v10, 255, v47);
                  v42 = 1;
                  v44 = 0;
                  ++*(_DWORD *)(v10 + 292);
                }
                else
                {
                  ++v42;
                }
                v49 = v41 == 1;
                *(_DWORD *)(v10 + 256) = v42;
                v41 = 1;
                *(_BYTE *)(v10 + v44) = v45;
                *(_BYTE *)(v10 + 260) = v45;
              }
              while ( !v49 );
            }
            ++v9;
          }
          while ( v9 != v40 );
          v6 = v650;
          v7 = v653;
          v5 = *(_DWORD *)(v650 + 4);
          goto LABEL_20;
        }
      }
      v39 = v38;
      v647 = *(_DWORD *)(v6 + 8);
      if ( !v38 )
      {
        v7 = v653;
        v5 = *(_DWORD *)(v6 + 4);
        goto LABEL_20;
      }
      goto LABEL_42;
    case 0x4B:
      sub_86C84(v10, a2, *(_DWORD *)(v6 + 8));
      v28 = *(_DWORD *)(v10 + 256);
      v29 = "[abi:";
      do
      {
        v30 = v28;
        v32 = *v29++;
        v31 = v32;
        if ( v28 == 255 )
        {
          v33 = *(_DWORD *)(v10 + 268);
          v34 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v34(v10, 255, v33);
          v28 = 1;
          v30 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v28;
        }
        *(_DWORD *)(v10 + 256) = v28;
        *(_BYTE *)(v10 + v30) = v31;
        *(_BYTE *)(v10 + 260) = v31;
      }
      while ( "" != v29 );
      result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
      v35 = *(_DWORD *)(v10 + 256);
      if ( v35 == 255 )
      {
        v36 = *(_QWORD *)(v10 + 264);
        *(_BYTE *)(v10 + 255) = 0;
        v35 = 0;
        result = ((int (__fastcall *)(size_t, int, _DWORD))v36)(v10, 255, HIDWORD(v36));
        v37 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v37 + 1;
      }
      *(_DWORD *)(v10 + 256) = v35 + 1;
      *(_BYTE *)(v10 + v35) = 93;
      v7 = v653;
      *(_BYTE *)(v10 + 260) = 93;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    case 0x4D:
      sub_86C84(v10, a2, *(_DWORD *)(v6 + 8));
      v18 = *(_DWORD *)(v10 + 256);
      v19 = &byte_B66F3;
      do
      {
        v20 = v18;
        v22 = *++v19;
        v21 = v22;
        if ( v18 == 255 )
        {
          v23 = *(_DWORD *)(v10 + 268);
          v24 = *(void (__fastcall **)(size_t, int, int))(v10 + 264);
          *(_BYTE *)(v10 + 255) = 0;
          v24(v10, 255, v23);
          v18 = 1;
          v20 = 0;
          ++*(_DWORD *)(v10 + 292);
        }
        else
        {
          ++v18;
        }
        *(_DWORD *)(v10 + 256) = v18;
        *(_BYTE *)(v10 + v20) = v21;
        *(_BYTE *)(v10 + 260) = v21;
      }
      while ( v19 != " " );
      result = sub_86C84(v10, a2, *(_DWORD *)(v6 + 12));
      v25 = *(_DWORD *)(v10 + 256);
      if ( v25 == 255 )
      {
        v26 = *(_QWORD *)(v10 + 264);
        *(_BYTE *)(v10 + 255) = 0;
        v25 = 0;
        result = ((int (__fastcall *)(size_t, int, _DWORD))v26)(v10, 255, HIDWORD(v26));
        v27 = *(_DWORD *)(v10 + 292);
        *(_DWORD *)(v10 + 256) = 0;
        *(_DWORD *)(v10 + 292) = v27 + 1;
      }
      *(_DWORD *)(v10 + 256) = v25 + 1;
      *(_BYTE *)(v10 + v25) = 93;
      v7 = v653;
      *(_BYTE *)(v10 + 260) = 93;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
    default:
      *(_DWORD *)(v10 + 280) = 1;
      v5 = *(_DWORD *)(v6 + 4);
      goto LABEL_20;
  }
}
// 86C94: variable 'v3' is possibly undefined
// 8849E: variable 'v411' is possibly undefined
// 884A0: variable 'v412' is possibly undefined
// 88AF0: variable 'v413' is possibly undefined
// B64DF: using guessed type char byte_B64DF;
// B64F7: using guessed type char byte_B64F7;
// B651B: using guessed type char byte_B651B;
// B653F: using guessed type char byte_B653F;
// B656B: using guessed type char byte_B656B;
// B6587: using guessed type char byte_B6587;
// B65C3: using guessed type char byte_B65C3;
// B65F7: using guessed type char byte_B65F7;
// B660B: using guessed type char byte_B660B;
// B6643: using guessed type char byte_B6643;
// B6693: using guessed type char byte_B6693;
// B66B3: using guessed type char byte_B66B3;
// B66D3: using guessed type char byte_B66D3;
// B66E3: using guessed type _BYTE;
// B66F3: using guessed type char byte_B66F3;
// D1EBC: using guessed type char *off_D1EBC;
