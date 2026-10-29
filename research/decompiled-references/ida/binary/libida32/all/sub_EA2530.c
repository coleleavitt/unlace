void __fastcall sub_EA2530(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 v8; // ax
  unsigned __int16 v9; // ax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r13
  __m128i v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r14
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // esi
  __int64 v24; // rdi
  __int64 *v25; // rbp
  __int64 v26; // r13
  __int64 v27; // r12
  unsigned __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 **v30; // rsi
  __int64 *v31; // rcx
  __int64 *v32; // r12
  unsigned __int64 v33; // rsi
  __int64 *n; // rax
  unsigned __int64 v35; // rdi
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // edx
  unsigned int v40; // r9d
  __int64 *v41; // rax
  __int64 v42; // r10
  __int64 *v43; // rsi
  __int64 *v44; // rbp
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  unsigned __int64 v49; // rdi
  unsigned int v50; // eax
  __int64 *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  unsigned int v54; // r13d
  __int64 v55; // r12
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rdx
  int v61; // r11d
  __int64 *v62; // rdi
  _QWORD *v63; // rcx
  __int64 *v64; // rdx
  int v65; // r10d
  __int64 v66; // r9
  unsigned int v67; // esi
  __m128i *v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rsi
  int v71; // r8d
  __int64 v72; // rdi
  int v73; // r9d
  unsigned int v74; // r8d
  __int64 v75; // r10
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rax
  __int64 v79; // rax
  unsigned int v80; // r8d
  __int64 v81; // rcx
  _QWORD *v82; // rdx
  int v83; // r11d
  _QWORD *v84; // r8
  _QWORD *v85; // rcx
  _QWORD *v86; // rdx
  int v87; // r10d
  __int64 v88; // rcx
  unsigned int v89; // edi
  __int64 *v90; // rsi
  __int64 v91; // r9
  __int64 v92; // rcx
  int v93; // esi
  int v94; // r8d
  unsigned int v95; // edi
  __int64 v96; // rsi
  __int64 v97; // rsi
  unsigned int v98; // r12d
  __int64 v99; // rbp
  unsigned int v100; // edi
  unsigned int v101; // edx
  __int64 *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rsi
  unsigned int v108; // r12d
  __int64 v109; // rbp
  unsigned int v110; // edx
  __int64 *v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rsi
  unsigned int v117; // r12d
  __int64 v118; // rbp
  unsigned int v119; // edi
  unsigned int v120; // edx
  __int64 *v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // rsi
  unsigned int v127; // r12d
  __int64 v128; // rbp
  unsigned int v129; // edi
  unsigned int v130; // edx
  __int64 *v131; // rax
  __int64 v132; // rcx
  int v133; // edi
  __int64 *v134; // rbp
  unsigned int v135; // r13d
  __int64 v136; // r12
  unsigned __int64 v137; // rdx
  unsigned int v138; // eax
  __int64 **v139; // rsi
  __int64 *v140; // rcx
  _QWORD *v141; // r9
  __int64 *v142; // r13
  __int64 *v143; // rcx
  __m128i v144; // rax
  __int64 v145; // rbp
  __int64 v146; // r8
  __int64 v147; // r14
  unsigned __int64 v148; // rsi
  __int64 v149; // rcx
  _QWORD *v150; // rdx
  __int64 v151; // rax
  unsigned __int64 v152; // rdx
  unsigned __int64 v153; // rax
  __int64 v154; // rax
  unsigned int v155; // r8d
  __int64 v156; // rcx
  _QWORD *v157; // rdx
  int v158; // r11d
  _QWORD *v159; // r8
  _QWORD *v160; // rcx
  _QWORD *v161; // rdx
  int v162; // r10d
  __int64 v163; // rcx
  unsigned int v164; // edi
  _QWORD *v165; // rsi
  __int64 v166; // r9
  __int64 v167; // rcx
  int v168; // esi
  int v169; // r8d
  unsigned int v170; // edi
  __int64 v171; // rsi
  __int64 *v172; // rax
  int v173; // edi
  unsigned __int64 v174; // rax
  __int64 v175; // rax
  _QWORD *v176; // rax
  __int64 v177; // rcx
  _QWORD *v178; // rdx
  int v179; // r10d
  __m128i *v180; // r8
  _QWORD *v181; // rcx
  __m128i *v182; // rdx
  int v183; // r14d
  __int64 v184; // rcx
  unsigned int v185; // edi
  __int64 *v186; // rsi
  __int64 v187; // r11
  __int64 v188; // rcx
  int v189; // eax
  bool v190; // zf
  __m128 *v191; // rdi
  int v192; // eax
  int v193; // r10d
  __int64 v194; // r11
  unsigned __int64 v195; // rax
  unsigned __int64 v196; // rax
  unsigned __int64 v197; // rdx
  __int64 v198; // rax
  __int64 v199; // rax
  unsigned int v200; // r8d
  __int64 v201; // rcx
  _QWORD *v202; // rdx
  __int64 v203; // rsi
  int v204; // r8d
  _QWORD *v205; // r10
  _QWORD *v206; // rcx
  _QWORD *v207; // rdx
  int v208; // r11d
  __int64 v209; // r9
  unsigned int v210; // esi
  _QWORD *v211; // rcx
  __int64 v212; // rdi
  __int64 v213; // rsi
  int v214; // esi
  int v215; // edi
  unsigned int v216; // r12d
  __int64 *v217; // r8
  int v218; // r9d
  unsigned __int64 v219; // rax
  unsigned __int64 v220; // rax
  unsigned __int64 v221; // rdx
  __int64 v222; // rax
  __int64 v223; // rax
  unsigned int v224; // r8d
  __int64 v225; // rcx
  _QWORD *v226; // rdx
  __int64 v227; // rsi
  int v228; // r8d
  _QWORD *v229; // r10
  _QWORD *v230; // rcx
  _QWORD *v231; // rdx
  int v232; // r11d
  __int64 v233; // r9
  unsigned int v234; // esi
  __int64 *v235; // rcx
  __int64 v236; // rdi
  __int64 v237; // rsi
  int v238; // esi
  int v239; // edi
  unsigned int v240; // r12d
  __int64 *v241; // r8
  int v242; // eax
  __int64 v243; // r8
  unsigned __int64 v244; // rax
  __int64 v245; // rax
  _QWORD *v246; // rax
  __int64 v247; // rcx
  _QWORD *v248; // rdx
  int v249; // r11d
  _QWORD *v250; // rcx
  __int64 *v251; // rdx
  int v252; // r10d
  __int64 v253; // r9
  unsigned int v254; // esi
  __m128i *v255; // rcx
  __int64 v256; // r8
  __int64 v257; // rsi
  __int64 v258; // rcx
  _QWORD *v259; // rcx
  _QWORD *v260; // rdx
  __int64 v261; // rcx
  _QWORD *v262; // rcx
  _QWORD *v263; // rdx
  __int64 **v264; // rdi
  int v265; // eax
  int v266; // eax
  unsigned int v267; // ecx
  __int64 v268; // rcx
  __m128 *v269; // rdi
  __int64 **v270; // rdi
  int v271; // eax
  int v272; // ecx
  __int64 v273; // rcx
  unsigned int v274; // eax
  _QWORD *v275; // rax
  __int64 v276; // rcx
  _QWORD *v277; // rdx
  int v278; // r10d
  __m128i *v279; // r8
  _QWORD *v280; // rcx
  __m128i *v281; // rdx
  int v282; // r14d
  __int64 v283; // rcx
  unsigned int v284; // edi
  __int64 *v285; // rsi
  __int64 v286; // r11
  __int64 v287; // rcx
  int v288; // r10d
  __int64 *v289; // r8
  int v290; // ecx
  int v291; // edx
  __int64 v292; // rcx
  __int64 v293; // r8
  int v294; // r10d
  __int64 *v295; // r8
  int v296; // ecx
  int v297; // edx
  __int64 v298; // rcx
  __int64 v299; // r8
  int v300; // r10d
  int v301; // edi
  __int64 v302; // rdx
  __int64 v303; // rcx
  int v304; // r10d
  __int64 *v305; // r8
  int v306; // ecx
  int v307; // edx
  __int64 v308; // rcx
  __int64 v309; // r8
  __int64 v310; // rcx
  _QWORD *v311; // rcx
  _QWORD *v312; // rdx
  __int64 v313; // rcx
  _QWORD *v314; // rcx
  _QWORD *v315; // rdx
  unsigned __int64 v316; // rax
  __int64 v317; // rax
  _QWORD *v318; // rax
  __int64 v319; // rcx
  int v320; // r10d
  __m128i *v321; // r8
  _QWORD *v322; // rcx
  _QWORD *m; // rdx
  __m128i *v324; // rdx
  int v325; // r14d
  __int64 v326; // rcx
  unsigned int v327; // edi
  __int64 *v328; // rsi
  __int64 v329; // r11
  __int64 v330; // rcx
  unsigned __int64 v331; // rax
  __int64 v332; // rax
  _QWORD *v333; // rax
  __int64 v334; // rcx
  _QWORD *v335; // rdx
  int v336; // r11d
  __int64 *v337; // r10
  _QWORD *v338; // rcx
  __int64 *v339; // rdx
  int v340; // r13d
  __int64 v341; // rcx
  unsigned int v342; // r8d
  _QWORD *v343; // rdi
  __int64 v344; // r9
  __int64 v345; // rcx
  unsigned __int64 v346; // rax
  __int64 v347; // rax
  _QWORD *v348; // rax
  __int64 v349; // rcx
  _QWORD *v350; // rdx
  int v351; // r11d
  __int64 *v352; // r10
  _QWORD *v353; // rcx
  __int64 *v354; // rdx
  int v355; // r13d
  __int64 v356; // rcx
  unsigned int v357; // r8d
  _QWORD *v358; // rdi
  __int64 v359; // r9
  __int64 v360; // rcx
  unsigned __int64 v361; // rax
  __int64 v362; // rax
  _QWORD *v363; // rax
  __int64 v364; // rcx
  _QWORD *v365; // rdx
  int v366; // r11d
  __int64 *v367; // r10
  _QWORD *v368; // rcx
  __int64 *v369; // rdx
  int v370; // r13d
  __int64 v371; // rcx
  unsigned int v372; // r8d
  _QWORD *v373; // rdi
  __int64 v374; // r9
  __int64 v375; // rcx
  unsigned __int64 v376; // rax
  __int64 v377; // rax
  _QWORD *v378; // rax
  __int64 v379; // rcx
  _QWORD *v380; // rdx
  int v381; // r11d
  __int64 *v382; // r10
  _QWORD *v383; // rcx
  __int64 *v384; // rdx
  int v385; // r13d
  __int64 v386; // rcx
  unsigned int v387; // r8d
  _QWORD *v388; // rdi
  __int64 v389; // r9
  __int64 v390; // rcx
  unsigned int v391; // eax
  _QWORD *v392; // rax
  __int64 v393; // rcx
  int v394; // r10d
  __m128i *v395; // r8
  _QWORD *v396; // rcx
  _QWORD *j; // rdx
  __m128i *v398; // rdx
  int v399; // r14d
  __int64 v400; // rcx
  unsigned int v401; // edi
  __int64 *v402; // rsi
  __int64 v403; // r11
  __int64 v404; // rcx
  unsigned __int64 v405; // rax
  _QWORD *v406; // rax
  __int64 v407; // rcx
  _QWORD *v408; // rdx
  int v409; // r11d
  __int64 *v410; // r10
  _QWORD *v411; // rcx
  __int64 *v412; // rdx
  int v413; // r13d
  __int64 v414; // rcx
  unsigned int v415; // r8d
  _QWORD *v416; // rdi
  __int64 v417; // r9
  __int64 v418; // rcx
  unsigned __int64 v419; // rax
  _QWORD *v420; // rax
  __int64 v421; // rcx
  _QWORD *v422; // rdx
  int v423; // r11d
  __int64 *v424; // r10
  _QWORD *v425; // rcx
  __int64 *v426; // rdx
  int v427; // r13d
  __int64 v428; // rcx
  unsigned int v429; // r8d
  _QWORD *v430; // rdi
  __int64 v431; // r9
  __int64 v432; // rcx
  unsigned __int64 v433; // rax
  _QWORD *v434; // rax
  __int64 v435; // rcx
  _QWORD *v436; // rdx
  int v437; // r11d
  __int64 *v438; // r10
  _QWORD *v439; // rcx
  __int64 *v440; // rdx
  int v441; // r13d
  __int64 v442; // rcx
  unsigned int v443; // r8d
  _QWORD *v444; // rdi
  __int64 v445; // r9
  __int64 v446; // rcx
  int v447; // ebp
  __int64 v448; // r11
  int v449; // edi
  __int64 v450; // rcx
  _QWORD *v451; // rcx
  _QWORD *v452; // rdx
  __int64 v453; // rdx
  _QWORD *ii; // rdx
  int v455; // r10d
  __int64 v456; // rdx
  _QWORD *k; // rdx
  __int64 v458; // rdx
  _QWORD *kk; // rdx
  __int64 v460; // rdx
  _QWORD *i5; // rdx
  __int64 v462; // rdx
  _QWORD *nn; // rdx
  __int64 v464; // rdx
  _QWORD *i2; // rdx
  __int64 v466; // rdx
  _QWORD *i3; // rdx
  __int64 v468; // rdx
  _QWORD *i1; // rdx
  __int64 v470; // rdx
  _QWORD *i4; // rdx
  __int64 v472; // rdx
  _QWORD *jj; // rdx
  __int64 v474; // rdx
  _QWORD *i; // rdx
  __int64 v476; // rdx
  _QWORD *mm; // rdx
  _QWORD *v478; // r8
  int v479; // r9d
  __int64 *v480; // r13
  __int64 *v481; // r13
  int v482; // r14d
  _QWORD *v483; // r12
  int v484; // r14d
  _QWORD *v485; // r12
  int v486; // r14d
  _QWORD *v487; // r12
  int v488; // r14d
  _QWORD *v489; // r12
  __int64 *v490; // r13
  int v491; // r14d
  _QWORD *v492; // r12
  int v493; // r14d
  _QWORD *v494; // r12
  __int64 *v495; // r13
  int v496; // r14d
  _QWORD *v497; // r12
  __int64 *v498; // r9
  int v499; // r10d
  _QWORD *v500; // r9
  int v501; // r10d
  int v502; // r12d
  __int64 *v503; // r11
  __m128i *p_si128; // [rsp+0h] [rbp-C8h] BYREF
  __m128i *v505; // [rsp+8h] [rbp-C0h]
  __m128 *v506; // [rsp+10h] [rbp-B8h]
  _QWORD *v507; // [rsp+18h] [rbp-B0h]
  __int64 *v508; // [rsp+20h] [rbp-A8h]
  _QWORD *v509; // [rsp+28h] [rbp-A0h]
  _QWORD *v510; // [rsp+30h] [rbp-98h]
  _QWORD *v511; // [rsp+38h] [rbp-90h]
  __m128i si128; // [rsp+40h] [rbp-88h] BYREF
  __int64 v513; // [rsp+50h] [rbp-78h]
  __m128 v514; // [rsp+60h] [rbp-68h] BYREF
  __int64 v515; // [rsp+70h] [rbp-58h]
  __int64 *v516; // [rsp+78h] [rbp-50h]
  __int64 *v517; // [rsp+80h] [rbp-48h]

  if ( !a2 )
    return;
  v8 = *(_WORD *)a2;
  LODWORD(p_si128) = a3;
  v9 = v8 & 0x1FF;
  if ( v9 == 26 )
  {
    v134 = *(__int64 **)(a2 + 16);
    v135 = *(_DWORD *)(a1 + 16);
    v136 = *(_QWORD *)a1;
    si128.m128i_i64[0] = (__int64)v134;
    if ( v135 )
    {
      v137 = v135 - 1;
      v138 = v137 & (((unsigned int)v134 >> 9) ^ ((unsigned int)v134 >> 4));
      v139 = (__int64 **)(v136 + 16LL * v138);
      v140 = *v139;
      if ( v134 == *v139 )
      {
LABEL_104:
        sub_AC6E00(&v514, v139, (_QWORD *)(v136 + 16LL * v135), a1, 1);
        if ( (_DWORD)p_si128 )
          return;
        *(_QWORD *)(v514.m128_u64[0] + 8) = a2;
LABEL_106:
        sub_EA2530(a1, v134, 0);
        return;
      }
      a5 = 1;
      v264 = nullptr;
      if ( v140 != (__int64 *)-4096LL )
      {
        while ( 1 )
        {
          if ( !v264 && v140 == (__int64 *)-8192LL )
            v264 = v139;
          a6 = (unsigned int)(a5 + 1);
          v138 = v137 & (a5 + v138);
          v139 = (__int64 **)(v136 + 16LL * v138);
          v140 = *v139;
          if ( v134 == *v139 )
            goto LABEL_104;
          if ( v140 == (__int64 *)-4096LL )
            break;
          a5 = (unsigned int)a6;
        }
        if ( v264 )
          v139 = v264;
      }
      v265 = *(_DWORD *)(a1 + 8);
      a4 = 3 * v135;
      v514.m128_u64[0] = (unsigned __int64)v139;
      v266 = v265 + 1;
      if ( 4 * v266 < (unsigned int)a4 )
      {
        v267 = v135 - *(_DWORD *)(a1 + 12);
        p_si128 = (__m128i *)v134;
        v268 = v267 - v266;
        v506 = &v514;
        if ( (unsigned int)v268 > v135 >> 3 )
        {
LABEL_258:
          v190 = *v139 + 512 == nullptr;
          *(_DWORD *)(a1 + 8) = v266;
          if ( !v190 )
            --*(_DWORD *)(a1 + 12);
          p_si128 = (__m128i *)a2;
          v269 = v506;
          *(__m128 *)v139 = _mm_loadh_ps((const double *)&p_si128);
          sub_AC6E00(v269, v139, (_QWORD *)(v136 + 16LL * v135), a1, 1);
          goto LABEL_106;
        }
        v391 = ((((((((v137 >> 1) | v137 | (((v137 >> 1) | v137) >> 2)) >> 4)
                  | (v137 >> 1)
                  | v137
                  | (((v137 >> 1) | v137) >> 2)) >> 8)
                | (((v137 >> 1) | v137 | (((v137 >> 1) | v137) >> 2)) >> 4)
                | (v137 >> 1)
                | v137
                | (((v137 >> 1) | v137) >> 2)) >> 16)
              | (((((v137 >> 1) | v137 | (((v137 >> 1) | v137) >> 2)) >> 4)
                | (v137 >> 1)
                | v137
                | (((v137 >> 1) | v137) >> 2)) >> 8)
              | (((v137 >> 1) | v137 | (((v137 >> 1) | v137) >> 2)) >> 4)
              | (v137 >> 1)
              | v137
              | (((v137 >> 1) | v137) >> 2))
             + 1;
        if ( v391 < 0x40 )
          v391 = 64;
        *(_DWORD *)(a1 + 16) = v391;
        v392 = (_QWORD *)sub_220C370(16LL * v391, 8, 64, v268, a5, a6);
        *(_QWORD *)a1 = v392;
        if ( !v136 )
        {
          v474 = *(unsigned int *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = 0;
          for ( i = &v392[2 * v474]; i != v392; v392 += 2 )
            *v392 = -4096;
          goto LABEL_323;
        }
        v393 = *(unsigned int *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = 0;
        v394 = v393;
        v395 = (__m128i *)(v136 + 16LL * v135);
        v396 = &v392[2 * v393];
        for ( j = v392; v396 != j; j += 2 )
          *j = -4096;
        v398 = (__m128i *)v136;
        v399 = v394 - 1;
        do
        {
          v400 = v398->m128i_i64[0];
          if ( v398->m128i_i64[0] != -8192 && v400 != -4096 )
          {
            if ( !v394 )
            {
              *(_QWORD *)&dword_0 = v398->m128i_i64[0];
              BUG();
            }
            v401 = v399 & (((unsigned int)v400 >> 9) ^ ((unsigned int)v400 >> 4));
            v402 = &v392[2 * v401];
            v403 = *v402;
            if ( v400 != *v402 && v403 != -4096 )
            {
              LODWORD(p_si128) = 1;
              v495 = nullptr;
              v505 = v398;
              while ( 1 )
              {
                if ( !v495 && v403 == -8192 )
                  v495 = v402;
                v401 = v399 & ((_DWORD)p_si128 + v401);
                v402 = &v392[2 * v401];
                v403 = *v402;
                if ( v400 == *v402 )
                {
                  v398 = v505;
                  goto LABEL_394;
                }
                if ( v403 == -4096 )
                  break;
                LODWORD(p_si128) = (_DWORD)p_si128 + 1;
              }
              v398 = v505;
              if ( v495 )
                v402 = v495;
            }
LABEL_394:
            *v402 = v400;
            v404 = v398->m128i_i64[1];
            ++*(_DWORD *)(a1 + 8);
            v402[1] = v404;
          }
          ++v398;
        }
        while ( v395 != v398 );
LABEL_322:
        operator delete();
LABEL_323:
        v506 = &v514;
        sub_AC65D0((__int64 *)a1, si128.m128i_i64, &v514);
        v136 = *(_QWORD *)a1;
        v135 = *(_DWORD *)(a1 + 16);
        v266 = *(_DWORD *)(a1 + 8) + 1;
        v139 = (__int64 **)v514.m128_u64[0];
        goto LABEL_258;
      }
    }
    else
    {
      v514.m128_u64[0] = 0;
    }
    v316 = (((((((2 * v135 - 1) | ((unsigned __int64)(2 * v135 - 1) >> 1)) >> 2)
             | (2 * v135 - 1)
             | ((unsigned __int64)(2 * v135 - 1) >> 1)) >> 4)
           | (((2 * v135 - 1) | ((unsigned __int64)(2 * v135 - 1) >> 1)) >> 2)
           | (2 * v135 - 1)
           | ((unsigned __int64)(2 * v135 - 1) >> 1)) >> 8)
         | (((((2 * v135 - 1) | ((unsigned __int64)(2 * v135 - 1) >> 1)) >> 2)
           | (2 * v135 - 1)
           | ((unsigned __int64)(2 * v135 - 1) >> 1)) >> 4)
         | (((2 * v135 - 1) | ((unsigned __int64)(2 * v135 - 1) >> 1)) >> 2)
         | (2 * v135 - 1)
         | ((unsigned __int64)(2 * v135 - 1) >> 1);
    v317 = ((v316 >> 16) | v316) + 1;
    if ( (unsigned int)v317 < 0x40 )
      LODWORD(v317) = 64;
    *(_DWORD *)(a1 + 16) = v317;
    v318 = (_QWORD *)sub_220C370(16LL * (unsigned int)v317, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v318;
    if ( !v136 )
    {
      v456 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      for ( k = &v318[2 * v456]; k != v318; v318 += 2 )
        *v318 = -4096;
      goto LABEL_323;
    }
    v319 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v320 = v319;
    v321 = (__m128i *)(v136 + 16LL * v135);
    v322 = &v318[2 * v319];
    for ( m = v318; v322 != m; m += 2 )
      *m = -4096;
    v324 = (__m128i *)v136;
    v325 = v320 - 1;
    if ( (__m128i *)v136 != v321 )
    {
      do
      {
        v326 = v324->m128i_i64[0];
        if ( v324->m128i_i64[0] != -8192 && v326 != -4096 )
        {
          if ( !v320 )
          {
            *(_QWORD *)&dword_0 = v324->m128i_i64[0];
            BUG();
          }
          v327 = v325 & (((unsigned int)v326 >> 9) ^ ((unsigned int)v326 >> 4));
          v328 = &v318[2 * v327];
          v329 = *v328;
          if ( *v328 != v326 && v329 != -4096 )
          {
            LODWORD(p_si128) = 1;
            v481 = nullptr;
            v505 = v324;
            while ( 1 )
            {
              if ( !v481 && v329 == -8192 )
                v481 = v328;
              v327 = v325 & ((_DWORD)p_si128 + v327);
              v328 = &v318[2 * v327];
              v329 = *v328;
              if ( v326 == *v328 )
              {
                v324 = v505;
                goto LABEL_320;
              }
              if ( v329 == -4096 )
                break;
              LODWORD(p_si128) = (_DWORD)p_si128 + 1;
            }
            v324 = v505;
            if ( v481 )
              v328 = v481;
          }
LABEL_320:
          *v328 = v326;
          v330 = v324->m128i_i64[1];
          ++*(_DWORD *)(a1 + 8);
          v328[1] = v330;
        }
        ++v324;
      }
      while ( v321 != v324 );
    }
    goto LABEL_322;
  }
  if ( v9 <= 0x1Au )
  {
    if ( v9 != 17 )
      goto LABEL_107;
    v25 = *(__int64 **)(a2 + 16);
    v26 = *(unsigned int *)(a1 + 16);
    v27 = *(_QWORD *)a1;
    si128.m128i_i64[0] = (__int64)v25;
    if ( (_DWORD)v26 )
    {
      v28 = (unsigned int)(v26 - 1);
      v29 = v28 & (((unsigned int)v25 >> 9) ^ ((unsigned int)v25 >> 4));
      v30 = (__int64 **)(v27 + 16LL * v29);
      v31 = *v30;
      if ( v25 == *v30 )
      {
LABEL_24:
        v506 = &v514;
        sub_AC6E00(&v514, v30, (_QWORD *)(v27 + 16LL * (unsigned int)v26), a1, 1);
        if ( (_DWORD)p_si128 == 1 )
          return;
        *(_QWORD *)(v514.m128_u64[0] + 8) = a2;
        sub_EC6110(v506, a2);
        v32 = v516;
        v513 = v515;
        si128 = _mm_load_si128((const __m128i *)&v514);
        v33 = si128.m128i_u64[1];
        p_si128 = (__m128i *)v517;
        for ( n = (__int64 *)si128.m128i_i64[0]; ; n = (__int64 *)si128.m128i_i64[0] )
        {
          while ( 1 )
          {
            if ( v32 == n )
            {
LABEL_34:
              if ( p_si128 == (__m128i *)v33 )
                goto LABEL_35;
            }
LABEL_27:
            v35 = v33 & 3;
            if ( (v33 & 3) != 0 )
            {
              v172 = (__int64 *)sub_ECEDF0(&si128);
              v33 = si128.m128i_u64[1];
              v36 = *(_DWORD *)(a1 + 16);
              v37 = *v172;
              v38 = *(_QWORD *)a1;
              v35 = si128.m128i_i8[8] & 3;
              if ( !v36 )
                goto LABEL_31;
            }
            else
            {
              v36 = *(_DWORD *)(a1 + 16);
              v37 = *n;
              v38 = *(_QWORD *)a1;
              if ( !v36 )
                goto LABEL_100;
            }
            v39 = v36 - 1;
            v40 = v39 & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
            v41 = (__int64 *)(v38 + 16LL * v40);
            v42 = *v41;
            if ( v37 == *v41 )
              goto LABEL_30;
            v192 = 1;
            if ( v42 != -4096 )
            {
              while ( 1 )
              {
                v193 = v192 + 1;
                v40 = v39 & (v192 + v40);
                v41 = (__int64 *)(v38 + 16LL * v40);
                v194 = *v41;
                if ( *v41 == v37 )
                  break;
                v192 = v193;
                if ( v194 == -4096 )
                  goto LABEL_31;
              }
LABEL_30:
              *v41 = -8192;
              --*(_DWORD *)(a1 + 8);
              ++*(_DWORD *)(a1 + 12);
            }
LABEL_31:
            if ( v35 )
              break;
            n = (__int64 *)si128.m128i_i64[0];
LABEL_100:
            si128.m128i_i64[0] = (__int64)++n;
          }
          if ( (v33 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            sub_ECEC20(&si128);
            v33 = si128.m128i_u64[1];
            n = (__int64 *)si128.m128i_i64[0];
            if ( v32 == (__int64 *)si128.m128i_i64[0] )
              goto LABEL_34;
            goto LABEL_27;
          }
          sub_ECEA10(&si128, 1);
          v33 = si128.m128i_u64[1];
        }
      }
      a5 = 1;
      v270 = nullptr;
      if ( v31 != (__int64 *)-4096LL )
      {
        while ( 1 )
        {
          if ( !v270 && v31 == (__int64 *)-8192LL )
            v270 = v30;
          a6 = (unsigned int)(a5 + 1);
          v29 = v28 & (a5 + v29);
          v30 = (__int64 **)(v27 + 16LL * v29);
          v31 = *v30;
          if ( v25 == *v30 )
            goto LABEL_24;
          if ( v31 == (__int64 *)-4096LL )
            break;
          a5 = (unsigned int)a6;
        }
        if ( v270 )
          v30 = v270;
      }
      v271 = *(_DWORD *)(a1 + 8);
      a4 = (unsigned int)(3 * v26);
      v514.m128_u64[0] = (unsigned __int64)v30;
      v189 = v271 + 1;
      if ( 4 * v189 < (unsigned int)a4 )
      {
        v272 = v26 - *(_DWORD *)(a1 + 12);
        p_si128 = (__m128i *)v25;
        v273 = (unsigned int)(v272 - v189);
        v506 = &v514;
        if ( (unsigned int)v273 > (unsigned int)v26 >> 3 )
        {
LABEL_166:
          v190 = *v30 + 512 == nullptr;
          *(_DWORD *)(a1 + 8) = v189;
          if ( !v190 )
            --*(_DWORD *)(a1 + 12);
          p_si128 = (__m128i *)a2;
          v191 = v506;
          *(__m128 *)v30 = _mm_loadh_ps((const double *)&p_si128);
          sub_AC6E00(v191, v30, (_QWORD *)(v27 + 16LL * (unsigned int)v26), a1, 1);
LABEL_35:
          v43 = v25;
          v44 = (__int64 *)(a2 + 24);
          sub_EA2530(a1, v43, 0);
          v48 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 16;
          if ( a2 + 24 == v48 )
            return;
          p_si128 = &si128;
          while ( 1 )
          {
            v53 = *v44;
            v54 = *(_DWORD *)(a1 + 16);
            v55 = *(_QWORD *)a1;
            si128.m128i_i64[0] = *v44;
            if ( !v54 )
              break;
            v49 = v54 - 1;
            v50 = v49 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
            v51 = (__int64 *)(v55 + 16LL * v50);
            v52 = *v51;
            if ( v53 != *v51 )
            {
              v47 = 1;
              v241 = nullptr;
              if ( v52 != -4096 )
              {
                while ( 1 )
                {
                  if ( v52 == -8192 && !v241 )
                    v241 = v51;
                  v455 = v47 + 1;
                  v47 = v50 + (unsigned int)v47;
                  v50 = v49 & v47;
                  v51 = (__int64 *)(v55 + 16LL * ((unsigned int)v49 & (unsigned int)v47));
                  v52 = *v51;
                  if ( v53 == *v51 )
                    goto LABEL_38;
                  if ( v52 == -4096 )
                    break;
                  LODWORD(v47) = v455;
                }
                if ( v241 )
                  v51 = v241;
              }
              v242 = *(_DWORD *)(a1 + 8);
              v514.m128_u64[0] = (unsigned __int64)v51;
              v45 = (unsigned int)(v242 + 1);
              v46 = (unsigned int)(4 * v45);
              if ( (unsigned int)v46 < 3 * v54 )
              {
                v243 = v54 >> 3;
                if ( v54 - *(_DWORD *)(a1 + 12) - (unsigned int)v45 <= (unsigned int)v243 )
                {
                  v244 = (v49 >> 1) | v49 | (((v49 >> 1) | v49) >> 2);
                  v245 = ((((((v244 >> 4) | v244) >> 8) | (v244 >> 4) | v244) >> 16)
                        | (((v244 >> 4) | v244) >> 8)
                        | (v244 >> 4)
                        | v244)
                       + 1;
                  if ( (unsigned int)v245 < 0x40 )
                    LODWORD(v245) = 64;
                  *(_DWORD *)(a1 + 16) = v245;
                  v246 = (_QWORD *)sub_220C370(16LL * (unsigned int)v245, 8, 64, v45, v243, v47);
                  *(_QWORD *)a1 = v246;
                  if ( v55 )
                  {
                    v247 = *(unsigned int *)(a1 + 16);
                    *(_QWORD *)(a1 + 8) = 0;
                    v248 = v246;
                    v249 = v247;
                    v250 = &v246[2 * v247];
                    if ( v246 != v250 )
                    {
                      do
                      {
                        *v248 = -4096;
                        v248 += 2;
                      }
                      while ( v250 != v248 );
                    }
                    v251 = (__int64 *)v55;
                    v252 = v249 - 1;
                    do
                    {
                      v253 = *v251;
                      if ( *v251 != -4096 && v253 != -8192 )
                      {
                        if ( !v249 )
                        {
                          *(_QWORD *)&dword_0 = *v251;
                          BUG();
                        }
                        v254 = v252 & (((unsigned int)v253 >> 9) ^ ((unsigned int)v253 >> 4));
                        v255 = (__m128i *)&v246[2 * v254];
                        v256 = v255->m128i_i64[0];
                        if ( v253 != v255->m128i_i64[0] && v256 != -4096 )
                        {
                          LODWORD(v507) = 1;
                          v505 = nullptr;
                          v508 = v251;
                          while ( 1 )
                          {
                            if ( !v505 )
                            {
                              if ( v256 != -8192 )
                                v255 = v505;
                              v505 = v255;
                            }
                            v254 = v252 & ((_DWORD)v507 + v254);
                            v255 = (__m128i *)&v246[2 * v254];
                            v256 = v255->m128i_i64[0];
                            if ( v253 == v255->m128i_i64[0] )
                            {
                              v251 = v508;
                              goto LABEL_243;
                            }
                            if ( v256 == -4096 )
                              break;
                            LODWORD(v507) = (_DWORD)v507 + 1;
                          }
                          v251 = v508;
                          if ( v505 )
                            v255 = v505;
                        }
LABEL_243:
                        v255->m128i_i64[0] = v253;
                        v257 = v251[1];
                        ++*(_DWORD *)(a1 + 8);
                        v255->m128i_i64[1] = v257;
                      }
                      v251 += 2;
                    }
                    while ( (__int64 *)(v55 + 16LL * v54) != v251 );
                    operator delete();
                  }
                  else
                  {
                    v453 = *(unsigned int *)(a1 + 16);
                    *(_QWORD *)(a1 + 8) = 0;
                    for ( ii = &v246[2 * v453]; ii != v246; v246 += 2 )
                      *v246 = -4096;
                  }
                  sub_AC65D0((__int64 *)a1, p_si128->m128i_i64, v506);
                  v51 = (__int64 *)v514.m128_u64[0];
                  v72 = si128.m128i_i64[0];
                  v53 = *v44;
                  LODWORD(v45) = *(_DWORD *)(a1 + 8) + 1;
                  v76 = *(_QWORD *)v514.m128_u64[0];
                }
                else
                {
                  v76 = *v51;
                  v72 = v53;
                }
LABEL_57:
                *(_DWORD *)(a1 + 8) = v45;
                if ( v76 != -4096 )
                  --*(_DWORD *)(a1 + 12);
                goto LABEL_59;
              }
LABEL_41:
              v56 = (((((((2 * v54 - 1) | ((unsigned __int64)(2 * v54 - 1) >> 1)) >> 2)
                      | (2 * v54 - 1)
                      | ((unsigned __int64)(2 * v54 - 1) >> 1)) >> 4)
                    | (((2 * v54 - 1) | ((unsigned __int64)(2 * v54 - 1) >> 1)) >> 2)
                    | (2 * v54 - 1)
                    | ((unsigned __int64)(2 * v54 - 1) >> 1)) >> 8)
                  | (((((2 * v54 - 1) | ((unsigned __int64)(2 * v54 - 1) >> 1)) >> 2)
                    | (2 * v54 - 1)
                    | ((unsigned __int64)(2 * v54 - 1) >> 1)) >> 4)
                  | (((2 * v54 - 1) | ((unsigned __int64)(2 * v54 - 1) >> 1)) >> 2)
                  | (2 * v54 - 1)
                  | ((unsigned __int64)(2 * v54 - 1) >> 1);
              v57 = ((v56 >> 16) | v56) + 1;
              if ( (unsigned int)v57 < 0x40 )
                LODWORD(v57) = 64;
              *(_DWORD *)(a1 + 16) = v57;
              v58 = sub_220C370(16LL * (unsigned int)v57, 8, 64, v45, v46, v47);
              *(_QWORD *)a1 = v58;
              if ( v55 )
              {
                v59 = *(unsigned int *)(a1 + 16);
                *(_QWORD *)(a1 + 8) = 0;
                v60 = (_QWORD *)v58;
                v61 = v59;
                v62 = (__int64 *)(v55 + 16LL * v54);
                v63 = (_QWORD *)(v58 + 16 * v59);
                if ( (_QWORD *)v58 != v63 )
                {
                  do
                  {
                    *v60 = -4096;
                    v60 += 2;
                  }
                  while ( v63 != v60 );
                }
                v64 = (__int64 *)v55;
                v65 = v61 - 1;
                if ( (__int64 *)v55 != v62 )
                {
                  do
                  {
                    v66 = *v64;
                    if ( *v64 != -4096 && v66 != -8192 )
                    {
                      if ( !v61 )
                      {
                        *(_QWORD *)&dword_0 = *v64;
                        BUG();
                      }
                      v67 = v65 & (((unsigned int)v66 >> 9) ^ ((unsigned int)v66 >> 4));
                      v68 = (__m128i *)(v58 + 16LL * v67);
                      v69 = v68->m128i_i64[0];
                      if ( v66 != v68->m128i_i64[0] && v69 != -4096 )
                      {
                        LODWORD(v507) = 1;
                        v505 = nullptr;
                        v508 = v64;
                        while ( 1 )
                        {
                          if ( v69 == -8192 )
                          {
                            if ( v505 )
                              v68 = v505;
                            v505 = v68;
                          }
                          v67 = v65 & ((_DWORD)v507 + v67);
                          v68 = (__m128i *)(v58 + 16LL * v67);
                          v69 = v68->m128i_i64[0];
                          if ( v66 == v68->m128i_i64[0] )
                          {
                            v64 = v508;
                            goto LABEL_51;
                          }
                          if ( v69 == -4096 )
                            break;
                          LODWORD(v507) = (_DWORD)v507 + 1;
                        }
                        v64 = v508;
                        if ( v505 )
                          v68 = v505;
                      }
LABEL_51:
                      v68->m128i_i64[0] = v66;
                      v70 = v64[1];
                      ++*(_DWORD *)(a1 + 8);
                      v68->m128i_i64[1] = v70;
                    }
                    v64 += 2;
                  }
                  while ( v62 != v64 );
                }
                operator delete();
                v58 = *(_QWORD *)a1;
                v71 = *(_DWORD *)(a1 + 16);
                LODWORD(v45) = *(_DWORD *)(a1 + 8) + 1;
              }
              else
              {
                v450 = *(unsigned int *)(a1 + 16);
                *(_QWORD *)(a1 + 8) = 0;
                v71 = v450;
                v451 = (_QWORD *)(v58 + 16 * v450);
                if ( (_QWORD *)v58 != v451 )
                {
                  v452 = (_QWORD *)v58;
                  do
                  {
                    *v452 = -4096;
                    v452 += 2;
                  }
                  while ( v451 != v452 );
                }
                LODWORD(v45) = 1;
              }
              v72 = si128.m128i_i64[0];
              v53 = *v44;
              if ( !v71 )
              {
                v514.m128_u64[0] = 0;
                v76 = 0x10102464C457FLL;
                v51 = nullptr;
                goto LABEL_57;
              }
              v73 = v71 - 1;
              v74 = (v71 - 1)
                  & (((unsigned __int32)si128.m128i_i32[0] >> 9)
                   ^ ((unsigned __int32)si128.m128i_i32[0] >> 4));
              v51 = (__int64 *)(v58 + 16LL * v74);
              v75 = *v51;
              if ( *v51 == si128.m128i_i64[0] )
              {
LABEL_56:
                v514.m128_u64[0] = (unsigned __int64)v51;
                v76 = si128.m128i_i64[0];
                goto LABEL_57;
              }
              if ( v75 != -4096 )
              {
                v502 = 1;
                v503 = nullptr;
                while ( 1 )
                {
                  if ( v75 == -8192 && !v503 )
                    v503 = v51;
                  v74 = v73 & (v502 + v74);
                  v51 = (__int64 *)(v58 + 16LL * v74);
                  v75 = *v51;
                  if ( *v51 == si128.m128i_i64[0] )
                    goto LABEL_56;
                  if ( v75 == -4096 )
                    break;
                  ++v502;
                }
                if ( v503 )
                {
                  v76 = *v503;
                  v51 = v503;
                  v514.m128_u64[0] = (unsigned __int64)v503;
                  goto LABEL_57;
                }
              }
              *(_DWORD *)(a1 + 8) = v45;
LABEL_59:
              *v51 = v72;
              v51[1] = 0;
            }
LABEL_38:
            v51[1] = a2;
            ++v44;
            sub_EA2530(a1, v53, 1);
            if ( (__int64 *)v48 == v44 )
              return;
          }
          v514.m128_u64[0] = 0;
          goto LABEL_41;
        }
        v274 = ((((((((v28 >> 1) | v28 | (((v28 >> 1) | v28) >> 2)) >> 4) | (v28 >> 1) | v28 | (((v28 >> 1) | v28) >> 2)) >> 8)
                | (((v28 >> 1) | v28 | (((v28 >> 1) | v28) >> 2)) >> 4)
                | (v28 >> 1)
                | v28
                | (((v28 >> 1) | v28) >> 2)) >> 16)
              | (((((v28 >> 1) | v28 | (((v28 >> 1) | v28) >> 2)) >> 4) | (v28 >> 1) | v28 | (((v28 >> 1) | v28) >> 2)) >> 8)
              | (((v28 >> 1) | v28 | (((v28 >> 1) | v28) >> 2)) >> 4)
              | (v28 >> 1)
              | v28
              | (((v28 >> 1) | v28) >> 2))
             + 1;
        if ( v274 < 0x40 )
          v274 = 64;
        *(_DWORD *)(a1 + 16) = v274;
        v275 = (_QWORD *)sub_220C370(16LL * v274, 8, 64, v273, a5, a6);
        *(_QWORD *)a1 = v275;
        if ( !v27 )
        {
          v472 = *(unsigned int *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = 0;
          for ( jj = &v275[2 * v472]; jj != v275; v275 += 2 )
            *v275 = -4096;
          goto LABEL_165;
        }
        v276 = *(unsigned int *)(a1 + 16);
        v277 = v275;
        *(_QWORD *)(a1 + 8) = 0;
        v278 = v276;
        v279 = (__m128i *)(v27 + 16 * v26);
        v280 = &v275[2 * v276];
        if ( v275 != v280 )
        {
          do
          {
            *v277 = -4096;
            v277 += 2;
          }
          while ( v280 != v277 );
        }
        v281 = (__m128i *)v27;
        v282 = v278 - 1;
        do
        {
          v283 = v281->m128i_i64[0];
          if ( v281->m128i_i64[0] != -4096 && v283 != -8192 )
          {
            if ( !v278 )
            {
              *(_QWORD *)&dword_0 = v281->m128i_i64[0];
              BUG();
            }
            v284 = v282 & (((unsigned int)v283 >> 9) ^ ((unsigned int)v283 >> 4));
            v285 = &v275[2 * v284];
            v286 = *v285;
            if ( v283 != *v285 && v286 != -4096 )
            {
              LODWORD(p_si128) = 1;
              v490 = nullptr;
              v505 = v281;
              while ( 1 )
              {
                if ( v286 == -8192 && !v490 )
                  v490 = v285;
                v284 = v282 & ((_DWORD)p_si128 + v284);
                v285 = &v275[2 * v284];
                v286 = *v285;
                if ( v283 == *v285 )
                {
                  v281 = v505;
                  goto LABEL_274;
                }
                if ( v286 == -4096 )
                  break;
                LODWORD(p_si128) = (_DWORD)p_si128 + 1;
              }
              v281 = v505;
              if ( v490 )
                v285 = v490;
            }
LABEL_274:
            *v285 = v283;
            v287 = v281->m128i_i64[1];
            ++*(_DWORD *)(a1 + 8);
            v285[1] = v287;
          }
          ++v281;
        }
        while ( v279 != v281 );
LABEL_164:
        operator delete();
LABEL_165:
        v506 = &v514;
        sub_AC65D0((__int64 *)a1, si128.m128i_i64, &v514);
        v27 = *(_QWORD *)a1;
        LODWORD(v26) = *(_DWORD *)(a1 + 16);
        v30 = (__int64 **)v514.m128_u64[0];
        v189 = *(_DWORD *)(a1 + 8) + 1;
        goto LABEL_166;
      }
    }
    else
    {
      v514.m128_u64[0] = 0;
    }
    v174 = (((((((unsigned int)(2 * v26 - 1) | ((unsigned __int64)(unsigned int)(2 * v26 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v26 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v26 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v26 - 1) | ((unsigned __int64)(unsigned int)(2 * v26 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v26 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v26 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v26 - 1) | ((unsigned __int64)(unsigned int)(2 * v26 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v26 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v26 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v26 - 1) | ((unsigned __int64)(unsigned int)(2 * v26 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v26 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v26 - 1) >> 1);
    v175 = ((v174 >> 16) | v174) + 1;
    if ( (unsigned int)v175 < 0x40 )
      LODWORD(v175) = 64;
    *(_DWORD *)(a1 + 16) = v175;
    v176 = (_QWORD *)sub_220C370(16LL * (unsigned int)v175, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v176;
    if ( !v27 )
    {
      v458 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      for ( kk = &v176[2 * v458]; kk != v176; v176 += 2 )
        *v176 = -4096;
      goto LABEL_165;
    }
    v177 = *(unsigned int *)(a1 + 16);
    v178 = v176;
    *(_QWORD *)(a1 + 8) = 0;
    v179 = v177;
    v180 = (__m128i *)(v27 + 16 * v26);
    v181 = &v176[2 * v177];
    if ( v176 != v181 )
    {
      do
      {
        *v178 = -4096;
        v178 += 2;
      }
      while ( v181 != v178 );
    }
    v182 = (__m128i *)v27;
    v183 = v179 - 1;
    if ( (__m128i *)v27 != v180 )
    {
      do
      {
        v184 = v182->m128i_i64[0];
        if ( v182->m128i_i64[0] != -8192 && v184 != -4096 )
        {
          if ( !v179 )
          {
            *(_QWORD *)&dword_0 = v182->m128i_i64[0];
            BUG();
          }
          v185 = v183 & (((unsigned int)v184 >> 9) ^ ((unsigned int)v184 >> 4));
          v186 = &v176[2 * v185];
          v187 = *v186;
          if ( v184 != *v186 && v187 != -4096 )
          {
            LODWORD(p_si128) = 1;
            v480 = nullptr;
            v505 = v182;
            while ( 1 )
            {
              if ( !v480 && v187 == -8192 )
                v480 = v186;
              v185 = v183 & ((_DWORD)p_si128 + v185);
              v186 = &v176[2 * v185];
              v187 = *v186;
              if ( v184 == *v186 )
              {
                v182 = v505;
                goto LABEL_162;
              }
              if ( v187 == -4096 )
                break;
              LODWORD(p_si128) = (_DWORD)p_si128 + 1;
            }
            v182 = v505;
            if ( v480 )
              v186 = v480;
          }
LABEL_162:
          *v186 = v184;
          v188 = v182->m128i_i64[1];
          ++*(_DWORD *)(a1 + 8);
          v186[1] = v188;
        }
        ++v182;
      }
      while ( v180 != v182 );
    }
    goto LABEL_164;
  }
  if ( v9 == 129 )
  {
    v97 = *(_QWORD *)(a2 + 24);
    v98 = *(_DWORD *)(a1 + 16);
    v99 = *(_QWORD *)a1;
    si128.m128i_i64[0] = v97;
    if ( v98 )
    {
      v100 = v98 - 1;
      v101 = (v98 - 1) & (((unsigned int)v97 >> 9) ^ ((unsigned int)v97 >> 4));
      v102 = (__int64 *)(v99 + 16LL * v101);
      v103 = *v102;
      if ( v97 == *v102 )
        goto LABEL_84;
      v304 = 1;
      v305 = nullptr;
      if ( v103 != -4096 )
      {
        while ( 1 )
        {
          if ( v103 == -8192 && !v305 )
            v305 = v102;
          a6 = (unsigned int)(v304 + 1);
          v101 = v100 & (v304 + v101);
          v102 = (__int64 *)(v99 + 16LL * v101);
          v103 = *v102;
          if ( v97 == *v102 )
            goto LABEL_84;
          if ( v103 == -4096 )
            break;
          ++v304;
        }
        if ( v305 )
          v102 = v305;
      }
      v306 = *(_DWORD *)(a1 + 8);
      v514.m128_u64[0] = (unsigned __int64)v102;
      v307 = v306 + 1;
      a4 = 3 * v98;
      a5 = (unsigned int)(4 * v307);
      if ( (unsigned int)a5 < (unsigned int)a4 )
      {
        v308 = v98 - *(_DWORD *)(a1 + 12) - v307;
        v309 = v98 >> 3;
        if ( (unsigned int)v308 > (unsigned int)v309 )
        {
LABEL_298:
          v190 = *v102 == -4096;
          *(_DWORD *)(a1 + 8) = v307;
          if ( !v190 )
            --*(_DWORD *)(a1 + 12);
          *v102 = v97;
          v102[1] = 0;
LABEL_84:
          v102[1] = a2;
          sub_EA2530(a1, *(_QWORD *)(a2 + 24), 0);
          v107 = *(_QWORD *)(a2 + 32);
          v108 = *(_DWORD *)(a1 + 16);
          v109 = *(_QWORD *)a1;
          si128.m128i_i64[0] = v107;
          if ( v108 )
          {
            v110 = (v108 - 1) & (((unsigned int)v107 >> 9) ^ ((unsigned int)v107 >> 4));
            v111 = (__int64 *)(v109 + 16LL * v110);
            v112 = *v111;
            if ( v107 == *v111 )
              goto LABEL_86;
            v300 = 1;
            v105 = 0;
            if ( v112 != -4096 )
            {
              while ( 1 )
              {
                if ( !v105 && v112 == -8192 )
                  v105 = (__int64)v111;
                v106 = (unsigned int)(v300 + 1);
                v110 = (v108 - 1) & (v300 + v110);
                v111 = (__int64 *)(v109 + 16LL * v110);
                v112 = *v111;
                if ( v107 == *v111 )
                  goto LABEL_86;
                if ( v112 == -4096 )
                  break;
                ++v300;
              }
              if ( v105 )
                v111 = (__int64 *)v105;
            }
            v301 = *(_DWORD *)(a1 + 8);
            v104 = 3 * v108;
            v514.m128_u64[0] = (unsigned __int64)v111;
            v302 = (unsigned int)(v301 + 1);
            if ( 4 * (int)v302 < (unsigned int)v104 )
            {
              v303 = v108 - *(_DWORD *)(a1 + 12) - (unsigned int)v302;
              if ( (unsigned int)v303 > v108 >> 3 )
              {
LABEL_292:
                v190 = *v111 == -4096;
                *(_DWORD *)(a1 + 8) = v302;
                if ( !v190 )
                  --*(_DWORD *)(a1 + 12);
                *v111 = v107;
                v111[1] = 0;
LABEL_86:
                v111[1] = a2;
                sub_EA2530(a1, *(_QWORD *)(a2 + 32), 1);
                v116 = *(_QWORD *)(a2 + 40);
                v117 = *(_DWORD *)(a1 + 16);
                v118 = *(_QWORD *)a1;
                si128.m128i_i64[0] = v116;
                if ( v117 )
                {
                  v119 = v117 - 1;
                  v120 = (v117 - 1) & (((unsigned int)v116 >> 9) ^ ((unsigned int)v116 >> 4));
                  v121 = (__int64 *)(v118 + 16LL * v120);
                  v122 = *v121;
                  if ( v116 == *v121 )
                    goto LABEL_88;
                  v294 = 1;
                  v295 = nullptr;
                  if ( v122 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v122 == -8192 && !v295 )
                        v295 = v121;
                      v115 = (unsigned int)(v294 + 1);
                      v120 = v119 & (v294 + v120);
                      v121 = (__int64 *)(v118 + 16LL * v120);
                      v122 = *v121;
                      if ( v116 == *v121 )
                        goto LABEL_88;
                      if ( v122 == -4096 )
                        break;
                      ++v294;
                    }
                    if ( v295 )
                      v121 = v295;
                  }
                  v296 = *(_DWORD *)(a1 + 8);
                  v514.m128_u64[0] = (unsigned __int64)v121;
                  v297 = v296 + 1;
                  v113 = 3 * v117;
                  v114 = (unsigned int)(4 * v297);
                  if ( (unsigned int)v114 < (unsigned int)v113 )
                  {
                    v298 = v117 - *(_DWORD *)(a1 + 12) - v297;
                    v299 = v117 >> 3;
                    if ( (unsigned int)v298 > (unsigned int)v299 )
                    {
LABEL_286:
                      v190 = *v121 == -4096;
                      *(_DWORD *)(a1 + 8) = v297;
                      if ( !v190 )
                        --*(_DWORD *)(a1 + 12);
                      *v121 = v116;
                      v121[1] = 0;
LABEL_88:
                      v121[1] = a2;
                      sub_EA2530(a1, *(_QWORD *)(a2 + 40), 1);
                      v126 = *(_QWORD *)(a2 + 48);
                      v127 = *(_DWORD *)(a1 + 16);
                      v128 = *(_QWORD *)a1;
                      si128.m128i_i64[0] = v126;
                      if ( v127 )
                      {
                        v129 = v127 - 1;
                        v130 = (v127 - 1) & (((unsigned int)v126 >> 9) ^ ((unsigned int)v126 >> 4));
                        v131 = (__int64 *)(v128 + 16LL * v130);
                        v132 = *v131;
                        if ( v126 == *v131 )
                        {
LABEL_90:
                          v131[1] = a2;
                          sub_EA2530(a1, *(_QWORD *)(a2 + 48), 0);
                          return;
                        }
                        v288 = 1;
                        v289 = nullptr;
                        if ( v132 != -4096 )
                        {
                          while ( 1 )
                          {
                            if ( !v289 && v132 == -8192 )
                              v289 = v131;
                            v125 = (unsigned int)(v288 + 1);
                            v130 = v129 & (v288 + v130);
                            v131 = (__int64 *)(v128 + 16LL * v130);
                            v132 = *v131;
                            if ( v126 == *v131 )
                              goto LABEL_90;
                            if ( v132 == -4096 )
                              break;
                            ++v288;
                          }
                          if ( v289 )
                            v131 = v289;
                        }
                        v290 = *(_DWORD *)(a1 + 8);
                        v514.m128_u64[0] = (unsigned __int64)v131;
                        v291 = v290 + 1;
                        v123 = 3 * v127;
                        v124 = (unsigned int)(4 * v291);
                        if ( (unsigned int)v124 < (unsigned int)v123 )
                        {
                          v292 = v127 - *(_DWORD *)(a1 + 12) - v291;
                          v293 = v127 >> 3;
                          if ( (unsigned int)v292 > (unsigned int)v293 )
                          {
LABEL_280:
                            v190 = *v131 == -4096;
                            *(_DWORD *)(a1 + 8) = v291;
                            if ( !v190 )
                              --*(_DWORD *)(a1 + 12);
                            *v131 = v126;
                            v131[1] = 0;
                            goto LABEL_90;
                          }
                          v405 = (((((((((((unsigned __int64)v129 >> 1) | v129) >> 2)
                                      | ((unsigned __int64)v129 >> 1)
                                      | v129) >> 4)
                                    | ((((unsigned __int64)v129 >> 1) | v129) >> 2)
                                    | ((unsigned __int64)v129 >> 1)
                                    | v129) >> 8)
                                  | ((((((unsigned __int64)v129 >> 1) | v129) >> 2)
                                    | ((unsigned __int64)v129 >> 1)
                                    | v129) >> 4)
                                  | ((((unsigned __int64)v129 >> 1) | v129) >> 2)
                                  | ((unsigned __int64)v129 >> 1)
                                  | v129) >> 16)
                                | ((((((((unsigned __int64)v129 >> 1) | v129) >> 2)
                                    | ((unsigned __int64)v129 >> 1)
                                    | v129) >> 4)
                                  | ((((unsigned __int64)v129 >> 1) | v129) >> 2)
                                  | ((unsigned __int64)v129 >> 1)
                                  | v129) >> 8)
                                | ((((((unsigned __int64)v129 >> 1) | v129) >> 2) | ((unsigned __int64)v129 >> 1) | v129) >> 4)
                                | ((((unsigned __int64)v129 >> 1) | v129) >> 2)
                                | ((unsigned __int64)v129 >> 1)
                                | v129)
                               + 1;
                          if ( (unsigned int)v405 < 0x40 )
                            LODWORD(v405) = 64;
                          *(_DWORD *)(a1 + 16) = v405;
                          v406 = (_QWORD *)sub_220C370(16LL * (unsigned int)v405, 8, 64, v292, v293, v125);
                          *(_QWORD *)a1 = v406;
                          if ( !v128 )
                          {
                            v476 = *(unsigned int *)(a1 + 16);
                            *(_QWORD *)(a1 + 8) = 0;
                            for ( mm = &v406[2 * v476]; mm != v406; v406 += 2 )
                              *v406 = -4096;
                            goto LABEL_368;
                          }
                          v407 = *(unsigned int *)(a1 + 16);
                          v408 = v406;
                          *(_QWORD *)(a1 + 8) = 0;
                          v409 = v407;
                          v410 = (__int64 *)(v128 + 16LL * v127);
                          v411 = &v406[2 * v407];
                          if ( v406 != v411 )
                          {
                            do
                            {
                              *v408 = -4096;
                              v408 += 2;
                            }
                            while ( v411 != v408 );
                          }
                          v412 = (__int64 *)v128;
                          v413 = v409 - 1;
                          do
                          {
                            v414 = *v412;
                            if ( *v412 != -8192 && v414 != -4096 )
                            {
                              if ( !v409 )
                              {
                                *(_QWORD *)&dword_0 = *v412;
                                BUG();
                              }
                              v415 = v413 & (((unsigned int)v414 >> 9) ^ ((unsigned int)v414 >> 4));
                              v416 = &v406[2 * v415];
                              v417 = *v416;
                              if ( v414 != *v416 )
                              {
                                v493 = 1;
                                v494 = nullptr;
                                if ( v417 != -4096 )
                                {
                                  while ( 1 )
                                  {
                                    if ( v417 == -8192 && !v494 )
                                      v494 = v416;
                                    v415 = v413 & (v493 + v415);
                                    LODWORD(p_si128) = v493 + 1;
                                    v416 = &v406[2 * v415];
                                    v417 = *v416;
                                    if ( v414 == *v416 )
                                      goto LABEL_407;
                                    if ( v417 == -4096 )
                                      break;
                                    v493 = (int)p_si128;
                                  }
                                  if ( v494 )
                                    v416 = v494;
                                }
                              }
LABEL_407:
                              *v416 = v414;
                              v418 = v412[1];
                              ++*(_DWORD *)(a1 + 8);
                              v416[1] = v418;
                            }
                            v412 += 2;
                          }
                          while ( v410 != v412 );
LABEL_367:
                          operator delete();
LABEL_368:
                          sub_AC65D0((__int64 *)a1, si128.m128i_i64, &v514);
                          v126 = si128.m128i_i64[0];
                          v291 = *(_DWORD *)(a1 + 8) + 1;
                          v131 = (__int64 *)v514.m128_u64[0];
                          goto LABEL_280;
                        }
                      }
                      else
                      {
                        v514.m128_u64[0] = 0;
                      }
                      v361 = (((((((2 * v127 - 1) | ((unsigned __int64)(2 * v127 - 1) >> 1)) >> 2)
                               | (2 * v127 - 1)
                               | ((unsigned __int64)(2 * v127 - 1) >> 1)) >> 4)
                             | (((2 * v127 - 1) | ((unsigned __int64)(2 * v127 - 1) >> 1)) >> 2)
                             | (2 * v127 - 1)
                             | ((unsigned __int64)(2 * v127 - 1) >> 1)) >> 8)
                           | (((((2 * v127 - 1) | ((unsigned __int64)(2 * v127 - 1) >> 1)) >> 2)
                             | (2 * v127 - 1)
                             | ((unsigned __int64)(2 * v127 - 1) >> 1)) >> 4)
                           | (((2 * v127 - 1) | ((unsigned __int64)(2 * v127 - 1) >> 1)) >> 2)
                           | (2 * v127 - 1)
                           | ((unsigned __int64)(2 * v127 - 1) >> 1);
                      v362 = ((v361 >> 16) | v361) + 1;
                      if ( (unsigned int)v362 < 0x40 )
                        LODWORD(v362) = 64;
                      *(_DWORD *)(a1 + 16) = v362;
                      v363 = (_QWORD *)sub_220C370(16LL * (unsigned int)v362, 8, 64, v123, v124, v125);
                      *(_QWORD *)a1 = v363;
                      if ( !v128 )
                      {
                        v462 = *(unsigned int *)(a1 + 16);
                        *(_QWORD *)(a1 + 8) = 0;
                        for ( nn = &v363[2 * v462]; nn != v363; v363 += 2 )
                          *v363 = -4096;
                        goto LABEL_368;
                      }
                      v364 = *(unsigned int *)(a1 + 16);
                      v365 = v363;
                      *(_QWORD *)(a1 + 8) = 0;
                      v366 = v364;
                      v367 = (__int64 *)(v128 + 16LL * v127);
                      v368 = &v363[2 * v364];
                      if ( v363 != v368 )
                      {
                        do
                        {
                          *v365 = -4096;
                          v365 += 2;
                        }
                        while ( v368 != v365 );
                      }
                      v369 = (__int64 *)v128;
                      v370 = v366 - 1;
                      if ( (__int64 *)v128 != v367 )
                      {
                        do
                        {
                          v371 = *v369;
                          if ( *v369 != -4096 && v371 != -8192 )
                          {
                            if ( !v366 )
                            {
                              *(_QWORD *)&dword_0 = *v369;
                              BUG();
                            }
                            v372 = v370 & (((unsigned int)v371 >> 9) ^ ((unsigned int)v371 >> 4));
                            v373 = &v363[2 * v372];
                            v374 = *v373;
                            if ( v371 != *v373 )
                            {
                              v482 = 1;
                              v483 = nullptr;
                              if ( v374 != -4096 )
                              {
                                while ( 1 )
                                {
                                  if ( !v483 && v374 == -8192 )
                                    v483 = v373;
                                  v372 = v370 & (v482 + v372);
                                  LODWORD(p_si128) = v482 + 1;
                                  v373 = &v363[2 * v372];
                                  v374 = *v373;
                                  if ( v371 == *v373 )
                                    goto LABEL_365;
                                  if ( v374 == -4096 )
                                    break;
                                  v482 = (int)p_si128;
                                }
                                if ( v483 )
                                  v373 = v483;
                              }
                            }
LABEL_365:
                            *v373 = v371;
                            v375 = v369[1];
                            ++*(_DWORD *)(a1 + 8);
                            v373[1] = v375;
                          }
                          v369 += 2;
                        }
                        while ( v367 != v369 );
                      }
                      goto LABEL_367;
                    }
                    v419 = (((((((((((unsigned __int64)v119 >> 1) | v119) >> 2) | ((unsigned __int64)v119 >> 1) | v119) >> 4)
                              | ((((unsigned __int64)v119 >> 1) | v119) >> 2)
                              | ((unsigned __int64)v119 >> 1)
                              | v119) >> 8)
                            | ((((((unsigned __int64)v119 >> 1) | v119) >> 2) | ((unsigned __int64)v119 >> 1) | v119) >> 4)
                            | ((((unsigned __int64)v119 >> 1) | v119) >> 2)
                            | ((unsigned __int64)v119 >> 1)
                            | v119) >> 16)
                          | ((((((((unsigned __int64)v119 >> 1) | v119) >> 2) | ((unsigned __int64)v119 >> 1) | v119) >> 4)
                            | ((((unsigned __int64)v119 >> 1) | v119) >> 2)
                            | ((unsigned __int64)v119 >> 1)
                            | v119) >> 8)
                          | ((((((unsigned __int64)v119 >> 1) | v119) >> 2) | ((unsigned __int64)v119 >> 1) | v119) >> 4)
                          | ((((unsigned __int64)v119 >> 1) | v119) >> 2)
                          | ((unsigned __int64)v119 >> 1)
                          | v119)
                         + 1;
                    if ( (unsigned int)v419 < 0x40 )
                      LODWORD(v419) = 64;
                    *(_DWORD *)(a1 + 16) = v419;
                    v420 = (_QWORD *)sub_220C370(16LL * (unsigned int)v419, 8, 64, v298, v299, v115);
                    *(_QWORD *)a1 = v420;
                    if ( !v118 )
                    {
                      v468 = *(unsigned int *)(a1 + 16);
                      *(_QWORD *)(a1 + 8) = 0;
                      for ( i1 = &v420[2 * v468]; i1 != v420; v420 += 2 )
                        *v420 = -4096;
                      goto LABEL_353;
                    }
                    v421 = *(unsigned int *)(a1 + 16);
                    v422 = v420;
                    *(_QWORD *)(a1 + 8) = 0;
                    v423 = v421;
                    v424 = (__int64 *)(v118 + 16LL * v117);
                    v425 = &v420[2 * v421];
                    if ( v420 != v425 )
                    {
                      do
                      {
                        *v422 = -4096;
                        v422 += 2;
                      }
                      while ( v425 != v422 );
                    }
                    v426 = (__int64 *)v118;
                    v427 = v423 - 1;
                    do
                    {
                      v428 = *v426;
                      if ( *v426 != -4096 && v428 != -8192 )
                      {
                        if ( !v423 )
                        {
                          *(_QWORD *)&dword_0 = *v426;
                          BUG();
                        }
                        v429 = v427 & (((unsigned int)v428 >> 9) ^ ((unsigned int)v428 >> 4));
                        v430 = &v420[2 * v429];
                        v431 = *v430;
                        if ( v428 != *v430 )
                        {
                          v496 = 1;
                          v497 = nullptr;
                          if ( v431 != -4096 )
                          {
                            while ( 1 )
                            {
                              if ( !v497 && v431 == -8192 )
                                v497 = v430;
                              v429 = v427 & (v496 + v429);
                              LODWORD(p_si128) = v496 + 1;
                              v430 = &v420[2 * v429];
                              v431 = *v430;
                              if ( v428 == *v430 )
                                goto LABEL_420;
                              if ( v431 == -4096 )
                                break;
                              v496 = (int)p_si128;
                            }
                            if ( v497 )
                              v430 = v497;
                          }
                        }
LABEL_420:
                        *v430 = v428;
                        v432 = v426[1];
                        ++*(_DWORD *)(a1 + 8);
                        v430[1] = v432;
                      }
                      v426 += 2;
                    }
                    while ( v424 != v426 );
LABEL_352:
                    operator delete();
LABEL_353:
                    sub_AC65D0((__int64 *)a1, si128.m128i_i64, &v514);
                    v116 = si128.m128i_i64[0];
                    v297 = *(_DWORD *)(a1 + 8) + 1;
                    v121 = (__int64 *)v514.m128_u64[0];
                    goto LABEL_286;
                  }
                }
                else
                {
                  v514.m128_u64[0] = 0;
                }
                v346 = (((((((2 * v117 - 1) | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 2)
                         | (2 * v117 - 1)
                         | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 4)
                       | (((2 * v117 - 1) | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 2)
                       | (2 * v117 - 1)
                       | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 8)
                     | (((((2 * v117 - 1) | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 2)
                       | (2 * v117 - 1)
                       | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 4)
                     | (((2 * v117 - 1) | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 2)
                     | (2 * v117 - 1)
                     | ((unsigned __int64)(2 * v117 - 1) >> 1);
                v347 = ((v346 >> 16) | v346) + 1;
                if ( (unsigned int)v347 < 0x40 )
                  LODWORD(v347) = 64;
                *(_DWORD *)(a1 + 16) = v347;
                v348 = (_QWORD *)sub_220C370(16LL * (unsigned int)v347, 8, 64, v113, v114, v115);
                *(_QWORD *)a1 = v348;
                if ( !v118 )
                {
                  v464 = *(unsigned int *)(a1 + 16);
                  *(_QWORD *)(a1 + 8) = 0;
                  for ( i2 = &v348[2 * v464]; i2 != v348; v348 += 2 )
                    *v348 = -4096;
                  goto LABEL_353;
                }
                v349 = *(unsigned int *)(a1 + 16);
                v350 = v348;
                *(_QWORD *)(a1 + 8) = 0;
                v351 = v349;
                v352 = (__int64 *)(v118 + 16LL * v117);
                v353 = &v348[2 * v349];
                if ( v348 != v353 )
                {
                  do
                  {
                    *v350 = -4096;
                    v350 += 2;
                  }
                  while ( v353 != v350 );
                }
                v354 = (__int64 *)v118;
                v355 = v351 - 1;
                if ( (__int64 *)v118 != v352 )
                {
                  do
                  {
                    v356 = *v354;
                    if ( *v354 != -8192 && v356 != -4096 )
                    {
                      if ( !v351 )
                      {
                        *(_QWORD *)&dword_0 = *v354;
                        BUG();
                      }
                      v357 = v355 & (((unsigned int)v356 >> 9) ^ ((unsigned int)v356 >> 4));
                      v358 = &v348[2 * v357];
                      v359 = *v358;
                      if ( v356 != *v358 )
                      {
                        v488 = 1;
                        v489 = nullptr;
                        if ( v359 != -4096 )
                        {
                          while ( 1 )
                          {
                            if ( !v489 && v359 == -8192 )
                              v489 = v358;
                            v357 = v355 & (v488 + v357);
                            LODWORD(p_si128) = v488 + 1;
                            v358 = &v348[2 * v357];
                            v359 = *v358;
                            if ( v356 == *v358 )
                              goto LABEL_350;
                            if ( v359 == -4096 )
                              break;
                            v488 = (int)p_si128;
                          }
                          if ( v489 )
                            v358 = v489;
                        }
                      }
LABEL_350:
                      *v358 = v356;
                      v360 = v354[1];
                      ++*(_DWORD *)(a1 + 8);
                      v358[1] = v360;
                    }
                    v354 += 2;
                  }
                  while ( v352 != v354 );
                }
                goto LABEL_352;
              }
              sub_AC7230(a1, v108, v302, v303, v105, v106);
LABEL_338:
              sub_AC65D0((__int64 *)a1, si128.m128i_i64, &v514);
              v107 = si128.m128i_i64[0];
              LODWORD(v302) = *(_DWORD *)(a1 + 8) + 1;
              v111 = (__int64 *)v514.m128_u64[0];
              goto LABEL_292;
            }
          }
          else
          {
            v514.m128_u64[0] = 0;
          }
          v331 = (((((((2 * v108 - 1) | ((unsigned __int64)(2 * v108 - 1) >> 1)) >> 2)
                   | (2 * v108 - 1)
                   | ((unsigned __int64)(2 * v108 - 1) >> 1)) >> 4)
                 | (((2 * v108 - 1) | ((unsigned __int64)(2 * v108 - 1) >> 1)) >> 2)
                 | (2 * v108 - 1)
                 | ((unsigned __int64)(2 * v108 - 1) >> 1)) >> 8)
               | (((((2 * v108 - 1) | ((unsigned __int64)(2 * v108 - 1) >> 1)) >> 2)
                 | (2 * v108 - 1)
                 | ((unsigned __int64)(2 * v108 - 1) >> 1)) >> 4)
               | (((2 * v108 - 1) | ((unsigned __int64)(2 * v108 - 1) >> 1)) >> 2)
               | (2 * v108 - 1)
               | ((unsigned __int64)(2 * v108 - 1) >> 1);
          v332 = ((v331 >> 16) | v331) + 1;
          if ( (unsigned int)v332 < 0x40 )
            LODWORD(v332) = 64;
          *(_DWORD *)(a1 + 16) = v332;
          v333 = (_QWORD *)sub_220C370(16LL * (unsigned int)v332, 8, 64, v104, v105, v106);
          *(_QWORD *)a1 = v333;
          if ( v109 )
          {
            v334 = *(unsigned int *)(a1 + 16);
            v335 = v333;
            *(_QWORD *)(a1 + 8) = 0;
            v336 = v334;
            v337 = (__int64 *)(v109 + 16LL * v108);
            v338 = &v333[2 * v334];
            if ( v333 != v338 )
            {
              do
              {
                *v335 = -4096;
                v335 += 2;
              }
              while ( v338 != v335 );
            }
            v339 = (__int64 *)v109;
            v340 = v336 - 1;
            if ( (__int64 *)v109 != v337 )
            {
              do
              {
                v341 = *v339;
                if ( *v339 != -8192 && v341 != -4096 )
                {
                  if ( !v336 )
                  {
                    *(_QWORD *)&dword_0 = *v339;
                    BUG();
                  }
                  v342 = v340 & (((unsigned int)v341 >> 9) ^ ((unsigned int)v341 >> 4));
                  v343 = &v333[2 * v342];
                  v344 = *v343;
                  if ( v341 != *v343 )
                  {
                    v484 = 1;
                    v485 = nullptr;
                    if ( v344 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( v344 == -8192 && !v485 )
                          v485 = v343;
                        v342 = v340 & (v484 + v342);
                        LODWORD(p_si128) = v484 + 1;
                        v343 = &v333[2 * v342];
                        v344 = *v343;
                        if ( v341 == *v343 )
                          goto LABEL_335;
                        if ( v344 == -4096 )
                          break;
                        v484 = (int)p_si128;
                      }
                      if ( v485 )
                        v343 = v485;
                    }
                  }
LABEL_335:
                  *v343 = v341;
                  v345 = v339[1];
                  ++*(_DWORD *)(a1 + 8);
                  v343[1] = v345;
                }
                v339 += 2;
              }
              while ( v337 != v339 );
            }
            operator delete();
          }
          else
          {
            v466 = *(unsigned int *)(a1 + 16);
            *(_QWORD *)(a1 + 8) = 0;
            for ( i3 = &v333[2 * v466]; i3 != v333; v333 += 2 )
              *v333 = -4096;
          }
          goto LABEL_338;
        }
        v433 = (((((((((((unsigned __int64)v100 >> 1) | v100) >> 2) | ((unsigned __int64)v100 >> 1) | v100) >> 4)
                  | ((((unsigned __int64)v100 >> 1) | v100) >> 2)
                  | ((unsigned __int64)v100 >> 1)
                  | v100) >> 8)
                | ((((((unsigned __int64)v100 >> 1) | v100) >> 2) | ((unsigned __int64)v100 >> 1) | v100) >> 4)
                | ((((unsigned __int64)v100 >> 1) | v100) >> 2)
                | ((unsigned __int64)v100 >> 1)
                | v100) >> 16)
              | ((((((((unsigned __int64)v100 >> 1) | v100) >> 2) | ((unsigned __int64)v100 >> 1) | v100) >> 4)
                | ((((unsigned __int64)v100 >> 1) | v100) >> 2)
                | ((unsigned __int64)v100 >> 1)
                | v100) >> 8)
              | ((((((unsigned __int64)v100 >> 1) | v100) >> 2) | ((unsigned __int64)v100 >> 1) | v100) >> 4)
              | ((((unsigned __int64)v100 >> 1) | v100) >> 2)
              | ((unsigned __int64)v100 >> 1)
              | v100)
             + 1;
        if ( (unsigned int)v433 < 0x40 )
          LODWORD(v433) = 64;
        *(_DWORD *)(a1 + 16) = v433;
        v434 = (_QWORD *)sub_220C370(16LL * (unsigned int)v433, 8, 64, v308, v309, a6);
        *(_QWORD *)a1 = v434;
        if ( !v99 )
        {
          v470 = *(unsigned int *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = 0;
          for ( i4 = &v434[2 * v470]; i4 != v434; v434 += 2 )
            *v434 = -4096;
          goto LABEL_383;
        }
        v435 = *(unsigned int *)(a1 + 16);
        v436 = v434;
        *(_QWORD *)(a1 + 8) = 0;
        v437 = v435;
        v438 = (__int64 *)(v99 + 16LL * v98);
        v439 = &v434[2 * v435];
        if ( v434 != v439 )
        {
          do
          {
            *v436 = -4096;
            v436 += 2;
          }
          while ( v439 != v436 );
        }
        v440 = (__int64 *)v99;
        v441 = v437 - 1;
        do
        {
          v442 = *v440;
          if ( *v440 != -8192 && v442 != -4096 )
          {
            if ( !v437 )
            {
              *(_QWORD *)&dword_0 = *v440;
              BUG();
            }
            v443 = v441 & (((unsigned int)v442 >> 9) ^ ((unsigned int)v442 >> 4));
            v444 = &v434[2 * v443];
            v445 = *v444;
            if ( v442 != *v444 )
            {
              v491 = 1;
              v492 = nullptr;
              if ( v445 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v492 && v445 == -8192 )
                    v492 = v444;
                  v443 = v441 & (v491 + v443);
                  LODWORD(p_si128) = v491 + 1;
                  v444 = &v434[2 * v443];
                  v445 = *v444;
                  if ( v442 == *v444 )
                    goto LABEL_433;
                  if ( v445 == -4096 )
                    break;
                  v491 = (int)p_si128;
                }
                if ( v492 )
                  v444 = v492;
              }
            }
LABEL_433:
            *v444 = v442;
            v446 = v440[1];
            ++*(_DWORD *)(a1 + 8);
            v444[1] = v446;
          }
          v440 += 2;
        }
        while ( v438 != v440 );
LABEL_382:
        operator delete();
LABEL_383:
        sub_AC65D0((__int64 *)a1, si128.m128i_i64, &v514);
        v97 = si128.m128i_i64[0];
        v307 = *(_DWORD *)(a1 + 8) + 1;
        v102 = (__int64 *)v514.m128_u64[0];
        goto LABEL_298;
      }
    }
    else
    {
      v514.m128_u64[0] = 0;
    }
    v376 = (((((((2 * v98 - 1) | ((unsigned __int64)(2 * v98 - 1) >> 1)) >> 2)
             | (2 * v98 - 1)
             | ((unsigned __int64)(2 * v98 - 1) >> 1)) >> 4)
           | (((2 * v98 - 1) | ((unsigned __int64)(2 * v98 - 1) >> 1)) >> 2)
           | (2 * v98 - 1)
           | ((unsigned __int64)(2 * v98 - 1) >> 1)) >> 8)
         | (((((2 * v98 - 1) | ((unsigned __int64)(2 * v98 - 1) >> 1)) >> 2)
           | (2 * v98 - 1)
           | ((unsigned __int64)(2 * v98 - 1) >> 1)) >> 4)
         | (((2 * v98 - 1) | ((unsigned __int64)(2 * v98 - 1) >> 1)) >> 2)
         | (2 * v98 - 1)
         | ((unsigned __int64)(2 * v98 - 1) >> 1);
    v377 = ((v376 >> 16) | v376) + 1;
    if ( (unsigned int)v377 < 0x40 )
      LODWORD(v377) = 64;
    *(_DWORD *)(a1 + 16) = v377;
    v378 = (_QWORD *)sub_220C370(16LL * (unsigned int)v377, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v378;
    if ( !v99 )
    {
      v460 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      for ( i5 = &v378[2 * v460]; i5 != v378; v378 += 2 )
        *v378 = -4096;
      goto LABEL_383;
    }
    v379 = *(unsigned int *)(a1 + 16);
    v380 = v378;
    *(_QWORD *)(a1 + 8) = 0;
    v381 = v379;
    v382 = (__int64 *)(v99 + 16LL * v98);
    v383 = &v378[2 * v379];
    if ( v378 != v383 )
    {
      do
      {
        *v380 = -4096;
        v380 += 2;
      }
      while ( v383 != v380 );
    }
    v384 = (__int64 *)v99;
    v385 = v381 - 1;
    if ( (__int64 *)v99 != v382 )
    {
      do
      {
        v386 = *v384;
        if ( *v384 != -8192 && v386 != -4096 )
        {
          if ( !v381 )
          {
            *(_QWORD *)&dword_0 = *v384;
            BUG();
          }
          v387 = v385 & (((unsigned int)v386 >> 9) ^ ((unsigned int)v386 >> 4));
          v388 = &v378[2 * v387];
          v389 = *v388;
          if ( v386 != *v388 )
          {
            v486 = 1;
            v487 = nullptr;
            if ( v389 != -4096 )
            {
              while ( 1 )
              {
                if ( !v487 && v389 == -8192 )
                  v487 = v388;
                v387 = v385 & (v486 + v387);
                LODWORD(p_si128) = v486 + 1;
                v388 = &v378[2 * v387];
                v389 = *v388;
                if ( v386 == *v388 )
                  goto LABEL_380;
                if ( v389 == -4096 )
                  break;
                v486 = (int)p_si128;
              }
              if ( v487 )
                v388 = v487;
            }
          }
LABEL_380:
          *v388 = v386;
          v390 = v384[1];
          ++*(_DWORD *)(a1 + 8);
          v388[1] = v390;
        }
        v384 += 2;
      }
      while ( v382 != v384 );
    }
    goto LABEL_382;
  }
  if ( v9 != 250 )
  {
LABEL_107:
    sub_EC6110(&v514, a2);
    v144.m128i_i64[0] = v514.m128_u64[0];
    v142 = v516;
    v505 = &si128;
    v143 = v517;
    si128 = _mm_load_si128((const __m128i *)&v514);
    v513 = v515;
    v144.m128i_i64[1] = si128.m128i_i64[1];
    v506 = (__m128 *)v517;
    while ( 1 )
    {
LABEL_108:
      if ( v142 != (__int64 *)v144.m128i_i64[0] )
      {
LABEL_109:
        if ( (v144.m128i_i8[8] & 3) == 0 )
          goto LABEL_110;
        goto LABEL_119;
      }
      while ( 1 )
      {
        if ( v506 == (__m128 *)v144.m128i_i64[1] )
          return;
        if ( (v144.m128i_i8[8] & 3) == 0 )
        {
LABEL_110:
          v145 = *(_QWORD *)v144.m128i_i64[0];
          if ( *(_QWORD *)v144.m128i_i64[0] )
          {
            v146 = *(unsigned int *)(a1 + 16);
            v147 = *(_QWORD *)a1;
            if ( (_DWORD)v146 )
              goto LABEL_112;
            goto LABEL_121;
          }
LABEL_139:
          v144.m128i_i64[0] += 8;
          si128.m128i_i64[0] = v144.m128i_i64[0];
          goto LABEL_108;
        }
LABEL_119:
        v145 = *(_QWORD *)sub_ECEDF0(v505);
        if ( v145 )
        {
          v146 = *(unsigned int *)(a1 + 16);
          v147 = *(_QWORD *)a1;
          if ( !(_DWORD)v146 )
            goto LABEL_121;
LABEL_112:
          v148 = (unsigned int)(v146 - 1);
          LODWORD(v149) = v148 & (((unsigned int)v145 >> 9) ^ ((unsigned int)v145 >> 4));
          v150 = (_QWORD *)(v147 + 16LL * (unsigned int)v149);
          v151 = *v150;
          if ( *v150 == v145 )
            goto LABEL_113;
          v173 = 1;
          v141 = nullptr;
          if ( v151 != -4096 )
          {
            while ( 1 )
            {
              if ( v151 == -8192 && !v141 )
                v141 = v150;
              v149 = (unsigned int)v148 & ((_DWORD)v149 + v173);
              v150 = (_QWORD *)(v147 + 16 * v149);
              v151 = *v150;
              if ( v145 == *v150 )
                goto LABEL_113;
              if ( v151 == -4096 )
                break;
              ++v173;
            }
            if ( v141 )
              v150 = v141;
          }
          v143 = (__int64 *)(unsigned int)(*(_DWORD *)(a1 + 8) + 1);
          if ( 4 * (int)v143 >= (unsigned int)(3 * v146) )
          {
LABEL_121:
            LODWORD(v507) = v146;
            v152 = ((((((((unsigned int)(2 * v146 - 1) | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 2)
                      | (unsigned int)(2 * v146 - 1)
                      | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 4)
                    | (((unsigned int)(2 * v146 - 1) | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v146 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 8)
                  | (((((unsigned int)(2 * v146 - 1) | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v146 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v146 - 1) | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v146 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 16;
            v153 = (v152
                  | (((((((unsigned int)(2 * v146 - 1) | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 2)
                      | (unsigned int)(2 * v146 - 1)
                      | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 4)
                    | (((unsigned int)(2 * v146 - 1) | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v146 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 8)
                  | (((((unsigned int)(2 * v146 - 1) | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v146 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v146 - 1) | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v146 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v146 - 1) >> 1))
                 + 1;
            if ( (unsigned int)v153 < 0x40 )
              LODWORD(v153) = 64;
            *(_DWORD *)(a1 + 16) = v153;
            v154 = sub_220C370(16LL * (unsigned int)v153, 8, v152, v143, v146, v141);
            v155 = (unsigned int)v507;
            *(_QWORD *)a1 = v154;
            if ( v147 )
            {
              v156 = *(unsigned int *)(a1 + 16);
              *(_QWORD *)(a1 + 8) = 0;
              v157 = (_QWORD *)v154;
              v158 = v156;
              v159 = (_QWORD *)(v147 + 16LL * v155);
              v160 = (_QWORD *)(v154 + 16 * v156);
              if ( (_QWORD *)v154 != v160 )
              {
                do
                {
                  *v157 = -4096;
                  v157 += 2;
                }
                while ( v160 != v157 );
              }
              v161 = (_QWORD *)v147;
              v162 = v158 - 1;
              if ( (_QWORD *)v147 != v159 )
              {
                do
                {
                  v163 = *v161;
                  if ( *v161 != -8192 && v163 != -4096 )
                  {
                    if ( !v158 )
                    {
                      *(_QWORD *)&dword_0 = *v161;
                      BUG();
                    }
                    v164 = v162 & (((unsigned int)v163 >> 9) ^ ((unsigned int)v163 >> 4));
                    v165 = (_QWORD *)(v154 + 16LL * v164);
                    v166 = *v165;
                    if ( *v165 != v163 && v166 != -4096 )
                    {
                      LODWORD(v508) = 1;
                      v507 = nullptr;
                      v509 = v161;
                      while ( 1 )
                      {
                        if ( v166 == -8192 )
                        {
                          if ( v507 )
                            v165 = v507;
                          v507 = v165;
                        }
                        v164 = v162 & ((_DWORD)v508 + v164);
                        v165 = (_QWORD *)(v154 + 16LL * v164);
                        v166 = *v165;
                        if ( v163 == *v165 )
                        {
                          v161 = v509;
                          goto LABEL_131;
                        }
                        if ( v166 == -4096 )
                          break;
                        LODWORD(v508) = (_DWORD)v508 + 1;
                      }
                      v161 = v509;
                      if ( v507 )
                        v165 = v507;
                    }
LABEL_131:
                    *v165 = v163;
                    v167 = v161[1];
                    ++*(_DWORD *)(a1 + 8);
                    v165[1] = v167;
                  }
                  v161 += 2;
                }
                while ( v159 != v161 );
              }
              operator delete();
              v154 = *(_QWORD *)a1;
              v168 = *(_DWORD *)(a1 + 16);
              LODWORD(v143) = *(_DWORD *)(a1 + 8) + 1;
            }
            else
            {
              v258 = *(unsigned int *)(a1 + 16);
              *(_QWORD *)(a1 + 8) = 0;
              v168 = v258;
              v259 = (_QWORD *)(v154 + 16 * v258);
              if ( (_QWORD *)v154 != v259 )
              {
                v260 = (_QWORD *)v154;
                do
                {
                  *v260 = -4096;
                  v260 += 2;
                }
                while ( v259 != v260 );
              }
              LODWORD(v143) = 1;
            }
            if ( v168 )
            {
              v169 = v168 - 1;
              v170 = (v168 - 1) & (((unsigned int)v145 >> 9) ^ ((unsigned int)v145 >> 4));
              v150 = (_QWORD *)(v154 + 16LL * v170);
              v171 = *v150;
              if ( v145 != *v150 )
              {
                if ( v171 == -4096 )
                  goto LABEL_137;
                v500 = (_QWORD *)(v154 + 16LL * (v169 & (((unsigned int)v145 >> 9) ^ ((unsigned int)v145 >> 4))));
                v501 = 1;
                v150 = nullptr;
                while ( 1 )
                {
                  if ( !v150 && v171 == -8192 )
                    v150 = v500;
                  v170 = v169 & (v501 + v170);
                  v500 = (_QWORD *)(v154 + 16LL * v170);
                  v171 = *v500;
                  if ( v145 == *v500 )
                  {
                    v150 = (_QWORD *)(v154 + 16LL * v170);
                    goto LABEL_148;
                  }
                  if ( v171 == -4096 )
                    break;
                  ++v501;
                }
                if ( !v150 )
                {
                  v150 = (_QWORD *)(v154 + 16LL * v170);
                  goto LABEL_137;
                }
LABEL_147:
                v171 = *v150;
              }
              goto LABEL_148;
            }
          }
          else
          {
            if ( (int)v146 - *(_DWORD *)(a1 + 12) - (int)v143 > (unsigned int)v146 >> 3 )
              goto LABEL_147;
            LODWORD(v507) = v146;
            v219 = (((v148 >> 1) | v148 | (((v148 >> 1) | v148) >> 2)) >> 4)
                 | (v148 >> 1)
                 | v148
                 | (((v148 >> 1) | v148) >> 2);
            v220 = (v219 >> 8) | v219;
            v221 = v220 >> 16;
            v222 = ((v220 >> 16) | v220) + 1;
            if ( (unsigned int)v222 < 0x40 )
              LODWORD(v222) = 64;
            *(_DWORD *)(a1 + 16) = v222;
            v223 = sub_220C370(16LL * (unsigned int)v222, 8, v221, v143, v146, v141);
            v224 = (unsigned int)v507;
            *(_QWORD *)a1 = v223;
            if ( v147 )
            {
              v225 = *(unsigned int *)(a1 + 16);
              *(_QWORD *)(a1 + 8) = 0;
              v226 = (_QWORD *)v223;
              v227 = 16LL * v224;
              v228 = v225;
              v507 = (_QWORD *)v227;
              v229 = (_QWORD *)(v147 + v227);
              v230 = (_QWORD *)(v223 + 16 * v225);
              if ( (_QWORD *)v223 != v230 )
              {
                do
                {
                  *v226 = -4096;
                  v226 += 2;
                }
                while ( v230 != v226 );
              }
              v231 = (_QWORD *)v147;
              v232 = v228 - 1;
              do
              {
                v233 = *v231;
                if ( *v231 != -4096 && v233 != -8192 )
                {
                  if ( !v228 )
                  {
                    *(_QWORD *)&dword_0 = *v231;
                    BUG();
                  }
                  v234 = v232 & (((unsigned int)v233 >> 9) ^ ((unsigned int)v233 >> 4));
                  v235 = (__int64 *)(v223 + 16LL * v234);
                  v236 = *v235;
                  if ( v233 != *v235 && v236 != -4096 )
                  {
                    LODWORD(v509) = 1;
                    v508 = nullptr;
                    v510 = v231;
                    while ( 1 )
                    {
                      if ( !v508 )
                      {
                        if ( v236 != -8192 )
                          v235 = v508;
                        v508 = v235;
                      }
                      v234 = v232 & ((_DWORD)v509 + v234);
                      v235 = (__int64 *)(v223 + 16LL * v234);
                      v236 = *v235;
                      if ( v233 == *v235 )
                      {
                        v231 = v510;
                        goto LABEL_223;
                      }
                      if ( v236 == -4096 )
                        break;
                      LODWORD(v509) = (_DWORD)v509 + 1;
                    }
                    v231 = v510;
                    if ( v508 )
                      v235 = v508;
                  }
LABEL_223:
                  *v235 = v233;
                  v237 = v231[1];
                  ++*(_DWORD *)(a1 + 8);
                  v235[1] = v237;
                }
                v231 += 2;
              }
              while ( v229 != v231 );
              operator delete();
              v223 = *(_QWORD *)a1;
              v238 = *(_DWORD *)(a1 + 16);
              LODWORD(v143) = *(_DWORD *)(a1 + 8) + 1;
            }
            else
            {
              v313 = *(unsigned int *)(a1 + 16);
              *(_QWORD *)(a1 + 8) = 0;
              v238 = v313;
              v314 = (_QWORD *)(v223 + 16 * v313);
              if ( (_QWORD *)v223 != v314 )
              {
                v315 = (_QWORD *)v223;
                do
                {
                  *v315 = -4096;
                  v315 += 2;
                }
                while ( v314 != v315 );
              }
              LODWORD(v143) = 1;
            }
            if ( v238 )
            {
              v239 = v238 - 1;
              v240 = (v238 - 1) & (((unsigned int)v145 >> 9) ^ ((unsigned int)v145 >> 4));
              v150 = (_QWORD *)(v223 + 16LL * v240);
              v171 = *v150;
              if ( *v150 == v145 )
              {
                v171 = v145;
              }
              else
              {
                if ( v171 == -4096 )
                  goto LABEL_137;
                v478 = (_QWORD *)(v223 + 16LL * v240);
                v479 = 1;
                v150 = nullptr;
                while ( 1 )
                {
                  if ( v171 == -8192 && !v150 )
                    v150 = v478;
                  v240 = v239 & (v479 + v240);
                  v478 = (_QWORD *)(v223 + 16LL * v240);
                  v171 = *v478;
                  if ( v145 == *v478 )
                    break;
                  if ( v171 == -4096 )
                  {
                    if ( v150 )
                      goto LABEL_147;
                    v150 = (_QWORD *)(v223 + 16LL * v240);
LABEL_137:
                    *(_DWORD *)(a1 + 8) = (_DWORD)v143;
LABEL_150:
                    *v150 = v145;
                    v150[1] = 0;
LABEL_113:
                    v150[1] = a2;
                    sub_EA2530(a1, v145, (unsigned int)p_si128);
                    goto LABEL_114;
                  }
                  ++v479;
                }
                v150 = (_QWORD *)(v223 + 16LL * v240);
              }
LABEL_148:
              *(_DWORD *)(a1 + 8) = (_DWORD)v143;
              if ( v171 != -4096 )
                --*(_DWORD *)(a1 + 12);
              goto LABEL_150;
            }
          }
          ++*(_DWORD *)(a1 + 8);
          BUG();
        }
LABEL_114:
        v144.m128i_i64[1] = si128.m128i_i64[1];
        if ( (si128.m128i_i8[8] & 3) == 0 )
        {
          v144.m128i_i64[0] = si128.m128i_i64[0];
          goto LABEL_139;
        }
        if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
          break;
        sub_ECEC20(v505);
        v144 = si128;
        if ( v142 != (__int64 *)si128.m128i_i64[0] )
          goto LABEL_109;
      }
      sub_ECEA10(v505, 1);
      v144 = si128;
    }
  }
  v506 = &v514;
  sub_EC6110(&v514, a2);
  v14.m128i_i64[0] = v514.m128_u64[0];
  si128 = _mm_load_si128((const __m128i *)&v514);
  v13 = v516;
  v507 = v517;
  v505 = &si128;
  v513 = v515;
  v14.m128i_i64[1] = si128.m128i_i64[1];
LABEL_7:
  if ( v13 == (__int64 *)v14.m128i_i64[0] )
    goto LABEL_16;
  do
  {
    do
    {
      if ( (v14.m128i_i8[8] & 3) == 0 )
      {
        v15 = *(_QWORD *)v14.m128i_i64[0];
        if ( !*(_QWORD *)v14.m128i_i64[0] )
          goto LABEL_61;
        v16 = *(unsigned int *)(a1 + 16);
        v17 = *(_QWORD *)a1;
        if ( (_DWORD)v16 )
          goto LABEL_11;
        goto LABEL_65;
      }
      v15 = *(_QWORD *)sub_ECEDF0(v505);
      if ( v15 )
      {
        v16 = *(unsigned int *)(a1 + 16);
        v17 = *(_QWORD *)a1;
        if ( !(_DWORD)v16 )
          goto LABEL_65;
LABEL_11:
        v18 = (unsigned int)(v16 - 1);
        LODWORD(v19) = v18 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v20 = (__int64 *)(v17 + 16LL * (unsigned int)v19);
        v21 = *v20;
        if ( v15 == *v20 )
        {
LABEL_12:
          v20[1] = a2;
          sub_EA2530(a1, v15, (unsigned int)p_si128);
          goto LABEL_13;
        }
        v133 = 1;
        v12 = 0;
        if ( v21 != -4096 )
        {
          while ( 1 )
          {
            if ( !v12 && v21 == -8192 )
              v12 = (__int64)v20;
            v19 = (unsigned int)v18 & ((_DWORD)v19 + v133);
            v20 = (__int64 *)(v17 + 16 * v19);
            v21 = *v20;
            if ( *v20 == v15 )
              goto LABEL_12;
            if ( v21 == -4096 )
              break;
            ++v133;
          }
          if ( v12 )
            v20 = (__int64 *)v12;
        }
        v10 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
        if ( 4 * (int)v10 < (unsigned int)(3 * v16) )
        {
          if ( (int)v16 - *(_DWORD *)(a1 + 12) - (int)v10 > (unsigned int)v16 >> 3 )
            goto LABEL_95;
          LODWORD(v508) = v16;
          v195 = (((v18 >> 1) | v18 | (((v18 >> 1) | v18) >> 2)) >> 4) | (v18 >> 1) | v18 | (((v18 >> 1) | v18) >> 2);
          v196 = (v195 >> 8) | v195;
          v197 = v196 >> 16;
          v198 = ((v196 >> 16) | v196) + 1;
          if ( (unsigned int)v198 < 0x40 )
            LODWORD(v198) = 64;
          *(_DWORD *)(a1 + 16) = v198;
          v199 = sub_220C370(16LL * (unsigned int)v198, 8, v197, v10, v16, v12);
          v200 = (unsigned int)v508;
          *(_QWORD *)a1 = v199;
          if ( v17 )
          {
            v201 = *(unsigned int *)(a1 + 16);
            *(_QWORD *)(a1 + 8) = 0;
            v202 = (_QWORD *)v199;
            v203 = 16LL * v200;
            v204 = v201;
            v508 = (__int64 *)v203;
            v205 = (_QWORD *)(v17 + v203);
            v206 = (_QWORD *)(v199 + 16 * v201);
            if ( (_QWORD *)v199 != v206 )
            {
              do
              {
                *v202 = -4096;
                v202 += 2;
              }
              while ( v206 != v202 );
            }
            v207 = (_QWORD *)v17;
            v208 = v204 - 1;
            do
            {
              v209 = *v207;
              if ( *v207 != -4096 && v209 != -8192 )
              {
                if ( !v204 )
                {
                  *(_QWORD *)&dword_0 = *v207;
                  BUG();
                }
                v210 = v208 & (((unsigned int)v209 >> 9) ^ ((unsigned int)v209 >> 4));
                v211 = (_QWORD *)(v199 + 16LL * v210);
                v212 = *v211;
                if ( v209 != *v211 && v212 != -4096 )
                {
                  LODWORD(v510) = 1;
                  v509 = nullptr;
                  v511 = v207;
                  while ( 1 )
                  {
                    if ( !v509 )
                    {
                      if ( v212 != -8192 )
                        v211 = v509;
                      v509 = v211;
                    }
                    v210 = v208 & ((_DWORD)v510 + v210);
                    v211 = (_QWORD *)(v199 + 16LL * v210);
                    v212 = *v211;
                    if ( v209 == *v211 )
                    {
                      v207 = v511;
                      goto LABEL_201;
                    }
                    if ( v212 == -4096 )
                      break;
                    LODWORD(v510) = (_DWORD)v510 + 1;
                  }
                  v207 = v511;
                  if ( v509 )
                    v211 = v509;
                }
LABEL_201:
                *v211 = v209;
                v213 = v207[1];
                ++*(_DWORD *)(a1 + 8);
                v211[1] = v213;
              }
              v207 += 2;
            }
            while ( v205 != v207 );
            operator delete();
            v199 = *(_QWORD *)a1;
            v214 = *(_DWORD *)(a1 + 16);
            LODWORD(v10) = *(_DWORD *)(a1 + 8) + 1;
          }
          else
          {
            v310 = *(unsigned int *)(a1 + 16);
            *(_QWORD *)(a1 + 8) = 0;
            v214 = v310;
            v311 = (_QWORD *)(v199 + 16 * v310);
            if ( (_QWORD *)v199 != v311 )
            {
              v312 = (_QWORD *)v199;
              do
              {
                *v312 = -4096;
                v312 += 2;
              }
              while ( v311 != v312 );
            }
            LODWORD(v10) = 1;
          }
          if ( !v214 )
            goto LABEL_813;
          v215 = v214 - 1;
          v216 = (v214 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
          v20 = (__int64 *)(v199 + 16LL * v216);
          v96 = *v20;
          if ( v15 != *v20 )
          {
            if ( v96 == -4096 )
              goto LABEL_81;
            v217 = (__int64 *)(v199 + 16LL * v216);
            v218 = 1;
            v20 = nullptr;
            while ( 1 )
            {
              if ( v96 == -8192 && !v20 )
                v20 = v217;
              v216 = v215 & (v218 + v216);
              v217 = (__int64 *)(v199 + 16LL * v216);
              v96 = *v217;
              if ( *v217 == v15 )
              {
                v96 = v15;
                v20 = (__int64 *)(v199 + 16LL * v216);
                goto LABEL_96;
              }
              if ( v96 == -4096 )
                break;
              ++v218;
            }
            if ( !v20 )
            {
              v20 = (__int64 *)(v199 + 16LL * v216);
LABEL_81:
              *(_DWORD *)(a1 + 8) = v10;
LABEL_98:
              *v20 = v15;
              v20[1] = 0;
              goto LABEL_12;
            }
LABEL_95:
            v96 = *v20;
          }
LABEL_96:
          *(_DWORD *)(a1 + 8) = v10;
          if ( v96 != -4096 )
            --*(_DWORD *)(a1 + 12);
          goto LABEL_98;
        }
LABEL_65:
        LODWORD(v508) = v16;
        v77 = ((((((((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v16 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v16 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 8)
             | (((((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v16 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v16 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 16;
        v78 = (v77
             | (((((((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v16 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v16 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 8)
             | (((((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v16 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v16 - 1) | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v16 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v16 - 1) >> 1))
            + 1;
        if ( (unsigned int)v78 < 0x40 )
          LODWORD(v78) = 64;
        *(_DWORD *)(a1 + 16) = v78;
        v79 = sub_220C370(16LL * (unsigned int)v78, 8, v77, v10, v16, v12);
        v80 = (unsigned int)v508;
        *(_QWORD *)a1 = v79;
        if ( v17 )
        {
          v81 = *(unsigned int *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = 0;
          v82 = (_QWORD *)v79;
          v83 = v81;
          v84 = (_QWORD *)(v17 + 16LL * v80);
          v85 = (_QWORD *)(v79 + 16 * v81);
          if ( (_QWORD *)v79 != v85 )
          {
            do
            {
              *v82 = -4096;
              v82 += 2;
            }
            while ( v85 != v82 );
          }
          v86 = (_QWORD *)v17;
          v87 = v83 - 1;
          if ( (_QWORD *)v17 != v84 )
          {
            do
            {
              v88 = *v86;
              if ( *v86 != -8192 && v88 != -4096 )
              {
                if ( !v83 )
                {
                  *(_QWORD *)&dword_0 = *v86;
                  BUG();
                }
                v89 = v87 & (((unsigned int)v88 >> 9) ^ ((unsigned int)v88 >> 4));
                v90 = (__int64 *)(v79 + 16LL * v89);
                v91 = *v90;
                if ( *v90 != v88 && v91 != -4096 )
                {
                  LODWORD(v509) = 1;
                  v508 = nullptr;
                  v510 = v86;
                  while ( 1 )
                  {
                    if ( !v508 )
                    {
                      if ( v91 != -8192 )
                        v90 = v508;
                      v508 = v90;
                    }
                    v89 = v87 & ((_DWORD)v509 + v89);
                    v90 = (__int64 *)(v79 + 16LL * v89);
                    v91 = *v90;
                    if ( v88 == *v90 )
                    {
                      v86 = v510;
                      goto LABEL_75;
                    }
                    if ( v91 == -4096 )
                      break;
                    LODWORD(v509) = (_DWORD)v509 + 1;
                  }
                  v86 = v510;
                  if ( v508 )
                    v90 = v508;
                }
LABEL_75:
                *v90 = v88;
                v92 = v86[1];
                ++*(_DWORD *)(a1 + 8);
                v90[1] = v92;
              }
              v86 += 2;
            }
            while ( v84 != v86 );
          }
          operator delete();
          v79 = *(_QWORD *)a1;
          v93 = *(_DWORD *)(a1 + 16);
          LODWORD(v10) = *(_DWORD *)(a1 + 8) + 1;
        }
        else
        {
          v261 = *(unsigned int *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = 0;
          v93 = v261;
          v262 = (_QWORD *)(v79 + 16 * v261);
          if ( (_QWORD *)v79 != v262 )
          {
            v263 = (_QWORD *)v79;
            do
            {
              *v263 = -4096;
              v263 += 2;
            }
            while ( v262 != v263 );
          }
          LODWORD(v10) = 1;
        }
        if ( !v93 )
        {
LABEL_813:
          ++*(_DWORD *)(a1 + 8);
          BUG();
        }
        v94 = v93 - 1;
        v95 = (v93 - 1) & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4));
        v20 = (__int64 *)(v79 + 16LL * v95);
        v96 = *v20;
        if ( v15 != *v20 )
        {
          if ( v96 == -4096 )
            goto LABEL_81;
          v498 = (__int64 *)(v79 + 16LL * (v94 & (((unsigned int)v15 >> 9) ^ ((unsigned int)v15 >> 4))));
          v499 = 1;
          v20 = nullptr;
          while ( 1 )
          {
            if ( !v20 && v96 == -8192 )
              v20 = v498;
            v95 = v94 & (v499 + v95);
            v498 = (__int64 *)(v79 + 16LL * v95);
            v96 = *v498;
            if ( *v498 == v15 )
            {
              v96 = v15;
              v20 = (__int64 *)(v79 + 16LL * v95);
              goto LABEL_96;
            }
            if ( v96 == -4096 )
              break;
            ++v499;
          }
          if ( !v20 )
          {
            v20 = (__int64 *)(v79 + 16LL * v95);
            goto LABEL_81;
          }
          goto LABEL_95;
        }
        goto LABEL_96;
      }
LABEL_13:
      v14.m128i_i64[1] = si128.m128i_i64[1];
      if ( (si128.m128i_i8[8] & 3) == 0 )
      {
        v14.m128i_i64[0] = si128.m128i_i64[0];
LABEL_61:
        v14.m128i_i64[0] += 8;
        si128.m128i_i64[0] = v14.m128i_i64[0];
        goto LABEL_7;
      }
      if ( (si128.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        sub_ECEA10(v505, 1);
        v14 = si128;
        goto LABEL_7;
      }
      sub_ECEC20(v505);
      v14 = si128;
    }
    while ( v13 != (__int64 *)si128.m128i_i64[0] );
LABEL_16:
    ;
  }
  while ( v507 != (_QWORD *)v14.m128i_i64[1] );
  v22 = *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 8) + 32);
  si128.m128i_i64[0] = v22;
  if ( v22 )
  {
    v23 = *(_DWORD *)(a1 + 16);
    if ( !v23 )
    {
      v514.m128_u64[0] = 0;
      goto LABEL_445;
    }
    v14.m128i_i32[2] = (v23 - 1) & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
    v14.m128i_i64[0] = *(_QWORD *)a1 + 16LL * v14.m128i_u32[2];
    v24 = *(_QWORD *)v14.m128i_i64[0];
    if ( v22 == *(_QWORD *)v14.m128i_i64[0] )
      goto LABEL_20;
    v447 = 1;
    v448 = 0;
    if ( v24 == -4096 )
    {
LABEL_439:
      v449 = *(_DWORD *)(a1 + 8);
      v514.m128_u64[0] = v14.m128i_i64[0];
      v14.m128i_i64[1] = (unsigned int)(v449 + 1);
      v11 = (unsigned int)(4 * v14.m128i_i32[2]);
      if ( (unsigned int)v11 < 3 * v23 )
      {
        v11 = v23 >> 3;
        if ( v23 - *(_DWORD *)(a1 + 12) - v14.m128i_i32[2] > (unsigned int)v11 )
          goto LABEL_441;
        goto LABEL_446;
      }
LABEL_445:
      v23 *= 2;
LABEL_446:
      sub_AC7230(a1, v23, v14.m128i_i64[1], v22, v11, v12);
      sub_AC65D0((__int64 *)a1, si128.m128i_i64, v506);
      v22 = si128.m128i_i64[0];
      v14.m128i_i32[2] = *(_DWORD *)(a1 + 8) + 1;
      v14.m128i_i64[0] = v514.m128_u64[0];
LABEL_441:
      v190 = *(_QWORD *)v14.m128i_i64[0] == -4096;
      *(_DWORD *)(a1 + 8) = v14.m128i_i32[2];
      if ( !v190 )
        --*(_DWORD *)(a1 + 12);
      *(_QWORD *)v14.m128i_i64[0] = v22;
      *(_QWORD *)(v14.m128i_i64[0] + 8) = 0;
    }
    else
    {
      while ( 1 )
      {
        if ( !v448 && v24 == -8192 )
          v448 = v14.m128i_i64[0];
        v12 = (unsigned int)(v447 + 1);
        v14.m128i_i32[2] = (v23 - 1) & (v447 + v14.m128i_i32[2]);
        v14.m128i_i64[0] = *(_QWORD *)a1 + 16LL * v14.m128i_u32[2];
        v24 = *(_QWORD *)v14.m128i_i64[0];
        if ( v22 == *(_QWORD *)v14.m128i_i64[0] )
          break;
        if ( v24 == -4096 )
        {
          if ( v448 )
            v14.m128i_i64[0] = v448;
          goto LABEL_439;
        }
        ++v447;
      }
    }
LABEL_20:
    *(_QWORD *)(v14.m128i_i64[0] + 8) = a2;
    sub_EA2530(a1, si128.m128i_i64[0], (unsigned int)p_si128);
  }
}

