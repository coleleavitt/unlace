/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C8090
// Address: 0x000C8090

//----- (000C8090) --------------------------------------------------------
char *__fastcall sub_C8090(int a1)
{
  char *v1; // eax
  char *v2; // edi
  _DWORD *v3; // ebx
  char v5; // dl
  char *v6; // eax
  char *v7; // eax
  char *v8; // edi
  _DWORD *v9; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // edx
  char *v13; // eax
  char *v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // edx
  int v17; // edx
  char *v18; // eax
  char *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // edx
  char v22; // dh
  int v23; // ecx
  char *v24; // eax
  char *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // edx
  int v28; // edx
  char *v29; // eax
  char *v30; // eax
  char *v31; // edi
  _DWORD *v32; // eax
  _DWORD *v33; // edx
  char *v34; // eax
  char *v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // edx
  char v38; // cl
  char *v39; // eax
  char *v40; // eax
  _DWORD *v41; // eax
  _DWORD *v42; // edx
  char *v43; // eax
  char *v44; // eax
  char *v45; // edi
  _DWORD *v46; // eax
  _DWORD *v47; // edx
  char *v48; // eax
  char *v49; // edi
  _DWORD *v50; // eax
  _DWORD *v51; // edx
  char *v52; // eax
  char *v53; // edi
  _DWORD *v54; // eax
  _DWORD *v55; // edx
  char *v56; // eax
  char *v57; // edi
  char *v58; // eax
  _DWORD *v59; // eax
  _DWORD *v60; // edx
  char *v61; // eax
  char *v62; // edi
  _DWORD *v63; // eax
  _DWORD *v64; // edx
  char *v65; // eax
  int v66; // edi
  char *v67; // eax
  char *v68; // esi
  char *v69; // edi
  _BYTE *v70; // ecx
  int v71; // esi
  char *v72; // ebx
  char *v73; // ecx
  char *v74; // esi
  char *v75; // edx
  char v76; // cl
  __int64 *v77; // ecx
  char *v78; // eax
  char *v79; // eax
  _DWORD *v80; // eax
  _DWORD *v81; // edx
  char *v82; // eax
  int v83; // edi
  char *v84; // eax
  char *v85; // esi
  char *v86; // edi
  _BYTE *v87; // ecx
  int v88; // esi
  char *v89; // ebx
  char *v90; // ecx
  char *v91; // esi
  char *v92; // eax
  char *v93; // eax
  _DWORD *v94; // eax
  _DWORD *v95; // edx
  char *v96; // eax
  char *v97; // eax
  _DWORD *v98; // eax
  _DWORD *v99; // edx
  char *v100; // eax
  char *v101; // eax
  _DWORD *v102; // eax
  _DWORD *v103; // edx
  char *v104; // eax
  char *v105; // eax
  _DWORD *v106; // eax
  _DWORD *v107; // edx
  char *v108; // eax
  char *v109; // eax
  _DWORD *v110; // eax
  _DWORD *v111; // edx
  char *v112; // eax
  char *v113; // eax
  _DWORD *v114; // eax
  _DWORD *v115; // edx
  char *v116; // eax
  char *v117; // eax
  _DWORD *v118; // eax
  _DWORD *v119; // edx
  char *v120; // eax
  _DWORD *v121; // ecx
  _BYTE *v122; // eax
  _DWORD *v123; // edi
  char *v124; // eax
  char *v125; // esi
  char *v126; // edi
  _BYTE *v127; // ecx
  int v128; // esi
  char *v129; // edx
  char *v130; // esi
  char *v131; // eax
  char *v132; // eax
  _DWORD *v133; // eax
  _DWORD *v134; // edx
  char *v135; // eax
  int v136; // edi
  _DWORD *v137; // eax
  _DWORD *v138; // edx
  char *v139; // eax
  _DWORD *v140; // ecx
  _BYTE *v141; // eax
  _BYTE *v142; // edx
  _BYTE *v143; // eax
  _DWORD *v144; // edi
  char *v145; // eax
  char *v146; // esi
  char *v147; // edi
  _BYTE *v148; // ecx
  int v149; // esi
  char *v150; // edx
  char *v151; // esi
  char *v152; // edi
  _DWORD *v153; // eax
  _DWORD *v154; // edx
  char *v155; // eax
  _DWORD *v156; // ecx
  _BYTE *v157; // eax
  _DWORD *v158; // edi
  char *v159; // eax
  char *v160; // esi
  char *v161; // edi
  _BYTE *v162; // ecx
  int v163; // esi
  char *v164; // edx
  char *v165; // esi
  _DWORD *v166; // esi
  int v167; // ecx
  _DWORD *v168; // eax
  _DWORD *v169; // edx
  char *v170; // eax
  char *v171; // edi
  _DWORD *v172; // eax
  _DWORD *v173; // edx
  char *v174; // eax
  char *v175; // edi
  _DWORD *v176; // eax
  _DWORD *v177; // edx
  char *v178; // eax
  char *v179; // edi
  _DWORD *v180; // eax
  _DWORD *v181; // edx
  char *v182; // eax
  char *v183; // edi
  _DWORD *v184; // eax
  _DWORD *v185; // edx
  char *v186; // eax
  _DWORD *v187; // eax
  _DWORD *v188; // edx
  char *v189; // eax
  char *v190; // edi
  _DWORD *v191; // eax
  _DWORD *v192; // edx
  char *v193; // eax
  char *v194; // edi
  _DWORD *v195; // eax
  _DWORD *v196; // edx
  char *v197; // eax
  char *v198; // edi
  _DWORD *v199; // eax
  _DWORD *v200; // edx
  char *v201; // eax
  char *v202; // edi
  _DWORD *v203; // eax
  _DWORD *v204; // edx
  char *v205; // eax
  char *v206; // edi
  _DWORD *v207; // eax
  _DWORD *v208; // edx
  char *v209; // eax
  _DWORD *v210; // eax
  _DWORD *v211; // edx
  char *v212; // eax
  _DWORD *v213; // eax
  _DWORD *v214; // edx
  char *v215; // eax
  _DWORD *v216; // eax
  _DWORD *v217; // edx
  char *v218; // eax
  char *v219; // edi
  _DWORD *v220; // eax
  _DWORD *v221; // edx
  char *v222; // eax
  char *v223; // edi
  _DWORD *v224; // eax
  _DWORD *v225; // edx
  char *v226; // eax
  _DWORD *v227; // eax
  _DWORD *v228; // edx
  char *v229; // eax
  _DWORD *v230; // eax
  _DWORD *v231; // edx
  char *v232; // eax
  char *v233; // edi
  _DWORD *v234; // eax
  _DWORD *v235; // edx
  unsigned int v236; // esi
  _DWORD *v237; // edi
  int v238; // ecx
  _DWORD *v239; // eax
  __int64 *v240; // eax
  char *v241; // eax
  char *v242; // eax
  _DWORD *v243; // eax
  _DWORD *v244; // edx
  char *v245; // eax
  char *v246; // eax
  char *v247; // eax
  char *v248; // edi
  _DWORD *v249; // eax
  _DWORD *v250; // edx
  char *v251; // eax
  _DWORD *v252; // eax
  _DWORD *v253; // edx
  char *v254; // eax
  char *v255; // edi
  _DWORD *v256; // eax
  _DWORD *v257; // edx
  _DWORD *v258; // eax
  _DWORD *v259; // edx
  char *v260; // eax
  char v261; // al
  _DWORD *v262; // eax
  _DWORD *v263; // edx
  char *v264; // eax
  _DWORD *v265; // eax
  _DWORD *v266; // edx
  char *v267; // eax
  _DWORD *v268; // eax
  _DWORD *v269; // edx
  _DWORD *v270; // eax
  _DWORD *v271; // edx
  char *v272; // eax
  char *v273; // edi
  _DWORD *v274; // eax
  _DWORD *v275; // edx
  char *v276; // eax
  char *v277; // eax
  char *v278; // edi
  _DWORD *v279; // eax
  _DWORD *v280; // edx
  char *v281; // eax
  char *v282; // eax
  _DWORD *v283; // eax
  _DWORD *v284; // edx
  char *v285; // eax
  _DWORD *v286; // eax
  _DWORD *v287; // edx
  char *v288; // eax
  char *v289; // edi
  _DWORD *v290; // eax
  _DWORD *v291; // edx
  char *v292; // eax
  char *v293; // eax
  _DWORD *v294; // eax
  _DWORD *v295; // edx
  char *v296; // eax
  char *v297; // eax
  _DWORD *v298; // eax
  _DWORD *v299; // edx
  char *v300; // eax
  char *v301; // eax
  _DWORD *v302; // eax
  _DWORD *v303; // edx
  char *v304; // eax
  char *v305; // edi
  _DWORD *v306; // eax
  _DWORD *v307; // edx
  _DWORD *v308; // ecx
  char *v309; // eax
  _DWORD *v310; // edi
  char *v311; // eax
  char *v312; // esi
  char *v313; // edi
  _BYTE *v314; // ecx
  int v315; // esi
  char *v316; // ebx
  char *v317; // ecx
  char *v318; // esi
  __int64 *v319; // eax
  _DWORD *v320; // edx
  char *v321; // eax
  __int64 *v322; // eax
  char *v323; // eax
  const void *v324; // ebx
  unsigned int v325; // esi
  _DWORD *v326; // edi
  int v327; // ecx
  _DWORD *v328; // eax
  char *v329; // eax
  char *v330; // eax
  unsigned int v331; // edi
  _DWORD *v332; // esi
  int v333; // ecx
  _DWORD *v334; // eax
  __int64 *v335; // eax
  unsigned int v336; // esi
  _DWORD *v337; // edi
  int v338; // ecx
  _DWORD *v339; // eax
  __int64 *v340; // eax
  _DWORD *v341; // edi
  int v342; // ecx
  _DWORD *v343; // eax
  _DWORD *v344; // edx
  char *v345; // eax
  __int64 *v346; // eax
  char *v347; // eax
  _DWORD *v348; // eax
  const void *v349; // ecx
  int v350; // edx
  int v351; // edi
  _DWORD *v352; // eax
  _DWORD *v353; // edx
  _DWORD *v354; // edx
  _DWORD *v355; // eax
  _DWORD *v356; // edx
  _DWORD *v357; // edx
  _DWORD *v358; // edx
  signed int v359; // edi
  unsigned int v360; // esi
  int v361; // ecx
  _DWORD *v362; // eax
  char *v363; // eax
  _DWORD *v364; // eax
  int v365; // esi
  _DWORD *v366; // edi
  int v367; // ecx
  _DWORD *v368; // eax
  _DWORD *v369; // edx
  _DWORD *v370; // edi
  int v371; // ecx
  _DWORD *v372; // eax
  _DWORD *v373; // edx
  char *v374; // ebx
  _DWORD *v375; // eax
  _DWORD *v376; // edx
  _DWORD *v377; // eax
  const void *v378; // ecx
  int v379; // edx
  int v380; // edi
  _DWORD *v381; // eax
  _DWORD *v382; // edx
  char *v383; // eax
  _DWORD *v384; // eax
  const void *v385; // ecx
  int v386; // edx
  int v387; // edi
  _DWORD *v388; // eax
  _DWORD *v389; // edx
  _DWORD *v390; // eax
  _DWORD *v391; // edx
  unsigned int v392; // edi
  _DWORD *v393; // esi
  int v394; // ecx
  _DWORD *v395; // eax
  char *v396; // eax
  int v397; // ecx
  int v398; // eax
  int v399; // esi
  char *v400; // eax
  int v401; // edi
  _BYTE *v402; // eax
  _BYTE *v403; // esi
  _BYTE *v404; // eax
  _DWORD *v405; // ecx
  _DWORD *v406; // edi
  char *v407; // eax
  char *v408; // esi
  _BYTE *v409; // ecx
  int v410; // esi
  int v411; // edi
  char *v412; // edx
  char *v413; // esi
  _DWORD *v414; // eax
  _DWORD *v415; // edx
  _DWORD *v416; // edx
  _DWORD *v417; // eax
  int v418; // edx
  int v419; // eax
  int v420; // edi
  _DWORD *v421; // eax
  _DWORD *v422; // edx
  unsigned int v423; // esi
  _DWORD *v424; // edi
  int v425; // ecx
  _DWORD *v426; // eax
  char *v427; // edi
  char v428; // cl
  char v429; // cl
  char v430; // cl
  char v431; // cl
  _DWORD *v432; // edx
  char v433; // cl
  _DWORD *v434; // eax
  _DWORD *v435; // eax
  _DWORD *v436; // edx
  char v437; // cl
  char v438; // cl
  char *v439; // eax
  char *v440; // edi
  char *v441; // eax
  char *v442; // ecx
  _DWORD *v443; // eax
  _DWORD *v444; // edx
  size_t v445; // [esp+8h] [ebp-44h]
  size_t v446; // [esp+8h] [ebp-44h]
  size_t v447; // [esp+8h] [ebp-44h]
  size_t v448; // [esp+8h] [ebp-44h]
  size_t v449; // [esp+8h] [ebp-44h]
  size_t v450; // [esp+8h] [ebp-44h]
  size_t v451; // [esp+8h] [ebp-44h]
  int v452; // [esp+10h] [ebp-3Ch]
  unsigned __int8 v453; // [esp+14h] [ebp-38h]
  __int64 *v454; // [esp+14h] [ebp-38h]
  char *v455; // [esp+14h] [ebp-38h]
  char *v456; // [esp+14h] [ebp-38h]
  char *v457; // [esp+14h] [ebp-38h]
  char *v458; // [esp+14h] [ebp-38h]
  char *v459; // [esp+14h] [ebp-38h]
  char *v460; // [esp+14h] [ebp-38h]
  char *v461; // [esp+14h] [ebp-38h]
  char *v462; // [esp+14h] [ebp-38h]
  int v463; // [esp+14h] [ebp-38h]
  char v464; // [esp+14h] [ebp-38h]
  char *v465; // [esp+14h] [ebp-38h]
  int v466; // [esp+14h] [ebp-38h]
  char *v467; // [esp+14h] [ebp-38h]
  char *v468; // [esp+14h] [ebp-38h]
  char *v469; // [esp+14h] [ebp-38h]
  char *v470; // [esp+14h] [ebp-38h]
  char *v471; // [esp+14h] [ebp-38h]
  char *v472; // [esp+14h] [ebp-38h]
  char *v473; // [esp+14h] [ebp-38h]
  int v474; // [esp+14h] [ebp-38h]
  char *v475; // [esp+14h] [ebp-38h]
  char v476; // [esp+14h] [ebp-38h]
  int v477; // [esp+14h] [ebp-38h]
  int v478; // [esp+14h] [ebp-38h]
  signed int v479; // [esp+14h] [ebp-38h]
  char *v480; // [esp+14h] [ebp-38h]
  _DWORD *v481; // [esp+14h] [ebp-38h]
  char *v482; // [esp+14h] [ebp-38h]
  char *v483; // [esp+14h] [ebp-38h]
  char *v484; // [esp+14h] [ebp-38h]
  int v485; // [esp+14h] [ebp-38h]
  signed int v486; // [esp+14h] [ebp-38h]
  signed int v487; // [esp+14h] [ebp-38h]
  signed int v488; // [esp+14h] [ebp-38h]
  char *v489; // [esp+14h] [ebp-38h]
  const void *v490; // [esp+14h] [ebp-38h]
  const void *v491; // [esp+14h] [ebp-38h]
  int v492; // [esp+14h] [ebp-38h]
  char **v493; // [esp+14h] [ebp-38h]
  signed int v494; // [esp+14h] [ebp-38h]
  char *v495; // [esp+14h] [ebp-38h]
  int v496; // [esp+14h] [ebp-38h]
  signed int v497; // [esp+14h] [ebp-38h]
  int v498; // [esp+14h] [ebp-38h]
  __int64 *v499; // [esp+18h] [ebp-34h]
  _BYTE *v500; // [esp+18h] [ebp-34h]
  const void *v501; // [esp+18h] [ebp-34h]
  const void *v502; // [esp+18h] [ebp-34h]
  char *v503; // [esp+1Ch] [ebp-30h]
  int v504; // [esp+1Ch] [ebp-30h]
  char v505; // [esp+1Ch] [ebp-30h]
  int v506; // [esp+1Ch] [ebp-30h]
  int v507; // [esp+1Ch] [ebp-30h]
  int v508; // [esp+1Ch] [ebp-30h]
  int v509; // [esp+1Ch] [ebp-30h]
  const void *v510; // [esp+1Ch] [ebp-30h]
  int v511; // [esp+1Ch] [ebp-30h]
  int v512; // [esp+1Ch] [ebp-30h]
  const void *v513; // [esp+1Ch] [ebp-30h]
  __int64 *v514; // [esp+1Ch] [ebp-30h]
  _DWORD *v515; // [esp+1Ch] [ebp-30h]
  char *v516; // [esp+1Ch] [ebp-30h]
  int v517; // [esp+1Ch] [ebp-30h]
  char *v518; // [esp+1Ch] [ebp-30h]
  char *v519; // [esp+1Ch] [ebp-30h]
  char *v520; // [esp+1Ch] [ebp-30h]
  const void *v521; // [esp+20h] [ebp-2Ch]
  const void *v522; // [esp+20h] [ebp-2Ch]
  const void *v523; // [esp+20h] [ebp-2Ch]
  char *v524; // [esp+20h] [ebp-2Ch]
  const void *v525; // [esp+20h] [ebp-2Ch]
  const void *v526; // [esp+20h] [ebp-2Ch]
  int v527; // [esp+20h] [ebp-2Ch]
  __int64 *v528; // [esp+20h] [ebp-2Ch]
  int v529; // [esp+24h] [ebp-28h]
  int v530; // [esp+24h] [ebp-28h]
  int v531; // [esp+24h] [ebp-28h]
  const void *v532; // [esp+24h] [ebp-28h]
  int v533; // [esp+24h] [ebp-28h]
  int v534; // [esp+24h] [ebp-28h]
  bool v535; // [esp+24h] [ebp-28h]
  int v536; // [esp+24h] [ebp-28h]
  int v537; // [esp+24h] [ebp-28h]
  int v538; // [esp+24h] [ebp-28h]
  char *v539; // [esp+28h] [ebp-24h]
  int v540; // [esp+28h] [ebp-24h]
  int v541; // [esp+28h] [ebp-24h]
  int v542; // [esp+28h] [ebp-24h]
  int v543; // [esp+28h] [ebp-24h]
  char *v544; // [esp+28h] [ebp-24h]
  int v545; // [esp+2Ch] [ebp-20h]
  int v546; // [esp+2Ch] [ebp-20h]
  char v547; // [esp+30h] [ebp-1Ch]
  int v548; // [esp+34h] [ebp-18h]
  const void *v549; // [esp+38h] [ebp-14h]

  v1 = *(char **)a1;
  v452 = a1;
  v2 = *(char **)(a1 + 4);
  v3 = nullptr;
  if ( (unsigned int)&v2[-*(_DWORD *)a1] < 2 )
    return (char *)v3;
  v5 = *v1;
  if ( *v1 == 103 )
  {
    if ( v1[1] == 115 )
    {
      v1 += 2;
      v3 = nullptr;
      *(_DWORD *)a1 = v1;
      v453 = 1;
      if ( (unsigned int)(v2 - v1) < 2 )
        return (char *)v3;
    }
    else
    {
      v453 = 0;
    }
    v5 = *v1;
  }
  else
  {
    v453 = 0;
  }
  v3 = nullptr;
  switch ( v5 )
  {
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      return sub_CE0D0(a1);
    case ':':
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'b':
    case 'h':
    case 'j':
    case 'k':
      return (char *)v3;
    case 'L':
      return sub_CC680((char **)a1);
    case 'T':
      return (char *)sub_C6CF0(a1);
    case 'a':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'N':
          *(_DWORD *)a1 = v1 + 2;
          v44 = sub_C8090(a1);
          if ( !v44 )
            return nullptr;
          v45 = v44;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v47 = v9 + 1;
          }
          else
          {
            v46 = operator new[](0x1000u);
            *v46 = v9;
            v46[1] = 0;
            *(_DWORD *)(v452 + 4464) = v46;
            v10 = 0;
            v47 = v46 + 1;
            v9 = v46;
          }
          *v47 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v45;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309927;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309925);
          goto LABEL_499;
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'b':
        case 'c':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
          return (char *)v3;
        case 'S':
          *(_DWORD *)a1 = v1 + 2;
          v241 = sub_C8090(a1);
          if ( !v241 )
            return nullptr;
          v480 = v241;
          v242 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v242 )
            return (char *)v3;
          v8 = v242;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v244 = v9 + 1;
          }
          else
          {
            v243 = operator new[](0x1000u);
            *v243 = v9;
            v243[1] = 0;
            *(_DWORD *)(v452 + 4464) = v243;
            v10 = 0;
            v244 = v243 + 1;
            v9 = v243;
          }
          *v244 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v480;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309924;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309923);
          goto LABEL_521;
        case 'a':
          *(_DWORD *)a1 = v1 + 2;
          v247 = sub_C8090(a1);
          if ( !v247 )
            return nullptr;
          v248 = v247;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v250 = v9 + 1;
          }
          else
          {
            v249 = operator new[](0x1000u);
            *v249 = v9;
            v249[1] = 0;
            *(_DWORD *)(v452 + 4464) = v249;
            v10 = 0;
            v250 = v249 + 1;
            v9 = v249;
          }
          *v250 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v248;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309932;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309930);
          goto LABEL_499;
        case 'd':
          *(_DWORD *)a1 = v1 + 2;
          v251 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v251 )
            return (char *)v3;
          v136 = (int)v251;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v253 = v9 + 1;
          }
          else
          {
            v252 = operator new[](0x1000u);
            *v252 = v9;
            v252[1] = 0;
            *(_DWORD *)(v452 + 4464) = v252;
            v10 = 0;
            v253 = v252 + 1;
            v9 = v252;
          }
          *v253 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3332;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309929;
          v322 = &qword_13ACD8 - 38741;
          goto LABEL_570;
        case 'n':
          *(_DWORD *)a1 = v1 + 2;
          v254 = sub_C8090(a1);
          if ( !v254 )
            return nullptr;
          v255 = v254;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v257 = v9 + 1;
          }
          else
          {
            v256 = operator new[](0x1000u);
            *v256 = v9;
            v256[1] = 0;
            *(_DWORD *)(v452 + 4464) = v256;
            v10 = 0;
            v257 = v256 + 1;
            v9 = v256;
          }
          *v257 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v255;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309929;
          v346 = &qword_13ACD8 - 38741;
          goto LABEL_499;
        case 't':
          *(_DWORD *)a1 = v1 + 2;
          v245 = sub_C2AF0((char **)a1);
          goto LABEL_303;
        case 'z':
          *(_DWORD *)a1 = v1 + 2;
          v245 = sub_C8090(a1);
LABEL_303:
          v3 = nullptr;
          if ( !v245 )
            return (char *)v3;
          v152 = v245;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v259 = v9 + 1;
          }
          else
          {
            v258 = operator new[](0x1000u);
            *v258 = v9;
            v258[1] = 0;
            *(_DWORD *)(v452 + 4464) = v258;
            v10 = 0;
            v259 = v258 + 1;
            v9 = v258;
          }
          *v259 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2380;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309922;
          v276 = (char *)&qword_13ACD8 - 309913;
          break;
        default:
          return nullptr;
      }
LABEL_407:
      *(_DWORD *)((char *)v9 + v10 + 20) = v276;
      *(_DWORD *)((char *)v9 + v10 + 24) = v152;
      *(_DWORD *)((char *)v9 + v10 + 28) = (char *)&qword_13ACD8 - 320654;
      v330 = (char *)&qword_13ACD8 - 320653;
LABEL_408:
      *(_DWORD *)((char *)v9 + v10 + 32) = v330;
      return (char *)v9 + v10 + 8;
    case 'c':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'c':
          *(_DWORD *)a1 = v1 + 2;
          v6 = sub_C2AF0((char **)a1);
          if ( !v6 )
            return nullptr;
          v454 = (__int64 *)v6;
          v7 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v7 )
            return (char *)v3;
          v8 = v7;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v12 = v9 + 1;
          }
          else
          {
            v11 = operator new[](0x1000u);
            *v11 = v9;
            v11[1] = 0;
            *(_DWORD *)(v452 + 4464) = v11;
            v10 = 0;
            v12 = v11 + 1;
            v9 = v11;
          }
          *v12 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3276;
          *(_DWORD *)((char *)v9 + v10 + 16) = &qword_13ACD8 - 38739;
          v345 = (char *)&qword_13ACD8 - 309902;
          goto LABEL_514;
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
          return (char *)v3;
        case 'l':
          *(_DWORD *)a1 = v1 + 2;
          v120 = sub_C8090(a1);
          if ( !v120 )
            return nullptr;
          v539 = v120;
          v531 = (*(_DWORD *)(v452 + 12) - *(_DWORD *)(v452 + 8)) >> 2;
          v121 = (_DWORD *)v452;
          while ( 2 )
          {
            v122 = (_BYTE *)*v121;
            if ( *v121 == v121[1] || *v122 != 69 )
            {
              v123 = v121;
              v124 = sub_C8090((int)v121);
              if ( v124 )
              {
                v125 = (char *)v123[3];
                v121 = v123;
                if ( v125 == (char *)v123[4] )
                {
                  v126 = v124;
                  v127 = (_BYTE *)v121[2];
                  v128 = v125 - v127;
                  v474 = v128 >> 2;
                  v507 = v128 >> 1;
                  if ( (_BYTE *)(v452 + 20) == v127 )
                  {
                    v523 = v127;
                    v129 = (char *)malloc(2 * v128);
                    if ( v128 )
                    {
                      v447 = v128;
                      v130 = v129;
                      memmove(v129, v523, v447);
                      v129 = v130;
                    }
                  }
                  else
                  {
                    v129 = (char *)realloc(v127, 2 * v128);
                  }
                  v124 = v126;
                  v121 = (_DWORD *)v452;
                  *(_DWORD *)(v452 + 8) = v129;
                  v125 = &v129[4 * v474];
                  *(_DWORD *)(v452 + 12) = v125;
                  *(_DWORD *)(v452 + 16) = &v129[4 * v507];
                }
                v121[3] = v125 + 4;
                *(_DWORD *)v125 = v124;
                continue;
              }
              return nullptr;
            }
            break;
          }
          *v121 = v122 + 1;
          v512 = 4 * v531 + v121[2];
          v487 = v121[3] - v512;
          v331 = (v487 + 15) & 0xFFFFFFF0;
          v332 = (_DWORD *)v121[1116];
          v333 = v332[1];
          v537 = 4 * v531;
          if ( v331 + v333 < 0xFF8 )
          {
            v357 = v332 + 1;
          }
          else
          {
            if ( v331 >= 0xFF9 )
            {
              v334 = operator new[](v331 | 8);
              *v334 = *v332;
              v334[1] = 0;
              *v332 = v334;
              v335 = (__int64 *)(v334 + 2);
LABEL_552:
              v378 = (const void *)v512;
              v514 = v335;
              if ( v487 )
              {
                memmove(v335, v378, v487);
                v379 = v452;
                v378 = (const void *)(*(_DWORD *)(v452 + 8) + v537);
              }
              else
              {
                v379 = v452;
              }
              v136 = v487 >> 2;
              *(_DWORD *)(v379 + 12) = v378;
              v9 = *(_DWORD **)(v379 + 4464);
              v10 = v9[1];
              if ( (unsigned int)(v10 + 32) < 0xFF8 )
              {
                v382 = v9 + 1;
              }
              else
              {
                v380 = v379;
                v381 = operator new[](0x1000u);
                *v381 = v9;
                v381[1] = 0;
                *(_DWORD *)(v380 + 4464) = v381;
                v136 = v487 >> 2;
                v10 = 0;
                v382 = v381 + 1;
                v9 = v381;
              }
              *v382 = v10 + 32;
              *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
              v383 = (char *)&qword_13ACD8 - 3220;
              goto LABEL_568;
            }
            v377 = operator new[](0x1000u);
            *v377 = v332;
            v377[1] = 0;
            *(_DWORD *)(v452 + 4464) = v377;
            v333 = 0;
            v357 = v377 + 1;
            v332 = v377;
          }
          *v357 = v333 + v331;
          v335 = (__int64 *)((char *)v332 + v333 + 8);
          goto LABEL_552;
        case 'm':
          *(_DWORD *)a1 = v1 + 2;
          v131 = sub_C8090(a1);
          if ( !v131 )
            return nullptr;
          v475 = v131;
          v132 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v132 )
            return (char *)v3;
          v8 = v132;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v134 = v9 + 1;
          }
          else
          {
            v133 = operator new[](0x1000u);
            *v133 = v9;
            v133[1] = 0;
            *(_DWORD *)(v452 + 4464) = v133;
            v10 = 0;
            v134 = v133 + 1;
            v9 = v133;
          }
          *v134 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v475;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309901;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309900);
          goto LABEL_521;
        case 'o':
          *(_DWORD *)a1 = v1 + 2;
          v135 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v135 )
            return (char *)v3;
          v136 = (int)v135;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v138 = v9 + 1;
          }
          else
          {
            v137 = operator new[](0x1000u);
            *v137 = v9;
            v137[1] = 0;
            *(_DWORD *)(v452 + 4464) = v137;
            v10 = 0;
            v138 = v137 + 1;
            v9 = v137;
          }
          *v138 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3332;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309899;
          v322 = (__int64 *)((char *)&qword_13ACD8 - 309898);
          goto LABEL_570;
        case 'v':
          if ( (unsigned int)(v2 - v1) < 2 )
            return nullptr;
          if ( v5 != 99 )
            return nullptr;
          if ( v1[1] != 118 )
            return nullptr;
          *(_DWORD *)a1 = v1 + 2;
          v476 = *(_BYTE *)(a1 + 360);
          *(_BYTE *)(a1 + 360) = 0;
          v139 = sub_C2AF0((char **)a1);
          *(_BYTE *)(v452 + 360) = v476;
          if ( !v139 )
            return nullptr;
          v140 = (_DWORD *)v452;
          v524 = v139;
          v141 = *(_BYTE **)v452;
          v142 = *(_BYTE **)(v452 + 4);
          if ( *(_BYTE **)v452 != v142 && *v141 == 95 )
          {
            v143 = v141 + 1;
            *(_DWORD *)v452 = v143;
            v540 = (*(_DWORD *)(v452 + 12) - *(_DWORD *)(v452 + 8)) >> 2;
            if ( v143 == v142 )
              goto LABEL_188;
            while ( *v143 != 69 )
            {
              do
              {
LABEL_188:
                v144 = v140;
                v145 = sub_C8090((int)v140);
                if ( !v145 )
                  return nullptr;
                v146 = (char *)v144[3];
                v140 = v144;
                if ( v146 == (char *)v144[4] )
                {
                  v147 = v145;
                  v148 = (_BYTE *)v140[2];
                  v149 = v146 - v148;
                  v477 = v149 >> 2;
                  v508 = v149 >> 1;
                  if ( (_BYTE *)(v452 + 20) == v148 )
                  {
                    v532 = v148;
                    v150 = (char *)malloc(2 * v149);
                    if ( v149 )
                    {
                      v448 = v149;
                      v151 = v150;
                      memmove(v150, v532, v448);
                      v150 = v151;
                    }
                  }
                  else
                  {
                    v150 = (char *)realloc(v148, 2 * v149);
                  }
                  v145 = v147;
                  v140 = (_DWORD *)v452;
                  *(_DWORD *)(v452 + 8) = v150;
                  v146 = &v150[4 * v477];
                  *(_DWORD *)(v452 + 12) = v146;
                  *(_DWORD *)(v452 + 16) = &v150[4 * v508];
                }
                v140[3] = v146 + 4;
                *(_DWORD *)v146 = v145;
                v143 = (_BYTE *)*v140;
              }
              while ( *v140 == v140[1] );
            }
            *v140 = v143 + 1;
            v543 = 4 * v540;
            v501 = (const void *)(v543 + v140[2]);
            v494 = v140[3] - (_DWORD)v501;
            v392 = (v494 + 15) & 0xFFFFFFF0;
            v393 = (_DWORD *)v140[1116];
            v394 = v393[1];
            if ( v392 + v394 < 0xFF8 )
            {
              v416 = v393 + 1;
            }
            else
            {
              if ( v392 >= 0xFF9 )
              {
                v395 = operator new[](v392 | 8);
                *v395 = *v393;
                v395[1] = 0;
                *v393 = v395;
                v396 = (char *)(v395 + 2);
LABEL_610:
                v519 = v396;
                if ( v494 )
                {
                  memmove(v396, v501, v494);
                  v418 = v452;
                  v419 = *(_DWORD *)(v452 + 8) + v543;
                }
                else
                {
                  v418 = v452;
                  v419 = (int)v501;
                }
                v496 = v494 >> 2;
                *(_DWORD *)(v418 + 12) = v419;
                v9 = *(_DWORD **)(v418 + 4464);
                v10 = v9[1];
                if ( (unsigned int)(v10 + 32) < 0xFF8 )
                {
                  v422 = v9 + 1;
                }
                else
                {
                  v420 = v418;
                  v421 = operator new[](0x1000u);
                  *v421 = v9;
                  v421[1] = 0;
                  *(_DWORD *)(v420 + 4464) = v421;
                  v10 = 0;
                  v422 = v421 + 1;
                  v9 = v421;
                }
                *v422 = v10 + 32;
                *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
                *(_DWORD *)((char *)v9 + v10 + 8) = off_13A07C;
                *(_DWORD *)((char *)v9 + v10 + 16) = v524;
                *(_DWORD *)((char *)v9 + v10 + 20) = v519;
                v321 = (char *)v496;
                goto LABEL_480;
              }
              v417 = operator new[](0x1000u);
              *v417 = v393;
              v417[1] = 0;
              *(_DWORD *)(v452 + 4464) = v417;
              v394 = 0;
              v416 = v417 + 1;
              v393 = v417;
            }
            *v416 = v394 + v392;
            v396 = (char *)v393 + v394 + 8;
            goto LABEL_610;
          }
          v489 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v489 )
            return (char *)v3;
          v341 = *(_DWORD **)(v452 + 4464);
          v342 = v341[1];
          if ( (unsigned int)(v342 + 16) < 0xFF8 )
          {
            v344 = v341 + 1;
          }
          else
          {
            v343 = operator new[](0x1000u);
            *v343 = v341;
            v343[1] = 0;
            *(_DWORD *)(v452 + 4464) = v343;
            v342 = 0;
            v344 = v343 + 1;
            v341 = v343;
          }
          v374 = v489;
          *v344 = v342 + 16;
          v493 = (char **)((char *)v341 + v342 + 8);
          *v493 = v374;
          v370 = *(_DWORD **)(v452 + 4464);
          v371 = v370[1];
          if ( (unsigned int)(v371 + 32) < 0xFF8 )
          {
            v376 = v370 + 1;
          }
          else
          {
            v375 = operator new[](0x1000u);
            *v375 = v370;
            v375[1] = 0;
            *(_DWORD *)(v452 + 4464) = v375;
            v371 = 0;
            v376 = v375 + 1;
            v370 = v375;
          }
          *v376 = v371 + 32;
          *(_DWORD *)((char *)v370 + v371 + 12) = 16843050;
          *(_DWORD *)((char *)v370 + v371 + 8) = (char *)&qword_13ACD8 - 3164;
          *(_DWORD *)((char *)v370 + v371 + 16) = v524;
          *(_DWORD *)((char *)v370 + v371 + 20) = v493;
          *(_DWORD *)((char *)v370 + v371 + 24) = 1;
LABEL_549:
          v3 = (_DWORD *)((char *)v370 + v371 + 8);
          break;
        default:
          return nullptr;
      }
      return (char *)v3;
    case 'd':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'V':
          *(_DWORD *)a1 = v1 + 2;
          v13 = sub_C8090(a1);
          if ( !v13 )
            return nullptr;
          v455 = v13;
          v14 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v14 )
            return (char *)v3;
          v8 = v14;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v16 = v9 + 1;
          }
          else
          {
            v15 = operator new[](0x1000u);
            *v15 = v9;
            v15[1] = 0;
            *(_DWORD *)(v452 + 4464) = v15;
            v10 = 0;
            v16 = v15 + 1;
            v9 = v15;
          }
          *v16 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v455;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309877;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309875);
          break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'b':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'm':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 'u':
          return (char *)v3;
        case 'a':
          *(_DWORD *)a1 = v1 + 2;
          v277 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v277 )
            return (char *)v3;
          v278 = v277;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 16) < 0xFF8 )
          {
            v280 = v9 + 1;
          }
          else
          {
            v279 = operator new[](0x1000u);
            *v279 = v9;
            v279[1] = 0;
            *(_DWORD *)(v452 + 4464) = v279;
            v10 = 0;
            v280 = v279 + 1;
            v9 = v279;
          }
          *v280 = v10 + 16;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3108;
          *(_DWORD *)((char *)v9 + v10 + 16) = v278;
          *((_BYTE *)v9 + v10 + 20) = v453;
          *((_BYTE *)v9 + v10 + 21) = 1;
          return (char *)v9 + v10 + 8;
        case 'c':
          *(_DWORD *)a1 = v1 + 2;
          v281 = sub_C2AF0((char **)a1);
          if ( !v281 )
            return nullptr;
          v454 = (__int64 *)v281;
          v282 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v282 )
            return (char *)v3;
          v8 = v282;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v284 = v9 + 1;
          }
          else
          {
            v283 = operator new[](0x1000u);
            *v283 = v9;
            v283[1] = 0;
            *(_DWORD *)(v452 + 4464) = v283;
            v10 = 0;
            v284 = v283 + 1;
            v9 = v283;
          }
          *v284 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3276;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309897;
          v345 = (char *)&qword_13ACD8 - 309885;
LABEL_514:
          *(_DWORD *)((char *)v9 + v10 + 20) = v345;
          v319 = v454;
          break;
        case 'e':
          *(_DWORD *)a1 = v1 + 2;
          v285 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v285 )
            return (char *)v3;
          v136 = (int)v285;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v287 = v9 + 1;
          }
          else
          {
            v286 = operator new[](0x1000u);
            *v286 = v9;
            v286[1] = 0;
            *(_DWORD *)(v452 + 4464) = v286;
            v10 = 0;
            v287 = v286 + 1;
            v9 = v286;
          }
          *v287 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3332;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309884;
          v322 = (__int64 *)((char *)&qword_13ACD8 - 309883);
          goto LABEL_570;
        case 'l':
          *(_DWORD *)a1 = v1 + 2;
          v288 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v288 )
            return (char *)v3;
          v289 = v288;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 16) < 0xFF8 )
          {
            v291 = v9 + 1;
          }
          else
          {
            v290 = operator new[](0x1000u);
            *v290 = v9;
            v290[1] = 0;
            *(_DWORD *)(v452 + 4464) = v290;
            v10 = 0;
            v291 = v290 + 1;
            v9 = v290;
          }
          *v291 = v10 + 16;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3108;
          *(_DWORD *)((char *)v9 + v10 + 16) = v289;
          *(_WORD *)((char *)v9 + v10 + 20) = v453;
          return (char *)v9 + v10 + 8;
        case 'n':
          return sub_CE0D0(a1);
        case 's':
          *(_DWORD *)a1 = v1 + 2;
          v292 = sub_C8090(a1);
          if ( !v292 )
            return nullptr;
          v482 = v292;
          v293 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v293 )
            return (char *)v3;
          v8 = v293;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v295 = v9 + 1;
          }
          else
          {
            v294 = operator new[](0x1000u);
            *v294 = v9;
            v294[1] = 0;
            *(_DWORD *)(v452 + 4464) = v294;
            v10 = 0;
            v295 = v294 + 1;
            v9 = v294;
          }
          *v295 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2772;
          *(_DWORD *)((char *)v9 + v10 + 16) = v482;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309882;
          v319 = &qword_13ACD8 - 38735;
          break;
        case 't':
          *(_DWORD *)a1 = v1 + 2;
          v296 = sub_C8090(a1);
          if ( !v296 )
            return nullptr;
          v483 = v296;
          v297 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v297 )
            return (char *)v3;
          v8 = v297;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v299 = v9 + 1;
          }
          else
          {
            v298 = operator new[](0x1000u);
            *v298 = v9;
            v298[1] = 0;
            *(_DWORD *)(v452 + 4464) = v298;
            v10 = 0;
            v299 = v298 + 1;
            v9 = v298;
          }
          *v299 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2772;
          *(_DWORD *)((char *)v9 + v10 + 16) = v483;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 386875;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 386874);
          break;
        case 'v':
          *(_DWORD *)a1 = v1 + 2;
          v300 = sub_C8090(a1);
          if ( !v300 )
            return nullptr;
          v484 = v300;
          v301 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v301 )
            return (char *)v3;
          v8 = v301;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v303 = v9 + 1;
          }
          else
          {
            v302 = operator new[](0x1000u);
            *v302 = v9;
            v302[1] = 0;
            *(_DWORD *)(v452 + 4464) = v302;
            v10 = 0;
            v303 = v302 + 1;
            v9 = v302;
          }
          *v303 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v484;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309879;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309878);
          break;
        default:
          return nullptr;
      }
      goto LABEL_521;
    case 'e':
      v17 = v1[1];
      switch ( v17 )
      {
        case 'O':
          *(_DWORD *)a1 = v1 + 2;
          v92 = sub_C8090(a1);
          if ( !v92 )
            return nullptr;
          v467 = v92;
          v93 = sub_C8090(v452);
          v3 = nullptr;
          if ( v93 )
          {
            v8 = v93;
            v9 = *(_DWORD **)(v452 + 4464);
            v10 = v9[1];
            if ( (unsigned int)(v10 + 32) < 0xFF8 )
            {
              v95 = v9 + 1;
            }
            else
            {
              v94 = operator new[](0x1000u);
              *v94 = v9;
              v94[1] = 0;
              *(_DWORD *)(v452 + 4464) = v94;
              v10 = 0;
              v95 = v94 + 1;
              v9 = v94;
            }
            *v95 = v10 + 32;
            *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
            *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
            *(_DWORD *)((char *)v9 + v10 + 16) = v467;
            *(_DWORD *)((char *)v9 + v10 + 20) = &qword_13ACD8 - 38734;
            v319 = (__int64 *)((char *)&qword_13ACD8 - 309870);
            goto LABEL_521;
          }
          break;
        case 'q':
          *(_DWORD *)a1 = v1 + 2;
          v96 = sub_C8090(a1);
          if ( !v96 )
            return nullptr;
          v468 = v96;
          v97 = sub_C8090(v452);
          v3 = nullptr;
          if ( v97 )
          {
            v8 = v97;
            v9 = *(_DWORD **)(v452 + 4464);
            v10 = v9[1];
            if ( (unsigned int)(v10 + 32) < 0xFF8 )
            {
              v99 = v9 + 1;
            }
            else
            {
              v98 = operator new[](0x1000u);
              *v98 = v9;
              v98[1] = 0;
              *(_DWORD *)(v452 + 4464) = v98;
              v10 = 0;
              v99 = v98 + 1;
              v9 = v98;
            }
            *v99 = v10 + 32;
            *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
            *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
            *(_DWORD *)((char *)v9 + v10 + 16) = v468;
            *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309869;
            v319 = (__int64 *)((char *)&qword_13ACD8 - 309867);
            goto LABEL_521;
          }
          break;
        case 'o':
          *(_DWORD *)a1 = v1 + 2;
          v18 = sub_C8090(a1);
          if ( !v18 )
            return nullptr;
          v456 = v18;
          v19 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v19 )
            return (char *)v3;
          v8 = v19;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v21 = v9 + 1;
          }
          else
          {
            v20 = operator new[](0x1000u);
            *v20 = v9;
            v20[1] = 0;
            *(_DWORD *)(v452 + 4464) = v20;
            v10 = 0;
            v21 = v20 + 1;
            v9 = v20;
          }
          *v21 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v456;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309874;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309873);
          goto LABEL_521;
        default:
          return nullptr;
      }
      return (char *)v3;
    case 'f':
      if ( (unsigned int)(v2 - v1) >= 2 )
      {
        v22 = v1[1];
        if ( v22 == 112 || (unsigned int)(v2 - v1) >= 3 && v22 == 76 && (unsigned int)(v1[2] - 48) <= 9 )
          return (char *)sub_CDE80(a1);
      }
      if ( v5 != 102 )
        return nullptr;
      if ( v1 == v2 )
        return nullptr;
      *(_DWORD *)a1 = v1 + 1;
      if ( v2 == v1 + 1 )
        return nullptr;
      v505 = v1[1];
      v464 = 1;
      v3 = nullptr;
      switch ( v505 )
      {
        case 'L':
        case 'l':
          goto LABEL_111;
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
          return (char *)v3;
        case 'R':
        case 'r':
          v464 = 0;
LABEL_111:
          v75 = v1 + 2;
          *(_DWORD *)a1 = v1 + 2;
          if ( (unsigned int)(v2 - (v1 + 2)) < 2 )
            return nullptr;
          v76 = *v75;
          if ( *v75 != 97 )
            goto LABEL_628;
          if ( v1[3] == 97 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309930);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309932);
            goto LABEL_724;
          }
          v76 = *v75;
          if ( *v75 != 97 )
            goto LABEL_628;
          if ( v1[3] == 110 )
          {
            v499 = &qword_13ACD8 - 38741;
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309929);
            goto LABEL_724;
          }
          v76 = *v75;
          if ( *v75 != 97 )
            goto LABEL_628;
          if ( v1[3] == 78 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309925);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309927);
            goto LABEL_724;
          }
          v76 = *v75;
          if ( *v75 != 97 )
            goto LABEL_628;
          if ( v1[3] == 83 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309923);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309924);
            goto LABEL_724;
          }
          v76 = *v75;
LABEL_628:
          if ( v76 == 99 && v1[3] == 109 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309900);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309901);
            goto LABEL_724;
          }
          if ( *v75 != 100 )
            goto LABEL_640;
          if ( v1[3] == 115 )
          {
            v499 = &qword_13ACD8 - 38735;
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309882);
            goto LABEL_724;
          }
          if ( *v75 != 100 )
            goto LABEL_640;
          if ( v1[3] == 118 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309878);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309879);
            goto LABEL_724;
          }
          v428 = *v75;
          if ( *v75 != 100 )
            goto LABEL_641;
          if ( v1[3] == 86 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309875);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309877);
            goto LABEL_724;
          }
LABEL_640:
          v428 = *v75;
LABEL_641:
          if ( v428 == 101 && v1[3] == 111 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309873);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309874);
            goto LABEL_724;
          }
          v429 = *v75;
          if ( *v75 != 101 )
            goto LABEL_651;
          if ( v1[3] == 79 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309870);
            v77 = &qword_13ACD8 - 38734;
            goto LABEL_724;
          }
          v429 = *v75;
          if ( *v75 != 101 )
            goto LABEL_651;
          if ( v1[3] == 113 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309867);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309869);
            goto LABEL_724;
          }
          v429 = *v75;
LABEL_651:
          if ( v429 == 103 && v1[3] == 101 )
          {
            v499 = &qword_13ACD8 - 38733;
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309866);
            goto LABEL_724;
          }
          v430 = *v75;
          if ( *v75 != 103 )
            goto LABEL_658;
          if ( v1[3] == 116 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309862);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309863);
            goto LABEL_724;
          }
          v430 = *v75;
LABEL_658:
          if ( v430 == 108 && v1[3] == 101 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309859);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309861);
            goto LABEL_724;
          }
          if ( *v75 != 108 )
            goto LABEL_670;
          if ( v1[3] == 115 )
          {
            v499 = &qword_13ACD8 - 38732;
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309858);
            goto LABEL_724;
          }
          if ( *v75 != 108 )
            goto LABEL_670;
          if ( v1[3] == 83 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309852);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309855);
            goto LABEL_724;
          }
          v431 = *v75;
          if ( *v75 != 108 )
            goto LABEL_671;
          if ( v1[3] == 116 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309850);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309851);
            goto LABEL_724;
          }
LABEL_670:
          v431 = *v75;
LABEL_671:
          if ( v431 == 109 && v1[3] == 105 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 330514);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 330515);
            goto LABEL_724;
          }
          if ( *v75 != 109 )
            goto LABEL_684;
          if ( v1[3] == 73 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309847);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309849);
            goto LABEL_724;
          }
          if ( *v75 != 109 )
            goto LABEL_684;
          if ( v1[3] == 108 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309883);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309884);
            goto LABEL_724;
          }
          v433 = *v75;
          if ( *v75 != 109 )
            goto LABEL_685;
          if ( v1[3] == 76 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309844);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309846);
            goto LABEL_724;
          }
LABEL_684:
          v433 = *v75;
LABEL_685:
          if ( v433 == 110 && v1[3] == 101 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309838);
            v77 = &qword_13ACD8 - 38730;
            goto LABEL_724;
          }
          if ( *v75 != 111 )
            goto LABEL_704;
          if ( v1[3] == 111 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309822);
            v77 = &qword_13ACD8 - 38728;
            goto LABEL_724;
          }
          if ( *v75 != 111 )
            goto LABEL_704;
          if ( v1[3] == 114 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 329955);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 329956);
            goto LABEL_724;
          }
          v437 = *v75;
          if ( *v75 != 111 )
            goto LABEL_705;
          if ( v1[3] == 82 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309819);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309821);
            goto LABEL_724;
          }
LABEL_704:
          v437 = *v75;
LABEL_705:
          if ( v437 == 112 && v1[3] == 108 )
          {
            v499 = &qword_13ACD8 - 41314;
            v77 = (__int64 *)((char *)&qword_13ACD8 - 330513);
            goto LABEL_724;
          }
          v438 = *v75;
          if ( *v75 != 112 )
            goto LABEL_712;
          if ( v1[3] == 76 )
          {
            v499 = (__int64 *)((char *)&qword_13ACD8 - 309812);
            v77 = (__int64 *)((char *)&qword_13ACD8 - 309814);
          }
          else
          {
            v438 = *v75;
LABEL_712:
            if ( v438 == 114 && v1[3] == 109 )
            {
              v499 = (__int64 *)((char *)&qword_13ACD8 - 309787);
              v77 = (__int64 *)((char *)&qword_13ACD8 - 309788);
            }
            else
            {
              if ( *v75 != 114 )
                return nullptr;
              if ( v1[3] == 77 )
              {
                v499 = &qword_13ACD8 - 38723;
                v77 = (__int64 *)((char *)&qword_13ACD8 - 309786);
              }
              else
              {
                if ( *v75 != 114 )
                  return nullptr;
                if ( v1[3] == 115 )
                {
                  v499 = (__int64 *)((char *)&qword_13ACD8 - 309781);
                  v77 = (__int64 *)((char *)&qword_13ACD8 - 309783);
                }
                else
                {
                  if ( *v75 != 114 || v1[3] != 83 )
                    return nullptr;
                  v499 = (__int64 *)((char *)&qword_13ACD8 - 309777);
                  v77 = (__int64 *)((char *)&qword_13ACD8 - 309780);
                }
              }
            }
          }
LABEL_724:
          v528 = v77;
          *(_DWORD *)v452 = v1 + 4;
          v439 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v439 )
            return (char *)v3;
          v440 = v439;
          if ( v505 == 82 || v505 == 76 )
          {
            v441 = sub_C8090(v452);
            if ( !v441 )
              return nullptr;
            v442 = v441;
            if ( v464 )
              v442 = v440;
            v520 = v442;
            if ( v464 )
              v440 = v441;
          }
          else
          {
            v520 = nullptr;
          }
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v444 = v9 + 1;
          }
          else
          {
            v443 = operator new[](0x1000u);
            *v443 = v9;
            v443[1] = 0;
            *(_DWORD *)(v452 + 4464) = v443;
            v10 = 0;
            v444 = v443 + 1;
            v9 = v443;
          }
          *v444 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3500;
          *(_DWORD *)((char *)v9 + v10 + 16) = v440;
          *(_DWORD *)((char *)v9 + v10 + 20) = v520;
          *(_DWORD *)((char *)v9 + v10 + 24) = v528;
          *(_DWORD *)((char *)v9 + v10 + 28) = v499;
          *((_BYTE *)v9 + v10 + 32) = v464;
          break;
        default:
          return nullptr;
      }
      return (char *)v9 + v10 + 8;
    case 'g':
      v23 = v1[1];
      if ( v23 != 116 )
      {
        if ( v23 != 101 )
          return nullptr;
        *(_DWORD *)v452 = v1 + 2;
        v24 = sub_C8090(v452);
        if ( !v24 )
          return nullptr;
        v457 = v24;
        v25 = sub_C8090(v452);
        v3 = nullptr;
        if ( !v25 )
          return (char *)v3;
        v8 = v25;
        v9 = *(_DWORD **)(v452 + 4464);
        v10 = v9[1];
        if ( (unsigned int)(v10 + 32) < 0xFF8 )
        {
          v27 = v9 + 1;
        }
        else
        {
          v26 = operator new[](0x1000u);
          *v26 = v9;
          v26[1] = 0;
          *(_DWORD *)(v452 + 4464) = v26;
          v10 = 0;
          v27 = v26 + 1;
          v9 = v26;
        }
        *v27 = v10 + 32;
        *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
        *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
        *(_DWORD *)((char *)v9 + v10 + 16) = v457;
        *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309866;
        v319 = &qword_13ACD8 - 38733;
LABEL_521:
        *(_DWORD *)((char *)v9 + v10 + 24) = v319;
        *(_DWORD *)((char *)v9 + v10 + 28) = v8;
        return (char *)v9 + v10 + 8;
      }
      *(_DWORD *)v452 = v1 + 2;
      v78 = sub_C8090(v452);
      if ( !v78 )
        return nullptr;
      v465 = v78;
      v79 = sub_C8090(v452);
      v3 = nullptr;
      if ( v79 )
      {
        v8 = v79;
        v9 = *(_DWORD **)(v452 + 4464);
        v10 = v9[1];
        if ( (unsigned int)(v10 + 32) < 0xFF8 )
        {
          v81 = v9 + 1;
        }
        else
        {
          v80 = operator new[](0x1000u);
          *v80 = v9;
          v80[1] = 0;
          *(_DWORD *)(v452 + 4464) = v80;
          v10 = 0;
          v81 = v80 + 1;
          v9 = v80;
        }
        *v81 = v10 + 32;
        *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
        *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
        *(_DWORD *)((char *)v9 + v10 + 16) = v465;
        *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309863;
        v319 = (__int64 *)((char *)&qword_13ACD8 - 309862);
        goto LABEL_521;
      }
      return (char *)v3;
    case 'i':
      v28 = v1[1];
      if ( v28 == 108 )
      {
        v82 = v1 + 2;
        *(_DWORD *)a1 = v82;
        v530 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
        if ( v82 == v2 )
          goto LABEL_123;
        while ( *v82 != 69 )
        {
          do
          {
LABEL_123:
            v83 = a1;
            v84 = sub_CE7B0(a1);
            if ( !v84 )
              return nullptr;
            v85 = *(char **)(v83 + 12);
            a1 = v83;
            if ( v85 == *(char **)(v83 + 16) )
            {
              v86 = v84;
              v87 = *(_BYTE **)(a1 + 8);
              v88 = v85 - v87;
              v466 = v88 >> 2;
              v506 = v88 >> 1;
              if ( (_BYTE *)(v452 + 20) == v87 )
              {
                v522 = v87;
                v90 = (char *)malloc(2 * v88);
                if ( v88 )
                {
                  v446 = v88;
                  v91 = v90;
                  memmove(v90, v522, v446);
                  v84 = v86;
                  v89 = v91;
                }
                else
                {
                  v84 = v86;
                  v89 = v90;
                }
              }
              else
              {
                v89 = (char *)realloc(v87, 2 * v88);
                v84 = v86;
              }
              a1 = v452;
              *(_DWORD *)(v452 + 8) = v89;
              v85 = &v89[4 * v466];
              *(_DWORD *)(v452 + 12) = v85;
              *(_DWORD *)(v452 + 16) = &v89[4 * v506];
            }
            *(_DWORD *)(a1 + 12) = v85 + 4;
            *(_DWORD *)v85 = v84;
            v82 = *(char **)a1;
          }
          while ( *(_DWORD *)a1 == *(_DWORD *)(a1 + 4) );
        }
        *(_DWORD *)a1 = v82 + 1;
        v534 = 4 * v530;
        v510 = (const void *)(v534 + *(_DWORD *)(a1 + 8));
        v479 = *(_DWORD *)(a1 + 12) - (_DWORD)v510;
        v236 = (v479 + 15) & 0xFFFFFFF0;
        v237 = *(_DWORD **)(a1 + 4464);
        v238 = v237[1];
        if ( v236 + v238 < 0xFF8 )
        {
          v320 = v237 + 1;
        }
        else
        {
          if ( v236 >= 0xFF9 )
          {
            v239 = operator new[](v236 | 8);
            *v239 = *v237;
            v239[1] = 0;
            *v237 = v239;
            v240 = (__int64 *)(v239 + 2);
LABEL_465:
            v349 = v510;
            v514 = v240;
            if ( v479 )
            {
              memmove(v240, v349, v479);
              v350 = v452;
              v349 = (const void *)(*(_DWORD *)(v452 + 8) + v534);
            }
            else
            {
              v350 = v452;
            }
            v136 = v479 >> 2;
            *(_DWORD *)(v350 + 12) = v349;
            v9 = *(_DWORD **)(v350 + 4464);
            v10 = v9[1];
            if ( (unsigned int)(v10 + 32) < 0xFF8 )
            {
              v353 = v9 + 1;
            }
            else
            {
              v351 = v350;
              v352 = operator new[](0x1000u);
              *v352 = v9;
              v352[1] = 0;
              *(_DWORD *)(v351 + 4464) = v352;
              v136 = v479 >> 2;
              v10 = 0;
              v353 = v352 + 1;
              v9 = v352;
            }
            *v353 = v10 + 32;
            *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
            *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2548;
            *(_DWORD *)((char *)v9 + v10 + 16) = 0;
            goto LABEL_569;
          }
          v348 = operator new[](0x1000u);
          *v348 = v237;
          v348[1] = 0;
          *(_DWORD *)(v452 + 4464) = v348;
          v238 = 0;
          v320 = v348 + 1;
          v237 = v348;
        }
        *v320 = v238 + v236;
        v240 = (__int64 *)((char *)v237 + v238 + 8);
        goto LABEL_465;
      }
      if ( v28 != 120 )
        return nullptr;
      *(_DWORD *)a1 = v1 + 2;
      v29 = sub_C8090(a1);
      if ( !v29 )
        return nullptr;
      v458 = v29;
      v30 = sub_C8090(v452);
      v3 = nullptr;
      if ( !v30 )
        return (char *)v3;
      v31 = v30;
      v9 = *(_DWORD **)(v452 + 4464);
      v10 = v9[1];
      if ( (unsigned int)(v10 + 16) < 0xFF8 )
      {
        v33 = v9 + 1;
      }
      else
      {
        v32 = operator new[](0x1000u);
        *v32 = v9;
        v32[1] = 0;
        *(_DWORD *)(v452 + 4464) = v32;
        v10 = 0;
        v33 = v32 + 1;
        v9 = v32;
      }
      *v33 = v10 + 16;
      *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
      *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2716;
      *(_DWORD *)((char *)v9 + v10 + 16) = v458;
      *(_DWORD *)((char *)v9 + v10 + 20) = v31;
      return (char *)v9 + v10 + 8;
    case 'l':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'S':
          *(_DWORD *)a1 = v1 + 2;
          v34 = sub_C8090(a1);
          if ( !v34 )
            return nullptr;
          v459 = v34;
          v35 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v35 )
            return (char *)v3;
          v8 = v35;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v37 = v9 + 1;
          }
          else
          {
            v36 = operator new[](0x1000u);
            *v36 = v9;
            v36[1] = 0;
            *(_DWORD *)(v452 + 4464) = v36;
            v10 = 0;
            v37 = v36 + 1;
            v9 = v36;
          }
          *v37 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v459;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309855;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309852);
          break;
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
          return (char *)v3;
        case 'e':
          *(_DWORD *)a1 = v1 + 2;
          v100 = sub_C8090(a1);
          if ( !v100 )
            return nullptr;
          v469 = v100;
          v101 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v101 )
            return (char *)v3;
          v8 = v101;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v103 = v9 + 1;
          }
          else
          {
            v102 = operator new[](0x1000u);
            *v102 = v9;
            v102[1] = 0;
            *(_DWORD *)(v452 + 4464) = v102;
            v10 = 0;
            v103 = v102 + 1;
            v9 = v102;
          }
          *v103 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v469;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309861;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309859);
          break;
        case 's':
          *(_DWORD *)a1 = v1 + 2;
          v104 = sub_C8090(a1);
          if ( !v104 )
            return nullptr;
          v470 = v104;
          v105 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v105 )
            return (char *)v3;
          v8 = v105;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v107 = v9 + 1;
          }
          else
          {
            v106 = operator new[](0x1000u);
            *v106 = v9;
            v106[1] = 0;
            *(_DWORD *)(v452 + 4464) = v106;
            v10 = 0;
            v107 = v106 + 1;
            v9 = v106;
          }
          *v107 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v470;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309858;
          v319 = &qword_13ACD8 - 38732;
          break;
        case 't':
          *(_DWORD *)a1 = v1 + 2;
          v108 = sub_C8090(a1);
          if ( !v108 )
            return nullptr;
          v471 = v108;
          v109 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v109 )
            return (char *)v3;
          v8 = v109;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v111 = v9 + 1;
          }
          else
          {
            v110 = operator new[](0x1000u);
            *v110 = v9;
            v110[1] = 0;
            *(_DWORD *)(v452 + 4464) = v110;
            v10 = 0;
            v111 = v110 + 1;
            v9 = v110;
          }
          *v111 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v471;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309851;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309850);
          break;
        default:
          return nullptr;
      }
      goto LABEL_521;
    case 'm':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'I':
          *(_DWORD *)a1 = v1 + 2;
          v48 = sub_C8090(a1);
          if ( !v48 )
            return nullptr;
          v49 = v48;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v51 = v9 + 1;
          }
          else
          {
            v50 = operator new[](0x1000u);
            *v50 = v9;
            v50[1] = 0;
            *(_DWORD *)(v452 + 4464) = v50;
            v10 = 0;
            v51 = v50 + 1;
            v9 = v50;
          }
          *v51 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v49;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309849;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309847);
          goto LABEL_499;
        case 'J':
        case 'K':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
          return (char *)v3;
        case 'L':
          *(_DWORD *)a1 = v1 + 2;
          v174 = sub_C8090(a1);
          if ( !v174 )
            return nullptr;
          v175 = v174;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v177 = v9 + 1;
          }
          else
          {
            v176 = operator new[](0x1000u);
            *v176 = v9;
            v176[1] = 0;
            *(_DWORD *)(v452 + 4464) = v176;
            v10 = 0;
            v177 = v176 + 1;
            v9 = v176;
          }
          *v177 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v175;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309846;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309844);
          goto LABEL_499;
        case 'i':
          *(_DWORD *)a1 = v1 + 2;
          v178 = sub_C8090(a1);
          if ( !v178 )
            return nullptr;
          v179 = v178;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v181 = v9 + 1;
          }
          else
          {
            v180 = operator new[](0x1000u);
            *v180 = v9;
            v180[1] = 0;
            *(_DWORD *)(v452 + 4464) = v180;
            v10 = 0;
            v181 = v180 + 1;
            v9 = v180;
          }
          *v181 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v179;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 330515;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 330514);
          goto LABEL_499;
        case 'l':
          *(_DWORD *)a1 = v1 + 2;
          v182 = sub_C8090(a1);
          if ( !v182 )
            return nullptr;
          v183 = v182;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v185 = v9 + 1;
          }
          else
          {
            v184 = operator new[](0x1000u);
            *v184 = v9;
            v184[1] = 0;
            *(_DWORD *)(v452 + 4464) = v184;
            v10 = 0;
            v185 = v184 + 1;
            v9 = v184;
          }
          *v185 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v183;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309884;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309883);
          goto LABEL_499;
        case 'm':
          *(_DWORD *)a1 = v1 + 2;
          if ( v1 + 2 != v2 && v1[2] == 95 )
          {
            *(_DWORD *)a1 = v1 + 3;
            v186 = sub_C8090(a1);
            v3 = nullptr;
            if ( !v186 )
              return (char *)v3;
            v136 = (int)v186;
            v9 = *(_DWORD **)(v452 + 4464);
            v10 = v9[1];
            if ( (unsigned int)(v10 + 32) < 0xFF8 )
            {
              v188 = v9 + 1;
            }
            else
            {
              v187 = operator new[](0x1000u);
              *v187 = v9;
              v187[1] = 0;
              *(_DWORD *)(v452 + 4464) = v187;
              v10 = 0;
              v188 = v187 + 1;
              v9 = v187;
            }
            *v188 = v10 + 32;
            *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
            *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3332;
            *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309843;
            v322 = (__int64 *)((char *)&qword_13ACD8 - 309841);
            goto LABEL_570;
          }
          v272 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v272 )
            return (char *)v3;
          v273 = v272;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v275 = v9 + 1;
          }
          else
          {
            v274 = operator new[](0x1000u);
            *v274 = v9;
            v274[1] = 0;
            *(_DWORD *)(v452 + 4464) = v274;
            v10 = 0;
            v275 = v274 + 1;
            v9 = v274;
          }
          *v275 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2492;
          *(_DWORD *)((char *)v9 + v10 + 16) = v273;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309843;
          v321 = (char *)&qword_13ACD8 - 309841;
          break;
        default:
          return nullptr;
      }
      goto LABEL_480;
    case 'n':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'a':
        case 'w':
          v3 = nullptr;
          if ( (unsigned int)(v2 - v1) < 2 )
            return (char *)v3;
          if ( v5 == 103 && v1[1] == 115 )
          {
            v1 += 2;
            *(_DWORD *)a1 = v1;
            v38 = 1;
            if ( (unsigned int)(v2 - v1) < 2 )
              return nullptr;
          }
          else
          {
            v38 = 0;
          }
          v535 = v1[1] == 97;
          if ( *v1 != 110 )
            return nullptr;
          v547 = v38;
          v308 = (_DWORD *)v452;
          if ( v1[1] != 119 && (*v1 != 110 || v1[1] != 97) )
            return nullptr;
          v309 = v1 + 2;
          *(_DWORD *)v452 = v309;
          v541 = (*(_DWORD *)(v452 + 12) - *(_DWORD *)(v452 + 8)) >> 2;
          v500 = (_BYTE *)(v452 + 20);
          if ( v309 != v2 )
            goto LABEL_368;
          break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 'u':
        case 'v':
          return (char *)v3;
        case 'e':
          *(_DWORD *)a1 = v1 + 2;
          v205 = sub_C8090(a1);
          if ( !v205 )
            return nullptr;
          v206 = v205;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v208 = v9 + 1;
          }
          else
          {
            v207 = operator new[](0x1000u);
            *v207 = v9;
            v207[1] = 0;
            *(_DWORD *)(v452 + 4464) = v207;
            v10 = 0;
            v208 = v207 + 1;
            v9 = v207;
          }
          *v208 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v206;
          *(_DWORD *)((char *)v9 + v10 + 20) = &qword_13ACD8 - 38730;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309838);
          goto LABEL_499;
        case 'g':
          *(_DWORD *)a1 = v1 + 2;
          v209 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v209 )
            return (char *)v3;
          v136 = (int)v209;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v211 = v9 + 1;
          }
          else
          {
            v210 = operator new[](0x1000u);
            *v210 = v9;
            v210[1] = 0;
            *(_DWORD *)(v452 + 4464) = v210;
            v10 = 0;
            v211 = v210 + 1;
            v9 = v210;
          }
          *v211 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3332;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 330515;
          v322 = (__int64 *)((char *)&qword_13ACD8 - 330514);
          goto LABEL_570;
        case 't':
          *(_DWORD *)a1 = v1 + 2;
          v212 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v212 )
            return (char *)v3;
          v136 = (int)v212;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v214 = v9 + 1;
          }
          else
          {
            v213 = operator new[](0x1000u);
            *v213 = v9;
            v213[1] = 0;
            *(_DWORD *)(v452 + 4464) = v213;
            v10 = 0;
            v214 = v213 + 1;
            v9 = v213;
          }
          *v214 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3332;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309837;
          v322 = (__int64 *)((char *)&qword_13ACD8 - 309836);
          goto LABEL_570;
        case 'x':
          *(_DWORD *)a1 = v1 + 2;
          v215 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v215 )
            return (char *)v3;
          v152 = v215;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v217 = v9 + 1;
          }
          else
          {
            v216 = operator new[](0x1000u);
            *v216 = v9;
            v216[1] = 0;
            *(_DWORD *)(v452 + 4464) = v216;
            v10 = 0;
            v217 = v216 + 1;
            v9 = v216;
          }
          *v217 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2380;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309835;
          v276 = (char *)&qword_13ACD8 - 309825;
          goto LABEL_407;
        default:
          return nullptr;
      }
      do
      {
        do
        {
          v310 = v308;
          v311 = sub_C8090((int)v308);
          if ( !v311 )
            return nullptr;
          v312 = (char *)v310[3];
          v308 = v310;
          if ( v312 == (char *)v310[4] )
          {
            v313 = v311;
            v314 = (_BYTE *)v308[2];
            v315 = v312 - v314;
            v485 = v315 >> 2;
            v511 = v315 >> 1;
            if ( v500 == v314 )
            {
              v526 = v314;
              v317 = (char *)malloc(2 * v315);
              if ( v315 )
              {
                v450 = v315;
                v318 = v317;
                memmove(v317, v526, v450);
                v311 = v313;
                v316 = v318;
              }
              else
              {
                v311 = v313;
                v316 = v317;
              }
            }
            else
            {
              v316 = (char *)realloc(v314, 2 * v315);
              v311 = v313;
            }
            v308 = (_DWORD *)v452;
            *(_DWORD *)(v452 + 8) = v316;
            v312 = &v316[4 * v485];
            *(_DWORD *)(v452 + 12) = v312;
            *(_DWORD *)(v452 + 16) = &v316[4 * v511];
          }
          v308[3] = v312 + 4;
          *(_DWORD *)v312 = v311;
          v309 = (char *)*v308;
        }
        while ( *v308 == v308[1] );
LABEL_368:
        ;
      }
      while ( *v309 != 95 );
      *v308 = v309 + 1;
      v542 = 4 * v541;
      v491 = (const void *)(v542 + v308[2]);
      v359 = v308[3] - (_DWORD)v491;
      v360 = (v359 + 15) & 0xFFFFFFF0;
      v515 = (_DWORD *)v308[1116];
      v361 = v515[1];
      if ( v360 + v361 < 0xFF8 )
      {
        v390 = v515;
        v391 = v515 + 1;
      }
      else
      {
        if ( v360 >= 0xFF9 )
        {
          v362 = operator new[](v360 | 8);
          *v362 = *v515;
          v362[1] = 0;
          *v515 = v362;
          v363 = (char *)(v362 + 2);
          goto LABEL_585;
        }
        v390 = operator new[](0x1000u);
        *v390 = v515;
        v390[1] = 0;
        *(_DWORD *)(v452 + 4464) = v390;
        v361 = 0;
        v391 = v390 + 1;
      }
      *v391 = v361 + v360;
      v363 = (char *)v390 + v361 + 8;
LABEL_585:
      v518 = v363;
      if ( v359 )
      {
        memmove(v363, v491, v359);
        v397 = v452;
        v398 = *(_DWORD *)(v452 + 8) + v542;
      }
      else
      {
        v397 = v452;
        v398 = (int)v491;
      }
      *(_DWORD *)(v397 + 12) = v398;
      v399 = v397;
      v400 = sub_C2AF0((char **)v397);
      if ( !v400 )
        return nullptr;
      v544 = v400;
      v401 = v359 >> 2;
      v402 = *(_BYTE **)v399;
      v403 = *(_BYTE **)(v399 + 4);
      if ( (unsigned int)(v403 - v402) < 2 || *v402 != 112 || v402[1] != 105 )
      {
        if ( v402 == v403 )
          return nullptr;
        v3 = nullptr;
        if ( *v402 != 69 )
          return (char *)v3;
        *(_DWORD *)v452 = v402 + 1;
        v9 = *(_DWORD **)(v452 + 4464);
        v10 = v9[1];
        if ( (unsigned int)(v10 + 32) < 0xFF8 )
        {
          v415 = v9 + 1;
        }
        else
        {
          v414 = operator new[](0x1000u);
          *v414 = v9;
          v414[1] = 0;
          *(_DWORD *)(v452 + 4464) = v414;
          v10 = 0;
          v415 = v414 + 1;
          v9 = v414;
        }
        *v415 = v10 + 32;
        *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
        *(_DWORD *)((char *)v9 + v10 + 8) = off_13A354;
        *(_DWORD *)((char *)v9 + v10 + 16) = v518;
        *(_DWORD *)((char *)v9 + v10 + 20) = v401;
        *(_DWORD *)((char *)v9 + v10 + 24) = v544;
        *(_DWORD *)((char *)v9 + v10 + 28) = 0;
        *(_DWORD *)((char *)v9 + v10 + 32) = 0;
LABEL_619:
        *((_BYTE *)v9 + v10 + 36) = v547;
        *((_BYTE *)v9 + v10 + 37) = v535;
        return (char *)v9 + v10 + 8;
      }
      v548 = v401;
      v404 = v402 + 2;
      v405 = (_DWORD *)v452;
      *(_DWORD *)v452 = v404;
      v545 = (v405[3] - v405[2]) >> 2;
      if ( v404 == v403 )
        goto LABEL_596;
LABEL_593:
      if ( *v404 != 69 )
      {
LABEL_596:
        while ( 1 )
        {
          v406 = v405;
          v407 = sub_C8090((int)v405);
          if ( !v407 )
            return nullptr;
          v408 = (char *)v406[3];
          v405 = v406;
          if ( v408 == (char *)v406[4] )
          {
            v495 = v407;
            v409 = (_BYTE *)v406[2];
            v410 = v408 - v409;
            v411 = v410 >> 2;
            v527 = v410 >> 1;
            if ( v500 == v409 )
            {
              v549 = v409;
              v412 = (char *)malloc(2 * v410);
              if ( v410 )
              {
                v451 = v410;
                v413 = v412;
                memmove(v412, v549, v451);
                v412 = v413;
              }
            }
            else
            {
              v412 = (char *)realloc(v409, 2 * v410);
            }
            v405 = (_DWORD *)v452;
            *(_DWORD *)(v452 + 8) = v412;
            v408 = &v412[4 * v411];
            *(_DWORD *)(v452 + 12) = v408;
            *(_DWORD *)(v452 + 16) = &v412[4 * v527];
            v407 = v495;
          }
          v405[3] = v408 + 4;
          *(_DWORD *)v408 = v407;
          v404 = (_BYTE *)*v405;
          if ( *v405 != v405[1] )
            goto LABEL_593;
        }
      }
      *v405 = v404 + 1;
      v546 = 4 * v545;
      v502 = (const void *)(v546 + v405[2]);
      v497 = v405[3] - (_DWORD)v502;
      v423 = (v497 + 15) & 0xFFFFFFF0;
      v424 = (_DWORD *)v405[1116];
      v425 = v424[1];
      if ( v423 + v425 < 0xFF8 )
      {
        v432 = v424 + 1;
      }
      else
      {
        if ( v423 >= 0xFF9 )
        {
          v426 = operator new[](v423 | 8);
          *v426 = *v424;
          v426[1] = 0;
          *v424 = v426;
          v427 = (char *)(v426 + 2);
          if ( !v497 )
            goto LABEL_697;
          goto LABEL_696;
        }
        v434 = operator new[](0x1000u);
        *v434 = v424;
        v434[1] = 0;
        *(_DWORD *)(v452 + 4464) = v434;
        v425 = 0;
        v432 = v434 + 1;
        v424 = v434;
      }
      *v432 = v425 + v423;
      v427 = (char *)v424 + v425 + 8;
      if ( !v497 )
      {
LABEL_697:
        v498 = v497 >> 2;
        *(_DWORD *)(v452 + 12) = v502;
        v9 = *(_DWORD **)((char *)&dword_13BE48 + v452 - 1289432);
        v10 = v9[1];
        if ( (unsigned int)(v10 + 32) < 0xFF8 )
        {
          v436 = v9 + 1;
        }
        else
        {
          v435 = operator new[](0x1000u);
          *v435 = v9;
          v435[1] = 0;
          *(_DWORD *)(v452 + 4464) = v435;
          v10 = 0;
          v436 = v435 + 1;
          v9 = v435;
        }
        *v436 = v10 + 32;
        *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
        *(_DWORD *)((char *)v9 + v10 + 8) = off_13A354;
        *(_DWORD *)((char *)v9 + v10 + 16) = v518;
        *(_DWORD *)((char *)v9 + v10 + 20) = v548;
        *(_DWORD *)((char *)v9 + v10 + 24) = v544;
        *(_DWORD *)((char *)v9 + v10 + 28) = v427;
        *(_DWORD *)((char *)v9 + v10 + 32) = v498;
        goto LABEL_619;
      }
LABEL_696:
      memmove(v427, v502, v497);
      v502 = (const void *)(*(_DWORD *)(v452 + 8) + v546);
      goto LABEL_697;
    case 'o':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'R':
          *(_DWORD *)a1 = v1 + 2;
          v39 = sub_C8090(a1);
          if ( !v39 )
            return nullptr;
          v460 = v39;
          v40 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v40 )
            return (char *)v3;
          v8 = v40;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v42 = v9 + 1;
          }
          else
          {
            v41 = operator new[](0x1000u);
            *v41 = v9;
            v41[1] = 0;
            *(_DWORD *)(v452 + 4464) = v41;
            v10 = 0;
            v42 = v41 + 1;
            v9 = v41;
          }
          *v42 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v460;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309821;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309819);
          break;
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'p':
        case 'q':
          return (char *)v3;
        case 'n':
          return sub_CE0D0(a1);
        case 'o':
          *(_DWORD *)a1 = v1 + 2;
          v112 = sub_C8090(a1);
          if ( !v112 )
            return nullptr;
          v472 = v112;
          v113 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v113 )
            return (char *)v3;
          v8 = v113;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v115 = v9 + 1;
          }
          else
          {
            v114 = operator new[](0x1000u);
            *v114 = v9;
            v114[1] = 0;
            *(_DWORD *)(v452 + 4464) = v114;
            v10 = 0;
            v115 = v114 + 1;
            v9 = v114;
          }
          *v115 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v472;
          *(_DWORD *)((char *)v9 + v10 + 20) = &qword_13ACD8 - 38728;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 309822);
          break;
        case 'r':
          *(_DWORD *)a1 = v1 + 2;
          v116 = sub_C8090(a1);
          if ( !v116 )
            return nullptr;
          v473 = v116;
          v117 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v117 )
            return (char *)v3;
          v8 = v117;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v119 = v9 + 1;
          }
          else
          {
            v118 = operator new[](0x1000u);
            *v118 = v9;
            v118[1] = 0;
            *(_DWORD *)(v452 + 4464) = v118;
            v10 = 0;
            v119 = v118 + 1;
            v9 = v118;
          }
          *v119 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v473;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 329956;
          v319 = (__int64 *)((char *)&qword_13ACD8 - 329955);
          break;
        default:
          return nullptr;
      }
      goto LABEL_521;
    case 'p':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'L':
          *(_DWORD *)a1 = v1 + 2;
          v52 = sub_C8090(a1);
          if ( !v52 )
            return nullptr;
          v53 = v52;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v55 = v9 + 1;
          }
          else
          {
            v54 = operator new[](0x1000u);
            *v54 = v9;
            v54[1] = 0;
            *(_DWORD *)(v452 + 4464) = v54;
            v10 = 0;
            v55 = v54 + 1;
            v9 = v54;
          }
          *v55 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v53;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309814;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309812);
          goto LABEL_499;
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'n':
        case 'o':
        case 'q':
        case 'r':
          return (char *)v3;
        case 'l':
          *(_DWORD *)a1 = v1 + 2;
          v218 = sub_C8090(a1);
          if ( !v218 )
            return nullptr;
          v219 = v218;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v221 = v9 + 1;
          }
          else
          {
            v220 = operator new[](0x1000u);
            *v220 = v9;
            v220[1] = 0;
            *(_DWORD *)(v452 + 4464) = v220;
            v10 = 0;
            v221 = v220 + 1;
            v9 = v220;
          }
          *v221 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v219;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 330513;
          v346 = &qword_13ACD8 - 41314;
          goto LABEL_499;
        case 'm':
          *(_DWORD *)a1 = v1 + 2;
          v222 = sub_C8090(a1);
          if ( !v222 )
            return nullptr;
          v223 = v222;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v225 = v9 + 1;
          }
          else
          {
            v224 = operator new[](0x1000u);
            *v224 = v9;
            v224[1] = 0;
            *(_DWORD *)(v452 + 4464) = v224;
            v10 = 0;
            v225 = v224 + 1;
            v9 = v224;
          }
          *v225 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v223;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309818;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309815);
          goto LABEL_499;
        case 'p':
          *(_DWORD *)a1 = v1 + 2;
          if ( v1 + 2 != v2 && v1[2] == 95 )
          {
            *(_DWORD *)a1 = v1 + 3;
            v226 = sub_C8090(a1);
            v3 = nullptr;
            if ( !v226 )
              return (char *)v3;
            v136 = (int)v226;
            v9 = *(_DWORD **)(v452 + 4464);
            v10 = v9[1];
            if ( (unsigned int)(v10 + 32) < 0xFF8 )
            {
              v228 = v9 + 1;
            }
            else
            {
              v227 = operator new[](0x1000u);
              *v227 = v9;
              v227[1] = 0;
              *(_DWORD *)(v452 + 4464) = v227;
              v10 = 0;
              v228 = v227 + 1;
              v9 = v227;
            }
            *v228 = v10 + 32;
            *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
            *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3332;
            *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309811;
            v322 = (__int64 *)((char *)&qword_13ACD8 - 309809);
            goto LABEL_570;
          }
          v304 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v304 )
            return (char *)v3;
          v305 = v304;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v307 = v9 + 1;
          }
          else
          {
            v306 = operator new[](0x1000u);
            *v306 = v9;
            v306[1] = 0;
            *(_DWORD *)(v452 + 4464) = v306;
            v10 = 0;
            v307 = v306 + 1;
            v9 = v306;
          }
          *v307 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2492;
          *(_DWORD *)((char *)v9 + v10 + 16) = v305;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309811;
          v321 = (char *)&qword_13ACD8 - 309809;
          break;
        case 's':
          *(_DWORD *)a1 = v1 + 2;
          v229 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v229 )
            return (char *)v3;
          v136 = (int)v229;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v231 = v9 + 1;
          }
          else
          {
            v230 = operator new[](0x1000u);
            *v230 = v9;
            v230[1] = 0;
            *(_DWORD *)(v452 + 4464) = v230;
            v10 = 0;
            v231 = v230 + 1;
            v9 = v230;
          }
          *v231 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3332;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 330513;
          v322 = &qword_13ACD8 - 41314;
          goto LABEL_570;
        case 't':
          *(_DWORD *)a1 = v1 + 2;
          v232 = sub_C8090(a1);
          if ( !v232 )
            return nullptr;
          v233 = v232;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v235 = v9 + 1;
          }
          else
          {
            v234 = operator new[](0x1000u);
            *v234 = v9;
            v234[1] = 0;
            *(_DWORD *)(v452 + 4464) = v234;
            v10 = 0;
            v235 = v234 + 1;
            v9 = v234;
          }
          *v235 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2772;
          *(_DWORD *)((char *)v9 + v10 + 16) = v233;
          *(_DWORD *)((char *)v9 + v10 + 20) = &qword_13ACD8 - 38726;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309806);
          goto LABEL_499;
        default:
          return nullptr;
      }
      goto LABEL_480;
    case 'q':
      if ( v1[1] != 117 )
        return nullptr;
      *(_DWORD *)a1 = v1 + 2;
      v56 = sub_C8090(a1);
      if ( !v56 )
        return nullptr;
      v57 = v56;
      v58 = sub_C8090(v452);
      if ( !v58 )
        return nullptr;
      v462 = v58;
      v503 = sub_C8090(v452);
      v3 = nullptr;
      if ( !v503 )
        return (char *)v3;
      v9 = *(_DWORD **)(v452 + 4464);
      v10 = v9[1];
      if ( (unsigned int)(v10 + 32) < 0xFF8 )
      {
        v60 = v9 + 1;
      }
      else
      {
        v59 = operator new[](0x1000u);
        *v59 = v9;
        v59[1] = 0;
        *(_DWORD *)(v452 + 4464) = v59;
        v10 = 0;
        v60 = v59 + 1;
        v9 = v59;
      }
      *v60 = v10 + 32;
      *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
      *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2324;
      *(_DWORD *)((char *)v9 + v10 + 16) = v57;
      *(_DWORD *)((char *)v9 + v10 + 20) = v462;
      v321 = v503;
LABEL_480:
      *(_DWORD *)((char *)v9 + v10 + 24) = v321;
      return (char *)v9 + v10 + 8;
    case 'r':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'M':
          *(_DWORD *)a1 = v1 + 2;
          v61 = sub_C8090(a1);
          if ( !v61 )
            return nullptr;
          v62 = v61;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v64 = v9 + 1;
          }
          else
          {
            v63 = operator new[](0x1000u);
            *v63 = v9;
            v63[1] = 0;
            *(_DWORD *)(v452 + 4464) = v63;
            v10 = 0;
            v64 = v63 + 1;
            v9 = v63;
          }
          *v64 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v62;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309786;
          v346 = &qword_13ACD8 - 38723;
          goto LABEL_499;
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
          return (char *)v3;
        case 'S':
          *(_DWORD *)a1 = v1 + 2;
          v189 = sub_C8090(a1);
          if ( !v189 )
            return nullptr;
          v190 = v189;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v192 = v9 + 1;
          }
          else
          {
            v191 = operator new[](0x1000u);
            *v191 = v9;
            v191[1] = 0;
            *(_DWORD *)(v452 + 4464) = v191;
            v10 = 0;
            v192 = v191 + 1;
            v9 = v191;
          }
          *v192 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v190;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309780;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309777);
          goto LABEL_499;
        case 'c':
          *(_DWORD *)a1 = v1 + 2;
          v193 = sub_C2AF0((char **)a1);
          if ( !v193 )
            return nullptr;
          v194 = v193;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v196 = v9 + 1;
          }
          else
          {
            v195 = operator new[](0x1000u);
            *v195 = v9;
            v195[1] = 0;
            *(_DWORD *)(v452 + 4464) = v195;
            v10 = 0;
            v196 = v195 + 1;
            v9 = v195;
          }
          *v196 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3276;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309805;
          v347 = (char *)&qword_13ACD8 - 309789;
          goto LABEL_503;
        case 'm':
          *(_DWORD *)a1 = v1 + 2;
          v197 = sub_C8090(a1);
          if ( !v197 )
            return nullptr;
          v198 = v197;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v200 = v9 + 1;
          }
          else
          {
            v199 = operator new[](0x1000u);
            *v199 = v9;
            v199[1] = 0;
            *(_DWORD *)(v452 + 4464) = v199;
            v10 = 0;
            v200 = v199 + 1;
            v9 = v199;
          }
          *v200 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v198;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309788;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309787);
          goto LABEL_499;
        case 's':
          *(_DWORD *)a1 = v1 + 2;
          v201 = sub_C8090(a1);
          if ( !v201 )
            return nullptr;
          v202 = v201;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v204 = v9 + 1;
          }
          else
          {
            v203 = operator new[](0x1000u);
            *v203 = v9;
            v203[1] = 0;
            *(_DWORD *)(v452 + 4464) = v203;
            v10 = 0;
            v204 = v203 + 1;
            v9 = v203;
          }
          *v204 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3388;
          *(_DWORD *)((char *)v9 + v10 + 16) = v202;
          *(_DWORD *)((char *)v9 + v10 + 20) = (char *)&qword_13ACD8 - 309783;
          v346 = (__int64 *)((char *)&qword_13ACD8 - 309781);
LABEL_499:
          *(_DWORD *)((char *)v9 + v10 + 24) = v346;
          break;
        default:
          return nullptr;
      }
LABEL_500:
      *(_DWORD *)((char *)v9 + v10 + 28) = v461;
      return (char *)v9 + v10 + 8;
    case 's':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'P':
          v65 = v1 + 2;
          *(_DWORD *)a1 = v65;
          v529 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
          if ( v65 != v2 )
            goto LABEL_95;
          break;
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
        case 'b':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'q':
        case 's':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
          return (char *)v3;
        case 'Z':
          v260 = v1 + 2;
          *(_DWORD *)a1 = v260;
          if ( v2 == v260 )
            return nullptr;
          v261 = *v260;
          if ( v261 == 102 )
          {
            v490 = (const void *)sub_CDE80(a1);
            v3 = nullptr;
            if ( !v490 )
              return (char *)v3;
            v9 = *(_DWORD **)(v452 + 4464);
            v10 = v9[1];
            if ( (unsigned int)(v10 + 32) < 0xFF8 )
            {
              v356 = v9 + 1;
            }
            else
            {
              v355 = operator new[](0x1000u);
              *v355 = v9;
              v355[1] = 0;
              *(_DWORD *)(v452 + 4464) = v355;
              v10 = 0;
              v356 = v355 + 1;
              v9 = v355;
            }
            *v356 = v10 + 32;
            *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
            *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2380;
            *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309755;
            *(_DWORD *)((char *)v9 + v10 + 20) = &qword_13ACD8 - 38718;
            *(_DWORD *)((char *)v9 + v10 + 24) = v490;
            *(_DWORD *)((char *)v9 + v10 + 28) = (char *)&qword_13ACD8 - 320654;
            v330 = (char *)&qword_13ACD8 - 320653;
            goto LABEL_408;
          }
          if ( v261 != 84 )
            return nullptr;
          v481 = sub_C6CF0(a1);
          v3 = nullptr;
          if ( v481 )
          {
            v9 = *(_DWORD **)(v452 + 4464);
            v10 = v9[1];
            if ( (unsigned int)(v10 + 16) < 0xFF8 )
            {
              v263 = v9 + 1;
            }
            else
            {
              v262 = operator new[](0x1000u);
              *v262 = v9;
              v262[1] = 0;
              *(_DWORD *)(v452 + 4464) = v262;
              v10 = 0;
              v263 = v262 + 1;
              v9 = v262;
            }
            *v263 = v10 + 16;
            *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
            *(_DWORD *)((char *)v9 + v10 + 8) = off_13A3FC;
            *(_DWORD *)((char *)v9 + v10 + 16) = v481;
            return (char *)v9 + v10 + 8;
          }
          return (char *)v3;
        case 'c':
          *(_DWORD *)a1 = v1 + 2;
          v264 = sub_C2AF0((char **)a1);
          if ( !v264 )
            return nullptr;
          v194 = v264;
          v461 = sub_C8090(v452);
          v3 = nullptr;
          if ( !v461 )
            return (char *)v3;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v266 = v9 + 1;
          }
          else
          {
            v265 = operator new[](0x1000u);
            *v265 = v9;
            v265[1] = 0;
            *(_DWORD *)(v452 + 4464) = v265;
            v10 = 0;
            v266 = v265 + 1;
            v9 = v265;
          }
          *v266 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 3276;
          *(_DWORD *)((char *)v9 + v10 + 16) = &qword_13ACD8 - 38722;
          v347 = (char *)&qword_13ACD8 - 309765;
LABEL_503:
          *(_DWORD *)((char *)v9 + v10 + 20) = v347;
          *(_DWORD *)((char *)v9 + v10 + 24) = v194;
          goto LABEL_500;
        case 'p':
          *(_DWORD *)a1 = v1 + 2;
          v267 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v267 )
            return (char *)v3;
          v171 = v267;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 16) < 0xFF8 )
          {
            v269 = v9 + 1;
          }
          else
          {
            v268 = operator new[](0x1000u);
            *v268 = v9;
            v268[1] = 0;
            *(_DWORD *)(v452 + 4464) = v268;
            v10 = 0;
            v269 = v268 + 1;
            v9 = v268;
          }
          *v269 = v10 + 16;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843037;
          v323 = (char *)&qword_13ACD8 - 3444;
          goto LABEL_435;
        case 'r':
          return sub_CE0D0(a1);
        case 't':
          *(_DWORD *)a1 = v1 + 2;
          v246 = sub_C2AF0((char **)a1);
          goto LABEL_320;
        case 'z':
          *(_DWORD *)a1 = v1 + 2;
          v246 = sub_C8090(a1);
LABEL_320:
          v3 = nullptr;
          if ( !v246 )
            return (char *)v3;
          v152 = v246;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v271 = v9 + 1;
          }
          else
          {
            v270 = operator new[](0x1000u);
            *v270 = v9;
            v270[1] = 0;
            *(_DWORD *)(v452 + 4464) = v270;
            v10 = 0;
            v271 = v270 + 1;
            v9 = v270;
          }
          *v271 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2380;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309764;
          v276 = (char *)&qword_13ACD8 - 309756;
          goto LABEL_407;
        default:
          return nullptr;
      }
      do
      {
        do
        {
          v66 = a1;
          v67 = sub_C5A80((char **)a1);
          if ( !v67 )
            return nullptr;
          v68 = *(char **)(v66 + 12);
          a1 = v66;
          if ( v68 == *(char **)(v66 + 16) )
          {
            v69 = v67;
            v70 = *(_BYTE **)(a1 + 8);
            v71 = v68 - v70;
            v463 = v71 >> 2;
            v504 = v71 >> 1;
            if ( (_BYTE *)(v452 + 20) == v70 )
            {
              v521 = v70;
              v73 = (char *)malloc(2 * v71);
              if ( v71 )
              {
                v445 = v71;
                v74 = v73;
                memmove(v73, v521, v445);
                v67 = v69;
                v72 = v74;
              }
              else
              {
                v67 = v69;
                v72 = v73;
              }
            }
            else
            {
              v72 = (char *)realloc(v70, 2 * v71);
              v67 = v69;
            }
            a1 = v452;
            *(_DWORD *)(v452 + 8) = v72;
            v68 = &v72[4 * v463];
            *(_DWORD *)(v452 + 12) = v68;
            *(_DWORD *)(v452 + 16) = &v72[4 * v504];
          }
          *(_DWORD *)(a1 + 12) = v68 + 4;
          *(_DWORD *)v68 = v67;
          v65 = *(char **)a1;
        }
        while ( *(_DWORD *)a1 == *(_DWORD *)(a1 + 4) );
LABEL_95:
        ;
      }
      while ( *v65 != 69 );
      *(_DWORD *)a1 = v65 + 1;
      v536 = 4 * v529;
      v324 = (const void *)(v536 + *(_DWORD *)(a1 + 8));
      v486 = *(_DWORD *)(a1 + 12) - (_DWORD)v324;
      v325 = (v486 + 15) & 0xFFFFFFF0;
      v326 = *(_DWORD **)(a1 + 4464);
      v327 = v326[1];
      if ( v325 + v327 < 0xFF8 )
      {
        v354 = v326 + 1;
      }
      else
      {
        if ( v325 >= 0xFF9 )
        {
          v328 = operator new[](v325 | 8);
          *v328 = *v326;
          v328[1] = 0;
          *v326 = v328;
          v329 = (char *)(v328 + 2);
LABEL_534:
          v516 = v329;
          if ( v486 )
          {
            memmove(v329, v324, v486);
            v365 = v452;
            v324 = (const void *)(*(_DWORD *)(v452 + 8) + v536);
          }
          else
          {
            v365 = v452;
          }
          v492 = v486 >> 2;
          *(_DWORD *)(v365 + 12) = v324;
          v366 = *(_DWORD **)(v365 + 4464);
          v367 = v366[1];
          if ( (unsigned int)(v367 + 16) < 0xFF8 )
          {
            v369 = v366 + 1;
          }
          else
          {
            v368 = operator new[](0x1000u);
            *v368 = v366;
            v368[1] = 0;
            *(_DWORD *)(v365 + 4464) = v368;
            v367 = 0;
            v369 = v368 + 1;
            v366 = v368;
          }
          *v369 = v367 + 16;
          *(_DWORD *)((char *)v366 + v367 + 12) = 16843008;
          *(_DWORD *)((char *)v366 + v367 + 8) = (char *)&qword_13ACD8 - 2212;
          *(_DWORD *)((char *)v366 + v367 + 16) = v516;
          v517 = (int)v366 + v367 + 8;
          *(_DWORD *)((char *)v366 + v367 + 20) = v492;
          v370 = *(_DWORD **)(v365 + 4464);
          v371 = v370[1];
          if ( (unsigned int)(v371 + 32) < 0xFF8 )
          {
            v373 = v370 + 1;
          }
          else
          {
            v372 = operator new[](0x1000u);
            *v372 = v370;
            v372[1] = 0;
            *(_DWORD *)(v365 + 4464) = v372;
            v371 = 0;
            v373 = v372 + 1;
            v370 = v372;
          }
          *v373 = v371 + 32;
          *(_DWORD *)((char *)v370 + v371 + 12) = 16843050;
          *(_DWORD *)((char *)v370 + v371 + 8) = (char *)&qword_13ACD8 - 2380;
          *(_DWORD *)((char *)v370 + v371 + 16) = (char *)&qword_13ACD8 - 309755;
          *(_DWORD *)((char *)v370 + v371 + 20) = &qword_13ACD8 - 38718;
          *(_DWORD *)((char *)v370 + v371 + 24) = v517;
          *(_DWORD *)((char *)v370 + v371 + 28) = (char *)&qword_13ACD8 - 320654;
          *(_DWORD *)((char *)v370 + v371 + 32) = (char *)&qword_13ACD8 - 320653;
          goto LABEL_549;
        }
        v364 = operator new[](0x1000u);
        *v364 = v326;
        v364[1] = 0;
        *(_DWORD *)(v452 + 4464) = v364;
        v327 = 0;
        v354 = v364 + 1;
        v326 = v364;
      }
      *v354 = v327 + v325;
      v329 = (char *)v326 + v327 + 8;
      goto LABEL_534;
    case 't':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'e':
          *(_DWORD *)a1 = v1 + 2;
          v43 = sub_C8090(a1);
          goto LABEL_196;
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 's':
        case 't':
        case 'u':
        case 'v':
          return (char *)v3;
        case 'i':
          *(_DWORD *)a1 = v1 + 2;
          v43 = sub_C2AF0((char **)a1);
LABEL_196:
          v3 = nullptr;
          if ( !v43 )
            return (char *)v3;
          v152 = v43;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v154 = v9 + 1;
          }
          else
          {
            v153 = operator new[](0x1000u);
            *v153 = v9;
            v153[1] = 0;
            *(_DWORD *)(v452 + 4464) = v153;
            v10 = 0;
            v154 = v153 + 1;
            v9 = v153;
          }
          *v154 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          *(_DWORD *)((char *)v9 + v10 + 8) = (char *)&qword_13ACD8 - 2380;
          *(_DWORD *)((char *)v9 + v10 + 16) = (char *)&qword_13ACD8 - 309743;
          v276 = (char *)&qword_13ACD8 - 309735;
          goto LABEL_407;
        case 'l':
          *(_DWORD *)a1 = v1 + 2;
          v155 = sub_C2AF0((char **)a1);
          if ( !v155 )
            return nullptr;
          v539 = v155;
          v533 = (*(_DWORD *)(v452 + 12) - *(_DWORD *)(v452 + 8)) >> 2;
          v156 = (_DWORD *)v452;
          break;
        case 'r':
          *(_DWORD *)a1 = v1 + 2;
          v166 = *(_DWORD **)(a1 + 4464);
          v167 = v166[1];
          if ( (unsigned int)(v167 + 16) < 0xFF8 )
          {
            v169 = v166 + 1;
          }
          else
          {
            v168 = operator new[](0x1000u);
            *v168 = v166;
            v168[1] = 0;
            *(_DWORD *)(v452 + 4464) = v168;
            v167 = 0;
            v169 = v168 + 1;
            v166 = v168;
          }
          *v169 = v167 + 16;
          v3 = (_DWORD *)((char *)v166 + v167 + 8);
          *(_DWORD *)((char *)v166 + v167 + 12) = 16843015;
          *v3 = (char *)&qword_13ACD8 - 4076;
          *(_DWORD *)((char *)v166 + v167 + 16) = &qword_13ACD8 - 41266;
          *(_DWORD *)((char *)v166 + v167 + 20) = (char *)&qword_13ACD8 - 330123;
          return (char *)v3;
        case 'w':
          *(_DWORD *)a1 = v1 + 2;
          v170 = sub_C8090(a1);
          v3 = nullptr;
          if ( !v170 )
            return (char *)v3;
          v171 = v170;
          v9 = *(_DWORD **)(v452 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 16) < 0xFF8 )
          {
            v173 = v9 + 1;
          }
          else
          {
            v172 = operator new[](0x1000u);
            *v172 = v9;
            v172[1] = 0;
            *(_DWORD *)(v452 + 4464) = v172;
            v10 = 0;
            v173 = v172 + 1;
            v9 = v172;
          }
          *v173 = v10 + 16;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          v323 = (char *)&qword_13ACD8 - 2156;
LABEL_435:
          *(_DWORD *)((char *)v9 + v10 + 8) = v323;
          *(_DWORD *)((char *)v9 + v10 + 16) = v171;
          return (char *)v9 + v10 + 8;
        default:
          return nullptr;
      }
      while ( 2 )
      {
        v157 = (_BYTE *)*v156;
        if ( *v156 == v156[1] || *v157 != 69 )
        {
          v158 = v156;
          v159 = sub_CE7B0((int)v156);
          if ( v159 )
          {
            v160 = (char *)v158[3];
            v156 = v158;
            if ( v160 == (char *)v158[4] )
            {
              v161 = v159;
              v162 = (_BYTE *)v156[2];
              v163 = v160 - v162;
              v478 = v163 >> 2;
              v509 = v163 >> 1;
              if ( (_BYTE *)(v452 + 20) == v162 )
              {
                v525 = v162;
                v164 = (char *)malloc(2 * v163);
                if ( v163 )
                {
                  v449 = v163;
                  v165 = v164;
                  memmove(v164, v525, v449);
                  v164 = v165;
                }
              }
              else
              {
                v164 = (char *)realloc(v162, 2 * v163);
              }
              v159 = v161;
              v156 = (_DWORD *)v452;
              *(_DWORD *)(v452 + 8) = v164;
              v160 = &v164[4 * v478];
              *(_DWORD *)(v452 + 12) = v160;
              *(_DWORD *)(v452 + 16) = &v164[4 * v509];
            }
            v156[3] = v160 + 4;
            *(_DWORD *)v160 = v159;
            continue;
          }
          return nullptr;
        }
        break;
      }
      *v156 = v157 + 1;
      v538 = 4 * v533;
      v513 = (const void *)(v538 + v156[2]);
      v488 = v156[3] - (_DWORD)v513;
      v336 = (v488 + 15) & 0xFFFFFFF0;
      v337 = (_DWORD *)v156[1116];
      v338 = v337[1];
      if ( v336 + v338 < 0xFF8 )
      {
        v358 = v337 + 1;
      }
      else
      {
        if ( v336 >= 0xFF9 )
        {
          v339 = operator new[](v336 | 8);
          *v339 = *v337;
          v339[1] = 0;
          *v337 = v339;
          v340 = (__int64 *)(v339 + 2);
LABEL_561:
          v385 = v513;
          v514 = v340;
          if ( v488 )
          {
            memmove(v340, v385, v488);
            v386 = v452;
            v385 = (const void *)(*(_DWORD *)(v452 + 8) + v538);
          }
          else
          {
            v386 = v452;
          }
          v136 = v488 >> 2;
          *(_DWORD *)(v386 + 12) = v385;
          v9 = *(_DWORD **)(v386 + 4464);
          v10 = v9[1];
          if ( (unsigned int)(v10 + 32) < 0xFF8 )
          {
            v389 = v9 + 1;
          }
          else
          {
            v387 = v386;
            v388 = operator new[](0x1000u);
            *v388 = v9;
            v388[1] = 0;
            *(_DWORD *)(v387 + 4464) = v388;
            v136 = v488 >> 2;
            v10 = 0;
            v389 = v388 + 1;
            v9 = v388;
          }
          *v389 = v10 + 32;
          *(_DWORD *)((char *)v9 + v10 + 12) = 16843050;
          v383 = (char *)&qword_13ACD8 - 2548;
LABEL_568:
          *(_DWORD *)((char *)v9 + v10 + 8) = v383;
          *(_DWORD *)((char *)v9 + v10 + 16) = v539;
LABEL_569:
          v322 = v514;
LABEL_570:
          *(_DWORD *)((char *)v9 + v10 + 20) = v322;
          *(_DWORD *)((char *)v9 + v10 + 24) = v136;
          return (char *)v9 + v10 + 8;
        }
        v384 = operator new[](0x1000u);
        *v384 = v337;
        v384[1] = 0;
        *(_DWORD *)(v452 + 4464) = v384;
        v338 = 0;
        v358 = v384 + 1;
        v337 = v384;
      }
      *v358 = v338 + v336;
      v340 = (__int64 *)((char *)v337 + v338 + 8);
      goto LABEL_561;
    default:
      return nullptr;
  }
}
// 13A07C: using guessed type int (*off_13A07C[3])();
// 13A354: using guessed type int (*off_13A354[3])();
// 13A3FC: using guessed type int (*off_13A3FC[3])();
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13BE48: using guessed type int dword_13BE48;
