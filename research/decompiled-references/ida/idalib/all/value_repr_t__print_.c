__int64 __fastcall value_repr_t__print_(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  _BYTE *v11; // rsi
  char *v12; // rbx
  __int64 v13; // r15
  int v14; // eax
  _BYTE *v15; // rsi
  unsigned __int64 v16; // r14
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  _BYTE *v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r14
  _BYTE *v22; // rsi
  __int64 v23; // rbx
  unsigned __int64 v24; // r14
  _BYTE *v25; // rsi
  unsigned __int64 v26; // r14
  __int64 v27; // rbx
  _BYTE *v28; // rsi
  unsigned __int64 v29; // r14
  __int64 v30; // rbx
  _BYTE *v31; // rsi
  unsigned __int64 v32; // r14
  __int64 v33; // rbx
  _BYTE *v34; // rsi
  unsigned __int64 v35; // r14
  __int64 v36; // rbx
  _BYTE *v37; // rsi
  unsigned __int64 v38; // r14
  __int64 v39; // rbx
  _BYTE *v40; // rsi
  unsigned __int64 v41; // r14
  __int64 v42; // rbx
  _BYTE *v43; // rsi
  const char *v44; // rax
  const char *v45; // rbx
  __int64 v46; // r14
  unsigned __int64 v47; // r15
  _BYTE *v48; // rsi
  unsigned __int64 v49; // r15
  __int64 v50; // r14
  _BYTE *v51; // rsi
  size_t v52; // rax
  __int64 v53; // r14
  size_t v54; // r15
  size_t v55; // r8
  _BYTE *v56; // rsi
  size_t v57; // rdx
  char *v58; // rdi
  unsigned __int64 v59; // r14
  __int64 v60; // rbx
  _BYTE *v61; // rsi
  unsigned __int64 v62; // r14
  __int64 v63; // rbx
  _BYTE *v64; // rsi
  char *v65; // rbx
  __int64 v66; // r15
  unsigned __int64 v67; // rdx
  _BYTE *v68; // rsi
  unsigned __int64 v69; // rdx
  __int64 v70; // r15
  _BYTE *v71; // rsi
  unsigned __int64 v72; // rdx
  __int64 v73; // r15
  _BYTE *v74; // rsi
  unsigned __int64 v75; // rdx
  __int64 v76; // r15
  _BYTE *v77; // rsi
  unsigned __int64 v78; // rdx
  __int64 v79; // r15
  _BYTE *v80; // rsi
  const char *v81; // r15
  __int64 v82; // r8
  unsigned __int64 v83; // rdx
  _BYTE *v84; // rsi
  unsigned __int64 v85; // rdx
  __int64 v86; // r8
  _BYTE *v87; // rsi
  size_t v88; // rax
  __int64 v89; // r8
  size_t v90; // r9
  size_t v91; // r10
  _BYTE *v92; // rsi
  size_t v93; // rdx
  __int64 v94; // r15
  unsigned __int64 v95; // rdx
  _BYTE *v96; // rsi
  unsigned __int64 v97; // rdx
  __int64 v98; // r15
  _BYTE *v99; // rsi
  __int64 v100; // r15
  __int64 v101; // rbx
  char *v102; // r14
  _QWORD *v103; // rax
  unsigned __int64 v104; // rsi
  char *v105; // rax
  char *v106; // r14
  unsigned int v107; // eax
  unsigned int v108; // eax
  unsigned int v109; // edx
  __int64 v110; // rcx
  __int64 v111; // r15
  __int64 v112; // r14
  char *v113; // rbx
  _QWORD *v114; // rax
  unsigned __int64 v115; // rdx
  char *v116; // rax
  char *v117; // rbx
  unsigned int v118; // eax
  unsigned int v119; // eax
  unsigned int v120; // ecx
  __int64 v121; // rsi
  __int64 v122; // r15
  char *v123; // rbx
  _QWORD *v124; // rax
  unsigned __int64 v125; // rdx
  char *v126; // rax
  char *v127; // rbx
  unsigned int v128; // eax
  unsigned int v129; // eax
  unsigned int v130; // ecx
  __int64 v131; // rsi
  __int64 v132; // r15
  char *v133; // rbx
  _QWORD *v134; // rax
  unsigned __int64 v135; // rdx
  char *v136; // rax
  char *v137; // rbx
  unsigned int v138; // eax
  unsigned int v139; // eax
  unsigned int v140; // ecx
  __int64 v141; // rsi
  __int64 v142; // rdi
  __int64 custom_data_type; // rax
  __int64 custom_data_format; // rax
  void *v145; // rdi
  char *v146; // rbx
  __int64 v147; // r15
  const char *v148; // r15
  __int64 v149; // r8
  unsigned __int64 v150; // rdx
  _BYTE *v151; // rsi
  unsigned __int64 v152; // rdx
  __int64 v153; // r8
  _BYTE *v154; // rsi
  size_t v155; // rax
  __int64 v156; // r8
  size_t v157; // r9
  size_t v158; // r10
  _BYTE *v159; // rsi
  size_t v160; // rdx
  __int64 v161; // r15
  unsigned __int64 v162; // rdx
  _BYTE *v163; // rsi
  unsigned __int64 v164; // rdx
  __int64 v165; // r15
  _BYTE *v166; // rsi
  int v167; // eax
  int v168; // eax
  __int64 v169; // rbx
  _BYTE *v170; // rsi
  __int64 v171; // r14
  __int64 v172; // rbx
  unsigned __int64 v173; // r15
  __int64 v174; // r8
  _BYTE *v175; // rsi
  __int64 v176; // rbx
  __int64 v177; // r15
  __int64 v178; // rbp
  _BYTE *v179; // rsi
  char *v180; // rbx
  char *v181; // rdx
  __int64 v182; // rbp
  __int64 v183; // rbx
  char *v184; // rax
  void *v185; // rdi
  __int64 v186; // rdx
  void *v187; // rdi
  __int64 v188; // rbx
  __int64 v189; // rcx
  __m128 v190; // xmm0
  unsigned int v192; // esi
  char *v193; // rsi
  __int64 v194; // rdx
  char *v195; // r14
  unsigned __int64 v196; // rbx
  char *v197; // r15
  char *v198; // rax
  __int64 v199; // rdx
  unsigned __int64 v200; // rdx
  size_t v201; // r9
  size_t v202; // r10
  _BYTE *v203; // rsi
  _BYTE *v204; // rsi
  unsigned __int64 v205; // r9
  unsigned __int64 v206; // rdx
  void *v207; // rax
  __int64 v208; // rdx
  char *v209; // rsi
  __int64 v210; // r15
  char *v211; // rbx
  __int64 v212; // r14
  __int64 v213; // rsi
  __int64 v214; // rdx
  unsigned __int64 v215; // r15
  __int64 v216; // r14
  __int64 v217; // rsi
  __int64 v218; // r14
  __int64 v219; // r8
  unsigned __int64 v220; // r15
  __int64 v221; // rsi
  unsigned __int64 v222; // r15
  __int64 v223; // r14
  __int64 v224; // r14
  __int64 v225; // rsi
  unsigned __int64 v226; // r15
  __int64 v227; // r14
  __int64 v228; // rsi
  __int64 v229; // r15
  char *v230; // rbx
  __int64 v231; // r14
  __int64 v232; // rsi
  __int64 v233; // rdx
  unsigned __int64 v234; // r15
  __int64 v235; // r14
  __int64 v236; // rsi
  __int64 v237; // r14
  __int64 v238; // r8
  unsigned __int64 v239; // r15
  __int64 v240; // rsi
  unsigned __int64 v241; // r15
  __int64 v242; // r14
  __int64 v243; // r14
  __int64 v244; // rsi
  unsigned __int64 v245; // r15
  __int64 v246; // r14
  __int64 v247; // rsi
  __int64 v248; // rax
  __int64 v249; // rax
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rax
  _QWORD *v253; // rax
  _WORD *v254; // rax
  __int64 v255; // rcx
  __int64 v256; // rax
  __int64 v257; // rdx
  int v258; // eax
  __int64 v259; // rbx
  __int64 v260; // r15
  unsigned __int64 v261; // r14
  _BYTE *v262; // rsi
  __m128i v263; // xmm0
  int v264; // eax
  int v265; // eax
  __int64 v266; // rbx
  unsigned __int64 v267; // r14
  _BYTE *v268; // rsi
  unsigned __int64 v269; // r14
  __int64 v270; // rbx
  _BYTE *v271; // rsi
  unsigned __int64 v272; // r14
  __int64 v273; // rbx
  _BYTE *v274; // rsi
  unsigned __int64 v275; // r14
  __int64 v276; // rbx
  _BYTE *v277; // rsi
  unsigned __int64 v278; // r14
  __int64 v279; // rbx
  _BYTE *v280; // rsi
  __int64 v281; // rdx
  char *v282; // rsi
  __int64 v283; // r15
  __int64 *v284; // rbx
  __int64 v285; // r14
  __int64 v286; // rsi
  __int64 v287; // rax
  __int64 v288; // rdx
  unsigned __int64 v289; // r15
  __int64 v290; // r14
  __int64 v291; // rsi
  __int64 v292; // r14
  __int64 v293; // r8
  unsigned __int64 v294; // r15
  __int64 v295; // rsi
  unsigned __int64 v296; // r15
  __int64 v297; // r14
  __int64 v298; // r14
  __int64 v299; // rsi
  unsigned __int64 v300; // r15
  __int64 v301; // r14
  __int64 v302; // rsi
  __int64 v303; // rdx
  char *v304; // rsi
  __int64 v305; // r15
  __int64 *v306; // rbx
  __int64 v307; // r14
  __int64 v308; // rsi
  __int64 v309; // rax
  __int64 v310; // rdx
  unsigned __int64 v311; // r15
  __int64 v312; // r14
  __int64 v313; // rsi
  __int64 v314; // r14
  __int64 v315; // r8
  unsigned __int64 v316; // r15
  __int64 v317; // rsi
  unsigned __int64 v318; // r15
  __int64 v319; // r14
  __int64 v320; // r14
  __int64 v321; // rsi
  unsigned __int64 v322; // r15
  __int64 v323; // r14
  __int64 v324; // rsi
  __int64 v325; // rdx
  char *v326; // rsi
  __int64 v327; // r15
  __int64 *v328; // rbx
  __int64 v329; // r14
  __int64 v330; // rsi
  __int64 v331; // rax
  __int64 v332; // rdx
  unsigned __int64 v333; // r15
  __int64 v334; // r14
  __int64 v335; // rsi
  __int64 v336; // r14
  __int64 v337; // r8
  unsigned __int64 v338; // r15
  __int64 v339; // rsi
  __int64 v340; // r14
  unsigned __int64 v341; // r15
  __int64 v342; // r14
  __int64 v343; // rsi
  unsigned __int64 v344; // r15
  __int64 v345; // r14
  __int64 v346; // rsi
  unsigned __int8 v347; // cl
  __int64 v348; // rax
  __int64 v349; // rax
  __int64 v350; // rax
  __int64 v351; // rax
  __int64 v352; // rax
  __int64 v353; // rax
  __int64 v354; // rax
  __int64 v355; // rax
  __int64 v356; // rax
  __int64 v357; // rax
  __int64 v358; // rax
  __int64 v359; // rax
  __int64 v360; // rax
  __int64 v361; // rax
  __int64 v362; // rax
  __int64 v363; // rax
  __int64 v364; // rax
  __int64 custom_refinfo; // rax
  __int64 v366; // rbx
  __int64 v367; // r15
  unsigned __int64 v368; // r14
  _QWORD *v369; // rbx
  __int64 v370; // rax
  __int64 v371; // rbx
  __int64 v372; // r8
  unsigned __int64 v373; // r15
  _BYTE *v374; // rsi
  __m128i si128; // xmm0
  __int64 v376; // rbx
  unsigned __int64 v377; // r14
  unsigned __int64 v378; // r14
  __int64 v379; // rbx
  __int64 v380; // rbx
  __int64 v381; // r15
  unsigned __int64 v382; // r14
  unsigned __int64 v383; // r14
  char *v384; // rbx
  __int64 v385; // rbx
  unsigned __int64 v386; // r14
  __int64 v387; // rbx
  __int64 v388; // [rsp+0h] [rbp-B8h]
  __int64 v389; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v390; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v391; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v392; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v393; // [rsp+0h] [rbp-B8h]
  __int64 v394; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v395; // [rsp+0h] [rbp-B8h]
  size_t v396; // [rsp+0h] [rbp-B8h]
  __int64 v397; // [rsp+0h] [rbp-B8h]
  __int64 v398; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v399; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v400; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v401; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v402; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v403; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v404; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v405; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v406; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v407; // [rsp+0h] [rbp-B8h]
  __int64 v408; // [rsp+0h] [rbp-B8h]
  __int64 v409; // [rsp+0h] [rbp-B8h]
  size_t v410; // [rsp+0h] [rbp-B8h]
  __int64 v411; // [rsp+0h] [rbp-B8h]
  __int64 v412; // [rsp+0h] [rbp-B8h]
  __int64 v413; // [rsp+0h] [rbp-B8h]
  size_t v414; // [rsp+0h] [rbp-B8h]
  __int64 v415; // [rsp+0h] [rbp-B8h]
  __int64 v416; // [rsp+8h] [rbp-B0h]
  __int64 v417; // [rsp+8h] [rbp-B0h]
  size_t v418; // [rsp+8h] [rbp-B0h]
  size_t v419; // [rsp+8h] [rbp-B0h]
  __int64 v420; // [rsp+8h] [rbp-B0h]
  __int64 v421; // [rsp+8h] [rbp-B0h]
  size_t v422; // [rsp+8h] [rbp-B0h]
  size_t v423; // [rsp+8h] [rbp-B0h]
  __int64 v424; // [rsp+10h] [rbp-A8h]
  __int64 v425; // [rsp+10h] [rbp-A8h]
  size_t v426; // [rsp+18h] [rbp-A0h]
  size_t v427; // [rsp+18h] [rbp-A0h]
  size_t v428; // [rsp+18h] [rbp-A0h]
  void *v429; // [rsp+20h] [rbp-98h] BYREF
  __int128 v430; // [rsp+28h] [rbp-90h] BYREF
  void *v431; // [rsp+40h] [rbp-78h] BYREF
  __int128 v432; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __int128 v434; // [rsp+68h] [rbp-50h]
  unsigned __int64 v435; // [rsp+78h] [rbp-40h]

  v435 = __readfsqword(0x28u);
  v3 = *a1;
  v430 = 0;
  v429 = nullptr;
  v4 = v3 & 0xF;
  switch ( v3 & 0xF )
  {
    case 0LL:
      if ( (v3 & 0x400) != 0 )
      {
        v429 = (void *)qvector_reserve(&v429, 0, 9, 1);
        *(_QWORD *)&v430 = 9;
        strcpy((char *)v429, "__signed");
        v3 = *a1;
      }
      goto LABEL_157;
    case 1LL:
      if ( (v3 & 0x400) != 0 )
      {
        v100 = 11;
        v101 = 10;
        v102 = (char *)&unk_22D6123;
      }
      else
      {
        v100 = 10;
        v101 = 9;
        v102 = (char *)&unk_22D612E;
      }
      v103 = (_QWORD *)qvector_reserve(&v429, 0, v100, 1);
      v429 = v103;
      *(_QWORD *)&v430 = v100;
      v104 = (unsigned __int64)(v103 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v103 = *(_QWORD *)v102;
      *(_QWORD *)((char *)v103 + v101 - 8) = *(_QWORD *)&v102[v101 - 8];
      v105 = (char *)v103 - v104;
      v106 = (char *)(v102 - v105);
      v107 = (v101 + (_DWORD)v105) & 0xFFFFFFF8;
      if ( v107 >= 8 )
      {
        v108 = v107 & 0xFFFFFFF8;
        v109 = 0;
        do
        {
          v110 = v109;
          v109 += 8;
          *(_QWORD *)(v104 + v110) = *(_QWORD *)&v106[v110];
        }
        while ( v109 < v108 );
      }
      *((_BYTE *)v429 + v101) = 0;
      v3 = *a1;
      goto LABEL_157;
    case 2LL:
      if ( (v3 & 0x400) != 0 )
      {
        v111 = 11;
        v112 = 10;
        v113 = (char *)&unk_22D6138;
      }
      else
      {
        v111 = 10;
        v112 = 9;
        v113 = (char *)&unk_22D6143;
      }
      v114 = (_QWORD *)qvector_reserve(&v429, 0, v111, 1);
      v429 = v114;
      *(_QWORD *)&v430 = v111;
      *v114 = *(_QWORD *)v113;
      *(_QWORD *)((char *)v114 + v112 - 8) = *(_QWORD *)&v113[v112 - 8];
      v115 = (unsigned __int64)(v114 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v116 = (char *)v114 - v115;
      v117 = (char *)(v113 - v116);
      v118 = (v112 + (_DWORD)v116) & 0xFFFFFFF8;
      if ( v118 >= 8 )
      {
        v119 = v118 & 0xFFFFFFF8;
        v120 = 0;
        do
        {
          v121 = v120;
          v120 += 8;
          *(_QWORD *)(v115 + v121) = *(_QWORD *)&v117[v121];
        }
        while ( v120 < v119 );
      }
      goto LABEL_135;
    case 3LL:
      if ( (v3 & 0x400) != 0 )
      {
        v122 = 11;
        v112 = 10;
        v123 = (char *)&unk_22D614D;
      }
      else
      {
        v122 = 10;
        v112 = 9;
        v123 = (char *)&unk_22D6158;
      }
      v124 = (_QWORD *)qvector_reserve(&v429, 0, v122, 1);
      v429 = v124;
      *(_QWORD *)&v430 = v122;
      *v124 = *(_QWORD *)v123;
      *(_QWORD *)((char *)v124 + v112 - 8) = *(_QWORD *)&v123[v112 - 8];
      v125 = (unsigned __int64)(v124 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v126 = (char *)v124 - v125;
      v127 = (char *)(v123 - v126);
      v128 = (v112 + (_DWORD)v126) & 0xFFFFFFF8;
      if ( v128 >= 8 )
      {
        v129 = v128 & 0xFFFFFFF8;
        v130 = 0;
        do
        {
          v131 = v130;
          v130 += 8;
          *(_QWORD *)(v125 + v131) = *(_QWORD *)&v127[v131];
        }
        while ( v130 < v129 );
      }
      goto LABEL_135;
    case 4LL:
      if ( (v3 & 0x400) != 0 )
      {
        v132 = 10;
        v112 = 9;
        v133 = (char *)&unk_22D6162;
      }
      else
      {
        v132 = 11;
        v112 = 10;
        v133 = (char *)&unk_22D616C;
      }
      v134 = (_QWORD *)qvector_reserve(&v429, 0, v132, 1);
      v429 = v134;
      *(_QWORD *)&v430 = v132;
      *v134 = *(_QWORD *)v133;
      *(_QWORD *)((char *)v134 + v112 - 8) = *(_QWORD *)&v133[v112 - 8];
      v135 = (unsigned __int64)(v134 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v136 = (char *)v134 - v135;
      v137 = (char *)(v133 - v136);
      v138 = (v112 + (_DWORD)v136) & 0xFFFFFFF8;
      if ( v138 >= 8 )
      {
        v139 = v138 & 0xFFFFFFF8;
        v140 = 0;
        do
        {
          v141 = v140;
          v140 += 8;
          *(_QWORD *)(v135 + v141) = *(_QWORD *)&v137[v141];
        }
        while ( v140 < v139 );
      }
LABEL_135:
      *((_BYTE *)v429 + v112) = 0;
      goto LABEL_136;
    case 5LL:
      v253 = (_QWORD *)qvector_reserve(&v429, 0, 12, 1);
      v429 = v253;
      *(_QWORD *)&v430 = 12;
      *v253 = 0x616F6C665F5F2001LL;
      *(_DWORD *)((char *)v253 + 7) = 537031777;
      *((_BYTE *)v429 + 11) = 0;
      v3 = *a1;
      goto LABEL_157;
    case 6LL:
      v254 = (_WORD *)qvector_reserve(&v429, 0, 11, 1);
      v255 = 0x726168635F5F2001LL;
      v429 = v254;
      *(_QWORD *)&v430 = 11;
      goto LABEL_310;
    case 7LL:
      v254 = (_WORD *)qvector_reserve(&v429, 0, 11, 1);
      v255 = 0x6D6765735F5F2001LL;
      v429 = v254;
      *(_QWORD *)&v430 = 11;
LABEL_310:
      *(_QWORD *)v254 = v255;
      v254[4] = 8194;
      *((_BYTE *)v429 + 10) = 0;
      v3 = *a1;
      goto LABEL_157;
    case 8LL:
    case 0xBLL:
      get_numbered_type_name(0, *((unsigned int *)a1 + 4));
      sub_35A790((char **)&v429);
      if ( (*a1 & 0xF) == 0xB && a1[1] )
        sub_35A910((__int64 *)&v429);
      v8 = v430;
      if ( (_QWORD)v430 )
      {
        v10 = v430 + 4;
        v9 = v430 + 5;
        v8 = v430 - 1;
      }
      else
      {
        v9 = 6;
        v10 = 5;
      }
      v11 = v429;
      if ( *((_QWORD *)&v430 + 1) < v9 )
      {
        v408 = v10;
        v429 = (void *)qvector_reserve(&v429, v429, v9, 1);
        v10 = v408;
        v11 = v429;
      }
      *(_QWORD *)&v430 = v9;
      v11[v10] = 0;
      v12 = (char *)v429 + v8;
      *(_DWORD *)v12 = 36243713;
      v12[4] = 9;
      v3 = *a1;
      goto LABEL_157;
    case 9LL:
      v13 = a1[2];
      if ( v13 )
      {
        v16 = 2;
        v15 = nullptr;
        v13 = 0;
        goto LABEL_320;
      }
      if ( a1[3] )
        goto LABEL_319;
      v14 = *((_DWORD *)a1 + 8);
      if ( v14 == 9 )
      {
        if ( (unsigned __int8)getinf_flag(3, 4) )
          goto LABEL_474;
        if ( *((_DWORD *)a1 + 8) != 2 )
        {
LABEL_15:
          v15 = v429;
          if ( (_QWORD)v430 )
          {
            v13 = v430 - 1;
            v16 = v430 + 1;
          }
          else
          {
            v13 = 0;
            v16 = 2;
          }
          if ( *((_QWORD *)&v430 + 1) >= v16 )
          {
LABEL_18:
            *(_QWORD *)&v430 = v16;
            v15[v13] = 1;
            *((_BYTE *)v429 + v13 + 1) = 0;
            v17 = v430;
            v18 = 2;
            if ( (_QWORD)v430 )
            {
              v18 = v430 + 1;
              v17 = v430 - 1;
            }
            v19 = v429;
            if ( *((_QWORD *)&v430 + 1) < v18 )
            {
              v429 = (void *)qvector_reserve(&v429, v429, v18, 1);
              v19 = v429;
            }
            *(_QWORD *)&v430 = v18;
            v20 = 8;
            v19[v17] = 32;
            *((_BYTE *)v429 + v17 + 1) = 0;
            v21 = v430;
            if ( (_QWORD)v430 )
            {
              v20 = v430 + 7;
              v4 = v430 + 8;
              v21 = v430 - 1;
            }
            v22 = v429;
            if ( *((_QWORD *)&v430 + 1) < v4 )
            {
              v429 = (void *)qvector_reserve(&v429, v429, v4, 1);
              v22 = v429;
            }
            *(_QWORD *)&v430 = v4;
            v22[v20] = 0;
            *(_QWORD *)((char *)v429 + v21) = 0x74657366666F5F5FLL;
            v23 = v430;
            v24 = 2;
            if ( (_QWORD)v430 )
            {
              v24 = v430 + 1;
              v23 = v430 - 1;
            }
            v25 = v429;
            if ( *((_QWORD *)&v430 + 1) < v24 )
            {
              v429 = (void *)qvector_reserve(&v429, v429, v24, 1);
              v25 = v429;
            }
            *(_QWORD *)&v430 = v24;
            v26 = 2;
            v25[v23] = 2;
            *((_BYTE *)v429 + v23 + 1) = 0;
            v27 = v430;
            if ( (_QWORD)v430 )
            {
              v26 = v430 + 1;
              v27 = v430 - 1;
            }
            v28 = v429;
            if ( *((_QWORD *)&v430 + 1) < v26 )
            {
              v429 = (void *)qvector_reserve(&v429, v429, v26, 1);
              v28 = v429;
            }
            *(_QWORD *)&v430 = v26;
            v29 = 2;
            v28[v27] = 32;
            *((_BYTE *)v429 + v27 + 1) = 0;
            v30 = v430;
            if ( (_QWORD)v430 )
            {
              v29 = v430 + 1;
              v30 = v430 - 1;
            }
            v31 = v429;
            if ( *((_QWORD *)&v430 + 1) < v29 )
            {
              v429 = (void *)qvector_reserve(&v429, v429, v29, 1);
              v31 = v429;
            }
            *(_QWORD *)&v430 = v29;
            v32 = 2;
            v31[v30] = 1;
            *((_BYTE *)v429 + v30 + 1) = 0;
            v33 = v430;
            if ( (_QWORD)v430 )
            {
              v32 = v430 + 1;
              v33 = v430 - 1;
            }
            v34 = v429;
            if ( *((_QWORD *)&v430 + 1) < v32 )
            {
              v429 = (void *)qvector_reserve(&v429, v429, v32, 1);
              v34 = v429;
            }
            *(_QWORD *)&v430 = v32;
            v35 = 2;
            v34[v33] = 9;
            *((_BYTE *)v429 + v33 + 1) = 0;
            v36 = v430;
            if ( (_QWORD)v430 )
            {
              v35 = v430 + 1;
              v36 = v430 - 1;
            }
            v37 = v429;
            if ( *((_QWORD *)&v430 + 1) < v35 )
            {
              v429 = (void *)qvector_reserve(&v429, v429, v35, 1);
              v37 = v429;
            }
            *(_QWORD *)&v430 = v35;
            v38 = 2;
            v37[v36] = 40;
            *((_BYTE *)v429 + v36 + 1) = 0;
            v39 = v430;
            if ( (_QWORD)v430 )
            {
              v38 = v430 + 1;
              v39 = v430 - 1;
            }
            v40 = v429;
            if ( *((_QWORD *)&v430 + 1) < v38 )
            {
              v429 = (void *)qvector_reserve(&v429, v429, v38, 1);
              v40 = v429;
            }
            *(_QWORD *)&v430 = v38;
            v41 = 2;
            v40[v39] = 2;
            *((_BYTE *)v429 + v39 + 1) = 0;
            v42 = v430;
            if ( (_QWORD)v430 )
            {
              v41 = v430 + 1;
              v42 = v430 - 1;
            }
            v43 = v429;
            if ( *((_QWORD *)&v430 + 1) < v41 )
            {
              v429 = (void *)qvector_reserve(&v429, v429, v41, 1);
              v43 = v429;
            }
            *(_QWORD *)&v430 = v41;
            v43[v42] = 9;
            *((_BYTE *)v429 + v42 + 1) = 0;
            v44 = (const char *)sub_41B7E0(*((_DWORD *)a1 + 8));
            v45 = v44;
            if ( v44 )
            {
              if ( *v44 )
              {
                v46 = v430;
                v47 = 2;
                if ( (_QWORD)v430 )
                {
                  v47 = v430 + 1;
                  v46 = v430 - 1;
                }
                v48 = v429;
                if ( *((_QWORD *)&v430 + 1) < v47 )
                {
                  v429 = (void *)qvector_reserve(&v429, v429, v47, 1);
                  v48 = v429;
                }
                *(_QWORD *)&v430 = v47;
                v49 = 2;
                v48[v46] = 1;
                *((_BYTE *)v429 + v46 + 1) = 0;
                v50 = v430;
                if ( (_QWORD)v430 )
                {
                  v49 = v430 + 1;
                  v50 = v430 - 1;
                }
                v51 = v429;
                if ( *((_QWORD *)&v430 + 1) < v49 )
                {
                  v429 = (void *)qvector_reserve(&v429, v429, v49, 1);
                  v51 = v429;
                }
                *(_QWORD *)&v430 = v49;
                v51[v50] = 32;
                *((_BYTE *)v429 + v50 + 1) = 0;
                v52 = strlen(v45);
                v53 = v430;
                v54 = v52;
                v55 = v52;
                if ( (_QWORD)v430 )
                {
                  v53 = v430 - 1;
                  v55 = v52 + v430 - 1;
                }
                v56 = v429;
                v57 = v55 + 1;
                if ( *((_QWORD *)&v430 + 1) < v55 + 1 )
                {
                  v423 = v55;
                  v414 = v55 + 1;
                  v429 = (void *)qvector_reserve(&v429, v429, v57, 1);
                  v55 = v423;
                  v56 = v429;
                  v57 = v414;
                }
                *(_QWORD *)&v430 = v57;
                v56[v55] = 0;
                v58 = (char *)v429 + v53;
                v59 = 2;
                memmove(v58, v45, v54);
                v60 = v430;
                if ( (_QWORD)v430 )
                {
                  v59 = v430 + 1;
                  v60 = v430 - 1;
                }
                v61 = v429;
                if ( *((_QWORD *)&v430 + 1) < v59 )
                {
                  v429 = (void *)qvector_reserve(&v429, v429, v59, 1);
                  v61 = v429;
                }
                *(_QWORD *)&v430 = v59;
                v62 = 2;
                v61[v60] = 2;
                *((_BYTE *)v429 + v60 + 1) = 0;
                v63 = v430;
                if ( (_QWORD)v430 )
                {
                  v62 = v430 + 1;
                  v63 = v430 - 1;
                }
                v64 = v429;
                if ( *((_QWORD *)&v430 + 1) < v62 )
                {
                  v429 = (void *)qvector_reserve(&v429, v429, v62, 1);
                  v64 = v429;
                }
                *(_QWORD *)&v430 = v62;
                v64[v63] = 32;
                *((_BYTE *)v429 + v63 + 1) = 0;
              }
            }
            else
            {
              sub_35A910((__int64 *)&v429);
            }
            v65 = (char *)&unk_2B2EA80;
            do
            {
              if ( (*(_DWORD *)v65 & (_DWORD)a1[4]) != 0 )
              {
                v66 = v430;
                v67 = 2;
                if ( (_QWORD)v430 )
                {
                  v67 = v430 + 1;
                  v66 = v430 - 1;
                }
                v68 = v429;
                if ( *((_QWORD *)&v430 + 1) < v67 )
                {
                  v399 = v67;
                  v429 = (void *)qvector_reserve(&v429, v429, v67, 1);
                  v67 = v399;
                  v68 = v429;
                }
                *(_QWORD *)&v430 = v67;
                v69 = 2;
                v68[v66] = 1;
                *((_BYTE *)v429 + v66 + 1) = 0;
                v70 = v430;
                if ( (_QWORD)v430 )
                {
                  v69 = v430 + 1;
                  v70 = v430 - 1;
                }
                v71 = v429;
                if ( *((_QWORD *)&v430 + 1) < v69 )
                {
                  v403 = v69;
                  v429 = (void *)qvector_reserve(&v429, v429, v69, 1);
                  v69 = v403;
                  v71 = v429;
                }
                *(_QWORD *)&v430 = v69;
                v72 = 2;
                v71[v70] = 9;
                *((_BYTE *)v429 + v70 + 1) = 0;
                v73 = v430;
                if ( (_QWORD)v430 )
                {
                  v72 = v430 + 1;
                  v73 = v430 - 1;
                }
                v74 = v429;
                if ( *((_QWORD *)&v430 + 1) < v72 )
                {
                  v402 = v72;
                  v429 = (void *)qvector_reserve(&v429, v429, v72, 1);
                  v72 = v402;
                  v74 = v429;
                }
                *(_QWORD *)&v430 = v72;
                v75 = 2;
                v74[v73] = 124;
                *((_BYTE *)v429 + v73 + 1) = 0;
                v76 = v430;
                if ( (_QWORD)v430 )
                {
                  v75 = v430 + 1;
                  v76 = v430 - 1;
                }
                v77 = v429;
                if ( *((_QWORD *)&v430 + 1) < v75 )
                {
                  v401 = v75;
                  v429 = (void *)qvector_reserve(&v429, v429, v75, 1);
                  v75 = v401;
                  v77 = v429;
                }
                *(_QWORD *)&v430 = v75;
                v78 = 2;
                v77[v76] = 2;
                *((_BYTE *)v429 + v76 + 1) = 0;
                v79 = v430;
                if ( (_QWORD)v430 )
                {
                  v78 = v430 + 1;
                  v79 = v430 - 1;
                }
                v80 = v429;
                if ( *((_QWORD *)&v430 + 1) < v78 )
                {
                  v400 = v78;
                  v429 = (void *)qvector_reserve(&v429, v429, v78, 1);
                  v78 = v400;
                  v80 = v429;
                }
                *(_QWORD *)&v430 = v78;
                v80[v79] = 9;
                *((_BYTE *)v429 + v79 + 1) = 0;
                v81 = *((const char **)v65 + 1);
                if ( *v81 )
                {
                  v82 = v430;
                  v83 = 2;
                  if ( (_QWORD)v430 )
                  {
                    v83 = v430 + 1;
                    v82 = v430 - 1;
                  }
                  v84 = v429;
                  if ( *((_QWORD *)&v430 + 1) < v83 )
                  {
                    v421 = v82;
                    v406 = v83;
                    v429 = (void *)qvector_reserve(&v429, v429, v83, 1);
                    v82 = v421;
                    v84 = v429;
                    v83 = v406;
                  }
                  *(_QWORD *)&v430 = v83;
                  v85 = 2;
                  v84[v82] = 1;
                  *((_BYTE *)v429 + v82 + 1) = 0;
                  v86 = v430;
                  if ( (_QWORD)v430 )
                  {
                    v85 = v430 + 1;
                    v86 = v430 - 1;
                  }
                  v87 = v429;
                  if ( *((_QWORD *)&v430 + 1) < v85 )
                  {
                    v420 = v86;
                    v405 = v85;
                    v429 = (void *)qvector_reserve(&v429, v429, v85, 1);
                    v86 = v420;
                    v87 = v429;
                    v85 = v405;
                  }
                  *(_QWORD *)&v430 = v85;
                  v87[v86] = 32;
                  *((_BYTE *)v429 + v86 + 1) = 0;
                  if ( v81 )
                  {
                    v388 = v430;
                    v88 = strlen(v81);
                    v89 = v388;
                    v90 = v88;
                    v91 = v88;
                    if ( v388 )
                    {
                      v89 = v388 - 1;
                      v91 = v88 + v388 - 1;
                    }
                    v92 = v429;
                    v93 = v91 + 1;
                    if ( *((_QWORD *)&v430 + 1) < v91 + 1 )
                    {
                      v428 = v88;
                      v425 = v89;
                      v422 = v91;
                      v410 = v91 + 1;
                      v429 = (void *)qvector_reserve(&v429, v429, v93, 1);
                      v90 = v428;
                      v92 = v429;
                      v89 = v425;
                      v91 = v422;
                      v93 = v410;
                    }
                    *(_QWORD *)&v430 = v93;
                    v92[v91] = 0;
                    memmove((char *)v429 + v89, v81, v90);
                  }
                  v94 = v430;
                  v95 = 2;
                  if ( (_QWORD)v430 )
                  {
                    v95 = v430 + 1;
                    v94 = v430 - 1;
                  }
                  v96 = v429;
                  if ( *((_QWORD *)&v430 + 1) < v95 )
                  {
                    v404 = v95;
                    v429 = (void *)qvector_reserve(&v429, v429, v95, 1);
                    v95 = v404;
                    v96 = v429;
                  }
                  *(_QWORD *)&v430 = v95;
                  v97 = 2;
                  v96[v94] = 2;
                  *((_BYTE *)v429 + v94 + 1) = 0;
                  v98 = v430;
                  if ( (_QWORD)v430 )
                  {
                    v97 = v430 + 1;
                    v98 = v430 - 1;
                  }
                  v99 = v429;
                  if ( *((_QWORD *)&v430 + 1) < v97 )
                  {
                    v407 = v97;
                    v429 = (void *)qvector_reserve(&v429, v429, v97, 1);
                    v97 = v407;
                    v99 = v429;
                  }
                  *(_QWORD *)&v430 = v97;
                  v99[v98] = 32;
                  *((_BYTE *)v429 + v98 + 1) = 0;
                }
              }
              v65 += 16;
            }
            while ( &unk_2B2EB00 != (_UNKNOWN *)v65 );
            v257 = a1[2];
            if ( v257 )
            {
              v258 = *((_DWORD *)a1 + 8);
              if ( (v258 & 0x1010) == 0 )
              {
                if ( v257 == -1 )
                {
                  v366 = v430;
                  if ( (_QWORD)v430 )
                  {
                    v367 = v430 + 12;
                    v368 = v430 + 13;
                    v366 = v430 - 1;
                  }
                  else
                  {
                    v368 = 14;
                    v367 = 13;
                  }
                  if ( *((_QWORD *)&v430 + 1) < v368 )
                    v429 = (void *)qvector_reserve(&v429, v429, v368, 1);
                  *(_QWORD *)&v430 = v368;
                  *((_BYTE *)v429 + v367) = 0;
                  v369 = (char *)v429 + v366;
                  *v369 = 0x41200109027C0901LL;
                  *(_QWORD *)((char *)v369 + 5) = 0x20024F5455412001LL;
LABEL_330:
                  if ( !a1[3] )
                  {
                    v264 = a1[4] & 0x4F;
                    if ( (a1[4] & 0x40) != 0 )
                    {
                      custom_refinfo = get_custom_refinfo(a1[4] & 0x4F);
                      if ( custom_refinfo && (*(_BYTE *)(custom_refinfo + 24) & 1) != 0 )
                        goto LABEL_339;
                    }
                    else if ( (unsigned __int8)v264 > 2u )
                    {
                      if ( (unsigned __int8)(v264 - 9) <= 1u )
                        goto LABEL_339;
                    }
                    else if ( (_BYTE)v264 )
                    {
                      goto LABEL_339;
                    }
                  }
                  sub_35A910((__int64 *)&v429);
                  v265 = a1[4] & 0x4F;
                  if ( (a1[4] & 0x40) != 0 )
                  {
                    v352 = get_custom_refinfo(a1[4] & 0x4F);
                    if ( v352 && (*(_BYTE *)(v352 + 24) & 1) != 0 )
                      goto LABEL_339;
                  }
                  else
                  {
                    if ( (unsigned __int8)v265 <= 2u )
                    {
                      if ( !(_BYTE)v265 )
                        goto LABEL_337;
LABEL_339:
                      v266 = v430;
                      v267 = 2;
                      if ( (_QWORD)v430 )
                      {
                        v267 = v430 + 1;
                        v266 = v430 - 1;
                      }
                      v268 = v429;
                      if ( *((_QWORD *)&v430 + 1) < v267 )
                      {
                        v429 = (void *)qvector_reserve(&v429, v429, v267, 1);
                        v268 = v429;
                      }
                      *(_QWORD *)&v430 = v267;
                      v269 = 2;
                      v268[v266] = 1;
                      *((_BYTE *)v429 + v266 + 1) = 0;
                      v270 = v430;
                      if ( (_QWORD)v430 )
                      {
                        v269 = v430 + 1;
                        v270 = v430 - 1;
                      }
                      v271 = v429;
                      if ( *((_QWORD *)&v430 + 1) < v269 )
                      {
                        v429 = (void *)qvector_reserve(&v429, v429, v269, 1);
                        v271 = v429;
                      }
                      *(_QWORD *)&v430 = v269;
                      v272 = 2;
                      v271[v270] = 9;
                      *((_BYTE *)v429 + v270 + 1) = 0;
                      v273 = v430;
                      if ( (_QWORD)v430 )
                      {
                        v272 = v430 + 1;
                        v273 = v430 - 1;
                      }
                      v274 = v429;
                      if ( *((_QWORD *)&v430 + 1) < v272 )
                      {
                        v429 = (void *)qvector_reserve(&v429, v429, v272, 1);
                        v274 = v429;
                      }
                      *(_QWORD *)&v430 = v272;
                      v275 = 2;
                      v274[v273] = 41;
                      *((_BYTE *)v429 + v273 + 1) = 0;
                      v276 = v430;
                      if ( (_QWORD)v430 )
                      {
                        v275 = v430 + 1;
                        v276 = v430 - 1;
                      }
                      v277 = v429;
                      if ( *((_QWORD *)&v430 + 1) < v275 )
                      {
                        v429 = (void *)qvector_reserve(&v429, v429, v275, 1);
                        v277 = v429;
                      }
                      *(_QWORD *)&v430 = v275;
                      v278 = 2;
                      v277[v276] = 2;
                      *((_BYTE *)v429 + v276 + 1) = 0;
                      v279 = v430;
                      if ( (_QWORD)v430 )
                      {
                        v278 = v430 + 1;
                        v279 = v430 - 1;
                      }
                      v280 = v429;
                      if ( *((_QWORD *)&v430 + 1) < v278 )
                      {
                        v429 = (void *)qvector_reserve(&v429, v429, v278, 1);
                        v280 = v429;
                      }
                      *(_QWORD *)&v430 = v278;
                      v280[v279] = 9;
                      *((_BYTE *)v429 + v279 + 1) = 0;
                      v3 = *a1;
                      goto LABEL_157;
                    }
                    if ( (unsigned __int8)(v265 - 9) <= 1u )
                      goto LABEL_339;
                  }
LABEL_337:
                  if ( a1[1] == -1 )
                  {
                    v371 = v430;
                    if ( (_QWORD)v430 )
                    {
                      v372 = v430 + 15;
                      v373 = v430 + 16;
                      v371 = v430 - 1;
                    }
                    else
                    {
                      v373 = 17;
                      v372 = 16;
                    }
                    v374 = v429;
                    if ( *((_QWORD *)&v430 + 1) < v373 )
                    {
                      v415 = v372;
                      v429 = (void *)qvector_reserve(&v429, v429, v373, 1);
                      v372 = v415;
                      v374 = v429;
                    }
                    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7BE0);
                    *(_QWORD *)&v430 = v373;
                    v374[v372] = 0;
                    *(__m128i *)((char *)v429 + v371) = si128;
                  }
                  else
                  {
                    sub_35A910((__int64 *)&v429);
                  }
                  goto LABEL_339;
                }
LABEL_447:
                sub_35A910((__int64 *)&v429);
                goto LABEL_330;
              }
              if ( a1[3] )
              {
LABEL_324:
                if ( v257 == -1 )
                {
                  v259 = v430;
                  if ( (_QWORD)v430 )
                  {
                    v260 = v430 + 15;
                    v261 = v430 + 16;
                    v259 = v430 - 1;
                  }
                  else
                  {
                    v261 = 17;
                    v260 = 16;
                  }
                  v262 = v429;
                  if ( *((_QWORD *)&v430 + 1) < v261 )
                  {
                    v429 = (void *)qvector_reserve(&v429, v429, v261, 1);
                    v262 = v429;
                  }
                  v263 = _mm_load_si128((const __m128i *)&xmmword_23A7BE0);
                  *(_QWORD *)&v430 = v261;
                  v262[v260] = 0;
                  *(__m128i *)((char *)v429 + v259) = v263;
                  goto LABEL_330;
                }
                goto LABEL_447;
              }
            }
            else
            {
              if ( a1[3] )
                goto LABEL_447;
              v258 = *((_DWORD *)a1 + 8);
            }
            v347 = v258 & 0x4F;
            if ( (v258 & 0x40) != 0 )
            {
              v370 = get_custom_refinfo(v347);
              if ( v370 && (*(_BYTE *)(v370 + 24) & 1) != 0 )
                goto LABEL_339;
              v257 = a1[2];
            }
            else if ( v347 > 2u )
            {
              if ( (unsigned __int8)(v347 - 9) <= 1u )
                goto LABEL_339;
            }
            else if ( v347 )
            {
              goto LABEL_339;
            }
            goto LABEL_324;
          }
LABEL_320:
          v429 = (void *)qvector_reserve(&v429, v15, v16, 1);
          v15 = v429;
          goto LABEL_18;
        }
      }
      else if ( v14 != 2 )
      {
LABEL_319:
        v16 = 2;
        v15 = nullptr;
        goto LABEL_320;
      }
      if ( (getinf(3) & 6) != 2 )
        goto LABEL_15;
LABEL_474:
      v376 = v430;
      v377 = 2;
      if ( (_QWORD)v430 )
      {
        v377 = v430 + 1;
        v376 = v430 - 1;
      }
      if ( *((_QWORD *)&v430 + 1) < v377 )
        v429 = (void *)qvector_reserve(&v429, v429, v377, 1);
      *(_QWORD *)&v430 = v377;
      v378 = 2;
      *((_BYTE *)v429 + v376) = 1;
      *((_BYTE *)v429 + v376 + 1) = 0;
      v379 = v430;
      if ( (_QWORD)v430 )
      {
        v378 = v430 + 1;
        v379 = v430 - 1;
      }
      if ( *((_QWORD *)&v430 + 1) < v378 )
        v429 = (void *)qvector_reserve(&v429, v429, v378, 1);
      *(_QWORD *)&v430 = v378;
      *((_BYTE *)v429 + v379) = 32;
      *((_BYTE *)v429 + v379 + 1) = 0;
      v380 = v430;
      if ( (_QWORD)v430 )
      {
        v381 = v430 + 4;
        v382 = v430 + 5;
        v380 = v430 - 1;
      }
      else
      {
        v382 = 6;
        v381 = 5;
      }
      if ( *((_QWORD *)&v430 + 1) < v382 )
        v429 = (void *)qvector_reserve(&v429, v429, v382, 1);
      *(_QWORD *)&v430 = v382;
      v383 = 2;
      *((_BYTE *)v429 + v381) = 0;
      v384 = (char *)v429 + v380;
      *(_DWORD *)v384 = 1718574943;
      v384[4] = 102;
      v385 = v430;
      if ( (_QWORD)v430 )
      {
        v383 = v430 + 1;
        v385 = v430 - 1;
      }
      if ( *((_QWORD *)&v430 + 1) < v383 )
        v429 = (void *)qvector_reserve(&v429, v429, v383, 1);
      *(_QWORD *)&v430 = v383;
      v386 = 2;
      *((_BYTE *)v429 + v385) = 2;
      *((_BYTE *)v429 + v385 + 1) = 0;
      v387 = v430;
      if ( (_QWORD)v430 )
      {
        v386 = v430 + 1;
        v387 = v430 - 1;
      }
      if ( *((_QWORD *)&v430 + 1) < v386 )
        v429 = (void *)qvector_reserve(&v429, v429, v386, 1);
      *(_QWORD *)&v430 = v386;
      *((_BYTE *)v429 + v387) = 32;
      *((_BYTE *)v429 + v387 + 1) = 0;
      v3 = *a1;
LABEL_157:
      v146 = (char *)&unk_2B2E820;
      do
      {
        if ( (*(_QWORD *)v146 & v3) != 0 )
        {
          v147 = v430;
          if ( (unsigned __int64)v430 > 1 )
          {
            v193 = (char *)v429;
            v194 = v430 + 1;
            if ( *((_QWORD *)&v430 + 1) < (unsigned __int64)(v430 + 1) )
            {
              v394 = v430 + 1;
              v429 = (void *)qvector_reserve(&v429, v429, v194, 1);
              v194 = v394;
              v193 = (char *)v429;
            }
            *(_QWORD *)&v430 = v194;
            v193[v147 - 1] = 32;
            *((_BYTE *)v429 + v147) = 0;
          }
          v148 = *((const char **)v146 + 1);
          if ( *v148 )
          {
            v149 = v430;
            v150 = 2;
            if ( (_QWORD)v430 )
            {
              v150 = v430 + 1;
              v149 = v430 - 1;
            }
            v151 = v429;
            if ( *((_QWORD *)&v430 + 1) < v150 )
            {
              v417 = v149;
              v393 = v150;
              v429 = (void *)qvector_reserve(&v429, v429, v150, 1);
              v149 = v417;
              v151 = v429;
              v150 = v393;
            }
            *(_QWORD *)&v430 = v150;
            v152 = 2;
            v151[v149] = 1;
            *((_BYTE *)v429 + v149 + 1) = 0;
            v153 = v430;
            if ( (_QWORD)v430 )
            {
              v152 = v430 + 1;
              v153 = v430 - 1;
            }
            v154 = v429;
            if ( *((_QWORD *)&v430 + 1) < v152 )
            {
              v416 = v153;
              v392 = v152;
              v429 = (void *)qvector_reserve(&v429, v429, v152, 1);
              v153 = v416;
              v154 = v429;
              v152 = v392;
            }
            *(_QWORD *)&v430 = v152;
            v154[v153] = 32;
            *((_BYTE *)v429 + v153 + 1) = 0;
            if ( v148 )
            {
              v389 = v430;
              v155 = strlen(v148);
              v156 = v389;
              v157 = v155;
              v158 = v155;
              if ( v389 )
              {
                v156 = v389 - 1;
                v158 = v155 + v389 - 1;
              }
              v159 = v429;
              v160 = v158 + 1;
              if ( *((_QWORD *)&v430 + 1) < v158 + 1 )
              {
                v427 = v155;
                v424 = v156;
                v419 = v158;
                v396 = v158 + 1;
                v429 = (void *)qvector_reserve(&v429, v429, v160, 1);
                v157 = v427;
                v159 = v429;
                v156 = v424;
                v158 = v419;
                v160 = v396;
              }
              *(_QWORD *)&v430 = v160;
              v159[v158] = 0;
              memmove((char *)v429 + v156, v148, v157);
            }
            v161 = v430;
            v162 = 2;
            if ( (_QWORD)v430 )
            {
              v162 = v430 + 1;
              v161 = v430 - 1;
            }
            v163 = v429;
            if ( *((_QWORD *)&v430 + 1) < v162 )
            {
              v391 = v162;
              v429 = (void *)qvector_reserve(&v429, v429, v162, 1);
              v162 = v391;
              v163 = v429;
            }
            *(_QWORD *)&v430 = v162;
            v164 = 2;
            v163[v161] = 2;
            *((_BYTE *)v429 + v161 + 1) = 0;
            v165 = v430;
            if ( (_QWORD)v430 )
            {
              v164 = v430 + 1;
              v165 = v430 - 1;
            }
            v166 = v429;
            if ( *((_QWORD *)&v430 + 1) < v164 )
            {
              v390 = v164;
              v429 = (void *)qvector_reserve(&v429, v429, v164, 1);
              v164 = v390;
              v166 = v429;
            }
            *(_QWORD *)&v430 = v164;
            v166[v165] = 32;
            *((_BYTE *)v429 + v165 + 1) = 0;
          }
          v3 = *a1;
        }
        v146 += 16;
      }
      while ( algn_2B2E850 != v146 );
      if ( (v3 & 0x1000) == 0 )
        goto LABEL_218;
      v167 = *((_DWORD *)a1 + 10);
      if ( v167 != 1 )
      {
        v431 = nullptr;
        v432 = 0;
        if ( (v167 & 1) != 0 )
          goto LABEL_189;
        v431 = (void *)qvector_reserve(&v431, 0, 1, 24);
        v229 = 2;
        v230 = (char *)v431 + 24 * v432;
        *(_QWORD *)v230 = 0;
        *(_OWORD *)(v230 + 8) = 0;
        *(_QWORD *)&v432 = v432 + 1;
        v231 = *((_QWORD *)v230 + 1);
        v232 = *(_QWORD *)v230;
        if ( v231 )
        {
          v229 = v231 + 1;
          if ( v231 == -1 )
          {
            v233 = -1;
            v231 = -2;
LABEL_288:
            *((_QWORD *)v230 + 1) = v229;
            v234 = 2;
            *(_BYTE *)(v232 + v231) = 1;
            *(_BYTE *)(*(_QWORD *)v230 + v233) = 0;
            v235 = *((_QWORD *)v230 + 1);
            if ( v235 )
              v234 = v235-- + 1;
            v236 = *(_QWORD *)v230;
            if ( *((_QWORD *)v230 + 2) < v234 )
            {
              v249 = qvector_reserve(v230, v236, v234, 1);
              *(_QWORD *)v230 = v249;
              v236 = v249;
            }
            *((_QWORD *)v230 + 1) = v234;
            *(_BYTE *)(v236 + v235) = 32;
            *(_BYTE *)(*(_QWORD *)v230 + v235 + 1) = 0;
            v237 = *((_QWORD *)v230 + 1);
            if ( v237 )
            {
              v238 = v237 + 5;
              v239 = v237 + 6;
              --v237;
            }
            else
            {
              v239 = 7;
              v238 = 6;
            }
            v240 = *(_QWORD *)v230;
            if ( *((_QWORD *)v230 + 2) < v239 )
            {
              v398 = v238;
              v251 = qvector_reserve(v230, v240, v239, 1);
              *(_QWORD *)v230 = v251;
              v238 = v398;
              v240 = v251;
            }
            *((_QWORD *)v230 + 1) = v239;
            v241 = 2;
            *(_BYTE *)(v240 + v238) = 0;
            v242 = *(_QWORD *)v230 + v237;
            *(_DWORD *)v242 = 1430540110;
            *(_WORD *)(v242 + 4) = 21328;
            v243 = *((_QWORD *)v230 + 1);
            if ( v243 )
              v241 = v243-- + 1;
            v244 = *(_QWORD *)v230;
            if ( *((_QWORD *)v230 + 2) < v241 )
            {
              v250 = qvector_reserve(v230, v244, v241, 1);
              *(_QWORD *)v230 = v250;
              v244 = v250;
            }
            *((_QWORD *)v230 + 1) = v241;
            v245 = 2;
            *(_BYTE *)(v244 + v243) = 2;
            *(_BYTE *)(*(_QWORD *)v230 + v243 + 1) = 0;
            v246 = *((_QWORD *)v230 + 1);
            if ( v246 )
              v245 = v246-- + 1;
            v247 = *(_QWORD *)v230;
            if ( *((_QWORD *)v230 + 2) < v245 )
            {
              v252 = qvector_reserve(v230, v247, v245, 1);
              *(_QWORD *)v230 = v252;
              v247 = v252;
            }
            *((_QWORD *)v230 + 1) = v245;
            *(_BYTE *)(v247 + v246) = 32;
            *(_BYTE *)(*(_QWORD *)v230 + v246 + 1) = 0;
            v167 = *((_DWORD *)a1 + 10);
LABEL_189:
            if ( (v167 & 4) == 0 )
              goto LABEL_194;
            v168 = v167 & 0xF0;
            if ( v168 != 16 )
            {
LABEL_191:
              if ( v168 != 32 )
                goto LABEL_192;
              v303 = v432;
              v304 = (char *)v431;
              if ( *((_QWORD *)&v432 + 1) < (unsigned __int64)(v432 + 1) )
              {
                v431 = (void *)qvector_reserve(&v431, v431, v432 + 1, 24);
                v303 = v432;
                v304 = (char *)v431;
              }
              v305 = 2;
              v306 = (__int64 *)&v304[24 * v303];
              *v306 = 0;
              *(_OWORD *)(v306 + 1) = 0;
              *(_QWORD *)&v432 = v432 + 1;
              v307 = v306[1];
              v308 = *v306;
              if ( v307 )
              {
                v305 = v307 + 1;
                if ( v307 == -1 )
                {
                  v310 = -1;
                  v307 = -2;
                  goto LABEL_385;
                }
                --v307;
              }
              v309 = qvector_reserve(v306, v308, v305, 1);
              *v306 = v309;
              v308 = v309;
              v310 = v307 + 1;
LABEL_385:
              v306[1] = v305;
              v311 = 2;
              *(_BYTE *)(v308 + v307) = 1;
              *(_BYTE *)(*v306 + v310) = 0;
              v312 = v306[1];
              if ( v312 )
                v311 = v312-- + 1;
              v313 = *v306;
              if ( v306[2] < v311 )
              {
                v360 = qvector_reserve(v306, v313, v311, 1);
                *v306 = v360;
                v313 = v360;
              }
              v306[1] = v311;
              *(_BYTE *)(v313 + v312) = 32;
              *(_BYTE *)(*v306 + v312 + 1) = 0;
              v314 = v306[1];
              if ( v314 )
              {
                v315 = v314 + 2;
                v316 = v314 + 3;
                --v314;
              }
              else
              {
                v316 = 4;
                v315 = 3;
              }
              v317 = *v306;
              if ( v306[2] < v316 )
              {
                v413 = v315;
                v362 = qvector_reserve(v306, v317, v316, 1);
                *v306 = v362;
                v315 = v413;
                v317 = v362;
              }
              v306[1] = v316;
              v318 = 2;
              *(_BYTE *)(v317 + v315) = 0;
              v319 = *v306 + v314;
              *(_WORD *)v319 = 17231;
              *(_BYTE *)(v319 + 2) = 84;
              v320 = v306[1];
              if ( v320 )
                v318 = v320-- + 1;
              v321 = *v306;
              if ( v306[2] < v318 )
              {
                v361 = qvector_reserve(v306, v321, v318, 1);
                *v306 = v361;
                v321 = v361;
              }
              v306[1] = v318;
              v322 = 2;
              *(_BYTE *)(v321 + v320) = 2;
              *(_BYTE *)(*v306 + v320 + 1) = 0;
              v323 = v306[1];
              if ( v323 )
                v322 = v323-- + 1;
              v324 = *v306;
              if ( v306[2] < v322 )
              {
                v364 = qvector_reserve(v306, v324, v322, 1);
                *v306 = v364;
                v324 = v364;
              }
              v306[1] = v322;
              *(_BYTE *)(v324 + v323) = 32;
              *(_BYTE *)(*v306 + v323 + 1) = 0;
              v168 = a1[5] & 0xF0;
LABEL_192:
              if ( v168 != 48 )
                goto LABEL_193;
              v281 = v432;
              v282 = (char *)v431;
              if ( *((_QWORD *)&v432 + 1) < (unsigned __int64)(v432 + 1) )
              {
                v431 = (void *)qvector_reserve(&v431, v431, v432 + 1, 24);
                v281 = v432;
                v282 = (char *)v431;
              }
              v283 = 2;
              v284 = (__int64 *)&v282[24 * v281];
              *v284 = 0;
              *(_OWORD *)(v284 + 1) = 0;
              *(_QWORD *)&v432 = v432 + 1;
              v285 = v284[1];
              v286 = *v284;
              if ( v285 )
              {
                v283 = v285 + 1;
                if ( v285 == -1 )
                {
                  v288 = -1;
                  v285 = -2;
                  goto LABEL_364;
                }
                --v285;
              }
              v287 = qvector_reserve(v284, v286, v283, 1);
              *v284 = v287;
              v286 = v287;
              v288 = v285 + 1;
LABEL_364:
              v284[1] = v283;
              v289 = 2;
              *(_BYTE *)(v286 + v285) = 1;
              *(_BYTE *)(*v284 + v288) = 0;
              v290 = v284[1];
              if ( v290 )
                v289 = v290-- + 1;
              v291 = *v284;
              if ( v284[2] < v289 )
              {
                v353 = qvector_reserve(v284, v291, v289, 1);
                *v284 = v353;
                v291 = v353;
              }
              v284[1] = v289;
              *(_BYTE *)(v291 + v290) = 32;
              *(_BYTE *)(*v284 + v290 + 1) = 0;
              v292 = v284[1];
              if ( v292 )
              {
                v293 = v292 + 2;
                v294 = v292 + 3;
                --v292;
              }
              else
              {
                v294 = 4;
                v293 = 3;
              }
              v295 = *v284;
              if ( v284[2] < v294 )
              {
                v412 = v293;
                v359 = qvector_reserve(v284, v295, v294, 1);
                *v284 = v359;
                v293 = v412;
                v295 = v359;
              }
              v284[1] = v294;
              v296 = 2;
              *(_BYTE *)(v295 + v293) = 0;
              v297 = *v284 + v292;
              *(_WORD *)v297 = 18754;
              *(_BYTE *)(v297 + 2) = 78;
              v298 = v284[1];
              if ( v298 )
                v296 = v298-- + 1;
              v299 = *v284;
              if ( v284[2] < v296 )
              {
                v358 = qvector_reserve(v284, v299, v296, 1);
                *v284 = v358;
                v299 = v358;
              }
              v284[1] = v296;
              v300 = 2;
              *(_BYTE *)(v299 + v298) = 2;
              *(_BYTE *)(*v284 + v298 + 1) = 0;
              v301 = v284[1];
              if ( v301 )
                v300 = v301-- + 1;
              v302 = *v284;
              if ( v284[2] < v300 )
              {
                v363 = qvector_reserve(v284, v302, v300, 1);
                *v284 = v363;
                v302 = v363;
              }
              v284[1] = v300;
              *(_BYTE *)(v302 + v301) = 32;
              *(_BYTE *)(*v284 + v301 + 1) = 0;
              v168 = a1[5] & 0xF0;
LABEL_193:
              if ( v168 )
                goto LABEL_194;
              v208 = v432;
              v209 = (char *)v431;
              if ( *((_QWORD *)&v432 + 1) < (unsigned __int64)(v432 + 1) )
              {
                v431 = (void *)qvector_reserve(&v431, v431, v432 + 1, 24);
                v208 = v432;
                v209 = (char *)v431;
              }
              v210 = 2;
              v211 = &v209[24 * v208];
              *(_QWORD *)v211 = 0;
              *(_OWORD *)(v211 + 8) = 0;
              *(_QWORD *)&v432 = v432 + 1;
              v212 = *((_QWORD *)v211 + 1);
              v213 = *(_QWORD *)v211;
              if ( v212 )
              {
                v210 = v212 + 1;
                if ( v212 == -1 )
                {
                  v214 = -1;
                  v212 = -2;
LABEL_268:
                  *((_QWORD *)v211 + 1) = v210;
                  v215 = 2;
                  *(_BYTE *)(v213 + v212) = 1;
                  *(_BYTE *)(*(_QWORD *)v211 + v214) = 0;
                  v216 = *((_QWORD *)v211 + 1);
                  if ( v216 )
                    v215 = v216-- + 1;
                  v217 = *(_QWORD *)v211;
                  if ( *((_QWORD *)v211 + 2) < v215 )
                  {
                    v349 = qvector_reserve(v211, v217, v215, 1);
                    *(_QWORD *)v211 = v349;
                    v217 = v349;
                  }
                  *((_QWORD *)v211 + 1) = v215;
                  *(_BYTE *)(v217 + v216) = 32;
                  *(_BYTE *)(*(_QWORD *)v211 + v216 + 1) = 0;
                  v218 = *((_QWORD *)v211 + 1);
                  if ( v218 )
                  {
                    v219 = v218 + 2;
                    v220 = v218 + 3;
                    --v218;
                  }
                  else
                  {
                    v220 = 4;
                    v219 = 3;
                  }
                  v221 = *(_QWORD *)v211;
                  if ( *((_QWORD *)v211 + 2) < v220 )
                  {
                    v409 = v219;
                    v351 = qvector_reserve(v211, v221, v220, 1);
                    *(_QWORD *)v211 = v351;
                    v219 = v409;
                    v221 = v351;
                  }
                  *((_QWORD *)v211 + 1) = v220;
                  v222 = 2;
                  *(_BYTE *)(v221 + v219) = 0;
                  v223 = *(_QWORD *)v211 + v218;
                  *(_WORD *)v223 = 17732;
                  *(_BYTE *)(v223 + 2) = 67;
                  v224 = *((_QWORD *)v211 + 1);
                  if ( v224 )
                    v222 = v224-- + 1;
                  v225 = *(_QWORD *)v211;
                  if ( *((_QWORD *)v211 + 2) < v222 )
                  {
                    v350 = qvector_reserve(v211, v225, v222, 1);
                    *(_QWORD *)v211 = v350;
                    v225 = v350;
                  }
                  *((_QWORD *)v211 + 1) = v222;
                  v226 = 2;
                  *(_BYTE *)(v225 + v224) = 2;
                  *(_BYTE *)(*(_QWORD *)v211 + v224 + 1) = 0;
                  v227 = *((_QWORD *)v211 + 1);
                  if ( v227 )
                    v226 = v227-- + 1;
                  v228 = *(_QWORD *)v211;
                  if ( *((_QWORD *)v211 + 2) < v226 )
                  {
                    v348 = qvector_reserve(v211, v228, v226, 1);
                    *(_QWORD *)v211 = v348;
                    v228 = v348;
                  }
                  *((_QWORD *)v211 + 1) = v226;
                  *(_BYTE *)(v228 + v227) = 32;
                  *(_BYTE *)(*(_QWORD *)v211 + v227 + 1) = 0;
                  goto LABEL_194;
                }
                --v212;
              }
              v256 = qvector_reserve(v211, v213, v210, 1);
              *(_QWORD *)v211 = v256;
              v213 = v256;
              v214 = v212 + 1;
              goto LABEL_268;
            }
            v325 = v432;
            v326 = (char *)v431;
            if ( *((_QWORD *)&v432 + 1) < (unsigned __int64)(v432 + 1) )
            {
              v431 = (void *)qvector_reserve(&v431, v431, v432 + 1, 24);
              v325 = v432;
              v326 = (char *)v431;
            }
            v327 = 2;
            v328 = (__int64 *)&v326[24 * v325];
            *v328 = 0;
            *(_OWORD *)(v328 + 1) = 0;
            *(_QWORD *)&v432 = v432 + 1;
            v329 = v328[1];
            v330 = *v328;
            if ( v329 )
            {
              v327 = v329 + 1;
              if ( v329 == -1 )
              {
                v332 = -1;
                v329 = -2;
                goto LABEL_406;
              }
              --v329;
            }
            v331 = qvector_reserve(v328, v330, v327, 1);
            *v328 = v331;
            v330 = v331;
            v332 = v329 + 1;
LABEL_406:
            v328[1] = v327;
            v333 = 2;
            *(_BYTE *)(v330 + v329) = 1;
            *(_BYTE *)(*v328 + v332) = 0;
            v334 = v328[1];
            if ( v334 )
              v333 = v334-- + 1;
            v335 = *v328;
            if ( v328[2] < v333 )
            {
              v357 = qvector_reserve(v328, v335, v333, 1);
              *v328 = v357;
              v335 = v357;
            }
            v328[1] = v333;
            *(_BYTE *)(v335 + v334) = 32;
            *(_BYTE *)(*v328 + v334 + 1) = 0;
            v336 = v328[1];
            if ( v336 )
            {
              v337 = v336 + 2;
              v338 = v336 + 3;
              --v336;
            }
            else
            {
              v338 = 4;
              v337 = 3;
            }
            v339 = *v328;
            if ( v328[2] < v338 )
            {
              v411 = v337;
              v356 = qvector_reserve(v328, v339, v338, 1);
              *v328 = v356;
              v337 = v411;
              v339 = v356;
            }
            v328[1] = v338;
            *(_BYTE *)(v339 + v337) = 0;
            v340 = *v328 + v336;
            *(_WORD *)v340 = 17736;
            v341 = 2;
            *(_BYTE *)(v340 + 2) = 88;
            v342 = v328[1];
            if ( v342 )
              v341 = v342-- + 1;
            v343 = *v328;
            if ( v328[2] < v341 )
            {
              v355 = qvector_reserve(v328, v343, v341, 1);
              *v328 = v355;
              v343 = v355;
            }
            v328[1] = v341;
            v344 = 2;
            *(_BYTE *)(v343 + v342) = 2;
            *(_BYTE *)(*v328 + v342 + 1) = 0;
            v345 = v328[1];
            if ( v345 )
              v344 = v345-- + 1;
            v346 = *v328;
            if ( v328[2] < v344 )
            {
              v354 = qvector_reserve(v328, v346, v344, 1);
              *v328 = v354;
              v346 = v354;
            }
            v328[1] = v344;
            *(_BYTE *)(v346 + v345) = 32;
            *(_BYTE *)(*v328 + v345 + 1) = 0;
            v168 = a1[5] & 0xF0;
            goto LABEL_191;
          }
          --v231;
        }
        v248 = qvector_reserve(v230, v232, v229, 1);
        *(_QWORD *)v230 = v248;
        v232 = v248;
        v233 = v231 + 1;
        goto LABEL_288;
      }
      if ( !*((_DWORD *)a1 + 11) && *((_DWORD *)a1 + 12) == -1 )
        goto LABEL_218;
      v431 = nullptr;
      v432 = 0;
LABEL_194:
      v169 = v430;
      if ( (unsigned __int64)v430 > 1 )
      {
        v170 = v429;
        v171 = v430 - 1;
        if ( *((_QWORD *)&v430 + 1) < (unsigned __int64)(v430 + 1) )
        {
          v429 = (void *)qvector_reserve(&v429, v429, v430 + 1, 1);
          v170 = v429;
        }
        *(_QWORD *)&v430 = v169 + 1;
        v170[v169] = 0;
        *((_BYTE *)v429 + v171) = 32;
      }
      ptr = nullptr;
      v434 = 0;
      if ( !(_QWORD)v432 )
        goto LABEL_199;
      v195 = (char *)v431;
      v196 = v432 - 1;
      v197 = (char *)v431 + 24 * v432;
      if ( v431 == v197 )
      {
        if ( (_QWORD)v432 == 1 )
          goto LABEL_199;
      }
      else
      {
        v198 = (char *)v431;
        do
        {
          v199 = *((_QWORD *)v198 + 1);
          if ( v199 )
            v196 = v199 + v196 - 1;
          v198 += 24;
        }
        while ( v197 != v198 );
        if ( !v196 )
          goto LABEL_253;
      }
      v207 = (void *)qvector_reserve(&ptr, 0, v196, 1);
      v195 = (char *)v431;
      v196 = v434;
      ptr = v207;
      v197 = (char *)v431 + 24 * v432;
      if ( v431 == v197 )
        goto LABEL_199;
      do
      {
LABEL_253:
        if ( v196 > 1 )
        {
          v204 = ptr;
          v205 = v196 - 1;
          v206 = v196 + 1;
          if ( *((_QWORD *)&v434 + 1) < v196 + 1 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v206, 1);
            v205 = v196 - 1;
            v204 = ptr;
            v206 = v196 + 1;
          }
          *(_QWORD *)&v434 = v206;
          v204[v196] = 0;
          *((_BYTE *)ptr + v205) = 124;
          v196 = v434;
        }
        v200 = *((_QWORD *)v195 + 1);
        if ( v200 )
        {
          v201 = v200 - 1;
          if ( v200 != 1 )
          {
            v202 = v200 - 1;
            if ( v196 )
            {
              --v196;
              v202 = v201 + v196;
              v200 += v196;
            }
            v203 = ptr;
            if ( *((_QWORD *)&v434 + 1) < v200 )
            {
              v426 = v202;
              v418 = v201;
              v395 = v200;
              ptr = (void *)qvector_reserve(&ptr, ptr, v200, 1);
              v202 = v426;
              v203 = ptr;
              v201 = v418;
              v200 = v395;
            }
            *(_QWORD *)&v434 = v200;
            v203[v202] = 0;
            memcpy((char *)ptr + v196, *(const void **)v195, v201);
            v196 = v434;
          }
        }
        v195 += 24;
      }
      while ( v197 != v195 );
LABEL_199:
      sub_35A910((__int64 *)&v429);
      if ( ptr )
      {
        *(_QWORD *)&v434 = 0;
        qfree(ptr);
      }
      if ( *((_DWORD *)a1 + 12) != -1 )
      {
        v172 = v430;
        if ( (_QWORD)v430 )
        {
          v173 = v430 + 1;
          v174 = v430;
          v172 = v430 - 1;
        }
        else
        {
          v173 = 2;
          v174 = 1;
        }
        v175 = v429;
        if ( *((_QWORD *)&v430 + 1) < v173 )
        {
          v397 = v174;
          v429 = (void *)qvector_reserve(&v429, v429, v173, 1);
          v174 = v397;
          v175 = v429;
        }
        *(_QWORD *)&v430 = v173;
        v175[v174] = 0;
        *((_BYTE *)v429 + v172) = 44;
        if ( *((_DWORD *)a1 + 11) )
          sub_35A910((__int64 *)&v429);
        goto LABEL_208;
      }
      if ( *((_DWORD *)a1 + 11) )
LABEL_208:
        sub_35A910((__int64 *)&v429);
      v176 = v430;
      if ( (_QWORD)v430 )
      {
        v177 = v430 + 4;
        v178 = v430 + 5;
        v179 = v429;
        v176 = v430 - 1;
        if ( *((_QWORD *)&v430 + 1) >= (unsigned __int64)(v430 + 5) )
          goto LABEL_211;
      }
      else
      {
        v179 = v429;
        v178 = 6;
        v177 = 5;
        if ( *((_QWORD *)&v430 + 1) >= 6u )
          goto LABEL_211;
      }
      v429 = (void *)qvector_reserve(&v429, v179, v178, 1);
      v179 = v429;
LABEL_211:
      *(_QWORD *)&v430 = v178;
      v179[v177] = 0;
      v180 = (char *)v429 + v176;
      *(_DWORD *)v180 = 36243713;
      v180[4] = 9;
      v181 = (char *)v431;
      if ( v431 )
      {
        v182 = v432;
        if ( (_QWORD)v432 )
        {
          v183 = 0;
          do
          {
            v184 = &v181[24 * v183];
            v185 = *(void **)v184;
            if ( *(_QWORD *)v184 )
            {
              *((_QWORD *)v184 + 1) = 0;
              qfree(v185);
              v181 = (char *)v431;
            }
            ++v183;
          }
          while ( v182 != v183 );
        }
        *(_QWORD *)&v432 = 0;
        qfree(v181);
      }
LABEL_218:
      v186 = v430;
      if ( !a3 && (unsigned __int64)v430 > 1 )
      {
        tag_remove(&v429, v429, 0);
        v186 = v430;
      }
      v187 = v429;
      v188 = v186 - 1;
      if ( !v186 )
        v188 = 0;
      if ( a2 )
      {
        v187 = *(void **)a2;
        v189 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = v429;
        v190 = _mm_loadh_ps((const double *)&v430 + 1);
        v429 = v187;
        *((_QWORD *)&v430 + 1) = v189;
        *(__m128 *)(a2 + 8) = v190;
      }
      if ( v187 )
      {
        *(_QWORD *)&v430 = 0;
        qfree(v187);
      }
      return v188;
    case 0xALL:
      v192 = *((_DWORD *)a1 + 2);
      v434 = 0;
      ptr = nullptr;
      print_strlit_type((__int64)&ptr, v192, nullptr, 16);
      sub_35A790((char **)&v429);
      v145 = ptr;
      if ( ptr )
        goto LABEL_154;
      goto LABEL_136;
    case 0xCLL:
      v142 = (unsigned int)*((__int16 *)a1 + 4);
      ptr = nullptr;
      v434 = 0;
      custom_data_type = get_custom_data_type(v142);
      if ( custom_data_type )
        sub_5818D0((char **)&ptr, *(_BYTE **)(custom_data_type + 24));
      sub_35A790((char **)&v429);
      custom_data_format = get_custom_data_format((unsigned int)*((__int16 *)a1 + 5));
      if ( custom_data_format )
        sub_5818D0((char **)&ptr, *(_BYTE **)(custom_data_format + 24));
      sub_35A910((__int64 *)&v429);
      v145 = ptr;
      if ( ptr )
      {
LABEL_154:
        *(_QWORD *)&v434 = 0;
        qfree(v145);
      }
LABEL_136:
      v3 = *a1;
      goto LABEL_157;
    default:
      if ( !under_debugger )
        interr(2924);
      BUG();
  }
}
