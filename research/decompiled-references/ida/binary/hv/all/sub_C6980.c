unsigned __int64 __fastcall sub_C6980(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v5; // r15
  int v7; // eax
  __int64 v9; // r12
  int v10; // edx
  char **v11; // rcx
  _QWORD *v12; // rsi
  char *v13; // r9
  unsigned int v14; // r14d
  __int64 v15; // rax
  char *v16; // rbx
  int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned int v22; // r13d
  __int64 v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r11
  __int64 v26; // r10
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned int v29; // edi
  unsigned int v30; // r12d
  __int64 v31; // rax
  int v32; // r12d
  __int64 v33; // r9
  char *v34; // rdx
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // r8
  unsigned int v37; // edi
  unsigned __int64 v38; // rdx
  int v39; // ecx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rsi
  int v42; // r11d
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 *v45; // rcx
  __int64 *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // r8
  char *v51; // rcx
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rcx
  int v54; // ebx
  unsigned __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  char *v60; // rsi
  char *v61; // r10
  unsigned __int64 v62; // r9
  __m128i *v63; // rdi
  unsigned __int64 v64; // r11
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r12
  int v68; // edx
  char **v69; // rcx
  _QWORD *v70; // rsi
  char *v71; // r9
  unsigned int v72; // r14d
  __int64 v73; // rax
  char *v74; // rbx
  int v75; // ecx
  int v76; // eax
  __int64 v77; // r15
  __int64 v78; // rax
  unsigned int v79; // r13d
  __int64 v80; // r14
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // r11
  __int64 v83; // r10
  unsigned __int64 v84; // rbx
  unsigned __int64 v85; // rax
  unsigned int v86; // edi
  unsigned int v87; // r12d
  __int64 v88; // rax
  int v89; // r12d
  __int64 v90; // r9
  char *v91; // rdx
  unsigned __int64 v92; // r14
  unsigned __int64 v93; // r8
  unsigned int v94; // edi
  unsigned __int64 v95; // rdx
  int v96; // ecx
  unsigned __int64 v97; // rax
  unsigned __int64 v98; // rsi
  int v99; // r11d
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 *v102; // rcx
  __int64 *v103; // rdi
  __int64 v104; // r8
  __int64 v105; // rdx
  char *v108; // rcx
  unsigned __int64 v109; // r9
  unsigned __int64 v110; // rcx
  int v111; // ebx
  unsigned __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rsi
  char *v117; // rsi
  char *v118; // r10
  unsigned __int64 v119; // r9
  __m128i *v120; // rdi
  unsigned __int64 v121; // r11
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // r14
  int v125; // edx
  _QWORD *v126; // rsi
  char **v127; // rcx
  char *v128; // r8
  char *v129; // r11
  char *v130; // r9
  int v131; // ecx
  unsigned __int64 v132; // rbp
  __int64 v133; // r15
  __int64 v134; // r14
  unsigned __int64 v135; // rax
  unsigned __int64 v136; // r11
  __int64 v137; // r10
  unsigned __int64 v138; // r12
  unsigned __int64 v139; // rax
  unsigned int v140; // edi
  unsigned int v141; // r13d
  __int64 v142; // rax
  int v143; // r13d
  __int64 v144; // r9
  char *v145; // rdx
  unsigned __int64 v146; // rbx
  unsigned __int64 v147; // r8
  unsigned int v148; // edi
  unsigned __int64 v149; // rdx
  int v150; // ecx
  unsigned __int64 v151; // rax
  unsigned __int64 v152; // rsi
  int v153; // r11d
  __int64 v154; // rdx
  __int64 v155; // rcx
  char *v156; // rcx
  __int64 *v157; // rdi
  __int64 v158; // rdx
  __int64 v159; // r8
  char *v162; // rcx
  unsigned __int64 v163; // r9
  unsigned __int64 v164; // rcx
  int v165; // r12d
  unsigned __int64 v166; // rdi
  __int64 v167; // rax
  __int64 v168; // rsi
  char *v171; // rsi
  char *v172; // r10
  unsigned __int64 v173; // r9
  __m128i *v174; // rdi
  unsigned __int64 v175; // r11
  __int64 v176; // rax
  __int64 v177; // rdx
  unsigned __int64 v178; // rdi
  unsigned __int64 v179; // rdi
  unsigned __int64 v180; // rdi
  char *v181; // rsi
  unsigned __int64 v182; // rcx
  char *v183; // r8
  unsigned __int64 v184; // rax
  unsigned __int64 v185; // r9
  __int64 v186; // rdi
  __int64 v187; // r10
  __int64 *v188; // rdi
  __int64 *v189; // r10
  __int64 v190; // rdx
  __int64 v191; // r11
  unsigned __int64 v194; // r11
  char *v195; // rsi
  unsigned __int64 v196; // rcx
  char *v197; // r8
  unsigned __int64 v198; // rax
  unsigned __int64 v199; // r9
  __int64 v200; // rdi
  __int64 v201; // r10
  __int64 *v202; // rdi
  __int64 *v203; // r10
  __int64 v204; // rdx
  __int64 v205; // r11
  unsigned __int64 v208; // r11
  char *v209; // rsi
  unsigned __int64 v210; // rcx
  char *v211; // r8
  unsigned __int64 v212; // rax
  unsigned __int64 v213; // r9
  __int64 v214; // rdi
  __int64 v215; // r10
  __int64 *v216; // rdi
  __int64 *v217; // r10
  __int64 v218; // r11
  __int64 v219; // rdx
  unsigned __int64 v222; // r11
  __m128i *v223; // rdi
  unsigned __int64 v224; // rbx
  __int64 v225; // rax
  __m128i *v226; // rdi
  unsigned __int64 v227; // rbx
  __int64 v228; // rax
  __m128i *v229; // rdi
  unsigned __int64 v230; // rbx
  __int64 v231; // rax
  __int64 v232; // rdx
  __int64 v233; // rax
  int v234; // r9d
  unsigned int v235; // ecx
  char *v236; // rax
  bool v237; // cc
  char *v238; // rsi
  unsigned __int64 v239; // rcx
  char *v240; // r8
  unsigned __int64 v241; // rdx
  unsigned __int64 v242; // r10
  __int64 v243; // rdi
  __int64 v244; // r11
  unsigned __int64 v247; // r10
  char *v248; // r11
  __m128i *v249; // rdi
  __int64 v250; // rax
  unsigned __int64 v251; // rax
  int v252; // esi
  __int64 v253; // rdx
  __int64 v254; // rax
  int v255; // ebx
  int v256; // r9d
  unsigned int v257; // ecx
  char *v258; // rax
  __int64 v259; // rdx
  __int64 v260; // rax
  int v261; // r9d
  unsigned int v262; // ecx
  char *v263; // rax
  char *v264; // rsi
  unsigned __int64 v265; // rcx
  char *v266; // r8
  unsigned __int64 v267; // rdx
  unsigned __int64 v268; // r10
  __int64 v269; // rdi
  __int64 v270; // r11
  unsigned __int64 v273; // r10
  char *v274; // r11
  __m128i *v275; // rdi
  __int64 v276; // rax
  unsigned __int64 v277; // rax
  int v278; // esi
  int v279; // ebp
  __m128i *v280; // rdi
  unsigned __int64 v281; // rbx
  __int64 v282; // rax
  int v283; // ebp
  __m128i *v284; // rdi
  unsigned __int64 v285; // rbx
  __int64 v286; // rax
  int v287; // ebp
  __m128i *v288; // rdi
  unsigned __int64 v289; // rbx
  __int64 v290; // rax
  __int64 v291; // rdx
  __int64 v292; // rdx
  __int64 v293; // rdx
  __int64 v294; // rdx
  __int64 v295; // rdx
  __int64 v296; // rdx
  __m128i *v309; // rax
  char *v310; // rdx
  __m128i *v311; // rax
  const __m128i *v312; // rcx
  __m128i v313; // xmm0
  __m128i *v314; // rax
  char *v315; // rdx
  __m128i *v316; // rax
  const __m128i *v317; // rcx
  __m128i v318; // xmm2
  __m128i *v319; // rax
  char *v320; // rdx
  __m128i *v321; // rax
  const __m128i *v322; // rcx
  __m128i v323; // xmm4
  __m128i *v324; // rax
  char *v325; // rdx
  __m128i *v326; // rax
  const __m128i *v327; // rcx
  __m128i v328; // xmm0
  __m128i *v329; // rax
  char *v330; // rdx
  __m128i *v331; // rax
  const __m128i *v332; // rcx
  __m128i v333; // xmm6
  __m128i *v334; // rax
  char *v335; // rdx
  __m128i *v336; // rax
  const __m128i *v337; // rcx
  __m128i v338; // xmm6
  char *v339; // rcx
  signed __int64 v342; // rax
  char *v343; // rcx
  signed __int64 v346; // rax
  char *v347; // rcx
  signed __int64 v350; // rax
  __int64 *v351; // rsi
  char *v352; // rax
  __int64 *v353; // rsi
  _QWORD *v354; // rax
  __int64 *v355; // rsi
  _QWORD *v356; // rax
  char *v357; // rsi
  unsigned __int64 v358; // rcx
  char *v359; // r8
  unsigned __int64 v360; // rdx
  unsigned __int64 v361; // r10
  __int64 v362; // rdi
  __int64 v363; // r11
  unsigned __int64 v366; // r10
  char *v367; // r11
  __m128i *v368; // rdi
  __int64 v369; // rax
  unsigned __int64 v370; // rax
  int v371; // eax
  __int64 v372; // rdx
  __int64 v373; // rdx
  __int64 *v374; // r11
  __int64 *v375; // rsi
  __int64 v376; // rdx
  __int64 *v377; // r11
  __int64 *v378; // rsi
  __int64 *v379; // r11
  __int64 *v380; // rsi
  __int64 v381; // rdx
  __int64 v382; // rdi
  __int64 v385; // rdx
  __int64 v386; // rdi
  __int64 v389; // rdx
  __int64 v390; // rdi
  __int64 *v393; // r11
  __int64 *v394; // rdi
  _DWORD *v395; // r11
  _DWORD *v396; // rdi
  __int64 *v397; // r11
  __int64 *v398; // rdi
  char *v399; // r9
  signed __int64 v402; // rcx
  char *v403; // r9
  signed __int64 v406; // rcx
  char *v407; // r9
  signed __int64 v410; // rcx
  __int64 v411; // r8
  __int64 v412; // rax
  __int64 v415; // rax
  __int64 v416; // r8
  __int64 v419; // rax
  __int64 v420; // r8
  char *v423; // rcx
  signed __int64 v426; // rax
  char *v427; // rcx
  signed __int64 v430; // rax
  char *v431; // rcx
  signed __int64 v434; // rax
  __int64 v435; // rax
  __int64 v438; // rax
  __int64 v441; // rax
  __m128i *v444; // rax
  char *v445; // rdx
  __m128i *v446; // rax
  const __m128i *v447; // rcx
  __m128i v448; // xmm4
  __m128i *v449; // rax
  char *v450; // rdx
  __m128i *v451; // rax
  const __m128i *v452; // rcx
  __m128i v453; // xmm2
  __m128i *v454; // rax
  char *v455; // rdx
  __m128i *v456; // rax
  const __m128i *v457; // rcx
  __m128i v458; // xmm4
  __int64 *v459; // r8
  _QWORD *v460; // rcx
  __int64 *v461; // r8
  _QWORD *v462; // rcx
  __int64 *v463; // r8
  char *v464; // rcx
  __int64 *v465; // rsi
  _QWORD *v466; // rax
  __int64 *v467; // rsi
  char *v468; // rax
  __int64 *v469; // rsi
  _DWORD *v470; // rax
  __int64 v471; // rdi
  __int64 v472; // rax
  __int64 v475; // rdi
  __int64 v476; // rax
  __int64 v479; // rdi
  __int64 v480; // rax
  __int64 v483; // rdx
  __int64 v484; // rdi
  __int64 v487; // rdx
  __int64 v488; // rdi
  __int64 v491; // rdx
  __int64 v492; // rdi
  int v495; // eax
  int v496; // esi
  int v497; // esi
  __int64 v498; // [rsp+0h] [rbp-F8h]
  __int64 v499; // [rsp+0h] [rbp-F8h]
  __int64 v500; // [rsp+0h] [rbp-F8h]
  _BOOL4 v502; // [rsp+10h] [rbp-E8h]
  _BOOL4 v503; // [rsp+10h] [rbp-E8h]
  _BOOL4 v504; // [rsp+10h] [rbp-E8h]
  __int64 v505; // [rsp+10h] [rbp-E8h]
  __int64 v506; // [rsp+10h] [rbp-E8h]
  __int64 v507; // [rsp+10h] [rbp-E8h]
  char *v508; // [rsp+20h] [rbp-D8h]
  char *v509; // [rsp+20h] [rbp-D8h]
  char *v510; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v511; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v512; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v513; // [rsp+28h] [rbp-D0h]
  char v514; // [rsp+34h] [rbp-C4h]
  char v515; // [rsp+34h] [rbp-C4h]
  char v516; // [rsp+34h] [rbp-C4h]
  char *v517; // [rsp+38h] [rbp-C0h]
  char *v518; // [rsp+38h] [rbp-C0h]
  char *v519; // [rsp+38h] [rbp-C0h]
  char v520; // [rsp+40h] [rbp-B8h]
  char v521; // [rsp+40h] [rbp-B8h]
  char v522; // [rsp+40h] [rbp-B8h]
  unsigned int v523; // [rsp+4Ch] [rbp-ACh]
  unsigned int v524; // [rsp+4Ch] [rbp-ACh]
  unsigned int v525; // [rsp+4Ch] [rbp-ACh]
  const __m128i *v526; // [rsp+50h] [rbp-A8h]
  unsigned int v527; // [rsp+50h] [rbp-A8h]
  unsigned int v528; // [rsp+58h] [rbp-A0h]
  unsigned int v529; // [rsp+58h] [rbp-A0h]
  const __m128i *v530; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v531; // [rsp+60h] [rbp-98h]
  char *v532; // [rsp+60h] [rbp-98h]
  __int64 v533; // [rsp+68h] [rbp-90h]
  __int64 v534; // [rsp+68h] [rbp-90h]
  unsigned int v535; // [rsp+68h] [rbp-90h]
  int v536; // [rsp+70h] [rbp-88h]
  __int64 v537; // [rsp+70h] [rbp-88h]
  int v538; // [rsp+78h] [rbp-80h]
  int v539; // [rsp+78h] [rbp-80h]
  int v540; // [rsp+7Ch] [rbp-7Ch]
  int v541; // [rsp+7Ch] [rbp-7Ch]
  int v542; // [rsp+7Ch] [rbp-7Ch]
  __int64 v543; // [rsp+80h] [rbp-78h]
  __int64 v544; // [rsp+80h] [rbp-78h]
  int v545; // [rsp+80h] [rbp-78h]
  const __m128i *v546; // [rsp+88h] [rbp-70h]
  const __m128i *v547; // [rsp+88h] [rbp-70h]
  unsigned __int64 v548; // [rsp+90h] [rbp-68h]
  unsigned __int64 v549; // [rsp+90h] [rbp-68h]
  const __m128i *v550; // [rsp+90h] [rbp-68h]
  __int64 *v551; // [rsp+98h] [rbp-60h]
  __int64 *v552; // [rsp+98h] [rbp-60h]
  unsigned __int64 v553; // [rsp+98h] [rbp-60h]
  char *v554; // [rsp+A0h] [rbp-58h]
  char *v555; // [rsp+A0h] [rbp-58h]
  __int64 *v556; // [rsp+A0h] [rbp-58h]
  unsigned int v557; // [rsp+A8h] [rbp-50h]
  unsigned int v558; // [rsp+A8h] [rbp-50h]
  char *v559; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v560; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v561; // [rsp+B0h] [rbp-48h]
  unsigned int v562; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v563; // [rsp+B8h] [rbp-40h]

  v5 = a4;
  v7 = *(_DWORD *)(a1 + 272);
  if ( v7 == 6 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_DWORD *)(a1 + 264);
    v498 = *(_QWORD *)(a1 + 112);
    v11 = *(char ***)(a1 + 248);
    v533 = (unsigned int)(*(_DWORD *)(a1 + 276) == 0) + *(_DWORD *)(a1 + 276);
    v12 = (__int64 *)((char *)v5->m128i_i64 + v533);
    v13 = v11[14];
    v14 = *(_DWORD *)(a1 + 24);
    v531 = (unsigned __int64)v5->m128i_u64 + a5;
    v511 = (unsigned __int64)&v5->m128i_u64[-1] + a5;
    v508 = v11[1];
    v517 = v13;
    v551 = (__int64 *)(v9 + v14);
    v536 = a3[1];
    v15 = *((unsigned int *)v11 + 6);
    v538 = *a3;
    v16 = *v11;
    v528 = *((_DWORD *)v11 + 6);
    v17 = *((_DWORD *)v11 + 66);
    v560 = (unsigned __int64)&v508[v15];
    v554 = v16;
    v540 = (_DWORD)v16 - (_DWORD)v508;
    v557 = v14 - ((_DWORD)v16 - (_DWORD)v508);
    v18 = (_DWORD)v16 + (_DWORD)v5 - (_DWORD)v551 - ((_DWORD)v508 + v15);
    if ( *(_DWORD *)(a1 + 296) && 4LL << v17 )
    {
      v180 = 0;
      do
      {
        _mm_prefetch(&v13[v180], 2);
        v180 += 64LL;
      }
      while ( 4LL << v17 > v180 );
    }
    v19 = (unsigned __int64)v5->m128i_u64 + (v18 == 0);
    if ( (unsigned __int64)v12 > v511 )
    {
LABEL_48:
      *a3 = v538;
      a3[1] = v536;
      return v531 - (_QWORD)v5;
    }
    v526 = v5;
    v20 = v9;
    v523 = v14 - 1;
    v520 = 56 - v17;
    v514 = 64 - v10;
    v548 = v531 - 7;
    v546 = (const __m128i *)(v531 - 32);
    v21 = a2;
    v22 = v14;
    v23 = v21;
LABEL_8:
    v24 = 0xCF1BBCDCBF9B0000LL * *(_QWORD *)v19;
    v25 = v19 + 256;
    v26 = v533;
    v543 = v23;
    v27 = v24 >> v514;
    v28 = v24 >> v520;
    v29 = *(_DWORD *)&v517[4 * (v28 >> 8)];
    v30 = v19 - v20;
    v502 = (_BYTE)v28 == (unsigned __int8)v29;
    v31 = *(unsigned int *)(v498 + 4 * v27);
    while ( 1 )
    {
      v33 = v30 + 1 - v538;
      v34 = (char *)(v20 + v33);
      if ( v22 > (unsigned int)v33 )
        v34 = &v508[(unsigned int)v33 + v540 - v22];
      v35 = (0xCF1BBCDCBF9B0000LL * *v12) >> v514;
      v36 = (0xCF1BBCDCBF9B0000LL * *v12) >> v520;
      *(_DWORD *)(v498 + 4 * v27) = v30;
      if ( v523 - (unsigned int)v33 > 2 && *(_DWORD *)v34 == *(_DWORD *)(v19 + 1) )
      {
        v181 = v34 + 4;
        v182 = v19 + 5;
        v23 = v543;
        v183 = (char *)v531;
        if ( v22 > (unsigned int)v33 )
          v183 = v554;
        v184 = v182 + v183 - v181;
        if ( v531 < v184 )
          v184 = v531;
        v185 = v184 - 7;
        if ( v182 >= v184 - 7 )
        {
          v189 = (__int64 *)(v34 + 4);
          v188 = (__int64 *)(v19 + 5);
          goto LABEL_175;
        }
        v186 = *(_QWORD *)(v34 + 4);
        v187 = *(_QWORD *)(v19 + 5);
        if ( v186 == v187 )
        {
          v188 = (__int64 *)(v19 + 13);
          v189 = (__int64 *)(v34 + 12);
          if ( v185 > v19 + 13 )
          {
            v190 = *(_QWORD *)(v34 + 12);
            v191 = *(_QWORD *)(v19 + 13);
            if ( v190 != v191 )
            {
LABEL_155:
              _RDX = v191 ^ v190;
              __asm { tzcnt   r11, rdx }
              v194 = (unsigned __int64)v188 + ((unsigned int)_R11 >> 3) - v182;
              goto LABEL_184;
            }
            while ( 1 )
            {
              ++v188;
              ++v189;
              if ( v185 <= (unsigned __int64)v188 )
                break;
              v190 = *v189;
              v191 = *v188;
              if ( *v189 != *v188 )
                goto LABEL_155;
            }
          }
LABEL_175:
          if ( (unsigned __int64)v188 < v184 - 3 && *(_DWORD *)v189 == *(_DWORD *)v188 )
          {
            v188 = (__int64 *)((char *)v188 + 4);
            v189 = (__int64 *)((char *)v189 + 4);
          }
          if ( (unsigned __int64)v188 < v184 - 1 && *(_WORD *)v189 == *(_WORD *)v188 )
          {
            v188 = (__int64 *)((char *)v188 + 2);
            v189 = (__int64 *)((char *)v189 + 2);
          }
          if ( v184 > (unsigned __int64)v188 )
            v188 = (__int64 *)((char *)v188 + (*(_BYTE *)v189 == *(_BYTE *)v188));
          v194 = (unsigned __int64)v188 - v182;
        }
        else
        {
          _RDI = v187 ^ v186;
          __asm { tzcnt   rdi, rdi }
          v194 = (unsigned int)_RDI >> 3;
        }
LABEL_184:
        if ( v183 != &v181[v194] )
        {
LABEL_185:
          v62 = v19 + 1;
          v61 = (char *)(v194 + 4);
          v223 = *(__m128i **)(v543 + 24);
          v224 = v19 + 1 - (_QWORD)v526;
          if ( v19 + 1 > (unsigned __int64)v546 )
          {
            sub_C02D0(v223, v526, v19 + 1, v546);
          }
          else
          {
            *v223 = _mm_loadu_si128(v526);
            if ( v224 <= 0x10 )
            {
              *(_QWORD *)(v543 + 24) += v224;
              v225 = *(_QWORD *)(v543 + 8);
LABEL_219:
              *(_WORD *)(v225 + 4) = v224;
              **(_DWORD **)(v543 + 8) = 1;
              v233 = *(_QWORD *)(v543 + 8);
              if ( v194 + 1 > 0xFFFF )
              {
                *(_DWORD *)(v543 + 72) = 2;
                *(_DWORD *)(v543 + 76) = (v233 - *(_QWORD *)v543) >> 3;
              }
              *(_WORD *)(v233 + 6) = v194 + 1;
              *(_QWORD *)(v543 + 8) += 8LL;
              goto LABEL_222;
            }
            v314 = *(__m128i **)(v543 + 24);
            v314[1] = _mm_loadu_si128(v526 + 1);
            if ( (__int64)(v224 - 16) > 16 )
            {
              v315 = &v314->m128i_i8[v224];
              v316 = v314 + 2;
              v317 = v526 + 2;
              do
              {
                v318 = _mm_loadu_si128(v317);
                v316 += 2;
                v317 += 2;
                v316[-2] = v318;
                v316[-1] = _mm_loadu_si128(v317 - 1);
              }
              while ( v315 > (char *)v316 );
            }
          }
          *(_QWORD *)(v543 + 24) += v224;
          v225 = *(_QWORD *)(v543 + 8);
          if ( v224 > 0xFFFF )
          {
            v232 = v225 - *(_QWORD *)v543;
            *(_DWORD *)(v543 + 72) = 1;
            *(_DWORD *)(v543 + 76) = v232 >> 3;
          }
          goto LABEL_219;
        }
        v347 = (char *)(v194 + v182);
        if ( (unsigned __int64)v347 >= v548 )
        {
          v355 = v551;
          v356 = v347;
        }
        else
        {
          if ( *v551 != *(_QWORD *)v347 )
          {
            _RAX = *(_QWORD *)v347 ^ *v551;
            __asm { tzcnt   rax, rax }
            v350 = (unsigned int)_RAX >> 3;
LABEL_421:
            v194 += v350;
            goto LABEL_185;
          }
          v356 = v347 + 8;
          v355 = v551 + 1;
          if ( v548 > (unsigned __int64)(v347 + 8) )
          {
            v385 = v551[1];
            v386 = *((_QWORD *)v347 + 1);
            if ( v385 != v386 )
            {
LABEL_513:
              _RDX = v386 ^ v385;
              __asm { tzcnt   rdx, rdx }
              v350 = (char *)v356 + ((unsigned int)_RDX >> 3) - v347;
              goto LABEL_421;
            }
            while ( 1 )
            {
              ++v356;
              ++v355;
              if ( v548 <= (unsigned __int64)v356 )
                break;
              v385 = *v355;
              v386 = *v356;
              if ( *v355 != *v356 )
                goto LABEL_513;
            }
          }
        }
        if ( (unsigned __int64)v356 < v531 - 3 && *(_DWORD *)v355 == *(_DWORD *)v356 )
        {
          v356 = (_QWORD *)((char *)v356 + 4);
          v355 = (__int64 *)((char *)v355 + 4);
        }
        if ( (unsigned __int64)v356 < v531 - 1 && *(_WORD *)v355 == *(_WORD *)v356 )
        {
          v356 = (_QWORD *)((char *)v356 + 2);
          v355 = (__int64 *)((char *)v355 + 2);
        }
        if ( v531 > (unsigned __int64)v356 )
          v356 = (_QWORD *)((char *)v356 + (*(_BYTE *)v355 == *(_BYTE *)v356));
        v350 = (char *)v356 - v347;
        goto LABEL_421;
      }
      if ( v502
        && (v37 = v29 >> 8, v528 < v37)
        && (v38 = (unsigned __int64)&v508[v37], v39 = *(_DWORD *)v19, *(_DWORD *)v38 == *(_DWORD *)v19) )
      {
        if ( v22 >= (unsigned int)v31 )
        {
          v52 = v19 + 4;
          v23 = v543;
          v53 = (unsigned __int64)&v554[v19 - v38];
          v54 = v30 + v540 - v22 - v37;
          if ( v531 < v53 )
            v53 = v531;
          v55 = v53 - 7;
          if ( v52 >= v53 - 7 )
          {
            v374 = (__int64 *)(v38 + 4);
            v375 = (__int64 *)(v19 + 4);
          }
          else
          {
            v56 = *(_QWORD *)(v38 + 4);
            v57 = *(_QWORD *)(v19 + 4);
            if ( v56 != v57 )
            {
              _RSI = v56 ^ v57;
              __asm { tzcnt   rsi, rsi }
              v60 = (char *)((unsigned int)_RSI >> 3);
              goto LABEL_34;
            }
            v375 = (__int64 *)(v19 + 12);
            v374 = (__int64 *)(v38 + 12);
            if ( v55 > v19 + 12 )
            {
              v419 = *(_QWORD *)(v38 + 12);
              v420 = *(_QWORD *)(v19 + 12);
              if ( v419 != v420 )
              {
LABEL_585:
                _RAX = v420 ^ v419;
                __asm { tzcnt   rax, rax }
                v60 = (char *)v375 + ((unsigned int)_RAX >> 3) - v52;
                goto LABEL_34;
              }
              while ( 1 )
              {
                ++v375;
                ++v374;
                if ( v55 <= (unsigned __int64)v375 )
                  break;
                v420 = *v374;
                v419 = *v375;
                if ( *v374 != *v375 )
                  goto LABEL_585;
              }
            }
          }
          if ( (unsigned __int64)v375 < v53 - 3 && *(_DWORD *)v374 == *(_DWORD *)v375 )
          {
            v375 = (__int64 *)((char *)v375 + 4);
            v374 = (__int64 *)((char *)v374 + 4);
          }
          if ( (unsigned __int64)v375 < v53 - 1 && *(_WORD *)v374 == *(_WORD *)v375 )
          {
            v375 = (__int64 *)((char *)v375 + 2);
            v374 = (__int64 *)((char *)v374 + 2);
          }
          if ( v53 > (unsigned __int64)v375 )
            v375 = (__int64 *)((char *)v375 + (*(_BYTE *)v374 == *(_BYTE *)v375));
          v60 = (char *)v375 - v52;
LABEL_34:
          if ( v554 != &v60[v38 + 4] )
          {
LABEL_35:
            v61 = v60 + 4;
            if ( v19 <= (unsigned __int64)v526 || v560 >= v38 )
            {
              v62 = v19;
            }
            else
            {
              v62 = v19;
              if ( *(_BYTE *)(v19 - 1) == *(_BYTE *)(v38 - 1) )
              {
                do
                {
                  --v62;
                  --v38;
                  v61 = &v60[v19 + 4 - v62];
                }
                while ( v62 > (unsigned __int64)v526 && v560 < v38 && *(_BYTE *)(v62 - 1) == *(_BYTE *)(v38 - 1) );
              }
            }
            v63 = *(__m128i **)(v543 + 24);
            v64 = v62 - (_QWORD)v526;
            if ( (unsigned __int64)v546 < v62 )
            {
              sub_C02D0(v63, v526, v62, v546);
            }
            else
            {
              *v63 = _mm_loadu_si128(v526);
              if ( v64 <= 0x10 )
              {
                *(_QWORD *)(v543 + 24) += v64;
                v65 = *(_QWORD *)(v543 + 8);
                goto LABEL_44;
              }
              v449 = *(__m128i **)(v543 + 24);
              v449[1] = _mm_loadu_si128(v526 + 1);
              if ( (__int64)(v64 - 16) > 16 )
              {
                v450 = &v449->m128i_i8[v64];
                v451 = v449 + 2;
                v452 = v526 + 2;
                do
                {
                  v453 = _mm_loadu_si128(v452);
                  v451 += 2;
                  v452 += 2;
                  v451[-2] = v453;
                  v451[-1] = _mm_loadu_si128(v452 - 1);
                }
                while ( v450 > (char *)v451 );
              }
            }
            *(_QWORD *)(v543 + 24) += v64;
            v65 = *(_QWORD *)(v543 + 8);
            if ( v64 > 0xFFFF )
            {
              v373 = v65 - *(_QWORD *)v543;
              *(_DWORD *)(v543 + 72) = 1;
              *(_DWORD *)(v543 + 76) = v373 >> 3;
            }
LABEL_44:
            *(_WORD *)(v65 + 4) = v64;
            **(_DWORD **)(v543 + 8) = v54 + 3;
            v66 = *(_QWORD *)(v543 + 8);
            if ( (unsigned __int64)(v61 - 3) > 0xFFFF )
            {
              *(_DWORD *)(v543 + 72) = 2;
              *(_DWORD *)(v543 + 76) = (v66 - *(_QWORD *)v543) >> 3;
            }
            *(_WORD *)(v66 + 6) = (_WORD)v61 - 3;
            *(_QWORD *)(v543 + 8) += 8LL;
            v536 = v538;
            v538 = v54;
LABEL_222:
            v19 = (unsigned __int64)&v61[v62];
            if ( v511 < (unsigned __int64)&v61[v62] )
            {
LABEL_223:
              v526 = (const __m128i *)v19;
              v12 = (_QWORD *)(v19 + v533);
              if ( v511 < v19 + v533 )
                goto LABEL_224;
              goto LABEL_8;
            }
            *(_DWORD *)(v498 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v20 + v30 + 2)) >> v514)) = v30 + 2;
            *(_DWORD *)(v498 + 4 * ((0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v19 - 2)) >> v514)) = v19 - 2 - v20;
            while ( 2 )
            {
              v234 = v19 - v20;
              v235 = v19 - v20 - v536;
              v236 = (char *)(v20 + v235);
              if ( v22 > v235 )
                v236 = &v508[v235 - (unsigned __int64)v557];
              if ( v523 + v536 - v234 <= 2 || *(_DWORD *)v236 != *(_DWORD *)v19 )
                goto LABEL_223;
              v237 = v22 <= v235;
              v238 = v236 + 4;
              v239 = v19 + 4;
              v240 = (char *)v531;
              if ( !v237 )
                v240 = v554;
              v241 = v239 + v240 - v238;
              if ( v531 < v241 )
                v241 = v531;
              v242 = v241 - 7;
              if ( v239 >= v241 - 7 )
              {
                v397 = (__int64 *)(v236 + 4);
                v398 = (__int64 *)(v19 + 4);
              }
              else
              {
                v243 = *(_QWORD *)(v236 + 4);
                v244 = *(_QWORD *)(v19 + 4);
                if ( v243 != v244 )
                {
                  _RDI = v244 ^ v243;
                  __asm { tzcnt   rdi, rdi }
                  v247 = (unsigned int)_RDI >> 3;
                  goto LABEL_237;
                }
                v398 = (__int64 *)(v19 + 12);
                v397 = (__int64 *)(v236 + 12);
                if ( v242 > v19 + 12 )
                {
                  v506 = *(_QWORD *)(v236 + 12);
                  v438 = *(_QWORD *)(v19 + 12);
                  if ( v438 != v506 )
                  {
LABEL_609:
                    _RAX = v506 ^ v438;
                    __asm { tzcnt   r10, rax }
                    v247 = (unsigned __int64)v398 + ((unsigned int)_R10 >> 3) - v239;
                    goto LABEL_237;
                  }
                  while ( 1 )
                  {
                    ++v398;
                    ++v397;
                    if ( v242 <= (unsigned __int64)v398 )
                      break;
                    v506 = *v397;
                    v438 = *v398;
                    if ( *v397 != *v398 )
                      goto LABEL_609;
                  }
                }
              }
              if ( (unsigned __int64)v398 < v241 - 3 && *(_DWORD *)v397 == *(_DWORD *)v398 )
              {
                v398 = (__int64 *)((char *)v398 + 4);
                v397 = (__int64 *)((char *)v397 + 4);
              }
              if ( (unsigned __int64)v398 < v241 - 1 && *(_WORD *)v397 == *(_WORD *)v398 )
              {
                v398 = (__int64 *)((char *)v398 + 2);
                v397 = (__int64 *)((char *)v397 + 2);
              }
              if ( v241 > (unsigned __int64)v398 )
                v398 = (__int64 *)((char *)v398 + (*(_BYTE *)v397 == *(_BYTE *)v398));
              v247 = (unsigned __int64)v398 - v239;
LABEL_237:
              if ( v240 != &v238[v247] )
              {
LABEL_238:
                v248 = (char *)(v247 + 4);
                v249 = *(__m128i **)(v23 + 24);
                if ( (unsigned __int64)v546 < v19 )
                  sub_C02D0(v249, (const __m128i *)v19, v19, v546);
                else
                  *v249 = _mm_loadu_si128((const __m128i *)v19);
                *(_WORD *)(*(_QWORD *)(v23 + 8) + 4LL) = 0;
                **(_DWORD **)(v23 + 8) = 1;
                v250 = *(_QWORD *)(v23 + 8);
                if ( v247 + 1 > 0xFFFF )
                {
                  *(_DWORD *)(v23 + 72) = 2;
                  *(_DWORD *)(v23 + 76) = (v250 - *(_QWORD *)v23) >> 3;
                }
                *(_WORD *)(v250 + 6) = v247 + 1;
                *(_QWORD *)(v23 + 8) += 8LL;
                v251 = 0xCF1BBCDCBF9B0000LL * *(_QWORD *)v19;
                v19 += (unsigned __int64)v248;
                *(_DWORD *)(v498 + 4 * (v251 >> v514)) = v234;
                if ( v511 < v19 )
                {
                  v497 = v536;
                  v536 = v538;
                  v538 = v497;
                  goto LABEL_223;
                }
                v252 = v538;
                v538 = v536;
                v536 = v252;
                continue;
              }
              break;
            }
            v431 = (char *)(v247 + v239);
            if ( (unsigned __int64)v431 >= v548 )
            {
              v465 = v551;
              v466 = v431;
            }
            else
            {
              if ( *v551 != *(_QWORD *)v431 )
              {
                _RAX = *(_QWORD *)v431 ^ *v551;
                __asm { tzcnt   rax, rax }
                v434 = (unsigned int)_RAX >> 3;
LABEL_600:
                v247 += v434;
                goto LABEL_238;
              }
              v466 = v431 + 8;
              v465 = v551 + 1;
              if ( v548 > (unsigned __int64)(v431 + 8) )
              {
                v487 = v551[1];
                v488 = *((_QWORD *)v431 + 1);
                if ( v487 != v488 )
                {
LABEL_721:
                  _RDX = v488 ^ v487;
                  __asm { tzcnt   rdx, rdx }
                  v434 = (char *)v466 + ((unsigned int)_RDX >> 3) - v431;
                  goto LABEL_600;
                }
                while ( 1 )
                {
                  ++v466;
                  ++v465;
                  if ( v548 <= (unsigned __int64)v466 )
                    break;
                  v487 = *v465;
                  v488 = *v466;
                  if ( *v465 != *v466 )
                    goto LABEL_721;
                }
              }
            }
            if ( (unsigned __int64)v466 < v531 - 3 && *(_DWORD *)v465 == *(_DWORD *)v466 )
            {
              v466 = (_QWORD *)((char *)v466 + 4);
              v465 = (__int64 *)((char *)v465 + 4);
            }
            if ( (unsigned __int64)v466 < v531 - 1 && *(_WORD *)v465 == *(_WORD *)v466 )
            {
              v466 = (_QWORD *)((char *)v466 + 2);
              v465 = (__int64 *)((char *)v465 + 2);
            }
            if ( v531 > (unsigned __int64)v466 )
              v466 = (_QWORD *)((char *)v466 + (*(_BYTE *)v465 == *(_BYTE *)v466));
            v434 = (char *)v466 - v431;
            goto LABEL_600;
          }
          v399 = &v60[v52];
          if ( (unsigned __int64)v399 >= v548 )
          {
            v461 = v551;
            v462 = v399;
          }
          else
          {
            if ( *v551 != *(_QWORD *)v399 )
            {
              _RCX = *v551 ^ *(_QWORD *)v399;
              __asm { tzcnt   rcx, rcx }
              v402 = (unsigned int)_RCX >> 3;
LABEL_562:
              v60 += v402;
              goto LABEL_35;
            }
            v462 = v399 + 8;
            v461 = v551 + 1;
            if ( v548 > (unsigned __int64)(v399 + 8) )
            {
              v471 = v551[1];
              v472 = *((_QWORD *)v399 + 1);
              if ( v471 != v472 )
              {
LABEL_691:
                _RAX = v471 ^ v472;
                __asm { tzcnt   rax, rax }
                v402 = (char *)v462 + ((unsigned int)_RAX >> 3) - v399;
                goto LABEL_562;
              }
              while ( 1 )
              {
                ++v462;
                ++v461;
                if ( v548 <= (unsigned __int64)v462 )
                  break;
                v471 = *v461;
                v472 = *v462;
                if ( *v461 != *v462 )
                  goto LABEL_691;
              }
            }
          }
          if ( (unsigned __int64)v462 < v531 - 3 && *(_DWORD *)v461 == *(_DWORD *)v462 )
          {
            v462 = (_QWORD *)((char *)v462 + 4);
            v461 = (__int64 *)((char *)v461 + 4);
          }
          if ( (unsigned __int64)v462 < v531 - 1 && *(_WORD *)v461 == *(_WORD *)v462 )
          {
            v462 = (_QWORD *)((char *)v462 + 2);
            v461 = (__int64 *)((char *)v461 + 2);
          }
          if ( v531 > (unsigned __int64)v462 )
            v462 = (_QWORD *)((char *)v462 + (*(_BYTE *)v461 == *(_BYTE *)v462));
          v402 = (char *)v462 - v399;
          goto LABEL_562;
        }
      }
      else
      {
        if ( v22 >= (unsigned int)v31 )
          goto LABEL_9;
        v39 = *(_DWORD *)v19;
      }
      v40 = v20 + v31;
      if ( *(_DWORD *)v40 == v39 )
      {
        v23 = v543;
        v41 = v19 + 4;
        v42 = v19 - v40;
        if ( v19 + 4 >= v548 )
        {
          v46 = (__int64 *)(v40 + 4);
          v45 = (__int64 *)(v19 + 4);
        }
        else
        {
          v43 = *(_QWORD *)(v40 + 4);
          v44 = *(_QWORD *)(v19 + 4);
          if ( v43 != v44 )
          {
            _RDX = v44 ^ v43;
            __asm { tzcnt   rcx, rdx }
            v51 = (char *)((unsigned int)_RCX >> 3);
            goto LABEL_297;
          }
          v45 = (__int64 *)(v19 + 12);
          v46 = (__int64 *)(v40 + 12);
          if ( v548 > v19 + 12 )
          {
            v47 = *(_QWORD *)(v40 + 12);
            v48 = *(_QWORD *)(v19 + 12);
            if ( v47 != v48 )
            {
LABEL_27:
              _RDX = v48 ^ v47;
              __asm { tzcnt   rdx, rdx }
              v51 = (char *)v45 + ((unsigned int)_RDX >> 3) - v41;
              goto LABEL_297;
            }
            while ( 1 )
            {
              ++v45;
              ++v46;
              if ( v548 <= (unsigned __int64)v45 )
                break;
              v47 = *v46;
              v48 = *v45;
              if ( *v46 != *v45 )
                goto LABEL_27;
            }
          }
        }
        if ( (unsigned __int64)v45 < v531 - 3 && *(_DWORD *)v46 == *(_DWORD *)v45 )
        {
          v45 = (__int64 *)((char *)v45 + 4);
          v46 = (__int64 *)((char *)v46 + 4);
        }
        if ( (unsigned __int64)v45 < v531 - 1 && *(_WORD *)v46 == *(_WORD *)v45 )
        {
          v45 = (__int64 *)((char *)v45 + 2);
          v46 = (__int64 *)((char *)v46 + 2);
        }
        if ( v531 > (unsigned __int64)v45 )
          v45 = (__int64 *)((char *)v45 + (*(_BYTE *)v46 == *(_BYTE *)v45));
        v51 = (char *)v45 - v41;
LABEL_297:
        v61 = v51 + 4;
        if ( (unsigned __int64)v551 >= v40 || v19 <= (unsigned __int64)v526 )
        {
          v62 = v19;
        }
        else
        {
          v62 = v19;
          if ( *(_BYTE *)(v40 - 1) == *(_BYTE *)(v19 - 1) )
          {
            do
            {
              --v62;
              --v40;
              v61 = &v51[v19 + 4 - v62];
            }
            while ( v62 > (unsigned __int64)v526
                 && (unsigned __int64)v551 < v40
                 && *(_BYTE *)(v62 - 1) == *(_BYTE *)(v40 - 1) );
          }
        }
        v279 = v42 + 3;
        v280 = *(__m128i **)(v543 + 24);
        v281 = v62 - (_QWORD)v526;
        if ( (unsigned __int64)v546 < v62 )
        {
          sub_C02D0(v280, v526, v62, v546);
        }
        else
        {
          *v280 = _mm_loadu_si128(v526);
          if ( v281 <= 0x10 )
          {
            *(_QWORD *)(v543 + 24) += v281;
            v282 = *(_QWORD *)(v543 + 8);
LABEL_347:
            *(_WORD *)(v282 + 4) = v281;
            **(_DWORD **)(v543 + 8) = v279;
            v292 = *(_QWORD *)(v543 + 8);
            if ( (unsigned __int64)(v61 - 3) > 0xFFFF )
            {
              *(_DWORD *)(v543 + 72) = 2;
              *(_DWORD *)(v543 + 76) = (v292 - *(_QWORD *)v543) >> 3;
            }
            *(_WORD *)(v292 + 6) = (_WORD)v61 - 3;
            *(_QWORD *)(v543 + 8) += 8LL;
            v536 = v538;
            v538 = v42;
            goto LABEL_222;
          }
          v334 = *(__m128i **)(v543 + 24);
          v334[1] = _mm_loadu_si128(v526 + 1);
          if ( (__int64)(v281 - 16) > 16 )
          {
            v335 = &v334->m128i_i8[v281];
            v336 = v334 + 2;
            v337 = v526 + 2;
            do
            {
              v338 = _mm_loadu_si128(v337);
              v336 += 2;
              v337 += 2;
              v336[-2] = v338;
              v336[-1] = _mm_loadu_si128(v337 - 1);
            }
            while ( v335 > (char *)v336 );
          }
        }
        *(_QWORD *)(v543 + 24) += v281;
        v282 = *(_QWORD *)(v543 + 8);
        if ( v281 > 0xFFFF )
        {
          v291 = v282 - *(_QWORD *)v543;
          *(_DWORD *)(v543 + 72) = 1;
          *(_DWORD *)(v543 + 76) = v291 >> 3;
        }
        goto LABEL_347;
      }
LABEL_9:
      v29 = *(_DWORD *)&v517[4 * (v36 >> 8)];
      v502 = (_BYTE)v36 == (unsigned __int8)v29;
      v31 = *(unsigned int *)(v498 + 4 * v35);
      if ( (unsigned __int64)v12 >= v25 )
      {
        ++v26;
        v25 += 256LL;
      }
      if ( v511 < (unsigned __int64)v12 + v26 )
      {
LABEL_47:
        v5 = v526;
        goto LABEL_48;
      }
      v32 = (int)v12;
      v19 = (unsigned __int64)v12;
      v27 = v35;
      v12 = (_QWORD *)((char *)v12 + v26);
      v30 = v32 - v20;
    }
  }
  if ( v7 != 7 )
  {
    if ( v7 != 5 )
      return sub_C0450(a1, a2, a3, a4, a5);
    v67 = *(_QWORD *)(a1 + 8);
    v68 = *(_DWORD *)(a1 + 264);
    v499 = *(_QWORD *)(a1 + 112);
    v69 = *(char ***)(a1 + 248);
    v534 = (unsigned int)(*(_DWORD *)(a1 + 276) == 0) + *(_DWORD *)(a1 + 276);
    v70 = (__int64 *)((char *)v5->m128i_i64 + v534);
    v71 = v69[14];
    v72 = *(_DWORD *)(a1 + 24);
    v531 = (unsigned __int64)v5->m128i_u64 + a5;
    v512 = (unsigned __int64)&v5->m128i_u64[-1] + a5;
    v509 = v69[1];
    v518 = v71;
    v552 = (__int64 *)(v67 + v72);
    v536 = a3[1];
    v73 = *((unsigned int *)v69 + 6);
    v538 = *a3;
    v74 = *v69;
    v529 = *((_DWORD *)v69 + 6);
    v75 = *((_DWORD *)v69 + 66);
    v561 = (unsigned __int64)&v509[v73];
    v555 = v74;
    v541 = (_DWORD)v74 - (_DWORD)v509;
    v558 = v72 - ((_DWORD)v74 - (_DWORD)v509);
    v76 = (_DWORD)v74 + (_DWORD)v5 - (_DWORD)v552 - ((_DWORD)v509 + v73);
    if ( *(_DWORD *)(a1 + 296) && 4LL << v75 )
    {
      v179 = 0;
      do
      {
        _mm_prefetch(&v71[v179], 2);
        v179 += 64LL;
      }
      while ( 4LL << v75 > v179 );
    }
    v19 = (unsigned __int64)v5->m128i_u64 + (v76 == 0);
    if ( (unsigned __int64)v70 <= v512 )
    {
      v526 = v5;
      v77 = v67;
      v524 = v72 - 1;
      v521 = 56 - v75;
      v515 = 64 - v68;
      v549 = v531 - 7;
      v547 = (const __m128i *)(v531 - 32);
      v78 = a2;
      v79 = v72;
      v80 = v78;
      while ( 1 )
      {
        v81 = 0xCF1BBCDCBB000000LL * *(_QWORD *)v19;
        v82 = v19 + 256;
        v83 = v534;
        v544 = v80;
        v84 = v81 >> v515;
        v85 = v81 >> v521;
        v86 = *(_DWORD *)&v518[4 * (v85 >> 8)];
        v87 = v19 - v77;
        v503 = (_BYTE)v85 == (unsigned __int8)v86;
        v88 = *(unsigned int *)(v499 + 4 * v84);
        while ( 1 )
        {
          v90 = v87 + 1 - v538;
          v91 = (char *)(v77 + v90);
          if ( v79 > (unsigned int)v90 )
            v91 = &v509[v541 - v79 + (unsigned int)v90];
          v92 = (0xCF1BBCDCBB000000LL * *v70) >> v515;
          v93 = (0xCF1BBCDCBB000000LL * *v70) >> v521;
          *(_DWORD *)(v499 + 4 * v84) = v87;
          if ( v524 - (unsigned int)v90 > 2 && *(_DWORD *)v91 == *(_DWORD *)(v19 + 1) )
          {
            v209 = v91 + 4;
            v210 = v19 + 5;
            v80 = v544;
            v211 = (char *)v531;
            if ( v79 > (unsigned int)v90 )
              v211 = v555;
            v212 = v210 + v211 - v209;
            if ( v531 < v212 )
              v212 = v531;
            v213 = v212 - 7;
            if ( v210 >= v212 - 7 )
            {
              v217 = (__int64 *)(v91 + 4);
              v216 = (__int64 *)(v19 + 5);
              goto LABEL_203;
            }
            v214 = *(_QWORD *)(v91 + 4);
            v215 = *(_QWORD *)(v19 + 5);
            if ( v214 == v215 )
            {
              v216 = (__int64 *)(v19 + 13);
              v217 = (__int64 *)(v91 + 12);
              if ( v213 > v19 + 13 )
              {
                v218 = *(_QWORD *)(v91 + 12);
                v219 = *(_QWORD *)(v19 + 13);
                if ( v219 != v218 )
                {
LABEL_173:
                  _RDX = v218 ^ v219;
                  __asm { tzcnt   r11, rdx }
                  v222 = (unsigned __int64)v216 + ((unsigned int)_R11 >> 3) - v210;
                  goto LABEL_212;
                }
                while ( 1 )
                {
                  ++v216;
                  ++v217;
                  if ( v213 <= (unsigned __int64)v216 )
                    break;
                  v219 = *v217;
                  v218 = *v216;
                  if ( *v217 != *v216 )
                    goto LABEL_173;
                }
              }
LABEL_203:
              if ( (unsigned __int64)v216 < v212 - 3 && *(_DWORD *)v217 == *(_DWORD *)v216 )
              {
                v216 = (__int64 *)((char *)v216 + 4);
                v217 = (__int64 *)((char *)v217 + 4);
              }
              if ( (unsigned __int64)v216 < v212 - 1 && *(_WORD *)v217 == *(_WORD *)v216 )
              {
                v216 = (__int64 *)((char *)v216 + 2);
                v217 = (__int64 *)((char *)v217 + 2);
              }
              if ( v212 > (unsigned __int64)v216 )
                v216 = (__int64 *)((char *)v216 + (*(_BYTE *)v217 == *(_BYTE *)v216));
              v222 = (unsigned __int64)v216 - v210;
            }
            else
            {
              _RDI = v215 ^ v214;
              __asm { tzcnt   rdi, rdi }
              v222 = (unsigned int)_RDI >> 3;
            }
LABEL_212:
            if ( v211 != &v209[v222] )
            {
LABEL_213:
              v119 = v19 + 1;
              v118 = (char *)(v222 + 4);
              v229 = *(__m128i **)(v544 + 24);
              v230 = v19 + 1 - (_QWORD)v526;
              if ( v19 + 1 > (unsigned __int64)v547 )
              {
                sub_C02D0(v229, v526, v19 + 1, v547);
              }
              else
              {
                *v229 = _mm_loadu_si128(v526);
                if ( v230 <= 0x10 )
                {
                  *(_QWORD *)(v544 + 24) += v230;
                  v231 = *(_QWORD *)(v544 + 8);
LABEL_262:
                  *(_WORD *)(v231 + 4) = v230;
                  **(_DWORD **)(v544 + 8) = 1;
                  v260 = *(_QWORD *)(v544 + 8);
                  if ( v222 + 1 > 0xFFFF )
                  {
                    *(_DWORD *)(v544 + 72) = 2;
                    *(_DWORD *)(v544 + 76) = (v260 - *(_QWORD *)v544) >> 3;
                  }
                  *(_WORD *)(v260 + 6) = v222 + 1;
                  *(_QWORD *)(v544 + 8) += 8LL;
                  goto LABEL_265;
                }
                v309 = *(__m128i **)(v544 + 24);
                v309[1] = _mm_loadu_si128(v526 + 1);
                if ( (__int64)(v230 - 16) > 16 )
                {
                  v310 = &v309->m128i_i8[v230];
                  v311 = v309 + 2;
                  v312 = v526 + 2;
                  do
                  {
                    v313 = _mm_loadu_si128(v312);
                    v311 += 2;
                    v312 += 2;
                    v311[-2] = v313;
                    v311[-1] = _mm_loadu_si128(v312 - 1);
                  }
                  while ( v310 > (char *)v311 );
                }
              }
              *(_QWORD *)(v544 + 24) += v230;
              v231 = *(_QWORD *)(v544 + 8);
              if ( v230 > 0xFFFF )
              {
                v259 = v231 - *(_QWORD *)v544;
                *(_DWORD *)(v544 + 72) = 1;
                *(_DWORD *)(v544 + 76) = v259 >> 3;
              }
              goto LABEL_262;
            }
            v343 = (char *)(v222 + v210);
            if ( (unsigned __int64)v343 >= v549 )
            {
              v353 = v552;
              v354 = v343;
            }
            else
            {
              if ( *v552 != *(_QWORD *)v343 )
              {
                _RAX = *(_QWORD *)v343 ^ *v552;
                __asm { tzcnt   rax, rax }
                v346 = (unsigned int)_RAX >> 3;
LABEL_417:
                v222 += v346;
                goto LABEL_213;
              }
              v354 = v343 + 8;
              v353 = v552 + 1;
              if ( v549 > (unsigned __int64)(v343 + 8) )
              {
                v381 = *((_QWORD *)v343 + 1);
                v382 = v552[1];
                if ( v381 != v382 )
                {
LABEL_507:
                  _RDX = v382 ^ v381;
                  __asm { tzcnt   rdx, rdx }
                  v346 = (char *)v354 + ((unsigned int)_RDX >> 3) - v343;
                  goto LABEL_417;
                }
                while ( 1 )
                {
                  ++v354;
                  ++v353;
                  if ( v549 <= (unsigned __int64)v354 )
                    break;
                  v381 = *v353;
                  v382 = *v354;
                  if ( *v353 != *v354 )
                    goto LABEL_507;
                }
              }
            }
            if ( (unsigned __int64)v354 < v531 - 3 && *(_DWORD *)v353 == *(_DWORD *)v354 )
            {
              v354 = (_QWORD *)((char *)v354 + 4);
              v353 = (__int64 *)((char *)v353 + 4);
            }
            if ( (unsigned __int64)v354 < v531 - 1 && *(_WORD *)v353 == *(_WORD *)v354 )
            {
              v354 = (_QWORD *)((char *)v354 + 2);
              v353 = (__int64 *)((char *)v353 + 2);
            }
            if ( v531 > (unsigned __int64)v354 )
              v354 = (_QWORD *)((char *)v354 + (*(_BYTE *)v353 == *(_BYTE *)v354));
            v346 = (char *)v354 - v343;
            goto LABEL_417;
          }
          if ( v503 )
          {
            v94 = v86 >> 8;
            if ( v529 < v94 )
            {
              v95 = (unsigned __int64)&v509[v94];
              v96 = *(_DWORD *)v19;
              if ( *(_DWORD *)v95 == *(_DWORD *)v19 )
                break;
            }
          }
          if ( v79 >= (unsigned int)v88 )
            goto LABEL_53;
          v96 = *(_DWORD *)v19;
LABEL_66:
          v97 = v77 + v88;
          if ( *(_DWORD *)v97 == v96 )
          {
            v80 = v544;
            v98 = v19 + 4;
            v99 = v19 - v97;
            if ( v19 + 4 >= v549 )
            {
              v103 = (__int64 *)(v97 + 4);
              v102 = (__int64 *)(v19 + 4);
            }
            else
            {
              v100 = *(_QWORD *)(v97 + 4);
              v101 = *(_QWORD *)(v19 + 4);
              if ( v100 != v101 )
              {
                _RDX = v101 ^ v100;
                __asm { tzcnt   rcx, rdx }
                v108 = (char *)((unsigned int)_RCX >> 3);
                goto LABEL_335;
              }
              v102 = (__int64 *)(v19 + 12);
              v103 = (__int64 *)(v97 + 12);
              if ( v549 > v19 + 12 )
              {
                v104 = *(_QWORD *)(v97 + 12);
                v105 = *(_QWORD *)(v19 + 12);
                if ( v105 != v104 )
                {
LABEL_71:
                  _RDX = v104 ^ v105;
                  __asm { tzcnt   rdx, rdx }
                  v108 = (char *)v102 + ((unsigned int)_RDX >> 3) - v98;
                  goto LABEL_335;
                }
                while ( 1 )
                {
                  ++v102;
                  ++v103;
                  if ( v549 <= (unsigned __int64)v102 )
                    break;
                  v105 = *v103;
                  v104 = *v102;
                  if ( *v103 != *v102 )
                    goto LABEL_71;
                }
              }
            }
            if ( (unsigned __int64)v102 < v531 - 3 && *(_DWORD *)v103 == *(_DWORD *)v102 )
            {
              v102 = (__int64 *)((char *)v102 + 4);
              v103 = (__int64 *)((char *)v103 + 4);
            }
            if ( (unsigned __int64)v102 < v531 - 1 && *(_WORD *)v103 == *(_WORD *)v102 )
            {
              v102 = (__int64 *)((char *)v102 + 2);
              v103 = (__int64 *)((char *)v103 + 2);
            }
            if ( v531 > (unsigned __int64)v102 )
              v102 = (__int64 *)((char *)v102 + (*(_BYTE *)v103 == *(_BYTE *)v102));
            v108 = (char *)v102 - v98;
LABEL_335:
            v118 = v108 + 4;
            if ( (unsigned __int64)v552 >= v97 || v19 <= (unsigned __int64)v526 )
            {
              v119 = v19;
            }
            else
            {
              v119 = v19;
              if ( *(_BYTE *)(v97 - 1) == *(_BYTE *)(v19 - 1) )
              {
                do
                {
                  --v119;
                  --v97;
                  v118 = &v108[v19 + 4 - v119];
                }
                while ( v119 > (unsigned __int64)v526
                     && (unsigned __int64)v552 < v97
                     && *(_BYTE *)(v119 - 1) == *(_BYTE *)(v97 - 1) );
              }
            }
            v287 = v99 + 3;
            v288 = *(__m128i **)(v544 + 24);
            v289 = v119 - (_QWORD)v526;
            if ( (unsigned __int64)v547 < v119 )
            {
              sub_C02D0(v288, v526, v119, v547);
            }
            else
            {
              *v288 = _mm_loadu_si128(v526);
              if ( v289 <= 0x10 )
              {
                *(_QWORD *)(v544 + 24) += v289;
                v290 = *(_QWORD *)(v544 + 8);
LABEL_359:
                *(_WORD *)(v290 + 4) = v289;
                **(_DWORD **)(v544 + 8) = v287;
                v296 = *(_QWORD *)(v544 + 8);
                if ( (unsigned __int64)(v118 - 3) > 0xFFFF )
                {
                  *(_DWORD *)(v544 + 72) = 2;
                  *(_DWORD *)(v544 + 76) = (v296 - *(_QWORD *)v544) >> 3;
                }
                *(_WORD *)(v296 + 6) = (_WORD)v118 - 3;
                *(_QWORD *)(v544 + 8) += 8LL;
                v536 = v538;
                v538 = v99;
                goto LABEL_265;
              }
              v329 = *(__m128i **)(v544 + 24);
              v329[1] = _mm_loadu_si128(v526 + 1);
              if ( (__int64)(v289 - 16) > 16 )
              {
                v330 = &v329->m128i_i8[v289];
                v331 = v329 + 2;
                v332 = v526 + 2;
                do
                {
                  v333 = _mm_loadu_si128(v332);
                  v331 += 2;
                  v332 += 2;
                  v331[-2] = v333;
                  v331[-1] = _mm_loadu_si128(v332 - 1);
                }
                while ( v330 > (char *)v331 );
              }
            }
            *(_QWORD *)(v544 + 24) += v289;
            v290 = *(_QWORD *)(v544 + 8);
            if ( v289 > 0xFFFF )
            {
              v295 = v290 - *(_QWORD *)v544;
              *(_DWORD *)(v544 + 72) = 1;
              *(_DWORD *)(v544 + 76) = v295 >> 3;
            }
            goto LABEL_359;
          }
LABEL_53:
          v86 = *(_DWORD *)&v518[4 * (v93 >> 8)];
          v503 = (_BYTE)v93 == (unsigned __int8)v86;
          v88 = *(unsigned int *)(v499 + 4 * v92);
          if ( (unsigned __int64)v70 >= v82 )
          {
            ++v83;
            v82 += 256LL;
          }
          if ( v512 < (unsigned __int64)v70 + v83 )
            goto LABEL_47;
          v89 = (int)v70;
          v19 = (unsigned __int64)v70;
          v84 = v92;
          v70 = (_QWORD *)((char *)v70 + v83);
          v87 = v89 - v77;
        }
        if ( v79 < (unsigned int)v88 )
          goto LABEL_66;
        v109 = v19 + 4;
        v80 = v544;
        v110 = (unsigned __int64)&v555[v19 - v95];
        v111 = v87 + v541 - v79 - v94;
        if ( v531 < v110 )
          v110 = v531;
        v112 = v110 - 7;
        if ( v109 >= v110 - 7 )
        {
          v379 = (__int64 *)(v95 + 4);
          v380 = (__int64 *)(v19 + 4);
        }
        else
        {
          v113 = *(_QWORD *)(v95 + 4);
          v114 = *(_QWORD *)(v19 + 4);
          if ( v113 != v114 )
          {
            _RSI = v113 ^ v114;
            __asm { tzcnt   rsi, rsi }
            v117 = (char *)((unsigned int)_RSI >> 3);
            goto LABEL_78;
          }
          v380 = (__int64 *)(v19 + 12);
          v379 = (__int64 *)(v95 + 12);
          if ( v112 > v19 + 12 )
          {
            v415 = *(_QWORD *)(v95 + 12);
            v416 = *(_QWORD *)(v19 + 12);
            if ( v415 != v416 )
            {
LABEL_579:
              _RAX = v416 ^ v415;
              __asm { tzcnt   rax, rax }
              v117 = (char *)v380 + ((unsigned int)_RAX >> 3) - v109;
              goto LABEL_78;
            }
            while ( 1 )
            {
              ++v380;
              ++v379;
              if ( v112 <= (unsigned __int64)v380 )
                break;
              v416 = *v379;
              v415 = *v380;
              if ( *v379 != *v380 )
                goto LABEL_579;
            }
          }
        }
        if ( (unsigned __int64)v380 < v110 - 3 && *(_DWORD *)v379 == *(_DWORD *)v380 )
        {
          v380 = (__int64 *)((char *)v380 + 4);
          v379 = (__int64 *)((char *)v379 + 4);
        }
        if ( (unsigned __int64)v380 < v110 - 1 && *(_WORD *)v379 == *(_WORD *)v380 )
        {
          v380 = (__int64 *)((char *)v380 + 2);
          v379 = (__int64 *)((char *)v379 + 2);
        }
        if ( v110 > (unsigned __int64)v380 )
          v380 = (__int64 *)((char *)v380 + (*(_BYTE *)v379 == *(_BYTE *)v380));
        v117 = (char *)v380 - v109;
LABEL_78:
        if ( v555 == &v117[v95 + 4] )
        {
          v403 = &v117[v109];
          if ( (unsigned __int64)v403 >= v549 )
          {
            v459 = v552;
            v460 = v403;
          }
          else
          {
            if ( *v552 != *(_QWORD *)v403 )
            {
              _RCX = *v552 ^ *(_QWORD *)v403;
              __asm { tzcnt   rcx, rcx }
              v406 = (unsigned int)_RCX >> 3;
LABEL_566:
              v117 += v406;
              goto LABEL_79;
            }
            v460 = v403 + 8;
            v459 = v552 + 1;
            if ( v549 > (unsigned __int64)(v403 + 8) )
            {
              v479 = v552[1];
              v480 = *((_QWORD *)v403 + 1);
              if ( v480 != v479 )
              {
LABEL_703:
                _RAX = v479 ^ v480;
                __asm { tzcnt   rax, rax }
                v406 = (char *)v460 + ((unsigned int)_RAX >> 3) - v403;
                goto LABEL_566;
              }
              while ( 1 )
              {
                ++v460;
                ++v459;
                if ( v549 <= (unsigned __int64)v460 )
                  break;
                v479 = *v459;
                v480 = *v460;
                if ( *v459 != *v460 )
                  goto LABEL_703;
              }
            }
          }
          if ( (unsigned __int64)v460 < v531 - 3 && *(_DWORD *)v459 == *(_DWORD *)v460 )
          {
            v460 = (_QWORD *)((char *)v460 + 4);
            v459 = (__int64 *)((char *)v459 + 4);
          }
          if ( (unsigned __int64)v460 < v531 - 1 && *(_WORD *)v459 == *(_WORD *)v460 )
          {
            v460 = (_QWORD *)((char *)v460 + 2);
            v459 = (__int64 *)((char *)v459 + 2);
          }
          if ( v531 > (unsigned __int64)v460 )
            v460 = (_QWORD *)((char *)v460 + (*(_BYTE *)v459 == *(_BYTE *)v460));
          v406 = (char *)v460 - v403;
          goto LABEL_566;
        }
LABEL_79:
        v118 = v117 + 4;
        if ( v19 <= (unsigned __int64)v526 || v561 >= v95 )
        {
          v119 = v19;
        }
        else
        {
          v119 = v19;
          if ( *(_BYTE *)(v95 - 1) == *(_BYTE *)(v19 - 1) )
          {
            do
            {
              --v119;
              --v95;
              v118 = &v117[v19 + 4 - v119];
            }
            while ( v119 > (unsigned __int64)v526 && v561 < v95 && *(_BYTE *)(v119 - 1) == *(_BYTE *)(v95 - 1) );
          }
        }
        v120 = *(__m128i **)(v544 + 24);
        v121 = v119 - (_QWORD)v526;
        if ( (unsigned __int64)v547 < v119 )
        {
          sub_C02D0(v120, v526, v119, v547);
        }
        else
        {
          *v120 = _mm_loadu_si128(v526);
          if ( v121 <= 0x10 )
          {
            *(_QWORD *)(v544 + 24) += v121;
            v122 = *(_QWORD *)(v544 + 8);
            goto LABEL_88;
          }
          v454 = *(__m128i **)(v544 + 24);
          v454[1] = _mm_loadu_si128(v526 + 1);
          if ( (__int64)(v121 - 16) > 16 )
          {
            v455 = &v454->m128i_i8[v121];
            v456 = v454 + 2;
            v457 = v526 + 2;
            do
            {
              v458 = _mm_loadu_si128(v457);
              v456 += 2;
              v457 += 2;
              v456[-2] = v458;
              v456[-1] = _mm_loadu_si128(v457 - 1);
            }
            while ( v455 > (char *)v456 );
          }
        }
        *(_QWORD *)(v544 + 24) += v121;
        v122 = *(_QWORD *)(v544 + 8);
        if ( v121 > 0xFFFF )
        {
          v372 = v122 - *(_QWORD *)v544;
          *(_DWORD *)(v544 + 72) = 1;
          *(_DWORD *)(v544 + 76) = v372 >> 3;
        }
LABEL_88:
        *(_WORD *)(v122 + 4) = v121;
        **(_DWORD **)(v544 + 8) = v111 + 3;
        v123 = *(_QWORD *)(v544 + 8);
        if ( (unsigned __int64)(v118 - 3) > 0xFFFF )
        {
          *(_DWORD *)(v544 + 72) = 2;
          *(_DWORD *)(v544 + 76) = (v123 - *(_QWORD *)v544) >> 3;
        }
        *(_WORD *)(v123 + 6) = (_WORD)v118 - 3;
        *(_QWORD *)(v544 + 8) += 8LL;
        v536 = v538;
        v538 = v111;
LABEL_265:
        v19 = (unsigned __int64)&v118[v119];
        if ( v512 >= (unsigned __int64)&v118[v119] )
        {
          *(_DWORD *)(v499 + 4 * ((0xCF1BBCDCBB000000LL * *(_QWORD *)(v77 + v87 + 2)) >> v515)) = v87 + 2;
          *(_DWORD *)(v499 + 4 * ((0xCF1BBCDCBB000000LL * *(_QWORD *)(v19 - 2)) >> v515)) = v19 - 2 - v77;
          while ( 1 )
          {
            v261 = v19 - v77;
            v262 = v19 - v77 - v536;
            v263 = (char *)(v77 + v262);
            if ( v79 > v262 )
              v263 = &v509[v262 - (unsigned __int64)v558];
            if ( v524 + v536 - v261 <= 2 || *(_DWORD *)v263 != *(_DWORD *)v19 )
              break;
            v237 = v79 <= v262;
            v264 = v263 + 4;
            v265 = v19 + 4;
            v266 = (char *)v531;
            if ( !v237 )
              v266 = v555;
            v267 = v265 + v266 - v264;
            if ( v531 < v267 )
              v267 = v531;
            v268 = v267 - 7;
            if ( v265 >= v267 - 7 )
            {
              v393 = (__int64 *)(v263 + 4);
              v394 = (__int64 *)(v19 + 4);
            }
            else
            {
              v269 = *(_QWORD *)(v263 + 4);
              v270 = *(_QWORD *)(v19 + 4);
              if ( v269 != v270 )
              {
                _RDI = v270 ^ v269;
                __asm { tzcnt   rdi, rdi }
                v273 = (unsigned int)_RDI >> 3;
                goto LABEL_280;
              }
              v394 = (__int64 *)(v19 + 12);
              v393 = (__int64 *)(v263 + 12);
              if ( v268 > v19 + 12 )
              {
                v505 = *(_QWORD *)(v263 + 12);
                v435 = *(_QWORD *)(v19 + 12);
                if ( v435 != v505 )
                {
LABEL_603:
                  _RAX = v505 ^ v435;
                  __asm { tzcnt   r10, rax }
                  v273 = (unsigned __int64)v394 + ((unsigned int)_R10 >> 3) - v265;
                  goto LABEL_280;
                }
                while ( 1 )
                {
                  ++v394;
                  ++v393;
                  if ( v268 <= (unsigned __int64)v394 )
                    break;
                  v505 = *v393;
                  v435 = *v394;
                  if ( *v393 != *v394 )
                    goto LABEL_603;
                }
              }
            }
            if ( (unsigned __int64)v394 < v267 - 3 && *(_DWORD *)v393 == *(_DWORD *)v394 )
            {
              v394 = (__int64 *)((char *)v394 + 4);
              v393 = (__int64 *)((char *)v393 + 4);
            }
            if ( (unsigned __int64)v394 < v267 - 1 && *(_WORD *)v393 == *(_WORD *)v394 )
            {
              v394 = (__int64 *)((char *)v394 + 2);
              v393 = (__int64 *)((char *)v393 + 2);
            }
            if ( v267 > (unsigned __int64)v394 )
              v394 = (__int64 *)((char *)v394 + (*(_BYTE *)v393 == *(_BYTE *)v394));
            v273 = (unsigned __int64)v394 - v265;
LABEL_280:
            if ( v266 != &v264[v273] )
              goto LABEL_281;
            v427 = (char *)(v273 + v265);
            if ( (unsigned __int64)v427 >= v549 )
            {
              v469 = v552;
              v470 = v427;
LABEL_680:
              if ( (unsigned __int64)v470 < v531 - 3 && *(_DWORD *)v469 == *v470 )
              {
                ++v470;
                v469 = (__int64 *)((char *)v469 + 4);
              }
              if ( (unsigned __int64)v470 < v531 - 1 && *(_WORD *)v469 == *(_WORD *)v470 )
              {
                v470 = (_DWORD *)((char *)v470 + 2);
                v469 = (__int64 *)((char *)v469 + 2);
              }
              if ( v531 > (unsigned __int64)v470 )
                v470 = (_DWORD *)((char *)v470 + (*(_BYTE *)v469 == *(_BYTE *)v470));
              v430 = (char *)v470 - v427;
              goto LABEL_596;
            }
            if ( *v552 == *(_QWORD *)v427 )
            {
              v470 = v427 + 8;
              v469 = v552 + 1;
              if ( v549 <= (unsigned __int64)(v427 + 8) )
                goto LABEL_680;
              v483 = v552[1];
              v484 = *((_QWORD *)v427 + 1);
              if ( v483 == v484 )
              {
                do
                {
                  v470 += 2;
                  ++v469;
                  if ( v549 <= (unsigned __int64)v470 )
                    goto LABEL_680;
                  v483 = *v469;
                  v484 = *(_QWORD *)v470;
                }
                while ( *v469 == *(_QWORD *)v470 );
              }
              _RDX = v484 ^ v483;
              __asm { tzcnt   rdx, rdx }
              v430 = (char *)v470 + ((unsigned int)_RDX >> 3) - v427;
            }
            else
            {
              _RAX = *(_QWORD *)v427 ^ *v552;
              __asm { tzcnt   rax, rax }
              v430 = (unsigned int)_RAX >> 3;
            }
LABEL_596:
            v273 += v430;
LABEL_281:
            v274 = (char *)(v273 + 4);
            v275 = *(__m128i **)(v80 + 24);
            if ( (unsigned __int64)v547 < v19 )
              sub_C02D0(v275, (const __m128i *)v19, v19, v547);
            else
              *v275 = _mm_loadu_si128((const __m128i *)v19);
            *(_WORD *)(*(_QWORD *)(v80 + 8) + 4LL) = 0;
            **(_DWORD **)(v80 + 8) = 1;
            v276 = *(_QWORD *)(v80 + 8);
            if ( v273 + 1 > 0xFFFF )
            {
              *(_DWORD *)(v80 + 72) = 2;
              *(_DWORD *)(v80 + 76) = (v276 - *(_QWORD *)v80) >> 3;
            }
            *(_WORD *)(v276 + 6) = v273 + 1;
            *(_QWORD *)(v80 + 8) += 8LL;
            v277 = 0xCF1BBCDCBB000000LL * *(_QWORD *)v19;
            v19 += (unsigned __int64)v274;
            *(_DWORD *)(v499 + 4 * (v277 >> v515)) = v261;
            if ( v512 < v19 )
            {
              v496 = v536;
              v536 = v538;
              v538 = v496;
              break;
            }
            v278 = v538;
            v538 = v536;
            v536 = v278;
          }
        }
        v526 = (const __m128i *)v19;
        v70 = (_QWORD *)(v19 + v534);
        if ( v512 < v19 + v534 )
        {
LABEL_224:
          v5 = (const __m128i *)v19;
          goto LABEL_48;
        }
      }
    }
    goto LABEL_48;
  }
  v124 = *(_QWORD *)(a1 + 8);
  v125 = *(_DWORD *)(a1 + 264);
  v500 = *(_QWORD *)(a1 + 112);
  v537 = (unsigned int)(*(_DWORD *)(a1 + 276) == 0) + *(_DWORD *)(a1 + 276);
  v126 = (__int64 *)((char *)a4->m128i_i64 + v537);
  v535 = *(_DWORD *)(a1 + 24);
  v532 = &a4->m128i_i8[a5];
  v513 = (unsigned __int64)&a4->m128i_u64[-1] + a5;
  v556 = (__int64 *)(v124 + v535);
  v539 = *a3;
  v127 = *(char ***)(a1 + 248);
  v542 = a3[1];
  v128 = v127[1];
  v129 = *v127;
  v130 = v127[14];
  v527 = *((_DWORD *)v127 + 6);
  v131 = *((_DWORD *)v127 + 66);
  v563 = (unsigned __int64)&v128[v527];
  v519 = v130;
  v545 = (_DWORD)v129 - (_DWORD)v128;
  v510 = v128;
  v559 = v129;
  v562 = v535 - ((_DWORD)v129 - (_DWORD)v128);
  if ( *(_DWORD *)(a1 + 296) && 4LL << v131 )
  {
    v178 = 0;
    do
    {
      _mm_prefetch(&v130[v178], 2);
      v178 += 64LL;
    }
    while ( 4LL << v131 > v178 );
  }
  v132 = (unsigned __int64)v5->m128i_u64 + ((_DWORD)v129 + (_DWORD)v5 - (_DWORD)v556 == (_DWORD)v563);
  if ( (unsigned __int64)v126 <= v513 )
  {
    v530 = v5;
    v133 = v124;
    v134 = a2;
    v525 = v535 - 1;
    v522 = 56 - v131;
    v516 = 64 - v125;
    v553 = (unsigned __int64)(v532 - 7);
    v550 = (const __m128i *)(v532 - 32);
    while ( 1 )
    {
      v135 = 0xCF1BBCDCBFA56300LL * *(_QWORD *)v132;
      v136 = v132 + 256;
      v137 = v537;
      v138 = v135 >> v516;
      v139 = v135 >> v522;
      v140 = *(_DWORD *)&v519[4 * (v139 >> 8)];
      v141 = v132 - v133;
      v504 = (_BYTE)v139 == (unsigned __int8)v140;
      v142 = *(unsigned int *)(v500 + 4 * v138);
      while ( 1 )
      {
        v144 = v141 + 1 - v539;
        v145 = (char *)(v133 + v144);
        if ( v535 > (unsigned int)v144 )
          v145 = &v510[v545 - v535 + (unsigned int)v144];
        v146 = (0xCF1BBCDCBFA56300LL * *v126) >> v516;
        v147 = (0xCF1BBCDCBFA56300LL * *v126) >> v522;
        *(_DWORD *)(v500 + 4 * v138) = v141;
        if ( v525 - (unsigned int)v144 > 2 && *(_DWORD *)v145 == *(_DWORD *)(v132 + 1) )
        {
          v195 = v145 + 4;
          v196 = v132 + 5;
          v197 = v532;
          if ( v535 > (unsigned int)v144 )
            v197 = v559;
          v198 = v196 + v197 - v195;
          if ( (unsigned __int64)v532 < v198 )
            v198 = (unsigned __int64)v532;
          v199 = v198 - 7;
          if ( v196 >= v198 - 7 )
          {
            v203 = (__int64 *)(v145 + 4);
            v202 = (__int64 *)(v132 + 5);
            goto LABEL_189;
          }
          v200 = *(_QWORD *)(v145 + 4);
          v201 = *(_QWORD *)(v132 + 5);
          if ( v200 == v201 )
          {
            v202 = (__int64 *)(v132 + 13);
            v203 = (__int64 *)(v145 + 12);
            if ( v199 > v132 + 13 )
            {
              v204 = *(_QWORD *)(v145 + 12);
              v205 = *(_QWORD *)(v132 + 13);
              if ( v204 != v205 )
              {
LABEL_164:
                _RDX = v205 ^ v204;
                __asm { tzcnt   r11, rdx }
                v208 = (unsigned __int64)v202 + ((unsigned int)_R11 >> 3) - v196;
                goto LABEL_198;
              }
              while ( 1 )
              {
                ++v202;
                ++v203;
                if ( v199 <= (unsigned __int64)v202 )
                  break;
                v204 = *v203;
                v205 = *v202;
                if ( *v203 != *v202 )
                  goto LABEL_164;
              }
            }
LABEL_189:
            if ( (unsigned __int64)v202 < v198 - 3 && *(_DWORD *)v203 == *(_DWORD *)v202 )
            {
              v202 = (__int64 *)((char *)v202 + 4);
              v203 = (__int64 *)((char *)v203 + 4);
            }
            if ( (unsigned __int64)v202 < v198 - 1 && *(_WORD *)v203 == *(_WORD *)v202 )
            {
              v202 = (__int64 *)((char *)v202 + 2);
              v203 = (__int64 *)((char *)v203 + 2);
            }
            if ( v198 > (unsigned __int64)v202 )
              v202 = (__int64 *)((char *)v202 + (*(_BYTE *)v203 == *(_BYTE *)v202));
            v208 = (unsigned __int64)v202 - v196;
          }
          else
          {
            _RDI = v201 ^ v200;
            __asm { tzcnt   rdi, rdi }
            v208 = (unsigned int)_RDI >> 3;
          }
LABEL_198:
          if ( v197 != &v195[v208] )
          {
LABEL_199:
            v173 = v132 + 1;
            v172 = (char *)(v208 + 4);
            v226 = *(__m128i **)(v134 + 24);
            v227 = v132 + 1 - (_QWORD)v530;
            if ( v132 + 1 > (unsigned __int64)v550 )
            {
              sub_C02D0(v226, v530, v132 + 1, v550);
            }
            else
            {
              *v226 = _mm_loadu_si128(v530);
              if ( v227 <= 0x10 )
              {
                *(_QWORD *)(v134 + 24) += v227;
                v228 = *(_QWORD *)(v134 + 8);
LABEL_247:
                *(_WORD *)(v228 + 4) = v227;
                **(_DWORD **)(v134 + 8) = 1;
                v254 = *(_QWORD *)(v134 + 8);
                if ( v208 + 1 > 0xFFFF )
                {
                  *(_DWORD *)(v134 + 72) = 2;
                  *(_DWORD *)(v134 + 76) = (v254 - *(_QWORD *)v134) >> 3;
                }
                *(_WORD *)(v254 + 6) = v208 + 1;
                *(_QWORD *)(v134 + 8) += 8LL;
                goto LABEL_250;
              }
              v319 = *(__m128i **)(v134 + 24);
              v319[1] = _mm_loadu_si128(v530 + 1);
              if ( (__int64)(v227 - 16) > 16 )
              {
                v320 = &v319->m128i_i8[v227];
                v321 = v319 + 2;
                v322 = v530 + 2;
                do
                {
                  v323 = _mm_loadu_si128(v322);
                  v321 += 2;
                  v322 += 2;
                  v321[-2] = v323;
                  v321[-1] = _mm_loadu_si128(v322 - 1);
                }
                while ( v320 > (char *)v321 );
              }
            }
            *(_QWORD *)(v134 + 24) += v227;
            v228 = *(_QWORD *)(v134 + 8);
            if ( v227 > 0xFFFF )
            {
              v253 = v228 - *(_QWORD *)v134;
              *(_DWORD *)(v134 + 72) = 1;
              *(_DWORD *)(v134 + 76) = v253 >> 3;
            }
            goto LABEL_247;
          }
          v339 = (char *)(v208 + v196);
          if ( (unsigned __int64)v339 >= v553 )
          {
            v351 = v556;
            v352 = v339;
          }
          else
          {
            if ( *v556 != *(_QWORD *)v339 )
            {
              _RAX = *(_QWORD *)v339 ^ *v556;
              __asm { tzcnt   rax, rax }
              v342 = (unsigned int)_RAX >> 3;
LABEL_413:
              v208 += v342;
              goto LABEL_199;
            }
            v352 = v339 + 8;
            v351 = v556 + 1;
            if ( v553 > (unsigned __int64)(v339 + 8) )
            {
              v389 = *((_QWORD *)v339 + 1);
              v390 = v556[1];
              if ( v389 != v390 )
              {
LABEL_519:
                _RDX = v390 ^ v389;
                __asm { tzcnt   rdx, rdx }
                v342 = &v352[(unsigned int)_RDX >> 3] - v339;
                goto LABEL_413;
              }
              while ( 1 )
              {
                v352 += 8;
                ++v351;
                if ( v553 <= (unsigned __int64)v352 )
                  break;
                v389 = *v351;
                v390 = *(_QWORD *)v352;
                if ( *v351 != *(_QWORD *)v352 )
                  goto LABEL_519;
              }
            }
          }
          if ( v352 < v532 - 3 && *(_DWORD *)v351 == *(_DWORD *)v352 )
          {
            v352 += 4;
            v351 = (__int64 *)((char *)v351 + 4);
          }
          if ( v352 < v532 - 1 && *(_WORD *)v351 == *(_WORD *)v352 )
          {
            v352 += 2;
            v351 = (__int64 *)((char *)v351 + 2);
          }
          if ( v532 > v352 )
            v352 += *(_BYTE *)v351 == (unsigned __int8)*v352;
          v342 = v352 - v339;
          goto LABEL_413;
        }
        if ( v504 )
        {
          v148 = v140 >> 8;
          if ( v527 < v148 )
          {
            v149 = (unsigned __int64)&v510[v148];
            v150 = *(_DWORD *)v132;
            if ( *(_DWORD *)v149 == *(_DWORD *)v132 )
              break;
          }
        }
        if ( v535 >= (unsigned int)v142 )
          goto LABEL_95;
        v150 = *(_DWORD *)v132;
LABEL_108:
        v151 = v133 + v142;
        if ( *(_DWORD *)v151 == v150 )
        {
          v152 = v132 + 4;
          v153 = v132 - v151;
          if ( v132 + 4 >= v553 )
          {
            v157 = (__int64 *)(v151 + 4);
            v156 = (char *)(v132 + 4);
          }
          else
          {
            v154 = *(_QWORD *)(v151 + 4);
            v155 = *(_QWORD *)(v132 + 4);
            if ( v154 != v155 )
            {
              _RDX = v155 ^ v154;
              __asm { tzcnt   rcx, rdx }
              v162 = (char *)((unsigned int)_RCX >> 3);
              goto LABEL_316;
            }
            v156 = (char *)(v132 + 12);
            v157 = (__int64 *)(v151 + 12);
            if ( v553 > v132 + 12 )
            {
              v158 = *(_QWORD *)(v151 + 12);
              v159 = *(_QWORD *)(v132 + 12);
              if ( v158 != v159 )
              {
LABEL_113:
                _RDX = v159 ^ v158;
                __asm { tzcnt   rdx, rdx }
                v162 = &v156[((unsigned int)_RDX >> 3) - v152];
                goto LABEL_316;
              }
              while ( 1 )
              {
                v156 += 8;
                ++v157;
                if ( v553 <= (unsigned __int64)v156 )
                  break;
                v158 = *v157;
                v159 = *(_QWORD *)v156;
                if ( *v157 != *(_QWORD *)v156 )
                  goto LABEL_113;
              }
            }
          }
          if ( v156 < v532 - 3 && *(_DWORD *)v157 == *(_DWORD *)v156 )
          {
            v156 += 4;
            v157 = (__int64 *)((char *)v157 + 4);
          }
          if ( v156 < v532 - 1 && *(_WORD *)v157 == *(_WORD *)v156 )
          {
            v156 += 2;
            v157 = (__int64 *)((char *)v157 + 2);
          }
          if ( v532 > v156 )
            v156 += *(_BYTE *)v157 == (unsigned __int8)*v156;
          v162 = &v156[-v152];
LABEL_316:
          v172 = v162 + 4;
          if ( (unsigned __int64)v556 >= v151 || v132 <= (unsigned __int64)v530 )
          {
            v173 = v132;
          }
          else
          {
            v173 = v132;
            if ( *(_BYTE *)(v151 - 1) == *(_BYTE *)(v132 - 1) )
            {
              do
              {
                --v173;
                --v151;
                v172 = &v162[v132 + 4 - v173];
              }
              while ( v173 > (unsigned __int64)v530
                   && (unsigned __int64)v556 < v151
                   && *(_BYTE *)(v173 - 1) == *(_BYTE *)(v151 - 1) );
            }
          }
          v283 = v153 + 3;
          v284 = *(__m128i **)(v134 + 24);
          v285 = v173 - (_QWORD)v530;
          if ( (unsigned __int64)v550 < v173 )
          {
            sub_C02D0(v284, v530, v173, v550);
          }
          else
          {
            *v284 = _mm_loadu_si128(v530);
            if ( v285 <= 0x10 )
            {
              *(_QWORD *)(v134 + 24) += v285;
              v286 = *(_QWORD *)(v134 + 8);
LABEL_353:
              *(_WORD *)(v286 + 4) = v285;
              **(_DWORD **)(v134 + 8) = v283;
              v294 = *(_QWORD *)(v134 + 8);
              if ( (unsigned __int64)(v172 - 3) > 0xFFFF )
              {
                *(_DWORD *)(v134 + 72) = 2;
                *(_DWORD *)(v134 + 76) = (v294 - *(_QWORD *)v134) >> 3;
              }
              *(_WORD *)(v294 + 6) = (_WORD)v172 - 3;
              *(_QWORD *)(v134 + 8) += 8LL;
              v542 = v539;
              v539 = v153;
              goto LABEL_250;
            }
            v324 = *(__m128i **)(v134 + 24);
            v324[1] = _mm_loadu_si128(v530 + 1);
            if ( (__int64)(v285 - 16) > 16 )
            {
              v325 = &v324->m128i_i8[v285];
              v326 = v324 + 2;
              v327 = v530 + 2;
              do
              {
                v328 = _mm_loadu_si128(v327);
                v326 += 2;
                v327 += 2;
                v326[-2] = v328;
                v326[-1] = _mm_loadu_si128(v327 - 1);
              }
              while ( v325 > (char *)v326 );
            }
          }
          *(_QWORD *)(v134 + 24) += v285;
          v286 = *(_QWORD *)(v134 + 8);
          if ( v285 > 0xFFFF )
          {
            v293 = v286 - *(_QWORD *)v134;
            *(_DWORD *)(v134 + 72) = 1;
            *(_DWORD *)(v134 + 76) = v293 >> 3;
          }
          goto LABEL_353;
        }
LABEL_95:
        v140 = *(_DWORD *)&v519[4 * (v147 >> 8)];
        v504 = (_BYTE)v147 == (unsigned __int8)v140;
        v142 = *(unsigned int *)(v500 + 4 * v146);
        if ( (unsigned __int64)v126 >= v136 )
        {
          ++v137;
          v136 += 256LL;
        }
        if ( v513 < (unsigned __int64)v126 + v137 )
        {
          v5 = v530;
          goto LABEL_134;
        }
        v143 = (int)v126;
        v132 = (unsigned __int64)v126;
        v138 = v146;
        v126 = (_QWORD *)((char *)v126 + v137);
        v141 = v143 - v133;
      }
      if ( v535 < (unsigned int)v142 )
        goto LABEL_108;
      v163 = v132 + 4;
      v164 = (unsigned __int64)&v559[v132 - v149];
      v165 = v141 + v545 - v535 - v148;
      if ( (unsigned __int64)v532 < v164 )
        v164 = (unsigned __int64)v532;
      v166 = v164 - 7;
      if ( v163 >= v164 - 7 )
      {
        v377 = (__int64 *)(v149 + 4);
        v378 = (__int64 *)(v132 + 4);
      }
      else
      {
        v167 = *(_QWORD *)(v149 + 4);
        v168 = *(_QWORD *)(v132 + 4);
        if ( v167 != v168 )
        {
          _RSI = v167 ^ v168;
          __asm { tzcnt   rsi, rsi }
          v171 = (char *)((unsigned int)_RSI >> 3);
          goto LABEL_120;
        }
        v378 = (__int64 *)(v132 + 12);
        v377 = (__int64 *)(v149 + 12);
        if ( v166 > v132 + 12 )
        {
          v411 = *(_QWORD *)(v149 + 12);
          v412 = *(_QWORD *)(v132 + 12);
          if ( v412 != v411 )
          {
LABEL_573:
            _RAX = v411 ^ v412;
            __asm { tzcnt   rax, rax }
            v171 = (char *)v378 + ((unsigned int)_RAX >> 3) - v163;
            goto LABEL_120;
          }
          while ( 1 )
          {
            ++v378;
            ++v377;
            if ( v166 <= (unsigned __int64)v378 )
              break;
            v411 = *v377;
            v412 = *v378;
            if ( *v377 != *v378 )
              goto LABEL_573;
          }
        }
      }
      if ( (unsigned __int64)v378 < v164 - 3 && *(_DWORD *)v377 == *(_DWORD *)v378 )
      {
        v378 = (__int64 *)((char *)v378 + 4);
        v377 = (__int64 *)((char *)v377 + 4);
      }
      if ( (unsigned __int64)v378 < v164 - 1 && *(_WORD *)v377 == *(_WORD *)v378 )
      {
        v378 = (__int64 *)((char *)v378 + 2);
        v377 = (__int64 *)((char *)v377 + 2);
      }
      if ( v164 > (unsigned __int64)v378 )
        v378 = (__int64 *)((char *)v378 + (*(_BYTE *)v377 == *(_BYTE *)v378));
      v171 = (char *)v378 - v163;
LABEL_120:
      if ( v559 == &v171[v149 + 4] )
      {
        v407 = &v171[v163];
        if ( (unsigned __int64)v407 >= v553 )
        {
          v463 = v556;
          v464 = v407;
        }
        else
        {
          if ( *v556 != *(_QWORD *)v407 )
          {
            _RCX = *v556 ^ *(_QWORD *)v407;
            __asm { tzcnt   rcx, rcx }
            v410 = (unsigned int)_RCX >> 3;
LABEL_570:
            v171 += v410;
            goto LABEL_121;
          }
          v464 = v407 + 8;
          v463 = v556 + 1;
          if ( v553 > (unsigned __int64)(v407 + 8) )
          {
            v475 = v556[1];
            v476 = *((_QWORD *)v407 + 1);
            if ( v475 != v476 )
            {
LABEL_697:
              _RAX = v475 ^ v476;
              __asm { tzcnt   rax, rax }
              v410 = &v464[(unsigned int)_RAX >> 3] - v407;
              goto LABEL_570;
            }
            while ( 1 )
            {
              v464 += 8;
              ++v463;
              if ( v553 <= (unsigned __int64)v464 )
                break;
              v475 = *v463;
              v476 = *(_QWORD *)v464;
              if ( *v463 != *(_QWORD *)v464 )
                goto LABEL_697;
            }
          }
        }
        if ( v464 < v532 - 3 && *(_DWORD *)v463 == *(_DWORD *)v464 )
        {
          v464 += 4;
          v463 = (__int64 *)((char *)v463 + 4);
        }
        if ( v464 < v532 - 1 && *(_WORD *)v463 == *(_WORD *)v464 )
        {
          v464 += 2;
          v463 = (__int64 *)((char *)v463 + 2);
        }
        if ( v532 > v464 )
          v464 += *(_BYTE *)v463 == (unsigned __int8)*v464;
        v410 = v464 - v407;
        goto LABEL_570;
      }
LABEL_121:
      v172 = v171 + 4;
      if ( v563 >= v149 || v132 <= (unsigned __int64)v530 )
      {
        v173 = v132;
      }
      else
      {
        v173 = v132;
        if ( *(_BYTE *)(v132 - 1) == *(_BYTE *)(v149 - 1) )
        {
          do
          {
            --v173;
            --v149;
            v172 = &v171[v132 + 4 - v173];
          }
          while ( v173 > (unsigned __int64)v530 && v563 < v149 && *(_BYTE *)(v173 - 1) == *(_BYTE *)(v149 - 1) );
        }
      }
      v174 = *(__m128i **)(v134 + 24);
      v175 = v173 - (_QWORD)v530;
      if ( (unsigned __int64)v550 < v173 )
      {
        sub_C02D0(v174, v530, v173, v550);
      }
      else
      {
        *v174 = _mm_loadu_si128(v530);
        if ( v175 <= 0x10 )
        {
          *(_QWORD *)(v134 + 24) += v175;
          v176 = *(_QWORD *)(v134 + 8);
          goto LABEL_130;
        }
        v444 = *(__m128i **)(v134 + 24);
        v444[1] = _mm_loadu_si128(v530 + 1);
        if ( (__int64)(v175 - 16) > 16 )
        {
          v445 = &v444->m128i_i8[v175];
          v446 = v444 + 2;
          v447 = v530 + 2;
          do
          {
            v448 = _mm_loadu_si128(v447);
            v446 += 2;
            v447 += 2;
            v446[-2] = v448;
            v446[-1] = _mm_loadu_si128(v447 - 1);
          }
          while ( v445 > (char *)v446 );
        }
      }
      *(_QWORD *)(v134 + 24) += v175;
      v176 = *(_QWORD *)(v134 + 8);
      if ( v175 > 0xFFFF )
      {
        v376 = v176 - *(_QWORD *)v134;
        *(_DWORD *)(v134 + 72) = 1;
        *(_DWORD *)(v134 + 76) = v376 >> 3;
      }
LABEL_130:
      *(_WORD *)(v176 + 4) = v175;
      **(_DWORD **)(v134 + 8) = v165 + 3;
      v177 = *(_QWORD *)(v134 + 8);
      if ( (unsigned __int64)(v172 - 3) > 0xFFFF )
      {
        *(_DWORD *)(v134 + 72) = 2;
        *(_DWORD *)(v134 + 76) = (v177 - *(_QWORD *)v134) >> 3;
      }
      *(_WORD *)(v177 + 6) = (_WORD)v172 - 3;
      *(_QWORD *)(v134 + 8) += 8LL;
      v542 = v539;
      v539 = v165;
LABEL_250:
      v132 = (unsigned __int64)&v172[v173];
      if ( v513 < (unsigned __int64)&v172[v173] )
        goto LABEL_251;
      v255 = v542;
      *(_DWORD *)(v500 + 4 * ((0xCF1BBCDCBFA56300LL * *(_QWORD *)(v133 + v141 + 2)) >> v516)) = v141 + 2;
      *(_DWORD *)(v500 + 4 * ((0xCF1BBCDCBFA56300LL * *(_QWORD *)(v132 - 2)) >> v516)) = v132 - 2 - v133;
      while ( 2 )
      {
        v256 = v132 - v133;
        v257 = v132 - v133 - v255;
        v258 = (char *)(v133 + v257);
        if ( v535 > v257 )
          v258 = &v510[v257 - (unsigned __int64)v562];
        if ( v255 + v525 - v256 <= 2 || *(_DWORD *)v258 != *(_DWORD *)v132 )
        {
          v542 = v255;
          goto LABEL_251;
        }
        v237 = v535 <= v257;
        v357 = v258 + 4;
        v358 = v132 + 4;
        v359 = v532;
        if ( !v237 )
          v359 = v559;
        v360 = v358 + v359 - v357;
        if ( (unsigned __int64)v532 < v360 )
          v360 = (unsigned __int64)v532;
        v361 = v360 - 7;
        if ( v358 >= v360 - 7 )
        {
          v395 = v258 + 4;
          v396 = (_DWORD *)(v132 + 4);
LABEL_536:
          if ( (unsigned __int64)v396 < v360 - 3 && *v395 == *v396 )
          {
            ++v396;
            ++v395;
          }
          if ( (unsigned __int64)v396 < v360 - 1 && *(_WORD *)v395 == *(_WORD *)v396 )
          {
            v396 = (_DWORD *)((char *)v396 + 2);
            v395 = (_DWORD *)((char *)v395 + 2);
          }
          if ( v360 > (unsigned __int64)v396 )
            v396 = (_DWORD *)((char *)v396 + (*(_BYTE *)v395 == *(_BYTE *)v396));
          v366 = (unsigned __int64)v396 - v358;
          goto LABEL_459;
        }
        v362 = *(_QWORD *)(v258 + 4);
        v363 = *(_QWORD *)(v132 + 4);
        if ( v362 != v363 )
        {
          _RDI = v363 ^ v362;
          __asm { tzcnt   rdi, rdi }
          v366 = (unsigned int)_RDI >> 3;
          goto LABEL_459;
        }
        v396 = (_DWORD *)(v132 + 12);
        v395 = v258 + 12;
        if ( v361 <= v132 + 12 )
          goto LABEL_536;
        v507 = *(_QWORD *)(v258 + 12);
        v441 = *(_QWORD *)(v132 + 12);
        if ( v507 == v441 )
        {
          while ( 1 )
          {
            v396 += 2;
            v395 += 2;
            if ( v361 <= (unsigned __int64)v396 )
              goto LABEL_536;
            if ( *(_QWORD *)v395 != *(_QWORD *)v396 )
            {
              _RAX = *(_QWORD *)v396 ^ *(_QWORD *)v395;
              goto LABEL_616;
            }
          }
        }
        _RAX = v507 ^ v441;
LABEL_616:
        __asm { tzcnt   r10, rax }
        v366 = (unsigned __int64)v396 + ((unsigned int)_R10 >> 3) - v358;
LABEL_459:
        if ( v359 == &v357[v366] )
        {
          v423 = (char *)(v366 + v358);
          if ( (unsigned __int64)v423 >= v553 )
          {
            v467 = v556;
            v468 = v423;
          }
          else
          {
            if ( *v556 != *(_QWORD *)v423 )
            {
              _RAX = *(_QWORD *)v423 ^ *v556;
              __asm { tzcnt   rax, rax }
              v426 = (unsigned int)_RAX >> 3;
LABEL_592:
              v366 += v426;
              goto LABEL_460;
            }
            v468 = v423 + 8;
            v467 = v556 + 1;
            if ( v553 > (unsigned __int64)(v423 + 8) )
            {
              v491 = *((_QWORD *)v423 + 1);
              v492 = v556[1];
              if ( v491 != v492 )
              {
LABEL_727:
                _RDX = v492 ^ v491;
                __asm { tzcnt   rdx, rdx }
                v426 = &v468[(unsigned int)_RDX >> 3] - v423;
                goto LABEL_592;
              }
              while ( 1 )
              {
                v468 += 8;
                ++v467;
                if ( v553 <= (unsigned __int64)v468 )
                  break;
                v491 = *v467;
                v492 = *(_QWORD *)v468;
                if ( *v467 != *(_QWORD *)v468 )
                  goto LABEL_727;
              }
            }
          }
          if ( v468 < v532 - 3 && *(_DWORD *)v467 == *(_DWORD *)v468 )
          {
            v468 += 4;
            v467 = (__int64 *)((char *)v467 + 4);
          }
          if ( v468 < v532 - 1 && *(_WORD *)v467 == *(_WORD *)v468 )
          {
            v468 += 2;
            v467 = (__int64 *)((char *)v467 + 2);
          }
          if ( v532 > v468 )
            v468 += *(_BYTE *)v467 == (unsigned __int8)*v468;
          v426 = v468 - v423;
          goto LABEL_592;
        }
LABEL_460:
        v367 = (char *)(v366 + 4);
        v368 = *(__m128i **)(v134 + 24);
        if ( (unsigned __int64)v550 < v132 )
          sub_C02D0(v368, (const __m128i *)v132, v132, v550);
        else
          *v368 = _mm_loadu_si128((const __m128i *)v132);
        *(_WORD *)(*(_QWORD *)(v134 + 8) + 4LL) = 0;
        **(_DWORD **)(v134 + 8) = 1;
        v369 = *(_QWORD *)(v134 + 8);
        if ( v366 + 1 > 0xFFFF )
        {
          *(_DWORD *)(v134 + 72) = 2;
          *(_DWORD *)(v134 + 76) = (v369 - *(_QWORD *)v134) >> 3;
        }
        *(_WORD *)(v369 + 6) = v366 + 1;
        *(_QWORD *)(v134 + 8) += 8LL;
        v370 = 0xCF1BBCDCBFA56300LL * *(_QWORD *)v132;
        v132 += (unsigned __int64)v367;
        *(_DWORD *)(v500 + 4 * (v370 >> v516)) = v256;
        if ( v513 >= v132 )
        {
          v371 = v255;
          v255 = v539;
          v539 = v371;
          continue;
        }
        break;
      }
      v495 = v539;
      v539 = v255;
      v542 = v495;
LABEL_251:
      v530 = (const __m128i *)v132;
      v126 = (_QWORD *)(v132 + v537);
      if ( v513 < v132 + v537 )
      {
        v5 = (const __m128i *)v132;
        break;
      }
    }
  }
LABEL_134:
  *a3 = v539;
  a3[1] = v542;
  return v532 - (char *)v5;
}

