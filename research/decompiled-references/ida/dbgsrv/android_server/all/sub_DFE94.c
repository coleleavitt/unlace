/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DFE94
// Address: 0x00000000000DFE94

//----- (00000000000DFE94) ----------------------------------------------------
char *__fastcall sub_DFE94(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // x9
  unsigned __int8 *v2; // x10
  unsigned __int8 *v3; // x8
  char *result; // x0
  int v5; // w8
  char v7; // w21
  int v8; // w11
  __int64 v9; // x0
  __int64 v10; // x20
  char *v11; // x0
  unsigned __int8 *v12; // x22
  char *v13; // x21
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x0
  __int64 v17; // x10
  unsigned __int8 *v18; // x8
  const char *v19; // x13
  char *v20; // x9
  unsigned __int8 *v21; // x8
  char *v22; // x1
  int v23; // w8
  unsigned __int64 v24; // x8
  int v25; // w10
  int v26; // w8
  int v27; // w8
  char *v28; // x0
  char *v29; // x20
  char *v30; // x0
  unsigned __int8 *v31; // x22
  char *v32; // x21
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x0
  __int64 v36; // x10
  unsigned __int8 *v37; // x8
  int v38; // w11
  bool v39; // w24
  unsigned __int8 *v40; // x8
  unsigned __int8 **v41; // x25
  signed __int64 v42; // x26
  char *v43; // x0
  unsigned __int8 *v44; // x8
  char *v45; // x20
  unsigned __int8 *v46; // x21
  size_t v47; // x23
  __int64 v48; // x28
  __int64 v49; // x27
  unsigned __int8 *v50; // x22
  unsigned __int8 *v51; // x0
  __int64 v52; // x0
  char *v53; // x0
  char *v54; // x20
  char *v55; // x0
  char *v56; // x21
  char *v57; // x0
  unsigned __int8 *v58; // x23
  char *v59; // x22
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x0
  __int64 v63; // x10
  unsigned __int8 *v64; // x8
  unsigned __int8 *v65; // x11
  unsigned __int8 *v66; // x12
  unsigned __int8 *v67; // x8
  unsigned __int8 **v68; // x25
  __int64 v69; // x24
  char *v70; // x0
  unsigned __int8 *v71; // x8
  char *v72; // x20
  unsigned __int8 *v73; // x21
  size_t v74; // x23
  __int64 v75; // x27
  __int64 v76; // x26
  unsigned __int8 *v77; // x22
  unsigned __int8 *v78; // x0
  unsigned __int8 *v79; // x11
  unsigned __int8 *v80; // x12
  unsigned __int8 *v81; // x8
  unsigned __int8 **v82; // x25
  __int64 v83; // x24
  char *v84; // x0
  unsigned __int8 *v85; // x8
  char *v86; // x20
  unsigned __int8 *v87; // x21
  size_t v88; // x23
  __int64 v89; // x27
  __int64 v90; // x26
  unsigned __int8 *v91; // x22
  unsigned __int8 *v92; // x0
  char *v93; // x0
  __int64 v94; // x20
  signed __int64 v95; // x25
  unsigned __int8 *v96; // x8
  char *v97; // x0
  unsigned __int8 *v98; // x8
  char *v99; // x21
  unsigned __int8 *v100; // x22
  size_t v101; // x24
  __int64 v102; // x28
  __int64 v103; // x27
  unsigned __int8 *v104; // x23
  unsigned __int8 *v105; // x0
  char *v106; // x0
  unsigned __int8 *v107; // x21
  char *v108; // x20
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x0
  __int64 v112; // x10
  unsigned __int8 *v113; // x8
  char *v114; // x13
  unsigned __int8 *v115; // x21
  __int64 v116; // x20
  __int64 v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x0
  unsigned __int8 *v120; // x8
  const char *v121; // x10
  __int64 v122; // x0
  signed __int64 v123; // x25
  unsigned __int8 *v124; // x8
  char *v125; // x0
  unsigned __int8 *v126; // x8
  char *v127; // x21
  unsigned __int8 *v128; // x22
  size_t v129; // x24
  __int64 v130; // x28
  __int64 v131; // x27
  unsigned __int8 *v132; // x23
  unsigned __int8 *v133; // x0
  unsigned __int8 *v134; // x20
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x0
  __int64 v138; // x10
  unsigned __int8 *v139; // x8
  __int128 v140; // q0
  char *v141; // x0
  unsigned __int8 *v142; // x21
  __int64 v143; // x20
  __int64 v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x0
  __int64 v147; // x10
  unsigned __int8 *v148; // x8
  __int64 (__fastcall **v149)(); // x11
  unsigned __int16 v150; // w12
  char v151; // w21
  unsigned __int8 *v152; // x8
  unsigned __int8 *v153; // x9
  unsigned __int8 *v154; // x10
  unsigned __int8 *v155; // x11
  unsigned __int8 *v156; // x8
  __int64 v157; // x25
  char *v158; // x0
  unsigned __int8 *v159; // x8
  char *v160; // x21
  unsigned __int8 *v161; // x22
  size_t v162; // x24
  __int64 v163; // x28
  __int64 v164; // x27
  unsigned __int8 *v165; // x23
  unsigned __int8 *v166; // x0
  char *v167; // x0
  unsigned __int8 *v168; // x21
  __int64 v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x0
  __int64 v172; // x10
  unsigned __int8 *v173; // x8
  __int64 v174; // x0
  char *v175; // x0
  unsigned __int8 *v176; // x22
  __int64 v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x0
  __int64 v180; // x10
  unsigned __int8 *v181; // x8
  char *v182; // x0
  unsigned __int8 *v183; // x21
  __int64 v184; // x8
  __int64 v185; // x0
  char *v186; // x0
  unsigned __int8 *v187; // x21
  __int64 v188; // x8
  __int64 v189; // x0
  char *v190; // x0
  unsigned __int8 *v191; // x21
  __int64 v192; // x8
  _QWORD *v193; // x9
  __int64 v194; // x0
  unsigned __int8 *v195; // x8
  char *v196; // x11
  __int64 v197; // x2
  char *v198; // x0
  unsigned __int8 *v199; // x21
  __int64 v200; // x8
  __int64 v201; // x0
  char *v202; // x9
  char *v203; // x0
  unsigned __int8 *v204; // x21
  __int64 v205; // x8
  __int64 v206; // x0
  char *v207; // x0
  char *v208; // x20
  char *v209; // x0
  unsigned __int8 *v210; // x22
  char *v211; // x21
  __int64 v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x0
  __int64 v215; // x10
  unsigned __int8 *v216; // x8
  char *v217; // x13
  unsigned __int8 *v218; // x23
  unsigned __int8 *v219; // x9
  unsigned __int8 *v220; // x10
  unsigned __int8 *v221; // x21
  __int64 v222; // x8
  _QWORD *v223; // x9
  signed __int64 v224; // x20
  unsigned __int64 v225; // x22
  _QWORD *v226; // x0
  unsigned __int8 *v227; // x22
  __int64 v228; // x0
  __int64 v229; // x0
  char *v230; // x0
  unsigned __int8 *v231; // x21
  __int64 v232; // x8
  __int64 v233; // x0
  unsigned __int8 *v234; // x21
  __int64 v235; // x8
  _QWORD *v236; // x9
  __int64 v237; // x0
  unsigned __int8 *v238; // x8
  int v239; // w8
  __int64 v240; // x0
  unsigned __int8 *v241; // x21
  __int64 v242; // x8
  __int64 v243; // x0
  __int64 v244; // x0
  char *v245; // x0
  unsigned __int8 *v246; // x22
  __int64 v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x0
  __int64 v250; // x10
  unsigned __int8 *v251; // x8
  char *v252; // x0
  unsigned __int8 *v253; // x21
  __int64 v254; // x8
  __int64 v255; // x0
  unsigned __int8 *v256; // x21
  __int64 v257; // x8
  _QWORD *v258; // x9
  __int64 v259; // x0
  __int128 v260; // q0
  char *v261; // x0
  unsigned __int8 *v262; // x21
  char *v263; // x20
  __int64 v264; // x8
  _QWORD *v265; // x9
  __int64 v266; // x0
  __int64 v267; // x10
  unsigned __int8 *v268; // x8
  char *v269; // x13
  char *v270; // x0
  unsigned __int8 *v271; // x22
  char *v272; // x20
  __int64 v273; // x8
  _QWORD *v274; // x9
  __int64 v275; // x0
  __int64 v276; // x10
  unsigned __int8 *v277; // x8
  __int64 v278; // x0
  char *v279; // x0
  unsigned __int8 *v280; // x22
  __int64 v281; // x8
  _QWORD *v282; // x9
  __int64 v283; // x0
  __int64 v284; // x10
  unsigned __int8 *v285; // x8
  __int128 v286; // q0
  char *v287; // x0
  unsigned __int8 *v288; // x21
  __int64 v289; // x8
  __int64 v290; // x0
  __int128 v291; // q0
  char *v292; // x0
  unsigned __int8 *v293; // x22
  char *v294; // x20
  __int64 v295; // x8
  _QWORD *v296; // x9
  __int64 v297; // x0
  __int64 v298; // x10
  unsigned __int8 *v299; // x8
  char *v300; // x0
  char *v301; // x0
  unsigned __int8 *v302; // x22
  __int64 v303; // x8
  __int64 v304; // x0
  char *v305; // x9
  char *v306; // x0
  char *v307; // x0
  unsigned __int8 *v308; // x22
  __int64 v309; // x8
  _QWORD *v310; // x9
  __int64 v311; // x0
  __int64 v312; // x10
  unsigned __int8 *v313; // x8
  __int128 v314; // q0
  char *v315; // x0
  unsigned __int8 *v316; // x21
  __int64 v317; // x8
  __int64 v318; // x0
  __int128 v319; // q0
  unsigned __int8 *v320; // x23
  unsigned __int8 *v321; // x9
  unsigned __int8 *v322; // x10
  unsigned __int8 *v323; // x21
  __int64 v324; // x8
  _QWORD *v325; // x9
  signed __int64 v326; // x20
  unsigned __int64 v327; // x22
  _QWORD *v328; // x0
  unsigned __int8 *v329; // x22
  unsigned __int8 *v330; // x24
  unsigned __int8 *v331; // x9
  unsigned __int8 *v332; // x10
  unsigned __int8 *v333; // x22
  __int64 v334; // x8
  _QWORD *v335; // x9
  signed __int64 v336; // x21
  unsigned __int64 v337; // x23
  _QWORD *v338; // x0
  unsigned __int8 *v339; // x23
  unsigned __int8 *v340; // x24
  unsigned __int8 *v341; // x9
  unsigned __int8 *v342; // x10
  unsigned __int8 *v343; // x22
  __int64 v344; // x8
  _QWORD *v345; // x9
  signed __int64 v346; // x21
  unsigned __int64 v347; // x23
  _QWORD *v348; // x0
  unsigned __int8 *v349; // x20
  unsigned __int8 *v350; // x9
  unsigned __int8 *v351; // x10
  unsigned __int8 *v352; // x22
  __int64 v353; // x8
  _QWORD *v354; // x9
  signed __int64 v355; // x21
  unsigned __int64 v356; // x23
  _QWORD *v357; // x0
  unsigned __int8 *v358; // x20
  char *v359; // x0
  unsigned __int8 *v360; // x22
  char *v361; // x21
  __int64 v362; // x8
  _QWORD *v363; // x9
  __int64 v364; // x0
  unsigned __int8 *v365; // x22
  unsigned __int8 *v366; // x22
  unsigned __int8 *v367; // x21
  __int64 v368; // x8
  _QWORD *v369; // x9
  __int64 v370; // x0
  __int64 v371; // x10
  unsigned __int8 *v372; // x8
  __int64 v373; // x0
  __int64 v374; // x10
  __int64 v375; // x8
  _QWORD *v376; // x9
  __int64 v377; // x20
  __int64 v378; // x0
  __int64 v379; // x10
  unsigned __int8 *v380; // x8
  __int64 v381; // x0
  __int64 v382; // x0
  __int64 v383; // x10
  _QWORD *v384; // x8
  __int64 v385; // x9
  __int64 v386; // x21
  __int64 v387; // x0
  unsigned __int8 *v388; // x21
  __int64 v389; // x8
  _QWORD *v390; // x9
  __int64 v391; // x0
  unsigned __int8 *v392; // x8
  __int64 v393; // x0
  __int64 v394; // x10
  __int64 v395; // x8
  _QWORD *v396; // x9
  __int64 v397; // x21
  __int64 v398; // x0
  __int64 v399; // x10
  unsigned __int8 *v400; // x8
  __int64 (__fastcall **v401)(); // x11
  __int64 v402; // x0
  __int64 v403; // x10
  __int64 v404; // x8
  __int64 v405; // x0
  __int64 v406; // x0
  __int64 v407; // x0
  unsigned __int8 *v408; // x8
  unsigned __int8 *v409; // x9
  __int64 v410; // x22
  unsigned __int8 *v411; // x10
  unsigned __int8 *v412; // x11
  unsigned __int8 *v413; // x9
  __int64 v414; // x26
  char *v415; // x0
  unsigned __int8 *v416; // x8
  char *v417; // x21
  unsigned __int8 *v418; // x22
  size_t v419; // x24
  __int64 v420; // x28
  __int64 v421; // x27
  unsigned __int8 *v422; // x23
  unsigned __int8 *v423; // x0
  unsigned __int8 *v424; // x23
  __int64 v425; // x21
  __int64 v426; // x8
  _QWORD *v427; // x9
  __int64 v428; // x0
  __int64 v429; // x10
  unsigned __int8 *v430; // x8
  unsigned __int8 *v431; // x24
  unsigned __int8 *v432; // x9
  unsigned __int8 *v433; // x10
  unsigned __int8 *v434; // x22
  __int64 v435; // x8
  _QWORD *v436; // x9
  signed __int64 v437; // x21
  unsigned __int64 v438; // x23
  _QWORD *v439; // x0
  __int64 v440; // x0
  __int64 v441; // x10
  __int64 v442; // x8
  __int64 v443; // x0
  unsigned __int8 *v444; // x24
  unsigned __int8 *v445; // x8
  unsigned __int8 *v446; // x10
  unsigned __int8 *v447; // x23
  __int64 v448; // x8
  _QWORD *v449; // x9
  signed __int64 v450; // x21
  unsigned __int64 v451; // x22
  _QWORD *v452; // x0
  unsigned __int8 *v453; // x22
  __int64 v454; // x0
  __int64 v455; // x10
  __int64 v456; // x8
  _QWORD *v457; // x9
  __int64 v458; // x21
  __int64 v459; // x0
  unsigned __int8 *v460; // x8
  unsigned __int8 *v461; // x20
  unsigned __int8 *v462; // x21
  unsigned __int64 v464; // x8
  unsigned __int8 *v465; // x8
  unsigned __int8 *v466; // x8
  unsigned __int8 *v467; // x9
  char *v468; // x20
  unsigned __int8 *v469; // x11
  unsigned __int8 *v470; // x10
  unsigned __int8 *v471; // x22
  unsigned __int8 *v472; // x21
  int v473; // w8
  unsigned __int8 *v474; // x23
  _QWORD *v475; // x8
  __int64 v476; // x9
  __int64 v477; // x0
  char *v478; // x1
  unsigned __int8 *v479; // x8
  char *v480; // x2
  unsigned __int8 *v481; // x21
  _QWORD *v482; // x8
  __int64 v483; // x9
  __int64 v484; // x0
  _BYTE *v485; // x22
  unsigned __int8 *v486; // x23
  unsigned __int8 *v487; // x21
  _QWORD *v488; // x8
  __int64 v489; // x9
  __int64 v490; // x0
  __int64 v491; // x10
  unsigned __int8 *v492; // x0
  __int64 (__fastcall **v493)(); // x9
  __int64 v494; // x24
  unsigned __int8 *v495; // x21
  __int64 v496; // x9
  __int64 v497; // x0
  unsigned __int8 *v498; // x21
  __int64 v499; // x9
  __int64 v500; // x0
  unsigned __int8 **v501; // x0
  unsigned __int8 *v502; // x21
  _QWORD *v503; // x8
  __int64 v504; // x9
  __int64 v505; // x0
  __int64 v506; // [xsp+8h] [xbp-68h]
  __int64 v507; // [xsp+10h] [xbp-60h]
  bool v508; // [xsp+1Ch] [xbp-54h]

  v1 = *a1;
  v2 = a1[1];
  if ( (unsigned __int64)(v2 - *a1) < 2 )
    return nullptr;
  v5 = *v1;
  if ( v5 == 103 )
  {
    if ( v1[1] == 115 )
    {
      v1 += 2;
      *a1 = v1;
      if ( (unsigned __int64)(v2 - v1) < 2 )
        return nullptr;
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    v5 = *v1;
  }
  else
  {
    v7 = 0;
  }
  v8 = v5 - 49;
  v3 = nullptr;
  switch ( v8 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return sub_E33B4((__int64)a1);
    case 27:
      v461 = *a1;
      v462 = a1[1];
      if ( *a1 == v462 || *v461 != 76 )
        return nullptr;
      v464 = v462 - (v461 + 1);
      *a1 = v461 + 1;
      if ( v462 == v461 + 1 )
      {
LABEL_408:
        result = (char *)sub_DB210((__int64)a1);
        if ( !result )
          return result;
        v466 = *a1;
        v467 = a1[1];
        v468 = result;
        if ( v467 == *a1 || (unsigned int)*v466 - 48 > 9 )
        {
          v472 = nullptr;
          v471 = nullptr;
          if ( v466 == v467 )
            goto LABEL_422;
        }
        else
        {
          v469 = v466 + 1;
          do
          {
            v470 = v469;
            *a1 = v469;
            if ( v467 == v469 )
            {
              v471 = v466;
              v472 = v467;
              goto LABEL_422;
            }
            ++v469;
          }
          while ( (unsigned int)*v470 - 48 < 0xA );
          v471 = v466;
          v472 = v470;
          v466 = v470;
          if ( v470 == v467 )
          {
LABEL_422:
            v473 = 0;
            if ( v471 != v472 )
              goto LABEL_423;
            goto LABEL_419;
          }
        }
        if ( *v466 != 69 )
          goto LABEL_422;
        *a1 = v466 + 1;
        v473 = 1;
        if ( v471 != v472 )
        {
LABEL_423:
          if ( v473 )
          {
            v474 = a1[604];
            v475 = v474 + 8;
            v476 = *((_QWORD *)v474 + 1);
            if ( (unsigned __int64)(v476 + 48) >= 0xFF0 )
            {
              v477 = operator new[](0x1000u);
              v476 = 0;
              *(_QWORD *)v477 = v474;
              *(_QWORD *)(v477 + 8) = 0;
              v475 = (_QWORD *)(v477 + 8);
              v474 = (unsigned __int8 *)v477;
              a1[604] = (unsigned __int8 *)v477;
            }
            *v475 = v476 + 48;
            *(_QWORD *)&v474[v476 + 16] = off_161BD8;
            result = (char *)&v474[v476 + 16];
            *((_DWORD *)result + 2) = 16843050;
            *((_QWORD *)result + 2) = v468;
            *((_QWORD *)result + 3) = v471;
            *((_QWORD *)result + 4) = v472;
            return result;
          }
          return nullptr;
        }
LABEL_419:
        if ( !v473 )
          return nullptr;
        return result;
      }
      result = nullptr;
      switch ( v461[1] )
      {
        case 'T':
          return result;
        case '_':
          if ( v464 < 2 || v461[2] != 90 )
            return nullptr;
          *a1 = v461 + 3;
          result = sub_DA368(a1);
          if ( !result )
            return result;
          v465 = *a1;
          if ( *a1 == a1[1] || *v465 != 69 )
            return nullptr;
          *a1 = v465 + 1;
          return result;
        case 'a':
          v478 = "signed char";
          v479 = v461 + 2;
          v480 = "";
          goto LABEL_495;
        case 'b':
          if ( v464 < 3 )
            return nullptr;
          if ( v461[2] == 48 && v461[3] == 69 )
          {
            v481 = a1[604];
            *a1 = v461 + 4;
            v482 = v481 + 8;
            v483 = *((_QWORD *)v481 + 1);
            if ( (unsigned __int64)(v483 + 16) > 0xFEF )
            {
              v484 = operator new[](0x1000u);
              v483 = 0;
              *(_QWORD *)v484 = v481;
              *(_QWORD *)(v484 + 8) = 0;
              v482 = (_QWORD *)(v484 + 8);
              v481 = (unsigned __int8 *)v484;
              a1[604] = (unsigned __int8 *)v484;
            }
            *v482 = v483 + 16;
            *(_QWORD *)&v481[v483 + 16] = off_161A18;
            result = (char *)&v481[v483 + 16];
            *((_DWORD *)result + 2) = 16843050;
            result[12] = 0;
          }
          else
          {
            if ( v461[2] != 49 || v461[3] != 69 )
              return nullptr;
            v502 = a1[604];
            *a1 = v461 + 4;
            v503 = v502 + 8;
            v504 = *((_QWORD *)v502 + 1);
            if ( (unsigned __int64)(v504 + 16) > 0xFEF )
            {
              v505 = operator new[](0x1000u);
              v504 = 0;
              *(_QWORD *)v505 = v502;
              *(_QWORD *)(v505 + 8) = 0;
              v503 = (_QWORD *)(v505 + 8);
              v502 = (unsigned __int8 *)v505;
              a1[604] = (unsigned __int8 *)v505;
            }
            *v503 = v504 + 16;
            *(_QWORD *)&v502[v504 + 16] = off_161A18;
            result = (char *)&v502[v504 + 16];
            *((_DWORD *)result + 2) = 16843050;
            result[12] = 1;
          }
          return result;
        case 'c':
          v478 = "char";
          v479 = v461 + 2;
          v480 = "";
          goto LABEL_495;
        case 'd':
          v485 = v461 + 2;
          *a1 = v461 + 2;
          if ( (unsigned __int64)(v462 - (v461 + 2)) < 0x11 )
            return nullptr;
          if ( !isxdigit(v461[2]) )
            return nullptr;
          if ( !isxdigit(v461[3]) )
            return nullptr;
          if ( !isxdigit(v461[4]) )
            return nullptr;
          if ( !isxdigit(v461[5]) )
            return nullptr;
          if ( !isxdigit(v461[6]) )
            return nullptr;
          if ( !isxdigit(v461[7]) )
            return nullptr;
          if ( !isxdigit(v461[8]) )
            return nullptr;
          if ( !isxdigit(v461[9]) )
            return nullptr;
          if ( !isxdigit(v461[10]) )
            return nullptr;
          if ( !isxdigit(v461[11]) )
            return nullptr;
          if ( !isxdigit(v461[12]) )
            return nullptr;
          if ( !isxdigit(v461[13]) )
            return nullptr;
          if ( !isxdigit(v461[14]) )
            return nullptr;
          if ( !isxdigit(v461[15]) )
            return nullptr;
          if ( !isxdigit(v461[16]) )
            return nullptr;
          if ( !isxdigit(v461[17]) )
            return nullptr;
          v486 = v461 + 18;
          *a1 = v461 + 18;
          if ( v461 + 18 == v462 || *v486 != 69 )
            return nullptr;
          v487 = a1[604];
          *a1 = v461 + 19;
          v488 = v487 + 8;
          v489 = *((_QWORD *)v487 + 1);
          if ( (unsigned __int64)(v489 + 32) >= 0xFF0 )
          {
            v490 = operator new[](0x1000u);
            v489 = 0;
            *(_QWORD *)v490 = v487;
            *(_QWORD *)(v490 + 8) = 0;
            v488 = (_QWORD *)(v490 + 8);
            v487 = (unsigned __int8 *)v490;
            a1[604] = (unsigned __int8 *)v490;
          }
          v491 = v489 + 32;
          v492 = &v487[v489];
          v493 = off_161AF8;
          goto LABEL_466;
        case 'e':
          v485 = v461 + 2;
          *a1 = v461 + 2;
          if ( (unsigned __int64)(v462 - (v461 + 2)) < 0x21 )
            return nullptr;
          v494 = 0;
          v486 = v461 + 34;
          break;
        case 'f':
          v485 = v461 + 2;
          *a1 = v461 + 2;
          if ( (unsigned __int64)(v462 - (v461 + 2)) < 9 )
            return nullptr;
          if ( !isxdigit(v461[2]) )
            return nullptr;
          if ( !isxdigit(v461[3]) )
            return nullptr;
          if ( !isxdigit(v461[4]) )
            return nullptr;
          if ( !isxdigit(v461[5]) )
            return nullptr;
          if ( !isxdigit(v461[6]) )
            return nullptr;
          if ( !isxdigit(v461[7]) )
            return nullptr;
          if ( !isxdigit(v461[8]) )
            return nullptr;
          if ( !isxdigit(v461[9]) )
            return nullptr;
          v486 = v461 + 10;
          *a1 = v461 + 10;
          if ( v461 + 10 == v462 || *v486 != 69 )
            return nullptr;
          v498 = a1[604];
          *a1 = v461 + 11;
          v488 = v498 + 8;
          v499 = *((_QWORD *)v498 + 1);
          if ( (unsigned __int64)(v499 + 32) >= 0xFF0 )
          {
            v500 = operator new[](0x1000u);
            v499 = 0;
            *(_QWORD *)v500 = v498;
            *(_QWORD *)(v500 + 8) = 0;
            v488 = (_QWORD *)(v500 + 8);
            v498 = (unsigned __int8 *)v500;
            a1[604] = (unsigned __int8 *)v500;
          }
          v491 = v499 + 32;
          v492 = &v498[v499];
          v493 = off_161A88;
          goto LABEL_466;
        case 'h':
          v478 = "unsigned char";
          v479 = v461 + 2;
          v480 = "";
          goto LABEL_495;
        case 'i':
          v478 = "";
          *a1 = v461 + 2;
          v501 = a1;
          v480 = "";
          return (char *)sub_E3C7C((__int64)v501, (__int64)v478, (__int64)v480);
        case 'j':
          v479 = v461 + 2;
          v478 = "u";
          goto LABEL_485;
        case 'l':
          v479 = v461 + 2;
          v478 = "l";
LABEL_485:
          v480 = v478 + 1;
          goto LABEL_495;
        case 'm':
          v478 = "ul";
          goto LABEL_493;
        case 'n':
          v478 = "__int128";
          v479 = v461 + 2;
          v480 = "";
          goto LABEL_495;
        case 'o':
          v478 = "unsigned __int128";
          v479 = v461 + 2;
          v480 = "";
          goto LABEL_495;
        case 's':
          v478 = "short";
          v479 = v461 + 2;
          v480 = "";
          goto LABEL_495;
        case 't':
          v478 = "unsigned short";
          v479 = v461 + 2;
          v480 = "";
          goto LABEL_495;
        case 'w':
          v478 = "wchar_t";
          v479 = v461 + 2;
          v480 = "";
          goto LABEL_495;
        case 'x':
          v478 = "ll";
LABEL_493:
          v479 = v461 + 2;
          v480 = v478 + 2;
          goto LABEL_495;
        case 'y':
          v478 = "ull";
          v479 = v461 + 2;
          v480 = "";
LABEL_495:
          v501 = a1;
          *a1 = v479;
          return (char *)sub_E3C7C((__int64)v501, (__int64)v478, (__int64)v480);
        default:
          goto LABEL_408;
      }
      do
      {
        if ( !isxdigit((unsigned __int8)v485[v494]) )
          return nullptr;
        ++v494;
      }
      while ( v494 != 32 );
      *a1 = v486;
      if ( v486 == v462 || *v486 != 69 )
        return nullptr;
      v495 = a1[604];
      *a1 = v461 + 35;
      v488 = v495 + 8;
      v496 = *((_QWORD *)v495 + 1);
      if ( (unsigned __int64)(v496 + 32) >= 0xFF0 )
      {
        v497 = operator new[](0x1000u);
        v496 = 0;
        *(_QWORD *)v497 = v495;
        *(_QWORD *)(v497 + 8) = 0;
        v488 = (_QWORD *)(v497 + 8);
        v495 = (unsigned __int8 *)v497;
        a1[604] = (unsigned __int8 *)v497;
      }
      v491 = v496 + 32;
      v492 = &v495[v496];
      v493 = off_161B68;
LABEL_466:
      *v488 = v491;
      *((_QWORD *)v492 + 2) = v493;
      result = (char *)(v492 + 16);
      *((_DWORD *)result + 2) = 16843050;
      *((_QWORD *)result + 2) = v485;
      *((_QWORD *)result + 3) = v486;
      return result;
    case 35:
      return (char *)sub_DECA4((__int64)a1);
    case 48:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'N':
          v21 = v1 + 2;
          v22 = "&=";
          goto LABEL_226;
        case 'S':
          v22 = "=";
          goto LABEL_296;
        case 'a':
          v21 = v1 + 2;
          v22 = "&&";
          goto LABEL_226;
        case 'd':
          *a1 = v1 + 2;
          v230 = sub_DFE94(a1);
          if ( !v230 )
            return nullptr;
          v231 = a1[604];
          v108 = v230;
          v110 = v231 + 8;
          v232 = *((_QWORD *)v231 + 1);
          if ( (unsigned __int64)(v232 + 48) >= 0xFF0 )
          {
            v233 = operator new[](0x1000u);
            v232 = 0;
            *(_QWORD *)v233 = v231;
            *(_QWORD *)(v233 + 8) = 0;
            v110 = (_QWORD *)(v233 + 8);
            v231 = (unsigned __int8 *)v233;
            a1[604] = (unsigned __int8 *)v233;
          }
          v112 = v232 + 48;
          v113 = &v231[v232];
          v114 = "&";
          goto LABEL_277;
        case 'n':
          v22 = "&";
          goto LABEL_296;
        case 't':
          *a1 = v1 + 2;
          v228 = sub_DB210((__int64)a1);
          if ( !v228 )
            return nullptr;
          goto LABEL_233;
        case 'z':
          *a1 = v1 + 2;
          v228 = (__int64)sub_DFE94(a1);
          if ( !v228 )
            return nullptr;
LABEL_233:
          v234 = a1[604];
          v116 = v228;
          v236 = v234 + 8;
          v235 = *((_QWORD *)v234 + 1);
          if ( (unsigned __int64)(v235 + 64) >= 0xFF0 )
          {
            v237 = operator new[](0x1000u);
            v235 = 0;
            *(_QWORD *)v237 = v234;
            *(_QWORD *)(v237 + 8) = 0;
            v236 = (_QWORD *)(v237 + 8);
            v234 = (unsigned __int8 *)v237;
            a1[604] = (unsigned __int8 *)v237;
          }
          *v236 = v235 + 64;
          v238 = &v234[v235];
          v121 = "alignof (";
          *((_QWORD *)v238 + 2) = off_162578;
          v3 = v238 + 16;
          v196 = "";
          break;
        default:
          return (char *)v3;
      }
      goto LABEL_258;
    case 50:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'c':
          *a1 = v1 + 2;
          v9 = sub_DB210((__int64)a1);
          if ( !v9 )
            return nullptr;
          v10 = v9;
          v11 = sub_DFE94(a1);
          if ( !v11 )
            return nullptr;
          v12 = a1[604];
          v13 = v11;
          v15 = v12 + 8;
          v14 = *((_QWORD *)v12 + 1);
          if ( (unsigned __int64)(v14 + 48) >= 0xFF0 )
          {
            v16 = operator new[](0x1000u);
            v14 = 0;
            *(_QWORD *)v16 = v12;
            *(_QWORD *)(v16 + 8) = 0;
            v15 = (_QWORD *)(v16 + 8);
            v12 = (unsigned __int8 *)v16;
            a1[604] = (unsigned __int8 *)v16;
          }
          v17 = v14 + 48;
          v18 = &v12[v14];
          v19 = "const_cast";
          *v15 = v17;
          *((_QWORD *)v18 + 2) = off_161E78;
          v3 = v18 + 16;
          v20 = "";
          goto LABEL_272;
        case 'l':
          *a1 = v1 + 2;
          v93 = sub_DFE94(a1);
          if ( !v93 )
            return nullptr;
          v94 = (__int64)v93;
          v95 = (a1[3] - a1[2]) >> 3;
          while ( 2 )
          {
            v96 = *a1;
            if ( *a1 == a1[1] || *v96 != 69 )
            {
              v97 = sub_DFE94(a1);
              if ( v97 )
              {
                v98 = a1[3];
                v99 = v97;
                if ( v98 == a1[4] )
                {
                  v100 = a1[2];
                  v101 = v98 - v100;
                  v102 = (v98 - v100) >> 3;
                  v103 = (v98 - v100) >> 2;
                  if ( a1 + 5 == (unsigned __int8 **)v100 )
                  {
                    v105 = (unsigned __int8 *)malloc(2 * (v98 - v100));
                    v104 = v105;
                    if ( v101 )
                      memmove(v105, v100, v101);
                  }
                  else
                  {
                    v104 = (unsigned __int8 *)realloc(a1[2], 2 * (v98 - v100));
                  }
                  v98 = &v104[8 * v102];
                  a1[2] = v104;
                  a1[3] = v98;
                  a1[4] = &v104[8 * v103];
                }
                a1[3] = v98 + 8;
                *(_QWORD *)v98 = v99;
                continue;
              }
              return nullptr;
            }
            break;
          }
          v330 = a1[604];
          v331 = a1[2];
          v332 = a1[3];
          *a1 = v96 + 1;
          v333 = &v331[8 * v95];
          v335 = v330 + 8;
          v334 = *((_QWORD *)v330 + 1);
          v336 = v332 - v333;
          v337 = ((_DWORD)v332 - (_DWORD)v333 + 15) & 0xFFFFFFF0;
          if ( v337 + v334 < 0xFF0 )
            goto LABEL_343;
          if ( v337 < 0xFF1 )
          {
            v393 = operator new[](0x1000u);
            v334 = 0;
            *(_QWORD *)v393 = v330;
            *(_QWORD *)(v393 + 8) = 0;
            v335 = (_QWORD *)(v393 + 8);
            v330 = (unsigned __int8 *)v393;
            a1[604] = (unsigned __int8 *)v393;
LABEL_343:
            v394 = v334 + v337;
            v339 = &v330[v334 + 16];
            *v335 = v394;
            if ( !v336 )
            {
LABEL_345:
              a1[3] = v333;
              v396 = v330 + 8;
              v395 = *((_QWORD *)v330 + 1);
              v397 = v336 >> 3;
              if ( (unsigned __int64)(v395 + 48) >= 0xFF0 )
              {
                v398 = operator new[](0x1000u);
                v395 = 0;
                *(_QWORD *)v398 = v330;
                *(_QWORD *)(v398 + 8) = 0;
                v396 = (_QWORD *)(v398 + 8);
                v330 = (unsigned __int8 *)v398;
                a1[604] = (unsigned __int8 *)v398;
              }
              v399 = v395 + 48;
              v400 = &v330[v395];
              v401 = off_161EE8;
              goto LABEL_354;
            }
          }
          else
          {
            v338 = (_QWORD *)operator new[](v337 + 16);
            v339 = (unsigned __int8 *)(v338 + 2);
            *v338 = *(_QWORD *)v330;
            v338[1] = 0;
            *(_QWORD *)v330 = v338;
            if ( !v336 )
              goto LABEL_345;
          }
          memmove(v339, v333, v336);
          v330 = a1[604];
          v333 = &a1[2][8 * v95];
          goto LABEL_345;
        case 'm':
          v22 = ",";
          goto LABEL_296;
        case 'o':
          *a1 = v1 + 2;
          v106 = sub_DFE94(a1);
          if ( !v106 )
            return nullptr;
          v107 = a1[604];
          v108 = v106;
          v110 = v107 + 8;
          v109 = *((_QWORD *)v107 + 1);
          if ( (unsigned __int64)(v109 + 48) >= 0xFF0 )
          {
            v111 = operator new[](0x1000u);
            v109 = 0;
            *(_QWORD *)v111 = v107;
            *(_QWORD *)(v111 + 8) = 0;
            v110 = (_QWORD *)(v111 + 8);
            v107 = (unsigned __int8 *)v111;
            a1[604] = (unsigned __int8 *)v111;
          }
          v112 = v109 + 48;
          v113 = &v107[v109];
          v114 = "~";
          goto LABEL_277;
        case 'v':
          if ( (unsigned __int64)(v2 - v1) < 2 )
            return nullptr;
          v151 = *((_BYTE *)a1 + 720);
          *a1 = v1 + 2;
          *((_BYTE *)a1 + 720) = 0;
          v94 = sub_DB210((__int64)a1);
          *((_BYTE *)a1 + 720) = v151;
          if ( !v94 )
            return nullptr;
          v152 = *a1;
          v153 = a1[1];
          if ( *a1 == v153 || *v152 != 95 )
          {
            v359 = sub_DFE94(a1);
            if ( !v359 )
              return nullptr;
            v360 = a1[604];
            v361 = v359;
            v363 = v360 + 8;
            v362 = *((_QWORD *)v360 + 1);
            if ( (unsigned __int64)(v362 + 16) >= 0xFF0 )
            {
              v364 = operator new[](0x1000u);
              v362 = 0;
              *(_QWORD *)v364 = v360;
              *(_QWORD *)(v364 + 8) = 0;
              v363 = (_QWORD *)(v364 + 8);
              v360 = (unsigned __int8 *)v364;
              a1[604] = (unsigned __int8 *)v364;
            }
            v365 = &v360[v362];
            *v363 = v362 + 16;
            *((_QWORD *)v365 + 2) = v361;
            v366 = v365 + 16;
            v367 = a1[604];
            v369 = v367 + 8;
            v368 = *((_QWORD *)v367 + 1);
            if ( (unsigned __int64)(v368 + 48) >= 0xFF0 )
            {
              v370 = operator new[](0x1000u);
              v368 = 0;
              *(_QWORD *)v370 = v367;
              *(_QWORD *)(v370 + 8) = 0;
              v369 = (_QWORD *)(v370 + 8);
              v367 = (unsigned __int8 *)v370;
              a1[604] = (unsigned __int8 *)v370;
            }
            v371 = v368 + 48;
            v372 = &v367[v368];
            *v369 = v371;
            *((_QWORD *)v372 + 2) = off_161F58;
            v3 = v372 + 16;
            *((_DWORD *)v3 + 2) = 16843050;
            *((_QWORD *)v3 + 2) = v94;
            *((_QWORD *)v3 + 3) = v366;
            *((_QWORD *)v3 + 4) = 1;
            return (char *)v3;
          }
          v154 = a1[2];
          v155 = a1[3];
          v156 = v152 + 1;
          *a1 = v156;
          v157 = (v155 - v154) >> 3;
          if ( v156 == v153 )
            goto LABEL_160;
          while ( *v156 != 69 )
          {
            do
            {
LABEL_160:
              v158 = sub_DFE94(a1);
              if ( !v158 )
                return nullptr;
              v159 = a1[3];
              v160 = v158;
              if ( v159 == a1[4] )
              {
                v161 = a1[2];
                v162 = v159 - v161;
                v163 = (v159 - v161) >> 3;
                v164 = (v159 - v161) >> 2;
                if ( a1 + 5 == (unsigned __int8 **)v161 )
                {
                  v166 = (unsigned __int8 *)malloc(2 * (v159 - v161));
                  v165 = v166;
                  if ( v162 )
                    memmove(v166, v161, v162);
                }
                else
                {
                  v165 = (unsigned __int8 *)realloc(a1[2], 2 * (v159 - v161));
                }
                v159 = &v165[8 * v163];
                a1[2] = v165;
                a1[3] = v159;
                a1[4] = &v165[8 * v164];
              }
              a1[3] = v159 + 8;
              *(_QWORD *)v159 = v160;
              v156 = *a1;
            }
            while ( *a1 == a1[1] );
          }
          v431 = a1[604];
          v432 = a1[2];
          v433 = a1[3];
          *a1 = v156 + 1;
          v434 = &v432[8 * v157];
          v436 = v431 + 8;
          v435 = *((_QWORD *)v431 + 1);
          v437 = v433 - v434;
          v438 = ((_DWORD)v433 - (_DWORD)v434 + 15) & 0xFFFFFFF0;
          if ( v438 + v435 < 0xFF0 )
            goto LABEL_383;
          if ( v438 < 0xFF1 )
          {
            v440 = operator new[](0x1000u);
            v435 = 0;
            *(_QWORD *)v440 = v431;
            *(_QWORD *)(v440 + 8) = 0;
            v436 = (_QWORD *)(v440 + 8);
            v431 = (unsigned __int8 *)v440;
            a1[604] = (unsigned __int8 *)v440;
LABEL_383:
            v441 = v435 + v438;
            v339 = &v431[v435 + 16];
            *v436 = v441;
            if ( !v437 )
            {
LABEL_385:
              a1[3] = v434;
              v396 = v431 + 8;
              v442 = *((_QWORD *)v431 + 1);
              v397 = v437 >> 3;
              if ( (unsigned __int64)(v442 + 48) >= 0xFF0 )
              {
                v443 = operator new[](0x1000u);
                v442 = 0;
                *(_QWORD *)v443 = v431;
                *(_QWORD *)(v443 + 8) = 0;
                v396 = (_QWORD *)(v443 + 8);
                v431 = (unsigned __int8 *)v443;
                a1[604] = (unsigned __int8 *)v443;
              }
              v399 = v442 + 48;
              v400 = &v431[v442];
              v401 = off_161F58;
              goto LABEL_354;
            }
          }
          else
          {
            v439 = (_QWORD *)operator new[](v438 + 16);
            v339 = (unsigned __int8 *)(v439 + 2);
            *v439 = *(_QWORD *)v431;
            v439[1] = 0;
            *(_QWORD *)v431 = v439;
            if ( !v437 )
              goto LABEL_385;
          }
          memmove(v339, v434, v437);
          v431 = a1[604];
          v434 = &a1[2][8 * v157];
          goto LABEL_385;
        default:
          return (char *)v3;
      }
    case 51:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'V':
          v21 = v1 + 2;
          v22 = "/=";
          goto LABEL_226;
        case 'a':
          *a1 = v1 + 2;
          v270 = sub_DFE94(a1);
          if ( !v270 )
            return nullptr;
          v271 = a1[604];
          v272 = v270;
          v274 = v271 + 8;
          v273 = *((_QWORD *)v271 + 1);
          if ( (unsigned __int64)(v273 + 32) >= 0xFF0 )
          {
            v275 = operator new[](0x1000u);
            v273 = 0;
            *(_QWORD *)v275 = v271;
            *(_QWORD *)(v275 + 8) = 0;
            v274 = (_QWORD *)(v275 + 8);
            v271 = (unsigned __int8 *)v275;
            a1[604] = (unsigned __int8 *)v275;
          }
          v276 = v273 + 32;
          v277 = &v271[v273];
          *v274 = v276;
          *((_QWORD *)v277 + 2) = off_161FC8;
          v3 = v277 + 16;
          *((_DWORD *)v3 + 2) = 16843050;
          *((_QWORD *)v3 + 2) = v272;
          v3[24] = v7;
          v3[25] = 1;
          return (char *)v3;
        case 'c':
          *a1 = v1 + 2;
          v278 = sub_DB210((__int64)a1);
          if ( !v278 )
            return nullptr;
          v10 = v278;
          v279 = sub_DFE94(a1);
          if ( !v279 )
            return nullptr;
          v280 = a1[604];
          v13 = v279;
          v282 = v280 + 8;
          v281 = *((_QWORD *)v280 + 1);
          if ( (unsigned __int64)(v281 + 48) >= 0xFF0 )
          {
            v283 = operator new[](0x1000u);
            v281 = 0;
            *(_QWORD *)v283 = v280;
            *(_QWORD *)(v283 + 8) = 0;
            v282 = (_QWORD *)(v283 + 8);
            v280 = (unsigned __int8 *)v283;
            a1[604] = (unsigned __int8 *)v283;
          }
          v284 = v281 + 48;
          v285 = &v280[v281];
          v19 = "dynamic_cast";
          *v282 = v284;
          *((_QWORD *)v285 + 2) = off_161E78;
          v3 = v285 + 16;
          v20 = "";
          goto LABEL_272;
        case 'e':
          *a1 = v1 + 2;
          v287 = sub_DFE94(a1);
          if ( !v287 )
            return nullptr;
          v288 = a1[604];
          v108 = v287;
          v110 = v288 + 8;
          v289 = *((_QWORD *)v288 + 1);
          if ( (unsigned __int64)(v289 + 48) >= 0xFF0 )
          {
            v290 = operator new[](0x1000u);
            v289 = 0;
            *(_QWORD *)v290 = v288;
            *(_QWORD *)(v290 + 8) = 0;
            v110 = (_QWORD *)(v290 + 8);
            v288 = (unsigned __int8 *)v290;
            a1[604] = (unsigned __int8 *)v290;
          }
          v112 = v289 + 48;
          v113 = &v288[v289];
          v114 = "*";
          goto LABEL_277;
        case 'l':
          *a1 = v1 + 2;
          v292 = sub_DFE94(a1);
          if ( !v292 )
            return nullptr;
          v293 = a1[604];
          v294 = v292;
          v296 = v293 + 8;
          v295 = *((_QWORD *)v293 + 1);
          if ( (unsigned __int64)(v295 + 32) >= 0xFF0 )
          {
            v297 = operator new[](0x1000u);
            v295 = 0;
            *(_QWORD *)v297 = v293;
            *(_QWORD *)(v297 + 8) = 0;
            v296 = (_QWORD *)(v297 + 8);
            v293 = (unsigned __int8 *)v297;
            a1[604] = (unsigned __int8 *)v297;
          }
          v298 = v295 + 32;
          v299 = &v293[v295];
          *v296 = v298;
          *((_QWORD *)v299 + 2) = off_161FC8;
          v3 = v299 + 16;
          *((_DWORD *)v3 + 2) = 16843050;
          *((_QWORD *)v3 + 2) = v294;
          v3[24] = v7;
          v3[25] = 0;
          return (char *)v3;
        case 'n':
          return sub_E33B4((__int64)a1);
        case 's':
          *a1 = v1 + 2;
          v300 = sub_DFE94(a1);
          if ( !v300 )
            return nullptr;
          v208 = v300;
          v301 = sub_DFE94(a1);
          if ( !v301 )
            return nullptr;
          v302 = a1[604];
          v211 = v301;
          v213 = v302 + 8;
          v303 = *((_QWORD *)v302 + 1);
          if ( (unsigned __int64)(v303 + 48) >= 0xFF0 )
          {
            v304 = operator new[](0x1000u);
            v303 = 0;
            *(_QWORD *)v304 = v302;
            *(_QWORD *)(v304 + 8) = 0;
            v213 = (_QWORD *)(v304 + 8);
            v302 = (unsigned __int8 *)v304;
            a1[604] = (unsigned __int8 *)v304;
          }
          v215 = v303 + 48;
          v216 = &v302[v303];
          v217 = ".*";
          goto LABEL_288;
        case 't':
          *a1 = v1 + 2;
          v306 = sub_DFE94(a1);
          if ( !v306 )
            return nullptr;
          v208 = v306;
          v307 = sub_DFE94(a1);
          if ( !v307 )
            return nullptr;
          v308 = a1[604];
          v211 = v307;
          v310 = v308 + 8;
          v309 = *((_QWORD *)v308 + 1);
          if ( (unsigned __int64)(v309 + 48) >= 0xFF0 )
          {
            v311 = operator new[](0x1000u);
            v309 = 0;
            *(_QWORD *)v311 = v308;
            *(_QWORD *)(v311 + 8) = 0;
            v310 = (_QWORD *)(v311 + 8);
            v308 = (unsigned __int8 *)v311;
            a1[604] = (unsigned __int8 *)v311;
          }
          v312 = v309 + 48;
          v313 = &v308[v309];
          v217 = ".";
          *v310 = v312;
          *((_QWORD *)v313 + 2) = off_162268;
          v3 = v313 + 16;
          v305 = "";
          goto LABEL_294;
        case 'v':
          v22 = "/";
          goto LABEL_296;
        default:
          return (char *)v3;
      }
    case 52:
      v23 = v1[1];
      if ( v23 == 79 )
      {
        v21 = v1 + 2;
        v22 = "^=";
        goto LABEL_226;
      }
      if ( v23 == 113 )
      {
        v21 = v1 + 2;
        v22 = "==";
        goto LABEL_226;
      }
      if ( v23 != 111 )
        return nullptr;
      v22 = "^";
      goto LABEL_296;
    case 53:
      v24 = v2 - v1;
      if ( (unsigned __int64)(v2 - v1) >= 2
        && ((v25 = v1[1], v25 == 112) || v24 >= 3 && v25 == 76 && (unsigned int)v1[2] - 48 <= 9) )
      {
        return (char *)sub_E29FC((__int64)a1);
      }
      else
      {
        return sub_E2D14(a1);
      }
    case 54:
      v26 = v1[1];
      if ( v26 == 116 )
      {
        v22 = ">";
LABEL_296:
        v21 = v1 + 2;
        v197 = (__int64)(v22 + 1);
      }
      else
      {
        if ( v26 != 101 )
          return nullptr;
        v21 = v1 + 2;
        v22 = ">=";
LABEL_226:
        v197 = (__int64)(v22 + 2);
      }
LABEL_297:
      *a1 = v21;
      return sub_E3300((__int64)a1, (__int64)v22, v197);
    case 56:
      v27 = v1[1];
      if ( v27 != 108 )
      {
        if ( v27 != 120 )
          return nullptr;
        *a1 = v1 + 2;
        v28 = sub_DFE94(a1);
        if ( !v28 )
          return nullptr;
        v29 = v28;
        v30 = sub_DFE94(a1);
        if ( !v30 )
          return nullptr;
        v31 = a1[604];
        v32 = v30;
        v34 = v31 + 8;
        v33 = *((_QWORD *)v31 + 1);
        if ( (unsigned __int64)(v33 + 32) >= 0xFF0 )
        {
          v35 = operator new[](0x1000u);
          v33 = 0;
          *(_QWORD *)v35 = v31;
          *(_QWORD *)(v35 + 8) = 0;
          v34 = (_QWORD *)(v35 + 8);
          v31 = (unsigned __int8 *)v35;
          a1[604] = (unsigned __int8 *)v35;
        }
        v36 = v33 + 32;
        v37 = &v31[v33];
        *v34 = v36;
        *((_QWORD *)v37 + 2) = off_1622D8;
        v3 = v37 + 16;
        *((_DWORD *)v3 + 2) = 16843050;
        *((_QWORD *)v3 + 2) = v29;
        *((_QWORD *)v3 + 3) = v32;
        return (char *)v3;
      }
      v79 = a1[2];
      v80 = a1[3];
      v81 = v1 + 2;
      v82 = a1 + 5;
      *a1 = v1 + 2;
      v83 = (v80 - v79) >> 3;
      if ( v1 + 2 == v2 )
        goto LABEL_97;
      while ( *v81 != 69 )
      {
        do
        {
LABEL_97:
          v84 = sub_E3A3C(a1);
          if ( !v84 )
            return nullptr;
          v85 = a1[3];
          v86 = v84;
          if ( v85 == a1[4] )
          {
            v87 = a1[2];
            v88 = v85 - v87;
            v89 = (v85 - v87) >> 3;
            v90 = (v85 - v87) >> 2;
            if ( v82 == (unsigned __int8 **)v87 )
            {
              v92 = (unsigned __int8 *)malloc(2 * (v85 - v87));
              v91 = v92;
              if ( v88 )
                memmove(v92, v87, v88);
            }
            else
            {
              v91 = (unsigned __int8 *)realloc(a1[2], 2 * (v85 - v87));
            }
            v85 = &v91[8 * v89];
            a1[2] = v91;
            a1[3] = v85;
            a1[4] = &v91[8 * v90];
          }
          a1[3] = v85 + 8;
          *(_QWORD *)v85 = v86;
          v81 = *a1;
        }
        while ( *a1 == a1[1] );
      }
      v218 = a1[604];
      v219 = a1[2];
      v220 = a1[3];
      *a1 = v81 + 1;
      v221 = &v219[8 * v83];
      v223 = v218 + 8;
      v222 = *((_QWORD *)v218 + 1);
      v224 = v220 - v221;
      v225 = ((_DWORD)v220 - (_DWORD)v221 + 15) & 0xFFFFFFF0;
      if ( v225 + v222 < 0xFF0 )
        goto LABEL_326;
      if ( v225 < 0xFF1 )
      {
        v373 = operator new[](0x1000u);
        v222 = 0;
        *(_QWORD *)v373 = v218;
        *(_QWORD *)(v373 + 8) = 0;
        v223 = (_QWORD *)(v373 + 8);
        v218 = (unsigned __int8 *)v373;
        a1[604] = (unsigned __int8 *)v373;
LABEL_326:
        v374 = v222 + v225;
        v227 = &v218[v222 + 16];
        *v223 = v374;
        if ( !v224 )
        {
LABEL_328:
          a1[3] = v221;
          v376 = v218 + 8;
          v375 = *((_QWORD *)v218 + 1);
          v377 = v224 >> 3;
          if ( (unsigned __int64)(v375 + 48) >= 0xFF0 )
          {
            v378 = operator new[](0x1000u);
            v375 = 0;
            *(_QWORD *)v378 = v218;
            *(_QWORD *)(v378 + 8) = 0;
            v376 = (_QWORD *)(v378 + 8);
            v218 = (unsigned __int8 *)v378;
            a1[604] = (unsigned __int8 *)v378;
          }
          v379 = v375 + 48;
          v380 = &v218[v375];
          *v376 = v379;
          *((_QWORD *)v380 + 2) = off_162428;
          v3 = v380 + 16;
          *((_DWORD *)v3 + 2) = 16843050;
          *((_QWORD *)v3 + 2) = 0;
          *((_QWORD *)v3 + 3) = v227;
          *((_QWORD *)v3 + 4) = v377;
          return (char *)v3;
        }
      }
      else
      {
        v226 = (_QWORD *)operator new[](v225 + 16);
        v227 = (unsigned __int8 *)(v226 + 2);
        *v226 = *(_QWORD *)v218;
        v226[1] = 0;
        *(_QWORD *)v218 = v226;
        if ( !v224 )
          goto LABEL_328;
      }
      memmove(v227, v221, v224);
      v218 = a1[604];
      v221 = &a1[2][8 * v83];
      goto LABEL_328;
    case 59:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'S':
          v22 = "<<=";
          goto LABEL_199;
        case 'e':
          v21 = v1 + 2;
          v22 = "<=";
          goto LABEL_226;
        case 's':
          v21 = v1 + 2;
          v22 = "<<";
          goto LABEL_226;
        case 't':
          v22 = "<";
          goto LABEL_296;
        default:
          return (char *)v3;
      }
    case 60:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'I':
          v21 = v1 + 2;
          v22 = "-=";
          goto LABEL_226;
        case 'L':
          v21 = v1 + 2;
          v22 = "*=";
          goto LABEL_226;
        case 'i':
          v22 = &byte_121EC0;
          goto LABEL_296;
        case 'l':
          v22 = "*";
          goto LABEL_296;
        case 'm':
          *a1 = v1 + 2;
          if ( v1 + 2 != v2 && v1[2] == 95 )
          {
            *a1 = v1 + 3;
            v167 = sub_DFE94(a1);
            if ( !v167 )
              return nullptr;
            v168 = a1[604];
            v108 = v167;
            v170 = v168 + 8;
            v169 = *((_QWORD *)v168 + 1);
            if ( (unsigned __int64)(v169 + 48) >= 0xFF0 )
            {
              v171 = operator new[](0x1000u);
              v169 = 0;
              *(_QWORD *)v171 = v168;
              *(_QWORD *)(v171 + 8) = 0;
              v170 = (_QWORD *)(v171 + 8);
              v168 = (unsigned __int8 *)v171;
              a1[604] = (unsigned __int8 *)v171;
            }
            v172 = v169 + 48;
            v173 = &v168[v169];
            v114 = &byte_121EBF;
            goto LABEL_206;
          }
          v261 = sub_DFE94(a1);
          if ( !v261 )
            return nullptr;
          v262 = a1[604];
          v263 = v261;
          v265 = v262 + 8;
          v264 = *((_QWORD *)v262 + 1);
          if ( (unsigned __int64)(v264 + 48) >= 0xFF0 )
          {
            v266 = operator new[](0x1000u);
            v264 = 0;
            *(_QWORD *)v266 = v262;
            *(_QWORD *)(v266 + 8) = 0;
            v265 = (_QWORD *)(v266 + 8);
            v262 = (unsigned __int8 *)v266;
            a1[604] = (unsigned __int8 *)v266;
          }
          v267 = v264 + 48;
          v268 = &v262[v264];
          v269 = &byte_121EBF;
          break;
        default:
          return (char *)v3;
      }
      goto LABEL_302;
    case 61:
      v38 = v1[1];
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'a':
        case 'w':
          if ( (unsigned __int64)(v2 - v1) < 2 || v38 != 119 && v38 != 97 )
            return nullptr;
          v39 = (unsigned __int64)(v2 - v1) > 1 && v38 == 97;
          v40 = v1 + 2;
          v41 = a1 + 5;
          v42 = (a1[3] - a1[2]) >> 3;
          *a1 = v1 + 2;
          if ( v1 + 2 != v2 )
            goto LABEL_49;
          break;
        case 'e':
          v21 = v1 + 2;
          v22 = "!=";
          goto LABEL_226;
        case 'g':
          *a1 = v1 + 2;
          v182 = sub_DFE94(a1);
          if ( !v182 )
            return nullptr;
          v183 = a1[604];
          v108 = v182;
          v110 = v183 + 8;
          v184 = *((_QWORD *)v183 + 1);
          if ( (unsigned __int64)(v184 + 48) >= 0xFF0 )
          {
            v185 = operator new[](0x1000u);
            v184 = 0;
            *(_QWORD *)v185 = v183;
            *(_QWORD *)(v185 + 8) = 0;
            v110 = (_QWORD *)(v185 + 8);
            v183 = (unsigned __int8 *)v185;
            a1[604] = (unsigned __int8 *)v185;
          }
          v112 = v184 + 48;
          v113 = &v183[v184];
          v114 = &byte_121EC0;
          goto LABEL_277;
        case 't':
          *a1 = v1 + 2;
          v186 = sub_DFE94(a1);
          if ( !v186 )
            return nullptr;
          v187 = a1[604];
          v108 = v186;
          v110 = v187 + 8;
          v188 = *((_QWORD *)v187 + 1);
          if ( (unsigned __int64)(v188 + 48) >= 0xFF0 )
          {
            v189 = operator new[](0x1000u);
            v188 = 0;
            *(_QWORD *)v189 = v187;
            *(_QWORD *)(v189 + 8) = 0;
            v110 = (_QWORD *)(v189 + 8);
            v187 = (unsigned __int8 *)v189;
            a1[604] = (unsigned __int8 *)v189;
          }
          v112 = v188 + 48;
          v113 = &v187[v188];
          v114 = "!";
          goto LABEL_277;
        case 'x':
          *a1 = v1 + 2;
          v190 = sub_DFE94(a1);
          if ( !v190 )
            return nullptr;
          v191 = a1[604];
          v116 = (__int64)v190;
          v193 = v191 + 8;
          v192 = *((_QWORD *)v191 + 1);
          if ( (unsigned __int64)(v192 + 64) >= 0xFF0 )
          {
            v194 = operator new[](0x1000u);
            v192 = 0;
            *(_QWORD *)v194 = v191;
            *(_QWORD *)(v194 + 8) = 0;
            v193 = (_QWORD *)(v194 + 8);
            v191 = (unsigned __int8 *)v194;
            a1[604] = (unsigned __int8 *)v194;
          }
          *v193 = v192 + 64;
          v195 = &v191[v192];
          v121 = "noexcept (";
          *((_QWORD *)v195 + 2) = off_162578;
          v3 = v195 + 16;
          v196 = "";
          goto LABEL_258;
        default:
          return (char *)v3;
      }
      do
      {
        do
        {
          v43 = sub_DFE94(a1);
          if ( !v43 )
            return nullptr;
          v44 = a1[3];
          v45 = v43;
          if ( v44 == a1[4] )
          {
            v46 = a1[2];
            v47 = v44 - v46;
            v48 = (v44 - v46) >> 3;
            v49 = (v44 - v46) >> 2;
            if ( v41 == (unsigned __int8 **)v46 )
            {
              v51 = (unsigned __int8 *)malloc(2 * (v44 - v46));
              v50 = v51;
              if ( v47 )
                memmove(v51, v46, v47);
            }
            else
            {
              v50 = (unsigned __int8 *)realloc(a1[2], 2 * (v44 - v46));
            }
            v44 = &v50[8 * v48];
            a1[2] = v50;
            a1[3] = v44;
            a1[4] = &v50[8 * v49];
          }
          a1[3] = v44 + 8;
          *(_QWORD *)v44 = v45;
          v40 = *a1;
        }
        while ( *a1 == a1[1] );
LABEL_49:
        ;
      }
      while ( *v40 != 95 );
      v349 = a1[604];
      v350 = a1[2];
      v351 = a1[3];
      *a1 = v40 + 1;
      v352 = &v350[8 * v42];
      v354 = v349 + 8;
      v353 = *((_QWORD *)v349 + 1);
      v355 = v351 - v352;
      v356 = ((_DWORD)v351 - (_DWORD)v352 + 15) & 0xFFFFFFF0;
      if ( v356 + v353 < 0xFF0 )
        goto LABEL_356;
      if ( v356 >= 0xFF1 )
      {
        v357 = (_QWORD *)operator new[](v356 + 16);
        *v357 = *(_QWORD *)v349;
        v357[1] = 0;
        *(_QWORD *)v349 = v357;
        v358 = (unsigned __int8 *)(v357 + 2);
        if ( !v355 )
          goto LABEL_358;
        goto LABEL_357;
      }
      v406 = operator new[](0x1000u);
      v353 = 0;
      *(_QWORD *)v406 = v349;
      *(_QWORD *)(v406 + 8) = 0;
      v354 = (_QWORD *)(v406 + 8);
      v349 = (unsigned __int8 *)v406;
      a1[604] = (unsigned __int8 *)v406;
LABEL_356:
      v358 = &v349[v353 + 16];
      *v354 = v353 + v356;
      if ( v355 )
      {
LABEL_357:
        memmove(v358, v352, v355);
        v352 = &a1[2][8 * v42];
      }
LABEL_358:
      a1[3] = v352;
      v407 = sub_DB210((__int64)a1);
      if ( !v407 )
        return nullptr;
      v409 = *a1;
      v408 = a1[1];
      v410 = v355 >> 3;
      if ( (unsigned __int64)(v408 - *a1) < 2 || *v409 != 112 || v409[1] != 105 )
      {
        if ( v409 == v408 || *v409 != 69 )
          return nullptr;
        v424 = a1[604];
        *a1 = v409 + 1;
        v425 = v407;
        v427 = v424 + 8;
        v426 = *((_QWORD *)v424 + 1);
        if ( (unsigned __int64)(v426 + 64) >= 0xFF0 )
        {
          v428 = operator new[](0x1000u);
          v426 = 0;
          *(_QWORD *)v428 = v424;
          *(_QWORD *)(v428 + 8) = 0;
          v427 = (_QWORD *)(v428 + 8);
          v424 = (unsigned __int8 *)v428;
          a1[604] = (unsigned __int8 *)v428;
        }
        v429 = v426 + 64;
        v430 = &v424[v426];
        *v427 = v429;
        *((_QWORD *)v430 + 2) = off_162508;
        v3 = v430 + 16;
        *((_DWORD *)v3 + 2) = 16843050;
        *((_QWORD *)v3 + 2) = v358;
        *((_QWORD *)v3 + 3) = v410;
        *((_QWORD *)v3 + 5) = 0;
        *((_QWORD *)v3 + 6) = 0;
        *((_QWORD *)v3 + 4) = v425;
        v3[56] = 0;
        v3[57] = v39;
        return (char *)v3;
      }
      v506 = v355 >> 3;
      v507 = v407;
      v508 = v39;
      v411 = a1[2];
      v412 = a1[3];
      v413 = v409 + 2;
      *a1 = v413;
      v414 = (v412 - v411) >> 3;
      if ( v413 == v408 )
        goto LABEL_366;
LABEL_363:
      if ( *v413 != 69 )
      {
LABEL_366:
        while ( 1 )
        {
          v415 = sub_DFE94(a1);
          if ( !v415 )
            return nullptr;
          v416 = a1[3];
          v417 = v415;
          if ( v416 == a1[4] )
          {
            v418 = a1[2];
            v419 = v416 - v418;
            v420 = (v416 - v418) >> 3;
            v421 = (v416 - v418) >> 2;
            if ( v41 == (unsigned __int8 **)v418 )
            {
              v423 = (unsigned __int8 *)malloc(2 * (v416 - v418));
              v422 = v423;
              if ( v419 )
                memmove(v423, v418, v419);
            }
            else
            {
              v422 = (unsigned __int8 *)realloc(a1[2], 2 * (v416 - v418));
            }
            v416 = &v422[8 * v420];
            a1[2] = v422;
            a1[3] = v416;
            a1[4] = &v422[8 * v421];
          }
          a1[3] = v416 + 8;
          *(_QWORD *)v416 = v417;
          v413 = *a1;
          if ( *a1 != a1[1] )
            goto LABEL_363;
        }
      }
      v444 = a1[604];
      v445 = a1[2];
      v446 = a1[3];
      *a1 = v413 + 1;
      v447 = &v445[8 * v414];
      v449 = v444 + 8;
      v448 = *((_QWORD *)v444 + 1);
      v450 = v446 - v447;
      v451 = ((_DWORD)v446 - (_DWORD)v447 + 15) & 0xFFFFFFF0;
      if ( v451 + v448 < 0xFF0 )
        goto LABEL_393;
      if ( v451 < 0xFF1 )
      {
        v454 = operator new[](0x1000u);
        v448 = 0;
        *(_QWORD *)v454 = v444;
        *(_QWORD *)(v454 + 8) = 0;
        v449 = (_QWORD *)(v454 + 8);
        v444 = (unsigned __int8 *)v454;
        a1[604] = (unsigned __int8 *)v454;
LABEL_393:
        v455 = v448 + v451;
        v453 = &v444[v448 + 16];
        *v449 = v455;
        if ( !v450 )
        {
LABEL_395:
          a1[3] = v447;
          v457 = v444 + 8;
          v456 = *((_QWORD *)v444 + 1);
          v458 = v450 >> 3;
          if ( (unsigned __int64)(v456 + 64) >= 0xFF0 )
          {
            v459 = operator new[](0x1000u);
            v456 = 0;
            *(_QWORD *)v459 = v444;
            *(_QWORD *)(v459 + 8) = 0;
            v457 = (_QWORD *)(v459 + 8);
            v444 = (unsigned __int8 *)v459;
            a1[604] = (unsigned __int8 *)v459;
          }
          *v457 = v456 + 64;
          v460 = &v444[v456];
          *((_QWORD *)v460 + 2) = off_162508;
          v3 = v460 + 16;
          *((_QWORD *)v3 + 2) = v358;
          *((_QWORD *)v3 + 3) = v506;
          *((_DWORD *)v3 + 2) = 16843050;
          *((_QWORD *)v3 + 4) = v507;
          *((_QWORD *)v3 + 5) = v453;
          *((_QWORD *)v3 + 6) = v458;
          v3[56] = 0;
          v3[57] = v508;
          return (char *)v3;
        }
      }
      else
      {
        v452 = (_QWORD *)operator new[](v451 + 16);
        v453 = (unsigned __int8 *)(v452 + 2);
        *v452 = *(_QWORD *)v444;
        v452[1] = 0;
        *(_QWORD *)v444 = v452;
        if ( !v450 )
          goto LABEL_395;
      }
      memmove(v453, v447, v450);
      v444 = a1[604];
      v447 = &a1[2][8 * v414];
      goto LABEL_395;
    case 62:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'R':
          v21 = v1 + 2;
          v22 = "|=";
          goto LABEL_226;
        case 'n':
          return sub_E33B4((__int64)a1);
        case 'o':
          v21 = v1 + 2;
          v22 = "||";
          goto LABEL_226;
        case 'r':
          v22 = "|";
          goto LABEL_296;
        default:
          return (char *)v3;
      }
    case 63:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'L':
          v21 = v1 + 2;
          v22 = "+=";
          goto LABEL_226;
        case 'l':
          v22 = "+";
          goto LABEL_296;
        case 'm':
          v22 = "->*";
          goto LABEL_199;
        case 'p':
          *a1 = v1 + 2;
          if ( v1 + 2 != v2 && v1[2] == 95 )
          {
            *a1 = v1 + 3;
            v198 = sub_DFE94(a1);
            if ( !v198 )
              return nullptr;
            v199 = a1[604];
            v108 = v198;
            v170 = v199 + 8;
            v200 = *((_QWORD *)v199 + 1);
            if ( (unsigned __int64)(v200 + 48) >= 0xFF0 )
            {
              v201 = operator new[](0x1000u);
              v200 = 0;
              *(_QWORD *)v201 = v199;
              *(_QWORD *)(v201 + 8) = 0;
              v170 = (_QWORD *)(v201 + 8);
              v199 = (unsigned __int8 *)v201;
              a1[604] = (unsigned __int8 *)v201;
            }
            v172 = v200 + 48;
            v173 = &v199[v200];
            v114 = "++";
LABEL_206:
            *v170 = v172;
            *((_QWORD *)v173 + 2) = off_161E08;
            v3 = v173 + 16;
            v202 = v114 + 2;
LABEL_278:
            *(_QWORD *)&v291 = v114;
            *((_QWORD *)&v291 + 1) = v202;
            *((_DWORD *)v3 + 2) = 16843050;
            *((_OWORD *)v3 + 1) = v291;
            *((_QWORD *)v3 + 4) = v108;
            return (char *)v3;
          }
          v315 = sub_DFE94(a1);
          if ( !v315 )
            return nullptr;
          v316 = a1[604];
          v263 = v315;
          v265 = v316 + 8;
          v317 = *((_QWORD *)v316 + 1);
          if ( (unsigned __int64)(v317 + 48) >= 0xFF0 )
          {
            v318 = operator new[](0x1000u);
            v317 = 0;
            *(_QWORD *)v318 = v316;
            *(_QWORD *)(v318 + 8) = 0;
            v265 = (_QWORD *)(v318 + 8);
            v316 = (unsigned __int8 *)v318;
            a1[604] = (unsigned __int8 *)v318;
          }
          v267 = v317 + 48;
          v268 = &v316[v317];
          v269 = "++";
          break;
        case 's':
          *a1 = v1 + 2;
          v203 = sub_DFE94(a1);
          if ( !v203 )
            return nullptr;
          v204 = a1[604];
          v108 = v203;
          v110 = v204 + 8;
          v205 = *((_QWORD *)v204 + 1);
          if ( (unsigned __int64)(v205 + 48) >= 0xFF0 )
          {
            v206 = operator new[](0x1000u);
            v205 = 0;
            *(_QWORD *)v206 = v204;
            *(_QWORD *)(v206 + 8) = 0;
            v110 = (_QWORD *)(v206 + 8);
            v204 = (unsigned __int8 *)v206;
            a1[604] = (unsigned __int8 *)v206;
          }
          v112 = v205 + 48;
          v113 = &v204[v205];
          v114 = "+";
LABEL_277:
          *v110 = v112;
          *((_QWORD *)v113 + 2) = off_161E08;
          v3 = v113 + 16;
          v202 = v114 + 1;
          goto LABEL_278;
        case 't':
          *a1 = v1 + 2;
          v207 = sub_DFE94(a1);
          if ( !v207 )
            return nullptr;
          v208 = v207;
          v209 = sub_DFE94(a1);
          if ( !v209 )
            return nullptr;
          v210 = a1[604];
          v211 = v209;
          v213 = v210 + 8;
          v212 = *((_QWORD *)v210 + 1);
          if ( (unsigned __int64)(v212 + 48) >= 0xFF0 )
          {
            v214 = operator new[](0x1000u);
            v212 = 0;
            *(_QWORD *)v214 = v210;
            *(_QWORD *)(v214 + 8) = 0;
            v213 = (_QWORD *)(v214 + 8);
            v210 = (unsigned __int8 *)v214;
            a1[604] = (unsigned __int8 *)v214;
          }
          v215 = v212 + 48;
          v216 = &v210[v212];
          v217 = "->";
LABEL_288:
          *v213 = v215;
          *((_QWORD *)v216 + 2) = off_162268;
          v3 = v216 + 16;
          v305 = v217 + 2;
LABEL_294:
          *(_QWORD *)&v314 = v217;
          *((_QWORD *)&v314 + 1) = v305;
          *((_DWORD *)v3 + 2) = 16843050;
          *((_QWORD *)v3 + 2) = v208;
          *(_OWORD *)(v3 + 24) = v314;
          *((_QWORD *)v3 + 5) = v211;
          return (char *)v3;
        default:
          return (char *)v3;
      }
LABEL_302:
      *v265 = v267;
      *(_QWORD *)&v319 = v269;
      *((_QWORD *)v268 + 2) = off_162498;
      v3 = v268 + 16;
      *((_QWORD *)&v319 + 1) = v269 + 2;
      *((_DWORD *)v3 + 2) = 16843050;
      *((_QWORD *)v3 + 2) = v263;
      *(_OWORD *)(v3 + 24) = v319;
      return (char *)v3;
    case 64:
      if ( v1[1] != 117 )
        return nullptr;
      *a1 = v1 + 2;
      v53 = sub_DFE94(a1);
      if ( !v53 )
        return nullptr;
      v54 = v53;
      v55 = sub_DFE94(a1);
      if ( !v55 )
        return nullptr;
      v56 = v55;
      v57 = sub_DFE94(a1);
      if ( !v57 )
        return nullptr;
      v58 = a1[604];
      v59 = v57;
      v61 = v58 + 8;
      v60 = *((_QWORD *)v58 + 1);
      if ( (unsigned __int64)(v60 + 48) >= 0xFF0 )
      {
        v62 = operator new[](0x1000u);
        v60 = 0;
        *(_QWORD *)v62 = v58;
        *(_QWORD *)(v62 + 8) = 0;
        v61 = (_QWORD *)(v62 + 8);
        v58 = (unsigned __int8 *)v62;
        a1[604] = (unsigned __int8 *)v62;
      }
      v63 = v60 + 48;
      v64 = &v58[v60];
      *v61 = v63;
      *((_QWORD *)v64 + 2) = off_1625E8;
      v3 = v64 + 16;
      *((_DWORD *)v3 + 2) = 16843050;
      *((_QWORD *)v3 + 2) = v54;
      *((_QWORD *)v3 + 3) = v56;
      *((_QWORD *)v3 + 4) = v59;
      return (char *)v3;
    case 65:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'M':
          v21 = v1 + 2;
          v22 = "%=";
          goto LABEL_226;
        case 'S':
          v22 = ">>=";
LABEL_199:
          v21 = v1 + 2;
          v197 = (__int64)(v22 + 3);
          goto LABEL_297;
        case 'c':
          *a1 = v1 + 2;
          v174 = sub_DB210((__int64)a1);
          if ( !v174 )
            return nullptr;
          v10 = v174;
          v175 = sub_DFE94(a1);
          if ( !v175 )
            return nullptr;
          v176 = a1[604];
          v13 = v175;
          v178 = v176 + 8;
          v177 = *((_QWORD *)v176 + 1);
          if ( (unsigned __int64)(v177 + 48) >= 0xFF0 )
          {
            v179 = operator new[](0x1000u);
            v177 = 0;
            *(_QWORD *)v179 = v176;
            *(_QWORD *)(v179 + 8) = 0;
            v178 = (_QWORD *)(v179 + 8);
            v176 = (unsigned __int8 *)v179;
            a1[604] = (unsigned __int8 *)v179;
          }
          v180 = v177 + 48;
          v181 = &v176[v177];
          v19 = "reinterpret_cast";
          *v178 = v180;
          *((_QWORD *)v181 + 2) = off_161E78;
          v3 = v181 + 16;
          v20 = "";
          break;
        case 'm':
          v22 = "%";
          goto LABEL_296;
        case 's':
          v21 = v1 + 2;
          v22 = ">>";
          goto LABEL_226;
        default:
          return (char *)v3;
      }
LABEL_272:
      *(_QWORD *)&v286 = v19;
      *((_QWORD *)&v286 + 1) = v20;
      *((_DWORD *)v3 + 2) = 16843050;
      *((_OWORD *)v3 + 1) = v286;
      *((_QWORD *)v3 + 4) = v10;
      *((_QWORD *)v3 + 5) = v13;
      return (char *)v3;
    case 66:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'P':
          v65 = a1[2];
          v66 = a1[3];
          v67 = v1 + 2;
          v68 = a1 + 5;
          *a1 = v1 + 2;
          v69 = (v66 - v65) >> 3;
          if ( v1 + 2 != v2 )
            goto LABEL_81;
          break;
        case 'Z':
          *a1 = v1 + 2;
          if ( v2 == v1 + 2 )
            return nullptr;
          v239 = v1[2];
          if ( v239 == 102 )
          {
            v381 = sub_E29FC((__int64)a1);
            if ( !v381 )
              return nullptr;
            v116 = v381;
            goto LABEL_339;
          }
          if ( v239 != 84 )
            return nullptr;
          v240 = sub_DECA4((__int64)a1);
          if ( !v240 )
            return nullptr;
          v241 = a1[604];
          v143 = v240;
          v145 = v241 + 8;
          v242 = *((_QWORD *)v241 + 1);
          if ( (unsigned __int64)(v242 + 32) >= 0xFF0 )
          {
            v243 = operator new[](0x1000u);
            v242 = 0;
            *(_QWORD *)v243 = v241;
            *(_QWORD *)(v243 + 8) = 0;
            v145 = (_QWORD *)(v243 + 8);
            v241 = (unsigned __int8 *)v243;
            a1[604] = (unsigned __int8 *)v243;
          }
          v147 = v242 + 32;
          v148 = &v241[v242];
          v149 = off_162658;
          goto LABEL_151;
        case 'c':
          *a1 = v1 + 2;
          v244 = sub_DB210((__int64)a1);
          if ( !v244 )
            return nullptr;
          v10 = v244;
          v245 = sub_DFE94(a1);
          if ( !v245 )
            return nullptr;
          v246 = a1[604];
          v13 = v245;
          v248 = v246 + 8;
          v247 = *((_QWORD *)v246 + 1);
          if ( (unsigned __int64)(v247 + 48) >= 0xFF0 )
          {
            v249 = operator new[](0x1000u);
            v247 = 0;
            *(_QWORD *)v249 = v246;
            *(_QWORD *)(v249 + 8) = 0;
            v248 = (_QWORD *)(v249 + 8);
            v246 = (unsigned __int8 *)v249;
            a1[604] = (unsigned __int8 *)v249;
          }
          v250 = v247 + 48;
          v251 = &v246[v247];
          v19 = "static_cast";
          *v248 = v250;
          *((_QWORD *)v251 + 2) = off_161E78;
          v3 = v251 + 16;
          v20 = "";
          goto LABEL_272;
        case 'p':
          *a1 = v1 + 2;
          v252 = sub_DFE94(a1);
          if ( !v252 )
            return nullptr;
          v253 = a1[604];
          v143 = (__int64)v252;
          v145 = v253 + 8;
          v254 = *((_QWORD *)v253 + 1);
          if ( (unsigned __int64)(v254 + 32) >= 0xFF0 )
          {
            v255 = operator new[](0x1000u);
            v254 = 0;
            *(_QWORD *)v255 = v253;
            *(_QWORD *)(v255 + 8) = 0;
            v145 = (_QWORD *)(v255 + 8);
            v253 = (unsigned __int8 *)v255;
            a1[604] = (unsigned __int8 *)v255;
          }
          v150 = 285;
          v147 = v254 + 32;
          v148 = &v253[v254];
          v149 = off_161D28;
          goto LABEL_252;
        case 'r':
          return sub_E33B4((__int64)a1);
        case 't':
          *a1 = v1 + 2;
          v229 = sub_DB210((__int64)a1);
          if ( !v229 )
            return nullptr;
          goto LABEL_254;
        case 'z':
          *a1 = v1 + 2;
          v229 = (__int64)sub_DFE94(a1);
          if ( !v229 )
            return nullptr;
LABEL_254:
          v256 = a1[604];
          v116 = v229;
          v258 = v256 + 8;
          v257 = *((_QWORD *)v256 + 1);
          if ( (unsigned __int64)(v257 + 64) >= 0xFF0 )
          {
            v259 = operator new[](0x1000u);
            v257 = 0;
            *(_QWORD *)v259 = v256;
            *(_QWORD *)(v259 + 8) = 0;
            v258 = (_QWORD *)(v259 + 8);
            v256 = (unsigned __int8 *)v259;
            a1[604] = (unsigned __int8 *)v259;
          }
          *v258 = v257 + 64;
          v120 = &v256[v257];
          v121 = "sizeof (";
          goto LABEL_257;
        default:
          return (char *)v3;
      }
      do
      {
        do
        {
          v70 = sub_DDA28((__int64)a1);
          if ( !v70 )
            return nullptr;
          v71 = a1[3];
          v72 = v70;
          if ( v71 == a1[4] )
          {
            v73 = a1[2];
            v74 = v71 - v73;
            v75 = (v71 - v73) >> 3;
            v76 = (v71 - v73) >> 2;
            if ( v68 == (unsigned __int8 **)v73 )
            {
              v78 = (unsigned __int8 *)malloc(2 * (v71 - v73));
              v77 = v78;
              if ( v74 )
                memmove(v78, v73, v74);
            }
            else
            {
              v77 = (unsigned __int8 *)realloc(a1[2], 2 * (v71 - v73));
            }
            v71 = &v77[8 * v75];
            a1[2] = v77;
            a1[3] = v71;
            a1[4] = &v77[8 * v76];
          }
          a1[3] = v71 + 8;
          *(_QWORD *)v71 = v72;
          v67 = *a1;
        }
        while ( *a1 == a1[1] );
LABEL_81:
        ;
      }
      while ( *v67 != 69 );
      v320 = a1[604];
      v321 = a1[2];
      v322 = a1[3];
      *a1 = v67 + 1;
      v323 = &v321[8 * v69];
      v325 = v320 + 8;
      v324 = *((_QWORD *)v320 + 1);
      v326 = v322 - v323;
      v327 = ((_DWORD)v322 - (_DWORD)v323 + 15) & 0xFFFFFFF0;
      if ( v327 + v324 < 0xFF0 )
        goto LABEL_334;
      if ( v327 < 0xFF1 )
      {
        v382 = operator new[](0x1000u);
        v324 = 0;
        *(_QWORD *)v382 = v320;
        *(_QWORD *)(v382 + 8) = 0;
        v325 = (_QWORD *)(v382 + 8);
        v320 = (unsigned __int8 *)v382;
        a1[604] = (unsigned __int8 *)v382;
LABEL_334:
        v383 = v324 + v327;
        v329 = &v320[v324 + 16];
        *v325 = v383;
        if ( !v326 )
        {
LABEL_336:
          a1[3] = v323;
          v384 = v320 + 8;
          v385 = *((_QWORD *)v320 + 1);
          v386 = v326 >> 3;
          if ( (unsigned __int64)(v385 + 32) >= 0xFF0 )
          {
            v387 = operator new[](0x1000u);
            v385 = 0;
            *(_QWORD *)v387 = v320;
            *(_QWORD *)(v387 + 8) = 0;
            v384 = (_QWORD *)(v387 + 8);
            v320 = (unsigned __int8 *)v387;
            a1[604] = (unsigned __int8 *)v387;
          }
          *v384 = v385 + 32;
          *(_QWORD *)&v320[v385 + 16] = off_1626C8;
          v116 = (__int64)&v320[v385 + 16];
          *(_DWORD *)(v116 + 8) = 16843008;
          *(_QWORD *)(v116 + 16) = v329;
          *(_QWORD *)(v116 + 24) = v386;
LABEL_339:
          v388 = a1[604];
          v390 = v388 + 8;
          v389 = *((_QWORD *)v388 + 1);
          if ( (unsigned __int64)(v389 + 64) >= 0xFF0 )
          {
            v391 = operator new[](0x1000u);
            v389 = 0;
            *(_QWORD *)v391 = v388;
            *(_QWORD *)(v391 + 8) = 0;
            v390 = (_QWORD *)(v391 + 8);
            v388 = (unsigned __int8 *)v391;
            a1[604] = (unsigned __int8 *)v391;
          }
          *v390 = v389 + 64;
          v392 = &v388[v389];
          v121 = "sizeof... (";
          *((_QWORD *)v392 + 2) = off_162578;
          v3 = v392 + 16;
          v196 = "";
LABEL_258:
          *(_QWORD *)&v260 = v121;
          *((_QWORD *)&v260 + 1) = v196;
          *((_OWORD *)v3 + 1) = v260;
          *(_QWORD *)&v260 = ")";
          *((_QWORD *)&v260 + 1) = "";
          *((_DWORD *)v3 + 2) = 16843050;
          *((_QWORD *)v3 + 4) = v116;
          *(_OWORD *)(v3 + 40) = v260;
          return (char *)v3;
        }
      }
      else
      {
        v328 = (_QWORD *)operator new[](v327 + 16);
        v329 = (unsigned __int8 *)(v328 + 2);
        *v328 = *(_QWORD *)v320;
        v328[1] = 0;
        *(_QWORD *)v320 = v328;
        if ( !v326 )
          goto LABEL_336;
      }
      memmove(v329, v323, v326);
      v320 = a1[604];
      v323 = &a1[2][8 * v69];
      goto LABEL_336;
    case 67:
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'e':
          *a1 = v1 + 2;
          v52 = (__int64)sub_DFE94(a1);
          if ( !v52 )
            return nullptr;
          goto LABEL_129;
        case 'i':
          *a1 = v1 + 2;
          v52 = sub_DB210((__int64)a1);
          if ( !v52 )
            return nullptr;
LABEL_129:
          v115 = a1[604];
          v116 = v52;
          v118 = v115 + 8;
          v117 = *((_QWORD *)v115 + 1);
          if ( (unsigned __int64)(v117 + 64) >= 0xFF0 )
          {
            v119 = operator new[](0x1000u);
            v117 = 0;
            *(_QWORD *)v119 = v115;
            *(_QWORD *)(v119 + 8) = 0;
            v118 = (_QWORD *)(v119 + 8);
            v115 = (unsigned __int8 *)v119;
            a1[604] = (unsigned __int8 *)v119;
          }
          *v118 = v117 + 64;
          v120 = &v115[v117];
          v121 = "typeid (";
LABEL_257:
          *((_QWORD *)v120 + 2) = off_162578;
          v3 = v120 + 16;
          v196 = (char *)(v121 + 8);
          goto LABEL_258;
        case 'l':
          *a1 = v1 + 2;
          v122 = sub_DB210((__int64)a1);
          if ( !v122 )
            return nullptr;
          v94 = v122;
          v123 = (a1[3] - a1[2]) >> 3;
          break;
        case 'r':
          v134 = a1[604];
          *a1 = v1 + 2;
          v136 = v134 + 8;
          v135 = *((_QWORD *)v134 + 1);
          if ( (unsigned __int64)(v135 + 32) >= 0xFF0 )
          {
            v137 = operator new[](0x1000u);
            v135 = 0;
            *(_QWORD *)v137 = v134;
            *(_QWORD *)(v137 + 8) = 0;
            v136 = (_QWORD *)(v137 + 8);
            v134 = (unsigned __int8 *)v137;
            a1[604] = (unsigned __int8 *)v137;
          }
          v138 = v135 + 32;
          v139 = &v134[v135];
          *v136 = v138;
          *(_QWORD *)&v140 = "throw";
          *((_QWORD *)v139 + 2) = off_161838;
          v3 = v139 + 16;
          *((_QWORD *)&v140 + 1) = "";
          *((_DWORD *)v3 + 2) = 16843015;
          *((_OWORD *)v3 + 1) = v140;
          return (char *)v3;
        case 'w':
          *a1 = v1 + 2;
          v141 = sub_DFE94(a1);
          if ( !v141 )
            return nullptr;
          v142 = a1[604];
          v143 = (__int64)v141;
          v145 = v142 + 8;
          v144 = *((_QWORD *)v142 + 1);
          if ( (unsigned __int64)(v144 + 32) >= 0xFF0 )
          {
            v146 = operator new[](0x1000u);
            v144 = 0;
            *(_QWORD *)v146 = v142;
            *(_QWORD *)(v146 + 8) = 0;
            v145 = (_QWORD *)(v146 + 8);
            v142 = (unsigned __int8 *)v146;
            a1[604] = (unsigned __int8 *)v146;
          }
          v147 = v144 + 32;
          v148 = &v142[v144];
          v149 = off_162738;
LABEL_151:
          v150 = 298;
LABEL_252:
          *v145 = v147;
          *((_QWORD *)v148 + 2) = v149;
          v3 = v148 + 16;
          *((_DWORD *)v3 + 2) = v150 | 0x1010000;
          *((_QWORD *)v3 + 2) = v143;
          return (char *)v3;
        default:
          return (char *)v3;
      }
      while ( 2 )
      {
        v124 = *a1;
        if ( *a1 == a1[1] || *v124 != 69 )
        {
          v125 = sub_E3A3C(a1);
          if ( v125 )
          {
            v126 = a1[3];
            v127 = v125;
            if ( v126 == a1[4] )
            {
              v128 = a1[2];
              v129 = v126 - v128;
              v130 = (v126 - v128) >> 3;
              v131 = (v126 - v128) >> 2;
              if ( a1 + 5 == (unsigned __int8 **)v128 )
              {
                v133 = (unsigned __int8 *)malloc(2 * (v126 - v128));
                v132 = v133;
                if ( v129 )
                  memmove(v133, v128, v129);
              }
              else
              {
                v132 = (unsigned __int8 *)realloc(a1[2], 2 * (v126 - v128));
              }
              v126 = &v132[8 * v130];
              a1[2] = v132;
              a1[3] = v126;
              a1[4] = &v132[8 * v131];
            }
            a1[3] = v126 + 8;
            *(_QWORD *)v126 = v127;
            continue;
          }
          return nullptr;
        }
        break;
      }
      v340 = a1[604];
      v341 = a1[2];
      v342 = a1[3];
      *a1 = v124 + 1;
      v343 = &v341[8 * v123];
      v345 = v340 + 8;
      v344 = *((_QWORD *)v340 + 1);
      v346 = v342 - v343;
      v347 = ((_DWORD)v342 - (_DWORD)v343 + 15) & 0xFFFFFFF0;
      if ( v347 + v344 < 0xFF0 )
        goto LABEL_349;
      if ( v347 < 0xFF1 )
      {
        v402 = operator new[](0x1000u);
        v344 = 0;
        *(_QWORD *)v402 = v340;
        *(_QWORD *)(v402 + 8) = 0;
        v345 = (_QWORD *)(v402 + 8);
        v340 = (unsigned __int8 *)v402;
        a1[604] = (unsigned __int8 *)v402;
LABEL_349:
        v403 = v344 + v347;
        v339 = &v340[v344 + 16];
        *v345 = v403;
        if ( !v346 )
        {
LABEL_351:
          a1[3] = v343;
          v396 = v340 + 8;
          v404 = *((_QWORD *)v340 + 1);
          v397 = v346 >> 3;
          if ( (unsigned __int64)(v404 + 48) >= 0xFF0 )
          {
            v405 = operator new[](0x1000u);
            v404 = 0;
            *(_QWORD *)v405 = v340;
            *(_QWORD *)(v405 + 8) = 0;
            v396 = (_QWORD *)(v405 + 8);
            v340 = (unsigned __int8 *)v405;
            a1[604] = (unsigned __int8 *)v405;
          }
          v399 = v404 + 48;
          v400 = &v340[v404];
          v401 = off_162428;
LABEL_354:
          *v396 = v399;
          *((_QWORD *)v400 + 2) = v401;
          v3 = v400 + 16;
          *((_DWORD *)v3 + 2) = 16843050;
          *((_QWORD *)v3 + 2) = v94;
          *((_QWORD *)v3 + 3) = v339;
          *((_QWORD *)v3 + 4) = v397;
          return (char *)v3;
        }
      }
      else
      {
        v348 = (_QWORD *)operator new[](v347 + 16);
        v339 = (unsigned __int8 *)(v348 + 2);
        *v348 = *(_QWORD *)v340;
        v348[1] = 0;
        *(_QWORD *)v340 = v348;
        if ( !v346 )
          goto LABEL_351;
      }
      memmove(v339, v343, v346);
      v340 = a1[604];
      v343 = &a1[2][8 * v123];
      goto LABEL_351;
    default:
      return (char *)v3;
  }
}
// 121EBF: using guessed type char byte_121EBF;
// 121EC0: using guessed type char byte_121EC0;
// 161838: using guessed type __int64 (__fastcall *off_161838[7])();
// 161A18: using guessed type __int64 (__fastcall *off_161A18[7])();
// 161A88: using guessed type __int64 (__fastcall *off_161A88[7])();
// 161AF8: using guessed type __int64 (__fastcall *off_161AF8[7])();
// 161B68: using guessed type __int64 (__fastcall *off_161B68[7])();
// 161BD8: using guessed type __int64 (__fastcall *off_161BD8[7])();
// 161D28: using guessed type __int64 (__fastcall *off_161D28[7])();
// 161E08: using guessed type __int64 (__fastcall *off_161E08[7])();
// 161E78: using guessed type __int64 (__fastcall *off_161E78[7])();
// 161EE8: using guessed type __int64 (__fastcall *off_161EE8[7])();
// 161F58: using guessed type __int64 (__fastcall *off_161F58[7])();
// 161FC8: using guessed type __int64 (__fastcall *off_161FC8[7])();
// 162268: using guessed type __int64 (__fastcall *off_162268[7])();
// 1622D8: using guessed type __int64 (__fastcall *off_1622D8[7])();
// 162428: using guessed type __int64 (__fastcall *off_162428[7])();
// 162498: using guessed type __int64 (__fastcall *off_162498[7])();
// 162508: using guessed type __int64 (__fastcall *off_162508[7])();
// 162578: using guessed type __int64 (__fastcall *off_162578[7])();
// 1625E8: using guessed type __int64 (__fastcall *off_1625E8[7])();
// 162658: using guessed type __int64 (__fastcall *off_162658[7])();
// 1626C8: using guessed type __int64 (__fastcall *off_1626C8[7])();
// 162738: using guessed type __int64 (__fastcall *off_162738[7])();
