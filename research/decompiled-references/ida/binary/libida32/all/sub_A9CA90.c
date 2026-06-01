__int64 __fastcall sub_A9CA90(_QWORD **a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD **v3; // r14
  __int64 v5; // rax
  unsigned int i; // r15d
  _QWORD *v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int k; // r13d
  __int64 v12; // rcx
  _DWORD *v13; // rbx
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  _DWORD *v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 result; // rax
  int v27; // eax
  void **p_ptr; // rbx
  __int64 v29; // rax
  char *v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rax
  char v34; // dl
  char v35; // dl
  __int64 v36; // rax
  _QWORD *v37; // rdx
  unsigned __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbp
  char v43; // al
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // r12
  char v47; // r11
  _QWORD *v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rdi
  unsigned int v51; // eax
  char v52; // si
  __int64 v53; // r9
  char v54; // r10
  char v55; // cl
  unsigned __int64 v56; // r12
  __int64 v57; // rbp
  _DWORD *v58; // rdi
  char v59; // dl
  __int64 v60; // rax
  unsigned int v61; // r12d
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 *v66; // rdx
  char v67; // r10
  __int64 v68; // rbp
  __int64 v69; // rdx
  __int64 v70; // rbp
  __int64 v71; // rdi
  __int64 v72; // rdx
  __int64 v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rdi
  char v77; // r12
  __int64 v78; // rsi
  void *v79; // rax
  __int64 v80; // rbp
  __int64 v81; // rdx
  char v82; // al
  void *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rbp
  __int64 v87; // rdi
  __int64 v88; // r9
  char v89; // r12
  __int64 v90; // rsi
  void *v91; // rax
  __int64 v92; // rdi
  char v93; // bp
  void *v94; // rax
  __int64 v95; // rax
  _DWORD *v96; // r8
  _DWORD *v97; // rdi
  _DWORD *v98; // rsi
  _DWORD *v99; // rdi
  _DWORD *v100; // r8
  _DWORD *v101; // rsi
  __int64 *v102; // rdx
  unsigned int v103; // esi
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rdi
  unsigned int v107; // esi
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdi
  unsigned int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // r12
  __int64 *v114; // rbp
  __int64 v115; // rcx
  __int64 v116; // rsi
  char v117; // al
  unsigned __int64 v118; // rsi
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // rcx
  __int64 v122; // rbx
  __int64 v123; // r8
  __int64 v124; // rax
  __int64 v125; // rax
  unsigned __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 v130; // rcx
  unsigned __int64 v131; // rdx
  char v132; // al
  __int64 v133; // r12
  __int64 v134; // rax
  char v135; // al
  __int64 v136; // rax
  __int64 v137; // rbx
  bool v138; // r12
  __int64 v139; // rax
  __int64 v140; // rbp
  bool v141; // cl
  bool v142; // dl
  bool v143; // r12
  __int64 v144; // rbx
  __int64 v145; // rax
  char v146; // dl
  __int64 *v147; // rcx
  __int64 *v148; // r8
  _QWORD *v149; // rbx
  __int64 *v150; // r15
  __int64 *v151; // rbp
  char *v152; // r14
  __int64 v153; // r13
  __int64 v154; // r12
  __int64 v155; // rdx
  __int64 v156; // rax
  __int64 v157; // r12
  __int64 v158; // rdx
  __int64 v159; // rax
  __int64 v160; // rbp
  __int64 v161; // rdx
  unsigned __int64 v162; // rax
  unsigned __int64 v163; // r12
  __int64 v164; // rdx
  unsigned __int64 v165; // rax
  unsigned __int64 v166; // rbp
  __int64 v167; // rax
  _QWORD *v168; // rax
  bool v169; // cc
  __int64 v170; // rcx
  _QWORD *v171; // rbp
  char *v172; // rbx
  _QWORD *v173; // rdi
  __int64 v174; // rax
  int v175; // r12d
  __int64 v176; // rdx
  __int64 v177; // rbx
  __int64 v178; // rbx
  _QWORD *v179; // rdi
  int v180; // r12d
  __int64 v181; // rax
  void *v182; // rsi
  void *v183; // rsi
  __int64 v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  int v188; // eax
  unsigned __int64 v189; // rbx
  __int64 v190; // rax
  __int64 v191; // rbx
  unsigned __int64 v192; // rax
  __int64 v193; // rdi
  __int64 v194; // rdx
  __int64 v195; // rax
  unsigned __int64 v196; // rbx
  unsigned int *v197; // rdx
  __int64 v198; // rax
  unsigned __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rbx
  unsigned __int64 v202; // rbx
  unsigned __int64 v203; // rax
  __int64 v204; // rdi
  __int64 v205; // rdx
  __int64 v206; // rax
  unsigned __int64 v207; // rbx
  unsigned int *v208; // rdx
  __int64 v209; // rax
  unsigned __int64 v210; // rax
  __int64 v211; // rbx
  void *v212; // rax
  void *v213; // rsi
  unsigned __int64 v214; // rax
  __int64 v215; // rax
  __int64 v216; // rax
  __int64 v217; // rcx
  __int64 v218; // r10
  _DWORD *v219; // r8
  __int64 v220; // rcx
  _DWORD *v221; // r9
  _DWORD *v222; // rsi
  __int64 v223; // r10
  __int64 v224; // r9
  unsigned int j; // esi
  __int64 v226; // r8
  _DWORD *v227; // r8
  _DWORD *v228; // r9
  __int64 v229; // rcx
  _DWORD *v230; // rsi
  unsigned int v231; // esi
  __int64 v232; // r8
  __int64 v233; // r9
  __int64 v234; // rdi
  __int64 v235; // rax
  __int64 v236; // rax
  __int64 v237; // rcx
  __int64 v238; // rsi
  char v239; // dl
  _DWORD *v242; // [rsp+18h] [rbp-280h]
  __int64 v243; // [rsp+20h] [rbp-278h]
  unsigned int m; // [rsp+20h] [rbp-278h]
  _DWORD *v245; // [rsp+28h] [rbp-270h]
  unsigned __int64 v246; // [rsp+30h] [rbp-268h]
  _DWORD *v247; // [rsp+38h] [rbp-260h]
  _DWORD *v248; // [rsp+40h] [rbp-258h]
  char v249; // [rsp+48h] [rbp-250h]
  void *v250; // [rsp+48h] [rbp-250h]
  __int64 v251; // [rsp+48h] [rbp-250h]
  unsigned int v252; // [rsp+48h] [rbp-250h]
  _QWORD *v253; // [rsp+48h] [rbp-250h]
  char v254; // [rsp+48h] [rbp-250h]
  char v255; // [rsp+48h] [rbp-250h]
  __int64 v256; // [rsp+48h] [rbp-250h]
  char *v257; // [rsp+48h] [rbp-250h]
  unsigned int v258; // [rsp+48h] [rbp-250h]
  char v259; // [rsp+48h] [rbp-250h]
  _QWORD *v260; // [rsp+48h] [rbp-250h]
  char v261; // [rsp+48h] [rbp-250h]
  _QWORD *v262; // [rsp+48h] [rbp-250h]
  unsigned __int64 v263; // [rsp+50h] [rbp-248h]
  unsigned int v264; // [rsp+64h] [rbp-234h]
  char v265; // [rsp+68h] [rbp-230h]
  char v266; // [rsp+68h] [rbp-230h]
  __int64 v267; // [rsp+68h] [rbp-230h]
  __int64 v268; // [rsp+68h] [rbp-230h]
  char v269; // [rsp+68h] [rbp-230h]
  void *v270; // [rsp+68h] [rbp-230h]
  __int64 v271; // [rsp+70h] [rbp-228h]
  __int64 v272; // [rsp+78h] [rbp-220h]
  __int64 v273; // [rsp+80h] [rbp-218h]
  __int64 v274; // [rsp+88h] [rbp-210h]
  __int64 v275; // [rsp+90h] [rbp-208h]
  __int64 v276; // [rsp+98h] [rbp-200h]
  char v277; // [rsp+98h] [rbp-200h]
  bool v278; // [rsp+98h] [rbp-200h]
  __int64 v279; // [rsp+98h] [rbp-200h]
  unsigned int v280; // [rsp+A0h] [rbp-1F8h]
  char v281; // [rsp+A7h] [rbp-1F1h]
  char v282; // [rsp+A7h] [rbp-1F1h]
  bool v283; // [rsp+A7h] [rbp-1F1h]
  char v284; // [rsp+A7h] [rbp-1F1h]
  char v285; // [rsp+A7h] [rbp-1F1h]
  char v286; // [rsp+A8h] [rbp-1F0h]
  void *v287; // [rsp+A8h] [rbp-1F0h]
  void *v288; // [rsp+A8h] [rbp-1F0h]
  __int64 *v289; // [rsp+A8h] [rbp-1F0h]
  __int64 v290; // [rsp+A8h] [rbp-1F0h]
  __int64 v291; // [rsp+A8h] [rbp-1F0h]
  _QWORD *v292; // [rsp+A8h] [rbp-1F0h]
  _QWORD *v293; // [rsp+A8h] [rbp-1F0h]
  __int64 v294; // [rsp+A8h] [rbp-1F0h]
  __int64 v295; // [rsp+A8h] [rbp-1F0h]
  __int64 v296; // [rsp+B0h] [rbp-1E8h]
  __int64 v297; // [rsp+C0h] [rbp-1D8h]
  _QWORD *v298; // [rsp+C0h] [rbp-1D8h]
  _QWORD *v299; // [rsp+C0h] [rbp-1D8h]
  char v300; // [rsp+C0h] [rbp-1D8h]
  char v301; // [rsp+C0h] [rbp-1D8h]
  __int64 v302; // [rsp+C0h] [rbp-1D8h]
  char v303; // [rsp+C0h] [rbp-1D8h]
  char v304; // [rsp+C0h] [rbp-1D8h]
  char v305; // [rsp+C0h] [rbp-1D8h]
  char v306; // [rsp+C0h] [rbp-1D8h]
  _QWORD *v307; // [rsp+C0h] [rbp-1D8h]
  _QWORD *v308; // [rsp+C0h] [rbp-1D8h]
  _QWORD *v309; // [rsp+C0h] [rbp-1D8h]
  char v310; // [rsp+C8h] [rbp-1D0h]
  __int64 v311; // [rsp+C8h] [rbp-1D0h]
  __int64 v312; // [rsp+C8h] [rbp-1D0h]
  __int64 v313; // [rsp+C8h] [rbp-1D0h]
  char *v314; // [rsp+C8h] [rbp-1D0h]
  char *v315; // [rsp+C8h] [rbp-1D0h]
  __int64 v316; // [rsp+C8h] [rbp-1D0h]
  __int64 v317; // [rsp+C8h] [rbp-1D0h]
  char v318; // [rsp+C8h] [rbp-1D0h]
  char v319; // [rsp+C8h] [rbp-1D0h]
  char v320; // [rsp+C8h] [rbp-1D0h]
  _QWORD *v321; // [rsp+D8h] [rbp-1C0h]
  __int64 v322; // [rsp+D8h] [rbp-1C0h]
  __int64 v323; // [rsp+D8h] [rbp-1C0h]
  unsigned int v324; // [rsp+D8h] [rbp-1C0h]
  __int64 v325; // [rsp+D8h] [rbp-1C0h]
  char v326; // [rsp+E0h] [rbp-1B8h]
  __int64 v327; // [rsp+E0h] [rbp-1B8h]
  __int64 *v328; // [rsp+E0h] [rbp-1B8h]
  char *v329; // [rsp+E8h] [rbp-1B0h]
  _QWORD **v330; // [rsp+E8h] [rbp-1B0h]
  char *v331; // [rsp+F0h] [rbp-1A8h]
  char *v332; // [rsp+F8h] [rbp-1A0h]
  void *v333; // [rsp+100h] [rbp-198h] BYREF
  unsigned int v334; // [rsp+108h] [rbp-190h]
  char v335; // [rsp+10Ch] [rbp-18Ch]
  void *v336; // [rsp+110h] [rbp-188h] BYREF
  unsigned int v337; // [rsp+118h] [rbp-180h]
  char v338; // [rsp+11Ch] [rbp-17Ch]
  void *v339; // [rsp+120h] [rbp-178h] BYREF
  __int64 v340; // [rsp+128h] [rbp-170h]
  _QWORD v341[16]; // [rsp+130h] [rbp-168h] BYREF
  void *ptr; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v343; // [rsp+1B8h] [rbp-E0h]
  __int128 v344; // [rsp+1C0h] [rbp-D8h] BYREF
  __int64 v345; // [rsp+1D0h] [rbp-C8h]
  int v346; // [rsp+1D8h] [rbp-C0h]
  char v347; // [rsp+1DCh] [rbp-BCh]
  char v348; // [rsp+1E0h] [rbp-B8h]
  __int128 v349; // [rsp+1E8h] [rbp-B0h]
  __int64 v350; // [rsp+1F8h] [rbp-A0h]
  __int16 v351; // [rsp+200h] [rbp-98h]
  char v352; // [rsp+202h] [rbp-96h]
  __int128 v353; // [rsp+208h] [rbp-90h]
  __int64 v354; // [rsp+218h] [rbp-80h]
  int v355; // [rsp+220h] [rbp-78h]
  char v356; // [rsp+224h] [rbp-74h]
  char v357; // [rsp+228h] [rbp-70h]
  __int128 v358; // [rsp+230h] [rbp-68h]
  __int64 v359; // [rsp+240h] [rbp-58h]
  __int16 v360; // [rsp+248h] [rbp-50h]
  char v361; // [rsp+24Ah] [rbp-4Eh]
  char v362; // [rsp+250h] [rbp-48h]

  v3 = a1;
  ptr = *(void **)(a2 + 32);
  v275 = *(_QWORD *)(sub_EFEE90(&ptr, 1) + 56);
  ptr = *(void **)(a3 + 32);
  v5 = sub_EFEE90(&ptr, 1);
  i = *(_DWORD *)(a2 + 20);
  v7 = *a1;
  v296 = *(_QWORD *)(v5 + 56);
  if ( i )
  {
    if ( (*(_DWORD *)(a2 + 48) & 0x7FFFFFFF) == 9 )
    {
      v20 = *(_DWORD **)(a2 + 56);
      v245 = v20;
      v247 = &v20[6 * *(unsigned int *)(a2 + 52)];
      if ( v20 != v247 )
      {
        v8 = a2;
        i = 0;
        if ( (*(_BYTE *)(a2 + 17) & 4) == 0 )
          goto LABEL_5;
        goto LABEL_21;
      }
      v227 = *(_DWORD **)(a2 + 56);
      v228 = &v20[6 * *(unsigned int *)(a2 + 52)];
      v229 = i;
      for ( i = 1; i != v229; ++i )
      {
        v230 = *(_DWORD **)(a2 + 24LL * i + 56);
        if ( (*(_DWORD *)(a2 + 24LL * i + 48) & 0x7FFFFFFF) != 9 )
          break;
        v227 = *(_DWORD **)(a2 + 24LL * i + 56);
        v228 = &v230[6 * *(unsigned int *)(a2 + 24LL * i + 52)];
        if ( v230 != v228 )
          break;
      }
      v245 = v227;
      v247 = v228;
    }
    else
    {
      v247 = nullptr;
      i = 0;
      v245 = nullptr;
    }
  }
  else
  {
    v247 = nullptr;
    v245 = nullptr;
  }
  v8 = a2;
  if ( (*(_BYTE *)(a2 + 17) & 4) == 0 )
  {
LABEL_5:
    v9 = *(_QWORD *)(v8 + 16);
    goto LABEL_6;
  }
LABEL_21:
  v21 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 29;
  v9 = *(_QWORD *)(a2 + 16);
  if ( !v21 )
    goto LABEL_7;
LABEL_6:
  if ( (v9 & 0x80000) != 0 )
  {
LABEL_7:
    v274 = 0;
    v272 = 0;
    v280 = 0;
    v263 = 0;
    goto LABEL_8;
  }
  v22 = sub_A9C420(v7, *(_QWORD *)(a2 + 8));
  v23 = v22;
  v263 = v22;
  if ( !v22 )
  {
    v274 = 0;
    v7 = *v3;
    v272 = 0;
    v280 = 0;
    goto LABEL_8;
  }
  v7 = *v3;
  v280 = *(_DWORD *)(v22 + 20);
  if ( !v280 )
  {
    v274 = 0;
    v272 = 0;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(v22 + 48) & 0x7FFFFFFF) != 9 )
  {
    v274 = 0;
    v272 = 0;
    v280 = 0;
    goto LABEL_8;
  }
  v24 = *(_QWORD *)(v22 + 56);
  v272 = v24;
  v25 = v24 + 24LL * *(unsigned int *)(v22 + 52);
  v274 = v25;
  if ( v24 == v25 )
  {
    v223 = v24;
    v224 = v25;
    for ( j = 1; j != (unsigned __int64)v280; ++j )
    {
      v226 = *(_QWORD *)(v23 + 24LL * j + 56);
      if ( (*(_DWORD *)(v23 + 24LL * j + 48) & 0x7FFFFFFF) != 9 )
        break;
      v223 = *(_QWORD *)(v23 + 24LL * j + 56);
      v224 = v226 + 24LL * *(unsigned int *)(v23 + 24LL * j + 52);
      if ( v226 != v224 )
        break;
    }
    v280 = j;
    v274 = v224;
    v272 = v223;
LABEL_8:
    v10 = a3;
    k = *(_DWORD *)(a3 + 20);
    if ( k )
      goto LABEL_9;
LABEL_28:
    v248 = nullptr;
    v242 = nullptr;
    goto LABEL_29;
  }
  v280 = 0;
  v10 = a3;
  k = *(_DWORD *)(a3 + 20);
  if ( !k )
    goto LABEL_28;
LABEL_9:
  v12 = v10;
  if ( (*(_DWORD *)(v10 + 48) & 0x7FFFFFFF) == 9 )
  {
    v13 = *(_DWORD **)(v10 + 56);
    v242 = v13;
    v14 = &v13[6 * *(unsigned int *)(v10 + 52)];
    v248 = v14;
    if ( v13 != v14 )
    {
      v10 = v12;
      k = 0;
      if ( (*(_BYTE *)(v12 + 17) & 4) != 0 )
        goto LABEL_12;
      goto LABEL_30;
    }
    v218 = v12;
    v219 = v13;
    v220 = k;
    v221 = v14;
    for ( k = 1; k != v220; ++k )
    {
      v222 = *(_DWORD **)(v218 + 24LL * k + 56);
      if ( (*(_DWORD *)(v218 + 24LL * k + 48) & 0x7FFFFFFF) != 9 )
        break;
      v219 = *(_DWORD **)(v218 + 24LL * k + 56);
      v221 = &v222[6 * *(unsigned int *)(v218 + 24LL * k + 52)];
      if ( v222 != v221 )
        break;
    }
    v242 = v219;
    v10 = a3;
    v248 = v221;
  }
  else
  {
    v248 = nullptr;
    k = 0;
    v242 = nullptr;
  }
LABEL_29:
  if ( (*(_BYTE *)(v10 + 17) & 4) != 0 )
  {
LABEL_12:
    v243 = *(_QWORD *)(v10 + 8);
    v15 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(*(_QWORD *)(v243 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 29 )
      goto LABEL_32;
    goto LABEL_31;
  }
LABEL_30:
  v15 = *(_QWORD *)(v10 + 16);
LABEL_31:
  if ( (v15 & 0x80000) == 0 )
  {
    v16 = sub_A9C420(v7, *(_QWORD *)(a3 + 8));
    v17 = v16;
    v246 = v16;
    if ( v16 )
    {
      v264 = *(_DWORD *)(v16 + 20);
      if ( !v264 )
      {
        v273 = 0;
        v271 = 0;
        goto LABEL_33;
      }
      if ( (*(_DWORD *)(v16 + 48) & 0x7FFFFFFF) == 9 )
      {
        v18 = *(_QWORD *)(v16 + 56);
        v271 = v18;
        v19 = v18 + 24LL * *(unsigned int *)(v16 + 52);
        v273 = v19;
        if ( v18 == v19 )
        {
          v231 = 1;
          v232 = v18;
          v233 = v19;
          while ( v231 != (unsigned __int64)v264 )
          {
            v234 = *(_QWORD *)(v17 + 24LL * v231 + 56);
            if ( (*(_DWORD *)(v17 + 24LL * v231 + 48) & 0x7FFFFFFF) != 9 )
              break;
            v232 = *(_QWORD *)(v17 + 24LL * v231 + 56);
            v233 = v234 + 24LL * *(unsigned int *)(v17 + 24LL * v231 + 52);
            if ( v234 != v233 )
              break;
            ++v231;
          }
          v264 = v231;
          v271 = v232;
          v273 = v233;
        }
        else
        {
          v264 = 0;
        }
        goto LABEL_33;
      }
    }
    v273 = 0;
    v271 = 0;
    v264 = 0;
    goto LABEL_33;
  }
LABEL_32:
  v273 = 0;
  v271 = 0;
  v264 = 0;
  v246 = 0;
LABEL_33:
  for ( m = 0; ; ++m )
  {
    if ( *(_DWORD *)(a2 + 20) <= i )
    {
      result = a3;
      if ( *(_DWORD *)(a3 + 20) <= k )
        break;
    }
    v27 = *((_DWORD *)v3 + 692);
    v360 = 0;
    p_ptr = &ptr;
    HIDWORD(v343) = v27;
    v29 = *((unsigned int *)v3 + 18);
    v351 = 0;
    v30 = (char *)v3[8];
    v31 = v29 + 1;
    ptr = nullptr;
    v32 = *((unsigned int *)v3 + 19);
    LODWORD(v343) = 0;
    v344 = 0;
    v33 = (unsigned __int64)&v30[168 * v29];
    v346 = 1;
    v345 = 0;
    v347 = 0;
    v348 = 0;
    v349 = 0;
    v350 = 0;
    v352 = 0;
    v353 = 0;
    v355 = 1;
    v354 = 0;
    v356 = 0;
    v357 = 0;
    v358 = 0;
    v359 = 0;
    v361 = 0;
    v362 = 0;
    if ( v31 > v32 )
    {
      v171 = v3 + 10;
      if ( v30 > (char *)&ptr || v33 <= (unsigned __int64)&ptr )
      {
        v178 = sub_22136C0(v3 + 8, v3 + 10, v31, 168, &v339);
        sub_A9C550((__int64)(v3 + 8), v178);
        v179 = v3[8];
        v180 = (int)v339;
        if ( v179 != v171 )
          free(v179);
        v181 = *((unsigned int *)v3 + 18);
        v3[8] = (_QWORD *)v178;
        *((_DWORD *)v3 + 19) = v180;
        v33 = v178 + 168 * v181;
        p_ptr = &ptr;
      }
      else
      {
        v172 = (char *)((char *)&ptr - v30);
        v256 = sub_22136C0(v3 + 8, v3 + 10, v31, 168, &v339);
        sub_A9C550((__int64)(v3 + 8), v256);
        v173 = v3[8];
        v174 = v256;
        v175 = (int)v339;
        if ( v173 != v171 )
        {
          free(v173);
          v174 = v256;
        }
        v176 = *((unsigned int *)v3 + 18);
        v3[8] = (_QWORD *)v174;
        p_ptr = (void **)&v172[v174];
        *((_DWORD *)v3 + 19) = v175;
        v33 = v174 + 168 * v176;
      }
    }
    *(_DWORD *)v33 = *(_DWORD *)p_ptr;
    *(_DWORD *)(v33 + 4) = *((_DWORD *)p_ptr + 1);
    *(_DWORD *)(v33 + 8) = *((_DWORD *)p_ptr + 2);
    *(_DWORD *)(v33 + 12) = *((_DWORD *)p_ptr + 3);
    *(_QWORD *)(v33 + 16) = p_ptr[2];
    *(_QWORD *)(v33 + 24) = p_ptr[3];
    *(_DWORD *)(v33 + 40) = *((_DWORD *)p_ptr + 10);
    *(_QWORD *)(v33 + 32) = p_ptr[4];
    v34 = *((_BYTE *)p_ptr + 44);
    *((_DWORD *)p_ptr + 10) = 0;
    *(_BYTE *)(v33 + 44) = v34;
    *(_BYTE *)(v33 + 48) = *((_BYTE *)p_ptr + 48);
    *(_QWORD *)(v33 + 56) = p_ptr[7];
    *(_QWORD *)(v33 + 64) = p_ptr[8];
    *(_QWORD *)(v33 + 72) = p_ptr[9];
    *(_BYTE *)(v33 + 80) = *((_BYTE *)p_ptr + 80);
    *(_BYTE *)(v33 + 81) = *((_BYTE *)p_ptr + 81);
    *(_BYTE *)(v33 + 82) = *((_BYTE *)p_ptr + 82);
    *(_QWORD *)(v33 + 88) = p_ptr[11];
    *(_QWORD *)(v33 + 96) = p_ptr[12];
    *(_DWORD *)(v33 + 112) = *((_DWORD *)p_ptr + 28);
    *(_QWORD *)(v33 + 104) = p_ptr[13];
    v35 = *((_BYTE *)p_ptr + 116);
    *((_DWORD *)p_ptr + 28) = 0;
    *(_BYTE *)(v33 + 116) = v35;
    *(_BYTE *)(v33 + 120) = *((_BYTE *)p_ptr + 120);
    *(_QWORD *)(v33 + 128) = p_ptr[16];
    *(_QWORD *)(v33 + 136) = p_ptr[17];
    *(_QWORD *)(v33 + 144) = p_ptr[18];
    *(_BYTE *)(v33 + 152) = *((_BYTE *)p_ptr + 152);
    *(_BYTE *)(v33 + 153) = *((_BYTE *)p_ptr + 153);
    *(_BYTE *)(v33 + 154) = *((_BYTE *)p_ptr + 154);
    *(_BYTE *)(v33 + 160) = *((_BYTE *)p_ptr + 160);
    v36 = *((unsigned int *)v3 + 692);
    v37 = v3[8];
    ++*((_DWORD *)v3 + 18);
    v38 = (unsigned __int64)&v37[21 * v36];
    v39 = *(unsigned int *)(v38 + 8);
    if ( (_DWORD)v39 )
    {
      do
      {
        v38 = (unsigned __int64)&v37[21 * v39];
        v39 = *(unsigned int *)(v38 + 4);
      }
      while ( (_DWORD)v39 );
      *(_DWORD *)(v38 + 4) = *((_DWORD *)v3 + 693);
    }
    else
    {
      *(_DWORD *)(v38 + 8) = *((_DWORD *)v3 + 693);
    }
    v40 = *((unsigned int *)v3 + 693);
    *((_DWORD *)v3 + 692) = v40;
    *((_DWORD *)v3 + 693) = v40 + 1;
    v41 = (*(_DWORD *)(v275 + 20) & 0x1FFFFFFFu) - 1;
    if ( (unsigned int)v41 > m )
      v41 = m;
    v42 = *(_QWORD *)(v275 + 8 * v41 + 24);
    v43 = *(_BYTE *)(v42 + 28) & 0x7F;
    if ( v43 != 67 )
    {
      if ( v43 == 68 )
      {
        if ( *(_DWORD *)(a2 + 20) > i )
        {
          v136 = (__int64)v245;
          if ( v245 == v247 )
            v136 = a2 + 24LL * i + 48;
          goto LABEL_245;
        }
        if ( v263 )
        {
          if ( *(_DWORD *)(v263 + 20) <= v280 )
          {
            v138 = 0;
            v137 = 0;
          }
          else
          {
            v136 = v272;
            if ( v274 == v272 )
              v136 = v263 + 24LL * v280 + 48;
LABEL_245:
            sub_EFED50(&ptr, *(_QWORD *)(v136 + 8));
            v137 = sub_EFEE90(&ptr, 0);
            v138 = v137 != 0;
          }
        }
        else
        {
          v137 = 0;
          v138 = 0;
        }
        if ( k < *(_DWORD *)(a3 + 20) )
        {
          v139 = (__int64)v242;
          if ( v242 == v248 )
            v139 = a3 + 24LL * k + 48;
          goto LABEL_249;
        }
        if ( v246 )
        {
          if ( *(_DWORD *)(v246 + 20) <= v264 )
          {
            v142 = 0;
            v140 = 0;
            v141 = 0;
          }
          else
          {
            v139 = v271;
            if ( v273 == v271 )
              v139 = v246 + 24LL * v264 + 48;
LABEL_249:
            sub_EFED50(&ptr, *(_QWORD *)(v139 + 8));
            v140 = sub_EFEE90(&ptr, 0);
            v141 = v140 != 0;
            v142 = v140 != 0 && v138;
            if ( k < *(_DWORD *)(a3 + 20) )
              v141 = 0;
          }
        }
        else
        {
          v140 = 0;
          v142 = 0;
          v141 = 0;
        }
        v143 = *(_DWORD *)(a2 + 20) <= i && v138;
        LODWORD(v3[8][21 * *((unsigned int *)v3 + 692)]) = 4;
        v3[8][21 * *((unsigned int *)v3 + 692) + 8] = v137;
        v3[8][21 * *((unsigned int *)v3 + 692) + 17] = v140;
        BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v143;
        BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v141;
        if ( v142 )
        {
          v144 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v137 + 32LL))(v137);
          v142 = v144 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v140 + 32LL))(v140);
        }
        goto LABEL_253;
      }
      v44 = a2;
      v45 = (*(_DWORD *)(v296 + 20) & 0x1FFFFFFFu) - 1;
      if ( (unsigned int)v45 > m )
        v45 = m;
      v46 = *(_QWORD *)(v296 + 8 * v45 + 24);
      v335 = 0;
      v334 = 1;
      v333 = nullptr;
      v337 = 1;
      v336 = nullptr;
      v338 = 0;
      if ( *(_DWORD *)(a2 + 20) > i )
      {
        if ( v245 != v247 )
        {
          switch ( *v245 & 0x7FFFFFFF )
          {
            case 2:
              v73 = (__int64)v245;
              goto LABEL_112;
            case 3:
              goto LABEL_90;
            case 4:
              v73 = (__int64)v245;
              goto LABEL_166;
            case 5:
              goto LABEL_51;
            case 8:
              v73 = (__int64)v245;
              goto LABEL_123;
            default:
              goto LABEL_169;
          }
        }
        v73 = a2 + 24LL * i + 48;
        switch ( *(_DWORD *)v73 & 0x7FFFFFFF )
        {
          case 2:
LABEL_112:
            v74 = *(_QWORD *)(v73 + 8);
            v48 = *(_QWORD **)(v73 + 16);
            v281 = 0;
            v75 = v48[6];
            v76 = *(_QWORD *)(v74 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
            {
              v260 = v48;
              v216 = sub_F44710(v76, a2, v40, v38, v48);
              v48 = v260;
              v217 = *(_QWORD *)&byte_8[v216 & 0xFFFFFFFFFFFFFFF0LL];
              LOBYTE(v216) = v217 | v216;
              v38 = v217 & 0xFFFFFFFFFFFFFFF8LL;
              v281 = (v38 | v216 & 7) == (*(_QWORD *)&byte_8[v75 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                                        | ((unsigned __int8)*(_QWORD *)&byte_8[v75 & 0xFFFFFFFFFFFFFFF0LL]
                                         | (unsigned __int8)v75)
                                        & 7);
            }
            v249 = 0;
            v47 = 0;
            v49 = 0;
            v276 = 0;
            v265 = 0;
            goto LABEL_52;
          case 3:
LABEL_90:
            v50 = a3;
            v249 = 1;
            v48 = nullptr;
            v49 = 0;
            v281 = 0;
            v47 = 1;
            v51 = *(_DWORD *)(a3 + 20);
            v265 = 0;
            v276 = 0;
            if ( k >= v51 )
              goto LABEL_91;
            goto LABEL_53;
          case 4:
LABEL_166:
            v93 = *(_BYTE *)(v73 + 7) >> 7;
            v44 = *(_DWORD *)(v73 + 4) & 0x7FFFFFFF;
            if ( (unsigned int)v44 > 0x40 )
            {
              sub_21E18C0(&ptr, v44, *(_QWORD *)(v73 + 8), ((unsigned __int64)(unsigned int)v44 + 63) >> 6);
              v44 = (unsigned int)v343;
              v94 = ptr;
              if ( v334 > 0x40 && v333 )
              {
                v270 = ptr;
                v258 = v343;
                operator delete[](v333);
                v94 = v270;
                v44 = v258;
              }
            }
            else
            {
              v94 = *(void **)(v73 + 8);
            }
            v333 = v94;
            v95 = *(_QWORD *)(v73 + 16);
            v47 = 0;
            v48 = nullptr;
            v334 = v44;
            v49 = 0;
            v335 = v93;
            v276 = v95;
            v249 = 1;
            v281 = 0;
            v265 = 1;
            goto LABEL_52;
          case 5:
LABEL_51:
            v249 = 0;
            v47 = 0;
            v48 = nullptr;
            v49 = 0;
            v276 = 0;
            v281 = 0;
            v265 = 0;
            goto LABEL_52;
          case 8:
LABEL_123:
            v49 = *(_QWORD *)(v73 + 8);
            goto LABEL_124;
          default:
LABEL_169:
            v44 = v263;
            v49 = 0;
            if ( !v263 )
              goto LABEL_170;
            goto LABEL_125;
        }
      }
      v49 = 0;
      if ( !*(_BYTE *)(v42 + 80) )
      {
        if ( !(_BYTE)byte_2CA2540 && __cxa_guard_acquire(&byte_2CA2540) )
        {
          qword_2CA2560 &= 0xFFFFFFFE00000000LL;
          qword_2CA2568 = 0;
          qword_2CA2578 = 0;
          __cxa_guard_release(&byte_2CA2540);
        }
        v38 = *(_QWORD *)(v42 + 72) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v38 )
        {
          v102 = (__int64 *)(*(_QWORD *)(v42 + 72) & 0xFFFFFFFFFFFFFFF8LL);
          v186 = (*(__int64 *)(v42 + 72) >> 1) & 3;
          if ( v186 == 1 )
          {
            v187 = *(_QWORD *)(v38 + 72);
            v102 = nullptr;
            if ( v187 )
            {
              v102 = (__int64 *)(*(_QWORD *)(v38 + 72) & 0xFFFFFFFFFFFFFFF8LL);
              if ( ((v187 >> 1) & 3) == 2 )
              {
                if ( v102 )
                  v102 = (__int64 *)v102[1];
              }
            }
          }
          else if ( v186 == 2 )
          {
            v102 = *(__int64 **)(v38 + 8);
          }
        }
        else
        {
          v102 = &qword_2CA2560;
        }
        v49 = v102[1];
      }
LABEL_124:
      v44 = v263;
      if ( v263 )
      {
LABEL_125:
        if ( *(_DWORD *)(v44 + 20) > v280 )
        {
          v80 = v272;
          if ( v274 == v272 )
            v80 = v44 + 24LL * v280 + 48;
          v81 = *(_DWORD *)v80 & 0x7FFFFFFF;
          switch ( *(_DWORD *)v80 & 0x7FFFFFFF )
          {
            case 0:
            case 1:
            case 6:
            case 7:
            case 8:
              if ( v49 )
                break;
              v49 = *(_QWORD *)(v80 + 8);
              v48 = nullptr;
              goto LABEL_142;
            case 2:
              v85 = *(_QWORD *)(v80 + 8);
              v48 = *(_QWORD **)(v80 + 16);
              v281 = 0;
              v86 = v48[6];
              v87 = *(_QWORD *)(v85 & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v87 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
              {
                v262 = v48;
                v236 = sub_F44710(v87, v44, v81, v38, v48);
                v48 = v262;
                v237 = *(_QWORD *)&byte_8[v86 & 0xFFFFFFFFFFFFFFF0LL];
                v238 = *(_QWORD *)&byte_8[v236 & 0xFFFFFFFFFFFFFFF0LL];
                LOBYTE(v236) = v238 | v236;
                v44 = v238 & 0xFFFFFFFFFFFFFFF8LL;
                v239 = v236;
                LOBYTE(v236) = v237 | v86;
                v38 = v237 & 0xFFFFFFFFFFFFFFF8LL;
                v281 = (v44 | v239 & 7) == (v38 | v236 & 7);
              }
              v249 = 0;
              v47 = 0;
              v276 = 0;
              v265 = 0;
              goto LABEL_52;
            case 3:
              v249 = 1;
              v47 = 1;
              v48 = nullptr;
              v276 = 0;
              v281 = 0;
              v265 = 0;
              goto LABEL_52;
            case 4:
              v82 = *(_BYTE *)(v80 + 7) >> 7;
              v44 = *(_DWORD *)(v80 + 4) & 0x7FFFFFFF;
              if ( (unsigned int)v44 > 0x40 )
              {
                v261 = *(_BYTE *)(v80 + 7) >> 7;
                sub_21E18C0(&ptr, v44, *(_QWORD *)(v80 + 8), ((unsigned __int64)(unsigned int)v44 + 63) >> 6);
                v44 = (unsigned int)v343;
                v82 = v261;
                v83 = ptr;
              }
              else
              {
                v83 = *(void **)(v80 + 8);
              }
              if ( v334 > 0x40 && v333 )
              {
                v277 = v82;
                v250 = v83;
                operator delete[](v333);
                v44 = (unsigned int)v44;
                v83 = v250;
                v82 = v277;
              }
              v335 = v82;
              v84 = *(_QWORD *)(v80 + 16);
              v47 = 0;
              v48 = nullptr;
              v333 = v83;
              v334 = v44;
              v276 = v84;
              v249 = 1;
              v281 = 0;
              v265 = 1;
              goto LABEL_52;
            case 5:
              break;
          }
        }
        v249 = 0;
        v47 = 0;
        v48 = nullptr;
        v276 = 0;
        v281 = 0;
        v265 = 0;
      }
      else
      {
LABEL_170:
        v48 = nullptr;
LABEL_142:
        v249 = 0;
        v47 = 0;
        v276 = 0;
        v281 = 0;
        v265 = 0;
      }
LABEL_52:
      v50 = a3;
      v51 = *(_DWORD *)(a3 + 20);
      if ( k < v51 )
      {
LABEL_53:
        v38 = (unsigned __int64)v248;
        if ( v242 != v248 )
        {
          v44 = (unsigned int)*v242;
          switch ( *v242 & 0x7FFFFFFF )
          {
            case 2:
              v68 = (__int64)v242;
              goto LABEL_108;
            case 3:
              goto LABEL_97;
            case 4:
              v68 = (__int64)v242;
              goto LABEL_116;
            case 5:
              goto LABEL_55;
            case 8:
              v68 = (__int64)v242;
              goto LABEL_144;
            default:
              goto LABEL_171;
          }
        }
        v68 = v50 + 24LL * k + 48;
        switch ( *(_DWORD *)v68 & 0x7FFFFFFF )
        {
          case 2:
LABEL_108:
            v69 = *(_QWORD *)(v68 + 8);
            v56 = *(_QWORD *)(v68 + 16);
            v286 = 0;
            v70 = *(_QWORD *)(v56 + 48);
            v71 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL);
            v72 = *(_QWORD *)(*(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v72 + 16) == 42 )
            {
              v318 = v47;
              v307 = v48;
              v215 = sub_F44710(v71, v44, v72, v248, v48);
              v48 = v307;
              v47 = v318;
              v286 = (*(_QWORD *)&byte_8[v215 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                    | ((unsigned __int8)*(_QWORD *)&byte_8[v215 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v215) & 7) == (*(_QWORD *)&byte_8[v70 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v70 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v70) & 7);
              v51 = *(_DWORD *)(a3 + 20);
            }
            v52 = 0;
            v53 = 0;
            v54 = 0;
            v55 = 0;
            v57 = 0;
            goto LABEL_56;
          case 3:
LABEL_97:
            v58 = &v3[8][21 * *((unsigned int *)v3 + 692)];
            if ( i >= *(_DWORD *)(a2 + 20) )
            {
              if ( !v49 )
              {
                v286 = 0;
                v56 = 0;
                v57 = 0;
                v53 = 0;
                v52 = 1;
                v54 = 1;
                v55 = 0;
                goto LABEL_308;
              }
              if ( v48 )
              {
                v286 = 0;
                v57 = 0;
                v59 = 0;
                v249 = 1;
                goto LABEL_101;
              }
              v56 = 0;
              v57 = 0;
              v249 = 1;
              v53 = 0;
              v55 = 0;
              v286 = 0;
              v54 = 1;
              v59 = 0;
              goto LABEL_356;
            }
            if ( !v48 )
            {
              v56 = 0;
              v57 = 0;
              v249 = 0;
              v59 = 0;
              v53 = 0;
              v286 = 0;
              v54 = 1;
              v55 = 0;
              goto LABEL_356;
            }
            v57 = 0;
            v59 = 0;
            v249 = 0;
            v286 = 0;
            if ( !v265 )
              goto LABEL_102;
            break;
          case 4:
LABEL_116:
            v77 = *(_BYTE *)(v68 + 7) >> 7;
            v78 = *(_DWORD *)(v68 + 4) & 0x7FFFFFFF;
            if ( (unsigned int)v78 > 0x40 )
            {
              v306 = v47;
              v293 = v48;
              sub_21E18C0(&ptr, v78, *(_QWORD *)(v68 + 8), ((unsigned __int64)(unsigned int)v78 + 63) >> 6);
              LODWORD(v78) = v343;
              v79 = ptr;
              v47 = v306;
              v48 = v293;
            }
            else
            {
              v79 = *(void **)(v68 + 8);
            }
            if ( v337 > 0x40 && v336 )
            {
              v310 = v47;
              v298 = v48;
              v287 = v79;
              operator delete[](v336);
              v47 = v310;
              v48 = v298;
              v79 = v287;
            }
            v336 = v79;
            v53 = *(_QWORD *)(v68 + 16);
            v54 = 0;
            v55 = 1;
            v337 = v78;
            v57 = 0;
            v52 = 1;
            v338 = v77;
            v56 = 0;
            v51 = *(_DWORD *)(a3 + 20);
            v286 = 0;
            goto LABEL_56;
          case 5:
LABEL_55:
            v286 = 0;
            v52 = 0;
            v53 = 0;
            v54 = 0;
            v55 = 0;
            v56 = 0;
            v57 = 0;
            goto LABEL_56;
          case 8:
LABEL_144:
            v57 = *(_QWORD *)(v68 + 8);
            goto LABEL_145;
          default:
LABEL_171:
            v57 = 0;
            goto LABEL_145;
        }
LABEL_404:
        v54 = v265;
        v56 = 0;
LABEL_65:
        *v58 = 7;
        v60 = (__int64)&v3[8][21 * *((unsigned int *)v3 + 692)];
        if ( *(_DWORD *)(v60 + 40) <= 0x40u && v334 <= 0x40 )
        {
          v213 = v333;
          *(_DWORD *)(v60 + 40) = v334;
          *(_QWORD *)(v60 + 32) = v213;
        }
        else
        {
          v297 = (__int64)&v3[8][21 * *((unsigned int *)v3 + 692)];
          v282 = v54;
          v266 = v59;
          sub_21E1960(v60 + 32, &v333);
          v60 = v297;
          v59 = v266;
          v54 = v282;
        }
        *(_BYTE *)(v60 + 44) = v335;
        LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 6]) = 1;
        v3[8][21 * *((unsigned int *)v3 + 692) + 2] = v276;
        v3[8][21 * *((unsigned int *)v3 + 692) + 7] = v49;
        v3[8][21 * *((unsigned int *)v3 + 692) + 18] = v56;
        LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v286;
        BYTE1(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v54;
        v3[8][21 * *((unsigned int *)v3 + 692) + 16] = v57;
        BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v249;
        BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v59;
        v61 = v337;
        LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 20]) = 0;
LABEL_69:
        if ( v61 > 0x40 )
        {
LABEL_70:
          if ( v336 )
            operator delete[](v336);
        }
LABEL_72:
        if ( v334 > 0x40 && v333 )
          operator delete[](v333);
        goto LABEL_75;
      }
LABEL_91:
      v57 = 0;
      if ( *(_BYTE *)(v46 + 80) )
      {
LABEL_145:
        if ( !v246 )
          goto LABEL_96;
      }
      else
      {
        if ( !(_BYTE)byte_2CA2540 )
        {
          v305 = v47;
          v292 = v48;
          v188 = __cxa_guard_acquire(&byte_2CA2540);
          v48 = v292;
          v47 = v305;
          if ( v188 )
          {
            qword_2CA2560 &= 0xFFFFFFFE00000000LL;
            qword_2CA2568 = 0;
            qword_2CA2578 = 0;
            __cxa_guard_release(&byte_2CA2540);
            v48 = v292;
            v47 = v305;
          }
        }
        v38 = *(_QWORD *)(v46 + 72) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v38 )
        {
          v66 = (__int64 *)(*(_QWORD *)(v46 + 72) & 0xFFFFFFFFFFFFFFF8LL);
          v184 = (*(__int64 *)(v46 + 72) >> 1) & 3;
          if ( v184 == 1 )
          {
            v185 = *(_QWORD *)(v38 + 72);
            v66 = nullptr;
            if ( v185 )
            {
              v66 = (__int64 *)(*(_QWORD *)(v38 + 72) & 0xFFFFFFFFFFFFFFF8LL);
              if ( ((v185 >> 1) & 3) == 2 )
              {
                if ( v66 )
                  v66 = (__int64 *)v66[1];
              }
            }
          }
          else if ( v184 == 2 )
          {
            v66 = *(__int64 **)(v38 + 8);
          }
        }
        else
        {
          v66 = &qword_2CA2560;
        }
        v57 = v66[1];
        if ( !v246 )
        {
LABEL_96:
          v56 = 0;
          v51 = *(_DWORD *)(a3 + 20);
          goto LABEL_154;
        }
      }
      if ( *(_DWORD *)(v246 + 20) <= v264 )
      {
LABEL_150:
        v51 = *(_DWORD *)(a3 + 20);
LABEL_151:
        v52 = 0;
        v53 = 0;
        v286 = 0;
        v54 = 0;
        v55 = 0;
        v56 = 0;
      }
      else
      {
        v88 = v271;
        if ( v273 == v271 )
        {
          v44 = v246;
          v88 = v246 + 24LL * v264 + 48;
        }
        switch ( *(_DWORD *)v88 & 0x7FFFFFFF )
        {
          case 2:
            v56 = *(_QWORD *)(v88 + 16);
            v286 = 0;
            v92 = *(_QWORD *)(*(_QWORD *)(v88 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v92 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
            {
              v295 = *(_QWORD *)(v56 + 48);
              v320 = v47;
              v309 = v48;
              v235 = sub_F44710(v92, v44, v295, v38, v48);
              v47 = v320;
              v48 = v309;
              v286 = (*(_QWORD *)&byte_8[v235 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                    | ((unsigned __int8)*(_QWORD *)&byte_8[v235 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v235) & 7) == (*(_QWORD *)&byte_8[v295 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v295 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v295) & 7);
            }
            v52 = 0;
            v53 = 0;
            v54 = 0;
            v55 = 0;
            v51 = *(_DWORD *)(a3 + 20);
            goto LABEL_56;
          case 3:
            v52 = 1;
            v53 = 0;
            v55 = 0;
            v286 = 0;
            v54 = 1;
            v56 = 0;
            v51 = *(_DWORD *)(a3 + 20);
            goto LABEL_56;
          case 4:
            v89 = *(_BYTE *)(v88 + 7) >> 7;
            v90 = *(_DWORD *)(v88 + 4) & 0x7FFFFFFF;
            if ( (unsigned int)v90 > 0x40 )
            {
              v319 = v47;
              v308 = v48;
              v294 = v88;
              sub_21E18C0(&ptr, v90, *(_QWORD *)(v88 + 8), ((unsigned __int64)(unsigned int)v90 + 63) >> 6);
              LODWORD(v90) = v343;
              v91 = ptr;
              v48 = v308;
              v88 = v294;
              v47 = v319;
            }
            else
            {
              v91 = *(void **)(v88 + 8);
            }
            if ( v337 > 0x40 && v336 )
            {
              v326 = v47;
              v321 = v48;
              v311 = v88;
              v288 = v91;
              operator delete[](v336);
              v48 = v321;
              v47 = v326;
              v88 = v311;
              v91 = v288;
            }
            v336 = v91;
            v53 = *(_QWORD *)(v88 + 16);
            v54 = 0;
            v55 = 1;
            v337 = v90;
            v52 = 1;
            v338 = v89;
            v56 = 0;
            v51 = *(_DWORD *)(a3 + 20);
            v286 = 0;
            goto LABEL_56;
          case 5:
            goto LABEL_150;
          case 8:
            v51 = *(_DWORD *)(a3 + 20);
            if ( v57 )
              goto LABEL_151;
            v57 = *(_QWORD *)(v88 + 8);
            v56 = 0;
            break;
          default:
            *(_QWORD *)&dword_0 = v38;
            BUG();
        }
LABEL_154:
        v52 = 0;
        v53 = 0;
        v286 = 0;
        v54 = 0;
        v55 = 0;
      }
LABEL_56:
      v58 = &v3[8][21 * *((unsigned int *)v3 + 692)];
      if ( *(_DWORD *)(a2 + 20) > i )
      {
        v249 = 0;
LABEL_59:
        v59 = 0;
        if ( k >= v51 )
          goto LABEL_60;
        goto LABEL_61;
      }
      if ( v49 )
      {
        v249 = 1;
        goto LABEL_59;
      }
LABEL_308:
      if ( v48 )
      {
        v249 = 1;
        if ( k < v51 )
        {
          v59 = 0;
          if ( !v56 )
          {
            if ( !v54 )
              goto LABEL_312;
            v249 = v54;
LABEL_316:
            if ( v55 )
            {
LABEL_317:
              *v58 = 8;
              v3[8][21 * *((unsigned int *)v3 + 692) + 9] = v48;
              LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v281;
              BYTE1(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v47;
              v3[8][21 * *((unsigned int *)v3 + 692) + 7] = v49;
              v177 = (__int64)&v3[8][21 * *((unsigned int *)v3 + 692)];
              if ( *(_DWORD *)(v177 + 112) <= 0x40u && (v61 = v337, v337 <= 0x40) )
              {
                v212 = v336;
                *(_DWORD *)(v177 + 112) = v337;
                *(_QWORD *)(v177 + 104) = v212;
              }
              else
              {
                v279 = v53;
                v269 = v59;
                sub_21E1960(v177 + 104, &v336);
                v61 = v337;
                v59 = v269;
                v53 = v279;
              }
              *(_BYTE *)(v177 + 116) = v338;
              LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 15]) = 1;
              v3[8][21 * *((unsigned int *)v3 + 692) + 11] = v53;
              v3[8][21 * *((unsigned int *)v3 + 692) + 16] = v57;
              BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v249;
              BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v59;
              LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 20]) = 0;
              goto LABEL_69;
            }
LABEL_101:
            if ( v265 )
              goto LABEL_404;
LABEL_102:
            v54 = 1;
            v56 = 0;
LABEL_103:
            *v58 = 6;
            v3[8][21 * *((unsigned int *)v3 + 692) + 9] = v48;
            v3[8][21 * *((unsigned int *)v3 + 692) + 18] = v56;
            LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v281;
            LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v286;
            BYTE1(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v47;
            BYTE1(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v54;
            v67 = v47 & v54;
            v3[8][21 * *((unsigned int *)v3 + 692) + 7] = v49;
            v3[8][21 * *((unsigned int *)v3 + 692) + 16] = v57;
            BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v249;
            BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v59;
            if ( v286 == v281 && v56 != 0 && v48 )
            {
              v259 = v67;
              v211 = (*(__int64 (__fastcall **)(_QWORD *))(*v48 + 32LL))(v48);
              v67 = (v211 == (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v56 + 32LL))(v56)) | v259;
            }
            v61 = v337;
            LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 20]) = v67;
            goto LABEL_69;
          }
LABEL_63:
          if ( v55 )
            goto LABEL_317;
          if ( v265 )
            goto LABEL_65;
          goto LABEL_103;
        }
LABEL_60:
        v59 = v52 | ((v57 | v56) != 0);
LABEL_61:
        if ( v48 )
        {
          if ( v56 )
            goto LABEL_63;
          if ( v54 )
            goto LABEL_316;
LABEL_312:
          if ( v55 )
            goto LABEL_317;
          if ( !v265 )
          {
            v54 = 0;
            v56 = 0;
            goto LABEL_103;
          }
          goto LABEL_232;
        }
      }
      else
      {
        v59 = 0;
        if ( k >= v51 )
          goto LABEL_60;
      }
      if ( v56 )
      {
        if ( v47 )
          goto LABEL_63;
LABEL_229:
        if ( v265 )
          goto LABEL_65;
        v132 = 1;
      }
      else
      {
        if ( v54 )
        {
LABEL_356:
          if ( v47 )
            goto LABEL_316;
          goto LABEL_229;
        }
        if ( v47 )
          goto LABEL_312;
        if ( v265 )
        {
LABEL_232:
          *v58 = 5;
          v133 = (__int64)&v3[8][21 * *((unsigned int *)v3 + 692)];
          if ( *(_DWORD *)(v133 + 40) <= 0x40u && v334 <= 0x40 )
          {
            v182 = v333;
            *(_DWORD *)(v133 + 40) = v334;
            *(_QWORD *)(v133 + 32) = v182;
          }
          else
          {
            v300 = v55;
            v290 = v53;
            v284 = v59;
            sub_21E1960(v133 + 32, &v333);
            v55 = v300;
            v53 = v290;
            v59 = v284;
          }
          *(_BYTE *)(v133 + 44) = v335;
          v134 = (__int64)&v3[8][21 * *((unsigned int *)v3 + 692)];
          if ( *(_DWORD *)(v134 + 112) <= 0x40u && (v61 = v337, v337 <= 0x40) )
          {
            v183 = v336;
            *(_DWORD *)(v134 + 112) = v337;
            *(_QWORD *)(v134 + 104) = v183;
          }
          else
          {
            v313 = (__int64)&v3[8][21 * *((unsigned int *)v3 + 692)];
            v301 = v55;
            v291 = v53;
            v285 = v59;
            sub_21E1960(v134 + 104, &v336);
            v61 = v337;
            v134 = v313;
            v55 = v301;
            v53 = v291;
            v59 = v285;
          }
          *(_BYTE *)(v134 + 116) = v338;
          LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 6]) = v265;
          LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 15]) = v55;
          v3[8][21 * *((unsigned int *)v3 + 692) + 2] = v276;
          v3[8][21 * *((unsigned int *)v3 + 692) + 11] = v53;
          v3[8][21 * *((unsigned int *)v3 + 692) + 7] = v49;
          v3[8][21 * *((unsigned int *)v3 + 692) + 16] = v57;
          BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v249;
          BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v59;
          if ( v55 && v265 )
          {
            v135 = 0;
            if ( (*(_QWORD *)&byte_8[v276 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v276 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v276) & 7) == (*(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v53) & 7) )
            {
              if ( v334 <= 0x40 )
                v135 = v333 == v336;
              else
                v135 = sub_21E2030(&v333, &v336);
            }
            LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 20]) = v135;
          }
          goto LABEL_69;
        }
        v54 = 0;
        v132 = 0;
      }
      if ( !v55 )
      {
        if ( !v132 )
        {
          *v58 = 3;
          v3[8][21 * *((unsigned int *)v3 + 692) + 7] = v49;
          v3[8][21 * *((unsigned int *)v3 + 692) + 16] = v57;
          BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v249;
          BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v59;
          if ( v57 == v49 )
          {
            v132 = 1;
          }
          else if ( v49 && v57 )
          {
            v168 = *v3;
            v340 = 0x2000000000LL;
            v339 = v341;
            v343 = 0x2000000000LL;
            v253 = v168;
            ptr = &v344;
            sub_EF6750(v49, &v339, v168, 1, 0);
            sub_EF6750(v57, &ptr, v253, 1, 0);
            v132 = sub_21FF190(&v339, &ptr);
            if ( ptr != &v344 )
            {
              v254 = v132;
              free(ptr);
              v132 = v254;
            }
            if ( v339 != v341 )
            {
              v255 = v132;
              free(v339);
              v132 = v255;
            }
          }
          v169 = v337 <= 0x40;
          LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 20]) = v132;
          if ( !v169 )
            goto LABEL_70;
          goto LABEL_72;
        }
        goto LABEL_103;
      }
      goto LABEL_232;
    }
    v111 = *(_DWORD *)(a2 + 20);
    if ( v111 > i )
    {
      v112 = (__int64)v245;
      if ( v245 == v247 )
        v112 = a2 + 24LL * i + 48;
LABEL_204:
      v113 = *(_QWORD *)(v112 + 8);
      v114 = (__int64 *)(v113 & 0xFFFFFFFFFFFFFFF0LL);
      goto LABEL_205;
    }
    if ( v263 && *(_DWORD *)(v263 + 20) > v280 )
    {
      v112 = v272;
      if ( v274 == v272 )
        v112 = v263 + 24LL * v280 + 48;
      goto LABEL_204;
    }
    v114 = nullptr;
    v113 = 0;
LABEL_205:
    if ( k < *(_DWORD *)(a3 + 20) )
    {
      v115 = (__int64)v242;
      if ( v242 == v248 )
        v115 = a3 + 24LL * k + 48;
      v267 = *(_QWORD *)(v115 + 8);
      if ( v111 <= i )
      {
        v278 = 0;
        v283 = v114 != nullptr;
      }
      else
      {
        v283 = 0;
        v278 = 0;
      }
LABEL_210:
      if ( !v114 )
        goto LABEL_295;
      goto LABEL_211;
    }
    if ( v246 && *(_DWORD *)(v246 + 20) > v264 )
    {
      v170 = v271;
      if ( v273 == v271 )
        v170 = v246 + 24LL * v264 + 48;
      v267 = *(_QWORD *)(v170 + 8);
      v278 = (v267 & 0xFFFFFFFFFFFFFFF0LL) != 0;
      if ( v111 <= i )
      {
LABEL_353:
        v283 = v114 != nullptr;
        goto LABEL_210;
      }
    }
    else
    {
      v278 = 0;
      v267 = 0;
      if ( v111 <= i )
        goto LABEL_353;
    }
    v283 = 0;
    if ( !v114 )
      goto LABEL_295;
LABEL_211:
    v289 = (__int64 *)(v267 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v267 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_295;
    v116 = *(_QWORD *)&byte_8[v267 & 0xFFFFFFFFFFFFFFF0LL];
    v117 = v116 | v267;
    v118 = v116 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v114[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v113 | (unsigned __int8)v114[1]) & 7) == (v118 | v117 & 7) )
      goto LABEL_295;
    v299 = *v3;
    v251 = sub_F46B20(*v114);
    if ( v251 )
    {
      v122 = sub_F46B20(*v289);
      if ( !v122 )
        goto LABEL_383;
      goto LABEL_215;
    }
    v200 = *v114;
    if ( *(_BYTE *)(*v114 + 16) == 46 )
    {
LABEL_394:
      if ( (*(_BYTE *)(v200 + 18) & 8) != 0 )
        v201 = *(_QWORD *)(v200 + 48);
      else
        v201 = *(_QWORD *)(v200 + 8);
      v202 = v201 & 0xFFFFFFFFFFFFFFF0LL;
      v203 = *(_QWORD *)(*(_QWORD *)v202 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
      v204 = *(_QWORD *)v203;
      v205 = *(unsigned __int8 *)(*(_QWORD *)v203 + 16LL);
      goto LABEL_397;
    }
    v202 = (unsigned __int64)v114;
    v204 = *(_QWORD *)(*(_QWORD *)(v200 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v205 = *(unsigned __int8 *)(v204 + 16);
    if ( (_BYTE)v205 == 46 )
    {
      v200 = sub_F3F310(*v114, v118, v205, v119);
      if ( v200 )
        goto LABEL_394;
      v214 = *(_QWORD *)(*v114 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v204 = *(_QWORD *)v214;
      v205 = *(unsigned __int8 *)(*(_QWORD *)v214 + 16LL);
    }
LABEL_397:
    if ( (_BYTE)v205 != 48
      || (v206 = sub_F3D1D0(v204, v118, v205, v119, v120), (*(_BYTE *)(v206 + 28) & 0x7Fu) - 60 > 1) )
    {
      if ( sub_F46B20(*v289) )
        goto LABEL_392;
LABEL_383:
      v189 = v267 & 0xFFFFFFFFFFFFFFF0LL;
      v190 = *v289;
      if ( *(_BYTE *)(*v289 + 16) == 46 )
      {
        if ( (*(_BYTE *)(v190 + 18) & 8) != 0 )
          goto LABEL_385;
LABEL_424:
        v191 = *(_QWORD *)(v190 + 8);
        goto LABEL_386;
      }
      v193 = *(_QWORD *)(*(_QWORD *)(v190 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v194 = *(unsigned __int8 *)(v193 + 16);
      if ( (_BYTE)v194 == 46 )
      {
        v190 = sub_F3F310(*v289, v118, v194, v121);
        v189 = v267 & 0xFFFFFFFFFFFFFFF0LL;
        if ( v190 )
        {
          if ( (*(_BYTE *)(v190 + 18) & 8) == 0 )
            goto LABEL_424;
LABEL_385:
          v191 = *(_QWORD *)(v190 + 48);
LABEL_386:
          v189 = v191 & 0xFFFFFFFFFFFFFFF0LL;
        }
        v192 = *(_QWORD *)(*(_QWORD *)v189 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
        v193 = *(_QWORD *)v192;
        v194 = *(unsigned __int8 *)(*(_QWORD *)v192 + 16LL);
      }
      if ( (_BYTE)v194 != 48 )
        goto LABEL_392;
      v195 = sub_F3D1D0(v193, v118, v194, v121, v123);
      if ( (*(_BYTE *)(v195 + 28) & 0x7Fu) - 60 > 1 )
        goto LABEL_392;
      v196 = *(_QWORD *)&byte_8[*(_QWORD *)v189 & 0xFFFFFFFFFFFFFFF0LL];
      v197 = *(unsigned int **)(v195 + 168);
      v315 = (char *)(v197 + 2);
      v325 = *v197;
      v198 = sub_B9B550(v195);
      sub_EFED60(&ptr, v198);
      v199 = sub_A93F70(v299, (__int64)ptr, v315, v325, nullptr, 0, v196);
      v122 = sub_F46B20(*(_QWORD *)(v199 & 0xFFFFFFFFFFFFFFF0LL));
      if ( !v251 || !v122 )
        goto LABEL_392;
      goto LABEL_215;
    }
    v207 = *(_QWORD *)&byte_8[*(_QWORD *)v202 & 0xFFFFFFFFFFFFFFF0LL];
    v208 = *(unsigned int **)(v206 + 168);
    v257 = (char *)(v208 + 2);
    v316 = *v208;
    v209 = sub_B9B550(v206);
    sub_EFED60(&ptr, v209);
    v118 = (unsigned __int64)ptr;
    v210 = sub_A93F70(v299, (__int64)ptr, v257, v316, nullptr, 0, v207);
    v251 = sub_F46B20(*(_QWORD *)(v210 & 0xFFFFFFFFFFFFFFF0LL));
    v122 = sub_F46B20(*v289);
    if ( !v122 )
      goto LABEL_383;
    if ( !v251 )
      goto LABEL_392;
LABEL_215:
    v312 = sub_A92560(v299, *(_QWORD *)(v122 + 32), 1u);
    if ( sub_A92560(v299, *(_QWORD *)(v251 + 32), 1u) != v312 )
    {
      v340 = 0x100000001LL;
      v339 = v341;
      v341[0] = v251;
      ptr = &v344;
      v343 = 0x100000000LL;
      if ( (*(_BYTE *)(v251 + 18) & 8) != 0 )
      {
        v124 = v251;
        while ( 1 )
        {
          v125 = sub_F3AB60(v124);
          v124 = sub_F46B20(*(_QWORD *)(v125 & 0xFFFFFFFFFFFFFFF0LL));
          if ( !v124 )
            break;
          v126 = (unsigned int)v340 + 1LL;
          if ( v126 > HIDWORD(v340) )
          {
            v317 = v124;
            sub_22134E0(&v339, v341, v126, 8);
            v124 = v317;
            *((_QWORD *)v339 + (unsigned int)v340) = v317;
            LODWORD(v340) = v340 + 1;
            if ( (*(_BYTE *)(v317 + 18) & 8) == 0 )
              break;
          }
          else
          {
            *((_QWORD *)v339 + (unsigned int)v340) = v124;
            LODWORD(v340) = v340 + 1;
            if ( (*(_BYTE *)(v124 + 18) & 8) == 0 )
              break;
          }
        }
      }
      v127 = v122;
      while ( 1 )
      {
        v130 = (unsigned int)v343;
        v131 = (unsigned int)v343 + 1LL;
        if ( v131 > HIDWORD(v343) )
        {
          v322 = v127;
          sub_22134E0(&ptr, &v344, v131, 8);
          v130 = (unsigned int)v343;
          v127 = v322;
        }
        *((_QWORD *)ptr + v130) = v127;
        v128 = (unsigned int)(v343 + 1);
        LODWORD(v343) = v343 + 1;
        if ( (*(_BYTE *)(v127 + 18) & 8) == 0 )
          break;
        v129 = sub_F3AB60(v127);
        v127 = sub_F46B20(*(_QWORD *)(v129 & 0xFFFFFFFFFFFFFFF0LL));
        if ( !v127 )
        {
          v128 = (unsigned int)v343;
          break;
        }
      }
      v329 = (char *)ptr;
      v314 = (char *)v339;
      v331 = (char *)ptr + 8 * v128;
      v332 = (char *)v339 + 8 * (unsigned int)v340;
      v327 = *((_QWORD *)v332 - 1);
      v323 = sub_A92560(v299, *(_QWORD *)(*((_QWORD *)v331 - 1) + 32LL), 1u);
      v145 = sub_A92560(v299, *(_QWORD *)(v327 + 32), 1u);
      v146 = 0;
      if ( v145 == v323 )
      {
        v147 = (__int64 *)v332;
        v148 = (__int64 *)v331;
        if ( v314 != v332 && v329 != v331 )
        {
          v149 = v299;
          v252 = k;
          v302 = v113;
          v324 = i;
          v150 = (__int64 *)v329;
          v328 = v114;
          v151 = (__int64 *)v331;
          v330 = v3;
          v152 = v332;
          do
          {
            v153 = *((_QWORD *)v152 - 1);
            v154 = sub_A92560(v149, *(_QWORD *)(*(v151 - 1) + 32), 1u);
            if ( sub_A92560(v149, *(_QWORD *)(v153 + 32), 1u) != v154 )
              break;
            --v151;
            v152 -= 8;
          }
          while ( v150 != v151 && v314 != v152 );
          v148 = v151;
          v147 = (__int64 *)v152;
          k = v252;
          v113 = v302;
          i = v324;
          v114 = v328;
          v3 = v330;
        }
        v122 = *v148;
        v146 = 1;
        v251 = *v147;
      }
      if ( ptr != &v344 )
      {
        v303 = v146;
        free(ptr);
        v146 = v303;
      }
      if ( v339 != v341 )
      {
        v304 = v146;
        free(v339);
        v146 = v304;
      }
      if ( !v146 )
      {
LABEL_392:
        v40 = *((unsigned int *)v3 + 692);
LABEL_295:
        LODWORD(v3[8][21 * v40]) = 2;
        v3[8][21 * *((unsigned int *)v3 + 692) + 2] = v113;
        v3[8][21 * *((unsigned int *)v3 + 692) + 11] = v267;
        BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v283;
        v142 = 0;
        BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v278;
        if ( v114 && (v267 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          v142 = (v114[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v114[1] | (unsigned __int8)v113) & 7) == (*(_QWORD *)&byte_8[v267 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v267 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v267) & 7);
LABEL_253:
        LOBYTE(v3[8][21 * *((unsigned int *)v3 + 692) + 20]) = v142;
        goto LABEL_75;
      }
    }
    v155 = v114[1];
    v156 = 0;
    if ( (v155 & 8) != 0 )
      v156 = *(__int64 *)((char *)&qword_18 + (v155 & 0xFFFFFFFFFFFFFFF0LL));
    v157 = v156 | ((unsigned __int8)v155 | (unsigned __int8)v113) & 7;
    v158 = *(_QWORD *)&byte_8[v267 & 0xFFFFFFFFFFFFFFF0LL];
    v159 = 0;
    if ( (v158 & 8) != 0 )
      v159 = *(__int64 *)((char *)&qword_18 + (v158 & 0xFFFFFFFFFFFFFFF0LL));
    v160 = v159 | ((unsigned __int8)v158 | (unsigned __int8)v267) & 7;
    v161 = *(_QWORD *)&byte_8[v251 & 0xFFFFFFFFFFFFFFF0LL];
    v162 = v161 & 7;
    if ( (v161 & 8) != 0
      && (v162 |= *(__int64 *)((char *)&qword_18 + (v161 & 0xFFFFFFFFFFFFFFF0LL)), (v162 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v163 = ~(v162 & 7) & v157;
      if ( ((v163 >> 4) & 3) == ((v162 >> 4) & 3) )
        v163 &= 0xFFFFFFFFFFFFFFCFLL;
      if ( ((v163 >> 6) & 7) == ((v162 >> 6) & 7) )
        v163 &= 0xFFFFFFFFFFFFFE3FLL;
      if ( (unsigned int)v163 >> 9 == (unsigned int)v162 >> 9 )
        v163 &= 0xFFFFFFFF000001FFLL;
      if ( HIDWORD(v162) == HIDWORD(v163) )
        v163 = (unsigned int)v163;
    }
    else
    {
      v163 = ~v162 & v157;
    }
    v164 = *(_QWORD *)&byte_8[v122 & 0xFFFFFFFFFFFFFFF0LL];
    v165 = v164 & 7;
    if ( (v164 & 8) != 0
      && (v165 |= *(__int64 *)((char *)&qword_18 + (v164 & 0xFFFFFFFFFFFFFFF0LL)), (v165 & 0xFFFFFFFFFFFFFFF8LL) != 0) )
    {
      v166 = ~(v165 & 7) & v160;
      if ( ((v166 >> 4) & 3) == ((v165 >> 4) & 3) )
        v166 &= 0xFFFFFFFFFFFFFFCFLL;
      if ( ((v166 >> 6) & 7) == ((v165 >> 6) & 7) )
        v166 &= 0xFFFFFFFFFFFFFE3FLL;
      if ( (unsigned int)v166 >> 9 == (unsigned int)v165 >> 9 )
        v166 &= 0xFFFFFFFF000001FFLL;
      if ( HIDWORD(v165) == HIDWORD(v166) )
        v166 = (unsigned int)v166;
    }
    else
    {
      v166 = ~v165 & v160;
    }
    ptr = *(void **)(v122 + 32);
    v268 = sub_EFEE90(&ptr, 0);
    v339 = *(void **)(v251 + 32);
    v167 = sub_EFEE90(&v339, 0);
    LODWORD(v3[8][21 * *((unsigned int *)v3 + 692)]) = 1;
    v3[8][21 * *((unsigned int *)v3 + 692) + 8] = v167;
    v3[8][21 * *((unsigned int *)v3 + 692) + 17] = v268;
    v3[8][21 * *((unsigned int *)v3 + 692) + 3] = v163;
    v3[8][21 * *((unsigned int *)v3 + 692) + 12] = v166;
    BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 10]) = v283;
    BYTE2(v3[8][21 * *((unsigned int *)v3 + 692) + 19]) = v278;
    sub_A9CA90(v3, v251, v122);
LABEL_75:
    v62 = *(unsigned int *)(a2 + 20);
    if ( (unsigned int)v62 > i )
    {
      if ( v245 == v247 || (v245 += 6, v245 == v247) )
      {
        v96 = v247;
        ++i;
        v97 = v247;
        while ( i != v62 )
        {
          v98 = *(_DWORD **)(a2 + 24LL * i + 56);
          if ( (*(_DWORD *)(a2 + 24LL * i + 48) & 0x7FFFFFFF) != 9 )
            break;
          v97 = *(_DWORD **)(a2 + 24LL * i + 56);
          v96 = &v98[6 * *(unsigned int *)(a2 + 24LL * i + 52)];
          if ( v98 != v96 )
            break;
          ++i;
        }
        v245 = v97;
        v247 = v96;
      }
    }
    if ( v263 )
    {
      v63 = *(unsigned int *)(v263 + 20);
      if ( (unsigned int)v63 > v280 )
      {
        if ( v274 == v272 || (v272 += 24, v274 == v272) )
        {
          v107 = v280 + 1;
          v108 = v274;
          v109 = v272;
          while ( v107 != v63 )
          {
            v110 = *(_QWORD *)(v263 + 24LL * v107 + 56);
            if ( (*(_DWORD *)(v263 + 24LL * v107 + 48) & 0x7FFFFFFF) != 9 )
              break;
            v109 = *(_QWORD *)(v263 + 24LL * v107 + 56);
            v108 = v110 + 24LL * *(unsigned int *)(v263 + 24LL * v107 + 52);
            if ( v110 != v108 )
              break;
            ++v107;
          }
          v280 = v107;
          v274 = v108;
          v272 = v109;
        }
      }
    }
    v64 = *(unsigned int *)(a3 + 20);
    if ( k < (unsigned int)v64 )
    {
      if ( v242 == v248 || (v242 += 6, v248 == v242) )
      {
        v99 = v242;
        v100 = v248;
        do
        {
          if ( ++k == v64 )
            break;
          v101 = *(_DWORD **)(a3 + 24LL * k + 56);
          if ( (*(_DWORD *)(a3 + 24LL * k + 48) & 0x7FFFFFFF) != 9 )
            break;
          v99 = *(_DWORD **)(a3 + 24LL * k + 56);
          v100 = &v101[6 * *(unsigned int *)(a3 + 24LL * k + 52)];
        }
        while ( v101 == v100 );
        v242 = v99;
        v248 = v100;
      }
    }
    if ( v246 )
    {
      v65 = *(unsigned int *)(v246 + 20);
      if ( v264 < (unsigned int)v65 )
      {
        if ( v273 == v271 || (v271 += 24, v273 == v271) )
        {
          v103 = v264 + 1;
          v104 = v271;
          v105 = v273;
          while ( v103 != v65 )
          {
            v106 = *(_QWORD *)(v246 + 24LL * v103 + 56);
            if ( (*(_DWORD *)(v246 + 24LL * v103 + 48) & 0x7FFFFFFF) != 9 )
              break;
            v104 = *(_QWORD *)(v246 + 24LL * v103 + 56);
            v105 = v106 + 24LL * *(unsigned int *)(v246 + 24LL * v103 + 52);
            if ( v106 != v105 )
              break;
            ++v103;
          }
          v264 = v103;
          v271 = v104;
          v273 = v105;
        }
      }
    }
    *((_DWORD *)v3 + 692) = HIDWORD(v3[8][21 * *((unsigned int *)v3 + 692) + 1]);
  }
  return result;
}

