/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43EEA0
// Address: 0x000000000043EEA0

//----- (000000000043EEA0) ----------------------------------------------------
__int64 __fastcall sub_43EEA0(
        __int64 a1,
        __m128i *a2,
        const char *a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12)
{
  __m128 v12; // xmm0
  __int64 v14; // r14
  const char *v15; // rbp
  pthread_mutex_t *v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int v20; // ebp
  signed int v21; // edx
  signed int v22; // esi
  __int64 v23; // r8
  const char *v24; // rsi
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rax
  char *v28; // rsi
  char *v29; // rdi
  double v30; // xmm4_8
  double v31; // xmm5_8
  _QWORD *v32; // rdi
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __m128i *v36; // rdi
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // r13
  signed int v40; // edx
  double v41; // xmm4_8
  double v42; // xmm5_8
  __int64 v43; // rax
  __int64 v44; // r10
  __int32 v45; // r11d
  int v46; // ebp
  int v47; // eax
  unsigned __int8 (__fastcall *v48)(double, double, double, double, double, double, double, double); // rdx
  bool v49; // al
  __int128 *v50; // rcx
  char v51; // al
  __int64 v52; // rdx
  __int64 v53; // rsi
  char *v54; // rax
  signed int v55; // eax
  int v56; // eax
  pthread_mutex_t *v57; // rdi
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rax
  __m128i *v61; // rsi
  unsigned __int64 v62; // rdx
  __int8 *v63; // rax
  char v64; // al
  unsigned __int8 v65; // bp
  __int64 v66; // rax
  unsigned int v67; // ebp
  __int64 result; // rax
  int v69; // eax
  unsigned int v70; // eax
  double v71; // xmm4_8
  double v72; // xmm5_8
  __int64 v73; // rax
  __int64 v74; // rdx
  double v75; // xmm4_8
  double v76; // xmm5_8
  __int64 v77; // rax
  int v78; // eax
  char v79; // di
  int v80; // eax
  int v81; // eax
  __int64 v82; // rax
  double v83; // xmm4_8
  double v84; // xmm5_8
  __int64 v85; // rax
  char *v86; // rsi
  char *v87; // rdi
  int v88; // eax
  __int64 v89; // rax
  double v90; // xmm4_8
  double v91; // xmm5_8
  __int64 v92; // rax
  char *v93; // rsi
  char *v94; // rdi
  double v95; // xmm4_8
  double v96; // xmm5_8
  int v97; // eax
  int v98; // eax
  unsigned __int64 v99; // rcx
  double v100; // xmm4_8
  double v101; // xmm5_8
  __int64 v102; // rax
  __int64 v103; // rdx
  double v104; // xmm4_8
  double v105; // xmm5_8
  __int64 v106; // rax
  int v107; // eax
  unsigned __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rax
  int v111; // eax
  int v112; // eax
  unsigned __int64 v113; // rcx
  double v114; // xmm4_8
  double v115; // xmm5_8
  __int64 v116; // rax
  __int64 v117; // rdx
  double v118; // xmm4_8
  double v119; // xmm5_8
  __int64 v120; // rax
  int v121; // eax
  unsigned __int64 v122; // rcx
  int v123; // esi
  __int64 v124; // rax
  int v125; // r13d
  __int64 v126; // rax
  int v127; // r13d
  double v128; // xmm4_8
  double v129; // xmm5_8
  __m128i *v130; // rax
  signed __int64 v131; // rbp
  _BYTE *v132; // rax
  _BYTE *v133; // r13
  __m128i v134; // xmm0
  double v135; // xmm4_8
  double v136; // xmm5_8
  __int64 v137; // rbp
  __int64 v138; // rbp
  double v139; // xmm4_8
  double v140; // xmm5_8
  double v141; // xmm4_8
  double v142; // xmm5_8
  double v143; // xmm4_8
  double v144; // xmm5_8
  double v145; // xmm4_8
  double v146; // xmm5_8
  double v147; // xmm4_8
  double v148; // xmm5_8
  __int64 v149; // rbp
  __int64 v150; // rbp
  double v151; // xmm4_8
  double v152; // xmm5_8
  __m128i *v153; // rdx
  __int64 v154; // rax
  unsigned int v155; // eax
  __m128i *v156; // rbp
  __int64 v157; // rax
  __int64 v158; // rbp
  __int64 v159; // rbp
  double v160; // xmm4_8
  double v161; // xmm5_8
  double v162; // xmm4_8
  double v163; // xmm5_8
  double v164; // xmm4_8
  double v165; // xmm5_8
  __int64 v166; // rbp
  __int64 v167; // rbp
  double v168; // xmm4_8
  double v169; // xmm5_8
  double v170; // xmm4_8
  double v171; // xmm5_8
  double v172; // xmm4_8
  double v173; // xmm5_8
  int v174; // ebp
  __m128i *v175; // rax
  unsigned __int16 v176; // ax
  int v177; // edx
  unsigned __int64 v178; // rax
  double v179; // xmm4_8
  double v180; // xmm5_8
  unsigned __int8 *v181; // rdi
  double v182; // xmm4_8
  double v183; // xmm5_8
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rax
  __int128 *v187; // rdi
  __int64 v188; // rax
  __int64 v189; // r13
  char *v190; // rsi
  __int64 v191; // rax
  __int64 *v192; // r10
  __int64 *v193; // r8
  unsigned __int8 *v194; // r13
  double v195; // xmm4_8
  double v196; // xmm5_8
  __int64 v197; // rcx
  _DWORD *v198; // rdi
  double v199; // xmm4_8
  double v200; // xmm5_8
  double v201; // xmm4_8
  double v202; // xmm5_8
  __int128 *v203; // rdi
  __int64 v204; // rcx
  __int64 v205; // rdx
  double v206; // xmm4_8
  double v207; // xmm5_8
  int v208; // eax
  double v209; // xmm4_8
  double v210; // xmm5_8
  int v211; // esi
  __int64 v212; // rax
  unsigned __int8 *v213; // rbp
  unsigned __int8 *v214; // rax
  double v215; // xmm4_8
  double v216; // xmm5_8
  int v217; // eax
  __m128i *v218; // rax
  double v219; // xmm4_8
  double v220; // xmm5_8
  double v221; // xmm4_8
  double v222; // xmm5_8
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // rcx
  char *v226; // rdi
  double v227; // xmm4_8
  double v228; // xmm5_8
  __int64 v229; // rax
  int v230; // eax
  unsigned __int8 *v231; // rax
  double v232; // xmm4_8
  double v233; // xmm5_8
  __int64 v234; // rsi
  _QWORD *v235; // rdi
  __int64 v236; // rax
  double v237; // xmm4_8
  double v238; // xmm5_8
  __int64 v239; // rsi
  _QWORD *v240; // rdi
  double v241; // xmm4_8
  double v242; // xmm5_8
  __int64 v243; // rbp
  unsigned __int16 v244; // ax
  unsigned __int8 *v245; // rax
  double v246; // xmm4_8
  double v247; // xmm5_8
  char v248; // al
  __int64 v249; // rbp
  unsigned __int8 v250; // al
  __int64 v251; // rbp
  unsigned __int16 v252; // ax
  unsigned __int8 *v253; // rax
  double v254; // xmm4_8
  double v255; // xmm5_8
  __int64 v256; // rbp
  unsigned __int8 v257; // al
  unsigned __int16 v258; // ax
  __int64 v259; // rbx
  int v260; // eax
  unsigned __int16 v261; // ax
  unsigned __int8 v262; // al
  double v263; // xmm4_8
  double v264; // xmm5_8
  __int64 v265; // rdx
  __int64 v266; // rcx
  unsigned __int8 *v267; // rsi
  __int64 v268; // rcx
  char *v269; // rdi
  double v270; // xmm4_8
  double v271; // xmm5_8
  __int64 v272; // rax
  pthread_mutex_t *v273; // r13
  double v274; // xmm4_8
  double v275; // xmm5_8
  __int64 (__fastcall ***v276)(_QWORD, const char *); // rdi
  double v277; // xmm4_8
  double v278; // xmm5_8
  unsigned __int16 v279; // ax
  unsigned __int8 v280; // al
  unsigned __int16 v281; // ax
  unsigned __int8 v282; // al
  unsigned __int16 v283; // ax
  unsigned __int8 v284; // al
  __int64 v285; // rcx
  int v286; // r8d
  int v287; // eax
  const char *v288; // rsi
  __int64 v289; // rax
  time_t v290; // rax
  __int64 v291; // rdx
  unsigned __int8 v292; // al
  double v293; // xmm4_8
  double v294; // xmm5_8
  __int64 v295; // rax
  __int64 v296; // rax
  __m128i *v297; // rax
  char *v298; // rax
  char *v299; // rax
  __int64 v300; // rax
  double v301; // xmm4_8
  double v302; // xmm5_8
  __int64 v303; // rcx
  __int128 *v304; // rdi
  __int64 v305; // rdx
  double v306; // xmm4_8
  double v307; // xmm5_8
  double v308; // xmm4_8
  double v309; // xmm5_8
  __int64 v310; // rax
  __int64 v311; // rdx
  __int64 v312; // rax
  __int64 i; // r13
  int v314; // eax
  int v315; // eax
  __int64 v316; // rax
  char *v317; // rax
  __int64 v318; // rax
  char v319; // [rsp-8h] [rbp-178h]
  int v320; // [rsp+4h] [rbp-16Ch]
  int v321; // [rsp+4h] [rbp-16Ch]
  __m128i v323; // [rsp+10h] [rbp-160h] BYREF
  __int128 *v324; // [rsp+20h] [rbp-150h]
  __int64 *v325; // [rsp+28h] [rbp-148h]
  __int64 *v326; // [rsp+30h] [rbp-140h]
  char v327; // [rsp+3Fh] [rbp-131h] BYREF
  __m128i *v328; // [rsp+40h] [rbp-130h] BYREF
  unsigned int v329[2]; // [rsp+48h] [rbp-128h] BYREF
  int v330; // [rsp+50h] [rbp-120h]
  int v331; // [rsp+54h] [rbp-11Ch]
  unsigned __int8 v332[8]; // [rsp+58h] [rbp-118h] BYREF
  _BYTE v333[24]; // [rsp+60h] [rbp-110h] BYREF
  unsigned __int8 v334[8]; // [rsp+78h] [rbp-F8h] BYREF
  __int128 v335; // [rsp+80h] [rbp-F0h]
  __int64 v336; // [rsp+90h] [rbp-E0h]
  unsigned __int8 v337[8]; // [rsp+98h] [rbp-D8h] BYREF
  char v338; // [rsp+A0h] [rbp-D0h] BYREF
  unsigned __int8 v339[8]; // [rsp+B8h] [rbp-B8h] BYREF
  __int128 v340; // [rsp+C0h] [rbp-B0h]
  __int64 v341; // [rsp+D0h] [rbp-A0h]
  unsigned __int8 v342[8]; // [rsp+D8h] [rbp-98h] BYREF
  char v343; // [rsp+E0h] [rbp-90h] BYREF
  unsigned __int8 v344[8]; // [rsp+F8h] [rbp-78h] BYREF
  __int128 v345; // [rsp+100h] [rbp-70h] BYREF
  __int64 v346; // [rsp+110h] [rbp-60h]
  char v347[24]; // [rsp+118h] [rbp-58h] BYREF
  unsigned __int64 v348; // [rsp+130h] [rbp-40h]

  v12 = 0;
  v14 = *(_QWORD *)(a1 + 56);
  v348 = __readfsqword(0x28u);
  v332[0] = 2;
  *(_QWORD *)&v333[16] = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)v333 = 0;
  if ( !a3
    || (v15 = a3,
        v16 = (pthread_mutex_t *)qword_4C8210,
        sub_482EC0((pthread_mutex_t *)qword_4C8210),
        v320 = sub_439F70(*(__int64 **)(a1 + 8), v15),
        sub_482F10(v16),
        LODWORD(a4) = v320,
        v320 != 0x7FFFFFFF) )
  {
    *(_DWORD *)(a1 + 120) = a4;
    v321 = 0;
    goto LABEL_4;
  }
  v321 = 0;
LABEL_15:
  sub_479EB0(0x58u);
  sub_479F30(0, v15);
  while ( 1 )
  {
    if ( (unsigned int)sub_479E90() != 90 )
      sub_444580((__int64)v332, *(double *)v12.m128_u64, a6, a7, a8, v25, v26, a11, a12);
    v27 = *(_QWORD *)(a1 + 32);
    v28 = *(char **)(a1 + 24);
    if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v27 + 1) )
    {
      v54 = (char *)sub_481540(a1 + 24, v28, v27 + 1, 0x20u);
      *(_QWORD *)(a1 + 24) = v54;
      v28 = v54;
      v27 = *(_QWORD *)(a1 + 32);
    }
    v12 = 0;
    v29 = &v28[32 * v27];
    *v29 = 2;
    *((_QWORD *)v29 + 3) = 0;
    *(_OWORD *)(v29 + 8) = 0;
    ++*(_QWORD *)(a1 + 32);
    sub_442230((__m128i *)v29, (__m128i *)v332, 0.0, a6, a7, a8, v25, v26, a11, a12);
LABEL_21:
    v328 = (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
    sub_444290(a1, (__int64)v328, *(double *)v12.m128_u64, a6, a7, a8, v30, v31, a11, a12);
LABEL_22:
    v32 = *(_QWORD **)(a1 + 128);
    if ( !v32 )
      break;
    while ( !(unsigned __int8)sub_438ED0(v32, *(_QWORD *)(a1 + 112) - 1LL, v329) )
    {
      if ( (unsigned __int64)(int)v14 >= *(_QWORD *)(a1 + 56) )
        goto LABEL_72;
      if ( !(unsigned __int8)sub_443560(
                               a1,
                               *(double *)v12.m128_u64,
                               a6,
                               a7,
                               a8,
                               *(double *)a9.m128_u64,
                               *(double *)a10.m128_u64,
                               a11,
                               a12) )
      {
        if ( !byte_4C94E1 )
          sub_481AC0(301);
LABEL_390:
        BUG();
      }
      v32 = *(_QWORD **)(a1 + 128);
      if ( !v32 )
        goto LABEL_72;
    }
    *(_QWORD *)(a1 + 112) = v329[1];
    switch ( v330 )
    {
      case 2:
        LODWORD(v33) = v331 + *(_DWORD *)(a1 + 96);
        if ( (int)v33 < 0 || (v34 = *(_QWORD *)(a1 + 32), v33 = (int)v33, (int)v33 >= v34) )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(287);
          goto LABEL_390;
        }
        break;
      case 3:
        v328 = (__m128i *)sub_43D640(*(_QWORD *)(a1 + 8), v331);
        v36 = v328;
        v35 = *(_QWORD *)(a1 + 24);
        v34 = *(_QWORD *)(a1 + 32);
        goto LABEL_83;
      case 1:
        LODWORD(v33) = v331 + *(_DWORD *)(a1 + 100);
        if ( (int)v33 < 0 || (v34 = *(_QWORD *)(a1 + 32), v33 = (int)v33, (int)v33 >= v34) )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(286);
          goto LABEL_390;
        }
        break;
      default:
        if ( !byte_4C94E1 )
          sub_481AC0(300);
        goto LABEL_390;
    }
    v35 = *(_QWORD *)(a1 + 24);
    v36 = (__m128i *)(v35 + 32 * v33);
    v328 = v36;
LABEL_83:
    v61 = (__m128i *)(v35 + 32 * v34 - 32);
    if ( !(unsigned int)sub_442230(
                          v36,
                          v61,
                          *(double *)v12.m128_u64,
                          a6,
                          a7,
                          a8,
                          *(double *)a9.m128_u64,
                          *(double *)a10.m128_u64,
                          a11,
                          a12) )
    {
      v73 = *(_QWORD *)(a1 + 32);
      v74 = *(_QWORD *)(a1 + 24);
      v12 = 0;
      v344[0] = 2;
      v345 = 0;
      v61 = (__m128i *)(v74 + 32 * v73 - 32);
      v346 = 0;
      sub_4418C0(
        v344,
        (unsigned __int8 *)v61,
        0.0,
        a6,
        a7,
        a8,
        *(double *)a9.m128_u64,
        *(double *)a10.m128_u64,
        a11,
        a12);
      v77 = *(_QWORD *)(a1 + 32);
      if ( v77 )
      {
        v289 = v77 - 1;
        *(_QWORD *)(a1 + 32) = v289;
        sub_441540(*(_QWORD *)(a1 + 24) + 32 * v289, 0.0, a6, a7, a8, v75, v76, a11, a12);
      }
      sub_441540((__int64)v344, 0.0, a6, a7, a8, v75, v76, a11, a12);
    }
LABEL_65:
    if ( !*(_BYTE *)(a1 + 144) )
    {
      *(double *)v12.m128_u64 = off_4C7FB0(
                                  27,
                                  (_DWORD)v61,
                                  (unsigned int)&off_4C7FB0,
                                  a4,
                                  v58,
                                  v59,
                                  *(double *)v12.m128_u64,
                                  *(double *)a6.m128_u64,
                                  *(double *)a7.m128_u64,
                                  *(double *)a8.m128_u64,
                                  *(double *)a9.m128_u64,
                                  *(double *)a10.m128_u64,
                                  *(double *)a11.m128_u64,
                                  *(double *)a12.m128_u64);
      if ( v64 )
      {
        sub_479EB0(0x5CFu);
        continue;
      }
    }
    v61 = *(__m128i **)(a1 + 112);
    v65 = sub_438BF0(*(_QWORD **)(a1 + 128), (__int64)v61);
    v66 = *(_QWORD *)(a1 + 8);
    ++*(_QWORD *)(a1 + 112);
    if ( !*(_BYTE *)(v66 + 124) && ++v321 > 100 )
    {
      if ( *(_QWORD *)(v66 + 112) != -1 )
      {
        v321 = 0;
        if ( !sub_482DD0() )
          goto LABEL_71;
        v290 = time(nullptr);
        v291 = *(_QWORD *)(a1 + 8);
        if ( v290 - *(_QWORD *)(v291 + 112) > 2 )
        {
          sub_43CDD0(
            (int)"Running IDC script",
            (__int64)v61,
            v291,
            a4,
            v58,
            v59,
            v12,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11,
            a12,
            v319);
          *(_BYTE *)(*(_QWORD *)(a1 + 8) + 124LL) = 1;
        }
      }
      v321 = 0;
    }
LABEL_71:
    switch ( v65 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
        v37 = v65;
        goto LABEL_38;
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
        LODWORD(a4) = v65 - 16;
        *(_DWORD *)(a1 + 120) = a4;
        goto LABEL_4;
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
        v97 = v65 - 32;
        goto LABEL_126;
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
        v111 = v65 - 48;
        goto LABEL_137;
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
        v107 = v65 - 64;
        goto LABEL_133;
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
        v121 = v65 - 80;
        goto LABEL_145;
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
        v88 = v65 - 96;
        goto LABEL_116;
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Bu:
      case 0x7Cu:
      case 0x7Du:
      case 0x7Eu:
      case 0x7Fu:
        v81 = v65 - 112;
        goto LABEL_107;
      case 0x80u:
        v37 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_38;
      case 0x81u:
        v37 = (unsigned __int16)sub_43CEC0(a1);
        goto LABEL_38;
      case 0x82u:
        LODWORD(a4) = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_248;
      case 0x83u:
        LODWORD(a4) = (unsigned __int16)sub_43CEC0(a1);
LABEL_248:
        *(_DWORD *)(a1 + 120) = a4;
        goto LABEL_5;
      case 0x84u:
        v97 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_126;
      case 0x85u:
        v97 = (unsigned __int16)sub_43CEC0(a1);
LABEL_126:
        *(_DWORD *)(a1 + 120) = v97;
        v98 = *(_DWORD *)(a1 + 100) + v97;
        if ( v98 < 0 || (v99 = *(_QWORD *)(a1 + 32), v98 >= v99) )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(286);
          goto LABEL_390;
        }
        if ( (unsigned int)sub_442230(
                             (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * v98),
                             (__m128i *)(*(_QWORD *)(a1 + 24) + 32 * v99 - 32),
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             *(double *)a9.m128_u64,
                             *(double *)a10.m128_u64,
                             a11,
                             a12) )
          continue;
        v102 = *(_QWORD *)(a1 + 32);
        v103 = *(_QWORD *)(a1 + 24);
        v12 = 0;
        v334[0] = 2;
        v335 = 0;
        v61 = (__m128i *)(v103 + 32 * v102 - 32);
        v336 = 0;
        sub_4418C0(v334, (unsigned __int8 *)v61, 0.0, a6, a7, a8, v100, v101, a11, a12);
        v106 = *(_QWORD *)(a1 + 32);
        if ( v106 )
        {
          v312 = v106 - 1;
          *(_QWORD *)(a1 + 32) = v312;
          sub_441540(*(_QWORD *)(a1 + 24) + 32 * v312, 0.0, a6, a7, a8, v104, v105, a11, a12);
        }
        sub_441540((__int64)v334, 0.0, a6, a7, a8, v104, v105, a11, a12);
        goto LABEL_65;
      case 0x86u:
        v111 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_137;
      case 0x87u:
        v111 = (unsigned __int16)sub_43CEC0(a1);
LABEL_137:
        *(_DWORD *)(a1 + 120) = v111;
        v112 = *(_DWORD *)(a1 + 96) + v111;
        if ( v112 < 0 || (v113 = *(_QWORD *)(a1 + 32), v112 >= v113) )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(287);
          goto LABEL_390;
        }
        if ( (unsigned int)sub_442230(
                             (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * v112),
                             (__m128i *)(*(_QWORD *)(a1 + 24) + 32 * v113 - 32),
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             *(double *)a9.m128_u64,
                             *(double *)a10.m128_u64,
                             a11,
                             a12) )
          continue;
        v116 = *(_QWORD *)(a1 + 32);
        v117 = *(_QWORD *)(a1 + 24);
        v12 = 0;
        v339[0] = 2;
        v340 = 0;
        v61 = (__m128i *)(v117 + 32 * v116 - 32);
        v341 = 0;
        sub_4418C0(v339, (unsigned __int8 *)v61, 0.0, a6, a7, a8, v114, v115, a11, a12);
        v120 = *(_QWORD *)(a1 + 32);
        if ( v120 )
        {
          v300 = v120 - 1;
          *(_QWORD *)(a1 + 32) = v300;
          sub_441540(*(_QWORD *)(a1 + 24) + 32 * v300, 0.0, a6, a7, a8, v118, v119, a11, a12);
        }
        sub_441540((__int64)v339, 0.0, a6, a7, a8, v118, v119, a11, a12);
        goto LABEL_65;
      case 0x88u:
        v107 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_133;
      case 0x89u:
        v107 = (unsigned __int16)sub_43CEC0(a1);
LABEL_133:
        v108 = *(_QWORD *)(a1 + 32);
        v109 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 120) = v107;
        v61 = (__m128i *)(v109 + 32 * v108 - 32);
        LODWORD(v110) = *(_DWORD *)(a1 + 100) + v107;
        if ( (int)v110 >= 0 )
        {
          v110 = (int)v110;
          if ( (int)v110 < v108 )
            goto LABEL_135;
        }
        if ( !byte_4C94E1 )
          sub_481AC0(286);
        goto LABEL_390;
      case 0x8Au:
        v121 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_145;
      case 0x8Bu:
        v121 = (unsigned __int16)sub_43CEC0(a1);
LABEL_145:
        v122 = *(_QWORD *)(a1 + 32);
        v109 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 120) = v121;
        v61 = (__m128i *)(v109 + 32 * v122 - 32);
        LODWORD(v110) = *(_DWORD *)(a1 + 96) + v121;
        if ( (int)v110 < 0 || (v110 = (int)v110, (int)v110 >= v122) )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(287);
          goto LABEL_390;
        }
LABEL_135:
        v80 = sub_4418C0(
                (unsigned __int8 *)(v109 + 32 * v110),
                (unsigned __int8 *)v61,
                *(double *)v12.m128_u64,
                a6,
                a7,
                a8,
                *(double *)a9.m128_u64,
                *(double *)a10.m128_u64,
                a11,
                a12);
LABEL_104:
        if ( v80 )
          continue;
        goto LABEL_65;
      case 0x8Cu:
        v88 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_116;
      case 0x8Du:
        v88 = (unsigned __int16)sub_43CEC0(a1);
LABEL_116:
        *(_DWORD *)(a1 + 120) = v88;
        LODWORD(v82) = *(_DWORD *)(a1 + 100) + v88;
        if ( (int)v82 >= 0 )
        {
          v82 = (int)v82;
          if ( (unsigned __int64)(int)v82 < *(_QWORD *)(a1 + 32) )
            goto LABEL_109;
        }
        if ( !byte_4C94E1 )
          sub_481AC0(286);
        goto LABEL_390;
      case 0x8Eu:
        v81 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_107;
      case 0x8Fu:
        v81 = (unsigned __int16)sub_43CEC0(a1);
LABEL_107:
        *(_DWORD *)(a1 + 120) = v81;
        LODWORD(v82) = *(_DWORD *)(a1 + 96) + v81;
        if ( (int)v82 < 0 || (v82 = (int)v82, (unsigned __int64)(int)v82 >= *(_QWORD *)(a1 + 32)) )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(287);
          goto LABEL_390;
        }
LABEL_109:
        sub_4418C0(
          v332,
          (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v82),
          *(double *)v12.m128_u64,
          a6,
          a7,
          a8,
          *(double *)a9.m128_u64,
          *(double *)a10.m128_u64,
          a11,
          a12);
LABEL_110:
        if ( v332[0] == 10 && !sub_4419D0(v332, 2, *(double *)v12.m128_u64, a6, a7, a8, v83, v84, a11, a12) )
          continue;
        v85 = *(_QWORD *)(a1 + 32);
        v86 = *(char **)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v85 + 1) )
        {
          v298 = (char *)sub_481540(a1 + 24, v86, v85 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v298;
          v86 = v298;
          v85 = *(_QWORD *)(a1 + 32);
        }
        v12 = 0;
        v87 = &v86[32 * v85];
        v61 = (__m128i *)v332;
        *v87 = 2;
        *((_QWORD *)v87 + 3) = 0;
        *(_OWORD *)(v87 + 8) = 0;
        ++*(_QWORD *)(a1 + 32);
        sub_442230((__m128i *)v87, (__m128i *)v332, 0.0, a6, a7, a8, v83, v84, a11, a12);
        goto LABEL_65;
      case 0x90u:
      case 0x91u:
      case 0x92u:
      case 0x93u:
      case 0x94u:
      case 0x95u:
      case 0x96u:
      case 0x97u:
      case 0x98u:
      case 0x99u:
      case 0x9Au:
      case 0x9Bu:
      case 0x9Cu:
      case 0x9Du:
      case 0x9Eu:
      case 0x9Fu:
      case 0xCFu:
        if ( !byte_4C94E1 )
          sub_481AC0(299);
        goto LABEL_390;
      case 0xA0u:
        v89 = (char)sub_43CEA0(a1);
        goto LABEL_122;
      case 0xA1u:
        v89 = (__int16)sub_43CEC0(a1);
        goto LABEL_122;
      case 0xA2u:
        v208 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_233;
      case 0xA3u:
        v208 = (unsigned __int16)sub_43CEC0(a1);
LABEL_233:
        *(_DWORD *)(a1 + 120) = v208;
        LODWORD(v61) = v208;
        sub_443190(a1, v208, *(double *)v12.m128_u64, a6, a7, a8, v209, v210, a11, a12);
        goto LABEL_65;
      case 0xA4u:
        v181 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v328 = (__m128i *)v181;
        if ( *v181 == 10
          && !sub_4419D0(
                v181,
                2,
                *(double *)v12.m128_u64,
                a6,
                a7,
                a8,
                *(double *)a9.m128_u64,
                *(double *)a10.m128_u64,
                a11,
                a12) )
        {
          continue;
        }
        v175 = v328;
        if ( v328->m128i_i8[0] != 2 && v328->m128i_i8[0] != 9 )
          goto LABEL_208;
        if ( v328->m128i_i64[1] == -1 || SLODWORD(qword_4C5728[1]) <= 0 )
          goto LABEL_209;
        v325 = qword_4C56E0;
        sub_443380(
          a1,
          (__m128i *)v332,
          *(double *)v12.m128_u64,
          a6,
          a7,
          a8,
          *(double *)a9.m128_u64,
          *(double *)a10.m128_u64,
          a11,
          a12);
        v184 = *(_QWORD *)(a1 + 80);
        v185 = 6;
        v323.m128i_i64[0] = a1 + 24;
        v186 = *(_QWORD *)(a1 + 72);
        v187 = &v345;
        v324 = &v345;
        v188 = *(int *)(v186 + 4 * v184 - 4);
        v344[0] = 2;
        v323.m128i_i64[1] = 32 * v188;
        v189 = *(_QWORD *)(a1 + 24) + 32 * v188;
        while ( v185 )
        {
          *(_DWORD *)v187 = 0;
          v187 = (__int128 *)((char *)v187 + 4);
          --v185;
        }
        sub_4418C0(v344, v332, *(double *)v12.m128_u64, a6, a7, a8, v182, v183, a11, a12);
        v190 = *(char **)(a1 + 24);
        v191 = *(_QWORD *)(a1 + 32);
        v192 = v325;
        v193 = (__int64 *)(v189 - (_QWORD)v190);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v191 + 1) )
        {
          v326 = v325;
          v325 = (__int64 *)(v189 - (_QWORD)v190);
          v317 = (char *)sub_481540(v323.m128i_i64[0], v190, v191 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v317;
          v190 = v317;
          v192 = v326;
          v191 = *(_QWORD *)(a1 + 32);
          v193 = v325;
        }
        v194 = (unsigned __int8 *)v193 + (_QWORD)v190;
        v325 = v192;
        memmove((char *)v193 + (_QWORD)v190 + 32, (char *)v193 + (_QWORD)v190, 32 * v191 - (_QWORD)v193);
        v197 = 6;
        v198 = v194 + 8;
        *v194 = 2;
        while ( v197 )
        {
          *v198++ = 0;
          --v197;
        }
        sub_4418C0(v194, v344, *(double *)v12.m128_u64, a6, a7, a8, v195, v196, a11, a12);
        ++*(_QWORD *)(a1 + 32);
        sub_441540((__int64)v344, *(double *)v12.m128_u64, a6, a7, a8, v199, v200, a11, a12);
        v203 = v324;
        v204 = 6;
        v344[0] = 2;
        v205 = v323.m128i_i64[1];
        while ( v204 )
        {
          *(_DWORD *)v203 = 0;
          v203 = (__int128 *)((char *)v203 + 4);
          --v204;
        }
        sub_442120(
          v323.m128i_i64[0],
          (char *)(*(_QWORD *)(a1 + 24) + v205 + 32),
          v344,
          *(double *)v12.m128_u64,
          a6,
          a7,
          a8,
          v201,
          v202,
          a11,
          a12);
        v323.m128i_i64[0] = (__int64)v325;
        sub_441540((__int64)v344, *(double *)v12.m128_u64, a6, a7, a8, v206, v207, a11, a12);
        LODWORD(a4) = -*(_DWORD *)(v323.m128i_i64[0] + 80);
        *(_DWORD *)(a1 + 120) = a4;
        goto LABEL_4;
      case 0xA5u:
        v176 = sub_43CEC0(a1);
        v177 = v176;
        v178 = *(_QWORD *)(a1 + 32) + v176;
        v332[0] = 2;
        *(_DWORD *)(a1 + 120) = v177;
        LODWORD(v61) = v178;
        *(_QWORD *)v333 = 0;
        sub_442DA0(a1 + 24, v178, v332, *(double *)v12.m128_u64, a6, a7, a8, v179, v180, a11, a12);
        goto LABEL_65;
      case 0xA6u:
        goto LABEL_65;
      case 0xA7u:
        LODWORD(v89) = sub_43CEE0(a1);
        goto LABEL_121;
      case 0xA8u:
        v131 = (int)sub_43CEE0(a1);
        v323.m128i_i64[0] = v131 + 1;
        v132 = sub_4813B0(v131 + 1);
        v133 = v132;
        if ( !v132 )
          continue;
        sub_438BC0(*(_QWORD **)(a1 + 128), *(_QWORD *)(a1 + 112), v132, v131);
        *(_QWORD *)(a1 + 112) += v131;
        v134 = _mm_loadl_epi64(&v323);
        v61 = (__m128i *)v332;
        v133[v131] = 0;
        v12 = (__m128)_mm_unpacklo_epi64(v134, v134);
        v332[0] = 7;
        *(_QWORD *)v333 = v133;
        *(__m128 *)&v333[8] = v12;
        sub_442320((char **)(a1 + 24), (__m128i *)v332, *(double *)v12.m128_u64, a6, a7, a8, v135, v136, a11, a12);
        goto LABEL_65;
      case 0xA9u:
        goto LABEL_168;
      case 0xAAu:
      case 0xD4u:
        v124 = *(_QWORD *)(a1 + 32);
        v125 = v124;
        if ( v65 == 0xD4 )
          v125 = v124 - 1;
        v126 = *(_QWORD *)(a1 + 80);
        if ( *(_QWORD *)(a1 + 88) < (unsigned __int64)(v126 + 1) )
        {
          v61 = *(__m128i **)(a1 + 72);
          *(_QWORD *)(a1 + 72) = sub_481540(a1 + 72, v61, v126 + 1, 4u);
          v126 = *(_QWORD *)(a1 + 80);
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v126) = v125;
        ++*(_QWORD *)(a1 + 80);
        goto LABEL_65;
      case 0xABu:
        LODWORD(v61) = sub_43CEE0(a1);
        sub_439600(a1, (int)v61);
        goto LABEL_65;
      case 0xACu:
      case 0xADu:
        v127 = sub_43CEE0(a1);
        v328 = (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        if ( !(unsigned __int8)sub_442A80((__int64)v328, *(double *)v12.m128_u64, a6, a7, a8, v128, v129, a11, a12) )
          continue;
        v130 = v328;
        if ( v65 == 0xAD )
          v328->m128i_i64[1] = v328->m128i_i64[1] == 0;
        if ( v130->m128i_i64[1] )
        {
          LODWORD(v61) = v127;
          sub_439600(a1, v127);
        }
        goto LABEL_168;
      case 0xAEu:
        v328 = (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        if ( (unsigned int)sub_441D50(
                             (__int64)v328,
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             *(double *)a9.m128_u64,
                             *(double *)a10.m128_u64,
                             a11,
                             a12) )
          continue;
        v15 = s1;
        if ( v328[1].m128i_i64[0] )
          v15 = (const char *)v328->m128i_i64[1];
        v273 = (pthread_mutex_t *)qword_4C8210;
        sub_482EC0((pthread_mutex_t *)qword_4C8210);
        LODWORD(v61) = (_DWORD)v15;
        *(_DWORD *)(a1 + 120) = sub_439F70(*(__int64 **)(a1 + 8), v15);
        sub_482F10(v273);
        if ( *(_DWORD *)(a1 + 120) == 0x7FFFFFFF )
        {
          v276 = *(__int64 (__fastcall ****)(_QWORD, const char *))(a1 + 136);
          if ( !v276 )
            goto LABEL_15;
          *(_QWORD *)v333 = (**v276)(v276, v15);
          if ( *(_QWORD *)v333 == -1 )
            goto LABEL_15;
          v61 = (__m128i *)v332;
          sub_4418C0((unsigned __int8 *)v328, v332, *(double *)v12.m128_u64, a6, a7, a8, v277, v278, a11, a12);
        }
        else
        {
          sub_441540((__int64)v328, *(double *)v12.m128_u64, a6, a7, a8, v274, v275, a11, a12);
          v328->m128i_i8[0] = 6;
          v328->m128i_i32[2] = *(_DWORD *)(a1 + 120);
        }
        goto LABEL_65;
      case 0xAFu:
        if ( !(unsigned __int8)sub_443560(
                                 a1,
                                 *(double *)v12.m128_u64,
                                 a6,
                                 a7,
                                 a8,
                                 *(double *)a9.m128_u64,
                                 *(double *)a10.m128_u64,
                                 a11,
                                 a12) )
          continue;
        if ( (unsigned __int64)(int)v14 < *(_QWORD *)(a1 + 56) )
          goto LABEL_65;
        if ( !a2 )
        {
          sub_441FA0(a1, *(double *)v12.m128_u64, a6, a7, a8, *(double *)a9.m128_u64, *(double *)a10.m128_u64, a11, a12);
          goto LABEL_299;
        }
        if ( (unsigned int)sub_442230(
                             a2,
                             (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32),
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             *(double *)a9.m128_u64,
                             *(double *)a10.m128_u64,
                             a11,
                             a12) )
          continue;
        v265 = *(_QWORD *)(a1 + 32);
        v266 = *(_QWORD *)(a1 + 24);
        v342[0] = 2;
        v267 = (unsigned __int8 *)(v266 + 32 * v265 - 32);
        v268 = 6;
        v269 = &v343;
        while ( v268 )
        {
          *(_DWORD *)v269 = 0;
          v269 += 4;
          --v268;
        }
        sub_4418C0(v342, v267, *(double *)v12.m128_u64, a6, a7, a8, v263, v264, a11, a12);
        v272 = *(_QWORD *)(a1 + 32);
        if ( v272 )
        {
          v318 = v272 - 1;
          *(_QWORD *)(a1 + 32) = v318;
          sub_441540(*(_QWORD *)(a1 + 24) + 32 * v318, *(double *)v12.m128_u64, a6, a7, a8, v270, v271, a11, a12);
        }
        sub_441540((__int64)v342, *(double *)v12.m128_u64, a6, a7, a8, v270, v271, a11, a12);
        goto LABEL_299;
      case 0xB0u:
      case 0xB1u:
      case 0xB2u:
      case 0xB3u:
      case 0xB4u:
      case 0xB5u:
      case 0xB6u:
      case 0xB7u:
      case 0xB8u:
      case 0xB9u:
      case 0xBAu:
      case 0xBBu:
      case 0xBCu:
      case 0xBDu:
      case 0xBEu:
      case 0xBFu:
      case 0xC8u:
      case 0xC9u:
      case 0xCAu:
      case 0xCBu:
      case 0xCCu:
      case 0xCDu:
      case 0xCEu:
      case 0xD0u:
      case 0xD1u:
        LODWORD(v61) = v65;
        v80 = sub_4473D0(
                (__int64 *)(a1 + 24),
                v65,
                *(double *)v12.m128_u64,
                a6,
                a7,
                a8,
                *(double *)a9.m128_u64,
                *(double *)a10.m128_u64,
                a11,
                a12);
        goto LABEL_104;
      case 0xC0u:
        v284 = sub_43CEA0(a1);
        v253 = (unsigned __int8 *)sub_43D5C0(a1, v284);
        goto LABEL_280;
      case 0xC1u:
        v283 = sub_43CEC0(a1);
        v253 = (unsigned __int8 *)sub_43D5C0(a1, v283);
        goto LABEL_280;
      case 0xC2u:
        v280 = sub_43CEA0(a1);
        v253 = (unsigned __int8 *)sub_43D600(a1, v280);
        goto LABEL_280;
      case 0xC3u:
        v279 = sub_43CEC0(a1);
        v253 = (unsigned __int8 *)sub_43D600(a1, v279);
        goto LABEL_280;
      case 0xC4u:
        v282 = sub_43CEA0(a1);
        v245 = (unsigned __int8 *)sub_43D5C0(a1, v282);
        goto LABEL_275;
      case 0xC5u:
        v281 = sub_43CEC0(a1);
        v245 = (unsigned __int8 *)sub_43D5C0(a1, v281);
        goto LABEL_275;
      case 0xC6u:
        v262 = sub_43CEA0(a1);
        v245 = (unsigned __int8 *)sub_43D600(a1, v262);
        goto LABEL_275;
      case 0xC7u:
        v261 = sub_43CEC0(a1);
        v245 = (unsigned __int8 *)sub_43D600(a1, v261);
        goto LABEL_275;
      case 0xD2u:
        v239 = *(_QWORD *)(a1 + 112);
        v240 = *(_QWORD **)(a1 + 128);
        v332[0] = 3;
        sub_438BC0(v240, v239, v333, 16);
        *(_QWORD *)(a1 + 112) += 16LL;
        v61 = (__m128i *)v332;
        sub_442040((char **)(a1 + 24), v332, *(double *)v12.m128_u64, a6, a7, a8, v241, v242, a11, a12);
        goto LABEL_65;
      case 0xD3u:
        v234 = *(_QWORD *)(a1 + 112);
        v235 = *(_QWORD **)(a1 + 128);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) == 4 )
        {
          v236 = sub_438C50(v235, v234);
          *(_QWORD *)(a1 + 112) += 8LL;
          v332[0] = 9;
        }
        else
        {
          v236 = sub_438C50(v235, v234);
          *(_QWORD *)(a1 + 112) += 8LL;
          v332[0] = 2;
        }
        *(_QWORD *)v333 = v236;
        v61 = (__m128i *)v332;
        sub_442040((char **)(a1 + 24), v332, *(double *)v12.m128_u64, a6, a7, a8, v237, v238, a11, a12);
        goto LABEL_65;
      case 0xD5u:
        v230 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_268;
      case 0xD6u:
        v230 = (unsigned __int16)sub_43CEC0(a1);
LABEL_268:
        *(_DWORD *)(a1 + 120) = v230;
        v231 = (unsigned __int8 *)sub_43D640(*(_QWORD *)(a1 + 8), v230);
        sub_4418C0(v332, v231, *(double *)v12.m128_u64, a6, a7, a8, v232, v233, a11, a12);
        goto LABEL_110;
      case 0xD7u:
        v217 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_259;
      case 0xD8u:
        v217 = (unsigned __int16)sub_43CEC0(a1);
LABEL_259:
        *(_DWORD *)(a1 + 120) = v217;
        v218 = (__m128i *)sub_43D640(*(_QWORD *)(a1 + 8), v217);
        if ( (unsigned int)sub_442230(
                             v218,
                             (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32),
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             v219,
                             v220,
                             a11,
                             a12) )
          continue;
        v223 = *(_QWORD *)(a1 + 32);
        v224 = *(_QWORD *)(a1 + 24);
        v337[0] = 2;
        v61 = (__m128i *)(v224 + 32 * v223 - 32);
        v225 = 6;
        v226 = &v338;
        while ( v225 )
        {
          *(_DWORD *)v226 = 0;
          v226 += 4;
          --v225;
        }
        sub_4418C0(v337, (unsigned __int8 *)v61, *(double *)v12.m128_u64, a6, a7, a8, v221, v222, a11, a12);
        v229 = *(_QWORD *)(a1 + 32);
        if ( v229 )
        {
          v316 = v229 - 1;
          *(_QWORD *)(a1 + 32) = v316;
          sub_441540(*(_QWORD *)(a1 + 24) + 32 * v316, *(double *)v12.m128_u64, a6, a7, a8, v227, v228, a11, a12);
        }
        sub_441540((__int64)v337, *(double *)v12.m128_u64, a6, a7, a8, v227, v228, a11, a12);
        goto LABEL_65;
      case 0xD9u:
        v211 = (unsigned __int8)sub_43CEA0(a1);
        goto LABEL_256;
      case 0xDAu:
        v211 = (unsigned __int16)sub_43CEC0(a1);
LABEL_256:
        v212 = *(_QWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 120) = v211;
        v213 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v212 - 32);
        v214 = (unsigned __int8 *)sub_43D640(*(_QWORD *)(a1 + 8), v211);
        LODWORD(v61) = (_DWORD)v213;
        v80 = sub_4418C0(v214, v213, *(double *)v12.m128_u64, a6, a7, a8, v215, v216, a11, a12);
        goto LABEL_104;
      case 0xDBu:
        v256 = *(_QWORD *)(a1 + 8);
        v257 = sub_43CEA0(a1);
        v253 = (unsigned __int8 *)sub_43D640(v256, v257);
        goto LABEL_280;
      case 0xDCu:
        v251 = *(_QWORD *)(a1 + 8);
        v252 = sub_43CEC0(a1);
        v253 = (unsigned __int8 *)sub_43D640(v251, v252);
LABEL_280:
        LODWORD(v61) = 1;
        v328 = (__m128i *)v253;
        v248 = sub_441D70(v253, 1, *(double *)v12.m128_u64, a6, a7, a8, v254, v255, a11, a12);
        goto LABEL_276;
      case 0xDDu:
        v249 = *(_QWORD *)(a1 + 8);
        v250 = sub_43CEA0(a1);
        v245 = (unsigned __int8 *)sub_43D640(v249, v250);
        goto LABEL_275;
      case 0xDEu:
        v243 = *(_QWORD *)(a1 + 8);
        v244 = sub_43CEC0(a1);
        v245 = (unsigned __int8 *)sub_43D640(v243, v244);
LABEL_275:
        LODWORD(v61) = -1;
        v328 = (__m128i *)v245;
        v248 = sub_441D70(v245, -1, *(double *)v12.m128_u64, a6, a7, a8, v246, v247, a11, a12);
LABEL_276:
        if ( v248 )
          goto LABEL_65;
        continue;
      case 0xDFu:
        sub_479EB0(0x5Au);
        goto LABEL_21;
      case 0xE0u:
      case 0xE1u:
      case 0xE2u:
      case 0xE3u:
      case 0xE4u:
      case 0xE5u:
      case 0xE6u:
      case 0xE7u:
      case 0xE8u:
      case 0xE9u:
      case 0xEAu:
      case 0xEBu:
      case 0xECu:
      case 0xEDu:
      case 0xEEu:
      case 0xEFu:
        LODWORD(v89) = v65 - 224;
LABEL_121:
        v89 = (int)v89;
LABEL_122:
        *(_QWORD *)v333 = v89;
        v332[0] = 2;
        v344[0] = 2;
        v346 = 0;
        v345 = 0;
        sub_4418C0(v344, v332, 0.0, a6, a7, a8, *(double *)a9.m128_u64, *(double *)a10.m128_u64, a11, a12);
        v92 = *(_QWORD *)(a1 + 32);
        v93 = *(char **)(a1 + 24);
        if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v92 + 1) )
        {
          v299 = (char *)sub_481540(a1 + 24, v93, v92 + 1, 0x20u);
          *(_QWORD *)(a1 + 24) = v299;
          v93 = v299;
          v92 = *(_QWORD *)(a1 + 32);
        }
        v12 = 0;
        v94 = &v93[32 * v92];
        v61 = (__m128i *)v344;
        *v94 = 2;
        *((_QWORD *)v94 + 3) = 0;
        *(_OWORD *)(v94 + 8) = 0;
        sub_4418C0((unsigned __int8 *)v94, v344, 0.0, a6, a7, a8, v90, v91, a11, a12);
        ++*(_QWORD *)(a1 + 32);
        sub_441540((__int64)v344, 0.0, a6, a7, a8, v95, v96, a11, a12);
        goto LABEL_65;
      case 0xF0u:
        v258 = sub_43CEC0(a1);
        v332[0] = 5;
        *(_DWORD *)(a1 + 120) = v258;
        v259 = operator new(0x38u);
        sub_438700(v259, *(_DWORD *)(a1 + 120));
        *(_QWORD *)v333 = v259;
        v260 = *(_DWORD *)(a1 + 120);
        if ( v260 != *(_DWORD *)(v259 + 52) )
        {
          sub_479EE0(0, v260);
          sub_479EB0(0x5FFu);
          continue;
        }
        for ( i = sub_439CD0(v260); ; i = sub_439C70(*(_QWORD *)(a1 + 8), v314) )
        {
          v315 = sub_43D490(i, i + 56);
          *(_DWORD *)(a1 + 120) = v315;
          if ( v315 != -1 )
            break;
          v314 = *(_DWORD *)(i + 48);
          if ( !v314 )
            break;
        }
        goto LABEL_343;
      case 0xF1u:
        v61 = (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        v328 = v61;
        v80 = sub_446080(
                (__int64)v61,
                (__int64)v61,
                *(double *)v12.m128_u64,
                a6,
                a7,
                a8,
                *(double *)a9.m128_u64,
                *(double *)a10.m128_u64,
                a11,
                a12);
        goto LABEL_104;
      case 0xF2u:
        v328 = (__m128i *)v332;
        if ( (unsigned __int8)sub_4455A0(
                                (_QWORD *)a1,
                                &v328,
                                *(double *)v12.m128_u64,
                                a6,
                                a7,
                                a8,
                                *(double *)a9.m128_u64,
                                *(double *)a10.m128_u64,
                                a11,
                                a12) )
          goto LABEL_157;
        goto LABEL_22;
      case 0xF3u:
        if ( (unsigned __int8)sub_444790(
                                (_QWORD *)a1,
                                *(double *)v12.m128_u64,
                                a6,
                                a7,
                                a8,
                                *(double *)a9.m128_u64,
                                *(double *)a10.m128_u64,
                                a11,
                                a12) )
          goto LABEL_65;
        goto LABEL_22;
      case 0xF4u:
        if ( (unsigned __int8)sub_444790(
                                (_QWORD *)a1,
                                *(double *)v12.m128_u64,
                                a6,
                                a7,
                                a8,
                                *(double *)a9.m128_u64,
                                *(double *)a10.m128_u64,
                                a11,
                                a12) )
          goto LABEL_168;
        goto LABEL_22;
      case 0xF5u:
      case 0xF6u:
        v328 = (__m128i *)v332;
        if ( !(unsigned __int8)sub_4455A0(
                                 (_QWORD *)a1,
                                 &v328,
                                 *(double *)v12.m128_u64,
                                 a6,
                                 a7,
                                 a8,
                                 *(double *)a9.m128_u64,
                                 *(double *)a10.m128_u64,
                                 a11,
                                 a12) )
          goto LABEL_22;
        if ( !v328 )
        {
          sub_479EB0(0x5FEu);
          continue;
        }
        v123 = -1;
        if ( v65 == 0xF5 )
          v123 = 1;
        if ( !(unsigned __int8)sub_441D70(
                                 (unsigned __int8 *)v328,
                                 v123,
                                 *(double *)v12.m128_u64,
                                 a6,
                                 a7,
                                 a8,
                                 *(double *)a9.m128_u64,
                                 *(double *)a10.m128_u64,
                                 a11,
                                 a12) )
          continue;
LABEL_157:
        v61 = (__m128i *)v332;
        v80 = sub_442230(
                (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32),
                (__m128i *)v332,
                *(double *)v12.m128_u64,
                a6,
                a7,
                a8,
                *(double *)a9.m128_u64,
                *(double *)a10.m128_u64,
                a11,
                a12);
        goto LABEL_104;
      case 0xF7u:
        v328 = (__m128i *)v332;
        if ( !(unsigned __int8)sub_4458E0(
                                 (_QWORD *)a1,
                                 (_DWORD *)(a1 + 120),
                                 (unsigned __int8 **)&v328,
                                 *(double *)v12.m128_u64,
                                 a6,
                                 a7,
                                 a8,
                                 *(double *)a9.m128_u64,
                                 *(double *)a10.m128_u64,
                                 a11,
                                 a12) )
          continue;
        if ( *(_DWORD *)(a1 + 120) == -1 )
        {
          v175 = v328;
LABEL_208:
          if ( v175->m128i_i8[0] != 6 )
          {
LABEL_209:
            sub_479EB0(0x605u);
            continue;
          }
          *(_DWORD *)(a1 + 120) = v175->m128i_i32[2];
          sub_441FA0(a1, *(double *)v12.m128_u64, a6, a7, a8, *(double *)a9.m128_u64, *(double *)a10.m128_u64, a11, a12);
          LODWORD(a4) = *(_DWORD *)(a1 + 120);
        }
        else
        {
          sub_443380(
            a1,
            (__m128i *)v332,
            *(double *)v12.m128_u64,
            a6,
            a7,
            a8,
            *(double *)a9.m128_u64,
            *(double *)a10.m128_u64,
            a11,
            a12);
LABEL_343:
          v303 = 6;
          v344[0] = 2;
          v304 = &v345;
          v305 = *(_QWORD *)(a1 + 80);
          while ( v303 )
          {
            *(_DWORD *)v304 = 0;
            v304 = (__int128 *)((char *)v304 + 4);
            --v303;
          }
          v328 = (__m128i *)sub_442120(
                              a1 + 24,
                              (char *)(*(_QWORD *)(a1 + 24) + 32LL * *(int *)(*(_QWORD *)(a1 + 72) + 4 * v305 - 4)),
                              v344,
                              *(double *)v12.m128_u64,
                              a6,
                              a7,
                              a8,
                              v301,
                              v302,
                              a11,
                              a12);
          sub_441540((__int64)v344, *(double *)v12.m128_u64, a6, a7, a8, v306, v307, a11, a12);
          v61 = (__m128i *)v332;
          if ( (unsigned int)sub_442230(
                               v328,
                               (__m128i *)v332,
                               *(double *)v12.m128_u64,
                               a6,
                               a7,
                               a8,
                               v308,
                               v309,
                               a11,
                               a12) )
            continue;
          LODWORD(a4) = *(_DWORD *)(a1 + 120);
          if ( (_DWORD)a4 == -1 )
          {
            v310 = *(_QWORD *)(a1 + 80);
            v311 = *(int *)(*(_QWORD *)(a1 + 72) + 4 * v310 - 4);
            if ( v310 )
              *(_QWORD *)(a1 + 80) = v310 - 1;
            if ( v311 == *(_QWORD *)(a1 + 32) - 1LL )
              goto LABEL_65;
LABEL_76:
            sub_479EB0(0x38u);
            continue;
          }
        }
LABEL_4:
        if ( (int)a4 >= 0 )
        {
LABEL_5:
          v17 = *(_QWORD **)(a1 + 8);
          if ( (unsigned __int64)(int)a4 >= v17[1] || (v18 = *(_QWORD *)(*v17 + 8LL * (int)a4)) == 0 )
          {
            sub_479EB0(0x58u);
LABEL_35:
            sub_485490(v347, 20, "#%d", *(_DWORD *)(a1 + 120));
            v24 = v347;
            goto LABEL_36;
          }
          if ( !*(_QWORD *)(v18 + 40) )
          {
            sub_479EB0(0x58u);
            if ( *(_QWORD *)(v18 + 8) > 1u )
              goto LABEL_57;
            goto LABEL_35;
          }
          v19 = *(_QWORD *)(a1 + 80);
          v20 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v19 - 4);
          if ( v19 )
            *(_QWORD *)(a1 + 80) = v19 - 1;
          v21 = *(_DWORD *)(v18 + 24);
          v22 = *(_DWORD *)(a1 + 32) - v20;
          if ( v21 > v22 )
          {
            v23 = *(_QWORD *)(v18 + 72);
            if ( !v23 )
              goto LABEL_12;
            v55 = sub_443240(
                    (_QWORD *)a1,
                    v22,
                    v21,
                    *(_QWORD *)(v18 + 64),
                    v23,
                    *(double *)v12.m128_u64,
                    a6,
                    a7,
                    a8,
                    *(double *)a9.m128_u64,
                    *(double *)a10.m128_u64,
                    a11,
                    a12);
            v21 = *(_DWORD *)(v18 + 24);
            v22 = v55;
          }
          if ( v22 != v21 )
          {
LABEL_12:
            sub_479EB0(0x38u);
            v24 = s1;
            if ( *(_QWORD *)(v18 + 8) )
LABEL_57:
              v24 = *(const char **)v18;
LABEL_36:
            sub_479F30(0, v24);
            continue;
          }
          v323.m128i_i64[0] = (__int64)qword_4C8210;
          sub_482EC0((pthread_mutex_t *)qword_4C8210);
          v56 = *(_DWORD *)(v18 + 136);
          if ( v56 == -1 )
          {
            v288 = s1;
            if ( *(_QWORD *)(v18 + 8) )
              v288 = *(const char **)v18;
            sub_479F30(0, v288);
            sub_479EB0(0x28u);
            sub_482F10((pthread_mutex_t *)v323.m128i_i64[0]);
            continue;
          }
          v57 = (pthread_mutex_t *)v323.m128i_i64[0];
          *(_DWORD *)(v18 + 136) = v56 + 1;
          sub_482F10(v57);
          v60 = *(_QWORD *)(a1 + 56);
          v61 = *(__m128i **)(a1 + 48);
          v62 = v60 + 1;
          if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)(v60 + 1) )
          {
            v297 = (__m128i *)sub_481540(a1 + 48, v61, v62, 0x18u);
            *(_QWORD *)(a1 + 48) = v297;
            v61 = v297;
            v60 = *(_QWORD *)(a1 + 56);
            v62 = v60 + 1;
          }
          *(_QWORD *)(a1 + 56) = v62;
          v63 = &v61->m128i_i8[24 * v60];
          *((_DWORD *)v63 + 2) = *(_QWORD *)(a1 + 112);
          *(_QWORD *)v63 = *(_QWORD *)(a1 + 104);
          *((_DWORD *)v63 + 3) = *(_DWORD *)(a1 + 96);
          *((_DWORD *)v63 + 4) = *(_DWORD *)(a1 + 100);
          a6 = (__m128)_mm_cvtsi32_si128(*(_DWORD *)(a1 + 32));
          *(_QWORD *)(a1 + 128) = v18 + 32;
          *(_QWORD *)(a1 + 104) = v18;
          v12 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v20), (__m128i)a6);
          *(_QWORD *)(a1 + 112) = 0;
          *(_QWORD *)(a1 + 96) = v12.m128_u64[0];
          goto LABEL_65;
        }
        v37 = -(int)a4;
LABEL_38:
        *(_DWORD *)(a1 + 120) = v37;
        v321 += 200;
        if ( (unsigned __int64)v37 >= qword_4C56E0[0]
          || (v38 = qword_4C56E0[1],
              v332[0] = 2,
              *(_QWORD *)v333 = 0,
              v39 = v38 + 40LL * v37,
              v323.m128i_i64[0] = (__int64)qword_4C56E0,
              !v39) )
        {
          sub_479EB0(0x57u);
          continue;
        }
        v40 = sub_43A000(*(const char **)(v39 + 16), &v327);
        v43 = *(_QWORD *)(a1 + 80);
        v44 = v323.m128i_i64[0];
        v45 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4 * v43 - 4);
        if ( v43 )
          *(_QWORD *)(a1 + 80) = v43 - 1;
        v46 = *(_DWORD *)(a1 + 32) - v45;
        if ( v40 > v46 )
        {
          v285 = *(_QWORD *)(v39 + 24);
          v286 = *(_DWORD *)(v39 + 32);
          v324 = (__int128 *)v44;
          v323.m128i_i32[2] = v45;
          v323.m128i_i32[0] = v40;
          v287 = sub_443240((_QWORD *)a1, v46, v40, v285, v286, *(double *)v12.m128_u64, a6, a7, a8, v41, v42, a11, a12);
          v44 = (__int64)v324;
          v45 = v323.m128i_i32[2];
          v46 = v287;
          v40 = v323.m128i_i32[0];
        }
        if ( v327 )
        {
          *(_QWORD *)v333 = v46;
        }
        else if ( v46 != v40 )
        {
          sub_479F30(0, *(const char **)v39);
          goto LABEL_76;
        }
        v47 = *(_DWORD *)(v39 + 36);
        if ( (v47 & 1) != 0 )
        {
          v48 = *(unsigned __int8 (__fastcall **)(double, double, double, double, double, double, double, double))(v44 + 48);
          if ( v48 )
          {
            v323.m128i_i32[0] = v45;
            if ( !v48(
                    *(double *)v12.m128_u64,
                    *(double *)a6.m128_u64,
                    *(double *)a7.m128_u64,
                    *(double *)a8.m128_u64,
                    v41,
                    v42,
                    *(double *)a11.m128_u64,
                    *(double *)a12.m128_u64) )
            {
              sub_479EB0(0x5D1u);
              continue;
            }
            v47 = *(_DWORD *)(v39 + 36);
            v45 = v323.m128i_i32[0];
          }
        }
        if ( (v47 & 4) == 0 )
        {
          v323.m128i_i32[0] = v45;
          v49 = sub_482DD0();
          v45 = v323.m128i_i32[0];
          if ( !v49 )
          {
            sub_479F30(0, *(const char **)v39);
            sub_479EB0(0x8Fu);
            continue;
          }
        }
        v50 = *(__int128 **)(v39 + 16);
        v323.m128i_i64[0] = *(_QWORD *)(a1 + 24) + 32LL * v45;
        v51 = *(_BYTE *)v50;
        if ( v46 <= 0 )
          goto LABEL_91;
        v52 = v323.m128i_i64[0];
        v53 = v323.m128i_i64[0] + 32LL * v46;
        while ( *(_BYTE *)v52 == v51 )
        {
LABEL_89:
          v51 = *((_BYTE *)v50 + 1);
          v50 = (__int128 *)((char *)v50 + 1);
LABEL_90:
          v52 += 32;
          if ( v53 == v52 )
            goto LABEL_91;
        }
        switch ( v51 )
        {
          case 2:
            v325 = (__int64 *)v53;
            v324 = v50;
            v323.m128i_i64[1] = v52;
            v78 = sub_442390(v52, *(double *)v12.m128_u64, a6, a7, a8, v41, v42, a11, a12);
            goto LABEL_88;
          case 3:
            v325 = (__int64 *)v53;
            v324 = v50;
            v323.m128i_i64[1] = v52;
            v78 = sub_442640(v52, *(double *)v12.m128_u64, a6, a7, a8, v41, v42, a11, a12);
            goto LABEL_88;
          case 4:
            v79 = *((_BYTE *)v50 + 1);
            if ( v79 )
            {
              v50 = (__int128 *)((char *)v50 + 1);
              v51 = v79;
              goto LABEL_90;
            }
            while ( 1 )
            {
              v52 += 32;
              if ( v52 == v53 )
                break;
              if ( *(_BYTE *)v52 == 4 )
                goto LABEL_89;
            }
LABEL_91:
            if ( (v51 & 0xFB) != 0 )
            {
              v69 = sub_479EB0(0x38u);
LABEL_78:
              if ( v69 )
                continue;
            }
            if ( (*(_BYTE *)(v39 + 36) & 2) != 0 )
              sub_442F80(a1, v39, v323.m128i_i64[0], v46, *(double *)v12.m128_u64, a6, a7, a8, v41, v42, a11, a12);
            v70 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, double, double, double, double, double, double, double, double))(v39 + 8))(
                    v323.m128i_i64[0],
                    v332,
                    *(double *)v12.m128_u64,
                    *(double *)a6.m128_u64,
                    *(double *)a7.m128_u64,
                    *(double *)a8.m128_u64,
                    v41,
                    v42,
                    *(double *)a11.m128_u64,
                    *(double *)a12.m128_u64);
            if ( v70 )
            {
              sub_479EB0(v70);
              continue;
            }
            sub_443190(a1, v46, *(double *)v12.m128_u64, a6, a7, a8, v71, v72, a11, a12);
            if ( (unsigned __int64)(int)v14 < *(_QWORD *)(a1 + 56) )
            {
              sub_479EB0(0);
              v61 = *(__m128i **)(a1 + 112);
              v292 = sub_438BF0(*(_QWORD **)(a1 + 128), (__int64)v61);
              ++*(_QWORD *)(a1 + 112);
              v65 = v292;
              if ( v292 == 0xA9 )
              {
                sub_441540((__int64)v332, *(double *)v12.m128_u64, a6, a7, a8, v293, v294, a11, a12);
                goto LABEL_65;
              }
              v295 = *(_QWORD *)(a1 + 32);
              if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v295 + 1) )
              {
                *(_QWORD *)(a1 + 24) = sub_481540(a1 + 24, *(void **)(a1 + 24), v295 + 1, 0x20u);
                v295 = *(_QWORD *)(a1 + 32);
              }
              v12 = 0;
              v296 = *(_QWORD *)(a1 + 24) + 32 * v295;
              v61 = (__m128i *)v332;
              *(_BYTE *)v296 = 2;
              *(_QWORD *)(v296 + 24) = 0;
              *(_OWORD *)(v296 + 8) = 0;
              ++*(_QWORD *)(a1 + 32);
              sub_442230((__m128i *)v296, (__m128i *)v332, 0.0, a6, a7, a8, v293, v294, a11, a12);
              goto LABEL_71;
            }
            if ( !a2
              || !(unsigned int)sub_442230(
                                  a2,
                                  (__m128i *)v332,
                                  *(double *)v12.m128_u64,
                                  a6,
                                  a7,
                                  a8,
                                  *(double *)a9.m128_u64,
                                  *(double *)a10.m128_u64,
                                  a11,
                                  a12) )
            {
LABEL_299:
              v67 = 1;
              goto LABEL_73;
            }
            break;
          case 5:
          case 8:
            v69 = sub_479EB0(0x5FCu);
            goto LABEL_78;
          case 6:
            v69 = sub_479EB0(0x612u);
            goto LABEL_78;
          case 7:
            v325 = (__int64 *)v53;
            v324 = v50;
            v323.m128i_i64[1] = v52;
            v78 = sub_441D50(v52, *(double *)v12.m128_u64, a6, a7, a8, v41, v42, a11, a12);
            goto LABEL_88;
          case 9:
            v325 = (__int64 *)v53;
            v324 = v50;
            v323.m128i_i64[1] = v52;
            v78 = sub_4424F0(v52, *(double *)v12.m128_u64, a6, a7, a8, v41, v42, a11, a12);
LABEL_88:
            v52 = v323.m128i_i64[1];
            v50 = v324;
            v53 = (__int64)v325;
            if ( !v78 )
              goto LABEL_89;
            continue;
          case 10:
            if ( *(_BYTE *)v52 == 2 && !*(_QWORD *)(v52 + 8) )
              goto LABEL_89;
            v69 = sub_479EB0(0x61Eu);
            goto LABEL_78;
          default:
            if ( !byte_4C94E1 )
              sub_481AC0(289);
            goto LABEL_390;
        }
        return result;
      case 0xF8u:
        v174 = *(_DWORD *)(a1 + 96);
        goto LABEL_201;
      case 0xF9u:
        v174 = *(_DWORD *)(a1 + 100);
LABEL_201:
        v328 = (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        if ( (unsigned int)sub_442390(
                             (__int64)v328,
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             *(double *)a9.m128_u64,
                             *(double *)a10.m128_u64,
                             a11,
                             a12) )
          continue;
        v153 = v328;
        v155 = v174 + v328->m128i_i32[2];
        if ( (unsigned __int64)v155 < *(_QWORD *)(a1 + 32) )
          goto LABEL_184;
        if ( !byte_4C94E1 )
          sub_481AC0(292);
        goto LABEL_390;
      case 0xFAu:
        v328 = (__m128i *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
        if ( (unsigned int)sub_442390(
                             (__int64)v328,
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             *(double *)a9.m128_u64,
                             *(double *)a10.m128_u64,
                             a11,
                             a12) )
          continue;
        v153 = v328;
        v154 = v328->m128i_i64[1];
        if ( v154 < 0 || (unsigned __int64)v154 >= *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL) )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(294);
        }
        else
        {
          v155 = ~(_DWORD)v154;
LABEL_184:
          v153->m128i_i8[0] = 10;
          v156 = v328;
          v328->m128i_i64[1] = a1;
          v156[1].m128i_i32[0] = v155;
          v61 = *(__m128i **)(a1 + 8);
          v157 = sub_43D6B0((__int64)&v156->m128i_i64[1], (__int64)v61);
          if ( v157 )
          {
            if ( *(_BYTE *)v157 == 10 )
            {
              v12 = (__m128)_mm_loadu_si128((const __m128i *)(v157 + 8));
              *(__m128 *)((char *)v156 + 8) = v12;
            }
            goto LABEL_65;
          }
          if ( !byte_4C94E1 )
            sub_481AC0(293);
        }
        goto LABEL_390;
      case 0xFBu:
        v166 = *(_QWORD *)(a1 + 32) - 4LL;
        if ( v166 < 0 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(296);
          goto LABEL_390;
        }
        v167 = *(_QWORD *)(a1 + 24) + 32 * v166;
        v328 = (__m128i *)(v167 + 32);
        if ( (unsigned int)sub_442390(
                             v167 + 64,
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             *(double *)a9.m128_u64,
                             *(double *)a10.m128_u64,
                             a11,
                             a12)
          || (unsigned int)sub_442390(v167 + 96, *(double *)v12.m128_u64, a6, a7, a8, v168, v169, a11, a12)
          || (unsigned int)sub_43DF00(
                             (unsigned __int8 *)v328,
                             *(_QWORD *)(v167 + 72),
                             *(_QWORD *)(v167 + 104),
                             (unsigned __int8 *)v167,
                             0,
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             v170,
                             v171,
                             a11,
                             a12) )
        {
          continue;
        }
        sub_441FA0(a1, *(double *)v12.m128_u64, a6, a7, a8, v172, v173, a11, a12);
        goto LABEL_175;
      case 0xFCu:
        v158 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v158 < 0 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(295);
          goto LABEL_390;
        }
        v159 = *(_QWORD *)(a1 + 24) + 32 * v158;
        v328 = (__m128i *)v159;
        if ( (unsigned int)sub_442390(
                             v159 + 32,
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             *(double *)a9.m128_u64,
                             *(double *)a10.m128_u64,
                             a11,
                             a12) )
          continue;
        if ( (unsigned int)sub_442390(v159 + 64, *(double *)v12.m128_u64, a6, a7, a8, v160, v161, a11, a12) )
          continue;
        LODWORD(v61) = (_DWORD)v328;
        if ( (unsigned int)sub_444FA0(
                             v328,
                             (unsigned __int8 *)v328,
                             *(_QWORD *)(v159 + 40),
                             *(_QWORD *)(v159 + 72),
                             0,
                             *(double *)v12.m128_u64,
                             a6,
                             a7,
                             a8,
                             v162,
                             v163,
                             a11,
                             a12) )
          continue;
        sub_441FA0(a1, *(double *)v12.m128_u64, a6, a7, a8, v164, v165, a11, a12);
        goto LABEL_168;
      case 0xFDu:
        sub_4418C0(
          v332,
          (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32),
          *(double *)v12.m128_u64,
          a6,
          a7,
          a8,
          *(double *)a9.m128_u64,
          *(double *)a10.m128_u64,
          a11,
          a12);
        goto LABEL_110;
      case 0xFEu:
        v149 = *(_QWORD *)(a1 + 32) - 2LL;
        if ( v149 >= 0 )
        {
          v150 = *(_QWORD *)(a1 + 24) + 32 * v149;
          v328 = (__m128i *)v150;
          if ( (unsigned int)sub_442390(
                               v150 + 32,
                               *(double *)v12.m128_u64,
                               a6,
                               a7,
                               a8,
                               *(double *)a9.m128_u64,
                               *(double *)a10.m128_u64,
                               a11,
                               a12) )
            continue;
          LODWORD(v61) = (_DWORD)v328;
          if ( (unsigned int)sub_444FA0(
                               v328,
                               (unsigned __int8 *)v328,
                               *(_QWORD *)(v150 + 40),
                               0,
                               1,
                               *(double *)v12.m128_u64,
                               a6,
                               a7,
                               a8,
                               v151,
                               v152,
                               a11,
                               a12) )
            continue;
LABEL_168:
          sub_441FA0(a1, *(double *)v12.m128_u64, a6, a7, a8, *(double *)a9.m128_u64, *(double *)a10.m128_u64, a11, a12);
          goto LABEL_65;
        }
        if ( !byte_4C94E1 )
          sub_481AC0(297);
        goto LABEL_390;
      case 0xFFu:
        v137 = *(_QWORD *)(a1 + 32) - 3LL;
        if ( v137 >= 0 )
        {
          v138 = *(_QWORD *)(a1 + 24) + 32 * v137;
          v328 = (__m128i *)(v138 + 32);
          if ( (unsigned int)sub_442390(
                               v138 + 64,
                               *(double *)v12.m128_u64,
                               a6,
                               a7,
                               a8,
                               *(double *)a9.m128_u64,
                               *(double *)a10.m128_u64,
                               a11,
                               a12)
            || (unsigned int)sub_43DF00(
                               (unsigned __int8 *)v328,
                               *(_QWORD *)(v138 + 72),
                               0,
                               (unsigned __int8 *)v138,
                               1,
                               *(double *)v12.m128_u64,
                               a6,
                               a7,
                               a8,
                               v139,
                               v140,
                               a11,
                               a12) )
          {
            continue;
          }
LABEL_175:
          sub_441FA0(a1, *(double *)v12.m128_u64, a6, a7, a8, v141, v142, a11, a12);
          sub_443380(a1, (__m128i *)v332, *(double *)v12.m128_u64, a6, a7, a8, v143, v144, a11, a12);
          sub_441FA0(a1, *(double *)v12.m128_u64, a6, a7, a8, v145, v146, a11, a12);
          v61 = (__m128i *)v332;
          sub_442320((char **)(a1 + 24), (__m128i *)v332, *(double *)v12.m128_u64, a6, a7, a8, v147, v148, a11, a12);
          goto LABEL_65;
        }
        if ( !byte_4C94E1 )
          sub_481AC0(298);
        goto LABEL_390;
    }
  }
LABEL_72:
  v67 = 0;
LABEL_73:
  sub_441540(
    (__int64)v332,
    *(double *)v12.m128_u64,
    a6,
    a7,
    a8,
    *(double *)a9.m128_u64,
    *(double *)a10.m128_u64,
    a11,
    a12);
  return v67;
}
// 43F00E: variable 'v25' is possibly undefined
// 43F00E: variable 'v26' is possibly undefined
// 43F06F: variable 'v30' is possibly undefined
// 43F06F: variable 'v31' is possibly undefined
// 43F0A0: variable 'a9' is possibly undefined
// 43F0A0: variable 'a10' is possibly undefined
// 440950: variable 'v41' is possibly undefined
// 440950: variable 'v42' is possibly undefined
// 43F40D: variable 'a4' is possibly undefined
// 43F40D: variable 'v58' is possibly undefined
// 43F40D: variable 'v59' is possibly undefined
// 43F411: variable 'v64' is possibly undefined
// 440A47: variable 'v75' is possibly undefined
// 440A47: variable 'v76' is possibly undefined
// 43F76D: variable 'v83' is possibly undefined
// 43F76D: variable 'v84' is possibly undefined
// 43F892: variable 'v90' is possibly undefined
// 43F892: variable 'v91' is possibly undefined
// 43F89F: variable 'v95' is possibly undefined
// 43F89F: variable 'v96' is possibly undefined
// 43F930: variable 'v100' is possibly undefined
// 43F930: variable 'v101' is possibly undefined
// 440D50: variable 'v104' is possibly undefined
// 440D50: variable 'v105' is possibly undefined
// 43FA26: variable 'v114' is possibly undefined
// 43FA26: variable 'v115' is possibly undefined
// 440C26: variable 'v118' is possibly undefined
// 440C26: variable 'v119' is possibly undefined
// 43FBBB: variable 'v128' is possibly undefined
// 43FBBB: variable 'v129' is possibly undefined
// 43FC93: variable 'v135' is possibly undefined
// 43FC93: variable 'v136' is possibly undefined
// 43FCE6: variable 'v139' is possibly undefined
// 43FCE6: variable 'v140' is possibly undefined
// 43FCF6: variable 'v141' is possibly undefined
// 43FCF6: variable 'v142' is possibly undefined
// 43FD01: variable 'v143' is possibly undefined
// 43FD01: variable 'v144' is possibly undefined
// 43FD09: variable 'v145' is possibly undefined
// 43FD09: variable 'v146' is possibly undefined
// 43FD15: variable 'v147' is possibly undefined
// 43FD15: variable 'v148' is possibly undefined
// 43FD64: variable 'v151' is possibly undefined
// 43FD64: variable 'v152' is possibly undefined
// 43FE3E: variable 'v160' is possibly undefined
// 43FE3E: variable 'v161' is possibly undefined
// 43FE5E: variable 'v162' is possibly undefined
// 43FE5E: variable 'v163' is possibly undefined
// 43FE6E: variable 'v164' is possibly undefined
// 43FE6E: variable 'v165' is possibly undefined
// 43FEB1: variable 'v168' is possibly undefined
// 43FEB1: variable 'v169' is possibly undefined
// 43FED1: variable 'v170' is possibly undefined
// 43FED1: variable 'v171' is possibly undefined
// 43FEE1: variable 'v172' is possibly undefined
// 43FEE1: variable 'v173' is possibly undefined
// 440060: variable 'v179' is possibly undefined
// 440060: variable 'v180' is possibly undefined
// 440123: variable 'v182' is possibly undefined
// 440123: variable 'v183' is possibly undefined
// 440183: variable 'v195' is possibly undefined
// 440183: variable 'v196' is possibly undefined
// 440190: variable 'v199' is possibly undefined
// 440190: variable 'v200' is possibly undefined
// 4401C1: variable 'v201' is possibly undefined
// 4401C1: variable 'v202' is possibly undefined
// 4401D3: variable 'v206' is possibly undefined
// 4401D3: variable 'v207' is possibly undefined
// 44020A: variable 'v209' is possibly undefined
// 44020A: variable 'v210' is possibly undefined
// 4403F0: variable 'v215' is possibly undefined
// 4403F0: variable 'v216' is possibly undefined
// 440444: variable 'v219' is possibly undefined
// 440444: variable 'v220' is possibly undefined
// 440487: variable 'v221' is possibly undefined
// 440487: variable 'v222' is possibly undefined
// 440DBB: variable 'v227' is possibly undefined
// 440DBB: variable 'v228' is possibly undefined
// 4404E5: variable 'v232' is possibly undefined
// 4404E5: variable 'v233' is possibly undefined
// 44053F: variable 'v237' is possibly undefined
// 44053F: variable 'v238' is possibly undefined
// 440579: variable 'v241' is possibly undefined
// 440579: variable 'v242' is possibly undefined
// 4405B1: variable 'v246' is possibly undefined
// 4405B1: variable 'v247' is possibly undefined
// 44060F: variable 'v254' is possibly undefined
// 44060F: variable 'v255' is possibly undefined
// 44079B: variable 'v263' is possibly undefined
// 44079B: variable 'v264' is possibly undefined
// 4410CC: variable 'v270' is possibly undefined
// 4410CC: variable 'v271' is possibly undefined
// 440874: variable 'v277' is possibly undefined
// 440874: variable 'v278' is possibly undefined
// 4409FC: variable 'v71' is possibly undefined
// 4409FC: variable 'v72' is possibly undefined
// 440A8E: variable 'v319' is possibly undefined
// 440B44: variable 'v293' is possibly undefined
// 440B44: variable 'v294' is possibly undefined
// 440CBC: variable 'v301' is possibly undefined
// 440CBC: variable 'v302' is possibly undefined
// 440CC9: variable 'v306' is possibly undefined
// 440CC9: variable 'v307' is possibly undefined
// 440CD6: variable 'v308' is possibly undefined
// 440CD6: variable 'v309' is possibly undefined
// 440EBB: variable 'v274' is possibly undefined
// 440EBB: variable 'v275' is possibly undefined
// 4C56E0: using guessed type __int64 qword_4C56E0[3];
// 4C5728: using guessed type __int64 qword_4C5728[3];
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
// 4C94E1: using guessed type char byte_4C94E1;
