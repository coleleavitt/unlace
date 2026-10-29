__int64 __fastcall sub_5502E0(__int64 a1)
{
  char **v1; // rax
  char **v2; // r15
  __int64 *v3; // r13
  __int64 *v4; // rsi
  char **v5; // rax
  char **v6; // r15
  __int64 *v7; // r14
  __int64 *v8; // rsi
  char **v9; // rax
  char **v10; // r15
  __int64 *v11; // r12
  __int64 *v12; // rsi
  char **v13; // rax
  char **v14; // r15
  __int64 *v15; // r13
  __int64 *v16; // rsi
  char **v17; // rax
  char **v18; // r15
  __int64 *v19; // r13
  __int64 *v20; // rsi
  char **v21; // rax
  char **v22; // r15
  __int64 *v23; // r14
  __int64 *v24; // rsi
  char **v25; // rax
  char **v26; // r12
  __int64 *v27; // r15
  __int64 *v28; // rsi
  char **v29; // rax
  char **v30; // r15
  __int64 *v31; // r14
  __int64 *v32; // rsi
  char **exception; // rax
  char **v34; // r15
  __int64 *v35; // r14
  __int64 *v36; // rsi
  char **v37; // r15
  __int64 *v38; // r14
  __int64 *v39; // rsi
  char **v40; // rax
  char **v41; // r15
  __int64 *v42; // r14
  __int64 *v43; // rsi
  char **v44; // rax
  char **v45; // r15
  __int64 *v46; // r14
  __int64 *v47; // rsi
  __int64 v49; // rax
  _QWORD *v50; // rbx
  _QWORD *v51; // rdi
  _QWORD *v52; // rax
  __int64 **v53; // rbx
  __int64 *v54; // rdi
  __int64 v55; // r13
  unsigned int v56; // eax
  __int64 **v57; // r14
  __int64 *v58; // rdx
  __int64 *v59; // rsi
  bool v60; // zf
  __int64 v61; // rsi
  __int64 v62; // rbx
  unsigned int v63; // r14d
  _QWORD *v64; // rdx
  unsigned int v65; // r8d
  size_t v66; // rsi
  _DWORD *v67; // rax
  unsigned int v68; // ecx
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  _QWORD *v72; // rcx
  _QWORD *v73; // rdx
  int v74; // edi
  _QWORD *v75; // rax
  __m128i v76; // xmm0
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // eax
  __int64 **v80; // rcx
  __int64 *v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 *v85; // rdx
  unsigned int v86; // eax
  unsigned int v87; // ecx
  size_t v88; // rsi
  unsigned int *v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // r14
  unsigned int v93; // eax
  __int64 v94; // rdx
  int v95; // eax
  _QWORD *v96; // rdx
  _QWORD *v97; // rax
  __int64 **v98; // rax
  __int64 *v99; // r13
  __int64 **v100; // r14
  __int64 **v101; // r12
  __int64 *v102; // rsi
  __int64 v103; // rax
  __int64 v104; // r12
  __int64 v105; // rax
  __int64 v106; // r12
  unsigned int v107; // eax
  __int64 v108; // rdx
  int v109; // eax
  __int64 *v110; // rdx
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // r14
  unsigned int v114; // eax
  __int64 v115; // rdx
  int v116; // eax
  __int64 *v117; // rdx
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rax
  int v121; // ecx
  int v122; // r8d
  int v123; // r9d
  __int64 v124; // rax
  _QWORD *v125; // rdx
  unsigned int v126; // r12d
  __int64 v127; // rcx
  int v128; // eax
  void **v129; // rcx
  _DWORD *v130; // rax
  _QWORD *v131; // rcx
  unsigned int v132; // eax
  __int64 v133; // rsi
  int v134; // eax
  void **v135; // rsi
  _DWORD *v136; // rax
  unsigned int v137; // eax
  unsigned int v138; // r8d
  unsigned int v139; // ecx
  _DWORD *v140; // rax
  __int64 v141; // rcx
  int v142; // r8d
  _QWORD *v143; // rax
  _QWORD *v144; // rax
  unsigned int v145; // r13d
  size_t v146; // rsi
  unsigned int *v147; // rax
  __int64 v148; // rdx
  _QWORD *v149; // rax
  _QWORD *v150; // rdx
  int v151; // ecx
  __int64 v152; // rax
  unsigned int v153; // edx
  unsigned int v154; // ecx
  unsigned int v155; // r14d
  unsigned int *v156; // rax
  __int64 v157; // rdx
  unsigned int v158; // r13d
  unsigned int v159; // edx
  unsigned int *v160; // rax
  __int64 v161; // rdx
  unsigned int v162; // r12d
  unsigned int v163; // edx
  unsigned int *v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  unsigned int v167; // edx
  unsigned int v168; // r8d
  __m128i *v169; // r12
  int v170; // r10d
  __int64 v171; // r9
  __m128i *v172; // r13
  int v173; // esi
  __int64 v174; // r10
  __m128i *v175; // rdi
  int v176; // r10d
  __m128i *v177; // rax
  __m128i *v178; // r8
  __int64 v179; // rdx
  __int64 v180; // rax
  __int32 v181; // ecx
  _QWORD *v182; // rdx
  unsigned __int64 v183; // r11
  __int64 v184; // rax
  __int32 *v185; // rax
  __int64 v186; // rdx
  unsigned int v187; // eax
  __m128i *v188; // r12
  int v189; // r10d
  __int64 v190; // r8
  __m128i *v191; // r13
  int v192; // esi
  __int64 v193; // r10
  __m128i *v194; // rdi
  __m128i *v195; // rax
  __m128i *v196; // r8
  __int64 v197; // rdx
  __int64 v198; // rax
  __int64 v199; // rax
  int v200; // edx
  unsigned int v201; // r13d
  _QWORD *v202; // rcx
  unsigned int v203; // eax
  unsigned int v204; // eax
  int v205; // eax
  unsigned int v206; // edx
  unsigned int v207; // esi
  int v208; // eax
  unsigned int v209; // r12d
  __int64 v210; // rax
  unsigned int *v211; // rax
  _QWORD *v212; // r13
  unsigned __int64 v213; // r12
  __int64 v214; // rsi
  __int64 v215; // rdi
  __int64 *v216; // rdi
  __int64 *v217; // r12
  __int64 *v218; // rax
  char *v219; // r13
  __int64 *v220; // rcx
  __int64 **v221; // rax
  __int64 *v222; // rsi
  __int64 v223; // rsi
  __int64 v224; // rdi
  _DWORD *v225; // rax
  void *v226; // rdx
  unsigned int v227; // eax
  char *v228; // rsi
  int v229; // ecx
  __int64 *v230; // rax
  __int64 v231; // rdi
  __int64 v232; // rax
  int v233; // ecx
  int v234; // r8d
  int v235; // r9d
  __int64 v236; // rax
  unsigned __int64 v237; // r12
  __int64 v238; // rsi
  _QWORD *v239; // rax
  unsigned int v240; // edx
  unsigned int v241; // ecx
  unsigned int *v242; // rax
  unsigned int v243; // r12d
  size_t v244; // rsi
  unsigned int *v245; // rax
  __int64 v246; // rax
  __int64 v247; // r13
  __m128i *v248; // rax
  int v249; // r8d
  int v250; // edi
  __m128i *v251; // rdx
  const __m128i *v252; // r11
  __m128i *v253; // rax
  __int64 v254; // rdx
  __m128i *v255; // rsi
  int v256; // edi
  __m128i *v257; // rdx
  __m128i v258; // xmm0
  unsigned int v259; // ecx
  size_t v260; // rsi
  _DWORD *v261; // rax
  __int64 v262; // rcx
  std::ostream *v263; // rdi
  __int64 v264; // rax
  std::ostream *v265; // rdi
  __int64 v266; // rax
  std::ostream *v267; // rdi
  __int64 v268; // rax
  __int64 v269; // rax
  unsigned int i; // r13d
  std::ostream *v271; // rdi
  __int64 v272; // rax
  __int64 v273; // rax
  __int64 *v274; // rdi
  __int64 v275; // rax
  std::ostream *v276; // rdi
  __int64 v277; // rax
  std::ostream *v278; // rdi
  __int64 v279; // rax
  unsigned __int64 v280; // r13
  _QWORD *v281; // rax
  unsigned __int64 v282; // rax
  unsigned __int64 v283; // rdx
  _BYTE *v284; // rsi
  size_t v285; // r13
  void *v286; // r15
  __int64 v287; // rsi
  __int64 v288; // rdi
  _QWORD *v289; // rcx
  __int64 v290; // rax
  _QWORD *v291; // r12
  _QWORD *v292; // r15
  _QWORD *v293; // rcx
  unsigned __int64 v294; // r12
  __int64 *v295; // r15
  __int64 v296; // rsi
  __int64 v297; // rdi
  _QWORD *v298; // rcx
  __int64 v299; // rax
  _QWORD *v300; // r12
  _QWORD *v301; // r15
  _QWORD *v302; // rcx
  unsigned __int64 v303; // r12
  __int64 *v304; // r15
  __int64 v305; // rsi
  __int64 v306; // rdi
  __int64 result; // rax
  __int64 **v308; // r12
  __int64 v309; // r13
  __int64 **v310; // r15
  __int64 *v311; // rsi
  __int64 *v312; // rbx
  __int64 v313; // rax
  unsigned __int64 v314; // r15
  __int64 v315; // rsi
  __int32 v316; // eax
  _QWORD *v317; // rdx
  _QWORD *v318; // rcx
  _QWORD *v319; // rax
  __int64 v320; // r13
  __m128i *v321; // rax
  int v322; // edi
  __m128i *v323; // rdx
  const __m128i *v324; // r9
  __m128i *v325; // rax
  __int64 v326; // rdx
  __m128i *v327; // rsi
  int v328; // edi
  __m128i *v329; // rdx
  __m128i v330; // xmm0
  int v331; // eax
  _QWORD *v332; // rdx
  _QWORD *v333; // rax
  _QWORD *v334; // rax
  __int32 v335; // eax
  __int64 v336; // r12
  unsigned __int64 v337; // rdi
  void *v338; // rax
  size_t v339; // r13
  _BYTE *v340; // rsi
  _BYTE *v341; // rax
  __int64 v342; // rax
  __int64 v343; // r12
  unsigned __int64 v344; // rdi
  __int64 v345; // [rsp+8h] [rbp-1D8h]
  _QWORD *v346; // [rsp+18h] [rbp-1C8h]
  _QWORD *v347; // [rsp+20h] [rbp-1C0h]
  __int64 v348; // [rsp+28h] [rbp-1B8h]
  __int64 *v349; // [rsp+38h] [rbp-1A8h]
  unsigned __int64 v350; // [rsp+48h] [rbp-198h]
  __int64 *v351; // [rsp+50h] [rbp-190h]
  __int64 v352; // [rsp+50h] [rbp-190h]
  unsigned int v353; // [rsp+58h] [rbp-188h]
  __int64 v354; // [rsp+58h] [rbp-188h]
  __int64 v355; // [rsp+58h] [rbp-188h]
  __int64 v356; // [rsp+58h] [rbp-188h]
  __int64 v357; // [rsp+58h] [rbp-188h]
  __int64 *v358; // [rsp+60h] [rbp-180h]
  __int64 *v359; // [rsp+60h] [rbp-180h]
  unsigned int v360; // [rsp+60h] [rbp-180h]
  int v361; // [rsp+60h] [rbp-180h]
  __int32 v362; // [rsp+60h] [rbp-180h]
  int v363; // [rsp+60h] [rbp-180h]
  __m128i v364; // [rsp+68h] [rbp-178h] BYREF
  __int64 *v365; // [rsp+78h] [rbp-168h]
  void *src; // [rsp+80h] [rbp-160h]
  unsigned __int64 v367; // [rsp+88h] [rbp-158h]
  char *v368; // [rsp+90h] [rbp-150h]
  void *dest; // [rsp+98h] [rbp-148h]
  char v370; // [rsp+A5h] [rbp-13Bh]
  char v371; // [rsp+A6h] [rbp-13Ah]
  char v372; // [rsp+A7h] [rbp-139h]
  char v373; // [rsp+A8h] [rbp-138h]
  char v374; // [rsp+A9h] [rbp-137h]
  char v375; // [rsp+AAh] [rbp-136h]
  char v376; // [rsp+ABh] [rbp-135h]
  int v377; // [rsp+ACh] [rbp-134h] BYREF
  __int64 v378; // [rsp+B0h] [rbp-130h]
  __int64 v379; // [rsp+C0h] [rbp-120h]
  __int64 v380; // [rsp+C8h] [rbp-118h]
  __m128i v381; // [rsp+D0h] [rbp-110h] BYREF
  __int64 *v382; // [rsp+E0h] [rbp-100h] BYREF
  __int64 v383; // [rsp+E8h] [rbp-F8h]
  __int64 v384; // [rsp+F0h] [rbp-F0h] BYREF
  __int64 v385; // [rsp+F8h] [rbp-E8h]
  __int64 v386; // [rsp+100h] [rbp-E0h] BYREF
  __int64 v387; // [rsp+108h] [rbp-D8h]
  void *v388; // [rsp+110h] [rbp-D0h] BYREF
  size_t v389; // [rsp+118h] [rbp-C8h]
  _QWORD v390[2]; // [rsp+120h] [rbp-C0h] BYREF
  char v391[8]; // [rsp+130h] [rbp-B0h] BYREF
  _QWORD *v392; // [rsp+138h] [rbp-A8h]
  int v393; // [rsp+140h] [rbp-A0h]
  unsigned int v394; // [rsp+144h] [rbp-9Ch]
  int v395; // [rsp+148h] [rbp-98h]
  __int64 v396; // [rsp+150h] [rbp-90h]
  __int64 v397; // [rsp+158h] [rbp-88h]
  _QWORD *v398; // [rsp+160h] [rbp-80h]
  __int64 v399; // [rsp+168h] [rbp-78h]
  __int64 v400; // [rsp+170h] [rbp-70h]
  _QWORD *v401; // [rsp+178h] [rbp-68h]
  __int64 v402; // [rsp+188h] [rbp-58h]
  _QWORD *v403; // [rsp+190h] [rbp-50h]
  _QWORD *v404; // [rsp+198h] [rbp-48h]

  v49 = *(_QWORD *)(a1 + 24);
  v380 = 0;
  v348 = v49 + 16;
  v345 = *(_QWORD *)(a1 + 16);
  v378 = v345;
  v379 = v345;
  v368 = v391;
  sub_FA3A80(v391, v345);
  v50 = *(_QWORD **)(*(_QWORD *)a1 + 32LL);
  v51 = &v50[2 * *(unsigned int *)(*(_QWORD *)a1 + 40LL)];
  v52 = *(_QWORD **)(*(_QWORD *)a1 + 32LL);
  v346 = v51;
  if ( v51 == v50 )
    goto LABEL_450;
  while ( *v52 <= 1u )
  {
    v52 += 2;
    if ( v51 == v52 )
      goto LABEL_450;
  }
  v347 = v52;
  if ( v51 == v52 )
  {
LABEL_450:
    v53 = *(__int64 ***)(a1 + 8);
    if ( !v53 )
    {
      v118 = *(_QWORD *)(a1 + 16);
      v350 = 0;
      v364.m128i_i64[0] = v345;
      goto LABEL_95;
    }
    v99 = *v53;
    if ( !*v53 )
    {
      v118 = *(_QWORD *)(a1 + 16);
      v53 = nullptr;
      v350 = 0;
      v364.m128i_i64[0] = v345;
      goto LABEL_95;
    }
    v342 = *((unsigned int *)v99 - 1);
    v350 = 0;
    v364.m128i_i64[0] = v345;
    v53 = nullptr;
    src = &v99[3 * v342];
    if ( src == v99 )
    {
      v118 = *(_QWORD *)(a1 + 16);
      goto LABEL_95;
    }
  }
  else
  {
    v53 = nullptr;
    v350 = 0;
    v364.m128i_i64[0] = v345;
    do
    {
      v54 = *(__int64 **)v347[1];
      v351 = v54;
      if ( v54 )
      {
        v349 = &v54[*((unsigned int *)v54 - 1)];
        if ( v349 != v54 )
        {
          while ( 1 )
          {
            v55 = *v351;
            v56 = *(_DWORD *)(*v351 + 64);
            LODWORD(dest) = v56;
            if ( v56 > 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              v367 = (unsigned __int64)&v388;
              v34 = exception;
              sub_24ABB0((__int64 *)&v388, "non-linear clauses not supported");
              v35 = (__int64 *)v367;
              v36 = (__int64 *)v367;
              *v34 = (char *)off_1C63128;
              sub_2333C0(v34 + 1, v36);
              sub_233E40((__int64)v35);
              __cxa_throw(v34, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            if ( *(_DWORD *)(v55 + 68) != v56 )
            {
              v29 = (char **)__cxa_allocate_exception(0x28u);
              v367 = (unsigned __int64)&v388;
              v30 = v29;
              sub_24ABB0((__int64 *)&v388, "negation of queries not supported");
              v31 = (__int64 *)v367;
              v32 = (__int64 *)v367;
              *v30 = (char *)off_1C63128;
              sub_2333C0(v30 + 1, v32);
              sub_233E40((__int64)v31);
              __cxa_throw(v30, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            if ( v53 )
            {
              v57 = v53;
              v58 = (__int64 *)&v53[*((unsigned int *)v53 - 1)];
              if ( v53 < (__int64 **)v58 )
              {
                do
                {
                  while ( 1 )
                  {
                    v59 = *v57;
                    if ( *v57 )
                    {
                      v60 = (*((_DWORD *)v59 + 2))-- == 1;
                      if ( v60 )
                        break;
                    }
                    if ( ++v57 >= (__int64 **)v58 )
                      goto LABEL_18;
                  }
                  v367 = (unsigned __int64)v58;
                  sub_15D7BC0(v364.m128i_i64[0], v59);
                  v58 = (__int64 *)v367;
                  ++v57;
                }
                while ( (unsigned __int64)v57 < v367 );
              }
LABEL_18:
              *((_DWORD *)v53 - 1) = 0;
            }
            v61 = 0;
            if ( (_DWORD)dest )
              v61 = *(_QWORD *)((*(_QWORD *)(v55 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
            v381.m128i_i64[1] = (__int64)v53;
            v381.m128i_i64[0] = v364.m128i_i64[0];
            sub_54EE10(a1, v61, a1 + 192, (__int64)&v381);
            sub_54EE10(a1, *(_QWORD *)(*(_QWORD *)(v55 + 40) + 16LL), a1 + 208, (__int64)&v381);
            v62 = v381.m128i_i64[1];
            v364.m128i_i64[0] = v381.m128i_i64[0];
            sub_FA3BF0(v368);
            v63 = sub_648530(v348, v55) + 1;
            if ( !v393 )
              break;
            if ( v394 < v63 )
            {
              v64 = v392;
              if ( v392 )
                goto LABEL_24;
LABEL_115:
              v144 = (_QWORD *)sub_186B270(0x38u);
              v64 = v144 + 1;
              LODWORD(src) = 0;
              v392 = v144 + 1;
              *v144 = 2;
LABEL_29:
              while ( 1 )
              {
                v68 = *((_DWORD *)v64 - 2);
                if ( v68 >= v63 )
                  break;
                v65 = (3 * v68 + 1) >> 1;
                v66 = 8 * (v65 + ((3 * v68 + 1) & 0xFFFFFFFE)) + 8;
                if ( 24 * v68 + 8 >= (unsigned int)v66 || v68 >= v65 )
                {
                  v44 = (char **)__cxa_allocate_exception(0x28u);
                  v367 = (unsigned __int64)&v388;
                  v45 = v44;
                  sub_24ABB0((__int64 *)&v388, "Overflow encountered when expanding vector");
                  v46 = (__int64 *)v367;
                  v47 = (__int64 *)v367;
                  *v45 = (char *)off_1C63128;
                  sub_2333C0(v45 + 1, v47);
                  sub_233E40((__int64)v46);
                  __cxa_throw(v45, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                LODWORD(v367) = (3 * v68 + 1) >> 1;
                v67 = (_DWORD *)sub_186B300(v64 - 1, v66);
                v64 = v67 + 2;
                v392 = v67 + 2;
                *v67 = v367;
              }
              v69 = (unsigned int)src;
              *((_DWORD *)v64 - 1) = v63;
              v70 = 24 * v69;
              v71 = 24LL * v63;
              v72 = &v64[(unsigned __int64)v70 / 8];
              v73 = &v64[(unsigned __int64)v71 / 8];
              if ( v70 != v71 )
              {
                v74 = (int)dest;
                v75 = v72;
                do
                {
                  *v75 = 0;
                  v75 += 3;
                  *((_DWORD *)v75 - 2) = 0;
                }
                while ( v73 != v75 );
                LODWORD(dest) = v74;
                if ( (((_BYTE)v73 - (_BYTE)v72) & 8) == 0 || (*((_DWORD *)v72 + 2) = 0, v72 += 3, v73 != v72) )
                {
                  do
                  {
                    *((_DWORD *)v72 + 2) = 0;
                    v72 += 6;
                    *((_DWORD *)v72 - 4) = 0;
                  }
                  while ( v73 != v72 );
                  LODWORD(dest) = v74;
                }
              }
              goto LABEL_37;
            }
LABEL_38:
            if ( ++v395 == -1 )
            {
              v149 = v392;
              if ( v392 )
              {
                v150 = &v392[3 * *((unsigned int *)v392 - 1)];
                if ( v392 != v150 )
                {
                  if ( ((24 * (unsigned __int8)*((_DWORD *)v392 - 1)) & 8) == 0
                    || (*((_DWORD *)v392 + 4) = 0, v149 += 3, v150 != v149) )
                  {
                    v151 = (int)dest;
                    do
                    {
                      *((_DWORD *)v149 + 4) = 0;
                      v149 += 6;
                      *((_DWORD *)v149 - 2) = 0;
                    }
                    while ( v150 != v149 );
                    LODWORD(dest) = v151;
                  }
                }
              }
              v395 = 1;
            }
            if ( (_DWORD)dest )
            {
              sub_54E950(a1, (__int64)v368, *(_QWORD *)(v55 + 80) & 0xFFFFFFFFFFFFFFF8LL, a1 + 160, (__int64)&v381);
              v76 = _mm_load_si128(&v381);
            }
            else
            {
              v76 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v364), (__m128i)(unsigned __int64)v62);
            }
            v77 = *(_QWORD *)(v55 + 40);
            v381 = v76;
            sub_54E950(a1, (__int64)v368, v77, a1 + 176, (__int64)&v381);
            v53 = (__int64 **)v381.m128i_i64[1];
            v364.m128i_i64[0] = v381.m128i_i64[0];
            if ( (unsigned int)dest >= *(_DWORD *)(v55 + 56) )
            {
              v90 = *(_QWORD *)(a1 + 16);
            }
            else
            {
              v365 = &v386;
              v367 = (unsigned __int64)&v388;
              src = &v384;
              v364.m128i_i64[1] = (__int64)&v377;
              do
              {
                v83 = *(_QWORD *)(a1 + 16);
                v382 = nullptr;
                v383 = v83;
                v84 = *(_QWORD *)(v55 + 8LL * (unsigned int)dest + 80);
                v384 = 0;
                v386 = 0;
                v377 = 0;
                v388 = (void *)(v84 & 0xFFFFFFFFFFFFFFF8LL);
                LODWORD(v389) = 0;
                LODWORD(v385) = 0;
                LODWORD(v387) = 0;
                sub_FA4800((_DWORD)v368, 1, v364.m128i_i32[2], v367, (_DWORD)v365, (_DWORD)src, (__int64)&v382);
                v85 = v382;
                if ( v382 )
                  ++*((_DWORD *)v382 + 2);
                if ( v53 )
                {
                  v86 = *((_DWORD *)v53 - 1);
                  if ( v86 == *((_DWORD *)v53 - 2) )
                  {
                    v87 = (3 * v86 + 1) >> 1;
                    v88 = 8 * v87 + 8;
                    if ( 8 * v86 + 8 >= (unsigned int)v88 || v86 >= v87 )
                    {
                      v37 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v367, "Overflow encountered when expanding vector");
                      v38 = (__int64 *)v367;
                      v39 = (__int64 *)v367;
                      *v37 = (char *)off_1C63128;
                      sub_2333C0(v37 + 1, v39);
                      sub_233E40((__int64)v38);
                      __cxa_throw(
                        v37,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v353 = (3 * v86 + 1) >> 1;
                    v358 = v85;
                    v89 = (unsigned int *)sub_186B300(v53 - 1, v88);
                    v53 = (__int64 **)(v89 + 2);
                    v85 = v358;
                    *v89 = v353;
                    LODWORD(v89) = v89[1];
                    v80 = &v53[(unsigned int)v89];
                    v79 = (_DWORD)v89 + 1;
                  }
                  else
                  {
                    v78 = v86;
                    v79 = v86 + 1;
                    v80 = &v53[v78];
                  }
                }
                else
                {
                  v359 = v85;
                  v143 = (_QWORD *)sub_186B270(0x18u);
                  v85 = v359;
                  *v143 = 2;
                  v53 = (__int64 **)(v143 + 1);
                  v79 = 1;
                  v80 = v53;
                }
                *v80 = v85;
                v81 = v382;
                *((_DWORD *)v53 - 1) = v79;
                if ( v81 )
                {
                  v82 = v383;
                  v60 = (*((_DWORD *)v81 + 2))-- == 1;
                  if ( v60 )
                    sub_15D7BC0(v82, v81);
                }
                LODWORD(dest) = (_DWORD)dest + 1;
              }
              while ( (unsigned int)dest < *(_DWORD *)(v55 + 56) );
              v90 = *(_QWORD *)(a1 + 16);
            }
            v91 = sub_15E1AF0(v90);
            v92 = v91;
            if ( v91 )
              ++*(_DWORD *)(v91 + 8);
            if ( v350 )
            {
              v93 = *(_DWORD *)(v350 - 4);
              if ( v93 == *(_DWORD *)(v350 - 8) )
              {
                v145 = (3 * v93 + 1) >> 1;
                v146 = 8 * v145 + 8;
                if ( 8 * v93 + 8 >= (unsigned int)v146 || v93 >= v145 )
                {
                  v40 = (char **)__cxa_allocate_exception(0x28u);
                  v367 = (unsigned __int64)&v388;
                  v41 = v40;
                  sub_24ABB0((__int64 *)&v388, "Overflow encountered when expanding vector");
                  v42 = (__int64 *)v367;
                  v43 = (__int64 *)v367;
                  *v41 = (char *)off_1C63128;
                  sub_2333C0(v41 + 1, v43);
                  sub_233E40((__int64)v42);
                  __cxa_throw(v41, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v147 = (unsigned int *)sub_186B300((void *)(v350 - 8), v146);
                v148 = v147[1];
                *v147 = v145;
                v350 = (unsigned __int64)(v147 + 2);
                LODWORD(v147) = v148;
                v96 = (_QWORD *)(v350 + 8 * v148);
                v95 = (_DWORD)v147 + 1;
              }
              else
              {
                v94 = v93;
                v95 = v93 + 1;
                v96 = (_QWORD *)(v350 + 8 * v94);
              }
            }
            else
            {
              v152 = sub_186B270(0x18u) + 8;
              *(_QWORD *)(v152 - 8) = 2;
              v96 = (_QWORD *)v152;
              v350 = v152;
              v95 = 1;
            }
            ++v351;
            *v96 = v92;
            *(_DWORD *)(v350 - 4) = v95;
            if ( v349 == v351 )
              goto LABEL_62;
          }
          v64 = v392;
          if ( v392 )
          {
LABEL_24:
            LODWORD(src) = *((_DWORD *)v64 - 1);
            if ( (unsigned int)src < v63 )
              goto LABEL_29;
            *((_DWORD *)v64 - 1) = v63;
          }
          else if ( v63 )
          {
            goto LABEL_115;
          }
LABEL_37:
          v394 = v63;
          v393 = 1;
          goto LABEL_38;
        }
      }
LABEL_62:
      v97 = v347 + 2;
      if ( v346 == v347 + 2 )
        break;
      while ( *v97 <= 1u )
      {
        v97 += 2;
        if ( v346 == v97 )
          goto LABEL_67;
      }
      v347 = v97;
    }
    while ( v346 != v97 );
LABEL_67:
    v98 = *(__int64 ***)(a1 + 8);
    if ( !v98 || (v99 = *v98) == nullptr || (src = &v99[3 * *((unsigned int *)v99 - 1)], src == v99) )
    {
      v118 = *(_QWORD *)(a1 + 16);
      goto LABEL_95;
    }
  }
  do
  {
    if ( v53 )
    {
      v100 = v53;
      v101 = &v53[*((unsigned int *)v53 - 1)];
      if ( v53 < v101 )
      {
        do
        {
          while ( 1 )
          {
            v102 = *v100;
            if ( *v100 )
            {
              v60 = (*((_DWORD *)v102 + 2))-- == 1;
              if ( v60 )
                break;
            }
            if ( ++v100 >= v101 )
              goto LABEL_77;
          }
          sub_15D7BC0(v364.m128i_i64[0], v102);
          ++v100;
        }
        while ( v100 < v101 );
      }
LABEL_77:
      *((_DWORD *)v53 - 1) = 0;
    }
    v381.m128i_i64[1] = (__int64)v53;
    v381.m128i_i64[0] = v364.m128i_i64[0];
    sub_54EE10(a1, 0, a1 + 192, (__int64)&v381);
    sub_54EE10(a1, *v99, a1 + 208, (__int64)&v381);
    v53 = (__int64 **)v381.m128i_i64[1];
    v364.m128i_i64[0] = v381.m128i_i64[0];
    v103 = v99[2];
    if ( v103 )
    {
      LODWORD(dest) = 0;
      while ( 1 )
      {
        v104 = *(_QWORD *)(a1 + 16);
        if ( (unsigned int)dest >= *(_DWORD *)(v103 - 4) )
          break;
        v367 = *(_QWORD *)(v103 + 8LL * (unsigned int)dest);
        sub_54E6A0(a1, (unsigned int)dest);
        v105 = sub_15E1B70(v104);
        v106 = v105;
        if ( v105 )
          ++*(_DWORD *)(v105 + 8);
        if ( v53 )
        {
          v107 = *((_DWORD *)v53 - 1);
          if ( v107 == *((_DWORD *)v53 - 2) )
          {
            v153 = (3 * v107 + 1) >> 1;
            v154 = 8 * v153 + 8;
            v155 = v153;
            if ( 8 * v107 + 8 >= v154 || v107 >= v153 )
            {
              v21 = (char **)__cxa_allocate_exception(0x28u);
              v367 = (unsigned __int64)&v388;
              v22 = v21;
              sub_24ABB0((__int64 *)&v388, "Overflow encountered when expanding vector");
              v23 = (__int64 *)v367;
              v24 = (__int64 *)v367;
              *v22 = (char *)off_1C63128;
              sub_2333C0(v22 + 1, v24);
              sub_233E40((__int64)v23);
              __cxa_throw(v22, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v156 = (unsigned int *)sub_186B300(v53 - 1, v154);
            v157 = v156[1];
            v53 = (__int64 **)(v156 + 2);
            *v156 = v155;
            LODWORD(v156) = v157;
            v110 = (__int64 *)&v53[v157];
            v109 = (_DWORD)v156 + 1;
          }
          else
          {
            v108 = v107;
            v109 = v107 + 1;
            v110 = (__int64 *)&v53[v108];
          }
        }
        else
        {
          v239 = (_QWORD *)sub_186B270(0x18u);
          v53 = (__int64 **)(v239 + 1);
          *v239 = 2;
          v110 = v239 + 1;
          v109 = 1;
        }
        *v110 = v106;
        *((_DWORD *)v53 - 1) = v109;
        v103 = v99[2];
        LODWORD(dest) = (_DWORD)dest + 1;
        if ( !v103 )
        {
          v111 = *(_QWORD *)(a1 + 16);
          goto LABEL_88;
        }
      }
    }
    else
    {
      v104 = *(_QWORD *)(a1 + 16);
    }
    LODWORD(v111) = v104;
LABEL_88:
    v112 = sub_15E1AF0(v111);
    v113 = v112;
    if ( v112 )
      ++*(_DWORD *)(v112 + 8);
    if ( v350 )
    {
      v114 = *(_DWORD *)(v350 - 4);
      if ( v114 == *(_DWORD *)(v350 - 8) )
      {
        v162 = (3 * v114 + 1) >> 1;
        v163 = 8 * v162 + 8;
        if ( 8 * v114 + 8 >= v163 || v114 >= v162 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          v367 = (unsigned __int64)&v388;
          v6 = v5;
          sub_24ABB0((__int64 *)&v388, "Overflow encountered when expanding vector");
          v7 = (__int64 *)v367;
          v8 = (__int64 *)v367;
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v8);
          sub_233E40((__int64)v7);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v164 = (unsigned int *)sub_186B300((void *)(v350 - 8), v163);
        v165 = v164[1];
        *v164 = v162;
        v350 = (unsigned __int64)(v164 + 2);
        LODWORD(v164) = v165;
        v117 = (__int64 *)(v350 + 8 * v165);
        v116 = (_DWORD)v164 + 1;
      }
      else
      {
        v115 = v114;
        v116 = v114 + 1;
        v117 = (__int64 *)(v350 + 8 * v115);
      }
    }
    else
    {
      v332 = (_QWORD *)sub_186B270(0x18u);
      *v332 = 2;
      v116 = 1;
      v117 = v332 + 1;
      v350 = (unsigned __int64)v117;
    }
    *v117 = v113;
    v99 += 3;
    *(_DWORD *)(v350 - 4) = v116;
  }
  while ( v99 != src );
  v118 = *(_QWORD *)(a1 + 16);
LABEL_95:
  v119 = sub_15E1AF0(v118);
  v352 = a1 + 32;
  sub_DA5410(&v382, a1 + 32, v119);
  v120 = *(_QWORD *)(a1 + 16);
  v384 = 0;
  v385 = v120;
  src = &v384;
  sub_DA3D80(a1 + 32, (unsigned int)&v382, (unsigned int)&v384, v121, v122, v123);
  v124 = *(_QWORD *)(a1 + 200);
  v125 = *(_QWORD **)(a1 + 168);
  if ( v124 )
  {
    v126 = 0;
    do
    {
      if ( v126 >= *(_DWORD *)(v124 - 4) )
        break;
      v136 = *(_DWORD **)(v124 + 8LL * v126);
      dest = v136;
      if ( v136 )
        ++v136[2];
      if ( v125 )
      {
        v137 = *((_DWORD *)v125 - 1);
        if ( v137 == *((_DWORD *)v125 - 2) )
        {
          v138 = (3 * v137 + 1) >> 1;
          v139 = 8 * v138 + 8;
          if ( 8 * v137 + 8 >= v139 || v137 >= v138 )
          {
            v13 = (char **)__cxa_allocate_exception(0x28u);
            v367 = (unsigned __int64)&v388;
            v14 = v13;
            sub_24ABB0((__int64 *)&v388, "Overflow encountered when expanding vector");
            v15 = (__int64 *)v367;
            v16 = (__int64 *)v367;
            *v14 = (char *)off_1C63128;
            sub_2333C0(v14 + 1, v16);
            sub_233E40((__int64)v15);
            __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v367) = (3 * v137 + 1) >> 1;
          v140 = (_DWORD *)sub_186B300(v125 - 1, v139);
          v141 = (unsigned int)v140[1];
          v142 = v367;
          v125 = v140 + 2;
          *(_QWORD *)(a1 + 168) = v140 + 2;
          *v140 = v142;
          LODWORD(v140) = v141;
          v129 = (void **)&v125[v141];
          v128 = (_DWORD)v140 + 1;
        }
        else
        {
          v127 = v137;
          v128 = v137 + 1;
          v129 = (void **)&v125[v127];
        }
      }
      else
      {
        v317 = (_QWORD *)sub_186B270(0x18u);
        *v317 = 2;
        v128 = 1;
        v125 = v317 + 1;
        *(_QWORD *)(a1 + 168) = v125;
        v129 = (void **)v125;
      }
      *v129 = dest;
      *((_DWORD *)v125 - 1) = v128;
      v130 = *(_DWORD **)(*(_QWORD *)(a1 + 216) + 8LL * v126);
      dest = v130;
      if ( v130 )
        ++v130[2];
      v131 = *(_QWORD **)(a1 + 184);
      if ( v131 )
      {
        v132 = *((_DWORD *)v131 - 1);
        if ( v132 == *((_DWORD *)v131 - 2) )
        {
          v158 = (3 * v132 + 1) >> 1;
          v159 = 8 * v158 + 8;
          if ( 8 * v132 + 8 >= v159 || v132 >= v158 )
          {
            v17 = (char **)__cxa_allocate_exception(0x28u);
            v367 = (unsigned __int64)&v388;
            v18 = v17;
            sub_24ABB0((__int64 *)&v388, "Overflow encountered when expanding vector");
            v19 = (__int64 *)v367;
            v20 = (__int64 *)v367;
            *v18 = (char *)off_1C63128;
            sub_2333C0(v18 + 1, v20);
            sub_233E40((__int64)v19);
            __cxa_throw(v18, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v160 = (unsigned int *)sub_186B300(v131 - 1, v159);
          v161 = v160[1];
          v131 = v160 + 2;
          *v160 = v158;
          *(_QWORD *)(a1 + 184) = v160 + 2;
          LODWORD(v160) = v161;
          v135 = (void **)&v131[v161];
          v125 = *(_QWORD **)(a1 + 168);
          v134 = (_DWORD)v160 + 1;
        }
        else
        {
          v133 = v132;
          v134 = v132 + 1;
          v135 = (void **)&v131[v133];
        }
      }
      else
      {
        v318 = (_QWORD *)sub_186B270(0x18u);
        *v318 = 2;
        v125 = *(_QWORD **)(a1 + 168);
        v134 = 1;
        v131 = v318 + 1;
        *(_QWORD *)(a1 + 184) = v131;
        v135 = (void **)v131;
      }
      ++v126;
      *v135 = dest;
      *((_DWORD *)v131 - 1) = v134;
      v124 = *(_QWORD *)(a1 + 200);
    }
    while ( v124 );
  }
  for ( LODWORD(dest) = 0; v125; LODWORD(dest) = (_DWORD)dest + 1 )
  {
    if ( (unsigned int)dest >= *((_DWORD *)v125 - 1) )
      break;
    v166 = v125[(unsigned int)dest];
    v167 = *(_DWORD *)(a1 + 80);
    v367 = (unsigned int)dest;
    v168 = 2 * v167;
    LODWORD(v365) = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 96) = (_DWORD)v365 + 2;
    if ( 3 * v167 < 4 * (*(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 88)) )
    {
      v247 = v168;
      v355 = v166;
      v361 = 2 * v167;
      v364.m128i_i64[1] = 16LL * v168;
      v248 = (__m128i *)sub_186B270(v364.m128i_u64[1]);
      v249 = v361;
      v250 = (int)dest;
      v169 = v248;
      v171 = v364.m128i_i64[1];
      v166 = v355;
      v251 = &v248[v247];
      if ( v361 )
      {
        do
        {
          v248->m128i_i64[0] = 0;
          ++v248;
          v248[-1].m128i_i32[2] = 0;
        }
        while ( v248 != v251 );
        LODWORD(dest) = v250;
      }
      v252 = *(const __m128i **)(a1 + 72);
      v170 = v361 - 1;
      v172 = (__m128i *)((char *)v169 + v171);
      v253 = (__m128i *)&v252[*(unsigned int *)(a1 + 80)];
      if ( v252 != v253 )
      {
        do
        {
          while ( v252->m128i_i64[0] <= 1uLL )
          {
            if ( v253 == ++v252 )
              goto LABEL_260;
          }
          v254 = 16LL * (*(_DWORD *)(v252->m128i_i64[0] + 12) & (unsigned int)v170);
          v255 = &v169[(unsigned __int64)v254 / 0x10];
          if ( v171 == v254 )
          {
LABEL_264:
            if ( v169 == v255 )
            {
LABEL_378:
              v364.m128i_i64[1] = v355;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v256 = (int)dest;
            v257 = v169;
            while ( v257->m128i_i64[0] )
            {
              if ( v255 == ++v257 )
                goto LABEL_378;
            }
          }
          else
          {
            v256 = (int)dest;
            v257 = &v169[(unsigned __int64)v254 / 0x10];
            while ( v257->m128i_i64[0] )
            {
              if ( v172 == ++v257 )
                goto LABEL_264;
            }
          }
          v258 = _mm_loadu_si128(v252++);
          LODWORD(dest) = v256;
          *v257 = v258;
        }
        while ( v253 != v252 );
LABEL_260:
        v253 = *(__m128i **)(a1 + 72);
      }
      if ( v253 )
      {
        v356 = v171;
        v364.m128i_i64[1] = v166;
        sub_186B220(v253);
        v249 = v361;
        v171 = v356;
        v170 = v361 - 1;
        v166 = v364.m128i_i64[1];
      }
      *(_QWORD *)(a1 + 72) = v169;
      *(_DWORD *)(a1 + 80) = v249;
      *(_DWORD *)(a1 + 88) = 0;
    }
    else
    {
      v169 = *(__m128i **)(a1 + 72);
      v170 = v167 - 1;
      v171 = 16LL * v167;
      v172 = (__m128i *)((char *)v169 + v171);
    }
    v173 = *(_DWORD *)(v166 + 12);
    v174 = 16LL * (v173 & (unsigned int)v170);
    v175 = &v169[(unsigned __int64)v174 / 0x10];
    if ( v174 == v171 )
    {
      v178 = nullptr;
LABEL_153:
      if ( v175 == v169 )
      {
LABEL_161:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        while ( 1 )
        {
          v180 = v169->m128i_i64[0];
          if ( v169->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v180 + 12) == v173 && v166 == v180 )
          {
            v335 = (int)v365;
            v169->m128i_i64[0] = v166;
            v169->m128i_i32[2] = v335;
            goto LABEL_162;
          }
          if ( v175 == ++v169 )
            goto LABEL_161;
        }
        if ( !v180 )
          break;
        v178 = v169++;
        if ( v175 == v169 )
          goto LABEL_161;
      }
      if ( v178 )
        goto LABEL_376;
      v178 = v169;
    }
    else
    {
      v176 = (int)dest;
      v177 = v175;
      v178 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v179 = v177->m128i_i64[0];
          if ( v177->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v179 + 12) == v173 && v166 == v179 )
          {
            v177->m128i_i64[0] = v166;
            LODWORD(dest) = v176;
            v177->m128i_i32[2] = (int)v365;
            goto LABEL_162;
          }
          if ( ++v177 == v172 )
            goto LABEL_153;
        }
        if ( !v179 )
          break;
        v178 = v177++;
        if ( v177 == v172 )
          goto LABEL_153;
      }
      if ( v178 )
LABEL_376:
        --*(_DWORD *)(a1 + 88);
      else
        v178 = v177;
    }
    v316 = (int)v365;
    v178->m128i_i64[0] = v166;
    v178->m128i_i32[2] = v316;
    ++*(_DWORD *)(a1 + 84);
LABEL_162:
    v181 = *(_DWORD *)(a1 + 96);
    v182 = *(_QWORD **)(a1 + 224);
    v183 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v367);
    *(_DWORD *)(a1 + 96) = v181 + 2;
    if ( v182 )
    {
      v184 = *((unsigned int *)v182 - 1);
      if ( (_DWORD)v184 == *((_DWORD *)v182 - 2) )
      {
        v243 = (unsigned int)(3 * v184 + 1) >> 1;
        v244 = 4 * v243 + 8;
        if ( 4 * (int)v184 + 8 >= (unsigned int)v244 || (unsigned int)v184 >= v243 )
        {
          v1 = (char **)__cxa_allocate_exception(0x28u);
          v367 = (unsigned __int64)&v388;
          v2 = v1;
          sub_24ABB0((__int64 *)&v388, "Overflow encountered when expanding vector");
          v3 = (__int64 *)v367;
          v4 = (__int64 *)v367;
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v4);
          sub_233E40((__int64)v3);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v365) = v181;
        v367 = v183;
        v245 = (unsigned int *)sub_186B300(v182 - 1, v244);
        v182 = v245 + 2;
        *v245 = v243;
        v246 = v245[1];
        *(_QWORD *)(a1 + 224) = v182;
        v183 = v367;
        v181 = (int)v365;
        v185 = (__int32 *)v182 + v246;
      }
      else
      {
        v185 = (__int32 *)v182 + v184;
      }
    }
    else
    {
      LODWORD(v365) = v181;
      v367 = v183;
      v333 = (_QWORD *)sub_186B270(0x10u);
      *v333 = 2;
      v183 = v367;
      v182 = v333 + 1;
      v181 = (int)v365;
      *(_QWORD *)(a1 + 224) = v333 + 1;
      v185 = (__int32 *)(v333 + 1);
    }
    *v185 = v181;
    ++*((_DWORD *)v182 - 1);
    if ( v183 )
    {
      v186 = *(unsigned int *)(a1 + 80);
      v187 = 4 * (*(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 88));
      LODWORD(v367) = 2 * v186;
      if ( 3 * (int)v186 < v187 )
      {
        v320 = (unsigned int)v367;
        v362 = v181;
        v364.m128i_i64[1] = v183;
        v365 = (__int64 *)(16LL * (unsigned int)v367);
        v321 = (__m128i *)sub_186B270((size_t)v365);
        v188 = v321;
        v190 = (__int64)v365;
        v183 = v364.m128i_u64[1];
        v322 = (int)dest;
        v323 = &v321[v320];
        v181 = v362;
        if ( (_DWORD)v367 )
        {
          do
          {
            v321->m128i_i64[0] = 0;
            ++v321;
            v321[-1].m128i_i32[2] = 0;
          }
          while ( v321 != v323 );
          LODWORD(dest) = v322;
        }
        v324 = *(const __m128i **)(a1 + 72);
        v191 = (__m128i *)((char *)v188 + v190);
        v189 = v367 - 1;
        v325 = (__m128i *)&v324[*(unsigned int *)(a1 + 80)];
        if ( v324 != v325 )
        {
          do
          {
            while ( v324->m128i_i64[0] <= 1uLL )
            {
              if ( v325 == ++v324 )
                goto LABEL_396;
            }
            v326 = 16LL * (*(_DWORD *)(v324->m128i_i64[0] + 12) & (unsigned int)v189);
            v327 = &v188[(unsigned __int64)v326 / 0x10];
            if ( v190 == v326 )
            {
LABEL_400:
              if ( v188 == v327 )
              {
LABEL_420:
                v364.m128i_i64[1] = (__int64)v324;
                v365 = (__int64 *)v183;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v328 = (int)dest;
              v329 = v188;
              while ( v329->m128i_i64[0] )
              {
                if ( v327 == ++v329 )
                  goto LABEL_420;
              }
            }
            else
            {
              v328 = (int)dest;
              v329 = &v188[(unsigned __int64)v326 / 0x10];
              while ( v329->m128i_i64[0] )
              {
                if ( v191 == ++v329 )
                  goto LABEL_400;
              }
            }
            v330 = _mm_loadu_si128(v324++);
            LODWORD(dest) = v328;
            *v329 = v330;
          }
          while ( v325 != v324 );
LABEL_396:
          v325 = *(__m128i **)(a1 + 72);
        }
        if ( v325 )
        {
          v357 = v190;
          v363 = v189;
          v364.m128i_i32[2] = v181;
          v365 = (__int64 *)v183;
          sub_186B220(v325);
          v190 = v357;
          v189 = v363;
          v181 = v364.m128i_i32[2];
          v183 = (unsigned __int64)v365;
        }
        v331 = v367;
        *(_QWORD *)(a1 + 72) = v188;
        *(_DWORD *)(a1 + 88) = 0;
        *(_DWORD *)(a1 + 80) = v331;
      }
      else
      {
        v188 = *(__m128i **)(a1 + 72);
        v189 = v186 - 1;
        v190 = 16 * v186;
        v191 = &v188[v186];
      }
      v192 = *(_DWORD *)(v183 + 12);
      v193 = 16LL * (v192 & (unsigned int)v189);
      v194 = &v188[(unsigned __int64)v193 / 0x10];
      if ( v193 == v190 )
      {
        v196 = nullptr;
LABEL_176:
        if ( v194 == v188 )
        {
LABEL_184:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        while ( 1 )
        {
          while ( 1 )
          {
            v198 = v188->m128i_i64[0];
            if ( v188->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v198 + 12) == v192 && v183 == v198 )
            {
              v188->m128i_i64[0] = v183;
              v188->m128i_i32[2] = v181;
              goto LABEL_185;
            }
            if ( v194 == ++v188 )
              goto LABEL_184;
          }
          if ( !v198 )
            break;
          v196 = v188++;
          if ( v194 == v188 )
            goto LABEL_184;
        }
        if ( v196 )
          goto LABEL_407;
        v196 = v188;
      }
      else
      {
        v195 = &v188[(unsigned __int64)v193 / 0x10];
        v196 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v197 = v195->m128i_i64[0];
            if ( v195->m128i_i64[0] <= 1uLL )
              break;
            if ( *(_DWORD *)(v197 + 12) == v192 && v183 == v197 )
            {
              v195->m128i_i64[0] = v183;
              v195->m128i_i32[2] = v181;
              goto LABEL_185;
            }
            if ( ++v195 == v191 )
              goto LABEL_176;
          }
          if ( !v197 )
            break;
          v196 = v195++;
          if ( v195 == v191 )
            goto LABEL_176;
        }
        if ( v196 )
LABEL_407:
          --*(_DWORD *)(a1 + 88);
        else
          v196 = v195;
      }
      v196->m128i_i64[0] = v183;
      v196->m128i_i32[2] = v181;
      ++*(_DWORD *)(a1 + 84);
    }
LABEL_185:
    v125 = *(_QWORD **)(a1 + 168);
  }
  LODWORD(v367) = sub_54FE20(a1, v384);
  v199 = *(_QWORD *)(a1 + 168);
  if ( v199 )
  {
    v364.m128i_i64[1] = 0;
    v200 = v367 + 1;
    if ( (v367 & 1) != 0 )
      v200 = v367 - 1;
    v201 = 0;
    LODWORD(v365) = v200;
    while ( 1 )
    {
      v202 = *(_QWORD **)(a1 + 184);
      if ( v201 >= *(_DWORD *)(v199 - 4) )
        break;
      v203 = sub_54DEE0(a1, v202[v201]);
      LODWORD(dest) = sub_54FB50(a1, v367, v203);
      v204 = sub_54DEE0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL * v201));
      v205 = sub_54FB50(a1, (unsigned int)v365, v204);
      v206 = v205 + 1;
      if ( (v205 & 1) != 0 )
        v206 = v205 - 1;
      v207 = (_DWORD)dest + 1;
      if ( ((unsigned __int8)dest & 1) != 0 )
        v207 = (_DWORD)dest - 1;
      v208 = sub_54FB50(a1, v207, v206);
      v209 = v208 + 1;
      if ( (v208 & 1) != 0 )
        v209 = v208 - 1;
      if ( v364.m128i_i64[1] )
      {
        v210 = *(unsigned int *)(v364.m128i_i64[1] - 4);
        if ( (_DWORD)v210 == *(_DWORD *)(v364.m128i_i64[1] - 8) )
        {
          v240 = (unsigned int)(3 * v210 + 1) >> 1;
          v241 = 4 * v240 + 8;
          if ( 4 * (int)v210 + 8 >= v241 || (unsigned int)v210 >= v240 )
          {
            v25 = (char **)__cxa_allocate_exception(0x28u);
            v367 = (unsigned __int64)&v388;
            v26 = v25;
            sub_24ABB0((__int64 *)&v388, "Overflow encountered when expanding vector");
            v27 = (__int64 *)v367;
            v28 = (__int64 *)v367;
            *v26 = (char *)off_1C63128;
            sub_2333C0(v26 + 1, v28);
            sub_233E40((__int64)v27);
            dest = (void *)(v364.m128i_i64[1] - 8);
            __cxa_throw(v26, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v360 = (unsigned int)(3 * v210 + 1) >> 1;
          dest = (void *)(v364.m128i_i64[1] - 8);
          v242 = (unsigned int *)sub_186B300((void *)(v364.m128i_i64[1] - 8), v241);
          v364.m128i_i64[1] = (__int64)(v242 + 2);
          *v242 = v360;
          v211 = &v242[v242[1] + 2];
        }
        else
        {
          v211 = (unsigned int *)(v364.m128i_i64[1] + 4 * v210);
        }
      }
      else
      {
        v334 = (_QWORD *)sub_186B270(0x10u);
        *v334 = 2;
        v211 = (unsigned int *)(v334 + 1);
        v364.m128i_i64[1] = (__int64)v211;
      }
      *v211 = v209;
      ++v201;
      ++*(_DWORD *)(v364.m128i_i64[1] - 4);
      v199 = *(_QWORD *)(a1 + 168);
      if ( !v199 )
        goto LABEL_201;
    }
  }
  else
  {
    v364.m128i_i64[1] = 0;
LABEL_201:
    v202 = *(_QWORD **)(a1 + 184);
  }
  v212 = v202;
  if ( v202 )
  {
    v213 = (unsigned __int64)&v202[*((unsigned int *)v202 - 1)];
    if ( (unsigned __int64)v202 >= v213 )
      goto LABEL_210;
    do
    {
      while ( 1 )
      {
        v214 = *v212;
        if ( *v212 )
        {
          v215 = *(_QWORD *)(a1 + 176);
          v60 = (*(_DWORD *)(v214 + 8))-- == 1;
          if ( v60 )
            break;
        }
        if ( (unsigned __int64)++v212 >= v213 )
          goto LABEL_209;
      }
      sub_15D7BC0(v215, v214);
      ++v212;
    }
    while ( (unsigned __int64)v212 < v213 );
LABEL_209:
    v212 = *(_QWORD **)(a1 + 184);
    if ( v212 )
LABEL_210:
      *((_DWORD *)v212 - 1) = 0;
  }
  v354 = *(_QWORD *)(a1 + 16);
  v386 = v354;
  v216 = *(__int64 **)(*(_QWORD *)a1 + 152LL);
  v217 = &v216[*(unsigned int *)(*(_QWORD *)a1 + 160LL)];
  v218 = v216;
  if ( v216 == v217 )
    goto LABEL_405;
  while ( (unsigned __int64)*v218 <= 1 )
  {
    if ( v217 == ++v218 )
      goto LABEL_405;
  }
  v365 = v218;
  if ( v217 == v218 )
  {
LABEL_405:
    LODWORD(v231) = v354;
    v219 = nullptr;
  }
  else
  {
    v219 = nullptr;
LABEL_217:
    if ( v53 )
    {
      v220 = (__int64 *)&v53[*((unsigned int *)v53 - 1)];
      v221 = v53;
      if ( v53 < (__int64 **)v220 )
      {
        do
        {
          while ( 1 )
          {
            v222 = *v221;
            if ( *v221 )
            {
              v60 = (*((_DWORD *)v222 + 2))-- == 1;
              if ( v60 )
                break;
            }
            if ( ++v221 >= (__int64 **)v220 )
              goto LABEL_224;
          }
          v367 = (unsigned __int64)v220;
          dest = v221;
          sub_15D7BC0(v364.m128i_i64[0], v222);
          v220 = (__int64 *)v367;
          v221 = (__int64 **)((char *)dest + 8);
        }
        while ( (unsigned __int64)dest + 8 < v367 );
      }
LABEL_224:
      *((_DWORD *)v53 - 1) = 0;
    }
    v381.m128i_i64[1] = (__int64)v53;
    v223 = *v365;
    v381.m128i_i64[0] = v364.m128i_i64[0];
    sub_54EE10(a1, v223, a1 + 192, (__int64)&v381);
    v53 = (__int64 **)v381.m128i_i64[1];
    v224 = *(_QWORD *)(a1 + 16);
    v364.m128i_i64[0] = v381.m128i_i64[0];
    v225 = (_DWORD *)sub_15E1AF0(v224);
    v226 = v225;
    if ( v225 )
      ++v225[2];
    if ( v219 )
    {
      v227 = *((_DWORD *)v219 - 1);
      if ( v227 == *((_DWORD *)v219 - 2) )
      {
        v259 = (3 * v227 + 1) >> 1;
        v260 = 8 * v259 + 8;
        if ( 8 * v227 + 8 >= (unsigned int)v260 || v227 >= v259 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          v367 = (unsigned __int64)&v388;
          v10 = v9;
          sub_24ABB0((__int64 *)&v388, "Overflow encountered when expanding vector");
          v11 = (__int64 *)v367;
          v12 = (__int64 *)v367;
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v12);
          sub_233E40((__int64)v11);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        LODWORD(v367) = (3 * v227 + 1) >> 1;
        dest = v226;
        v261 = (_DWORD *)sub_186B300(v219 - 8, v260);
        v219 = (char *)(v261 + 2);
        v226 = dest;
        *v261 = v367;
        v262 = (unsigned int)v261[1];
        v228 = (char *)&v261[2 * v262 + 2];
        v229 = v262 + 1;
      }
      else
      {
        v228 = &v219[8 * v227];
        v229 = v227 + 1;
      }
    }
    else
    {
      dest = v225;
      v319 = (_QWORD *)sub_186B270(0x18u);
      v219 = (char *)(v319 + 1);
      *v319 = 2;
      v229 = 1;
      v226 = dest;
      v228 = (char *)(v319 + 1);
    }
    *(_QWORD *)v228 = v226;
    v230 = v365;
    *((_DWORD *)v219 - 1) = v229;
    while ( v217 != ++v230 )
    {
      if ( (unsigned __int64)*v230 > 1 )
      {
        v365 = v230;
        if ( v217 != v230 )
          goto LABEL_217;
        break;
      }
    }
    v231 = *(_QWORD *)(a1 + 16);
  }
  v232 = sub_15E1AF0(v231);
  v367 = (unsigned __int64)&v388;
  sub_DA5410(&v388, v352, v232);
  sub_DA3980(&v382, &v388);
  sub_DA3950(&v388);
  sub_DA3D80(v352, (unsigned int)&v382, (_DWORD)src, v233, v234, v235);
  LODWORD(v365) = sub_54FE20(a1, v384);
  if ( v219 )
  {
    v236 = *((unsigned int *)v219 - 1);
    if ( v219 < &v219[8 * v236] )
    {
      dest = v219;
      v237 = (unsigned __int64)&v219[8 * v236];
      do
      {
        v238 = *(_QWORD *)dest;
        if ( *(_QWORD *)dest )
        {
          v60 = (*(_DWORD *)(v238 + 8))-- == 1;
          if ( v60 )
            sub_15D7BC0(v354, v238);
        }
        dest = (char *)dest + 8;
      }
      while ( (unsigned __int64)dest < v237 );
    }
    sub_186B220(v219 - 8);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v263 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  v264 = *(_QWORD *)v263;
  v370 = 32;
  if ( *(_QWORD *)((char *)v263 + *(_QWORD *)(v264 - 24) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v263, 32);
  v265 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  v266 = *(_QWORD *)v265;
  v371 = 32;
  if ( *(_QWORD *)((char *)v265 + *(_QWORD *)(v266 - 24) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v265, 32);
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v267 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  v268 = *(_QWORD *)v267;
  v372 = 10;
  if ( *(_QWORD *)((char *)v267 + *(_QWORD *)(v268 - 24) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v267, 10);
  v269 = *(_QWORD *)(a1 + 224);
  for ( i = 0; v269; v269 = *(_QWORD *)(a1 + 224) )
  {
    if ( i >= *(_DWORD *)(v269 - 4) )
      break;
    v271 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
    v272 = *(_QWORD *)v271;
    v373 = 10;
    if ( *(_QWORD *)((char *)v271 + *(_QWORD *)(v272 - 24) + 16) )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put(v271, 10);
    ++i;
  }
  v273 = *(_QWORD *)(a1 + 168);
  if ( v273 )
  {
    LODWORD(dest) = 0;
    do
    {
      if ( (unsigned int)dest >= *(_DWORD *)(v273 - 4) )
        break;
      sub_54DEE0(a1, *(_QWORD *)(v273 + 8LL * (unsigned int)dest));
      v274 = (__int64 *)std::ostream::_M_insert<unsigned long>();
      v275 = *v274;
      v374 = 32;
      if ( *(__int64 *)((char *)v274 + *(_QWORD *)(v275 - 24) + 16) )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        src = v274;
        std::ostream::put((std::ostream *)v274, 32);
      }
      v276 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
      v277 = *(_QWORD *)v276;
      v375 = 10;
      if ( *(_QWORD *)((char *)v276 + *(_QWORD *)(v277 - 24) + 16) )
        std::__ostream_insert<char,std::char_traits<char>>();
      else
        std::ostream::put(v276, 10);
      v273 = *(_QWORD *)(a1 + 168);
      LODWORD(dest) = (_DWORD)dest + 1;
    }
    while ( v273 );
  }
  v278 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
  v279 = *(_QWORD *)v278;
  v376 = 10;
  if ( *(_QWORD *)((char *)v278 + *(_QWORD *)(v279 - 24) + 16) )
    std::__ostream_insert<char,std::char_traits<char>>();
  else
    std::ostream::put(v278, 10);
  v280 = *(_QWORD *)(a1 + 296);
  v281 = v390;
  v389 = 0;
  dest = v390;
  v388 = v390;
  LOBYTE(v390[0]) = 0;
  if ( !v280 )
  {
    v339 = *(_QWORD *)(a1 + 336);
    if ( v339 > 0xF )
    {
      if ( (v339 & 0x8000000000000000LL) != 0LL )
        std::__throw_length_error("basic_string::_M_create");
      if ( v339 > 0x1D )
      {
        v343 = *(_QWORD *)(a1 + 336);
        v344 = v339 + 1;
        if ( (__int64)(v339 + 1) < 0 )
          std::__throw_bad_alloc();
      }
      else
      {
        v343 = 30;
        v344 = 31;
      }
      v281 = (_QWORD *)operator new(v344);
      if ( v388 != dest )
      {
        src = v281;
        operator delete(v388, v390[0] + 1LL);
        v281 = src;
      }
      v388 = v281;
      v340 = *(_BYTE **)(a1 + 328);
      v390[0] = v343;
    }
    else
    {
      if ( !v339 )
      {
LABEL_446:
        v341 = dest;
LABEL_447:
        v389 = v339;
        v341[v339] = 0;
        goto LABEL_309;
      }
      v340 = *(_BYTE **)(a1 + 328);
      if ( v339 == 1 )
      {
        LOBYTE(v390[0]) = *v340;
        goto LABEL_446;
      }
    }
    memcpy(v281, v340, v339);
    v341 = v388;
    goto LABEL_447;
  }
  v282 = *(_QWORD *)(a1 + 280);
  v283 = v280;
  v284 = *(_BYTE **)(a1 + 288);
  if ( v282 >= v280 )
    v280 = *(_QWORD *)(a1 + 280);
  if ( !v282 )
    v280 = v283;
  v285 = v280 - (_QWORD)v284;
  if ( (v285 & 0x8000000000000000LL) != 0LL )
    std::__throw_length_error("basic_string::_M_replace");
  if ( v285 > 0xF )
  {
    if ( v285 > 0x1D )
    {
      v336 = v285;
      v337 = v285 + 1;
      if ( (__int64)(v285 + 1) < 0 )
        std::__throw_bad_alloc();
    }
    else
    {
      v336 = 30;
      v337 = 31;
    }
    src = *(void **)(a1 + 288);
    v338 = (void *)operator new(v337);
    v286 = v338;
    if ( src )
      memcpy(v338, src, v285);
    if ( v388 != dest )
      operator delete(v388, v390[0] + 1LL);
    v388 = v286;
    v390[0] = v336;
  }
  else if ( v284 == dest )
  {
    std::string::_M_replace_cold();
    v286 = v388;
  }
  else
  {
    if ( v285 )
    {
      if ( v285 == 1 )
        LOBYTE(v390[0]) = *v284;
      else
        memcpy(dest, v284, v285);
    }
    v286 = dest;
  }
  v389 = v285;
  *((_BYTE *)v286 + v285) = 0;
LABEL_309:
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v388 != dest )
    operator delete(v388, v390[0] + 1LL);
  if ( v364.m128i_i64[1] )
    sub_186B220((void *)(v364.m128i_i64[1] - 8));
  v287 = v384;
  if ( v384 )
  {
    v288 = v385;
    v60 = (*(_DWORD *)(v384 + 8))-- == 1;
    if ( v60 )
      sub_15D7BC0(v288, v287);
  }
  sub_DA3950(&v382);
  v289 = v404;
  if ( v404 )
  {
    v290 = *((unsigned int *)v404 - 1);
    if ( (_DWORD)v290 )
    {
      v291 = &v404[v290];
      do
      {
        while ( *v289 )
        {
          v292 = v289 + 1;
          sub_186B220((void *)(*v289 - 8LL));
          v289 = v292;
          if ( v291 == v292 )
            goto LABEL_321;
        }
        ++v289;
      }
      while ( v291 != v289 );
LABEL_321:
      v289 = v404;
    }
    sub_186B220(v289 - 1);
  }
  v293 = v403;
  if ( v403 )
  {
    v294 = (unsigned __int64)&v403[*((unsigned int *)v403 - 1)];
    if ( (unsigned __int64)v403 >= v294 )
      goto LABEL_331;
    v295 = v403;
    do
    {
      while ( 1 )
      {
        v296 = *v295;
        if ( *v295 )
        {
          v297 = v402;
          v60 = (*(_DWORD *)(v296 + 8))-- == 1;
          if ( v60 )
            break;
        }
        if ( (unsigned __int64)++v295 >= v294 )
          goto LABEL_330;
      }
      sub_15D7BC0(v297, v296);
      ++v295;
    }
    while ( (unsigned __int64)v295 < v294 );
LABEL_330:
    v293 = v403;
    if ( v403 )
LABEL_331:
      sub_186B220(v293 - 1);
  }
  v298 = v401;
  if ( v401 )
  {
    v299 = *((unsigned int *)v401 - 1);
    if ( (_DWORD)v299 )
    {
      v300 = &v401[v299];
      do
      {
        while ( *v298 )
        {
          v301 = v298 + 1;
          sub_186B220((void *)(*v298 - 8LL));
          v298 = v301;
          if ( v300 == v301 )
            goto LABEL_337;
        }
        ++v298;
      }
      while ( v300 != v298 );
LABEL_337:
      v298 = v401;
    }
    sub_186B220(v298 - 1);
  }
  if ( v400 )
    sub_186B220((void *)(v400 - 8));
  if ( v399 )
    sub_186B220((void *)(v399 - 8));
  v302 = v398;
  if ( v398 )
  {
    v303 = (unsigned __int64)&v398[*((unsigned int *)v398 - 1)];
    if ( (unsigned __int64)v398 >= v303 )
      goto LABEL_351;
    v304 = v398;
    do
    {
      while ( 1 )
      {
        v305 = *v304;
        if ( *v304 )
        {
          v306 = v397;
          v60 = (*(_DWORD *)(v305 + 8))-- == 1;
          if ( v60 )
            break;
        }
        if ( (unsigned __int64)++v304 >= v303 )
          goto LABEL_350;
      }
      sub_15D7BC0(v306, v305);
      ++v304;
    }
    while ( (unsigned __int64)v304 < v303 );
LABEL_350:
    v302 = v398;
    if ( v398 )
LABEL_351:
      sub_186B220(v302 - 1);
  }
  if ( v396 )
    sub_186B220((void *)(v396 - 8));
  result = (__int64)v392;
  if ( v392 )
    result = sub_186B220(v392 - 1);
  if ( v53 )
  {
    v308 = &v53[*((unsigned int *)v53 - 1)];
    if ( v53 < v308 )
    {
      v309 = v364.m128i_i64[0];
      v310 = v53;
      do
      {
        while ( 1 )
        {
          v311 = *v310;
          if ( *v310 )
          {
            v60 = (*((_DWORD *)v311 + 2))-- == 1;
            if ( v60 )
              break;
          }
          if ( ++v310 >= v308 )
            goto LABEL_363;
        }
        sub_15D7BC0(v309, v311);
        ++v310;
      }
      while ( v310 < v308 );
    }
LABEL_363:
    result = sub_186B220(v53 - 1);
  }
  v312 = (__int64 *)v350;
  if ( v350 )
  {
    v313 = *(unsigned int *)(v350 - 4);
    if ( v350 < v350 + 8 * v313 )
    {
      v314 = v350 + 8 * v313;
      do
      {
        while ( 1 )
        {
          v315 = *v312;
          if ( *v312 )
          {
            v60 = (*(_DWORD *)(v315 + 8))-- == 1;
            if ( v60 )
              break;
          }
          if ( (unsigned __int64)++v312 >= v314 )
            return sub_186B220((void *)(v350 - 8));
        }
        ++v312;
        sub_15D7BC0(v345, v315);
      }
      while ( (unsigned __int64)v312 < v314 );
    }
    return sub_186B220((void *)(v350 - 8));
  }
  return result;
}

