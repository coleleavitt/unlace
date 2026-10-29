__int64 *__fastcall sub_1031DF0(__int64 *a1, const __m128i *a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm0
  size_t v11; // rax
  unsigned int v12; // ecx
  __int64 v14; // r12
  __int64 v15; // rdx
  size_t v16; // rax
  __int64 v17; // r12
  char v18; // al
  __int64 v19; // r12
  char v20; // al
  __int64 v21; // r12
  size_t v22; // rax
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // rdx
  __m128i v26; // xmm0
  size_t v27; // rax
  __int64 v28; // r12
  __int64 v29; // rdx
  __m128i v30; // xmm0
  size_t v31; // rax
  __int64 v32; // r12
  __int64 v33; // r12
  __int64 v34; // r12
  __int64 v35; // r12
  __int64 v36; // rdx
  __m128i v37; // xmm0
  __int64 v38; // rax
  size_t v39; // rax
  size_t v40; // rax
  __int64 v41; // r12
  __int64 v42; // r12
  __int64 v43; // r12
  __int64 v44; // r12
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  size_t v51; // rax
  __int64 v52; // r12
  __int64 v53; // rdx
  __m128i v54; // xmm0
  __int64 v55; // r12
  __int64 v56; // rdx
  size_t v57; // rax
  __int64 v58; // r12
  __int64 v59; // r12
  __int64 v60; // r12
  __int64 v61; // r12
  __int64 v62; // rdx
  __m128i si128; // xmm0
  bool v64; // zf
  size_t v65; // rax
  __int64 v66; // r12
  __int64 v67; // rdx
  __int64 v68; // rax
  __m128i v69; // xmm0
  size_t v70; // rax
  _QWORD *v71; // r12
  __int64 v72; // rdx
  __int64 v73; // r12
  __int64 v74; // rdx
  __int64 v75; // r12
  __int64 v76; // r12
  __int64 v77; // rdx
  __m128i v78; // xmm0
  __int64 v79; // rax
  size_t v80; // rax
  __int64 v81; // r12
  __int64 v82; // r12
  __int64 v83; // r12
  __int64 v84; // rdx
  size_t v85; // rax
  __int64 v86; // r12
  __int64 v87; // r13
  __int64 v88; // r14
  __int64 v89; // r12
  __int64 v90; // rdx
  size_t v91; // rax
  __int64 v92; // r12
  __int64 v93; // rdx
  __m128i v94; // xmm0
  size_t v95; // rax
  __int64 v96; // r12
  __int64 v97; // r12
  __int64 v98; // rdx
  __int64 v99; // r12
  __int64 v100; // rdx
  unsigned int v101; // ecx
  __int64 v102; // r12
  __int64 v103; // rdx
  __int64 v104; // r12
  __int64 v105; // rdx
  int v106; // eax
  __int64 v107; // r12
  __int64 v108; // rdx
  unsigned int v109; // ecx
  __int64 v110; // rax
  __int64 v111; // r12
  _QWORD *v112; // r12
  __int64 v113; // r12
  unsigned int v114; // ecx
  __int64 v115; // rax
  __int64 v116; // r12
  __int64 v117; // r12
  __int64 v118; // r12
  __int64 v119; // r12
  __int64 v120; // r12
  size_t v121; // rax
  __int64 v122; // r12
  __int64 v123; // r12
  __int64 v124; // r12
  __int64 v125; // r12
  __int64 v126; // r12
  __int32 v127; // eax
  __int64 v128; // r12
  unsigned int v129; // ecx
  __int64 v130; // r12
  __int64 v131; // r12
  __int64 v132; // r12
  __int64 v133; // r12
  unsigned int v134; // ecx
  __int64 v135; // rax
  __int64 v136; // r12
  __int64 v137; // r12
  __int64 v138; // rdx
  __int64 v139; // r12
  _QWORD *v140; // r12
  __int64 v141; // r12
  __int32 v142; // eax
  __int32 v143; // eax
  __int64 v144; // r12
  __int64 v145; // r12
  unsigned int v146; // ecx
  __int64 v147; // rax
  __int64 v148; // r12
  unsigned int v149; // ecx
  __int64 v150; // r12
  __int64 v151; // r12
  __int64 v152; // r12
  __int64 v153; // rdx
  __int64 v154; // r12
  __int64 v155; // r12
  __int64 v156; // r12
  __int64 v157; // r12
  __int64 v158; // r12
  __int64 v159; // r12
  __int64 v160; // r12
  unsigned int v161; // ecx
  __int64 v162; // r12
  __int64 v163; // r12
  __int64 v164; // r12
  __int64 v165; // r12
  __int32 v166; // eax
  __int64 v167; // r12
  unsigned int v168; // ecx
  __int64 v169; // rax
  __int64 v170; // r12
  __int64 v171; // r12
  __int64 v172; // r12
  __int64 v173; // rdx
  unsigned int v174; // ecx
  __int64 v175; // r12
  __int64 v176; // rax
  __int64 v177; // r12
  __int32 v178; // eax
  _BYTE *v179; // rsi
  __int64 v180; // rdx
  __int64 v181; // rdx
  __int32 v182; // eax
  size_t v183; // rax
  __int64 v184; // rax
  __int64 v185; // r12
  __int64 v186; // rax
  __int64 v187; // r12
  __int64 v188; // rax
  __int64 v189; // r12
  __int32 v190; // eax
  _BYTE *v191; // rsi
  __int64 v192; // rdx
  __int64 v193; // rax
  size_t v194; // rax
  _BYTE *v195; // rdi
  __int64 v196; // r12
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // r12
  __int64 v200; // rdx
  __m128i v201; // xmm0
  size_t v202; // rax
  size_t v203; // rax
  unsigned int v204; // ecx
  __int64 v205; // r12
  unsigned int v206; // ecx
  size_t v207; // rax
  __int64 v208; // r12
  __int64 v209; // rdx
  size_t v210; // rax
  unsigned int v211; // ecx
  __int64 v212; // r12
  __int64 v213; // rdx
  __int64 v214; // r12
  __int64 v215; // rdx
  char v216; // al
  __int64 v217; // r12
  __int64 v218; // rdx
  unsigned int v219; // ecx
  _QWORD *v220; // r12
  __int64 v221; // rdx
  size_t v222; // rax
  __int64 v223; // r12
  __int64 v224; // rdx
  size_t v225; // rax
  unsigned int v226; // ecx
  __int64 v227; // r12
  __int64 v228; // r12
  unsigned int v229; // ecx
  __int64 v230; // r12
  unsigned int v231; // ecx
  __int64 v232; // rax
  __int64 v233; // r12
  unsigned int v234; // ecx
  __int64 v235; // r12
  __int64 v236; // r12
  __int64 v237; // r12
  __int64 v238; // r12
  unsigned int v239; // ecx
  __int64 v240; // r12
  __int64 v241; // rdx
  __int64 v242; // r12
  __int64 v243; // rdx
  int v244; // eax
  __int64 v245; // r12
  __int64 v246; // rdx
  __int64 v247; // r12
  __int64 v248; // r12
  __int64 v249; // rdx
  size_t v250; // rax
  unsigned int v251; // ecx
  __int64 v252; // r12
  __int64 v253; // r12
  __int64 v254; // rdx
  __int64 v255; // r12
  __int64 v256; // r12
  unsigned int v257; // ecx
  __int64 v258; // r12
  __int64 v259; // r12
  __int64 v260; // r12
  __int64 v261; // r12
  __int64 v262; // r12
  __int64 v263; // r12
  __int64 v264; // r12
  __int64 v265; // r12
  _QWORD *v266; // r12
  __int64 v267; // r12
  __int64 v268; // r12
  _QWORD *v269; // r12
  __int64 v270; // r12
  __int64 v271; // r12
  __int64 v272; // r12
  __int64 v273; // r12
  __int64 v274; // r12
  __int32 v275; // eax
  __int32 v276; // eax
  __int64 v277; // r12
  __int64 v278; // r12
  int v279; // eax
  __int64 v280; // r12
  unsigned int v281; // ecx
  __int64 v282; // rax
  __int64 v283; // r12
  _QWORD *v284; // r12
  _QWORD *v285; // r12
  __int64 v286; // r12
  __int64 v287; // r12
  __int64 v288; // r12
  __int32 v289; // eax
  __int32 v290; // eax
  __int64 v291; // r12
  __int64 v292; // r12
  __int64 v293; // rax
  __m128i v294; // xmm0
  __int64 v295; // r12
  __m128i v296; // xmm0
  __int64 v297; // rax
  __int64 v298; // r12
  __m128i v299; // xmm0
  __int64 v300; // rax
  __int64 v301; // r12
  int v302; // eax
  __int64 v303; // r12
  unsigned int v304; // ecx
  __int64 v305; // rax
  __int64 v306; // r12
  __int64 v307; // r12
  __int64 v308; // r12
  unsigned int v309; // ecx
  __int64 v310; // r12
  unsigned int v311; // ecx
  __int64 v312; // rax
  __int64 v313; // r12
  __int64 v314; // r12
  __int64 v315; // r12
  __int64 v316; // r12
  __int32 v317; // eax
  __int64 v318; // r12
  unsigned int v319; // ecx
  __int64 v320; // r12
  __int64 v321; // rax
  __int64 v322; // r12
  unsigned int v323; // ecx
  __int64 v324; // rax
  __int64 v325; // r12
  __int64 v326; // r12
  _QWORD *v327; // r12
  __int64 v328; // r12
  __int64 v329; // r12
  __int64 v330; // r12
  __int64 v331; // r12
  _QWORD *v332; // r12
  __m128i v333; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v334[16]; // [rsp+20h] [rbp-58h] BYREF
  __m128i v335; // [rsp+30h] [rbp-48h]
  __int64 v336; // [rsp+40h] [rbp-38h]

  v4 = a2[2].m128i_u32[3];
  switch ( a2[2].m128i_i32[0] )
  {
    case 1:
    case 0x23:
      if ( a2[3].m128i_i32[1] == 5 )
        goto LABEL_311;
      switch ( (int)v4 )
      {
        case 3:
          v150 = operator new(0x280u);
          sub_1051A00(v150, a2, a3);
          *(_QWORD *)v150 = &off_2BE8BA0;
          switch ( a2[2].m128i_i32[0] )
          {
            case 1:
              *(_QWORD *)(v150 + 328) = "__mcount";
              break;
            case 0xE:
            case 0x1C:
              break;
            case 0x10:
            case 0x11:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
              *(_QWORD *)(v150 + 328) = "_mcount";
              break;
            case 0x25:
            case 0x26:
              *(_BYTE *)(v150 + 278) = 1;
              goto LABEL_251;
            default:
LABEL_251:
              *(_QWORD *)(v150 + 328) = ".mcount";
              break;
          }
          *a1 = v150;
          return a1;
        case 7:
          if ( a2[3].m128i_i32[0] == 49 )
            goto LABEL_207;
          v148 = operator new(0x280u);
          sub_1051A00(v148, a2, a3);
          v149 = a2[2].m128i_u32[0];
          *(_DWORD *)(v148 + 156) = 6;
          *(_QWORD *)v148 = &off_2BE83C0;
          if ( v149 <= 0x26 )
          {
            if ( ((1LL << v149) & 0x1EF0000) != 0 )
            {
              *(_QWORD *)(v148 + 328) = "_mcount";
            }
            else if ( ((1LL << v149) & 0x6000000000LL) != 0 )
            {
              *(_BYTE *)(v148 + 278) = 1;
            }
          }
          *a1 = v148;
          return a1;
        case 11:
          v151 = operator new(0x280u);
          sub_1051A00(v151, a2, a3);
          *(_QWORD *)v151 = &off_2BE8F90;
          *(_QWORD *)(v151 + 328) = "__mcount";
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v151 + 278) = 1;
          *a1 = v151;
          return a1;
        case 12:
          v145 = operator new(0x280u);
          sub_1051A00(v145, a2, a3);
          v146 = a2[2].m128i_u32[0];
          *(_DWORD *)(v145 + 140) = 9;
          *(_QWORD *)v145 = &off_2BE9380;
          *(_QWORD *)(v145 + 152) = 0x500000005LL;
          *(_DWORD *)(v145 + 168) = 9;
          if ( v146 > 0x26 )
            goto LABEL_223;
          v147 = 1LL << v146;
          if ( ((1LL << v146) & 0x41AC0000) != 0 )
          {
            *(_QWORD *)(v145 + 328) = "_mcount";
          }
          else if ( (v147 & 0x10004000) == 0 )
          {
            if ( (v147 & 0x6000000000LL) != 0 )
              *(_BYTE *)(v145 + 278) = 1;
LABEL_223:
            *(_QWORD *)(v145 + 328) = "__mcount";
          }
          *a1 = v145;
          break;
        case 15:
          v143 = a2[3].m128i_i32[0];
          if ( v143 == 28 )
          {
            v264 = operator new(0x2B8u);
            sub_1051D20(v264, a2, a3);
            *a1 = v264;
          }
          else if ( v143 == 29 )
          {
            v263 = operator new(0x280u);
            sub_1051B90(v263, a2, a3);
            *a1 = v263;
          }
          else
          {
            if ( v143 == 1 )
            {
              v144 = operator new(0x2B8u);
              sub_1051C00(v144, a2, a3);
            }
            else
            {
              v144 = operator new(0x2B8u);
              sub_1051E40(v144, a2, a3);
            }
            *a1 = v144;
          }
          return a1;
        case 17:
          v141 = operator new(0x280u);
          sub_1051A00(v141, a2, a3);
          *(_DWORD *)(v141 + 136) = 8;
          *(_QWORD *)v141 = &off_2BE9B60;
          *(_QWORD *)(v141 + 144) = 0x700000007LL;
          v142 = a2[2].m128i_i32[0];
          *(_DWORD *)(v141 + 180) = 7;
          if ( (unsigned int)(v142 - 37) <= 1 )
            *(_BYTE *)(v141 + 278) = 1;
          *a1 = v141;
          return a1;
        case 18:
          v140 = (_QWORD *)operator new(0x280u);
          sub_1051A00(v140, a2, a3);
          *a1 = (__int64)v140;
          *v140 = &off_2BE9770;
          return a1;
        case 19:
          v139 = operator new(0x280u);
          sub_102E430(v139, (__int64)a2, a3);
          *a1 = v139;
          return a1;
        case 39:
LABEL_207:
          sub_102CC40(&v333.m128i_i64[1], (__int64)a2, a3);
          *a1 = v333.m128i_i64[1];
          return a1;
        default:
          v157 = operator new(0x280u);
          sub_1051A00(v157, a2, a3);
          *a1 = v157;
          return a1;
      }
      return a1;
    case 2:
    case 0x24:
      if ( (unsigned int)v4 <= 0x1F )
      {
        v186 = 4160750114LL;
        if ( _bittest64(&v186, v4) )
        {
LABEL_311:
          v187 = operator new(0x280u);
          sub_1051A40(v187, a2, a3);
          *a1 = v187;
          return a1;
        }
      }
      if ( a2[2].m128i_i32[2] == 1 && a2[3].m128i_i32[1] == 5 )
      {
        v265 = operator new(0x280u);
        sub_1051A20(v265, a2, a3);
        *a1 = v265;
        return a1;
      }
      if ( (_DWORD)v4 == 11 )
      {
        v270 = operator new(0x280u);
        sub_1051BE0(v270, a2, a3);
        *(_QWORD *)v270 = &off_2BEA730;
        *(_QWORD *)(v270 + 328) = "__mcount";
        if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
          *(_BYTE *)(v270 + 278) = 1;
        *a1 = v270;
        return a1;
      }
      if ( (unsigned int)v4 <= 0xB )
      {
        if ( (_DWORD)v4 == 7 )
        {
          v256 = operator new(0x280u);
          sub_1051BE0(v256, a2, a3);
          v257 = a2[2].m128i_u32[0];
          *(_DWORD *)(v256 + 156) = 6;
          *(_QWORD *)v256 = &off_2BEA340;
          if ( v257 <= 0x26 )
          {
            if ( ((1LL << v257) & 0x1EF0000) != 0 )
            {
              *(_QWORD *)(v256 + 328) = "_mcount";
            }
            else if ( ((1LL << v257) & 0x6000000000LL) != 0 )
            {
              *(_BYTE *)(v256 + 278) = 1;
            }
          }
          *a1 = v256;
          return a1;
        }
LABEL_494:
        v268 = operator new(0x280u);
        sub_1051BE0(v268, a2, a3);
        *a1 = v268;
        return a1;
      }
      if ( (_DWORD)v4 != 18 )
      {
        if ( (_DWORD)v4 == 19 )
        {
          v82 = operator new(0x280u);
          sub_102E500(v82, (__int64)a2);
          *a1 = v82;
          return a1;
        }
        goto LABEL_494;
      }
      v269 = (_QWORD *)operator new(0x280u);
      sub_1051BE0(v269, a2, a3);
      *a1 = (__int64)v269;
      *v269 = &off_2BEAB20;
      return a1;
    case 3:
      if ( (unsigned int)v4 <= 0x1F )
      {
        v184 = 4160750114LL;
        if ( _bittest64(&v184, v4) )
          goto LABEL_309;
      }
      if ( a2[2].m128i_i32[2] == 1 && a2[3].m128i_i32[1] == 5 )
        goto LABEL_125;
      switch ( (int)v4 )
      {
        case 3:
          v163 = operator new(0x270u);
          sub_103BFF0(v163, a2, a3);
          *(_QWORD *)v163 = &off_2BE5420;
          switch ( a2[2].m128i_i32[0] )
          {
            case 1:
              *(_QWORD *)(v163 + 328) = "__mcount";
              break;
            case 0xE:
            case 0x1C:
              break;
            case 0x10:
            case 0x11:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
              *(_QWORD *)(v163 + 328) = "_mcount";
              break;
            case 0x25:
            case 0x26:
              *(_BYTE *)(v163 + 278) = 1;
              goto LABEL_530;
            default:
LABEL_530:
              *(_QWORD *)(v163 + 328) = ".mcount";
              break;
          }
          *a1 = v163;
          return a1;
        case 4:
          v162 = operator new(0x270u);
          sub_103BFF0(v162, a2, a3);
          *a1 = v162;
          *(_QWORD *)v162 = &off_2BE5818;
          *(_DWORD *)(v162 + 156) = 6;
          *(_QWORD *)(v162 + 328) = "__mcount";
          *(_DWORD *)(v162 + 340) = 8;
          return a1;
        case 7:
          if ( a2[3].m128i_i32[0] == 49 )
          {
            v286 = operator new(0x270u);
            sub_103BFF0(v286, a2, a3);
            *(_DWORD *)(v286 + 156) = 6;
            *(_QWORD *)v286 = &off_2BE6400;
            if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
              *(_BYTE *)(v286 + 278) = 1;
            *a1 = v286;
          }
          else
          {
            v160 = operator new(0x270u);
            sub_103BFF0(v160, a2, a3);
            v161 = a2[2].m128i_u32[0];
            *(_DWORD *)(v160 + 156) = 6;
            *(_QWORD *)v160 = &off_2BE6008;
            if ( v161 <= 0x26 )
            {
              if ( ((1LL << v161) & 0x1EF0000) != 0 )
              {
                *(_QWORD *)(v160 + 328) = "_mcount";
              }
              else if ( ((1LL << v161) & 0x6000000000LL) != 0 )
              {
                *(_BYTE *)(v160 + 278) = 1;
              }
            }
            *a1 = v160;
          }
          return a1;
        case 10:
          v159 = operator new(0x270u);
          sub_103BFF0(v159, a2, a3);
          *(_QWORD *)v159 = &off_2BE67F8;
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v159 + 278) = 1;
          *a1 = v159;
          return a1;
        case 11:
          v158 = operator new(0x270u);
          sub_103BFF0(v158, a2, a3);
          *(_QWORD *)v158 = &off_2BE6BF0;
          *(_QWORD *)(v158 + 328) = "__mcount";
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v158 + 278) = 1;
          *a1 = v158;
          return a1;
        case 12:
          v167 = operator new(0x270u);
          sub_103BFF0(v167, a2, a3);
          v168 = a2[2].m128i_u32[0];
          *(_DWORD *)(v167 + 140) = 9;
          *(_QWORD *)v167 = &off_2BE6FE8;
          *(_QWORD *)(v167 + 152) = 0x500000005LL;
          *(_DWORD *)(v167 + 168) = 9;
          if ( v168 > 0x26 )
            goto LABEL_280;
          v169 = 1LL << v168;
          if ( ((1LL << v168) & 0x41AC0000) != 0 )
          {
            *(_QWORD *)(v167 + 328) = "_mcount";
          }
          else if ( (v169 & 0x10004000) == 0 )
          {
            if ( (v169 & 0x6000000000LL) != 0 )
              *(_BYTE *)(v167 + 278) = 1;
LABEL_280:
            *(_QWORD *)(v167 + 328) = "__mcount";
          }
          *a1 = v167;
          break;
        case 15:
          if ( a2[3].m128i_i32[0] == 1 )
          {
            v164 = operator new(0x2A8u);
            sub_103C1B0(v164, a2, a3);
          }
          else
          {
            v164 = operator new(0x2A8u);
            sub_103C030(v164, a2, a3);
          }
          *a1 = v164;
          return a1;
        case 17:
          v165 = operator new(0x270u);
          sub_103BFF0(v165, a2, a3);
          *(_DWORD *)(v165 + 136) = 8;
          *(_QWORD *)v165 = &off_2BE5C10;
          *(_QWORD *)(v165 + 144) = 0x700000007LL;
          v166 = a2[2].m128i_i32[0];
          *(_DWORD *)(v165 + 180) = 7;
          if ( (unsigned int)(v166 - 37) <= 1 )
            *(_BYTE *)(v165 + 278) = 1;
          *a1 = v165;
          return a1;
        default:
          v267 = operator new(0x270u);
          sub_103BFF0(v267, a2, a3);
          *a1 = v267;
          return a1;
      }
      return a1;
    case 4:
      if ( (_DWORD)v4 != 4 )
      {
        if ( (unsigned int)v4 <= 4 )
        {
          if ( (_DWORD)v4 == 3 )
          {
            v170 = operator new(0x270u);
            sub_103C010(v170, a2, a3);
            *(_QWORD *)v170 = &off_2BE73E0;
            switch ( a2[2].m128i_i32[0] )
            {
              case 1:
                *(_QWORD *)(v170 + 328) = "__mcount";
                break;
              case 0xE:
              case 0x1C:
                break;
              case 0x10:
              case 0x11:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x18:
                *(_QWORD *)(v170 + 328) = "_mcount";
                break;
              case 0x25:
              case 0x26:
                *(_BYTE *)(v170 + 278) = 1;
                goto LABEL_285;
              default:
LABEL_285:
                *(_QWORD *)(v170 + 328) = ".mcount";
                break;
            }
            *a1 = v170;
            return a1;
          }
        }
        else
        {
          if ( (_DWORD)v4 == 7 )
          {
            v238 = operator new(0x270u);
            sub_103C010(v238, a2, a3);
            v239 = a2[2].m128i_u32[0];
            *(_DWORD *)(v238 + 156) = 6;
            *(_QWORD *)v238 = &off_2BE7BD0;
            if ( v239 <= 0x26 )
            {
              if ( ((1LL << v239) & 0x1EF0000) != 0 )
              {
                *(_QWORD *)(v238 + 328) = "_mcount";
              }
              else if ( ((1LL << v239) & 0x6000000000LL) != 0 )
              {
                *(_BYTE *)(v238 + 278) = 1;
              }
            }
            *a1 = v238;
            return a1;
          }
          if ( (_DWORD)v4 == 11 )
          {
            v81 = operator new(0x270u);
            sub_103C010(v81, a2, a3);
            *(_QWORD *)v81 = &off_2BE7FC8;
            *(_QWORD *)(v81 + 328) = "__mcount";
            if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
              *(_BYTE *)(v81 + 278) = 1;
            *a1 = v81;
            return a1;
          }
        }
        v236 = operator new(0x270u);
        sub_103C010(v236, a2, a3);
        *a1 = v236;
        return a1;
      }
      v237 = operator new(0x270u);
      sub_103C010(v237, a2, a3);
      *a1 = v237;
      *(_QWORD *)v237 = &off_2BE77D8;
      *(_DWORD *)(v237 + 156) = 6;
      *(_QWORD *)(v237 + 328) = "__mcount";
      *(_DWORD *)(v237 + 340) = 8;
      return a1;
    case 5:
      if ( (unsigned int)v4 <= 0x1F )
      {
        v198 = 4160750114LL;
        if ( _bittest64(&v198, v4) )
        {
LABEL_309:
          v185 = operator new(0x270u);
          sub_103C350(v185, a2, a3);
          *a1 = v185;
          return a1;
        }
      }
      if ( a2[2].m128i_i32[2] == 1 && a2[3].m128i_i32[1] == 5 )
      {
LABEL_125:
        v86 = operator new(0x270u);
        sub_103C330(v86, a2, a3);
        *a1 = v86;
        return a1;
      }
      goto LABEL_10;
    case 6:
      v83 = operator new(0x200u);
      sub_10094E0(v83, a2, v84);
      *(_BYTE *)(v83 + 184) |= 4u;
      *(_QWORD *)v83 = &off_2BFFF28;
      *(_BYTE *)(v83 + 275) = 1;
      *(_BYTE *)(v83 + 33) = 32;
      *(_WORD *)(v83 + 62) = 32;
      *(_BYTE *)(v83 + 25) = 32;
      *(_BYTE *)(v83 + 23) = 32;
      *(_DWORD *)(v83 + 136) = 6;
      *(_QWORD *)(v83 + 144) = 0x500000005LL;
      v85 = j__strlen("e-m:e-p:32:32-i1:8:32-i8:8:32-i16:16:32-i32:32:32-f32:32:32-i64:32-f64:32-a:0:32-n32");
      sub_1009A40(
        (_QWORD *)v83,
        "e-m:e-p:32:32-i1:8:32-i8:8:32-i16:16:32-i32:32:32-f32:32:32-i64:32-f64:32-a:0:32-n32",
        v85,
        (__int64)&byte_22CD811);
      *a1 = v83;
      return a1;
    case 7:
      v66 = operator new(0x258u);
      sub_10094E0(v66, a2, v67);
      *(_QWORD *)(v66 + 520) = 0;
      *(_QWORD *)v66 = &off_2C02E40;
      *(_QWORD *)(v66 + 512) = v66 + 528;
      *(_WORD *)(v66 + 62) = 8;
      *(_BYTE *)(v66 + 528) = 0;
      *(_QWORD *)(v66 + 544) = 0;
      *(_QWORD *)(v66 + 552) = 0;
      *(_QWORD *)(v66 + 560) = 0;
      *(_QWORD *)(v66 + 568) = 0;
      *(_QWORD *)(v66 + 576) = 0;
      *(_QWORD *)(v66 + 584) = 0;
      *(_DWORD *)(v66 + 592) = 0;
      *(_BYTE *)(v66 + 273) = 0;
      *(_WORD *)(v66 + 8) = 2064;
      *(_DWORD *)(v66 + 30) = 138414112;
      *(_BYTE *)(v66 + 60) = 8;
      *(_DWORD *)(v66 + 12) = 135268368;
      *(_WORD *)(v66 + 16) = 2064;
      v68 = sub_21D5360();
      *(_DWORD *)(v66 + 20) = 136316960;
      v333.m128i_i64[0] = v68;
      v69 = _mm_loadl_epi64(&v333);
      *(_QWORD *)(v66 + 144) = 0x500000005LL;
      *(_QWORD *)(v66 + 160) = 0x800000006LL;
      *(_WORD *)(v66 + 24) = 2080;
      *(_DWORD *)(v66 + 136) = 6;
      *(_DWORD *)(v66 + 156) = 5;
      *(_QWORD *)(v66 + 172) = 0x100000005LL;
      *(__m128i *)(v66 + 104) = _mm_unpacklo_epi64(v69, v69);
      v70 = j__strlen("e-P1-p:16:8-i8:8-i16:8-i32:8-i64:8-f32:8-f64:8-n8-a:8");
      sub_1009A40((_QWORD *)v66, "e-P1-p:16:8-i8:8-i16:8-i32:8-i64:8-f32:8-f64:8-n8-a:8", v70, (__int64)&byte_22CD811);
      *a1 = v66;
      return a1;
    case 8:
    case 9:
      v61 = operator new(0x200u);
      sub_10094E0(v61, a2, v62);
      si128 = _mm_load_si128((const __m128i *)&xmmword_2385560);
      v64 = a2[2].m128i_i32[0] == 9;
      *(_QWORD *)v61 = &off_2C03228;
      *(_BYTE *)(v61 + 509) = 0;
      *(_WORD *)(v61 + 8) = 16448;
      *(_WORD *)(v61 + 30) = 16448;
      *(__m128i *)(v61 + 136) = si128;
      *(_DWORD *)(v61 + 168) = 7;
      *(_BYTE *)(v61 + 336) = 5;
      if ( v64 )
      {
        v207 = j__strlen("E-m:e-p:64:64-i64:64-i128:128-n32:64-S128");
        sub_1009A40((_QWORD *)v61, "E-m:e-p:64:64-i64:64-i128:128-n32:64-S128", v207, (__int64)&byte_22CD811);
      }
      else
      {
        v65 = j__strlen("e-m:e-p:64:64-i64:64-i128:128-n32:64-S128");
        sub_1009A40((_QWORD *)v61, "e-m:e-p:64:64-i64:64-i128:128-n32:64-S128", v65, (__int64)&byte_22CD811);
      }
      *a1 = v61;
      *(_WORD *)(v61 + 286) = 16448;
      *(_BYTE *)(v61 + 273) = 0;
      return a1;
    case 0xA:
      if ( (_DWORD)v4 == 7 )
      {
        v199 = operator new(0x258u);
        sub_10094E0(v199, a2, v200);
        *(_QWORD *)v199 = &off_2C03610;
        v201 = _mm_load_si128((const __m128i *)&xmmword_2385600);
        *(_BYTE *)(v199 + 184) |= 4u;
        *(_QWORD *)(v199 + 512) = v199 + 528;
        *(_WORD *)(v199 + 592) = 0;
        *(_WORD *)(v199 + 62) = 32;
        *(_WORD *)(v199 + 286) = 8224;
        *(_QWORD *)(v199 + 520) = 0;
        *(_BYTE *)(v199 + 528) = 0;
        *(_DWORD *)(v199 + 544) = 0;
        *(_QWORD *)(v199 + 552) = v199 + 568;
        *(_QWORD *)(v199 + 560) = 0;
        *(_BYTE *)(v199 + 568) = 0;
        *(_QWORD *)(v199 + 584) = 0;
        *(_BYTE *)(v199 + 275) = 1;
        *(_BYTE *)(v199 + 33) = 32;
        *(_BYTE *)(v199 + 25) = 32;
        *(_BYTE *)(v199 + 23) = 32;
        *(_DWORD *)(v199 + 136) = 6;
        *(__m128i *)(v199 + 144) = v201;
        v202 = j__strlen("e-m:e-S32-p:32:32-i32:32:32-i64:32:32-f32:32:32-f64:32:32-v64:32:32-v128:32:32-a:0:32-Fi32-n32");
        sub_1009A40(
          (_QWORD *)v199,
          "e-m:e-S32-p:32:32-i32:32:32-i64:32:32-f32:32:32-f64:32:32-v64:32:32-v128:32:32-a:0:32-Fi32-n32",
          v202,
          (__int64)&byte_22CD811);
        v333.m128i_i64[1] = (__int64)v334;
        v203 = j__strlen("abiv2");
        sub_1014B80(&v333.m128i_i64[1], "abiv2", (__int64)&aCskyLinuxUclib[v203 + 17]);
        if ( !sub_990D60((__int64)&v333.m128i_i64[1], "abiv2") || !sub_990D60((__int64)&v333.m128i_i64[1], "abiv1") )
          sub_9CAB60(v199 + 512, (__int64)&v333.m128i_i64[1]);
        if ( (_BYTE *)v333.m128i_i64[1] != v334 )
          operator delete((void *)v333.m128i_i64[1]);
        v204 = a2[2].m128i_u32[0];
        *(_DWORD *)(v199 + 156) = 6;
        *(_QWORD *)v199 = &off_2BFBF58;
        if ( v204 <= 0x26 )
        {
          if ( ((1LL << v204) & 0x1EF0000) != 0 )
          {
            *(_QWORD *)(v199 + 328) = "_mcount";
          }
          else if ( ((1LL << v204) & 0x6000000000LL) != 0 )
          {
            *(_BYTE *)(v199 + 278) = 1;
          }
        }
        *a1 = v199;
      }
      else
      {
        v52 = operator new(0x258u);
        sub_10094E0(v52, a2, v53);
        *(_QWORD *)v52 = &off_2C03610;
        v54 = _mm_load_si128((const __m128i *)&xmmword_2385600);
        *(_QWORD *)(v52 + 512) = v52 + 528;
        *(_BYTE *)(v52 + 184) |= 4u;
        *(_QWORD *)(v52 + 552) = v52 + 568;
        *(_WORD *)(v52 + 592) = 0;
        *(_WORD *)(v52 + 62) = 32;
        *(_WORD *)(v52 + 286) = 8224;
        *(_QWORD *)(v52 + 520) = 0;
        *(_BYTE *)(v52 + 528) = 0;
        *(_DWORD *)(v52 + 544) = 0;
        *(_QWORD *)(v52 + 560) = 0;
        *(_BYTE *)(v52 + 568) = 0;
        *(_QWORD *)(v52 + 584) = 0;
        *(_BYTE *)(v52 + 275) = 1;
        *(_BYTE *)(v52 + 33) = 32;
        *(_BYTE *)(v52 + 25) = 32;
        *(_BYTE *)(v52 + 23) = 32;
        *(_DWORD *)(v52 + 136) = 6;
        *(__m128i *)(v52 + 144) = v54;
        sub_1009A40(
          (_QWORD *)v52,
          "e-m:e-S32-p:32:32-i32:32:32-i64:32:32-f32:32:32-f64:32:32-v64:32:32-v128:32:32-a:0:32-Fi32-n32",
          94,
          (__int64)&byte_22CD811);
        v333.m128i_i64[1] = (__int64)v334;
        sub_1014B80(&v333.m128i_i64[1], "abiv2", (__int64)"");
        if ( !sub_990D60((__int64)&v333.m128i_i64[1], "abiv2") || !sub_990D60((__int64)&v333.m128i_i64[1], "abiv1") )
          sub_9CAB60(v52 + 512, (__int64)&v333.m128i_i64[1]);
        if ( (_BYTE *)v333.m128i_i64[1] != v334 )
          operator delete((void *)v333.m128i_i64[1]);
        *a1 = v52;
      }
      return a1;
    case 0xB:
      v44 = operator new(0x200u);
      sub_10094E0(v44, a2, v45);
      *(_BYTE *)(v44 + 508) = 1;
      *(_QWORD *)v44 = &off_2C039F8;
      *(_QWORD *)(v44 + 352) = &unk_2493F60;
      *(_BYTE *)(v44 + 279) = 1;
      *(_DWORD *)(v44 + 273) = (_DWORD)sub_1010000;
      v46 = sub_2293DC0(a2);
      v47 = a2[2].m128i_u32[3];
      *(_QWORD *)(v44 + 376) = v46;
      *(_QWORD *)(v44 + 384) = v48;
      v49 = sub_2292A00(v47);
      *(_QWORD *)(v44 + 368) = v50;
      *(_QWORD *)(v44 + 360) = v49;
      v51 = j__strlen("e-m:e-p:32:32-i1:32-i8:8-i16:16-i32:32-i64:64-f16:16-f32:32-f64:64-n8:16:32:64");
      sub_1009A40(
        (_QWORD *)v44,
        "e-m:e-p:32:32-i1:32-i8:8-i16:16-i32:32-i64:64-f16:16-f32:32-f64:64-n8:16:32:64",
        v51,
        (__int64)&byte_22CD811);
      *a1 = v44;
      *(_DWORD *)(v44 + 340) = 0;
      return a1;
    case 0xC:
      if ( (_DWORD)v4 == 7 && a2[3].m128i_i32[0] == 18 )
      {
        v248 = operator new(0x248u);
        sub_10094E0(v248, a2, v249);
        *(_QWORD *)(v248 + 520) = 0;
        *(_QWORD *)v248 = &off_2C03DE0;
        *(_QWORD *)(v248 + 512) = v248 + 528;
        *(_BYTE *)(v248 + 528) = 0;
        *(_QWORD *)(v248 + 544) = v248 + 560;
        *(_QWORD *)(v248 + 552) = 0;
        *(_BYTE *)(v248 + 560) = 0;
        *(_DWORD *)(v248 + 576) = 0;
        *(_BYTE *)(v248 + 580) = 0;
        v250 = j__strlen(
                 "e-m:e-p:32:32:32-a:0-n16:32-i64:64:64-i32:32:32-i16:16:16-i1:8:8-f32:32:32-f64:64:64-v32:32:32-v64:64:6"
                 "4-v512:512:512-v1024:1024:1024-v2048:2048:2048");
        sub_1009A40(
          (_QWORD *)v248,
          "e-m:e-p:32:32:32-a:0-n16:32-i64:64:64-i32:32:32-i16:16:16-i1:8:8-f32:32:32-f64:64:64-v32:32:32-v64:64:64-v512:"
          "512:512-v1024:1024:1024-v2048:2048:2048",
          v250,
          (__int64)&byte_22CD811);
        *(_WORD *)(v248 + 28) = 16448;
        *(_WORD *)(v248 + 286) = 16448;
        *(_WORD *)(v248 + 10) = 2056;
        v251 = a2[2].m128i_u32[0];
        *(_QWORD *)(v248 + 144) = 0x500000005LL;
        *(_DWORD *)(v248 + 136) = 6;
        *(_BYTE *)(v248 + 275) = 1;
        *(_BYTE *)(v248 + 184) |= 2u;
        *(_DWORD *)(v248 + 188) = 32;
        *(_QWORD *)v248 = &off_2BE5030;
        *(_DWORD *)(v248 + 156) = 6;
        if ( v251 <= 0x26 )
        {
          if ( ((1LL << v251) & 0x1EF0000) != 0 )
          {
            *(_QWORD *)(v248 + 328) = "_mcount";
          }
          else if ( ((1LL << v251) & 0x6000000000LL) != 0 )
          {
            *(_BYTE *)(v248 + 278) = 1;
          }
        }
        *a1 = v248;
      }
      else
      {
        v55 = operator new(0x248u);
        sub_10094E0(v55, a2, v56);
        *(_QWORD *)(v55 + 520) = 0;
        *(_QWORD *)v55 = &off_2C03DE0;
        *(_QWORD *)(v55 + 512) = v55 + 528;
        *(_BYTE *)(v55 + 528) = 0;
        *(_QWORD *)(v55 + 544) = v55 + 560;
        *(_QWORD *)(v55 + 552) = 0;
        *(_BYTE *)(v55 + 560) = 0;
        *(_DWORD *)(v55 + 576) = 0;
        *(_BYTE *)(v55 + 580) = 0;
        v57 = j__strlen(
                "e-m:e-p:32:32:32-a:0-n16:32-i64:64:64-i32:32:32-i16:16:16-i1:8:8-f32:32:32-f64:64:64-v32:32:32-v64:64:64"
                "-v512:512:512-v1024:1024:1024-v2048:2048:2048");
        sub_1009A40(
          (_QWORD *)v55,
          "e-m:e-p:32:32:32-a:0-n16:32-i64:64:64-i32:32:32-i16:16:16-i1:8:8-f32:32:32-f64:64:64-v32:32:32-v64:64:64-v512:"
          "512:512-v1024:1024:1024-v2048:2048:2048",
          v57,
          (__int64)&byte_22CD811);
        *(_WORD *)(v55 + 28) = 16448;
        *(_DWORD *)(v55 + 136) = 6;
        *(_QWORD *)(v55 + 144) = 0x500000005LL;
        *(_BYTE *)(v55 + 275) = 1;
        *(_BYTE *)(v55 + 184) |= 2u;
        *(_DWORD *)(v55 + 188) = 32;
        *(_WORD *)(v55 + 286) = 16448;
        *(_WORD *)(v55 + 10) = 2056;
        *a1 = v55;
      }
      return a1;
    case 0xD:
      if ( (_DWORD)v4 == 7 )
      {
        v205 = operator new(0x250u);
        sub_1030A80(v205, a2, a3);
        v206 = a2[2].m128i_u32[0];
        *(_DWORD *)(v205 + 156) = 6;
        *(_QWORD *)v205 = &off_2BFC348;
        if ( v206 <= 0x26 )
        {
          if ( ((1LL << v206) & 0x1EF0000) != 0 )
          {
            *(_QWORD *)(v205 + 328) = "_mcount";
          }
          else if ( ((1LL << v206) & 0x6000000000LL) != 0 )
          {
            *(_BYTE *)(v205 + 278) = 1;
          }
        }
        *a1 = v205;
      }
      else
      {
        v43 = operator new(0x250u);
        sub_1030A80(v43, a2, a3);
        *a1 = v43;
      }
      return a1;
    case 0xE:
      if ( (_DWORD)v4 == 7 )
      {
        if ( a2[3].m128i_i32[0] == 49 )
        {
          v252 = operator new(0x250u);
          sub_1030C20(v252, a2, a3);
          *(_DWORD *)(v252 + 156) = 6;
          *(_QWORD *)v252 = &off_2BFCB28;
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v252 + 278) = 1;
          *a1 = v252;
        }
        else
        {
          v233 = operator new(0x250u);
          sub_1030C20(v233, a2, a3);
          v234 = a2[2].m128i_u32[0];
          *(_DWORD *)(v233 + 156) = 6;
          *(_QWORD *)v233 = &off_2BFC738;
          if ( v234 <= 0x26 )
          {
            if ( ((1LL << v234) & 0x1EF0000) != 0 )
            {
              *(_QWORD *)(v233 + 328) = "_mcount";
            }
            else if ( ((1LL << v234) & 0x6000000000LL) != 0 )
            {
              *(_BYTE *)(v233 + 278) = 1;
            }
          }
          *a1 = v233;
        }
        return a1;
      }
      if ( (_DWORD)v4 != 12 )
      {
        if ( (_DWORD)v4 == 3 )
        {
          v235 = operator new(0x250u);
          sub_1030C20(v235, a2, a3);
          *(_QWORD *)v235 = &off_2BFCF18;
          switch ( a2[2].m128i_i32[0] )
          {
            case 1:
              *(_QWORD *)(v235 + 328) = "__mcount";
              break;
            case 0xE:
            case 0x1C:
              break;
            case 0x10:
            case 0x11:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
              *(_QWORD *)(v235 + 328) = "_mcount";
              break;
            case 0x25:
            case 0x26:
              *(_BYTE *)(v235 + 278) = 1;
              goto LABEL_393;
            default:
LABEL_393:
              *(_QWORD *)(v235 + 328) = ".mcount";
              break;
          }
          *a1 = v235;
        }
        else
        {
          v42 = operator new(0x250u);
          sub_1030C20(v42, a2, a3);
          *a1 = v42;
        }
        return a1;
      }
      v230 = operator new(0x250u);
      sub_1030C20(v230, a2, a3);
      v231 = a2[2].m128i_u32[0];
      *(_DWORD *)(v230 + 140) = 9;
      *(_QWORD *)v230 = &off_2BFD308;
      *(_QWORD *)(v230 + 152) = 0x500000005LL;
      *(_DWORD *)(v230 + 168) = 9;
      if ( v231 > 0x26 )
        goto LABEL_383;
      v232 = 1LL << v231;
      if ( ((1LL << v231) & 0x41AC0000) != 0 )
      {
        *(_QWORD *)(v230 + 328) = "_mcount";
      }
      else if ( (v232 & 0x10004000) == 0 )
      {
        if ( (v232 & 0x6000000000LL) != 0 )
          *(_BYTE *)(v230 + 278) = 1;
LABEL_383:
        *(_QWORD *)(v230 + 328) = "__mcount";
      }
      *a1 = v230;
      return a1;
    case 0xF:
      if ( (_DWORD)v4 == 7 )
      {
        v228 = operator new(0x210u);
        sub_1065040(v228, a2, a3);
        v229 = a2[2].m128i_u32[0];
        *(_DWORD *)(v228 + 156) = 6;
        *(_QWORD *)v228 = &off_2BECE90;
        if ( v229 <= 0x26 )
        {
          if ( ((1LL << v229) & 0x1EF0000) != 0 )
          {
            *(_QWORD *)(v228 + 328) = "_mcount";
          }
          else if ( ((1LL << v229) & 0x6000000000LL) != 0 )
          {
            *(_BYTE *)(v228 + 278) = 1;
          }
        }
        *a1 = v228;
      }
      else if ( (_DWORD)v4 == 11 )
      {
        v227 = operator new(0x210u);
        sub_1065040(v227, a2, a3);
        *(_QWORD *)v227 = &off_2BED280;
        *(_QWORD *)(v227 + 328) = "__mcount";
        if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
          *(_BYTE *)(v227 + 278) = 1;
        *a1 = v227;
      }
      else
      {
        v41 = operator new(0x210u);
        sub_1065040(v41, a2, a3);
        *a1 = v41;
      }
      return a1;
    case 0x10:
      if ( (_DWORD)v4 == 7 )
      {
LABEL_181:
        v125 = operator new(0x258u);
        sub_1031660(v125, a2, a3);
        *a1 = v125;
        return a1;
      }
      if ( (unsigned int)v4 <= 7 )
      {
        if ( (_DWORD)v4 != 3 )
        {
LABEL_235:
          v152 = operator new(0x258u);
          sub_10311E0(v152, a2, v153);
          *a1 = v152;
          return a1;
        }
LABEL_298:
        v175 = operator new(0x258u);
        sub_1031590(v175, a2, a3);
        *a1 = v175;
      }
      else
      {
        if ( (_DWORD)v4 != 11 )
        {
          if ( (_DWORD)v4 == 18 )
          {
LABEL_56:
            sub_1031620(&v333.m128i_i64[1], a2);
            *a1 = v333.m128i_i64[1];
            return a1;
          }
          goto LABEL_235;
        }
LABEL_422:
        sub_1031530(&v333.m128i_i64[1], a2);
        *a1 = v333.m128i_i64[1];
      }
      return a1;
    case 0x11:
      switch ( (int)v4 )
      {
        case 3:
          goto LABEL_298;
        case 7:
          if ( a2[3].m128i_i32[0] != 49 )
            goto LABEL_181;
          v253 = operator new(0x258u);
          sub_10311E0(v253, a2, v254);
          *(_DWORD *)(v253 + 156) = 6;
          *(_QWORD *)v253 = &off_2BEC2C0;
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v253 + 278) = 1;
          *a1 = v253;
          break;
        case 11:
          goto LABEL_422;
        case 15:
          if ( a2[3].m128i_i32[0] == 1 )
          {
            v124 = operator new(0x290u);
            sub_106B760(v124, a2, a3);
          }
          else
          {
            v124 = operator new(0x290u);
            sub_106B740(v124, a2, a3);
          }
          *a1 = v124;
          break;
        case 18:
          goto LABEL_56;
        case 19:
          v123 = operator new(0x258u);
          sub_10313B0(v123, a2, a3);
          *a1 = v123;
          break;
        default:
          goto LABEL_235;
      }
      return a1;
    case 0x12:
      switch ( (int)v4 )
      {
        case 3:
          goto LABEL_298;
        case 7:
          goto LABEL_181;
        case 11:
          goto LABEL_422;
        case 12:
          goto LABEL_138;
        case 18:
          goto LABEL_56;
        default:
          goto LABEL_235;
      }
    case 0x13:
      switch ( (int)v4 )
      {
        case 3:
          goto LABEL_298;
        case 7:
          goto LABEL_181;
        case 11:
          goto LABEL_422;
        case 12:
LABEL_138:
          v96 = operator new(0x258u);
          sub_1031480(v96, a2, a3);
          *a1 = v96;
          break;
        case 18:
          goto LABEL_56;
        default:
          goto LABEL_235;
      }
      return a1;
    case 0x14:
      v92 = operator new(0x200u);
      sub_10094E0(v92, a2, v93);
      v94 = _mm_load_si128((const __m128i *)&xmmword_2385550);
      *(_WORD *)(v92 + 14) = 4112;
      *(_WORD *)(v92 + 24) = 4160;
      *(_WORD *)(v92 + 8) = 4112;
      *(_WORD *)(v92 + 62) = 16;
      *(_QWORD *)v92 = &off_2C04D80;
      *(_BYTE *)(v92 + 273) = 0;
      *(_DWORD *)(v92 + 30) = 272633888;
      *(_DWORD *)(v92 + 20) = 272633888;
      *(_DWORD *)(v92 + 176) = 7;
      *(__m128i *)(v92 + 136) = v94;
      v95 = j__strlen("e-m:e-p:16:16-i32:16-i64:16-f32:16-f64:16-a:8-n8:16-S16");
      sub_1009A40((_QWORD *)v92, "e-m:e-p:16:16-i32:16-i64:16-f32:16-f64:16-a:8-n8:16-S16", v95, (__int64)&byte_22CD811);
      *a1 = v92;
      return a1;
    case 0x15:
      switch ( (int)v4 )
      {
        case 3:
          goto LABEL_171;
        case 7:
          v117 = operator new(0x260u);
          sub_102E5D0(v117, a2, a3);
          *a1 = v117;
          return a1;
        case 11:
          v116 = operator new(0x260u);
          sub_1022C20(v116, a2, a3);
          *(_QWORD *)v116 = &off_2BEDE50;
          *(_QWORD *)(v116 + 328) = "__mcount";
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v116 + 278) = 1;
          *a1 = v116;
          return a1;
        case 12:
          v113 = operator new(0x260u);
          sub_1022C20(v113, a2, a3);
          v114 = a2[2].m128i_u32[0];
          *(_DWORD *)(v113 + 140) = 9;
          *(_QWORD *)v113 = &off_2BEE240;
          *(_QWORD *)(v113 + 152) = 0x500000005LL;
          *(_DWORD *)(v113 + 168) = 9;
          if ( v114 > 0x26 )
            goto LABEL_165;
          v115 = 1LL << v114;
          if ( ((1LL << v114) & 0x41AC0000) != 0 )
          {
            *(_QWORD *)(v113 + 328) = "_mcount";
          }
          else if ( (v115 & 0x10004000) == 0 )
          {
            if ( (v115 & 0x6000000000LL) != 0 )
              *(_BYTE *)(v113 + 278) = 1;
LABEL_165:
            *(_QWORD *)(v113 + 328) = "__mcount";
          }
          *a1 = v113;
          break;
        case 18:
          v112 = (_QWORD *)operator new(0x260u);
          sub_1022C20((__int64)v112, a2, a3);
          *a1 = (__int64)v112;
          *v112 = &off_2BEE630;
          return a1;
        case 20:
          v111 = operator new(0x260u);
          sub_1022C20(v111, a2, a3);
          *a1 = v111;
          *(_QWORD *)(v111 + 328) = "__mcount";
          v64 = *(_BYTE *)(v111 + 8) == 64;
          *(_DWORD *)(v111 + 340) = 9;
          *(_BYTE *)(v111 + 184) |= 4u;
          *(_DWORD *)(v111 + 152) = 2 * v64 + 4;
          *(_QWORD *)v111 = &off_2BDC5B8;
          return a1;
        default:
          v154 = operator new(0x260u);
          sub_1022C20(v154, a2, a3);
          *a1 = v154;
          return a1;
      }
      return a1;
    case 0x16:
      if ( (_DWORD)v4 == 3 )
      {
LABEL_171:
        v118 = operator new(0x260u);
        sub_102E650(v118, a2, a3);
        *a1 = v118;
      }
      else
      {
        if ( (_DWORD)v4 == 7 )
        {
          v60 = operator new(0x260u);
          sub_102E5D0(v60, a2, a3);
        }
        else
        {
          v60 = operator new(0x260u);
          sub_1022C20(v60, a2, a3);
        }
        *a1 = v60;
      }
      return a1;
    case 0x17:
      switch ( (int)v4 )
      {
        case 3:
          goto LABEL_290;
        case 7:
          goto LABEL_175;
        case 8:
          v120 = operator new(0x260u);
          sub_10316E0(v120, a2, a3);
          *(_QWORD *)v120 = &off_2BEEE10;
          *(_WORD *)(v120 + 30) = 8224;
          *(_WORD *)(v120 + 8) = 8224;
          *(_DWORD *)(v120 + 168) = 9;
          *(_QWORD *)(v120 + 136) = 0x900000006LL;
          v121 = j__strlen("E-m:e-p:32:32-Fi64-i64:64-i128:128-n32:64");
          sub_1009A40((_QWORD *)v120, "E-m:e-p:32:32-Fi64-i64:64-i128:128-n32:64", v121, (__int64)&byte_22CD811);
          *a1 = v120;
          break;
        case 11:
          goto LABEL_173;
        case 12:
          goto LABEL_81;
        case 20:
          v119 = operator new(0x260u);
          sub_10316E0(v119, a2, a3);
          *a1 = v119;
          *(_QWORD *)(v119 + 328) = "__mcount";
          v64 = *(_BYTE *)(v119 + 8) == 64;
          *(_DWORD *)(v119 + 340) = 9;
          *(_BYTE *)(v119 + 184) |= 4u;
          *(_DWORD *)(v119 + 152) = 2 * v64 + 4;
          *(_QWORD *)v119 = &off_2BDC9A8;
          break;
        default:
          goto LABEL_237;
      }
      return a1;
    case 0x18:
      if ( (_DWORD)v4 == 7 )
      {
LABEL_175:
        v122 = operator new(0x260u);
        sub_1031BC0(v122, a2, a3);
        *a1 = v122;
        return a1;
      }
      if ( (unsigned int)v4 > 7 )
      {
        if ( (_DWORD)v4 == 11 )
        {
LABEL_173:
          sub_1031CD0(&v333.m128i_i64[1], a2, a3);
          *a1 = v333.m128i_i64[1];
          return a1;
        }
        if ( (_DWORD)v4 == 12 )
        {
LABEL_81:
          v59 = operator new(0x260u);
          sub_1031D40(v59, a2, a3);
          *a1 = v59;
          return a1;
        }
        goto LABEL_237;
      }
      if ( (_DWORD)v4 != 3 )
      {
LABEL_237:
        v155 = operator new(0x260u);
        sub_10316E0(v155, a2, a3);
        *a1 = v155;
        return a1;
      }
LABEL_290:
      v171 = operator new(0x260u);
      sub_1031C40(v171, a2, a3);
      *a1 = v171;
      return a1;
    case 0x19:
    case 0x1A:
      v58 = operator new(0x248u);
      sub_1049290(v58, a2, a3);
      *a1 = v58;
      return a1;
    case 0x1B:
      v87 = sub_21D5350();
      v88 = sub_21D5380();
      if ( (_DWORD)v4 == 7 )
      {
        v208 = operator new(0x250u);
        sub_10094E0(v208, a2, v209);
        *(_QWORD *)(v208 + 88) = v87;
        *(_QWORD *)(v208 + 512) = v208 + 528;
        *(_QWORD *)(v208 + 544) = v208 + 560;
        *(_WORD *)(v208 + 18) = 4112;
        *(_WORD *)(v208 + 24) = -32640;
        *(_WORD *)(v208 + 62) = 128;
        *(_QWORD *)v208 = &off_2BDCD98;
        *(_BYTE *)(v208 + 393) |= 4u;
        *(_QWORD *)(v208 + 144) = 0x500000005LL;
        *(_QWORD *)(v208 + 520) = 0;
        *(_BYTE *)(v208 + 528) = 0;
        *(_QWORD *)(v208 + 552) = 0;
        *(_BYTE *)(v208 + 560) = 0;
        *(_QWORD *)(v208 + 576) = 0;
        *(_BYTE *)(v208 + 585) = 0;
        *(_QWORD *)(v208 + 112) = v88;
        *(_QWORD *)(v208 + 328) = "_mcount";
        *(_BYTE *)(v208 + 279) = 1;
        *(_BYTE *)(v208 + 285) = 1;
        *(_QWORD *)(v208 + 152) = 0x600000005LL;
        *(_DWORD *)(v208 + 136) = 6;
        v210 = j__strlen("e-m:e-p:32:32-i64:64-n32-S128");
        sub_1009A40((_QWORD *)v208, "e-m:e-p:32:32-i64:64-n32-S128", v210, (__int64)&byte_22CD811);
        v211 = a2[2].m128i_u32[0];
        *(_DWORD *)(v208 + 156) = 6;
        *(_QWORD *)v208 = &off_2BF01C0;
        if ( v211 <= 0x26 )
        {
          if ( ((1LL << v211) & 0x1EF0000) != 0 )
          {
            *(_QWORD *)(v208 + 328) = "_mcount";
          }
          else if ( ((1LL << v211) & 0x6000000000LL) != 0 )
          {
            *(_BYTE *)(v208 + 278) = 1;
          }
        }
        *a1 = v208;
      }
      else if ( (_DWORD)v4 == 11 )
      {
        v89 = operator new(0x250u);
        sub_10094E0(v89, a2, v90);
        *(_BYTE *)(v89 + 393) |= 4u;
        *(_QWORD *)(v89 + 512) = v89 + 528;
        *(_QWORD *)(v89 + 544) = v89 + 560;
        *(_WORD *)(v89 + 18) = 4112;
        *(_WORD *)(v89 + 24) = -32640;
        *(_WORD *)(v89 + 62) = 128;
        *(_QWORD *)(v89 + 328) = "_mcount";
        *(_QWORD *)v89 = &off_2BDCD98;
        *(_QWORD *)(v89 + 144) = 0x500000005LL;
        *(_QWORD *)(v89 + 520) = 0;
        *(_BYTE *)(v89 + 528) = 0;
        *(_QWORD *)(v89 + 552) = 0;
        *(_BYTE *)(v89 + 560) = 0;
        *(_QWORD *)(v89 + 576) = 0;
        *(_BYTE *)(v89 + 585) = 0;
        *(_QWORD *)(v89 + 88) = v87;
        *(_QWORD *)(v89 + 112) = v88;
        *(_BYTE *)(v89 + 279) = 1;
        *(_BYTE *)(v89 + 285) = 1;
        *(_QWORD *)(v89 + 152) = 0x600000005LL;
        *(_DWORD *)(v89 + 136) = 6;
        v91 = j__strlen("e-m:e-p:32:32-i64:64-n32-S128");
        sub_1009A40((_QWORD *)v89, "e-m:e-p:32:32-i64:64-n32-S128", v91, (__int64)&byte_22CD811);
        *(_QWORD *)v89 = &off_2BEFDD0;
        *(_QWORD *)(v89 + 328) = "__mcount";
        if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
          *(_BYTE *)(v89 + 278) = 1;
        *a1 = v89;
      }
      else
      {
        v212 = operator new(0x250u);
        sub_10094E0(v212, a2, v213);
        *(_QWORD *)(v212 + 512) = v212 + 528;
        *(_QWORD *)(v212 + 544) = v212 + 560;
        *(_QWORD *)(v212 + 328) = "_mcount";
        *(_QWORD *)v212 = &off_2BDCD98;
        *(_QWORD *)(v212 + 144) = 0x500000005LL;
        *(_BYTE *)(v212 + 393) |= 4u;
        *(_QWORD *)(v212 + 520) = 0;
        *(_BYTE *)(v212 + 528) = 0;
        *(_QWORD *)(v212 + 552) = 0;
        *(_BYTE *)(v212 + 560) = 0;
        *(_QWORD *)(v212 + 576) = 0;
        *(_BYTE *)(v212 + 585) = 0;
        *(_WORD *)(v212 + 18) = 4112;
        *(_QWORD *)(v212 + 88) = v87;
        *(_WORD *)(v212 + 24) = -32640;
        *(_QWORD *)(v212 + 112) = v88;
        *(_WORD *)(v212 + 62) = 128;
        *(_BYTE *)(v212 + 279) = 1;
        *(_BYTE *)(v212 + 285) = 1;
        *(_QWORD *)(v212 + 152) = 0x600000005LL;
        *(_DWORD *)(v212 + 136) = 6;
        sub_1009A40((_QWORD *)v212, "e-m:e-p:32:32-i64:64-n32-S128", 29, (__int64)&byte_22CD811);
        *a1 = v212;
      }
      return a1;
    case 0x1C:
      switch ( (int)v4 )
      {
        case 3:
          v131 = operator new(0x250u);
          sub_1022E40(v131, a2, a3);
          *(_QWORD *)v131 = &off_2BF05B0;
          switch ( a2[2].m128i_i32[0] )
          {
            case 1:
              *(_QWORD *)(v131 + 328) = "__mcount";
              break;
            case 0xE:
            case 0x1C:
              break;
            case 0x10:
            case 0x11:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
              *(_QWORD *)(v131 + 328) = "_mcount";
              break;
            case 0x25:
            case 0x26:
              *(_BYTE *)(v131 + 278) = 1;
              goto LABEL_246;
            default:
LABEL_246:
              *(_QWORD *)(v131 + 328) = ".mcount";
              break;
          }
          *a1 = v131;
          return a1;
        case 4:
          v130 = operator new(0x250u);
          sub_1022E40(v130, a2, a3);
          *a1 = v130;
          *(_QWORD *)v130 = &off_2BF1180;
          *(_DWORD *)(v130 + 156) = 6;
          *(_QWORD *)(v130 + 328) = "__mcount";
          *(_DWORD *)(v130 + 340) = 8;
          return a1;
        case 7:
          if ( a2[3].m128i_i32[0] == 49 )
          {
            v255 = operator new(0x250u);
            sub_1022E40(v255, a2, a3);
            *(_DWORD *)(v255 + 156) = 6;
            *(_QWORD *)v255 = &off_2BF1D50;
            if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
              *(_BYTE *)(v255 + 278) = 1;
            *a1 = v255;
          }
          else
          {
            v128 = operator new(0x250u);
            sub_1022E40(v128, a2, a3);
            v129 = a2[2].m128i_u32[0];
            *(_DWORD *)(v128 + 156) = 6;
            *(_QWORD *)v128 = &off_2BF1960;
            if ( v129 <= 0x26 )
            {
              if ( ((1LL << v129) & 0x1EF0000) != 0 )
              {
                *(_QWORD *)(v128 + 328) = "_mcount";
              }
              else if ( ((1LL << v129) & 0x6000000000LL) != 0 )
              {
                *(_BYTE *)(v128 + 278) = 1;
              }
            }
            *a1 = v128;
          }
          return a1;
        case 10:
          v136 = operator new(0x250u);
          sub_1022E40(v136, a2, a3);
          *(_QWORD *)v136 = &off_2BF2140;
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v136 + 278) = 1;
          *a1 = v136;
          return a1;
        case 11:
          v132 = operator new(0x250u);
          sub_1022E40(v132, a2, a3);
          *(_QWORD *)v132 = &off_2BF09A0;
          *(_QWORD *)(v132 + 328) = "__mcount";
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v132 + 278) = 1;
          *a1 = v132;
          return a1;
        case 12:
          v133 = operator new(0x250u);
          sub_1022E40(v133, a2, a3);
          v134 = a2[2].m128i_u32[0];
          *(_DWORD *)(v133 + 140) = 9;
          *(_QWORD *)v133 = &off_2BF0D90;
          *(_QWORD *)(v133 + 152) = 0x500000005LL;
          *(_DWORD *)(v133 + 168) = 9;
          if ( v134 > 0x26 )
            goto LABEL_201;
          v135 = 1LL << v134;
          if ( ((1LL << v134) & 0x41AC0000) != 0 )
          {
            *(_QWORD *)(v133 + 328) = "_mcount";
          }
          else if ( (v135 & 0x10004000) == 0 )
          {
            if ( (v135 & 0x6000000000LL) != 0 )
              *(_BYTE *)(v133 + 278) = 1;
LABEL_201:
            *(_QWORD *)(v133 + 328) = "__mcount";
          }
          *a1 = v133;
          break;
        case 17:
          v126 = operator new(0x250u);
          sub_1022E40(v126, a2, a3);
          *(_DWORD *)(v126 + 136) = 8;
          *(_QWORD *)v126 = &off_2BF1570;
          *(_QWORD *)(v126 + 144) = 0x700000007LL;
          v127 = a2[2].m128i_i32[0];
          *(_DWORD *)(v126 + 180) = 7;
          if ( (unsigned int)(v127 - 37) <= 1 )
            *(_BYTE *)(v126 + 278) = 1;
          *a1 = v126;
          return a1;
        default:
          v156 = operator new(0x250u);
          sub_1022E40(v156, a2, a3);
          *a1 = v156;
          return a1;
      }
      return a1;
    case 0x1D:
      if ( (_DWORD)v4 == 11 )
      {
        v245 = operator new(0x208u);
        sub_1015030(v245, a2, v246);
        *(_QWORD *)v245 = &off_2BF2D10;
        *(_QWORD *)(v245 + 328) = "__mcount";
        if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
          *(_BYTE *)(v245 + 278) = 1;
        *a1 = v245;
        return a1;
      }
      if ( (unsigned int)v4 <= 0xB )
      {
        if ( (_DWORD)v4 == 7 )
        {
          v172 = operator new(0x208u);
          sub_1015030(v172, a2, v173);
          v174 = a2[2].m128i_u32[0];
          *(_DWORD *)(v172 + 156) = 6;
          *(_QWORD *)v172 = &off_2BF2530;
          if ( v174 <= 0x26 )
          {
            if ( ((1LL << v174) & 0x1EF0000) != 0 )
            {
              *(_QWORD *)(v172 + 328) = "_mcount";
            }
            else if ( ((1LL << v174) & 0x6000000000LL) != 0 )
            {
              *(_BYTE *)(v172 + 278) = 1;
            }
          }
          *a1 = v172;
          return a1;
        }
      }
      else
      {
        if ( (_DWORD)v4 == 13 )
        {
          v242 = operator new(0x208u);
          sub_1015030(v242, a2, v243);
          *(_QWORD *)v242 = &off_2BF2920;
          v244 = 2 * (*(_BYTE *)(v242 + 8) != 64) + 5;
          *(_DWORD *)(v242 + 152) = v244;
          *(_DWORD *)(v242 + 156) = v244;
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v242 + 278) = 1;
          *a1 = v242;
          return a1;
        }
        if ( (_DWORD)v4 == 18 )
        {
          v71 = (_QWORD *)operator new(0x208u);
          sub_1015030((__int64)v71, a2, v72);
          *a1 = (__int64)v71;
          *v71 = &off_2BF3100;
          return a1;
        }
      }
      v240 = operator new(0x208u);
      sub_1015030(v240, a2, v241);
      *a1 = v240;
      return a1;
    case 0x1E:
      switch ( (int)v4 )
      {
        case 3:
          v102 = operator new(0x208u);
          sub_1014F90(v102, a2, v103);
          *(_QWORD *)v102 = &off_2BF4C90;
          switch ( a2[2].m128i_i32[0] )
          {
            case 1:
              *(_QWORD *)(v102 + 328) = "__mcount";
              break;
            case 0xE:
            case 0x1C:
              break;
            case 0x10:
            case 0x11:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
              *(_QWORD *)(v102 + 328) = "_mcount";
              break;
            case 0x25:
            case 0x26:
              *(_BYTE *)(v102 + 278) = 1;
              goto LABEL_241;
            default:
LABEL_241:
              *(_QWORD *)(v102 + 328) = ".mcount";
              break;
          }
          *a1 = v102;
          return a1;
        case 7:
          v99 = operator new(0x208u);
          sub_1014F90(v99, a2, v100);
          v101 = a2[2].m128i_u32[0];
          *(_DWORD *)(v99 + 156) = 6;
          *(_QWORD *)v99 = &off_2BF3CD0;
          if ( v101 <= 0x26 )
          {
            if ( ((1LL << v101) & 0x1EF0000) != 0 )
            {
              *(_QWORD *)(v99 + 328) = "_mcount";
            }
            else if ( ((1LL << v101) & 0x6000000000LL) != 0 )
            {
              *(_BYTE *)(v99 + 278) = 1;
            }
          }
          *a1 = v99;
          return a1;
        case 11:
          v97 = operator new(0x208u);
          sub_1014F90(v97, a2, v98);
          *(_QWORD *)v97 = &off_2BF44B0;
          *(_QWORD *)(v97 + 328) = "__mcount";
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v97 + 278) = 1;
          *a1 = v97;
          return a1;
        case 12:
          v107 = operator new(0x208u);
          sub_1014F90(v107, a2, v108);
          v109 = a2[2].m128i_u32[0];
          *(_DWORD *)(v107 + 140) = 9;
          *(_QWORD *)v107 = &off_2BF48A0;
          *(_QWORD *)(v107 + 152) = 0x500000005LL;
          *(_DWORD *)(v107 + 168) = 9;
          if ( v109 > 0x26 )
            goto LABEL_156;
          v110 = 1LL << v109;
          if ( ((1LL << v109) & 0x41AC0000) != 0 )
          {
            *(_QWORD *)(v107 + 328) = "_mcount";
          }
          else if ( (v110 & 0x10004000) == 0 )
          {
            if ( (v110 & 0x6000000000LL) != 0 )
              *(_BYTE *)(v107 + 278) = 1;
LABEL_156:
            *(_QWORD *)(v107 + 328) = "__mcount";
          }
          *a1 = v107;
          return a1;
        case 13:
          v104 = operator new(0x208u);
          sub_1014F90(v104, a2, v105);
          *(_QWORD *)v104 = &off_2BF40C0;
          v106 = 2 * (*(_BYTE *)(v104 + 8) != 64) + 5;
          *(_DWORD *)(v104 + 152) = v106;
          *(_DWORD *)(v104 + 156) = v106;
          if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
            *(_BYTE *)(v104 + 278) = 1;
          *a1 = v104;
          return a1;
        default:
          v137 = operator new(0x208u);
          sub_1014F90(v137, a2, v138);
          *a1 = v137;
          return a1;
      }
    case 0x1F:
      if ( (_DWORD)v4 == 7 )
      {
        v223 = operator new(0x208u);
        sub_1015030(v223, a2, v224);
        *(_QWORD *)v223 = &off_2BDD950;
        v225 = j__strlen("e-m:e-p:32:32-i64:64-i128:128-f128:64-n32-S64");
        sub_1009A40((_QWORD *)v223, "e-m:e-p:32:32-i64:64-i128:128-f128:64-n32-S64", v225, (__int64)&byte_22CD811);
        v226 = a2[2].m128i_u32[0];
        *(_DWORD *)(v223 + 156) = 6;
        *(_QWORD *)v223 = &off_2BF34F0;
        if ( v226 <= 0x26 )
        {
          if ( ((1LL << v226) & 0x1EF0000) != 0 )
          {
            *(_QWORD *)(v223 + 328) = "_mcount";
          }
          else if ( ((1LL << v226) & 0x6000000000LL) != 0 )
          {
            *(_BYTE *)(v223 + 278) = 1;
          }
        }
        *a1 = v223;
      }
      else if ( (_DWORD)v4 == 18 )
      {
        v220 = (_QWORD *)operator new(0x208u);
        sub_1015030((__int64)v220, a2, v221);
        *v220 = &off_2BDD950;
        v222 = j__strlen("e-m:e-p:32:32-i64:64-i128:128-f128:64-n32-S64");
        sub_1009A40(v220, "e-m:e-p:32:32-i64:64-i128:128-f128:64-n32-S64", v222, (__int64)&byte_22CD811);
        *a1 = (__int64)v220;
        *v220 = &off_2BF38E0;
      }
      else
      {
        v75 = operator new(0x208u);
        sub_1022F50(v75, a2, a3);
        *a1 = v75;
      }
      return a1;
    case 0x20:
      if ( (_DWORD)v4 == 7 )
      {
        v217 = operator new(0x208u);
        sub_1015B90(v217, a2, v218);
        v219 = a2[2].m128i_u32[0];
        *(_DWORD *)(v217 + 156) = 6;
        *(_QWORD *)v217 = &off_2BF5080;
        if ( v219 <= 0x26 )
        {
          if ( ((1LL << v219) & 0x1EF0000) != 0 )
          {
            *(_QWORD *)(v217 + 328) = "_mcount";
          }
          else if ( ((1LL << v219) & 0x6000000000LL) != 0 )
          {
            *(_BYTE *)(v217 + 278) = 1;
          }
        }
        *a1 = v217;
      }
      else if ( (_DWORD)v4 == 16 )
      {
        v214 = operator new(0x208u);
        sub_1015B90(v214, a2, v215);
        *a1 = v214;
        *(_QWORD *)v214 = &off_2BF5470;
        v216 = *(_BYTE *)(v214 + 184);
        *(_DWORD *)(v214 + 152) = 6;
        *(_DWORD *)(v214 + 196) = 128;
        *(_DWORD *)(v214 + 188) = 32;
        *(_BYTE *)(v214 + 184) = v216 & 0xF1 | 4;
        *(_DWORD *)(v214 + 340) = 9;
      }
      else
      {
        v73 = operator new(0x208u);
        sub_1015B90(v73, a2, v74);
        *a1 = v73;
      }
      return a1;
    case 0x21:
      v76 = operator new(0x200u);
      sub_10094E0(v76, a2, v77);
      v78 = _mm_load_si128((const __m128i *)&xmmword_23855E0);
      *(_WORD *)(v76 + 14) = 8224;
      *(_WORD *)(v76 + 62) = 32;
      *(_WORD *)(v76 + 24) = 8224;
      *(_WORD *)(v76 + 8) = 8224;
      *(_QWORD *)v76 = &off_2C093E8;
      *(_BYTE *)(v76 + 273) = 0;
      *(_DWORD *)(v76 + 30) = 538976288;
      *(_DWORD *)(v76 + 20) = 538976288;
      *(__m128i *)(v76 + 136) = v78;
      v79 = sub_21D5360();
      *(_QWORD *)(v76 + 96) = v79;
      *(_QWORD *)(v76 + 104) = v79;
      *(_QWORD *)(v76 + 112) = v79;
      v80 = j__strlen(
              "E-p:32:32:32-i1:8:8-i8:8:32-i16:16:32-i32:32:32-i64:32:32-f32:32:32-f64:32:32-v64:32:32-v128:32:32-v256:32"
              ":32-v512:32:32-v1024:32:32-a0:0:32-n32");
      sub_1009A40(
        (_QWORD *)v76,
        "E-p:32:32:32-i1:8:8-i8:8:32-i16:16:32-i32:32:32-i64:32:32-f32:32:32-f64:32:32-v64:32:32-v128:32:32-v256:32:32-v5"
        "12:32:32-v1024:32:32-a0:0:32-n32",
        v80,
        (__int64)&byte_22CD811);
      *a1 = v76;
      *(_QWORD *)(v76 + 352) = &unk_2493D60;
      *(_BYTE *)(v76 + 508) = 1;
      return a1;
    case 0x22:
      v35 = operator new(0x200u);
      sub_10094E0(v35, a2, v36);
      *(_QWORD *)v35 = &off_2C093E8;
      v37 = _mm_load_si128((const __m128i *)&xmmword_23855E0);
      *(_WORD *)(v35 + 14) = 8224;
      *(_WORD *)(v35 + 62) = 32;
      *(_WORD *)(v35 + 24) = 8224;
      *(_BYTE *)(v35 + 273) = 0;
      *(_DWORD *)(v35 + 30) = 538976288;
      *(_WORD *)(v35 + 8) = 8224;
      *(_DWORD *)(v35 + 20) = 538976288;
      *(__m128i *)(v35 + 136) = v37;
      v38 = sub_21D5360();
      *(_QWORD *)(v35 + 96) = v38;
      *(_QWORD *)(v35 + 104) = v38;
      *(_QWORD *)(v35 + 112) = v38;
      v39 = j__strlen(
              "E-p:32:32:32-i1:8:8-i8:8:32-i16:16:32-i32:32:32-i64:32:32-f32:32:32-f64:32:32-v64:32:32-v128:32:32-v256:32"
              ":32-v512:32:32-v1024:32:32-a0:0:32-n32");
      sub_1009A40(
        (_QWORD *)v35,
        "E-p:32:32:32-i1:8:8-i8:8:32-i16:16:32-i32:32:32-i64:32:32-f32:32:32-f64:32:32-v64:32:32-v128:32:32-v256:32:32-v5"
        "12:32:32-v1024:32:32-a0:0:32-n32",
        v39,
        (__int64)&byte_22CD811);
      *(_BYTE *)(v35 + 508) = 1;
      *(_QWORD *)(v35 + 352) = &unk_2493D60;
      *(_QWORD *)v35 = &off_2C097D0;
      *(_BYTE *)(v35 + 272) = 0;
      v40 = j__strlen(
              "e-p:32:32:32-i1:8:8-i8:8:32-i16:16:32-i32:32:32-i64:32:32-f32:32:32-f64:32:32-v64:32:32-v128:32:32-v256:32"
              ":32-v512:32:32-v1024:32:32-a0:0:32-n32");
      sub_1009A40(
        (_QWORD *)v35,
        "e-p:32:32:32-i1:8:8-i8:8:32-i16:16:32-i32:32:32-i64:32:32-f32:32:32-f64:32:32-v64:32:32-v128:32:32-v256:32:32-v5"
        "12:32:32-v1024:32:32-a0:0:32-n32",
        v40,
        (__int64)&byte_22CD811);
      *a1 = v35;
      return a1;
    case 0x25:
      if ( (unsigned int)v4 <= 0x1F && (v188 = 4160750114LL, _bittest64(&v188, v4)) )
      {
        v189 = operator new(0x288u);
        sub_1023250(v189, a2, a3);
        *(_BYTE *)(v189 + 273) = 0;
        *(_QWORD *)v189 = &off_2BDF110;
        v190 = a2[2].m128i_i32[3];
        if ( (v190 & 0xFFFFFFF7) == 1 )
        {
          *(_BYTE *)(v189 + 273) = sub_22941F0(a2, 10, 7, 0) ^ 1;
        }
        else
        {
          switch ( v190 )
          {
            case 5:
            case 27:
              if ( (unsigned __int8)sub_2294160(a2) )
              {
                *(_BYTE *)(v189 + 273) = !sub_1015120((__int64)a2, 8u);
              }
              else if ( (unsigned __int8)sub_2294180(a2) )
              {
                if ( a2[3].m128i_i32[0] == 31 )
                  *(_BYTE *)(v189 + 273) = !sub_1015120((__int64)a2, 0xAu);
                else
                  *(_BYTE *)(v189 + 273) = !sub_1015120((__int64)a2, 9u);
              }
              break;
            case 28:
              if ( a2[3].m128i_i32[0] == 31 )
                *(_BYTE *)(v189 + 273) = !sub_1015120((__int64)a2, 3u);
              else
                *(_BYTE *)(v189 + 273) = !sub_1015120((__int64)a2, 2u);
              break;
            case 31:
              *(_BYTE *)(v189 + 273) = 1;
              break;
          }
        }
        v191 = (_BYTE *)a2->m128i_i64[0];
        v192 = a2->m128i_i64[1];
        *(_DWORD *)(v189 + 68) = 256;
        *(_QWORD *)(v189 + 328) = &unk_22D6A7B;
        *(_QWORD *)v189 = &off_2BDF508;
        *(_WORD *)(v189 + 24) = -32640;
        *(_WORD *)(v189 + 62) = 128;
        v333.m128i_i64[1] = (__int64)v334;
        sub_1014C40(&v333.m128i_i64[1], v191, (__int64)&v191[v192]);
        v193 = a2[3].m128i_i64[0];
        v64 = a2[2].m128i_i32[3] == 28;
        v335 = _mm_loadu_si128(a2 + 2);
        v336 = v193;
        if ( v64 )
          *(_BYTE *)(v189 + 184) &= ~1u;
        *(_DWORD *)(v189 + 136) = 8;
        *(_DWORD *)(v189 + 148) = 7;
        v194 = j__strlen("e-m:o-p:32:32-p270:32:32-p271:32:32-p272:64:64-i128:128-f64:32:64-f80:128-n8:16:32-S128");
        sub_1009A40(
          (_QWORD *)v189,
          "e-m:o-p:32:32-p270:32:32-p271:32:32-p272:64:64-i128:128-f64:32:64-f80:128-n8:16:32-S128",
          v194,
          (__int64)"_");
        v195 = (_BYTE *)v333.m128i_i64[1];
        *(_BYTE *)(v189 + 392) |= 1u;
        if ( v195 != v334 )
          operator delete(v195);
        *a1 = v189;
      }
      else
      {
        if ( a2[2].m128i_i32[2] == 1 && a2[3].m128i_i32[1] == 5 )
        {
          v266 = (_QWORD *)operator new(0x288u);
          sub_1023250((__int64)v266, a2, a3);
          *a1 = (__int64)v266;
          *v266 = &off_2BDED18;
          return a1;
        }
        switch ( (int)v4 )
        {
          case 2:
            v313 = operator new(0x288u);
            sub_1023250(v313, a2, a3);
            *a1 = v313;
            *(_QWORD *)v313 = &off_2BF5860;
            *(_BYTE *)(v313 + 278) = 1;
            *(_QWORD *)(v313 + 328) = ".mcount";
            return a1;
          case 3:
            v331 = operator new(0x288u);
            sub_1023250(v331, a2, a3);
            *(_QWORD *)v331 = &off_2BF5C58;
            switch ( a2[2].m128i_i32[0] )
            {
              case 1:
                *(_QWORD *)(v331 + 328) = "__mcount";
                break;
              case 0xE:
              case 0x1C:
                break;
              case 0x10:
              case 0x11:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x18:
                *(_QWORD *)(v331 + 328) = "_mcount";
                break;
              case 0x25:
              case 0x26:
                *(_BYTE *)(v331 + 278) = 1;
                goto LABEL_613;
              default:
LABEL_613:
                *(_QWORD *)(v331 + 328) = ".mcount";
                break;
            }
            *a1 = v331;
            return a1;
          case 4:
            v330 = operator new(0x288u);
            sub_1023250(v330, a2, a3);
            *a1 = v330;
            *(_QWORD *)v330 = &off_2BF6050;
            *(_DWORD *)(v330 + 156) = 6;
            *(_QWORD *)(v330 + 328) = "__mcount";
            *(_DWORD *)(v330 + 340) = 8;
            return a1;
          case 6:
            v332 = (_QWORD *)operator new(0x288u);
            sub_1023250((__int64)v332, a2, a3);
            *a1 = (__int64)v332;
            *v332 = &off_2BF6448;
            return a1;
          case 7:
            if ( a2[3].m128i_i32[0] == 17 )
            {
              v310 = operator new(0x288u);
              sub_1023250(v310, a2, a3);
              v311 = a2[2].m128i_u32[0];
              *(_DWORD *)(v310 + 156) = 6;
              *(_QWORD *)v310 = &off_2BE3860;
              if ( v311 <= 0x26 )
              {
                if ( ((1LL << v311) & 0x1EF0000) != 0 )
                {
                  *(_QWORD *)(v310 + 328) = "_mcount";
                }
                else if ( ((1LL << v311) & 0x6000000000LL) != 0 )
                {
                  *(_BYTE *)(v310 + 278) = 1;
                }
              }
              *(_WORD *)(v310 + 62) = 32;
              *(_QWORD *)v310 = &off_2BE3C58;
              *(_BYTE *)(v310 + 24) = 64;
              v312 = sub_21D5370();
              *a1 = v310;
              *(_QWORD *)(v310 + 112) = v312;
            }
            else
            {
              v308 = operator new(0x288u);
              sub_1023250(v308, a2, a3);
              v309 = a2[2].m128i_u32[0];
              *(_DWORD *)(v308 + 156) = 6;
              *(_QWORD *)v308 = &off_2BE3860;
              if ( v309 <= 0x26 )
              {
                if ( ((1LL << v309) & 0x1EF0000) != 0 )
                {
                  *(_QWORD *)(v308 + 328) = "_mcount";
                }
                else if ( ((1LL << v309) & 0x6000000000LL) != 0 )
                {
                  *(_BYTE *)(v308 + 278) = 1;
                }
              }
              *a1 = v308;
            }
            return a1;
          case 11:
            v283 = operator new(0x288u);
            sub_1023250(v283, a2, a3);
            *(_QWORD *)v283 = &off_2BDDD38;
            *(_QWORD *)(v283 + 328) = "__mcount";
            if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
              *(_BYTE *)(v283 + 278) = 1;
            *a1 = v283;
            *(_QWORD *)v283 = &off_2BDE130;
            return a1;
          case 12:
            v280 = operator new(0x288u);
            sub_1023250(v280, a2, a3);
            v281 = a2[2].m128i_u32[0];
            *(_DWORD *)(v280 + 140) = 9;
            *(_QWORD *)v280 = &off_2BDE528;
            *(_QWORD *)(v280 + 152) = 0x500000005LL;
            *(_DWORD *)(v280 + 168) = 9;
            if ( v281 > 0x26 )
              goto LABEL_521;
            v282 = 1LL << v281;
            if ( ((1LL << v281) & 0x41AC0000) != 0 )
            {
              *(_QWORD *)(v280 + 328) = "_mcount";
            }
            else if ( (v282 & 0x10004000) == 0 )
            {
              if ( (v282 & 0x6000000000LL) != 0 )
                *(_BYTE *)(v280 + 278) = 1;
LABEL_521:
              *(_QWORD *)(v280 + 328) = "__mcount";
            }
            *a1 = v280;
            *(_QWORD *)v280 = &off_2BDE920;
            *(_DWORD *)(v280 + 136) = 8;
            *(_QWORD *)(v280 + 144) = 0x700000007LL;
            break;
          case 13:
            v278 = operator new(0x288u);
            sub_1023250(v278, a2, a3);
            *(_QWORD *)v278 = &off_2BF6840;
            v279 = 2 * (*(_BYTE *)(v278 + 8) != 64) + 5;
            *(_DWORD *)(v278 + 152) = v279;
            *(_DWORD *)(v278 + 156) = v279;
            if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
              *(_BYTE *)(v278 + 278) = 1;
            *a1 = v278;
            return a1;
          case 15:
            v276 = a2[3].m128i_i32[0];
            if ( v276 == 1 )
            {
              sub_102F9E0(&v333.m128i_i64[1], a2, a3);
              *a1 = v333.m128i_i64[1];
            }
            else if ( v276 == 29 )
            {
              v277 = operator new(0x288u);
              sub_1023440(v277, a2, a3);
              *a1 = v277;
            }
            else
            {
              sub_102F5E0(&v333.m128i_i64[1], a2, a3);
              *a1 = v333.m128i_i64[1];
            }
            return a1;
          case 17:
            v274 = operator new(0x288u);
            sub_1023250(v274, a2, a3);
            *(_DWORD *)(v274 + 136) = 8;
            *(_QWORD *)v274 = &off_2BE08D8;
            *(_QWORD *)(v274 + 144) = 0x700000007LL;
            v275 = a2[2].m128i_i32[0];
            *(_DWORD *)(v274 + 180) = 7;
            if ( (unsigned int)(v275 - 37) <= 1 )
              *(_BYTE *)(v274 + 278) = 1;
            *a1 = v274;
            *(_QWORD *)v274 = &off_2BE0CD0;
            return a1;
          case 18:
            v273 = operator new(0x288u);
            sub_1023250(v273, a2, a3);
            *a1 = v273;
            *(_QWORD *)v273 = &off_2BE14B8;
            *(_DWORD *)(v273 + 136) = 8;
            *(_QWORD *)(v273 + 144) = 0x700000007LL;
            return a1;
          case 19:
            v272 = operator new(0x288u);
            sub_102E6E0(v272, a2, a3);
            *a1 = v272;
            return a1;
          case 26:
            v271 = operator new(0x288u);
            sub_1023490(v271, a2, a3);
            *a1 = v271;
            return a1;
          case 35:
            v285 = (_QWORD *)operator new(0x288u);
            sub_1023250((__int64)v285, a2, a3);
            *a1 = (__int64)v285;
            *v285 = &off_2BF7030;
            return a1;
          default:
            v314 = operator new(0x288u);
            sub_1023250(v314, a2, a3);
            *a1 = v314;
            return a1;
        }
      }
      return a1;
    case 0x26:
      if ( (unsigned int)v4 <= 0x1F && (v176 = 4160750114LL, _bittest64(&v176, v4)) || a2[3].m128i_i32[1] == 5 )
      {
        v177 = operator new(0x288u);
        sub_10234E0(v177, a2, a3);
        *(_BYTE *)(v177 + 273) = 0;
        *(_QWORD *)v177 = &off_2BE2880;
        v178 = a2[2].m128i_i32[3];
        if ( (v178 & 0xFFFFFFF7) == 1 )
        {
          *(_BYTE *)(v177 + 273) = sub_22941F0(a2, 10, 7, 0) ^ 1;
        }
        else
        {
          switch ( v178 )
          {
            case 27:
            case 5:
              if ( (unsigned __int8)sub_2294160(a2) )
              {
                *(_BYTE *)(v177 + 273) = !sub_1015120((__int64)a2, 8u);
              }
              else if ( (unsigned __int8)sub_2294180(a2) )
              {
                if ( a2[3].m128i_i32[0] == 31 )
                  *(_BYTE *)(v177 + 273) = !sub_1015120((__int64)a2, 0xAu);
                else
                  *(_BYTE *)(v177 + 273) = !sub_1015120((__int64)a2, 9u);
              }
              break;
            case 28:
              if ( a2[3].m128i_i32[0] == 31 )
                *(_BYTE *)(v177 + 273) = !sub_1015120((__int64)a2, 3u);
              else
                *(_BYTE *)(v177 + 273) = !sub_1015120((__int64)a2, 2u);
              break;
            case 31:
              *(_BYTE *)(v177 + 273) = 1;
              break;
          }
        }
        v179 = (_BYTE *)a2->m128i_i64[0];
        v180 = a2->m128i_i64[1];
        *(_DWORD *)(v177 + 168) = 9;
        *(_QWORD *)(v177 + 328) = &unk_22D6A7B;
        *(_QWORD *)v177 = &off_2BE2C78;
        v333.m128i_i64[1] = (__int64)v334;
        sub_1014C40(&v333.m128i_i64[1], v179, (__int64)&v179[v180]);
        v181 = a2[3].m128i_i64[0];
        v182 = a2[2].m128i_i32[3];
        v335 = _mm_loadu_si128(a2 + 2);
        v336 = v181;
        if ( v182 == 5 || v182 == 27 )
          *(_BYTE *)(v177 + 184) &= ~1u;
        v183 = j__strlen("e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-f80:128-n8:16:32:64-S128");
        sub_1009A40(
          (_QWORD *)v177,
          "e-m:o-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-f80:128-n8:16:32:64-S128",
          v183,
          (__int64)"_");
        if ( (_BYTE *)v333.m128i_i64[1] != v334 )
          operator delete((void *)v333.m128i_i64[1]);
        *a1 = v177;
      }
      else
      {
        switch ( (int)v4 )
        {
          case 2:
            v315 = operator new(0x288u);
            sub_10234E0(v315, a2, a3);
            *a1 = v315;
            *(_QWORD *)v315 = &off_2BF7428;
            *(_BYTE *)(v315 + 278) = 1;
            *(_QWORD *)(v315 + 328) = ".mcount";
            return a1;
          case 3:
            v326 = operator new(0x288u);
            sub_10234E0(v326, a2, a3);
            *(_QWORD *)v326 = &off_2BF7C18;
            switch ( a2[2].m128i_i32[0] )
            {
              case 1:
                *(_QWORD *)(v326 + 328) = "__mcount";
                break;
              case 0xE:
              case 0x1C:
                break;
              case 0x10:
              case 0x11:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x18:
                *(_QWORD *)(v326 + 328) = "_mcount";
                break;
              case 0x25:
              case 0x26:
                *(_BYTE *)(v326 + 278) = 1;
                goto LABEL_601;
              default:
LABEL_601:
                *(_QWORD *)(v326 + 328) = ".mcount";
                break;
            }
            *a1 = v326;
            return a1;
          case 4:
            v325 = operator new(0x288u);
            sub_10234E0(v325, a2, a3);
            *a1 = v325;
            *(_QWORD *)v325 = &off_2BF8010;
            *(_DWORD *)(v325 + 156) = 6;
            *(_QWORD *)(v325 + 328) = "__mcount";
            *(_DWORD *)(v325 + 340) = 8;
            return a1;
          case 6:
            v327 = (_QWORD *)operator new(0x288u);
            sub_10234E0((__int64)v327, a2, a3);
            *a1 = (__int64)v327;
            *v327 = &off_2BF8408;
            return a1;
          case 7:
            v317 = a2[3].m128i_i32[0];
            if ( v317 == 17 )
            {
              v322 = operator new(0x288u);
              sub_10234E0(v322, a2, a3);
              v323 = a2[2].m128i_u32[0];
              *(_DWORD *)(v322 + 156) = 6;
              *(_QWORD *)v322 = &off_2BE4050;
              if ( v323 <= 0x26 )
              {
                if ( ((1LL << v323) & 0x1EF0000) != 0 )
                {
                  *(_QWORD *)(v322 + 328) = "_mcount";
                }
                else if ( ((1LL << v323) & 0x6000000000LL) != 0 )
                {
                  *(_BYTE *)(v322 + 278) = 1;
                }
              }
              *(_QWORD *)v322 = &off_2BE4448;
              v324 = sub_21D5380();
              *a1 = v322;
              *(_QWORD *)(v322 + 112) = v324;
            }
            else if ( v317 == 49 )
            {
              v320 = operator new(0x288u);
              sub_10234E0(v320, a2, a3);
              *(_DWORD *)(v320 + 156) = 6;
              *(_QWORD *)v320 = &off_2BE4840;
              if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
                *(_BYTE *)(v320 + 278) = 1;
              *(_QWORD *)v320 = &off_2BE4C38;
              v321 = sub_21D5380();
              *a1 = v320;
              *(_QWORD *)(v320 + 112) = v321;
            }
            else
            {
              v318 = operator new(0x288u);
              sub_10234E0(v318, a2, a3);
              v319 = a2[2].m128i_u32[0];
              *(_DWORD *)(v318 + 156) = 6;
              *(_QWORD *)v318 = &off_2BE4050;
              if ( v319 <= 0x26 )
              {
                if ( ((1LL << v319) & 0x1EF0000) != 0 )
                {
                  *(_QWORD *)(v318 + 328) = "_mcount";
                }
                else if ( ((1LL << v319) & 0x6000000000LL) != 0 )
                {
                  *(_BYTE *)(v318 + 278) = 1;
                }
              }
              *a1 = v318;
            }
            return a1;
          case 10:
            v307 = operator new(0x288u);
            sub_10234E0(v307, a2, a3);
            *(_QWORD *)v307 = &off_2BF9FD0;
            if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
              *(_BYTE *)(v307 + 278) = 1;
            *a1 = v307;
            return a1;
          case 11:
            v306 = operator new(0x288u);
            sub_10234E0(v306, a2, a3);
            *(_QWORD *)v306 = &off_2BF7820;
            *(_QWORD *)(v306 + 328) = "__mcount";
            if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
              *(_BYTE *)(v306 + 278) = 1;
            *a1 = v306;
            return a1;
          case 12:
            v303 = operator new(0x288u);
            sub_10234E0(v303, a2, a3);
            v304 = a2[2].m128i_u32[0];
            *(_DWORD *)(v303 + 140) = 9;
            *(_QWORD *)v303 = &off_2BE3070;
            *(_QWORD *)(v303 + 152) = 0x500000005LL;
            *(_DWORD *)(v303 + 168) = 9;
            if ( v304 > 0x26 )
              goto LABEL_555;
            v305 = 1LL << v304;
            if ( ((1LL << v304) & 0x41AC0000) != 0 )
            {
              *(_QWORD *)(v303 + 328) = "_mcount";
            }
            else if ( (v305 & 0x10004000) == 0 )
            {
              if ( (v305 & 0x6000000000LL) != 0 )
                *(_BYTE *)(v303 + 278) = 1;
LABEL_555:
              *(_QWORD *)(v303 + 328) = "__mcount";
            }
            *a1 = v303;
            *(_QWORD *)v303 = &off_2BE3468;
            break;
          case 13:
            v301 = operator new(0x288u);
            sub_10234E0(v301, a2, a3);
            *(_QWORD *)v301 = &off_2BF8800;
            v302 = 2 * (*(_BYTE *)(v301 + 8) != 64) + 5;
            *(_DWORD *)(v301 + 152) = v302;
            *(_DWORD *)(v301 + 156) = v302;
            if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
              *(_BYTE *)(v301 + 278) = 1;
            *a1 = v301;
            return a1;
          case 14:
            v292 = operator new(0x288u);
            sub_10234E0(v292, a2, a3);
            *(_BYTE *)(v292 + 344) = 1;
            *(_QWORD *)v292 = &off_2BE18A8;
            *(_DWORD *)(v292 + 340) = 10;
            *(_WORD *)(v292 + 30) = 8224;
            *(_BYTE *)(v292 + 33) = 64;
            *(_BYTE *)(v292 + 23) = 64;
            *(_WORD *)(v292 + 24) = 16448;
            v293 = sub_21D5370();
            v294 = _mm_load_si128((const __m128i *)&xmmword_23855F0);
            *(_QWORD *)(v292 + 112) = v293;
            *(_DWORD *)(v292 + 168) = 9;
            *(_QWORD *)(v292 + 152) = 0x400000004LL;
            *(__m128i *)(v292 + 136) = v294;
            sub_1009A40(
              (_QWORD *)v292,
              "e-m:w-p270:32:32-p271:32:32-p272:64:64-i64:64-i128:128-f80:128-n8:16:32:64-S128",
              79,
              (__int64)&byte_22CD811);
            *a1 = v292;
            return a1;
          case 15:
            v290 = a2[3].m128i_i32[0];
            if ( v290 == 1 )
            {
              v298 = operator new(0x288u);
              sub_10234E0(v298, a2, a3);
              v299 = _mm_load_si128((const __m128i *)&xmmword_23855F0);
              *(_BYTE *)(v298 + 344) = 1;
              *(_QWORD *)(v298 + 152) = 0x400000004LL;
              *(_WORD *)(v298 + 30) = 8224;
              *(_BYTE *)(v298 + 33) = 64;
              *(_DWORD *)(v298 + 168) = 9;
              *(_QWORD *)v298 = &off_2BE2098;
              *(_BYTE *)(v298 + 23) = 64;
              *(_WORD *)(v298 + 24) = -32640;
              *(__m128i *)(v298 + 136) = v299;
              v300 = sub_21D53A0();
              *a1 = v298;
              *(_QWORD *)(v298 + 112) = v300;
              *(_BYTE *)(v298 + 278) = 1;
            }
            else if ( v290 == 29 )
            {
              v291 = operator new(0x288u);
              sub_10234E0(v291, a2, a3);
              *a1 = v291;
              *(_QWORD *)v291 = &off_2BE2490;
              *(_QWORD *)(v291 + 152) = 0x600000004LL;
              *(_BYTE *)(v291 + 344) = 1;
            }
            else
            {
              v295 = operator new(0x288u);
              sub_10234E0(v295, a2, a3);
              v296 = _mm_load_si128((const __m128i *)&xmmword_23855F0);
              *(_BYTE *)(v295 + 344) = 1;
              *(_QWORD *)(v295 + 152) = 0x400000004LL;
              *(_WORD *)(v295 + 30) = 8224;
              *(_BYTE *)(v295 + 33) = 64;
              *(_DWORD *)(v295 + 168) = 9;
              *(_QWORD *)v295 = &off_2BE1CA0;
              *(_BYTE *)(v295 + 23) = 64;
              *(_WORD *)(v295 + 24) = 16448;
              *(__m128i *)(v295 + 136) = v296;
              v297 = sub_21D5370();
              *a1 = v295;
              *(_QWORD *)(v295 + 112) = v297;
            }
            return a1;
          case 17:
            v288 = operator new(0x288u);
            sub_10234E0(v288, a2, a3);
            *(_DWORD *)(v288 + 136) = 8;
            *(_QWORD *)v288 = &off_2BF8BF8;
            *(_QWORD *)(v288 + 144) = 0x700000007LL;
            v289 = a2[2].m128i_i32[0];
            *(_DWORD *)(v288 + 180) = 7;
            if ( (unsigned int)(v289 - 37) <= 1 )
              *(_BYTE *)(v288 + 278) = 1;
            *a1 = v288;
            return a1;
          case 19:
            v287 = operator new(0x288u);
            sub_102E7B0(v287, a2, a3);
            *a1 = v287;
            return a1;
          case 24:
            v329 = operator new(0x288u);
            sub_10234E0(v329, a2, a3);
            *a1 = v329;
            *(_QWORD *)(v329 + 328) = ".mcount";
            *(_DWORD *)(v329 + 152) = 4;
            *(_DWORD *)(v329 + 72) = 256;
            *(_BYTE *)(v329 + 184) &= ~0x10u;
            *(_DWORD *)(v329 + 62) = 16777472;
            *(_QWORD *)v329 = &off_2BF93E8;
            return a1;
          case 25:
            v328 = operator new(0x288u);
            sub_10234E0(v328, a2, a3);
            *a1 = v328;
            *(_QWORD *)(v328 + 328) = ".mcount";
            *(_DWORD *)(v328 + 152) = 4;
            *(_DWORD *)(v328 + 72) = 256;
            *(_BYTE *)(v328 + 184) &= ~0x10u;
            *(_DWORD *)(v328 + 62) = 16777472;
            *(_QWORD *)v328 = &off_2BF97E0;
            return a1;
          case 35:
            v284 = (_QWORD *)operator new(0x288u);
            sub_10234E0((__int64)v284, a2, a3);
            *a1 = (__int64)v284;
            *v284 = &off_2BF9BD8;
            return a1;
          default:
            v316 = operator new(0x288u);
            sub_10234E0(v316, a2, a3);
            *a1 = v316;
            return a1;
        }
      }
      return a1;
    case 0x27:
      v28 = operator new(0x200u);
      sub_10094E0(v28, a2, v29);
      *(_BYTE *)(v28 + 184) |= 4u;
      v30 = _mm_load_si128((const __m128i *)&xmmword_23855D0);
      *(_WORD *)(v28 + 62) = 32;
      *(_QWORD *)v28 = &off_2C0B728;
      *(_BYTE *)(v28 + 275) = 1;
      *(_BYTE *)(v28 + 33) = 32;
      *(_BYTE *)(v28 + 25) = 32;
      *(_BYTE *)(v28 + 23) = 32;
      *(_DWORD *)(v28 + 136) = 6;
      *(__m128i *)(v28 + 144) = v30;
      v31 = j__strlen("e-m:e-p:32:32-i1:8:32-i8:8:32-i16:16:32-i64:32-f64:32-a:0:32-n32");
      sub_1009A40(
        (_QWORD *)v28,
        "e-m:e-p:32:32-i1:8:32-i8:8:32-i16:16:32-i64:32-f64:32-a:0:32-n32",
        v31,
        (__int64)&byte_22CD811);
      *a1 = v28;
      return a1;
    case 0x28:
      v24 = operator new(0x220u);
      sub_10094E0(v24, a2, v25);
      *(_BYTE *)(v24 + 184) |= 4u;
      *(_QWORD *)v24 = &off_2C0BB10;
      v26 = _mm_load_si128((const __m128i *)&xmmword_2385600);
      *(_QWORD *)(v24 + 512) = v24 + 528;
      *(_WORD *)(v24 + 286) = 8224;
      *(_QWORD *)(v24 + 520) = 0;
      *(_BYTE *)(v24 + 528) = 0;
      *(_BYTE *)(v24 + 272) = 0;
      *(_BYTE *)(v24 + 275) = 1;
      *(_BYTE *)(v24 + 33) = 64;
      *(_WORD *)(v24 + 62) = 32;
      *(_BYTE *)(v24 + 25) = 64;
      *(_BYTE *)(v24 + 23) = 64;
      *(_DWORD *)(v24 + 136) = 6;
      *(__m128i *)(v24 + 144) = v26;
      v27 = j__strlen("e-m:e-p:32:32-i8:8:32-i16:16:32-i64:64-n32");
      sub_1009A40((_QWORD *)v24, "e-m:e-p:32:32-i8:8:32-i16:16:32-i64:64-n32", v27, (__int64)&byte_22CD811);
      *a1 = v24;
      return a1;
    case 0x29:
      v33 = operator new(0x210u);
      sub_106F140(v33, a2, a3, 32);
      *a1 = v33;
      return a1;
    case 0x2A:
      v32 = operator new(0x210u);
      sub_106F140(v32, a2, a3, 64);
      *a1 = v32;
      return a1;
    case 0x2F:
      if ( (_DWORD)v4 || a2[3].m128i_i32[0] )
        goto LABEL_10;
      v34 = operator new(0x208u);
      sub_1037190(v34, a2, a3);
      *(_QWORD *)v34 = &off_2C06CD8;
      *(_WORD *)(v34 + 8) = 8224;
      *(_DWORD *)(v34 + 136) = 6;
      *(_QWORD *)(v34 + 144) = 0x500000005LL;
      sub_1009A40(
        (_QWORD *)v34,
        "e-p:32:32-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024-G1",
        93,
        (__int64)&byte_22CD811);
      *a1 = v34;
      return a1;
    case 0x30:
      if ( (_DWORD)v4 || a2[3].m128i_i32[0] )
        goto LABEL_10;
      v247 = operator new(0x208u);
      sub_1037190(v247, a2, a3);
      *(_WORD *)(v247 + 8) = 16448;
      *(_QWORD *)v247 = &off_2C070C0;
      *(_QWORD *)(v247 + 144) = 0x700000007LL;
      *(_DWORD *)(v247 + 136) = 8;
      sub_1009A40(
        (_QWORD *)v247,
        "e-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024-G1",
        85,
        (__int64)&byte_22CD811);
      *a1 = v247;
      return a1;
    case 0x31:
      v21 = operator new(0x208u);
      sub_1037190(v21, a2, a3);
      *(_WORD *)(v21 + 8) = 16448;
      *(_QWORD *)v21 = &off_2C074A8;
      *(_DWORD *)(v21 + 136) = 6;
      v22 = j__strlen("e-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024-n8:16:32:64-G10");
      sub_1009A40(
        (_QWORD *)v21,
        "e-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024-n8:16:32:64-G10",
        v22,
        (__int64)&byte_22CD811);
      *a1 = v21;
      return a1;
    case 0x32:
      if ( (_DWORD)v4 || a2[3].m128i_i32[0] )
        goto LABEL_10;
      v19 = operator new(0x208u);
      sub_1037190(v19, a2, a3);
      *(_QWORD *)v19 = &off_2C07890;
      *(_QWORD *)(v19 + 144) = 0x500000005LL;
      v20 = *(_BYTE *)(v19 + 287);
      *(_WORD *)(v19 + 8) = 8224;
      *(_DWORD *)(v19 + 136) = 6;
      if ( (unsigned __int8)v20 < 0x20u )
        v20 = 32;
      *(_BYTE *)(v19 + 287) = v20;
      sub_1009A40(
        (_QWORD *)v19,
        "e-p:32:32-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024-n8:16:32:64-G1",
        105,
        (__int64)&byte_22CD811);
      *a1 = v19;
      return a1;
    case 0x33:
      if ( !(_DWORD)v4 )
      {
        if ( !a2[3].m128i_i32[0] )
        {
          v17 = operator new(0x210u);
          sub_1037190(v17, a2, a3);
          *(_QWORD *)v17 = &off_2C07C78;
          *(_QWORD *)(v17 + 144) = 0x700000007LL;
          v18 = *(_BYTE *)(v17 + 287);
          *(_DWORD *)(v17 + 520) = 1;
          *(_WORD *)(v17 + 8) = 16448;
          *(_DWORD *)(v17 + 136) = 8;
          if ( (unsigned __int8)v18 < 0x40u )
            v18 = 64;
          *(_BYTE *)(v17 + 287) = v18;
          sub_1009A40(
            (_QWORD *)v17,
            "e-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024-n8:16:32:64-G1",
            97,
            (__int64)&byte_22CD811);
          *a1 = v17;
          return a1;
        }
LABEL_10:
        *a1 = 0;
        return a1;
      }
      if ( (_DWORD)v4 != 23 )
        goto LABEL_10;
      v196 = operator new(0x208u);
      sub_1037190(v196, a2, a3);
      *(_QWORD *)v196 = &off_2C08060;
      *(_QWORD *)(v196 + 144) = 0x700000007LL;
      *(_WORD *)(v196 + 8) = 16448;
      *(_QWORD *)(v196 + 352) = &unk_2493E60;
      *(_DWORD *)(v196 + 136) = 8;
      sub_1009A40(
        (_QWORD *)v196,
        "e-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024-n32:64-S32-G1-P4-A0",
        102,
        (__int64)&byte_22CD811);
      *(_WORD *)(v196 + 18) = 4112;
      v197 = sub_21D5350();
      *(_BYTE *)(v196 + 279) = 1;
      *(_QWORD *)(v196 + 88) = v197;
      *(_WORD *)(v196 + 276) = 257;
      *(_WORD *)(v196 + 286) = 16448;
      *a1 = v196;
      return a1;
    case 0x36:
      v14 = operator new(0x208u);
      sub_10094E0(v14, a2, v15);
      *(_QWORD *)v14 = &off_2C041C8;
      v16 = j__strlen("E-m:e-p:32:32-i64:64-a:0:32-n32-S64");
      sub_1009A40((_QWORD *)v14, "E-m:e-p:32:32-i64:64-a:0:32-n32-S64", v16, (__int64)&byte_22CD811);
      *(_BYTE *)(v14 + 61) = 32;
      *(_BYTE *)(v14 + 336) = 4;
      *(_DWORD *)(v14 + 512) = 1;
      *a1 = v14;
      return a1;
    case 0x37:
      if ( a2[2].m128i_i32[1] || a2[2].m128i_i32[2] || a2[3].m128i_i32[1] != 7 )
        goto LABEL_10;
      if ( (_DWORD)v4 == 36 )
      {
        v259 = operator new(0x238u);
        sub_1023030(v259, a2, a3);
        *a1 = v259;
        *(_QWORD *)(v259 + 328) = "__mcount";
        *(_DWORD *)(v259 + 340) = 7;
        *(_BYTE *)(v259 + 278) = 1;
        *(_QWORD *)v259 = &off_2BFA7B8;
      }
      else if ( (_DWORD)v4 == 37 )
      {
        v258 = operator new(0x238u);
        sub_1023030(v258, a2, a3);
        *a1 = v258;
        *(_QWORD *)(v258 + 328) = "__mcount";
        *(_DWORD *)(v258 + 340) = 7;
        *(_BYTE *)(v258 + 278) = 1;
        *(_QWORD *)v258 = &off_2BFABA8;
        *(_WORD *)(v258 + 25) = 16448;
      }
      else
      {
        if ( (_DWORD)v4 )
          goto LABEL_29;
        v23 = operator new(0x238u);
        sub_1023030(v23, a2, a3);
        *a1 = v23;
        *(_QWORD *)v23 = &off_2BFA3C8;
        *(_QWORD *)(v23 + 328) = "__mcount";
        *(_DWORD *)(v23 + 340) = 7;
        *(_BYTE *)(v23 + 278) = 1;
      }
      return a1;
    case 0x38:
      if ( a2[2].m128i_i32[1] || a2[2].m128i_i32[2] || a2[3].m128i_i32[1] != 7 )
        goto LABEL_10;
      if ( (_DWORD)v4 == 36 )
      {
        v262 = operator new(0x238u);
        sub_1023140(v262, a2, a3);
        *a1 = v262;
        *(_QWORD *)(v262 + 328) = "__mcount";
        *(_DWORD *)(v262 + 340) = 7;
        *(_BYTE *)(v262 + 278) = 1;
        *(_QWORD *)v262 = &off_2BFB388;
      }
      else if ( (_DWORD)v4 == 37 )
      {
        v261 = operator new(0x238u);
        sub_1023140(v261, a2, a3);
        *a1 = v261;
        *(_QWORD *)(v261 + 328) = "__mcount";
        *(_DWORD *)(v261 + 340) = 7;
        *(_BYTE *)(v261 + 278) = 1;
        *(_QWORD *)v261 = &off_2BFB778;
        *(_WORD *)(v261 + 25) = 16448;
      }
      else if ( (_DWORD)v4 )
      {
LABEL_29:
        *a1 = 0;
      }
      else
      {
        v260 = operator new(0x238u);
        sub_1023140(v260, a2, a3);
        *a1 = v260;
        *(_QWORD *)v260 = &off_2BFAF98;
        *(_QWORD *)(v260 + 328) = "__mcount";
        *(_DWORD *)(v260 + 340) = 7;
        *(_BYTE *)(v260 + 278) = 1;
      }
      return a1;
    case 0x3B:
      v7 = operator new(0x200u);
      sub_10094E0(v7, a2, v8);
      *(_BYTE *)(v7 + 275) = 1;
      *(_QWORD *)v7 = &off_2C09BB8;
      v9 = sub_21D5380();
      *(_BYTE *)(v7 + 393) |= 0x10u;
      v10 = _mm_load_si128((const __m128i *)&xmmword_2385560);
      *(_QWORD *)(v7 + 112) = v9;
      *(_WORD *)(v7 + 30) = 16448;
      *(_WORD *)(v7 + 286) = 16448;
      *(_BYTE *)(v7 + 184) |= 4u;
      *(_WORD *)(v7 + 24) = -32640;
      *(_BYTE *)(v7 + 33) = 64;
      *(_BYTE *)(v7 + 23) = 64;
      *(_WORD *)(v7 + 62) = 64;
      *(_WORD *)(v7 + 8) = 16448;
      *(_DWORD *)(v7 + 168) = 7;
      *(_BYTE *)(v7 + 336) = 8;
      *(_QWORD *)(v7 + 152) = 0x600000006LL;
      *(__m128i *)(v7 + 136) = v10;
      v11 = j__strlen(
              "e-m:e-i64:64-n32:64-S128-v64:64:64-v128:64:64-v256:64:64-v512:64:64-v1024:64:64-v2048:64:64-v4096:64:64-v8"
              "192:64:64-v16384:64:64");
      sub_1009A40(
        (_QWORD *)v7,
        "e-m:e-i64:64-n32:64-S128-v64:64:64-v128:64:64-v256:64:64-v512:64:64-v1024:64:64-v2048:64:64-v4096:64:64-v8192:64"
        ":64-v16384:64:64",
        v11,
        (__int64)&byte_22CD811);
      v12 = a2[2].m128i_u32[0];
      *(_DWORD *)(v7 + 156) = 6;
      *(_QWORD *)v7 = &off_2BFBB68;
      if ( v12 <= 0x26 )
      {
        if ( ((1LL << v12) & 0x1EF0000) != 0 )
        {
          *(_QWORD *)(v7 + 328) = "_mcount";
        }
        else if ( ((1LL << v12) & 0x6000000000LL) != 0 )
        {
          *(_BYTE *)(v7 + 278) = 1;
        }
      }
      *a1 = v7;
      return a1;
    default:
      goto LABEL_29;
  }
}

