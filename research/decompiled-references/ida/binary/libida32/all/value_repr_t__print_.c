__int64 __fastcall value_repr_t__print_(__int64 *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  _BYTE *v11; // rsi
  char *v12; // rbx
  int v13; // eax
  _BYTE *v14; // rsi
  __int64 v15; // r15
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
  size_t v45; // r8
  __int64 v46; // r9
  const char *v47; // rbx
  __int64 v48; // r14
  unsigned __int64 v49; // r15
  _BYTE *v50; // rsi
  unsigned __int64 v51; // r15
  __int64 v52; // r14
  _BYTE *v53; // rsi
  size_t v54; // rax
  __int64 v55; // r14
  size_t v56; // r15
  size_t v57; // r8
  _BYTE *v58; // rsi
  unsigned __int64 v59; // rdx
  char *v60; // rdi
  unsigned __int64 v61; // r14
  __int64 v62; // rbx
  _BYTE *v63; // rsi
  unsigned __int64 v64; // r14
  __int64 v65; // rbx
  char *v66; // rbx
  __int64 v67; // r15
  unsigned __int64 v68; // rdx
  _BYTE *v69; // rsi
  unsigned __int64 v70; // rdx
  __int64 v71; // r15
  _BYTE *v72; // rsi
  unsigned __int64 v73; // rdx
  __int64 v74; // r15
  _BYTE *v75; // rsi
  unsigned __int64 v76; // rdx
  __int64 v77; // r15
  _BYTE *v78; // rsi
  unsigned __int64 v79; // rdx
  __int64 v80; // r15
  const char *v81; // r15
  size_t v82; // r8
  unsigned __int64 v83; // rdx
  _BYTE *v84; // rsi
  unsigned __int64 v85; // rdx
  _BYTE *v86; // rsi
  size_t v87; // rax
  unsigned __int64 v88; // r8
  size_t v89; // r9
  size_t v90; // r10
  _BYTE *v91; // rsi
  unsigned __int64 v92; // rdx
  __int64 v93; // r15
  unsigned __int64 v94; // rdx
  _BYTE *v95; // rsi
  unsigned __int64 v96; // rdx
  __int64 v97; // r15
  __int64 v98; // r15
  __int64 v99; // rbx
  char *v100; // r14
  _QWORD *v101; // rax
  unsigned __int64 v102; // rsi
  char *v103; // rax
  char *v104; // r14
  unsigned int v105; // eax
  unsigned int v106; // eax
  unsigned int v107; // edx
  __int64 v108; // rcx
  __int64 v109; // rdi
  __int64 custom_data_type; // rax
  __int64 custom_data_format; // rax
  void *v112; // rdi
  char *v113; // rbx
  __int64 v114; // r15
  const char *v115; // r15
  __int64 v116; // r8
  unsigned __int64 v117; // rdx
  _BYTE *v118; // rsi
  unsigned __int64 v119; // rdx
  __int64 v120; // r8
  _BYTE *v121; // rsi
  size_t v122; // rax
  __int64 v123; // r8
  size_t v124; // r9
  size_t v125; // r10
  _BYTE *v126; // rsi
  size_t v127; // rdx
  __int64 v128; // r15
  unsigned __int64 v129; // rdx
  _BYTE *v130; // rsi
  unsigned __int64 v131; // rdx
  __int64 v132; // r15
  _BYTE *v133; // rsi
  int v134; // eax
  int v135; // eax
  __int64 v136; // rbx
  _BYTE *v137; // rsi
  __int64 v138; // r14
  __int64 v139; // rbx
  unsigned __int64 v140; // r15
  __int64 v141; // r8
  _BYTE *v142; // rsi
  __int64 v143; // rbx
  __int64 v144; // r15
  __int64 v145; // rbp
  _BYTE *v146; // rsi
  char *v147; // rbx
  char *v148; // rdx
  __int64 v149; // rbp
  __int64 v150; // rbx
  char *v151; // rax
  void *v152; // rdi
  __int64 v153; // rdx
  void *v154; // rdi
  __int64 v155; // rbx
  __int64 v156; // rcx
  __m128 v157; // xmm0
  __int64 v159; // rsi
  __int64 v160; // r15
  __int64 v161; // r14
  char *v162; // rbx
  _QWORD *v163; // rax
  unsigned __int64 v164; // rdx
  char *v165; // rax
  char *v166; // rbx
  unsigned int v167; // eax
  unsigned int v168; // eax
  unsigned int v169; // ecx
  __int64 v170; // rsi
  __int64 v171; // r15
  char *v172; // rbx
  _QWORD *v173; // rax
  unsigned __int64 v174; // rdx
  char *v175; // rax
  char *v176; // rbx
  unsigned int v177; // eax
  unsigned int v178; // eax
  unsigned int v179; // ecx
  __int64 v180; // rsi
  __int64 v181; // r15
  char *v182; // rbx
  _QWORD *v183; // rax
  unsigned __int64 v184; // rdx
  char *v185; // rax
  char *v186; // rbx
  unsigned int v187; // eax
  unsigned int v188; // eax
  unsigned int v189; // ecx
  __int64 v190; // rsi
  char *v191; // rsi
  __int64 v192; // rdx
  char *v193; // r14
  unsigned __int64 v194; // rbx
  char *v195; // r15
  char *v196; // rax
  __int64 v197; // rdx
  unsigned __int64 v198; // rdx
  size_t v199; // r9
  size_t v200; // r10
  _BYTE *v201; // rsi
  _BYTE *v202; // rsi
  unsigned __int64 v203; // r9
  unsigned __int64 v204; // rdx
  void *v205; // rax
  __int64 v206; // rdx
  int v207; // eax
  __int64 v208; // rcx
  __int64 v209; // rbx
  __int64 v210; // r15
  unsigned __int64 v211; // r14
  __m128i v212; // xmm0
  __int64 v213; // rdx
  int v214; // eax
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  int v218; // eax
  __int64 v219; // rbx
  unsigned __int64 v220; // r14
  _BYTE *v221; // rsi
  unsigned __int64 v222; // r14
  __int64 v223; // rbx
  _BYTE *v224; // rsi
  unsigned __int64 v225; // r14
  __int64 v226; // rbx
  _BYTE *v227; // rsi
  unsigned __int64 v228; // r14
  __int64 v229; // rbx
  _BYTE *v230; // rsi
  unsigned __int64 v231; // r14
  __int64 v232; // rbx
  _BYTE *v233; // rsi
  __int64 v234; // rdx
  char *v235; // rsi
  __int64 v236; // r15
  char *v237; // rbx
  __int64 v238; // r14
  __int64 v239; // rsi
  __int64 v240; // rdx
  unsigned __int64 v241; // r15
  __int64 v242; // r14
  __int64 v243; // rsi
  __int64 v244; // r14
  __int64 v245; // r8
  unsigned __int64 v246; // r15
  __int64 v247; // rsi
  unsigned __int64 v248; // r15
  __int64 v249; // r14
  __int64 v250; // r14
  __int64 v251; // rsi
  unsigned __int64 v252; // r15
  __int64 v253; // r14
  __int64 v254; // rsi
  __int64 v255; // r15
  char *v256; // rbx
  __int64 v257; // r14
  __int64 v258; // rsi
  __int64 v259; // rdx
  unsigned __int64 v260; // r15
  __int64 v261; // r14
  __int64 v262; // rsi
  __int64 v263; // r14
  __int64 v264; // r8
  unsigned __int64 v265; // r15
  __int64 v266; // rsi
  unsigned __int64 v267; // r15
  __int64 v268; // r14
  __int64 v269; // r14
  __int64 v270; // rsi
  unsigned __int64 v271; // r15
  __int64 v272; // r14
  __int64 v273; // rsi
  __int64 v274; // rax
  __int64 v275; // rax
  __int64 v276; // rax
  __int64 v277; // rax
  __int64 v278; // rax
  _QWORD *v279; // rax
  _WORD *v280; // rax
  __int64 v281; // rcx
  __int64 v282; // rax
  __int64 v283; // rdx
  char *v284; // rsi
  __int64 v285; // r15
  __int64 *v286; // rbx
  __int64 v287; // r14
  __int64 v288; // rsi
  __int64 v289; // rax
  __int64 v290; // rdx
  unsigned __int64 v291; // r15
  __int64 v292; // r14
  __int64 v293; // rsi
  __int64 v294; // r14
  __int64 v295; // r8
  unsigned __int64 v296; // r15
  __int64 v297; // rsi
  unsigned __int64 v298; // r15
  __int64 v299; // r14
  __int64 v300; // r14
  __int64 v301; // rsi
  unsigned __int64 v302; // r15
  __int64 v303; // r14
  __int64 v304; // rsi
  __int64 v305; // rdx
  char *v306; // rsi
  __int64 v307; // r15
  __int64 *v308; // rbx
  __int64 v309; // r14
  __int64 v310; // rsi
  __int64 v311; // rax
  __int64 v312; // rdx
  unsigned __int64 v313; // r15
  __int64 v314; // r14
  __int64 v315; // rsi
  __int64 v316; // r14
  __int64 v317; // r8
  unsigned __int64 v318; // r15
  __int64 v319; // rsi
  __int64 v320; // r14
  unsigned __int64 v321; // r15
  __int64 v322; // r14
  __int64 v323; // rsi
  unsigned __int64 v324; // r15
  __int64 v325; // r14
  __int64 v326; // rsi
  __int64 v327; // rdx
  char *v328; // rsi
  __int64 v329; // r15
  __int64 *v330; // rbx
  __int64 v331; // r14
  __int64 v332; // rsi
  __int64 v333; // rax
  __int64 v334; // rdx
  unsigned __int64 v335; // r15
  __int64 v336; // r14
  __int64 v337; // rsi
  __int64 v338; // r14
  __int64 v339; // r8
  unsigned __int64 v340; // r15
  __int64 v341; // rsi
  unsigned __int64 v342; // r15
  __int64 v343; // r14
  __int64 v344; // r14
  __int64 v345; // rsi
  unsigned __int64 v346; // r15
  __int64 v347; // r14
  __int64 v348; // rsi
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
  __int64 v365; // rax
  __int64 custom_refinfo; // rax
  __int64 v367; // rbx
  __int64 v368; // r15
  unsigned __int64 v369; // r14
  _QWORD *v370; // rbx
  __int64 v371; // rax
  __int64 v372; // rbx
  __int64 v373; // r8
  unsigned __int64 v374; // r15
  _BYTE *v375; // rsi
  __m128i si128; // xmm0
  __int64 v377; // rbx
  unsigned __int64 v378; // r14
  unsigned __int64 v379; // r14
  __int64 v380; // rbx
  __int64 v381; // rbx
  __int64 v382; // r15
  unsigned __int64 v383; // r14
  unsigned __int64 v384; // r14
  char *v385; // rbx
  __int64 v386; // rbx
  unsigned __int64 v387; // r14
  __int64 v388; // rbx
  unsigned __int64 v389; // [rsp+0h] [rbp-B8h]
  __int64 v390; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v391; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v392; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v393; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v394; // [rsp+0h] [rbp-B8h]
  __int64 v395; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v396; // [rsp+0h] [rbp-B8h]
  size_t v397; // [rsp+0h] [rbp-B8h]
  __int64 v398; // [rsp+0h] [rbp-B8h]
  __int64 v399; // [rsp+0h] [rbp-B8h]
  __int64 v400; // [rsp+0h] [rbp-B8h]
  __int64 v401; // [rsp+0h] [rbp-B8h]
  __int64 v402; // [rsp+0h] [rbp-B8h]
  __int64 v403; // [rsp+0h] [rbp-B8h]
  __int64 v404; // [rsp+0h] [rbp-B8h]
  __int64 v405; // [rsp+0h] [rbp-B8h]
  size_t v406; // [rsp+8h] [rbp-B0h]
  __int64 v407; // [rsp+8h] [rbp-B0h]
  __int64 v408; // [rsp+8h] [rbp-B0h]
  size_t v409; // [rsp+8h] [rbp-B0h]
  size_t v410; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v411; // [rsp+10h] [rbp-A8h]
  __int64 v412; // [rsp+10h] [rbp-A8h]
  size_t v413; // [rsp+18h] [rbp-A0h]
  size_t v414; // [rsp+18h] [rbp-A0h]
  size_t v415; // [rsp+18h] [rbp-A0h]
  void *v416; // [rsp+20h] [rbp-98h] BYREF
  __int128 v417; // [rsp+28h] [rbp-90h] BYREF
  void *v418; // [rsp+40h] [rbp-78h] BYREF
  __int128 v419; // [rsp+48h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-58h] BYREF
  __int128 v421; // [rsp+68h] [rbp-50h]
  unsigned __int64 v422; // [rsp+78h] [rbp-40h]

  v422 = __readfsqword(0x28u);
  v3 = *a1;
  v417 = 0;
  v416 = nullptr;
  v4 = v3 & 0xF;
  switch ( v3 & 0xF )
  {
    case 0LL:
      if ( (v3 & 0x400) != 0 )
      {
        v416 = (void *)qvector_reserve(&v416, 0, 9, 1);
        *(_QWORD *)&v417 = 9;
        strcpy((char *)v416, "__signed");
        v3 = *a1;
      }
      goto LABEL_139;
    case 1LL:
      if ( (v3 & 0x400) != 0 )
      {
        v98 = 11;
        v99 = 10;
        v100 = (char *)&unk_22B2C4F;
      }
      else
      {
        v98 = 10;
        v99 = 9;
        v100 = (char *)&unk_22B2C5A;
      }
      v101 = (_QWORD *)qvector_reserve(&v416, 0, v98, 1);
      v416 = v101;
      *(_QWORD *)&v417 = v98;
      v102 = (unsigned __int64)(v101 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v101 = *(_QWORD *)v100;
      *(_QWORD *)((char *)v101 + v99 - 8) = *(_QWORD *)&v100[v99 - 8];
      v103 = (char *)v101 - v102;
      v104 = (char *)(v100 - v103);
      v105 = (v99 + (_DWORD)v103) & 0xFFFFFFF8;
      if ( v105 >= 8 )
      {
        v106 = v105 & 0xFFFFFFF8;
        v107 = 0;
        do
        {
          v108 = v107;
          v107 += 8;
          *(_QWORD *)(v102 + v108) = *(_QWORD *)&v104[v108];
        }
        while ( v107 < v106 );
      }
      *((_BYTE *)v416 + v99) = 0;
      v3 = *a1;
      goto LABEL_139;
    case 2LL:
      if ( (v3 & 0x400) != 0 )
      {
        v171 = 11;
        v161 = 10;
        v172 = (char *)&unk_22B2C64;
      }
      else
      {
        v171 = 10;
        v161 = 9;
        v172 = (char *)&unk_22B2C6F;
      }
      v173 = (_QWORD *)qvector_reserve(&v416, 0, v171, 1);
      v416 = v173;
      *(_QWORD *)&v417 = v171;
      *v173 = *(_QWORD *)v172;
      *(_QWORD *)((char *)v173 + v161 - 8) = *(_QWORD *)&v172[v161 - 8];
      v174 = (unsigned __int64)(v173 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v175 = (char *)v173 - v174;
      v176 = (char *)(v172 - v175);
      v177 = (v161 + (_DWORD)v175) & 0xFFFFFFF8;
      if ( v177 >= 8 )
      {
        v178 = v177 & 0xFFFFFFF8;
        v179 = 0;
        do
        {
          v180 = v179;
          v179 += 8;
          *(_QWORD *)(v174 + v180) = *(_QWORD *)&v176[v180];
        }
        while ( v179 < v178 );
      }
      goto LABEL_215;
    case 3LL:
      if ( (v3 & 0x400) != 0 )
      {
        v160 = 11;
        v161 = 10;
        v162 = (char *)&unk_22B2C79;
      }
      else
      {
        v160 = 10;
        v161 = 9;
        v162 = (char *)&unk_22B2C84;
      }
      v163 = (_QWORD *)qvector_reserve(&v416, 0, v160, 1);
      v416 = v163;
      *(_QWORD *)&v417 = v160;
      *v163 = *(_QWORD *)v162;
      *(_QWORD *)((char *)v163 + v161 - 8) = *(_QWORD *)&v162[v161 - 8];
      v164 = (unsigned __int64)(v163 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v165 = (char *)v163 - v164;
      v166 = (char *)(v162 - v165);
      v167 = (v161 + (_DWORD)v165) & 0xFFFFFFF8;
      if ( v167 >= 8 )
      {
        v168 = v167 & 0xFFFFFFF8;
        v169 = 0;
        do
        {
          v170 = v169;
          v169 += 8;
          *(_QWORD *)(v164 + v170) = *(_QWORD *)&v166[v170];
        }
        while ( v169 < v168 );
      }
      goto LABEL_215;
    case 4LL:
      if ( (v3 & 0x400) != 0 )
      {
        v181 = 10;
        v161 = 9;
        v182 = (char *)&unk_22B2C8E;
      }
      else
      {
        v181 = 11;
        v161 = 10;
        v182 = (char *)&unk_22B2C98;
      }
      v183 = (_QWORD *)qvector_reserve(&v416, 0, v181, 1);
      v416 = v183;
      *(_QWORD *)&v417 = v181;
      *v183 = *(_QWORD *)v182;
      *(_QWORD *)((char *)v183 + v161 - 8) = *(_QWORD *)&v182[v161 - 8];
      v184 = (unsigned __int64)(v183 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v185 = (char *)v183 - v184;
      v186 = (char *)(v182 - v185);
      v187 = (v161 + (_DWORD)v185) & 0xFFFFFFF8;
      if ( v187 >= 8 )
      {
        v188 = v187 & 0xFFFFFFF8;
        v189 = 0;
        do
        {
          v190 = v189;
          v189 += 8;
          *(_QWORD *)(v184 + v190) = *(_QWORD *)&v186[v190];
        }
        while ( v189 < v188 );
      }
LABEL_215:
      *((_BYTE *)v416 + v161) = 0;
      goto LABEL_136;
    case 5LL:
      v279 = (_QWORD *)qvector_reserve(&v416, 0, 12, 1);
      v416 = v279;
      *(_QWORD *)&v417 = 12;
      *v279 = 0x616F6C665F5F2001LL;
      *(_DWORD *)((char *)v279 + 7) = 537031777;
      *((_BYTE *)v416 + 11) = 0;
      v3 = *a1;
      goto LABEL_139;
    case 6LL:
      v280 = (_WORD *)qvector_reserve(&v416, 0, 11, 1);
      v281 = 0x726168635F5F2001LL;
      v416 = v280;
      *(_QWORD *)&v417 = 11;
      goto LABEL_354;
    case 7LL:
      v280 = (_WORD *)qvector_reserve(&v416, 0, 11, 1);
      v281 = 0x6D6765735F5F2001LL;
      v416 = v280;
      *(_QWORD *)&v417 = 11;
LABEL_354:
      *(_QWORD *)v280 = v281;
      v280[4] = 8194;
      *((_BYTE *)v416 + 10) = 0;
      v3 = *a1;
      goto LABEL_139;
    case 8LL:
    case 0xBLL:
      get_numbered_type_name(0, *((unsigned int *)a1 + 3));
      sub_3573A0((char **)&v416);
      if ( (*a1 & 0xF) == 0xB && *((_DWORD *)a1 + 2) )
        sub_357520((__int64 *)&v416);
      v8 = v417;
      if ( (_QWORD)v417 )
      {
        v10 = v417 + 4;
        v9 = v417 + 5;
        v8 = v417 - 1;
      }
      else
      {
        v9 = 6;
        v10 = 5;
      }
      v11 = v416;
      if ( *((_QWORD *)&v417 + 1) < v9 )
      {
        v400 = v10;
        v416 = (void *)qvector_reserve(&v416, v416, v9, 1);
        v10 = v400;
        v11 = v416;
      }
      *(_QWORD *)&v417 = v9;
      v11[v10] = 0;
      v12 = (char *)v416 + v8;
      *(_DWORD *)v12 = 36243713;
      v12[4] = 9;
      v3 = *a1;
      goto LABEL_139;
    case 9LL:
      if ( *((_DWORD *)a1 + 3) || *((_DWORD *)a1 + 4) )
        goto LABEL_228;
      v13 = *((_DWORD *)a1 + 5);
      if ( v13 == 9 )
      {
        if ( (unsigned __int8)getinf_flag(3, 4) )
          goto LABEL_473;
        if ( *((_DWORD *)a1 + 5) != 2 )
        {
LABEL_15:
          v14 = v416;
          if ( (_QWORD)v417 )
          {
            v15 = v417 - 1;
            v16 = v417 + 1;
          }
          else
          {
            v15 = 0;
            v16 = 2;
          }
          if ( *((_QWORD *)&v417 + 1) >= v16 )
          {
LABEL_18:
            *(_QWORD *)&v417 = v16;
            v14[v15] = 1;
            *((_BYTE *)v416 + v15 + 1) = 0;
            v17 = v417;
            v18 = 2;
            if ( (_QWORD)v417 )
            {
              v18 = v417 + 1;
              v17 = v417 - 1;
            }
            v19 = v416;
            if ( *((_QWORD *)&v417 + 1) < v18 )
            {
              v416 = (void *)qvector_reserve(&v416, v416, v18, 1);
              v19 = v416;
            }
            *(_QWORD *)&v417 = v18;
            v20 = 8;
            v19[v17] = 32;
            *((_BYTE *)v416 + v17 + 1) = 0;
            v21 = v417;
            if ( (_QWORD)v417 )
            {
              v20 = v417 + 7;
              v4 = v417 + 8;
              v21 = v417 - 1;
            }
            v22 = v416;
            if ( *((_QWORD *)&v417 + 1) < v4 )
            {
              v416 = (void *)qvector_reserve(&v416, v416, v4, 1);
              v22 = v416;
            }
            *(_QWORD *)&v417 = v4;
            v22[v20] = 0;
            *(_QWORD *)((char *)v416 + v21) = 0x74657366666F5F5FLL;
            v23 = v417;
            v24 = 2;
            if ( (_QWORD)v417 )
            {
              v24 = v417 + 1;
              v23 = v417 - 1;
            }
            v25 = v416;
            if ( *((_QWORD *)&v417 + 1) < v24 )
            {
              v416 = (void *)qvector_reserve(&v416, v416, v24, 1);
              v25 = v416;
            }
            *(_QWORD *)&v417 = v24;
            v26 = 2;
            v25[v23] = 2;
            *((_BYTE *)v416 + v23 + 1) = 0;
            v27 = v417;
            if ( (_QWORD)v417 )
            {
              v26 = v417 + 1;
              v27 = v417 - 1;
            }
            v28 = v416;
            if ( *((_QWORD *)&v417 + 1) < v26 )
            {
              v416 = (void *)qvector_reserve(&v416, v416, v26, 1);
              v28 = v416;
            }
            *(_QWORD *)&v417 = v26;
            v29 = 2;
            v28[v27] = 32;
            *((_BYTE *)v416 + v27 + 1) = 0;
            v30 = v417;
            if ( (_QWORD)v417 )
            {
              v29 = v417 + 1;
              v30 = v417 - 1;
            }
            v31 = v416;
            if ( *((_QWORD *)&v417 + 1) < v29 )
            {
              v416 = (void *)qvector_reserve(&v416, v416, v29, 1);
              v31 = v416;
            }
            *(_QWORD *)&v417 = v29;
            v32 = 2;
            v31[v30] = 1;
            *((_BYTE *)v416 + v30 + 1) = 0;
            v33 = v417;
            if ( (_QWORD)v417 )
            {
              v32 = v417 + 1;
              v33 = v417 - 1;
            }
            v34 = v416;
            if ( *((_QWORD *)&v417 + 1) < v32 )
            {
              v416 = (void *)qvector_reserve(&v416, v416, v32, 1);
              v34 = v416;
            }
            *(_QWORD *)&v417 = v32;
            v35 = 2;
            v34[v33] = 9;
            *((_BYTE *)v416 + v33 + 1) = 0;
            v36 = v417;
            if ( (_QWORD)v417 )
            {
              v35 = v417 + 1;
              v36 = v417 - 1;
            }
            v37 = v416;
            if ( *((_QWORD *)&v417 + 1) < v35 )
            {
              v416 = (void *)qvector_reserve(&v416, v416, v35, 1);
              v37 = v416;
            }
            *(_QWORD *)&v417 = v35;
            v38 = 2;
            v37[v36] = 40;
            *((_BYTE *)v416 + v36 + 1) = 0;
            v39 = v417;
            if ( (_QWORD)v417 )
            {
              v38 = v417 + 1;
              v39 = v417 - 1;
            }
            v40 = v416;
            if ( *((_QWORD *)&v417 + 1) < v38 )
            {
              v416 = (void *)qvector_reserve(&v416, v416, v38, 1);
              v40 = v416;
            }
            *(_QWORD *)&v417 = v38;
            v41 = 2;
            v40[v39] = 2;
            *((_BYTE *)v416 + v39 + 1) = 0;
            v42 = v417;
            if ( (_QWORD)v417 )
            {
              v41 = v417 + 1;
              v42 = v417 - 1;
            }
            v43 = v416;
            if ( *((_QWORD *)&v417 + 1) < v41 )
            {
              v416 = (void *)qvector_reserve(&v416, v416, v41, 1);
              v43 = v416;
            }
            *(_QWORD *)&v417 = v41;
            v43[v42] = 9;
            *((_BYTE *)v416 + v42 + 1) = 0;
            v44 = (const char *)sub_408560(*((_DWORD *)a1 + 5));
            v47 = v44;
            if ( v44 )
            {
              if ( *v44 )
              {
                v48 = v417;
                v49 = 2;
                if ( (_QWORD)v417 )
                {
                  v49 = v417 + 1;
                  v48 = v417 - 1;
                }
                v50 = v416;
                if ( *((_QWORD *)&v417 + 1) < v49 )
                {
                  v416 = (void *)qvector_reserve(&v416, v416, v49, 1);
                  v50 = v416;
                }
                *(_QWORD *)&v417 = v49;
                v51 = 2;
                v50[v48] = 1;
                *((_BYTE *)v416 + v48 + 1) = 0;
                v52 = v417;
                if ( (_QWORD)v417 )
                {
                  v51 = v417 + 1;
                  v52 = v417 - 1;
                }
                v53 = v416;
                if ( *((_QWORD *)&v417 + 1) < v51 )
                {
                  v416 = (void *)qvector_reserve(&v416, v416, v51, 1);
                  v53 = v416;
                }
                *(_QWORD *)&v417 = v51;
                v53[v52] = 32;
                *((_BYTE *)v416 + v52 + 1) = 0;
                v54 = strlen(v47);
                v55 = v417;
                v56 = v54;
                v57 = v54;
                if ( (_QWORD)v417 )
                {
                  v55 = v417 - 1;
                  v57 = v54 + v417 - 1;
                }
                v58 = v416;
                v59 = v57 + 1;
                if ( *((_QWORD *)&v417 + 1) < v57 + 1 )
                {
                  v406 = v57;
                  v389 = v57 + 1;
                  v416 = (void *)qvector_reserve(&v416, v416, v59, 1);
                  v57 = v406;
                  v58 = v416;
                  v59 = v389;
                }
                *(_QWORD *)&v417 = v59;
                v58[v57] = 0;
                v60 = (char *)v416 + v55;
                v61 = 2;
                memmove(v60, v47, v56);
                v62 = v417;
                if ( (_QWORD)v417 )
                {
                  v61 = v417 + 1;
                  v62 = v417 - 1;
                }
                v63 = v416;
                if ( *((_QWORD *)&v417 + 1) < v61 )
                {
                  v416 = (void *)qvector_reserve(&v416, v416, v61, 1);
                  v63 = v416;
                }
                *(_QWORD *)&v417 = v61;
                v64 = 2;
                v63[v62] = 2;
                *((_BYTE *)v416 + v62 + 1) = 0;
                v65 = v417;
                if ( (_QWORD)v417 )
                {
                  v64 = v417 + 1;
                  v65 = v417 - 1;
                }
                v43 = v416;
                if ( *((_QWORD *)&v417 + 1) < v64 )
                {
                  v416 = (void *)qvector_reserve(&v416, v416, v64, 1);
                  v43 = v416;
                }
                *(_QWORD *)&v417 = v64;
                v43[v65] = 32;
                *((_BYTE *)v416 + v65 + 1) = 0;
              }
            }
            else
            {
              v43 = &unk_22B2CA3;
              sub_357520((__int64 *)&v416);
            }
            v66 = (char *)&unk_2B04AC0;
            do
            {
              if ( (*(_DWORD *)v66 & *((_DWORD *)a1 + 5)) != 0 )
              {
                v67 = v417;
                v68 = 2;
                if ( (_QWORD)v417 )
                {
                  v68 = v417 + 1;
                  v67 = v417 - 1;
                }
                v69 = v416;
                if ( *((_QWORD *)&v417 + 1) < v68 )
                {
                  v389 = v68;
                  v416 = (void *)qvector_reserve(&v416, v416, v68, 1);
                  v68 = v389;
                  v69 = v416;
                }
                *(_QWORD *)&v417 = v68;
                v70 = 2;
                v69[v67] = 1;
                *((_BYTE *)v416 + v67 + 1) = 0;
                v71 = v417;
                if ( (_QWORD)v417 )
                {
                  v70 = v417 + 1;
                  v71 = v417 - 1;
                }
                v72 = v416;
                if ( *((_QWORD *)&v417 + 1) < v70 )
                {
                  v389 = v70;
                  v416 = (void *)qvector_reserve(&v416, v416, v70, 1);
                  v70 = v389;
                  v72 = v416;
                }
                *(_QWORD *)&v417 = v70;
                v73 = 2;
                v72[v71] = 9;
                *((_BYTE *)v416 + v71 + 1) = 0;
                v74 = v417;
                if ( (_QWORD)v417 )
                {
                  v73 = v417 + 1;
                  v74 = v417 - 1;
                }
                v75 = v416;
                if ( *((_QWORD *)&v417 + 1) < v73 )
                {
                  v389 = v73;
                  v416 = (void *)qvector_reserve(&v416, v416, v73, 1);
                  v73 = v389;
                  v75 = v416;
                }
                *(_QWORD *)&v417 = v73;
                v76 = 2;
                v75[v74] = 124;
                *((_BYTE *)v416 + v74 + 1) = 0;
                v77 = v417;
                if ( (_QWORD)v417 )
                {
                  v76 = v417 + 1;
                  v77 = v417 - 1;
                }
                v78 = v416;
                if ( *((_QWORD *)&v417 + 1) < v76 )
                {
                  v389 = v76;
                  v416 = (void *)qvector_reserve(&v416, v416, v76, 1);
                  v76 = v389;
                  v78 = v416;
                }
                *(_QWORD *)&v417 = v76;
                v79 = 2;
                v78[v77] = 2;
                *((_BYTE *)v416 + v77 + 1) = 0;
                v80 = v417;
                if ( (_QWORD)v417 )
                {
                  v79 = v417 + 1;
                  v80 = v417 - 1;
                }
                v43 = v416;
                if ( *((_QWORD *)&v417 + 1) < v79 )
                {
                  v389 = v79;
                  v416 = (void *)qvector_reserve(&v416, v416, v79, 1);
                  v79 = v389;
                  v43 = v416;
                }
                *(_QWORD *)&v417 = v79;
                v43[v80] = 9;
                *((_BYTE *)v416 + v80 + 1) = 0;
                v81 = *((const char **)v66 + 1);
                if ( *v81 )
                {
                  v82 = v417;
                  v83 = 2;
                  if ( (_QWORD)v417 )
                  {
                    v83 = v417 + 1;
                    v82 = v417 - 1;
                  }
                  v84 = v416;
                  if ( *((_QWORD *)&v417 + 1) < v83 )
                  {
                    v406 = v82;
                    v389 = v83;
                    v416 = (void *)qvector_reserve(&v416, v416, v83, 1);
                    v82 = v406;
                    v84 = v416;
                    v83 = v389;
                  }
                  *(_QWORD *)&v417 = v83;
                  v85 = 2;
                  v84[v82] = 1;
                  *((_BYTE *)v416 + v82 + 1) = 0;
                  v45 = v417;
                  if ( (_QWORD)v417 )
                  {
                    v85 = v417 + 1;
                    v45 = v417 - 1;
                  }
                  v86 = v416;
                  if ( *((_QWORD *)&v417 + 1) < v85 )
                  {
                    v406 = v45;
                    v389 = v85;
                    v416 = (void *)qvector_reserve(&v416, v416, v85, 1);
                    v45 = v406;
                    v86 = v416;
                    v85 = v389;
                  }
                  *(_QWORD *)&v417 = v85;
                  v86[v45] = 32;
                  *((_BYTE *)v416 + v45 + 1) = 0;
                  if ( v81 )
                  {
                    v389 = v417;
                    v87 = strlen(v81);
                    v88 = v389;
                    v89 = v87;
                    v90 = v87;
                    if ( v389 )
                    {
                      v88 = v389 - 1;
                      v90 = v87 + v389 - 1;
                    }
                    v91 = v416;
                    v92 = v90 + 1;
                    if ( *((_QWORD *)&v417 + 1) < v90 + 1 )
                    {
                      v413 = v87;
                      v411 = v88;
                      v406 = v90;
                      v389 = v90 + 1;
                      v416 = (void *)qvector_reserve(&v416, v416, v92, 1);
                      v89 = v413;
                      v91 = v416;
                      v88 = v411;
                      v90 = v406;
                      v92 = v389;
                    }
                    *(_QWORD *)&v417 = v92;
                    v91[v90] = 0;
                    memmove((char *)v416 + v88, v81, v89);
                  }
                  v93 = v417;
                  v94 = 2;
                  if ( (_QWORD)v417 )
                  {
                    v94 = v417 + 1;
                    v93 = v417 - 1;
                  }
                  v95 = v416;
                  if ( *((_QWORD *)&v417 + 1) < v94 )
                  {
                    v389 = v94;
                    v416 = (void *)qvector_reserve(&v416, v416, v94, 1);
                    v94 = v389;
                    v95 = v416;
                  }
                  *(_QWORD *)&v417 = v94;
                  v96 = 2;
                  v95[v93] = 2;
                  *((_BYTE *)v416 + v93 + 1) = 0;
                  v97 = v417;
                  if ( (_QWORD)v417 )
                  {
                    v96 = v417 + 1;
                    v97 = v417 - 1;
                  }
                  v43 = v416;
                  if ( *((_QWORD *)&v417 + 1) < v96 )
                  {
                    v389 = v96;
                    v416 = (void *)qvector_reserve(&v416, v416, v96, 1);
                    v96 = v389;
                    v43 = v416;
                  }
                  *(_QWORD *)&v417 = v96;
                  v43[v97] = 32;
                  *((_BYTE *)v416 + v97 + 1) = 0;
                }
              }
              v66 += 16;
            }
            while ( &unk_2B04B40 != (_UNKNOWN *)v66 );
            v206 = *((unsigned int *)a1 + 3);
            if ( (_DWORD)v206 )
            {
              v207 = *((_DWORD *)a1 + 5);
              if ( (v207 & 0x1010) == 0 )
              {
                if ( (_DWORD)v206 == -1 )
                {
                  v367 = v417;
                  if ( (_QWORD)v417 )
                  {
                    v368 = v417 + 12;
                    v369 = v417 + 13;
                    v367 = v417 - 1;
                  }
                  else
                  {
                    v369 = 14;
                    v368 = 13;
                  }
                  if ( *((_QWORD *)&v417 + 1) < v369 )
                  {
                    v43 = v416;
                    v416 = (void *)qvector_reserve(&v416, v416, v369, 1);
                  }
                  *(_QWORD *)&v417 = v369;
                  *((_BYTE *)v416 + v368) = 0;
                  v370 = (char *)v416 + v367;
                  *v370 = 0x41200109027C0901LL;
                  *(_QWORD *)((char *)v370 + 5) = 0x20024F5455412001LL;
LABEL_277:
                  v213 = *((unsigned int *)a1 + 4);
                  if ( !(_DWORD)v213 )
                  {
                    v214 = *((_DWORD *)a1 + 5) & 0x4F;
                    if ( (*((_DWORD *)a1 + 5) & 0x40) != 0 )
                    {
                      custom_refinfo = get_custom_refinfo(
                                         *((_BYTE *)a1 + 20) & 0x4F,
                                         v43,
                                         v213,
                                         *((_DWORD *)a1 + 5) & 0x40,
                                         v45,
                                         v46,
                                         v389,
                                         v406,
                                         v411,
                                         v413,
                                         v416,
                                         v417);
                      if ( custom_refinfo && (*(_BYTE *)(custom_refinfo + 24) & 1) != 0 )
                        goto LABEL_286;
                    }
                    else if ( (unsigned __int8)v214 > 2u )
                    {
                      if ( (unsigned __int8)(v214 - 9) <= 1u )
                        goto LABEL_286;
                    }
                    else if ( (_BYTE)v214 )
                    {
                      goto LABEL_286;
                    }
                  }
                  sub_357520((__int64 *)&v416);
                  v218 = *((_DWORD *)a1 + 5) & 0x4F;
                  if ( (*((_DWORD *)a1 + 5) & 0x40) != 0 )
                  {
                    v353 = get_custom_refinfo(
                             *((_BYTE *)a1 + 20) & 0x4F,
                             &unk_22B610A,
                             *((_DWORD *)a1 + 5) & 0x40,
                             v215,
                             v216,
                             v217,
                             v389,
                             v406,
                             v411,
                             v413,
                             v416,
                             v417);
                    if ( v353 && (*(_BYTE *)(v353 + 24) & 1) != 0 )
                      goto LABEL_286;
                  }
                  else
                  {
                    if ( (unsigned __int8)v218 <= 2u )
                    {
                      if ( !(_BYTE)v218 )
                        goto LABEL_284;
LABEL_286:
                      v219 = v417;
                      v220 = 2;
                      if ( (_QWORD)v417 )
                      {
                        v220 = v417 + 1;
                        v219 = v417 - 1;
                      }
                      v221 = v416;
                      if ( *((_QWORD *)&v417 + 1) < v220 )
                      {
                        v416 = (void *)qvector_reserve(&v416, v416, v220, 1);
                        v221 = v416;
                      }
                      *(_QWORD *)&v417 = v220;
                      v222 = 2;
                      v221[v219] = 1;
                      *((_BYTE *)v416 + v219 + 1) = 0;
                      v223 = v417;
                      if ( (_QWORD)v417 )
                      {
                        v222 = v417 + 1;
                        v223 = v417 - 1;
                      }
                      v224 = v416;
                      if ( *((_QWORD *)&v417 + 1) < v222 )
                      {
                        v416 = (void *)qvector_reserve(&v416, v416, v222, 1);
                        v224 = v416;
                      }
                      *(_QWORD *)&v417 = v222;
                      v225 = 2;
                      v224[v223] = 9;
                      *((_BYTE *)v416 + v223 + 1) = 0;
                      v226 = v417;
                      if ( (_QWORD)v417 )
                      {
                        v225 = v417 + 1;
                        v226 = v417 - 1;
                      }
                      v227 = v416;
                      if ( *((_QWORD *)&v417 + 1) < v225 )
                      {
                        v416 = (void *)qvector_reserve(&v416, v416, v225, 1);
                        v227 = v416;
                      }
                      *(_QWORD *)&v417 = v225;
                      v228 = 2;
                      v227[v226] = 41;
                      *((_BYTE *)v416 + v226 + 1) = 0;
                      v229 = v417;
                      if ( (_QWORD)v417 )
                      {
                        v228 = v417 + 1;
                        v229 = v417 - 1;
                      }
                      v230 = v416;
                      if ( *((_QWORD *)&v417 + 1) < v228 )
                      {
                        v416 = (void *)qvector_reserve(&v416, v416, v228, 1);
                        v230 = v416;
                      }
                      *(_QWORD *)&v417 = v228;
                      v231 = 2;
                      v230[v229] = 2;
                      *((_BYTE *)v416 + v229 + 1) = 0;
                      v232 = v417;
                      if ( (_QWORD)v417 )
                      {
                        v231 = v417 + 1;
                        v232 = v417 - 1;
                      }
                      v233 = v416;
                      if ( *((_QWORD *)&v417 + 1) < v231 )
                      {
                        v416 = (void *)qvector_reserve(&v416, v416, v231, 1);
                        v233 = v416;
                      }
                      *(_QWORD *)&v417 = v231;
                      v233[v232] = 9;
                      *((_BYTE *)v416 + v232 + 1) = 0;
                      v3 = *a1;
                      goto LABEL_139;
                    }
                    if ( (unsigned __int8)(v218 - 9) <= 1u )
                      goto LABEL_286;
                  }
LABEL_284:
                  if ( *((_DWORD *)a1 + 2) == -1 )
                  {
                    v372 = v417;
                    if ( (_QWORD)v417 )
                    {
                      v373 = v417 + 15;
                      v374 = v417 + 16;
                      v372 = v417 - 1;
                    }
                    else
                    {
                      v374 = 17;
                      v373 = 16;
                    }
                    v375 = v416;
                    if ( *((_QWORD *)&v417 + 1) < v374 )
                    {
                      v405 = v373;
                      v416 = (void *)qvector_reserve(&v416, v416, v374, 1);
                      v373 = v405;
                      v375 = v416;
                    }
                    si128 = _mm_load_si128((const __m128i *)&xmmword_2383BB0);
                    *(_QWORD *)&v417 = v374;
                    v375[v373] = 0;
                    *(__m128i *)((char *)v416 + v372) = si128;
                  }
                  else
                  {
                    sub_357520((__int64 *)&v416);
                  }
                  goto LABEL_286;
                }
LABEL_446:
                v43 = &unk_22B2CAC;
                sub_357520((__int64 *)&v416);
                goto LABEL_277;
              }
              if ( *((_DWORD *)a1 + 4) )
              {
LABEL_271:
                if ( (_DWORD)v206 == -1 )
                {
                  v209 = v417;
                  if ( (_QWORD)v417 )
                  {
                    v210 = v417 + 15;
                    v211 = v417 + 16;
                    v209 = v417 - 1;
                  }
                  else
                  {
                    v211 = 17;
                    v210 = 16;
                  }
                  v43 = v416;
                  if ( *((_QWORD *)&v417 + 1) < v211 )
                  {
                    v416 = (void *)qvector_reserve(&v416, v416, v211, 1);
                    v43 = v416;
                  }
                  v212 = _mm_load_si128((const __m128i *)&xmmword_2383BB0);
                  *(_QWORD *)&v417 = v211;
                  v43[v210] = 0;
                  *(__m128i *)((char *)v416 + v209) = v212;
                  goto LABEL_277;
                }
                goto LABEL_446;
              }
            }
            else
            {
              if ( *((_DWORD *)a1 + 4) )
                goto LABEL_446;
              v207 = *((_DWORD *)a1 + 5);
            }
            v208 = v207 & 0x4F;
            if ( (v207 & 0x40) != 0 )
            {
              v371 = get_custom_refinfo(
                       (unsigned __int8)v208,
                       v43,
                       v206,
                       v208,
                       v45,
                       v46,
                       v389,
                       v406,
                       v411,
                       v413,
                       v416,
                       v417);
              if ( v371 && (*(_BYTE *)(v371 + 24) & 1) != 0 )
                goto LABEL_286;
              LODWORD(v206) = *((_DWORD *)a1 + 3);
            }
            else if ( (unsigned __int8)v208 > 2u )
            {
              if ( (unsigned __int8)(v208 - 9) <= 1u )
                goto LABEL_286;
            }
            else if ( (_BYTE)v208 )
            {
              goto LABEL_286;
            }
            goto LABEL_271;
          }
LABEL_229:
          v416 = (void *)qvector_reserve(&v416, v14, v16, 1);
          v14 = v416;
          goto LABEL_18;
        }
      }
      else if ( v13 != 2 )
      {
LABEL_228:
        v16 = 2;
        v14 = nullptr;
        v15 = 0;
        goto LABEL_229;
      }
      if ( (getinf(3) & 6) != 2 )
        goto LABEL_15;
LABEL_473:
      v377 = v417;
      v378 = 2;
      if ( (_QWORD)v417 )
      {
        v378 = v417 + 1;
        v377 = v417 - 1;
      }
      if ( *((_QWORD *)&v417 + 1) < v378 )
        v416 = (void *)qvector_reserve(&v416, v416, v378, 1);
      *(_QWORD *)&v417 = v378;
      v379 = 2;
      *((_BYTE *)v416 + v377) = 1;
      *((_BYTE *)v416 + v377 + 1) = 0;
      v380 = v417;
      if ( (_QWORD)v417 )
      {
        v379 = v417 + 1;
        v380 = v417 - 1;
      }
      if ( *((_QWORD *)&v417 + 1) < v379 )
        v416 = (void *)qvector_reserve(&v416, v416, v379, 1);
      *(_QWORD *)&v417 = v379;
      *((_BYTE *)v416 + v380) = 32;
      *((_BYTE *)v416 + v380 + 1) = 0;
      v381 = v417;
      if ( (_QWORD)v417 )
      {
        v382 = v417 + 4;
        v383 = v417 + 5;
        v381 = v417 - 1;
      }
      else
      {
        v383 = 6;
        v382 = 5;
      }
      if ( *((_QWORD *)&v417 + 1) < v383 )
        v416 = (void *)qvector_reserve(&v416, v416, v383, 1);
      *(_QWORD *)&v417 = v383;
      v384 = 2;
      *((_BYTE *)v416 + v382) = 0;
      v385 = (char *)v416 + v381;
      *(_DWORD *)v385 = 1718574943;
      v385[4] = 102;
      v386 = v417;
      if ( (_QWORD)v417 )
      {
        v384 = v417 + 1;
        v386 = v417 - 1;
      }
      if ( *((_QWORD *)&v417 + 1) < v384 )
        v416 = (void *)qvector_reserve(&v416, v416, v384, 1);
      *(_QWORD *)&v417 = v384;
      v387 = 2;
      *((_BYTE *)v416 + v386) = 2;
      *((_BYTE *)v416 + v386 + 1) = 0;
      v388 = v417;
      if ( (_QWORD)v417 )
      {
        v387 = v417 + 1;
        v388 = v417 - 1;
      }
      if ( *((_QWORD *)&v417 + 1) < v387 )
        v416 = (void *)qvector_reserve(&v416, v416, v387, 1);
      *(_QWORD *)&v417 = v387;
      *((_BYTE *)v416 + v388) = 32;
      *((_BYTE *)v416 + v388 + 1) = 0;
      v3 = *a1;
LABEL_139:
      v113 = (char *)&unk_2B04860;
      do
      {
        if ( (*(_QWORD *)v113 & v3) != 0 )
        {
          v114 = v417;
          if ( (unsigned __int64)v417 > 1 )
          {
            v191 = (char *)v416;
            v192 = v417 + 1;
            if ( *((_QWORD *)&v417 + 1) < (unsigned __int64)(v417 + 1) )
            {
              v395 = v417 + 1;
              v416 = (void *)qvector_reserve(&v416, v416, v192, 1);
              v192 = v395;
              v191 = (char *)v416;
            }
            *(_QWORD *)&v417 = v192;
            v191[v114 - 1] = 32;
            *((_BYTE *)v416 + v114) = 0;
          }
          v115 = *((const char **)v113 + 1);
          if ( *v115 )
          {
            v116 = v417;
            v117 = 2;
            if ( (_QWORD)v417 )
            {
              v117 = v417 + 1;
              v116 = v417 - 1;
            }
            v118 = v416;
            if ( *((_QWORD *)&v417 + 1) < v117 )
            {
              v408 = v116;
              v394 = v117;
              v416 = (void *)qvector_reserve(&v416, v416, v117, 1);
              v116 = v408;
              v118 = v416;
              v117 = v394;
            }
            *(_QWORD *)&v417 = v117;
            v119 = 2;
            v118[v116] = 1;
            *((_BYTE *)v416 + v116 + 1) = 0;
            v120 = v417;
            if ( (_QWORD)v417 )
            {
              v119 = v417 + 1;
              v120 = v417 - 1;
            }
            v121 = v416;
            if ( *((_QWORD *)&v417 + 1) < v119 )
            {
              v407 = v120;
              v393 = v119;
              v416 = (void *)qvector_reserve(&v416, v416, v119, 1);
              v120 = v407;
              v121 = v416;
              v119 = v393;
            }
            *(_QWORD *)&v417 = v119;
            v121[v120] = 32;
            *((_BYTE *)v416 + v120 + 1) = 0;
            if ( v115 )
            {
              v390 = v417;
              v122 = strlen(v115);
              v123 = v390;
              v124 = v122;
              v125 = v122;
              if ( v390 )
              {
                v123 = v390 - 1;
                v125 = v122 + v390 - 1;
              }
              v126 = v416;
              v127 = v125 + 1;
              if ( *((_QWORD *)&v417 + 1) < v125 + 1 )
              {
                v415 = v122;
                v412 = v123;
                v410 = v125;
                v397 = v125 + 1;
                v416 = (void *)qvector_reserve(&v416, v416, v127, 1);
                v124 = v415;
                v126 = v416;
                v123 = v412;
                v125 = v410;
                v127 = v397;
              }
              *(_QWORD *)&v417 = v127;
              v126[v125] = 0;
              memmove((char *)v416 + v123, v115, v124);
            }
            v128 = v417;
            v129 = 2;
            if ( (_QWORD)v417 )
            {
              v129 = v417 + 1;
              v128 = v417 - 1;
            }
            v130 = v416;
            if ( *((_QWORD *)&v417 + 1) < v129 )
            {
              v392 = v129;
              v416 = (void *)qvector_reserve(&v416, v416, v129, 1);
              v129 = v392;
              v130 = v416;
            }
            *(_QWORD *)&v417 = v129;
            v131 = 2;
            v130[v128] = 2;
            *((_BYTE *)v416 + v128 + 1) = 0;
            v132 = v417;
            if ( (_QWORD)v417 )
            {
              v131 = v417 + 1;
              v132 = v417 - 1;
            }
            v133 = v416;
            if ( *((_QWORD *)&v417 + 1) < v131 )
            {
              v391 = v131;
              v416 = (void *)qvector_reserve(&v416, v416, v131, 1);
              v131 = v391;
              v133 = v416;
            }
            *(_QWORD *)&v417 = v131;
            v133[v132] = 32;
            *((_BYTE *)v416 + v132 + 1) = 0;
          }
          v3 = *a1;
        }
        v113 += 16;
      }
      while ( algn_2B04890 != v113 );
      if ( (v3 & 0x1000) == 0 )
        goto LABEL_200;
      v134 = *((_DWORD *)a1 + 6);
      if ( v134 != 1 )
      {
        v418 = nullptr;
        v419 = 0;
        if ( (v134 & 1) != 0 )
          goto LABEL_171;
        v418 = (void *)qvector_reserve(&v418, 0, 1, 24);
        v255 = 2;
        v256 = (char *)v418 + 24 * v419;
        *(_QWORD *)v256 = 0;
        *(_OWORD *)(v256 + 8) = 0;
        *(_QWORD *)&v419 = v419 + 1;
        v257 = *((_QWORD *)v256 + 1);
        v258 = *(_QWORD *)v256;
        if ( v257 )
        {
          v255 = v257 + 1;
          if ( v257 == -1 )
          {
            v259 = -1;
            v257 = -2;
LABEL_332:
            *((_QWORD *)v256 + 1) = v255;
            v260 = 2;
            *(_BYTE *)(v258 + v257) = 1;
            *(_BYTE *)(*(_QWORD *)v256 + v259) = 0;
            v261 = *((_QWORD *)v256 + 1);
            if ( v261 )
              v260 = v261-- + 1;
            v262 = *(_QWORD *)v256;
            if ( *((_QWORD *)v256 + 2) < v260 )
            {
              v275 = qvector_reserve(v256, v262, v260, 1);
              *(_QWORD *)v256 = v275;
              v262 = v275;
            }
            *((_QWORD *)v256 + 1) = v260;
            *(_BYTE *)(v262 + v261) = 32;
            *(_BYTE *)(*(_QWORD *)v256 + v261 + 1) = 0;
            v263 = *((_QWORD *)v256 + 1);
            if ( v263 )
            {
              v264 = v263 + 5;
              v265 = v263 + 6;
              --v263;
            }
            else
            {
              v265 = 7;
              v264 = 6;
            }
            v266 = *(_QWORD *)v256;
            if ( *((_QWORD *)v256 + 2) < v265 )
            {
              v399 = v264;
              v277 = qvector_reserve(v256, v266, v265, 1);
              *(_QWORD *)v256 = v277;
              v264 = v399;
              v266 = v277;
            }
            *((_QWORD *)v256 + 1) = v265;
            v267 = 2;
            *(_BYTE *)(v266 + v264) = 0;
            v268 = *(_QWORD *)v256 + v263;
            *(_DWORD *)v268 = 1430540110;
            *(_WORD *)(v268 + 4) = 21328;
            v269 = *((_QWORD *)v256 + 1);
            if ( v269 )
              v267 = v269-- + 1;
            v270 = *(_QWORD *)v256;
            if ( *((_QWORD *)v256 + 2) < v267 )
            {
              v276 = qvector_reserve(v256, v270, v267, 1);
              *(_QWORD *)v256 = v276;
              v270 = v276;
            }
            *((_QWORD *)v256 + 1) = v267;
            v271 = 2;
            *(_BYTE *)(v270 + v269) = 2;
            *(_BYTE *)(*(_QWORD *)v256 + v269 + 1) = 0;
            v272 = *((_QWORD *)v256 + 1);
            if ( v272 )
              v271 = v272-- + 1;
            v273 = *(_QWORD *)v256;
            if ( *((_QWORD *)v256 + 2) < v271 )
            {
              v278 = qvector_reserve(v256, v273, v271, 1);
              *(_QWORD *)v256 = v278;
              v273 = v278;
            }
            *((_QWORD *)v256 + 1) = v271;
            *(_BYTE *)(v273 + v272) = 32;
            *(_BYTE *)(*(_QWORD *)v256 + v272 + 1) = 0;
            v134 = *((_DWORD *)a1 + 6);
LABEL_171:
            if ( (v134 & 4) == 0 )
              goto LABEL_176;
            v135 = v134 & 0xF0;
            if ( v135 != 16 )
            {
LABEL_173:
              if ( v135 != 32 )
                goto LABEL_174;
              v305 = v419;
              v306 = (char *)v418;
              if ( *((_QWORD *)&v419 + 1) < (unsigned __int64)(v419 + 1) )
              {
                v418 = (void *)qvector_reserve(&v418, v418, v419 + 1, 24);
                v305 = v419;
                v306 = (char *)v418;
              }
              v307 = 2;
              v308 = (__int64 *)&v306[24 * v305];
              *v308 = 0;
              *(_OWORD *)(v308 + 1) = 0;
              *(_QWORD *)&v419 = v419 + 1;
              v309 = v308[1];
              v310 = *v308;
              if ( v309 )
              {
                v307 = v309 + 1;
                if ( v309 == -1 )
                {
                  v312 = -1;
                  v309 = -2;
                  goto LABEL_391;
                }
                --v309;
              }
              v311 = qvector_reserve(v308, v310, v307, 1);
              *v308 = v311;
              v310 = v311;
              v312 = v309 + 1;
LABEL_391:
              v308[1] = v307;
              v313 = 2;
              *(_BYTE *)(v310 + v309) = 1;
              *(_BYTE *)(*v308 + v312) = 0;
              v314 = v308[1];
              if ( v314 )
                v313 = v314-- + 1;
              v315 = *v308;
              if ( v308[2] < v313 )
              {
                v355 = qvector_reserve(v308, v315, v313, 1);
                *v308 = v355;
                v315 = v355;
              }
              v308[1] = v313;
              *(_BYTE *)(v315 + v314) = 32;
              *(_BYTE *)(*v308 + v314 + 1) = 0;
              v316 = v308[1];
              if ( v316 )
              {
                v317 = v316 + 2;
                v318 = v316 + 3;
                --v316;
              }
              else
              {
                v318 = 4;
                v317 = 3;
              }
              v319 = *v308;
              if ( v308[2] < v318 )
              {
                v404 = v317;
                v362 = qvector_reserve(v308, v319, v318, 1);
                *v308 = v362;
                v317 = v404;
                v319 = v362;
              }
              v308[1] = v318;
              *(_BYTE *)(v319 + v317) = 0;
              v320 = *v308 + v316;
              *(_WORD *)v320 = 17231;
              v321 = 2;
              *(_BYTE *)(v320 + 2) = 84;
              v322 = v308[1];
              if ( v322 )
                v321 = v322-- + 1;
              v323 = *v308;
              if ( v308[2] < v321 )
              {
                v361 = qvector_reserve(v308, v323, v321, 1);
                *v308 = v361;
                v323 = v361;
              }
              v308[1] = v321;
              v324 = 2;
              *(_BYTE *)(v323 + v322) = 2;
              *(_BYTE *)(*v308 + v322 + 1) = 0;
              v325 = v308[1];
              if ( v325 )
                v324 = v325-- + 1;
              v326 = *v308;
              if ( v308[2] < v324 )
              {
                v365 = qvector_reserve(v308, v326, v324, 1);
                *v308 = v365;
                v326 = v365;
              }
              v308[1] = v324;
              *(_BYTE *)(v326 + v325) = 32;
              *(_BYTE *)(*v308 + v325 + 1) = 0;
              v135 = a1[3] & 0xF0;
LABEL_174:
              if ( v135 != 48 )
                goto LABEL_175;
              v283 = v419;
              v284 = (char *)v418;
              if ( *((_QWORD *)&v419 + 1) < (unsigned __int64)(v419 + 1) )
              {
                v418 = (void *)qvector_reserve(&v418, v418, v419 + 1, 24);
                v283 = v419;
                v284 = (char *)v418;
              }
              v285 = 2;
              v286 = (__int64 *)&v284[24 * v283];
              *v286 = 0;
              *(_OWORD *)(v286 + 1) = 0;
              *(_QWORD *)&v419 = v419 + 1;
              v287 = v286[1];
              v288 = *v286;
              if ( v287 )
              {
                v285 = v287 + 1;
                if ( v287 == -1 )
                {
                  v290 = -1;
                  v287 = -2;
                  goto LABEL_370;
                }
                --v287;
              }
              v289 = qvector_reserve(v286, v288, v285, 1);
              *v286 = v289;
              v288 = v289;
              v290 = v287 + 1;
LABEL_370:
              v286[1] = v285;
              v291 = 2;
              *(_BYTE *)(v288 + v287) = 1;
              *(_BYTE *)(*v286 + v290) = 0;
              v292 = v286[1];
              if ( v292 )
                v291 = v292-- + 1;
              v293 = *v286;
              if ( v286[2] < v291 )
              {
                v356 = qvector_reserve(v286, v293, v291, 1);
                *v286 = v356;
                v293 = v356;
              }
              v286[1] = v291;
              *(_BYTE *)(v293 + v292) = 32;
              *(_BYTE *)(*v286 + v292 + 1) = 0;
              v294 = v286[1];
              if ( v294 )
              {
                v295 = v294 + 2;
                v296 = v294 + 3;
                --v294;
              }
              else
              {
                v296 = 4;
                v295 = 3;
              }
              v297 = *v286;
              if ( v286[2] < v296 )
              {
                v402 = v295;
                v357 = qvector_reserve(v286, v297, v296, 1);
                *v286 = v357;
                v295 = v402;
                v297 = v357;
              }
              v286[1] = v296;
              v298 = 2;
              *(_BYTE *)(v297 + v295) = 0;
              v299 = *v286 + v294;
              *(_WORD *)v299 = 18754;
              *(_BYTE *)(v299 + 2) = 78;
              v300 = v286[1];
              if ( v300 )
                v298 = v300-- + 1;
              v301 = *v286;
              if ( v286[2] < v298 )
              {
                v360 = qvector_reserve(v286, v301, v298, 1);
                *v286 = v360;
                v301 = v360;
              }
              v286[1] = v298;
              v302 = 2;
              *(_BYTE *)(v301 + v300) = 2;
              *(_BYTE *)(*v286 + v300 + 1) = 0;
              v303 = v286[1];
              if ( v303 )
                v302 = v303-- + 1;
              v304 = *v286;
              if ( v286[2] < v302 )
              {
                v364 = qvector_reserve(v286, v304, v302, 1);
                *v286 = v364;
                v304 = v364;
              }
              v286[1] = v302;
              *(_BYTE *)(v304 + v303) = 32;
              *(_BYTE *)(*v286 + v303 + 1) = 0;
              v135 = a1[3] & 0xF0;
LABEL_175:
              if ( v135 )
                goto LABEL_176;
              v234 = v419;
              v235 = (char *)v418;
              if ( *((_QWORD *)&v419 + 1) < (unsigned __int64)(v419 + 1) )
              {
                v418 = (void *)qvector_reserve(&v418, v418, v419 + 1, 24);
                v234 = v419;
                v235 = (char *)v418;
              }
              v236 = 2;
              v237 = &v235[24 * v234];
              *(_QWORD *)v237 = 0;
              *(_OWORD *)(v237 + 8) = 0;
              *(_QWORD *)&v419 = v419 + 1;
              v238 = *((_QWORD *)v237 + 1);
              v239 = *(_QWORD *)v237;
              if ( v238 )
              {
                v236 = v238 + 1;
                if ( v238 == -1 )
                {
                  v240 = -1;
                  v238 = -2;
LABEL_312:
                  *((_QWORD *)v237 + 1) = v236;
                  v241 = 2;
                  *(_BYTE *)(v239 + v238) = 1;
                  *(_BYTE *)(*(_QWORD *)v237 + v240) = 0;
                  v242 = *((_QWORD *)v237 + 1);
                  if ( v242 )
                    v241 = v242-- + 1;
                  v243 = *(_QWORD *)v237;
                  if ( *((_QWORD *)v237 + 2) < v241 )
                  {
                    v349 = qvector_reserve(v237, v243, v241, 1);
                    *(_QWORD *)v237 = v349;
                    v243 = v349;
                  }
                  *((_QWORD *)v237 + 1) = v241;
                  *(_BYTE *)(v243 + v242) = 32;
                  *(_BYTE *)(*(_QWORD *)v237 + v242 + 1) = 0;
                  v244 = *((_QWORD *)v237 + 1);
                  if ( v244 )
                  {
                    v245 = v244 + 2;
                    v246 = v244 + 3;
                    --v244;
                  }
                  else
                  {
                    v246 = 4;
                    v245 = 3;
                  }
                  v247 = *(_QWORD *)v237;
                  if ( *((_QWORD *)v237 + 2) < v246 )
                  {
                    v401 = v245;
                    v350 = qvector_reserve(v237, v247, v246, 1);
                    *(_QWORD *)v237 = v350;
                    v245 = v401;
                    v247 = v350;
                  }
                  *((_QWORD *)v237 + 1) = v246;
                  v248 = 2;
                  *(_BYTE *)(v247 + v245) = 0;
                  v249 = *(_QWORD *)v237 + v244;
                  *(_WORD *)v249 = 17732;
                  *(_BYTE *)(v249 + 2) = 67;
                  v250 = *((_QWORD *)v237 + 1);
                  if ( v250 )
                    v248 = v250-- + 1;
                  v251 = *(_QWORD *)v237;
                  if ( *((_QWORD *)v237 + 2) < v248 )
                  {
                    v351 = qvector_reserve(v237, v251, v248, 1);
                    *(_QWORD *)v237 = v351;
                    v251 = v351;
                  }
                  *((_QWORD *)v237 + 1) = v248;
                  v252 = 2;
                  *(_BYTE *)(v251 + v250) = 2;
                  *(_BYTE *)(*(_QWORD *)v237 + v250 + 1) = 0;
                  v253 = *((_QWORD *)v237 + 1);
                  if ( v253 )
                    v252 = v253-- + 1;
                  v254 = *(_QWORD *)v237;
                  if ( *((_QWORD *)v237 + 2) < v252 )
                  {
                    v352 = qvector_reserve(v237, v254, v252, 1);
                    *(_QWORD *)v237 = v352;
                    v254 = v352;
                  }
                  *((_QWORD *)v237 + 1) = v252;
                  *(_BYTE *)(v254 + v253) = 32;
                  *(_BYTE *)(*(_QWORD *)v237 + v253 + 1) = 0;
                  goto LABEL_176;
                }
                --v238;
              }
              v282 = qvector_reserve(v237, v239, v236, 1);
              *(_QWORD *)v237 = v282;
              v239 = v282;
              v240 = v238 + 1;
              goto LABEL_312;
            }
            v327 = v419;
            v328 = (char *)v418;
            if ( *((_QWORD *)&v419 + 1) < (unsigned __int64)(v419 + 1) )
            {
              v418 = (void *)qvector_reserve(&v418, v418, v419 + 1, 24);
              v327 = v419;
              v328 = (char *)v418;
            }
            v329 = 2;
            v330 = (__int64 *)&v328[24 * v327];
            *v330 = 0;
            *(_OWORD *)(v330 + 1) = 0;
            *(_QWORD *)&v419 = v419 + 1;
            v331 = v330[1];
            v332 = *v330;
            if ( v331 )
            {
              v329 = v331 + 1;
              if ( v331 == -1 )
              {
                v334 = -1;
                v331 = -2;
                goto LABEL_412;
              }
              --v331;
            }
            v333 = qvector_reserve(v330, v332, v329, 1);
            *v330 = v333;
            v332 = v333;
            v334 = v331 + 1;
LABEL_412:
            v330[1] = v329;
            v335 = 2;
            *(_BYTE *)(v332 + v331) = 1;
            *(_BYTE *)(*v330 + v334) = 0;
            v336 = v330[1];
            if ( v336 )
              v335 = v336-- + 1;
            v337 = *v330;
            if ( v330[2] < v335 )
            {
              v359 = qvector_reserve(v330, v337, v335, 1);
              *v330 = v359;
              v337 = v359;
            }
            v330[1] = v335;
            *(_BYTE *)(v337 + v336) = 32;
            *(_BYTE *)(*v330 + v336 + 1) = 0;
            v338 = v330[1];
            if ( v338 )
            {
              v339 = v338 + 2;
              v340 = v338 + 3;
              --v338;
            }
            else
            {
              v340 = 4;
              v339 = 3;
            }
            v341 = *v330;
            if ( v330[2] < v340 )
            {
              v403 = v339;
              v358 = qvector_reserve(v330, v341, v340, 1);
              *v330 = v358;
              v339 = v403;
              v341 = v358;
            }
            v330[1] = v340;
            v342 = 2;
            *(_BYTE *)(v341 + v339) = 0;
            v343 = *v330 + v338;
            *(_WORD *)v343 = 17736;
            *(_BYTE *)(v343 + 2) = 88;
            v344 = v330[1];
            if ( v344 )
              v342 = v344-- + 1;
            v345 = *v330;
            if ( v330[2] < v342 )
            {
              v354 = qvector_reserve(v330, v345, v342, 1);
              *v330 = v354;
              v345 = v354;
            }
            v330[1] = v342;
            v346 = 2;
            *(_BYTE *)(v345 + v344) = 2;
            *(_BYTE *)(*v330 + v344 + 1) = 0;
            v347 = v330[1];
            if ( v347 )
              v346 = v347-- + 1;
            v348 = *v330;
            if ( v330[2] < v346 )
            {
              v363 = qvector_reserve(v330, v348, v346, 1);
              *v330 = v363;
              v348 = v363;
            }
            v330[1] = v346;
            *(_BYTE *)(v348 + v347) = 32;
            *(_BYTE *)(*v330 + v347 + 1) = 0;
            v135 = a1[3] & 0xF0;
            goto LABEL_173;
          }
          --v257;
        }
        v274 = qvector_reserve(v256, v258, v255, 1);
        *(_QWORD *)v256 = v274;
        v258 = v274;
        v259 = v257 + 1;
        goto LABEL_332;
      }
      if ( !*((_DWORD *)a1 + 7) && *((_DWORD *)a1 + 8) == -1 )
        goto LABEL_200;
      v418 = nullptr;
      v419 = 0;
LABEL_176:
      v136 = v417;
      if ( (unsigned __int64)v417 > 1 )
      {
        v137 = v416;
        v138 = v417 - 1;
        if ( *((_QWORD *)&v417 + 1) < (unsigned __int64)(v417 + 1) )
        {
          v416 = (void *)qvector_reserve(&v416, v416, v417 + 1, 1);
          v137 = v416;
        }
        *(_QWORD *)&v417 = v136 + 1;
        v137[v136] = 0;
        *((_BYTE *)v416 + v138) = 32;
      }
      ptr = nullptr;
      v421 = 0;
      if ( !(_QWORD)v419 )
        goto LABEL_181;
      v193 = (char *)v418;
      v194 = v419 - 1;
      v195 = (char *)v418 + 24 * v419;
      if ( v418 == v195 )
      {
        if ( (_QWORD)v419 == 1 )
          goto LABEL_181;
      }
      else
      {
        v196 = (char *)v418;
        do
        {
          v197 = *((_QWORD *)v196 + 1);
          if ( v197 )
            v194 = v197 + v194 - 1;
          v196 += 24;
        }
        while ( v195 != v196 );
        if ( !v194 )
          goto LABEL_255;
      }
      v205 = (void *)qvector_reserve(&ptr, 0, v194, 1);
      v193 = (char *)v418;
      v194 = v421;
      ptr = v205;
      v195 = (char *)v418 + 24 * v419;
      if ( v418 == v195 )
        goto LABEL_181;
      do
      {
LABEL_255:
        if ( v194 > 1 )
        {
          v202 = ptr;
          v203 = v194 - 1;
          v204 = v194 + 1;
          if ( *((_QWORD *)&v421 + 1) < v194 + 1 )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v204, 1);
            v203 = v194 - 1;
            v202 = ptr;
            v204 = v194 + 1;
          }
          *(_QWORD *)&v421 = v204;
          v202[v194] = 0;
          *((_BYTE *)ptr + v203) = 124;
          v194 = v421;
        }
        v198 = *((_QWORD *)v193 + 1);
        if ( v198 )
        {
          v199 = v198 - 1;
          if ( v198 != 1 )
          {
            v200 = v198 - 1;
            if ( v194 )
            {
              --v194;
              v200 = v199 + v194;
              v198 += v194;
            }
            v201 = ptr;
            if ( *((_QWORD *)&v421 + 1) < v198 )
            {
              v414 = v200;
              v409 = v199;
              v396 = v198;
              ptr = (void *)qvector_reserve(&ptr, ptr, v198, 1);
              v200 = v414;
              v201 = ptr;
              v199 = v409;
              v198 = v396;
            }
            *(_QWORD *)&v421 = v198;
            v201[v200] = 0;
            memcpy((char *)ptr + v194, *(const void **)v193, v199);
            v194 = v421;
          }
        }
        v193 += 24;
      }
      while ( v195 != v193 );
LABEL_181:
      sub_357520((__int64 *)&v416);
      if ( ptr )
      {
        *(_QWORD *)&v421 = 0;
        qfree(ptr);
      }
      if ( *((_DWORD *)a1 + 8) != -1 )
      {
        v139 = v417;
        if ( (_QWORD)v417 )
        {
          v140 = v417 + 1;
          v141 = v417;
          v139 = v417 - 1;
        }
        else
        {
          v140 = 2;
          v141 = 1;
        }
        v142 = v416;
        if ( *((_QWORD *)&v417 + 1) < v140 )
        {
          v398 = v141;
          v416 = (void *)qvector_reserve(&v416, v416, v140, 1);
          v141 = v398;
          v142 = v416;
        }
        *(_QWORD *)&v417 = v140;
        v142[v141] = 0;
        *((_BYTE *)v416 + v139) = 44;
        if ( *((_DWORD *)a1 + 7) )
          sub_357520((__int64 *)&v416);
        goto LABEL_190;
      }
      if ( *((_DWORD *)a1 + 7) )
LABEL_190:
        sub_357520((__int64 *)&v416);
      v143 = v417;
      if ( (_QWORD)v417 )
      {
        v144 = v417 + 4;
        v145 = v417 + 5;
        v146 = v416;
        v143 = v417 - 1;
        if ( *((_QWORD *)&v417 + 1) >= (unsigned __int64)(v417 + 5) )
          goto LABEL_193;
      }
      else
      {
        v146 = v416;
        v145 = 6;
        v144 = 5;
        if ( *((_QWORD *)&v417 + 1) >= 6u )
          goto LABEL_193;
      }
      v416 = (void *)qvector_reserve(&v416, v146, v145, 1);
      v146 = v416;
LABEL_193:
      *(_QWORD *)&v417 = v145;
      v146[v144] = 0;
      v147 = (char *)v416 + v143;
      *(_DWORD *)v147 = 36243713;
      v147[4] = 9;
      v148 = (char *)v418;
      if ( v418 )
      {
        v149 = v419;
        if ( (_QWORD)v419 )
        {
          v150 = 0;
          do
          {
            v151 = &v148[24 * v150];
            v152 = *(void **)v151;
            if ( *(_QWORD *)v151 )
            {
              *((_QWORD *)v151 + 1) = 0;
              qfree(v152);
              v148 = (char *)v418;
            }
            ++v150;
          }
          while ( v149 != v150 );
        }
        *(_QWORD *)&v419 = 0;
        qfree(v148);
      }
LABEL_200:
      v153 = v417;
      if ( !a3 && (unsigned __int64)v417 > 1 )
      {
        tag_remove();
        v153 = v417;
      }
      v154 = v416;
      v155 = v153 - 1;
      if ( !v153 )
        v155 = 0;
      if ( a2 )
      {
        v154 = *(void **)a2;
        v156 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)a2 = v416;
        v157 = _mm_loadh_ps((const double *)&v417 + 1);
        v416 = v154;
        *((_QWORD *)&v417 + 1) = v156;
        *(__m128 *)(a2 + 8) = v157;
      }
      if ( v154 )
      {
        *(_QWORD *)&v417 = 0;
        qfree(v154);
      }
      return v155;
    case 0xALL:
      v159 = *((unsigned int *)a1 + 2);
      v421 = 0;
      ptr = nullptr;
      print_strlit_type(&ptr, v159, 0, 16);
      sub_3573A0((char **)&v416);
      v112 = ptr;
      if ( ptr )
        goto LABEL_135;
      goto LABEL_136;
    case 0xCLL:
      v109 = (unsigned int)*((__int16 *)a1 + 4);
      ptr = nullptr;
      v421 = 0;
      custom_data_type = get_custom_data_type(v109);
      if ( custom_data_type )
        sub_567F30((char **)&ptr, *(const void **)(custom_data_type + 24));
      sub_3573A0((char **)&v416);
      custom_data_format = get_custom_data_format((unsigned int)*((__int16 *)a1 + 5));
      if ( custom_data_format )
        sub_567F30((char **)&ptr, *(const void **)(custom_data_format + 24));
      sub_357520((__int64 *)&v416);
      v112 = ptr;
      if ( ptr )
      {
LABEL_135:
        *(_QWORD *)&v421 = 0;
        qfree(v112);
      }
LABEL_136:
      v3 = *a1;
      goto LABEL_139;
    default:
      if ( !under_debugger )
        interr(2924);
      BUG();
  }
}

