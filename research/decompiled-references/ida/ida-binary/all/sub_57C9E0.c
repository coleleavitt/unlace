__int64 __fastcall sub_57C9E0(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int32 *a4, _DWORD *a5)
{
  __int64 v6; // rbp
  unsigned int *v7; // r14
  __int64 v8; // rax
  size_t v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  unsigned __int64 v13; // rbx
  __m128i si128; // xmm4
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rbp
  unsigned int v18; // r14d
  unsigned int v19; // r8d
  int v20; // r12d
  int v21; // ebx
  unsigned int v22; // esi
  char *v23; // rdi
  __int64 v24; // rax
  unsigned int v25; // edx
  char *v26; // rax
  int v27; // ecx
  char *v28; // rax
  __int64 v29; // r11
  __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned int v32; // r8d
  char *v33; // rdi
  __m128i *v34; // rax
  __m128i v35; // xmm0
  int v36; // eax
  _DWORD *v37; // rdx
  __int32 v38; // eax
  __int64 v39; // rax
  unsigned int v40; // esi
  __m128i *v41; // rdx
  unsigned int v42; // ecx
  unsigned int v43; // ebx
  __m128i v44; // xmm3
  unsigned __int16 v45; // bx
  unsigned int v46; // edx
  unsigned int v47; // r9d
  char *v48; // r15
  unsigned __int16 v49; // cx
  __int16 v50; // si
  char *v51; // rax
  char *v52; // rax
  unsigned __int64 v53; // r9
  unsigned int v54; // eax
  unsigned int v55; // r12d
  unsigned int v56; // r13d
  char *v57; // rdi
  char *v58; // r13
  bool v59; // zf
  unsigned int v60; // r10d
  unsigned int v61; // ebx
  unsigned __int16 *v62; // rax
  __int64 v63; // rax
  unsigned int v64; // ebx
  unsigned int v65; // edi
  __int64 v66; // rax
  __int64 v67; // r9
  int v68; // r13d
  __int64 v69; // rax
  unsigned __int16 *v70; // rdx
  int v71; // eax
  __int64 v72; // rax
  unsigned __int64 v73; // r9
  unsigned __int16 *v74; // r13
  __m128i *v75; // rdi
  unsigned int v76; // r14d
  unsigned int v77; // r15d
  __m128i v78; // xmm5
  __m128i v79; // xmm6
  __int64 v80; // rax
  _WORD *v81; // rax
  int v82; // r10d
  unsigned int v83; // eax
  unsigned int v84; // r15d
  __m128i *v85; // rax
  unsigned int v86; // eax
  unsigned int v87; // r12d
  __int64 v88; // rbp
  __int64 v89; // rbx
  __m128i *v90; // rbx
  unsigned int v91; // edx
  char *v92; // rax
  _WORD *v93; // rax
  unsigned __int64 v94; // r9
  __int64 v95; // rax
  void *v96; // rdi
  int v98; // r14d
  __int32 v99; // r9d
  __int32 v100; // ebp
  unsigned int v101; // eax
  unsigned int v102; // ebx
  __int64 v103; // r12
  unsigned int v104; // r15d
  __int64 v105; // r10
  __m128i *v106; // r12
  __m128i v107; // xmm3
  __m128i v108; // xmm4
  __int64 v109; // r9
  unsigned int v110; // ecx
  unsigned int v111; // r11d
  unsigned __int16 *v112; // r14
  unsigned __int16 *v113; // rdx
  unsigned int v114; // r15d
  unsigned __int16 v115; // si
  __int64 v116; // rbp
  int v117; // ebx
  unsigned int v118; // r8d
  __int64 v119; // rcx
  __int64 v120; // rdx
  unsigned __int16 *v121; // rdi
  unsigned __int16 v122; // ax
  unsigned __int16 v123; // ax
  unsigned int v124; // esi
  unsigned int v125; // edx
  unsigned int v126; // ebx
  __m128i *v127; // rdx
  _BYTE *v128; // rax
  _BYTE *v129; // r12
  int v130; // eax
  unsigned int v131; // r13d
  int v132; // ecx
  unsigned int v133; // r14d
  __int64 v134; // rsi
  unsigned __int16 *v135; // rdi
  unsigned __int16 v136; // dx
  unsigned __int16 v137; // dx
  __int64 v138; // rbx
  __int16 *v139; // rdi
  __int16 v140; // si
  unsigned __int16 *v141; // r12
  unsigned __int16 *v142; // r13
  unsigned int v143; // edx
  int v144; // eax
  __int64 v145; // r9
  __int64 v146; // rdx
  __int16 *v147; // r10
  __int16 *v148; // r8
  __int64 v149; // r10
  __int16 v150; // di
  unsigned __int16 *v151; // rbp
  unsigned __int16 *v152; // rbx
  unsigned int v153; // esi
  int v154; // edx
  __int64 v155; // r9
  __int64 v156; // rsi
  __int16 *v157; // r11
  __int64 v158; // rdx
  __int64 v159; // rax
  unsigned int v160; // ebp
  __int64 v161; // r12
  void *v162; // rdi
  __int64 v163; // rbx
  unsigned int v164; // r15d
  const void *v165; // rsi
  _WORD *v166; // rbp
  char *v167; // rcx
  __int64 v168; // rax
  int v169; // r15d
  __int64 v170; // r14
  char v171; // dl
  char *v172; // rsi
  unsigned __int8 v173; // r8
  int v174; // r11d
  __int64 v175; // rsi
  __int64 v176; // rdx
  int v177; // esi
  unsigned __int16 *v178; // r14
  unsigned __int8 v179; // r15
  unsigned int v180; // r12d
  __int64 v181; // r13
  unsigned int v182; // r10d
  char *v183; // rax
  unsigned int v184; // edx
  char *v185; // rbp
  char *v186; // rdi
  __int64 v187; // rbp
  unsigned int v188; // eax
  unsigned int v189; // r12d
  char *v190; // rax
  int v191; // edi
  unsigned int v192; // eax
  unsigned __int8 v193; // si
  unsigned int v194; // ecx
  __int64 v195; // r8
  char *v196; // r9
  char *v197; // rax
  unsigned __int8 v198; // di
  unsigned __int16 v199; // ax
  unsigned __int16 *v200; // rax
  unsigned __int16 v201; // r13
  unsigned int v202; // eax
  __int64 v203; // r12
  __int64 v204; // rdx
  unsigned int v205; // ecx
  int v206; // ebp
  __int64 v207; // r13
  unsigned int v208; // r12d
  unsigned int v209; // esi
  __int32 v210; // r10d
  void *v211; // r14
  __int64 j; // rbp
  int v213; // ebx
  int v214; // ebx
  char *v215; // rax
  __int64 v216; // r9
  char *v217; // r15
  unsigned int v218; // edx
  __m128i v219; // xmm4
  __m128i v220; // xmm5
  __m128i v221; // xmm6
  __m128i v222; // xmm7
  __int64 v223; // rax
  unsigned int v224; // ebx
  void *v225; // rax
  void *v226; // rcx
  unsigned int v227; // r14d
  __int64 v228; // r12
  unsigned int v229; // ebx
  unsigned int v230; // edx
  unsigned int v231; // r13d
  unsigned int v232; // ebp
  void *v233; // r14
  int v234; // ebx
  __m128i *v235; // rax
  __int64 v236; // r9
  __m128i *v237; // r15
  __m128i v238; // xmm3
  __m128i v239; // xmm4
  __m128i v240; // xmm5
  __m128i v241; // xmm6
  __int64 v242; // rax
  unsigned int v243; // ebx
  void *v244; // rax
  unsigned __int32 v245; // eax
  __int64 v246; // rsi
  unsigned __int16 *v247; // rax
  __int64 v248; // rdi
  __int64 v249; // rdx
  unsigned __int16 v250; // cx
  __int64 v251; // r12
  unsigned int v252; // edx
  unsigned __int16 *v253; // rbx
  unsigned int v254; // ebp
  unsigned int v255; // r14d
  unsigned int *v256; // r13
  __int64 v257; // rax
  unsigned int v258; // esi
  __int64 v259; // rcx
  unsigned int v260; // r13d
  __int64 v261; // r15
  unsigned int v262; // r14d
  __int64 v263; // rbp
  _DWORD *v264; // rax
  int v265; // eax
  unsigned __int16 *v266; // rsi
  unsigned int v267; // r8d
  __int64 v268; // rax
  unsigned int v269; // ecx
  __int64 v270; // rdi
  __int64 v271; // rsi
  __int64 v272; // rax
  unsigned __int16 *v273; // r9
  unsigned __int16 v274; // r10
  int v275; // eax
  unsigned int v276; // r9d
  __int64 v277; // r11
  __int64 v278; // rsi
  __int64 v279; // rdx
  __int64 v280; // rdi
  unsigned int v281; // ecx
  char v282; // r8
  __int64 v283; // rax
  __int64 v284; // rax
  char v285; // al
  unsigned __int16 *v286; // r14
  __int64 v287; // r13
  __int128 v288; // xmm0
  unsigned __int16 *v289; // rbx
  _BYTE *v290; // rax
  unsigned __int16 v291; // r12
  unsigned int v292; // esi
  unsigned __int16 *v293; // r13
  int v294; // r11d
  void *v295; // rcx
  unsigned int v296; // ebx
  __int32 v297; // r10d
  __int64 k; // rbp
  __int64 v299; // rdi
  int v300; // eax
  int v301; // r15d
  __int16 v302; // r12
  char *v303; // rax
  __int64 v304; // r8
  char *v305; // r14
  unsigned int v306; // r12d
  __m128i v307; // xmm2
  __m128i v308; // xmm3
  __m128i v309; // xmm1
  __m128i v310; // xmm4
  __int64 v311; // rax
  unsigned int v312; // r15d
  void *v313; // rax
  __int64 v314; // rbp
  unsigned __int16 *v315; // r15
  int v316; // r12d
  unsigned int v317; // r13d
  __int64 v318; // rdi
  int v319; // eax
  int v320; // ebx
  char *v321; // rax
  char *v322; // r14
  __m128i v323; // xmm5
  unsigned int v324; // ebx
  __m128i v325; // xmm6
  __m128i v326; // xmm7
  __m128i v327; // xmm1
  unsigned int v328; // r12d
  __int64 v329; // r14
  unsigned int v330; // esi
  __int64 v331; // rcx
  unsigned __int16 *v332; // r12
  unsigned int v333; // ebx
  __int64 v334; // rdx
  __int64 v335; // r13
  unsigned int v336; // r11d
  char *v337; // rax
  unsigned int v338; // r11d
  char *v339; // r15
  unsigned __int16 v340; // bp
  unsigned int v341; // eax
  int v342; // ebx
  char *v343; // rax
  unsigned int v344; // eax
  unsigned int v345; // edi
  unsigned int v346; // edx
  __int64 v347; // rax
  unsigned __int16 v348; // cx
  int v349; // r12d
  unsigned int v350; // eax
  int v351; // esi
  unsigned __int16 *v352; // rax
  unsigned int v353; // eax
  unsigned int v354; // r10d
  unsigned int v355; // esi
  __int64 v356; // rdx
  int v357; // r12d
  size_t v358; // rdi
  unsigned __int16 *v359; // rax
  unsigned int v360; // ecx
  __int64 v361; // rdi
  unsigned int v362; // esi
  unsigned __int16 *v363; // rax
  void *v364; // rdi
  char *v365; // r13
  __int64 v366; // r15
  __int64 v367; // r12
  void *v368; // rdi
  void *v369; // r12
  void **v370; // r13
  __int64 v371; // r15
  void *v372; // rdi
  void *v373; // r12
  void **v374; // r13
  __int64 v375; // r15
  void *v376; // rdi
  void *v377; // r12
  void **v378; // r13
  __int64 v379; // r15
  void *v380; // rdi
  void *v381; // r12
  void **v382; // r13
  __int64 v383; // r15
  void *v384; // rdi
  void *v385; // rdi
  __int64 v386; // r8
  unsigned int v387; // r9d
  int v388; // r14d
  unsigned __int16 v389; // si
  __int64 v390; // rdx
  unsigned int v391; // eax
  __int64 v392; // rdx
  unsigned int v393; // edi
  __int64 v394; // rax
  char *v395; // rdi
  unsigned int v396; // r10d
  unsigned int v397; // esi
  unsigned int v398; // r8d
  char v399; // dl
  char *v400; // rsi
  size_t v401; // rsi
  char *v402; // rax
  unsigned int v403; // r8d
  unsigned int v404; // ecx
  int v405; // eax
  __int32 *v406; // rsi
  __int64 v407; // rdx
  unsigned int v408; // edi
  __int32 v409; // eax
  int v410; // eax
  __int64 v411; // r9
  __int64 v412; // rbx
  unsigned int v413; // r11d
  int v414; // ecx
  unsigned __int16 v415; // di
  __int64 v416; // rdx
  unsigned int v417; // eax
  __int64 v418; // rdx
  unsigned int v419; // esi
  __int64 v420; // rax
  _WORD *v421; // rdi
  unsigned int v422; // r9d
  unsigned int v423; // esi
  unsigned int v424; // r8d
  int v425; // eax
  size_t v426; // rsi
  _WORD *v427; // rax
  unsigned int v428; // r8d
  unsigned int v429; // esi
  __int32 *v430; // rdx
  int v431; // edi
  unsigned int v432; // ecx
  __int64 v433; // rax
  __int64 v434; // [rsp+0h] [rbp-218h]
  unsigned int *v435; // [rsp+8h] [rbp-210h]
  int v436; // [rsp+8h] [rbp-210h]
  unsigned __int16 v437; // [rsp+8h] [rbp-210h]
  __int64 v438; // [rsp+8h] [rbp-210h]
  unsigned __int16 v439; // [rsp+8h] [rbp-210h]
  unsigned __int16 v440; // [rsp+8h] [rbp-210h]
  __int16 *v441; // [rsp+8h] [rbp-210h]
  __int64 v442; // [rsp+8h] [rbp-210h]
  __int64 v443; // [rsp+8h] [rbp-210h]
  int v444; // [rsp+10h] [rbp-208h]
  int v445; // [rsp+10h] [rbp-208h]
  unsigned __int16 *v446; // [rsp+10h] [rbp-208h]
  __int16 v447; // [rsp+10h] [rbp-208h]
  int v448; // [rsp+10h] [rbp-208h]
  __int16 v449; // [rsp+10h] [rbp-208h]
  __int64 v450; // [rsp+10h] [rbp-208h]
  __int64 v451; // [rsp+10h] [rbp-208h]
  unsigned int v452; // [rsp+18h] [rbp-200h]
  unsigned int v453; // [rsp+18h] [rbp-200h]
  __int64 v454; // [rsp+18h] [rbp-200h]
  unsigned int v455; // [rsp+18h] [rbp-200h]
  __int64 v456; // [rsp+18h] [rbp-200h]
  void *v457; // [rsp+18h] [rbp-200h]
  __int32 v458; // [rsp+18h] [rbp-200h]
  void *v459; // [rsp+18h] [rbp-200h]
  unsigned int v460; // [rsp+18h] [rbp-200h]
  unsigned int v461; // [rsp+18h] [rbp-200h]
  __int64 v462; // [rsp+20h] [rbp-1F8h]
  unsigned int v463; // [rsp+20h] [rbp-1F8h]
  unsigned int v464; // [rsp+20h] [rbp-1F8h]
  unsigned int v465; // [rsp+20h] [rbp-1F8h]
  unsigned int v466; // [rsp+20h] [rbp-1F8h]
  unsigned __int16 *v467; // [rsp+20h] [rbp-1F8h]
  __int64 v468; // [rsp+20h] [rbp-1F8h]
  unsigned int v469; // [rsp+20h] [rbp-1F8h]
  _WORD *v471; // [rsp+30h] [rbp-1E8h]
  unsigned __int16 *v472; // [rsp+38h] [rbp-1E0h]
  unsigned int v473; // [rsp+38h] [rbp-1E0h]
  unsigned __int16 v474; // [rsp+38h] [rbp-1E0h]
  unsigned __int16 *v475; // [rsp+38h] [rbp-1E0h]
  unsigned int v476; // [rsp+38h] [rbp-1E0h]
  unsigned int v477; // [rsp+38h] [rbp-1E0h]
  unsigned __int16 v478; // [rsp+40h] [rbp-1D8h]
  _WORD *v479; // [rsp+40h] [rbp-1D8h]
  int v480; // [rsp+40h] [rbp-1D8h]
  __int64 v481; // [rsp+40h] [rbp-1D8h]
  __int64 v482; // [rsp+40h] [rbp-1D8h]
  _BYTE *v483; // [rsp+48h] [rbp-1D0h]
  int v484; // [rsp+48h] [rbp-1D0h]
  int v485; // [rsp+48h] [rbp-1D0h]
  __int64 v486; // [rsp+48h] [rbp-1D0h]
  unsigned __int16 *v487; // [rsp+58h] [rbp-1C0h]
  __int64 v488; // [rsp+58h] [rbp-1C0h]
  __int32 v489; // [rsp+58h] [rbp-1C0h]
  char v490; // [rsp+58h] [rbp-1C0h]
  __int64 v491; // [rsp+58h] [rbp-1C0h]
  unsigned __int16 v492; // [rsp+60h] [rbp-1B8h]
  char *v493; // [rsp+60h] [rbp-1B8h]
  unsigned __int16 *v494; // [rsp+60h] [rbp-1B8h]
  unsigned int v495; // [rsp+60h] [rbp-1B8h]
  unsigned int v496; // [rsp+68h] [rbp-1B0h]
  int v497; // [rsp+68h] [rbp-1B0h]
  __int64 v498; // [rsp+70h] [rbp-1A8h]
  unsigned __int16 *v500; // [rsp+78h] [rbp-1A0h]
  unsigned __int16 *v501; // [rsp+80h] [rbp-198h]
  int v502; // [rsp+88h] [rbp-190h]
  unsigned __int16 *v503; // [rsp+90h] [rbp-188h]
  int v504; // [rsp+90h] [rbp-188h]
  unsigned int v505; // [rsp+98h] [rbp-180h]
  unsigned __int16 v506; // [rsp+98h] [rbp-180h]
  unsigned int v507; // [rsp+9Ch] [rbp-17Ch]
  int v508; // [rsp+A8h] [rbp-170h]
  __int16 v509; // [rsp+ACh] [rbp-16Ch]
  __m128i v510; // [rsp+B0h] [rbp-168h] BYREF
  unsigned __int16 *v511; // [rsp+C0h] [rbp-158h] BYREF
  __int64 i; // [rsp+C8h] [rbp-150h]
  unsigned __int16 *v513; // [rsp+D0h] [rbp-148h] BYREF
  __int64 v514; // [rsp+D8h] [rbp-140h]
  __m128i *v515; // [rsp+E0h] [rbp-138h] BYREF
  __int64 v516; // [rsp+E8h] [rbp-130h]
  void *dest; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v518; // [rsp+F8h] [rbp-120h]
  __m128i v519; // [rsp+100h] [rbp-118h] BYREF
  __m128i v520; // [rsp+110h] [rbp-108h]
  _BYTE v521[70]; // [rsp+120h] [rbp-F8h] BYREF
  __m128i v522[10]; // [rsp+170h] [rbp-A8h] BYREF

  if ( !a1 || (unsigned int)(*a1 - 13) > 2 )
  {
    *a5 = 6;
    return 0;
  }
  v6 = a3;
  v7 = (unsigned int *)off_8C52B8(0xE0u);
  v434 = (__int64)v7;
  v8 = sub_57C660((__int64)a1);
  *(_QWORD *)v7 = 0;
  v9 = 2;
  *((_WORD *)v7 + 108) = 0;
  *((_QWORD *)v7 + 26) = v8;
  *((_QWORD *)v7 + 1) = 0;
  *((_QWORD *)v7 + 2) = 0;
  *((_QWORD *)v7 + 3) = 0;
  *((_QWORD *)v7 + 4) = 0;
  *((_QWORD *)v7 + 5) = 0;
  *((_QWORD *)v7 + 6) = 0;
  *((_QWORD *)v7 + 7) = 0;
  *((_QWORD *)v7 + 8) = 0;
  *((_QWORD *)v7 + 9) = 0;
  *((_QWORD *)v7 + 10) = 0;
  *((_QWORD *)v7 + 11) = 0;
  *((_QWORD *)v7 + 12) = 0;
  *((_QWORD *)v7 + 13) = 0;
  *((_QWORD *)v7 + 14) = 0;
  *((_QWORD *)v7 + 15) = 0;
  *((_QWORD *)v7 + 16) = 0;
  *((_QWORD *)v7 + 17) = 0;
  *((_QWORD *)v7 + 18) = 0;
  *((_QWORD *)v7 + 19) = 0;
  *((_QWORD *)v7 + 20) = 0;
  *((_QWORD *)v7 + 21) = 0;
  *((_QWORD *)v7 + 22) = 0;
  *((_QWORD *)v7 + 23) = 0;
  *((_QWORD *)v7 + 24) = 0;
  *((_QWORD *)v7 + 25) = 0;
  sub_55ECB0((__int64)(v7 + 40), 2);
  v10 = v7[42];
  v11 = *((_QWORD *)v7 + 20);
  v12 = (__m128i)a2;
  v13 = v6 + a2;
  v522[1] = (__m128i)v13;
  v7[42] = v10 + 1;
  *(_WORD *)(v11 + 2 * v10) = 0;
  v522[0] = _mm_unpacklo_epi64(v12, v12);
  sub_55E5B0((__int64)v522);
  si128 = _mm_load_si128(&v522[1]);
  v519 = _mm_load_si128(v522);
  v520 = si128;
  sub_55E740((__int64)&v519);
  v16 = v519.m128i_i64[0];
  if ( v519.m128i_i64[0] < v13 )
  {
    v17 = (__int64)v7;
    while ( 1 )
    {
      v18 = *(_DWORD *)(v17 + 136);
      v19 = *(_DWORD *)(v17 + 140);
      v20 = *(_DWORD *)(v17 + 88);
      v21 = *(_DWORD *)(v17 + 120);
      v22 = v18 + 1;
      v23 = *(char **)(v17 + 128);
      v24 = v18;
      if ( v19 < v18 + 1 )
      {
        v25 = 2 * v19;
        if ( 2 * v19 < v22 )
          v25 = v18 + 1;
        if ( v25 < 8 )
          v25 = 8;
        if ( v19 < v25 )
        {
          v452 = v25;
          if ( v23 )
            v26 = (char *)off_8C52A8(v23, 28LL * v25);
          else
            v26 = (char *)off_8C52B8(28LL * v25);
          v23 = v26;
          v24 = *(unsigned int *)(v17 + 136);
          *(_QWORD *)(v17 + 128) = v23;
          *(_DWORD *)(v17 + 140) = v452;
          LODWORD(v16) = v519.m128i_i32[0];
          v22 = v24 + 1;
        }
      }
      v27 = v16 - v519.m128i_i32[2];
      *(_DWORD *)(v17 + 136) = v22;
      v510.m128i_i64[0] = 0;
      v28 = &v23[28 * v24];
      *(_OWORD *)v28 = 0;
      *(_OWORD *)(v28 + 12) = 0;
      *(_DWORD *)v28 = v20;
      *((_DWORD *)v28 + 4) = v27;
      *((_DWORD *)v28 + 2) = v21;
      v510.m128i_i64[1] = 0;
      *a5 = sub_563D00(v17, (__int64)&v519, 0, 0, (__int64)&v510);
      v30 = *(unsigned int *)(v17 + 88);
      v31 = *(_DWORD *)(v17 + 92);
      v32 = v30 + 1;
      if ( v31 < (int)v30 + 1 )
      {
        v91 = 2 * v31;
        v33 = *(char **)(v17 + 80);
        if ( 2 * v31 < v32 )
          v91 = v30 + 1;
        if ( v91 < 8 )
          v91 = 8;
        if ( v31 < v91 )
        {
          v453 = v91;
          if ( v33 )
            v92 = (char *)off_8C52A8(v33, 20LL * v91);
          else
            v92 = (char *)off_8C52B8(20LL * v91);
          v33 = v92;
          v30 = *(unsigned int *)(v17 + 88);
          *(_QWORD *)(v17 + 80) = v33;
          *(_DWORD *)(v17 + 92) = v453;
          v32 = v30 + 1;
        }
      }
      else
      {
        v33 = *(char **)(v17 + 80);
      }
      *(_DWORD *)(v17 + 88) = v32;
      *(_QWORD *)v521 = 0xFFFF000000000000LL;
      v34 = (__m128i *)&v33[20 * v30];
      *(_QWORD *)&v521[8] = -1;
      v35 = _mm_load_si128((const __m128i *)v521);
      v34[1].m128i_i32[0] = 0;
      *v34 = v35;
      v36 = *(_DWORD *)(v17 + 136);
      *(_DWORD *)&v521[16] = 0;
      v522[1].m128i_i32[0] = 0;
      v522[0] = v35;
      if ( !v36 )
        __assert_fail(
          "(uint32_t)((&self->patterns)->size - 1) < (&self->patterns)->size",
          "lib/src/./query.c",
          0xB0Du,
          "ts_query_new");
      v37 = (_DWORD *)(*(_QWORD *)(v17 + 128) + 28LL * (unsigned int)(v36 - 1));
      v37[1] = v32 - v20;
      v37[3] = *(_DWORD *)(v17 + 120) - v21;
      v38 = v519.m128i_i32[0] - v519.m128i_i32[2];
      v37[5] = v519.m128i_i32[0] - v519.m128i_i32[2];
      if ( *a5 )
      {
        if ( *a5 == -1 )
          *a5 = 1;
        v96 = (void *)v510.m128i_i64[0];
        *a4 = v38;
        if ( v96 )
          off_8C52A0(v96);
        sub_57C790(v434);
        return 0;
      }
      v39 = *(unsigned int *)(v17 + 72);
      v40 = *(_DWORD *)(v17 + 76);
      v41 = *(__m128i **)(v17 + 64);
      v42 = v39 + 1;
      if ( v40 < (int)v39 + 1 )
      {
        v43 = 2 * v40;
        if ( 2 * v40 < v42 )
          v43 = v39 + 1;
        if ( v43 < 8 )
          v43 = 8;
        if ( v40 < v43 )
        {
          if ( v41 )
            v41 = (__m128i *)off_8C52A8(*(void **)(v17 + 64), 16LL * v43);
          else
            v41 = (__m128i *)off_8C52B8(16LL * v43);
          v39 = *(unsigned int *)(v17 + 72);
          v33 = *(char **)(v17 + 80);
          *(_QWORD *)(v17 + 64) = v41;
          *(_DWORD *)(v17 + 76) = v43;
          v32 = *(_DWORD *)(v17 + 88);
          v42 = v39 + 1;
        }
      }
      v44 = _mm_load_si128(&v510);
      *(_DWORD *)(v17 + 72) = v42;
      v45 = -1;
      v41[v39] = v44;
      v46 = *(_DWORD *)(v17 + 104);
      while ( 1 )
      {
        v47 = v20 + 1;
        v48 = &v33[20 * v20];
        v49 = *(_WORD *)v48;
        v50 = *((_WORD *)v48 + 6);
        if ( !((unsigned __int16)v50 | *(_WORD *)v48) )
        {
          v50 = *((_WORD *)v48 + 2);
          if ( v50 )
          {
            v49 = 0;
            v50 = 0;
          }
          else
          {
            v51 = &v33[20 * v47];
            v49 = *(_WORD *)v51;
            if ( *(_WORD *)v51 )
            {
              if ( *((_WORD *)v51 + 6) != 1 || (v51[18] & 2) != 0 )
              {
                v49 = 0;
              }
              else
              {
                v60 = v20 + 2;
                v45 = *((_WORD *)v48 + 7);
                LOWORD(v20) = v20 + 1;
                v50 = 1;
                v48 = &v33[20 * v47];
                v47 = v60;
              }
            }
          }
        }
        if ( v47 < v32 )
        {
          v52 = &v33[20 * v47];
          v53 = (unsigned __int64)&v33[20 * v47 + 20 + 20 * (unsigned __int64)(v32 - 1 - v47)];
          do
          {
            v15 = v52[18] & 0x10;
            if ( (v52[18] & 0x10) != 0 )
              break;
            if ( *((_WORD *)v52 + 6) == v50 )
              goto LABEL_39;
            v52 += 20;
          }
          while ( (char *)v53 != v52 );
        }
        LOBYTE(v29) = v50 == 0;
        v15 = (unsigned int)v29;
LABEL_39:
        v54 = *(unsigned __int16 *)(v17 + 216);
        *(_WORD *)v521 = v20;
        *(_WORD *)&v521[2] = v18;
        v521[4] = v15;
        v9 = v46 - v54;
        if ( v46 != v54 )
        {
          v29 = *(_QWORD *)(v17 + 96);
          if ( (_DWORD)v9 != 1 )
          {
            do
            {
              v15 = (unsigned int)v9 >> 1;
              if ( *(_WORD *)&v33[20 * *(unsigned __int16 *)(v29 + 6LL * ((unsigned int)v15 + v54))] < v49 )
                v54 += v15;
              LODWORD(v9) = v9 - v15;
            }
            while ( (unsigned int)v9 > 1 );
          }
          v9 = 5LL * *(unsigned __int16 *)(v29 + 6LL * v54);
          v54 += *(_WORD *)&v33[20 * *(unsigned __int16 *)(v29 + 6LL * v54)] < v49;
        }
        if ( v54 >= v46 )
        {
LABEL_63:
          v55 = v54;
        }
        else
        {
          v9 = *(_QWORD *)(v17 + 96) + 6LL * v54;
          while ( 1 )
          {
            v55 = v54++;
            v15 = 5LL * *(unsigned __int16 *)v9;
            if ( *(_WORD *)&v33[20 * *(unsigned __int16 *)v9] != v49 || *(_WORD *)(v9 + 2) >= (unsigned __int16)v18 )
              break;
            v9 += 6LL;
            if ( v54 >= v46 )
              goto LABEL_63;
          }
        }
        v56 = v46 + 1;
        if ( v46 < v55 )
LABEL_575:
          __assert_fail("old_end <= self->size", "lib/src/./././././array.h", 0xE2u, "_array__splice");
        v57 = *(char **)(v17 + 96);
        if ( *(_DWORD *)(v17 + 108) < v56 )
        {
          v9 = 6LL * v56;
          if ( v57 )
            v57 = (char *)off_8C52A8(v57, v9);
          else
            v57 = (char *)off_8C52B8(6LL * v56);
          *(_QWORD *)(v17 + 96) = v57;
          v46 = *(_DWORD *)(v17 + 104);
          *(_DWORD *)(v17 + 108) = v56;
        }
        v58 = &v57[6 * v55];
        if ( v55 < v46 )
        {
          v9 = (size_t)&v57[6 * v55];
          memmove(&v57[6 * v55 + 6], (const void *)v9, 6LL * (v46 - v55));
        }
        *(_DWORD *)v58 = *(_DWORD *)v521;
        *((_WORD *)v58 + 2) = *(_WORD *)&v521[4];
        v59 = *(_WORD *)v48 == 0;
        v46 = *(_DWORD *)(v17 + 104) + 1;
        *(_DWORD *)(v17 + 104) = v46;
        if ( v59 )
          ++*(_WORD *)(v17 + 216);
        v20 = *((unsigned __int16 *)v48 + 7);
        if ( (_WORD)v20 == 0xFFFF )
          break;
LABEL_60:
        v33 = *(char **)(v17 + 80);
        v32 = *(_DWORD *)(v17 + 88);
      }
      if ( v45 != 0xFFFF )
        break;
      v16 = v519.m128i_i64[0];
      if ( v519.m128i_i64[0] >= (unsigned __int64)v520.m128i_i64[0] )
        goto LABEL_69;
    }
    v20 = v45;
    v45 = -1;
    goto LABEL_60;
  }
  v46 = v7[26];
LABEL_69:
  v61 = 0;
  v511 = nullptr;
  for ( i = 0; v61 < v46; ++v61 )
  {
    while ( 1 )
    {
      v16 = 3LL * v61;
      v62 = (unsigned __int16 *)(*(_QWORD *)(v434 + 96) + 6LL * v61);
      if ( !*((_BYTE *)v62 + 4) )
      {
        if ( *(_WORD *)(*(_QWORD *)(v434 + 80) + 20LL * *v62) )
          break;
      }
      if ( ++v61 >= v46 )
        goto LABEL_75;
    }
    v9 = 2;
    sub_55ECB0((__int64)&v511, 2);
    v63 = (unsigned int)i;
    LODWORD(i) = i + 1;
    v511[v63] = v61;
    v46 = *(_DWORD *)(v434 + 104);
  }
LABEL_75:
  v64 = 0;
  v513 = nullptr;
  v514 = 0;
  v65 = *(_DWORD *)(v434 + 88);
  if ( v65 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v66 = v64;
          v67 = *(_QWORD *)(v434 + 80);
          v68 = v64++;
          v69 = 5 * v66;
          v70 = (unsigned __int16 *)(v67 + 4 * v69);
          v15 = v70[6];
          if ( (_WORD)v15 != 0xFFFF )
            break;
          v70[9] |= 0x180u;
          if ( v64 >= v65 )
            goto LABEL_86;
        }
        LOBYTE(v69) = v70[3] != 0xFFFF;
        v9 = *v70;
        v71 = (_DWORD)v69 << 6;
        v16 = v71 | (_BYTE)v70[9] & 0xBFu;
        *((_BYTE *)v70 + 18) = v71 | v70[9] & 0xBF;
        if ( v64 >= v65 )
          goto LABEL_86;
        if ( (_WORD)v9 )
          break;
        v72 = v67 + 20LL * v64;
        v73 = v67 + 20 * (v64 + (unsigned __int64)(v65 - 2 - v68)) + 20;
        do
        {
          v9 = *(unsigned __int16 *)(v72 + 12);
          if ( (unsigned __int16)v15 >= (unsigned __int16)v9 || (_WORD)v9 == 0xFFFF )
            break;
          if ( *(_WORD *)(v72 + 6) != 0xFFFF )
          {
            v16 = (unsigned int)v16 | 0x40;
            *((_BYTE *)v70 + 18) = v16;
          }
          v72 += 20;
        }
        while ( v72 != v73 );
LABEL_85:
        if ( v64 >= v65 )
          goto LABEL_86;
      }
      v93 = (_WORD *)(v67 + 20LL * v64);
      v9 = 0;
      v94 = v67 + 20 * (v64 + (unsigned __int64)(v65 - 2 - v68)) + 20;
      while ( 1 )
      {
        v16 = (unsigned __int16)v93[6];
        if ( (_WORD)v16 == 0xFFFF || (unsigned __int16)v15 >= (unsigned __int16)v16 )
          break;
        if ( v93[3] == 0xFFFF )
        {
          v93[9] |= 0x180u;
          v93 += 10;
          if ( (_WORD *)v94 == v93 )
            goto LABEL_133;
        }
        else
        {
          *((_BYTE *)v70 + 18) |= 0x40u;
          v93[9] |= 0x180u;
          v93 += 10;
          if ( v93 == (_WORD *)v94 )
            goto LABEL_133;
        }
        v9 = 1;
      }
      if ( !(_BYTE)v9 )
        goto LABEL_85;
LABEL_133:
      v9 = 4;
      sub_55ECB0((__int64)&v513, 4);
      v95 = (unsigned int)v514;
      LODWORD(v514) = v514 + 1;
      v70 = v513;
      *(_DWORD *)&v513[2 * v95] = v68;
      v65 = *(_DWORD *)(v434 + 88);
    }
    while ( v64 < v65 );
LABEL_86:
    v515 = nullptr;
    v516 = 0;
    if ( (_DWORD)v514 )
    {
      v74 = v513;
      v444 = v514;
      v75 = nullptr;
      v435 = (unsigned int *)&v513[2 * (unsigned int)v514];
      v76 = 0;
      while ( 1 )
      {
        v80 = *(unsigned int *)v74;
        memset(v521, 0, 40);
        v81 = (_WORD *)(*(_QWORD *)(v434 + 80) + 20 * v80);
        v82 = (unsigned __int16)*v81;
        *(_WORD *)v521 = *v81;
        if ( !v76 )
          break;
        if ( v76 == 1 )
        {
          v85 = v75;
          v84 = 0;
        }
        else
        {
          v83 = v76;
          v84 = 0;
          do
          {
            v70 = (unsigned __int16 *)(v83 >> 1);
            v16 = (unsigned int)v70 + v84;
            v9 = v75->m128i_u16[20 * v16];
            if ( (int)v9 <= v82 )
              v84 += (unsigned int)v70;
            v83 -= (unsigned int)v70;
          }
          while ( v83 > 1 );
          v85 = (__m128i *)((char *)v75 + 40 * v84);
        }
        v86 = v85->m128i_u16[0] - v82;
        if ( v86 )
        {
          v87 = v76 + 1;
          v77 = v84 - ((v86 < 0x80000000) - 1);
          v88 = v77 + 1;
          if ( v76 < v77 )
LABEL_608:
            sub_55D2B0(v75, v9, v70, v16, v15);
          v89 = 40LL * v77;
          if ( HIDWORD(v516) < v87 )
          {
            v9 = 40LL * v87;
            if ( v75 )
              goto LABEL_104;
LABEL_123:
            v75 = (__m128i *)off_8C52B8(v9);
            goto LABEL_105;
          }
          goto LABEL_106;
        }
LABEL_91:
        v74 += 2;
        if ( v74 == (unsigned __int16 *)v435 )
        {
          v505 = v76;
          v98 = v444;
          goto LABEL_144;
        }
        v75 = v515;
      }
      v77 = HIDWORD(v516);
      if ( HIDWORD(v516) )
      {
        v76 = 1;
      }
      else
      {
        v89 = 0;
        v9 = 40;
        v88 = 1;
        v87 = 1;
        if ( !v75 )
          goto LABEL_123;
LABEL_104:
        v75 = (__m128i *)off_8C52A8(v75, v9);
LABEL_105:
        v515 = v75;
        HIDWORD(v516) = v87;
LABEL_106:
        v90 = (__m128i *)((char *)v75 + v89);
        if ( v77 < v76 )
        {
          v9 = (size_t)v90;
          memmove((char *)v75 + 40 * v88, v90, 40LL * (v76 - v77));
        }
        v75 = v90;
        v76 = v87;
      }
      LODWORD(v516) = v76;
      v78 = _mm_load_si128((const __m128i *)v521);
      v79 = _mm_load_si128((const __m128i *)&v521[16]);
      v75[2].m128i_i64[0] = *(_QWORD *)&v521[32];
      *v75 = v78;
      v75[1] = v79;
      goto LABEL_91;
    }
  }
  else
  {
    v515 = nullptr;
    v516 = 0;
  }
  v505 = 0;
  v98 = 0;
LABEL_144:
  v75 = *(__m128i **)(v434 + 208);
  v99 = v75->m128i_i32[1];
  v100 = v75->m128i_i32[3];
  if ( (unsigned __int16)v100 >= (unsigned __int16)v99 )
    goto LABEL_157;
  v101 = v516;
  do
  {
    while ( (_WORD)v100 != 0xFFFE && *(_BYTE *)(v75[6].m128i_i64[1] + 3LL * (unsigned __int16)v100) )
    {
LABEL_147:
      if ( (unsigned __int16)++v100 >= (unsigned __int16)v99 )
        goto LABEL_156;
    }
    v9 = v101;
    memset(v522, 0, 40);
    v522[0].m128i_i16[0] = v100;
    if ( v101 )
    {
      v105 = (__int64)v515;
      if ( v101 == 1 )
      {
        v127 = v515;
        v126 = 0;
      }
      else
      {
        v125 = v101;
        v126 = 0;
        do
        {
          v15 = (v125 >> 1) + v126;
          if ( v515->m128i_u16[20 * v15] <= (int)(unsigned __int16)v100 )
            v126 += v125 >> 1;
          v125 -= v125 >> 1;
        }
        while ( v125 > 1 );
        v127 = (__m128i *)((char *)v515 + 40 * v126);
      }
      v70 = (unsigned __int16 *)(v127->m128i_u16[0] - (unsigned int)(unsigned __int16)v100);
      if ( !(_DWORD)v70 )
        goto LABEL_147;
      v104 = v101 + 1;
      v102 = v126 - (((unsigned int)v70 < 0x80000000) - 1);
      v16 = v102 + 1;
      if ( v101 < v102 )
        goto LABEL_608;
      v103 = 40LL * v102;
      if ( HIDWORD(v516) >= v104 )
        goto LABEL_153;
    }
    else
    {
      v102 = HIDWORD(v516);
      if ( HIDWORD(v516) )
      {
        v106 = v515;
        v104 = 1;
        goto LABEL_155;
      }
      v103 = 0;
      v104 = 1;
      LODWORD(v16) = 1;
    }
    v436 = v16;
    sub_55D020((__int64)&v515, 40, v104);
    LODWORD(v9) = v516;
    LODWORD(v16) = v436;
    v105 = (__int64)v515;
    v104 = v516 + 1;
LABEL_153:
    v106 = (__m128i *)(v105 + v103);
    if ( v102 < (unsigned int)v9 )
      memmove((void *)(v105 + 40LL * (unsigned int)v16), v106, 40LL * ((unsigned int)v9 - v102));
LABEL_155:
    v107 = _mm_load_si128(v522);
    ++v100;
    LODWORD(v516) = v104;
    v108 = _mm_load_si128(&v522[1]);
    v106[2].m128i_i64[0] = v522[2].m128i_i64[0];
    *v106 = v107;
    v106[1] = v108;
    v75 = *(__m128i **)(v434 + 208);
    v101 = v104;
    v99 = v75->m128i_i32[1];
  }
  while ( (unsigned __int16)v100 < (unsigned __int16)v99 );
LABEL_156:
  v505 = v101;
LABEL_157:
  v471 = off_8C52B0(257LL * v75[1].m128i_u32[1], 2u);
  v462 = *(_QWORD *)(v434 + 208);
  v109 = v462;
  if ( *(_WORD *)(v462 + 20) <= 1u )
    goto LABEL_227;
  v437 = 1;
  v110 = v505;
  v502 = v98;
  while ( 2 )
  {
    v111 = *(_DWORD *)(v109 + 24);
    if ( v437 < v111 )
    {
      v158 = *(_DWORD *)(v109 + 4) * (unsigned int)v437;
      v159 = *(_QWORD *)(v109 + 40);
      v472 = nullptr;
      v478 = 0;
      v112 = (unsigned __int16 *)(v159 + 2 * v158 - 2);
      v113 = (unsigned __int16 *)(v159 + 2 * v158);
    }
    else
    {
      v112 = (unsigned __int16 *)(*(_QWORD *)(v109 + 48)
                                + 2LL * *(unsigned int *)(*(_QWORD *)(v109 + 56) + 4LL * (v437 - v111)));
      v113 = v112 + 1;
      v472 = v112 + 1;
      v478 = *v112;
    }
    v114 = v110;
    v454 = v109;
    v115 = 0;
    LODWORD(v116) = 0;
    v117 = -1;
    v118 = *(_DWORD *)(v109 + 24);
    v119 = v109;
    v483 = nullptr;
    while ( 2 )
    {
      if ( v437 < v118 )
      {
        while ( 1 )
        {
          v124 = (unsigned __int16)++v117;
          if ( (unsigned int)(unsigned __int16)v117 >= *(_DWORD *)(v119 + 4) )
            goto LABEL_178;
          v116 = *v113;
          if ( (_WORD)v116 )
            break;
          ++v113;
        }
        v112 = v113;
        goto LABEL_192;
      }
      if ( v472 != v113 )
      {
        v117 = v112[1];
        v112 = v113;
        if ( v115 )
          goto LABEL_194;
        goto LABEL_164;
      }
      if ( v478 )
      {
        v124 = v112[3];
        --v478;
        v116 = v112[1];
        v138 = (__int64)&v112[v112[2] + 3];
        v112 += 3;
        v472 = (unsigned __int16 *)v138;
        v117 = v124;
LABEL_192:
        if ( v124 < *(_DWORD *)(v119 + 12) )
        {
          v128 = (_BYTE *)(*(_QWORD *)(v119 + 64) + 8 * v116);
          LODWORD(v116) = 0;
          v115 = (unsigned __int8)*v128;
          v483 = v128 + 8;
          if ( !*v128 )
            goto LABEL_172;
LABEL_194:
          v487 = v112;
          v129 = v483;
          v130 = v117;
          v498 = v119;
          v131 = 0;
          v132 = v116;
          v133 = v115;
          v492 = v115;
          v496 = v118;
          while ( *v129 != 1 )
          {
            if ( *v129
              || v129[4]
              || (v134 = 257LL * *((unsigned __int16 *)v129 + 1),
                  v135 = &v471[257 * *((unsigned __int16 *)v129 + 1)],
                  (v136 = *v135) != 0)
              && (v136 > 0xFFu || v471[v134 + v136] == v437) )
            {
LABEL_195:
              ++v131;
              v129 += 8;
              if ( v131 >= v133 )
                goto LABEL_203;
            }
            else
            {
              v137 = v136 + 1;
              ++v131;
              v129 += 8;
              *v135 = v137;
              v471[v134 + v137] = v437;
              if ( v131 >= v133 )
              {
LABEL_203:
                LODWORD(v116) = v132;
                v112 = v487;
                v115 = v492;
                v117 = v130;
                v118 = v496;
                v119 = v498;
                goto LABEL_172;
              }
            }
          }
          v148 = *(__int16 **)(v454 + 120);
          v149 = *((unsigned __int16 *)v129 + 1);
          v150 = *v148;
          v151 = (unsigned __int16 *)(*(_QWORD *)(v454 + 112) + 2 * v149);
          v152 = v151 + 1;
          if ( (unsigned __int16)(*v148 - 1) < (unsigned __int16)v149 )
          {
            v153 = 1;
            v154 = 0;
            while ( 1 )
            {
              v155 = (unsigned int)(v154 + 2);
              v156 = (unsigned __int16)v148[v153] + (unsigned int)v155;
              v154 = v156;
              v157 = &v148[v156];
              if ( (_WORD)v149 == v150 )
                break;
              v150 = *v157;
              v153 = v156 + 1;
              if ( (unsigned __int16)(*v157 - 1) >= (unsigned __int16)v149 )
                goto LABEL_220;
            }
            v151 = (unsigned __int16 *)&v148[v155];
            v152 = (unsigned __int16 *)&v148[v156];
          }
LABEL_220:
          if ( v151 >= v152 )
            goto LABEL_195;
          if ( !v114 )
          {
            do
              ++v151;
            while ( v151 < v152 );
            v454 = v462;
            goto LABEL_195;
          }
          v386 = (__int64)v515;
          v387 = v133;
          v388 = v130;
          while ( 1 )
          {
            v389 = *v151;
            v390 = v386;
            if ( v114 != 1 )
            {
              v391 = v114;
              v392 = 0;
              do
              {
                v393 = v391 >> 1;
                if ( *(unsigned __int16 *)(v386 + 40LL * ((v391 >> 1) + (unsigned int)v392)) <= (int)v389 )
                  v392 = v393 + (unsigned int)v392;
                v391 -= v393;
              }
              while ( v391 > 1 );
              v390 = v386 + 40 * v392;
            }
            if ( *(_WORD *)v390 != v389 )
              goto LABEL_553;
            v394 = *(unsigned int *)(v390 + 32);
            v395 = *(char **)(v390 + 24);
            if ( !(_DWORD)v394 )
            {
              if ( *(_DWORD *)(v390 + 36) )
              {
                v397 = 1;
                goto LABEL_551;
              }
              v401 = 48;
              v398 = 8;
              goto LABEL_558;
            }
            if ( *(_WORD *)&v395[6 * (unsigned int)(v394 - 1)] == v437 )
            {
LABEL_553:
              if ( ++v151 >= v152 )
              {
LABEL_554:
                v130 = v388;
                v133 = v387;
                v462 = *(_QWORD *)(v434 + 208);
                v454 = v462;
                goto LABEL_195;
              }
            }
            else
            {
              v396 = *(_DWORD *)(v390 + 36);
              v397 = v394 + 1;
              if ( v396 < (int)v394 + 1 )
              {
                v398 = 2 * v396;
                if ( 2 * v396 < v397 )
                  v398 = v394 + 1;
                if ( v398 < 8 )
                  v398 = 8;
                if ( v396 < v398 )
                {
                  v401 = 6LL * v398;
LABEL_558:
                  v507 = v387;
                  v504 = v132;
                  v468 = v390;
                  v461 = v398;
                  if ( v395 )
                  {
                    v402 = (char *)off_8C52A8(v395, v401);
                    v403 = v461;
                    v390 = v468;
                    v132 = v504;
                    v387 = v507;
                  }
                  else
                  {
                    v402 = (char *)off_8C52B8(v401);
                    v387 = v507;
                    v132 = v504;
                    v390 = v468;
                    v403 = v461;
                  }
                  v395 = v402;
                  v394 = *(unsigned int *)(v390 + 32);
                  *(_QWORD *)(v390 + 24) = v395;
                  *(_DWORD *)(v390 + 36) = v403;
                  v397 = v394 + 1;
                }
              }
LABEL_551:
              *(_DWORD *)(v390 + 32) = v397;
              v399 = v129[1];
              ++v151;
              v400 = &v395[6 * v394];
              *(_DWORD *)v400 = v437 | (*((unsigned __int16 *)v129 + 3) << 16);
              v400[4] = v399 | 0x80;
              if ( v151 >= v152 )
                goto LABEL_554;
              v386 = (__int64)v515;
            }
          }
        }
LABEL_164:
        v115 = 0;
        if ( (_WORD)v116 )
        {
          if ( (_WORD)v116 != v437 )
          {
            v120 = 257LL * (unsigned __int16)v116;
            v121 = &v471[257 * (unsigned __int16)v116];
            v122 = *v121;
            if ( !*v121 || v122 <= 0xFFu && v471[v120 + v122] != v437 )
            {
              v123 = v122 + 1;
              *v121 = v123;
              v471[v120 + v123] = v437;
            }
          }
          if ( *(_DWORD *)v454 <= 0xDu || (v115 = 0, *(_WORD *)(*(_QWORD *)(v454 + 224) + 2LL * v437) == v437) )
          {
            v139 = *(__int16 **)(v454 + 120);
            v140 = *v139;
            v141 = (unsigned __int16 *)(*(_QWORD *)(v454 + 112) + 2LL * (unsigned __int16)v117);
            v142 = v141 + 1;
            if ( (unsigned __int16)(*v139 - 1) < (unsigned __int16)v117 )
            {
              v143 = 1;
              v144 = 0;
              while ( 1 )
              {
                v145 = (unsigned int)(v144 + 2);
                v146 = (unsigned __int16)v139[v143] + (unsigned int)v145;
                v144 = v146;
                v147 = &v139[v146];
                if ( (_WORD)v117 == v140 )
                  break;
                v140 = *v147;
                v143 = v146 + 1;
                if ( (unsigned __int16)(*v147 - 1) >= (unsigned __int16)v117 )
                  goto LABEL_211;
              }
              v141 = (unsigned __int16 *)&v139[v145];
              v142 = (unsigned __int16 *)&v139[v146];
            }
LABEL_211:
            if ( v141 >= v142 )
            {
              v115 = 0;
              goto LABEL_172;
            }
            if ( !v114 )
            {
              do
                ++v141;
              while ( v141 < v142 );
              v115 = 0;
              v454 = v462;
              goto LABEL_172;
            }
            v410 = v117;
            v411 = (__int64)v515;
            v412 = v119;
            v413 = v118;
            v414 = v410;
            while ( 1 )
            {
              v415 = *v141;
              v416 = v411;
              if ( v114 != 1 )
              {
                v417 = v114;
                v418 = 0;
                do
                {
                  v419 = v417 >> 1;
                  if ( *(unsigned __int16 *)(v411 + 40LL * ((v417 >> 1) + (unsigned int)v418)) <= (int)v415 )
                    v418 = v419 + (unsigned int)v418;
                  v417 -= v419;
                }
                while ( v417 > 1 );
                v416 = v411 + 40 * v418;
              }
              if ( *(_WORD *)v416 == v415 )
              {
                v420 = *(unsigned int *)(v416 + 16);
                v421 = *(_WORD **)(v416 + 8);
                if ( !(_DWORD)v420 )
                {
                  v423 = 1;
                  if ( !*(_DWORD *)(v416 + 20) )
                  {
                    v426 = 16;
                    v424 = 8;
                    goto LABEL_598;
                  }
LABEL_592:
                  *(_DWORD *)(v416 + 16) = v423;
                  ++v141;
                  v421[v420] = v437;
                  if ( v141 >= v142 )
                    goto LABEL_595;
                  v411 = (__int64)v515;
                  continue;
                }
                if ( v421[(unsigned int)(v420 - 1)] != v437 )
                {
                  v422 = *(_DWORD *)(v416 + 20);
                  v423 = v420 + 1;
                  if ( v422 >= (int)v420 + 1 )
                    goto LABEL_592;
                  v424 = 2 * v422;
                  if ( 2 * v422 < v423 )
                    v424 = v420 + 1;
                  if ( v424 < 8 )
                    v424 = 8;
                  if ( v422 >= v424 )
                    goto LABEL_592;
                  v426 = 2LL * v424;
LABEL_598:
                  v497 = v414;
                  v495 = v413;
                  v491 = v416;
                  v469 = v424;
                  if ( v421 )
                  {
                    v427 = off_8C52A8(v421, v426);
                    v428 = v469;
                    v416 = v491;
                    v413 = v495;
                    v414 = v497;
                  }
                  else
                  {
                    v427 = off_8C52B8(v426);
                    v414 = v497;
                    v413 = v495;
                    v416 = v491;
                    v428 = v469;
                  }
                  v421 = v427;
                  v420 = *(unsigned int *)(v416 + 16);
                  *(_QWORD *)(v416 + 8) = v421;
                  *(_DWORD *)(v416 + 20) = v428;
                  v423 = v420 + 1;
                  goto LABEL_592;
                }
              }
              if ( ++v141 >= v142 )
              {
LABEL_595:
                v425 = v414;
                v119 = v412;
                v118 = v413;
                v117 = v425;
                v115 = 0;
                v462 = *(_QWORD *)(v434 + 208);
                v454 = v462;
                break;
              }
            }
          }
        }
LABEL_172:
        v113 = v112 + 1;
        continue;
      }
      break;
    }
LABEL_178:
    ++v437;
    v110 = v114;
    if ( v437 < *(_WORD *)(v454 + 20) )
    {
      v109 = v454;
      continue;
    }
    break;
  }
  v98 = v502;
LABEL_227:
  dest = nullptr;
  v518 = 0;
  if ( !v505 )
    goto LABEL_291;
  v160 = v505;
  v463 = 0;
  v161 = (__int64)v515;
LABEL_232:
  while ( 2 )
  {
    v163 = v161 + 40LL * v463;
    v164 = *(_DWORD *)(v163 + 32);
    if ( v164 )
    {
      if ( HIDWORD(v518) < v164 )
      {
        sub_55D020((__int64)&dest, 6, v164);
        v164 = *(_DWORD *)(v163 + 32);
      }
      v165 = *(const void **)(v163 + 24);
      LODWORD(v518) = v164;
      v166 = v471;
      v167 = (char *)memcpy(dest, v165, 6LL * v164);
      LODWORD(v168) = v164;
      v169 = v98;
      v170 = v161;
      while ( 1 )
      {
        do
        {
          v171 = 0;
          do
          {
            if ( !(_DWORD)v168 )
            {
              v161 = v170;
              v98 = v169;
              if ( v171 )
                LODWORD(v518) = 0;
              ++v463;
              v160 = v516;
              if ( v463 >= (unsigned int)v516 )
                goto LABEL_290;
              goto LABEL_232;
            }
            v168 = (unsigned int)(v168 - 1);
            v172 = &v167[6 * v168];
            v171 = 1;
            v173 = v172[4] & 0x7F;
          }
          while ( v173 <= 1u );
          v174 = *((unsigned __int16 *)v172 + 1);
          v175 = *(unsigned __int16 *)v172;
          LODWORD(v518) = v168;
          v506 = v174;
          v176 = 257 * v175;
          v177 = (unsigned __int16)v166[257 * v175];
        }
        while ( !v177 );
        v484 = v169;
        v488 = v170;
        v479 = v166;
        v178 = &v166[v176 + 1];
        v179 = (v173 - 1) & 0x7F;
        v438 = (__int64)&v166[v176 + 2 + (unsigned int)(v177 - 1)];
        v445 = v174 << 16;
        do
        {
          v184 = *(_DWORD *)(v163 + 32);
          v185 = *(char **)(v163 + 24);
          v191 = *v178;
          v508 = v445 | v191;
          LOBYTE(v509) = v179 & 0x7F;
          if ( v184 )
          {
            if ( v184 != 1 )
            {
              v192 = *(_DWORD *)(v163 + 32);
              v180 = 0;
              while ( 1 )
              {
                while ( 1 )
                {
                  v194 = v192 >> 1;
                  v195 = (v192 >> 1) + v180;
                  v196 = &v185[6 * v195];
                  if ( *(_WORD *)v196 < (unsigned __int16)v191 )
                    goto LABEL_270;
                  if ( (unsigned __int16)v191 >= *(_WORD *)v196 )
                    break;
LABEL_268:
                  v192 -= v194;
                  if ( v192 <= 1 )
                    goto LABEL_271;
                }
                v193 = v196[4] & 0x7F;
                if ( v193 >= v179 )
                {
                  if ( v179 >= v193 && v196[4] >= 0 && v506 >= *((_WORD *)v196 + 1) )
                    v180 += v192 >> 1;
                  goto LABEL_268;
                }
LABEL_270:
                v192 -= v194;
                v180 = v195;
                if ( v192 <= 1 )
                {
LABEL_271:
                  v197 = &v185[6 * v180];
                  goto LABEL_272;
                }
              }
            }
            v197 = *(char **)(v163 + 24);
            v180 = 0;
LABEL_272:
            if ( *(_WORD *)v197 < (unsigned __int16)v191 )
              goto LABEL_284;
            if ( (unsigned __int16)v191 < *(_WORD *)v197 )
              goto LABEL_279;
            v198 = v197[4] & 0x7F;
            if ( v198 < v179 )
              goto LABEL_284;
            if ( v179 < v198 || v197[4] < 0 )
              goto LABEL_279;
            v199 = *((_WORD *)v197 + 1);
            if ( v199 < v506 )
            {
LABEL_284:
              ++v180;
              goto LABEL_279;
            }
            if ( v506 >= v199 )
              goto LABEL_258;
LABEL_279:
            v182 = v184 + 1;
            v455 = v180 + 1;
            if ( v184 < v180 )
              goto LABEL_575;
            v183 = *(char **)(v163 + 24);
            v181 = 6LL * v180;
            if ( *(_DWORD *)(v163 + 36) < v182 )
            {
LABEL_243:
              v473 = v182;
              if ( v185 )
                v183 = (char *)off_8C52A8(v185, 6LL * v182);
              else
                v183 = (char *)off_8C52B8(6LL * v182);
              *(_QWORD *)(v163 + 24) = v183;
              v184 = *(_DWORD *)(v163 + 32);
              *(_DWORD *)(v163 + 36) = v473;
            }
            v185 = &v183[v181];
            if ( v180 < v184 )
              memmove(&v183[6 * v455], &v183[v181], 6LL * (v184 - v180));
            goto LABEL_248;
          }
          v180 = *(_DWORD *)(v163 + 36);
          if ( !v180 )
          {
            v455 = 1;
            v181 = 0;
            v182 = 1;
            goto LABEL_243;
          }
LABEL_248:
          v186 = (char *)dest;
          *(_DWORD *)v185 = v508;
          *((_WORD *)v185 + 2) = v509;
          v187 = (unsigned int)v518;
          v188 = HIDWORD(v518);
          ++*(_DWORD *)(v163 + 32);
          if ( v188 < (int)v187 + 1 )
          {
            v189 = 2 * v188;
            if ( 2 * v188 < (int)v187 + 1 )
              v189 = v187 + 1;
            if ( v189 < 8 )
              v189 = 8;
            if ( v188 < v189 )
            {
              if ( v186 )
                v186 = (char *)off_8C52A8(v186, 6LL * v189);
              else
                v186 = (char *)off_8C52B8(6LL * v189);
              dest = v186;
              HIDWORD(v518) = v189;
            }
          }
          LODWORD(v518) = v187 + 1;
          v190 = &v186[6 * v187];
          *(_DWORD *)v190 = v508;
          *((_WORD *)v190 + 2) = v509;
LABEL_258:
          ++v178;
        }
        while ( v178 != (unsigned __int16 *)v438 );
        v166 = v479;
        v169 = v484;
        v170 = v488;
        v167 = (char *)dest;
        LODWORD(v168) = v518;
      }
    }
    v162 = *(void **)(v163 + 8);
    if ( v162 )
    {
      off_8C52A0(v162);
      *(_QWORD *)(v163 + 8) = 0;
      *(_QWORD *)(v163 + 16) = 0;
    }
    memmove((void *)v163, (const void *)(v161 + 40LL * (v463 + 1)), 40LL * (--v160 - v463));
    LODWORD(v516) = v160;
    if ( v463 < v160 )
      continue;
    break;
  }
LABEL_290:
  v505 = v160;
LABEL_291:
  memset(v522, 0, 0x68u);
  if ( !v98 )
  {
LABEL_339:
    v490 = 1;
    goto LABEL_340;
  }
  v446 = v513;
  v493 = (char *)&v513[2 * v98];
  while ( 2 )
  {
    v480 = *(_DWORD *)v446;
    v200 = (unsigned __int16 *)(*(_QWORD *)(v434 + 80) + 20LL * (unsigned __int16)*(_DWORD *)v446);
    v201 = v200[6];
    v439 = *v200;
    if ( *v200 == 0xFFFF )
      goto LABEL_338;
    v202 = v505;
    if ( v505 )
    {
      v203 = (__int64)v515;
      if ( v505 != 1 )
      {
        v204 = 0;
        do
        {
          v205 = v202 >> 1;
          if ( v515->m128i_u16[20 * (v202 >> 1) + 20 * (unsigned int)v204] <= (int)v439 )
            v204 = v205 + (unsigned int)v204;
          v202 -= v205;
        }
        while ( v202 > 1 );
        v203 = (__int64)&v515->m128i_i64[5 * v204];
      }
      if ( v439 == *(_WORD *)v203 )
      {
        sub_55F020((char **)&v522[3], v522[3].m128i_u32[2], 0, v522[0].m128i_u32[2], (const void *)v522[0].m128i_i64[0]);
        v522[0].m128i_i32[2] = 0;
        sub_55F020((char **)&v522[3], v522[3].m128i_u32[2], 0, v522[2].m128i_u32[2], (const void *)v522[2].m128i_i64[0]);
        v206 = *(_DWORD *)(v203 + 16);
        v522[2].m128i_i32[2] = 0;
        if ( v206 )
        {
          v474 = v201;
          v207 = v203;
          v208 = 0;
          v209 = v522[0].m128i_u32[3];
          v210 = v522[3].m128i_i32[2];
          v211 = (void *)v522[0].m128i_i64[0];
          for ( j = v522[0].m128i_u32[2]; ; j = v218 )
          {
            v213 = *(unsigned __int16 *)(*(_QWORD *)(v207 + 8) + 2LL * v208);
            memset(&v521[4], 0, 60);
            v214 = (v439 << 16) | v213;
            if ( v210 )
            {
              v522[3].m128i_i32[2] = v210 - 1;
              v216 = (unsigned int)(v210 - 1);
              v217 = *(char **)(v522[3].m128i_i64[0] + 8 * v216);
            }
            else
            {
              v215 = (char *)off_8C52B8(0x46u);
              v210 = 0;
              LODWORD(v216) = 0;
              v217 = v215;
            }
            *(_DWORD *)v521 = v214;
            v218 = j + 1;
            *(_WORD *)&v521[64] = 1;
            v219 = _mm_load_si128((const __m128i *)v521);
            *(_WORD *)&v521[66] = v480 + 1;
            v220 = _mm_load_si128((const __m128i *)&v521[16]);
            *(__m128i *)v217 = v219;
            v221 = _mm_load_si128((const __m128i *)&v521[32]);
            *(_WORD *)&v521[68] = v439;
            v222 = _mm_load_si128((const __m128i *)&v521[48]);
            v223 = *(_QWORD *)&v521[62];
            *((__m128i *)v217 + 1) = v220;
            *((__m128i *)v217 + 3) = v222;
            *((__m128i *)v217 + 2) = v221;
            *(_QWORD *)(v217 + 62) = v223;
            if ( v209 < (int)j + 1 )
            {
              v224 = 2 * v209;
              if ( 2 * v209 < v218 )
                v224 = j + 1;
              if ( v224 < 8 )
                v224 = 8;
              if ( v209 < v224 )
              {
                v489 = v210;
                v485 = v216;
                if ( v211 )
                {
                  v225 = off_8C52A8(v211, 8LL * v224);
                  LODWORD(v216) = v485;
                  v210 = v489;
                  v218 = j + 1;
                }
                else
                {
                  v225 = off_8C52B8(8LL * v224);
                  v218 = j + 1;
                  v210 = v489;
                  LODWORD(v216) = v485;
                }
                v211 = v225;
                v522[0].m128i_i64[0] = (__int64)v225;
                v209 = v224;
                v522[0].m128i_i32[3] = v224;
              }
            }
            v522[0].m128i_i32[2] = v218;
            ++v208;
            *((_QWORD *)v211 + j) = v217;
            if ( v208 >= *(_DWORD *)(v207 + 16) )
            {
              v201 = v474;
              goto LABEL_329;
            }
            if ( !v210 )
              break;
            v210 = v216;
          }
          v226 = v211;
          v227 = v208;
          v228 = v207;
          v229 = v218;
          v230 = v209;
          v231 = v229;
          v232 = v227;
          v233 = v226;
          do
          {
            v464 = v230;
            v234 = *(unsigned __int16 *)(*(_QWORD *)(v228 + 8) + 2LL * v232);
            memset(&v521[4], 0, 60);
            v235 = (__m128i *)off_8C52B8(0x46u);
            v230 = v464;
            v236 = v231;
            v237 = v235;
            *(_DWORD *)v521 = (v439 << 16) | v234;
            ++v231;
            *(_WORD *)&v521[64] = 1;
            v238 = _mm_load_si128((const __m128i *)v521);
            *(_WORD *)&v521[66] = v480 + 1;
            v239 = _mm_load_si128((const __m128i *)&v521[16]);
            *v235 = v238;
            v240 = _mm_load_si128((const __m128i *)&v521[32]);
            *(_WORD *)&v521[68] = v439;
            v241 = _mm_load_si128((const __m128i *)&v521[48]);
            v242 = *(_QWORD *)&v521[62];
            v237[1] = v239;
            v237[3] = v241;
            v237[2] = v240;
            *(__int64 *)((char *)&v237[3].m128i_i64[1] + 6) = v242;
            if ( v464 < v231 )
            {
              v243 = 2 * v464;
              if ( 2 * v464 < v231 )
                v243 = v231;
              if ( v243 < 8 )
                v243 = 8;
              if ( v464 < v243 )
              {
                v465 = v236;
                if ( v233 )
                  v244 = off_8C52A8(v233, 8LL * v243);
                else
                  v244 = off_8C52B8(8LL * v243);
                v236 = v465;
                v233 = v244;
                v522[0].m128i_i64[0] = (__int64)v244;
                v230 = v243;
                v522[0].m128i_i32[3] = v243;
              }
            }
            v522[0].m128i_i32[2] = v231;
            ++v232;
            *((_QWORD *)v233 + v236) = v237;
          }
          while ( v232 < *(_DWORD *)(v228 + 16) );
          v201 = v474;
        }
LABEL_329:
        v522[6].m128i_i8[0] = 0;
        sub_560340(v434, (__int64 *)&v515, v522[0].m128i_i64);
        if ( !v522[6].m128i_i8[0] )
        {
          v245 = v522[5].m128i_u32[2];
          if ( v522[5].m128i_i32[2] )
          {
            if ( v522[4].m128i_i32[2] )
            {
              v246 = *(_QWORD *)(v434 + 80);
              v247 = (unsigned __int16 *)v522[4].m128i_i64[0];
              v248 = v522[4].m128i_i64[0] + 2LL * v522[4].m128i_u32[2];
              do
              {
                v249 = v246 + 20LL * *v247;
                v250 = *(_WORD *)(v249 + 12);
                if ( v201 < v250 && v250 != 0xFFFF && (*(_BYTE *)(v249 + 18) & 0x10) == 0 )
                  *(_WORD *)(v249 + 18) &= 0xFE7Fu;
                ++v247;
              }
              while ( (unsigned __int16 *)v248 != v247 );
            }
            goto LABEL_338;
          }
          if ( !v522[4].m128i_i32[2] )
            __assert_fail(
              "analysis.final_step_indices.size > 0",
              "lib/src/./query.c",
              0x6EAu,
              "ts_query__analyze_patterns");
          v429 = *(_DWORD *)(v434 + 152);
          v430 = *(__int32 **)(v434 + 144);
          if ( v429 )
          {
            v431 = *(unsigned __int16 *)(v522[4].m128i_i64[0] + 2LL * (unsigned int)(v522[4].m128i_i32[2] - 1));
            if ( v429 == 1 )
            {
              if ( *((unsigned __int16 *)v430 + 2) >= v431 )
                goto LABEL_618;
            }
            else
            {
              v432 = *(_DWORD *)(v434 + 152);
              do
              {
                if ( LOWORD(v430[2 * (v432 >> 1) + 1 + 2 * v245]) <= v431 )
                  v245 += v432 >> 1;
                v432 -= v432 >> 1;
              }
              while ( v432 > 1 );
              v433 = (LOWORD(v430[2 * v245 + 1]) < v431) + v245;
              if ( (unsigned int)v433 < v429 )
              {
LABEL_617:
                v430 += 2 * v433;
LABEL_618:
                v409 = *v430;
                goto LABEL_573;
              }
            }
          }
          v433 = v429 - 1;
          goto LABEL_617;
        }
        v345 = *(_DWORD *)(v434 + 88);
        v346 = (unsigned __int16)v480 + 1;
        if ( v346 < v345 )
        {
          v347 = *(_QWORD *)(v434 + 80) + 20LL * (int)v346;
          do
          {
            v348 = *(_WORD *)(v347 + 12);
            if ( v201 >= v348 || v348 == 0xFFFF )
              break;
            if ( (*(_BYTE *)(v347 + 18) & 0x10) == 0 )
              *(_WORD *)(v347 + 18) &= 0xFE7Fu;
            ++v346;
            v347 += 20;
          }
          while ( v346 < v345 );
        }
LABEL_338:
        v446 += 2;
        if ( v446 == (unsigned __int16 *)v493 )
          goto LABEL_339;
        continue;
      }
    }
    break;
  }
  v404 = *(_DWORD *)(v434 + 152);
  v405 = (unsigned __int16)v480 + 1;
  if ( !v404 )
    goto LABEL_619;
  v406 = *(__int32 **)(v434 + 144);
  if ( v404 != 1 )
  {
    v407 = 0;
    do
    {
      v408 = v404 >> 1;
      if ( LOWORD(v406[2 * (v404 >> 1) + 1 + 2 * (unsigned int)v407]) <= v405 )
        v407 = v408 + (unsigned int)v407;
      v404 -= v408;
    }
    while ( v404 > 1 );
    v406 += 2 * v407;
  }
  if ( v405 != *((unsigned __int16 *)v406 + 2) )
LABEL_619:
    __assert_fail("child_exists", "lib/src/./query.c", 0x6AFu, "ts_query__analyze_patterns");
  v409 = *v406;
LABEL_573:
  v490 = 0;
  *a4 = v409;
LABEL_340:
  v251 = v434;
  v252 = *(_DWORD *)(v434 + 136);
  if ( !v252 )
  {
    v253 = nullptr;
    goto LABEL_359;
  }
  v253 = nullptr;
  v254 = 0;
  v255 = 0;
  while ( 2 )
  {
    v256 = (unsigned int *)(*(_QWORD *)(v251 + 128) + 28LL * v254);
    v257 = v256[2];
    v258 = v256[3];
    if ( (unsigned int)v257 < (unsigned int)v257 + v258 )
    {
      v456 = *(_QWORD *)(v251 + 128) + 28LL * v254;
      v259 = v251;
      v466 = v254;
      v260 = v255;
      v261 = 8 * v257;
      v262 = 0;
      v263 = 8 * (v257 + v258 - 1 + 1);
      while ( 1 )
      {
        v264 = (_DWORD *)(v261 + *(_QWORD *)(v259 + 112));
        if ( *v264 != 1 )
          goto LABEL_344;
        v265 = v264[1];
        v440 = v265;
        if ( v262 )
        {
          v349 = (unsigned __int16)v265;
          if ( v262 == 1 )
          {
            v352 = v253;
            v351 = 0;
          }
          else
          {
            v350 = v262;
            v351 = 0;
            do
            {
              if ( v253[(v350 >> 1) + v351] <= v349 )
                v351 += v350 >> 1;
              v350 -= v350 >> 1;
            }
            while ( v350 > 1 );
            v352 = &v253[v351];
          }
          v353 = *v352 - v349;
          if ( v353 )
          {
            v354 = v262 + 1;
            v355 = v351 - ((v353 < 0x80000000) - 1);
            v356 = v355 + 1;
            if ( v262 < v355 )
              goto LABEL_575;
            v451 = v355;
            if ( v260 >= v354 )
            {
              v357 = v260;
              v260 = v355;
            }
            else
            {
              v481 = v259;
              v357 = v262 + 1;
              v260 = v355;
              v476 = v355 + 1;
              v358 = 2LL * v354;
              if ( v253 )
                goto LABEL_458;
LABEL_474:
              v363 = (unsigned __int16 *)off_8C52B8(v358);
              v259 = v481;
              v356 = v476;
              v253 = v363;
LABEL_459:
              v354 = v357;
            }
            v266 = &v253[v451];
            if ( v260 < v262 )
            {
              v482 = v259;
              v477 = v354;
              memmove(&v253[v356], v266, 2LL * (v262 - v260));
              v266 = &v253[v451];
              v354 = v477;
              v259 = v482;
            }
            v260 = v357;
            v262 = v354;
            goto LABEL_349;
          }
LABEL_344:
          v261 += 8;
          if ( v261 == v263 )
            goto LABEL_350;
        }
        else
        {
          if ( !v260 )
          {
            v481 = v259;
            v357 = 1;
            v358 = 2;
            v451 = 0;
            v476 = 1;
            if ( !v253 )
              goto LABEL_474;
LABEL_458:
            v359 = (unsigned __int16 *)off_8C52A8(v253, v358);
            v356 = v476;
            v259 = v481;
            v253 = v359;
            goto LABEL_459;
          }
          v266 = v253;
          v262 = 1;
LABEL_349:
          v261 += 8;
          *v266 = v440;
          if ( v261 == v263 )
          {
LABEL_350:
            v267 = v262;
            v254 = v466;
            v255 = v260;
            v252 = *(_DWORD *)(v259 + 136);
            v256 = (unsigned int *)v456;
            v251 = v259;
            goto LABEL_351;
          }
        }
      }
    }
    v267 = 0;
LABEL_351:
    v268 = *v256;
    v269 = v256[1];
    if ( (unsigned int)v268 >= (unsigned int)v268 + v269 )
      goto LABEL_358;
    v270 = *(_QWORD *)(v251 + 80);
    v271 = v270 + 20 * v268 + 12;
    v272 = v270 + 20 * (v269 - 1 + v268) + 32;
    while ( 2 )
    {
      v273 = (unsigned __int16 *)(v271 - 6);
      while ( 1 )
      {
        v274 = *v273;
        if ( *v273 == 0xFFFF )
          goto LABEL_357;
        if ( v267 )
          break;
        if ( (unsigned __int16 *)v271 == ++v273 )
          goto LABEL_357;
      }
      v443 = v271;
      while ( 2 )
      {
        if ( v267 == 1 )
        {
          if ( *v253 == v274 )
            break;
          goto LABEL_470;
        }
        v360 = v267;
        v361 = 0;
        do
        {
          v362 = v360 >> 1;
          if ( v253[(v360 >> 1) + (unsigned int)v361] <= (int)v274 )
            v361 = v362 + (unsigned int)v361;
          v360 -= v362;
        }
        while ( v360 > 1 );
        if ( v253[v361] != v274 )
        {
LABEL_470:
          if ( (unsigned __int16 *)v443 == ++v273 || (v274 = *v273, *v273 == 0xFFFF) )
          {
            v271 = v443;
            goto LABEL_357;
          }
          continue;
        }
        break;
      }
      v271 = v443;
      *(_BYTE *)(v443 + 6) &= ~0x80u;
LABEL_357:
      v271 += 20;
      if ( v271 != v272 )
        continue;
      break;
    }
LABEL_358:
    if ( ++v254 < v252 )
      continue;
    break;
  }
LABEL_359:
  v275 = *(_DWORD *)(v434 + 88);
  if ( v275 )
  {
    v276 = v275 - 1;
    if ( v275 != 1 )
    {
      v277 = 20LL * (unsigned int)(v275 - 2);
      v278 = *(_QWORD *)(v434 + 80);
      do
      {
        v279 = v278 + 20LL * v276;
        v280 = v278 + v277;
        v281 = v276;
        v282 = 1;
        do
        {
          v283 = v279;
          if ( *(_WORD *)(v279 + 12) != 0xFFFF && *(char *)(v279 + 18) >= 0 )
          {
            while ( 1 )
            {
              v284 = *(unsigned __int16 *)(v283 + 14);
              if ( (_WORD)v284 == 0xFFFF || (unsigned __int16)v284 < v281 )
                break;
              v283 = v278 + 20 * v284;
              if ( *(char *)(v283 + 18) < 0 )
                goto LABEL_373;
            }
            v285 = *(_BYTE *)(v280 + 18);
            if ( (v285 & 0x10) == 0 && *(_WORD *)(v280 + 12) != 0xFFFF && *(char *)(v280 + 18) < 0 )
            {
              v282 = 0;
              *(_BYTE *)(v280 + 18) = v285 & 0x7F;
            }
          }
LABEL_373:
          v279 -= 20;
          v280 -= 20;
          --v281;
        }
        while ( v281 );
      }
      while ( !v282 );
    }
  }
  v522[6].m128i_i8[0] = 0;
  v286 = v511;
  if ( !(_DWORD)i )
    goto LABEL_485;
  v287 = v434;
  v500 = v253;
  v494 = &v511[(unsigned int)i];
  v501 = v511;
  while ( 2 )
  {
    v441 = (__int16 *)(*(_QWORD *)(v287 + 96) + 6LL * *v286);
    sub_55F020((char **)&v522[3], v522[3].m128i_u32[2], 0, v522[0].m128i_u32[2], (const void *)v522[0].m128i_i64[0]);
    v522[0].m128i_i32[2] = 0;
    sub_55F020((char **)&v522[3], v522[3].m128i_u32[2], 0, v522[2].m128i_u32[2], (const void *)v522[2].m128i_i64[0]);
    v288 = 0;
    v522[2].m128i_i32[2] = 0;
    if ( v505 )
    {
      v289 = (unsigned __int16 *)v515;
      v486 = v287;
      v503 = v286;
      v475 = (unsigned __int16 *)v515 + 20 * v505;
      do
      {
        while ( 1 )
        {
          v291 = *v289;
          if ( *v289 != 0xFFFF )
          {
            if ( v291 == 0xFFFE
              || (v290 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v486 + 208) + 104LL) + 3LL * v291), !*v290) && !v290[1] )
            {
              if ( *((_DWORD *)v289 + 4) )
                break;
            }
          }
LABEL_381:
          v289 += 20;
          if ( v475 == v289 )
            goto LABEL_412;
        }
        v292 = v522[0].m128i_u32[3];
        v293 = v289;
        v294 = *v289;
        v295 = (void *)v522[0].m128i_i64[0];
        v296 = 0;
        v297 = v522[3].m128i_i32[2];
        for ( k = v522[0].m128i_u32[2]; ; k = v306 )
        {
          v299 = *((_QWORD *)v293 + 1);
          *(_OWORD *)&v521[36] = v288;
          *(_OWORD *)&v521[4] = v288;
          v300 = *(unsigned __int16 *)(v299 + 2LL * v296);
          *(_OWORD *)&v521[20] = v288;
          *(_OWORD *)&v521[48] = v288;
          v301 = v300 | (v294 << 16);
          v302 = *v441;
          if ( v297 )
          {
            v522[3].m128i_i32[2] = v297 - 1;
            v304 = (unsigned int)(v297 - 1);
            v305 = *(char **)(v522[3].m128i_i64[0] + 8 * v304);
          }
          else
          {
            v457 = v295;
            v447 = v294;
            v303 = (char *)off_8C52B8(0x46u);
            v297 = 0;
            LODWORD(v304) = 0;
            v295 = v457;
            LOWORD(v294) = v447;
            v305 = v303;
            v288 = 0;
          }
          *(_WORD *)&v521[66] = v302;
          v306 = k + 1;
          v307 = _mm_load_si128((const __m128i *)&v521[16]);
          *(_DWORD *)v521 = v301;
          v308 = _mm_load_si128((const __m128i *)&v521[32]);
          v309 = _mm_load_si128((const __m128i *)v521);
          *((__m128i *)v305 + 1) = v307;
          v310 = _mm_load_si128((const __m128i *)&v521[48]);
          *(_WORD *)&v521[64] = 1;
          *(_WORD *)&v521[68] = v294;
          v311 = *(_QWORD *)&v521[62];
          *((__m128i *)v305 + 3) = v310;
          *(__m128i *)v305 = v309;
          *(_QWORD *)(v305 + 62) = v311;
          *((__m128i *)v305 + 2) = v308;
          if ( v292 < (int)k + 1 )
          {
            v312 = 2 * v292;
            if ( 2 * v292 < v306 )
              v312 = k + 1;
            if ( v312 < 8 )
              v312 = 8;
            if ( v292 < v312 )
            {
              v458 = v297;
              v448 = v304;
              if ( v295 )
              {
                v313 = off_8C52A8(v295, 8LL * v312);
                LODWORD(v304) = v448;
                v297 = v458;
              }
              else
              {
                v313 = off_8C52B8(8LL * v312);
                v297 = v458;
                LODWORD(v304) = v448;
              }
              v288 = 0;
              v295 = v313;
              v522[0].m128i_i64[0] = (__int64)v313;
              v292 = v312;
              v522[0].m128i_i32[3] = v312;
            }
          }
          v522[0].m128i_i32[2] = k + 1;
          ++v296;
          *((_QWORD *)v295 + k) = v305;
          if ( v296 >= *((_DWORD *)v293 + 4) )
          {
            v289 = v293;
            goto LABEL_381;
          }
          v294 = *v293;
          if ( !v297 )
            break;
          v297 = v304;
        }
        v314 = v306;
        v315 = v293;
        v316 = *v293;
        v317 = v296;
        while ( 1 )
        {
          v318 = *((_QWORD *)v315 + 1);
          *(_OWORD *)&v521[36] = v288;
          v319 = *(unsigned __int16 *)(v318 + 2LL * v317);
          v459 = v295;
          *(_OWORD *)&v521[4] = v288;
          v320 = v319 | (v316 << 16);
          *(_OWORD *)&v521[20] = v288;
          *(_OWORD *)&v521[48] = v288;
          v449 = *v441;
          v321 = (char *)off_8C52B8(0x46u);
          v288 = 0;
          *(_DWORD *)v521 = v320;
          v322 = v321;
          v323 = _mm_load_si128((const __m128i *)v521);
          v324 = v314 + 1;
          v325 = _mm_load_si128((const __m128i *)&v521[16]);
          *(_WORD *)&v521[64] = 1;
          v326 = _mm_load_si128((const __m128i *)&v521[32]);
          *(__m128i *)v321 = v323;
          v327 = _mm_load_si128((const __m128i *)&v521[48]);
          *((__m128i *)v321 + 1) = v325;
          v295 = v459;
          *((__m128i *)v321 + 2) = v326;
          *((__m128i *)v321 + 3) = v327;
          *(_WORD *)&v521[66] = v449;
          *(_WORD *)&v521[68] = v316;
          *(_QWORD *)(v321 + 62) = *(_QWORD *)&v521[62];
          if ( v292 < (int)v314 + 1 )
          {
            v328 = 2 * v292;
            if ( 2 * v292 < v324 )
              v328 = v314 + 1;
            if ( v328 < 8 )
              v328 = 8;
            if ( v292 < v328 )
            {
              v288 = 0;
              if ( v459 )
                v295 = off_8C52A8(v459, 8LL * v328);
              else
                v295 = off_8C52B8(8LL * v328);
              v522[0].m128i_i64[0] = (__int64)v295;
              v292 = v328;
              v522[0].m128i_i32[3] = v328;
            }
          }
          v522[0].m128i_i32[2] = v314 + 1;
          ++v317;
          *((_QWORD *)v295 + v314) = v322;
          if ( v317 >= *((_DWORD *)v315 + 4) )
            break;
          v316 = *v315;
          v314 = v324;
        }
        v289 = v315 + 20;
      }
      while ( v475 != v315 + 20 );
LABEL_412:
      v286 = v503;
      v287 = v486;
    }
    sub_560340(v287, (__int64 *)&v515, v522[0].m128i_i64);
    if ( !v522[5].m128i_i32[2] )
      goto LABEL_483;
    v467 = v286;
    v329 = v287;
    v330 = *(_DWORD *)(v287 + 200);
    v331 = (unsigned __int16)v441[1];
    v332 = (unsigned __int16 *)v522[5].m128i_i64[0];
    v442 = v522[5].m128i_i64[0] + 2LL * v522[5].m128i_u32[2];
    *(_BYTE *)(*(_QWORD *)(v287 + 128) + 28 * v331 + 24) = 1;
    while ( 2 )
    {
      v340 = *v332;
      v339 = *(char **)(v329 + 192);
      if ( !v330 )
      {
        v333 = *(_DWORD *)(v329 + 204);
        if ( v333 )
          goto LABEL_422;
        v334 = 0;
        v335 = 1;
        v336 = 1;
        goto LABEL_417;
      }
      if ( v330 == 1 )
      {
        v343 = *(char **)(v329 + 192);
        v342 = 0;
      }
      else
      {
        v341 = v330;
        v342 = 0;
        do
        {
          if ( *(unsigned __int16 *)&v339[2 * (v341 >> 1) + 2 * v342] <= (int)v340 )
            v342 += v341 >> 1;
          v341 -= v341 >> 1;
        }
        while ( v341 > 1 );
        v343 = &v339[2 * v342];
      }
      v344 = *(unsigned __int16 *)v343 - v340;
      if ( !v344 )
        goto LABEL_423;
      v336 = v330 + 1;
      v333 = v342 - ((v344 < 0x80000000) - 1);
      v335 = v333 + 1;
      if ( v330 < v333 )
        goto LABEL_575;
      v337 = *(char **)(v329 + 192);
      v334 = 2LL * v333;
      if ( *(_DWORD *)(v329 + 204) < v336 )
      {
LABEL_417:
        v460 = v336;
        v450 = v334;
        if ( v339 )
        {
          v337 = (char *)off_8C52A8(v339, 2LL * v336);
          v334 = v450;
          v338 = v460;
        }
        else
        {
          v337 = (char *)off_8C52B8(2LL * v336);
          v338 = v460;
          v334 = v450;
        }
        *(_QWORD *)(v329 + 192) = v337;
        v330 = *(_DWORD *)(v329 + 200);
        *(_DWORD *)(v329 + 204) = v338;
      }
      v339 = &v337[v334];
      if ( v333 < v330 )
        memmove(&v337[2 * v335], v339, 2LL * (v330 - v333));
LABEL_422:
      *(_WORD *)v339 = v340;
      v330 = *(_DWORD *)(v329 + 200) + 1;
      *(_DWORD *)(v329 + 200) = v330;
LABEL_423:
      if ( (unsigned __int16 *)v442 != ++v332 )
        continue;
      break;
    }
    v287 = v329;
    v286 = v467;
LABEL_483:
    if ( v494 != ++v286 )
      continue;
    break;
  }
  v253 = v500;
  v286 = v501;
LABEL_485:
  v364 = v515;
  if ( v505 )
  {
    v365 = &v515->m128i_i8[8];
    v366 = (__int64)v515;
    v367 = (__int64)&v515->m128i_i64[5 * v505 + 1];
    do
    {
      if ( *(_QWORD *)v365 )
      {
        off_8C52A0(*(void **)v365);
        *(_QWORD *)v365 = 0;
        *((_QWORD *)v365 + 1) = 0;
      }
      v368 = *((void **)v365 + 2);
      if ( v368 )
      {
        off_8C52A0(v368);
        *((_QWORD *)v365 + 2) = 0;
        *((_QWORD *)v365 + 3) = 0;
      }
      v365 += 40;
    }
    while ( v365 != (char *)v367 );
    v364 = (void *)v366;
  }
  if ( v364 )
    off_8C52A0(v364);
  v369 = (void *)v522[0].m128i_i64[0];
  if ( v522[0].m128i_i32[2] )
  {
    v370 = (void **)v522[0].m128i_i64[0];
    v371 = v522[0].m128i_i64[0] + 8LL * v522[0].m128i_u32[2];
    do
    {
      v372 = *v370++;
      off_8C52A0(v372);
    }
    while ( v370 != (void **)v371 );
  }
  if ( v369 )
    off_8C52A0(v369);
  v373 = (void *)v522[1].m128i_i64[0];
  if ( v522[1].m128i_i32[2] )
  {
    v374 = (void **)v522[1].m128i_i64[0];
    v375 = v522[1].m128i_i64[0] + 8LL * v522[1].m128i_u32[2];
    do
    {
      v376 = *v374++;
      off_8C52A0(v376);
    }
    while ( v374 != (void **)v375 );
  }
  if ( v373 )
    off_8C52A0(v373);
  v377 = (void *)v522[2].m128i_i64[0];
  if ( v522[2].m128i_i32[2] )
  {
    v378 = (void **)v522[2].m128i_i64[0];
    v379 = v522[2].m128i_i64[0] + 8LL * v522[2].m128i_u32[2];
    do
    {
      v380 = *v378++;
      off_8C52A0(v380);
    }
    while ( v378 != (void **)v379 );
  }
  if ( v377 )
    off_8C52A0(v377);
  v381 = (void *)v522[3].m128i_i64[0];
  if ( v522[3].m128i_i32[2] )
  {
    v382 = (void **)v522[3].m128i_i64[0];
    v383 = v522[3].m128i_i64[0] + 8LL * v522[3].m128i_u32[2];
    do
    {
      v384 = *v382++;
      off_8C52A0(v384);
    }
    while ( v382 != (void **)v383 );
  }
  if ( v381 )
    off_8C52A0(v381);
  if ( v522[4].m128i_i64[0] )
    off_8C52A0((void *)v522[4].m128i_i64[0]);
  if ( v522[5].m128i_i64[0] )
    off_8C52A0((void *)v522[5].m128i_i64[0]);
  if ( dest )
    off_8C52A0(dest);
  if ( v286 )
    off_8C52A0(v286);
  if ( v513 )
    off_8C52A0(v513);
  if ( v253 )
    off_8C52A0(v253);
  off_8C52A0(v471);
  if ( !v490 )
  {
    *a5 = 5;
    sub_57C790(v434);
    return 0;
  }
  v385 = *(void **)(v434 + 176);
  if ( v385 )
  {
    off_8C52A0(v385);
    *(_QWORD *)(v434 + 176) = 0;
    *(_QWORD *)(v434 + 184) = 0;
  }
  return v434;
}
