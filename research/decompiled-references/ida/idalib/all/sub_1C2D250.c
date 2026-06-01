void __fastcall sub_1C2D250(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  const __m128i *v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 **v11; // rax
  __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // zf
  unsigned int v21; // r12d
  __int64 v22; // rdi
  char v23; // bl
  unsigned int v24; // r13d
  char v25; // al
  unsigned __int64 v26; // rcx
  unsigned int *v27; // r14
  _DWORD *v28; // rax
  _DWORD *v29; // r12
  unsigned int *v30; // rbp
  int v31; // esi
  unsigned int *v32; // rax
  char v33; // di
  signed int v34; // edx
  _BOOL4 v35; // r15d
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  _QWORD **v38; // rbx
  _QWORD **v39; // rbp
  __int64 *v40; // rcx
  __int64 v41; // rbx
  __int64 *v42; // rdx
  char v43; // al
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rbp
  unsigned __int8 *v54; // rbx
  _BYTE *v55; // rdx
  __int64 v56; // rax
  unsigned __int8 *v57; // rbx
  unsigned __int8 *v58; // rdx
  __int64 v59; // rax
  unsigned __int8 *v60; // rbx
  unsigned __int8 *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // r8
  __int64 v67; // r9
  void *v68; // rax
  _QWORD *v69; // rax
  bool v70; // bl
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // r8
  __int64 v76; // r9
  void *v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // r8
  __int64 v83; // r9
  void *v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rbx
  __int64 v89; // r8
  __int64 v90; // r9
  void *v91; // rax
  _QWORD *v92; // rax
  unsigned __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rbx
  __int64 v97; // r8
  __int64 v98; // r9
  void *v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rbp
  __int64 v104; // r8
  __int64 v105; // r9
  void *v106; // rax
  _QWORD *v107; // rax
  unsigned __int8 *v108; // rbx
  unsigned __int8 *v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // r14
  __int64 v113; // rdi
  __int64 v114; // rdx
  unsigned int *v115; // rcx
  char v116; // r13
  unsigned int *v117; // rax
  unsigned int *v118; // rbp
  unsigned int *v119; // rbx
  unsigned int v120; // r12d
  __int64 (*v121)(); // rax
  const char *v122; // rax
  __int64 v123; // rbx
  void *v124; // rdi
  __int64 v125; // rbx
  __int64 v126; // rbp
  char *v127; // rax
  _QWORD *v128; // rdi
  __int64 (*v129)(); // rax
  const char *v130; // rax
  __int64 v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rbp
  __int64 v135; // r8
  __int64 v136; // r9
  void *v137; // rax
  _QWORD *v138; // rax
  __int64 v139; // rbp
  __int64 v140; // rbx
  char *v141; // r13
  unsigned __int64 v142; // r14
  char *v143; // rax
  __int64 v144; // r14
  char *v145; // rdx
  __int64 v146; // rax
  char *v147; // rbx
  __int64 v148; // rax
  void *v149; // r14
  __int64 v150; // r13
  _QWORD *v151; // rax
  __int64 v152; // r9
  unsigned __int32 v153; // r8d
  __int64 v154; // rcx
  __m128i *v155; // rbp
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  void *v160; // rdi
  __int64 v161; // rbx
  __int64 v162; // rbp
  char *v163; // rax
  _QWORD *v164; // rdi
  _QWORD **v165; // rbx
  _QWORD **v166; // rbp
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rbx
  __int64 v170; // r8
  __int64 v171; // r9
  void *v172; // rax
  _QWORD *v173; // rax
  __int64 v174; // rbp
  unsigned __int8 *v175; // rbx
  _BYTE *v176; // rdx
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rbx
  __int64 v181; // r8
  __int64 v182; // r9
  void *v183; // rax
  _QWORD *v184; // rax
  __int64 v185; // rbp
  unsigned __int8 *v186; // rbx
  _BYTE *v187; // rdx
  __int64 v188; // rax
  unsigned __int8 *v189; // rbp
  int v190; // r14d
  __int64 v191; // rax
  __int64 v192; // rax
  unsigned int *v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rbp
  __int64 v197; // r8
  __int64 v198; // r9
  void *v199; // rax
  _QWORD *v200; // rax
  __int64 v201; // rdx
  __int64 v202; // rcx
  __int64 v203; // rbp
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // rax
  _QWORD *v207; // rax
  int v208; // r15d
  __int64 v209; // r13
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // rbp
  __int64 v213; // r8
  __int64 v214; // r9
  void *v215; // rax
  _QWORD *v216; // rax
  unsigned __int64 v217; // rcx
  unsigned __int64 v218; // rcx
  __int64 v219; // rax
  unsigned __int64 v220; // rax
  char *v221; // r8
  char *v222; // rax
  __int64 v223; // rcx
  int *v224; // r13
  _DWORD *v225; // rax
  int *v226; // rbp
  unsigned int *v227; // r15
  __int64 v228; // rax
  _BOOL4 v229; // ebx
  __int64 v230; // rax
  unsigned int *v231; // rdx
  __int64 v232; // rdx
  int v233; // eax
  __int64 v234; // rdx
  int v235; // eax
  __int64 v236; // rdx
  int v237; // eax
  __int64 v238; // rax
  __int64 v239; // rdx
  int v240; // eax
  __int64 v241; // rdx
  int v242; // eax
  __int64 v243; // rdx
  int v244; // eax
  __int64 v245; // rax
  __int64 v246; // rbp
  __int64 v247; // r13
  __int64 v248; // rbp
  void *v249; // rdi
  __int64 v250; // rdx
  int v251; // eax
  __int64 v252; // rax
  __int64 v253; // rbp
  __int64 v254; // r13
  __int64 v255; // rbp
  void *v256; // rdi
  __int64 v257; // rax
  __int64 v258; // rbp
  __int64 v259; // r13
  __int64 v260; // rbp
  void *v261; // rdi
  __int64 v262; // rax
  __int64 v263; // r13
  __int64 v264; // r14
  __int64 v265; // r13
  void *v266; // rdi
  __int64 v267; // rax
  __int64 v268; // r13
  __int64 v269; // r14
  __int64 v270; // r13
  void *v271; // rdi
  __int64 v272; // rax
  __int64 v273; // r13
  __int64 v274; // r14
  __int64 v275; // r13
  void *v276; // rdi
  __int64 v277; // rdx
  int v278; // eax
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // rbp
  __int64 v282; // r8
  __int64 v283; // r9
  void *v284; // rax
  _QWORD *v285; // rax
  __int64 v286; // rax
  __int64 v287; // r13
  __int64 v288; // r15
  __int64 v289; // r13
  void *v290; // rdi
  __int64 i; // rax
  __int64 v292; // rax
  __int64 v293; // r14
  __int64 v294; // rdx
  __int64 v295; // r14
  void *v296; // rdi
  char *v297; // [rsp+8h] [rbp-1D0h]
  unsigned __int32 v298; // [rsp+8h] [rbp-1D0h]
  char *v299; // [rsp+8h] [rbp-1D0h]
  __int64 v300; // [rsp+8h] [rbp-1D0h]
  __int64 *v302; // [rsp+10h] [rbp-1C8h]
  int v303; // [rsp+10h] [rbp-1C8h]
  const __m128i *v304; // [rsp+18h] [rbp-1C0h]
  __int64 v305; // [rsp+20h] [rbp-1B8h]
  const __m128i *v306; // [rsp+30h] [rbp-1A8h]
  unsigned int v307; // [rsp+38h] [rbp-1A0h]
  char v308; // [rsp+3Dh] [rbp-19Bh]
  char v309; // [rsp+3Eh] [rbp-19Ah]
  char v310; // [rsp+3Fh] [rbp-199h]
  unsigned __int64 v311; // [rsp+40h] [rbp-198h]
  unsigned int v313; // [rsp+50h] [rbp-188h] BYREF
  int v314; // [rsp+54h] [rbp-184h] BYREF
  __int64 v315; // [rsp+58h] [rbp-180h] BYREF
  __int64 v316; // [rsp+60h] [rbp-178h] BYREF
  __int64 v317; // [rsp+68h] [rbp-170h]
  void *v318; // [rsp+70h] [rbp-168h] BYREF
  signed __int64 v319; // [rsp+78h] [rbp-160h]
  __int64 v320; // [rsp+80h] [rbp-158h] BYREF
  void *v321; // [rsp+90h] [rbp-148h] BYREF
  __m128i si128; // [rsp+98h] [rbp-140h]
  __int64 v323; // [rsp+A8h] [rbp-130h]
  __int16 v324; // [rsp+B0h] [rbp-128h]
  void *ptr; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v326; // [rsp+C8h] [rbp-110h]
  char v327[8]; // [rsp+D0h] [rbp-108h] BYREF
  __int64 v328; // [rsp+D8h] [rbp-100h] BYREF
  int v329; // [rsp+E0h] [rbp-F8h] BYREF
  void *v330; // [rsp+E8h] [rbp-F0h]
  unsigned int *v331; // [rsp+F0h] [rbp-E8h]
  unsigned int *v332; // [rsp+F8h] [rbp-E0h]
  unsigned __int64 v333; // [rsp+100h] [rbp-D8h]
  void *v334; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v335; // [rsp+118h] [rbp-C0h]
  _QWORD v336[2]; // [rsp+120h] [rbp-B8h] BYREF
  unsigned __int8 *v337; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v338; // [rsp+138h] [rbp-A0h]
  char v339; // [rsp+188h] [rbp-50h]
  unsigned int v340; // [rsp+190h] [rbp-48h]
  char v341; // [rsp+194h] [rbp-44h]

  v8 = (const __m128i *)a3;
  v9 = (__int64)a1;
  v10 = a2;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_8;
  v11 = (__int64 **)sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v12 = *v11;
  v13 = (unsigned __int64)&(*v11)[*((unsigned int *)v11 + 2)];
  if ( (unsigned __int64)v12 >= v13 )
  {
    if ( v12 == (__int64 *)v13 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 339 )
    {
      v14 = (__int64 *)(v13 + 8);
      while ( v12 != v14 )
      {
        v15 = *v14++;
        if ( *(_WORD *)(v15 + 36) == 339 )
          goto LABEL_65;
      }
      goto LABEL_8;
    }
LABEL_65:
    v41 = *v12;
    if ( *(_WORD *)(*v12 + 36) != 339 )
    {
      v42 = v12 + 1;
      do
        v41 = *v42++;
      while ( *(_WORD *)(v41 + 36) != 339 );
    }
    sub_168B9F0((__int64)&v334, a1, v8[1].m128i_u32[2], 0x1CAFu, 0);
    sub_15F7200(&v334);
    sub_168B9F0((__int64)&v334, a1, *(_DWORD *)(v41 + 24), 0x18D5u, 0);
    sub_15F7200(&v334);
    return;
  }
  v40 = v12;
  if ( *(_WORD *)(*v12 + 36) == 339 )
  {
LABEL_64:
    if ( v40 == (__int64 *)v13 )
      goto LABEL_8;
    goto LABEL_65;
  }
  while ( (__int64 *)v13 != ++v40 )
  {
    if ( *(_WORD *)(*v40 + 36) == 339 )
      goto LABEL_64;
  }
LABEL_8:
  if ( !sub_B8DC30(a2, 1) )
  {
    sub_168B9F0((__int64)&v334, a1, *(_DWORD *)(a2 + 24), 0x19C6u, 0);
    if ( v339 )
    {
      sub_AE9DF0(&v337, (__int64)v8, 0x10u);
    }
    else
    {
      if ( !v341 )
        goto LABEL_72;
      v65 = sub_168B9E0(&v334);
      v68 = (void *)v336[0];
      if ( v336[0] )
        v68 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
      ptr = v68;
      v69 = sub_1587BC0(v65, (__int64 *)&ptr, v63, v64, v66, v67);
      sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v340 + 8), (__int64)v8, 0x10u);
    }
    v70 = (v8[2].m128i_i8[3] & 2) != 0;
    if ( v339 )
    {
      sub_AE9DF0(&v337, v70, 2u);
    }
    else
    {
      if ( !v341 )
        goto LABEL_72;
      v103 = sub_168B9E0(&v334);
      v106 = (void *)v336[0];
      if ( v336[0] )
        v106 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
      ptr = v106;
      v107 = sub_1587BC0(v103, (__int64 *)&ptr, v101, v102, v104, v105);
      sub_AE9DF0((unsigned __int8 **)(*v107 + 32LL * v340 + 8), v70, 2u);
    }
    if ( v339 )
    {
      sub_AE9DF0(&v337, 0, 2u);
    }
    else if ( v341 )
    {
      v96 = sub_168B9E0(&v334);
      v99 = (void *)v336[0];
      if ( v336[0] )
        v99 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
      ptr = v99;
      v100 = sub_1587BC0(v96, (__int64 *)&ptr, v94, v95, v97, v98);
      sub_AE9DF0((unsigned __int8 **)(*v100 + 32LL * v340 + 8), 0, 2u);
    }
    goto LABEL_72;
  }
  v16 = sub_B8DC30(a2, 1);
  if ( v16 )
  {
    if ( *(_BYTE *)(v16 + 16) != 26 )
      goto LABEL_11;
  }
  else
  {
    v43 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v43 != 8 && v43 != 18 )
      goto LABEL_11;
  }
  v44 = sub_B8DC30(a2, 1);
  if ( v44 )
  {
    v45 = *(unsigned __int16 *)(v44 + 22);
  }
  else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
  {
    v45 = *(_DWORD *)(a2 + 80);
  }
  else
  {
    v45 = *(_DWORD *)(a2 + 104);
  }
  if ( v45 )
  {
    sub_168B9F0((__int64)&v334, a1, *(_DWORD *)(a2 + 24), 0x1B94u, 0);
    if ( v339 )
    {
      v108 = v337;
      if ( !v337 )
      {
        v234 = v338;
        v235 = *(_DWORD *)(v338 + 14976);
        if ( v235 )
        {
          v257 = (unsigned int)(v235 - 1);
          *(_DWORD *)(v338 + 14976) = v257;
          v108 = *(unsigned __int8 **)(v234 + 8 * v257 + 14848);
          v258 = *((unsigned int *)v108 + 134);
          *v108 = 0;
          v259 = *((_QWORD *)v108 + 66);
          *((_DWORD *)v108 + 106) = 0;
          v260 = v259 + (v258 << 6);
          while ( v259 != v260 )
          {
            while ( 1 )
            {
              v260 -= 64;
              v261 = *(void **)(v260 + 24);
              if ( v261 == (void *)(v260 + 40) )
                break;
              operator delete(v261);
              if ( v259 == v260 )
                goto LABEL_317;
            }
          }
LABEL_317:
          *((_DWORD *)v108 + 134) = 0;
        }
        else
        {
          v108 = (unsigned __int8 *)operator new(0x3A0u);
          *v108 = 0;
          *((_QWORD *)v108 + 12) = v108 + 112;
          *((_QWORD *)v108 + 16) = v108 + 144;
          *((_QWORD *)v108 + 20) = v108 + 176;
          *((_QWORD *)v108 + 24) = v108 + 208;
          *((_QWORD *)v108 + 28) = v108 + 240;
          *((_QWORD *)v108 + 32) = v108 + 272;
          *((_QWORD *)v108 + 36) = v108 + 304;
          *((_QWORD *)v108 + 40) = v108 + 336;
          *((_QWORD *)v108 + 44) = v108 + 368;
          *((_QWORD *)v108 + 48) = v108 + 400;
          *((_QWORD *)v108 + 52) = v108 + 432;
          *((_QWORD *)v108 + 13) = 0;
          v108[112] = 0;
          *((_QWORD *)v108 + 17) = 0;
          v108[144] = 0;
          *((_QWORD *)v108 + 21) = 0;
          v108[176] = 0;
          *((_QWORD *)v108 + 25) = 0;
          v108[208] = 0;
          *((_QWORD *)v108 + 29) = 0;
          v108[240] = 0;
          *((_QWORD *)v108 + 33) = 0;
          v108[272] = 0;
          *((_QWORD *)v108 + 37) = 0;
          v108[304] = 0;
          *((_QWORD *)v108 + 41) = 0;
          v108[336] = 0;
          *((_QWORD *)v108 + 45) = 0;
          v108[368] = 0;
          *((_QWORD *)v108 + 49) = 0;
          v108[400] = 0;
          *((_QWORD *)v108 + 53) = 0x800000000LL;
          *((_QWORD *)v108 + 66) = v108 + 544;
          *((_QWORD *)v108 + 67) = 0x600000000LL;
        }
        v337 = v108;
      }
      v108[*v108 + 1] = 2;
      v109 = v337;
      v110 = *v337;
      *v337 = v110 + 1;
      *(_QWORD *)&v109[8 * v110 + 16] = 2;
    }
    else
    {
      if ( !v341 )
        goto LABEL_72;
      v48 = sub_168B9E0(&v334);
      v51 = (void *)v336[0];
      if ( v336[0] )
        v51 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
      ptr = v51;
      v52 = sub_1587BC0(v48, (__int64 *)&ptr, v46, v47, v49, v50);
      v53 = *v52 + 32LL * v340;
      v54 = *(unsigned __int8 **)(v53 + 8);
      if ( !v54 )
      {
        v241 = *(_QWORD *)(v53 + 16);
        v242 = *(_DWORD *)(v241 + 14976);
        if ( v242 )
        {
          v267 = (unsigned int)(v242 - 1);
          *(_DWORD *)(v241 + 14976) = v267;
          v54 = *(unsigned __int8 **)(v241 + 8 * v267 + 14848);
          v268 = *((unsigned int *)v54 + 134);
          *v54 = 0;
          v269 = *((_QWORD *)v54 + 66);
          *((_DWORD *)v54 + 106) = 0;
          v270 = v269 + (v268 << 6);
          while ( v269 != v270 )
          {
            while ( 1 )
            {
              v270 -= 64;
              v271 = *(void **)(v270 + 24);
              if ( v271 == (void *)(v270 + 40) )
                break;
              operator delete(v271);
              if ( v269 == v270 )
                goto LABEL_331;
            }
          }
LABEL_331:
          *((_DWORD *)v54 + 134) = 0;
        }
        else
        {
          v54 = (unsigned __int8 *)operator new(0x3A0u);
          *v54 = 0;
          *((_QWORD *)v54 + 12) = v54 + 112;
          *((_QWORD *)v54 + 16) = v54 + 144;
          *((_QWORD *)v54 + 20) = v54 + 176;
          *((_QWORD *)v54 + 24) = v54 + 208;
          *((_QWORD *)v54 + 28) = v54 + 240;
          *((_QWORD *)v54 + 32) = v54 + 272;
          *((_QWORD *)v54 + 36) = v54 + 304;
          *((_QWORD *)v54 + 40) = v54 + 336;
          *((_QWORD *)v54 + 44) = v54 + 368;
          *((_QWORD *)v54 + 48) = v54 + 400;
          *((_QWORD *)v54 + 52) = v54 + 432;
          v54[112] = 0;
          *((_QWORD *)v54 + 13) = 0;
          *((_QWORD *)v54 + 17) = 0;
          v54[144] = 0;
          *((_QWORD *)v54 + 21) = 0;
          v54[176] = 0;
          *((_QWORD *)v54 + 25) = 0;
          v54[208] = 0;
          *((_QWORD *)v54 + 29) = 0;
          v54[240] = 0;
          *((_QWORD *)v54 + 33) = 0;
          v54[272] = 0;
          *((_QWORD *)v54 + 37) = 0;
          v54[304] = 0;
          *((_QWORD *)v54 + 41) = 0;
          v54[336] = 0;
          *((_QWORD *)v54 + 45) = 0;
          v54[368] = 0;
          *((_QWORD *)v54 + 49) = 0;
          v54[400] = 0;
          *((_QWORD *)v54 + 53) = 0x800000000LL;
          *((_QWORD *)v54 + 66) = v54 + 544;
          *((_QWORD *)v54 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v53 + 8) = v54;
      }
      v54[*v54 + 1] = 2;
      v55 = *(_BYTE **)(v53 + 8);
      v56 = (unsigned __int8)*v55;
      *v55 = v56 + 1;
      *(_QWORD *)&v55[8 * v56 + 16] = 2;
    }
    if ( v339 )
    {
      v57 = v337;
      if ( !v337 )
      {
        v236 = v338;
        v237 = *(_DWORD *)(v338 + 14976);
        if ( v237 )
        {
          v252 = (unsigned int)(v237 - 1);
          *(_DWORD *)(v338 + 14976) = v252;
          v57 = *(unsigned __int8 **)(v236 + 8 * v252 + 14848);
          v253 = *((unsigned int *)v57 + 134);
          *v57 = 0;
          v254 = *((_QWORD *)v57 + 66);
          *((_DWORD *)v57 + 106) = 0;
          v255 = v254 + (v253 << 6);
          while ( v254 != v255 )
          {
            while ( 1 )
            {
              v255 -= 64;
              v256 = *(void **)(v255 + 24);
              if ( v256 == (void *)(v255 + 40) )
                break;
              operator delete(v256);
              if ( v254 == v255 )
                goto LABEL_312;
            }
          }
LABEL_312:
          *((_DWORD *)v57 + 134) = 0;
        }
        else
        {
          v57 = (unsigned __int8 *)operator new(0x3A0u);
          *v57 = 0;
          *((_QWORD *)v57 + 12) = v57 + 112;
          *((_QWORD *)v57 + 16) = v57 + 144;
          *((_QWORD *)v57 + 20) = v57 + 176;
          *((_QWORD *)v57 + 24) = v57 + 208;
          *((_QWORD *)v57 + 28) = v57 + 240;
          *((_QWORD *)v57 + 32) = v57 + 272;
          *((_QWORD *)v57 + 36) = v57 + 304;
          *((_QWORD *)v57 + 40) = v57 + 336;
          *((_QWORD *)v57 + 44) = v57 + 368;
          *((_QWORD *)v57 + 48) = v57 + 400;
          *((_QWORD *)v57 + 52) = v57 + 432;
          *((_QWORD *)v57 + 13) = 0;
          v57[112] = 0;
          *((_QWORD *)v57 + 17) = 0;
          v57[144] = 0;
          *((_QWORD *)v57 + 21) = 0;
          v57[176] = 0;
          *((_QWORD *)v57 + 25) = 0;
          v57[208] = 0;
          *((_QWORD *)v57 + 29) = 0;
          v57[240] = 0;
          *((_QWORD *)v57 + 33) = 0;
          v57[272] = 0;
          *((_QWORD *)v57 + 37) = 0;
          v57[304] = 0;
          *((_QWORD *)v57 + 41) = 0;
          v57[336] = 0;
          *((_QWORD *)v57 + 45) = 0;
          v57[368] = 0;
          *((_QWORD *)v57 + 49) = 0;
          v57[400] = 0;
          *((_QWORD *)v57 + 53) = 0x800000000LL;
          *((_QWORD *)v57 + 66) = v57 + 544;
          *((_QWORD *)v57 + 67) = 0x600000000LL;
        }
        v337 = v57;
      }
      v57[*v57 + 1] = 2;
      v58 = v337;
      v59 = *v337;
      *v337 = v59 + 1;
      *(_QWORD *)&v58[8 * v59 + 16] = 0;
    }
    else
    {
      if ( !v341 )
        goto LABEL_72;
      v180 = sub_168B9E0(&v334);
      v183 = (void *)v336[0];
      if ( v336[0] )
        v183 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
      ptr = v183;
      v184 = sub_1587BC0(v180, (__int64 *)&ptr, v178, v179, v181, v182);
      v185 = *v184 + 32LL * v340;
      v186 = *(unsigned __int8 **)(v185 + 8);
      if ( !v186 )
      {
        v239 = *(_QWORD *)(v185 + 16);
        v240 = *(_DWORD *)(v239 + 14976);
        if ( v240 )
        {
          v262 = (unsigned int)(v240 - 1);
          *(_DWORD *)(v239 + 14976) = v262;
          v186 = *(unsigned __int8 **)(v239 + 8 * v262 + 14848);
          v263 = *((unsigned int *)v186 + 134);
          *v186 = 0;
          v264 = *((_QWORD *)v186 + 66);
          *((_DWORD *)v186 + 106) = 0;
          v265 = v264 + (v263 << 6);
          while ( v264 != v265 )
          {
            while ( 1 )
            {
              v265 -= 64;
              v266 = *(void **)(v265 + 24);
              if ( v266 == (void *)(v265 + 40) )
                break;
              operator delete(v266);
              if ( v264 == v265 )
                goto LABEL_326;
            }
          }
LABEL_326:
          *((_DWORD *)v186 + 134) = 0;
        }
        else
        {
          v186 = (unsigned __int8 *)operator new(0x3A0u);
          *v186 = 0;
          *((_QWORD *)v186 + 12) = v186 + 112;
          *((_QWORD *)v186 + 16) = v186 + 144;
          *((_QWORD *)v186 + 20) = v186 + 176;
          *((_QWORD *)v186 + 24) = v186 + 208;
          *((_QWORD *)v186 + 28) = v186 + 240;
          *((_QWORD *)v186 + 32) = v186 + 272;
          *((_QWORD *)v186 + 36) = v186 + 304;
          *((_QWORD *)v186 + 40) = v186 + 336;
          *((_QWORD *)v186 + 44) = v186 + 368;
          *((_QWORD *)v186 + 48) = v186 + 400;
          *((_QWORD *)v186 + 52) = v186 + 432;
          v186[112] = 0;
          *((_QWORD *)v186 + 13) = 0;
          *((_QWORD *)v186 + 17) = 0;
          v186[144] = 0;
          *((_QWORD *)v186 + 21) = 0;
          v186[176] = 0;
          *((_QWORD *)v186 + 25) = 0;
          v186[208] = 0;
          *((_QWORD *)v186 + 29) = 0;
          v186[240] = 0;
          *((_QWORD *)v186 + 33) = 0;
          v186[272] = 0;
          *((_QWORD *)v186 + 37) = 0;
          v186[304] = 0;
          *((_QWORD *)v186 + 41) = 0;
          v186[336] = 0;
          *((_QWORD *)v186 + 45) = 0;
          v186[368] = 0;
          *((_QWORD *)v186 + 49) = 0;
          v186[400] = 0;
          *((_QWORD *)v186 + 53) = 0x800000000LL;
          *((_QWORD *)v186 + 66) = v186 + 544;
          *((_QWORD *)v186 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v185 + 8) = v186;
      }
      v186[*v186 + 1] = 2;
      v187 = *(_BYTE **)(v185 + 8);
      v188 = (unsigned __int8)*v187;
      *v187 = v188 + 1;
      *(_QWORD *)&v187[8 * v188 + 16] = 0;
    }
    if ( v339 )
    {
      v60 = v337;
      if ( !v337 )
      {
        v232 = v338;
        v233 = *(_DWORD *)(v338 + 14976);
        if ( v233 )
        {
          v245 = (unsigned int)(v233 - 1);
          *(_DWORD *)(v338 + 14976) = v245;
          v60 = *(unsigned __int8 **)(v232 + 8 * v245 + 14848);
          v246 = *((unsigned int *)v60 + 134);
          *v60 = 0;
          v247 = *((_QWORD *)v60 + 66);
          *((_DWORD *)v60 + 106) = 0;
          v248 = v247 + (v246 << 6);
          while ( v247 != v248 )
          {
            while ( 1 )
            {
              v248 -= 64;
              v249 = *(void **)(v248 + 24);
              if ( v249 == (void *)(v248 + 40) )
                break;
              operator delete(v249);
              if ( v247 == v248 )
                goto LABEL_304;
            }
          }
LABEL_304:
          *((_DWORD *)v60 + 134) = 0;
        }
        else
        {
          v60 = (unsigned __int8 *)operator new(0x3A0u);
          *v60 = 0;
          *((_QWORD *)v60 + 12) = v60 + 112;
          *((_QWORD *)v60 + 16) = v60 + 144;
          *((_QWORD *)v60 + 20) = v60 + 176;
          *((_QWORD *)v60 + 24) = v60 + 208;
          *((_QWORD *)v60 + 28) = v60 + 240;
          *((_QWORD *)v60 + 32) = v60 + 272;
          *((_QWORD *)v60 + 36) = v60 + 304;
          *((_QWORD *)v60 + 40) = v60 + 336;
          *((_QWORD *)v60 + 44) = v60 + 368;
          *((_QWORD *)v60 + 48) = v60 + 400;
          *((_QWORD *)v60 + 52) = v60 + 432;
          *((_QWORD *)v60 + 13) = 0;
          v60[112] = 0;
          *((_QWORD *)v60 + 17) = 0;
          v60[144] = 0;
          *((_QWORD *)v60 + 21) = 0;
          v60[176] = 0;
          *((_QWORD *)v60 + 25) = 0;
          v60[208] = 0;
          *((_QWORD *)v60 + 29) = 0;
          v60[240] = 0;
          *((_QWORD *)v60 + 33) = 0;
          v60[272] = 0;
          *((_QWORD *)v60 + 37) = 0;
          v60[304] = 0;
          *((_QWORD *)v60 + 41) = 0;
          v60[336] = 0;
          *((_QWORD *)v60 + 45) = 0;
          v60[368] = 0;
          *((_QWORD *)v60 + 49) = 0;
          v60[400] = 0;
          *((_QWORD *)v60 + 53) = 0x800000000LL;
          *((_QWORD *)v60 + 66) = v60 + 544;
          *((_QWORD *)v60 + 67) = 0x600000000LL;
        }
        v337 = v60;
      }
      v60[*v60 + 1] = 2;
      v61 = v337;
      v62 = *v337;
      *v337 = v62 + 1;
      *(_QWORD *)&v61[8 * v62 + 16] = 0;
    }
    else if ( v341 )
    {
      v169 = sub_168B9E0(&v334);
      v172 = (void *)v336[0];
      if ( v336[0] )
        v172 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
      ptr = v172;
      v173 = sub_1587BC0(v169, (__int64 *)&ptr, v167, v168, v170, v171);
      v174 = *v173 + 32LL * v340;
      v175 = *(unsigned __int8 **)(v174 + 8);
      if ( !v175 )
      {
        v243 = *(_QWORD *)(v174 + 16);
        v244 = *(_DWORD *)(v243 + 14976);
        if ( v244 )
        {
          v272 = (unsigned int)(v244 - 1);
          *(_DWORD *)(v243 + 14976) = v272;
          v175 = *(unsigned __int8 **)(v243 + 8 * v272 + 14848);
          v273 = *((unsigned int *)v175 + 134);
          *v175 = 0;
          v274 = *((_QWORD *)v175 + 66);
          *((_DWORD *)v175 + 106) = 0;
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
                goto LABEL_336;
            }
          }
LABEL_336:
          *((_DWORD *)v175 + 134) = 0;
        }
        else
        {
          v175 = (unsigned __int8 *)operator new(0x3A0u);
          *v175 = 0;
          *((_QWORD *)v175 + 12) = v175 + 112;
          *((_QWORD *)v175 + 16) = v175 + 144;
          *((_QWORD *)v175 + 20) = v175 + 176;
          *((_QWORD *)v175 + 24) = v175 + 208;
          *((_QWORD *)v175 + 28) = v175 + 240;
          *((_QWORD *)v175 + 32) = v175 + 272;
          *((_QWORD *)v175 + 36) = v175 + 304;
          *((_QWORD *)v175 + 40) = v175 + 336;
          *((_QWORD *)v175 + 44) = v175 + 368;
          *((_QWORD *)v175 + 48) = v175 + 400;
          *((_QWORD *)v175 + 52) = v175 + 432;
          v175[112] = 0;
          *((_QWORD *)v175 + 13) = 0;
          *((_QWORD *)v175 + 17) = 0;
          v175[144] = 0;
          *((_QWORD *)v175 + 21) = 0;
          v175[176] = 0;
          *((_QWORD *)v175 + 25) = 0;
          v175[208] = 0;
          *((_QWORD *)v175 + 29) = 0;
          v175[240] = 0;
          *((_QWORD *)v175 + 33) = 0;
          v175[272] = 0;
          *((_QWORD *)v175 + 37) = 0;
          v175[304] = 0;
          *((_QWORD *)v175 + 41) = 0;
          v175[336] = 0;
          *((_QWORD *)v175 + 45) = 0;
          v175[368] = 0;
          *((_QWORD *)v175 + 49) = 0;
          v175[400] = 0;
          *((_QWORD *)v175 + 53) = 0x800000000LL;
          *((_QWORD *)v175 + 66) = v175 + 544;
          *((_QWORD *)v175 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v174 + 8) = v175;
      }
      v175[*v175 + 1] = 2;
      v176 = *(_BYTE **)(v174 + 8);
      v177 = (unsigned __int8)*v176;
      *v176 = v177 + 1;
      *(_QWORD *)&v176[8 * v177 + 16] = 0;
    }
LABEL_72:
    sub_15F7200(&v334);
    return;
  }
LABEL_11:
  v17 = sub_B8DC30(a2, 1);
  if ( v17 )
    v18 = *(_QWORD *)(v17 + 24);
  else
    v18 = *(_QWORD *)(a2 + 80);
  v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 13 || ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    sub_168B9F0((__int64)&v334, a1, *(_DWORD *)(a2 + 24), 0x1B94u, 0);
    if ( v339 )
    {
      sub_AE9DF0(&v337, 2, 2u);
    }
    else
    {
      if ( !v341 )
        goto LABEL_72;
      v74 = sub_168B9E0(&v334);
      v77 = (void *)v336[0];
      if ( v336[0] )
        v77 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
      ptr = v77;
      v78 = sub_1587BC0(v74, (__int64 *)&ptr, v72, v73, v75, v76);
      sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * v340 + 8), 2, 2u);
    }
    if ( v339 )
    {
      sub_AE9DF0(&v337, 0, 2u);
    }
    else
    {
      if ( !v341 )
        goto LABEL_72;
      v88 = sub_168B9E0(&v334);
      v91 = (void *)v336[0];
      if ( v336[0] )
        v91 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
      ptr = v91;
      v92 = sub_1587BC0(v88, (__int64 *)&ptr, v86, v87, v89, v90);
      sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * v340 + 8), 0, 2u);
    }
    if ( v339 )
    {
      sub_AE9DF0(&v337, 1, 2u);
    }
    else if ( v341 )
    {
      v81 = sub_168B9E0(&v334);
      v84 = (void *)v336[0];
      if ( v336[0] )
        v84 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
      ptr = v84;
      v85 = sub_1587BC0(v81, (__int64 *)&ptr, v79, v80, v82, v83);
      sub_AE9DF0((unsigned __int8 **)(*v85 + 32LL * v340 + 8), 1, 2u);
    }
    goto LABEL_72;
  }
  v310 = sub_15EB980((__int64)v8, *a1, 2u);
  if ( !v310 )
    return;
  v20 = v8[3].m128i_i16[4] == 0;
  v329 = 0;
  ptr = v327;
  v326 = 0x200000000LL;
  v330 = nullptr;
  v331 = (unsigned int *)&v329;
  v332 = (unsigned int *)&v329;
  v333 = 0;
  if ( v20 )
  {
    LODWORD(v334) = 1;
    v223 = (unsigned int)v326;
    goto LABEL_277;
  }
  v309 = 0;
  v21 = 0;
  v308 = 0;
  do
  {
    v314 = 0;
    v316 = 0;
    v22 = *a1;
    v317 = 0;
    if ( !(unsigned __int8)sub_181EB00(v22, (__int64)v8, v21, &v316, &v314, a7, a8) )
      goto LABEL_57;
    v23 = sub_B17900(v316, v317, (int *)&v313);
    if ( !v23 )
    {
      si128.m128i_i64[1] = v316;
      v334 = &v321;
      LOWORD(v337) = 770;
      v324 = 1283;
      v321 = "\"";
      v323 = v317;
      v336[0] = "\"";
      sub_2253560(&v318, &v334);
      sub_168B9F0((__int64)&v334, a1, v8[1].m128i_u32[2], 0x19C0u, 0);
      if ( v339 )
      {
        sub_AE9DF0(&v337, (__int64)v8, 0x10u);
      }
      else
      {
        if ( !v341 )
          goto LABEL_131;
        v196 = sub_168B9E0(&v334);
        v199 = (void *)v336[0];
        if ( v336[0] )
          v199 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
        v321 = v199;
        v200 = sub_1587BC0(v196, (__int64 *)&v321, v194, v195, v197, v198);
        sub_AE9DF0((unsigned __int8 **)(*v200 + 32LL * v340 + 8), (__int64)v8, 0x10u);
      }
      if ( v339 )
      {
        sub_AEC220(&v337, v318, v319);
      }
      else
      {
        if ( !v341 )
          goto LABEL_131;
        v212 = sub_168B9E0(&v334);
        v215 = (void *)v336[0];
        if ( v336[0] )
          v215 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
        v321 = v215;
        v216 = sub_1587BC0(v212, (__int64 *)&v321, v210, v211, v213, v214);
        sub_AEC220((unsigned __int8 **)(*v216 + 32LL * v340 + 8), v318, v319);
      }
      if ( v339 )
      {
        v189 = v337;
        v190 = v314;
        if ( !v337 )
        {
          v250 = v338;
          v251 = *(_DWORD *)(v338 + 14976);
          if ( v251 )
          {
            v286 = (unsigned int)(v251 - 1);
            *(_DWORD *)(v338 + 14976) = v286;
            v189 = *(unsigned __int8 **)(v250 + 8 * v286 + 14848);
            v287 = *((unsigned int *)v189 + 134);
            *v189 = 0;
            v288 = *((_QWORD *)v189 + 66);
            *((_DWORD *)v189 + 106) = 0;
            v289 = v288 + (v287 << 6);
            while ( v288 != v289 )
            {
              while ( 1 )
              {
                v289 -= 64;
                v290 = *(void **)(v289 + 24);
                if ( v290 == (void *)(v289 + 40) )
                  break;
                operator delete(v290);
                if ( v288 == v289 )
                  goto LABEL_351;
              }
            }
LABEL_351:
            *((_DWORD *)v189 + 134) = 0;
          }
          else
          {
            v189 = (unsigned __int8 *)operator new(0x3A0u);
            *v189 = 0;
            *((_QWORD *)v189 + 12) = v189 + 112;
            *((_QWORD *)v189 + 16) = v189 + 144;
            *((_QWORD *)v189 + 20) = v189 + 176;
            *((_QWORD *)v189 + 24) = v189 + 208;
            *((_QWORD *)v189 + 28) = v189 + 240;
            *((_QWORD *)v189 + 32) = v189 + 272;
            *((_QWORD *)v189 + 36) = v189 + 304;
            *((_QWORD *)v189 + 40) = v189 + 336;
            *((_QWORD *)v189 + 44) = v189 + 368;
            *((_QWORD *)v189 + 48) = v189 + 400;
            *((_QWORD *)v189 + 52) = v189 + 432;
            v189[112] = 0;
            *((_QWORD *)v189 + 13) = 0;
            *((_QWORD *)v189 + 17) = 0;
            v189[144] = 0;
            *((_QWORD *)v189 + 21) = 0;
            v189[176] = 0;
            *((_QWORD *)v189 + 25) = 0;
            v189[208] = 0;
            *((_QWORD *)v189 + 29) = 0;
            v189[240] = 0;
            *((_QWORD *)v189 + 33) = 0;
            v189[272] = 0;
            *((_QWORD *)v189 + 37) = 0;
            v189[304] = 0;
            *((_QWORD *)v189 + 41) = 0;
            v189[336] = 0;
            *((_QWORD *)v189 + 45) = 0;
            v189[368] = 0;
            *((_QWORD *)v189 + 49) = 0;
            v189[400] = 0;
            *((_QWORD *)v189 + 53) = 0x800000000LL;
            *((_QWORD *)v189 + 66) = v189 + 544;
            *((_QWORD *)v189 + 67) = 0x600000000LL;
          }
          v337 = v189;
        }
        LODWORD(v321) = v190;
        HIDWORD(v321) = v190;
LABEL_229:
        si128.m128i_i8[0] = 1;
        v191 = *((unsigned int *)v189 + 106);
        if ( v191 + 1 > (unsigned __int64)*((unsigned int *)v189 + 107) )
        {
          sub_2237220(v189 + 416, v189 + 432, v191 + 1, 12);
          v191 = *((unsigned int *)v189 + 106);
        }
        v192 = *((_QWORD *)v189 + 52) + 12 * v191;
        *(_QWORD *)v192 = v321;
        *(_DWORD *)(v192 + 8) = si128.m128i_i32[0];
        ++*((_DWORD *)v189 + 106);
        goto LABEL_131;
      }
      if ( v341 )
      {
        v203 = sub_168B9E0(&v334);
        v206 = v336[0];
        if ( v336[0] )
          v206 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
        v315 = v206;
        v207 = sub_1587BC0(v203, &v315, v201, v202, v204, v205);
        v208 = v314;
        v209 = *v207 + 32LL * v340;
        v189 = *(unsigned __int8 **)(v209 + 8);
        if ( !v189 )
        {
          v277 = *(_QWORD *)(v209 + 16);
          v278 = *(_DWORD *)(v277 + 14976);
          if ( v278 )
          {
            v292 = (unsigned int)(v278 - 1);
            *(_DWORD *)(v277 + 14976) = v292;
            v189 = *(unsigned __int8 **)(v277 + 8 * v292 + 14848);
            v293 = *((unsigned int *)v189 + 134);
            *v189 = 0;
            v294 = *((_QWORD *)v189 + 66);
            *((_DWORD *)v189 + 106) = 0;
            v295 = v294 + (v293 << 6);
            while ( v294 != v295 )
            {
              while ( 1 )
              {
                v295 -= 64;
                v296 = *(void **)(v295 + 24);
                if ( v296 == (void *)(v295 + 40) )
                  break;
                v300 = v294;
                operator delete(v296);
                v294 = v300;
                if ( v300 == v295 )
                  goto LABEL_364;
              }
            }
LABEL_364:
            *((_DWORD *)v189 + 134) = 0;
          }
          else
          {
            v189 = (unsigned __int8 *)operator new(0x3A0u);
            *v189 = 0;
            *((_QWORD *)v189 + 12) = v189 + 112;
            *((_QWORD *)v189 + 16) = v189 + 144;
            *((_QWORD *)v189 + 20) = v189 + 176;
            *((_QWORD *)v189 + 24) = v189 + 208;
            *((_QWORD *)v189 + 28) = v189 + 240;
            *((_QWORD *)v189 + 32) = v189 + 272;
            *((_QWORD *)v189 + 36) = v189 + 304;
            *((_QWORD *)v189 + 40) = v189 + 336;
            *((_QWORD *)v189 + 44) = v189 + 368;
            *((_QWORD *)v189 + 48) = v189 + 400;
            *((_QWORD *)v189 + 52) = v189 + 432;
            v189[112] = 0;
            *((_QWORD *)v189 + 13) = 0;
            *((_QWORD *)v189 + 17) = 0;
            v189[144] = 0;
            *((_QWORD *)v189 + 21) = 0;
            v189[176] = 0;
            *((_QWORD *)v189 + 25) = 0;
            v189[208] = 0;
            *((_QWORD *)v189 + 29) = 0;
            v189[240] = 0;
            *((_QWORD *)v189 + 33) = 0;
            v189[272] = 0;
            *((_QWORD *)v189 + 37) = 0;
            v189[304] = 0;
            *((_QWORD *)v189 + 41) = 0;
            v189[336] = 0;
            *((_QWORD *)v189 + 45) = 0;
            v189[368] = 0;
            *((_QWORD *)v189 + 49) = 0;
            v189[400] = 0;
            *((_QWORD *)v189 + 53) = 0x800000000LL;
            *((_QWORD *)v189 + 66) = v189 + 544;
            *((_QWORD *)v189 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v209 + 8) = v189;
        }
        LODWORD(v321) = v208;
        HIDWORD(v321) = v208;
        goto LABEL_229;
      }
LABEL_131:
      sub_15F7200(&v334);
      if ( v318 != &v320 )
        operator delete(v318);
      goto LABEL_57;
    }
    v24 = v313;
    if ( v313 <= 5 )
    {
      if ( ((1LL << v313) & 0xD) != 0 )
      {
        v309 = v23;
      }
      else
      {
        v25 = v308;
        if ( ((1LL << v313) & 0x30) != 0 )
          v25 = v23;
        v308 = v25;
      }
    }
    v26 = v333;
    if ( v333 )
      goto LABEL_49;
    v27 = (unsigned int *)((char *)ptr + 4 * (unsigned int)v326);
    if ( ptr == v27 )
    {
      if ( (unsigned int)v326 > 1uLL )
      {
LABEL_48:
        LODWORD(v326) = 0;
LABEL_49:
        sub_1C2CFA0(&v328, (int *)&v313);
        goto LABEL_50;
      }
    }
    else
    {
      if ( v313 == *(_DWORD *)ptr )
        goto LABEL_50;
      v28 = ptr;
      while ( v27 != ++v28 )
      {
        if ( v313 == *v28 )
          goto LABEL_50;
      }
      if ( (unsigned int)v326 > 1uLL )
      {
        v306 = v8;
        v307 = v21;
        v29 = ptr;
        while ( 1 )
        {
          if ( v26 )
          {
            v30 = v332;
            if ( (signed int)v332[8] < *v29 )
              goto LABEL_43;
          }
          v30 = (unsigned int *)v330;
          if ( !v330 )
          {
            v30 = (unsigned int *)&v329;
LABEL_107:
            if ( v331 != v30 )
            {
              v311 = v26;
              v71 = std::_Rb_tree_decrement(v30);
              v26 = v311;
              if ( *(_DWORD *)(v71 + 32) >= *v29 )
                goto LABEL_46;
            }
LABEL_43:
            v35 = 1;
            if ( v30 != (unsigned int *)&v329 )
              v35 = *v29 < (int)v30[8];
            v36 = operator new(0x28u);
            *(_DWORD *)(v36 + 32) = *v29;
            std::_Rb_tree_insert_and_rebalance(v35, v36, v30, &v329);
            v26 = ++v333;
            goto LABEL_46;
          }
          v31 = *v29;
          while ( 1 )
          {
            v34 = v30[8];
            if ( v31 >= v34 )
              break;
            v32 = *((unsigned int **)v30 + 2);
            v33 = v23;
            if ( !v32 )
              goto LABEL_41;
LABEL_38:
            v30 = v32;
          }
          v32 = *((unsigned int **)v30 + 3);
          v33 = 0;
          if ( v32 )
            goto LABEL_38;
LABEL_41:
          if ( v33 )
            goto LABEL_107;
          if ( v31 > v34 )
            goto LABEL_43;
LABEL_46:
          if ( v27 == ++v29 )
          {
            v21 = v307;
            v8 = v306;
            goto LABEL_48;
          }
        }
      }
    }
    v93 = (unsigned int)v326 + 1LL;
    if ( v93 > HIDWORD(v326) )
    {
      sub_2237220(&ptr, v327, v93, 4);
      v27 = (unsigned int *)((char *)ptr + 4 * (unsigned int)v326);
    }
    *v27 = v24;
    LODWORD(v326) = v326 + 1;
LABEL_50:
    ++v21;
  }
  while ( v21 < v8[3].m128i_u16[4] );
  v9 = (__int64)a1;
  v10 = a2;
  if ( v309 )
  {
    v37 = v333;
    if ( !v333 )
      v37 = (unsigned int)v326;
    if ( v37 > 1 || v308 )
    {
      sub_168B9F0((__int64)&v334, a1, v8[1].m128i_u32[2], 0x135Au, 0);
      sub_15F7200(&v334);
      goto LABEL_57;
    }
  }
  if ( !v8[3].m128i_i16[4] )
  {
    LODWORD(v334) = 1;
    if ( v333 )
    {
LABEL_258:
      sub_1C2D0B0(&v328, (int *)&v334);
      goto LABEL_144;
    }
    v223 = (unsigned int)v326;
    v224 = (int *)((char *)ptr + 4 * (unsigned int)v326);
    if ( ptr == v224 )
    {
      if ( (unsigned int)v326 > 1uLL )
      {
LABEL_346:
        LODWORD(v326) = 0;
        goto LABEL_258;
      }
    }
    else
    {
      if ( *(_DWORD *)ptr == 1 )
        goto LABEL_144;
      v225 = ptr;
      while ( v224 != ++v225 )
      {
        if ( *v225 == 1 )
          goto LABEL_144;
      }
      if ( (unsigned int)v326 > 1uLL )
      {
        v226 = (int *)ptr;
        v304 = v8;
        while ( 1 )
        {
          if ( v333 )
          {
            v227 = v332;
            if ( (int)v332[8] < *v226 )
              break;
          }
          v228 = sub_1C2D1C0((__int64)&v328, v226);
          v227 = v231;
          if ( v231 )
            goto LABEL_268;
LABEL_272:
          if ( v224 == ++v226 )
          {
            v9 = (__int64)a1;
            v10 = a2;
            v8 = v304;
            goto LABEL_346;
          }
        }
        v228 = 0;
LABEL_268:
        v229 = v227 == (unsigned int *)&v329 || v228 || *v226 < (int)v227[8];
        v230 = operator new(0x28u);
        *(_DWORD *)(v230 + 32) = *v226;
        std::_Rb_tree_insert_and_rebalance(v229, v230, v227, &v329);
        ++v333;
        goto LABEL_272;
      }
    }
LABEL_277:
    if ( v223 + 1 > (unsigned __int64)HIDWORD(v326) )
    {
      sub_2237220(&ptr, v327, v223 + 1, 4);
      v223 = (unsigned int)v326;
    }
    *((_DWORD *)ptr + v223) = 1;
    LODWORD(v326) = v326 + 1;
  }
LABEL_144:
  v111 = *(_QWORD *)(sub_168B6C0(v9) + 17448);
  v321 = nullptr;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v112 = v111;
  v113 = sub_168B6C0(v9);
  v114 = 0;
  if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 <= 5 )
    v114 = v10;
  sub_A83E70(v113, (char **)&v321, v114);
  if ( v333 )
  {
    v115 = v331;
    v116 = 0;
    v117 = (unsigned int *)&v329;
  }
  else
  {
    v115 = (unsigned int *)ptr;
    v116 = v310;
    v117 = (unsigned int *)((char *)ptr + 4 * (unsigned int)v326);
  }
  v302 = (__int64 *)v9;
  v118 = v115;
  v305 = v10;
  v119 = v117;
  while ( 2 )
  {
    if ( v116 )
    {
      if ( v118 == v119 )
        goto LABEL_185;
      v120 = *v118;
      if ( *v118 >= 2 )
      {
        if ( v120 <= 3 )
          goto LABEL_176;
        if ( v120 <= 5 )
          goto LABEL_154;
      }
LABEL_170:
      ++v118;
      continue;
    }
    break;
  }
  while ( 2 )
  {
    if ( v118 == v119 )
    {
LABEL_185:
      v139 = (__int64)v302;
      v140 = v305;
      if ( v333 )
      {
        v141 = (char *)v331;
        v335 = 0x200000000LL;
        v334 = v336;
        if ( v331 == (unsigned int *)&v329 )
        {
          LODWORD(v144) = 0;
          v297 = (char *)v331;
          v303 = v335;
          v145 = (char *)v336 + 4 * (unsigned int)v335;
          goto LABEL_190;
        }
        v193 = v331;
        v299 = (char *)v331;
        v144 = 0;
        do
        {
          ++v144;
          v193 = (unsigned int *)std::_Rb_tree_increment(v193);
        }
        while ( v193 != (unsigned int *)&v329 );
        v141 = v299;
        v310 = 0;
        v297 = (char *)v193;
      }
      else
      {
        v141 = (char *)ptr;
        v142 = 4LL * (unsigned int)v326;
        v143 = (char *)ptr + v142;
        v144 = v142 >> 2;
        v297 = v143;
        v334 = v336;
        v335 = 0x200000000LL;
      }
      if ( v144 > 2 )
        sub_2237220(&v334, v336, v144, 4);
      v303 = v335;
      v145 = (char *)v334 + 4 * (unsigned int)v335;
      if ( v310 )
      {
        if ( v297 != v141 )
        {
          v217 = (unsigned __int64)(v297 - 4 - v141) >> 2;
          if ( (v145 >= v141 + 16 || v141 >= v145 + 16) && (v217 & 0x3FFFFFFFFFFFFFFCLL) != 0 )
          {
            v218 = v217 + 1;
            v219 = 0;
            do
            {
              *(__m128i *)&v145[v219] = _mm_loadu_si128((const __m128i *)&v141[v219]);
              v219 += 16;
            }
            while ( 16 * (v218 >> 2) != v219 );
            v220 = 4 * (v218 & 0xFFFFFFFFFFFFFFFCLL);
            v221 = &v141[v220];
            v222 = &v145[v220];
            if ( (v218 & 0xFFFFFFFFFFFFFFFCLL) != v218 )
            {
              *(_DWORD *)v222 = *(_DWORD *)v221;
              if ( v297 != v221 + 4 )
              {
                *((_DWORD *)v222 + 1) = *((_DWORD *)v221 + 1);
                if ( v297 != v221 + 8 )
                  *((_DWORD *)v222 + 2) = *((_DWORD *)v221 + 2);
              }
            }
          }
          else
          {
            for ( i = 0; ; ++i )
            {
              *(_DWORD *)&v145[4 * i] = *(_DWORD *)&v141[4 * i];
              if ( v217 == i )
                break;
            }
          }
        }
        goto LABEL_194;
      }
LABEL_190:
      if ( v297 != v141 )
      {
        v146 = (__int64)v141;
        v147 = v145;
        do
        {
          v147 += 4;
          *((_DWORD *)v147 - 1) = *(_DWORD *)(v146 + 32);
          v146 = std::_Rb_tree_increment(v146);
        }
        while ( (char *)v146 != v297 );
        v140 = v305;
      }
LABEL_194:
      LODWORD(v335) = v303 + v144;
      v148 = sub_168B6C0(v139);
      v149 = v334;
      v150 = v148;
      v298 = v335;
      v151 = (_QWORD *)sub_168B6C0(v139);
      v153 = v298;
      v154 = v151[294];
      v151[304] += 56LL;
      v155 = (__m128i *)((v154 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v151[295] >= (unsigned __int64)&v155[3].m128i_u64[1] && v154 )
      {
        v151[294] = (char *)v155 + 56;
      }
      else
      {
        v238 = sub_986170((__int64)(v151 + 294), 56, 56, 3, v298, v152);
        v153 = v298;
        v155 = (__m128i *)v238;
      }
      sub_B2FC60(v155, v150, v8, v149, v153);
      sub_B8CC60(v140, (__int64)v155, v156, v157, v158, v159);
      if ( v334 != v336 )
        free(v334);
      v160 = v321;
      if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
      {
        v161 = 0;
        v162 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
        v163 = (char *)v321;
        do
        {
          v164 = *(_QWORD **)&v163[v161];
          if ( v164 && v164 != (_QWORD *)-8LL )
          {
            operator delete(v164, *v164 + 17LL, 8);
            v163 = (char *)v321;
          }
          v161 += 8;
        }
        while ( v161 != v162 );
        v160 = v163;
      }
      free(v160);
      v165 = (_QWORD **)v330;
      if ( v330 )
      {
        do
        {
          sub_1C26070((__int64)&v328, v165[3]);
          v166 = (_QWORD **)v165[2];
          operator delete(v165);
          v165 = v166;
        }
        while ( v166 );
      }
      goto LABEL_59;
    }
    v120 = v118[8];
    if ( v120 < 2 )
      goto LABEL_167;
    if ( v120 <= 3 )
    {
LABEL_176:
      v129 = *(__int64 (**)())(*(_QWORD *)v112 + 584LL);
      if ( (v129 == sub_A55EE0
         || !((unsigned __int8 (__fastcall *)(__int64, const char *, __int64))v129)(v112, "experimental-xqciint", 20))
        && !(unsigned __int8)sub_1068030((__int64)&v321, (__int64)"experimental-xqciint", 20) )
      {
        sub_168B9F0((__int64)&v334, v302, v8[1].m128i_u32[2], 0x135Bu, 0);
        v130 = sub_B17AB0(v120);
        v131 = (__int64)v130;
        if ( v339 )
        {
          sub_AE9DF0(&v337, (__int64)v130, 1u);
          goto LABEL_183;
        }
        if ( v341 )
        {
          v134 = sub_168B9E0(&v334);
          v137 = (void *)v336[0];
          if ( v336[0] )
            v137 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
          v318 = v137;
          v138 = sub_1587BC0(v134, (__int64 *)&v318, v132, v133, v135, v136);
          sub_AE9DF0((unsigned __int8 **)(*v138 + 32LL * v340 + 8), v131, 1u);
LABEL_183:
          if ( v339 )
          {
            sub_AE9DF0(&v337, (__int64)"Xqciint", 1u);
          }
          else if ( v341 )
          {
            sub_1C245B0(&v334, (__int64)"Xqciint");
          }
        }
        goto LABEL_158;
      }
LABEL_169:
      if ( v116 )
        goto LABEL_170;
      goto LABEL_167;
    }
    if ( v120 > 5 )
    {
LABEL_167:
      v118 = (unsigned int *)std::_Rb_tree_increment(v118);
      continue;
    }
    break;
  }
LABEL_154:
  v121 = *(__int64 (**)())(*(_QWORD *)v112 + 584LL);
  if ( v121 != sub_A55EE0
    && ((unsigned __int8 (__fastcall *)(__int64, const char *, __int64))v121)(v112, "experimental-xsfmclic", 21)
    || (unsigned __int8)sub_1068030((__int64)&v321, (__int64)"experimental-xsfmclic", 21) )
  {
    goto LABEL_169;
  }
  sub_168B9F0((__int64)&v334, v302, v8[1].m128i_u32[2], 0x135Bu, 0);
  v122 = sub_B17AB0(v120);
  v123 = (__int64)v122;
  if ( v339 )
  {
    sub_AE9DF0(&v337, (__int64)v122, 1u);
  }
  else
  {
    if ( !v341 )
      goto LABEL_158;
    v281 = sub_168B9E0(&v334);
    v284 = (void *)v336[0];
    if ( v336[0] )
      v284 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v336[0] + 32LL))(v336[0]);
    v318 = v284;
    v285 = sub_1587BC0(v281, (__int64 *)&v318, v279, v280, v282, v283);
    sub_AE9DF0((unsigned __int8 **)(*v285 + 32LL * v340 + 8), v123, 1u);
  }
  if ( v339 )
  {
    sub_AE9DF0(&v337, (__int64)"XSfmclic", 1u);
  }
  else if ( v341 )
  {
    sub_1C245B0(&v334, (__int64)"XSfmclic");
  }
LABEL_158:
  sub_15F7200(&v334);
  v124 = v321;
  if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
  {
    v125 = 0;
    v126 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
    v127 = (char *)v321;
    do
    {
      v128 = *(_QWORD **)&v127[v125];
      if ( v128 && v128 != (_QWORD *)-8LL )
      {
        operator delete(v128, *v128 + 17LL, 8);
        v127 = (char *)v321;
      }
      v125 += 8;
    }
    while ( v126 != v125 );
    v124 = v127;
  }
  free(v124);
LABEL_57:
  v38 = (_QWORD **)v330;
  if ( v330 )
  {
    do
    {
      sub_1C26070((__int64)&v328, v38[3]);
      v39 = (_QWORD **)v38[2];
      operator delete(v38);
      v38 = v39;
    }
    while ( v39 );
  }
LABEL_59:
  if ( ptr != v327 )
    free(ptr);
}
