/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C1C
// Address: 0x00048C1C

//----- (00048C1C) --------------------------------------------------------
int __fastcall sub_48C1C(int *a1, int a2, int a3, int a4)
{
  int *v4; // r4
  void **v5; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r3
  unsigned __int8 *v9; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  size_t v16; // r2
  int v17; // r1
  int v18; // r3
  int v19; // r1
  size_t v20; // r5
  void *v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r2
  int v28; // r1
  int v29; // r2
  int v30; // r3
  int v31; // r0
  int v32; // r0
  int v33; // r0
  void *v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r0
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r1
  int v43; // r2
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r0
  int v48; // r0
  int v49; // r0
  void *v50; // r0
  int v51; // r1
  int v52; // r2
  int v53; // r3
  unsigned __int8 *v54; // r5
  unsigned __int8 *v55; // r0
  int v56; // r1
  int v57; // r2
  int v58; // r3
  int v59; // r0
  int v60; // r0
  _BOOL4 v61; // r1
  int v62; // r0
  int v63; // r1
  int v64; // r0
  int v65; // r1
  int v66; // r2
  int v67; // r3
  int v68; // r0
  int v69; // r1
  int v70; // r0
  int v71; // r1
  int v72; // r2
  int v73; // r3
  int v74; // r0
  int v75; // r1
  int v76; // r2
  int v77; // r3
  int v78; // r1
  int v79; // r2
  int v80; // r1
  int v81; // r2
  int v82; // r3
  int v83; // r0
  int v84; // r0
  int v85; // r0
  void *v86; // r0
  int v87; // r1
  int v88; // r2
  int v89; // r3
  int v90; // r0
  int v91; // r1
  int v92; // r2
  int v93; // r3
  int v94; // r1
  int v95; // r2
  int v96; // r1
  int v97; // r2
  int v98; // r3
  int v99; // r0
  int v100; // r0
  int v101; // r0
  void *v102; // r0
  int v103; // r1
  int v104; // r2
  int v105; // r3
  int v106; // r0
  int v107; // r1
  int v108; // r2
  int v109; // r3
  int v110; // r1
  int v111; // r2
  int v112; // r1
  int v113; // r2
  int v114; // r3
  int v115; // r0
  int v116; // r0
  int v117; // r0
  void *v118; // r0
  int v119; // r1
  int v120; // r2
  int v121; // r3
  int v122; // r0
  int v123; // r1
  int v124; // r2
  int v125; // r3
  int v126; // r1
  int v127; // r2
  int v128; // r1
  int v129; // r2
  int v130; // r3
  int v131; // r0
  int v132; // r0
  int v133; // r0
  void *v134; // r0
  int v135; // r1
  int v136; // r2
  int v137; // r3
  int v138; // r0
  int v139; // r1
  int v140; // r2
  int v141; // r3
  int v142; // r1
  int v143; // r2
  int v144; // r1
  int v145; // r2
  int v146; // r3
  int v147; // r0
  int v148; // r0
  int v149; // r0
  void *v150; // r0
  int v151; // r1
  int v152; // r2
  int v153; // r3
  int v154; // r0
  int v155; // r1
  int v156; // r2
  int v157; // r3
  int v158; // r1
  int v159; // r2
  int v160; // r1
  int v161; // r2
  int v162; // r3
  int v163; // r0
  int v164; // r0
  int v165; // r0
  void *v166; // r0
  int v167; // r1
  int v168; // r2
  int v169; // r3
  int v170; // r0
  int v171; // r1
  int v172; // r2
  int v173; // r3
  int v174; // r1
  int v175; // r2
  int v176; // r1
  int v177; // r2
  int v178; // r3
  int v179; // r0
  int v180; // r0
  int v181; // r0
  void *v182; // r0
  int v183; // r1
  int v184; // r2
  int v185; // r3
  int v186; // r0
  int v187; // r1
  int v188; // r2
  int v189; // r3
  int v190; // r1
  int v191; // r2
  int v192; // r1
  int v193; // r2
  int v194; // r3
  int v195; // r0
  int v196; // r0
  int v197; // r0
  void *v198; // r0
  int v199; // r1
  int v200; // r2
  int v201; // r3
  int v202; // r0
  int v203; // r1
  int v204; // r2
  int v205; // r3
  int v206; // r1
  int v207; // r2
  int v208; // r1
  int v209; // r2
  int v210; // r3
  int v211; // r0
  int v212; // r0
  int v213; // r0
  void *v214; // r0
  int v215; // r1
  int v216; // r2
  int v217; // r3
  int v218; // r0
  int v219; // r1
  int v220; // r2
  int v221; // r3
  int v222; // r1
  int v223; // r2
  int v224; // r1
  int v225; // r2
  int v226; // r3
  int v227; // r0
  int v228; // r0
  int v229; // r0
  void *v230; // r0
  int v231; // r1
  int v232; // r2
  int v233; // r3
  int v234; // r0
  int v235; // r1
  int v236; // r2
  int v237; // r3
  int v238; // r1
  int v239; // r2
  int v240; // r1
  int v241; // r2
  int v242; // r3
  int v243; // r0
  int v244; // r0
  int v245; // r0
  void *v246; // r0
  int v247; // r1
  int v248; // r2
  int v249; // r3
  int v250; // r0
  int v251; // r1
  int v252; // r2
  int v253; // r3
  int v254; // r1
  int v255; // r2
  int v256; // r1
  int v257; // r2
  int v258; // r3
  int v259; // r0
  int v260; // r0
  int v261; // r0
  void *v262; // r0
  int v263; // r1
  int v264; // r2
  int v265; // r3
  int v266; // r0
  int v267; // r1
  int v268; // r2
  int v269; // r3
  int v270; // r1
  int v271; // r2
  int v272; // r1
  int v273; // r2
  int v274; // r3
  int v275; // r0
  int v276; // r0
  int v277; // r0
  void *v278; // r0
  int v279; // r1
  int v280; // r2
  int v281; // r3
  int v282; // r2
  int result; // r0
  int v284; // r0
  int v285; // r1
  int v286; // r2
  int v287; // r3
  int v288; // r1
  int v289; // r2
  int v290; // r0
  int v291; // r1
  _WORD *v292; // r0
  int v293; // r1
  int v294; // r0
  int v295; // r1
  int v296; // r2
  int v297; // r3
  int v298; // r1
  int v299; // r2
  int v300; // r1
  int v301; // r2
  int v302; // r3
  int v303; // r0
  int v304; // r0
  int v305; // r0
  void *v306; // r0
  int v307; // r1
  int v308; // r2
  int v309; // r3
  int v310; // r0
  int v311; // r1
  int v312; // r2
  int v313; // r3
  int v314; // r1
  int v315; // r2
  int v316; // r1
  int v317; // r2
  int v318; // r3
  int v319; // r0
  int v320; // r0
  int v321; // r0
  void *v322; // r0
  int v323; // r1
  int v324; // r2
  int v325; // r3
  int v326; // r0
  int v327; // r1
  int v328; // r2
  int v329; // r3
  int v330; // [sp+4h] [bp-4Ch]
  int v331; // [sp+8h] [bp-48h]
  int v332; // [sp+Ch] [bp-44h]
  int v333; // [sp+10h] [bp-40h]
  int v334; // [sp+10h] [bp-40h]
  __int64 *v335; // [sp+10h] [bp-40h]
  __int16 *v336; // [sp+10h] [bp-40h]
  unsigned __int16 *v337; // [sp+10h] [bp-40h]
  int v338; // [sp+14h] [bp-3Ch]
  int v339; // [sp+14h] [bp-3Ch]
  int v340; // [sp+14h] [bp-3Ch]
  int v341; // [sp+14h] [bp-3Ch]
  int v342; // [sp+14h] [bp-3Ch]
  int v343; // [sp+14h] [bp-3Ch]
  int v344; // [sp+14h] [bp-3Ch]
  int v345; // [sp+14h] [bp-3Ch]
  int v346; // [sp+14h] [bp-3Ch]
  int v347; // [sp+14h] [bp-3Ch]
  int v348; // [sp+14h] [bp-3Ch]
  int v349; // [sp+14h] [bp-3Ch]
  int v350; // [sp+14h] [bp-3Ch]
  int v351; // [sp+14h] [bp-3Ch]
  int v352; // [sp+14h] [bp-3Ch]
  int v353; // [sp+18h] [bp-38h]
  void *v354; // [sp+18h] [bp-38h]
  int v355; // [sp+18h] [bp-38h]
  int v356; // [sp+18h] [bp-38h]
  int v357; // [sp+18h] [bp-38h]
  int v358; // [sp+18h] [bp-38h]
  int v359; // [sp+18h] [bp-38h]
  int v360; // [sp+18h] [bp-38h]
  int v361; // [sp+18h] [bp-38h]
  int v362; // [sp+18h] [bp-38h]
  int v363; // [sp+18h] [bp-38h]
  int v364; // [sp+18h] [bp-38h]
  int v365; // [sp+18h] [bp-38h]
  int v366; // [sp+18h] [bp-38h]
  int v367; // [sp+18h] [bp-38h]
  int v368; // [sp+18h] [bp-38h]
  int v369; // [sp+18h] [bp-38h]
  void *v370; // [sp+18h] [bp-38h]
  int v371; // [sp+18h] [bp-38h]
  int v372; // [sp+1Ch] [bp-34h] BYREF
  int v373; // [sp+20h] [bp-30h]
  __int64 v374; // [sp+24h] [bp-2Ch] BYREF
  int v375; // [sp+2Ch] [bp-24h]
  int v376; // [sp+30h] [bp-20h]
  int v377; // [sp+34h] [bp-1Ch] BYREF
  int v378; // [sp+38h] [bp-18h]
  void *v379; // [sp+3Ch] [bp-14h]
  int v380; // [sp+40h] [bp-10h]
  int v381; // [sp+44h] [bp-Ch]
  int v382; // [sp+48h] [bp-8h]

  v4 = a1;
  v5 = (void **)&_stack_chk_guard;
  switch ( a2 )
  {
    case 176:
      v354 = &_stack_chk_guard;
      LOBYTE(v377) = 2;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      sub_4AA10(a1, (unsigned __int8 *)&v377);
      v9 = deref_idcv((unsigned __int8 *)(*v4 + 24 * v4[1] - 24), 2);
      v10 = *v9;
      if ( v10 != 7 )
        sub_49758(
          v10,
          v6,
          v7,
          v8,
          v330,
          v331,
          v332,
          v333,
          v338,
          (int)&_stack_chk_guard,
          v372,
          v373,
          v374,
          SHIDWORD(v374),
          v375,
          v376);
      v11 = idcv_string((int)&v377);
      if ( v11 )
        sub_4A3B2(
          v11,
          v12,
          v13,
          v14,
          v330,
          v331,
          v332,
          v333,
          v338,
          (int)v354,
          v372,
          v373,
          v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          v379,
          v380,
          v381);
      v15 = v380;
      v16 = v380 - 1;
      v5 = (void **)(v9 + 8);
      if ( !v380 )
        v15 = sub_4A3B0(0);
      if ( !v16 )
        v15 = sub_4A3B0(v15);
      v17 = *((_DWORD *)v9 + 3);
      v18 = v17 - 1;
      if ( !v17 )
        v18 = 0;
      v4 = (int *)(v18 + v15);
      v19 = v18 + v16;
      if ( *((_DWORD *)v9 + 4) >= (unsigned int)(v18 + v15) )
        sub_4A34E();
      v334 = v19;
      v339 = v18;
      v20 = v16;
      v21 = qvector_reserve((int)v5, *v5, (unsigned int)v4, 1u);
      *v5 = v21;
      sub_4A350(
        (int)v21,
        v334,
        v20,
        v339,
        v330,
        v331,
        v332,
        v334,
        v339,
        (int)v354,
        v372,
        v373,
        v374,
        SHIDWORD(v374),
        v375,
        v376,
        v377,
        v378,
        v379,
        v380,
        v381);
      goto LABEL_15;
    case 177:
      goto LABEL_113;
    case 178:
      goto LABEL_124;
    case 179:
      goto LABEL_179;
    case 180:
      goto LABEL_91;
    case 181:
      goto LABEL_47;
    case 182:
      goto LABEL_58;
    case 183:
      goto LABEL_37;
    case 184:
      goto LABEL_80;
    case 185:
LABEL_15:
      v355 = (int)v5;
      v340 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v22 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v22 )
        sub_497F2(v22, v23, v24, v25, v330, v331, v332, v333, 2, v355, v372, v373, v374, HIDWORD(v374), v375);
      v26 = *v4;
      v27 = v4[1];
      LOBYTE(v377) = v340;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v26 + 24 * v27 - 24));
      v31 = v4[1];
      if ( v31 )
      {
        v32 = v31 - 1;
        v4[1] = v32;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v32));
      }
      v33 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        v33 = sub_497E0(
                5,
                v28,
                v29,
                v30,
                v330,
                v331,
                v332,
                v333,
                v340,
                v355,
                v372,
                v373,
                v374,
                SHIDWORD(v374),
                v375,
                v376,
                v377,
                v378,
                (int)v379);
      if ( v33 != 7 )
        sub_497E8(v33, v28, v29, v30, v330, v331, v332, v333, v340, v355, v372, v373, v374, SHIDWORD(v374), v375);
      v34 = v379;
      if ( !v379 )
        v34 = (void *)sub_497E8(
                        0,
                        v28,
                        v29,
                        v30,
                        v330,
                        v331,
                        v332,
                        v333,
                        v340,
                        v355,
                        v372,
                        v373,
                        v374,
                        SHIDWORD(v374),
                        v375);
      v380 = 0;
      qfree(v34);
      v381 = 0;
      v379 = nullptr;
      sub_497E8(0, v35, v36, v37, v330, v331, v332, v333, v340, v355, v372, v373, v374, SHIDWORD(v374), v375);
      goto LABEL_26;
    case 186:
      goto LABEL_69;
    case 187:
      goto LABEL_190;
    case 188:
LABEL_26:
      v356 = (int)v5;
      v341 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v38 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v38 )
        sub_49870(v38, v39, v40, v41, v330, v331, v332, v333, 2, v356, v372, v373, (void *)v374, SHIDWORD(v374));
      v42 = *v4;
      v43 = v4[1];
      LOBYTE(v377) = v341;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v42 + 24 * v43 - 24));
      v47 = v4[1];
      if ( v47 )
      {
        v48 = v47 - 1;
        v4[1] = v48;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v48));
      }
      v49 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_4985E(
          5,
          v44,
          v45,
          v46,
          v330,
          v331,
          v332,
          v333,
          v341,
          v356,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v49 != 7 )
        sub_49866(
          v49,
          v44,
          v45,
          v46,
          v330,
          v331,
          v332,
          v333,
          v341,
          v356,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v50 = v379;
      if ( !v379 )
        sub_49866(0, v44, v45, v46, v330, v331, v332, v333, v341, v356, v372, v373, (void *)v374, SHIDWORD(v374), v375);
      v380 = 0;
      qfree(v50);
      v381 = 0;
      v379 = nullptr;
      sub_49866(0, v51, v52, v53, v330, v331, v332, v333, v341, v356, v372, v373, (void *)v374, SHIDWORD(v374), v375);
LABEL_37:
      v54 = (unsigned __int8 *)(*v4 + 24 * (v4[1] - 1));
      v4 = nullptr;
      v55 = deref_idcv(v54, 0);
      if ( v55 && *v55 == 5 )
      {
        free_idcv(v54);
        *((_DWORD *)v54 + 2) = 1;
      }
      v59 = *v54;
      if ( v59 == 9 )
        v59 = sub_49798(
                9,
                v56,
                v57,
                v58,
                v330,
                v331,
                v332,
                v333,
                v338,
                v353,
                v372,
                v373,
                v374,
                SHIDWORD(v374),
                v375,
                v376,
                v377,
                v378,
                (int)v379);
      if ( v59 != 2 )
        sub_4974C();
      v60 = *((_DWORD *)v54 + 2);
      v61 = v60 == 0;
      *((_DWORD *)v54 + 2) = v61;
      sub_4A040(v60, v61, v57, v58, v330, v331, v332, v333, v338);
      goto LABEL_45;
    case 189:
      goto LABEL_102;
    case 190:
      goto LABEL_195;
    case 191:
LABEL_45:
      v62 = *v4;
      v63 = v4[1];
      v4 += 2;
      v64 = idcv_string(v62 + 24 * v63 - 24);
      sub_4A042(v64, v65, v66, v67, v330, v331, v332, v333, v338);
      goto LABEL_46;
    case 200:
      goto LABEL_212;
    case 201:
      goto LABEL_135;
    case 202:
      goto LABEL_168;
    case 203:
      goto LABEL_201;
    case 204:
      goto LABEL_146;
    case 205:
      goto LABEL_157;
    case 206:
      v4 = a1 + 2;
      v284 = idcv_long(*a1 + 24 * a1[1] - 24);
      sub_4A042(v284, v285, v286, v287, v330, v331, v332, v333, v338);
LABEL_195:
      v288 = 24 * (v4[1] - 1);
      v289 = *(unsigned __int8 *)(*v4 + v288);
      if ( v289 == 2 )
        JUMPOUT(0x497D2);
      if ( v289 == 9 )
        JUMPOUT(0x497BA);
      if ( v289 != 3 )
        return sub_4974C();
      v290 = *v4 + v288;
      v291 = *(unsigned __int16 *)(v290 + 22);
      v292 = (_WORD *)(v290 + 22);
      if ( !v291 )
        v292 = (_WORD *)sub_4A040(v292, 0, 3, a4, v330, v331, v332, v333, v338);
      v293 = v291 ^ 0x8000;
      *v292 = v293;
      v4 = nullptr;
      sub_4A040(v292, v293, 0x8000, a4, v330, v331, v332, v333, v338);
LABEL_201:
      v370 = &_stack_chk_guard;
      v5 = (void **)(&dword_0 + 2);
      LOBYTE(v372) = 2;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v294 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v294 )
        sub_49EE0(
          v294,
          v295,
          v296,
          v297,
          v330,
          v331,
          v332,
          v333,
          v338,
          (int)&_stack_chk_guard,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v298 = *v4;
      v299 = v4[1];
      LOBYTE(v377) = 2;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v298 + 24 * v299 - 24));
      v303 = v4[1];
      if ( v303 )
      {
        v304 = v303 - 1;
        v4[1] = v304;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v304));
      }
      v305 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49ED0(
          5,
          v300,
          v301,
          v302,
          v330,
          v331,
          v332,
          v333,
          v338,
          (int)v370,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v305 != 7 )
        sub_49ED8(
          v305,
          v300,
          v301,
          v302,
          v330,
          v331,
          v332,
          v333,
          v338,
          (int)v370,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v306 = v379;
      if ( !v379 )
        sub_49ED8(
          0,
          v300,
          v301,
          v302,
          v330,
          v331,
          v332,
          v333,
          v338,
          (int)v370,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v380 = 0;
      qfree(v306);
      v381 = 0;
      v379 = nullptr;
      sub_49ED8(
        0,
        v307,
        v308,
        v309,
        v330,
        v331,
        v332,
        v333,
        v338,
        (int)v370,
        v372,
        v373,
        (void *)v374,
        SHIDWORD(v374),
        v375);
LABEL_212:
      v371 = (int)v5;
      LOBYTE(v372) = 2;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v310 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v310 )
        sub_49F62(
          v310,
          v311,
          v312,
          v313,
          v330,
          v331,
          v332,
          v333,
          v338,
          (int)v5,
          v372,
          v373,
          (void *)v374,
          (char *)HIDWORD(v374),
          v375);
      v314 = *v4;
      v315 = v4[1];
      LOBYTE(v377) = 2;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v314 + 24 * v315 - 24));
      v319 = v4[1];
      if ( v319 )
      {
        v320 = v319 - 1;
        v4[1] = v320;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v320));
      }
      v321 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        v321 = sub_49F52(
                 5,
                 v316,
                 v317,
                 v318,
                 v330,
                 v331,
                 v332,
                 v333,
                 v338,
                 v371,
                 v372,
                 v373,
                 (void *)v374,
                 (char *)HIDWORD(v374),
                 v375,
                 v376,
                 v377,
                 v378,
                 (int)v379);
      if ( v321 != 7 )
        sub_49F5A(
          v321,
          v316,
          v317,
          v318,
          v330,
          v331,
          v332,
          v333,
          v338,
          v371,
          v372,
          v373,
          (void *)v374,
          (char *)HIDWORD(v374),
          v375);
      v322 = v379;
      if ( !v379 )
        v322 = (void *)sub_49F5A(
                         0,
                         v316,
                         v317,
                         v318,
                         v330,
                         v331,
                         v332,
                         v333,
                         v338,
                         v371,
                         v372,
                         v373,
                         (void *)v374,
                         (char *)HIDWORD(v374),
                         v375);
      v380 = 0;
      qfree(v322);
      v381 = 0;
      v379 = nullptr;
      sub_49F5A(
        0,
        v323,
        v324,
        v325,
        v330,
        v331,
        v332,
        v333,
        v338,
        v371,
        v372,
        v373,
        (void *)v374,
        (char *)HIDWORD(v374),
        v375);
LABEL_223:
      v326 = idcv_float(*v4 + 24 * v4[1] - 24, v4[1], 24 * v4[1], a4);
      sub_4A042(v326, v327, v328, v329, v330, v331, v332, v333, v338);
      break;
    case 208:
      goto LABEL_223;
    case 209:
LABEL_46:
      v68 = *v4;
      v69 = v4[1];
      v4 += 2;
      v70 = idcv_int64(v68 + 24 * v69 - 24);
      sub_4A042(v70, v71, v72, v73, v330, v331, v332, v333, v338);
LABEL_47:
      v357 = (int)v5;
      v342 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v74 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v74 )
        sub_498EC(v74, v75, v76, v77, v330, v331, v332, v333, 2, v357, v372, v374);
      v78 = *v4;
      v79 = v4[1];
      LOBYTE(v377) = v342;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v78 + 24 * v79 - 24));
      v83 = v4[1];
      if ( v83 )
      {
        v84 = v83 - 1;
        v4[1] = v84;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v84));
      }
      v85 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_498DA(5, v80, v81, v82, v330, v331, v332, v333, v342, v357, v372, v374, v375, v376, v377, v378, (int)v379);
      if ( v85 != 7 )
        sub_498E2(v85, v80, v81, v82, v330, v331, v332, v333, v342, v357, v372, v374, v375);
      v86 = v379;
      if ( !v379 )
        sub_498E2(0, v80, v81, v82, v330, v331, v332, v333, v342, v357, v372, v374, v375);
      v380 = 0;
      qfree(v86);
      v381 = 0;
      v379 = nullptr;
      sub_498E2(0, v87, v88, v89, v330, v331, v332, v333, v342, v357, v372, v374, v375);
LABEL_58:
      v358 = (int)v5;
      v343 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v90 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v90 )
        sub_49984(v90, v91, v92, v93, v330, v331, v332, v333, 2, v358, v372, v374);
      v94 = *v4;
      v95 = v4[1];
      LOBYTE(v377) = v343;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v94 + 24 * v95 - 24));
      v99 = v4[1];
      if ( v99 )
      {
        v100 = v99 - 1;
        v4[1] = v100;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v100));
      }
      v101 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49972(5, v96, v97, v98, v330, v331, v332, v333, v343, v358, v372, v374, v375, v376, v377, v378, (int)v379);
      if ( v101 != 7 )
        sub_4997A(v101, v96, v97, v98, v330, v331, v332, v333, v343, v358, v372, v374, v375);
      v102 = v379;
      if ( !v379 )
        sub_4997A(0, v96, v97, v98, v330, v331, v332, v333, v343, v358, v372, v374, v375);
      v380 = 0;
      qfree(v102);
      v381 = 0;
      v379 = nullptr;
      sub_4997A(0, v103, v104, v105, v330, v331, v332, v333, v343, v358, v372, v374, v375);
LABEL_69:
      v359 = (int)v5;
      v344 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v106 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v106 )
        sub_499FA(v106, v107, v108, v109, v330, v331, v332, v333, 2, v359, v372, v373, (void *)v374, SHIDWORD(v374));
      v110 = *v4;
      v111 = v4[1];
      LOBYTE(v377) = v344;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v110 + 24 * v111 - 24));
      v115 = v4[1];
      if ( v115 )
      {
        v116 = v115 - 1;
        v4[1] = v116;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v116));
      }
      v117 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_499E8(
          5,
          v112,
          v113,
          v114,
          v330,
          v331,
          v332,
          v333,
          v344,
          v359,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v117 != 7 )
        sub_499F0(
          v117,
          v112,
          v113,
          v114,
          v330,
          v331,
          v332,
          v333,
          v344,
          v359,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v118 = v379;
      if ( !v379 )
        sub_499F0(
          0,
          v112,
          v113,
          v114,
          v330,
          v331,
          v332,
          v333,
          v344,
          v359,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v380 = 0;
      qfree(v118);
      v381 = 0;
      v379 = nullptr;
      sub_499F0(0, v119, v120, v121, v330, v331, v332, v333, v344, v359, v372, v373, (void *)v374, SHIDWORD(v374), v375);
LABEL_80:
      v360 = (int)v5;
      v345 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v122 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v122 )
        sub_49A70(v122, v123, v124, v125, v330, v331, v332, v333, 2, v360, v372, v373, (void *)v374, SHIDWORD(v374));
      v126 = *v4;
      v127 = v4[1];
      LOBYTE(v377) = v345;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v126 + 24 * v127 - 24));
      v131 = v4[1];
      if ( v131 )
      {
        v132 = v131 - 1;
        v4[1] = v132;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v132));
      }
      v133 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49A5E(
          5,
          v128,
          v129,
          v130,
          v330,
          v331,
          v332,
          v333,
          v345,
          v360,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v133 != 7 )
        sub_49A66(
          v133,
          v128,
          v129,
          v130,
          v330,
          v331,
          v332,
          v333,
          v345,
          v360,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v134 = v379;
      if ( !v379 )
        sub_49A66(
          0,
          v128,
          v129,
          v130,
          v330,
          v331,
          v332,
          v333,
          v345,
          v360,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v380 = 0;
      qfree(v134);
      v381 = 0;
      v379 = nullptr;
      sub_49A66(0, v135, v136, v137, v330, v331, v332, v333, v345, v360, v372, v373, (void *)v374, SHIDWORD(v374), v375);
LABEL_91:
      v361 = (int)v5;
      v346 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v138 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v138 )
        sub_49AE6(v138, v139, v140, v141, v330, v331, v332, v333, 2, v361, v372, v374);
      v142 = *v4;
      v143 = v4[1];
      LOBYTE(v377) = v346;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v142 + 24 * v143 - 24));
      v147 = v4[1];
      if ( v147 )
      {
        v148 = v147 - 1;
        v4[1] = v148;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v148));
      }
      v149 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49AD4(
          5,
          v144,
          v145,
          v146,
          v330,
          v331,
          v332,
          v333,
          v346,
          v361,
          v372,
          v374,
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v149 != 7 )
        sub_49ADC(v149, v144, v145, v146, v330, v331, v332, v333, v346, v361, v372, v374, v375);
      v150 = v379;
      if ( !v379 )
        sub_49ADC(0, v144, v145, v146, v330, v331, v332, v333, v346, v361, v372, v374, v375);
      v380 = 0;
      qfree(v150);
      v381 = 0;
      v379 = nullptr;
      sub_49ADC(0, v151, v152, v153, v330, v331, v332, v333, v346, v361, v372, v374, v375);
LABEL_102:
      v362 = (int)v5;
      v347 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v154 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v154 )
        sub_49B4C(v154, v155, v156, v157, v330, v331, v332, v333, 2, v362, v372, v373, (void *)v374, SHIDWORD(v374));
      v158 = *v4;
      v159 = v4[1];
      LOBYTE(v377) = v347;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v158 + 24 * v159 - 24));
      v163 = v4[1];
      if ( v163 )
      {
        v164 = v163 - 1;
        v4[1] = v164;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v164));
      }
      v165 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49B3A(
          5,
          v160,
          v161,
          v162,
          v330,
          v331,
          v332,
          v333,
          v347,
          v362,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v165 != 7 )
        sub_49B42(
          v165,
          v160,
          v161,
          v162,
          v330,
          v331,
          v332,
          v333,
          v347,
          v362,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v166 = v379;
      if ( !v379 )
        sub_49B42(
          0,
          v160,
          v161,
          v162,
          v330,
          v331,
          v332,
          v333,
          v347,
          v362,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v380 = 0;
      qfree(v166);
      v381 = 0;
      v379 = nullptr;
      sub_49B42(0, v167, v168, v169, v330, v331, v332, v333, v347, v362, v372, v373, (void *)v374, SHIDWORD(v374), v375);
LABEL_113:
      v363 = (int)v5;
      LOBYTE(v372) = 2;
      v376 = 0;
      v375 = 0;
      v348 = 0;
      v374 = 0;
      v335 = &v374;
      v170 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v170 )
        sub_49BC6(v170, v171, v172, v173, v330, v331, v332, &v374, 0, v5, v372, v373, v374, HIDWORD(v374), v375);
      v174 = *v4;
      v175 = v4[1];
      LOBYTE(v377) = 2;
      v5 = nullptr;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v174 + 24 * v175 - 24));
      v179 = v4[1];
      if ( v179 )
      {
        v180 = v179 - 1;
        v4[1] = v180;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v180));
      }
      v181 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        v181 = sub_49BB6(
                 5,
                 v176,
                 v177,
                 v178,
                 v330,
                 v331,
                 v332,
                 (int)v335,
                 v348,
                 v363,
                 v372,
                 v373,
                 v374,
                 SHIDWORD(v374),
                 v375,
                 v376,
                 v377,
                 v378,
                 (int)v379);
      if ( v181 != 7 )
        sub_49BBE(
          v181,
          v176,
          v177,
          v178,
          v330,
          v331,
          v332,
          (int)v335,
          v348,
          v363,
          v372,
          v373,
          v374,
          SHIDWORD(v374),
          v375);
      v182 = v379;
      if ( !v379 )
        v182 = (void *)sub_49BBE(
                         0,
                         v176,
                         v177,
                         v178,
                         v330,
                         v331,
                         v332,
                         (int)v335,
                         v348,
                         v363,
                         v372,
                         v373,
                         v374,
                         SHIDWORD(v374),
                         v375);
      v380 = 0;
      qfree(v182);
      v381 = 0;
      v379 = nullptr;
      sub_49BBE(0, v183, v184, v185, v330, v331, v332, (int)v335, v348, v363, v372, v373, v374, SHIDWORD(v374), v375);
LABEL_124:
      v364 = (int)v5;
      v5 = (void **)(&dword_0 + 2);
      LOBYTE(v372) = 2;
      v376 = 0;
      v375 = 0;
      v349 = 0;
      v374 = 0;
      v336 = (__int16 *)&v374;
      v186 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v186 )
        sub_49C16(v186, v187, v188, v189, v330, v331, v332, (__int16 *)&v374, 0, v364, v372, v374);
      v190 = *v4;
      v191 = v4[1];
      LOBYTE(v377) = 2;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v190 + 24 * v191 - 24));
      v195 = v4[1];
      if ( v195 )
      {
        v196 = v195 - 1;
        v4[1] = v196;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v196));
      }
      v197 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49C06(
          5,
          v192,
          v193,
          v194,
          v330,
          v331,
          v332,
          v336,
          v349,
          v364,
          v372,
          v374,
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v197 != 7 )
        sub_49C0E(v197, v192, v193, v194, v330, v331, v332, v336, v349, v364, v372, v374, v375);
      v198 = v379;
      if ( !v379 )
        sub_49C0E(0, v192, v193, v194, v330, v331, v332, v336, v349, v364, v372, v374, v375);
      v380 = 0;
      qfree(v198);
      v381 = 0;
      v379 = nullptr;
      sub_49C0E(0, v199, v200, v201, v330, v331, v332, v336, v349, v364, v372, v374, v375);
LABEL_135:
      v365 = (int)v5;
      v5 = (void **)(&dword_0 + 2);
      LOBYTE(v372) = 2;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v202 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v202 )
        sub_49C64(
          v202,
          v203,
          v204,
          v205,
          v330,
          v331,
          v332,
          v333,
          v338,
          v365,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v206 = *v4;
      v207 = v4[1];
      LOBYTE(v377) = 2;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v206 + 24 * v207 - 24));
      v211 = v4[1];
      if ( v211 )
      {
        v212 = v211 - 1;
        v4[1] = v212;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v212));
      }
      v213 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49C54(
          5,
          v208,
          v209,
          v210,
          v330,
          v331,
          v332,
          v333,
          v338,
          v365,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v213 != 7 )
        sub_49C5C(
          v213,
          v208,
          v209,
          v210,
          v330,
          v331,
          v332,
          v333,
          v338,
          v365,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v214 = v379;
      if ( !v379 )
        sub_49C5C(
          0,
          v208,
          v209,
          v210,
          v330,
          v331,
          v332,
          v333,
          v338,
          v365,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v380 = 0;
      qfree(v214);
      v381 = 0;
      v379 = nullptr;
      sub_49C5C(0, v215, v216, v217, v330, v331, v332, v333, v338, v365, v372, v373, (void *)v374, SHIDWORD(v374), v375);
LABEL_146:
      v366 = (int)v5;
      v5 = (void **)(&dword_0 + 2);
      LOBYTE(v372) = 2;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v218 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v218 )
        sub_49CEC(
          v218,
          v219,
          v220,
          v221,
          v330,
          v331,
          v332,
          v333,
          v338,
          v366,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v222 = *v4;
      v223 = v4[1];
      LOBYTE(v377) = 2;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v222 + 24 * v223 - 24));
      v227 = v4[1];
      if ( v227 )
      {
        v228 = v227 - 1;
        v4[1] = v228;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v228));
      }
      v229 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49CDC(
          5,
          v224,
          v225,
          v226,
          v330,
          v331,
          v332,
          v333,
          v338,
          v366,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v229 != 7 )
        sub_49CE4(
          v229,
          v224,
          v225,
          v226,
          v330,
          v331,
          v332,
          v333,
          v338,
          v366,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v230 = v379;
      if ( !v379 )
        sub_49CE4(
          0,
          v224,
          v225,
          v226,
          v330,
          v331,
          v332,
          v333,
          v338,
          v366,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v380 = 0;
      qfree(v230);
      v381 = 0;
      v379 = nullptr;
      sub_49CE4(0, v231, v232, v233, v330, v331, v332, v333, v338, v366, v372, v373, (void *)v374, SHIDWORD(v374), v375);
LABEL_157:
      v367 = (int)v5;
      v350 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v234 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v234 )
        sub_49D70(
          v234,
          v235,
          v236,
          v237,
          v330,
          v331,
          v332,
          v333,
          2u,
          v367,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v238 = *v4;
      v239 = v4[1];
      LOBYTE(v377) = v350;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v238 + 24 * v239 - 24));
      v243 = v4[1];
      if ( v243 )
      {
        v244 = v243 - 1;
        v4[1] = v244;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v244));
      }
      v245 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49D5E(
          5,
          v240,
          v241,
          v242,
          v330,
          v331,
          v332,
          v333,
          v350,
          v367,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v245 != 7 )
        sub_49D66(
          v245,
          v240,
          v241,
          v242,
          v330,
          v331,
          v332,
          v333,
          v350,
          v367,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v246 = v379;
      if ( !v379 )
        sub_49D66(
          0,
          v240,
          v241,
          v242,
          v330,
          v331,
          v332,
          v333,
          v350,
          v367,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v380 = 0;
      qfree(v246);
      v381 = 0;
      v379 = nullptr;
      sub_49D66(0, v247, v248, v249, v330, v331, v332, v333, v350, v367, v372, v373, (void *)v374, SHIDWORD(v374), v375);
LABEL_168:
      v368 = (int)v5;
      v351 = 2;
      LOBYTE(v372) = 2;
      v5 = nullptr;
      v376 = 0;
      v375 = 0;
      v374 = 0;
      v250 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v250 )
        sub_49E00(
          v250,
          v251,
          v252,
          v253,
          v330,
          v331,
          v332,
          v333,
          2u,
          v368,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v254 = *v4;
      v255 = v4[1];
      LOBYTE(v377) = v351;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v254 + 24 * v255 - 24));
      v259 = v4[1];
      if ( v259 )
      {
        v260 = v259 - 1;
        v4[1] = v260;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v260));
      }
      v261 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49DEE(
          5,
          v256,
          v257,
          v258,
          v330,
          v331,
          v332,
          v333,
          v351,
          v368,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v261 != 7 )
        sub_49DF6(
          v261,
          v256,
          v257,
          v258,
          v330,
          v331,
          v332,
          v333,
          v351,
          v368,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v262 = v379;
      if ( !v379 )
        sub_49DF6(
          0,
          v256,
          v257,
          v258,
          v330,
          v331,
          v332,
          v333,
          v351,
          v368,
          v372,
          v373,
          (void *)v374,
          SHIDWORD(v374),
          v375);
      v380 = 0;
      qfree(v262);
      v381 = 0;
      v379 = nullptr;
      sub_49DF6(0, v263, v264, v265, v330, v331, v332, v333, v351, v368, v372, v373, (void *)v374, SHIDWORD(v374), v375);
LABEL_179:
      v369 = (int)v5;
      LOBYTE(v372) = 2;
      v376 = 0;
      v375 = 0;
      v352 = 0;
      v374 = 0;
      v337 = (unsigned __int16 *)&v374;
      v266 = move_idcv((unsigned __int8 *)&v372, (unsigned __int8 *)(*v4 + 24 * v4[1] - 24));
      if ( v266 )
        sub_49E8E(v266, v267, v268, v269, v330, v331, v332, (unsigned __int16 *)&v374, 0, (int)v5, v372, v374);
      v270 = *v4;
      v271 = v4[1];
      LOBYTE(v377) = 2;
      v382 = 0;
      v381 = 0;
      v380 = 0;
      v379 = nullptr;
      copy_idcv((unsigned __int8 *)&v377, (unsigned __int8 *)(v270 + 24 * v271 - 24));
      v275 = v4[1];
      if ( v275 )
      {
        v276 = v275 - 1;
        v4[1] = v276;
        free_idcv((unsigned __int8 *)(*v4 + 24 * v276));
      }
      v277 = (unsigned __int8)v377;
      if ( (unsigned __int8)v377 == 5 )
        sub_49E7E(
          5,
          v272,
          v273,
          v274,
          v330,
          v331,
          v332,
          v337,
          v352,
          v369,
          v372,
          v374,
          v375,
          v376,
          v377,
          v378,
          (int)v379);
      if ( v277 != 7 )
        sub_49E86(v277, v272, v273, v274, v330, v331, v332, v337, v352, v369, v372, v374, v375);
      v278 = v379;
      if ( !v379 )
        sub_49E86(0, v272, v273, v274, v330, v331, v332, v337, v352, v369, v372, v374, v375);
      v380 = 0;
      qfree(v278);
      v381 = 0;
      v379 = nullptr;
      sub_49E86(0, v279, v280, v281, v330, v331, v332, v337, v352, v369, v372, v374, v375);
LABEL_190:
      v282 = *(unsigned __int8 *)(*v4 + 24 * (v4[1] - 1));
      if ( v282 == 9 )
        JUMPOUT(0x497AC);
      if ( v282 == 2 )
        JUMPOUT(0x497B4);
      return result;
    default:
      if ( !under_debugger )
        interr(1448);
      __debugbreak();
  }
  return sub_4974C();
}
// 495D2: control flows out of bounds to 497AC
// 495DC: control flows out of bounds to 497B4
// 49600: control flows out of bounds to 497D2
// 49606: control flows out of bounds to 497BA
// 48CC0: variable 'v6' is possibly undefined
// 48CC0: variable 'v7' is possibly undefined
// 48CC0: variable 'v8' is possibly undefined
// 48CC0: variable 'v330' is possibly undefined
// 48CC0: variable 'v331' is possibly undefined
// 48CC0: variable 'v332' is possibly undefined
// 48CC0: variable 'v333' is possibly undefined
// 48CC0: variable 'v338' is possibly undefined
// 48CD0: variable 'v12' is possibly undefined
// 48CD0: variable 'v13' is possibly undefined
// 48CD0: variable 'v14' is possibly undefined
// 48CD0: variable 'v354' is possibly undefined
// 48CE6: variable 'v16' is possibly undefined
// 48D04: variable 'v19' is possibly undefined
// 48D06: variable 'v18' is possibly undefined
// 48D4A: variable 'v23' is possibly undefined
// 48D4A: variable 'v24' is possibly undefined
// 48D4A: variable 'v25' is possibly undefined
// 48D54: variable 'v340' is possibly undefined
// 48D88: variable 'v28' is possibly undefined
// 48D88: variable 'v29' is possibly undefined
// 48D88: variable 'v30' is possibly undefined
// 48D88: variable 'v355' is possibly undefined
// 48DAA: variable 'v35' is possibly undefined
// 48DAA: variable 'v36' is possibly undefined
// 48DAA: variable 'v37' is possibly undefined
// 48DD6: variable 'v39' is possibly undefined
// 48DD6: variable 'v40' is possibly undefined
// 48DD6: variable 'v41' is possibly undefined
// 48DE0: variable 'v341' is possibly undefined
// 48E14: variable 'v44' is possibly undefined
// 48E14: variable 'v45' is possibly undefined
// 48E14: variable 'v46' is possibly undefined
// 48E14: variable 'v356' is possibly undefined
// 48E1A: variable 'v49' is possibly undefined
// 48E2C: variable 'v50' is possibly undefined
// 48E36: variable 'v51' is possibly undefined
// 48E36: variable 'v52' is possibly undefined
// 48E36: variable 'v53' is possibly undefined
// 48E68: variable 'v56' is possibly undefined
// 48E68: variable 'v57' is possibly undefined
// 48E68: variable 'v58' is possibly undefined
// 48E68: variable 'v353' is possibly undefined
// 48E90: variable 'v65' is possibly undefined
// 48E90: variable 'v66' is possibly undefined
// 48E90: variable 'v67' is possibly undefined
// 48EA4: variable 'v71' is possibly undefined
// 48EA4: variable 'v72' is possibly undefined
// 48EA4: variable 'v73' is possibly undefined
// 48ED0: variable 'v75' is possibly undefined
// 48ED0: variable 'v76' is possibly undefined
// 48ED0: variable 'v77' is possibly undefined
// 48EDA: variable 'v342' is possibly undefined
// 48F0E: variable 'v80' is possibly undefined
// 48F0E: variable 'v81' is possibly undefined
// 48F0E: variable 'v82' is possibly undefined
// 48F0E: variable 'v357' is possibly undefined
// 48F14: variable 'v85' is possibly undefined
// 48F26: variable 'v86' is possibly undefined
// 48F30: variable 'v87' is possibly undefined
// 48F30: variable 'v88' is possibly undefined
// 48F30: variable 'v89' is possibly undefined
// 48F5C: variable 'v91' is possibly undefined
// 48F5C: variable 'v92' is possibly undefined
// 48F5C: variable 'v93' is possibly undefined
// 48F66: variable 'v343' is possibly undefined
// 48F9A: variable 'v96' is possibly undefined
// 48F9A: variable 'v97' is possibly undefined
// 48F9A: variable 'v98' is possibly undefined
// 48F9A: variable 'v358' is possibly undefined
// 48FA0: variable 'v101' is possibly undefined
// 48FB2: variable 'v102' is possibly undefined
// 48FBC: variable 'v103' is possibly undefined
// 48FBC: variable 'v104' is possibly undefined
// 48FBC: variable 'v105' is possibly undefined
// 48FE8: variable 'v107' is possibly undefined
// 48FE8: variable 'v108' is possibly undefined
// 48FE8: variable 'v109' is possibly undefined
// 48FF2: variable 'v344' is possibly undefined
// 49026: variable 'v112' is possibly undefined
// 49026: variable 'v113' is possibly undefined
// 49026: variable 'v114' is possibly undefined
// 49026: variable 'v359' is possibly undefined
// 4902C: variable 'v117' is possibly undefined
// 4903E: variable 'v118' is possibly undefined
// 49048: variable 'v119' is possibly undefined
// 49048: variable 'v120' is possibly undefined
// 49048: variable 'v121' is possibly undefined
// 49074: variable 'v123' is possibly undefined
// 49074: variable 'v124' is possibly undefined
// 49074: variable 'v125' is possibly undefined
// 4907E: variable 'v345' is possibly undefined
// 490B2: variable 'v128' is possibly undefined
// 490B2: variable 'v129' is possibly undefined
// 490B2: variable 'v130' is possibly undefined
// 490B2: variable 'v360' is possibly undefined
// 490B8: variable 'v133' is possibly undefined
// 490CA: variable 'v134' is possibly undefined
// 490D4: variable 'v135' is possibly undefined
// 490D4: variable 'v136' is possibly undefined
// 490D4: variable 'v137' is possibly undefined
// 49100: variable 'v139' is possibly undefined
// 49100: variable 'v140' is possibly undefined
// 49100: variable 'v141' is possibly undefined
// 4910A: variable 'v346' is possibly undefined
// 4913E: variable 'v144' is possibly undefined
// 4913E: variable 'v145' is possibly undefined
// 4913E: variable 'v146' is possibly undefined
// 4913E: variable 'v361' is possibly undefined
// 49144: variable 'v149' is possibly undefined
// 49156: variable 'v150' is possibly undefined
// 49160: variable 'v151' is possibly undefined
// 49160: variable 'v152' is possibly undefined
// 49160: variable 'v153' is possibly undefined
// 4918C: variable 'v155' is possibly undefined
// 4918C: variable 'v156' is possibly undefined
// 4918C: variable 'v157' is possibly undefined
// 49196: variable 'v347' is possibly undefined
// 491CA: variable 'v160' is possibly undefined
// 491CA: variable 'v161' is possibly undefined
// 491CA: variable 'v162' is possibly undefined
// 491CA: variable 'v362' is possibly undefined
// 491D0: variable 'v165' is possibly undefined
// 491E2: variable 'v166' is possibly undefined
// 491EC: variable 'v167' is possibly undefined
// 491EC: variable 'v168' is possibly undefined
// 491EC: variable 'v169' is possibly undefined
// 4921E: variable 'v171' is possibly undefined
// 4921E: variable 'v172' is possibly undefined
// 4921E: variable 'v173' is possibly undefined
// 4925A: variable 'v176' is possibly undefined
// 4925A: variable 'v177' is possibly undefined
// 4925A: variable 'v178' is possibly undefined
// 4925A: variable 'v335' is possibly undefined
// 4925A: variable 'v348' is possibly undefined
// 4925A: variable 'v363' is possibly undefined
// 4927C: variable 'v183' is possibly undefined
// 4927C: variable 'v184' is possibly undefined
// 4927C: variable 'v185' is possibly undefined
// 492AE: variable 'v187' is possibly undefined
// 492AE: variable 'v188' is possibly undefined
// 492AE: variable 'v189' is possibly undefined
// 492EA: variable 'v192' is possibly undefined
// 492EA: variable 'v193' is possibly undefined
// 492EA: variable 'v194' is possibly undefined
// 492EA: variable 'v336' is possibly undefined
// 492EA: variable 'v349' is possibly undefined
// 492EA: variable 'v364' is possibly undefined
// 492F0: variable 'v197' is possibly undefined
// 49302: variable 'v198' is possibly undefined
// 4930C: variable 'v199' is possibly undefined
// 4930C: variable 'v200' is possibly undefined
// 4930C: variable 'v201' is possibly undefined
// 49336: variable 'v203' is possibly undefined
// 49336: variable 'v204' is possibly undefined
// 49336: variable 'v205' is possibly undefined
// 49370: variable 'v208' is possibly undefined
// 49370: variable 'v209' is possibly undefined
// 49370: variable 'v210' is possibly undefined
// 49370: variable 'v365' is possibly undefined
// 49376: variable 'v213' is possibly undefined
// 49388: variable 'v214' is possibly undefined
// 49392: variable 'v215' is possibly undefined
// 49392: variable 'v216' is possibly undefined
// 49392: variable 'v217' is possibly undefined
// 493BC: variable 'v219' is possibly undefined
// 493BC: variable 'v220' is possibly undefined
// 493BC: variable 'v221' is possibly undefined
// 493F6: variable 'v224' is possibly undefined
// 493F6: variable 'v225' is possibly undefined
// 493F6: variable 'v226' is possibly undefined
// 493F6: variable 'v366' is possibly undefined
// 493FC: variable 'v229' is possibly undefined
// 4940E: variable 'v230' is possibly undefined
// 49418: variable 'v231' is possibly undefined
// 49418: variable 'v232' is possibly undefined
// 49418: variable 'v233' is possibly undefined
// 49444: variable 'v235' is possibly undefined
// 49444: variable 'v236' is possibly undefined
// 49444: variable 'v237' is possibly undefined
// 4944E: variable 'v350' is possibly undefined
// 49482: variable 'v240' is possibly undefined
// 49482: variable 'v241' is possibly undefined
// 49482: variable 'v242' is possibly undefined
// 49482: variable 'v367' is possibly undefined
// 49488: variable 'v245' is possibly undefined
// 4949A: variable 'v246' is possibly undefined
// 494A4: variable 'v247' is possibly undefined
// 494A4: variable 'v248' is possibly undefined
// 494A4: variable 'v249' is possibly undefined
// 494D0: variable 'v251' is possibly undefined
// 494D0: variable 'v252' is possibly undefined
// 494D0: variable 'v253' is possibly undefined
// 494DA: variable 'v351' is possibly undefined
// 4950E: variable 'v256' is possibly undefined
// 4950E: variable 'v257' is possibly undefined
// 4950E: variable 'v258' is possibly undefined
// 4950E: variable 'v368' is possibly undefined
// 49514: variable 'v261' is possibly undefined
// 49526: variable 'v262' is possibly undefined
// 49530: variable 'v263' is possibly undefined
// 49530: variable 'v264' is possibly undefined
// 49530: variable 'v265' is possibly undefined
// 49562: variable 'v267' is possibly undefined
// 49562: variable 'v268' is possibly undefined
// 49562: variable 'v269' is possibly undefined
// 4959E: variable 'v272' is possibly undefined
// 4959E: variable 'v273' is possibly undefined
// 4959E: variable 'v274' is possibly undefined
// 4959E: variable 'v337' is possibly undefined
// 4959E: variable 'v352' is possibly undefined
// 4959E: variable 'v369' is possibly undefined
// 495A4: variable 'v277' is possibly undefined
// 495B6: variable 'v278' is possibly undefined
// 495C0: variable 'v279' is possibly undefined
// 495C0: variable 'v280' is possibly undefined
// 495C0: variable 'v281' is possibly undefined
// 495EE: variable 'v285' is possibly undefined
// 495EE: variable 'v286' is possibly undefined
// 495EE: variable 'v287' is possibly undefined
// 4961A: variable 'a4' is possibly undefined
// 49622: variable 'v291' is possibly undefined
// 49652: variable 'v295' is possibly undefined
// 49652: variable 'v296' is possibly undefined
// 49652: variable 'v297' is possibly undefined
// 4968C: variable 'v300' is possibly undefined
// 4968C: variable 'v301' is possibly undefined
// 4968C: variable 'v302' is possibly undefined
// 4968C: variable 'v370' is possibly undefined
// 49692: variable 'v305' is possibly undefined
// 496A4: variable 'v306' is possibly undefined
// 496AE: variable 'v307' is possibly undefined
// 496AE: variable 'v308' is possibly undefined
// 496AE: variable 'v309' is possibly undefined
// 496D8: variable 'v311' is possibly undefined
// 496D8: variable 'v312' is possibly undefined
// 496D8: variable 'v313' is possibly undefined
// 49712: variable 'v316' is possibly undefined
// 49712: variable 'v317' is possibly undefined
// 49712: variable 'v318' is possibly undefined
// 49712: variable 'v371' is possibly undefined
// 49734: variable 'v323' is possibly undefined
// 49734: variable 'v324' is possibly undefined
// 49734: variable 'v325' is possibly undefined
// 49748: variable 'v327' is possibly undefined
// 49748: variable 'v328' is possibly undefined
// 49748: variable 'v329' is possibly undefined
// 0: using guessed type int dword_0;
// 4974C: using guessed type int sub_4974C(void);
// 497F2: using guessed type int __fastcall sub_497F2(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 49BC6: using guessed type int __fastcall sub_49BC6(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 4A34E: using guessed type int sub_4A34E(void);
// 4A3B0: using guessed type int __fastcall sub_4A3B0(_DWORD);
// E0550: using guessed type char under_debugger;
