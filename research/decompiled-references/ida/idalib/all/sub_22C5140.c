__int64 __fastcall sub_22C5140(
        __int64 a1,
        char **a2,
        __int64 a3,
        __int64 a4,
        const void *a5,
        size_t a6,
        void *a7,
        size_t a8,
        _BYTE *a9,
        __int64 *a10)
{
  size_t v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  _QWORD *v13; // rdx
  __int64 v14; // rax
  void *v15; // rbp
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 *v18; // rsi
  __int64 v19; // r8
  void *v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  char *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // ecx
  unsigned __int64 *v27; // rsi
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r14
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbp
  __int64 v34; // rbx
  _QWORD *v35; // rsi
  __int64 v36; // r13
  __int64 v37; // rax
  _QWORD *v38; // rdi
  unsigned int v39; // ecx
  char *v40; // rsi
  __int64 v41; // r9
  __int64 v42; // rax
  size_t v43; // rax
  __int64 v44; // rax
  _BYTE *v45; // rax
  unsigned __int8 v46; // dl
  unsigned __int8 v47; // dl
  const char *v48; // r14
  __int64 v49; // rax
  size_t v50; // rdx
  __int64 v51; // rax
  const void *v52; // rsi
  int v53; // r12d
  __int64 v54; // rbx
  __int64 *v55; // rax
  __int64 v56; // rbx
  int v57; // r10d
  __int64 v58; // rax
  const void *v59; // rsi
  int v60; // r9d
  __int64 *v61; // rbp
  unsigned int v62; // r12d
  __int64 v63; // rdi
  unsigned int v64; // ecx
  char *v65; // rsi
  __int64 v66; // r9
  unsigned int *v67; // r15
  _QWORD *v68; // rax
  __int64 *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  const char *v72; // rsi
  __int64 v73; // r12
  const char *v74; // rax
  size_t v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  _BYTE *v79; // rdx
  char *v80; // r13
  size_t v81; // rdx
  int v82; // edi
  char *v83; // rax
  __m128i si128; // xmm2
  __m128i v85; // xmm0
  unsigned int v86; // edx
  unsigned __int8 **v87; // rdi
  unsigned __int64 v88; // r15
  char *v89; // rax
  unsigned __int8 *v90; // rbx
  unsigned int v91; // edx
  unsigned __int8 **v92; // rsi
  unsigned __int8 *v93; // r8
  unsigned int *v94; // r15
  char *v95; // rax
  __int64 v96; // rax
  const char *v97; // rax
  __int64 v98; // rdi
  size_t v99; // rdx
  int v100; // r10d
  unsigned __int64 *v101; // r11
  int v102; // edx
  bool v103; // zf
  unsigned int v104; // edx
  __int64 v105; // rax
  char *v106; // rax
  int v107; // esi
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rbx
  _QWORD *v110; // rcx
  unsigned __int64 *v111; // rax
  int v112; // r10d
  int v113; // ecx
  __int64 v114; // rcx
  __int64 v115; // rax
  size_t v116; // r13
  void **v117; // r8
  unsigned __int64 v118; // rdx
  unsigned __int64 v119; // r9
  unsigned __int64 *v120; // rax
  int v121; // esi
  __int64 *v122; // r13
  int v123; // esi
  int v124; // r9d
  __int64 v125; // r8
  unsigned __int8 v126; // al
  __int64 v127; // rax
  __int64 v128; // rdx
  unsigned __int8 v129; // al
  void **v130; // r12
  __int64 v131; // rax
  void **i; // r13
  int v133; // esi
  int v134; // r9d
  unsigned __int8 *v135; // r8
  __int64 *v136; // rbp
  char v137; // r15
  __int64 v138; // r13
  unsigned int v139; // edx
  char *v140; // rsi
  __int64 v141; // r9
  unsigned int *v142; // r12
  _DWORD *v143; // rax
  __int64 *v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // r15
  unsigned __int8 v150; // al
  const void *v151; // rsi
  size_t v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // r15
  unsigned __int8 v158; // al
  unsigned __int8 **v159; // rdx
  unsigned __int8 *v160; // rax
  unsigned __int8 v161; // dl
  const void *v162; // rsi
  size_t v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rdi
  size_t v168; // rax
  std::_V2 *v169; // rdi
  void *v170; // r13
  __int64 *v171; // rbx
  __int64 *v172; // rax
  __int64 v173; // rax
  __int64 v174; // rbx
  __int64 v175; // rax
  void *v176; // rax
  __int64 v177; // rcx
  void *v178; // rsi
  __int64 v179; // rdx
  __int64 v180; // rbx
  __int64 v181; // rax
  void *v182; // rax
  __int64 v183; // rcx
  void *v184; // rsi
  __int64 v185; // rdx
  __int16 *v186; // rbx
  __int16 *v187; // rbp
  __int16 *v188; // rdi
  char *v189; // rbp
  char *v190; // rbx
  __int64 v191; // rax
  void **v192; // rbp
  void **v193; // rbx
  char *v194; // rax
  int v196; // eax
  void **v197; // rax
  size_t v198; // rax
  void **v199; // rax
  __int64 v200; // rax
  __int64 v201; // rdx
  void **v202; // rax
  __int64 v203; // rdx
  unsigned __int8 v204; // al
  unsigned __int8 **v205; // rdx
  unsigned __int8 *v206; // rax
  unsigned __int8 v207; // dl
  __int64 v208; // rsi
  __int64 v209; // rdx
  void **v210; // rax
  size_t v211; // rax
  __int64 *v212; // r12
  __int64 v213; // rcx
  size_t v214; // r8
  __int64 v215; // r9
  __int64 v216; // r15
  __int16 *v217; // rdi
  __int16 *v218; // r15
  __int64 *v219; // rax
  __int64 v220; // rax
  __int64 v221; // rax
  const char *v222; // rsi
  __int64 v223; // rbp
  __int64 v224; // rax
  __int64 v225; // rax
  __int64 v226; // rax
  __int64 v227; // rax
  __int64 v228; // rax
  __int64 v229; // rax
  __int64 *v230; // rax
  __int64 v231; // rax
  int v232; // esi
  int v233; // r9d
  __int64 v234; // r10
  int v235; // esi
  int v236; // r9d
  __int64 v237; // r10
  __int64 *v238; // rax
  __int64 v239; // rax
  size_t v240; // rbx
  void ***v241; // r12
  void **v242; // rax
  void **v243; // rax
  const char *v244; // rax
  __int64 v245; // rdx
  void **v246; // rax
  __int64 v247; // rcx
  size_t v248; // r8
  __int64 v249; // r9
  __int16 *v250; // r15
  void ***v251; // r12
  void **v252; // rax
  void **v253; // rax
  const char *v254; // rax
  __int64 v255; // rdx
  void **v256; // rax
  __int64 v257; // rcx
  size_t v258; // r8
  __int64 v259; // r9
  __int16 *v260; // r15
  __int64 *v261; // rax
  __int64 v262; // rax
  void *v263; // rax
  __int64 *v264; // r14
  __int64 *v265; // rax
  __int64 v266; // rax
  __int64 v267; // rax
  _BYTE *v268; // rdx
  __int64 v269; // rax
  __int64 v270; // rax
  size_t v271; // rax
  const char *v272; // rbx
  size_t v273; // r14
  __int64 v274; // rax
  __int64 v275; // rax
  void *v276; // rax
  __int64 v277; // rax
  __int64 v278; // rax
  __int64 v279; // [rsp+8h] [rbp-4E0h]
  size_t v280; // [rsp+8h] [rbp-4E0h]
  char *v281; // [rsp+18h] [rbp-4D0h] BYREF
  char **v282; // [rsp+20h] [rbp-4C8h]
  __int64 v283; // [rsp+28h] [rbp-4C0h]
  void **v284; // [rsp+30h] [rbp-4B8h]
  size_t v285; // [rsp+38h] [rbp-4B0h]
  size_t n; // [rsp+40h] [rbp-4A8h]
  void *s1; // [rsp+48h] [rbp-4A0h]
  __int64 *v288; // [rsp+50h] [rbp-498h]
  char **v289; // [rsp+58h] [rbp-490h]
  void **v290; // [rsp+60h] [rbp-488h]
  char **v291; // [rsp+68h] [rbp-480h]
  __m128 *v292; // [rsp+70h] [rbp-478h]
  char **v293; // [rsp+78h] [rbp-470h]
  __int64 v294; // [rsp+80h] [rbp-468h]
  _BYTE *v295; // [rsp+88h] [rbp-460h]
  _QWORD *v296; // [rsp+90h] [rbp-458h]
  void **v297; // [rsp+98h] [rbp-450h]
  __m128 v298; // [rsp+A0h] [rbp-448h] BYREF
  void **v299; // [rsp+B0h] [rbp-438h]
  const void *v300; // [rsp+B8h] [rbp-430h]
  size_t v301; // [rsp+C0h] [rbp-428h]
  __int64 v302; // [rsp+C8h] [rbp-420h]
  __m128 v303; // [rsp+D0h] [rbp-418h] BYREF
  __int64 v304; // [rsp+E0h] [rbp-408h]
  unsigned __int8 v305; // [rsp+EFh] [rbp-3F9h]
  char *v306; // [rsp+F0h] [rbp-3F8h] BYREF
  __int64 v307; // [rsp+F8h] [rbp-3F0h]
  const char *v308; // [rsp+100h] [rbp-3E8h] BYREF
  size_t v309; // [rsp+108h] [rbp-3E0h]
  void *v310[2]; // [rsp+110h] [rbp-3D8h] BYREF
  __int64 v311; // [rsp+120h] [rbp-3C8h]
  char *v312; // [rsp+130h] [rbp-3B8h] BYREF
  __int64 v313; // [rsp+138h] [rbp-3B0h]
  unsigned int v314; // [rsp+140h] [rbp-3A8h]
  void *v315; // [rsp+148h] [rbp-3A0h]
  __int64 v316; // [rsp+150h] [rbp-398h]
  char v317; // [rsp+158h] [rbp-390h] BYREF
  void *v318; // [rsp+160h] [rbp-388h] BYREF
  __int64 v319; // [rsp+168h] [rbp-380h]
  unsigned int v320; // [rsp+170h] [rbp-378h]
  void *v321; // [rsp+178h] [rbp-370h]
  __int64 v322; // [rsp+180h] [rbp-368h]
  char v323; // [rsp+188h] [rbp-360h] BYREF
  _QWORD v324[2]; // [rsp+190h] [rbp-358h] BYREF
  unsigned int v325; // [rsp+1A0h] [rbp-348h]
  void *v326; // [rsp+1A8h] [rbp-340h]
  __int64 v327; // [rsp+1B0h] [rbp-338h]
  __int64 v328; // [rsp+1B8h] [rbp-330h] BYREF
  _QWORD v329[2]; // [rsp+1C0h] [rbp-328h] BYREF
  unsigned int v330; // [rsp+1D0h] [rbp-318h]
  void *v331; // [rsp+1D8h] [rbp-310h]
  __int64 v332; // [rsp+1E0h] [rbp-308h]
  __int64 v333; // [rsp+1E8h] [rbp-300h] BYREF
  _QWORD v334[2]; // [rsp+1F0h] [rbp-2F8h] BYREF
  unsigned int v335; // [rsp+200h] [rbp-2E8h]
  char *v336; // [rsp+208h] [rbp-2E0h]
  __int64 v337; // [rsp+210h] [rbp-2D8h]
  __int64 v338; // [rsp+218h] [rbp-2D0h] BYREF
  void *v339; // [rsp+220h] [rbp-2C8h] BYREF
  __int64 v340; // [rsp+228h] [rbp-2C0h]
  unsigned int v341; // [rsp+230h] [rbp-2B8h]
  void *v342; // [rsp+238h] [rbp-2B0h]
  __int64 v343; // [rsp+240h] [rbp-2A8h]
  char v344; // [rsp+248h] [rbp-2A0h] BYREF
  char *v345; // [rsp+250h] [rbp-298h] BYREF
  __int64 v346; // [rsp+258h] [rbp-290h]
  unsigned int v347; // [rsp+260h] [rbp-288h]
  void *ptr; // [rsp+268h] [rbp-280h]
  __int64 v349; // [rsp+270h] [rbp-278h]
  char v350; // [rsp+278h] [rbp-270h] BYREF
  const char *v351; // [rsp+280h] [rbp-268h] BYREF
  size_t v352; // [rsp+288h] [rbp-260h]
  int v353; // [rsp+290h] [rbp-258h]
  __m128 v354; // [rsp+2B0h] [rbp-238h] BYREF
  size_t v355; // [rsp+2C0h] [rbp-228h]
  int v356; // [rsp+2C8h] [rbp-220h]
  void *src; // [rsp+310h] [rbp-1D8h] BYREF
  __int64 v358; // [rsp+318h] [rbp-1D0h]
  unsigned int v359; // [rsp+320h] [rbp-1C8h]
  void *v360; // [rsp+328h] [rbp-1C0h] BYREF
  __int64 v361; // [rsp+330h] [rbp-1B8h]
  __int64 v362; // [rsp+338h] [rbp-1B0h] BYREF
  __int64 v363; // [rsp+340h] [rbp-1A8h]
  unsigned int v364; // [rsp+348h] [rbp-1A0h]
  void *v365; // [rsp+350h] [rbp-198h] BYREF
  __int64 v366; // [rsp+358h] [rbp-190h]
  _QWORD v367[2]; // [rsp+360h] [rbp-188h] BYREF
  unsigned int v368; // [rsp+370h] [rbp-178h]
  void **v369; // [rsp+378h] [rbp-170h] BYREF
  __int64 v370; // [rsp+380h] [rbp-168h]
  void *v371; // [rsp+388h] [rbp-160h] BYREF
  __int64 v372; // [rsp+390h] [rbp-158h]
  unsigned int v373; // [rsp+398h] [rbp-150h]
  void *v374; // [rsp+3A0h] [rbp-148h] BYREF
  __int64 v375; // [rsp+3A8h] [rbp-140h]
  void *v376[2]; // [rsp+3B0h] [rbp-138h] BYREF
  __m128i v377; // [rsp+3C0h] [rbp-128h] BYREF
  void **v378[3]; // [rsp+3F0h] [rbp-F8h] BYREF
  _BYTE v379[40]; // [rsp+408h] [rbp-E0h] BYREF
  void **v380[3]; // [rsp+430h] [rbp-B8h] BYREF
  _QWORD v381[5]; // [rsp+448h] [rbp-A0h] BYREF
  void **v382[3]; // [rsp+470h] [rbp-78h] BYREF
  __int64 v383; // [rsp+488h] [rbp-60h] BYREF
  char v384; // [rsp+4B0h] [rbp-38h] BYREF

  v294 = a1;
  v293 = (char **)a3;
  s1 = a7;
  v283 = a4;
  n = a8;
  v300 = a5;
  v295 = a9;
  v301 = a6;
  v288 = a10;
  v10 = j__strlen("llvm.dbg.cu");
  if ( !sub_20BE520(a1, (__int64)"llvm.dbg.cu", v10) )
  {
    v261 = sub_22BF6F0();
    v62 = 0;
    v262 = sub_9954E0((__int64)v261, v300, v301);
    sub_995540(v262, ": Skipping module without debug info\n");
    return v62;
  }
  src = nullptr;
  v360 = &v362;
  v365 = v367;
  v369 = &v371;
  v374 = v376;
  v292 = &v354;
  v358 = 0;
  v359 = 0;
  v361 = 0;
  v362 = 0;
  v363 = 0;
  v364 = 0;
  v366 = 0;
  v367[0] = 0;
  v367[1] = 0;
  v368 = 0;
  v370 = 0;
  v371 = nullptr;
  v372 = 0;
  v373 = 0;
  v375 = 0;
  v289 = a2;
  if ( a2 != v293 )
  {
    while ( 1 )
    {
      v11 = (__int64)(v289 - 7);
      if ( !v289 )
        v11 = 0;
      if ( (unsigned __int8)sub_22BF9A0(v11) )
        goto LABEL_47;
      v12 = v283;
      v13 = (_QWORD *)(*(_QWORD *)v283 + 16LL * *(unsigned int *)(v283 + 16));
      sub_22C0C60((__m128 *)v376, v13, v13, v283, 1);
      v14 = *(unsigned int *)(v12 + 16);
      v15 = v376[0];
      v16 = *(_QWORD *)v12;
      if ( !(_DWORD)v14 )
        break;
      v17 = (v14 - 1) & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
      v18 = (__int64 *)(v16 + 16LL * v17);
      v19 = *v18;
      if ( v11 != *v18 )
      {
        v123 = 1;
        if ( v19 == -4096 )
          break;
        while ( 1 )
        {
          v124 = v123 + 1;
          v17 = (v14 - 1) & (v123 + v17);
          v18 = (__int64 *)(v16 + 16LL * v17);
          v125 = *v18;
          if ( v11 == *v18 )
            break;
          v123 = v124;
          if ( v125 == -4096 )
            goto LABEL_142;
        }
      }
      sub_22C0C60((__m128 *)v376, v18, (_QWORD *)(v16 + 16 * v14), v283, 1);
      v20 = v376[0];
LABEL_9:
      if ( v15 != v20 )
      {
        v281 = (char *)sub_20AF7C0(v11);
        v21 = (__int64)v281;
        v279 = (__int64)v281;
        *(__m128 *)v376 = _mm_loadh_ps((const double *)&v281);
        sub_22C3D90((__int64)&src, (__int64 *)v376, (const double *)&v376[1]);
        if ( v21 )
        {
          v126 = *(_BYTE *)(v279 - 16);
          v127 = (v126 & 2) != 0 ? *(_QWORD *)(v279 - 32) : v279 - 8LL * ((v126 >> 2) & 0xF) - 16;
          v128 = *(_QWORD *)(v127 + 56);
          if ( v128 )
          {
            v129 = *(_BYTE *)(v128 - 16);
            if ( (v129 & 2) != 0 )
            {
              v130 = *(void ***)(v128 - 32);
              v131 = *(unsigned int *)(v128 - 24);
            }
            else
            {
              v130 = (void **)(v128 - 8LL * ((v129 >> 2) & 0xF) - 16);
              v131 = (*(_WORD *)(v128 - 16) >> 6) & 0xF;
            }
            for ( i = &v130[v131]; i != v130; ++v130 )
            {
              if ( !*v130 )
                BUG();
              if ( *(_BYTE *)*v130 == 26 )
              {
                v376[0] = *v130;
                *(_DWORD *)sub_22C2820((__int64)&v371, (__int64 *)v376) = 0;
              }
            }
          }
        }
        v22 = *(_QWORD *)(v11 + 80);
        v291 = (char **)(v11 + 72);
        v282 = (char **)v22;
        if ( v11 + 72 != v22 )
        {
          if ( !v282 )
LABEL_341:
            BUG();
          v284 = &v371;
          while ( 1 )
          {
            v23 = v282[4];
            v281 = (char *)(v282 + 3);
            if ( v282 + 3 != (char **)v23 )
              break;
LABEL_44:
            v282 = (char **)v282[1];
            if ( v291 == v282 )
              goto LABEL_47;
            if ( !v282 )
              goto LABEL_341;
          }
          while ( 2 )
          {
            if ( !v23 )
              BUG();
            v29 = (unsigned __int64)(v23 - 24);
            if ( *(v23 - 24) == 84 )
              goto LABEL_19;
            if ( dword_2D0CC78 > 0 )
            {
              v30 = *((_QWORD *)v23 + 5);
              if ( v30 )
              {
                v31 = sub_208B290(v30);
                v33 = v32;
                v34 = v31;
                if ( v31 != v32 )
                {
                  if ( *(_BYTE *)(v31 + 32) )
                  {
                    while ( 1 )
                    {
                      v34 = *(_QWORD *)(v34 + 8);
                      if ( v34 == v32 )
                        break;
                      if ( !*(_BYTE *)(v34 + 32) )
                        goto LABEL_28;
                    }
                  }
                  else
                  {
LABEL_28:
                    v290 = v376;
LABEL_29:
                    if ( v279 )
                    {
                      v35 = *(_QWORD **)(v34 + 24);
                      v376[0] = v35;
                      if ( v35 )
                        sub_20B2EE0((__int64)v376, v35, 1);
                      v36 = sub_208B350((__int64 *)v376);
                      if ( v376[0] )
                        sub_20A0850((__int64)v376, (_QWORD *)v376[0]);
                      if ( !v36 && !sub_208AE90(v34) )
                      {
                        v37 = sub_208ACD0(v34 + 72);
                        v354.m128_u64[0] = v37;
                        if ( v373 )
                        {
                          v38 = v371;
                          v39 = (v373 - 1) & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
                          v40 = (char *)v371 + 16 * v39;
                          v41 = *(_QWORD *)v40;
                          if ( v37 == *(_QWORD *)v40 )
                          {
LABEL_42:
                            sub_22C0B30((__m128 *)v376, v40, (_QWORD *)v371 + 2 * v373, (__int64)v284, 1);
                            v42 = *((unsigned int *)v376[0] + 2);
LABEL_43:
                            ++*((_DWORD *)v374 + 4 * v42 + 2);
                            goto LABEL_37;
                          }
                          v112 = 1;
                          if ( v41 != -4096 )
                          {
                            while ( 1 )
                            {
                              if ( !v36 && v41 == -8192 )
                                v36 = (__int64)v40;
                              v39 = (v373 - 1) & (v112 + v39);
                              v40 = (char *)v371 + 16 * v39;
                              v41 = *(_QWORD *)v40;
                              if ( v37 == *(_QWORD *)v40 )
                                goto LABEL_42;
                              if ( v41 == -4096 )
                                break;
                              ++v112;
                            }
                            if ( v36 )
                              v40 = (char *)v36;
                          }
                          v376[0] = v40;
                          v113 = v372 + 1;
                          if ( 4 * ((int)v372 + 1) < 3 * v373 )
                          {
                            if ( v373 - HIDWORD(v372) - v113 > v373 >> 3 )
                            {
LABEL_130:
                              v103 = *(_QWORD *)v40 == -4096;
                              LODWORD(v372) = v113;
                              if ( !v103 )
                                --HIDWORD(v372);
                              *(_QWORD *)v40 = v37;
                              v114 = (__int64)v284;
                              *((_DWORD *)v40 + 2) = 0;
                              sub_22C0B30((__m128 *)v376, v40, &v38[2 * v373], v114, 1);
                              v115 = (unsigned int)v375;
                              v116 = v285 & 0xFFFFFFFF00000000LL;
                              v117 = (void **)v376[0];
                              v118 = (unsigned int)v375 + 1LL;
                              v119 = v354.m128_u64[0];
                              v285 &= 0xFFFFFFFF00000000LL;
                              if ( v118 > HIDWORD(v375) )
                              {
                                v299 = (void **)v354.m128_u64[0];
                                v297 = (void **)v376[0];
                                sub_2237220((__int64)&v374, v290, v118, 16);
                                v115 = (unsigned int)v375;
                                v119 = (unsigned __int64)v299;
                                v117 = v297;
                              }
                              v120 = (unsigned __int64 *)((char *)v374 + 16 * v115);
                              *v120 = v119;
                              v120[1] = v116;
                              v42 = (unsigned int)v375;
                              LODWORD(v375) = v375 + 1;
                              *((_DWORD *)v117 + 2) = v42;
                              goto LABEL_43;
                            }
                            v121 = v373;
LABEL_136:
                            v122 = (__int64 *)v284;
                            sub_22C26A0((__int64)v284, v121);
                            sub_22C09B0(v122, (__int64 *)v292, v376);
                            v37 = v354.m128_u64[0];
                            v38 = v371;
                            v40 = (char *)v376[0];
                            v113 = v372 + 1;
                            goto LABEL_130;
                          }
                        }
                        else
                        {
                          v376[0] = nullptr;
                        }
                        v121 = 2 * v373;
                        goto LABEL_136;
                      }
                    }
LABEL_37:
                    while ( 1 )
                    {
                      v34 = *(_QWORD *)(v34 + 8);
                      if ( v33 == v34 )
                        break;
                      if ( !*(_BYTE *)(v34 + 32) )
                        goto LABEL_29;
                    }
                  }
                }
              }
            }
            v24 = sub_208B330((__int64)(v23 + 24));
            v354.m128_u64[0] = (unsigned __int64)(v23 - 24);
            v354.m128_i8[8] = v24 != 0;
            if ( v364 )
            {
              v25 = v362;
              v26 = (v364 - 1) & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
              v27 = (unsigned __int64 *)(v362 + 16LL * v26);
              v28 = *v27;
              if ( v29 == *v27 )
              {
LABEL_18:
                sub_22C2260((__m128 *)v376, v27, (_QWORD *)(v362 + 16LL * v364), (__int64)&v362, 1);
                goto LABEL_19;
              }
              v100 = 1;
              v101 = nullptr;
              if ( v28 != -4096 )
              {
                while ( 1 )
                {
                  if ( v28 != -8192 || v101 )
                    v27 = v101;
                  v26 = (v364 - 1) & (v100 + v26);
                  v28 = *(_QWORD *)(v362 + 16LL * v26);
                  if ( v29 == v28 )
                  {
                    v27 = (unsigned __int64 *)(v362 + 16LL * v26);
                    goto LABEL_18;
                  }
                  if ( v28 == -4096 )
                    break;
                  ++v100;
                  v101 = v27;
                  v27 = (unsigned __int64 *)(v362 + 16LL * v26);
                }
                if ( !v27 )
                  v27 = (unsigned __int64 *)(v362 + 16LL * v26);
              }
              v376[0] = v27;
              v102 = v363 + 1;
              if ( 4 * ((int)v363 + 1) < 3 * v364 )
              {
                if ( v364 - HIDWORD(v363) - v102 > v364 >> 3 )
                  goto LABEL_116;
                v107 = v364;
LABEL_122:
                sub_22C3F60((__int64)&v362, v107);
                sub_22C0BA0(&v362, (__int64 *)v292, v376);
                v29 = v354.m128_u64[0];
                v25 = v362;
                v27 = (unsigned __int64 *)v376[0];
                v102 = v363 + 1;
LABEL_116:
                v103 = *v27 == -4096;
                LODWORD(v363) = v102;
                if ( !v103 )
                  --HIDWORD(v363);
                *v27 = v29;
                *((_DWORD *)v27 + 2) = 0;
                sub_22C2260((__m128 *)v376, v27, (_QWORD *)(v25 + 16LL * v364), (__int64)&v362, 1);
                v104 = v366;
                *((_DWORD *)v376[0] + 2) = v366;
                v105 = v104;
                if ( v104 >= (unsigned __int64)HIDWORD(v366) )
                {
                  v108 = v104 + 1LL;
                  v109 = v354.m128_u64[0];
                  LOBYTE(v296) = v354.m128_i8[8];
                  if ( HIDWORD(v366) < (unsigned __int64)(v105 + 1) )
                    sub_2237220((__int64)&v365, v367, v108, 16);
                  v110 = v296;
                  v111 = (unsigned __int64 *)((char *)v365 + 16 * (unsigned int)v366);
                  *v111 = v109;
                  v111[1] = (unsigned __int64)v110;
                  LODWORD(v366) = v366 + 1;
                }
                else
                {
                  v106 = (char *)v365 + 16 * v104;
                  *(_QWORD *)v106 = v354.m128_u64[0];
                  v106[8] = v354.m128_i8[8];
                  LODWORD(v366) = v104 + 1;
                }
LABEL_19:
                v23 = *((char **)v23 + 1);
                if ( v281 == v23 )
                  goto LABEL_44;
                continue;
              }
            }
            else
            {
              v376[0] = nullptr;
            }
            break;
          }
          v107 = 2 * v364;
          goto LABEL_122;
        }
      }
LABEL_47:
      v289 = (char **)v289[1];
      if ( v293 == v289 )
        goto LABEL_48;
    }
LABEL_142:
    sub_22C0C60(
      (__m128 *)v376,
      (_QWORD *)(v16 + 16LL * (unsigned int)v14),
      (_QWORD *)(v16 + 16LL * (unsigned int)v14),
      v283,
      1);
    v20 = v376[0];
    goto LABEL_9;
  }
LABEL_48:
  v43 = j__strlen("llvm.dbg.cu");
  v44 = sub_20BE520(v294, (__int64)"llvm.dbg.cu", v43);
  v45 = (_BYTE *)sub_20A0E20(v44, 0);
  if ( *v45 != 16 )
  {
    v46 = *(v45 - 16);
    if ( (v46 & 2) == 0 )
    {
      v45 = *(_BYTE **)&v45[-8 * ((v46 >> 2) & 0xF) - 16];
      if ( v45 )
        goto LABEL_51;
LABEL_164:
      v48 = &byte_22F0C30;
      v280 = j__strlen(&byte_22F0C30);
      goto LABEL_54;
    }
    v45 = **((_BYTE ***)v45 - 4);
    if ( !v45 )
      goto LABEL_164;
  }
LABEL_51:
  v47 = *(v45 - 16);
  if ( (v47 & 2) != 0 )
  {
    v48 = **((const char ***)v45 - 4);
    if ( v48 )
      goto LABEL_53;
LABEL_162:
    v280 = 0;
    goto LABEL_54;
  }
  v48 = *(const char **)&v45[-8 * ((v47 >> 2) & 0xF) - 16];
  if ( !v48 )
    goto LABEL_162;
LABEL_53:
  v49 = sub_20A0B40((__int64)v48);
  v280 = v50;
  v48 = (const char *)v49;
LABEL_54:
  v312 = nullptr;
  v313 = 0;
  v314 = 0;
  operator delete(0, 0, 8);
  v51 = *(unsigned int *)(v283 + 16);
  v314 = v51;
  if ( (_DWORD)v51 )
  {
    v312 = (char *)sub_22300B0(16 * v51, 8);
    v52 = *(const void **)v283;
    v313 = *(_QWORD *)(v283 + 8);
    memcpy(v312, v52, 16LL * v314);
  }
  else
  {
    v312 = nullptr;
    v313 = 0;
  }
  v316 = 0;
  v282 = &v312;
  v315 = &v317;
  v53 = *(_DWORD *)(v283 + 32);
  v291 = (char **)(v283 + 24);
  if ( v53 )
    sub_22C0620((__int64)(v282 + 3), (__int64 *)(v283 + 24));
  v318 = nullptr;
  v319 = 0;
  v320 = 0;
  operator delete(0, 0, 8);
  v320 = v359;
  if ( v359 )
  {
    v318 = (void *)sub_22300B0(16LL * v359, 8);
    v319 = v358;
    memcpy(v318, src, 16LL * v320);
  }
  else
  {
    v318 = nullptr;
    v319 = 0;
  }
  v322 = 0;
  v299 = &v318;
  v321 = &v323;
  if ( (_DWORD)v361 )
    sub_22C0620((__int64)(v299 + 3), (__int64 *)&v360);
  v54 = v283;
  v324[0] = 0;
  v284 = (void **)v324;
  v324[1] = 0;
  v304 = v283 + 40;
  v325 = 0;
  sub_22C0710((__int64)v324, v283 + 40);
  v327 = 0;
  v326 = &v328;
  v55 = (__int64 *)(v54 + 64);
  LODWORD(v54) = *(_DWORD *)(v54 + 72);
  v292 = (__m128 *)v55;
  if ( (_DWORD)v54 )
    sub_22C0790((__int64)(v284 + 3), (__int64 **)v55);
  v330 = 0;
  v329[0] = 0;
  v329[1] = 0;
  v296 = v329;
  sub_22C0710((__int64)v329, (__int64)&v362);
  v332 = 0;
  v331 = &v333;
  if ( (_DWORD)v366 )
    sub_22C0790((__int64)(v296 + 3), (__int64 **)&v365);
  v56 = v283;
  v334[0] = 0;
  v281 = (char *)v334;
  v334[1] = 0;
  v302 = v283 + 80;
  v335 = 0;
  sub_22C0710((__int64)v334, v283 + 80);
  v57 = *(_DWORD *)(v56 + 112);
  v337 = 0;
  v336 = (char *)&v338;
  v293 = (char **)(v56 + 104);
  if ( v57 )
    sub_22C0EA0((__int64)(v281 + 24), v56 + 104);
  v339 = nullptr;
  v340 = 0;
  v341 = 0;
  operator delete(0, 0, 8);
  v58 = *(unsigned int *)(v283 + 136);
  v341 = v58;
  if ( (_DWORD)v58 )
  {
    v339 = (void *)sub_22300B0(16 * v58, 8);
    v59 = *(const void **)(v283 + 120);
    v340 = *(_QWORD *)(v283 + 128);
    memcpy(v339, v59, 16LL * v341);
  }
  else
  {
    v339 = nullptr;
    v340 = 0;
  }
  v343 = 0;
  v297 = &v339;
  v342 = &v344;
  v60 = *(_DWORD *)(v283 + 152);
  v294 = v283 + 144;
  if ( v60 )
    sub_22C08A0((__int64)(v297 + 3), (__int64 **)(v283 + 144));
  v345 = nullptr;
  v346 = 0;
  v347 = 0;
  operator delete(0, 0, 8);
  v347 = v373;
  if ( v373 )
  {
    v345 = (char *)sub_22300B0(16LL * v373, 8);
    v346 = v372;
    memcpy(v345, v371, 16LL * v347);
  }
  else
  {
    v345 = nullptr;
    v346 = 0;
  }
  v349 = 0;
  v289 = &v345;
  ptr = &v350;
  if ( (_DWORD)v375 )
    sub_22C08A0((__int64)(v289 + 3), (__int64 **)&v374);
  v61 = (__int64 *)v321;
  v311 = 0;
  *(_OWORD *)v310 = 0;
  v62 = 1;
  v285 = (size_t)v321 + 16 * (unsigned int)v322;
  if ( v321 != (void *)v285 )
  {
    v290 = (void **)&v354;
    v298.m128_u64[0] = (unsigned __int64)v310;
    while ( 1 )
    {
      if ( v61[1] )
        goto LABEL_78;
      v63 = *v61;
      if ( v314 )
      {
        v64 = (v314 - 1) & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
        v65 = &v312[16 * v64];
        v66 = *(_QWORD *)v65;
        if ( v63 == *(_QWORD *)v65 )
          goto LABEL_82;
        v232 = 1;
        if ( v66 != -4096 )
          break;
      }
LABEL_283:
      sub_22C0C60((__m128 *)v376, &v312[16 * v314], &v312[16 * v314], (__int64)v282, 1);
      v67 = (unsigned int *)v376[0];
LABEL_83:
      sub_22C0C60((__m128 *)v376, &v312[16 * v314], &v312[16 * v314], (__int64)v282, 1);
      if ( v376[0] == v67
        || (v68 = (char *)v315 + 16 * v67[2], v68 == (_QWORD *)((char *)v315 + 16 * (unsigned int)v316)) )
      {
        if ( v288 )
        {
          v251 = v382;
          v252 = (void **)j__strlen("metadata");
          sub_E59960((void ***)v376, (void **)"metadata", v252);
          sub_E598C0((__int64)&v377.m128i_i64[1], "DISubprogram");
          v253 = (void **)j__strlen("name");
          sub_E59960(v378, (void **)"name", v253);
          v254 = sub_20CC3B0(*v61);
          sub_E59830((__int64)v379, (__int64)v254, v255);
          v256 = (void **)j__strlen("action");
          sub_E59960(v380, (void **)"action", v256);
          sub_E598C0((__int64)v381, "not-generate");
          sub_100DB20((__int64)&v351, (__int64)v376, 3, v257, v258, v259);
          v260 = (__int16 *)v290;
          v354.m128_i16[0] = 7;
          v354.m128_u64[1] = (unsigned __int64)v351;
          v351 = nullptr;
          v355 = v352;
          v352 = 0;
          v356 = v353;
          v353 = 0;
          sub_E5E110(v298.m128_i64[0], (__int64)v290);
          sub_222B2A0(v260);
          sub_E5D2E0((__int64 *)&v351);
          do
          {
            while ( 1 )
            {
              v251 -= 8;
              sub_222B2A0((__int16 *)v251 + 12);
              if ( !*v251 )
                break;
              sub_22BF9F0(*v251);
              if ( v251 == (void ***)v376 )
                goto LABEL_90;
            }
          }
          while ( v251 != (void ***)v376 );
          goto LABEL_90;
        }
        v230 = sub_22BF6F0();
        v231 = sub_995540((__int64)v230, "ERROR: ");
        v71 = sub_9954E0(v231, s1, n);
        v72 = " did not generate DISubprogram for ";
        goto LABEL_88;
      }
      if ( v68[1] )
      {
        if ( v288 )
        {
          v241 = v382;
          v242 = (void **)j__strlen("metadata");
          sub_E59960((void ***)v376, (void **)"metadata", v242);
          sub_E598C0((__int64)&v377.m128i_i64[1], "DISubprogram");
          v243 = (void **)j__strlen("name");
          sub_E59960(v378, (void **)"name", v243);
          v244 = sub_20CC3B0(*v61);
          sub_E59830((__int64)v379, (__int64)v244, v245);
          v246 = (void **)j__strlen("action");
          sub_E59960(v380, (void **)"action", v246);
          sub_E598C0((__int64)v381, "drop");
          sub_100DB20((__int64)&v351, (__int64)v376, 3, v247, v248, v249);
          v250 = (__int16 *)v290;
          v354.m128_i16[0] = 7;
          v354.m128_u64[1] = (unsigned __int64)v351;
          v351 = nullptr;
          v355 = v352;
          v352 = 0;
          v356 = v353;
          v353 = 0;
          sub_E5E110(v298.m128_i64[0], (__int64)v290);
          sub_222B2A0(v250);
          sub_E5D2E0((__int64 *)&v351);
          do
          {
            while ( 1 )
            {
              v241 -= 8;
              sub_222B2A0((__int16 *)v241 + 12);
              if ( !*v241 )
                break;
              sub_22BF9F0(*v241);
              if ( v241 == (void ***)v376 )
                goto LABEL_90;
            }
          }
          while ( v241 != (void ***)v376 );
          goto LABEL_90;
        }
        v69 = sub_22BF6F0();
        v70 = sub_995540((__int64)v69, "ERROR: ");
        v71 = sub_9954E0(v70, s1, n);
        v72 = " dropped DISubprogram of ";
LABEL_88:
        v73 = sub_995540(v71, v72);
        v74 = sub_20CC3B0(*v61);
        v76 = sub_9954E0(v73, v74, v75);
        v77 = sub_995540(v76, " from ");
        v78 = sub_9954E0(v77, v48, v280);
        v79 = *(_BYTE **)(v78 + 32);
        if ( (unsigned __int64)v79 >= *(_QWORD *)(v78 + 24) )
        {
          v62 = 0;
          sub_227BA10(v78, 10);
          goto LABEL_78;
        }
        *(_QWORD *)(v78 + 32) = v79 + 1;
        *v79 = 10;
LABEL_90:
        v62 = 0;
        v61 += 2;
        if ( (__int64 *)v285 == v61 )
          goto LABEL_91;
      }
      else
      {
LABEL_78:
        v61 += 2;
        if ( (__int64 *)v285 == v61 )
          goto LABEL_91;
      }
    }
    while ( 1 )
    {
      v233 = v232 + 1;
      v64 = (v314 - 1) & (v64 + v232);
      v65 = &v312[16 * v64];
      v234 = *(_QWORD *)v65;
      if ( v63 == *(_QWORD *)v65 )
        break;
      v232 = v233;
      if ( v234 == -4096 )
        goto LABEL_283;
    }
LABEL_82:
    sub_22C0C60((__m128 *)v376, v65, &v312[16 * v314], (__int64)v282, 1);
    v67 = (unsigned int *)v376[0];
    goto LABEL_83;
  }
LABEL_91:
  v80 = (char *)v331;
  v285 = (size_t)v331 + 16 * (unsigned int)v332;
  if ( v331 == (void *)v285 )
    goto LABEL_170;
  LOBYTE(v290) = 1;
  v298.m128_u64[0] = (unsigned __int64)&v308;
  v305 = v62;
  v303 = _mm_loadh_ps((const double *)v298.m128_u64);
  do
  {
    if ( v80[8] )
      goto LABEL_103;
    v90 = *(unsigned __int8 **)v80;
    if ( !v335 )
    {
LABEL_168:
      sub_22C0CD0(
        (__m128 *)v376,
        (_QWORD *)(v334[0] + 16LL * v335),
        (_QWORD *)(v334[0] + 16LL * v335),
        (__int64)v281,
        1);
      v94 = (unsigned int *)v376[0];
      goto LABEL_108;
    }
    v91 = (v335 - 1) & (((unsigned int)v90 >> 9) ^ ((unsigned int)v90 >> 4));
    v92 = (unsigned __int8 **)(v334[0] + 16LL * v91);
    v93 = *v92;
    if ( v90 != *v92 )
    {
      v133 = 1;
      if ( v93 == (unsigned __int8 *)-4096LL )
        goto LABEL_168;
      while ( 1 )
      {
        v134 = v133 + 1;
        v91 = (v335 - 1) & (v133 + v91);
        v92 = (unsigned __int8 **)(v334[0] + 16LL * v91);
        v135 = *v92;
        if ( v90 == *v92 )
          break;
        v133 = v134;
        if ( v135 == (unsigned __int8 *)-4096LL )
          goto LABEL_168;
      }
    }
    sub_22C0CD0((__m128 *)v376, v92, (_QWORD *)(v334[0] + 16LL * v335), (__int64)v281, 1);
    v94 = (unsigned int *)v376[0];
LABEL_108:
    sub_22C0CD0((__m128 *)v376, (_QWORD *)(v334[0] + 16LL * v335), (_QWORD *)(v334[0] + 16LL * v335), (__int64)v281, 1);
    if ( v376[0] == v94 || (v95 = &v336[32 * v94[2]], v95 == &v336[32 * (unsigned int)v337]) || *((_QWORD *)v95 + 3) )
    {
      v96 = sub_2090080((__int64)v90);
      v97 = sub_20CC3B0(v96);
      v98 = *((_QWORD *)v90 + 5);
      v308 = v97;
      v309 = v99;
      if ( (*(_BYTE *)(v98 + 7) & 0x10) != 0 )
      {
        v351 = sub_20CC3B0(v98);
        v352 = v81;
      }
      else
      {
        v351 = "no-name";
        v352 = j__strlen("no-name");
      }
      v82 = *v90;
      v298.m128_u64[0] = (unsigned __int64)&v306;
      v298 = _mm_loadh_ps((const double *)v298.m128_u64);
      v83 = sub_20900C0((unsigned int)(v82 - 29));
      si128 = _mm_load_si128((const __m128i *)&v303);
      v306 = v83;
      v85 = _mm_load_si128((const __m128i *)&v298);
      *(__m128i *)v376 = si128;
      v377 = v85;
      if ( !v325 )
        goto LABEL_251;
      v86 = (v325 - 1) & (((unsigned int)v90 >> 9) ^ ((unsigned int)v90 >> 4));
      v87 = (unsigned __int8 **)(v324[0] + 16LL * v86);
      if ( v90 == *v87 )
        goto LABEL_96;
      if ( *v87 == (unsigned __int8 *)-4096LL )
      {
LABEL_251:
        sub_22C0CD0(&v354, (_QWORD *)(v324[0] + 16LL * v325), (_QWORD *)(v324[0] + 16LL * v325), (__int64)v284, 1);
        v88 = v354.m128_u64[0];
      }
      else
      {
        v196 = 1;
        while ( 1 )
        {
          v86 = (v325 - 1) & (v196 + v86);
          v87 = (unsigned __int8 **)(v324[0] + 16LL * v86);
          if ( v90 == *v87 )
            break;
          ++v196;
          if ( *v87 == (unsigned __int8 *)-4096LL )
            goto LABEL_251;
        }
LABEL_96:
        sub_22C0CD0(&v354, v87, (_QWORD *)(v324[0] + 16LL * v325), (__int64)v284, 1);
        v88 = v354.m128_u64[0];
      }
      sub_22C0CD0(&v354, (_QWORD *)(v324[0] + 16LL * v325), (_QWORD *)(v324[0] + 16LL * v325), (__int64)v284, 1);
      if ( v88 == v354.m128_u64[0]
        || (v89 = (char *)v326 + 16 * *(unsigned int *)(v88 + 8), v89 == (char *)v326 + 16 * (unsigned int)v327) )
      {
        if ( v288 )
        {
          sub_22C22D0((__int64 *)v376, "not-generate");
          goto LABEL_102;
        }
        v238 = sub_22BF6F0();
        v239 = sub_995540((__int64)v238, "WARNING: ");
        v221 = sub_9954E0(v239, s1, n);
        v222 = " did not generate DILocation for ";
      }
      else
      {
        if ( !v89[8] )
          goto LABEL_103;
        if ( v288 )
        {
          sub_22C22D0((__int64 *)v376, "drop");
LABEL_102:
          LOBYTE(v290) = 0;
          goto LABEL_103;
        }
        v219 = sub_22BF6F0();
        v220 = sub_995540((__int64)v219, "WARNING: ");
        v221 = sub_9954E0(v220, s1, n);
        v222 = " dropped DILocation of ";
      }
      v223 = sub_995540(v221, v222);
      sub_2045580(v90, v223);
      v224 = sub_995540(v223, " (BB: ");
      v225 = sub_9954E0(v224, v351, v352);
      v226 = sub_995540(v225, ", Fn: ");
      v227 = sub_9954E0(v226, v308, v309);
      v228 = sub_995540(v227, ", File: ");
      v229 = sub_9954E0(v228, v48, v280);
      sub_995540(v229, ")\n");
      goto LABEL_102;
    }
LABEL_103:
    v80 += 16;
  }
  while ( (char *)v285 != v80 );
  v62 = v305;
  LOBYTE(v62) = (unsigned __int8)v290 & v305;
LABEL_170:
  v136 = (__int64 *)v342;
  v285 = (size_t)v342 + 16 * (unsigned int)v343;
  if ( v342 == (void *)v285 )
    goto LABEL_192;
  v137 = 1;
  v305 = v62;
  v290 = (void **)&v351;
  v138 = (__int64)v289;
  v298.m128_u64[0] = (unsigned __int64)&v354;
  v303.m128_u64[0] = (unsigned __int64)v310;
  while ( 2 )
  {
    v167 = *v136;
    if ( v347 )
    {
      v139 = (v347 - 1) & (((unsigned int)v167 >> 9) ^ ((unsigned int)v167 >> 4));
      v140 = &v345[16 * v139];
      v141 = *(_QWORD *)v140;
      if ( v167 != *(_QWORD *)v140 )
      {
        v235 = 1;
        if ( v141 == -4096 )
          goto LABEL_190;
        while ( 1 )
        {
          v236 = v235 + 1;
          v139 = (v347 - 1) & (v139 + v235);
          v140 = &v345[16 * v139];
          v237 = *(_QWORD *)v140;
          if ( v167 == *(_QWORD *)v140 )
            break;
          v235 = v236;
          if ( v237 == -4096 )
            goto LABEL_190;
        }
      }
      sub_22C0D40((__m128 *)v376, v140, &v345[16 * v347], v138, 1);
      v142 = (unsigned int *)v376[0];
    }
    else
    {
LABEL_190:
      sub_22C0D40((__m128 *)v376, &v345[16 * v347], &v345[16 * v347], v138, 1);
      v142 = (unsigned int *)v376[0];
    }
    sub_22C0D40((__m128 *)v376, &v345[16 * v347], &v345[16 * v347], v138, 1);
    if ( v376[0] == v142 )
      goto LABEL_188;
    v143 = (char *)ptr + 16 * v142[2];
    if ( v143 == (_DWORD *)((char *)ptr + 16 * (unsigned int)v349) || v143[2] >= *((_DWORD *)v136 + 2) )
      goto LABEL_188;
    if ( v288 )
    {
      v197 = (void **)j__strlen("metadata");
      sub_E59960((void ***)v376, (void **)"metadata", v197);
      v198 = j__strlen("dbg-var-intrinsic");
      sub_E59830((__int64)&v377.m128i_i64[1], (__int64)"dbg-var-intrinsic", v198);
      v199 = (void **)j__strlen("name");
      sub_E59960(v378, (void **)"name", v199);
      v200 = sub_22BFB90(*v136);
      sub_E59830((__int64)v379, v200, v201);
      v202 = (void **)j__strlen("fn-name");
      sub_E59960(v380, (void **)"fn-name", v202);
      v203 = *v136;
      v204 = *(_BYTE *)(*v136 - 16);
      if ( (v204 & 2) != 0 )
        v205 = *(unsigned __int8 ***)(v203 - 32);
      else
        v205 = (unsigned __int8 **)(-16 - 8LL * ((v204 >> 2) & 0xF) + v203);
      v206 = sub_206D730(*v205);
      v207 = *(v206 - 16);
      if ( (v207 & 2) != 0 )
      {
        v208 = *(_QWORD *)(*((_QWORD *)v206 - 4) + 16LL);
        if ( v208 )
        {
LABEL_265:
          v208 = sub_20A0B40(v208);
          goto LABEL_266;
        }
      }
      else
      {
        v208 = *(_QWORD *)&v206[-8 * ((v207 >> 2) & 0xF)];
        if ( v208 )
          goto LABEL_265;
      }
      v209 = 0;
LABEL_266:
      sub_E59830((__int64)v381, v208, v209);
      v210 = (void **)j__strlen("action");
      sub_E59960(v382, (void **)"action", v210);
      v211 = j__strlen("drop");
      sub_E59830((__int64)&v383, (__int64)"drop", v211);
      v212 = (__int64 *)v290;
      sub_100DB20((__int64)v290, (__int64)v376, 4, v213, v214, v215);
      v216 = v298.m128_u64[0];
      v354.m128_i16[0] = 7;
      v354.m128_u64[1] = (unsigned __int64)v351;
      v351 = nullptr;
      v355 = v352;
      v352 = 0;
      v356 = v353;
      v353 = 0;
      sub_E5E110(v303.m128_i64[0], v298.m128_i64[0]);
      v217 = (__int16 *)v216;
      v218 = (__int16 *)&v384;
      sub_222B2A0(v217);
      sub_E5D2E0(v212);
      do
      {
        while ( 1 )
        {
          v218 -= 32;
          sub_222B2A0(v218 + 12);
          if ( !*(_QWORD *)v218 )
            break;
          sub_22BF9F0(*(void ***)v218);
          if ( v218 == (__int16 *)v376 )
            goto LABEL_187;
        }
      }
      while ( v218 != (__int16 *)v376 );
      goto LABEL_187;
    }
    v144 = sub_22BF6F0();
    v145 = sub_995540((__int64)v144, "WARNING: ");
    v146 = sub_9954E0(v145, s1, n);
    v147 = sub_995540(v146, " drops dbg.value()/dbg.declare() for ");
    v148 = *v136;
    v149 = v147;
    v150 = *(_BYTE *)(*v136 - 16);
    if ( (v150 & 2) != 0 )
    {
      v151 = *(const void **)(*(_QWORD *)(v148 - 32) + 8LL);
      if ( v151 )
        goto LABEL_180;
LABEL_260:
      v152 = 0;
    }
    else
    {
      v151 = *(const void **)(-16 - 8LL * ((v150 >> 2) & 0xF) + v148 + 8);
      if ( !v151 )
        goto LABEL_260;
LABEL_180:
      v151 = (const void *)sub_20A0B40((__int64)v151);
    }
    v153 = sub_9954E0(v149, v151, v152);
    v154 = sub_995540(v153, " from ");
    v155 = sub_995540(v154, "function ");
    v156 = *v136;
    v157 = v155;
    v158 = *(_BYTE *)(*v136 - 16);
    if ( (v158 & 2) != 0 )
      v159 = *(unsigned __int8 ***)(v156 - 32);
    else
      v159 = (unsigned __int8 **)(-16 - 8LL * ((v158 >> 2) & 0xF) + v156);
    v160 = sub_206D730(*v159);
    v161 = *(v160 - 16);
    if ( (v161 & 2) != 0 )
    {
      v162 = *(const void **)(*((_QWORD *)v160 - 4) + 16LL);
      if ( v162 )
        goto LABEL_185;
LABEL_257:
      v163 = 0;
    }
    else
    {
      v162 = *(const void **)&v160[-8 * ((v161 >> 2) & 0xF)];
      if ( !v162 )
        goto LABEL_257;
LABEL_185:
      v162 = (const void *)sub_20A0B40((__int64)v162);
    }
    v164 = sub_9954E0(v157, v162, v163);
    v165 = sub_995540(v164, " (file ");
    v166 = sub_9954E0(v165, v48, v280);
    sub_995540(v166, ")\n");
LABEL_187:
    v137 = 0;
LABEL_188:
    v136 += 2;
    if ( (__int64 *)v285 != v136 )
      continue;
    break;
  }
  v62 = (unsigned __int8)(v137 & v305);
LABEL_192:
  v168 = j__strlen(&byte_22F0C30);
  v169 = (std::_V2 *)n;
  if ( v168 == n )
  {
    if ( !n || (v170 = s1, v240 = n, v169 = (std::_V2 *)s1, !memcmp(s1, &byte_22F0C30, n)) )
    {
      v170 = (void *)v300;
      v285 = v301;
    }
    else
    {
      v285 = v240;
    }
  }
  else
  {
    v285 = n;
    v170 = s1;
  }
  v171 = v288;
  if ( v288 && v310[1] != v310[0] )
  {
    LODWORD(v306) = 0;
    v307 = std::_V2::system_category(v169);
    sub_227D450((std::_V2 *)&v354, v295, (__int64)v171, (__int64)&v306, 7);
    if ( (_DWORD)v306 )
    {
      v263 = sub_227D6D0();
      v264 = (__int64 *)sub_995540((__int64)v263, "Could not open file: ");
      (*(void (__fastcall **)(void **, __int64, _QWORD))(*(_QWORD *)v307 + 32LL))(v376, v307, (unsigned int)v306);
      v265 = sub_227BF10(v264, (unsigned __int8 *)v376[0], (size_t)v376[1]);
      v266 = sub_995540((__int64)v265, ", ");
      v267 = sub_9954E0(v266, v295, (size_t)v288);
      v268 = *(_BYTE **)(v267 + 32);
      if ( (unsigned __int64)v268 >= *(_QWORD *)(v267 + 24) )
      {
        sub_227BA10(v267, 10);
      }
      else
      {
        *(_QWORD *)(v267 + 32) = v268 + 1;
        *v268 = 10;
      }
      if ( v376[0] != &v377 )
        operator delete(v376[0]);
    }
    else
    {
      v288 = (__int64 *)&v308;
      sub_227D5A0((__int64)&v308, (__int64)&v354);
      if ( (v309 & 1) == 0 )
      {
        v269 = sub_995540((__int64)&v354, "{\"file\":\"");
        v270 = sub_9954E0(v269, v48, v280);
        sub_995540(v270, "\", ");
        v271 = j__strlen(&byte_22F0C30);
        if ( n == v271 && (!n || !memcmp(s1, &byte_22F0C30, n)) )
        {
          v272 = "no-name";
          v273 = j__strlen("no-name");
        }
        else
        {
          v272 = (const char *)s1;
          v273 = n;
        }
        v274 = sub_995540((__int64)&v354, "\"pass\":\"");
        v275 = sub_9954E0(v274, v272, v273);
        sub_995540(v275, "\", ");
        LOWORD(v376[0]) = 8;
        v376[1] = v310[0];
        v276 = v310[1];
        *(_OWORD *)v310 = 0;
        v377.m128i_i64[0] = (__int64)v276;
        v277 = v311;
        v311 = 0;
        v377.m128i_i64[1] = v277;
        sub_222C650((__int64)&v351, (unsigned __int16 *)v376, 1u);
        sub_222B2A0((__int16 *)v376);
        v278 = sub_995540((__int64)&v354, "\"bugs\": ");
        v376[0] = &v377;
        v381[1] = v278;
        v380[2] = nullptr;
        v381[0] = 0;
        v381[2] = 0;
        v376[1] = (void *)0x1000000001LL;
        v377.m128i_i32[0] = 0;
        v377.m128i_i8[4] = 0;
        sub_222CAC0((__int64)v376, (unsigned __int16 *)&v351);
        if ( v376[0] != &v377 )
          free(v376[0]);
        sub_995540((__int64)&v354, "}\n");
        sub_222B2A0((__int16 *)&v351);
      }
      sub_10DFEF0(v288);
      sub_227D4F0((__int64 *)&v354);
    }
    sub_227B600((int *)&v354);
  }
  v172 = sub_22BF6F0();
  v173 = sub_9954E0((__int64)v172, v170, v285);
  if ( (_BYTE)v62 )
    sub_995540(v173, ": PASS\n");
  else
    sub_995540(v173, ": FAIL\n");
  v174 = v283;
  operator delete(*(_QWORD *)v283, 16LL * *(unsigned int *)(v283 + 16), 8);
  v175 = v359;
  *(_DWORD *)(v174 + 16) = v359;
  if ( (_DWORD)v175 )
  {
    v176 = (void *)sub_22300B0(16 * v175, 8);
    v177 = v283;
    v178 = src;
    *(_QWORD *)(v283 + 8) = v358;
    v179 = *(unsigned int *)(v177 + 16);
    *(_QWORD *)v177 = v176;
    memcpy(v176, v178, 16 * v179);
  }
  else
  {
    *(_QWORD *)v174 = 0;
    *(_QWORD *)(v174 + 8) = 0;
  }
  sub_22C0620((__int64)v291, (__int64 *)&v360);
  sub_22C0710(v304, (__int64)&v362);
  sub_22C0790((__int64)v292, (__int64 **)&v365);
  sub_22C0710(v302, (__int64)v367);
  sub_22C0EA0((__int64)v293, (__int64)&v369);
  v180 = v283;
  operator delete(*(_QWORD *)(v283 + 120), 16LL * *(unsigned int *)(v283 + 136), 8);
  v181 = v373;
  *(_DWORD *)(v180 + 136) = v373;
  if ( (_DWORD)v181 )
  {
    v182 = (void *)sub_22300B0(16 * v181, 8);
    v183 = v283;
    v184 = v371;
    *(_QWORD *)(v283 + 128) = v372;
    v185 = *(unsigned int *)(v183 + 136);
    *(_QWORD *)(v183 + 120) = v182;
    memcpy(v182, v184, 16 * v185);
  }
  else
  {
    *(_QWORD *)(v180 + 120) = 0;
    *(_QWORD *)(v180 + 128) = 0;
  }
  sub_22C08A0(v294, (__int64 **)&v374);
  v186 = (__int16 *)v310[1];
  v187 = (__int16 *)v310[0];
  if ( v310[1] != v310[0] )
  {
    do
    {
      v188 = v187;
      v187 += 20;
      sub_222B2A0(v188);
    }
    while ( v186 != v187 );
    v187 = (__int16 *)v310[0];
  }
  if ( v187 )
    operator delete(v187);
  if ( ptr != v289 + 5 )
    free(ptr);
  operator delete(v345, 16LL * v347, 8);
  if ( v342 != v297 + 5 )
    free(v342);
  operator delete(v339, 16LL * v341, 8);
  v189 = v336;
  v190 = &v336[32 * (unsigned int)v337];
  if ( v336 != v190 )
  {
    do
    {
      while ( 1 )
      {
        v190 -= 32;
        v191 = *((_QWORD *)v190 + 3);
        if ( v191 == -4096 || v191 == 0 || v191 == -8192 )
          break;
        sub_20CB110((_QWORD *)v190 + 1);
        if ( v189 == v190 )
          goto LABEL_219;
      }
    }
    while ( v189 != v190 );
LABEL_219:
    v190 = v336;
  }
  if ( v190 != v281 + 40 )
    free(v190);
  operator delete(v334[0], 16LL * v335, 8);
  if ( v331 != v296 + 5 )
    free(v331);
  operator delete(v329[0], 16LL * v330, 8);
  if ( v326 != v284 + 5 )
    free(v326);
  operator delete(v324[0], 16LL * v325, 8);
  if ( v321 != v299 + 5 )
    free(v321);
  operator delete(v318, 16LL * v320, 8);
  if ( v315 != v282 + 5 )
    free(v315);
  operator delete(v312, 16LL * v314, 8);
  if ( v374 != v376 )
    free(v374);
  operator delete(v371, 16LL * v373, 8);
  v192 = v369;
  v193 = &v369[4 * (unsigned int)v370];
  if ( v369 != v193 )
  {
    do
    {
      while ( 1 )
      {
        v193 -= 4;
        v194 = (char *)v193[3];
        if ( v194 == nullptr || v194 + 4096 == nullptr || v194 == (char *)-8192LL )
          break;
        sub_20CB110(v193 + 1);
        if ( v192 == v193 )
          goto LABEL_236;
      }
    }
    while ( v192 != v193 );
LABEL_236:
    v193 = v369;
  }
  if ( v193 != &v371 )
    free(v193);
  operator delete(v367[0], 16LL * v368, 8);
  if ( v365 != v367 )
    free(v365);
  operator delete(v362, 16LL * v364, 8);
  if ( v360 != &v362 )
    free(v360);
  operator delete(src, 16LL * v359, 8);
  return v62;
}
