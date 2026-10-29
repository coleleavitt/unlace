__int64 __fastcall sub_1F4E4A0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r14
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // eax
  __int64 v14; // rax
  _BYTE *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  void *v23; // rdi
  unsigned int v24; // edx
  _QWORD *v25; // rsi
  void *v26; // r9
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // r14
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdi
  int v36; // edx
  bool v37; // r8
  __int64 v38; // rsi
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rbp
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdi
  __int64 v66; // rdx
  unsigned __int64 v67; // rbp
  __int64 v68; // rbx
  void *v69; // rax
  __int64 v70; // rcx
  char v71; // r9
  __int64 v72; // r8
  int v73; // r11d
  __int64 v74; // rdi
  _QWORD *v75; // rsi
  void *v76; // r10
  __int64 v77; // rdx
  _BYTE *v78; // rsi
  __int64 v79; // rcx
  unsigned __int64 v80; // rdx
  __int64 v81; // rbx
  __int64 v82; // rbx
  void *v83; // r14
  __int64 *v84; // rax
  __int64 v85; // rbp
  __int64 v86; // rdx
  unsigned __int8 v87; // al
  void *v88; // rdi
  _QWORD *v89; // rbx
  unsigned __int64 v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // rbx
  __int64 v96; // rax
  int v97; // ebx
  int v98; // eax
  __int64 v99; // rax
  _QWORD *v100; // rbx
  unsigned __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rax
  __int64 v107; // rbx
  __int64 v108; // rax
  __m128i v109; // xmm0
  int v110; // ebp
  int j; // ebx
  __int64 v112; // rax
  unsigned __int64 v113; // rdx
  __int64 *v114; // rax
  __int64 v115; // rbx
  __int64 v116; // rcx
  char v117; // di
  __int64 v118; // rdx
  _QWORD *v119; // rsi
  __int64 v120; // r8
  __int64 v121; // rax
  unsigned __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  __int64 v125; // rax
  __int64 v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // rax
  _QWORD *v134; // rbx
  unsigned __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  unsigned int v141; // edx
  __int64 v142; // rax
  char v143; // cl
  char *v144; // rdx
  __int64 (__fastcall *v145)(__int64); // rax
  __int64 v146; // rax
  __int64 v147; // r9
  __int64 v148; // rbx
  char v149; // bp
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rax
  __int64 v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rdx
  unsigned __int64 v159; // rcx
  __int64 v160; // rax
  int v161; // edx
  __int64 v162; // rsi
  int v163; // edi
  unsigned int v164; // ecx
  __int64 *v165; // rdx
  __int64 v166; // rbp
  int v167; // ebx
  unsigned __int64 v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rsi
  __int64 v171; // rax
  __int64 v172; // rdx
  int v173; // ecx
  __int64 v174; // rax
  int v175; // eax
  __int64 v176; // rdi
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  int v183; // r10d
  __int64 v184; // rdx
  _QWORD *v185; // rdi
  __int64 v186; // rsi
  __int64 v187; // rbx
  __int64 v188; // rdx
  _QWORD *v189; // rdi
  __int64 v190; // rdx
  unsigned __int64 v191; // rax
  unsigned __int64 i; // rcx
  unsigned __int64 v193; // rdx
  __int64 v194; // rdx
  __int64 v195; // rdx
  unsigned __int64 v196; // rcx
  unsigned __int64 v197; // rdx
  __int64 v198; // rdi
  __int64 v199; // rax
  unsigned __int64 v200; // r9
  int v201; // r8d
  __int64 v202; // rcx
  __int64 v203; // r10
  char v204; // si
  unsigned __int64 v205; // rcx
  unsigned __int64 v206; // rdx
  __int64 v207; // rdi
  __int64 v208; // rax
  unsigned __int64 v209; // r11
  char v210; // al
  unsigned int v211; // esi
  int v212; // edi
  __int64 v213; // r9
  __int64 v214; // r8
  unsigned __int64 v215; // rsi
  __int64 v216; // rdx
  __int64 v217; // rax
  unsigned __int64 v218; // rax
  unsigned __int64 v219; // rdx
  void **v220; // rax
  __int64 v221; // rdx
  int v222; // esi
  __int64 v223; // r8
  __int64 v224; // rdi
  unsigned __int64 v225; // rsi
  __int64 v226; // rdx
  __int64 v227; // rax
  __int64 v228; // rax
  unsigned __int64 v229; // rbp
  void *v230; // r14
  _QWORD *v231; // rax
  __int64 v232; // rbx
  int v233; // r9d
  int v234; // ebp
  int v235; // r12d
  __int64 v236; // rdx
  unsigned __int64 v237; // rbx
  _QWORD *v238; // rdi
  __int64 v239; // rcx
  bool v240; // zf
  _QWORD *v241; // rbx
  unsigned __int64 v242; // rax
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // rax
  __int64 v248; // rdi
  __int64 v249; // rcx
  __int64 v250; // r8
  __int64 v251; // r9
  _DWORD *v252; // rax
  __int64 v253; // rdx
  unsigned __int64 v254; // rax
  __int64 v255; // rsi
  int v256; // eax
  int v257; // ecx
  unsigned int v258; // eax
  __int64 v259; // rdx
  int v260; // edx
  __int64 v261; // rdi
  __int64 v262; // rax
  __int64 v263; // rdi
  __int64 v264; // rax
  __int64 v265; // rdx
  __int64 v266; // rax
  unsigned __int64 v267; // rdx
  __int64 v268; // rax
  unsigned __int64 v269; // rax
  __int64 v270; // rdi
  unsigned __int64 v271; // rcx
  __int64 v272; // rax
  __int64 v273; // rdi
  unsigned __int8 v274; // al
  __int64 v275; // r10
  __int64 v276; // rdi
  unsigned __int64 v277; // rsi
  _WORD *v278; // rax
  _WORD *v279; // rcx
  unsigned __int64 v280; // rdx
  _WORD *v281; // rax
  __int64 v282; // rdx
  unsigned __int64 v283; // r9
  char *v284; // rdx
  __int64 v285; // rbx
  __int64 v286; // rax
  __int64 v287; // r8
  __int64 v288; // r9
  char v289; // di
  int v290; // edi
  __int64 v291; // rcx
  unsigned int v292; // edx
  __int64 *v293; // rsi
  __int64 v294; // r10
  __int64 v295; // r10
  __int64 v296; // rdi
  __int64 v297; // rax
  int v298; // eax
  _QWORD *v299; // rbp
  int v300; // ebp
  _QWORD *v301; // rdx
  int v302; // ebp
  _QWORD *v303; // r11
  int v304; // edx
  __int64 v305; // rax
  void *v306; // rbp
  __int64 v307; // rdx
  __int64 v308; // rcx
  unsigned int v309; // edi
  unsigned __int64 v310; // rsi
  __int64 v311; // rdx
  __int64 v312; // rax
  unsigned int v313; // edx
  unsigned __int64 v314; // rcx
  __int64 v315; // rax
  int v316; // esi
  unsigned int v317; // esi
  unsigned __int64 v318; // rax
  void *v319; // r14
  __int64 v320; // rbp
  _QWORD *v321; // rax
  unsigned int v322; // esi
  __int64 v323; // rax
  unsigned __int64 v324; // rax
  int v325; // edx
  int v326; // r9d
  __int64 v327; // r8
  __int64 v328; // rax
  __int64 v329; // rdx
  unsigned __int64 v330; // rdi
  __int64 v331; // rcx
  unsigned __int64 v332; // rdx
  __int64 v333; // rax
  int v334; // r10d
  __int64 *v335; // r14
  int v336; // ebp
  unsigned int v337; // eax
  _QWORD *v338; // r11
  __m128i si128; // xmm0
  __int64 v340; // rdx
  unsigned int v341; // esi
  __m128i v342; // [rsp+10h] [rbp-1E8h] BYREF
  __int64 *v343; // [rsp+20h] [rbp-1D8h]
  void **p_ptr; // [rsp+28h] [rbp-1D0h]
  __int64 v345; // [rsp+30h] [rbp-1C8h]
  __int64 v346; // [rsp+38h] [rbp-1C0h]
  __int64 v347; // [rsp+40h] [rbp-1B8h]
  __int64 v348; // [rsp+48h] [rbp-1B0h]
  __int64 v349; // [rsp+50h] [rbp-1A8h]
  __int64 v350; // [rsp+58h] [rbp-1A0h]
  unsigned int v351; // [rsp+60h] [rbp-198h]
  __int16 v352; // [rsp+64h] [rbp-194h]
  char v353; // [rsp+67h] [rbp-191h]
  unsigned __int64 v354; // [rsp+68h] [rbp-190h]
  int v355; // [rsp+70h] [rbp-188h]
  unsigned int v356; // [rsp+74h] [rbp-184h]
  __int64 v357; // [rsp+78h] [rbp-180h]
  __int64 v358; // [rsp+80h] [rbp-178h]
  char v359; // [rsp+88h] [rbp-170h]
  bool v360; // [rsp+89h] [rbp-16Fh]
  unsigned __int8 v361; // [rsp+8Ah] [rbp-16Eh]
  char v362; // [rsp+8Bh] [rbp-16Dh]
  int v363; // [rsp+8Ch] [rbp-16Ch]
  __m128 v364; // [rsp+90h] [rbp-168h] BYREF
  void *ptr; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v366; // [rsp+A8h] [rbp-150h]
  _BYTE v367[64]; // [rsp+B0h] [rbp-148h] BYREF
  __m128 v368; // [rsp+F0h] [rbp-108h] BYREF
  _DWORD v369[4]; // [rsp+100h] [rbp-F8h] BYREF
  void *v370; // [rsp+110h] [rbp-E8h]
  __int64 v371; // [rsp+118h] [rbp-E0h]
  __int64 v372; // [rsp+120h] [rbp-D8h]
  __int64 v373; // [rsp+128h] [rbp-D0h]
  __int64 v374; // [rsp+130h] [rbp-C8h]
  unsigned __int64 v375; // [rsp+138h] [rbp-C0h]
  int v376; // [rsp+140h] [rbp-B8h]
  unsigned __int64 v377; // [rsp+148h] [rbp-B0h]
  __int64 v378; // [rsp+150h] [rbp-A8h]
  unsigned __int64 v379; // [rsp+158h] [rbp-A0h]
  __int64 v380; // [rsp+160h] [rbp-98h]

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 16);
  v351 = ((unsigned int)a2 >> 4) ^ ((unsigned int)a2 >> 9);
  v356 = v351 & 3;
  v348 = 16LL * (v351 & 3);
  v343 = (__int64 *)v369;
LABEL_2:
  while ( 2 )
  {
    v5 = *(_DWORD *)(v4 + 40);
    result = *(unsigned int *)(v4 + 24);
    v7 = 8 * result;
    if ( v5 > (unsigned int)result )
    {
LABEL_3:
      v8 = *(_QWORD *)(v4 + 32);
      v9 = (unsigned int)(result + 1);
      *(_DWORD *)(v4 + 24) = v9;
      v10 = (unsigned int)*(_QWORD *)(v8 + v7);
      switch ( *(_QWORD *)(v8 + v7) )
      {
        case 0LL:
          v100 = *(_QWORD **)(v4 + 8);
          v101 = sub_1EE13A0((__int64)v100, *(_QWORD *)(v4 + 16), (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
          v106 = sub_1EDB980(v100, v101, v102, v103, v104, v105);
          v107 = *(_QWORD *)a1;
          p_ptr = (void **)v3;
          v342.m128i_i64[0] = v106;
          v108 = *(unsigned int *)(v107 + 11792);
          v109 = (__m128i)_mm_loadh_ps((const double *)v342.m128i_i64);
          if ( v108 + 1 > (unsigned __int64)*(unsigned int *)(v107 + 11796) )
          {
            v342 = v109;
            sub_2237220(v107 + 11784, v107 + 11800, v108 + 1, 16);
            v108 = *(unsigned int *)(v107 + 11792);
            v109 = _mm_load_si128(&v342);
          }
          *(__m128i *)(*(_QWORD *)(v107 + 11784) + 16 * v108) = v109;
          v4 = *(_QWORD *)(a1 + 16);
          ++*(_DWORD *)(v107 + 11792);
          continue;
        case 1LL:
          v134 = *(_QWORD **)(v4 + 8);
          v135 = sub_1EE13A0((__int64)v134, *(_QWORD *)(v4 + 16), (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
          v140 = sub_1EDB980(v134, v135, v136, v137, v138, v139);
          v4 = *(_QWORD *)(a1 + 16);
          v141 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 4LL);
          if ( v141 != 5 && v141 > 1 )
          {
            if ( (*(_BYTE *)(v3 + 28) & 0x7F) != 0 )
              *(_QWORD *)(*(_QWORD *)(v3 + 88) + 104LL) = v140;
            else
              sub_B79170(v3, v140);
            v4 = *(_QWORD *)(a1 + 16);
          }
          continue;
        case 2LL:
          v115 = *(_QWORD *)a1;
          ptr = (void *)v3;
          v116 = v115 + 4064;
          v117 = *(_BYTE *)(v115 + 4064) & 1;
          if ( v117 )
          {
            v118 = v115 + 4072;
            v119 = (_QWORD *)(v115 + 4072 + v348);
            v120 = *v119;
            if ( v3 == *v119 )
              goto LABEL_56;
            v8 = v356;
            v183 = 3;
          }
          else
          {
            v182 = *(unsigned int *)(v115 + 4080);
            if ( !(_DWORD)v182 )
            {
              v368.m128_u64[0] = 0;
              v221 = *(unsigned int *)(v115 + 4064);
              v222 = (*(_DWORD *)(v115 + 4064) >> 1) + 1;
LABEL_150:
              v223 = (unsigned int)(3 * v182);
              goto LABEL_151;
            }
            v183 = v182 - 1;
            v118 = *(_QWORD *)(v115 + 4072);
            v8 = ((_DWORD)v182 - 1) & v351;
            v119 = (_QWORD *)(v118 + 16 * v8);
            v120 = *v119;
            if ( v3 == *v119 )
              goto LABEL_95;
          }
          v298 = 1;
          v299 = nullptr;
          if ( v120 == -4096 )
            goto LABEL_244;
          while ( 1 )
          {
            if ( v299 || v120 != -8192 )
              v119 = v299;
            v336 = v298 + 1;
            v337 = v183 & (v8 + v298);
            v8 = v337;
            v338 = (_QWORD *)(v118 + 16LL * v337);
            v120 = *v338;
            if ( v3 == *v338 )
            {
              if ( v117 )
              {
                v118 = v115 + 4072;
                v119 = v338;
LABEL_56:
                v121 = 64;
              }
              else
              {
                v118 = *(_QWORD *)(v115 + 4072);
                v182 = *(unsigned int *)(v115 + 4080);
                v119 = v338;
LABEL_95:
                v121 = 16 * v182;
              }
              sub_1F35DD0(&v368, v119, (_QWORD *)(v121 + v118), v116, 1);
              v125 = *(unsigned int *)(v368.m128_u64[0] + 8);
              goto LABEL_58;
            }
            if ( v120 == -4096 )
              break;
            v298 = v336;
            v299 = v119;
            v119 = v338;
          }
          if ( !v119 )
            v119 = (_QWORD *)(v118 + 16LL * v337);
LABEL_244:
          v368.m128_u64[0] = (unsigned __int64)v119;
          v221 = *(unsigned int *)(v115 + 4064);
          v222 = (*(_DWORD *)(v115 + 4064) >> 1) + 1;
          if ( !v117 )
          {
            LODWORD(v182) = *(_DWORD *)(v115 + 4080);
            goto LABEL_150;
          }
          v223 = 12;
          LODWORD(v182) = 4;
LABEL_151:
          if ( 4 * v222 >= (unsigned int)v223 )
          {
            v317 = 2 * v182;
LABEL_274:
            v342.m128i_i64[0] = v115 + 4064;
            sub_1F3A3A0(v115 + 4064, v317, v221, v116, v223, v8);
            sub_1F21BF0(v342.m128i_i64[0], (__int64 *)&ptr, &v368);
            LODWORD(v221) = *(_DWORD *)(v115 + 4064);
            v116 = v342.m128i_i64[0];
            v224 = (__int64)ptr;
            goto LABEL_153;
          }
          v223 = (unsigned int)v182 >> 3;
          v224 = v3;
          if ( (int)v182 - *(_DWORD *)(v115 + 4068) - v222 <= (unsigned int)v223 )
          {
            v317 = v182;
            goto LABEL_274;
          }
LABEL_153:
          *(_DWORD *)(v115 + 4064) = (2 * ((unsigned int)v221 >> 1) + 2) | v221 & 1;
          v225 = v368.m128_u64[0];
          if ( *(_QWORD *)v368.m128_u64[0] != -4096 )
            --*(_DWORD *)(v115 + 4068);
          *(_QWORD *)v225 = v224;
          *(_DWORD *)(v225 + 8) = 0;
          if ( (*(_BYTE *)(v115 + 4064) & 1) != 0 )
          {
            v226 = v115 + 4072;
            v227 = 64;
          }
          else
          {
            v226 = *(_QWORD *)(v115 + 4072);
            v227 = 16LL * *(unsigned int *)(v115 + 4080);
          }
          sub_1F35DD0(&v368, (_QWORD *)v225, (_QWORD *)(v227 + v226), v116, 1);
          v228 = *(unsigned int *)(v115 + 4144);
          v122 = *(unsigned int *)(v115 + 4148);
          v229 = v368.m128_u64[0];
          v230 = ptr;
          if ( v228 + 1 > v122 )
          {
            sub_2237220(v115 + 4136, v115 + 4152, v228 + 1, 16);
            v228 = *(unsigned int *)(v115 + 4144);
          }
          v231 = (_QWORD *)(*(_QWORD *)(v115 + 4136) + 16 * v228);
          *v231 = v230;
          v231[1] = 0;
          v125 = *(unsigned int *)(v115 + 4144);
          *(_DWORD *)(v115 + 4144) = v125 + 1;
          *(_DWORD *)(v229 + 8) = v125;
LABEL_58:
          result = *(_QWORD *)(v115 + 4136) + 16 * v125;
          if ( *(_QWORD *)(result + 8) )
            return result;
          v126 = *(_QWORD *)(a1 + 16);
          v127 = *(unsigned int *)(v126 + 24);
          *(_DWORD *)(v126 + 24) = v127 + 1;
          if ( !*(_QWORD *)(*(_QWORD *)(v126 + 32) + 8 * v127) )
            goto LABEL_60;
          v187 = *(_QWORD *)(v3 + 112);
          *(_BYTE *)(v3 + 82) |= 1u;
          v188 = *(_QWORD *)(v187 + 104);
          if ( (v188 & 1) != 0 || (v189 = (_QWORD *)(v188 & 0xFFFFFFFFFFFFFFFCLL), (v188 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
          {
            v206 = v188 & 0xFFFFFFFFFFFFFFFELL;
          }
          else
          {
            v190 = *(_QWORD *)(v187 + 104) & 2LL;
            v191 = (unsigned __int64)v189;
            if ( !(_DWORD)v190 )
              goto LABEL_105;
            v206 = sub_6E2500(v189, v187, v190, v122, v123, v124) & 0xFFFFFFFFFFFFFFFELL;
            *(_QWORD *)(v187 + 104) = v206 | 1;
          }
          v368.m128_u64[0] = v206;
          v191 = sub_B7BB70(&v368);
LABEL_105:
          if ( v191 )
          {
            for ( i = v191; ; i = v193 )
            {
              v194 = *(_QWORD *)(i + 104);
              if ( (v194 & 3) != 0 )
                break;
              v193 = v194 & 0xFFFFFFFFFFFFFFFCLL;
              if ( !v193 || v3 == i )
                break;
            }
            if ( v3 == i )
            {
              while ( v3 != v191 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v195 = *(_QWORD *)(v191 + 104);
                    *(_BYTE *)(v191 + 82) |= 1u;
                    if ( (v195 & 3) == 0 )
                      break;
                    v191 = 0;
                  }
                  v196 = v195 & 0xFFFFFFFFFFFFFFFELL;
                  v197 = v195 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( !v197 )
                    break;
                  v191 = v197;
                  if ( v3 == v197 )
                    goto LABEL_116;
                }
                v368.m128_u64[0] = v196;
                v191 = sub_B7BB70(&v368);
              }
            }
          }
LABEL_116:
          v126 = *(_QWORD *)(a1 + 16);
LABEL_60:
          *(_DWORD *)(v3 + 64) = sub_1EE7490(v126);
          sub_1F3A880((__int64 *)a1, v3, v128, v129, v130, v131);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 3LL:
          *(_DWORD *)(v4 + 24) = result + 2;
          *(_BYTE *)(v3 + 97) = (32 * (*(_QWORD *)(v8 + 8 * v9) & 1)) | *(_BYTE *)(v3 + 97) & 0xDF;
          v132 = *(_QWORD *)(a1 + 16);
          v133 = *(unsigned int *)(v132 + 24);
          *(_DWORD *)(v132 + 24) = v133 + 1;
          *(_BYTE *)(v3 + 97) = ((*(_QWORD *)(*(_QWORD *)(v132 + 32) + 8 * v133) & 1) << 6) | *(_BYTE *)(v3 + 97) & 0xBF;
          sub_1F4DBC0((__int64 *)a1, v3);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 4LL:
          v97 = sub_1EE7490(v4);
          v98 = *(_BYTE *)(v3 + 28) & 0x7F;
          if ( (unsigned int)(v98 - 41) > 1 )
          {
            if ( (unsigned int)(v98 - 40) > 6 )
            {
              v265 = *(_QWORD *)(v3 + 152);
              v266 = (v265 >> 1) & 3;
              v267 = v265 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v266 == 2 && v267 )
                *(_DWORD *)(v267 + 40) = v97;
              else
                *(_DWORD *)(v267 + 8) = v97;
            }
            else
            {
              *(_DWORD *)(sub_B73ED0(v3) + 8) = v97;
            }
          }
          else
          {
            *(_DWORD *)(v3 + 136) = v97;
          }
          goto LABEL_10;
        case 5LL:
          v145 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL);
          if ( v145 == sub_A01140 )
            v146 = sub_B70A60(v3);
          else
            v146 = v145(v3);
          v148 = *(_QWORD *)(v146 + 128);
          v149 = 1;
          if ( !v148 )
            goto LABEL_79;
          v149 = 0;
          if ( *(_QWORD *)(v148 + 88) != v3 )
            goto LABEL_79;
          v255 = *(_QWORD *)(*(_QWORD *)a1 + 3224LL);
          v256 = *(_DWORD *)(*(_QWORD *)a1 + 3240LL);
          if ( !v256 )
            goto LABEL_79;
          v257 = v256 - 1;
          v149 = 1;
          v258 = (v256 - 1) & (((unsigned int)v148 >> 9) ^ ((unsigned int)v148 >> 4));
          v259 = *(_QWORD *)(v255 + 16LL * v258);
          if ( v148 == v259 )
            goto LABEL_79;
          v149 = 0;
          if ( v259 == -4096 )
            goto LABEL_79;
          v260 = 1;
          while ( 1 )
          {
            v258 = v257 & (v260 + v258);
            v261 = *(_QWORD *)(v255 + 16LL * v258);
            if ( v148 == v261 )
              break;
            ++v260;
            if ( v261 == -4096 )
            {
              v149 = 0;
              goto LABEL_79;
            }
          }
          v149 = 1;
LABEL_79:
          v150 = *(_QWORD *)(a1 + 16);
          v151 = *(unsigned int *)(v150 + 24);
          *(_DWORD *)(v150 + 24) = v151 + 1;
          *(_BYTE *)(v3 + 76) = (8 * (*(_QWORD *)(*(_QWORD *)(v150 + 32) + 8 * v151) != 0)) | *(_BYTE *)(v3 + 76) & 0xF7;
          v152 = *(_QWORD *)(a1 + 16);
          v153 = *(unsigned int *)(v152 + 24);
          *(_DWORD *)(v152 + 24) = v153 + 1;
          *(_BYTE *)(v3 + 76) = (16 * (*(_QWORD *)(*(_QWORD *)(v152 + 32) + 8 * v153) & 3)) | *(_BYTE *)(v3 + 76) & 0xCF;
          sub_1F4E180((__int64 *)a1, v3, 1, 0, 0, v147);
          v154 = *(_QWORD *)(a1 + 16);
          v155 = *(unsigned int *)(v154 + 24);
          v156 = *(_QWORD *)(v154 + 32);
          v157 = (unsigned int)(v155 + 1);
          v158 = *(_QWORD *)(v156 + 8 * v155);
          *(_DWORD *)(v154 + 24) = v157;
          if ( !v158 )
            goto LABEL_86;
          v159 = *(_QWORD *)(a1 + 32) - v158;
          if ( !v159 || !v149 )
            goto LABEL_86;
          sub_1ED8E00(*(_QWORD *)(v154 + 8), *(_QWORD *)(v154 + 16), *(_QWORD *)(v154 + 16) + 2704LL, v159, v3 + 64);
          v160 = *(_QWORD *)a1;
          v161 = *(_DWORD *)(*(_QWORD *)a1 + 3240LL);
          v162 = *(_QWORD *)(*(_QWORD *)a1 + 3224LL);
          if ( !v161 )
            goto LABEL_85;
          v163 = v161 - 1;
          v164 = (v161 - 1) & (((unsigned int)v148 >> 9) ^ ((unsigned int)v148 >> 4));
          v165 = (__int64 *)(v162 + 16LL * v164);
          if ( v148 == *v165 )
            goto LABEL_84;
          if ( *v165 != -4096 )
          {
            v325 = 1;
            while ( 1 )
            {
              v326 = v325 + 1;
              v164 = v163 & (v325 + v164);
              v165 = (__int64 *)(v162 + 16LL * v164);
              v327 = *v165;
              if ( v148 == *v165 )
                break;
              v325 = v326;
              if ( v327 == -4096 )
                goto LABEL_85;
            }
LABEL_84:
            *v165 = -8192;
            --*(_DWORD *)(v160 + 3232);
            ++*(_DWORD *)(v160 + 3236);
          }
LABEL_85:
          v154 = *(_QWORD *)(a1 + 16);
          v157 = *(unsigned int *)(v154 + 24);
          v156 = *(_QWORD *)(v154 + 32);
LABEL_86:
          v166 = *(_QWORD *)(v156 + 8 * v157);
          *(_DWORD *)(v154 + 24) = v157 + 1;
          v167 = sub_1EE7490(v154);
          v168 = sub_B97210(v3);
          if ( v168 )
          {
            v169 = *(_QWORD *)v168;
            *(_DWORD *)(v168 + 8) = v167;
            *(_QWORD *)v168 = (2LL * (unsigned int)(v166 - 1)) | v169 & 0xFFFFFFFFFFFFFFF9LL;
            v170 = *(_QWORD *)(a1 + 16);
            v171 = *(unsigned int *)(v170 + 24);
            v172 = *(_QWORD *)(v170 + 32);
            goto LABEL_88;
          }
          sub_B972B0(v3, v166);
          v170 = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(v3 + 176) = v167;
          v239 = *(unsigned int *)(v170 + 24);
          v172 = *(_QWORD *)(v170 + 32);
          v171 = (unsigned int)(v239 + 1);
          v240 = *(_QWORD *)(v172 + 8 * v239) == 0;
          *(_DWORD *)(v170 + 24) = v171;
          if ( v240 )
            goto LABEL_88;
          v241 = *(_QWORD **)(v170 + 8);
          v242 = sub_1EE13A0((__int64)v241, *(_QWORD *)(v170 + 16), (__int64 *)(v170 + 32), (_DWORD *)(v170 + 24));
          v247 = sub_1EDB980(v241, v242, v243, v244, v245, v246);
          v248 = *(_QWORD *)(a1 + 16);
          p_ptr = (void **)v247;
          v368.m128_u64[0] = (unsigned __int64)v343;
          v368.m128_u64[1] = 0x800000000LL;
          sub_1F18CE0(v248, (__int64 *)&v368, 0);
          v252 = sub_BC1D90(
                   *(_QWORD **)(*(_QWORD *)a1 + 144LL),
                   (const __m128i *)v368.m128_u64[0],
                   v368.m128_u32[2],
                   v249,
                   v250,
                   v251);
          v253 = *(_QWORD *)(v3 + 152);
          v342.m128i_i64[0] = (__int64)v252;
          if ( !v253 )
            goto LABEL_282;
          v254 = v253 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v253 & 4) == 0 )
            goto LABEL_180;
          if ( !v254 )
            goto LABEL_282;
          v254 = *(_QWORD *)v254 | 4LL;
LABEL_180:
          if ( (v254 & 4) == 0 )
          {
LABEL_282:
            v342 = (__m128i)_mm_loadh_ps((const double *)v342.m128i_i64);
            v323 = sub_B8C330(v3);
            v324 = sub_1F21B20((__int64 *)(v323 + 2352), 16, 3u);
            *(__m128i *)v324 = _mm_load_si128(&v342);
            *(_QWORD *)(v3 + 152) = v324 | 4;
          }
          if ( (__int64 *)v368.m128_u64[0] != v343 )
            free((void *)v368.m128_u64[0]);
          v170 = *(_QWORD *)(a1 + 16);
          v171 = *(unsigned int *)(v170 + 24);
          v172 = *(_QWORD *)(v170 + 32);
LABEL_88:
          v173 = v171 + 1;
          v174 = *(_QWORD *)(v172 + 8 * v171);
          *(_DWORD *)(v170 + 24) = v173;
          *(_BYTE *)(v3 + 73) = (32 * v174) | *(_BYTE *)(v3 + 73) & 0x1F;
          v175 = sub_1EE7490(*(_QWORD *)(a1 + 16));
          v176 = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(v3 + 24) = v175;
          *(_DWORD *)(v3 + 56) = sub_1EE7490(v176);
          v177 = sub_1EEDED0(
                   *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
                   *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                   (_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
                   (_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL));
          v4 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(v3 + 112) = v177;
          v178 = *(unsigned int *)(v4 + 24);
          *(_DWORD *)(v4 + 24) = v178 + 1;
          if ( !*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v178) )
            continue;
          v368.m128_u64[0] = (unsigned __int64)v343;
          v368.m128_u64[1] = 0x400000000LL;
          sub_1F332C0(v4, (__int64)&v368);
          if ( (*(_BYTE *)(v3 + 29) & 1) == 0 )
            sub_B8C0D0(v3, (void **)&v368, *(_QWORD *)(*(_QWORD *)a1 + 144LL), v179, v180, v181);
LABEL_52:
          v88 = (void *)v368.m128_u64[0];
          if ( (__int64 *)v368.m128_u64[0] != v343 )
            goto LABEL_33;
          goto LABEL_10;
        case 6LL:
          v99 = sub_1F6A0A0(*(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
          if ( (*(_BYTE *)(v3 + 97) & 6) != 4 )
            goto LABEL_10;
          sub_B74780(v3, v99);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 7LL:
          v142 = sub_1F6A0A0(*(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
          if ( (*(_BYTE *)(v3 + 68) & 0xC) == 0xC || (*(_BYTE *)(v3 + 68) & 0xC) == 0 )
            goto LABEL_10;
          if ( (*(_BYTE *)(v3 + 68) & 1) != 0 )
          {
            v144 = *(char **)(v3 + 72);
            v143 = *v144;
          }
          else
          {
            v143 = *(_BYTE *)(v3 + 72);
            v144 = (char *)(v3 + 72);
          }
          if ( (v143 & 1) != 0 || *(_QWORD *)v144 )
            goto LABEL_10;
          if ( v142 )
          {
            sub_B78130(v3, v142);
            v4 = *(_QWORD *)(a1 + 16);
            continue;
          }
          v333 = *(unsigned __int8 *)(v3 + 68);
          *(_BYTE *)(v3 + 68) &= 0xF3u;
          if ( (v333 & 1) == 0 )
            goto LABEL_10;
          *(_QWORD *)(v3 + 72) = *(_QWORD *)(*(_QWORD *)(v3 + 72) + 8LL);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 8LL:
          v89 = *(_QWORD **)(v4 + 8);
          v90 = sub_1EE13A0((__int64)v89, *(_QWORD *)(v4 + 16), (__int64 *)(v4 + 32), (_DWORD *)(v4 + 24));
          v342.m128i_i64[0] = sub_1EDB980(v89, v90, v91, v92, v93, v94);
          v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
          v96 = sub_1F6A0A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
          if ( *(_QWORD *)(v95 + 168) )
            goto LABEL_10;
          v342.m128i_i64[0] = v96;
          *(__m128 *)(v95 + 168) = _mm_loadh_ps((const double *)v342.m128i_i64);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 9LL:
          v78 = v367;
          ptr = v367;
          v79 = *(_QWORD *)(v4 + 32);
          v80 = (unsigned int)(result + 2);
          p_ptr = &ptr;
          v366 = 0x800000000LL;
          v81 = *(_QWORD *)(v79 + 8 * v9);
          *(_DWORD *)(v4 + 24) = v80;
          v342.m128i_i64[0] = v81;
          if ( (_DWORD)v81 == 2 )
          {
            v232 = *(_QWORD *)(v79 + 8 * v80);
            *(_DWORD *)(v4 + 24) = result + 3;
            v80 = (unsigned int)v232;
            v233 = v232;
            if ( (unsigned int)v232 > 8uLL )
            {
              LODWORD(v345) = v232;
              sub_2237220(p_ptr, v367, (unsigned int)v232, 8);
              v233 = v345;
            }
            if ( (_DWORD)v232 )
            {
              v345 = v3;
              v234 = 0;
              v235 = v233;
              do
              {
                v236 = *(unsigned int *)(v4 + 24);
                v237 = 0;
                if ( (unsigned int)v236 < *(_DWORD *)(v4 + 40) )
                {
                  v238 = *(_QWORD **)(v4 + 8);
                  v78 = *(_BYTE **)(v4 + 16);
                  *(_DWORD *)(v4 + 24) = v236 + 1;
                  v237 = sub_1F15160(v238, (__int64)v78, *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v236));
                }
                v79 = (unsigned int)v366;
                v80 = (unsigned int)v366 + 1LL;
                if ( v80 > HIDWORD(v366) )
                {
                  v78 = p_ptr + 2;
                  sub_2237220(p_ptr, p_ptr + 2, v80, 8);
                  v80 = (unsigned int)v366;
                }
                *((_QWORD *)ptr + (unsigned int)v366) = v237;
                ++v234;
                v82 = (unsigned int)(v366 + 1);
                LODWORD(v366) = v366 + 1;
              }
              while ( v235 != v234 );
              v3 = v345;
            }
            else
            {
              v82 = (unsigned int)v366;
            }
            v83 = ptr;
            v347 = 0;
            v346 = 0;
            v345 = 0;
          }
          else if ( (unsigned int)(v342.m128i_i32[0] - 6) <= 2 )
          {
            v78 = *(_BYTE **)(v4 + 16);
            v198 = *(_QWORD *)(v4 + 8);
            v82 = 0;
            v83 = nullptr;
            v199 = sub_1F68F80(v198, v78);
            v347 = 0;
            v345 = v199;
            v346 = 0;
          }
          else if ( v342.m128i_i32[0] == 10 )
          {
            v82 = 0;
            v262 = sub_1EE1670(v4);
            v263 = v4;
            v83 = nullptr;
            v346 = v262;
            v264 = sub_1EE1670(v263);
            v345 = 0;
            v347 = v264;
          }
          else
          {
            if ( v342.m128i_i32[0] == 9 )
            {
              v296 = v4;
              v82 = 0;
              v83 = nullptr;
              v297 = sub_1EE1670(v296);
              v347 = 0;
              v346 = v297;
            }
            else
            {
              v347 = 0;
              v82 = 0;
              v83 = nullptr;
              v346 = 0;
            }
            v345 = 0;
          }
          v84 = (__int64 *)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v85 = *v84;
          if ( *(_BYTE *)(*v84 + 16) != 26 )
            v85 = sub_F63050(*v84, v78, v80, v79);
          v86 = *(unsigned __int8 *)(v85 + 19);
          v87 = (*(_BYTE *)(v85 + 19) >> 1) & 0xF;
          if ( (unsigned int)v87 - 9 > 1 )
            goto LABEL_32;
          v200 = *(_QWORD *)(v85 + 16);
          v201 = 0;
          v350 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
          v352 = *(_WORD *)(v85 + 20) >> 2;
          v353 = BYTE3(v200) >> 7;
          if ( (v200 & 0x80000000) != 0 )
            v201 = *(_DWORD *)(v85 + 8LL * *(unsigned __int16 *)(v85 + 22) + 48);
          v360 = (v200 & 0x200000000LL) != 0;
          v359 = BYTE4(v200) & 1;
          if ( (v200 & 0x1000000) != 0 )
          {
            v202 = (v200 & 0x40000000) != 0;
            v203 = 8LL * *(unsigned __int16 *)(v85 + 22) + 48;
            v349 = *(unsigned __int16 *)(v85 + 22);
            v204 = v86 & 0x40;
            if ( (v86 & 0x40) != 0 )
              v202 += (*(_BYTE *)(((v85 + v203 + (((char)v86 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
            v205 = ((v85 + v203 + ((SBYTE3(v200) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v202;
            if ( v87 != 2 )
            {
              switch ( v87 )
              {
                case 0u:
                  v269 = v205 + 8;
                  v270 = 8;
                  goto LABEL_202;
                case 1u:
                  v269 = v205 + 16;
                  v270 = 16;
                  goto LABEL_202;
                default:
                  goto LABEL_32;
              }
              goto LABEL_32;
            }
            v205 += 8LL * (*(_WORD *)((v85 + v203 + ((SBYTE3(v200) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
            v269 = v205;
            v270 = 0;
            v204 = v86 & 0x40;
LABEL_202:
            v271 = v349 + v270 + v205;
            if ( (v200 & 0x20000000) != 0 )
              v269 = v271;
            v354 = *(_QWORD *)((v269 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          }
          else
          {
            if ( *(_BYTE *)(v85 + 16) == 26
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
              && (LODWORD(v349) = v201,
                  v268 = sub_F63050(v85, v78, v86, v200 >> 24),
                  LOBYTE(v86) = *(_BYTE *)(v85 + 19),
                  v200 = *(_QWORD *)(v85 + 16),
                  v201 = v349,
                  v268) )
            {
              v354 = *(_BYTE *)(v85 + 18) >> 5;
            }
            else
            {
              v354 = 0;
            }
            v204 = v86 & 0x40;
          }
          v355 = (*(_BYTE *)(v85 + 18) >> 3) & 3;
          if ( (v200 & 0x20000000) != 0 )
          {
            v207 = 8LL * *(unsigned __int16 *)(v85 + 22) + 48;
            v208 = (v200 & 0x40000000) != 0;
            if ( v204 )
              v208 += (*(_BYTE *)(((v85 + v207 + (((char)v86 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
            v209 = ((v85 + v207 + ((SBYTE3(v200) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * v208;
            v210 = ((unsigned __int8)v86 >> 1) & 0xF;
            if ( v210 == 2 )
            {
              v209 += 8LL * (*(_WORD *)((v85 + v207 + ((SBYTE3(v200) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
LABEL_221:
              if ( (v86 & 0x40) != 0 )
              {
LABEL_208:
                v272 = *(unsigned __int16 *)(v85 + 22);
                LOWORD(v349) = 0;
                v273 = 8 * v272 + 48;
                v358 = v272;
                v357 = v273;
                v240 = (*(_BYTE *)(((v85 + v273 + (((char)v86 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) == 0;
                v362 = *(_BYTE *)(((v85 + v273 + (((char)v86 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4;
                if ( !v240 )
                  LOWORD(v349) = *(_WORD *)(((v85 + v273 + ((SBYTE3(v200) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL)
                                          + 8LL * ((v200 & 0x40000000) != 0))
                               & 0x1FF;
                v274 = *(_BYTE *)(((v85 + v357 + ((SBYTE3(v200) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1);
                if ( (v274 & 0xF0) != 0 )
                {
                  v275 = v274 >> 4;
                  v361 = ((unsigned __int8)v86 >> 1) & 0xF;
                  if ( (v274 & 8) != 0 && v274 >> 4 )
                  {
                    v363 = v201;
                    v328 = sub_1F1EAC0(v85);
                    v201 = v363;
                    if ( v361 != 2 )
                    {
                      switch ( v361 )
                      {
                        case 0u:
                        case 1u:
                        case 3u:
                        case 4u:
                        case 5u:
                        case 6u:
                        case 7u:
                        case 8u:
                        case 0xBu:
                          break;
                        case 9u:
                          v329 = 8;
                          goto LABEL_293;
                        case 0xAu:
                          v329 = 16;
                          goto LABEL_293;
                        default:
                          goto LABEL_363;
                      }
                    }
                    v329 = 0;
LABEL_293:
                    if ( (v200 & 0x20000000) != 0 )
                      v329 += v358;
                    v330 = (v328 + v329 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    v331 = 8LL * (BYTE3(v200) & 1);
                    v332 = v330 + v331;
                    if ( (v200 & 0x40000000) != 0 )
                      v332 = v330
                           + v331
                           + (*(_BYTE *)(((v85 + v357 + ((SBYTE3(v200) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) >> 4);
                    v276 = v275;
                    v277 = (v332 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v276 = 0;
                    v277 = 0;
                  }
                  v278 = (_WORD *)((v85 + v357 + ((SBYTE3(v200) >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL);
                  v279 = &v278[4 * ((v200 & 0x40000000) != 0) + 4 * (unsigned __int64)(v362 != 0)];
                  if ( v361 != 2 )
                  {
                    v357 = v361;
                    switch ( v361 )
                    {
                      case 0u:
                      case 1u:
                      case 3u:
                      case 4u:
                      case 5u:
                      case 6u:
                      case 7u:
                      case 8u:
                      case 0xBu:
                        switch ( v357 )
                        {
                          case 6LL:
                          case 7LL:
                          case 8LL:
                            v279 += 4;
                            goto LABEL_228;
                          case 9LL:
                            goto LABEL_290;
                          case 10LL:
                            goto LABEL_291;
                          default:
LABEL_228:
                            switch ( v357 )
                            {
                              case 0LL:
                              case 1LL:
                              case 3LL:
                              case 4LL:
                              case 5LL:
                              case 6LL:
                              case 7LL:
                              case 8LL:
                              case 11LL:
                                goto LABEL_230;
                              case 9LL:
                                goto LABEL_290;
                              case 10LL:
                                goto LABEL_291;
                              default:
                                goto LABEL_363;
                            }
                        }
                      case 9u:
LABEL_290:
                        v281 = v279 + 4;
                        v282 = 8;
                        goto LABEL_231;
                      case 0xAu:
LABEL_291:
                        v281 = v279 + 8;
                        v282 = 16;
                        goto LABEL_231;
                      default:
                        goto LABEL_363;
                    }
                  }
                  v279 += 4 * (*v278 & 0x3FF);
LABEL_230:
                  v281 = v279;
                  v282 = 0;
LABEL_231:
                  v283 = v200 >> 24;
                  v284 = (char *)v279 + v358 + v282;
                  if ( (v283 & 0x20) != 0 )
                    v281 = v284;
                  v280 = (((unsigned __int64)v281 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8 * (v283 & 1);
LABEL_234:
                  v375 = v209;
                  v378 = v275;
                  v368.m128_i16[0] = v352;
                  v377 = v280;
                  v380 = v276;
                  v371 = v82;
                  v376 = v201;
                  v379 = v277;
                  v370 = v83;
                  v368.m128_i8[2] = (4 * v360) | (2 * v359) & 0xFB | v353 & 0xFB | v368.m128_i8[2] & 0xF8;
                  v368.m128_i16[1] = (8 * v349) | v368.m128_i16[1] & 0xF007;
                  v368.m128_u64[1] = v354;
                  v369[0] = v355;
                  v369[2] = v342.m128i_i32[0];
                  v372 = v345;
                  v373 = v346;
                  v374 = v347;
                  *(_QWORD *)(v3 + 48) = sub_A73610(
                                           v350,
                                           *(_QWORD *)(v85 + 24),
                                           (__int64 *)(v85 + 48),
                                           *(unsigned __int16 *)(v85 + 22),
                                           (const __m128i *)&v368,
                                           0);
                  v285 = *(_QWORD *)a1;
                  v286 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
                  v342.m128i_i64[0] = v3;
                  v289 = *(_BYTE *)(v285 + 3248);
                  v364 = _mm_loadh_ps((const double *)v342.m128i_i64);
                  v290 = v289 & 1;
                  if ( v290 )
                  {
                    v291 = v285 + 3256;
                    v292 = ((unsigned __int8)((unsigned int)v286 >> 4) ^ (unsigned __int8)((unsigned int)v286 >> 9)) & 3;
                    v293 = (__int64 *)(v285
                                     + 3256
                                     + 16LL
                                     * (((unsigned __int8)((unsigned int)v286 >> 4)
                                       ^ (unsigned __int8)((unsigned int)v286 >> 9))
                                      & 3));
                    v287 = *v293;
                    if ( v286 == *v293 )
                    {
LABEL_236:
                      v294 = 64;
LABEL_237:
                      sub_1F35DD0(&v368, v293, (_QWORD *)(v291 + v294), v285 + 3248, 1);
                      goto LABEL_32;
                    }
                    v288 = 3;
                  }
                  else
                  {
                    v295 = *(unsigned int *)(v285 + 3264);
                    if ( !(_DWORD)v295 )
                    {
                      v368.m128_u64[0] = 0;
                      v307 = *(unsigned int *)(v285 + 3248);
                      v308 = (unsigned int)((*(_DWORD *)(v285 + 3248) >> 1) + 1);
                      goto LABEL_258;
                    }
                    v288 = (unsigned int)(v295 - 1);
                    v291 = *(_QWORD *)(v285 + 3256);
                    v292 = v288 & (((unsigned int)v286 >> 4) ^ ((unsigned int)v286 >> 9));
                    v293 = (__int64 *)(v291 + 16LL * v292);
                    v287 = *v293;
                    if ( v286 == *v293 )
                      goto LABEL_240;
                  }
                  v334 = 1;
                  v335 = nullptr;
                  if ( v287 == -4096 )
                    goto LABEL_305;
                  while ( 1 )
                  {
                    if ( !v335 && v287 == -8192 )
                      v335 = v293;
                    v292 = v288 & (v334 + v292);
                    v293 = (__int64 *)(v291 + 16LL * v292);
                    v287 = *v293;
                    if ( v286 == *v293 )
                      break;
                    if ( v287 == -4096 )
                    {
                      if ( v335 )
                        v293 = v335;
LABEL_305:
                      v368.m128_u64[0] = (unsigned __int64)v293;
                      v307 = *(unsigned int *)(v285 + 3248);
                      v308 = (unsigned int)((*(_DWORD *)(v285 + 3248) >> 1) + 1);
                      if ( (_BYTE)v290 )
                      {
                        v309 = 12;
                        LODWORD(v295) = 4;
LABEL_259:
                        if ( 4 * (int)v308 >= v309 )
                        {
                          v341 = 2 * v295;
                        }
                        else
                        {
                          v308 = (unsigned int)(v295 - *(_DWORD *)(v285 + 3252) - v308);
                          if ( (unsigned int)v308 > (unsigned int)v295 >> 3 )
                            goto LABEL_261;
                          v341 = v295;
                        }
                        sub_1F3A3A0(v285 + 3248, v341, v307, v308, v287, v288);
                        sub_1F21BF0(v285 + 3248, (__int64 *)&v364, &v368);
                        v286 = v364.m128_u64[0];
                        LODWORD(v307) = *(_DWORD *)(v285 + 3248);
LABEL_261:
                        *(_DWORD *)(v285 + 3248) = (2 * ((unsigned int)v307 >> 1) + 2) | v307 & 1;
                        v310 = v368.m128_u64[0];
                        if ( *(_QWORD *)v368.m128_u64[0] != -4096 )
                          --*(_DWORD *)(v285 + 3252);
                        *(_QWORD *)v310 = v286;
                        *(_DWORD *)(v310 + 8) = 0;
                        if ( (*(_BYTE *)(v285 + 3248) & 1) != 0 )
                        {
                          v311 = v285 + 3256;
                          v312 = 64;
                        }
                        else
                        {
                          v311 = *(_QWORD *)(v285 + 3256);
                          v312 = 16LL * *(unsigned int *)(v285 + 3264);
                        }
                        sub_1F35DD0(&v368, (_QWORD *)v310, (_QWORD *)(v312 + v311), v285 + 3248, 1);
                        v313 = *(_DWORD *)(v285 + 3328);
                        *(_DWORD *)(v368.m128_u64[0] + 8) = v313;
                        v314 = *(unsigned int *)(v285 + 3332);
                        v315 = v313;
                        if ( v313 >= v314 )
                        {
                          si128 = _mm_load_si128((const __m128i *)&v364);
                          v340 = v313 + 1LL;
                          if ( v314 < v315 + 1 )
                          {
                            v342 = si128;
                            sub_2237220(v285 + 3320, v285 + 3336, v340, 16);
                            si128 = _mm_load_si128(&v342);
                          }
                          *(__m128i *)(*(_QWORD *)(v285 + 3320) + 16LL * (unsigned int)(*(_DWORD *)(v285 + 3328))++) = si128;
                        }
                        else
                        {
                          *(__m128i *)(*(_QWORD *)(v285 + 3320) + 16LL * v313) = _mm_load_si128((const __m128i *)&v364);
                          *(_DWORD *)(v285 + 3328) = v313 + 1;
                        }
LABEL_32:
                        v88 = ptr;
                        if ( ptr != p_ptr + 2 )
LABEL_33:
                          free(v88);
LABEL_10:
                        v4 = *(_QWORD *)(a1 + 16);
                        goto LABEL_2;
                      }
                      LODWORD(v295) = *(_DWORD *)(v285 + 3264);
LABEL_258:
                      v309 = 3 * v295;
                      goto LABEL_259;
                    }
                    ++v334;
                  }
                  if ( (_BYTE)v290 )
                  {
                    v291 = v285 + 3256;
                    goto LABEL_236;
                  }
                  v291 = *(_QWORD *)(v285 + 3256);
                  v295 = *(unsigned int *)(v285 + 3264);
LABEL_240:
                  v294 = 16 * v295;
                  goto LABEL_237;
                }
LABEL_223:
                v276 = 0;
                v277 = 0;
                v275 = 0;
                v280 = 0;
                goto LABEL_234;
              }
LABEL_222:
              LOWORD(v349) = 0;
              goto LABEL_223;
            }
            switch ( v210 )
            {
              case 0:
              case 1:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
              case 11:
                switch ( v210 )
                {
                  case 6:
                  case 7:
                  case 8:
                    v209 += 8LL;
                    goto LABEL_219;
                  case 9:
                    goto LABEL_217;
                  case 10:
                    goto LABEL_206;
                  default:
LABEL_219:
                    switch ( v210 )
                    {
                      case 0:
                      case 1:
                      case 3:
                      case 4:
                      case 5:
                      case 6:
                      case 7:
                      case 8:
                      case 11:
                        goto LABEL_221;
                      case 9:
                        v204 = v86 & 0x40;
                        goto LABEL_217;
                      case 10:
                        v204 = v86 & 0x40;
                        goto LABEL_206;
                      default:
                        goto LABEL_363;
                    }
                }
              case 9:
LABEL_217:
                v209 += 8LL;
                break;
              case 10:
LABEL_206:
                v209 += 16LL;
                break;
              default:
LABEL_363:
                ++*(_DWORD *)(a1 + 3800);
                BUG();
            }
          }
          else
          {
            v209 = 0;
          }
          if ( v204 )
            goto LABEL_208;
          goto LABEL_222;
        case 0xALL:
          v67 = 0;
          if ( (unsigned int)v9 < v5 )
          {
            v185 = *(_QWORD **)(v4 + 8);
            v186 = *(_QWORD *)(v4 + 16);
            *(_DWORD *)(v4 + 24) = result + 2;
            v67 = sub_1F15160(v185, v186, *(_QWORD *)(v8 + 8 * v9));
          }
          v68 = *(_QWORD *)a1;
          v69 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
          v366 = v67;
          v70 = v68 + 3400;
          ptr = v69;
          v71 = *(_BYTE *)(v68 + 3400) & 1;
          if ( v71 )
          {
            v72 = v68 + 3408;
            v73 = 3;
            v74 = ((unsigned __int8)((unsigned int)v69 >> 4) ^ (unsigned __int8)((unsigned int)v69 >> 9)) & 3;
            v75 = (_QWORD *)(v68 + 3408 + 16 * v74);
            v76 = (void *)*v75;
            if ( v69 == (void *)*v75 )
            {
LABEL_21:
              v77 = 64;
LABEL_22:
              sub_1EDE440(&v368, v75, (_QWORD *)(v72 + v77), v70, 1);
              goto LABEL_10;
            }
          }
          else
          {
            v184 = *(unsigned int *)(v68 + 3416);
            if ( !(_DWORD)v184 )
            {
              v368.m128_u64[0] = 0;
              v211 = *(_DWORD *)(v68 + 3400);
              v212 = (v211 >> 1) + 1;
              goto LABEL_140;
            }
            v73 = v184 - 1;
            v72 = *(_QWORD *)(v68 + 3408);
            LODWORD(v74) = (v184 - 1) & (((unsigned int)v69 >> 4) ^ ((unsigned int)v69 >> 9));
            v75 = (_QWORD *)(v72 + 16LL * (unsigned int)v74);
            v76 = (void *)*v75;
            if ( v69 == (void *)*v75 )
              goto LABEL_98;
          }
          v300 = 1;
          v301 = nullptr;
          if ( v76 == (void *)-4096LL )
            goto LABEL_247;
          while ( 1 )
          {
            if ( v76 == (void *)-8192LL && !v301 )
              v301 = v75;
            LODWORD(v74) = v73 & (v300 + v74);
            v75 = (_QWORD *)(v72 + 16LL * (unsigned int)v74);
            v76 = (void *)*v75;
            if ( v69 == (void *)*v75 )
              break;
            if ( v76 == (void *)-4096LL )
            {
              if ( v301 )
                v75 = v301;
LABEL_247:
              v368.m128_u64[0] = (unsigned __int64)v75;
              v211 = *(_DWORD *)(v68 + 3400);
              v212 = (v211 >> 1) + 1;
              if ( v71 )
              {
                v213 = 12;
                v184 = 4;
LABEL_141:
                v214 = (unsigned int)(4 * v212);
                if ( (unsigned int)v213 <= (unsigned int)v214 )
                {
                  v322 = 2 * v184;
                }
                else
                {
                  v214 = (unsigned int)v184 >> 3;
                  if ( (int)v184 - *(_DWORD *)(v68 + 3404) - v212 > (unsigned int)v214 )
                  {
LABEL_143:
                    *(_DWORD *)(v68 + 3400) = (2 * (v211 >> 1) + 2) | v211 & 1;
                    v215 = v368.m128_u64[0];
                    if ( *(_QWORD *)v368.m128_u64[0] != -4096 )
                      --*(_DWORD *)(v68 + 3404);
                    *(_QWORD *)v215 = v69;
                    *(_DWORD *)(v215 + 8) = 0;
                    if ( (*(_BYTE *)(v68 + 3400) & 1) != 0 )
                    {
                      v216 = v68 + 3408;
                      v217 = 64;
                    }
                    else
                    {
                      v216 = *(_QWORD *)(v68 + 3408);
                      v217 = 16LL * *(unsigned int *)(v68 + 3416);
                    }
                    sub_1EDE440(&v368, (_QWORD *)v215, (_QWORD *)(v217 + v216), v70, 1);
                    v218 = *(unsigned int *)(v68 + 3480);
                    *(_DWORD *)(v368.m128_u64[0] + 8) = v218;
                    v219 = *(unsigned int *)(v68 + 3484);
                    if ( v218 >= v219 )
                    {
                      v318 = v218 + 1;
                      v319 = ptr;
                      v320 = v366;
                      if ( v219 < v318 )
                        sub_2237220(v68 + 3472, v68 + 3488, v318, 16);
                      v321 = (_QWORD *)(*(_QWORD *)(v68 + 3472) + 16LL * *(unsigned int *)(v68 + 3480));
                      *v321 = v319;
                      v321[1] = v320;
                      ++*(_DWORD *)(v68 + 3480);
                    }
                    else
                    {
                      v220 = (void **)(*(_QWORD *)(v68 + 3472) + 16 * v218);
                      *v220 = ptr;
                      v220[1] = (void *)v366;
                      ++*(_DWORD *)(v68 + 3480);
                    }
                    goto LABEL_10;
                  }
                  v322 = v184;
                }
                v342.m128i_i64[0] = v68 + 3400;
                sub_1EFFC00(v68 + 3400, v322, v184, v70, v214, v213);
                sub_1ED20E0(v342.m128i_i64[0], (__int64 *)&ptr, &v368);
                v211 = *(_DWORD *)(v68 + 3400);
                v70 = v342.m128i_i64[0];
                v69 = ptr;
                goto LABEL_143;
              }
              v184 = *(unsigned int *)(v68 + 3416);
LABEL_140:
              v213 = (unsigned int)(3 * v184);
              goto LABEL_141;
            }
            ++v300;
          }
          if ( v71 )
          {
            v72 = v68 + 3408;
            goto LABEL_21;
          }
          v72 = *(_QWORD *)(v68 + 3408);
          v184 = *(unsigned int *)(v68 + 3416);
LABEL_98:
          v77 = 16 * v184;
          goto LABEL_22;
        case 0xBLL:
          sub_B8C4D0(v3, *(_QWORD *)(*(_QWORD *)a1 + 144LL));
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 0xCLL:
          v65 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
          v66 = *(_QWORD *)(v8 + 8 * v9);
          *(_DWORD *)(v4 + 24) = result + 2;
          sub_AB9320(v65, v3, v66, v7, v9, v8);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 0xDLL:
          v52 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
          v53 = *(_QWORD *)(v8 + 8 * v9);
          *(_DWORD *)(v4 + 24) = result + 2;
          sub_AB39A0(v52, v3, v53, v7, v9, v8);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 0xELL:
          v46 = sub_1EEDED0(*(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16), (_QWORD *)(v4 + 32), (_DWORD *)(v4 + 24));
          v47 = sub_B314D0(*(_QWORD *)(*(_QWORD *)a1 + 144LL), v46);
          sub_B8CC60(v3, v47, v48, v49, v50, v51);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 0xFLL:
          v54 = *(_QWORD *)(v4 + 16);
          v55 = *(_QWORD *)(v4 + 8);
          *(_DWORD *)(v4 + 24) = result + 2;
          v56 = *(_QWORD *)(v8 + 8 * v9);
          v57 = sub_1F6A0A0(v55, v54);
          v58 = sub_1F6A0A0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
          v59 = sub_1EEDED0(
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
                  (_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL),
                  (_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL));
          v60 = sub_B30EB0(*(_QWORD *)(*(_QWORD *)a1 + 144LL), v56, v57, v58, v59);
          sub_B8CC60(v3, v60, v61, v62, v63, v64);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 0x10LL:
          v27 = *(_QWORD *)(v8 + 8 * v9);
          v28 = *(_QWORD *)(v4 + 16);
          v29 = *(_QWORD *)(v4 + 8);
          v30 = *(_QWORD *)(v8 + 8LL * (unsigned int)(result + 2));
          *(_DWORD *)(v4 + 24) = result + 3;
          v31 = sub_1F6A0A0(v29, v28);
          v32 = *(_QWORD *)(a1 + 16);
          v33 = *(unsigned int *)(v32 + 24);
          v34 = *(_QWORD *)(v32 + 32);
          v35 = *(_QWORD *)(v32 + 8);
          v36 = *(_DWORD *)(v32 + 24);
          v37 = *(_QWORD *)(v34 + 8 * v33) != 0;
          *(_DWORD *)(v32 + 24) = v33 + 2;
          v38 = *(_QWORD *)(v32 + 16);
          v39 = *(_QWORD *)(v34 + 8LL * (unsigned int)(v36 + 1));
          LOBYTE(p_ptr) = v37;
          v342.m128i_i64[0] = v39;
          v40 = sub_1EEDED0(v35, v38, (_QWORD *)(v32 + 32), (_DWORD *)(v32 + 24));
          v41 = sub_B30E20(
                  *(_QWORD *)(*(_QWORD *)a1 + 144LL),
                  v27,
                  v30,
                  v31,
                  (unsigned __int8)p_ptr & 1,
                  v342.m128i_i32[0],
                  v40);
          sub_B8CC60(v3, v41, v42, v43, v44, v45);
          v4 = *(_QWORD *)(a1 + 16);
          continue;
        case 0x11LL:
          if ( (_DWORD)v9 == v5 )
          {
            ptr = (void *)v3;
            v15 = (_BYTE *)v3;
            v16 = 0;
          }
          else
          {
            v11 = *(_QWORD *)(v8 + 8 * v9);
            v12 = *(_QWORD *)(v4 + 16);
            *(_DWORD *)(v4 + 24) = result + 2;
            v13 = sub_1EDFDD0(*(_QWORD *)(v4 + 8), v12, v11);
            ptr = (void *)v3;
            if ( v13 )
            {
              v14 = sub_1EAD760(*(_QWORD *)a1, v13);
              v15 = ptr;
              v16 = v14;
            }
            else
            {
              v15 = (_BYTE *)v3;
              v16 = 0;
            }
          }
          sub_A93970(*(_QWORD *)(*(_QWORD *)a1 + 144LL), v15, v16, 1);
          v20 = *(_QWORD *)a1;
          v21 = *(unsigned int *)(*(_QWORD *)a1 + 4232LL);
          v22 = *(_QWORD *)a1 + 4216LL;
          if ( (_DWORD)v21 )
          {
            v23 = ptr;
            v18 = *(_QWORD *)(v20 + 4216);
            v24 = (v21 - 1) & (((unsigned int)ptr >> 9) ^ ((unsigned int)ptr >> 4));
            v25 = (_QWORD *)(v18 + 8LL * v24);
            v26 = (void *)*v25;
            if ( (void *)*v25 == ptr )
            {
LABEL_9:
              sub_AEB180(&v368, v25, (_QWORD *)(v18 + 8 * v21), v22, 1);
              goto LABEL_10;
            }
            v302 = 1;
            v303 = nullptr;
            if ( v26 != (void *)-4096LL )
            {
              while ( 1 )
              {
                if ( !v303 && v26 == (void *)-8192LL )
                  v303 = v25;
                v24 = (v21 - 1) & (v24 + v302);
                v25 = (_QWORD *)(v18 + 8LL * v24);
                v26 = (void *)*v25;
                if ( ptr == (void *)*v25 )
                  goto LABEL_9;
                if ( v26 == (void *)-4096LL )
                  break;
                ++v302;
              }
              if ( v303 )
                v25 = v303;
            }
            v304 = *(_DWORD *)(v20 + 4224);
            v19 = (unsigned int)(3 * v21);
            v368.m128_u64[0] = (unsigned __int64)v25;
            v17 = (unsigned int)(v304 + 1);
            if ( 4 * (int)v17 < (unsigned int)v19 )
            {
              v19 = (unsigned int)(v21 - *(_DWORD *)(v20 + 4228) - v17);
              if ( (unsigned int)v19 > (unsigned int)v21 >> 3 )
              {
LABEL_252:
                v240 = *v25 == -4096;
                *(_DWORD *)(v20 + 4224) = v17;
                if ( !v240 )
                  --*(_DWORD *)(v20 + 4228);
                *v25 = v23;
                sub_AEB180(&v368, v25, (_QWORD *)(v18 + 8 * v21), v22, 1);
                v305 = *(unsigned int *)(v20 + 4248);
                v306 = ptr;
                if ( v305 + 1 > (unsigned __int64)*(unsigned int *)(v20 + 4252) )
                {
                  sub_2237220(v20 + 4240, v20 + 4256, v305 + 1, 8);
                  v305 = *(unsigned int *)(v20 + 4248);
                }
                *(_QWORD *)(*(_QWORD *)(v20 + 4240) + 8 * v305) = v306;
                ++*(_DWORD *)(v20 + 4248);
                goto LABEL_10;
              }
              v316 = v21;
LABEL_270:
              v342.m128i_i64[0] = v22;
              sub_1EFE670(v22, v316, v17, v22, v18, v19);
              sub_1ED0D30((__int64 *)v342.m128i_i64[0], (__int64 *)&ptr, &v368);
              v23 = ptr;
              v18 = *(_QWORD *)(v20 + 4216);
              v21 = *(unsigned int *)(v20 + 4232);
              LODWORD(v17) = *(_DWORD *)(v20 + 4224) + 1;
              v25 = (_QWORD *)v368.m128_u64[0];
              v22 = v342.m128i_i64[0];
              goto LABEL_252;
            }
          }
          else
          {
            v368.m128_u64[0] = 0;
          }
          v316 = 2 * v21;
          goto LABEL_270;
        case 0x12LL:
          v368.m128_u64[0] = (unsigned __int64)v343;
          v368.m128_u64[1] = 0x400000000LL;
          *(_DWORD *)(v4 + 24) = result + 2;
          v110 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v9);
          if ( v110 )
          {
            for ( j = 0; j != v110; ++j )
            {
              v112 = sub_1F21F80(v4);
              if ( v112 )
              {
                v7 = v368.m128_u32[2];
                v113 = v368.m128_u32[2] + 1LL;
                if ( v113 > v368.m128_u32[3] )
                {
                  v342.m128i_i64[0] = v112;
                  sub_2237220(&v368, v343, v113, 8);
                  v7 = v368.m128_u32[2];
                  v112 = v342.m128i_i64[0];
                }
                v10 = v368.m128_u64[0];
                *(_QWORD *)(v368.m128_u64[0] + 8 * v7) = v112;
                ++v368.m128_i32[2];
              }
            }
            v114 = (__int64 *)v368.m128_u64[0];
          }
          else
          {
            v114 = v343;
          }
          sub_B8CC60(v3, *v114, v10, v7, v9, v8);
          goto LABEL_52;
        default:
          result = (unsigned int)v9;
          v7 += 8;
          if ( v5 > (unsigned int)v9 )
            goto LABEL_3;
          return result;
      }
    }
    return result;
  }
}
