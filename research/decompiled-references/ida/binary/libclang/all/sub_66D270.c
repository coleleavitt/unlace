__int64 __fastcall sub_66D270(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  char v7; // al
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // r12
  _QWORD *v15; // rbx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r12
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r12
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // r12
  _QWORD *v32; // rbx
  __int64 v33; // r12
  __int64 v34; // r13
  char v35; // al
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r12
  _QWORD *v39; // rax
  _QWORD *v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // r12
  _QWORD *v45; // rbx
  __int64 v46; // rsi
  __int64 v47; // rax
  _QWORD *v48; // rdx
  _QWORD *v49; // r12
  _QWORD *v50; // rbx
  __int64 v51; // rsi
  __int64 v52; // rax
  _QWORD *v53; // rdx
  _QWORD *v54; // r12
  _QWORD *v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // rax
  _QWORD *v58; // rdx
  _QWORD *v59; // r12
  _QWORD *v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rax
  _QWORD *v63; // rdx
  _QWORD *v64; // r12
  _QWORD *v65; // rbx
  char v66; // al
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // r12
  _QWORD *v70; // rax
  _QWORD *v71; // rbx
  __int64 v72; // rax
  _QWORD *v73; // rdx
  _QWORD *v74; // r12
  _QWORD *v75; // rbx
  char v76; // al
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // r12
  _QWORD *v80; // rax
  _QWORD *v81; // rbx
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // r12
  _QWORD *v85; // rax
  _QWORD *v86; // rbx
  __int64 v87; // rsi
  __int64 v88; // rax
  _QWORD *v89; // rdx
  _QWORD *v90; // r12
  _QWORD *v91; // rbx
  __int64 v92; // rsi
  __int64 v93; // rax
  _QWORD *v94; // rdx
  _QWORD *v95; // r12
  _QWORD *v96; // rbx
  _QWORD *v97; // rcx
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // r12
  _QWORD *v101; // rax
  _QWORD *v102; // rbx
  __int64 v103; // rsi
  __int64 v104; // rax
  _QWORD *v105; // rdx
  _QWORD *v106; // r12
  _QWORD *v107; // rbx
  char v108; // al
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // r12
  _QWORD *v112; // rax
  _QWORD *v113; // rbx
  __int64 v114; // rsi
  __int64 v115; // rax
  _QWORD *v116; // rdx
  _QWORD *v117; // r12
  _QWORD *v118; // rbx
  char v119; // al
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 v122; // r12
  _QWORD *v123; // rax
  _QWORD *v124; // rbx
  char v125; // al
  __int64 v126; // rsi
  __int64 v127; // rax
  __int64 v128; // r12
  _QWORD *v129; // rax
  _QWORD *v130; // rbx
  char v131; // al
  __int64 v132; // rsi
  __int64 v133; // rax
  __int64 v134; // r12
  _QWORD *v135; // rax
  _QWORD *v136; // rbx
  char v137; // al
  __int64 v138; // rsi
  __int64 v139; // rax
  __int64 v140; // r12
  _QWORD *v141; // rax
  _QWORD *v142; // rbx
  char v143; // al
  __int64 v144; // rsi
  __int64 v145; // rax
  _QWORD *v146; // rdx
  _QWORD *v147; // r12
  _QWORD *v148; // rbx
  __int64 v149; // rsi
  __int64 v150; // rax
  _QWORD *v151; // rdx
  _QWORD *v152; // r12
  _QWORD *v153; // rbx
  __int64 v154; // rsi
  __int64 v155; // rax
  _QWORD *v156; // rdx
  _QWORD *v157; // r12
  _QWORD *v158; // rbx
  __int64 v159; // rsi
  __int64 v160; // rax
  _QWORD *v161; // rdx
  _QWORD *v162; // r12
  _QWORD *v163; // rbx
  __int64 v164; // rax
  _QWORD *v165; // rdx
  _QWORD *v166; // r12
  _QWORD *v167; // rbx
  __int64 v168; // rax
  _QWORD *v169; // rdx
  _QWORD *v170; // r12
  _QWORD *v171; // rbx
  __int64 v172; // rax
  _QWORD *v173; // rdx
  _QWORD *v174; // r12
  _QWORD *v175; // rbx
  __int64 v176; // rax
  _QWORD *v177; // rdx
  _QWORD *v178; // r12
  _QWORD *v179; // rbx
  __int64 v180; // rax
  _QWORD *v181; // rdx
  _QWORD *v182; // r12
  _QWORD *v183; // rbx
  __int64 v184; // rax
  _QWORD *v185; // rdx
  _QWORD *v186; // r12
  _QWORD *v187; // rbx
  __int64 v188; // rsi
  __int64 v189; // rax
  _QWORD *v190; // rdx
  _QWORD *v191; // r12
  _QWORD *v192; // rbx
  char v193; // al
  __int64 v194; // rsi
  __int64 v195; // rax
  __int64 v196; // r12
  _QWORD *v197; // rax
  _QWORD *v198; // rbx
  char v199; // al
  __int64 v200; // rsi
  __int64 v201; // rax
  __int64 v202; // r12
  _QWORD *v203; // rax
  _QWORD *v204; // rbx
  char v205; // al
  __int64 v206; // rsi
  __int64 v207; // rax
  __int64 v208; // r12
  _QWORD *v209; // rax
  _QWORD *v210; // rbx
  char v211; // al
  __int64 v212; // rsi
  __int64 v213; // rax
  __int64 v214; // r12
  _QWORD *v215; // rax
  _QWORD *v216; // rbx
  __int64 v217; // rsi
  __int64 v218; // rax
  _QWORD *v219; // rdx
  _QWORD *v220; // r12
  _QWORD *v221; // rbx
  unsigned int *v222; // r12
  __int64 v223; // rax
  __int64 v224; // r13
  _QWORD *v225; // r12
  __int64 v226; // rsi
  __int64 v227; // rax
  _QWORD *v228; // rdx
  _QWORD *v229; // r12
  _QWORD *v230; // rbx
  __int64 v231; // rax
  _QWORD *v232; // rdx
  _QWORD *v233; // r12
  _QWORD *v234; // rbx
  __int64 v235; // rax
  _QWORD *v236; // r12
  __int64 v237; // rdx
  __int64 v238; // r13
  __int64 v239; // rax
  _QWORD *v240; // rdx
  _QWORD *v241; // r12
  _QWORD *v242; // rbx
  unsigned int *v243; // r12
  __int64 v244; // rax
  __int64 v245; // r13
  _QWORD *v246; // r12
  char v247; // al
  __int64 v248; // rsi
  __int64 v249; // rax
  __int64 v250; // r12
  _QWORD *v251; // rax
  _QWORD *v252; // rbx
  char v253; // al
  __int64 v254; // rsi
  __int64 v255; // rax
  __int64 v256; // r12
  _QWORD *v257; // rax
  _QWORD *v258; // rbx
  char v259; // al
  __int64 v260; // rsi
  __int64 v261; // rax
  __int64 v262; // r12
  _QWORD *v263; // rax
  _QWORD *v264; // rbx
  __int64 v265; // rsi
  __int64 v266; // rax
  _QWORD *v267; // rdx
  _QWORD *v268; // r12
  _QWORD *v269; // rbx
  __int64 v270; // rax
  __int64 v271; // rax
  _QWORD *v272; // rdx
  _QWORD *v273; // r12
  _QWORD *v274; // rbx
  __int64 v275; // rax
  __int64 v276; // rax
  _QWORD *v277; // rdx
  _QWORD *v278; // r12
  _QWORD *v279; // rbx
  __int64 v280; // rax
  _QWORD *v281; // rdx
  _QWORD *v282; // r12
  _QWORD *v283; // rbx
  __int64 v284; // rax
  __int64 v285; // r12
  _QWORD *v286; // rax
  _QWORD *v287; // rbx
  __int64 v288; // rsi
  __int64 v289; // rax
  _QWORD *v290; // rdx
  _QWORD *v291; // r12
  _QWORD *v292; // rbx
  __int64 v293; // rsi
  __int64 v294; // rax
  _QWORD *v295; // rdx
  _QWORD *v296; // r12
  _QWORD *v297; // rbx

  if ( a2 )
  {
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (*(_BYTE *)(a2 + 29) & 2) != 0 )
    {
      if ( v7 == 65 && (*(_BYTE *)(a2 + 60) & 4) != 0 )
        return sub_677500(a1, *(_QWORD *)(a2 + 88));
      return 1;
    }
    if ( v7 == 69 )
    {
      if ( (~(unsigned __int8)*(_QWORD *)(a2 + 40) & 7) == 0 )
      {
        v9 = *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !*(_DWORD *)v9 )
        {
          v10 = *(_QWORD *)(v9 + 16);
          if ( v10 )
          {
            if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x44 )
              return 1;
          }
        }
      }
      sub_65BD90(a1, a2, a3, a4, a5, a6);
      if ( (unsigned __int8)sub_673240(a1, *(_QWORD *)(a2 + 56))
        && (unsigned __int8)sub_66D270(a1, *(_QWORD *)(a2 + 48)) )
      {
        v11 = 0;
        if ( (unsigned __int8)sub_79B790(a2) )
          v11 = sub_79AC10(a2);
        if ( (unsigned __int8)sub_66F3A0(a1, v11) )
        {
          v12 = sub_6434A0(a2);
          v14 = v13;
          v15 = (_QWORD *)v12;
          if ( (_QWORD *)v12 == v13 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v15) )
          {
            if ( v14 == ++v15 )
              return 1;
          }
        }
      }
    }
    else
    {
      switch ( v7 )
      {
        case 0:
          return sub_679CA0();
        case 1:
          if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 72)) || !(unsigned __int8)sub_66F3A0(a1, a2 + 40) )
            return 0;
          v280 = sub_6434A0(a2);
          v282 = v281;
          v283 = (_QWORD *)v280;
          if ( (_QWORD *)v280 == v281 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v283) )
          {
            if ( v282 == ++v283 )
              return 1;
          }
          return 0;
        case 2:
        case 4:
        case 5:
        case 6:
          return sub_677FA0();
        case 3:
          v275 = sub_777E30(a2);
          if ( !(unsigned __int8)sub_672CC0(a1, v275) )
            return 0;
          v276 = sub_6434A0(a2);
          v278 = v277;
          v279 = (_QWORD *)v276;
          if ( (_QWORD *)v276 == v277 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v279) )
          {
            if ( v278 == ++v279 )
              return 1;
          }
          return 0;
        case 7:
          v270 = sub_777E30(a2);
          if ( !(unsigned __int8)sub_672CC0(a1, v270) )
            return 0;
          v271 = sub_6434A0(a2);
          v273 = v272;
          v274 = (_QWORD *)v271;
          if ( (_QWORD *)v271 == v272 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v274) )
          {
            if ( v273 == ++v274 )
              return 1;
          }
          return 0;
        case 8:
          return sub_6792E0();
        case 9:
          if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFFCLL)
            || !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 48)) )
          {
            return 0;
          }
          v265 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v265 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v265) )
            return 0;
          v266 = sub_6434A0(a2);
          v268 = v267;
          v269 = (_QWORD *)v266;
          if ( (_QWORD *)v266 == v267 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v269) )
          {
            if ( v268 == ++v269 )
              return 1;
          }
          return 0;
        case 10:
          v259 = sub_79B790(a2);
          v260 = 0;
          if ( v259 )
            v260 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v260) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v261 = sub_79A2B0(a2);
          v262 = *(_QWORD *)v261 + 8LL * *(unsigned int *)(v261 + 8);
          v263 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v263 = *(_QWORD **)sub_79A2B0(a2);
          if ( v263 == (_QWORD *)v262 )
            return 1;
          v264 = v263;
          while ( (unsigned __int8)sub_6777E0(a1, *v264) )
          {
            if ( (_QWORD *)v262 == ++v264 )
              return 1;
          }
          return 0;
        case 11:
          v253 = sub_79B790(a2);
          v254 = 0;
          if ( v253 )
            v254 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v254) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v255 = sub_79A2B0(a2);
          v256 = *(_QWORD *)v255 + 8LL * *(unsigned int *)(v255 + 8);
          v257 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v257 = *(_QWORD **)sub_79A2B0(a2);
          if ( v257 == (_QWORD *)v256 )
            return 1;
          v258 = v257;
          while ( (unsigned __int8)sub_6777E0(a1, *v258) )
          {
            if ( (_QWORD *)v256 == ++v258 )
              return 1;
          }
          return 0;
        case 12:
          v247 = sub_79B790(a2);
          v248 = 0;
          if ( v247 )
            v248 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v248) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v249 = sub_79A2B0(a2);
          v250 = *(_QWORD *)v249 + 8LL * *(unsigned int *)(v249 + 8);
          v251 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v251 = *(_QWORD **)sub_79A2B0(a2);
          if ( v251 == (_QWORD *)v250 )
            return 1;
          v252 = v251;
          while ( (unsigned __int8)sub_6777E0(a1, *v252) )
          {
            if ( (_QWORD *)v250 == ++v252 )
              return 1;
          }
          return 0;
        case 13:
          return sub_6793E0();
        case 14:
          v243 = *(unsigned int **)(a2 + 40);
          v244 = 2LL * *v243;
          v245 = (__int64)&v243[v244 + 4];
          v246 = v243 + 4;
          if ( !(v244 * 4) )
            goto LABEL_538;
          while ( (unsigned __int8)sub_675FE0(a1, *v246) )
          {
            if ( (_QWORD *)v245 == ++v246 )
            {
LABEL_538:
              v288 = 0;
              if ( (unsigned __int8)sub_79B790(a2) )
                v288 = sub_79AC10(a2);
              if ( (unsigned __int8)sub_66F3A0(a1, v288) )
              {
                v289 = sub_6434A0(a2);
                v291 = v290;
                v292 = (_QWORD *)v289;
                if ( (_QWORD *)v289 == v290 )
                  return 1;
                while ( (unsigned __int8)sub_6777E0(a1, *v292) )
                {
                  if ( v291 == ++v292 )
                    return 1;
                }
              }
              return 0;
            }
          }
          return 0;
        case 15:
          return sub_6794C0();
        case 16:
          return sub_679E90();
        case 17:
          return sub_678030();
        case 18:
          return sub_678E70();
        case 19:
          return sub_6781E0();
        case 20:
          if ( !(unsigned __int8)sub_66F3A0(a1, a2 + 48) )
            return 0;
          v239 = sub_6434A0(a2);
          v241 = v240;
          v242 = (_QWORD *)v239;
          if ( (_QWORD *)v239 == v240 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v242) )
          {
            if ( v241 == ++v242 )
              return 1;
          }
          return 0;
        case 21:
          sub_66B300(a1, a2, a3, *(double *)a4.m128i_i64, a5, a6);
          v235 = *(_QWORD *)(a2 + 96);
          if ( !v235 )
            goto LABEL_529;
          v236 = (_QWORD *)(v235 + 16);
          v237 = 8LL * *(unsigned int *)(v235 + 8);
          v238 = v235 + v237 + 16;
          if ( !v237 )
            goto LABEL_529;
          while ( (unsigned __int8)sub_678D90(a1, *v236) )
          {
            if ( (_QWORD *)v238 == ++v236 )
            {
LABEL_529:
              if ( !(unsigned __int8)sub_66F3A0(a1, a2 + 48) )
                return 0;
              if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
              {
                v284 = sub_79A2B0(a2);
                v285 = *(_QWORD *)v284 + 8LL * *(unsigned int *)(v284 + 8);
                v286 = nullptr;
                if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
                  v286 = *(_QWORD **)sub_79A2B0(a2);
                if ( v286 != (_QWORD *)v285 )
                {
                  v287 = v286;
                  while ( (unsigned __int8)sub_6777E0(a1, *v287) )
                  {
                    if ( (_QWORD *)v285 == ++v287 )
                      return 1;
                  }
                  return 0;
                }
              }
              return 1;
            }
          }
          return 0;
        case 22:
          sub_667300(a1, a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, a2 + 48) )
            return 0;
          v231 = sub_6434A0(a2);
          v233 = v232;
          v234 = (_QWORD *)v231;
          if ( (_QWORD *)v231 == v232 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v234) )
          {
            if ( v233 == ++v234 )
              return 1;
          }
          return 0;
        case 23:
          if ( !(unsigned __int8)sub_66F3A0(a1, a2 + 48) )
            return 0;
          v227 = sub_6434A0(a2);
          v229 = v228;
          v230 = (_QWORD *)v227;
          if ( (_QWORD *)v227 == v228 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v230) )
          {
            if ( v229 == ++v230 )
              return 1;
          }
          return 0;
        case 24:
          if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 88)) )
            return 0;
          v226 = *(_QWORD *)(a2 + 96);
          if ( v226 )
          {
            if ( !(unsigned __int8)sub_672CC0(a1, v226) )
              return 0;
          }
          return sub_673340(a1, *(_QWORD *)(a2 + 48));
        case 25:
          v222 = *(unsigned int **)(a2 + 56);
          v223 = 2LL * *v222;
          v224 = (__int64)&v222[v223 + 4];
          v225 = v222 + 4;
          if ( !(v223 * 4) )
            return sub_673340(a1, *(_QWORD *)(a2 + 48));
          while ( (unsigned __int8)sub_675FE0(a1, *v225) )
          {
            if ( (_QWORD *)v224 == ++v225 )
              return sub_673340(a1, *(_QWORD *)(a2 + 48));
          }
          return 0;
        case 26:
          if ( !(unsigned __int8)sub_674510(a1, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72))
            || !(unsigned __int8)sub_675910(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 80)) )
          {
            return 0;
          }
          v217 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v217 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v217) )
            return 0;
          v218 = sub_6434A0(a2);
          v220 = v219;
          v221 = (_QWORD *)v218;
          if ( (_QWORD *)v218 == v219 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v221) )
          {
            if ( v220 == ++v221 )
              return 1;
          }
          return 0;
        case 27:
          v211 = sub_79B790(a2);
          v212 = 0;
          if ( v211 )
            v212 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v212) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v213 = sub_79A2B0(a2);
          v214 = *(_QWORD *)v213 + 8LL * *(unsigned int *)(v213 + 8);
          v215 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v215 = *(_QWORD **)sub_79A2B0(a2);
          if ( v215 == (_QWORD *)v214 )
            return 1;
          v216 = v215;
          while ( (unsigned __int8)sub_6777E0(a1, *v216) )
          {
            if ( (_QWORD *)v214 == ++v216 )
              return 1;
          }
          return 0;
        case 28:
          v205 = sub_79B790(a2);
          v206 = 0;
          if ( v205 )
            v206 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v206) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v207 = sub_79A2B0(a2);
          v208 = *(_QWORD *)v207 + 8LL * *(unsigned int *)(v207 + 8);
          v209 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v209 = *(_QWORD **)sub_79A2B0(a2);
          if ( v209 == (_QWORD *)v208 )
            return 1;
          v210 = v209;
          while ( (unsigned __int8)sub_6777E0(a1, *v210) )
          {
            if ( (_QWORD *)v208 == ++v210 )
              return 1;
          }
          return 0;
        case 29:
          v199 = sub_79B790(a2);
          v200 = 0;
          if ( v199 )
            v200 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v200) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v201 = sub_79A2B0(a2);
          v202 = *(_QWORD *)v201 + 8LL * *(unsigned int *)(v201 + 8);
          v203 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v203 = *(_QWORD **)sub_79A2B0(a2);
          if ( v203 == (_QWORD *)v202 )
            return 1;
          v204 = v203;
          while ( (unsigned __int8)sub_6777E0(a1, *v204) )
          {
            if ( (_QWORD *)v202 == ++v204 )
              return 1;
          }
          return 0;
        case 30:
          v193 = sub_79B790(a2);
          v194 = 0;
          if ( v193 )
            v194 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v194) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v195 = sub_79A2B0(a2);
          v196 = *(_QWORD *)v195 + 8LL * *(unsigned int *)(v195 + 8);
          v197 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v197 = *(_QWORD **)sub_79A2B0(a2);
          if ( v197 == (_QWORD *)v196 )
            return 1;
          v198 = v197;
          while ( (unsigned __int8)sub_6777E0(a1, *v198) )
          {
            if ( (_QWORD *)v196 == ++v198 )
              return 1;
          }
          return 0;
        case 31:
          if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 72)) )
            return 0;
          v188 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v188 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v188) )
            return 0;
          v189 = sub_6434A0(a2);
          v191 = v190;
          v192 = (_QWORD *)v189;
          if ( (_QWORD *)v189 == v190 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v192) )
          {
            if ( v191 == ++v192 )
              return 1;
          }
          return 0;
        case 32:
          sub_666710(a1, a2, a3, a4, a5, a6);
          if ( !(unsigned __int8)sub_6759A0(a1, a2) )
            return 0;
          v184 = sub_6434A0(a2);
          v186 = v185;
          v187 = (_QWORD *)v184;
          if ( (_QWORD *)v184 == v185 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v187) )
          {
            if ( v186 == ++v187 )
              return 1;
          }
          return 0;
        case 33:
          sub_6650E0(a1, a2, a3, a4, a5, a6);
          if ( !(unsigned __int8)sub_6759A0(a1, a2) )
            return 0;
          v180 = sub_6434A0(a2);
          v182 = v181;
          v183 = (_QWORD *)v180;
          if ( (_QWORD *)v180 == v181 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v183) )
          {
            if ( v182 == ++v183 )
              return 1;
          }
          return 0;
        case 34:
          sub_6650E0(a1, a2, a3, a4, a5, a6);
          sub_664010(a1, a2, a3, *(double *)a4.m128i_i64, a5, a6);
          if ( !(unsigned __int8)sub_6759A0(a1, a2) )
            return 0;
          v176 = sub_6434A0(a2);
          v178 = v177;
          v179 = (_QWORD *)v176;
          if ( (_QWORD *)v176 == v177 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v179) )
          {
            if ( v178 == ++v179 )
              return 1;
          }
          return 0;
        case 35:
          sub_6650E0(a1, a2, a3, a4, a5, a6);
          sub_6630A0(a1, a2, a3, a4, a5, a6);
          if ( !(unsigned __int8)sub_6759A0(a1, a2) )
            return 0;
          v172 = sub_6434A0(a2);
          v174 = v173;
          v175 = (_QWORD *)v172;
          if ( (_QWORD *)v172 == v173 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v175) )
          {
            if ( v174 == ++v175 )
              return 1;
          }
          return 0;
        case 36:
          sub_6650E0(a1, a2, a3, a4, a5, a6);
          sub_6627C0(a1, a2, a3, *(double *)a4.m128i_i64, a5, a6);
          if ( !(unsigned __int8)sub_6759A0(a1, a2) )
            return 0;
          v168 = sub_6434A0(a2);
          v170 = v169;
          v171 = (_QWORD *)v168;
          if ( (_QWORD *)v168 == v169 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v171) )
          {
            if ( v170 == ++v171 )
              return 1;
          }
          return 0;
        case 37:
          sub_666710(a1, a2, a3, a4, a5, a6);
          if ( !(unsigned __int8)sub_6759A0(a1, a2) )
            return 0;
          v164 = sub_6434A0(a2);
          v166 = v165;
          v167 = (_QWORD *)v164;
          if ( (_QWORD *)v164 == v165 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v167) )
          {
            if ( v166 == ++v167 )
              return 1;
          }
          return 0;
        case 38:
          sub_661FA0(a1, a2);
          if ( !(unsigned __int8)sub_674A70(a1, a2) )
            return 0;
          v159 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v159 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v159) )
            return 0;
          v160 = sub_6434A0(a2);
          v162 = v161;
          v163 = (_QWORD *)v160;
          if ( (_QWORD *)v160 == v161 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v163) )
          {
            if ( v162 == ++v163 )
              return 1;
          }
          return 0;
        case 39:
          return sub_6795E0();
        case 40:
          return sub_679750();
        case 41:
          return sub_679870();
        case 42:
          sub_661FA0(a1, a2);
          if ( !(unsigned __int8)sub_674A70(a1, a2) )
            return 0;
          v154 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v154 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v154) )
            return 0;
          v155 = sub_6434A0(a2);
          v157 = v156;
          v158 = (_QWORD *)v155;
          if ( (_QWORD *)v155 == v156 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v158) )
          {
            if ( v157 == ++v158 )
              return 1;
          }
          return 0;
        case 43:
          sub_661FA0(a1, a2);
          if ( !(unsigned __int8)sub_674A70(a1, a2) )
            return 0;
          v149 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v149 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v149) )
            return 0;
          v150 = sub_6434A0(a2);
          v152 = v151;
          v153 = (_QWORD *)v150;
          if ( (_QWORD *)v150 == v151 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v153) )
          {
            if ( v152 == ++v153 )
              return 1;
          }
          return 0;
        case 44:
          return sub_679FD0();
        case 45:
          return sub_678400();
        case 46:
          if ( !(unsigned __int8)sub_674990() )
            return 0;
          v143 = sub_79B790(a2);
          v144 = 0;
          if ( v143 )
            v144 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v144) )
            return 0;
          v145 = sub_6434A0(a2);
          v147 = v146;
          v148 = (_QWORD *)v145;
          if ( (_QWORD *)v145 == v146 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v148) )
          {
            if ( v147 == ++v148 )
              return 1;
          }
          return 0;
        case 47:
          return sub_6799B0();
        case 48:
          return sub_679AE0();
        case 49:
          return sub_679BC0();
        case 50:
          v137 = sub_79B790(a2);
          v138 = 0;
          if ( v137 )
            v138 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v138) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v139 = sub_79A2B0(a2);
          v140 = *(_QWORD *)v139 + 8LL * *(unsigned int *)(v139 + 8);
          v141 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v141 = *(_QWORD **)sub_79A2B0(a2);
          if ( v141 == (_QWORD *)v140 )
            return 1;
          v142 = v141;
          while ( (unsigned __int8)sub_6777E0(a1, *v142) )
          {
            if ( (_QWORD *)v140 == ++v142 )
              return 1;
          }
          return 0;
        case 51:
          v131 = sub_79B790(a2);
          v132 = 0;
          if ( v131 )
            v132 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v132) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v133 = sub_79A2B0(a2);
          v134 = *(_QWORD *)v133 + 8LL * *(unsigned int *)(v133 + 8);
          v135 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v135 = *(_QWORD **)sub_79A2B0(a2);
          if ( v135 == (_QWORD *)v134 )
            return 1;
          v136 = v135;
          while ( (unsigned __int8)sub_6777E0(a1, *v136) )
          {
            if ( (_QWORD *)v134 == ++v136 )
              return 1;
          }
          return 0;
        case 52:
          v125 = sub_79B790(a2);
          v126 = 0;
          if ( v125 )
            v126 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v126) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v127 = sub_79A2B0(a2);
          v128 = *(_QWORD *)v127 + 8LL * *(unsigned int *)(v127 + 8);
          v129 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v129 = *(_QWORD **)sub_79A2B0(a2);
          if ( v129 == (_QWORD *)v128 )
            return 1;
          v130 = v129;
          while ( (unsigned __int8)sub_6777E0(a1, *v130) )
          {
            if ( (_QWORD *)v128 == ++v130 )
              return 1;
          }
          return 0;
        case 53:
          v119 = sub_79B790(a2);
          v120 = 0;
          if ( v119 )
            v120 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v120) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v121 = sub_79A2B0(a2);
          v122 = *(_QWORD *)v121 + 8LL * *(unsigned int *)(v121 + 8);
          v123 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v123 = *(_QWORD **)sub_79A2B0(a2);
          if ( v123 == (_QWORD *)v122 )
            return 1;
          v124 = v123;
          while ( (unsigned __int8)sub_6777E0(a1, *v124) )
          {
            if ( (_QWORD *)v122 == ++v124 )
              return 1;
          }
          return 0;
        case 54:
          if ( !(unsigned __int8)sub_674510(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64)) )
            return 0;
          v114 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v114 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v114) )
            return 0;
          v115 = sub_6434A0(a2);
          v117 = v116;
          v118 = (_QWORD *)v115;
          if ( (_QWORD *)v115 == v116 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v118) )
          {
            if ( v117 == ++v118 )
              return 1;
          }
          return 0;
        case 55:
          v108 = sub_79B790(a2);
          v109 = 0;
          if ( v108 )
            v109 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v109) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v110 = sub_79A2B0(a2);
          v111 = *(_QWORD *)v110 + 8LL * *(unsigned int *)(v110 + 8);
          v112 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v112 = *(_QWORD **)sub_79A2B0(a2);
          if ( v112 == (_QWORD *)v111 )
            return 1;
          v113 = v112;
          while ( (unsigned __int8)sub_6777E0(a1, *v113) )
          {
            if ( (_QWORD *)v111 == ++v113 )
              return 1;
          }
          return 0;
        case 56:
          return sub_678590();
        case 57:
          return sub_678790();
        case 58:
          return sub_678910();
        case 59:
          return sub_678A60();
        case 60:
          return sub_678B70();
        case 61:
          if ( !(unsigned __int8)sub_674510(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80)) )
            return 0;
          v103 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v103 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v103) )
            return 0;
          v104 = sub_6434A0(a2);
          v106 = v105;
          v107 = (_QWORD *)v104;
          if ( (_QWORD *)v104 == v105 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v107) )
          {
            if ( v106 == ++v107 )
              return 1;
          }
          return 0;
        case 62:
          sub_65A2A0(a1, a2);
          v97 = (_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
            v97 = (_QWORD *)*v97;
          if ( !(unsigned __int8)sub_673BB0(a1, *v97, v97 + 1) )
            return 0;
          v98 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v98 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v98) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v99 = sub_79A2B0(a2);
          v100 = *(_QWORD *)v99 + 8LL * *(unsigned int *)(v99 + 8);
          v101 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v101 = *(_QWORD **)sub_79A2B0(a2);
          v102 = v101;
          if ( v101 == (_QWORD *)v100 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v102) )
          {
            if ( (_QWORD *)v100 == ++v102 )
              return 1;
          }
          return 0;
        case 63:
          return sub_678CC0();
        case 64:
          return sub_678D90(a1, a2);
        case 65:
          return sub_679130();
        case 66:
          return sub_67A0C0();
        case 67:
          sub_65C9F0(a1, a2, a3, *(double *)a4.m128i_i64, a5, a6);
          if ( !(unsigned __int8)sub_673240(a1, *(_QWORD *)(a2 + 56))
            || !(unsigned __int8)sub_66D270(a1, *(_QWORD *)(a2 + 48)) )
          {
            return 0;
          }
          v61 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v61 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v61) )
            return 0;
          v62 = sub_6434A0(a2);
          v64 = v63;
          v65 = (_QWORD *)v62;
          if ( (_QWORD *)v62 == v63 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v65) )
          {
            if ( v64 == ++v65 )
              return 1;
          }
          return 0;
        case 68:
          if ( !(unsigned __int8)sub_66D270(a1, *(_QWORD *)(a2 + 48))
            || !(unsigned __int8)sub_673240(a1, *(_QWORD *)(a2 + 56)) )
          {
            return 0;
          }
          v56 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v56 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v56) )
            return 0;
          v57 = sub_6434A0(a2);
          v59 = v58;
          v60 = (_QWORD *)v57;
          if ( (_QWORD *)v57 == v58 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v60) )
          {
            if ( v59 == ++v60 )
              return 1;
          }
          return 0;
        case 70:
          if ( !(unsigned __int8)sub_673240(a1, *(_QWORD *)(a2 + 56))
            || !(unsigned __int8)sub_66D270(a1, *(_QWORD *)(a2 + 48)) )
          {
            return 0;
          }
          v51 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v51 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v51) )
            return 0;
          v52 = sub_6434A0(a2);
          v54 = v53;
          v55 = (_QWORD *)v52;
          if ( (_QWORD *)v52 == v53 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v55) )
          {
            if ( v54 == ++v55 )
              return 1;
          }
          return 0;
        case 71:
          sub_65AF40(a1, a2);
          if ( !(unsigned __int8)sub_673240(a1, *(_QWORD *)(a2 + 56))
            || !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 64)) )
          {
            return 0;
          }
          v46 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v46 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v46) )
            return 0;
          v47 = sub_6434A0(a2);
          v49 = v48;
          v50 = (_QWORD *)v47;
          if ( (_QWORD *)v47 == v48 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v50) )
          {
            if ( v49 == ++v50 )
              return 1;
          }
          return 0;
        case 72:
          if ( !(unsigned __int8)sub_673240(a1, *(_QWORD *)(a2 + 56)) )
            return 0;
          v41 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v41 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v41) )
            return 0;
          v42 = sub_6434A0(a2);
          v44 = v43;
          v45 = (_QWORD *)v42;
          if ( (_QWORD *)v42 == v43 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v45) )
          {
            if ( v44 == ++v45 )
              return 1;
          }
          return 0;
        case 73:
          v82 = *(_QWORD **)(a2 + 64);
          if ( v82 )
          {
            if ( !(unsigned __int8)sub_673BB0(a1, *v82, v82 + 1) )
              return 0;
          }
          else if ( !(unsigned __int8)sub_673340(a1, *(_QWORD *)(a2 + 56)) )
          {
            return 0;
          }
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v83 = sub_79A2B0(a2);
          v84 = *(_QWORD *)v83 + 8LL * *(unsigned int *)(v83 + 8);
          v85 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v85 = *(_QWORD **)sub_79A2B0(a2);
          if ( v85 == (_QWORD *)v84 )
            return 1;
          v86 = v85;
          while ( (unsigned __int8)sub_6777E0(a1, *v86) )
          {
            if ( (_QWORD *)v84 == ++v86 )
              return 1;
          }
          return 0;
        case 74:
          v76 = sub_79B790(a2);
          v77 = 0;
          if ( v76 )
            v77 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v77) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v78 = sub_79A2B0(a2);
          v79 = *(_QWORD *)v78 + 8LL * *(unsigned int *)(v78 + 8);
          v80 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v80 = *(_QWORD **)sub_79A2B0(a2);
          if ( v80 == (_QWORD *)v79 )
            return 1;
          v81 = v80;
          while ( (unsigned __int8)sub_6777E0(a1, *v81) )
          {
            if ( (_QWORD *)v79 == ++v81 )
              return 1;
          }
          return 0;
        case 75:
          if ( !(unsigned __int8)sub_674510(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80)) )
            return 0;
          v72 = sub_6434A0(a2);
          v74 = v73;
          v75 = (_QWORD *)v72;
          if ( (_QWORD *)v72 == v73 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v75) )
          {
            if ( v74 == ++v75 )
              return 1;
          }
          return 0;
        case 76:
          v66 = sub_79B790(a2);
          v67 = 0;
          if ( v66 )
            v67 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v67) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v68 = sub_79A2B0(a2);
          v69 = *(_QWORD *)v68 + 8LL * *(unsigned int *)(v68 + 8);
          v70 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v70 = *(_QWORD **)sub_79A2B0(a2);
          if ( v70 == (_QWORD *)v69 )
            return 1;
          v71 = v70;
          while ( (unsigned __int8)sub_6777E0(a1, *v71) )
          {
            if ( (_QWORD *)v69 == ++v71 )
              return 1;
          }
          return 0;
        case 77:
          if ( !(unsigned __int8)sub_673BB0(a1, **(_QWORD **)(a2 + 64), *(_QWORD *)(a2 + 64) + 8LL) )
            return 0;
          v92 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v92 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v92) )
            return 0;
          v93 = sub_6434A0(a2);
          v95 = v94;
          v96 = (_QWORD *)v93;
          if ( (_QWORD *)v93 == v94 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v96) )
          {
            if ( v95 == ++v96 )
              return 1;
          }
          return 0;
        case 78:
          if ( !(unsigned __int8)sub_674510(a1, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72))
            || !(unsigned __int8)sub_675910(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 80)) )
          {
            return 0;
          }
          v87 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v87 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v87) )
            return 0;
          v88 = sub_6434A0(a2);
          v90 = v89;
          v91 = (_QWORD *)v88;
          if ( (_QWORD *)v88 == v89 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v91) )
          {
            if ( v90 == ++v91 )
              return 1;
          }
          return 0;
        case 79:
          return sub_677EF0();
        case 80:
          v35 = sub_79B790(a2);
          v36 = 0;
          if ( v35 )
            v36 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v36) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v37 = sub_79A2B0(a2);
          v38 = *(_QWORD *)v37 + 8LL * *(unsigned int *)(v37 + 8);
          v39 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v39 = *(_QWORD **)sub_79A2B0(a2);
          if ( v39 == (_QWORD *)v38 )
            return 1;
          v40 = v39;
          while ( (unsigned __int8)sub_6777E0(a1, *v40) )
          {
            if ( (_QWORD *)v38 == ++v40 )
              return 1;
          }
          return 0;
        case 81:
          v33 = a2 + 40;
          v34 = a2 + 40 + 24LL * *(unsigned int *)(a2 + 36);
          if ( a2 + 40 == v34 )
            goto LABEL_546;
          while ( (unsigned __int8)sub_673AC0(a1, v33) )
          {
            v33 += 24;
            if ( v34 == v33 )
            {
LABEL_546:
              v293 = 0;
              if ( (unsigned __int8)sub_79B790(a2) )
                v293 = sub_79AC10(a2);
              if ( (unsigned __int8)sub_66F3A0(a1, v293) )
              {
                v294 = sub_6434A0(a2);
                v296 = v295;
                v297 = (_QWORD *)v294;
                if ( (_QWORD *)v294 == v295 )
                  return 1;
                while ( (unsigned __int8)sub_6777E0(a1, *v297) )
                {
                  if ( v296 == ++v297 )
                    return 1;
                }
              }
              return 0;
            }
          }
          return 0;
        case 82:
          return sub_67A250();
        case 83:
          return sub_67A3B0();
        case 84:
          if ( !(unsigned __int8)sub_672CC0(a1, *(_QWORD *)(a2 + 40)) )
            return 0;
          v28 = 0;
          if ( (unsigned __int8)sub_79B790(a2) )
            v28 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v28) )
            return 0;
          v29 = sub_6434A0(a2);
          v31 = v30;
          v32 = (_QWORD *)v29;
          if ( (_QWORD *)v29 == v30 )
            return 1;
          while ( (unsigned __int8)sub_6777E0(a1, *v32) )
          {
            if ( v31 == ++v32 )
              return 1;
          }
          return 0;
        case 85:
          v22 = sub_79B790(a2);
          v23 = 0;
          if ( v22 )
            v23 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v23) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v24 = sub_79A2B0(a2);
          v25 = *(_QWORD *)v24 + 8LL * *(unsigned int *)(v24 + 8);
          v26 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v26 = *(_QWORD **)sub_79A2B0(a2);
          if ( v26 == (_QWORD *)v25 )
            return 1;
          v27 = v26;
          while ( (unsigned __int8)sub_6777E0(a1, *v27) )
          {
            if ( (_QWORD *)v25 == ++v27 )
              return 1;
          }
          return 0;
        case 86:
          v16 = sub_79B790(a2);
          v17 = 0;
          if ( v16 )
            v17 = sub_79AC10(a2);
          if ( !(unsigned __int8)sub_66F3A0(a1, v17) )
            return 0;
          if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
            return 1;
          v18 = sub_79A2B0(a2);
          v19 = *(_QWORD *)v18 + 8LL * *(unsigned int *)(v18 + 8);
          v20 = nullptr;
          if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
            v20 = *(_QWORD **)sub_79A2B0(a2);
          if ( v20 == (_QWORD *)v19 )
            return 1;
          v21 = v20;
          break;
        default:
          return 1;
      }
      while ( (unsigned __int8)sub_6777E0(a1, *v21) )
      {
        if ( (_QWORD *)v19 == ++v21 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}

