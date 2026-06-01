/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DB210
// Address: 0x00000000000DB210

//----- (00000000000DB210) ----------------------------------------------------
__int64 __fastcall sub_DB210(__int64 a1)
{
  unsigned __int8 *v1; // x8
  unsigned __int8 *v2; // x22
  unsigned __int64 v4; // x9
  int v5; // w10
  unsigned __int64 v6; // x8
  int v7; // w10
  unsigned __int64 v8; // x10
  int v9; // w10
  unsigned __int64 v10; // x8
  unsigned int v11; // w8
  __int64 v12; // x0
  unsigned __int8 *v13; // x23
  unsigned __int8 *v14; // x10
  unsigned __int8 *v15; // x9
  unsigned __int8 *v16; // x10
  __int64 v17; // x24
  __int64 v18; // x0
  _QWORD *v19; // x20
  __int64 v20; // x21
  _QWORD *v21; // x8
  __int64 v22; // x9
  _QWORD *v23; // x0
  char *v24; // x20
  const char *v25; // x12
  __int64 v26; // x20
  char *v27; // x8
  __int64 v28; // x0
  _QWORD *v29; // x20
  _QWORD *v30; // x8
  __int64 v31; // x9
  _QWORD *v32; // x0
  char *v33; // x20
  __int128 v34; // q0
  __int64 v35; // x0
  __int64 v36; // x21
  __int64 v37; // x0
  _QWORD *v38; // x20
  __int64 v39; // x22
  _QWORD *v40; // x8
  __int64 v41; // x9
  _QWORD *v42; // x0
  char v43; // w8
  char *v44; // x20
  __int64 v45; // x0
  _QWORD *v46; // x20
  __int64 v47; // x21
  _QWORD *v48; // x8
  __int64 v49; // x9
  _QWORD *v50; // x0
  __int64 v51; // x10
  char *v52; // x20
  __int64 (__fastcall **v53)(); // x9
  char v54; // w11
  __int64 v55; // x0
  _QWORD *v56; // x20
  __int64 v57; // x9
  _QWORD *v58; // x0
  __int64 v59; // x0
  _QWORD *v60; // x20
  __int64 v61; // x9
  _QWORD *v62; // x0
  char v63; // w8
  unsigned int v64; // w8
  __int64 *v65; // x8
  _BYTE *v66; // x21
  size_t v67; // x23
  __int64 v68; // x25
  __int64 v69; // x24
  char *v70; // x22
  char *v71; // x0
  _QWORD *v72; // x20
  _QWORD *v73; // x8
  __int64 v74; // x9
  _QWORD *v75; // x0
  __int64 v76; // x10
  char *v77; // x20
  char *v78; // x12
  _QWORD *v79; // x20
  _QWORD *v80; // x8
  __int64 v81; // x9
  _QWORD *v82; // x0
  __int64 v83; // x10
  char *v84; // x20
  _QWORD *v85; // x20
  __int64 v86; // x9
  _QWORD *v87; // x0
  _QWORD *v88; // x20
  _QWORD *v89; // x8
  __int64 v90; // x9
  _QWORD *v91; // x0
  char *v92; // x20
  char *v93; // x8
  _QWORD *v94; // x20
  __int64 v95; // x9
  _QWORD *v96; // x0
  _QWORD *v97; // x20
  _QWORD *v98; // x8
  __int64 v99; // x9
  _QWORD *v100; // x0
  __int64 v101; // x10
  char *v102; // x20
  _QWORD *v103; // x20
  _QWORD *v104; // x8
  __int64 v105; // x9
  _QWORD *v106; // x0
  __int64 v107; // x10
  char *v108; // x20
  _QWORD *v109; // x20
  _QWORD *v110; // x8
  __int64 v111; // x9
  _QWORD *v112; // x0
  __int64 v113; // x10
  char *v114; // x20
  _QWORD *v115; // x20
  _QWORD *v116; // x8
  __int64 v117; // x9
  _QWORD *v118; // x0
  __int64 v119; // x10
  char *v120; // x20
  _QWORD *v121; // x20
  _QWORD *v122; // x8
  __int64 v123; // x9
  _QWORD *v124; // x0
  char *v125; // x20
  _QWORD *v126; // x20
  __int64 v127; // x9
  _QWORD *v128; // x0
  _QWORD *v129; // x20
  __int64 v130; // x9
  _QWORD *v131; // x0
  _QWORD *v132; // x20
  _QWORD *v133; // x8
  __int64 v134; // x9
  _QWORD *v135; // x0
  __int64 v136; // x10
  char *v137; // x20
  _QWORD *v138; // x20
  _QWORD *v139; // x8
  __int64 v140; // x9
  _QWORD *v141; // x0
  char *v142; // x20
  _QWORD *v143; // x20
  __int64 v144; // x9
  _QWORD *v145; // x0
  _QWORD *v146; // x20
  _QWORD *v147; // x8
  __int64 v148; // x9
  _QWORD *v149; // x0
  __int64 v150; // x10
  char *v151; // x20
  unsigned __int8 *v152; // x9
  __int64 v153; // x10
  unsigned __int8 *v154; // x11
  unsigned __int64 v155; // x10
  _QWORD *v156; // x20
  __int64 v157; // x9
  _QWORD *v158; // x0
  _QWORD *v159; // x20
  _QWORD *v160; // x8
  __int64 v161; // x9
  _QWORD *v162; // x0
  char *v163; // x20
  _QWORD *v164; // x20
  _QWORD *v165; // x8
  __int64 v166; // x9
  _QWORD *v167; // x0
  __int64 v168; // x10
  char *v169; // x20
  _QWORD *v170; // x20
  _QWORD *v171; // x8
  __int64 v172; // x9
  _QWORD *v173; // x0
  char *v174; // x20
  _QWORD *v175; // x20
  __int64 v176; // x9
  _QWORD *v177; // x0
  __int128 v178; // q0
  char *v180; // x0
  _QWORD *v181; // x22
  char *v182; // x21
  _QWORD *v183; // x8
  __int64 v184; // x9
  _QWORD *v185; // x0
  __int64 v186; // x10
  __int64 v187; // x9
  __int64 v188; // x0
  _QWORD *v189; // x20
  __int64 v190; // x21
  _QWORD *v191; // x8
  __int64 v192; // x9
  _QWORD *v193; // x0
  char *v194; // x20
  char *v195; // x0
  unsigned __int8 *v196; // x8
  char *v197; // x21
  __int64 v198; // x0
  _QWORD *v199; // x20
  __int64 v200; // x22
  _QWORD *v201; // x8
  __int64 v202; // x9
  _QWORD *v203; // x0
  char *v204; // x20
  unsigned __int8 *v205; // x21
  _QWORD *v206; // x20
  _QWORD *v207; // x8
  __int64 v208; // x9
  _QWORD *v209; // x0
  char *v210; // x20
  unsigned __int8 *v211; // x22
  __int64 v212; // x0
  _QWORD *v213; // x20
  __int64 v214; // x21
  _QWORD *v215; // x8
  __int64 v216; // x9
  _QWORD *v217; // x0
  char *v218; // x20
  unsigned __int8 *v219; // x8
  __int64 v220; // x9
  _QWORD *v221; // x20
  __int64 v222; // x9
  _QWORD *v223; // x0
  _QWORD *v224; // x20
  __int64 v225; // x9
  _QWORD *v226; // x0
  _QWORD *v227; // x20
  __int64 v228; // x9
  _QWORD *v229; // x0
  _QWORD *v230; // x20
  __int64 v231; // x9
  _QWORD *v232; // x0
  _QWORD *v233; // x20
  __int64 v234; // x9
  _QWORD *v235; // x0
  _QWORD *v236; // x20
  __int64 v237; // x9
  _QWORD *v238; // x0
  _QWORD *v239; // x20
  __int64 v240; // x9
  _QWORD *v241; // x0
  _QWORD *v242; // x20
  __int64 v243; // x9
  _QWORD *v244; // x0
  __int64 v245; // x0
  _QWORD *v246; // x20
  __int64 v247; // x21
  _QWORD *v248; // x8
  __int64 v249; // x9
  _QWORD *v250; // x0
  char *v251; // x20
  _QWORD *v252; // x20
  __int64 v253; // x9
  _QWORD *v254; // x0
  unsigned __int8 *v255; // x9
  unsigned __int8 *v256; // x11
  unsigned __int8 *v257; // x10
  unsigned __int8 *v258; // x22
  unsigned __int8 *v259; // x23
  __int64 v260; // x0
  _QWORD *v261; // x20
  __int64 v262; // x21
  _QWORD *v263; // x8
  __int64 v264; // x9
  _QWORD *v265; // x0
  char *v266; // x20
  char *v267; // x0
  unsigned __int8 *v268; // x8
  char *v269; // x21
  __int64 v270; // x0
  _QWORD *v271; // x20
  __int64 v272; // x22
  _QWORD *v273; // x8
  __int64 v274; // x9
  _QWORD *v275; // x0
  char *v276; // x20
  _QWORD *v277; // x20
  _QWORD *v278; // x8
  __int64 v279; // x9
  _QWORD *v280; // x0
  char *v281; // x20
  unsigned __int8 *v282; // x8
  __int64 v283; // x10
  __int64 v284; // x0
  _QWORD *v285; // x20
  __int64 v286; // x21
  _QWORD *v287; // x8
  __int64 v288; // x9
  _QWORD *v289; // x0
  char *v290; // x20
  unsigned __int8 *v291; // x8
  __int64 v292; // x10

  v2 = *(unsigned __int8 **)a1;
  v1 = *(unsigned __int8 **)(a1 + 8);
  v4 = (unsigned __int64)&v1[-*(_QWORD *)a1];
  if ( v1 == *(unsigned __int8 **)a1 )
  {
LABEL_73:
    v12 = (__int64)sub_EB9E0(a1);
LABEL_74:
    v26 = v12;
LABEL_75:
    if ( v26 )
      goto LABEL_76;
  }
  else
  {
    v5 = *v2;
    switch ( *v2 )
    {
      case 'A':
        if ( v2 == v1 )
          return 0;
        v13 = v2 + 1;
        *(_QWORD *)a1 = v2 + 1;
        if ( v1 != v2 + 1 && (unsigned int)*v13 - 48 <= 9 )
        {
          v14 = v2;
          while ( 1 )
          {
            v15 = v14;
            v16 = v14 + 2;
            *(_QWORD *)a1 = v16;
            if ( v1 == v16 )
              break;
            v14 = v15 + 1;
            if ( (unsigned int)v15[2] - 48 >= 0xA )
            {
              v17 = (__int64)(v15 + 2);
              goto LABEL_201;
            }
          }
          v17 = (__int64)v1;
LABEL_201:
          if ( v1 - 2 != v15 && v15[2] == 95 )
          {
            *(_QWORD *)a1 = v15 + 3;
            v212 = sub_DB210(a1);
            if ( v212 )
            {
              v213 = *(_QWORD **)(a1 + 4832);
              v214 = v212;
              v215 = v213 + 1;
              v216 = v213[1];
              if ( (unsigned __int64)(v216 + 48) >= 0xFF0 )
              {
                v217 = (_QWORD *)operator new[](0x1000u);
                v216 = 0;
                *v217 = v213;
                v217[1] = 0;
                v215 = v217 + 1;
                v213 = v217;
                *(_QWORD *)(a1 + 4832) = v217;
              }
              v218 = (char *)v213 + v216;
              *v215 = v216 + 48;
              if ( v17 )
                v219 = v2 + 1;
              else
                v219 = v2 + 2;
              if ( v17 )
                v220 = v17;
              else
                v220 = 1;
              *((_QWORD *)v218 + 2) = off_1631B8;
              v26 = (__int64)(v218 + 16);
              *(_DWORD *)(v26 + 8) = 16777231;
              *(_QWORD *)(v26 + 16) = v214;
              *(_QWORD *)(v26 + 24) = v219;
              *(_QWORD *)(v26 + 32) = v220;
              if ( !v26 )
                return v26;
LABEL_76:
              v65 = *(__int64 **)(a1 + 304);
              if ( v65 == *(__int64 **)(a1 + 312) )
              {
                v66 = *(_BYTE **)(a1 + 296);
                v67 = (char *)v65 - v66;
                v68 = ((char *)v65 - v66) >> 3;
                v69 = ((char *)v65 - v66) >> 2;
                if ( (_BYTE *)(a1 + 320) == v66 )
                {
                  v71 = (char *)malloc(2 * v67);
                  v70 = v71;
                  if ( v67 )
                    memmove(v71, v66, v67);
                  *(_QWORD *)(a1 + 296) = v70;
                }
                else
                {
                  v70 = (char *)realloc(*(void **)(a1 + 296), 2 * v67);
                  *(_QWORD *)(a1 + 296) = v70;
                }
                v65 = (__int64 *)&v70[8 * v68];
                *(_QWORD *)(a1 + 304) = v65;
                *(_QWORD *)(a1 + 312) = &v70[8 * v69];
              }
              *(_QWORD *)(a1 + 304) = v65 + 1;
              *v65 = v26;
              return v26;
            }
          }
          return 0;
        }
        if ( v13 == v1 || *v13 != 95 )
        {
          v195 = sub_DFE94((unsigned __int8 **)a1);
          if ( !v195 )
            return 0;
          v196 = *(unsigned __int8 **)a1;
          if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
            return 0;
          if ( *v196 != 95 )
            return 0;
          v197 = v195;
          *(_QWORD *)a1 = v196 + 1;
          v198 = sub_DB210(a1);
          if ( !v198 )
            return 0;
          v199 = *(_QWORD **)(a1 + 4832);
          v200 = v198;
          v201 = v199 + 1;
          v202 = v199[1];
          if ( (unsigned __int64)(v202 + 48) >= 0xFF0 )
          {
            v203 = (_QWORD *)operator new[](0x1000u);
            v202 = 0;
            *v203 = v199;
            v203[1] = 0;
            v201 = v203 + 1;
            v199 = v203;
            *(_QWORD *)(a1 + 4832) = v203;
          }
          v204 = (char *)v199 + v202;
          *v201 = v202 + 48;
          *((_QWORD *)v204 + 2) = off_1631B8;
          v26 = (__int64)(v204 + 16);
          *(_DWORD *)(v26 + 8) = 16777231;
          *(_QWORD *)(v26 + 16) = v200;
          *(_QWORD *)(v26 + 24) = v197;
          *(_QWORD *)(v26 + 32) = 0;
          if ( v26 )
            goto LABEL_76;
        }
        else
        {
          *(_QWORD *)a1 = v2 + 2;
          v188 = sub_DB210(a1);
          if ( !v188 )
            return 0;
          v189 = *(_QWORD **)(a1 + 4832);
          v190 = v188;
          v191 = v189 + 1;
          v192 = v189[1];
          if ( (unsigned __int64)(v192 + 48) >= 0xFF0 )
          {
            v193 = (_QWORD *)operator new[](0x1000u);
            v192 = 0;
            *v193 = v189;
            v193[1] = 0;
            v191 = v193 + 1;
            v189 = v193;
            *(_QWORD *)(a1 + 4832) = v193;
          }
          v194 = (char *)v189 + v192;
          *v191 = v192 + 48;
          *((_QWORD *)v194 + 2) = off_1631B8;
          v26 = (__int64)(v194 + 16);
          *(_DWORD *)(v26 + 8) = 16777231;
          *(_QWORD *)(v26 + 24) = 0;
          *(_QWORD *)(v26 + 32) = 0;
          *(_QWORD *)(v26 + 16) = v190;
          if ( v26 )
            goto LABEL_76;
        }
        break;
      case 'C':
        *(_QWORD *)a1 = v2 + 1;
        v18 = sub_DB210(a1);
        if ( !v18 )
          return 0;
        v19 = *(_QWORD **)(a1 + 4832);
        v20 = v18;
        v21 = v19 + 1;
        v22 = v19[1];
        if ( (unsigned __int64)(v22 + 48) >= 0xFF0 )
        {
          v23 = (_QWORD *)operator new[](0x1000u);
          v22 = 0;
          *v23 = v19;
          v23[1] = 0;
          v21 = v23 + 1;
          v19 = v23;
          *(_QWORD *)(a1 + 4832) = v23;
        }
        v24 = (char *)v19 + v22;
        v25 = " complex";
        *v21 = v22 + 48;
        *((_QWORD *)v24 + 2) = off_163458;
        v26 = (__int64)(v24 + 16);
        v27 = "";
        goto LABEL_39;
      case 'D':
        if ( v4 < 2 )
          return 0;
        v26 = 0;
        switch ( v2[1] )
        {
          case 'O':
          case 'o':
          case 'w':
          case 'x':
            goto LABEL_34;
          case 'T':
          case 't':
            v12 = (__int64)sub_DEF40(a1);
            goto LABEL_74;
          case 'a':
            v221 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v2 + 2;
            v80 = v221 + 1;
            v222 = v221[1];
            if ( (unsigned __int64)(v222 + 32) >= 0xFF0 )
            {
              v223 = (_QWORD *)operator new[](0x1000u);
              v222 = 0;
              *v223 = v221;
              v223[1] = 0;
              v80 = v223 + 1;
              v221 = v223;
              *(_QWORD *)(a1 + 4832) = v223;
            }
            v83 = v222 + 32;
            v84 = (char *)v221 + v222;
            v78 = "auto";
            goto LABEL_149;
          case 'c':
            v224 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v2 + 2;
            v147 = v224 + 1;
            v225 = v224[1];
            if ( (unsigned __int64)(v225 + 32) >= 0xFF0 )
            {
              v226 = (_QWORD *)operator new[](0x1000u);
              v225 = 0;
              *v226 = v224;
              v226[1] = 0;
              v147 = v226 + 1;
              v224 = v226;
              *(_QWORD *)(a1 + 4832) = v226;
            }
            v150 = v225 + 32;
            v151 = (char *)v224 + v225;
            v78 = "decltype(auto)";
            goto LABEL_137;
          case 'd':
            v227 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v2 + 2;
            v165 = v227 + 1;
            v228 = v227[1];
            if ( (unsigned __int64)(v228 + 32) >= 0xFF0 )
            {
              v229 = (_QWORD *)operator new[](0x1000u);
              v228 = 0;
              *v229 = v227;
              v229[1] = 0;
              v165 = v229 + 1;
              v227 = v229;
              *(_QWORD *)(a1 + 4832) = v229;
            }
            v168 = v228 + 32;
            v169 = (char *)v227 + v228;
            v78 = "decimal64";
            goto LABEL_156;
          case 'e':
            v230 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v2 + 2;
            v104 = v230 + 1;
            v231 = v230[1];
            if ( (unsigned __int64)(v231 + 32) >= 0xFF0 )
            {
              v232 = (_QWORD *)operator new[](0x1000u);
              v231 = 0;
              *v232 = v230;
              v232[1] = 0;
              v104 = v232 + 1;
              v230 = v232;
              *(_QWORD *)(a1 + 4832) = v232;
            }
            v107 = v231 + 32;
            v108 = (char *)v230 + v231;
            v78 = "decimal128";
            goto LABEL_106;
          case 'f':
            v233 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v2 + 2;
            v165 = v233 + 1;
            v234 = v233[1];
            if ( (unsigned __int64)(v234 + 32) >= 0xFF0 )
            {
              v235 = (_QWORD *)operator new[](0x1000u);
              v234 = 0;
              *v235 = v233;
              v235[1] = 0;
              v165 = v235 + 1;
              v233 = v235;
              *(_QWORD *)(a1 + 4832) = v235;
            }
            v168 = v234 + 32;
            v169 = (char *)v233 + v234;
            v78 = "decimal32";
            goto LABEL_156;
          case 'h':
            v236 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v2 + 2;
            v165 = v236 + 1;
            v237 = v236[1];
            if ( (unsigned __int64)(v237 + 32) >= 0xFF0 )
            {
              v238 = (_QWORD *)operator new[](0x1000u);
              v237 = 0;
              *v238 = v236;
              v238[1] = 0;
              v165 = v238 + 1;
              v236 = v238;
              *(_QWORD *)(a1 + 4832) = v238;
            }
            v168 = v237 + 32;
            v169 = (char *)v236 + v237;
            v78 = "decimal16";
            goto LABEL_156;
          case 'i':
            v239 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v2 + 2;
            v133 = v239 + 1;
            v240 = v239[1];
            if ( (unsigned __int64)(v240 + 32) >= 0xFF0 )
            {
              v241 = (_QWORD *)operator new[](0x1000u);
              v240 = 0;
              *v241 = v239;
              v241[1] = 0;
              v133 = v241 + 1;
              v239 = v241;
              *(_QWORD *)(a1 + 4832) = v241;
            }
            v136 = v240 + 32;
            v137 = (char *)v239 + v240;
            v78 = "char32_t";
            goto LABEL_126;
          case 'n':
            v242 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v2 + 2;
            v147 = v242 + 1;
            v243 = v242[1];
            if ( (unsigned __int64)(v243 + 32) >= 0xFF0 )
            {
              v244 = (_QWORD *)operator new[](0x1000u);
              v243 = 0;
              *v244 = v242;
              v244[1] = 0;
              v147 = v244 + 1;
              v242 = v244;
              *(_QWORD *)(a1 + 4832) = v244;
            }
            v150 = v243 + 32;
            v151 = (char *)v242 + v243;
            v78 = "std::nullptr_t";
            goto LABEL_137;
          case 'p':
            *(_QWORD *)a1 = v2 + 2;
            v245 = sub_DB210(a1);
            if ( !v245 )
              return 0;
            v246 = *(_QWORD **)(a1 + 4832);
            v247 = v245;
            v248 = v246 + 1;
            v249 = v246[1];
            if ( (unsigned __int64)(v249 + 32) >= 0xFF0 )
            {
              v250 = (_QWORD *)operator new[](0x1000u);
              v249 = 0;
              *v250 = v246;
              v250[1] = 0;
              v248 = v250 + 1;
              v246 = v250;
              *(_QWORD *)(a1 + 4832) = v250;
            }
            v251 = (char *)v246 + v249;
            *v248 = v249 + 32;
            *((_QWORD *)v251 + 2) = off_161D28;
            v26 = (__int64)(v251 + 16);
            *(_DWORD *)(v26 + 8) = 16843037;
            *(_QWORD *)(v26 + 16) = v247;
            if ( !v26 )
              return v26;
            goto LABEL_76;
          case 's':
            v252 = *(_QWORD **)(a1 + 4832);
            *(_QWORD *)a1 = v2 + 2;
            v133 = v252 + 1;
            v253 = v252[1];
            if ( (unsigned __int64)(v253 + 32) >= 0xFF0 )
            {
              v254 = (_QWORD *)operator new[](0x1000u);
              v253 = 0;
              *v254 = v252;
              v254[1] = 0;
              v133 = v254 + 1;
              v252 = v254;
              *(_QWORD *)(a1 + 4832) = v254;
            }
            v136 = v253 + 32;
            v137 = (char *)v252 + v253;
            v78 = "char16_t";
            goto LABEL_126;
          case 'v':
            v255 = v2 + 2;
            *(_QWORD *)a1 = v2 + 2;
            if ( v1 == v2 + 2 || (unsigned int)*v255 - 49 > 8 )
            {
              if ( v255 == v1 || *v255 != 95 )
              {
                v267 = sub_DFE94((unsigned __int8 **)a1);
                if ( !v267 )
                  return 0;
                v268 = *(unsigned __int8 **)a1;
                if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
                  return 0;
                if ( *v268 != 95 )
                  return 0;
                v269 = v267;
                *(_QWORD *)a1 = v268 + 1;
                v270 = sub_DB210(a1);
                if ( !v270 )
                  return 0;
                v271 = *(_QWORD **)(a1 + 4832);
                v272 = v270;
                v273 = v271 + 1;
                v274 = v271[1];
                if ( (unsigned __int64)(v274 + 48) >= 0xFF0 )
                {
                  v275 = (_QWORD *)operator new[](0x1000u);
                  v274 = 0;
                  *v275 = v271;
                  v275[1] = 0;
                  v273 = v275 + 1;
                  v271 = v275;
                  *(_QWORD *)(a1 + 4832) = v275;
                }
                v276 = (char *)v271 + v274;
                *v273 = v274 + 48;
                *((_QWORD *)v276 + 2) = off_163148;
                v26 = (__int64)(v276 + 16);
                *(_DWORD *)(v26 + 8) = 16843034;
                *(_QWORD *)(v26 + 16) = v272;
                *(_QWORD *)(v26 + 24) = v269;
                *(_QWORD *)(v26 + 32) = 0;
                *(_BYTE *)(v26 + 40) = 0;
                if ( v26 )
                  goto LABEL_76;
              }
              else
              {
                *(_QWORD *)a1 = v2 + 3;
                v260 = sub_DB210(a1);
                if ( !v260 )
                  return 0;
                v261 = *(_QWORD **)(a1 + 4832);
                v262 = v260;
                v263 = v261 + 1;
                v264 = v261[1];
                if ( (unsigned __int64)(v264 + 48) >= 0xFF0 )
                {
                  v265 = (_QWORD *)operator new[](0x1000u);
                  v264 = 0;
                  *v265 = v261;
                  v265[1] = 0;
                  v263 = v265 + 1;
                  v261 = v265;
                  *(_QWORD *)(a1 + 4832) = v265;
                }
                v266 = (char *)v261 + v264;
                *v263 = v264 + 48;
                *((_QWORD *)v266 + 2) = off_163148;
                v26 = (__int64)(v266 + 16);
                *(_DWORD *)(v26 + 8) = 16843034;
                *(_QWORD *)(v26 + 16) = v262;
                *(int64x2_t *)(v26 + 24) = vdupq_n_s64(1u);
                *(_BYTE *)(v26 + 40) = 0;
                if ( v26 )
                  goto LABEL_76;
              }
            }
            else
            {
              v256 = v2 + 3;
              do
              {
                v257 = v256;
                *(_QWORD *)a1 = v256;
                if ( v1 == v256 )
                  return 0;
                ++v256;
              }
              while ( (unsigned int)*v257 - 48 < 0xA );
              v258 = v2 + 2;
              v259 = v257;
              if ( v257 == v1 || *v257 != 95 )
                return 0;
              *(_QWORD *)a1 = v257 + 1;
              if ( v257 + 1 == v1 || v257[1] != 112 )
              {
                v284 = sub_DB210(a1);
                if ( !v284 )
                  return 0;
                v285 = *(_QWORD **)(a1 + 4832);
                v286 = v284;
                v287 = v285 + 1;
                v288 = v285[1];
                if ( (unsigned __int64)(v288 + 48) >= 0xFF0 )
                {
                  v289 = (_QWORD *)operator new[](0x1000u);
                  v288 = 0;
                  *v289 = v285;
                  v289[1] = 0;
                  v287 = v289 + 1;
                  v285 = v289;
                  *(_QWORD *)(a1 + 4832) = v289;
                }
                v290 = (char *)v285 + v288;
                *v287 = v288 + 48;
                if ( v259 )
                  v291 = v258;
                else
                  v291 = v258 + 1;
                if ( v259 )
                  v292 = (__int64)v259;
                else
                  v292 = 1;
                *((_QWORD *)v290 + 2) = off_163148;
                v26 = (__int64)(v290 + 16);
                *(_DWORD *)(v26 + 8) = 16843034;
                *(_QWORD *)(v26 + 16) = v286;
                *(_QWORD *)(v26 + 24) = v291;
                *(_QWORD *)(v26 + 32) = v292;
                *(_BYTE *)(v26 + 40) = 0;
                if ( v26 )
                  goto LABEL_76;
              }
              else
              {
                v277 = *(_QWORD **)(a1 + 4832);
                *(_QWORD *)a1 = v257 + 2;
                v278 = v277 + 1;
                v279 = v277[1];
                if ( (unsigned __int64)(v279 + 48) >= 0xFF0 )
                {
                  v280 = (_QWORD *)operator new[](0x1000u);
                  v279 = 0;
                  *v280 = v277;
                  v280[1] = 0;
                  v278 = v280 + 1;
                  v277 = v280;
                  *(_QWORD *)(a1 + 4832) = v280;
                }
                v281 = (char *)v277 + v279;
                *v278 = v279 + 48;
                if ( v259 )
                  v282 = v258;
                else
                  v282 = v258 + 1;
                if ( v259 )
                  v283 = (__int64)v259;
                else
                  v283 = 1;
                *((_QWORD *)v281 + 2) = off_163148;
                v26 = (__int64)(v281 + 16);
                *(_DWORD *)(v26 + 8) = 16843034;
                *(_QWORD *)(v26 + 16) = 0;
                *(_QWORD *)(v26 + 24) = v282;
                *(_QWORD *)(v26 + 32) = v283;
                *(_BYTE *)(v26 + 40) = 1;
                if ( v26 )
                  goto LABEL_76;
              }
            }
            break;
          default:
            return v26;
        }
        return v26;
      case 'F':
        goto LABEL_34;
      case 'G':
        *(_QWORD *)a1 = v2 + 1;
        v28 = sub_DB210(a1);
        if ( !v28 )
          return 0;
        v29 = *(_QWORD **)(a1 + 4832);
        v20 = v28;
        v30 = v29 + 1;
        v31 = v29[1];
        if ( (unsigned __int64)(v31 + 48) >= 0xFF0 )
        {
          v32 = (_QWORD *)operator new[](0x1000u);
          v31 = 0;
          *v32 = v29;
          v32[1] = 0;
          v30 = v32 + 1;
          v29 = v32;
          *(_QWORD *)(a1 + 4832) = v32;
        }
        v33 = (char *)v29 + v31;
        v25 = " imaginary";
        *v30 = v31 + 48;
        *((_QWORD *)v33 + 2) = off_163458;
        v26 = (__int64)(v33 + 16);
        v27 = "";
LABEL_39:
        *(_QWORD *)&v34 = v25;
        *((_QWORD *)&v34 + 1) = v27;
        *(_DWORD *)(v26 + 8) = 16843013;
        *(_QWORD *)(v26 + 16) = v20;
        *(_OWORD *)(v26 + 24) = v34;
        if ( !v26 )
          return v26;
        goto LABEL_76;
      case 'K':
      case 'V':
      case 'r':
        v6 = v5 == 114;
        if ( v4 > v6 )
        {
          v7 = v5 == 114 ? 2 : 1;
          if ( v2[v6] == 86 )
            LODWORD(v6) = v7;
        }
        v8 = (unsigned int)v6;
        if ( v4 > (unsigned int)v6 )
        {
          if ( v2[(unsigned int)v6] == 75 )
            v8 = (unsigned int)(v6 + 1);
          else
            v8 = (unsigned int)v6;
          LODWORD(v6) = v8;
        }
        if ( v4 <= v8 )
          goto LABEL_20;
        v9 = v2[v8];
        if ( v9 != 70 )
        {
          if ( v9 != 68 )
            goto LABEL_20;
          v10 = (unsigned int)(v6 + 1);
          if ( v4 <= v10 )
            goto LABEL_20;
          v11 = v2[v10] - 79;
          if ( v11 > 0x29 || ((1LL << v11) & 0x30100000001LL) == 0 )
            goto LABEL_20;
        }
LABEL_34:
        v12 = (__int64)sub_EAEE8(a1);
        goto LABEL_74;
      case 'M':
        if ( v2 == v1 )
          return 0;
        *(_QWORD *)a1 = v2 + 1;
        v35 = sub_DB210(a1);
        if ( !v35 )
          return 0;
        v36 = v35;
        v37 = sub_DB210(a1);
        if ( !v37 )
          return 0;
        v38 = *(_QWORD **)(a1 + 4832);
        v39 = v37;
        v40 = v38 + 1;
        v41 = v38[1];
        if ( (unsigned __int64)(v41 + 32) >= 0xFF0 )
        {
          v42 = (_QWORD *)operator new[](0x1000u);
          v41 = 0;
          *v42 = v38;
          v42[1] = 0;
          v40 = v42 + 1;
          v38 = v42;
          *(_QWORD *)(a1 + 4832) = v42;
        }
        *v40 = v41 + 32;
        v43 = *(_BYTE *)(v39 + 9);
        v44 = (char *)v38 + v41;
        *((_QWORD *)v44 + 2) = off_163228;
        v26 = (__int64)(v44 + 16);
        *(_BYTE *)(v26 + 8) = 14;
        *(_WORD *)(v26 + 10) = 257;
        *(_BYTE *)(v26 + 9) = v43;
        *(_QWORD *)(v26 + 16) = v36;
        *(_QWORD *)(v26 + 24) = v39;
        if ( !v26 )
          return v26;
        goto LABEL_76;
      case 'O':
        *(_QWORD *)a1 = v2 + 1;
        v45 = sub_DB210(a1);
        if ( !v45 )
          return 0;
        v46 = *(_QWORD **)(a1 + 4832);
        v47 = v45;
        v48 = v46 + 1;
        v49 = v46[1];
        if ( (unsigned __int64)(v49 + 32) >= 0xFF0 )
        {
          v50 = (_QWORD *)operator new[](0x1000u);
          v49 = 0;
          *v50 = v46;
          v50[1] = 0;
          v48 = v50 + 1;
          v46 = v50;
          *(_QWORD *)(a1 + 4832) = v50;
        }
        v51 = v49 + 32;
        v52 = (char *)v46 + v49;
        v53 = off_1633E8;
        v54 = 13;
        goto LABEL_60;
      case 'P':
        *(_QWORD *)a1 = v2 + 1;
        v55 = sub_DB210(a1);
        if ( !v55 )
          return 0;
        v56 = *(_QWORD **)(a1 + 4832);
        v47 = v55;
        v48 = v56 + 1;
        v57 = v56[1];
        if ( (unsigned __int64)(v57 + 32) >= 0xFF0 )
        {
          v58 = (_QWORD *)operator new[](0x1000u);
          v57 = 0;
          *v58 = v56;
          v58[1] = 0;
          v48 = v58 + 1;
          v56 = v58;
          *(_QWORD *)(a1 + 4832) = v58;
        }
        v51 = v57 + 32;
        v52 = (char *)v56 + v57;
        v53 = off_163308;
        v54 = 11;
        goto LABEL_60;
      case 'R':
        *(_QWORD *)a1 = v2 + 1;
        v59 = sub_DB210(a1);
        if ( !v59 )
          return 0;
        v60 = *(_QWORD **)(a1 + 4832);
        v47 = v59;
        v48 = v60 + 1;
        v61 = v60[1];
        if ( (unsigned __int64)(v61 + 32) >= 0xFF0 )
        {
          v62 = (_QWORD *)operator new[](0x1000u);
          v61 = 0;
          *v62 = v60;
          v62[1] = 0;
          v48 = v62 + 1;
          v60 = v62;
          *(_QWORD *)(a1 + 4832) = v62;
        }
        v51 = v61 + 32;
        v52 = (char *)v60 + v61;
        v53 = off_163378;
        v54 = 12;
LABEL_60:
        *v48 = v51;
        v63 = *(_BYTE *)(v47 + 9);
        *((_QWORD *)v52 + 2) = v53;
        v26 = (__int64)(v52 + 16);
        *(_BYTE *)(v26 + 8) = v54;
        *(_WORD *)(v26 + 10) = 257;
        *(_BYTE *)(v26 + 9) = v63;
        *(_QWORD *)(v26 + 16) = v47;
        if ( !v26 )
          return v26;
        goto LABEL_76;
      case 'S':
        if ( v4 < 2 || !v2[1] || v2[1] == 116 )
          goto LABEL_73;
        v26 = sub_DE214(a1);
        if ( v26 && *(_BYTE *)(a1 + 720) && *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && **(_BYTE **)a1 == 73 )
          goto LABEL_170;
        return v26;
      case 'T':
        if ( v4 >= 2 )
        {
          v64 = v2[1] - 101;
          if ( v64 <= 0x10 && ((1 << v64) & 0x14001) != 0 )
            goto LABEL_73;
        }
        v26 = sub_DECA4(a1);
        if ( !v26 )
          return v26;
        if ( !*(_BYTE *)(a1 + 720) || *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 || **(_BYTE **)a1 != 73 )
          goto LABEL_75;
LABEL_170:
        v180 = sub_DE644(a1, 0);
        if ( !v180 )
          return 0;
        v181 = *(_QWORD **)(a1 + 4832);
        v182 = v180;
        v183 = v181 + 1;
        v184 = v181[1];
        if ( (unsigned __int64)(v184 + 32) >= 0xFF0 )
        {
          v185 = (_QWORD *)operator new[](0x1000u);
          v184 = 0;
          *v185 = v181;
          v185[1] = 0;
          v183 = v185 + 1;
          v181 = v185;
          *(_QWORD *)(a1 + 4832) = v185;
        }
        v186 = v184 + 32;
        v187 = (__int64)v181 + v184;
        *v183 = v186;
        *(_QWORD *)(v187 + 16) = off_162C08;
        v187 += 16;
        *(_DWORD *)(v187 + 8) = 16843040;
        *(_QWORD *)(v187 + 16) = v26;
        *(_QWORD *)(v187 + 24) = v182;
        v26 = v187;
        if ( !v187 )
          return v26;
        goto LABEL_76;
      case 'U':
LABEL_20:
        v12 = sub_EB5CC((unsigned __int8 **)a1);
        goto LABEL_74;
      case 'a':
        v72 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v73 = v72 + 1;
        v74 = v72[1];
        if ( (unsigned __int64)(v74 + 32) >= 0xFF0 )
        {
          v75 = (_QWORD *)operator new[](0x1000u);
          v74 = 0;
          *v75 = v72;
          v75[1] = 0;
          v73 = v75 + 1;
          v72 = v75;
          *(_QWORD *)(a1 + 4832) = v75;
        }
        v76 = v74 + 32;
        v77 = (char *)v72 + v74;
        v78 = "signed char";
        goto LABEL_99;
      case 'b':
        v79 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v80 = v79 + 1;
        v81 = v79[1];
        if ( (unsigned __int64)(v81 + 32) >= 0xFF0 )
        {
          v82 = (_QWORD *)operator new[](0x1000u);
          v81 = 0;
          *v82 = v79;
          v82[1] = 0;
          v80 = v82 + 1;
          v79 = v82;
          *(_QWORD *)(a1 + 4832) = v82;
        }
        v83 = v81 + 32;
        v84 = (char *)v79 + v81;
        v78 = "bool";
        goto LABEL_149;
      case 'c':
        v85 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v80 = v85 + 1;
        v86 = v85[1];
        if ( (unsigned __int64)(v86 + 32) >= 0xFF0 )
        {
          v87 = (_QWORD *)operator new[](0x1000u);
          v86 = 0;
          *v87 = v85;
          v87[1] = 0;
          v80 = v87 + 1;
          v85 = v87;
          *(_QWORD *)(a1 + 4832) = v87;
        }
        v83 = v86 + 32;
        v84 = (char *)v85 + v86;
        v78 = "char";
        goto LABEL_149;
      case 'd':
        v88 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v89 = v88 + 1;
        v90 = v88[1];
        if ( (unsigned __int64)(v90 + 32) >= 0xFF0 )
        {
          v91 = (_QWORD *)operator new[](0x1000u);
          v90 = 0;
          *v91 = v88;
          v91[1] = 0;
          v89 = v91 + 1;
          v88 = v91;
          *(_QWORD *)(a1 + 4832) = v91;
        }
        v92 = (char *)v88 + v90;
        v78 = "double";
        *v89 = v90 + 32;
        *((_QWORD *)v92 + 2) = off_161838;
        v26 = (__int64)(v92 + 16);
        v93 = "";
        goto LABEL_164;
      case 'e':
        v94 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v73 = v94 + 1;
        v95 = v94[1];
        if ( (unsigned __int64)(v95 + 32) >= 0xFF0 )
        {
          v96 = (_QWORD *)operator new[](0x1000u);
          v95 = 0;
          *v96 = v94;
          v96[1] = 0;
          v73 = v96 + 1;
          v94 = v96;
          *(_QWORD *)(a1 + 4832) = v96;
        }
        v76 = v95 + 32;
        v77 = (char *)v94 + v95;
        v78 = "long double";
LABEL_99:
        *v73 = v76;
        *((_QWORD *)v77 + 2) = off_161838;
        v26 = (__int64)(v77 + 16);
        v93 = v78 + 11;
        goto LABEL_164;
      case 'f':
        v97 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v98 = v97 + 1;
        v99 = v97[1];
        if ( (unsigned __int64)(v99 + 32) >= 0xFF0 )
        {
          v100 = (_QWORD *)operator new[](0x1000u);
          v99 = 0;
          *v100 = v97;
          v100[1] = 0;
          v98 = v100 + 1;
          v97 = v100;
          *(_QWORD *)(a1 + 4832) = v100;
        }
        v101 = v99 + 32;
        v102 = (char *)v97 + v99;
        v78 = "float";
        goto LABEL_133;
      case 'g':
        v103 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v104 = v103 + 1;
        v105 = v103[1];
        if ( (unsigned __int64)(v105 + 32) >= 0xFF0 )
        {
          v106 = (_QWORD *)operator new[](0x1000u);
          v105 = 0;
          *v106 = v103;
          v106[1] = 0;
          v104 = v106 + 1;
          v103 = v106;
          *(_QWORD *)(a1 + 4832) = v106;
        }
        v107 = v105 + 32;
        v108 = (char *)v103 + v105;
        v78 = "__float128";
LABEL_106:
        *v104 = v107;
        *((_QWORD *)v108 + 2) = off_161838;
        v26 = (__int64)(v108 + 16);
        v93 = v78 + 10;
        goto LABEL_164;
      case 'h':
        v109 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v110 = v109 + 1;
        v111 = v109[1];
        if ( (unsigned __int64)(v111 + 32) >= 0xFF0 )
        {
          v112 = (_QWORD *)operator new[](0x1000u);
          v111 = 0;
          *v112 = v109;
          v112[1] = 0;
          v110 = v112 + 1;
          v109 = v112;
          *(_QWORD *)(a1 + 4832) = v112;
        }
        v113 = v111 + 32;
        v114 = (char *)v109 + v111;
        v78 = "unsigned char";
        goto LABEL_122;
      case 'i':
        v115 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v116 = v115 + 1;
        v117 = v115[1];
        if ( (unsigned __int64)(v117 + 32) >= 0xFF0 )
        {
          v118 = (_QWORD *)operator new[](0x1000u);
          v117 = 0;
          *v118 = v115;
          v118[1] = 0;
          v116 = v118 + 1;
          v115 = v118;
          *(_QWORD *)(a1 + 4832) = v118;
        }
        v119 = v117 + 32;
        v120 = (char *)v115 + v117;
        v78 = "int";
        goto LABEL_163;
      case 'j':
        v121 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v122 = v121 + 1;
        v123 = v121[1];
        if ( (unsigned __int64)(v123 + 32) >= 0xFF0 )
        {
          v124 = (_QWORD *)operator new[](0x1000u);
          v123 = 0;
          *v124 = v121;
          v124[1] = 0;
          v122 = v124 + 1;
          v121 = v124;
          *(_QWORD *)(a1 + 4832) = v124;
        }
        v125 = (char *)v121 + v123;
        v78 = "unsigned int";
        *v122 = v123 + 32;
        *((_QWORD *)v125 + 2) = off_161838;
        v26 = (__int64)(v125 + 16);
        v93 = "";
        goto LABEL_164;
      case 'l':
        v126 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v80 = v126 + 1;
        v127 = v126[1];
        if ( (unsigned __int64)(v127 + 32) >= 0xFF0 )
        {
          v128 = (_QWORD *)operator new[](0x1000u);
          v127 = 0;
          *v128 = v126;
          v128[1] = 0;
          v80 = v128 + 1;
          v126 = v128;
          *(_QWORD *)(a1 + 4832) = v128;
        }
        v83 = v127 + 32;
        v84 = (char *)v126 + v127;
        v78 = "long";
        goto LABEL_149;
      case 'm':
        v129 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v110 = v129 + 1;
        v130 = v129[1];
        if ( (unsigned __int64)(v130 + 32) >= 0xFF0 )
        {
          v131 = (_QWORD *)operator new[](0x1000u);
          v130 = 0;
          *v131 = v129;
          v131[1] = 0;
          v110 = v131 + 1;
          v129 = v131;
          *(_QWORD *)(a1 + 4832) = v131;
        }
        v113 = v130 + 32;
        v114 = (char *)v129 + v130;
        v78 = "unsigned long";
LABEL_122:
        *v110 = v113;
        *((_QWORD *)v114 + 2) = off_161838;
        v26 = (__int64)(v114 + 16);
        v93 = v78 + 13;
        goto LABEL_164;
      case 'n':
        v132 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v133 = v132 + 1;
        v134 = v132[1];
        if ( (unsigned __int64)(v134 + 32) >= 0xFF0 )
        {
          v135 = (_QWORD *)operator new[](0x1000u);
          v134 = 0;
          *v135 = v132;
          v135[1] = 0;
          v133 = v135 + 1;
          v132 = v135;
          *(_QWORD *)(a1 + 4832) = v135;
        }
        v136 = v134 + 32;
        v137 = (char *)v132 + v134;
        v78 = "__int128";
LABEL_126:
        *v133 = v136;
        *((_QWORD *)v137 + 2) = off_161838;
        v26 = (__int64)(v137 + 16);
        v93 = v78 + 8;
        goto LABEL_164;
      case 'o':
        v138 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v139 = v138 + 1;
        v140 = v138[1];
        if ( (unsigned __int64)(v140 + 32) >= 0xFF0 )
        {
          v141 = (_QWORD *)operator new[](0x1000u);
          v140 = 0;
          *v141 = v138;
          v141[1] = 0;
          v139 = v141 + 1;
          v138 = v141;
          *(_QWORD *)(a1 + 4832) = v141;
        }
        v142 = (char *)v138 + v140;
        v78 = "unsigned __int128";
        *v139 = v140 + 32;
        *((_QWORD *)v142 + 2) = off_161838;
        v26 = (__int64)(v142 + 16);
        v93 = "";
        goto LABEL_164;
      case 's':
        v143 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v98 = v143 + 1;
        v144 = v143[1];
        if ( (unsigned __int64)(v144 + 32) >= 0xFF0 )
        {
          v145 = (_QWORD *)operator new[](0x1000u);
          v144 = 0;
          *v145 = v143;
          v145[1] = 0;
          v98 = v145 + 1;
          v143 = v145;
          *(_QWORD *)(a1 + 4832) = v145;
        }
        v101 = v144 + 32;
        v102 = (char *)v143 + v144;
        v78 = "short";
LABEL_133:
        *v98 = v101;
        *((_QWORD *)v102 + 2) = off_161838;
        v26 = (__int64)(v102 + 16);
        v93 = v78 + 5;
        goto LABEL_164;
      case 't':
        v146 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v147 = v146 + 1;
        v148 = v146[1];
        if ( (unsigned __int64)(v148 + 32) >= 0xFF0 )
        {
          v149 = (_QWORD *)operator new[](0x1000u);
          v148 = 0;
          *v149 = v146;
          v149[1] = 0;
          v147 = v149 + 1;
          v146 = v149;
          *(_QWORD *)(a1 + 4832) = v149;
        }
        v150 = v148 + 32;
        v151 = (char *)v146 + v148;
        v78 = "unsigned short";
LABEL_137:
        *v147 = v150;
        *((_QWORD *)v151 + 2) = off_161838;
        v26 = (__int64)(v151 + 16);
        v93 = v78 + 14;
        goto LABEL_164;
      case 'u':
        v152 = v2 + 1;
        *(_QWORD *)a1 = v2 + 1;
        if ( v1 == v2 + 1 || (unsigned int)*v152 - 48 > 9 )
          return 0;
        if ( v152 == v1 )
        {
          v155 = -48;
        }
        else
        {
          v153 = 0;
          do
          {
            v154 = v152++;
            *(_QWORD *)a1 = v152;
            v155 = v153 + *v154 - 48;
            if ( v1 == v152 || (unsigned int)*v152 - 48 >= 0xA )
            {
              v205 = v152;
              goto LABEL_193;
            }
            v153 = 10 * v155;
          }
          while ( v1 != v152 );
          v155 = v153 - 48;
        }
        v205 = v1;
LABEL_193:
        if ( v1 - v152 < v155 )
          return 0;
        v211 = &v205[v155];
        *(_QWORD *)a1 = &v205[v155];
        if ( v205 == &v205[v155] )
          return 0;
        v206 = *(_QWORD **)(a1 + 4832);
        v207 = v206 + 1;
        v208 = v206[1];
        if ( (unsigned __int64)(v208 + 32) >= 0xFF0 )
        {
          v209 = (_QWORD *)operator new[](0x1000u);
          v208 = 0;
          *v209 = v206;
          v209[1] = 0;
          v207 = v209 + 1;
          v206 = v209;
          *(_QWORD *)(a1 + 4832) = v209;
        }
        v210 = (char *)v206 + v208;
        *v207 = v208 + 32;
        *((_QWORD *)v210 + 2) = off_161838;
        v26 = (__int64)(v210 + 16);
        *(_DWORD *)(v26 + 8) = 16843015;
        *(_QWORD *)(v26 + 16) = v205;
        *(_QWORD *)(v26 + 24) = v211;
        return v26;
      case 'v':
        v156 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v80 = v156 + 1;
        v157 = v156[1];
        if ( (unsigned __int64)(v157 + 32) >= 0xFF0 )
        {
          v158 = (_QWORD *)operator new[](0x1000u);
          v157 = 0;
          *v158 = v156;
          v158[1] = 0;
          v80 = v158 + 1;
          v156 = v158;
          *(_QWORD *)(a1 + 4832) = v158;
        }
        v83 = v157 + 32;
        v84 = (char *)v156 + v157;
        v78 = "void";
LABEL_149:
        *v80 = v83;
        *((_QWORD *)v84 + 2) = off_161838;
        v26 = (__int64)(v84 + 16);
        v93 = v78 + 4;
        goto LABEL_164;
      case 'w':
        v159 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v160 = v159 + 1;
        v161 = v159[1];
        if ( (unsigned __int64)(v161 + 32) >= 0xFF0 )
        {
          v162 = (_QWORD *)operator new[](0x1000u);
          v161 = 0;
          *v162 = v159;
          v162[1] = 0;
          v160 = v162 + 1;
          v159 = v162;
          *(_QWORD *)(a1 + 4832) = v162;
        }
        v163 = (char *)v159 + v161;
        v78 = "wchar_t";
        *v160 = v161 + 32;
        *((_QWORD *)v163 + 2) = off_161838;
        v26 = (__int64)(v163 + 16);
        v93 = "";
        goto LABEL_164;
      case 'x':
        v164 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v165 = v164 + 1;
        v166 = v164[1];
        if ( (unsigned __int64)(v166 + 32) >= 0xFF0 )
        {
          v167 = (_QWORD *)operator new[](0x1000u);
          v166 = 0;
          *v167 = v164;
          v167[1] = 0;
          v165 = v167 + 1;
          v164 = v167;
          *(_QWORD *)(a1 + 4832) = v167;
        }
        v168 = v166 + 32;
        v169 = (char *)v164 + v166;
        v78 = "long long";
LABEL_156:
        *v165 = v168;
        *((_QWORD *)v169 + 2) = off_161838;
        v26 = (__int64)(v169 + 16);
        v93 = v78 + 9;
        goto LABEL_164;
      case 'y':
        v170 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v171 = v170 + 1;
        v172 = v170[1];
        if ( (unsigned __int64)(v172 + 32) >= 0xFF0 )
        {
          v173 = (_QWORD *)operator new[](0x1000u);
          v172 = 0;
          *v173 = v170;
          v173[1] = 0;
          v171 = v173 + 1;
          v170 = v173;
          *(_QWORD *)(a1 + 4832) = v173;
        }
        v174 = (char *)v170 + v172;
        v78 = "unsigned long long";
        *v171 = v172 + 32;
        *((_QWORD *)v174 + 2) = off_161838;
        v26 = (__int64)(v174 + 16);
        v93 = "";
        goto LABEL_164;
      case 'z':
        v175 = *(_QWORD **)(a1 + 4832);
        *(_QWORD *)a1 = v2 + 1;
        v116 = v175 + 1;
        v176 = v175[1];
        if ( (unsigned __int64)(v176 + 32) >= 0xFF0 )
        {
          v177 = (_QWORD *)operator new[](0x1000u);
          v176 = 0;
          *v177 = v175;
          v177[1] = 0;
          v116 = v177 + 1;
          v175 = v177;
          *(_QWORD *)(a1 + 4832) = v177;
        }
        v119 = v176 + 32;
        v120 = (char *)v175 + v176;
        v78 = "...";
LABEL_163:
        *v116 = v119;
        *((_QWORD *)v120 + 2) = off_161838;
        v26 = (__int64)(v120 + 16);
        v93 = v78 + 3;
LABEL_164:
        *(_QWORD *)&v178 = v78;
        *((_QWORD *)&v178 + 1) = v93;
        *(_DWORD *)(v26 + 8) = 16843015;
        *(_OWORD *)(v26 + 16) = v178;
        return v26;
      default:
        goto LABEL_73;
    }
  }
  return v26;
}
// DC8B4: conditional instruction was optimized away because w10.4 is in (31..39)
// 161838: using guessed type __int64 (__fastcall *off_161838[7])();
// 161D28: using guessed type __int64 (__fastcall *off_161D28[7])();
// 162C08: using guessed type __int64 (__fastcall *off_162C08[7])();
// 163148: using guessed type __int64 (__fastcall *off_163148[7])();
// 1631B8: using guessed type __int64 (__fastcall *off_1631B8[7])();
// 163228: using guessed type __int64 (__fastcall *off_163228[7])();
// 163308: using guessed type __int64 (__fastcall *off_163308[7])();
// 163378: using guessed type __int64 (__fastcall *off_163378[7])();
// 1633E8: using guessed type __int64 (__fastcall *off_1633E8[7])();
// 163458: using guessed type __int64 (__fastcall *off_163458[7])();
