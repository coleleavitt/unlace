__int64 __fastcall sub_1EC85F0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, __int64 a5, unsigned __int8 a6)
{
  __int64 v7; // rax
  char v8; // cl
  char v9; // si
  char v10; // dl
  char v11; // cl
  char v12; // si
  char v13; // dl
  char v14; // si
  char v15; // r8
  char v16; // di
  char v17; // cl
  char v18; // dl
  char v19; // si
  char v20; // dl
  char v21; // si
  char v22; // dl
  char v23; // cl
  char v24; // dl
  char v25; // cl
  char v26; // si
  char v27; // r9
  char v28; // dl
  char v29; // r8
  char v30; // di
  char v31; // dl
  char v32; // r8
  char v33; // r9
  char v34; // dl
  char v35; // r8
  char v36; // r9
  char v37; // dl
  char v38; // r8
  char v39; // r9
  char v40; // r8
  char v41; // r9
  char v42; // dl
  char v43; // r9
  char v44; // di
  char v45; // si
  char v46; // dl
  char v47; // di
  char v48; // dl
  char v49; // si
  char v50; // dl
  char v51; // si
  char v52; // di
  char v53; // dl
  char v54; // si
  char v55; // di
  char v56; // si
  char v57; // r8
  char v58; // dl
  char v59; // di
  char v60; // dl
  char v61; // si
  char v62; // dl
  char v63; // si
  char v64; // di
  char v65; // dl
  char v66; // si
  char v67; // di
  char v68; // dl
  char v69; // si
  char v70; // dl
  char v71; // si
  char v72; // di
  char v73; // dl
  char v74; // si
  char v75; // dl
  char v76; // di
  char v77; // dl
  char v78; // si
  char v79; // dl
  char v80; // di
  char v81; // dl
  char v82; // si
  char v83; // dl
  __int64 v84; // rsi
  char v85; // di
  char v86; // r8
  char v87; // r9
  char v88; // dl
  char v89; // di
  char v90; // dl
  char v91; // dl
  char v92; // di
  char v93; // dl
  char v94; // r8
  char v95; // dl
  char v96; // r9
  char v97; // dl
  char v98; // r9
  char v99; // di
  char v100; // r8
  char v101; // dl
  char v102; // r9
  char v103; // dl
  char v104; // di
  char v105; // dl
  char v106; // dl
  char v107; // di
  char v108; // dl
  char v109; // di
  char v110; // r9
  char v111; // dl
  char v112; // r8
  char v113; // di
  char v114; // dl
  char v115; // r8
  char v116; // r9
  char v117; // dl
  char v118; // di
  char v119; // dl
  char v120; // di
  char v121; // dl
  char v122; // dl
  char v123; // r8
  char v124; // dl
  char v125; // di
  char v126; // r9
  char v127; // dl
  char v128; // dl
  char v129; // r9
  int v130; // edx
  char v131; // di
  char v132; // di
  char v133; // r8
  char v134; // di
  __int64 v135; // rdx
  char v136; // cl
  bool v137; // zf
  unsigned __int64 v138; // rdx
  unsigned __int64 v139; // rsi
  unsigned __int64 v140; // rcx
  unsigned __int64 v141; // rdx
  unsigned __int64 v142; // rcx
  unsigned __int64 v143; // rdx
  unsigned __int64 v144; // rcx
  unsigned __int64 v145; // rdx
  unsigned __int64 v146; // rcx
  unsigned __int64 v147; // rdx
  unsigned __int64 v148; // rcx
  unsigned __int64 v149; // rdx
  unsigned __int64 v150; // rcx
  unsigned __int64 v151; // rdx
  unsigned __int64 v152; // rcx
  unsigned __int64 v153; // rdx
  unsigned __int64 v154; // rcx
  unsigned __int64 v155; // rdx
  unsigned __int64 v156; // rcx
  unsigned __int64 v157; // rdx
  unsigned __int64 v158; // rcx
  unsigned __int64 v159; // rdx
  unsigned __int64 v160; // rcx
  unsigned __int64 v161; // rdx
  unsigned __int64 v162; // rcx
  unsigned __int64 v163; // rdx
  unsigned __int64 v164; // rcx
  unsigned __int64 v165; // rdx
  unsigned __int64 v166; // rcx
  unsigned __int64 v167; // rdx
  unsigned __int64 v168; // rcx
  unsigned __int64 v169; // rdx
  unsigned __int64 v170; // rcx
  unsigned __int64 v171; // rdx
  unsigned __int64 v172; // rcx
  unsigned __int64 v173; // rdx
  unsigned __int64 v174; // rcx
  unsigned __int64 v175; // rdx
  unsigned __int64 v176; // rcx
  unsigned __int64 v177; // rdx
  unsigned __int64 v178; // rcx
  unsigned __int64 v179; // rdx
  unsigned __int64 v180; // rcx
  unsigned __int64 v181; // rdx
  unsigned __int64 v182; // rcx
  unsigned __int64 v183; // rdx
  unsigned __int64 v184; // rcx
  unsigned __int64 v185; // rdx
  unsigned __int64 v186; // rcx
  unsigned __int64 v187; // rdx
  unsigned __int64 v188; // rcx
  unsigned __int64 v189; // rdx
  unsigned __int64 v190; // rcx
  unsigned __int64 v191; // rdx
  unsigned __int64 v192; // rcx
  unsigned __int64 v193; // rdx
  unsigned __int64 v194; // rcx
  unsigned __int64 v195; // rcx
  unsigned __int64 v196; // rdx
  unsigned __int64 v197; // rcx
  unsigned __int64 v198; // rdx
  unsigned __int64 v199; // rcx
  __int64 v200; // rdx
  int v201; // r14d
  int v202; // ecx
  __int128 v203; // rax
  int v204; // r9d
  __m128i si128; // xmm2
  __int64 v206; // rcx
  unsigned int v207; // eax
  __int64 v208; // rdx
  int v209; // r14d
  unsigned int v210; // edx
  __int64 v211; // rax
  int v212; // r15d
  __m128i *v213; // rsi
  void *v214; // rdi
  unsigned int v215; // ebp
  const __m128i *v216; // r12
  void **v217; // rbx
  char *v218; // rbx
  char *v219; // rdi
  char *v220; // r12
  char *v221; // rdi
  unsigned int v228; // [rsp+3Ch] [rbp-3FCh] BYREF
  void *v229[2]; // [rsp+40h] [rbp-3F8h] BYREF
  _BYTE v230[16]; // [rsp+50h] [rbp-3E8h] BYREF
  _BYTE v231[24]; // [rsp+60h] [rbp-3D8h] BYREF
  __m128i v232; // [rsp+80h] [rbp-3B8h] BYREF
  __int32 v233; // [rsp+90h] [rbp-3A8h]
  __int32 v234; // [rsp+94h] [rbp-3A4h]
  _BYTE v235[4]; // [rsp+A0h] [rbp-398h] BYREF
  char v236; // [rsp+A4h] [rbp-394h]
  int v237; // [rsp+A8h] [rbp-390h]
  char v238; // [rsp+ACh] [rbp-38Ch]
  char v239; // [rsp+ADh] [rbp-38Bh]
  char v240; // [rsp+AEh] [rbp-38Ah]
  char v241; // [rsp+AFh] [rbp-389h]
  unsigned int v242; // [rsp+B0h] [rbp-388h]
  char v243; // [rsp+B4h] [rbp-384h]
  char v244; // [rsp+B5h] [rbp-383h]
  char v245; // [rsp+B6h] [rbp-382h]
  char v246; // [rsp+B7h] [rbp-381h]
  int v247; // [rsp+B8h] [rbp-380h]
  int v248; // [rsp+BCh] [rbp-37Ch]
  char v249; // [rsp+C0h] [rbp-378h]
  int v250; // [rsp+C4h] [rbp-374h]
  int v251; // [rsp+C8h] [rbp-370h]
  char v252; // [rsp+CCh] [rbp-36Ch]
  char v253; // [rsp+CDh] [rbp-36Bh]
  __int16 v254; // [rsp+CEh] [rbp-36Ah]
  int v255; // [rsp+D0h] [rbp-368h]
  char v256; // [rsp+D4h] [rbp-364h]
  int v257; // [rsp+D8h] [rbp-360h]
  char v258; // [rsp+DCh] [rbp-35Ch]
  int v259; // [rsp+E0h] [rbp-358h]
  char v260; // [rsp+E4h] [rbp-354h]
  int v261; // [rsp+E8h] [rbp-350h]
  int v262; // [rsp+ECh] [rbp-34Ch]
  int v263; // [rsp+F0h] [rbp-348h]
  int v264; // [rsp+F4h] [rbp-344h]
  char v265; // [rsp+F8h] [rbp-340h]
  char v266; // [rsp+F9h] [rbp-33Fh]
  char v267; // [rsp+FAh] [rbp-33Eh]
  int v268; // [rsp+FCh] [rbp-33Ch]
  char v269; // [rsp+100h] [rbp-338h]
  char v270; // [rsp+101h] [rbp-337h]
  int v271; // [rsp+104h] [rbp-334h]
  char v272; // [rsp+108h] [rbp-330h]
  char v273; // [rsp+109h] [rbp-32Fh]
  char v274; // [rsp+10Ah] [rbp-32Eh]
  char v275; // [rsp+10Bh] [rbp-32Dh]
  char v276; // [rsp+10Ch] [rbp-32Ch]
  char v277; // [rsp+10Dh] [rbp-32Bh]
  int v278; // [rsp+110h] [rbp-328h]
  int v279; // [rsp+114h] [rbp-324h]
  char v280; // [rsp+118h] [rbp-320h]
  int v281; // [rsp+11Ch] [rbp-31Ch]
  int v282; // [rsp+120h] [rbp-318h]
  int v283; // [rsp+124h] [rbp-314h]
  int v284; // [rsp+128h] [rbp-310h]
  char v285; // [rsp+12Ch] [rbp-30Ch]
  int v286; // [rsp+130h] [rbp-308h]
  int v287; // [rsp+134h] [rbp-304h]
  int v288; // [rsp+138h] [rbp-300h]
  unsigned int v289; // [rsp+13Ch] [rbp-2FCh]
  int v290; // [rsp+140h] [rbp-2F8h]
  char v291; // [rsp+144h] [rbp-2F4h]
  int v292; // [rsp+148h] [rbp-2F0h]
  char v293; // [rsp+14Ch] [rbp-2ECh]
  int v294; // [rsp+150h] [rbp-2E8h]
  int v295; // [rsp+154h] [rbp-2E4h]
  int v296; // [rsp+158h] [rbp-2E0h]
  int v297; // [rsp+15Ch] [rbp-2DCh]
  int v298; // [rsp+160h] [rbp-2D8h]
  int v299; // [rsp+164h] [rbp-2D4h]
  char v300; // [rsp+168h] [rbp-2D0h]
  char v301; // [rsp+169h] [rbp-2CFh]
  char v302; // [rsp+16Ah] [rbp-2CEh]
  __int16 v303; // [rsp+16Ch] [rbp-2CCh]
  __int16 v304; // [rsp+16Eh] [rbp-2CAh]
  unsigned int v305; // [rsp+170h] [rbp-2C8h]
  char v306; // [rsp+174h] [rbp-2C4h]
  char v307; // [rsp+175h] [rbp-2C3h]
  unsigned __int64 v308; // [rsp+180h] [rbp-2B8h]
  unsigned __int64 v309; // [rsp+188h] [rbp-2B0h]
  void **v310; // [rsp+198h] [rbp-2A0h] BYREF
  void **v311; // [rsp+1B0h] [rbp-288h] BYREF
  void **v312; // [rsp+1C8h] [rbp-270h] BYREF
  void **v313; // [rsp+1E0h] [rbp-258h] BYREF
  void **v314; // [rsp+1F8h] [rbp-240h] BYREF
  __m128i v315; // [rsp+210h] [rbp-228h]
  int v316; // [rsp+220h] [rbp-218h]
  void *v317; // [rsp+228h] [rbp-210h]
  __int64 v318; // [rsp+238h] [rbp-200h] BYREF
  void *v319; // [rsp+248h] [rbp-1F0h]
  __int64 v320; // [rsp+258h] [rbp-1E0h] BYREF
  void *v321; // [rsp+268h] [rbp-1D0h]
  __int64 v322; // [rsp+278h] [rbp-1C0h] BYREF
  void *v323; // [rsp+288h] [rbp-1B0h] BYREF
  __int64 v324; // [rsp+298h] [rbp-1A0h] BYREF
  void **v325[3]; // [rsp+2A8h] [rbp-190h] BYREF
  void **v326[3]; // [rsp+2C0h] [rbp-178h] BYREF
  bool v327; // [rsp+2D8h] [rbp-160h]
  void **v328; // [rsp+2E0h] [rbp-158h] BYREF
  __int64 v329; // [rsp+2F8h] [rbp-140h] BYREF
  void *v330; // [rsp+308h] [rbp-130h]
  void *v331; // [rsp+328h] [rbp-110h] BYREF
  __m128i *v332; // [rsp+330h] [rbp-108h]
  const __m128i *v333; // [rsp+338h] [rbp-100h]
  void *v334; // [rsp+340h] [rbp-F8h] BYREF
  __int64 v335; // [rsp+350h] [rbp-E8h] BYREF
  void *v336; // [rsp+360h] [rbp-D8h]
  __int64 v337; // [rsp+370h] [rbp-C8h] BYREF
  void **v338; // [rsp+398h] [rbp-A0h] BYREF
  void *v339; // [rsp+3B0h] [rbp-88h]
  _BYTE v340[24]; // [rsp+3C0h] [rbp-78h] BYREF
  void *v341; // [rsp+3D8h] [rbp-60h]
  __int64 v342; // [rsp+3E8h] [rbp-50h] BYREF

  sub_FEA220((__int64)v235);
  v7 = *a1;
  v8 = *(_BYTE *)(*a1 + 72);
  v9 = *(_BYTE *)(*a1 + 64);
  v235[0] = (*(_BYTE *)(v7 + 56) << 7)
          | ((*(_BYTE *)(v7 + 48) & 1) << 6)
          | (32 * (*(_BYTE *)(v7 + 40) & 1)) & 0x3F
          | (16 * (*(_BYTE *)(v7 + 32) & 1)) & 0x3F
          | (8 * (*(_BYTE *)(v7 + 24) & 1)) & 0xF
          | (4 * (*(_BYTE *)(v7 + 16) & 1)) & 0xF
          | (2 * (*(_BYTE *)(v7 + 8) & 1)) & 3
          | *(_BYTE *)v7 & 1;
  v10 = ((*(_BYTE *)(v7 + 112) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 104) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 96) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 88) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 80) & 1)) & 0xF
      | (2 * (v8 & 1)) & 3
      | v9 & 1;
  v11 = *(_BYTE *)(v7 + 136);
  v12 = *(_BYTE *)(v7 + 128);
  v235[1] = (*(_BYTE *)(v7 + 120) << 7) | v10;
  v13 = (*(_BYTE *)(v7 + 184) << 7)
      | ((*(_BYTE *)(v7 + 176) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 168) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 160) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 152) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 144) & 1)) & 0xF
      | (2 * (v11 & 1)) & 3
      | v12 & 1;
  v14 = *(_BYTE *)(v7 + 192);
  v235[2] = v13;
  v15 = *(_BYTE *)(v7 + 376);
  v16 = *(_BYTE *)(v7 + 384);
  v17 = *(_BYTE *)(v7 + 264);
  v18 = (*(_BYTE *)(v7 + 248) << 7)
      | ((*(_BYTE *)(v7 + 240) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 232) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 224) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 216) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 208) & 1)) & 0xF
      | (2 * (*(_BYTE *)(v7 + 200) & 1)) & 3
      | v14 & 1;
  v19 = *(_BYTE *)(v7 + 256);
  v235[3] = v18;
  v20 = v19 & 1 | v236 & 0xFC;
  v21 = *(_BYTE *)(v7 + 296);
  v22 = (8 * (*(_BYTE *)(v7 + 280) & 1)) | (4 * (*(_BYTE *)(v7 + 272) & 1)) | ((2 * (v17 & 1)) | v20) & 0xF3;
  v23 = *(_BYTE *)(v7 + 304);
  v236 = v22;
  v237 = *(_QWORD *)(v7 + 288);
  v24 = ((*(_BYTE *)(v7 + 344) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 336) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 328) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 320) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 312) & 1)) & 0xF
      | (2 * (v23 & 1)) & 3
      | v21 & 1;
  v25 = *(_BYTE *)(v7 + 360);
  v26 = *(_BYTE *)(v7 + 368);
  v238 = (*(_BYTE *)(v7 + 352) << 7) | v24;
  v27 = *(_BYTE *)(v7 + 448) & 1;
  v28 = ((*(_BYTE *)(v7 + 424) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 416) & 1)) & 0xBF
      | (16 * (*(_BYTE *)(v7 + 408) & 1)) & 0xBF
      | (8 * (*(_BYTE *)(v7 + 400) & 1)) & 0x8F
      | (4 * (*(_BYTE *)(v7 + 392) & 1)) & 0x8F
      | (2 * (v16 & 1)) & 0x83
      | v15 & 1
      | v239 & 0x80;
  v29 = *(_BYTE *)(v7 + 456);
  v30 = *(_BYTE *)(v7 + 432) & 7;
  v239 = (*(_BYTE *)(v7 + 440) << 7) | v28 & 0x7F;
  v31 = ((*(_BYTE *)(v7 + 496) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 488) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 480) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 472) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 464) & 1)) & 0xF
      | (2 * (v29 & 1)) & 3
      | v27 & 3;
  v32 = *(_BYTE *)(v7 + 520);
  v33 = *(_BYTE *)(v7 + 512);
  v240 = (*(_BYTE *)(v7 + 504) << 7) | v31;
  v34 = ((*(_BYTE *)(v7 + 560) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 552) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 544) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 536) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 528) & 1)) & 0xF
      | (2 * (v32 & 1)) & 3
      | v33 & 1;
  v35 = *(_BYTE *)(v7 + 584);
  v36 = *(_BYTE *)(v7 + 576);
  v241 = (*(_BYTE *)(v7 + 568) << 7) | v34;
  v37 = ((*(_BYTE *)(v7 + 624) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 616) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 608) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 600) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 592) & 1)) & 0xF
      | (2 * (v35 & 1)) & 3
      | v36 & 1;
  v38 = *(_BYTE *)(v7 + 648);
  v39 = *(_BYTE *)(v7 + 640);
  LOBYTE(v242) = (*(_BYTE *)(v7 + 632) << 7) | v37;
  BYTE1(v242) = (32 * (*(_BYTE *)(v7 + 680) & 1))
              | (16 * (*(_BYTE *)(v7 + 672) & 1))
              | (8 * (*(_BYTE *)(v7 + 664) & 1)) & 0xCF
              | (4 * (*(_BYTE *)(v7 + 656) & 1)) & 0xCF
              | (2 * (v38 & 1)) & 0xC3
              | v39 & 1
              | BYTE1(v242) & 0xC0;
  v242 = (*(unsigned __int16 *)(v7 + 688) << 14) | v242 & 0xC0003FFF;
  v40 = *(_BYTE *)(v7 + 720);
  v41 = *(_BYTE *)(v7 + 712);
  HIBYTE(v242) = (*(_BYTE *)(v7 + 704) << 7) | ((*(_BYTE *)(v7 + 696) & 1) << 6) | HIBYTE(v242) & 0x3F;
  v42 = (*(_BYTE *)(v7 + 768) << 7)
      | ((*(_BYTE *)(v7 + 760) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 752) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 744) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 736) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 728) & 1)) & 0xF
      | (2 * (v40 & 1)) & 3
      | v41 & 1;
  v43 = *(_BYTE *)(v7 + 776);
  v243 = v42;
  v44 = v26 & 3 | (4 * v30);
  v45 = (*(_BYTE *)(v7 + 832) & 1) << 6;
  v46 = (16 * (*(_BYTE *)(v7 + 808) & 1)) & 0x9F
      | (8 * (*(_BYTE *)(v7 + 800) & 1)) & 0x8F
      | (4 * (*(_BYTE *)(v7 + 792) & 1)) & 0x8F
      | (2 * (*(_BYTE *)(v7 + 784) & 1)) & 0x83
      | v43 & 1
      | v244 & 0x80;
  v301 = (32 * *(_BYTE *)(v7 + 816)) | v44;
  v47 = *(_BYTE *)(v7 + 848) & 1;
  v48 = (*(_BYTE *)(v7 + 840) << 7) | (v45 | (32 * (*(_BYTE *)(v7 + 824) & 1)) | v46) & 0x7F;
  v49 = *(_BYTE *)(v7 + 856);
  v244 = v48;
  v50 = ((*(_BYTE *)(v7 + 896) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 888) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 880) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 872) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 864) & 1)) & 0xF
      | (2 * (v49 & 1)) & 3
      | v47 & 3;
  v51 = *(_BYTE *)(v7 + 920);
  v52 = *(_BYTE *)(v7 + 912);
  v245 = (*(_BYTE *)(v7 + 904) << 7) | v50;
  v53 = (4 * (*(_BYTE *)(v7 + 928) & 1)) | (2 * (v51 & 1)) & 0xFB | v52 & 1 | v246 & 0xF8;
  v54 = *(_BYTE *)(v7 + 952);
  v246 = v53;
  v247 = *(_QWORD *)(v7 + 936);
  v248 = *(_QWORD *)(v7 + 944);
  v249 = v54 & 1 | v249 & 0xFE;
  v55 = *(_BYTE *)(v7 + 976);
  v56 = *(_BYTE *)(v7 + 984);
  v250 = *(_QWORD *)(v7 + 960);
  v57 = *(_BYTE *)(v7 + 1136);
  v251 = *(_QWORD *)(v7 + 968);
  v58 = v55 & 1 | v252 & 0xFC;
  v59 = *(_BYTE *)(v7 + 1032) & 1;
  v60 = (*(_BYTE *)(v7 + 1024) << 7)
      | ((*(_BYTE *)(v7 + 1016) & 1) << 6) & 0x7F
      | (32 * (*(_BYTE *)(v7 + 1008) & 1)) & 0x7F
      | (8 * (*(_BYTE *)(v7 + 1000) & 3)) & 0x1F
      | (4 * (*(_BYTE *)(v7 + 992) & 1)) & 0x1F
      | ((2 * (v56 & 1)) | v58) & 3;
  v61 = *(_BYTE *)(v7 + 1040);
  v252 = v60;
  v62 = ((*(_BYTE *)(v7 + 1080) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 1072) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 1064) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 1056) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 1048) & 1)) & 0xF
      | (2 * (v61 & 1)) & 3
      | v59 & 3;
  v63 = *(_BYTE *)(v7 + 1104);
  v64 = *(_BYTE *)(v7 + 1096);
  v253 = (*(_BYTE *)(v7 + 1088) << 7) | v62;
  v65 = (8 * (*(_BYTE *)(v7 + 1120) & 1))
      | (4 * (*(_BYTE *)(v7 + 1112) & 1))
      | (2 * (v63 & 1)) & 0xF3
      | v64 & 1
      | v254 & 0xF0;
  v66 = *(_BYTE *)(v7 + 1128) & 7;
  LOBYTE(v254) = ((*(_BYTE *)(v7 + 1152) & 1) << 6)
               | (32 * (*(_BYTE *)(v7 + 1144) & 1)) & 0xBF
               | (16 * (v57 & 1)) & 0xBF
               | v65 & 0x8F;
  v254 = ((*(_WORD *)(v7 + 1160) & 0xF) << 7) | v254 & 0xF87F;
  v67 = (8 * (*(_BYTE *)(v7 + 1168) & 1)) & 0xCF | HIBYTE(v254) & 0xC7;
  v68 = v66 | (8 * (*(_BYTE *)(v7 + 1176) & 3));
  v69 = *(_BYTE *)(v7 + 1200);
  v302 = (32 * *(_BYTE *)(v7 + 1184)) | v68;
  v70 = (32 * (v69 & 1)) | (16 * (*(_BYTE *)(v7 + 1192) & 1)) | v67;
  v71 = *(_BYTE *)(v7 + 1216);
  v72 = *(_BYTE *)(v7 + 1232) & 1;
  HIBYTE(v254) = v70;
  v255 = *(_QWORD *)(v7 + 1208);
  v73 = v71 & 1 | v256 & 0xFE;
  v74 = *(_BYTE *)(v7 + 1240);
  v256 = v73;
  v257 = *(_QWORD *)(v7 + 1224);
  v75 = v72 | v258 & 0xFC;
  v76 = *(_BYTE *)(v7 + 1288);
  v77 = (32 * (*(_BYTE *)(v7 + 1272) & 1))
      | (16 * (*(_BYTE *)(v7 + 1264) & 1))
      | (8 * (*(_BYTE *)(v7 + 1256) & 1)) & 0xCF
      | (4 * (*(_BYTE *)(v7 + 1248) & 1)) & 0xCF
      | ((2 * (v74 & 1)) | v75) & 0xC3;
  v78 = *(_BYTE *)(v7 + 1296);
  v258 = v77;
  v259 = *(_QWORD *)(v7 + 1280);
  v79 = v76 & 1 | v260 & 0xFC;
  v80 = *(_BYTE *)(v7 + 1368);
  v81 = (32 * (*(_BYTE *)(v7 + 1328) & 1))
      | (16 * (*(_BYTE *)(v7 + 1320) & 1))
      | (8 * (*(_BYTE *)(v7 + 1312) & 1)) & 0xCF
      | (4 * (*(_BYTE *)(v7 + 1304) & 1)) & 0xCF
      | ((2 * (v78 & 1)) | v79) & 0xC3;
  v82 = *(_BYTE *)(v7 + 1376);
  v260 = v81;
  v261 = *(_QWORD *)(v7 + 1336);
  v262 = *(_QWORD *)(v7 + 1344);
  v263 = *(_QWORD *)(v7 + 1352);
  v264 = *(_QWORD *)(v7 + 1360);
  v83 = ((*(_BYTE *)(v7 + 1416) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 1408) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 1400) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 1392) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 1384) & 1)) & 0xF
      | (2 * (v82 & 1)) & 3
      | v80 & 1;
  v84 = *(_QWORD *)(v7 + 1440);
  v85 = *(_BYTE *)(v7 + 1432);
  v265 = (*(_BYTE *)(v7 + 1424) << 7) | v83;
  v303 = v84;
  v86 = *(_BYTE *)(v7 + 1576);
  v87 = *(_BYTE *)(v7 + 1584);
  LOBYTE(v84) = *(_BYTE *)(v7 + 1504);
  v88 = (*(_BYTE *)(v7 + 1496) << 7)
      | ((*(_BYTE *)(v7 + 1488) & 1) << 6)
      | (32 * (*(_BYTE *)(v7 + 1480) & 1)) & 0x3F
      | (16 * (*(_BYTE *)(v7 + 1472) & 1)) & 0x3F
      | (8 * (*(_BYTE *)(v7 + 1464) & 1)) & 0xF
      | (4 * (*(_BYTE *)(v7 + 1456) & 1)) & 0xF
      | (2 * (*(_BYTE *)(v7 + 1448) & 1)) & 3
      | v85 & 1;
  v89 = *(_BYTE *)(v7 + 1520);
  v266 = v88;
  v90 = v84 & 1 | v267 & 0xFE;
  LOBYTE(v84) = *(_BYTE *)(v7 + 1528);
  v267 = v90;
  v268 = *(_QWORD *)(v7 + 1512);
  v91 = (32 * (*(_BYTE *)(v7 + 1560) & 1))
      | (16 * (*(_BYTE *)(v7 + 1552) & 1))
      | (8 * (*(_BYTE *)(v7 + 1544) & 1)) & 0xCF
      | (4 * (*(_BYTE *)(v7 + 1536) & 1)) & 0xCF
      | (2 * (v84 & 1)) & 0xC3
      | v89 & 1
      | v269 & 0xC0;
  v92 = *(_BYTE *)(v7 + 1568) & 3;
  v93 = ((v86 & 1) << 6) | v91 & 0x3F;
  v94 = *(_BYTE *)(v7 + 1600);
  v95 = (v87 << 7) | v93;
  v96 = *(_BYTE *)(v7 + 1592);
  v269 = v95;
  v97 = v96 & 1 | v270 & 0xFC;
  v98 = *(_BYTE *)(v7 + 1656) & 1;
  v270 = ((*(_BYTE *)(v7 + 1640) & 1) << 6)
       | (32 * (*(_BYTE *)(v7 + 1632) & 1)) & 0xBF
       | (16 * (*(_BYTE *)(v7 + 1624) & 1)) & 0xBF
       | (8 * (*(_BYTE *)(v7 + 1616) & 1)) & 0x8F
       | (4 * (*(_BYTE *)(v7 + 1608) & 1)) & 0x8F
       | ((2 * (v94 & 1)) | v97) & 0x83;
  v271 = *(_QWORD *)(v7 + 1648);
  LOBYTE(v84) = v92 | v304 & 0xF0;
  v99 = 4 * (*(_BYTE *)(v7 + 1744) & 1);
  v100 = *(_BYTE *)(v7 + 1728);
  v101 = (*(_BYTE *)(v7 + 1712) << 7)
       | ((*(_BYTE *)(v7 + 1704) & 1) << 6)
       | (32 * (*(_BYTE *)(v7 + 1696) & 1)) & 0x3F
       | (16 * (*(_BYTE *)(v7 + 1688) & 1)) & 0x3F
       | (8 * (*(_BYTE *)(v7 + 1680) & 1)) & 0xF
       | (4 * (*(_BYTE *)(v7 + 1672) & 1)) & 0xF
       | (2 * (*(_BYTE *)(v7 + 1664) & 1)) & 3
       | v98 & 3;
  v102 = *(_BYTE *)(v7 + 1720);
  v272 = v101;
  v103 = v99 | (2 * (v100 & 1)) & 0xF3 | v102 & 1 | v273 & 0xF0;
  v104 = 16 * (*(_BYTE *)(v7 + 1768) & 1);
  v105 = ((8 * (*(_BYTE *)(v7 + 1752) & 1)) | v103) & 0xCF;
  LOBYTE(v304) = (16 * (*(_BYTE *)(v7 + 1760) & 7)) | ((4 * (*(_BYTE *)(v7 + 1736) & 3)) | v84) & 0x8F;
  LOBYTE(v84) = *(_BYTE *)(v7 + 1808);
  v106 = (*(_BYTE *)(v7 + 1792) << 7)
       | ((*(_BYTE *)(v7 + 1784) & 1) << 6)
       | ((32 * (*(_BYTE *)(v7 + 1776) & 1)) | v104 | v105) & 0x3F;
  v107 = *(_BYTE *)(v7 + 1800);
  v273 = v106;
  v108 = (32 * (*(_BYTE *)(v7 + 1840) & 1))
       | (16 * (*(_BYTE *)(v7 + 1832) & 1))
       | (8 * (*(_BYTE *)(v7 + 1824) & 1)) & 0xCF
       | (4 * (*(_BYTE *)(v7 + 1816) & 1)) & 0xCF
       | (2 * (v84 & 1)) & 0xC3
       | v107 & 1
       | v274 & 0xC0;
  v304 = ((*(_WORD *)(v7 + 1848) & 3) << 7) | v304 & 0xFE7F;
  LOBYTE(v84) = *(_BYTE *)(v7 + 1856);
  v109 = *(_BYTE *)(v7 + 1864);
  v110 = *(_BYTE *)(v7 + 1904);
  v228 = 244;
  v111 = ((v84 & 1) << 6) | v108 & 0x3F;
  LOBYTE(v84) = *(_BYTE *)(v7 + 1880);
  v112 = 2 * (*(_BYTE *)(v7 + 1912) & 1);
  v274 = (v109 << 7) | v111;
  v113 = *(_BYTE *)(v7 + 1896) & 3;
  HIBYTE(v304) = (32 * (*(_BYTE *)(v7 + 1888) & 3))
               | (8 * (v84 & 3)) & 0x9F
               | (2 * (*(_BYTE *)(v7 + 1872) & 3)) & 0x9F
               | HIBYTE(v304) & 0x81;
  LOBYTE(v84) = 2 * (*(_BYTE *)(v7 + 1984) & 1);
  v114 = ((*(_BYTE *)(v7 + 1952) & 1) << 6)
       | (32 * (*(_BYTE *)(v7 + 1944) & 1)) & 0x3F
       | (16 * (*(_BYTE *)(v7 + 1936) & 1)) & 0x3F
       | (8 * (*(_BYTE *)(v7 + 1928) & 1)) & 0xF
       | (4 * (*(_BYTE *)(v7 + 1920) & 1)) & 0xF
       | v112 & 3
       | v110 & 1;
  v115 = *(_BYTE *)(v7 + 1968);
  v116 = *(_BYTE *)(v7 + 1976);
  v275 = (*(_BYTE *)(v7 + 1960) << 7) | v114;
  v117 = v84 | v115 & 1 | v276 & 0xFC;
  LOBYTE(v84) = (16 * (*(_BYTE *)(v7 + 2000) & 3)) & 0x3F | (4 * (v116 & 3)) & 0xF | v113 & 0xF;
  v276 = (*(_BYTE *)(v7 + 2040) << 7)
       | ((*(_BYTE *)(v7 + 2032) & 1) << 6)
       | (32 * (*(_BYTE *)(v7 + 2024) & 1)) & 0x3F
       | (16 * (*(_BYTE *)(v7 + 2016) & 1)) & 0x3F
       | (8 * (*(_BYTE *)(v7 + 2008) & 1)) & 0xF
       | (4 * (*(_BYTE *)(v7 + 1992) & 1)) & 0xF
       | v117 & 3;
  v118 = *(_BYTE *)(v7 + 2056) & 7;
  LOBYTE(v305) = (*(_BYTE *)(v7 + 2048) << 6) | v84;
  v119 = v118 | BYTE1(v305) & 0xC0;
  LOBYTE(v84) = *(_BYTE *)(v7 + 2080);
  v120 = *(_BYTE *)(v7 + 2072) & 1;
  BYTE1(v305) = (8 * (*(_BYTE *)(v7 + 2064) & 7)) | v119;
  v305 = ((*(_DWORD *)(v7 + 2088) & 7) << 14) | v305 & 0xFFFE3FFF;
  BYTE2(v305) = (16 * (*(_BYTE *)(v7 + 2104) & 7)) | (2 * (*(_BYTE *)(v7 + 2096) & 7)) | BYTE2(v305) & 0x81;
  HIWORD(v305) = ((*(_WORD *)(v7 + 2112) & 7) << 7) | HIWORD(v305) & 0xFC7F;
  v121 = (8 * (*(_BYTE *)(v7 + 2128) & 1))
       | (4 * (*(_BYTE *)(v7 + 2120) & 1))
       | (2 * (v84 & 1)) & 0xF3
       | v120 & 0xF3
       | v277 & 0xF0;
  LOBYTE(v84) = *(_BYTE *)(v7 + 2144);
  v277 = v121;
  v122 = (16 * (v84 & 3)) | (4 * (*(_BYTE *)(v7 + 2136) & 3)) | HIBYTE(v305) & 0xC3;
  v278 = *(_QWORD *)(v7 + 2152);
  v279 = *(_QWORD *)(v7 + 2160);
  LOBYTE(v84) = *(_BYTE *)(v7 + 2176);
  HIBYTE(v305) = (*(_BYTE *)(v7 + 2168) << 6) | v122 & 0x3F;
  v123 = *(_BYTE *)(v7 + 2272);
  v124 = v84 & 1 | v280 & 0xFE;
  LOBYTE(v84) = *(_BYTE *)(v7 + 2224);
  v125 = *(_BYTE *)(v7 + 2184) & 3;
  v126 = *(_BYTE *)(v7 + 2264) & 1;
  v280 = v124;
  v281 = *(_QWORD *)(v7 + 2192);
  v282 = *(_QWORD *)(v7 + 2200);
  v283 = *(_QWORD *)(v7 + 2208);
  v284 = *(_QWORD *)(v7 + 2216);
  v127 = v84 & 1 | v285 & 0xFE;
  LOBYTE(v84) = *(_BYTE *)(v7 + 2256);
  v285 = v127;
  v286 = *(_QWORD *)(v7 + 2232);
  v287 = *(_QWORD *)(v7 + 2240);
  v288 = *(_QWORD *)(v7 + 2248);
  v128 = v126 | v289 & 0xFC;
  v129 = *(_BYTE *)(v7 + 2320) & 1;
  LOBYTE(v289) = (*(_BYTE *)(v7 + 2312) << 6)
               | (32 * (*(_BYTE *)(v7 + 2304) & 1)) & 0x3F
               | (16 * (*(_BYTE *)(v7 + 2296) & 1)) & 0x3F
               | (8 * (*(_BYTE *)(v7 + 2288) & 1)) & 0xF
               | (4 * (*(_BYTE *)(v7 + 2280) & 1)) & 0xF
               | ((2 * (v123 & 1)) | v128) & 3;
  BYTE1(v289) = (32 * (*(_BYTE *)(v7 + 2360) & 1))
              | (16 * (*(_BYTE *)(v7 + 2352) & 1))
              | (8 * (*(_BYTE *)(v7 + 2344) & 1)) & 0xCF
              | (4 * (*(_BYTE *)(v7 + 2336) & 1)) & 0xCF
              | (2 * (*(_BYTE *)(v7 + 2328) & 1)) & 0xC3
              | v129 & 0xC3
              | BYTE1(v289) & 0xC0;
  v130 = *(_DWORD *)(v7 + 2376);
  v306 = (16 * *(_BYTE *)(v7 + 2368)) | v125 | (4 * (v84 & 3));
  v289 = ((v130 & 0x1F) << 14) | v289 & 0xFFF83FFF;
  v131 = *(_BYTE *)(v7 + 2392);
  LOBYTE(v84) = *(_BYTE *)(v7 + 2400);
  v290 = *(_QWORD *)(v7 + 2384);
  LOBYTE(v130) = v131 & 1 | v291 & 0xFC;
  v132 = *(_BYTE *)(v7 + 2408) & 3 | v307 & 0xF0;
  v133 = *(_BYTE *)(v7 + 2480) & 1;
  LOBYTE(v130) = (32 * (*(_BYTE *)(v7 + 2440) & 1))
               | (16 * (*(_BYTE *)(v7 + 2432) & 1))
               | (8 * (*(_BYTE *)(v7 + 2424) & 1)) & 0xCF
               | (4 * (*(_BYTE *)(v7 + 2416) & 1)) & 0xCF
               | ((2 * (v84 & 1)) | v130) & 0xC3;
  LOBYTE(v84) = *(_BYTE *)(v7 + 2448);
  v291 = v130;
  LOBYTE(v84) = (4 * (v84 & 3)) | v132;
  v134 = *(_BYTE *)(v7 + 2464) & 3;
  v292 = *(_QWORD *)(v7 + 2456);
  LOBYTE(v84) = ((*(_BYTE *)(v7 + 2472) & 1) << 6) & 0x7F | (16 * v134) & 0x7F | v84 & 0xF;
  v293 = (32 * (*(_BYTE *)(v7 + 2520) & 1))
       | (16 * (*(_BYTE *)(v7 + 2512) & 1))
       | (8 * (*(_BYTE *)(v7 + 2504) & 1)) & 0xCF
       | (4 * (*(_BYTE *)(v7 + 2496) & 1)) & 0xCF
       | (2 * (*(_BYTE *)(v7 + 2488) & 1)) & 0xC3
       | v133 & 0xC3
       | v293 & 0xC0;
  v294 = *(_QWORD *)(v7 + 2528);
  v295 = *(_QWORD *)(v7 + 2536);
  v296 = *(_QWORD *)(v7 + 2544);
  v297 = *(_QWORD *)(v7 + 2552);
  v135 = *(_QWORD *)(v7 + 2568);
  v307 = (*(_BYTE *)(v7 + 2560) << 7) | v84;
  LOBYTE(v84) = *(_BYTE *)(v7 + 2584);
  v298 = v135;
  v299 = *(_QWORD *)(v7 + 2576);
  LOBYTE(v135) = (v25 << 6) | v300 & 0x3E;
  v136 = *(_BYTE *)(v7 + 2608);
  LOBYTE(v135) = v84 & 1 | v135;
  LOBYTE(v84) = *(_BYTE *)(v7 + 2600);
  v340[17] = *(_QWORD *)(v7 + 2592) != 0;
  v137 = *(_QWORD *)(v7 + 2632) == 0;
  v300 = (32 * (*(_BYTE *)(v7 + 2624) & 1))
       | (16 * (*(_BYTE *)(v7 + 2616) & 1))
       | (8 * (v136 & 1)) & 0xCF
       | (4 * (v84 & 1)) & 0xCF
       | v135 & 0xC3;
  if ( v137 )
    v138 = v308 & 0xFFFFFFFFFFFFFFFELL;
  else
    v138 = v308 | 1;
  v139 = v138 & 0xFFFFFFFFFFFFFFFDLL;
  if ( *(_QWORD *)(v7 + 2640) )
    v139 = v138 | 2;
  v140 = v139 & 0xFFFFFFFFFFFFFFFBLL;
  if ( *(_QWORD *)(v7 + 2648) )
    v140 = v139 | 4;
  v141 = v140 & 0xFFFFFFFFFFFFFFF7LL;
  if ( *(_QWORD *)(v7 + 2656) )
    v141 = v140 | 8;
  v142 = v141 & 0xFFFFFFFFFFFFFFEFLL;
  if ( *(_QWORD *)(v7 + 2664) )
    v142 = v141 | 0x10;
  v143 = v142 & 0xFFFFFFFFFFFFFFDFLL;
  if ( *(_QWORD *)(v7 + 2672) )
    v143 = v142 | 0x20;
  v144 = v143 & 0xFFFFFFFFFFFFFFBFLL;
  if ( *(_QWORD *)(v7 + 2680) )
    v144 = v143 | 0x40;
  v145 = v144;
  LOBYTE(v145) = v144 & 0x7F;
  if ( *(_QWORD *)(v7 + 2688) )
  {
    LOBYTE(v144) = v144 | 0x80;
    v145 = v144;
  }
  v146 = v145;
  BYTE1(v146) = BYTE1(v145) & 0xFE;
  if ( *(_QWORD *)(v7 + 2696) )
  {
    v146 = v145;
    BYTE1(v146) = BYTE1(v145) | 1;
  }
  v147 = v146;
  BYTE1(v147) = BYTE1(v146) & 0xFB;
  if ( *(_QWORD *)(v7 + 2704) )
  {
    BYTE1(v146) |= 4u;
    v147 = v146;
  }
  v148 = v147;
  BYTE1(v148) = BYTE1(v147) & 0xF7;
  if ( *(_QWORD *)(v7 + 2712) )
  {
    v148 = v147;
    BYTE1(v148) = BYTE1(v147) | 8;
  }
  v149 = v148;
  BYTE1(v149) = BYTE1(v148) & 0xEF;
  if ( *(_QWORD *)(v7 + 2720) )
  {
    BYTE1(v148) |= 0x10u;
    v149 = v148;
  }
  v150 = v149;
  BYTE1(v150) = BYTE1(v149) & 0xDF;
  if ( *(_QWORD *)(v7 + 2728) )
  {
    v150 = v149;
    BYTE1(v150) = BYTE1(v149) | 0x20;
  }
  v151 = v150;
  BYTE1(v151) = BYTE1(v150) & 0xBF;
  if ( *(_QWORD *)(v7 + 2736) )
  {
    BYTE1(v150) |= 0x40u;
    v151 = v150;
  }
  v152 = v151;
  BYTE1(v152) = BYTE1(v151) & 0x7F;
  if ( *(_QWORD *)(v7 + 2744) )
  {
    v152 = v151;
    BYTE1(v152) = BYTE1(v151) | 0x80;
  }
  v153 = v152 & 0xFFFFFFFFFFFEFFFFLL;
  if ( *(_QWORD *)(v7 + 2752) )
    v153 = v152 | 0x10000;
  v154 = v153 & 0xFFFFFFFFFFFDFFFFLL;
  if ( *(_QWORD *)(v7 + 2760) )
    v154 = v153 | 0x20000;
  v155 = v154 & 0xFFFFFFFFFFFBFFFFLL;
  if ( *(_QWORD *)(v7 + 2768) )
    v155 = v154 | 0x40000;
  v156 = v155 & 0xFFFFFFFFFFF7FFFFLL;
  if ( *(_QWORD *)(v7 + 2776) )
    v156 = v155 | 0x80000;
  v157 = v156 & 0xFFFFFFFFFFEFFFFFLL;
  if ( *(_QWORD *)(v7 + 2784) )
    v157 = v156 | 0x100000;
  v158 = v157 & 0xFFFFFFFFFFDFFFFFLL;
  if ( *(_QWORD *)(v7 + 2792) )
    v158 = v157 | 0x200000;
  v159 = v158 & 0xFFFFFFFFFFBFFFFFLL;
  if ( *(_QWORD *)(v7 + 2800) )
    v159 = v158 | 0x400000;
  v160 = v159 & 0xFFFFFFFFFF7FFFFFLL;
  if ( *(_QWORD *)(v7 + 2808) )
    v160 = v159 | 0x800000;
  v161 = v160 & 0xFFFFFFFFFEFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2816) )
    v161 = v160 | 0x1000000;
  v162 = v161 & 0xFFFFFFFFFDFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2824) )
    v162 = v161 | 0x2000000;
  v163 = v162 & 0xFFFFFFFFFBFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2832) )
    v163 = v162 | 0x4000000;
  v164 = v163 & 0xFFFFFFFFF7FFFFFFLL;
  if ( *(_QWORD *)(v7 + 2840) )
    v164 = v163 | 0x8000000;
  v165 = v164 & 0xFFFFFFFFEFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2848) )
    v165 = v164 | 0x10000000;
  v166 = v165 & 0xFFFFFFFFDFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2856) )
    v166 = v165 | 0x20000000;
  v167 = v166 & 0xFFFFFFFFBFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2864) )
    v167 = v166 | 0x40000000;
  v168 = v167 & 0xFFFFFFFF7FFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2872) )
    v168 = v167 | 0x80000000;
  v169 = v168 & 0xFFFFFFFEFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2880) )
    v169 = v168 | 0x100000000LL;
  v170 = v169 & 0xFFFFFFFBFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2888) )
    v170 = v169 | 0x400000000LL;
  v171 = v170 & 0xFFFFFFF7FFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2896) )
    v171 = v170 | 0x800000000LL;
  v172 = v171 & 0xFFFFFFEFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2904) )
    v172 = v171 | 0x1000000000LL;
  v173 = v172 & 0xFFFFFFDFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2912) )
    v173 = v172 | 0x2000000000LL;
  v174 = v173 & 0xFFFFFFBFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2920) )
    v174 = v173 | 0x4000000000LL;
  v175 = v174 & 0xFFFFFF7FFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2928) )
    v175 = v174 | 0x8000000000LL;
  v176 = v175 & 0xFFFFFDFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2936) )
    v176 = v175 | 0x20000000000LL;
  v177 = v176 & 0xFFFFFBFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2944) )
    v177 = v176 | 0x40000000000LL;
  v178 = v177 & 0xFFFFF7FFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2952) )
    v178 = v177 | 0x80000000000LL;
  v179 = v178 & 0xFFFFEFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2960) )
    v179 = v178 | 0x100000000000LL;
  v180 = v179 & 0xFFFFDFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2968) )
    v180 = v179 | 0x200000000000LL;
  v181 = v180 & 0xFFFFBFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2976) )
    v181 = v180 | 0x400000000000LL;
  v182 = v181 & 0xFFFF7FFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2984) )
    v182 = v181 | 0x800000000000LL;
  v183 = v182 & 0xFFFEFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 2992) )
    v183 = v182 | 0x1000000000000LL;
  v184 = v183 & 0xFFFDFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3000) )
    v184 = v183 | 0x2000000000000LL;
  v185 = v184 & 0xFFFBFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3008) )
    v185 = v184 | 0x4000000000000LL;
  v186 = v185 & 0xFFF7FFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3016) )
    v186 = v185 | 0x8000000000000LL;
  v187 = v186 & 0xFFEFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3024) )
    v187 = v186 | 0x10000000000000LL;
  v188 = v187 & 0xFFDFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3032) )
    v188 = v187 | 0x20000000000000LL;
  v189 = v188 & 0xFFBFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3040) )
    v189 = v188 | 0x40000000000000LL;
  v190 = v189 & 0xFEFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3048) )
    v190 = v189 | 0x100000000000000LL;
  v191 = v190 & 0xFDFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3056) )
    v191 = v190 | 0x200000000000000LL;
  v192 = v191 & 0xFBFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3064) )
    v192 = v191 | 0x400000000000000LL;
  v193 = v192 & 0xDFFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3072) )
    v193 = v192 | 0x2000000000000000LL;
  v194 = v193 & 0xBFFFFFFFFFFFFFFFLL;
  if ( *(_QWORD *)(v7 + 3080) )
    v194 = v193 | 0x4000000000000000LL;
  v308 = v194;
  v195 = v309 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_QWORD *)(v7 + 3088) )
    v195 = v309 | 1;
  v196 = v195 & 0xFFFFFFFFFFFFFFF7LL;
  if ( *(_QWORD *)(v7 + 3096) )
    v196 = v195 | 8;
  v197 = v196 & 0xFFFFFFFFFFFFFFBFLL;
  if ( *(_QWORD *)(v7 + 3104) )
    v197 = v196 | 0x40;
  v198 = v197;
  LOBYTE(v198) = v197 & 0x7F;
  if ( *(_QWORD *)(v7 + 3112) )
  {
    LOBYTE(v197) = v197 | 0x80;
    v198 = v197;
  }
  v199 = v198;
  BYTE1(v199) = BYTE1(v198) & 0xFD;
  if ( *(_QWORD *)(v7 + 3120) )
  {
    v199 = v198;
    BYTE1(v199) = BYTE1(v198) | 2;
  }
  v200 = *(_QWORD *)(v7 + 3128);
  v309 = v199;
  v228 = 392;
  v201 = v200;
  if ( (_DWORD)v200 )
  {
    do
    {
      while ( 1 )
      {
        sub_1EAC540((__m128i **)v231, a1, &v228);
        sub_A82C60((__int64)v325, (__m128i *)v231);
        if ( *(_BYTE **)v231 == &v231[16] )
          break;
        operator delete(*(void **)v231);
        if ( !--v201 )
          goto LABEL_128;
      }
      --v201;
    }
    while ( v201 );
LABEL_128:
    v202 = v228 + 1;
  }
  else
  {
    v202 = 393;
  }
  v228 = v202;
  *(_QWORD *)&v203 = sub_1EAC8F0(a1, &v228);
  *(_OWORD *)&v231[4] = v203;
  *(_DWORD *)v231 = v204;
  si128 = _mm_load_si128((const __m128i *)v231);
  v316 = HIDWORD(v203);
  v315 = si128;
  sub_1EAC540((__m128i **)v231, a1, &v228);
  sub_A0AAD0((__int64)&v323, v231);
  if ( *(_BYTE **)v231 != &v231[16] )
    operator delete(*(void **)v231);
  v206 = *a1;
  v207 = v228 + 1;
  v208 = *(_QWORD *)(*a1 + 8LL * v228++);
  v209 = v208;
  if ( (_DWORD)v208 )
  {
    do
    {
      while ( 1 )
      {
        sub_1EAC540((__m128i **)v231, a1, &v228);
        sub_A82C60((__int64)v326, (__m128i *)v231);
        if ( *(_BYTE **)v231 == &v231[16] )
          break;
        operator delete(*(void **)v231);
        if ( !--v209 )
          goto LABEL_134;
      }
      --v209;
    }
    while ( v209 );
LABEL_134:
    v207 = v228;
    v206 = *a1;
  }
  v210 = v207 + 2;
  v327 = *(_QWORD *)(v206 + 8LL * v207) != 0;
  v211 = *(_QWORD *)(v206 + 8LL * (v207 + 1));
  v228 = v210;
  v212 = v211;
  if ( (_DWORD)v211 )
  {
    while ( 1 )
    {
      sub_1EAC540((__m128i **)v229, a1, &v228);
      sub_22B9ED0(v231, v229);
      v213 = v332;
      if ( v332 == v333 )
      {
        sub_1EC82F0((void ***)&v331, v332, (__m128i *)v231);
        if ( *(_BYTE **)v231 == &v231[16] )
          goto LABEL_140;
        operator delete(*(void **)v231);
        v214 = v229[0];
        if ( v229[0] != v230 )
          goto LABEL_141;
LABEL_166:
        if ( !--v212 )
          break;
      }
      else
      {
        v332->m128i_i64[0] = (__int64)v332[1].m128i_i64;
        if ( *(_BYTE **)v231 == &v231[16] )
        {
          v213[1] = _mm_load_si128((const __m128i *)&v231[16]);
        }
        else
        {
          v213->m128i_i64[0] = *(_QWORD *)v231;
          v213[1].m128i_i64[0] = *(_QWORD *)&v231[16];
        }
        v213->m128i_i64[1] = *(_QWORD *)&v231[8];
        v213[2] = _mm_load_si128(&v232);
        v213[3].m128i_i32[0] = v233;
        v213[3].m128i_i32[1] = v234;
        v332 = (__m128i *)((char *)v332 + 56);
LABEL_140:
        v214 = v229[0];
        if ( v229[0] == v230 )
          goto LABEL_166;
LABEL_141:
        operator delete(v214);
        if ( !--v212 )
          break;
      }
    }
  }
  sub_1EAC540((__m128i **)v231, a1, &v228);
  sub_A0AAD0((__int64)&v334, v231);
  if ( *(_BYTE **)v231 != &v231[16] )
    operator delete(*(void **)v231);
  v215 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a5 + 40LL))(
           a5,
           v235,
           a2,
           a3,
           a4,
           a6);
  if ( v341 != &v342 )
    operator delete(v341);
  if ( v339 != v340 )
    operator delete(v339);
  sub_9B4A30(&v338);
  if ( v336 != &v337 )
    operator delete(v336);
  if ( v334 != &v335 )
    operator delete(v334);
  v216 = v332;
  v217 = (void **)v331;
  if ( v332 != v331 )
  {
    do
    {
      while ( *v217 != v217 + 2 )
      {
        operator delete(*v217);
        v217 += 7;
        if ( v217 == (void **)v216 )
          goto LABEL_155;
      }
      v217 += 7;
    }
    while ( v216 != (const __m128i *)v217 );
LABEL_155:
    v217 = (void **)v331;
  }
  if ( v217 )
    operator delete(v217);
  v218 = (char *)v330;
  if ( v330 )
  {
    while ( 1 )
    {
      sub_998560((__int64)&v329, *((_QWORD **)v218 + 3));
      v219 = *((char **)v218 + 8);
      v220 = *((char **)v218 + 2);
      if ( v219 != v218 + 80 )
        operator delete(v219);
      v221 = *((char **)v218 + 4);
      if ( v221 == v218 + 48 )
      {
        operator delete(v218);
        if ( !v220 )
          break;
      }
      else
      {
        operator delete(v221);
        operator delete(v218);
        if ( !v220 )
          break;
      }
      v218 = v220;
    }
  }
  sub_9B4A30(&v328);
  sub_9B4A30(v326);
  sub_9B4A30(v325);
  if ( v323 != &v324 )
    operator delete(v323);
  if ( v321 != &v322 )
    operator delete(v321);
  if ( v319 != &v320 )
    operator delete(v319);
  if ( v317 != &v318 )
    operator delete(v317);
  sub_9B4A30(&v314);
  sub_9B4A30(&v313);
  sub_9B4A30(&v312);
  sub_9B4A30(&v311);
  sub_9B4A30(&v310);
  return v215;
}
