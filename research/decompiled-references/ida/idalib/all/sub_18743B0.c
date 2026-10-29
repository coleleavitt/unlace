__int64 __fastcall sub_18743B0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  _QWORD *v8; // r12
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  bool v12; // al
  __int64 v13; // rdx
  __int64 *v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // r9d
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r14
  __int64 *v26; // r12
  __int64 v27; // rax
  int v28; // edx
  char v29; // cl
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdi
  __int64 v43; // rbx
  unsigned int *v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdi
  unsigned int *v50; // rbx
  unsigned int v51; // edx
  __int32 v52; // eax
  __int64 (__fastcall *v53)(__int64); // rax
  _WORD *v54; // r9
  __int64 v55; // r8
  __int64 v56; // r9
  __m128 si128; // xmm0
  __int64 v58; // rsi
  unsigned __int64 *v59; // rax
  __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // r15
  char *v67; // rax
  __int64 v68; // rdx
  int v69; // eax
  char v70; // al
  __int64 *v71; // rsi
  unsigned int v72; // ecx
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  unsigned __int64 v79; // r14
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // r8
  __int64 v84; // r9
  unsigned __int64 v85; // r15
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdi
  __int64 v91; // r14
  __int64 v92; // r14
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rdi
  __int64 v102; // r15
  __int64 v103; // rbx
  __int64 *v104; // rdx
  unsigned __int64 v105; // rax
  __int64 *v106; // r14
  void *v107; // rax
  unsigned int v108; // eax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // r12
  __int64 v114; // rax
  _QWORD *v115; // rax
  unsigned int v116; // eax
  __int64 *v117; // r12
  __int64 v118; // rsi
  unsigned __int8 v119; // bl
  __int64 v120; // rsi
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // r15
  _QWORD *v123; // r12
  _QWORD *v124; // rbx
  unsigned __int64 v125; // rsi
  unsigned __int64 v126; // rdi
  unsigned int v127; // eax
  __int64 v128; // rdx
  __int64 v129; // rcx
  unsigned __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // r15
  unsigned __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // rax
  _QWORD *v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 **v143; // r15
  __int64 **v144; // rbx
  __int64 v145; // rax
  _QWORD *v146; // rax
  _QWORD *v147; // rax
  unsigned __int64 v148; // rax
  __int64 v149; // r14
  unsigned int v150; // eax
  unsigned __int64 v151; // rax
  __int64 v152; // rdx
  unsigned int v153; // ebx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 i; // r14
  __int64 v157; // rax
  _QWORD *v158; // rax
  unsigned int v159; // eax
  __int64 *v160; // r12
  unsigned __int8 v161; // al
  unsigned __int8 v162; // bl
  unsigned __int64 v163; // rax
  __int64 *v164; // r13
  __int64 *j; // r12
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  __int64 *v168; // r12
  __int64 v169; // rax
  __int64 v170; // rax
  unsigned int v171; // edx
  __int64 v172; // r13
  __int64 v173; // rax
  unsigned int v174; // eax
  __int64 v175; // rdi
  __int64 v176; // r13
  __int64 v177; // rbx
  unsigned int *v178; // rax
  __int64 v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 *v182; // rsi
  unsigned int v183; // edx
  __int64 v184; // rax
  unsigned __int8 **v185; // rdi
  unsigned __int8 **v186; // rdi
  bool v187; // zf
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rbx
  __int64 v191; // r8
  __int64 v192; // rax
  _QWORD *v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // rbx
  __int64 v197; // r8
  __int64 v198; // rax
  _QWORD *v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rbx
  __int64 v203; // r8
  __int64 v204; // rax
  _QWORD *v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  __int64 v209; // r13
  __int64 v210; // rax
  _QWORD *v211; // rax
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rbx
  __int64 v215; // r8
  __int64 v216; // rax
  _QWORD *v217; // rax
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // rbx
  __int64 v221; // r8
  __int64 v222; // rax
  _QWORD *v223; // rax
  __int64 v224; // rdx
  __int64 v225; // rcx
  __int64 v226; // rbx
  __int64 v227; // r8
  __int64 v228; // rax
  _QWORD *v229; // rax
  _BYTE *v230; // rax
  __int64 v231; // rbx
  __int64 v232; // rsi
  __int64 v233; // rbx
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // rbx
  __int64 v237; // r8
  __int64 v238; // rax
  _QWORD *v239; // rax
  __int64 v240; // rdx
  __int64 v241; // rcx
  __int64 v242; // r8
  __int64 v243; // r13
  __int64 v244; // rax
  _QWORD *v245; // rax
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // rbx
  __int64 v249; // r8
  __int64 v250; // rax
  _QWORD *v251; // rax
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // r13
  __int64 v256; // rax
  _QWORD *v257; // rax
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // r12
  __int64 v262; // rax
  _QWORD *v263; // rax
  __int64 v264; // [rsp-8h] [rbp-270h]
  unsigned __int64 *v265; // [rsp+8h] [rbp-260h]
  unsigned __int64 v266; // [rsp+8h] [rbp-260h]
  unsigned __int8 v267; // [rsp+8h] [rbp-260h]
  unsigned int v268; // [rsp+8h] [rbp-260h]
  _WORD *v269; // [rsp+8h] [rbp-260h]
  int v270; // [rsp+8h] [rbp-260h]
  int v271; // [rsp+8h] [rbp-260h]
  __int64 v272; // [rsp+8h] [rbp-260h]
  unsigned int v273; // [rsp+8h] [rbp-260h]
  unsigned int v274; // [rsp+8h] [rbp-260h]
  unsigned __int8 *v275; // [rsp+10h] [rbp-258h]
  _QWORD *v276; // [rsp+10h] [rbp-258h]
  unsigned __int64 v277; // [rsp+10h] [rbp-258h]
  int v278; // [rsp+10h] [rbp-258h]
  _QWORD *v279; // [rsp+10h] [rbp-258h]
  __int64 v280; // [rsp+10h] [rbp-258h]
  __int64 v281; // [rsp+18h] [rbp-250h]
  __int64 v282; // [rsp+18h] [rbp-250h]
  unsigned __int64 v283; // [rsp+20h] [rbp-248h]
  __int64 v284; // [rsp+20h] [rbp-248h]
  bool v285; // [rsp+3Ah] [rbp-22Eh] BYREF
  bool v286; // [rsp+3Bh] [rbp-22Dh] BYREF
  unsigned int v287; // [rsp+3Ch] [rbp-22Ch] BYREF
  unsigned int v288; // [rsp+40h] [rbp-228h] BYREF
  unsigned int v289; // [rsp+44h] [rbp-224h] BYREF
  unsigned __int64 v290; // [rsp+48h] [rbp-220h] BYREF
  __int64 v291; // [rsp+50h] [rbp-218h] BYREF
  unsigned int v292; // [rsp+58h] [rbp-210h]
  __int64 v293; // [rsp+60h] [rbp-208h]
  void *ptr; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v295; // [rsp+78h] [rbp-1F0h]
  _BYTE v296[16]; // [rsp+80h] [rbp-1E8h] BYREF
  __m128 v297; // [rsp+90h] [rbp-1D8h] BYREF
  _QWORD *v298; // [rsp+A0h] [rbp-1C8h]
  void *v299[2]; // [rsp+120h] [rbp-148h] BYREF
  _QWORD *v300; // [rsp+130h] [rbp-138h] BYREF
  unsigned __int64 *v301; // [rsp+138h] [rbp-130h] BYREF
  unsigned __int8 *v302[11]; // [rsp+140h] [rbp-128h] BYREF
  char v303; // [rsp+198h] [rbp-D0h]
  unsigned int v304; // [rsp+1A0h] [rbp-C8h]
  char v305; // [rsp+1A4h] [rbp-C4h]

  v8 = (_QWORD *)a1;
  v9 = a2;
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v10 - 35 > 3 )
  {
    v13 = *(_QWORD *)(a1 + 232);
    if ( v10 != 38 )
      goto LABEL_28;
LABEL_65:
    v70 = *(_BYTE *)(v13 + 2) & 1;
    goto LABEL_66;
  }
  if ( !sub_B979F0((_QWORD *)a2) )
  {
    v20 = sub_B72690(a2 + 72);
    v25 = v20;
    if ( !v20 )
      BUG();
    a2 = *(_QWORD *)(v20 + 40);
    sub_7052B0((__int64 *)(a2 + 96), a2, v21, v22, v23, v24);
    a6 = *(unsigned int *)(*(_QWORD *)(v25 + 64) + 20LL);
    if ( (_DWORD)a6 )
    {
      if ( a3 != 1 )
      {
        v26 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v299, (__int64 *)(a1 + 8), *(_DWORD *)(v9 + 24), 0xDA4u, 0);
        LOBYTE(v291) = (*(_BYTE *)(v9 + 28) & 0x7F) == 38;
        v27 = sub_1588420((__int64)v299, (unsigned __int8 *)&v291);
        v28 = 1;
        v29 = *(_BYTE *)(v25 + 9) >> 5;
        if ( v29 != 1 )
          v28 = 2 * (v29 != 0);
        LODWORD(ptr) = v28;
        v30 = sub_16CF160(v27, (unsigned int *)&ptr);
        sub_7052B0((__int64 *)(*(_QWORD *)(v25 + 40) + 96LL), *(_QWORD *)(v25 + 40), v31, v32, v33, v34);
        v297.m128_i32[0] = *(_DWORD *)(*(_QWORD *)(v25 + 64) + 20LL);
        sub_16CF160(v30, (unsigned int *)&v297);
        sub_15F7200(v299);
        sub_7052B0((__int64 *)(*(_QWORD *)(v25 + 40) + 96LL), *(_QWORD *)(v25 + 40), v35, v36, v37, v38);
        v42 = *(_QWORD *)(v25 + 64);
        if ( (*(_BYTE *)(v42 + 32) & 1) != 0 )
          v43 = sub_B969C0(v42);
        else
          v43 = *(_QWORD *)(v42 + 32);
        sub_7052B0((__int64 *)(*(_QWORD *)(v25 + 40) + 96LL), *(_QWORD *)(v25 + 40), v39, v40, v41, 0);
        v44 = (unsigned int *)(v43 + 24LL * *(unsigned int *)(*(_QWORD *)(v25 + 64) + 20LL));
        sub_7052B0((__int64 *)(*(_QWORD *)(v25 + 40) + 96LL), *(_QWORD *)(v25 + 40), v45, v46, v47, v48);
        v49 = *(_QWORD *)(v25 + 64);
        v18 = 0;
        if ( (*(_BYTE *)(v49 + 32) & 1) != 0 )
        {
          v184 = sub_B969C0(v49);
          v18 = 0;
          v50 = (unsigned int *)v184;
        }
        else
        {
          v50 = *(unsigned int **)(v49 + 32);
        }
        if ( v44 != v50 )
        {
          do
          {
            v51 = *v50;
            v50 += 6;
            sub_168B9F0((__int64)v299, v26, v51, 0x16D6u, 0);
            v52 = *(v50 - 5);
            v297.m128_i32[0] = *(v50 - 6);
            v297.m128_i32[1] = v52;
            sub_1587DB0((__int64)v299, (__int64 *)&v297);
            sub_15F7200(v299);
          }
          while ( v44 != v50 );
          return 0;
        }
        return v18;
      }
      return 0;
    }
  }
  v11 = *(_BYTE *)(v9 + 28) & 0x7F;
  if ( v11 == 38 )
  {
    v13 = *(_QWORD *)(a1 + 232);
    goto LABEL_65;
  }
  if ( (unsigned int)v11 - 35 > 3 )
  {
    v13 = *(_QWORD *)(a1 + 232);
  }
  else
  {
    v12 = sub_AED5B0(v9);
    v13 = *(_QWORD *)(a1 + 232);
    if ( v12 )
    {
      if ( *(char *)(v13 + 1) >= 0 )
      {
        if ( a3 != 1 )
        {
          v14 = (__int64 *)(a1 + 8);
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
          sub_168B9F0((__int64)v299, (__int64 *)(a1 + 8), *(_DWORD *)(v15 + 24), 0xDA3u, 0);
          sub_15F7200(v299);
          if ( (*(_BYTE *)(v15 + 82) & 4) == 0 )
          {
            v16 = v15;
            do
            {
              v17 = sub_B984B0(v16);
              v16 = *(_QWORD *)v17;
            }
            while ( (*(_BYTE *)(*(_QWORD *)v17 + 82LL) & 4) == 0 );
            if ( v16 != v15 )
            {
              sub_168B9F0((__int64)v299, v14, *(_DWORD *)(v16 + 24), 0x183Cu, 0);
              sub_15F7200(v299);
            }
          }
        }
        return 0;
      }
      if ( !a3 )
      {
        a2 = a1 + 8;
        sub_168B9F0((__int64)v299, (__int64 *)(a1 + 8), *(_DWORD *)(v9 + 24), 0x1A4Fu, 0);
        sub_15F7200(v299);
        v13 = *(_QWORD *)(a1 + 232);
      }
    }
  }
LABEL_28:
  if ( (*(_BYTE *)(v13 + 2) & 1) != 0 )
    goto LABEL_29;
  LOBYTE(v299[0]) = (*(_BYTE *)(v9 + 84) & 3) == 2;
  v73 = sub_C1D490(v9, a2, v13, a4);
  a2 = a3;
  if ( (unsigned __int8)sub_1837780(a1, a3, *(unsigned int *)(v9 + 24), v73, 3483, (__int64)v299) )
    return 0;
  v70 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1;
  if ( (*(_BYTE *)(v9 + 28) & 0x7F) != 0x24 )
    goto LABEL_66;
  if ( v70 )
    goto LABEL_29;
  v74 = sub_B72690(v9 + 72);
  v79 = v74;
  if ( !v74 )
    BUG();
  a2 = *(_QWORD *)(v74 + 40);
  sub_7052B0((__int64 *)(a2 + 96), a2, v75, v76, v77, v78);
  if ( (*(_BYTE *)(*(_QWORD *)(v79 + 64) + 8LL) & 0x10) != 0 && *(char *)(sub_B8C5D0(v79 - 64) + 1) < 0 )
    goto LABEL_116;
  if ( a3 == 1 )
    return 0;
  v82 = *(_QWORD *)(sub_B8C1B0(v9 + 72) + 16);
  if ( (v82 & 4) != 0 )
  {
    v283 = *(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFF8LL);
    v85 = v283;
  }
  else
  {
    v283 = v82 & 0xFFFFFFFFFFFFFFF8LL;
    v85 = v82 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( !v85 )
    BUG();
  sub_7052B0((__int64 *)(*(_QWORD *)(v85 + 40) + 96LL), *(_QWORD *)(v85 + 40), v80, v81, v83, v84);
  v90 = *(_QWORD *)(v85 + 64);
  if ( (*(_BYTE *)(v90 + 24) & 1) != 0 )
    v91 = sub_B96980(v90);
  else
    v91 = *(_QWORD *)(v90 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v283 + 40) + 96LL), *(_QWORD *)(v283 + 40), v86, v87, v88, v89);
  a2 = *(_QWORD *)(v283 + 40);
  v92 = v91 + 24LL * *(unsigned int *)(*(_QWORD *)(v283 + 64) + 16LL);
  sub_7052B0((__int64 *)(a2 + 96), a2, v93, v94, v95, v96);
  v101 = *(_QWORD *)(v283 + 64);
  if ( (*(_BYTE *)(v101 + 24) & 1) != 0 )
    v102 = sub_B96980(v101);
  else
    v102 = *(_QWORD *)(v101 + 24);
  if ( v92 != v102 )
  {
    v276 = v8;
    v281 = v9;
    v103 = v92;
    while ( 1 )
    {
      v104 = *(__int64 **)(v102 + 16);
      v105 = *v104 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(*(_QWORD *)v105 + 8LL) & 0xF) != 0 )
      {
        v163 = sub_F64F00(*v104, a2, (__int64)v104, v98, v99);
        v104 = *(__int64 **)(v102 + 16);
        v106 = (__int64 *)(v163 & 0xFFFFFFFFFFFFFFF0LL);
      }
      else
      {
        v106 = (__int64 *)(*(_QWORD *)v105 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v107 = (void *)*v104;
      v299[1] = v104 + 1;
      v299[0] = v107;
      v108 = sub_F6CCB0((__int64 *)v299, a7);
      v113 = *v106;
      v268 = v108;
      while ( 1 )
      {
        if ( (unsigned __int8)(*(_BYTE *)(v113 + 16) - 2) <= 4u )
          goto LABEL_100;
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v113 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
          break;
        v114 = sub_F63050(v113, a2, v109, v110);
        if ( !v114 )
          break;
        v113 = v114;
LABEL_100:
        v113 = *(_QWORD *)(*(_QWORD *)(v113 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      }
      v115 = sub_F63270(v113, a2, v109, v110, v111, v112);
      if ( v115 )
      {
        LOBYTE(v116) = sub_B9C260((__int64)v115);
        if ( !(_BYTE)v116 )
        {
          v18 = v116;
          if ( a3 )
            return v18;
          v117 = v276 + 1;
          sub_168B9F0((__int64)v299, v276 + 1, *(_DWORD *)(v281 + 24), 0xD96u, 0);
          v118 = *(unsigned __int8 *)(v281 + 84);
          v119 = *(_BYTE *)(v281 + 84) & 3;
          if ( v303 )
          {
            v118 = v119;
            sub_AE9DF0(v302, v119, 2u);
          }
          else
          {
            if ( !v305 )
              goto LABEL_109;
            v209 = sub_168B9E0(v299);
            v210 = (__int64)v300;
            if ( v300 )
              v210 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                       v300,
                       v118,
                       *v300,
                       v207,
                       v208,
                       0);
            v297.m128_u64[0] = v210;
            v211 = sub_1587BC0(v209, (__int64 *)&v297, v206, v207, v208, 0);
            v118 = v119;
            sub_AE9DF0((unsigned __int8 **)(*v211 + 32LL * v304 + 8), v119, 2u);
          }
          if ( v303 )
          {
            v186 = v302;
            goto LABEL_237;
          }
          if ( v305 )
          {
            v196 = sub_168B9E0(v299);
            v198 = (__int64)v300;
            if ( v300 )
              v198 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                       v300,
                       v118,
                       *v300,
                       v195,
                       v197,
                       0);
            v297.m128_u64[0] = v198;
            v199 = sub_1587BC0(v196, (__int64 *)&v297, v194, v195, v197, 0);
            v186 = (unsigned __int8 **)(*v199 + 32LL * v304 + 8);
LABEL_237:
            v118 = 1;
            sub_AE9DF0(v186, 1, 2u);
            if ( v303 )
            {
              sub_AE9DF0(v302, 0, 9u);
              goto LABEL_239;
            }
          }
LABEL_109:
          if ( v305 )
          {
            v202 = sub_168B9E0(v299);
            v204 = (__int64)v300;
            if ( v300 )
              v204 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                       v300,
                       v118,
                       *v300,
                       v201,
                       v203,
                       0);
            v297.m128_u64[0] = v204;
            v205 = sub_1587BC0(v202, (__int64 *)&v297, v200, v201, v203, 0);
            sub_AE9DF0((unsigned __int8 **)(*v205 + 32LL * v304 + 8), 0, 9u);
LABEL_239:
            if ( v303 )
            {
              sub_AE9DF0(v302, (__int64)v106, 8u);
            }
            else if ( v305 )
            {
              v190 = sub_168B9E0(v299);
              v192 = (__int64)v300;
              if ( v300 )
                v192 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                         v300,
                         0,
                         *v300,
                         v189,
                         v191,
                         0);
              v297.m128_u64[0] = v192;
              v193 = sub_1587BC0(v190, (__int64 *)&v297, v188, v189, v191, 0);
              sub_AE9DF0((unsigned __int8 **)(*v193 + 32LL * v304 + 8), (__int64)v106, 8u);
            }
          }
          sub_15F7200(v299);
          v120 = (__int64)(v276 + 1);
          sub_168B9F0((__int64)v299, v117, v268, 0x16D5u, 0);
          if ( v303 )
          {
            v185 = v302;
          }
          else
          {
            if ( !v305 )
              goto LABEL_112;
            v226 = sub_168B9E0(v299);
            v228 = (__int64)v300;
            if ( v300 )
              v228 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                       v300,
                       v117,
                       *v300,
                       v225,
                       v227,
                       0);
            v297.m128_u64[0] = v228;
            v229 = sub_1587BC0(v226, (__int64 *)&v297, v224, v225, v227, 0);
            v185 = (unsigned __int8 **)(*v229 + 32LL * v304 + 8);
          }
          v120 = 1;
          sub_AE9DF0(v185, 1, 2u);
          if ( v303 )
          {
            sub_AE9DF0(v302, 0, 9u);
            goto LABEL_232;
          }
LABEL_112:
          if ( v305 )
          {
            v220 = sub_168B9E0(v299);
            v222 = (__int64)v300;
            if ( v300 )
              v222 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                       v300,
                       v120,
                       *v300,
                       v219,
                       v221,
                       0);
            v297.m128_u64[0] = v222;
            v223 = sub_1587BC0(v220, (__int64 *)&v297, v218, v219, v221, 0);
            sub_AE9DF0((unsigned __int8 **)(*v223 + 32LL * v304 + 8), 0, 9u);
LABEL_232:
            if ( v303 )
            {
              sub_AE9DF0(v302, (__int64)v106, 8u);
            }
            else if ( v305 )
            {
              v214 = sub_168B9E0(v299);
              v216 = (__int64)v300;
              if ( v300 )
                v216 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                         v300,
                         0,
                         *v300,
                         v213,
                         v215,
                         0);
              v297.m128_u64[0] = v216;
              v217 = sub_1587BC0(v214, (__int64 *)&v297, v212, v213, v215, 0);
              sub_AE9DF0((unsigned __int8 **)(*v217 + 32LL * v304 + 8), (__int64)v106, 8u);
            }
          }
          sub_15F7200(v299);
          return 0;
        }
      }
      v102 += 24;
      if ( v102 == v103 )
      {
        v8 = v276;
        v9 = v281;
        break;
      }
    }
  }
  v122 = sub_B7E900(v283 - 64, a2, v97, v98, v99, v100);
  if ( !v122 )
    goto LABEL_116;
LABEL_182:
  v155 = *(unsigned int *)(v122 + 24);
  ptr = *(void **)(v122 + 48);
  v274 = v155;
  for ( i = *(_QWORD *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFF0LL);
        ;
        i = *(_QWORD *)(*(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(i + 16) - 2) <= 4u )
      continue;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    v157 = sub_F63050(i, a2, v154, v155);
    if ( !v157 )
      break;
    i = v157;
  }
  v158 = sub_F63270(i, a2, v154, v155, a5, a6);
  if ( v158 )
  {
    LOBYTE(v159) = sub_B9C260((__int64)v158);
    if ( !(_BYTE)v159 )
    {
      v18 = v159;
      if ( a3 )
        return v18;
      v160 = v8 + 1;
      sub_168B9F0((__int64)v299, v160, *(_DWORD *)(v9 + 24), 0xD96u, 0);
      v161 = *(_BYTE *)(v9 + 84) & 3;
      v162 = v161;
      if ( v303 )
      {
        v232 = v161;
        sub_AE9DF0(v302, v161, 2u);
      }
      else
      {
        if ( !v305 )
          goto LABEL_192;
        v255 = sub_168B9E0(v299);
        v256 = (__int64)v300;
        if ( v300 )
          v256 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                   v300,
                   v160,
                   *v300,
                   v253,
                   v254,
                   0);
        v297.m128_u64[0] = v256;
        v257 = sub_1587BC0(v255, (__int64 *)&v297, v252, v253, v254, 0);
        v232 = v162;
        sub_AE9DF0((unsigned __int8 **)(*v257 + 32LL * v304 + 8), v162, 2u);
      }
      if ( v303 )
      {
        sub_AE9DF0(v302, 0, 2u);
        goto LABEL_281;
      }
      if ( v305 )
      {
        v248 = sub_168B9E0(v299);
        v250 = (__int64)v300;
        if ( v300 )
          v250 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                   v300,
                   v232,
                   *v300,
                   v247,
                   v249,
                   0);
        v297.m128_u64[0] = v250;
        v251 = sub_1587BC0(v248, (__int64 *)&v297, v246, v247, v249, 0);
        sub_AE9DF0((unsigned __int8 **)(*v251 + 32LL * v304 + 8), 0, 2u);
LABEL_281:
        v233 = *(_QWORD *)(v122 + 40);
        if ( v303 )
        {
          sub_AE9DF0(v302, *(_QWORD *)(v122 + 40), 9u);
        }
        else if ( v305 )
        {
          v243 = sub_168B9E0(v299);
          v244 = (__int64)v300;
          if ( v300 )
            v244 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                     v300,
                     0,
                     *v300,
                     v241,
                     v242,
                     0);
          v297.m128_u64[0] = v244;
          v245 = sub_1587BC0(v243, (__int64 *)&v297, v240, v241, v242, 0);
          sub_AE9DF0((unsigned __int8 **)(*v245 + 32LL * v304 + 8), v233, 9u);
        }
      }
LABEL_192:
      sub_1605D30((__int64)v299, (__int64 *)&ptr);
      sub_15F7200(v299);
      sub_168B9F0((__int64)v299, v160, v274, 0x16D5u, 0);
      if ( v303 )
      {
        sub_AE9DF0(v302, 0, 2u);
      }
      else
      {
        if ( !v305 )
        {
LABEL_194:
          sub_1605D30((__int64)v299, (__int64 *)&ptr);
          sub_15F7200(v299);
          return 0;
        }
        v236 = sub_168B9E0(v299);
        v238 = (__int64)v300;
        if ( v300 )
          v238 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                   v300,
                   v160,
                   *v300,
                   v235,
                   v237,
                   0);
        v297.m128_u64[0] = v238;
        v239 = sub_1587BC0(v236, (__int64 *)&v297, v234, v235, v237, 0);
        sub_AE9DF0((unsigned __int8 **)(*v239 + 32LL * v304 + 8), 0, 2u);
      }
      v231 = *(_QWORD *)(v122 + 40);
      if ( v303 )
      {
        sub_AE9DF0(v302, *(_QWORD *)(v122 + 40), 9u);
      }
      else if ( v305 )
      {
        v261 = sub_168B9E0(v299);
        v262 = (__int64)v300;
        if ( v300 )
          v262 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, _QWORD))(*v300 + 32LL))(
                   v300,
                   0,
                   *v300,
                   v259,
                   v260,
                   0);
        v297.m128_u64[0] = v262;
        v263 = sub_1587BC0(v261, (__int64 *)&v297, v258, v259, v260, 0);
        sub_AE9DF0((unsigned __int8 **)(*v263 + 32LL * v304 + 8), v231, 9u);
      }
      goto LABEL_194;
    }
  }
  while ( 1 )
  {
    v121 = *(_QWORD *)(v122 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v122 = v121;
    if ( !v121 )
      break;
    if ( (*(_BYTE *)(v121 + 28) & 0x7Fu) - 49 <= 2 )
      goto LABEL_182;
  }
LABEL_116:
  v70 = *(_BYTE *)(v8[29] + 2LL) & 1;
LABEL_66:
  if ( !v70 )
  {
    a2 = v9;
    if ( !(unsigned __int8)sub_18383D0((__int64)v8, v9, a3, a4) )
      return 0;
  }
LABEL_29:
  v53 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL);
  if ( v53 == sub_6EF210 )
  {
    a2 = (__int64)v299;
    v54 = (_WORD *)sub_B7F750((_QWORD *)v9, v299, (__int64)sub_6EF210, a4, a5, a6);
  }
  else
  {
    v54 = (_WORD *)v53(v9);
  }
  ptr = v296;
  v295 = 0x400000000LL;
  if ( (*v54 & 0x1FF) == 0xFB )
  {
    if ( a3 )
    {
      if ( a3 == 1 && *(char *)(v8[29] + 1LL) >= 0 )
        return 0;
    }
    else
    {
      v269 = v54;
      v127 = sub_EEB7E0((unsigned __int64)v54, a2, *(double *)a7.m128_u64);
      sub_168BB30((__int64)v299, v8 + 1, v127, 0xEu, 0);
      v297.m128_i8[0] = (*(_BYTE *)(v9 + 28) & 0x7F) == 38;
      sub_1588420((__int64)v299, (unsigned __int8 *)&v297);
      sub_15F7200(v299);
      v54 = v269;
    }
  }
  v287 = 0;
  v288 = 0;
  v289 = 0;
  sub_EE9E50((__m128 *)v299, (__int64)v54);
  si128 = (__m128)_mm_load_si128((const __m128i *)v299);
  v265 = v301;
  v58 = (__int64)&v289;
  v59 = (unsigned __int64 *)v299[0];
  v298 = v300;
  v297 = si128;
  v275 = v302[0];
  v60 = si128.m128_i64[1];
  while ( 2 )
  {
    while ( 2 )
    {
      if ( v265 == v59 )
        goto LABEL_42;
LABEL_36:
      if ( (v60 & 3) != 0 )
      {
        v61 = *(_QWORD *)sub_EF2B30((__int64)&v297);
        if ( v61 )
          goto LABEL_38;
      }
      else
      {
        v61 = *v59;
        if ( !*v59 )
          goto LABEL_60;
LABEL_38:
        v58 = v9;
        v62 = sub_184B950((__int64)v8, v9, v61, (__int64)&ptr, &v287, &v288, si128, &v289, a3);
        v55 = v264;
        if ( !(_BYTE)v62 )
        {
          v18 = v62;
          goto LABEL_57;
        }
      }
      v60 = v297.m128_i64[1];
      if ( (v297.m128_i8[8] & 3) == 0 )
      {
        v59 = (unsigned __int64 *)v297.m128_u64[0];
LABEL_60:
        v297.m128_u64[0] = (unsigned __int64)++v59;
        continue;
      }
      break;
    }
    if ( (v297.m128_u64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v58 = 1;
      sub_EF2750((unsigned __int64 *)&v297, 1);
      v60 = v297.m128_i64[1];
      v59 = (unsigned __int64 *)v297.m128_u64[0];
      continue;
    }
    break;
  }
  sub_EF2960((__int64)&v297);
  v60 = v297.m128_i64[1];
  v59 = (unsigned __int64 *)v297.m128_u64[0];
  if ( v265 != (unsigned __int64 *)v297.m128_u64[0] )
    goto LABEL_36;
LABEL_42:
  if ( v275 != (unsigned __int8 *)v60 )
    goto LABEL_36;
  v63 = v289;
  if ( a3 == 1 )
  {
    if ( v289 && (*(_BYTE *)(v8[29] + 2LL) & 1) == 0 )
      goto LABEL_78;
    v58 = v288;
    if ( v288 )
    {
      if ( *(char *)(v8[29] + 1LL) >= 0 )
        goto LABEL_78;
    }
    v60 = v287;
    if ( v287 )
    {
      if ( (*(_BYTE *)(v8[29] + 1LL) & 0x40) == 0 )
        goto LABEL_78;
    }
LABEL_47:
    if ( (*(_BYTE *)(v9 + 28) & 0x7F) != 0x26 )
      goto LABEL_74;
LABEL_48:
    v266 = v9 + 72;
    v64 = sub_B72690(v9 + 72);
    v66 = v64;
    if ( !v64 )
      BUG();
    if ( *(_BYTE *)(v64 + 9) >> 5 == 2 )
    {
      if ( (*(_DWORD *)(v9 + 84) & 0x1FFFE000) == 0 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v64 + 40) + 96LL), *(_QWORD *)(v64 + 40), v266, v65, v55, v56);
        if ( (*(_BYTE *)(*(_QWORD *)(v66 + 64) + 2LL) & 0x10) != 0 )
        {
          if ( a3 )
          {
            v67 = (char *)v8[29];
            if ( v67[1] >= 0 )
              goto LABEL_78;
          }
          else
          {
            sub_168BB30((__int64)v299, v8 + 1, *(_DWORD *)(v9 + 24), 0xFu, 0);
            sub_15F7200(v299);
            v67 = (char *)v8[29];
          }
          goto LABEL_52;
        }
      }
      goto LABEL_51;
    }
    if ( (unsigned __int8)sub_B8E180(v266)
      || (unsigned __int16)(*(_DWORD *)(v9 + 84) >> 13) == 1
      && (v230 = *(_BYTE **)sub_B98F20(v9), (*v230 & 6) == 0)
      && (v230[28] & 1) != 0 )
    {
LABEL_51:
      v67 = (char *)v8[29];
      goto LABEL_52;
    }
    v282 = v66 - 64;
    v130 = sub_B7E900(v66 - 64, v58, v128, v129, v55, v56);
    if ( v130 )
    {
      v270 = 0;
      v277 = v66;
      v135 = v130;
      while ( !(unsigned __int8)sub_B78060(v135, v58, v131, v132, v133) )
      {
        do
        {
          v136 = *(_QWORD *)(v135 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v135 = v136;
          if ( !v136 )
          {
            v66 = v277;
            v137 = (unsigned int)(v270 + 1);
            goto LABEL_148;
          }
        }
        while ( (*(_BYTE *)(v136 + 28) & 0x7Fu) - 49 > 2 );
        ++v270;
      }
    }
    else
    {
      v137 = 0;
LABEL_148:
      v58 = *(_QWORD *)(v66 + 40);
      v278 = v137;
      v271 = (unsigned __int16)(*(_DWORD *)(v9 + 84) >> 13);
      sub_7052B0((__int64 *)(v58 + 96), v58, v137, v132, v133, v134);
      if ( v271 == *(_DWORD *)(*(_QWORD *)(v66 + 64) + 16LL) + v278 )
        goto LABEL_51;
    }
    v299[1] = &word_10;
    v299[0] = &v301;
    LODWORD(v300) = 0;
    BYTE4(v300) = 1;
    v272 = sub_B98F20(v9) + 8LL * (unsigned __int16)(*(_DWORD *)(v9 + 84) >> 13);
    v138 = sub_B98F20(v9);
    if ( v272 != v138 )
    {
      v143 = (__int64 **)v272;
      v279 = v8;
      v273 = a3;
      v284 = v9;
      v144 = (__int64 **)v138;
      do
      {
        v58 = **v144;
        v145 = (v58 >> 1) & 3;
        if ( v145 == 1 )
        {
          v58 &= 0xFFFFFFFFFFFFFFF8LL;
          if ( v58 )
          {
            v146 = sub_1703870((__int64)v299, v58);
            v139 = v299[0];
            v58 = (__int64)(BYTE4(v300) ? (char *)v299[0] + 8 * HIDWORD(v299[1]) : (char *)v299[0]
                                                                                 + 8 * LODWORD(v299[1]));
            if ( v146 != (_QWORD *)v58 && *v146 >= 0xFFFFFFFFFFFFFFFELL )
            {
              v147 = v146 + 1;
              do
              {
                v139 = v147;
                if ( v147 == (_QWORD *)v58 )
                  break;
                ++v147;
              }
              while ( *v139 >= 0xFFFFFFFFFFFFFFFELL );
            }
          }
        }
        else if ( v145 == 2 )
        {
          v58 &= 0xFFFFFFFFFFFFFFF8LL;
          if ( v58 )
          {
            v164 = *(__int64 **)(v58 + 56);
            for ( j = &v164[*(unsigned int *)(v58 + 64)]; j != v164; ++v164 )
            {
              v166 = sub_1703870((__int64)v299, *v164);
              v139 = v299[0];
              if ( BYTE4(v300) )
                v58 = (__int64)v299[0] + 8 * HIDWORD(v299[1]);
              else
                v58 = (__int64)v299[0] + 8 * LODWORD(v299[1]);
              if ( v166 != (_QWORD *)v58 && *v166 >= 0xFFFFFFFFFFFFFFFELL )
              {
                v167 = v166 + 1;
                do
                {
                  v139 = v167;
                  if ( (_QWORD *)v58 == v167 )
                    break;
                  ++v167;
                }
                while ( *v139 >= 0xFFFFFFFFFFFFFFFELL );
              }
            }
          }
        }
        ++v144;
      }
      while ( v143 != v144 );
      v8 = v279;
      v9 = v284;
      a3 = v273;
    }
    v297.m128_i8[0] = 0;
    v148 = sub_B7E900(v282, v58, (__int64)v139, v140, v141, v142);
    if ( v148 )
    {
      v149 = v148;
LABEL_164:
      v150 = sub_1845050((__int64)v8, v9, v149, (__int64)v299, &v297, a3);
      if ( !(_BYTE)v150 )
      {
        v18 = v150;
        if ( !BYTE4(v300) )
        {
          free(v299[0]);
          v18 = 0;
        }
        goto LABEL_57;
      }
      while ( 1 )
      {
        v151 = *(_QWORD *)(v149 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v149 = v151;
        if ( !v151 )
          break;
        if ( (*(_BYTE *)(v151 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_164;
      }
    }
    if ( !BYTE4(v300) )
      free(v299[0]);
    goto LABEL_51;
  }
  if ( v289 )
  {
    v71 = v8 + 1;
    v72 = 24;
  }
  else
  {
    v63 = v288;
    if ( v288 )
    {
      v71 = v8 + 1;
      v72 = 23;
      LODWORD(v63) = v288;
    }
    else
    {
      if ( !v287 )
        goto LABEL_47;
      v71 = v8 + 1;
      v72 = 22;
      LODWORD(v63) = v287;
    }
  }
  sub_168BB30((__int64)v299, v71, v63, v72, 0);
  v58 = (__int64)&v297;
  v297.m128_i8[0] = (*(_BYTE *)(v9 + 28) & 0x7F) == 38;
  sub_1588420((__int64)v299, (unsigned __int8 *)&v297);
  sub_15F7200(v299);
  if ( (*(_BYTE *)(v9 + 28) & 0x7F) == 0x26 )
    goto LABEL_48;
LABEL_74:
  if ( (_DWORD)v295 )
  {
    if ( (unsigned int)v295 != 1 )
    {
      if ( a3 )
      {
LABEL_76:
        if ( a3 == 1 )
        {
          v67 = (char *)v8[29];
          if ( (v67[1] & 0x20) == 0 )
            goto LABEL_78;
          goto LABEL_52;
        }
      }
      else
      {
        sub_168BB30((__int64)v299, v8 + 1, *((_DWORD *)ptr + (unsigned int)v295 - 1), 8u, 0);
        sub_15F7200(v299);
        v152 = 0;
        if ( (_DWORD)v295 != 1 )
        {
          v280 = v9;
          v153 = 0;
          do
          {
            sub_168B9F0((__int64)v299, v8 + 1, *((_DWORD *)ptr + v152), 0x16D3u, 0);
            sub_15F7200(v299);
            v152 = ++v153;
          }
          while ( v153 < (unsigned __int64)(unsigned int)v295 - 1 );
          v9 = v280;
          v67 = (char *)v8[29];
          goto LABEL_52;
        }
      }
    }
    goto LABEL_51;
  }
  if ( a3 )
    goto LABEL_76;
  v179 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1D490(v9, v58, v63, v60) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v179 + 16) == 13 && ((*(_WORD *)(v179 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v67 = (char *)v8[29];
    goto LABEL_226;
  }
  v187 = (*(_BYTE *)(*(_QWORD *)(sub_C1D490(v9, v58, v180, v181) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0;
  v67 = (char *)v8[29];
  if ( !v187 )
  {
LABEL_226:
    v182 = v8 + 1;
    v183 = *(_DWORD *)(v9 + 24);
    if ( (v67[1] & 0x20) == 0 )
      goto LABEL_227;
    sub_168B9F0((__int64)v299, v182, v183, 0x1A44u, 0);
    v297.m128_i8[0] = (*(_BYTE *)(v9 + 84) & 3) == 2;
    sub_1588420((__int64)v299, (unsigned __int8 *)&v297);
    sub_15F7200(v299);
    v67 = (char *)v8[29];
    goto LABEL_52;
  }
  if ( (v67[2] & 1) != 0 )
  {
LABEL_52:
    if ( (v67[200] & 4) == 0 )
      goto LABEL_56;
    v68 = *(unsigned int *)(v9 + 24);
    if ( (_DWORD)v68 )
    {
      v69 = sub_1021680(v8[34], v68);
      if ( v69 && v69 != 3 )
        goto LABEL_56;
      v68 = *(unsigned int *)(v9 + 24);
    }
    if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v8[33] + 32LL), 0x158Fu, v68, v8[33], v55, v56) == 1
      || (v299[0] = &v300, v299[1] = (void *)0x800000000LL, a3) )
    {
LABEL_56:
      v18 = 1;
      goto LABEL_57;
    }
    if ( !(unsigned __int8)sub_C59B90((_QWORD *)v9, (__int64)v299) )
    {
      v168 = v8 + 1;
      sub_168B9F0((__int64)&v297, v168, *(_DWORD *)(v9 + 24), 0x158Fu, 0);
      v286 = (*(_BYTE *)(v9 + 28) & 0x7F) == 38;
      v169 = sub_1588420((__int64)&v297, (unsigned __int8 *)&v286);
      v285 = (*(_BYTE *)(v9 + 84) & 3) == 2;
      v170 = sub_1588420(v169, (unsigned __int8 *)&v285);
      v171 = *(_DWORD *)(v9 + 24);
      v172 = v170;
      v173 = *(_QWORD *)(v9 + 160);
      v291 = *(_QWORD *)(v9 + 40);
      v292 = v171;
      v293 = v173;
      v174 = sub_B85A10((__int64)&v291);
      if ( !v174 )
        v174 = v292;
      v175 = v172;
      v290 = __PAIR64__(v174, v292);
      v176 = 0;
      sub_1587DB0(v175, (__int64 *)&v290);
      sub_15F7200(&v297);
      v177 = LODWORD(v299[1]);
      if ( !LODWORD(v299[1]) )
        goto LABEL_135;
      do
      {
        v178 = (unsigned int *)((char *)v299[0] + 32 * v176++);
        sub_168CDE0((__int64)&v297, v168, *v178, (__int64)(v178 + 2), 0);
        sub_15F7200(&v297);
      }
      while ( v177 != v176 );
    }
    v123 = v299[0];
    v124 = (char *)v299[0] + 32 * LODWORD(v299[1]);
    if ( v299[0] == v124 )
      goto LABEL_136;
    do
    {
      v124 -= 4;
      v125 = v124[1];
      if ( v125 )
      {
        v126 = v124[2];
        if ( v126 )
          sub_1580C40(v126, v125);
      }
    }
    while ( v123 != v124 );
LABEL_135:
    v124 = v299[0];
LABEL_136:
    if ( v124 != &v300 )
      free(v124);
    goto LABEL_56;
  }
  v182 = v8 + 1;
  v183 = *(_DWORD *)(v9 + 24);
LABEL_227:
  sub_168B9F0((__int64)v299, v182, v183, 0xD94u, 0);
  v297.m128_i8[0] = (*(_BYTE *)(v9 + 84) & 3) == 2;
  sub_1588420((__int64)v299, (unsigned __int8 *)&v297);
  sub_15F7200(v299);
LABEL_78:
  v18 = 0;
LABEL_57:
  if ( ptr != v296 )
  {
    v267 = v18;
    free(ptr);
    return v267;
  }
  return v18;
}
