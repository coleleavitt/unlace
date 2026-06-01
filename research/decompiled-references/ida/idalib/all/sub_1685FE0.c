void __fastcall sub_1685FE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8,
        char a9,
        __int64 a10,
        unsigned int *a11,
        unsigned __int64 a12,
        __int64 a13,
        char a14)
{
  int v14; // r13d
  __int64 v15; // rbp
  __int64 v17; // rdi
  unsigned int *v18; // r15
  __int64 *v19; // rax
  const __m128i *v20; // r12
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128i *v25; // rdx
  _DWORD *v26; // r14
  __int64 v27; // rax
  int v28; // eax
  bool v29; // dl
  __int64 v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rcx
  bool v33; // bp
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __m128i **v37; // rbp
  __m128i **v38; // rbx
  __m128i **v39; // rdi
  char v40; // al
  __int64 v41; // rdi
  __m128i **v42; // rax
  unsigned __int64 v43; // rax
  __m128i **v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _BYTE *v47; // r12
  signed __int64 v48; // rbp
  int v49; // eax
  __m128i **v50; // rax
  unsigned __int64 v51; // rax
  __m128i *v52; // rcx
  __int64 v53; // rcx
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 v56; // r14
  __m128i v57; // xmm0
  unsigned __int8 v58; // al
  __int64 v59; // r14
  char v60; // r13
  _BYTE *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned int *v65; // rdx
  size_t v66; // rax
  __int64 v67; // rdi
  __m128i v68; // xmm1
  unsigned int v69; // eax
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // r12
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  int v81; // ecx
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 *v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rbp
  char v87; // dl
  bool v88; // zf
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  _QWORD *v93; // rbp
  size_t v94; // rax
  __int64 v95; // rax
  __int64 v96; // r12
  unsigned __int8 v97; // al
  bool (__fastcall *v98)(__int64); // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rcx
  __int64 v105; // rdx
  void *v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r12
  void *v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rax
  _QWORD *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  void *v127; // rax
  _QWORD *v128; // rax
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // r15
  void *v135; // rax
  _QWORD *v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  void *v141; // rax
  _QWORD *v142; // rax
  unsigned int v143; // eax
  __int64 v144; // rax
  __int64 v145; // r9
  __int64 v146; // r12
  __int64 v147; // rax
  __int64 v148; // rax
  _QWORD *v149; // rdi
  unsigned __int64 v150; // rdx
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  void *v155; // rax
  _QWORD *v156; // rax
  unsigned __int64 *v157; // rax
  __int64 *v158; // rdx
  unsigned __int64 v159; // rcx
  unsigned __int64 v160; // rax
  int v161; // eax
  __int64 v162; // rax
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rcx
  __int64 v166; // rdx
  void *v167; // rax
  _QWORD *v168; // rax
  __int64 v169; // rax
  __int64 *v170; // rsi
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  char *v175; // r15
  __int64 v176; // r12
  char *v177; // r12
  __int64 *v178; // r13
  __m128i v179; // rax
  __int64 *v180; // rax
  __int64 v181; // rax
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // rbp
  __int64 v201; // r8
  __int64 v202; // r9
  __m128i *v203; // rax
  _QWORD *v204; // rax
  __int64 v205; // rbx
  int v206; // eax
  char *v207; // rax
  signed __int64 v208; // rdx
  char *v209; // rbp
  signed __int64 v210; // r15
  __int64 *v211; // rax
  __int64 v212; // rcx
  __int64 v213; // r12
  char v214; // al
  __int64 v215; // rcx
  __int64 v216; // r8
  __int64 v217; // r9
  unsigned __int64 *v218; // r15
  __int64 v219; // rdx
  unsigned int v220; // eax
  int v221; // esi
  __int64 *v222; // rdx
  __int64 v223; // rax
  unsigned __int64 v224; // r12
  unsigned __int64 v225; // r12
  __int64 v226; // rcx
  __int64 v227; // r8
  __int64 v228; // r9
  unsigned __int64 v229; // rax
  __int64 v230; // rdx
  __int64 v231; // rdx
  unsigned __int64 v232; // rax
  unsigned int v233; // eax
  unsigned int v234; // r11d
  unsigned __int8 **v235; // rdi
  unsigned __int8 **v236; // r9
  char v237; // r8
  unsigned __int8 *v238; // rsi
  unsigned __int8 *v239; // rax
  __int64 v240; // r10
  unsigned __int8 *v241; // rsi
  __int64 v242; // rcx
  unsigned int v243; // ebp
  __int64 v244; // r14
  unsigned int v245; // eax
  int v246; // edx
  __int64 v247; // r12
  int *v248; // r14
  __int64 v249; // r12
  __int64 v250; // rdx
  int v251; // eax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r9
  __int64 v256; // r12
  void *v257; // rax
  _QWORD *v258; // rax
  __int64 v259; // rax
  __m128i *v260; // [rsp-10h] [rbp-818h]
  __m128i *v261; // [rsp-8h] [rbp-810h]
  unsigned int v262; // [rsp+0h] [rbp-808h]
  __int64 v263; // [rsp+0h] [rbp-808h]
  __int64 v264; // [rsp+0h] [rbp-808h]
  __int64 v265; // [rsp+0h] [rbp-808h]
  __int64 v266; // [rsp+0h] [rbp-808h]
  __int64 v267; // [rsp+0h] [rbp-808h]
  __int64 v268; // [rsp+0h] [rbp-808h]
  __int64 v269; // [rsp+0h] [rbp-808h]
  __int64 v270; // [rsp+0h] [rbp-808h]
  __int64 v271; // [rsp+0h] [rbp-808h]
  __int64 v272; // [rsp+0h] [rbp-808h]
  unsigned int v273; // [rsp+8h] [rbp-800h]
  __int64 v274; // [rsp+8h] [rbp-800h]
  bool v276; // [rsp+10h] [rbp-7F8h]
  __int64 v277; // [rsp+10h] [rbp-7F8h]
  __int64 v278; // [rsp+10h] [rbp-7F8h]
  __int64 v279; // [rsp+10h] [rbp-7F8h]
  char v280; // [rsp+18h] [rbp-7F0h]
  unsigned int v281; // [rsp+18h] [rbp-7F0h]
  const char *v282; // [rsp+18h] [rbp-7F0h]
  unsigned __int64 v283; // [rsp+20h] [rbp-7E8h]
  __int64 v284; // [rsp+20h] [rbp-7E8h]
  __int64 v285; // [rsp+20h] [rbp-7E8h]
  __int64 v286; // [rsp+20h] [rbp-7E8h]
  unsigned int v287; // [rsp+28h] [rbp-7E0h]
  __int64 v288; // [rsp+28h] [rbp-7E0h]
  unsigned int v289; // [rsp+30h] [rbp-7D8h]
  char *v290; // [rsp+30h] [rbp-7D8h]
  char *v291; // [rsp+38h] [rbp-7D0h]
  __int64 v292; // [rsp+40h] [rbp-7C8h] BYREF
  __int64 v293[2]; // [rsp+48h] [rbp-7C0h] BYREF
  __int64 v294; // [rsp+58h] [rbp-7B0h] BYREF
  __m128i v295; // [rsp+60h] [rbp-7A8h] BYREF
  __int64 v296; // [rsp+70h] [rbp-798h] BYREF
  __int64 v297; // [rsp+78h] [rbp-790h]
  _QWORD v298[2]; // [rsp+80h] [rbp-788h] BYREF
  void *v299; // [rsp+90h] [rbp-778h] BYREF
  char *v300; // [rsp+98h] [rbp-770h]
  void *v301; // [rsp+B0h] [rbp-758h] BYREF
  signed __int64 v302; // [rsp+B8h] [rbp-750h]
  _BYTE v303[16]; // [rsp+C0h] [rbp-748h] BYREF
  void *v304[2]; // [rsp+D0h] [rbp-738h] BYREF
  __int64 v305; // [rsp+E0h] [rbp-728h] BYREF
  void *v306[2]; // [rsp+F0h] [rbp-718h] BYREF
  __int64 v307; // [rsp+100h] [rbp-708h] BYREF
  __int64 v308[4]; // [rsp+110h] [rbp-6F8h] BYREF
  __int16 v309; // [rsp+130h] [rbp-6D8h]
  __m128i v310; // [rsp+140h] [rbp-6C8h] BYREF
  __int16 v311; // [rsp+160h] [rbp-6A8h]
  __m128i v312[2]; // [rsp+170h] [rbp-698h] BYREF
  __int16 v313; // [rsp+190h] [rbp-678h]
  __m128i v314[3]; // [rsp+1A0h] [rbp-668h] BYREF
  __m128i v315; // [rsp+1D0h] [rbp-638h] BYREF
  __int16 v316; // [rsp+1F0h] [rbp-618h]
  __m128i v317[3]; // [rsp+200h] [rbp-608h] BYREF
  __m128i v318[2]; // [rsp+230h] [rbp-5D8h] BYREF
  __int16 v319; // [rsp+250h] [rbp-5B8h]
  __m128i v320[3]; // [rsp+260h] [rbp-5A8h] BYREF
  __m128i v321[2]; // [rsp+290h] [rbp-578h] BYREF
  __int16 v322; // [rsp+2B0h] [rbp-558h]
  __m128i v323[3]; // [rsp+2C0h] [rbp-548h] BYREF
  __m128i v324[2]; // [rsp+2F0h] [rbp-518h] BYREF
  __int16 v325; // [rsp+310h] [rbp-4F8h]
  __m128i v326[3]; // [rsp+320h] [rbp-4E8h] BYREF
  __m128i v327[2]; // [rsp+350h] [rbp-4B8h] BYREF
  __int16 v328; // [rsp+370h] [rbp-498h]
  __m128i v329; // [rsp+380h] [rbp-488h] BYREF
  void *v330; // [rsp+3B0h] [rbp-458h] BYREF
  signed __int64 v331; // [rsp+3B8h] [rbp-450h]
  int v332; // [rsp+3C0h] [rbp-448h] BYREF
  void *v333; // [rsp+3C8h] [rbp-440h]
  _BYTE v334[24]; // [rsp+3D8h] [rbp-430h] BYREF
  void *ptr; // [rsp+3F0h] [rbp-418h] BYREF
  __int64 v336; // [rsp+3F8h] [rbp-410h]
  _QWORD *v337; // [rsp+400h] [rbp-408h] BYREF
  void *v338; // [rsp+408h] [rbp-400h]
  unsigned __int8 *v339; // [rsp+410h] [rbp-3F8h] BYREF
  _QWORD v340[9]; // [rsp+418h] [rbp-3F0h] BYREF
  int v341; // [rsp+460h] [rbp-3A8h]
  char v342; // [rsp+468h] [rbp-3A0h]
  __int64 v343; // [rsp+470h] [rbp-398h]
  __m128i v344; // [rsp+4C0h] [rbp-348h] BYREF
  __m128i *v345; // [rsp+4D0h] [rbp-338h] BYREF
  void *v346; // [rsp+4D8h] [rbp-330h]
  unsigned __int8 *v347; // [rsp+4E0h] [rbp-328h] BYREF
  _BYTE v348[88]; // [rsp+4E8h] [rbp-320h] BYREF
  unsigned int v349; // [rsp+540h] [rbp-2C8h]
  char v350; // [rsp+544h] [rbp-2C4h]

  v14 = a2;
  v15 = a3;
  v17 = *(_QWORD *)(a1 + 248);
  v293[0] = a4;
  v292 = a5;
  v18 = a11;
  v283 = a12;
  v280 = a14;
  v273 = *(_DWORD *)(a5 + 24);
  v19 = (__int64 *)sub_167F1F0(v17, a5, a3, a4, a5, a6);
  v20 = (const __m128i *)v19;
  if ( v19 )
  {
    a2 = (unsigned int)a2;
    v21 = sub_1681940((_QWORD *)a1, a2, v19[6], v19[7], v19[17], (__int64 *)v15, a7, a8, v292);
    v25 = v261;
    if ( !v21 )
      return;
    v262 = *v18;
    if ( (v20[2].m128i_i8[6] & 1) != 0 )
    {
      v26 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v292 + 56LL))(v292, (unsigned int)a2);
      if ( v26 )
      {
        while ( 1 )
        {
          a2 = (__int64)v26;
          v27 = sub_167F1F0(*(_QWORD *)(a1 + 248), (__int64)v26, (__int64)v25, v22, v23, v24);
          if ( v27 )
          {
            if ( (*(_BYTE *)(v27 + 38) & 1) == 0 )
              break;
          }
          v26 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 48LL))(v26);
          if ( !v26 )
            goto LABEL_8;
        }
        v273 = v26[6];
      }
    }
LABEL_8:
    if ( v14 != 2 )
      goto LABEL_9;
LABEL_33:
    if ( v280 )
    {
      v323[0].m128i_i32[0] = 7297;
    }
    else if ( *(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 38) )
    {
      v323[0].m128i_i32[0] = 6842;
    }
    else
    {
      v323[0].m128i_i32[0] = 6821;
    }
    v324[0].m128i_i32[0] = 0;
    v41 = v292;
    if ( (*(_BYTE *)(v292 + 29) & 1) == 0 )
      goto LABEL_41;
    v42 = (__m128i **)sub_B8C3D0(v292, a2, (__int64)v25, v22, v23, v24);
    v25 = *v42;
    v43 = (unsigned __int64)*v42 + 8 * *((unsigned int *)v42 + 2);
    if ( (unsigned __int64)v25 >= v43 )
    {
      v41 = v292;
      if ( v25 == (__m128i *)v43 )
        goto LABEL_41;
      while ( 1 )
      {
        v22 = *(_QWORD *)v43;
        if ( *(_WORD *)(*(_QWORD *)v43 + 36LL) == 199 )
          break;
        v43 += 8LL;
        if ( v25 == (__m128i *)v43 )
          goto LABEL_41;
      }
    }
    else
    {
      v22 = (__int64)v25;
      while ( 1 )
      {
        a2 = *(_QWORD *)v22;
        if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 199 )
          break;
        v22 += 8;
        if ( v43 == v22 )
        {
          v41 = v292;
          goto LABEL_41;
        }
      }
      v41 = v292;
      if ( v43 == v22 )
      {
LABEL_41:
        v344.m128i_i64[0] = (__int64)&v345;
        v344.m128i_i64[1] = 0xC00000000LL;
        if ( (*(_BYTE *)(v41 + 29) & 1) == 0 )
          goto LABEL_47;
        v44 = (__m128i **)sub_B8C3D0(v41, a2, (__int64)v25, v22, v23, v24);
        v25 = *v44;
        v45 = (unsigned __int64)*v44 + 8 * *((unsigned int *)v44 + 2);
        if ( (unsigned __int64)v25 >= v45 )
        {
          v41 = v292;
          if ( v25 == (__m128i *)v45 )
            goto LABEL_47;
          while ( 1 )
          {
            v22 = *(_QWORD *)v45;
            if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 199 )
              break;
            v45 += 8LL;
            if ( v25 == (__m128i *)v45 )
              goto LABEL_47;
          }
        }
        else
        {
          v22 = (__int64)v25;
          while ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 199 )
          {
            v22 += 8;
            if ( v45 == v22 )
            {
              v41 = v292;
              goto LABEL_47;
            }
          }
          v41 = v292;
          if ( v45 == v22 )
          {
LABEL_47:
            v46 = sub_167F1F0(*(_QWORD *)(a1 + 248), v41, (__int64)v25, v22, v23, v24);
            if ( !v46 )
              goto LABEL_50;
            goto LABEL_48;
          }
        }
        while ( 1 )
        {
          v116 = v25->m128i_i64[0];
          if ( *(_WORD *)(v25->m128i_i64[0] + 36) == 199 )
            break;
          v25 = (__m128i *)((char *)v25 + 8);
        }
        v48 = *(unsigned int *)(v116 + 56);
        v47 = *(_BYTE **)(v116 + 64);
        v46 = sub_167F1F0(*(_QWORD *)(a1 + 248), v41, (__int64)v25, v22, v23, v24);
        if ( !v46 )
        {
LABEL_49:
          if ( v48 )
          {
            v143 = sub_15F0EF0(a1, v262, 0, a7, a8);
            v327[0].m128i_i64[0] = __PAIR64__(v143, v262);
            v327[0].m128i_i8[8] = 0;
            if ( v262 )
            {
              if ( v143 )
              {
                if ( (*(_BYTE *)(v293[0] + 28) & 0x7F) != 0x12 )
                {
                  sub_167FD10((__int64)&ptr, v327[0].m128i_i64[0], 0, v47, v48);
                  sub_9EEAF0((__int64)&v344, (unsigned __int64)&ptr);
                  if ( v338 != v340 )
                    operator delete(v338);
                  goto LABEL_50;
                }
                v144 = *(_QWORD *)(v293[0] + 40);
                v330 = v47;
                v331 = v48;
                v145 = *(_QWORD *)(a1 + 232);
                v326[0].m128i_i64[0] = v144;
                ptr = &v337;
                v336 = 0xC00000000LL;
                if ( ((*v47 - 43) & 0xFD) == 0 )
                {
                  v330 = v47 + 1;
                  v331 = v48 - 1;
                  if ( v48 == 1 )
                    goto LABEL_181;
                }
                v288 = v145;
                sub_22476F0(&v330, &ptr, 58, 0xFFFFFFFFLL, 1);
                if ( *((char *)v330 + v331 - 1) == 58 )
                {
                  v234 = v336 - 1;
                  LODWORD(v336) = v234;
                  v233 = v234;
                }
                else
                {
                  v233 = v336;
                  if ( (_DWORD)v336 != 1 )
                    goto LABEL_181;
                  v234 = 0;
                }
                v235 = (unsigned __int8 **)ptr;
                v236 = (unsigned __int8 **)((char *)ptr + 16 * v233);
                v237 = *(_BYTE *)(v288 + 4) & 1;
                if ( ptr == v236 )
                {
LABEL_279:
                  if ( (unsigned int)sub_FDE930(v326[0].m128i_i64) == v234 )
                  {
                    v243 = 0;
                    if ( v283 )
                    {
                      v244 = 0;
                      do
                      {
                        v247 = v244;
                        v248 = (int *)&v18[v244];
                        v249 = 16 * v247;
                        sub_FDE9A0(v326[0].m128i_i64, v243);
                        if ( v250 )
                        {
                          v245 = sub_15F0EF0(a1, *v248, 0, a7, a8);
                          v246 = *v248;
                          v329.m128i_i8[8] = 0;
                          v329.m128i_i64[0] = __PAIR64__(v245, v246);
                          sub_167FD10(
                            (__int64)&v330,
                            __SPAIR64__(v245, v246),
                            0,
                            *(_BYTE **)((char *)ptr + v249),
                            *(_QWORD *)((char *)ptr + v249 + 8));
                        }
                        else
                        {
                          sub_9EC740(
                            (__int64)&v330,
                            *v248,
                            *(_BYTE **)((char *)ptr + v249),
                            *(_QWORD *)((char *)ptr + v249 + 8),
                            0);
                        }
                        sub_9EEAF0((__int64)&v344, (unsigned __int64)&v330);
                        if ( v333 != v334 )
                          operator delete(v333);
                        v244 = ++v243;
                      }
                      while ( v243 < v283 );
                    }
                    goto LABEL_183;
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    v238 = v235[1];
                    if ( v238 )
                    {
                      v239 = *v235;
                      v240 = **v235;
                      if ( (byte_2411740[2 * v240] & 0xE0) == 0 && ((_BYTE)v240 != 36 || !v237) )
                        goto LABEL_181;
                      v241 = &v238[(_QWORD)v239];
                      if ( v241 != v239 )
                        break;
                    }
LABEL_278:
                    v235 += 2;
                    if ( v236 == v235 )
                      goto LABEL_279;
                  }
                  while ( 1 )
                  {
                    v242 = *v239;
                    if ( !byte_23F75C0[v242] && ((_BYTE)v242 != 36 || !v237) )
                      break;
                    if ( v241 == ++v239 )
                      goto LABEL_278;
                  }
                }
LABEL_181:
                sub_167FD10((__int64)&v330, v327[0].m128i_i64[0], v327[0].m128i_i8[8], v47, v48);
                sub_9EEAF0((__int64)&v344, (unsigned __int64)&v330);
                if ( v333 != v334 )
                  operator delete(v333);
LABEL_183:
                if ( ptr != &v337 )
                  free(ptr);
              }
            }
          }
LABEL_50:
          v284 = 2;
          v281 = 5804;
          v287 = 6831;
          v289 = 6836;
          goto LABEL_13;
        }
LABEL_48:
        v47 = *(_BYTE **)(v46 + 120);
        v48 = *(unsigned int *)(v46 + 116);
        goto LABEL_49;
      }
    }
    while ( *(_WORD *)(v25->m128i_i64[0] + 36) != 199 )
      v25 = (__m128i *)((char *)v25 + 8);
    v273 = *(_DWORD *)(v25->m128i_i64[0] + 24);
    goto LABEL_41;
  }
  a2 = (unsigned int)a2;
  v40 = sub_1681940((_QWORD *)a1, a2, 0, 0, 0, (__int64 *)v15, a7, a8, v292);
  v25 = v260;
  v22 = (__int64)v261;
  if ( !v40 )
    return;
  v262 = *v18;
  if ( (_DWORD)a2 == 2 )
    goto LABEL_33;
LABEL_9:
  if ( v14 != 3 )
  {
    if ( v14 != 1 )
      goto LABEL_11;
    v56 = *(_QWORD *)(a1 + 248);
    v57 = _mm_loadu_si128(v20 + 3);
    v295 = v57;
    v58 = sub_167EDF0(v56, (__int64)v20);
    v59 = *(_QWORD *)(v56 + 17448);
    v60 = v58;
    v61 = (_BYTE *)sub_B8FAD0(*(_QWORD *)(v59 + 360), *(_QWORD *)(v59 + 368));
    v301 = v303;
    sub_167EBD0(&v301, v61, (__int64)&v61[v62]);
    v296 = sub_22B6CA0(*(unsigned int *)(v59 + 264));
    v63 = v20[8].m128i_i64[1];
    v297 = v64;
    if ( v63 )
    {
      v65 = *(unsigned int **)(v63 + 16);
      v66 = *v65;
      v298[0] = v65 + 4;
    }
    else
    {
      v298[0] = &byte_22F0C30;
      v66 = j__strlen(&byte_22F0C30);
    }
    v298[1] = v66;
    v276 = 0;
    if ( v66 )
      v276 = v297 != 0;
    v67 = *(_QWORD *)(a1 + 248);
    v68 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v67 + 17448) + 376LL));
    v344 = v68;
    v69 = sub_167F780(v67, (unsigned int *)&v344, (unsigned int *)&v295, v60);
    v285 = a1 + 8;
    sub_168B9F0(&v344, a1 + 8, v262, v69, 0);
    v70 = sub_1683CF0((__int64)&v344, &v292);
    v71 = v70;
    if ( *(_BYTE *)(v70 + 120) )
    {
      sub_AEC220((unsigned __int8 **)(v70 + 32), v301, v302);
    }
    else if ( *(_BYTE *)(v70 + 132) )
    {
      v137 = sub_168B9E0(v70);
      v141 = *(void **)(v71 + 16);
      if ( v141 )
      {
        v269 = v137;
        v141 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v141 + 32LL))(v141);
        v137 = v269;
      }
      ptr = v141;
      v142 = sub_1587BC0(v137, (__int64 *)&ptr, v137, v138, v139, v140);
      sub_AEC220((unsigned __int8 **)(*v142 + 32LL * *(unsigned int *)(v71 + 128) + 8), v301, v302);
    }
    sub_2257830(&ptr, &v295);
    v72 = sub_1682AF0(v71, (__int64)&ptr);
    v73 = v72;
    if ( *(_BYTE *)(v72 + 120) )
    {
      v265 = v72;
      sub_AE9DF0((unsigned __int8 **)(v72 + 32), v276, 2u);
      v73 = v265;
    }
    else if ( *(_BYTE *)(v72 + 132) )
    {
      v267 = v72;
      v129 = sub_168B9E0(v72);
      v133 = v267;
      v134 = v129;
      v135 = *(void **)(v267 + 16);
      if ( v135 )
      {
        v135 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v135 + 32LL))(*(_QWORD *)(v267 + 16));
        v133 = v267;
      }
      v330 = v135;
      v268 = v133;
      v136 = sub_1587BC0(v134, (__int64 *)&v330, v130, v133, v131, v132);
      sub_AE9DF0((unsigned __int8 **)(*v136 + 32LL * *(unsigned int *)(v268 + 128) + 8), v276, 2u);
      v73 = v268;
    }
    sub_1682BA0(v73, (__int64)&v296);
    if ( ptr != &v337 )
      operator delete(ptr);
    sub_15F7200(&v344);
    sub_168B9F0(&v344, v285, *(unsigned int *)(v292 + 24), 6263, 0);
    v74 = sub_1683CF0((__int64)&v344, &v292);
    v75 = v74;
    if ( *(_BYTE *)(v74 + 120) )
    {
      sub_AEC220((unsigned __int8 **)(v74 + 32), v301, v302);
    }
    else if ( *(_BYTE *)(v74 + 132) )
    {
      v123 = sub_168B9E0(v74);
      v127 = *(void **)(v75 + 16);
      if ( v127 )
      {
        v266 = v123;
        v127 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v127 + 32LL))(v127);
        v123 = v266;
      }
      ptr = v127;
      v128 = sub_1587BC0(v123, (__int64 *)&ptr, v123, v124, v125, v126);
      sub_AEC220((unsigned __int8 **)(*v128 + 32LL * *(unsigned int *)(v75 + 128) + 8), v301, v302);
    }
    sub_2257830(&v330, &v295);
    v76 = sub_1682AF0(v75, (__int64)&v330);
    v329 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 376LL));
    sub_2257830(&ptr, &v329);
    v77 = sub_1682AF0(v76, (__int64)&ptr);
    v78 = v77;
    if ( *(_BYTE *)(v77 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v77 + 32), v276, 2u);
    }
    else if ( *(_BYTE *)(v77 + 132) )
    {
      v117 = sub_168B9E0(v77);
      v121 = *(_QWORD *)(v78 + 16);
      if ( v121 )
      {
        v274 = v117;
        v121 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v121 + 32LL))(v121);
        v117 = v274;
      }
      v327[0].m128i_i64[0] = v121;
      v122 = sub_1587BC0(v117, v327[0].m128i_i64, v117, v118, v119, v120);
      sub_AE9DF0((unsigned __int8 **)(*v122 + 32LL * *(unsigned int *)(v78 + 128) + 8), v276, 2u);
    }
    v79 = sub_1682BA0(v78, (__int64)v298);
    sub_1682BA0(v79, (__int64)&v296);
    if ( ptr != &v337 )
      operator delete(ptr);
    if ( v330 != &v332 )
      operator delete(v330);
    sub_15F7200(&v344);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) != 0 )
    {
LABEL_104:
      if ( v301 != v303 )
        operator delete(v301);
      return;
    }
    v80 = *(_BYTE *)(v15 + 28) & 0x7F;
    v81 = (unsigned __int8)v80;
    if ( (unsigned __int8)v80 <= 0x3Eu )
    {
      v82 = 0x7C0000FC00040000LL;
      if ( _bittest64(&v82, v80) )
        goto LABEL_84;
    }
    if ( (unsigned int)(unsigned __int8)v80 - 19 > 4 )
    {
      v146 = 0x7C0000FC00040000LL;
      v147 = v15;
      while ( 1 )
      {
        v148 = *(_QWORD *)(v147 + 16);
        v149 = (_QWORD *)(v148 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v148 & 4) != 0 )
          v149 = (_QWORD *)*v149;
        if ( !v149 )
          break;
        v147 = sub_B8C1B0((__int64)v149);
        if ( !v147 )
          break;
        v150 = *(_BYTE *)(v147 + 28) & 0x7F;
        v81 = (unsigned __int8)v150;
        if ( (unsigned __int8)v150 <= 0x3Eu && _bittest64(&v146, v150) )
        {
          v15 = v147;
          goto LABEL_84;
        }
        if ( (unsigned int)(unsigned __int8)v150 - 19 <= 4 )
        {
          v15 = v147;
          goto LABEL_86;
        }
      }
      v81 = *(_BYTE *)(v15 + 28) & 0x7F;
      if ( (unsigned int)(v81 - 18) <= 0x3F )
        goto LABEL_84;
      goto LABEL_104;
    }
LABEL_86:
    if ( (unsigned int)(v81 - 21) > 1 )
    {
LABEL_84:
      v294 = v15;
    }
    else
    {
      v15 = *(_QWORD *)(v15 + 88);
      v294 = v15;
      if ( !v15 )
        goto LABEL_104;
      v81 = *(_BYTE *)(v15 + 28) & 0x7F;
    }
    v83 = *(unsigned int *)(v15 + 24);
    if ( (unsigned int)(v81 - 58) <= 4 && !*(_QWORD *)(v15 + 40) )
    {
      sub_168B9F0(&v344, v285, v83, 5869, 0);
      LODWORD(v330) = 1;
      v205 = sub_1587D10((__int64)&v344, (int *)&v330);
      v206 = sub_F58620(*(_BYTE *)(v15 + 73) >> 5);
      v207 = sub_F58640(v206);
      v209 = v207;
      v210 = v208;
      if ( *(_BYTE *)(v205 + 120) )
      {
        sub_AEC220((unsigned __int8 **)(v205 + 32), v207, v208);
      }
      else if ( *(_BYTE *)(v205 + 132) )
      {
        v256 = sub_168B9E0(v205);
        v257 = *(void **)(v205 + 16);
        if ( v257 )
          v257 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v257 + 32LL))(*(_QWORD *)(v205 + 16));
        ptr = v257;
        v258 = sub_1587BC0(v256, (__int64 *)&ptr, v252, v253, v254, v255);
        sub_AEC220((unsigned __int8 **)(*v258 + 32LL * *(unsigned int *)(v205 + 128) + 8), v209, v210);
      }
      sub_15F7200(&v344);
      goto LABEL_104;
    }
    sub_168B9F0(&v344, v285, v83, 5869, 0);
    if ( v348[80] )
    {
      sub_AE9DF0(&v347, 0, 2u);
    }
    else if ( v350 )
    {
      v200 = sub_168B9E0(&v344);
      v203 = v345;
      if ( v345 )
        v203 = (__m128i *)(*(__int64 (__fastcall **)(__m128i *))(v345->m128i_i64[0] + 32))(v345);
      ptr = v203;
      v204 = sub_1587BC0(v200, (__int64 *)&ptr, v198, v199, v201, v202);
      sub_AE9DF0((unsigned __int8 **)(*v204 + 32LL * v349 + 8), 0, 2u);
    }
    v84 = &v294;
    v85 = sub_1683CF0((__int64)&v344, &v294);
    v86 = v85;
    ptr = *(void **)v85;
    v336 = *(_QWORD *)(v85 + 8);
    v337 = *(_QWORD **)(v85 + 16);
    v87 = *(_BYTE *)(v85 + 24);
    v342 = 0;
    v88 = *(_BYTE *)(v85 + 120) == 0;
    LOBYTE(v338) = v87;
    if ( !v88 )
    {
      v84 = (__int64 *)(v85 + 32);
      sub_FC70F0((__int64)&v339, v85 + 32);
      v340[8] = *(_QWORD *)(v86 + 104);
      v161 = *(_DWORD *)(v86 + 112);
      v342 = 1;
      v341 = v161;
    }
    v343 = *(_QWORD *)(v86 + 128);
    sub_15F7200(&v344);
    if ( (*(_BYTE *)(v294 + 29) & 1) != 0 )
    {
      v157 = sub_B8C3D0(v294, (__int64)v84, v89, v90, v91, v92);
      v158 = (__int64 *)*v157;
      v159 = *v157 + 8LL * *((unsigned int *)v157 + 2);
      if ( *v157 >= v159 )
      {
        if ( v158 != (__int64 *)v159 )
        {
          if ( *(_WORD *)(*(_QWORD *)v159 + 36LL) == 142 )
            goto LABEL_103;
          v211 = (__int64 *)(v159 + 8);
          while ( v158 != v211 )
          {
            v212 = *v211++;
            if ( *(_WORD *)(v212 + 36) == 142 )
              goto LABEL_103;
          }
        }
      }
      else
      {
        v160 = *v157;
        while ( *(_WORD *)(*(_QWORD *)v160 + 36LL) != 142 )
        {
          v160 += 8LL;
          if ( v159 == v160 )
            goto LABEL_96;
        }
        if ( v159 != v160 )
          goto LABEL_103;
      }
    }
LABEL_96:
    v93 = *(_QWORD **)(a1 + 240);
    v94 = j__strlen("API_AVAILABLE");
    v95 = sub_6F3470((__int64)(v93 + 69), "API_AVAILABLE", v94);
    if ( (*(_BYTE *)(v95 + 3) & 2) == 0 )
    {
LABEL_103:
      sub_15F7200(&ptr);
      goto LABEL_104;
    }
    if ( (*(_BYTE *)(v93[7] + 21LL) & 2) == 0 )
    {
LABEL_98:
      v96 = v294;
      v97 = *(_BYTE *)(v294 + 28) & 0x7F;
      if ( v97 == 75 )
        goto LABEL_213;
      if ( v97 != 18 )
      {
        if ( (unsigned int)v97 - 58 > 4 )
        {
          v286 = 1;
          v332 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v294 + 16LL))(v294);
          v290 = "\n";
          v279 = 0;
          v282 = &byte_22F0C30;
        }
        else
        {
          v251 = sub_13DC060(
                   *(_DWORD *)(v294 + 56),
                   0,
                   *(__int64 **)(a1 + 272),
                   *(_QWORD *)(a1 + 232),
                   v57,
                   *(double *)v68.m128i_i64);
          if ( !v251 )
            goto LABEL_103;
          v332 = v251;
          v282 = " ";
          v279 = 1;
          v286 = 0;
          v290 = (char *)&byte_22F0C30;
        }
LABEL_214:
        v169 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
        v170 = *(__int64 **)(v169 + 360);
        sub_1680940(&v299, (__int64)v170, *(_QWORD *)(v169 + 368));
        v175 = (char *)v299;
        v309 = 259;
        v308[0] = (__int64)"__API_AVAILABLE_PLATFORM_";
        v291 = v300;
        v176 = (v300 - (_BYTE *)v299) >> 6;
        if ( v176 > 0 )
        {
          v177 = (char *)v299 + 64 * v176;
          do
          {
            v170 = v308;
            if ( (unsigned __int8)sub_1682280((__int64)v93, v308, *(__int64 **)v175, *((_QWORD *)v175 + 1), v173) )
              goto LABEL_221;
            v178 = (__int64 *)v175;
            v175 += 16;
            v170 = v308;
            if ( (unsigned __int8)sub_1682280((__int64)v93, v308, *(__int64 **)v175, *((_QWORD *)v175 + 1), v173) )
              goto LABEL_221;
            v170 = v308;
            v175 = (char *)(v178 + 4);
            if ( (unsigned __int8)sub_1682280((__int64)v93, v308, (__int64 *)v178[4], v178[5], v173) )
              goto LABEL_221;
            v170 = v308;
            v175 = (char *)(v178 + 6);
            if ( (unsigned __int8)sub_1682280((__int64)v93, v308, (__int64 *)v178[6], v178[7], v173) )
              goto LABEL_221;
            v175 = (char *)(v178 + 8);
          }
          while ( v178 + 8 != (__int64 *)v177 );
        }
        v259 = (v291 - v175) >> 4;
        if ( v259 != 2 )
        {
          if ( v259 != 3 )
          {
            if ( v259 != 1 )
            {
LABEL_300:
              v175 = v291;
LABEL_221:
              if ( v300 != v175 )
              {
                v179.m128i_i64[0] = sub_B8C7E0(v292, (__int64)v170, v171, v172, v173, v174);
                v344 = v179;
                sub_2257830(v304, &v344);
                v321[0].m128i_i64[0] = (__int64)v304;
                v327[0].m128i_i64[0] = (__int64)v290;
                v328 = 261;
                v327[0].m128i_i64[1] = v286;
                v324[0].m128i_i64[0] = (__int64)"))";
                v318[0].m128i_i64[0] = (__int64)"(";
                v180 = *(__int64 **)v175;
                v325 = 259;
                v315.m128i_i64[0] = (__int64)v180;
                v181 = *((_QWORD *)v175 + 1);
                v311 = 261;
                v315.m128i_i64[1] = v181;
                v312[0].m128i_i64[0] = (__int64)"API_AVAILABLE(";
                v319 = 259;
                v310.m128i_i64[0] = (__int64)v282;
                v316 = 261;
                v313 = 259;
                v310.m128i_i64[1] = v279;
                v322 = 260;
                sub_A41580(v314, &v310, v312, v182, 260, 259);
                sub_A41580(v317, v314, &v315, v183, v184, v185);
                sub_A41580(v320, v317, v318, v186, v187, v188);
                sub_A41580(v323, v320, v321, v189, v190, v191);
                sub_A41580(v326, v323, v324, v192, v193, v194);
                sub_A41580(&v329, v326, v327, v195, v196, v197);
                sub_2253560(v306, &v329);
                sub_9EC740((__int64)&v344, v332, (_BYTE *)v306[0], (__int64)v306[1], 0);
                sub_1589170((__int64)&ptr, &v344);
                if ( v346 != v348 )
                  operator delete(v346);
                if ( v306[0] != &v307 )
                  operator delete(v306[0]);
                if ( v304[0] != &v305 )
                  operator delete(v304[0]);
              }
              if ( v299 )
                operator delete(v299);
              goto LABEL_103;
            }
LABEL_309:
            v170 = v308;
            if ( (unsigned __int8)sub_1682280((__int64)v93, v308, *(__int64 **)v175, *((_QWORD *)v175 + 1), v173) )
              goto LABEL_221;
            goto LABEL_300;
          }
          v170 = v308;
          if ( (unsigned __int8)sub_1682280((__int64)v93, v308, *(__int64 **)v175, *((_QWORD *)v175 + 1), v173) )
            goto LABEL_221;
          v175 += 16;
        }
        v170 = v308;
        if ( (unsigned __int8)sub_1682280((__int64)v93, v308, *(__int64 **)v175, *((_QWORD *)v175 + 1), v173) )
          goto LABEL_221;
        v175 += 16;
        goto LABEL_309;
      }
      v98 = *(bool (__fastcall **)(__int64))(*(_QWORD *)v294 + 72LL);
      if ( v98 == sub_6EE910 )
      {
        if ( (*(_BYTE *)(v294 + 112) & 1) != 0 || *(_QWORD *)(v294 + 112) )
          goto LABEL_103;
        goto LABEL_213;
      }
      if ( !v98(v294) )
      {
LABEL_213:
        v286 = 0;
        v279 = 1;
        v332 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96) >> 32;
        v290 = (char *)&byte_22F0C30;
        v282 = " ";
        goto LABEL_214;
      }
      goto LABEL_103;
    }
    v329.m128i_i64[0] = v95;
    v213 = v93[213];
    v214 = sub_12EC520((__int64 *)v213, v329.m128i_i64, &v330);
    v218 = (unsigned __int64 *)((char *)v330 + 8);
    if ( v214 )
    {
LABEL_250:
      v224 = *v218;
      if ( *v218 && (v224 & 4) != 0 && (v224 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        v225 = *(_QWORD *)(v224 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v225 = v224 & 0xFFFFFFFFFFFFFFF8LL;
      for ( ; v225; v225 = *(_QWORD *)v225 )
      {
        if ( (*(_BYTE *)(v225 + 12) & 3) != 2 )
          break;
      }
      sub_12EEA40(v218, v93, v329.m128i_i64[0], v215, v216, v217);
      v229 = sub_12EEA40(v218, v93, v329.m128i_i64[0], v226, v227, v228);
      v230 = 0;
      if ( v229 )
      {
        v231 = *(_QWORD *)(v229 + 8);
        v232 = v231 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v231 & 4) != 0 )
          v230 = *(unsigned int *)(v232 + 8);
        else
          v230 = v232 != 0;
      }
      if ( (!v225 || (*(_BYTE *)(v225 + 12) & 3) != 0 || (v225 & 0xFFFFFFFFFFFFFFF8LL) == 0) && !v230 )
        goto LABEL_103;
      goto LABEL_98;
    }
    v344.m128i_i64[0] = (__int64)v330;
    v219 = (unsigned int)(*(_DWORD *)(v213 + 8) + 1);
    v220 = *(_DWORD *)(v213 + 16);
    v221 = 2 * v220;
    v215 = 3 * v220;
    if ( 4 * (int)v219 < (unsigned int)v215 )
    {
      v219 = v220 - *(_DWORD *)(v213 + 12) - (unsigned int)v219;
      v215 = v220 >> 3;
      if ( (unsigned int)v219 > (unsigned int)v215 )
      {
LABEL_247:
        v222 = (__int64 *)v344.m128i_i64[0];
        ++*(_DWORD *)(v213 + 8);
        if ( *v222 != -4096 )
          --*(_DWORD *)(v213 + 12);
        v223 = v329.m128i_i64[0];
        v222[1] = 0;
        v218 = (unsigned __int64 *)(v222 + 1);
        *v222 = v223;
        goto LABEL_250;
      }
      v221 = *(_DWORD *)(v213 + 16);
    }
    sub_12F12D0(v213, v221, v219, v215, v216, v217);
    sub_12EC520((__int64 *)v213, v329.m128i_i64, &v344);
    goto LABEL_247;
  }
  v324[0].m128i_i32[0] = 1;
  v323[0].m128i_i32[0] = v280 == 0 ? 5336 : 4853;
  if ( (*(_BYTE *)(v292 + 29) & 1) != 0 )
  {
    v50 = (__m128i **)sub_B8C3D0(v292, a2, (__int64)v25, v22, v23, v24);
    v25 = *v50;
    v51 = (unsigned __int64)*v50 + 8 * *((unsigned int *)v50 + 2);
    if ( (unsigned __int64)v25 >= v51 )
    {
      if ( v25 == (__m128i *)v51 )
        goto LABEL_11;
      while ( *(_WORD *)(*(_QWORD *)v51 + 36LL) != 386 )
      {
        v51 += 8LL;
        if ( v25 == (__m128i *)v51 )
          goto LABEL_11;
      }
    }
    else
    {
      v52 = v25;
      while ( *(_WORD *)(v52->m128i_i64[0] + 36) != 386 )
      {
        v52 = (__m128i *)((char *)v52 + 8);
        if ( (__m128i *)v51 == v52 )
          goto LABEL_11;
      }
      if ( (__m128i *)v51 == v52 )
        goto LABEL_11;
    }
    v53 = v25->m128i_i64[0];
    if ( *(_WORD *)(v25->m128i_i64[0] + 36) != 386 )
    {
      v54 = &v25->m128i_i64[1];
      do
        v53 = *v54++;
      while ( *(_WORD *)(v53 + 36) != 386 );
    }
    if ( (*(_BYTE *)(v53 + 38) & 4) != 0 )
    {
      v55 = *(unsigned int *)(v53 + 56);
      if ( (_DWORD)v55 )
      {
        v25 = v323;
        v344.m128i_i64[0] = a1;
        v344.m128i_i64[1] = (__int64)&v292;
        v345 = v323;
        switch ( v55 )
        {
          case 1LL:
            sub_167EB80((__int64)&v344);
            v281 = 5781;
            break;
          case 2LL:
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 8) != 0 )
              v281 = 5787;
            else
              v281 = 5788;
            break;
          case 3LL:
            sub_167EB80((__int64)&v344);
            v281 = 6266;
            break;
          case 4LL:
            sub_167EB80((__int64)&v344);
            v281 = 5783;
            break;
          case 5LL:
            sub_167EB80((__int64)&v344);
            v281 = 5780;
            break;
          default:
            v281 = 5804;
            break;
        }
        goto LABEL_12;
      }
    }
  }
LABEL_11:
  v281 = 5804;
LABEL_12:
  v287 = 7463;
  v344.m128i_i64[0] = (__int64)&v345;
  v344.m128i_i64[1] = 0xC00000000LL;
  v284 = 0;
  v289 = 5338;
LABEL_13:
  v28 = sub_1CB6130(a1, v293[0], v25);
  v29 = 1;
  if ( v28 != v262 )
  {
    v29 = 0;
    if ( v28 )
    {
      v49 = sub_1021680(*(_QWORD *)(a1 + 272), v28);
      v29 = v49 != 3 && v49 != 0;
    }
  }
  v30 = *(_QWORD *)(a1 + 264);
  v31 = a1 + 8;
  v32 = *(_QWORD *)(v30 + 152);
  v33 = (*(_BYTE *)(v32 + 24) & 0x10) != 0;
  *(_BYTE *)(v32 + 24) = (16 * v29) | *(_BYTE *)(v32 + 24) & 0xEF;
  if ( !a10 )
  {
    if ( !a6 )
    {
      sub_168B9F0(&ptr, v31, v262, v323[0].m128i_u32[0], 0);
      v115 = sub_1683CF0((__int64)&ptr, v293);
      sub_1682C50(v115, (__int64)&v344);
      sub_15F7200(&ptr);
      if ( a13 )
      {
        sub_168B9F0(&ptr, v31, *(unsigned int *)(a13 + 24), 6297, 0);
        if ( v342 )
        {
          sub_AE9DF0(&v339, *(_QWORD *)(a13 + 40), 9u);
        }
        else if ( BYTE4(v343) )
        {
          v271 = *(_QWORD *)(a13 + 40);
          v162 = sub_168B9E0(&ptr);
          v165 = v271;
          v166 = v162;
          v167 = v337;
          if ( v337 )
          {
            v278 = v166;
            v167 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v337 + 32LL))(
                             v337,
                             *v337,
                             v166,
                             v271);
            v166 = v278;
            v165 = v271;
          }
          v272 = v165;
          v330 = v167;
          v168 = sub_1587BC0(v166, (__int64 *)&v330, v166, v165, v163, v164);
          sub_AE9DF0((unsigned __int8 **)(*v168 + 32LL * (unsigned int)v343 + 8), v272, 9u);
        }
        sub_1588370((__int64)&ptr, (unsigned int *)v324);
        sub_15F7200(&ptr);
      }
      goto LABEL_20;
    }
    sub_168B9F0(&ptr, v31, v262, v287, 0);
    v34 = sub_1683CF0((__int64)&ptr, v293);
    sub_1682C50(v34, (__int64)&v344);
    sub_15F7200(&ptr);
    sub_168B9F0(&ptr, v31, *(unsigned int *)(a6 + 24), 5993, 0);
    goto LABEL_19;
  }
  sub_168B9F0(&ptr, v31, v262, v289, 0);
  v99 = sub_1683CF0((__int64)&ptr, v293);
  v100 = sub_1682BA0(v99, (__int64)&a9);
  sub_1682C50(v100, (__int64)&v344);
  sub_15F7200(&ptr);
  if ( !a13 )
    goto LABEL_20;
  sub_168B9F0(&ptr, v31, *(unsigned int *)(a13 + 24), 6297, 0);
  if ( v342 )
  {
    sub_AE9DF0(&v339, *(_QWORD *)(a13 + 40), 9u);
LABEL_112:
    if ( v342 )
    {
      sub_AE9DF0(&v339, v324[0].m128i_u32[0], 3u);
    }
    else if ( BYTE4(v343) )
    {
      v151 = sub_168B9E0(&ptr);
      v155 = v337;
      if ( v337 )
      {
        v270 = v151;
        v155 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v337 + 32LL))(v337);
        v151 = v270;
      }
      v330 = v155;
      v156 = sub_1587BC0(v151, (__int64 *)&v330, v151, v152, v153, v154);
      sub_AE9DF0((unsigned __int8 **)(*v156 + 32LL * (unsigned int)v343 + 8), v324[0].m128i_u32[0], 3u);
    }
    goto LABEL_19;
  }
  if ( BYTE4(v343) )
  {
    v263 = *(_QWORD *)(a13 + 40);
    v101 = sub_168B9E0(&ptr);
    v104 = v263;
    v105 = v101;
    v106 = v337;
    if ( v337 )
    {
      v277 = v105;
      v106 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v337 + 32LL))(
                       v337,
                       *v337,
                       v105,
                       v263);
      v105 = v277;
      v104 = v263;
    }
    v264 = v104;
    v330 = v106;
    v107 = sub_1587BC0(v105, (__int64 *)&v330, v105, v104, v102, v103);
    sub_AE9DF0((unsigned __int8 **)(*v107 + 32LL * (unsigned int)v343 + 8), v264, 9u);
    goto LABEL_112;
  }
LABEL_19:
  sub_15F7200(&ptr);
LABEL_20:
  sub_168B9F0(&ptr, v31, v273, v281, 0);
  v35 = sub_1683CF0((__int64)&ptr, &v292);
  v36 = v35;
  if ( *(_BYTE *)(v35 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v35 + 32), v284, 3u);
  }
  else if ( *(_BYTE *)(v35 + 132) )
  {
    v112 = sub_168B9E0(v35);
    v113 = *(void **)(v36 + 16);
    if ( v113 )
      v113 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v113 + 32LL))(*(_QWORD *)(v36 + 16));
    v330 = v113;
    v114 = sub_1587BC0(v112, (__int64 *)&v330, v108, v109, v110, v111);
    sub_AE9DF0((unsigned __int8 **)(*v114 + 32LL * *(unsigned int *)(v36 + 128) + 8), v284, 3u);
  }
  sub_15F7200(&ptr);
  *(_BYTE *)(*(_QWORD *)(v30 + 152) + 24LL) = *(_BYTE *)(*(_QWORD *)(v30 + 152) + 24LL) & 0xEF | (16 * v33);
  v37 = (__m128i **)v344.m128i_i64[0];
  v38 = (__m128i **)(v344.m128i_i64[0] + ((unsigned __int64)v344.m128i_u32[2] << 6));
  if ( (__m128i **)v344.m128i_i64[0] != v38 )
  {
    do
    {
      while ( 1 )
      {
        v38 -= 8;
        v39 = (__m128i **)v38[3];
        if ( v39 == v38 + 5 )
          break;
        operator delete(v39);
        if ( v37 == v38 )
          goto LABEL_25;
      }
    }
    while ( v37 != v38 );
LABEL_25:
    v38 = (__m128i **)v344.m128i_i64[0];
  }
  if ( v38 != &v345 )
    free(v38);
}
