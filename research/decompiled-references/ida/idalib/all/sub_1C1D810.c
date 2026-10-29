__int64 __fastcall sub_1C1D810(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdx
  unsigned __int64 v10; // r14
  __int64 *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r12d
  __int64 v20; // rsi
  __int64 v21; // rax
  size_t v22; // rdx
  const char *v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbx
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // r13d
  __int64 *v36; // r12
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r12
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // r13
  unsigned __int8 *v46; // r12
  _BYTE *v47; // rdx
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rbx
  __int64 result; // rax
  int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rbx
  __int64 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rbx
  __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r12
  __int64 v69; // rax
  _QWORD *v70; // rax
  unsigned __int8 *v71; // rbx
  unsigned __int8 *v72; // rdx
  __int64 v73; // rax
  unsigned __int8 *v74; // rbx
  unsigned __int8 *v75; // rdx
  __int64 v76; // rax
  __int64 *v77; // r12
  unsigned int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 v81; // rdi
  int v82; // edx
  _QWORD *v83; // r9
  __int64 v84; // r8
  __int64 v85; // rax
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // r13
  __int64 v89; // rdi
  int v90; // edx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  unsigned __int64 v95; // r8
  __int64 v96; // rax
  __int64 v97; // rax
  unsigned __int64 v98; // r13
  __int64 v99; // r8
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rdi
  _QWORD *v103; // rcx
  __int64 v104; // r13
  unsigned __int64 v105; // rdx
  __int64 v106; // rax
  unsigned __int64 v107; // rdx
  unsigned __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rbx
  __int64 v111; // rax
  unsigned __int8 *v112; // r12
  unsigned __int8 *v113; // rdx
  __int64 v114; // rax
  unsigned __int8 *v115; // r12
  unsigned __int8 *v116; // rdx
  __int64 v117; // rax
  unsigned __int8 *v118; // r12
  unsigned __int8 *v119; // rdx
  __int64 v120; // rax
  unsigned __int8 *v121; // rbx
  unsigned __int8 *v122; // rdx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // r12
  __int64 v129; // rax
  _QWORD *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rbx
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // rax
  _QWORD *v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // r12
  __int64 v143; // rax
  _QWORD *v144; // rax
  __int64 v145; // r13
  unsigned __int8 *v146; // r12
  _BYTE *v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rbx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rax
  _QWORD *v155; // rax
  _BOOL8 v156; // r14
  __int64 v157; // r12
  unsigned __int8 *v158; // rbx
  _BYTE *v159; // rdx
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // r12
  __int64 v166; // rax
  _QWORD *v167; // rax
  __int64 v168; // r13
  unsigned __int8 *v169; // r12
  _BYTE *v170; // rdx
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  __int64 v175; // r9
  __int64 v176; // r12
  __int64 v177; // rax
  _QWORD *v178; // rax
  __int64 v179; // rax
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // r13
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // rbx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rax
  _QWORD *v190; // rax
  __int64 v191; // r12
  unsigned __int8 *v192; // rbx
  _BYTE *v193; // rdx
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // rbx
  __int64 v198; // r8
  __int64 v199; // r9
  __int64 v200; // rax
  _QWORD *v201; // rax
  __int64 v202; // r12
  unsigned __int8 *v203; // rbx
  _BYTE *v204; // rdx
  __int64 v205; // rax
  __int64 v206; // rdx
  int v207; // eax
  __int64 v208; // rdx
  int v209; // eax
  __int64 v210; // rdx
  int v211; // eax
  __int64 v212; // rdx
  int v213; // eax
  __int64 v214; // rdx
  int v215; // eax
  __int64 v216; // rdx
  int v217; // eax
  __int64 v218; // rdx
  int v219; // eax
  __int64 v220; // rdx
  int v221; // eax
  __int64 v222; // rax
  __int64 v223; // r13
  __int64 v224; // r14
  __int64 v225; // r13
  void *v226; // rdi
  __int64 v227; // rax
  __int64 v228; // r13
  __int64 v229; // r14
  __int64 v230; // r13
  void *v231; // rdi
  __int64 v232; // rax
  __int64 v233; // r13
  __int64 v234; // r14
  __int64 v235; // r13
  void *v236; // rdi
  __int64 v237; // rax
  __int64 v238; // r12
  __int64 v239; // r13
  __int64 v240; // r12
  void *v241; // rdi
  __int64 v242; // rax
  __int64 v243; // r14
  __int64 v244; // rdx
  __int64 v245; // r14
  void *v246; // rdi
  __int64 v247; // rax
  __int64 v248; // r14
  __int64 v249; // r15
  __int64 v250; // r14
  void *v251; // rdi
  __int64 v252; // rax
  __int64 v253; // r14
  __int64 v254; // rdx
  __int64 v255; // r14
  void *v256; // rdi
  __int64 v257; // rax
  __int64 v258; // r13
  __int64 v259; // rdx
  __int64 v260; // r13
  void *v261; // rdi
  __int64 v262; // rdx
  int v263; // eax
  __int64 v264; // rdx
  int v265; // eax
  __int64 v266; // rdx
  int v267; // eax
  __int64 v268; // rdx
  int v269; // eax
  __int64 v270; // rax
  __int64 v271; // r12
  __int64 v272; // r13
  __int64 v273; // r12
  void *v274; // rdi
  __int64 v275; // rax
  __int64 v276; // r12
  __int64 v277; // r13
  __int64 v278; // r12
  void *v279; // rdi
  __int64 v280; // rax
  __int64 v281; // r13
  __int64 v282; // r14
  __int64 v283; // r13
  void *v284; // rdi
  __int64 v285; // rax
  __int64 v286; // r13
  __int64 v287; // r14
  __int64 v288; // r13
  void *v289; // rdi
  bool v290; // [rsp+0h] [rbp-E8h]
  __int64 v291; // [rsp+0h] [rbp-E8h]
  __int64 v292; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v293; // [rsp+8h] [rbp-E0h]
  __int64 v294; // [rsp+8h] [rbp-E0h]
  _QWORD *v295; // [rsp+8h] [rbp-E0h]
  __int64 v296; // [rsp+8h] [rbp-E0h]
  __int64 v297; // [rsp+8h] [rbp-E0h]
  __int64 v298; // [rsp+18h] [rbp-D0h] BYREF
  unsigned __int64 v299[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v300; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v301; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v302; // [rsp+48h] [rbp-A0h]
  char v303; // [rsp+98h] [rbp-50h]
  unsigned int v304; // [rsp+A0h] [rbp-48h]
  char v305; // [rsp+A4h] [rbp-44h]

  v9 = a1[10];
  v10 = *(_QWORD *)(v9 + 24);
  v11 = (__int64 *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *v11;
  if ( *(_BYTE *)(*v11 + 16) != 34 )
  {
    a6 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(a6 + 16) != 34 || (v12 = sub_F63050(*v11, a2, v9, a6), v9 = a1[10], !v12) )
    {
      v52 = sub_1A8B160(*(__int64 **)(a1[1] + 736LL), *(_QWORD *)(v9 + 32), v9, a6, a7, a8);
      if ( v52 != 2 )
      {
        v20 = a1[1];
        v290 = v52 == 0;
LABEL_29:
        v53 = sub_C00A40(v10, v20, v16, v17, v18);
        sub_168B9F0((__int64)v299, (__int64 *)(v20 + 8), v53, 0x111Fu, 0);
        v54 = *(_QWORD *)(v10 + 8);
        if ( v303 )
        {
          sub_AE9DF0(&v301, *(_QWORD *)(v10 + 8), 8u);
        }
        else
        {
          if ( !v305 )
          {
LABEL_31:
            sub_15F7200(v299);
            return 0;
          }
          v128 = sub_168B9E0(v299);
          v129 = v300;
          if ( v300 )
            v129 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
          v298 = v129;
          v130 = sub_1587BC0(v128, &v298, v124, v125, v126, v127);
          sub_AE9DF0((unsigned __int8 **)(*v130 + 32LL * v304 + 8), v54, 8u);
        }
        if ( v303 )
        {
          sub_AE9DF0(&v301, v290, 2u);
        }
        else if ( v305 )
        {
          v133 = sub_168B9E0(v299);
          v136 = v300;
          if ( v300 )
            v136 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
          v298 = v136;
          v137 = sub_1587BC0(v133, &v298, v131, v132, v134, v135);
          sub_AE9DF0((unsigned __int8 **)(*v137 + 32LL * v304 + 8), v290, 2u);
        }
        goto LABEL_31;
      }
      v14 = 0;
      goto LABEL_33;
    }
  }
  v13 = *(_QWORD *)(v12 + 32);
  v14 = v13;
  v15 = sub_1A8B160(*(__int64 **)(a1[1] + 736LL), *(_QWORD *)(v9 + 32), v9, a6, a7, a8);
  v19 = v15;
  if ( v15 != 2 )
  {
    v20 = a1[1];
    v290 = v15 == 0;
    if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_29;
    v21 = *(_QWORD *)(v20 + 248);
    v22 = 23;
    v23 = "objectForKeyedSubscript";
    if ( !v19 )
    {
      v23 = "objectAtIndexedSubscript";
      v22 = 24;
    }
    v299[0] = sub_6F3470(*(_QWORD *)(v21 + 17504), v23, v22);
    v24 = sub_FE3230(*(_QWORD **)(*(_QWORD *)(a1[1] + 248LL) + 17512LL), 1u, v299);
    a1[14] = v24;
    v25 = v24;
    v28 = sub_19D01C0(*(_QWORD *)(a1[1] + 736LL), v24, v13, 1, v26, v27);
    a1[13] = v28;
    if ( v28 )
      goto LABEL_7;
    v56 = a1[1];
    if ( (*(_BYTE *)(*(_QWORD *)(v56 + 232) + 106LL) & 1) == 0 )
      goto LABEL_36;
    v83 = *(_QWORD **)(v56 + 248);
    v84 = *(_QWORD *)(v83[283] + 80LL);
    v85 = *(_QWORD *)(v84 + 72);
    v86 = v85 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v85 & 1) == 0 )
    {
      v103 = (_QWORD *)(v85 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v85 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v88 = v85 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v85 & 2) == 0 )
          goto LABEL_67;
        v104 = v103[2295];
        v105 = v84 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v104 )
        {
          v106 = v103[294];
          v103[304] += 24LL;
          v107 = (v106 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v103[295] >= v107 + 24 && v106 )
          {
            v103[294] = v107 + 24;
            v108 = (v106 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v297 = v84;
            v108 = sub_986170((__int64)(v103 + 294), 24, 24, 3, v84, (__int64)v83);
            v84 = v297;
            v107 = v108 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v108 = v104;
          v105 = v107 | 4;
          *(_DWORD *)(v108 + 8) = 0;
          *(_QWORD *)(v108 + 16) = v84;
        }
        v86 = v105 & 0xFFFFFFFFFFFFFFFELL;
        v85 = v86 | 1;
        *(_QWORD *)(v84 + 72) = v86 | 1;
      }
    }
    v87 = v85 & 0xFFFFFFFFFFFFFFF8LL;
    v88 = v87;
    if ( v86 )
    {
      if ( (v86 & 4) != 0 )
      {
        v88 = 0;
        if ( v87 )
        {
          v89 = *(_QWORD *)v87;
          v90 = *(_DWORD *)(*(_QWORD *)v87 + 12LL);
          if ( *(_DWORD *)(v87 + 8) != v90 )
          {
            *(_DWORD *)(v87 + 8) = v90;
            v293 = v87;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v89 + 152LL))(v89, v84);
            v87 = v293;
          }
          v88 = *(_QWORD *)(v87 + 16);
        }
      }
    }
    v83 = *(_QWORD **)(a1[1] + 248LL);
LABEL_67:
    v294 = (__int64)v83;
    if ( v88 )
      v88 += 40LL;
    v91 = sub_A8A250(v83);
    v94 = *(_QWORD *)(v91 + 48);
    if ( v94 )
      v95 = v94 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v95 = sub_A7AA70(v294, v91, v92, v93, 0, v294);
    a1[13] = sub_BA7B60(*(_QWORD **)(a1[1] + 248LL), 0, 0, a1[14], v95, 0, v88, 1, 0, 0, 0, 1, 0, 1, 0);
    v96 = a1[1];
    if ( v19 )
    {
      v295 = *(_QWORD **)(v96 + 248);
      v179 = sub_A8A250(v295);
      v183 = *(_QWORD *)(v179 + 48);
      if ( v183 )
        v98 = v183 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v98 = sub_A7AA70((__int64)v295, v179, (__int64)v295, v180, v181, v182);
      v99 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1[1] + 248LL) + 17504LL), "key", 3u);
    }
    else
    {
      v97 = *(_QWORD *)(v96 + 248);
      v98 = *(_QWORD *)(v97 + 18776);
      v99 = sub_6F3470(*(_QWORD *)(v97 + 17504), "index", 5u);
    }
    v100 = a1[13];
    if ( v100 )
      v100 += 48;
    v101 = sub_B74530(*(_QWORD *)(a1[1] + 248LL), v100, 0, 0, v99, v98, 0, 0, 0);
    v102 = a1[13];
    v299[0] = v101;
    v25 = *(_QWORD *)(a1[1] + 248LL);
    sub_BA9CC0(v102, v25, v299, 1, 0, 0);
    v28 = a1[13];
    if ( v28 )
      goto LABEL_7;
LABEL_36:
    v57 = *v11;
    if ( *(_BYTE *)(*v11 + 16) == 34
      || (v61 = *(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v61 + 16) == 34)
      && (v57 = sub_F63050(*v11, v25, v61, v29)) != 0 )
    {
      v58 = *(_QWORD *)(*(_QWORD *)(v57 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v59 = (unsigned int)*(unsigned __int8 *)(v58 + 16) - 35;
      if ( (unsigned int)v59 > 1 )
        v58 = sub_F63050(v58, v25, v59, v29);
      v61 = *(unsigned __int8 *)(v58 + 19);
      v60 = a1[1];
      LOBYTE(v61) = (unsigned __int8)v61 >> 2;
      if ( !(_BYTE)v61 )
      {
        v109 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v109 + 16) == 13 && ((*(_WORD *)(v109 + 18) >> 3) & 0x1FF) == 0x1E9 )
        {
          v110 = *(_QWORD *)(v60 + 736);
          v111 = sub_EEC8C0(a1[10], v25, *(double *)a3.m128_u64);
          v25 = a1[14];
          v28 = sub_1897840(v110, v25, v111, 1, 1);
          a1[13] = v28;
          if ( !v28 )
            return 1;
LABEL_7:
          v32 = *(_QWORD *)(**(_QWORD **)(v28 + 96) + 48LL);
          v33 = *(_QWORD *)(*(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v19 )
          {
            v34 = *(_QWORD *)v33;
            if ( *(_BYTE *)(v34 + 16) != 34 )
            {
              v35 = 4386;
              v36 = (__int64 *)(a1[1] + 8LL);
LABEL_10:
              v37 = sub_C00A40(*(_QWORD *)(a1[10] + 32LL), v25, v34, v29, v30);
              sub_168B9F0((__int64)v299, v36, v37, v35, 0);
              if ( v303 )
              {
                v115 = v301;
                if ( !v301 )
                {
                  v206 = v302;
                  v207 = *(_DWORD *)(v302 + 14976);
                  if ( v207 )
                  {
                    v227 = (unsigned int)(v207 - 1);
                    *(_DWORD *)(v302 + 14976) = v227;
                    v115 = *(unsigned __int8 **)(v206 + 8 * v227 + 14848);
                    v228 = *((unsigned int *)v115 + 134);
                    v229 = *((_QWORD *)v115 + 66);
                    *v115 = 0;
                    *((_DWORD *)v115 + 106) = 0;
                    v230 = v229 + (v228 << 6);
                    while ( v229 != v230 )
                    {
                      while ( 1 )
                      {
                        v230 -= 64;
                        v231 = *(void **)(v230 + 24);
                        if ( v231 == (void *)(v230 + 40) )
                          break;
                        operator delete(v231);
                        if ( v229 == v230 )
                          goto LABEL_179;
                      }
                    }
LABEL_179:
                    *((_DWORD *)v115 + 134) = 0;
                  }
                  else
                  {
                    v115 = (unsigned __int8 *)operator new(0x3A0u);
                    *v115 = 0;
                    *((_QWORD *)v115 + 12) = v115 + 112;
                    *((_QWORD *)v115 + 16) = v115 + 144;
                    *((_QWORD *)v115 + 20) = v115 + 176;
                    *((_QWORD *)v115 + 24) = v115 + 208;
                    *((_QWORD *)v115 + 28) = v115 + 240;
                    *((_QWORD *)v115 + 32) = v115 + 272;
                    *((_QWORD *)v115 + 36) = v115 + 304;
                    *((_QWORD *)v115 + 40) = v115 + 336;
                    *((_QWORD *)v115 + 44) = v115 + 368;
                    *((_QWORD *)v115 + 48) = v115 + 400;
                    *((_QWORD *)v115 + 52) = v115 + 432;
                    *((_QWORD *)v115 + 13) = 0;
                    v115[112] = 0;
                    *((_QWORD *)v115 + 17) = 0;
                    v115[144] = 0;
                    *((_QWORD *)v115 + 21) = 0;
                    v115[176] = 0;
                    *((_QWORD *)v115 + 25) = 0;
                    v115[208] = 0;
                    *((_QWORD *)v115 + 29) = 0;
                    v115[240] = 0;
                    *((_QWORD *)v115 + 33) = 0;
                    v115[272] = 0;
                    *((_QWORD *)v115 + 37) = 0;
                    v115[304] = 0;
                    *((_QWORD *)v115 + 41) = 0;
                    v115[336] = 0;
                    *((_QWORD *)v115 + 45) = 0;
                    v115[368] = 0;
                    *((_QWORD *)v115 + 49) = 0;
                    v115[400] = 0;
                    *((_QWORD *)v115 + 53) = 0x800000000LL;
                    *((_QWORD *)v115 + 66) = v115 + 544;
                    *((_QWORD *)v115 + 67) = 0x600000000LL;
                  }
                  v301 = v115;
                }
                v115[*v115 + 1] = 8;
                v116 = v301;
                v117 = *v301;
                *v301 = v117 + 1;
                *(_QWORD *)&v116[8 * v117 + 16] = v32;
              }
              else if ( v305 )
              {
                v142 = sub_168B9E0(v299);
                v143 = v300;
                if ( v300 )
                  v143 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
                v298 = v143;
                v144 = sub_1587BC0(v142, &v298, v138, v139, v140, v141);
                v145 = *v144 + 32LL * v304;
                v146 = *(unsigned __int8 **)(v145 + 8);
                if ( !v146 )
                {
                  v214 = *(_QWORD *)(v145 + 16);
                  v215 = *(_DWORD *)(v214 + 14976);
                  if ( v215 )
                  {
                    v242 = (unsigned int)(v215 - 1);
                    *(_DWORD *)(v214 + 14976) = v242;
                    v146 = *(unsigned __int8 **)(v214 + 8 * v242 + 14848);
                    v243 = *((unsigned int *)v146 + 134);
                    v244 = *((_QWORD *)v146 + 66);
                    *v146 = 0;
                    *((_DWORD *)v146 + 106) = 0;
                    v245 = v244 + (v243 << 6);
                    while ( v244 != v245 )
                    {
                      while ( 1 )
                      {
                        v245 -= 64;
                        v246 = *(void **)(v245 + 24);
                        if ( v246 == (void *)(v245 + 40) )
                          break;
                        v291 = v244;
                        operator delete(v246);
                        v244 = v291;
                        if ( v291 == v245 )
                          goto LABEL_194;
                      }
                    }
LABEL_194:
                    *((_DWORD *)v146 + 134) = 0;
                  }
                  else
                  {
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
                    *((_QWORD *)v146 + 66) = v146 + 544;
                    *((_QWORD *)v146 + 67) = 0x600000000LL;
                  }
                  *(_QWORD *)(v145 + 8) = v146;
                }
                v146[*v146 + 1] = 8;
                v147 = *(_BYTE **)(v145 + 8);
                v148 = (unsigned __int8)*v147;
                *v147 = v148 + 1;
                *(_QWORD *)&v147[8 * v148 + 16] = v32;
              }
              sub_15F7200(v299);
              sub_168B9F0(
                (__int64)v299,
                (__int64 *)(a1[1] + 8LL),
                *(_DWORD *)(**(_QWORD **)(a1[13] + 96LL) + 24LL),
                0x1876u,
                0);
              if ( v303 )
              {
                v112 = v301;
                if ( !v301 )
                {
                  v208 = v302;
                  v209 = *(_DWORD *)(v302 + 14976);
                  if ( v209 )
                  {
                    v222 = (unsigned int)(v209 - 1);
                    *(_DWORD *)(v302 + 14976) = v222;
                    v112 = *(unsigned __int8 **)(v208 + 8 * v222 + 14848);
                    v223 = *((unsigned int *)v112 + 134);
                    v224 = *((_QWORD *)v112 + 66);
                    *v112 = 0;
                    *((_DWORD *)v112 + 106) = 0;
                    v225 = v224 + (v223 << 6);
                    while ( v224 != v225 )
                    {
                      while ( 1 )
                      {
                        v225 -= 64;
                        v226 = *(void **)(v225 + 24);
                        if ( v226 == (void *)(v225 + 40) )
                          break;
                        operator delete(v226);
                        if ( v224 == v225 )
                          goto LABEL_174;
                      }
                    }
LABEL_174:
                    *((_DWORD *)v112 + 134) = 0;
                  }
                  else
                  {
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
                    *((_QWORD *)v112 + 66) = v112 + 544;
                    *((_QWORD *)v112 + 67) = 0x600000000LL;
                  }
                  v301 = v112;
                }
                v112[*v112 + 1] = 8;
                v113 = v301;
                v114 = *v301;
                *v301 = v114 + 1;
                *(_QWORD *)&v113[8 * v114 + 16] = v32;
              }
              else if ( v305 )
              {
                v42 = sub_168B9E0(v299);
                v43 = v300;
                if ( v300 )
                  v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
                v298 = v43;
                v44 = sub_1587BC0(v42, &v298, v38, v39, v40, v41);
                v45 = *v44 + 32LL * v304;
                v46 = *(unsigned __int8 **)(v45 + 8);
                if ( !v46 )
                {
                  v216 = *(_QWORD *)(v45 + 16);
                  v217 = *(_DWORD *)(v216 + 14976);
                  if ( v217 )
                  {
                    v247 = (unsigned int)(v217 - 1);
                    *(_DWORD *)(v216 + 14976) = v247;
                    v46 = *(unsigned __int8 **)(v216 + 8 * v247 + 14848);
                    v248 = *((unsigned int *)v46 + 134);
                    v249 = *((_QWORD *)v46 + 66);
                    *v46 = 0;
                    *((_DWORD *)v46 + 106) = 0;
                    v250 = v249 + (v248 << 6);
                    while ( v249 != v250 )
                    {
                      while ( 1 )
                      {
                        v250 -= 64;
                        v251 = *(void **)(v250 + 24);
                        if ( v251 == (void *)(v250 + 40) )
                          break;
                        operator delete(v251);
                        if ( v249 == v250 )
                          goto LABEL_199;
                      }
                    }
LABEL_199:
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
                  *(_QWORD *)(v45 + 8) = v46;
                }
                v46[*v46 + 1] = 8;
                v47 = *(_BYTE **)(v45 + 8);
                v48 = (unsigned __int8)*v47;
                *v47 = v48 + 1;
                *(_QWORD *)&v47[8 * v48 + 16] = v32;
              }
              goto LABEL_31;
            }
LABEL_22:
            v50 = *(_QWORD *)(v28 + 80);
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) == 34 )
              return 1;
            v77 = (__int64 *)(a1[1] + 8LL);
            v78 = sub_C00A40(*(_QWORD *)(a1[10] + 32LL), v25, v34, v29, v30);
            sub_168B9F0((__int64)v299, v77, v78, 0x110Au, 0);
            if ( v303 )
            {
              v118 = v301;
              if ( !v301 )
              {
                v210 = v302;
                v211 = *(_DWORD *)(v302 + 14976);
                if ( v211 )
                {
                  v232 = (unsigned int)(v211 - 1);
                  *(_DWORD *)(v302 + 14976) = v232;
                  v118 = *(unsigned __int8 **)(v210 + 8 * v232 + 14848);
                  v233 = *((unsigned int *)v118 + 134);
                  v234 = *((_QWORD *)v118 + 66);
                  *v118 = 0;
                  *((_DWORD *)v118 + 106) = 0;
                  v235 = v234 + (v233 << 6);
                  while ( v234 != v235 )
                  {
                    while ( 1 )
                    {
                      v235 -= 64;
                      v236 = *(void **)(v235 + 24);
                      if ( v236 == (void *)(v235 + 40) )
                        break;
                      operator delete(v236);
                      if ( v234 == v235 )
                        goto LABEL_184;
                    }
                  }
LABEL_184:
                  *((_DWORD *)v118 + 134) = 0;
                }
                else
                {
                  v118 = (unsigned __int8 *)operator new(0x3A0u);
                  *v118 = 0;
                  *((_QWORD *)v118 + 12) = v118 + 112;
                  *((_QWORD *)v118 + 16) = v118 + 144;
                  *((_QWORD *)v118 + 20) = v118 + 176;
                  *((_QWORD *)v118 + 24) = v118 + 208;
                  *((_QWORD *)v118 + 28) = v118 + 240;
                  *((_QWORD *)v118 + 32) = v118 + 272;
                  *((_QWORD *)v118 + 36) = v118 + 304;
                  *((_QWORD *)v118 + 40) = v118 + 336;
                  *((_QWORD *)v118 + 44) = v118 + 368;
                  *((_QWORD *)v118 + 48) = v118 + 400;
                  *((_QWORD *)v118 + 52) = v118 + 432;
                  *((_QWORD *)v118 + 13) = 0;
                  v118[112] = 0;
                  *((_QWORD *)v118 + 17) = 0;
                  v118[144] = 0;
                  *((_QWORD *)v118 + 21) = 0;
                  v118[176] = 0;
                  *((_QWORD *)v118 + 25) = 0;
                  v118[208] = 0;
                  *((_QWORD *)v118 + 29) = 0;
                  v118[240] = 0;
                  *((_QWORD *)v118 + 33) = 0;
                  v118[272] = 0;
                  *((_QWORD *)v118 + 37) = 0;
                  v118[304] = 0;
                  *((_QWORD *)v118 + 41) = 0;
                  v118[336] = 0;
                  *((_QWORD *)v118 + 45) = 0;
                  v118[368] = 0;
                  *((_QWORD *)v118 + 49) = 0;
                  v118[400] = 0;
                  *((_QWORD *)v118 + 53) = 0x800000000LL;
                  *((_QWORD *)v118 + 66) = v118 + 544;
                  *((_QWORD *)v118 + 67) = 0x600000000LL;
                }
                v301 = v118;
              }
              v118[*v118 + 1] = 8;
              v119 = v301;
              v120 = *v301;
              *v301 = v120 + 1;
              *(_QWORD *)&v119[8 * v120 + 16] = v50;
            }
            else
            {
              if ( !v305 )
              {
LABEL_53:
                sub_15F7200(v299);
                sub_168B9F0((__int64)v299, (__int64 *)(a1[1] + 8LL), *(_DWORD *)(a1[13] + 24LL), 0x17CAu, 0);
                v79 = a1[13];
                v80 = *(_QWORD *)(v79 + 40);
                if ( v303 )
                {
                  sub_AE9DF0(&v301, *(_QWORD *)(v79 + 40), 9u);
                }
                else if ( v305 )
                {
                  v176 = sub_168B9E0(v299);
                  v177 = v300;
                  if ( v300 )
                    v177 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
                  v298 = v177;
                  v178 = sub_1587BC0(v176, &v298, v172, v173, v174, v175);
                  sub_AE9DF0((unsigned __int8 **)(*v178 + 32LL * v304 + 8), v80, 9u);
                }
                sub_15F7200(v299);
                return 1;
              }
              v165 = sub_168B9E0(v299);
              v166 = v300;
              if ( v300 )
                v166 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
              v298 = v166;
              v167 = sub_1587BC0(v165, &v298, v161, v162, v163, v164);
              v168 = *v167 + 32LL * v304;
              v169 = *(unsigned __int8 **)(v168 + 8);
              if ( !v169 )
              {
                v218 = *(_QWORD *)(v168 + 16);
                v219 = *(_DWORD *)(v218 + 14976);
                if ( v219 )
                {
                  v252 = (unsigned int)(v219 - 1);
                  *(_DWORD *)(v218 + 14976) = v252;
                  v169 = *(unsigned __int8 **)(v218 + 8 * v252 + 14848);
                  v253 = *((unsigned int *)v169 + 134);
                  v254 = *((_QWORD *)v169 + 66);
                  *v169 = 0;
                  *((_DWORD *)v169 + 106) = 0;
                  v255 = v254 + (v253 << 6);
                  while ( v254 != v255 )
                  {
                    while ( 1 )
                    {
                      v255 -= 64;
                      v256 = *(void **)(v255 + 24);
                      if ( v256 == (void *)(v255 + 40) )
                        break;
                      v296 = v254;
                      operator delete(v256);
                      v254 = v296;
                      if ( v296 == v255 )
                        goto LABEL_204;
                    }
                  }
LABEL_204:
                  *((_DWORD *)v169 + 134) = 0;
                }
                else
                {
                  v169 = (unsigned __int8 *)operator new(0x3A0u);
                  *v169 = 0;
                  *((_QWORD *)v169 + 12) = v169 + 112;
                  *((_QWORD *)v169 + 16) = v169 + 144;
                  *((_QWORD *)v169 + 20) = v169 + 176;
                  *((_QWORD *)v169 + 24) = v169 + 208;
                  *((_QWORD *)v169 + 28) = v169 + 240;
                  *((_QWORD *)v169 + 32) = v169 + 272;
                  *((_QWORD *)v169 + 36) = v169 + 304;
                  *((_QWORD *)v169 + 40) = v169 + 336;
                  *((_QWORD *)v169 + 44) = v169 + 368;
                  *((_QWORD *)v169 + 48) = v169 + 400;
                  *((_QWORD *)v169 + 52) = v169 + 432;
                  *((_QWORD *)v169 + 13) = 0;
                  v169[112] = 0;
                  *((_QWORD *)v169 + 17) = 0;
                  v169[144] = 0;
                  *((_QWORD *)v169 + 21) = 0;
                  v169[176] = 0;
                  *((_QWORD *)v169 + 25) = 0;
                  v169[208] = 0;
                  *((_QWORD *)v169 + 29) = 0;
                  v169[240] = 0;
                  *((_QWORD *)v169 + 33) = 0;
                  v169[272] = 0;
                  *((_QWORD *)v169 + 37) = 0;
                  v169[304] = 0;
                  *((_QWORD *)v169 + 41) = 0;
                  v169[336] = 0;
                  *((_QWORD *)v169 + 45) = 0;
                  v169[368] = 0;
                  *((_QWORD *)v169 + 49) = 0;
                  v169[400] = 0;
                  *((_QWORD *)v169 + 53) = 0x800000000LL;
                  *((_QWORD *)v169 + 66) = v169 + 544;
                  *((_QWORD *)v169 + 67) = 0x600000000LL;
                }
                *(_QWORD *)(v168 + 8) = v169;
              }
              v169[*v169 + 1] = 8;
              v170 = *(_BYTE **)(v168 + 8);
              v171 = (unsigned __int8)*v170;
              *v170 = v171 + 1;
              *(_QWORD *)&v170[8 * v171 + 16] = v50;
            }
            if ( v303 )
            {
              v121 = v301;
              if ( !v301 )
              {
                v212 = v302;
                v213 = *(_DWORD *)(v302 + 14976);
                if ( v213 )
                {
                  v237 = (unsigned int)(v213 - 1);
                  *(_DWORD *)(v302 + 14976) = v237;
                  v121 = *(unsigned __int8 **)(v212 + 8 * v237 + 14848);
                  v238 = *((unsigned int *)v121 + 134);
                  *v121 = 0;
                  v239 = *((_QWORD *)v121 + 66);
                  *((_DWORD *)v121 + 106) = 0;
                  v240 = v239 + (v238 << 6);
                  while ( v239 != v240 )
                  {
                    while ( 1 )
                    {
                      v240 -= 64;
                      v241 = *(void **)(v240 + 24);
                      if ( v241 == (void *)(v240 + 40) )
                        break;
                      operator delete(v241);
                      if ( v239 == v240 )
                        goto LABEL_189;
                    }
                  }
LABEL_189:
                  *((_DWORD *)v121 + 134) = 0;
                }
                else
                {
                  v121 = (unsigned __int8 *)operator new(0x3A0u);
                  *v121 = 0;
                  *((_QWORD *)v121 + 12) = v121 + 112;
                  *((_QWORD *)v121 + 16) = v121 + 144;
                  *((_QWORD *)v121 + 20) = v121 + 176;
                  *((_QWORD *)v121 + 24) = v121 + 208;
                  *((_QWORD *)v121 + 28) = v121 + 240;
                  *((_QWORD *)v121 + 32) = v121 + 272;
                  *((_QWORD *)v121 + 36) = v121 + 304;
                  *((_QWORD *)v121 + 40) = v121 + 336;
                  *((_QWORD *)v121 + 44) = v121 + 368;
                  *((_QWORD *)v121 + 48) = v121 + 400;
                  *((_QWORD *)v121 + 52) = v121 + 432;
                  *((_QWORD *)v121 + 13) = 0;
                  v121[112] = 0;
                  *((_QWORD *)v121 + 17) = 0;
                  v121[144] = 0;
                  *((_QWORD *)v121 + 21) = 0;
                  v121[176] = 0;
                  *((_QWORD *)v121 + 25) = 0;
                  v121[208] = 0;
                  *((_QWORD *)v121 + 29) = 0;
                  v121[240] = 0;
                  *((_QWORD *)v121 + 33) = 0;
                  v121[272] = 0;
                  *((_QWORD *)v121 + 37) = 0;
                  v121[304] = 0;
                  *((_QWORD *)v121 + 41) = 0;
                  v121[336] = 0;
                  *((_QWORD *)v121 + 45) = 0;
                  v121[368] = 0;
                  *((_QWORD *)v121 + 49) = 0;
                  v121[400] = 0;
                  *((_QWORD *)v121 + 53) = 0x800000000LL;
                  *((_QWORD *)v121 + 66) = v121 + 544;
                  *((_QWORD *)v121 + 67) = 0x600000000LL;
                }
                v301 = v121;
              }
              v121[*v121 + 1] = 2;
              v122 = v301;
              v123 = *v301;
              *v301 = v123 + 1;
              *(_QWORD *)&v122[8 * v123 + 16] = v290;
            }
            else if ( v305 )
            {
              v151 = sub_168B9E0(v299);
              v154 = v300;
              if ( v300 )
                v154 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
              v298 = v154;
              v155 = sub_1587BC0(v151, &v298, v149, v150, v152, v153);
              v156 = v290;
              v157 = *v155 + 32LL * v304;
              v158 = *(unsigned __int8 **)(v157 + 8);
              if ( !v158 )
              {
                v220 = *(_QWORD *)(v157 + 16);
                v221 = *(_DWORD *)(v220 + 14976);
                if ( v221 )
                {
                  v257 = (unsigned int)(v221 - 1);
                  *(_DWORD *)(v220 + 14976) = v257;
                  v158 = *(unsigned __int8 **)(v220 + 8 * v257 + 14848);
                  v258 = *((unsigned int *)v158 + 134);
                  *v158 = 0;
                  v259 = *((_QWORD *)v158 + 66);
                  *((_DWORD *)v158 + 106) = 0;
                  v260 = v259 + (v258 << 6);
                  while ( v259 != v260 )
                  {
                    while ( 1 )
                    {
                      v260 -= 64;
                      v261 = *(void **)(v260 + 24);
                      if ( v261 == (void *)(v260 + 40) )
                        break;
                      v292 = v259;
                      operator delete(v261);
                      v259 = v292;
                      if ( v292 == v260 )
                        goto LABEL_210;
                    }
                  }
LABEL_210:
                  *((_DWORD *)v158 + 134) = 0;
                }
                else
                {
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
                  *((_QWORD *)v158 + 66) = v158 + 544;
                  *((_QWORD *)v158 + 67) = 0x600000000LL;
                }
                *(_QWORD *)(v157 + 8) = v158;
              }
              v158[*v158 + 1] = 2;
              v159 = *(_BYTE **)(v157 + 8);
              v160 = (unsigned __int8)*v159;
              *v159 = v160 + 1;
              *(_QWORD *)&v159[8 * v160 + 16] = v156;
            }
            goto LABEL_53;
          }
          v81 = *(_QWORD *)v33;
          v34 = *(unsigned __int8 *)(*(_QWORD *)v33 + 16LL);
          switch ( (_BYTE)v34 )
          {
            case 0xD:
              v82 = *(unsigned __int16 *)(v81 + 18);
              LOWORD(v82) = (unsigned __int16)v82 >> 3;
              v34 = (unsigned int)(v82 + 76);
              LOWORD(v34) = v34 & 0x1FF;
              if ( (unsigned __int16)v34 <= 0x13u )
                goto LABEL_22;
              break;
            case 0x2F:
              v49 = sub_F60F10(v81, v25, v34, v29, v30, v31);
              if ( (*((_BYTE *)v49 + 74) & 1) != 0 || (v49[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v28 = a1[13];
                goto LABEL_22;
              }
              break;
            case 0xA:
              goto LABEL_22;
          }
          v35 = 4385;
          v36 = (__int64 *)(a1[1] + 8LL);
          goto LABEL_10;
        }
      }
    }
    else
    {
      v60 = a1[1];
    }
    v62 = sub_C00A40(v10, v25, v61, v29, v30);
    sub_168B9F0((__int64)v299, (__int64 *)(v60 + 8), v62, 0x1123u, 0);
    v63 = *(_QWORD *)(v10 + 8);
    if ( v303 )
    {
      sub_AE9DF0(&v301, *(_QWORD *)(v10 + 8), 8u);
    }
    else
    {
      if ( !v305 )
        goto LABEL_31;
      v68 = sub_168B9E0(v299);
      v69 = v300;
      if ( v300 )
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
      v298 = v69;
      v70 = sub_1587BC0(v68, &v298, v64, v65, v66, v67);
      sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v304 + 8), v63, 8u);
    }
    if ( v303 )
    {
      v71 = v301;
      if ( !v301 )
      {
        v264 = v302;
        v265 = *(_DWORD *)(v302 + 14976);
        if ( v265 )
        {
          v270 = (unsigned int)(v265 - 1);
          *(_DWORD *)(v302 + 14976) = v270;
          v71 = *(unsigned __int8 **)(v264 + 8 * v270 + 14848);
          v271 = *((unsigned int *)v71 + 134);
          *v71 = 0;
          v272 = *((_QWORD *)v71 + 66);
          *((_DWORD *)v71 + 106) = 0;
          v273 = v272 + (v271 << 6);
          while ( v272 != v273 )
          {
            while ( 1 )
            {
              v273 -= 64;
              v274 = *(void **)(v273 + 24);
              if ( v274 == (void *)(v273 + 40) )
                break;
              operator delete(v274);
              if ( v272 == v273 )
                goto LABEL_227;
            }
          }
LABEL_227:
          *((_DWORD *)v71 + 134) = 0;
        }
        else
        {
          v71 = (unsigned __int8 *)operator new(0x3A0u);
          *v71 = 0;
          *((_QWORD *)v71 + 12) = v71 + 112;
          *((_QWORD *)v71 + 16) = v71 + 144;
          *((_QWORD *)v71 + 20) = v71 + 176;
          *((_QWORD *)v71 + 24) = v71 + 208;
          *((_QWORD *)v71 + 28) = v71 + 240;
          *((_QWORD *)v71 + 32) = v71 + 272;
          *((_QWORD *)v71 + 36) = v71 + 304;
          *((_QWORD *)v71 + 40) = v71 + 336;
          *((_QWORD *)v71 + 44) = v71 + 368;
          *((_QWORD *)v71 + 48) = v71 + 400;
          *((_QWORD *)v71 + 52) = v71 + 432;
          *((_QWORD *)v71 + 13) = 0;
          v71[112] = 0;
          *((_QWORD *)v71 + 17) = 0;
          v71[144] = 0;
          *((_QWORD *)v71 + 21) = 0;
          v71[176] = 0;
          *((_QWORD *)v71 + 25) = 0;
          v71[208] = 0;
          *((_QWORD *)v71 + 29) = 0;
          v71[240] = 0;
          *((_QWORD *)v71 + 33) = 0;
          v71[272] = 0;
          *((_QWORD *)v71 + 37) = 0;
          v71[304] = 0;
          *((_QWORD *)v71 + 41) = 0;
          v71[336] = 0;
          *((_QWORD *)v71 + 45) = 0;
          v71[368] = 0;
          *((_QWORD *)v71 + 49) = 0;
          v71[400] = 0;
          *((_QWORD *)v71 + 53) = 0x800000000LL;
          *((_QWORD *)v71 + 66) = v71 + 544;
          *((_QWORD *)v71 + 67) = 0x600000000LL;
        }
        v301 = v71;
      }
      v71[*v71 + 1] = 2;
      v72 = v301;
      v73 = *v301;
      *v301 = v73 + 1;
      *(_QWORD *)&v72[8 * v73 + 16] = 0;
    }
    else
    {
      if ( !v305 )
        goto LABEL_31;
      v197 = sub_168B9E0(v299);
      v200 = v300;
      if ( v300 )
        v200 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
      v298 = v200;
      v201 = sub_1587BC0(v197, &v298, v195, v196, v198, v199);
      v202 = *v201 + 32LL * v304;
      v203 = *(unsigned __int8 **)(v202 + 8);
      if ( !v203 )
      {
        v266 = *(_QWORD *)(v202 + 16);
        v267 = *(_DWORD *)(v266 + 14976);
        if ( v267 )
        {
          v285 = (unsigned int)(v267 - 1);
          *(_DWORD *)(v266 + 14976) = v285;
          v203 = *(unsigned __int8 **)(v266 + 8 * v285 + 14848);
          v286 = *((unsigned int *)v203 + 134);
          *v203 = 0;
          v287 = *((_QWORD *)v203 + 66);
          *((_DWORD *)v203 + 106) = 0;
          v288 = v287 + (v286 << 6);
          while ( v287 != v288 )
          {
            while ( 1 )
            {
              v288 -= 64;
              v289 = *(void **)(v288 + 24);
              if ( v289 == (void *)(v288 + 40) )
                break;
              operator delete(v289);
              if ( v287 == v288 )
                goto LABEL_242;
            }
          }
LABEL_242:
          *((_DWORD *)v203 + 134) = 0;
        }
        else
        {
          v203 = (unsigned __int8 *)operator new(0x3A0u);
          *v203 = 0;
          *((_QWORD *)v203 + 12) = v203 + 112;
          *((_QWORD *)v203 + 16) = v203 + 144;
          *((_QWORD *)v203 + 20) = v203 + 176;
          *((_QWORD *)v203 + 24) = v203 + 208;
          *((_QWORD *)v203 + 28) = v203 + 240;
          *((_QWORD *)v203 + 32) = v203 + 272;
          *((_QWORD *)v203 + 36) = v203 + 304;
          *((_QWORD *)v203 + 40) = v203 + 336;
          *((_QWORD *)v203 + 44) = v203 + 368;
          *((_QWORD *)v203 + 48) = v203 + 400;
          *((_QWORD *)v203 + 52) = v203 + 432;
          v203[112] = 0;
          *((_QWORD *)v203 + 13) = 0;
          *((_QWORD *)v203 + 17) = 0;
          v203[144] = 0;
          *((_QWORD *)v203 + 21) = 0;
          v203[176] = 0;
          *((_QWORD *)v203 + 25) = 0;
          v203[208] = 0;
          *((_QWORD *)v203 + 29) = 0;
          v203[240] = 0;
          *((_QWORD *)v203 + 33) = 0;
          v203[272] = 0;
          *((_QWORD *)v203 + 37) = 0;
          v203[304] = 0;
          *((_QWORD *)v203 + 41) = 0;
          v203[336] = 0;
          *((_QWORD *)v203 + 45) = 0;
          v203[368] = 0;
          *((_QWORD *)v203 + 49) = 0;
          v203[400] = 0;
          *((_QWORD *)v203 + 53) = 0x800000000LL;
          *((_QWORD *)v203 + 66) = v203 + 544;
          *((_QWORD *)v203 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v202 + 8) = v203;
      }
      v203[*v203 + 1] = 2;
      v204 = *(_BYTE **)(v202 + 8);
      v205 = (unsigned __int8)*v204;
      *v204 = v205 + 1;
      *(_QWORD *)&v204[8 * v205 + 16] = 0;
    }
    if ( v303 )
    {
      v74 = v301;
      if ( !v301 )
      {
        v262 = v302;
        v263 = *(_DWORD *)(v302 + 14976);
        if ( v263 )
        {
          v275 = (unsigned int)(v263 - 1);
          *(_DWORD *)(v302 + 14976) = v275;
          v74 = *(unsigned __int8 **)(v262 + 8 * v275 + 14848);
          v276 = *((unsigned int *)v74 + 134);
          *v74 = 0;
          v277 = *((_QWORD *)v74 + 66);
          *((_DWORD *)v74 + 106) = 0;
          v278 = v277 + (v276 << 6);
          while ( v277 != v278 )
          {
            while ( 1 )
            {
              v278 -= 64;
              v279 = *(void **)(v278 + 24);
              if ( v279 == (void *)(v278 + 40) )
                break;
              operator delete(v279);
              if ( v277 == v278 )
                goto LABEL_232;
            }
          }
LABEL_232:
          *((_DWORD *)v74 + 134) = 0;
        }
        else
        {
          v74 = (unsigned __int8 *)operator new(0x3A0u);
          *v74 = 0;
          *((_QWORD *)v74 + 12) = v74 + 112;
          *((_QWORD *)v74 + 16) = v74 + 144;
          *((_QWORD *)v74 + 20) = v74 + 176;
          *((_QWORD *)v74 + 24) = v74 + 208;
          *((_QWORD *)v74 + 28) = v74 + 240;
          *((_QWORD *)v74 + 32) = v74 + 272;
          *((_QWORD *)v74 + 36) = v74 + 304;
          *((_QWORD *)v74 + 40) = v74 + 336;
          *((_QWORD *)v74 + 44) = v74 + 368;
          *((_QWORD *)v74 + 48) = v74 + 400;
          *((_QWORD *)v74 + 52) = v74 + 432;
          *((_QWORD *)v74 + 13) = 0;
          v74[112] = 0;
          *((_QWORD *)v74 + 17) = 0;
          v74[144] = 0;
          *((_QWORD *)v74 + 21) = 0;
          v74[176] = 0;
          *((_QWORD *)v74 + 25) = 0;
          v74[208] = 0;
          *((_QWORD *)v74 + 29) = 0;
          v74[240] = 0;
          *((_QWORD *)v74 + 33) = 0;
          v74[272] = 0;
          *((_QWORD *)v74 + 37) = 0;
          v74[304] = 0;
          *((_QWORD *)v74 + 41) = 0;
          v74[336] = 0;
          *((_QWORD *)v74 + 45) = 0;
          v74[368] = 0;
          *((_QWORD *)v74 + 49) = 0;
          v74[400] = 0;
          *((_QWORD *)v74 + 53) = 0x800000000LL;
          *((_QWORD *)v74 + 66) = v74 + 544;
          *((_QWORD *)v74 + 67) = 0x600000000LL;
        }
        v301 = v74;
      }
      v74[*v74 + 1] = 2;
      v75 = v301;
      v76 = *v301;
      *v301 = v76 + 1;
      *(_QWORD *)&v75[8 * v76 + 16] = v290;
    }
    else if ( v305 )
    {
      v186 = sub_168B9E0(v299);
      v189 = v300;
      if ( v300 )
        v189 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v300 + 32LL))(v300);
      v298 = v189;
      v190 = sub_1587BC0(v186, &v298, v184, v185, v187, v188);
      v191 = *v190 + 32LL * v304;
      v192 = *(unsigned __int8 **)(v191 + 8);
      if ( !v192 )
      {
        v268 = *(_QWORD *)(v191 + 16);
        v269 = *(_DWORD *)(v268 + 14976);
        if ( v269 )
        {
          v280 = (unsigned int)(v269 - 1);
          *(_DWORD *)(v268 + 14976) = v280;
          v192 = *(unsigned __int8 **)(v268 + 8 * v280 + 14848);
          v281 = *((unsigned int *)v192 + 134);
          *v192 = 0;
          v282 = *((_QWORD *)v192 + 66);
          *((_DWORD *)v192 + 106) = 0;
          v283 = v282 + (v281 << 6);
          while ( v282 != v283 )
          {
            while ( 1 )
            {
              v283 -= 64;
              v284 = *(void **)(v283 + 24);
              if ( v284 == (void *)(v283 + 40) )
                break;
              operator delete(v284);
              if ( v282 == v283 )
                goto LABEL_237;
            }
          }
LABEL_237:
          *((_DWORD *)v192 + 134) = 0;
        }
        else
        {
          v192 = (unsigned __int8 *)operator new(0x3A0u);
          *v192 = 0;
          *((_QWORD *)v192 + 12) = v192 + 112;
          *((_QWORD *)v192 + 16) = v192 + 144;
          *((_QWORD *)v192 + 20) = v192 + 176;
          *((_QWORD *)v192 + 24) = v192 + 208;
          *((_QWORD *)v192 + 28) = v192 + 240;
          *((_QWORD *)v192 + 32) = v192 + 272;
          *((_QWORD *)v192 + 36) = v192 + 304;
          *((_QWORD *)v192 + 40) = v192 + 336;
          *((_QWORD *)v192 + 44) = v192 + 368;
          *((_QWORD *)v192 + 48) = v192 + 400;
          *((_QWORD *)v192 + 52) = v192 + 432;
          v192[112] = 0;
          *((_QWORD *)v192 + 13) = 0;
          *((_QWORD *)v192 + 17) = 0;
          v192[144] = 0;
          *((_QWORD *)v192 + 21) = 0;
          v192[176] = 0;
          *((_QWORD *)v192 + 25) = 0;
          v192[208] = 0;
          *((_QWORD *)v192 + 29) = 0;
          v192[240] = 0;
          *((_QWORD *)v192 + 33) = 0;
          v192[272] = 0;
          *((_QWORD *)v192 + 37) = 0;
          v192[304] = 0;
          *((_QWORD *)v192 + 41) = 0;
          v192[336] = 0;
          *((_QWORD *)v192 + 45) = 0;
          v192[368] = 0;
          *((_QWORD *)v192 + 49) = 0;
          v192[400] = 0;
          *((_QWORD *)v192 + 53) = 0x800000000LL;
          *((_QWORD *)v192 + 66) = v192 + 544;
          *((_QWORD *)v192 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v191 + 8) = v192;
      }
      v192[*v192 + 1] = 2;
      v193 = *(_BYTE **)(v191 + 8);
      v194 = (unsigned __int8)*v193;
      *v193 = v194 + 1;
      *(_QWORD *)&v193[8 * v194 + 16] = v290;
    }
    goto LABEL_31;
  }
LABEL_33:
  v55 = a1[1];
  result = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(v55 + 232) + 107LL) & 4) != 0 )
  {
    sub_1C1A9B0(v55, v14, *(_QWORD *)(a1[10] + 32LL), a3, a4);
    return 0;
  }
  return result;
}
