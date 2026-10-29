__int64 __fastcall sub_86F8A0(
        unsigned __int64 a1,
        unsigned __int8 *a2,
        unsigned __int16 a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r15d
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v11; // rax
  __m128i si128; // xmm0
  int v13; // eax
  unsigned int v14; // eax
  int v15; // r15d
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // rax
  int v18; // edi
  unsigned __int8 **v19; // rdx
  int v20; // r15d
  unsigned __int8 *v22; // rdi
  __int16 v23; // ax
  int v24; // eax
  unsigned __int8 *v25; // rax
  unsigned __int8 *v26; // rax
  unsigned __int8 *v27; // rax
  unsigned int v28; // eax
  char *v29; // r10
  unsigned __int8 *v30; // rdi
  unsigned int v31; // eax
  __int16 v32; // ax
  unsigned __int8 *v33; // rdi
  unsigned int v34; // eax
  __int16 v35; // ax
  unsigned __int8 *v36; // rax
  bool v37; // zf
  unsigned __int8 *v38; // rdx
  unsigned int v39; // eax
  unsigned __int64 v40; // rdx
  __int16 v41; // ax
  unsigned __int8 *v42; // rax
  unsigned __int8 *v43; // r14
  unsigned __int8 *v44; // rax
  unsigned __int8 *v45; // rax
  unsigned __int8 *v46; // r14
  unsigned int v47; // eax
  int v48; // eax
  __int16 v49; // ax
  __int64 v50; // rax
  unsigned __int8 *v51; // rax
  unsigned int v52; // eax
  __int16 v53; // ax
  unsigned int v54; // eax
  __int16 v55; // ax
  unsigned int v56; // eax
  __int16 v57; // ax
  unsigned __int8 *v58; // rax
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  __int16 v61; // ax
  __int64 v62; // rax
  unsigned __int8 *v63; // r14
  unsigned __int8 *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  unsigned int v68; // edx
  __int16 v69; // ax
  __int64 v70; // rax
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rdx
  int v74; // ecx
  unsigned __int8 *v75; // rax
  __int64 v76; // rdx
  int v77; // eax
  int v78; // eax
  unsigned __int8 *v79; // rsi
  int v80; // edx
  __int64 v81; // rdx
  int v82; // ecx
  unsigned __int8 *v83; // rax
  unsigned __int8 *v84; // rdx
  unsigned __int8 *v85; // r8
  unsigned int v86; // eax
  unsigned int v87; // edx
  unsigned __int8 *v88; // rsi
  __int64 v89; // rcx
  int v90; // r9d
  __int16 v91; // ax
  unsigned int v92; // edx
  unsigned int v93; // eax
  __int64 v94; // rcx
  int v95; // r9d
  __int16 v96; // ax
  unsigned __int8 *v97; // rax
  unsigned int v98; // edx
  unsigned int v99; // r15d
  int v100; // edx
  char v101; // al
  unsigned __int64 v102; // rax
  size_t v103; // rbx
  unsigned __int8 *v104; // rdi
  unsigned __int16 v105; // ax
  unsigned __int8 *v106; // rcx
  unsigned __int8 *v107; // rdx
  unsigned __int8 *v108; // rsi
  unsigned __int8 v109; // al
  char *v110; // r8
  int v111; // edx
  unsigned __int8 *v112; // rax
  int v113; // edx
  __int64 v114; // rdx
  __int16 v115; // cx
  int v116; // ecx
  __int64 v117; // rdx
  unsigned __int16 v118; // ax
  __int16 v119; // dx
  unsigned int v120; // edx
  int v121; // r9d
  unsigned int v122; // eax
  int v123; // r8d
  __int16 v124; // ax
  __int16 v125; // ax
  unsigned int v126; // eax
  int v127; // r9d
  unsigned int v128; // edx
  int v129; // r8d
  __int16 v130; // ax
  unsigned __int64 v131; // rax
  unsigned int v132; // edx
  int v133; // esi
  unsigned __int8 *v134; // rax
  unsigned __int8 *v135; // rdi
  int v136; // eax
  int v137; // ecx
  _WORD *v138; // rdx
  __int64 v139; // rax
  unsigned __int8 *v140; // rsi
  unsigned __int64 v141; // rdi
  __int16 v142; // dx
  unsigned __int64 v143; // rax
  __int16 v144; // ax
  int v145; // eax
  __int64 v146; // rcx
  __int16 v147; // ax
  int v148; // eax
  __int64 v149; // rcx
  __int16 v150; // ax
  __int64 v151; // rax
  unsigned __int8 v152; // al
  unsigned int v153; // eax
  unsigned __int8 *v154; // rax
  unsigned int v155; // r15d
  unsigned int v156; // r13d
  int j; // eax
  __int16 v158; // ax
  unsigned __int8 *v159; // rsi
  unsigned __int8 v160; // al
  __int64 v161; // rax
  unsigned int v162; // ecx
  int v163; // r8d
  int v164; // edx
  __int16 v165; // ax
  __int16 v166; // ax
  unsigned __int8 v167; // dl
  unsigned __int8 *v168; // rax
  unsigned __int8 *v169; // r14
  unsigned __int8 *v170; // r14
  __int64 v171; // r14
  __int64 v172; // rax
  __int64 v173; // rdx
  unsigned int v174; // ecx
  __int64 v175; // r14
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rdx
  unsigned __int8 *v179; // r14
  int v180; // esi
  __int16 v181; // ax
  unsigned __int64 v182; // rax
  unsigned __int8 *v183; // rdi
  unsigned __int8 ii; // dl
  unsigned __int8 *v185; // r14
  __int64 v186; // r14
  __int64 v187; // rax
  __int64 v188; // rdx
  unsigned __int8 *v189; // r14
  __int64 v190; // r14
  __int64 v191; // rax
  __int64 v192; // rdx
  unsigned __int8 *v193; // r14
  __int64 v194; // r14
  __int64 v195; // rax
  __int64 v196; // rdx
  __int64 v197; // rax
  unsigned __int8 *v198; // rax
  Elf64_Rela *v199; // rdx
  unsigned __int8 *v200; // rdi
  unsigned __int8 *v201; // rax
  unsigned __int8 *v202; // rax
  _QWORD *v203; // r8
  __int16 v204; // ax
  __int16 v205; // ax
  __int16 v206; // ax
  unsigned __int8 *v207; // rax
  __int16 v208; // cx
  __int64 v209; // rsi
  unsigned __int64 v210; // rdx
  unsigned __int8 *v211; // rdx
  __int16 v212; // ax
  __int16 v213; // ax
  __int16 v214; // ax
  unsigned __int8 *v215; // rdx
  __int16 v216; // ax
  unsigned __int64 v217; // rax
  unsigned __int8 *v218; // rdx
  unsigned __int8 v219; // al
  unsigned __int8 *v220; // rdx
  __int64 v221; // rsi
  __int16 v222; // ax
  __int16 v223; // ax
  __int16 v224; // ax
  unsigned __int64 v225; // rdx
  __int64 v226; // rsi
  __int64 v227; // rcx
  __int16 v228; // ax
  __int16 v229; // ax
  int v230; // edx
  unsigned __int16 v231; // ax
  unsigned __int8 *v232; // rdi
  __int16 v233; // ax
  __int16 v234; // ax
  unsigned __int8 *v235; // rdx
  unsigned __int8 *v236; // rcx
  __int64 v237; // rdx
  __int16 v238; // ax
  __int64 v239; // rsi
  __int64 v240; // rcx
  unsigned __int8 *v241; // rax
  __int16 v242; // cx
  __int64 v243; // rcx
  bool v244; // cf
  unsigned __int8 *v245; // rdx
  __int16 v246; // ax
  unsigned __int64 v247; // rdx
  __int64 v248; // rsi
  int v249; // edx
  unsigned __int8 v250; // al
  int v251; // edx
  unsigned __int8 v252; // al
  int v253; // ecx
  __int16 v254; // ax
  int v255; // ecx
  __int16 v256; // ax
  int v257; // ecx
  unsigned __int8 *v258; // rdx
  unsigned __int8 v259; // al
  __int16 v260; // ax
  unsigned int v261; // r14d
  __int64 v262; // rcx
  unsigned __int8 *v263; // rdx
  __int16 v264; // ax
  unsigned int v265; // eax
  unsigned __int64 v266; // rdx
  __int64 v267; // rsi
  int v268; // eax
  int v269; // ecx
  __int16 v270; // ax
  int v271; // ecx
  __int16 v272; // ax
  int v273; // ecx
  __int16 v274; // ax
  int v275; // ecx
  __int16 v276; // ax
  int v277; // ecx
  __int16 v278; // ax
  int v279; // ecx
  __int16 v280; // ax
  __int64 v281; // rdx
  unsigned __int8 v282; // al
  __int64 v283; // rdx
  unsigned __int8 v284; // al
  int v285; // ecx
  int v286; // edx
  unsigned __int64 v287; // rax
  char v288; // al
  unsigned __int8 *v289; // rax
  __int64 m; // rax
  int v291; // ecx
  __int64 v292; // rdi
  _WORD *v293; // rsi
  unsigned __int64 v294; // rdx
  unsigned __int64 v295; // rcx
  int v296; // edi
  int v297; // r9d
  int v298; // ecx
  _WORD *v299; // rdx
  int v300; // edi
  unsigned __int8 *v301; // rax
  __int64 v302; // rax
  unsigned __int8 *v303; // rax
  unsigned __int8 *v304; // rax
  __int64 v305; // r14
  _BYTE *v306; // rdx
  int v307; // eax
  __int64 v308; // r8
  unsigned __int64 v309; // rdx
  void *v310; // rax
  char *v311; // rax
  char *v312; // r10
  int v313; // r10d
  int v314; // eax
  __int16 v315; // ax
  int v316; // r10d
  int v317; // edx
  __int16 v318; // ax
  unsigned int v319; // r9d
  unsigned int v320; // edx
  __int16 v321; // ax
  unsigned int v322; // r9d
  unsigned int v323; // eax
  __int16 v324; // ax
  __int16 v325; // cx
  __int64 v326; // r8
  int v327; // ecx
  _WORD *v328; // rdx
  __int16 v329; // cx
  int v330; // eax
  unsigned __int8 *v331; // rcx
  unsigned __int8 *v332; // rax
  __int64 v333; // rax
  int v334; // eax
  __int16 v335; // ax
  unsigned __int8 *v336; // rcx
  __int64 v337; // rax
  unsigned __int8 v338; // al
  __int16 v339; // dx
  __int64 v340; // rax
  unsigned __int8 v341; // al
  unsigned __int8 v342; // al
  __int64 v343; // r8
  __int16 v344; // ax
  unsigned int v345; // r8d
  unsigned int v346; // ecx
  int v347; // edx
  __int16 v348; // ax
  unsigned __int8 *v349; // r14
  int v350; // eax
  __int64 v351; // rcx
  unsigned __int8 *v352; // rax
  unsigned int v353; // ecx
  unsigned __int8 *v354; // rdx
  unsigned __int8 *v355; // r13
  int v356; // r14d
  unsigned int v357; // ebp
  unsigned int v358; // eax
  __int64 v359; // r15
  unsigned int v360; // ebx
  int k; // eax
  _BOOL4 v362; // ecx
  unsigned int v363; // esi
  unsigned int v364; // r15d
  __int16 v365; // ax
  int v366; // eax
  size_t v367; // rdx
  __int64 v368; // rax
  int v369; // edx
  unsigned __int8 *v370; // rax
  __int64 v371; // rdx
  unsigned __int8 *v372; // rax
  int v373; // eax
  int v374; // edx
  unsigned __int8 *v375; // rax
  int v376; // ecx
  unsigned __int8 *v377; // rax
  signed __int64 v378; // rdx
  unsigned __int64 v379; // rax
  __int16 v380; // ax
  signed __int64 v381; // r8
  unsigned int v382; // eax
  unsigned __int64 v383; // rdx
  __int16 v384; // dx
  __int64 v385; // rdx
  unsigned __int8 *v386; // rax
  unsigned __int8 *v387; // rdi
  unsigned __int8 *v388; // rax
  unsigned __int8 *v389; // rax
  int v390; // edx
  int v391; // eax
  int v392; // ebp
  unsigned __int64 i; // rdx
  __int16 v394; // ax
  __int16 v395; // ax
  __int16 v396; // ax
  unsigned int v397; // r10d
  unsigned int v398; // r14d
  unsigned __int64 v399; // r15
  __int64 v400; // rcx
  size_t *v401; // r8
  unsigned int v402; // ebp
  int v403; // r13d
  unsigned __int8 *v405; // [rsp+8h] [rbp-B0h]
  __int64 v406; // [rsp+8h] [rbp-B0h]
  unsigned __int8 *v407; // [rsp+10h] [rbp-A8h]
  char *v408; // [rsp+10h] [rbp-A8h]
  __int64 v409; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+18h] [rbp-A0h]
  unsigned __int8 *v411; // [rsp+20h] [rbp-98h]
  char *v412; // [rsp+20h] [rbp-98h]
  unsigned __int8 *v413; // [rsp+28h] [rbp-90h]
  char *v414; // [rsp+28h] [rbp-90h]
  __int64 v415; // [rsp+28h] [rbp-90h]
  _QWORD *v416; // [rsp+30h] [rbp-88h]
  int v417; // [rsp+38h] [rbp-80h]
  int v419; // [rsp+40h] [rbp-78h]
  __int64 v420; // [rsp+40h] [rbp-78h]
  size_t *v421; // [rsp+40h] [rbp-78h]
  __int64 v422; // [rsp+48h] [rbp-70h]
  int v423; // [rsp+48h] [rbp-70h]
  __int64 v424; // [rsp+58h] [rbp-60h]
  size_t v425; // [rsp+68h] [rbp-50h] BYREF
  size_t v426[9]; // [rsp+70h] [rbp-48h] BYREF

  v6 = 0;
  v8 = a5;
  v9 = *(_QWORD *)(a5 + 48);
  v426[1] = __readfsqword(0x28u);
  n = (size_t)(a4 - 80);
  v11 = *(_QWORD *)(a5 + 56);
  *(__m128i *)(v9 + 80) = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23843A0);
  *(_DWORD *)(v9 + 48) = 0;
  v405 = (unsigned __int8 *)(v9 + v11);
  *(_QWORD *)(v9 + 96) = 0;
  *(_QWORD *)(v9 + 112) = 0xFFFFFFFFLL;
  v417 = 0;
  v411 = nullptr;
  v416 = nullptr;
  v407 = nullptr;
  *(__m128i *)(v9 + 120) = si128;
  while ( 2 )
  {
    *(_DWORD *)(v9 + 52) = v6;
    *(_QWORD *)v9 = a2;
    *(_QWORD *)(v9 + 32) = a4;
    if ( v6 )
    {
      *(_QWORD *)(v9 + 120) = v9 - *(_QWORD *)(v8 + 48);
      HIWORD(v13) = HIWORD(v6);
      LOWORD(v13) = 0;
      if ( v13 == (_DWORD)&stru_40000 )
        *(_DWORD *)(v9 + 112) = (unsigned __int16)v6;
    }
    v14 = *(_DWORD *)(a6 + 36);
    *(_DWORD *)(a6 + 36) = v14 + 1;
    if ( v14 >= *(_DWORD *)(a6 + 28) )
      return (unsigned int)-47;
    if ( *(_DWORD *)(v9 + 48) >= *(_DWORD *)(a6 + 32) )
      return (unsigned int)-53;
LABEL_7:
    a2 = *(unsigned __int8 **)v9;
    v15 = **(unsigned __int8 **)v9;
LABEL_8:
    while ( 2 )
    {
      *(_BYTE *)(v9 + 73) = v15;
      switch ( (char)v15 )
      {
        case 0:
LABEL_23:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( v22 != *(unsigned __int8 **)(v9 + 88) )
            goto LABEL_28;
          v24 = *(_DWORD *)(a6 + 220);
          if ( (v24 & 4) != 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          if ( (v24 & 8) != 0 && v22 == (unsigned __int8 *)(*(_QWORD *)(a6 + 128) + *(_QWORD *)(a6 + 88)) )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
LABEL_28:
          if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144)
            && ((*(_DWORD *)(a6 + 224) | *(_DWORD *)(a6 + 220)) & 0x20000000) != 0 )
          {
            if ( !(_BYTE)v15 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return 0;
          }
          else
          {
            v385 = *(_QWORD *)(a6 + 128);
            v386 = *(unsigned __int8 **)(v9 + 80);
            v387 = *(unsigned __int8 **)(v9 + 88);
            if ( (unsigned __int64)v387 >= v385 + *(_QWORD *)(a6 + 88) && v386 >= v387 || *(_DWORD *)(a6 + 56) )
            {
              *(_QWORD *)(a6 + 160) = v386;
              *(_QWORD *)(a6 + 96) = *(_QWORD *)(v9 + 128);
              *(_QWORD *)(a6 + 184) = *(_QWORD *)(v9 + 96);
              v388 = *(unsigned __int8 **)(v9 + 80);
              if ( *(_QWORD *)(a6 + 176) < (unsigned __int64)v388 )
                *(_QWORD *)(a6 + 176) = v388;
              v389 = (unsigned __int8 *)(*(_QWORD *)(v9 + 88) - v385);
              v390 = *(unsigned __int16 *)(v8 + 106);
              *(_QWORD *)(v8 + 120) = v389;
              *(_QWORD *)(v8 + 128) = *(_QWORD *)(v9 + 80) - *(_QWORD *)(a6 + 128);
              v391 = a3 + 1;
              if ( v391 > v390 )
                v391 = v390;
              v392 = 2 * v391;
              memcpy((void *)(v8 + 136), (const void *)(v9 + 136), 8LL * (unsigned int)(2 * v391 - 2));
              for ( i = (unsigned int)(v392 - 1); i >= *(_QWORD *)(v9 + 128) + 2LL; i = (unsigned int)(i - 1) )
                *(_QWORD *)(v8 + 8 * i + 120) = -1;
              return 1;
            }
            else
            {
              return (unsigned int)-75;
            }
          }
        case 1:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( v22 == *(unsigned __int8 **)(a6 + 128) )
            goto LABEL_547;
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        case 2:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( v22 == (unsigned __int8 *)(*(_QWORD *)(a6 + 128) + *(_QWORD *)(a6 + 88)) )
            goto LABEL_547;
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        case 3:
          *(_QWORD *)(v9 + 88) = *(_QWORD *)(v9 + 80);
          goto LABEL_547;
        case 4:
        case 5:
LABEL_331:
          v112 = *(unsigned __int8 **)(v9 + 80);
          v113 = 0;
          if ( v112 != *(unsigned __int8 **)(a6 + 136) )
          {
            v114 = *(v112 - 1);
            if ( (unsigned __int64)(v112 - 1) < *(_QWORD *)(a6 + 168) )
            {
              *(_QWORD *)(a6 + 168) = v112 - 1;
              v112 = *(unsigned __int8 **)(v9 + 80);
            }
            v113 = (*(_BYTE *)(*(_QWORD *)(a6 + 80) + v114) & 0x10) != 0;
          }
          if ( (unsigned __int64)v112 < *(_QWORD *)(a6 + 144) )
          {
            v336 = v112 + 1;
            v337 = *v112;
            if ( *(_QWORD *)(a6 + 176) < (unsigned __int64)v336 )
              *(_QWORD *)(a6 + 176) = v336;
            v116 = (*(_BYTE *)(*(_QWORD *)(a6 + 80) + v337) & 0x10) != 0;
          }
          else
          {
            v115 = *(_WORD *)(a6 + 104);
            if ( v115 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v112 || *(_DWORD *)(a6 + 52)) )
            {
              *(_DWORD *)(a6 + 40) = 1;
              if ( v115 != 1 )
                return (unsigned int)-2;
            }
            v116 = 0;
          }
          v83 = *(unsigned __int8 **)v9;
          a2 = (unsigned __int8 *)(*(_QWORD *)v9 + 1LL);
          *(_QWORD *)v9 = a2;
          if ( *v83 == 5 || *(_BYTE *)(v9 + 73) == 0xAC )
          {
            if ( v116 == v113 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
          }
          else if ( v116 != v113 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_278;
        case 6:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v233 = *(_WORD *)(a6 + 104);
            if ( !v233 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v233 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 8) != 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 7:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v229 = *(_WORD *)(a6 + 104);
            if ( !v229 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v229 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 8) == 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 8:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v205 = *(_WORD *)(a6 + 104);
            if ( !v205 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v205 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 1) != 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 9:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v223 = *(_WORD *)(a6 + 104);
            if ( !v223 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v223 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 1) == 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 10:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v222 = *(_WORD *)(a6 + 104);
            if ( !v222 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v222 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 0x10) != 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 11:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v224 = *(_WORD *)(a6 + 104);
            if ( !v224 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v224 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 0x10) == 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 12:
          v22 = *(unsigned __int8 **)(v9 + 80);
          v209 = *(unsigned int *)(a6 + 236);
          v210 = *(_QWORD *)(a6 + 144);
          v207 = v22;
          if ( (_DWORD)v209 )
          {
            if ( (unsigned __int64)v22 >= v210 )
            {
              v208 = *(_WORD *)(a6 + 104);
              if ( !v208 )
                goto LABEL_1214;
              if ( v22 != (unsigned __int8 *)(v210 - 1) )
                goto LABEL_571;
              goto LABEL_580;
            }
            v373 = sub_876D00(v22, v209, v210, a6 + 240, 0);
            v22 = *(unsigned __int8 **)(v9 + 80);
            v374 = v373;
            v207 = v22;
            if ( v374 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            v210 = *(_QWORD *)(a6 + 144);
          }
          else
          {
            v343 = *(unsigned int *)(a6 + 240);
            if ( v210 - v343 >= (unsigned __int64)v22 && *v22 == *(_BYTE *)(a6 + 244) )
            {
              if ( (_DWORD)v343 == 1 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              if ( v22[1] == *(_BYTE *)(a6 + 245) )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
            }
          }
          v208 = *(_WORD *)(a6 + 104);
          if ( !v208 )
          {
            if ( (unsigned __int64)v207 >= v210 )
            {
LABEL_1214:
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            goto LABEL_582;
          }
          if ( v207 != (unsigned __int8 *)(v210 - 1) )
          {
LABEL_581:
            if ( (unsigned __int64)v207 >= v210 )
              goto LABEL_571;
            goto LABEL_582;
          }
LABEL_580:
          if ( *(_QWORD *)(a6 + 236) != 0x200000000LL || *v207 != *(_BYTE *)(a6 + 244) )
            goto LABEL_581;
          *(_DWORD *)(a6 + 40) = 1;
          if ( v208 != 1 )
            return (unsigned int)-2;
          v207 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v207 >= v210 )
          {
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v207 && !*(_DWORD *)(a6 + 52) )
              goto LABEL_1256;
            goto LABEL_575;
          }
LABEL_582:
          v211 = *(unsigned __int8 **)v9;
LABEL_583:
          a2 = v211 + 1;
          *(_QWORD *)(v9 + 80) = v207 + 1;
          *(_QWORD *)v9 = v211 + 1;
          v15 = v211[1];
          continue;
        case 13:
          v22 = *(unsigned __int8 **)(v9 + 80);
          v207 = v22;
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v208 = *(_WORD *)(a6 + 104);
            if ( !v208 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
LABEL_571:
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v207 && !*(_DWORD *)(a6 + 52) )
            {
LABEL_1256:
              v22 = v207;
              v20 = 0;
              v25 = *(unsigned __int8 **)(a6 + 176);
              goto LABEL_32;
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v208 != 1 )
              return (unsigned int)-2;
            v207 = *(unsigned __int8 **)(v9 + 80);
LABEL_575:
            v22 = v207;
            v20 = 0;
            v25 = *(unsigned __int8 **)(a6 + 176);
            goto LABEL_32;
          }
          v211 = a2;
          goto LABEL_583;
        case 14:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v206 = *(_WORD *)(a6 + 104);
            if ( !v206 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v206 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          *(_QWORD *)v9 = a2 + 1;
          v15 = *++a2;
          continue;
        case 15:
        case 16:
        case 22:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 112:
        case 113:
          return (unsigned int)-44;
        case 17:
          v215 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v215 >= *(_QWORD *)(a6 + 144) )
          {
            v216 = *(_WORD *)(a6 + 104);
            if ( !v216 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v22 = *(unsigned __int8 **)(v9 + 80);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v215 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v22 = *(unsigned __int8 **)(v9 + 80);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v216 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          v22 = v215 + 1;
          *(_QWORD *)(v9 + 80) = v215 + 1;
          v341 = *v215;
          if ( *v215 != 13 )
          {
            if ( v341 > 0xDu )
            {
              if ( v341 != 0x85 )
              {
LABEL_1302:
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
            }
            else
            {
              if ( v341 == 10 )
                goto LABEL_516;
              if ( (unsigned __int8)(v341 - 11) > 1u )
                goto LABEL_1302;
            }
            if ( *(_WORD *)(a6 + 106) == 2 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            goto LABEL_516;
          }
          if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
          {
            if ( v215[1] == 10 )
              *(_QWORD *)(v9 + 80) = v215 + 2;
            goto LABEL_516;
          }
          v23 = *(_WORD *)(a6 + 104);
          if ( !v23 || *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 && !*(_DWORD *)(a6 + 52) )
            goto LABEL_516;
          goto LABEL_21;
        case 18:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v214 = *(_WORD *)(a6 + 104);
            if ( !v214 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v214 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( (*v22 & 0x7F) == 0x20 || *v22 == 9 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 19:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v213 = *(_WORD *)(a6 + 104);
            if ( !v213 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v213 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( (*v22 & 0x7F) != 0x20 && *v22 != 9 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 20:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v212 = *(_WORD *)(a6 + 104);
            if ( !v212 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v212 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          v342 = *v22;
          if ( *v22 > 0xDu )
          {
            if ( v342 == 0x85 )
            {
LABEL_1164:
              v25 = *(unsigned __int8 **)(a6 + 176);
              ++v22;
              v20 = 0;
              goto LABEL_32;
            }
          }
          else if ( v342 > 9u )
          {
            goto LABEL_1164;
          }
          goto LABEL_547;
        case 21:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v204 = *(_WORD *)(a6 + 104);
            if ( !v204 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v204 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
          v338 = *v22;
          if ( *v22 > 0xDu )
          {
            if ( v338 != 0x85 )
            {
LABEL_1125:
              v25 = *(unsigned __int8 **)(a6 + 176);
              ++v22;
              v20 = 0;
              goto LABEL_32;
            }
          }
          else if ( v338 <= 9u )
          {
            goto LABEL_1125;
          }
          goto LABEL_547;
        case 23:
          goto LABEL_204;
        case 24:
          goto LABEL_19;
        case 25:
          if ( (*(_BYTE *)(a6 + 220) & 2) != 0 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          if ( (*(_BYTE *)(a6 + 224) & 0x10) == 0 )
          {
LABEL_204:
            v22 = *(unsigned __int8 **)(v9 + 80);
            v58 = v22;
            if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 152) )
            {
              v59 = *(unsigned int *)(a6 + 236);
              v60 = *(_QWORD *)(a6 + 144);
              if ( (_DWORD)v59 )
              {
                if ( (unsigned __int64)v22 >= v60 )
                  goto LABEL_207;
                if ( !(unsigned int)sub_876D00(v22, v59, v60, a6 + 240, 0) )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
LABEL_207:
                  v61 = *(_WORD *)(a6 + 104);
                  if ( !v61 )
                  {
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    v20 = 0;
                    goto LABEL_32;
                  }
                  if ( (unsigned __int64)(v22 + 1) < *(_QWORD *)(a6 + 144) )
                  {
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    v20 = 0;
                    goto LABEL_32;
                  }
                  if ( *(_DWORD *)(a6 + 236) )
                  {
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    v20 = 0;
                    goto LABEL_32;
                  }
                  if ( *(_DWORD *)(a6 + 240) != 2 )
                  {
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    v20 = 0;
                    goto LABEL_32;
                  }
                  if ( *v22 != *(_BYTE *)(a6 + 244) )
                  {
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    v20 = 0;
                    goto LABEL_32;
                  }
                  *(_DWORD *)(a6 + 40) = 1;
                  if ( v61 == 1 )
                  {
                    v22 = *(unsigned __int8 **)(v9 + 80);
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    v20 = 0;
                    goto LABEL_32;
                  }
                  return (unsigned int)-2;
                }
                v58 = *(unsigned __int8 **)(v9 + 80);
              }
              else if ( v60 - *(unsigned int *)(a6 + 240) < (unsigned __int64)v22
                     || *v22 != *(_BYTE *)(a6 + 244)
                     || *(_DWORD *)(a6 + 240) != 1 && v22[1] != *(_BYTE *)(a6 + 245) )
              {
                goto LABEL_207;
              }
              v22 = v58;
              if ( v58 != (unsigned __int8 *)(*(_QWORD *)(a6 + 152) - *(unsigned int *)(a6 + 240)) )
                goto LABEL_207;
            }
            v23 = *(_WORD *)(a6 + 104);
            if ( v23 )
            {
LABEL_21:
              *(_DWORD *)(a6 + 40) = 1;
              if ( v23 != 1 )
                return (unsigned int)-2;
            }
LABEL_276:
            v83 = *(unsigned __int8 **)v9;
            goto LABEL_277;
          }
LABEL_19:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 152) )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          v23 = *(_WORD *)(a6 + 104);
          if ( v23 )
            goto LABEL_21;
LABEL_516:
          v83 = a2;
LABEL_277:
          a2 = v83 + 1;
          *(_QWORD *)v9 = v83 + 1;
LABEL_278:
          v15 = v83[1];
          continue;
        case 26:
          v22 = *(unsigned __int8 **)(v9 + 80);
          v225 = *(_QWORD *)(a6 + 144);
          if ( (unsigned __int64)v22 >= v225 )
          {
            if ( (*(_BYTE *)(a6 + 220) & 2) != 0 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            v339 = *(_WORD *)(a6 + 104);
            if ( v339 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
            {
              *(_DWORD *)(a6 + 40) = 1;
              if ( v339 != 1 )
                return (unsigned int)-2;
LABEL_621:
              a2 = *(unsigned __int8 **)v9;
            }
          }
          else
          {
            v226 = *(unsigned int *)(a6 + 236);
            if ( (_DWORD)v226 )
            {
              if ( !(unsigned int)sub_876D00(v22, v226, v225, a6 + 240, 0) )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
LABEL_647:
                v228 = *(_WORD *)(a6 + 104);
                if ( !v228 )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                if ( (unsigned __int64)(v22 + 1) < *(_QWORD *)(a6 + 144) )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                if ( *(_DWORD *)(a6 + 236) )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                if ( *(_DWORD *)(a6 + 240) != 2 )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                if ( *v22 != *(_BYTE *)(a6 + 244) )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                *(_DWORD *)(a6 + 40) = 1;
                if ( v228 == 1 )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                return (unsigned int)-2;
              }
              goto LABEL_621;
            }
            v227 = *(unsigned int *)(a6 + 240);
            if ( v225 - v227 < (unsigned __int64)v22
              || *v22 != *(_BYTE *)(a6 + 244)
              || (_DWORD)v227 != 1 && v22[1] != *(_BYTE *)(a6 + 245) )
            {
              goto LABEL_647;
            }
          }
LABEL_547:
          *(_QWORD *)v9 = a2 + 1;
          v15 = *++a2;
          continue;
        case 27:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( v22 != *(unsigned __int8 **)(a6 + 128) )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          if ( (*(_BYTE *)(a6 + 220) & 1) != 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 28:
          v22 = *(unsigned __int8 **)(v9 + 80);
          v220 = *(unsigned __int8 **)(a6 + 128);
          if ( (*(_BYTE *)(a6 + 220) & 1) != 0 )
          {
            if ( v22 == v220 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
          }
          else if ( v22 == v220 )
          {
            goto LABEL_547;
          }
          if ( *(unsigned __int8 **)(a6 + 144) == v22 && (*(_BYTE *)(a6 + 226) & 0x20) == 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          v221 = *(unsigned int *)(a6 + 236);
          if ( (_DWORD)v221 )
          {
            if ( v220 >= v22 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            v20 = sub_876DB0(*(_QWORD *)(v9 + 80), v221, v220, a6 + 240, 0);
            if ( !v20 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              goto LABEL_32;
            }
            goto LABEL_621;
          }
          v351 = *(unsigned int *)(a6 + 240);
          if ( v22 < &v220[v351] )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          if ( v22[-v351] != *(_BYTE *)(a6 + 244) )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          if ( (_DWORD)v351 != 1 && v22[-v351 + 1] != *(_BYTE *)(a6 + 245) )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_547;
        case 29:
          v218 = *(unsigned __int8 **)(v9 + 80);
          if ( (__int64)(*(_QWORD *)(a6 + 144) - (_QWORD)v218) <= 0 )
          {
            v344 = *(_WORD *)(a6 + 104);
            if ( !v344 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v22 = *(unsigned __int8 **)(v9 + 80);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v218 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v22 = *(unsigned __int8 **)(v9 + 80);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v344 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          v22 = v218 + 1;
          v219 = a2[1];
          *(_QWORD *)(v9 + 80) = v218 + 1;
          if ( v219 != *v218 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_614;
        case 30:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v234 = *(_WORD *)(a6 + 104);
            if ( !v234 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v234 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          if ( *(_BYTE *)(*(_QWORD *)(a6 + 64) + a2[1]) != *(_BYTE *)(*(_QWORD *)(a6 + 64) + *v22) )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          *(_QWORD *)(v9 + 80) = v22 + 1;
LABEL_614:
          *(_QWORD *)v9 = a2 + 2;
          v15 = a2[2];
          a2 += 2;
          continue;
        case 31:
        case 32:
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v166 = *(_WORD *)(a6 + 104);
            if ( !v166 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v166 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          v340 = a2[1];
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( (_BYTE)v340 == *v22 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          if ( (_BYTE)v15 == 32 && *v22 == *(_BYTE *)(*(_QWORD *)(a6 + 72) + v340) )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            ++v22;
            v20 = 0;
            goto LABEL_32;
          }
          goto LABEL_614;
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
          v85 = a2 + 1;
          *(_QWORD *)v9 = a2 + 1;
          v92 = *a2 - ((unsigned __int8)v15 < 0x2Eu ? 33 : 46);
          v93 = dword_239F320[v92];
          v417 = dword_239F2A0[v92];
          *(_QWORD *)(v9 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v93), _mm_cvtsi32_si128(dword_239F2E0[v92])).m128i_u64[0];
          goto LABEL_304;
        case 39:
        case 52:
          *(_DWORD *)(v9 + 56) = 0;
          v119 = *(_WORD *)(a2 + 1);
          v88 = a2 + 4;
          v85 = a2 + 3;
          *(_QWORD *)v9 = a2 + 4;
          v120 = (unsigned __int16)__ROL2__(v119, 8);
          *(_DWORD *)(v9 + 60) = (unsigned __int16)v120;
          v94 = a2[3];
          *(_DWORD *)(v9 + 64) = v94;
          if ( (unsigned __int8)v15 > 0x2Du )
          {
            v417 = 1;
            v121 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v94);
            *(_DWORD *)(v9 + 68) = v121;
            if ( !v120 )
              goto LABEL_391;
            goto LABEL_358;
          }
          v417 = 1;
          goto LABEL_1041;
        case 40:
        case 53:
          *(_DWORD *)(v9 + 56) = 0;
          v144 = *(_WORD *)(a2 + 1);
          v88 = a2 + 4;
          v85 = a2 + 3;
          *(_QWORD *)v9 = a2 + 4;
          v145 = (unsigned __int16)__ROL2__(v144, 8);
          *(_DWORD *)(v9 + 60) = (unsigned __int16)v145;
          v146 = a2[3];
          *(_DWORD *)(v9 + 64) = v146;
          if ( (unsigned __int8)v15 > 0x2Du )
          {
            v417 = v145;
            *(_DWORD *)(v9 + 68) = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v146);
            if ( !v145 )
              goto LABEL_391;
            goto LABEL_419;
          }
          v417 = v145;
          if ( !v145 )
            goto LABEL_391;
          goto LABEL_1297;
        case 41:
        case 54:
          v85 = a2 + 3;
          v93 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
          *(_QWORD *)(v9 + 56) = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned __int16)v93), 224).m128i_u64[0];
LABEL_304:
          v88 = v85 + 1;
          *(_QWORD *)v9 = v85 + 1;
          v94 = *v85;
          *(_DWORD *)(v9 + 64) = v94;
          if ( (unsigned __int8)v15 > 0x2Du )
          {
            v121 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v94);
            *(_DWORD *)(v9 + 68) = v121;
            if ( v93 )
              goto LABEL_1015;
            v120 = *(_DWORD *)(v9 + 60);
            if ( !v120 )
              goto LABEL_391;
            if ( !v417 )
              goto LABEL_419;
LABEL_358:
            v22 = *(unsigned __int8 **)(v9 + 80);
            v93 = 0;
            *(_QWORD *)(v9 + 8) = v22;
            goto LABEL_359;
          }
          if ( !v93 )
          {
            v322 = *(_DWORD *)(v9 + 60);
            if ( !v322 )
              goto LABEL_391;
            if ( !v417 )
            {
LABEL_1297:
              v417 = 0;
LABEL_1298:
              *(_BYTE *)(v9 + 72) = 27;
              a2 = *(unsigned __int8 **)v9;
              v29 = (char *)v9;
              v6 = 0;
              goto LABEL_320;
            }
LABEL_1042:
            v22 = *(unsigned __int8 **)(v9 + 80);
            v93 = 0;
            *(_QWORD *)(v9 + 8) = v22;
            goto LABEL_1043;
          }
LABEL_306:
          v22 = *(unsigned __int8 **)(v9 + 80);
          v95 = 1 - (_DWORD)v22;
          do
          {
            if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
            {
              v96 = *(_WORD *)(a6 + 104);
              if ( !v96 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
              {
                v20 = *(_DWORD *)(a6 + 52);
                if ( !v20 )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  goto LABEL_32;
                }
              }
              *(_DWORD *)(a6 + 40) = 1;
              if ( v96 == 1 )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              return (unsigned int)-2;
            }
            *(_QWORD *)(v9 + 80) = ++v22;
            if ( *(v22 - 1) != (_DWORD)v94 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
          }
          while ( v93 >= v95 + (int)v22 );
          v322 = *(_DWORD *)(v9 + 60);
          if ( v322 == v93 )
            goto LABEL_391;
          if ( !v417 )
            goto LABEL_1297;
          *(_QWORD *)(v9 + 8) = v22;
          if ( v93 >= v322 )
            goto LABEL_1074;
LABEL_1043:
          v323 = v93 - (_DWORD)v22;
          while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
          {
            if ( *v22 == (_DWORD)v94 )
            {
              *(_QWORD *)(v9 + 80) = ++v22;
              if ( v323 + (unsigned int)v22 < v322 )
                continue;
            }
            goto LABEL_1074;
          }
          v324 = *(_WORD *)(a6 + 104);
          if ( !v324 || *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 && !*(_DWORD *)(a6 + 52) )
          {
LABEL_1074:
            a2 = v88;
            goto LABEL_1052;
          }
          *(_DWORD *)(a6 + 40) = 1;
          if ( v324 != 1 )
            return (unsigned int)-2;
          a2 = *(unsigned __int8 **)v9;
LABEL_1052:
          if ( v417 != 2 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
LABEL_86:
            if ( *(_QWORD *)(v9 + 8) < (unsigned __int64)v22 )
            {
              *(_BYTE *)(v9 + 72) = 28;
              v29 = (char *)v9;
              v6 = 0;
              goto LABEL_320;
            }
          }
LABEL_118:
          v15 = *a2;
          continue;
        case 42:
        case 55:
          v143 = 0xFFFFFFFF00000000LL;
          goto LABEL_413;
        case 43:
        case 56:
          v88 = a2 + 2;
          v85 = a2 + 1;
          *(_QWORD *)v9 = a2 + 2;
          *(_QWORD *)(v9 + 56) = 0xFFFFFFFF00000001LL;
          v94 = a2[1];
          *(_DWORD *)(v9 + 64) = v94;
          if ( (unsigned __int8)v15 > 0x2Du )
          {
            v417 = 2;
            v93 = 1;
            v121 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v94);
            *(_DWORD *)(v9 + 68) = v121;
LABEL_1015:
            v22 = *(unsigned __int8 **)(v9 + 80);
            v316 = 1 - (_DWORD)v22;
            do
            {
              if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
              {
                v318 = *(_WORD *)(a6 + 104);
                if ( !v318 )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
                {
                  v20 = *(_DWORD *)(a6 + 52);
                  if ( !v20 )
                  {
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    goto LABEL_32;
                  }
                }
                *(_DWORD *)(a6 + 40) = 1;
                if ( v318 == 1 )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                return (unsigned int)-2;
              }
              v317 = *v22;
              if ( v317 != v121 && v317 != (_DWORD)v94 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              *(_QWORD *)(v9 + 80) = ++v22;
            }
            while ( v93 >= v316 + (int)v22 );
            v120 = *(_DWORD *)(v9 + 60);
            if ( v120 == v93 )
              goto LABEL_391;
            if ( v417 )
            {
              *(_QWORD *)(v9 + 8) = v22;
              if ( v93 >= v120 )
                goto LABEL_1057;
LABEL_359:
              v122 = v93 - (_DWORD)v22;
              while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
              {
                v123 = *v22;
                if ( v123 == (_DWORD)v94 || v121 == v123 )
                {
                  *(_QWORD *)(v9 + 80) = ++v22;
                  if ( v122 + (unsigned int)v22 < v120 )
                    continue;
                }
                goto LABEL_1057;
              }
              v124 = *(_WORD *)(a6 + 104);
              if ( !v124 || *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 && !*(_DWORD *)(a6 + 52) )
              {
LABEL_1057:
                a2 = v88;
                goto LABEL_369;
              }
              *(_DWORD *)(a6 + 40) = 1;
              if ( v124 == 1 )
              {
                a2 = *(unsigned __int8 **)v9;
LABEL_369:
                if ( v417 == 2 )
                  goto LABEL_118;
                v22 = *(unsigned __int8 **)(v9 + 80);
LABEL_171:
                if ( *(unsigned __int8 **)(v9 + 8) == v22 )
                  goto LABEL_118;
                *(_BYTE *)(v9 + 72) = 26;
                v29 = (char *)v9;
                v6 = 0;
                goto LABEL_320;
              }
              return (unsigned int)-2;
            }
LABEL_419:
            v29 = (char *)v9;
            v417 = 0;
            goto LABEL_420;
          }
          v417 = 2;
          v93 = 1;
          goto LABEL_306;
        case 44:
        case 57:
          v143 = 0x100000000LL;
LABEL_413:
          v88 = a2 + 2;
          *(_QWORD *)(v9 + 56) = v143;
          v85 = a2 + 1;
          *(_QWORD *)v9 = a2 + 2;
          v94 = a2[1];
          *(_DWORD *)(v9 + 64) = v94;
          if ( (unsigned __int8)v15 <= 0x2Du )
            goto LABEL_1040;
          v121 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v94);
          v120 = *(_DWORD *)(v9 + 60);
          *(_DWORD *)(v9 + 68) = v121;
          if ( !v120 )
            goto LABEL_390;
          goto LABEL_411;
        case 45:
        case 58:
          *(_DWORD *)(v9 + 56) = 0;
          v142 = *(_WORD *)(a2 + 1);
          v88 = a2 + 4;
          v85 = a2 + 3;
          *(_QWORD *)v9 = a2 + 4;
          v120 = (unsigned __int16)__ROL2__(v142, 8);
          *(_DWORD *)(v9 + 60) = (unsigned __int16)v120;
          v94 = a2[3];
          *(_DWORD *)(v9 + 64) = v94;
          if ( (unsigned __int8)v15 > 0x2Du )
          {
            v121 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v94);
            *(_DWORD *)(v9 + 68) = v121;
            if ( !v120 )
            {
LABEL_390:
              v417 = 2;
              goto LABEL_391;
            }
LABEL_411:
            v417 = 2;
            goto LABEL_358;
          }
LABEL_1040:
          v417 = 2;
LABEL_1041:
          v322 = *(_DWORD *)(v9 + 60);
          if ( !v322 )
            goto LABEL_391;
          goto LABEL_1042;
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
          v85 = a2 + 1;
          *(_QWORD *)v9 = a2 + 1;
          v86 = *a2 - ((unsigned __int8)v15 < 0x48u ? 59 : 72);
          v87 = dword_239F320[v86];
          v417 = dword_239F2A0[v86];
          *(_QWORD *)(v9 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v87), _mm_cvtsi32_si128(dword_239F2E0[v86])).m128i_u64[0];
          goto LABEL_292;
        case 65:
        case 78:
          *(_DWORD *)(v9 + 56) = 0;
          v150 = *(_WORD *)(a2 + 1);
          v88 = a2 + 4;
          v85 = a2 + 3;
          *(_QWORD *)v9 = a2 + 4;
          v126 = (unsigned __int16)__ROL2__(v150, 8);
          *(_DWORD *)(v9 + 60) = (unsigned __int16)v126;
          v89 = a2[3];
          *(_DWORD *)(v9 + 64) = v89;
          if ( (unsigned __int8)v15 > 0x47u )
          {
            v417 = 1;
            v127 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v89);
            *(_DWORD *)(v9 + 68) = v127;
            if ( !v126 )
              goto LABEL_391;
            goto LABEL_374;
          }
          v417 = 1;
          goto LABEL_1027;
        case 66:
        case 79:
          *(_DWORD *)(v9 + 56) = 0;
          v147 = *(_WORD *)(a2 + 1);
          v88 = a2 + 4;
          v85 = a2 + 3;
          *(_QWORD *)v9 = a2 + 4;
          v148 = (unsigned __int16)__ROL2__(v147, 8);
          *(_DWORD *)(v9 + 60) = (unsigned __int16)v148;
          v149 = a2[3];
          *(_DWORD *)(v9 + 64) = v149;
          if ( (unsigned __int8)v15 <= 0x47u )
          {
            v417 = v148;
            if ( v148 )
              goto LABEL_1376;
            goto LABEL_391;
          }
          v417 = v148;
          *(_DWORD *)(v9 + 68) = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v149);
          if ( !v148 )
            goto LABEL_391;
          goto LABEL_427;
        case 67:
        case 80:
          v85 = a2 + 3;
          v87 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
          *(_QWORD *)(v9 + 56) = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned __int16)v87), 224).m128i_u64[0];
LABEL_292:
          v88 = v85 + 1;
          *(_QWORD *)v9 = v85 + 1;
          v89 = *v85;
          *(_DWORD *)(v9 + 64) = v89;
          if ( (unsigned __int8)v15 > 0x47u )
          {
            v127 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v89);
            *(_DWORD *)(v9 + 68) = v127;
            if ( v87 )
              goto LABEL_1004;
            v126 = *(_DWORD *)(v9 + 60);
            if ( !v126 )
              goto LABEL_391;
            if ( !v417 )
              goto LABEL_427;
LABEL_374:
            v22 = *(unsigned __int8 **)(v9 + 80);
            v87 = 0;
            *(_QWORD *)(v9 + 8) = v22;
            goto LABEL_375;
          }
          if ( !v87 )
          {
            v319 = *(_DWORD *)(v9 + 60);
            if ( !v319 )
              goto LABEL_391;
            if ( !v417 )
              goto LABEL_1376;
            goto LABEL_1028;
          }
LABEL_294:
          v22 = *(unsigned __int8 **)(v9 + 80);
          v90 = 1 - (_DWORD)v22;
          do
          {
            if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
            {
              v91 = *(_WORD *)(a6 + 104);
              if ( !v91 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
              {
                v20 = *(_DWORD *)(a6 + 52);
                if ( !v20 )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  goto LABEL_32;
                }
              }
              *(_DWORD *)(a6 + 40) = 1;
              if ( v91 == 1 )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              return (unsigned int)-2;
            }
            *(_QWORD *)(v9 + 80) = ++v22;
            if ( *(v22 - 1) == (_DWORD)v89 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
          }
          while ( v87 >= v90 + (int)v22 );
          v319 = *(_DWORD *)(v9 + 60);
          if ( v319 != v87 )
          {
            if ( v417 )
            {
              *(_QWORD *)(v9 + 8) = v22;
              if ( v87 >= v319 )
                goto LABEL_1070;
LABEL_1029:
              v320 = v87 - (_DWORD)v22;
              while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
              {
                if ( *v22 != (_DWORD)v89 )
                {
                  *(_QWORD *)(v9 + 80) = ++v22;
                  if ( v320 + (unsigned int)v22 < v319 )
                    continue;
                }
                goto LABEL_1070;
              }
              v321 = *(_WORD *)(a6 + 104);
              if ( v321 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
              {
                *(_DWORD *)(a6 + 40) = 1;
                if ( v321 != 1 )
                  return (unsigned int)-2;
                a2 = *(unsigned __int8 **)v9;
              }
              else
              {
LABEL_1070:
                a2 = v88;
              }
              if ( v417 != 2 )
              {
                v30 = *(unsigned __int8 **)(v9 + 80);
LABEL_51:
                if ( *(unsigned __int8 **)(v9 + 8) != v30 )
                {
                  *(_BYTE *)(v9 + 72) = 32;
                  v29 = (char *)v9;
                  v6 = 0;
                  goto LABEL_320;
                }
              }
              goto LABEL_118;
            }
LABEL_1376:
            v417 = 0;
LABEL_1377:
            *(_BYTE *)(v9 + 72) = 31;
            a2 = *(unsigned __int8 **)v9;
            v29 = (char *)v9;
            v6 = 0;
            goto LABEL_320;
          }
LABEL_391:
          v15 = v85[1];
          a2 = v88;
          continue;
        case 68:
        case 81:
          v131 = 0xFFFFFFFF00000000LL;
          goto LABEL_388;
        case 69:
        case 82:
          v88 = a2 + 2;
          v85 = a2 + 1;
          *(_QWORD *)v9 = a2 + 2;
          *(_QWORD *)(v9 + 56) = 0xFFFFFFFF00000001LL;
          v89 = a2[1];
          *(_DWORD *)(v9 + 64) = v89;
          if ( (unsigned __int8)v15 > 0x47u )
          {
            v417 = 2;
            v127 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v89);
            v87 = 1;
            *(_DWORD *)(v9 + 68) = v127;
LABEL_1004:
            v22 = *(unsigned __int8 **)(v9 + 80);
            v313 = 1 - (_DWORD)v22;
            while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
            {
              v314 = *v22;
              if ( v314 == (_DWORD)v89 || v314 == v127 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              *(_QWORD *)(v9 + 80) = ++v22;
              if ( v87 < v313 + (int)v22 )
              {
                v126 = *(_DWORD *)(v9 + 60);
                if ( v126 == v87 )
                  goto LABEL_391;
                if ( v417 )
                {
                  *(_QWORD *)(v9 + 8) = v22;
                  if ( v87 >= v126 )
                    goto LABEL_1089;
LABEL_375:
                  v128 = v87 - (_DWORD)v22;
                  while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
                  {
                    v129 = *v22;
                    if ( v129 != v127 && v129 != (_DWORD)v89 )
                    {
                      *(_QWORD *)(v9 + 80) = ++v22;
                      if ( v128 + (unsigned int)v22 < v126 )
                        continue;
                    }
                    goto LABEL_1089;
                  }
                  v130 = *(_WORD *)(a6 + 104);
                  if ( v130 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
                  {
                    *(_DWORD *)(a6 + 40) = 1;
                    if ( v130 != 1 )
                      return (unsigned int)-2;
                    a2 = *(unsigned __int8 **)v9;
                  }
                  else
                  {
LABEL_1089:
                    a2 = v88;
                  }
                  if ( v417 != 2 )
                  {
                    v33 = *(unsigned __int8 **)(v9 + 80);
LABEL_62:
                    if ( *(unsigned __int8 **)(v9 + 8) != v33 )
                    {
                      *(_BYTE *)(v9 + 72) = 30;
                      v29 = (char *)v9;
                      v6 = 0;
                      goto LABEL_320;
                    }
                  }
                  goto LABEL_118;
                }
LABEL_427:
                v417 = 0;
LABEL_428:
                *(_BYTE *)(v9 + 72) = 29;
                a2 = *(unsigned __int8 **)v9;
                v29 = (char *)v9;
                v6 = 0;
                goto LABEL_320;
              }
            }
            v315 = *(_WORD *)(a6 + 104);
            if ( !v315 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v315 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          v417 = 2;
          v87 = 1;
          goto LABEL_294;
        case 70:
        case 83:
          v131 = 0x100000000LL;
LABEL_388:
          v88 = a2 + 2;
          *(_QWORD *)(v9 + 56) = v131;
          v85 = a2 + 1;
          *(_QWORD *)v9 = a2 + 2;
          v89 = a2[1];
          *(_DWORD *)(v9 + 64) = v89;
          if ( (unsigned __int8)v15 <= 0x47u )
            goto LABEL_1026;
          v126 = *(_DWORD *)(v9 + 60);
          v127 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v89);
          *(_DWORD *)(v9 + 68) = v127;
          if ( !v126 )
            goto LABEL_390;
          goto LABEL_373;
        case 71:
        case 84:
          *(_DWORD *)(v9 + 56) = 0;
          v125 = *(_WORD *)(a2 + 1);
          v88 = a2 + 4;
          v85 = a2 + 3;
          *(_QWORD *)v9 = a2 + 4;
          v126 = (unsigned __int16)__ROL2__(v125, 8);
          *(_DWORD *)(v9 + 60) = (unsigned __int16)v126;
          v89 = a2[3];
          *(_DWORD *)(v9 + 64) = v89;
          if ( (unsigned __int8)v15 <= 0x47u )
          {
LABEL_1026:
            v417 = 2;
LABEL_1027:
            v319 = *(_DWORD *)(v9 + 60);
            if ( !v319 )
              goto LABEL_391;
LABEL_1028:
            v22 = *(unsigned __int8 **)(v9 + 80);
            v87 = 0;
            *(_QWORD *)(v9 + 8) = v22;
            goto LABEL_1029;
          }
          v127 = *(unsigned __int8 *)(*(_QWORD *)(a6 + 72) + v89);
          *(_DWORD *)(v9 + 68) = v127;
          if ( v126 )
          {
LABEL_373:
            v417 = 2;
            goto LABEL_374;
          }
          goto LABEL_390;
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
          v97 = a2 + 1;
          *(_QWORD *)v9 = a2 + 1;
          v98 = *a2 - 85;
          v99 = dword_239F320[v98];
          v417 = dword_239F2A0[v98];
          *(_QWORD *)(v9 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v99), _mm_cvtsi32_si128(dword_239F2E0[v98])).m128i_u64[0];
          goto LABEL_316;
        case 91:
        case 92:
          *(_DWORD *)(v9 + 56) = 0;
          *(_DWORD *)(v9 + 60) = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
          v99 = 0;
          v417 = *a2 != 92;
          *(_QWORD *)v9 = a2 + 4;
          *(_DWORD *)(v9 + 64) = a2[3];
          goto LABEL_393;
        case 93:
          v97 = a2 + 3;
          v99 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
          *(_QWORD *)(v9 + 56) = _mm_shuffle_epi32(_mm_cvtsi32_si128((unsigned __int16)v99), 224).m128i_u64[0];
LABEL_316:
          *(_QWORD *)v9 = v97 + 1;
          v100 = *v97;
          *(_DWORD *)(v9 + 64) = v100;
          v101 = v100;
          if ( v99 )
            goto LABEL_317;
          goto LABEL_393;
        case 94:
          v217 = 0xFFFFFFFF00000000LL;
          goto LABEL_611;
        case 95:
          v417 = 2;
          v99 = 1;
          *(_QWORD *)(v9 + 56) = 0xFFFFFFFF00000001LL;
          *(_QWORD *)v9 = a2 + 2;
          v230 = a2[1];
          *(_DWORD *)(v9 + 64) = v230;
          v101 = v230;
          break;
        case 96:
          v217 = 0x100000000LL;
LABEL_611:
          *(_QWORD *)(v9 + 56) = v217;
          *(_QWORD *)v9 = a2 + 2;
          *(_DWORD *)(v9 + 64) = a2[1];
          goto LABEL_609;
        case 97:
          *(_DWORD *)(v9 + 56) = 0;
          *(_DWORD *)(v9 + 60) = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
          *(_QWORD *)v9 = a2 + 4;
          *(_DWORD *)(v9 + 64) = a2[3];
LABEL_609:
          v417 = 2;
          v99 = 0;
          goto LABEL_393;
        case 110:
        case 111:
          v159 = a2 + 1;
          *(_QWORD *)(v9 + 16) = a2 + 1;
          *(_QWORD *)v9 = a2 + 33;
          v160 = a2[33];
          if ( v160 <= 0x6Cu )
          {
            if ( v160 <= 0x69u )
            {
              if ( v160 > 0x67u )
                goto LABEL_1198;
              if ( v160 <= 0x61u )
                goto LABEL_1197;
            }
            *(_QWORD *)v9 = a2 + 34;
            v161 = (unsigned int)a2[33] - 98;
            v162 = dword_239F320[v161];
            v417 = dword_239F2A0[v161];
            *(_QWORD *)(v9 + 56) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v162), _mm_cvtsi32_si128(dword_239F2E0[v161])).m128i_u64[0];
            if ( v162 )
              goto LABEL_460;
            v345 = *(_DWORD *)(v9 + 60);
            if ( v345 )
              goto LABEL_1201;
            v15 = a2[34];
            a2 += 34;
            continue;
          }
          if ( v160 == 109 )
          {
LABEL_1198:
            v162 = (unsigned __int16)__ROL2__(*((_WORD *)a2 + 17), 8);
            *(_DWORD *)(v9 + 56) = (unsigned __int16)v162;
            v345 = (unsigned __int16)__ROL2__(*((_WORD *)a2 + 18), 8);
            if ( !*((_WORD *)a2 + 18) )
              v345 = -1;
            v349 = a2 + 38;
            *(_DWORD *)(v9 + 60) = v345;
            v350 = *(v349 - 5);
            *(_QWORD *)v9 = v349;
            v417 = dword_239F2A0[v350 - 98];
            if ( v162 )
              goto LABEL_460;
LABEL_1201:
            if ( v417 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v162 = 0;
              *(_QWORD *)(v9 + 8) = v22;
              goto LABEL_1185;
            }
LABEL_1453:
            v417 = 0;
LABEL_1454:
            *(_BYTE *)(v9 + 72) = 23;
            a2 = *(unsigned __int8 **)v9;
            v29 = (char *)v9;
            v6 = 0;
            goto LABEL_320;
          }
LABEL_1197:
          v162 = 1;
          *(_QWORD *)(v9 + 56) = 0x100000001LL;
LABEL_460:
          v22 = *(unsigned __int8 **)(v9 + 80);
          v163 = 1 - (_DWORD)v22;
          do
          {
            if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
            {
              v165 = *(_WORD *)(a6 + 104);
              if ( !v165 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
              {
                v20 = *(_DWORD *)(a6 + 52);
                if ( !v20 )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  goto LABEL_32;
                }
              }
              *(_DWORD *)(a6 + 40) = 1;
              if ( v165 == 1 )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              return (unsigned int)-2;
            }
            *(_QWORD *)(v9 + 80) = ++v22;
            v164 = v159[*(v22 - 1) >> 3];
            if ( !_bittest(&v164, *(v22 - 1) & 7) )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
          }
          while ( v162 >= v163 + (int)v22 );
          v345 = *(_DWORD *)(v9 + 60);
          if ( v345 == v162 )
            goto LABEL_7;
          if ( !v417 )
            goto LABEL_1453;
          *(_QWORD *)(v9 + 8) = v22;
          if ( v162 >= v345 )
          {
            if ( v417 != 2 )
            {
LABEL_1487:
              *(_BYTE *)(v9 + 72) = 24;
              a2 = *(unsigned __int8 **)v9;
              v29 = (char *)v9;
              v6 = 0;
              goto LABEL_320;
            }
          }
          else
          {
LABEL_1185:
            v346 = v162 - (_DWORD)v22;
            while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
            {
              v347 = v159[*v22 >> 3];
              if ( _bittest(&v347, *v22 & 7) )
              {
                *(_QWORD *)(v9 + 80) = ++v22;
                if ( v346 + (unsigned int)v22 < v345 )
                  continue;
              }
              goto LABEL_1193;
            }
            v348 = *(_WORD *)(a6 + 104);
            if ( v348 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
            {
              *(_DWORD *)(a6 + 40) = 1;
              if ( v348 != 1 )
                return (unsigned int)-2;
            }
LABEL_1193:
            if ( v417 != 2 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
LABEL_153:
              if ( (unsigned __int64)v22 < *(_QWORD *)(v9 + 8) )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              goto LABEL_1487;
            }
          }
          goto LABEL_7;
        case 114:
        case 115:
          *(_DWORD *)(v9 + 64) = (_BYTE)v15 == 115;
          if ( (_BYTE)v15 == 115 )
          {
            *(_DWORD *)(v9 + 68) = a2[3];
            v141 = 2 * (unsigned int)(unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8) - 2;
            v151 = 4;
          }
          else
          {
            *(_DWORD *)(v9 + 68) = 0;
            v141 = 2 * (unsigned int)(unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8) - 2;
            v151 = 3;
          }
          a2 += v151;
          *(_QWORD *)(v9 + 40) = v141;
          *(_QWORD *)v9 = a2;
          goto LABEL_435;
        case 116:
        case 117:
          *(_DWORD *)(v9 + 64) = (_BYTE)v15 == 117;
          if ( (_BYTE)v15 == 117 )
          {
            *(_DWORD *)(v9 + 68) = a2[5];
            v137 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 3), 8);
            v138 = (_WORD *)(*(_QWORD *)(a6 + 112)
                           + *(unsigned __int16 *)(a6 + 110)
                           * (unsigned int)(unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8));
            v139 = 6;
          }
          else
          {
            *(_DWORD *)(v9 + 68) = 0;
            v137 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 3), 8);
            v138 = (_WORD *)(*(_QWORD *)(a6 + 112)
                           + *(unsigned __int16 *)(a6 + 110)
                           * (unsigned int)(unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8));
            v139 = 5;
          }
          a2 += v139;
          *(_QWORD *)v9 = a2;
          if ( v137 )
          {
            v140 = *(unsigned __int8 **)(v9 + 128);
            do
            {
              v141 = 2 * (unsigned int)(unsigned __int16)__ROL2__(*v138, 8) - 2;
              *(_QWORD *)(v9 + 40) = v141;
              if ( v141 < (unsigned __int64)v140 && *(_QWORD *)(v9 + 8 * v141 + 136) != -1 )
                break;
              v138 = (_WORD *)((char *)v138 + *(unsigned __int16 *)(a6 + 110));
              --v137;
            }
            while ( v137 );
          }
          else
          {
            v141 = *(_QWORD *)(v9 + 40);
          }
LABEL_435:
          v152 = *a2;
          if ( *a2 > 0x67u )
          {
            if ( (unsigned __int8)(v152 - 104) <= 1u )
            {
              *(_DWORD *)(v9 + 56) = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
              v329 = *(_WORD *)(a2 + 3);
              v330 = (unsigned __int16)__ROL2__(v329, 8);
              *(_DWORD *)(v9 + 60) = (unsigned __int16)v330;
              if ( !v329 )
                v330 = -1;
              v417 = dword_239F2A0[*a2 - 98];
              *(_DWORD *)(v9 + 60) = v330;
              *(_QWORD *)v9 = a2 + 5;
LABEL_438:
              if ( v141 >= *(_QWORD *)(v9 + 128)
                || (v154 = *(unsigned __int8 **)(v9 + 8 * v141 + 136), v154 == (unsigned __int8 *)-1LL) )
              {
                v155 = *(_DWORD *)(v9 + 56);
                if ( !v155 || (*(_BYTE *)(a6 + 225) & 2) != 0 )
                  goto LABEL_7;
LABEL_442:
                v422 = v8;
                v156 = 1;
                v419 = *(_DWORD *)(v9 + 64);
                for ( j = sub_86F750(v141, v419, v9, a6, v426); ; j = sub_86F750(v141, v419, v9, a6, v426) )
                {
                  if ( j )
                  {
                    v8 = v422;
                    if ( j == 1 )
                    {
                      v22 = *(unsigned __int8 **)(a6 + 144);
                      *(_QWORD *)(v9 + 80) = v22;
                    }
                    else
                    {
                      v22 = *(unsigned __int8 **)(v9 + 80);
                    }
                    if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
                    {
                      v158 = *(_WORD *)(a6 + 104);
                      if ( v158 )
                      {
                        if ( *(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52) )
                        {
                          *(_DWORD *)(a6 + 40) = 1;
                          if ( v158 != 1 )
                            return (unsigned int)-2;
                          v22 = *(unsigned __int8 **)(v9 + 80);
                        }
                      }
                    }
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    v20 = 0;
                    goto LABEL_32;
                  }
                  ++v156;
                  *(_QWORD *)(v9 + 80) += v426[0];
                  if ( v155 < v156 )
                    break;
                }
                v8 = v422;
              }
              else
              {
                if ( v154 == *(unsigned __int8 **)(v9 + 8 * v141 + 144) )
                  goto LABEL_7;
                v155 = *(_DWORD *)(v9 + 56);
                if ( v155 )
                  goto LABEL_442;
              }
              v353 = *(_DWORD *)(v9 + 60);
              if ( v353 == v155 )
                goto LABEL_7;
              if ( v417 )
              {
                *(_QWORD *)(v9 + 8) = *(_QWORD *)(v9 + 80);
                v354 = (unsigned __int8 *)(*(_QWORD *)(v9 + 8 * v141 + 144) - *(_QWORD *)(v9 + 8 * v141 + 136));
                *(_QWORD *)(v9 + 24) = v354;
                if ( v155 < v353 )
                {
                  v424 = v8;
                  v355 = v354;
                  v356 = 1;
                  v420 = a6;
                  v357 = v353;
                  v423 = *(_DWORD *)(v9 + 64);
                  v358 = v155;
                  v359 = v9;
                  v360 = v358;
                  for ( k = sub_86F750(v141, v423, v359, v420, v426); !k; k = sub_86F750(v141, v423, v359, v420, v426) )
                  {
                    v362 = v355 == (unsigned __int8 *)v426[0];
                    ++v360;
                    *(_QWORD *)(v359 + 80) += v426[0];
                    v356 &= v362;
                    if ( v360 >= v357 )
                    {
                      v382 = v360;
                      v8 = v424;
                      v9 = v359;
                      a6 = v420;
                      v364 = v382;
                      goto LABEL_1229;
                    }
                  }
                  v363 = v360;
                  v8 = v424;
                  v9 = v359;
                  a6 = v420;
                  v364 = v363;
                  if ( k == 1 )
                  {
                    v365 = *(_WORD *)(v420 + 104);
                    if ( v365 )
                    {
                      if ( *(_QWORD *)(v420 + 168) < *(_QWORD *)(v420 + 144) )
                      {
                        *(_DWORD *)(v420 + 40) = 1;
                        if ( v365 != 1 )
                          return (unsigned int)-2;
                      }
                    }
                  }
LABEL_1229:
                  if ( !v356 )
                  {
                    *(_DWORD *)(v9 + 60) = v364;
LABEL_1489:
                    *(_BYTE *)(v9 + 72) = 22;
                    a2 = *(unsigned __int8 **)v9;
                    v29 = (char *)v9;
                    v6 = 0;
                    goto LABEL_320;
                  }
                  v22 = *(unsigned __int8 **)(v9 + 80);
LABEL_202:
                  if ( (unsigned __int64)v22 < *(_QWORD *)(v9 + 8) )
                  {
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    v20 = 0;
                    goto LABEL_32;
                  }
                }
                *(_BYTE *)(v9 + 72) = 21;
                a2 = *(unsigned __int8 **)v9;
                v29 = (char *)v9;
                v6 = 0;
                goto LABEL_320;
              }
LABEL_1363:
              *(_BYTE *)(v9 + 72) = 20;
              a2 = *(unsigned __int8 **)v9;
              v29 = (char *)v9;
              v6 = 0;
              goto LABEL_320;
            }
          }
          else if ( v152 > 0x61u )
          {
            *(_QWORD *)v9 = a2 + 1;
            v153 = *a2 - 98;
            v417 = dword_239F2A0[v153];
            *(_QWORD *)(v9 + 56) = _mm_unpacklo_epi32(
                                     _mm_cvtsi32_si128(dword_239F320[v153]),
                                     _mm_cvtsi32_si128(dword_239F2E0[v153])).m128i_u64[0];
            goto LABEL_438;
          }
          v334 = sub_86F750(v141, *(_DWORD *)(v9 + 64), v9, a6, &v425);
          if ( v334 )
          {
            if ( v334 == 1 )
            {
              v22 = *(unsigned __int8 **)(a6 + 144);
              *(_QWORD *)(v9 + 80) = v22;
            }
            else
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
            }
            if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            v335 = *(_WORD *)(a6 + 104);
            if ( !v335 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v335 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          *(_QWORD *)(v9 + 80) += v425;
          v15 = *a2;
          continue;
        case 118:
          v198 = *(unsigned __int8 **)(a6 + 120);
          v199 = &stru_40000;
          v43 = &v198[(unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8)];
          if ( v198 != v43 )
            LODWORD(v199) = (unsigned __int16)__ROL2__(*(_WORD *)(v43 + 3), 8) | 0x40000;
          v200 = *(unsigned __int8 **)(a6 + 176);
          v6 = (int)v199;
          if ( *(_DWORD *)(v9 + 112) == -1 )
            goto LABEL_544;
          v201 = *(unsigned __int8 **)(v9 + 120);
          if ( v201 == (unsigned __int8 *)-1LL )
            goto LABEL_544;
          while ( 1 )
          {
            v202 = &v201[*(_QWORD *)(v8 + 48)];
            v203 = (_QWORD *)(v202 - a4);
            if ( *((_DWORD *)v202 + 13) == (_DWORD)v199 )
              break;
            v201 = (unsigned __int8 *)v203[15];
            if ( v201 == (unsigned __int8 *)-1LL )
              goto LABEL_544;
          }
          if ( *(_QWORD *)(v9 + 80) == v203[10]
            && (unsigned __int8 *)v203[13] == v200
            && (*(_BYTE *)(a6 + 222) & 4) == 0 )
          {
            return (unsigned int)-52;
          }
LABEL_544:
          *(_QWORD *)(v9 + 104) = v200;
          v29 = (char *)v9;
          *(_QWORD *)(v9 + 8) = v43;
          *(_DWORD *)(v9 + 56) = (_DWORD)v199;
          v65 = *v43;
LABEL_545:
          *(_BYTE *)(v9 + 72) = 11;
          a2 = &v43[byte_239F9C0[v65]];
          goto LABEL_320;
        case 119:
        case 120:
          v136 = sub_86F4B0(v9, (_QWORD *)a6, &v425);
          v20 = v136;
          if ( v136 > 0 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          if ( v136 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            v25 = *(unsigned __int8 **)(a6 + 176);
            goto LABEL_32;
          }
          a2 = (unsigned __int8 *)(*(_QWORD *)v9 + v425);
          *(_QWORD *)v9 = a2;
          v15 = *a2;
          continue;
        case 121:
          v235 = a2;
          do
          {
            v235 += (unsigned __int16)__ROL2__(*(_WORD *)(v235 + 1), 8);
            *(_QWORD *)v9 = v235;
            v15 = *v235;
          }
          while ( (_BYTE)v15 == 121 );
          v411 = a2;
          a2 = v235;
          continue;
        case 122:
        case 123:
        case 124:
        case 125:
          v104 = v411;
          v105 = __ROL2__(*(_WORD *)(a2 + 1), 8);
          v106 = &a2[-v105];
          if ( !v411 )
            v104 = a2;
          v107 = &a2[-v105];
          do
          {
            v108 = v107;
            v107 += (unsigned __int16)__ROL2__(*(_WORD *)(v107 + 1), 8);
          }
          while ( v107 != v104 );
          v109 = *v106;
          if ( (*v106 & 0xFB) == 0x89 )
          {
            v110 = nullptr;
          }
          else
          {
            v407 = (unsigned __int8 *)(*(_QWORD *)(v8 + 48) + *(_QWORD *)(v9 + 120));
            v110 = (char *)(v407 - a4);
            *(_QWORD *)(v9 + 120) = *(_QWORD *)(v407 - a4 + 120);
            v111 = *((_DWORD *)v407 + 13);
            v109 = *v106;
            LOWORD(v111) = 0;
            if ( v111 == 196608 )
            {
              if ( (unsigned __int8)(v109 + 126) > 1u
                || v108[3] != 127
                || (v22 = *(unsigned __int8 **)(v9 + 80), v22 == *((unsigned __int8 **)v110 + 10)) )
              {
                v20 = 1;
                memcpy(v110 + 136, (const void *)(v9 + 136), 8LL * *(_QWORD *)(v9 + 128));
                v381 = v407 - a4;
                v411 = nullptr;
                *(_QWORD *)(v381 + 128) = *(_QWORD *)(v9 + 128);
                *(_QWORD *)(v381 + 96) = *(_QWORD *)(v9 + 96);
                v22 = *(unsigned __int8 **)(v9 + 80);
                *(_QWORD *)(v9 + 32) = v9 - (v407 - a4);
                v25 = *(unsigned __int8 **)(a6 + 176);
              }
              else
              {
                v411 = nullptr;
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
              }
              goto LABEL_32;
            }
          }
          switch ( v109 )
          {
            case 0x80u:
              goto LABEL_948;
            case 0x81u:
              v411 = nullptr;
              v22 = *(unsigned __int8 **)(v9 + 80);
              v20 = 1;
              v25 = *(unsigned __int8 **)(a6 + 176);
              goto LABEL_32;
            case 0x82u:
              if ( v108[3] == 127 )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
                v289 = v22;
                if ( *((unsigned __int8 **)v110 + 10) != v22 )
                {
                  v411 = nullptr;
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
              }
              else
              {
LABEL_948:
                v289 = *(unsigned __int8 **)(v9 + 80);
              }
              if ( *(_QWORD *)(a6 + 176) < (unsigned __int64)v289 )
                *(_QWORD *)(a6 + 176) = v289;
              *(_QWORD *)(v9 + 80) = *((_QWORD *)v110 + 10);
LABEL_952:
              *(_QWORD *)(v9 + 32) = v9 - (_QWORD)v110;
              for ( m = *(_QWORD *)v110; ; *(_QWORD *)v110 = m )
              {
                m += (unsigned __int16)__ROL2__(*(_WORD *)(m + 1), 8);
                if ( *(_BYTE *)m != 121 )
                  break;
              }
              v178 = *(_QWORD *)v9;
              goto LABEL_913;
            case 0x83u:
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v411 = nullptr;
              v20 = v108[3] != 127 || *((_QWORD *)v110 + 10) == (_QWORD)v22;
              goto LABEL_32;
            case 0x84u:
              goto LABEL_975;
            case 0x85u:
              if ( v108[3] == 127 )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
                v301 = v22;
                if ( *((unsigned __int8 **)v110 + 10) != v22 )
                {
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  v411 = nullptr;
                  goto LABEL_32;
                }
              }
              else
              {
LABEL_975:
                v301 = *(unsigned __int8 **)(v9 + 80);
              }
              v178 = (__int64)a2;
              if ( *(_QWORD *)(a6 + 176) < (unsigned __int64)v301 )
              {
                *(_QWORD *)(a6 + 176) = v301;
                v178 = *(_QWORD *)v9;
              }
              *(_QWORD *)(v9 + 80) = *((_QWORD *)v110 + 10);
              goto LABEL_913;
            case 0x86u:
              v29 = (char *)v9;
              v6 = 0;
              v411 = nullptr;
              *(_QWORD *)(v9 + 8) = *(_QWORD *)(a6 + 144);
              v302 = *((_QWORD *)v110 + 1);
              *(_QWORD *)(a6 + 144) = v302;
              *(_QWORD *)(a6 + 152) = *((_QWORD *)v110 + 5) + v302;
              v303 = *((unsigned __int8 **)v110 + 2);
              *(_BYTE *)(v9 + 72) = 39;
              *(_QWORD *)(v9 + 80) = v303;
              a2 = (unsigned __int8 *)(*(_QWORD *)v9 + 3LL);
              goto LABEL_320;
            case 0x87u:
              goto LABEL_952;
            case 0x88u:
              v413 = v106;
              v412 = v110;
              v20 = sub_877110(*((_QWORD *)v110 + 10), *(_QWORD *)(v9 + 80), 0);
              if ( !v20 )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
                v25 = *(unsigned __int8 **)(a6 + 176);
                v411 = nullptr;
                goto LABEL_32;
              }
              v178 = *(_QWORD *)v9;
              v110 = v412;
              v106 = v413;
LABEL_913:
              if ( *(_BYTE *)v178 == 125 )
              {
                v20 = -998;
                memcpy(v110 + 80, (const void *)(v9 + 80), n);
                v22 = *(unsigned __int8 **)(v9 + 80);
                v25 = *(unsigned __int8 **)(a6 + 176);
                v411 = nullptr;
                goto LABEL_32;
              }
              v288 = *(_BYTE *)(v9 + 73);
              if ( v288 != 122 && (!v110 || *(_QWORD *)(v9 + 80) != *((_QWORD *)v110 + 10)) )
              {
                if ( v288 == 124 )
                {
                  *(_BYTE *)(v9 + 72) = 6;
                  a2 = (unsigned __int8 *)(v178 + 3);
                  v29 = (char *)v9;
                }
                else
                {
                  *(_BYTE *)(v9 + 72) = 7;
                  v29 = (char *)v9;
                  a2 = v106;
                }
                v411 = nullptr;
                v6 = 0;
                goto LABEL_320;
              }
              v411 = nullptr;
              break;
            case 0x89u:
              if ( *(_DWORD *)(v9 + 112) || a2[3] )
                goto LABEL_912;
              v304 = *(unsigned __int8 **)(v9 + 120);
              if ( v304 == (unsigned __int8 *)-1LL )
                return (unsigned int)-44;
              v407 = &v304[*(_QWORD *)(v8 + 48)];
              v305 = v407 - a4;
              *(_QWORD *)(v9 + 120) = *(_QWORD *)(v407 - a4 + 120);
              goto LABEL_986;
            case 0x8Bu:
            case 0x8Cu:
            case 0x90u:
            case 0x91u:
              v286 = (unsigned __int16)__ROL2__(*(_WORD *)(v106 + 3), 8);
              if ( (unsigned __int16)v286 != *(_DWORD *)(v9 + 112) )
              {
                *(_DWORD *)(v9 + 116) = v286;
                v287 = (unsigned int)(2 * v286 - 2);
                *(_QWORD *)(v9 + 8 * v287 + 136) = *((_QWORD *)v110 + 10) - *(_QWORD *)(a6 + 128);
                *(_QWORD *)(v9 + 8 * v287 + 144) = *(_QWORD *)(v9 + 80) - *(_QWORD *)(a6 + 128);
                if ( v287 >= *(_QWORD *)(v9 + 128) )
                  *(_QWORD *)(v9 + 128) = v287 + 2;
LABEL_912:
                v178 = (__int64)a2;
                goto LABEL_913;
              }
              v305 = v407 - a4;
LABEL_986:
              v306 = (_BYTE *)(*(_QWORD *)v305 + 3LL);
              *(_QWORD *)v9 = v306;
              if ( *v306 == 0x93 )
              {
                sub_86F610((__int64 *)v9, v305);
              }
              else
              {
                memcpy((void *)(v9 + 136), (const void *)(v305 + 136), 8LL * *(_QWORD *)(v9 + 128));
                *(_QWORD *)(v9 + 128) = *(_QWORD *)(v305 + 128);
              }
              *(_DWORD *)(v9 + 116) = *(_DWORD *)(v305 + 116);
              v307 = *(_DWORD *)(v305 + 112);
              a2 = *(unsigned __int8 **)v9;
              *(_DWORD *)(v9 + 112) = v307;
              v15 = *a2;
              v411 = nullptr;
              continue;
            default:
              goto LABEL_912;
          }
          goto LABEL_499;
        case 126:
          v22 = *(unsigned __int8 **)(v9 + 80);
          v231 = __ROL2__(*(_WORD *)(a2 + 1), 8);
          if ( v231 > (__int64)&v22[-*(_QWORD *)(a6 + 128)] )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          v232 = &v22[-v231];
          v44 = a2;
          *(_QWORD *)(v9 + 80) = v232;
          if ( (unsigned __int64)v232 < *(_QWORD *)(a6 + 168) )
          {
            *(_QWORD *)(a6 + 168) = v232;
            v44 = *(unsigned __int8 **)v9;
          }
          goto LABEL_126;
        default:
          if ( (unsigned __int8)v15 <= 0x85u )
          {
            v67 = 1LL << ((unsigned __int8)v15 - 127);
            if ( (v67 & 0x6A) == 0 )
            {
              if ( (v67 & 0x14) == 0 )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
                v68 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
                *(_DWORD *)(v9 + 56) = (unsigned __int16)v68;
                v69 = *(_WORD *)(a2 + 3);
                *(_QWORD *)(v9 + 8) = v22;
                v70 = (unsigned __int16)__ROL2__(v69, 8);
                *(_DWORD *)(v9 + 60) = (unsigned __int16)v70;
                v71 = (__int64)&v22[-*(_QWORD *)(a6 + 128)];
                if ( v71 <= 0xFFFF )
                {
                  if ( v71 < 0 )
                    LODWORD(v71) = 0;
                  if ( (unsigned int)v71 < v68 )
                  {
                    v25 = *(unsigned __int8 **)(a6 + 176);
                    v20 = 0;
                    goto LABEL_32;
                  }
                  if ( (unsigned int)v71 < (unsigned int)v70 )
                  {
                    *(_DWORD *)(v9 + 60) = v71;
                    v70 = (unsigned int)v71;
                  }
                }
                v29 = (char *)v9;
                *(_QWORD *)(v9 + 80) = &v22[-v70];
LABEL_534:
                v197 = *(_QWORD *)v9;
                *(_BYTE *)(v9 + 72) = 37;
                v6 = 0;
                a2 = (unsigned __int8 *)(v197 + 5);
                goto LABEL_320;
              }
              v6 = v15 | 0x20000;
              v29 = (char *)v9;
              *(_DWORD *)(v9 + 56) = v6;
              v73 = *a2;
              goto LABEL_248;
            }
            v6 = v15 | 0x20000;
            v29 = (char *)v9;
            *(_DWORD *)(v9 + 56) = v6;
            v62 = *a2;
LABEL_1081:
            *(_BYTE *)(v9 + 72) = 3;
            a2 += byte_239F9C0[v62];
            goto LABEL_320;
          }
          switch ( (char)v15 )
          {
            case -122:
              v179 = a2 + 3;
              v180 = 0;
              while ( 1 )
              {
LABEL_503:
                while ( *v179 == 0x93 )
                {
                  v181 = *(_WORD *)(v179 + 1);
                  v180 += 3;
                  v179 += 3;
                  v182 = 2 * (unsigned int)(unsigned __int16)__ROL2__(v181, 8) - 2;
                  if ( v182 < *(_QWORD *)(v9 + 128) )
                  {
                    v183 = *(unsigned __int8 **)(v9 + 8 * v182 + 136);
                    if ( v183 != (unsigned __int8 *)-1LL )
                      goto LABEL_506;
                  }
                }
                if ( *v179 != 0x94 )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                v325 = *(_WORD *)(v179 + 3);
                v180 += 5;
                v179 += 5;
                v326 = *(unsigned __int16 *)(a6 + 110);
                v327 = (unsigned __int16)__ROL2__(v325, 8);
                v328 = (_WORD *)(*(_QWORD *)(a6 + 112)
                               + (unsigned int)v326 * (unsigned __int16)__ROL2__(*((_WORD *)v179 - 2), 8));
                if ( (_WORD)v327 )
                {
                  while ( 1 )
                  {
                    v182 = 2 * (unsigned int)(unsigned __int16)__ROL2__(*v328, 8) - 2;
                    if ( v182 < *(_QWORD *)(v9 + 128) )
                    {
                      v183 = *(unsigned __int8 **)(v9 + 8 * v182 + 136);
                      if ( v183 != (unsigned __int8 *)-1LL )
                        break;
                    }
                    v328 = (_WORD *)((char *)v328 + v326);
                    if ( !--v327 )
                      goto LABEL_503;
                  }
                  while ( 1 )
                  {
LABEL_506:
                    for ( ii = *v179; ii != 0x93; v180 += 5 )
                    {
                      if ( ii != 0x94 )
                      {
                        *(_DWORD *)(v9 + 60) = v180;
                        v331 = *(unsigned __int8 **)(a6 + 144);
                        v29 = (char *)v9;
                        *(_QWORD *)(v9 + 8) = v331;
                        *(_QWORD *)(v9 + 40) = *(_QWORD *)(a6 + 152) - (_QWORD)v331;
                        *(_QWORD *)(v9 + 16) = *(_QWORD *)(v9 + 80);
                        *(_DWORD *)(v9 + 64) = *(_DWORD *)(a6 + 220);
                        *(_QWORD *)(v9 + 80) = &v183[*(_QWORD *)(a6 + 128)];
                        v332 = (unsigned __int8 *)(*(_QWORD *)(a6 + 128) + *(_QWORD *)(v9 + 8 * v182 + 144));
                        *(_DWORD *)(a6 + 220) &= ~2u;
                        *(__m128i *)(a6 + 144) = _mm_unpacklo_epi64(
                                                   (__m128i)(unsigned __int64)v332,
                                                   (__m128i)(unsigned __int64)v332);
                        v63 = *(unsigned __int8 **)v9;
                        v6 = *(unsigned __int8 *)(v9 + 73) | 0x20000;
                        v333 = *(unsigned int *)(v9 + 60) + 3LL;
                        *(_DWORD *)(v9 + 56) = v6;
LABEL_1083:
                        *(_BYTE *)(v9 + 72) = 38;
                        a2 = &v63[v333];
                        goto LABEL_320;
                      }
                      ii = v179[5];
                      v179 += 5;
                    }
                    v180 += 3;
                    v179 += 3;
                  }
                }
              }
            case -121:
            case -120:
            case -114:
              v6 = v15 | 0x20000;
              v29 = (char *)v9;
              *(_DWORD *)(v9 + 56) = v6;
              v50 = *a2;
              goto LABEL_319;
            case -119:
              if ( !*(_DWORD *)(a6 + 44) && *(_DWORD *)(v9 + 48) )
                goto LABEL_483;
              *(_DWORD *)(v9 + 56) = 0;
              v29 = (char *)v9;
              v50 = *a2;
              v6 = 0;
              goto LABEL_319;
            case -118:
            case -113:
              *(_DWORD *)(v9 + 64) = 0;
              v44 = a2;
              goto LABEL_346;
            case -117:
            case -112:
              v29 = (char *)v9;
              v6 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 3), 8) | 0x10000;
              *(_DWORD *)(v9 + 56) = v6;
              v50 = *a2;
              goto LABEL_319;
            case -116:
            case -111:
              *(_DWORD *)(v9 + 64) = 0;
              v44 = a2;
              goto LABEL_350;
            case -115:
            case -110:
              v118 = __ROL2__(*(_WORD *)(a2 + 1), 8);
              *(_QWORD *)(v9 + 24) = v118;
              if ( a2[v118] != 121 )
                *(_QWORD *)(v9 + 24) = v118 - 3LL;
              v45 = a2 + 3;
              *(_QWORD *)v9 = a2 + 3;
              v66 = a2[3];
              if ( (unsigned __int8)(v66 - 119) > 1u )
                goto LABEL_354;
              v366 = sub_86F4B0(v9, (_QWORD *)a6, &v425);
              v20 = v366;
              if ( v366 > 0 )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              if ( v366 )
              {
                v22 = *(unsigned __int8 **)(v9 + 80);
                v25 = *(unsigned __int8 **)(a6 + 176);
                goto LABEL_32;
              }
              v367 = v425;
              v368 = *(_QWORD *)v9;
              *(_QWORD *)(v9 + 24) -= v425;
              v45 = (unsigned __int8 *)(v367 + v368);
              *(_QWORD *)v9 = v45;
              v66 = *v45;
LABEL_354:
              switch ( (char)v66 )
              {
                case -109:
                  v295 = 2 * (unsigned int)(unsigned __int16)__ROL2__(*(_WORD *)(v45 + 1), 8) - 2;
                  if ( v295 >= *(_QWORD *)(v9 + 128) || *(_QWORD *)(v9 + 8 * v295 + 136) == -1 )
                    goto LABEL_116;
                  goto LABEL_226;
                case -108:
                  LOWORD(v291) = __ROL2__(*(_WORD *)(v45 + 3), 8);
                  v292 = *(unsigned __int16 *)(a6 + 110);
                  v293 = (_WORD *)(*(_QWORD *)(a6 + 112)
                                 + (unsigned int)v292 * (unsigned __int16)__ROL2__(*(_WORD *)(v45 + 1), 8));
                  if ( !*(_WORD *)(v45 + 3) )
                    goto LABEL_116;
                  v291 = (unsigned __int16)v291;
                  do
                  {
                    v294 = 2 * (unsigned int)(unsigned __int16)__ROL2__(*v293, 8) - 2;
                    if ( v294 < *(_QWORD *)(v9 + 128) && *(_QWORD *)(v9 + 8 * v294 + 136) != -1 )
                      goto LABEL_225;
                    v293 = (_WORD *)((char *)v293 + v292);
                    --v291;
                  }
                  while ( v291 );
                  goto LABEL_116;
                case -107:
                  v300 = *(_DWORD *)(v9 + 112);
                  if ( v300 != -1
                    && ((unsigned __int16)__ROL2__(*(_WORD *)(v45 + 1), 8) == v300 || *(_WORD *)(v45 + 1) == 0xFFFF) )
                  {
                    goto LABEL_226;
                  }
                  goto LABEL_116;
                case -106:
                  v296 = *(_DWORD *)(v9 + 112);
                  if ( v296 == -1 )
                    goto LABEL_116;
                  v297 = *(unsigned __int16 *)(a6 + 110);
                  LOWORD(v298) = __ROL2__(*(_WORD *)(v45 + 3), 8);
                  v299 = (_WORD *)(*(_QWORD *)(a6 + 112)
                                 + v297 * (unsigned int)(unsigned __int16)__ROL2__(*(_WORD *)(v45 + 1), 8));
                  if ( !*(_WORD *)(v45 + 3) )
                    goto LABEL_116;
                  v298 = (unsigned __int16)v298;
                  break;
                case -105:
                case -91:
                  goto LABEL_116;
                case -104:
                  goto LABEL_226;
                default:
                  *(_QWORD *)(v9 + 8) = v45;
                  v29 = (char *)v9;
                  *(_DWORD *)(v9 + 56) = (v66 & 0xFD) == 0x80;
                  v81 = *v45;
                  v82 = (unsigned __int8)v81;
                  goto LABEL_690;
              }
              do
              {
                if ( v296 == (unsigned __int16)__ROL2__(*v299, 8) )
                  goto LABEL_225;
                v299 = (_WORD *)((char *)v299 + (unsigned __int16)v297);
                --v298;
              }
              while ( v298 );
LABEL_116:
              v46 = *(unsigned __int8 **)(v9 + 24);
              goto LABEL_117;
            case -103:
              ++a2;
              *(_BYTE *)(v9 + 72) = 9;
              v29 = (char *)v9;
              v6 = 0;
              *(_QWORD *)(v9 + 8) = a2;
              goto LABEL_320;
            case -102:
              v169 = a2 + 1;
              *(_QWORD *)(v9 + 8) = v169;
              do
              {
                v169 += (unsigned __int16)__ROL2__(*(_WORD *)(v169 + 1), 8);
                *(_QWORD *)(v9 + 8) = v169;
              }
              while ( *v169 == 121 );
              *(_BYTE *)(v9 + 72) = 10;
              a2 = v169 + 3;
              v29 = (char *)v9;
              v6 = 0;
              goto LABEL_320;
            case -101:
              v44 = a2 + 1;
              *(_DWORD *)(v9 + 64) = 1;
              *(_QWORD *)v9 = a2 + 1;
              v167 = a2[1];
              if ( v167 == 0x8C || v167 == 0x91 )
LABEL_350:
                v6 = (unsigned __int16)__ROL2__(*(_WORD *)(v44 + 3), 8) | 0x10000;
              else
LABEL_346:
                v6 = 0x20000;
              *(_DWORD *)(v9 + 56) = v6;
              v84 = *(unsigned __int8 **)(v9 + 80);
              v29 = (char *)v9;
              *(_DWORD *)(v9 + 60) = 0;
              *(_QWORD *)(v9 + 16) = v44;
              goto LABEL_348;
            case -100:
              v189 = a2 + 2;
              v29 = (char *)v9;
              v6 = 0;
              *(_QWORD *)(a6 + 192) = v189;
              *(_QWORD *)(v9 + 96) = v189;
              v190 = *(_QWORD *)v9;
              v191 = byte_239F9C0[**(unsigned __int8 **)v9];
              v192 = *(unsigned __int8 *)(*(_QWORD *)v9 + 1LL);
              *(_BYTE *)(v9 + 72) = 12;
              a2 = (unsigned __int8 *)(v192 + v191 + v190);
              goto LABEL_320;
            case -99:
              *(_BYTE *)(v9 + 72) = 14;
              v29 = (char *)v9;
              v6 = 0;
              a2 += byte_239F9C0[157];
              goto LABEL_320;
            case -98:
              v185 = a2 + 2;
              v29 = (char *)v9;
              v6 = 0;
              *(_QWORD *)(a6 + 192) = v185;
              *(_QWORD *)(v9 + 96) = v185;
              v186 = *(_QWORD *)v9;
              v187 = byte_239F9C0[**(unsigned __int8 **)v9];
              v188 = *(unsigned __int8 *)(*(_QWORD *)v9 + 1LL);
              *(_BYTE *)(v9 + 72) = 15;
              a2 = (unsigned __int8 *)(v188 + v187 + v186);
              goto LABEL_320;
            case -97:
              *(_BYTE *)(v9 + 72) = 16;
              v29 = (char *)v9;
              v6 = 0;
              a2 += byte_239F9C0[159];
              goto LABEL_320;
            case -96:
              v174 = *(_DWORD *)(a6 + 228) + 1;
              *(_DWORD *)(a6 + 228) = v174;
              v175 = *(_QWORD *)v9;
              v176 = byte_239F9C0[**(unsigned __int8 **)v9];
              v177 = *(unsigned __int8 *)(*(_QWORD *)v9 + 1LL);
              if ( *(_DWORD *)(a6 + 232) < v174 )
              {
                *(_BYTE *)(v9 + 72) = 17;
                v29 = (char *)v9;
                v6 = 0;
                a2 = (unsigned __int8 *)(v177 + v176 + v175);
                goto LABEL_320;
              }
              a2 = (unsigned __int8 *)((int)v177 + (int)v176 + v175);
              goto LABEL_484;
            case -95:
              *(_BYTE *)(v9 + 72) = 18;
              v29 = (char *)v9;
              v6 = 0;
              a2 += byte_239F9C0[161];
              goto LABEL_320;
            case -94:
              v170 = a2 + 2;
              v29 = (char *)v9;
              v6 = 0;
              *(_QWORD *)(a6 + 192) = v170;
              *(_QWORD *)(v9 + 96) = v170;
              v171 = *(_QWORD *)v9;
              v172 = byte_239F9C0[**(unsigned __int8 **)v9];
              v173 = *(unsigned __int8 *)(*(_QWORD *)v9 + 1LL);
              *(_BYTE *)(v9 + 72) = 19;
              a2 = (unsigned __int8 *)(v173 + v172 + v171);
              goto LABEL_320;
            case -93:
              *(_BYTE *)(v9 + 72) = 13;
              v29 = (char *)v9;
              v6 = 0;
              a2 += byte_239F9C0[163];
              goto LABEL_320;
            case -92:
              v193 = a2 + 2;
              v29 = (char *)v9;
              v6 = 0;
              *(_QWORD *)(a6 + 192) = v193;
              *(_QWORD *)(v9 + 96) = v193;
              v194 = *(_QWORD *)v9;
              v195 = byte_239F9C0[**(unsigned __int8 **)v9];
              v196 = *(unsigned __int8 *)(*(_QWORD *)v9 + 1LL);
              *(_BYTE *)(v9 + 72) = 36;
              a2 = (unsigned __int8 *)(v196 + v195 + v194);
              goto LABEL_320;
            case -91:
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            case -90:
              if ( *(_DWORD *)(v9 + 112) == -1 )
                goto LABEL_23;
              v16 = *(unsigned __int8 **)(v9 + 120);
              if ( v16 == (unsigned __int8 *)-1LL )
                return (unsigned int)-44;
              while ( 1 )
              {
                v17 = &v16[*(_QWORD *)(v8 + 48)];
                v18 = *((_DWORD *)v17 + 13);
                v19 = (unsigned __int8 **)(v17 - a4);
                LOWORD(v18) = 0;
                if ( v18 == (_DWORD)&stru_40000 )
                  break;
                v16 = v19[15];
                if ( v16 == (unsigned __int8 *)-1LL )
                  return (unsigned int)-44;
              }
              v407 = v17;
              v19[10] = *(unsigned __int8 **)(v9 + 80);
              v19[12] = *(unsigned __int8 **)(v9 + 96);
              v352 = *(unsigned __int8 **)(v9 + 88);
              v9 = (__int64)v19;
              v19[11] = v352;
              a2 = *v19 + 3;
              *v19 = a2;
              v15 = *a2;
              break;
            case -89:
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              if ( v25 >= v22 )
              {
                v416 = (_QWORD *)v9;
                v20 = -999;
              }
              else
              {
                *(_QWORD *)(a6 + 176) = v22;
                v25 = v22;
                v20 = -999;
                v22 = *(unsigned __int8 **)(v9 + 80);
                v416 = (_QWORD *)v9;
              }
              goto LABEL_32;
            case -88:
              if ( *(_DWORD *)(v9 + 112) != -1 )
                goto LABEL_501;
              v375 = *(unsigned __int8 **)(v9 + 120);
              v376 = (unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8);
              if ( v375 == (unsigned __int8 *)-1LL )
                return (unsigned int)-44;
              while ( 1 )
              {
                v377 = &v375[*(_QWORD *)(v8 + 48)];
                v378 = v377 - a4;
                if ( *((_DWORD *)v377 + 13) == (v376 | 0x10000) )
                  break;
                v375 = *(unsigned __int8 **)(v378 + 120);
                if ( v375 == (unsigned __int8 *)-1LL )
                  return (unsigned int)-44;
              }
              *(_DWORD *)(v9 + 116) = v376;
              v407 = v377;
              v379 = (unsigned int)(2 * v376 - 2);
              *(_QWORD *)(v9 + 8 * v379 + 136) = *(_QWORD *)(v378 + 80) - *(_QWORD *)(a6 + 128);
              *(_QWORD *)(v9 + 8 * v379 + 144) = *(_QWORD *)(v9 + 80) - *(_QWORD *)(a6 + 128);
              if ( v379 >= *(_QWORD *)(v9 + 128) )
                *(_QWORD *)(v9 + 128) = v379 + 2;
LABEL_501:
              a2 += byte_239F9C0[*a2];
              *(_QWORD *)v9 = a2;
              v15 = *a2;
              break;
            case -87:
              v178 = (__int64)(a2 + 1);
              *(_QWORD *)v9 = a2 + 1;
              do
              {
                v178 += (unsigned __int16)__ROL2__(*(_WORD *)(v178 + 1), 8);
                *(_QWORD *)v9 = v178;
              }
              while ( *(_BYTE *)v178 == 121 );
              goto LABEL_499;
            case -85:
            case -84:
              goto LABEL_331;
            default:
              return (unsigned int)-44;
          }
          continue;
      }
      break;
    }
LABEL_317:
    switch ( v101 )
    {
      case 6:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v277 = 1 - (_DWORD)v22;
        do
        {
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v278 = *(_WORD *)(a6 + 104);
            if ( v278 )
            {
              if ( *(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || (v20 = *(_DWORD *)(a6 + 52)) != 0 )
              {
                *(_DWORD *)(a6 + 40) = 1;
                if ( v278 == 1 )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                return (unsigned int)-2;
              }
              v25 = *(unsigned __int8 **)(a6 + 176);
            }
            else
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
            }
            goto LABEL_32;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 8) != 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          *(_QWORD *)(v9 + 80) = ++v22;
        }
        while ( v99 >= v277 + (int)v22 );
        goto LABEL_393;
      case 7:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v279 = 1 - (_DWORD)v22;
        while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 8) == 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          *(_QWORD *)(v9 + 80) = ++v22;
          if ( v99 < v279 + (int)v22 )
            goto LABEL_393;
        }
        v280 = *(_WORD *)(a6 + 104);
        if ( v280 )
        {
          if ( *(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || (v20 = *(_DWORD *)(a6 + 52)) != 0 )
          {
            *(_DWORD *)(a6 + 40) = 1;
            if ( v280 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          v25 = *(unsigned __int8 **)(a6 + 176);
        }
        else
        {
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
        }
LABEL_32:
        if ( v25 < v22 )
          *(_QWORD *)(a6 + 176) = v22;
        if ( !*(_DWORD *)(v9 + 48) )
          return (unsigned int)v20;
        break;
      case 8:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v275 = 1 - (_DWORD)v22;
        do
        {
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v276 = *(_WORD *)(a6 + 104);
            if ( v276 )
            {
              if ( *(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || (v20 = *(_DWORD *)(a6 + 52)) != 0 )
              {
                *(_DWORD *)(a6 + 40) = 1;
                if ( v276 == 1 )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                return (unsigned int)-2;
              }
              v25 = *(unsigned __int8 **)(a6 + 176);
            }
            else
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
            }
            goto LABEL_32;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 1) != 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          *(_QWORD *)(v9 + 80) = ++v22;
        }
        while ( v99 >= v275 + (int)v22 );
        goto LABEL_393;
      case 9:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v273 = 1 - (_DWORD)v22;
        do
        {
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v274 = *(_WORD *)(a6 + 104);
            if ( v274 )
            {
              if ( *(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || (v20 = *(_DWORD *)(a6 + 52)) != 0 )
              {
                *(_DWORD *)(a6 + 40) = 1;
                if ( v274 == 1 )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                return (unsigned int)-2;
              }
              v25 = *(unsigned __int8 **)(a6 + 176);
            }
            else
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
            }
            goto LABEL_32;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 1) == 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          *(_QWORD *)(v9 + 80) = ++v22;
        }
        while ( v99 >= v273 + (int)v22 );
        goto LABEL_393;
      case 10:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v271 = 1 - (_DWORD)v22;
        do
        {
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v272 = *(_WORD *)(a6 + 104);
            if ( v272 )
            {
              if ( *(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || (v20 = *(_DWORD *)(a6 + 52)) != 0 )
              {
                *(_DWORD *)(a6 + 40) = 1;
                if ( v272 == 1 )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                return (unsigned int)-2;
              }
              v25 = *(unsigned __int8 **)(a6 + 176);
            }
            else
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
            }
            goto LABEL_32;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 0x10) != 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          *(_QWORD *)(v9 + 80) = ++v22;
        }
        while ( v99 >= v271 + (int)v22 );
        goto LABEL_393;
      case 11:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v269 = 1 - (_DWORD)v22;
        while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v22) & 0x10) == 0 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          *(_QWORD *)(v9 + 80) = ++v22;
          if ( v99 < v269 + (int)v22 )
            goto LABEL_393;
        }
        v270 = *(_WORD *)(a6 + 104);
        if ( !v270 )
        {
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
        {
          v20 = *(_DWORD *)(a6 + 52);
          if ( !v20 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            goto LABEL_32;
          }
        }
        *(_DWORD *)(a6 + 40) = 1;
        if ( v270 == 1 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        return (unsigned int)-2;
      case 12:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v261 = 1;
        while ( 1 )
        {
          v266 = *(_QWORD *)(a6 + 144);
          if ( (unsigned __int64)v22 >= v266 )
            break;
          v267 = *(unsigned int *)(a6 + 236);
          if ( (_DWORD)v267 )
          {
            v268 = sub_876D00(v22, v267, v266, a6 + 240, 0);
            v263 = *(unsigned __int8 **)(v9 + 80);
            if ( v268 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v22 = *(unsigned __int8 **)(v9 + 80);
              v20 = 0;
              goto LABEL_32;
            }
          }
          else
          {
            v262 = *(unsigned int *)(a6 + 240);
            v244 = v266 - v262 < (unsigned __int64)v22;
            v263 = v22;
            if ( !v244 && *v22 == *(_BYTE *)(a6 + 244) )
            {
              if ( (_DWORD)v262 == 1 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              if ( v22[1] == *(_BYTE *)(a6 + 245) )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
            }
          }
          v264 = *(_WORD *)(a6 + 104);
          v22 = v263 + 1;
          if ( v264
            && (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144)
            && !*(_DWORD *)(a6 + 236)
            && *(_DWORD *)(a6 + 240) == 2
            && *v263 == *(_BYTE *)(a6 + 244) )
          {
            *(_DWORD *)(a6 + 40) = 1;
            if ( v264 != 1 )
              return (unsigned int)-2;
            v22 = (unsigned __int8 *)(*(_QWORD *)(v9 + 80) + 1LL);
          }
          v265 = *(_DWORD *)(v9 + 56);
          ++v261;
          *(_QWORD *)(v9 + 80) = v22;
          if ( v265 < v261 )
          {
            v99 = v265;
            goto LABEL_393;
          }
        }
        v380 = *(_WORD *)(a6 + 104);
        if ( !v380 )
        {
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
        {
          v20 = *(_DWORD *)(a6 + 52);
          if ( !v20 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            goto LABEL_32;
          }
        }
        *(_DWORD *)(a6 + 40) = 1;
        if ( v380 == 1 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        return (unsigned int)-2;
      case 13:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( *(_QWORD *)(a6 + 144) - (unsigned __int64)v99 >= (unsigned __int64)v22 )
        {
          *(_QWORD *)(v9 + 80) = &v22[v99];
          goto LABEL_393;
        }
        v260 = *(_WORD *)(a6 + 104);
        if ( !v260 )
        {
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
        {
          v20 = *(_DWORD *)(a6 + 52);
          if ( !v20 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            goto LABEL_32;
          }
        }
        *(_DWORD *)(a6 + 40) = 1;
        if ( v260 == 1 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        return (unsigned int)-2;
      case 17:
        v257 = 1;
        while ( 1 )
        {
          v258 = *(unsigned __int8 **)(v9 + 80);
          if ( (unsigned __int64)v258 >= *(_QWORD *)(a6 + 144) )
          {
            v396 = *(_WORD *)(a6 + 104);
            if ( !v396 )
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v22 = *(unsigned __int8 **)(v9 + 80);
              v20 = 0;
              goto LABEL_32;
            }
            if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v258 )
            {
              v20 = *(_DWORD *)(a6 + 52);
              if ( !v20 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v22 = *(unsigned __int8 **)(v9 + 80);
                goto LABEL_32;
              }
            }
            *(_DWORD *)(a6 + 40) = 1;
            if ( v396 == 1 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
              goto LABEL_32;
            }
            return (unsigned int)-2;
          }
          v22 = v258 + 1;
          *(_QWORD *)(v9 + 80) = v258 + 1;
          v259 = *v258;
          if ( *v258 == 13 )
          {
            if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) && v258[1] == 10 )
              *(_QWORD *)(v9 + 80) = v258 + 2;
          }
          else
          {
            if ( v259 > 0xDu )
            {
              if ( v259 != 0x85 )
              {
LABEL_1259:
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
              goto LABEL_752;
            }
            if ( v259 != 10 )
            {
              if ( (unsigned __int8)(v259 - 11) > 1u )
                goto LABEL_1259;
LABEL_752:
              if ( *(_WORD *)(a6 + 106) == 2 )
              {
                v25 = *(unsigned __int8 **)(a6 + 176);
                v20 = 0;
                goto LABEL_32;
              }
            }
          }
          if ( v99 < ++v257 )
          {
LABEL_393:
            v132 = *(_DWORD *)(v9 + 60);
            if ( v132 == v99 )
              goto LABEL_7;
            if ( !v417 )
              goto LABEL_699;
            v133 = *(_DWORD *)(v9 + 64);
            v134 = *(unsigned __int8 **)(v9 + 80);
            *(_QWORD *)(v9 + 8) = v134;
            v135 = v134;
            switch ( v133 )
            {
              case 6:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( (unsigned __int64)v135 < *(_QWORD *)(a6 + 144) )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v135) & 8) == 0 )
                  {
                    *(_QWORD *)(v9 + 80) = ++v135;
                    if ( v135 != &v134[v132 - 1 - v99 + 1] )
                      continue;
                  }
                  goto LABEL_685;
                }
                goto LABEL_832;
              case 7:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( (unsigned __int64)v135 < *(_QWORD *)(a6 + 144) )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v135) & 8) != 0 )
                  {
                    *(_QWORD *)(v9 + 80) = ++v135;
                    if ( v135 != &v134[v132 - 1 - v99 + 1] )
                      continue;
                  }
                  goto LABEL_685;
                }
                goto LABEL_832;
              case 8:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( (unsigned __int64)v135 < *(_QWORD *)(a6 + 144) )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v135) & 1) == 0 )
                  {
                    *(_QWORD *)(v9 + 80) = ++v135;
                    if ( v135 != &v134[v132 - 1 - v99 + 1] )
                      continue;
                  }
                  goto LABEL_685;
                }
                goto LABEL_832;
              case 9:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( (unsigned __int64)v135 < *(_QWORD *)(a6 + 144) )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v135) & 1) != 0 )
                  {
                    *(_QWORD *)(v9 + 80) = ++v135;
                    if ( v135 != &v134[v132 - 1 - v99 + 1] )
                      continue;
                  }
                  goto LABEL_685;
                }
                goto LABEL_832;
              case 10:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( (unsigned __int64)v135 < *(_QWORD *)(a6 + 144) )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v135) & 0x10) == 0 )
                  {
                    *(_QWORD *)(v9 + 80) = ++v135;
                    if ( v135 != &v134[v132 - 1 - v99 + 1] )
                      continue;
                  }
                  goto LABEL_685;
                }
                goto LABEL_832;
              case 11:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( (unsigned __int64)v135 < *(_QWORD *)(a6 + 144) )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + *v135) & 0x10) != 0 )
                  {
                    *(_QWORD *)(v9 + 80) = ++v135;
                    if ( v135 != &v134[v132 - 1 - v99 + 1] )
                      continue;
                  }
                  goto LABEL_685;
                }
                goto LABEL_832;
              case 12:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( 1 )
                {
                  v247 = *(_QWORD *)(a6 + 144);
                  if ( (unsigned __int64)v135 >= v247 )
                    goto LABEL_832;
                  v248 = *(unsigned int *)(a6 + 236);
                  if ( (_DWORD)v248 )
                  {
                    if ( (unsigned int)sub_876D00(v135, v248, v247, a6 + 240, 0) )
                      goto LABEL_685;
                    v245 = *(unsigned __int8 **)(v9 + 80);
                  }
                  else
                  {
                    v243 = *(unsigned int *)(a6 + 240);
                    v244 = v247 - v243 < (unsigned __int64)v135;
                    v245 = v135;
                    if ( !v244
                      && *v135 == *(_BYTE *)(a6 + 244)
                      && ((_DWORD)v243 == 1 || v135[1] == *(_BYTE *)(a6 + 245)) )
                    {
                      goto LABEL_685;
                    }
                  }
                  v246 = *(_WORD *)(a6 + 104);
                  v135 = v245 + 1;
                  if ( v246
                    && (unsigned __int64)v135 >= *(_QWORD *)(a6 + 144)
                    && *(_QWORD *)(a6 + 236) == 0x200000000LL
                    && *v245 == *(_BYTE *)(a6 + 244) )
                  {
                    *(_DWORD *)(a6 + 40) = 1;
                    if ( v246 != 1 )
                      return (unsigned int)-2;
                    v135 = (unsigned __int8 *)(*(_QWORD *)(v9 + 80) + 1LL);
                  }
                  *(_QWORD *)(v9 + 80) = v135;
                  if ( ++v99 >= *(_DWORD *)(v9 + 60) )
                    goto LABEL_685;
                }
              case 13:
              case 14:
                v236 = *(unsigned __int8 **)(a6 + 144);
                v237 = v132 - v99;
                if ( *(_DWORD *)(a6 + 144) - (int)v134 >= (unsigned int)v237 )
                {
                  *(_QWORD *)(v9 + 80) = &v134[v237];
                  goto LABEL_685;
                }
                *(_QWORD *)(v9 + 80) = v236;
                v238 = *(_WORD *)(a6 + 104);
                if ( !v238 )
                  goto LABEL_685;
                if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v236 )
                  goto LABEL_683;
                goto LABEL_684;
              case 17:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( 2 )
                {
                  if ( (unsigned __int64)v134 >= *(_QWORD *)(a6 + 144) )
                  {
                    v384 = *(_WORD *)(a6 + 104);
                    if ( v384 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v134 || *(_DWORD *)(a6 + 52)) )
                    {
                      *(_DWORD *)(a6 + 40) = 1;
                      if ( v384 != 1 )
                        return (unsigned int)-2;
                    }
                  }
                  else
                  {
                    v285 = *v134;
                    if ( v285 == 13 )
                    {
                      *(_QWORD *)(v9 + 80) = v134 + 1;
                      if ( (unsigned __int64)(v134 + 1) >= *(_QWORD *)(a6 + 144) )
                        goto LABEL_685;
                      if ( v134[1] == 10 )
                        *(_QWORD *)(v9 + 80) = v134 + 2;
                    }
                    else
                    {
                      if ( v285 != 10 && (*(_WORD *)(a6 + 106) == 2 || (unsigned int)(v285 - 11) > 1 && v285 != 133) )
                        goto LABEL_685;
                      *(_QWORD *)(v9 + 80) = v134 + 1;
                    }
                    if ( ++v99 < v132 )
                    {
                      v134 = *(unsigned __int8 **)(v9 + 80);
                      continue;
                    }
                  }
                  goto LABEL_685;
                }
              case 18:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( (unsigned __int64)v135 < *(_QWORD *)(a6 + 144) )
                {
                  if ( (*v135 & 0x7F) != 0x20 && *v135 != 9 )
                  {
                    *(_QWORD *)(v9 + 80) = ++v135;
                    if ( v135 != &v134[v132 - 1 - v99 + 1] )
                      continue;
                  }
                  goto LABEL_685;
                }
                goto LABEL_832;
              case 19:
                if ( v99 >= v132 )
                  goto LABEL_685;
                while ( (unsigned __int64)v135 < *(_QWORD *)(a6 + 144) )
                {
                  if ( (*v135 & 0x7F) == 0x20 || *v135 == 9 )
                  {
                    *(_QWORD *)(v9 + 80) = ++v135;
                    if ( v135 != &v134[v132 - 1 - v99 + 1] )
                      continue;
                  }
                  goto LABEL_685;
                }
                goto LABEL_832;
              case 20:
                if ( v99 >= v132 )
                  goto LABEL_685;
                v283 = (__int64)&v134[v132 - 1 - v99 + 1];
                while ( 2 )
                {
                  if ( (unsigned __int64)v135 >= *(_QWORD *)(a6 + 144) )
                    goto LABEL_832;
                  v284 = *v135;
                  if ( *v135 <= 0xDu )
                  {
                    if ( v284 > 9u )
                      goto LABEL_685;
                  }
                  else if ( v284 == 0x85 )
                  {
LABEL_685:
                    if ( v417 != 2 )
                    {
                      v36 = *(unsigned __int8 **)(v9 + 80);
                      v38 = *(unsigned __int8 **)(v9 + 8);
LABEL_687:
                      a2 = *(unsigned __int8 **)v9;
                      if ( v36 == v38 )
                        goto LABEL_118;
LABEL_688:
                      *(_BYTE *)(v9 + 72) = 34;
                      a2 = *(unsigned __int8 **)v9;
                      v29 = (char *)v9;
                      v6 = 0;
                      goto LABEL_320;
                    }
                    goto LABEL_7;
                  }
                  *(_QWORD *)(v9 + 80) = ++v135;
                  if ( v135 == (unsigned __int8 *)v283 )
                    goto LABEL_685;
                  continue;
                }
              case 21:
                if ( v99 >= v132 )
                  goto LABEL_685;
                v281 = (__int64)&v134[v132 - 1 - v99 + 1];
                while ( 2 )
                {
                  if ( (unsigned __int64)v135 < *(_QWORD *)(a6 + 144) )
                  {
                    v282 = *v135;
                    if ( *v135 <= 0xDu )
                    {
                      if ( v282 <= 9u )
                        goto LABEL_685;
                    }
                    else if ( v282 != 0x85 )
                    {
                      goto LABEL_685;
                    }
                    *(_QWORD *)(v9 + 80) = ++v135;
                    if ( v135 == (unsigned __int8 *)v281 )
                      goto LABEL_685;
                    continue;
                  }
                  break;
                }
LABEL_832:
                v238 = *(_WORD *)(a6 + 104);
                if ( v238 )
                {
                  if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v135 )
                  {
LABEL_683:
                    if ( !*(_DWORD *)(a6 + 52) )
                      goto LABEL_685;
                  }
LABEL_684:
                  *(_DWORD *)(a6 + 40) = 1;
                  if ( v238 != 1 )
                    return (unsigned int)-2;
                  goto LABEL_685;
                }
                goto LABEL_685;
              default:
                return (unsigned int)-44;
            }
          }
        }
      case 18:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v255 = 1 - (_DWORD)v22;
        do
        {
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v256 = *(_WORD *)(a6 + 104);
            if ( v256 )
            {
              if ( *(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || (v20 = *(_DWORD *)(a6 + 52)) != 0 )
              {
                *(_DWORD *)(a6 + 40) = 1;
                if ( v256 == 1 )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                return (unsigned int)-2;
              }
              v25 = *(unsigned __int8 **)(a6 + 176);
            }
            else
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
            }
            goto LABEL_32;
          }
          *(_QWORD *)(v9 + 80) = ++v22;
          if ( (*(v22 - 1) & 0x7F) == 0x20 || *(v22 - 1) == 9 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
        }
        while ( v99 >= v255 + (int)v22 );
        goto LABEL_393;
      case 19:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v253 = 1 - (_DWORD)v22;
        do
        {
          if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
          {
            v254 = *(_WORD *)(a6 + 104);
            if ( v254 )
            {
              if ( *(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || (v20 = *(_DWORD *)(a6 + 52)) != 0 )
              {
                *(_DWORD *)(a6 + 40) = 1;
                if ( v254 == 1 )
                {
                  v22 = *(unsigned __int8 **)(v9 + 80);
                  v25 = *(unsigned __int8 **)(a6 + 176);
                  v20 = 0;
                  goto LABEL_32;
                }
                return (unsigned int)-2;
              }
              v25 = *(unsigned __int8 **)(a6 + 176);
            }
            else
            {
              v25 = *(unsigned __int8 **)(a6 + 176);
              v20 = 0;
            }
            goto LABEL_32;
          }
          *(_QWORD *)(v9 + 80) = ++v22;
          if ( (*(v22 - 1) & 0x7F) != 0x20 && *(v22 - 1) != 9 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
        }
        while ( v99 >= v253 + (int)v22 );
        goto LABEL_393;
      case 20:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v251 = 1 - (_DWORD)v22;
        while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
        {
          *(_QWORD *)(v9 + 80) = ++v22;
          v252 = *(v22 - 1);
          if ( v252 <= 0xDu )
          {
            if ( v252 > 9u )
              goto LABEL_725;
          }
          else if ( v252 == 0x85 )
          {
LABEL_725:
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          if ( v99 < v251 + (int)v22 )
            goto LABEL_393;
        }
        v395 = *(_WORD *)(a6 + 104);
        if ( !v395 )
        {
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
        {
          v20 = *(_DWORD *)(a6 + 52);
          if ( !v20 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            goto LABEL_32;
          }
        }
        *(_DWORD *)(a6 + 40) = 1;
        if ( v395 == 1 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        return (unsigned int)-2;
      case 21:
        v22 = *(unsigned __int8 **)(v9 + 80);
        v249 = 1 - (_DWORD)v22;
        while ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
        {
          *(_QWORD *)(v9 + 80) = ++v22;
          v250 = *(v22 - 1);
          if ( v250 <= 0xDu )
          {
            if ( v250 <= 9u )
              goto LABEL_718;
          }
          else if ( v250 != 0x85 )
          {
LABEL_718:
            v25 = *(unsigned __int8 **)(a6 + 176);
            v20 = 0;
            goto LABEL_32;
          }
          if ( v99 < v249 + (int)v22 )
            goto LABEL_393;
        }
        v394 = *(_WORD *)(a6 + 104);
        if ( !v394 )
        {
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        if ( *(_QWORD *)(a6 + 168) >= (unsigned __int64)v22 )
        {
          v20 = *(_DWORD *)(a6 + 52);
          if ( !v20 )
          {
            v25 = *(unsigned __int8 **)(a6 + 176);
            goto LABEL_32;
          }
        }
        *(_DWORD *)(a6 + 40) = 1;
        if ( v394 == 1 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
          v25 = *(unsigned __int8 **)(a6 + 176);
          v20 = 0;
          goto LABEL_32;
        }
        return (unsigned int)-2;
      default:
        return (unsigned int)-44;
    }
    v9 -= *(_QWORD *)(v9 + 32);
    *(_DWORD *)(*(_QWORD *)(a6 + 248) + 104LL) |= 2u;
    switch ( *(_BYTE *)(v9 + 72) )
    {
      case 1:
        if ( v20 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
          goto LABEL_37;
        }
        a2 = *(unsigned __int8 **)(v9 + 8);
        *(_QWORD *)v9 = a2;
LABEL_483:
        v168 = &a2[(unsigned __int16)__ROL2__(*(_WORD *)(a2 + 1), 8)];
        *(_QWORD *)(v9 + 8) = v168;
        a2 += byte_239F9C0[*a2];
        if ( *v168 != 121 )
        {
LABEL_484:
          *(_QWORD *)v9 = a2;
          goto LABEL_118;
        }
        *(_BYTE *)(v9 + 72) = 1;
        v29 = (char *)v9;
        v6 = 0;
LABEL_320:
        v9 += (__int64)a4;
        if ( &a4[v9] < v405 )
          goto LABEL_1002;
        v102 = *(_QWORD *)(v8 + 56);
        v103 = v9 - *(_QWORD *)(v8 + 48);
        if ( v102 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v308 = 2 * v102;
          v309 = *(unsigned int *)(a6 + 24);
          if ( (2 * v102) >> 10 >= v309 )
          {
            if ( v102 >> 10 >= v309 )
              return (unsigned int)-63;
            v383 = (v309 - (v102 >> 10)) << 10;
            if ( (v102 & 0x3FF) != 0 )
              v383 -= 1024 - (*(_DWORD *)(v8 + 56) & 0x3FF);
            v308 = v102 + v383;
          }
          if ( v308 - v103 < (unsigned __int64)a4 )
            return (unsigned int)-63;
          v406 = v308;
          v310 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD))v8)(v308, *(_QWORD *)(v8 + 16));
          if ( !v310 )
            return (unsigned int)-48;
          v311 = (char *)memcpy(v310, *(const void **)(v8 + 48), v103);
          v9 = (__int64)&v311[v103];
          v414 = v311;
          (*(void (__fastcall **)(_QWORD, _QWORD))(v8 + 8))(*(_QWORD *)(v8 + 48), *(_QWORD *)(v8 + 16));
          v29 = (char *)(v9 - (_QWORD)a4);
          *(_QWORD *)(v8 + 48) = v414;
          *(_QWORD *)(v8 + 56) = v406;
          v405 = (unsigned __int8 *)&v414[v406];
LABEL_1002:
          v408 = v29;
          memcpy((void *)(v9 + 80), v29 + 80, n);
          v312 = v408;
          v407 = (unsigned __int8 *)v9;
          *(_DWORD *)(v9 + 48) = *((_DWORD *)v312 + 12) + 1;
          continue;
        }
        if ( v102 != -2 )
          return (unsigned int)-63;
        return (unsigned int)-48;
      case 2:
        if ( v20 == -993 )
        {
          a2 = (unsigned __int8 *)(*(_QWORD *)v9 + (unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)v9 + 1LL), 8));
          if ( *(_QWORD *)(a6 + 200) >= (unsigned __int64)a2 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            goto LABEL_37;
          }
          if ( **(_BYTE **)v9 != 121 && *a2 != 121 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            goto LABEL_37;
          }
        }
        else
        {
          if ( v20 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            goto LABEL_37;
          }
          a2 = (unsigned __int8 *)((unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)v9 + 1LL), 8) + *(_QWORD *)v9);
        }
        *(_QWORD *)v9 = a2;
        v50 = *a2;
        if ( (_BYTE)v50 == 121 )
        {
          v6 = *(_DWORD *)(v9 + 56);
          v29 = (char *)v9;
LABEL_319:
          *(_BYTE *)(v9 + 72) = 2;
          a2 += byte_239F9C0[v50];
          goto LABEL_320;
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        v20 = 0;
        goto LABEL_37;
      case 3:
        if ( v20 != -999 )
        {
          if ( !v20 || v20 == -993 )
          {
            a2 = (unsigned __int8 *)((unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)v9 + 1LL), 8) + *(_QWORD *)v9);
            *(_QWORD *)v9 = a2;
            v62 = *a2;
            if ( (_BYTE)v62 == 121 )
            {
              v6 = *(_DWORD *)(v9 + 56);
              v29 = (char *)v9;
              goto LABEL_1081;
            }
            v22 = *(unsigned __int8 **)(v9 + 80);
            v20 = 0;
          }
          else
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
          goto LABEL_37;
        }
        memcpy((void *)(v9 + 136), v416 + 17, 8LL * v416[16]);
        v178 = *(_QWORD *)v9;
        *(_QWORD *)(v9 + 128) = v416[16];
        *(_QWORD *)(v9 + 96) = v416[12];
        do
        {
          v178 += (unsigned __int16)__ROL2__(*(_WORD *)(v178 + 1), 8);
          *(_QWORD *)v9 = v178;
        }
        while ( *(_BYTE *)v178 == 121 );
        goto LABEL_499;
      case 4:
        if ( v20 == -993 )
          goto LABEL_246;
        if ( v20 >= -992 )
        {
          if ( !v20 )
          {
LABEL_246:
            v44 = (unsigned __int8 *)((unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)v9 + 1LL), 8) + *(_QWORD *)v9);
            *(_QWORD *)v9 = v44;
            v73 = *v44;
            if ( (_BYTE)v73 != 121 )
              goto LABEL_126;
            v6 = *(_DWORD *)(v9 + 56);
            a2 = v44;
            v29 = (char *)v9;
LABEL_248:
            *(_BYTE *)(v9 + 72) = 4;
            a2 += byte_239F9C0[v73];
            goto LABEL_320;
          }
          if ( v20 != 1 )
            goto LABEL_229;
        }
        else if ( v20 != -999 )
        {
          if ( v20 >= -999 && (unsigned int)(v20 + 997) <= 2 )
          {
            v44 = *(unsigned __int8 **)v9;
            do
            {
              v44 += (unsigned __int16)__ROL2__(*(_WORD *)(v44 + 1), 8);
              *(_QWORD *)v9 = v44;
            }
            while ( *v44 == 121 );
            goto LABEL_126;
          }
LABEL_229:
          v22 = *(unsigned __int8 **)(v9 + 80);
          goto LABEL_37;
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        v20 = 0;
        goto LABEL_37;
      case 5:
        if ( v20 == -993 )
          goto LABEL_263;
        if ( v20 >= -992 )
        {
          if ( !v20 )
          {
LABEL_263:
            v45 = (unsigned __int8 *)((unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)(v9 + 8) + 1LL), 8)
                                    + *(_QWORD *)(v9 + 8));
            *(_QWORD *)(v9 + 8) = v45;
            v81 = *v45;
            if ( (_BYTE)v81 == 121 )
            {
              v29 = (char *)v9;
              v82 = **(unsigned __int8 **)v9;
LABEL_690:
              *(_BYTE *)(v9 + 72) = 5;
              v6 = v82 | 0x30000;
              a2 = &v45[byte_239F9C0[v81]];
              goto LABEL_320;
            }
LABEL_114:
            if ( *(_DWORD *)(v9 + 56) )
            {
LABEL_115:
              v45 = *(unsigned __int8 **)v9;
              goto LABEL_116;
            }
LABEL_223:
            v45 = *(unsigned __int8 **)v9;
            do
            {
              v45 += (unsigned __int16)__ROL2__(*(_WORD *)(v45 + 1), 8);
              *(_QWORD *)v9 = v45;
            }
            while ( *v45 == 121 );
LABEL_225:
            v66 = *v45;
LABEL_226:
            v46 = (unsigned __int8 *)byte_239F9C0[v66];
LABEL_117:
            a2 = &v46[(_QWORD)v45];
            v37 = *(_BYTE *)(v9 + 73) == 0x92;
            *(_QWORD *)v9 = a2;
            if ( !v37 )
              goto LABEL_118;
            *(_BYTE *)(v9 + 72) = 35;
            v29 = (char *)v9;
            v6 = 131218;
            goto LABEL_320;
          }
          if ( v20 == 1 )
            goto LABEL_222;
        }
        else
        {
          if ( v20 == -999 )
          {
            memcpy((void *)(v9 + 136), v416 + 17, 8LL * v416[16]);
            *(_QWORD *)(v9 + 128) = v416[16];
LABEL_222:
            if ( !*(_DWORD *)(v9 + 56) )
              goto LABEL_115;
            goto LABEL_223;
          }
          if ( v20 >= -999 && (unsigned int)(v20 + 997) <= 2 )
            goto LABEL_114;
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 6:
        if ( v20 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
          goto LABEL_37;
        }
        a2 = (unsigned __int8 *)(*(_QWORD *)v9 - (unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)v9 + 1LL), 8));
        *(_QWORD *)v9 = a2;
        v15 = *a2;
        goto LABEL_8;
      case 7:
        if ( v20 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
          goto LABEL_37;
        }
        v178 = *(_QWORD *)v9;
        goto LABEL_499;
      case 8:
        if ( v20 != -998 )
        {
          if ( v20 == -993 )
          {
            v44 = (unsigned __int8 *)(*(_QWORD *)v9 + (unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)v9 + 1LL), 8));
            if ( *(_QWORD *)(a6 + 200) >= (unsigned __int64)v44 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              goto LABEL_37;
            }
            if ( **(_BYTE **)v9 != 121 && *v44 != 121 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              goto LABEL_37;
            }
          }
          else
          {
            if ( v20 )
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
              goto LABEL_37;
            }
            v44 = (unsigned __int8 *)((unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)v9 + 1LL), 8) + *(_QWORD *)v9);
          }
          *(_QWORD *)v9 = v44;
          if ( *v44 != 121 )
          {
            if ( *(_DWORD *)(v9 + 60) || *(_DWORD *)(v9 + 64) )
              goto LABEL_126;
            v22 = *(unsigned __int8 **)(v9 + 80);
            v20 = 0;
            goto LABEL_37;
          }
          v84 = *(unsigned __int8 **)(v9 + 80);
          v6 = *(_DWORD *)(v9 + 56);
          v29 = (char *)v9;
LABEL_348:
          *(_QWORD *)(v9 + 8) = v84;
          v117 = *v44;
          *(_BYTE *)(v9 + 72) = 8;
          a2 = &v44[byte_239F9C0[v117]];
          goto LABEL_320;
        }
        *(_DWORD *)(v9 + 60) = 1;
        v84 = *(unsigned __int8 **)(v9 + 80);
        if ( v84 != *(unsigned __int8 **)(v9 + 8) )
        {
          v44 = *(unsigned __int8 **)(v9 + 16);
          v6 = *(_DWORD *)(v9 + 56);
          v29 = (char *)v9;
          *(_QWORD *)v9 = v44;
          goto LABEL_348;
        }
        v44 = *(unsigned __int8 **)v9;
        do
        {
          v44 += (unsigned __int16)__ROL2__(*(_WORD *)(v44 + 1), 8);
          *(_QWORD *)v9 = v44;
        }
        while ( *v44 == 121 );
LABEL_126:
        a2 = v44 + 3;
        *(_QWORD *)v9 = v44 + 3;
        v15 = v44[3];
        goto LABEL_8;
      case 9:
        if ( v20 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
LABEL_37:
          v25 = *(unsigned __int8 **)(a6 + 176);
          goto LABEL_32;
        }
        v178 = *(_QWORD *)(v9 + 8);
        do
        {
          v178 += (unsigned __int16)__ROL2__(*(_WORD *)(v178 + 1), 8);
          *(_QWORD *)(v9 + 8) = v178;
        }
        while ( *(_BYTE *)v178 == 121 );
LABEL_499:
        a2 = (unsigned __int8 *)(v178 + 3);
        *(_QWORD *)v9 = v178 + 3;
        v15 = *(unsigned __int8 *)(v178 + 3);
        goto LABEL_8;
      case 0xA:
        if ( !v20 )
          goto LABEL_276;
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 0xB:
        v42 = *(unsigned __int8 **)(v9 + 8);
        v43 = &v42[(unsigned __int16)__ROL2__(*(_WORD *)(v42 + 1), 8)];
        if ( (unsigned int)(v20 + 997) > 4 )
        {
          if ( v20 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            goto LABEL_37;
          }
        }
        else
        {
          if ( *(_DWORD *)(a6 + 216) != (*(_DWORD *)(v9 + 56) ^ 0x40000) )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            goto LABEL_37;
          }
          if ( v20 != -993 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            v20 = 0;
            goto LABEL_37;
          }
          if ( *(_QWORD *)(a6 + 200) >= (unsigned __int64)v43 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            v20 = 0;
            goto LABEL_37;
          }
          if ( *v42 != 121 && *v43 != 121 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            v20 = 0;
            goto LABEL_37;
          }
        }
        *(_QWORD *)(v9 + 8) = v43;
        v65 = *v43;
        if ( (_BYTE)v65 == 121 )
        {
          v6 = *(_DWORD *)(v9 + 56);
          v29 = (char *)v9;
          goto LABEL_545;
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        v20 = 0;
        goto LABEL_37;
      case 0xC:
        if ( v20 == -994 )
        {
          v72 = sub_877120(*(_QWORD *)v9 + 2LL, *(_QWORD *)(a6 + 208));
          v22 = *(unsigned __int8 **)(v9 + 80);
          if ( !v72 )
          {
            *(_QWORD *)(a6 + 208) = v22;
            v20 = -995;
          }
        }
        else
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
        }
        goto LABEL_37;
      case 0xD:
        if ( !v20 )
        {
          v20 = -997;
          *(_DWORD *)(a6 + 216) = *(_DWORD *)(v9 + 112);
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 0xE:
        if ( !v20 )
        {
          v20 = -996;
          *(_DWORD *)(a6 + 216) = *(_DWORD *)(v9 + 112);
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 0xF:
        if ( !v20 )
        {
          v20 = -996;
          *(_DWORD *)(a6 + 216) = *(_DWORD *)(v9 + 112);
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 0x10:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( !v20 )
        {
          *(_QWORD *)(a6 + 208) = v22;
          v20 = -995;
          *(_DWORD *)(a6 + 216) = *(_DWORD *)(v9 + 112);
          v22 = *(unsigned __int8 **)(v9 + 80);
        }
        goto LABEL_37;
      case 0x11:
        if ( !v20 )
        {
          v20 = -994;
          *(_QWORD *)(a6 + 208) = *(_QWORD *)v9 + 2LL;
          *(_DWORD *)(a6 + 216) = *(_DWORD *)(v9 + 112);
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 0x12:
        if ( !v20 )
        {
          v20 = -993;
          *(_QWORD *)(a6 + 200) = *(_QWORD *)v9;
          *(_DWORD *)(a6 + 216) = *(_DWORD *)(v9 + 112);
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 0x13:
        if ( !v20 )
        {
          v20 = -993;
          *(_QWORD *)(a6 + 200) = *(_QWORD *)v9;
          *(_DWORD *)(a6 + 216) = *(_DWORD *)(v9 + 112);
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 0x14:
        if ( v20 )
        {
          v22 = *(unsigned __int8 **)(v9 + 80);
        }
        else
        {
          v47 = *(_DWORD *)(v9 + 56);
          *(_DWORD *)(v9 + 56) = v47 + 1;
          if ( v47 >= *(_DWORD *)(v9 + 60) )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
          else
          {
            v48 = sub_86F750(*(_QWORD *)(v9 + 40), *(_DWORD *)(v9 + 64), v9, a6, v426);
            if ( !v48 )
            {
              *(_QWORD *)(v9 + 80) += v426[0];
              goto LABEL_1363;
            }
            if ( v48 == 1 )
            {
              v22 = *(unsigned __int8 **)(a6 + 144);
              *(_QWORD *)(v9 + 80) = v22;
            }
            else
            {
              v22 = *(unsigned __int8 **)(v9 + 80);
            }
            if ( (unsigned __int64)v22 >= *(_QWORD *)(a6 + 144) )
            {
              v49 = *(_WORD *)(a6 + 104);
              if ( v49 )
              {
                if ( *(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52) )
                {
                  *(_DWORD *)(a6 + 40) = 1;
                  if ( v49 != 1 )
                    return (unsigned int)-2;
                  v22 = *(unsigned __int8 **)(v9 + 80);
                }
              }
            }
          }
        }
        goto LABEL_37;
      case 0x15:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v22 -= *(_QWORD *)(v9 + 24);
        *(_QWORD *)(v9 + 80) = v22;
        goto LABEL_202;
      case 0x16:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v51 = *(unsigned __int8 **)(v9 + 8);
        if ( v51 != v22 )
        {
          *(_QWORD *)(v9 + 80) = v51;
          v397 = *(_DWORD *)(v9 + 56);
          v398 = *(_DWORD *)(v9 + 60) - 1;
          *(_DWORD *)(v9 + 60) = v398;
          if ( v397 < v398 )
          {
            v399 = *(_QWORD *)(v9 + 40);
            v409 = v8;
            v400 = a6;
            v401 = v426;
            v402 = v397;
            v403 = *(_DWORD *)(v9 + 64);
            do
            {
              ++v402;
              v421 = v401;
              v415 = v400;
              sub_86F750(v399, v403, v9, v400, v401);
              *(_QWORD *)(v9 + 80) += v426[0];
              v400 = v415;
              v401 = v421;
            }
            while ( v398 != v402 );
            v8 = v409;
            a6 = v415;
          }
          goto LABEL_1489;
        }
        v25 = *(unsigned __int8 **)(a6 + 176);
        goto LABEL_32;
      case 0x17:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v56 = *(_DWORD *)(v9 + 56);
        *(_DWORD *)(v9 + 56) = v56 + 1;
        if ( v56 >= *(_DWORD *)(v9 + 60) )
          goto LABEL_37;
        if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
        {
          v79 = *(unsigned __int8 **)(v9 + 16);
          *(_QWORD *)(v9 + 80) = v22 + 1;
          v80 = v79[*v22 >> 3];
          if ( _bittest(&v80, *v22 & 7) )
            goto LABEL_1454;
          ++v22;
        }
        else
        {
          v57 = *(_WORD *)(a6 + 104);
          if ( v57 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
          {
            *(_DWORD *)(a6 + 40) = 1;
            if ( v57 != 1 )
              return (unsigned int)-2;
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
        }
        goto LABEL_37;
      case 0x18:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        *(_QWORD *)(v9 + 80) = --v22;
        goto LABEL_153;
      case 0x19:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v54 = *(_DWORD *)(v9 + 56);
        *(_DWORD *)(v9 + 56) = v54 + 1;
        if ( v54 >= *(_DWORD *)(v9 + 60) )
          goto LABEL_37;
        if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
        {
          v77 = *v22;
          if ( v77 == *(_DWORD *)(v9 + 64) || v77 == *(_DWORD *)(v9 + 68) )
          {
            v29 = (char *)v9;
            *(_QWORD *)(v9 + 80) = v22 + 1;
LABEL_420:
            *(_BYTE *)(v9 + 72) = 25;
            a2 = *(unsigned __int8 **)v9;
            v6 = 0;
            goto LABEL_320;
          }
        }
        else
        {
          v55 = *(_WORD *)(a6 + 104);
          if ( v55 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
          {
            *(_DWORD *)(a6 + 40) = 1;
            if ( v55 != 1 )
              return (unsigned int)-2;
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
        }
        goto LABEL_37;
      case 0x1A:
        v22 = (unsigned __int8 *)(*(_QWORD *)(v9 + 80) - 1LL);
        *(_QWORD *)(v9 + 80) = v22;
        if ( v20 )
          goto LABEL_37;
        a2 = *(unsigned __int8 **)v9;
        goto LABEL_171;
      case 0x1B:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v52 = *(_DWORD *)(v9 + 56);
        *(_DWORD *)(v9 + 56) = v52 + 1;
        if ( v52 >= *(_DWORD *)(v9 + 60) )
          goto LABEL_37;
        if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
        {
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( *(_DWORD *)(v9 + 64) == *v22 )
            goto LABEL_1298;
          ++v22;
        }
        else
        {
          v53 = *(_WORD *)(a6 + 104);
          if ( v53 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
          {
            *(_DWORD *)(a6 + 40) = 1;
            if ( v53 != 1 )
              return (unsigned int)-2;
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
        }
        goto LABEL_37;
      case 0x1C:
        v22 = (unsigned __int8 *)(*(_QWORD *)(v9 + 80) - 1LL);
        *(_QWORD *)(v9 + 80) = v22;
        if ( v20 )
          goto LABEL_37;
        a2 = *(unsigned __int8 **)v9;
        goto LABEL_86;
      case 0x1D:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v34 = *(_DWORD *)(v9 + 56);
        *(_DWORD *)(v9 + 56) = v34 + 1;
        if ( v34 >= *(_DWORD *)(v9 + 60) )
          goto LABEL_37;
        if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
        {
          v78 = *v22;
          if ( *(_DWORD *)(v9 + 64) != v78 && v78 != *(_DWORD *)(v9 + 68) )
          {
            *(_QWORD *)(v9 + 80) = v22 + 1;
            goto LABEL_428;
          }
        }
        else
        {
          v35 = *(_WORD *)(a6 + 104);
          if ( v35 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
          {
            *(_DWORD *)(a6 + 40) = 1;
            if ( v35 != 1 )
              return (unsigned int)-2;
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
        }
        goto LABEL_37;
      case 0x1E:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v33 = v22 - 1;
        a2 = *(unsigned __int8 **)v9;
        *(_QWORD *)(v9 + 80) = v33;
        goto LABEL_62;
      case 0x1F:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v31 = *(_DWORD *)(v9 + 56);
        *(_DWORD *)(v9 + 56) = v31 + 1;
        if ( v31 >= *(_DWORD *)(v9 + 60) )
          goto LABEL_37;
        if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) )
        {
          *(_QWORD *)(v9 + 80) = v22 + 1;
          if ( *(_DWORD *)(v9 + 64) != *v22 )
            goto LABEL_1377;
          ++v22;
        }
        else
        {
          v32 = *(_WORD *)(a6 + 104);
          if ( v32 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
          {
            *(_DWORD *)(a6 + 40) = 1;
            if ( v32 != 1 )
              return (unsigned int)-2;
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
        }
        goto LABEL_37;
      case 0x20:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v30 = v22 - 1;
        a2 = *(unsigned __int8 **)v9;
        *(_QWORD *)(v9 + 80) = v30;
        goto LABEL_51;
      case 0x21:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v39 = *(_DWORD *)(v9 + 56);
        *(_DWORD *)(v9 + 56) = v39 + 1;
        if ( v39 >= *(_DWORD *)(v9 + 60) )
          goto LABEL_37;
        v40 = *(_QWORD *)(a6 + 144);
        if ( (unsigned __int64)v22 >= v40 )
        {
          v41 = *(_WORD *)(a6 + 104);
          if ( v41 && (*(_QWORD *)(a6 + 168) < (unsigned __int64)v22 || *(_DWORD *)(a6 + 52)) )
          {
            *(_DWORD *)(a6 + 40) = 1;
            if ( v41 != 1 )
              return (unsigned int)-2;
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
          goto LABEL_37;
        }
        v74 = *(_DWORD *)(v9 + 64);
        v75 = v22;
        if ( v74 != 12 )
          goto LABEL_250;
        v239 = *(unsigned int *)(a6 + 236);
        if ( (_DWORD)v239 )
        {
          v369 = sub_876D00(v22, v239, v40, a6 + 240, 0);
          v75 = *(unsigned __int8 **)(v9 + 80);
          if ( v369 )
          {
            v22 = *(unsigned __int8 **)(v9 + 80);
            goto LABEL_37;
          }
          v74 = *(_DWORD *)(v9 + 64);
LABEL_250:
          v22 = v75 + 1;
          *(_QWORD *)(v9 + 80) = v75 + 1;
          v76 = *v75;
          switch ( v74 )
          {
            case 6:
              if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + v76) & 8) == 0 )
                goto LABEL_699;
              goto LABEL_37;
            case 7:
              if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + v76) & 8) != 0 )
                goto LABEL_699;
              goto LABEL_37;
            case 8:
              if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + v76) & 1) == 0 )
                goto LABEL_699;
              goto LABEL_37;
            case 9:
              if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + v76) & 1) != 0 )
                goto LABEL_699;
              goto LABEL_37;
            case 10:
              if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + v76) & 0x10) == 0 )
                goto LABEL_699;
              goto LABEL_37;
            case 11:
              if ( (*(_BYTE *)(*(_QWORD *)(a6 + 80) + v76) & 0x10) != 0 )
                goto LABEL_699;
              goto LABEL_37;
            case 12:
              v241 = v75 + 1;
              goto LABEL_694;
            case 13:
            case 14:
              goto LABEL_699;
            case 17:
              if ( (_BYTE)v76 == 13 )
              {
                if ( (unsigned __int64)v22 < *(_QWORD *)(a6 + 144) && v75[1] == 10 )
                  *(_QWORD *)(v9 + 80) = v75 + 2;
                goto LABEL_699;
              }
              if ( (unsigned __int8)v76 > 0xDu )
              {
                if ( (_BYTE)v76 != 0x85 )
                  goto LABEL_37;
              }
              else
              {
                if ( (_BYTE)v76 == 10 )
                  goto LABEL_699;
                if ( (unsigned __int8)(v76 - 11) > 1u )
                  goto LABEL_37;
              }
              if ( *(_WORD *)(a6 + 106) != 2 )
                goto LABEL_699;
              break;
            case 18:
              if ( (v76 & 0x7F) != 0x20 && (_BYTE)v76 != 9 )
                goto LABEL_699;
              goto LABEL_37;
            case 19:
              if ( (v76 & 0x7F) == 0x20 || (_BYTE)v76 == 9 )
                goto LABEL_699;
              goto LABEL_37;
            case 20:
              if ( (unsigned __int8)v76 > 0xDu )
              {
                if ( (_BYTE)v76 != 0x85 )
                  goto LABEL_699;
              }
              else if ( (unsigned __int8)v76 <= 9u )
              {
                goto LABEL_699;
              }
              goto LABEL_37;
            case 21:
              if ( (unsigned __int8)v76 > 0xDu )
              {
                if ( (_BYTE)v76 == 0x85 )
                  goto LABEL_699;
              }
              else if ( (unsigned __int8)v76 > 9u )
              {
                goto LABEL_699;
              }
              goto LABEL_37;
            default:
              return (unsigned int)-44;
          }
        }
        else
        {
          v240 = *(unsigned int *)(a6 + 240);
          if ( v40 - v240 < (unsigned __int64)v22
            || *v22 != *(_BYTE *)(a6 + 244)
            || (_DWORD)v240 != 1 && v22[1] != *(_BYTE *)(a6 + 245) )
          {
            v241 = v22 + 1;
            *(_QWORD *)(v9 + 80) = v22 + 1;
            LOBYTE(v76) = *v22;
LABEL_694:
            v242 = *(_WORD *)(a6 + 104);
            if ( v242 )
            {
              if ( (unsigned __int64)v241 >= *(_QWORD *)(a6 + 144)
                && *(_QWORD *)(a6 + 236) == 0x200000000LL
                && *(_BYTE *)(a6 + 244) == (_BYTE)v76 )
              {
                *(_DWORD *)(a6 + 40) = 1;
                if ( v242 != 1 )
                  return (unsigned int)-2;
              }
            }
LABEL_699:
            *(_BYTE *)(v9 + 72) = 33;
            a2 = *(unsigned __int8 **)v9;
            v29 = (char *)v9;
            v6 = 0;
            goto LABEL_320;
          }
        }
        goto LABEL_37;
      case 0x22:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v36 = v22 - 1;
        v37 = *(_DWORD *)(v9 + 64) == 17;
        v38 = *(unsigned __int8 **)(v9 + 8);
        *(_QWORD *)(v9 + 80) = v22 - 1;
        if ( !v37 || v38 >= v36 )
          goto LABEL_687;
        if ( *(v22 - 1) != 10 || *(v22 - 2) != 13 )
          goto LABEL_688;
        v36 = v22 - 2;
        *(_QWORD *)(v9 + 80) = v22 - 2;
        goto LABEL_687;
      case 0x23:
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 0x24:
        if ( !v20 )
        {
          v20 = -997;
          *(_DWORD *)(a6 + 216) = *(_DWORD *)(v9 + 112);
        }
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      case 0x25:
        v22 = *(unsigned __int8 **)(v9 + 80);
        if ( v20 )
          goto LABEL_37;
        v28 = *(_DWORD *)(v9 + 60);
        *(_DWORD *)(v9 + 60) = v28 - 1;
        if ( *(_DWORD *)(v9 + 56) >= v28 )
          goto LABEL_37;
        v29 = (char *)v9;
        *(_QWORD *)(v9 + 80) = v22 + 1;
        goto LABEL_534;
      case 0x26:
        if ( v20 != -999 )
        {
          if ( !v20 || v20 == -993 )
          {
            v63 = (unsigned __int8 *)((unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)v9 + 1LL), 8) + *(_QWORD *)v9);
            *(_QWORD *)v9 = v63;
            if ( *v63 == 121 )
            {
              *(_DWORD *)(v9 + 60) = 0;
              v6 = *(_DWORD *)(v9 + 56);
              v29 = (char *)v9;
              v333 = 3;
              goto LABEL_1083;
            }
            v64 = *(unsigned __int8 **)(v9 + 8);
            v20 = 0;
            *(_QWORD *)(a6 + 144) = v64;
            *(_QWORD *)(a6 + 152) = &v64[*(_QWORD *)(v9 + 40)];
            *(_DWORD *)(a6 + 220) = *(_DWORD *)(v9 + 64);
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
          else
          {
            v27 = *(unsigned __int8 **)(v9 + 8);
            *(_QWORD *)(a6 + 144) = v27;
            *(_QWORD *)(a6 + 152) = &v27[*(_QWORD *)(v9 + 40)];
            *(_DWORD *)(a6 + 220) = *(_DWORD *)(v9 + 64);
            v22 = *(unsigned __int8 **)(v9 + 80);
          }
          goto LABEL_37;
        }
        memcpy((void *)(v9 + 136), v416 + 17, 8LL * v416[16]);
        *(_QWORD *)(v9 + 128) = v416[16];
        *(_QWORD *)(v9 + 96) = v416[12];
        v370 = *(unsigned __int8 **)(v9 + 8);
        *(_QWORD *)(a6 + 144) = v370;
        *(_QWORD *)(a6 + 152) = &v370[*(_QWORD *)(v9 + 40)];
        *(_DWORD *)(a6 + 220) = *(_DWORD *)(v9 + 64);
        v371 = *(_QWORD *)v9;
        do
        {
          v371 += (unsigned __int16)__ROL2__(*(_WORD *)(v371 + 1), 8);
          *(_QWORD *)v9 = v371;
        }
        while ( *(_BYTE *)v371 == 121 );
        v372 = *(unsigned __int8 **)(v9 + 16);
        a2 = (unsigned __int8 *)(v371 + 3);
        *(_QWORD *)v9 = v371 + 3;
        *(_QWORD *)(v9 + 80) = v372;
        v15 = *(unsigned __int8 *)(v371 + 3);
        goto LABEL_8;
      case 0x27:
        v26 = *(unsigned __int8 **)(v9 + 8);
        *(_QWORD *)(a6 + 144) = v26;
        *(_QWORD *)(a6 + 152) = v26;
        v22 = *(unsigned __int8 **)(v9 + 80);
        goto LABEL_37;
      default:
        return (unsigned int)-44;
    }
  }
}

