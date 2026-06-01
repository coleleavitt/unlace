__int64 __fastcall sub_5194E0(__int64 a1, unsigned __int8 *a2, _QWORD *a3, __int64 *a4)
{
  unsigned __int8 *v4; // r14
  __int64 v5; // rbp
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 result; // rax
  __int64 (__fastcall *v8)(__int64); // rax
  char v9; // al
  __int64 v10; // r12
  __int64 v11; // rax
  _OWORD *v12; // rax
  int v13; // r15d
  _QWORD *v14; // rdx
  unsigned int v15; // ebx
  unsigned int *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // rax
  unsigned int *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  _QWORD *v28; // rcx
  unsigned int v29; // eax
  int v30; // r13d
  unsigned int v31; // eax
  int v32; // ebx
  int v33; // r8d
  __int64 v34; // rdi
  size_t v35; // r10
  __int64 v36; // rsi
  char *v37; // rax
  int *v38; // rcx
  int *v39; // rdx
  int v40; // r9d
  unsigned int v41; // ebx
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rsi
  unsigned int v45; // ecx
  __int64 v46; // rdi
  unsigned int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  int *v51; // rax
  int *v52; // rdx
  int v53; // ecx
  __int64 v54; // r13
  _QWORD *v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 *v59; // rcx
  unsigned int v60; // r13d
  __m128i *(__fastcall *v61)(__m128i *, __int64, __int64, __int64, const __m128i *); // r9
  unsigned int v62; // eax
  __int64 v63; // rdx
  unsigned int v64; // ecx
  const __m128i *v65; // r15
  __int32 v66; // eax
  void *v67; // rdi
  __int32 v68; // eax
  __int32 v69; // eax
  void *v70; // rbx
  int v71; // eax
  __m128i v72; // xmm0
  __m128i *(__fastcall *v73)(__m128i *, __int64, __int64, __int64, const __m128i *); // r9
  unsigned int v74; // eax
  __int64 v75; // rdx
  unsigned int v76; // ecx
  const __m128i *v77; // r15
  __int32 v78; // eax
  void *v79; // rdi
  __int32 v80; // eax
  __int32 v81; // eax
  void *v82; // rbx
  __int32 v83; // eax
  __m128i v84; // xmm0
  __int64 v85; // rax
  __int64 (__fastcall *v86)(__int64, __int64, __int64, __int64); // rax
  const __m128i *v87; // r8
  unsigned int v88; // eax
  __m128i *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rdx
  __m128i si128; // xmm0
  void *v94; // r15
  __int64 v95; // rdx
  void *v96; // r15
  void *v97; // r13
  void *v98; // r13
  void *v99; // r13
  void *v100; // rbx
  _QWORD *v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 *v105; // r15
  __int64 v106; // r14
  __int64 v107; // rax
  __int64 v108; // r13
  void *v109; // rbp
  void *v110; // rbp
  __int64 v111; // rsi
  __int64 (__fastcall *v112)(__int64); // rax
  unsigned __int8 **v113; // rdi
  unsigned int v114; // ebx
  unsigned __int8 *v115; // r8
  unsigned int v116; // eax
  __int64 v117; // rdx
  unsigned int v118; // ecx
  unsigned int v119; // eax
  __int64 v120; // rdx
  unsigned int v121; // ecx
  __int64 (__fastcall *v122)(__int64); // rax
  __int64 *v123; // rdx
  unsigned int v124; // ebx
  __int64 v125; // r8
  unsigned int v126; // eax
  __int64 v127; // rdx
  unsigned int v128; // ecx
  unsigned int v129; // eax
  __int64 v130; // rsi
  __int64 v131; // rdx
  unsigned int v132; // ecx
  __int64 (__fastcall *v133)(__int64, __int64, __int64, __int64); // rax
  const __m128i *v134; // r8
  unsigned int v135; // eax
  __m128i *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rdx
  __int64 v139; // rdx
  __m128i v140; // xmm0
  void *v141; // r15
  __int64 v142; // rdx
  void *v143; // r15
  int v144; // edi
  unsigned int v145; // edx
  int *v146; // rdx
  int *v147; // rdi
  int v148; // esi
  unsigned int v149; // ecx
  __int64 v150; // rsi
  unsigned int v151; // edx
  unsigned int v152; // r13d
  size_t v153; // rsi
  unsigned int *v154; // rax
  __int64 v155; // rax
  unsigned int v156; // r13d
  size_t v157; // rsi
  unsigned int *v158; // rax
  _DWORD *v159; // rdx
  __int64 v160; // rax
  _QWORD *v161; // rax
  unsigned int v162; // r13d
  size_t v163; // rsi
  unsigned int *v164; // rax
  __int64 v165; // rcx
  unsigned int v166; // r13d
  size_t v167; // rsi
  unsigned int *v168; // rax
  __int64 v169; // rax
  unsigned int v170; // ebx
  size_t v171; // rsi
  unsigned int *v172; // rax
  __int64 v173; // rcx
  unsigned int v174; // edx
  unsigned int *v175; // r9
  const __m128i *v176; // r15
  __int64 v177; // rax
  __m128i *v178; // rdx
  __int64 v179; // rdi
  const __m128i *v180; // rax
  const __m128i *v181; // rdi
  __int64 v182; // rcx
  __int8 v183; // si
  __int64 v184; // rcx
  __int8 v185; // si
  __int64 v186; // rcx
  __int8 v187; // si
  __int64 v188; // rcx
  __m128i v189; // xmm0
  __int64 v190; // rcx
  __int64 v191; // rax
  const __m128i *v192; // r12
  void *v193; // rbp
  void *v194; // rbp
  const __m128i *v195; // rsi
  __int64 v196; // rax
  unsigned int v197; // edx
  __int64 v198; // r13
  __int64 m128i_i64; // r15
  unsigned int v200; // edx
  unsigned int *v201; // r9
  const __m128i *v202; // r15
  __int64 v203; // rax
  __m128i *v204; // rdx
  __int64 v205; // rdi
  const __m128i *v206; // rax
  const __m128i *v207; // rdi
  __int64 v208; // rcx
  __int8 v209; // si
  __int64 v210; // rcx
  __int8 v211; // si
  __int64 v212; // rcx
  __int8 v213; // si
  __int64 v214; // rcx
  __m128i v215; // xmm0
  __int64 v216; // rcx
  __int64 v217; // rax
  const __m128i *v218; // r12
  void *v219; // rbp
  void *v220; // rbp
  const __m128i *v221; // rsi
  _QWORD *v222; // rax
  int v223; // ecx
  _QWORD *v224; // rax
  _QWORD *v225; // rax
  _OWORD *v226; // rax
  _DWORD *v227; // r11
  _OWORD *v228; // r9
  char *j; // rax
  __int64 v230; // rdx
  _DWORD *v231; // rsi
  _DWORD *v232; // rdx
  int v233; // esi
  unsigned int v234; // eax
  __int64 (__fastcall *v235)(__int64); // rax
  __int64 *v236; // rdx
  unsigned int v237; // ebx
  __int64 v238; // r8
  unsigned int v239; // eax
  __int64 v240; // rdx
  unsigned int v241; // ecx
  unsigned int v242; // eax
  __int64 v243; // rsi
  __int64 v244; // rdx
  unsigned int v245; // ecx
  unsigned int v246; // ecx
  unsigned int v247; // eax
  _QWORD *v248; // rax
  _QWORD *v249; // rax
  __int64 (__fastcall *v250)(__int64); // rax
  char v251; // al
  __int64 *v252; // rdx
  __int64 v253; // r8
  unsigned int v254; // ebx
  unsigned int v255; // eax
  __int64 v256; // rdx
  unsigned int v257; // ecx
  __int64 v258; // rsi
  unsigned int v259; // eax
  __int64 v260; // rdx
  unsigned int v261; // ecx
  _QWORD *v262; // rdx
  unsigned int v263; // r13d
  _QWORD *v264; // r12
  unsigned int v265; // ebx
  __int64 v266; // rsi
  int v267; // r9d
  __int64 v268; // rcx
  unsigned int v269; // esi
  _QWORD *v270; // r14
  __int64 v271; // rax
  __int64 v272; // rdx
  int *v273; // rax
  int *v274; // rdx
  int v275; // ecx
  __int64 v276; // rax
  __int64 v277; // r15
  unsigned int v278; // eax
  __int64 v279; // rcx
  unsigned int v280; // ebx
  size_t v281; // rsi
  unsigned int *v282; // rax
  __int64 v283; // rcx
  _QWORD *v284; // rdx
  __int64 v285; // rsi
  unsigned int v286; // r12d
  unsigned int v287; // r13d
  _QWORD *v288; // r14
  __int64 v289; // rcx
  __int64 v290; // r8
  unsigned int v291; // esi
  __int64 v292; // rdi
  int v293; // r9d
  __int64 v294; // rdx
  unsigned int v295; // esi
  _QWORD *v296; // rbp
  __int64 v297; // rax
  __int64 v298; // rdx
  int *v299; // rax
  int *v300; // rdx
  int v301; // ecx
  __int64 v302; // rax
  _QWORD *v303; // rdx
  __int64 v304; // r15
  unsigned int v305; // eax
  __int64 v306; // rcx
  int v307; // eax
  __int64 *v308; // rcx
  unsigned int v309; // r13d
  size_t v310; // rsi
  unsigned int *v311; // rax
  __int64 v312; // rcx
  _QWORD *v313; // rdx
  unsigned int v314; // r12d
  unsigned int v315; // ebp
  _QWORD *v316; // r13
  __int64 v317; // rcx
  __int64 v318; // r8
  unsigned int v319; // esi
  __int64 v320; // rax
  __int64 v321; // rdi
  int v322; // r9d
  __int64 v323; // rdx
  unsigned int v324; // esi
  _QWORD *v325; // r15
  __int64 v326; // rax
  __int64 v327; // rdx
  int *v328; // rax
  int *v329; // rdx
  int v330; // ecx
  __int64 v331; // rax
  _QWORD *v332; // rdx
  __int64 v333; // r14
  unsigned int v334; // eax
  __int64 v335; // rcx
  int v336; // eax
  __int64 *v337; // rcx
  unsigned int v338; // ebp
  unsigned int v339; // ecx
  unsigned int *v340; // rax
  __int64 v341; // rcx
  _QWORD *v342; // rdx
  __int64 v343; // rsi
  unsigned int i; // r12d
  unsigned int v345; // r13d
  _QWORD *v346; // r14
  __int64 v347; // rcx
  __int64 v348; // r8
  unsigned int v349; // esi
  __int64 v350; // rdi
  int v351; // r9d
  __int64 v352; // rdx
  unsigned int v353; // esi
  _QWORD *v354; // rbp
  __int64 v355; // rax
  __int64 v356; // rdx
  int *v357; // rax
  int *v358; // rdx
  int v359; // ecx
  __int64 v360; // rax
  _QWORD *v361; // rdx
  __int64 v362; // r15
  unsigned int v363; // eax
  __int64 v364; // rcx
  int v365; // eax
  __int64 *v366; // rcx
  unsigned int v367; // r13d
  size_t v368; // rsi
  unsigned int *v369; // rax
  __int64 v370; // rcx
  _QWORD *v371; // rdx
  char **exception; // rbp
  char **v373; // rbp
  char **v374; // rbp
  char **v375; // rbp
  char **v376; // rbp
  char **v377; // rbp
  char **v378; // rbp
  char **v379; // rbp
  char **v380; // rbp
  unsigned int v381; // [rsp+8h] [rbp-240h]
  int v382[2]; // [rsp+8h] [rbp-240h]
  int v383[2]; // [rsp+8h] [rbp-240h]
  int v384[2]; // [rsp+8h] [rbp-240h]
  __int64 v385; // [rsp+10h] [rbp-238h]
  const __m128i **v386; // [rsp+18h] [rbp-230h]
  char *v387; // [rsp+20h] [rbp-228h]
  unsigned int v388; // [rsp+28h] [rbp-220h]
  bool v389; // [rsp+36h] [rbp-212h]
  char v390; // [rsp+37h] [rbp-211h]
  _QWORD *v391; // [rsp+38h] [rbp-210h]
  int v392[2]; // [rsp+38h] [rbp-210h]
  int v393; // [rsp+38h] [rbp-210h]
  int v394; // [rsp+40h] [rbp-208h]
  size_t v395; // [rsp+40h] [rbp-208h]
  unsigned int v396; // [rsp+40h] [rbp-208h]
  int v397; // [rsp+48h] [rbp-200h]
  void *v398; // [rsp+48h] [rbp-200h]
  void *v399; // [rsp+48h] [rbp-200h]
  unsigned int v400; // [rsp+48h] [rbp-200h]
  unsigned int v401; // [rsp+48h] [rbp-200h]
  __int64 v402; // [rsp+50h] [rbp-1F8h]
  const __m128i *v403; // [rsp+50h] [rbp-1F8h]
  __int64 v404; // [rsp+50h] [rbp-1F8h]
  const __m128i *v405; // [rsp+50h] [rbp-1F8h]
  unsigned int v406; // [rsp+50h] [rbp-1F8h]
  size_t v407; // [rsp+50h] [rbp-1F8h]
  const __m128i *v408; // [rsp+58h] [rbp-1F0h]
  unsigned int *v409; // [rsp+58h] [rbp-1F0h]
  const __m128i *v410; // [rsp+58h] [rbp-1F0h]
  unsigned int *v411; // [rsp+58h] [rbp-1F0h]
  int v412; // [rsp+58h] [rbp-1F0h]
  _DWORD *v413; // [rsp+58h] [rbp-1F0h]
  unsigned int *v414; // [rsp+60h] [rbp-1E8h]
  unsigned int *v415; // [rsp+60h] [rbp-1E8h]
  char *v416; // [rsp+60h] [rbp-1E8h]
  _OWORD *v417; // [rsp+60h] [rbp-1E8h]
  __int64 v418; // [rsp+68h] [rbp-1E0h]
  __int64 v419; // [rsp+68h] [rbp-1E0h]
  __int64 v420; // [rsp+90h] [rbp-1B8h] BYREF
  void *ptr; // [rsp+98h] [rbp-1B0h]
  __int64 v422[4]; // [rsp+A0h] [rbp-1A8h] BYREF
  int v423[2]; // [rsp+C0h] [rbp-188h] BYREF
  __int32 v424; // [rsp+C8h] [rbp-180h]
  _QWORD v425[2]; // [rsp+D0h] [rbp-178h] BYREF
  _QWORD v426[2]; // [rsp+E0h] [rbp-168h] BYREF
  __int32 v427; // [rsp+F0h] [rbp-158h]
  _QWORD v428[2]; // [rsp+F8h] [rbp-150h] BYREF
  int v429[2]; // [rsp+108h] [rbp-140h] BYREF
  __int64 v430; // [rsp+110h] [rbp-138h]
  __int16 v431; // [rsp+118h] [rbp-130h]
  __m128i v432; // [rsp+120h] [rbp-128h]
  __int64 v433; // [rsp+130h] [rbp-118h] BYREF
  __int32 v434; // [rsp+138h] [rbp-110h]
  _QWORD v435[2]; // [rsp+140h] [rbp-108h] BYREF
  _QWORD v436[2]; // [rsp+150h] [rbp-F8h] BYREF
  __int32 v437; // [rsp+160h] [rbp-E8h]
  _QWORD v438[2]; // [rsp+168h] [rbp-E0h] BYREF
  _QWORD v439[2]; // [rsp+178h] [rbp-D0h] BYREF
  __int16 v440; // [rsp+188h] [rbp-C0h]
  __m128i v441; // [rsp+190h] [rbp-B8h]
  int v442[2]; // [rsp+1A0h] [rbp-A8h] BYREF
  __int32 v443; // [rsp+1A8h] [rbp-A0h]
  __int32 v444; // [rsp+1B0h] [rbp-98h] BYREF
  char v445; // [rsp+1B4h] [rbp-94h]
  __int64 v446; // [rsp+1B8h] [rbp-90h]
  __int32 v447; // [rsp+1C0h] [rbp-88h] BYREF
  char v448; // [rsp+1C4h] [rbp-84h]
  __int64 v449; // [rsp+1C8h] [rbp-80h]
  __int32 v450; // [rsp+1D0h] [rbp-78h]
  __int32 v451; // [rsp+1D8h] [rbp-70h] BYREF
  char v452; // [rsp+1DCh] [rbp-6Ch]
  __int64 v453; // [rsp+1E0h] [rbp-68h]
  __int32 v454; // [rsp+1E8h] [rbp-60h] BYREF
  char v455; // [rsp+1ECh] [rbp-5Ch]
  __int64 v456; // [rsp+1F0h] [rbp-58h]
  __int16 v457; // [rsp+1F8h] [rbp-50h]
  __m128i v458[4]; // [rsp+200h] [rbp-48h] BYREF

  v4 = a2;
  v5 = a1;
  v385 = (__int64)a3;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  v390 = (char)a4;
  if ( v6 == sub_5155C0 )
    result = a2[152];
  else
    result = v6((__int64)a2);
  if ( (_BYTE)result )
  {
    if ( !v385 )
      return result;
    v235 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
    if ( v235 == sub_5155C0 )
      result = a2[152];
    else
      result = v235((__int64)a2);
    if ( !(_BYTE)result )
    {
      v236 = *(__int64 **)(v385 + 144);
      *(_BYTE *)(v385 + 152) = 0;
      if ( *v236 )
      {
        v237 = 0;
        v238 = *v236;
        while ( v237 < *(_DWORD *)(v238 - 4) )
        {
          v239 = v237;
          do
          {
            v240 = v239;
            v241 = v239;
            v239 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 27) + 16LL) + 4LL * v239);
          }
          while ( v241 != v239 );
          v242 = v237;
          v243 = **((_QWORD **)v4 + 18) + 112 * v240;
          do
          {
            v244 = v242;
            v245 = v242;
            v242 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v385 + 216) + 16LL) + 4LL * v242);
          }
          while ( v245 != v242 );
          ++v237;
          result = sub_B290A0(v238 + 112 * v244, v243);
          v236 = *(__int64 **)(v385 + 144);
          v238 = *v236;
          if ( !*v236 )
            return result;
        }
        v285 = v238;
        v286 = 0;
        do
        {
          if ( v286 >= *(_DWORD *)(v285 - 4) )
            break;
          v287 = v286;
          v288 = *(_QWORD **)(v385 + 216);
          v289 = v288[2];
          do
          {
            v290 = v287;
            v291 = v287;
            v287 = *(_DWORD *)(v289 + 4LL * v287);
          }
          while ( v291 != v287 );
          LODWORD(result) = v286;
          do
          {
            v292 = (unsigned int)result;
            v293 = result;
            result = *(unsigned int *)(v289 + 4LL * (unsigned int)result);
          }
          while ( v293 != (_DWORD)result );
          if ( v291 != (_DWORD)result )
          {
            v294 = v288[3];
            if ( *(_DWORD *)(v294 + 4 * v290) >= *(_DWORD *)(v294 + 4 * v292) )
            {
              v295 = v287;
              v287 = result;
              result = v295;
            }
            v296 = (_QWORD *)v288[1];
            *(_DWORD *)(v289 + 4LL * v287) = result;
            v297 = 4 * result;
            *(_DWORD *)(v294 + v297) += *(_DWORD *)(v294 + 4LL * v287);
            v298 = v288[4];
            v299 = (int *)(v298 + v297);
            v300 = (int *)(v298 + 4LL * v287);
            v301 = *v300;
            *v300 = *v299;
            *v299 = v301;
            v302 = sub_180C100(v296 + 2, 24);
            v303 = (_QWORD *)*v296;
            *(_QWORD *)v302 = off_1C4F500;
            v304 = v302;
            *(_QWORD *)(v302 + 8) = v288;
            *(_DWORD *)(v302 + 16) = v287;
            if ( v303 )
            {
              v305 = *((_DWORD *)v303 - 1);
              if ( v305 == *((_DWORD *)v303 - 2) )
              {
                v309 = (3 * v305 + 1) >> 1;
                v310 = 8 * v309 + 8;
                if ( 8 * v305 + 8 >= (unsigned int)v310 || v305 >= v309 )
                {
LABEL_375:
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v442, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v442);
                  sub_233E40((__int64)v442);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v311 = (unsigned int *)sub_186B300(v303 - 1, v310);
                v312 = v311[1];
                v303 = v311 + 2;
                *v296 = v311 + 2;
                *v311 = v309;
                LODWORD(v311) = v312;
                v308 = &v303[v312];
                v307 = (_DWORD)v311 + 1;
              }
              else
              {
                v306 = v305;
                v307 = v305 + 1;
                v308 = &v303[v306];
              }
            }
            else
            {
              v313 = (_QWORD *)sub_186B270(0x18u);
              *v313 = 2;
              v307 = 1;
              v303 = v313 + 1;
              *v296 = v303;
              v308 = v303;
            }
            *v308 = v304;
            *((_DWORD *)v303 - 1) = v307;
            result = v385;
            v236 = *(__int64 **)(v385 + 144);
          }
          v285 = *v236;
          ++v286;
        }
        while ( *v236 );
      }
      return result;
    }
    return sub_5165E0(v385);
  }
  v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL);
  if ( v8 == sub_5155C0 )
    v9 = *(_BYTE *)(a1 + 152);
  else
    v9 = v8(a1);
  if ( v9 )
  {
    v112 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
    if ( v112 == sub_5155C0 )
      result = a2[152];
    else
      result = v112((__int64)a2);
    if ( (_BYTE)result )
    {
      result = sub_5165E0(a1);
    }
    else
    {
      v113 = *(unsigned __int8 ***)(a1 + 144);
      *(_BYTE *)(v5 + 152) = 0;
      v114 = 0;
      a2 = *v113;
      v115 = *v113;
      if ( *v113 )
      {
        while ( v114 < *((_DWORD *)v115 - 1) )
        {
          v116 = v114;
          do
          {
            v117 = v116;
            v118 = v116;
            v116 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 27) + 16LL) + 4LL * v116);
          }
          while ( v118 != v116 );
          v119 = v114;
          a2 = (unsigned __int8 *)(**((_QWORD **)v4 + 18) + 112 * v117);
          do
          {
            v120 = v119;
            v121 = v119;
            v119 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 216) + 16LL) + 4LL * v119);
          }
          while ( v121 != v119 );
          ++v114;
          result = sub_B290A0(&v115[112 * v120], a2);
          v113 = *(unsigned __int8 ***)(v5 + 144);
          v115 = *v113;
          if ( !*v113 )
            goto LABEL_112;
        }
        *(_QWORD *)v384 = v4;
        a2 = v115;
        v263 = 0;
        while ( v263 < *((_DWORD *)a2 - 1) )
        {
          v264 = *(_QWORD **)(v5 + 216);
          v265 = v263;
          a3 = (_QWORD *)v264[2];
          do
          {
            v115 = (unsigned __int8 *)v265;
            a4 = (__int64 *)v265;
            v265 = *((_DWORD *)a3 + v265);
          }
          while ( (_DWORD)a4 != v265 );
          LODWORD(result) = v263;
          do
          {
            v266 = (unsigned int)result;
            v267 = result;
            result = *((unsigned int *)a3 + (unsigned int)result);
          }
          while ( v267 != (_DWORD)result );
          if ( (_DWORD)a4 != (_DWORD)result )
          {
            v268 = v264[3];
            if ( *(_DWORD *)(v268 + 4LL * (_QWORD)v115) >= *(_DWORD *)(v268 + 4 * v266) )
            {
              v269 = v265;
              v265 = result;
              result = v269;
            }
            v270 = (_QWORD *)v264[1];
            *((_DWORD *)a3 + v265) = result;
            v271 = 4 * result;
            *(_DWORD *)(v268 + v271) += *(_DWORD *)(v268 + 4LL * v265);
            v272 = v264[4];
            v273 = (int *)(v272 + v271);
            v274 = (int *)(v272 + 4LL * v265);
            v275 = *v274;
            *v274 = *v273;
            *v273 = v275;
            v276 = sub_180C100(v270 + 2, 24);
            a3 = (_QWORD *)*v270;
            v277 = v276;
            *(_QWORD *)v276 = off_1C4F500;
            *(_QWORD *)(v276 + 8) = v264;
            *(_DWORD *)(v276 + 16) = v265;
            if ( a3 )
            {
              v278 = *((_DWORD *)a3 - 1);
              if ( v278 == *((_DWORD *)a3 - 2) )
              {
                v280 = (3 * v278 + 1) >> 1;
                v281 = 8 * v280 + 8;
                if ( 8 * v278 + 8 >= (unsigned int)v281 || v278 >= v280 )
                  goto LABEL_375;
                v282 = (unsigned int *)sub_186B300(a3 - 1, v281);
                v283 = v282[1];
                a3 = v282 + 2;
                *v270 = v282 + 2;
                *v282 = v280;
                LODWORD(v282) = v283;
                a4 = &a3[v283];
                result = (unsigned int)((_DWORD)v282 + 1);
              }
              else
              {
                v279 = v278;
                result = v278 + 1;
                a4 = &a3[v279];
              }
            }
            else
            {
              v284 = (_QWORD *)sub_186B270(0x18u);
              *v284 = 2;
              result = 1;
              a3 = v284 + 1;
              *v270 = a3;
              a4 = a3;
            }
            *a4 = v277;
            v113 = *(unsigned __int8 ***)(v5 + 144);
            *((_DWORD *)a3 - 1) = result;
          }
          a2 = *v113;
          ++v263;
          if ( !*v113 )
            break;
        }
        v4 = *(unsigned __int8 **)v384;
      }
    }
LABEL_112:
    if ( !v385 )
      return result;
    v122 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL);
    if ( v122 == sub_5155C0 )
      result = v4[152];
    else
      result = ((__int64 (__fastcall *)(unsigned __int8 *, unsigned __int8 *, _QWORD *, __int64 *, unsigned __int8 *))v122)(
                 v4,
                 a2,
                 a3,
                 a4,
                 v115);
    if ( !(_BYTE)result )
    {
      v123 = *(__int64 **)(v385 + 144);
      *(_BYTE *)(v385 + 152) = 0;
      if ( *v123 )
      {
        v124 = 0;
        v125 = *v123;
        while ( v124 < *(_DWORD *)(v125 - 4) )
        {
          v126 = v124;
          do
          {
            v127 = v126;
            v128 = v126;
            v126 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 27) + 16LL) + 4LL * v126);
          }
          while ( v128 != v126 );
          v129 = v124;
          v130 = **((_QWORD **)v4 + 18) + 112 * v127;
          do
          {
            v131 = v129;
            v132 = v129;
            v129 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v385 + 216) + 16LL) + 4LL * v129);
          }
          while ( v132 != v129 );
          ++v124;
          result = sub_B290A0(v125 + 112 * v131, v130);
          v123 = *(__int64 **)(v385 + 144);
          v125 = *v123;
          if ( !*v123 )
            return result;
        }
        v343 = v125;
        for ( i = 0; i < *(_DWORD *)(v343 - 4); ++i )
        {
          v345 = i;
          v346 = *(_QWORD **)(v385 + 216);
          v347 = v346[2];
          do
          {
            v348 = v345;
            v349 = v345;
            v345 = *(_DWORD *)(v347 + 4LL * v345);
          }
          while ( v349 != v345 );
          LODWORD(result) = i;
          do
          {
            v350 = (unsigned int)result;
            v351 = result;
            result = *(unsigned int *)(v347 + 4LL * (unsigned int)result);
          }
          while ( v351 != (_DWORD)result );
          if ( v349 != (_DWORD)result )
          {
            v352 = v346[3];
            if ( *(_DWORD *)(v352 + 4 * v348) >= *(_DWORD *)(v352 + 4 * v350) )
            {
              v353 = v345;
              v345 = result;
              result = v353;
            }
            v354 = (_QWORD *)v346[1];
            *(_DWORD *)(v347 + 4LL * v345) = result;
            v355 = 4 * result;
            *(_DWORD *)(v352 + v355) += *(_DWORD *)(v352 + 4LL * v345);
            v356 = v346[4];
            v357 = (int *)(v356 + v355);
            v358 = (int *)(v356 + 4LL * v345);
            v359 = *v358;
            *v358 = *v357;
            *v357 = v359;
            v360 = sub_180C100(v354 + 2, 24);
            v361 = (_QWORD *)*v354;
            *(_QWORD *)v360 = off_1C4F500;
            v362 = v360;
            *(_QWORD *)(v360 + 8) = v346;
            *(_DWORD *)(v360 + 16) = v345;
            if ( v361 )
            {
              v363 = *((_DWORD *)v361 - 1);
              if ( v363 == *((_DWORD *)v361 - 2) )
              {
                v367 = (3 * v363 + 1) >> 1;
                v368 = 8 * v367 + 8;
                if ( 8 * v363 + 8 >= (unsigned int)v368 || v363 >= v367 )
                  goto LABEL_375;
                v369 = (unsigned int *)sub_186B300(v361 - 1, v368);
                v370 = v369[1];
                v361 = v369 + 2;
                *v354 = v369 + 2;
                *v369 = v367;
                LODWORD(v369) = v370;
                v366 = &v361[v370];
                v365 = (_DWORD)v369 + 1;
              }
              else
              {
                v364 = v363;
                v365 = v363 + 1;
                v366 = &v361[v364];
              }
            }
            else
            {
              v371 = (_QWORD *)sub_186B270(0x18u);
              *v371 = 2;
              v365 = 1;
              v361 = v371 + 1;
              *v354 = v361;
              v366 = v361;
            }
            *v366 = v362;
            *((_DWORD *)v361 - 1) = v365;
            result = v385;
            v123 = *(__int64 **)(v385 + 144);
          }
          v343 = *v123;
          if ( !*v123 )
            return result;
        }
      }
      return result;
    }
    return sub_5165E0(v385);
  }
  v10 = sub_186B270(0x38u);
  *(_QWORD *)(v10 + 48) = v10;
  *(_QWORD *)(v10 + 40) = off_1C4F498;
  v11 = *(_QWORD *)(a1 + 16);
  *(__m128i *)v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 160), (__m128i)(unsigned __int64)(a1 + 160));
  *(_QWORD *)(v10 + 32) = 0;
  *(_OWORD *)(v10 + 16) = 0;
  if ( v11 )
    v388 = *(_DWORD *)(v11 - 4);
  else
    v388 = 0;
  v12 = (_OWORD *)sub_186B270(0xA0u);
  *v12 = 0;
  *(_OWORD *)((char *)v12 + 20) = 0;
  *(_OWORD *)((char *)v12 + 40) = 0;
  *(_OWORD *)((char *)v12 + 60) = 0;
  v12[5] = 0;
  *(_OWORD *)((char *)v12 + 100) = 0;
  *(_OWORD *)((char *)v12 + 120) = 0;
  *(_OWORD *)((char *)v12 + 140) = 0;
  v387 = (char *)v12;
  v420 = 0;
  ptr = nullptr;
  sub_186B510(&v420, v388, 0);
  if ( v388 )
  {
    v389 = 0;
    v13 = 0;
    v394 = 0;
    v397 = 0;
    v381 = 8;
    while ( 1 )
    {
      v14 = *(_QWORD **)(v10 + 16);
      if ( !v14 )
        break;
      v15 = *((_DWORD *)v14 - 1);
      v16 = (unsigned int *)v14 + v15;
      if ( v15 != *((_DWORD *)v14 - 2) )
        goto LABEL_13;
      v156 = (3 * v15 + 1) >> 1;
      v157 = 4 * v156 + 8;
      if ( 4 * v15 + 8 >= (unsigned int)v157 || v15 >= v156 )
      {
        v379 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v442, "Overflow encountered when expanding vector");
        *v379 = (char *)off_1C63128;
        sub_2333C0(v379 + 1, v442);
        sub_233E40((__int64)v442);
        __cxa_throw(v379, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v158 = (unsigned int *)sub_186B300(v14 - 1, v157);
      v159 = v158 + 2;
      *v158 = v156;
      v160 = v158[1];
      *(_QWORD *)(v10 + 16) = v159;
      v159[v160] = v15;
      ++*(v159 - 1);
      v17 = *(_QWORD **)(v10 + 24);
      if ( !v17 )
      {
LABEL_161:
        v161 = (_QWORD *)sub_186B270(0x10u);
        v17 = v161 + 1;
        *v161 = 2;
        *(_QWORD *)(v10 + 24) = v161 + 1;
        v19 = v161 + 1;
        goto LABEL_16;
      }
LABEL_14:
      v18 = *((unsigned int *)v17 - 1);
      if ( (_DWORD)v18 == *((_DWORD *)v17 - 2) )
      {
        v152 = (unsigned int)(3 * v18 + 1) >> 1;
        v153 = 4 * v152 + 8;
        if ( 4 * (int)v18 + 8 >= (unsigned int)v153 || (unsigned int)v18 >= v152 )
        {
          v374 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v442, "Overflow encountered when expanding vector");
          *v374 = (char *)off_1C63128;
          sub_2333C0(v374 + 1, v442);
          sub_233E40((__int64)v442);
          __cxa_throw(v374, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v154 = (unsigned int *)sub_186B300(v17 - 1, v153);
        v17 = v154 + 2;
        *v154 = v152;
        v155 = v154[1];
        *(_QWORD *)(v10 + 24) = v17;
        v19 = (_DWORD *)v17 + v155;
      }
      else
      {
        v19 = (_DWORD *)v17 + v18;
      }
LABEL_16:
      *v19 = 1;
      ++*((_DWORD *)v17 - 1);
      v20 = *(_QWORD **)(v10 + 32);
      if ( v20 )
      {
        v21 = *((unsigned int *)v20 - 1);
        if ( (_DWORD)v21 == *((_DWORD *)v20 - 2) )
        {
          v166 = (unsigned int)(3 * v21 + 1) >> 1;
          v167 = 4 * v166 + 8;
          if ( 4 * (int)v21 + 8 >= (unsigned int)v167 || (unsigned int)v21 >= v166 )
          {
            v380 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v442, "Overflow encountered when expanding vector");
            *v380 = (char *)off_1C63128;
            sub_2333C0(v380 + 1, v442);
            sub_233E40((__int64)v442);
            __cxa_throw(v380, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v168 = (unsigned int *)sub_186B300(v20 - 1, v167);
          v20 = v168 + 2;
          *v168 = v166;
          v169 = v168[1];
          *(_QWORD *)(v10 + 32) = v20;
          v22 = (unsigned int *)v20 + v169;
        }
        else
        {
          v22 = (unsigned int *)v20 + v21;
        }
      }
      else
      {
        v248 = (_QWORD *)sub_186B270(0x10u);
        v20 = v248 + 1;
        *v248 = 2;
        *(_QWORD *)(v10 + 32) = v248 + 1;
        v22 = (unsigned int *)(v248 + 1);
      }
      *v22 = v15;
      v23 = *(_QWORD **)(v10 + 8);
      ++*((_DWORD *)v20 - 1);
      v24 = (_QWORD *)*v23;
      if ( *v23 )
      {
        v25 = *((_DWORD *)v24 - 1);
        if ( v25 == *((_DWORD *)v24 - 2) )
        {
          v162 = (3 * v25 + 1) >> 1;
          v163 = 8 * v162 + 8;
          if ( 8 * v25 + 8 >= (unsigned int)v163 || v25 >= v162 )
          {
            v375 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v442, "Overflow encountered when expanding vector");
            *v375 = (char *)off_1C63128;
            sub_2333C0(v375 + 1, v442);
            sub_233E40((__int64)v442);
            __cxa_throw(v375, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v164 = (unsigned int *)sub_186B300(v24 - 1, v163);
          v165 = v164[1];
          v24 = v164 + 2;
          *v23 = v164 + 2;
          *v164 = v162;
          LODWORD(v164) = v165;
          v28 = &v24[v165];
          v27 = (_DWORD)v164 + 1;
        }
        else
        {
          v26 = v25;
          v27 = v25 + 1;
          v28 = &v24[v26];
        }
      }
      else
      {
        v249 = (_QWORD *)sub_186B270(0x18u);
        v24 = v249 + 1;
        *v249 = 2;
        v27 = 1;
        *v23 = v24;
        v28 = v24;
      }
      *v28 = v10 + 40;
      *((_DWORD *)v24 - 1) = v27;
      v29 = v13;
      do
      {
        v30 = v29;
        v29 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 27) + 16LL) + 4LL * v29);
      }
      while ( v30 != v29 );
      v31 = v13;
      do
      {
        v32 = v31;
        v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 216) + 16LL) + 4LL * v31);
      }
      while ( v32 != v31 );
      v33 = (((v30 - v31) ^ (v31 << 8) ^ ((v31 - ((v30 - v31) ^ (v31 << 8))) << 16)) + ((v30 - v31) ^ (v31 << 8)) - v31)
          ^ ((v31 - ((v30 - v31) ^ (v31 << 8))) << 10);
      v34 = 20LL * v381;
      v35 = v34;
      v36 = 20LL * (v33 & (v381 - 1));
      v37 = &v387[v36];
      v38 = (int *)&v387[v34];
      if ( v36 != v34 )
      {
        v39 = (int *)&v387[v36];
        do
        {
          v40 = v39[1];
          if ( v40 == 2 )
          {
            if ( v33 == *v39 && v32 == v39[2] && v30 == v39[3] )
              goto LABEL_34;
          }
          else if ( !v40 )
          {
            goto LABEL_140;
          }
          v39 += 5;
        }
        while ( v38 != v39 );
        v39 = (int *)v387;
        if ( v37 != v387 )
          goto LABEL_135;
        v145 = 2 * v381;
        if ( 3 * v381 >= 4 * (v397 + v394) )
        {
          if ( v34 )
            goto LABEL_142;
          goto LABEL_221;
        }
        goto LABEL_230;
      }
      v39 = (int *)v387;
      if ( v37 != v387 )
      {
LABEL_135:
        while ( 1 )
        {
          v144 = v39[1];
          if ( v144 != 2 )
            break;
          if ( v33 == *v39 && v32 == v39[2] )
          {
            if ( v30 == v39[3] )
            {
LABEL_34:
              v41 = v39[4];
              v42 = *(_QWORD *)(v10 + 16);
              v43 = v13;
              do
              {
                v44 = v43;
                v45 = v43;
                v43 = *(_DWORD *)(v42 + 4LL * v43);
              }
              while ( v45 != v43 );
              do
              {
                v46 = v41;
                v47 = v41;
                v41 = *(_DWORD *)(v42 + 4LL * v41);
              }
              while ( v47 != v41 );
              if ( v45 != v41 )
              {
                v48 = *(_QWORD *)(v10 + 24);
                if ( *(_DWORD *)(v48 + 4 * v46) >= *(_DWORD *)(v48 + 4 * v44) )
                {
                  v41 = v43;
                  v43 = v47;
                }
                *(_DWORD *)(v42 + 4LL * v41) = v43;
                v49 = 4LL * v43;
                *(_DWORD *)(v48 + v49) += *(_DWORD *)(v48 + 4LL * v41);
                v50 = *(_QWORD *)(v10 + 32);
                v51 = (int *)(v50 + v49);
                v52 = (int *)(v50 + 4LL * v41);
                v53 = *v52;
                *v52 = *v51;
                *v51 = v53;
                v391 = *(_QWORD **)(v10 + 8);
                v54 = sub_180C100(v391 + 2, 24);
                *(_QWORD *)v54 = off_1C4F500;
                v55 = (_QWORD *)*v391;
                *(_QWORD *)(v54 + 8) = v10;
                *(_DWORD *)(v54 + 16) = v41;
                if ( v55 )
                {
                  v56 = *((_DWORD *)v55 - 1);
                  if ( v56 == *((_DWORD *)v55 - 2) )
                  {
                    v170 = (3 * v56 + 1) >> 1;
                    v171 = 8 * v170 + 8;
                    if ( 8 * v56 + 8 >= (unsigned int)v171 || v56 >= v170 )
                    {
                      v373 = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0((__int64 *)v442, "Overflow encountered when expanding vector");
                      *v373 = (char *)off_1C63128;
                      sub_2333C0(v373 + 1, v442);
                      sub_233E40((__int64)v442);
                      __cxa_throw(
                        v373,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v172 = (unsigned int *)sub_186B300(v55 - 1, v171);
                    v55 = v172 + 2;
                    *v391 = v172 + 2;
                    v173 = v172[1];
                    *v172 = v170;
                    LODWORD(v172) = v173;
                    v59 = &v55[v173];
                    v58 = (_DWORD)v172 + 1;
                  }
                  else
                  {
                    v57 = v56;
                    v58 = v56 + 1;
                    v59 = &v55[v57];
                  }
                }
                else
                {
                  v262 = (_QWORD *)sub_186B270(0x18u);
                  *v262 = 2;
                  v58 = 1;
                  v55 = v262 + 1;
                  *v391 = v55;
                  v59 = v55;
                }
                *v59 = v54;
                *((_DWORD *)v55 - 1) = v58;
              }
              goto LABEL_44;
            }
            v39 += 5;
            if ( v37 == (char *)v39 )
            {
LABEL_140:
              v145 = 2 * v381;
              if ( 3 * v381 >= 4 * (v397 + v394) )
                goto LABEL_141;
              goto LABEL_230;
            }
          }
          else
          {
LABEL_134:
            v39 += 5;
            if ( v37 == (char *)v39 )
              goto LABEL_140;
          }
        }
        if ( !v144 )
          goto LABEL_140;
        goto LABEL_134;
      }
      v145 = 2 * v381;
      if ( 3 * v381 >= 4 * (v394 + v397) )
        goto LABEL_210;
LABEL_230:
      v416 = (char *)v38;
      v412 = v33;
      v381 = v145;
      v406 = v145;
      v395 = 20LL * v145;
      *(_QWORD *)v392 = v395;
      v226 = (_OWORD *)sub_186B270(v395);
      v227 = v226;
      v35 = v395;
      v33 = v412;
      v228 = (_OWORD *)((char *)v226 + v395);
      if ( v406 )
      {
        if ( (v395 & 4) == 0 || (*v226 = 0, v226 = (_OWORD *)((char *)v226 + 20), v226 != v228) )
        {
          do
          {
            *v226 = 0;
            v226 = (_OWORD *)((char *)v226 + 40);
            *(_OWORD *)((char *)v226 - 20) = 0;
          }
          while ( v226 != v228 );
        }
      }
      v396 = v406 - 1;
      for ( j = v387; v416 != j; v232[4] = *((_DWORD *)j - 1) )
      {
        while ( *((_DWORD *)j + 1) != 2 )
        {
          j += 20;
          if ( v416 == j )
            goto LABEL_243;
        }
        v230 = 20LL * (*(_DWORD *)j & v396);
        v231 = &v227[(unsigned __int64)v230 / 4];
        if ( *(_QWORD *)v392 == v230 )
        {
LABEL_264:
          if ( v227 == v231 )
          {
LABEL_286:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v232 = v227;
          while ( v232[1] )
          {
            v232 += 5;
            if ( v231 == v232 )
              goto LABEL_286;
          }
        }
        else
        {
          v232 = &v227[(unsigned __int64)v230 / 4];
          while ( v232[1] )
          {
            v232 += 5;
            if ( v228 == (_OWORD *)v232 )
              goto LABEL_264;
          }
        }
        *v232 = *(_DWORD *)j;
        v233 = *((_DWORD *)j + 2);
        j += 20;
        v232[1] = 2;
        v232[2] = v233;
        v232[3] = *((_DWORD *)j - 2);
      }
LABEL_243:
      if ( v387 )
      {
        v417 = v228;
        v413 = v227;
        v407 = v35;
        v393 = v33;
        sub_186B220(v387);
        v228 = v417;
        v227 = v413;
        v35 = v407;
        v33 = v393;
      }
      v234 = v396;
      v387 = (char *)v227;
      v38 = (int *)v228;
      v394 = 0;
      v36 = 20LL * (v33 & v234);
      v37 = (char *)&v227[(unsigned __int64)v36 / 4];
LABEL_141:
      if ( v36 == v35 )
      {
LABEL_210:
        v147 = nullptr;
LABEL_211:
        if ( v387 != v37 )
        {
          v146 = (int *)v387;
          while ( 1 )
          {
            v223 = v146[1];
            if ( v223 != 2 )
              break;
            if ( v33 == *v146 && v32 == v146[2] )
            {
              if ( v30 == v146[3] )
                goto LABEL_150;
              v146 += 5;
              if ( v146 == (int *)v37 )
                goto LABEL_221;
            }
            else
            {
LABEL_215:
              v146 += 5;
              if ( v146 == (int *)v37 )
                goto LABEL_221;
            }
          }
          if ( !v223 )
            goto LABEL_222;
          v147 = v146;
          goto LABEL_215;
        }
LABEL_221:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
LABEL_142:
      v146 = (int *)v37;
      v147 = nullptr;
      while ( 1 )
      {
        v148 = v146[1];
        if ( v148 != 2 )
          break;
        if ( v33 == *v146 && v32 == v146[2] && v30 == v146[3] )
        {
LABEL_150:
          v146[4] = v13;
          v146[1] = 2;
          goto LABEL_151;
        }
LABEL_145:
        v146 += 5;
        if ( v146 == v38 )
          goto LABEL_211;
      }
      if ( v148 )
      {
        v147 = v146;
        goto LABEL_145;
      }
LABEL_222:
      if ( v147 )
        --v394;
      else
        v147 = v146;
      v147[2] = v32;
      v147[3] = v30;
      v147[4] = v13;
      v147[1] = 2;
      *v147 = v33;
      ++v397;
LABEL_151:
      v149 = v13;
      v150 = *(_QWORD *)(*(_QWORD *)(v5 + 216) + 16LL);
      do
      {
        v151 = v149;
        v149 = *(_DWORD *)(v150 + 4LL * v149);
      }
      while ( v151 != v149 );
      if ( (*((_DWORD *)ptr + (v149 >> 5)) & (1 << v149)) != 0 )
      {
        v389 = 1;
      }
      else
      {
        v246 = v13;
        do
        {
          v247 = v246;
          v246 = *(_DWORD *)(v150 + 4LL * v246);
        }
        while ( v247 != v246 );
        *((_DWORD *)ptr + (v246 >> 5)) |= 1 << v246;
      }
LABEL_44:
      if ( ++v13 == v388 )
      {
        v386 = (const __m128i **)sub_186B270(8u);
        *v386 = nullptr;
        *(_QWORD *)v382 = 0;
        while ( 1 )
        {
          v60 = v382[0];
          v61 = *(__m128i *(__fastcall **)(__m128i *, __int64, __int64, __int64, const __m128i *))(*(_QWORD *)v5 + 224LL);
          v62 = v382[0];
          do
          {
            v63 = v62;
            v64 = v62;
            v62 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 216) + 16LL) + 4LL * v62);
          }
          while ( v64 != v62 );
          v65 = (const __m128i *)(**(_QWORD **)(v5 + 144) + 112 * v63);
          if ( v61 == sub_516080 )
          {
            *(_QWORD *)v423 = v65->m128i_i64[0];
            v66 = v65->m128i_i32[2];
            v425[0] = 0;
            v67 = qword_1C7F2C0;
            v424 = v66;
            v425[1] = 0;
            v426[0] = 1;
            v426[1] = 0;
            if ( (v65[1].m128i_i8[4] & 1) != 0 )
            {
              v399 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v425, &v65[1]);
              v67 = v399;
            }
            else
            {
              LODWORD(v425[0]) = v65[1].m128i_i32[0];
            }
            if ( (v65[2].m128i_i8[4] & 1) != 0 )
            {
              sub_182C690(v67, v426, &v65[2]);
            }
            else
            {
              v68 = v65[2].m128i_i32[0];
              BYTE4(v426[0]) &= ~1u;
              LODWORD(v426[0]) = v68;
            }
            v69 = v65[3].m128i_i32[0];
            v70 = qword_1C7F2C0;
            v428[0] = 0;
            v428[1] = 0;
            v427 = v69;
            *(_QWORD *)v429 = 1;
            v430 = 0;
            if ( (v65[3].m128i_i8[12] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, v428, &v65[3].m128i_u64[1]);
            else
              LODWORD(v428[0]) = v65[3].m128i_i32[2];
            if ( (v65[4].m128i_i8[12] & 1) != 0 )
            {
              sub_182C690(v70, v429, &v65[4].m128i_u64[1]);
            }
            else
            {
              v71 = v65[4].m128i_i32[2];
              LOBYTE(v429[1]) &= ~1u;
              v429[0] = v71;
            }
            v72 = _mm_loadu_si128(v65 + 6);
            v431 = v65[5].m128i_i16[4];
            v432 = v72;
          }
          else
          {
            v61((__m128i *)v423, v5, *(_QWORD *)(v5 + 216), v10, v65);
          }
          v73 = *(__m128i *(__fastcall **)(__m128i *, __int64, __int64, __int64, const __m128i *))(*(_QWORD *)v5 + 224LL);
          v74 = v382[0];
          do
          {
            v75 = v74;
            v76 = v74;
            v74 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 27) + 16LL) + 4LL * v74);
          }
          while ( v76 != v74 );
          v77 = (const __m128i *)(**((_QWORD **)v4 + 18) + 112 * v75);
          if ( v73 == sub_516080 )
          {
            v433 = v77->m128i_i64[0];
            v78 = v77->m128i_i32[2];
            v435[0] = 0;
            v79 = qword_1C7F2C0;
            v434 = v78;
            v435[1] = 0;
            v436[0] = 1;
            v436[1] = 0;
            if ( (v77[1].m128i_i8[4] & 1) != 0 )
            {
              v398 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, v435, &v77[1]);
              v79 = v398;
            }
            else
            {
              LODWORD(v435[0]) = v77[1].m128i_i32[0];
            }
            if ( (v77[2].m128i_i8[4] & 1) != 0 )
            {
              sub_182C690(v79, v436, &v77[2]);
            }
            else
            {
              v80 = v77[2].m128i_i32[0];
              BYTE4(v436[0]) &= ~1u;
              LODWORD(v436[0]) = v80;
            }
            v81 = v77[3].m128i_i32[0];
            v82 = qword_1C7F2C0;
            v438[0] = 0;
            v438[1] = 0;
            v437 = v81;
            v439[0] = 1;
            v439[1] = 0;
            if ( (v77[3].m128i_i8[12] & 1) != 0 )
              sub_182C690(qword_1C7F2C0, v438, &v77[3].m128i_u64[1]);
            else
              LODWORD(v438[0]) = v77[3].m128i_i32[2];
            if ( (v77[4].m128i_i8[12] & 1) != 0 )
            {
              sub_182C690(v82, v439, &v77[4].m128i_u64[1]);
            }
            else
            {
              v83 = v77[4].m128i_i32[2];
              BYTE4(v439[0]) &= ~1u;
              LODWORD(v439[0]) = v83;
            }
            v84 = _mm_loadu_si128(v77 + 6);
            v440 = v77[5].m128i_i16[4];
            v441 = v84;
          }
          else
          {
            v73((__m128i *)&v433, v5, *((_QWORD *)v4 + 27), v10, v77);
          }
          v85 = *(_QWORD *)v5;
          if ( v390 )
          {
            v86 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v85 + 176);
            if ( v86 == sub_5161F0 )
            {
              sub_50C810((__int64)v442, *(_QWORD *)(v5 + 8), (__int64)v423, (__int64)&v433);
              v87 = *v386;
              if ( *v386 )
              {
LABEL_73:
                v88 = v87[-1].m128i_u32[3];
                if ( v88 == v87[-1].m128i_i32[2] )
                {
                  v401 = (3 * v88 + 1) >> 1;
                  v200 = 112 * v401 + 8;
                  if ( 112 * v88 + 8 >= v200 || v88 >= (3 * v88 + 1) >> 1 )
                  {
                    v377 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v422, "Overflow encountered when expanding vector");
                    *v377 = (char *)off_1C63128;
                    sub_2333C0(v377 + 1, v422);
                    sub_233E40((__int64)v422);
                    __cxa_throw(
                      v377,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v201 = (unsigned int *)sub_186B270(v200);
                  v87 = (const __m128i *)(v201 + 2);
                  v202 = *v386;
                  if ( *v386 )
                  {
                    v203 = v202[-1].m128i_u32[3];
                    v204 = (__m128i *)(v201 + 2);
                    v201[1] = v203;
                    v205 = 7 * v203;
                    v206 = v202;
                    v207 = &v202[v205];
                    if ( v202 != v207 )
                    {
                      do
                      {
                        v208 = v206->m128i_i64[0];
                        v209 = v204[1].m128i_i8[4];
                        v206 += 7;
                        v204 += 7;
                        v204[-7].m128i_i64[0] = v208;
                        v204[-7].m128i_i32[2] = v206[-7].m128i_i32[2];
                        v204[-6].m128i_i32[0] = v206[-6].m128i_i32[0];
                        v204[-6].m128i_i8[4] = v209 & 0xFC | v206[-6].m128i_i8[4] & 3;
                        v210 = v206[-6].m128i_i64[1];
                        v206[-6].m128i_i64[1] = 0;
                        v211 = v204[-5].m128i_i8[4];
                        v204[-6].m128i_i64[1] = v210;
                        v204[-5].m128i_i32[0] = v206[-5].m128i_i32[0];
                        v204[-5].m128i_i8[4] = v211 & 0xFC | v206[-5].m128i_i8[4] & 3;
                        v212 = v206[-5].m128i_i64[1];
                        v206[-5].m128i_i64[1] = 0;
                        v213 = v204[-4].m128i_i8[12];
                        v204[-5].m128i_i64[1] = v212;
                        v204[-4].m128i_i32[0] = v206[-4].m128i_i32[0];
                        v204[-4].m128i_i32[2] = v206[-4].m128i_i32[2];
                        v204[-4].m128i_i8[12] = v213 & 0xFC | v206[-4].m128i_i8[12] & 3;
                        v214 = v206[-3].m128i_i64[0];
                        v206[-3].m128i_i64[0] = 0;
                        v204[-3].m128i_i64[0] = v214;
                        v204[-3].m128i_i32[2] = v206[-3].m128i_i32[2];
                        v215 = _mm_loadu_si128(v206 - 1);
                        v204[-3].m128i_i8[12] = v204[-3].m128i_i8[12] & 0xFC | v206[-3].m128i_i8[12] & 3;
                        v216 = v206[-2].m128i_i64[0];
                        v206[-2].m128i_i64[0] = 0;
                        v204[-2].m128i_i64[0] = v216;
                        LOWORD(v216) = v206[-2].m128i_i16[4];
                        v204[-1] = v215;
                        v204[-2].m128i_i16[4] = v216;
                      }
                      while ( v207 != v206 );
                    }
                    v217 = v202[-1].m128i_u32[3];
                    if ( (_DWORD)v217 )
                    {
                      v410 = (const __m128i *)(v201 + 2);
                      v415 = v201;
                      v419 = v5;
                      v404 = v10;
                      v218 = &v202[7 * v217];
                      do
                      {
                        v219 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, &v202[3].m128i_u64[1]);
                        sub_182CBA0(v219, &v202[4].m128i_u64[1]);
                        v220 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, &v202[1]);
                        v221 = v202 + 2;
                        v202 += 7;
                        sub_182CBA0(v220, v221);
                      }
                      while ( v202 != v218 );
                      v10 = v404;
                      v87 = v410;
                      v201 = v415;
                      v5 = v419;
                      v202 = *v386;
                    }
                    v411 = v201;
                    v405 = v87;
                    sub_186B220(&v202[-1].m128i_u64[1]);
                    v201 = v411;
                    v87 = v405;
                    v89 = (__m128i *)&v405[7 * v411[1]];
                  }
                  else
                  {
                    v201[1] = 0;
                    v89 = (__m128i *)(v201 + 2);
                  }
                  *v386 = v87;
                  *v201 = v401;
                }
                else
                {
                  v89 = (__m128i *)&v87[7 * v88];
                }
LABEL_75:
                v89->m128i_i64[0] = *(_QWORD *)v442;
                v89->m128i_i32[2] = v443;
                v89[1].m128i_i32[0] = v444;
                v89[1].m128i_i8[4] = v445 & 3 | v89[1].m128i_i8[4] & 0xFC;
                v90 = v446;
                v446 = 0;
                v89[1].m128i_i64[1] = v90;
                v89[2].m128i_i32[0] = v447;
                v89[2].m128i_i8[4] = v448 & 3 | v89[2].m128i_i8[4] & 0xFC;
                v91 = v449;
                v449 = 0;
                v89[2].m128i_i64[1] = v91;
                v89[3].m128i_i32[0] = v450;
                v89[3].m128i_i32[2] = v451;
                v89[3].m128i_i8[12] = v452 & 3 | v89[3].m128i_i8[12] & 0xFC;
                v92 = v453;
                v453 = 0;
                v89[4].m128i_i64[0] = v92;
                v89[4].m128i_i32[2] = v454;
                si128 = _mm_load_si128(v458);
                v94 = qword_1C7F2C0;
                v89[4].m128i_i8[12] = v455 & 3 | v89[4].m128i_i8[12] & 0xFC;
                v95 = v456;
                v456 = 0;
                v89[5].m128i_i64[0] = v95;
                LOWORD(v95) = v457;
                v89[6] = si128;
                v89[5].m128i_i16[4] = v95;
                ++v87[-1].m128i_i32[3];
                sub_182CBA0(v94, &v451);
                sub_182CBA0(v94, &v454);
                v96 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, &v444);
                sub_182CBA0(v96, &v447);
                if ( v385 )
                  goto LABEL_76;
                goto LABEL_130;
              }
            }
            else
            {
              v86((__int64)v442, v5, (__int64)v423, (__int64)&v433);
              v87 = *v386;
              if ( *v386 )
                goto LABEL_73;
            }
            v224 = (_QWORD *)sub_186B270(0xE8u);
            *v224 = 2;
            v87 = (const __m128i *)(v224 + 1);
            *v386 = (const __m128i *)(v224 + 1);
            v89 = (__m128i *)(v224 + 1);
            goto LABEL_75;
          }
          v133 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v85 + 184);
          if ( v133 == sub_5161D0 )
          {
            sub_50C420((__int64)v442, *(_QWORD *)(v5 + 8), (__int64)v423, (__int64)&v433);
            v134 = *v386;
            if ( !*v386 )
              goto LABEL_228;
          }
          else
          {
            v133((__int64)v442, v5, (__int64)v423, (__int64)&v433);
            v134 = *v386;
            if ( !*v386 )
            {
LABEL_228:
              v225 = (_QWORD *)sub_186B270(0xE8u);
              *v225 = 2;
              v134 = (const __m128i *)(v225 + 1);
              *v386 = (const __m128i *)(v225 + 1);
              v136 = (__m128i *)(v225 + 1);
              goto LABEL_129;
            }
          }
          v135 = v134[-1].m128i_u32[3];
          if ( v135 == v134[-1].m128i_i32[2] )
          {
            v400 = (3 * v135 + 1) >> 1;
            v174 = 112 * v400 + 8;
            if ( 112 * v135 + 8 >= v174 || v135 >= (3 * v135 + 1) >> 1 )
            {
              v378 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v422, "Overflow encountered when expanding vector");
              *v378 = (char *)off_1C63128;
              sub_2333C0(v378 + 1, v422);
              sub_233E40((__int64)v422);
              __cxa_throw(v378, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v175 = (unsigned int *)sub_186B270(v174);
            v134 = (const __m128i *)(v175 + 2);
            v176 = *v386;
            if ( *v386 )
            {
              v177 = v176[-1].m128i_u32[3];
              v178 = (__m128i *)(v175 + 2);
              v175[1] = v177;
              v179 = 7 * v177;
              v180 = v176;
              v181 = &v176[v179];
              if ( v176 != v181 )
              {
                do
                {
                  v182 = v180->m128i_i64[0];
                  v183 = v178[1].m128i_i8[4];
                  v180 += 7;
                  v178 += 7;
                  v178[-7].m128i_i64[0] = v182;
                  v178[-7].m128i_i32[2] = v180[-7].m128i_i32[2];
                  v178[-6].m128i_i32[0] = v180[-6].m128i_i32[0];
                  v178[-6].m128i_i8[4] = v183 & 0xFC | v180[-6].m128i_i8[4] & 3;
                  v184 = v180[-6].m128i_i64[1];
                  v180[-6].m128i_i64[1] = 0;
                  v185 = v178[-5].m128i_i8[4];
                  v178[-6].m128i_i64[1] = v184;
                  v178[-5].m128i_i32[0] = v180[-5].m128i_i32[0];
                  v178[-5].m128i_i8[4] = v185 & 0xFC | v180[-5].m128i_i8[4] & 3;
                  v186 = v180[-5].m128i_i64[1];
                  v180[-5].m128i_i64[1] = 0;
                  v187 = v178[-4].m128i_i8[12];
                  v178[-5].m128i_i64[1] = v186;
                  v178[-4].m128i_i32[0] = v180[-4].m128i_i32[0];
                  v178[-4].m128i_i32[2] = v180[-4].m128i_i32[2];
                  v178[-4].m128i_i8[12] = v187 & 0xFC | v180[-4].m128i_i8[12] & 3;
                  v188 = v180[-3].m128i_i64[0];
                  v180[-3].m128i_i64[0] = 0;
                  v178[-3].m128i_i64[0] = v188;
                  v178[-3].m128i_i32[2] = v180[-3].m128i_i32[2];
                  v189 = _mm_loadu_si128(v180 - 1);
                  v178[-3].m128i_i8[12] = v178[-3].m128i_i8[12] & 0xFC | v180[-3].m128i_i8[12] & 3;
                  v190 = v180[-2].m128i_i64[0];
                  v180[-2].m128i_i64[0] = 0;
                  v178[-2].m128i_i64[0] = v190;
                  LOWORD(v190) = v180[-2].m128i_i16[4];
                  v178[-1] = v189;
                  v178[-2].m128i_i16[4] = v190;
                }
                while ( v181 != v180 );
              }
              v191 = v176[-1].m128i_u32[3];
              if ( (_DWORD)v191 )
              {
                v408 = (const __m128i *)(v175 + 2);
                v414 = v175;
                v418 = v5;
                v402 = v10;
                v192 = &v176[7 * v191];
                do
                {
                  v193 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v176[3].m128i_u64[1]);
                  sub_182CBA0(v193, &v176[4].m128i_u64[1]);
                  v194 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v176[1]);
                  v195 = v176 + 2;
                  v176 += 7;
                  sub_182CBA0(v194, v195);
                }
                while ( v176 != v192 );
                v10 = v402;
                v134 = v408;
                v175 = v414;
                v5 = v418;
                v176 = *v386;
              }
              v409 = v175;
              v403 = v134;
              sub_186B220(&v176[-1].m128i_u64[1]);
              v175 = v409;
              v134 = v403;
              v136 = (__m128i *)&v403[7 * v409[1]];
            }
            else
            {
              v175[1] = 0;
              v136 = (__m128i *)(v175 + 2);
            }
            *v386 = v134;
            *v175 = v400;
          }
          else
          {
            v136 = (__m128i *)&v134[7 * v135];
          }
LABEL_129:
          v136->m128i_i64[0] = *(_QWORD *)v442;
          v136->m128i_i32[2] = v443;
          v136[1].m128i_i32[0] = v444;
          v136[1].m128i_i8[4] = v445 & 3 | v136[1].m128i_i8[4] & 0xFC;
          v137 = v446;
          v446 = 0;
          v136[1].m128i_i64[1] = v137;
          v136[2].m128i_i32[0] = v447;
          v136[2].m128i_i8[4] = v448 & 3 | v136[2].m128i_i8[4] & 0xFC;
          v138 = v449;
          v449 = 0;
          v136[2].m128i_i64[1] = v138;
          v136[3].m128i_i32[0] = v450;
          v136[3].m128i_i32[2] = v451;
          v136[3].m128i_i8[12] = v452 & 3 | v136[3].m128i_i8[12] & 0xFC;
          v139 = v453;
          v453 = 0;
          v136[4].m128i_i64[0] = v139;
          v136[4].m128i_i32[2] = v454;
          v140 = _mm_load_si128(v458);
          v141 = qword_1C7F2C0;
          v136[4].m128i_i8[12] = v455 & 3 | v136[4].m128i_i8[12] & 0xFC;
          v142 = v456;
          v456 = 0;
          v136[5].m128i_i64[0] = v142;
          LOWORD(v142) = v457;
          v136[6] = v140;
          v136[5].m128i_i16[4] = v142;
          ++v134[-1].m128i_i32[3];
          sub_182CBA0(v141, &v451);
          sub_182CBA0(v141, &v454);
          v143 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v444);
          sub_182CBA0(v143, &v447);
          if ( v385 )
          {
LABEL_76:
            if ( v389 )
              goto LABEL_77;
            do
            {
              v196 = v60;
              v197 = v60;
              v60 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 216) + 16LL) + 4LL * v60);
            }
            while ( v197 != v60 );
            v198 = **(_QWORD **)(v5 + 144) + 112 * v196;
            m128i_i64 = (__int64)(*v386)[7 * *(_QWORD *)v382].m128i_i64;
            if ( (unsigned __int8)sub_B28610(m128i_i64 + 8, v198 + 8)
              && (unsigned __int8)sub_B28610(m128i_i64 + 48, v198 + 48) )
            {
              v389 = *(_WORD *)(m128i_i64 + 88) != *(_WORD *)(v198 + 88);
            }
            else
            {
LABEL_77:
              v389 = 1;
            }
            goto LABEL_78;
          }
LABEL_130:
          v389 = 0;
LABEL_78:
          v97 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v438);
          sub_182CBA0(v97, v439);
          v98 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v435);
          sub_182CBA0(v98, v436);
          v99 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v428);
          sub_182CBA0(v99, v429);
          v100 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v425);
          sub_182CBA0(v100, v426);
          if ( ++*(_QWORD *)v382 == v388 )
            goto LABEL_79;
        }
      }
    }
    v222 = (_QWORD *)sub_186B270(0x10u);
    v14 = v222 + 1;
    *(_QWORD *)(v10 + 16) = v222 + 1;
    *v222 = 2;
    v16 = (unsigned int *)(v222 + 1);
    v15 = 0;
LABEL_13:
    *v16 = v15;
    ++*((_DWORD *)v14 - 1);
    v17 = *(_QWORD **)(v10 + 24);
    if ( !v17 )
      goto LABEL_161;
    goto LABEL_14;
  }
  v386 = (const __m128i **)sub_186B270(8u);
  *v386 = nullptr;
  v389 = 0;
LABEL_79:
  v101 = *(_QWORD **)(v5 + 216);
  if ( v101 )
  {
    v102 = v101[4];
    if ( v102 )
      sub_186B220((void *)(v102 - 8));
    v103 = v101[3];
    if ( v103 )
      sub_186B220((void *)(v103 - 8));
    v104 = v101[2];
    if ( v104 )
      sub_186B220((void *)(v104 - 8));
    sub_186B220(v101);
  }
  v105 = *(__int64 **)(v5 + 144);
  if ( v105 )
  {
    v106 = *v105;
    if ( *v105 )
    {
      v107 = *(unsigned int *)(v106 - 4);
      if ( (_DWORD)v107 )
      {
        *(_QWORD *)v383 = v5;
        v108 = v106 + 112 * v107;
        do
        {
          v109 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v106 + 56);
          sub_182CBA0(v109, v106 + 72);
          v110 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v106 + 16);
          v111 = v106 + 32;
          v106 += 112;
          sub_182CBA0(v110, v111);
        }
        while ( v106 != v108 );
        v5 = *(_QWORD *)v383;
        v106 = *v105;
      }
      sub_186B220((void *)(v106 - 8));
    }
    sub_186B220(v105);
  }
  *(_QWORD *)(v5 + 216) = v10;
  *(_QWORD *)(v5 + 144) = v386;
  if ( v385 && v389 )
  {
    v250 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL);
    if ( v250 == sub_5155C0 )
      v251 = *(_BYTE *)(v5 + 152);
    else
      v251 = v250(v5);
    if ( v251 )
    {
      sub_5165E0(v385);
    }
    else
    {
      v252 = *(__int64 **)(v385 + 144);
      *(_BYTE *)(v385 + 152) = 0;
      v253 = *v252;
      if ( *v252 )
      {
        v254 = 0;
        while ( v254 < *(_DWORD *)(v253 - 4) )
        {
          v255 = v254;
          do
          {
            v256 = v255;
            v257 = v255;
            v255 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 216) + 16LL) + 4LL * v255);
          }
          while ( v257 != v255 );
          v258 = **(_QWORD **)(v5 + 144) + 112 * v256;
          v259 = v254;
          do
          {
            v260 = v259;
            v261 = v259;
            v259 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v385 + 216) + 16LL) + 4LL * v259);
          }
          while ( v261 != v259 );
          sub_B290A0(v253 + 112 * v260, v258);
          ++v254;
          v252 = *(__int64 **)(v385 + 144);
          v253 = *v252;
          if ( !*v252 )
            goto LABEL_97;
        }
        v314 = 0;
        do
        {
          if ( v314 >= *(_DWORD *)(v253 - 4) )
            break;
          v315 = v314;
          v316 = *(_QWORD **)(v385 + 216);
          v317 = v316[2];
          do
          {
            v318 = v315;
            v319 = v315;
            v315 = *(_DWORD *)(v317 + 4LL * v315);
          }
          while ( v319 != v315 );
          LODWORD(v320) = v314;
          do
          {
            v321 = (unsigned int)v320;
            v322 = v320;
            v320 = *(unsigned int *)(v317 + 4LL * (unsigned int)v320);
          }
          while ( v322 != (_DWORD)v320 );
          if ( v319 != (_DWORD)v320 )
          {
            v323 = v316[3];
            if ( *(_DWORD *)(v323 + 4 * v318) >= *(_DWORD *)(v323 + 4 * v321) )
            {
              v324 = v315;
              v315 = v320;
              v320 = v324;
            }
            v325 = (_QWORD *)v316[1];
            *(_DWORD *)(v317 + 4LL * v315) = v320;
            v326 = 4 * v320;
            *(_DWORD *)(v323 + v326) += *(_DWORD *)(v323 + 4LL * v315);
            v327 = v316[4];
            v328 = (int *)(v327 + v326);
            v329 = (int *)(v327 + 4LL * v315);
            v330 = *v329;
            *v329 = *v328;
            *v328 = v330;
            v331 = sub_180C100(v325 + 2, 24);
            v332 = (_QWORD *)*v325;
            *(_QWORD *)v331 = off_1C4F500;
            v333 = v331;
            *(_QWORD *)(v331 + 8) = v316;
            *(_DWORD *)(v331 + 16) = v315;
            if ( v332 )
            {
              v334 = *((_DWORD *)v332 - 1);
              if ( v334 == *((_DWORD *)v332 - 2) )
              {
                v338 = (3 * v334 + 1) >> 1;
                v339 = 8 * v338 + 8;
                if ( 8 * v334 + 8 >= v339 || v334 >= v338 )
                {
                  v376 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v442, "Overflow encountered when expanding vector");
                  *v376 = (char *)off_1C63128;
                  sub_2333C0(v376 + 1, v442);
                  sub_233E40((__int64)v442);
                  __cxa_throw(v376, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v340 = (unsigned int *)sub_186B300(v332 - 1, v339);
                v341 = v340[1];
                v332 = v340 + 2;
                *v325 = v340 + 2;
                *v340 = v338;
                LODWORD(v340) = v341;
                v337 = &v332[v341];
                v336 = (_DWORD)v340 + 1;
              }
              else
              {
                v335 = v334;
                v336 = v334 + 1;
                v337 = &v332[v335];
              }
            }
            else
            {
              v342 = (_QWORD *)sub_186B270(0x18u);
              *v342 = 2;
              v336 = 1;
              v332 = v342 + 1;
              *v325 = v332;
              v337 = v332;
            }
            *v337 = v333;
            *((_DWORD *)v332 - 1) = v336;
            v252 = *(__int64 **)(v385 + 144);
          }
          v253 = *v252;
          ++v314;
        }
        while ( *v252 );
      }
    }
  }
LABEL_97:
  if ( ptr )
    sub_186B220(ptr);
  result = (__int64)v387;
  if ( v387 )
    return sub_186B220(v387);
  return result;
}

