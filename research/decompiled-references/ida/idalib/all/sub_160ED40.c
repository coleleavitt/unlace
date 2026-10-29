void __fastcall sub_160ED40(__int64 a1)
{
  __int64 *v1; // r15
  __int64 v2; // rax
  int v3; // esi
  void (__fastcall *v4)(_QWORD); // rax
  __int64 *v5; // rdi
  __int64 v6; // rbp
  __m128 *v7; // r14
  int v8; // ebx
  __int64 *v9; // r13
  __m128 *v10; // r12
  int v11; // r13d
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  void *v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 j; // r9
  __int64 v27; // rax
  __m128 *v28; // rbp
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // rdi
  int v35; // edx
  __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rax
  _QWORD *i; // rax
  int v40; // eax
  __m128 *v41; // rbx
  __int64 v42; // rsi
  unsigned __int32 v43; // r12d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int8 v48; // al
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  char v54; // dl
  unsigned __int64 *v55; // r14
  unsigned __int64 *v56; // rbp
  unsigned __int64 v57; // r12
  unsigned __int64 *v58; // rax
  __int64 v59; // rdx
  unsigned int v60; // eax
  __int64 v61; // rdi
  int v62; // eax
  __int64 v63; // rdx
  int v64; // r14d
  unsigned __int64 v65; // r12
  __int64 v66; // rbx
  __int64 *v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // r13
  char *v70; // rsi
  __int64 v71; // rdi
  __int64 *v72; // rcx
  char *v73; // rax
  char *v74; // rsi
  char *v75; // rax
  __int64 v76; // r9
  unsigned int v77; // eax
  bool v78; // zf
  __int64 v79; // rax
  unsigned __int32 v80; // eax
  __int64 *v81; // r9
  unsigned __int64 v82; // rax
  __int64 v83; // rdi
  void (*v84)(); // rax
  char **v85; // rbx
  char **k; // rbp
  char *v87; // r13
  __int64 v88; // rdi
  void (*v89)(); // rax
  __int64 *v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rax
  __int64 v95; // rcx
  _QWORD *v96; // rax
  __int64 *v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  __int64 v102; // rcx
  _QWORD *v103; // rax
  __int64 *v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  __int64 v109; // rcx
  _QWORD *v110; // rax
  __int64 *v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rax
  __int64 v116; // rcx
  _QWORD *v117; // rax
  unsigned int *v118; // rdx
  __int64 v119; // rbp
  int v120; // eax
  char v121; // bl
  unsigned __int64 v122; // rbx
  __int64 v123; // rdi
  int v124; // edx
  int v125; // r13d
  __int64 v126; // rbx
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 *v131; // rbp
  __int64 v132; // rbp
  _BYTE *v133; // rdi
  __int64 v134; // rax
  _BYTE *v135; // rdx
  __int64 *v136; // r9
  int v137; // esi
  __int64 *v138; // rdx
  bool v139; // al
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 *v142; // rsi
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rbp
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rbx
  __int64 v151; // r13
  __int64 v152; // rbp
  unsigned __int64 v153; // rdx
  unsigned __int64 v154; // rcx
  unsigned int v155; // edx
  __int64 *v156; // rsi
  __int64 v157; // r9
  unsigned __int64 v158; // r15
  char v159; // r15
  __int64 v160; // rsi
  __int64 *v161; // rdi
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  __int64 v166; // rdi
  __int64 v167; // rbp
  __int64 m; // r13
  unsigned int *v169; // rbx
  unsigned int *v170; // r12
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rsi
  _QWORD *v174; // rax
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rax
  __int64 **v180; // rax
  __int64 v181; // rcx
  __int64 v182; // rdi
  __int64 v183; // rdx
  __m128 v184; // xmm0
  __int64 v185; // rax
  size_t v186; // rax
  __int64 v187; // rbx
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rdx
  unsigned __int64 *v191; // rsi
  unsigned __int64 v192; // rcx
  __int64 *v193; // rsi
  __int64 v194; // rcx
  __int64 v195; // rdx
  __int64 v196; // rax
  __int64 *v197; // rsi
  __m128 *v198; // rdi
  _QWORD *v199; // rax
  __int64 v200; // rbx
  __int64 v201; // rsi
  _QWORD *v202; // rax
  __int64 v203; // rbp
  int v204; // esi
  int v205; // r9d
  __int64 v206; // r10
  int v207; // eax
  _DWORD *v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 *v211; // rsi
  __int64 v212; // rax
  __int64 v213; // rdx
  __m128 *v214; // rdi
  __int64 v215; // rbp
  unsigned int v216; // eax
  __int64 v217; // rbp
  __int64 v218; // rax
  __int64 v219; // rbx
  _BYTE *v220; // r14
  _BYTE *v221; // r12
  __int64 *v222; // r8
  __int64 v223; // rbx
  unsigned __int64 v224; // rdx
  char v225; // bl
  __int64 v226; // rax
  __int64 v227; // rax
  __int64 v228; // rdx
  unsigned int *v229; // rax
  unsigned __int64 *v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 v233; // r8
  __int64 v234; // r9
  __int64 v235; // r12
  __int64 v236; // rax
  _QWORD *v237; // rax
  __int64 v238; // rdx
  __int64 v239; // rax
  __int64 v240; // rdx
  __int64 *v241; // rsi
  __int64 v242; // rcx
  __int64 v243; // rdx
  __int64 v244; // rcx
  __int64 v245; // r8
  __int64 v246; // r9
  __int64 v247; // r12
  __int64 v248; // rax
  _QWORD *v249; // rax
  unsigned __int8 v250; // al
  __int64 v251; // rdx
  __int64 v252; // r8
  __int64 v253; // r9
  __int64 v254; // rcx
  __int64 **v255; // rax
  __int64 *v256; // rdx
  unsigned __int64 v257; // rax
  __int64 *v258; // rsi
  __int64 v259; // rcx
  __m128 *v260; // rsi
  __int64 v261; // rdx
  __int64 *v262; // rcx
  __int64 v263; // r8
  __int64 v264; // r9
  __int64 v265; // rax
  unsigned __int64 v266; // rdi
  _QWORD *v267; // rax
  char v268; // al
  char v269; // al
  __int64 *v270; // rax
  __int64 *v271; // r12
  __int64 v272; // r14
  __int64 *v273; // rbx
  __int64 v274; // r14
  __int64 v275; // rdx
  _QWORD *v276; // rax
  __int64 v277; // rax
  __int64 v278; // r14
  __int64 v279; // rdi
  __int64 v280; // rdx
  _QWORD *v281; // rax
  _QWORD *v282; // rsi
  _QWORD *v283; // rax
  _QWORD *v284; // rdx
  __int64 v285; // rax
  __int64 v286; // rcx
  __int64 v287; // r14
  __int64 v288; // rdi
  __int64 v289; // rdx
  _QWORD *v290; // rax
  _QWORD *v291; // rsi
  __int64 *v292; // rax
  __int64 *v293; // rcx
  __int64 *v294; // rax
  __int64 v295; // rdx
  __int64 v296; // r14
  __int64 v297; // rdi
  __int64 v298; // rdx
  _QWORD *v299; // rax
  _QWORD *v300; // rsi
  __int64 v301; // rax
  __int64 v302; // rax
  __int64 v303; // rdx
  __int64 v304; // rcx
  __int64 v305; // rax
  size_t v306; // rbx
  void *v307; // rax
  __int64 v308; // rdi
  __int64 *v309; // rax
  __int64 *v310; // rax
  __int64 v311; // rsi
  __int64 v312; // r10
  __int64 v313; // rax
  __int64 v314; // rdx
  _DWORD *v315; // rax
  _DWORD *v316; // rax
  __int64 v317; // r8
  int v318; // r11d
  unsigned __int64 v319; // rcx
  __int64 v320; // r9
  __int64 v321; // rdi
  __int64 v322; // rax
  _DWORD *v323; // rbp
  unsigned int v324; // esi
  int v325; // eax
  bool v326; // al
  __int64 v327; // rdi
  int v328; // eax
  int *v329; // rax
  __int64 v330; // rcx
  __int64 v331; // r8
  __int64 v332; // r9
  __int64 v333; // rdx
  __int64 v334; // rax
  _QWORD *v335; // rax
  unsigned int v336; // edx
  int v337; // edx
  int v338; // ebx
  _QWORD *v339; // rax
  unsigned __int64 v340; // rdx
  unsigned __int64 v341; // rax
  __int64 v342; // r8
  __int64 v343; // r9
  _QWORD *v344; // rax
  __int64 v345; // rdx
  _QWORD *v346; // rdx
  __m128 *v347; // [rsp+8h] [rbp-280h] BYREF
  __m128 *v348; // [rsp+10h] [rbp-278h]
  __m128 *v349; // [rsp+18h] [rbp-270h]
  __int64 *v350; // [rsp+20h] [rbp-268h]
  __int64 *v351; // [rsp+28h] [rbp-260h]
  __int64 *v352; // [rsp+30h] [rbp-258h]
  __int64 *v353; // [rsp+38h] [rbp-250h]
  __int64 *v354; // [rsp+40h] [rbp-248h]
  __int64 v355; // [rsp+48h] [rbp-240h]
  unsigned __int64 v356; // [rsp+58h] [rbp-230h] BYREF
  _BYTE *v357[2]; // [rsp+60h] [rbp-228h] BYREF
  unsigned int v358; // [rsp+70h] [rbp-218h]
  __int64 v359[2]; // [rsp+80h] [rbp-208h] BYREF
  unsigned int v360; // [rsp+90h] [rbp-1F8h]
  __m128 v361; // [rsp+A0h] [rbp-1E8h] BYREF
  __int64 v362; // [rsp+B0h] [rbp-1D8h]
  unsigned __int8 *v363; // [rsp+C0h] [rbp-1C8h] BYREF
  char v364; // [rsp+118h] [rbp-170h]
  unsigned int v365; // [rsp+120h] [rbp-168h]
  char v366; // [rsp+124h] [rbp-164h]
  void *ptr[2]; // [rsp+130h] [rbp-158h] BYREF
  __m128 v368; // [rsp+140h] [rbp-148h] BYREF
  unsigned __int8 *v369[11]; // [rsp+150h] [rbp-138h] BYREF
  char v370; // [rsp+1A8h] [rbp-E0h]
  unsigned int v371; // [rsp+1B0h] [rbp-D8h]
  char v372; // [rsp+1B4h] [rbp-D4h]

  v350 = *(__int64 **)(*(_QWORD *)(a1 + 240) + 760LL);
  if ( v350 )
    return;
  v1 = (__int64 *)a1;
  if ( *(_DWORD *)(a1 + 184) == 1 )
  {
    v180 = *(__int64 ***)(a1 + 12712);
    v181 = *(unsigned int *)(a1 + 12728);
    v182 = a1 + 12640;
    v183 = *(_QWORD *)(v182 + 80);
    v347 = (__m128 *)*v180;
    v184 = _mm_loadh_ps((const double *)&v347);
    v347 += 32;
    *(__m128 *)ptr = v184;
    v368 = _mm_loadh_ps((const double *)(v182 + 72));
    sub_160BB40((__m128 *)v182, (unsigned __int64 *)ptr, v183, (__int64 *)(v183 + 16 * v181));
    v185 = v1[29];
    *((_DWORD *)v1 + 3182) = 0;
    if ( (*(_BYTE *)(v185 + 22) & 1) != 0 )
    {
      v186 = j__strlen("PerformPendingInstantiations");
      v187 = sub_224A990("PerformPendingInstantiations", v186, 0, 0);
      sub_1E3CE70(v1, 0, 1);
      if ( v187 )
        sub_224D6D0(v187);
    }
  }
  else
  {
    sub_18ACDA0(*(_QWORD *)(a1 + 736));
    v2 = *(unsigned int *)(a1 + 10152);
    v3 = 1;
    if ( (_DWORD)v2 )
      v3 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v2 - 40) + 36LL) == 7) + 1;
    sub_160ECE0(a1, v3);
    v4 = *(void (__fastcall **)(_QWORD))(a1 + 448);
    if ( v4 )
      v4(*(_QWORD *)(a1 + 456));
    sub_183C990(a1);
  }
  sub_166B5D0(v1);
  sub_1666580(v1);
  sub_1B2FC60(v1[95]);
  sub_166C2B0(v1);
  ptr[0] = v1;
  v351 = v1 + 357;
  LODWORD(v348) = *((_DWORD *)v1 + 724);
  if ( (int)v348 >> 2 > 0 )
  {
    v5 = v1;
    v6 = 0;
    v7 = nullptr;
    v347 = (__m128 *)(4LL * (unsigned int)(((int)v348 >> 2) - 1));
    while ( 1 )
    {
      v8 = (int)v7;
      if ( (unsigned __int8)sub_16021F0((__int64)v5, *(_QWORD *)(v1[361] + v6)) )
        goto LABEL_17;
      v8 = (_DWORD)v7 + 1;
      v9 = (__int64 *)((char *)v7->m128_i64 + 1);
      if ( (unsigned __int8)sub_16021F0((__int64)ptr[0], *(_QWORD *)(v1[361] + v6 + 8)) )
        break;
      v8 = (_DWORD)v7 + 2;
      v9 = (__int64 *)((char *)v7->m128_i64 + 2);
      if ( (unsigned __int8)sub_16021F0((__int64)ptr[0], *(_QWORD *)(v1[361] + v6 + 16)) )
        break;
      v8 = (_DWORD)v7 + 3;
      v9 = (__int64 *)((char *)v7->m128_i64 + 3);
      if ( (unsigned __int8)sub_16021F0((__int64)ptr[0], *(_QWORD *)(v1[361] + v6 + 24)) )
        break;
      v8 = (_DWORD)v7 + 4;
      v6 += 32;
      if ( v347 == v7 )
      {
        v207 = (_DWORD)v348 - v8;
        goto LABEL_268;
      }
      v5 = (__int64 *)ptr[0];
      v7 = (__m128 *)((char *)v7 + 4);
    }
    v10 = (__m128 *)(int)v348;
    v7 = (__m128 *)v9;
    if ( (_DWORD)v348 == v8 )
    {
LABEL_30:
      v16 = (char *)v1[361];
      v17 = &v16[8 * (_QWORD)v7];
      if ( (int)v348 < 0 )
      {
        v18 = (char *)(v1[357] + 8LL * ((_QWORD)v10 + *((unsigned int *)v1 + 716)));
LABEL_37:
        v23 = &v16[8 * *((unsigned int *)v1 + 724)] - v18;
        if ( &v16[8 * *((unsigned int *)v1 + 724)] != v18 )
        {
          v17 = (char *)memmove(v17, v18, &v16[8 * *((unsigned int *)v1 + 724)] - v18);
          v16 = (char *)v1[361];
        }
        *((_DWORD *)v1 + 724) = (&v17[v23] - v16) >> 3;
        goto LABEL_40;
      }
LABEL_36:
      v18 = &v16[8 * (_QWORD)v10];
      goto LABEL_37;
    }
    goto LABEL_18;
  }
  v207 = (int)v348;
  v8 = 0;
LABEL_268:
  switch ( v207 )
  {
    case 2:
LABEL_374:
      if ( (unsigned __int8)sub_1602260((__int64 *)ptr, v8, (__int64)v351) )
        goto LABEL_377;
      ++v8;
      goto LABEL_376;
    case 3:
      if ( (unsigned __int8)sub_1602260((__int64 *)ptr, v8, (__int64)v351) )
        goto LABEL_377;
      ++v8;
      goto LABEL_374;
    case 1:
LABEL_376:
      if ( !(unsigned __int8)sub_1602260((__int64 *)ptr, v8, (__int64)v351) )
        break;
LABEL_377:
      v7 = (__m128 *)v8;
LABEL_17:
      v10 = (__m128 *)(int)v348;
      if ( (_DWORD)v348 == v8 )
        goto LABEL_30;
LABEL_18:
      v11 = v8 + 1;
      if ( (_DWORD)v10 == v8 + 1 )
        goto LABEL_30;
      v12 = v11;
      v347 = v10;
      while ( v11 >= 0 )
      {
        if ( !(unsigned __int8)sub_16021F0((__int64)v1, *(_QWORD *)(v1[361] + 8 * v12)) )
        {
          v13 = v8;
          v14 = *(_QWORD *)(v1[361] + 8 * v12);
          if ( v8 >= 0 )
            goto LABEL_22;
LABEL_28:
          v15 = (_QWORD *)(v1[357] + 8 * (*((unsigned int *)v1 + 716) + v13));
LABEL_23:
          *v15 = v14;
          ++v8;
        }
LABEL_24:
        ++v11;
        ++v12;
        if ( (_DWORD)v10 == v11 )
        {
          v10 = v347;
          v7 = (__m128 *)v8;
          goto LABEL_33;
        }
      }
      if ( (unsigned __int8)sub_16021F0((__int64)v1, *(_QWORD *)(v1[357] + 8 * (v12 + *((unsigned int *)v1 + 716)))) )
        goto LABEL_24;
      v13 = v8;
      v14 = *(_QWORD *)(v1[357] + 8 * (v12 + *((unsigned int *)v1 + 716)));
      if ( v8 < 0 )
        goto LABEL_28;
LABEL_22:
      v15 = (_QWORD *)(v1[361] + 8 * v13);
      goto LABEL_23;
  }
  v7 = (__m128 *)(int)v348;
  v8 = (int)v348;
  v10 = (__m128 *)(int)v348;
LABEL_33:
  if ( v8 >= 0 )
    goto LABEL_30;
  v19 = *((unsigned int *)v1 + 716);
  v20 = v1[357];
  v21 = 8 * ((_QWORD)v7 + v19);
  v22 = (void *)(v20 + v21);
  if ( (int)v348 >= 0 )
  {
    *((_DWORD *)v1 + 716) = v21 >> 3;
    v16 = (char *)v1[361];
    v17 = v16;
    goto LABEL_36;
  }
  v305 = 8 * ((_QWORD)v10 + v19);
  v306 = 8 * v19 - v305;
  if ( v20 + v305 != v20 + 8 * v19 )
  {
    v307 = memmove(v22, (const void *)(v20 + v305), v306);
    v20 = v1[357];
    v22 = v307;
  }
  *((_DWORD *)v1 + 716) = ((__int64)((__int64)v22 + v306) - v20) >> 3;
LABEL_40:
  if ( *((_DWORD *)v1 + 46) != 1 )
  {
    sub_160C330((__int64)v1);
    v27 = *((unsigned int *)v1 + 688);
    v28 = (__m128 *)v1[343];
    v29 = (__int64)&v361;
    v347 = &v361;
    v348 = &v28[5 * v27];
    if ( v28 == v348 )
    {
LABEL_54:
      v33 = v1[33];
      if ( (*(_BYTE *)(v1[29] + 1) & 0x10) != 0
        && (unsigned __int8)sub_FD3830(*(_QWORD *)(v33 + 32), 0x1A9Fu, 0, v1[33], v25, j) != 1 )
      {
        sub_18829B0(v1);
        v33 = v1[33];
      }
      if ( *(_BYTE *)(v33 + 192) )
        goto LABEL_81;
      v34 = v1[69];
      if ( v34 )
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 280LL))(v34, v1 + 527);
      if ( !*((_DWORD *)v1 + 1062) )
        goto LABEL_81;
      ptr[0] = &v368;
      ptr[1] = (void *)0x1000000000LL;
      sub_1601890((__int64)v1, (__int64 *)ptr, v24, v29, v25);
      v35 = *((_DWORD *)v1 + 1056);
      if ( v35 )
      {
        v29 = (unsigned int)(4 * v35);
        v36 = *((unsigned int *)v1 + 1058);
        v37 = (_QWORD *)v1[527];
        if ( (unsigned int)v29 < 0x40 )
          v29 = 64;
        if ( (unsigned int)v29 >= (unsigned int)v36 )
        {
          v38 = 2 * v36;
LABEL_66:
          for ( i = &v37[v38]; i != v37; v37 += 2 )
            *v37 = -4096;
          v1[528] = 0;
          goto LABEL_69;
        }
        v336 = v35 - 1;
        if ( v336 )
        {
          _BitScanReverse(&v336, v336);
          v337 = v336 ^ 0x1F;
          v29 = (unsigned int)(33 - v337);
          v338 = 1 << (33 - v337);
          if ( v338 < 64 )
            v338 = 64;
          if ( v338 == (_DWORD)v36 )
          {
            v1[528] = 0;
            v339 = &v37[2 * (unsigned int)v338];
            do
            {
              *v37 = -4096;
              v37 += 2;
            }
            while ( v339 != v37 );
            goto LABEL_69;
          }
        }
        else
        {
          v338 = 64;
        }
        operator delete(v37, 16 * v36, 8);
        v340 = ((((((((4 * v338 / 3u + 1) | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 2)
                  | (4 * v338 / 3u + 1)
                  | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 4)
                | (((4 * v338 / 3u + 1) | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 2)
                | (4 * v338 / 3u + 1)
                | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 8)
              | (((((4 * v338 / 3u + 1) | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 2)
                | (4 * v338 / 3u + 1)
                | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 4)
              | (((4 * v338 / 3u + 1) | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 2)
              | (4 * v338 / 3u + 1)
              | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 16;
        v341 = (v340
              | (((((((4 * v338 / 3u + 1) | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 2)
                  | (4 * v338 / 3u + 1)
                  | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 4)
                | (((4 * v338 / 3u + 1) | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 2)
                | (4 * v338 / 3u + 1)
                | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 8)
              | (((((4 * v338 / 3u + 1) | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 2)
                | (4 * v338 / 3u + 1)
                | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 4)
              | (((4 * v338 / 3u + 1) | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1)) >> 2)
              | (4 * v338 / 3u + 1)
              | ((unsigned __int64)(4 * v338 / 3u + 1) >> 1))
             + 1;
        *((_DWORD *)v1 + 1058) = v341;
        v344 = (_QWORD *)sub_22300B0(16 * v341, 8, v340, 2863311531LL, v342, v343);
        v345 = *((unsigned int *)v1 + 1058);
        v1[528] = 0;
        v1[527] = (__int64)v344;
        v346 = &v344[2 * v345];
        if ( v344 != v346 )
        {
          v29 = -4096;
          do
          {
            *v344 = -4096;
            v344 += 2;
          }
          while ( v346 != v344 );
        }
        goto LABEL_69;
      }
      v29 = *((unsigned int *)v1 + 1057);
      if ( (_DWORD)v29 )
      {
        v37 = (_QWORD *)v1[527];
        v238 = *((unsigned int *)v1 + 1058);
        v38 = 2 * v238;
        if ( (unsigned int)v238 <= 0x40 )
          goto LABEL_66;
        operator delete(v37, v38 * 8, 8);
        v1[527] = 0;
        v1[528] = 0;
        *((_DWORD *)v1 + 1058) = 0;
      }
LABEL_69:
      v40 = (int)ptr[1];
      v41 = (__m128 *)ptr[0];
      *((_DWORD *)v1 + 1062) = 0;
      if ( v40 )
      {
        v347 = &v41[v40];
        v349 = (__m128 *)v357;
        v348 = (__m128 *)v359;
        while ( 1 )
        {
          v43 = v41->m128_u32[2];
          v359[0] = v41->m128_u64[0];
          v42 = v359[0];
          if ( (unsigned __int8)sub_15F1490((__int64)v1, v359[0]) )
          {
            v48 = sub_F64090(*(_QWORD *)(*(_QWORD *)(v359[0] + 48) & 0xFFFFFFFFFFFFFFF0LL), v42, v44, v45, v46, v47);
            if ( !v48 )
              goto LABEL_517;
            if ( v48 > 3u )
            {
              if ( v48 > 6u )
                goto LABEL_517;
              v49 = 5716;
            }
            else
            {
              v49 = 5357;
            }
            v50 = *(unsigned int *)(v359[0] + 24);
            goto LABEL_76;
          }
          v250 = sub_B81B70(v359[0]);
          if ( !v250 )
            goto LABEL_517;
          if ( v250 > 3u )
          {
            if ( v250 > 6u )
            {
LABEL_517:
              ++v361.m128_i32[2];
              BUG();
            }
            v259 = 7470;
            if ( (*(_BYTE *)(v359[0] + 28) & 0x7Fu) - 34 > 5 )
              v259 = 5356;
            sub_168B9F0(&v361, v1 + 1, *(unsigned int *)(v359[0] + 24), v259, 0);
            sub_15993D0((__int64)&v361, (__int64 *)v348);
            sub_15F7200(&v361);
            goto LABEL_77;
          }
          v254 = v359[0];
          if ( (*(_BYTE *)(v359[0] + 28) & 0x7Fu) - 34 <= 5 && (*(_BYTE *)(v359[0] + 29) & 1) != 0 )
            break;
LABEL_343:
          v50 = *(unsigned int *)(v254 + 24);
          v49 = 7471;
LABEL_76:
          sub_168B9F0(&v361, v1 + 1, v50, v49, 0);
          LOBYTE(v357[0]) = (*(_BYTE *)(v359[0] + 28) & 0x7Fu) - 40 <= 6;
          v51 = sub_1588420((__int64)&v361, (unsigned __int8 *)v349);
          sub_15993D0(v51, (__int64 *)v348);
          sub_15F7200(&v361);
LABEL_77:
          if ( v43 )
          {
            ++v41;
            sub_168B9F0(&v361, v1 + 1, v43, 6452, 0);
            sub_15F7200(&v361);
            if ( v347 == v41 )
            {
LABEL_79:
              if ( ptr[0] != &v368 )
                free(ptr[0]);
              goto LABEL_81;
            }
          }
          else if ( v347 == ++v41 )
          {
            goto LABEL_79;
          }
        }
        v352 = (__int64 *)v359[0];
        v255 = (__int64 **)sub_B8C3D0(v359[0], v42, v251, v359[0], v252, v253);
        v29 = (__int64)v352;
        v256 = *v255;
        v257 = (unsigned __int64)&(*v255)[*((unsigned int *)v255 + 2)];
        if ( (unsigned __int64)v256 >= v257 )
        {
          if ( v256 != (__int64 *)v257 )
          {
            while ( *(_WORD *)(*(_QWORD *)v257 + 36LL) != 296 )
            {
              v257 += 8LL;
              if ( v256 == (__int64 *)v257 )
                goto LABEL_342;
            }
LABEL_446:
            v308 = *v256;
            if ( *(_WORD *)(*v256 + 36) != 296 )
            {
              v309 = v256 + 1;
              do
                v308 = *v309++;
              while ( *(_WORD *)(v308 + 36) != 296 );
            }
            v310 = *(__int64 **)(v308 + 48);
            v311 = *v310;
            v312 = *v310 + 136LL * *((unsigned int *)v310 + 2);
            if ( *v310 != v312 )
            {
              do
              {
                if ( *(_DWORD *)v311 == 4 )
                {
                  v25 = *(unsigned int *)(v311 + 16);
                  v314 = *(_QWORD *)(v311 + 8);
                  for ( j = v314 + 56 * v25; j != v314; v314 += 56 )
                  {
                    if ( *(_DWORD *)(v314 + 8) == 12 )
                    {
                      v315 = *(_DWORD **)(v314 + 16);
                      v25 = (__int64)&v315[6 * *(unsigned int *)(v314 + 24)];
                      if ( v315 != (_DWORD *)v25 )
                      {
                        if ( *v315 == 66 )
                          goto LABEL_342;
                        v316 = v315 + 6;
                        while ( (_DWORD *)v25 != v316 )
                        {
                          v316 += 6;
                          if ( *(v316 - 6) == 66 )
                            goto LABEL_342;
                        }
                      }
                    }
                  }
                }
                v311 += 136;
              }
              while ( v312 != v311 );
            }
            if ( (*((_BYTE *)v352 + 29) & 2) != 0 )
            {
              v313 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v308 + 40) + 16LL) + 40LL);
              if ( (v313 & 7) != 0 )
                BUG();
              if ( (*(_BYTE *)((v313 & 0xFFFFFFFFFFFFFFF8LL) + 4) & 0x40) != 0 && *(_DWORD *)(v1[29] + 64) )
                goto LABEL_77;
            }
          }
        }
        else
        {
          v258 = v256;
          while ( *(_WORD *)(*v258 + 36) != 296 )
          {
            if ( (__int64 *)v257 == ++v258 )
              goto LABEL_342;
          }
          if ( (__int64 *)v257 != v258 )
            goto LABEL_446;
        }
LABEL_342:
        v254 = v359[0];
        goto LABEL_343;
      }
      if ( v41 != &v368 )
        free(v41);
LABEL_81:
      v52 = *((unsigned int *)v1 + 2538);
      if ( (_DWORD)v52 )
      {
        v29 = v1[1268];
        v118 = (unsigned int *)(v29 + 48 * v52 - 48);
        v119 = *((_QWORD *)v118 + 1);
        if ( *(_DWORD *)(v119 + 36) == 6 )
        {
          v211 = v1 + 1;
          v210 = 4202;
          v209 = *v118;
LABEL_278:
          sub_168B9F0(ptr, v211, v209, v210, 0);
          sub_15F7200(ptr);
          v52 = *((unsigned int *)v1 + 2538);
          if ( !(_DWORD)v52 )
            goto LABEL_83;
          v29 = v1[1268];
          goto LABEL_280;
        }
        if ( *(_BYTE *)(v1[29] + 201) >> 5 != 3 )
          goto LABEL_166;
        if ( *(_QWORD *)(v1[31] + 1800) )
        {
LABEL_280:
          v119 = *(_QWORD *)(v29 + 48 * v52 - 40);
          if ( !v119 )
            goto LABEL_83;
LABEL_166:
          v120 = *(_DWORD *)(v119 + 36);
          if ( v120 != 2 && (unsigned int)(v120 - 4) > 1 )
            goto LABEL_83;
          v121 = sub_15F00B0((__int64)v1, v119);
          if ( v121 )
            goto LABEL_169;
          v271 = *(__int64 **)(v119 + 256);
          v347 = *(__m128 **)(v119 + 264);
          v272 = ((char *)v347 - (char *)v271) >> 5;
          if ( v272 > 0 )
          {
            LOBYTE(v349) = 0;
            v273 = &v271[4 * v272];
            while ( 1 )
            {
              v274 = *v271;
              sub_A842A0(v1[31], *v271);
              if ( v275 )
                goto LABEL_390;
              v276 = *(_QWORD **)(v274 + 1032);
              v29 = (__int64)&v276[*(unsigned int *)(v274 + 1040)];
              if ( v276 != (_QWORD *)v29 )
                break;
LABEL_391:
              v277 = *(_QWORD *)(v274 + 944);
              v29 = v277 + 8LL * *(unsigned int *)(v274 + 952);
              if ( v277 != v29 )
              {
                while ( *(char *)(*(_QWORD *)v277 + 905LL) >= 0 )
                {
                  v277 += 8;
                  if ( v29 == v277 )
                    goto LABEL_396;
                }
                goto LABEL_390;
              }
LABEL_396:
              v278 = v271[1];
              v279 = v1[31];
              v348 = (__m128 *)(v271 + 1);
              sub_A842A0(v279, v278);
              if ( v280 )
                goto LABEL_406;
              v281 = *(_QWORD **)(v278 + 1032);
              v282 = &v281[*(unsigned int *)(v278 + 1040)];
              if ( v281 != v282 )
              {
                if ( *(char *)((*v281 & 0xFFFFFFFFFFFFFFF8LL) + 905) < 0 )
                  goto LABEL_406;
                v283 = v281 + 1;
                while ( 1 )
                {
                  v284 = v283;
                  if ( v282 == v283 )
                    break;
                  ++v283;
                  if ( *(char *)((*v284 & 0xFFFFFFFFFFFFFFF8LL) + 905) < 0 )
                    goto LABEL_406;
                }
              }
              v285 = *(_QWORD *)(v278 + 944);
              v286 = v285 + 8LL * *(unsigned int *)(v278 + 952);
              if ( v285 != v286 )
              {
                while ( *(char *)(*(_QWORD *)v285 + 905LL) >= 0 )
                {
                  v285 += 8;
                  if ( v286 == v285 )
                    goto LABEL_407;
                }
                goto LABEL_406;
              }
LABEL_407:
              v287 = v271[2];
              v288 = v1[31];
              v348 = (__m128 *)(v271 + 2);
              sub_A842A0(v288, v287);
              if ( v289 )
                goto LABEL_406;
              v290 = *(_QWORD **)(v287 + 1032);
              v291 = &v290[*(unsigned int *)(v287 + 1040)];
              if ( v290 != v291 )
              {
                while ( *(char *)((*v290 & 0xFFFFFFFFFFFFFFF8LL) + 905) >= 0 )
                {
                  if ( v291 == ++v290 )
                    goto LABEL_413;
                }
                goto LABEL_406;
              }
LABEL_413:
              v292 = *(__int64 **)(v287 + 944);
              v293 = &v292[*(unsigned int *)(v287 + 952)];
              if ( v292 != v293 )
              {
                if ( *(char *)(*v292 + 905) < 0 )
                  goto LABEL_406;
                v294 = v292 + 1;
                while ( v293 != v294 )
                {
                  v295 = *v294++;
                  if ( *(char *)(v295 + 905) < 0 )
                    goto LABEL_406;
                }
              }
              v296 = v271[3];
              v297 = v1[31];
              v348 = (__m128 *)(v271 + 3);
              sub_A842A0(v297, v296);
              if ( v298 )
                goto LABEL_406;
              v299 = *(_QWORD **)(v296 + 1032);
              v300 = &v299[*(unsigned int *)(v296 + 1040)];
              if ( v299 != v300 )
              {
                while ( *(char *)((*v299 & 0xFFFFFFFFFFFFFFF8LL) + 905) >= 0 )
                {
                  if ( v300 == ++v299 )
                    goto LABEL_424;
                }
                goto LABEL_406;
              }
LABEL_424:
              v301 = *(_QWORD *)(v296 + 944);
              v29 = v301 + 8LL * *(unsigned int *)(v296 + 952);
              if ( v301 != v29 )
              {
                while ( *(char *)(*(_QWORD *)v301 + 905LL) >= 0 )
                {
                  v301 += 8;
                  if ( v29 == v301 )
                    goto LABEL_429;
                }
LABEL_406:
                v29 = (__int64)v348;
                v121 = v347 != v348;
                goto LABEL_169;
              }
LABEL_429:
              v271 += 4;
              if ( v273 == v271 )
              {
                v121 = (char)v349;
                goto LABEL_431;
              }
            }
            while ( *(char *)((*v276 & 0xFFFFFFFFFFFFFFF8LL) + 905) >= 0 )
            {
              if ( (_QWORD *)v29 == ++v276 )
                goto LABEL_391;
            }
            goto LABEL_390;
          }
LABEL_431:
          v302 = ((char *)v347 - (char *)v271) >> 3;
          if ( v302 != 2 )
          {
            if ( v302 != 3 )
            {
              if ( v302 != 1 )
                goto LABEL_169;
              goto LABEL_434;
            }
            if ( (unsigned __int8)sub_15F00B0((__int64)v1, *v271) )
            {
LABEL_390:
              v121 = v347 != (__m128 *)v271;
LABEL_169:
              *(_BYTE *)(v119 + 905) = *(_BYTE *)(v119 + 905) & 0x7F | (v121 << 7);
LABEL_83:
              if ( *((_DWORD *)v1 + 46) == 2 )
              {
                v212 = sub_145C8F0(v1[30]);
                if ( v212 )
                {
                  v213 = v1[30];
                  v214 = &v368;
                  v348 = &v368;
                  v215 = *(_QWORD *)(v213 + 104);
                  v368.m128_u64[0] = v212;
                  v216 = 1;
                  ptr[0] = &v368;
                  v217 = v215 + 632;
                  HIDWORD(ptr[1]) = 2;
                  do
                  {
                    v219 = v214->m128_i64[v216 - 1];
                    LODWORD(ptr[1]) = v216 - 1;
                    sub_1409280(v217, v219, 0);
                    sub_1408340(v217, v219, 0);
                    sub_13FAAE0(v217, v219, 0);
                    v220 = *(_BYTE **)(v219 + 264);
                    v221 = *(_BYTE **)(v219 + 256);
                    v218 = LODWORD(ptr[1]);
                    v222 = (__int64 *)(v220 - v221);
                    v223 = (v220 - v221) >> 3;
                    v224 = v223 + LODWORD(ptr[1]);
                    if ( v224 > HIDWORD(ptr[1]) )
                    {
                      v347 = (__m128 *)(v220 - v221);
                      sub_2237220(ptr, v348, v224, 8);
                      v218 = LODWORD(ptr[1]);
                      v222 = (__int64 *)v347;
                    }
                    v214 = (__m128 *)ptr[0];
                    if ( v220 != v221 )
                    {
                      memmove((char *)ptr[0] + 8 * v218, v221, (size_t)v222);
                      v214 = (__m128 *)ptr[0];
                      LODWORD(v218) = ptr[1];
                    }
                    v216 = v218 + v223;
                    LODWORD(ptr[1]) = v216;
                  }
                  while ( v216 );
                  if ( v214 != &v368 )
                    free(v214);
                }
                sub_1607570((__int64)v1);
              }
              v53 = *((unsigned int *)v1 + 2763);
              if ( (_DWORD)v53 == *((_DWORD *)v1 + 2764) )
                goto LABEL_98;
              v54 = *((_BYTE *)v1 + 11060);
              v55 = (unsigned __int64 *)v1[1380];
              if ( v54 )
              {
                v56 = &v55[v53];
                if ( v55 == v56 )
                  goto LABEL_97;
                goto LABEL_87;
              }
              v29 = *((unsigned int *)v1 + 2762);
              v56 = &v55[v29];
              if ( v55 != v56 )
              {
LABEL_87:
                v57 = *v55;
                if ( *v55 >= 0xFFFFFFFFFFFFFFFELL )
                {
                  v58 = v55 + 1;
                  do
                  {
                    v55 = v58;
                    if ( v58 == v56 )
                      goto LABEL_91;
                    v57 = *v58++;
                  }
                  while ( v57 >= 0xFFFFFFFFFFFFFFFELL );
                }
                v349 = &v361;
                while ( 1 )
                {
LABEL_295:
                  if ( !v57 )
                    goto LABEL_308;
                  v225 = sub_B7D390(v57, (__int64)ptr, 0, v29);
                  if ( !v225 )
                    break;
                  if ( !ptr[0] )
                  {
                    v347 = nullptr;
                    v225 = 0;
                    goto LABEL_303;
                  }
                  v226 = *((_QWORD *)ptr[0] + 1) & 7LL;
                  if ( *((char *)ptr[0] + 29) < 0 )
                  {
                    if ( !v226 )
LABEL_514:
                      BUG();
                    v227 = sub_B8C660((__int64)ptr[0]);
                  }
                  else
                  {
                    if ( !v226 )
                      goto LABEL_514;
                    v227 = *((_QWORD *)ptr[0] - 1);
                  }
                  if ( *(_DWORD *)(v227 + 36) == 7 )
                  {
                    v347 = (__m128 *)(&dword_0 + 1);
LABEL_303:
                    v228 = *(unsigned int *)(v57 + 24);
                    v348 = (__m128 *)(v1 + 1);
                    sub_168B9F0(ptr, v1 + 1, v228, 3788, 0);
                    if ( v370 )
                    {
                      sub_AE9DF0(v369, (__int64)v347, 2u);
                    }
                    else if ( v372 )
                    {
                      v235 = sub_168B9E0(ptr);
                      v236 = v368.m128_u64[0];
                      if ( v368.m128_u64[0] )
                        v236 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v368.m128_u64[0] + 32LL))(v368.m128_u64[0]);
                      v361.m128_u64[0] = v236;
                      v237 = sub_1587BC0(v235, (__int64 *)v349, v231, v232, v233, v234);
                      sub_AE9DF0((unsigned __int8 **)(*v237 + 32LL * v371 + 8), (__int64)v347, 2u);
                    }
                    sub_15F7200(ptr);
                    if ( v225 )
                    {
                      v229 = (unsigned int *)(v1[1268] + 48LL * *((unsigned int *)v1 + 2538) - 48);
                      if ( *(_DWORD *)(*((_QWORD *)v229 + 1) + 36LL) == 7 )
                      {
                        sub_168B9F0(ptr, v348, *v229, 6296, 0);
                        sub_15F7200(ptr);
                      }
                    }
                  }
LABEL_308:
                  if ( v55 + 1 == v56 )
                    goto LABEL_313;
                  v57 = v55[1];
                  if ( v57 >= 0xFFFFFFFFFFFFFFFELL )
                  {
                    v230 = v55 + 2;
                    while ( 1 )
                    {
                      v55 = v230;
                      if ( v230 == v56 )
                        break;
                      v57 = *v230++;
                      if ( v57 < 0xFFFFFFFFFFFFFFFELL )
                        goto LABEL_295;
                    }
LABEL_313:
                    v54 = *((_BYTE *)v1 + 11060);
LABEL_91:
                    if ( !v54 )
                    {
                      LODWORD(v53) = *((_DWORD *)v1 + 2763);
                      goto LABEL_93;
                    }
LABEL_97:
                    *(__int64 *)((char *)v1 + 11052) = 0;
                    goto LABEL_98;
                  }
                  ++v55;
                }
                v347 = nullptr;
                goto LABEL_303;
              }
LABEL_93:
              v59 = *((unsigned int *)v1 + 2762);
              v60 = 4 * (v53 - *((_DWORD *)v1 + 2764));
              if ( v60 < 0x20 )
                v60 = 32;
              if ( v60 >= (unsigned int)v59 )
              {
                memset((void *)v1[1380], -1, 8 * v59);
                goto LABEL_97;
              }
              sub_22364B0(v1 + 1380);
LABEL_98:
              v61 = v1[69];
              ptr[1] = &qword_20;
              ptr[0] = &v368.m128_u16[4];
              v368.m128_i32[0] = 0;
              v368.m128_i8[4] = 1;
              if ( v61 )
                (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v61 + 304LL))(v61, v1 + 365);
              v62 = *((_DWORD *)v1 + 732);
              v63 = *((unsigned int *)v1 + 740);
              v64 = -v62;
              if ( (_DWORD)v63 != -v62 )
              {
                v348 = (__m128 *)ptr;
                v65 = v64 + (unsigned __int64)(unsigned int)(v63 + v62 - 1) + 1;
                v66 = v64;
                v347 = &v361;
                v353 = (__int64 *)v357;
                v354 = v359;
                while ( 1 )
                {
                  v67 = (__int64 *)((int)v66 < 0 ? v1[365] + 8 * (v66 + *((unsigned int *)v1 + 732)) : v1[369] + 8 * v66);
                  v68 = sub_B80EE0(*v67);
                  v69 = v68;
                  if ( v68 )
                  {
                    if ( *(char *)(v68 + 28) >= 0 )
                      break;
                  }
LABEL_134:
                  if ( v65 == ++v66 )
                    goto LABEL_135;
                }
                v63 = v368.m128_u8[4];
                if ( !v368.m128_i8[4] )
                  goto LABEL_174;
                v70 = (char *)ptr[0];
                v25 = HIDWORD(ptr[1]);
                v71 = 8LL * HIDWORD(ptr[1]);
                v72 = (__int64 *)((char *)ptr[0] + v71);
                if ( ptr[0] != (char *)ptr[0] + v71 )
                {
                  v73 = (char *)ptr[0];
                  if ( v69 == *(_QWORD *)ptr[0] )
                  {
LABEL_176:
                    v63 = 0;
                    goto LABEL_114;
                  }
                  while ( 1 )
                  {
                    v73 += 8;
                    if ( v72 == (__int64 *)v73 )
                      break;
                    if ( v69 == *(_QWORD *)v73 )
                      goto LABEL_176;
                  }
                }
                if ( HIDWORD(ptr[1]) < LODWORD(ptr[1]) )
                {
                  v25 = (unsigned int)++HIDWORD(ptr[1]);
                  *v72 = v69;
                  v70 = (char *)ptr[0];
                  v73 = (char *)ptr[0] + v71;
                }
                else
                {
LABEL_174:
                  v73 = (char *)sub_2236760(v348, v69);
                  v70 = (char *)ptr[0];
                  if ( !v368.m128_i8[4] )
                  {
                    v29 = LODWORD(ptr[1]);
                    v74 = (char *)ptr[0] + 8 * LODWORD(ptr[1]);
LABEL_115:
                    if ( v74 != v73 && *(_QWORD *)v73 >= 0xFFFFFFFFFFFFFFFELL )
                    {
                      v75 = v73 + 8;
                      do
                      {
                        v29 = (__int64)v75;
                        if ( v74 == v75 )
                          break;
                        v75 += 8;
                      }
                      while ( *(_QWORD *)v29 >= 0xFFFFFFFFFFFFFFFELL );
                    }
                    if ( (_BYTE)v63 )
                    {
                      v76 = sub_A72040((_QWORD *)v1[31], *(_QWORD *)(v69 + 48));
                      v77 = *(_DWORD *)(v69 + 24);
                      if ( v76 && (v78 = *(_BYTE *)(v76 + 16) == 5, v349 = (__m128 *)v76, v78) )
                      {
                        sub_168B9F0(v347, v1 + 1, v77, 7431, 0);
                        sub_15F7200(v347);
                        v352 = (__int64 *)v1[31];
                        v79 = sub_A63CE0(v352);
                        v80 = sub_A97D20((__int64)v352, *(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL));
                        v81 = (__int64 *)v349;
                        v361.m128_i32[2] = v80;
                        if ( v80 > 0x40 )
                        {
                          sub_2205470(v347, 1, 0);
                          v81 = (__int64 *)v349;
                        }
                        else
                        {
                          v361.m128_u64[0] = 1;
                        }
                        *(_QWORD *)(v69 + 48) = sub_A70F70(v1[31], v81[4], (__int64)v347, nullptr, 0, 0);
                        if ( v361.m128_i32[2] > 0x40u && v361.m128_u64[0] )
                          operator delete[]((void *)v361.m128_u64[0]);
                      }
                      else if ( (unsigned __int8)sub_1E63CF0(v1, v77, *(_QWORD *)(v69 + 48), 1, 5170) )
                      {
                        sub_B88650(v69, 1);
                      }
                      sub_17C8350(v1, v69);
                      v82 = *(_QWORD *)(v69 + 48);
                      v357[0] = (_BYTE *)v82;
                      if ( *(char *)(v69 + 28) >= 0 )
                      {
                        v63 = v1[29];
                        if ( (*(_BYTE *)(v63 + 1) & 8) != 0
                          || (v82 & 1) == 0 && (byte_8[v82 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
                        {
                          goto LABEL_132;
                        }
                        if ( !sub_B7D120(v69, (__int64 *)v347) )
                        {
                          if ( !sub_9B48E0(v69) && (*(_BYTE *)(v69 + 96) & 0x18) == 0
                            || (v326 = sub_9B48E0(v69), v318 = 6812, !v326) && (*(_BYTE *)(v69 + 96) & 0x18) != 0 )
                          {
                            v318 = 6809;
                          }
                          v319 = v1[33];
                          v320 = *(unsigned int *)(v69 + 24);
                          LODWORD(v355) = v318;
                          v321 = *(_QWORD *)(v319 + 32);
                          LODWORD(v352) = v320;
                          LOBYTE(v349) = (unsigned __int8)sub_FD3830(
                                                            v321,
                                                            0x1A83u,
                                                            (unsigned int)v320,
                                                            v319,
                                                            v317,
                                                            v320) != 1;
                          sub_168B9F0(v347, v1 + 1, (unsigned int)v352, (unsigned int)v355, 0);
                          v322 = sub_1605D30((__int64)v347, v353);
                          if ( *(_BYTE *)(v322 + 120) )
                          {
                            sub_AE9DF0((unsigned __int8 **)(v322 + 32), (unsigned __int8)v349, 2u);
                          }
                          else if ( *(_BYTE *)(v322 + 132) )
                          {
                            v355 = v322;
                            v329 = (int *)sub_168B9E0(v322);
                            v333 = v355;
                            v352 = (__int64 *)v329;
                            v334 = *(_QWORD *)(v355 + 16);
                            if ( v334 )
                            {
                              v334 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v334 + 32LL))(*(_QWORD *)(v355 + 16));
                              v333 = v355;
                            }
                            v355 = v333;
                            v359[0] = v334;
                            v335 = sub_1587BC0((__int64)v352, v354, v333, v330, v331, v332);
                            sub_AE9DF0(
                              (unsigned __int8 **)(*v335 + 32LL * *(unsigned int *)(v355 + 128) + 8),
                              (unsigned __int8)v349,
                              2u);
                          }
                          sub_15F7200(v347);
                        }
                        if ( *(char *)(v69 + 28) >= 0 )
                        {
LABEL_132:
                          v83 = v1[32];
                          v29 = (__int64)nullsub_153;
                          v84 = *(void (**)())(*(_QWORD *)v83 + 96LL);
                          if ( v84 != nullsub_153 )
                            ((void (__fastcall *)(__int64, __int64))v84)(v83, v69);
                        }
                      }
                    }
                    goto LABEL_134;
                  }
                }
LABEL_114:
                v29 = HIDWORD(ptr[1]);
                v74 = &v70[8 * HIDWORD(ptr[1])];
                goto LABEL_115;
              }
LABEL_135:
              v85 = (char **)v1[373];
              for ( k = &v85[*((unsigned int *)v1 + 748)]; k != v85; ++v85 )
              {
                v87 = *v85;
                if ( *v85 )
                {
                  if ( v87[28] >= 0
                    && !(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v87 + 48LL))(*v85)
                    && sub_B8C400((__int64)v87, 1) )
                  {
                    v88 = v1[32];
                    v89 = *(void (**)())(*(_QWORD *)v88 + 104LL);
                    if ( v89 != nullsub_154 )
                      ((void (__fastcall *)(__int64, char *))v89)(v88, v87);
                  }
                }
              }
              if ( (*(_BYTE *)(v1[29] + 89) & 1) != 0 )
              {
                v200 = v1[85];
                v201 = *(_QWORD *)(*(_QWORD *)(v1[31] + 2264) + 80LL);
                v202 = sub_704780((__int64 *)(v201 + 72), v201, v63, v29, v25, j);
                sub_19FBB60(v200, v202);
              }
              v122 = v1[33];
              if ( !*(_BYTE *)(v122 + 192) && *((_DWORD *)v1 + 46) != 2 )
              {
                v123 = v1[69];
                if ( v123 )
                  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v123 + 312LL))(v123, v351);
                v124 = *((_DWORD *)v1 + 724);
                v125 = -*((_DWORD *)v1 + 716);
                if ( v124 != v125 )
                {
                  v126 = v125;
                  v347 = (__m128 *)(v125 + (unsigned __int64)(unsigned int)(v124 + *((_DWORD *)v1 + 716) - 1) + 1);
                  v349 = (__m128 *)v357;
                  v351 = v359;
                  v352 = (__int64 *)&v356;
                  while ( 1 )
                  {
                    LODWORD(v348) = v126;
                    if ( (int)v126 < 0 )
                      break;
                    if ( !(unsigned __int8)sub_16021F0((__int64)v1, *(_QWORD *)(v1[361] + 8 * v126)) )
                    {
                      v131 = (__int64 *)(v1[361] + 8 * v126);
                      goto LABEL_190;
                    }
LABEL_207:
                    if ( v347 == (__m128 *)++v126 )
                      goto LABEL_208;
                  }
                  if ( (unsigned __int8)sub_16021F0(
                                          (__int64)v1,
                                          *(_QWORD *)(v1[357] + 8 * (v126 + *((unsigned int *)v1 + 716)))) )
                    goto LABEL_207;
                  v127 = v1[357];
                  v131 = (__int64 *)(v127 + 8 * (v126 + *((unsigned int *)v1 + 716)));
LABEL_190:
                  v132 = *v131;
                  if ( (*(_BYTE *)(v132 + 28) & 0x7Fu) - 34 <= 5 )
                  {
                    if ( (unsigned __int8)sub_B7F5F0((_QWORD *)v132, v349, v127, v128, v129, v130) )
                    {
                      v133 = v357[0];
                    }
                    else
                    {
                      v357[0] = (_BYTE *)v132;
                      v133 = (_BYTE *)v132;
                    }
                    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v133 + 32LL))(v133) + 82) & 0x40) != 0 )
                      goto LABEL_207;
                    LODWORD(v359[0]) = *((_DWORD *)v357[0] + 6);
                    HIDWORD(v359[0]) = v359[0];
                    v134 = sub_B77B80((__int64)v357[0]);
                    if ( v134 )
                      HIDWORD(v359[0]) = *(_DWORD *)(v134 + 4);
                    if ( sub_B8C090(v357[0]) )
                    {
                      v135 = v357[0];
                      v136 = v1 + 1;
                      if ( (v357[0][28] & 0x7Fu) - 35 <= 3 )
                      {
                        v303 = *((unsigned int *)v357[0] + 6);
                        v304 = 7492;
                        v142 = v1 + 1;
                      }
                      else
                      {
                        if ( *(_BYTE *)(v132 + 81) >> 5 != 2 || (*(_BYTE *)(v132 + 82) & 2) != 0 )
                          goto LABEL_204;
                        v137 = *(_DWORD *)(v132 + 24);
                        v138 = (__int64 *)v1[34];
                        if ( v137 < 0 )
                        {
                          v327 = v1[34];
                          v353 = v1 + 1;
                          v348 = (__m128 *)v138;
                          v328 = sub_10212A0(v327, v137);
                          v136 = v353;
                          v138 = (__int64 *)v348;
                          v137 = v328;
                        }
                        v348 = (__m128 *)v136;
                        v139 = sub_1021600((__int64)v138, v137);
                        v136 = (__int64 *)v348;
                        if ( v139 )
                        {
                          v135 = v357[0];
LABEL_204:
                          v140 = *((unsigned int *)v135 + 6);
                          v141 = 7491;
                          v142 = v136;
LABEL_205:
                          sub_168B9F0(&v361, v142, v140, v141, 0);
                          LODWORD(v356) = 0;
                          v143 = sub_1587D10((__int64)&v361, (int *)v352);
                          v144 = sub_16060E0(v143, (__int64 *)v349);
LABEL_206:
                          sub_15884C0(v144, v351);
                          sub_15F7200(&v361);
                          goto LABEL_207;
                        }
                        v304 = 7493;
                        v142 = (__int64 *)v348;
                        v303 = *((unsigned int *)v357[0] + 6);
                      }
                    }
                    else
                    {
                      if ( sub_B75550((_BYTE *)v132) && !sub_B75670((_BYTE *)v132) )
                        goto LABEL_207;
                      v142 = v1 + 1;
                      if ( sub_B77A30(v132) )
                      {
                        v141 = 7537;
                        v140 = *((unsigned int *)v357[0] + 6);
                        goto LABEL_205;
                      }
                      v303 = *((unsigned int *)v357[0] + 6);
                      v304 = (v357[0][28] & 0x7Fu) - 35 < 4 ? 7529 : 7525;
                    }
                    sub_168B9F0(&v361, v142, v303, v304, 0);
                    v144 = sub_16060E0((__int64)&v361, (__int64 *)v349);
                    goto LABEL_206;
                  }
                  v188 = sub_B8C330(v132);
                  v189 = sub_B7D8D0(v132, v188);
                  v357[0] = (_BYTE *)v189;
                  if ( !v189 )
                  {
                    if ( (int)v348 < 0 )
                      v270 = (__int64 *)(v1[357] + 8 * (v126 + *((unsigned int *)v1 + 716)));
                    else
                      v270 = (__int64 *)(v1[361] + 8 * v126);
                    v189 = *v270;
                    v357[0] = (_BYTE *)v189;
                  }
                  LODWORD(v359[0]) = *(_DWORD *)(v189 + 24);
                  HIDWORD(v359[0]) = v359[0];
                  if ( (*(_BYTE *)(v189 + 28) & 0x7Fu) - 41 <= 1 )
                  {
                    v190 = *(_QWORD *)(v189 + 120);
                    v191 = (unsigned __int64 *)(v190 & 0xFFFFFFFFFFFFFFF8LL);
                    v192 = v190 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v190 && (v190 & 4) != 0 )
                    {
                      if ( !v191 )
                        goto LABEL_255;
                      v192 = *v191;
                    }
                    if ( v192 )
                      HIDWORD(v359[0]) = *(_DWORD *)(v192 + 4);
                  }
LABEL_255:
                  if ( sub_B8C090((_BYTE *)v189) )
                  {
                    v193 = v1 + 1;
                    v194 = 7491;
                    v195 = *((unsigned int *)v357[0] + 6);
                  }
                  else
                  {
                    if ( !sub_B73BE0((__int64)v357[0]) )
                    {
                      v239 = *((_QWORD *)v357[0] + 6);
                      v240 = *((unsigned int *)v357[0] + 6);
                      if ( (v239 & 1) != 0 || (byte_8[v239 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
                      {
                        v323 = (_DWORD *)v1[34];
                        v324 = v240 & 0x7FFFFFFF;
                        if ( ((unsigned int)v240 & 0x7FFFFFFF) < v323[119] || v324 >= v323[120] )
                          v325 = sub_101D590(v1[34], v324);
                        else
                          v325 = v323[118];
                        if ( v323[130] == v325 && *(_BYTE *)(*(_QWORD *)(v1[30] + 56) + 744LL) )
                          goto LABEL_207;
                        v241 = v1 + 1;
                        v242 = 7520;
                        v240 = *((unsigned int *)v357[0] + 6);
                      }
                      else
                      {
                        v241 = v1 + 1;
                        v242 = 7538;
                      }
                      sub_168B9F0(&v361, v241, v240, v242, 0);
                      v197 = (__int64 *)v349;
                      v198 = &v361;
                      goto LABEL_258;
                    }
                    v193 = v1 + 1;
                    v194 = 7537;
                    v195 = *((unsigned int *)v357[0] + 6);
                  }
                  sub_168B9F0(&v361, v193, v195, v194, 0);
                  LODWORD(v356) = 1;
                  v196 = sub_1587D10((__int64)&v361, (int *)v352);
                  v197 = (__int64 *)v349;
                  v198 = (__m128 *)v196;
LABEL_258:
                  v144 = sub_16065E0((__int64)v198, v197);
                  goto LABEL_206;
                }
LABEL_208:
                sub_1607570((__int64)v1);
                v122 = v1[33];
              }
              v145 = *(_QWORD *)(v122 + 32);
              if ( (unsigned __int8)sub_FD3830(v145, 0x1D6Bu, 0, v122, v25, j) == 1 )
                goto LABEL_226;
              v148 = v1[494];
              v149 = *((unsigned int *)v1 + 990);
              v357[0] = nullptr;
              v357[1] = nullptr;
              v150 = v148 + 8 * v149;
              v358 = 0;
              v359[0] = 0;
              v359[1] = 0;
              v360 = 0;
              if ( v150 == v148 )
              {
                v160 = 0;
                v161 = v350;
                goto LABEL_225;
              }
              v348 = (__m128 *)v1;
              v151 = v148;
              v350 = (__int64 *)&v356;
              v349 = (__m128 *)v359;
              while ( 1 )
              {
                v152 = *(_QWORD *)v151;
                v153 = *(_QWORD *)(*(_QWORD *)v151 + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(*(_QWORD *)v151 + 16LL) & 4) != 0 )
                  v153 = *(_QWORD *)v153;
                if ( (*(_BYTE *)(v153 + 8) & 0x7Fu) - 59 > 2 )
                  goto LABEL_223;
                v154 = v153 - 64;
                if ( v153 == 64 || *(_BYTE *)(v153 + 9) >> 5 == 2 )
                  goto LABEL_223;
                v356 = v153 - 64;
                if ( v358 )
                {
                  v155 = (v358 - 1) & (((unsigned int)v154 >> 9) ^ ((unsigned int)v154 >> 4));
                  v156 = (__int64 *)&v357[0][16 * v155];
                  v157 = *v156;
                  if ( v154 == *v156 )
                    goto LABEL_219;
                  v204 = 1;
                  if ( v157 != -4096 )
                    break;
                }
LABEL_266:
                sub_15F6A90(&v361, &v357[0][16 * v358], &v357[0][16 * v358], (__int64)v357, 1);
                v158 = v361.m128_u64[0];
LABEL_220:
                sub_15F6A90(&v361, &v357[0][16 * v358], &v357[0][16 * v358], (__int64)v357, 1);
                if ( v158 != v361.m128_u64[0] )
                {
                  v159 = *(_BYTE *)(v158 + 8);
                  goto LABEL_222;
                }
                v260 = v349;
                v159 = sub_1605660(v356, (__int64)v349);
                v262 = (__int64 *)sub_BA5B10(v356);
                if ( !v262 )
                {
LABEL_366:
                  *(_BYTE *)sub_16053F0((__int64)v357, v350, v261, (__int64)v262, v263, v264) = v159;
LABEL_222:
                  if ( v159 )
                  {
                    sub_168B9F0(&v361, &v348->m128_u16[4], *(unsigned int *)(v152 + 24), 7531, 0);
                    v203 = *(_QWORD *)(v152 + 40);
                    if ( v364 )
                    {
                      sub_AE9DF0(&v363, v203, 9u);
                    }
                    else if ( v366 )
                    {
                      v247 = sub_168B9E0(&v361);
                      v248 = v362;
                      if ( v362 )
                        v248 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v362 + 32LL))(v362);
                      v356 = v248;
                      v249 = sub_1587BC0(v247, v350, v243, v244, v245, v246);
                      sub_AE9DF0((unsigned __int8 **)(*v249 + 32LL * v365 + 8), v203, 9u);
                    }
                    sub_15F7200(&v361);
                  }
                  goto LABEL_223;
                }
                if ( v159 )
                {
                  while ( 1 )
                  {
                    v265 = v262[5];
                    if ( !v265 )
LABEL_515:
                      BUG();
                    v266 = v265 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v265 & 4) != 0 )
                    {
                      v347 = (__m128 *)v262;
                      if ( !v266 )
                        goto LABEL_515;
                      v267 = sub_F63270(
                               *(_QWORD *)(*(_QWORD *)v266 & 0xFFFFFFFFFFFFFFF0LL),
                               (__int64)v260,
                               v261,
                               (__int64)v262,
                               v263,
                               v264);
                      v262 = (__int64 *)v347;
                      if ( !v267 )
                      {
LABEL_365:
                        v159 = 0;
                        goto LABEL_361;
                      }
                      v260 = v349;
                      v268 = sub_1605660((__int64)v267, (__int64)v349);
                      v262 = (__int64 *)v347;
                      v159 = v268;
                    }
                    else
                    {
                      if ( (*(_BYTE *)(v266 + 28) & 0x7Fu) - 34 > 5 )
                        goto LABEL_365;
                      v260 = &v361;
                      v347 = (__m128 *)v262;
                      v269 = sub_B7D390(v266, (__int64)&v361, 0, (__int64)v262);
                      v262 = (__int64 *)v347;
                      v159 = v269;
                    }
LABEL_361:
                    if ( (v262[6] & 1) != 0 )
                      v262 = (__int64 *)sub_BA5A00((__int64)v262);
                    else
                      v262 = (__int64 *)v262[6];
                    if ( !v262 || !v159 )
                      goto LABEL_366;
                  }
                }
                *(_BYTE *)sub_16053F0((__int64)v357, v350, v261, (__int64)v262, v263, v264) = 0;
LABEL_223:
                v151 += 8;
                if ( v150 == v151 )
                {
                  v1 = (__int64 *)v348;
                  v350 = (__int64 *)v359[0];
                  v160 = 16LL * v360;
                  v161 = (__int64 *)v359[0];
LABEL_225:
                  operator delete(v161, v160, 8);
                  operator delete(v357[0], 16LL * v358, 8);
                  v122 = v1[33];
                  v145 = *(_QWORD *)(v122 + 32);
LABEL_226:
                  if ( (unsigned __int8)sub_FD3830(v145, 0x1BB7u, 0, v122, v146, v147) != 1 )
                  {
                    v166 = v1[69];
                    if ( v166 )
                      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v166 + 288LL))(v166, v1 + 1238);
                    v162 = *((unsigned int *)v1 + 2484);
                    v167 = v1[1241];
                    for ( m = v167 + 56 * v162; m != v167; v167 += 56 )
                    {
                      v169 = *(unsigned int **)(v167 + 8);
                      v170 = &v169[2 * *(unsigned int *)(v167 + 16)];
                      while ( v169 != v170 )
                      {
                        v171 = *((unsigned __int8 *)v169 + 4);
                        v172 = *v169;
                        v169 += 2;
                        sub_19B2990(v1, *(_QWORD *)v167, v172, v171);
                      }
                    }
                  }
                  v173 = *(_QWORD *)(*(_QWORD *)(v1[31] + 2264) + 80LL);
                  v174 = sub_704780((__int64 *)(v173 + 72), v173, v162, v163, v164, v165);
                  sub_1581120(v1 + 44, (__int64)v174);
                  v179 = v1[31];
                  if ( *(_BYTE *)(v179 + 17441) )
                  {
                    v199 = sub_704780(
                             (__int64 *)(*(_QWORD *)(*(_QWORD *)(v179 + 2264) + 80LL) + 72LL),
                             *(_QWORD *)(*(_QWORD *)(v179 + 2264) + 80LL),
                             v175,
                             v176,
                             v177,
                             v178);
                    sub_19F2A40(v1, v199);
                  }
                  if ( !*(_BYTE *)(v1[30] + 744) )
                    v1[24] = 0;
                  if ( !v368.m128_i8[4] )
                    free(ptr[0]);
                  return;
                }
              }
              while ( 1 )
              {
                v205 = v204 + 1;
                v155 = (v358 - 1) & (v204 + v155);
                v156 = (__int64 *)&v357[0][16 * v155];
                v206 = *v156;
                if ( v154 == *v156 )
                  break;
                v204 = v205;
                if ( v206 == -4096 )
                  goto LABEL_266;
              }
LABEL_219:
              sub_15F6A90(&v361, v156, &v357[0][16 * v358], (__int64)v357, 1);
              v158 = v361.m128_u64[0];
              goto LABEL_220;
            }
            ++v271;
          }
          if ( !(unsigned __int8)sub_15F00B0((__int64)v1, *v271) )
          {
            ++v271;
LABEL_434:
            if ( !(unsigned __int8)sub_15F00B0((__int64)v1, *v271) )
              goto LABEL_169;
            goto LABEL_390;
          }
          goto LABEL_390;
        }
      }
      else if ( *(_BYTE *)(v1[29] + 201) >> 5 != 3 || *(_QWORD *)(v1[31] + 1800) )
      {
        goto LABEL_83;
      }
      v208 = (_DWORD *)sub_101FFD0(v1[34], *(_DWORD *)(v1[34] + 520));
      v209 = 0;
      if ( v208 )
        v209 = *v208 & 0x7FFFFFFF;
      v210 = 4201;
      v211 = v1 + 1;
      goto LABEL_278;
    }
    while ( 1 )
    {
      if ( v28[3].m128_i32[2] )
      {
        v30 = sub_1A5B7C0(v1, v1[24], v28->m128_u64[0], 0, 0, 0);
        v31 = v28[3].m128_u64[0];
        v32 = v31 + 16LL * v28[3].m128_u32[2];
        if ( !v30 || ((*(_BYTE *)(v30 + 28) + 94) & 0x7Fu) <= 0xC )
        {
          while ( v31 != v32 )
          {
            sub_168B9F0(ptr, v1 + 1, *(unsigned int *)(v31 + 8), 7565, 0);
            if ( v370 )
            {
              sub_AE9DF0(v369, v28->m128_u64[0], 5u);
            }
            else if ( v372 )
            {
              v90 = (__int64 *)sub_168B9E0(ptr);
              v94 = v368.m128_u64[0];
              if ( v368.m128_u64[0] )
              {
                v95 = *(_QWORD *)v368.m128_u64[0];
                v349 = (__m128 *)v90;
                v94 = (*(__int64 (__fastcall **)(unsigned __int64))(v95 + 32))(v368.m128_u64[0]);
                v90 = (__int64 *)v349;
              }
              v361.m128_u64[0] = v94;
              v96 = sub_1587BC0((__int64)v90, (__int64 *)v347, (__int64)v90, v91, v92, v93);
              sub_AE9DF0((unsigned __int8 **)(*v96 + 32LL * v371 + 8), v28->m128_u64[0], 5u);
            }
            v31 += 16LL;
            sub_15F7200(ptr);
          }
          goto LABEL_53;
        }
        if ( v31 != v32 )
          break;
      }
LABEL_53:
      v28 += 5;
      if ( v348 == v28 )
        goto LABEL_54;
    }
    while ( 1 )
    {
      sub_168B9F0(ptr, v1 + 1, *(unsigned int *)(v31 + 8), 6598, 0);
      if ( v370 )
        break;
      if ( v372 )
      {
        v97 = (__int64 *)sub_168B9E0(ptr);
        v101 = v368.m128_u64[0];
        if ( v368.m128_u64[0] )
        {
          v102 = *(_QWORD *)v368.m128_u64[0];
          v349 = (__m128 *)v97;
          v101 = (*(__int64 (__fastcall **)(unsigned __int64))(v102 + 32))(v368.m128_u64[0]);
          v97 = (__int64 *)v349;
        }
        v361.m128_u64[0] = v101;
        v103 = sub_1587BC0((__int64)v97, (__int64 *)v347, (__int64)v97, v98, v99, v100);
        sub_AE9DF0((unsigned __int8 **)(*v103 + 32LL * v371 + 8), (__int64)"'weak'", 1u);
        if ( !v370 )
        {
LABEL_156:
          if ( !v372 )
            goto LABEL_48;
          v104 = (__int64 *)sub_168B9E0(ptr);
          v108 = v368.m128_u64[0];
          if ( v368.m128_u64[0] )
          {
            v109 = *(_QWORD *)v368.m128_u64[0];
            v349 = (__m128 *)v104;
            v108 = (*(__int64 (__fastcall **)(unsigned __int64))(v109 + 32))(v368.m128_u64[0]);
            v104 = (__int64 *)v349;
          }
          v361.m128_u64[0] = v108;
          v110 = sub_1587BC0((__int64)v104, (__int64 *)v347, (__int64)v104, v105, v106, v107);
          sub_AE9DF0((unsigned __int8 **)(*v110 + 32LL * v371 + 8), 0, 2u);
          if ( !v370 )
          {
LABEL_160:
            if ( v372 )
            {
              v111 = (__int64 *)sub_168B9E0(ptr);
              v115 = v368.m128_u64[0];
              if ( v368.m128_u64[0] )
              {
                v116 = *(_QWORD *)v368.m128_u64[0];
                v349 = (__m128 *)v111;
                v115 = (*(__int64 (__fastcall **)(unsigned __int64))(v116 + 32))(v368.m128_u64[0]);
                v111 = (__int64 *)v349;
              }
              v361.m128_u64[0] = v115;
              v117 = sub_1587BC0((__int64)v111, (__int64 *)v347, (__int64)v111, v112, v113, v114);
              sub_AE9DF0((unsigned __int8 **)(*v117 + 32LL * v371 + 8), 2, 2u);
            }
            goto LABEL_48;
          }
          goto LABEL_52;
        }
LABEL_51:
        sub_AE9DF0(v369, 0, 2u);
        if ( !v370 )
          goto LABEL_160;
LABEL_52:
        sub_AE9DF0(v369, 2, 2u);
      }
LABEL_48:
      v31 += 16LL;
      sub_15F7200(ptr);
      if ( v31 == v32 )
        goto LABEL_53;
    }
    sub_AE9DF0(v369, (__int64)"'weak'", 1u);
    if ( !v370 )
      goto LABEL_156;
    goto LABEL_51;
  }
  if ( !*(_BYTE *)(v1[30] + 744) )
    v1[24] = 0;
}
