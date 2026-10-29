__int64 __fastcall sub_88E980(__int64 *a1, __int64 a2, unsigned __int16 *a3, unsigned __int16 *a4)
{
  __int64 v6; // rbp
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // r14d
  __int64 v16; // rax
  unsigned int *v17; // rax
  __int64 *v18; // r15
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  char v24; // al
  unsigned __int8 v25; // dl
  unsigned int v26; // eax
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned __int64 v31; // r13
  __int64 v32; // rdi
  unsigned int v33; // r12d
  int v34; // eax
  char v35; // al
  unsigned __int16 *v36; // rcx
  char v37; // dl
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rdx
  char v41; // al
  __int64 v42; // rdx
  unsigned int v43; // eax
  char v44; // al
  unsigned __int64 v45; // rdi
  int v46; // eax
  unsigned __int64 v47; // rax
  int v48; // eax
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdi
  unsigned int v53; // r14d
  int v54; // eax
  char v55; // al
  __int64 v56; // r12
  unsigned __int64 v57; // rcx
  int v58; // r13d
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned int v61; // eax
  void *v62; // rdi
  __int64 v63; // r14
  __int64 v64; // rax
  unsigned int v65; // eax
  char v66; // al
  __int64 v67; // r14
  unsigned int v68; // r12d
  int v69; // eax
  __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  int v72; // r8d
  __int64 v73; // rdi
  unsigned int v74; // r13d
  int v75; // eax
  unsigned __int8 v76; // al
  unsigned __int8 v77; // dl
  char v78; // al
  __int64 v79; // rdi
  unsigned int v80; // r12d
  int v81; // eax
  __int64 v82; // rdx
  char v83; // al
  __int64 v84; // rdi
  int v85; // eax
  unsigned __int16 *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // r12
  _QWORD *v89; // r15
  unsigned __int16 *v90; // r14
  unsigned int v91; // eax
  __int64 v92; // rax
  unsigned int *v93; // rax
  __int64 *v94; // r15
  __int64 v95; // rcx
  _BYTE *v96; // rax
  char v97; // al
  unsigned __int64 v98; // r12
  __int64 v99; // rbx
  unsigned int v100; // r13d
  int v101; // eax
  unsigned __int64 v102; // rcx
  int v103; // r14d
  __int64 v104; // rax
  __int64 v105; // rdi
  unsigned int v106; // r13d
  int v107; // eax
  __int64 v108; // rdx
  unsigned int v109; // eax
  unsigned __int16 *v110; // rcx
  char v111; // al
  __int64 v112; // r12
  unsigned int v113; // r14d
  int v114; // eax
  unsigned __int64 v115; // rcx
  int v116; // r13d
  __int64 v117; // rax
  unsigned __int64 v118; // rax
  unsigned __int16 *v119; // rdx
  bool v120; // al
  __int64 v121; // rcx
  char v122; // si
  __int64 v123; // r14
  __m128i v124; // xmm0
  int v125; // eax
  __m128i si128; // xmm1
  __m128i v127; // xmm0
  __m128i v128; // xmm0
  int v129; // eax
  unsigned __int16 *v130; // r10
  unsigned __int16 *v131; // rcx
  int *v132; // rdi
  __int64 v133; // rax
  int *v134; // rsi
  int *v135; // rdx
  int *v136; // rax
  int *v137; // rdx
  __int64 v138; // rax
  unsigned __int64 v139; // r13
  __int64 v140; // rax
  __int64 *v141; // r12
  __int64 *v142; // rbx
  unsigned __int16 *v143; // r12
  __int64 v144; // rbp
  __int64 v145; // r13
  __int64 *v146; // rdx
  __int64 *v147; // rdi
  __int64 v148; // rdx
  unsigned __int16 *v149; // r10
  unsigned __int16 *v150; // rcx
  unsigned __int16 *v151; // r12
  unsigned __int16 *v152; // rbx
  __int64 v153; // rax
  unsigned __int64 v154; // r15
  void **v155; // r13
  void **v156; // rbx
  void **v157; // r12
  void **v158; // rbx
  void *v159; // r12
  void *v160; // rbx
  void **v161; // r12
  void **v162; // rbx
  void **v163; // r12
  void **v164; // rbx
  void **v165; // r12
  void **v166; // rbx
  void **v167; // r12
  void **v168; // rbx
  void **v169; // r12
  void **v170; // rbx
  void **v171; // r12
  void **v172; // rbx
  void **v173; // r12
  void **v174; // rbx
  void **v175; // r12
  void **v176; // rbx
  char v177; // dl
  __int64 v178; // rdi
  unsigned __int64 v179; // r12
  unsigned int v180; // r13d
  int v181; // eax
  const __m128i *v182; // rdx
  __int64 v183; // rdi
  unsigned __int8 v184; // al
  __int64 v185; // r12
  unsigned int v186; // r13d
  unsigned __int64 v187; // rcx
  int v188; // r14d
  __int64 v189; // rax
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  unsigned __int64 v193; // rax
  __int64 v194; // rdi
  __int64 v195; // rbx
  __int64 v196; // r14
  __int64 *v197; // rsi
  unsigned int v198; // r15d
  char v199; // al
  bool v200; // al
  unsigned int v201; // eax
  __int64 *v202; // rbx
  void *v203; // rax
  unsigned __int8 v204; // cl
  char v205; // al
  bool v206; // zf
  __int64 v207; // rdx
  unsigned __int8 v208; // al
  char v209; // al
  char v210; // al
  __int64 v211; // rbx
  unsigned int v212; // r12d
  __int64 v213; // rdx
  unsigned __int64 v214; // rcx
  int v215; // r13d
  __int64 v216; // rcx
  __int64 v217; // rbx
  __int64 v218; // rax
  unsigned int v219; // eax
  unsigned __int64 v220; // rbx
  __int64 v221; // rdi
  unsigned int v222; // r13d
  int v223; // eax
  char v224; // al
  __int64 v225; // rdx
  unsigned int v226; // eax
  __int64 v227; // r12
  __int64 v228; // rax
  unsigned int v229; // r13d
  __int64 v230; // r14
  unsigned __int16 *v231; // r15
  __int64 *v232; // rbx
  __int64 v233; // rcx
  unsigned int v234; // eax
  unsigned int v235; // eax
  unsigned __int8 v236; // al
  char v237; // al
  char v238; // al
  __int64 v239; // rax
  unsigned int v240; // ebx
  int v241; // ecx
  char v242; // al
  char v243; // al
  int v244; // eax
  __int64 v245; // rax
  int v246; // esi
  __int64 v247; // rax
  unsigned int v248; // r13d
  int v249; // ecx
  unsigned __int64 v250; // rsi
  unsigned __int16 *v251; // [rsp+0h] [rbp-4F8h]
  unsigned __int16 *v252; // [rsp+0h] [rbp-4F8h]
  unsigned int v253; // [rsp+0h] [rbp-4F8h]
  unsigned __int16 *v254; // [rsp+0h] [rbp-4F8h]
  _WORD *v255; // [rsp+0h] [rbp-4F8h]
  __int64 *v256; // [rsp+0h] [rbp-4F8h]
  int v257; // [rsp+8h] [rbp-4F0h]
  __int64 *v258; // [rsp+8h] [rbp-4F0h]
  unsigned __int16 *v259; // [rsp+8h] [rbp-4F0h]
  unsigned __int16 *v260; // [rsp+8h] [rbp-4F0h]
  __int64 *v261; // [rsp+8h] [rbp-4F0h]
  __int64 v262; // [rsp+8h] [rbp-4F0h]
  unsigned __int16 *v263; // [rsp+10h] [rbp-4E8h]
  __int64 *v264; // [rsp+10h] [rbp-4E8h]
  unsigned __int16 *v265; // [rsp+10h] [rbp-4E8h]
  unsigned int v266; // [rsp+10h] [rbp-4E8h]
  __int64 v267; // [rsp+18h] [rbp-4E0h]
  char v268; // [rsp+27h] [rbp-4D1h]
  __int64 v269; // [rsp+48h] [rbp-4B0h]
  unsigned __int16 *v270; // [rsp+50h] [rbp-4A8h]
  __int64 *v271; // [rsp+50h] [rbp-4A8h]
  unsigned __int16 *v272; // [rsp+58h] [rbp-4A0h]
  __m128i v273; // [rsp+60h] [rbp-498h]
  __m128i v274; // [rsp+70h] [rbp-488h]
  __m128i v275; // [rsp+80h] [rbp-478h]
  __m128i v276; // [rsp+90h] [rbp-468h]
  __m128i v277; // [rsp+A0h] [rbp-458h]
  __m128i v278; // [rsp+B0h] [rbp-448h]
  __m128i v279; // [rsp+C0h] [rbp-438h]
  __m128i v280; // [rsp+D0h] [rbp-428h]
  __m128i v281; // [rsp+E0h] [rbp-418h]
  __m128i v282; // [rsp+F0h] [rbp-408h]
  __m128i v283; // [rsp+100h] [rbp-3F8h]
  __m128i v284[2]; // [rsp+110h] [rbp-3E8h] BYREF
  char v285; // [rsp+13Fh] [rbp-3B9h] BYREF
  void *v286; // [rsp+140h] [rbp-3B8h] BYREF
  unsigned int v287; // [rsp+148h] [rbp-3B0h]
  char v288; // [rsp+14Ch] [rbp-3ACh]
  void *v289; // [rsp+150h] [rbp-3A8h] BYREF
  unsigned int v290; // [rsp+158h] [rbp-3A0h]
  char v291; // [rsp+15Ch] [rbp-39Ch]
  void *v292[2]; // [rsp+160h] [rbp-398h] BYREF
  __m128i v293; // [rsp+170h] [rbp-388h]
  __m128i v294; // [rsp+180h] [rbp-378h]
  __m128i v295; // [rsp+190h] [rbp-368h]
  __m128i v296; // [rsp+1A0h] [rbp-358h]
  __m128i v297; // [rsp+1B0h] [rbp-348h]
  __m128i v298; // [rsp+1C0h] [rbp-338h]
  __m128i v299; // [rsp+1D0h] [rbp-328h]
  __m128i v300; // [rsp+1E0h] [rbp-318h]
  __m128i v301; // [rsp+1F0h] [rbp-308h]
  __m128i v302; // [rsp+200h] [rbp-2F8h]
  __m128i v303[2]; // [rsp+210h] [rbp-2E8h]
  int v304; // [rsp+230h] [rbp-2C8h]
  __m128i v305; // [rsp+238h] [rbp-2C0h]
  char v306; // [rsp+248h] [rbp-2B0h]
  void *v307; // [rsp+250h] [rbp-2A8h] BYREF
  void **v308; // [rsp+258h] [rbp-2A0h]
  __int64 v309; // [rsp+260h] [rbp-298h]
  void *v310; // [rsp+268h] [rbp-290h] BYREF
  void **v311; // [rsp+270h] [rbp-288h]
  __int64 v312; // [rsp+278h] [rbp-280h]
  void *v313; // [rsp+280h] [rbp-278h] BYREF
  void **v314; // [rsp+288h] [rbp-270h]
  __int64 v315; // [rsp+290h] [rbp-268h]
  void *v316; // [rsp+298h] [rbp-260h] BYREF
  void **v317; // [rsp+2A0h] [rbp-258h]
  __int64 v318; // [rsp+2A8h] [rbp-250h]
  void *v319; // [rsp+2B0h] [rbp-248h] BYREF
  void **v320; // [rsp+2B8h] [rbp-240h]
  __int64 v321; // [rsp+2C0h] [rbp-238h]
  __m128i v322; // [rsp+2C8h] [rbp-230h]
  int v323; // [rsp+2D8h] [rbp-220h]
  int v324; // [rsp+2DCh] [rbp-21Ch]
  char *v325; // [rsp+2E0h] [rbp-218h] BYREF
  char v326; // [rsp+2F0h] [rbp-208h] BYREF
  char *v327; // [rsp+300h] [rbp-1F8h] BYREF
  char v328; // [rsp+310h] [rbp-1E8h] BYREF
  char *v329; // [rsp+320h] [rbp-1D8h] BYREF
  char v330; // [rsp+330h] [rbp-1C8h] BYREF
  char *v331; // [rsp+340h] [rbp-1B8h] BYREF
  char v332; // [rsp+350h] [rbp-1A8h] BYREF
  void *v333; // [rsp+360h] [rbp-198h] BYREF
  void **v334; // [rsp+368h] [rbp-190h]
  __int64 v335; // [rsp+370h] [rbp-188h]
  void *v336; // [rsp+378h] [rbp-180h] BYREF
  void **v337; // [rsp+380h] [rbp-178h]
  __int64 v338; // [rsp+388h] [rbp-170h]
  char v339; // [rsp+390h] [rbp-168h]
  void *v340; // [rsp+398h] [rbp-160h] BYREF
  void **v341; // [rsp+3A0h] [rbp-158h]
  __int64 v342; // [rsp+3A8h] [rbp-150h]
  int v343; // [rsp+3B8h] [rbp-140h] BYREF
  void *v344; // [rsp+3C0h] [rbp-138h]
  int *v345; // [rsp+3C8h] [rbp-130h]
  int *v346; // [rsp+3D0h] [rbp-128h]
  __int64 v347; // [rsp+3D8h] [rbp-120h]
  void *v348[2]; // [rsp+3E0h] [rbp-118h]
  char *v349; // [rsp+3F0h] [rbp-108h]
  char *v350; // [rsp+3F8h] [rbp-100h] BYREF
  char v351; // [rsp+408h] [rbp-F0h] BYREF
  char *v352; // [rsp+418h] [rbp-E0h] BYREF
  char v353; // [rsp+428h] [rbp-D0h] BYREF
  __int64 v354; // [rsp+438h] [rbp-C0h]
  char v355; // [rsp+440h] [rbp-B8h]
  __int64 v356; // [rsp+444h] [rbp-B4h]
  void *v357; // [rsp+450h] [rbp-A8h] BYREF
  void **v358; // [rsp+458h] [rbp-A0h]
  __int64 v359; // [rsp+460h] [rbp-98h]
  char *v360; // [rsp+468h] [rbp-90h] BYREF
  char v361; // [rsp+478h] [rbp-80h] BYREF
  __int16 v362; // [rsp+488h] [rbp-70h]
  _BYTE *v363; // [rsp+490h] [rbp-68h] BYREF
  _BYTE v364[88]; // [rsp+4A0h] [rbp-58h] BYREF

  v6 = a2;
  v8 = *(_DWORD *)(a2 + 48);
  if ( !v8 )
  {
LABEL_20:
    v13 = sub_AC6DA0(a3);
    sub_A2E1A0(a2, v13, 2282, 0);
    return 0;
  }
  while ( 2 )
  {
    *(_DWORD *)(a2 + 48) = --v8;
    v9 = *a3;
    LOWORD(v9) = v9 & 0x1FF;
    if ( !a4 )
      goto LABEL_11;
    if ( (unsigned __int16)v9 > 0xF7u )
      return 5;
    if ( (unsigned __int16)v9 <= 0xEEu )
    {
      if ( (_WORD)v9 == 131 )
        goto LABEL_177;
      if ( (unsigned __int16)v9 > 0x83u )
      {
        if ( (((_WORD)v9 + 379) & 0x1FFu) > 1 )
          return 5;
        if ( a3 == a4 )
          a4 = nullptr;
        goto LABEL_28;
      }
      if ( (_WORD)v9 != 1 )
      {
        if ( (_WORD)v9 != 2 )
          return 5;
        goto LABEL_18;
      }
      v11 = sub_895320(a1, a2, *(_QWORD *)&a3[4 * ((*((_BYTE *)a3 + 1) & 2) != 0) + 12], a4);
      if ( v11 != 3 )
        return v11;
      goto LABEL_10;
    }
    v10 = (unsigned int)(v9 + 273);
    LOWORD(v10) = (v9 + 273) & 0x1FF;
    switch ( v10 )
    {
      case 0LL:
        v32 = *(_QWORD *)(a2 + 32);
        v251 = a4;
        v33 = *(_DWORD *)(a2 + 320);
        v292[0] = (void *)a2;
        v34 = *(_DWORD *)(v32 + 208);
        v32 += 184;
        LODWORD(v292[1]) = v33;
        *(_DWORD *)(v32 + 24) = v34 + 1;
        sub_847EC0(v32, v34 + 1);
        v35 = *((_BYTE *)a3 + 1);
        v36 = v251;
        v37 = v35 & 0x40;
        if ( (v35 & 0x40) == 0 )
          goto LABEL_61;
        v38 = *((_QWORD *)a3 + 2);
        if ( v38 )
        {
          v14 = sub_88E980(a1, a2, v38, v251);
          if ( v14 != 5 )
            goto LABEL_337;
          v35 = *((_BYTE *)a3 + 1);
          v36 = v251;
          v37 = v35 & 0x40;
        }
        else
        {
          v37 = 64;
        }
LABEL_61:
        v252 = v36;
        v39 = sub_88E980(a1, a2, *(_QWORD *)&a3[4 * (((v35 & 0x20) != 0) - ((v37 == 0) - 2)) + 8], v36);
        v14 = v39;
        if ( !v39 )
          goto LABEL_68;
        v40 = v33;
        if ( v39 != 5 )
          goto LABEL_128;
        v41 = *((_BYTE *)a3 + 1);
        if ( (v41 & 0x10) != 0 )
        {
          v42 = *(_QWORD *)&a3[4 * ((v41 & 0x20) != 0) + 16 + 4 * ((v41 & 0x40) != 0)];
          if ( v42 )
          {
            v43 = sub_88E980(a1, a2, v42, v252);
            if ( !v43 )
              goto LABEL_68;
            if ( v43 != 5 )
            {
              v14 = v43;
              v44 = sub_8931F0(a2, 1, v33);
              LODWORD(v292[1]) = -1;
              if ( !v44 )
                goto LABEL_68;
            }
          }
        }
        goto LABEL_337;
      case 2LL:
        v26 = *(_DWORD *)(a2 + 320);
        v27 = *(_QWORD *)(a2 + 32);
        v289 = (void *)a2;
        v290 = v26;
        v28 = *(_DWORD *)(v27 + 208);
        v27 += 184;
        *(_DWORD *)(v27 + 24) = v28 + 1;
        sub_847EC0(v27, v28 + 1);
        v29 = *((_QWORD *)a3 + 1);
        if ( v29 && (v30 = sub_88E980(a1, a2, v29, a4), v30 != 5)
          || (v30 = sub_895320(a1, a2, *((_QWORD *)a3 + 5), a4), v30 != 3) )
        {
          v14 = v30;
LABEL_56:
          sub_893480(&v289);
          return v14;
        }
        v31 = *((_QWORD *)a3 + 4);
        if ( v31 )
        {
          if ( (*(_BYTE *)(v31 + 2) & 2) != 0 )
          {
            **(_BYTE **)(a2 + 24) = 1;
            if ( *(_DWORD *)(a2 + 964) <= 2u && !*(_BYTE *)(a2 + 962) && !*(_BYTE *)(a2 + 963) )
              goto LABEL_55;
            goto LABEL_93;
          }
          v52 = *(_QWORD *)(a2 + 32);
          v53 = *(_DWORD *)(a2 + 320);
          v292[0] = (void *)a2;
          v54 = *(_DWORD *)(v52 + 208);
          v52 += 184;
          LODWORD(v292[1]) = v53;
          *(_DWORD *)(v52 + 24) = v54 + 1;
          sub_847EC0(v52, v54 + 1);
          if ( !(unsigned __int8)sub_857160(a2, v31) || (v55 = sub_8941C0(a2, 1, v53), LODWORD(v292[1]) = -1, !v55) )
          {
            sub_894600(v292);
LABEL_55:
            v14 = 0;
            goto LABEL_56;
          }
          sub_894600(v292);
        }
LABEL_93:
        sub_893480(&v289);
LABEL_10:
        v9 = *a3;
        LOWORD(v9) = v9 & 0x1FF;
LABEL_11:
        if ( (unsigned __int16)v9 > 0xFCu )
          goto LABEL_319;
        if ( (unsigned __int16)v9 > 0xEBu )
        {
LABEL_13:
          v12 = (unsigned int)(v9 + 276);
          LOWORD(v12) = (v9 + 276) & 0x1FF;
          switch ( v12 )
          {
            case 0LL:
              return 2;
            case 3LL:
              v73 = *(_QWORD *)(a2 + 32);
              v74 = *(_DWORD *)(a2 + 320);
              v292[0] = (void *)a2;
              v75 = *(_DWORD *)(v73 + 208);
              v73 += 184;
              LODWORD(v292[1]) = v74;
              *(_DWORD *)(v73 + 24) = v75 + 1;
              sub_847EC0(v73, v75 + 1);
              v76 = *((_BYTE *)a3 + 1);
              v77 = v76;
              if ( (v76 & 0x40) == 0 || !*((_QWORD *)a3 + 2) )
                goto LABEL_322;
              v14 = sub_88E980(a1, a2, *((_QWORD *)a3 + 2), 0);
              if ( v14 != 2 )
                goto LABEL_126;
              v76 = *((_BYTE *)a3 + 1);
              v77 = v76;
LABEL_322:
              v204 = (v76 >> 1) & 7;
              if ( (unsigned int)v204 - 2 > 1 )
              {
                v227 = *(_QWORD *)&a3[4 * ((v76 & 0x40) != 0) + 8 + 4 * ((v76 & 0x20) != 0)];
                v228 = sub_ACA5A0(a3);
                if ( !(unsigned __int8)sub_894630(a2, v228, v227, &v289) )
                  goto LABEL_68;
                v205 = (char)v289;
                v77 = *((_BYTE *)a3 + 1);
              }
              else
              {
                v205 = v204 == 2;
                v206 = *(_BYTE *)(a2 + 8) == 0;
                LOBYTE(v289) = v204 == 2;
                if ( v206 )
                {
                  v205 = v204 != 2;
                  LOBYTE(v289) = v204 != 2;
                }
              }
              if ( v205 )
              {
                v207 = *(_QWORD *)&a3[4 * ((v77 & 0x40) != 0) + 12 + 4 * ((v77 & 0x20) != 0)];
              }
              else
              {
                if ( (v77 & 0x10) == 0 )
                  goto LABEL_329;
                v207 = *(_QWORD *)&a3[4 * ((v77 & 0x40) != 0) + 16 + 4 * ((v77 & 0x20) != 0)];
              }
              if ( !v207 )
                goto LABEL_329;
              v14 = sub_88E980(a1, a2, v207, 0);
              if ( v14 == 2 )
                goto LABEL_329;
LABEL_126:
              if ( !v14 )
                goto LABEL_68;
              goto LABEL_127;
            case 5LL:
              v105 = *(_QWORD *)(a2 + 32);
              v106 = *(_DWORD *)(a2 + 320);
              v286 = (void *)a2;
              v107 = *(_DWORD *)(v105 + 208);
              v105 += 184;
              v287 = v106;
              *(_DWORD *)(v105 + 24) = v107 + 1;
              sub_847EC0(v105, v107 + 1);
              v108 = *((_QWORD *)a3 + 1);
              if ( !v108 || (v109 = sub_88E980(a1, a2, v108, 0), v14 = v109, v109 == 2) )
              {
                v266 = v106;
                v256 = a1;
                while ( 1 )
                {
                  v211 = *(_QWORD *)(a2 + 32);
                  v212 = *(_DWORD *)(a2 + 320);
                  v289 = (void *)a2;
                  v290 = v212;
                  v213 = *(unsigned int *)(v211 + 192);
                  v214 = *(unsigned int *)(v211 + 196);
                  v215 = *(_DWORD *)(v211 + 208) + 1;
                  *(_DWORD *)(v211 + 208) = v215;
                  if ( v214 < v213 + 1 )
                  {
                    sub_25D6060(v211 + 184, v211 + 200, v213 + 1, 4);
                    v213 = *(unsigned int *)(v211 + 192);
                  }
                  v216 = *(_QWORD *)(v211 + 184);
                  v285 = 1;
                  *(_DWORD *)(v216 + 4 * v213) = v215;
                  ++*(_DWORD *)(v211 + 192);
                  v217 = *((_QWORD *)a3 + 3);
                  if ( v217 )
                  {
                    v218 = sub_ACACD0(a3);
                    if ( !(unsigned __int8)sub_894630(a2, v218, v217, &v285) )
                      goto LABEL_386;
                    if ( !v285 )
                      break;
                  }
                  v219 = sub_895320(v256, a2, *((_QWORD *)a3 + 5), 0);
                  if ( v219 != 3 )
                  {
                    v14 = v219;
                    if ( !v219
                      || (v237 = sub_8931F0(a2, 1, v212), v290 = -1, !v237)
                      || (v238 = sub_8931F0(a2, 1, v266), v287 = -1, !v238) )
                    {
LABEL_386:
                      v14 = 0;
                    }
                    sub_893480(&v289);
                    goto LABEL_163;
                  }
                  v220 = *((_QWORD *)a3 + 4);
                  if ( v220 )
                  {
                    if ( (*(_BYTE *)(v220 + 2) & 2) != 0 )
                    {
                      **(_BYTE **)(a2 + 24) = 1;
                      if ( *(_DWORD *)(a2 + 964) <= 2u && !*(_BYTE *)(a2 + 962) && !*(_BYTE *)(a2 + 963) )
                        goto LABEL_386;
                    }
                    else
                    {
                      v221 = *(_QWORD *)(a2 + 32);
                      v222 = *(_DWORD *)(a2 + 320);
                      v292[0] = (void *)a2;
                      v223 = *(_DWORD *)(v221 + 208);
                      v221 += 184;
                      LODWORD(v292[1]) = v222;
                      *(_DWORD *)(v221 + 24) = v223 + 1;
                      sub_847EC0(v221, v223 + 1);
                      if ( !(unsigned __int8)sub_857160(a2, v220)
                        || (v224 = sub_8941C0(a2, 1, v222), LODWORD(v292[1]) = -1, !v224) )
                      {
                        sub_894600(v292);
                        goto LABEL_386;
                      }
                      sub_894600(v292);
                    }
                  }
                  v210 = sub_8931F0(a2, 1, v212);
                  v290 = -1;
                  if ( !v210 )
                    goto LABEL_386;
                  sub_893480(&v289);
                }
                sub_893480(&v289);
                v236 = sub_8931F0(a2, 1, v266);
                v287 = -1;
                v14 = 2 * v236;
              }
              else if ( !v109 || (v287 = -1, !(unsigned __int8)sub_8931F0(a2, 1, v106)) )
              {
                v14 = 0;
              }
LABEL_163:
              sub_893480(&v286);
              return v14;
            case 6LL:
              v110 = a4;
              while ( 2 )
              {
                v11 = sub_895320(a1, a2, *((_QWORD *)a3 + 1), v110);
                if ( v11 != 3 )
                  return v11;
                if ( (**((_DWORD **)a3 + 2) & 0x20000) != 0 )
                {
                  sub_820430(a2);
                  return 0;
                }
                v112 = *(_QWORD *)(a2 + 32);
                v113 = *(_DWORD *)(a2 + 320);
                v292[0] = (void *)a2;
                v114 = *(_DWORD *)(v112 + 208);
                LODWORD(v292[1]) = v113;
                v115 = *(unsigned int *)(v112 + 196);
                v116 = v114 + 1;
                v117 = *(unsigned int *)(v112 + 192);
                *(_DWORD *)(v112 + 208) = v116;
                if ( v115 < v117 + 1 )
                {
                  sub_25D6060(v112 + 184, v112 + 200, v117 + 1, 4);
                  v117 = *(unsigned int *)(v112 + 192);
                }
                *(_DWORD *)(*(_QWORD *)(v112 + 184) + 4 * v117) = v116;
                ++*(_DWORD *)(v112 + 192);
                if ( (unsigned __int8)sub_8571E0(*((_QWORD *)a3 + 2), &v289, a2) )
                {
                  v111 = sub_8941C0(a2, 1, v113);
                  LODWORD(v292[1]) = -1;
                  if ( v111 )
                  {
                    sub_894600(v292);
                    v110 = nullptr;
                    if ( !(_BYTE)v289 )
                      return 2;
                    continue;
                  }
                }
                break;
              }
              goto LABEL_157;
            case 7LL:
              v92 = *((_QWORD *)a3 + 1);
              if ( (v92 & 1) != 0 )
              {
                v93 = (unsigned int *)(v92 & 0xFFFFFFFFFFFFFFFELL);
                v94 = (__int64 *)(v93 + 2);
                v95 = (__int64)&v93[2 * *v93 + 2];
              }
              else
              {
                v95 = (__int64)(a3 + 8);
                v94 = (__int64 *)(a3 + 4);
                if ( !v92 )
                  return 2;
              }
              if ( v94 == (__int64 *)v95 )
                return 2;
              v258 = (__int64 *)v95;
              while ( 1 )
              {
                v98 = *v94;
                if ( *v94 )
                {
                  if ( (*(_BYTE *)(v98 + 28) & 0x7Fu) - 38 <= 6 && !(unsigned __int8)sub_8360E0(a2, *v94) )
                    return 0;
                }
                v99 = *(_QWORD *)(a2 + 32);
                v100 = *(_DWORD *)(a2 + 320);
                v292[0] = (void *)a2;
                v101 = *(_DWORD *)(v99 + 208);
                LODWORD(v292[1]) = v100;
                v102 = *(unsigned int *)(v99 + 196);
                v103 = v101 + 1;
                v104 = *(unsigned int *)(v99 + 192);
                *(_DWORD *)(v99 + 208) = v103;
                if ( v102 < v104 + 1 )
                {
                  sub_25D6060(v99 + 184, v99 + 200, v104 + 1, 4);
                  v104 = *(unsigned int *)(v99 + 192);
                }
                *(_DWORD *)(*(_QWORD *)(v99 + 184) + 4 * v104) = v103;
                ++*(_DWORD *)(v99 + 192);
                if ( !(unsigned __int8)sub_88A370(a2, v98) )
                {
                  if ( !*(_DWORD *)(a2 + 48) )
                    goto LABEL_157;
                  v96 = *(_BYTE **)(a2 + 24);
                  if ( *(_BYTE *)(a2 + 962) )
                  {
                    *v96 = 1;
                  }
                  else
                  {
                    v177 = *(_BYTE *)(a2 + 963);
                    *v96 |= v177;
                    if ( !v177 )
                      goto LABEL_157;
                  }
                }
                v97 = sub_8941C0(a2, 1, v100);
                LODWORD(v292[1]) = -1;
                if ( !v97 )
                  goto LABEL_157;
                ++v94;
                sub_894600(v292);
                if ( v258 == v94 )
                  return 2;
              }
            case 10LL:
              return 3;
            case 11LL:
              v84 = *(_QWORD *)(a2 + 32);
              v74 = *(_DWORD *)(a2 + 320);
              v254 = a4;
              v292[0] = (void *)a2;
              v85 = *(_DWORD *)(v84 + 208);
              v84 += 184;
              LODWORD(v292[1]) = v74;
              *(_DWORD *)(v84 + 24) = v85 + 1;
              sub_847EC0(v84, v85 + 1);
              v86 = a4;
              v87 = 4LL * *((unsigned int *)a3 + 1);
              v88 = (__int64)&a3[v87 + 8];
              v89 = a3 + 8;
              if ( !(v87 * 2) )
                goto LABEL_356;
              v90 = v254;
              while ( 2 )
              {
                v91 = sub_88E980(a1, a2, *v89, v90);
                if ( v91 == 2 )
                {
                  v90 = nullptr;
                }
                else if ( v91 != 5 )
                {
                  v14 = v91;
                  if ( v91 )
                  {
LABEL_127:
                    v40 = v74;
LABEL_128:
                    v78 = sub_8931F0(a2, 1, v40);
                    LODWORD(v292[1]) = -1;
                    if ( v78 )
                    {
LABEL_337:
                      sub_893480(v292);
                      return v14;
                    }
                  }
LABEL_68:
                  v14 = 0;
                  goto LABEL_337;
                }
                if ( (_QWORD *)v88 == ++v89 )
                {
                  v86 = v90;
LABEL_356:
                  v14 = 5;
                  if ( !v86 )
                  {
LABEL_329:
                    v208 = sub_8931F0(a2, 1, v74);
                    LODWORD(v292[1]) = -1;
                    v14 = 2 * v208;
                  }
                  goto LABEL_337;
                }
                continue;
              }
            case 13LL:
              goto LABEL_18;
            case 14LL:
              v79 = *(_QWORD *)(a2 + 32);
              v80 = *(_DWORD *)(a2 + 320);
              v289 = (void *)a2;
              v81 = *(_DWORD *)(v79 + 208);
              v79 += 184;
              v290 = v80;
              *(_DWORD *)(v79 + 24) = v81 + 1;
              sub_847EC0(v79, v81 + 1);
              v82 = *((_QWORD *)a3 + 2);
              if ( v82 )
              {
                v14 = sub_88E980(a1, a2, v82, 0);
                if ( v14 != 2 )
                  goto LABEL_132;
              }
              v14 = sub_88E980(a1, a2, *((_QWORD *)a3 + 3), 0);
              if ( v14 != 2 )
                goto LABEL_132;
              v225 = *((_QWORD *)a3 + 4);
              if ( !v225 || !*((_QWORD *)a3 + 5) || !*((_QWORD *)a3 + 6) )
                goto LABEL_134;
              v14 = sub_88E980(a1, a2, v225, 0);
              if ( v14 == 2 )
              {
                v226 = sub_88E980(a1, a2, *((_QWORD *)a3 + 5), 0);
                v14 = v226;
                if ( v226 == 2 )
                {
                  if ( (**((_DWORD **)a3 + 6) & 0x20000) != 0 )
                  {
LABEL_462:
                    sub_820430(v6);
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v244 = *(_DWORD *)(v6 + 320);
                      LOBYTE(v286) = 1;
                      v292[0] = (void *)v6;
                      LODWORD(v292[1]) = v244;
                      v245 = *(_QWORD *)(v6 + 32);
                      v246 = *(_DWORD *)(v245 + 208) + 1;
                      *(_DWORD *)(v245 + 208) = v246;
                      sub_847EC0(v245 + 184, v246);
                      if ( !(unsigned __int8)sub_8571E0(*((_QWORD *)a3 + 6), &v286, v6) )
                        break;
                      if ( !(_BYTE)v286 )
                      {
                        sub_894600(v292);
                        v14 = 2 * (unsigned __int8)sub_8950F0(&v289);
                        goto LABEL_135;
                      }
                      sub_894600(v292);
                      v247 = *(_QWORD *)(v6 + 32);
                      v248 = *(_DWORD *)(v6 + 320);
                      v292[0] = (void *)v6;
                      v249 = *(_DWORD *)(v247 + 208);
                      LODWORD(v292[1]) = v248;
                      *(_DWORD *)(v247 + 208) = v249 + 1;
                      sub_847EC0(v247 + 184, v249 + 1);
                      v14 = sub_88E980(a1, v6, *((_QWORD *)a3 + 8), 0);
                      if ( v14 != 2 || (v14 = sub_895320(a1, v6, *((_QWORD *)a3 + 9), 0), v14 != 3) )
                      {
                        if ( !v14 || !(unsigned __int8)sub_8950F0(v292) || !(unsigned __int8)sub_8950F0(&v289) )
LABEL_449:
                          v14 = 0;
                        sub_893480(v292);
                        goto LABEL_135;
                      }
                      v250 = *((_QWORD *)a3 + 7);
                      if ( (*(_BYTE *)(v250 + 2) & 2) != 0 )
                      {
                        if ( !(unsigned __int8)sub_820430(v6) )
                          goto LABEL_449;
                      }
                      else if ( !(unsigned __int8)sub_857160(v6, v250) )
                      {
                        goto LABEL_449;
                      }
                      v243 = sub_8931F0(v6, 1, v248);
                      LODWORD(v292[1]) = -1;
                      if ( !v243 )
                        goto LABEL_449;
                      sub_893480(v292);
                      if ( (**((_DWORD **)a3 + 6) & 0x20000) != 0 )
                        goto LABEL_462;
                    }
                    sub_894600(v292);
                  }
                  v14 = 0;
                }
                else if ( !v226 || !(unsigned __int8)sub_8950F0(&v289) )
                {
                  goto LABEL_134;
                }
              }
              else
              {
LABEL_132:
                if ( !v14 || (v83 = sub_8931F0(a2, 1, v80), v290 = -1, !v83) )
LABEL_134:
                  v14 = 0;
              }
LABEL_135:
              sub_893480(&v289);
              return v14;
            case 16LL:
              return 4;
            default:
              goto LABEL_109;
          }
        }
        if ( (_WORD)v9 == 131 )
        {
LABEL_177:
          v255 = *((_WORD **)a3 + 1);
          v118 = (unsigned __int64)&a3[4 * (*(_DWORD *)a3 >> 9) + 8];
          if ( (unsigned __int64)(a3 + 8) < v118 )
          {
            v119 = a3 + 8;
            while ( *(_WORD *)(*(_QWORD *)v119 + 32LL) != 239 )
            {
              v119 += 4;
              if ( (unsigned __int16 *)v118 == v119 )
                goto LABEL_370;
            }
            goto LABEL_181;
          }
          if ( a3 + 8 == (unsigned __int16 *)v118 )
            goto LABEL_370;
          while ( *(_WORD *)(*(_QWORD *)v118 + 32LL) != 239 )
          {
            v118 += 8LL;
            if ( a3 + 8 == (unsigned __int16 *)v118 )
              goto LABEL_370;
          }
          v119 = a3 + 8;
LABEL_181:
          if ( v119 == (unsigned __int16 *)v118 )
LABEL_370:
            v120 = 0;
          else
            v120 = (*v255 & 0x1FF) == 140;
          v121 = *(_QWORD *)(a2 + 32);
          v122 = *(_BYTE *)(v121 + 248);
          *(_BYTE *)(v121 + 248) = v120;
          v267 = v121;
          v268 = v122;
          v123 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 2160LL);
          v273 = _mm_loadu_si128((const __m128i *)v123);
          v274 = _mm_loadu_si128((const __m128i *)(v123 + 16));
          v275 = _mm_loadu_si128((const __m128i *)(v123 + 32));
          v276 = _mm_loadu_si128((const __m128i *)(v123 + 48));
          v277 = _mm_loadu_si128((const __m128i *)(v123 + 64));
          v278 = _mm_loadu_si128((const __m128i *)(v123 + 80));
          v279 = _mm_loadu_si128((const __m128i *)(v123 + 96));
          v280 = _mm_loadu_si128((const __m128i *)(v123 + 112));
          v281 = _mm_loadu_si128((const __m128i *)(v123 + 128));
          v282 = _mm_loadu_si128((const __m128i *)(v123 + 144));
          v283 = _mm_loadu_si128((const __m128i *)(v123 + 160));
          v284[0] = _mm_loadu_si128((const __m128i *)(v123 + 176));
          v124 = _mm_loadu_si128((const __m128i *)(v123 + 190));
          v302 = v283;
          *(__m128i *)((char *)v284 + 14) = v124;
          v125 = *(_DWORD *)(v123 + 208);
          si128 = _mm_load_si128(v284);
          *(__m128i *)v292 = v273;
          v303[0] = si128;
          v304 = v125;
          LOBYTE(v125) = *(_BYTE *)(v123 + 232);
          *(__m128i *)((char *)v303 + 14) = v124;
          v127 = _mm_loadu_si128((const __m128i *)(v123 + 216));
          v293 = v274;
          v294 = v275;
          v295 = v276;
          v296 = v277;
          v297 = v278;
          v298 = v279;
          v299 = v280;
          v300 = v281;
          v301 = v282;
          v306 = v125;
          v305 = v127;
          sub_847F20((__int64)&v307, (__int64 *)(v123 + 240));
          sub_847F20((__int64)&v310, (__int64 *)(v123 + 264));
          sub_847F20((__int64)&v313, (__int64 *)(v123 + 288));
          sub_847F20((__int64)&v316, (__int64 *)(v123 + 312));
          sub_847F20((__int64)&v319, (__int64 *)(v123 + 336));
          v128 = _mm_loadu_si128((const __m128i *)(v123 + 360));
          v323 = *(_DWORD *)(v123 + 376);
          v129 = *(_DWORD *)(v123 + 380);
          v322 = v128;
          v324 = v129;
          v325 = &v326;
          sub_8212A0((__int64 *)&v325, *(_BYTE **)(v123 + 384), *(_QWORD *)(v123 + 384) + *(_QWORD *)(v123 + 392));
          v327 = &v328;
          sub_8212A0((__int64 *)&v327, *(_BYTE **)(v123 + 416), *(_QWORD *)(v123 + 416) + *(_QWORD *)(v123 + 424));
          v329 = &v330;
          sub_8212A0((__int64 *)&v329, *(_BYTE **)(v123 + 448), *(_QWORD *)(v123 + 448) + *(_QWORD *)(v123 + 456));
          v331 = &v332;
          sub_8212A0((__int64 *)&v331, *(_BYTE **)(v123 + 480), *(_QWORD *)(v123 + 480) + *(_QWORD *)(v123 + 488));
          sub_847F20((__int64)&v333, (__int64 *)(v123 + 512));
          sub_847F20((__int64)&v336, (__int64 *)(v123 + 536));
          v339 = *(_BYTE *)(v123 + 560);
          sub_847F20((__int64)&v340, (__int64 *)(v123 + 568));
          v130 = a3 + 8;
          v131 = a4;
          v343 = 0;
          v344 = nullptr;
          v345 = &v343;
          v346 = &v343;
          v347 = 0;
          v132 = *(int **)(v123 + 608);
          if ( v132 )
          {
            v133 = sub_828A90(v132, (__int64)&v343);
            v130 = a3 + 8;
            v131 = a4;
            v134 = (int *)v133;
            do
            {
              v135 = (int *)v133;
              v133 = *(_QWORD *)(v133 + 16);
            }
            while ( v133 );
            v345 = v135;
            v136 = v134;
            do
            {
              v137 = v136;
              v136 = *((int **)v136 + 3);
            }
            while ( v136 );
            v346 = v137;
            v138 = *(_QWORD *)(v123 + 632);
            v344 = v134;
            v347 = v138;
          }
          v139 = *(_QWORD *)(v123 + 648) - *(_QWORD *)(v123 + 640);
          v349 = nullptr;
          *(_OWORD *)v348 = 0;
          if ( v139 )
          {
            if ( v139 > 0x7FFFFFFFFFFFFFF8LL )
              sub_555886(v132);
            v263 = v131;
            v259 = v130;
            v140 = operator new(v139);
            v130 = v259;
            v131 = v263;
            v141 = (__int64 *)v140;
          }
          else
          {
            v141 = nullptr;
          }
          v349 = (char *)v141 + v139;
          *(__m128i *)v348 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v141, (__m128i)(unsigned __int64)v141);
          if ( *(_QWORD *)(v123 + 648) != *(_QWORD *)(v123 + 640) )
          {
            v260 = v130;
            v264 = a1;
            v142 = v141;
            v143 = v131;
            v269 = v6;
            v144 = *(_QWORD *)(v123 + 640);
            v145 = *(_QWORD *)(v123 + 648);
            do
            {
              v146 = v142 + 2;
              v147 = v142;
              v144 += 56;
              v142 += 7;
              *(v142 - 7) = (__int64)v146;
              sub_8212A0(v147, *(_BYTE **)(v144 - 56), *(_QWORD *)(v144 - 56) + *(_QWORD *)(v144 - 48));
              v148 = *(_QWORD *)(v144 - 8);
              *(__m128i *)(v142 - 3) = _mm_loadu_si128((const __m128i *)(v144 - 24));
              *(v142 - 1) = v148;
            }
            while ( v145 != v144 );
            v131 = v143;
            v130 = v260;
            v141 = v142;
            v6 = v269;
            a1 = v264;
          }
          v348[1] = v141;
          v350 = &v351;
          v272 = v131;
          v270 = v130;
          sub_8212A0((__int64 *)&v350, *(_BYTE **)(v123 + 664), *(_QWORD *)(v123 + 664) + *(_QWORD *)(v123 + 672));
          v352 = &v353;
          sub_8212A0((__int64 *)&v352, *(_BYTE **)(v123 + 696), *(_QWORD *)(v123 + 696) + *(_QWORD *)(v123 + 704));
          v354 = *(_QWORD *)(v123 + 728);
          v355 = *(_BYTE *)(v123 + 736);
          v356 = *(_QWORD *)(v123 + 740);
          sub_847F20((__int64)&v357, (__int64 *)(v123 + 752));
          v360 = &v361;
          sub_8212A0((__int64 *)&v360, *(_BYTE **)(v123 + 776), *(_QWORD *)(v123 + 776) + *(_QWORD *)(v123 + 784));
          v362 = *(_WORD *)(v123 + 808);
          v363 = v364;
          sub_8212A0((__int64 *)&v363, *(_BYTE **)(v123 + 816), *(_QWORD *)(v123 + 816) + *(_QWORD *)(v123 + 824));
          v149 = v270;
          v150 = v272;
          v364[16] = *(_BYTE *)(v123 + 848);
          if ( (v302.m128i_i8[4] & 0x10) == 0
            || ((__int64)v292[0] & 0x20) != 0
            || (v151 = &v270[4 * (*(_DWORD *)a3 >> 9)], v270 == v151) )
          {
LABEL_207:
            v14 = sub_88E980(a1, v6, v255, v150);
          }
          else
          {
            v271 = a1;
            v152 = v149;
            while ( 1 )
            {
              v153 = *(_QWORD *)v152;
              if ( *(_WORD *)(*(_QWORD *)v152 + 32LL) == 40 )
              {
                v154 = *(_QWORD *)(v153 + 40);
                if ( (*(_BYTE *)(v154 + 2) & 2) != 0 )
                  goto LABEL_408;
                if ( !(unsigned __int8)sub_8146E0(*(unsigned __int16 **)(v153 + 40), *(_QWORD *)(v6 + 16), 1u) )
                {
                  if ( !(unsigned __int8)sub_8571E0(v154, &v289, v6) )
                    goto LABEL_408;
                  if ( !(_BYTE)v289 )
                    break;
                }
              }
              v152 += 4;
              if ( v151 == v152 )
              {
                a1 = v271;
                v150 = v272;
                goto LABEL_207;
              }
            }
            v235 = sub_8124E0(v154);
            sub_A2E050(v6, v235, 2180, 0);
LABEL_408:
            v14 = 0;
          }
          std::string::_M_dispose();
          std::string::_M_dispose();
          v155 = v358;
          v156 = (void **)v357;
          if ( v358 != v357 )
          {
            do
            {
              if ( *v156 != v156 + 2 )
                operator delete(*v156, (unsigned __int64)v156[2] + 1);
              v156 += 4;
            }
            while ( v155 != v156 );
            v156 = (void **)v357;
          }
          if ( v156 )
            operator delete(v156, v359 - (_QWORD)v156);
          std::string::_M_dispose();
          std::string::_M_dispose();
          v157 = (void **)v348[1];
          v158 = (void **)v348[0];
          if ( v348[1] != v348[0] )
          {
            do
            {
              if ( *v158 != v158 + 2 )
                operator delete(*v158, (unsigned __int64)v158[2] + 1);
              v158 += 7;
            }
            while ( v157 != v158 );
            v158 = (void **)v348[0];
          }
          if ( v158 )
            operator delete(v158, v349 - (char *)v158);
          v159 = v344;
          while ( v159 )
          {
            v160 = v159;
            sub_8250F0(*((_QWORD **)v159 + 3));
            v159 = *((void **)v159 + 2);
            std::string::_M_dispose();
            std::string::_M_dispose();
            operator delete(v160, 0x60u);
          }
          v161 = v341;
          v162 = (void **)v340;
          if ( v341 != v340 )
          {
            do
            {
              if ( *v162 != v162 + 2 )
                operator delete(*v162, (unsigned __int64)v162[2] + 1);
              v162 += 4;
            }
            while ( v161 != v162 );
            v162 = (void **)v340;
          }
          if ( v162 )
            operator delete(v162, v342 - (_QWORD)v162);
          v163 = v337;
          v164 = (void **)v336;
          if ( v337 != v336 )
          {
            do
            {
              if ( *v164 != v164 + 2 )
                operator delete(*v164, (unsigned __int64)v164[2] + 1);
              v164 += 4;
            }
            while ( v163 != v164 );
            v164 = (void **)v336;
          }
          if ( v164 )
            operator delete(v164, v338 - (_QWORD)v164);
          v165 = v334;
          v166 = (void **)v333;
          if ( v334 != v333 )
          {
            do
            {
              if ( *v166 != v166 + 2 )
                operator delete(*v166, (unsigned __int64)v166[2] + 1);
              v166 += 4;
            }
            while ( v165 != v166 );
            v166 = (void **)v333;
          }
          if ( v166 )
            operator delete(v166, v335 - (_QWORD)v166);
          std::string::_M_dispose();
          std::string::_M_dispose();
          std::string::_M_dispose();
          std::string::_M_dispose();
          v167 = v320;
          v168 = (void **)v319;
          if ( v320 != v319 )
          {
            do
            {
              if ( *v168 != v168 + 2 )
                operator delete(*v168, (unsigned __int64)v168[2] + 1);
              v168 += 4;
            }
            while ( v167 != v168 );
            v168 = (void **)v319;
          }
          if ( v168 )
            operator delete(v168, v321 - (_QWORD)v168);
          v169 = v317;
          v170 = (void **)v316;
          if ( v317 != v316 )
          {
            do
            {
              if ( *v170 != v170 + 2 )
                operator delete(*v170, (unsigned __int64)v170[2] + 1);
              v170 += 4;
            }
            while ( v169 != v170 );
            v170 = (void **)v316;
          }
          if ( v170 )
            operator delete(v170, v318 - (_QWORD)v170);
          v171 = v314;
          v172 = (void **)v313;
          if ( v314 != v313 )
          {
            do
            {
              if ( *v172 != v172 + 2 )
                operator delete(*v172, (unsigned __int64)v172[2] + 1);
              v172 += 4;
            }
            while ( v171 != v172 );
            v172 = (void **)v313;
          }
          if ( v172 )
            operator delete(v172, v315 - (_QWORD)v172);
          v173 = v311;
          v174 = (void **)v310;
          if ( v311 != v310 )
          {
            do
            {
              if ( *v174 != v174 + 2 )
                operator delete(*v174, (unsigned __int64)v174[2] + 1);
              v174 += 4;
            }
            while ( v173 != v174 );
            v174 = (void **)v310;
          }
          if ( v174 )
            operator delete(v174, v312 - (_QWORD)v174);
          v175 = v308;
          v176 = (void **)v307;
          if ( v308 != v307 )
          {
            do
            {
              if ( *v176 != v176 + 2 )
                operator delete(*v176, (unsigned __int64)v176[2] + 1);
              v176 += 4;
            }
            while ( v175 != v176 );
            v176 = (void **)v307;
          }
          if ( v176 )
            operator delete(v176, v309 - (_QWORD)v176);
          *(_BYTE *)(v267 + 248) = v268;
          return v14;
        }
        if ( (unsigned __int16)v9 <= 0x83u )
        {
          if ( (_WORD)v9 == 1 )
          {
            while ( 1 )
            {
              v67 = *(_QWORD *)(a2 + 32);
              v68 = *(_DWORD *)(a2 + 320);
              v292[0] = (void *)a2;
              LODWORD(v292[1]) = v68;
              v69 = *(_DWORD *)(v67 + 208);
              v70 = *(unsigned int *)(v67 + 192);
              v71 = *(unsigned int *)(v67 + 196);
              v72 = v69 + 1;
              *(_DWORD *)(v67 + 208) = v69 + 1;
              if ( v71 < v70 + 1 )
              {
                v257 = v69 + 1;
                sub_25D6060(v67 + 184, v67 + 200, v70 + 1, 4);
                v70 = *(unsigned int *)(v67 + 192);
                v72 = v257;
              }
              *(_DWORD *)(*(_QWORD *)(v67 + 184) + 4 * v70) = v72;
              ++*(_DWORD *)(v67 + 192);
              v63 = *(_QWORD *)&a3[4 * ((*((_BYTE *)a3 + 1) & 2) != 0) + 8];
              v64 = sub_ACB330(a3);
              if ( !(unsigned __int8)sub_894630(a2, v64, v63, &v289) )
                goto LABEL_336;
              if ( !(_BYTE)v289 )
                break;
              v65 = sub_895320(a1, a2, *(_QWORD *)&a3[4 * ((*((_BYTE *)a3 + 1) & 2) != 0) + 12], 0);
              if ( v65 != 3 )
              {
                v14 = v65;
                if ( v65 )
                {
                  v209 = sub_8931F0(a2, 1, v68);
                  LODWORD(v292[1]) = -1;
                  if ( v209 )
                    goto LABEL_337;
                }
LABEL_336:
                v14 = 0;
                goto LABEL_337;
              }
              v66 = sub_8931F0(a2, 1, v68);
              LODWORD(v292[1]) = -1;
              if ( !v66 )
                goto LABEL_336;
              sub_893480(v292);
            }
            sub_893480(v292);
            return 2;
          }
          if ( (_WORD)v9 != 2 )
          {
LABEL_109:
            if ( (((_WORD)v9 + 509) & 0x1FFu) > 0x7F )
            {
LABEL_319:
              v201 = sub_AC6DA0(a3);
              v202 = (__int64 *)sub_A2E1A0(a2, v201, 110, 0);
              v203 = (void *)sub_AC7B80(a3);
              if ( v202 )
              {
                v292[0] = v203;
                LOBYTE(v292[1]) = 1;
                sub_839C90(v202, (__int64 *)v292);
              }
            }
            else
            {
              if ( (a3[1] & 2) != 0 )
                return 2 * (unsigned int)(unsigned __int8)sub_820430(a2);
              v239 = *(_QWORD *)(a2 + 32);
              v240 = *(_DWORD *)(a2 + 320);
              v292[0] = (void *)a2;
              v241 = *(_DWORD *)(v239 + 208);
              LODWORD(v292[1]) = v240;
              *(_DWORD *)(v239 + 208) = v241 + 1;
              sub_847EC0(v239 + 184, v241 + 1);
              if ( (unsigned __int8)sub_857160(a2, (unsigned __int64)a3) )
              {
                v242 = sub_8941C0(a2, 1, v240);
                LODWORD(v292[1]) = -1;
                if ( v242 )
                {
                  sub_894600(v292);
                  return 2;
                }
              }
LABEL_157:
              sub_894600(v292);
            }
            return 0;
          }
LABEL_18:
          a3 = *((unsigned __int16 **)a3 + 2);
          v8 = *(_DWORD *)(a2 + 48);
LABEL_19:
          if ( !v8 )
            goto LABEL_20;
          continue;
        }
        if ( (_WORD)v9 == 140 )
        {
          v178 = *(_QWORD *)(a2 + 32);
          v179 = *((_QWORD *)a3 + 1);
          v292[0] = (void *)a2;
          v180 = *(_DWORD *)(a2 + 320);
          v181 = *(_DWORD *)(v178 + 208);
          v178 += 184;
          LODWORD(v292[1]) = v180;
          *(_DWORD *)(v178 + 24) = v181 + 1;
          sub_847EC0(v178, v181 + 1);
          if ( v179 )
          {
            if ( (*(_BYTE *)(v179 + 2) & 2) != 0 )
            {
              sub_820430(a2);
            }
            else
            {
              v182 = (const __m128i *)a1[1];
              v183 = *a1;
              if ( v182 )
              {
                if ( (unsigned __int8)sub_88A010(v183, a2, v182, v179, 0) )
                  goto LABEL_289;
              }
              else if ( (unsigned __int8)sub_856400(v183, a2, v179) )
              {
                goto LABEL_289;
              }
            }
            v14 = 0;
            goto LABEL_290;
          }
LABEL_289:
          v184 = sub_8941C0(a2, 1, v180);
          LODWORD(v292[1]) = -1;
          v14 = v184;
LABEL_290:
          sub_894600(v292);
          return v14;
        }
        if ( (unsigned __int16)v9 > 0x8Cu )
          goto LABEL_319;
        if ( (_WORD)v9 != 132 )
        {
          if ( (((_WORD)v9 + 379) & 0x1FFu) > 1 )
            goto LABEL_319;
          v8 = *(_DWORD *)(a2 + 48);
LABEL_28:
          if ( (_WORD)v9 == 134 )
            a3 = *(unsigned __int16 **)&a3[4 * ((*((_BYTE *)a3 + 1) & 2) != 0) + 16];
          else
            a3 = *((unsigned __int16 **)a3 + 3);
          goto LABEL_19;
        }
        v56 = *(_QWORD *)(a2 + 32);
        v253 = *(_DWORD *)(a2 + 320);
        v57 = *(unsigned int *)(v56 + 196);
        v58 = *(_DWORD *)(v56 + 208) + 1;
        v59 = *(unsigned int *)(v56 + 192);
        *(_DWORD *)(v56 + 208) = v58;
        if ( v57 < v59 + 1 )
        {
          sub_25D6060(v56 + 184, v56 + 200, v59 + 1, 4);
          v59 = *(unsigned int *)(v56 + 192);
        }
        *(_DWORD *)(*(_QWORD *)(v56 + 184) + 4 * v59) = v58;
        ++*(_DWORD *)(v56 + 192);
        v287 = 1;
        v286 = nullptr;
        v288 = 0;
        if ( (*((_BYTE *)a3 + 1) & 2) != 0 )
        {
          v60 = *((_QWORD *)a3 + 3);
          if ( v60 )
          {
            v61 = sub_88E980(a1, a2, v60, 0);
            v14 = v61;
            if ( v61 != 2 )
            {
              if ( !v61 )
              {
LABEL_103:
                v14 = 0;
                if ( v287 > 0x40 )
                {
                  v62 = v286;
                  v14 = 0;
                  if ( v286 )
                    goto LABEL_105;
                }
LABEL_106:
                if ( v253 != -1 )
                  sub_8931F0(v6, 0, v253);
                goto LABEL_108;
              }
              if ( !(unsigned __int8)sub_8931F0(a2, 1, v253) )
              {
LABEL_429:
                v14 = 0;
                goto LABEL_108;
              }
LABEL_423:
              if ( v287 > 0x40 && v286 )
                operator delete[](v286);
              goto LABEL_108;
            }
          }
        }
        v185 = *(_QWORD *)(a2 + 32);
        v186 = *(_DWORD *)(a2 + 320);
        v187 = *(unsigned int *)(v185 + 196);
        v188 = *(_DWORD *)(v185 + 208) + 1;
        v189 = *(unsigned int *)(v185 + 192);
        *(_DWORD *)(v185 + 208) = v188;
        if ( v187 < v189 + 1 )
        {
          sub_25D6060(v185 + 184, v185 + 200, v189 + 1, 4);
          v189 = *(unsigned int *)(v185 + 192);
        }
        *(_DWORD *)(*(_QWORD *)(v185 + 184) + 4 * v189) = v188;
        ++*(_DWORD *)(v185 + 192);
        if ( sub_ACADC0(a3) )
        {
          v193 = sub_ACADC0(a3);
          if ( !(unsigned __int8)sub_88A370(a2, v193) )
            goto LABEL_331;
        }
        v194 = *(_QWORD *)&a3[4 * ((*((_BYTE *)a3 + 1) & 4) != 0) + 12 + 4 * ((*((_BYTE *)a3 + 1) & 2) != 0)];
        if ( (*(_BYTE *)(v194 + 2) & 2) != 0 )
        {
          **(_BYTE **)(a2 + 24) = 1;
LABEL_331:
          if ( v186 != -1 )
            sub_8941C0(a2, 0, v186);
          goto LABEL_333;
        }
        if ( !(unsigned __int8)sub_87D880(v194, (__int64)&v286, a2, v190, v191, v192) )
          goto LABEL_331;
        if ( !(unsigned __int8)sub_8941C0(a2, 1, v186) )
        {
LABEL_333:
          --*(_DWORD *)(*(_QWORD *)(a2 + 32) + 192LL);
          goto LABEL_103;
        }
        --*(_DWORD *)(*(_QWORD *)(a2 + 32) + 192LL);
        if ( !*((_QWORD *)a3 + 1) )
        {
LABEL_422:
          v14 = 2 * (unsigned __int8)sub_8931F0(v6, 1, v253);
          goto LABEL_423;
        }
        v261 = a1;
        v195 = *((_QWORD *)a3 + 1);
        v196 = 0;
        v265 = a3;
        do
        {
          if ( (*(_WORD *)v195 & 0x1FF) == 0x85 )
          {
            v196 = v195;
          }
          else
          {
            sub_863FA0((__int64)&v289, *(__int64 **)(v195 + 24), *(_QWORD *)(v6 + 16), 0);
            if ( (*(_BYTE *)(v195 + 1) & 2) != 0 && (v197 = *(__int64 **)(v195 + 32)) != nullptr )
            {
              sub_863FA0((__int64)v292, v197, *(_QWORD *)(v6 + 16), 0);
              v198 = (unsigned int)v292[1];
              v199 = v291;
            }
            else
            {
              v198 = v290;
              LODWORD(v292[1]) = v290;
              if ( v290 > 0x40 )
              {
                sub_2585B30(v292);
                v198 = (unsigned int)v292[1];
              }
              else
              {
                v292[0] = v289;
              }
              v199 = v291;
              BYTE4(v292[1]) = v291;
            }
            if ( v199 )
              v200 = (int)sub_25867A0(&v289, &v286) <= 0;
            else
              v200 = (int)sub_2586820(&v289, &v286) <= 0;
            if ( v200 )
            {
              if ( v288 )
              {
                if ( (int)sub_25867A0(&v286, v292) <= 0 )
                  goto LABEL_393;
              }
              else if ( (int)sub_2586820(&v286, v292) <= 0 )
              {
LABEL_393:
                v229 = v198;
                v230 = v195;
                v231 = v265;
                v232 = v261;
                if ( v229 > 0x40 && v292[0] )
                  operator delete[](v292[0]);
                if ( v290 > 0x40 && v289 )
                  operator delete[](v289);
                v233 = v230;
                goto LABEL_400;
              }
            }
            if ( v198 > 0x40 && v292[0] )
              operator delete[](v292[0]);
            if ( v290 > 0x40 && v289 )
              operator delete[](v289);
          }
          v195 = *(_QWORD *)(v195 + 16);
        }
        while ( v195 );
        v232 = v261;
        v231 = v265;
        v233 = v196;
        if ( !v196 )
          goto LABEL_422;
LABEL_400:
        v262 = v233;
        v234 = sub_88E980(
                 v232,
                 v6,
                 *(_QWORD *)&v231[4 * ((*((_BYTE *)v231 + 1) & 2) != 0) + 16 + 4 * ((*((_BYTE *)v231 + 1) & 4) != 0)],
                 v233);
        v14 = v234;
        if ( !v234 )
          goto LABEL_103;
        if ( v234 == 5 )
        {
          sub_A2E1A0(v6, *(unsigned int *)(v262 + 4), 2283, 0);
          goto LABEL_103;
        }
        if ( !(unsigned __int8)sub_8931F0(v6, 1, v253) )
        {
          v14 = 0;
          if ( v287 <= 0x40 || !v286 )
            goto LABEL_108;
          operator delete[](v286);
          goto LABEL_429;
        }
        if ( v14 == 4 )
        {
          if ( v287 > 0x40 && v286 )
            operator delete[](v286);
          v14 = 2;
        }
        else if ( v287 > 0x40 )
        {
          v62 = v286;
          v253 = -1;
          if ( v286 )
          {
LABEL_105:
            operator delete[](v62);
            goto LABEL_106;
          }
        }
LABEL_108:
        --*(_DWORD *)(*(_QWORD *)(v6 + 32) + 192LL);
        return v14;
      case 3LL:
      case 8LL:
        goto LABEL_13;
      case 4LL:
        v16 = *((_QWORD *)a3 + 1);
        if ( (v16 & 1) != 0 )
        {
          v17 = (unsigned int *)(v16 & 0xFFFFFFFFFFFFFFFELL);
          v18 = (__int64 *)(v17 + 2);
          v19 = (__int64)&v17[2 * *v17 + 2];
        }
        else
        {
          v19 = (__int64)(a3 + 8);
          v18 = (__int64 *)(a3 + 4);
          if ( !v16 )
            return 5;
        }
        if ( v18 == (__int64 *)v19 )
          return 5;
        while ( 2 )
        {
          v23 = *v18;
          if ( (*(_BYTE *)(*v18 + 28) & 0x7Fu) - 38 > 6 )
            goto LABEL_36;
          v22 = *v18;
          if ( !(unsigned __int8)sub_8360E0(v6, *v18) )
            return 0;
          v24 = *(_BYTE *)(v23 + 96);
          v25 = v24 & 7;
          if ( (v24 & 7) == 0 )
          {
            v20 = *(_QWORD *)(v23 + 48);
            v21 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v21 & 8) != 0 )
            {
              v22 = v21 & 0xFFFFFFFFFFFFFFF0LL;
              if ( (unsigned int)((*(__int64 *)((char *)&qword_18 + (v21 & 0xFFFFFFFFFFFFFFF0LL))
                                 | (unsigned __int64)(((unsigned __int8)v20 | (unsigned __int8)v21) & 7)) >> 9) == 3 )
                goto LABEL_36;
            }
            if ( (*(_BYTE *)(v23 + 28) & 0x7D) != 0x29 )
            {
              v45 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(v23 + 16) & 4) != 0 )
                v45 = *(_QWORD *)(v45 + 8);
              v46 = *(_BYTE *)(sub_79C2A0(v45) + 8) & 0x7F;
              if ( !v46 || v46 == 22 )
                goto LABEL_36;
              if ( (*(_BYTE *)(v23 + 28) & 0x7F) != 0x29 )
              {
                v47 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v23 + 16) & 4) != 0 )
                  v47 = *(_QWORD *)v47;
                if ( ((*(_BYTE *)(v47 + 8) + 72) & 0x7Fu) <= 3 )
                  goto LABEL_36;
              }
              v24 = *(_BYTE *)(v23 + 96);
            }
            if ( (v24 & 0x18) != 0 )
              goto LABEL_36;
LABEL_42:
            if ( !sub_77BC00(v23)
              && (*(char *)(v23 + 28) < 0 || sub_76AB10(v23, v22) && !(unsigned __int8)sub_88A150(v6, v23)) )
            {
              return 0;
            }
LABEL_36:
            if ( (__int64 *)v19 == ++v18 )
              return 5;
            continue;
          }
          break;
        }
        if ( (*(_BYTE *)(v23 + 96) & 7) != 5 )
          goto LABEL_41;
        v48 = *(_BYTE *)(v23 + 28) & 0x7F;
        if ( v48 != 38 && v48 != 44 )
        {
          if ( (*(_BYTE *)(v23 + 28) & 0x7F) != 0x29 )
            goto LABEL_36;
          goto LABEL_42;
        }
        v49 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v23 + 16) & 4) != 0 )
          v49 = *(_QWORD *)(v49 + 8);
        if ( !v49 )
          goto LABEL_36;
        v50 = *(_BYTE *)(sub_79C2A0(v49) + 8) & 0x7F;
        if ( (unsigned __int8)v50 > 0x10u )
        {
          if ( (((_BYTE)v50 + 96) & 0x7Fu) <= 5 )
            goto LABEL_89;
        }
        else
        {
          v51 = 65922;
          if ( _bittest64(&v51, v50) )
          {
LABEL_89:
            v25 = *(_BYTE *)(v23 + 96) & 7;
LABEL_41:
            if ( v25 <= 3u )
              goto LABEL_36;
            goto LABEL_42;
          }
        }
        if ( (*(_BYTE *)(v23 + 28) & 0x7F) != 0x29 )
          goto LABEL_36;
        goto LABEL_89;
      default:
        return 5;
    }
  }
}

