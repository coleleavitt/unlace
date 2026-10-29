__int64 __fastcall sub_1A22930(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // r15
  int v17; // r10d
  int *v20; // r12
  __int64 *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  _WORD *v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 *v29; // rsi
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 *v48; // rax
  __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  unsigned int v66; // eax
  size_t v67; // r14
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r15
  unsigned int v79; // edx
  __int64 *v80; // rsi
  unsigned int v81; // ecx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rbx
  __int64 v85; // rax
  void *v86; // rdx
  __int64 *v87; // rsi
  void **p_ptr; // rdi
  __int64 v89; // rax
  __int64 v90; // r14
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 (__fastcall **v94)(); // rax
  unsigned __int8 v95; // dl
  __int64 v96; // rax
  unsigned __int64 v97; // r14
  __int64 v98; // r13
  unsigned __int64 v99; // rbx
  unsigned __int64 *v100; // r15
  unsigned int v101; // ebx
  int v102; // eax
  __int64 v103; // r11
  __int64 *v104; // rsi
  unsigned int v105; // edx
  __int64 v106; // r14
  __int64 (__fastcall **v107)(); // rax
  __int64 v108; // r11
  __int64 v109; // rcx
  __int64 (__fastcall **v110)(); // rsi
  __int64 v111; // rbx
  unsigned int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // r11
  __int64 v116; // rdx
  unsigned __int64 v117; // rax
  __int64 v118; // rsi
  __int64 v119; // rcx
  unsigned int v120; // edi
  __int64 v121; // rsi
  unsigned __int64 v122; // rbx
  unsigned int v123; // esi
  char v124; // al
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // r14
  __int64 v139; // rcx
  bool v140; // zf
  unsigned int v141; // edx
  __int64 *v142; // rsi
  unsigned int v143; // ecx
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 *v146; // rsi
  unsigned int v147; // ecx
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // r14
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rax
  void **v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // rax
  int v160; // eax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rsi
  size_t v165; // rax
  int v166; // eax
  __int64 v167; // r15
  size_t v168; // r14
  int v169; // edi
  int v170; // ecx
  int v171; // r8d
  int v172; // r9d
  unsigned int v173; // r14d
  unsigned int v174; // r14d
  unsigned int v175; // eax
  unsigned int v176; // edx
  __int64 v177; // rax
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // r15
  __int64 v181; // r14
  unsigned int v182; // r13d
  __int64 v183; // rax
  __int64 v184; // r15
  int v185; // eax
  __int64 v186; // rax
  __int64 v187; // r14
  __int64 v188; // r13
  unsigned __int64 v189; // rax
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  __int64 v193; // rdx
  void *v194; // rax
  __int64 v195; // rax
  __int64 v196; // rcx
  unsigned __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  unsigned int *v201; // rax
  __int64 v202; // rbx
  char v203; // r14
  __int64 v204; // r15
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 v208; // rax
  unsigned __int64 v209; // rdx
  __int64 v210; // rbx
  __int64 v211; // rsi
  __int64 v212; // rsi
  void *v213; // rax
  unsigned int v214; // edx
  unsigned int *v215; // rax
  __int64 v216; // r13
  __int64 v217; // rax
  __int64 v218; // rax
  _BYTE *v219; // r11
  unsigned __int64 v220; // rdx
  __int64 v221; // rax
  _BYTE *v222; // r11
  size_t v223; // r14
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // r14
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // rax
  __int64 v232; // r15
  __int64 v233; // r15
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // rsi
  void *v237; // rax
  unsigned __int64 v238; // rax
  unsigned __int8 v239; // al
  _BYTE *v240; // r11
  unsigned __int8 v241; // r13
  __int64 v242; // rax
  __int64 v243; // rax
  __int64 v244; // rdx
  __int64 v245; // rcx
  __int64 v246; // r9
  __int64 v247; // r8
  __int64 (__fastcall **v248)(); // rax
  _QWORD *v249; // rax
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // r11
  __int64 v257; // r14
  __int64 (__fastcall **v258)(); // rax
  _QWORD *v259; // rax
  int v260; // eax
  __int64 v261; // rax
  __int64 v262; // r14
  __int64 v263; // rbx
  unsigned __int64 v264; // rax
  __int64 v265; // rcx
  __int64 v266; // r8
  __int64 v267; // r9
  __int64 v268; // rdx
  unsigned __int64 v269; // rax
  __int64 v270; // rax
  __int64 v271; // rax
  __int64 v272; // rax
  __int64 v273; // r8
  __int64 v274; // r9
  unsigned __int64 v275; // rax
  __int64 v276; // rdx
  __int64 v277; // rcx
  _QWORD *v278; // r14
  __int64 v279; // rdx
  __int64 v280; // rcx
  __int64 v281; // r8
  __int64 v282; // r9
  __int64 v283; // rax
  int v284; // edx
  int v285; // ecx
  int v286; // r8d
  int v287; // r9d
  __int64 v288; // [rsp-28h] [rbp-280h]
  __int64 v289; // [rsp+0h] [rbp-258h]
  __int64 v290; // [rsp+0h] [rbp-258h]
  __int64 v291; // [rsp+0h] [rbp-258h]
  __int64 v292; // [rsp+0h] [rbp-258h]
  __int64 v293; // [rsp+0h] [rbp-258h]
  __int64 v294; // [rsp+0h] [rbp-258h]
  __int64 v295; // [rsp+0h] [rbp-258h]
  __int64 v296; // [rsp+0h] [rbp-258h]
  __int64 v297; // [rsp+0h] [rbp-258h]
  __int64 v298; // [rsp+0h] [rbp-258h]
  __int64 v299; // [rsp+0h] [rbp-258h]
  __int64 v300; // [rsp+0h] [rbp-258h]
  size_t v301; // [rsp+8h] [rbp-250h]
  int v302; // [rsp+10h] [rbp-248h]
  _BYTE *v303; // [rsp+10h] [rbp-248h]
  _BYTE *v304; // [rsp+10h] [rbp-248h]
  __int64 v305; // [rsp+10h] [rbp-248h]
  _BYTE *v306; // [rsp+10h] [rbp-248h]
  __int64 v307; // [rsp+20h] [rbp-238h]
  __int64 v308; // [rsp+20h] [rbp-238h]
  __int64 v309; // [rsp+20h] [rbp-238h]
  __int64 v310; // [rsp+20h] [rbp-238h]
  int v311; // [rsp+20h] [rbp-238h]
  int v312; // [rsp+20h] [rbp-238h]
  __int64 v313; // [rsp+20h] [rbp-238h]
  int v314; // [rsp+38h] [rbp-220h]
  __int64 v315; // [rsp+38h] [rbp-220h]
  __int64 v316; // [rsp+38h] [rbp-220h]
  int v317; // [rsp+38h] [rbp-220h]
  __int64 v318; // [rsp+40h] [rbp-218h]
  int v319; // [rsp+40h] [rbp-218h]
  __int64 v320; // [rsp+40h] [rbp-218h]
  int v321; // [rsp+54h] [rbp-204h] BYREF
  __int64 v322; // [rsp+58h] [rbp-200h] BYREF
  __int64 *v323; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v324; // [rsp+68h] [rbp-1F0h] BYREF
  unsigned __int64 v325; // [rsp+70h] [rbp-1E8h] BYREF
  void *v326; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 (__fastcall **v327)(); // [rsp+80h] [rbp-1D8h] BYREF
  unsigned __int64 v328; // [rsp+88h] [rbp-1D0h]
  void **v329; // [rsp+90h] [rbp-1C8h]
  void *v330; // [rsp+98h] [rbp-1C0h]
  __int64 v331; // [rsp+A8h] [rbp-1B0h] BYREF
  void *ptr; // [rsp+110h] [rbp-148h] BYREF
  unsigned __int64 v333; // [rsp+118h] [rbp-140h] BYREF
  __int64 (__fastcall **v334)(); // [rsp+120h] [rbp-138h] BYREF
  unsigned __int8 *v335; // [rsp+130h] [rbp-128h] BYREF
  char v336; // [rsp+188h] [rbp-D0h]
  unsigned int v337; // [rsp+190h] [rbp-C8h]
  char v338; // [rsp+194h] [rbp-C4h]
  __int64 v339; // [rsp+228h] [rbp-30h]
  __int64 v340; // [rsp+230h] [rbp-28h]
  __int64 v341; // [rsp+238h] [rbp-20h]
  __int64 v342; // [rsp+240h] [rbp-18h]
  __int64 v343; // [rsp+248h] [rbp-10h]
  __int64 v344; // [rsp+250h] [rbp-8h]

  if ( !*(_DWORD *)a1 )
  {
    v344 = v15;
    v17 = a6;
    v343 = v14;
    v342 = v13;
    v341 = v12;
    v20 = (int *)a3;
    v340 = v11;
    v21 = (__int64 *)a2;
    v339 = v10;
    LODWORD(v289) = (_DWORD)a5;
    v322 = *(_QWORD *)(a3 + 16);
    if ( a6 != 1 )
    {
      v22 = *(unsigned int *)(a1 + 184);
      v23 = (unsigned int)v22;
      switch ( (int)v22 )
      {
        case 0:
          if ( a6 )
            goto LABEL_137;
          sub_1A12440(a2, *(unsigned int *)(a4 + 4), v322, (unsigned int)v22, (__int64)a5, 0);
          break;
        case 1:
          goto LABEL_71;
        case 2:
          goto LABEL_72;
        case 3:
          goto LABEL_26;
        case 4:
          goto LABEL_28;
        case 5:
          goto LABEL_29;
        case 6:
          goto LABEL_30;
        case 7:
          goto LABEL_31;
        case 8:
          goto LABEL_32;
        case 9:
          goto LABEL_35;
        case 10:
        case 11:
          v24 = nullptr;
          goto LABEL_96;
        case 12:
          v24 = nullptr;
          goto LABEL_105;
        case 13:
        case 29:
          v24 = nullptr;
          goto LABEL_107;
        case 14:
          v24 = nullptr;
          goto LABEL_99;
        case 15:
          goto LABEL_36;
        case 16:
          goto LABEL_40;
        case 17:
          goto LABEL_73;
        case 18:
          v24 = nullptr;
          goto LABEL_115;
        case 19:
          v24 = nullptr;
          goto LABEL_117;
        case 20:
          v24 = nullptr;
          goto LABEL_84;
        case 21:
          goto LABEL_63;
        case 22:
          v24 = nullptr;
          goto LABEL_94;
        case 23:
          v24 = nullptr;
          goto LABEL_75;
        case 25:
          goto LABEL_65;
        case 26:
          goto LABEL_45;
        case 27:
          goto LABEL_49;
        case 28:
          goto LABEL_50;
        case 30:
        case 31:
          v326 = nullptr;
          if ( !a6 )
            goto LABEL_119;
          goto LABEL_139;
        case 32:
          goto LABEL_51;
        case 33:
          goto LABEL_57;
        case 34:
          goto LABEL_58;
        case 35:
          goto LABEL_60;
        case 37:
          v24 = nullptr;
          goto LABEL_82;
        case 38:
          goto LABEL_62;
        case 39:
          goto LABEL_61;
        case 40:
          goto LABEL_64;
        default:
          goto LABEL_20;
      }
      goto LABEL_20;
    }
    v24 = (_WORD *)*a5;
    if ( (*(_WORD *)*a5 & 0x1FF) == 0x35 )
    {
      a3 = *((_QWORD *)v24 + 2);
      if ( (unsigned int)((*((_QWORD *)v24 + 3) - a3) >> 3) == 1 )
        v24 = *(_WORD **)a3;
    }
    v25 = *((_QWORD *)v24 + 1);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 248) + 19080LL) == v25 )
    {
      v307 = a4;
      v62 = sub_C1BEF0((__int64)&v322, a2, a3, v25);
      a2 = (__int64)v24;
      v63 = sub_1BE7B70(v21, v24, v62, 0, &ptr, 0);
      v17 = 1;
      a4 = v307;
      if ( v63 )
      {
        a2 = (__int64)v24;
        v64 = sub_1BD6F50(v21, v24, ptr, v63);
        v17 = 1;
        a4 = v307;
        v65 = v64 & 0xFFFFFFFFFFFFFFFELL;
        if ( v65 )
          v24 = (_WORD *)v65;
      }
    }
    v22 = *(unsigned int *)(a1 + 184);
    v23 = (unsigned int)v22;
    switch ( (int)v22 )
    {
      case 0:
LABEL_137:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0x1345u, 0);
        v173 = sub_EEC140(a5[a6 - 1]);
        v327 = (__int64 (__fastcall **)())__PAIR64__(v173, sub_EEB7E0(*a5, (__int64)(v21 + 1), *(double *)a7.m128_u64));
        goto LABEL_59;
      case 1:
LABEL_71:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0x1008u, 0);
        LODWORD(v325) = 1;
        v85 = sub_1587D10((__int64)&ptr, (int *)&v325);
        v86 = *((void **)v20 + 2);
        goto LABEL_46;
      case 2:
LABEL_72:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xC03u, 0);
        LODWORD(v327) = 0;
        goto LABEL_27;
      case 3:
LABEL_26:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xC03u, 0);
        LODWORD(v327) = 1;
        goto LABEL_27;
      case 4:
LABEL_28:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xC03u, 0);
        LODWORD(v327) = 2;
LABEL_27:
        sub_1587D10((__int64)&ptr, (int *)&v327);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 5:
LABEL_29:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xC01u, 0);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 6:
LABEL_30:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xC06u, 0);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 7:
LABEL_31:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xC00u, 0);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 8:
LABEL_32:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xC04u, 0);
        sub_15F7200(&ptr);
        v66 = sub_EEB7E0(*a5, (__int64)(v21 + 1), *(double *)a7.m128_u64);
        sub_168B9F0((__int64)&ptr, v21 + 1, v66, 0x169Eu, 0);
        v67 = j__strlen("u8");
        v68 = sub_EEB7E0(*a5, (__int64)(v21 + 1), *(double *)a7.m128_u64);
        sub_9EC740((__int64)&v327, v68, "u8", v67, 0);
        sub_1589170((__int64)&ptr, &v327);
        if ( v330 != &v331 )
          operator delete(v330);
        goto LABEL_70;
      case 9:
LABEL_35:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xC05u, 0);
        LOBYTE(v326) = sub_F65140(*(_QWORD *)(v322 & 0xFFFFFFFFFFFFFFF0LL), (__int64)(v21 + 1), v69, v70, v71, v72);
        v73 = sub_1588420((__int64)&ptr, (unsigned __int8 *)&v326);
        LODWORD(v327) = *(_BYTE *)(v21[29] + 1) >> 7;
        sub_1588370(v73, (unsigned int *)&v327);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 10:
      case 11:
LABEL_96:
        v140 = (_DWORD)v22 == 10;
        v141 = *(_DWORD *)(a4 + 4);
        v142 = v21 + 1;
        v143 = 3 * !v140 + 3071;
        goto LABEL_97;
      case 12:
LABEL_105:
        v159 = sub_C1BEF0((__int64)&v322, a2, v22, v23);
        sub_1BE7B70(v21, v24, v159, 1, &ptr, 0);
        goto LABEL_20;
      case 13:
      case 29:
LABEL_107:
        v160 = *(_DWORD *)(a1 + 188);
        if ( v160 != 2 )
        {
          if ( v160 == 3 )
          {
            v299 = a4;
            sub_1BF27B0(a1 + 192, v21, *(unsigned int *)(a4 + 4), &v323);
            if ( (*(_BYTE *)(*v323 + 83) & 8) != 0 )
            {
              v201 = *(unsigned int **)(*v323 + 128);
              v202 = 0;
              v203 = *((_BYTE *)v201 + 4);
              if ( v203 )
              {
                v202 = *(_QWORD *)&v201[2 * *v201 + 2];
                v203 = v202 != 0;
              }
            }
            else
            {
              v203 = 0;
              v202 = 0;
            }
            sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v299 + 4), 0x148Eu, 0);
            v324 = *((_QWORD *)v24 + 1);
            v204 = sub_162B6D0((__int64)&ptr, &v324);
            v325 = sub_C1BEF0((__int64)&v322, (__int64)&v324, v205, v206);
            v207 = sub_162B6D0(v204, (__int64 *)&v325);
            LOBYTE(v321) = v203;
            v208 = sub_1588420(v207, (unsigned __int8 *)&v321);
            if ( v202 )
            {
              v209 = *(_DWORD *)(v202 + 16) * ((*(_WORD *)(v202 + 2) >> 6) & 7u);
              v327 = (__int64 (__fastcall **)())(v202 + 4LL * *(unsigned int *)(v202 + 4) + 20);
              v328 = v209;
            }
            else
            {
              v327 = nullptr;
              v328 = 0;
            }
            v210 = sub_166BAF0(v208, (__int64)&v327);
            v326 = (void *)sub_EEC8C0(*a5, (__int64)&v327, *(double *)a7.m128_u64);
            sub_1587DB0(v210, (__int64 *)&v326);
            sub_15F7200(&ptr);
            sub_18F5080((__int64)v21, *v323);
          }
          else if ( v160 == 1 )
          {
            v310 = a4;
            sub_1C00200(
              (unsigned int)&ptr,
              a1 + 192,
              (_DWORD)v21,
              0,
              (_DWORD)a5,
              a6,
              0,
              (__int64)sub_1837230,
              (__int64)&v327);
            v326 = (void *)sub_EEC8C0(*a5, a1 + 192, *(double *)a7.m128_u64);
            v325 = *((_QWORD *)v24 + 1);
            v163 = sub_C1BEF0((__int64)&v322, a1 + 192, v161, v162);
            LODWORD(v328) = 5302;
            v164 = *(unsigned int *)(v310 + 4);
            v329 = &v326;
            v327 = off_2BC71E8;
            v330 = &v325;
            if ( !(unsigned __int8)sub_1E63C20(v21, v164, v163, 1, &v327) )
            {
              sub_168B9F0((__int64)&v327, v21 + 1, *(_DWORD *)(v310 + 4), 0x14B5u, 0);
              LOBYTE(v323) = *v20 == 3;
              v231 = sub_1588420((__int64)&v327, (unsigned __int8 *)&v323);
              v324 = *((_QWORD *)v24 + 1);
              v232 = sub_162B6D0(v231, &v324);
              v326 = (void *)sub_EEC8C0(*a5, (__int64)&v324, *(double *)a7.m128_u64);
              v233 = sub_1587DB0(v232, (__int64 *)&v326);
              v325 = sub_C1BEF0((__int64)&v322, (__int64)&v326, v234, v235);
              sub_162B6D0(v233, (__int64 *)&v325);
              sub_15F7200(&v327);
            }
            v165 = j__strlen(&byte_22F0C30);
            sub_1C007F0(a1 + 192, (_DWORD)v21, (_DWORD)a5, a6, (_DWORD)ptr, v333, (__int64)&byte_22F0C30, v165, 0);
            if ( ptr != &v334 )
              free(ptr);
          }
          goto LABEL_20;
        }
        v316 = a4;
        v319 = a1 + 192;
        v312 = v22;
        v211 = (__int64)(v21 + 1);
        v301 = j__strlen(&byte_22F0C30);
        if ( v312 == 29 )
        {
          sub_168B9B0((__int64)&v327, v211, 5210);
          sub_AE9DF0((unsigned __int8 **)&v327, *((_QWORD *)v24 + 1), 8u);
          v236 = v322;
          sub_AE9DF0((unsigned __int8 **)&v327, v322, 8u);
          v237 = (void *)sub_EEC8C0(*a5, v236, *(double *)a7.m128_u64);
          LOBYTE(v333) = 1;
          ptr = v237;
          sub_AEC610((__int64 *)&v327, (__int64 *)&ptr);
          LODWORD(ptr) = *(_DWORD *)(v316 + 4);
          sub_1582CA0((__int64)&v333, (_BYTE **)&v327);
          sub_1C022A0(
            v319,
            (unsigned int)&ptr,
            (_DWORD)v21,
            2,
            (_DWORD)a5,
            a6,
            (__int64)&byte_22F0C30,
            v301,
            0,
            (__int64)sub_16A7620,
            (__int64)&v326);
          goto LABEL_130;
        }
        sub_168B9B0((__int64)&v327, v211, 4917);
        sub_AE9DF0((unsigned __int8 **)&v327, v322, 8u);
        v212 = *((_QWORD *)v24 + 1);
        sub_AE9DF0((unsigned __int8 **)&v327, v212, 8u);
        v213 = (void *)sub_EEC8C0(*a5, v212, *(double *)a7.m128_u64);
        LOBYTE(v333) = 1;
        ptr = v213;
        sub_AEC610((__int64 *)&v327, (__int64 *)&ptr);
        LODWORD(ptr) = *(_DWORD *)(v316 + 4);
        sub_1582CA0((__int64)&v333, (_BYTE **)&v327);
        sub_1C022A0(
          v319,
          (unsigned int)&ptr,
          (_DWORD)v21,
          2,
          (_DWORD)a5,
          a6,
          (__int64)&byte_22F0C30,
          v301,
          0,
          (__int64)sub_16A7620,
          (__int64)&v326);
        if ( !v333 || !v334 )
          goto LABEL_133;
        sub_1580C40((unsigned __int64)v334, v333);
        v110 = v327;
        if ( v327 )
          goto LABEL_79;
        goto LABEL_20;
      case 14:
LABEL_99:
        v146 = v21 + 1;
        v147 = 4121;
        if ( (*(_WORD *)*a5 & 0x1FF) != 0x35 )
          goto LABEL_100;
        sub_168B9F0((__int64)&ptr, v146, *(_DWORD *)(a4 + 4), 0x1018u, 0);
        v226 = sub_C1BEF0((__int64)&v322, (__int64)v146, v224, v225);
        LOBYTE(v227) = 1;
        if ( (v226 & 4) == 0 )
          v227 = (*(_QWORD *)&byte_8[v226 & 0xFFFFFFFFFFFFFFF0LL] >> 2) & 1LL;
        LOBYTE(v325) = v227;
        v228 = sub_1588420((__int64)&ptr, (unsigned __int8 *)&v325);
        v326 = (void *)sub_C1BEF0((__int64)&v322, (__int64)&v325, v229, v230);
        v83 = sub_162B6D0(v228, (__int64 *)&v326);
        goto LABEL_44;
      case 15:
LABEL_36:
        v291 = a4;
        v74 = sub_BFEF90(*a5);
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v291 + 4), 0x1340u, 0);
        LOBYTE(v75) = 1;
        if ( (v322 & 4) == 0 )
          v75 = (*(_QWORD *)&byte_8[v322 & 0xFFFFFFFFFFFFFFF0LL] >> 2) & 1LL;
        LOBYTE(v324) = v75;
        v76 = sub_1588420((__int64)&ptr, (unsigned __int8 *)&v324);
        if ( v74 )
        {
          v326 = *(void **)(v74 + 40);
          v77 = sub_15894B0(v76, (__int64 *)&v326);
          LOBYTE(v325) = 1;
          v78 = sub_1588420(v77, (unsigned __int8 *)&v325);
          v327 = (__int64 (__fastcall **)())sub_EEC8C0(*a5, (__int64)&v325, *(double *)a7.m128_u64);
          sub_1587DB0(v78, (__int64 *)&v327);
          sub_15F7200(&ptr);
          sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v74 + 24), 0x16B0u, 0);
          sub_15F7200(&ptr);
        }
        else
        {
          v326 = nullptr;
          v200 = sub_15894B0(v76, (__int64 *)&v326);
          v156 = (void **)&v325;
          LOBYTE(v325) = 0;
          v157 = sub_1588420(v200, (unsigned __int8 *)&v325);
LABEL_103:
          v158 = v157;
          v327 = (__int64 (__fastcall **)())sub_EEC8C0(*a5, (__int64)v156, *(double *)a7.m128_u64);
          sub_1587DB0(v158, (__int64 *)&v327);
LABEL_70:
          sub_15F7200(&ptr);
        }
        goto LABEL_20;
      case 16:
LABEL_40:
        v79 = *(_DWORD *)(a4 + 4);
        v80 = v21 + 1;
        v81 = 4931;
        goto LABEL_41;
      case 17:
LABEL_73:
        v79 = *(_DWORD *)(a4 + 4);
        v80 = v21 + 1;
        v81 = 4930;
LABEL_41:
        sub_168B9F0((__int64)&ptr, v80, v79, v81, 0);
        LOBYTE(v82) = 1;
        if ( (v322 & 4) == 0 )
          v82 = (*(_QWORD *)&byte_8[v322 & 0xFFFFFFFFFFFFFFF0LL] >> 2) & 1LL;
        LOBYTE(v326) = v82;
        v83 = sub_1588420((__int64)&ptr, (unsigned __int8 *)&v326);
LABEL_44:
        v84 = v83;
        v327 = (__int64 (__fastcall **)())sub_EEC8C0(*a5, (__int64)&v326, *(double *)a7.m128_u64);
        sub_1587DB0(v84, (__int64 *)&v327);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 18:
LABEL_115:
        v146 = v21 + 1;
        v147 = 4122;
LABEL_100:
        sub_168B9F0((__int64)&ptr, v146, *(_DWORD *)(a4 + 4), v147, 0);
        v150 = sub_C1BEF0((__int64)&v322, (__int64)v146, v148, v149);
        LOBYTE(v151) = 1;
        if ( (v150 & 4) == 0 )
          v151 = (*(_QWORD *)&byte_8[v150 & 0xFFFFFFFFFFFFFFF0LL] >> 2) & 1LL;
        LOBYTE(v324) = v151;
        v152 = sub_1588420((__int64)&ptr, (unsigned __int8 *)&v324);
        v325 = sub_C1BEF0((__int64)&v322, (__int64)&v324, v153, v154);
        v155 = sub_162B6D0(v152, (__int64 *)&v325);
        v156 = &v326;
        v326 = *((void **)v24 + 1);
        v157 = sub_162B6D0(v155, (__int64 *)&v326);
        goto LABEL_103;
      case 19:
LABEL_117:
        v141 = *(_DWORD *)(a4 + 4);
        v142 = v21 + 1;
        v143 = 4123;
LABEL_97:
        sub_168B9F0((__int64)&ptr, v142, v141, v143, 0);
        v325 = sub_C1BEF0((__int64)&v322, (__int64)v142, v144, v145);
        v85 = sub_162B6D0((__int64)&ptr, (__int64 *)&v325);
        v86 = *((void **)v24 + 1);
        goto LABEL_46;
      case 20:
LABEL_84:
        v296 = a4;
        v325 = *((_QWORD *)v24 + 1);
        v113 = sub_C1BEF0((__int64)&v322, a2, v22, v23);
        v114 = 0;
        v115 = v296;
        v326 = (void *)v113;
        v116 = *(_QWORD *)&byte_8[v113 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v116 & 8) != 0 )
          v114 = *(__int64 *)((char *)&qword_18 + (v116 & 0xFFFFFFFFFFFFFFF0LL));
        v117 = v114 | ((unsigned __int8)v116 | (unsigned __int8)v113) & 7;
        v118 = *(_QWORD *)&byte_8[v325 & 0xFFFFFFFFFFFFFFF0LL];
        v119 = 0;
        if ( (v118 & 8) != 0 )
          v119 = *(__int64 *)((char *)&qword_18 + (v118 & 0xFFFFFFFFFFFFFFF0LL));
        v120 = (unsigned int)v117 >> 9;
        v121 = v119 | ((unsigned __int8)v325 | (unsigned __int8)v118) & 7;
        if ( (v117 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v122 = v121 & ~(v117 & 7);
          if ( ((v122 >> 4) & 3) == ((v117 >> 4) & 3) )
            v122 = v121 & ~(v117 & 7) & 0xFFFFFFFFFFFFFFCFLL;
          if ( ((v122 >> 6) & 7) == ((v117 >> 6) & 7) )
            v122 &= 0xFFFFFFFFFFFFFE3FLL;
          if ( (unsigned int)v122 >> 9 == v120 )
            v122 &= 0xFFFFFFFF000001FFLL;
          if ( HIDWORD(v117) == HIDWORD(v122) )
            v122 = (unsigned int)v122;
        }
        else
        {
          v122 = v121 & ~v117;
        }
        v123 = (unsigned int)v121 >> 9;
        if ( v123 != v120 )
        {
          v124 = sub_F56A30(v120, v123, v21[31]);
          v115 = v296;
          if ( !v124 )
          {
            sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v296 + 4), 0x133Cu, 0);
            v125 = sub_1605D30((__int64)&ptr, (__int64 *)&v326);
            v126 = sub_1605D30(v125, (__int64 *)&v325);
            v87 = &v324;
            LODWORD(v324) = 1;
            v89 = sub_1587D10(v126, (int *)&v324);
LABEL_48:
            v90 = v89;
            v327 = (__int64 (__fastcall **)())sub_EEC8C0(*a5, (__int64)v87, *(double *)a7.m128_u64);
            sub_1587DB0(v90, (__int64 *)&v327);
            sub_15F7200(&ptr);
            goto LABEL_20;
          }
        }
        v176 = *(_DWORD *)(v115 + 4);
        if ( !v122 )
        {
          sub_168B9F0((__int64)&ptr, v21 + 1, v176, 0x133Cu, 0);
          v198 = sub_1605D30((__int64)&ptr, (__int64 *)&v326);
          v199 = sub_1605D30(v198, (__int64 *)&v325);
          v87 = &v324;
          LODWORD(v324) = 2;
          v89 = sub_1587D10(v199, (int *)&v324);
          goto LABEL_48;
        }
        sub_168B9F0((__int64)&ptr, v21 + 1, v176, 0x133Cu, 0);
        v177 = sub_1605D30((__int64)&ptr, (__int64 *)&v326);
        v178 = sub_1605D30(v177, (__int64 *)&v325);
        LODWORD(v323) = 0;
        v179 = sub_1587D10(v178, (int *)&v323);
        v180 = v179;
        if ( *(_BYTE *)(v179 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v179 + 32), v122 & 7, 7u);
        }
        else if ( *(_BYTE *)(v179 + 132) )
        {
          v243 = sub_168B9E0((_QWORD *)v179);
          v247 = v122 & 7;
          v305 = v243;
          v248 = *(__int64 (__fastcall ***)())(v180 + 16);
          if ( v248 )
          {
            v248 = (__int64 (__fastcall **)())(*((__int64 (__fastcall **)(_QWORD, __int64 **, __int64 (__fastcall *)(), __int64, unsigned __int64))*v248
                                               + 4))(
                                                *(_QWORD *)(v180 + 16),
                                                &v323,
                                                *v248,
                                                v245,
                                                v122 & 7);
            v247 = v122 & 7;
          }
          v313 = v247;
          v327 = v248;
          v249 = sub_1587BC0(v305, (__int64 *)&v327, v244, v245, v247, v246);
          sub_AE9DF0((unsigned __int8 **)(*v249 + 32LL * *(unsigned int *)(v180 + 128) + 8), v313, 7u);
        }
        LODWORD(v324) = v122 & 7;
        v181 = sub_16CF160(v180, (unsigned int *)&v324);
        v327 = (__int64 (__fastcall **)())sub_EEC8C0(*a5, (__int64)&v324, *(double *)a7.m128_u64);
        sub_1587DB0(v181, (__int64 *)&v327);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 21:
LABEL_63:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0x133Fu, 0);
        v87 = &v322;
        v89 = sub_1605D30((__int64)&ptr, &v322);
        goto LABEL_48;
      case 22:
LABEL_94:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0x133Du, 0);
        v325 = sub_C1BEF0((__int64)&v322, (__int64)(v21 + 1), v127, v128);
        v297 = sub_162B6D0((__int64)&ptr, (__int64 *)&v325);
        v131 = sub_C1BEF0((__int64)&v322, (__int64)&v325, v129, v130);
        LOBYTE(v323) = sub_F62670(*(_QWORD *)(v131 & 0xFFFFFFFFFFFFFFF0LL), nullptr, v132, v133, v134, v135);
        v136 = sub_1588420(v297, (unsigned __int8 *)&v323);
        LOBYTE(v324) = ((*((_BYTE *)v24 + 1) >> 1) & 3) == 1;
        v137 = sub_1588420(v136, (unsigned __int8 *)&v324);
        v326 = *((void **)v24 + 1);
        v138 = sub_162B6D0(v137, (__int64 *)&v326);
        v327 = (__int64 (__fastcall **)())sub_EEC8C0(*a5, (__int64)&v326, *(double *)a7.m128_u64);
        sub_1587DB0(v138, (__int64 *)&v327);
        sub_15F7200(&ptr);
        sub_1A0F510((__int64)v21, (__int64)v20, *a5, v139);
        goto LABEL_20;
      case 23:
LABEL_75:
        v308 = a4;
        v106 = *((_QWORD *)v24 + 1);
        sub_168B9B0((__int64)&ptr, (__int64)(v21 + 1), 3986);
        sub_AE9DF0((unsigned __int8 **)&ptr, *v20, 2u);
        sub_AE9DF0((unsigned __int8 **)&ptr, v322, 8u);
        sub_AE9DF0((unsigned __int8 **)&ptr, ((*((_BYTE *)v24 + 1) >> 1) & 3) == 1, 2u);
        sub_AE9DF0((unsigned __int8 **)&ptr, v106, 8u);
        v107 = (__int64 (__fastcall **)())sub_EEC8C0(*a5, v106, *(double *)a7.m128_u64);
        LOBYTE(v328) = 1;
        v327 = v107;
        sub_AEC610((__int64 *)&ptr, (__int64 *)&v327);
        sub_1582CA0((__int64)&v327, (_BYTE **)&ptr);
        v108 = v308;
        if ( ptr && v333 )
        {
          sub_1580C40(v333, (unsigned __int64)ptr);
          v108 = v308;
        }
        v309 = v108;
        sub_1BE63A0(v21, &v327, v106, v322);
        sub_168CDE0((__int64)&ptr, v21 + 1, *(_DWORD *)(v309 + 4), (__int64)&v327, 0);
        sub_15F7200(&ptr);
        sub_1A0F510((__int64)v21, (__int64)v20, *a5, v109);
        v110 = v327;
        if ( !v327 )
          goto LABEL_20;
        goto LABEL_79;
      case 25:
LABEL_65:
        v327 = nullptr;
        v99 = *a5;
        if ( (*(_WORD *)*a5 & 0x1FF) == 0x35
          && (v100 = *(unsigned __int64 **)(v99 + 16),
              (unsigned int)((__int64)(*(_QWORD *)(v99 + 24) - (_QWORD)v100) >> 3)) )
        {
          v294 = a4;
          v101 = sub_BFB220(*a5);
          v102 = sub_EEC140(*v100);
          v103 = v294;
          v327 = (__int64 (__fastcall **)())__PAIR64__(v101, v102);
        }
        else
        {
          v298 = a4;
          v182 = sub_EEC140(a5[a6 - 1]);
          v102 = sub_EEC140(v99);
          v103 = v298;
          v327 = (__int64 (__fastcall **)())__PAIR64__(v182, v102);
        }
        v295 = v103;
        v104 = v21 + 1;
        LODWORD(v327) = sub_15F0EF0((__int64)v21, v102, 0, (__m128i)a7, *(double *)a8.m128_u64);
        v105 = *(_DWORD *)(v295 + 4);
        if ( *(_BYTE *)(v295 + 1) <= 3u )
        {
          sub_168B9F0((__int64)&ptr, v104, v105, 0xE9Du, 0);
          LODWORD(v326) = 2;
          v183 = sub_1587D10((__int64)&ptr, (int *)&v326);
          sub_15884C0(v183, (__int64 *)&v327);
        }
        else
        {
          sub_168B9F0((__int64)&ptr, v104, v105, 0xD16u, 0);
          sub_15884C0((__int64)&ptr, (__int64 *)&v327);
        }
        goto LABEL_70;
      case 26:
LABEL_45:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0x1008u, 0);
        LODWORD(v325) = 0;
        v85 = sub_1587D10((__int64)&ptr, (int *)&v325);
        v86 = *((void **)v20 + 2);
LABEL_46:
        v326 = v86;
        v87 = (__int64 *)&v326;
        p_ptr = (void **)v85;
        goto LABEL_47;
      case 27:
LABEL_49:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0x133Eu, 0);
        v87 = (__int64 *)&v326;
        p_ptr = &ptr;
        v326 = (void *)sub_C1BEF0((__int64)&v322, (__int64)(v21 + 1), v91, v92);
LABEL_47:
        v89 = sub_162B6D0((__int64)p_ptr, (__int64 *)&v326);
        goto LABEL_48;
      case 28:
LABEL_50:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xF96u, 0);
        LOBYTE(v326) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v322 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL) == 48;
        v93 = sub_1588420((__int64)&ptr, (unsigned __int8 *)&v326);
        v87 = &v322;
        v89 = sub_1605D30(v93, &v322);
        goto LABEL_48;
      case 30:
      case 31:
        v326 = nullptr;
LABEL_139:
        v315 = a4;
        v311 = v17;
        v302 = v22;
        v174 = sub_EEC140(a5[a6 - 1]);
        v175 = sub_EEB7E0(*a5, a2, *(double *)a7.m128_u64);
        a4 = v315;
        v17 = v311;
        LODWORD(v22) = v302;
        v326 = (void *)__PAIR64__(v174, v175);
LABEL_119:
        if ( (_DWORD)v22 == 31 )
        {
          v289 = *(_QWORD *)(*a5 + 16);
          v17 = (*(_QWORD *)(*a5 + 24) - v289) >> 3;
        }
        v166 = *(_DWORD *)(a1 + 188);
        if ( v166 == 2 )
        {
          v320 = a4;
          v317 = v17;
          v223 = j__strlen(&byte_22F0C30);
          sub_168B9B0((__int64)&v327, (__int64)(v21 + 1), 4744);
          sub_AE9DF0((unsigned __int8 **)&v327, v322, 8u);
          LOBYTE(v333) = 1;
          ptr = v326;
          sub_AEC610((__int64 *)&v327, (__int64 *)&ptr);
          LODWORD(ptr) = *(_DWORD *)(v320 + 4);
          sub_1582CA0((__int64)&v333, (_BYTE **)&v327);
          v170 = 2;
          v169 = a1 + 192;
          v288 = v223;
          v171 = v289;
          v172 = v317;
LABEL_129:
          sub_1C022A0(
            v169,
            (unsigned int)&ptr,
            (_DWORD)v21,
            v170,
            v171,
            v172,
            (__int64)&byte_22F0C30,
            v288,
            0,
            (__int64)sub_16A7620,
            (__int64)&v325);
LABEL_130:
          if ( v333 && v334 )
            sub_1580C40((unsigned __int64)v334, v333);
LABEL_133:
          v110 = v327;
          if ( v327 )
          {
LABEL_79:
            if ( v328 )
              sub_1580C40(v328, (unsigned __int64)v110);
          }
          goto LABEL_20;
        }
        if ( v166 != 3 )
        {
          if ( v166 != 1 )
            goto LABEL_20;
          if ( *(_BYTE *)a4 == 3 && (((*v20 - 6) & 0xFFFFFFFB) == 0 || *v20 == 21) )
          {
            v167 = v21[68];
            if ( (*(_BYTE *)(v167 + 8) & 0x7F) == 0x26 )
            {
              v324 = 0;
              if ( (*(_BYTE *)(v167 + 15) & 0x20) != 0 )
              {
                v26 = *(_QWORD *)(v167 + 104);
                if ( v26 )
                {
                  v290 = a4;
                  v27 = sub_B9A2C0(v26);
                  a4 = v290;
                  v324 = v27;
                }
              }
              v28 = *(_DWORD *)(a4 + 4);
              v29 = v21 + 1;
              if ( *v20 == 10 )
              {
                sub_168B9F0((__int64)&ptr, v29, v28, 0x105Bu, 0);
                v260 = 2;
                if ( !v324 )
                  v260 = (*(_BYTE *)(v167 - 43) & 2) != 0;
                v321 = v260;
                v261 = sub_1587D10((__int64)&ptr, &v321);
                v262 = v21[31];
                v263 = v261;
                v264 = sub_B72690(v167);
                if ( !v264 )
                  BUG();
                v268 = *(_QWORD *)(v264 - 16);
                if ( v268 )
                  v269 = v268 & 0xFFFFFFFFFFFFFFF0LL;
                else
                  v269 = sub_A7AA70(v262, v264 - 64, 0, v265, v266, v267);
                v325 = v269;
                v270 = sub_162B6D0(v263, (__int64 *)&v325);
                LODWORD(v323) = 0;
                v271 = sub_1587D10(v270, (int *)&v323);
                v327 = *((__int64 (__fastcall ***)())v20 + 2);
                v272 = sub_162B6D0(v271, (__int64 *)&v327);
                sub_184B8A0(v272, &v324);
                sub_15F7200(&ptr);
                v275 = *(_QWORD *)(**(_QWORD **)((*((_QWORD *)v20 + 4) & 0xFFFFFFFFFFFFFFF8LL) + 16)
                                 & 0xFFFFFFFFFFFFFFF0LL);
                v276 = *(_QWORD *)(v275 + 8) & 7LL;
                v277 = v276 | (*(__int64 *)(v275 + 8) >> 3) & 1;
                if ( v277 )
                  v275 = sub_F64F00(
                           **(_QWORD **)((*((_QWORD *)v20 + 4) & 0xFFFFFFFFFFFFFFF8LL) + 16),
                           (__int64)&v324,
                           v276,
                           v277,
                           v273);
                v278 = sub_F60F10(
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v275 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                         (__int64)&v324,
                         v276,
                         v277,
                         v273,
                         v274);
                sub_168B9F0((__int64)&ptr, v21 + 1, *((_DWORD *)v278 + 6), 0x188Bu, 0);
                v327 = (__int64 (__fastcall **)())sub_A7AC20(v21[31], (__int64)v278, v279, v280, v281, v282);
                sub_162B6D0((__int64)&ptr, (__int64 *)&v327);
                sub_15F7200(&ptr);
              }
              else
              {
                sub_168B9F0((__int64)&ptr, v29, v28, 0x105Bu, 0);
                v30 = 2;
                if ( !v324 )
                  v30 = (*(_BYTE *)(v167 - 43) & 2) != 0;
                v321 = v30;
                v31 = sub_1587D10((__int64)&ptr, &v321);
                v32 = v21[31];
                v33 = v31;
                v34 = sub_B72690(v167);
                if ( !v34 )
                  BUG();
                v38 = *(_QWORD *)(v34 - 16);
                if ( v38 )
                  v39 = v38 & 0xFFFFFFFFFFFFFFF0LL;
                else
                  v39 = sub_A7AA70(v32, v34 - 64, 0, v35, v36, v37);
                v325 = v39;
                v40 = sub_162B6D0(v33, (__int64 *)&v325);
                LODWORD(v323) = 1;
                sub_1587D10(v40, (int *)&v323);
                v327 = (__int64 (__fastcall **)())sub_1A0B5D0((__int64)v20);
                v42 = sub_15894B0(v41, (__int64 *)&v327);
                sub_184B8A0(v42, &v324);
                sub_15F7200(&ptr);
                v43 = sub_1A0B620((__int64)v20);
                sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v43 + 24), 0x17C0u, 0);
                sub_15F7200(&ptr);
                v48 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL);
                v49 = *v48;
                if ( *(_BYTE *)(*v48 + 16) == 48 )
                {
                  v50 = sub_F60F10(*v48, (__int64)(v21 + 1), v44, v45, v46, v47);
                  sub_168B9F0((__int64)&ptr, v21 + 1, *((_DWORD *)v50 + 6), 0x188Bu, 0);
                  v51 = v21[31];
                  v56 = sub_F60F10(v49, (__int64)(v21 + 1), v52, v53, v54, v55);
                  v327 = (__int64 (__fastcall **)())sub_A7AC20(v51, (__int64)v56, v57, v58, v59, v60);
                  sub_162B6D0((__int64)&ptr, (__int64 *)&v327);
                  sub_15F7200(&ptr);
                }
              }
              goto LABEL_20;
            }
          }
          v318 = a4;
          v314 = v17;
          v168 = j__strlen(&byte_22F0C30);
          sub_168B9B0((__int64)&v327, (__int64)(v21 + 1), 4763);
          sub_AE9DF0((unsigned __int8 **)&v327, v322, 8u);
          LOBYTE(v333) = 1;
          ptr = v326;
          sub_AEC610((__int64 *)&v327, (__int64 *)&ptr);
          LODWORD(ptr) = *(_DWORD *)(v318 + 4);
          sub_1582CA0((__int64)&v333, (_BYTE **)&v327);
          v169 = a1 + 192;
          v170 = 0;
          v288 = v168;
          v171 = v289;
          v172 = v314;
          goto LABEL_129;
        }
        v300 = a4;
        if ( (unsigned int)sub_1BF27B0(a1 + 192, v21, *(unsigned int *)(a4 + 4), &v325) != 3 )
        {
          sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v300 + 4), 0x1291u, 0);
          v283 = sub_1605D30((__int64)&ptr, &v322);
          sub_15884C0(v283, (__int64 *)&v326);
          sub_15F7200(&ptr);
          return sub_1A24D50((unsigned int)&ptr, (unsigned int)&v326, v284, v285, v286, v287, a9, a10);
        }
        if ( sub_183DF10((__int64)v21, *(_BYTE **)v325) )
        {
          sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v300 + 4), 0x1294u, 0);
          v239 = sub_183C740((__int64)v21, *(_DWORD **)v325);
          v240 = (_BYTE *)v300;
          v241 = v239;
          if ( v336 )
          {
            sub_AE9DF0(&v335, v239, 2u);
            v240 = (_BYTE *)v300;
          }
          else if ( v338 )
          {
            v251 = sub_168B9E0(&ptr);
            v256 = v300;
            v257 = v251;
            v258 = v334;
            if ( v334 )
            {
              v258 = (__int64 (__fastcall **)())(*((__int64 (__fastcall **)(__int64 (__fastcall **)()))*v334 + 4))(v334);
              v256 = v300;
            }
            v306 = (_BYTE *)v256;
            v327 = v258;
            v259 = sub_1587BC0(v257, (__int64 *)&v327, v252, v253, v254, v255);
            sub_AE9DF0((unsigned __int8 **)(*v259 + 32LL * v337 + 8), v241, 2u);
            v240 = v306;
          }
          v304 = v240;
          v242 = sub_1605D30((__int64)&ptr, &v322);
          sub_15884C0(v242, (__int64 *)&v326);
          sub_15F7200(&ptr);
          v222 = v304;
          goto LABEL_183;
        }
        v214 = *(_DWORD *)(v300 + 4);
        if ( (*(_BYTE *)(*(_QWORD *)v325 + 83LL) & 8) != 0
          && (v215 = *(unsigned int **)(*(_QWORD *)v325 + 128LL), *((_BYTE *)v215 + 4)) )
        {
          v216 = *(_QWORD *)&v215[2 * *v215 + 2];
          sub_168B9F0((__int64)&ptr, v21 + 1, v214, 0x1291u, 0);
          v217 = sub_1605D30((__int64)&ptr, &v322);
          LOBYTE(v324) = v216 != 0;
          v218 = sub_1588420(v217, (unsigned __int8 *)&v324);
          v219 = (_BYTE *)v300;
          if ( v216 )
          {
            v220 = *(_DWORD *)(v216 + 16) * ((*(_WORD *)(v216 + 2) >> 6) & 7u);
            v327 = (__int64 (__fastcall **)())(v216 + 4LL * *(unsigned int *)(v216 + 4) + 20);
            v328 = v220;
LABEL_182:
            v303 = v219;
            v221 = sub_166BAF0(v218, (__int64)&v327);
            sub_15884C0(v221, (__int64 *)&v326);
            sub_15F7200(&ptr);
            v222 = v303;
LABEL_183:
            if ( *v222 == 3 && (*v20 == 21 || *v20 == 6) )
            {
              v238 = sub_1A0B620((__int64)v20);
              sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v238 + 24), 0x16F8u, 0);
              v327 = (__int64 (__fastcall **)())sub_1A0B620((__int64)v20);
              sub_1A0F7D0((__int64)&ptr, (__int64 *)&v327);
              sub_15F7200(&ptr);
            }
            sub_18F5080((__int64)v21, *(_QWORD *)v325);
            goto LABEL_20;
          }
        }
        else
        {
          sub_168B9F0((__int64)&ptr, v21 + 1, v214, 0x1291u, 0);
          v250 = sub_1605D30((__int64)&ptr, &v322);
          LOBYTE(v324) = 0;
          v218 = sub_1588420(v250, (unsigned __int8 *)&v324);
          v219 = (_BYTE *)v300;
        }
        v327 = nullptr;
        v328 = 0;
        goto LABEL_182;
      case 32:
LABEL_51:
        if ( *v20 == 6 )
        {
          v184 = v21[68];
          if ( (*(_BYTE *)(v184 + 8) & 0x7F) == 0x26 )
          {
            sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0x14F5u, 0);
            if ( (*(_BYTE *)(v184 + 15) & 0x20) == 0 || (v185 = 2, !*(_QWORD *)(v184 + 104)) )
              v185 = (*(_BYTE *)(v184 - 43) & 2) != 0;
            LODWORD(v324) = v185;
            v186 = sub_1587D10((__int64)&ptr, (int *)&v324);
            v187 = v21[31];
            v188 = v186;
            v189 = sub_B72690(v184);
            if ( !v189 )
              BUG();
            v193 = *(_QWORD *)(v189 - 16);
            if ( v193 )
              v194 = (void *)(v193 & 0xFFFFFFFFFFFFFFF0LL);
            else
              v194 = (void *)sub_A7AA70(v187, v189 - 64, 0, v190, v191, v192);
            v326 = v194;
            v195 = sub_162B6D0(v188, (__int64 *)&v326);
            LODWORD(v325) = 1;
            sub_1587D10(v195, (int *)&v325);
            v327 = (__int64 (__fastcall **)())sub_1A0B5D0((__int64)v20);
            sub_15894B0(v196, (__int64 *)&v327);
            sub_15F7200(&ptr);
            v197 = sub_1A0B620((__int64)v20);
            sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v197 + 24), 0x188Bu, 0);
            v327 = (__int64 (__fastcall **)())sub_1A0B5D0((__int64)v20);
            sub_15894B0((__int64)&ptr, (__int64 *)&v327);
            sub_15F7200(&ptr);
            goto LABEL_20;
          }
        }
        v292 = a4;
        v94 = (__int64 (__fastcall **)())sub_1A0B620((__int64)v20);
        if ( v94 && (v95 = *((_BYTE *)v94 + 28) & 0x7F, (unsigned int)v95 - 40 <= 6) )
        {
          v327 = v94;
          if ( v95 != 43 && *((char *)v94 + 97) < 0 )
          {
            sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v292 + 4), 0xDA2u, 0);
            sub_16065E0((__int64)&ptr, (__int64 *)&v327);
            sub_15F7200(&ptr);
LABEL_20:
            sub_1A140A0((__int64)v21, (__int64)v20);
            return 1;
          }
        }
        else
        {
          v327 = nullptr;
        }
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(v292 + 4), 0xE2Du, 0);
        v96 = sub_1605D30((__int64)&ptr, &v322);
        LOBYTE(v326) = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v322 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL) == 48;
        sub_1588420(v96, (unsigned __int8 *)&v326);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 33:
LABEL_57:
        sub_1E63CF0(v21, *(unsigned int *)(a4 + 4), *(_QWORD *)(a1 + 8056), 1, 3989);
        goto LABEL_20;
      case 34:
LABEL_58:
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0x1538u, 0);
        v327 = (__int64 (__fastcall **)())sub_EEC8C0(*a5, (__int64)(v21 + 1), *(double *)a7.m128_u64);
LABEL_59:
        sub_1587DB0((__int64)&ptr, (__int64 *)&v327);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 35:
LABEL_60:
        sub_1A1D3B0(v21, (__int64)v20, *a5, v23, *(double *)a7.m128_u64, a8);
        goto LABEL_20;
      case 37:
LABEL_82:
        v111 = *((_QWORD *)v24 + 2);
        v112 = sub_EEB7E0((unsigned __int64)v24, a2, *(double *)a7.m128_u64);
        sub_1BE0140(v21, v111, 1, v112);
        goto LABEL_20;
      case 38:
LABEL_62:
        v293 = a4;
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0x136Cu, 0);
        v327 = (__int64 (__fastcall **)())sub_EEC8C0(*a5, (__int64)(v21 + 1), *(double *)a7.m128_u64);
        sub_1587DB0((__int64)&ptr, (__int64 *)&v327);
        sub_15F7200(&ptr);
        sub_1BF27B0(a1 + 192, v21, *(unsigned int *)(v293 + 4), &v327);
        sub_168B9F0((__int64)&ptr, v21 + 1, *((_DWORD *)*v327 + 6), 0x174Bu, 0);
        LOBYTE(v326) = 0;
        sub_1588420((__int64)&ptr, (unsigned __int8 *)&v326);
        sub_15F7200(&ptr);
        goto LABEL_20;
      case 39:
LABEL_61:
        sub_1A219C0((__int64)v21, (__int64)v20, a4, (__int64)a5, a6, (_DWORD *)a1, a7, a8, 0, nullptr);
        goto LABEL_20;
      case 40:
LABEL_64:
        v97 = *a5;
        sub_168B9F0((__int64)&ptr, v21 + 1, *(_DWORD *)(a4 + 4), 0xE5Au, 0);
        v326 = *((void **)v20 + 2);
        v98 = sub_162B6D0((__int64)&ptr, (__int64 *)&v326);
        v327 = (__int64 (__fastcall **)())sub_EEC8C0(v97, (__int64)&v326, *(double *)a7.m128_u64);
        sub_1587DB0(v98, (__int64 *)&v327);
        sub_15F7200(&ptr);
        goto LABEL_20;
      default:
        goto LABEL_20;
    }
  }
  return 0;
}
