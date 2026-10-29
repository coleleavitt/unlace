_BYTE *__fastcall sub_17E5540(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __m128 a7,
        const void *a8,
        unsigned __int64 a9,
        _BYTE *a10,
        __int64 *src,
        __int64 a12)
{
  __int64 v13; // rbx
  int v14; // edx
  _BYTE *v15; // rsi
  unsigned __int64 v16; // r13
  unsigned __int8 v18; // cl
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rax
  int v25; // r10d
  __int64 v26; // r8
  bool v27; // zf
  __int64 v28; // rax
  unsigned int v29; // edx
  bool v30; // r13
  bool v31; // r15
  int v32; // r9d
  _BYTE *v33; // rax
  char v34; // dl
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // r15
  __int64 v43; // rdx
  char v44; // di
  __int64 v45; // rcx
  __int64 *v46; // rsi
  char v47; // al
  unsigned int v48; // edx
  _BYTE *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 *v54; // r15
  __int64 *v55; // rbx
  __int16 v56; // ax
  __int64 v57; // r14
  __int64 (*v58)(); // rax
  __int64 v59; // rax
  __int16 v60; // r8
  __int16 v61; // dx
  __int64 v62; // rdx
  char v63; // r14
  unsigned __int8 v64; // r15
  char v65; // al
  _BYTE *v66; // rsi
  __int64 v67; // rax
  int v68; // edx
  __int64 v69; // rdx
  _BYTE *v70; // rdx
  _BYTE *v71; // rsi
  const __m128i **v72; // rdx
  unsigned __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rdi
  _BYTE *v80; // r15
  const __m128i ***v81; // rax
  unsigned __int64 v82; // rax
  const __m128i **v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdi
  unsigned __int64 v86; // r15
  const void *v87; // rsi
  __int64 v88; // rdx
  _BYTE *v89; // r14
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  _BYTE *v95; // r14
  __int64 v96; // r9
  __int64 v97; // r15
  char v98; // r9
  _QWORD *v99; // rdi
  unsigned __int8 v100; // cl
  int v101; // edx
  char v102; // r8
  char v103; // al
  _BYTE *v104; // rsi
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  _BYTE *v108; // r14
  __int64 v109; // rax
  char v110; // al
  char v111; // al
  __int64 v112; // rdx
  _QWORD *v113; // rdx
  unsigned __int64 v114; // r15
  __int64 v115; // r14
  __int64 v116; // rcx
  __int64 v117; // rdx
  unsigned int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // r14
  unsigned int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  _DWORD *v127; // rax
  bool v128; // r14
  _BYTE *v129; // r9
  _BYTE *v130; // r14
  bool v131; // al
  unsigned __int64 v132; // rax
  unsigned __int64 v133; // rax
  __int64 v134; // rcx
  _QWORD *v135; // r14
  _QWORD *v136; // rax
  __int64 v137; // rax
  char v138; // al
  char v139; // cl
  __int64 v140; // rbp
  __int64 v141; // r13
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rax
  unsigned __int64 v147; // rsi
  __int64 v148; // rdi
  _QWORD *v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // r13
  __int64 **v155; // rax
  __int64 *v156; // rdx
  unsigned __int64 v157; // rax
  __int64 *v158; // rcx
  _BYTE *v159; // rsi
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  _QWORD *v164; // rax
  _QWORD *v165; // rdi
  int v166; // edx
  int v167; // ecx
  __int64 v168; // rax
  unsigned __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  _BYTE *v174; // r15
  unsigned __int64 *v175; // rax
  __int64 *v176; // rdx
  unsigned __int64 v177; // rcx
  unsigned __int64 v178; // rax
  char v179; // al
  char v180; // di
  unsigned __int8 v181; // cl
  _BYTE *v182; // rax
  __int64 v183; // rax
  _QWORD *v184; // r14
  _QWORD *v185; // rdx
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // r15
  int v191; // eax
  unsigned __int64 v192; // rax
  int v193; // eax
  int v194; // eax
  unsigned __int8 v195; // cl
  unsigned int v196; // edx
  __int64 v197; // rax
  __int64 v198; // rdx
  int v199; // edx
  __int64 v200; // rdi
  __int64 (__fastcall *v201)(__int64, __int64, __int64, __int64, _BYTE *); // rdx
  __int64 v202; // rcx
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rsi
  __int64 v206; // r14
  __int64 v207; // rdx
  __int64 v208; // rcx
  __int64 v209; // r8
  unsigned int v210; // eax
  __int64 *v211; // rsi
  unsigned int v212; // ecx
  __int64 v213; // rdx
  unsigned int v214; // eax
  void *v215; // rdx
  unsigned int v216; // r14d
  int v217; // eax
  __int64 v218; // rax
  unsigned int v219; // edx
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 *v222; // rdi
  __int64 *v223; // rdx
  __int64 v224; // rax
  _BYTE *v225; // r14
  __int64 v226; // rax
  __int16 v227; // cx
  __int16 v228; // dx
  __int64 v229; // rsi
  unsigned __int64 v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // rdi
  unsigned int v236; // eax
  __int64 *v237; // rsi
  unsigned int v238; // ecx
  unsigned int v239; // edx
  __int64 v240; // rax
  __int64 v241; // r13
  __int64 v242; // r15
  __int64 v243; // rax
  __int64 *v244; // rsi
  unsigned int v245; // ecx
  unsigned int v246; // edx
  int v247; // eax
  _BYTE *v248; // r15
  __int64 v249; // rax
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  __int64 v253; // r9
  unsigned __int64 v254; // rax
  __int64 v255; // rax
  unsigned __int64 v256; // r13
  _QWORD *v257; // rdi
  unsigned __int64 v258; // r15
  unsigned __int64 v259; // rax
  __int64 v260; // rdx
  __int64 v261; // rcx
  __int64 v262; // r8
  __int64 v263; // r9
  bool v264; // r15
  void *v265; // rdi
  _BYTE *v266; // rdi
  __int64 v267; // rax
  __int64 *v268; // rax
  __int64 v269; // rdx
  __int64 *v270; // rax
  __int64 v271; // rcx
  unsigned __int64 *v272; // rax
  __int64 *v273; // rdx
  unsigned __int64 v274; // rax
  __int64 v275; // r14
  __int64 v276; // rcx
  __int64 v277; // r8
  __int64 v278; // r9
  unsigned __int64 v279; // rax
  __int64 v280; // r13
  unsigned __int8 v281; // cl
  __int64 i; // rax
  __int64 v283; // rax
  __int64 v284; // rax
  __int64 *v285; // rax
  __int64 v286; // rax
  _QWORD *v287; // rdi
  char v288; // al
  const __m128i *v289; // rdi
  const __m128i **v290; // rax
  __m128i *v291; // rax
  __int64 v292; // rdx
  __int64 v293; // rcx
  __int64 v294; // r8
  __int64 v295; // r9
  __int64 v296; // rax
  __int64 v297; // rax
  __int64 *v298; // rax
  __int64 v299; // rcx
  __int64 v300; // rax
  char v301; // al
  unsigned int v302; // eax
  __int64 v303; // rsi
  __int64 v304; // rax
  __int64 v305; // r9
  __int64 v306; // r8
  __int64 v307; // rdx
  _QWORD *v308; // rax
  _QWORD *v309; // rax
  __int64 v310; // rbp
  __int64 *v311; // rbx
  __int64 *v312; // rax
  __int64 v313; // rcx
  __int64 v314; // rax
  __int64 v315; // rdx
  __int64 v316; // rcx
  __int64 v317; // r8
  __int64 v318; // r9
  __int64 v319; // r14
  void *v320; // rax
  _QWORD *v321; // rax
  __int64 *v322; // rax
  __int64 v323; // rcx
  __int64 v324; // [rsp+0h] [rbp-1D8h]
  __int64 v325; // [rsp+8h] [rbp-1D0h]
  unsigned int v326; // [rsp+10h] [rbp-1C8h]
  char v327; // [rsp+10h] [rbp-1C8h]
  _BYTE *v328; // [rsp+10h] [rbp-1C8h]
  __int64 (__fastcall *v329)(__int64, __int64, __int64, __int64, void **); // [rsp+10h] [rbp-1C8h]
  int v330[2]; // [rsp+10h] [rbp-1C8h]
  unsigned int *v332; // [rsp+20h] [rbp-1B8h]
  __int64 v333; // [rsp+28h] [rbp-1B0h]
  __int64 v334; // [rsp+28h] [rbp-1B0h]
  __int64 v335; // [rsp+28h] [rbp-1B0h]
  char v336; // [rsp+34h] [rbp-1A4h]
  int v337; // [rsp+34h] [rbp-1A4h]
  int v338; // [rsp+38h] [rbp-1A0h]
  __int64 v339; // [rsp+38h] [rbp-1A0h]
  __int64 v340; // [rsp+40h] [rbp-198h]
  char v341; // [rsp+58h] [rbp-180h]
  int v342; // [rsp+58h] [rbp-180h]
  char v343; // [rsp+5Dh] [rbp-17Bh]
  char v344; // [rsp+5Eh] [rbp-17Ah]
  unsigned __int8 v345; // [rsp+5Fh] [rbp-179h]
  _BYTE *v346; // [rsp+68h] [rbp-170h]
  __int64 v347; // [rsp+68h] [rbp-170h]
  int v348[2]; // [rsp+70h] [rbp-168h] BYREF
  int v349[2]; // [rsp+78h] [rbp-160h] BYREF
  bool v350; // [rsp+87h] [rbp-151h] BYREF
  int v351[2]; // [rsp+88h] [rbp-150h] BYREF
  unsigned __int64 v352; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v353; // [rsp+98h] [rbp-140h] BYREF
  _BYTE *v354; // [rsp+A0h] [rbp-138h] BYREF
  unsigned __int64 v355; // [rsp+A8h] [rbp-130h] BYREF
  const void *v356; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v357; // [rsp+B8h] [rbp-120h]
  __int64 v358[2]; // [rsp+C0h] [rbp-118h] BYREF
  void *v359; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v360[12]; // [rsp+D8h] [rbp-100h] BYREF
  char v361; // [rsp+E4h] [rbp-F4h]
  void *v362; // [rsp+E8h] [rbp-F0h]
  __int64 v363; // [rsp+F0h] [rbp-E8h]
  _BYTE v364[16]; // [rsp+F8h] [rbp-E0h] BYREF
  char v365; // [rsp+108h] [rbp-D0h]
  __m128 v366; // [rsp+110h] [rbp-C8h] BYREF
  void *v367; // [rsp+120h] [rbp-B8h]
  __int64 v368; // [rsp+128h] [rbp-B0h]
  unsigned __int8 *v369; // [rsp+130h] [rbp-A8h] BYREF
  char v370; // [rsp+188h] [rbp-50h]
  unsigned int v371; // [rsp+190h] [rbp-48h]
  char v372; // [rsp+194h] [rbp-44h]

  v13 = (__int64)a1;
  *(_QWORD *)v349 = a4;
  *(_QWORD *)v348 = a5;
  v325 = a2;
  *(_QWORD *)v351 = *a5;
  sub_17B41B0((__int64)&v366, a1, (unsigned int *)(a3 + 56), *(double *)a7.m128_u64, a4, (__int64)a5, a6);
  v352 = v366.m128_u64[0];
  if ( (v366.m128_i8[0] & 7) != 0 )
  {
    v353 = 0;
    if ( *(_DWORD *)(a3 + 104) )
    {
      if ( (*(_DWORD *)(a3 + 120) & 0x7FFFFFFF) == 0 )
        goto LABEL_5;
      goto LABEL_4;
    }
LABEL_7:
    v16 = 0;
    sub_168B9F0((__int64)&v366, a1 + 1, *(_DWORD *)(a3 + 80), 0xCF1u, 0);
    sub_17B3DD0((__int64)&v366, (__int64 *)&v352);
    sub_15F7200(&v366);
    return (_BYTE *)v16;
  }
  v14 = *(_DWORD *)(a3 + 104);
  v353 = v366.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v14 )
  {
    if ( (v366.m128_u64[0] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x7FFFFFFF) != 0 )
  {
LABEL_4:
    v353 = **(_QWORD **)(a3 + 112);
    v352 = v353;
  }
LABEL_5:
  v15 = *(_BYTE **)a3;
  v338 = **(_BYTE **)a3 & 7;
  switch ( **(_BYTE **)a3 & 7 )
  {
    case 0:
    case 1:
    case 7:
      v333 = *(_QWORD *)v349;
      if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
        goto LABEL_458;
      goto LABEL_178;
    case 2:
      v333 = *(_QWORD *)v349;
      v111 = *(_BYTE *)(a1[29] + 1) & 8;
      if ( (**(_BYTE **)a3 & 0x20) != 0 )
      {
        if ( v111 )
        {
LABEL_458:
          v18 = *(_BYTE *)(v333 + 8) & 0x7F;
          if ( v18 != 8 )
          {
            v326 = 0;
            goto LABEL_14;
          }
          if ( v353 )
          {
            v255 = *(_QWORD *)(v353 + 16);
            if ( *(_DWORD *)v255 == 1 )
            {
              v326 = 0;
LABEL_438:
              v343 = 0;
              if ( *(_BYTE *)(v255 + 16) == 95 )
              {
                v343 = 1;
                if ( *(_DWORD *)(a6 + 16) )
                {
                  v256 = **(_QWORD **)(a6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  v257 = (_QWORD *)(*(_QWORD *)(v256 + 16) & 0xFFFFFFFFFFFFFFF8LL);
                  if ( (*(_QWORD *)(v256 + 16) & 4) != 0 )
                    v257 = (_QWORD *)*v257;
                  v258 = sub_B8EAA0((__int64)v257);
                  v259 = sub_B8EAA0(*(__int64 *)v349);
                  if ( v259 && (v264 = sub_179A7B0(v258, v259, v260, v261, v262, v263)) )
                  {
                    v343 = sub_15C11F0(v13 + 2608, v256, *(_QWORD *)(v13 + 544), (__int64 *)v325, 0);
                    if ( v343 )
                    {
                      if ( (*(_BYTE *)(v256 + 28) & 0x7F) == 0x2B )
                      {
                        v333 = *(_QWORD *)v349;
                        goto LABEL_16;
                      }
                      sub_183B540(v13, *(unsigned int *)(a3 + 80));
                      v333 = *(_QWORD *)v349;
                    }
                    else
                    {
                      v343 = v264;
                      v333 = *(_QWORD *)v349;
                    }
                  }
                  else
                  {
                    v343 = 1;
                    v333 = *(_QWORD *)v349;
                  }
                }
              }
              goto LABEL_17;
            }
          }
        }
LABEL_178:
        v343 = 0;
        goto LABEL_18;
      }
      if ( !v111 )
      {
        v343 = 0;
        goto LABEL_173;
      }
      v326 = 1;
LABEL_487:
      v18 = *(_BYTE *)(v333 + 8) & 0x7F;
      if ( v18 == 8 )
      {
LABEL_488:
        v343 = 0;
        goto LABEL_375;
      }
LABEL_14:
      if ( v18 > 0x12u )
      {
        v343 = 0;
        if ( ((v18 + 94) & 0x7Fu) > 5 )
          goto LABEL_17;
      }
      else if ( ((1LL << v18) & 0x40182) == 0 )
      {
LABEL_16:
        v343 = 0;
        goto LABEL_17;
      }
      v343 = 0;
      if ( v326 - 1 <= 1 )
        goto LABEL_375;
      v254 = v353;
      if ( !v353 )
        goto LABEL_17;
LABEL_437:
      v255 = *(_QWORD *)(v254 + 16);
      v343 = 0;
      if ( *(_DWORD *)v255 == 1 )
        goto LABEL_438;
LABEL_17:
      if ( !v326 )
      {
LABEL_18:
        if ( ((*(_BYTE *)(v333 + 8) + 70) & 0x7Fu) > 3 )
        {
          if ( sub_179D380(a3, 113) )
          {
            v333 = *(_QWORD *)v349;
            if ( !sub_179D380(a3, 111) )
              goto LABEL_173;
          }
          else
          {
            v333 = *(_QWORD *)v349;
          }
        }
        v326 = 0;
        goto LABEL_22;
      }
LABEL_375:
      if ( v326 != 1 )
      {
LABEL_22:
        v344 = 0;
        if ( v338 != 7 )
          goto LABEL_23;
LABEL_174:
        sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 80), 0x109Bu, 0);
        sub_15F7200(&v366);
        *(_BYTE *)(a3 + 720) |= 1u;
        v15 = *(_BYTE **)a3;
        v326 = 0;
        goto LABEL_26;
      }
LABEL_173:
      v326 = 1;
      v344 = sub_17A42D0((unsigned __int64 *)v349);
      if ( v338 == 7 )
        goto LABEL_174;
LABEL_23:
      v15 = *(_BYTE **)a3;
LABEL_24:
      if ( (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 0x10) != 0 && v338 == 5 && !*(_QWORD *)(a3 + 816) )
      {
        if ( !(unsigned __int8)sub_16C5190(*(__int64 **)(v13 + 272), *((_DWORD *)v15 + 42)) )
        {
          sub_168B9F0(
            (__int64)&v366,
            (__int64 *)(v13 + 8),
            *(_DWORD *)(*(_QWORD *)a3 + 168LL),
            (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 0x40) == 0 ? 6839 : 5660,
            0);
          v217 = *(_DWORD *)(*(_QWORD *)a3 + 168LL);
          v361 = 0;
          *(_QWORD *)&v360[4] = 0;
          v362 = v364;
          v363 = 0;
          v364[0] = 0;
          v365 = 0;
          LODWORD(v359) = v217;
          HIDWORD(v359) = v217;
          v360[0] = 1;
          sub_1589170((__int64)&v366, &v359);
          if ( v362 != v364 )
            operator delete(v362);
          sub_15F7200(&v366);
        }
        v15 = *(_BYTE **)a3;
      }
LABEL_26:
      sub_17A3FF0(v13, (__int64)v15);
      if ( ((*(_BYTE *)(*(_QWORD *)v349 + 8LL) + 70) & 0x7Fu) > 3
        && !*(_QWORD *)(v325 + 24)
        && (v326 == 4 || v326 == 5 && !*(_QWORD *)(a3 + 816)) )
      {
        sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 80), 0x14BCu, 0);
        sub_15F7200(&v366);
        *(_BYTE *)(a3 + 720) |= 1u;
      }
      if ( (*(_BYTE *)(a3 + 721) & 2) != 0
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v351 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 6 )
      {
        sub_17AF2A0(v13, (__int64 **)v348, (__int64 *)v351, *(_DWORD *)(a3 + 80), 0);
      }
      v19 = **(_QWORD **)v348;
      v366.m128_u64[1] = *(_QWORD *)v348 + 8LL;
      v366.m128_u64[0] = v19;
      v20 = sub_F6E530((__int64)&v366);
      if ( v20 )
      {
        v22 = *(_QWORD *)(v21 + 8);
        v23 = 0;
        if ( v22 )
          v23 = *(_DWORD *)(v22 + 32);
        sub_16C57E0(v13, v20, v23);
      }
      v24 = *(_QWORD *)(v13 + 232);
      v25 = *(_DWORD *)(a3 + 80);
      v350 = 0;
      v354 = nullptr;
      if ( (*(_BYTE *)(v24 + 1) & 8) != 0 )
      {
        LODWORD(v26) = 0;
        v27 = *(_DWORD *)(a3 + 56) == 7;
        LOBYTE(v356) = 0;
        if ( v27 )
          v26 = *(_QWORD *)(a3 + 64);
        v332 = (unsigned int *)sub_1CD3B10(
                                 v13,
                                 *(_DWORD *)(*(_QWORD *)a3 + 160LL),
                                 v25,
                                 (int)a3 + 8,
                                 v26,
                                 0,
                                 (__int64)a8,
                                 a9,
                                 (__int64)&v350,
                                 (__int64)&v356,
                                 0);
        if ( v332 )
        {
          if ( (unsigned __int8)sub_B8E180(*(unsigned __int64 *)v349) )
          {
            v240 = *(_QWORD *)(v13 + 9944);
            v241 = *(_QWORD *)(v13 + 544);
            *(_QWORD *)(v13 + 9944) = 0;
            v242 = *(_QWORD *)(v13 + 512);
            *(_QWORD *)(v13 + 512) = 0;
            v368 = v240;
            v342 = *(_DWORD *)(v13 + 80);
            v337 = *(_DWORD *)(v13 + 2632);
            *(_QWORD *)(v13 + 544) = *(_QWORD *)v349;
            *(_DWORD *)(v13 + 80) = *(_DWORD *)(v13 + 40);
            *(_DWORD *)(v13 + 2632) = *(_DWORD *)(v13 + 3688);
            if ( (unsigned __int8)sub_1CFA440(v13, v332) )
              LOBYTE(v356) = 1;
            if ( v241 )
            {
              v243 = v368;
              *(_QWORD *)(v13 + 544) = v241;
              *(_QWORD *)(v13 + 512) = v242;
              *(_QWORD *)(v13 + 9944) = v243;
              *(_DWORD *)(v13 + 80) = v342;
              *(_DWORD *)(v13 + 2632) = v337;
            }
          }
          if ( (v332[5] & 0x1FFFFFFF) != 0 || *(_DWORD *)(a3 + 56) == 7 )
          {
            v345 = sub_1CBD040(v13, v325, v332);
            if ( v345 )
              return nullptr;
            if ( *(_DWORD *)(a3 + 56) == 7 )
            {
              v193 = v332[5] & 0x1FFFFFFF;
              if ( !v338 )
              {
                v341 = 0;
                v31 = v193 != 0;
                v336 = 1;
                v30 = v193 != 0;
                v345 = v193 != 0;
                goto LABEL_45;
              }
              if ( !v193 )
              {
                v341 = 0;
                v30 = 0;
                v31 = 0;
                v336 = 1;
LABEL_334:
                sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(*(_QWORD *)a3 + 168LL), 0x15B0u, 0);
                v194 = *(_DWORD *)(*(_QWORD *)a3 + 168LL);
                v362 = v364;
                *(_QWORD *)&v360[4] = 0;
                v361 = 0;
                v363 = 0;
                v364[0] = 0;
                v365 = 0;
                LODWORD(v359) = v194;
                HIDWORD(v359) = v194;
                v360[0] = 1;
                sub_1589170((__int64)&v366, &v359);
                if ( v362 != v364 )
                  operator delete(v362);
                sub_15F7200(&v366);
LABEL_45:
                if ( ((*(_BYTE *)(*(_QWORD *)(v13 + 544) + 8LL) + 70) & 0x7Fu) <= 3 )
                {
                  if ( v326 == 2 )
                  {
                    v280 = *(_QWORD *)v349;
                    v281 = *(_BYTE *)(*(_QWORD *)v349 + 8LL) & 0x7F;
                    if ( (unsigned int)v281 - 59 <= 2 && *(_QWORD *)v349 != 64 )
                    {
                      for ( i = *(_QWORD *)v349; ; v281 = *(_BYTE *)(i + 8) & 0x7F )
                      {
                        if ( v281 > 0x12u )
                        {
                          if ( ((v281 + 94) & 0x7Fu) <= 5 )
                          {
LABEL_485:
                            sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 80), 0x1398u, 0);
                            v283 = sub_17B3DD0((__int64)&v366, (__int64 *)&v352);
                            v359 = *(void **)(v280 - 24);
                            v284 = sub_15894B0(v283, (__int64 *)&v359);
                            LODWORD(v358[0]) = *(_BYTE *)(v280 + 9) >> 5;
                            sub_17B3D20(v284, (int *)v358);
                            sub_15F7200(&v366);
                            goto LABEL_47;
                          }
                          if ( (unsigned int)v281 - 59 <= 2 && i != 64 && !*(_QWORD *)(i - 24) )
                          {
                            v347 = i;
                            sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 80), 0x1397u, 0);
                            v314 = sub_17B3DD0((__int64)&v366, (__int64 *)&v352);
                            LODWORD(v359) = *(_BYTE *)(v347 + 9) >> 5;
                            sub_17B3D20(v314, (int *)&v359);
                            sub_15F7200(&v366);
                            LOBYTE(v356) = 1;
                            goto LABEL_47;
                          }
                        }
                        else if ( ((1LL << v281) & 0x40182) != 0 )
                        {
                          goto LABEL_485;
                        }
                        i = sub_B72690(i);
                        if ( !i )
                          break;
                      }
                      if ( *(_BYTE *)(v280 + 9) >> 5 == 2 )
                      {
                        sub_168BB30((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 80), 2u, 0);
                        sub_17B3DD0((__int64)&v366, (__int64 *)&v352);
                        sub_15F7200(&v366);
                      }
                    }
                  }
                  else if ( v30 )
                  {
                    sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 80), 0x1409u, 0);
                    v218 = sub_169D880((__int64)&v366, (__int64 *)&v353);
                    v219 = v332[4];
                    LODWORD(v359) = v332[2];
                    HIDWORD(v359) = v219;
                    sub_1587DB0(v218, (__int64 *)&v359);
                    sub_15F7200(&v366);
                    v326 = 2;
                  }
                }
                else
                {
                  if ( ((*(_BYTE *)(*(_QWORD *)v349 + 8LL) + 70) & 0x7Fu) > 3 )
                    goto LABEL_47;
                  if ( v326 == 2 )
                  {
                    v244 = (__int64 *)(v13 + 8);
                    v245 = 5025;
                    v246 = *(_DWORD *)(*(_QWORD *)a3 + 168LL);
                  }
                  else
                  {
                    if ( v326 > 2 )
                    {
                      if ( v326 - 4 > 1 )
                        goto LABEL_47;
                    }
                    else if ( v326 != 1 )
                    {
                      goto LABEL_47;
                    }
                    v244 = (__int64 *)(v13 + 8);
                    v245 = 5034;
                    v246 = *(_DWORD *)(*(_QWORD *)a3 + 168LL);
                  }
                  sub_168B9F0((__int64)&v366, v244, v246, v245, 0);
                  v247 = *(_DWORD *)(*(_QWORD *)a3 + 168LL);
                  v361 = 0;
                  *(_QWORD *)&v360[4] = 0;
                  v362 = v364;
                  v363 = 0;
                  v364[0] = 0;
                  v365 = 0;
                  LODWORD(v359) = v247;
                  HIDWORD(v359) = v247;
                  v360[0] = 1;
                  sub_1589170((__int64)&v366, &v359);
                  if ( v362 != v364 )
                    operator delete(v362);
                  sub_15F7200(&v366);
                }
LABEL_47:
                if ( v336 )
                {
                  v32 = 0;
                  if ( a9 )
                    v32 = *(_DWORD *)(*(_QWORD *)a8 + 8LL);
                  v33 = (_BYTE *)sub_1CE21B0(v13, v325, a3, v348[0], a6, v32, (__int64)v332, v326, v345);
                  if ( v34 )
                    return nullptr;
                  v354 = v33;
                  *a10 = 0;
                }
                else
                {
                  v165 = *(_QWORD **)(v13 + 248);
                  v166 = *(_DWORD *)(a3 + 88);
                  v167 = *(_DWORD *)(a3 + 80);
                  if ( *(_DWORD *)(a3 + 104) )
                  {
                    v16 = 0;
                    v33 = (_BYTE *)sub_B9AE80(
                                     v165,
                                     *(__int64 *)v349,
                                     v166,
                                     v167,
                                     *(__int64 *)v351,
                                     *(__int64 *)v348,
                                     v326,
                                     src,
                                     a12);
                    v354 = v33;
                    if ( !v341 )
                      goto LABEL_53;
                    goto LABEL_288;
                  }
                  v33 = (_BYTE *)sub_B731A0(
                                   (__int64)v165,
                                   *(__int64 *)v349,
                                   v166,
                                   v167,
                                   v353,
                                   *(__int64 *)v351,
                                   *(__int64 *)v348,
                                   v326);
                  v354 = v33;
                }
                v16 = 0;
                if ( !v341 )
                  goto LABEL_53;
LABEL_288:
                v16 = sub_BBFAF0(
                        *(_QWORD *)(v13 + 248),
                        *(__int64 *)v349,
                        *(_DWORD *)(a3 + 80),
                        v352,
                        (__int64)v332,
                        (__int64)v33);
                sub_B73C10((__int64)v354, v16);
LABEL_53:
                if ( sub_F57E80(*(_QWORD *)(*(_QWORD *)v351 & 0xFFFFFFFFFFFFFFF0LL)) )
                {
                  v39 = sub_1703870(v13 + 3040, (__int64)v354);
                  v36 = *(_BYTE *)(v13 + 3060) ? *(unsigned int *)(v13 + 3052) : *(unsigned int *)(v13 + 3048);
                  v35 = *(_QWORD *)(v13 + 3040) + 8 * v36;
                  if ( v39 != (_QWORD *)v35 )
                  {
                    v36 = *v39 + 2LL;
                    if ( *v39 == -2 || v36 == 1 )
                    {
                      do
                        ++v39;
                      while ( (_QWORD *)v35 != v39 && *v39 >= 0xFFFFFFFFFFFFFFFELL );
                    }
                  }
                }
                if ( (*(_BYTE *)(a3 + 720) & 1) != 0 || ((**(_DWORD **)a3 >> 12) & 0x7F) == 0x45 || (_BYTE)v356 )
                {
                  sub_B88650((__int64)v354, 1);
                  if ( v16 )
                    sub_B88650(v16, 1);
                }
                if ( *(_QWORD *)(a3 + 16) )
                {
                  v346 = v354;
                  v40 = sub_15AB9E0(a3 + 8, *(_QWORD **)(v13 + 248), v35, v36, v37, v38);
                  sub_B7BD70((__int64)v346, v40, v41);
                }
                v42 = (v332 != nullptr) & (unsigned __int8)v31;
                if ( v42 < a9 )
                  sub_B7C7A0((__int64)v354, *(_QWORD *)(v13 + 248), a8, a9 - v42);
                goto LABEL_70;
              }
              v341 = 0;
              v30 = 1;
              v336 = 1;
LABEL_284:
              v31 = v350;
              v345 = v336;
              if ( !v350 )
              {
                v31 = 1;
                goto LABEL_45;
              }
              goto LABEL_334;
            }
            sub_168BB30((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 80), 9u, 0);
            sub_15F7200(&v366);
            v341 = 1;
          }
          else
          {
            sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), v332[2], 0x1431u, 0);
            v28 = sub_169D880((__int64)&v366, (__int64 *)&v353);
            v29 = v332[4];
            LODWORD(v359) = v332[2];
            HIDWORD(v359) = v29;
            sub_1587DB0(v28, (__int64 *)&v359);
            sub_15F7200(&v366);
            v341 = 0;
            v332 = nullptr;
          }
          v30 = v341;
          if ( !v338 )
          {
LABEL_44:
            v345 = 0;
            v31 = 1;
            v336 = 0;
            goto LABEL_45;
          }
        }
        else
        {
          if ( a9 && v350 && (unsigned __int8)sub_1CBD040(v13, v325, *((_QWORD *)a8 + a9 - 1)) )
            return nullptr;
          v341 = 0;
          v30 = 0;
          if ( !v338 )
            goto LABEL_44;
        }
        v336 = 0;
        goto LABEL_284;
      }
      v159 = *(_BYTE **)v349;
      v354 = (_BYTE *)sub_B731A0(
                        *(_QWORD *)(v13 + 248),
                        *(__int64 *)v349,
                        *(_DWORD *)(a3 + 88),
                        v25,
                        v353,
                        *(__int64 *)v351,
                        *(__int64 *)v348,
                        v326);
      if ( sub_F57E80(*(_QWORD *)(*(_QWORD *)v351 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        v159 = v354;
        v164 = sub_1703870(v13 + 3040, (__int64)v354);
        v161 = *(_BYTE *)(v13 + 3060) ? *(unsigned int *)(v13 + 3052) : *(unsigned int *)(v13 + 3048);
        v160 = *(_QWORD *)(v13 + 3040) + 8 * v161;
        if ( v164 != (_QWORD *)v160 )
        {
          v161 = *v164 + 2LL;
          if ( *v164 == -2 || v161 == 1 )
          {
            do
              ++v164;
            while ( (_QWORD *)v160 != v164 && *v164 >= 0xFFFFFFFFFFFFFFFELL );
          }
        }
      }
      if ( (*(_BYTE *)(a3 + 720) & 1) != 0 || ((**(_DWORD **)a3 >> 12) & 0x7F) == 0x45 )
      {
        v159 = (_BYTE *)(&dword_0 + 1);
        sub_B88650((__int64)v354, 1);
      }
      v366.m128_u64[0] = *((_QWORD *)v354 + 6);
      if ( (unsigned __int8)sub_179FB40(&v366, (__int64)v159, v160, v161, v162, v163) && sub_9B48E0((__int64)v354) )
        sub_17D0CF0(v13, *((_QWORD *)v354 + 6), *((unsigned int *)v354 + 6), 3, 2, v38, v324, v325);
      v332 = nullptr;
      v16 = 0;
      v341 = 0;
      v345 = 0;
      v336 = 0;
LABEL_70:
      v43 = *(_QWORD *)a3;
      v44 = *(_BYTE *)(*(_QWORD *)a3 + 3LL);
      v45 = (unsigned __int8)v44;
      LOBYTE(v45) = *(_BYTE *)(*(_QWORD *)a3 + 4LL) & 1 | ((unsigned __int8)v44 >> 7);
      if ( !(_BYTE)v45 )
      {
LABEL_76:
        v49 = v354;
        goto LABEL_77;
      }
      v46 = (__int64 *)(v13 + 8);
      v47 = *(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL);
      if ( (v47 & 8) == 0 )
      {
        if ( v44 < 0 )
          v48 = *(_DWORD *)(v43 + 240);
        else
          v48 = *(_DWORD *)(v43 + 260);
        sub_168B9F0((__int64)&v366, v46, v48, 0xFA3u, 0);
        LODWORD(v359) = 0;
        sub_1587D10((__int64)&v366, (int *)&v359);
LABEL_75:
        sub_15F7200(&v366);
        goto LABEL_76;
      }
      v195 = *(_BYTE *)(*(_QWORD *)(v13 + 544) + 8LL) & 0x7F;
      if ( v195 > 0x12u )
      {
        if ( ((v195 + 94) & 0x7Fu) <= 5 )
        {
LABEL_349:
          if ( v44 < 0 )
            v196 = *(_DWORD *)(v43 + 240);
          else
            v196 = *(_DWORD *)(v43 + 260);
          sub_168B9F0((__int64)&v366, v46, v196, 0xF9Fu, 0);
          v197 = sub_17B3DD0((__int64)&v366, (__int64 *)&v352);
          v198 = *(_QWORD *)a3;
          if ( *(char *)(*(_QWORD *)a3 + 3LL) < 0 )
            v199 = *(_DWORD *)(v198 + 240);
          else
            v199 = *(_DWORD *)(v198 + 260);
          *(_QWORD *)&v360[4] = 0;
          v361 = 0;
          v362 = v364;
          v363 = 0;
          v364[0] = 0;
          v365 = 0;
          LODWORD(v359) = v199;
          HIDWORD(v359) = v199;
          v360[0] = 1;
          sub_1589170(v197, &v359);
          if ( v362 != v364 )
            operator delete(v362);
          goto LABEL_75;
        }
      }
      else if ( ((1LL << v195) & 0x40182) != 0 )
      {
        goto LABEL_349;
      }
      if ( v44 < 0 )
        v239 = *(_DWORD *)(v43 + 240);
      else
        v239 = *(_DWORD *)(v43 + 260);
      sub_168B9F0((__int64)&v366, v46, v239, (v47 & 0x40) == 0 ? 2856 : 2832, 0);
      sub_15F7200(&v366);
      v49 = v354;
      v354[97] |= 0x60u;
LABEL_77:
      sub_B90130((__int64)v49, *(_QWORD *)(v13 + 544), v43, v45, v37, v38);
      if ( v16 )
        sub_B90130(v16, *(_QWORD *)(v13 + 544), v50, v51, v52, v53);
      if ( v344 )
      {
        if ( *(_DWORD *)(a3 + 104) )
        {
          if ( &src[a12] == src )
            goto LABEL_90;
          v340 = v13;
          v54 = src;
          v55 = &src[a12];
          while ( 1 )
          {
            while ( 1 )
            {
              v57 = *v54;
              v58 = *(__int64 (**)())(*(_QWORD *)*v54 + 48LL);
              if ( v58 != sub_AE9D20 )
                break;
              v56 = *(_WORD *)(v57 + 30) & 0xFFDF;
              HIBYTE(v56) |= 8u;
              *(_WORD *)(v57 + 30) = v56;
LABEL_84:
              if ( v55 == ++v54 )
                goto LABEL_89;
            }
            v59 = ((__int64 (__fastcall *)(__int64, __int64 (*)()))v58)(*v54, sub_AE9D20);
            v60 = *(_WORD *)(v57 + 30) & 0x3FDF;
            v61 = *(_WORD *)(v57 + 30) & 0xC000 | v60 | 0x800;
            *(_WORD *)(v57 + 30) = v61;
            if ( !v59 || (*(_BYTE *)(v59 + 30) & 0x20) == 0 )
              goto LABEL_84;
            ++v54;
            *(_WORD *)(v57 + 30) = v60 | 0x820 | v61 & 0xC000;
            if ( v55 == v54 )
            {
LABEL_89:
              v13 = v340;
              goto LABEL_90;
            }
          }
        }
        v225 = v354;
        v226 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v354 + 48LL))(v354);
        v227 = *((_WORD *)v225 + 15) & 0x3FDF;
        v228 = *((_WORD *)v225 + 15) & 0x37DF | 0x800 | *((_WORD *)v225 + 15) & 0xC000;
        *((_WORD *)v225 + 15) = v228;
        if ( v226 && (*(_BYTE *)(v226 + 30) & 0x20) != 0 )
          *((_WORD *)v225 + 15) = v227 | 0x820 | v228 & 0xC000;
      }
LABEL_90:
      v62 = *(_QWORD *)a3;
      v63 = 0;
      v64 = (**(_BYTE **)a3 >> 3) & 3;
      if ( v64 )
      {
        if ( !sub_9B48E0((__int64)v354) )
          goto LABEL_314;
        if ( !v338 && v64 == 2 )
        {
          v181 = *(_BYTE *)(*(_QWORD *)v349 + 8LL) & 0x7F;
          if ( v181 > 0x12u )
          {
            if ( ((v181 + 94) & 0x7Fu) <= 5 )
            {
LABEL_314:
              v63 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 248) + 17448LL) + 273LL);
              if ( v63 )
              {
                v63 = 0;
                v354[96] = v354[96] & 0xE7 | (8 * (v64 & 3));
                v62 = *(_QWORD *)a3;
              }
              else
              {
                v182 = *(_BYTE **)(v13 + 232);
                if ( (v182[60] & 0x10) != 0 || (v182[68] & 8) != 0 || (v182[89] & 4) != 0 || (v182[96] & 0x10) != 0 )
                {
                  v63 = 1;
                  v354[96] = (8 * (v64 & 3)) | v354[96] & 0xE7;
                  v62 = *(_QWORD *)a3;
                }
                else
                {
                  sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(*(_QWORD *)a3 + 172LL), 0x143Au, 0);
                  sub_15F7200(&v366);
                  v62 = *(_QWORD *)a3;
                }
              }
              goto LABEL_91;
            }
          }
          else if ( ((1LL << v181) & 0x40182) != 0 )
          {
            goto LABEL_314;
          }
        }
        v63 = 0;
        sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(*(_QWORD *)a3 + 172LL), 0x1436u, 0);
        v359 = sub_15AC8E0(v64);
        sub_15AFC70((__int64)&v366, &v359);
        sub_15F7200(&v366);
        v62 = *(_QWORD *)a3;
      }
LABEL_91:
      v65 = (*(_BYTE *)(v62 + 4) >> 4) & 3;
      if ( v65 == 2 )
      {
        sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(v62 + 272), 0xDA6u, 0);
        LODWORD(v359) = (*(_BYTE *)(*(_QWORD *)a3 + 4LL) >> 4) & 3;
        sub_1587D10((__int64)&v366, (int *)&v359);
        sub_15F7200(&v366);
      }
      else
      {
        if ( ((*(_BYTE *)(v62 + 4) >> 4) & 3) == 3 )
        {
          if ( sub_9B48E0((__int64)v354) )
          {
            sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(*(_QWORD *)a3 + 272LL), 0xDA8u, 0);
            sub_15F7200(&v366);
            v66 = v354;
            goto LABEL_95;
          }
          v248 = v354;
          v249 = sub_B30B50(
                   *(_QWORD *)(v13 + 248),
                   ((unsigned __int64)*(unsigned int *)(*(_QWORD *)a3 + 272LL) << 32)
                 | *(unsigned int *)(*(_QWORD *)a3 + 272LL),
                   0);
          sub_B8CC60((__int64)v248, v249, v250, v251, v252, v253);
          goto LABEL_94;
        }
        if ( v65 != 1 )
        {
LABEL_94:
          v66 = v354;
          goto LABEL_95;
        }
      }
      v66 = v354;
      v138 = v354[28] & 0x7F;
      v354[97] |= 0x80u;
      if ( v138 != 43
        && sub_179A810((__int64)v66)
        && ((*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 0x40) != 0
         || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 248) + 17448LL) + 340LL) == 10) )
      {
        v66[97] = v139 | 0x20;
      }
LABEL_95:
      if ( v326 == 2 )
      {
        if ( *(_QWORD *)(v325 + 24) )
        {
          v168 = *((_QWORD *)v66 + 6);
          if ( (v168 & 1) == 0 && (byte_8[v168 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
          {
            v169 = sub_15F1640(v13, 0);
            v174 = (_BYTE *)v169;
            if ( v169 && (*(_BYTE *)(v169 + 82) & 1) != 0 )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 8) == 0 )
              {
LABEL_561:
                if ( (unsigned int)sub_A7BFC0(*(_QWORD *)(v13 + 248), v174) == 1 )
                {
                  sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(*(_QWORD *)a3 + 168LL), 0x1CD5u, 0);
                  sub_15F7200(&v366);
                  sub_18CD400(v13, v174);
                }
                goto LABEL_300;
              }
              if ( (*(_BYTE *)(v169 + 29) & 1) != 0 )
              {
                v175 = sub_B8C3D0(v169, 0, v170, v171, v172, v173);
                v176 = (__int64 *)*v175;
                v177 = *v175 + 8LL * *((unsigned int *)v175 + 2);
                if ( *v175 < v177 )
                {
                  v178 = *v175;
                  while ( *(_WORD *)(*(_QWORD *)v178 + 36LL) != 221 )
                  {
                    v178 += 8LL;
                    if ( v177 == v178 )
                      goto LABEL_300;
                  }
                  if ( v177 == v178 )
                    goto LABEL_300;
                  goto LABEL_561;
                }
                if ( v176 != (__int64 *)v177 )
                {
                  if ( *(_WORD *)(*(_QWORD *)v177 + 36LL) != 221 )
                  {
                    v322 = (__int64 *)(v177 + 8);
                    while ( v176 != v322 )
                    {
                      v323 = *v322++;
                      if ( *(_WORD *)(v323 + 36) == 221 )
                        goto LABEL_561;
                    }
                    goto LABEL_300;
                  }
                  goto LABEL_561;
                }
              }
            }
LABEL_300:
            v66 = v354;
          }
        }
      }
      if ( !*(_DWORD *)(*(_QWORD *)a3 + 268LL) )
        goto LABEL_103;
      if ( v336 )
      {
        sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *((_DWORD *)v66 + 6), 0x1072u, 0);
        LODWORD(v358[0]) = v345;
        v67 = sub_1587D10((__int64)&v366, (int *)v358);
        goto LABEL_100;
      }
      if ( v350 )
      {
        sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *((_DWORD *)v66 + 6), 0x1072u, 0);
        LODWORD(v358[0]) = 2;
        v67 = sub_1587D10((__int64)&v366, (int *)v358);
LABEL_100:
        v68 = *(_DWORD *)(*(_QWORD *)a3 + 268LL);
        v361 = 0;
        *(_QWORD *)&v360[4] = 0;
        v362 = v364;
        v363 = 0;
        v364[0] = 0;
        v365 = 0;
        LODWORD(v359) = v68;
        HIDWORD(v359) = v68;
        v360[0] = 1;
        sub_1589170(v67, &v359);
        if ( v362 != v364 )
          operator delete(v362);
        sub_15F7200(&v366);
        v66 = v354;
        goto LABEL_103;
      }
      if ( sub_9B48E0((__int64)v66) )
      {
        sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *((_DWORD *)v354 + 6), 0x1070u, 0);
        LODWORD(v356) = 0;
        v296 = sub_1587D10((__int64)&v366, (int *)&v356);
        v297 = sub_17B9080(v296, (__int64 *)&v354);
        LODWORD(v358[0]) = *(_DWORD *)(*(_QWORD *)a3 + 268LL);
        HIDWORD(v358[0]) = v358[0];
        v67 = sub_1587DB0(v297, v358);
        goto LABEL_100;
      }
      v66 = v354;
      v220 = *((_QWORD *)v354 + 1);
      if ( (v220 & 7) != 0 )
        *((_QWORD *)v354 + 1) = v220 & 0xFFFFFFFFFFFFFFF8LL | 4;
      if ( v16 )
      {
        v221 = *(_QWORD *)(v16 + 8);
        if ( (v221 & 7) != 0 )
          *(_QWORD *)(v16 + 8) = v221 & 0xFFFFFFFFFFFFFFF8LL | 4;
      }
      v222 = &src[a12];
      if ( v222 != src )
      {
        v223 = src;
        do
        {
          v224 = *(_QWORD *)(*v223 + 8);
          if ( (v224 & 7) != 0 )
            *(_QWORD *)(*v223 + 8) = v224 & 0xFFFFFFFFFFFFFFF8LL | 4;
          ++v223;
        }
        while ( v222 != v223 );
      }
LABEL_103:
      if ( (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 47LL) & 0x20) != 0 )
      {
        sub_17A40B0(v13, (__int64)v66);
        v180 = **(_BYTE **)a3 >> 3;
        if ( (v180 & 3) != 0 )
        {
          sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(*(_QWORD *)a3 + 172LL), 0x31u, 0);
          sub_FEAB20((__int64)&v359, *(_QWORD *)(v13 + 232));
          v339 = sub_1682AF0((__int64)&v366, (__int64)&v359);
          v358[0] = (__int64)sub_15AC8E0(v180 & 3);
          v267 = sub_15AFC70(v339, v358);
          LODWORD(v356) = 1;
          sub_1587D10(v267, (int *)&v356);
          if ( v359 != &v360[8] )
            operator delete(v359);
          sub_15F7200(&v366);
          sub_B88650((__int64)v354, 1);
        }
        v66 = v354;
      }
      v69 = *(_QWORD *)(*((_QWORD *)v66 + 6) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned __int8)(*(_BYTE *)(v69 + 16) - 2) <= 4u )
      {
        v366.m128_u64[0] = *(_QWORD *)(v69 + 32);
        if ( !sub_F65EB0(&v366) || sub_9B48E0((__int64)v354) )
        {
          v66 = v354;
        }
        else
        {
          v190 = *(_QWORD *)(v13 + 248);
          v191 = sub_A68500(v190, 1);
          v192 = sub_A70E70(v190, *((_QWORD *)v354 + 6), v191);
          v66 = v354;
          *((_QWORD *)v354 + 6) = v192;
        }
      }
      v70 = v66;
      v71 = (_BYTE *)v325;
      sub_1836CB0(v13, v325, v70, a3);
      v76 = *(_QWORD *)(v13 + 232);
      if ( (*(_BYTE *)(v76 + 89) & 1) != 0 )
      {
        v71 = v354;
        sub_19FC410(*(_QWORD *)(v13 + 680), v354);
        v76 = *(_QWORD *)(v13 + 232);
      }
      if ( (*(_BYTE *)(v76 + 97) & 4) != 0 )
      {
        v71 = v354;
        sub_1AAABD0(*(_QWORD *)(v13 + 744), v354);
      }
      v77 = *(_QWORD *)(*(_QWORD *)v351 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v77 + 16) != 42 )
      {
        v72 = *(const __m128i ***)(*(_QWORD *)(v77 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *((_BYTE *)v72 + 16) != 42 )
          goto LABEL_121;
        v77 = sub_F63050(*(_QWORD *)(*(_QWORD *)v351 & 0xFFFFFFFFFFFFFFF0LL), v71, v72, v73);
        if ( !v77 )
          goto LABEL_121;
      }
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v77 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 > 1 )
        goto LABEL_121;
      v78 = sub_F6AC00(*(_QWORD *)(*(_QWORD *)v351 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v78 )
        goto LABEL_121;
      v79 = *(_QWORD *)(v78 + 32);
      if ( (*(_BYTE *)(v79 + 29) & 1) == 0 )
        goto LABEL_121;
      v80 = v354;
      v81 = (const __m128i ***)sub_B8C3D0(v79, (__int64)v71, (__int64)v72, v73, v74, v75);
      v72 = *v81;
      v82 = (unsigned __int64)&(*v81)[*((unsigned int *)v81 + 2)];
      if ( (unsigned __int64)v72 >= v82 )
      {
        if ( v72 == (const __m128i **)v82 )
          goto LABEL_121;
        if ( *(_WORD *)(*(_QWORD *)v82 + 36LL) != 128 )
        {
          v83 = (const __m128i **)(v82 + 8);
          do
          {
            v73 = (unsigned __int64)v83;
            if ( v72 == v83 )
              goto LABEL_121;
            v84 = (__int64)*v83++;
          }
          while ( *(_WORD *)(v84 + 36) != 128 );
        }
LABEL_511:
        v289 = *v72;
        if ( (*v72)[2].m128i_i16[2] != 128 )
        {
          v290 = v72 + 1;
          do
            v289 = *v290++;
          while ( v289[2].m128i_i16[2] != 128 );
        }
        v291 = sub_B22DE0(v289, *(_QWORD *)(v13 + 248));
        v291[2].m128i_i8[6] |= 1u;
        v71 = v291;
        sub_B8CC60((__int64)v80, (__int64)v291, v292, v293, v294, v295);
        goto LABEL_121;
      }
      v73 = (unsigned __int64)v72;
      while ( 1 )
      {
        v71 = *(_BYTE **)v73;
        if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) == 128 )
          break;
        v73 += 8LL;
        if ( v82 == v73 )
          goto LABEL_121;
      }
      if ( v82 != v73 )
        goto LABEL_511;
LABEL_121:
      v85 = *(_QWORD *)(v13 + 232);
      if ( (*(_BYTE *)(v85 + 60) & 0x10) != 0 )
      {
        if ( !v63 )
          goto LABEL_130;
        v71 = v354;
        if ( !v354 || sub_179BC40(v85, (__int64)v354, (__int64)v72, v73, v74, v75) )
        {
LABEL_125:
          v71 = (_BYTE *)(v13 + 8);
          sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(*(_QWORD *)a3 + 172LL), 0x143Au, 0);
          sub_15F7200(&v366);
          v85 = *(_QWORD *)(v13 + 232);
LABEL_126:
          if ( (*(_BYTE *)(v85 + 96) & 0x10) != 0 || *(_DWORD *)(v85 + 64) && (*(_BYTE *)(v85 + 68) & 8) != 0 )
          {
            v71 = (_BYTE *)v13;
            sub_1606D30((__int64)&v366, (_QWORD *)v13, *(unsigned int *)(a3 + 80), 5178, 0);
            sub_15F7200(&v366);
          }
LABEL_130:
          if ( v326 || !*(_QWORD *)(v325 + 24) || (v354[29] & 1) == 0 )
            goto LABEL_133;
          v268 = sub_B8C3D0((__int64)v354, (__int64)v71, (__int64)v72, v73, v74, v75);
          v269 = *v268;
          v73 = *v268 + 8LL * *((unsigned int *)v268 + 2);
          if ( *v268 < v73 )
          {
            v285 = (__int64 *)*v268;
            while ( 1 )
            {
              v269 = *v285;
              if ( *(_WORD *)(*v285 + 36) == 168 )
                break;
              if ( (__int64 *)v73 == ++v285 )
                goto LABEL_467;
            }
            if ( (__int64 *)v73 != v285 )
              goto LABEL_473;
          }
          else if ( v269 != v73 )
          {
            if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) == 168 )
              goto LABEL_473;
            v270 = (__int64 *)(v73 + 8);
            while ( 1 )
            {
              v73 = (unsigned __int64)v270;
              if ( (__int64 *)v269 == v270 )
                break;
              v271 = *v270++;
              if ( *(_WORD *)(v271 + 36) == 168 )
                goto LABEL_473;
            }
          }
LABEL_467:
          if ( (v354[29] & 1) == 0 )
          {
LABEL_133:
            v85 = *(_QWORD *)(v13 + 232);
            goto LABEL_134;
          }
          v272 = sub_B8C3D0((__int64)v354, (__int64)v71, v269, v73, v74, v75);
          v273 = (__int64 *)*v272;
          v73 = *v272 + 8LL * *((unsigned int *)v272 + 2);
          if ( *v272 >= v73 )
          {
            if ( v273 == (__int64 *)v73 )
              goto LABEL_133;
            if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) != 159 )
            {
              v298 = (__int64 *)(v73 + 8);
              do
              {
                v73 = (unsigned __int64)v298;
                if ( v273 == v298 )
                  goto LABEL_133;
                v299 = *v298++;
              }
              while ( *(_WORD *)(v299 + 36) != 159 );
            }
          }
          else
          {
            v274 = *v272;
            while ( *(_WORD *)(*(_QWORD *)v274 + 36LL) != 159 )
            {
              v274 += 8LL;
              if ( v73 == v274 )
                goto LABEL_133;
            }
            if ( v73 == v274 )
              goto LABEL_133;
          }
LABEL_473:
          sub_B73350((__int64)v354, 2);
          goto LABEL_133;
        }
        v85 = *(_QWORD *)(v13 + 232);
        if ( (*(_BYTE *)(v85 + 68) & 8) == 0 )
          goto LABEL_126;
LABEL_124:
        if ( !(unsigned __int8)(sub_B06290(v354) >> 32) )
        {
          v85 = *(_QWORD *)(v13 + 232);
          goto LABEL_126;
        }
        goto LABEL_125;
      }
      if ( (*(_BYTE *)(v85 + 68) & 8) != 0 )
      {
        if ( !v63 )
          goto LABEL_130;
        goto LABEL_124;
      }
      if ( (*(_BYTE *)(v85 + 89) & 4) != 0 || (*(_BYTE *)(v85 + 96) & 0x10) != 0 )
      {
        if ( !v63 )
          goto LABEL_130;
        goto LABEL_126;
      }
LABEL_134:
      if ( (*(_BYTE *)(v85 + 107) & 4) != 0 && (unsigned __int8)sub_189F360(*(_QWORD *)(v13 + 736), v354) )
        sub_B88650((__int64)v354, 1);
      v86 = *(_QWORD *)(a3 + 816);
      if ( v86 )
      {
        v87 = (const void *)(v86 + 4LL * *(unsigned int *)(v86 + 4) + 20);
        v88 = *(_DWORD *)(v86 + 16) * ((*(_WORD *)(v86 + 2) >> 6) & 7u);
        v356 = v87;
        v27 = *(_QWORD *)(v325 + 24) == 0;
        v357 = v88;
        if ( !v27 )
        {
          if ( v326 != 4 )
          {
            if ( v326 == 5 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(v13 + 248) + 17448LL) + 304LL))(*(_QWORD *)(*(_QWORD *)(v13 + 248) + 17448LL)) )
                goto LABEL_140;
              v229 = 0;
              v230 = sub_15F1640(v13, 0);
              v235 = *(_QWORD *)(v13 + 232);
              if ( (*(_BYTE *)(v235 + 60) & 0x10) != 0 )
              {
                if ( v230 )
                {
                  v229 = v230;
                  if ( !sub_179BC40(v235, v230, v231, v232, v233, v234) )
                    goto LABEL_140;
                }
              }
              v236 = sub_C00A40(v86, v229, v231, v232, v233);
              v237 = (__int64 *)(v13 + 8);
              v238 = 3112;
LABEL_404:
              sub_168B9F0((__int64)&v366, v237, v236, v238, 0);
              sub_1682BA0((__int64)&v366, (__int64)&v356);
              sub_15F7200(&v366);
              v89 = v354;
              goto LABEL_141;
            }
            if ( v326 )
            {
LABEL_140:
              v89 = v354;
LABEL_141:
              v90 = sub_B339E0(
                      *(_QWORD *)(v13 + 248),
                      v356,
                      v357,
                      1,
                      *(unsigned int *)(v86 + 20) | ((unsigned __int64)*(unsigned int *)(v86 + 20) << 32));
              sub_B8CC60((__int64)v89, v90, v91, v92, v93, v94);
              v95 = v354;
              goto LABEL_142;
            }
          }
          v236 = sub_C00A40(v86, (__int64)v87, v88, v73, v74);
          v237 = (__int64 *)(v13 + 8);
          v238 = 6525;
          goto LABEL_404;
        }
        v89 = v354;
        if ( v326 != 5 )
          goto LABEL_141;
        v200 = *(_QWORD *)(v13 + 232);
        if ( (*(_BYTE *)(v200 + 60) & 0x10) == 0 || !v354 || sub_179BC40(v200, (__int64)v354, v88, v73, v74, v75) )
        {
          v205 = (__int64)v356;
          v206 = *(_QWORD *)(*(_QWORD *)(v13 + 248) + 17448LL);
          if ( (*(unsigned __int8 (__fastcall **)(__int64, const void *, __int64))(*(_QWORD *)v206 + 304LL))(
                 v206,
                 v356,
                 v357) )
          {
            v329 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, void **))(*(_QWORD *)v206 + 328LL);
            v302 = sub_A97D20(*(_QWORD *)(v13 + 248), *(_QWORD *)(*(_QWORD *)v351 & 0xFFFFFFFFFFFFFFF0LL));
            v201 = sub_102B900;
            if ( (char *)v329 == (char *)sub_102B900 )
              goto LABEL_364;
            v303 = (__int64)v356;
            if ( (unsigned __int8)v329(v206, (__int64)v356, v357, v302, &v359) )
            {
              if ( !(_BYTE)v359 )
                goto LABEL_364;
              v210 = sub_C00A40(v86, v303, (__int64)v201, v202, v203);
              v211 = (__int64 *)(v13 + 8);
              v212 = 3109;
            }
            else
            {
              v210 = sub_C00A40(v86, v303, (__int64)v201, v202, v203);
              v211 = (__int64 *)(v13 + 8);
              v212 = 3097;
            }
          }
          else
          {
            v210 = sub_C00A40(v86, v205, v207, v208, v209);
            v211 = (__int64 *)(v13 + 8);
            v212 = 3112;
          }
          sub_168B9F0((__int64)&v366, v211, v210, v212, 0);
          sub_1682BA0((__int64)&v366, (__int64)&v356);
          sub_15F7200(&v366);
        }
LABEL_364:
        if ( !sub_F60F80(
                *(_QWORD *)(*(_QWORD *)v351 & 0xFFFFFFFFFFFFFFF0LL),
                *(_QWORD *)(v13 + 248),
                (__int64)v201,
                v202,
                v203,
                v204)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v351 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 42 )
        {
          v213 = **(_QWORD **)v348;
          v358[1] = *(_QWORD *)v348 + 8LL;
          v358[0] = v213;
          v214 = sub_F6CCB0(v358, a7);
          sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), v214, 0xC29u, 0);
          v215 = **(void ***)v348;
          *(_QWORD *)v360 = *(_QWORD *)v348 + 8LL;
          v359 = v215;
          v216 = sub_F6CE20((__int64 *)&v359);
          v355 = __PAIR64__(v216, sub_F6CCB0((__int64 *)&v359, a7));
          sub_1587DB0((__int64)&v366, (__int64 *)&v355);
          sub_15F7200(&v366);
          sub_B88650((__int64)v354, 1);
        }
        goto LABEL_140;
      }
      v95 = v354;
      if ( *(_DWORD *)(v13 + 2768) )
      {
        v183 = *((_QWORD *)v354 + 5);
        if ( (v183 & 7) == 0 )
          v86 = v183 & 0xFFFFFFFFFFFFFFF8LL;
        v184 = (_QWORD *)sub_17A94F0(v13 + 2760, v86);
        v185 = (_QWORD *)(*(_QWORD *)(v13 + 2760) + 16LL * *(unsigned int *)(v13 + 2776));
        sub_17A9480(&v366, v185, v185, v13 + 2760, 1);
        if ( (_QWORD *)v366.m128_u64[0] != v184 )
        {
          if ( (unsigned __int8)sub_179A690((__int64)v354) )
          {
            sub_B8CC60((__int64)v354, v184[1], v186, v187, v188, v189);
            *v184 = -8192;
            --*(_DWORD *)(v13 + 2768);
            ++*(_DWORD *)(v13 + 2772);
          }
          else
          {
            sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *((_DWORD *)v354 + 6), 0x1C98u, 0);
            LODWORD(v359) = 1;
            v286 = sub_1587D10((__int64)&v366, (int *)&v359);
            sub_17B9080(v286, (__int64 *)&v354);
            sub_15F7200(&v366);
          }
        }
        v95 = v354;
      }
LABEL_142:
      v96 = *(unsigned int *)(a3 + 8);
      if ( (_DWORD)v96 )
      {
        v74 = *(unsigned int *)(a3 + 12);
        if ( !(_DWORD)v74 )
        {
          v97 = 0;
          if ( *(_QWORD *)(a3 + 16) )
            goto LABEL_145;
          goto LABEL_236;
        }
LABEL_185:
        v98 = 1;
        v97 = 0;
        goto LABEL_147;
      }
      if ( *(_QWORD *)(a3 + 16) )
        goto LABEL_185;
LABEL_236:
      v137 = sub_17A4390(v13, (__int64)v95, a6, v73, v74, v96);
      v95 = v354;
      v97 = v137;
      if ( *(_DWORD *)(a3 + 8) && *(_DWORD *)(a3 + 12) )
      {
        v98 = 1;
        goto LABEL_147;
      }
LABEL_145:
      v98 = 1;
      if ( !*(_QWORD *)(a3 + 16) )
        v98 = v350 | v336;
LABEL_147:
      v99 = (_QWORD *)(*((_QWORD *)v95 + 2) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*((_QWORD *)v95 + 2) & 4) != 0 )
        v99 = (_QWORD *)*v99;
      v327 = v98;
      v100 = *(_BYTE *)(sub_B8EAA0((__int64)v99) + 8) & 0x7F;
      if ( v100 > 0x12u )
      {
        if ( v100 <= 0x21u )
        {
          v101 = v100;
          if ( ((v100 + 102) & 0x7Fu) > 1 )
            goto LABEL_151;
        }
        else if ( v100 > 0x27u )
        {
LABEL_207:
          v102 = 0;
          goto LABEL_154;
        }
LABEL_184:
        v102 = (v95[96] & 5) == 1;
        goto LABEL_154;
      }
      v101 = v100;
      if ( ((1LL << v100) & 0x40182) != 0 )
        goto LABEL_184;
LABEL_151:
      if ( v101 && v101 != 24 )
        goto LABEL_207;
      v102 = 1;
LABEL_154:
      sub_17A32D0(v13, (int *)a6, v333, (__int64 *)v325, v102, v327);
      if ( (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 8) == 0 )
        goto LABEL_155;
      v128 = (v354[28] & 0x7F) != 46 && (v354[28] & 0x7F) != 40;
      if ( !v128 )
      {
        if ( sub_179A840((__int64)v354) )
        {
          v129 = v354;
          if ( (v354[96] & 5) == 1 )
          {
            if ( *(_DWORD *)a6 == 2 && !*(_BYTE *)(a6 + 166) )
            {
              v328 = v354;
              v300 = sub_16C47B0(**(_QWORD **)(a6 + 8) & 0xFFFFFFFFFFFFFFF8LL);
              v301 = sub_15C11F0(v13 + 2608, v300, v333, (__int64 *)v325, 0);
              v129 = v328;
              v128 = v301;
            }
            v129[98] = v129[98] & 0xFD | (2 * v128);
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 8) == 0 )
        {
LABEL_155:
          v103 = sub_17E53D0(v13, (__int64)v354, a6, *(double *)a7.m128_u64);
          v104 = v354;
          *(_BYTE *)(a3 + 720) = (16 * (v103 & 1)) | *(_BYTE *)(a3 + 720) & 0xEF;
          goto LABEL_156;
        }
      }
      if ( v350 && !v336 && !v341 && (char)v354[28] >= 0 && (unsigned __int8)sub_1CC0B10(v13, v354, a6) )
        sub_B88650((__int64)v354, 1);
      if ( *(_DWORD *)(a6 + 16) )
      {
        v130 = v354;
        if ( *(_DWORD *)a6 == 2
          && (*(_BYTE *)(sub_16C47B0(**(_QWORD **)(a6 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 49 <= 2
          && *(_QWORD *)(a3 + 16) )
        {
          sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *((_DWORD *)v130 + 6), 0x10DEu, 0);
          v359 = *(void **)(a3 + 8);
          sub_1587DB0((__int64)&v366, (__int64 *)&v359);
          sub_15F7200(&v366);
          v265 = *(void **)(a6 + 88);
          *(_DWORD *)a6 = 0;
          *(_DWORD *)(a6 + 16) = 0;
          if ( v265 )
            sub_1A39780(v265);
          a7.m128_u64[0] = 0;
          v266 = v354;
          *(_BYTE *)(a6 + 166) = 0;
          *(_OWORD *)(a6 + 88) = 0;
          sub_B88650((__int64)v266, 1);
          v130 = v354;
        }
        if ( v343 )
          goto LABEL_221;
LABEL_304:
        v179 = sub_17E53D0(v13, (__int64)v130, a6, *(double *)a7.m128_u64);
        v130 = v354;
        *(_BYTE *)(a3 + 720) = (16 * (v179 & 1)) | *(_BYTE *)(a3 + 720) & 0xEF;
        goto LABEL_221;
      }
      if ( *(_QWORD *)(a3 + 16) && !v336 )
      {
        sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 80), 0x10B2u, 0);
        v275 = sub_17B3DD0((__int64)&v366, (__int64 *)&v352);
        v279 = sub_16A2930(v13, a3 + 8, 1, v276, v277, v278);
        if ( *(_BYTE *)(v275 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v275 + 32), v279, 0xCu);
        }
        else if ( *(_BYTE *)(v275 + 132) )
        {
          *(_QWORD *)v330 = v279;
          v304 = sub_168B9E0((_QWORD *)v275);
          v306 = *(_QWORD *)v330;
          v307 = v304;
          v308 = *(_QWORD **)(v275 + 16);
          if ( v308 )
          {
            v334 = v307;
            v308 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, int *))(*v308 + 32LL))(
                               v308,
                               a3 + 8,
                               v307,
                               *v308,
                               *(int **)v330);
            v307 = v334;
            v306 = *(_QWORD *)v330;
          }
          v335 = v306;
          v359 = v308;
          v309 = sub_1587BC0(v307, (__int64 *)&v359, v307, (__int64)&v359, v306, v305);
          sub_AE9DF0((unsigned __int8 **)(*v309 + 32LL * *(unsigned int *)(v275 + 128) + 8), v335, 0xCu);
        }
        v359 = *(void **)(a3 + 8);
        sub_1587DB0(v275, (__int64 *)&v359);
        sub_15F7200(&v366);
        sub_B88650((__int64)v354, 1);
      }
      v130 = v354;
      if ( !v343 )
        goto LABEL_304;
LABEL_221:
      v131 = sub_F65F60(*(_QWORD *)(*((_QWORD *)v130 + 6) & 0xFFFFFFFFFFFFFFF0LL));
      v104 = v354;
      if ( v131 && (char)v354[28] < 0 )
        return nullptr;
      if ( v16 )
      {
        v132 = sub_AEADC0((__int64 *)v354 + 9);
        if ( v132 )
        {
          v133 = sub_B73BE0(v132);
          v134 = 0;
          v135 = (_QWORD *)v133;
          if ( *(_QWORD *)(a3 + 16) && *(_QWORD *)v349 && ((*(_BYTE *)(*(_QWORD *)v349 + 8LL) + 70) & 0x7Fu) <= 3 )
            v134 = (unsigned __int8)sub_B8E180(*(unsigned __int64 *)v349) != 0 ? 2 : 0;
          if ( v135 )
          {
            if ( (unsigned __int8)sub_1CBDF60(v13, v332, v135[7], v134, 0) )
              sub_B88650((__int64)v354, 1);
            if ( (*(_QWORD *)sub_BC3640(v135) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v136 = (_QWORD *)sub_BC3640(v135);
              *v136 |= 4uLL;
            }
LABEL_234:
            v104 = v354;
            goto LABEL_156;
          }
        }
        else if ( *(_QWORD *)(a3 + 16) && *(_QWORD *)v349 && ((*(_BYTE *)(*(_QWORD *)v349 + 8LL) + 70) & 0x7Fu) <= 3 )
        {
          v134 = (unsigned __int8)sub_B8E180(*(unsigned __int64 *)v349) != 0 ? 2 : 0;
        }
        else
        {
          v134 = 0;
        }
        if ( (unsigned __int8)sub_1CBDF60(v13, v332, 0, v134, 0) )
        {
          sub_B88650((__int64)v354, 1);
          v104 = v354;
          goto LABEL_156;
        }
        goto LABEL_234;
      }
LABEL_156:
      if ( v343 != 1 && v97 && (*(_BYTE *)(a3 + 720) & 0x10) == 0 )
      {
        sub_17DD7F0(v13, (unsigned __int64)v104, v97, a6);
        v104 = v354;
      }
      sub_1809FF0(v13, v325, v104);
      v108 = v354;
      if ( ((v354[72] | (unsigned __int8)(*((__int64 *)v354 + 9) >> 1)) & 1) != 0 && (char)v354[28] >= 0 )
      {
        if ( (unsigned __int8)sub_179DDB0(v13, (__int64)v354) )
          sub_179B380(v13, (__int64)v354, v112, v105, v106, v107);
        v109 = *(_QWORD *)(v13 + 232);
        v108 = v354;
        if ( (*(_BYTE *)(v109 + 1) & 8) != 0 )
        {
LABEL_190:
          if ( (unsigned __int8)sub_17A0330((__int64)v108) )
          {
            v113 = (_QWORD *)(*((_QWORD *)v354 + 2) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*((_QWORD *)v354 + 2) & 4) != 0 )
              v113 = (_QWORD *)*v113;
            sub_1A2F990(&v366, v13, v113);
            v114 = v366.m128_u64[1];
            if ( v366.m128_u64[1] )
            {
              v115 = *(_QWORD *)(v13 + 248);
              if ( *(_DWORD *)(*(_QWORD *)(v13 + 232) + 152LL) > 0xB532B7Fu )
              {
                v117 = *(unsigned __int16 *)(v325 + 16);
              }
              else
              {
                v116 = *(_QWORD *)(v325 + 32);
                v117 = 1;
                if ( v116 )
                  v117 = *(unsigned __int16 *)(v116 + 14);
              }
              v118 = (*(__int64 (__fastcall **)(unsigned __int64, _BYTE *, __int64))(*(_QWORD *)v366.m128_u64[1] + 40LL))(
                       v366.m128_u64[1],
                       v354,
                       v117);
              sub_AB9320(v115, (__int64)v354, v118, v119, v120, v121);
              v122 = *(_QWORD *)(v13 + 248);
              v123 = (*(__int64 (__fastcall **)(unsigned __int64, _BYTE *))(*(_QWORD *)v114 + 32LL))(v114, v354);
              sub_AB39A0(v122, (__int64)v354, v123, v124, v125, v126);
            }
          }
          v108 = v354;
          if ( *(char *)(*(_QWORD *)(v13 + 232) + 14LL) < 0 )
            goto LABEL_163;
          goto LABEL_199;
        }
      }
      else
      {
        v109 = *(_QWORD *)(v13 + 232);
        if ( (*(_BYTE *)(v109 + 1) & 8) != 0 )
          goto LABEL_190;
      }
      if ( *(char *)(v109 + 14) < 0 )
        goto LABEL_163;
LABEL_199:
      if ( (v352 & 7) == 0 && (v352 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v127 = *(_DWORD **)((v352 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        if ( *v127 == 4 && v127[4] == 1852399981 )
        {
          if ( !sub_B73BE0((__int64)v108) )
          {
            v287 = (_QWORD *)(*((_QWORD *)v108 + 2) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*((_QWORD *)v108 + 2) & 4) != 0 )
              v287 = (_QWORD *)*v287;
            if ( (*(_BYTE *)(sub_B8EAA0((__int64)v287) + 8) & 0x7F) == 0 || (unsigned __int8)sub_B82160((__int64)v108) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(v13 + 232) + 1LL) & 8) != 0 )
              {
                sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 88), 0x101Eu, 0);
                LOBYTE(v359) = sub_B82160((__int64)v354);
                sub_1588420((__int64)&v366, (unsigned __int8 *)&v359);
                sub_15F7200(&v366);
                v108 = v354;
                goto LABEL_163;
              }
              v288 = sub_B81B70((__int64)v354);
              if ( v288 == 3 || v288 == 6 )
              {
                sub_168B9F0((__int64)&v366, (__int64 *)(v13 + 8), *(_DWORD *)(a3 + 88), 0x1BAAu, 0);
                sub_15F7200(&v366);
              }
            }
          }
          v108 = v354;
        }
      }
LABEL_163:
      v110 = *(_BYTE *)(a3 + 720);
      if ( (v110 & 0x10) != 0 )
      {
        v105 = a6;
        if ( *(_DWORD *)(a6 + 16) )
        {
          sub_17BC2F0(
            v13,
            **(_QWORD **)(a6 + 8) & 0xFFFFFFFFFFFFFFF8LL,
            (__int64)v108,
            (_WORD *)v350,
            (v110 & 0xC) != 0,
            v107);
          v108 = v354;
        }
      }
      if ( !v16 )
      {
        if ( v350 && (char)v108[28] >= 0 )
        {
          sub_1CB5B10(v13, v108, a6);
          v108 = v354;
        }
        v140 = *((_QWORD *)v108 + 6);
        v141 = *(_QWORD *)&byte_8[v140 & 0xFFFFFFFFFFFFFFF0LL];
        if ( sub_9B48E0((__int64)v108) )
          return v354;
        v146 = *((_QWORD *)v108 + 6);
        if ( (v146 & 1) != 0 || (byte_8[v146 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
          return v354;
        v147 = v141 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v141 | (unsigned __int8)v140) & 7;
        v148 = *(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v148 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
          v148 = *(_QWORD *)(sub_A71450(*(_QWORD *)(v13 + 248), v147) & 0xFFFFFFFFFFFFFFF0LL);
        v149 = sub_F63240(v148, v147, v142, v143, v144, v145);
        v154 = (__int64)v149;
        if ( !v149 || (*((_BYTE *)v149 + 29) & 1) == 0 )
          return v354;
        v155 = (__int64 **)sub_B8C3D0((__int64)v149, v147, v150, v151, v152, v153);
        v156 = *v155;
        v157 = (unsigned __int64)&(*v155)[*((unsigned int *)v155 + 2)];
        if ( (unsigned __int64)v156 >= v157 )
        {
          if ( v156 == (__int64 *)v157 )
            return v354;
          if ( *(_WORD *)(*(_QWORD *)v157 + 36LL) != 341 )
          {
            v312 = (__int64 *)(v157 + 8);
            while ( v312 != v156 )
            {
              v313 = *v312++;
              if ( *(_WORD *)(v313 + 36) == 341 )
                goto LABEL_550;
            }
            return v354;
          }
        }
        else
        {
          v158 = v156;
          while ( *(_WORD *)(*v158 + 36) != 341 )
          {
            if ( (__int64 *)v157 == ++v158 )
              return v354;
          }
          if ( (__int64 *)v157 == v158 )
            return v354;
        }
LABEL_550:
        while ( 1 )
        {
          v310 = *v156;
          if ( *(_WORD *)(*v156 + 36) == 341 )
            break;
          ++v156;
        }
        v311 = (__int64 *)(v13 + 8);
        sub_168B9F0((__int64)&v366, v311, *((_DWORD *)v108 + 6), 0x1D7Cu, 0);
        if ( v370 )
        {
          sub_AE9DF0(&v369, v154, 0xAu);
        }
        else if ( v372 )
        {
          v319 = sub_168B9E0(&v366);
          v320 = v367;
          if ( v367 )
            v320 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v367 + 32LL))(v367);
          v359 = v320;
          v321 = sub_1587BC0(v319, (__int64 *)&v359, v315, v316, v317, v318);
          sub_AE9DF0((unsigned __int8 **)(*v321 + 32LL * v371 + 8), v154, 0xAu);
        }
        sub_15F7200(&v366);
        sub_168B9F0((__int64)&v366, v311, *(_DWORD *)(v310 + 24), 0x1727u, 0);
        sub_15F7200(&v366);
        return v354;
      }
      if ( (char)v108[28] < 0 )
        sub_B88650(v16, 1);
      v366.m128_u64[0] = v16;
      sub_179B290((__int64 *)v13, (__int64 *)&v366, 1, v105, v106, v107);
      return (_BYTE *)v16;
    case 3:
      v333 = *(_QWORD *)v349;
      if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
      {
        v343 = 0;
        v344 = 0;
        v326 = 2;
        goto LABEL_26;
      }
      v326 = 2;
      goto LABEL_487;
    case 4:
      v326 = 4;
      goto LABEL_180;
    case 5:
      v326 = 5;
      v333 = *(_QWORD *)v349;
      if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
        goto LABEL_13;
      goto LABEL_181;
    case 6:
      v326 = 3;
LABEL_180:
      v333 = *(_QWORD *)v349;
      if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
      {
LABEL_181:
        v343 = 0;
        v344 = 0;
        goto LABEL_24;
      }
LABEL_13:
      v18 = *(_BYTE *)(v333 + 8) & 0x7F;
      if ( v18 != 8 )
        goto LABEL_14;
      v254 = v353;
      if ( v353 )
        goto LABEL_437;
      goto LABEL_488;
  }
}
