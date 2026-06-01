__int64 __fastcall sub_1694D80(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rsi
  __m128i si128; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // eax
  void *v23; // rsi
  char *v24; // rax
  char *v25; // r8
  signed __int64 v26; // rdx
  signed __int64 v27; // r12
  unsigned __int8 v28; // r12
  unsigned __int64 v29; // rax
  unsigned int v30; // ebx
  unsigned __int64 v31; // r12
  unsigned __int8 *v32; // rax
  unsigned __int8 *v33; // rdx
  __int64 v34; // rax
  unsigned __int8 *v35; // rax
  signed __int64 v36; // r8
  _BYTE *v37; // rsi
  _QWORD *v38; // rax
  unsigned __int8 *v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rax
  void **v42; // r8
  unsigned __int8 *v43; // rdi
  __int64 v44; // rax
  void *v45; // rdi
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // rdx
  __int64 v48; // rax
  unsigned __int8 *v49; // r12
  _BYTE *v50; // rdx
  __int64 v51; // rax
  unsigned __int8 *v52; // rax
  _QWORD *v53; // rax
  unsigned __int8 *v54; // rdx
  __int64 v55; // r8
  __int64 v56; // rax
  void **v57; // r12
  unsigned __int8 *v58; // rdi
  __int64 v59; // rax
  void *v60; // rdi
  unsigned __int64 v61; // rcx
  unsigned __int8 *v62; // r12
  _BYTE *v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rcx
  unsigned __int8 *v67; // rax
  __int64 v68; // rsi
  unsigned __int64 v69; // rdi
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdi
  size_t v75; // r13
  unsigned __int64 v76; // rdi
  void *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  _QWORD *v83; // rax
  signed __int64 v84; // r9
  _BYTE *v85; // rsi
  __int64 v86; // r8
  unsigned __int8 *v87; // rax
  _QWORD *v88; // rax
  _BYTE *v89; // rdx
  __int64 v90; // r9
  __int64 v91; // rax
  void **v92; // r8
  _BYTE *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rdx
  unsigned __int8 *v102; // rax
  _BYTE *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // r12
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // rdx
  unsigned __int8 *v113; // r12
  __int64 v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r9
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rax
  _QWORD *v120; // rax
  _BYTE *v121; // r8
  __int64 v122; // r9
  unsigned __int8 *v123; // rax
  _QWORD *v124; // rax
  _BYTE *v125; // rdx
  __int64 v126; // r8
  __int64 v127; // rax
  _QWORD *v128; // r12
  _BYTE *v129; // rdi
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // rdx
  unsigned __int8 *v138; // rax
  _BYTE *v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rdx
  __int64 v142; // rcx
  __int64 v143; // r8
  __int64 v144; // r9
  void *v145; // rax
  _QWORD *v146; // rax
  __int64 v147; // rsi
  __int64 v148; // rcx
  unsigned __int64 v149; // rdi
  unsigned __int64 v150; // rdx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rax
  _QWORD *v156; // rax
  __int64 v157; // rdx
  unsigned __int8 *v158; // r12
  size_t v159; // rdx
  size_t v160; // rdx
  __int64 v161; // rdx
  size_t v162; // rdx
  __int64 v163; // rdx
  int v164; // eax
  __int64 v165; // rdx
  int v166; // eax
  __int64 v167; // rdx
  int v168; // eax
  __int64 v169; // rdx
  int v170; // eax
  __int64 v171; // rdx
  int v172; // eax
  __int64 v173; // rdx
  int v174; // eax
  __int64 v175; // rdx
  int v176; // eax
  __int64 v177; // rcx
  int v178; // eax
  __int64 v179; // rcx
  int v180; // eax
  __int64 v181; // rsi
  int v182; // eax
  __int64 v183; // rcx
  int v184; // eax
  __int64 v185; // rdx
  int v186; // eax
  __int64 v187; // rdx
  int v188; // eax
  __int64 v189; // rdx
  int v190; // eax
  __int64 v191; // rax
  __int64 v192; // rdx
  char *v193; // rsi
  char *v194; // rdx
  char *v195; // rdi
  __int64 v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rsi
  __int64 v199; // rdx
  void *v200; // rdi
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rsi
  __int64 v204; // rdx
  void *v205; // rdi
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rsi
  __int64 v209; // rax
  void *v210; // rdi
  __int64 v211; // rax
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rdx
  void *v215; // rdi
  __int64 v216; // rax
  __int64 v217; // r12
  __int64 v218; // rsi
  __int64 v219; // r12
  void *v220; // rdi
  __int64 v221; // rax
  __int64 v222; // rax
  _QWORD *v223; // rcx
  _QWORD *v224; // rax
  _QWORD *v225; // rdi
  __int64 v226; // rax
  __int64 v227; // rdx
  _QWORD *v228; // rcx
  _QWORD *v229; // rdx
  _QWORD *v230; // rdi
  __int64 v231; // rax
  __int64 v232; // rax
  __int64 v233; // rsi
  __int64 v234; // rax
  void *v235; // rdi
  __int64 v236; // rax
  __int64 v237; // rdx
  __int64 v238; // r8
  __int64 v239; // rdx
  void *v240; // rdi
  __int64 v241; // rax
  __int64 v242; // rcx
  _QWORD *v243; // r8
  _QWORD *v244; // rcx
  _QWORD *v245; // rdi
  __int64 v246; // rax
  __int64 v247; // rax
  _QWORD *v248; // r8
  _QWORD *v249; // rax
  _QWORD *v250; // rdi
  __int64 v251; // rax
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // rcx
  void *v255; // rdi
  __int64 v256; // rax
  __int64 v257; // rdx
  _QWORD *v258; // rcx
  _QWORD *v259; // rdx
  _QWORD *v260; // rdi
  void *v261; // [rsp+0h] [rbp-208h]
  char v262; // [rsp+0h] [rbp-208h]
  void *v263; // [rsp+0h] [rbp-208h]
  void *v264; // [rsp+0h] [rbp-208h]
  char *v265; // [rsp+0h] [rbp-208h]
  void *v266; // [rsp+0h] [rbp-208h]
  _BYTE *v267; // [rsp+0h] [rbp-208h]
  void *v268; // [rsp+0h] [rbp-208h]
  void *v269; // [rsp+0h] [rbp-208h]
  void *v270; // [rsp+0h] [rbp-208h]
  void *v271; // [rsp+0h] [rbp-208h]
  char *v272; // [rsp+0h] [rbp-208h]
  void *v273; // [rsp+0h] [rbp-208h]
  void **v274; // [rsp+0h] [rbp-208h]
  void *v275; // [rsp+0h] [rbp-208h]
  void *v276; // [rsp+0h] [rbp-208h]
  void *v277; // [rsp+0h] [rbp-208h]
  void *v278; // [rsp+0h] [rbp-208h]
  void **v279; // [rsp+0h] [rbp-208h]
  char *v280; // [rsp+0h] [rbp-208h]
  int v281; // [rsp+0h] [rbp-208h]
  void *v282; // [rsp+0h] [rbp-208h]
  void *v283; // [rsp+0h] [rbp-208h]
  void *v284; // [rsp+0h] [rbp-208h]
  void *v285; // [rsp+0h] [rbp-208h]
  void *v286; // [rsp+0h] [rbp-208h]
  void *v287; // [rsp+0h] [rbp-208h]
  void *v288; // [rsp+0h] [rbp-208h]
  unsigned __int8 *v289; // [rsp+0h] [rbp-208h]
  char *v290; // [rsp+0h] [rbp-208h]
  unsigned __int8 *v291; // [rsp+0h] [rbp-208h]
  void *v292; // [rsp+0h] [rbp-208h]
  void *v293; // [rsp+0h] [rbp-208h]
  unsigned __int8 *v294; // [rsp+0h] [rbp-208h]
  _QWORD *v295; // [rsp+0h] [rbp-208h]
  unsigned __int8 *v296; // [rsp+0h] [rbp-208h]
  _QWORD *v297; // [rsp+0h] [rbp-208h]
  void *v298; // [rsp+0h] [rbp-208h]
  _QWORD *v299; // [rsp+0h] [rbp-208h]
  _QWORD *v300; // [rsp+0h] [rbp-208h]
  _QWORD *v301; // [rsp+0h] [rbp-208h]
  __int64 v302; // [rsp+10h] [rbp-1F8h]
  char *v303; // [rsp+10h] [rbp-1F8h]
  _BYTE *v304; // [rsp+10h] [rbp-1F8h]
  unsigned __int64 v305; // [rsp+10h] [rbp-1F8h]
  _BYTE *v306; // [rsp+10h] [rbp-1F8h]
  unsigned __int8 *v307; // [rsp+10h] [rbp-1F8h]
  unsigned __int8 *v308; // [rsp+10h] [rbp-1F8h]
  unsigned __int8 *v309; // [rsp+10h] [rbp-1F8h]
  __int64 v310; // [rsp+10h] [rbp-1F8h]
  __int64 v311; // [rsp+18h] [rbp-1F0h]
  __int64 v312; // [rsp+18h] [rbp-1F0h]
  __int64 v313; // [rsp+18h] [rbp-1F0h]
  _BYTE *v314; // [rsp+18h] [rbp-1F0h]
  __int64 v315; // [rsp+18h] [rbp-1F0h]
  size_t v316; // [rsp+18h] [rbp-1F0h]
  unsigned __int8 *v317; // [rsp+18h] [rbp-1F0h]
  __int64 v318; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v319; // [rsp+18h] [rbp-1F0h]
  _QWORD *v320; // [rsp+18h] [rbp-1F0h]
  __int64 v321; // [rsp+18h] [rbp-1F0h]
  __int64 v322; // [rsp+18h] [rbp-1F0h]
  __int64 v323; // [rsp+18h] [rbp-1F0h]
  unsigned __int64 v324; // [rsp+18h] [rbp-1F0h]
  __int64 v325; // [rsp+18h] [rbp-1F0h]
  __int64 v326; // [rsp+18h] [rbp-1F0h]
  _BYTE *v327; // [rsp+20h] [rbp-1E8h]
  char *v328; // [rsp+20h] [rbp-1E8h]
  __int64 v329; // [rsp+20h] [rbp-1E8h]
  __int64 v330; // [rsp+20h] [rbp-1E8h]
  _QWORD *v331; // [rsp+20h] [rbp-1E8h]
  __int64 v332; // [rsp+20h] [rbp-1E8h]
  __int64 v333; // [rsp+20h] [rbp-1E8h]
  unsigned __int8 *v334; // [rsp+20h] [rbp-1E8h]
  _QWORD *v335; // [rsp+20h] [rbp-1E8h]
  unsigned __int8 *v336; // [rsp+20h] [rbp-1E8h]
  signed __int64 v337; // [rsp+20h] [rbp-1E8h]
  __int64 v338; // [rsp+28h] [rbp-1E0h]
  unsigned __int8 *v339; // [rsp+28h] [rbp-1E0h]
  _BYTE *v340; // [rsp+28h] [rbp-1E0h]
  _QWORD *v341; // [rsp+28h] [rbp-1E0h]
  __int64 v342; // [rsp+28h] [rbp-1E0h]
  __int64 v343; // [rsp+30h] [rbp-1D8h]
  __int64 v344; // [rsp+30h] [rbp-1D8h]
  unsigned __int8 *v345; // [rsp+30h] [rbp-1D8h]
  _QWORD *v346; // [rsp+38h] [rbp-1D0h]
  __int64 v347; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v348; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v349; // [rsp+58h] [rbp-1B0h] BYREF
  void *src; // [rsp+60h] [rbp-1A8h]
  size_t v351; // [rsp+68h] [rbp-1A0h]
  _QWORD v352[2]; // [rsp+70h] [rbp-198h] BYREF
  void *v353; // [rsp+80h] [rbp-188h]
  size_t v354; // [rsp+88h] [rbp-180h]
  _QWORD v355[2]; // [rsp+90h] [rbp-178h] BYREF
  void *v356; // [rsp+A0h] [rbp-168h] BYREF
  size_t v357; // [rsp+A8h] [rbp-160h]
  _QWORD v358[2]; // [rsp+B0h] [rbp-158h] BYREF
  __m128i v359; // [rsp+C0h] [rbp-148h] BYREF
  _QWORD v360[2]; // [rsp+D0h] [rbp-138h] BYREF
  void *ptr; // [rsp+E0h] [rbp-128h] BYREF
  size_t n[2]; // [rsp+E8h] [rbp-120h]
  _BYTE v363[72]; // [rsp+F8h] [rbp-110h] BYREF
  __int64 (__fastcall **v364)(); // [rsp+140h] [rbp-C8h] BYREF
  int v365; // [rsp+148h] [rbp-C0h]
  __int128 v366; // [rsp+150h] [rbp-B8h]
  unsigned __int8 *v367; // [rsp+160h] [rbp-A8h]
  __int64 v368; // [rsp+168h] [rbp-A0h]
  void **p_ptr; // [rsp+170h] [rbp-98h]
  char v370; // [rsp+1B8h] [rbp-50h]
  unsigned int v371; // [rsp+1C0h] [rbp-48h]
  char v372; // [rsp+1C4h] [rbp-44h]

  v2 = *(_QWORD *)(a2 + 8);
  result = 1;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
  {
    v347 = 0;
    v6 = sub_F6A430(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL));
    v10 = v6;
    if ( !v6 )
      return 1;
    if ( *(char *)(v6 + 18) < 0 )
      return 1;
    v302 = sub_F68450(v6, a2, v7, v8, v9);
    if ( (v302 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return 1;
    v15 = &v347;
    if ( !sub_F62670(*(_QWORD *)(v302 & 0xFFFFFFFFFFFFFFF0LL), &v347, v11, v12, v13, v14) )
      return 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    ptr = v363;
    *(__m128i *)n = si128;
    v17 = sub_BFB9F0(a2);
    if ( ((*(_WORD *)v17 + 423) & 0x1FFu) <= 4
      && (v73 = sub_BFBC70(*(_QWORD *)(v17 + 32))) != 0
      && (*(_BYTE *)(v73 + 28) & 0x7Fu) - 34 <= 5 )
    {
      v74 = *(_QWORD *)(v73 + 40);
      v75 = 0;
      if ( (v74 & 7) != 0 )
      {
        v76 = 0;
      }
      else
      {
        v76 = v74 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v76 )
        {
          v15 = *(__int64 **)(v76 + 16);
          v76 = 0;
          v75 = *(unsigned int *)v15;
          v77 = v15 + 2;
          n[0] = 0;
          if ( n[1] < v75 )
          {
            v15 = (__int64 *)v363;
            v263 = v77;
            sub_2236E10(&ptr, v363, v75, 1);
            v76 = n[0];
            v77 = v263;
          }
          if ( v75 )
          {
            v15 = (__int64 *)v77;
            memcpy((char *)ptr + v76, v77, v75);
            v76 = n[0];
          }
        }
      }
      v261 = &dword_0 + 1;
      n[0] = v75 + v76;
    }
    else
    {
      si128.m128i_i64[0] = 0;
      v366 = 0;
      v365 = 2;
      v364 = &off_2BEBEE0;
      LOBYTE(v368) = 0;
      HIDWORD(v368) = 1;
      v367 = nullptr;
      p_ptr = &ptr;
      sub_227B8B0(&v364, 0, 0, 0);
      v15 = (__int64 *)&v364;
      v359.m128i_i64[0] = sub_16043A0(*(_QWORD **)(a1 + 248), *(_QWORD **)(a1 + 240), v18, v19, v20, (__int64 *)"\n");
      v359.m128i_i64[1] = v21;
      sub_F07C00((char *)a2, (__int64)&v364, 0, &v359, 0, 0, "\n", 1);
      v364 = (__int64 (__fastcall **)())&unk_2C76288;
      sub_227B7A0(&v364);
      v261 = nullptr;
    }
    v22 = sub_EEB7E0(a2, (__int64)v15, *(double *)si128.m128i_i64);
    sub_168B9F0((__int64)&v364, (__int64 *)(a1 + 8), v22, 0xDDCu, 0);
    if ( v370 )
    {
      v32 = v367;
      if ( !v367 )
      {
        v167 = v368;
        v168 = *(_DWORD *)(v368 + 14976);
        if ( v168 )
        {
          v196 = (unsigned int)(v168 - 1);
          *(_DWORD *)(v368 + 14976) = v196;
          v32 = *(unsigned __int8 **)(v167 + 8 * v196 + 14848);
          v197 = *((unsigned int *)v32 + 134);
          *v32 = 0;
          v198 = *((_QWORD *)v32 + 66);
          *((_DWORD *)v32 + 106) = 0;
          v199 = v198 + (v197 << 6);
          while ( v198 != v199 )
          {
            while ( 1 )
            {
              v199 -= 64;
              v200 = *(void **)(v199 + 24);
              if ( v200 == (void *)(v199 + 40) )
                break;
              v338 = v199;
              v317 = v32;
              operator delete(v200);
              v199 = v338;
              v32 = v317;
              if ( v198 == v338 )
                goto LABEL_219;
            }
          }
LABEL_219:
          *((_DWORD *)v32 + 134) = 0;
        }
        else
        {
          v32 = (unsigned __int8 *)operator new(0x3A0u);
          *v32 = 0;
          *((_QWORD *)v32 + 12) = v32 + 112;
          *((_QWORD *)v32 + 16) = v32 + 144;
          *((_QWORD *)v32 + 20) = v32 + 176;
          *((_QWORD *)v32 + 24) = v32 + 208;
          *((_QWORD *)v32 + 28) = v32 + 240;
          *((_QWORD *)v32 + 32) = v32 + 272;
          *((_QWORD *)v32 + 36) = v32 + 304;
          *((_QWORD *)v32 + 40) = v32 + 336;
          *((_QWORD *)v32 + 44) = v32 + 368;
          *((_QWORD *)v32 + 48) = v32 + 400;
          *((_QWORD *)v32 + 52) = v32 + 432;
          *((_QWORD *)v32 + 13) = 0;
          v32[112] = 0;
          *((_QWORD *)v32 + 17) = 0;
          v32[144] = 0;
          *((_QWORD *)v32 + 21) = 0;
          v32[176] = 0;
          *((_QWORD *)v32 + 25) = 0;
          v32[208] = 0;
          *((_QWORD *)v32 + 29) = 0;
          v32[240] = 0;
          *((_QWORD *)v32 + 33) = 0;
          v32[272] = 0;
          *((_QWORD *)v32 + 37) = 0;
          v32[304] = 0;
          *((_QWORD *)v32 + 41) = 0;
          v32[336] = 0;
          *((_QWORD *)v32 + 45) = 0;
          v32[368] = 0;
          *((_QWORD *)v32 + 49) = 0;
          v32[400] = 0;
          *((_QWORD *)v32 + 53) = 0x800000000LL;
          *((_QWORD *)v32 + 66) = v32 + 544;
          *((_QWORD *)v32 + 67) = 0x600000000LL;
        }
        v367 = v32;
      }
      v32[*v32 + 1] = 2;
      v33 = v367;
      v34 = *v367;
      *v367 = v34 + 1;
      *(_QWORD *)&v33[8 * v34 + 16] = v261;
    }
    else
    {
      if ( !v372 )
        goto LABEL_12;
      v95 = sub_168B9E0(&v364);
      v99 = v366;
      if ( (_QWORD)v366 )
      {
        v311 = v95;
        v99 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v366 + 32LL))(v366);
        v95 = v311;
      }
      v359.m128i_i64[0] = v99;
      v100 = sub_1587BC0(v95, v359.m128i_i64, v95, v96, v97, v98);
      v101 = *v100 + 32LL * v371;
      v102 = *(unsigned __int8 **)(v101 + 8);
      if ( !v102 )
      {
        v177 = *(_QWORD *)(v101 + 16);
        v178 = *(_DWORD *)(v177 + 14976);
        if ( v178 )
        {
          v251 = (unsigned int)(v178 - 1);
          *(_DWORD *)(v177 + 14976) = v251;
          v102 = *(unsigned __int8 **)(v177 + 8 * v251 + 14848);
          v252 = *((unsigned int *)v102 + 134);
          *v102 = 0;
          v253 = *((_QWORD *)v102 + 66);
          *((_DWORD *)v102 + 106) = 0;
          v254 = v253 + (v252 << 6);
          while ( v253 != v254 )
          {
            while ( 1 )
            {
              v254 -= 64;
              v255 = *(void **)(v254 + 24);
              if ( v255 == (void *)(v254 + 40) )
                break;
              v344 = v254;
              v342 = v253;
              v336 = v102;
              v325 = v101;
              operator delete(v255);
              v253 = v342;
              v254 = v344;
              v101 = v325;
              v102 = v336;
              if ( v342 == v344 )
                goto LABEL_274;
            }
          }
LABEL_274:
          *((_DWORD *)v102 + 134) = 0;
        }
        else
        {
          v315 = v101;
          v102 = (unsigned __int8 *)operator new(0x3A0u);
          *v102 = 0;
          *((_QWORD *)v102 + 12) = v102 + 112;
          *((_QWORD *)v102 + 16) = v102 + 144;
          *((_QWORD *)v102 + 20) = v102 + 176;
          *((_QWORD *)v102 + 24) = v102 + 208;
          *((_QWORD *)v102 + 28) = v102 + 240;
          *((_QWORD *)v102 + 32) = v102 + 272;
          *((_QWORD *)v102 + 36) = v102 + 304;
          *((_QWORD *)v102 + 40) = v102 + 336;
          *((_QWORD *)v102 + 44) = v102 + 368;
          *((_QWORD *)v102 + 48) = v102 + 400;
          *((_QWORD *)v102 + 52) = v102 + 432;
          *((_QWORD *)v102 + 13) = 0;
          v102[112] = 0;
          *((_QWORD *)v102 + 17) = 0;
          v102[144] = 0;
          *((_QWORD *)v102 + 21) = 0;
          v102[176] = 0;
          *((_QWORD *)v102 + 25) = 0;
          v102[208] = 0;
          *((_QWORD *)v102 + 29) = 0;
          v102[240] = 0;
          *((_QWORD *)v102 + 33) = 0;
          v102[272] = 0;
          *((_QWORD *)v102 + 37) = 0;
          v102[304] = 0;
          *((_QWORD *)v102 + 41) = 0;
          v102[336] = 0;
          *((_QWORD *)v102 + 45) = 0;
          v102[368] = 0;
          *((_QWORD *)v102 + 49) = 0;
          v102[400] = 0;
          *((_QWORD *)v102 + 53) = 0x800000000LL;
          v101 = v315;
          *((_QWORD *)v102 + 66) = v102 + 544;
          *((_QWORD *)v102 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v101 + 8) = v102;
      }
      v102[*v102 + 1] = 2;
      v103 = *(_BYTE **)(v101 + 8);
      v104 = (unsigned __int8)*v103;
      *v103 = v104 + 1;
      *(_QWORD *)&v103[8 * v104 + 16] = v261;
    }
    if ( v370 )
    {
      v35 = v367;
      v36 = n[0];
      v37 = ptr;
      if ( !v367 )
      {
        v171 = v368;
        v172 = *(_DWORD *)(v368 + 14976);
        if ( v172 )
        {
          v211 = (unsigned int)(v172 - 1);
          *(_DWORD *)(v368 + 14976) = v211;
          v35 = *(unsigned __int8 **)(v171 + 8 * v211 + 14848);
          v212 = *((unsigned int *)v35 + 134);
          *v35 = 0;
          v213 = *((_QWORD *)v35 + 66);
          *((_DWORD *)v35 + 106) = 0;
          v214 = v213 + (v212 << 6);
          while ( v213 != v214 )
          {
            while ( 1 )
            {
              v214 -= 64;
              v215 = *(void **)(v214 + 24);
              if ( v215 == (void *)(v214 + 40) )
                break;
              v343 = v213;
              v339 = v35;
              v330 = v214;
              v293 = (void *)v36;
              operator delete(v215);
              v214 = v330;
              v213 = v343;
              v36 = (signed __int64)v293;
              v35 = v339;
              if ( v343 == v330 )
                goto LABEL_234;
            }
          }
LABEL_234:
          *((_DWORD *)v35 + 134) = 0;
        }
        else
        {
          v314 = ptr;
          v282 = (void *)n[0];
          v35 = (unsigned __int8 *)operator new(0x3A0u);
          *v35 = 0;
          *((_QWORD *)v35 + 12) = v35 + 112;
          *((_QWORD *)v35 + 16) = v35 + 144;
          *((_QWORD *)v35 + 20) = v35 + 176;
          *((_QWORD *)v35 + 24) = v35 + 208;
          *((_QWORD *)v35 + 28) = v35 + 240;
          *((_QWORD *)v35 + 32) = v35 + 272;
          *((_QWORD *)v35 + 36) = v35 + 304;
          *((_QWORD *)v35 + 40) = v35 + 336;
          *((_QWORD *)v35 + 44) = v35 + 368;
          *((_QWORD *)v35 + 48) = v35 + 400;
          *((_QWORD *)v35 + 52) = v35 + 432;
          *((_QWORD *)v35 + 13) = 0;
          v35[112] = 0;
          *((_QWORD *)v35 + 17) = 0;
          v35[144] = 0;
          *((_QWORD *)v35 + 21) = 0;
          v35[176] = 0;
          *((_QWORD *)v35 + 25) = 0;
          v35[208] = 0;
          *((_QWORD *)v35 + 29) = 0;
          v35[240] = 0;
          *((_QWORD *)v35 + 33) = 0;
          v35[272] = 0;
          *((_QWORD *)v35 + 37) = 0;
          v35[304] = 0;
          *((_QWORD *)v35 + 41) = 0;
          v35[336] = 0;
          *((_QWORD *)v35 + 45) = 0;
          v35[368] = 0;
          *((_QWORD *)v35 + 49) = 0;
          v35[400] = 0;
          *((_QWORD *)v35 + 53) = 0x800000000LL;
          v36 = (signed __int64)v282;
          *((_QWORD *)v35 + 66) = v35 + 544;
          *((_QWORD *)v35 + 67) = 0x600000000LL;
          v37 = v314;
        }
        v367 = v35;
      }
      v35[*v35 + 1] = 0;
      src = v352;
      if ( &v37[v36] && !v37 )
        goto LABEL_285;
      if ( (unsigned __int64)v36 > 0xF )
      {
        if ( v36 < 0 )
          goto LABEL_284;
        v273 = (void *)v36;
        v38 = (_QWORD *)operator new(v36 + 1);
        v36 = (signed __int64)v273;
        src = v38;
        v352[0] = v273;
      }
      else
      {
        if ( v36 == 1 )
        {
          LOBYTE(v352[0]) = *v37;
          v38 = v352;
          goto LABEL_29;
        }
        v38 = v352;
        if ( !v36 )
        {
LABEL_29:
          v351 = v36;
          *((_BYTE *)v38 + v36) = 0;
          v39 = v367;
          v40 = *v367;
          *v367 = v40 + 1;
          v41 = 32 * (v40 + 3);
          v42 = (void **)&v39[v41];
          v43 = *(unsigned __int8 **)&v39[v41];
          if ( src == v352 )
          {
            v159 = v351;
            if ( v351 )
            {
              if ( v351 == 1 )
              {
                *v43 = v352[0];
                v159 = v351;
                v43 = (unsigned __int8 *)*v42;
              }
              else
              {
                v274 = v42;
                memcpy(v43, src, v351);
                v42 = v274;
                v159 = v351;
                v43 = (unsigned __int8 *)*v274;
              }
            }
            v42[1] = (void *)v159;
            v43[v159] = 0;
            v43 = (unsigned __int8 *)src;
          }
          else
          {
            if ( v43 == &v39[v41 + 16] )
            {
              *v42 = src;
              v42[1] = (void *)v351;
              v42[2] = (void *)v352[0];
            }
            else
            {
              v44 = *(_QWORD *)&v39[32 * (int)v40 + 112];
              *v42 = src;
              v42[1] = (void *)v351;
              v42[2] = (void *)v352[0];
              if ( v43 )
              {
                src = v43;
                v352[0] = v44;
                goto LABEL_33;
              }
            }
            v43 = (unsigned __int8 *)v352;
            src = v352;
          }
LABEL_33:
          v351 = 0;
          *v43 = 0;
          v45 = src;
          if ( src == v352 )
            goto LABEL_35;
          goto LABEL_34;
        }
      }
      v271 = (void *)v36;
      memcpy(v38, v37, v36);
      v38 = src;
      v36 = (signed __int64)v271;
      goto LABEL_29;
    }
    if ( !v372 )
      goto LABEL_12;
    v78 = sub_168B9E0(&v364);
    v82 = v366;
    if ( (_QWORD)v366 )
    {
      v264 = (void *)v78;
      v82 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v366 + 32LL))(v366);
      v78 = (__int64)v264;
    }
    v348 = v82;
    v83 = sub_1587BC0(v78, &v348, v78, v79, v80, v81);
    v84 = n[0];
    v85 = ptr;
    v86 = *v83 + 32LL * v371;
    v87 = *(unsigned __int8 **)(v86 + 8);
    if ( !v87 )
    {
      v189 = *(_QWORD *)(v86 + 16);
      v190 = *(_DWORD *)(v189 + 14976);
      if ( v190 )
      {
        v256 = (unsigned int)(v190 - 1);
        *(_DWORD *)(v189 + 14976) = v256;
        v87 = *(unsigned __int8 **)(v189 + 8 * v256 + 14848);
        v257 = *((unsigned int *)v87 + 134);
        *v87 = 0;
        v258 = *((_QWORD **)v87 + 66);
        *((_DWORD *)v87 + 106) = 0;
        v259 = &v258[8 * v257];
        while ( v258 != v259 )
        {
          while ( 1 )
          {
            v259 -= 8;
            v260 = (_QWORD *)v259[3];
            if ( v260 == v259 + 5 )
              break;
            v346 = v258;
            v345 = v87;
            v337 = v84;
            v326 = v86;
            v301 = v259;
            operator delete(v260);
            v259 = v301;
            v258 = v346;
            v86 = v326;
            v84 = v337;
            v87 = v345;
            if ( v346 == v301 )
              goto LABEL_279;
          }
        }
LABEL_279:
        *((_DWORD *)v87 + 134) = 0;
      }
      else
      {
        v327 = ptr;
        v316 = n[0];
        v288 = (void *)v86;
        v87 = (unsigned __int8 *)operator new(0x3A0u);
        *v87 = 0;
        *((_QWORD *)v87 + 12) = v87 + 112;
        *((_QWORD *)v87 + 16) = v87 + 144;
        *((_QWORD *)v87 + 20) = v87 + 176;
        *((_QWORD *)v87 + 24) = v87 + 208;
        *((_QWORD *)v87 + 28) = v87 + 240;
        *((_QWORD *)v87 + 32) = v87 + 272;
        *((_QWORD *)v87 + 36) = v87 + 304;
        *((_QWORD *)v87 + 40) = v87 + 336;
        *((_QWORD *)v87 + 44) = v87 + 368;
        *((_QWORD *)v87 + 48) = v87 + 400;
        *((_QWORD *)v87 + 52) = v87 + 432;
        *((_QWORD *)v87 + 13) = 0;
        v87[112] = 0;
        *((_QWORD *)v87 + 17) = 0;
        v87[144] = 0;
        *((_QWORD *)v87 + 21) = 0;
        v87[176] = 0;
        *((_QWORD *)v87 + 25) = 0;
        v87[208] = 0;
        *((_QWORD *)v87 + 29) = 0;
        v87[240] = 0;
        *((_QWORD *)v87 + 33) = 0;
        v87[272] = 0;
        *((_QWORD *)v87 + 37) = 0;
        v87[304] = 0;
        *((_QWORD *)v87 + 41) = 0;
        v87[336] = 0;
        *((_QWORD *)v87 + 45) = 0;
        v87[368] = 0;
        *((_QWORD *)v87 + 49) = 0;
        v87[400] = 0;
        *((_QWORD *)v87 + 53) = 0x800000000LL;
        v86 = (__int64)v288;
        *((_QWORD *)v87 + 66) = v87 + 544;
        v84 = v316;
        *((_QWORD *)v87 + 67) = 0x600000000LL;
        v85 = v327;
      }
      *(_QWORD *)(v86 + 8) = v87;
    }
    v87[*v87 + 1] = 0;
    v353 = v355;
    if ( &v85[v84] && !v85 )
      goto LABEL_285;
    if ( (unsigned __int64)v84 > 0xF )
    {
      v313 = v86;
      if ( v84 < 0 )
        goto LABEL_284;
      v277 = (void *)v84;
      v88 = (_QWORD *)operator new(v84 + 1);
      v84 = (signed __int64)v277;
      v86 = v313;
      v353 = v88;
      v355[0] = v277;
    }
    else
    {
      if ( v84 == 1 )
      {
        LOBYTE(v355[0]) = *v85;
        v88 = v355;
        goto LABEL_82;
      }
      v88 = v355;
      if ( !v84 )
      {
LABEL_82:
        v354 = v84;
        *((_BYTE *)v88 + v84) = 0;
        v89 = *(_BYTE **)(v86 + 8);
        v90 = (unsigned __int8)*v89;
        *v89 = v90 + 1;
        v91 = 32 * (v90 + 3);
        v92 = (void **)&v89[v91];
        v93 = *(_BYTE **)&v89[v91];
        if ( v353 == v355 )
        {
          v162 = v354;
          if ( v354 )
          {
            if ( v354 == 1 )
            {
              *v93 = v355[0];
              v162 = v354;
              v93 = *v92;
            }
            else
            {
              v279 = v92;
              memcpy(v93, v353, v354);
              v92 = v279;
              v162 = v354;
              v93 = *v279;
            }
          }
          v92[1] = (void *)v162;
          v93[v162] = 0;
          v93 = v353;
        }
        else
        {
          if ( v93 == &v89[v91 + 16] )
          {
            *v92 = v353;
            v92[1] = (void *)v354;
            v92[2] = (void *)v355[0];
          }
          else
          {
            v94 = *(_QWORD *)&v89[32 * (int)v90 + 112];
            *v92 = v353;
            v92[1] = (void *)v354;
            v92[2] = (void *)v355[0];
            if ( v93 )
            {
              v353 = v93;
              v355[0] = v94;
              goto LABEL_86;
            }
          }
          v93 = v355;
          v353 = v355;
        }
LABEL_86:
        v354 = 0;
        *v93 = 0;
        v45 = v353;
        if ( v353 == v355 )
        {
LABEL_35:
          if ( v370 )
          {
            v46 = v367;
            if ( !v367 )
            {
              v173 = v368;
              v174 = *(_DWORD *)(v368 + 14976);
              if ( v174 )
              {
                v201 = (unsigned int)(v174 - 1);
                *(_DWORD *)(v368 + 14976) = v201;
                v46 = *(unsigned __int8 **)(v173 + 8 * v201 + 14848);
                v202 = *((unsigned int *)v46 + 134);
                *v46 = 0;
                v203 = *((_QWORD *)v46 + 66);
                *((_DWORD *)v46 + 106) = 0;
                v204 = v203 + (v202 << 6);
                while ( v203 != v204 )
                {
                  while ( 1 )
                  {
                    v204 -= 64;
                    v205 = *(void **)(v204 + 24);
                    if ( v205 == (void *)(v204 + 40) )
                      break;
                    v329 = v204;
                    v291 = v46;
                    operator delete(v205);
                    v204 = v329;
                    v46 = v291;
                    if ( v203 == v329 )
                      goto LABEL_224;
                  }
                }
LABEL_224:
                *((_DWORD *)v46 + 134) = 0;
              }
              else
              {
                v46 = (unsigned __int8 *)operator new(0x3A0u);
                *v46 = 0;
                *((_QWORD *)v46 + 12) = v46 + 112;
                *((_QWORD *)v46 + 16) = v46 + 144;
                *((_QWORD *)v46 + 20) = v46 + 176;
                *((_QWORD *)v46 + 24) = v46 + 208;
                *((_QWORD *)v46 + 28) = v46 + 240;
                *((_QWORD *)v46 + 32) = v46 + 272;
                *((_QWORD *)v46 + 36) = v46 + 304;
                *((_QWORD *)v46 + 40) = v46 + 336;
                *((_QWORD *)v46 + 44) = v46 + 368;
                *((_QWORD *)v46 + 48) = v46 + 400;
                *((_QWORD *)v46 + 52) = v46 + 432;
                *((_QWORD *)v46 + 13) = 0;
                v46[112] = 0;
                *((_QWORD *)v46 + 17) = 0;
                v46[144] = 0;
                *((_QWORD *)v46 + 21) = 0;
                v46[176] = 0;
                *((_QWORD *)v46 + 25) = 0;
                v46[208] = 0;
                *((_QWORD *)v46 + 29) = 0;
                v46[240] = 0;
                *((_QWORD *)v46 + 33) = 0;
                v46[272] = 0;
                *((_QWORD *)v46 + 37) = 0;
                v46[304] = 0;
                *((_QWORD *)v46 + 41) = 0;
                v46[336] = 0;
                *((_QWORD *)v46 + 45) = 0;
                v46[368] = 0;
                *((_QWORD *)v46 + 49) = 0;
                v46[400] = 0;
                *((_QWORD *)v46 + 53) = 0x800000000LL;
                *((_QWORD *)v46 + 66) = v46 + 544;
                *((_QWORD *)v46 + 67) = 0x600000000LL;
              }
              v367 = v46;
            }
            v46[*v46 + 1] = 8;
            v47 = v367;
            v48 = *v367;
            *v367 = v48 + 1;
            *(_QWORD *)&v47[8 * v48 + 16] = v2;
          }
          else
          {
            if ( !v372 )
              goto LABEL_12;
            v131 = sub_168B9E0(&v364);
            v135 = v366;
            if ( (_QWORD)v366 )
            {
              v268 = (void *)v131;
              v135 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v366 + 32LL))(v366);
              v131 = (__int64)v268;
            }
            v359.m128i_i64[0] = v135;
            v136 = sub_1587BC0(v131, v359.m128i_i64, v131, v132, v133, v134);
            v137 = *v136 + 32LL * v371;
            v138 = *(unsigned __int8 **)(v137 + 8);
            if ( !v138 )
            {
              v179 = *(_QWORD *)(v137 + 16);
              v180 = *(_DWORD *)(v179 + 14976);
              if ( v180 )
              {
                v241 = (unsigned int)(v180 - 1);
                *(_DWORD *)(v179 + 14976) = v241;
                v138 = *(unsigned __int8 **)(v179 + 8 * v241 + 14848);
                v242 = *((unsigned int *)v138 + 134);
                *v138 = 0;
                v243 = *((_QWORD **)v138 + 66);
                *((_DWORD *)v138 + 106) = 0;
                v244 = &v243[8 * v242];
                while ( v243 != v244 )
                {
                  while ( 1 )
                  {
                    v244 -= 8;
                    v245 = (_QWORD *)v244[3];
                    if ( v245 == v244 + 5 )
                      break;
                    v341 = v243;
                    v334 = v138;
                    v323 = v137;
                    v299 = v244;
                    operator delete(v245);
                    v244 = v299;
                    v243 = v341;
                    v137 = v323;
                    v138 = v334;
                    if ( v341 == v299 )
                      goto LABEL_264;
                  }
                }
LABEL_264:
                *((_DWORD *)v138 + 134) = 0;
              }
              else
              {
                v284 = (void *)v137;
                v138 = (unsigned __int8 *)operator new(0x3A0u);
                *v138 = 0;
                *((_QWORD *)v138 + 12) = v138 + 112;
                *((_QWORD *)v138 + 16) = v138 + 144;
                *((_QWORD *)v138 + 20) = v138 + 176;
                *((_QWORD *)v138 + 24) = v138 + 208;
                *((_QWORD *)v138 + 28) = v138 + 240;
                *((_QWORD *)v138 + 32) = v138 + 272;
                *((_QWORD *)v138 + 36) = v138 + 304;
                *((_QWORD *)v138 + 40) = v138 + 336;
                *((_QWORD *)v138 + 44) = v138 + 368;
                *((_QWORD *)v138 + 48) = v138 + 400;
                *((_QWORD *)v138 + 52) = v138 + 432;
                *((_QWORD *)v138 + 13) = 0;
                v138[112] = 0;
                *((_QWORD *)v138 + 17) = 0;
                v138[144] = 0;
                *((_QWORD *)v138 + 21) = 0;
                v138[176] = 0;
                *((_QWORD *)v138 + 25) = 0;
                v138[208] = 0;
                *((_QWORD *)v138 + 29) = 0;
                v138[240] = 0;
                *((_QWORD *)v138 + 33) = 0;
                v138[272] = 0;
                *((_QWORD *)v138 + 37) = 0;
                v138[304] = 0;
                *((_QWORD *)v138 + 41) = 0;
                v138[336] = 0;
                *((_QWORD *)v138 + 45) = 0;
                v138[368] = 0;
                *((_QWORD *)v138 + 49) = 0;
                v138[400] = 0;
                *((_QWORD *)v138 + 53) = 0x800000000LL;
                v137 = (__int64)v284;
                *((_QWORD *)v138 + 66) = v138 + 544;
                *((_QWORD *)v138 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v137 + 8) = v138;
            }
            v138[*v138 + 1] = 8;
            v139 = *(_BYTE **)(v137 + 8);
            v140 = (unsigned __int8)*v139;
            *v139 = v140 + 1;
            *(_QWORD *)&v139[8 * v140 + 16] = v2;
          }
          if ( v370 )
          {
            v49 = v367;
            if ( !v367 )
            {
              v165 = v368;
              v166 = *(_DWORD *)(v368 + 14976);
              if ( v166 )
              {
                v221 = (unsigned int)(v166 - 1);
                *(_DWORD *)(v368 + 14976) = v221;
                v49 = *(unsigned __int8 **)(v165 + 8 * v221 + 14848);
                v222 = *((unsigned int *)v49 + 134);
                v223 = *((_QWORD **)v49 + 66);
                *v49 = 0;
                *((_DWORD *)v49 + 106) = 0;
                v224 = &v223[8 * v222];
                while ( v223 != v224 )
                {
                  while ( 1 )
                  {
                    v224 -= 8;
                    v225 = (_QWORD *)v224[3];
                    if ( v225 == v224 + 5 )
                      break;
                    v320 = v223;
                    v295 = v224;
                    operator delete(v225);
                    v224 = v295;
                    v223 = v320;
                    if ( v320 == v295 )
                      goto LABEL_244;
                  }
                }
LABEL_244:
                *((_DWORD *)v49 + 134) = 0;
              }
              else
              {
                v49 = (unsigned __int8 *)operator new(0x3A0u);
                *v49 = 0;
                *((_QWORD *)v49 + 12) = v49 + 112;
                *((_QWORD *)v49 + 16) = v49 + 144;
                *((_QWORD *)v49 + 20) = v49 + 176;
                *((_QWORD *)v49 + 24) = v49 + 208;
                *((_QWORD *)v49 + 28) = v49 + 240;
                *((_QWORD *)v49 + 32) = v49 + 272;
                *((_QWORD *)v49 + 36) = v49 + 304;
                *((_QWORD *)v49 + 40) = v49 + 336;
                *((_QWORD *)v49 + 44) = v49 + 368;
                *((_QWORD *)v49 + 48) = v49 + 400;
                *((_QWORD *)v49 + 52) = v49 + 432;
                *((_QWORD *)v49 + 13) = 0;
                v49[112] = 0;
                *((_QWORD *)v49 + 17) = 0;
                v49[144] = 0;
                *((_QWORD *)v49 + 21) = 0;
                v49[176] = 0;
                *((_QWORD *)v49 + 25) = 0;
                v49[208] = 0;
                *((_QWORD *)v49 + 29) = 0;
                v49[240] = 0;
                *((_QWORD *)v49 + 33) = 0;
                v49[272] = 0;
                *((_QWORD *)v49 + 37) = 0;
                v49[304] = 0;
                *((_QWORD *)v49 + 41) = 0;
                v49[336] = 0;
                *((_QWORD *)v49 + 45) = 0;
                v49[368] = 0;
                *((_QWORD *)v49 + 49) = 0;
                v49[400] = 0;
                *((_QWORD *)v49 + 53) = 0x800000000LL;
                *((_QWORD *)v49 + 66) = v49 + 544;
                *((_QWORD *)v49 + 67) = 0x600000000LL;
              }
              v367 = v49;
            }
            v49[*v49 + 1] = 8;
            v50 = v367;
LABEL_41:
            v51 = (unsigned __int8)*v50;
            *v50 = v51 + 1;
            *(_QWORD *)&v50[8 * v51 + 16] = v302;
            goto LABEL_12;
          }
          if ( v372 )
          {
            v109 = sub_168B9E0(&v364);
            v110 = v366;
            if ( (_QWORD)v366 )
              v110 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v366 + 32LL))(v366);
            v359.m128i_i64[0] = v110;
            v111 = sub_1587BC0(v109, v359.m128i_i64, v105, v106, v107, v108);
            v112 = *v111 + 32LL * v371;
            v113 = *(unsigned __int8 **)(v112 + 8);
            if ( !v113 )
            {
              v183 = *(_QWORD *)(v112 + 16);
              v184 = *(_DWORD *)(v183 + 14976);
              if ( v184 )
              {
                v231 = (unsigned int)(v184 - 1);
                *(_DWORD *)(v183 + 14976) = v231;
                v113 = *(unsigned __int8 **)(v183 + 8 * v231 + 14848);
                v232 = *((unsigned int *)v113 + 134);
                v233 = *((_QWORD *)v113 + 66);
                *v113 = 0;
                *((_DWORD *)v113 + 106) = 0;
                v234 = v233 + (v232 << 6);
                while ( v233 != v234 )
                {
                  while ( 1 )
                  {
                    v234 -= 64;
                    v235 = *(void **)(v234 + 24);
                    if ( v235 == (void *)(v234 + 40) )
                      break;
                    v332 = v234;
                    v298 = (void *)v112;
                    operator delete(v235);
                    v234 = v332;
                    v112 = (__int64)v298;
                    if ( v233 == v332 )
                      goto LABEL_254;
                  }
                }
LABEL_254:
                *((_DWORD *)v113 + 134) = 0;
              }
              else
              {
                v286 = (void *)v112;
                v113 = (unsigned __int8 *)operator new(0x3A0u);
                *v113 = 0;
                *((_QWORD *)v113 + 12) = v113 + 112;
                *((_QWORD *)v113 + 16) = v113 + 144;
                *((_QWORD *)v113 + 20) = v113 + 176;
                *((_QWORD *)v113 + 24) = v113 + 208;
                *((_QWORD *)v113 + 28) = v113 + 240;
                *((_QWORD *)v113 + 32) = v113 + 272;
                *((_QWORD *)v113 + 36) = v113 + 304;
                *((_QWORD *)v113 + 40) = v113 + 336;
                *((_QWORD *)v113 + 44) = v113 + 368;
                *((_QWORD *)v113 + 48) = v113 + 400;
                *((_QWORD *)v113 + 52) = v113 + 432;
                *((_QWORD *)v113 + 13) = 0;
                v113[112] = 0;
                *((_QWORD *)v113 + 17) = 0;
                v113[144] = 0;
                *((_QWORD *)v113 + 21) = 0;
                v113[176] = 0;
                *((_QWORD *)v113 + 25) = 0;
                v113[208] = 0;
                *((_QWORD *)v113 + 29) = 0;
                v113[240] = 0;
                *((_QWORD *)v113 + 33) = 0;
                v113[272] = 0;
                *((_QWORD *)v113 + 37) = 0;
                v113[304] = 0;
                *((_QWORD *)v113 + 41) = 0;
                v113[336] = 0;
                *((_QWORD *)v113 + 45) = 0;
                v113[368] = 0;
                *((_QWORD *)v113 + 49) = 0;
                v113[400] = 0;
                *((_QWORD *)v113 + 53) = 0x800000000LL;
                v112 = (__int64)v286;
                *((_QWORD *)v113 + 66) = v113 + 544;
                *((_QWORD *)v113 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v112 + 8) = v113;
            }
            v113[*v113 + 1] = 8;
            v50 = *(_BYTE **)(v112 + 8);
            goto LABEL_41;
          }
LABEL_12:
          v23 = &dword_0 + 1;
          v24 = sub_F5D880(v10, 1);
          v25 = v24;
          v27 = v26;
          if ( !v370 )
          {
            if ( !v372 )
            {
              v28 = *(_BYTE *)(v10 + 19) & 1;
              goto LABEL_15;
            }
            v265 = v24;
            v114 = sub_168B9E0(&v364);
            v117 = (__int64)v265;
            v118 = v114;
            v119 = v366;
            if ( (_QWORD)v366 )
            {
              v303 = v265;
              v266 = (void *)v118;
              v119 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v366 + 32LL))(v366);
              v117 = (__int64)v303;
              v118 = (__int64)v266;
            }
            v267 = (_BYTE *)v117;
            v349 = v119;
            v120 = sub_1587BC0(v118, &v349, v118, v115, v117, v116);
            v121 = v267;
            v122 = *v120 + 32LL * v371;
            v123 = *(unsigned __int8 **)(v122 + 8);
            if ( !v123 )
            {
              v185 = *(_QWORD *)(v122 + 16);
              v186 = *(_DWORD *)(v185 + 14976);
              if ( v186 )
              {
                v226 = (unsigned int)(v186 - 1);
                *(_DWORD *)(v185 + 14976) = v226;
                v123 = *(unsigned __int8 **)(v185 + 8 * v226 + 14848);
                v227 = *((unsigned int *)v123 + 134);
                *v123 = 0;
                v228 = *((_QWORD **)v123 + 66);
                *((_DWORD *)v123 + 106) = 0;
                v229 = &v228[8 * v227];
                while ( v228 != v229 )
                {
                  while ( 1 )
                  {
                    v229 -= 8;
                    v230 = (_QWORD *)v229[3];
                    if ( v230 == v229 + 5 )
                      break;
                    v340 = v121;
                    v331 = v228;
                    v321 = v122;
                    v308 = v123;
                    v297 = v229;
                    operator delete(v230);
                    v229 = v297;
                    v228 = v331;
                    v123 = v308;
                    v122 = v321;
                    v121 = v340;
                    if ( v331 == v297 )
                      goto LABEL_249;
                  }
                }
LABEL_249:
                *((_DWORD *)v123 + 134) = 0;
              }
              else
              {
                v306 = v267;
                v287 = (void *)v122;
                v123 = (unsigned __int8 *)operator new(0x3A0u);
                *v123 = 0;
                *((_QWORD *)v123 + 12) = v123 + 112;
                *((_QWORD *)v123 + 16) = v123 + 144;
                *((_QWORD *)v123 + 20) = v123 + 176;
                *((_QWORD *)v123 + 24) = v123 + 208;
                *((_QWORD *)v123 + 28) = v123 + 240;
                *((_QWORD *)v123 + 32) = v123 + 272;
                *((_QWORD *)v123 + 36) = v123 + 304;
                *((_QWORD *)v123 + 40) = v123 + 336;
                *((_QWORD *)v123 + 44) = v123 + 368;
                *((_QWORD *)v123 + 48) = v123 + 400;
                *((_QWORD *)v123 + 52) = v123 + 432;
                *((_QWORD *)v123 + 13) = 0;
                v123[112] = 0;
                *((_QWORD *)v123 + 17) = 0;
                v123[144] = 0;
                *((_QWORD *)v123 + 21) = 0;
                v123[176] = 0;
                *((_QWORD *)v123 + 25) = 0;
                v123[208] = 0;
                *((_QWORD *)v123 + 29) = 0;
                v123[240] = 0;
                *((_QWORD *)v123 + 33) = 0;
                v123[272] = 0;
                *((_QWORD *)v123 + 37) = 0;
                v123[304] = 0;
                *((_QWORD *)v123 + 41) = 0;
                v123[336] = 0;
                *((_QWORD *)v123 + 45) = 0;
                v123[368] = 0;
                *((_QWORD *)v123 + 49) = 0;
                v123[400] = 0;
                *((_QWORD *)v123 + 53) = 0x800000000LL;
                v122 = (__int64)v287;
                *((_QWORD *)v123 + 66) = v123 + 544;
                v121 = v306;
                *((_QWORD *)v123 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v122 + 8) = v123;
            }
            v123[*v123 + 1] = 0;
            v359.m128i_i64[0] = (__int64)v360;
            if ( !&v121[v27] || v121 )
            {
              if ( (unsigned __int64)v27 <= 0xF )
              {
                if ( v27 == 1 )
                {
                  LOBYTE(v360[0]) = *v121;
                  v124 = v360;
                  goto LABEL_105;
                }
                v124 = v360;
                if ( !v27 )
                {
LABEL_105:
                  v359.m128i_i64[1] = v27;
                  *((_BYTE *)v124 + v27) = 0;
                  v125 = *(_BYTE **)(v122 + 8);
                  v126 = (unsigned __int8)*v125;
                  *v125 = v126 + 1;
                  v23 = (void *)v359.m128i_i64[0];
                  v127 = 32 * (v126 + 3);
                  v128 = &v125[v127];
                  v129 = *(_BYTE **)&v125[v127];
                  if ( (_QWORD *)v359.m128i_i64[0] == v360 )
                  {
                    v161 = v359.m128i_i64[1];
                    if ( v359.m128i_i64[1] )
                    {
                      if ( v359.m128i_i64[1] == 1 )
                      {
                        *v129 = v360[0];
                        v161 = v359.m128i_i64[1];
                        v129 = (_BYTE *)*v128;
                      }
                      else
                      {
                        memcpy(v129, (const void *)v359.m128i_i64[0], v359.m128i_u64[1]);
                        v129 = (_BYTE *)*v128;
                        v161 = v359.m128i_i64[1];
                      }
                    }
                    v128[1] = v161;
                    v129[v161] = 0;
                    v129 = (_BYTE *)v359.m128i_i64[0];
                  }
                  else
                  {
                    if ( v129 == &v125[v127 + 16] )
                    {
                      *(__m128i *)v128 = v359;
                      v128[2] = v360[0];
                    }
                    else
                    {
                      v130 = *(_QWORD *)&v125[32 * (int)v126 + 112];
                      *(__m128i *)v128 = v359;
                      v128[2] = v360[0];
                      if ( v129 )
                      {
                        v359.m128i_i64[0] = (__int64)v129;
                        v360[0] = v130;
                        goto LABEL_109;
                      }
                    }
                    v129 = v360;
                    v359.m128i_i64[0] = (__int64)v360;
                  }
LABEL_109:
                  v359.m128i_i64[1] = 0;
                  *v129 = 0;
                  v60 = (void *)v359.m128i_i64[0];
                  if ( (_QWORD *)v359.m128i_i64[0] == v360 )
                  {
LABEL_54:
                    v28 = *(_BYTE *)(v10 + 19) & 1;
                    if ( v370 )
                    {
                      v61 = v28;
                      v62 = v367;
                      if ( !v367 )
                      {
                        v175 = v368;
                        v176 = *(_DWORD *)(v368 + 14976);
                        if ( v176 )
                        {
                          v206 = (unsigned int)(v176 - 1);
                          *(_DWORD *)(v368 + 14976) = v206;
                          v62 = *(unsigned __int8 **)(v175 + 8 * v206 + 14848);
                          v207 = *((unsigned int *)v62 + 134);
                          v208 = *((_QWORD *)v62 + 66);
                          *v62 = 0;
                          *((_DWORD *)v62 + 106) = 0;
                          v209 = v208 + (v207 << 6);
                          while ( v208 != v209 )
                          {
                            while ( 1 )
                            {
                              v209 -= 64;
                              v210 = *(void **)(v209 + 24);
                              if ( v210 == (void *)(v209 + 40) )
                                break;
                              v318 = v209;
                              v292 = (void *)v61;
                              operator delete(v210);
                              v209 = v318;
                              v61 = (unsigned __int64)v292;
                              if ( v208 == v318 )
                                goto LABEL_229;
                            }
                          }
LABEL_229:
                          *((_DWORD *)v62 + 134) = 0;
                        }
                        else
                        {
                          v283 = (void *)v61;
                          v62 = (unsigned __int8 *)operator new(0x3A0u);
                          *v62 = 0;
                          *((_QWORD *)v62 + 12) = v62 + 112;
                          *((_QWORD *)v62 + 16) = v62 + 144;
                          *((_QWORD *)v62 + 20) = v62 + 176;
                          *((_QWORD *)v62 + 24) = v62 + 208;
                          *((_QWORD *)v62 + 28) = v62 + 240;
                          *((_QWORD *)v62 + 32) = v62 + 272;
                          *((_QWORD *)v62 + 36) = v62 + 304;
                          *((_QWORD *)v62 + 40) = v62 + 336;
                          *((_QWORD *)v62 + 44) = v62 + 368;
                          *((_QWORD *)v62 + 48) = v62 + 400;
                          *((_QWORD *)v62 + 52) = v62 + 432;
                          *((_QWORD *)v62 + 13) = 0;
                          v62[112] = 0;
                          *((_QWORD *)v62 + 17) = 0;
                          v62[144] = 0;
                          *((_QWORD *)v62 + 21) = 0;
                          v62[176] = 0;
                          *((_QWORD *)v62 + 25) = 0;
                          v62[208] = 0;
                          *((_QWORD *)v62 + 29) = 0;
                          v62[240] = 0;
                          *((_QWORD *)v62 + 33) = 0;
                          v62[272] = 0;
                          *((_QWORD *)v62 + 37) = 0;
                          v62[304] = 0;
                          *((_QWORD *)v62 + 41) = 0;
                          v62[336] = 0;
                          *((_QWORD *)v62 + 45) = 0;
                          v62[368] = 0;
                          *((_QWORD *)v62 + 49) = 0;
                          v62[400] = 0;
                          *((_QWORD *)v62 + 53) = 0x800000000LL;
                          v61 = (unsigned __int64)v283;
                          *((_QWORD *)v62 + 66) = v62 + 544;
                          *((_QWORD *)v62 + 67) = 0x600000000LL;
                        }
                        v367 = v62;
                      }
                      v62[*v62 + 1] = 2;
                      v63 = v367;
                      goto LABEL_57;
                    }
LABEL_15:
                    if ( !v372 )
                    {
                      v29 = sub_EEC8C0(a2, (__int64)v23, *(double *)si128.m128i_i64);
                      v30 = v29;
                      v31 = HIDWORD(v29);
                      goto LABEL_17;
                    }
                    v151 = sub_168B9E0(&v364);
                    v155 = v366;
                    if ( (_QWORD)v366 )
                    {
                      v270 = (void *)v151;
                      v155 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v366 + 32LL))(v366);
                      v151 = (__int64)v270;
                    }
                    v359.m128i_i64[0] = v155;
                    v156 = sub_1587BC0(v151, v359.m128i_i64, v151, v152, v153, v154);
                    v61 = v28;
                    v157 = *v156 + 32LL * v371;
                    v158 = *(unsigned __int8 **)(v157 + 8);
                    if ( !v158 )
                    {
                      v181 = *(_QWORD *)(v157 + 16);
                      v182 = *(_DWORD *)(v181 + 14976);
                      if ( v182 )
                      {
                        v246 = (unsigned int)(v182 - 1);
                        *(_DWORD *)(v181 + 14976) = v246;
                        v158 = *(unsigned __int8 **)(v181 + 8 * v246 + 14848);
                        v247 = *((unsigned int *)v158 + 134);
                        v248 = *((_QWORD **)v158 + 66);
                        *v158 = 0;
                        *((_DWORD *)v158 + 106) = 0;
                        v249 = &v248[8 * v247];
                        while ( v248 != v249 )
                        {
                          while ( 1 )
                          {
                            v249 -= 8;
                            v250 = (_QWORD *)v249[3];
                            if ( v250 == v249 + 5 )
                              break;
                            v335 = v248;
                            v324 = v61;
                            v310 = v157;
                            v300 = v249;
                            operator delete(v250);
                            v249 = v300;
                            v248 = v335;
                            v157 = v310;
                            v61 = v324;
                            if ( v335 == v300 )
                              goto LABEL_269;
                          }
                        }
LABEL_269:
                        *((_DWORD *)v158 + 134) = 0;
                      }
                      else
                      {
                        v305 = v61;
                        v285 = (void *)v157;
                        v158 = (unsigned __int8 *)operator new(0x3A0u);
                        *v158 = 0;
                        *((_QWORD *)v158 + 12) = v158 + 112;
                        *((_QWORD *)v158 + 16) = v158 + 144;
                        *((_QWORD *)v158 + 20) = v158 + 176;
                        *((_QWORD *)v158 + 24) = v158 + 208;
                        *((_QWORD *)v158 + 28) = v158 + 240;
                        *((_QWORD *)v158 + 32) = v158 + 272;
                        *((_QWORD *)v158 + 36) = v158 + 304;
                        *((_QWORD *)v158 + 40) = v158 + 336;
                        *((_QWORD *)v158 + 44) = v158 + 368;
                        *((_QWORD *)v158 + 48) = v158 + 400;
                        *((_QWORD *)v158 + 52) = v158 + 432;
                        *((_QWORD *)v158 + 13) = 0;
                        v158[112] = 0;
                        *((_QWORD *)v158 + 17) = 0;
                        v158[144] = 0;
                        *((_QWORD *)v158 + 21) = 0;
                        v158[176] = 0;
                        *((_QWORD *)v158 + 25) = 0;
                        v158[208] = 0;
                        *((_QWORD *)v158 + 29) = 0;
                        v158[240] = 0;
                        *((_QWORD *)v158 + 33) = 0;
                        v158[272] = 0;
                        *((_QWORD *)v158 + 37) = 0;
                        v158[304] = 0;
                        *((_QWORD *)v158 + 41) = 0;
                        v158[336] = 0;
                        *((_QWORD *)v158 + 45) = 0;
                        v158[368] = 0;
                        *((_QWORD *)v158 + 49) = 0;
                        v158[400] = 0;
                        *((_QWORD *)v158 + 53) = 0x800000000LL;
                        v157 = (__int64)v285;
                        *((_QWORD *)v158 + 66) = v158 + 544;
                        v61 = v305;
                        *((_QWORD *)v158 + 67) = 0x600000000LL;
                      }
                      *(_QWORD *)(v157 + 8) = v158;
                    }
                    v158[*v158 + 1] = 2;
                    v63 = *(_BYTE **)(v157 + 8);
LABEL_57:
                    v64 = (unsigned __int8)*v63;
                    *v63 = v64 + 1;
                    *(_QWORD *)&v63[8 * v64 + 16] = v61;
                    v262 = v370;
                    v65 = sub_EEC8C0(a2, (unsigned int)(v64 + 1), *(double *)si128.m128i_i64);
                    v30 = v65;
                    v66 = HIDWORD(v65);
                    LODWORD(v31) = HIDWORD(v65);
                    if ( v262 )
                    {
                      v67 = v367;
                      if ( v367 )
                      {
                        v68 = *((unsigned int *)v367 + 106);
                        v69 = *((unsigned int *)v367 + 107);
                        v70 = v68 + 1;
                      }
                      else
                      {
                        v169 = v368;
                        v170 = *(_DWORD *)(v368 + 14976);
                        if ( v170 )
                        {
                          v216 = (unsigned int)(v170 - 1);
                          *(_DWORD *)(v368 + 14976) = v216;
                          v67 = *(unsigned __int8 **)(v169 + 8 * v216 + 14848);
                          v217 = *((unsigned int *)v67 + 134);
                          *v67 = 0;
                          v218 = *((_QWORD *)v67 + 66);
                          *((_DWORD *)v67 + 106) = 0;
                          v219 = v218 + (v217 << 6);
                          while ( v218 != v219 )
                          {
                            while ( 1 )
                            {
                              v219 -= 64;
                              v220 = *(void **)(v219 + 24);
                              if ( v220 == (void *)(v219 + 40) )
                                break;
                              v319 = v66;
                              v294 = v67;
                              operator delete(v220);
                              v67 = v294;
                              v66 = v319;
                              if ( v218 == v219 )
                                goto LABEL_239;
                            }
                          }
LABEL_239:
                          v68 = *((unsigned int *)v67 + 106);
                          v69 = *((unsigned int *)v67 + 107);
                          *((_DWORD *)v67 + 134) = 0;
                          v70 = v68 + 1;
                        }
                        else
                        {
                          v281 = v66;
                          v67 = (unsigned __int8 *)operator new(0x3A0u);
                          v69 = 8;
                          *v67 = 0;
                          *((_QWORD *)v67 + 12) = v67 + 112;
                          *((_QWORD *)v67 + 16) = v67 + 144;
                          *((_QWORD *)v67 + 20) = v67 + 176;
                          *((_QWORD *)v67 + 24) = v67 + 208;
                          *((_QWORD *)v67 + 28) = v67 + 240;
                          *((_QWORD *)v67 + 32) = v67 + 272;
                          *((_QWORD *)v67 + 36) = v67 + 304;
                          *((_QWORD *)v67 + 40) = v67 + 336;
                          *((_QWORD *)v67 + 44) = v67 + 368;
                          *((_QWORD *)v67 + 48) = v67 + 400;
                          *((_QWORD *)v67 + 52) = v67 + 432;
                          *((_QWORD *)v67 + 13) = 0;
                          v67[112] = 0;
                          *((_QWORD *)v67 + 17) = 0;
                          v67[144] = 0;
                          *((_QWORD *)v67 + 21) = 0;
                          v67[176] = 0;
                          *((_QWORD *)v67 + 25) = 0;
                          v67[208] = 0;
                          *((_QWORD *)v67 + 29) = 0;
                          v67[240] = 0;
                          *((_QWORD *)v67 + 33) = 0;
                          v67[272] = 0;
                          *((_QWORD *)v67 + 37) = 0;
                          v67[304] = 0;
                          *((_QWORD *)v67 + 41) = 0;
                          v67[336] = 0;
                          *((_QWORD *)v67 + 45) = 0;
                          v67[368] = 0;
                          *((_QWORD *)v67 + 49) = 0;
                          v67[400] = 0;
                          *((_QWORD *)v67 + 53) = 0x800000000LL;
                          LODWORD(v66) = v281;
                          *((_QWORD *)v67 + 66) = v67 + 544;
                          v70 = 1;
                          *((_QWORD *)v67 + 67) = 0x600000000LL;
                          v68 = 0;
                        }
                        v367 = v67;
                      }
                      v359.m128i_i64[0] = __PAIR64__(v66, v30);
                      v359.m128i_i8[8] = 1;
                      if ( v70 > v69 )
                      {
                        v289 = v67;
                        sub_2237220(v67 + 416, v67 + 432, v70, 12);
                        v67 = v289;
                        v68 = *((unsigned int *)v289 + 106);
                      }
                      v71 = 3 * v68;
                      goto LABEL_63;
                    }
LABEL_17:
                    if ( !v372 )
                      goto LABEL_18;
                    v141 = sub_168B9E0(&v364);
                    v145 = (void *)v366;
                    if ( (_QWORD)v366 )
                    {
                      v269 = (void *)v141;
                      v145 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v366 + 32LL))(v366);
                      v141 = (__int64)v269;
                    }
                    v356 = v145;
                    v146 = sub_1587BC0(v141, (__int64 *)&v356, v141, v142, v143, v144);
                    v147 = 32LL * v371 + *v146;
                    v67 = *(unsigned __int8 **)(v147 + 8);
                    if ( v67 )
                    {
                      v148 = *((unsigned int *)v67 + 106);
                      v149 = *((unsigned int *)v67 + 107);
                      v150 = v148 + 1;
                    }
                    else
                    {
                      v187 = *(_QWORD *)(v147 + 16);
                      v188 = *(_DWORD *)(v187 + 14976);
                      if ( v188 )
                      {
                        v236 = (unsigned int)(v188 - 1);
                        *(_DWORD *)(v187 + 14976) = v236;
                        v67 = *(unsigned __int8 **)(v187 + 8 * v236 + 14848);
                        v237 = *((unsigned int *)v67 + 134);
                        *v67 = 0;
                        v238 = *((_QWORD *)v67 + 66);
                        *((_DWORD *)v67 + 106) = 0;
                        v239 = v238 + (v237 << 6);
                        while ( v238 != v239 )
                        {
                          while ( 1 )
                          {
                            v239 -= 64;
                            v240 = *(void **)(v239 + 24);
                            if ( v240 == (void *)(v239 + 40) )
                              break;
                            v333 = v239;
                            v322 = v238;
                            v309 = v67;
                            operator delete(v240);
                            v238 = v322;
                            v239 = v333;
                            v67 = v309;
                            if ( v322 == v333 )
                              goto LABEL_259;
                          }
                        }
LABEL_259:
                        v148 = *((unsigned int *)v67 + 106);
                        v149 = *((unsigned int *)v67 + 107);
                        *((_DWORD *)v67 + 134) = 0;
                        v150 = v148 + 1;
                      }
                      else
                      {
                        v67 = (unsigned __int8 *)operator new(0x3A0u);
                        v149 = 8;
                        *v67 = 0;
                        *((_QWORD *)v67 + 12) = v67 + 112;
                        *((_QWORD *)v67 + 16) = v67 + 144;
                        *((_QWORD *)v67 + 20) = v67 + 176;
                        *((_QWORD *)v67 + 24) = v67 + 208;
                        *((_QWORD *)v67 + 28) = v67 + 240;
                        *((_QWORD *)v67 + 32) = v67 + 272;
                        *((_QWORD *)v67 + 36) = v67 + 304;
                        *((_QWORD *)v67 + 40) = v67 + 336;
                        *((_QWORD *)v67 + 44) = v67 + 368;
                        *((_QWORD *)v67 + 48) = v67 + 400;
                        *((_QWORD *)v67 + 52) = v67 + 432;
                        *((_QWORD *)v67 + 13) = 0;
                        v67[112] = 0;
                        *((_QWORD *)v67 + 17) = 0;
                        v67[144] = 0;
                        *((_QWORD *)v67 + 21) = 0;
                        v67[176] = 0;
                        *((_QWORD *)v67 + 25) = 0;
                        v67[208] = 0;
                        *((_QWORD *)v67 + 29) = 0;
                        v67[240] = 0;
                        *((_QWORD *)v67 + 33) = 0;
                        v67[272] = 0;
                        *((_QWORD *)v67 + 37) = 0;
                        v67[304] = 0;
                        *((_QWORD *)v67 + 41) = 0;
                        v67[336] = 0;
                        *((_QWORD *)v67 + 45) = 0;
                        v67[368] = 0;
                        *((_QWORD *)v67 + 49) = 0;
                        v67[400] = 0;
                        *((_QWORD *)v67 + 53) = 0x800000000LL;
                        v148 = 0;
                        *((_QWORD *)v67 + 67) = 0x600000000LL;
                        *((_QWORD *)v67 + 66) = v67 + 544;
                        v150 = 1;
                      }
                      *(_QWORD *)(v147 + 8) = v67;
                    }
                    v359.m128i_i64[0] = __PAIR64__(v31, v30);
                    v359.m128i_i8[8] = 1;
                    if ( v149 < v150 )
                    {
                      v296 = v67;
                      sub_2237220(v67 + 416, v67 + 432, v150, 12);
                      v67 = v296;
                      v148 = *((unsigned int *)v296 + 106);
                    }
                    v71 = 3 * v148;
LABEL_63:
                    v72 = *((_QWORD *)v67 + 52) + 4 * v71;
                    *(_QWORD *)v72 = v359.m128i_i64[0];
                    *(_DWORD *)(v72 + 8) = v359.m128i_i32[2];
                    ++*((_DWORD *)v67 + 106);
LABEL_18:
                    sub_15F7200(&v364);
                    sub_168FFF0(a1, (unsigned __int64 *)v10, v347, *(double *)si128.m128i_i64);
                    result = 0;
                    if ( ptr != v363 )
                    {
                      free(ptr);
                      return 0;
                    }
                    return result;
                  }
LABEL_53:
                  operator delete(v60);
                  goto LABEL_54;
                }
LABEL_144:
                v275 = (void *)v122;
                memcpy(v124, v121, v27);
                v122 = (__int64)v275;
                v124 = (_QWORD *)v359.m128i_i64[0];
                goto LABEL_105;
              }
              v304 = v121;
              v278 = (void *)v122;
              if ( v27 >= 0 )
              {
                v124 = (_QWORD *)operator new(v27 + 1);
                v122 = (__int64)v278;
                v121 = v304;
                v360[0] = v27;
                v359.m128i_i64[0] = (__int64)v124;
                goto LABEL_144;
              }
LABEL_284:
              std::__throw_length_error("basic_string::_M_create");
            }
LABEL_285:
            std::__throw_logic_error("basic_string::_M_construct null not valid");
          }
          v52 = v367;
          if ( !v367 )
          {
            v163 = v368;
            v164 = *(_DWORD *)(v368 + 14976);
            if ( v164 )
            {
              v191 = (unsigned int)(v164 - 1);
              *(_DWORD *)(v368 + 14976) = v191;
              v52 = *(unsigned __int8 **)(v163 + 8 * v191 + 14848);
              v192 = *((unsigned int *)v52 + 134);
              *v52 = 0;
              v193 = *((char **)v52 + 66);
              *((_DWORD *)v52 + 106) = 0;
              v194 = &v193[64 * v192];
              while ( v193 != v194 )
              {
                while ( 1 )
                {
                  v194 -= 64;
                  v195 = *((char **)v194 + 3);
                  if ( v195 == v194 + 40 )
                    break;
                  v328 = v25;
                  v307 = v52;
                  v290 = v194;
                  operator delete(v195);
                  v194 = v290;
                  v52 = v307;
                  v25 = v328;
                  if ( v193 == v290 )
                    goto LABEL_214;
                }
              }
LABEL_214:
              *((_DWORD *)v52 + 134) = 0;
            }
            else
            {
              v280 = v25;
              v52 = (unsigned __int8 *)operator new(0x3A0u);
              *v52 = 0;
              *((_QWORD *)v52 + 12) = v52 + 112;
              *((_QWORD *)v52 + 16) = v52 + 144;
              *((_QWORD *)v52 + 20) = v52 + 176;
              *((_QWORD *)v52 + 24) = v52 + 208;
              *((_QWORD *)v52 + 28) = v52 + 240;
              *((_QWORD *)v52 + 32) = v52 + 272;
              *((_QWORD *)v52 + 36) = v52 + 304;
              *((_QWORD *)v52 + 40) = v52 + 336;
              *((_QWORD *)v52 + 44) = v52 + 368;
              *((_QWORD *)v52 + 48) = v52 + 400;
              *((_QWORD *)v52 + 52) = v52 + 432;
              *((_QWORD *)v52 + 13) = 0;
              v52[112] = 0;
              *((_QWORD *)v52 + 17) = 0;
              v52[144] = 0;
              *((_QWORD *)v52 + 21) = 0;
              v52[176] = 0;
              *((_QWORD *)v52 + 25) = 0;
              v52[208] = 0;
              *((_QWORD *)v52 + 29) = 0;
              v52[240] = 0;
              *((_QWORD *)v52 + 33) = 0;
              v52[272] = 0;
              *((_QWORD *)v52 + 37) = 0;
              v52[304] = 0;
              *((_QWORD *)v52 + 41) = 0;
              v52[336] = 0;
              *((_QWORD *)v52 + 45) = 0;
              v52[368] = 0;
              *((_QWORD *)v52 + 49) = 0;
              v52[400] = 0;
              *((_QWORD *)v52 + 53) = 0x800000000LL;
              v25 = v280;
              *((_QWORD *)v52 + 66) = v52 + 544;
              *((_QWORD *)v52 + 67) = 0x600000000LL;
            }
            v367 = v52;
          }
          v52[*v52 + 1] = 0;
          v356 = v358;
          if ( &v25[v27] && !v25 )
            goto LABEL_285;
          if ( (unsigned __int64)v27 > 0xF )
          {
            v272 = v25;
            if ( v27 < 0 )
              goto LABEL_284;
            v53 = (_QWORD *)operator new(v27 + 1);
            v25 = v272;
            v358[0] = v27;
            v356 = v53;
          }
          else
          {
            if ( v27 == 1 )
            {
              LOBYTE(v358[0]) = *v25;
              v53 = v358;
              goto LABEL_48;
            }
            v53 = v358;
            if ( !v27 )
            {
LABEL_48:
              v357 = v27;
              *((_BYTE *)v53 + v27) = 0;
              v54 = v367;
              v55 = *v367;
              *v367 = v55 + 1;
              v23 = v356;
              v56 = 32 * (v55 + 3);
              v57 = (void **)&v54[v56];
              v58 = *(unsigned __int8 **)&v54[v56];
              if ( v356 == v358 )
              {
                v160 = v357;
                if ( v357 )
                {
                  if ( v357 == 1 )
                  {
                    *v58 = v358[0];
                    v160 = v357;
                    v58 = (unsigned __int8 *)*v57;
                  }
                  else
                  {
                    memcpy(v58, v356, v357);
                    v58 = (unsigned __int8 *)*v57;
                    v160 = v357;
                  }
                }
                v57[1] = (void *)v160;
                v58[v160] = 0;
                v58 = (unsigned __int8 *)v356;
              }
              else
              {
                if ( v58 == &v54[v56 + 16] )
                {
                  *v57 = v356;
                  v57[1] = (void *)v357;
                  v57[2] = (void *)v358[0];
                }
                else
                {
                  v59 = *(_QWORD *)&v54[32 * (int)v55 + 112];
                  *v57 = v356;
                  v57[1] = (void *)v357;
                  v57[2] = (void *)v358[0];
                  if ( v58 )
                  {
                    v356 = v58;
                    v358[0] = v59;
                    goto LABEL_52;
                  }
                }
                v58 = (unsigned __int8 *)v358;
                v356 = v358;
              }
LABEL_52:
              v357 = 0;
              *v58 = 0;
              v60 = v356;
              if ( v356 == v358 )
                goto LABEL_54;
              goto LABEL_53;
            }
          }
          memcpy(v53, v25, v27);
          v53 = v356;
          goto LABEL_48;
        }
LABEL_34:
        operator delete(v45);
        goto LABEL_35;
      }
    }
    v312 = v86;
    v276 = (void *)v84;
    memcpy(v88, v85, v84);
    v84 = (signed __int64)v276;
    v86 = v312;
    v88 = v353;
    goto LABEL_82;
  }
  return result;
}
