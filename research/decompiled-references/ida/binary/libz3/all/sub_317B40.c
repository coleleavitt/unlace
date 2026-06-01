__int64 __fastcall sub_317B40(__int64 *a1, __m128i *a2, __int64 a3, double a4, __m128 a5, __m128 a6)
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // rdi
  __m128i *v11; // rbp
  __int64 *v12; // r15
  __int8 *v13; // rdx
  char v14; // al
  char v15; // r11
  char v16; // dl
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // r15
  char v20; // r9
  int v21; // r10d
  int v22; // r8d
  __int64 v23; // rbx
  char v24; // al
  int v25; // esi
  __int64 v26; // rcx
  char v27; // dl
  int v28; // edx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rsi
  __int64 v35; // rdi
  bool v36; // zf
  __m128i *v37; // rbx
  void *v38; // rdi
  unsigned int v39; // eax
  __m128i *v40; // rsi
  unsigned int v41; // eax
  __m128i *v42; // rdx
  __int8 v43; // di
  __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // r11
  __int64 v47; // r9
  int v48; // edi
  __int32 v49; // r8d
  __int32 v50; // r10d
  __int8 v51; // al
  __int64 v52; // rdx
  __int8 v53; // si
  __int8 v54; // cl
  __int8 v55; // si
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int8 v58; // si
  __int8 v59; // si
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rax
  void *v63; // r13
  __int64 v64; // rsi
  __int64 v65; // rdi
  unsigned int v66; // eax
  __int8 *v67; // rdx
  char v68; // al
  char v69; // si
  __int64 v70; // rax
  __int64 v71; // r11
  __int64 v72; // r9
  int v73; // r10d
  __int64 v74; // rbx
  char v75; // cl
  int v76; // r13d
  __int64 v77; // rax
  __int64 v78; // rax
  char v79; // r8
  char v80; // r8
  int v81; // edx
  __int64 v82; // rdx
  __int64 v83; // rax
  char v84; // r8
  __int64 v85; // rax
  char v86; // si
  __int64 v87; // rax
  unsigned __int64 v88; // rdi
  __m128 v89; // xmm0
  __int64 *v90; // rbp
  __int64 v91; // rsi
  int v92; // eax
  __int64 v93; // rax
  char v94; // dl
  char v95; // cl
  __int64 v96; // rax
  char v97; // dl
  char v98; // cl
  void *v99; // rbp
  __int64 v100; // rsi
  __int64 v101; // rdi
  void *v102; // rbp
  __int64 v103; // rsi
  __int64 v104; // rdi
  void *v105; // rbp
  unsigned int v106; // eax
  unsigned int v107; // eax
  unsigned int v108; // eax
  __int64 v109; // r11
  char v110; // al
  __int64 v111; // r10
  __int32 v112; // r8d
  int v113; // esi
  __int64 v114; // r13
  __int32 v115; // r9d
  char v116; // r15
  __int64 v117; // rdx
  __int8 v118; // bl
  char v119; // cl
  char v120; // bl
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  int v124; // eax
  __int64 v125; // rax
  unsigned int v126; // eax
  unsigned int v127; // eax
  char v128; // al
  char v129; // al
  __int32 v130; // r8d
  __int32 v131; // esi
  char v132; // cl
  char v133; // r10
  char v134; // r11
  __int64 v135; // rbx
  char v136; // dl
  char v137; // r15
  __int64 v138; // r9
  __int64 v139; // r8
  char v140; // r13
  __int64 v141; // rdx
  char v142; // cl
  int v143; // ecx
  char v144; // si
  __int64 v145; // rcx
  int v146; // eax
  int v147; // eax
  __int64 v148; // rax
  __int64 v149; // r11
  __int64 v150; // r10
  __int32 v151; // r8d
  int v152; // esi
  __int64 v153; // r13
  __int32 v154; // r9d
  char v155; // r15
  __int64 v156; // rdx
  __int8 v157; // bl
  char v158; // cl
  char v159; // bl
  __int64 v160; // rcx
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  char v164; // si
  __int64 v165; // r9
  int v166; // r10d
  __int64 v167; // rbx
  char v168; // cl
  int v169; // r13d
  __int64 v170; // rax
  __int64 v171; // rax
  char v172; // r8
  char v173; // dl
  char v174; // r8
  int v175; // edx
  __int64 v176; // rdx
  __int64 v177; // rax
  char v178; // r8
  __int64 v179; // rax
  char v180; // si
  __int64 v181; // rax
  __m128i *v182; // rbp
  __int8 v183; // cl
  char v184; // dl
  __m128i *v185; // rbx
  __m128i v186; // xmm0
  __int8 v187; // r9
  __int64 v188; // r11
  int v189; // eax
  __int8 v190; // dl
  char v191; // si
  int v192; // r8d
  __int64 v193; // r10
  __int8 v194; // di
  int v195; // esi
  __int64 i; // r15
  __int32 v197; // eax
  __int32 v198; // edx
  __int64 v199; // rdx
  __int64 v200; // rax
  __int8 v201; // si
  char v202; // si
  __int64 v203; // rdx
  __int64 v204; // rax
  __int8 v205; // si
  char v206; // si
  __int64 v207; // rax
  __int64 v208; // rdx
  __int64 *v209; // rax
  __int64 *v210; // rsi
  __int64 v211; // rcx
  __int64 *v212; // r15
  __int64 v213; // rsi
  __int64 v214; // rdi
  __m128 v215; // xmm0
  __int64 v216; // r13
  __int64 v217; // rax
  __int64 v218; // rax
  int v219; // edx
  int v220; // ecx
  __int64 v221; // rcx
  __int64 v222; // rdx
  char v223; // si
  char v224; // si
  __int64 v225; // rcx
  __int64 v226; // rdx
  char v227; // si
  char v228; // si
  __int64 *v229; // r15
  __int64 *v230; // rsi
  char v231; // al
  __int64 *v232; // rbx
  __int64 v233; // rsi
  __int64 v234; // rdi
  unsigned int v235; // eax
  unsigned __int64 v236; // rdi
  __int64 v237; // rsi
  int v238; // eax
  __int64 v239; // rax
  char v240; // dl
  char v241; // cl
  __int64 v242; // rax
  char v243; // dl
  char v244; // cl
  void *v245; // rbx
  void *v246; // rdi
  __int64 v247; // rsi
  __int64 v248; // rdi
  void *v249; // rbx
  __int64 v250; // rsi
  __int64 v251; // rdi
  void *v252; // rbx
  __int8 v253; // si
  __m128i v254; // xmm0
  __int64 v255; // rbp
  __int8 v256; // r11
  char v257; // al
  int v258; // edi
  int v259; // r8d
  char v260; // al
  int v261; // r10d
  __int8 v262; // r9
  char v263; // cl
  __int64 v264; // r13
  __int32 v265; // eax
  __int64 v266; // rax
  __int8 v267; // dl
  __int8 v268; // bl
  __int32 v269; // edx
  __int64 v270; // rdx
  __int64 v271; // rax
  char v272; // bl
  char v273; // bl
  __int64 v274; // r15
  int v275; // esi
  int v276; // edi
  __int64 v277; // rdi
  __int64 v278; // rsi
  char v279; // r8
  char v280; // r8
  __int64 v281; // rdi
  __int64 v282; // rsi
  char v283; // r8
  char v284; // r8
  __int64 v285; // rbx
  __int64 v286; // rax
  __int64 v287; // rsi
  __int64 *v288; // rax
  __int64 v289; // rdx
  unsigned int v290; // eax
  __int64 *v291; // r13
  __int64 v292; // rsi
  __int64 *v293; // rbx
  __int64 v294; // r8
  unsigned int v295; // eax
  __int64 v296; // rax
  __int64 v297; // rax
  __int64 v298; // rbx
  int v299; // eax
  int v300; // edx
  __int64 v301; // rdx
  __int64 v302; // rax
  char v303; // cl
  char v304; // cl
  __int64 v305; // rdx
  __int64 v306; // rax
  char v307; // cl
  char v308; // cl
  __int64 *v309; // rsi
  unsigned int v310; // eax
  __int64 *v311; // r13
  __int64 v312; // rsi
  __int64 v313; // rdi
  __int64 v314; // rcx
  __int64 v315; // rdx
  int v316; // edi
  __int64 v317; // rdi
  __int64 v318; // rcx
  char v319; // r8
  char v320; // r8
  __int64 v321; // rdi
  __int64 v322; // rcx
  char v323; // r8
  char v324; // r8
  __int64 v325; // rsi
  __int64 v326; // rdx
  __int64 v327; // r15
  __int64 v328; // rdi
  __int32 v329; // eax
  __int32 v330; // ecx
  __int64 v331; // rcx
  __int64 v332; // rax
  char v333; // si
  __int8 v334; // si
  __int64 v335; // rcx
  __int64 v336; // rax
  char v337; // si
  char v338; // si
  __int64 v339; // rcx
  __int64 v340; // rax
  unsigned int v341; // eax
  __int8 *v342; // [rsp+0h] [rbp-158h]
  void *v343; // [rsp+0h] [rbp-158h]
  __int8 *v344; // [rsp+0h] [rbp-158h]
  char v345; // [rsp+0h] [rbp-158h]
  __int8 *v346; // [rsp+0h] [rbp-158h]
  __int8 *v347; // [rsp+0h] [rbp-158h]
  int v348; // [rsp+0h] [rbp-158h]
  char v349; // [rsp+0h] [rbp-158h]
  __int64 v350; // [rsp+0h] [rbp-158h]
  __int64 v351; // [rsp+0h] [rbp-158h]
  __int64 v352; // [rsp+0h] [rbp-158h]
  __int64 v353; // [rsp+8h] [rbp-150h]
  __int64 v354; // [rsp+10h] [rbp-148h]
  __int64 v355; // [rsp+10h] [rbp-148h]
  __int64 v356; // [rsp+10h] [rbp-148h]
  __m128i *v357; // [rsp+18h] [rbp-140h]
  __int64 v358; // [rsp+20h] [rbp-138h]
  __int64 v359; // [rsp+28h] [rbp-130h]
  int v360[2]; // [rsp+30h] [rbp-128h]
  void *v361; // [rsp+30h] [rbp-128h]
  int v362; // [rsp+38h] [rbp-120h]
  int v363; // [rsp+40h] [rbp-118h]
  int v364; // [rsp+48h] [rbp-110h]
  int v365; // [rsp+50h] [rbp-108h]
  __int64 v366; // [rsp+50h] [rbp-108h]
  __int64 v367; // [rsp+58h] [rbp-100h]
  bool v368; // [rsp+5Fh] [rbp-F9h]
  __int64 v369; // [rsp+60h] [rbp-F8h]
  int v370; // [rsp+68h] [rbp-F0h]
  int v371; // [rsp+70h] [rbp-E8h] BYREF
  char v372; // [rsp+74h] [rbp-E4h]
  __int64 v373; // [rsp+78h] [rbp-E0h]
  int v374; // [rsp+80h] [rbp-D8h] BYREF
  char v375; // [rsp+84h] [rbp-D4h]
  __int64 v376; // [rsp+88h] [rbp-D0h]
  int v377; // [rsp+90h] [rbp-C8h]
  __int64 v378; // [rsp+98h] [rbp-C0h]
  __m128i v379; // [rsp+A0h] [rbp-B8h] BYREF
  int v380; // [rsp+B0h] [rbp-A8h] BYREF
  char v381; // [rsp+B4h] [rbp-A4h]
  __int64 v382; // [rsp+B8h] [rbp-A0h]
  int v383; // [rsp+C0h] [rbp-98h] BYREF
  char v384; // [rsp+C4h] [rbp-94h]
  __int64 v385; // [rsp+C8h] [rbp-90h]
  int v386; // [rsp+D0h] [rbp-88h]
  __int64 v387; // [rsp+D8h] [rbp-80h]
  __m128i v388; // [rsp+E0h] [rbp-78h]
  int v389; // [rsp+F0h] [rbp-68h] BYREF
  char v390; // [rsp+F4h] [rbp-64h]
  __int64 v391; // [rsp+F8h] [rbp-60h]
  int v392; // [rsp+100h] [rbp-58h] BYREF
  char v393; // [rsp+104h] [rbp-54h]
  __int64 v394; // [rsp+108h] [rbp-50h]
  int v395; // [rsp+110h] [rbp-48h]

  result = (char *)a2 - (char *)a1;
  v357 = a2;
  *(_QWORD *)v360 = a3;
  if ( (char *)a2 - (char *)a1 <= 896 )
    return result;
  while ( 2 )
  {
    v8 = 0x6DB6DB6DB6DB6DB7LL * (result >> 3);
    v9 = v8 >> 1;
    if ( !*(_QWORD *)v360 )
    {
      v366 = v9 - 1;
      v368 = (v8 & 1) == 0;
      v359 = (v8 - 1) >> 1;
      v182 = (__m128i *)&a1[7 * v9 - 7];
      v355 = v9 - 1;
      while ( 1 )
      {
        v183 = v182[1].m128i_i8[4];
        v184 = v372;
        v185 = v182;
        v186 = _mm_loadu_si128(v182);
        v182->m128i_i64[0] = 0;
        v187 = v183;
        v183 &= 2u;
        v188 = v182[1].m128i_i64[1];
        v187 &= 1u;
        v189 = v182[1].m128i_i32[0];
        v182[1].m128i_i64[1] = 0;
        v371 = v189;
        v372 = v183 | v187 | v184 & 0xFC;
        v190 = v182[2].m128i_i8[4];
        v191 = v375 & 0xFC;
        v192 = v182[2].m128i_i32[0];
        v193 = v182[2].m128i_i64[1];
        v182[2].m128i_i64[1] = 0;
        v194 = v190;
        v190 &= 2u;
        v194 &= 1u;
        v374 = v192;
        v375 = v190 | v194 | v191;
        v195 = v182[3].m128i_i32[0];
        v380 = v189;
        v377 = v195;
        v382 = v188;
        v383 = v192;
        v381 = v183 | v187 | v381 & 0xFC;
        v373 = 0;
        v385 = v193;
        v379 = v186;
        v376 = 0;
        v384 = v190 | v194 | v384 & 0xFC;
        v386 = v195;
        if ( v355 >= v359 )
        {
          if ( v366 == v355 && v368 )
          {
            v325 = v182->m128i_i64[0];
            v326 = 2 * (v355 + 1);
            v327 = (__int64)&a1[14 * v355 + 7];
            v182->m128i_i64[0] = *(_QWORD *)v327;
            *(_QWORD *)v327 = v325;
            if ( v325 )
            {
              v328 = *(_QWORD *)(v327 + 8);
              v36 = (*(_DWORD *)(v325 + 8))-- == 1;
              if ( v36 )
              {
                sub_15D7BC0(v328, v325);
                v326 = 2 * (v355 + 1);
              }
            }
            goto LABEL_197;
          }
          v211 = v355;
        }
        else
        {
          for ( i = v355; ; i = v211 )
          {
            v207 = 14 * (i + 1);
            v208 = (__int64)&a1[v207 - 7];
            v209 = &a1[v207];
            v210 = v209 + 2;
            if ( (*((_BYTE *)v209 + 36) & 1) != 0
              || *((_DWORD *)v209 + 8) != 1
              || (*(_BYTE *)(v208 + 36) & 1) != 0
              || *(_DWORD *)(v208 + 32) != 1 )
            {
              LOBYTE(v209) = sub_1848D40(qword_1C7F2C0, v210, v208 + 16);
            }
            else if ( (*((_BYTE *)v209 + 20) & 1) != 0 || (*(_BYTE *)(v208 + 20) & 1) != 0 )
            {
              LODWORD(v209) = (unsigned int)sub_182C7B0(qword_1C7F2C0, v210, v208 + 16) >> 31;
            }
            else
            {
              LOBYTE(v209) = *((_DWORD *)v209 + 4) < *(_DWORD *)(v208 + 16);
            }
            v211 = 2 * (i + 1) - (unsigned __int8)v209;
            v185 = (__m128i *)&a1[7 * v211];
            v212 = &a1[7 * i];
            v213 = *v212;
            *v212 = v185->m128i_i64[0];
            v185->m128i_i64[0] = v213;
            if ( v213 )
            {
              v214 = v185->m128i_i64[1];
              v36 = (*(_DWORD *)(v213 + 8))-- == 1;
              if ( v36 )
              {
                v350 = v211;
                sub_15D7BC0(v214, v213);
                v211 = v350;
              }
            }
            v197 = *((_DWORD *)v212 + 4);
            v198 = v185[1].m128i_i32[0];
            v185->m128i_i64[0] = 0;
            *((_DWORD *)v212 + 4) = v198;
            v199 = v185[1].m128i_i64[1];
            v185[1].m128i_i32[0] = v197;
            v200 = v212[3];
            v212[3] = v199;
            v201 = v185[1].m128i_i8[4];
            v185[1].m128i_i64[1] = v200;
            LOBYTE(v199) = *((_BYTE *)v212 + 20);
            *((_BYTE *)v212 + 20) = v201 & 2 | v199 & 0xFD;
            LOBYTE(v200) = v199 & 2 | v185[1].m128i_i8[4] & 0xFD;
            v185[1].m128i_i8[4] = v200;
            v202 = *((_BYTE *)v212 + 20);
            *((_BYTE *)v212 + 20) = v200 & 1 | v202 & 0xFE;
            LODWORD(v199) = v185[2].m128i_i32[0];
            v185[1].m128i_i8[4] = v202 & 1 | v185[1].m128i_i8[4] & 0xFE;
            LODWORD(v200) = *((_DWORD *)v212 + 8);
            *((_DWORD *)v212 + 8) = v199;
            v203 = v185[2].m128i_i64[1];
            v185[2].m128i_i32[0] = v200;
            v204 = v212[5];
            v212[5] = v203;
            v205 = v185[2].m128i_i8[4];
            v185[2].m128i_i64[1] = v204;
            LOBYTE(v203) = *((_BYTE *)v212 + 36);
            *((_BYTE *)v212 + 36) = v205 & 2 | v203 & 0xFD;
            LOBYTE(v204) = v203 & 2 | v185[2].m128i_i8[4] & 0xFD;
            v185[2].m128i_i8[4] = v204;
            v206 = *((_BYTE *)v212 + 36) & 1;
            *((_BYTE *)v212 + 36) = v204 & 1 | *((_BYTE *)v212 + 36) & 0xFE;
            v185[2].m128i_i8[4] = v206 | v185[2].m128i_i8[4] & 0xFE;
            *((_DWORD *)v212 + 12) = v185[3].m128i_i32[0];
            if ( v211 >= v359 )
              break;
          }
          if ( v366 == v211 && v368 )
          {
            v339 = v211 + 1;
            v326 = 2 * v339;
            v327 = (__int64)&a1[14 * v339 - 7];
            v340 = v185->m128i_i64[0];
            v185->m128i_i64[0] = *(_QWORD *)v327;
            *(_QWORD *)v327 = v340;
LABEL_197:
            v329 = v185[1].m128i_i32[0];
            v330 = *(_DWORD *)(v327 + 16);
            *(_QWORD *)v327 = 0;
            v185[1].m128i_i32[0] = v330;
            v331 = *(_QWORD *)(v327 + 24);
            *(_DWORD *)(v327 + 16) = v329;
            v332 = v185[1].m128i_i64[1];
            v185[1].m128i_i64[1] = v331;
            v333 = *(_BYTE *)(v327 + 20);
            *(_QWORD *)(v327 + 24) = v332;
            LOBYTE(v331) = v185[1].m128i_i8[4];
            v185[1].m128i_i8[4] = v333 & 2 | v331 & 0xFD;
            LOBYTE(v332) = v331 & 2 | *(_BYTE *)(v327 + 20) & 0xFD;
            *(_BYTE *)(v327 + 20) = v332;
            v334 = v185[1].m128i_i8[4];
            v185[1].m128i_i8[4] = v334 & 0xFE | v332 & 1;
            LODWORD(v331) = *(_DWORD *)(v327 + 32);
            *(_BYTE *)(v327 + 20) = v334 & 1 | *(_BYTE *)(v327 + 20) & 0xFE;
            LODWORD(v332) = v185[2].m128i_i32[0];
            v185[2].m128i_i32[0] = v331;
            v335 = *(_QWORD *)(v327 + 40);
            *(_DWORD *)(v327 + 32) = v332;
            v336 = v185[2].m128i_i64[1];
            v185[2].m128i_i64[1] = v335;
            v337 = *(_BYTE *)(v327 + 36);
            *(_QWORD *)(v327 + 40) = v336;
            LOBYTE(v335) = v185[2].m128i_i8[4];
            v185[2].m128i_i8[4] = v337 & 2 | v335 & 0xFD;
            LOBYTE(v336) = v335 & 2 | *(_BYTE *)(v327 + 36) & 0xFD;
            *(_BYTE *)(v327 + 36) = v336;
            v338 = v185[2].m128i_i8[4] & 1;
            v211 = v326 - 1;
            v185[2].m128i_i8[4] = v185[2].m128i_i8[4] & 0xFE | v336 & 1;
            *(_BYTE *)(v327 + 36) = v338 | *(_BYTE *)(v327 + 36) & 0xFE;
            v185[3].m128i_i32[0] = *(_DWORD *)(v327 + 48);
          }
        }
        v215 = (__m128)_mm_load_si128(&v379);
        v379.m128i_i64[0] = 0;
        v389 = v380;
        v216 = (v211 - 1) >> 1;
        v388 = (__m128i)v215;
        v390 = v381 & 3 | v390 & 0xFC;
        v217 = v382;
        v382 = 0;
        v391 = v217;
        v392 = v383;
        v393 = v384 & 3 | v393 & 0xFC;
        v218 = v385;
        v385 = 0;
        v394 = v218;
        v395 = v386;
        if ( v355 >= v211 )
        {
          a5 = _mm_movehl_ps(a5, v215);
          v236 = a5.m128_u64[0];
          v229 = &a1[7 * v211];
          v237 = *v229;
          goto LABEL_140;
        }
        while ( 1 )
        {
          v229 = &a1[7 * v216];
          v230 = v229 + 2;
          if ( (*((_BYTE *)v229 + 36) & 1) == 0 && *((_DWORD *)v229 + 8) == 1 && (v393 & 1) == 0 && v392 == 1 )
            break;
          v351 = v211;
          v231 = sub_1848D40(qword_1C7F2C0, v230, &v389);
          v211 = v351;
          if ( !v231 )
            goto LABEL_139;
LABEL_130:
          v232 = &a1[7 * v211];
          v233 = *v232;
          *v232 = *v229;
          *v229 = v233;
          if ( v233 )
          {
            v234 = v229[1];
            v36 = (*(_DWORD *)(v233 + 8))-- == 1;
            if ( v36 )
              sub_15D7BC0(v234, v233);
          }
          v219 = *((_DWORD *)v232 + 4);
          v220 = *((_DWORD *)v229 + 4);
          *v229 = 0;
          *((_DWORD *)v232 + 4) = v220;
          v221 = v229[3];
          *((_DWORD *)v229 + 4) = v219;
          v222 = v232[3];
          v232[3] = v221;
          v223 = *((_BYTE *)v229 + 20);
          v229[3] = v222;
          LOBYTE(v222) = *((_BYTE *)v232 + 20);
          *((_BYTE *)v232 + 20) = v223 & 2 | v222 & 0xFD;
          LOBYTE(v222) = v222 & 2 | *((_BYTE *)v229 + 20) & 0xFD;
          *((_BYTE *)v229 + 20) = v222;
          v224 = *((_BYTE *)v232 + 20);
          *((_BYTE *)v232 + 20) = v222 & 1 | v224 & 0xFE;
          LODWORD(v221) = *((_DWORD *)v229 + 8);
          *((_BYTE *)v229 + 20) = v224 & 1 | *((_BYTE *)v229 + 20) & 0xFE;
          LODWORD(v222) = *((_DWORD *)v232 + 8);
          *((_DWORD *)v232 + 8) = v221;
          v225 = v229[5];
          *((_DWORD *)v229 + 8) = v222;
          v226 = v232[5];
          v232[5] = v225;
          v227 = *((_BYTE *)v229 + 36);
          v229[5] = v226;
          LOBYTE(v226) = *((_BYTE *)v232 + 36);
          *((_BYTE *)v232 + 36) = v227 & 2 | v226 & 0xFD;
          LOBYTE(v226) = v226 & 2 | *((_BYTE *)v229 + 36) & 0xFD;
          *((_BYTE *)v229 + 36) = v226;
          v228 = *((_BYTE *)v232 + 36) & 1;
          *((_BYTE *)v232 + 36) = v226 & 1 | *((_BYTE *)v232 + 36) & 0xFE;
          v211 = v216;
          *((_BYTE *)v229 + 36) = v228 | *((_BYTE *)v229 + 36) & 0xFE;
          *((_DWORD *)v232 + 12) = *((_DWORD *)v229 + 12);
          if ( v355 >= v216 )
          {
            *v229 = v388.m128i_i64[0];
            goto LABEL_143;
          }
          v216 = (v216 - 1) / 2;
        }
        if ( (*((_BYTE *)v229 + 20) & 1) != 0 || (v390 & 1) != 0 )
        {
          v352 = v211;
          v295 = sub_182C7B0(qword_1C7F2C0, v230, &v389);
          v211 = v352;
          v235 = v295 >> 31;
        }
        else
        {
          LOBYTE(v235) = *((_DWORD *)v229 + 4) < v389;
        }
        if ( (_BYTE)v235 )
          goto LABEL_130;
LABEL_139:
        v236 = v388.m128i_u64[1];
        v215.m128_u64[0] = v388.m128i_i64[0];
        v229 = &a1[7 * v211];
        v237 = *v229;
LABEL_140:
        *v229 = v215.m128_u64[0];
        v388.m128i_i64[0] = v237;
        if ( v237 )
        {
          v36 = (*(_DWORD *)(v237 + 8))-- == 1;
          if ( v36 )
            sub_15D7BC0(v236, v237);
        }
LABEL_143:
        v238 = *((_DWORD *)v229 + 4);
        v388.m128i_i64[0] = 0;
        *((_DWORD *)v229 + 4) = v389;
        v389 = v238;
        v239 = v229[3];
        v229[3] = v391;
        v391 = v239;
        v240 = *((_BYTE *)v229 + 20);
        *((_BYTE *)v229 + 20) = v390 & 2 | v240 & 0xFD;
        v390 = v240 & 2 | v390 & 0xFD;
        v241 = *((_BYTE *)v229 + 20);
        *((_BYTE *)v229 + 20) = v390 & 1 | v241 & 0xFE;
        v390 = v241 & 1 | v390 & 0xFE;
        LODWORD(v239) = *((_DWORD *)v229 + 8);
        *((_DWORD *)v229 + 8) = v392;
        v392 = v239;
        v242 = v229[5];
        v229[5] = v394;
        v394 = v242;
        v243 = *((_BYTE *)v229 + 36);
        *((_BYTE *)v229 + 36) = v393 & 2 | v243 & 0xFD;
        v393 = v243 & 2 | v393 & 0xFD;
        v244 = *((_BYTE *)v229 + 36) & 1;
        *((_BYTE *)v229 + 36) = v393 & 1 | *((_BYTE *)v229 + 36) & 0xFE;
        v245 = qword_1C7F2C0;
        v246 = qword_1C7F2C0;
        v393 = v244 | v393 & 0xFE;
        *((_DWORD *)v229 + 12) = v395;
        sub_182CBA0(v246, &v389);
        sub_182CBA0(v245, &v392);
        v247 = v388.m128i_i64[0];
        if ( v388.m128i_i64[0] )
        {
          v248 = v388.m128i_i64[1];
          v36 = (*(_DWORD *)(v388.m128i_i64[0] + 8))-- == 1;
          if ( v36 )
            sub_15D7BC0(v248, v247);
        }
        v249 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v380);
        sub_182CBA0(v249, &v383);
        v250 = v379.m128i_i64[0];
        if ( !v379.m128i_i64[0]
          || (v251 = v379.m128i_i64[1],
              v36 = *(_DWORD *)(v379.m128i_i64[0] + 8) == 1,
              --*(_DWORD *)(v379.m128i_i64[0] + 8),
              !v36) )
        {
          v252 = qword_1C7F2C0;
          if ( v355 )
            goto LABEL_149;
LABEL_152:
          sub_182CBA0(v252, &v371);
          sub_182CBA0(v252, &v374);
          result = (char *)v357 - (char *)a1;
          if ( (char *)v357 - (char *)a1 <= 56 )
            return result;
          while ( 1 )
          {
            v357 = (__m128i *)((char *)v357 - 56);
            v253 = v357[1].m128i_i8[4];
            v254 = _mm_loadu_si128(v357);
            v255 = v357[1].m128i_i64[1];
            v357->m128i_i64[0] = 0;
            v256 = v253;
            v257 = v372;
            v253 &= 2u;
            v256 &= 1u;
            v357[1].m128i_i64[1] = 0;
            v259 = v357[3].m128i_i32[0];
            v371 = v357[1].m128i_i32[0];
            v258 = v371;
            v372 = v253 | v256 | v257 & 0xFC;
            v260 = v375;
            v261 = v357[2].m128i_i32[0];
            v262 = v357[2].m128i_i8[4];
            v263 = v262 & 2;
            v264 = v357[2].m128i_i64[1];
            v357[2].m128i_i64[1] = 0;
            v262 &= 1u;
            v374 = v261;
            v377 = v259;
            v375 = v263 | v262 | v260 & 0xFC;
            v357->m128i_i64[0] = *a1;
            v265 = *((_DWORD *)a1 + 4);
            *a1 = 0;
            v357[1].m128i_i32[0] = v265;
            v266 = a1[3];
            *((_DWORD *)a1 + 4) = v258;
            v357[1].m128i_i64[1] = v266;
            a1[3] = 0;
            v267 = v357[1].m128i_i8[4];
            v357[1].m128i_i8[4] = *((_BYTE *)a1 + 20) & 2 | v267 & 0xFD;
            LOBYTE(v266) = v267 & 2 | *((_BYTE *)a1 + 20) & 0xFD;
            *((_BYTE *)a1 + 20) = v266;
            v268 = v357[1].m128i_i8[4];
            v357[1].m128i_i8[4] = v266 & 1 | v268 & 0xFE;
            v269 = *((_DWORD *)a1 + 8);
            *((_BYTE *)a1 + 20) = v268 & 1 | *((_BYTE *)a1 + 20) & 0xFE;
            LODWORD(v266) = v357[2].m128i_i32[0];
            v357[2].m128i_i32[0] = v269;
            v270 = a1[5];
            *((_DWORD *)a1 + 8) = v266;
            v271 = v357[2].m128i_i64[1];
            v357[2].m128i_i64[1] = v270;
            v272 = *((_BYTE *)a1 + 36);
            a1[5] = v271;
            LOBYTE(v270) = v357[2].m128i_i8[4];
            v357[2].m128i_i8[4] = v272 & 2 | v270 & 0xFD;
            LOBYTE(v271) = v270 & 2 | *((_BYTE *)a1 + 36) & 0xFD;
            *((_BYTE *)a1 + 36) = v271;
            v273 = v357[2].m128i_i8[4] & 1;
            v357[2].m128i_i8[4] = v271 & 1 | v357[2].m128i_i8[4] & 0xFE;
            *((_BYTE *)a1 + 36) = v273 | *((_BYTE *)a1 + 36) & 0xFE;
            v357[3].m128i_i32[0] = *((_DWORD *)a1 + 12);
            v380 = v258;
            v379 = v254;
            v381 = v253 | v256 | v381 & 0xFC;
            v382 = v255;
            v383 = v261;
            v373 = 0;
            v384 = v263 | v262 | v384 & 0xFC;
            v385 = v264;
            v386 = v259;
            v376 = 0;
            v356 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v357 - (char *)a1) >> 3);
            if ( (char *)v357 - (char *)a1 > 112 )
              break;
            v293 = a1;
            v274 = 0;
LABEL_170:
            if ( (v356 & 1) == 0 && (v356 - 2) / 2 == v274 )
            {
              v314 = 14 * (v274 + 1);
              v274 = 2 * (v274 + 1) - 1;
              v315 = (__int64)&a1[v314 - 7];
              v316 = *(_DWORD *)(v315 + 16);
              *v293 = *(_QWORD *)v315;
              LODWORD(v314) = *((_DWORD *)v293 + 4);
              *(_QWORD *)v315 = 0;
              *((_DWORD *)v293 + 4) = v316;
              v317 = *(_QWORD *)(v315 + 24);
              *(_DWORD *)(v315 + 16) = v314;
              v318 = v293[3];
              v293[3] = v317;
              v319 = *(_BYTE *)(v315 + 20);
              *(_QWORD *)(v315 + 24) = v318;
              LOBYTE(v317) = *((_BYTE *)v293 + 20);
              *((_BYTE *)v293 + 20) = v319 & 2 | v317 & 0xFD;
              LOBYTE(v318) = v317 & 2 | *(_BYTE *)(v315 + 20) & 0xFD;
              *(_BYTE *)(v315 + 20) = v318;
              v320 = *((_BYTE *)v293 + 20);
              *((_BYTE *)v293 + 20) = v320 & 0xFE | v318 & 1;
              LODWORD(v317) = *(_DWORD *)(v315 + 32);
              *(_BYTE *)(v315 + 20) = v320 & 1 | *(_BYTE *)(v315 + 20) & 0xFE;
              LODWORD(v318) = *((_DWORD *)v293 + 8);
              *((_DWORD *)v293 + 8) = v317;
              v321 = *(_QWORD *)(v315 + 40);
              *(_DWORD *)(v315 + 32) = v318;
              v322 = v293[5];
              v293[5] = v321;
              v323 = *(_BYTE *)(v315 + 36);
              *(_QWORD *)(v315 + 40) = v322;
              LOBYTE(v321) = *((_BYTE *)v293 + 36);
              *((_BYTE *)v293 + 36) = v323 & 2 | v321 & 0xFD;
              LOBYTE(v322) = v321 & 2 | *(_BYTE *)(v315 + 36) & 0xFD;
              *(_BYTE *)(v315 + 36) = v322;
              v324 = *((_BYTE *)v293 + 36) & 1;
              *((_BYTE *)v293 + 36) = *((_BYTE *)v293 + 36) & 0xFE | v322 & 1;
              *(_BYTE *)(v315 + 36) = v324 | *(_BYTE *)(v315 + 36) & 0xFE;
              *((_DWORD *)v293 + 12) = *(_DWORD *)(v315 + 48);
            }
            v89 = (__m128)_mm_load_si128(&v379);
            v379.m128i_i64[0] = 0;
            v389 = v380;
            v388 = (__m128i)v89;
            v390 = v381 & 3 | v390 & 0xFC;
            v296 = v382;
            v382 = 0;
            v391 = v296;
            v392 = v383;
            v393 = v384 & 3 | v393 & 0xFC;
            v297 = v385;
            v385 = 0;
            v394 = v297;
            v395 = v386;
            v298 = (v274 - 1) / 2;
            if ( !v274 )
            {
              a6 = _mm_movehl_ps(a6, v89);
              v91 = *a1;
              v90 = a1;
              v88 = a6.m128_u64[0];
              goto LABEL_56;
            }
            while ( 1 )
            {
              v90 = &a1[7 * v298];
              v309 = v90 + 2;
              if ( (*((_BYTE *)v90 + 36) & 1) != 0 || *((_DWORD *)v90 + 8) != 1 || (v393 & 1) != 0 || v392 != 1 )
              {
                LOBYTE(v310) = sub_1848D40(qword_1C7F2C0, v309, &v389);
              }
              else if ( (*((_BYTE *)v90 + 20) & 1) != 0 || (v390 & 1) != 0 )
              {
                v310 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v309, &v389) >> 31;
              }
              else
              {
                LOBYTE(v310) = *((_DWORD *)v90 + 4) < v389;
              }
              if ( !(_BYTE)v310 )
              {
                v88 = v388.m128i_u64[1];
                v89.m128_u64[0] = v388.m128i_i64[0];
                v90 = &a1[7 * v274];
                v91 = *v90;
LABEL_56:
                *v90 = v89.m128_u64[0];
                v388.m128i_i64[0] = v91;
                if ( v91 )
                {
                  v36 = (*(_DWORD *)(v91 + 8))-- == 1;
                  if ( v36 )
                    sub_15D7BC0(v88, v91);
                }
                goto LABEL_59;
              }
              v311 = &a1[7 * v274];
              v312 = *v311;
              *v311 = *v90;
              *v90 = v312;
              if ( v312 )
              {
                v313 = v90[1];
                v36 = (*(_DWORD *)(v312 + 8))-- == 1;
                if ( v36 )
                  sub_15D7BC0(v313, v312);
              }
              v299 = *((_DWORD *)v311 + 4);
              v300 = *((_DWORD *)v90 + 4);
              *v90 = 0;
              v274 = v298;
              *((_DWORD *)v311 + 4) = v300;
              v301 = v90[3];
              *((_DWORD *)v90 + 4) = v299;
              v302 = v311[3];
              v311[3] = v301;
              v303 = *((_BYTE *)v90 + 20);
              v90[3] = v302;
              LOBYTE(v301) = *((_BYTE *)v311 + 20);
              *((_BYTE *)v311 + 20) = v303 & 2 | v301 & 0xFD;
              LOBYTE(v302) = v301 & 2 | *((_BYTE *)v90 + 20) & 0xFD;
              *((_BYTE *)v90 + 20) = v302;
              v304 = *((_BYTE *)v311 + 20);
              *((_BYTE *)v311 + 20) = v302 & 1 | v304 & 0xFE;
              LODWORD(v301) = *((_DWORD *)v90 + 8);
              *((_BYTE *)v90 + 20) = v304 & 1 | *((_BYTE *)v90 + 20) & 0xFE;
              LODWORD(v302) = *((_DWORD *)v311 + 8);
              *((_DWORD *)v311 + 8) = v301;
              v305 = v90[5];
              *((_DWORD *)v90 + 8) = v302;
              v306 = v311[5];
              v311[5] = v305;
              v307 = *((_BYTE *)v90 + 36);
              v90[5] = v306;
              LOBYTE(v305) = *((_BYTE *)v311 + 36);
              *((_BYTE *)v311 + 36) = v307 & 2 | v305 & 0xFD;
              LOBYTE(v306) = v305 & 2 | *((_BYTE *)v90 + 36) & 0xFD;
              *((_BYTE *)v90 + 36) = v306;
              v308 = *((_BYTE *)v311 + 36) & 1;
              *((_BYTE *)v311 + 36) = v306 & 1 | *((_BYTE *)v311 + 36) & 0xFE;
              *((_BYTE *)v90 + 36) = v308 | *((_BYTE *)v90 + 36) & 0xFE;
              *((_DWORD *)v311 + 12) = *((_DWORD *)v90 + 12);
              if ( !v298 )
                break;
              v298 = (v298 - 1) / 2;
            }
            *v90 = v388.m128i_i64[0];
LABEL_59:
            v92 = *((_DWORD *)v90 + 4);
            v388.m128i_i64[0] = 0;
            *((_DWORD *)v90 + 4) = v389;
            v389 = v92;
            v93 = v90[3];
            v90[3] = v391;
            v391 = v93;
            v94 = *((_BYTE *)v90 + 20);
            *((_BYTE *)v90 + 20) = v390 & 2 | v94 & 0xFD;
            v390 = v94 & 2 | v390 & 0xFD;
            v95 = *((_BYTE *)v90 + 20);
            *((_BYTE *)v90 + 20) = v390 & 1 | v95 & 0xFE;
            v390 = v95 & 1 | v390 & 0xFE;
            LODWORD(v93) = *((_DWORD *)v90 + 8);
            *((_DWORD *)v90 + 8) = v392;
            v392 = v93;
            v96 = v90[5];
            v90[5] = v394;
            v394 = v96;
            v97 = *((_BYTE *)v90 + 36);
            *((_BYTE *)v90 + 36) = v393 & 2 | v97 & 0xFD;
            v393 = v97 & 2 | v393 & 0xFD;
            v98 = *((_BYTE *)v90 + 36) & 1;
            *((_BYTE *)v90 + 36) = v393 & 1 | *((_BYTE *)v90 + 36) & 0xFE;
            v393 = v98 | v393 & 0xFE;
            *((_DWORD *)v90 + 12) = v395;
            v99 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v389);
            sub_182CBA0(v99, &v392);
            v100 = v388.m128i_i64[0];
            if ( v388.m128i_i64[0] )
            {
              v101 = v388.m128i_i64[1];
              v36 = (*(_DWORD *)(v388.m128i_i64[0] + 8))-- == 1;
              if ( v36 )
                sub_15D7BC0(v101, v100);
            }
            v102 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v380);
            sub_182CBA0(v102, &v383);
            v103 = v379.m128i_i64[0];
            if ( v379.m128i_i64[0] )
            {
              v104 = v379.m128i_i64[1];
              v36 = (*(_DWORD *)(v379.m128i_i64[0] + 8))-- == 1;
              if ( v36 )
                sub_15D7BC0(v104, v103);
            }
            v105 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v371);
            result = sub_182CBA0(v105, &v374);
            if ( (char *)v357 - (char *)a1 <= 56 )
              return result;
          }
          v274 = 0;
          while ( 2 )
          {
            v285 = 2 * (v274 + 1);
            v286 = 14 * (v274 + 1);
            v287 = (__int64)&a1[v286 - 7];
            v288 = &a1[v286];
            v289 = v287 + 16;
            if ( (*((_BYTE *)v288 + 36) & 1) != 0
              || *((_DWORD *)v288 + 8) != 1
              || (*(_BYTE *)(v287 + 36) & 1) != 0
              || *(_DWORD *)(v287 + 32) != 1 )
            {
              LOBYTE(v290) = sub_1848D40(qword_1C7F2C0, v288 + 2, v289);
              v291 = &a1[7 * v274];
              v292 = *v291;
            }
            else
            {
              if ( (*((_BYTE *)v288 + 20) & 1) == 0 && (*(_BYTE *)(v287 + 20) & 1) == 0 )
              {
                v291 = &a1[7 * v274];
                v274 = v285 - (*((_DWORD *)v288 + 4) < *(_DWORD *)(v287 + 16));
                v293 = &a1[7 * v274];
                *v291 = *v293;
                *v293 = 0;
                goto LABEL_155;
              }
              v290 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v288 + 2, v289) >> 31;
              v291 = &a1[7 * v274];
              v292 = *v291;
            }
            v274 = v285 - (unsigned __int8)v290;
            v293 = &a1[7 * v274];
            *v291 = *v293;
            *v293 = v292;
            if ( v292 )
            {
              v294 = v293[1];
              v36 = (*(_DWORD *)(v292 + 8))-- == 1;
              if ( v36 )
                sub_15D7BC0(v294, v292);
            }
LABEL_155:
            v275 = *((_DWORD *)v291 + 4);
            v276 = *((_DWORD *)v293 + 4);
            *v293 = 0;
            *((_DWORD *)v291 + 4) = v276;
            v277 = v293[3];
            *((_DWORD *)v293 + 4) = v275;
            v278 = v291[3];
            v291[3] = v277;
            v279 = *((_BYTE *)v293 + 20);
            v293[3] = v278;
            LOBYTE(v278) = *((_BYTE *)v291 + 20);
            *((_BYTE *)v291 + 20) = v279 & 2 | v278 & 0xFD;
            LOBYTE(v278) = v278 & 2 | *((_BYTE *)v293 + 20) & 0xFD;
            *((_BYTE *)v293 + 20) = v278;
            v280 = *((_BYTE *)v291 + 20);
            *((_BYTE *)v291 + 20) = v278 & 1 | v280 & 0xFE;
            LODWORD(v277) = *((_DWORD *)v293 + 8);
            *((_BYTE *)v293 + 20) = v280 & 1 | *((_BYTE *)v293 + 20) & 0xFE;
            LODWORD(v278) = *((_DWORD *)v291 + 8);
            *((_DWORD *)v291 + 8) = v277;
            v281 = v293[5];
            *((_DWORD *)v293 + 8) = v278;
            v282 = v291[5];
            v291[5] = v281;
            v283 = *((_BYTE *)v293 + 36);
            v293[5] = v282;
            LOBYTE(v282) = *((_BYTE *)v291 + 36);
            *((_BYTE *)v291 + 36) = v283 & 2 | v282 & 0xFD;
            LOBYTE(v282) = v282 & 2 | *((_BYTE *)v293 + 36) & 0xFD;
            *((_BYTE *)v293 + 36) = v282;
            v284 = *((_BYTE *)v291 + 36) & 1;
            *((_BYTE *)v291 + 36) = v282 & 1 | *((_BYTE *)v291 + 36) & 0xFE;
            *((_BYTE *)v293 + 36) = v284 | *((_BYTE *)v293 + 36) & 0xFE;
            *((_DWORD *)v291 + 12) = *((_DWORD *)v293 + 12);
            if ( (v356 - 1) / 2 <= v274 )
              goto LABEL_170;
            continue;
          }
        }
        sub_15D7BC0(v251, v250);
        v252 = qword_1C7F2C0;
        if ( !v355 )
          goto LABEL_152;
LABEL_149:
        --v355;
        sub_182CBA0(v252, &v371);
        sub_182CBA0(v252, &v374);
        v182 = (__m128i *)((char *)v182 - 56);
      }
    }
    v361 = (void *)(*(_QWORD *)v360 - 1LL);
    v10 = qword_1C7F2C0;
    v11 = (__m128i *)(a1 + 7);
    v12 = &a1[7 * v9];
    if ( (*((_BYTE *)a1 + 92) & 1) == 0
      && *((_DWORD *)a1 + 22) == 1
      && (*((_BYTE *)v12 + 36) & 1) == 0
      && *((_DWORD *)v12 + 8) == 1 )
    {
      if ( (*((_BYTE *)a1 + 76) & 1) == 0 && (*((_BYTE *)v12 + 20) & 1) == 0 )
      {
        if ( *((_DWORD *)a1 + 18) < *((_DWORD *)v12 + 4) )
        {
          v67 = &v357[-3].m128i_i8[8];
          goto LABEL_80;
        }
        v13 = &v357[-3].m128i_i8[8];
LABEL_7:
        if ( *((_DWORD *)a1 + 22) == 1 && (v357[-2].m128i_i8[12] & 1) == 0 && v357[-2].m128i_i32[2] == 1 )
        {
          if ( (*((_BYTE *)a1 + 76) & 1) != 0 || (v357[-3].m128i_i8[12] & 1) != 0 )
          {
            v346 = v13;
            v106 = sub_182C7B0(v10, a1 + 9, v13);
            v10 = qword_1C7F2C0;
            v13 = v346;
            v107 = v106 >> 31;
          }
          else
          {
            LOBYTE(v107) = *((_DWORD *)a1 + 18) < v357[-3].m128i_i32[2];
          }
          if ( !(_BYTE)v107 )
          {
LABEL_72:
            if ( (*((_BYTE *)v12 + 36) & 1) != 0
              || *((_DWORD *)v12 + 8) != 1
              || (v357[-2].m128i_i8[12] & 1) != 0
              || v357[-2].m128i_i32[2] != 1 )
            {
              LOBYTE(v108) = sub_1848D40(v10, v12 + 2, v13);
              v10 = qword_1C7F2C0;
            }
            else if ( (*((_BYTE *)v12 + 20) & 1) != 0 || (v357[-3].m128i_i8[12] & 1) != 0 )
            {
              v341 = sub_182C7B0(v10, v12 + 2, v13);
              v10 = qword_1C7F2C0;
              v108 = v341 >> 31;
            }
            else
            {
              LOBYTE(v108) = *((_DWORD *)v12 + 4) < v357[-3].m128i_i32[2];
            }
            v109 = *a1;
            v388.m128i_i64[1] = a1[1];
            *a1 = 0;
            if ( (_BYTE)v108 )
            {
              v110 = *((_BYTE *)a1 + 20);
              v111 = a1[3];
              a1[3] = 0;
              v112 = *((_DWORD *)a1 + 4);
              v113 = *((_DWORD *)a1 + 12);
              v114 = a1[5];
              v115 = *((_DWORD *)a1 + 8);
              a1[5] = 0;
              v116 = *((_BYTE *)a1 + 36);
              v395 = v113;
              *a1 = v357[-4].m128i_i64[1];
              *((_DWORD *)a1 + 4) = v357[-3].m128i_i32[2];
              v117 = v357[-2].m128i_i64[0];
              v357[-3].m128i_i32[2] = v112;
              a1[3] = v117;
              v118 = v357[-3].m128i_i8[12];
              v357[-2].m128i_i64[0] = 0;
              v119 = *((_BYTE *)a1 + 20);
              *((_BYTE *)a1 + 20) = v118 & 2 | v119 & 0xFD;
              LOBYTE(v117) = v357[-3].m128i_i8[12] & 0xFD | v119 & 2;
              v357[-3].m128i_i8[12] = v117;
              v120 = *((_BYTE *)a1 + 20);
              *((_BYTE *)a1 + 20) = v117 & 1 | v120 & 0xFE;
              v357[-3].m128i_i8[12] = v120 & 1 | v357[-3].m128i_i8[12] & 0xFE;
              LODWORD(v117) = *((_DWORD *)a1 + 8);
              *((_DWORD *)a1 + 8) = v357[-2].m128i_i32[2];
              v121 = v357[-1].m128i_i64[0];
              v357[-2].m128i_i32[2] = v117;
              v122 = a1[5];
              a1[5] = v121;
              LOBYTE(v121) = v357[-2].m128i_i8[12];
              v357[-1].m128i_i64[0] = v122;
              LOBYTE(v122) = *((_BYTE *)a1 + 36);
              LOBYTE(v353) = v121;
              *((_BYTE *)a1 + 36) = v122 & 0xFC | v121 & 3;
              *((_DWORD *)a1 + 12) = v357[-1].m128i_i32[2];
              LODWORD(v121) = v357[-3].m128i_i32[2];
              v357[-4].m128i_i64[1] = v109;
              v388.m128i_i64[0] = 0;
              v357[-3].m128i_i32[2] = v112;
              v389 = v121;
              v123 = v357[-2].m128i_i64[0];
              v357[-2].m128i_i64[0] = v111;
              v391 = v123;
              LOBYTE(v112) = v357[-3].m128i_i8[12] & 0xFD;
              LOBYTE(v111) = v357[-3].m128i_i8[12] & 2;
              LOBYTE(v123) = v390 & 0xFC;
              v357[-3].m128i_i8[12] = v110 & 1 | v357[-3].m128i_i8[12] & 0xFC | v110 & 2;
              v390 = v112 & 1 | v111 | v123;
              v124 = v357[-2].m128i_i32[2];
              v357[-2].m128i_i32[2] = v115;
              v392 = v124;
              v125 = v357[-1].m128i_i64[0];
              v357[-1].m128i_i64[0] = v114;
              v394 = v125;
              v343 = v10;
              LOBYTE(v123) = v393 & 0xFC;
              v357[-2].m128i_i8[12] = v357[-2].m128i_i8[12] & 0xFC | v116 & 3;
              v393 = v123 | v122 & 3;
              v357[-1].m128i_i32[2] = v113;
              sub_182CBA0(v10, &v389);
              sub_182CBA0(v10, &v392);
              v34 = v388.m128i_i64[0];
              if ( !v388.m128i_i64[0] )
                goto LABEL_12;
              v35 = v388.m128i_i64[1];
              v36 = (*(_DWORD *)(v388.m128i_i64[0] + 8))-- == 1;
              if ( !v36 )
                goto LABEL_12;
            }
            else
            {
              v164 = *((_BYTE *)a1 + 20);
              v165 = a1[5];
              a1[5] = 0;
              v166 = *((_DWORD *)a1 + 4);
              v167 = a1[3];
              a1[3] = 0;
              v168 = *((_BYTE *)a1 + 36);
              v354 = v165;
              v169 = *((_DWORD *)a1 + 8);
              v349 = v164 & 1;
              v170 = *v12;
              v395 = *((_DWORD *)a1 + 12);
              LODWORD(v165) = v395;
              *a1 = v170;
              LOBYTE(v353) = v168 & 1;
              *((_DWORD *)a1 + 4) = *((_DWORD *)v12 + 4);
              v171 = v12[3];
              *((_DWORD *)v12 + 4) = v166;
              a1[3] = v171;
              v172 = *((_BYTE *)v12 + 20);
              v12[3] = 0;
              v173 = *((_BYTE *)a1 + 20);
              *((_BYTE *)a1 + 20) = v172 & 2 | v173 & 0xFD;
              LOBYTE(v171) = *((_BYTE *)v12 + 20) & 0xFD | v173 & 2;
              *((_BYTE *)v12 + 20) = v171;
              v174 = *((_BYTE *)a1 + 20);
              *((_BYTE *)a1 + 20) = v171 & 1 | v174 & 0xFE;
              v175 = *((_DWORD *)v12 + 8);
              *((_BYTE *)v12 + 20) = v174 & 1 | *((_BYTE *)v12 + 20) & 0xFE;
              LODWORD(v171) = *((_DWORD *)a1 + 8);
              *((_DWORD *)a1 + 8) = v175;
              v176 = v12[5];
              *((_DWORD *)v12 + 8) = v171;
              v177 = a1[5];
              a1[5] = v176;
              v12[5] = v177;
              LOBYTE(v176) = *((_BYTE *)a1 + 36);
              v178 = v176 & 0xFD | *((_BYTE *)v12 + 36) & 2;
              *((_BYTE *)a1 + 36) = v178;
              *((_BYTE *)a1 + 36) = *((_BYTE *)v12 + 36) & 1 | v178 & 0xFE;
              *((_DWORD *)a1 + 12) = *((_DWORD *)v12 + 12);
              LODWORD(v177) = *((_DWORD *)v12 + 4);
              *v12 = v109;
              v388.m128i_i64[0] = 0;
              *((_DWORD *)v12 + 4) = v166;
              v389 = v177;
              v179 = v12[3];
              v12[3] = v167;
              v391 = v179;
              LOBYTE(v167) = *((_BYTE *)v12 + 20);
              *((_BYTE *)v12 + 20) = v164 & 2 | v167 & 0xFD;
              v390 = v167 & 2 | v390 & 0xFD;
              v180 = *((_BYTE *)v12 + 20);
              *((_BYTE *)v12 + 20) = v349 | v180 & 0xFE;
              v390 = v180 & 1 | v390 & 0xFE;
              LODWORD(v179) = *((_DWORD *)v12 + 8);
              *((_DWORD *)v12 + 8) = v169;
              v392 = v179;
              v181 = v12[5];
              v343 = v10;
              v12[5] = v354;
              v394 = v181;
              *((_BYTE *)v12 + 36) = v168 & 2 | *((_BYTE *)v12 + 36) & 0xFD;
              v393 = v176 & 2 | v393 & 0xFD;
              *((_BYTE *)v12 + 36) = v168 & 1 | *((_BYTE *)v12 + 36) & 0xFE;
              v393 = v178 & 1 | v393 & 0xFE;
              *((_DWORD *)v12 + 12) = v165;
              sub_182CBA0(v10, &v389);
              sub_182CBA0(v10, &v392);
              v34 = v388.m128i_i64[0];
              if ( !v388.m128i_i64[0] )
                goto LABEL_12;
              v35 = v388.m128i_i64[1];
              v36 = (*(_DWORD *)(v388.m128i_i64[0] + 8))-- == 1;
              if ( !v36 )
                goto LABEL_12;
            }
LABEL_11:
            sub_15D7BC0(v35, v34);
            goto LABEL_12;
          }
LABEL_9:
          v15 = *((_BYTE *)a1 + 20);
          v16 = v15;
          v388.m128i_i64[1] = a1[1];
          v15 &= 1u;
          v16 &= 2u;
          v18 = *a1;
          v19 = a1[3];
          v20 = *((_BYTE *)a1 + 36) & 1;
          v21 = *((_DWORD *)a1 + 8);
          v22 = *((_DWORD *)a1 + 12);
          v389 = *((_DWORD *)a1 + 4);
          v17 = v389;
          v23 = a1[5];
          v390 = v16 | v15 | v390 & 0xFC;
          v24 = *((_BYTE *)a1 + 36);
          v392 = v21;
          v24 &= 2u;
          v395 = v22;
          v393 = v24 | v20 | v393 & 0xFC;
          *a1 = a1[7];
          v25 = *((_DWORD *)a1 + 18);
          *((_DWORD *)a1 + 18) = v17;
          v26 = a1[10];
          *((_DWORD *)a1 + 4) = v25;
          a1[3] = v26;
          LOBYTE(v25) = *((_BYTE *)a1 + 76);
          LOBYTE(v26) = v25 & 0xFD;
          v27 = v25 & 0xFD | v16;
          LOBYTE(v25) = v25 & 2 | *((_BYTE *)a1 + 20) & 0xFC;
          *((_BYTE *)a1 + 76) = v15 | v27 & 0xFE;
          *((_BYTE *)a1 + 20) = v26 & 1 | v25;
          v28 = *((_DWORD *)a1 + 22);
          LOBYTE(v25) = *((_BYTE *)a1 + 36);
          *((_DWORD *)a1 + 22) = v21;
          *((_DWORD *)a1 + 8) = v28;
          v29 = a1[12];
          a1[7] = v18;
          a1[5] = v29;
          LOBYTE(v29) = *((_BYTE *)a1 + 92);
          a1[10] = v19;
          LOBYTE(v26) = v29;
          LOBYTE(v29) = v29 & 0xFD;
          a1[12] = v23;
          v343 = v10;
          v388.m128i_i64[0] = 0;
          v391 = 0;
          *((_BYTE *)a1 + 92) = v20 | (v29 | v24) & 0xFE;
          v30 = *((_DWORD *)a1 + 26);
          *((_BYTE *)a1 + 36) = v26 & 2 | v25 & 0xFC | v29 & 1;
          *((_DWORD *)a1 + 12) = v30;
          *((_DWORD *)a1 + 26) = v22;
          v394 = 0;
          sub_182CBA0(v10, &v389);
          sub_182CBA0(v10, &v392);
          v34 = v388.m128i_i64[0];
          if ( !v388.m128i_i64[0] )
            goto LABEL_12;
          v35 = v388.m128i_i64[1];
          v36 = (*(_DWORD *)(v388.m128i_i64[0] + 8))-- == 1;
          if ( !v36 )
            goto LABEL_12;
          goto LABEL_11;
        }
LABEL_8:
        v342 = v13;
        v14 = sub_1848D40(v10, a1 + 9, v13);
        v10 = qword_1C7F2C0;
        v13 = v342;
        if ( !v14 )
          goto LABEL_72;
        goto LABEL_9;
      }
      if ( (int)sub_182C7B0(qword_1C7F2C0, a1 + 9, v12 + 2) < 0 )
        goto LABEL_49;
LABEL_6:
      v10 = qword_1C7F2C0;
      v13 = &v357[-3].m128i_i8[8];
      if ( (*((_BYTE *)a1 + 92) & 1) != 0 )
        goto LABEL_8;
      goto LABEL_7;
    }
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, a1 + 9, v12 + 2) )
      goto LABEL_6;
LABEL_49:
    v10 = qword_1C7F2C0;
    v67 = &v357[-3].m128i_i8[8];
    if ( (*((_BYTE *)v12 + 36) & 1) != 0 || *((_DWORD *)v12 + 8) != 1 )
    {
LABEL_51:
      v344 = v67;
      v68 = sub_1848D40(v10, v12 + 2, v67);
      v10 = qword_1C7F2C0;
      v67 = v344;
      if ( v68 )
        goto LABEL_52;
LABEL_85:
      v128 = *((_BYTE *)a1 + 92);
      if ( (v128 & 1) != 0
        || *((_DWORD *)a1 + 22) != 1
        || (v357[-2].m128i_i8[12] & 1) != 0
        || (v131 = v357[-2].m128i_i32[2], v131 != 1) )
      {
        v129 = sub_1848D40(v10, a1 + 9, v67);
        v10 = qword_1C7F2C0;
        if ( v129 )
          goto LABEL_93;
      }
      else
      {
        v132 = *((_BYTE *)a1 + 76);
        if ( (v132 & 1) == 0 && (v357[-3].m128i_i8[12] & 1) == 0 )
        {
          v130 = *((_DWORD *)a1 + 18);
          if ( v130 >= v357[-3].m128i_i32[2] )
            goto LABEL_89;
LABEL_93:
          v148 = a1[1];
          v149 = *a1;
          *a1 = 0;
          v150 = a1[3];
          v151 = *((_DWORD *)a1 + 4);
          a1[3] = 0;
          v152 = *((_DWORD *)a1 + 12);
          v153 = a1[5];
          v388.m128i_i64[1] = v148;
          LOBYTE(v148) = *((_BYTE *)a1 + 20);
          a1[5] = 0;
          v154 = *((_DWORD *)a1 + 8);
          v155 = *((_BYTE *)a1 + 36);
          v395 = v152;
          *a1 = v357[-4].m128i_i64[1];
          *((_DWORD *)a1 + 4) = v357[-3].m128i_i32[2];
          v156 = v357[-2].m128i_i64[0];
          v357[-3].m128i_i32[2] = v151;
          a1[3] = v156;
          v157 = v357[-3].m128i_i8[12];
          v357[-2].m128i_i64[0] = 0;
          v158 = *((_BYTE *)a1 + 20);
          *((_BYTE *)a1 + 20) = v157 & 2 | v158 & 0xFD;
          LOBYTE(v156) = v357[-3].m128i_i8[12] & 0xFD | v158 & 2;
          v357[-3].m128i_i8[12] = v156;
          v159 = *((_BYTE *)a1 + 20);
          *((_BYTE *)a1 + 20) = v156 & 1 | v159 & 0xFE;
          v357[-3].m128i_i8[12] = v159 & 1 | v357[-3].m128i_i8[12] & 0xFE;
          LODWORD(v156) = *((_DWORD *)a1 + 8);
          *((_DWORD *)a1 + 8) = v357[-2].m128i_i32[2];
          v160 = v357[-1].m128i_i64[0];
          v357[-2].m128i_i32[2] = v156;
          v161 = a1[5];
          a1[5] = v160;
          LOBYTE(v160) = v357[-2].m128i_i8[12];
          v357[-1].m128i_i64[0] = v161;
          LOBYTE(v161) = *((_BYTE *)a1 + 36);
          LOBYTE(v353) = v160;
          *((_BYTE *)a1 + 36) = v161 & 0xFC | v160 & 3;
          *((_DWORD *)a1 + 12) = v357[-1].m128i_i32[2];
          LODWORD(v160) = v357[-3].m128i_i32[2];
          v357[-4].m128i_i64[1] = v149;
          v388.m128i_i64[0] = 0;
          v357[-3].m128i_i32[2] = v151;
          v389 = v160;
          v162 = v357[-2].m128i_i64[0];
          v357[-2].m128i_i64[0] = v150;
          v391 = v162;
          LOBYTE(v151) = v357[-3].m128i_i8[12] & 0xFD;
          LOBYTE(v150) = v357[-3].m128i_i8[12] & 2;
          LOBYTE(v162) = v390 & 0xFC;
          v357[-3].m128i_i8[12] = v148 & 1 | v357[-3].m128i_i8[12] & 0xFC | v148 & 2;
          v390 = v151 & 1 | v150 | v162;
          LODWORD(v148) = v357[-2].m128i_i32[2];
          v357[-2].m128i_i32[2] = v154;
          v392 = v148;
          v163 = v357[-1].m128i_i64[0];
          v357[-1].m128i_i64[0] = v153;
          v394 = v163;
          LOBYTE(v162) = v393 & 0xFC;
          v343 = v10;
          v357[-2].m128i_i8[12] = v357[-2].m128i_i8[12] & 0xFC | v155 & 3;
          v393 = v162 | v161 & 3;
          v357[-1].m128i_i32[2] = v152;
          sub_182CBA0(v10, &v389);
          sub_182CBA0(v10, &v392);
          v34 = v388.m128i_i64[0];
          if ( v388.m128i_i64[0] )
          {
            v35 = v388.m128i_i64[1];
            v36 = (*(_DWORD *)(v388.m128i_i64[0] + 8))-- == 1;
            if ( v36 )
              goto LABEL_11;
          }
          goto LABEL_12;
        }
        v147 = sub_182C7B0(v10, a1 + 9, v67);
        v10 = qword_1C7F2C0;
        if ( v147 < 0 )
          goto LABEL_93;
      }
      v130 = *((_DWORD *)a1 + 18);
      v131 = *((_DWORD *)a1 + 22);
      v128 = *((_BYTE *)a1 + 92);
      v132 = *((_BYTE *)a1 + 76);
LABEL_89:
      v133 = *((_BYTE *)a1 + 20);
      v134 = v133;
      v135 = *a1;
      v388.m128i_i64[1] = a1[1];
      v133 &= 1u;
      v136 = v390;
      v134 &= 2u;
      v353 = v135;
      LODWORD(v135) = *((_DWORD *)a1 + 4);
      v137 = *((_BYTE *)a1 + 36) & 1;
      v138 = a1[7];
      *((_DWORD *)a1 + 4) = v130;
      v139 = a1[10];
      v140 = *((_BYTE *)a1 + 36);
      v389 = v135;
      *((_DWORD *)a1 + 18) = v135;
      v140 &= 2u;
      v390 = v134 | v133 | v136 & 0xFC;
      v141 = a1[3];
      LOBYTE(v135) = v132 & 2;
      v142 = v132 & 0xFD;
      a1[3] = v139;
      LOBYTE(v139) = *((_BYTE *)a1 + 20);
      v354 = v141;
      LODWORD(v141) = *((_DWORD *)a1 + 8);
      *a1 = v138;
      v348 = v141;
      v392 = v141;
      LOBYTE(v141) = v393;
      *((_BYTE *)a1 + 20) = v142 & 1 | v135 | v139 & 0xFC;
      *((_BYTE *)a1 + 76) = v133 | (v142 | v134) & 0xFE;
      v393 = v140 | v137 | v141 & 0xFC;
      v358 = a1[5];
      v395 = *((_DWORD *)a1 + 12);
      LODWORD(v141) = v395;
      *((_DWORD *)a1 + 8) = v131;
      v143 = v348;
      v144 = *((_BYTE *)a1 + 36);
      v343 = v10;
      *((_DWORD *)a1 + 22) = v143;
      v145 = a1[12];
      v388.m128i_i64[0] = 0;
      a1[5] = v145;
      a1[7] = v353;
      v391 = 0;
      v394 = 0;
      *((_BYTE *)a1 + 36) = v128 & 1 | v144 & 0xFC | v128 & 2;
      *((_BYTE *)a1 + 92) = v137 | v128 & 0xFC | v140 & 0xFE;
      v146 = *((_DWORD *)a1 + 26);
      *((_DWORD *)a1 + 26) = v141;
      *((_DWORD *)a1 + 12) = v146;
      a1[10] = v354;
      a1[12] = v358;
      sub_182CBA0(v10, &v389);
      sub_182CBA0(v10, &v392);
      v34 = v388.m128i_i64[0];
      if ( v388.m128i_i64[0] )
      {
        v35 = v388.m128i_i64[1];
        v36 = (*(_DWORD *)(v388.m128i_i64[0] + 8))-- == 1;
        if ( v36 )
          goto LABEL_11;
      }
      goto LABEL_12;
    }
LABEL_80:
    if ( (v357[-2].m128i_i8[12] & 1) != 0 || v357[-2].m128i_i32[2] != 1 )
      goto LABEL_51;
    if ( (*((_BYTE *)v12 + 20) & 1) != 0 || (v357[-3].m128i_i8[12] & 1) != 0 )
    {
      v347 = v67;
      v126 = sub_182C7B0(v10, v12 + 2, v67);
      v10 = qword_1C7F2C0;
      v67 = v347;
      v127 = v126 >> 31;
    }
    else
    {
      LOBYTE(v127) = *((_DWORD *)v12 + 4) < v357[-3].m128i_i32[2];
    }
    if ( !(_BYTE)v127 )
      goto LABEL_85;
LABEL_52:
    v69 = *((_BYTE *)a1 + 20);
    v70 = a1[1];
    v71 = *a1;
    v72 = a1[5];
    *a1 = 0;
    v73 = *((_DWORD *)a1 + 4);
    v388.m128i_i64[1] = v70;
    v74 = a1[3];
    a1[5] = 0;
    v75 = *((_BYTE *)a1 + 36);
    v76 = *((_DWORD *)a1 + 8);
    v345 = v69 & 1;
    v77 = *v12;
    a1[3] = 0;
    v354 = v72;
    LODWORD(v72) = *((_DWORD *)a1 + 12);
    *a1 = v77;
    LODWORD(v77) = *((_DWORD *)v12 + 4);
    v395 = v72;
    *((_DWORD *)a1 + 4) = v77;
    v78 = v12[3];
    *((_DWORD *)v12 + 4) = v73;
    a1[3] = v78;
    v79 = *((_BYTE *)v12 + 20);
    v12[3] = 0;
    LOBYTE(v78) = *((_BYTE *)a1 + 20);
    LOBYTE(v353) = v75 & 1;
    *((_BYTE *)a1 + 20) = v79 & 2 | v78 & 0xFD;
    LOBYTE(v78) = v78 & 2 | *((_BYTE *)v12 + 20) & 0xFD;
    *((_BYTE *)v12 + 20) = v78;
    v80 = *((_BYTE *)a1 + 20);
    *((_BYTE *)a1 + 20) = v78 & 1 | v80 & 0xFE;
    v81 = *((_DWORD *)v12 + 8);
    *((_BYTE *)v12 + 20) = v80 & 1 | *((_BYTE *)v12 + 20) & 0xFE;
    LODWORD(v78) = *((_DWORD *)a1 + 8);
    *((_DWORD *)a1 + 8) = v81;
    v82 = v12[5];
    *((_DWORD *)v12 + 8) = v78;
    v83 = a1[5];
    a1[5] = v82;
    v12[5] = v83;
    LOBYTE(v82) = *((_BYTE *)a1 + 36);
    v84 = v82 & 0xFD | *((_BYTE *)v12 + 36) & 2;
    *((_BYTE *)a1 + 36) = v84;
    *((_BYTE *)a1 + 36) = *((_BYTE *)v12 + 36) & 1 | v84 & 0xFE;
    *((_DWORD *)a1 + 12) = *((_DWORD *)v12 + 12);
    LODWORD(v83) = *((_DWORD *)v12 + 4);
    *v12 = v71;
    v388.m128i_i64[0] = 0;
    *((_DWORD *)v12 + 4) = v73;
    v389 = v83;
    v85 = v12[3];
    v12[3] = v74;
    v391 = v85;
    LOBYTE(v74) = *((_BYTE *)v12 + 20);
    *((_BYTE *)v12 + 20) = v69 & 2 | v74 & 0xFD;
    v390 = v74 & 2 | v390 & 0xFD;
    v86 = *((_BYTE *)v12 + 20);
    *((_BYTE *)v12 + 20) = v345 | v86 & 0xFE;
    v343 = v10;
    v390 = v86 & 1 | v390 & 0xFE;
    LODWORD(v85) = *((_DWORD *)v12 + 8);
    *((_DWORD *)v12 + 8) = v76;
    v392 = v85;
    v87 = v12[5];
    v12[5] = v354;
    v394 = v87;
    *((_BYTE *)v12 + 36) = v75 & 2 | *((_BYTE *)v12 + 36) & 0xFD;
    v393 = v82 & 2 | v393 & 0xFD;
    *((_BYTE *)v12 + 36) = v75 & 1 | *((_BYTE *)v12 + 36) & 0xFE;
    v393 = v84 & 1 | v393 & 0xFE;
    *((_DWORD *)v12 + 12) = v72;
    sub_182CBA0(v10, &v389);
    sub_182CBA0(v10, &v392);
    v34 = v388.m128i_i64[0];
    if ( v388.m128i_i64[0] )
    {
      v35 = v388.m128i_i64[1];
      v36 = (*(_DWORD *)(v388.m128i_i64[0] + 8))-- == 1;
      if ( v36 )
        goto LABEL_11;
    }
LABEL_12:
    v37 = v357;
    while ( 2 )
    {
      v38 = qword_1C7F2C0;
      while ( 1 )
      {
        v40 = v11 + 1;
        if ( (v11[2].m128i_i8[4] & 1) != 0
          || v11[2].m128i_i32[0] != 1
          || (*((_BYTE *)a1 + 36) & 1) != 0
          || *((_DWORD *)a1 + 8) != 1 )
        {
          LOBYTE(v39) = sub_1848D40(v38, v40, a1 + 2);
          v38 = qword_1C7F2C0;
          goto LABEL_15;
        }
        if ( (v11[1].m128i_i8[4] & 1) == 0 && (*((_BYTE *)a1 + 20) & 1) == 0 )
          break;
        v66 = sub_182C7B0(v38, v40, a1 + 2);
        v38 = qword_1C7F2C0;
        v39 = v66 >> 31;
LABEL_15:
        if ( !(_BYTE)v39 )
          goto LABEL_24;
LABEL_16:
        v11 = (__m128i *)((char *)v11 + 56);
      }
      if ( v11[1].m128i_i32[0] < *((_DWORD *)a1 + 4) )
        goto LABEL_16;
LABEL_24:
      v37 = (__m128i *)((char *)v37 - 56);
      while ( 2 )
      {
        v42 = v37 + 1;
        if ( (*((_BYTE *)a1 + 36) & 1) != 0
          || *((_DWORD *)a1 + 8) != 1
          || (v37[2].m128i_i8[4] & 1) != 0
          || v37[2].m128i_i32[0] != 1 )
        {
          LOBYTE(v41) = sub_1848D40(v38, a1 + 2, v42);
          goto LABEL_26;
        }
        if ( (*((_BYTE *)a1 + 20) & 1) != 0 || (v37[1].m128i_i8[4] & 1) != 0 )
        {
          v41 = (unsigned int)sub_182C7B0(v38, a1 + 2, v42) >> 31;
LABEL_26:
          if ( !(_BYTE)v41 )
            break;
          goto LABEL_27;
        }
        if ( *((_DWORD *)a1 + 4) < v37[1].m128i_i32[0] )
        {
LABEL_27:
          v38 = qword_1C7F2C0;
          v37 = (__m128i *)((char *)v37 - 56);
          continue;
        }
        break;
      }
      if ( v11 < v37 )
      {
        v43 = v11[2].m128i_i8[4];
        v44 = v11->m128i_i64[0];
        v11->m128i_i64[0] = 0;
        v45 = v37->m128i_i64[0];
        v46 = v11[1].m128i_i64[1];
        v47 = v11[2].m128i_i64[1];
        LOBYTE(v354) = v43;
        v48 = v11[3].m128i_i32[0];
        v49 = v11[1].m128i_i32[0];
        v388.m128i_i64[1] = v11->m128i_i64[1];
        v50 = v11[2].m128i_i32[0];
        v51 = v11[1].m128i_i8[4];
        v11[1].m128i_i64[1] = 0;
        v11[2].m128i_i64[1] = 0;
        v395 = v48;
        v11->m128i_i64[0] = v45;
        LOBYTE(v343) = v51 & 1;
        v11[1].m128i_i32[0] = v37[1].m128i_i32[0];
        v52 = v37[1].m128i_i64[1];
        v37[1].m128i_i32[0] = v49;
        v11[1].m128i_i64[1] = v52;
        v53 = v37[1].m128i_i8[4];
        v37[1].m128i_i64[1] = 0;
        v54 = v11[1].m128i_i8[4];
        v11[1].m128i_i8[4] = v53 & 2 | v54 & 0xFD;
        LOBYTE(v52) = v54 & 2 | v37[1].m128i_i8[4] & 0xFD;
        v37[1].m128i_i8[4] = v52;
        v55 = v11[1].m128i_i8[4];
        v11[1].m128i_i8[4] = v52 & 1 | v55 & 0xFE;
        v37[1].m128i_i8[4] = v55 & 1 | v37[1].m128i_i8[4] & 0xFE;
        LODWORD(v52) = v11[2].m128i_i32[0];
        v11[2].m128i_i32[0] = v37[2].m128i_i32[0];
        v56 = v37[2].m128i_i64[1];
        v37[2].m128i_i32[0] = v52;
        v57 = v11[2].m128i_i64[1];
        v11[2].m128i_i64[1] = v56;
        v58 = v37[2].m128i_i8[4];
        v37[2].m128i_i64[1] = v57;
        LOBYTE(v56) = v11[2].m128i_i8[4] & 2;
        v59 = v58 & 2 | v11[2].m128i_i8[4] & 0xFD;
        v11[2].m128i_i8[4] = v59;
        LOBYTE(v353) = v59 & 1;
        v11[2].m128i_i8[4] = v37[2].m128i_i8[4] & 1 | v59 & 0xFE;
        v11[3].m128i_i32[0] = v37[3].m128i_i32[0];
        LODWORD(v57) = v37[1].m128i_i32[0];
        v37->m128i_i64[0] = v44;
        v388.m128i_i64[0] = 0;
        v37[1].m128i_i32[0] = v49;
        v389 = v57;
        v60 = v37[1].m128i_i64[1];
        v37[1].m128i_i64[1] = v46;
        v391 = v60;
        LOBYTE(v60) = v37[1].m128i_i8[4] & 1 | v37[1].m128i_i8[4] & 2 | v390 & 0xFC;
        v37[1].m128i_i8[4] = v51 & 1 | v37[1].m128i_i8[4] & 0xFC | v51 & 2;
        v390 = v60;
        v61 = v37[2].m128i_i32[0];
        v37[2].m128i_i32[0] = v50;
        v392 = v61;
        v62 = v37[2].m128i_i64[1];
        v37[2].m128i_i64[1] = v47;
        v394 = v62;
        v63 = qword_1C7F2C0;
        LOBYTE(v56) = v59 & 1 | v56 | v393 & 0xFC;
        v37[2].m128i_i8[4] = v37[2].m128i_i8[4] & 0xFC | v354 & 3;
        v393 = v56;
        v37[3].m128i_i32[0] = v48;
        sub_182CBA0(v63, &v389);
        sub_182CBA0(v63, &v392);
        v64 = v388.m128i_i64[0];
        if ( v388.m128i_i64[0] )
        {
          v65 = v388.m128i_i64[1];
          v36 = (*(_DWORD *)(v388.m128i_i64[0] + 8))-- == 1;
          if ( v36 )
            sub_15D7BC0(v65, v64);
        }
        v11 = (__m128i *)((char *)v11 + 56);
        continue;
      }
      break;
    }
    sub_317B40(
      (int)v11,
      (int)v357,
      (int)v361,
      v31,
      v32,
      v33,
      v343,
      v353,
      v354,
      v357,
      (int)&v389,
      &v392,
      v361,
      v362,
      v363,
      v364,
      v365,
      v367,
      v369,
      v370,
      v371,
      v373,
      v374,
      v376,
      v377,
      v378,
      v379.m128i_i64[0],
      v379.m128i_i32[2],
      v380,
      v382,
      v383,
      v385,
      v386,
      v387,
      v388.m128i_i64[0]);
    result = (char *)v11 - (char *)a1;
    if ( (char *)v11 - (char *)a1 > 896 )
    {
      v357 = v11;
      continue;
    }
    return result;
  }
}

