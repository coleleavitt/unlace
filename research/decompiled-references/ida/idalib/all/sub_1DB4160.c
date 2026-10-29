void __fastcall sub_1DB4160(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128i a9)
{
  __int64 v9; // r14
  __int64 v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  __int64 v18; // r8
  char *v19; // r9
  __int64 v20; // r12
  _QWORD *v21; // rbx
  _QWORD *v22; // rdx
  int v23; // r12d
  char v24; // al
  __int64 v25; // rbp
  __int64 v26; // rdx
  char *v27; // r13
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rdi
  unsigned int v30; // r15d
  unsigned int v31; // ecx
  char *v32; // rsi
  __int64 v33; // rax
  __m128 *v34; // r15
  __m128 v35; // xmm1
  _QWORD *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rbp
  unsigned __int64 v41; // r13
  unsigned int v42; // edx
  __int64 *v43; // rsi
  __int64 v44; // rdi
  unsigned __int64 v45; // rbx
  char v46; // al
  __int64 v47; // r15
  unsigned __int64 v48; // r13
  unsigned int v49; // edx
  __int64 *v50; // rsi
  __int64 v51; // r8
  unsigned __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdi
  unsigned __int64 v56; // rax
  _QWORD *v57; // rbx
  __m128 v58; // xmm0
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  unsigned __int64 v67; // rax
  _QWORD *v68; // rbp
  int v69; // eax
  __m128i *v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rdx
  int v77; // ebx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rax
  char *v82; // rbx
  __int64 v83; // rcx
  __int64 *v84; // rbx
  int v85; // eax
  int v86; // eax
  __int64 v87; // rsi
  unsigned __int64 v88; // rbx
  __int64 v89; // rbp
  unsigned __int64 v90; // rbx
  _BYTE *v91; // rdi
  __int64 v92; // rbp
  unsigned __int8 v93; // al
  __int64 v94; // rax
  __int64 v95; // r14
  _QWORD *v96; // rax
  char *v97; // rdx
  __int64 *v98; // rax
  _BYTE *v99; // rdi
  int v100; // esi
  int v101; // r9d
  __int64 v102; // rdi
  __int64 v103; // rsi
  __int64 v104; // rdx
  __int64 v105; // rcx
  int v106; // eax
  unsigned __int64 j; // r14
  __int64 v108; // rsi
  __int64 v109; // rax
  __int64 v110; // r13
  __int64 v111; // rax
  _QWORD *v112; // rdi
  __int64 v113; // r13
  __int64 *v114; // rax
  int v115; // r13d
  __int64 v116; // rbp
  __int64 v117; // r15
  int v118; // eax
  __int64 v119; // rsi
  char v120; // r15
  __int64 v121; // rax
  unsigned __int64 (__fastcall *v122)(__int64); // rax
  char v123; // r15
  unsigned __int64 v124; // r13
  int v125; // r14d
  unsigned __int64 (__fastcall *v126)(__int64); // rax
  int v127; // eax
  __int64 v128; // rsi
  __int64 v129; // rcx
  unsigned __int64 v130; // r13
  __int64 v131; // rax
  __int64 v132; // rdx
  void *v133; // rax
  __int64 v134; // rax
  int v135; // esi
  int v136; // r9d
  __int64 v137; // r8
  int v138; // r8d
  int v139; // eax
  __int64 v140; // r8
  __int64 v141; // rcx
  __int64 v142; // rbp
  __int64 v143; // rax
  unsigned __int64 v144; // rdx
  _QWORD *v145; // rcx
  __int64 v146; // r12
  unsigned __int64 v147; // rdx
  __int64 v148; // rax
  unsigned __int64 v149; // rdx
  unsigned __int64 v150; // rax
  _DWORD *v151; // rax
  __int64 v152; // rdi
  int v153; // edx
  unsigned __int64 v154; // rax
  __int64 v155; // r8
  unsigned __int64 v156; // rbx
  __int64 v157; // rax
  unsigned __int64 v158; // rax
  __int64 v159; // rax
  __m128i *v160; // rax
  char *v161; // rdi
  int v162; // r11d
  __int64 v163; // rcx
  __m128i *v164; // rdx
  unsigned __int64 v165; // rsi
  char *v166; // rcx
  char v167; // si
  int v168; // r10d
  __int64 v169; // r15
  char v170; // dl
  unsigned int v171; // esi
  char *v172; // r8
  __int64 v173; // r9
  unsigned __int64 v174; // rax
  __int64 v175; // rax
  __m128i *v176; // rax
  char *v177; // r11
  int v178; // r9d
  __int64 v179; // rcx
  __m128i *v180; // rdx
  unsigned __int64 v181; // rsi
  char *v182; // rcx
  bool v183; // di
  int v184; // r10d
  __int64 v185; // rsi
  bool v186; // dl
  unsigned int v187; // edi
  char *v188; // r8
  __int64 v189; // rbp
  __int64 v190; // rsi
  __m128i *v191; // rcx
  unsigned __int64 v192; // rdi
  int v193; // r8d
  unsigned int v194; // edi
  __int64 v195; // rsi
  __m128i *v196; // rcx
  unsigned __int64 v197; // rdi
  int v198; // r15d
  char *v199; // r8
  int v200; // r9d
  char v201; // al
  __int64 v202; // rcx
  __int64 v203; // r13
  __int64 v204; // rax
  _QWORD *v205; // r15
  __int64 v206; // rax
  _QWORD *v207; // rcx
  __int64 v208; // rax
  _QWORD *v209; // rdx
  __int64 v210; // rdi
  __int64 v211; // rax
  __int64 v212; // rax
  __int64 v213; // rax
  char *v214; // rcx
  __int64 v215; // rsi
  __int64 *v216; // rdx
  char *v217; // rax
  char *v218; // rcx
  char *v219; // rax
  char *v220; // rdx
  __int64 v221; // rsi
  void **v222; // rax
  __int64 v223; // rdi
  __int64 v224; // rax
  __int64 v225; // rax
  unsigned __int64 v226; // r15
  void **v227; // rcx
  __m128i *v228; // r8
  int v229; // esi
  __int64 v230; // rsi
  __int64 v231; // rdx
  __int64 v232; // r9
  __m128i *p_dest; // r10
  __int64 v234; // rdx
  unsigned __int64 v235; // rax
  __int64 v236; // r13
  unsigned __int64 v237; // rdx
  unsigned __int64 v238; // rdx
  __int64 *v239; // r15
  void **v240; // rbx
  __int64 v241; // rbp
  __m128i si128; // xmm7
  int v243; // eax
  char v244; // al
  int v245; // r14d
  unsigned int v246; // eax
  unsigned int v247; // r8d
  __int64 v248; // rdi
  unsigned int v249; // r9d
  __int64 v250; // rcx
  __int64 v251; // r8
  __int64 v252; // r9
  __int64 v253; // r14
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // rax
  unsigned __int64 v257; // rdx
  unsigned __int64 v258; // rcx
  const __m128i *v259; // rdx
  __m128i *v260; // rax
  char v261; // al
  int v262; // eax
  __int64 v263; // rsi
  unsigned int v264; // r8d
  __int64 v265; // rdi
  int v266; // r9d
  char v267; // al
  __int64 v268; // rax
  __int64 v269; // rcx
  unsigned __int64 v270; // rdx
  __int64 v271; // rax
  unsigned __int64 v272; // rdx
  unsigned __int64 v273; // rcx
  const __m128i *v274; // rdx
  __m128i *v275; // rax
  _DWORD *v276; // r13
  int v277; // eax
  unsigned __int64 v278; // rax
  void *v279; // rdi
  __m128 *v280; // rdi
  unsigned __int64 v281; // r14
  __int64 v282; // r13
  void **v283; // r15
  __int64 v284; // rdx
  __int32 v285; // ebp
  char *v286; // rax
  __int64 v287; // r8
  __int64 v288; // rcx
  char *v289; // rdi
  __m128i v290; // xmm6
  __int64 *v291; // rdi
  __int64 v292; // rdx
  int v293; // r8d
  __int64 v294; // rax
  int v295; // r8d
  char *v296; // rax
  char *v297; // rcx
  __m128i v298; // xmm7
  int v299; // r10d
  int v300; // r8d
  unsigned int v301; // r8d
  __m128i *v302; // r13
  signed __int64 v303; // r14
  __int64 v304; // rsi
  unsigned __int64 v305; // r11
  unsigned __int64 v306; // rdx
  __int64 v307; // rcx
  unsigned int v308; // esi
  __int64 v309; // rax
  unsigned __int64 v310; // rsi
  unsigned __int64 v311; // rdx
  __int64 v312; // rax
  __int64 v313; // rdx
  __m128i *v314; // r13
  int v315; // r8d
  int v316; // eax
  unsigned __int64 v317; // r14
  unsigned __int64 v318; // rax
  void *v319; // rdx
  unsigned __int64 v320; // rax
  __int64 v321; // rdx
  __int64 *v322; // r13
  bool v323; // zf
  __int64 v324; // rcx
  unsigned __int64 v325; // rdx
  _QWORD *v326; // rdx
  __int64 v327; // rax
  __int64 v328; // rcx
  __int64 v329; // r8
  unsigned __int64 v330; // rdx
  void *v331; // rdi
  int v332; // r13d
  _DWORD *v333; // rdx
  int v334; // eax
  __int64 v335; // rax
  __int64 v336; // r13
  char v337; // al
  int v338; // eax
  int v339; // edx
  __int64 v340; // rax
  _DWORD *v341; // rdx
  __int64 v342; // r8
  __int64 v343; // r9
  _DWORD *v344; // rcx
  int v345; // eax
  __int64 v346; // rsi
  unsigned __int64 v347; // rax
  _QWORD *v348; // rdi
  __int64 v349; // r13
  __int64 v350; // r13
  unsigned __int64 v351; // rax
  int v352; // esi
  int v353; // r13d
  __int64 v354; // rax
  unsigned __int64 v355; // rdx
  __int64 v356; // r8
  size_t v357; // rsi
  __m128i v358; // xmm7
  size_t v359; // rax
  __m128i *v360; // r15
  __int64 v361; // r14
  unsigned __int64 v362; // rdx
  __int64 i; // rax
  __int64 v364; // rax
  unsigned __int64 v365; // r13
  int v366; // eax
  unsigned __int64 v367; // rax
  int v368; // edx
  char *v369; // r9
  int v370; // r10d
  __int64 v371; // [rsp-10h] [rbp-848h]
  __int64 v374; // [rsp+8h] [rbp-830h]
  unsigned __int64 v375; // [rsp+10h] [rbp-828h] BYREF
  char *v376; // [rsp+18h] [rbp-820h]
  void **v377; // [rsp+20h] [rbp-818h]
  void **v378; // [rsp+28h] [rbp-810h]
  __int64 v379; // [rsp+30h] [rbp-808h]
  char *v380; // [rsp+38h] [rbp-800h]
  __int64 *v381; // [rsp+40h] [rbp-7F8h]
  __int64 v382; // [rsp+48h] [rbp-7F0h]
  __m128 *v383; // [rsp+50h] [rbp-7E8h]
  _QWORD *v384; // [rsp+58h] [rbp-7E0h]
  _QWORD *v385; // [rsp+60h] [rbp-7D8h]
  size_t n; // [rsp+68h] [rbp-7D0h]
  void *v387; // [rsp+70h] [rbp-7C8h]
  __m128 *v388; // [rsp+78h] [rbp-7C0h]
  void **v389; // [rsp+80h] [rbp-7B8h]
  __int64 *v390; // [rsp+88h] [rbp-7B0h]
  __m128 *v391; // [rsp+90h] [rbp-7A8h]
  unsigned __int64 v392; // [rsp+98h] [rbp-7A0h]
  unsigned __int64 v393; // [rsp+A0h] [rbp-798h]
  __m128 *v394; // [rsp+A8h] [rbp-790h]
  unsigned __int64 v395; // [rsp+B0h] [rbp-788h]
  void **v396; // [rsp+B8h] [rbp-780h]
  __int64 v397; // [rsp+C0h] [rbp-778h]
  __int64 v398; // [rsp+C8h] [rbp-770h]
  __int64 *v399; // [rsp+D0h] [rbp-768h]
  __int64 v400; // [rsp+D8h] [rbp-760h]
  char v401[8]; // [rsp+E0h] [rbp-758h] BYREF
  char v402; // [rsp+E8h] [rbp-750h]
  unsigned __int64 v403; // [rsp+F0h] [rbp-748h] BYREF
  _DWORD *v404; // [rsp+F8h] [rbp-740h]
  __int64 v405; // [rsp+118h] [rbp-720h]
  void *v406; // [rsp+130h] [rbp-708h] BYREF
  __int64 v407; // [rsp+138h] [rbp-700h]
  _BYTE v408[32]; // [rsp+140h] [rbp-6F8h] BYREF
  void *v409; // [rsp+160h] [rbp-6D8h] BYREF
  unsigned __int64 v410; // [rsp+168h] [rbp-6D0h]
  __int64 v411; // [rsp+170h] [rbp-6C8h] BYREF
  void *v412; // [rsp+190h] [rbp-6A8h] BYREF
  __m128i v413; // [rsp+198h] [rbp-6A0h]
  char v414; // [rsp+1A8h] [rbp-690h] BYREF
  int v415; // [rsp+1C8h] [rbp-670h]
  char v416; // [rsp+1CCh] [rbp-66Ch]
  void *v417[2]; // [rsp+1D0h] [rbp-668h] BYREF
  __int64 v418; // [rsp+1E0h] [rbp-658h]
  void *v419; // [rsp+220h] [rbp-618h] BYREF
  __int64 v420; // [rsp+228h] [rbp-610h]
  int v421; // [rsp+230h] [rbp-608h]
  char v422; // [rsp+234h] [rbp-604h]
  char v423; // [rsp+238h] [rbp-600h] BYREF
  void *v424; // [rsp+280h] [rbp-5B8h] BYREF
  __int64 v425; // [rsp+288h] [rbp-5B0h]
  __m128i v426; // [rsp+290h] [rbp-5A8h] BYREF
  __int64 v427; // [rsp+2A0h] [rbp-598h]
  int v428; // [rsp+2F0h] [rbp-548h]
  char v429; // [rsp+2F4h] [rbp-544h]
  __m128 v430; // [rsp+300h] [rbp-538h] BYREF
  __int64 v431; // [rsp+310h] [rbp-528h] BYREF
  unsigned int v432; // [rsp+318h] [rbp-520h]
  void *v433; // [rsp+350h] [rbp-4E8h] BYREF
  __int64 v434; // [rsp+358h] [rbp-4E0h]
  __int64 v435; // [rsp+368h] [rbp-4D0h]
  __int16 v436; // [rsp+370h] [rbp-4C8h]
  char v437; // [rsp+372h] [rbp-4C6h]
  __int64 v438; // [rsp+378h] [rbp-4C0h]
  void *src[2]; // [rsp+390h] [rbp-4A8h] BYREF
  __int64 dest; // [rsp+3A0h] [rbp-498h] BYREF
  int v441; // [rsp+3A8h] [rbp-490h]
  __int64 v442; // [rsp+3B0h] [rbp-488h]
  __int64 v443; // [rsp+3B8h] [rbp-480h]
  __int64 v444; // [rsp+3C0h] [rbp-478h]
  __int64 v445; // [rsp+3C8h] [rbp-470h]
  __int64 v446; // [rsp+3D0h] [rbp-468h]
  __int64 v447; // [rsp+3D8h] [rbp-460h]
  int v448; // [rsp+3E0h] [rbp-458h]
  __int64 v449; // [rsp+3E8h] [rbp-450h]
  __int64 v450; // [rsp+3F0h] [rbp-448h]
  __int64 v451; // [rsp+3F8h] [rbp-440h]
  __int64 v452; // [rsp+400h] [rbp-438h]
  __m128i v453; // [rsp+420h] [rbp-418h] BYREF
  _QWORD *v454; // [rsp+430h] [rbp-408h] BYREF
  unsigned __int64 v455; // [rsp+438h] [rbp-400h]
  __int64 v456; // [rsp+440h] [rbp-3F8h]
  __int64 v457; // [rsp+448h] [rbp-3F0h]
  unsigned __int64 v458; // [rsp+450h] [rbp-3E8h] BYREF
  int v459; // [rsp+458h] [rbp-3E0h]
  void *v460; // [rsp+460h] [rbp-3D8h] BYREF
  unsigned __int64 v461; // [rsp+468h] [rbp-3D0h]
  _BYTE v462[96]; // [rsp+470h] [rbp-3C8h] BYREF
  int v463; // [rsp+4D0h] [rbp-368h]
  char v464; // [rsp+4D4h] [rbp-364h]
  __m128 v465; // [rsp+4E0h] [rbp-358h] BYREF
  _BYTE v466[384]; // [rsp+4F0h] [rbp-348h] BYREF
  __m128 v467; // [rsp+670h] [rbp-1C8h] BYREF
  __int64 v468; // [rsp+680h] [rbp-1B8h] BYREF
  __int64 v469; // [rsp+688h] [rbp-1B0h] BYREF
  void *v470[2]; // [rsp+6C8h] [rbp-170h]
  __int64 v471; // [rsp+6D8h] [rbp-160h]
  _QWORD *v472; // [rsp+6E0h] [rbp-158h]
  __m128 v473; // [rsp+6E8h] [rbp-150h]
  __int64 v474; // [rsp+6F8h] [rbp-140h]
  __int64 v475; // [rsp+700h] [rbp-138h]
  __int64 v476; // [rsp+708h] [rbp-130h]
  __int64 v477; // [rsp+710h] [rbp-128h]

  v9 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x46 )
  {
    v53 = *(_QWORD *)(a2 + 48);
    v54 = *(_QWORD *)(v53 + 128);
    if ( v54 )
      goto LABEL_46;
    v142 = *(_QWORD *)(v53 + 104);
    v143 = *(_QWORD *)(v142 + 96);
    v144 = v143 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v143 & 1) == 0 )
    {
      v145 = (_QWORD *)(v143 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v143 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v143 & 2) == 0 )
          goto LABEL_49;
        v146 = v145[2295];
        v147 = v142 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v146 )
        {
          v148 = v145[294];
          v145[304] += 24LL;
          v149 = (v148 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v145[295] >= v149 + 24 && v148 )
          {
            v145[294] = v149 + 24;
            v150 = (v148 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v150 = sub_986170((__int64)(v145 + 294), 24, 24, 3, a5, a6);
            v149 = v150 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v150 = v146;
          v147 = v149 | 4;
          *(_DWORD *)(v150 + 8) = 0;
          *(_QWORD *)(v150 + 16) = v142;
        }
        v144 = v147 & 0xFFFFFFFFFFFFFFFELL;
        v143 = v144 | 1;
        *(_QWORD *)(v142 + 96) = v144 | 1;
      }
    }
    if ( v144 )
    {
      if ( (v144 & 4) != 0 )
      {
        v151 = (_DWORD *)(v143 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v151 )
        {
          v152 = *(_QWORD *)v151;
          v153 = *(_DWORD *)(*(_QWORD *)v151 + 12LL);
          if ( v151[2] != v153 )
          {
            v151[2] = v153;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v152 + 152LL))(v152, v142);
          }
        }
      }
    }
    v54 = *(_QWORD *)(v53 + 128);
    if ( v54 )
    {
LABEL_46:
      v55 = *(_QWORD *)(v54 + 88);
      if ( v55 )
      {
        v56 = sub_B97230(v55);
        if ( v56 )
          v9 = v56;
      }
    }
LABEL_49:
    v57 = (_QWORD *)(*(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v9 + 16) & 4) != 0 )
      v57 = (_QWORD *)*v57;
    if ( (unsigned __int8)sub_B8E180((unsigned __int64)v57) )
      return;
    v375 = v9;
    v454 = nullptr;
    v58 = _mm_loadh_ps((const double *)&v375);
    v453 = (__m128i)v58;
    v59 = *(_QWORD *)(v9 + 16);
    if ( (v59 & 4) != 0 )
      v60 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v60 = v59 & 0xFFFFFFFFFFFFFFF8LL;
    v455 = v60;
    v456 = *(_QWORD *)(v9 + 48);
    v61 = *(_QWORD *)(a1 + 248) + 17536LL;
    v375 = *(_QWORD *)(a1 + 248);
    v457 = sub_B87960(v61, v9);
    v66 = *(_QWORD *)(v456 + 48);
    if ( v66 )
      v67 = v66 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v67 = sub_A7AA70(*(_QWORD *)(v453.m128i_i64[0] + 248), v456, v62, v63, v64, v65);
    v458 = v67;
    v68 = (_QWORD *)v9;
    v69 = *(_DWORD *)(*(_QWORD *)(v453.m128i_i64[1] + 56) + 20LL);
    v464 = 0;
    v463 = 0;
    v459 = v69 & 0x1FFFFFFF;
    v460 = v462;
    v461 = 0x400000000LL;
    while ( (*(_QWORD *)sub_BC3640(v68) & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)sub_BC3640(v68) & 4) == 0 )
    {
      v68 = (_QWORD *)(*(_QWORD *)sub_BC3640(v68) & 0xFFFFFFFFFFFFFFF8LL);
      v454 = v68;
    }
    if ( !v454 )
      goto LABEL_65;
    v466[0] = 0;
    sub_1DBA4B0((unsigned int)&v467, v453.m128i_i32[0], v9, 0, 0, 0);
    v70 = (__m128i *)v467.m128_u64[0];
    if ( (__int64 *)v467.m128_u64[0] != &v468 )
    {
      if ( v460 != v462 )
      {
        free(v460);
        v70 = (__m128i *)v467.m128_u64[0];
      }
      v460 = v70;
      v461 = v467.m128_u64[1];
      v463 = (int)v472;
      v464 = BYTE4(v472);
      goto LABEL_65;
    }
    v284 = v467.m128_u32[2];
    v285 = v467.m128_i32[2];
    if ( v467.m128_u32[2] <= (unsigned __int64)(unsigned int)v461 )
    {
      v291 = (__int64 *)v467.m128_u64[0];
      if ( v467.m128_i32[2] )
      {
        v296 = (char *)v460;
        v297 = (char *)v460 + 24 * v467.m128_u32[2];
        do
        {
          v298 = _mm_loadu_si128(v70);
          v296 += 24;
          v70 = (__m128i *)((char *)v70 + 24);
          *(__m128i *)(v296 - 24) = v298;
          *((_QWORD *)v296 - 1) = v70[-1].m128i_i64[1];
        }
        while ( v296 != v297 );
        goto LABEL_342;
      }
    }
    else
    {
      if ( v467.m128_u32[2] > (unsigned __int64)HIDWORD(v461) )
      {
        LODWORD(v461) = 0;
        sub_2237220(&v460, v462, v467.m128_u32[2], 24);
        v291 = (__int64 *)v467.m128_u64[0];
        v284 = v467.m128_u32[2];
        v288 = 0;
        v286 = (char *)v460;
        v70 = (__m128i *)v467.m128_u64[0];
      }
      else
      {
        v286 = (char *)v460;
        if ( (_DWORD)v461 )
        {
          v287 = 24LL * (unsigned int)v461;
          v288 = v287;
          v289 = (char *)v460 + v287;
          do
          {
            v290 = _mm_loadu_si128(v70);
            v286 += 24;
            v70 = (__m128i *)((char *)v70 + 24);
            *(__m128i *)(v286 - 24) = v290;
            *((_QWORD *)v286 - 1) = v70[-1].m128i_i64[1];
          }
          while ( v286 != v289 );
          v291 = (__int64 *)v467.m128_u64[0];
          v284 = v467.m128_u32[2];
          v70 = (__m128i *)(v467.m128_u64[0] + v287);
          v286 = (char *)v460 + v287;
        }
        else
        {
          v288 = 0;
          v291 = (__int64 *)v467.m128_u64[0];
        }
      }
      v292 = 3 * v284;
      if ( v70 != (__m128i *)&v291[v292] )
      {
        memcpy(v286, v70, v292 * 8 - v288);
LABEL_342:
        v291 = (__int64 *)v467.m128_u64[0];
      }
    }
    LODWORD(v461) = v285;
    v467.m128_i32[2] = 0;
    v463 = (int)v472;
    v464 = BYTE4(v472);
    if ( v291 != &v468 )
      free(v291);
LABEL_65:
    if ( (unsigned __int8)sub_1E63330(a1, a3, v458, 1, 0) )
      goto LABEL_120;
    v75 = sub_B94670((unsigned __int64)v57, v457, v71, v72, v73, v74);
    if ( v75 )
    {
      while ( 1 )
      {
        v76 = v75 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v75 & 4) == 0 )
          break;
        if ( !v76 )
          goto LABEL_71;
        if ( (*(_BYTE *)(*(_QWORD *)v76 + 29LL) & 2) != 0 )
          goto LABEL_120;
        v75 = *(_QWORD *)(v76 + 8);
        if ( !v75 )
          goto LABEL_71;
      }
      if ( (*(_BYTE *)(v76 + 29) & 2) != 0 )
      {
LABEL_120:
        v99 = v460;
        if ( v460 == v462 )
          return;
        goto LABEL_121;
      }
    }
LABEL_71:
    v77 = *(_DWORD *)(a1 + 12632);
    v376 = v401;
    *(_DWORD *)(a1 + 12632) = 0;
    LODWORD(v375) = v77;
    sub_1DC37C0(v401, a1, a3, v9, 0);
    LOBYTE(v378) = v402;
    if ( v402 )
    {
      sub_1DBADA0(v376);
      *(_DWORD *)(a1 + 12632) = v375;
      goto LABEL_120;
    }
    v80 = (__int64)v454;
    if ( !v454 )
      v80 = v453.m128i_i64[1];
    v81 = *(_QWORD *)(v80 + 48);
    v420 = 8;
    v421 = 0;
    v82 = *(char **)(a1 + 544);
    v422 = 1;
    if ( v81 )
      v81 += 64;
    v83 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 9944) = 0;
    v380 = v82;
    v84 = *(__int64 **)(a1 + 512);
    *(_QWORD *)(a1 + 544) = v81;
    v85 = *(_DWORD *)(a1 + 40);
    v381 = v84;
    LODWORD(v84) = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v85;
    v86 = *(_DWORD *)(a1 + 3688);
    *(_QWORD *)(a1 + 512) = 0;
    LODWORD(v383) = (_DWORD)v84;
    LODWORD(v84) = *(_DWORD *)(a1 + 2632);
    *(_DWORD *)(a1 + 2632) = v86;
    v87 = *(_QWORD *)(v80 + 48);
    v377 = &v419;
    LODWORD(v384) = (_DWORD)v84;
    v405 = v83;
    v419 = &v423;
    v88 = sub_1A3D890(a1, v87, v80, v83, v78, v79);
    if ( !v88 )
    {
LABEL_364:
      sub_1D821F0(v453.m128i_i64, nullptr, 0);
LABEL_95:
      v98 = sub_1D821F0(v453.m128i_i64, (__int64 *)&v458, 1);
      *(_BYTE *)(v98[6] + 85) = *(_BYTE *)(v98[6] + 85) & 0xFC | 1;
      if ( v380 )
      {
        *(_QWORD *)(a1 + 544) = v380;
        *(_QWORD *)(a1 + 512) = v381;
        *(_QWORD *)(a1 + 9944) = v405;
        *(_DWORD *)(a1 + 80) = (_DWORD)v383;
        *(_DWORD *)(a1 + 2632) = (_DWORD)v384;
      }
      if ( !v422 )
        free(v419);
      sub_1DBADA0(v376);
      v99 = v460;
      *(_DWORD *)(a1 + 12632) = v375;
      if ( v99 == v462 )
        return;
LABEL_121:
      free(v99);
      return;
    }
    v388 = &v465;
    v385 = v466;
    while ( 1 )
    {
      v89 = v88;
      v90 = v88 & 0xFFFFFFFFFFFFFFF8LL;
      v91 = (_BYTE *)v90;
      v92 = (v89 >> 2) & 1;
      if ( (_DWORD)v92 )
      {
        v91 = nullptr;
        if ( v90 )
          v91 = *(_BYTE **)v90;
      }
      v93 = v91[28] & 0x7F;
      if ( (unsigned int)v93 - 53 <= 1 || ((v93 + 52) & 0x7Fu) <= 1 )
        v91 = (_BYTE *)sub_B72ED0((__int64)v91);
      if ( (char)v91[28] < 0 || (v91[29] & 2) != 0 )
        goto LABEL_91;
      v94 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v91 + 32LL))(v91);
      v95 = v94;
      if ( v422 )
      {
        v96 = v419;
        v97 = (char *)v419 + 8 * HIDWORD(v420);
        if ( v419 != v97 )
        {
          while ( v95 != *v96 )
          {
            if ( v97 == (char *)++v96 )
              goto LABEL_231;
          }
          goto LABEL_91;
        }
      }
      else
      {
        v87 = v94;
        if ( sub_2236570(v377, v94) )
          goto LABEL_91;
      }
LABEL_231:
      v201 = *(_BYTE *)(v95 + 28) & 0x7F;
      if ( v201 == 71 )
      {
        v202 = *(_QWORD *)(v95 + 48);
        v374 = v202;
        if ( !v202 )
          goto LABEL_91;
        LOBYTE(v379) = *(_BYTE *)(v202 + 28);
        if ( (v379 & 0x7F) != 0x26 )
          goto LABEL_91;
        v379 = v202;
        v203 = v95;
        v204 = v202;
      }
      else
      {
        if ( v201 != 38 )
          goto LABEL_91;
        v379 = v95;
        if ( (unsigned __int8)sub_B77A80(v95) )
          goto LABEL_91;
        v374 = v95;
        v203 = 0;
        v204 = v95;
      }
      v205 = *(_QWORD **)(v204 + 120);
      v206 = (unsigned int)sub_B76070(v379, v87, (__int64)v97, v202);
      v207 = &v205[v206];
      v208 = (v206 * 8) >> 5;
      if ( v208 )
      {
        if ( *v205 && (*(_BYTE *)(*v205 + 97LL) & 6) != 2 )
        {
          v87 = v205[1];
          v209 = v205 + 1;
          if ( v87 )
          {
            v210 = (__int64)&v205[4 * v208 - 3];
            while ( (*(_BYTE *)(v87 + 97) & 6) != 2 )
            {
              v211 = v209[1];
              v205 = v209 + 1;
              if ( v211 )
              {
                if ( (*(_BYTE *)(v211 + 97) & 6) != 2 )
                {
                  v212 = v209[2];
                  v205 = v209 + 2;
                  if ( v212 )
                  {
                    if ( (*(_BYTE *)(v212 + 97) & 6) != 2 )
                    {
                      v205 = v209 + 3;
                      if ( v209 == (_QWORD *)v210 )
                        goto LABEL_485;
                      v213 = v209[3];
                      if ( v213 )
                      {
                        if ( (*(_BYTE *)(v213 + 97) & 6) != 2 )
                        {
                          v87 = v209[4];
                          v205 = v209 + 4;
                          v209 += 4;
                          if ( v87 )
                            continue;
                        }
                      }
                    }
                  }
                }
              }
              goto LABEL_249;
            }
          }
          v205 = v209;
        }
        goto LABEL_249;
      }
LABEL_485:
      v364 = v207 - v205;
      if ( v364 == 2 )
        goto LABEL_514;
      if ( v364 != 3 )
      {
        if ( v364 != 1 )
          goto LABEL_250;
LABEL_488:
        if ( *v205 && (*(_BYTE *)(*v205 + 97LL) & 6) != 2 )
        {
LABEL_250:
          if ( v422 )
          {
            v214 = (char *)v419;
            v215 = 8LL * HIDWORD(v420);
            v216 = (__int64 *)((char *)v419 + v215);
            if ( v419 != (char *)v419 + v215 )
            {
              v217 = (char *)v419;
              if ( v95 == *(_QWORD *)v419 )
              {
LABEL_258:
                v218 = &v214[8 * HIDWORD(v420)];
                goto LABEL_259;
              }
              while ( 1 )
              {
                v217 += 8;
                if ( v216 == (__int64 *)v217 )
                  break;
                if ( v95 == *(_QWORD *)v217 )
                  goto LABEL_258;
              }
            }
            if ( HIDWORD(v420) < (unsigned int)v420 )
            {
              ++HIDWORD(v420);
              *v216 = v95;
              v214 = (char *)v419;
              v217 = (char *)v419 + v215;
              goto LABEL_258;
            }
          }
          v217 = (char *)sub_2236760(v377, v95);
          v214 = (char *)v419;
          if ( v422 )
            goto LABEL_258;
          v218 = (char *)v419 + 8 * (unsigned int)v420;
LABEL_259:
          if ( v218 != v217 && *(_QWORD *)v217 >= 0xFFFFFFFFFFFFFFFELL )
          {
            v219 = v217 + 8;
            do
            {
              v220 = v219;
              if ( v218 == v219 )
                break;
              v219 += 8;
            }
            while ( *(_QWORD *)v220 >= 0xFFFFFFFFFFFFFFFELL );
          }
          v221 = v453.m128i_i64[0];
          v430.m128_u64[1] = 1;
          v465.m128_u64[0] = (unsigned __int64)v385;
          v430.m128_u64[0] = v453.m128i_i64[0];
          v465.m128_u64[1] = 0x1000000000LL;
          v391 = &v430;
          v222 = (void **)&v431;
          do
          {
            *v222 = (void *)-4096LL;
            v222 += 2;
          }
          while ( v222 != &v433 );
          v223 = v453.m128i_i64[0];
          v433 = &v391[6];
          v434 = 0x100000000LL;
          v224 = *(_QWORD *)(v221 + 11280);
          v437 = 0;
          v435 = v224;
          v436 = 0;
          v438 = 0;
          *(_QWORD *)(v221 + 11280) = v391;
          v225 = sub_1CB4710(v223, v453.m128i_i64[1]);
          v392 = 0;
          v226 = v225;
          v394 = &v467;
          v467.m128_u64[0] = (unsigned __int64)&v468;
          v467.m128_u64[1] = 0x1000000000LL;
          if ( (*(_BYTE *)(v225 + 23) & 0x40) != 0 )
            v392 = *(_QWORD *)(v225 + 8LL * (*(_DWORD *)(v225 + 20) & 0x1FFFFFFF) + 24);
          if ( v203 )
          {
            v227 = *(void ***)(v203 + 56);
            v228 = (__m128i *)(v225 + 24);
            src[1] = (void *)0x1000000000LL;
            v229 = *(_DWORD *)(v225 + 20);
            v389 = v227;
            LODWORD(v227) = *((_DWORD *)v227 + 5);
            v230 = v229 & 0x1FFFFFFF;
            v390 = (__int64 *)src;
            LODWORD(v378) = (_DWORD)v227;
            v231 = ((unsigned int)v227 & 0x1FFFFFFF) + (unsigned int)v230;
            src[0] = &dest;
            if ( (unsigned int)v231 <= 0x10 )
            {
              v232 = 8 * v230;
              p_dest = (__m128i *)&dest;
              v234 = 0;
              v235 = 16;
              v378 = (void **)(v226 + 8 * v230 + 24);
              goto LABEL_271;
            }
            v387 = (void *)(v225 + 24);
            n = (size_t)&dest;
            sub_2237220(v390, &dest, v231, 8);
            v228 = (__m128i *)v387;
            v234 = LODWORD(src[1]);
            v302 = (__m128i *)src[0];
            v232 = 8LL * (*(_DWORD *)(v226 + 20) & 0x1FFFFFFF);
            v303 = 8LL * LODWORD(src[1]);
            v304 = LODWORD(src[1]);
            p_dest = (__m128i *)((char *)src[0] + v303);
            v378 = (void **)(v226 + v232 + 24);
            if ( v303 )
            {
              v305 = v232 >> 3;
              v306 = LODWORD(src[1]) + (v232 >> 3);
              if ( v306 > HIDWORD(src[1]) )
              {
                v357 = n;
                v393 = v232 >> 3;
                n = v232;
                sub_2237220(v390, v357, v306, 8);
                v228 = (__m128i *)v387;
                v232 = n;
                v304 = LODWORD(src[1]);
                v302 = (__m128i *)src[0];
                v305 = v393;
                v303 = 8LL * LODWORD(src[1]);
                p_dest = (__m128i *)((char *)src[0] + v303);
              }
              v307 = v303 >> 3;
              if ( v305 <= v303 >> 3 )
              {
                v359 = v232;
                n = v303 - v232;
                v360 = (__m128i *)((char *)v302 + v303 - v232);
                v361 = v232 >> 3;
                v362 = (v232 >> 3) + v304;
                if ( v362 > HIDWORD(src[1]) )
                {
                  v396 = (void **)v228;
                  v395 = v232;
                  v393 = (unsigned __int64)p_dest;
                  v387 = (void *)v232;
                  sub_2237220(v390, v390 + 2, v362, 8);
                  v304 = LODWORD(src[1]);
                  v228 = (__m128i *)v396;
                  v359 = v395;
                  p_dest = (__m128i *)v393;
                  v232 = (__int64)v387;
                }
                if ( v360 != p_dest )
                {
                  v393 = (unsigned __int64)v228;
                  v387 = (void *)v232;
                  memmove((char *)src[0] + 8 * v304, v360, v359);
                  LODWORD(v304) = src[1];
                  v232 = (__int64)v387;
                  v228 = (__m128i *)v393;
                }
                LODWORD(src[1]) = v361 + v304;
                if ( v360 != v302 )
                {
                  v393 = (unsigned __int64)v228;
                  v387 = (void *)v232;
                  memmove(&v302->m128i_i8[v232], v302, n);
                  v228 = (__m128i *)v393;
                  v232 = (__int64)v387;
                }
                if ( v378 != (void **)v228 )
                  memmove(v302, v228, v232);
              }
              else
              {
                v308 = v305 + v304;
                LODWORD(src[1]) = v308;
                if ( v302 != p_dest )
                {
                  v387 = v228;
                  n = (size_t)p_dest;
                  v393 = v303 >> 3;
                  memcpy((char *)v302 + 8 * v308 - v303, v302, v303);
                  v228 = (__m128i *)v387;
                  p_dest = (__m128i *)n;
                  v307 = v393;
                }
                if ( v307 )
                {
                  if ( ((unsigned __int64)v302 >= v226 + 40 || v228 >= &v302[1]) && (unsigned __int64)(v307 - 1) > 3 )
                  {
                    v309 = 0;
                    v310 = 0;
                    v311 = ((unsigned __int64)(v307 - 2) >> 1) + 1;
                    do
                    {
                      ++v310;
                      v302[v309] = _mm_loadu_si128((const __m128i *)(v226 + v309 * 16 + 24));
                      ++v309;
                    }
                    while ( v310 < v311 );
                    v312 = 2 * v311;
                    v313 = v311;
                    v314 = &v302[v313];
                    if ( v307 != v312 )
                      v314->m128i_i64[0] = v228[v313].m128i_i64[0];
                  }
                  else
                  {
                    for ( i = 0; i != v307; ++i )
                      v302->m128i_i64[i] = *(_QWORD *)(v226 + 8 * i + 24);
                  }
                  v228 = (__m128i *)((char *)v228 + v303);
                }
                if ( v378 != (void **)v228 )
                  memcpy(p_dest, v228, (char *)v378 - (char *)v228);
              }
            }
            else
            {
              v235 = HIDWORD(src[1]);
LABEL_271:
              v236 = v232 >> 3;
              v237 = (v232 >> 3) + v234;
              if ( v237 > v235 )
              {
                v387 = v228;
                n = v232;
                sub_2237220(v390, v390 + 2, v237, 8);
                v228 = (__m128i *)v387;
                v232 = n;
                p_dest = (__m128i *)((char *)src[0] + 8 * LODWORD(src[1]));
              }
              if ( v378 != (void **)v228 )
                memcpy(p_dest, v228, v232);
              LODWORD(src[1]) += v236;
            }
            v238 = *((_DWORD *)v389 + 5) & 0x1FFFFFFF;
            if ( v238 > v465.m128_u32[3] )
            {
              sub_2237220(v388, v385, v238, 24);
              v238 = *((_DWORD *)v389 + 5) & 0x1FFFFFFF;
            }
            if ( v467.m128_u32[3] < v238 )
            {
              sub_2237220(v394, &v394[1], v238, 24);
              v238 = *((_DWORD *)v389 + 5) & 0x1FFFFFFF;
            }
            v378 = &v424;
            v239 = (__int64 *)(v389 + 3);
            n = (size_t)&v389[v238 + 3];
            if ( v389 + 3 != (void **)n )
            {
              v395 = (unsigned int)v92;
              v396 = (void **)v90;
              v240 = v378;
              while ( 1 )
              {
                v241 = *v239;
                v417[0] = nullptr;
                v424 = v240 + 2;
                v417[1] = (void *)v467.m128_u64[0];
                si128 = _mm_load_si128((const __m128i *)v417);
                v429 = 1;
                v418 = v467.m128_u32[2];
                v426 = si128;
                v427 = v467.m128_u32[2];
                v425 = 0x400000001LL;
                v428 = 1;
                if ( v454 )
                {
                  v243 = sub_B8D390((__int64)v454);
                  v428 += v243;
                }
                v244 = *(_BYTE *)(v241 + 28) & 0x7F;
                if ( v244 == 67 )
                {
                  v245 = sub_BBE5B0(v241);
                  v246 = sub_BBE590(v241);
                  v87 = v455;
                  v247 = v246;
                  v248 = v453.m128i_i64[0];
                  v249 = v245 + v459;
                  v244 = *(_BYTE *)(v241 + 28) & 0x7F;
                  if ( !v247 )
                    goto LABEL_287;
                }
                else
                {
                  v248 = v453.m128i_i64[0];
                  v87 = v455;
                  if ( v244 == 47 )
                  {
                    v293 = 0;
                    v249 = (*(_WORD *)(v241 + 70) >> 4) + v459;
                    if ( (*(_DWORD *)(v241 + 68) & 0xFFFFF) != 0 )
                    {
                      v247 = (*(_DWORD *)(v241 + 68) & 0xFFFFF) - 1;
LABEL_356:
                      v293 = v247 & 0xFFFFF;
                    }
                    LODWORD(v387) = v293;
                    LODWORD(v393) = v249;
                    v294 = sub_1E02D80(v248, v241, v87, v240);
                    v295 = (int)v387;
                    v253 = v294;
                    v252 = *(_WORD *)(v294 + 70) & 0xF | (unsigned int)(16 * v393);
                    *(_WORD *)(v294 + 70) = *(_WORD *)(v294 + 70) & 0xF | (16 * v393);
                    v251 = *(_DWORD *)(v294 + 68) & 0xFFF00000 | v295;
                    *(_DWORD *)(v294 + 68) = v251;
                    goto LABEL_289;
                  }
                  v249 = (*(_WORD *)(v241 + 66) >> 4) + v459;
                  v247 = *(_DWORD *)(v241 + 64) & 0xFFFFF;
                  if ( !v247 )
                    goto LABEL_380;
                }
                --v247;
LABEL_287:
                if ( v244 != 67 )
                {
                  if ( v244 != 68 )
                    goto LABEL_356;
LABEL_380:
                  LODWORD(v387) = v247;
                  LODWORD(v393) = v249;
                  v253 = sub_1E02D80(v248, v241, v87, v240);
                  v301 = (unsigned int)v387 & 0xFFFFF;
                  v252 = *(_WORD *)(v253 + 66) & 0xF | (unsigned int)(16 * v393);
                  *(_WORD *)(v253 + 66) = *(_WORD *)(v253 + 66) & 0xF | (16 * v393);
                  v251 = *(_DWORD *)(v253 + 64) & 0xFFF00000 | v301;
                  *(_DWORD *)(v253 + 64) = v251;
                  goto LABEL_289;
                }
                v253 = sub_1D82950(v248, v87, v241, (__int64)v240, v247, v249, 1u);
                if ( !v253 )
                {
                  v92 = v395;
                  v90 = (unsigned __int64)v396;
                  goto LABEL_307;
                }
LABEL_289:
                v387 = v417;
                sub_A80DE0((__int64)v417, *(_QWORD *)(v453.m128i_i64[0] + 248), v253, v250, v251, v252);
                v256 = v467.m128_u32[2];
                v257 = v467.m128_u32[2] + 1LL;
                if ( v257 > v467.m128_u32[3] )
                {
                  if ( v467.m128_u64[0] > (unsigned __int64)v417
                    || (v393 = v467.m128_u64[0],
                        (unsigned __int64)v417 >= v467.m128_u64[0] + 24 * (unsigned __int64)v467.m128_u32[2]) )
                  {
                    sub_2237220(v394, &v394[1], v257, 24);
                    v258 = v467.m128_u64[0];
                    v256 = v467.m128_u32[2];
                    v259 = (const __m128i *)v417;
                  }
                  else
                  {
                    sub_2237220(v394, &v394[1], v257, 24);
                    v254 = v393;
                    v258 = v467.m128_u64[0];
                    v256 = v467.m128_u32[2];
                    v259 = (const __m128i *)((char *)v417 + v467.m128_u64[0] - v393);
                  }
                }
                else
                {
                  v258 = v467.m128_u64[0];
                  v259 = (const __m128i *)v417;
                }
                v260 = (__m128i *)(v258 + 24 * v256);
                *v260 = _mm_loadu_si128(v259);
                v260[1].m128i_i64[0] = v259[1].m128i_i64[0];
                ++v467.m128_i32[2];
                if ( !v454 )
                  goto LABEL_295;
                v261 = *(_BYTE *)(v253 + 28) & 0x7F;
                if ( v261 != 67 )
                {
                  v265 = v453.m128i_i64[0];
                  v263 = v455;
                  if ( v261 != 47 )
                  {
                    v266 = *(_WORD *)(v253 + 66) >> 4;
                    v264 = (*(_DWORD *)(v253 + 64) & 0xFFFFF) - v461;
LABEL_410:
                    LODWORD(v397) = v264;
                    LODWORD(v393) = v266;
                    v253 = sub_1E02D80(v265, v253, v263, &v460);
                    v315 = v397 & 0xFFFFF;
                    v316 = *(_WORD *)(v253 + 66) & 0xF;
                    v255 = v316 | (unsigned int)(16 * v393);
                    *(_WORD *)(v253 + 66) = v316 | (16 * v393);
                    v254 = *(_DWORD *)(v253 + 64) & 0xFFF00000 | v315;
                    *(_DWORD *)(v253 + 64) = v254;
                    goto LABEL_295;
                  }
                  v299 = *(unsigned __int16 *)(v253 + 70);
                  LOWORD(v299) = (unsigned __int16)v299 >> 4;
                  v264 = (*(_DWORD *)(v253 + 68) & 0xFFFFF) - v461;
                  goto LABEL_378;
                }
                LODWORD(v393) = sub_BBE5B0(v253);
                v262 = sub_BBE590(v253);
                v263 = v455;
                v264 = v262 - v461;
                v265 = v453.m128i_i64[0];
                v266 = v393;
                v267 = *(_BYTE *)(v253 + 28) & 0x7F;
                if ( v267 != 67 )
                {
                  HIWORD(v299) = WORD1(v393);
                  LOWORD(v299) = v393 & 0xFFF;
                  if ( v267 == 68 )
                    goto LABEL_410;
LABEL_378:
                  LODWORD(v397) = v264;
                  LODWORD(v393) = v299;
                  v253 = sub_1E02D80(v265, v253, v263, &v460);
                  v300 = v397 & 0xFFFFF;
                  *(_WORD *)(v253 + 70) = *(_WORD *)(v253 + 70) & 0xF | (16 * v393);
                  v254 = *(_DWORD *)(v253 + 68) & 0xFFF00000 | v300;
                  *(_DWORD *)(v253 + 68) = v254;
                  goto LABEL_295;
                }
                v253 = sub_1D82950(v453.m128i_i64[0], v455, v253, (__int64)&v460, v264, v393, 0);
LABEL_295:
                v268 = LODWORD(src[1]);
                v269 = HIDWORD(src[1]);
                v270 = LODWORD(src[1]) + 1LL;
                if ( v270 > HIDWORD(src[1]) )
                {
                  sub_2237220(v390, v390 + 2, v270, 8);
                  v268 = LODWORD(src[1]);
                }
                *((_QWORD *)src[0] + v268) = v253;
                ++LODWORD(src[1]);
                sub_A80DE0((__int64)v417, *(_QWORD *)(v453.m128i_i64[0] + 248), v253, v269, v254, v255);
                v271 = v465.m128_u32[2];
                v272 = v465.m128_u32[2] + 1LL;
                if ( v272 > v465.m128_u32[3] )
                {
                  v317 = v465.m128_u64[0];
                  if ( v465.m128_u64[0] > (unsigned __int64)v417
                    || (unsigned __int64)v417 >= v465.m128_u64[0] + 24 * (unsigned __int64)v465.m128_u32[2] )
                  {
                    sub_2237220(v388, v385, v272, 24);
                    v273 = v465.m128_u64[0];
                    v271 = v465.m128_u32[2];
                    v274 = (const __m128i *)v417;
                  }
                  else
                  {
                    sub_2237220(v388, v385, v272, 24);
                    v273 = v465.m128_u64[0];
                    v271 = v465.m128_u32[2];
                    v274 = (const __m128i *)((char *)v417 + v465.m128_u64[0] - v317);
                  }
                }
                else
                {
                  v273 = v465.m128_u64[0];
                  v274 = (const __m128i *)v417;
                }
                v275 = (__m128i *)(v273 + 24 * v271);
                *v275 = _mm_loadu_si128(v274);
                v275[1].m128i_i64[0] = v274[1].m128i_i64[0];
                ++v465.m128_i32[2];
                if ( v424 == v240 + 2 )
                {
                  if ( (__int64 *)n == ++v239 )
                  {
LABEL_301:
                    v92 = v395;
                    v90 = (unsigned __int64)v396;
                    goto LABEL_302;
                  }
                }
                else
                {
                  free(v424);
                  if ( (__int64 *)n == ++v239 )
                    goto LABEL_301;
                }
              }
            }
            v387 = v417;
LABEL_302:
            v276 = nullptr;
            if ( (*((_BYTE *)v389 + 23) & 0x40) != 0 )
            {
              v276 = v389[(*((_DWORD *)v389 + 5) & 0x1FFFFFFF) + 3];
              if ( v276 )
              {
                v428 = 0;
                v429 = 1;
                v417[0] = nullptr;
                v424 = v378 + 2;
                v425 = 0x400000000LL;
                v417[1] = (void *)v467.m128_u64[0];
                v418 = v467.m128_u32[2];
                sub_1D83A10((__int64)v378, (const __m128i *)v387);
                ++v428;
                if ( v454 )
                {
                  v277 = sub_B8D390((__int64)v454);
                  v428 += v277;
                }
                v87 = (__int64)v276;
                v278 = sub_1DCD7F0(v453.m128i_i64[0], v276, v378);
                if ( v278 <= 1 )
                {
LABEL_307:
                  if ( v424 != v378 + 2 )
                    free(v424);
                  v279 = src[0];
                  if ( src[0] != v390 + 2 )
                    goto LABEL_310;
                  goto LABEL_311;
                }
                v276 = (_DWORD *)(v278 & 0xFFFFFFFFFFFFFFFELL);
                if ( v424 != v378 + 2 )
                  free(v424);
              }
            }
            v226 = sub_BC21A0(
                     *(_QWORD **)(v453.m128i_i64[0] + 248),
                     *((_DWORD *)v389 + 2),
                     *((_DWORD *)v389 + 3),
                     (__int64)src[0],
                     LODWORD(src[1]),
                     *((unsigned int *)v389 + 4),
                     v276);
            if ( src[0] != v390 + 2 )
              free(src[0]);
            src[0] = nullptr;
            src[1] = (void *)v465.m128_u64[0];
            v358 = _mm_load_si128((const __m128i *)src);
            v424 = v378 + 2;
            v429 = 1;
            dest = v465.m128_u32[2];
            v426 = v358;
            v427 = v465.m128_u32[2];
            v425 = 0x400000001LL;
            v428 = 1;
          }
          else
          {
            v429 = 1;
            v378 = &v424;
            v424 = &v426;
            v425 = 0x400000000LL;
            v390 = (__int64 *)src;
            v428 = 0;
            v387 = v417;
          }
          v318 = *(_QWORD *)(v374 + 56) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v374 + 56) & 4) != 0 )
            v318 = *(_QWORD *)(v318 + 32);
          v319 = *(void **)v318;
          src[1] = (void *)(v318 + 8);
          src[0] = v319;
          v320 = sub_BF48A0(v390);
          v415 = 0;
          v396 = &v412;
          v322 = (__int64 *)(v321 + 16);
          v412 = &v414;
          v403 = v320;
          v395 = v320;
          v417[0] = (char *)v387 + 16;
          v417[1] = (void *)0x800000000LL;
          v406 = v408;
          v393 = (unsigned __int64)&v409;
          v413 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
          v416 = 0;
          v404 = (_DWORD *)v321;
          v409 = &v411;
          v410 = 0x400000000LL;
          v323 = *(_BYTE *)(v320 + 16) == 25;
          v407 = 0x400000000LL;
          if ( !v323 )
          {
            n = (size_t)&v322[*(unsigned __int16 *)(v320 + 22)];
            if ( v322 != (__int64 *)n )
            {
              v389 = &v460;
              while ( 1 )
              {
                v87 = *v322;
                if ( v454 )
                {
                  v87 = sub_1D9E730(
                          v453.m128i_i64,
                          v87,
                          (__int64)v389,
                          (unsigned __int64)&v406,
                          1,
                          *(double *)v58.m128_u64,
                          a8);
                  if ( !v87 )
                    break;
                }
                v327 = sub_1D9E730(
                         v453.m128i_i64,
                         v87,
                         (__int64)v378,
                         (unsigned __int64)&v406,
                         0,
                         *(double *)v58.m128_u64,
                         a8);
                if ( !v327 )
                  break;
                v328 = (unsigned int)v410;
                v329 = *(_QWORD *)(v327 + 48);
                v330 = (unsigned int)v410 + 1LL;
                if ( v330 > HIDWORD(v410) )
                {
                  v398 = *(_QWORD *)(v327 + 48);
                  v397 = v327;
                  sub_2237220(v393, v393 + 16, v330, 8);
                  v328 = (unsigned int)v410;
                  v329 = v398;
                  v327 = v397;
                }
                *((_QWORD *)v409 + v328) = v329;
                v324 = LODWORD(v417[1]);
                LODWORD(v410) = v410 + 1;
                v325 = LODWORD(v417[1]) + 1LL;
                if ( v325 > HIDWORD(v417[1]) )
                {
                  v397 = v327;
                  sub_2237220(v387, (char *)v387 + 16, v325, 8);
                  v324 = LODWORD(v417[1]);
                  v326 = v417[0];
                  v327 = v397;
                }
                else
                {
                  v326 = v417[0];
                }
                v326[v324] = v327;
                ++v322;
                ++LODWORD(v417[1]);
                if ( (__int64 *)n == v322 )
                  goto LABEL_446;
              }
LABEL_435:
              v331 = v409;
              if ( v409 != (void *)(v393 + 16) )
LABEL_436:
                free(v331);
LABEL_437:
              if ( v406 != v408 )
                free(v406);
              if ( v417[0] != (char *)v387 + 16 )
                free(v417[0]);
              if ( v412 && v412 != v396 + 3 )
                operator delete[](v412);
              v279 = v424;
              if ( v424 != v378 + 2 )
LABEL_310:
                free(v279);
LABEL_311:
              if ( (__m128 *)v467.m128_u64[0] != &v394[1] )
                free((void *)v467.m128_u64[0]);
              v280 = (__m128 *)v433;
              if ( !(_BYTE)v436 )
              {
                if ( (_DWORD)v434 )
                {
                  v281 = 0;
                  v282 = 8LL * (unsigned int)(v434 - 1) + 8;
                  do
                  {
                    v283 = (void **)v280->m128_u64[v281 / 8];
                    if ( v283 )
                    {
                      if ( *v283 != v283 + 2 )
                        free(*v283);
                      v87 = 48;
                      operator delete(v283, 0x30u);
                      v280 = (__m128 *)v433;
                    }
                    v281 += 8LL;
                  }
                  while ( v281 != v282 );
                }
                *(_QWORD *)(v430.m128_u64[0] + 11280) = v435;
                LOBYTE(v436) = 1;
              }
              if ( v280 != &v391[6] )
                free(v280);
              if ( (v430.m128_i8[8] & 1) == 0 )
              {
                v87 = 16LL * v432;
                operator delete(v431, v87, 8);
              }
              if ( (_QWORD *)v465.m128_u64[0] != v385 )
                free((void *)v465.m128_u64[0]);
              LOBYTE(v378) = 1;
              goto LABEL_91;
            }
          }
LABEL_446:
          v332 = v458;
          sub_1EA6140(v396, v458, 4, 4);
          *v333 = *(_DWORD *)(v456 + 24);
          src[1] = nullptr;
          LODWORD(dest) = 0;
          v441 = 0;
          v442 = 0;
          v443 = 0;
          v444 = 0;
          v445 = 0;
          v446 = 0;
          v447 = 0;
          v448 = 0;
          v449 = 0;
          v450 = 0;
          v451 = 0;
          v452 = 0;
          LODWORD(src[0]) &= 0xF0030000;
          BYTE2(src[0]) = ((unsigned __int8)BYTE3(*(_QWORD *)(v395 + 16)) >> 7) | BYTE2(src[0]) & 0xFE | 2;
          n = v453.m128i_i64[0];
          v389 = (void **)&v403;
          v334 = sub_F6CCB0((__int64 *)&v403, v58);
          v335 = sub_1E6A200(n, v332, (_DWORD)v409, v410, v334, v457, (__int64)v390);
          v87 = v371;
          v336 = v335;
          if ( (v335 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            goto LABEL_435;
          v337 = *(_BYTE *)(v335 + 16);
          if ( v337 == 26 )
          {
            v338 = ((*(_BYTE *)(v336 + 19) >> 1) & 0xF) != 0 ? 8 : 0;
            goto LABEL_449;
          }
          v323 = v337 == 25;
          v338 = 0;
          if ( v323 )
            v339 = 0;
          else
LABEL_449:
            v339 = *(unsigned __int16 *)(v336 + 22);
          v340 = sub_1EA6140(v396, v336, 8 * ((unsigned int)(v338 + 8 * v339 + 15) >> 3) + 8, 8);
          v344 = v404;
          *v341 = *v404;
          v341[1] = v344[1];
          v341[2] = v344[2];
          if ( *(_BYTE *)(v340 + 16) == 26 && (*(_BYTE *)(v340 + 19) & 0x1E) != 0 )
            *(_QWORD *)&v341[2 * *(unsigned __int16 *)(v340 + 22) + 4] = 0;
          v341[3] = v344[3];
          if ( *(_BYTE *)(v340 + 16) != 25 )
          {
            v345 = *(unsigned __int16 *)(v340 + 22);
            if ( v345 )
            {
              v346 = 8LL * (unsigned int)(v345 - 1) + 8;
              v347 = 0;
              do
              {
                *(_QWORD *)&v341[v347 / 4 + 4] = *(_QWORD *)((char *)v417[0] + v347);
                v347 += 8LL;
              }
              while ( v346 != v347 );
            }
          }
          if ( v409 != (void *)(v393 + 16) )
            free(v409);
          v348 = *(_QWORD **)(v453.m128i_i64[0] + 248);
          n = v413.m128i_i64[0] - v413.m128i_i64[1];
          v395 = (unsigned __int64)sub_A81BC0(
                                     v348,
                                     v336,
                                     v413.m128i_i32[0] - v413.m128i_i32[2],
                                     v413.m128i_i64[0] - v413.m128i_i64[1],
                                     v342,
                                     v343);
          memcpy((void *)(v395 + 8), (char *)v412 + v413.m128i_i64[1], n);
          v403 = 0;
          LODWORD(v404) = 0;
          v349 = *(_QWORD *)(v374 + 56);
          if ( (v349 & 4) != 0 && (v365 = v349 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(v365 + 40)) )
          {
            LODWORD(v452) = 0;
            BYTE4(v452) = 1;
            v409 = nullptr;
            src[0] = v390 + 2;
            src[1] = (void *)0x400000000LL;
            v410 = v467.m128_u64[0];
            v411 = v467.m128_u32[2];
            sub_1D83A10((__int64)v390, (const __m128i *)v393);
            LODWORD(v452) = v452 + 1;
            if ( v454 )
            {
              v366 = sub_B8D390((__int64)v454);
              LODWORD(v452) = v366 + v452;
            }
            v87 = *(_QWORD *)(v365 + 40);
            v367 = sub_1DCD7F0(v453.m128i_i64[0], v87, v390);
            if ( v367 <= 1 )
            {
              v331 = src[0];
              if ( src[0] != v390 + 2 )
                goto LABEL_436;
              goto LABEL_437;
            }
            v368 = *(_DWORD *)(v365 + 48);
            v403 = v367 & 0xFFFFFFFFFFFFFFFELL;
            LODWORD(v404) = v368;
            if ( src[0] != v390 + 2 )
              free(src[0]);
            if ( v392 )
            {
              if ( v403 )
              {
                v403 = sub_C09F10(
                         *(_QWORD **)(v453.m128i_i64[0] + 248),
                         v392,
                         v403,
                         19,
                         *(_QWORD *)(*(_QWORD *)(v453.m128i_i64[0] + 248) + 18640LL),
                         0,
                         0,
                         *(_DWORD *)(v226 + 8),
                         0);
                goto LABEL_461;
              }
LABEL_498:
              LODWORD(v404) = 0;
              v403 = v392;
            }
          }
          else if ( v392 )
          {
            goto LABEL_498;
          }
LABEL_461:
          v350 = v379;
          v399 = (__int64 *)v406;
          v400 = (unsigned int)v407;
          v351 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v374 + 16LL))(v379);
          v379 = v350;
          v352 = *(_DWORD *)(v374 + 24);
          n = HIDWORD(v351);
          LODWORD(v390) = v352;
          v353 = sub_B73090(v350);
          v354 = sub_B709C0(v379);
          v355 = *(char *)(v354 + 87);
          if ( (v355 & 0x40) != 0 )
            v356 = *(_QWORD *)(v354 + 16LL * ((v355 & 0x20) != 0) + 176);
          else
            v356 = v355 >> 63;
          v87 = v453.m128i_i64[1];
          sub_1D816E0(
            v453.m128i_i64[0],
            v453.m128i_i64[1],
            v226,
            v374,
            v356,
            v395,
            v353,
            (int)v390,
            n,
            1,
            v399,
            v400,
            (__int64)v389);
          goto LABEL_437;
        }
        goto LABEL_249;
      }
      if ( *v205 && (*(_BYTE *)(*v205 + 97LL) & 6) != 2 )
        break;
LABEL_249:
      if ( v207 == v205 )
        goto LABEL_250;
LABEL_91:
      if ( v92 )
      {
        if ( v90 )
        {
          v88 = *(_QWORD *)(v90 + 8);
          if ( v88 )
            continue;
        }
      }
      if ( (_BYTE)v378 )
        goto LABEL_95;
      goto LABEL_364;
    }
    ++v205;
LABEL_514:
    if ( *v205 && (*(_BYTE *)(*v205 + 97LL) & 6) != 2 )
    {
      ++v205;
      goto LABEL_488;
    }
    goto LABEL_249;
  }
  if ( *(char *)(a2 + 28) >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 248);
    sub_1D81F50(&v430, v10, a2, a4, a5);
    v375 = v430.m128_u64[0];
    if ( v430.m128_u64[0] )
    {
      v11 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v11 = (_QWORD *)*v11;
      v376 = (char *)(v10 + 17536);
      v12 = sub_B87960(v10 + 17536, a2);
      src[0] = nullptr;
      src[1] = nullptr;
      LODWORD(dest) = 0;
      v17 = sub_B94670((unsigned __int64)v11, v12, v13, v14, v15, v16);
      if ( v17 )
      {
        while ( 1 )
        {
          v20 = v17;
          v21 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
          v22 = v21;
          v23 = (v20 >> 2) & 1;
          if ( v23 )
          {
            v22 = nullptr;
            if ( v21 )
              v22 = (_QWORD *)*v21;
          }
          v24 = *((_BYTE *)v22 + 28) & 0x7F;
          if ( v24 == 71 )
          {
            v22 = (_QWORD *)v22[6];
            v24 = *((_BYTE *)v22 + 28) & 0x7F;
          }
          if ( v24 != 39 )
            goto LABEL_16;
          v25 = v22[23];
          v26 = (unsigned int)dest;
          v27 = (char *)src[0];
          v28 = v25 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !(_DWORD)dest )
            goto LABEL_166;
          v29 = (unsigned int)(dest - 1);
          v30 = ((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4);
          v31 = v29 & v30;
          v32 = (char *)src[0] + 8 * ((unsigned int)v29 & v30);
          v33 = *(_QWORD *)v32;
          if ( v28 != *(_QWORD *)v32 )
            break;
LABEL_15:
          sub_1847F00(&v467, v32, &v27[8 * v26], (__int64)src, 1);
LABEL_16:
          if ( v23 )
          {
            if ( v21 )
            {
              v17 = v21[1];
              if ( v17 )
                continue;
            }
          }
          goto LABEL_19;
        }
        v138 = 1;
        v19 = nullptr;
        if ( v33 != -4096 )
        {
          while ( 1 )
          {
            if ( !v19 && v33 == -8192 )
              v19 = v32;
            v31 = v29 & (v138 + v31);
            v32 = (char *)src[0] + 8 * v31;
            v33 = *(_QWORD *)v32;
            if ( v28 == *(_QWORD *)v32 )
              goto LABEL_15;
            if ( v33 == -4096 )
              break;
            ++v138;
          }
          if ( v19 )
            v32 = v19;
        }
        v139 = LODWORD(src[1]) + 1;
        v18 = (unsigned int)(4 * (LODWORD(src[1]) + 1));
        if ( (unsigned int)v18 >= 3 * (int)dest )
        {
LABEL_166:
          LODWORD(v377) = dest;
          v158 = (((((((unsigned int)(2 * dest - 1) | ((unsigned __int64)(unsigned int)(2 * dest - 1) >> 1)) >> 2)
                   | (unsigned int)(2 * dest - 1)
                   | ((unsigned __int64)(unsigned int)(2 * dest - 1) >> 1)) >> 4)
                 | (((unsigned int)(2 * dest - 1) | ((unsigned __int64)(unsigned int)(2 * dest - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * dest - 1)
                 | ((unsigned __int64)(unsigned int)(2 * dest - 1) >> 1)) >> 8)
               | (((((unsigned int)(2 * dest - 1) | ((unsigned __int64)(unsigned int)(2 * dest - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * dest - 1)
                 | ((unsigned __int64)(unsigned int)(2 * dest - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * dest - 1) | ((unsigned __int64)(unsigned int)(2 * dest - 1) >> 1)) >> 2)
               | (unsigned int)(2 * dest - 1)
               | ((unsigned __int64)(unsigned int)(2 * dest - 1) >> 1);
          v159 = ((v158 >> 16) | v158) + 1;
          if ( (unsigned int)v159 < 0x40 )
            LODWORD(v159) = 64;
          LODWORD(dest) = v159;
          v160 = (__m128i *)sub_22300B0(8LL * (unsigned int)v159, 8, v26, 64, v18, v19);
          src[0] = v160;
          if ( v27 )
          {
            src[1] = nullptr;
            v378 = (void **)(8LL * (unsigned int)v377);
            v161 = (char *)v378 + (_QWORD)v27;
            v162 = dest;
            v163 = 8LL * (unsigned int)dest;
            if ( v160 != (__m128i *)&v160->m128i_i8[v163] )
            {
              v164 = v160;
              v165 = ((unsigned __int64)(v163 - 8) >> 3) + 1;
              if ( v163 == 8 )
                goto LABEL_173;
              do
              {
                a9 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
                ++v164;
                v164[-1] = a9;
              }
              while ( &v160[v165 >> 1] != v164 );
              v164 = (__m128i *)((char *)v160 + 8 * (v165 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v165 & 0xFFFFFFFFFFFFFFFELL) != v165 )
LABEL_173:
                v164->m128i_i64[0] = -4096;
            }
            v166 = v27;
            v167 = 0;
            v168 = 0;
            LODWORD(v377) = v162 - 1;
            if ( v27 != v161 )
            {
              do
              {
                v169 = *(_QWORD *)v166;
                v170 = *(_QWORD *)v166 != -8192 && *(_QWORD *)v166 != -4096;
                if ( v170 )
                {
                  if ( !v162 )
                  {
                    *(_QWORD *)&dword_0 = *(_QWORD *)v166;
                    BUG();
                  }
                  v171 = (unsigned int)v377 & (((unsigned int)v169 >> 9) ^ ((unsigned int)v169 >> 4));
                  v172 = &v160->m128i_i8[8 * v171];
                  v173 = *(_QWORD *)v172;
                  if ( v169 != *(_QWORD *)v172 && v173 != -4096 )
                  {
                    LODWORD(v380) = 1;
                    v379 = 0;
                    LOBYTE(v383) = v170;
                    do
                    {
                      if ( !v379 )
                      {
                        if ( v173 != -8192 )
                          v172 = (char *)v379;
                        v379 = (__int64)v172;
                      }
                      v171 = (unsigned int)v377 & ((_DWORD)v380 + v171);
                      LODWORD(v380) = (_DWORD)v380 + 1;
                      v172 = &v160->m128i_i8[8 * v171];
                      v173 = *(_QWORD *)v172;
                      if ( v169 == *(_QWORD *)v172 )
                      {
                        v170 = (char)v383;
                        goto LABEL_180;
                      }
                    }
                    while ( v173 != -4096 );
                    v170 = (char)v383;
                    if ( v379 )
                      v172 = (char *)v379;
                  }
LABEL_180:
                  *(_QWORD *)v172 = v169;
                  ++v168;
                  v167 = v170;
                }
                v166 += 8;
              }
              while ( v161 != v166 );
              if ( v167 )
                LODWORD(src[1]) = v168;
            }
            operator delete(v27, v378, 8);
            v27 = (char *)src[0];
            v26 = (unsigned int)dest;
            v139 = LODWORD(src[1]) + 1;
          }
          else
          {
            src[1] = nullptr;
            v26 = (unsigned int)dest;
            v190 = 8LL * (unsigned int)dest;
            v27 = &v160->m128i_i8[v190];
            if ( v160 == (__m128i *)&v160->m128i_i8[v190] )
            {
              v139 = 1;
            }
            else
            {
              v191 = v160;
              v192 = ((unsigned __int64)(v190 - 8) >> 3) + 1;
              if ( v190 == 8 )
                goto LABEL_199;
              do
              {
                ++v191;
                v191[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( &v160[v192 >> 1] != v191 );
              v191 = (__m128i *)((char *)v160 + 8 * (v192 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v192 & 0xFFFFFFFFFFFFFFFELL) != v192 )
LABEL_199:
                v191->m128i_i64[0] = -4096;
              v27 = (char *)v160;
              v139 = 1;
            }
          }
          if ( !(_DWORD)v26 )
          {
LABEL_536:
            ++LODWORD(src[1]);
            BUG();
          }
          v193 = v26 - 1;
          v194 = (v26 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
          v32 = &v27[8 * v194];
          v141 = *(_QWORD *)v32;
          if ( v28 == *(_QWORD *)v32 )
            goto LABEL_143;
          if ( v141 != -4096 )
          {
            v369 = &v27[8 * (v193 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4)))];
            v370 = 1;
            v32 = nullptr;
            while ( 1 )
            {
              if ( v141 == -8192 && !v32 )
                v32 = v369;
              v194 = v193 & (v370 + v194);
              v369 = &v27[8 * v194];
              v141 = *(_QWORD *)v369;
              if ( v28 == *(_QWORD *)v369 )
              {
                v32 = &v27[8 * v194];
                goto LABEL_143;
              }
              if ( v141 == -4096 )
                break;
              ++v370;
            }
            if ( v32 )
              goto LABEL_142;
            v32 = &v27[8 * v194];
          }
        }
        else
        {
          v140 = (unsigned int)dest >> 3;
          if ( (int)dest - HIDWORD(src[1]) - v139 > (unsigned int)v140 )
          {
LABEL_142:
            v141 = *(_QWORD *)v32;
LABEL_143:
            LODWORD(src[1]) = v139;
            if ( v141 != -4096 )
              --HIDWORD(src[1]);
            goto LABEL_145;
          }
          LODWORD(v377) = dest;
          v174 = (((v29 >> 1) | v29 | (((v29 >> 1) | v29) >> 2)) >> 4) | (v29 >> 1) | v29 | (((v29 >> 1) | v29) >> 2);
          v175 = ((((v174 >> 8) | v174) >> 16) | (v174 >> 8) | v174) + 1;
          if ( (unsigned int)v175 < 0x40 )
            LODWORD(v175) = 64;
          LODWORD(dest) = v175;
          v176 = (__m128i *)sub_22300B0(8LL * (unsigned int)v175, 8, v26, 64, v140, v19);
          src[0] = v176;
          if ( v27 )
          {
            src[1] = nullptr;
            v378 = (void **)(8LL * (unsigned int)v377);
            v177 = (char *)v378 + (_QWORD)v27;
            v178 = dest;
            v179 = 8LL * (unsigned int)dest;
            if ( v176 != (__m128i *)&v176->m128i_i8[v179] )
            {
              v180 = v176;
              v181 = ((unsigned __int64)(v179 - 8) >> 3) + 1;
              if ( v179 == 8 )
                goto LABEL_188;
              do
              {
                ++v180;
                v180[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( &v176[v181 >> 1] != v180 );
              v180 = (__m128i *)((char *)v176 + 8 * (v181 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v181 & 0xFFFFFFFFFFFFFFFELL) != v181 )
LABEL_188:
                v180->m128i_i64[0] = -4096;
            }
            v182 = v27;
            v183 = 0;
            v184 = 0;
            LODWORD(v377) = v178 - 1;
            v379 = v28;
            do
            {
              v185 = *(_QWORD *)v182;
              v186 = *(_QWORD *)v182 != -4096 && *(_QWORD *)v182 != -8192;
              if ( v186 )
              {
                if ( !v178 )
                {
                  *(_QWORD *)&dword_0 = *(_QWORD *)v182;
                  BUG();
                }
                v187 = (unsigned int)v377 & (((unsigned int)v185 >> 9) ^ ((unsigned int)v185 >> 4));
                v188 = &v176->m128i_i8[8 * v187];
                v189 = *(_QWORD *)v188;
                if ( *(_QWORD *)v188 != v185 && v189 != -4096 )
                {
                  LODWORD(v383) = 1;
                  v380 = nullptr;
                  LOBYTE(v384) = v186;
                  do
                  {
                    if ( v189 == -8192 )
                    {
                      if ( v380 )
                        v188 = v380;
                      v380 = v188;
                    }
                    v187 = (unsigned int)v377 & ((_DWORD)v383 + v187);
                    LODWORD(v383) = (_DWORD)v383 + 1;
                    v188 = &v176->m128i_i8[8 * v187];
                    v189 = *(_QWORD *)v188;
                    if ( v185 == *(_QWORD *)v188 )
                    {
                      v186 = (char)v384;
                      goto LABEL_194;
                    }
                  }
                  while ( v189 != -4096 );
                  v186 = (char)v384;
                  if ( v380 )
                    v188 = v380;
                }
LABEL_194:
                *(_QWORD *)v188 = v185;
                ++v184;
                v183 = v186;
              }
              v182 += 8;
            }
            while ( v177 != v182 );
            v28 = v379;
            if ( v183 )
              LODWORD(src[1]) = v184;
            operator delete(v27, v378, 8);
            v27 = (char *)src[0];
            v26 = (unsigned int)dest;
            v139 = LODWORD(src[1]) + 1;
          }
          else
          {
            src[1] = nullptr;
            v26 = (unsigned int)dest;
            v195 = 8LL * (unsigned int)dest;
            v27 = &v176->m128i_i8[v195];
            if ( v176 == (__m128i *)&v176->m128i_i8[v195] )
            {
              v139 = 1;
            }
            else
            {
              v196 = v176;
              v197 = ((unsigned __int64)(v195 - 8) >> 3) + 1;
              if ( v195 == 8 )
                goto LABEL_209;
              do
              {
                ++v196;
                v196[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( &v176[v197 >> 1] != v196 );
              v196 = (__m128i *)((char *)v176 + 8 * (v197 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v197 & 0xFFFFFFFFFFFFFFFELL) != v197 )
LABEL_209:
                v196->m128i_i64[0] = -4096;
              v27 = (char *)v176;
              v139 = 1;
            }
          }
          if ( !(_DWORD)v26 )
            goto LABEL_536;
          v198 = (v26 - 1) & v30;
          v32 = &v27[8 * v198];
          v141 = *(_QWORD *)v32;
          if ( v28 == *(_QWORD *)v32 )
            goto LABEL_143;
          if ( v141 != -4096 )
          {
            v199 = &v27[8 * v198];
            v200 = 1;
            v32 = nullptr;
            while ( 1 )
            {
              if ( v141 == -8192 && !v32 )
                v32 = v199;
              v198 = (v26 - 1) & (v200 + v198);
              v199 = &v27[8 * v198];
              v141 = *(_QWORD *)v199;
              if ( v28 == *(_QWORD *)v199 )
              {
                v32 = &v27[8 * v198];
                goto LABEL_143;
              }
              if ( v141 == -4096 )
                break;
              ++v200;
            }
            if ( v32 )
              goto LABEL_142;
            v32 = &v27[8 * v198];
          }
        }
        LODWORD(src[1]) = v139;
LABEL_145:
        *(_QWORD *)v32 = v28;
        goto LABEL_15;
      }
LABEL_19:
      v34 = &v467;
      v453.m128i_i64[0] = sub_B87960((__int64)v376, v375);
      v453.m128i_i32[2] = a3;
      sub_B85890(&v454, v453.m128i_i64[0]);
      v467.m128_u64[1] = (unsigned __int64)&v469;
      v35 = (__m128)_mm_load_si128(&v453);
      v468 = 0x800000000LL;
      v467.m128_u64[0] = 0;
      v472 = (_QWORD *)a1;
      *(_OWORD *)v470 = 0;
      v474 = (__int64)v454;
      v477 = 0x101010000LL;
      v471 = 0;
      v473 = v35;
      v475 = 0;
      v476 = 0;
      sub_1A395A0((__int64)&v467);
      v36 = (_QWORD *)(*(_QWORD *)(v375 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v375 + 16) & 4) != 0 )
        v36 = (_QWORD *)*v36;
      sub_1A48440(a1, (__int64)&v467, (__int64)v36, 0);
      v40 = (_QWORD *)v467.m128_u64[1];
      *(_WORD *)((char *)&v477 + 3) = 0;
      v378 = (void **)(v467.m128_u64[1] + 8LL * (unsigned int)v468);
      if ( (void **)v467.m128_u64[1] != v378 )
      {
        v375 = v9;
        v380 = v466;
        v383 = &v467;
        while ( 1 )
        {
          while ( 1 )
          {
            v45 = *v40 & 0xFFFFFFFFFFFFFFF8LL;
            v46 = *(_BYTE *)(v45 + 28) & 0x7F;
            if ( v46 == 39 )
              break;
            if ( v46 != 71 )
              goto LABEL_26;
            v47 = *(_QWORD *)(v45 + 48);
            sub_1D86320(
              &v465,
              (_QWORD *)src[0] + (unsigned int)dest,
              (_QWORD *)src[0] + (unsigned int)dest,
              (__int64)src,
              1);
            v48 = v465.m128_u64[0];
            if ( !(_DWORD)dest )
              goto LABEL_138;
            v49 = (dest - 1) & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
            v50 = (__int64 *)((char *)src[0] + 8 * v49);
            v51 = *v50;
            if ( *v50 != v47 )
            {
              v135 = 1;
              if ( v51 == -4096 )
              {
LABEL_138:
                sub_1D86320(
                  &v465,
                  (_QWORD *)src[0] + (unsigned int)dest,
                  (_QWORD *)src[0] + (unsigned int)dest,
                  (__int64)src,
                  1);
                v52 = v465.m128_u64[0];
                goto LABEL_32;
              }
              while ( 1 )
              {
                v136 = v135 + 1;
                v49 = (dest - 1) & (v135 + v49);
                v50 = (__int64 *)((char *)src[0] + 8 * v49);
                v137 = *v50;
                if ( v47 == *v50 )
                  break;
                v135 = v136;
                if ( v137 == -4096 )
                  goto LABEL_138;
              }
            }
            sub_1D86320(&v465, v50, (_QWORD *)src[0] + (unsigned int)dest, (__int64)src, 1);
            v52 = v465.m128_u64[0];
LABEL_32:
            if ( v48 != v52 || (*(_BYTE *)(*(_QWORD *)(v45 + 48) + 85LL) & 3) == 2 )
              goto LABEL_26;
            ++v40;
            sub_1D83AB0(a1, v375, v45, a3, 0.0, v35, a9);
            if ( v378 == v40 )
            {
LABEL_35:
              v34 = v383;
              if ( !BYTE3(v477) )
                goto LABEL_116;
              if ( v467.m128_i32[0] == 5 )
              {
                if ( !BYTE4(v477) )
                  goto LABEL_39;
              }
              else
              {
                if ( !v470[1] || (*(_BYTE *)(v472[29] + 46LL) & 0x20) == 0 )
                  goto LABEL_39;
                sub_1663B80(v472, (__int64)v383);
LABEL_116:
                if ( !BYTE4(v477) || v467.m128_i32[0] != 5 )
                  goto LABEL_39;
              }
              sub_1A445B0((__int64)v472, (__int64)v383, v37, v38, v39);
              goto LABEL_39;
            }
          }
          sub_1D86320(
            &v465,
            (_QWORD *)src[0] + (unsigned int)dest,
            (_QWORD *)src[0] + (unsigned int)dest,
            (__int64)src,
            1);
          v41 = v465.m128_u64[0];
          if ( (_DWORD)dest )
          {
            v42 = (dest - 1) & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
            v43 = (__int64 *)((char *)src[0] + 8 * v42);
            v44 = *v43;
            if ( v45 == *v43 )
              goto LABEL_25;
            v100 = 1;
            if ( v44 != -4096 )
              break;
          }
LABEL_104:
          sub_1D86320(
            &v465,
            (_QWORD *)src[0] + (unsigned int)dest,
            (_QWORD *)src[0] + (unsigned int)dest,
            (__int64)src,
            1);
          if ( v41 == v465.m128_u64[0] )
          {
LABEL_105:
            v103 = *(_QWORD *)(v45 + 48);
            v376 = (char *)sub_A81910(*(_QWORD **)(a1 + 248), v103, 0);
            v106 = sub_B76070(v45, v103, v104, v105);
            v377 = (void **)(unsigned int)(v106 - 1);
            if ( v106 )
            {
              v384 = v40;
              for ( j = 0; ; ++j )
              {
                v111 = *(_QWORD *)(v45 + 120);
                v112 = *(_QWORD **)(a1 + 248);
                LODWORD(v379) = j;
                v113 = *(_QWORD *)(v111 + 8 * j);
                v114 = sub_A81910(v112, *(_QWORD *)(v113 + 48), 0);
                v115 = *(_DWORD *)(v113 + 24);
                v116 = *v114;
                v117 = (__int64)v114;
                v118 = sub_B73090(*(_QWORD *)(*(_QWORD *)(v45 + 120) + 8 * j));
                v119 = *(_QWORD *)(v45 + 16);
                v108 = (v119 & 4) != 0 ? *(_QWORD *)(v119 & 0xFFFFFFFFFFFFFFF8LL) : v119 & 0xFFFFFFFFFFFFFFF8LL;
                v109 = sub_B74530(*(_QWORD *)(a1 + 248), v108, v118, v115, 0, v116, v117, 0, 0);
                v110 = v109;
                *(_DWORD *)(v109 + 96) &= 0xFFF01FFF;
                if ( j > 0xFE )
                  sub_B74850(v109, j);
                else
                  *(_WORD *)(v109 + 98) = (16 * (unsigned __int8)j) | *(_WORD *)(v109 + 98) & 0xF00F;
                *(_QWORD *)&v376[8 * j + 24] = v110;
                if ( v377 == (void **)j )
                  break;
              }
              v40 = v384;
            }
            v465.m128_u64[0] = 0;
            v465.m128_i32[2] = 0;
            v120 = *(_BYTE *)(v45 + 29);
            v381 = nullptr;
            v121 = *(_QWORD *)v375;
            v382 = 0;
            v122 = *(unsigned __int64 (__fastcall **)(__int64))(v121 + 16);
            v123 = (v120 & 2) != 0;
            if ( v122 == sub_BA57F0 )
              v124 = (unsigned __int64)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v375 + 48) + 16LL))(*(_QWORD *)(v375 + 48)) >> 32;
            else
              v124 = v122(v375) >> 32;
            v125 = *(_DWORD *)(v375 + 24);
            v126 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v375 + 16LL);
            if ( v126 == sub_BA57F0 )
            {
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v375 + 48) + 16LL))(*(_QWORD *)(v375 + 48));
              v127 = *(_DWORD *)(*(_QWORD *)(v375 + 56) + 8LL);
            }
            else
            {
              v127 = v126(v375);
            }
            v128 = v375;
            v130 = sub_1D816E0(
                     a1,
                     v375,
                     0,
                     0,
                     *(_QWORD *)(v45 + 176),
                     (__int64)v376,
                     v127,
                     v125,
                     v124,
                     v123,
                     v381,
                     v382,
                     (__int64)&v465);
            *(_QWORD *)(v130 + 184) = v45 | *(_QWORD *)(v130 + 184) & 1LL | 2;
            v465.m128_u64[0] = (unsigned __int64)v380;
            v465.m128_u64[1] = 0x600000000LL;
            v131 = *(_QWORD *)(*(_QWORD *)(v130 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            v132 = (unsigned int)*(unsigned __int8 *)(v131 + 16) - 25;
            if ( (unsigned int)v132 > 1 )
              v131 = sub_F63050(v131, v128, v132, v129);
            v133 = (void *)sub_1D83330((_QWORD *)a1, v375, *(_QWORD *)(v131 + 24), (__int64)&v465);
            LODWORD(v425) = 0;
            v424 = v133;
            if ( (char *)v465.m128_u64[0] != v380 )
              free((void *)v465.m128_u64[0]);
            v134 = *(_QWORD *)(v45 + 56);
            if ( (v134 & 4) != 0 )
            {
              v154 = v134 & 0xFFFFFFFFFFFFFFF8LL;
              v155 = *(_QWORD *)(v154 + 40);
              v156 = v154;
              if ( v155 )
              {
                v157 = sub_1929BB0(a1, *(_QWORD *)(a1 + 608), 0, 0x13u, v155, v424, (__m128)0LL, v35, 0);
                if ( v157 != 1 )
                {
                  v424 = (void *)(v157 & 0xFFFFFFFFFFFFFFFELL);
                  LODWORD(v425) = *(_DWORD *)(v156 + 48);
                }
              }
            }
            sub_B7BE40(v130, (__int64)&v424);
          }
LABEL_26:
          if ( v378 == ++v40 )
            goto LABEL_35;
        }
        while ( 1 )
        {
          v101 = v100 + 1;
          v42 = (dest - 1) & (v100 + v42);
          v43 = (__int64 *)((char *)src[0] + 8 * v42);
          v102 = *v43;
          if ( v45 == *v43 )
            break;
          v100 = v101;
          if ( v102 == -4096 )
            goto LABEL_104;
        }
LABEL_25:
        sub_1D86320(&v465, v43, (_QWORD *)src[0] + (unsigned int)dest, (__int64)src, 1);
        if ( v41 == v465.m128_u64[0] )
          goto LABEL_105;
        goto LABEL_26;
      }
LABEL_39:
      if ( v470[0] )
        sub_1A39780((char *)v470[0]);
      if ( (unsigned __int16 *)v467.m128_u64[1] != &v34[1].m128_u16[4] )
        free((void *)v467.m128_u64[1]);
      operator delete(src[0], 8LL * (unsigned int)dest, 8);
    }
  }
}
