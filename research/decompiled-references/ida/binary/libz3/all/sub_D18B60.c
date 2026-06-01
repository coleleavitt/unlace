__int64 __fastcall sub_D18B60(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 *v9; // rbp
  unsigned int *v10; // rsi
  _DWORD *v11; // rax
  unsigned int *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int *v19; // rsi
  _DWORD *v20; // rax
  unsigned int *v21; // rax
  _DWORD *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned int v25; // esi
  __int64 v26; // rbx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // esi
  __int64 v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rsi
  int v35; // eax
  bool v36; // zf
  __int64 v37; // rsi
  unsigned int v38; // esi
  __int64 v39; // rbx
  _QWORD *v40; // rdx
  __int64 v41; // rax
  unsigned int v42; // esi
  __int64 v43; // rax
  __int64 v44; // rsi
  _QWORD *v45; // rdx
  __int64 v46; // rdi
  __int64 v47; // rsi
  int v48; // eax
  __int64 v49; // rsi
  char *v50; // rbx
  char *v51; // rbp
  __int64 v52; // rsi
  __int64 v53; // rdi
  char *v54; // rbx
  char *v55; // rbp
  __int64 v56; // rsi
  __int64 v57; // rdi
  char *v58; // rbx
  char *v59; // rbp
  __int64 v60; // rsi
  __int64 v61; // rdi
  __int64 v62; // rdi
  unsigned int v63; // esi
  __int64 v64; // rbx
  _QWORD *v65; // r15
  __int64 v66; // rax
  unsigned int v67; // esi
  __int64 v68; // rax
  unsigned int v69; // esi
  __int64 v70; // rax
  __int64 v71; // rsi
  _QWORD *v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // rsi
  int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rsi
  int v78; // eax
  __int64 v79; // rsi
  _QWORD *v80; // rdx
  __int64 v81; // rdi
  __int64 v82; // rsi
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rsi
  int v86; // eax
  __int64 v87; // rsi
  unsigned int v88; // esi
  __int64 v89; // rbx
  _QWORD *v90; // r15
  __int64 v91; // rax
  unsigned int v92; // esi
  __int64 v93; // rax
  unsigned int v94; // esi
  __int64 v95; // rax
  __int64 v96; // rsi
  _QWORD *v97; // rdx
  __int64 v98; // rdi
  __int64 v99; // rsi
  int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rsi
  int v103; // eax
  __int64 v104; // rsi
  unsigned int v105; // esi
  __int64 v106; // rbx
  _QWORD *v107; // r15
  __int64 v108; // rax
  unsigned int v109; // esi
  __int64 v110; // rax
  unsigned int v111; // esi
  __int64 v112; // rax
  __int64 v113; // rsi
  _QWORD *v114; // rdx
  __int64 v115; // rdi
  __int64 v116; // rsi
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rsi
  int v120; // eax
  __int64 v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rax
  unsigned int v124; // edx
  __m128i *v125; // rbp
  int v126; // ecx
  __int64 v127; // r9
  __int64 *v128; // r12
  int v129; // esi
  __int64 v130; // rcx
  __m128i *v131; // rdi
  __m128i *v132; // rax
  __int64 *v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rbx
  char *v137; // rax
  char *v138; // rdi
  unsigned __int64 v139; // rax
  __int64 v140; // rcx
  char *v141; // rax
  char *v142; // rdi
  unsigned __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rbx
  char *v146; // rax
  char *v147; // rdi
  unsigned __int64 v148; // rax
  __int64 v149; // rcx
  char *v150; // rax
  char *v151; // rdi
  unsigned __int64 v152; // rax
  __int64 v153; // rcx
  char *v154; // rax
  char *v155; // rdi
  unsigned __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rbx
  char *v159; // rax
  char *v160; // rdi
  unsigned __int64 v161; // rax
  __int64 v162; // rcx
  char *v163; // rax
  char *v164; // rdi
  unsigned __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rbx
  char *v168; // rax
  char *v169; // rdi
  unsigned __int64 v170; // rax
  __int64 v171; // rcx
  char *v172; // rax
  char *v173; // rdi
  unsigned __int64 v174; // rax
  __int64 v175; // rcx
  char *v176; // rax
  char *v177; // rdi
  unsigned __int64 v178; // rax
  __int64 v179; // rcx
  char *v180; // rax
  char *v181; // rdi
  unsigned __int64 v182; // rax
  __int64 v183; // rcx
  char *v184; // rax
  char *v185; // rdi
  unsigned __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rbx
  char *v189; // rax
  char *v190; // rdi
  unsigned __int64 v191; // rax
  __int64 v192; // rcx
  _QWORD *v193; // rdx
  unsigned int v194; // eax
  __int64 v195; // rsi
  __int64 v196; // rdi
  _DWORD *v197; // rax
  unsigned int *v198; // rax
  _DWORD *v199; // rdx
  __int64 v200; // rdx
  __int64 v201; // rax
  __int64 *v202; // rax
  __int64 v203; // rdi
  unsigned int v204; // ebp
  unsigned int v205; // ecx
  unsigned int *v206; // rax
  __m128i *v207; // rax
  int v208; // r11d
  __m128i *v209; // r8
  __m128i *v210; // rdi
  const __m128i *v211; // r13
  const __m128i *v212; // r10
  __int64 v213; // rax
  __m128i *v214; // rdx
  __m128i *v215; // rax
  __int64 v216; // rdx
  __int64 v217; // rax
  __int64 *v218; // rax
  __int64 v219; // rax
  __int64 v220; // rdx
  __int64 *v221; // rax
  __int64 v222; // rax
  __int64 v223; // rdx
  __int64 *v224; // rax
  __int64 v225; // rdx
  __int64 v226; // rax
  __int64 *v227; // rax
  __int64 v228; // rsi
  unsigned __int64 v229; // rax
  __int64 v230; // r9
  unsigned __int64 v231; // rax
  __int64 v232; // r9
  __int64 v233; // rdx
  __int64 v234; // rax
  __int64 *v235; // rax
  __int64 v236; // rsi
  __int64 v237; // rdi
  unsigned __int64 v238; // rax
  __int64 v239; // r9
  unsigned __int64 v240; // rax
  __int64 v241; // r9
  unsigned __int64 v242; // rax
  __int64 v243; // r9
  unsigned __int64 v244; // rax
  __int64 v245; // r9
  unsigned __int64 v246; // rax
  __int64 v247; // r9
  _QWORD *v248; // rdx
  unsigned __int64 v249; // rax
  __int64 v250; // r9
  unsigned __int64 v251; // rax
  __int64 v252; // r9
  unsigned __int64 v253; // rax
  __int64 v254; // r9
  unsigned __int64 v255; // rax
  __int64 v256; // r9
  unsigned __int64 v257; // rax
  __int64 v258; // r9
  unsigned __int64 v259; // rax
  __int64 v260; // r9
  char **exception; // rbp
  __int64 v262; // rdx
  __int64 v263; // [rsp+0h] [rbp-450h]
  int v264; // [rsp+0h] [rbp-450h]
  size_t v265; // [rsp+0h] [rbp-450h]
  int v266; // [rsp+0h] [rbp-450h]
  __int64 v267; // [rsp+8h] [rbp-448h]
  __int64 v268; // [rsp+8h] [rbp-448h]
  int v269; // [rsp+8h] [rbp-448h]
  size_t v270; // [rsp+8h] [rbp-448h]
  __int64 v271; // [rsp+10h] [rbp-440h]
  int v272; // [rsp+10h] [rbp-440h]
  int v273; // [rsp+10h] [rbp-440h]
  int v274; // [rsp+10h] [rbp-440h]
  __int64 v275; // [rsp+18h] [rbp-438h]
  int v276; // [rsp+18h] [rbp-438h]
  __int64 v277; // [rsp+20h] [rbp-430h]
  __int64 v278; // [rsp+28h] [rbp-428h]
  int v279; // [rsp+28h] [rbp-428h]
  __int64 v280; // [rsp+30h] [rbp-420h]
  __int64 v281; // [rsp+30h] [rbp-420h]
  __int64 v282; // [rsp+38h] [rbp-418h]
  __int64 v283; // [rsp+40h] [rbp-410h]
  __int64 v284; // [rsp+40h] [rbp-410h]
  __int64 v285; // [rsp+48h] [rbp-408h]
  __int64 v286; // [rsp+50h] [rbp-400h]
  int v287; // [rsp+60h] [rbp-3F0h]
  _QWORD *v288; // [rsp+60h] [rbp-3F0h]
  _QWORD *v289; // [rsp+60h] [rbp-3F0h]
  _QWORD *v290; // [rsp+60h] [rbp-3F0h]
  _QWORD *v291; // [rsp+60h] [rbp-3F0h]
  __int64 v292; // [rsp+68h] [rbp-3E8h]
  __int64 v293; // [rsp+70h] [rbp-3E0h]
  __int64 v294; // [rsp+A0h] [rbp-3B0h] BYREF
  __int64 v295; // [rsp+A8h] [rbp-3A8h] BYREF
  __int64 v296; // [rsp+B0h] [rbp-3A0h] BYREF
  __int64 v297; // [rsp+B8h] [rbp-398h] BYREF
  __int64 v298; // [rsp+C0h] [rbp-390h] BYREF
  __int64 v299; // [rsp+C8h] [rbp-388h] BYREF
  __int64 v300; // [rsp+D0h] [rbp-380h] BYREF
  __int64 v301; // [rsp+D8h] [rbp-378h] BYREF
  __int64 v302; // [rsp+E0h] [rbp-370h] BYREF
  __int64 v303; // [rsp+E8h] [rbp-368h] BYREF
  __int64 v304; // [rsp+F0h] [rbp-360h] BYREF
  __int64 v305; // [rsp+F8h] [rbp-358h] BYREF
  __int64 v306; // [rsp+100h] [rbp-350h] BYREF
  __int64 v307; // [rsp+108h] [rbp-348h] BYREF
  __int64 v308; // [rsp+110h] [rbp-340h] BYREF
  __int64 v309; // [rsp+118h] [rbp-338h] BYREF
  __int64 v310; // [rsp+120h] [rbp-330h] BYREF
  __int64 v311; // [rsp+128h] [rbp-328h] BYREF
  __int64 v312; // [rsp+130h] [rbp-320h] BYREF
  __int64 v313; // [rsp+138h] [rbp-318h] BYREF
  __int64 v314; // [rsp+140h] [rbp-310h] BYREF
  __int64 v315; // [rsp+148h] [rbp-308h] BYREF
  __int64 v316; // [rsp+150h] [rbp-300h] BYREF
  __int64 v317; // [rsp+158h] [rbp-2F8h] BYREF
  __int64 v318; // [rsp+160h] [rbp-2F0h] BYREF
  __int64 v319; // [rsp+168h] [rbp-2E8h] BYREF
  __int64 v320; // [rsp+170h] [rbp-2E0h] BYREF
  __int64 v321; // [rsp+178h] [rbp-2D8h] BYREF
  __int64 v322; // [rsp+180h] [rbp-2D0h] BYREF
  __int64 v323; // [rsp+188h] [rbp-2C8h] BYREF
  __int64 v324; // [rsp+190h] [rbp-2C0h] BYREF
  __int64 v325; // [rsp+198h] [rbp-2B8h] BYREF
  __int64 v326; // [rsp+1A0h] [rbp-2B0h] BYREF
  __int64 v327; // [rsp+1A8h] [rbp-2A8h] BYREF
  __int64 v328; // [rsp+1B0h] [rbp-2A0h] BYREF
  __int64 v329; // [rsp+1B8h] [rbp-298h] BYREF
  __int64 v330; // [rsp+1C0h] [rbp-290h] BYREF
  __int64 v331; // [rsp+1C8h] [rbp-288h] BYREF
  __int64 v332; // [rsp+1D0h] [rbp-280h]
  __int64 v333; // [rsp+1D8h] [rbp-278h] BYREF
  __int64 v334; // [rsp+1E0h] [rbp-270h]
  __int64 v335; // [rsp+1E8h] [rbp-268h] BYREF
  __int64 v336; // [rsp+1F0h] [rbp-260h]
  __int64 v337; // [rsp+1F8h] [rbp-258h] BYREF
  __int64 v338; // [rsp+200h] [rbp-250h]
  __int64 v339; // [rsp+208h] [rbp-248h] BYREF
  __int64 v340; // [rsp+210h] [rbp-240h]
  __int64 v341; // [rsp+218h] [rbp-238h] BYREF
  __int64 v342; // [rsp+220h] [rbp-230h]
  __int64 v343; // [rsp+238h] [rbp-218h] BYREF
  void *v344; // [rsp+240h] [rbp-210h] BYREF
  __int64 v345; // [rsp+248h] [rbp-208h]
  _BYTE v346[136]; // [rsp+250h] [rbp-200h] BYREF
  __int64 v347; // [rsp+2D8h] [rbp-178h] BYREF
  void *v348; // [rsp+2E0h] [rbp-170h] BYREF
  __int64 v349; // [rsp+2E8h] [rbp-168h]
  _BYTE v350[136]; // [rsp+2F0h] [rbp-160h] BYREF
  __int64 v351; // [rsp+378h] [rbp-D8h] BYREF
  void *ptr; // [rsp+380h] [rbp-D0h] BYREF
  __int64 v353; // [rsp+388h] [rbp-C8h]
  _BYTE v354[192]; // [rsp+390h] [rbp-C0h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v5 = a2;
  v6 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  result = 0;
  if ( v6 && *v6 == 0x400000000LL )
  {
    if ( a3 )
    {
      LOBYTE(v347) = 1;
      v9 = (__int64 *)a2;
      while ( 1 )
      {
        sub_D18670(a1, v9[4], &v347, 0);
        v10 = (unsigned int *)v9[5];
        if ( !*(_BYTE *)(a1 + 384) )
          break;
        if ( *((_WORD *)v10 + 2)
          || (v11 = *(_DWORD **)(*((_QWORD *)v10 + 2) + 24LL)) == nullptr
          || *v11
          || v11[1] != 4
          || ((v222 = *v10, v351 = 0, (v223 = *(_QWORD *)(a1 + 80)) == 0) || (unsigned int)v222 >= *(_DWORD *)(v223 - 4)
            ? (v224 = &v351)
            : (v224 = (__int64 *)(v223 + 8 * v222)),
              *v224) )
        {
          v12 = (unsigned int *)v9[6];
          if ( *((_WORD *)v12 + 2) )
            break;
          v13 = *(_QWORD **)(*((_QWORD *)v12 + 2) + 24LL);
          if ( !v13 || *v13 != 0x400000000LL )
            break;
          v216 = *(_QWORD *)(a1 + 80);
          v217 = *v12;
          v351 = 0;
          if ( v216 && (unsigned int)v217 < *(_DWORD *)(v216 - 4) )
            v218 = (__int64 *)(v216 + 8 * v217);
          else
            v218 = &v351;
          if ( *v218 )
            break;
          sub_D18670(a1, (__int64)v10, &v347, 0);
          v9 = (__int64 *)v9[6];
        }
        else
        {
          sub_D18670(a1, v9[6], &v347, 0);
          v9 = (__int64 *)v9[5];
        }
      }
      sub_D18670(a1, (__int64)v10, &v347, 0);
      sub_D18670(a1, v9[6], &v347, 0);
      if ( !(_BYTE)v347 )
        return 1;
    }
    v14 = *(_QWORD *)a1;
    v344 = v346;
    v282 = v14;
    v343 = v14;
    v347 = v14;
    v351 = v14;
    v345 = 0x1000000000LL;
    v348 = v350;
    v349 = 0x1000000000LL;
    ptr = v354;
    v353 = 0x1000000000LL;
    if ( a4 )
    {
      v15 = 0;
      v16 = 0;
      v263 = 0;
      v267 = 0;
      v285 = v14;
      v283 = v14;
      v280 = v14;
      v286 = v14;
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v5 + 32);
          v331 = v16;
          v332 = v286;
          sub_D16A30(a1, v17, 0, &v331);
          v16 = v331;
          v18 = *(_QWORD *)a1;
          v286 = v332;
          v337 = v263;
          v338 = v285;
          sub_D15F70(v18, v331, &v337);
          v19 = *(unsigned int **)(v5 + 40);
          v263 = v337;
          v285 = v338;
          if ( !*(_BYTE *)(a1 + 384) )
          {
LABEL_25:
            v278 = 0;
            v275 = 0;
            v293 = v282;
            v292 = v282;
            v277 = 0;
            v271 = 0;
            goto LABEL_26;
          }
          if ( *((_WORD *)v19 + 2) )
            break;
          v20 = *(_DWORD **)(*((_QWORD *)v19 + 2) + 24LL);
          if ( !v20 || *v20 || v20[1] != 4 )
            break;
          v225 = *(_QWORD *)(a1 + 80);
          v226 = *v19;
          v330 = 0;
          if ( v225 && (unsigned int)v226 < *(_DWORD *)(v225 - 4) )
            v227 = (__int64 *)(v225 + 8 * v226);
          else
            v227 = &v330;
          if ( *v227 )
            break;
          v228 = *(_QWORD *)(v5 + 48);
          v335 = v267;
          v336 = v283;
          sub_D16A30(a1, v228, 0, &v335);
          v294 = v16;
          v267 = v335;
          v283 = v336;
          if ( v16 )
            ++*(_DWORD *)(v16 + 8);
          sub_9EDC60((__int64)&v344, &v294);
          v295 = v267;
          if ( v267 )
            ++*(_DWORD *)(v267 + 8);
          sub_9EDC60((__int64)&v344, &v295);
          sub_D175A0(a1, (unsigned int)v345, v344);
          sub_D16FD0(&v343);
          sub_D16FD0(&v343);
          v304 = v263;
          if ( v263 )
            ++*(_DWORD *)(v263 + 8);
          sub_9EDC60((__int64)&v344, &v304);
          v5 = *(_QWORD *)(v5 + 40);
        }
        v21 = *(unsigned int **)(v5 + 48);
        if ( *((_WORD *)v21 + 2) )
          goto LABEL_25;
        v22 = *(_DWORD **)(*((_QWORD *)v21 + 2) + 24LL);
        v271 = (__int64)v22;
        if ( !v22 )
          break;
        if ( *v22 || v22[1] != 4 )
          goto LABEL_25;
        v219 = *v21;
        v330 = 0;
        v220 = *(_QWORD *)(a1 + 80);
        if ( v220 && (unsigned int)v219 < *(_DWORD *)(v220 - 4) )
          v221 = (__int64 *)(v220 + 8 * v219);
        else
          v221 = &v330;
        if ( *v221 )
          goto LABEL_25;
        v333 = v15;
        v334 = v280;
        sub_D16A30(a1, (__int64)v19, 0, &v333);
        v15 = v333;
        v280 = v334;
        v305 = v263;
        if ( v263 )
          ++*(_DWORD *)(v263 + 8);
        sub_9EDC60((__int64)&v344, &v305);
        v306 = v15;
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        sub_9EDC60((__int64)&v344, &v306);
        sub_D175A0(a1, (unsigned int)v345, v344);
        sub_D16FD0(&v343);
        sub_D16FD0(&v343);
        v315 = v16;
        if ( v16 )
          ++*(_DWORD *)(v16 + 8);
        sub_9EDC60((__int64)&v344, &v315);
        v5 = *(_QWORD *)(v5 + 48);
      }
      v278 = 0;
      v275 = 0;
      v277 = 0;
      v293 = v282;
      v292 = v282;
      goto LABEL_26;
    }
    v122 = sub_D17130(a1);
    v275 = v122;
    if ( v122 )
      ++*(_DWORD *)(v122 + 8);
    v123 = sub_15E1A70(*(_QWORD *)a1);
    v278 = v123;
    if ( v123 )
      ++*(_DWORD *)(v123 + 8);
    v124 = *(_DWORD *)(a1 + 24);
    if ( 3 * v124 < 4 * (*(_DWORD *)(a1 + 28) + *(_DWORD *)(a1 + 32)) )
    {
      v269 = 2 * v124;
      v265 = 32LL * v124;
      v207 = (__m128i *)sub_186B270(v265);
      v127 = v265;
      v208 = v269;
      v125 = v207;
      v209 = &v207[v265 / 0x10];
      if ( v269 )
      {
        if ( (v265 & 0x10) == 0 || (*v207 = 0, ++v207, v207 != v209) )
        {
          do
          {
            *v207 = 0;
            v207 += 2;
            v207[-1] = 0;
          }
          while ( v207 != v209 );
        }
      }
      v210 = *(__m128i **)(a1 + 16);
      v126 = v269 - 1;
      v128 = (__int64 *)v209;
      v211 = v210;
      v212 = &v210[*(unsigned int *)(a1 + 24)];
      if ( v210 != v212 )
      {
        do
        {
          if ( v211->m128i_i64[0] > 1uLL )
          {
            v213 = 16LL * (*(_DWORD *)(v211->m128i_i64[0] + 12) & (unsigned int)v126);
            v214 = &v125[(unsigned __int64)v213 / 0x10];
            if ( v265 == v213 )
            {
LABEL_427:
              if ( v125 == v214 )
              {
LABEL_452:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v215 = v125;
              while ( v215->m128i_i64[0] )
              {
                if ( v214 == ++v215 )
                  goto LABEL_452;
              }
            }
            else
            {
              v215 = &v125[(unsigned __int64)v213 / 0x10];
              while ( v215->m128i_i64[0] )
              {
                if ( v209 == ++v215 )
                  goto LABEL_427;
              }
            }
            *v215 = _mm_loadu_si128(v211);
          }
          ++v211;
        }
        while ( v212 != v211 );
        v210 = *(__m128i **)(a1 + 16);
      }
      if ( v210 )
      {
        v274 = v269;
        v270 = v265;
        v266 = v208 - 1;
        sub_186B220(v210);
        v126 = v266;
        v127 = v270;
        v208 = v274;
      }
      *(_QWORD *)(a1 + 16) = v125;
      *(_DWORD *)(a1 + 24) = v208;
      *(_DWORD *)(a1 + 32) = 0;
    }
    else
    {
      v125 = *(__m128i **)(a1 + 16);
      v126 = v124 - 1;
      v127 = 16LL * v124;
      v128 = (__int64 *)((char *)v125->m128i_i64 + v127);
    }
    v129 = *(_DWORD *)(v5 + 12);
    v130 = 16LL * (v129 & (unsigned int)v126);
    v131 = &v125[(unsigned __int64)v130 / 0x10];
    if ( v130 != v127 )
    {
      v132 = &v125[(unsigned __int64)v130 / 0x10];
      v133 = nullptr;
      while ( 1 )
      {
        v134 = v132->m128i_i64[0];
        if ( v132->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v134 + 12) == v129 && v5 == v134 )
          {
            v132->m128i_i64[0] = v5;
            v132->m128i_i64[1] = v275;
            goto LABEL_374;
          }
        }
        else
        {
          if ( !v134 )
          {
            if ( v133 )
              goto LABEL_444;
            v133 = (__int64 *)v132;
            goto LABEL_445;
          }
          v133 = (__int64 *)v132;
        }
        if ( ++v132 == (__m128i *)v128 )
          goto LABEL_223;
      }
    }
    v133 = nullptr;
    while ( 1 )
    {
LABEL_223:
      if ( v131 == v125 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v135 = v125->m128i_i64[0];
      if ( v125->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v135 + 12) == v129 && v5 == v135 )
        {
          v125->m128i_i64[0] = v5;
          v125->m128i_i64[1] = v275;
          goto LABEL_374;
        }
      }
      else
      {
        if ( !v135 )
        {
          if ( v133 )
LABEL_444:
            --*(_DWORD *)(a1 + 32);
          else
            v133 = (__int64 *)v125;
LABEL_445:
          *v133 = v5;
          v133[1] = v275;
          ++*(_DWORD *)(a1 + 28);
LABEL_374:
          v193 = *(_QWORD **)(a1 + 48);
          ++*(_DWORD *)(v5 + 8);
          if ( v193 )
          {
            v194 = *((_DWORD *)v193 - 1);
            if ( v194 == *((_DWORD *)v193 - 2) )
            {
              v204 = (3 * v194 + 1) >> 1;
              v205 = 8 * v204 + 8;
              if ( 8 * v194 + 8 >= v205 || v194 >= v204 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_166874(&v341, "Overflow encountered when expanding vector", v262);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v341);
                sub_233E40((__int64)&v341);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v206 = (unsigned int *)sub_186B300(v193 - 1, v205);
              v193 = v206 + 2;
              *v206 = v204;
              v194 = v206[1];
              *(_QWORD *)(a1 + 48) = v193;
            }
          }
          else
          {
            v248 = (_QWORD *)sub_186B270(0x18u);
            *v248 = 2;
            v194 = 0;
            v193 = v248 + 1;
            *(_QWORD *)(a1 + 48) = v193;
          }
          v15 = 0;
          v271 = 0;
          v193[v194] = v5;
          v16 = 0;
          *((_DWORD *)v193 - 1) = v194 + 1;
          v277 = 0;
          v292 = v282;
          v293 = v282;
          v285 = v282;
          v283 = v282;
          v280 = v282;
          v286 = v282;
          v263 = 0;
          v267 = 0;
          while ( 1 )
          {
            v195 = *(_QWORD *)(v5 + 32);
            v331 = v16;
            v332 = v286;
            sub_D16A30(a1, v195, 0, &v331);
            v16 = v331;
            v196 = *(_QWORD *)a1;
            v286 = v332;
            v337 = v263;
            v338 = v285;
            sub_D15F70(v196, v331, &v337);
            v19 = *(unsigned int **)(v5 + 40);
            v263 = v337;
            v285 = v338;
            if ( !*(_BYTE *)(a1 + 384) )
              break;
            if ( *((_WORD *)v19 + 2)
              || (v197 = *(_DWORD **)(*((_QWORD *)v19 + 2) + 24LL)) == nullptr
              || *v197
              || v197[1] != 4
              || ((v233 = *(_QWORD *)(a1 + 80), v234 = *v19, v330 = 0, !v233)
               || (unsigned int)v234 >= *(_DWORD *)(v233 - 4)
                ? (v235 = &v330)
                : (v235 = (__int64 *)(v233 + 8 * v234)),
                  *v235) )
            {
              v198 = *(unsigned int **)(v5 + 48);
              if ( *((_WORD *)v198 + 2) )
                break;
              v199 = *(_DWORD **)(*((_QWORD *)v198 + 2) + 24LL);
              if ( !v199 || *v199 || v199[1] != 4 )
                break;
              v200 = *(_QWORD *)(a1 + 80);
              v201 = *v198;
              v330 = 0;
              if ( v200 && (unsigned int)v201 < *(_DWORD *)(v200 - 4) )
                v202 = (__int64 *)(v200 + 8 * v201);
              else
                v202 = &v330;
              if ( *v202 )
                break;
              v333 = v15;
              v334 = v280;
              sub_D16A30(a1, (__int64)v19, 0, &v333);
              v15 = v333;
              v203 = *(_QWORD *)a1;
              v280 = v334;
              v339 = v277;
              v340 = v293;
              sub_D15F70(v203, v333, &v339);
              v277 = v339;
              v293 = v340;
              v307 = v263;
              if ( v263 )
                ++*(_DWORD *)(v263 + 8);
              sub_9EDC60((__int64)&v344, &v307);
              v308 = v15;
              if ( v15 )
                ++*(_DWORD *)(v15 + 8);
              sub_9EDC60((__int64)&v344, &v308);
              v309 = v278;
              if ( v278 )
                ++*(_DWORD *)(v278 + 8);
              sub_9EDC60((__int64)&v344, &v309);
              sub_D175A0(a1, (unsigned int)v345, v344);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              v310 = v263;
              if ( v263 )
                ++*(_DWORD *)(v263 + 8);
              sub_9EDC60((__int64)&v344, &v310);
              v311 = v277;
              if ( v277 )
                ++*(_DWORD *)(v277 + 8);
              sub_9EDC60((__int64)&v344, &v311);
              v312 = v275;
              if ( v275 )
                ++*(_DWORD *)(v275 + 8);
              sub_9EDC60((__int64)&v344, &v312);
              sub_D175A0(a1, (unsigned int)v345, v344);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              if ( *(_BYTE *)(a1 + 385) )
              {
                v313 = v15;
                if ( v15 )
                  ++*(_DWORD *)(v15 + 8);
                sub_9EDC60((__int64)&ptr, &v313);
                v314 = v277;
                if ( v277 )
                  ++*(_DWORD *)(v277 + 8);
                sub_9EDC60((__int64)&v348, &v314);
              }
              v315 = v16;
              if ( v16 )
                ++*(_DWORD *)(v16 + 8);
              sub_9EDC60((__int64)&v344, &v315);
              v5 = *(_QWORD *)(v5 + 48);
            }
            else
            {
              v236 = *(_QWORD *)(v5 + 48);
              v335 = v267;
              v336 = v283;
              sub_D16A30(a1, v236, 0, &v335);
              v237 = *(_QWORD *)a1;
              v283 = v336;
              v267 = v335;
              v341 = v271;
              v342 = v292;
              sub_D15F70(v237, v335, &v341);
              v296 = v16;
              v271 = v341;
              v292 = v342;
              if ( v16 )
                ++*(_DWORD *)(v16 + 8);
              sub_9EDC60((__int64)&v344, &v296);
              v297 = v267;
              if ( v267 )
                ++*(_DWORD *)(v267 + 8);
              sub_9EDC60((__int64)&v344, &v297);
              v298 = v278;
              if ( v278 )
                ++*(_DWORD *)(v278 + 8);
              sub_9EDC60((__int64)&v344, &v298);
              sub_D175A0(a1, (unsigned int)v345, v344);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              v299 = v16;
              if ( v16 )
                ++*(_DWORD *)(v16 + 8);
              sub_9EDC60((__int64)&v344, &v299);
              v300 = v271;
              if ( v271 )
                ++*(_DWORD *)(v271 + 8);
              sub_9EDC60((__int64)&v344, &v300);
              v301 = v275;
              if ( v275 )
                ++*(_DWORD *)(v275 + 8);
              sub_9EDC60((__int64)&v344, &v301);
              sub_D175A0(a1, (unsigned int)v345, v344);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              if ( *(_BYTE *)(a1 + 385) )
              {
                v302 = v267;
                if ( v267 )
                  ++*(_DWORD *)(v267 + 8);
                sub_9EDC60((__int64)&ptr, &v302);
                v303 = v271;
                if ( v271 )
                  ++*(_DWORD *)(v271 + 8);
                sub_9EDC60((__int64)&v348, &v303);
              }
              v304 = v263;
              if ( v263 )
                ++*(_DWORD *)(v263 + 8);
              sub_9EDC60((__int64)&v344, &v304);
              v5 = *(_QWORD *)(v5 + 40);
            }
          }
LABEL_26:
          v333 = v15;
          v334 = v280;
          sub_D16A30(a1, (__int64)v19, 0, &v333);
          v23 = *(_QWORD *)(v5 + 48);
          v24 = v333;
          v281 = v334;
          v335 = v267;
          v336 = v283;
          sub_D16A30(a1, v23, 0, &v335);
          v268 = v335;
          v284 = v336;
          if ( a4 )
          {
            if ( v263 )
              ++*(_DWORD *)(v263 + 8);
            v25 = v345;
            LODWORD(v26) = HIDWORD(v345);
            if ( (unsigned int)v345 >= HIDWORD(v345) )
            {
              v26 = (unsigned int)(2 * HIDWORD(v345));
              v141 = (char *)sub_186B270(8 * v26);
              v25 = v345;
              v142 = (char *)v344;
              v27 = v141;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v141 == (char *)v344 + 8 )
                {
                  v229 = 0;
                  v230 = 8LL * (unsigned int)v345;
                  do
                  {
                    v27[v229 / 8] = *(_QWORD *)&v142[v229];
                    v229 += 8LL;
                  }
                  while ( v229 != v230 );
                }
                else
                {
                  v143 = 0;
                  v144 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v27[v143 / 8] = _mm_loadu_si128((const __m128i *)&v142[v143]);
                    v143 += 16LL;
                  }
                  while ( v143 != v144 );
                  if ( (v25 & 1) != 0 )
                    v27[v25 & 0xFFFFFFFE] = *(_QWORD *)&v142[8 * (v25 & 0xFFFFFFFE)];
                }
              }
              if ( v142 != v346 && v142 )
              {
                v289 = v27;
                sub_186B220(v142);
                v25 = v345;
                v27 = v289;
              }
              v344 = v27;
              HIDWORD(v345) = v26;
            }
            else
            {
              v27 = v344;
            }
            v28 = v25;
            v29 = v25 + 1;
            v27[v28] = v263;
            LODWORD(v345) = v29;
            if ( v24 )
            {
              ++*(_DWORD *)(v24 + 8);
              v29 = v345;
              LODWORD(v26) = HIDWORD(v345);
            }
            if ( v29 >= (unsigned int)v26 )
            {
              v136 = (unsigned int)(2 * v26);
              v137 = (char *)sub_186B270(8 * v136);
              v29 = v345;
              v138 = (char *)v344;
              v27 = v137;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v137 == (char *)v344 + 8 )
                {
                  v231 = 0;
                  v232 = 8LL * (unsigned int)v345;
                  do
                  {
                    v27[v231 / 8] = *(_QWORD *)&v138[v231];
                    v231 += 8LL;
                  }
                  while ( v231 != v232 );
                }
                else
                {
                  v139 = 0;
                  v140 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v27[v139 / 8] = _mm_loadu_si128((const __m128i *)&v138[v139]);
                    v139 += 16LL;
                  }
                  while ( v140 != v139 );
                  if ( (v29 & 1) != 0 )
                    v27[v29 & 0xFFFFFFFE] = *(_QWORD *)&v138[8 * (v29 & 0xFFFFFFFE)];
                }
              }
              if ( v138 != v346 && v138 )
              {
                v288 = v27;
                sub_186B220(v138);
                v29 = v345;
                v27 = v288;
              }
              v344 = v27;
              HIDWORD(v345) = v136;
            }
            v30 = v29;
            v31 = v29 + 1;
            v27[v30] = v24;
            LODWORD(v345) = v31;
            sub_D175A0(a1, v31, v27);
            v32 = v344;
            v33 = v343;
            v34 = *((_QWORD *)v344 + (unsigned int)(v345 - 1));
            v35 = v345 - 1;
            LODWORD(v345) = v345 - 1;
            if ( v34 )
            {
              v36 = (*(_DWORD *)(v34 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v33, v34);
                v32 = v344;
                v35 = v345;
                v33 = v343;
              }
              else
              {
                v35 = v345;
              }
            }
            v37 = v32[v35 - 1];
            LODWORD(v345) = v35 - 1;
            if ( v37 )
            {
              v36 = (*(_DWORD *)(v37 + 8))-- == 1;
              if ( v36 )
                sub_15D7BC0(v33, v37);
            }
            if ( v16 )
              ++*(_DWORD *)(v16 + 8);
            v38 = v345;
            LODWORD(v39) = HIDWORD(v345);
            if ( (unsigned int)v345 >= HIDWORD(v345) )
            {
              v39 = (unsigned int)(2 * HIDWORD(v345));
              v150 = (char *)sub_186B270(8 * v39);
              v38 = v345;
              v151 = (char *)v344;
              v40 = v150;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v150 == (char *)v344 + 8 )
                {
                  v238 = 0;
                  v239 = 8LL * (unsigned int)v345;
                  do
                  {
                    v40[v238 / 8] = *(_QWORD *)&v151[v238];
                    v238 += 8LL;
                  }
                  while ( v238 != v239 );
                }
                else
                {
                  v152 = 0;
                  v153 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v40[v152 / 8] = _mm_loadu_si128((const __m128i *)&v151[v152]);
                    v152 += 16LL;
                  }
                  while ( v152 != v153 );
                  if ( (v38 & 1) != 0 )
                    v40[v38 & 0xFFFFFFFE] = *(_QWORD *)&v151[8 * (v38 & 0xFFFFFFFE)];
                }
              }
              if ( v151 != v346 && v151 )
              {
                v291 = v40;
                sub_186B220(v151);
                v38 = v345;
                v40 = v291;
              }
              v344 = v40;
              HIDWORD(v345) = v39;
            }
            else
            {
              v40 = v344;
            }
            v41 = v38;
            v42 = v38 + 1;
            v40[v41] = v16;
            LODWORD(v345) = v42;
            if ( v268 )
            {
              ++*(_DWORD *)(v268 + 8);
              v42 = v345;
              LODWORD(v39) = HIDWORD(v345);
            }
            if ( v42 >= (unsigned int)v39 )
            {
              v145 = (unsigned int)(2 * v39);
              v146 = (char *)sub_186B270(8 * v145);
              v42 = v345;
              v147 = (char *)v344;
              v40 = v146;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v146 == (char *)v344 + 8 )
                {
                  v240 = 0;
                  v241 = 8LL * (unsigned int)v345;
                  do
                  {
                    v40[v240 / 8] = *(_QWORD *)&v147[v240];
                    v240 += 8LL;
                  }
                  while ( v240 != v241 );
                }
                else
                {
                  v148 = 0;
                  v149 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v40[v148 / 8] = _mm_loadu_si128((const __m128i *)&v147[v148]);
                    v148 += 16LL;
                  }
                  while ( v148 != v149 );
                  if ( (v42 & 1) != 0 )
                    v40[v42 & 0xFFFFFFFE] = *(_QWORD *)&v147[8 * (v42 & 0xFFFFFFFE)];
                }
              }
              if ( v147 && v147 != v346 )
              {
                v290 = v40;
                sub_186B220(v147);
                v42 = v345;
                v40 = v290;
              }
              v344 = v40;
              HIDWORD(v345) = v145;
            }
            v43 = v42;
            v44 = v42 + 1;
            v40[v43] = v268;
            LODWORD(v345) = v44;
            sub_D175A0(a1, v44, v40);
            v45 = v344;
            v46 = v343;
            v47 = *((_QWORD *)v344 + (unsigned int)(v345 - 1));
            v48 = v345 - 1;
            LODWORD(v345) = v345 - 1;
            if ( v47 )
            {
              v36 = (*(_DWORD *)(v47 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v46, v47);
                v45 = v344;
                v48 = v345;
                v46 = v343;
              }
              else
              {
                v48 = v345;
              }
            }
            v49 = v45[v48 - 1];
            LODWORD(v345) = v48 - 1;
            if ( v49 )
            {
              v36 = (*(_DWORD *)(v49 + 8))-- == 1;
              if ( v36 )
                sub_15D7BC0(v46, v49);
            }
          }
          else
          {
            v61 = *(_QWORD *)a1;
            v339 = v277;
            v340 = v293;
            sub_D15F70(v61, v24, &v339);
            v62 = *(_QWORD *)a1;
            v277 = v339;
            v293 = v340;
            v341 = v271;
            v342 = v292;
            sub_D15F70(v62, v268, &v341);
            v271 = v341;
            v292 = v342;
            if ( v263 )
              ++*(_DWORD *)(v263 + 8);
            v63 = v345;
            LODWORD(v64) = HIDWORD(v345);
            if ( (unsigned int)v345 >= HIDWORD(v345) )
            {
              v64 = (unsigned int)(2 * HIDWORD(v345));
              v184 = (char *)sub_186B270(8 * v64);
              v63 = v345;
              v185 = (char *)v344;
              v65 = v184;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v184 == (char *)v344 + 8 )
                {
                  v244 = 0;
                  v245 = 8LL * (unsigned int)v345;
                  do
                  {
                    v65[v244 / 8] = *(_QWORD *)&v185[v244];
                    v244 += 8LL;
                  }
                  while ( v244 != v245 );
                }
                else
                {
                  v186 = 0;
                  v187 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v65[v186 / 8] = _mm_loadu_si128((const __m128i *)&v185[v186]);
                    v186 += 16LL;
                  }
                  while ( v186 != v187 );
                  if ( (v63 & 1) != 0 )
                    v65[v63 & 0xFFFFFFFE] = *(_QWORD *)&v185[8 * (v63 & 0xFFFFFFFE)];
                }
              }
              if ( v185 != v346 && v185 )
              {
                sub_186B220(v185);
                v63 = v345;
              }
              v344 = v65;
              HIDWORD(v345) = v64;
            }
            else
            {
              v65 = v344;
            }
            v66 = v63;
            v67 = v63 + 1;
            v65[v66] = v263;
            LODWORD(v345) = v67;
            if ( v24 )
            {
              ++*(_DWORD *)(v24 + 8);
              v67 = v345;
              LODWORD(v64) = HIDWORD(v345);
            }
            if ( v67 >= (unsigned int)v64 )
            {
              v64 = (unsigned int)(2 * v64);
              v180 = (char *)sub_186B270(8 * v64);
              v67 = v345;
              v181 = (char *)v344;
              v65 = v180;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v180 == (char *)v344 + 8 )
                {
                  v246 = 0;
                  v247 = 8LL * (unsigned int)v345;
                  do
                  {
                    v65[v246 / 8] = *(_QWORD *)&v181[v246];
                    v246 += 8LL;
                  }
                  while ( v246 != v247 );
                }
                else
                {
                  v182 = 0;
                  v183 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v65[v182 / 8] = _mm_loadu_si128((const __m128i *)&v181[v182]);
                    v182 += 16LL;
                  }
                  while ( v182 != v183 );
                  if ( (v67 & 1) != 0 )
                    v65[v67 & 0xFFFFFFFE] = *(_QWORD *)&v181[8 * (v67 & 0xFFFFFFFE)];
                }
              }
              if ( v181 != v346 && v181 )
              {
                sub_186B220(v181);
                v67 = v345;
              }
              v344 = v65;
              HIDWORD(v345) = v64;
            }
            v68 = v67;
            v69 = v67 + 1;
            v65[v68] = v24;
            LODWORD(v345) = v69;
            if ( v278 )
            {
              ++*(_DWORD *)(v278 + 8);
              v69 = v345;
              LODWORD(v64) = HIDWORD(v345);
            }
            if ( v69 >= (unsigned int)v64 )
            {
              v158 = (unsigned int)(2 * v64);
              v159 = (char *)sub_186B270(8 * v158);
              v69 = v345;
              v160 = (char *)v344;
              v65 = v159;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v159 == (char *)v344 + 8 )
                {
                  v259 = 0;
                  v260 = 8LL * (unsigned int)v345;
                  do
                  {
                    v65[v259 / 8] = *(_QWORD *)&v160[v259];
                    v259 += 8LL;
                  }
                  while ( v260 != v259 );
                }
                else
                {
                  v161 = 0;
                  v162 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v65[v161 / 8] = _mm_loadu_si128((const __m128i *)&v160[v161]);
                    v161 += 16LL;
                  }
                  while ( v162 != v161 );
                  if ( (v69 & 1) != 0 )
                    v65[v69 & 0xFFFFFFFE] = *(_QWORD *)&v160[8 * (v69 & 0xFFFFFFFE)];
                }
              }
              if ( v160 != v346 && v160 )
              {
                sub_186B220(v160);
                v69 = v345;
              }
              v344 = v65;
              HIDWORD(v345) = v158;
            }
            v70 = v69;
            v71 = v69 + 1;
            v65[v70] = v278;
            LODWORD(v345) = v71;
            sub_D175A0(a1, v71, v65);
            v72 = v344;
            v73 = v343;
            v74 = *((_QWORD *)v344 + (unsigned int)(v345 - 1));
            v75 = v345 - 1;
            LODWORD(v345) = v345 - 1;
            if ( v74 )
            {
              v36 = (*(_DWORD *)(v74 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v73, v74);
                v72 = v344;
                v75 = v345;
                v73 = v343;
              }
              else
              {
                v75 = v345;
              }
            }
            v76 = (unsigned int)(v75 - 1);
            v77 = v72[v76];
            v78 = v75 - 1;
            LODWORD(v345) = v76;
            if ( v77 )
            {
              v36 = (*(_DWORD *)(v77 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v73, v77);
                v72 = v344;
                v78 = v345;
                v73 = v343;
              }
              else
              {
                v78 = v345;
              }
            }
            v79 = v72[v78 - 1];
            LODWORD(v345) = v78 - 1;
            if ( v79 )
            {
              v36 = (*(_DWORD *)(v79 + 8))-- == 1;
              if ( v36 )
                sub_15D7BC0(v73, v79);
            }
            v316 = v16;
            if ( v16 )
              ++*(_DWORD *)(v16 + 8);
            sub_9EDC60((__int64)&v344, &v316);
            v317 = v268;
            if ( v268 )
              ++*(_DWORD *)(v268 + 8);
            sub_9EDC60((__int64)&v344, &v317);
            v318 = v278;
            if ( v278 )
              ++*(_DWORD *)(v278 + 8);
            sub_9EDC60((__int64)&v344, &v318);
            sub_D175A0(a1, (unsigned int)v345, v344);
            v80 = v344;
            v81 = v343;
            v82 = *((_QWORD *)v344 + (unsigned int)(v345 - 1));
            v83 = v345 - 1;
            LODWORD(v345) = v345 - 1;
            if ( v82 )
            {
              v36 = (*(_DWORD *)(v82 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v81, v82);
                v80 = v344;
                v83 = v345;
                v81 = v343;
              }
              else
              {
                v83 = v345;
              }
            }
            v84 = (unsigned int)(v83 - 1);
            v85 = v80[v84];
            v86 = v83 - 1;
            LODWORD(v345) = v84;
            if ( v85 )
            {
              v36 = (*(_DWORD *)(v85 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v81, v85);
                v80 = v344;
                v86 = v345;
                v81 = v343;
              }
              else
              {
                v86 = v345;
              }
            }
            v87 = v80[v86 - 1];
            LODWORD(v345) = v86 - 1;
            if ( v87 )
            {
              v36 = (*(_DWORD *)(v87 + 8))-- == 1;
              if ( v36 )
                sub_15D7BC0(v81, v87);
            }
            if ( v263 )
              ++*(_DWORD *)(v263 + 8);
            v88 = v345;
            LODWORD(v89) = HIDWORD(v345);
            if ( (unsigned int)v345 >= HIDWORD(v345) )
            {
              v89 = (unsigned int)(2 * HIDWORD(v345));
              v154 = (char *)sub_186B270(8 * v89);
              v88 = v345;
              v155 = (char *)v344;
              v90 = v154;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v154 == (char *)v344 + 8 )
                {
                  v253 = 0;
                  v254 = 8LL * (unsigned int)v345;
                  do
                  {
                    v90[v253 / 8] = *(_QWORD *)&v155[v253];
                    v253 += 8LL;
                  }
                  while ( v254 != v253 );
                }
                else
                {
                  v156 = 0;
                  v157 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v90[v156 / 8] = _mm_loadu_si128((const __m128i *)&v155[v156]);
                    v156 += 16LL;
                  }
                  while ( v156 != v157 );
                  if ( (v88 & 1) != 0 )
                    v90[v88 & 0xFFFFFFFE] = *(_QWORD *)&v155[8 * (v88 & 0xFFFFFFFE)];
                }
              }
              if ( v155 != v346 && v155 )
              {
                sub_186B220(v155);
                v88 = v345;
              }
              v344 = v90;
              HIDWORD(v345) = v89;
            }
            else
            {
              v90 = v344;
            }
            v91 = v88;
            v92 = v88 + 1;
            v90[v91] = v263;
            LODWORD(v345) = v92;
            if ( v277 )
            {
              ++*(_DWORD *)(v277 + 8);
              v92 = v345;
              LODWORD(v89) = HIDWORD(v345);
            }
            if ( v92 >= (unsigned int)v89 )
            {
              v89 = (unsigned int)(2 * v89);
              v163 = (char *)sub_186B270(8 * v89);
              v92 = v345;
              v164 = (char *)v344;
              v90 = v163;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v163 == (char *)v344 + 8 )
                {
                  v249 = 0;
                  v250 = 8LL * (unsigned int)v345;
                  do
                  {
                    v90[v249 / 8] = *(_QWORD *)&v164[v249];
                    v249 += 8LL;
                  }
                  while ( v249 != v250 );
                }
                else
                {
                  v165 = 0;
                  v166 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v90[v165 / 8] = _mm_loadu_si128((const __m128i *)&v164[v165]);
                    v165 += 16LL;
                  }
                  while ( v165 != v166 );
                  if ( (v92 & 1) != 0 )
                    v90[v92 & 0xFFFFFFFE] = *(_QWORD *)&v164[8 * (v92 & 0xFFFFFFFE)];
                }
              }
              if ( v164 != v346 && v164 )
              {
                sub_186B220(v164);
                v92 = v345;
              }
              v344 = v90;
              HIDWORD(v345) = v89;
            }
            v93 = v92;
            v94 = v92 + 1;
            v90[v93] = v277;
            LODWORD(v345) = v94;
            if ( v275 )
            {
              ++*(_DWORD *)(v275 + 8);
              v94 = v345;
              LODWORD(v89) = HIDWORD(v345);
            }
            if ( v94 >= (unsigned int)v89 )
            {
              v167 = (unsigned int)(2 * v89);
              v168 = (char *)sub_186B270(8 * v167);
              v94 = v345;
              v169 = (char *)v344;
              v90 = v168;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v168 == (char *)v344 + 8 )
                {
                  v257 = 0;
                  v258 = 8LL * (unsigned int)v345;
                  do
                  {
                    v90[v257 / 8] = *(_QWORD *)&v169[v257];
                    v257 += 8LL;
                  }
                  while ( v257 != v258 );
                }
                else
                {
                  v170 = 0;
                  v171 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v90[v170 / 8] = _mm_loadu_si128((const __m128i *)&v169[v170]);
                    v170 += 16LL;
                  }
                  while ( v171 != v170 );
                  if ( (v94 & 1) != 0 )
                    v90[v94 & 0xFFFFFFFE] = *(_QWORD *)&v169[8 * (v94 & 0xFFFFFFFE)];
                }
              }
              if ( v169 != v346 && v169 )
              {
                sub_186B220(v169);
                v94 = v345;
              }
              v344 = v90;
              HIDWORD(v345) = v167;
            }
            v95 = v94;
            v96 = v94 + 1;
            v90[v95] = v275;
            LODWORD(v345) = v96;
            sub_D175A0(a1, v96, v90);
            v97 = v344;
            v98 = v343;
            v99 = *((_QWORD *)v344 + (unsigned int)(v345 - 1));
            v100 = v345 - 1;
            LODWORD(v345) = v345 - 1;
            if ( v99 )
            {
              v36 = (*(_DWORD *)(v99 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v98, v99);
                v97 = v344;
                v100 = v345;
                v98 = v343;
              }
              else
              {
                v100 = v345;
              }
            }
            v101 = (unsigned int)(v100 - 1);
            v102 = v97[v101];
            v103 = v100 - 1;
            LODWORD(v345) = v101;
            if ( v102 )
            {
              v36 = (*(_DWORD *)(v102 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v98, v102);
                v97 = v344;
                v103 = v345;
                v98 = v343;
              }
              else
              {
                v103 = v345;
              }
            }
            v104 = v97[v103 - 1];
            LODWORD(v345) = v103 - 1;
            if ( v104 )
            {
              v36 = (*(_DWORD *)(v104 + 8))-- == 1;
              if ( v36 )
                sub_15D7BC0(v98, v104);
            }
            if ( v16 )
              ++*(_DWORD *)(v16 + 8);
            v105 = v345;
            LODWORD(v106) = HIDWORD(v345);
            if ( (unsigned int)v345 >= HIDWORD(v345) )
            {
              v106 = (unsigned int)(2 * HIDWORD(v345));
              v172 = (char *)sub_186B270(8 * v106);
              v105 = v345;
              v173 = (char *)v344;
              v107 = v172;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v172 == (char *)v344 + 8 )
                {
                  v255 = 0;
                  v256 = 8LL * (unsigned int)v345;
                  do
                  {
                    v107[v255 / 8] = *(_QWORD *)&v173[v255];
                    v255 += 8LL;
                  }
                  while ( v256 != v255 );
                }
                else
                {
                  v174 = 0;
                  v175 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v107[v174 / 8] = _mm_loadu_si128((const __m128i *)&v173[v174]);
                    v174 += 16LL;
                  }
                  while ( v175 != v174 );
                  if ( (v105 & 1) != 0 )
                    v107[v105 & 0xFFFFFFFE] = *(_QWORD *)&v173[8 * (v105 & 0xFFFFFFFE)];
                }
              }
              if ( v173 && v173 != v346 )
              {
                sub_186B220(v173);
                v105 = v345;
              }
              v344 = v107;
              HIDWORD(v345) = v106;
            }
            else
            {
              v107 = v344;
            }
            v108 = v105;
            v109 = v105 + 1;
            v107[v108] = v16;
            LODWORD(v345) = v109;
            if ( v271 )
            {
              ++*(_DWORD *)(v271 + 8);
              v109 = v345;
              LODWORD(v106) = HIDWORD(v345);
            }
            if ( v109 >= (unsigned int)v106 )
            {
              v106 = (unsigned int)(2 * v106);
              v176 = (char *)sub_186B270(8 * v106);
              v109 = v345;
              v177 = (char *)v344;
              v107 = v176;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v176 == (char *)v344 + 8 )
                {
                  v242 = 0;
                  v243 = 8LL * (unsigned int)v345;
                  do
                  {
                    v107[v242 / 8] = *(_QWORD *)&v177[v242];
                    v242 += 8LL;
                  }
                  while ( v243 != v242 );
                }
                else
                {
                  v178 = 0;
                  v179 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v107[v178 / 8] = _mm_loadu_si128((const __m128i *)&v177[v178]);
                    v178 += 16LL;
                  }
                  while ( v179 != v178 );
                  if ( (v109 & 1) != 0 )
                    v107[v109 & 0xFFFFFFFE] = *(_QWORD *)&v177[8 * (v109 & 0xFFFFFFFE)];
                }
              }
              if ( v177 != v346 && v177 )
              {
                sub_186B220(v177);
                v109 = v345;
              }
              v344 = v107;
              HIDWORD(v345) = v106;
            }
            v110 = v109;
            v111 = v109 + 1;
            v107[v110] = v271;
            LODWORD(v345) = v111;
            if ( v275 )
            {
              ++*(_DWORD *)(v275 + 8);
              v111 = v345;
              LODWORD(v106) = HIDWORD(v345);
            }
            if ( v111 >= (unsigned int)v106 )
            {
              v188 = (unsigned int)(2 * v106);
              v189 = (char *)sub_186B270(8 * v188);
              v111 = v345;
              v190 = (char *)v344;
              v107 = v189;
              if ( (_DWORD)v345 )
              {
                if ( (unsigned int)(v345 - 1) <= 2 || v189 == (char *)v344 + 8 )
                {
                  v251 = 0;
                  v252 = 8LL * (unsigned int)v345;
                  do
                  {
                    v107[v251 / 8] = *(_QWORD *)&v190[v251];
                    v251 += 8LL;
                  }
                  while ( v251 != v252 );
                }
                else
                {
                  v191 = 0;
                  v192 = 16LL * ((unsigned int)v345 >> 1);
                  do
                  {
                    *(__m128i *)&v107[v191 / 8] = _mm_loadu_si128((const __m128i *)&v190[v191]);
                    v191 += 16LL;
                  }
                  while ( v191 != v192 );
                  if ( (v111 & 1) != 0 )
                    v107[v111 & 0xFFFFFFFE] = *(_QWORD *)&v190[8 * (v111 & 0xFFFFFFFE)];
                }
              }
              if ( v190 && v190 != v346 )
              {
                sub_186B220(v190);
                v111 = v345;
              }
              v344 = v107;
              HIDWORD(v345) = v188;
            }
            v112 = v111;
            v113 = v111 + 1;
            v107[v112] = v275;
            LODWORD(v345) = v113;
            sub_D175A0(a1, v113, v107);
            v114 = v344;
            v115 = v343;
            v116 = *((_QWORD *)v344 + (unsigned int)(v345 - 1));
            v117 = v345 - 1;
            LODWORD(v345) = v345 - 1;
            if ( v116 )
            {
              v36 = (*(_DWORD *)(v116 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v115, v116);
                v114 = v344;
                v117 = v345;
                v115 = v343;
              }
              else
              {
                v117 = v345;
              }
            }
            v118 = (unsigned int)(v117 - 1);
            v119 = v114[v118];
            v120 = v117 - 1;
            LODWORD(v345) = v118;
            if ( v119 )
            {
              v36 = (*(_DWORD *)(v119 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v115, v119);
                v114 = v344;
                v120 = v345;
                v115 = v343;
              }
              else
              {
                v120 = v345;
              }
            }
            v121 = v114[v120 - 1];
            LODWORD(v345) = v120 - 1;
            if ( v121 )
            {
              v36 = (*(_DWORD *)(v121 + 8))-- == 1;
              if ( v36 )
                sub_15D7BC0(v115, v121);
            }
            if ( *(_BYTE *)(a1 + 385) )
            {
              v319 = v24;
              if ( v24 )
                ++*(_DWORD *)(v24 + 8);
              sub_9EDC60((__int64)&v344, &v319);
              v320 = v268;
              if ( v268 )
                ++*(_DWORD *)(v268 + 8);
              sub_9EDC60((__int64)&v344, &v320);
              v321 = v278;
              if ( v278 )
                ++*(_DWORD *)(v278 + 8);
              sub_9EDC60((__int64)&v344, &v321);
              sub_D175A0(a1, (unsigned int)v345, v344);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              v322 = v277;
              if ( v277 )
                ++*(_DWORD *)(v277 + 8);
              sub_9EDC60((__int64)&v344, &v322);
              v323 = v271;
              if ( v271 )
                ++*(_DWORD *)(v271 + 8);
              sub_9EDC60((__int64)&v344, &v323);
              v324 = v275;
              if ( v275 )
                ++*(_DWORD *)(v275 + 8);
              sub_9EDC60((__int64)&v344, &v324);
              sub_D175A0(a1, (unsigned int)v345, v344);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              sub_D16FD0(&v343);
              v325 = v24;
              if ( v24 )
                ++*(_DWORD *)(v24 + 8);
              sub_9EDC60((__int64)&ptr, &v325);
              v326 = v268;
              if ( v268 )
                ++*(_DWORD *)(v268 + 8);
              sub_9EDC60((__int64)&ptr, &v326);
              v327 = v278;
              if ( v278 )
                ++*(_DWORD *)(v278 + 8);
              sub_9EDC60((__int64)&ptr, &v327);
              sub_D175A0(a1, (unsigned int)v353, ptr);
              v328 = v277;
              if ( v277 )
                ++*(_DWORD *)(v277 + 8);
              sub_9EDC60((__int64)&v348, &v328);
              v329 = v271;
              if ( v271 )
                ++*(_DWORD *)(v271 + 8);
              sub_9EDC60((__int64)&v348, &v329);
              v330 = v275;
              if ( v275 )
                ++*(_DWORD *)(v275 + 8);
              sub_9EDC60((__int64)&v348, &v330);
              sub_D175A0(a1, (unsigned int)v349, v348);
            }
          }
          if ( v278 )
          {
            v287 = *(_DWORD *)(v278 + 8);
            *(_DWORD *)(v278 + 8) = v287 - 1;
            if ( v287 == 1 )
              sub_15D7BC0(v282, v278);
          }
          if ( v275 )
          {
            v279 = *(_DWORD *)(v275 + 8);
            *(_DWORD *)(v275 + 8) = v279 - 1;
            if ( v279 == 1 )
              sub_15D7BC0(v282, v275);
          }
          if ( v271 )
          {
            v276 = *(_DWORD *)(v271 + 8);
            *(_DWORD *)(v271 + 8) = v276 - 1;
            if ( v276 == 1 )
              sub_15D7BC0(v292, v271);
          }
          if ( v277 )
          {
            v272 = *(_DWORD *)(v277 + 8);
            *(_DWORD *)(v277 + 8) = v272 - 1;
            if ( v272 == 1 )
              sub_15D7BC0(v293, v277);
          }
          if ( v263 )
          {
            v273 = *(_DWORD *)(v263 + 8);
            *(_DWORD *)(v263 + 8) = v273 - 1;
            if ( v273 == 1 )
              sub_15D7BC0(v285, v263);
          }
          if ( v268 )
          {
            v264 = *(_DWORD *)(v268 + 8);
            *(_DWORD *)(v268 + 8) = v264 - 1;
            if ( v264 == 1 )
              sub_15D7BC0(v284, v268);
          }
          if ( v24 )
          {
            v36 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v36 )
              sub_15D7BC0(v281, v24);
          }
          if ( v16 )
          {
            v36 = (*(_DWORD *)(v16 + 8))-- == 1;
            if ( v36 )
              sub_15D7BC0(v286, v16);
          }
          v50 = (char *)ptr;
          v51 = (char *)ptr + 8 * (unsigned int)v353;
          if ( ptr < v51 )
          {
            do
            {
              v52 = *(_QWORD *)v50;
              if ( *(_QWORD *)v50 )
              {
                v53 = v351;
                v36 = (*(_DWORD *)(v52 + 8))-- == 1;
                if ( v36 )
                  sub_15D7BC0(v53, v52);
              }
              v50 += 8;
            }
            while ( v50 < v51 );
            v50 = (char *)ptr;
          }
          if ( v50 != v354 && v50 )
            sub_186B220(v50);
          v54 = (char *)v348;
          v55 = (char *)v348 + 8 * (unsigned int)v349;
          if ( v348 < v55 )
          {
            do
            {
              v56 = *(_QWORD *)v54;
              if ( *(_QWORD *)v54 )
              {
                v57 = v347;
                v36 = (*(_DWORD *)(v56 + 8))-- == 1;
                if ( v36 )
                  sub_15D7BC0(v57, v56);
              }
              v54 += 8;
            }
            while ( v54 < v55 );
            v54 = (char *)v348;
          }
          if ( v54 != v350 && v54 )
            sub_186B220(v54);
          v58 = (char *)v344;
          v59 = (char *)v344 + 8 * (unsigned int)v345;
          if ( v344 < v59 )
          {
            do
            {
              v60 = *(_QWORD *)v58;
              if ( *(_QWORD *)v58 )
              {
                v36 = (*(_DWORD *)(v60 + 8))-- == 1;
                if ( v36 )
                  sub_15D7BC0(v343, v60);
              }
              v58 += 8;
            }
            while ( v58 < v59 );
            v58 = (char *)v344;
          }
          if ( v58 )
          {
            if ( v58 != v346 )
              sub_186B220(v58);
          }
          return 2;
        }
        v133 = (__int64 *)v125;
      }
      ++v125;
    }
  }
  return result;
}

