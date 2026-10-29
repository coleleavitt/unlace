__int64 __fastcall ClpCholeskyBase::symbolic(ClpCholeskyBase *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rax
  __int64 (__fastcall *v4)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v5)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v6)(ClpPackedMatrix *__hidden); // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 (*v10)(void); // rdx
  __int64 (__fastcall *v11)(ClpPackedMatrix *__hidden); // rax
  __int64 v12; // rax
  const void *v13; // rdi
  void *v14; // rax
  unsigned __int64 v15; // rdi
  __m128i *v16; // r14
  int v17; // r13d
  int *v18; // rax
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdi
  int v22; // r9d
  __int64 i; // r8
  signed int v24; // edx
  __int64 v25; // r10
  int *v26; // rsi
  int v27; // r8d
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // rdi
  __int64 v36; // rax
  unsigned __int64 v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  __int64 v40; // rax
  bool v41; // zf
  char *v42; // rbp
  __int64 v43; // r15
  int v44; // r11d
  __int64 v45; // rdx
  int v46; // eax
  bool v47; // sf
  int v48; // edx
  __int64 v49; // r13
  int v50; // edi
  int *v51; // r8
  __int64 v52; // r15
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  char *v56; // rbx
  int v57; // ecx
  int v58; // r9d
  __int64 v59; // r10
  int *v60; // rax
  __int64 v61; // r9
  int v62; // ecx
  __int32 *v63; // rsi
  char *v64; // rax
  __int64 v65; // rcx
  int v66; // ebx
  int v67; // edi
  unsigned __int64 v68; // rdi
  __int64 v69; // rax
  int v70; // r13d
  __int64 v71; // r15
  char *v72; // rbx
  int k; // edi
  __int64 v74; // r14
  int v75; // r10d
  __int64 v76; // rdx
  int v77; // eax
  int v78; // edx
  int v79; // r8d
  int *v80; // r9
  __int64 v81; // r15
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  char *v85; // rbp
  int v86; // esi
  int v87; // edi
  __int64 v88; // r13
  int *v89; // rax
  __int64 v90; // r11
  __int64 v91; // rsi
  int v92; // edi
  __int32 *v93; // rcx
  char *v94; // rax
  __int64 v95; // rcx
  unsigned __int64 v96; // rax
  char *v97; // rdi
  unsigned __int64 v98; // rax
  int v99; // r8d
  int *v100; // rsi
  int v101; // edi
  __int64 v102; // rcx
  double v103; // xmm1_8
  int v104; // edx
  double v105; // xmm1_8
  double v106; // xmm0_8
  __int64 v107; // rdx
  int v108; // eax
  unsigned __int64 v109; // rdi
  __int64 v110; // rax
  unsigned __int64 v111; // rdi
  __int64 v112; // rax
  unsigned __int64 v113; // rdi
  int *v115; // rbp
  int v116; // eax
  signed int v117; // r15d
  __int64 v118; // r14
  __int64 v119; // rdx
  signed int v120; // r10d
  __int64 v121; // rsi
  int v122; // eax
  __int64 v123; // rax
  char *v124; // rbx
  unsigned __int64 v125; // rax
  int v126; // ecx
  char *v127; // rdi
  unsigned int v128; // r8d
  unsigned __int64 v129; // rdx
  const __m128i *v130; // rsi
  __int64 v131; // r8
  __m128i v132; // xmm1
  __m128i v133; // xmm0
  __int64 v134; // rdx
  char *v135; // rsi
  _DWORD *v136; // rdx
  int v137; // r10d
  int v138; // edi
  std::ostream *v139; // r13
  _BYTE *v140; // rbp
  char v141; // si
  std::ostream *v142; // rax
  unsigned int v143; // edi
  int *v144; // rdx
  const __m128i *v145; // rcx
  __int64 v146; // rdi
  __m128i v147; // xmm1
  __m128i v148; // xmm0
  __int64 v149; // rdx
  __m128i *v150; // rcx
  __int64 v151; // rsi
  int j; // ecx
  __int64 v153; // rdx
  __m128i *v154; // rax
  __int64 v155; // rcx
  __m128i *v156; // rcx
  ClpPackedMatrix *v157; // r15
  __int64 v158; // rax
  __int64 (__fastcall *v159)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v160)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v161)(ClpPackedMatrix *__hidden); // rax
  int v162; // ecx
  int *v163; // rbp
  int v164; // esi
  int v165; // eax
  __int64 v166; // rbp
  __int64 v167; // r13
  __int64 v168; // r10
  __int64 v169; // rsi
  int *v170; // rbx
  _DWORD *v171; // rsi
  __int64 v172; // rcx
  int v173; // edx
  __int64 v174; // r9
  __int64 v175; // rax
  __int64 v176; // r8
  int v177; // ecx
  __int64 v178; // rdx
  int v179; // ecx
  __int64 v180; // rdi
  signed int v181; // r9d
  __int64 v182; // rax
  unsigned int v183; // edx
  int v184; // ecx
  int v185; // r8d
  __m128i v186; // xmm0
  __m128i *v187; // rdx
  unsigned int v188; // esi
  unsigned int v189; // eax
  unsigned int v190; // eax
  unsigned int v191; // edx
  signed int v192; // eax
  __int64 v193; // rbp
  __int64 v194; // r8
  __int64 v195; // rsi
  int v196; // ecx
  __int64 v197; // rax
  __int64 v198; // rdx
  __int64 v199; // rdi
  char *v200; // rsi
  int *v201; // r10
  signed int v202; // ecx
  int v203; // eax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rbp
  __int64 v207; // r13
  __int64 v208; // rcx
  signed int v209; // r11d
  int v210; // edx
  char *v211; // r15
  __int64 v212; // rdi
  int v213; // eax
  __int64 v214; // rax
  char *v215; // rbx
  __int64 v216; // r13
  __int64 v217; // r11
  int v218; // edx
  __int64 v219; // rcx
  __int64 v220; // rax
  __int64 v221; // r8
  char *v222; // rbp
  __int64 v223; // r9
  int v224; // eax
  __int64 v225; // rax
  char *v226; // rbx
  __int64 v227; // rbx
  __int64 v228; // r11
  __int64 v229; // r9
  __int64 v230; // rcx
  __int64 v231; // rsi
  int v232; // edx
  __int64 v233; // rax
  __int64 v234; // r14
  int v235; // esi
  int v236; // esi
  __int64 v237; // rsi
  int v238; // r14d
  __int64 v239; // rax
  __int64 v240; // r8
  __int64 v241; // rdi
  int *v242; // rsi
  int v243; // edx
  unsigned int v244; // r11d
  unsigned int v245; // r8d
  unsigned int v246; // eax
  __int64 v247; // rax
  signed int v248; // ecx
  unsigned int v249; // esi
  int v250; // edx
  __int64 v251; // rax
  unsigned int v252; // edx
  __m128i si128; // xmm2
  unsigned int v254; // r10d
  char *v255; // r8
  __m128i v256; // xmm4
  __m128i v257; // xmm0
  __m128i v258; // xmm1
  __m128i v259; // xmm2
  int *v260; // rdi
  __int64 v261; // rax
  __m128i v262; // xmm3
  signed int v263; // ecx
  unsigned int v264; // eax
  int v265; // edi
  unsigned __int64 v266; // r10
  unsigned int v267; // edx
  int v268; // esi
  unsigned int v269; // edx
  int v270; // edi
  unsigned int v271; // edx
  int v272; // esi
  unsigned int v273; // edx
  int v274; // eax
  int v275; // ecx
  unsigned __int64 v276; // rsi
  __int64 v277; // rax
  unsigned int v278; // ecx
  int v279; // ecx
  int v280; // esi
  __m128i v281; // xmm0
  __m128i *v282; // rdx
  unsigned int v283; // edi
  unsigned int v284; // eax
  unsigned int v285; // eax
  unsigned int v286; // edx
  int v287; // eax
  int *v288; // rdx
  __m128i *v289; // rcx
  int v290; // r9d
  int v291; // ecx
  int v292; // esi
  __int64 v293; // rax
  __int64 v294; // r11
  int *v295; // rax
  _DWORD *v296; // r11
  __int64 v297; // rax
  int v298; // r10d
  __int64 v299; // rdi
  __int64 v300; // rsi
  int v301; // r9d
  int v302; // ecx
  int v303; // r9d
  int v304; // r9d
  int v305; // r10d
  _DWORD *v306; // rsi
  __int64 v307; // r10
  int v308; // r11d
  int v309; // edi
  int v310; // r9d
  __int64 v311; // r10
  _DWORD *v312; // rcx
  unsigned __int64 v313; // r9
  int v314; // edi
  __int64 v315; // r11
  int *v316; // rax
  _DWORD *v317; // r11
  __int64 v318; // rax
  int v319; // r9d
  __int64 v320; // rsi
  __int64 v321; // rcx
  __int64 v322; // r10
  int v323; // r8d
  int v324; // edx
  int v325; // r8d
  int v326; // r8d
  int v327; // r9d
  _DWORD *v328; // rcx
  __int64 v329; // r9
  int v330; // r8d
  __int64 (__fastcall *v331)(); // rax
  int v332; // r11d
  int v333; // r9d
  char *v334; // rsi
  unsigned __int64 v335; // r10
  int v336; // r9d
  int v337; // ecx
  int v338; // edx
  __int64 v339; // rcx
  int v340; // edi
  int v341; // r10d
  char *v342; // rcx
  unsigned __int64 v343; // r10
  int v344; // edi
  int v345; // ecx
  int v346; // edx
  int v347; // r10d
  int v348; // eax
  int *v349; // rcx
  unsigned __int64 v350; // r9
  int v351; // r8d
  int v352; // edx
  unsigned int v353; // edi
  __int64 v354; // rax
  unsigned int v355; // edx
  __m128i *v356; // rdx
  unsigned int v357; // r9d
  unsigned int v358; // eax
  __m128i v359; // xmm0
  int v360; // eax
  int v361; // esi
  char *v362; // r11
  __int64 m; // r8
  __int64 v364; // rdx
  __int64 v365; // rax
  __int64 v366; // rdi
  char *v367; // rbp
  __int64 v368; // r9
  int v369; // eax
  __int64 v370; // rax
  char *v371; // rbx
  int v372; // ecx
  int v373; // r10d
  __int64 v374; // r9
  _DWORD *v375; // rdx
  unsigned __int64 v376; // r10
  int v377; // ecx
  __int64 v378; // rdx
  int v379; // ecx
  int v380; // r10d
  int *v381; // rdx
  unsigned __int64 v382; // r10
  int v383; // ecx
  int v384; // edx
  __int64 v385; // r9
  __int64 v386; // rsi
  int v387; // ebx
  __int64 v388; // rax
  __int64 v389; // rdx
  __int64 v390; // r8
  __int64 v391; // rdi
  int *v392; // rsi
  int v393; // ecx
  unsigned __int64 v394; // rsi
  int *v395; // rdx
  int v396; // r10d
  int v397; // [rsp+8h] [rbp-160h]
  int v398; // [rsp+8h] [rbp-160h]
  char *v399; // [rsp+8h] [rbp-160h]
  char *v400; // [rsp+8h] [rbp-160h]
  void *v401; // [rsp+8h] [rbp-160h]
  __m128i *v402; // [rsp+8h] [rbp-160h]
  char *v403; // [rsp+8h] [rbp-160h]
  void *v404; // [rsp+8h] [rbp-160h]
  int v405; // [rsp+8h] [rbp-160h]
  __int64 v406; // [rsp+10h] [rbp-158h]
  __int64 v407; // [rsp+18h] [rbp-150h]
  unsigned __int64 v408; // [rsp+20h] [rbp-148h]
  __int64 v409; // [rsp+28h] [rbp-140h]
  unsigned __int64 v410; // [rsp+30h] [rbp-138h]
  __int64 v411; // [rsp+30h] [rbp-138h]
  __int64 v412; // [rsp+30h] [rbp-138h]
  __int64 v413; // [rsp+30h] [rbp-138h]
  int v414; // [rsp+30h] [rbp-138h]
  int v415; // [rsp+38h] [rbp-130h]
  int v416; // [rsp+38h] [rbp-130h]
  __int64 v417; // [rsp+38h] [rbp-130h]
  _DWORD *v418; // [rsp+38h] [rbp-130h]
  signed int v419; // [rsp+40h] [rbp-128h]
  __m128i *v420; // [rsp+40h] [rbp-128h]
  __int64 v421; // [rsp+48h] [rbp-120h]
  __int64 v422; // [rsp+48h] [rbp-120h]
  _DWORD *v423; // [rsp+48h] [rbp-120h]
  __int64 v424; // [rsp+50h] [rbp-118h]
  int *src; // [rsp+58h] [rbp-110h]
  int v426; // [rsp+60h] [rbp-108h]
  __int64 v427; // [rsp+68h] [rbp-100h]
  __int64 v428; // [rsp+70h] [rbp-F8h]
  int v429; // [rsp+78h] [rbp-F0h]
  __int64 v430; // [rsp+78h] [rbp-F0h]
  int v431; // [rsp+80h] [rbp-E8h]
  __int64 v432; // [rsp+80h] [rbp-E8h]
  CoinPackedMatrix *v433; // [rsp+88h] [rbp-E0h]
  CoinPackedMatrix *v434; // [rsp+88h] [rbp-E0h]
  __int64 v435; // [rsp+90h] [rbp-D8h]
  __int64 v436; // [rsp+90h] [rbp-D8h]
  __int64 v437; // [rsp+98h] [rbp-D0h]
  __int64 v438; // [rsp+98h] [rbp-D0h]
  CoinPackedMatrix *v439; // [rsp+A0h] [rbp-C8h]
  __m128i *v440; // [rsp+A8h] [rbp-C0h]
  __int64 v441; // [rsp+A8h] [rbp-C0h]
  __int64 v442; // [rsp+B0h] [rbp-B8h]
  __int64 v443; // [rsp+B8h] [rbp-B0h]
  ClpPackedMatrix *v444; // [rsp+C8h] [rbp-A0h]
  _BYTE v445[40]; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v446; // [rsp+F8h] [rbp-70h]
  __int64 v447; // [rsp+100h] [rbp-68h]
  __int64 v448; // [rsp+108h] [rbp-60h]

  v2 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
  v3 = *v2;
  v4 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v2 + 56LL);
  if ( v4 == ClpPackedMatrix::getVectorStarts )
  {
    v5 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v3 + 64);
    v406 = *(_QWORD *)(v2[11] + 48LL);
    if ( v5 == ClpPackedMatrix::getVectorLengths )
      goto LABEL_3;
LABEL_214:
    v407 = ((__int64 (*)(void))v5)();
    v2 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
    v6 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v2 + 48LL);
    if ( v6 == ClpPackedMatrix::getIndices )
      goto LABEL_4;
    goto LABEL_215;
  }
  v406 = ((__int64 (*)(void))v4)();
  v2 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
  v3 = *v2;
  v5 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v2 + 64LL);
  if ( v5 != ClpPackedMatrix::getVectorLengths )
    goto LABEL_214;
LABEL_3:
  v6 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v3 + 48);
  v407 = *(_QWORD *)(v2[11] + 56LL);
  if ( v6 == ClpPackedMatrix::getIndices )
  {
LABEL_4:
    v409 = *(_QWORD *)(v2[11] + 40LL);
    goto LABEL_5;
  }
LABEL_215:
  v409 = ((__int64 (*)(void))v6)();
LABEL_5:
  v7 = *((_QWORD **)this + 118);
  v8 = *v7;
  v9 = *(__int64 (**)(void))(*v7 + 56LL);
  if ( (char *)v9 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v427 = *(_QWORD *)(v7[11] + 48LL);
  }
  else
  {
    v205 = v9();
    v7 = *((_QWORD **)this + 118);
    v427 = v205;
    v8 = *v7;
  }
  v10 = *(__int64 (**)(void))(v8 + 64);
  if ( (char *)v10 != (char *)ClpPackedMatrix::getVectorLengths )
  {
    v204 = v10();
    v7 = *((_QWORD **)this + 118);
    v428 = v204;
    v11 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v7 + 48LL);
    if ( v11 == ClpPackedMatrix::getIndices )
      goto LABEL_9;
LABEL_201:
    v424 = ((__int64 (*)(void))v11)();
    goto LABEL_10;
  }
  v11 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v8 + 48);
  v428 = *(_QWORD *)(v7[11] + 56LL);
  if ( v11 != ClpPackedMatrix::getIndices )
    goto LABEL_201;
LABEL_9:
  v424 = *(_QWORD *)(v7[11] + 40LL);
LABEL_10:
  v12 = *((_QWORD *)this + 4);
  v433 = nullptr;
  v426 = *(_DWORD *)(v12 + 108);
  v431 = *(_DWORD *)(v12 + 104);
  v13 = *(const void **)(v12 + 160);
  v419 = v426 + v431;
  if ( v13 )
  {
    v14 = __dynamic_cast(
            v13,
            (const struct __class_type_info *)&`typeinfo for'ClpObjective,
            (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
            0);
    if ( v14 )
      v433 = *((CoinPackedMatrix **)v14 + 3);
  }
  v15 = *((_DWORD *)this + 11) + 1;
  if ( v15 > 0x1FFFFFFFFFFFFFFELL )
LABEL_199:
    __cxa_throw_bad_array_new_length();
  v16 = (__m128i *)operator new[](4 * v15);
  if ( *((_BYTE *)this + 12) )
  {
    v17 = *((_DWORD *)this + 11);
    v18 = *((int **)this + 9);
    v19 = v17;
    if ( v17 > 0 )
    {
      v20 = 1;
      v21 = 0;
      v22 = 0;
      for ( i = 0; ; i = v22 )
      {
        while ( 1 )
        {
          v24 = v18[v20 - 1];
          v25 = i;
          v26 = &v18[i];
          if ( v419 > v24 )
            break;
          v16->m128i_i32[v21] = v24;
          v137 = v21 + 1;
          v138 = v20++;
          v19 = v17;
          if ( v17 <= v138 )
            goto LABEL_120;
          v21 = v137;
        }
        *v26 = v24;
        v17 = *((_DWORD *)this + 11);
        v27 = v20;
        ++v22;
        ++v20;
        v26 = &v18[v25 + 1];
        v19 = v17;
        if ( v17 <= v27 )
          break;
      }
      v137 = v21;
LABEL_120:
      if ( v137 && v16 != (__m128i *)v26 )
      {
        v143 = v137 >> 3;
        if ( v137 >> 3 <= 0 )
        {
          v150 = v16;
        }
        else
        {
          if ( (v26 >= v16[2].m128i_i32 || v16 >= (__m128i *)v26 + 2) && v143 > 1 )
          {
            v144 = v26;
            v145 = v16;
            v146 = v143 - 1;
            do
            {
              v147 = _mm_loadu_si128(v145);
              v144 += 8;
              v145 += 2;
              v148 = _mm_loadu_si128(v145 - 1);
              *((__m128i *)v144 - 2) = v147;
              *((__m128i *)v144 - 1) = v148;
            }
            while ( &v26[8 * v146 + 8] != v144 );
          }
          else
          {
            v288 = v26;
            v289 = v16;
            v146 = v143 - 1;
            do
            {
              v290 = v289->m128i_i32[0];
              v288 += 8;
              v289 += 2;
              *(v288 - 8) = v290;
              *(v288 - 7) = v289[-2].m128i_i32[1];
              *(v288 - 6) = v289[-2].m128i_i32[2];
              *(v288 - 5) = v289[-2].m128i_i32[3];
              *(v288 - 4) = v289[-1].m128i_i32[0];
              *(v288 - 3) = v289[-1].m128i_i32[1];
              *(v288 - 2) = v289[-1].m128i_i32[2];
              *(v288 - 1) = v289[-1].m128i_i32[3];
            }
            while ( v288 != &v26[8 * v146 + 8] );
          }
          v149 = 2 * ((int)v146 + 1LL);
          v150 = &v16[v149];
          v26 = (int *)((char *)v26 + v149 * 16);
        }
        switch ( v137 & 7 )
        {
          case 0:
            goto LABEL_136;
          case 1:
            goto LABEL_135;
          case 2:
            goto LABEL_134;
          case 3:
            goto LABEL_133;
          case 4:
            goto LABEL_132;
          case 5:
            goto LABEL_131;
          case 6:
            goto LABEL_130;
          case 7:
            v26[6] = v150[1].m128i_i32[2];
LABEL_130:
            v26[5] = v150[1].m128i_i32[1];
LABEL_131:
            v26[4] = v150[1].m128i_i32[0];
LABEL_132:
            v26[3] = v150->m128i_i32[3];
LABEL_133:
            v26[2] = v150->m128i_i32[2];
LABEL_134:
            v26[1] = v150->m128i_i32[1];
LABEL_135:
            *v26 = v150->m128i_i32[0];
LABEL_136:
            v19 = *((_DWORD *)this + 11);
            break;
        }
      }
      if ( v19 > 0 )
      {
        v151 = *((_QWORD *)this + 8);
        for ( j = 0; j < v19; ++j )
        {
          v153 = *v18++;
          *(_DWORD *)(v151 + 4 * v153) = j;
          v19 = *((_DWORD *)this + 11);
        }
        v28 = v19 + 1;
        if ( !v19 )
          goto LABEL_22;
        goto LABEL_141;
      }
    }
  }
  else
  {
    v19 = *((_DWORD *)this + 11);
  }
  v28 = v19 + 1;
  if ( !v19 )
    goto LABEL_22;
LABEL_141:
  if ( v19 / 8 <= 0 )
  {
    v156 = v16;
  }
  else
  {
    v154 = v16;
    v155 = (unsigned int)(v19 / 8 - 1);
    do
    {
      *v154 = 0;
      v154 += 2;
      v154[-1] = 0;
    }
    while ( v154 != &v16[2 * v155 + 2] );
    v156 = &v16[2 * (int)v155 + 2];
  }
  switch ( v19 % 8 )
  {
    case 1:
      goto LABEL_197;
    case 2:
      goto LABEL_196;
    case 3:
      goto LABEL_195;
    case 4:
      goto LABEL_194;
    case 5:
      goto LABEL_193;
    case 6:
      goto LABEL_192;
    case 7:
      v156[1].m128i_i32[2] = 0;
LABEL_192:
      v156[1].m128i_i32[1] = 0;
LABEL_193:
      v156[1].m128i_i32[0] = 0;
LABEL_194:
      v156->m128i_i32[3] = 0;
LABEL_195:
      v156->m128i_i32[2] = 0;
LABEL_196:
      v156->m128i_i32[1] = 0;
LABEL_197:
      v156->m128i_i32[0] = 0;
      break;
    default:
      break;
  }
  if ( v28 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_199;
LABEL_22:
  v29 = operator new[](4 * v28);
  v30 = *((int *)this + 40);
  v408 = v29;
  if ( v30 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  src = (int *)operator new[](4 * v30);
  v31 = *((_DWORD *)this + 11) + 1;
  if ( v31 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_199;
  v32 = operator new[](4 * v31);
  v33 = *((int *)this + 11);
  *((_QWORD *)this + 12) = v32;
  if ( v33 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_199;
  v34 = operator new[](4 * v33);
  v35 = *((int *)this + 11);
  *((_QWORD *)this + 17) = v34;
  if ( v35 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_199;
  v36 = operator new[](4 * v35);
  v37 = *((int *)this + 11);
  *((_QWORD *)this + 18) = v36;
  if ( v37 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_199;
  v38 = operator new[](4 * v37);
  v39 = *((int *)this + 11);
  *((_QWORD *)this + 14) = v38;
  if ( v39 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_199;
  v40 = operator new[](4 * v39);
  v41 = *((_BYTE *)this + 12) == 0;
  *((_QWORD *)this + 19) = v40;
  *((_DWORD *)this + 40) = 0;
  if ( v41 )
  {
    v415 = *((_DWORD *)this + 11);
    if ( v415 <= 0 )
    {
      v66 = *((_DWORD *)this + 11);
      v67 = 0;
    }
    else
    {
      v42 = (char *)src;
      v43 = 0;
      v397 = 0;
      do
      {
        v44 = v43;
        v45 = *(int *)(*((_QWORD *)this + 9) + 4 * v43);
        *(_DWORD *)(v408 + 4 * v43) = v397;
        v46 = *(_DWORD *)(v427 + 4 * v45);
        v47 = -*(_DWORD *)(v428 + 4 * v45) < 0;
        v48 = v46 + *(_DWORD *)(v428 + 4 * v45);
        if ( v47 != __OFSUB__(v46, v48) )
        {
          v421 = v43;
          v49 = *((_QWORD *)this + 119);
          v50 = 0;
          v51 = (int *)(v424 + 4LL * v46);
          v52 = v424 + 4 + 4 * ((unsigned int)(v48 - v46 - 1) + (__int64)v46);
          do
          {
            while ( 1 )
            {
              v53 = v50;
              v54 = *v51;
              v55 = 4LL * v50;
              v56 = &v42[v55];
              if ( !v49 || !*(_BYTE *)(v49 + v54) )
              {
                v57 = *(_DWORD *)(v406 + 4 * v54);
                v58 = v57 + *(_DWORD *)(v407 + 4 * v54);
                if ( v57 < v58 )
                  break;
              }
              if ( ++v51 == (int *)v52 )
                goto LABEL_44;
            }
            v59 = *((_QWORD *)this + 8);
            v60 = (int *)(v409 + 4LL * v57);
            v61 = v409 + 4 + 4 * ((unsigned int)(v58 - v57 - 1) + (__int64)v57);
            while ( 1 )
            {
              v62 = *(_DWORD *)(v59 + 4LL * *v60);
              v55 = 4 * v53;
              v56 = &v42[4 * v53];
              if ( v62 < v44 )
              {
                v63 = &v16->m128i_i32[v62];
                if ( !*v63 )
                {
                  v55 += 4;
                  *(_DWORD *)v56 = v62;
                  *v63 = 1;
                  v56 = &v42[v55];
                  ++v50;
                }
              }
              if ( ++v60 == (int *)v61 )
                break;
              v53 = v50;
            }
            ++v51;
          }
          while ( v51 != (int *)v52 );
LABEL_44:
          v397 += v50;
          v43 = v421;
          *((_DWORD *)this + 40) = v397;
          if ( v50 )
          {
            v64 = v42;
            do
            {
              v65 = *(int *)v64;
              v64 += 4;
              v16->m128i_i32[v65] = 0;
            }
            while ( &v42[4 * (v50 - 1) + 4] != v64 );
          }
          if ( v42 != v56 )
          {
            _BitScanReverse64((unsigned __int64 *)&v55, v55 >> 2);
            sub_623B0(v42, v56, 2 * (63LL - (int)(v55 ^ 0x3F)));
            sub_5DBC0(v42, v56);
            v415 = *((_DWORD *)this + 11);
            v397 = *((_DWORD *)this + 40);
          }
        }
        else
        {
          v56 = v42;
        }
        ++v43;
        v42 = v56;
      }
      while ( (int)v43 < v415 );
      v66 = v415;
      v67 = v397;
    }
    goto LABEL_51;
  }
  v157 = (ClpPackedMatrix *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 192LL) + 128LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 192LL));
  v158 = *(_QWORD *)v157;
  v159 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*(_QWORD *)v157 + 56LL);
  if ( v159 == ClpPackedMatrix::getVectorStarts )
  {
    v430 = *(_QWORD *)(*((_QWORD *)v157 + 11) + 48LL);
  }
  else
  {
    v430 = v159(v157);
    v158 = *(_QWORD *)v157;
  }
  v160 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v158 + 64);
  if ( v160 == ClpPackedMatrix::getVectorLengths )
  {
    v436 = *(_QWORD *)(*((_QWORD *)v157 + 11) + 56LL);
  }
  else
  {
    v436 = v160(v157);
    v158 = *(_QWORD *)v157;
  }
  v161 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v158 + 48);
  if ( v161 == ClpPackedMatrix::getIndices )
    v400 = *(char **)(*((_QWORD *)v157 + 11) + 40LL);
  else
    v400 = (char *)v161(v157);
  v162 = *((_DWORD *)this + 11);
  if ( v162 <= 0 )
  {
    if ( !v433 )
      goto LABEL_166;
    goto LABEL_158;
  }
  v163 = *((int **)this + 9);
  v164 = *v163;
  if ( !*v163 )
  {
    v165 = 0;
    while ( ++v165 < v162 )
    {
      if ( v163[v165] != v165 )
        goto LABEL_203;
    }
    if ( !v433 )
    {
      v353 = *((_DWORD *)this + 40);
      v354 = -(int)(v408 >> 2) & 3;
      v355 = v354 + 3;
      if ( (unsigned int)(v354 + 3) < 5 )
        v355 = 5;
      if ( v355 > v162 - 1 )
        goto LABEL_373;
      if ( (_DWORD)v354 )
      {
        *(_DWORD *)v408 = v353;
        v164 = 1;
        if ( (_DWORD)v354 != 1 )
        {
          *(_DWORD *)(v408 + 4) = v353;
          v164 = 2;
          if ( (_DWORD)v354 != 2 )
          {
            *(_DWORD *)(v408 + 8) = v353;
            v164 = 3;
          }
        }
      }
      v356 = (__m128i *)(v408 + 4 * v354);
      v357 = v162 - v354;
      v358 = 0;
      v359 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v353), 0);
      do
      {
        ++v358;
        ++v356;
        v356[-1] = v359;
      }
      while ( v357 >> 2 > v358 );
      v164 += v357 & 0xFFFFFFFC;
      if ( (v357 & 0xFFFFFFFC) != v357 )
      {
LABEL_373:
        *(_DWORD *)(v408 + 4LL * v164) = v353;
        if ( v162 > v164 + 1 )
        {
          *(_DWORD *)(v408 + 4LL * (v164 + 1)) = v353;
          if ( v162 > v164 + 2 )
          {
            *(_DWORD *)(v408 + 4LL * (v164 + 2)) = v353;
            if ( v162 > v164 + 3 )
            {
              *(_DWORD *)(v408 + 4LL * (v164 + 3)) = v353;
              v360 = v164 + 4;
              if ( v162 > v164 + 4 )
              {
                v361 = v164 + 5;
                *(_DWORD *)(v408 + 4LL * v360) = v353;
                if ( v162 > v361 )
                  *(_DWORD *)(v408 + 4LL * v361) = v353;
              }
            }
          }
        }
      }
      goto LABEL_166;
    }
LABEL_158:
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v445);
    CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v445, v433);
    v166 = v447;
    v422 = v446;
    v412 = v448;
    if ( v426 > 0 )
    {
      v167 = *((_QWORD *)this + 9);
      v168 = 0;
      do
      {
        v169 = *(int *)(v167 + 4 * v168);
        *(_DWORD *)(v408 + 4 * v168) = *((_DWORD *)this + 40);
        v169 *= 4;
        v170 = (int *)(v166 + v169);
        v171 = (_DWORD *)(v412 + v169);
        v172 = *v170;
        v173 = v172 + *v171;
        if ( (int)v172 < v173 )
        {
          v174 = *((_QWORD *)this + 8);
          v175 = (int)v172 + 1;
          v176 = v422 + 4 * (v172 - v175);
          do
          {
            while ( 1 )
            {
              v177 = *(_DWORD *)(v174 + 4LL * *(int *)(v176 + 4 * v175));
              if ( v177 >= (int)v168 )
                break;
              v178 = *((int *)this + 40);
              src[v178] = v177;
              v179 = v175++;
              *((_DWORD *)this + 40) = v178 + 1;
              v173 = *v170 + *v171;
              if ( v179 >= v173 )
                goto LABEL_164;
            }
            v291 = v175++;
          }
          while ( v173 > v291 );
        }
LABEL_164:
        ++v168;
      }
      while ( (unsigned int)(v426 - 1) + 1LL != v168 );
    }
    CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v445);
LABEL_166:
    if ( v431 <= 0 )
      goto LABEL_190;
    v180 = (unsigned int)(v431 - 1);
    v181 = *((_DWORD *)this + 40);
    v182 = -(int)((v408 + 4LL * v426) >> 2) & 3;
    v183 = v182 + 3;
    if ( (unsigned int)(v182 + 3) < 5 )
      v183 = 5;
    if ( v183 > (unsigned int)v180 )
    {
      v190 = 0;
    }
    else
    {
      v184 = 0;
      if ( (_DWORD)v182 )
      {
        *(_DWORD *)(v408 + 4LL * v426) = v181;
        v184 = 1;
        if ( (_DWORD)v182 != 1 )
        {
          v184 = 2;
          *(_DWORD *)(v408 + 4LL * (v426 + 1)) = v181;
          if ( (_DWORD)v182 != 2 )
          {
            v184 = 3;
            *(_DWORD *)(v408 + 4LL * (v426 + 2)) = v181;
          }
        }
      }
      v185 = v431 - v182;
      v186 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v181), 0);
      v187 = (__m128i *)(v408 + 4 * (v426 + v182));
      v188 = (unsigned int)(v431 - v182) >> 2;
      v189 = 0;
      do
      {
        ++v189;
        ++v187;
        v187[-1] = v186;
      }
      while ( v188 > v189 );
      v190 = (v185 & 0xFFFFFFFC) + v184;
      if ( (v185 & 0xFFFFFFFC) == v185 )
        goto LABEL_183;
    }
    *(_DWORD *)(v408 + 4LL * (int)(v426 + v190)) = v181;
    if ( v431 > (int)(v190 + 1) )
    {
      *(_DWORD *)(v408 + 4LL * (int)(v426 + v190 + 1)) = v181;
      if ( v431 > (int)(v190 + 2) )
      {
        *(_DWORD *)(v408 + 4LL * (int)(v426 + v190 + 2)) = v181;
        if ( v431 > (int)(v190 + 3) )
        {
          *(_DWORD *)(v408 + 4LL * (int)(v426 + v190 + 3)) = v181;
          v191 = v190 + 4;
          if ( v431 > (int)(v190 + 4) )
          {
            v192 = v190 + 5;
            *(_DWORD *)(v408 + 4LL * (int)(v426 + v191)) = v181;
            if ( v431 > v192 )
              *(_DWORD *)(v408 + 4LL * (v426 + v192)) = v181;
          }
        }
      }
    }
LABEL_183:
    v193 = v180 + 1;
    v194 = 0;
    do
    {
      *(_DWORD *)(v408 + 4LL * v419 + 4 * v194) = v181;
      v195 = *(int *)(v430 + 4 * v194);
      if ( (int)v195 >= (int)v195 + *(_DWORD *)(v436 + 4 * v194) )
      {
        v202 = v181;
      }
      else
      {
        v196 = *(_DWORD *)(v436 + 4 * v194);
        v197 = v181 + 1;
        v198 = v197 + 1;
        v199 = v197 + 1 + (unsigned int)(v196 - 1);
        v200 = &v400[4 * v195 + -4 * v197];
        v201 = &src[v181 - v197];
        while ( 1 )
        {
          *((_DWORD *)this + 40) = v197;
          v201[v197] = *(_DWORD *)&v200[4 * v197];
          v197 = v198;
          if ( v199 == v198 )
            break;
          ++v198;
        }
        v202 = v181 + v196;
      }
      v181 = v202 + 1;
      *((_DWORD *)this + 40) = v202 + 1;
      v203 = v194++ + v426;
      src[v202] = v203;
    }
    while ( v193 != v194 );
    goto LABEL_190;
  }
LABEL_203:
  if ( !v433 )
  {
    v216 = 0;
    v217 = *((_QWORD *)this + 9);
    while ( 1 )
    {
      while ( 1 )
      {
        v218 = *((_DWORD *)this + 40);
        *(_DWORD *)(v408 + 4 * v216) = v218;
        v219 = *(int *)(v217 + 4 * v216);
        v220 = v218;
        v221 = v218;
        v222 = (char *)&src[v221];
        if ( (int)v219 >= v426 )
          break;
        v309 = *(_DWORD *)(v406 + 4 * v219);
        v310 = v309 + *(_DWORD *)(v407 + 4 * v219);
        if ( v309 >= v310 )
          goto LABEL_291;
        v311 = *((_QWORD *)this + 8);
        v312 = (_DWORD *)(v409 + 4LL * v309);
        v313 = v409 + 4 * (v309 + (unsigned __int64)(unsigned int)(v310 - v309 - 1)) + 4;
        while ( 1 )
        {
          v225 = 4 * v220;
          v226 = (char *)src + v225;
          v314 = *(_DWORD *)(v311 + 4LL * (v419 + *v312));
          if ( v314 < (int)v216 )
          {
            v225 += 4;
            ++v218;
            *(_DWORD *)v226 = v314;
            v226 = (char *)src + v225;
            *((_DWORD *)this + 40) = v218;
          }
          if ( (_DWORD *)v313 == ++v312 )
            break;
          v220 = v218;
        }
LABEL_221:
        if ( v226 == v222 )
          goto LABEL_291;
        _BitScanReverse64((unsigned __int64 *)&v225, (v225 - v221 * 4) >> 2);
        sub_623B0((char *)&src[v221], v226, 2 * (63LL - (int)(v225 ^ 0x3F)));
        sub_5DBC0(v222, v226);
        if ( (int)++v216 >= *((_DWORD *)this + 11) )
          goto LABEL_190;
        v217 = *((_QWORD *)this + 9);
      }
      v223 = *((_QWORD *)this + 8);
      if ( v419 <= (int)v219 )
      {
        v414 = v219 - v419;
        v339 = (int)v219 - v419;
        v340 = *(_DWORD *)(v430 + 4 * v339);
        v341 = v340 + *(_DWORD *)(v436 + 4 * v339);
        if ( v340 >= v341 )
        {
          v226 = (char *)&src[v221];
          v225 = 4LL * v218;
        }
        else
        {
          v342 = &v400[4 * v340];
          v343 = (unsigned __int64)&v400[4 * v340 + 4 + 4 * (unsigned __int64)(unsigned int)(v341 - v340 - 1)];
          while ( 1 )
          {
            v225 = 4 * v220;
            v226 = (char *)src + v225;
            v344 = *(_DWORD *)(v223 + 4LL * *(int *)v342);
            if ( v344 < (int)v216 )
            {
              v225 += 4;
              ++v218;
              *(_DWORD *)v226 = v344;
              v226 = (char *)src + v225;
              *((_DWORD *)this + 40) = v218;
            }
            v342 += 4;
            if ( v342 == (char *)v343 )
              break;
            v220 = v218;
          }
        }
        v345 = *(_DWORD *)(v223 + 4LL * (v426 + v414));
        if ( v345 < (int)v216 )
        {
          v346 = v218 + 1;
          *(_DWORD *)v226 = v345;
          *((_DWORD *)this + 40) = v346;
          v225 = 4LL * v346;
          v226 = (char *)src + v225;
        }
        goto LABEL_221;
      }
      v224 = *(_DWORD *)(v223 + 4LL * ((int)v219 + v431));
      if ( v224 < (int)v216 )
      {
        *(_DWORD *)v222 = v224;
        v225 = v221 * 4 + 4;
        *((_DWORD *)this + 40) = v218 + 1;
        v226 = (char *)&src[v221 + 1];
        goto LABEL_221;
      }
LABEL_291:
      if ( (int)++v216 >= *((_DWORD *)this + 11) )
        goto LABEL_190;
    }
  }
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v445);
  CoinPackedMatrix::reverseOrderedCopyOf((CoinPackedMatrix *)v445, v433);
  v441 = v446;
  v442 = v447;
  v443 = v448;
  if ( *((int *)this + 11) <= 0 )
    goto LABEL_290;
  v206 = *((_QWORD *)this + 9);
  v207 = 0;
  v444 = v157;
  do
  {
    while ( 1 )
    {
      v208 = *((int *)this + 40);
      *(_DWORD *)(v408 + 4 * v207) = v208;
      v209 = *(_DWORD *)(v206 + 4 * v207);
      v210 = v208;
      v417 = 4 * v208;
      v211 = (char *)&src[v208];
      if ( v209 >= v426 )
      {
        v212 = *((_QWORD *)this + 8);
        if ( v419 <= v209 )
        {
          v332 = v209 - v419;
          v333 = *(_DWORD *)(v430 + 4LL * v332);
          if ( v333 >= v333 + *(_DWORD *)(v436 + 4LL * v332) )
          {
            v215 = (char *)&src[v208];
            v214 = 4 * v208;
          }
          else
          {
            v334 = &v400[4 * v333];
            v335 = (unsigned __int64)&v400[4 * v333
                                         + 4
                                         + 4 * (unsigned __int64)(unsigned int)(*(_DWORD *)(v436 + 4LL * v332) - 1)];
            while ( 1 )
            {
              v336 = *(_DWORD *)(v212 + 4LL * *(int *)v334);
              v214 = 4 * v208;
              v215 = (char *)&src[v208];
              if ( v336 < (int)v207 )
              {
                v214 += 4;
                ++v210;
                *(_DWORD *)v215 = v336;
                v215 = (char *)src + v214;
                *((_DWORD *)this + 40) = v210;
              }
              v334 += 4;
              if ( v334 == (char *)v335 )
                break;
              v208 = v210;
            }
          }
          v337 = *(_DWORD *)(v212 + 4LL * (v332 + v426));
          if ( v337 < (int)v207 )
          {
            v338 = v210 + 1;
            *(_DWORD *)v215 = v337;
            *((_DWORD *)this + 40) = v338;
            v214 = 4LL * v338;
            v215 = (char *)src + v214;
          }
        }
        else
        {
          v213 = *(_DWORD *)(v212 + 4LL * (v431 + v209));
          if ( v213 >= (int)v207 )
            goto LABEL_288;
          *(_DWORD *)v211 = v213;
          *((_DWORD *)this + 40) = v208 + 1;
          v214 = v417 + 4;
          v215 = (char *)&src[(unsigned __int64)v417 / 4 + 1];
        }
        goto LABEL_210;
      }
      v293 = v209;
      v294 = 4LL * v209;
      v438 = v293;
      v295 = (int *)(v294 + v442);
      v296 = (_DWORD *)(v443 + v294);
      v423 = v295;
      v297 = *v295;
      v298 = v297 + *v296;
      if ( (int)v297 >= v298 )
        break;
      v299 = *((_QWORD *)this + 8);
      v300 = (int)v297 + 1;
      v413 = v441 + 4 * (v297 - v300);
      do
      {
        while ( 1 )
        {
          v301 = *(_DWORD *)(v299 + 4LL * *(int *)(v413 + 4 * v300));
          v214 = 4 * v208;
          v215 = (char *)&src[v208];
          if ( v301 >= (int)v207 )
            break;
          *(_DWORD *)v215 = v301;
          *((_DWORD *)this + 40) = ++v210;
          v302 = v300;
          v214 += 4;
          ++v300;
          v298 = *v423 + *v296;
          v215 = (char *)src + v214;
          if ( v298 <= v302 )
            goto LABEL_299;
          v208 = v210;
        }
        v303 = v300++;
      }
      while ( v298 > v303 );
LABEL_299:
      v304 = *(_DWORD *)(v406 + 4 * v438);
      v305 = v304 + *(_DWORD *)(v407 + 4 * v438);
      if ( v304 < v305 )
      {
        v208 = v210;
        goto LABEL_301;
      }
LABEL_210:
      if ( v215 == v211 )
        goto LABEL_288;
      _BitScanReverse64((unsigned __int64 *)&v214, (v214 - v417) >> 2);
      sub_623B0(v211, v215, 2 * (63LL - (int)(v214 ^ 0x3F)));
      sub_5DBC0(v211, v215);
      if ( *((_DWORD *)this + 11) <= (int)++v207 )
        goto LABEL_289;
      v206 = *((_QWORD *)this + 9);
    }
    v304 = *(_DWORD *)(v406 + 4 * v438);
    v305 = v304 + *(_DWORD *)(v407 + 4 * v438);
    if ( v305 > v304 )
    {
      v299 = *((_QWORD *)this + 8);
LABEL_301:
      v306 = (_DWORD *)(v409 + 4LL * v304);
      v307 = v409 + 4 * ((unsigned int)(v305 - v304 - 1) + (__int64)v304) + 4;
      while ( 1 )
      {
        v308 = *(_DWORD *)(v299 + 4LL * (v419 + *v306));
        v214 = 4 * v208;
        v215 = (char *)&src[v208];
        if ( v308 < (int)v207 )
        {
          v214 += 4;
          ++v210;
          *(_DWORD *)v215 = v308;
          v215 = (char *)src + v214;
          *((_DWORD *)this + 40) = v210;
        }
        if ( ++v306 == (_DWORD *)v307 )
          break;
        v208 = v210;
      }
      goto LABEL_210;
    }
LABEL_288:
    ++v207;
  }
  while ( *((_DWORD *)this + 11) > (int)v207 );
LABEL_289:
  v157 = v444;
LABEL_290:
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v445);
LABEL_190:
  (*(void (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)v157 + 480LL))(v157);
  v66 = *((_DWORD *)this + 11);
  v67 = *((_DWORD *)this + 40);
LABEL_51:
  *((_DWORD *)this + 42) = v66;
  *(_DWORD *)(v408 + 4LL * v66) = v67;
  ClpCholeskyBase::symbolic1(this, (const int *)v408, src);
  v68 = *((int *)this + 40);
  if ( v68 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v69 = operator new[](4 * v68);
  v41 = *((_BYTE *)this + 12) == 0;
  *((_QWORD *)this + 13) = v69;
  v416 = *((_DWORD *)this + 11);
  *((_DWORD *)this + 40) = 0;
  v70 = v416;
  if ( v41 )
  {
    if ( v416 <= 0 )
      goto LABEL_78;
    v398 = 0;
    v71 = 0;
    v72 = (char *)src;
    v420 = v16;
    for ( k = 0; ; k = v398 )
    {
      v74 = *((_QWORD *)this + 7);
      v75 = v71;
      v76 = *(int *)(*((_QWORD *)this + 9) + 4 * v71);
      *(_DWORD *)(v408 + 4 * v71) = k;
      if ( *(_BYTE *)(v74 + v76) )
        goto LABEL_55;
      v77 = *(_DWORD *)(v427 + 4 * v76);
      v47 = -*(_DWORD *)(v428 + 4 * v76) < 0;
      v78 = v77 + *(_DWORD *)(v428 + 4 * v76);
      if ( v47 == __OFSUB__(v77, v78) )
        goto LABEL_55;
      v432 = v71;
      v79 = 0;
      v80 = (int *)(v424 + 4LL * v77);
      v81 = *((_QWORD *)this + 119);
      v410 = v424 + 4 + 4 * (v77 + (unsigned __int64)(unsigned int)(v78 - v77 - 1));
      do
      {
        while ( 1 )
        {
          v82 = v79;
          v83 = *v80;
          v84 = 4LL * v79;
          v85 = &v72[v84];
          if ( !v81 || !*(_BYTE *)(v81 + v83) )
          {
            v86 = *(_DWORD *)(v406 + 4 * v83);
            v87 = v86 + *(_DWORD *)(v407 + 4 * v83);
            if ( v86 < v87 )
              break;
          }
          if ( (int *)v410 == ++v80 )
            goto LABEL_72;
        }
        v88 = *((_QWORD *)this + 8);
        v89 = (int *)(v409 + 4LL * v86);
        v90 = v409 + 4 + 4 * ((unsigned int)(v87 - v86 - 1) + (__int64)v86);
        while ( 1 )
        {
          v91 = *v89;
          v84 = 4 * v82;
          v85 = &v72[4 * v82];
          v92 = *(_DWORD *)(v88 + 4 * v91);
          if ( v92 > v75 && !*(_BYTE *)(v74 + v91) )
          {
            v93 = &v420->m128i_i32[v92];
            if ( !*v93 )
            {
              v84 += 4;
              *(_DWORD *)v85 = v92;
              *v93 = 1;
              v85 = &v72[v84];
              ++v79;
            }
          }
          if ( (int *)v90 == ++v89 )
            break;
          v82 = v79;
        }
        ++v80;
      }
      while ( (int *)v410 != v80 );
LABEL_72:
      v71 = v432;
      *((_DWORD *)this + 40) = v79 + v398;
      if ( v79 )
      {
        v94 = v72;
        do
        {
          v95 = *(int *)v94;
          v94 += 4;
          v420->m128i_i32[v95] = 0;
        }
        while ( &v72[4 * (v79 - 1) + 4] != v94 );
      }
      if ( v72 == v85 )
      {
LABEL_55:
        if ( (int)++v71 >= v416 )
          goto LABEL_77;
      }
      else
      {
        _BitScanReverse64(&v96, v84 >> 2);
        sub_623B0(v72, v85, 2 * (63LL - (int)(v96 ^ 0x3F)));
        v97 = v72;
        v72 = v85;
        sub_5DBC0(v97, v85);
        v416 = *((_DWORD *)this + 11);
        v71 = v432 + 1;
        if ( (int)v432 + 1 >= v416 )
        {
LABEL_77:
          v16 = v420;
          goto LABEL_78;
        }
      }
      v398 = *((_DWORD *)this + 40);
    }
  }
  if ( v416 > 0 )
  {
    v115 = *((int **)this + 9);
    v116 = *v115;
    if ( !*v115 )
    {
      while ( ++v116 < v416 )
      {
        if ( v115[v116] != v116 )
          goto LABEL_93;
      }
      goto LABEL_234;
    }
LABEL_93:
    if ( v433 )
    {
      v429 = v416;
      v440 = v16;
      v117 = 0;
      v118 = 0;
      v435 = *((_QWORD *)v433 + 5);
      v437 = *((_QWORD *)v433 + 6);
      v439 = *((CoinPackedMatrix **)v433 + 7);
      while ( 1 )
      {
        while ( 1 )
        {
          v119 = v117;
          *(_DWORD *)(v408 + 4 * v118) = v117;
          v120 = v115[v118];
          v411 = v117;
          v399 = (char *)&src[v411];
          if ( v120 < v426 )
            break;
          v121 = *((_QWORD *)this + 8);
          if ( v419 <= v120 )
          {
            v347 = v120 - v419;
            v348 = *(_DWORD *)(v427 + 4LL * v347);
            if ( v348 >= v348 + *(_DWORD *)(v428 + 4LL * v347) )
            {
              v124 = (char *)&src[v411];
              v123 = 4LL * v117;
            }
            else
            {
              v349 = (int *)(v424 + 4LL * v348);
              v350 = v424 + 4 * (v348 + (unsigned __int64)(unsigned int)(*(_DWORD *)(v428 + 4LL * v347) - 1)) + 4;
              while ( 1 )
              {
                v351 = *(_DWORD *)(v121 + 4LL * *v349);
                v123 = 4 * v119;
                v124 = (char *)&src[v119];
                if ( v351 > (int)v118 )
                {
                  v123 += 4;
                  ++v117;
                  *(_DWORD *)v124 = v351;
                  v124 = (char *)src + v123;
                  *((_DWORD *)this + 40) = v117;
                }
                if ( (int *)v350 == ++v349 )
                  break;
                v119 = v117;
              }
            }
            v352 = *(_DWORD *)(v121 + 4LL * (v347 + v426));
            if ( v352 > (int)v118 )
            {
              ++v117;
              *(_DWORD *)v124 = v352;
              *((_DWORD *)this + 40) = v117;
              v123 = 4LL * v117;
              v124 = (char *)src + v123;
            }
            goto LABEL_99;
          }
          v122 = *(_DWORD *)(v121 + 4LL * (v431 + v120));
          if ( v122 > (int)v118 )
          {
            *((_DWORD *)this + 40) = ++v117;
            *(_DWORD *)v399 = v122;
            v123 = v411 * 4 + 4;
            v124 = (char *)&src[v411 + 1];
            goto LABEL_99;
          }
LABEL_307:
          if ( v429 <= (int)++v118 )
          {
            v16 = v440;
            v70 = v429;
            goto LABEL_280;
          }
        }
        v315 = 4LL * v120;
        v434 = (CoinPackedMatrix *)v120;
        v316 = (int *)(v315 + v437);
        v317 = (_DWORD *)((char *)v439 + v315);
        v418 = v316;
        v318 = *v316;
        v319 = v318 + *v317;
        if ( (int)v318 >= v319 )
          break;
        v320 = *((_QWORD *)this + 8);
        v321 = (int)v318 + 1;
        v322 = v435 + 4 * (v318 - v321);
        do
        {
          while ( 1 )
          {
            v323 = *(_DWORD *)(v320 + 4LL * *(int *)(v322 + 4 * v321));
            v123 = 4 * v119;
            v124 = (char *)&src[v119];
            if ( v323 <= (int)v118 )
              break;
            *(_DWORD *)v124 = v323;
            *((_DWORD *)this + 40) = ++v117;
            v324 = v321;
            v123 += 4;
            ++v321;
            v319 = *v418 + *v317;
            v124 = (char *)src + v123;
            if ( v319 <= v324 )
              goto LABEL_323;
            v119 = v117;
          }
          v325 = v321++;
        }
        while ( v319 > v325 );
LABEL_323:
        v326 = *(_DWORD *)(v406 + 4LL * (_QWORD)v434);
        v327 = v326 + *(_DWORD *)(v407 + 4LL * (_QWORD)v434);
        if ( v326 < v327 )
        {
          v119 = v117;
LABEL_325:
          v328 = (_DWORD *)(v409 + 4LL * v326);
          v329 = v409 + 4 * ((unsigned int)(v327 - v326 - 1) + (__int64)v326) + 4;
          while ( 1 )
          {
            v330 = *(_DWORD *)(v320 + 4LL * (v419 + *v328));
            v123 = 4 * v119;
            v124 = (char *)&src[v119];
            if ( v330 > (int)v118 )
            {
              v123 += 4;
              ++v117;
              *(_DWORD *)v124 = v330;
              v124 = (char *)src + v123;
              *((_DWORD *)this + 40) = v117;
            }
            if ( (_DWORD *)v329 == ++v328 )
              break;
            v119 = v117;
          }
        }
LABEL_99:
        if ( v124 == v399 )
          goto LABEL_307;
        _BitScanReverse64((unsigned __int64 *)&v123, (v123 - v411 * 4) >> 2);
        sub_623B0(v399, v124, 2 * (63LL - (int)(v123 ^ 0x3F)));
        sub_5DBC0(v399, v124);
        ++v118;
        v117 = *((_DWORD *)this + 40);
        v429 = *((_DWORD *)this + 11);
        if ( v429 <= (int)v118 )
        {
          v70 = *((_DWORD *)this + 11);
          v16 = v440;
          goto LABEL_280;
        }
        v115 = *((int **)this + 9);
      }
      v326 = *(_DWORD *)(v406 + 4LL * v120);
      v327 = v326 + *(_DWORD *)(v407 + 4LL * v120);
      if ( v327 <= v326 )
        goto LABEL_307;
      v320 = *((_QWORD *)this + 8);
      goto LABEL_325;
    }
    v362 = nullptr;
    v117 = 0;
    for ( m = *((_QWORD *)this + 9); ; m = *((_QWORD *)this + 9) )
    {
      while ( 2 )
      {
        *(_DWORD *)(v408 + 4LL * (_QWORD)v362) = v117;
        v364 = *(int *)(m + 4LL * (_QWORD)v362);
        v365 = v117;
        v366 = 4LL * v117;
        v367 = (char *)src + v366;
        if ( (int)v364 < v426 )
        {
          v372 = *(_DWORD *)(v406 + 4 * v364);
          v373 = v372 + *(_DWORD *)(v407 + 4 * v364);
          if ( v372 >= v373 )
          {
LABEL_392:
            if ( v70 <= (int)++v362 )
              goto LABEL_280;
            continue;
          }
          v404 = (void *)(4LL * v117);
          v374 = *((_QWORD *)this + 8);
          v375 = (_DWORD *)(v409 + 4LL * v372);
          v376 = v409 + 4 * (v372 + (unsigned __int64)(unsigned int)(v373 - v372 - 1)) + 4;
          while ( 1 )
          {
            v370 = 4 * v365;
            v371 = (char *)src + v370;
            v377 = *(_DWORD *)(v374 + 4LL * (v419 + *v375));
            if ( v377 > (int)v362 )
            {
              v370 += 4;
              ++v117;
              *(_DWORD *)v371 = v377;
              v371 = (char *)src + v370;
              *((_DWORD *)this + 40) = v117;
            }
            if ( (_DWORD *)v376 == ++v375 )
              break;
            v365 = v117;
          }
          v366 = (__int64)v404;
        }
        else
        {
          v368 = *((_QWORD *)this + 8);
          if ( v419 <= (int)v364 )
          {
            v405 = v364 - v419;
            v378 = (int)v364 - v419;
            v379 = *(_DWORD *)(v427 + 4 * v378);
            v380 = v379 + *(_DWORD *)(v428 + 4 * v378);
            if ( v379 >= v380 )
            {
              v371 = (char *)src + v366;
              v370 = 4LL * v117;
            }
            else
            {
              v381 = (int *)(v424 + 4LL * v379);
              v382 = v424 + 4 * (v379 + (unsigned __int64)(unsigned int)(v380 - v379 - 1)) + 4;
              while ( 1 )
              {
                v370 = 4 * v365;
                v371 = (char *)src + v370;
                v383 = *(_DWORD *)(v368 + 4LL * *v381);
                if ( v383 > (int)v362 )
                {
                  v370 += 4;
                  ++v117;
                  *(_DWORD *)v371 = v383;
                  v371 = (char *)src + v370;
                  *((_DWORD *)this + 40) = v117;
                }
                if ( (int *)v382 == ++v381 )
                  break;
                v365 = v117;
              }
            }
            v384 = *(_DWORD *)(v368 + 4LL * (v426 + v405));
            if ( v384 > (int)v362 )
            {
              ++v117;
              *(_DWORD *)v371 = v384;
              *((_DWORD *)this + 40) = v117;
              v370 = 4LL * v117;
              v371 = (char *)src + v370;
            }
          }
          else
          {
            v369 = *(_DWORD *)(v368 + 4LL * ((int)v364 + v431));
            if ( v369 <= (int)v362 )
              goto LABEL_392;
            *(_DWORD *)v367 = v369;
            v370 = v366 + 4;
            *((_DWORD *)this + 40) = ++v117;
            v371 = (char *)src + v366 + 4;
          }
        }
        break;
      }
      if ( v371 == v367 )
        goto LABEL_392;
      v403 = v362;
      _BitScanReverse64((unsigned __int64 *)&v370, (v370 - v366) >> 2);
      sub_623B0(v367, v371, 2 * (63LL - (int)(v370 ^ 0x3F)));
      sub_5DBC0(v367, v371);
      v70 = *((_DWORD *)this + 11);
      v117 = *((_DWORD *)this + 40);
      v362 = v403 + 1;
      if ( v70 <= (int)v403 + 1 )
        goto LABEL_280;
    }
  }
LABEL_234:
  if ( !v433 )
  {
    if ( v426 > 0 )
    {
      v385 = 0;
      v117 = 0;
      do
      {
        *(_DWORD *)(v408 + v385) = v117;
        v386 = *(int *)(v406 + v385);
        if ( (int)v386 < (int)v386 + *(_DWORD *)(v407 + v385) )
        {
          v387 = *(_DWORD *)(v407 + v385);
          v388 = v117 + 1;
          v389 = v388 + 1;
          v390 = v388 + 1 + (unsigned int)(v387 - 1);
          v391 = v409 + -4 * v388 + 4 * v386;
          v392 = &src[v117 - v388];
          while ( 1 )
          {
            v393 = *(_DWORD *)(v391 + 4 * v388);
            *((_DWORD *)this + 40) = v388;
            v392[v388] = v419 + v393;
            v388 = v389;
            if ( v390 == v389 )
              break;
            ++v389;
          }
          v117 += v387;
        }
        v385 += 4;
      }
      while ( 4LL * (unsigned int)(v426 - 1) + 4 != v385 );
      goto LABEL_247;
    }
LABEL_429:
    v117 = 0;
    goto LABEL_247;
  }
  v227 = *((_QWORD *)v433 + 5);
  v228 = *((_QWORD *)v433 + 6);
  v229 = *((_QWORD *)v433 + 7);
  if ( v426 <= 0 )
    goto LABEL_429;
  v230 = 0;
  v117 = 0;
  v402 = v16;
  do
  {
    *(_DWORD *)(v408 + 4 * v230) = v117;
    v231 = *(int *)(v228 + 4 * v230);
    v232 = v231 + *(_DWORD *)(v229 + 4 * v230);
    if ( (int)v231 < v232 )
    {
      v233 = (int)v231 + 1;
      v234 = v227 + 4 * (v231 - v233);
      do
      {
        while ( 1 )
        {
          v235 = *(_DWORD *)(v234 + 4 * v233);
          if ( v235 <= (int)v230 )
            break;
          src[v117] = v235;
          v236 = v233++;
          *((_DWORD *)this + 40) = ++v117;
          v232 = *(_DWORD *)(v228 + 4 * v230) + *(_DWORD *)(v229 + 4 * v230);
          if ( v232 <= v236 )
            goto LABEL_241;
        }
        v292 = v233++;
      }
      while ( v232 > v292 );
    }
LABEL_241:
    v237 = *(int *)(v406 + 4 * v230);
    if ( (int)v237 < (int)v237 + *(_DWORD *)(v407 + 4 * v230) )
    {
      v238 = *(_DWORD *)(v407 + 4 * v230);
      v239 = v117 + 1;
      v240 = v239 + (unsigned int)(v238 - 1) + 1;
      v241 = v409 + -4 * v239 + 4 * v237;
      v242 = &src[v117 - v239];
      do
      {
        v243 = *(_DWORD *)(v241 + 4 * v239);
        *((_DWORD *)this + 40) = v239;
        v242[v239++] = v419 + v243;
      }
      while ( v240 != v239 );
      v117 += v238;
    }
    ++v230;
  }
  while ( (unsigned int)(v426 - 1) + 1LL != v230 );
  v16 = v402;
  v70 = v416;
LABEL_247:
  if ( v431 > 0 )
  {
    v244 = v431 - 1;
    v245 = -(int)((v408 + 4LL * v426) >> 2) & 3;
    v246 = v245 + 3;
    if ( v245 + 3 < 5 )
      v246 = 5;
    if ( v246 > v244 )
    {
      v263 = v117;
      v264 = 0;
      goto LABEL_258;
    }
    if ( v245 )
    {
      v247 = v117;
      *(_DWORD *)(v408 + 4LL * v426) = v117;
      v248 = v117 + 1;
      v249 = 1;
      src[v117] = v419;
      if ( v245 != 1 )
      {
        *(_DWORD *)(v408 + 4LL * (v426 + 1)) = v248;
        v250 = v117 + 2;
        src[v248] = v419 + 1;
        if ( v245 == 2 )
        {
          v248 = v117 + 2;
          v249 = 2;
        }
        else
        {
          *(_DWORD *)(v408 + 4LL * (v426 + 2)) = v250;
          v248 = v117 + 3;
          src[v250] = v419 + 2;
          v249 = 3;
        }
      }
    }
    else
    {
      v248 = v117;
      v249 = 0;
      v247 = v117;
    }
    v251 = v245 + v247;
    v252 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
    v254 = v431 - v245;
    v255 = (char *)(v408 + 4 * (v245 + (__int64)v426));
    v256 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v419), 0);
    v257 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v249), 0), si128);
    v258 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v248), 0), si128);
    v259 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v260 = &src[v251];
    v261 = 0;
    do
    {
      ++v252;
      *(__m128i *)&v255[v261 * 4] = v258;
      v258 = _mm_add_epi32(v258, v259);
      v262 = _mm_add_epi32(v256, v257);
      v257 = _mm_add_epi32(v257, v259);
      *(__m128i *)&v260[v261] = v262;
      v261 += 4;
    }
    while ( v252 < v254 >> 2 );
    v263 = (v254 & 0xFFFFFFFC) + v248;
    v264 = (v254 & 0xFFFFFFFC) + v249;
    if ( (v254 & 0xFFFFFFFC) == v254 )
    {
      v266 = v408;
    }
    else
    {
LABEL_258:
      v265 = v263 + 1;
      v266 = v408;
      *(_DWORD *)(v408 + 4LL * (int)(v426 + v264)) = v263;
      src[v263] = v419 + v264;
      v267 = v264 + 1;
      if ( v431 > (int)(v264 + 1) )
      {
        *(_DWORD *)(v408 + 4LL * (int)(v426 + v267)) = v265;
        v268 = v263 + 2;
        src[v265] = v419 + v267;
        v269 = v264 + 2;
        if ( v431 > (int)(v264 + 2) )
        {
          *(_DWORD *)(v408 + 4LL * (int)(v426 + v269)) = v268;
          v270 = v263 + 3;
          src[v268] = v419 + v269;
          v271 = v264 + 3;
          if ( v431 > (int)(v264 + 3) )
          {
            *(_DWORD *)(v408 + 4LL * (int)(v426 + v271)) = v270;
            v272 = v263 + 4;
            src[v270] = v419 + v271;
            v273 = v264 + 4;
            if ( v431 > (int)(v264 + 4) )
            {
              v274 = v264 + 5;
              v275 = v263 + 5;
              *(_DWORD *)(v408 + 4LL * (int)(v426 + v273)) = v272;
              src[v272] = v419 + v273;
              if ( v431 > v274 )
              {
                *(_DWORD *)(v408 + 4LL * (v274 + v426)) = v275;
                src[v275] = v419 + v274;
              }
            }
          }
        }
      }
    }
    v117 += v431;
    v276 = v266 + 4LL * v419;
    *((_DWORD *)this + 40) = v117;
    v277 = -(int)(v276 >> 2) & 3;
    v278 = v277 + 3;
    if ( (unsigned int)(v277 + 3) < 5 )
      v278 = 5;
    if ( v244 < v278 )
    {
      v285 = 0;
    }
    else
    {
      v279 = 0;
      if ( (_DWORD)v277 )
      {
        *(_DWORD *)v276 = v117;
        v279 = 1;
        if ( (_DWORD)v277 != 1 )
        {
          *(_DWORD *)(v266 + 4LL * (v419 + 1)) = v117;
          v279 = 2;
          if ( (_DWORD)v277 != 2 )
          {
            *(_DWORD *)(v266 + 4LL * (v419 + 2)) = v117;
            v279 = 3;
          }
        }
      }
      v280 = v431 - v277;
      v281 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v117), 0);
      v282 = (__m128i *)(v408 + 4 * (v419 + v277));
      v283 = (unsigned int)(v431 - v277) >> 2;
      v284 = 0;
      do
      {
        ++v284;
        ++v282;
        v282[-1] = v281;
      }
      while ( v284 < v283 );
      v285 = (v280 & 0xFFFFFFFC) + v279;
      if ( (v280 & 0xFFFFFFFC) == v280 )
        goto LABEL_280;
    }
    *(_DWORD *)(v408 + 4LL * (int)(v419 + v285)) = v117;
    if ( (int)(v285 + 1) < v431 )
    {
      *(_DWORD *)(v408 + 4LL * (int)(v419 + v285 + 1)) = v117;
      if ( v431 > (int)(v285 + 2) )
      {
        *(_DWORD *)(v408 + 4LL * (int)(v419 + v285 + 2)) = v117;
        if ( v431 > (int)(v285 + 3) )
        {
          *(_DWORD *)(v408 + 4LL * (int)(v419 + v285 + 3)) = v117;
          v286 = v285 + 4;
          if ( (int)(v285 + 4) < v431 )
          {
            v287 = v285 + 5;
            *(_DWORD *)(v408 + 4LL * (int)(v419 + v286)) = v117;
            if ( v431 > v287 )
              *(_DWORD *)(v408 + 4LL * (v419 + v287)) = v117;
          }
        }
      }
    }
  }
LABEL_280:
  *(_DWORD *)(v408 + 4LL * v70) = v117;
LABEL_78:
  ClpCholeskyBase::symbolic2(this, (const int *)v408, src);
  v98 = *((int *)this + 41);
  if ( (int)v98 < *((_DWORD *)this + 40) )
  {
    if ( v98 > 0x1FFFFFFFFFFFFFFELL )
      __cxa_throw_bad_array_new_length();
    v125 = operator new[](4 * v98);
    v126 = *((_DWORD *)this + 41);
    v127 = *((char **)this + 13);
    if ( v126 && v127 != (char *)v125 )
    {
      v128 = v126 >> 3;
      if ( v126 >> 3 <= 0 )
      {
        v136 = (_DWORD *)v125;
        v135 = *((char **)this + 13);
      }
      else
      {
        if ( (v125 >= (unsigned __int64)(v127 + 32) || (unsigned __int64)v127 >= v125 + 32) && v128 > 1 )
        {
          v129 = v125;
          v130 = *((const __m128i **)this + 13);
          v131 = v128 - 1;
          do
          {
            v132 = _mm_loadu_si128(v130);
            v129 += 32LL;
            v130 += 2;
            v133 = _mm_loadu_si128(v130 - 1);
            *(__m128i *)(v129 - 32) = v132;
            *(__m128i *)(v129 - 16) = v133;
          }
          while ( v125 + 32 * v131 + 32 != v129 );
        }
        else
        {
          v394 = v125;
          v395 = *((int **)this + 13);
          v131 = v128 - 1;
          do
          {
            v396 = *v395;
            v394 += 32LL;
            v395 += 8;
            *(_DWORD *)(v394 - 32) = v396;
            *(_DWORD *)(v394 - 28) = *(v395 - 7);
            *(_DWORD *)(v394 - 24) = *(v395 - 6);
            *(_DWORD *)(v394 - 20) = *(v395 - 5);
            *(_DWORD *)(v394 - 16) = *(v395 - 4);
            *(_DWORD *)(v394 - 12) = *(v395 - 3);
            *(_DWORD *)(v394 - 8) = *(v395 - 2);
            *(_DWORD *)(v394 - 4) = *(v395 - 1);
          }
          while ( v125 + 32 * (v131 + 1) != v394 );
        }
        v134 = 32 * ((int)v131 + 1LL);
        v135 = &v127[v134];
        v136 = (_DWORD *)(v125 + v134);
      }
      switch ( v126 % 8 )
      {
        case 1:
          goto LABEL_230;
        case 2:
          goto LABEL_229;
        case 3:
          goto LABEL_228;
        case 4:
          goto LABEL_227;
        case 5:
          goto LABEL_226;
        case 6:
          goto LABEL_225;
        case 7:
          v136[6] = *((_DWORD *)v135 + 6);
LABEL_225:
          v136[5] = *((_DWORD *)v135 + 5);
LABEL_226:
          v136[4] = *((_DWORD *)v135 + 4);
LABEL_227:
          v136[3] = *((_DWORD *)v135 + 3);
LABEL_228:
          v136[2] = *((_DWORD *)v135 + 2);
LABEL_229:
          v136[1] = *((_DWORD *)v135 + 1);
LABEL_230:
          *v136 = *(_DWORD *)v135;
          break;
        default:
          break;
      }
    }
    if ( v127 )
    {
      v401 = (void *)v125;
      operator delete[](v127);
      v125 = (unsigned __int64)v401;
    }
    *((_QWORD *)this + 13) = v125;
  }
  operator delete[](v16);
  operator delete[]((void *)v408);
  operator delete[](src);
  v99 = *((_DWORD *)this + 11);
  if ( v99 <= 0 )
  {
    v103 = 0.0;
  }
  else
  {
    v100 = *((int **)this + 12);
    if ( v99 <= 2 )
    {
      v103 = 0.0;
      v107 = 0;
    }
    else
    {
      v101 = *v100;
      v102 = 2;
      v103 = 0.0;
      do
      {
        v104 = v100[v102 - 1] - v101;
        v101 = v100[v102];
        v105 = v103 + (double)v104 * ((double)v104 + 2.0);
        v106 = (double)(v101 - v100[v102 - 1]);
        v107 = (int)v102;
        v102 += 2;
        v103 = v105 + v106 * (v106 + 2.0);
      }
      while ( 2LL * ((unsigned int)(v99 - 3) >> 1) + 4 != v102 );
    }
    do
    {
      v108 = v100[v107 + 1] - v100[v107];
      ++v107;
      v103 = v103 + (double)v108 * ((double)v108 + 2.0);
    }
    while ( v99 > (int)v107 );
  }
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 344LL) + 104LL) > 0 )
  {
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v139 = (std::ostream *)std::ostream::_M_insert<double>();
    v140 = *(_BYTE **)((char *)v139 + *(_QWORD *)(*(_QWORD *)v139 - 24LL) + 240);
    if ( !v140 )
      std::__throw_bad_cast();
    if ( v140[56] )
    {
      v141 = v140[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v141 = 10;
      v331 = *(__int64 (__fastcall **)())(*(_QWORD *)v140 + 48LL);
      if ( v331 != std::ctype<char>::do_widen )
        v141 = ((__int64 (__fastcall *)(_BYTE *, __int64, double))v331)(v140, 10, v103);
    }
    v142 = (std::ostream *)std::ostream::put(v139, v141);
    std::ostream::flush(v142);
  }
  v109 = *((int *)this + 40);
  if ( v109 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v110 = operator new[](8 * v109);
  v111 = *((int *)this + 11);
  *((_QWORD *)this + 11) = v110;
  if ( v111 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v112 = operator new[](8 * v111);
  v113 = *((int *)this + 11);
  *((_QWORD *)this + 16) = v112;
  if ( v113 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  *((_QWORD *)this + 15) = operator new[](8 * v113);
  return 0;
}

