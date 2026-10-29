__int64 __fastcall sub_1658BD0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  __int64 v15; // rdx
  _BYTE *v16; // rdx
  __int64 v17; // r12
  unsigned __int64 v18; // r12
  __int64 v19; // r12
  unsigned __int64 v20; // r12
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // r14
  int v25; // eax
  _BYTE *v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 (*v29)(void); // rax
  __int64 v30; // rax
  void **v31; // rax
  unsigned int **v32; // r15
  unsigned int **v33; // r14
  __int64 v34; // rdi
  __int64 (*v35)(void); // rax
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int *v40; // r15
  unsigned int v41; // r14d
  unsigned int v42; // r13d
  char v43; // dl
  unsigned __int8 v44; // al
  bool v45; // r13
  void ***v46; // r12
  void ***v47; // rdi
  void **v48; // rbp
  __int64 result; // rax
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rsi
  unsigned __int8 *v58; // rax
  __int64 v59; // rax
  unsigned __int8 *v60; // r12
  __int64 v61; // rax
  unsigned __int8 *v62; // r15
  __int64 v63; // rax
  unsigned __int8 *v64; // r14
  __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int8 *v67; // rax
  _BOOL8 v68; // r14
  unsigned __int8 *v69; // r13
  unsigned __int8 *v70; // rdx
  __int64 v71; // rax
  bool v72; // r15
  unsigned __int8 *v73; // r13
  unsigned __int8 *v74; // rdx
  __int64 v75; // rax
  unsigned __int8 *v76; // rax
  __int64 v77; // rcx
  unsigned __int64 v78; // rsi
  unsigned __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r14
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // r15
  unsigned __int8 *v90; // r14
  _BYTE *v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r15
  __int64 v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rdx
  unsigned __int8 *v101; // r15
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r12
  __int64 v109; // rax
  _QWORD *v110; // rax
  __int64 v111; // rcx
  unsigned __int8 *v112; // r12
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rsi
  unsigned __int64 v122; // rdi
  unsigned __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // r14
  __int64 v129; // rax
  _QWORD *v130; // rax
  _BOOL8 v131; // rdx
  __int64 v132; // r14
  unsigned __int8 *v133; // r13
  _BYTE *v134; // rcx
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // r14
  __int64 v141; // rax
  __int64 v142; // rdi
  _BOOL8 v143; // r14
  _QWORD *v144; // rax
  __int64 v145; // rdx
  unsigned __int8 *v146; // r13
  _BYTE *v147; // rdx
  __int64 v148; // rax
  void ***v149; // r12
  void ***v150; // rdi
  void **v151; // rbp
  __int64 v152; // rcx
  int v153; // eax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rsi
  __int64 v157; // rax
  unsigned __int8 *v158; // r13
  _BYTE *v159; // r12
  __int64 v160; // rbx
  void *v161; // rdi
  __int64 v162; // rdx
  int v163; // eax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 v168; // rbx
  __int64 v169; // rbp
  void *v170; // rdi
  __int64 v171; // rdx
  int v172; // eax
  __int64 v173; // rax
  __int64 v174; // r15
  __int64 v175; // rdx
  __int64 v176; // r15
  __int64 v177; // rbp
  __int64 v178; // rbx
  void *v179; // rdi
  __int64 v180; // rcx
  int v181; // eax
  __int64 v182; // rax
  __int64 v183; // rcx
  __int64 v184; // rcx
  unsigned __int8 *v185; // r13
  __int64 v186; // rbx
  __int64 v187; // rbp
  void *v188; // rdi
  __int64 v189; // rcx
  int v190; // eax
  __int64 v191; // rdx
  int v192; // eax
  __int64 v193; // rcx
  int v194; // eax
  __int64 v195; // rsi
  int v196; // eax
  __int64 v197; // rdx
  int v198; // eax
  __int64 v199; // rdx
  int v200; // eax
  __int64 v201; // rdx
  int v202; // eax
  __int64 v203; // rcx
  int v204; // eax
  __int64 v205; // rdx
  int v206; // eax
  __int64 v207; // rcx
  int v208; // eax
  __int64 v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rsi
  __int64 v212; // rdx
  __int64 v213; // rbx
  unsigned __int8 *v214; // r12
  void *v215; // rdi
  __int64 v216; // rax
  __int64 v217; // rax
  __int64 v218; // rcx
  __int64 v219; // rax
  __int64 v220; // r12
  __int64 v221; // rbx
  __int64 v222; // rbp
  void *v223; // rdi
  __int64 v224; // rax
  __int64 v225; // r14
  __int64 v226; // rdx
  __int64 v227; // r14
  __int64 v228; // rbp
  __int64 v229; // rbx
  void *v230; // rdi
  __int64 v231; // rax
  __int64 v232; // rax
  __int64 v233; // rsi
  __int64 v234; // rax
  __int64 v235; // r13
  __int64 v236; // rbx
  void *v237; // rdi
  __int64 v238; // rax
  __int64 v239; // rcx
  __int64 v240; // rcx
  unsigned __int8 *v241; // r13
  __int64 v242; // rbx
  __int64 v243; // rbp
  void *v244; // rdi
  __int64 v245; // rax
  __int64 v246; // rax
  __int64 v247; // rcx
  __int64 v248; // rax
  __int64 v249; // rbx
  __int64 v250; // rbp
  void *v251; // rdi
  __int64 v252; // rax
  __int64 v253; // rax
  __int64 v254; // rsi
  __int64 v255; // rax
  _BYTE *v256; // r12
  __int64 v257; // r13
  __int64 v258; // rbx
  void *v259; // rdi
  __int64 v260; // rax
  __int64 v261; // r15
  __int64 v262; // rcx
  __int64 v263; // r15
  __int64 v264; // r12
  __int64 v265; // rbx
  _BOOL8 v266; // rbp
  void *v267; // rdi
  __int64 v268; // rax
  __int64 v269; // rdx
  __int64 v270; // rsi
  __int64 v271; // rdx
  __int64 v272; // rbx
  unsigned __int8 *v273; // r12
  void *v274; // rdi
  __int64 v275; // rax
  __int64 v276; // rax
  __int64 v277; // rcx
  __int64 v278; // rax
  __int64 v279; // rbx
  __int64 v280; // r12
  __int64 v281; // rbp
  void *v282; // rdi
  __int64 v284; // [rsp+8h] [rbp-290h]
  __int64 v285; // [rsp+8h] [rbp-290h]
  __int64 v286; // [rsp+8h] [rbp-290h]
  unsigned __int8 *v287; // [rsp+8h] [rbp-290h]
  __int64 v288; // [rsp+8h] [rbp-290h]
  unsigned __int8 *v289; // [rsp+8h] [rbp-290h]
  __int64 v290; // [rsp+8h] [rbp-290h]
  __int64 v291; // [rsp+8h] [rbp-290h]
  __int64 v292; // [rsp+10h] [rbp-288h]
  char v293; // [rsp+18h] [rbp-280h]
  bool v294; // [rsp+18h] [rbp-280h]
  unsigned __int8 v295; // [rsp+18h] [rbp-280h]
  _BYTE *v296; // [rsp+18h] [rbp-280h]
  _BYTE *v297; // [rsp+18h] [rbp-280h]
  __int64 v298; // [rsp+18h] [rbp-280h]
  __int64 v299; // [rsp+18h] [rbp-280h]
  __int64 v300; // [rsp+18h] [rbp-280h]
  __int64 v301; // [rsp+18h] [rbp-280h]
  __int64 v302; // [rsp+18h] [rbp-280h]
  _BYTE *v303; // [rsp+18h] [rbp-280h]
  __int64 v304; // [rsp+18h] [rbp-280h]
  __int64 v305; // [rsp+18h] [rbp-280h]
  unsigned __int8 *v306; // [rsp+18h] [rbp-280h]
  unsigned int **v307; // [rsp+20h] [rbp-278h]
  __int64 v308; // [rsp+20h] [rbp-278h]
  __int64 v309; // [rsp+20h] [rbp-278h]
  __int64 v311; // [rsp+20h] [rbp-278h]
  __int64 v312; // [rsp+20h] [rbp-278h]
  __int64 v313; // [rsp+20h] [rbp-278h]
  __int64 v314; // [rsp+20h] [rbp-278h]
  __int64 v315; // [rsp+20h] [rbp-278h]
  __int64 v316; // [rsp+28h] [rbp-270h]
  __int64 v318; // [rsp+28h] [rbp-270h]
  __int64 *v319; // [rsp+30h] [rbp-268h]
  __int64 v320; // [rsp+30h] [rbp-268h]
  __int64 v321; // [rsp+48h] [rbp-250h] BYREF
  unsigned __int64 v322; // [rsp+50h] [rbp-248h] BYREF
  int v323; // [rsp+58h] [rbp-240h]
  __int64 v324[2]; // [rsp+60h] [rbp-238h] BYREF
  __int64 v325; // [rsp+70h] [rbp-228h]
  unsigned __int8 *v326; // [rsp+80h] [rbp-218h]
  __int64 v327; // [rsp+88h] [rbp-210h]
  char v328; // [rsp+D8h] [rbp-1C0h]
  unsigned int v329; // [rsp+E0h] [rbp-1B8h]
  char v330; // [rsp+E4h] [rbp-1B4h]
  __int64 v331; // [rsp+F0h] [rbp-1A8h] BYREF
  void *v332; // [rsp+F8h] [rbp-1A0h] BYREF
  void **v333; // [rsp+100h] [rbp-198h]
  __int64 v334; // [rsp+108h] [rbp-190h]
  __int64 v335; // [rsp+110h] [rbp-188h]
  __int64 v336; // [rsp+118h] [rbp-180h] BYREF
  unsigned int v337; // [rsp+120h] [rbp-178h]
  char v338; // [rsp+168h] [rbp-130h]
  unsigned int v339; // [rsp+170h] [rbp-128h]
  char v340; // [rsp+174h] [rbp-124h]
  void *v341[2]; // [rsp+198h] [rbp-100h] BYREF
  int v342; // [rsp+1A8h] [rbp-F0h]
  char v343; // [rsp+1ACh] [rbp-ECh]
  _QWORD v344[5]; // [rsp+1B0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+1D8h] [rbp-C0h]
  __int64 v346; // [rsp+1E0h] [rbp-B8h]
  _DWORD v347[26]; // [rsp+1E8h] [rbp-B0h] BYREF
  __int64 v348; // [rsp+250h] [rbp-48h]
  __int16 v349; // [rsp+258h] [rbp-40h]
  char v350; // [rsp+25Ah] [rbp-3Eh]

  v4 = a1;
  v5 = 0;
  v6 = a4;
  v7 = *(_QWORD *)(a4 + 16);
  v8 = *(_QWORD *)(a4 + 72);
  if ( (*(_BYTE *)a4 & 4) != 0 )
    v5 = *(_QWORD *)(a4 + 8);
  v9 = a2;
  v10 = a1 + 8;
  v292 = a1 + 8;
  sub_168CDE0(&v331, a1 + 8, v9, a4 + 32, 0);
  v14 = *(_BYTE *)v6 & 3;
  LOBYTE(v15) = v14 == 1;
  if ( v338 )
  {
    v67 = (unsigned __int8 *)v335;
    v15 = (unsigned __int8)v15;
    if ( !v335 )
    {
      v180 = v336;
      v181 = *(_DWORD *)(v336 + 14976);
      if ( v181 )
      {
        v182 = (unsigned int)(v181 - 1);
        *(_DWORD *)(v336 + 14976) = v182;
        v67 = *(unsigned __int8 **)(v180 + 8 * v182 + 14848);
        v183 = *((unsigned int *)v67 + 134);
        *v67 = 0;
        v12 = *((_QWORD *)v67 + 66);
        *((_DWORD *)v67 + 106) = 0;
        v184 = v12 + (v183 << 6);
        if ( v12 != v184 )
        {
          v185 = v67;
          v316 = v6;
          v186 = v184;
          v187 = v12;
          do
          {
            while ( 1 )
            {
              v186 -= 64;
              v188 = *(void **)(v186 + 24);
              if ( v188 == (void *)(v186 + 40) )
                break;
              v300 = v15;
              operator delete(v188);
              v15 = v300;
              if ( v187 == v186 )
                goto LABEL_171;
            }
          }
          while ( v187 != v186 );
LABEL_171:
          v67 = v185;
          v6 = v316;
          v4 = a1;
        }
        *((_DWORD *)v67 + 134) = 0;
      }
      else
      {
        v302 = (unsigned __int8)v15;
        v67 = (unsigned __int8 *)operator new(0x3A0u);
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
        v15 = v302;
        *((_QWORD *)v67 + 66) = v67 + 544;
        *((_QWORD *)v67 + 67) = 0x600000000LL;
      }
      v335 = (__int64)v67;
    }
    v67[*v67 + 1] = 2;
    v11 = v335;
  }
  else
  {
    if ( !v340 )
    {
      v16 = nullptr;
      if ( v5 )
        v16 = *(_BYTE **)(v5 + 40);
      goto LABEL_7;
    }
    v294 = v14 == 1;
    v50 = sub_168B9E0(&v331);
    v53 = v294;
    v54 = v50;
    v55 = (__int64)v333;
    if ( v333 )
    {
      v308 = v54;
      v55 = (*((__int64 (__fastcall **)(void **, void *, bool))*v333 + 4))(v333, *v333, v294);
      v54 = v308;
      v53 = v294;
    }
    v295 = v53;
    v324[0] = v55;
    v56 = sub_1587BC0(v54, v324, v53, v54, v51, v52);
    v15 = v295;
    v57 = *v56 + 32LL * v339;
    v58 = *(unsigned __int8 **)(v57 + 8);
    if ( !v58 )
    {
      v189 = *(_QWORD *)(v57 + 16);
      v190 = *(_DWORD *)(v189 + 14976);
      if ( v190 )
      {
        v238 = (unsigned int)(v190 - 1);
        *(_DWORD *)(v189 + 14976) = v238;
        v58 = *(unsigned __int8 **)(v189 + 8 * v238 + 14848);
        v239 = *((unsigned int *)v58 + 134);
        *v58 = 0;
        v12 = *((_QWORD *)v58 + 66);
        *((_DWORD *)v58 + 106) = 0;
        v240 = v12 + (v239 << 6);
        if ( v12 != v240 )
        {
          v241 = v58;
          v320 = v6;
          v242 = v240;
          v243 = v12;
          do
          {
            while ( 1 )
            {
              v242 -= 64;
              v244 = *(void **)(v242 + 24);
              if ( v244 == (void *)(v242 + 40) )
                break;
              v313 = v15;
              operator delete(v244);
              v15 = v313;
              if ( v243 == v242 )
                goto LABEL_256;
            }
          }
          while ( v243 != v242 );
LABEL_256:
          v58 = v241;
          v6 = v320;
          v4 = a1;
        }
        *((_DWORD *)v58 + 134) = 0;
      }
      else
      {
        v58 = (unsigned __int8 *)operator new(0x3A0u);
        *v58 = 0;
        *((_QWORD *)v58 + 12) = v58 + 112;
        *((_QWORD *)v58 + 16) = v58 + 144;
        *((_QWORD *)v58 + 20) = v58 + 176;
        *((_QWORD *)v58 + 24) = v58 + 208;
        *((_QWORD *)v58 + 28) = v58 + 240;
        *((_QWORD *)v58 + 32) = v58 + 272;
        *((_QWORD *)v58 + 36) = v58 + 304;
        *((_QWORD *)v58 + 40) = v58 + 336;
        *((_QWORD *)v58 + 44) = v58 + 368;
        *((_QWORD *)v58 + 48) = v58 + 400;
        *((_QWORD *)v58 + 52) = v58 + 432;
        *((_QWORD *)v58 + 13) = 0;
        v58[112] = 0;
        *((_QWORD *)v58 + 17) = 0;
        v58[144] = 0;
        *((_QWORD *)v58 + 21) = 0;
        v58[176] = 0;
        *((_QWORD *)v58 + 25) = 0;
        v58[208] = 0;
        *((_QWORD *)v58 + 29) = 0;
        v58[240] = 0;
        *((_QWORD *)v58 + 33) = 0;
        v58[272] = 0;
        *((_QWORD *)v58 + 37) = 0;
        v58[304] = 0;
        *((_QWORD *)v58 + 41) = 0;
        v58[336] = 0;
        *((_QWORD *)v58 + 45) = 0;
        v58[368] = 0;
        *((_QWORD *)v58 + 49) = 0;
        v58[400] = 0;
        *((_QWORD *)v58 + 53) = 0x800000000LL;
        v15 = v295;
        *((_QWORD *)v58 + 66) = v58 + 544;
        *((_QWORD *)v58 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v57 + 8) = v58;
    }
    v58[*v58 + 1] = 2;
    v11 = *(_QWORD *)(v57 + 8);
  }
  v59 = *(unsigned __int8 *)v11;
  v10 = (unsigned int)(v59 + 1);
  *(_BYTE *)v11 = v59 + 1;
  *(_QWORD *)(v11 + 8 * v59 + 16) = v15;
  v16 = nullptr;
  if ( v5 )
    v16 = *(_BYTE **)(v5 + 40);
  if ( !v338 )
  {
LABEL_7:
    if ( v340 )
    {
      v296 = v16;
      v103 = sub_168B9E0(&v331);
      v107 = (__int64)v296;
      v108 = v103;
      v109 = (__int64)v333;
      if ( v333 )
      {
        v109 = (*((__int64 (__fastcall **)(void **, __int64, _BYTE *))*v333 + 4))(v333, v10, v296);
        v107 = (__int64)v296;
      }
      v297 = (_BYTE *)v107;
      v324[0] = v109;
      v110 = sub_1587BC0(v108, v324, v107, v104, v105, v106);
      v16 = v297;
      v111 = *v110 + 32LL * v339;
      v112 = *(unsigned __int8 **)(v111 + 8);
      if ( !v112 )
      {
        v195 = *(_QWORD *)(v111 + 16);
        v196 = *(_DWORD *)(v195 + 14976);
        if ( v196 )
        {
          v252 = (unsigned int)(v196 - 1);
          *(_DWORD *)(v195 + 14976) = v252;
          v112 = *(unsigned __int8 **)(v195 + 8 * v252 + 14848);
          v253 = *((unsigned int *)v112 + 134);
          v254 = *((_QWORD *)v112 + 66);
          *v112 = 0;
          *((_DWORD *)v112 + 106) = 0;
          v255 = v254 + (v253 << 6);
          if ( v254 != v255 )
          {
            v306 = v112;
            v256 = v16;
            v314 = v4;
            v257 = v111;
            v318 = v6;
            v258 = v255;
            do
            {
              while ( 1 )
              {
                v258 -= 64;
                v259 = *(void **)(v258 + 24);
                if ( v259 == (void *)(v258 + 40) )
                  break;
                operator delete(v259);
                if ( v254 == v258 )
                  goto LABEL_272;
              }
            }
            while ( v254 != v258 );
LABEL_272:
            v16 = v256;
            v111 = v257;
            v112 = v306;
            v4 = v314;
            v6 = v318;
          }
          *((_DWORD *)v112 + 134) = 0;
        }
        else
        {
          v311 = v111;
          v112 = (unsigned __int8 *)operator new(0x3A0u);
          *v112 = 0;
          *((_QWORD *)v112 + 12) = v112 + 112;
          *((_QWORD *)v112 + 16) = v112 + 144;
          *((_QWORD *)v112 + 20) = v112 + 176;
          *((_QWORD *)v112 + 24) = v112 + 208;
          *((_QWORD *)v112 + 28) = v112 + 240;
          *((_QWORD *)v112 + 32) = v112 + 272;
          *((_QWORD *)v112 + 36) = v112 + 304;
          *((_QWORD *)v112 + 40) = v112 + 336;
          *((_QWORD *)v112 + 44) = v112 + 368;
          *((_QWORD *)v112 + 48) = v112 + 400;
          *((_QWORD *)v112 + 52) = v112 + 432;
          *((_QWORD *)v112 + 13) = 0;
          v112[112] = 0;
          *((_QWORD *)v112 + 17) = 0;
          v112[144] = 0;
          *((_QWORD *)v112 + 21) = 0;
          v112[176] = 0;
          *((_QWORD *)v112 + 25) = 0;
          v112[208] = 0;
          *((_QWORD *)v112 + 29) = 0;
          v112[240] = 0;
          *((_QWORD *)v112 + 33) = 0;
          v112[272] = 0;
          *((_QWORD *)v112 + 37) = 0;
          v112[304] = 0;
          *((_QWORD *)v112 + 41) = 0;
          v112[336] = 0;
          *((_QWORD *)v112 + 45) = 0;
          v112[368] = 0;
          *((_QWORD *)v112 + 49) = 0;
          v112[400] = 0;
          *((_QWORD *)v112 + 53) = 0x800000000LL;
          v16 = v297;
          *((_QWORD *)v112 + 66) = v112 + 544;
          v111 = v311;
          *((_QWORD *)v112 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v111 + 8) = v112;
      }
      v112[*v112 + 1] = 9;
      v11 = *(_QWORD *)(v111 + 8);
      v113 = *(unsigned __int8 *)v11;
      *(_BYTE *)v11 = v113 + 1;
      *(_QWORD *)(v11 + 8 * v113 + 16) = v16;
    }
    v17 = *(_QWORD *)(v7 + 48);
    if ( v17 )
      goto LABEL_9;
    goto LABEL_76;
  }
  v60 = (unsigned __int8 *)v335;
  if ( !v335 )
  {
    v152 = v336;
    v153 = *(_DWORD *)(v336 + 14976);
    if ( v153 )
    {
      v154 = (unsigned int)(v153 - 1);
      *(_DWORD *)(v336 + 14976) = v154;
      v60 = *(unsigned __int8 **)(v152 + 8 * v154 + 14848);
      v155 = *((unsigned int *)v60 + 134);
      v156 = *((_QWORD *)v60 + 66);
      *v60 = 0;
      *((_DWORD *)v60 + 106) = 0;
      v157 = v156 + (v155 << 6);
      if ( v156 != v157 )
      {
        v298 = v4;
        v158 = v60;
        v159 = v16;
        v309 = v6;
        v160 = v157;
        do
        {
          while ( 1 )
          {
            v160 -= 64;
            v161 = *(void **)(v160 + 24);
            if ( v161 == (void *)(v160 + 40) )
              break;
            operator delete(v161);
            if ( v156 == v160 )
              goto LABEL_150;
          }
        }
        while ( v156 != v160 );
LABEL_150:
        v16 = v159;
        v6 = v309;
        v60 = v158;
        v4 = v298;
      }
      *((_DWORD *)v60 + 134) = 0;
    }
    else
    {
      v303 = v16;
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
      v16 = v303;
      *((_QWORD *)v60 + 66) = v60 + 544;
      *((_QWORD *)v60 + 67) = 0x600000000LL;
    }
    v335 = (__int64)v60;
  }
  v60[*v60 + 1] = 9;
  v11 = v335;
  v61 = *(unsigned __int8 *)v335;
  *(_BYTE *)v335 = v61 + 1;
  *(_QWORD *)(v11 + 8 * v61 + 16) = v16;
  v17 = *(_QWORD *)(v7 + 48);
  if ( v17 )
  {
LABEL_9:
    v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v338 )
      goto LABEL_10;
    goto LABEL_77;
  }
LABEL_76:
  v18 = sub_A7AA70(*(_QWORD *)(v4 + 248), v7, (__int64)v16, v11, v12, v13);
  if ( !v338 )
  {
LABEL_10:
    if ( v340 )
    {
      v97 = sub_168B9E0(&v331);
      v98 = (__int64)v333;
      if ( v333 )
        v98 = (*((__int64 (__fastcall **)(void **))*v333 + 4))(v333);
      v324[0] = v98;
      v99 = sub_1587BC0(v97, v324, v93, v94, v95, v96);
      v100 = *v99 + 32LL * v339;
      v101 = *(unsigned __int8 **)(v100 + 8);
      if ( !v101 )
      {
        v193 = *(_QWORD *)(v100 + 16);
        v194 = *(_DWORD *)(v193 + 14976);
        if ( v194 )
        {
          v231 = (unsigned int)(v194 - 1);
          *(_DWORD *)(v193 + 14976) = v231;
          v101 = *(unsigned __int8 **)(v193 + 8 * v231 + 14848);
          v232 = *((unsigned int *)v101 + 134);
          *v101 = 0;
          v233 = *((_QWORD *)v101 + 66);
          *((_DWORD *)v101 + 106) = 0;
          v234 = v233 + (v232 << 6);
          if ( v233 != v234 )
          {
            v304 = v4;
            v235 = v100;
            v312 = v6;
            v236 = v234;
            do
            {
              while ( 1 )
              {
                v236 -= 64;
                v237 = *(void **)(v236 + 24);
                if ( v237 == (void *)(v236 + 40) )
                  break;
                operator delete(v237);
                if ( v233 == v236 )
                  goto LABEL_248;
              }
            }
            while ( v233 != v236 );
LABEL_248:
            v100 = v235;
            v6 = v312;
            v4 = v304;
          }
          *((_DWORD *)v101 + 134) = 0;
        }
        else
        {
          v301 = v100;
          v101 = (unsigned __int8 *)operator new(0x3A0u);
          *v101 = 0;
          *((_QWORD *)v101 + 12) = v101 + 112;
          *((_QWORD *)v101 + 16) = v101 + 144;
          *((_QWORD *)v101 + 20) = v101 + 176;
          *((_QWORD *)v101 + 24) = v101 + 208;
          *((_QWORD *)v101 + 28) = v101 + 240;
          *((_QWORD *)v101 + 32) = v101 + 272;
          *((_QWORD *)v101 + 36) = v101 + 304;
          *((_QWORD *)v101 + 40) = v101 + 336;
          *((_QWORD *)v101 + 44) = v101 + 368;
          *((_QWORD *)v101 + 48) = v101 + 400;
          *((_QWORD *)v101 + 52) = v101 + 432;
          *((_QWORD *)v101 + 13) = 0;
          v101[112] = 0;
          *((_QWORD *)v101 + 17) = 0;
          v101[144] = 0;
          *((_QWORD *)v101 + 21) = 0;
          v101[176] = 0;
          *((_QWORD *)v101 + 25) = 0;
          v101[208] = 0;
          *((_QWORD *)v101 + 29) = 0;
          v101[240] = 0;
          *((_QWORD *)v101 + 33) = 0;
          v101[272] = 0;
          *((_QWORD *)v101 + 37) = 0;
          v101[304] = 0;
          *((_QWORD *)v101 + 41) = 0;
          v101[336] = 0;
          *((_QWORD *)v101 + 45) = 0;
          v101[368] = 0;
          *((_QWORD *)v101 + 49) = 0;
          v101[400] = 0;
          *((_QWORD *)v101 + 53) = 0x800000000LL;
          v100 = v301;
          *((_QWORD *)v101 + 66) = v101 + 544;
          *((_QWORD *)v101 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v100 + 8) = v101;
      }
      v101[*v101 + 1] = 8;
      v16 = *(_BYTE **)(v100 + 8);
      v102 = (unsigned __int8)*v16;
      v11 = (unsigned int)(v102 + 1);
      *v16 = v102 + 1;
      *(_QWORD *)&v16[8 * v102 + 16] = v18;
    }
    v19 = *(_QWORD *)(v8 + 48);
    if ( v19 )
      goto LABEL_12;
    goto LABEL_79;
  }
LABEL_77:
  v62 = (unsigned __int8 *)v335;
  if ( !v335 )
  {
    v162 = v336;
    v163 = *(_DWORD *)(v336 + 14976);
    if ( v163 )
    {
      v164 = (unsigned int)(v163 - 1);
      *(_DWORD *)(v336 + 14976) = v164;
      v62 = *(unsigned __int8 **)(v162 + 8 * v164 + 14848);
      v165 = *((unsigned int *)v62 + 134);
      *v62 = 0;
      v166 = *((_QWORD *)v62 + 66);
      *((_DWORD *)v62 + 106) = 0;
      v167 = v166 + (v165 << 6);
      if ( v166 != v167 )
      {
        v299 = v6;
        v168 = v167;
        v169 = v166;
        do
        {
          while ( 1 )
          {
            v168 -= 64;
            v170 = *(void **)(v168 + 24);
            if ( v170 == (void *)(v168 + 40) )
              break;
            operator delete(v170);
            if ( v169 == v168 )
              goto LABEL_157;
          }
        }
        while ( v169 != v168 );
LABEL_157:
        v6 = v299;
      }
      *((_DWORD *)v62 + 134) = 0;
    }
    else
    {
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
      *((_QWORD *)v62 + 66) = v62 + 544;
      *((_QWORD *)v62 + 67) = 0x600000000LL;
    }
    v335 = (__int64)v62;
  }
  v62[*v62 + 1] = 8;
  v16 = (_BYTE *)v335;
  v63 = *(unsigned __int8 *)v335;
  v11 = (unsigned int)(v63 + 1);
  *(_BYTE *)v335 = v63 + 1;
  *(_QWORD *)&v16[8 * v63 + 16] = v18;
  v19 = *(_QWORD *)(v8 + 48);
  if ( v19 )
  {
LABEL_12:
    v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !v338 )
      goto LABEL_13;
LABEL_80:
    v64 = (unsigned __int8 *)v335;
    if ( !v335 )
    {
      v171 = v336;
      v172 = *(_DWORD *)(v336 + 14976);
      if ( v172 )
      {
        v173 = (unsigned int)(v172 - 1);
        *(_DWORD *)(v336 + 14976) = v173;
        v64 = *(unsigned __int8 **)(v171 + 8 * v173 + 14848);
        v174 = *((unsigned int *)v64 + 134);
        *v64 = 0;
        v175 = *((_QWORD *)v64 + 66);
        *((_DWORD *)v64 + 106) = 0;
        v176 = v175 + (v174 << 6);
        if ( v175 != v176 )
        {
          v177 = v6;
          v178 = v175;
          do
          {
            while ( 1 )
            {
              v176 -= 64;
              v179 = *(void **)(v176 + 24);
              if ( v179 == (void *)(v176 + 40) )
                break;
              operator delete(v179);
              if ( v178 == v176 )
                goto LABEL_164;
            }
          }
          while ( v178 != v176 );
LABEL_164:
          v6 = v177;
        }
        *((_DWORD *)v64 + 134) = 0;
      }
      else
      {
        v64 = (unsigned __int8 *)operator new(0x3A0u);
        *v64 = 0;
        *((_QWORD *)v64 + 12) = v64 + 112;
        *((_QWORD *)v64 + 16) = v64 + 144;
        *((_QWORD *)v64 + 20) = v64 + 176;
        *((_QWORD *)v64 + 24) = v64 + 208;
        *((_QWORD *)v64 + 28) = v64 + 240;
        *((_QWORD *)v64 + 32) = v64 + 272;
        *((_QWORD *)v64 + 36) = v64 + 304;
        *((_QWORD *)v64 + 40) = v64 + 336;
        *((_QWORD *)v64 + 44) = v64 + 368;
        *((_QWORD *)v64 + 48) = v64 + 400;
        *((_QWORD *)v64 + 52) = v64 + 432;
        *((_QWORD *)v64 + 13) = 0;
        v64[112] = 0;
        *((_QWORD *)v64 + 17) = 0;
        v64[144] = 0;
        *((_QWORD *)v64 + 21) = 0;
        v64[176] = 0;
        *((_QWORD *)v64 + 25) = 0;
        v64[208] = 0;
        *((_QWORD *)v64 + 29) = 0;
        v64[240] = 0;
        *((_QWORD *)v64 + 33) = 0;
        v64[272] = 0;
        *((_QWORD *)v64 + 37) = 0;
        v64[304] = 0;
        *((_QWORD *)v64 + 41) = 0;
        v64[336] = 0;
        *((_QWORD *)v64 + 45) = 0;
        v64[368] = 0;
        *((_QWORD *)v64 + 49) = 0;
        v64[400] = 0;
        *((_QWORD *)v64 + 53) = 0x800000000LL;
        *((_QWORD *)v64 + 66) = v64 + 544;
        *((_QWORD *)v64 + 67) = 0x600000000LL;
      }
      v335 = (__int64)v64;
    }
    v64[*v64 + 1] = 8;
    v65 = v335;
    v66 = *(unsigned __int8 *)v335;
    *(_BYTE *)v335 = v66 + 1;
    *(_QWORD *)(v65 + 8 * v66 + 16) = v20;
    goto LABEL_14;
  }
LABEL_79:
  v20 = sub_A7AA70(*(_QWORD *)(v4 + 248), v8, (__int64)v16, v11, v12, v13);
  if ( v338 )
    goto LABEL_80;
LABEL_13:
  if ( v340 )
  {
    v86 = sub_168B9E0(&v331);
    v87 = (__int64)v333;
    if ( v333 )
      v87 = (*((__int64 (__fastcall **)(void **))*v333 + 4))(v333);
    v324[0] = v87;
    v88 = sub_1587BC0(v86, v324, v82, v83, v84, v85);
    v89 = *v88 + 32LL * v339;
    v90 = *(unsigned __int8 **)(v89 + 8);
    if ( !v90 )
    {
      v191 = *(_QWORD *)(v89 + 16);
      v192 = *(_DWORD *)(v191 + 14976);
      if ( v192 )
      {
        v245 = (unsigned int)(v192 - 1);
        *(_DWORD *)(v191 + 14976) = v245;
        v90 = *(unsigned __int8 **)(v191 + 8 * v245 + 14848);
        v246 = *((unsigned int *)v90 + 134);
        *v90 = 0;
        v247 = *((_QWORD *)v90 + 66);
        *((_DWORD *)v90 + 106) = 0;
        v248 = v247 + (v246 << 6);
        if ( v247 != v248 )
        {
          v305 = v6;
          v249 = v248;
          v250 = v247;
          do
          {
            while ( 1 )
            {
              v249 -= 64;
              v251 = *(void **)(v249 + 24);
              if ( v251 == (void *)(v249 + 40) )
                break;
              operator delete(v251);
              if ( v250 == v249 )
                goto LABEL_264;
            }
          }
          while ( v250 != v249 );
LABEL_264:
          v6 = v305;
        }
        *((_DWORD *)v90 + 134) = 0;
      }
      else
      {
        v90 = (unsigned __int8 *)operator new(0x3A0u);
        *v90 = 0;
        *((_QWORD *)v90 + 12) = v90 + 112;
        *((_QWORD *)v90 + 16) = v90 + 144;
        *((_QWORD *)v90 + 20) = v90 + 176;
        *((_QWORD *)v90 + 24) = v90 + 208;
        *((_QWORD *)v90 + 28) = v90 + 240;
        *((_QWORD *)v90 + 32) = v90 + 272;
        *((_QWORD *)v90 + 36) = v90 + 304;
        *((_QWORD *)v90 + 40) = v90 + 336;
        *((_QWORD *)v90 + 44) = v90 + 368;
        *((_QWORD *)v90 + 48) = v90 + 400;
        *((_QWORD *)v90 + 52) = v90 + 432;
        *((_QWORD *)v90 + 13) = 0;
        v90[112] = 0;
        *((_QWORD *)v90 + 17) = 0;
        v90[144] = 0;
        *((_QWORD *)v90 + 21) = 0;
        v90[176] = 0;
        *((_QWORD *)v90 + 25) = 0;
        v90[208] = 0;
        *((_QWORD *)v90 + 29) = 0;
        v90[240] = 0;
        *((_QWORD *)v90 + 33) = 0;
        v90[272] = 0;
        *((_QWORD *)v90 + 37) = 0;
        v90[304] = 0;
        *((_QWORD *)v90 + 41) = 0;
        v90[336] = 0;
        *((_QWORD *)v90 + 45) = 0;
        v90[368] = 0;
        *((_QWORD *)v90 + 49) = 0;
        v90[400] = 0;
        *((_QWORD *)v90 + 53) = 0x800000000LL;
        *((_QWORD *)v90 + 66) = v90 + 544;
        *((_QWORD *)v90 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v89 + 8) = v90;
    }
    v90[*v90 + 1] = 8;
    v91 = *(_BYTE **)(v89 + 8);
    v92 = (unsigned __int8)*v91;
    *v91 = v92 + 1;
    *(_QWORD *)&v91[8 * v92 + 16] = v20;
  }
LABEL_14:
  sub_15F7200(&v331);
  v293 = *(_BYTE *)(v6 + 56) & 1;
  if ( (*(_BYTE *)v6 & 4) == 0 )
  {
    v23 = 0;
    goto LABEL_26;
  }
  v22 = *(_QWORD *)(v6 + 8);
  v23 = (*(_BYTE *)(v22 + 29) >> 5) & 3;
  if ( ((*(_BYTE *)(v22 + 29) >> 5) & 3) == 0
    || (v24 = *(_QWORD *)(v6 + 72), (v25 = sub_1656AA0(v4, a3, v24, (*(_BYTE *)(v22 + 29) >> 5) & 3, v6, v21)) == 0) )
  {
    *(_BYTE *)(v6 + 56) &= ~1u;
    v23 = 0;
    goto LABEL_26;
  }
  if ( v25 == 1 )
  {
    if ( v23 == 2 )
      goto LABEL_112;
    v26 = *(_BYTE **)(v6 + 16);
    if ( (v26[75] & 1) == 0 )
      goto LABEL_23;
    while ( 1 )
    {
      v27 = *(_QWORD *)(sub_B8C1B0((__int64)(v26 + 64)) + 16);
      if ( (v27 & 4) != 0 )
      {
        v28 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v28 )
        {
LABEL_114:
          v26 = nullptr;
LABEL_23:
          v29 = *(__int64 (**)(void))(*(_QWORD *)v26 + 32LL);
          if ( (char *)v29 == (char *)sub_A01140 )
            v30 = sub_B70A60((__int64)v26);
          else
            v30 = v29();
          if ( v24 != v30 )
            break;
LABEL_112:
          sub_1657880(v4, a3, v6);
          goto LABEL_66;
        }
      }
      else
      {
        v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v28 )
          goto LABEL_114;
      }
      v26 = (_BYTE *)(v28 - 64);
      if ( (*(_BYTE *)(v28 + 11) & 1) == 0 )
        goto LABEL_23;
    }
  }
LABEL_26:
  v331 = 0;
  v334 = 0;
  v335 = 1;
  v333 = &v332;
  v332 = &v332;
  v31 = (void **)&v336;
  do
  {
    *v31 = nullptr;
    v31 += 2;
  }
  while ( v341 != v31 );
  v341[0] = v344;
  ptr = v347;
  v346 = 0x400000000LL;
  v341[1] = &byte_4;
  v342 = 0;
  v343 = 1;
  v344[4] = 0;
  v347[24] = 0;
  v348 = 0;
  v349 = 257;
  v350 = 1;
  v319 = sub_1656EB0(v4, a3, v6, v23, (__int64)&v331);
  v307 = (unsigned int **)*v319;
  v32 = (unsigned int **)(*v319 + 24LL * *((unsigned int *)v319 + 2));
  if ( (unsigned int **)*v319 == v32 )
  {
LABEL_132:
    sub_1657880(v4, a3, v6);
    if ( ptr != v347 )
      free(ptr);
    if ( !v343 )
      free(v341[0]);
    if ( (v335 & 1) == 0 )
      operator delete(v336, 16LL * v337, 8);
    v149 = (void ***)v332;
    if ( v332 != &v332 )
    {
      while ( 1 )
      {
        v150 = (void ***)v149[2];
        v151 = *v149;
        if ( v150 == v149 + 4 )
        {
          operator delete(v149);
          if ( v151 == &v332 )
            goto LABEL_66;
        }
        else
        {
          free(v150);
          operator delete(v149);
          if ( v151 == &v332 )
            goto LABEL_66;
        }
        v149 = (void ***)v151;
      }
    }
    goto LABEL_66;
  }
  v33 = (unsigned int **)(*v319 + 24LL * *((unsigned int *)v319 + 2));
  while ( 1 )
  {
    while ( 1 )
    {
      v32 -= 3;
      v34 = (__int64)v32[1];
      v35 = *(__int64 (**)(void))(*(_QWORD *)v34 + 32LL);
      v36 = (char *)v35 == (char *)sub_A01140 ? sub_B70A60(v34) : v35();
      if ( ((*v32)[3] & 0xC) == 0xC )
        break;
      if ( ((*((_BYTE *)*v32 + 12) >> 2) & 3) > (int)v23 )
      {
        v23 = (*((_BYTE *)*v32 + 12) >> 2) & 3;
        v33 = v32;
      }
LABEL_32:
      if ( !v23 || !(unsigned int)sub_1656AA0(v4, a3, v36, v23, v6, v37) )
        goto LABEL_42;
      if ( v23 == 2 || v307 == v32 )
        goto LABEL_43;
    }
    if ( ((*v32)[3] & 2) == 0 || v23 > 1 )
      goto LABEL_32;
    if ( (unsigned int)sub_1656AA0(v4, a3, v36, 2, v6, v37) )
      break;
LABEL_42:
    *(_BYTE *)(v6 + 56) &= ~1u;
    v33 = nullptr;
    v23 = 0;
    if ( v307 == v32 )
      goto LABEL_43;
  }
  v33 = v32;
LABEL_43:
  v38 = *v319 + 24LL * *((unsigned int *)v319 + 2);
  if ( (unsigned int **)v38 == v33 )
    goto LABEL_132;
  v39 = 5753;
  if ( (*(_BYTE *)v6 & 4) == 0 )
    v39 = (unsigned int)(v38 == (_QWORD)(v33 + 3)) + 5753;
  v40 = *v33;
  sub_168B9F0(v324, v292, **v33, v39, 0);
  v41 = *v40;
  v42 = v40[1];
  if ( v328 )
  {
    v76 = v326;
    if ( v326 )
    {
      v77 = *((unsigned int *)v326 + 106);
      v78 = *((unsigned int *)v326 + 107);
      v79 = v77 + 1;
    }
    else
    {
      v201 = v327;
      v202 = *(_DWORD *)(v327 + 14976);
      if ( v202 )
      {
        v209 = (unsigned int)(v202 - 1);
        *(_DWORD *)(v327 + 14976) = v209;
        v76 = *(unsigned __int8 **)(v201 + 8 * v209 + 14848);
        v210 = *((unsigned int *)v76 + 134);
        *v76 = 0;
        v211 = *((_QWORD *)v76 + 66);
        *((_DWORD *)v76 + 106) = 0;
        v212 = v211 + (v210 << 6);
        if ( v211 == v212 )
        {
          v79 = 1;
          v77 = 0;
        }
        else
        {
          v288 = v6;
          v213 = v212;
          v214 = v76;
          do
          {
            while ( 1 )
            {
              v213 -= 64;
              v215 = *(void **)(v213 + 24);
              if ( v215 == (void *)(v213 + 40) )
                break;
              operator delete(v215);
              if ( v211 == v213 )
                goto LABEL_223;
            }
          }
          while ( v211 != v213 );
LABEL_223:
          v76 = v214;
          v6 = v288;
          v77 = *((unsigned int *)v214 + 106);
          v79 = v77 + 1;
        }
        *((_DWORD *)v76 + 134) = 0;
        v78 = *((unsigned int *)v76 + 107);
      }
      else
      {
        v76 = (unsigned __int8 *)operator new(0x3A0u);
        v77 = 0;
        *v76 = 0;
        *((_QWORD *)v76 + 12) = v76 + 112;
        *((_QWORD *)v76 + 16) = v76 + 144;
        *((_QWORD *)v76 + 20) = v76 + 176;
        *((_QWORD *)v76 + 24) = v76 + 208;
        *((_QWORD *)v76 + 28) = v76 + 240;
        *((_QWORD *)v76 + 32) = v76 + 272;
        *((_QWORD *)v76 + 36) = v76 + 304;
        *((_QWORD *)v76 + 40) = v76 + 336;
        *((_QWORD *)v76 + 44) = v76 + 368;
        *((_QWORD *)v76 + 48) = v76 + 400;
        *((_QWORD *)v76 + 52) = v76 + 432;
        *((_QWORD *)v76 + 13) = 0;
        v76[112] = 0;
        *((_QWORD *)v76 + 17) = 0;
        v76[144] = 0;
        *((_QWORD *)v76 + 21) = 0;
        v76[176] = 0;
        *((_QWORD *)v76 + 25) = 0;
        v76[208] = 0;
        *((_QWORD *)v76 + 29) = 0;
        v76[240] = 0;
        *((_QWORD *)v76 + 33) = 0;
        v76[272] = 0;
        *((_QWORD *)v76 + 37) = 0;
        v76[304] = 0;
        *((_QWORD *)v76 + 41) = 0;
        v76[336] = 0;
        *((_QWORD *)v76 + 45) = 0;
        v76[368] = 0;
        *((_QWORD *)v76 + 49) = 0;
        v76[400] = 0;
        *((_QWORD *)v76 + 53) = 0x800000000LL;
        *((_QWORD *)v76 + 66) = v76 + 544;
        v79 = 1;
        *((_QWORD *)v76 + 67) = 0x600000000LL;
        v78 = 8;
      }
      v326 = v76;
    }
    v322 = __PAIR64__(v42, v41);
    LOBYTE(v323) = 1;
    if ( v79 > v78 )
    {
      v287 = v76;
      sub_2237220(v76 + 416, v76 + 432, v79, 12);
      v76 = v287;
      v77 = *((unsigned int *)v287 + 106);
    }
    v80 = 3 * v77;
  }
  else
  {
    v43 = v330;
    if ( !v330 )
    {
      v44 = *((_BYTE *)v40 + 12);
      if ( (v44 & 0xC) != 0xC )
        goto LABEL_49;
      v45 = 0;
      goto LABEL_51;
    }
    v114 = sub_168B9E0(v324);
    v118 = v325;
    if ( v325 )
    {
      v284 = v114;
      v118 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v325 + 32LL))(v325);
      v114 = v284;
    }
    v321 = v118;
    v119 = sub_1587BC0(v114, &v321, v114, v115, v116, v117);
    v120 = *v119 + 32LL * v329;
    v76 = *(unsigned __int8 **)(v120 + 8);
    if ( v76 )
    {
      v121 = *((unsigned int *)v76 + 106);
      v122 = *((unsigned int *)v76 + 107);
      v123 = v121 + 1;
    }
    else
    {
      v205 = *(_QWORD *)(v120 + 16);
      v206 = *(_DWORD *)(v205 + 14976);
      if ( v206 )
      {
        v268 = (unsigned int)(v206 - 1);
        *(_DWORD *)(v205 + 14976) = v268;
        v76 = *(unsigned __int8 **)(v205 + 8 * v268 + 14848);
        v269 = *((unsigned int *)v76 + 134);
        *v76 = 0;
        v270 = *((_QWORD *)v76 + 66);
        *((_DWORD *)v76 + 106) = 0;
        v271 = v270 + (v269 << 6);
        if ( v270 == v271 )
        {
          v123 = 1;
          v121 = 0;
        }
        else
        {
          v315 = v6;
          v272 = v271;
          v273 = v76;
          do
          {
            while ( 1 )
            {
              v272 -= 64;
              v274 = *(void **)(v272 + 24);
              if ( v274 == (void *)(v272 + 40) )
                break;
              v290 = v120;
              operator delete(v274);
              v120 = v290;
              if ( v270 == v272 )
                goto LABEL_288;
            }
          }
          while ( v270 != v272 );
LABEL_288:
          v76 = v273;
          v6 = v315;
          v121 = *((unsigned int *)v273 + 106);
          v123 = v121 + 1;
        }
        *((_DWORD *)v76 + 134) = 0;
        v122 = *((unsigned int *)v76 + 107);
      }
      else
      {
        v285 = v120;
        v76 = (unsigned __int8 *)operator new(0x3A0u);
        v122 = 8;
        *v76 = 0;
        *((_QWORD *)v76 + 12) = v76 + 112;
        *((_QWORD *)v76 + 16) = v76 + 144;
        *((_QWORD *)v76 + 20) = v76 + 176;
        *((_QWORD *)v76 + 24) = v76 + 208;
        *((_QWORD *)v76 + 28) = v76 + 240;
        *((_QWORD *)v76 + 32) = v76 + 272;
        *((_QWORD *)v76 + 36) = v76 + 304;
        *((_QWORD *)v76 + 40) = v76 + 336;
        *((_QWORD *)v76 + 44) = v76 + 368;
        *((_QWORD *)v76 + 48) = v76 + 400;
        *((_QWORD *)v76 + 52) = v76 + 432;
        *((_QWORD *)v76 + 13) = 0;
        v76[112] = 0;
        *((_QWORD *)v76 + 17) = 0;
        v76[144] = 0;
        *((_QWORD *)v76 + 21) = 0;
        v76[176] = 0;
        *((_QWORD *)v76 + 25) = 0;
        v76[208] = 0;
        *((_QWORD *)v76 + 29) = 0;
        v76[240] = 0;
        *((_QWORD *)v76 + 33) = 0;
        v76[272] = 0;
        *((_QWORD *)v76 + 37) = 0;
        v76[304] = 0;
        *((_QWORD *)v76 + 41) = 0;
        v76[336] = 0;
        *((_QWORD *)v76 + 45) = 0;
        v76[368] = 0;
        *((_QWORD *)v76 + 49) = 0;
        v76[400] = 0;
        *((_QWORD *)v76 + 53) = 0x800000000LL;
        v120 = v285;
        *((_QWORD *)v76 + 66) = v76 + 544;
        v123 = 1;
        *((_QWORD *)v76 + 67) = 0x600000000LL;
        v121 = 0;
      }
      *(_QWORD *)(v120 + 8) = v76;
    }
    v322 = __PAIR64__(v42, v41);
    LOBYTE(v323) = 1;
    if ( v122 < v123 )
    {
      v289 = v76;
      sub_2237220(v76 + 416, v76 + 432, v123, 12);
      v76 = v289;
      v121 = *((unsigned int *)v289 + 106);
    }
    v80 = 3 * v121;
  }
  v45 = 0;
  v81 = *((_QWORD *)v76 + 52) + 4 * v80;
  *(_QWORD *)v81 = v322;
  *(_DWORD *)(v81 + 8) = v323;
  v43 = v328;
  ++*((_DWORD *)v76 + 106);
  v44 = *((_BYTE *)v40 + 12);
  if ( (v44 & 0xC) != 0xC )
LABEL_49:
    v45 = ((v44 >> 2) & 3) == 1;
  if ( v43 )
  {
    v68 = v45;
    v69 = v326;
    if ( !v326 )
    {
      v197 = v327;
      v198 = *(_DWORD *)(v327 + 14976);
      if ( v198 )
      {
        v216 = (unsigned int)(v198 - 1);
        *(_DWORD *)(v327 + 14976) = v216;
        v69 = *(unsigned __int8 **)(v197 + 8 * v216 + 14848);
        v217 = *((unsigned int *)v69 + 134);
        *v69 = 0;
        v218 = *((_QWORD *)v69 + 66);
        *((_DWORD *)v69 + 106) = 0;
        v219 = v218 + (v217 << 6);
        if ( v218 != v219 )
        {
          v220 = v6;
          v221 = v219;
          v222 = v218;
          do
          {
            while ( 1 )
            {
              v221 -= 64;
              v223 = *(void **)(v221 + 24);
              if ( v223 == (void *)(v221 + 40) )
                break;
              operator delete(v223);
              if ( v222 == v221 )
                goto LABEL_231;
            }
          }
          while ( v222 != v221 );
LABEL_231:
          v6 = v220;
        }
        *((_DWORD *)v69 + 134) = 0;
      }
      else
      {
        v69 = (unsigned __int8 *)operator new(0x3A0u);
        *v69 = 0;
        *((_QWORD *)v69 + 12) = v69 + 112;
        *((_QWORD *)v69 + 16) = v69 + 144;
        *((_QWORD *)v69 + 20) = v69 + 176;
        *((_QWORD *)v69 + 24) = v69 + 208;
        *((_QWORD *)v69 + 28) = v69 + 240;
        *((_QWORD *)v69 + 32) = v69 + 272;
        *((_QWORD *)v69 + 36) = v69 + 304;
        *((_QWORD *)v69 + 40) = v69 + 336;
        *((_QWORD *)v69 + 44) = v69 + 368;
        *((_QWORD *)v69 + 48) = v69 + 400;
        *((_QWORD *)v69 + 52) = v69 + 432;
        *((_QWORD *)v69 + 13) = 0;
        v69[112] = 0;
        *((_QWORD *)v69 + 17) = 0;
        v69[144] = 0;
        *((_QWORD *)v69 + 21) = 0;
        v69[176] = 0;
        *((_QWORD *)v69 + 25) = 0;
        v69[208] = 0;
        *((_QWORD *)v69 + 29) = 0;
        v69[240] = 0;
        *((_QWORD *)v69 + 33) = 0;
        v69[272] = 0;
        *((_QWORD *)v69 + 37) = 0;
        v69[304] = 0;
        *((_QWORD *)v69 + 41) = 0;
        v69[336] = 0;
        *((_QWORD *)v69 + 45) = 0;
        v69[368] = 0;
        *((_QWORD *)v69 + 49) = 0;
        v69[400] = 0;
        *((_QWORD *)v69 + 53) = 0x800000000LL;
        *((_QWORD *)v69 + 66) = v69 + 544;
        *((_QWORD *)v69 + 67) = 0x600000000LL;
      }
      v326 = v69;
    }
    v69[*v69 + 1] = 2;
    v70 = v326;
    v71 = *v326;
    *v326 = v71 + 1;
    *(_QWORD *)&v70[8 * v71 + 16] = v68;
  }
  else
  {
LABEL_51:
    if ( !v330 )
      goto LABEL_52;
    v140 = sub_168B9E0(v324);
    v141 = v325;
    if ( v325 )
      v141 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v325 + 32LL))(v325);
    v142 = v140;
    v322 = v141;
    v143 = v45;
    v144 = sub_1587BC0(v142, (__int64 *)&v322, v136, v137, v138, v139);
    v145 = *v144 + 32LL * v329;
    v146 = *(unsigned __int8 **)(v145 + 8);
    if ( !v146 )
    {
      v207 = *(_QWORD *)(v145 + 16);
      v208 = *(_DWORD *)(v207 + 14976);
      if ( v208 )
      {
        v275 = (unsigned int)(v208 - 1);
        *(_DWORD *)(v207 + 14976) = v275;
        v146 = *(unsigned __int8 **)(v207 + 8 * v275 + 14848);
        v276 = *((unsigned int *)v146 + 134);
        *v146 = 0;
        v277 = *((_QWORD *)v146 + 66);
        *((_DWORD *)v146 + 106) = 0;
        v278 = v277 + (v276 << 6);
        if ( v277 != v278 )
        {
          v291 = v6;
          v279 = v278;
          v280 = v145;
          v281 = v277;
          do
          {
            while ( 1 )
            {
              v279 -= 64;
              v282 = *(void **)(v279 + 24);
              if ( v282 == (void *)(v279 + 40) )
                break;
              operator delete(v282);
              if ( v281 == v279 )
                goto LABEL_296;
            }
          }
          while ( v281 != v279 );
LABEL_296:
          v145 = v280;
          v6 = v291;
        }
        *((_DWORD *)v146 + 134) = 0;
      }
      else
      {
        v286 = v145;
        v146 = (unsigned __int8 *)operator new(0x3A0u);
        *v146 = 0;
        *((_QWORD *)v146 + 12) = v146 + 112;
        *((_QWORD *)v146 + 16) = v146 + 144;
        *((_QWORD *)v146 + 20) = v146 + 176;
        *((_QWORD *)v146 + 24) = v146 + 208;
        *((_QWORD *)v146 + 28) = v146 + 240;
        *((_QWORD *)v146 + 32) = v146 + 272;
        *((_QWORD *)v146 + 36) = v146 + 304;
        *((_QWORD *)v146 + 40) = v146 + 336;
        *((_QWORD *)v146 + 44) = v146 + 368;
        *((_QWORD *)v146 + 48) = v146 + 400;
        *((_QWORD *)v146 + 52) = v146 + 432;
        *((_QWORD *)v146 + 13) = 0;
        v146[112] = 0;
        *((_QWORD *)v146 + 17) = 0;
        v146[144] = 0;
        *((_QWORD *)v146 + 21) = 0;
        v146[176] = 0;
        *((_QWORD *)v146 + 25) = 0;
        v146[208] = 0;
        *((_QWORD *)v146 + 29) = 0;
        v146[240] = 0;
        *((_QWORD *)v146 + 33) = 0;
        v146[272] = 0;
        *((_QWORD *)v146 + 37) = 0;
        v146[304] = 0;
        *((_QWORD *)v146 + 41) = 0;
        v146[336] = 0;
        *((_QWORD *)v146 + 45) = 0;
        v146[368] = 0;
        *((_QWORD *)v146 + 49) = 0;
        v146[400] = 0;
        *((_QWORD *)v146 + 53) = 0x800000000LL;
        v145 = v286;
        *((_QWORD *)v146 + 66) = v146 + 544;
        *((_QWORD *)v146 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v145 + 8) = v146;
    }
    v146[*v146 + 1] = 2;
    v147 = *(_BYTE **)(v145 + 8);
    v148 = (unsigned __int8)*v147;
    *v147 = v148 + 1;
    *(_QWORD *)&v147[8 * v148 + 16] = v143;
  }
  v72 = ((*((_BYTE *)v40 + 12) ^ 0xC) & 0xC) == 0;
  if ( v328 )
  {
    v73 = v326;
    if ( !v326 )
    {
      v199 = v327;
      v200 = *(_DWORD *)(v327 + 14976);
      if ( v200 )
      {
        v224 = (unsigned int)(v200 - 1);
        *(_DWORD *)(v327 + 14976) = v224;
        v73 = *(unsigned __int8 **)(v199 + 8 * v224 + 14848);
        v225 = *((unsigned int *)v73 + 134);
        *v73 = 0;
        v226 = *((_QWORD *)v73 + 66);
        *((_DWORD *)v73 + 106) = 0;
        v227 = v226 + (v225 << 6);
        if ( v226 != v227 )
        {
          v228 = v6;
          v229 = v226;
          do
          {
            while ( 1 )
            {
              v227 -= 64;
              v230 = *(void **)(v227 + 24);
              if ( v230 == (void *)(v227 + 40) )
                break;
              operator delete(v230);
              if ( v229 == v227 )
                goto LABEL_239;
            }
          }
          while ( v229 != v227 );
LABEL_239:
          v6 = v228;
        }
        *((_DWORD *)v73 + 134) = 0;
      }
      else
      {
        v73 = (unsigned __int8 *)operator new(0x3A0u);
        *v73 = 0;
        *((_QWORD *)v73 + 12) = v73 + 112;
        *((_QWORD *)v73 + 16) = v73 + 144;
        *((_QWORD *)v73 + 20) = v73 + 176;
        *((_QWORD *)v73 + 24) = v73 + 208;
        *((_QWORD *)v73 + 28) = v73 + 240;
        *((_QWORD *)v73 + 32) = v73 + 272;
        *((_QWORD *)v73 + 36) = v73 + 304;
        *((_QWORD *)v73 + 40) = v73 + 336;
        *((_QWORD *)v73 + 44) = v73 + 368;
        *((_QWORD *)v73 + 48) = v73 + 400;
        *((_QWORD *)v73 + 52) = v73 + 432;
        *((_QWORD *)v73 + 13) = 0;
        v73[112] = 0;
        *((_QWORD *)v73 + 17) = 0;
        v73[144] = 0;
        *((_QWORD *)v73 + 21) = 0;
        v73[176] = 0;
        *((_QWORD *)v73 + 25) = 0;
        v73[208] = 0;
        *((_QWORD *)v73 + 29) = 0;
        v73[240] = 0;
        *((_QWORD *)v73 + 33) = 0;
        v73[272] = 0;
        *((_QWORD *)v73 + 37) = 0;
        v73[304] = 0;
        *((_QWORD *)v73 + 41) = 0;
        v73[336] = 0;
        *((_QWORD *)v73 + 45) = 0;
        v73[368] = 0;
        *((_QWORD *)v73 + 49) = 0;
        v73[400] = 0;
        *((_QWORD *)v73 + 53) = 0x800000000LL;
        *((_QWORD *)v73 + 66) = v73 + 544;
        *((_QWORD *)v73 + 67) = 0x600000000LL;
      }
      v326 = v73;
    }
    v73[*v73 + 1] = 2;
    v74 = v326;
    v75 = *v326;
    *v326 = v75 + 1;
    *(_QWORD *)&v74[8 * v75 + 16] = v72;
  }
  else if ( v330 )
  {
    v128 = sub_168B9E0(v324);
    v129 = v325;
    if ( v325 )
      v129 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v325 + 32LL))(v325);
    v322 = v129;
    v130 = sub_1587BC0(v128, (__int64 *)&v322, v124, v125, v126, v127);
    v131 = v72;
    v132 = *v130 + 32LL * v329;
    v133 = *(unsigned __int8 **)(v132 + 8);
    if ( !v133 )
    {
      v203 = *(_QWORD *)(v132 + 16);
      v204 = *(_DWORD *)(v203 + 14976);
      if ( v204 )
      {
        v260 = (unsigned int)(v204 - 1);
        *(_DWORD *)(v203 + 14976) = v260;
        v133 = *(unsigned __int8 **)(v203 + 8 * v260 + 14848);
        v261 = *((unsigned int *)v133 + 134);
        *v133 = 0;
        v262 = *((_QWORD *)v133 + 66);
        *((_DWORD *)v133 + 106) = 0;
        v263 = v262 + (v261 << 6);
        if ( v262 != v263 )
        {
          v264 = v6;
          v265 = v262;
          v266 = v131;
          do
          {
            while ( 1 )
            {
              v263 -= 64;
              v267 = *(void **)(v263 + 24);
              if ( v267 == (void *)(v263 + 40) )
                break;
              operator delete(v267);
              if ( v265 == v263 )
                goto LABEL_280;
            }
          }
          while ( v265 != v263 );
LABEL_280:
          v131 = v266;
          v6 = v264;
        }
        *((_DWORD *)v133 + 134) = 0;
      }
      else
      {
        v133 = (unsigned __int8 *)operator new(0x3A0u);
        *v133 = 0;
        *((_QWORD *)v133 + 12) = v133 + 112;
        *((_QWORD *)v133 + 16) = v133 + 144;
        *((_QWORD *)v133 + 20) = v133 + 176;
        *((_QWORD *)v133 + 24) = v133 + 208;
        *((_QWORD *)v133 + 28) = v133 + 240;
        *((_QWORD *)v133 + 32) = v133 + 272;
        *((_QWORD *)v133 + 36) = v133 + 304;
        *((_QWORD *)v133 + 40) = v133 + 336;
        *((_QWORD *)v133 + 44) = v133 + 368;
        *((_QWORD *)v133 + 48) = v133 + 400;
        *((_QWORD *)v133 + 52) = v133 + 432;
        *((_QWORD *)v133 + 13) = 0;
        v133[112] = 0;
        *((_QWORD *)v133 + 17) = 0;
        v133[144] = 0;
        *((_QWORD *)v133 + 21) = 0;
        v133[176] = 0;
        *((_QWORD *)v133 + 25) = 0;
        v133[208] = 0;
        *((_QWORD *)v133 + 29) = 0;
        v133[240] = 0;
        *((_QWORD *)v133 + 33) = 0;
        v133[272] = 0;
        *((_QWORD *)v133 + 37) = 0;
        v133[304] = 0;
        *((_QWORD *)v133 + 41) = 0;
        v133[336] = 0;
        *((_QWORD *)v133 + 45) = 0;
        v133[368] = 0;
        *((_QWORD *)v133 + 49) = 0;
        v133[400] = 0;
        *((_QWORD *)v133 + 53) = 0x800000000LL;
        v131 = v72;
        *((_QWORD *)v133 + 66) = v133 + 544;
        *((_QWORD *)v133 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v132 + 8) = v133;
    }
    v133[*v133 + 1] = 2;
    v134 = *(_BYTE **)(v132 + 8);
    v135 = (unsigned __int8)*v134;
    *v134 = v135 + 1;
    *(_QWORD *)&v134[8 * v135 + 16] = v131;
  }
LABEL_52:
  sub_15F7200(v324);
  if ( (*(_BYTE *)v6 & 4) != 0 )
  {
    sub_168B9F0(v324, v292, *(unsigned int *)(*(_QWORD *)(v6 + 8) + 24LL), 6080, 0);
    sub_15F7200(v324);
  }
  if ( ptr != v347 )
    free(ptr);
  if ( !v343 )
    free(v341[0]);
  if ( (v335 & 1) == 0 )
    operator delete(v336, 16LL * v337, 8);
  v46 = (void ***)v332;
  if ( v332 != &v332 )
  {
    while ( 1 )
    {
      v47 = (void ***)v46[2];
      v48 = *v46;
      if ( v47 == v46 + 4 )
      {
        operator delete(v46);
        if ( v48 == &v332 )
          break;
      }
      else
      {
        free(v47);
        operator delete(v46);
        if ( v48 == &v332 )
          break;
      }
      v46 = (void ***)v48;
    }
  }
LABEL_66:
  result = *(_BYTE *)(v6 + 56) & 0xFE;
  LOBYTE(result) = v293 | *(_BYTE *)(v6 + 56) & 0xFE;
  *(_BYTE *)(v6 + 56) = result;
  return result;
}
