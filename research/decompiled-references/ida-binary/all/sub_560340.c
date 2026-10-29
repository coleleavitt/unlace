__int64 *__fastcall sub_560340(__int64 a1, __int64 *a2, __int64 *a3)
{
  int v3; // ebp
  unsigned int v4; // ebx
  __int64 *result; // rax
  __m128i v6; // xmm5
  __int64 v7; // rcx
  int v8; // edx
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  __int64 v11; // r15
  unsigned int v12; // r13d
  __m128i *v13; // r14
  __int64 v14; // r10
  int v15; // esi
  unsigned __int16 *v16; // rax
  unsigned __int16 v17; // si
  unsigned __int16 v18; // r12
  unsigned int v19; // eax
  __int64 v20; // rax
  unsigned __int16 v21; // cx
  __int64 v22; // r11
  _WORD *v23; // rax
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // r8
  unsigned __int16 v26; // di
  unsigned __int16 v27; // di
  unsigned __int16 v28; // r8
  unsigned __int16 v29; // di
  unsigned __int16 v30; // r8
  unsigned __int16 v31; // di
  unsigned __int16 v32; // r8
  unsigned __int16 v33; // di
  unsigned __int16 v34; // r8
  unsigned __int16 v35; // di
  unsigned __int16 v36; // r8
  unsigned __int16 v37; // di
  unsigned __int16 v38; // r8
  unsigned __int16 v39; // dx
  unsigned __int16 v40; // di
  __int64 v41; // rdx
  unsigned int v42; // edi
  __int64 v43; // r9
  unsigned int v44; // eax
  unsigned int v45; // esi
  unsigned __int16 *v46; // r8
  unsigned __int16 *v47; // rax
  __int64 v48; // rbx
  int v49; // edi
  unsigned int v50; // r10d
  __int64 v51; // r15
  unsigned int v52; // r13d
  __m128i *v53; // r9
  unsigned __int16 v54; // r14
  int v55; // r12d
  int v56; // ebp
  unsigned __int16 *j; // rbx
  __int64 v58; // rax
  unsigned int v59; // edx
  __int64 v60; // r13
  unsigned int v61; // esi
  __m128i v62; // xmm6
  __int64 v63; // rsi
  unsigned __int8 *v64; // rax
  unsigned int v65; // r8d
  __int64 v66; // rdx
  unsigned int v67; // ecx
  __int64 v68; // rax
  unsigned __int8 v69; // r14
  unsigned int v70; // esi
  __int64 v71; // r8
  __int64 v72; // r11
  __int64 v73; // rcx
  __m128i *v74; // r13
  unsigned __int16 v75; // r12
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdx
  char v79; // di
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int16 v83; // r8
  __int64 v84; // r9
  unsigned __int16 *v85; // rdx
  __int64 v86; // r10
  __int16 *v87; // rax
  __int16 *v88; // rdx
  unsigned int v89; // r15d
  __int64 i; // r13
  unsigned int v91; // eax
  __int64 v92; // rdx
  char *v93; // r14
  __int64 v94; // rax
  __int64 v95; // rdx
  int v96; // eax
  __int16 v97; // ax
  __int16 v98; // ax
  int v99; // ecx
  unsigned __int16 v100; // si
  char v101; // cl
  __int64 v102; // rax
  __int64 v103; // rbx
  __int64 *v104; // r9
  char v105; // al
  unsigned __int16 v106; // r8
  unsigned int v107; // ecx
  char *v108; // r8
  unsigned int v109; // ebp
  __int64 v110; // r11
  unsigned int v111; // r10d
  char *v112; // rax
  unsigned int v113; // r10d
  unsigned int v114; // ecx
  __int64 v115; // rbp
  __int64 v116; // rax
  unsigned int v117; // esi
  char *v118; // rcx
  unsigned int v119; // ebp
  __int64 v120; // r10
  unsigned int v121; // edx
  __int64 v122; // r11
  char *v123; // rax
  unsigned int v124; // edx
  int v125; // r10d
  unsigned int v126; // eax
  int v127; // ebp
  char *v128; // rax
  unsigned int v129; // eax
  __int64 v130; // rcx
  unsigned __int16 k; // ax
  unsigned __int16 v132; // dx
  unsigned int v133; // ebp
  __int64 v134; // rax
  unsigned int v135; // r10d
  _WORD *v136; // rcx
  unsigned int v137; // edi
  unsigned int v138; // r8d
  unsigned __int16 v139; // ax
  unsigned __int16 v140; // ax
  unsigned __int16 v141; // ax
  unsigned __int16 v142; // ax
  unsigned __int16 v143; // ax
  unsigned __int16 v144; // ax
  unsigned __int16 v145; // ax
  unsigned __int16 v146; // ax
  _WORD *v147; // rsi
  unsigned int v148; // edi
  unsigned __int16 v149; // cx
  unsigned __int16 v150; // ax
  unsigned __int16 v151; // ax
  unsigned __int16 v152; // ax
  unsigned __int16 v153; // ax
  unsigned __int16 v154; // ax
  unsigned __int16 v155; // ax
  unsigned __int16 v156; // ax
  unsigned __int16 v157; // ax
  int v158; // eax
  __int64 v159; // rdx
  unsigned int v160; // eax
  char *v161; // rax
  unsigned __int16 v162; // ax
  __int64 v163; // rax
  unsigned __int16 v164; // di
  unsigned __int16 v165; // r10
  unsigned __int16 v166; // di
  unsigned __int16 v167; // dx
  unsigned __int16 v168; // di
  unsigned __int16 v169; // r10
  unsigned int v170; // eax
  int v171; // ebp
  char *v172; // rax
  unsigned int v173; // eax
  unsigned int v174; // esi
  unsigned __int64 v175; // rax
  unsigned int v176; // edi
  __int16 v177; // cx
  unsigned int v178; // ebx
  __int64 v179; // rax
  unsigned int v180; // r10d
  _WORD *v181; // rcx
  unsigned int v182; // edi
  unsigned int v183; // r9d
  unsigned __int16 v184; // ax
  unsigned __int16 v185; // ax
  unsigned __int16 v186; // ax
  unsigned __int16 v187; // ax
  unsigned __int16 v188; // ax
  unsigned __int16 v189; // ax
  unsigned __int16 v190; // ax
  unsigned __int16 v191; // ax
  _WORD *v192; // rcx
  unsigned int v193; // edi
  unsigned __int16 v194; // r8
  unsigned __int16 v195; // ax
  unsigned __int16 v196; // ax
  unsigned __int16 v197; // ax
  unsigned __int16 v198; // ax
  unsigned __int16 v199; // ax
  unsigned __int16 v200; // ax
  unsigned __int16 v201; // ax
  unsigned __int16 v202; // ax
  int v203; // eax
  __int64 v204; // rdx
  unsigned int v205; // eax
  char *v206; // rax
  unsigned __int16 v207; // ax
  __int64 v208; // rax
  unsigned __int16 v209; // di
  unsigned __int16 v210; // r10
  unsigned __int16 v211; // di
  unsigned __int16 v212; // dx
  unsigned __int16 v213; // di
  unsigned __int16 v214; // r10
  unsigned __int16 v215; // ax
  __int64 v216; // rax
  unsigned __int16 v217; // cx
  unsigned __int16 v218; // r8
  unsigned __int16 v219; // cx
  unsigned __int16 v220; // dx
  unsigned __int16 v221; // cx
  unsigned __int16 v222; // r8
  unsigned __int16 v223; // ax
  __int64 v224; // rax
  unsigned __int16 v225; // si
  unsigned __int16 v226; // r8
  unsigned __int16 v227; // si
  unsigned __int16 v228; // dx
  unsigned __int16 v229; // si
  unsigned __int16 v230; // r8
  __int64 v231; // rdx
  __int64 v232; // rax
  unsigned __int16 v233; // bp
  unsigned __int16 v234; // ax
  unsigned int v235; // ebx
  _WORD *v236; // rcx
  unsigned int v237; // r8d
  __int64 v238; // r13
  unsigned __int16 v239; // ax
  unsigned __int16 v240; // dx
  unsigned __int16 v241; // ax
  unsigned __int16 v242; // dx
  unsigned __int16 v243; // ax
  unsigned __int16 v244; // dx
  unsigned __int16 v245; // ax
  unsigned __int16 v246; // dx
  unsigned __int16 v247; // ax
  unsigned __int16 v248; // dx
  unsigned __int16 v249; // ax
  unsigned __int16 v250; // dx
  unsigned __int16 v251; // ax
  unsigned __int16 v252; // dx
  unsigned __int16 v253; // ax
  unsigned __int16 v254; // dx
  _WORD *v255; // rax
  int v256; // edi
  unsigned __int16 v257; // dx
  unsigned __int16 v258; // cx
  unsigned __int16 v259; // dx
  unsigned __int16 v260; // cx
  unsigned __int16 v261; // dx
  unsigned __int16 v262; // cx
  unsigned __int16 v263; // dx
  unsigned __int16 v264; // cx
  unsigned __int16 v265; // dx
  unsigned __int16 v266; // cx
  unsigned __int16 v267; // dx
  unsigned __int16 v268; // cx
  unsigned __int16 v269; // dx
  unsigned __int16 v270; // cx
  unsigned __int16 v271; // dx
  unsigned __int16 v272; // cx
  int v273; // eax
  __int64 v274; // rdx
  unsigned int v275; // eax
  char *v276; // rax
  unsigned __int16 v277; // ax
  unsigned __int16 v278; // ax
  __int64 v279; // rax
  unsigned __int16 v280; // r8
  unsigned __int16 v281; // bx
  unsigned __int16 v282; // r8
  unsigned __int16 v283; // dx
  unsigned __int16 v284; // r8
  unsigned __int16 v285; // bx
  unsigned __int16 v286; // dx
  unsigned __int16 v287; // dx
  __int64 v288; // rdx
  unsigned __int16 v289; // si
  unsigned __int16 v290; // di
  unsigned __int16 v291; // si
  unsigned __int16 v292; // cx
  unsigned __int16 v293; // si
  unsigned __int16 v294; // di
  unsigned __int16 v295; // [rsp+0h] [rbp-1C8h]
  char v296; // [rsp+0h] [rbp-1C8h]
  __int64 v297; // [rsp+0h] [rbp-1C8h]
  unsigned int v298; // [rsp+0h] [rbp-1C8h]
  __int64 v299; // [rsp+18h] [rbp-1B0h]
  unsigned int v300; // [rsp+18h] [rbp-1B0h]
  unsigned int v301; // [rsp+20h] [rbp-1A8h]
  unsigned int v302; // [rsp+20h] [rbp-1A8h]
  unsigned __int16 v303; // [rsp+2Eh] [rbp-19Ah]
  __int64 v304; // [rsp+30h] [rbp-198h]
  unsigned int v305; // [rsp+38h] [rbp-190h]
  char *v306; // [rsp+38h] [rbp-190h]
  unsigned __int16 v307; // [rsp+38h] [rbp-190h]
  char *v308; // [rsp+38h] [rbp-190h]
  __int64 v309; // [rsp+38h] [rbp-190h]
  __int64 *v310; // [rsp+38h] [rbp-190h]
  __int64 *v311; // [rsp+38h] [rbp-190h]
  __int64 v313; // [rsp+48h] [rbp-180h]
  unsigned int v314; // [rsp+50h] [rbp-178h]
  __int64 *v315; // [rsp+50h] [rbp-178h]
  unsigned int v316; // [rsp+50h] [rbp-178h]
  unsigned __int16 v317; // [rsp+50h] [rbp-178h]
  __int64 v318; // [rsp+58h] [rbp-170h]
  unsigned int v319; // [rsp+58h] [rbp-170h]
  __int64 *v320; // [rsp+58h] [rbp-170h]
  __int64 *v321; // [rsp+60h] [rbp-168h]
  __int64 v322; // [rsp+60h] [rbp-168h]
  unsigned __int16 v323; // [rsp+68h] [rbp-160h]
  unsigned __int8 v324; // [rsp+6Bh] [rbp-15Dh]
  __int16 v325; // [rsp+6Ch] [rbp-15Ch]
  __int64 v326; // [rsp+70h] [rbp-158h]
  unsigned int v327; // [rsp+78h] [rbp-150h]
  unsigned int v328; // [rsp+7Ch] [rbp-14Ch]
  int v329; // [rsp+80h] [rbp-148h]
  unsigned int v330; // [rsp+84h] [rbp-144h]
  __int64 *v331; // [rsp+88h] [rbp-140h]
  unsigned int v332; // [rsp+88h] [rbp-140h]
  __int64 v333; // [rsp+90h] [rbp-138h]
  unsigned int v334; // [rsp+A0h] [rbp-128h]
  unsigned int v335; // [rsp+A8h] [rbp-120h]
  int v336; // [rsp+ACh] [rbp-11Ch]
  unsigned int v338; // [rsp+C0h] [rbp-108h]
  unsigned int v339; // [rsp+C4h] [rbp-104h]
  unsigned __int16 *v340; // [rsp+E8h] [rbp-E0h]
  char **v342; // [rsp+F8h] [rbp-D0h]
  unsigned __int8 *v343; // [rsp+100h] [rbp-C8h]
  int v344; // [rsp+108h] [rbp-C0h]
  unsigned __int16 v345; // [rsp+10Ch] [rbp-BCh]
  unsigned __int16 v346; // [rsp+10Eh] [rbp-BAh]
  unsigned __int16 *v347; // [rsp+118h] [rbp-B0h]
  unsigned __int16 v348; // [rsp+122h] [rbp-A6h]
  unsigned int v349; // [rsp+124h] [rbp-A4h]
  unsigned __int16 v350; // [rsp+128h] [rbp-A0h]
  __int16 v351; // [rsp+12Ah] [rbp-9Eh]
  unsigned int v352; // [rsp+12Ch] [rbp-9Ch]
  unsigned __int8 v353; // [rsp+136h] [rbp-92h]
  char *v354; // [rsp+138h] [rbp-90h] BYREF
  __m128i v355; // [rsp+140h] [rbp-88h] BYREF
  __m128i v356; // [rsp+150h] [rbp-78h] BYREF
  __m128i v357; // [rsp+160h] [rbp-68h] BYREF
  _BYTE v358[88]; // [rsp+170h] [rbp-58h] BYREF

  v3 = 256;
  v4 = 0;
  *((_DWORD *)a3 + 18) = 0;
  *((_DWORD *)a3 + 22) = 0;
  v338 = 0;
  do
  {
    result = a3;
    if ( *((_DWORD *)a3 + 2) )
    {
      v342 = (char **)(a3 + 2);
      sub_55F020((char **)a3 + 6, *((unsigned int *)a3 + 14), 0, *((_DWORD *)a3 + 6), (const void *)a3[2]);
      v9 = *((_DWORD *)a3 + 2);
      *((_DWORD *)a3 + 6) = 0;
      if ( !v9 )
        goto LABEL_459;
      v339 = v4;
      v327 = 0;
      v10 = 0;
      v11 = *a3;
      v344 = v3;
      v12 = v9;
      v13 = &v355;
      while ( 2 )
      {
        v20 = *(_QWORD *)(v11 + 8LL * v327);
        v313 = v20;
        v21 = *(_WORD *)(v20 + 64);
        if ( v10 )
        {
          v15 = v21;
          v22 = a3[2];
          v23 = *(_WORD **)(v22 + 8LL * (v10 - 1));
          v24 = v23[32];
          if ( !v21 )
          {
            v233 = 0;
            goto LABEL_461;
          }
          if ( v24 )
          {
            v25 = v23[2];
            v26 = *(_WORD *)(v313 + 4);
            if ( v26 < v25 )
              goto LABEL_51;
            if ( v25 >= v26 )
            {
              if ( v21 == 1 )
              {
                v233 = 1;
              }
              else
              {
                if ( v24 == 1 )
                  goto LABEL_51;
                v27 = *(_WORD *)(v313 + 12);
                v28 = v23[6];
                if ( v27 < v28 )
                  goto LABEL_51;
                if ( v28 < v27 )
                  goto LABEL_128;
                if ( v21 == 2 )
                {
                  v233 = 2;
                }
                else
                {
                  if ( v24 == 2 )
                    goto LABEL_51;
                  v29 = *(_WORD *)(v313 + 20);
                  v30 = v23[10];
                  if ( v29 < v30 )
                    goto LABEL_51;
                  if ( v30 < v29 )
                    goto LABEL_128;
                  if ( v21 == 3 )
                  {
                    v233 = 3;
                  }
                  else
                  {
                    if ( v24 == 3 )
                      goto LABEL_51;
                    v31 = *(_WORD *)(v313 + 28);
                    v32 = v23[14];
                    if ( v31 < v32 )
                      goto LABEL_51;
                    if ( v32 < v31 )
                      goto LABEL_128;
                    if ( v21 == 4 )
                    {
                      v233 = 4;
                    }
                    else
                    {
                      if ( v24 == 4 )
                        goto LABEL_51;
                      v33 = *(_WORD *)(v313 + 36);
                      v34 = v23[18];
                      if ( v33 < v34 )
                        goto LABEL_51;
                      if ( v34 < v33 )
                        goto LABEL_128;
                      if ( v21 == 5 )
                      {
                        v233 = 5;
                      }
                      else
                      {
                        if ( v24 == 5 )
                          goto LABEL_51;
                        v35 = *(_WORD *)(v313 + 44);
                        v36 = v23[22];
                        if ( v35 < v36 )
                          goto LABEL_51;
                        if ( v36 < v35 )
                          goto LABEL_128;
                        if ( v21 == 6 )
                        {
                          v233 = 6;
                        }
                        else
                        {
                          if ( v24 == 6 )
                            goto LABEL_51;
                          v37 = *(_WORD *)(v313 + 52);
                          v38 = v23[26];
                          if ( v37 < v38 )
                            goto LABEL_51;
                          if ( v38 < v37 )
                            goto LABEL_128;
                          if ( v21 == 7 )
                          {
                            v233 = 7;
                          }
                          else
                          {
                            if ( v24 == 7 )
                              goto LABEL_51;
                            v39 = *(_WORD *)(v313 + 60);
                            v40 = v23[30];
                            if ( v39 < v40 )
                              goto LABEL_51;
                            if ( v40 < v39 )
                              goto LABEL_128;
                            if ( v21 != 8 )
                            {
LABEL_51:
                              v14 = *(unsigned __int16 *)(v313 + 66);
                              break;
                            }
                            v233 = 8;
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_461:
              if ( v233 < v24 )
                goto LABEL_128;
              v234 = v23[33];
              v14 = *(unsigned __int16 *)(v313 + 66);
              if ( (unsigned __int16)v14 < v234 )
                goto LABEL_12;
              if ( v234 < (unsigned __int16)v14 )
                goto LABEL_128;
              v235 = 0;
              if ( v10 == 1 )
                goto LABEL_502;
              v302 = v12;
LABEL_466:
              v236 = *(_WORD **)(v22 + 8LL * ((v10 >> 1) + v235));
              v237 = (v10 >> 1) + v235;
              v238 = (unsigned __int16)v236[32];
              if ( v236[32] )
              {
                if ( !v15 )
                  goto LABEL_499;
                v239 = v236[2];
                v240 = *(_WORD *)(v313 + 4);
                if ( v239 < v240 )
                  goto LABEL_499;
                if ( v240 < v239 )
                  goto LABEL_500;
                if ( (_DWORD)v238 == 1 )
                {
                  v277 = 1;
                }
                else
                {
                  if ( v15 == 1 )
                    goto LABEL_499;
                  v241 = v236[6];
                  v242 = *(_WORD *)(v313 + 12);
                  if ( v241 < v242 )
                    goto LABEL_499;
                  if ( v242 < v241 )
                    goto LABEL_500;
                  if ( (_DWORD)v238 == 2 )
                  {
                    v277 = 2;
                  }
                  else
                  {
                    if ( v15 == 2 )
                      goto LABEL_499;
                    v243 = v236[10];
                    v244 = *(_WORD *)(v313 + 20);
                    if ( v243 < v244 )
                      goto LABEL_499;
                    if ( v244 < v243 )
                      goto LABEL_500;
                    if ( (_DWORD)v238 == 3 )
                    {
                      v277 = 3;
                    }
                    else
                    {
                      if ( v15 == 3 )
                        goto LABEL_499;
                      v245 = v236[14];
                      v246 = *(_WORD *)(v313 + 28);
                      if ( v245 < v246 )
                        goto LABEL_499;
                      if ( v246 < v245 )
                        goto LABEL_500;
                      if ( (_DWORD)v238 == 4 )
                      {
                        v277 = 4;
                      }
                      else
                      {
                        if ( v15 == 4 )
                          goto LABEL_499;
                        v247 = v236[18];
                        v248 = *(_WORD *)(v313 + 36);
                        if ( v247 < v248 )
                          goto LABEL_499;
                        if ( v248 < v247 )
                          goto LABEL_500;
                        if ( (_DWORD)v238 == 5 )
                        {
                          v277 = 5;
                        }
                        else
                        {
                          if ( v15 == 5 )
                            goto LABEL_499;
                          v249 = v236[22];
                          v250 = *(_WORD *)(v313 + 44);
                          if ( v249 < v250 )
                            goto LABEL_499;
                          if ( v250 < v249 )
                            goto LABEL_500;
                          if ( (_DWORD)v238 == 6 )
                          {
                            v277 = 6;
                          }
                          else
                          {
                            if ( v15 == 6 )
                              goto LABEL_499;
                            v251 = v236[26];
                            v252 = *(_WORD *)(v313 + 52);
                            if ( v251 < v252 )
                              goto LABEL_499;
                            if ( v252 < v251 )
                              goto LABEL_500;
                            if ( (_DWORD)v238 != 7 )
                            {
                              if ( v15 != 7 )
                              {
                                v253 = v236[30];
                                v254 = *(_WORD *)(v313 + 60);
                                if ( v253 >= v254 )
                                {
                                  if ( v254 < v253 )
                                    goto LABEL_500;
                                  if ( (_DWORD)v238 != 8 )
                                    goto LABEL_499;
LABEL_541:
                                  v278 = v236[33];
                                  if ( v278 >= (unsigned __int16)v14 )
                                  {
                                    if ( (unsigned __int16)v14 < v278 )
                                      goto LABEL_500;
                                    if ( v236[32] )
                                    {
                                      v298 = (v10 >> 1) + v235;
                                      v279 = 0;
                                      v300 = v235;
                                      while ( 1 )
                                      {
                                        v284 = v236[4 * v279 + 1];
                                        v285 = *(_WORD *)(v313 + 8 * v279 + 2);
                                        if ( v284 < v285 )
                                          goto LABEL_552;
                                        if ( v285 < v284 )
                                          break;
                                        v280 = v236[4 * v279];
                                        v281 = *(_WORD *)(v313 + 8 * v279);
                                        if ( v280 < v281 )
                                          goto LABEL_552;
                                        if ( v281 < v280 )
                                          break;
                                        v282 = v236[4 * (unsigned int)v279 + 3] & 0x7FFF;
                                        v283 = *(_WORD *)(v313 + 8LL * (unsigned int)v279 + 6) & 0x7FFF;
                                        if ( v282 < v283 )
                                        {
LABEL_552:
                                          v237 = v298;
                                          goto LABEL_499;
                                        }
                                        if ( v283 < v282 )
                                          break;
                                        if ( ++v279 == v238 )
                                          goto LABEL_552;
                                      }
                                      v235 = v300;
                                      goto LABEL_500;
                                    }
                                  }
                                }
                              }
LABEL_499:
                              v235 = v237;
                              goto LABEL_500;
                            }
                            v277 = 7;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                v277 = 0;
              }
              if ( v277 >= v233 )
                goto LABEL_541;
LABEL_500:
              v10 -= v10 >> 1;
              if ( v10 <= 1 )
              {
                v12 = v302;
                v22 += 8LL * v235;
LABEL_502:
                v255 = *(_WORD **)v22;
                v256 = *(unsigned __int16 *)(*(_QWORD *)v22 + 64LL);
                if ( !*(_WORD *)(*(_QWORD *)v22 + 64LL) )
                {
                  v286 = 0;
                  goto LABEL_558;
                }
                if ( !v15 )
                  goto LABEL_535;
                v257 = v255[2];
                v258 = *(_WORD *)(v313 + 4);
                if ( v257 < v258 )
                  goto LABEL_535;
                if ( v258 < v257 )
                  goto LABEL_536;
                if ( v256 == 1 )
                {
                  v286 = 1;
                  goto LABEL_558;
                }
                if ( v15 == 1 )
                  goto LABEL_535;
                v259 = v255[6];
                v260 = *(_WORD *)(v313 + 12);
                if ( v259 < v260 )
                  goto LABEL_535;
                if ( v260 < v259 )
                  goto LABEL_536;
                if ( v256 == 2 )
                {
                  v286 = 2;
LABEL_558:
                  if ( v286 >= v233 )
                    goto LABEL_559;
                  goto LABEL_536;
                }
                if ( v15 == 2 )
                  goto LABEL_535;
                v261 = v255[10];
                v262 = *(_WORD *)(v313 + 20);
                if ( v261 < v262 )
                  goto LABEL_535;
                if ( v262 < v261 )
                  goto LABEL_536;
                if ( v256 == 3 )
                {
                  v286 = 3;
                  goto LABEL_558;
                }
                if ( v15 == 3 )
                  goto LABEL_535;
                v263 = v255[14];
                v264 = *(_WORD *)(v313 + 28);
                if ( v263 < v264 )
                  goto LABEL_535;
                if ( v264 < v263 )
                  goto LABEL_536;
                if ( v256 == 4 )
                {
                  v286 = 4;
                  goto LABEL_558;
                }
                if ( v15 == 4 )
                  goto LABEL_535;
                v265 = v255[18];
                v266 = *(_WORD *)(v313 + 36);
                if ( v265 < v266 )
                  goto LABEL_535;
                if ( v266 < v265 )
                  goto LABEL_536;
                if ( v256 == 5 )
                {
                  v286 = 5;
                  goto LABEL_558;
                }
                if ( v15 == 5 )
                  goto LABEL_535;
                v267 = v255[22];
                v268 = *(_WORD *)(v313 + 44);
                if ( v267 < v268 )
                  goto LABEL_535;
                if ( v268 < v267 )
                  goto LABEL_536;
                if ( v256 == 6 )
                {
                  v286 = 6;
                  goto LABEL_558;
                }
                if ( v15 == 6 )
                  goto LABEL_535;
                v269 = v255[26];
                v270 = *(_WORD *)(v313 + 52);
                if ( v269 < v270 )
                  goto LABEL_535;
                if ( v270 < v269 )
                  goto LABEL_536;
                if ( v256 == 7 )
                {
                  v286 = 7;
                  goto LABEL_558;
                }
                if ( v15 == 7 )
                  goto LABEL_535;
                v271 = v255[30];
                v272 = *(_WORD *)(v313 + 60);
                if ( v271 < v272 )
                  goto LABEL_535;
                if ( v272 < v271 )
                  goto LABEL_536;
                if ( v256 != 8 )
                  goto LABEL_535;
LABEL_559:
                v287 = v255[33];
                if ( v287 < (unsigned __int16)v14 )
                {
LABEL_535:
                  ++v235;
LABEL_536:
                  v273 = *((_DWORD *)a3 + 14);
                  if ( v273 )
                  {
                    v274 = a3[6];
                    v275 = v273 - 1;
                    *((_DWORD *)a3 + 14) = v275;
                    v276 = *(char **)(v274 + 8LL * v275);
                  }
                  else
                  {
                    v276 = (char *)off_8C52B8(0x46u);
                  }
                  *(__m128i *)v276 = _mm_loadu_si128((const __m128i *)v313);
                  *((__m128i *)v276 + 1) = _mm_loadu_si128((const __m128i *)(v313 + 16));
                  *((__m128i *)v276 + 2) = _mm_loadu_si128((const __m128i *)(v313 + 32));
                  *((__m128i *)v276 + 3) = _mm_loadu_si128((const __m128i *)(v313 + 48));
                  *(_QWORD *)(v276 + 62) = *(_QWORD *)(v313 + 62);
                  v355.m128i_i64[0] = (__int64)v276;
                  sub_55F020(v342, v235, 0, 1u, &v355);
                  v12 = *((_DWORD *)a3 + 2);
                  v11 = *a3;
                  goto LABEL_15;
                }
                if ( (unsigned __int16)v14 < v287 )
                  goto LABEL_536;
                if ( *(_WORD *)(*(_QWORD *)v22 + 64LL) )
                {
                  v288 = 0;
                  do
                  {
                    v293 = v255[4 * v288 + 1];
                    v294 = *(_WORD *)(v313 + 8 * v288 + 2);
                    if ( v293 < v294 )
                      goto LABEL_535;
                    if ( v294 < v293 )
                      goto LABEL_536;
                    v289 = v255[4 * v288];
                    v290 = *(_WORD *)(v313 + 8 * v288);
                    if ( v289 < v290 )
                      goto LABEL_535;
                    if ( v290 < v289 )
                      goto LABEL_536;
                    v291 = v255[4 * (unsigned int)v288 + 3] & 0x7FFF;
                    v292 = *(_WORD *)(v313 + 8LL * (unsigned int)v288 + 6) & 0x7FFF;
                    if ( v291 < v292 )
                      goto LABEL_535;
                    if ( v292 < v291 )
                      goto LABEL_536;
                  }
                  while ( ++v288 != *(unsigned __int16 *)(*(_QWORD *)v22 + 64LL) );
                }
LABEL_15:
                if ( ++v327 >= v12 )
                  goto LABEL_74;
LABEL_16:
                v10 = *((_DWORD *)a3 + 6);
                continue;
              }
              goto LABEL_466;
            }
LABEL_128:
            v9 = v12;
            v60 = v11;
            v89 = v327;
            v4 = v339;
            v3 = v344;
            if ( v327 < v9 )
            {
              for ( i = v313; ; i = *(_QWORD *)(*a3 + 8LL * v89) )
              {
                v96 = *((_DWORD *)a3 + 14);
                if ( v96 )
                {
                  v91 = v96 - 1;
                  v92 = a3[6];
                  *((_DWORD *)a3 + 14) = v91;
                  v93 = *(char **)(v92 + 8LL * v91);
                }
                else
                {
                  v93 = (char *)off_8C52B8(0x46u);
                }
                ++v89;
                *(__m128i *)v93 = _mm_loadu_si128((const __m128i *)i);
                *((__m128i *)v93 + 1) = _mm_loadu_si128((const __m128i *)(i + 16));
                *((__m128i *)v93 + 2) = _mm_loadu_si128((const __m128i *)(i + 32));
                *((__m128i *)v93 + 3) = _mm_loadu_si128((const __m128i *)(i + 48));
                *(_QWORD *)(v93 + 62) = *(_QWORD *)(i + 62);
                sub_55ECB0((__int64)v342, 8);
                v94 = *((unsigned int *)a3 + 6);
                v95 = a3[2];
                *((_DWORD *)a3 + 6) = v94 + 1;
                *(_QWORD *)(v95 + 8 * v94) = v93;
                v9 = *((_DWORD *)a3 + 2);
                if ( v89 >= v9 )
                  break;
              }
LABEL_459:
              v60 = *a3;
            }
            goto LABEL_75;
          }
          v14 = *(unsigned __int16 *)(v313 + 66);
        }
        else
        {
          v14 = *(unsigned __int16 *)(v20 + 66);
LABEL_12:
          v15 = v21;
          if ( !v21 )
          {
            v16 = (unsigned __int16 *)v313;
            goto LABEL_14;
          }
        }
        break;
      }
      v16 = (unsigned __int16 *)(v313 + 8LL * (v15 - 1));
LABEL_14:
      v17 = v16[1];
      v18 = v16[2];
      v345 = *v16;
      v325 = v16[3] & 0x7FFF;
      v19 = *((_DWORD *)a2 + 2);
      if ( !v19 )
        goto LABEL_15;
      v304 = *a2;
      if ( v19 != 1 )
      {
        v41 = 0;
        do
        {
          v42 = v19 >> 1;
          if ( *(unsigned __int16 *)(*a2 + 40LL * ((v19 >> 1) + (unsigned int)v41)) <= (int)v17 )
            v41 = v42 + (unsigned int)v41;
          v19 -= v42;
        }
        while ( v19 > 1 );
        v304 += 40 * v41;
      }
      if ( *(_WORD *)v304 != v17 )
        goto LABEL_15;
      v43 = *(_QWORD *)(a1 + 208);
      v44 = *(_DWORD *)(v43 + 24);
      v45 = v44;
      if ( v345 < v44 )
      {
        v231 = *(_DWORD *)(v43 + 4) * (unsigned int)v345;
        v232 = *(_QWORD *)(v43 + 40);
        v340 = nullptr;
        v346 = 0;
        v46 = (unsigned __int16 *)(v232 + 2 * v231 - 2);
        v47 = (unsigned __int16 *)(v232 + 2 * v231);
      }
      else
      {
        v46 = (unsigned __int16 *)(*(_QWORD *)(v43 + 48)
                                 + 2LL * *(unsigned int *)(*(_QWORD *)(v43 + 56) + 4LL * (v345 - v44)));
        v47 = v46 + 1;
        v340 = v46 + 1;
        v346 = *v46;
      }
      v329 = v18;
      v48 = *(_QWORD *)(a1 + 80) + 20 * v14;
      v49 = 0;
      v50 = v345;
      v299 = v48;
      v51 = *(_QWORD *)(a1 + 208);
      v52 = v45;
      v343 = nullptr;
      v53 = v13;
      v54 = v18;
      LOWORD(v55) = 0;
      v56 = -1;
      for ( j = v46; ; v47 = j + 1 )
      {
        if ( v50 < v52 )
        {
          while ( 1 )
          {
            ++v56;
            j = v47;
            v59 = (unsigned __int16)v56;
            if ( (unsigned int)(unsigned __int16)v56 >= *(_DWORD *)(v51 + 4) )
              break;
            v55 = *v47;
            if ( (_WORD)v55 )
              goto LABEL_78;
            ++v47;
          }
LABEL_73:
          ++v327;
          v13 = v53;
          v12 = *((_DWORD *)a3 + 2);
          v11 = *a3;
          if ( v327 < v12 )
            goto LABEL_16;
LABEL_74:
          v4 = v339;
          v3 = v344;
          v9 = v12;
          v60 = v11;
LABEL_75:
          v61 = *((_DWORD *)a3 + 3);
          v62 = _mm_loadu_si128((const __m128i *)a3 + 1);
          a3[2] = v60;
          *(__m128i *)a3 = v62;
          a3[3] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v9), _mm_cvtsi32_si128(v61)).m128i_u64[0];
          goto LABEL_7;
        }
        if ( v340 == v47 )
        {
          if ( !v346 )
            goto LABEL_73;
          v55 = j[1];
          --v346;
          v63 = (__int64)&j[j[2] + 3];
          v59 = j[3];
          j += 3;
          v340 = (unsigned __int16 *)v63;
          v56 = v59;
LABEL_78:
          if ( v59 >= *(_DWORD *)(v51 + 12) )
          {
            v353 = 0;
            v324 = v54 & 0x7F;
            goto LABEL_81;
          }
          v49 = 0;
          v64 = (unsigned __int8 *)(*(_QWORD *)(v51 + 64) + 8LL * (unsigned __int16)v55);
          LOWORD(v55) = *v64;
          v343 = v64 + 8;
        }
        else
        {
          v56 = j[1];
          j = v47;
        }
        v353 = 0;
        v324 = v54 & 0x7F;
        if ( !(_WORD)v55 )
        {
          v55 = v49;
LABEL_81:
          v49 = 0;
          if ( !(_WORD)v55 )
            continue;
          v49 = v55;
          v303 = v55;
          LOWORD(v55) = 0;
          v324 = (v324 + 1) & 0x7F;
          goto LABEL_83;
        }
        v58 = (__int64)&v343[8 * (unsigned __int16)v55 - 8];
        if ( *(_BYTE *)v58 )
          continue;
        v303 = v345;
        if ( !*(_BYTE *)(v58 + 4) )
        {
          v303 = *(_WORD *)(v58 + 2);
          v324 = ((v54 & 0x7F) + 1) & 0x7F;
        }
LABEL_83:
        v328 = (unsigned __int16)v56;
        v336 = v50 | (v56 << 16);
        v65 = *(_DWORD *)(v304 + 32);
        if ( !v65 )
          continue;
        v66 = *(_QWORD *)(v304 + 24);
        if ( v65 == 1 )
        {
          v73 = *(_QWORD *)(v304 + 24);
          v68 = 0;
          goto LABEL_96;
        }
        v67 = *(_DWORD *)(v304 + 32);
        v68 = 0;
        v295 = v54;
        do
        {
          while ( 1 )
          {
            v70 = v67 >> 1;
            v71 = (v67 >> 1) + (unsigned int)v68;
            v72 = v66 + 6 * v71;
            if ( *(_WORD *)v72 < v303 )
              break;
            if ( v303 >= *(_WORD *)v72 )
            {
              v69 = *(_BYTE *)(v72 + 4) & 0x7F;
              if ( v69 < v324 )
                break;
              if ( v324 >= v69 && *(char *)(v72 + 4) >= 0 && !*(_WORD *)(v72 + 2) )
                v68 = v70 + (unsigned int)v68;
            }
            v67 -= v70;
            if ( v67 <= 1 )
              goto LABEL_95;
          }
          v67 -= v70;
          v68 = (unsigned int)v71;
        }
        while ( v67 > 1 );
LABEL_95:
        v54 = v295;
        v65 = *(_DWORD *)(v304 + 32);
        v49 = (unsigned __int16)v49;
        v73 = v66 + 6LL * (unsigned int)v68;
LABEL_96:
        if ( *(_WORD *)v73 < v303 || v303 >= *(_WORD *)v73 && (unsigned __int8)(*(_BYTE *)(v73 + 4) & 0x7F) < v324 )
          v68 = (unsigned int)(v68 + 1);
        if ( (unsigned int)v68 < v65 )
        {
          v349 = v52;
          v74 = v53;
          v333 = 2LL * (unsigned __int16)v56;
          v326 = 3LL * (unsigned __int16)v56;
          v347 = j;
          v348 = v49;
          v350 = v56;
          v351 = v55;
          v352 = v50;
          while ( 2 )
          {
            v78 = v66 + 6 * v68;
            v301 = v68 + 1;
            if ( *(_WORD *)v78 == v303 )
            {
              v79 = *(_BYTE *)(v78 + 4);
              v353 = v324 & 0x7F | v353 & 0x80;
              if ( (((unsigned __int8)v79 ^ v353) & 0x7F) == 0 )
              {
                v80 = *(unsigned __int16 *)(v78 + 2);
                v81 = *(_QWORD *)(a1 + 208);
                if ( !(_DWORD)v80
                  || (v82 = *(unsigned __int16 *)(*(_QWORD *)(v81 + 128)
                                                + 2LL * (*(unsigned __int16 *)(v81 + 36) * (unsigned int)v80 + v329)),
                      !(_WORD)v82) )
                {
                  v82 = 0;
                  if ( *(_BYTE *)(*(_QWORD *)(v81 + 104) + v326) )
                    v82 = *(unsigned __int16 *)(*(_QWORD *)(v81 + 112) + v333);
                }
                v83 = v325;
                if ( !v325 )
                {
                  if ( *(_DWORD *)(v81 + 32) )
                  {
                    v84 = *(_QWORD *)(v81 + 96);
                    v85 = (unsigned __int16 *)(*(_QWORD *)(v81 + 88) + 4 * v80);
                    v86 = *v85;
                    v87 = (__int16 *)(v84 + 4 * v86);
                    v88 = (__int16 *)(v84 + 4 * (v86 + v85[1]));
                    if ( v87 != v88 )
                    {
                      while ( *((_BYTE *)v87 + 3) || *((unsigned __int8 *)v87 + 2) != v329 )
                      {
                        v87 += 2;
                        if ( v87 == v88 )
                        {
                          v83 = 0;
                          goto LABEL_101;
                        }
                      }
                      v83 = *v87;
                    }
                  }
                }
LABEL_101:
                v355 = _mm_loadu_si128((const __m128i *)v313);
                v356 = _mm_loadu_si128((const __m128i *)(v313 + 16));
                v357 = _mm_loadu_si128((const __m128i *)(v313 + 32));
                *(__m128i *)v358 = _mm_loadu_si128((const __m128i *)(v313 + 48));
                *(_QWORD *)&v358[14] = *(_QWORD *)(v313 + 62);
                v75 = *(_WORD *)&v358[16];
                v76 = (__int64)v74;
                if ( *(_WORD *)&v358[16] )
                  v76 = (__int64)&v74->m128i_i64[*(unsigned __int16 *)&v358[16] - 1];
                *(_WORD *)(v76 + 4) = v324;
                *(_WORD *)v76 = v303;
                if ( v79 < 0 )
                  *(_BYTE *)(v76 + 7) |= 0x80u;
                if ( !(_WORD)v82 )
                {
                  if ( v328 >= *(_DWORD *)(v81 + 12) )
                  {
                    if ( *(char *)(v76 + 7) >= 0 )
                    {
                      if ( v75 > 6u )
                      {
                        *((_BYTE *)a3 + 96) = 1;
LABEL_110:
                        v77 = v304;
                        if ( v301 >= *(_DWORD *)(v304 + 32) )
                          break;
LABEL_111:
                        v66 = *(_QWORD *)(v77 + 24);
                        v68 = v301;
                        continue;
                      }
                      v174 = ++v75;
                      *(_WORD *)&v358[16] = v75;
                      v76 = (__int64)&v74->m128i_i64[v75 - 1];
                      *(_DWORD *)(v76 + 4) = (v83 & 0x7FFF) << 16;
                      *(_DWORD *)v76 = v336;
LABEL_314:
                      v175 = 0;
                      v176 = 0;
                      do
                      {
                        v177 = v74->m128i_i16[4 * v175 + 1];
                        if ( v175
                          && (v177 == v355.m128i_i16[1]
                           || v175 > 1
                           && (v177 == v355.m128i_i16[5]
                            || v175 > 2
                            && (v177 == v356.m128i_i16[1]
                             || v175 > 3
                             && (v177 == v356.m128i_i16[5]
                              || v175 > 4
                              && (v177 == v357.m128i_i16[1]
                               || v175 > 5
                               && (v177 == v357.m128i_i16[5] || (_DWORD)v175 == 7 && v177 == *(_WORD *)&v358[2])))))) )
                        {
                          ++v176;
                        }
                        ++v175;
                      }
                      while ( (unsigned int)v175 < v174 );
                      if ( v338 < v176 )
                      {
                        v178 = *((_DWORD *)a3 + 10);
                        if ( v178 )
                        {
                          v179 = a3[4];
                          v297 = v179;
                          if ( v178 != 1 )
                          {
                            v180 = 0;
                            while ( 1 )
                            {
                              v181 = *(_WORD **)(v297 + 8LL * ((v178 >> 1) + v180));
                              v182 = (v178 >> 1) + v180;
                              v183 = (unsigned __int16)v181[32];
                              if ( v181[32] )
                              {
                                v184 = v181[2];
                                if ( v184 < (unsigned int)v355.m128i_i16[2] )
                                  goto LABEL_366;
                                if ( (unsigned int)v355.m128i_i16[2] >= v184 )
                                {
                                  if ( v183 == 1 )
                                    goto LABEL_407;
                                  if ( v174 == 1 )
                                    goto LABEL_366;
                                  v185 = v181[6];
                                  if ( v185 < (unsigned int)v355.m128i_i16[6] )
                                    goto LABEL_366;
                                  if ( (unsigned int)v355.m128i_i16[6] >= v185 )
                                  {
                                    if ( v183 == 2 )
                                      goto LABEL_407;
                                    if ( v174 == 2 )
                                      goto LABEL_366;
                                    v186 = v181[10];
                                    if ( v186 < (unsigned int)v356.m128i_i16[2] )
                                      goto LABEL_366;
                                    if ( (unsigned int)v356.m128i_i16[2] >= v186 )
                                    {
                                      if ( v183 == 3 )
                                        goto LABEL_407;
                                      if ( v174 == 3 )
                                        goto LABEL_366;
                                      v187 = v181[14];
                                      if ( v187 < (unsigned int)v356.m128i_i16[6] )
                                        goto LABEL_366;
                                      if ( (unsigned int)v356.m128i_i16[6] >= v187 )
                                      {
                                        if ( v183 == 4 )
                                          goto LABEL_407;
                                        if ( v174 == 4 )
                                          goto LABEL_366;
                                        v188 = v181[18];
                                        if ( v188 < (unsigned int)v357.m128i_i16[2] )
                                          goto LABEL_366;
                                        if ( (unsigned int)v357.m128i_i16[2] >= v188 )
                                        {
                                          if ( v183 == 5 )
                                            goto LABEL_407;
                                          if ( v174 == 5 )
                                            goto LABEL_366;
                                          v189 = v181[22];
                                          if ( v189 < (unsigned int)v357.m128i_i16[6] )
                                            goto LABEL_366;
                                          if ( (unsigned int)v357.m128i_i16[6] >= v189 )
                                          {
                                            if ( v183 == 6 )
                                              goto LABEL_407;
                                            if ( v174 == 6 )
                                              goto LABEL_366;
                                            v190 = v181[26];
                                            if ( v190 < *(_WORD *)&v358[4] )
                                              goto LABEL_366;
                                            if ( *(_WORD *)&v358[4] >= v190 )
                                            {
                                              if ( v183 == 7 )
                                                goto LABEL_407;
                                              if ( v174 == 7 )
                                                goto LABEL_366;
                                              v191 = v181[30];
                                              if ( v191 < *(_WORD *)&v358[12] )
                                                goto LABEL_366;
                                              if ( *(_WORD *)&v358[12] >= v191 )
                                                break;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
LABEL_367:
                              v178 -= v178 >> 1;
                              if ( v178 <= 1 )
                              {
                                v179 = v297 + 8LL * v180;
                                goto LABEL_369;
                              }
                            }
                            if ( v183 == 8 )
                            {
LABEL_407:
                              if ( v181[32] < v75 )
                                goto LABEL_367;
                              v207 = v181[33];
                              if ( v207 >= *(_WORD *)&v358[18] )
                              {
                                if ( *(_WORD *)&v358[18] >= v207 )
                                {
                                  v330 = (v178 >> 1) + v180;
                                  v208 = 0;
                                  v332 = v180;
                                  while ( 1 )
                                  {
                                    v213 = v181[4 * v208 + 1];
                                    v214 = v74->m128i_u16[4 * v208 + 1];
                                    if ( v213 < v214 )
                                      goto LABEL_418;
                                    if ( v214 < v213 )
                                      break;
                                    v209 = v181[4 * v208];
                                    v210 = v74->m128i_u16[4 * v208];
                                    if ( v209 < v210 )
                                      goto LABEL_418;
                                    if ( v210 < v209 )
                                      break;
                                    v211 = v181[4 * (unsigned int)v208 + 3] & 0x7FFF;
                                    v212 = v355.m128i_i16[4 * (unsigned int)v208 + 3] & 0x7FFF;
                                    if ( v211 < v212 )
                                    {
LABEL_418:
                                      v182 = v330;
                                      goto LABEL_366;
                                    }
                                    if ( v212 < v211 )
                                      break;
                                    if ( (unsigned int)++v208 >= v183 )
                                      goto LABEL_418;
                                  }
                                  v180 = v332;
                                }
                                goto LABEL_367;
                              }
                            }
LABEL_366:
                            v180 = v182;
                            goto LABEL_367;
                          }
                          v180 = 0;
LABEL_369:
                          v192 = *(_WORD **)v179;
                          v193 = *(unsigned __int16 *)(*(_QWORD *)v179 + 64LL);
                          v194 = *(_WORD *)(*(_QWORD *)v179 + 64LL);
                          if ( !v194 )
                            goto LABEL_452;
                          v195 = v192[2];
                          if ( v195 < (unsigned int)v355.m128i_i16[2] )
                            goto LABEL_401;
                          if ( (unsigned int)v355.m128i_i16[2] < v195 )
                            goto LABEL_452;
                          if ( v193 == 1 )
                            goto LABEL_441;
                          if ( v174 == 1 )
                            goto LABEL_401;
                          v196 = v192[6];
                          if ( v196 < (unsigned int)v355.m128i_i16[6] )
                            goto LABEL_401;
                          if ( (unsigned int)v355.m128i_i16[6] < v196 )
                            goto LABEL_452;
                          if ( v193 == 2 )
                            goto LABEL_441;
                          if ( v174 == 2 )
                            goto LABEL_401;
                          v197 = v192[10];
                          if ( v197 < (unsigned int)v356.m128i_i16[2] )
                            goto LABEL_401;
                          if ( (unsigned int)v356.m128i_i16[2] < v197 )
                            goto LABEL_452;
                          if ( v193 == 3 )
                            goto LABEL_441;
                          if ( v174 == 3 )
                            goto LABEL_401;
                          v198 = v192[14];
                          if ( v198 < (unsigned int)v356.m128i_i16[6] )
                            goto LABEL_401;
                          if ( (unsigned int)v356.m128i_i16[6] < v198 )
                            goto LABEL_452;
                          if ( v193 == 4 )
                            goto LABEL_441;
                          if ( v174 == 4 )
                            goto LABEL_401;
                          v199 = v192[18];
                          if ( v199 < (unsigned int)v357.m128i_i16[2] )
                            goto LABEL_401;
                          if ( (unsigned int)v357.m128i_i16[2] < v199 )
                            goto LABEL_452;
                          if ( v193 == 5 )
                            goto LABEL_441;
                          if ( v174 == 5 )
                            goto LABEL_401;
                          v200 = v192[22];
                          if ( v200 < (unsigned int)v357.m128i_i16[6] )
                            goto LABEL_401;
                          if ( (unsigned int)v357.m128i_i16[6] < v200 )
                            goto LABEL_452;
                          if ( v193 == 6 )
                            goto LABEL_441;
                          if ( v174 == 6 )
                            goto LABEL_401;
                          v201 = v192[26];
                          if ( v201 < *(_WORD *)&v358[4] )
                            goto LABEL_401;
                          if ( *(_WORD *)&v358[4] < v201 )
                            goto LABEL_452;
                          if ( v193 == 7 )
                            goto LABEL_441;
                          if ( v174 == 7 || (v202 = v192[30], v202 < *(_WORD *)&v358[12]) )
                          {
LABEL_401:
                            v178 = v180 + 1;
                          }
                          else
                          {
                            if ( *(_WORD *)&v358[12] >= v202 )
                            {
                              if ( v193 != 8 )
                                goto LABEL_401;
LABEL_441:
                              if ( v194 >= v75 )
                              {
                                v223 = v192[33];
                                if ( v223 < *(_WORD *)&v358[18] )
                                  goto LABEL_401;
                                if ( *(_WORD *)&v358[18] >= v223 )
                                {
                                  v224 = 0;
                                  while ( 1 )
                                  {
                                    v229 = v192[4 * v224 + 1];
                                    v230 = v74->m128i_u16[4 * v224 + 1];
                                    if ( v229 < v230 )
                                      goto LABEL_401;
                                    if ( v230 < v229 )
                                      break;
                                    v225 = v192[4 * v224];
                                    v226 = v74->m128i_u16[4 * v224];
                                    if ( v225 < v226 )
                                      goto LABEL_401;
                                    if ( v226 < v225 )
                                      break;
                                    v227 = v192[4 * (unsigned int)v224 + 3] & 0x7FFF;
                                    v228 = v355.m128i_i16[4 * (unsigned int)v224 + 3] & 0x7FFF;
                                    if ( v227 < v228 )
                                      goto LABEL_401;
                                    if ( v228 < v227 )
                                      break;
                                    if ( (unsigned int)++v224 >= v193 )
                                      goto LABEL_110;
                                  }
                                }
                              }
                            }
LABEL_452:
                            v178 = v180;
                          }
                        }
                        v203 = *((_DWORD *)a3 + 14);
                        if ( v203 )
                        {
                          v204 = a3[6];
                          v205 = v203 - 1;
                          *((_DWORD *)a3 + 14) = v205;
                          v206 = *(char **)(v204 + 8LL * v205);
                        }
                        else
                        {
                          v206 = (char *)off_8C52B8(0x46u);
                        }
                        *(__m128i *)v206 = _mm_load_si128(&v355);
                        *((__m128i *)v206 + 1) = _mm_load_si128(&v356);
                        *((__m128i *)v206 + 2) = _mm_load_si128(&v357);
                        *((__m128i *)v206 + 3) = _mm_load_si128((const __m128i *)v358);
                        *(_QWORD *)(v206 + 62) = *(_QWORD *)&v358[14];
                        v354 = v206;
                        sub_55F020((char **)a3 + 4, v178, 0, 1u, &v354);
                        v77 = v304;
                        if ( v301 >= *(_DWORD *)(v304 + 32) )
                          break;
                        goto LABEL_111;
                      }
                      v296 = 0;
LABEL_159:
                      v100 = v323;
                      v101 = 0;
                      v102 = (__int64)&v74->m128i_i64[(unsigned __int16)(v75 - 1) - 1];
                      while ( *(char *)(v76 + 7) < 0 )
                      {
                        if ( !--v75 )
                        {
                          v323 = v100;
                          *(_WORD *)&v358[16] = 0;
                          goto LABEL_164;
                        }
                        v76 = v102;
                        v100 = v75;
                        v102 -= 8;
                        v101 = 1;
                      }
                      v323 = v100;
                      if ( v101 )
                      {
                        *(_WORD *)&v358[16] = v100;
                        if ( v296 )
                        {
LABEL_207:
                          v130 = *(_QWORD *)(a1 + 80);
                          for ( k = *(_WORD *)&v358[18] + 1; ; ++k )
                          {
                            v132 = *(_WORD *)(v130 + 20LL * k + 12);
                            if ( v132 == 0xFFFF || *(_WORD *)(v299 + 12) >= v132 )
                              break;
                          }
                          *(_WORD *)&v358[18] = k;
                          v103 = v130 + 20LL * k;
                          goto LABEL_167;
                        }
LABEL_165:
                        if ( v303 == v345 )
                          goto LABEL_110;
                        v296 = 0;
                        v103 = v299;
LABEL_167:
                        v104 = a3;
                        while ( 1 )
                        {
                          v105 = *(_BYTE *)(v103 + 18);
                          if ( (v105 & 8) == 0 )
                            break;
LABEL_184:
                          ++*(_WORD *)&v358[18];
                          v103 += 20;
                        }
                        while ( 2 )
                        {
                          if ( (v105 & 0x10) != 0 )
                            goto LABEL_180;
                          v106 = *(_WORD *)&v358[18];
                          if ( *(_WORD *)(*(_QWORD *)(a1 + 80) + 20LL * *(unsigned __int16 *)&v358[18] + 12) != *(_WORD *)(v299 + 12) )
                          {
                            v107 = *((_DWORD *)v104 + 22);
                            v108 = (char *)v104[10];
                            if ( !v107 )
                            {
                              v109 = *((_DWORD *)v104 + 23);
                              if ( !v109 )
                              {
                                v305 = 1;
                                v110 = 0;
                                v111 = 1;
                                goto LABEL_174;
                              }
                              goto LABEL_179;
                            }
                            v125 = *(unsigned __int16 *)(v313 + 68);
                            if ( v107 == 1 )
                            {
                              v128 = (char *)v104[10];
                              v127 = 0;
                            }
                            else
                            {
                              v126 = *((_DWORD *)v104 + 22);
                              v127 = 0;
                              do
                              {
                                if ( *(unsigned __int16 *)&v108[2 * (v126 >> 1) + 2 * v127] <= v125 )
                                  v127 += v126 >> 1;
                                v126 -= v126 >> 1;
                              }
                              while ( v126 > 1 );
                              v128 = &v108[2 * v127];
                            }
                            v129 = *(unsigned __int16 *)v128 - v125;
                            if ( v129 )
                            {
                              v111 = v107 + 1;
                              v109 = v127 - ((v129 < 0x80000000) - 1);
                              v305 = v109 + 1;
                              if ( v107 < v109 )
                                goto LABEL_586;
                              v112 = (char *)v104[10];
                              v110 = 2LL * v109;
                              if ( *((_DWORD *)v104 + 23) < v111 )
                              {
LABEL_174:
                                v321 = v104;
                                v318 = v110;
                                v314 = v111;
                                if ( v108 )
                                {
                                  v112 = (char *)off_8C52A8(v108, 2LL * v111);
                                  v113 = v314;
                                  v110 = v318;
                                  v104 = v321;
                                }
                                else
                                {
                                  v112 = (char *)off_8C52B8(2LL * v111);
                                  v104 = v321;
                                  v110 = v318;
                                  v113 = v314;
                                }
                                v104[10] = (__int64)v112;
                                v107 = *((_DWORD *)v104 + 22);
                                *((_DWORD *)v104 + 23) = v113;
                              }
                              v108 = &v112[v110];
                              if ( v109 < v107 )
                              {
                                v114 = v107 - v109;
                                v115 = v305;
                                v315 = v104;
                                v306 = &v112[v110];
                                memmove(&v112[2 * v115], &v112[v110], 2LL * v114);
                                v104 = v315;
                                v108 = v306;
                              }
LABEL_179:
                              *(_WORD *)v108 = *(_WORD *)(v313 + 68);
                              ++*((_DWORD *)v104 + 22);
                            }
LABEL_180:
                            if ( !v296 )
                              goto LABEL_110;
                            v116 = *(unsigned __int16 *)(v103 + 14);
                            if ( (_WORD)v116 == 0xFFFF || *(_WORD *)&v358[18] >= (unsigned __int16)v116 )
                              goto LABEL_110;
                            *(_WORD *)&v358[18] = *(_WORD *)(v103 + 14);
                            v103 = *(_QWORD *)(a1 + 80) + 20 * v116;
                            v105 = *(_BYTE *)(v103 + 18);
                            if ( (v105 & 8) != 0 )
                              goto LABEL_184;
                            continue;
                          }
                          break;
                        }
                        if ( !v75 )
                        {
                          v117 = *((_DWORD *)v104 + 18);
                          v118 = (char *)v104[8];
                          if ( v117 )
                          {
                            if ( v117 == 1 )
                            {
                              v172 = (char *)v104[8];
                              v171 = 0;
                            }
                            else
                            {
                              v170 = *((_DWORD *)v104 + 18);
                              v171 = 0;
                              do
                              {
                                if ( *(unsigned __int16 *)&v118[2 * (v170 >> 1) + 2 * v171] <= (int)*(unsigned __int16 *)&v358[18] )
                                  v171 += v170 >> 1;
                                v170 -= v170 >> 1;
                              }
                              while ( v170 > 1 );
                              v172 = &v118[2 * v171];
                            }
                            v173 = *(unsigned __int16 *)v172 - *(unsigned __int16 *)&v358[18];
                            if ( !v173 )
                              goto LABEL_180;
                            v121 = v117 + 1;
                            v119 = v171 - ((v173 < 0x80000000) - 1);
                            v122 = v119 + 1;
                            if ( v117 < v119 )
LABEL_586:
                              __assert_fail(
                                "old_end <= self->size",
                                "lib/src/./././././array.h",
                                0xE2u,
                                "_array__splice");
                            v123 = (char *)v104[8];
                            v120 = 2LL * v119;
                            if ( *((_DWORD *)v104 + 19) < v121 )
                            {
LABEL_189:
                              v331 = v104;
                              v322 = v120;
                              v319 = v122;
                              v316 = v121;
                              v307 = *(_WORD *)&v358[18];
                              if ( v118 )
                              {
                                v123 = (char *)off_8C52A8(v118, 2LL * v121);
                                v106 = v307;
                                v124 = v316;
                                v122 = v319;
                                v120 = v322;
                                v104 = v331;
                              }
                              else
                              {
                                v123 = (char *)off_8C52B8(2LL * v121);
                                v104 = v331;
                                v120 = v322;
                                v122 = v319;
                                v124 = v316;
                                v106 = v307;
                              }
                              v104[8] = (__int64)v123;
                              v117 = *((_DWORD *)v104 + 18);
                              *((_DWORD *)v104 + 19) = v124;
                            }
                            v118 = &v123[v120];
                            if ( v119 < v117 )
                            {
                              v320 = v104;
                              v317 = v106;
                              v308 = &v123[v120];
                              memmove(&v123[2 * v122], &v123[v120], 2LL * (v117 - v119));
                              v104 = v320;
                              v106 = v317;
                              v118 = v308;
                            }
                          }
                          else
                          {
                            v119 = *((_DWORD *)v104 + 19);
                            if ( !v119 )
                            {
                              v120 = 0;
                              v121 = 1;
                              LODWORD(v122) = 1;
                              goto LABEL_189;
                            }
                          }
                          *(_WORD *)v118 = v106;
                          ++*((_DWORD *)v104 + 18);
                          goto LABEL_180;
                        }
                        v133 = *((_DWORD *)v104 + 6);
                        if ( v133 )
                        {
                          v134 = v104[2];
                          v309 = v134;
                          if ( v133 != 1 )
                          {
                            v135 = 0;
                            while ( 1 )
                            {
                              v136 = *(_WORD **)(v309 + 8LL * (v135 + (v133 >> 1)));
                              v137 = v135 + (v133 >> 1);
                              v138 = (unsigned __int16)v136[32];
                              if ( v136[32] )
                              {
                                v139 = v136[2];
                                if ( v139 < (unsigned int)v355.m128i_i16[2] )
                                  goto LABEL_250;
                                if ( (unsigned int)v355.m128i_i16[2] >= v139 )
                                {
                                  if ( v138 == 1 )
                                    goto LABEL_289;
                                  if ( v75 == 1 )
                                    goto LABEL_250;
                                  v140 = v136[6];
                                  if ( v140 < (unsigned int)v355.m128i_i16[6] )
                                    goto LABEL_250;
                                  if ( (unsigned int)v355.m128i_i16[6] >= v140 )
                                  {
                                    if ( v138 == 2 )
                                      goto LABEL_289;
                                    if ( v75 == 2 )
                                      goto LABEL_250;
                                    v141 = v136[10];
                                    if ( v141 < (unsigned int)v356.m128i_i16[2] )
                                      goto LABEL_250;
                                    if ( (unsigned int)v356.m128i_i16[2] >= v141 )
                                    {
                                      if ( v138 == 3 )
                                        goto LABEL_289;
                                      if ( v75 == 3 )
                                        goto LABEL_250;
                                      v142 = v136[14];
                                      if ( v142 < (unsigned int)v356.m128i_i16[6] )
                                        goto LABEL_250;
                                      if ( (unsigned int)v356.m128i_i16[6] >= v142 )
                                      {
                                        if ( v138 == 4 )
                                          goto LABEL_289;
                                        if ( v75 == 4 )
                                          goto LABEL_250;
                                        v143 = v136[18];
                                        if ( v143 < (unsigned int)v357.m128i_i16[2] )
                                          goto LABEL_250;
                                        if ( (unsigned int)v357.m128i_i16[2] >= v143 )
                                        {
                                          if ( v138 == 5 )
                                            goto LABEL_289;
                                          if ( v75 == 5 )
                                            goto LABEL_250;
                                          v144 = v136[22];
                                          if ( v144 < (unsigned int)v357.m128i_i16[6] )
                                            goto LABEL_250;
                                          if ( (unsigned int)v357.m128i_i16[6] >= v144 )
                                          {
                                            if ( v138 == 6 )
                                              goto LABEL_289;
                                            if ( v75 == 6 )
                                              goto LABEL_250;
                                            v145 = v136[26];
                                            if ( v145 < *(_WORD *)&v358[4] )
                                              goto LABEL_250;
                                            if ( *(_WORD *)&v358[4] >= v145 )
                                            {
                                              if ( v138 == 7 )
                                                goto LABEL_289;
                                              if ( v75 == 7 )
                                                goto LABEL_250;
                                              v146 = v136[30];
                                              if ( v146 < *(_WORD *)&v358[12] )
                                                goto LABEL_250;
                                              if ( *(_WORD *)&v358[12] >= v146 )
                                                break;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
LABEL_251:
                              v133 -= v133 >> 1;
                              if ( v133 <= 1 )
                              {
                                v134 = v309 + 8LL * v135;
                                v106 = *(_WORD *)&v358[18];
                                goto LABEL_253;
                              }
                            }
                            if ( v138 == 8 )
                            {
LABEL_289:
                              if ( v136[32] < v75 )
                                goto LABEL_251;
                              v162 = v136[33];
                              if ( v162 >= *(_WORD *)&v358[18] )
                              {
                                if ( *(_WORD *)&v358[18] >= v162 )
                                {
                                  v334 = v135;
                                  v163 = 0;
                                  v335 = v135 + (v133 >> 1);
                                  while ( 1 )
                                  {
                                    v168 = v136[4 * v163 + 1];
                                    v169 = v74->m128i_u16[4 * v163 + 1];
                                    if ( v168 < v169 )
                                      goto LABEL_300;
                                    if ( v169 < v168 )
                                      break;
                                    v164 = v136[4 * v163];
                                    v165 = v74->m128i_u16[4 * v163];
                                    if ( v164 < v165 )
                                      goto LABEL_300;
                                    if ( v165 < v164 )
                                      break;
                                    v166 = v136[4 * (unsigned int)v163 + 3] & 0x7FFF;
                                    v167 = v355.m128i_i16[4 * (unsigned int)v163 + 3] & 0x7FFF;
                                    if ( v166 < v167 )
                                    {
LABEL_300:
                                      v137 = v335;
                                      goto LABEL_250;
                                    }
                                    if ( v167 < v166 )
                                      break;
                                    if ( (unsigned int)++v163 >= v138 )
                                      goto LABEL_300;
                                  }
                                  v135 = v334;
                                }
                                goto LABEL_251;
                              }
                            }
LABEL_250:
                            v135 = v137;
                            goto LABEL_251;
                          }
                          v135 = 0;
LABEL_253:
                          v147 = *(_WORD **)v134;
                          v148 = *(unsigned __int16 *)(*(_QWORD *)v134 + 64LL);
                          v149 = *(_WORD *)(*(_QWORD *)v134 + 64LL);
                          if ( !v149 )
                            goto LABEL_439;
                          v150 = v147[2];
                          if ( v150 < (unsigned int)v355.m128i_i16[2] )
                            goto LABEL_285;
                          if ( (unsigned int)v355.m128i_i16[2] < v150 )
                            goto LABEL_439;
                          if ( v148 == 1 )
                            goto LABEL_428;
                          if ( v75 == 1 )
                            goto LABEL_285;
                          v151 = v147[6];
                          if ( v151 < (unsigned int)v355.m128i_i16[6] )
                            goto LABEL_285;
                          if ( (unsigned int)v355.m128i_i16[6] < v151 )
                            goto LABEL_439;
                          if ( v148 == 2 )
                            goto LABEL_428;
                          if ( v75 == 2 )
                            goto LABEL_285;
                          v152 = v147[10];
                          if ( v152 < (unsigned int)v356.m128i_i16[2] )
                            goto LABEL_285;
                          if ( (unsigned int)v356.m128i_i16[2] < v152 )
                            goto LABEL_439;
                          if ( v148 == 3 )
                            goto LABEL_428;
                          if ( v75 == 3 )
                            goto LABEL_285;
                          v153 = v147[14];
                          if ( v153 < (unsigned int)v356.m128i_i16[6] )
                            goto LABEL_285;
                          if ( (unsigned int)v356.m128i_i16[6] < v153 )
                            goto LABEL_439;
                          if ( v148 == 4 )
                            goto LABEL_428;
                          if ( v75 == 4 )
                            goto LABEL_285;
                          v154 = v147[18];
                          if ( v154 < (unsigned int)v357.m128i_i16[2] )
                            goto LABEL_285;
                          if ( (unsigned int)v357.m128i_i16[2] < v154 )
                            goto LABEL_439;
                          if ( v148 == 5 )
                            goto LABEL_428;
                          if ( v75 == 5 )
                            goto LABEL_285;
                          v155 = v147[22];
                          if ( v155 < (unsigned int)v357.m128i_i16[6] )
                            goto LABEL_285;
                          if ( (unsigned int)v357.m128i_i16[6] < v155 )
                            goto LABEL_439;
                          if ( v148 == 6 )
                            goto LABEL_428;
                          if ( v75 == 6 )
                            goto LABEL_285;
                          v156 = v147[26];
                          if ( v156 < *(_WORD *)&v358[4] )
                            goto LABEL_285;
                          if ( *(_WORD *)&v358[4] < v156 )
                            goto LABEL_439;
                          if ( v148 == 7 )
                            goto LABEL_428;
                          if ( v75 == 7 || (v157 = v147[30], v157 < *(_WORD *)&v358[12]) )
                          {
LABEL_285:
                            v133 = v135 + 1;
                          }
                          else
                          {
                            if ( *(_WORD *)&v358[12] >= v157 )
                            {
                              if ( v148 != 8 )
                                goto LABEL_285;
LABEL_428:
                              if ( v149 >= v75 )
                              {
                                v215 = v147[33];
                                if ( v215 < v106 )
                                  goto LABEL_285;
                                if ( v106 >= v215 )
                                {
                                  v216 = 0;
                                  while ( 1 )
                                  {
                                    v221 = v147[4 * v216 + 1];
                                    v222 = v74->m128i_u16[4 * v216 + 1];
                                    if ( v221 < v222 )
                                      goto LABEL_285;
                                    if ( v222 < v221 )
                                      break;
                                    v217 = v147[4 * v216];
                                    v218 = v74->m128i_u16[4 * v216];
                                    if ( v217 < v218 )
                                      goto LABEL_285;
                                    if ( v218 < v217 )
                                      break;
                                    v219 = v147[4 * (unsigned int)v216 + 3] & 0x7FFF;
                                    v220 = v355.m128i_i16[4 * (unsigned int)v216 + 3] & 0x7FFF;
                                    if ( v219 < v220 )
                                      goto LABEL_285;
                                    if ( v220 < v219 )
                                      break;
                                    if ( (unsigned int)++v216 >= v148 )
                                      goto LABEL_180;
                                  }
                                }
                              }
                            }
LABEL_439:
                            v133 = v135;
                          }
                        }
                        v158 = *((_DWORD *)v104 + 14);
                        if ( v158 )
                        {
                          v159 = v104[6];
                          v160 = v158 - 1;
                          *((_DWORD *)v104 + 14) = v160;
                          v161 = *(char **)(v159 + 8LL * v160);
                        }
                        else
                        {
                          v311 = v104;
                          v161 = (char *)off_8C52B8(0x46u);
                          v104 = v311;
                        }
                        v310 = v104;
                        *(__m128i *)v161 = _mm_load_si128(&v355);
                        *((__m128i *)v161 + 1) = _mm_load_si128(&v356);
                        *((__m128i *)v161 + 2) = _mm_load_si128(&v357);
                        *((__m128i *)v161 + 3) = _mm_load_si128((const __m128i *)v358);
                        *(_QWORD *)(v161 + 62) = *(_QWORD *)&v358[14];
                        v354 = v161;
                        sub_55F020(v342, v133, 0, 1u, &v354);
                        v104 = v310;
                        goto LABEL_180;
                      }
LABEL_164:
                      if ( v296 )
                        goto LABEL_207;
                      goto LABEL_165;
                    }
                    v174 = v75;
                    *(_DWORD *)v76 = v336;
                    *(_DWORD *)(v76 + 4) = (v83 & 0x7FFF) << 16;
                    if ( v75 )
                      goto LABEL_314;
LABEL_422:
                    v75 = 0;
                    goto LABEL_165;
                  }
LABEL_157:
                  v296 = 0;
LABEL_158:
                  if ( v75 )
                    goto LABEL_159;
                  goto LABEL_422;
                }
                if ( *(_WORD *)v299 )
                {
                  v296 = *(_WORD *)v299 == (unsigned __int16)v82;
                }
                else
                {
                  v296 = 1;
                  if ( (*(_BYTE *)(v299 + 18) & 1) != 0 )
                    v296 = *(_BYTE *)(*(_QWORD *)(v81 + 104) + 3 * v82 + 1);
                }
                v97 = *(_WORD *)(v299 + 4);
                if ( v97 == v83 || !v97 )
                {
                  v98 = *(_WORD *)(v299 + 2);
                  if ( v98 )
                    goto LABEL_141;
                }
                else
                {
                  v98 = *(_WORD *)(v299 + 2);
                  v296 = 0;
                  if ( !v98 )
                    goto LABEL_158;
LABEL_141:
                  v99 = *(unsigned __int16 *)(v313 + 64);
                  if ( !(_WORD)v99
                    || v98 != *(_WORD *)(v313 + 2)
                    && (v99 == 1
                     || v98 != *(_WORD *)(v313 + 10)
                     && (v99 == 2
                      || v98 != *(_WORD *)(v313 + 18)
                      && (v99 == 3
                       || v98 != *(_WORD *)(v313 + 26)
                       && (v99 == 4
                        || v98 != *(_WORD *)(v313 + 34)
                        && (v99 == 5
                         || v98 != *(_WORD *)(v313 + 42)
                         && (v99 == 6 || v98 != *(_WORD *)(v313 + 50) && (v99 == 7 || v98 != *(_WORD *)(v313 + 58)))))))) )
                  {
                    goto LABEL_157;
                  }
                }
                if ( v75 )
                  goto LABEL_159;
                goto LABEL_164;
              }
            }
            break;
          }
          v53 = v74;
          j = v347;
          v49 = v348;
          v56 = v350;
          v50 = v352;
          LOWORD(v55) = v351;
          v52 = v349;
        }
      }
    }
    if ( !*((_DWORD *)a3 + 10) )
      return result;
    result = (__int64 *)*((unsigned int *)a3 + 18);
    if ( v4 >= (unsigned int)result )
      return result;
    ++v338;
    v6 = _mm_loadu_si128((const __m128i *)a3 + 2);
    v7 = *a3;
    *((_DWORD *)a3 + 10) = 0;
    v8 = *((_DWORD *)a3 + 3);
    a3[4] = v7;
    *((_DWORD *)a3 + 11) = v8;
    *(__m128i *)a3 = v6;
    v4 = (unsigned int)result;
LABEL_7:
    --v3;
  }
  while ( v3 );
  *((_BYTE *)a3 + 96) = 1;
  return a3;
}
