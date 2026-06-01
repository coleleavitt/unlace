/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D97A0
// Address: 0x00000000000D97A0

//----- (00000000000D97A0) ----------------------------------------------------
char *__fastcall sub_D97A0(__int64 a1)
{
  char *v1; // rax
  char *v2; // rcx
  char *v3; // r14
  char **v5; // r13
  char v6; // dl
  char v7; // bl
  __int64 v8; // rsi
  char *v9; // rax
  char *v10; // rbp
  char *v11; // rax
  char *v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  const char *v17; // rsi
  char *v18; // rdx
  int v19; // ecx
  unsigned __int64 v20; // rcx
  char v21; // dl
  int v22; // ecx
  int v23; // edx
  char *v24; // rax
  char *v25; // rbp
  char *v26; // rax
  char *v27; // r15
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  char v32; // di
  char *v33; // rax
  char *v34; // rax
  char *v35; // rbp
  char *v36; // rbx
  char *v37; // r15
  signed __int64 v38; // rbx
  __int64 v39; // r13
  char *v40; // r12
  char *v41; // rax
  char *v42; // rax
  char *v43; // rax
  char *v44; // rax
  char *v45; // rbp
  char *v46; // rax
  char *v47; // r15
  char *v48; // rax
  char *v49; // r12
  _QWORD *v50; // rbx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  char *v54; // rax
  char *v55; // rax
  char *v56; // rbp
  char *v57; // rbx
  char *v58; // r15
  signed __int64 v59; // rbx
  __int64 v60; // r13
  char *v61; // r12
  char *v62; // rax
  char *v63; // rax
  char *v64; // rax
  char *v65; // rax
  char *v66; // rbp
  char *v67; // rbx
  char *v68; // r15
  signed __int64 v69; // rbx
  __int64 v70; // r13
  char *v71; // r12
  char *v72; // rax
  char *v73; // rax
  char *v74; // rax
  char *v75; // rax
  char *v76; // rax
  char *v77; // rbp
  char *v78; // rbx
  _BYTE *v79; // r12
  signed __int64 v80; // rbx
  char *v81; // r15
  char *v82; // rax
  char *v83; // rax
  char *v84; // rbp
  _QWORD *v85; // rbx
  __int64 v86; // rcx
  _QWORD *v87; // rax
  _QWORD *v88; // rdx
  char v89; // bl
  char *v90; // rbp
  char *v91; // rax
  char *v92; // rcx
  char *v93; // rax
  char *v94; // rax
  char *v95; // rbp
  char *v96; // rbx
  _BYTE *v97; // r12
  signed __int64 v98; // rbx
  char *v99; // r15
  char *v100; // rax
  char *v101; // rbp
  char *v102; // rbx
  __int64 v103; // rcx
  char **v104; // rax
  _QWORD *v105; // rdx
  char *v106; // rax
  char *v107; // rax
  char *v108; // rax
  char *v109; // rbp
  char *v110; // rbx
  char *v111; // r12
  signed __int64 v112; // rbx
  __int64 v113; // r13
  char *v114; // r15
  char *v115; // rax
  char *v116; // rax
  _QWORD *v117; // rbx
  __int64 v118; // rcx
  _QWORD *v119; // rax
  _QWORD *v120; // rdx
  char *v121; // rax
  char *v122; // rbp
  _QWORD *v123; // rbx
  __int64 v124; // rcx
  _QWORD *v125; // rax
  _QWORD *v126; // rdx
  char *v127; // rax
  _QWORD *v128; // rax
  _QWORD *v129; // rdx
  char *v130; // rax
  char *v131; // rax
  _QWORD *v132; // rax
  _QWORD *v133; // rdx
  char *v134; // rax
  _QWORD *v135; // rax
  _QWORD *v136; // rdx
  char *v137; // rax
  _QWORD *v138; // rax
  _QWORD *v139; // rdx
  char *v140; // rax
  char **v141; // rax
  _QWORD *v142; // rdx
  char *v143; // rax
  _QWORD *v144; // rax
  _QWORD *v145; // rdx
  char *v146; // rax
  _QWORD *v147; // rax
  _QWORD *v148; // rdx
  char *v149; // rax
  char *v150; // rbp
  char *v151; // rax
  char *v152; // r15
  _QWORD *v153; // rbx
  __int64 v154; // rcx
  _QWORD *v155; // rax
  _QWORD *v156; // rdx
  char *v157; // r14
  signed __int64 v158; // r15
  unsigned __int64 v159; // rbp
  char *v160; // rbx
  __int64 v161; // rcx
  _QWORD *v162; // rax
  char *v163; // r12
  char *v164; // rax
  char *v165; // rax
  char *v166; // rax
  _QWORD *v167; // rax
  _QWORD *v168; // rdx
  char **v169; // rax
  _QWORD *v170; // rdx
  char *v171; // rax
  char v172; // al
  char *v173; // rax
  _QWORD *v174; // rax
  _QWORD *v175; // rdx
  char *v176; // rax
  char *v177; // rax
  _QWORD *v178; // rax
  _QWORD *v179; // rdx
  char *v180; // rax
  _QWORD *v181; // rax
  _QWORD *v182; // rdx
  char **v183; // rax
  _QWORD *v184; // rdx
  char *v185; // rax
  char *v186; // rbp
  _QWORD *v187; // rbx
  __int64 v188; // rcx
  _QWORD *v189; // rax
  _QWORD *v190; // rdx
  __m128i v191; // xmm0
  const char *v192; // rax
  char *v193; // rax
  char *v194; // r14
  _QWORD *v195; // rbp
  __int64 v196; // rcx
  _QWORD *v197; // rax
  _QWORD *v198; // rdx
  char *v199; // rax
  char *v200; // rax
  _QWORD *v201; // rax
  _QWORD *v202; // rdx
  char *v203; // rax
  _QWORD *v204; // rax
  _QWORD *v205; // rdx
  char *v206; // rax
  char *v207; // r14
  _QWORD *v208; // rbp
  __int64 v209; // rcx
  _QWORD *v210; // rax
  _QWORD *v211; // rdx
  char *v212; // rax
  char *v213; // rbp
  char *v214; // rax
  _QWORD *v215; // rax
  _QWORD *v216; // rdx
  char *v217; // rax
  char *v218; // rbp
  char *v219; // rax
  _QWORD *v220; // rax
  _QWORD *v221; // rdx
  char *v222; // rax
  char *v223; // rbp
  _QWORD *v224; // rax
  _QWORD *v225; // rdx
  _QWORD *v226; // rdx
  __m128i v227; // xmm0
  const char *v228; // rax
  __int64 (__fastcall **v229)(); // rax
  char *v230; // r12
  signed __int64 v231; // r14
  unsigned __int64 v232; // rbp
  char *v233; // rbx
  __int64 v234; // rcx
  _QWORD *v235; // rax
  char *v236; // r15
  const void *v237; // r14
  signed __int64 v238; // r12
  unsigned __int64 v239; // rbp
  char *v240; // rbx
  __int64 v241; // rcx
  _QWORD *v242; // rax
  char *v243; // rbp
  char *v244; // r14
  signed __int64 v245; // r12
  unsigned __int64 v246; // rbp
  __int64 v247; // rcx
  _QWORD *v248; // rax
  __m128i v249; // xmm0
  const char *v250; // rax
  char *v251; // rax
  char *v252; // r15
  _QWORD *v253; // rbx
  __int64 v254; // rcx
  char *v255; // r12
  _QWORD *v256; // rax
  _QWORD *v257; // rdx
  __m128i v258; // xmm0
  const char *v259; // rax
  char **v260; // rax
  __int64 v261; // r15
  __int64 v262; // rcx
  char **v263; // rax
  _QWORD *v264; // rdx
  __m128i v265; // xmm0
  const char *v266; // rax
  _QWORD *v267; // rdx
  char *v268; // rax
  _QWORD *v269; // rdx
  _QWORD *v270; // rdx
  char *v271; // r14
  signed __int64 v272; // r15
  unsigned __int64 v273; // rbp
  char *v274; // rbx
  __int64 v275; // rcx
  _QWORD *v276; // rax
  char *v277; // rbp
  char **v278; // rax
  __int64 v279; // r14
  __int64 v280; // rcx
  char **v281; // rax
  _QWORD *v282; // rdx
  char **v283; // rax
  _QWORD *v284; // rdx
  char **v285; // r14
  _QWORD *v286; // rbp
  __int64 v287; // rcx
  _QWORD *v288; // rax
  _QWORD *v289; // rdx
  char **v290; // rax
  __int64 v291; // r12
  __int64 v292; // rcx
  char **v293; // rax
  _QWORD *v294; // rdx
  char *v295; // rax
  char **v296; // rax
  char **v297; // rax
  _QWORD *v298; // rdx
  _QWORD *v299; // rdx
  const void *v300; // r14
  signed __int64 v301; // r12
  unsigned __int64 v302; // rbp
  __int64 v303; // rcx
  _QWORD *v304; // rax
  char **v305; // rax
  char *v306; // rax
  __int64 v307; // r15
  char *v308; // rsi
  char *v309; // rcx
  char *v310; // rsi
  char *v311; // rax
  char *v312; // rbp
  char *v313; // rbx
  char *v314; // r12
  signed __int64 v315; // rbx
  __int64 v316; // r13
  char *v317; // r15
  char *v318; // rax
  char *v319; // rax
  char *v320; // r12
  char *v321; // rbx
  __int64 v322; // rcx
  char **v323; // rax
  _QWORD *v324; // rdx
  _QWORD *v325; // rdx
  char **v326; // rax
  char **v327; // rax
  _QWORD *v328; // rdx
  char *v329; // r14
  signed __int64 v330; // r15
  unsigned __int64 v331; // rbp
  __int64 v332; // rcx
  _QWORD *v333; // rax
  char *v334; // rbp
  _QWORD *v335; // rdx
  char **v336; // rax
  __int64 v337; // r15
  char **v338; // rax
  _QWORD *v339; // rdx
  __int64 v340; // [rsp+8h] [rbp-70h]
  __int64 v341; // [rsp+8h] [rbp-70h]
  __int64 v342; // [rsp+8h] [rbp-70h]
  __int64 v343; // [rsp+8h] [rbp-70h]
  __int64 v344; // [rsp+8h] [rbp-70h]
  char *v345; // [rsp+8h] [rbp-70h]
  __int64 v346; // [rsp+8h] [rbp-70h]
  __int64 v347; // [rsp+8h] [rbp-70h]
  __int64 v348; // [rsp+8h] [rbp-70h]
  char *v349; // [rsp+10h] [rbp-68h]
  char **v350; // [rsp+18h] [rbp-60h]
  bool v351; // [rsp+20h] [rbp-58h]
  char *v352; // [rsp+20h] [rbp-58h]
  __int64 v353; // [rsp+20h] [rbp-58h]
  __int64 v354; // [rsp+20h] [rbp-58h]
  __int64 v355; // [rsp+28h] [rbp-50h]
  __int64 v356; // [rsp+30h] [rbp-48h]
  char *v357; // [rsp+30h] [rbp-48h]
  char *v358; // [rsp+30h] [rbp-48h]
  __int64 v359; // [rsp+38h] [rbp-40h]
  char *v360; // [rsp+40h] [rbp-38h]

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  if ( (unsigned __int64)&v2[-*(_QWORD *)a1] < 2 )
    return nullptr;
  v5 = (char **)a1;
  v6 = *v1;
  if ( *v1 == 103 )
  {
    if ( v1[1] == 115 )
    {
      v1 += 2;
      *(_QWORD *)a1 = v1;
      v7 = 1;
      if ( (unsigned __int64)(v2 - v1) < 2 )
        return nullptr;
    }
    else
    {
      v7 = 0;
    }
    v6 = *v1;
  }
  else
  {
    v7 = 0;
  }
  v3 = nullptr;
  v8 = (unsigned int)(v6 - 49);
  switch ( v6 )
  {
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      return sub_DD6C0(a1);
    case 'L':
      return sub_DC480((char **)a1, v8);
    case 'T':
      return (char *)sub_D85D0(a1);
    case 'a':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'N':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "&=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'S':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'a':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "&&";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'd':
          *(_QWORD *)a1 = v1 + 2;
          v166 = sub_D97A0(a1);
          if ( !v166 )
            return nullptr;
          v84 = v166;
          v85 = *(_QWORD **)(a1 + 4832);
          v86 = v85[1];
          if ( (unsigned __int64)(v86 + 48) < 0xFF0 )
          {
            v168 = v85 + 1;
          }
          else
          {
            v167 = (_QWORD *)operator new[](0x1000u);
            *v167 = v85;
            v167[1] = 0;
            *(_QWORD *)(a1 + 4832) = v167;
            v86 = 0;
            v168 = v167 + 1;
            v85 = v167;
          }
          *v168 = v86 + 48;
          v3 = (char *)v85 + v86 + 16;
          *(_DWORD *)((char *)v85 + v86 + 24) = 16843050;
          *(_QWORD *)v3 = off_151F88;
          v227 = (__m128i)(unsigned __int64)"";
          v228 = "&";
          goto LABEL_356;
        case 'n':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "&";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 't':
          *(_QWORD *)a1 = v1 + 2;
          v164 = sub_D4260(a1);
          if ( !v164 )
            return nullptr;
          goto LABEL_221;
        case 'z':
          *(_QWORD *)a1 = v1 + 2;
          v164 = sub_D97A0(a1);
          if ( !v164 )
            return nullptr;
LABEL_221:
          v101 = v164;
          v102 = *(char **)(a1 + 4832);
          v103 = *((_QWORD *)v102 + 1);
          if ( (unsigned __int64)(v103 + 64) < 0xFF0 )
          {
            v170 = v102 + 8;
          }
          else
          {
            v169 = (char **)operator new[](0x1000u);
            *v169 = v102;
            v169[1] = nullptr;
            *(_QWORD *)(a1 + 4832) = v169;
            v103 = 0;
            v170 = v169 + 1;
            v102 = (char *)v169;
          }
          *v170 = v103 + 64;
          v3 = &v102[v103 + 16];
          *(_DWORD *)&v102[v103 + 24] = 16843050;
          *(_QWORD *)v3 = off_1526F8;
          v191 = (__m128i)(unsigned __int64)"";
          v192 = "alignof (";
          break;
        default:
          return v3;
      }
      goto LABEL_372;
    case 'c':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'c':
          *(_QWORD *)a1 = v1 + 2;
          v9 = sub_D4260(a1);
          if ( !v9 )
            return nullptr;
          v10 = v9;
          v11 = sub_D97A0(a1);
          if ( !v11 )
            return nullptr;
          v12 = v11;
          v13 = *(_QWORD **)(a1 + 4832);
          v14 = v13[1];
          if ( (unsigned __int64)(v14 + 48) < 0xFF0 )
          {
            v16 = v13 + 1;
          }
          else
          {
            v15 = (_QWORD *)operator new[](0x1000u);
            *v15 = v13;
            v15[1] = 0;
            *(_QWORD *)(a1 + 4832) = v15;
            v14 = 0;
            v16 = v15 + 1;
            v13 = v15;
          }
          *v16 = v14 + 48;
          v3 = (char *)v13 + v14 + 16;
          *(_DWORD *)((char *)v13 + v14 + 24) = 16843050;
          *(_QWORD *)v3 = off_151FF8;
          v258 = (__m128i)(unsigned __int64)"";
          v259 = "const_cast";
          goto LABEL_346;
        case 'l':
          *(_QWORD *)a1 = v1 + 2;
          v74 = sub_D97A0(a1);
          if ( !v74 )
            return nullptr;
          v352 = v74;
          v356 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
          v3 = nullptr;
          while ( 2 )
          {
            v75 = *(char **)a1;
            if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) || *v75 != 69 )
            {
              v76 = sub_D97A0(a1);
              if ( v76 )
              {
                v77 = v76;
                v78 = *(char **)(a1 + 24);
                if ( v78 == *(char **)(a1 + 32) )
                {
                  v79 = *(_BYTE **)(a1 + 16);
                  v80 = v78 - v79;
                  v343 = v80 >> 2;
                  if ( (_BYTE *)(a1 + 40) == v79 )
                  {
                    v82 = (char *)malloc(2 * v80);
                    v81 = v82;
                    if ( v80 )
                      memmove(v82, v79, v80);
                  }
                  else
                  {
                    v81 = (char *)realloc(v79, 2 * v80);
                  }
                  *(_QWORD *)(a1 + 16) = v81;
                  v78 = &v81[8 * (v80 >> 3)];
                  *(_QWORD *)(a1 + 24) = v78;
                  *(_QWORD *)(a1 + 32) = &v81[8 * v343];
                }
                *(_QWORD *)(a1 + 24) = v78 + 8;
                *(_QWORD *)v78 = v77;
                continue;
              }
              return v3;
            }
            break;
          }
          *(_QWORD *)a1 = v75 + 1;
          v237 = (const void *)(8 * v356 + *(_QWORD *)(a1 + 16));
          v238 = *(_QWORD *)(a1 + 24) - (_QWORD)v237;
          v239 = ((_DWORD)v238 + 15) & 0xFFFFFFF0;
          v240 = *(char **)(a1 + 4832);
          v241 = *((_QWORD *)v240 + 1);
          if ( v241 + v239 < 0xFF0 )
          {
            v269 = v240 + 8;
          }
          else
          {
            if ( v239 >= 0xFF1 )
            {
              v242 = (_QWORD *)operator new[](v239 + 16);
              *v242 = *(_QWORD *)v240;
              v242[1] = 0;
              *(_QWORD *)v240 = v242;
              v243 = (char *)(v242 + 2);
              if ( !v238 )
                goto LABEL_381;
              goto LABEL_380;
            }
            v290 = (char **)operator new[](0x1000u);
            *v290 = v240;
            v290[1] = nullptr;
            *(_QWORD *)(a1 + 4832) = v290;
            v241 = 0;
            v269 = v290 + 1;
            v240 = (char *)v290;
          }
          *v269 = v241 + v239;
          v243 = &v240[v241 + 16];
          if ( !v238 )
          {
LABEL_381:
            v291 = v238 >> 3;
            *(_QWORD *)(a1 + 24) = v237;
            v292 = *((_QWORD *)v240 + 1);
            if ( (unsigned __int64)(v292 + 48) < 0xFF0 )
            {
              v294 = v240 + 8;
            }
            else
            {
              v293 = (char **)operator new[](0x1000u);
              *v293 = v240;
              v293[1] = nullptr;
              *(_QWORD *)(a1 + 4832) = v293;
              v292 = 0;
              v294 = v293 + 1;
              v240 = (char *)v293;
            }
            *v294 = v292 + 48;
            v3 = &v240[v292 + 16];
            *(_DWORD *)&v240[v292 + 24] = 16843050;
            *(_QWORD *)v3 = off_152068;
            v295 = v352;
            goto LABEL_392;
          }
LABEL_380:
          memmove(v243, v237, v238);
          v237 = (const void *)(*(_QWORD *)(a1 + 16) + 8 * v356);
          v240 = *(char **)(a1 + 4832);
          goto LABEL_381;
        case 'm':
          *(_QWORD *)a1 = v1 + 2;
          v17 = ",";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'o':
          *(_QWORD *)a1 = v1 + 2;
          v83 = sub_D97A0(a1);
          if ( !v83 )
            return nullptr;
          v84 = v83;
          v85 = *(_QWORD **)(a1 + 4832);
          v86 = v85[1];
          if ( (unsigned __int64)(v86 + 48) < 0xFF0 )
          {
            v88 = v85 + 1;
          }
          else
          {
            v87 = (_QWORD *)operator new[](0x1000u);
            *v87 = v85;
            v87[1] = 0;
            *(_QWORD *)(a1 + 4832) = v87;
            v86 = 0;
            v88 = v87 + 1;
            v85 = v87;
          }
          *v88 = v86 + 48;
          v3 = (char *)v85 + v86 + 16;
          *(_DWORD *)((char *)v85 + v86 + 24) = 16843050;
          *(_QWORD *)v3 = off_151F88;
          v227 = (__m128i)(unsigned __int64)"";
          v228 = "~";
          goto LABEL_356;
        case 'v':
          v3 = nullptr;
          if ( (unsigned __int64)(v2 - v1) < 2 || v6 != 99 || v1[1] != 118 )
            return v3;
          *(_QWORD *)a1 = v1 + 2;
          v89 = *(_BYTE *)(a1 + 720);
          *(_BYTE *)(a1 + 720) = 0;
          v90 = sub_D4260(a1);
          *(_BYTE *)(a1 + 720) = v89;
          if ( !v90 )
            return nullptr;
          v91 = *(char **)a1;
          v92 = *(char **)(a1 + 8);
          if ( *(char **)a1 == v92 || *v91 != 95 )
          {
            v251 = sub_D97A0(a1);
            if ( !v251 )
              return nullptr;
            v252 = v251;
            v253 = *(_QWORD **)(a1 + 4832);
            v254 = v253[1];
            v255 = v90;
            if ( (unsigned __int64)(v254 + 16) < 0xFF0 )
            {
              v257 = v253 + 1;
            }
            else
            {
              v256 = (_QWORD *)operator new[](0x1000u);
              *v256 = v253;
              v256[1] = 0;
              *(_QWORD *)(a1 + 4832) = v256;
              v254 = 0;
              v257 = v256 + 1;
              v253 = v256;
            }
            *v257 = v254 + 16;
            v285 = (char **)((char *)v253 + v254 + 16);
            *v285 = v252;
            v286 = *(_QWORD **)(a1 + 4832);
            v287 = v286[1];
            if ( (unsigned __int64)(v287 + 48) < 0xFF0 )
            {
              v289 = v286 + 1;
            }
            else
            {
              v288 = (_QWORD *)operator new[](0x1000u);
              *v288 = v286;
              v288[1] = 0;
              *(_QWORD *)(a1 + 4832) = v288;
              v287 = 0;
              v289 = v288 + 1;
              v286 = v288;
            }
            *v289 = v287 + 48;
            *(_DWORD *)((char *)v286 + v287 + 24) = 16843050;
            *(_QWORD *)((char *)v286 + v287 + 16) = off_1520D8;
            *(_QWORD *)((char *)v286 + v287 + 32) = v255;
            *(_QWORD *)((char *)v286 + v287 + 40) = v285;
            v3 = (char *)v286 + v287 + 16;
            *(_QWORD *)((char *)v286 + v287 + 48) = 1;
            return v3;
          }
          v357 = v90;
          v93 = v91 + 1;
          *(_QWORD *)a1 = v93;
          v353 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
          v3 = nullptr;
          if ( v93 == v92 )
            goto LABEL_140;
          while ( *v93 != 69 )
          {
            do
            {
LABEL_140:
              v94 = sub_D97A0(a1);
              if ( !v94 )
                return v3;
              v95 = v94;
              v96 = *(char **)(a1 + 24);
              if ( v96 == *(char **)(a1 + 32) )
              {
                v97 = *(_BYTE **)(a1 + 16);
                v98 = v96 - v97;
                v344 = v98 >> 2;
                if ( (_BYTE *)(a1 + 40) == v97 )
                {
                  v100 = (char *)malloc(2 * v98);
                  v99 = v100;
                  if ( v98 )
                    memmove(v100, v97, v98);
                }
                else
                {
                  v99 = (char *)realloc(v97, 2 * v98);
                }
                *(_QWORD *)(a1 + 16) = v99;
                v96 = &v99[8 * (v98 >> 3)];
                *(_QWORD *)(a1 + 24) = v96;
                *(_QWORD *)(a1 + 32) = &v99[8 * v344];
              }
              *(_QWORD *)(a1 + 24) = v96 + 8;
              *(_QWORD *)v96 = v95;
              v93 = *(char **)a1;
            }
            while ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) );
          }
          *(_QWORD *)a1 = v93 + 1;
          v354 = 8 * v353;
          v300 = (const void *)(v354 + *(_QWORD *)(a1 + 16));
          v301 = *(_QWORD *)(a1 + 24) - (_QWORD)v300;
          v302 = ((_DWORD)v301 + 15) & 0xFFFFFFF0;
          v240 = *(char **)(a1 + 4832);
          v303 = *((_QWORD *)v240 + 1);
          if ( v303 + v302 < 0xFF0 )
          {
            v325 = v240 + 8;
          }
          else
          {
            if ( v302 >= 0xFF1 )
            {
              v304 = (_QWORD *)operator new[](v302 + 16);
              *v304 = *(_QWORD *)v240;
              v304[1] = 0;
              *(_QWORD *)v240 = v304;
              v243 = (char *)(v304 + 2);
              if ( !v301 )
                goto LABEL_426;
              goto LABEL_425;
            }
            v326 = (char **)operator new[](0x1000u);
            *v326 = v240;
            v326[1] = nullptr;
            *(_QWORD *)(a1 + 4832) = v326;
            v303 = 0;
            v325 = v326 + 1;
            v240 = (char *)v326;
          }
          *v325 = v303 + v302;
          v243 = &v240[v303 + 16];
          if ( !v301 )
          {
LABEL_426:
            v291 = v301 >> 3;
            *(_QWORD *)(a1 + 24) = v300;
            v292 = *((_QWORD *)v240 + 1);
            if ( (unsigned __int64)(v292 + 48) < 0xFF0 )
            {
              v328 = v240 + 8;
            }
            else
            {
              v327 = (char **)operator new[](0x1000u);
              *v327 = v240;
              v327[1] = nullptr;
              *(_QWORD *)(a1 + 4832) = v327;
              v292 = 0;
              v328 = v327 + 1;
              v240 = (char *)v327;
            }
            *v328 = v292 + 48;
            v3 = &v240[v292 + 16];
            *(_DWORD *)&v240[v292 + 24] = 16843050;
            *(_QWORD *)v3 = off_1520D8;
            v295 = v357;
            goto LABEL_392;
          }
LABEL_425:
          memmove(v243, v300, v301);
          v300 = (const void *)(*(_QWORD *)(a1 + 16) + v354);
          v240 = *(char **)(a1 + 4832);
          goto LABEL_426;
        default:
          return v3;
      }
    case 'd':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'V':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "/=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'a':
          *(_QWORD *)a1 = v1 + 2;
          v193 = sub_D97A0(a1);
          if ( !v193 )
            return nullptr;
          v194 = v193;
          v195 = *(_QWORD **)(a1 + 4832);
          v196 = v195[1];
          if ( (unsigned __int64)(v196 + 32) < 0xFF0 )
          {
            v198 = v195 + 1;
          }
          else
          {
            v197 = (_QWORD *)operator new[](0x1000u);
            *v197 = v195;
            v197[1] = 0;
            *(_QWORD *)(a1 + 4832) = v197;
            v196 = 0;
            v198 = v197 + 1;
            v195 = v197;
          }
          *v198 = v196 + 32;
          *(_DWORD *)((char *)v195 + v196 + 24) = 16843050;
          *(_QWORD *)((char *)v195 + v196 + 16) = off_152148;
          *(_QWORD *)((char *)v195 + v196 + 32) = v194;
          v3 = (char *)v195 + v196 + 16;
          *((_BYTE *)v195 + v196 + 40) = v7;
          *((_BYTE *)v195 + v196 + 41) = 1;
          return v3;
        case 'c':
          *(_QWORD *)a1 = v1 + 2;
          v199 = sub_D4260(a1);
          if ( !v199 )
            return nullptr;
          v10 = v199;
          v200 = sub_D97A0(a1);
          if ( !v200 )
            return nullptr;
          v12 = v200;
          v13 = *(_QWORD **)(a1 + 4832);
          v14 = v13[1];
          if ( (unsigned __int64)(v14 + 48) < 0xFF0 )
          {
            v202 = v13 + 1;
          }
          else
          {
            v201 = (_QWORD *)operator new[](0x1000u);
            *v201 = v13;
            v201[1] = 0;
            *(_QWORD *)(a1 + 4832) = v201;
            v14 = 0;
            v202 = v201 + 1;
            v13 = v201;
          }
          *v202 = v14 + 48;
          v3 = (char *)v13 + v14 + 16;
          *(_DWORD *)((char *)v13 + v14 + 24) = 16843050;
          *(_QWORD *)v3 = off_151FF8;
          v258 = (__m128i)(unsigned __int64)"";
          v259 = "dynamic_cast";
          goto LABEL_346;
        case 'e':
          *(_QWORD *)a1 = v1 + 2;
          v203 = sub_D97A0(a1);
          if ( !v203 )
            return nullptr;
          v84 = v203;
          v85 = *(_QWORD **)(a1 + 4832);
          v86 = v85[1];
          if ( (unsigned __int64)(v86 + 48) < 0xFF0 )
          {
            v205 = v85 + 1;
          }
          else
          {
            v204 = (_QWORD *)operator new[](0x1000u);
            *v204 = v85;
            v204[1] = 0;
            *(_QWORD *)(a1 + 4832) = v204;
            v86 = 0;
            v205 = v204 + 1;
            v85 = v204;
          }
          *v205 = v86 + 48;
          v3 = (char *)v85 + v86 + 16;
          *(_DWORD *)((char *)v85 + v86 + 24) = 16843050;
          *(_QWORD *)v3 = off_151F88;
          v227 = (__m128i)(unsigned __int64)"";
          v228 = "*";
          goto LABEL_356;
        case 'l':
          *(_QWORD *)a1 = v1 + 2;
          v206 = sub_D97A0(a1);
          if ( !v206 )
            return nullptr;
          v207 = v206;
          v208 = *(_QWORD **)(a1 + 4832);
          v209 = v208[1];
          if ( (unsigned __int64)(v209 + 32) < 0xFF0 )
          {
            v211 = v208 + 1;
          }
          else
          {
            v210 = (_QWORD *)operator new[](0x1000u);
            *v210 = v208;
            v210[1] = 0;
            *(_QWORD *)(a1 + 4832) = v210;
            v209 = 0;
            v211 = v210 + 1;
            v208 = v210;
          }
          *v211 = v209 + 32;
          *(_DWORD *)((char *)v208 + v209 + 24) = 16843050;
          *(_QWORD *)((char *)v208 + v209 + 16) = off_152148;
          *(_QWORD *)((char *)v208 + v209 + 32) = v207;
          v3 = (char *)v208 + v209 + 16;
          *((_BYTE *)v208 + v209 + 40) = v7;
          *((_BYTE *)v208 + v209 + 41) = 0;
          return v3;
        case 'n':
          return sub_DD6C0(a1);
        case 's':
          *(_QWORD *)a1 = v1 + 2;
          v212 = sub_D97A0(a1);
          if ( !v212 )
            return nullptr;
          v213 = v212;
          v214 = sub_D97A0(a1);
          if ( !v214 )
            return nullptr;
          v152 = v214;
          v153 = *(_QWORD **)(a1 + 4832);
          v154 = v153[1];
          if ( (unsigned __int64)(v154 + 48) < 0xFF0 )
          {
            v216 = v153 + 1;
          }
          else
          {
            v215 = (_QWORD *)operator new[](0x1000u);
            *v215 = v153;
            v215[1] = 0;
            *(_QWORD *)(a1 + 4832) = v215;
            v154 = 0;
            v216 = v215 + 1;
            v153 = v215;
          }
          *v216 = v154 + 48;
          v3 = (char *)v153 + v154 + 16;
          *(_DWORD *)((char *)v153 + v154 + 24) = 16843050;
          *(_QWORD *)v3 = off_1523E8;
          *(_QWORD *)((char *)v153 + v154 + 32) = v213;
          v265 = (__m128i)(unsigned __int64)"";
          v266 = ".*";
          goto LABEL_351;
        case 't':
          *(_QWORD *)a1 = v1 + 2;
          v217 = sub_D97A0(a1);
          if ( !v217 )
            return nullptr;
          v218 = v217;
          v219 = sub_D97A0(a1);
          if ( !v219 )
            return nullptr;
          v152 = v219;
          v153 = *(_QWORD **)(a1 + 4832);
          v154 = v153[1];
          if ( (unsigned __int64)(v154 + 48) < 0xFF0 )
          {
            v221 = v153 + 1;
          }
          else
          {
            v220 = (_QWORD *)operator new[](0x1000u);
            *v220 = v153;
            v220[1] = 0;
            *(_QWORD *)(a1 + 4832) = v220;
            v154 = 0;
            v221 = v220 + 1;
            v153 = v220;
          }
          *v221 = v154 + 48;
          v3 = (char *)v153 + v154 + 16;
          *(_DWORD *)((char *)v153 + v154 + 24) = 16843050;
          *(_QWORD *)v3 = off_1523E8;
          *(_QWORD *)((char *)v153 + v154 + 32) = v218;
          v265 = (__m128i)(unsigned __int64)"";
          v266 = ".";
          goto LABEL_351;
        case 'v':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "/";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        default:
          return v3;
      }
    case 'e':
      v19 = v1[1];
      switch ( v19 )
      {
        case 'O':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "^=";
          v18 = "";
          break;
        case 'q':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "==";
          v18 = "";
          break;
        case 'o':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "^";
          v18 = "";
          break;
        default:
          return nullptr;
      }
      return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
    case 'f':
      v20 = v2 - v1;
      if ( v20 >= 2 && ((v21 = v1[1], v21 == 112) || v20 >= 3 && v21 == 76 && (unsigned int)(v1[2] - 48) <= 9) )
        return (char *)sub_DCDC0(a1);
      else
        return (char *)sub_DD030((_QWORD *)a1);
    case 'g':
      v22 = v1[1];
      if ( v22 == 116 )
      {
        *(_QWORD *)a1 = v1 + 2;
        v17 = ">";
        v18 = "";
      }
      else
      {
        if ( v22 != 101 )
          return nullptr;
        *(_QWORD *)a1 = v1 + 2;
        v17 = ">=";
        v18 = "";
      }
      return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
    case 'i':
      v23 = v1[1];
      if ( v23 != 108 )
      {
        if ( v23 != 120 )
          return nullptr;
        *(_QWORD *)a1 = v1 + 2;
        v24 = sub_D97A0(a1);
        if ( !v24 )
          return nullptr;
        v25 = v24;
        v26 = sub_D97A0(a1);
        if ( !v26 )
          return nullptr;
        v27 = v26;
        v28 = *(_QWORD **)(a1 + 4832);
        v29 = v28[1];
        if ( (unsigned __int64)(v29 + 32) < 0xFF0 )
        {
          v31 = v28 + 1;
        }
        else
        {
          v30 = (_QWORD *)operator new[](0x1000u);
          *v30 = v28;
          v30[1] = 0;
          *(_QWORD *)(a1 + 4832) = v30;
          v29 = 0;
          v31 = v30 + 1;
          v28 = v30;
        }
        *v31 = v29 + 32;
        v3 = (char *)v28 + v29 + 16;
        *(_DWORD *)((char *)v28 + v29 + 24) = 16843050;
        *(_QWORD *)v3 = off_152458;
        *(_QWORD *)((char *)v28 + v29 + 32) = v25;
        *(_QWORD *)((char *)v28 + v29 + 40) = v27;
        return v3;
      }
      v64 = v1 + 2;
      *(_QWORD *)a1 = v64;
      v342 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
      v3 = nullptr;
      if ( v64 == v2 )
        goto LABEL_100;
      while ( *v64 != 69 )
      {
        do
        {
LABEL_100:
          v65 = sub_DDE00((__int64)v5);
          if ( !v65 )
            return v3;
          v66 = v65;
          v67 = v5[3];
          if ( v67 == v5[4] )
          {
            v68 = v5[2];
            v69 = v67 - v68;
            v70 = v69 >> 2;
            if ( (char *)(a1 + 40) == v68 )
            {
              v72 = (char *)malloc(2 * v69);
              v71 = v72;
              if ( v69 )
                memmove(v72, v68, v69);
            }
            else
            {
              v71 = (char *)realloc(v68, 2 * v69);
            }
            *(_QWORD *)(a1 + 16) = v71;
            v67 = &v71[8 * (v69 >> 3)];
            *(_QWORD *)(a1 + 24) = v67;
            v73 = &v71[8 * v70];
            v5 = (char **)a1;
            *(_QWORD *)(a1 + 32) = v73;
            v3 = nullptr;
          }
          v5[3] = v67 + 8;
          *(_QWORD *)v67 = v66;
          v64 = *v5;
        }
        while ( *v5 == v5[1] );
      }
      *v5 = v64 + 1;
      v346 = 8 * v342;
      v157 = &v5[2][v346];
      v158 = v5[3] - v157;
      v159 = ((_DWORD)v158 + 15) & 0xFFFFFFF0;
      v160 = v5[604];
      v161 = *((_QWORD *)v160 + 1);
      if ( v161 + v159 < 0xFF0 )
      {
        v226 = v160 + 8;
      }
      else
      {
        if ( v159 >= 0xFF1 )
        {
          v162 = (_QWORD *)operator new[](v159 + 16);
          *v162 = *(_QWORD *)v160;
          v162[1] = 0;
          *(_QWORD *)v160 = v162;
          v163 = (char *)(v162 + 2);
          if ( !v158 )
            goto LABEL_322;
          goto LABEL_321;
        }
        v260 = (char **)operator new[](0x1000u);
        *v260 = v160;
        v260[1] = nullptr;
        v5[604] = (char *)v260;
        v161 = 0;
        v226 = v260 + 1;
        v160 = (char *)v260;
      }
      *v226 = v161 + v159;
      v163 = &v160[v161 + 16];
      if ( !v158 )
      {
LABEL_322:
        v261 = v158 >> 3;
        v5[3] = v157;
        v262 = *((_QWORD *)v160 + 1);
        if ( (unsigned __int64)(v262 + 48) < 0xFF0 )
        {
          v264 = v160 + 8;
        }
        else
        {
          v263 = (char **)operator new[](0x1000u);
          *v263 = v160;
          v263[1] = nullptr;
          v5[604] = (char *)v263;
          v262 = 0;
          v264 = v263 + 1;
          v160 = (char *)v263;
        }
        *v264 = v262 + 48;
        v3 = &v160[v262 + 16];
        *(_DWORD *)&v160[v262 + 24] = 16843050;
        *(_QWORD *)v3 = off_1525A8;
        *(_QWORD *)&v160[v262 + 32] = 0;
        *(_QWORD *)&v160[v262 + 40] = v163;
        *(_QWORD *)&v160[v262 + 48] = v261;
        return v3;
      }
LABEL_321:
      memmove(v163, v157, v158);
      v157 = &v5[2][v346];
      v160 = v5[604];
      goto LABEL_322;
    case 'l':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'S':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "<<=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'e':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "<=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 's':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "<<";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 't':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "<";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        default:
          return v3;
      }
    case 'm':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'I':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "-=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'L':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "*=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'i':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "-";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'l':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "*";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'm':
          *(_QWORD *)a1 = v1 + 2;
          if ( v1 + 2 != v2 && v1[2] == 95 )
          {
            *(_QWORD *)a1 = v1 + 3;
            v127 = sub_D97A0(a1);
            if ( !v127 )
              return nullptr;
            v84 = v127;
            v85 = *(_QWORD **)(a1 + 4832);
            v86 = v85[1];
            if ( (unsigned __int64)(v86 + 48) < 0xFF0 )
            {
              v129 = v85 + 1;
            }
            else
            {
              v128 = (_QWORD *)operator new[](0x1000u);
              *v128 = v85;
              v128[1] = 0;
              *(_QWORD *)(a1 + 4832) = v128;
              v86 = 0;
              v129 = v128 + 1;
              v85 = v128;
            }
            *v129 = v86 + 48;
            v3 = (char *)v85 + v86 + 16;
            *(_DWORD *)((char *)v85 + v86 + 24) = 16843050;
            *(_QWORD *)v3 = off_151F88;
            v227 = (__m128i)(unsigned __int64)"";
            v228 = "--";
            goto LABEL_356;
          }
          v185 = sub_D97A0(a1);
          if ( !v185 )
            return nullptr;
          v186 = v185;
          v187 = *(_QWORD **)(a1 + 4832);
          v188 = v187[1];
          if ( (unsigned __int64)(v188 + 48) < 0xFF0 )
          {
            v190 = v187 + 1;
          }
          else
          {
            v189 = (_QWORD *)operator new[](0x1000u);
            *v189 = v187;
            v189[1] = 0;
            *(_QWORD *)(a1 + 4832) = v189;
            v188 = 0;
            v190 = v189 + 1;
            v187 = v189;
          }
          *v190 = v188 + 48;
          v3 = (char *)v187 + v188 + 16;
          *(_DWORD *)((char *)v187 + v188 + 24) = 16843050;
          *(_QWORD *)v3 = off_152618;
          *(_QWORD *)((char *)v187 + v188 + 32) = v186;
          v249 = (__m128i)(unsigned __int64)"";
          v250 = "--";
          break;
        default:
          return v3;
      }
      goto LABEL_334;
    case 'n':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'a':
        case 'w':
          if ( (unsigned __int64)(v2 - v1) < 2 )
            return nullptr;
          v32 = 0;
          if ( v6 == 103 && v1[1] == 115 )
          {
            v1 += 2;
            *v5 = v1;
            v32 = 1;
            if ( (unsigned __int64)(v2 - v1) < 2 )
              return nullptr;
          }
          if ( *v1 != 110 || v1[1] != 119 && (*v1 != 110 || v1[1] != 97) )
            return nullptr;
          v351 = v1[1] == 97;
          v33 = v1 + 2;
          *v5 = v33;
          v340 = (v5[3] - v5[2]) >> 3;
          v349 = (char *)(v5 + 5);
          v3 = nullptr;
          v350 = v5;
          if ( v33 != v2 )
            goto LABEL_53;
          break;
        case 'e':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "!=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'g':
          *(_QWORD *)a1 = v1 + 2;
          v134 = sub_D97A0(a1);
          if ( !v134 )
            return nullptr;
          v84 = v134;
          v85 = *(_QWORD **)(a1 + 4832);
          v86 = v85[1];
          if ( (unsigned __int64)(v86 + 48) < 0xFF0 )
          {
            v136 = v85 + 1;
          }
          else
          {
            v135 = (_QWORD *)operator new[](0x1000u);
            *v135 = v85;
            v135[1] = 0;
            *(_QWORD *)(a1 + 4832) = v135;
            v86 = 0;
            v136 = v135 + 1;
            v85 = v135;
          }
          *v136 = v86 + 48;
          v3 = (char *)v85 + v86 + 16;
          *(_DWORD *)((char *)v85 + v86 + 24) = 16843050;
          *(_QWORD *)v3 = off_151F88;
          v227 = (__m128i)(unsigned __int64)"";
          v228 = "-";
          goto LABEL_356;
        case 't':
          *(_QWORD *)a1 = v1 + 2;
          v137 = sub_D97A0(a1);
          if ( !v137 )
            return nullptr;
          v84 = v137;
          v85 = *(_QWORD **)(a1 + 4832);
          v86 = v85[1];
          if ( (unsigned __int64)(v86 + 48) < 0xFF0 )
          {
            v139 = v85 + 1;
          }
          else
          {
            v138 = (_QWORD *)operator new[](0x1000u);
            *v138 = v85;
            v138[1] = 0;
            *(_QWORD *)(a1 + 4832) = v138;
            v86 = 0;
            v139 = v138 + 1;
            v85 = v138;
          }
          *v139 = v86 + 48;
          v3 = (char *)v85 + v86 + 16;
          *(_DWORD *)((char *)v85 + v86 + 24) = 16843050;
          *(_QWORD *)v3 = off_151F88;
          v227 = (__m128i)(unsigned __int64)"";
          v228 = "!";
          goto LABEL_356;
        case 'x':
          *(_QWORD *)a1 = v1 + 2;
          v140 = sub_D97A0(a1);
          if ( !v140 )
            return nullptr;
          v101 = v140;
          v102 = *(char **)(a1 + 4832);
          v103 = *((_QWORD *)v102 + 1);
          if ( (unsigned __int64)(v103 + 64) < 0xFF0 )
          {
            v142 = v102 + 8;
          }
          else
          {
            v141 = (char **)operator new[](0x1000u);
            *v141 = v102;
            v141[1] = nullptr;
            *(_QWORD *)(a1 + 4832) = v141;
            v103 = 0;
            v142 = v141 + 1;
            v102 = (char *)v141;
          }
          *v142 = v103 + 64;
          v3 = &v102[v103 + 16];
          *(_DWORD *)&v102[v103 + 24] = 16843050;
          *(_QWORD *)v3 = off_1526F8;
          v191 = (__m128i)(unsigned __int64)"";
          v192 = "noexcept (";
          goto LABEL_372;
        default:
          return v3;
      }
      do
      {
        do
        {
          v34 = sub_D97A0((__int64)v5);
          if ( !v34 )
            return v3;
          v35 = v34;
          v36 = v5[3];
          if ( v36 == v5[4] )
          {
            v37 = v5[2];
            v38 = v36 - v37;
            v39 = v38 >> 2;
            if ( v349 == v37 )
            {
              v41 = (char *)malloc(2 * v38);
              v40 = v41;
              if ( v38 )
                memmove(v41, v37, v38);
            }
            else
            {
              v40 = (char *)realloc(v37, 2 * v38);
            }
            v350[2] = v40;
            v36 = &v40[8 * (v38 >> 3)];
            v350[3] = v36;
            v42 = &v40[8 * v39];
            v5 = v350;
            v350[4] = v42;
            v3 = nullptr;
          }
          v5[3] = v36 + 8;
          *(_QWORD *)v36 = v35;
          v33 = *v5;
        }
        while ( *v5 == v5[1] );
LABEL_53:
        ;
      }
      while ( *v33 != 95 );
      *v5 = v33 + 1;
      v271 = &v5[2][8 * v340];
      v272 = v5[3] - v271;
      v273 = ((_DWORD)v272 + 15) & 0xFFFFFFF0;
      v274 = v5[604];
      v275 = *((_QWORD *)v274 + 1);
      if ( v275 + v273 < 0xFF0 )
      {
        v299 = v274 + 8;
      }
      else
      {
        if ( v273 >= 0xFF1 )
        {
          v276 = (_QWORD *)operator new[](v273 + 16);
          *v276 = *(_QWORD *)v274;
          v276[1] = 0;
          *(_QWORD *)v274 = v276;
          v277 = (char *)(v276 + 2);
          if ( !v272 )
            goto LABEL_403;
          goto LABEL_402;
        }
        v305 = (char **)operator new[](0x1000u);
        *v305 = v274;
        v305[1] = nullptr;
        v5[604] = (char *)v305;
        v275 = 0;
        v299 = v305 + 1;
        v274 = (char *)v305;
      }
      *v299 = v275 + v273;
      v277 = &v274[v275 + 16];
      if ( !v272 )
        goto LABEL_403;
LABEL_402:
      memmove(v277, v271, v272);
      v271 = &v5[2][8 * v340];
LABEL_403:
      v5[3] = v271;
      v306 = sub_D4260((__int64)v5);
      if ( !v306 )
        return nullptr;
      v307 = v272 >> 3;
      v308 = *v5;
      v309 = v5[1];
      if ( (unsigned __int64)(v309 - *v5) >= 2 && *v308 == 112 && v308[1] == 105 )
      {
        v360 = v306;
        v358 = v277;
        v348 = v307;
        v310 = v308 + 2;
        *v5 = v310;
        v359 = (v5[3] - v5[2]) >> 3;
        if ( v310 == v309 )
          goto LABEL_411;
LABEL_408:
        if ( *v310 != 69 )
        {
LABEL_411:
          while ( 1 )
          {
            v311 = sub_D97A0((__int64)v5);
            if ( !v311 )
              return nullptr;
            v312 = v311;
            v313 = v5[3];
            if ( v313 == v5[4] )
            {
              v314 = v5[2];
              v315 = v313 - v314;
              v316 = v315 >> 2;
              if ( v349 == v314 )
              {
                v318 = (char *)malloc(2 * v315);
                v317 = v318;
                if ( v315 )
                  memmove(v318, v314, v315);
              }
              else
              {
                v317 = (char *)realloc(v314, 2 * v315);
              }
              v350[2] = v317;
              v313 = &v317[8 * (v315 >> 3)];
              v350[3] = v313;
              v319 = &v317[8 * v316];
              v5 = v350;
              v350[4] = v319;
            }
            v5[3] = v313 + 8;
            *(_QWORD *)v313 = v312;
            v310 = *v5;
            if ( *v5 != v5[1] )
              goto LABEL_408;
          }
        }
        *v5 = v310 + 1;
        v329 = &v5[2][8 * v359];
        v330 = v5[3] - v329;
        v331 = ((_DWORD)v330 + 15) & 0xFFFFFFF0;
        v321 = v5[604];
        v332 = *((_QWORD *)v321 + 1);
        if ( v332 + v331 < 0xFF0 )
        {
          v335 = v321 + 8;
        }
        else
        {
          if ( v331 >= 0xFF1 )
          {
            v333 = (_QWORD *)operator new[](v331 + 16);
            *v333 = *(_QWORD *)v321;
            v333[1] = 0;
            *(_QWORD *)v321 = v333;
            v334 = (char *)(v333 + 2);
            if ( !v330 )
              goto LABEL_441;
            goto LABEL_440;
          }
          v336 = (char **)operator new[](0x1000u);
          *v336 = v321;
          v336[1] = nullptr;
          v350[604] = (char *)v336;
          v332 = 0;
          v335 = v336 + 1;
          v321 = (char *)v336;
        }
        *v335 = v332 + v331;
        v334 = &v321[v332 + 16];
        if ( !v330 )
        {
LABEL_441:
          v337 = v330 >> 3;
          v350[3] = v329;
          v322 = *((_QWORD *)v321 + 1);
          if ( (unsigned __int64)(v322 + 64) < 0xFF0 )
          {
            v339 = v321 + 8;
          }
          else
          {
            v338 = (char **)operator new[](0x1000u);
            *v338 = v321;
            v338[1] = nullptr;
            v350[604] = (char *)v338;
            v322 = 0;
            v339 = v338 + 1;
            v321 = (char *)v338;
          }
          *v339 = v322 + 64;
          v3 = &v321[v322 + 16];
          *(_DWORD *)&v321[v322 + 24] = 16843050;
          *(_QWORD *)v3 = off_152688;
          *(_QWORD *)&v321[v322 + 32] = v358;
          *(_QWORD *)&v321[v322 + 40] = v348;
          *(_QWORD *)&v321[v322 + 48] = v360;
          *(_QWORD *)&v321[v322 + 56] = v334;
          *(_QWORD *)&v321[v322 + 64] = v337;
LABEL_432:
          v321[v322 + 72] = v32;
          v321[v322 + 73] = v351;
          return v3;
        }
LABEL_440:
        memmove(v334, v329, v330);
        v329 = &v350[2][8 * v359];
        v321 = v350[604];
        goto LABEL_441;
      }
      if ( v308 != v309 && *v308 == 69 )
      {
        v320 = v306;
        *v5 = v308 + 1;
        v321 = v5[604];
        v322 = *((_QWORD *)v321 + 1);
        if ( (unsigned __int64)(v322 + 64) < 0xFF0 )
        {
          v324 = v321 + 8;
        }
        else
        {
          v323 = (char **)operator new[](0x1000u);
          *v323 = v321;
          v323[1] = nullptr;
          v5[604] = (char *)v323;
          v322 = 0;
          v324 = v323 + 1;
          v321 = (char *)v323;
        }
        *v324 = v322 + 64;
        v3 = &v321[v322 + 16];
        *(_DWORD *)&v321[v322 + 24] = 16843050;
        *(_QWORD *)v3 = off_152688;
        *(_QWORD *)&v321[v322 + 32] = v277;
        *(_QWORD *)&v321[v322 + 40] = v307;
        *(_QWORD *)&v321[v322 + 48] = v320;
        *(_OWORD *)&v321[v322 + 56] = 0;
        goto LABEL_432;
      }
      return nullptr;
    case 'o':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'R':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "|=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'n':
          return sub_DD6C0(a1);
        case 'o':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "||";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'r':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "|";
          v18 = (char *)"";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        default:
          return v3;
      }
    case 'p':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'L':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "+=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'l':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "+";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'm':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "->*";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'p':
          *(_QWORD *)a1 = v1 + 2;
          if ( v1 + 2 != v2 && v1[2] == 95 )
          {
            *(_QWORD *)a1 = v1 + 3;
            v143 = sub_D97A0(a1);
            if ( !v143 )
              return nullptr;
            v84 = v143;
            v85 = *(_QWORD **)(a1 + 4832);
            v86 = v85[1];
            if ( (unsigned __int64)(v86 + 48) < 0xFF0 )
            {
              v145 = v85 + 1;
            }
            else
            {
              v144 = (_QWORD *)operator new[](0x1000u);
              *v144 = v85;
              v144[1] = 0;
              *(_QWORD *)(a1 + 4832) = v144;
              v86 = 0;
              v145 = v144 + 1;
              v85 = v144;
            }
            *v145 = v86 + 48;
            v3 = (char *)v85 + v86 + 16;
            *(_DWORD *)((char *)v85 + v86 + 24) = 16843050;
            *(_QWORD *)v3 = off_151F88;
            v227 = (__m128i)(unsigned __int64)"";
            v228 = "++";
LABEL_356:
            *(__m128i *)((char *)v85 + v86 + 32) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v228, v227);
            *(_QWORD *)((char *)v85 + v86 + 48) = v84;
            return v3;
          }
          v222 = sub_D97A0(a1);
          if ( !v222 )
            return nullptr;
          v223 = v222;
          v187 = *(_QWORD **)(a1 + 4832);
          v188 = v187[1];
          if ( (unsigned __int64)(v188 + 48) < 0xFF0 )
          {
            v225 = v187 + 1;
          }
          else
          {
            v224 = (_QWORD *)operator new[](0x1000u);
            *v224 = v187;
            v224[1] = 0;
            *(_QWORD *)(a1 + 4832) = v224;
            v188 = 0;
            v225 = v224 + 1;
            v187 = v224;
          }
          *v225 = v188 + 48;
          v3 = (char *)v187 + v188 + 16;
          *(_DWORD *)((char *)v187 + v188 + 24) = 16843050;
          *(_QWORD *)v3 = off_152618;
          *(_QWORD *)((char *)v187 + v188 + 32) = v223;
          v249 = (__m128i)(unsigned __int64)"";
          v250 = "++";
          break;
        case 's':
          *(_QWORD *)a1 = v1 + 2;
          v146 = sub_D97A0(a1);
          if ( !v146 )
            return nullptr;
          v84 = v146;
          v85 = *(_QWORD **)(a1 + 4832);
          v86 = v85[1];
          if ( (unsigned __int64)(v86 + 48) < 0xFF0 )
          {
            v148 = v85 + 1;
          }
          else
          {
            v147 = (_QWORD *)operator new[](0x1000u);
            *v147 = v85;
            v147[1] = 0;
            *(_QWORD *)(a1 + 4832) = v147;
            v86 = 0;
            v148 = v147 + 1;
            v85 = v147;
          }
          *v148 = v86 + 48;
          v3 = (char *)v85 + v86 + 16;
          *(_DWORD *)((char *)v85 + v86 + 24) = 16843050;
          *(_QWORD *)v3 = off_151F88;
          v227 = (__m128i)(unsigned __int64)"";
          v228 = "+";
          goto LABEL_356;
        case 't':
          *(_QWORD *)a1 = v1 + 2;
          v149 = sub_D97A0(a1);
          if ( !v149 )
            return nullptr;
          v150 = v149;
          v151 = sub_D97A0(a1);
          if ( !v151 )
            return nullptr;
          v152 = v151;
          v153 = *(_QWORD **)(a1 + 4832);
          v154 = v153[1];
          if ( (unsigned __int64)(v154 + 48) < 0xFF0 )
          {
            v156 = v153 + 1;
          }
          else
          {
            v155 = (_QWORD *)operator new[](0x1000u);
            *v155 = v153;
            v155[1] = 0;
            *(_QWORD *)(a1 + 4832) = v155;
            v154 = 0;
            v156 = v155 + 1;
            v153 = v155;
          }
          *v156 = v154 + 48;
          v3 = (char *)v153 + v154 + 16;
          *(_DWORD *)((char *)v153 + v154 + 24) = 16843050;
          *(_QWORD *)v3 = off_1523E8;
          *(_QWORD *)((char *)v153 + v154 + 32) = v150;
          v265 = (__m128i)(unsigned __int64)"";
          v266 = "->";
LABEL_351:
          *(__m128i *)((char *)v153 + v154 + 40) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v266, v265);
          *(_QWORD *)((char *)v153 + v154 + 56) = v152;
          return v3;
        default:
          return v3;
      }
LABEL_334:
      *(__m128i *)((char *)v187 + v188 + 40) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v250, v249);
      return v3;
    case 'q':
      if ( v1[1] != 117 )
        return nullptr;
      *(_QWORD *)a1 = v1 + 2;
      v44 = sub_D97A0(a1);
      if ( !v44 )
        return nullptr;
      v45 = v44;
      v46 = sub_D97A0(a1);
      if ( !v46 )
        return nullptr;
      v47 = v46;
      v48 = sub_D97A0(a1);
      if ( !v48 )
        return nullptr;
      v49 = v48;
      v50 = *(_QWORD **)(a1 + 4832);
      v51 = v50[1];
      if ( (unsigned __int64)(v51 + 48) < 0xFF0 )
      {
        v53 = v50 + 1;
      }
      else
      {
        v52 = (_QWORD *)operator new[](0x1000u);
        *v52 = v50;
        v52[1] = 0;
        *(_QWORD *)(a1 + 4832) = v52;
        v51 = 0;
        v53 = v52 + 1;
        v50 = v52;
      }
      *v53 = v51 + 48;
      v3 = (char *)v50 + v51 + 16;
      *(_DWORD *)((char *)v50 + v51 + 24) = 16843050;
      *(_QWORD *)v3 = off_152768;
      *(_QWORD *)((char *)v50 + v51 + 32) = v45;
      *(_QWORD *)((char *)v50 + v51 + 40) = v47;
      *(_QWORD *)((char *)v50 + v51 + 48) = v49;
      return v3;
    case 'r':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'M':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "%=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'S':
          *(_QWORD *)a1 = v1 + 2;
          v17 = ">>=";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 'c':
          *(_QWORD *)a1 = v1 + 2;
          v130 = sub_D4260(a1);
          if ( !v130 )
            return nullptr;
          v10 = v130;
          v131 = sub_D97A0(a1);
          if ( !v131 )
            return nullptr;
          v12 = v131;
          v13 = *(_QWORD **)(a1 + 4832);
          v14 = v13[1];
          if ( (unsigned __int64)(v14 + 48) < 0xFF0 )
          {
            v133 = v13 + 1;
          }
          else
          {
            v132 = (_QWORD *)operator new[](0x1000u);
            *v132 = v13;
            v132[1] = 0;
            *(_QWORD *)(a1 + 4832) = v132;
            v14 = 0;
            v133 = v132 + 1;
            v13 = v132;
          }
          *v133 = v14 + 48;
          v3 = (char *)v13 + v14 + 16;
          *(_DWORD *)((char *)v13 + v14 + 24) = 16843050;
          *(_QWORD *)v3 = off_151FF8;
          v258 = (__m128i)(unsigned __int64)"";
          v259 = "reinterpret_cast";
          break;
        case 'm':
          *(_QWORD *)a1 = v1 + 2;
          v17 = "%";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        case 's':
          *(_QWORD *)a1 = v1 + 2;
          v17 = ">>";
          v18 = "";
          return (char *)sub_DD600(a1, (__int64)v17, (__int64)v18);
        default:
          return v3;
      }
LABEL_346:
      *(__m128i *)((char *)v13 + v14 + 32) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v259, v258);
      *(_QWORD *)((char *)v13 + v14 + 48) = v10;
      *(_QWORD *)((char *)v13 + v14 + 56) = v12;
      return v3;
    case 's':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'P':
          v54 = v1 + 2;
          *(_QWORD *)a1 = v54;
          v341 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
          v3 = nullptr;
          if ( v54 != v2 )
            goto LABEL_84;
          break;
        case 'Z':
          v171 = v1 + 2;
          *(_QWORD *)a1 = v171;
          if ( v2 == v171 )
            return nullptr;
          v172 = *v171;
          if ( v172 == 102 )
          {
            v268 = (char *)sub_DCDC0(a1);
            if ( !v268 )
              return nullptr;
            v101 = v268;
            goto LABEL_368;
          }
          if ( v172 != 84 )
            return nullptr;
          v173 = (char *)sub_D85D0(a1);
          if ( !v173 )
            return nullptr;
          v122 = v173;
          v123 = *(_QWORD **)(a1 + 4832);
          v124 = v123[1];
          if ( (unsigned __int64)(v124 + 32) < 0xFF0 )
          {
            v175 = v123 + 1;
          }
          else
          {
            v174 = (_QWORD *)operator new[](0x1000u);
            *v174 = v123;
            v174[1] = 0;
            *(_QWORD *)(a1 + 4832) = v174;
            v124 = 0;
            v175 = v174 + 1;
            v123 = v174;
          }
          *v175 = v124 + 32;
          v3 = (char *)v123 + v124 + 16;
          *(_DWORD *)((char *)v123 + v124 + 24) = 16843050;
          v229 = off_1527D8;
          goto LABEL_309;
        case 'c':
          *(_QWORD *)a1 = v1 + 2;
          v176 = sub_D4260(a1);
          if ( !v176 )
            return nullptr;
          v10 = v176;
          v177 = sub_D97A0(a1);
          if ( !v177 )
            return nullptr;
          v12 = v177;
          v13 = *(_QWORD **)(a1 + 4832);
          v14 = v13[1];
          if ( (unsigned __int64)(v14 + 48) < 0xFF0 )
          {
            v179 = v13 + 1;
          }
          else
          {
            v178 = (_QWORD *)operator new[](0x1000u);
            *v178 = v13;
            v178[1] = 0;
            *(_QWORD *)(a1 + 4832) = v178;
            v14 = 0;
            v179 = v178 + 1;
            v13 = v178;
          }
          *v179 = v14 + 48;
          v3 = (char *)v13 + v14 + 16;
          *(_DWORD *)((char *)v13 + v14 + 24) = 16843050;
          *(_QWORD *)v3 = off_151FF8;
          v258 = (__m128i)(unsigned __int64)"";
          v259 = "static_cast";
          goto LABEL_346;
        case 'p':
          *(_QWORD *)a1 = v1 + 2;
          v180 = sub_D97A0(a1);
          if ( !v180 )
            return nullptr;
          v122 = v180;
          v123 = *(_QWORD **)(a1 + 4832);
          v124 = v123[1];
          if ( (unsigned __int64)(v124 + 32) < 0xFF0 )
          {
            v182 = v123 + 1;
          }
          else
          {
            v181 = (_QWORD *)operator new[](0x1000u);
            *v181 = v123;
            v181[1] = 0;
            *(_QWORD *)(a1 + 4832) = v181;
            v124 = 0;
            v182 = v181 + 1;
            v123 = v181;
          }
          *v182 = v124 + 32;
          v3 = (char *)v123 + v124 + 16;
          *(_DWORD *)((char *)v123 + v124 + 24) = 16843037;
          v229 = off_151EA8;
          goto LABEL_309;
        case 'r':
          return sub_DD6C0(a1);
        case 't':
          *(_QWORD *)a1 = v1 + 2;
          v165 = sub_D4260(a1);
          if ( !v165 )
            return nullptr;
          goto LABEL_237;
        case 'z':
          *(_QWORD *)a1 = v1 + 2;
          v165 = sub_D97A0(a1);
          if ( !v165 )
            return nullptr;
LABEL_237:
          v101 = v165;
          v102 = *(char **)(a1 + 4832);
          v103 = *((_QWORD *)v102 + 1);
          if ( (unsigned __int64)(v103 + 64) < 0xFF0 )
          {
            v184 = v102 + 8;
          }
          else
          {
            v183 = (char **)operator new[](0x1000u);
            *v183 = v102;
            v183[1] = nullptr;
            *(_QWORD *)(a1 + 4832) = v183;
            v103 = 0;
            v184 = v183 + 1;
            v102 = (char *)v183;
          }
          *v184 = v103 + 64;
          v3 = &v102[v103 + 16];
          *(_DWORD *)&v102[v103 + 24] = 16843050;
          *(_QWORD *)v3 = off_1526F8;
          v191 = (__m128i)(unsigned __int64)"";
          v192 = "sizeof (";
          goto LABEL_372;
        default:
          return v3;
      }
      do
      {
        do
        {
          v55 = sub_D72F0((__int64)v5, v8);
          if ( !v55 )
            return v3;
          v56 = v55;
          v57 = v5[3];
          if ( v57 == v5[4] )
          {
            v58 = v5[2];
            v59 = v57 - v58;
            v60 = v59 >> 2;
            v8 = 2 * v59;
            if ( (char *)(a1 + 40) == v58 )
            {
              v62 = (char *)malloc(2 * v59);
              v61 = v62;
              if ( v59 )
              {
                v8 = (__int64)v58;
                memmove(v62, v58, v59);
              }
            }
            else
            {
              v61 = (char *)realloc(v58, v8);
            }
            *(_QWORD *)(a1 + 16) = v61;
            v57 = &v61[8 * (v59 >> 3)];
            *(_QWORD *)(a1 + 24) = v57;
            v63 = &v61[8 * v60];
            v5 = (char **)a1;
            *(_QWORD *)(a1 + 32) = v63;
            v3 = nullptr;
          }
          v5[3] = v57 + 8;
          *(_QWORD *)v57 = v56;
          v54 = *v5;
        }
        while ( *v5 == v5[1] );
LABEL_84:
        ;
      }
      while ( *v54 != 69 );
      *v5 = v54 + 1;
      v347 = 8 * v341;
      v230 = &v5[2][v347];
      v231 = v5[3] - v230;
      v232 = ((_DWORD)v231 + 15) & 0xFFFFFFF0;
      v233 = v5[604];
      v234 = *((_QWORD *)v233 + 1);
      if ( v234 + v232 < 0xFF0 )
      {
        v267 = v233 + 8;
      }
      else
      {
        if ( v232 >= 0xFF1 )
        {
          v235 = (_QWORD *)operator new[](v232 + 16);
          *v235 = *(_QWORD *)v233;
          v235[1] = 0;
          *(_QWORD *)v233 = v235;
          v236 = (char *)(v235 + 2);
          if ( !v231 )
            goto LABEL_364;
          goto LABEL_363;
        }
        v278 = (char **)operator new[](0x1000u);
        *v278 = v233;
        v278[1] = nullptr;
        v5[604] = (char *)v278;
        v234 = 0;
        v267 = v278 + 1;
        v233 = (char *)v278;
      }
      *v267 = v234 + v232;
      v236 = &v233[v234 + 16];
      if ( !v231 )
      {
LABEL_364:
        v279 = v231 >> 3;
        v5[3] = v230;
        v280 = *((_QWORD *)v233 + 1);
        if ( (unsigned __int64)(v280 + 32) < 0xFF0 )
        {
          v282 = v233 + 8;
        }
        else
        {
          v281 = (char **)operator new[](0x1000u);
          *v281 = v233;
          v281[1] = nullptr;
          v5[604] = (char *)v281;
          v280 = 0;
          v282 = v281 + 1;
          v233 = (char *)v281;
        }
        *v282 = v280 + 32;
        v101 = &v233[v280 + 16];
        *(_DWORD *)&v233[v280 + 24] = 16843008;
        *(_QWORD *)v101 = off_152848;
        *(_QWORD *)&v233[v280 + 32] = v236;
        *(_QWORD *)&v233[v280 + 40] = v279;
LABEL_368:
        v102 = v5[604];
        v103 = *((_QWORD *)v102 + 1);
        if ( (unsigned __int64)(v103 + 64) < 0xFF0 )
        {
          v284 = v102 + 8;
        }
        else
        {
          v283 = (char **)operator new[](0x1000u);
          *v283 = v102;
          v283[1] = nullptr;
          v5[604] = (char *)v283;
          v103 = 0;
          v284 = v283 + 1;
          v102 = (char *)v283;
        }
        *v284 = v103 + 64;
        v3 = &v102[v103 + 16];
        *(_DWORD *)&v102[v103 + 24] = 16843050;
        *(_QWORD *)v3 = off_1526F8;
        v191 = (__m128i)(unsigned __int64)"";
        v192 = "sizeof... (";
LABEL_372:
        *(__m128i *)&v102[v103 + 32] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v192, v191);
        *(_QWORD *)&v102[v103 + 48] = v101;
        *(__m128i *)&v102[v103 + 56] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)")", (__m128i)(unsigned __int64)"");
        return v3;
      }
LABEL_363:
      memmove(v236, v230, v231);
      v230 = &v5[2][v347];
      v233 = v5[604];
      goto LABEL_364;
    case 't':
      v3 = nullptr;
      switch ( v1[1] )
      {
        case 'e':
          *(_QWORD *)a1 = v1 + 2;
          v43 = sub_D97A0(a1);
          if ( !v43 )
            return nullptr;
          goto LABEL_148;
        case 'i':
          *(_QWORD *)a1 = v1 + 2;
          v43 = sub_D4260(a1);
          if ( !v43 )
            return nullptr;
LABEL_148:
          v101 = v43;
          v102 = *(char **)(a1 + 4832);
          v103 = *((_QWORD *)v102 + 1);
          if ( (unsigned __int64)(v103 + 64) < 0xFF0 )
          {
            v105 = v102 + 8;
          }
          else
          {
            v104 = (char **)operator new[](0x1000u);
            *v104 = v102;
            v104[1] = nullptr;
            *(_QWORD *)(a1 + 4832) = v104;
            v103 = 0;
            v105 = v104 + 1;
            v102 = (char *)v104;
          }
          *v105 = v103 + 64;
          v3 = &v102[v103 + 16];
          *(_DWORD *)&v102[v103 + 24] = 16843050;
          *(_QWORD *)v3 = off_1526F8;
          v191 = (__m128i)(unsigned __int64)"";
          v192 = "typeid (";
          goto LABEL_372;
        case 'l':
          *(_QWORD *)a1 = v1 + 2;
          v106 = sub_D4260(a1);
          if ( !v106 )
            return nullptr;
          v345 = v106;
          v355 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
          v3 = nullptr;
          break;
        case 'r':
          *(_QWORD *)a1 = v1 + 2;
          v117 = *(_QWORD **)(a1 + 4832);
          v118 = v117[1];
          if ( (unsigned __int64)(v118 + 32) < 0xFF0 )
          {
            v120 = v117 + 1;
          }
          else
          {
            v119 = (_QWORD *)operator new[](0x1000u);
            *v119 = v117;
            v119[1] = 0;
            *(_QWORD *)(a1 + 4832) = v119;
            v118 = 0;
            v120 = v119 + 1;
            v117 = v119;
          }
          *v120 = v118 + 32;
          v3 = (char *)v117 + v118 + 16;
          *(_DWORD *)((char *)v117 + v118 + 24) = 16843015;
          *(_QWORD *)v3 = off_1519B8;
          *(__m128i *)((char *)v117 + v118 + 32) = _mm_unpacklo_epi64(
                                                     (__m128i)(unsigned __int64)"throw",
                                                     (__m128i)(unsigned __int64)"");
          return v3;
        case 'w':
          *(_QWORD *)a1 = v1 + 2;
          v121 = sub_D97A0(a1);
          if ( !v121 )
            return nullptr;
          v122 = v121;
          v123 = *(_QWORD **)(a1 + 4832);
          v124 = v123[1];
          if ( (unsigned __int64)(v124 + 32) < 0xFF0 )
          {
            v126 = v123 + 1;
          }
          else
          {
            v125 = (_QWORD *)operator new[](0x1000u);
            *v125 = v123;
            v125[1] = 0;
            *(_QWORD *)(a1 + 4832) = v125;
            v124 = 0;
            v126 = v125 + 1;
            v123 = v125;
          }
          *v126 = v124 + 32;
          v3 = (char *)v123 + v124 + 16;
          *(_DWORD *)((char *)v123 + v124 + 24) = 16843050;
          v229 = off_1528B8;
LABEL_309:
          *(_QWORD *)((char *)v123 + v124 + 16) = v229;
          *(_QWORD *)((char *)v123 + v124 + 32) = v122;
          return v3;
        default:
          return v3;
      }
      while ( 2 )
      {
        v107 = *v5;
        if ( *v5 != v5[1] && *v107 == 69 )
        {
          *v5 = v107 + 1;
          v244 = &v5[2][8 * v355];
          v245 = v5[3] - v244;
          v246 = ((_DWORD)v245 + 15) & 0xFFFFFFF0;
          v240 = v5[604];
          v247 = *((_QWORD *)v240 + 1);
          if ( v247 + v246 < 0xFF0 )
          {
            v270 = v240 + 8;
          }
          else
          {
            if ( v246 >= 0xFF1 )
            {
              v248 = (_QWORD *)operator new[](v246 + 16);
              *v248 = *(_QWORD *)v240;
              v248[1] = 0;
              *(_QWORD *)v240 = v248;
              v243 = (char *)(v248 + 2);
              if ( !v245 )
              {
LABEL_388:
                v291 = v245 >> 3;
                v5[3] = v244;
                v292 = *((_QWORD *)v240 + 1);
                if ( (unsigned __int64)(v292 + 48) < 0xFF0 )
                {
                  v298 = v240 + 8;
                }
                else
                {
                  v297 = (char **)operator new[](0x1000u);
                  *v297 = v240;
                  v297[1] = nullptr;
                  v5[604] = (char *)v297;
                  v292 = 0;
                  v298 = v297 + 1;
                  v240 = (char *)v297;
                }
                *v298 = v292 + 48;
                v3 = &v240[v292 + 16];
                *(_DWORD *)&v240[v292 + 24] = 16843050;
                *(_QWORD *)v3 = off_1525A8;
                v295 = v345;
LABEL_392:
                *(_QWORD *)&v240[v292 + 32] = v295;
                *(_QWORD *)&v240[v292 + 40] = v243;
                *(_QWORD *)&v240[v292 + 48] = v291;
                return v3;
              }
LABEL_387:
              memmove(v243, v244, v245);
              v244 = &v5[2][8 * v355];
              v240 = v5[604];
              goto LABEL_388;
            }
            v296 = (char **)operator new[](0x1000u);
            *v296 = v240;
            v296[1] = nullptr;
            v5[604] = (char *)v296;
            v247 = 0;
            v270 = v296 + 1;
            v240 = (char *)v296;
          }
          *v270 = v247 + v246;
          v243 = &v240[v247 + 16];
          if ( !v245 )
            goto LABEL_388;
          goto LABEL_387;
        }
        v108 = sub_DDE00((__int64)v5);
        if ( v108 )
        {
          v109 = v108;
          v110 = v5[3];
          if ( v110 == v5[4] )
          {
            v111 = v5[2];
            v112 = v110 - v111;
            v113 = v112 >> 2;
            if ( (char *)(a1 + 40) == v111 )
            {
              v115 = (char *)malloc(2 * v112);
              v114 = v115;
              if ( v112 )
                memmove(v115, v111, v112);
            }
            else
            {
              v114 = (char *)realloc(v111, 2 * v112);
            }
            *(_QWORD *)(a1 + 16) = v114;
            v110 = &v114[8 * (v112 >> 3)];
            *(_QWORD *)(a1 + 24) = v110;
            v116 = &v114[8 * v113];
            v5 = (char **)a1;
            *(_QWORD *)(a1 + 32) = v116;
            v3 = nullptr;
          }
          v5[3] = v110 + 8;
          *(_QWORD *)v110 = v109;
          continue;
        }
        return v3;
      }
    default:
      return v3;
  }
}
// 1519B8: using guessed type __int64 (__fastcall *off_1519B8[7])();
// 151EA8: using guessed type __int64 (__fastcall *off_151EA8[7])();
// 151F88: using guessed type __int64 (__fastcall *off_151F88[7])();
// 151FF8: using guessed type __int64 (__fastcall *off_151FF8[7])();
// 152068: using guessed type __int64 (__fastcall *off_152068[7])();
// 1520D8: using guessed type __int64 (__fastcall *off_1520D8[7])();
// 152148: using guessed type __int64 (__fastcall *off_152148[7])();
// 1523E8: using guessed type __int64 (__fastcall *off_1523E8[7])();
// 152458: using guessed type __int64 (__fastcall *off_152458[7])();
// 1525A8: using guessed type __int64 (__fastcall *off_1525A8[7])();
// 152618: using guessed type __int64 (__fastcall *off_152618[7])();
// 152688: using guessed type __int64 (__fastcall *off_152688[7])();
// 1526F8: using guessed type __int64 (__fastcall *off_1526F8[7])();
// 152768: using guessed type __int64 (__fastcall *off_152768[7])();
// 1527D8: using guessed type __int64 (__fastcall *off_1527D8[7])();
// 152848: using guessed type __int64 (__fastcall *off_152848[7])();
// 1528B8: using guessed type __int64 (__fastcall *off_1528B8[7])();
