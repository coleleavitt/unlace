void __fastcall sub_1BFBE60(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8)
{
  __int64 *v8; // r12
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 *v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int8 v21; // al
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rdi
  char v27; // r15
  char v28; // r14
  __int64 *v29; // r15
  __int64 v30; // rax
  char v31; // al
  __int64 *v32; // r15
  unsigned int v33; // ecx
  unsigned __int64 v34; // rbp
  __m128 *v35; // rax
  unsigned int v36; // eax
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  __m128 v40; // xmm0
  __m128 v41; // xmm0
  __int64 v42; // rax
  __int64 *v43; // rbx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  _BYTE *v46; // rdi
  __int64 (*v47)(void); // rax
  char v48; // al
  _BYTE *v49; // rdi
  __int64 (*v50)(void); // rax
  char v51; // al
  __int64 *v52; // rbx
  _QWORD *v53; // rax
  __int64 v54; // rdi
  unsigned __int8 (*v55)(void); // rdx
  __int64 *v56; // rbx
  char *v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rax
  __int64 v60; // rdi
  unsigned __int8 (*v61)(void); // rdx
  void **v62; // r15
  __int64 v63; // rbp
  __int64 *v64; // rbx
  __int64 *v65; // r14
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  _QWORD *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rdi
  __int64 v71; // rdx
  char *v72; // rcx
  char *v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 *v76; // r12
  __int64 *v77; // rbx
  __int64 *v78; // rbp
  __int64 v79; // rsi
  __int64 *v80; // rbx
  _QWORD *v81; // rax
  __int64 *v82; // rbx
  __int64 v83; // rsi
  unsigned __int64 v84; // rdx
  _QWORD *v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 *v88; // rbp
  __int64 *v89; // rbx
  __int64 *v90; // rdi
  __int64 *v91; // rdi
  __int64 *v92; // rdi
  __int64 *v93; // rdi
  __int64 *v94; // rdi
  __int64 *v95; // rdi
  unsigned int v96; // edi
  __int64 *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  unsigned __int64 *v102; // r13
  unsigned __int64 *v103; // rbx
  unsigned __int64 v104; // rcx
  unsigned int v105; // edx
  unsigned __int64 *v106; // rsi
  int v107; // esi
  unsigned __int64 v108; // rax
  int v109; // r11d
  __int64 *v110; // r13
  int v111; // r10d
  unsigned __int64 *v112; // r11
  int v113; // esi
  __int64 v114; // r14
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 *v117; // r12
  __int64 *v118; // r13
  __int64 v119; // rax
  int v120; // edx
  int v121; // edx
  int v122; // r9d
  __int64 v123; // rax
  int v124; // edx
  int v125; // edx
  int v126; // r8d
  __int64 v127; // rax
  int v128; // edx
  int v129; // edx
  int v130; // edi
  __int64 v131; // rax
  int v132; // edx
  int v133; // edx
  int v134; // esi
  __int64 v135; // rax
  int v136; // edx
  int v137; // edx
  int v138; // ecx
  char v139; // al
  __int64 v140; // rax
  int v141; // edx
  int v142; // edx
  int v143; // r10d
  __int64 *v144; // r14
  __int64 *v145; // rdi
  __int64 *v146; // rdi
  __int64 *v147; // rdi
  __int64 *v148; // rdi
  __int64 *v149; // rdi
  __int64 *v150; // rdi
  __int32 v151; // r14d
  __int64 v152; // rdi
  unsigned __int8 (*v153)(void); // rdx
  __int64 v154; // rdi
  unsigned __int8 (*v155)(void); // rdx
  __int64 v156; // r12
  __int64 v157; // rcx
  __int64 *v158; // r13
  __int64 v159; // rdx
  __int64 v160; // rax
  __int64 *v161; // rbp
  __int64 v162; // r14
  __m128i v163; // xmm0
  __int64 *v164; // r13
  __int64 *jj; // rbp
  __int64 v166; // r14
  __m128i v167; // xmm0
  __int64 v168; // r12
  __int64 v169; // rcx
  unsigned __int64 *v170; // r13
  __int64 v171; // rax
  unsigned __int64 *v172; // rbp
  unsigned __int64 v173; // r14
  unsigned __int64 *v174; // r13
  unsigned __int64 *m; // rbp
  unsigned __int64 v176; // r14
  __int64 v177; // rax
  __int64 *v178; // rbx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 *v181; // r15
  __int64 v182; // rax
  int v183; // r12d
  char v184; // r10
  __int64 v185; // rbp
  unsigned __int64 v186; // r13
  unsigned __int64 v187; // rax
  __int64 v188; // r12
  __int64 *v189; // r14
  _QWORD *v190; // rax
  __int64 *v191; // rbp
  __int64 v192; // r13
  __m128i v193; // xmm0
  bool v194; // zf
  __int64 *v195; // rbx
  __int64 v196; // rbp
  unsigned __int64 v197; // r15
  __int64 v198; // r12
  char v199; // r14
  unsigned __int64 v200; // rax
  unsigned int v201; // edx
  void **v202; // r10
  __int64 v203; // rax
  void **v204; // rbp
  void **v205; // r13
  __int64 v206; // rbx
  void *v207; // rax
  unsigned int v208; // ebx
  __int64 *v209; // rbp
  __int64 v210; // rdi
  unsigned int v211; // r9d
  __int64 v212; // rax
  unsigned __int32 v213; // edx
  unsigned int v214; // eax
  __m128 v215; // xmm0
  __int64 *v216; // r14
  unsigned int v217; // ebx
  __int64 v218; // r13
  __int64 v219; // rdx
  unsigned __int64 v220; // rax
  __m128i si128; // xmm3
  unsigned int *v222; // rax
  void **v223; // r12
  void **v224; // rbp
  __int64 *v225; // rbx
  __int64 v226; // rdx
  __int64 v227; // rcx
  __int64 v228; // r8
  __int64 v229; // rax
  __int64 v230; // rax
  void **v231; // r12
  void **ii; // rbp
  unsigned __int64 v233; // rbx
  void *v234; // rax
  __int64 v235; // rdx
  __int64 v236; // rcx
  __int64 v237; // r8
  __int64 v238; // rax
  __int64 *v239; // r13
  __int64 v240; // rdx
  __int64 v241; // r8
  __int64 v242; // rcx
  __int64 *v243; // r10
  __int64 *v244; // r12
  __int64 *v245; // r15
  char v246; // r14
  __int64 v247; // rbx
  __int64 *v248; // rbp
  __int64 v249; // rax
  __int64 v250; // rax
  unsigned __int64 *v251; // rbp
  __m128i v252; // xmm0
  unsigned int k; // ebx
  __int64 v254; // rdx
  void **v255; // rbx
  void **v256; // rbp
  void *v257; // rax
  __m128 *v258; // rcx
  unsigned __int64 *v259; // r14
  unsigned __int64 v260; // rbp
  __int64 v261; // rdi
  __int64 v262; // rax
  __int64 v263; // rax
  __int64 v264; // r9
  _QWORD *v265; // rax
  unsigned int i; // ebx
  __int64 v267; // rdx
  void **v268; // rbx
  void **v269; // rbp
  void *v270; // rax
  __int64 *v271; // r13
  __int64 *v272; // rbx
  __int64 *n; // rbp
  __int64 v274; // r12
  unsigned __int64 v275; // r14
  __int64 v276; // rax
  __int64 v277; // rcx
  __int64 v278; // rdx
  __int64 v279; // rdx
  unsigned __int64 v280; // rbp
  __m128i v281; // xmm0
  __int64 v282; // rdi
  __int64 *v283; // rbx
  __int64 v284; // r12
  __int64 v285; // r13
  __m128 *v286; // r15
  __m128 *v287; // rax
  bool v288; // al
  __m128 v289; // xmm0
  __int64 v290; // r12
  unsigned __int64 v291; // rax
  unsigned int v292; // ebp
  unsigned int v293; // eax
  unsigned int v294; // ebx
  __int64 v295; // rdx
  unsigned __int64 v296; // rax
  __m128i v297; // xmm2
  __int64 v298; // rcx
  __int64 *v299; // rbp
  __int64 v300; // r13
  _QWORD *v301; // r14
  __m128i v302; // xmm0
  __int64 v303; // r12
  unsigned __int64 v304; // rax
  void **v305; // rbx
  void **v306; // rbp
  void *v307; // rax
  void **v308; // rbp
  void **j; // r12
  __int64 v310; // rbx
  __int64 v311; // [rsp-10h] [rbp-7D8h]
  __int64 v312; // [rsp-8h] [rbp-7D0h]
  __m128 v313; // [rsp+0h] [rbp-7C8h] BYREF
  __m128 v314; // [rsp+10h] [rbp-7B8h] BYREF
  __int64 *v315; // [rsp+20h] [rbp-7A8h]
  __int64 *v316; // [rsp+28h] [rbp-7A0h]
  __m128 *v317; // [rsp+30h] [rbp-798h]
  __m128 *v318; // [rsp+38h] [rbp-790h]
  __m128i v319; // [rsp+40h] [rbp-788h] BYREF
  __int64 v320; // [rsp+50h] [rbp-778h]
  unsigned int *v321; // [rsp+58h] [rbp-770h]
  __int64 v322; // [rsp+60h] [rbp-768h]
  __int64 *v323; // [rsp+68h] [rbp-760h] BYREF
  __int64 v324; // [rsp+70h] [rbp-758h]
  int v325; // [rsp+78h] [rbp-750h]
  unsigned int v326; // [rsp+7Ch] [rbp-74Ch]
  char v327; // [rsp+9Fh] [rbp-729h] BYREF
  __int64 v328[2]; // [rsp+A0h] [rbp-728h] BYREF
  __m128 v329; // [rsp+B0h] [rbp-718h] BYREF
  char v330; // [rsp+C0h] [rbp-708h]
  void *v331[2]; // [rsp+D0h] [rbp-6F8h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-6E8h] BYREF
  __int64 v333; // [rsp+F0h] [rbp-6D8h]
  _BYTE v334[56]; // [rsp+F8h] [rbp-6D0h] BYREF
  __m128 v335; // [rsp+130h] [rbp-698h] BYREF
  __m128 v336; // [rsp+140h] [rbp-688h]
  __int64 v337; // [rsp+150h] [rbp-678h]
  char v338; // [rsp+158h] [rbp-670h]
  unsigned int *v339; // [rsp+160h] [rbp-668h]
  __int64 v340; // [rsp+168h] [rbp-660h]
  void *v341; // [rsp+170h] [rbp-658h]
  __int64 v342; // [rsp+178h] [rbp-650h]
  unsigned __int32 v343; // [rsp+250h] [rbp-578h]
  unsigned __int32 v344; // [rsp+254h] [rbp-574h]
  unsigned int v345; // [rsp+258h] [rbp-570h]
  unsigned int v346; // [rsp+25Ch] [rbp-56Ch]
  unsigned int v347; // [rsp+260h] [rbp-568h]
  unsigned int v348; // [rsp+264h] [rbp-564h]
  unsigned int v349; // [rsp+268h] [rbp-560h]
  __int64 *v350; // [rsp+270h] [rbp-558h] BYREF
  __int64 v351; // [rsp+278h] [rbp-550h]
  _BYTE v352[1352]; // [rsp+280h] [rbp-548h] BYREF

  v319.m128i_i64[0] = a1;
  v325 = a2;
  v319.m128i_i32[2] = a3;
  v323 = a4;
  v322 = a5;
  v324 = a6;
  if ( (_DWORD)a5 )
  {
    v313.m128_i8[0] = 0;
    v8 = a4;
    v318 = (__m128 *)a4;
    v317 = (__m128 *)(unsigned int)(a5 - 1);
    v316 = &a4[(_QWORD)v317 + 1];
    v314.m128_u64[0] = 1;
    while ( 1 )
    {
      v9 = *v8;
      v10 = *(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      v11 = *(_QWORD *)v10;
      if ( *(_BYTE *)(*(_QWORD *)v10 + 16LL) == 33 || (v11 = sub_1BC75F0(v11, a2, a3, (__int64)a4)) != 0 )
        v13 = sub_F61C10(v11);
      else
        v13 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v98, v99, v100, v101);
      if ( v13 )
      {
        if ( !v13[16] )
        {
          a2 = v13[13];
          sub_7052B0((__int64 *)(a2 + 96), a2, a3, v12, v14, v15);
          if ( !v13[16] )
            goto LABEL_30;
        }
        v16 = 0;
        v17 = sub_B9F870((__int64)v13);
        v315 = (__int64 *)a3;
        v19 = (__int64 *)v17;
        if ( v17 == a3 )
          goto LABEL_30;
        while ( 1 )
        {
          v20 = *v19 & 0xFFFFFFFFFFFFFFF8LL;
          v21 = *(_BYTE *)(v20 + 28) & 0x7F;
          a3 = (unsigned int)v21 - 53;
          if ( (unsigned int)a3 <= 1 )
          {
            v20 = *(_QWORD *)(v20 + 64);
            v21 = *(_BYTE *)(v20 + 28) & 0x7F;
          }
          if ( v21 == 37 )
            break;
LABEL_28:
          if ( v315 == ++v19 )
          {
            v314.m128_u64[0] |= v16;
            goto LABEL_30;
          }
        }
        v22 = sub_AED600(v20, a2, a3, v18);
        v24 = *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL];
        LOBYTE(v22) = v24 | v22;
        a3 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = a3 | v22 & 7;
        v26 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v26 + 16) - 43 <= 1 || (v26 = sub_1BC7530(v26, a2, a3, v18)) != 0 )
          v25 = sub_9B4870(v26, a2, a3, v18, v23);
        while ( 1 )
        {
          v29 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
          v28 = v25 & 7;
          if ( (v25 & 2) != 0 || (byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 2) != 0 )
            v16 |= 2uLL;
          v30 = *v29;
          if ( *(_BYTE *)(*v29 + 16) == 42
            || (v30 = sub_1BC7590(*v29, a2, a3, v18)) != 0
            || (v30 = *v29, *(_BYTE *)(*v29 + 16) == 33)
            || (v27 = 1, a3 = *(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(a3 + 16) == 33)
            && (v30 = sub_F63050(v30, a2, a3, v18)) != 0 )
          {
            v25 = *(_QWORD *)(v30 + 32);
            v27 = 0;
            v28 = v25 & 7;
          }
          if ( (v28 & 4) != 0 || (byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
            v16 |= 4uLL;
          if ( v16 == 6 )
            break;
          if ( v27 )
            goto LABEL_28;
        }
      }
      v314.m128_u64[0] |= 6u;
LABEL_30:
      a4 = (_QWORD *)(&dword_0 + 1);
      v31 = v313.m128_i8[0];
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 7 )
        v31 = 1;
      ++v8;
      v313.m128_i8[0] = v31;
      if ( v316 == v8 )
      {
        v32 = (__int64 *)v318;
        LOBYTE(v318) = 0;
        v321 = (unsigned int *)&v350;
        v350 = (__int64 *)v352;
        v351 = 0x200000000LL;
        v315 = (__int64 *)&v335;
        v326 = v325 - 35;
        v33 = 2;
        v34 = 0;
        v319.m128i_i32[3] = (unsigned int)(v325 - 35) <= 1 || v325 == 14;
        v35 = v317;
        LOBYTE(v317) = 0;
        v320 = 648LL * (_QWORD)v35;
        v36 = 0;
        while ( 1 )
        {
          if ( v33 <= v36 )
          {
            v114 = sub_2237400(v321, v321 + 4, 0, 648, v315);
            v316 = (__int64 *)v114;
            v115 = v114 + 648LL * (unsigned int)v351;
            *(_QWORD *)v115 = 0;
            *(_QWORD *)(v115 + 24) = v115 + 40;
            *(_QWORD *)(v115 + 128) = v115 + 144;
            *(_QWORD *)(v115 + 232) = v115 + 248;
            *(_QWORD *)(v115 + 336) = v115 + 352;
            *(_QWORD *)(v115 + 440) = v115 + 456;
            *(_QWORD *)(v115 + 544) = v115 + 560;
            *(_QWORD *)(v115 + 8) = 0;
            *(_DWORD *)(v115 + 16) = 0;
            *(_QWORD *)(v115 + 32) = 0x800000000LL;
            *(_QWORD *)(v115 + 104) = 0;
            *(_QWORD *)(v115 + 112) = 0;
            *(_DWORD *)(v115 + 120) = 0;
            *(_QWORD *)(v115 + 136) = 0x800000000LL;
            *(_QWORD *)(v115 + 208) = 0;
            *(_QWORD *)(v115 + 216) = 0;
            *(_DWORD *)(v115 + 224) = 0;
            *(_QWORD *)(v115 + 240) = 0x800000000LL;
            *(_QWORD *)(v115 + 312) = 0;
            *(_QWORD *)(v115 + 320) = 0;
            *(_DWORD *)(v115 + 328) = 0;
            *(_QWORD *)(v115 + 344) = 0x800000000LL;
            *(_QWORD *)(v115 + 416) = 0;
            *(_QWORD *)(v115 + 424) = 0;
            *(_DWORD *)(v115 + 432) = 0;
            *(_QWORD *)(v115 + 448) = 0x800000000LL;
            *(_QWORD *)(v115 + 520) = 0;
            *(_QWORD *)(v115 + 528) = 0;
            *(_DWORD *)(v115 + 536) = 0;
            *(_QWORD *)(v115 + 552) = 0x800000000LL;
            *(_WORD *)(v115 + 624) = 0;
            v116 = v319.m128i_i64[0];
            *(_BYTE *)(v115 + 626) = 0;
            *(_QWORD *)(v115 + 632) = v116;
            *(_QWORD *)(v115 + 640) = *(_QWORD *)(v116 + 248);
            v117 = &v350[81 * (unsigned int)v351];
            if ( v350 != v117 )
            {
              v118 = v350;
              do
              {
                *(_QWORD *)v114 = 0;
                v140 = *v118;
                *(_DWORD *)(v114 + 16) = 0;
                *(_DWORD *)(v114 + 12) = 0;
                *(_DWORD *)(v114 + 8) = 0;
                *(_QWORD *)v114 = v140;
                LODWORD(v140) = *((_DWORD *)v118 + 2);
                *v118 = 0;
                *(_DWORD *)(v114 + 8) = v140;
                v141 = *((_DWORD *)v118 + 3);
                *((_DWORD *)v118 + 2) = 0;
                LODWORD(v140) = *(_DWORD *)(v114 + 12);
                *(_DWORD *)(v114 + 12) = v141;
                v142 = *((_DWORD *)v118 + 4);
                *((_DWORD *)v118 + 3) = v140;
                LODWORD(v140) = *(_DWORD *)(v114 + 16);
                *(_DWORD *)(v114 + 16) = v142;
                *((_DWORD *)v118 + 4) = v140;
                *(_DWORD *)(v114 + 32) = 0;
                *(_DWORD *)(v114 + 36) = 8;
                v143 = *((_DWORD *)v118 + 8);
                *(_QWORD *)(v114 + 24) = v114 + 40;
                if ( v143 )
                  sub_1712470((char ***)(v114 + 24), (char ***)v118 + 3);
                *(_QWORD *)(v114 + 104) = 0;
                v119 = v118[13];
                *(_DWORD *)(v114 + 120) = 0;
                *(_DWORD *)(v114 + 116) = 0;
                *(_DWORD *)(v114 + 112) = 0;
                *(_QWORD *)(v114 + 104) = v119;
                LODWORD(v119) = *((_DWORD *)v118 + 28);
                v118[13] = 0;
                *(_DWORD *)(v114 + 112) = v119;
                v120 = *((_DWORD *)v118 + 29);
                *((_DWORD *)v118 + 28) = 0;
                LODWORD(v119) = *(_DWORD *)(v114 + 116);
                *(_DWORD *)(v114 + 116) = v120;
                v121 = *((_DWORD *)v118 + 30);
                *((_DWORD *)v118 + 29) = v119;
                LODWORD(v119) = *(_DWORD *)(v114 + 120);
                *(_DWORD *)(v114 + 120) = v121;
                *((_DWORD *)v118 + 30) = v119;
                *(_DWORD *)(v114 + 136) = 0;
                *(_DWORD *)(v114 + 140) = 8;
                v122 = *((_DWORD *)v118 + 34);
                *(_QWORD *)(v114 + 128) = v114 + 144;
                if ( v122 )
                  sub_1712470((char ***)(v114 + 128), (char ***)v118 + 16);
                *(_QWORD *)(v114 + 208) = 0;
                v123 = v118[26];
                *(_DWORD *)(v114 + 224) = 0;
                *(_DWORD *)(v114 + 220) = 0;
                *(_DWORD *)(v114 + 216) = 0;
                *(_QWORD *)(v114 + 208) = v123;
                LODWORD(v123) = *((_DWORD *)v118 + 54);
                v118[26] = 0;
                *(_DWORD *)(v114 + 216) = v123;
                v124 = *((_DWORD *)v118 + 55);
                *((_DWORD *)v118 + 54) = 0;
                LODWORD(v123) = *(_DWORD *)(v114 + 220);
                *(_DWORD *)(v114 + 220) = v124;
                v125 = *((_DWORD *)v118 + 56);
                *((_DWORD *)v118 + 55) = v123;
                LODWORD(v123) = *(_DWORD *)(v114 + 224);
                *(_DWORD *)(v114 + 224) = v125;
                *((_DWORD *)v118 + 56) = v123;
                *(_DWORD *)(v114 + 240) = 0;
                *(_DWORD *)(v114 + 244) = 8;
                v126 = *((_DWORD *)v118 + 60);
                *(_QWORD *)(v114 + 232) = v114 + 248;
                if ( v126 )
                  sub_1712470((char ***)(v114 + 232), (char ***)v118 + 29);
                *(_QWORD *)(v114 + 312) = 0;
                v127 = v118[39];
                *(_DWORD *)(v114 + 328) = 0;
                *(_DWORD *)(v114 + 324) = 0;
                *(_DWORD *)(v114 + 320) = 0;
                *(_QWORD *)(v114 + 312) = v127;
                LODWORD(v127) = *((_DWORD *)v118 + 80);
                v118[39] = 0;
                *(_DWORD *)(v114 + 320) = v127;
                v128 = *((_DWORD *)v118 + 81);
                *((_DWORD *)v118 + 80) = 0;
                LODWORD(v127) = *(_DWORD *)(v114 + 324);
                *(_DWORD *)(v114 + 324) = v128;
                v129 = *((_DWORD *)v118 + 82);
                *((_DWORD *)v118 + 81) = v127;
                LODWORD(v127) = *(_DWORD *)(v114 + 328);
                *(_DWORD *)(v114 + 328) = v129;
                *((_DWORD *)v118 + 82) = v127;
                *(_DWORD *)(v114 + 344) = 0;
                *(_DWORD *)(v114 + 348) = 8;
                v130 = *((_DWORD *)v118 + 86);
                *(_QWORD *)(v114 + 336) = v114 + 352;
                if ( v130 )
                  sub_1712470((char ***)(v114 + 336), (char ***)v118 + 42);
                *(_QWORD *)(v114 + 416) = 0;
                v131 = v118[52];
                *(_DWORD *)(v114 + 432) = 0;
                *(_DWORD *)(v114 + 428) = 0;
                *(_DWORD *)(v114 + 424) = 0;
                *(_QWORD *)(v114 + 416) = v131;
                LODWORD(v131) = *((_DWORD *)v118 + 106);
                v118[52] = 0;
                *(_DWORD *)(v114 + 424) = v131;
                v132 = *((_DWORD *)v118 + 107);
                *((_DWORD *)v118 + 106) = 0;
                LODWORD(v131) = *(_DWORD *)(v114 + 428);
                *(_DWORD *)(v114 + 428) = v132;
                v133 = *((_DWORD *)v118 + 108);
                *((_DWORD *)v118 + 107) = v131;
                LODWORD(v131) = *(_DWORD *)(v114 + 432);
                *(_DWORD *)(v114 + 432) = v133;
                *((_DWORD *)v118 + 108) = v131;
                *(_DWORD *)(v114 + 448) = 0;
                *(_DWORD *)(v114 + 452) = 8;
                v134 = *((_DWORD *)v118 + 112);
                *(_QWORD *)(v114 + 440) = v114 + 456;
                if ( v134 )
                  sub_1712470((char ***)(v114 + 440), (char ***)v118 + 55);
                *(_QWORD *)(v114 + 520) = 0;
                v135 = v118[65];
                *(_DWORD *)(v114 + 536) = 0;
                *(_DWORD *)(v114 + 532) = 0;
                *(_DWORD *)(v114 + 528) = 0;
                *(_QWORD *)(v114 + 520) = v135;
                LODWORD(v135) = *((_DWORD *)v118 + 132);
                v118[65] = 0;
                *(_DWORD *)(v114 + 528) = v135;
                v136 = *((_DWORD *)v118 + 133);
                *((_DWORD *)v118 + 132) = 0;
                LODWORD(v135) = *(_DWORD *)(v114 + 532);
                *(_DWORD *)(v114 + 532) = v136;
                v137 = *((_DWORD *)v118 + 134);
                *((_DWORD *)v118 + 133) = v135;
                LODWORD(v135) = *(_DWORD *)(v114 + 536);
                *(_DWORD *)(v114 + 536) = v137;
                *((_DWORD *)v118 + 134) = v135;
                *(_DWORD *)(v114 + 552) = 0;
                *(_DWORD *)(v114 + 556) = 8;
                v138 = *((_DWORD *)v118 + 138);
                *(_QWORD *)(v114 + 544) = v114 + 560;
                if ( v138 )
                  sub_1712470((char ***)(v114 + 544), (char ***)v118 + 68);
                v139 = *((_BYTE *)v118 + 624);
                v118 += 81;
                v114 += 648;
                *(_BYTE *)(v114 - 24) = v139;
                *(_BYTE *)(v114 - 23) = *((_BYTE *)v118 - 23);
                *(_BYTE *)(v114 - 22) = *((_BYTE *)v118 - 22);
                a8 = (__m128)_mm_loadu_si128((const __m128i *)v118 - 1);
                *(__m128 *)(v114 - 16) = a8;
              }
              while ( v117 != v118 );
              v144 = v350;
              v117 = &v350[81 * (unsigned int)v351];
              if ( v350 != v117 )
              {
                do
                {
                  v117 -= 81;
                  v145 = (__int64 *)v117[68];
                  if ( v145 != v117 + 70 )
                    free(v145);
                  operator delete(v117[65], 8LL * *((unsigned int *)v117 + 134), 8);
                  v146 = (__int64 *)v117[55];
                  if ( v146 != v117 + 57 )
                    free(v146);
                  operator delete(v117[52], 8LL * *((unsigned int *)v117 + 108), 8);
                  v147 = (__int64 *)v117[42];
                  if ( v147 != v117 + 44 )
                    free(v147);
                  operator delete(v117[39], 8LL * *((unsigned int *)v117 + 82), 8);
                  v148 = (__int64 *)v117[29];
                  if ( v148 != v117 + 31 )
                    free(v148);
                  operator delete(v117[26], 8LL * *((unsigned int *)v117 + 56), 8);
                  v149 = (__int64 *)v117[16];
                  if ( v149 != v117 + 18 )
                    free(v149);
                  operator delete(v117[13], 8LL * *((unsigned int *)v117 + 30), 8);
                  v150 = (__int64 *)v117[3];
                  if ( v150 != v117 + 5 )
                    free(v150);
                  operator delete(*v117, 8LL * *((unsigned int *)v117 + 4), 8);
                }
                while ( v144 != v117 );
                v117 = v350;
              }
            }
            v151 = v335.m128_i32[0];
            if ( v117 != (__int64 *)(v321 + 4) )
              free(v117);
            HIDWORD(v351) = v151;
            LODWORD(v351) = v351 + 1;
            v350 = v316;
            v39 = (__int64)v316;
          }
          else
          {
            v37 = &v350[81 * v36];
            *v37 = 0;
            v37[3] = (__int64)(v37 + 5);
            v37[16] = (__int64)(v37 + 18);
            v37[29] = (__int64)(v37 + 31);
            v37[42] = (__int64)(v37 + 44);
            v37[55] = (__int64)(v37 + 57);
            v37[68] = (__int64)(v37 + 70);
            *((_WORD *)v37 + 312) = 0;
            v37[1] = 0;
            *((_DWORD *)v37 + 4) = 0;
            v37[4] = 0x800000000LL;
            v37[13] = 0;
            v37[14] = 0;
            *((_DWORD *)v37 + 30) = 0;
            v37[17] = 0x800000000LL;
            v37[26] = 0;
            v37[27] = 0;
            *((_DWORD *)v37 + 56) = 0;
            v37[30] = 0x800000000LL;
            v37[39] = 0;
            v37[40] = 0;
            *((_DWORD *)v37 + 82) = 0;
            v37[43] = 0x800000000LL;
            v37[52] = 0;
            v37[53] = 0;
            *((_DWORD *)v37 + 108) = 0;
            v37[56] = 0x800000000LL;
            v37[65] = 0;
            v37[66] = 0;
            *((_DWORD *)v37 + 134) = 0;
            v37[69] = 0x800000000LL;
            *((_BYTE *)v37 + 626) = 0;
            v38 = v319.m128i_i64[0];
            LODWORD(v351) = v351 + 1;
            v37[79] = v319.m128i_i64[0];
            v37[80] = *(_QWORD *)(v38 + 248);
            v316 = v350;
            v39 = (__int64)v350;
          }
          v335.m128_u64[0] = v314.m128_u64[0];
          sub_1BE4A20(v34 + v39, *(_QWORD *)(*v32 + 8), v319.m128i_u32[2], 1, v319.m128i_u32[3], v315);
          if ( !(_BYTE)v318 )
            LOBYTE(v318) = v350[v34 / 8 + 78];
          if ( !(_BYTE)v317 )
            LOBYTE(v317) = BYTE1(v350[v34 / 8 + 78]);
          ++v32;
          if ( v320 == v34 )
            break;
          v36 = v351;
          v33 = HIDWORD(v351);
          v34 += 648LL;
        }
        if ( !(_BYTE)v318 )
          goto LABEL_43;
        goto LABEL_45;
      }
    }
  }
  v313.m128_i8[0] = 0;
  v321 = (unsigned int *)&v350;
  v350 = (__int64 *)v352;
  v351 = 0x200000000LL;
  v314.m128_u64[0] = 1;
  LOBYTE(v317) = 0;
  v326 = v325 - 35;
LABEL_43:
  v315 = (__int64 *)&v335;
  if ( v325 != 14 && v326 > 1 )
  {
    sub_1BC8280((__int64)v321);
    return;
  }
LABEL_45:
  v347 = 0;
  LOBYTE(v337) = v313.m128_i8[0];
  v316 = (__int64 *)v319.m128i_i64[0];
  v338 = (char)v317;
  v40 = _mm_loadh_ps((const double *)&v323);
  v339 = v321;
  v335 = v40;
  v340 = v324;
  v341 = v315 + 10;
  v41 = _mm_loadh_ps((const double *)v314.m128_u64);
  v342 = 0x1A00000000LL;
  v42 = *(_QWORD *)(v319.m128i_i64[0] + 248);
  v43 = v315 + 8;
  v336 = v41;
  sub_1BD8E60((__int64)(v315 + 8), *(_QWORD *)(v42 + 18800));
  sub_1BD8E60((__int64)v43, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18808LL));
  sub_1BD8E60((__int64)v43, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18816LL));
  v44 = v335.m128_u64[0];
  v45 = *(_QWORD *)(v335.m128_u64[0] + 248);
  v46 = *(_BYTE **)(v45 + 17448);
  v47 = *(__int64 (**)(void))(*(_QWORD *)v46 + 96LL);
  if ( (char *)v47 == (char *)sub_102B800 )
  {
    v48 = v46[278];
  }
  else
  {
    v48 = v47();
    v44 = v335.m128_u64[0];
    v45 = *(_QWORD *)(v335.m128_u64[0] + 248);
  }
  if ( v48 )
  {
    sub_1BD8E60((__int64)(v315 + 8), *(_QWORD *)(v45 + 18824));
    v44 = v335.m128_u64[0];
    v45 = *(_QWORD *)(v335.m128_u64[0] + 248);
  }
  v49 = *(_BYTE **)(v45 + 17448);
  v50 = *(__int64 (**)(void))(*(_QWORD *)v49 + 128LL);
  if ( (char *)v50 == (char *)sub_102B810 )
  {
    v51 = v49[282];
  }
  else
  {
    v51 = v50();
    v44 = v335.m128_u64[0];
  }
  if ( v51 )
  {
    sub_1BD8E60((__int64)(v315 + 8), *(_QWORD *)(*(_QWORD *)(v44 + 248) + 18832LL));
    v44 = v335.m128_u64[0];
  }
  v343 = v342;
  v345 = v342;
  v52 = v315 + 8;
  sub_1BD8E60((__int64)(v315 + 8), *(_QWORD *)(*(_QWORD *)(v44 + 248) + 18720LL));
  sub_1BD8E60((__int64)v52, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18728LL));
  sub_1BD8E60((__int64)v52, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18736LL));
  v53 = *(_QWORD **)(v335.m128_u64[0] + 248);
  v54 = v53[2181];
  v55 = *(unsigned __int8 (**)(void))(*(_QWORD *)v54 + 56LL);
  if ( (char *)v55 == (char *)sub_102B790 )
  {
    if ( *(_BYTE *)(v54 + 8) > 0x3Fu || *(_BYTE *)(*(_QWORD *)(v54 + 208) + 352LL) )
      goto LABEL_55;
  }
  else
  {
    v194 = v55() == 0;
    v53 = *(_QWORD **)(v335.m128_u64[0] + 248);
    if ( !v194 )
      goto LABEL_55;
  }
  v154 = v53[2182];
  if ( !v154 )
    goto LABEL_56;
  v155 = *(unsigned __int8 (**)(void))(*(_QWORD *)v154 + 56LL);
  if ( (char *)v155 != (char *)sub_102B790 )
  {
    v194 = v155() == 0;
    v53 = *(_QWORD **)(v335.m128_u64[0] + 248);
    if ( v194 )
      goto LABEL_56;
LABEL_55:
    sub_1BD8E60((__int64)(v315 + 8), v53[2343]);
    v53 = *(_QWORD **)(v335.m128_u64[0] + 248);
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v154 + 8) > 0x3Fu || *(_BYTE *)(*(_QWORD *)(v154 + 208) + 352LL) )
    goto LABEL_55;
LABEL_56:
  v56 = v315 + 8;
  sub_1BD8E60((__int64)(v315 + 8), v53[2346]);
  sub_1BD8E60((__int64)v56, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18776LL));
  sub_1BD8E60((__int64)v56, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18784LL));
  v59 = *(_QWORD **)(v335.m128_u64[0] + 248);
  v60 = v59[2181];
  v61 = *(unsigned __int8 (**)(void))(*(_QWORD *)v60 + 56LL);
  if ( (char *)v61 == (char *)sub_102B790 )
  {
    if ( *(_BYTE *)(v60 + 8) > 0x3Fu || *(_BYTE *)(*(_QWORD *)(v60 + 208) + 352LL) )
      goto LABEL_58;
  }
  else
  {
    v194 = v61() == 0;
    v59 = *(_QWORD **)(v335.m128_u64[0] + 248);
    if ( !v194 )
      goto LABEL_58;
  }
  v152 = v59[2182];
  if ( !v152 )
    goto LABEL_59;
  v153 = *(unsigned __int8 (**)(void))(*(_QWORD *)v152 + 56LL);
  if ( (char *)v153 == (char *)sub_102B790 )
  {
    if ( *(_BYTE *)(v152 + 8) <= 0x3Fu && !*(_BYTE *)(*(_QWORD *)(v152 + 208) + 352LL) )
      goto LABEL_59;
  }
  else
  {
    if ( !v153() )
      goto LABEL_59;
    v59 = *(_QWORD **)(v335.m128_u64[0] + 248);
  }
LABEL_58:
  sub_1BD8E60((__int64)(v315 + 8), v59[2349]);
LABEL_59:
  v62 = v331;
  v331[0] = nullptr;
  v331[1] = nullptr;
  ptr[1] = v334;
  v333 = 0x200000000LL;
  LODWORD(ptr[0]) = 0;
  v63 = *(_QWORD *)v339;
  v314.m128_u64[0] = *(_QWORD *)v339 + 648LL * v339[2];
  if ( v63 == v314.m128_u64[0] )
    goto LABEL_85;
  v313.m128_u64[0] = (unsigned __int64)&ptr[1];
  v317 = (__m128 *)v328;
  do
  {
    v64 = *(__int64 **)(v63 + 544);
    v65 = &v64[*(unsigned int *)(v63 + 552)];
    if ( v64 != v65 )
    {
      while ( 1 )
      {
        v66 = *v64;
        v67 = LODWORD(v331[1]);
        v328[0] = *v64;
        if ( LODWORD(v331[1]) )
          break;
        v68 = ptr[1];
        v69 = 8LL * (unsigned int)v333;
        v57 = (char *)ptr[1] + v69;
        v70 = v69 >> 3;
        v71 = v69 >> 5;
        if ( !v71 )
        {
          v72 = (char *)ptr[1];
          goto LABEL_76;
        }
        if ( v66 != *(_QWORD *)ptr[1] )
        {
          v72 = (char *)ptr[1] + 8;
          if ( v66 == *((_QWORD *)ptr[1] + 1) )
            goto LABEL_118;
          v72 = (char *)ptr[1] + 16;
          if ( v66 == *((_QWORD *)ptr[1] + 2) )
            goto LABEL_118;
          v72 = (char *)ptr[1] + 24;
          v73 = (char *)ptr[1] + 32 * v71;
          if ( v66 == *((_QWORD *)ptr[1] + 3) )
            goto LABEL_118;
          while ( 1 )
          {
            v72 = (char *)(v68 + 4);
            if ( v73 == (char *)(v68 + 4) )
              break;
            if ( v66 == v68[4] )
              goto LABEL_118;
            if ( v66 == v68[5] )
            {
              v72 = (char *)(v68 + 5);
LABEL_118:
              if ( v57 != v72 )
                goto LABEL_80;
LABEL_79:
              sub_1BD8E60(v313.m128_i64[0], v328[0]);
              if ( (unsigned int)v333 <= 2 )
                goto LABEL_80;
              v102 = (unsigned __int64 *)ptr[1];
              v316 = v64;
              v103 = (unsigned __int64 *)((char *)ptr[1] + 8 * (unsigned int)v333);
              while ( 2 )
              {
                while ( 2 )
                {
                  if ( !LODWORD(ptr[0]) )
                  {
                    v329.m128_u64[0] = 0;
                    goto LABEL_140;
                  }
                  v104 = *v102;
                  v58 = (unsigned int)(LODWORD(ptr[0]) - 1);
                  v105 = v58 & (*v102 ^ (*v102 >> 9));
                  v106 = (unsigned __int64 *)((char *)v331[0] + 8 * v105);
                  v57 = (char *)*v106;
                  if ( *v102 == *v106 )
                    goto LABEL_137;
                  v111 = 1;
                  v112 = nullptr;
                  if ( v57 )
                  {
                    while ( 1 )
                    {
                      if ( v57 == (char *)-1LL && !v112 )
                        v112 = v106;
                      v105 = v58 & (v111 + v105);
                      LODWORD(v318) = v111 + 1;
                      v106 = (unsigned __int64 *)((char *)v331[0] + 8 * v105);
                      v57 = (char *)*v106;
                      if ( v104 == *v106 )
                        break;
                      if ( !v57 )
                      {
                        if ( v112 )
                          v106 = v112;
                        goto LABEL_153;
                      }
                      v111 = (int)v318;
                    }
LABEL_137:
                    sub_1BDAA00(&v329, v106, (_QWORD *)v331[0] + LODWORD(ptr[0]), (__int64)v331, 1);
                    if ( v103 == ++v102 )
                      goto LABEL_145;
                    continue;
                  }
                  break;
                }
LABEL_153:
                v329.m128_u64[0] = (unsigned __int64)v106;
                v74 = (unsigned int)(LODWORD(v331[1]) + 1);
                v75 = (unsigned int)(3 * LODWORD(ptr[0]));
                if ( 4 * (int)v74 < (unsigned int)v75 )
                {
                  v75 = (unsigned int)(LODWORD(ptr[0]) - HIDWORD(v331[1]) - v74);
                  if ( (unsigned int)v75 <= LODWORD(ptr[0]) >> 3 )
                  {
                    v107 = (int)ptr[0];
LABEL_141:
                    sub_1BE5320((__int64)v331, v107, v74, v75, (__int64)v57, v58);
                    sub_1BDA8F0((__int64 *)v331, v102, &v329);
                    v106 = (unsigned __int64 *)v329.m128_u64[0];
                    LODWORD(v74) = LODWORD(v331[1]) + 1;
                  }
                  LODWORD(v331[1]) = v74;
                  if ( *v106 )
                    --HIDWORD(v331[1]);
                  v108 = *v102++;
                  *v106 = v108;
                  sub_1BDAA00(&v329, v106, (_QWORD *)v331[0] + LODWORD(ptr[0]), (__int64)v331, 1);
                  if ( v103 == v102 )
                  {
LABEL_145:
                    v64 = v316;
                    goto LABEL_80;
                  }
                  continue;
                }
                break;
              }
LABEL_140:
              v107 = 2 * LODWORD(ptr[0]);
              goto LABEL_141;
            }
            if ( v66 == v68[6] )
            {
              if ( v57 != (char *)(v68 + 6) )
                goto LABEL_80;
              goto LABEL_79;
            }
            if ( v66 == v68[7] )
            {
              if ( v57 != (char *)(v68 + 7) )
                goto LABEL_80;
              goto LABEL_79;
            }
            v68 += 4;
          }
          v70 = (v57 - v72) >> 3;
LABEL_76:
          if ( v70 != 2 )
          {
            if ( v70 != 3 )
            {
              if ( v70 != 1 )
                goto LABEL_79;
              goto LABEL_131;
            }
            if ( v66 == *(_QWORD *)v72 )
              goto LABEL_118;
            v72 += 8;
          }
          if ( v66 == *(_QWORD *)v72 )
            goto LABEL_118;
          v72 += 8;
LABEL_131:
          if ( v66 == *(_QWORD *)v72 )
            goto LABEL_118;
          goto LABEL_79;
        }
        if ( v57 == ptr[1] )
          goto LABEL_79;
LABEL_80:
        if ( v65 == ++v64 )
          goto LABEL_81;
      }
      if ( LODWORD(ptr[0]) )
      {
        v57 = (char *)v331[0];
        v96 = (LODWORD(ptr[0]) - 1) & (v66 ^ (v66 >> 9));
        v97 = (__int64 *)((char *)v331[0] + 8 * v96);
        v58 = *v97;
        if ( v66 == *v97 )
        {
LABEL_116:
          sub_1BDAA00(&v329, v97, (_QWORD *)v331[0] + LODWORD(ptr[0]), (__int64)v331, 1);
          goto LABEL_80;
        }
        v109 = 1;
        v110 = nullptr;
        if ( v58 )
        {
          while ( 1 )
          {
            if ( !v110 && v58 == -1 )
              v110 = v97;
            v96 = (LODWORD(ptr[0]) - 1) & (v109 + v96);
            LODWORD(v316) = v109 + 1;
            v97 = (__int64 *)((char *)v331[0] + 8 * v96);
            v58 = *v97;
            if ( v66 == *v97 )
              goto LABEL_116;
            if ( !v58 )
              break;
            v109 = (int)v316;
          }
          if ( v110 )
            v97 = v110;
        }
        v67 = (unsigned int)(LODWORD(v331[1]) + 1);
        v329.m128_u64[0] = (unsigned __int64)v97;
        if ( 4 * (int)v67 < (unsigned int)(3 * LODWORD(ptr[0])) )
        {
          if ( (unsigned int)(LODWORD(ptr[0]) - HIDWORD(v331[1]) - v67) > LODWORD(ptr[0]) >> 3 )
          {
LABEL_149:
            LODWORD(v331[1]) = v67;
            if ( *v97 )
              --HIDWORD(v331[1]);
            *v97 = v328[0];
            sub_1BDAA00(&v329, v97, (_QWORD *)v331[0] + LODWORD(ptr[0]), (__int64)v331, 1);
            sub_1BD8E60(v313.m128_i64[0], v328[0]);
            goto LABEL_80;
          }
          v113 = (int)ptr[0];
LABEL_160:
          sub_1BE5320((__int64)v331, v113, LODWORD(ptr[0]), v67, (__int64)v57, v58);
          sub_1BDA8F0((__int64 *)v331, (unsigned __int64 *)v317, &v329);
          v97 = (__int64 *)v329.m128_u64[0];
          LODWORD(v67) = LODWORD(v331[1]) + 1;
          goto LABEL_149;
        }
      }
      else
      {
        v329.m128_u64[0] = 0;
      }
      v113 = 2 * LODWORD(ptr[0]);
      goto LABEL_160;
    }
LABEL_81:
    v63 += 648;
  }
  while ( v314.m128_u64[0] != v63 );
  v76 = (__int64 *)ptr[1];
  if ( 8LL * (unsigned int)v333 )
  {
    v77 = (__int64 *)((char *)ptr[1] + 8 * (unsigned int)v333);
    v78 = v315 + 8;
    do
    {
      v79 = *v76++;
      sub_1BD8E60((__int64)v78, v79);
    }
    while ( v76 != v77 );
  }
LABEL_85:
  v346 = v342;
  v348 = v342;
  v80 = v315 + 8;
  sub_1BD8E60((__int64)(v315 + 8), *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18640LL));
  sub_1BD8E60((__int64)v80, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18648LL));
  sub_1BD8E60((__int64)v80, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18656LL));
  v81 = *(_QWORD **)(v335.m128_u64[0] + 248);
  if ( (*(_BYTE *)(v81[290] + 3LL) & 0x20) != 0 )
  {
    sub_1BD8E60((__int64)v80, v81[2335]);
    v81 = *(_QWORD **)(v335.m128_u64[0] + 248);
  }
  v82 = v315 + 8;
  sub_1BD8E60((__int64)(v315 + 8), v81[2336]);
  sub_1BD8E60((__int64)v82, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18696LL));
  sub_1BD8E60((__int64)v82, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18704LL));
  sub_1BD8E60((__int64)v82, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18712LL));
  sub_1BD8E60((__int64)v82, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18752LL));
  sub_1BD8E60((__int64)v82, *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18760LL));
  v344 = v342;
  v349 = v342;
  if ( ptr[1] != v334 )
    free(ptr[1]);
  v83 = 8LL * LODWORD(ptr[0]);
  operator delete(v331[0], v83, 8);
  switch ( v325 )
  {
    case 5:
      if ( v322 != 1 )
        goto LABEL_357;
      v305 = *(void ***)(*(_QWORD *)v339 + 24LL);
      v306 = &v305[*(unsigned int *)(*(_QWORD *)v339 + 32LL)];
      while ( v306 != v305 )
      {
        v307 = *v305++;
        v331[0] = v307;
        sub_1BFAC00(v335.m128_i64[0], (__int64)v331, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
      }
      goto LABEL_385;
    case 6:
      if ( v322 == 1 )
      {
LABEL_385:
        if ( v338 )
        {
          for ( i = v347; v348 > i; ++i )
          {
            v267 = i;
            v331[0] = *((void **)v341 + v267);
            sub_1BFAC00(v335.m128_i64[0], (__int64)v331, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
          }
          v268 = *(void ***)(*(_QWORD *)v339 + 336LL);
          v269 = &v268[*(unsigned int *)(*(_QWORD *)v339 + 344LL)];
          while ( v269 != v268 )
          {
            v270 = *v268++;
            v331[0] = v270;
            sub_1BFAC00(v335.m128_i64[0], (__int64)v331, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
          }
        }
        goto LABEL_94;
      }
LABEL_357:
      BYTE4(ptr[0]) = 1;
      v331[0] = &ptr[1];
      v316 = v328;
      v239 = v328;
      v331[1] = byte_8;
      LODWORD(ptr[0]) = 0;
      v314.m128_u64[0] = 0;
      v313.m128_i32[0] = 0;
      v317 = &v329;
      v318 = (__m128 *)v331;
LABEL_358:
      v328[0] = sub_A63D20(*(_QWORD **)(v335.m128_u64[0] + 248));
      v328[1] = sub_A63D20(*(_QWORD **)(v335.m128_u64[0] + 248));
      v242 = *(_QWORD *)v339 + v314.m128_u64[0];
      v243 = *(__int64 **)(v242 + 24);
      v244 = &v243[*(unsigned int *)(v242 + 32)];
      if ( v243 == v244 )
        goto LABEL_409;
      v245 = *(__int64 **)(v242 + 24);
      v246 = (v325 == 5) | v313.m128_i8[0] ^ 1;
      while ( 1 )
      {
        v247 = *v245;
        v248 = (__int64 *)(*v245 & 0xFFFFFFFFFFFFFFF0LL);
        v249 = sub_F68450(*v248, v83, v240, v242, v241);
        if ( sub_19A1E30(*(_QWORD *)(v249 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          *v239 = v247;
          if ( v246 )
          {
            v83 = (__int64)v316;
            sub_1BFAC00(v335.m128_i64[0], (__int64)v316, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
            if ( v325 == 6 )
            {
LABEL_365:
              v250 = v248[1];
              v251 = (unsigned __int64 *)v317;
              v83 = (__int64)v318;
              sub_1BD8EB0(
                v317,
                (__int64)v318,
                v250 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v247 | (unsigned __int8)v250) & 7);
              if ( v330 )
              {
                v319.m128i_i64[0] = v247;
                v252 = _mm_loadl_epi64(&v319);
                v83 = (__int64)v251;
                v41 = (__m128)_mm_unpacklo_epi64(v252, v252);
                v329 = v41;
                sub_1BFAC00(v335.m128_i64[0], (__int64)v251, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
              }
            }
          }
          else if ( v325 == 6 )
          {
            goto LABEL_365;
          }
        }
        if ( v244 == ++v245 )
        {
LABEL_409:
          v314.m128_u64[0] += 648LL;
          ++v239;
          if ( v313.m128_i32[0] != 1 )
          {
            v313.m128_i32[0] = 1;
            goto LABEL_358;
          }
          if ( !BYTE4(ptr[0]) )
            free(v331[0]);
LABEL_91:
          if ( v338 )
          {
            sub_1BFAE40((__int64)v315, v41, a8);
            if ( v338 )
              sub_1BFBB10((__int64)v315, v41, a8);
          }
          goto LABEL_94;
        }
      }
    case 7:
      if ( v322 != 1 )
        goto LABEL_91;
      v308 = *(void ***)(*(_QWORD *)v339 + 24LL);
      for ( j = &v308[*(unsigned int *)(*(_QWORD *)v339 + 32LL)]; j != v308; ++v308 )
      {
        v331[0] = *v308;
        v310 = *(_QWORD *)(sub_F68450(
                             *(_QWORD *)((unsigned __int64)v331[0] & 0xFFFFFFFFFFFFFFF0LL),
                             v83,
                             v84,
                             (__int64)v85,
                             v86)
                         & 0xFFFFFFFFFFFFFFF0LL);
        if ( (sub_19A1E30(v310)
           || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v310 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1)
          && (*(_BYTE *)(v310 + 16) != 26 && (v310 = sub_1BC7360(v310, v83, v84, (__int64)v85)) == 0
           || !sub_A5DBE0(v310, v83, v84, (__int64)v85, v86) && (*(_BYTE *)(v310 + 18) & 0x18) == 0) )
        {
          v83 = (__int64)v331;
          sub_1BFAC00(v335.m128_i64[0], (__int64)v331, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
        }
      }
      goto LABEL_94;
    case 8:
      goto LABEL_225;
    case 9:
    case 10:
    case 12:
    case 26:
    case 27:
      goto LABEL_268;
    case 11:
      if ( v322 != 1 )
      {
LABEL_268:
        if ( v338 )
          sub_1BFAF80((__int64)v315, v41, a8);
      }
      goto LABEL_94;
    case 13:
      if ( v338 )
      {
        for ( k = v345; v346 > k; ++k )
        {
          v254 = k;
          v331[0] = *((void **)v341 + v254);
          sub_1BFAC00(v335.m128_i64[0], (__int64)v331, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
        }
        v255 = *(void ***)(*(_QWORD *)v339 + 336LL);
        v256 = &v255[*(unsigned int *)(*(_QWORD *)v339 + 344LL)];
        while ( v256 != v255 )
        {
          v257 = *v255++;
          v331[0] = v257;
          sub_1BFAC00(v335.m128_i64[0], (__int64)v331, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
        }
      }
      goto LABEL_94;
    case 14:
      v210 = v335.m128_u64[0];
      v211 = 1;
      v331[0] = *(void **)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18640LL);
      goto LABEL_334;
    case 15:
      BYTE4(ptr[0]) = 1;
      v168 = 0;
      v331[0] = &ptr[1];
      v331[1] = byte_8;
      LODWORD(ptr[0]) = 0;
      do
      {
        v169 = v168 + *(_QWORD *)v339;
        v170 = *(unsigned __int64 **)(v169 + 232);
        v171 = v169;
        v172 = &v170[*(unsigned int *)(v169 + 240)];
        if ( v170 != v172 )
        {
          do
          {
            v173 = *v170;
            v83 = (__int64)v331;
            sub_1BD8EB0(
              &v329,
              (__int64)v331,
              *(_QWORD *)&byte_8[*v170 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*v170 | (unsigned __int8)*(_QWORD *)&byte_8[*v170 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
            if ( v330 )
            {
              v83 = v173;
              sub_1BFAA10(v335.m128_i64[0], v173, (__int64 *)v335.m128_u64[1], v336.m128_i64[0], v340, v41, a8);
            }
            ++v170;
          }
          while ( v172 != v170 );
          v171 = v168 + *(_QWORD *)v339;
        }
        v174 = *(unsigned __int64 **)(v171 + 128);
        for ( m = &v174[*(unsigned int *)(v171 + 136)]; m != v174; ++v174 )
        {
          v176 = *v174;
          v83 = (__int64)v331;
          sub_1BD8EB0(
            &v329,
            (__int64)v331,
            *(_QWORD *)&byte_8[*v174 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*v174 | (unsigned __int8)*(_QWORD *)&byte_8[*v174 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
          if ( v330 )
          {
            v83 = v176;
            sub_1BFAA10(v335.m128_i64[0], v176, (__int64 *)v335.m128_u64[1], v336.m128_i64[0], v340, v41, a8);
          }
        }
        v168 += 648;
      }
      while ( v168 != 1296 );
      if ( !BYTE4(ptr[0]) )
        free(v331[0]);
      goto LABEL_240;
    case 16:
    case 17:
    case 32:
    case 33:
      goto LABEL_265;
    case 18:
    case 19:
LABEL_240:
      BYTE4(ptr[0]) = 1;
      LOBYTE(v316) = v325 == 15;
      v331[1] = byte_8;
      v313.m128_i32[0] = v325 == 15;
      v331[0] = &ptr[1];
      LODWORD(ptr[0]) = 0;
      v177 = *(_QWORD *)v339;
      v178 = *(__int64 **)(*(_QWORD *)v339 + 24LL);
      v179 = *(unsigned int *)(*(_QWORD *)v339 + 32LL);
      v180 = (__int64)&v178[v179];
      if ( v178 == (__int64 *)v180 )
      {
        if ( v325 != 15 )
          goto LABEL_314;
        v195 = *(__int64 **)(v177 + 672);
        v314.m128_u64[0] = (unsigned __int64)&v195[*(unsigned int *)(v177 + 680)];
        if ( v195 == (__int64 *)v314.m128_u64[0] )
          goto LABEL_314;
        goto LABEL_301;
      }
      v314.m128_u64[0] = (unsigned __int64)v331;
      v181 = &v178[v179];
      break;
    case 20:
    case 21:
      LOBYTE(v316) = 0;
      goto LABEL_314;
    case 22:
    case 23:
    case 24:
    case 25:
    case 28:
    case 29:
      if ( v338 )
      {
        v213 = v344;
        if ( v344 > v343 )
        {
          v314.m128_i32[0] = v343;
          v214 = v346;
          v313.m128_u64[0] = (unsigned __int64)&v329;
          v215 = (__m128)_mm_loadl_epi64((const __m128i *)&v313);
          v313.m128_u64[0] = (unsigned __int64)v328;
          v216 = v315;
          v313 = _mm_loadh_ps((const double *)v313.m128_u64);
          do
          {
            v217 = v345;
            if ( v345 < v214 )
            {
              v218 = 8LL * v314.m128_u32[0];
              do
              {
                v219 = v217;
                v329 = 0u;
                ++v217;
                v329.m128_u64[1] = *((_QWORD *)v341 + v219);
                v220 = sub_1BC70F0(
                         *(_QWORD *)(v335.m128_u64[0] + 248),
                         *(_QWORD *)((char *)v341 + v218),
                         *(_QWORD *)v335.m128_u64[1]);
                si128 = _mm_load_si128((const __m128i *)&v313);
                v328[0] = v220;
                *(__m128i *)v331 = si128;
                ptr[0] = v216;
                sub_1BFB020(v336.m128_i64[1], v337, 0, 0, v215, a8, (__int64)sub_1BFBA70, (__int64)v331);
                v214 = v346;
              }
              while ( v346 > v217 );
              v213 = v344;
            }
            ++v314.m128_i32[0];
          }
          while ( v314.m128_i32[0] < v213 );
        }
      }
      goto LABEL_94;
    case 30:
    case 31:
      BYTE4(ptr[0]) = 1;
      v331[0] = &ptr[1];
      v331[1] = byte_8;
      LODWORD(ptr[0]) = 0;
      if ( v336.m128_i32[0] )
      {
        v188 = 0;
        v314.m128_u64[0] = 72 * (9LL * (unsigned int)(v336.m128_i32[0] - 1) + 9);
        do
        {
          v85 = (_QWORD *)(v188 + *(_QWORD *)v339);
          v189 = (__int64 *)v85[16];
          v84 = *((unsigned int *)v85 + 34);
          v190 = v85;
          v191 = &v189[v84];
          if ( v189 != v191 )
          {
            do
            {
              v192 = *v189;
              sub_1BD8EB0(
                &v329,
                (__int64)v331,
                *(_QWORD *)&byte_8[*v189 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)*v189 | (unsigned __int8)*(_QWORD *)&byte_8[*v189 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
              if ( v330 )
              {
                v313.m128_u64[0] = v192;
                v193 = _mm_loadl_epi64((const __m128i *)&v313);
                v41 = (__m128)_mm_unpacklo_epi64(v193, v193);
                v329 = v41;
                sub_1BFAC00(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
              }
              ++v189;
            }
            while ( v191 != v189 );
            v85 = (_QWORD *)(v188 + *(_QWORD *)v339);
            v190 = v85;
          }
          if ( *((_BYTE *)v190 + 626) )
          {
            v279 = *(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 19064LL) & 0xFFFFFFFFFFFFFFF0LL];
            v280 = v279 & 0xFFFFFFFFFFFFFFF8LL
                 | ((unsigned __int8)v279 | *(_BYTE *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 19064LL)) & 7;
            sub_1BD8EB0(&v329, (__int64)v331, v280);
            if ( v330 )
            {
              v313.m128_u64[0] = v280;
              v281 = _mm_loadl_epi64((const __m128i *)&v313);
              v41 = (__m128)_mm_unpacklo_epi64(v281, v281);
              v329 = v41;
              sub_1BFAC00(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
            }
          }
          v188 += 648;
        }
        while ( v314.m128_u64[0] != v188 );
        if ( !BYTE4(ptr[0]) )
          free(v331[0]);
      }
LABEL_265:
      sub_1BFB2C0((__int64)v315, nullptr, *(double *)v41.m128_u64, a8, v84, (unsigned __int64)v85);
      if ( !v338 )
        goto LABEL_94;
      goto LABEL_226;
    case 34:
      sub_1BFB2C0((__int64)v315, (int *)((char *)&dword_0 + 1), *(double *)v41.m128_u64, a8, v84, (unsigned __int64)v85);
      goto LABEL_225;
    case 35:
    case 36:
      v210 = v335.m128_u64[0];
      v211 = 2;
      v212 = *(_QWORD *)(v335.m128_u64[0] + 248);
      v331[0] = *(void **)(v212 + 18640);
      v331[1] = *(void **)(v212 + 18640);
LABEL_334:
      sub_1BFAC00(v210, (__int64)v331, v335.m128_i64[1], v336.m128_i64[0], v340, v211, v41, a8);
      goto LABEL_94;
    case 37:
    case 38:
      if ( !v338 )
        goto LABEL_396;
      v84 = v349;
      if ( !v349 )
        goto LABEL_396;
      v208 = 0;
      if ( v325 == 38 )
      {
        while ( 1 )
        {
          v85 = v341;
          while ( 1 )
          {
            v83 = *((_QWORD *)v341 + v208);
            if ( v83 != *(_QWORD *)(*(_QWORD *)(v335.m128_u64[0] + 248) + 18640LL) )
              break;
            if ( ++v208 >= (unsigned int)v84 )
              goto LABEL_396;
          }
          ++v208;
          sub_1BFB130(v315, v83, (v336.m128_i8[8] & 4) != 0, (v336.m128_i8[8] & 2) != 0, v41, a8);
          v84 = v349;
          if ( v208 >= v349 )
            goto LABEL_396;
        }
      }
      v209 = v315;
      do
      {
        v83 = *((_QWORD *)v341 + v208);
        v85 = *(_QWORD **)(v335.m128_u64[0] + 248);
        if ( v83 != v85[2330] || (*(_BYTE *)(*(_QWORD *)(v335.m128_u64[0] + 232) + 1LL) & 0x40) == 0 )
        {
          sub_1BFB130(v209, v83, (v336.m128_i8[8] & 4) != 0, (v336.m128_i8[8] & 2) != 0, v41, a8);
          v84 = v349;
        }
        ++v208;
      }
      while ( v208 < (unsigned int)v84 );
LABEL_396:
      v271 = v315;
      v272 = *(__int64 **)(*(_QWORD *)v339 + 24LL);
      for ( n = &v272[*(unsigned int *)(*(_QWORD *)v339 + 32LL)]; n != v272; ++v272 )
      {
        v274 = *v272;
        v275 = *v272 & 0xFFFFFFFFFFFFFFF0LL;
        v276 = sub_F68450(*(_QWORD *)v275, v83, v84, (__int64)v85, v86);
        if ( sub_19A1E30(*(_QWORD *)(v276 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          LOBYTE(v277) = 0;
          if ( (v274 & 2) == 0 && (*(_BYTE *)(v275 + 8) & 2) == 0 )
            v277 = (v336.m128_u64[1] >> 1) & 1;
          LOBYTE(v278) = 0;
          if ( (v274 & 4) == 0 && (*(_BYTE *)(v275 + 8) & 4) == 0 )
            v278 = (v336.m128_u64[1] >> 2) & 1;
          v83 = v274;
          sub_1BFB130(v271, v274, v278, v277, v41, a8);
        }
      }
      goto LABEL_94;
    case 40:
      v258 = &v329;
      v318 = &v329;
      v259 = *(unsigned __int64 **)(*(_QWORD *)v339 + 24LL);
      v317 = (__m128 *)&v259[*(unsigned int *)(*(_QWORD *)v339 + 32LL)];
      if ( v259 != (unsigned __int64 *)v317 )
      {
        v319.m128i_i64[0] = (__int64)v331;
        do
        {
          v262 = *v259;
          v329.m128_u64[0] = 0;
          v314.m128_u64[0] = v262;
          v263 = sub_F68450(*(_QWORD *)(v262 & 0xFFFFFFFFFFFFFFF0LL), v83, v84, (__int64)v258, v86);
          v84 = v329.m128_u64[0] | v263 & 7;
          v329.m128_u64[0] = v84;
          if ( (v263 & 8) != 0 )
          {
            v265 = (_QWORD *)(v263 & 0xFFFFFFFFFFFFFFF0LL);
            v84 |= v265[3];
            v329.m128_u64[0] = v84;
            v260 = *v265 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v260 = v263 & 0xFFFFFFFFFFFFFFF0LL;
          }
          v261 = *(_QWORD *)v260;
          if ( *(_BYTE *)(*(_QWORD *)v260 + 16LL) == 48 && ((v336.m128_i8[8] & 4) != 0 || (v84 & 4) == 0) )
          {
            if ( (v336.m128_i8[8] & 2) != 0 || (v84 &= 2u, !(_DWORD)v84) )
            {
              v283 = *(__int64 **)(*(_QWORD *)v339 + 776LL);
              v316 = &v283[*(unsigned int *)(*(_QWORD *)v339 + 784LL)];
              if ( v283 != v316 )
              {
                while ( 1 )
                {
                  v284 = *v283;
                  v285 = *(_QWORD *)(*v283 & 0xFFFFFFFFFFFFFFF0LL);
                  v286 = (__m128 *)sub_F63270(v261, v83, v84, (__int64)v258, v86, v264);
                  v287 = (__m128 *)sub_F61C10(v285);
                  v258 = v287;
                  if ( !v286
                    || !v287
                    || v286 != v287
                    && (v83 = (__int64)v287,
                        v313.m128_u64[0] = (unsigned __int64)v287,
                        v288 = sub_1BE56A0((__int64)v286, (__int64)v287),
                        v258 = (__m128 *)v313.m128_u64[0],
                        !v288) )
                  {
                    v83 = *(unsigned int *)(v340 + 2968);
                    if ( !(unsigned __int8)sub_183BB70(v335.m128_i64[0], v83, (__int64)v286, (__int64)v258, v86, v264) )
                      break;
                  }
                  v313.m128_u64[0] = v284;
                  v289 = _mm_loadh_ps((const double *)v313.m128_u64);
                  *(__m128 *)v331 = v289;
                  v84 = *(_QWORD *)(v285 + 32);
                  if ( (v336.m128_i8[8] & 4) != 0
                    || (v84 & 4) == 0
                    && (v258 = (__m128 *)(v84 & 0xFFFFFFFFFFFFFFF0LL), (byte_8[v84 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0) )
                  {
                    if ( (v336.m128_i8[8] & 2) != 0 || (v84 & 2) == 0 && (byte_8[v84 & 0xFFFFFFFFFFFFFFF0LL] & 2) == 0 )
                    {
                      sub_F5E8B0((__int64 *)v318, *(_QWORD *)(v335.m128_u64[0] + 248), v84);
                      v83 = v319.m128i_i64[0];
                      sub_1BFAC00(
                        v335.m128_i64[0],
                        v319.m128i_i64[0],
                        v335.m128_i64[1],
                        v336.m128_i64[0],
                        v340,
                        0,
                        v289,
                        a8);
                    }
                  }
                  if ( v316 == ++v283 )
                    break;
                  v261 = *(_QWORD *)v260;
                }
              }
            }
          }
          ++v259;
        }
        while ( v317 != (__m128 *)v259 );
      }
      goto LABEL_94;
    case 43:
      if ( v322 == 2 )
      {
        v222 = v339;
        v223 = *(void ***)(*(_QWORD *)v339 + 24LL);
        v224 = &v223[*(unsigned int *)(*(_QWORD *)v339 + 32LL)];
        if ( v223 != v224 )
        {
          do
          {
            v331[0] = *v223;
            v225 = (__int64 *)((unsigned __int64)v331[0] & 0xFFFFFFFFFFFFFFF0LL);
            v331[1] = (void *)sub_A63D20(*(_QWORD **)(v335.m128_u64[0] + 248));
            v229 = sub_F68450(*v225, v83, v226, v227, v228);
            if ( sub_19A1E30(*(_QWORD *)(v229 & 0xFFFFFFFFFFFFFFF0LL)) )
            {
              v83 = (__int64)v331;
              sub_1BFAC00(v335.m128_i64[0], (__int64)v331, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
            }
            ++v223;
          }
          while ( v224 != v223 );
          v222 = v339;
        }
        v230 = *(_QWORD *)v222;
        v231 = *(void ***)(v230 + 672);
        for ( ii = &v231[*(unsigned int *)(v230 + 680)]; ii != v231; ++v231 )
        {
          v233 = (unsigned __int64)*v231;
          v234 = (void *)sub_A63D20(*(_QWORD **)(v335.m128_u64[0] + 248));
          v331[1] = (void *)v233;
          v331[0] = v234;
          v238 = sub_F68450(*(_QWORD *)(v233 & 0xFFFFFFFFFFFFFFF0LL), v83, v235, v236, v237);
          if ( sub_19A1E30(*(_QWORD *)(v238 & 0xFFFFFFFFFFFFFFF0LL)) )
          {
            v83 = (__int64)v331;
            sub_1BFAC00(v335.m128_i64[0], (__int64)v331, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
          }
        }
      }
      goto LABEL_94;
    case 44:
      BYTE4(ptr[0]) = 1;
      v156 = 0;
      v331[0] = &ptr[1];
      v331[1] = byte_8;
      LODWORD(ptr[0]) = 0;
      do
      {
        v157 = v156 + *(_QWORD *)v339;
        v158 = *(__int64 **)(v157 + 24);
        v159 = *(unsigned int *)(v157 + 32);
        v160 = v157;
        v161 = &v158[v159];
        if ( v158 != v161 )
        {
          do
          {
            v162 = *v158;
            v83 = (__int64)v331;
            sub_1BD8EB0(
              &v329,
              (__int64)v331,
              *(_QWORD *)&byte_8[*v158 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*v158 | (unsigned __int8)*(_QWORD *)&byte_8[*v158 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
            if ( v330 )
            {
              v313.m128_u64[0] = v162;
              v163 = _mm_loadl_epi64((const __m128i *)&v313);
              v83 = (__int64)&v329;
              v41 = (__m128)_mm_unpacklo_epi64(v163, v163);
              v329 = v41;
              sub_1BFAC00(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
            }
            ++v158;
          }
          while ( v161 != v158 );
          v160 = v156 + *(_QWORD *)v339;
        }
        v164 = *(__int64 **)(v160 + 128);
        for ( jj = &v164[*(unsigned int *)(v160 + 136)]; jj != v164; ++v164 )
        {
          v166 = *v164;
          v83 = (__int64)v331;
          sub_1BD8EB0(
            &v329,
            (__int64)v331,
            *(_QWORD *)&byte_8[*v164 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*v164 | (unsigned __int8)*(_QWORD *)&byte_8[*v164 & 0xFFFFFFFFFFFFFFF0LL]) & 7);
          if ( v330 )
          {
            v313.m128_u64[0] = v166;
            v167 = _mm_loadl_epi64((const __m128i *)&v313);
            v83 = (__int64)&v329;
            v41 = (__m128)_mm_unpacklo_epi64(v167, v167);
            v329 = v41;
            sub_1BFAC00(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v335.m128_u64[0] + 232) + 1LL) & 0x10) != 0 )
        {
          v298 = v156 + *(_QWORD *)v339;
          v299 = *(__int64 **)(v298 + 232);
          for ( v313.m128_u64[0] = (unsigned __int64)&v299[*(unsigned int *)(v298 + 240)];
                (__int64 *)v313.m128_u64[0] != v299;
                ++v299 )
          {
            v300 = *v299;
            v301 = (_QWORD *)(*v299 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *((char *)sub_F60F10(
                             *(_QWORD *)(*(_QWORD *)(*v301 + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                             v83,
                             v159,
                             v298,
                             v86,
                             v87)
                 + 76) < 0 )
            {
              v83 = (__int64)v331;
              sub_1BD8EB0(
                &v329,
                (__int64)v331,
                v301[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v300 | (unsigned __int8)v301[1]) & 7);
              if ( v330 )
              {
                v314.m128_u64[0] = v300;
                v302 = _mm_loadl_epi64((const __m128i *)&v314);
                v83 = (__int64)&v329;
                v41 = (__m128)_mm_unpacklo_epi64(v302, v302);
                v329 = v41;
                sub_1BFAC00(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, 0, v41, a8);
              }
            }
          }
        }
        v156 += 648;
      }
      while ( v156 != 1296 );
      if ( !BYTE4(ptr[0]) )
        free(v331[0]);
LABEL_225:
      if ( v338 )
LABEL_226:
        sub_1BFAE40((__int64)v315, v41, a8);
      goto LABEL_94;
    default:
      goto LABEL_94;
  }
  do
  {
    v185 = *v178;
    v186 = *v178 & 0xFFFFFFFFFFFFFFF0LL;
    if ( v325 == 15 )
    {
      v183 = v185 & 7;
      sub_1BD8EB0(
        &v329,
        v314.m128_i64[0],
        *(_QWORD *)&byte_8[*v178 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | *(_QWORD *)&byte_8[*v178 & 0xFFFFFFFFFFFFFFF0LL] & 7LL
      | *v178 & 7);
      v187 = sub_A73030(*(_QWORD *)(v335.m128_u64[0] + 248), v185, 1u);
      v329.m128_u64[1] = v185;
      v329.m128_u64[0] = v187;
    }
    else
    {
      v182 = sub_F68450(*(_QWORD *)v186, v83, v179, v180, v86);
      if ( !sub_19A1E30(*(_QWORD *)(v182 & 0xFFFFFFFFFFFFFFF0LL)) )
        goto LABEL_251;
      v183 = v185 & 7;
      v329.m128_u64[0] = sub_A73030(*(_QWORD *)(v335.m128_u64[0] + 248), v185, 1u);
      v329.m128_u64[1] = sub_A63D20(*(_QWORD **)(v335.m128_u64[0] + 248));
    }
    v83 = (__int64)&v329;
    sub_1BFA6B0(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, v313.m128_i8[0], v41, a8, 0);
    v184 = 0;
    if ( (v183 & 4) == 0 && (*(_BYTE *)(v186 + 8) & 4) == 0 && (v336.m128_i8[8] & 4) != 0 )
    {
      v83 = (__int64)&v329;
      v329.m128_u64[0] = sub_A73030(*(_QWORD *)(v335.m128_u64[0] + 248), v183 | 4u | v185 & 0xFFFFFFFFFFFFFFF8LL, 1u);
      sub_1BFA6B0(
        v335.m128_i64[0],
        (__int64)&v329,
        v335.m128_i64[1],
        v336.m128_i64[0],
        v340,
        v313.m128_i8[0],
        v41,
        a8,
        0);
      v184 = 1;
    }
    if ( (v183 & 2) == 0 && (*(_BYTE *)(v186 + 8) & 2) == 0 && (v336.m128_i8[8] & 2) != 0 )
    {
      LOBYTE(v317) = v184;
      v83 = (__int64)&v329;
      v329.m128_u64[0] = sub_A73030(*(_QWORD *)(v335.m128_u64[0] + 248), v183 | 2u | v185 & 0xFFFFFFFFFFFFFFF8LL, 1u);
      sub_1BFA6B0(
        v335.m128_i64[0],
        (__int64)&v329,
        v335.m128_i64[1],
        v336.m128_i64[0],
        v340,
        v313.m128_i8[0],
        v41,
        a8,
        0);
      v86 = v312;
      if ( (_BYTE)v317 )
      {
        v290 = *(_QWORD *)(v335.m128_u64[0] + 248);
        v291 = sub_A70F20(v290, v185, 6);
        v329.m128_u64[0] = sub_A73030(v290, v291, 1u);
        sub_1BFA6B0(
          v335.m128_i64[0],
          (__int64)&v329,
          v335.m128_i64[1],
          v336.m128_i64[0],
          v340,
          v313.m128_i8[0],
          v41,
          a8,
          0);
        v180 = v311;
        v83 = v312;
      }
    }
LABEL_251:
    ++v178;
  }
  while ( v181 != v178 );
  v62 = (void **)v314.m128_u64[0];
  if ( v325 != 15 )
    goto LABEL_312;
  v195 = *(__int64 **)(*(_QWORD *)v339 + 672LL);
  v314.m128_u64[0] = (unsigned __int64)&v195[*(unsigned int *)(*(_QWORD *)v339 + 680LL)];
  if ( v195 == (__int64 *)v314.m128_u64[0] )
    goto LABEL_312;
LABEL_301:
  v313.m128_u64[0] = (unsigned __int64)v62;
  do
  {
    v196 = *v195;
    v197 = *v195 & 0xFFFFFFFFFFFFFFF0LL;
    v198 = *v195 & 7;
    sub_1BD8EB0(
      &v329,
      v313.m128_i64[0],
      *(_QWORD *)&byte_8[v197] & 0xFFFFFFFFFFFFFFF8LL | v198 | *(_QWORD *)&byte_8[v197] & 7LL);
    v199 = v330;
    if ( v330 )
    {
      v200 = sub_A73030(*(_QWORD *)(v335.m128_u64[0] + 248), v196, 1u);
      v329.m128_u64[1] = v196;
      v329.m128_u64[0] = v200;
      sub_1BFA6B0(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, 1, v41, a8, 0);
      if ( (v198 & 4) != 0 || (*(_BYTE *)(v197 + 8) & 4) != 0 || (v336.m128_i8[8] & 4) == 0 )
      {
        v199 = 0;
      }
      else
      {
        v329.m128_u64[0] = sub_A73030(*(_QWORD *)(v335.m128_u64[0] + 248), v198 | 4 | v196 & 0xFFFFFFFFFFFFFFF8LL, 1u);
        sub_1BFA6B0(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, 1, v41, a8, 0);
      }
      if ( (v198 & 2) == 0 && (*(_BYTE *)(v197 + 8) & 2) == 0 && (v336.m128_i8[8] & 2) != 0 )
      {
        v329.m128_u64[0] = sub_A73030(*(_QWORD *)(v335.m128_u64[0] + 248), v198 | 2 | v196 & 0xFFFFFFFFFFFFFFF8LL, 1u);
        sub_1BFA6B0(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, 1, v41, a8, 0);
        if ( v199 )
        {
          v303 = *(_QWORD *)(v335.m128_u64[0] + 248);
          v304 = sub_A70F20(v303, v196, 6);
          v329.m128_u64[0] = sub_A73030(v303, v304, 1u);
          sub_1BFA6B0(v335.m128_i64[0], (__int64)&v329, v335.m128_i64[1], v336.m128_i64[0], v340, 1, v41, a8, 0);
        }
      }
    }
    ++v195;
  }
  while ( (__int64 *)v314.m128_u64[0] != v195 );
  v62 = (void **)v313.m128_u64[0];
LABEL_312:
  if ( !BYTE4(ptr[0]) )
    free(v331[0]);
LABEL_314:
  v327 = (char)v316;
  if ( v338 )
  {
    v201 = v349;
    if ( v349 )
    {
      v292 = 0;
      v293 = v348;
      v313.m128_u64[0] = (unsigned __int64)&v327;
      v314.m128_u64[0] = (unsigned __int64)&v329;
      v41 = (__m128)_mm_loadl_epi64((const __m128i *)&v314);
      v314.m128_u64[0] = (unsigned __int64)v328;
      v314 = _mm_loadh_ps((const double *)v314.m128_u64);
      do
      {
        v294 = v347;
        if ( v347 < v293 )
        {
          do
          {
            v295 = v294;
            v329 = 0u;
            ++v294;
            v329.m128_u64[1] = *((_QWORD *)v341 + v295);
            v296 = sub_1BC70F0(
                     *(_QWORD *)(v335.m128_u64[0] + 248),
                     *((_QWORD *)v341 + v292),
                     *(_QWORD *)v335.m128_u64[1]);
            v297 = _mm_load_si128((const __m128i *)&v314);
            v328[0] = v296;
            v41 = _mm_loadh_ps((const double *)v313.m128_u64);
            *(__m128i *)v331 = v297;
            *(__m128 *)ptr = v41;
            sub_1BFA900(v336.m128_i64[1], v337, 0, 0, v41, a8, (__int64)sub_1BFAB60, (__int64)v62);
            v293 = v348;
          }
          while ( v348 > v294 );
          v201 = v349;
        }
        ++v292;
      }
      while ( v292 < v201 );
    }
    v202 = *(void ***)(*(_QWORD *)v339 + 336LL);
    v203 = *(unsigned int *)(*(_QWORD *)v339 + 344LL);
    if ( v202 != &v202[v203] )
    {
      v313.m128_u64[0] = *(_QWORD *)(*(_QWORD *)v339 + 336LL);
      v314.m128_u64[0] = (unsigned __int64)&v202[v203];
      while ( 1 )
      {
        v204 = &v202[v203];
        v205 = v202;
        v206 = *(_QWORD *)v313.m128_u64[0];
        while ( v204 != v205 )
        {
          while ( 1 )
          {
            v207 = *v205;
            v331[0] = nullptr;
            v331[1] = v207;
            v331[0] = (void *)sub_A73030(*(_QWORD *)(v335.m128_u64[0] + 248), v206, 1u);
            sub_1BFA6B0(v335.m128_i64[0], (__int64)v62, v335.m128_i64[1], v336.m128_i64[0], v340, v327, v41, a8, 0);
            if ( (v336.m128_i8[8] & 4) != 0 )
              break;
            if ( v204 == ++v205 )
              goto LABEL_321;
          }
          ++v205;
          v282 = *(_QWORD *)(v335.m128_u64[0] + 248);
          v331[0] = (void *)(v206 & 0xFFFFFFFFFFFFFFF8LL | v206 & 7 | 4);
          v331[0] = (void *)sub_A73030(v282, (__int64)v331[0], 1u);
          sub_1BFA6B0(v335.m128_i64[0], (__int64)v62, v335.m128_i64[1], v336.m128_i64[0], v340, v327, v41, a8, 0);
        }
LABEL_321:
        v313.m128_u64[0] += 8LL;
        if ( v314.m128_u64[0] == v313.m128_u64[0] )
          break;
        v202 = *(void ***)(*(_QWORD *)v339 + 336LL);
        v203 = *(unsigned int *)(*(_QWORD *)v339 + 344LL);
      }
    }
  }
LABEL_94:
  if ( v341 != v315 + 10 )
    free(v341);
  v88 = v350;
  v89 = &v350[81 * (unsigned int)v351];
  if ( v350 != v89 )
  {
    do
    {
      v89 -= 81;
      v90 = (__int64 *)v89[68];
      if ( v90 != v89 + 70 )
        free(v90);
      operator delete(v89[65], 8LL * *((unsigned int *)v89 + 134), 8);
      v91 = (__int64 *)v89[55];
      if ( v91 != v89 + 57 )
        free(v91);
      operator delete(v89[52], 8LL * *((unsigned int *)v89 + 108), 8);
      v92 = (__int64 *)v89[42];
      if ( v92 != v89 + 44 )
        free(v92);
      operator delete(v89[39], 8LL * *((unsigned int *)v89 + 82), 8);
      v93 = (__int64 *)v89[29];
      if ( v93 != v89 + 31 )
        free(v93);
      operator delete(v89[26], 8LL * *((unsigned int *)v89 + 56), 8);
      v94 = (__int64 *)v89[16];
      if ( v94 != v89 + 18 )
        free(v94);
      operator delete(v89[13], 8LL * *((unsigned int *)v89 + 30), 8);
      v95 = (__int64 *)v89[3];
      if ( v95 != v89 + 5 )
        free(v95);
      operator delete(*v89, 8LL * *((unsigned int *)v89 + 4), 8);
    }
    while ( v88 != v89 );
    v89 = v350;
  }
  if ( v89 != (__int64 *)(v321 + 4) )
    free(v89);
}
