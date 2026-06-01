__int64 __fastcall sub_445830(const __m128i *a1, unsigned __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  const char *v6; // rax
  const char *v7; // r14
  size_t v8; // rax
  size_t v9; // r13
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  size_t v12; // rdx
  __int64 v13; // rax
  char **v14; // rbx
  const char *v15; // rax
  char **v16; // rbx
  char **v17; // rbx
  char **v18; // rbx
  char **v19; // rbx
  char **v20; // rbx
  char **v21; // rbx
  char **v22; // rbx
  char **v23; // rbx
  _QWORD *exception; // r15
  const char *v25; // rax
  const char *v26; // r14
  size_t v27; // rax
  size_t v28; // r13
  _QWORD *v29; // rdi
  _QWORD *v30; // rcx
  size_t v31; // rdx
  __int64 v32; // rax
  char **v33; // rbx
  const char *v34; // rax
  char **v35; // rbx
  int v40; // ecx
  _OWORD *v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // r14
  __int64 v44; // rsi
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  unsigned __int64 *v48; // rbx
  unsigned __int64 v49; // rax
  _QWORD *v50; // r14
  unsigned __int64 v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rdi
  bool v54; // zf
  _QWORD *v55; // r15
  unsigned __int64 v56; // r14
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rdi
  unsigned __int64 v61; // rsi
  __int64 v62; // rdi
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // r15
  _QWORD *v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rsi
  int v69; // eax
  unsigned __int64 *v70; // rsi
  unsigned __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  unsigned int v80; // r8d
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // rsi
  _DWORD *v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rsi
  __int64 v88; // rdi
  int v89; // ecx
  __int64 v90; // rsi
  __int64 v91; // rdi
  _QWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rsi
  __int64 v96; // rdi
  int v97; // edi
  __int64 v98; // rsi
  __int64 v99; // rdi
  __int64 v100; // rax
  __int64 v101; // r15
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r14
  _QWORD *v107; // rdx
  unsigned int v108; // eax
  __int64 v109; // rcx
  int v110; // eax
  __int64 *v111; // rcx
  __int64 v112; // rdi
  __int64 v113; // rax
  __int64 v114; // rdx
  _QWORD *v115; // rsi
  unsigned int v116; // eax
  __int64 v117; // rcx
  int v118; // eax
  __int64 *v119; // rcx
  __int64 v120; // rax
  int v121; // edx
  __int64 v122; // rax
  __int64 v123; // r15
  __int16 v124; // ax
  _DWORD *v125; // rax
  __int64 v126; // rdx
  unsigned __int64 v127; // rcx
  unsigned __int64 v128; // r15
  unsigned __int64 v129; // rsi
  __int64 v130; // rdi
  int v131; // ecx
  __int64 v132; // rsi
  __int64 v133; // rdi
  _QWORD *v134; // rax
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // r15
  __int64 v138; // rsi
  __int64 v139; // rdi
  int v140; // ecx
  __int64 v141; // rsi
  __int64 v142; // rdi
  _DWORD *v143; // rax
  __int64 v144; // rdx
  unsigned __int64 v145; // rcx
  unsigned __int64 v146; // r15
  unsigned __int64 v147; // rsi
  __int64 v148; // rdi
  int v149; // ecx
  __int64 v150; // rsi
  __int64 v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // r8
  int v155; // r9d
  __int64 v156; // rdx
  _QWORD *v157; // rcx
  unsigned int v158; // eax
  __int64 v159; // rsi
  int v160; // eax
  __int64 *v161; // rsi
  __int64 v162; // rax
  int v163; // ecx
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // r15
  __int16 v167; // ax
  _QWORD *v168; // rax
  __int16 v169; // dx
  _QWORD *v170; // rax
  int v171; // r14d
  __int64 v172; // rcx
  int v173; // edx
  _QWORD *v174; // rcx
  _QWORD *v175; // rdi
  __int64 v176; // rax
  unsigned int *v177; // rax
  unsigned int v178; // edx
  unsigned int v179; // ecx
  size_t v180; // rsi
  unsigned int *v181; // rdx
  unsigned int v182; // ecx
  unsigned int v183; // edx
  unsigned int *v184; // rax
  unsigned int v185; // r14d
  unsigned __int64 v186; // rsi
  int v187; // edx
  unsigned int v188; // eax
  unsigned int v189; // esi
  __int64 v190; // rcx
  __int64 v191; // rsi
  __int64 v192; // rcx
  __int64 v193; // rcx
  __int64 v194; // r8
  _QWORD *v195; // rax
  _QWORD *v196; // rdx
  __int64 v197; // r8
  __int64 v198; // rcx
  __int64 v199; // r9
  int v200; // eax
  unsigned int v201; // eax
  __int64 v202; // rdx
  unsigned int v203; // r10d
  unsigned int v204; // edx
  unsigned int v205; // r14d
  unsigned int *v206; // rax
  __int64 v207; // rdx
  __int64 v208; // rdi
  __int64 v209; // rcx
  __int64 v210; // r8
  _QWORD *v211; // rax
  __int64 v212; // rcx
  __int64 v213; // r9
  __int64 v214; // r8
  _QWORD *v215; // rdx
  int v216; // eax
  unsigned int v217; // eax
  __int64 v218; // rdx
  unsigned int v219; // r10d
  unsigned int v220; // edx
  unsigned int v221; // r14d
  unsigned int *v222; // rax
  __int64 v223; // rdx
  __int64 v224; // rax
  __int64 *v225; // rcx
  __int64 *v226; // r14
  char v227; // al
  __int64 *v228; // rcx
  unsigned int v229; // edi
  __int64 v230; // rax
  __int64 *v231; // r8
  __int64 v232; // rsi
  _QWORD *v233; // rax
  unsigned __int64 i; // rcx
  __int64 v235; // rsi
  __int64 v236; // rax
  __int64 *v237; // rcx
  __int64 *v238; // r14
  char v239; // al
  __int64 *v240; // rcx
  unsigned int v241; // edi
  __int64 v242; // rax
  __int64 *v243; // r8
  __int64 v244; // rsi
  unsigned __int64 v245; // rcx
  _QWORD *j; // rax
  __int64 v247; // rsi
  __int64 v248; // rax
  __int64 v249; // rdx
  __int64 v250; // rsi
  __int64 v251; // rdi
  _QWORD *v252; // rax
  unsigned int v253; // ecx
  unsigned __int64 v254; // r8
  _QWORD *v255; // rdx
  __int64 v256; // rsi
  __int64 v257; // rdi
  __int64 v258; // rdx
  __int64 *v259; // rsi
  int v260; // ecx
  __int64 v261; // rcx
  __int64 v262; // rdi
  __int64 v263; // rsi
  __int64 v264; // rdi
  __int64 v265; // rcx
  __int64 v266; // rdx
  int v267; // eax
  __int64 *v268; // r15
  unsigned __int64 v269; // r14
  __int64 v270; // rsi
  __int64 *v271; // r15
  unsigned __int64 v272; // r14
  __int64 v273; // rsi
  _QWORD *v274; // rax
  __int64 v275; // rsi
  __int64 v276; // rdi
  unsigned int v277; // r8d
  size_t v278; // rsi
  unsigned int *v279; // rcx
  __int64 v280; // rsi
  _QWORD *v281; // rax
  _QWORD *v282; // rax
  unsigned int v283; // ecx
  size_t v284; // rsi
  unsigned int *v285; // rax
  unsigned int v286; // ecx
  unsigned int *v287; // rax
  unsigned int v288; // r11d
  size_t v289; // rsi
  unsigned int v290; // r14d
  unsigned int *v291; // rax
  __int64 v292; // rsi
  _QWORD *v293; // rcx
  _QWORD *v294; // rdx
  _QWORD *v295; // rsi
  void *v296; // [rsp+0h] [rbp-3D0h]
  __int64 *v297; // [rsp+0h] [rbp-3D0h]
  __int64 v298; // [rsp+8h] [rbp-3C8h]
  unsigned __int64 v299; // [rsp+8h] [rbp-3C8h]
  __int64 v300; // [rsp+10h] [rbp-3C0h]
  __int64 v301; // [rsp+18h] [rbp-3B8h]
  __int64 v302; // [rsp+18h] [rbp-3B8h]
  __int64 v303; // [rsp+18h] [rbp-3B8h]
  __int64 *v304; // [rsp+18h] [rbp-3B8h]
  __int64 *v305; // [rsp+18h] [rbp-3B8h]
  __int64 v306; // [rsp+20h] [rbp-3B0h]
  __int64 v307; // [rsp+20h] [rbp-3B0h]
  __int64 v308; // [rsp+20h] [rbp-3B0h]
  __int64 v309; // [rsp+28h] [rbp-3A8h]
  __int64 v310; // [rsp+30h] [rbp-3A0h]
  __int64 v311; // [rsp+30h] [rbp-3A0h]
  __int64 v312; // [rsp+30h] [rbp-3A0h]
  unsigned __int64 v313; // [rsp+30h] [rbp-3A0h]
  __int64 *v314; // [rsp+38h] [rbp-398h]
  __int64 *v315; // [rsp+38h] [rbp-398h]
  _QWORD *v316; // [rsp+38h] [rbp-398h]
  __int64 *v317; // [rsp+38h] [rbp-398h]
  _QWORD *v318; // [rsp+38h] [rbp-398h]
  unsigned int v319; // [rsp+38h] [rbp-398h]
  __int64 v320; // [rsp+38h] [rbp-398h]
  __int64 v321; // [rsp+38h] [rbp-398h]
  unsigned int v322; // [rsp+40h] [rbp-390h]
  _QWORD *v323; // [rsp+40h] [rbp-390h]
  unsigned int v324; // [rsp+40h] [rbp-390h]
  unsigned int v325; // [rsp+48h] [rbp-388h]
  unsigned __int64 v326; // [rsp+48h] [rbp-388h]
  __int64 v327; // [rsp+48h] [rbp-388h]
  __int64 v328; // [rsp+48h] [rbp-388h]
  __int64 v329; // [rsp+48h] [rbp-388h]
  unsigned int v330; // [rsp+50h] [rbp-380h]
  unsigned int v331; // [rsp+50h] [rbp-380h]
  __int64 v332; // [rsp+50h] [rbp-380h]
  __int64 v333; // [rsp+50h] [rbp-380h]
  _QWORD *v334; // [rsp+50h] [rbp-380h]
  int v335; // [rsp+58h] [rbp-378h]
  int v336; // [rsp+5Ch] [rbp-374h]
  __int64 v337; // [rsp+60h] [rbp-370h]
  unsigned __int64 v338; // [rsp+78h] [rbp-358h]
  __int64 v339; // [rsp+78h] [rbp-358h]
  unsigned __int64 v340; // [rsp+78h] [rbp-358h]
  unsigned int v341; // [rsp+78h] [rbp-358h]
  _QWORD *v342; // [rsp+78h] [rbp-358h]
  unsigned int v343; // [rsp+78h] [rbp-358h]
  unsigned __int64 *v345; // [rsp+88h] [rbp-348h]
  unsigned __int64 v346; // [rsp+A8h] [rbp-328h]
  unsigned int v347; // [rsp+A8h] [rbp-328h]
  __int64 v348; // [rsp+A8h] [rbp-328h]
  __int64 v349; // [rsp+A8h] [rbp-328h]
  unsigned __int64 v350; // [rsp+A8h] [rbp-328h]
  unsigned int v351; // [rsp+A8h] [rbp-328h]
  __int64 v352; // [rsp+A8h] [rbp-328h]
  __int64 v353; // [rsp+A8h] [rbp-328h]
  __int64 v354; // [rsp+A8h] [rbp-328h]
  __int64 v355; // [rsp+A8h] [rbp-328h]
  int v356[4]; // [rsp+C0h] [rbp-310h] BYREF
  unsigned __int64 v357; // [rsp+D0h] [rbp-300h] BYREF
  __int64 v358; // [rsp+D8h] [rbp-2F8h]
  __int64 v359; // [rsp+E0h] [rbp-2F0h]
  __int64 v360; // [rsp+F0h] [rbp-2E0h]
  void *ptr[2]; // [rsp+100h] [rbp-2D0h] BYREF
  int v362; // [rsp+110h] [rbp-2C0h]
  int v363[2]; // [rsp+120h] [rbp-2B0h] BYREF
  size_t v364; // [rsp+128h] [rbp-2A8h]
  _QWORD dest[2]; // [rsp+130h] [rbp-2A0h] BYREF
  __m128i v366; // [rsp+140h] [rbp-290h] BYREF
  void **v367; // [rsp+150h] [rbp-280h]
  __int64 v368; // [rsp+158h] [rbp-278h]
  char v369[8]; // [rsp+160h] [rbp-270h] BYREF
  _QWORD *v370; // [rsp+168h] [rbp-268h]
  unsigned int v371; // [rsp+170h] [rbp-260h]
  __int64 (__fastcall **v372)(); // [rsp+180h] [rbp-250h] BYREF
  int v373[2]; // [rsp+188h] [rbp-248h]
  char v374; // [rsp+190h] [rbp-240h]
  char v375; // [rsp+191h] [rbp-23Fh]
  _QWORD *v376; // [rsp+198h] [rbp-238h]
  __int64 v377; // [rsp+1A0h] [rbp-230h]
  __int64 v378; // [rsp+1A8h] [rbp-228h]
  __int64 v379; // [rsp+1B0h] [rbp-220h]
  _DWORD *v380; // [rsp+1B8h] [rbp-218h]
  __int64 v381; // [rsp+1C8h] [rbp-208h]
  __int64 v382; // [rsp+1D0h] [rbp-200h]
  _QWORD *v383; // [rsp+1D8h] [rbp-1F8h]
  unsigned __int64 v384; // [rsp+1F8h] [rbp-1D8h]
  int v385; // [rsp+200h] [rbp-1D0h]
  __int64 v386; // [rsp+208h] [rbp-1C8h]
  __m128i *v387; // [rsp+210h] [rbp-1C0h]
  int v388; // [rsp+218h] [rbp-1B8h]
  _DWORD *v389; // [rsp+220h] [rbp-1B0h]
  _QWORD v390[19]; // [rsp+228h] [rbp-1A8h] BYREF
  int v391; // [rsp+2C0h] [rbp-110h]
  _QWORD v392[18]; // [rsp+2C8h] [rbp-108h] BYREF
  int v393; // [rsp+358h] [rbp-78h]
  __int64 v394; // [rsp+360h] [rbp-70h]
  __int64 v395; // [rsp+368h] [rbp-68h]
  __int64 v396; // [rsp+370h] [rbp-60h]
  __int64 v397; // [rsp+378h] [rbp-58h]
  __int64 v398; // [rsp+380h] [rbp-50h]
  __int64 v399; // [rsp+388h] [rbp-48h]
  _QWORD *v400; // [rsp+390h] [rbp-40h]

  v40 = *(_DWORD *)(a1->m128i_i64[0] + 712);
  v337 = a1->m128i_i64[0];
  *(_DWORD *)(a1->m128i_i64[0] + 712) = 0;
  v336 = v40;
  v41 = (_OWORD *)sub_186B270(0x80u);
  ptr[0] = v41;
  *v41 = 0;
  v41[1] = 0;
  v41[2] = 0;
  v41[3] = 0;
  v41[4] = 0;
  v41[5] = 0;
  v41[6] = 0;
  v41[7] = 0;
  v42 = _mm_loadl_epi64(a1);
  v367 = ptr;
  v368 = a4;
  ptr[1] = &byte_8;
  v362 = 0;
  v372 = nullptr;
  v366 = _mm_unpacklo_epi64(v42, (__m128i)a2);
  sub_1360C00(v369, a4, &v372);
  sub_18572D0(&v372);
  v370 = a5;
  v371 = -1;
  sub_1360B80(v369, 1);
  v43 = a1->m128i_i64[0];
  sub_1584DD0(&v372, a1->m128i_i64[0], 0);
  v372 = &off_1C4E8E8;
  v387 = &v366;
  v388 = 0;
  v389 = nullptr;
  sub_1584DD0(v390, v43, 0);
  v390[18] = 0;
  v390[0] = &off_1C61DB8;
  v391 = 0;
  sub_1584DD0(v392, v43, 0);
  v44 = a1->m128i_i64[0];
  v393 = 0;
  v394 = 0;
  v395 = v43;
  v392[0] = &off_1C61DE0;
  v396 = 0;
  v397 = v43;
  v398 = 0;
  v399 = v43;
  v400 = nullptr;
  *(_QWORD *)v363 = 0;
  sub_14B7810((int)v356, v44, (int)v363, v45, v46, v47, v296);
  sub_18572D0(v363);
  v48 = *(unsigned __int64 **)(a3 + 8);
  if ( v48 )
  {
    v345 = &v48[*((unsigned int *)v48 - 1)];
    while ( v345 != v48 )
    {
      v49 = *v48;
      v357 = 0;
      v346 = v49;
      v358 = a1->m128i_i64[0];
      v387[3].m128i_i32[0] = -1;
      sub_1584740(&v372);
      if ( v389 )
        *(v389 - 1) = 0;
      if ( v400 )
        *((_DWORD *)v400 - 1) = 0;
      sub_1584740(v390);
      sub_1584740(v392);
      if ( v378 )
      {
        if ( !*(_DWORD *)(v378 - 4) && v377 == *v376 )
          goto LABEL_32;
        *(_DWORD *)(v378 - 4) = 0;
      }
      else if ( v377 == *v376 )
      {
        goto LABEL_32;
      }
      v50 = v380;
      if ( v380 )
      {
        v51 = (unsigned __int64)&v380[2 * *(v380 - 1)];
        if ( (unsigned __int64)v380 >= v51 )
          goto LABEL_19;
        do
        {
          while ( 1 )
          {
            v52 = *v50;
            if ( *v50 )
            {
              v53 = v379;
              v54 = (*(_DWORD *)(v52 + 8))-- == 1;
              if ( v54 )
                break;
            }
            if ( (unsigned __int64)++v50 >= v51 )
              goto LABEL_18;
          }
          sub_15D7BC0(v53, v52);
          ++v50;
        }
        while ( (unsigned __int64)v50 < v51 );
LABEL_18:
        v50 = v380;
        if ( v380 )
LABEL_19:
          *((_DWORD *)v50 - 1) = 0;
      }
      v55 = v383;
      if ( v383 )
      {
        v56 = (unsigned __int64)&v383[*((unsigned int *)v383 - 1)];
        if ( (unsigned __int64)v383 >= v56 )
          goto LABEL_28;
        do
        {
          while ( 1 )
          {
            v57 = *v55;
            if ( *v55 )
            {
              v58 = v382;
              v54 = (*(_DWORD *)(v57 + 8))-- == 1;
              if ( v54 )
                break;
            }
            if ( (unsigned __int64)++v55 >= v56 )
              goto LABEL_27;
          }
          sub_15D7BC0(v58, v57);
          ++v55;
        }
        while ( (unsigned __int64)v55 < v56 );
LABEL_27:
        v55 = v383;
        if ( v383 )
LABEL_28:
          *((_DWORD *)v55 - 1) = 0;
      }
      if ( v386 )
        *(_DWORD *)(v386 - 4) = 0;
      sub_15843E0(&v372);
LABEL_32:
      v59 = v396;
      v60 = v397;
      if ( v374 )
      {
        if ( v396 )
        {
          v54 = (*(_DWORD *)(v396 + 8))-- == 1;
          if ( v54 )
            sub_15D7BC0(v60, v59);
        }
        v396 = 0;
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)v373) )
        {
          if ( v375 )
          {
            v387[3].m128i_i32[0] = -1;
            sub_1584740(&v372);
            if ( v389 )
              *(v389 - 1) = 0;
            if ( v400 )
              *((_DWORD *)v400 - 1) = 0;
            sub_1584740(v390);
            sub_1584740(v392);
            exception = __cxa_allocate_exception(0x28u);
            v25 = (const char *)sub_1829130(*(_QWORD *)v373);
            v26 = v25;
            *(_QWORD *)v363 = dest;
            if ( !v25 )
              std::__throw_logic_error("basic_string: construction from null is not valid");
            v27 = strlen(v25);
            v28 = v27;
            if ( v27 > 0xF )
            {
              *(_QWORD *)v363 = operator new(v27 + 1);
              v29 = *(_QWORD **)v363;
              dest[0] = v28;
LABEL_412:
              memcpy(v29, v26, v28);
            }
            else if ( v27 == 1 )
            {
              LOBYTE(dest[0]) = *v26;
            }
            else if ( v27 )
            {
              v29 = dest;
              goto LABEL_412;
            }
            v364 = v28;
            *(_BYTE *)(*(_QWORD *)v363 + v28) = 0;
            v30 = *(_QWORD **)v363;
            v31 = v364;
            *exception = off_1C63128;
            exception[1] = exception + 3;
            if ( v30 == dest )
            {
              qmemcpy(exception + 3, dest, (unsigned int)(v31 + 1));
            }
            else
            {
              v32 = dest[0];
              exception[1] = v30;
              exception[3] = v32;
            }
            exception[2] = v31;
            *exception = off_1C650D8;
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
          }
          goto LABEL_38;
        }
        v385 = 0;
        v388 = 0;
        v384 = v346;
        if ( !(unsigned __int8)sub_4429F0(&v372, v346, 3) )
        {
LABEL_135:
          v120 = v378;
          if ( v378 )
          {
            while ( *(_DWORD *)(v120 - 4) )
            {
              if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)v373) && v375 )
              {
                sub_441300(&v372);
                v14 = (char **)__cxa_allocate_exception(0x28u);
                v15 = (const char *)sub_1829130(*(_QWORD *)v373);
                sub_24ABB0((__int64 *)v363, v15);
                *v14 = (char *)off_1C63128;
                sub_2333C0(v14 + 1, v363);
                *v14 = (char *)off_1C650D8;
                sub_233E40((__int64)v363);
                __cxa_throw(v14, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
              }
              v122 = 0xFFFFFFFF0LL;
              if ( v378 )
                v122 = 16LL * (unsigned int)(*(_DWORD *)(v378 - 4) - 1);
              v105 = v122 + v378;
              v123 = *(_QWORD *)(v122 + v378);
              ++v388;
              if ( (*(_DWORD *)(v122 + v378 + 8) & 0xFFFFFFCC) != 0
                || (*(_BYTE *)(v105 + 8) & 1) == 0
                || (v348 = v122 + v378, v104 = sub_1680FB0(v377, v123, 0), v105 = v348, (v106 = v104) == 0) )
              {
                v124 = *(_WORD *)(v123 + 4);
                if ( v124 == 1 )
                {
                  --*(_DWORD *)(v378 - 4);
                  sub_441F90(&v372, v123);
                }
                else if ( v124 == 2 )
                {
                  sub_443D30((__int64)&v372, v123, v105);
                }
                else
                {
                  if ( v124 )
                  {
                    sub_1872CE0("");
                    sub_1873130(114, 793);
                  }
                  sub_443210(&v372, v123, v105);
                }
                goto LABEL_135;
              }
              v107 = v380;
              ++*(_DWORD *)(v104 + 8);
              if ( v107 )
              {
                v108 = *((_DWORD *)v107 - 1);
                if ( v108 == *((_DWORD *)v107 - 2) )
                {
                  v283 = (3 * v108 + 1) >> 1;
                  v284 = 8 * v283 + 8;
                  if ( 8 * v108 + 8 >= (unsigned int)v284 || v108 >= v283 )
                  {
                    v20 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v363, "Overflow encountered when expanding vector");
                    *v20 = (char *)off_1C63128;
                    sub_2333C0(v20 + 1, v363);
                    sub_233E40((__int64)v363);
                    __cxa_throw(v20, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v351 = (3 * v108 + 1) >> 1;
                  v285 = (unsigned int *)sub_186B300(v107 - 1, v284);
                  v107 = v285 + 2;
                  v380 = v285 + 2;
                  *v285 = v351;
                  LODWORD(v285) = v285[1];
                  v111 = &v107[(unsigned int)v285];
                  v110 = (_DWORD)v285 + 1;
                }
                else
                {
                  v109 = v108;
                  v110 = v108 + 1;
                  v111 = &v107[v109];
                }
              }
              else
              {
                v294 = (_QWORD *)sub_186B270(0x18u);
                *v294 = 2;
                v110 = 1;
                v107 = v294 + 1;
                v380 = v107;
                v111 = v107;
              }
              *v111 = v106;
              v112 = v381;
              *((_DWORD *)v107 - 1) = v110;
              v113 = sub_1680FB0(v112, v123, 0);
              v114 = v113;
              if ( v113 )
                ++*(_DWORD *)(v113 + 8);
              v115 = v383;
              if ( v383 )
              {
                v116 = *((_DWORD *)v383 - 1);
                if ( v116 == *((_DWORD *)v383 - 2) )
                {
                  v286 = (3 * v116 + 1) >> 1;
                  if ( 8 * v116 + 8 >= 8 * v286 + 8 || v116 >= v286 )
                  {
                    v17 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v363, "Overflow encountered when expanding vector");
                    *v17 = (char *)off_1C63128;
                    sub_2333C0(v17 + 1, v363);
                    sub_233E40((__int64)v363);
                    __cxa_throw(v17, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v343 = (3 * v116 + 1) >> 1;
                  v352 = v114;
                  v287 = (unsigned int *)sub_186B300(v383 - 1, 8 * v286 + 8);
                  v115 = v287 + 2;
                  v114 = v352;
                  v383 = v287 + 2;
                  *v287 = v343;
                  LODWORD(v287) = v287[1];
                  v119 = &v115[(unsigned int)v287];
                  v118 = (_DWORD)v287 + 1;
                }
                else
                {
                  v117 = v116;
                  v118 = v116 + 1;
                  v119 = &v383[v117];
                }
              }
              else
              {
                v355 = v113;
                v295 = (_QWORD *)sub_186B270(0x18u);
                *v295 = 2;
                v114 = v355;
                v118 = 1;
                v115 = v295 + 1;
                v383 = v115;
                v119 = v115;
              }
              *v119 = v114;
              *((_DWORD *)v115 - 1) = v118;
              v120 = v378;
              v121 = *(_DWORD *)(v378 - 4);
              *(_DWORD *)(v378 - 4) = v121 - 1;
              if ( v123 != v106 && v121 != 1 )
                *(_BYTE *)(v120 + 16LL * (unsigned int)(v121 - 2) + 8) |= 2u;
            }
          }
          v125 = v380;
          v126 = 0x1FFFFFFFELL;
          if ( v380 )
            v126 = 2LL * (unsigned int)(*(v380 - 1) - 1);
          v127 = *(_QWORD *)&v380[v126];
          v128 = v127;
          if ( v127 )
            ++*(_DWORD *)(v127 + 8);
          v129 = v357;
          if ( v357 )
          {
            v130 = v358;
            v54 = (*(_DWORD *)(v357 + 8))-- == 1;
            if ( v54 )
            {
              sub_15D7BC0(v130, v129);
              v125 = v380;
            }
          }
          v131 = *(v125 - 1);
          v357 = v128;
          v132 = *(_QWORD *)&v125[2 * (v131 - 1)];
          *(v125 - 1) = v131 - 1;
          if ( v132 )
          {
            v133 = v379;
            v54 = (*(_DWORD *)(v132 + 8))-- == 1;
            if ( v54 )
              sub_15D7BC0(v133, v132);
          }
          v134 = v383;
          v135 = 0xFFFFFFFFLL;
          if ( v383 )
            v135 = (unsigned int)(*((_DWORD *)v383 - 1) - 1);
          v136 = v383[v135];
          v137 = v136;
          if ( v136 )
            ++*(_DWORD *)(v136 + 8);
          v138 = v396;
          if ( v396 )
          {
            v139 = v397;
            v54 = (*(_DWORD *)(v396 + 8))-- == 1;
            if ( v54 )
            {
              sub_15D7BC0(v139, v138);
              v134 = v383;
            }
          }
          v140 = *((_DWORD *)v134 - 1);
          v396 = v137;
          v141 = v134[v140 - 1];
          *((_DWORD *)v134 - 1) = v140 - 1;
          if ( v141 )
          {
            v142 = v382;
            v54 = (*(_DWORD *)(v141 + 8))-- == 1;
            if ( v54 )
            {
              sub_15D7BC0(v142, v141);
              v137 = v396;
            }
          }
          if ( v137 )
            goto LABEL_44;
LABEL_107:
          v100 = sub_15DE1B0(v373[0]);
          v101 = v100;
          if ( v100 )
            ++*(_DWORD *)(v100 + 8);
          v102 = v396;
          if ( v396 )
          {
            v103 = v397;
            v54 = (*(_DWORD *)(v396 + 8))-- == 1;
            if ( v54 )
              sub_15D7BC0(v103, v102);
          }
          v396 = v101;
          goto LABEL_44;
        }
        v84 = v380;
        v85 = 0x1FFFFFFFELL;
        if ( v380 )
          v85 = 2LL * (unsigned int)(*(v380 - 1) - 1);
        v86 = *(_QWORD *)&v380[v85];
        if ( v86 )
          ++*(_DWORD *)(v86 + 8);
        v87 = v357;
        if ( v357 )
        {
          v88 = v358;
          v54 = (*(_DWORD *)(v357 + 8))-- == 1;
          if ( v54 )
          {
            v340 = v86;
            sub_15D7BC0(v88, v87);
            v84 = v380;
            v86 = v340;
          }
        }
        v89 = *(v84 - 1);
        v357 = v86;
        v90 = *(_QWORD *)&v84[2 * (v89 - 1)];
        *(v84 - 1) = v89 - 1;
        if ( v90 )
        {
          v91 = v379;
          v54 = (*(_DWORD *)(v90 + 8))-- == 1;
          if ( v54 )
            sub_15D7BC0(v91, v90);
        }
        v92 = v383;
        v93 = 0xFFFFFFFFLL;
        if ( v383 )
          v93 = (unsigned int)(*((_DWORD *)v383 - 1) - 1);
        v94 = v383[v93];
        if ( v94 )
          ++*(_DWORD *)(v94 + 8);
        v95 = v396;
        if ( v396 )
        {
          v96 = v397;
          v54 = (*(_DWORD *)(v396 + 8))-- == 1;
          if ( v54 )
          {
            v339 = v94;
            sub_15D7BC0(v96, v95);
            v92 = v383;
            v94 = v339;
          }
        }
        v97 = *((_DWORD *)v92 - 1);
        v396 = v94;
        v98 = v92[v97 - 1];
        *((_DWORD *)v92 - 1) = v97 - 1;
        if ( v98 && (v99 = v382, v54 = *(_DWORD *)(v98 + 8) == 1, --*(_DWORD *)(v98 + 8), v54) )
        {
          sub_15D7BC0(v99, v98);
          if ( !v396 )
            goto LABEL_107;
        }
        else if ( !v94 )
        {
          goto LABEL_107;
        }
      }
      else
      {
        if ( v396 )
        {
          v54 = (*(_DWORD *)(v396 + 8))-- == 1;
          if ( v54 )
            sub_15D7BC0(v60, v59);
        }
        v396 = 0;
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)v373) )
        {
          if ( v375 )
          {
            v387[3].m128i_i32[0] = -1;
            sub_1584740(&v372);
            if ( v389 )
              *(v389 - 1) = 0;
            if ( v400 )
              *((_DWORD *)v400 - 1) = 0;
            sub_1584740(v390);
            sub_1584740(v392);
            v5 = __cxa_allocate_exception(0x28u);
            v6 = (const char *)sub_1829130(*(_QWORD *)v373);
            v7 = v6;
            *(_QWORD *)v363 = dest;
            if ( !v6 )
              std::__throw_logic_error("basic_string: construction from null is not valid");
            v8 = strlen(v6);
            v9 = v8;
            if ( v8 > 0xF )
            {
              *(_QWORD *)v363 = operator new(v8 + 1);
              v10 = *(_QWORD **)v363;
              dest[0] = v9;
LABEL_391:
              memcpy(v10, v7, v9);
            }
            else if ( v8 == 1 )
            {
              LOBYTE(dest[0]) = *v7;
            }
            else if ( v8 )
            {
              v10 = dest;
              goto LABEL_391;
            }
            v364 = v9;
            *(_BYTE *)(*(_QWORD *)v363 + v9) = 0;
            v11 = *(_QWORD **)v363;
            v12 = v364;
            *v5 = off_1C63128;
            v5[1] = v5 + 3;
            if ( v11 == dest )
            {
              qmemcpy(v5 + 3, dest, (unsigned int)(v12 + 1));
            }
            else
            {
              v13 = dest[0];
              v5[1] = v11;
              v5[3] = v13;
            }
            v5[2] = v12;
            *v5 = off_1C650D8;
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
          }
LABEL_38:
          if ( v346 )
            ++*(_DWORD *)(v346 + 8);
          v61 = v357;
          if ( v357 )
          {
            v62 = v358;
            v54 = (*(_DWORD *)(v357 + 8))-- == 1;
            if ( v54 )
              sub_15D7BC0(v62, v61);
          }
          v357 = v346;
          goto LABEL_44;
        }
        v385 = 0;
        v388 = 0;
        v384 = v346;
        if ( !(unsigned __int8)sub_442430(&v372, v346, 3) )
        {
LABEL_185:
          while ( 2 )
          {
            while ( 2 )
            {
              v162 = v378;
              if ( !v378 )
                goto LABEL_159;
              while ( 1 )
              {
                if ( !*(_DWORD *)(v162 - 4) )
                  goto LABEL_159;
                if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)v373) && v375 )
                {
                  sub_441300(&v372);
                  v33 = (char **)__cxa_allocate_exception(0x28u);
                  v34 = (const char *)sub_1829130(*(_QWORD *)v373);
                  sub_24ABB0((__int64 *)v363, v34);
                  *v33 = (char *)off_1C63128;
                  sub_2333C0(v33 + 1, v363);
                  *v33 = (char *)off_1C650D8;
                  sub_233E40((__int64)v363);
                  __cxa_throw(v33, (struct type_info *)&`typeinfo for'rewriter_exception, (void (*)(void *))sub_39A5B0);
                }
                v164 = v378;
                v165 = 0xFFFFFFFF0LL;
                if ( v378 )
                  v165 = 16LL * (unsigned int)(*(_DWORD *)(v378 - 4) - 1);
                v153 = v378 + v165;
                v166 = *(_QWORD *)(v378 + v165);
                v349 = v378 + v165;
                ++v388;
                if ( (*(_DWORD *)(v378 + v165 + 8) & 0xFFFFFFCC) != 0 )
                {
LABEL_181:
                  v167 = *(_WORD *)(v166 + 4);
                  if ( v167 == 1 )
                  {
                    v164 = v378;
LABEL_201:
                    --*(_DWORD *)(v164 - 4);
                    sub_441BA0(&v372, v166);
                    goto LABEL_185;
                  }
                  if ( v167 != 2 )
                  {
                    if ( !v167 )
                      goto LABEL_194;
LABEL_184:
                    sub_1872CE0("");
                    sub_1873130(114, 793);
                  }
                  v335 = *(_DWORD *)(v166 + 20);
                  if ( *(_DWORD *)(v349 + 8) <= 0x3Fu )
                    goto LABEL_205;
                  goto LABEL_224;
                }
                if ( (*(_BYTE *)(v153 + 8) & 1) == 0 )
                  break;
                v152 = sub_1680FB0(v377, v166, 0);
                v156 = v152;
                if ( !v152 )
                  goto LABEL_181;
                v157 = v380;
                ++*(_DWORD *)(v152 + 8);
                if ( v157 )
                {
                  v158 = *((_DWORD *)v157 - 1);
                  if ( v158 == *((_DWORD *)v157 - 2) )
                  {
                    v288 = (3 * v158 + 1) >> 1;
                    v289 = 8 * v288 + 8;
                    v290 = v288;
                    if ( 8 * v158 + 8 >= (unsigned int)v289 || v158 >= v288 )
                    {
                      v22 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v363, "Overflow encountered when expanding vector");
                      *v22 = (char *)off_1C63128;
                      sub_2333C0(v22 + 1, v363);
                      sub_233E40((__int64)v363);
                      __cxa_throw(
                        v22,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v353 = v156;
                    v291 = (unsigned int *)sub_186B300(v157 - 1, v289);
                    v292 = v291[1];
                    v157 = v291 + 2;
                    *v291 = v290;
                    v380 = v157;
                    v156 = v353;
                    LODWORD(v291) = v292;
                    v161 = &v157[v292];
                    v160 = (_DWORD)v291 + 1;
                  }
                  else
                  {
                    v159 = v158;
                    v160 = v158 + 1;
                    v161 = &v157[v159];
                  }
                }
                else
                {
                  v354 = v152;
                  v293 = (_QWORD *)sub_186B270(0x18u);
                  *v293 = 2;
                  v156 = v354;
                  v160 = 1;
                  v157 = v293 + 1;
                  v380 = v157;
                  v161 = v157;
                }
                *v161 = v156;
                *((_DWORD *)v157 - 1) = v160;
                v162 = v378;
                v163 = *(_DWORD *)(v378 - 4);
                *(_DWORD *)(v378 - 4) = v163 - 1;
                if ( v166 != v156 && v163 != 1 )
                  *(_BYTE *)(v162 + 16LL * (unsigned int)(v163 - 2) + 8) |= 2u;
              }
              v169 = *(_WORD *)(v166 + 4);
              if ( v169 == 1 )
                goto LABEL_201;
              if ( v169 != 2 )
              {
                if ( v169 )
                  goto LABEL_184;
LABEL_194:
                sub_444C10((__int64)&v372, v166, v349, v153, v154, v155);
                continue;
              }
              break;
            }
            v335 = *(_DWORD *)(v166 + 20);
LABEL_205:
            sub_15856A0(&v372);
            v384 = *(_QWORD *)(v166 + 24);
            v170 = v389;
            if ( v389 )
              v341 = *(v389 - 1);
            else
              v341 = 0;
            if ( v335 )
            {
              v171 = 0;
              while ( 1 )
              {
                if ( v170 )
                {
                  v178 = *((_DWORD *)v170 - 1);
                  if ( v178 == *((_DWORD *)v170 - 2) )
                  {
                    v179 = (3 * v178 + 1) >> 1;
                    v180 = 8 * v179 + 8;
                    if ( 8 * v178 + 8 >= (unsigned int)v180 || v178 >= v179 )
                    {
                      v19 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v363, "Overflow encountered when expanding vector");
                      *v19 = (char *)off_1C63128;
                      sub_2333C0(v19 + 1, v363);
                      sub_233E40((__int64)v363);
                      __cxa_throw(
                        v19,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v330 = (3 * v178 + 1) >> 1;
                    v181 = (unsigned int *)sub_186B300(v170 - 1, v180);
                    v170 = v181 + 2;
                    v389 = v181 + 2;
                    *v181 = v330;
                    LODWORD(v181) = v181[1];
                    v174 = &v170[(unsigned int)v181];
                    v173 = (_DWORD)v181 + 1;
                  }
                  else
                  {
                    v172 = v178;
                    v173 = v178 + 1;
                    v174 = &v170[v172];
                  }
                }
                else
                {
                  v281 = (_QWORD *)sub_186B270(0x18u);
                  *v281 = 2;
                  v170 = v281 + 1;
                  v173 = 1;
                  v389 = v170;
                  v174 = v170;
                }
                v175 = v400;
                *v174 = 0;
                *((_DWORD *)v170 - 1) = v173;
                if ( v175 )
                {
                  v176 = *((unsigned int *)v175 - 1);
                  if ( (_DWORD)v176 == *((_DWORD *)v175 - 2) )
                  {
                    v182 = (unsigned int)(3 * v176 + 1) >> 1;
                    v183 = 4 * v182 + 8;
                    if ( 4 * (int)v176 + 8 >= v183 || (unsigned int)v176 >= v182 )
                    {
                      v21 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v363, "Overflow encountered when expanding vector");
                      *v21 = (char *)off_1C63128;
                      sub_2333C0(v21 + 1, v363);
                      sub_233E40((__int64)v363);
                      __cxa_throw(
                        v21,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v331 = (unsigned int)(3 * v176 + 1) >> 1;
                    v184 = (unsigned int *)sub_186B300(v175 - 1, v183);
                    v175 = v184 + 2;
                    v400 = v184 + 2;
                    *v184 = v331;
                    v177 = &v184[v184[1] + 2];
                  }
                  else
                  {
                    v177 = (unsigned int *)v175 + v176;
                  }
                }
                else
                {
                  v282 = (_QWORD *)sub_186B270(0x10u);
                  v175 = v282 + 1;
                  *v282 = 2;
                  v400 = v282 + 1;
                  v177 = (unsigned int *)(v282 + 1);
                }
                *v177 = v341;
                ++*((_DWORD *)v175 - 1);
                if ( ++v171 == v335 )
                  break;
                v170 = v389;
              }
            }
            v385 += v335;
LABEL_224:
            v185 = *(_DWORD *)(v166 + 72) + *(_DWORD *)(v166 + 76) + 1;
            while ( 1 )
            {
              v188 = *(_DWORD *)(v349 + 8) >> 6;
              if ( v188 >= v185 )
                break;
              if ( v188 )
              {
                v189 = *(_DWORD *)(v166 + 72);
                v190 = v188 - 1;
                if ( v189 < v188 )
                  v190 = (unsigned int)v190 - v189;
                v186 = *(_QWORD *)(16LL * *(unsigned int *)(v166 + 20) + v166 + 8 * v190 + 80);
              }
              else
              {
                v186 = *(_QWORD *)(v166 + 24);
              }
              v187 = ((v188 + 1) << 6) | *(_DWORD *)(v349 + 8) & 0x3F;
              *(_DWORD *)(v349 + 8) = v187;
              if ( !(unsigned __int8)sub_442430(&v372, v186, ((unsigned __int8)v187 >> 4) & 3) )
                goto LABEL_185;
            }
            v191 = *(unsigned int *)(v166 + 20);
            v325 = *(_DWORD *)(v166 + 76);
            v322 = *(_DWORD *)(v166 + 72);
            v192 = 16 * v191;
            v314 = (__int64 *)&v380[2 * *(unsigned int *)(v349 + 12)];
            v309 = *(_QWORD *)v373;
            v300 = *v314;
            v359 = *(_QWORD *)v373;
            if ( v322 )
            {
              v193 = v166 + v192;
              v194 = *(_QWORD *)(v193 + 80);
              if ( v194 )
                ++*(_DWORD *)(v194 + 8);
              v306 = v193;
              v332 = v194;
              v195 = (_QWORD *)sub_186B270(0x18u);
              *v195 = 2;
              v196 = v195 + 1;
              v197 = v332;
              v342 = v195 + 1;
              v198 = v306;
              v310 = v322;
              v199 = v166 + 8 * (v322 + 2 * v191);
              v200 = 1;
              while ( 1 )
              {
                v198 += 8;
                *v196 = v197;
                *((_DWORD *)v342 - 1) = v200;
                if ( v198 == v199 )
                  break;
                v197 = *(_QWORD *)(v198 + 80);
                if ( v197 )
                  ++*(_DWORD *)(v197 + 8);
                v201 = *((_DWORD *)v342 - 1);
                if ( v201 == *((_DWORD *)v342 - 2) )
                {
                  v203 = (3 * v201 + 1) >> 1;
                  v204 = 8 * v203 + 8;
                  v205 = v203;
                  if ( 8 * v201 + 8 >= v204 || v201 >= v203 )
                  {
                    v18 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v363, "Overflow encountered when expanding vector");
                    *v18 = (char *)off_1C63128;
                    sub_2333C0(v18 + 1, v363);
                    sub_233E40((__int64)v363);
                    __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v301 = v199;
                  v307 = v198;
                  v333 = v197;
                  v206 = (unsigned int *)sub_186B300(v342 - 1, v204);
                  v207 = v206[1];
                  *v206 = v205;
                  v342 = v206 + 2;
                  v197 = v333;
                  LODWORD(v206) = v207;
                  v199 = v301;
                  v196 = &v342[v207];
                  v198 = v307;
                  v200 = (_DWORD)v206 + 1;
                }
                else
                {
                  v202 = v201;
                  v200 = v201 + 1;
                  v196 = &v342[v202];
                }
              }
              v208 = *(_QWORD *)v373;
              v308 = *(_QWORD *)v373;
              v192 = 16LL * *(unsigned int *)(v166 + 20);
              v360 = *(_QWORD *)v373;
              if ( !v325 )
              {
                v334 = nullptr;
                v304 = v314 + 1;
                v224 = v322;
                goto LABEL_258;
              }
LABEL_245:
              v209 = v166 + v192;
              v210 = *(_QWORD *)(v209 + 80);
              if ( v210 )
                ++*(_DWORD *)(v210 + 8);
              v302 = v210;
              v311 = v209;
              v211 = (_QWORD *)sub_186B270(0x18u);
              v212 = v311;
              v213 = 0;
              v214 = v302;
              v215 = v211 + 1;
              *v211 = 2;
              v216 = 1;
              v334 = v215;
              while ( 1 )
              {
                *v215 = v214;
                ++v213;
                *((_DWORD *)v334 - 1) = v216;
                if ( (unsigned int)v213 >= v325 )
                  break;
                v214 = *(_QWORD *)(v212 + 8 * v213 + 80);
                if ( v214 )
                  ++*(_DWORD *)(v214 + 8);
                v217 = *((_DWORD *)v334 - 1);
                if ( v217 == *((_DWORD *)v334 - 2) )
                {
                  v219 = (3 * v217 + 1) >> 1;
                  v220 = 8 * v219 + 8;
                  v221 = v219;
                  if ( 8 * v217 + 8 >= v220 || v217 >= v219 )
                  {
                    v16 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0((__int64 *)v363, "Overflow encountered when expanding vector");
                    *v16 = (char *)off_1C63128;
                    sub_2333C0(v16 + 1, v363);
                    sub_233E40((__int64)v363);
                    __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v298 = v214;
                  v303 = v212;
                  v312 = v213;
                  v222 = (unsigned int *)sub_186B300(v334 - 1, v220);
                  v223 = v222[1];
                  *v222 = v221;
                  v334 = v222 + 2;
                  v213 = v312;
                  LODWORD(v222) = v223;
                  v214 = v298;
                  v215 = &v334[v223];
                  v212 = v303;
                  v216 = (_DWORD)v222 + 1;
                }
                else
                {
                  v218 = v217;
                  v216 = v217 + 1;
                  v215 = &v334[v218];
                }
              }
              v304 = v314 + 1;
              v224 = v322;
              v310 = v322;
              if ( v322 )
              {
                v208 = *(_QWORD *)v373;
LABEL_258:
                v225 = v314;
                v322 = 0;
                v226 = &v314[v224];
                while ( 1 )
                {
                  v315 = v225;
                  v227 = sub_15D3190(v208, v225[1]);
                  v228 = v315;
                  if ( v227 )
                  {
                    v229 = v322;
                    v230 = v315[1];
                    ++v322;
                    v231 = &v342[v229];
                    if ( v230 )
                      ++*(_DWORD *)(v230 + 8);
                    v232 = *v231;
                    if ( *v231 )
                    {
                      v54 = (*(_DWORD *)(v232 + 8))-- == 1;
                      if ( v54 )
                      {
                        v297 = v315;
                        v321 = v230;
                        sub_15D7BC0(v309, v232);
                        v228 = v297;
                        v231 = &v342[v229];
                        v230 = v321;
                      }
                    }
                    *v231 = v230;
                  }
                  v225 = v228 + 1;
                  if ( v225 == v226 )
                    break;
                  v208 = *(_QWORD *)v373;
                }
                if ( v342 )
                {
                  v224 = v322;
                  goto LABEL_270;
                }
LABEL_277:
                if ( v325 )
                  goto LABEL_278;
              }
              else
              {
                v310 = 0;
                if ( v342 )
                {
LABEL_270:
                  v233 = &v342[v224];
                  for ( i = (unsigned __int64)&v342[*((unsigned int *)v342 - 1)]; (unsigned __int64)v233 < i; ++v233 )
                  {
                    v235 = *v233;
                    if ( *v233 )
                    {
                      v54 = (*(_DWORD *)(v235 + 8))-- == 1;
                      if ( v54 )
                      {
                        v299 = i;
                        v316 = v233;
                        sub_15D7BC0(v309, v235);
                        i = v299;
                        v233 = v316;
                      }
                    }
                  }
                  *((_DWORD *)v342 - 1) = v322;
                  goto LABEL_277;
                }
LABEL_278:
                v236 = v325;
                v325 = 0;
                v237 = &v304[v310];
                v238 = &v304[v310 + v236];
                do
                {
                  v317 = v237;
                  v239 = sub_15D3190(*(_QWORD *)v373, *v237);
                  v240 = v317;
                  if ( v239 )
                  {
                    v241 = v325;
                    v242 = *v317;
                    ++v325;
                    v243 = &v334[v241];
                    if ( *v317 )
                      ++*(_DWORD *)(v242 + 8);
                    v244 = *v243;
                    if ( *v243 )
                    {
                      v54 = (*(_DWORD *)(v244 + 8))-- == 1;
                      if ( v54 )
                      {
                        v305 = v317;
                        v320 = v242;
                        sub_15D7BC0(v308, v244);
                        v240 = v305;
                        v243 = &v334[v241];
                        v242 = v320;
                      }
                    }
                    *v243 = v242;
                  }
                  v237 = v240 + 1;
                }
                while ( v238 != v237 );
              }
              if ( v334 )
              {
                v245 = (unsigned __int64)&v334[*((unsigned int *)v334 - 1)];
                for ( j = &v334[v325]; (unsigned __int64)j < v245; ++j )
                {
                  v247 = *j;
                  if ( *j )
                  {
                    v54 = (*(_DWORD *)(v247 + 8))-- == 1;
                    if ( v54 )
                    {
                      v313 = v245;
                      v318 = j;
                      sub_15D7BC0(v308, v247);
                      v245 = v313;
                      j = v318;
                    }
                  }
                }
                *((_DWORD *)v334 - 1) = v325;
              }
            }
            else
            {
              v360 = *(_QWORD *)v373;
              v308 = *(_QWORD *)v373;
              v342 = nullptr;
              if ( v325 )
                goto LABEL_245;
              v334 = nullptr;
            }
            if ( (*(_BYTE *)(v349 + 8) & 2) == 0 )
            {
              v275 = v394;
              ++*(_DWORD *)(v166 + 8);
              if ( v275 )
              {
                v276 = v395;
                v54 = (*(_DWORD *)(v275 + 8))-- == 1;
                if ( v54 )
                  sub_15D7BC0(v276, v275);
              }
              v252 = v380;
              v394 = v166;
              v249 = v166;
              if ( !v380 )
                goto LABEL_345;
              goto LABEL_301;
            }
            v248 = sub_15DBA30(v373[0], v166, v322, (_DWORD)v342, v325, (_DWORD)v334, v300);
            v249 = v248;
            if ( v248 )
            {
              v250 = v394;
              ++*(_DWORD *)(v248 + 8);
              if ( v250 )
                goto LABEL_298;
              v394 = v248;
              v252 = v380;
              if ( !v380 )
              {
LABEL_345:
                ++*(_DWORD *)(v249 + 8);
                goto LABEL_346;
              }
LABEL_301:
              v253 = *(_DWORD *)(v349 + 12);
              v254 = (unsigned __int64)&v252[*((unsigned int *)v252 - 1)];
              v255 = &v252[v253];
              if ( (unsigned __int64)v255 < v254 )
              {
                do
                {
                  v256 = *v255;
                  if ( *v255 )
                  {
                    v257 = v379;
                    v54 = (*(_DWORD *)(v256 + 8))-- == 1;
                    if ( v54 )
                    {
                      v319 = v253;
                      v323 = v255;
                      v326 = v254;
                      sub_15D7BC0(v257, v256);
                      v253 = v319;
                      v255 = v323;
                      v254 = v326;
                    }
                  }
                  ++v255;
                }
                while ( (unsigned __int64)v255 < v254 );
                v252 = v380;
                v249 = v394;
                if ( !v380 )
                {
LABEL_344:
                  if ( v249 )
                    goto LABEL_345;
                  goto LABEL_374;
                }
              }
              v258 = v394;
              *((_DWORD *)v252 - 1) = v253;
              if ( v258 )
              {
                ++*(_DWORD *)(v258 + 8);
                v253 = *((_DWORD *)v252 - 1);
              }
              if ( *((_DWORD *)v252 - 2) == v253 )
              {
                v277 = (3 * v253 + 1) >> 1;
                v278 = 8 * v277 + 8;
                if ( 8 * v253 + 8 >= (unsigned int)v278 || v253 >= v277 )
                {
                  v23 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v363, "Overflow encountered when expanding vector");
                  *v23 = (char *)off_1C63128;
                  sub_2333C0(v23 + 1, v363);
                  sub_233E40((__int64)v363);
                  __cxa_throw(v23, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v324 = (3 * v253 + 1) >> 1;
                v328 = v258;
                v279 = (unsigned int *)sub_186B300(v252 - 1, v278);
                v252 = v279 + 2;
                v258 = v328;
                v280 = v279[1];
                v380 = v279 + 2;
                *v279 = v324;
                LODWORD(v279) = v280;
                v259 = &v252[v280];
                v260 = (_DWORD)v279 + 1;
              }
              else
              {
                v259 = &v252[*((unsigned int *)v252 - 1)];
                v260 = *((_DWORD *)v252 - 1) + 1;
              }
            }
            else
            {
              v250 = v394;
              if ( v394 )
              {
LABEL_298:
                v251 = v395;
                v54 = (*(_DWORD *)(v250 + 8))-- == 1;
                if ( v54 )
                {
                  v329 = v248;
                  sub_15D7BC0(v251, v250);
                  v249 = v329;
                }
                v252 = v380;
                v394 = v249;
                if ( v380 )
                  goto LABEL_301;
                goto LABEL_344;
              }
              v252 = v380;
              v394 = 0;
              if ( v380 )
                goto LABEL_301;
LABEL_374:
              v249 = 0;
LABEL_346:
              v327 = v249;
              v274 = (_QWORD *)sub_186B270(0x18u);
              *v274 = 2;
              v252 = v274 + 1;
              v260 = 1;
              v258 = v327;
              v380 = v252;
              v259 = v252;
            }
            *v259 = v258;
            *((_DWORD *)v252 - 1) = v260;
            if ( v389 )
              *(v389 - 1) -= v335;
            if ( v400 )
              *((_DWORD *)v400 - 1) -= v335;
            sub_15844D0(&v372);
            v261 = v394;
            if ( (*(_BYTE *)(v349 + 8) & 1) != 0 )
            {
              sub_1584390(&v372, v166, 0, v394);
              v261 = v394;
            }
            if ( v261 )
            {
              v262 = v395;
              v54 = (*(_DWORD *)(v261 + 8))-- == 1;
              if ( v54 )
                sub_15D7BC0(v262, v261);
            }
            v263 = v396;
            v394 = 0;
            if ( v396 && (v264 = v397, v54 = *(_DWORD *)(v396 + 8) == 1, --*(_DWORD *)(v396 + 8), v54) )
            {
              sub_15D7BC0(v264, v263);
              v265 = v394;
            }
            else
            {
              v265 = 0;
            }
            v266 = v378;
            v396 = 0;
            v267 = *(_DWORD *)(v378 - 4);
            *(_DWORD *)(v378 - 4) = v267 - 1;
            if ( v267 != 1 && v166 != v265 )
              *(_BYTE *)(v266 + 16LL * (unsigned int)(v267 - 2) + 8) |= 2u;
            if ( v334 )
            {
              v268 = v334;
              v269 = (unsigned __int64)&v334[*((unsigned int *)v334 - 1)];
              if ( (unsigned __int64)v334 < v269 )
              {
                do
                {
                  v270 = *v268;
                  if ( *v268 )
                  {
                    v54 = (*(_DWORD *)(v270 + 8))-- == 1;
                    if ( v54 )
                      sub_15D7BC0(v308, v270);
                  }
                  ++v268;
                }
                while ( (unsigned __int64)v268 < v269 );
              }
              sub_186B220(v334 - 1);
            }
            if ( v342 )
            {
              v271 = v342;
              v272 = (unsigned __int64)&v342[*((unsigned int *)v342 - 1)];
              if ( (unsigned __int64)v342 < v272 )
              {
                do
                {
                  v273 = *v271;
                  if ( *v271 )
                  {
                    v54 = (*(_DWORD *)(v273 + 8))-- == 1;
                    if ( v54 )
                      sub_15D7BC0(v309, v273);
                  }
                  ++v271;
                }
                while ( (unsigned __int64)v271 < v272 );
              }
              sub_186B220(v342 - 1);
            }
            continue;
          }
        }
LABEL_159:
        v143 = v380;
        v144 = 0x1FFFFFFFELL;
        if ( v380 )
          v144 = 2LL * (unsigned int)(*(v380 - 1) - 1);
        v145 = *(_QWORD *)&v380[v144];
        v146 = v145;
        if ( v145 )
          ++*(_DWORD *)(v145 + 8);
        v147 = v357;
        if ( v357 )
        {
          v148 = v358;
          v54 = (*(_DWORD *)(v357 + 8))-- == 1;
          if ( v54 )
          {
            sub_15D7BC0(v148, v147);
            v143 = v380;
          }
        }
        v149 = *(v143 - 1);
        v357 = v146;
        v150 = *(_QWORD *)&v143[2 * (v149 - 1)];
        *(v143 - 1) = v149 - 1;
        if ( v150 )
        {
          v151 = v379;
          v54 = (*(_DWORD *)(v150 + 8))-- == 1;
          if ( v54 )
            sub_15D7BC0(v151, v150);
        }
      }
LABEL_44:
      sub_14B9B80(v356, &v357);
      if ( v371 != -1 )
      {
        v63 = v357;
        v64 = *a5 + 16LL * v371;
        v65 = v64;
        if ( v357 )
          ++*(_DWORD *)(v357 + 8);
        v66 = *(_QWORD **)(v64 + 8);
        if ( v66 )
        {
          v67 = *((_DWORD *)v66 - 1);
          if ( v67 == *((_DWORD *)v66 - 2) )
          {
            v80 = (3 * v67 + 1) >> 1;
            v81 = 8 * v80 + 8;
            if ( 8 * v67 + 8 >= (unsigned int)v81 || v67 >= v80 )
            {
              v35 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)v363, "Overflow encountered when expanding vector");
              *v35 = (char *)off_1C63128;
              sub_2333C0(v35 + 1, v363);
              sub_233E40((__int64)v363);
              __cxa_throw(v35, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v338 = v63;
            v347 = (3 * v67 + 1) >> 1;
            v82 = (unsigned int *)sub_186B300(v66 - 1, v81);
            v83 = v82[1];
            v66 = v82 + 2;
            *(_QWORD *)(v65 + 8) = v82 + 2;
            v63 = v338;
            *v82 = v347;
            LODWORD(v82) = v83;
            v70 = &v66[v83];
            v69 = (_DWORD)v82 + 1;
          }
          else
          {
            v68 = v67;
            v69 = v67 + 1;
            v70 = &v66[v68];
          }
        }
        else
        {
          v350 = v63;
          v168 = (_QWORD *)sub_186B270(0x18u);
          v66 = v168 + 1;
          *v168 = 2;
          v63 = v350;
          v69 = 1;
          *(_QWORD *)(v65 + 8) = v66;
          v70 = v66;
        }
        *v70 = v63;
        *((_DWORD *)v66 - 1) = v69;
      }
      v71 = v357;
      if ( v357 )
      {
        v72 = v358;
        v54 = (*(_DWORD *)(v357 + 8))-- == 1;
        if ( v54 )
          sub_15D7BC0(v72, v71);
      }
      ++v48;
    }
  }
  sub_14B63F0(v356);
  v372 = &off_1C4E8E8;
  if ( v400 )
    sub_186B220(v400 - 1);
  v73 = v398;
  if ( v398 )
  {
    v74 = v399;
    v54 = (*(_DWORD *)(v398 + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v74, v73);
  }
  v75 = v396;
  if ( v396 )
  {
    v76 = v397;
    v54 = (*(_DWORD *)(v396 + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v76, v75);
  }
  v77 = v394;
  if ( v394 )
  {
    v78 = v395;
    v54 = (*(_DWORD *)(v394 + 8))-- == 1;
    if ( v54 )
      sub_15D7BC0(v78, v77);
  }
  v392[0] = &qword_1C637E8;
  sub_15841B0(v392);
  v390[0] = &qword_1C637E8;
  sub_15841B0(v390);
  if ( v389 )
    sub_186B220(v389 - 2);
  sub_15841B0(&v372);
  sub_13606C0(v369);
  if ( ptr[0] )
    sub_186B220(ptr[0]);
  *(_DWORD *)(v337 + 712) = v336;
  return v337;
}

