__int64 __fastcall sub_1ABD3D0(__int64 a1, int a2, char a3, unsigned __int64 a4, __m128i a5)
{
  __int64 result; // rax
  __int64 m128i_i64; // rsi
  unsigned __int8 *v8; // rbx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  int v12; // edx
  __m128i *v13; // rbp
  __m128i *v14; // rbx
  const __m128i *v15; // r14
  __m128i *v16; // rdx
  const __m128i *v17; // r15
  _BYTE *v18; // rsi
  _BYTE *v19; // rax
  size_t v20; // r13
  unsigned __int64 v21; // r12
  __int64 v22; // r12
  unsigned __int64 v23; // rdi
  unsigned __int8 *v24; // rbx
  _QWORD *v25; // rdx
  __int64 v26; // rax
  bool v27; // zf
  unsigned __int64 v28; // rax
  int v29; // edx
  __m128i *v30; // r14
  __m128i *v31; // rbx
  const __m128i *v32; // r15
  __m128i *v33; // rdx
  const __m128i *v34; // rbp
  _BYTE *v35; // rsi
  _BYTE *v36; // rax
  size_t v37; // r13
  unsigned __int64 v38; // r12
  __int64 v39; // r12
  unsigned __int64 v40; // rdi
  unsigned __int8 *v41; // rbx
  _QWORD *v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  int v45; // edx
  __m128i *v46; // r14
  __m128i *v47; // rbx
  const __m128i *v48; // r15
  __m128i *v49; // rdx
  const __m128i *v50; // rbp
  _BYTE *v51; // rsi
  _BYTE *v52; // rax
  size_t v53; // r13
  unsigned __int64 v54; // r12
  __int64 v55; // r12
  unsigned __int64 v56; // rdi
  __int64 v57; // rbx
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int32 v60; // ebx
  _BYTE *v61; // rdi
  char *v62; // rcx
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // r10
  char *v67; // rsi
  __int64 v68; // rdx
  unsigned int v69; // eax
  void **v70; // rbp
  unsigned __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // rbx
  void *v74; // rdi
  void **v75; // rdi
  void **v76; // rdi
  void **v77; // rbx
  void **v78; // r12
  unsigned __int64 v79; // rbp
  void **v80; // r12
  unsigned __int64 v81; // rax
  void **v82; // r13
  void **v83; // rbx
  void **v84; // rdi
  void **v85; // rdi
  void **v86; // rbx
  void **v87; // r13
  void **v88; // r12
  unsigned __int64 v89; // rax
  void **v90; // r13
  void **v91; // rbx
  void **v92; // rdi
  void **v93; // rdi
  void **v94; // rbx
  void **v95; // r13
  unsigned __int8 *v96; // rbx
  _QWORD *v97; // rdx
  __int64 v98; // rax
  unsigned __int8 *v99; // rbx
  _QWORD *v100; // rdx
  __int64 v101; // rax
  void **v102; // r14
  unsigned __int64 v103; // rax
  __int64 v104; // r15
  __int64 v105; // rbx
  void *v106; // rdi
  void **v107; // rdi
  void **v108; // rdi
  void **v109; // rbx
  void **v110; // r15
  __int64 v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  char v115; // al
  void **v116; // rbp
  char v117; // r13
  unsigned __int64 v118; // rax
  __int64 v119; // r14
  __int64 v120; // rbx
  void *v121; // rdi
  void **v122; // rdi
  void **v123; // rdi
  void **v124; // rbx
  void **v125; // r14
  void **v126; // r12
  unsigned __int64 v127; // rax
  __int64 v128; // r13
  __int64 v129; // rbp
  void *v130; // rdi
  void **v131; // rdi
  void **v132; // rdi
  void **v133; // rbp
  void **v134; // r13
  unsigned __int64 v135; // rdx
  unsigned __int64 v136; // rax
  __int32 v137; // ebx
  _BYTE *v138; // rdi
  char *v139; // rcx
  __int64 v140; // rsi
  __int64 v141; // rax
  __int64 v142; // rsi
  __int64 v143; // r10
  char *v144; // rsi
  __int64 v145; // rdx
  unsigned int v146; // eax
  void **v147; // rbp
  unsigned __int64 v148; // rax
  __int64 v149; // r12
  __int64 v150; // rbx
  void *v151; // rdi
  void **v152; // rdi
  void **v153; // rdi
  void **v154; // rbx
  void **v155; // r12
  unsigned __int64 v156; // rbp
  void **v157; // r12
  unsigned __int64 v158; // rax
  void **v159; // r13
  void **v160; // rbx
  void **v161; // rdi
  void **v162; // rdi
  void **v163; // rbx
  void **v164; // r13
  void **v165; // r12
  unsigned __int64 v166; // rax
  void **v167; // r13
  void **v168; // rbx
  void **v169; // rdi
  void **v170; // rdi
  void **v171; // rbx
  void **v172; // r13
  unsigned __int8 *v173; // rbx
  _QWORD *v174; // rdx
  __int64 v175; // rax
  unsigned __int8 *v176; // rbx
  _QWORD *v177; // rdx
  __int64 v178; // rax
  void **v179; // r14
  unsigned __int64 v180; // rax
  __int64 v181; // r15
  __int64 v182; // rbx
  void *v183; // rdi
  void **v184; // rdi
  void **v185; // rdi
  void **v186; // rbx
  void **v187; // r15
  __int64 v188; // rsi
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  char v192; // al
  void **v193; // rbp
  char v194; // r13
  unsigned __int64 v195; // rax
  __int64 v196; // r14
  __int64 v197; // rbx
  void *v198; // rdi
  void **v199; // rdi
  void **v200; // rdi
  void **v201; // rbx
  void **v202; // r14
  __int64 v203; // r13
  __int64 v204; // rbp
  void *v205; // rdi
  void **v206; // rdi
  void **v207; // rdi
  void **v208; // rbp
  void **v209; // r13
  unsigned __int64 v210; // rdx
  unsigned __int64 v211; // rax
  __int32 v212; // ebx
  _BYTE *v213; // rdi
  char *v214; // rcx
  __int64 v215; // rsi
  __int64 v216; // rax
  __int64 v217; // rsi
  __int64 v218; // r8
  char *v219; // rsi
  __int64 v220; // rdx
  unsigned int v221; // eax
  void **v222; // rbp
  unsigned __int64 v223; // rax
  __int64 v224; // r12
  __int64 v225; // rbx
  void *v226; // rdi
  void **v227; // rdi
  void **v228; // rdi
  void **v229; // rbx
  void **v230; // r12
  unsigned __int64 v231; // rbp
  void **v232; // r12
  unsigned __int64 v233; // rax
  void **v234; // r13
  void **v235; // rbx
  void **v236; // rdi
  void **v237; // rdi
  void **v238; // rbx
  void **v239; // r13
  void **v240; // r12
  unsigned __int64 v241; // rax
  void **v242; // r13
  void **v243; // rbx
  void **v244; // rdi
  void **v245; // rdi
  void **v246; // rbx
  void **v247; // r13
  __int64 v248; // rbp
  unsigned __int64 v249; // rbx
  void **v250; // r15
  __int64 v251; // r14
  __int64 v252; // rax
  __int64 v253; // r12
  int v254; // r13d
  int v255; // ebx
  _QWORD *v256; // rax
  const void *v257; // r8
  __int64 v258; // r9
  int v259; // ecx
  __int64 v260; // rbp
  unsigned __int64 v261; // rbx
  __m128 *v262; // r14
  __int64 v263; // r13
  __int64 v264; // rax
  int v265; // r15d
  __int64 v266; // rdx
  __int64 v267; // rdx
  __int64 v268; // rdx
  __int64 v269; // rdx
  __int64 v270; // rdx
  __int64 v271; // rdx
  __int64 v272; // rdx
  __int64 v273; // rbx
  __int64 v274; // r12
  __int64 v275; // rbx
  void *v276; // rdi
  __int64 v277; // rdx
  __int64 v278; // rbx
  __int64 v279; // rbp
  __int64 v280; // rbx
  void *v281; // rdi
  __int64 v282; // rdx
  __int64 v283; // rbx
  __int64 v284; // rbp
  __int64 v285; // rbx
  void *v286; // rdi
  __int64 v287; // rdx
  __int64 v288; // rdx
  __int64 v289; // rdx
  unsigned __int64 v290; // rdx
  int v291; // eax
  unsigned __int64 v292; // rdx
  int v293; // eax
  unsigned __int64 v294; // rdx
  int v295; // eax
  __int64 v296; // rsi
  __int64 v297; // rcx
  __int64 v298; // rax
  __int64 v299; // rsi
  __int64 v300; // rcx
  __int64 v301; // rax
  __int64 v302; // rsi
  __int64 v303; // rcx
  __int64 v304; // rax
  __int64 v305; // rdx
  __int64 v306; // rdx
  __int64 v307; // rdx
  __int64 v308; // rdx
  __int64 v309; // rdx
  __int64 v310; // rax
  __int64 v311; // rbp
  __int64 v312; // r12
  __int64 v313; // rbp
  void *v314; // rdi
  __int64 v315; // rax
  __int64 v316; // rbp
  __int64 v317; // r12
  __int64 v318; // rbp
  void *v319; // rdi
  __int64 v320; // rax
  __int64 v321; // rbp
  __int64 v322; // r12
  __int64 v323; // rbp
  void *v324; // rdi
  unsigned __int64 v325; // rdx
  int v326; // eax
  unsigned __int64 v327; // rdx
  int v328; // eax
  unsigned __int64 v329; // rdx
  int v330; // eax
  unsigned __int64 v331; // rdx
  int v332; // eax
  __int64 v333; // rax
  __int64 v334; // r13
  __int64 v335; // r14
  __int64 v336; // r13
  void *v337; // rdi
  __int64 v338; // rax
  __int64 v339; // r13
  __int64 v340; // r14
  __int64 v341; // r13
  void *v342; // rdi
  __int64 v343; // rax
  __int64 v344; // r13
  __int64 v345; // r14
  __int64 v346; // r13
  void *v347; // rdi
  __int64 v348; // rax
  __int64 v349; // r13
  __int64 v350; // r14
  __int64 v351; // r13
  void *v352; // rdi
  const __m128i *v353; // [rsp+0h] [rbp-158h]
  _BYTE *v354; // [rsp+8h] [rbp-150h]
  _BYTE *v355; // [rsp+8h] [rbp-150h]
  _BYTE *v356; // [rsp+8h] [rbp-150h]
  __int64 v357; // [rsp+10h] [rbp-148h] BYREF
  char v358; // [rsp+18h] [rbp-140h]
  int v359; // [rsp+1Ch] [rbp-13Ch]
  unsigned __int64 v360; // [rsp+20h] [rbp-138h]
  void *v361; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v362; // [rsp+38h] [rbp-120h]
  int v363; // [rsp+40h] [rbp-118h]
  void *v364; // [rsp+50h] [rbp-108h] BYREF
  unsigned __int64 v365; // [rsp+58h] [rbp-100h]
  int v366; // [rsp+60h] [rbp-F8h]
  void *v367; // [rsp+70h] [rbp-E8h] BYREF
  unsigned __int64 v368; // [rsp+78h] [rbp-E0h]
  int v369; // [rsp+80h] [rbp-D8h]
  void *v370; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v371; // [rsp+98h] [rbp-C0h]
  int v372; // [rsp+A0h] [rbp-B8h]
  void *v373; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int64 v374; // [rsp+B8h] [rbp-A0h]
  int v375; // [rsp+C0h] [rbp-98h]
  void *v376; // [rsp+D0h] [rbp-88h] BYREF
  unsigned __int64 v377; // [rsp+D8h] [rbp-80h]
  int v378; // [rsp+E0h] [rbp-78h]
  __m128 v379; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int64 v380; // [rsp+100h] [rbp-58h]
  char v381; // [rsp+110h] [rbp-48h]

  result = a4;
  if ( a4 > 1 )
  {
    result = a4;
    if ( (*(_WORD *)(a4 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) != 0x10 )
    {
      m128i_i64 = a1;
      v358 = a3;
      v359 = a2;
      v357 = a1;
      v360 = a4;
      switch ( a3 )
      {
        case 0:
          sub_168B9B0((__int64)&v361, a1, 5736);
          v24 = (unsigned __int8 *)v361;
          if ( v361 )
            goto LABEL_30;
          v292 = v362;
          v293 = *(_DWORD *)(v362 + 14976);
          if ( !v293 )
          {
            v24 = (unsigned __int8 *)operator new(0x3A0u);
            *v24 = 0;
            *((_QWORD *)v24 + 12) = v24 + 112;
            *((_QWORD *)v24 + 16) = v24 + 144;
            *((_QWORD *)v24 + 20) = v24 + 176;
            *((_QWORD *)v24 + 24) = v24 + 208;
            *((_QWORD *)v24 + 28) = v24 + 240;
            *((_QWORD *)v24 + 32) = v24 + 272;
            *((_QWORD *)v24 + 36) = v24 + 304;
            *((_QWORD *)v24 + 40) = v24 + 336;
            *((_QWORD *)v24 + 44) = v24 + 368;
            *((_QWORD *)v24 + 48) = v24 + 400;
            *((_QWORD *)v24 + 52) = v24 + 432;
            *((_QWORD *)v24 + 13) = 0;
            v24[112] = 0;
            *((_QWORD *)v24 + 17) = 0;
            v24[144] = 0;
            *((_QWORD *)v24 + 21) = 0;
            v24[176] = 0;
            *((_QWORD *)v24 + 25) = 0;
            v24[208] = 0;
            *((_QWORD *)v24 + 29) = 0;
            v24[240] = 0;
            *((_QWORD *)v24 + 33) = 0;
            v24[272] = 0;
            *((_QWORD *)v24 + 37) = 0;
            v24[304] = 0;
            *((_QWORD *)v24 + 41) = 0;
            v24[336] = 0;
            *((_QWORD *)v24 + 45) = 0;
            v24[368] = 0;
            *((_QWORD *)v24 + 49) = 0;
            v24[400] = 0;
            *((_QWORD *)v24 + 53) = 0x800000000LL;
            *((_QWORD *)v24 + 66) = v24 + 544;
            *((_QWORD *)v24 + 67) = 0x600000000LL;
            goto LABEL_468;
          }
          v310 = (unsigned int)(v293 - 1);
          *(_DWORD *)(v362 + 14976) = v310;
          v24 = *(unsigned __int8 **)(v292 + 8 * v310 + 14848);
          v311 = *((unsigned int *)v24 + 134);
          *v24 = 0;
          v312 = *((_QWORD *)v24 + 66);
          *((_DWORD *)v24 + 106) = 0;
          v313 = v312 + (v311 << 6);
          while ( v312 != v313 )
          {
            while ( 1 )
            {
              v313 -= 64;
              v314 = *(void **)(v313 + 24);
              if ( v314 == (void *)(v313 + 40) )
                break;
              operator delete(v314);
              if ( v312 == v313 )
                goto LABEL_509;
            }
          }
LABEL_509:
          *((_DWORD *)v24 + 134) = 0;
LABEL_468:
          v361 = v24;
LABEL_30:
          v24[*v24 + 1] = 2;
          v25 = v361;
          v26 = *(unsigned __int8 *)v361;
          *(_BYTE *)v361 = v26 + 1;
          v27 = v361 == nullptr;
          v25[v26 + 2] = 0;
          v364 = nullptr;
          v366 = v363;
          v28 = v362;
          v365 = v362;
          if ( !v27 )
          {
            v29 = *(_DWORD *)(v362 + 14976);
            if ( v29 )
            {
              v282 = (unsigned int)(v29 - 1);
              *(_DWORD *)(v362 + 14976) = v282;
              v30 = *(__m128i **)(v28 + 8 * v282 + 14848);
              v283 = v30[33].m128i_u32[2];
              v30->m128i_i8[0] = 0;
              v284 = v30[33].m128i_i64[0];
              v30[26].m128i_i32[2] = 0;
              v285 = v284 + (v283 << 6);
              while ( v284 != v285 )
              {
                while ( 1 )
                {
                  v285 -= 64;
                  v286 = *(void **)(v285 + 24);
                  if ( v286 == (void *)(v285 + 40) )
                    break;
                  operator delete(v286);
                  if ( v284 == v285 )
                    goto LABEL_453;
                }
              }
LABEL_453:
              v30[33].m128i_i32[2] = 0;
              v31 = v30 + 6;
            }
            else
            {
              v30 = (__m128i *)operator new(0x3A0u);
              v30->m128i_i8[0] = 0;
              v31 = v30 + 6;
              v30[6].m128i_i64[0] = (__int64)v30[7].m128i_i64;
              v30[8].m128i_i64[0] = (__int64)v30[9].m128i_i64;
              v30[10].m128i_i64[0] = (__int64)v30[11].m128i_i64;
              v30[12].m128i_i64[0] = (__int64)v30[13].m128i_i64;
              v30[14].m128i_i64[0] = (__int64)v30[15].m128i_i64;
              v30[16].m128i_i64[0] = (__int64)v30[17].m128i_i64;
              v30[18].m128i_i64[0] = (__int64)v30[19].m128i_i64;
              v30[20].m128i_i64[0] = (__int64)v30[21].m128i_i64;
              v30[22].m128i_i64[0] = (__int64)v30[23].m128i_i64;
              v30[24].m128i_i64[0] = (__int64)v30[25].m128i_i64;
              v30[26].m128i_i64[0] = (__int64)v30[27].m128i_i64;
              v30[6].m128i_i64[1] = 0;
              v30[7].m128i_i8[0] = 0;
              v30[8].m128i_i64[1] = 0;
              v30[9].m128i_i8[0] = 0;
              v30[10].m128i_i64[1] = 0;
              v30[11].m128i_i8[0] = 0;
              v30[12].m128i_i64[1] = 0;
              v30[13].m128i_i8[0] = 0;
              v30[14].m128i_i64[1] = 0;
              v30[15].m128i_i8[0] = 0;
              v30[16].m128i_i64[1] = 0;
              v30[17].m128i_i8[0] = 0;
              v30[18].m128i_i64[1] = 0;
              v30[19].m128i_i8[0] = 0;
              v30[20].m128i_i64[1] = 0;
              v30[21].m128i_i8[0] = 0;
              v30[22].m128i_i64[1] = 0;
              v30[23].m128i_i8[0] = 0;
              v30[24].m128i_i64[1] = 0;
              v30[25].m128i_i8[0] = 0;
              v30[26].m128i_i64[1] = 0x800000000LL;
              v30[33].m128i_i64[0] = (__int64)v30[34].m128i_i64;
              v30[33].m128i_i64[1] = 0x600000000LL;
            }
            v32 = (const __m128i *)v361;
            v364 = v30;
            v33 = (__m128i *)((char *)v361 + 16);
            v30->m128i_i8[0] = *(_BYTE *)v361;
            v30->m128i_i8[1] = v32->m128i_i8[1];
            v30->m128i_i8[2] = v32->m128i_i8[2];
            v30->m128i_i8[3] = v32->m128i_i8[3];
            v30->m128i_i8[4] = v32->m128i_i8[4];
            v30->m128i_i8[5] = v32->m128i_i8[5];
            v30->m128i_i8[6] = v32->m128i_i8[6];
            v30->m128i_i8[7] = v32->m128i_i8[7];
            v30->m128i_i8[8] = v32->m128i_i8[8];
            v30->m128i_i8[9] = v32->m128i_i8[9];
            v30->m128i_i8[10] = v32->m128i_i8[10];
            if ( v33 < &v30[2] && &v30[1] < &v32[2] )
            {
              v30[1].m128i_i64[0] = v32[1].m128i_i64[0];
              v30[1].m128i_i64[1] = v32[1].m128i_i64[1];
              v30[2].m128i_i64[0] = v32[2].m128i_i64[0];
              v30[2].m128i_i64[1] = v32[2].m128i_i64[1];
              v30[3].m128i_i64[0] = v32[3].m128i_i64[0];
              v30[3].m128i_i64[1] = v32[3].m128i_i64[1];
              v30[4].m128i_i64[0] = v32[4].m128i_i64[0];
              v30[4].m128i_i64[1] = v32[4].m128i_i64[1];
              v30[5].m128i_i64[0] = v32[5].m128i_i64[0];
              v30[5].m128i_i64[1] = v32[5].m128i_i64[1];
            }
            else
            {
              a5 = _mm_loadu_si128(v32 + 1);
              v30[1] = a5;
              v30[2] = _mm_loadu_si128(v32 + 2);
              v30[3] = _mm_loadu_si128(v32 + 3);
              v30[4] = _mm_loadu_si128(v32 + 4);
              v30[5] = _mm_loadu_si128(v32 + 5);
            }
            v34 = v32 + 6;
            do
            {
              if ( v34 != v31 )
              {
                v36 = (_BYTE *)v31->m128i_i64[0];
                v37 = v34->m128i_u64[1];
                if ( (__m128i *)v31->m128i_i64[0] == &v31[1] )
                  v38 = 15;
                else
                  v38 = v31[1].m128i_u64[0];
                if ( v37 > v38 )
                {
                  if ( (v37 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_554;
                  v39 = 2 * v38;
                  if ( v37 < v39 )
                  {
                    v40 = v39 + 1;
                    if ( v39 < 0 )
                    {
                      v40 = 0x8000000000000000LL;
                      v39 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                  }
                  else
                  {
                    v40 = v37 + 1;
                    v39 = v34->m128i_i64[1];
                  }
                  v36 = (_BYTE *)operator new(v40);
                  if ( (__m128i *)v31->m128i_i64[0] != &v31[1] )
                  {
                    v355 = v36;
                    operator delete((void *)v31->m128i_i64[0]);
                    v36 = v355;
                  }
                  v31->m128i_i64[0] = (__int64)v36;
                  v31[1].m128i_i64[0] = v39;
                }
                if ( v37 )
                {
                  v35 = (_BYTE *)v34->m128i_i64[0];
                  if ( v37 == 1 )
                    *v36 = *v35;
                  else
                    memcpy(v36, v35, v37);
                  v36 = (_BYTE *)v31->m128i_i64[0];
                }
                v31->m128i_i64[1] = v37;
                v36[v37] = 0;
              }
              v34 += 2;
              v31 += 2;
            }
            while ( v34 != &v32[26] );
            if ( &v30[26] != v34 )
            {
              v135 = v32[26].m128i_u32[2];
              v136 = v30[26].m128i_u32[2];
              v137 = v32[26].m128i_i32[2];
              if ( v135 <= v136 )
              {
                if ( v32[26].m128i_i32[2] )
                {
                  v296 = v30[26].m128i_i64[0];
                  v297 = v32[26].m128i_i64[0];
                  v298 = 0;
                  do
                  {
                    *(_QWORD *)(v296 + v298) = *(_QWORD *)(v297 + v298);
                    *(_BYTE *)(v296 + v298 + 8) = *(_BYTE *)(v297 + v298 + 8);
                    v298 += 12;
                  }
                  while ( 12 * v135 != v298 );
                }
              }
              else
              {
                if ( v135 > v30[26].m128i_u32[3] )
                {
                  v30[26].m128i_i32[2] = 0;
                  sub_2237220(&v30[26], &v30[27], v135, 12);
                  v139 = (char *)v32[26].m128i_i64[0];
                  v138 = (_BYTE *)v30[26].m128i_i64[0];
                  v143 = 0;
                  v135 = v32[26].m128i_u32[2];
                  v144 = v139;
                }
                else
                {
                  v138 = (_BYTE *)v30[26].m128i_i64[0];
                  v139 = (char *)v32[26].m128i_i64[0];
                  if ( v30[26].m128i_i32[2] )
                  {
                    v140 = 3 * v136;
                    v141 = 0;
                    v142 = 4 * v140;
                    v143 = v142;
                    do
                    {
                      *(_QWORD *)&v138[v141] = *(_QWORD *)&v139[v141];
                      v138[v141 + 8] = v139[v141 + 8];
                      v141 += 12;
                    }
                    while ( v142 != v141 );
                    v135 = v32[26].m128i_u32[2];
                    v138 += v142;
                    v144 = &v139[v142];
                  }
                  else
                  {
                    v144 = (char *)v32[26].m128i_i64[0];
                    v143 = 0;
                  }
                }
                v145 = 12 * v135;
                if ( v144 != &v139[v145] )
                  memcpy(v138, v144, v145 - v143);
              }
              v30[26].m128i_i32[2] = v137;
            }
            m128i_i64 = (__int64)v32[33].m128i_i64;
            sub_9EED30((__int64)v30[33].m128i_i64, v32[33].m128i_i64);
          }
          if ( ((*(_WORD *)(v360 & 0xFFFFFFFFFFFFFFFELL) + 509) & 0x1FFu) <= 0x7E )
          {
            v156 = sub_BFB840(v360 & 0xFFFFFFFFFFFFFFFELL);
          }
          else
          {
            sub_1582CA0((__int64)&v379, (_BYTE **)&v364);
            v146 = sub_EEB7E0(v360 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v364, *(double *)a5.m128i_i64);
            m128i_i64 = v146;
            sub_1AAB2D0((__int64)&v357, v146, (__int64)&v379);
            v147 = (void **)v379.m128_u64[0];
            if ( v379.m128_u64[0] )
            {
              v148 = v379.m128_u64[1];
              if ( v379.m128_u64[1] )
              {
                if ( v379.m128_u64[0] < v379.m128_u64[1] || v379.m128_u64[0] > v379.m128_u64[1] + 14848 )
                {
                  v149 = *(_QWORD *)(v379.m128_u64[0] + 528);
                  v150 = v149 + ((unsigned __int64)*(unsigned int *)(v379.m128_u64[0] + 536) << 6);
                  while ( v149 != v150 )
                  {
                    while ( 1 )
                    {
                      v150 -= 64;
                      v151 = *(void **)(v150 + 24);
                      if ( v151 == (void *)(v150 + 40) )
                        break;
                      operator delete(v151);
                      if ( v149 == v150 )
                        goto LABEL_211;
                    }
                  }
LABEL_211:
                  v152 = (void **)v147[66];
                  if ( v152 != v147 + 68 )
                    free(v152);
                  v153 = (void **)v147[52];
                  v154 = v147 + 52;
                  if ( v153 != v147 + 54 )
                    free(v153);
                  v155 = v147 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v154 -= 4;
                      if ( *v154 == v154 + 2 )
                        break;
                      operator delete(*v154);
                      if ( v154 == v155 )
                        goto LABEL_218;
                    }
                  }
                  while ( v154 != v155 );
LABEL_218:
                  m128i_i64 = 928;
                  operator delete(v147, 0x3A0u);
                }
                else
                {
                  v287 = *(unsigned int *)(v379.m128_u64[1] + 14976);
                  *(_DWORD *)(v379.m128_u64[1] + 14976) = v287 + 1;
                  *(_QWORD *)(v148 + 8 * v287 + 14848) = v147;
                }
              }
            }
            v156 = 0;
          }
          v157 = (void **)v364;
          if ( v364 )
          {
            v158 = v365;
            if ( v365 )
            {
              if ( (unsigned __int64)v364 < v365 || (unsigned __int64)v364 > v365 + 14848 )
              {
                v159 = *((void ***)v364 + 66);
                v160 = &v159[8 * (unsigned __int64)*((unsigned int *)v364 + 134)];
                if ( v159 != v160 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v160 -= 8;
                      v161 = (void **)v160[3];
                      if ( v161 == v160 + 5 )
                        break;
                      operator delete(v161);
                      if ( v159 == v160 )
                        goto LABEL_226;
                    }
                  }
                  while ( v159 != v160 );
LABEL_226:
                  v160 = (void **)v157[66];
                }
                if ( v160 != v157 + 68 )
                  free(v160);
                v162 = (void **)v157[52];
                if ( v162 != v157 + 54 )
                  free(v162);
                v163 = v157 + 48;
                v164 = v157 + 8;
                do
                {
                  while ( *v163 != v163 + 2 )
                  {
                    operator delete(*v163);
                    v163 -= 4;
                    if ( v163 == v164 )
                      goto LABEL_234;
                  }
                  v163 -= 4;
                }
                while ( v164 != v163 );
LABEL_234:
                m128i_i64 = 928;
                operator delete(v157, 0x3A0u);
              }
              else
              {
                v270 = *(unsigned int *)(v365 + 14976);
                *(_DWORD *)(v365 + 14976) = v270 + 1;
                *(_QWORD *)(v158 + 8 * v270 + 14848) = v157;
              }
            }
          }
          v165 = (void **)v361;
          if ( v361 )
          {
            v166 = v362;
            if ( v362 )
            {
              if ( (unsigned __int64)v361 < v362 || (unsigned __int64)v361 > v362 + 14848 )
              {
                v167 = *((void ***)v361 + 66);
                v168 = &v167[8 * (unsigned __int64)*((unsigned int *)v361 + 134)];
                if ( v167 != v168 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v168 -= 8;
                      v169 = (void **)v168[3];
                      if ( v169 == v168 + 5 )
                        break;
                      operator delete(v169);
                      if ( v167 == v168 )
                        goto LABEL_241;
                    }
                  }
                  while ( v167 != v168 );
LABEL_241:
                  v168 = (void **)v165[66];
                }
                if ( v168 != v165 + 68 )
                  free(v168);
                v170 = (void **)v165[52];
                v171 = v165 + 52;
                if ( v170 != v165 + 54 )
                  free(v170);
                v172 = v165 + 12;
                do
                {
                  while ( 1 )
                  {
                    v171 -= 4;
                    if ( *v171 == v171 + 2 )
                      break;
                    operator delete(*v171);
                    if ( v171 == v172 )
                      goto LABEL_249;
                  }
                }
                while ( v171 != v172 );
LABEL_249:
                m128i_i64 = 928;
                operator delete(v165, 0x3A0u);
              }
              else
              {
                v271 = *(unsigned int *)(v362 + 14976);
                *(_DWORD *)(v362 + 14976) = v271 + 1;
                *(_QWORD *)(v166 + 8 * v271 + 14848) = v165;
              }
            }
          }
          if ( !v156 )
            goto LABEL_405;
          m128i_i64 = (__int64)&v357;
          sub_1AB25E0(&v379, &v357, v156);
          if ( !v381 )
            goto LABEL_391;
          sub_168B9B0((__int64)&v376, v357, 5739);
          v173 = (unsigned __int8 *)v376;
          if ( !v376 )
          {
            v327 = v377;
            v328 = *(_DWORD *)(v377 + 14976);
            if ( v328 )
            {
              v338 = (unsigned int)(v328 - 1);
              *(_DWORD *)(v377 + 14976) = v338;
              v173 = *(unsigned __int8 **)(v327 + 8 * v338 + 14848);
              v339 = *((unsigned int *)v173 + 134);
              *v173 = 0;
              v340 = *((_QWORD *)v173 + 66);
              *((_DWORD *)v173 + 106) = 0;
              v341 = v340 + (v339 << 6);
              while ( v340 != v341 )
              {
                while ( 1 )
                {
                  v341 -= 64;
                  v342 = *(void **)(v341 + 24);
                  if ( v342 == (void *)(v341 + 40) )
                    break;
                  operator delete(v342);
                  if ( v340 == v341 )
                    goto LABEL_543;
                }
              }
LABEL_543:
              *((_DWORD *)v173 + 134) = 0;
            }
            else
            {
              v173 = (unsigned __int8 *)operator new(0x3A0u);
              *v173 = 0;
              *((_QWORD *)v173 + 12) = v173 + 112;
              *((_QWORD *)v173 + 16) = v173 + 144;
              *((_QWORD *)v173 + 20) = v173 + 176;
              *((_QWORD *)v173 + 24) = v173 + 208;
              *((_QWORD *)v173 + 28) = v173 + 240;
              *((_QWORD *)v173 + 32) = v173 + 272;
              *((_QWORD *)v173 + 36) = v173 + 304;
              *((_QWORD *)v173 + 40) = v173 + 336;
              *((_QWORD *)v173 + 44) = v173 + 368;
              *((_QWORD *)v173 + 48) = v173 + 400;
              *((_QWORD *)v173 + 52) = v173 + 432;
              *((_QWORD *)v173 + 13) = 0;
              v173[112] = 0;
              *((_QWORD *)v173 + 17) = 0;
              v173[144] = 0;
              *((_QWORD *)v173 + 21) = 0;
              v173[176] = 0;
              *((_QWORD *)v173 + 25) = 0;
              v173[208] = 0;
              *((_QWORD *)v173 + 29) = 0;
              v173[240] = 0;
              *((_QWORD *)v173 + 33) = 0;
              v173[272] = 0;
              *((_QWORD *)v173 + 37) = 0;
              v173[304] = 0;
              *((_QWORD *)v173 + 41) = 0;
              v173[336] = 0;
              *((_QWORD *)v173 + 45) = 0;
              v173[368] = 0;
              *((_QWORD *)v173 + 49) = 0;
              v173[400] = 0;
              *((_QWORD *)v173 + 53) = 0x800000000LL;
              *((_QWORD *)v173 + 66) = v173 + 544;
              *((_QWORD *)v173 + 67) = 0x600000000LL;
            }
            v376 = v173;
          }
          v173[*v173 + 1] = 2;
          v174 = v376;
          v175 = *(unsigned __int8 *)v376;
          *(_BYTE *)v376 = v175 + 1;
          v174[v175 + 2] = 1;
          v176 = (unsigned __int8 *)v376;
          if ( !v376 )
          {
            v331 = v377;
            v332 = *(_DWORD *)(v377 + 14976);
            if ( v332 )
            {
              v348 = (unsigned int)(v332 - 1);
              *(_DWORD *)(v377 + 14976) = v348;
              v176 = *(unsigned __int8 **)(v331 + 8 * v348 + 14848);
              v349 = *((unsigned int *)v176 + 134);
              *v176 = 0;
              v350 = *((_QWORD *)v176 + 66);
              *((_DWORD *)v176 + 106) = 0;
              v351 = v350 + (v349 << 6);
              while ( v350 != v351 )
              {
                while ( 1 )
                {
                  v351 -= 64;
                  v352 = *(void **)(v351 + 24);
                  if ( v352 == (void *)(v351 + 40) )
                    break;
                  operator delete(v352);
                  if ( v350 == v351 )
                    goto LABEL_553;
                }
              }
LABEL_553:
              *((_DWORD *)v176 + 134) = 0;
            }
            else
            {
              v176 = (unsigned __int8 *)operator new(0x3A0u);
              *v176 = 0;
              *((_QWORD *)v176 + 12) = v176 + 112;
              *((_QWORD *)v176 + 16) = v176 + 144;
              *((_QWORD *)v176 + 20) = v176 + 176;
              *((_QWORD *)v176 + 24) = v176 + 208;
              *((_QWORD *)v176 + 28) = v176 + 240;
              *((_QWORD *)v176 + 32) = v176 + 272;
              *((_QWORD *)v176 + 36) = v176 + 304;
              *((_QWORD *)v176 + 40) = v176 + 336;
              *((_QWORD *)v176 + 44) = v176 + 368;
              *((_QWORD *)v176 + 48) = v176 + 400;
              *((_QWORD *)v176 + 52) = v176 + 432;
              *((_QWORD *)v176 + 13) = 0;
              v176[112] = 0;
              *((_QWORD *)v176 + 17) = 0;
              v176[144] = 0;
              *((_QWORD *)v176 + 21) = 0;
              v176[176] = 0;
              *((_QWORD *)v176 + 25) = 0;
              v176[208] = 0;
              *((_QWORD *)v176 + 29) = 0;
              v176[240] = 0;
              *((_QWORD *)v176 + 33) = 0;
              v176[272] = 0;
              *((_QWORD *)v176 + 37) = 0;
              v176[304] = 0;
              *((_QWORD *)v176 + 41) = 0;
              v176[336] = 0;
              *((_QWORD *)v176 + 45) = 0;
              v176[368] = 0;
              *((_QWORD *)v176 + 49) = 0;
              v176[400] = 0;
              *((_QWORD *)v176 + 53) = 0x800000000LL;
              *((_QWORD *)v176 + 66) = v176 + 544;
              *((_QWORD *)v176 + 67) = 0x600000000LL;
            }
            v376 = v176;
          }
          v176[*v176 + 1] = 2;
          v177 = v376;
          v178 = *(unsigned __int8 *)v376;
          *(_BYTE *)v376 = v178 + 1;
          v177[v178 + 2] = 0;
          sub_1582CA0((__int64)&v373, (_BYTE **)&v376);
          v179 = (void **)v376;
          if ( v376 )
          {
            v180 = v377;
            if ( v377 )
            {
              if ( (unsigned __int64)v376 < v377 || (unsigned __int64)v376 > v377 + 14848 )
              {
                v181 = *((_QWORD *)v376 + 66);
                v182 = v181 + ((unsigned __int64)*((unsigned int *)v376 + 134) << 6);
                while ( v181 != v182 )
                {
                  while ( 1 )
                  {
                    v182 -= 64;
                    v183 = *(void **)(v182 + 24);
                    if ( v183 == (void *)(v182 + 40) )
                      break;
                    operator delete(v183);
                    if ( v181 == v182 )
                      goto LABEL_261;
                  }
                }
LABEL_261:
                v184 = (void **)v179[66];
                if ( v184 != v179 + 68 )
                  free(v184);
                v185 = (void **)v179[52];
                v186 = v179 + 52;
                if ( v185 != v179 + 54 )
                  free(v185);
                v187 = v179 + 12;
                do
                {
                  while ( 1 )
                  {
                    v186 -= 4;
                    if ( *v186 == v186 + 2 )
                      break;
                    operator delete(*v186);
                    if ( v186 == v187 )
                      goto LABEL_268;
                  }
                }
                while ( v186 != v187 );
LABEL_268:
                operator delete(v179, 0x3A0u);
              }
              else
              {
                v305 = *(unsigned int *)(v377 + 14976);
                *(_DWORD *)(v377 + 14976) = v305 + 1;
                *(_QWORD *)(v180 + 8 * v305 + 14848) = v179;
              }
            }
          }
          sub_1582CA0((__int64)&v376, (_BYTE **)&v373);
          v188 = v380;
          v192 = sub_1AAFF40((__int64)&v357, v380, (__int64)&v376, v189, v190, v191);
          v193 = (void **)v376;
          v194 = v192;
          if ( v376 )
          {
            v195 = v377;
            if ( v377 )
            {
              if ( (unsigned __int64)v376 < v377 || (unsigned __int64)v376 > v377 + 14848 )
              {
                v196 = *((_QWORD *)v376 + 66);
                v197 = v196 + ((unsigned __int64)*((unsigned int *)v376 + 134) << 6);
                while ( v196 != v197 )
                {
                  while ( 1 )
                  {
                    v197 -= 64;
                    v198 = *(void **)(v197 + 24);
                    if ( v198 == (void *)(v197 + 40) )
                      break;
                    operator delete(v198);
                    if ( v196 == v197 )
                      goto LABEL_276;
                  }
                }
LABEL_276:
                v199 = (void **)v193[66];
                if ( v199 != v193 + 68 )
                  free(v199);
                v200 = (void **)v193[52];
                if ( v200 != v193 + 54 )
                  free(v200);
                v201 = v193 + 48;
                v202 = v193 + 8;
                do
                {
                  while ( *v201 != v201 + 2 )
                  {
                    operator delete(*v201);
                    v201 -= 4;
                    if ( v201 == v202 )
                      goto LABEL_283;
                  }
                  v201 -= 4;
                }
                while ( v202 != v201 );
LABEL_283:
                v188 = 928;
                operator delete(v193, 0x3A0u);
              }
              else
              {
                v307 = *(unsigned int *)(v377 + 14976);
                *(_DWORD *)(v377 + 14976) = v307 + 1;
                *(_QWORD *)(v195 + 8 * v307 + 14848) = v193;
              }
            }
          }
          v57 = v360;
          if ( v194 )
            v57 = sub_1AAAFC0(&v357, v188, *(double *)a5.m128i_i64);
          v126 = (void **)v373;
          if ( !v373 )
            return v57;
          v127 = v374;
          if ( !v374 )
            return v57;
          if ( (unsigned __int64)v373 >= v374 && (unsigned __int64)v373 <= v374 + 14848 )
            goto LABEL_490;
          v203 = *((_QWORD *)v373 + 66);
          v204 = v203 + ((unsigned __int64)*((unsigned int *)v373 + 134) << 6);
          while ( v203 != v204 )
          {
            while ( 1 )
            {
              v204 -= 64;
              v205 = *(void **)(v204 + 24);
              if ( v205 == (void *)(v204 + 40) )
                break;
              operator delete(v205);
              if ( v203 == v204 )
                goto LABEL_293;
            }
          }
LABEL_293:
          v206 = (void **)v126[66];
          if ( v206 != v126 + 68 )
            free(v206);
          v207 = (void **)v126[52];
          v208 = v126 + 52;
          if ( v207 != v126 + 54 )
            free(v207);
          v209 = v126 + 12;
          do
          {
            while ( 1 )
            {
              v208 -= 4;
              if ( *v208 == v208 + 2 )
                break;
              operator delete(*v208);
              if ( v208 == v209 )
                goto LABEL_187;
            }
          }
          while ( v208 != v209 );
          goto LABEL_187;
        case 1:
          sub_168B9B0((__int64)&v367, a1, 5736);
          v41 = (unsigned __int8 *)v367;
          if ( v367 )
            goto LABEL_54;
          v294 = v368;
          v295 = *(_DWORD *)(v368 + 14976);
          if ( !v295 )
          {
            v41 = (unsigned __int8 *)operator new(0x3A0u);
            *v41 = 0;
            *((_QWORD *)v41 + 12) = v41 + 112;
            *((_QWORD *)v41 + 16) = v41 + 144;
            *((_QWORD *)v41 + 20) = v41 + 176;
            *((_QWORD *)v41 + 24) = v41 + 208;
            *((_QWORD *)v41 + 28) = v41 + 240;
            *((_QWORD *)v41 + 32) = v41 + 272;
            *((_QWORD *)v41 + 36) = v41 + 304;
            *((_QWORD *)v41 + 40) = v41 + 336;
            *((_QWORD *)v41 + 44) = v41 + 368;
            *((_QWORD *)v41 + 48) = v41 + 400;
            *((_QWORD *)v41 + 52) = v41 + 432;
            *((_QWORD *)v41 + 13) = 0;
            v41[112] = 0;
            *((_QWORD *)v41 + 17) = 0;
            v41[144] = 0;
            *((_QWORD *)v41 + 21) = 0;
            v41[176] = 0;
            *((_QWORD *)v41 + 25) = 0;
            v41[208] = 0;
            *((_QWORD *)v41 + 29) = 0;
            v41[240] = 0;
            *((_QWORD *)v41 + 33) = 0;
            v41[272] = 0;
            *((_QWORD *)v41 + 37) = 0;
            v41[304] = 0;
            *((_QWORD *)v41 + 41) = 0;
            v41[336] = 0;
            *((_QWORD *)v41 + 45) = 0;
            v41[368] = 0;
            *((_QWORD *)v41 + 49) = 0;
            v41[400] = 0;
            *((_QWORD *)v41 + 53) = 0x800000000LL;
            *((_QWORD *)v41 + 66) = v41 + 544;
            *((_QWORD *)v41 + 67) = 0x600000000LL;
            goto LABEL_471;
          }
          v315 = (unsigned int)(v295 - 1);
          *(_DWORD *)(v368 + 14976) = v315;
          v41 = *(unsigned __int8 **)(v294 + 8 * v315 + 14848);
          v316 = *((unsigned int *)v41 + 134);
          *v41 = 0;
          v317 = *((_QWORD *)v41 + 66);
          *((_DWORD *)v41 + 106) = 0;
          v318 = v317 + (v316 << 6);
          while ( v317 != v318 )
          {
            while ( 1 )
            {
              v318 -= 64;
              v319 = *(void **)(v318 + 24);
              if ( v319 == (void *)(v318 + 40) )
                break;
              operator delete(v319);
              if ( v317 == v318 )
                goto LABEL_514;
            }
          }
LABEL_514:
          *((_DWORD *)v41 + 134) = 0;
LABEL_471:
          v367 = v41;
LABEL_54:
          v41[*v41 + 1] = 2;
          v42 = v367;
          v43 = *(unsigned __int8 *)v367;
          *(_BYTE *)v367 = v43 + 1;
          v27 = v367 == nullptr;
          v42[v43 + 2] = 0;
          v370 = nullptr;
          v372 = v369;
          v44 = v368;
          v371 = v368;
          if ( !v27 )
          {
            v45 = *(_DWORD *)(v368 + 14976);
            if ( v45 )
            {
              v277 = (unsigned int)(v45 - 1);
              *(_DWORD *)(v368 + 14976) = v277;
              v46 = *(__m128i **)(v44 + 8 * v277 + 14848);
              v278 = v46[33].m128i_u32[2];
              v46->m128i_i8[0] = 0;
              v279 = v46[33].m128i_i64[0];
              v46[26].m128i_i32[2] = 0;
              v280 = v279 + (v278 << 6);
              while ( v279 != v280 )
              {
                while ( 1 )
                {
                  v280 -= 64;
                  v281 = *(void **)(v280 + 24);
                  if ( v281 == (void *)(v280 + 40) )
                    break;
                  operator delete(v281);
                  if ( v279 == v280 )
                    goto LABEL_448;
                }
              }
LABEL_448:
              v46[33].m128i_i32[2] = 0;
              v47 = v46 + 6;
            }
            else
            {
              v46 = (__m128i *)operator new(0x3A0u);
              v46->m128i_i8[0] = 0;
              v47 = v46 + 6;
              v46[6].m128i_i64[0] = (__int64)v46[7].m128i_i64;
              v46[8].m128i_i64[0] = (__int64)v46[9].m128i_i64;
              v46[10].m128i_i64[0] = (__int64)v46[11].m128i_i64;
              v46[12].m128i_i64[0] = (__int64)v46[13].m128i_i64;
              v46[14].m128i_i64[0] = (__int64)v46[15].m128i_i64;
              v46[16].m128i_i64[0] = (__int64)v46[17].m128i_i64;
              v46[18].m128i_i64[0] = (__int64)v46[19].m128i_i64;
              v46[20].m128i_i64[0] = (__int64)v46[21].m128i_i64;
              v46[22].m128i_i64[0] = (__int64)v46[23].m128i_i64;
              v46[24].m128i_i64[0] = (__int64)v46[25].m128i_i64;
              v46[26].m128i_i64[0] = (__int64)v46[27].m128i_i64;
              v46[6].m128i_i64[1] = 0;
              v46[7].m128i_i8[0] = 0;
              v46[8].m128i_i64[1] = 0;
              v46[9].m128i_i8[0] = 0;
              v46[10].m128i_i64[1] = 0;
              v46[11].m128i_i8[0] = 0;
              v46[12].m128i_i64[1] = 0;
              v46[13].m128i_i8[0] = 0;
              v46[14].m128i_i64[1] = 0;
              v46[15].m128i_i8[0] = 0;
              v46[16].m128i_i64[1] = 0;
              v46[17].m128i_i8[0] = 0;
              v46[18].m128i_i64[1] = 0;
              v46[19].m128i_i8[0] = 0;
              v46[20].m128i_i64[1] = 0;
              v46[21].m128i_i8[0] = 0;
              v46[22].m128i_i64[1] = 0;
              v46[23].m128i_i8[0] = 0;
              v46[24].m128i_i64[1] = 0;
              v46[25].m128i_i8[0] = 0;
              v46[26].m128i_i64[1] = 0x800000000LL;
              v46[33].m128i_i64[0] = (__int64)v46[34].m128i_i64;
              v46[33].m128i_i64[1] = 0x600000000LL;
            }
            v48 = (const __m128i *)v367;
            v370 = v46;
            v49 = (__m128i *)((char *)v367 + 16);
            v46->m128i_i8[0] = *(_BYTE *)v367;
            v46->m128i_i8[1] = v48->m128i_i8[1];
            v46->m128i_i8[2] = v48->m128i_i8[2];
            v46->m128i_i8[3] = v48->m128i_i8[3];
            v46->m128i_i8[4] = v48->m128i_i8[4];
            v46->m128i_i8[5] = v48->m128i_i8[5];
            v46->m128i_i8[6] = v48->m128i_i8[6];
            v46->m128i_i8[7] = v48->m128i_i8[7];
            v46->m128i_i8[8] = v48->m128i_i8[8];
            v46->m128i_i8[9] = v48->m128i_i8[9];
            v46->m128i_i8[10] = v48->m128i_i8[10];
            if ( v49 < &v46[2] && &v46[1] < &v48[2] )
            {
              v46[1].m128i_i64[0] = v48[1].m128i_i64[0];
              v46[1].m128i_i64[1] = v48[1].m128i_i64[1];
              v46[2].m128i_i64[0] = v48[2].m128i_i64[0];
              v46[2].m128i_i64[1] = v48[2].m128i_i64[1];
              v46[3].m128i_i64[0] = v48[3].m128i_i64[0];
              v46[3].m128i_i64[1] = v48[3].m128i_i64[1];
              v46[4].m128i_i64[0] = v48[4].m128i_i64[0];
              v46[4].m128i_i64[1] = v48[4].m128i_i64[1];
              v46[5].m128i_i64[0] = v48[5].m128i_i64[0];
              v46[5].m128i_i64[1] = v48[5].m128i_i64[1];
            }
            else
            {
              v46[1] = _mm_loadu_si128(v48 + 1);
              v46[2] = _mm_loadu_si128(v48 + 2);
              v46[3] = _mm_loadu_si128(v48 + 3);
              a5 = _mm_loadu_si128(v48 + 4);
              v46[4] = a5;
              v46[5] = _mm_loadu_si128(v48 + 5);
            }
            v50 = v48 + 6;
            do
            {
              if ( v50 != v47 )
              {
                v52 = (_BYTE *)v47->m128i_i64[0];
                v53 = v50->m128i_u64[1];
                if ( (__m128i *)v47->m128i_i64[0] == &v47[1] )
                  v54 = 15;
                else
                  v54 = v47[1].m128i_u64[0];
                if ( v53 > v54 )
                {
                  if ( (v53 & 0x8000000000000000LL) != 0LL )
                    goto LABEL_554;
                  v55 = 2 * v54;
                  if ( v53 < v55 )
                  {
                    v56 = v55 + 1;
                    if ( v55 < 0 )
                    {
                      v56 = 0x8000000000000000LL;
                      v55 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                  }
                  else
                  {
                    v56 = v53 + 1;
                    v55 = v50->m128i_i64[1];
                  }
                  v52 = (_BYTE *)operator new(v56);
                  if ( (__m128i *)v47->m128i_i64[0] != &v47[1] )
                  {
                    v356 = v52;
                    operator delete((void *)v47->m128i_i64[0]);
                    v52 = v356;
                  }
                  v47->m128i_i64[0] = (__int64)v52;
                  v47[1].m128i_i64[0] = v55;
                }
                if ( v53 )
                {
                  v51 = (_BYTE *)v50->m128i_i64[0];
                  if ( v53 == 1 )
                    *v52 = *v51;
                  else
                    memcpy(v52, v51, v53);
                  v52 = (_BYTE *)v47->m128i_i64[0];
                }
                v47->m128i_i64[1] = v53;
                v52[v53] = 0;
              }
              v50 += 2;
              v47 += 2;
            }
            while ( v50 != &v48[26] );
            if ( &v46[26] != v50 )
            {
              v58 = v48[26].m128i_u32[2];
              v59 = v46[26].m128i_u32[2];
              v60 = v48[26].m128i_i32[2];
              if ( v58 <= v59 )
              {
                if ( v48[26].m128i_i32[2] )
                {
                  v299 = v46[26].m128i_i64[0];
                  v300 = v48[26].m128i_i64[0];
                  v301 = 0;
                  do
                  {
                    *(_QWORD *)(v299 + v301) = *(_QWORD *)(v300 + v301);
                    *(_BYTE *)(v299 + v301 + 8) = *(_BYTE *)(v300 + v301 + 8);
                    v301 += 12;
                  }
                  while ( 12 * v58 != v301 );
                }
              }
              else
              {
                if ( v58 > v46[26].m128i_u32[3] )
                {
                  v46[26].m128i_i32[2] = 0;
                  sub_2237220(&v46[26], &v46[27], v58, 12);
                  v62 = (char *)v48[26].m128i_i64[0];
                  v61 = (_BYTE *)v46[26].m128i_i64[0];
                  v66 = 0;
                  v58 = v48[26].m128i_u32[2];
                  v67 = v62;
                }
                else
                {
                  v61 = (_BYTE *)v46[26].m128i_i64[0];
                  v62 = (char *)v48[26].m128i_i64[0];
                  if ( v46[26].m128i_i32[2] )
                  {
                    v63 = 3 * v59;
                    v64 = 0;
                    v65 = 4 * v63;
                    v66 = v65;
                    do
                    {
                      *(_QWORD *)&v61[v64] = *(_QWORD *)&v62[v64];
                      v61[v64 + 8] = v62[v64 + 8];
                      v64 += 12;
                    }
                    while ( v65 != v64 );
                    v58 = v48[26].m128i_u32[2];
                    v61 += v65;
                    v67 = &v62[v65];
                  }
                  else
                  {
                    v67 = (char *)v48[26].m128i_i64[0];
                    v66 = 0;
                  }
                }
                v68 = 12 * v58;
                if ( v67 != &v62[v68] )
                  memcpy(v61, v67, v68 - v66);
              }
              v46[26].m128i_i32[2] = v60;
            }
            m128i_i64 = (__int64)v48[33].m128i_i64;
            sub_9EED30((__int64)v46[33].m128i_i64, v48[33].m128i_i64);
          }
          if ( ((*(_WORD *)(v360 & 0xFFFFFFFFFFFFFFFELL) + 509) & 0x1FFu) <= 0x7E )
          {
            v79 = sub_BFB840(v360 & 0xFFFFFFFFFFFFFFFELL);
          }
          else
          {
            sub_1582CA0((__int64)&v379, (_BYTE **)&v370);
            v69 = sub_EEB7E0(v360 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v370, *(double *)a5.m128i_i64);
            m128i_i64 = v69;
            sub_1AAB2D0((__int64)&v357, v69, (__int64)&v379);
            v70 = (void **)v379.m128_u64[0];
            if ( v379.m128_u64[0] )
            {
              v71 = v379.m128_u64[1];
              if ( v379.m128_u64[1] )
              {
                if ( v379.m128_u64[0] < v379.m128_u64[1] || v379.m128_u64[0] > v379.m128_u64[1] + 14848 )
                {
                  v72 = *(_QWORD *)(v379.m128_u64[0] + 528);
                  v73 = v72 + ((unsigned __int64)*(unsigned int *)(v379.m128_u64[0] + 536) << 6);
                  while ( v72 != v73 )
                  {
                    while ( 1 )
                    {
                      v73 -= 64;
                      v74 = *(void **)(v73 + 24);
                      if ( v74 == (void *)(v73 + 40) )
                        break;
                      operator delete(v74);
                      if ( v72 == v73 )
                        goto LABEL_98;
                    }
                  }
LABEL_98:
                  v75 = (void **)v70[66];
                  if ( v75 != v70 + 68 )
                    free(v75);
                  v76 = (void **)v70[52];
                  if ( v76 != v70 + 54 )
                    free(v76);
                  v77 = v70 + 48;
                  v78 = v70 + 8;
                  do
                  {
                    while ( *v77 != v77 + 2 )
                    {
                      operator delete(*v77);
                      v77 -= 4;
                      if ( v78 == v77 )
                        goto LABEL_105;
                    }
                    v77 -= 4;
                  }
                  while ( v78 != v77 );
LABEL_105:
                  m128i_i64 = 928;
                  operator delete(v70, 0x3A0u);
                }
                else
                {
                  v288 = *(unsigned int *)(v379.m128_u64[1] + 14976);
                  *(_DWORD *)(v379.m128_u64[1] + 14976) = v288 + 1;
                  *(_QWORD *)(v71 + 8 * v288 + 14848) = v70;
                }
              }
            }
            v79 = 0;
          }
          v80 = (void **)v370;
          if ( v370 )
          {
            v81 = v371;
            if ( v371 )
            {
              if ( (unsigned __int64)v370 < v371 || (unsigned __int64)v370 > v371 + 14848 )
              {
                v82 = *((void ***)v370 + 66);
                v83 = &v82[8 * (unsigned __int64)*((unsigned int *)v370 + 134)];
                if ( v82 != v83 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v83 -= 8;
                      v84 = (void **)v83[3];
                      if ( v84 == v83 + 5 )
                        break;
                      operator delete(v84);
                      if ( v82 == v83 )
                        goto LABEL_113;
                    }
                  }
                  while ( v82 != v83 );
LABEL_113:
                  v83 = (void **)v80[66];
                }
                if ( v83 != v80 + 68 )
                  free(v83);
                v85 = (void **)v80[52];
                if ( v85 != v80 + 54 )
                  free(v85);
                v86 = v80 + 48;
                v87 = v80 + 8;
                do
                {
                  while ( *v86 != v86 + 2 )
                  {
                    operator delete(*v86);
                    v86 -= 4;
                    if ( v87 == v86 )
                      goto LABEL_121;
                  }
                  v86 -= 4;
                }
                while ( v86 != v87 );
LABEL_121:
                m128i_i64 = 928;
                operator delete(v80, 0x3A0u);
              }
              else
              {
                v268 = *(unsigned int *)(v371 + 14976);
                *(_DWORD *)(v371 + 14976) = v268 + 1;
                *(_QWORD *)(v81 + 8 * v268 + 14848) = v80;
              }
            }
          }
          v88 = (void **)v367;
          if ( v367 )
          {
            v89 = v368;
            if ( v368 )
            {
              if ( (unsigned __int64)v367 < v368 || (unsigned __int64)v367 > v368 + 14848 )
              {
                v90 = *((void ***)v367 + 66);
                v91 = &v90[8 * (unsigned __int64)*((unsigned int *)v367 + 134)];
                if ( v90 != v91 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v91 -= 8;
                      v92 = (void **)v91[3];
                      if ( v92 == v91 + 5 )
                        break;
                      operator delete(v92);
                      if ( v90 == v91 )
                        goto LABEL_128;
                    }
                  }
                  while ( v90 != v91 );
LABEL_128:
                  v91 = (void **)v88[66];
                }
                if ( v91 != v88 + 68 )
                  free(v91);
                v93 = (void **)v88[52];
                if ( v93 != v88 + 54 )
                  free(v93);
                v94 = v88 + 48;
                v95 = v88 + 8;
                do
                {
                  while ( *v94 != v94 + 2 )
                  {
                    operator delete(*v94);
                    v94 -= 4;
                    if ( v95 == v94 )
                      goto LABEL_136;
                  }
                  v94 -= 4;
                }
                while ( v95 != v94 );
LABEL_136:
                m128i_i64 = 928;
                operator delete(v88, 0x3A0u);
              }
              else
              {
                v267 = *(unsigned int *)(v368 + 14976);
                *(_DWORD *)(v368 + 14976) = v267 + 1;
                *(_QWORD *)(v89 + 8 * v267 + 14848) = v88;
              }
            }
          }
          if ( v79 )
          {
            m128i_i64 = (__int64)&v357;
            sub_1AB25E0(&v379, &v357, v79);
            if ( v381 )
            {
              sub_168B9B0((__int64)&v376, v357, 5739);
              v96 = (unsigned __int8 *)v376;
              if ( !v376 )
              {
                v325 = v377;
                v326 = *(_DWORD *)(v377 + 14976);
                if ( v326 )
                {
                  v333 = (unsigned int)(v326 - 1);
                  *(_DWORD *)(v377 + 14976) = v333;
                  v96 = *(unsigned __int8 **)(v325 + 8 * v333 + 14848);
                  v334 = *((unsigned int *)v96 + 134);
                  *v96 = 0;
                  v335 = *((_QWORD *)v96 + 66);
                  *((_DWORD *)v96 + 106) = 0;
                  v336 = v335 + (v334 << 6);
                  while ( v335 != v336 )
                  {
                    while ( 1 )
                    {
                      v336 -= 64;
                      v337 = *(void **)(v336 + 24);
                      if ( v337 == (void *)(v336 + 40) )
                        break;
                      operator delete(v337);
                      if ( v335 == v336 )
                        goto LABEL_538;
                    }
                  }
LABEL_538:
                  *((_DWORD *)v96 + 134) = 0;
                }
                else
                {
                  v96 = (unsigned __int8 *)operator new(0x3A0u);
                  *v96 = 0;
                  *((_QWORD *)v96 + 12) = v96 + 112;
                  *((_QWORD *)v96 + 16) = v96 + 144;
                  *((_QWORD *)v96 + 20) = v96 + 176;
                  *((_QWORD *)v96 + 24) = v96 + 208;
                  *((_QWORD *)v96 + 28) = v96 + 240;
                  *((_QWORD *)v96 + 32) = v96 + 272;
                  *((_QWORD *)v96 + 36) = v96 + 304;
                  *((_QWORD *)v96 + 40) = v96 + 336;
                  *((_QWORD *)v96 + 44) = v96 + 368;
                  *((_QWORD *)v96 + 48) = v96 + 400;
                  *((_QWORD *)v96 + 52) = v96 + 432;
                  *((_QWORD *)v96 + 13) = 0;
                  v96[112] = 0;
                  *((_QWORD *)v96 + 17) = 0;
                  v96[144] = 0;
                  *((_QWORD *)v96 + 21) = 0;
                  v96[176] = 0;
                  *((_QWORD *)v96 + 25) = 0;
                  v96[208] = 0;
                  *((_QWORD *)v96 + 29) = 0;
                  v96[240] = 0;
                  *((_QWORD *)v96 + 33) = 0;
                  v96[272] = 0;
                  *((_QWORD *)v96 + 37) = 0;
                  v96[304] = 0;
                  *((_QWORD *)v96 + 41) = 0;
                  v96[336] = 0;
                  *((_QWORD *)v96 + 45) = 0;
                  v96[368] = 0;
                  *((_QWORD *)v96 + 49) = 0;
                  v96[400] = 0;
                  *((_QWORD *)v96 + 53) = 0x800000000LL;
                  *((_QWORD *)v96 + 66) = v96 + 544;
                  *((_QWORD *)v96 + 67) = 0x600000000LL;
                }
                v376 = v96;
              }
              v96[*v96 + 1] = 2;
              v97 = v376;
              v98 = *(unsigned __int8 *)v376;
              *(_BYTE *)v376 = v98 + 1;
              v97[v98 + 2] = 1;
              v99 = (unsigned __int8 *)v376;
              if ( !v376 )
              {
                v329 = v377;
                v330 = *(_DWORD *)(v377 + 14976);
                if ( v330 )
                {
                  v343 = (unsigned int)(v330 - 1);
                  *(_DWORD *)(v377 + 14976) = v343;
                  v99 = *(unsigned __int8 **)(v329 + 8 * v343 + 14848);
                  v344 = *((unsigned int *)v99 + 134);
                  *v99 = 0;
                  v345 = *((_QWORD *)v99 + 66);
                  *((_DWORD *)v99 + 106) = 0;
                  v346 = v345 + (v344 << 6);
                  while ( v345 != v346 )
                  {
                    while ( 1 )
                    {
                      v346 -= 64;
                      v347 = *(void **)(v346 + 24);
                      if ( v347 == (void *)(v346 + 40) )
                        break;
                      operator delete(v347);
                      if ( v345 == v346 )
                        goto LABEL_548;
                    }
                  }
LABEL_548:
                  *((_DWORD *)v99 + 134) = 0;
                }
                else
                {
                  v99 = (unsigned __int8 *)operator new(0x3A0u);
                  *v99 = 0;
                  *((_QWORD *)v99 + 12) = v99 + 112;
                  *((_QWORD *)v99 + 16) = v99 + 144;
                  *((_QWORD *)v99 + 20) = v99 + 176;
                  *((_QWORD *)v99 + 24) = v99 + 208;
                  *((_QWORD *)v99 + 28) = v99 + 240;
                  *((_QWORD *)v99 + 32) = v99 + 272;
                  *((_QWORD *)v99 + 36) = v99 + 304;
                  *((_QWORD *)v99 + 40) = v99 + 336;
                  *((_QWORD *)v99 + 44) = v99 + 368;
                  *((_QWORD *)v99 + 48) = v99 + 400;
                  *((_QWORD *)v99 + 52) = v99 + 432;
                  *((_QWORD *)v99 + 13) = 0;
                  v99[112] = 0;
                  *((_QWORD *)v99 + 17) = 0;
                  v99[144] = 0;
                  *((_QWORD *)v99 + 21) = 0;
                  v99[176] = 0;
                  *((_QWORD *)v99 + 25) = 0;
                  v99[208] = 0;
                  *((_QWORD *)v99 + 29) = 0;
                  v99[240] = 0;
                  *((_QWORD *)v99 + 33) = 0;
                  v99[272] = 0;
                  *((_QWORD *)v99 + 37) = 0;
                  v99[304] = 0;
                  *((_QWORD *)v99 + 41) = 0;
                  v99[336] = 0;
                  *((_QWORD *)v99 + 45) = 0;
                  v99[368] = 0;
                  *((_QWORD *)v99 + 49) = 0;
                  v99[400] = 0;
                  *((_QWORD *)v99 + 53) = 0x800000000LL;
                  *((_QWORD *)v99 + 66) = v99 + 544;
                  *((_QWORD *)v99 + 67) = 0x600000000LL;
                }
                v376 = v99;
              }
              v99[*v99 + 1] = 2;
              v100 = v376;
              v101 = *(unsigned __int8 *)v376;
              *(_BYTE *)v376 = v101 + 1;
              v100[v101 + 2] = 0;
              sub_1582CA0((__int64)&v373, (_BYTE **)&v376);
              v102 = (void **)v376;
              if ( v376 )
              {
                v103 = v377;
                if ( v377 )
                {
                  if ( (unsigned __int64)v376 < v377 || (unsigned __int64)v376 > v377 + 14848 )
                  {
                    v104 = *((_QWORD *)v376 + 66);
                    v105 = v104 + ((unsigned __int64)*((unsigned int *)v376 + 134) << 6);
                    while ( v104 != v105 )
                    {
                      while ( 1 )
                      {
                        v105 -= 64;
                        v106 = *(void **)(v105 + 24);
                        if ( v106 == (void *)(v105 + 40) )
                          break;
                        operator delete(v106);
                        if ( v104 == v105 )
                          goto LABEL_148;
                      }
                    }
LABEL_148:
                    v107 = (void **)v102[66];
                    if ( v107 != v102 + 68 )
                      free(v107);
                    v108 = (void **)v102[52];
                    if ( v108 != v102 + 54 )
                      free(v108);
                    v109 = v102 + 48;
                    v110 = v102 + 8;
                    do
                    {
                      while ( *v109 != v109 + 2 )
                      {
                        operator delete(*v109);
                        v109 -= 4;
                        if ( v110 == v109 )
                          goto LABEL_155;
                      }
                      v109 -= 4;
                    }
                    while ( v110 != v109 );
LABEL_155:
                    operator delete(v102, 0x3A0u);
                  }
                  else
                  {
                    v308 = *(unsigned int *)(v377 + 14976);
                    *(_DWORD *)(v377 + 14976) = v308 + 1;
                    *(_QWORD *)(v103 + 8 * v308 + 14848) = v102;
                  }
                }
              }
              sub_1582CA0((__int64)&v376, (_BYTE **)&v373);
              v111 = v380;
              v115 = sub_1AB1B90((__int64)&v357, v380, (__int64)&v376, v112, v113, v114);
              v116 = (void **)v376;
              v117 = v115;
              if ( v376 )
              {
                v118 = v377;
                if ( v377 )
                {
                  if ( (unsigned __int64)v376 < v377 || (unsigned __int64)v376 > v377 + 14848 )
                  {
                    v119 = *((_QWORD *)v376 + 66);
                    v120 = v119 + ((unsigned __int64)*((unsigned int *)v376 + 134) << 6);
                    while ( v119 != v120 )
                    {
                      while ( 1 )
                      {
                        v120 -= 64;
                        v121 = *(void **)(v120 + 24);
                        if ( v121 == (void *)(v120 + 40) )
                          break;
                        operator delete(v121);
                        if ( v119 == v120 )
                          goto LABEL_163;
                      }
                    }
LABEL_163:
                    v122 = (void **)v116[66];
                    if ( v122 != v116 + 68 )
                      free(v122);
                    v123 = (void **)v116[52];
                    if ( v123 != v116 + 54 )
                      free(v123);
                    v124 = v116 + 48;
                    v125 = v116 + 8;
                    do
                    {
                      while ( *v124 != v124 + 2 )
                      {
                        operator delete(*v124);
                        v124 -= 4;
                        if ( v124 == v125 )
                          goto LABEL_170;
                      }
                      v124 -= 4;
                    }
                    while ( v124 != v125 );
LABEL_170:
                    v111 = 928;
                    operator delete(v116, 0x3A0u);
                  }
                  else
                  {
                    v309 = *(unsigned int *)(v377 + 14976);
                    *(_DWORD *)(v377 + 14976) = v309 + 1;
                    *(_QWORD *)(v118 + 8 * v309 + 14848) = v116;
                  }
                }
              }
              v57 = v360;
              if ( v117 )
                v57 = sub_1AAAFC0(&v357, v111, *(double *)a5.m128i_i64);
              v126 = (void **)v373;
              if ( v373 )
              {
                v127 = v374;
                if ( v374 )
                {
                  if ( (unsigned __int64)v373 < v374 || (unsigned __int64)v373 > v374 + 14848 )
                  {
                    v128 = *((_QWORD *)v373 + 66);
                    v129 = v128 + ((unsigned __int64)*((unsigned int *)v373 + 134) << 6);
                    while ( v128 != v129 )
                    {
                      while ( 1 )
                      {
                        v129 -= 64;
                        v130 = *(void **)(v129 + 24);
                        if ( v130 == (void *)(v129 + 40) )
                          break;
                        operator delete(v130);
                        if ( v128 == v129 )
                          goto LABEL_180;
                      }
                    }
LABEL_180:
                    v131 = (void **)v126[66];
                    if ( v131 != v126 + 68 )
                      free(v131);
                    v132 = (void **)v126[52];
                    if ( v132 != v126 + 54 )
                      free(v132);
                    v133 = v126 + 48;
                    v134 = v126 + 8;
                    do
                    {
                      while ( *v133 != v133 + 2 )
                      {
                        operator delete(*v133);
                        v133 -= 4;
                        if ( v134 == v133 )
                          goto LABEL_187;
                      }
                      v133 -= 4;
                    }
                    while ( v133 != v134 );
LABEL_187:
                    operator delete(v126, 0x3A0u);
                  }
                  else
                  {
LABEL_490:
                    v306 = *(unsigned int *)(v127 + 14976);
                    *(_DWORD *)(v127 + 14976) = v306 + 1;
                    *(_QWORD *)(v127 + 8 * v306 + 14848) = v126;
                  }
                }
              }
              return v57;
            }
LABEL_391:
            v57 = v360;
            if ( v360 > 1 )
            {
              v57 = 1;
              if ( (*(_BYTE *)(*(_QWORD *)(sub_168B6C0(v357) + 2320) + 20LL) & 4) != 0 )
              {
                v248 = v357;
                v249 = v360 & 0xFFFFFFFFFFFFFFFELL;
                if ( ((*(_WORD *)(v360 & 0xFFFFFFFFFFFFFFFELL) + 509) & 0x1FFu) <= 0x7E )
                {
                  v253 = *(_QWORD *)(v249 + 8);
                  v250 = &v376;
                  v376 = (void *)(v360 & 0xFFFFFFFFFFFFFFFELL);
                  v251 = 1;
                  goto LABEL_395;
                }
                goto LABEL_394;
              }
            }
          }
          else
          {
LABEL_405:
            v57 = v360;
            if ( v360 > 1 )
            {
              v57 = 1;
              if ( (*(_BYTE *)(*(_QWORD *)(sub_168B6C0(v357) + 2320) + 20LL) & 4) != 0 )
              {
                v248 = v357;
                v249 = v360 & 0xFFFFFFFFFFFFFFFELL;
                if ( ((*(_WORD *)(v360 & 0xFFFFFFFFFFFFFFFELL) + 509) & 0x1FFu) <= 0x7E )
                {
                  v253 = *(_QWORD *)(v249 + 8);
                  v250 = (void **)&v379;
                  v379.m128_u64[0] = v360 & 0xFFFFFFFFFFFFFFFELL;
                  v251 = 1;
                  goto LABEL_395;
                }
LABEL_394:
                v250 = nullptr;
                v251 = 0;
                v252 = sub_168B6C0(v248);
                v248 = v357;
                v253 = *(_QWORD *)(v252 + 19072);
                v249 = v360 & 0xFFFFFFFFFFFFFFFELL;
LABEL_395:
                v254 = sub_EEC140(v249);
                v255 = sub_EEB7E0(v249, m128i_i64, *(double *)a5.m128i_i64);
                v256 = (_QWORD *)sub_168B6C0(v248);
                v257 = v250;
                v258 = v251;
                v259 = v254;
                return sub_C09540(v256, v253, v255, v259, v257, v258);
              }
            }
          }
          return v57;
        case 2:
        case 4:
          sub_168B9B0((__int64)&v373, a1, 5736);
          v8 = (unsigned __int8 *)v373;
          if ( v373 )
            goto LABEL_6;
          v290 = v374;
          v291 = *(_DWORD *)(v374 + 14976);
          if ( !v291 )
          {
            v8 = (unsigned __int8 *)operator new(0x3A0u);
            *v8 = 0;
            *((_QWORD *)v8 + 12) = v8 + 112;
            *((_QWORD *)v8 + 16) = v8 + 144;
            *((_QWORD *)v8 + 20) = v8 + 176;
            *((_QWORD *)v8 + 24) = v8 + 208;
            *((_QWORD *)v8 + 28) = v8 + 240;
            *((_QWORD *)v8 + 32) = v8 + 272;
            *((_QWORD *)v8 + 36) = v8 + 304;
            *((_QWORD *)v8 + 40) = v8 + 336;
            *((_QWORD *)v8 + 44) = v8 + 368;
            *((_QWORD *)v8 + 48) = v8 + 400;
            *((_QWORD *)v8 + 52) = v8 + 432;
            *((_QWORD *)v8 + 13) = 0;
            v8[112] = 0;
            *((_QWORD *)v8 + 17) = 0;
            v8[144] = 0;
            *((_QWORD *)v8 + 21) = 0;
            v8[176] = 0;
            *((_QWORD *)v8 + 25) = 0;
            v8[208] = 0;
            *((_QWORD *)v8 + 29) = 0;
            v8[240] = 0;
            *((_QWORD *)v8 + 33) = 0;
            v8[272] = 0;
            *((_QWORD *)v8 + 37) = 0;
            v8[304] = 0;
            *((_QWORD *)v8 + 41) = 0;
            v8[336] = 0;
            *((_QWORD *)v8 + 45) = 0;
            v8[368] = 0;
            *((_QWORD *)v8 + 49) = 0;
            v8[400] = 0;
            *((_QWORD *)v8 + 53) = 0x800000000LL;
            *((_QWORD *)v8 + 66) = v8 + 544;
            *((_QWORD *)v8 + 67) = 0x600000000LL;
            goto LABEL_465;
          }
          v320 = (unsigned int)(v291 - 1);
          *(_DWORD *)(v374 + 14976) = v320;
          v8 = *(unsigned __int8 **)(v290 + 8 * v320 + 14848);
          v321 = *((unsigned int *)v8 + 134);
          *v8 = 0;
          v322 = *((_QWORD *)v8 + 66);
          *((_DWORD *)v8 + 106) = 0;
          v323 = v322 + (v321 << 6);
          while ( v322 != v323 )
          {
            while ( 1 )
            {
              v323 -= 64;
              v324 = *(void **)(v323 + 24);
              if ( v324 == (void *)(v323 + 40) )
                break;
              operator delete(v324);
              if ( v322 == v323 )
                goto LABEL_519;
            }
          }
LABEL_519:
          *((_DWORD *)v8 + 134) = 0;
LABEL_465:
          v373 = v8;
LABEL_6:
          v8[*v8 + 1] = 2;
          v9 = v373;
          v10 = *(unsigned __int8 *)v373;
          *(_BYTE *)v373 = v10 + 1;
          v9[v10 + 2] = 1;
          v376 = nullptr;
          v378 = v375;
          v11 = v374;
          v377 = v374;
          if ( v373 )
          {
            v12 = *(_DWORD *)(v374 + 14976);
            if ( v12 )
            {
              v272 = (unsigned int)(v12 - 1);
              *(_DWORD *)(v374 + 14976) = v272;
              v13 = *(__m128i **)(v11 + 8 * v272 + 14848);
              v273 = v13[33].m128i_u32[2];
              v13->m128i_i8[0] = 0;
              v274 = v13[33].m128i_i64[0];
              v13[26].m128i_i32[2] = 0;
              v275 = v274 + (v273 << 6);
              while ( v274 != v275 )
              {
                while ( 1 )
                {
                  v275 -= 64;
                  v276 = *(void **)(v275 + 24);
                  if ( v276 == (void *)(v275 + 40) )
                    break;
                  operator delete(v276);
                  if ( v274 == v275 )
                    goto LABEL_443;
                }
              }
LABEL_443:
              v13[33].m128i_i32[2] = 0;
              v14 = v13 + 6;
            }
            else
            {
              v13 = (__m128i *)operator new(0x3A0u);
              v13->m128i_i8[0] = 0;
              v14 = v13 + 6;
              v13[6].m128i_i64[0] = (__int64)v13[7].m128i_i64;
              v13[8].m128i_i64[0] = (__int64)v13[9].m128i_i64;
              v13[10].m128i_i64[0] = (__int64)v13[11].m128i_i64;
              v13[12].m128i_i64[0] = (__int64)v13[13].m128i_i64;
              v13[14].m128i_i64[0] = (__int64)v13[15].m128i_i64;
              v13[16].m128i_i64[0] = (__int64)v13[17].m128i_i64;
              v13[18].m128i_i64[0] = (__int64)v13[19].m128i_i64;
              v13[20].m128i_i64[0] = (__int64)v13[21].m128i_i64;
              v13[22].m128i_i64[0] = (__int64)v13[23].m128i_i64;
              v13[24].m128i_i64[0] = (__int64)v13[25].m128i_i64;
              v13[26].m128i_i64[0] = (__int64)v13[27].m128i_i64;
              v13[6].m128i_i64[1] = 0;
              v13[7].m128i_i8[0] = 0;
              v13[8].m128i_i64[1] = 0;
              v13[9].m128i_i8[0] = 0;
              v13[10].m128i_i64[1] = 0;
              v13[11].m128i_i8[0] = 0;
              v13[12].m128i_i64[1] = 0;
              v13[13].m128i_i8[0] = 0;
              v13[14].m128i_i64[1] = 0;
              v13[15].m128i_i8[0] = 0;
              v13[16].m128i_i64[1] = 0;
              v13[17].m128i_i8[0] = 0;
              v13[18].m128i_i64[1] = 0;
              v13[19].m128i_i8[0] = 0;
              v13[20].m128i_i64[1] = 0;
              v13[21].m128i_i8[0] = 0;
              v13[22].m128i_i64[1] = 0;
              v13[23].m128i_i8[0] = 0;
              v13[24].m128i_i64[1] = 0;
              v13[25].m128i_i8[0] = 0;
              v13[26].m128i_i64[1] = 0x800000000LL;
              v13[33].m128i_i64[0] = (__int64)v13[34].m128i_i64;
              v13[33].m128i_i64[1] = 0x600000000LL;
            }
            v15 = (const __m128i *)v373;
            v376 = v13;
            v16 = (__m128i *)((char *)v373 + 16);
            v13->m128i_i8[0] = *(_BYTE *)v373;
            v13->m128i_i8[1] = v15->m128i_i8[1];
            v13->m128i_i8[2] = v15->m128i_i8[2];
            v13->m128i_i8[3] = v15->m128i_i8[3];
            v13->m128i_i8[4] = v15->m128i_i8[4];
            v13->m128i_i8[5] = v15->m128i_i8[5];
            v13->m128i_i8[6] = v15->m128i_i8[6];
            v13->m128i_i8[7] = v15->m128i_i8[7];
            v13->m128i_i8[8] = v15->m128i_i8[8];
            v13->m128i_i8[9] = v15->m128i_i8[9];
            v13->m128i_i8[10] = v15->m128i_i8[10];
            if ( v16 < &v13[2] && &v13[1] < &v15[2] )
            {
              v13[1].m128i_i64[0] = v15[1].m128i_i64[0];
              v13[1].m128i_i64[1] = v15[1].m128i_i64[1];
              v13[2].m128i_i64[0] = v15[2].m128i_i64[0];
              v13[2].m128i_i64[1] = v15[2].m128i_i64[1];
              v13[3].m128i_i64[0] = v15[3].m128i_i64[0];
              v13[3].m128i_i64[1] = v15[3].m128i_i64[1];
              v13[4].m128i_i64[0] = v15[4].m128i_i64[0];
              v13[4].m128i_i64[1] = v15[4].m128i_i64[1];
              v13[5].m128i_i64[0] = v15[5].m128i_i64[0];
              v13[5].m128i_i64[1] = v15[5].m128i_i64[1];
            }
            else
            {
              v13[1] = _mm_loadu_si128(v15 + 1);
              v13[2] = _mm_loadu_si128(v15 + 2);
              v13[3] = _mm_loadu_si128(v15 + 3);
              v13[4] = _mm_loadu_si128(v15 + 4);
              v13[5] = _mm_loadu_si128(v15 + 5);
            }
            v17 = v15 + 6;
            v353 = v15 + 26;
            do
            {
              if ( v14 != v17 )
              {
                v19 = (_BYTE *)v14->m128i_i64[0];
                v20 = v17->m128i_u64[1];
                if ( &v14[1] == (__m128i *)v14->m128i_i64[0] )
                  v21 = 15;
                else
                  v21 = v14[1].m128i_u64[0];
                if ( v20 > v21 )
                {
                  if ( (v20 & 0x8000000000000000LL) != 0LL )
LABEL_554:
                    std::__throw_length_error("basic_string::_M_create");
                  v22 = 2 * v21;
                  if ( v20 < v22 )
                  {
                    v23 = v22 + 1;
                    if ( v22 < 0 )
                    {
                      v23 = 0x8000000000000000LL;
                      v22 = 0x7FFFFFFFFFFFFFFFLL;
                    }
                  }
                  else
                  {
                    v23 = v20 + 1;
                    v22 = v17->m128i_i64[1];
                  }
                  v19 = (_BYTE *)operator new(v23);
                  if ( &v14[1] != (__m128i *)v14->m128i_i64[0] )
                  {
                    v354 = v19;
                    operator delete((void *)v14->m128i_i64[0]);
                    v19 = v354;
                  }
                  v14->m128i_i64[0] = (__int64)v19;
                  v14[1].m128i_i64[0] = v22;
                }
                if ( v20 )
                {
                  v18 = (_BYTE *)v17->m128i_i64[0];
                  if ( v20 == 1 )
                    *v19 = *v18;
                  else
                    memcpy(v19, v18, v20);
                  v19 = (_BYTE *)v14->m128i_i64[0];
                }
                v14->m128i_i64[1] = v20;
                v19[v20] = 0;
              }
              v17 += 2;
              v14 += 2;
            }
            while ( v353 != v17 );
            if ( &v13[26] != v353 )
            {
              v210 = v15[26].m128i_u32[2];
              v211 = v13[26].m128i_u32[2];
              v212 = v15[26].m128i_i32[2];
              if ( v210 <= v211 )
              {
                if ( v15[26].m128i_i32[2] )
                {
                  v302 = v13[26].m128i_i64[0];
                  v303 = v15[26].m128i_i64[0];
                  v304 = 0;
                  do
                  {
                    *(_QWORD *)(v302 + v304) = *(_QWORD *)(v303 + v304);
                    *(_BYTE *)(v302 + v304 + 8) = *(_BYTE *)(v303 + v304 + 8);
                    v304 += 12;
                  }
                  while ( 12 * v210 != v304 );
                }
              }
              else
              {
                if ( v210 > v13[26].m128i_u32[3] )
                {
                  v13[26].m128i_i32[2] = 0;
                  sub_2237220(&v13[26], &v13[27], v210, 12);
                  v214 = (char *)v15[26].m128i_i64[0];
                  v213 = (_BYTE *)v13[26].m128i_i64[0];
                  v218 = 0;
                  v210 = v15[26].m128i_u32[2];
                  v219 = v214;
                }
                else
                {
                  v213 = (_BYTE *)v13[26].m128i_i64[0];
                  v214 = (char *)v15[26].m128i_i64[0];
                  if ( v13[26].m128i_i32[2] )
                  {
                    v215 = 3 * v211;
                    v216 = 0;
                    v217 = 4 * v215;
                    v218 = v217;
                    do
                    {
                      *(_QWORD *)&v213[v216] = *(_QWORD *)&v214[v216];
                      v213[v216 + 8] = v214[v216 + 8];
                      v216 += 12;
                    }
                    while ( v217 != v216 );
                    v210 = v15[26].m128i_u32[2];
                    v213 += v217;
                    v219 = &v214[v217];
                  }
                  else
                  {
                    v219 = (char *)v15[26].m128i_i64[0];
                    v218 = 0;
                  }
                }
                v220 = 12 * v210;
                if ( v219 != &v214[v220] )
                  memcpy(v213, v219, v220 - v218);
              }
              v13[26].m128i_i32[2] = v212;
            }
            m128i_i64 = (__int64)v15[33].m128i_i64;
            sub_9EED30((__int64)v13[33].m128i_i64, v15[33].m128i_i64);
          }
          if ( ((*(_WORD *)(v360 & 0xFFFFFFFFFFFFFFFELL) + 509) & 0x1FFu) <= 0x7E )
          {
            v231 = sub_BFB840(v360 & 0xFFFFFFFFFFFFFFFELL);
          }
          else
          {
            sub_1582CA0((__int64)&v379, (_BYTE **)&v376);
            v221 = sub_EEB7E0(v360 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v376, *(double *)a5.m128i_i64);
            m128i_i64 = v221;
            sub_1AAB2D0((__int64)&v357, v221, (__int64)&v379);
            v222 = (void **)v379.m128_u64[0];
            if ( v379.m128_u64[0] )
            {
              v223 = v379.m128_u64[1];
              if ( v379.m128_u64[1] )
              {
                if ( v379.m128_u64[0] < v379.m128_u64[1] || v379.m128_u64[0] > v379.m128_u64[1] + 14848 )
                {
                  v224 = *(_QWORD *)(v379.m128_u64[0] + 528);
                  v225 = v224 + ((unsigned __int64)*(unsigned int *)(v379.m128_u64[0] + 536) << 6);
                  while ( v224 != v225 )
                  {
                    while ( 1 )
                    {
                      v225 -= 64;
                      v226 = *(void **)(v225 + 24);
                      if ( v226 == (void *)(v225 + 40) )
                        break;
                      operator delete(v226);
                      if ( v224 == v225 )
                        goto LABEL_324;
                    }
                  }
LABEL_324:
                  v227 = (void **)v222[66];
                  if ( v227 != v222 + 68 )
                    free(v227);
                  v228 = (void **)v222[52];
                  if ( v228 != v222 + 54 )
                    free(v228);
                  v229 = v222 + 48;
                  v230 = v222 + 8;
                  do
                  {
                    while ( *v229 != v229 + 2 )
                    {
                      operator delete(*v229);
                      v229 -= 4;
                      if ( v229 == v230 )
                        goto LABEL_331;
                    }
                    v229 -= 4;
                  }
                  while ( v230 != v229 );
LABEL_331:
                  m128i_i64 = 928;
                  operator delete(v222, 0x3A0u);
                }
                else
                {
                  v289 = *(unsigned int *)(v379.m128_u64[1] + 14976);
                  *(_DWORD *)(v379.m128_u64[1] + 14976) = v289 + 1;
                  *(_QWORD *)(v223 + 8 * v289 + 14848) = v222;
                }
              }
            }
            v231 = 0;
          }
          v232 = (void **)v376;
          if ( v376 )
          {
            v233 = v377;
            if ( v377 )
            {
              if ( (unsigned __int64)v376 < v377 || (unsigned __int64)v376 > v377 + 14848 )
              {
                v234 = *((void ***)v376 + 66);
                v235 = &v234[8 * (unsigned __int64)*((unsigned int *)v376 + 134)];
                if ( v234 != v235 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v235 -= 8;
                      v236 = (void **)v235[3];
                      if ( v236 == v235 + 5 )
                        break;
                      operator delete(v236);
                      if ( v234 == v235 )
                        goto LABEL_339;
                    }
                  }
                  while ( v234 != v235 );
LABEL_339:
                  v235 = (void **)v232[66];
                }
                if ( v235 != v232 + 68 )
                  free(v235);
                v237 = (void **)v232[52];
                if ( v237 != v232 + 54 )
                  free(v237);
                v238 = v232 + 48;
                v239 = v232 + 8;
                do
                {
                  while ( *v238 != v238 + 2 )
                  {
                    operator delete(*v238);
                    v238 -= 4;
                    if ( v238 == v239 )
                      goto LABEL_347;
                  }
                  v238 -= 4;
                }
                while ( v238 != v239 );
LABEL_347:
                m128i_i64 = 928;
                operator delete(v232, 0x3A0u);
              }
              else
              {
                v266 = *(unsigned int *)(v377 + 14976);
                *(_DWORD *)(v377 + 14976) = v266 + 1;
                *(_QWORD *)(v233 + 8 * v266 + 14848) = v232;
              }
            }
          }
          v240 = (void **)v373;
          if ( v373 )
          {
            v241 = v374;
            if ( v374 )
            {
              if ( (unsigned __int64)v373 < v374 || (unsigned __int64)v373 > v374 + 14848 )
              {
                v242 = *((void ***)v373 + 66);
                v243 = &v242[8 * (unsigned __int64)*((unsigned int *)v373 + 134)];
                if ( v242 != v243 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v243 -= 8;
                      v244 = (void **)v243[3];
                      if ( v244 == v243 + 5 )
                        break;
                      operator delete(v244);
                      if ( v242 == v243 )
                        goto LABEL_354;
                    }
                  }
                  while ( v242 != v243 );
LABEL_354:
                  v243 = (void **)v240[66];
                }
                if ( v243 != v240 + 68 )
                  free(v243);
                v245 = (void **)v240[52];
                if ( v245 != v240 + 54 )
                  free(v245);
                v246 = v240 + 48;
                v247 = v240 + 8;
                do
                {
                  while ( *v246 != v246 + 2 )
                  {
                    operator delete(*v246);
                    v246 -= 4;
                    if ( v247 == v246 )
                      goto LABEL_362;
                  }
                  v246 -= 4;
                }
                while ( v247 != v246 );
LABEL_362:
                m128i_i64 = 928;
                operator delete(v240, 0x3A0u);
              }
              else
              {
                v269 = *(unsigned int *)(v374 + 14976);
                *(_DWORD *)(v374 + 14976) = v269 + 1;
                *(_QWORD *)(v241 + 8 * v269 + 14848) = v240;
              }
            }
          }
          if ( v231 )
          {
            m128i_i64 = v231;
            if ( !(unsigned __int8)sub_1AB4B50(&v357, v231, 0) )
              return v360;
          }
          v57 = v360;
          if ( v360 > 1 )
          {
            v57 = 1;
            if ( (*(_BYTE *)(*(_QWORD *)(sub_168B6C0(v357) + 2320) + 20LL) & 4) != 0 )
            {
              v260 = v357;
              v261 = v360 & 0xFFFFFFFFFFFFFFFELL;
              if ( ((*(_WORD *)(v360 & 0xFFFFFFFFFFFFFFFELL) + 509) & 0x1FFu) <= 0x7E )
              {
                v253 = *(_QWORD *)(v261 + 8);
                v262 = &v379;
                v379.m128_u64[0] = v360 & 0xFFFFFFFFFFFFFFFELL;
                v263 = 1;
              }
              else
              {
                v262 = nullptr;
                v263 = 0;
                v264 = sub_168B6C0(v357);
                v260 = v357;
                v253 = *(_QWORD *)(v264 + 19072);
                v261 = v360 & 0xFFFFFFFFFFFFFFFELL;
              }
              v265 = sub_EEC140(v261);
              v255 = sub_EEB7E0(v261, m128i_i64, *(double *)a5.m128i_i64);
              v256 = (_QWORD *)sub_168B6C0(v260);
              v257 = v262;
              v258 = v263;
              v259 = v265;
              return sub_C09540(v256, v253, v255, v259, v257, v258);
            }
          }
          return v57;
        case 3:
          return sub_1AB8AA0(&v357, a1);
      }
    }
  }
  return result;
}
