__int64 __fastcall sub_1C1AC60(
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
  __int64 *v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r12d
  __int64 v20; // rsi
  __int64 v21; // rdi
  void *v22; // rax
  const char *v23; // rsi
  size_t v24; // rdx
  unsigned __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbp
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 *v37; // rsi
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 result; // rax
  int v41; // eax
  unsigned int v42; // eax
  __int64 v43; // rbp
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbp
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // r13
  unsigned __int8 *v61; // rbp
  _BYTE *v62; // rdx
  __int64 v63; // rax
  unsigned __int8 *v64; // rbp
  unsigned __int8 *v65; // rdx
  __int64 v66; // rax
  unsigned __int8 *v67; // rbp
  _BOOL8 v68; // r15
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // r13
  __int64 v74; // r12
  void *v75; // rdi
  unsigned __int8 *v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rdi
  char v79; // al
  int v80; // ecx
  __int64 *v81; // rbp
  unsigned int v82; // eax
  __int64 v83; // rdx
  __int64 *v84; // rbp
  unsigned int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rbp
  _QWORD *v88; // rdi
  __int64 v89; // r8
  __int64 v90; // r13
  __int64 v91; // rax
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdx
  __int64 v95; // rdi
  int v96; // edx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // r13
  unsigned __int64 v102; // r13
  __int64 v103; // rax
  __int64 v104; // rsi
  __int64 v105; // rax
  __int64 v106; // rcx
  unsigned __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // rax
  unsigned __int64 v110; // r13
  __int64 v111; // r8
  __int64 v112; // rsi
  __int64 v113; // rax
  __int64 v114; // rcx
  unsigned __int64 v115; // rdx
  __int64 v116; // rdi
  __int64 v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rdx
  int v120; // eax
  __int64 v121; // rax
  __int64 v122; // r12
  __int64 v123; // r13
  __int64 v124; // r12
  void *v125; // rdi
  _QWORD *v126; // rsi
  __int64 v127; // r9
  unsigned __int64 v128; // rcx
  __int64 v129; // rax
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rbp
  __int64 v134; // rax
  unsigned __int8 *v135; // r12
  _BYTE *v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rax
  _QWORD *v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rdx
  unsigned __int8 *v146; // rax
  _BYTE *v147; // rdx
  __int64 v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rax
  _QWORD *v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  unsigned __int8 *v157; // rax
  _BYTE *v158; // rdx
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // r12
  __int64 v165; // rax
  _QWORD *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // rbp
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rax
  _QWORD *v173; // rax
  _BOOL8 v174; // r15
  __int64 v175; // r12
  unsigned __int8 *v176; // rbp
  _BYTE *v177; // rdx
  __int64 v178; // rax
  unsigned __int8 *v179; // rax
  __int64 v180; // rcx
  unsigned __int8 *v181; // rdx
  __int64 v182; // rax
  unsigned __int8 *v183; // rax
  __int64 v184; // rcx
  unsigned __int8 *v185; // rdx
  __int64 v186; // rax
  unsigned int v187; // eax
  __int64 v188; // rax
  __int64 v189; // rcx
  __int64 v190; // r8
  __int64 v191; // r9
  __int64 v192; // r13
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r8
  __int64 v196; // r9
  __int64 v197; // r12
  __int64 v198; // rax
  __int64 v199; // r12
  unsigned __int8 *v200; // rbp
  _BYTE *v201; // rdx
  __int64 v202; // rax
  unsigned __int8 *v203; // rbp
  unsigned __int8 *v204; // rdx
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // rbp
  __int64 v209; // r8
  __int64 v210; // r9
  __int64 v211; // rax
  _QWORD *v212; // rax
  __int64 v213; // rdx
  int v214; // eax
  __int64 v215; // rax
  __int64 v216; // r13
  __int64 v217; // r14
  __int64 v218; // r13
  void *v219; // rdi
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // rbp
  __int64 v223; // r8
  __int64 v224; // r9
  __int64 v225; // rax
  _QWORD *v226; // rax
  __int64 v227; // r12
  unsigned __int8 *v228; // rbp
  _BYTE *v229; // rdx
  __int64 v230; // rax
  __int64 v231; // rdx
  int v232; // eax
  __int64 v233; // rax
  __int64 v234; // r13
  __int64 v235; // r14
  __int64 v236; // r13
  void *v237; // rdi
  __int64 v238; // rdx
  int v239; // eax
  __int64 v240; // rdx
  int v241; // eax
  __int64 v242; // rdx
  int v243; // eax
  __int64 v244; // rsi
  int v245; // eax
  __int64 v246; // rsi
  int v247; // eax
  __int64 v248; // rax
  __int64 v249; // rdx
  __int64 v250; // rsi
  __int64 v251; // rdx
  void *v252; // rdi
  __int64 v253; // rdx
  int v254; // eax
  __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // rsi
  __int64 v258; // rdx
  void *v259; // rdi
  __int64 v260; // rdx
  int v261; // eax
  __int64 v262; // rdx
  int v263; // eax
  __int64 v264; // rax
  __int64 v265; // rax
  __int64 v266; // rcx
  __int64 v267; // r14
  void *v268; // rdi
  __int64 v269; // rax
  __int64 v270; // rsi
  __int64 v271; // rdi
  __int64 v272; // rsi
  void *v273; // rdi
  __int64 v274; // rax
  __int64 v275; // rsi
  __int64 v276; // rdi
  __int64 v277; // rsi
  void *v278; // rdi
  __int64 v279; // rdx
  int v280; // eax
  __int64 v281; // rdx
  int v282; // eax
  __int64 v283; // rax
  __int64 v284; // r14
  __int64 v285; // rdx
  __int64 v286; // r14
  void *v287; // rdi
  __int64 v288; // rax
  __int64 v289; // r12
  __int64 v290; // r13
  __int64 v291; // r12
  void *v292; // rdi
  __int64 v293; // rax
  __int64 v294; // r13
  __int64 v295; // r14
  __int64 v296; // r13
  void *v297; // rdi
  __int64 v298; // rax
  __int64 v299; // r14
  __int64 v300; // r15
  __int64 v301; // r14
  void *v302; // rdi
  __int64 v303; // rax
  __int64 v304; // r13
  __int64 v305; // r14
  __int64 v306; // r13
  void *v307; // rdi
  bool v308; // [rsp+0h] [rbp-108h]
  __int64 v309; // [rsp+0h] [rbp-108h]
  __int64 v310; // [rsp+0h] [rbp-108h]
  __int64 v311; // [rsp+0h] [rbp-108h]
  __int64 v312; // [rsp+0h] [rbp-108h]
  __int64 v313; // [rsp+0h] [rbp-108h]
  __int64 v314; // [rsp+0h] [rbp-108h]
  unsigned __int64 v315; // [rsp+8h] [rbp-100h]
  _QWORD *v316; // [rsp+8h] [rbp-100h]
  __int64 v317; // [rsp+8h] [rbp-100h]
  _QWORD *v318; // [rsp+8h] [rbp-100h]
  __int64 v319; // [rsp+8h] [rbp-100h]
  __int64 v320; // [rsp+8h] [rbp-100h]
  __int64 v321; // [rsp+8h] [rbp-100h]
  __int64 v322; // [rsp+8h] [rbp-100h]
  __int64 v323; // [rsp+8h] [rbp-100h]
  __int64 v324; // [rsp+8h] [rbp-100h]
  __int64 v325; // [rsp+8h] [rbp-100h]
  __int64 v326; // [rsp+8h] [rbp-100h]
  unsigned __int8 *v327; // [rsp+8h] [rbp-100h]
  __int64 v328; // [rsp+8h] [rbp-100h]
  __int64 v329; // [rsp+10h] [rbp-F8h]
  __int64 v330; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v331; // [rsp+10h] [rbp-F8h]
  __int64 v332; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v333; // [rsp+10h] [rbp-F8h]
  __int64 v334; // [rsp+10h] [rbp-F8h]
  __int64 v335; // [rsp+10h] [rbp-F8h]
  __int64 v336; // [rsp+18h] [rbp-F0h]
  __int64 v337; // [rsp+18h] [rbp-F0h]
  __int64 v338; // [rsp+18h] [rbp-F0h]
  __int64 v339; // [rsp+20h] [rbp-E8h]
  unsigned __int8 *v340; // [rsp+20h] [rbp-E8h]
  __int64 v341; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v342; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v344; // [rsp+48h] [rbp-C0h]
  _QWORD v345[2]; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int8 *v346; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v347; // [rsp+68h] [rbp-A0h]
  char v348; // [rsp+B8h] [rbp-50h]
  unsigned int v349; // [rsp+C0h] [rbp-48h]
  char v350; // [rsp+C4h] [rbp-44h]

  v9 = a1[10];
  v10 = *(_QWORD *)(v9 + 24);
  v11 = (__int64 *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *v11;
  if ( *(_BYTE *)(*v11 + 16) != 34 )
  {
    a6 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(a6 + 16) != 34 || (v12 = sub_F63050(*v11, a2, v9, a6), v9 = a1[10], !v12) )
    {
      v41 = sub_1A8B160(*(__int64 **)(a1[1] + 736LL), *(_QWORD *)(v9 + 32), v9, a6, a7, a8);
      if ( v41 != 2 )
      {
        v20 = a1[1];
        v308 = v41 == 0;
LABEL_24:
        v42 = sub_C00A40(v10, v20, v16, v17, v18);
        sub_168B9F0((__int64)&ptr, (__int64 *)(v20 + 8), v42, 0x111Fu, 0);
        v43 = *(_QWORD *)(v10 + 8);
        if ( v348 )
        {
          sub_AE9DF0(&v346, *(_QWORD *)(v10 + 8), 8u);
        }
        else
        {
          if ( !v350 )
          {
LABEL_26:
            sub_15F7200(&ptr);
            return 0;
          }
          v164 = sub_168B9E0(&ptr);
          v165 = v345[0];
          if ( v345[0] )
            v165 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v345[0] + 32LL))(v345[0]);
          v342 = v165;
          v166 = sub_1587BC0(v164, &v342, v160, v161, v162, v163);
          sub_AE9DF0((unsigned __int8 **)(*v166 + 32LL * v349 + 8), v43, 8u);
        }
        if ( v348 )
        {
          v67 = v346;
          v68 = v308;
          if ( v346 )
            goto LABEL_53;
          v119 = v347;
          v120 = *(_DWORD *)(v347 + 14976);
          if ( v120 )
          {
            v121 = (unsigned int)(v120 - 1);
            *(_DWORD *)(v347 + 14976) = v121;
            v67 = *(unsigned __int8 **)(v119 + 8 * v121 + 14848);
            v122 = *((unsigned int *)v67 + 134);
            *v67 = 0;
            v123 = *((_QWORD *)v67 + 66);
            *((_DWORD *)v67 + 106) = 0;
            v124 = v123 + (v122 << 6);
            while ( v123 != v124 )
            {
              while ( 1 )
              {
                v124 -= 64;
                v125 = *(void **)(v124 + 24);
                if ( v125 == (void *)(v124 + 40) )
                  break;
                operator delete(v125);
                if ( v123 == v124 )
                  goto LABEL_51;
              }
            }
LABEL_51:
            *((_DWORD *)v67 + 134) = 0;
LABEL_52:
            v346 = v67;
            goto LABEL_53;
          }
          goto LABEL_177;
        }
        if ( !v350 )
          goto LABEL_26;
        v169 = sub_168B9E0(&ptr);
        v172 = v345[0];
        if ( v345[0] )
          v172 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v345[0] + 32LL))(v345[0]);
        v342 = v172;
        v173 = sub_1587BC0(v169, &v342, v167, v168, v170, v171);
        v174 = v308;
        v175 = *v173 + 32LL * v349;
        v176 = *(unsigned __int8 **)(v175 + 8);
        if ( v176 )
          goto LABEL_135;
        v231 = *(_QWORD *)(v175 + 16);
        v232 = *(_DWORD *)(v231 + 14976);
        if ( v232 )
        {
          v233 = (unsigned int)(v232 - 1);
          *(_DWORD *)(v231 + 14976) = v233;
          v176 = *(unsigned __int8 **)(v231 + 8 * v233 + 14848);
          v234 = *((unsigned int *)v176 + 134);
          *v176 = 0;
          v235 = *((_QWORD *)v176 + 66);
          *((_DWORD *)v176 + 106) = 0;
          v236 = v235 + (v234 << 6);
          while ( v235 != v236 )
          {
            while ( 1 )
            {
              v236 -= 64;
              v237 = *(void **)(v236 + 24);
              if ( v237 == (void *)(v236 + 40) )
                break;
              operator delete(v237);
              if ( v235 == v236 )
                goto LABEL_160;
            }
          }
LABEL_160:
          *((_DWORD *)v176 + 134) = 0;
LABEL_161:
          *(_QWORD *)(v175 + 8) = v176;
          goto LABEL_135;
        }
        goto LABEL_184;
      }
      v14 = 0;
      goto LABEL_28;
    }
  }
  v13 = *(_QWORD *)(v12 + 32);
  v14 = v13;
  v15 = sub_1A8B160(*(__int64 **)(a1[1] + 736LL), *(_QWORD *)(v9 + 32), v9, a6, a7, a8);
  v19 = v15;
  if ( v15 == 2 )
  {
LABEL_28:
    v44 = a1[1];
    result = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(v44 + 232) + 107LL) & 4) != 0 )
    {
      sub_1C1A9B0(v44, v14, *(_QWORD *)(a1[10] + 32LL), a3, a4);
      return 0;
    }
    return result;
  }
  v20 = a1[1];
  v308 = v15 == 0;
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_24;
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 248) + 17504LL);
  if ( v15 )
  {
    v22 = (void *)sub_6F3470(v21, "setObject", 9u);
    v23 = "forKeyedSubscript";
    v24 = 17;
  }
  else
  {
    v22 = (void *)sub_6F3470(v21, "setObject", 9u);
    v23 = "atIndexedSubscript";
    v24 = 18;
  }
  ptr = v22;
  v344 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1[1] + 248LL) + 17504LL), v23, v24);
  v25 = sub_FE3230(*(_QWORD **)(*(_QWORD *)(a1[1] + 248LL) + 17512LL), 2u, (unsigned __int64 *)&ptr);
  a1[16] = v25;
  v26 = (__int64 *)v25;
  v29 = sub_19D01C0(*(_QWORD *)(a1[1] + 736LL), v25, v13, 1, v27, v28);
  a1[15] = v29;
  if ( !v29 )
  {
    v45 = a1[1];
    if ( (*(_BYTE *)(*(_QWORD *)(v45 + 232) + 106LL) & 1) == 0 )
      goto LABEL_31;
    v88 = *(_QWORD **)(v45 + 248);
    v89 = v88[2329];
    v90 = *(_QWORD *)(v88[283] + 80LL);
    v91 = *(_QWORD *)(v90 + 72);
    v92 = v91 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v91 & 1) == 0 )
    {
      v126 = (_QWORD *)(v91 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v91 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v94 = v91 & 0xFFFFFFFFFFFFFFFCLL;
        if ( (v91 & 2) == 0 )
          goto LABEL_70;
        v127 = v126[2295];
        v128 = v90 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v127 )
        {
          v129 = v126[294];
          v126[304] += 24LL;
          v130 = (v129 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v126[295] >= v130 + 24 && v129 )
          {
            v126[294] = v130 + 24;
            v131 = (v129 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v332 = v89;
            v325 = v127;
            v131 = sub_986170((__int64)(v126 + 294), 24, 24, 3, v89, v127);
            v89 = v332;
            v127 = v325;
            v130 = v131 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v131 = v127;
          v128 = v130 | 4;
          *(_DWORD *)(v131 + 8) = 0;
          *(_QWORD *)(v131 + 16) = v90;
        }
        v92 = v128 & 0xFFFFFFFFFFFFFFFELL;
        v91 = v92 | 1;
        *(_QWORD *)(v90 + 72) = v92 | 1;
      }
    }
    v93 = v91 & 0xFFFFFFFFFFFFFFF8LL;
    v94 = v93;
    if ( v92 )
    {
      if ( (v92 & 4) != 0 )
      {
        v94 = 0;
        if ( v93 )
        {
          v95 = *(_QWORD *)v93;
          v96 = *(_DWORD *)(*(_QWORD *)v93 + 12LL);
          if ( *(_DWORD *)(v93 + 8) != v96 )
          {
            *(_DWORD *)(v93 + 8) = v96;
            v329 = v89;
            v315 = v93;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v95 + 152LL))(v95, v90);
            v89 = v329;
            v93 = v315;
          }
          v94 = *(_QWORD *)(v93 + 16);
        }
      }
    }
    v88 = *(_QWORD **)(a1[1] + 248LL);
LABEL_70:
    if ( v94 )
      v94 += 40LL;
    a1[15] = sub_BA7B60(v88, 0, 0, a1[16], v89, 0, v94, 1, 0, 0, 0, 1, 0, 1, 0);
    ptr = v345;
    v344 = 0x200000000LL;
    v316 = *(_QWORD **)(a1[1] + 248LL);
    v97 = sub_A8A250(v316);
    v101 = *(_QWORD *)(v97 + 48);
    if ( v101 )
      v102 = v101 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v102 = sub_A7AA70((__int64)v316, v97, (__int64)v316, v98, v99, v100);
    v103 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1[1] + 248LL) + 17504LL), "object", 6u);
    v104 = a1[15];
    if ( v104 )
      v104 += 48;
    v105 = sub_B74530(*(_QWORD *)(a1[1] + 248LL), v104, 0, 0, v103, v102, 0, 0, 0);
    v106 = (unsigned int)v344;
    v107 = (unsigned int)v344 + 1LL;
    if ( v107 > HIDWORD(v344) )
    {
      v319 = v105;
      sub_2237220(&ptr, v345, v107, 8);
      v106 = (unsigned int)v344;
      v105 = v319;
    }
    *((_QWORD *)ptr + v106) = v105;
    v108 = a1[1];
    LODWORD(v344) = v344 + 1;
    if ( v19 )
    {
      v318 = *(_QWORD **)(v108 + 248);
      v188 = sub_A8A250(v318);
      v192 = *(_QWORD *)(v188 + 48);
      if ( v192 )
        v110 = v192 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v110 = sub_A7AA70((__int64)v318, v188, (__int64)v318, v189, v190, v191);
      v111 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1[1] + 248LL) + 17504LL), "key", 3u);
    }
    else
    {
      v109 = *(_QWORD *)(v108 + 248);
      v110 = *(_QWORD *)(v109 + 18776);
      v111 = sub_6F3470(*(_QWORD *)(v109 + 17504), "index", 5u);
    }
    v112 = a1[15];
    if ( v112 )
      v112 += 48;
    v113 = sub_B74530(*(_QWORD *)(a1[1] + 248LL), v112, 0, 0, v111, v110, 0, 0, 0);
    v114 = (unsigned int)v344;
    v115 = (unsigned int)v344 + 1LL;
    if ( v115 > HIDWORD(v344) )
    {
      v320 = v113;
      sub_2237220(&ptr, v345, v115, 8);
      v114 = (unsigned int)v344;
      v113 = v320;
    }
    *((_QWORD *)ptr + v114) = v113;
    v116 = a1[15];
    v117 = a1[1];
    LODWORD(v344) = v344 + 1;
    v26 = *(__int64 **)(v117 + 248);
    sub_BA9CC0(v116, (__int64)v26, ptr, (unsigned int)v344, 0, 0);
    if ( ptr != v345 )
      free(ptr);
    v29 = a1[15];
    if ( v29 )
      goto LABEL_7;
LABEL_31:
    v46 = *v11;
    if ( *(_BYTE *)(*v11 + 16) == 34
      || (v50 = *(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v50 + 16) == 34)
      && (v46 = sub_F63050(*v11, v26, v50, v30)) != 0 )
    {
      v47 = *(_QWORD *)(*(_QWORD *)(v46 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v48 = (unsigned int)*(unsigned __int8 *)(v47 + 16) - 35;
      if ( (unsigned int)v48 > 1 )
        v47 = sub_F63050(v47, v26, v48, v30);
      v50 = *(unsigned __int8 *)(v47 + 19);
      v49 = a1[1];
      LOBYTE(v50) = (unsigned __int8)v50 >> 2;
      if ( !(_BYTE)v50 )
      {
        v132 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                         & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v132 + 16) == 13 && ((*(_WORD *)(v132 + 18) >> 3) & 0x1FF) == 0x1E9 )
        {
          v133 = *(_QWORD *)(v49 + 736);
          v134 = sub_EEC8C0(a1[10], (__int64)v26, *(double *)a3.m128_u64);
          v26 = (__int64 *)a1[16];
          v29 = sub_1897840(v133, (__int64)v26, v134, 1, 1);
          a1[15] = v29;
          if ( !v29 )
            return 1;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v49 = a1[1];
    }
    v51 = sub_C00A40(v10, (__int64)v26, v50, v30, v31);
    sub_168B9F0((__int64)&ptr, (__int64 *)(v49 + 8), v51, 0x1123u, 0);
    v52 = *(_QWORD *)(v10 + 8);
    if ( v348 )
    {
      v203 = v346;
      if ( !v346 )
      {
        v262 = v347;
        v263 = *(_DWORD *)(v347 + 14976);
        if ( v263 )
        {
          v293 = (unsigned int)(v263 - 1);
          *(_DWORD *)(v347 + 14976) = v293;
          v203 = *(unsigned __int8 **)(v262 + 8 * v293 + 14848);
          v294 = *((unsigned int *)v203 + 134);
          *v203 = 0;
          v295 = *((_QWORD *)v203 + 66);
          *((_DWORD *)v203 + 106) = 0;
          v296 = v295 + (v294 << 6);
          while ( v295 != v296 )
          {
            while ( 1 )
            {
              v296 -= 64;
              v297 = *(void **)(v296 + 24);
              if ( v297 == (void *)(v296 + 40) )
                break;
              operator delete(v297);
              if ( v295 == v296 )
                goto LABEL_250;
            }
          }
LABEL_250:
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
          *((_QWORD *)v203 + 13) = 0;
          v203[112] = 0;
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
        v346 = v203;
      }
      v203[*v203 + 1] = 8;
      v204 = v346;
      v205 = *v346;
      *v346 = v205 + 1;
      *(_QWORD *)&v204[8 * v205 + 16] = v52;
    }
    else
    {
      if ( !v350 )
        goto LABEL_26;
      v55 = sub_168B9E0(&ptr);
      v58 = v345[0];
      if ( v345[0] )
        v58 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v345[0] + 32LL))(v345[0]);
      v342 = v58;
      v59 = sub_1587BC0(v55, &v342, v53, v54, v56, v57);
      v60 = *v59 + 32LL * v349;
      v61 = *(unsigned __int8 **)(v60 + 8);
      if ( !v61 )
      {
        v279 = *(_QWORD *)(v60 + 16);
        v280 = *(_DWORD *)(v279 + 14976);
        if ( v280 )
        {
          v298 = (unsigned int)(v280 - 1);
          *(_DWORD *)(v279 + 14976) = v298;
          v61 = *(unsigned __int8 **)(v279 + 8 * v298 + 14848);
          v299 = *((unsigned int *)v61 + 134);
          *v61 = 0;
          v300 = *((_QWORD *)v61 + 66);
          *((_DWORD *)v61 + 106) = 0;
          v301 = v300 + (v299 << 6);
          while ( v300 != v301 )
          {
            while ( 1 )
            {
              v301 -= 64;
              v302 = *(void **)(v301 + 24);
              if ( v302 == (void *)(v301 + 40) )
                break;
              operator delete(v302);
              if ( v300 == v301 )
                goto LABEL_255;
            }
          }
LABEL_255:
          *((_DWORD *)v61 + 134) = 0;
        }
        else
        {
          v61 = (unsigned __int8 *)operator new(0x3A0u);
          *v61 = 0;
          *((_QWORD *)v61 + 12) = v61 + 112;
          *((_QWORD *)v61 + 16) = v61 + 144;
          *((_QWORD *)v61 + 20) = v61 + 176;
          *((_QWORD *)v61 + 24) = v61 + 208;
          *((_QWORD *)v61 + 28) = v61 + 240;
          *((_QWORD *)v61 + 32) = v61 + 272;
          *((_QWORD *)v61 + 36) = v61 + 304;
          *((_QWORD *)v61 + 40) = v61 + 336;
          *((_QWORD *)v61 + 44) = v61 + 368;
          *((_QWORD *)v61 + 48) = v61 + 400;
          *((_QWORD *)v61 + 52) = v61 + 432;
          v61[112] = 0;
          *((_QWORD *)v61 + 13) = 0;
          *((_QWORD *)v61 + 17) = 0;
          v61[144] = 0;
          *((_QWORD *)v61 + 21) = 0;
          v61[176] = 0;
          *((_QWORD *)v61 + 25) = 0;
          v61[208] = 0;
          *((_QWORD *)v61 + 29) = 0;
          v61[240] = 0;
          *((_QWORD *)v61 + 33) = 0;
          v61[272] = 0;
          *((_QWORD *)v61 + 37) = 0;
          v61[304] = 0;
          *((_QWORD *)v61 + 41) = 0;
          v61[336] = 0;
          *((_QWORD *)v61 + 45) = 0;
          v61[368] = 0;
          *((_QWORD *)v61 + 49) = 0;
          v61[400] = 0;
          *((_QWORD *)v61 + 53) = 0x800000000LL;
          *((_QWORD *)v61 + 66) = v61 + 544;
          *((_QWORD *)v61 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v60 + 8) = v61;
      }
      v61[*v61 + 1] = 8;
      v62 = *(_BYTE **)(v60 + 8);
      v63 = (unsigned __int8)*v62;
      *v62 = v63 + 1;
      *(_QWORD *)&v62[8 * v63 + 16] = v52;
    }
    if ( v348 )
    {
      v64 = v346;
      if ( !v346 )
      {
        v260 = v347;
        v261 = *(_DWORD *)(v347 + 14976);
        if ( v261 )
        {
          v288 = (unsigned int)(v261 - 1);
          *(_DWORD *)(v347 + 14976) = v288;
          v64 = *(unsigned __int8 **)(v260 + 8 * v288 + 14848);
          v289 = *((unsigned int *)v64 + 134);
          *v64 = 0;
          v290 = *((_QWORD *)v64 + 66);
          *((_DWORD *)v64 + 106) = 0;
          v291 = v290 + (v289 << 6);
          while ( v290 != v291 )
          {
            while ( 1 )
            {
              v291 -= 64;
              v292 = *(void **)(v291 + 24);
              if ( v292 == (void *)(v291 + 40) )
                break;
              operator delete(v292);
              if ( v290 == v291 )
                goto LABEL_245;
            }
          }
LABEL_245:
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
        v346 = v64;
      }
      v64[*v64 + 1] = 2;
      v65 = v346;
      v66 = *v346;
      *v346 = v66 + 1;
      *(_QWORD *)&v65[8 * v66 + 16] = 1;
    }
    else
    {
      if ( !v350 )
        goto LABEL_26;
      v222 = sub_168B9E0(&ptr);
      v225 = v345[0];
      if ( v345[0] )
        v225 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v345[0] + 32LL))(v345[0]);
      v342 = v225;
      v226 = sub_1587BC0(v222, &v342, v220, v221, v223, v224);
      v227 = *v226 + 32LL * v349;
      v228 = *(unsigned __int8 **)(v227 + 8);
      if ( !v228 )
      {
        v281 = *(_QWORD *)(v227 + 16);
        v282 = *(_DWORD *)(v281 + 14976);
        if ( v282 )
        {
          v303 = (unsigned int)(v282 - 1);
          *(_DWORD *)(v281 + 14976) = v303;
          v228 = *(unsigned __int8 **)(v281 + 8 * v303 + 14848);
          v304 = *((unsigned int *)v228 + 134);
          *v228 = 0;
          v305 = *((_QWORD *)v228 + 66);
          *((_DWORD *)v228 + 106) = 0;
          v306 = v305 + (v304 << 6);
          while ( v305 != v306 )
          {
            while ( 1 )
            {
              v306 -= 64;
              v307 = *(void **)(v306 + 24);
              if ( v307 == (void *)(v306 + 40) )
                break;
              operator delete(v307);
              if ( v305 == v306 )
                goto LABEL_260;
            }
          }
LABEL_260:
          *((_DWORD *)v228 + 134) = 0;
        }
        else
        {
          v228 = (unsigned __int8 *)operator new(0x3A0u);
          *v228 = 0;
          *((_QWORD *)v228 + 12) = v228 + 112;
          *((_QWORD *)v228 + 16) = v228 + 144;
          *((_QWORD *)v228 + 20) = v228 + 176;
          *((_QWORD *)v228 + 24) = v228 + 208;
          *((_QWORD *)v228 + 28) = v228 + 240;
          *((_QWORD *)v228 + 32) = v228 + 272;
          *((_QWORD *)v228 + 36) = v228 + 304;
          *((_QWORD *)v228 + 40) = v228 + 336;
          *((_QWORD *)v228 + 44) = v228 + 368;
          *((_QWORD *)v228 + 48) = v228 + 400;
          *((_QWORD *)v228 + 52) = v228 + 432;
          v228[112] = 0;
          *((_QWORD *)v228 + 13) = 0;
          *((_QWORD *)v228 + 17) = 0;
          v228[144] = 0;
          *((_QWORD *)v228 + 21) = 0;
          v228[176] = 0;
          *((_QWORD *)v228 + 25) = 0;
          v228[208] = 0;
          *((_QWORD *)v228 + 29) = 0;
          v228[240] = 0;
          *((_QWORD *)v228 + 33) = 0;
          v228[272] = 0;
          *((_QWORD *)v228 + 37) = 0;
          v228[304] = 0;
          *((_QWORD *)v228 + 41) = 0;
          v228[336] = 0;
          *((_QWORD *)v228 + 45) = 0;
          v228[368] = 0;
          *((_QWORD *)v228 + 49) = 0;
          v228[400] = 0;
          *((_QWORD *)v228 + 53) = 0x800000000LL;
          *((_QWORD *)v228 + 66) = v228 + 544;
          *((_QWORD *)v228 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v227 + 8) = v228;
      }
      v228[*v228 + 1] = 2;
      v229 = *(_BYTE **)(v227 + 8);
      v230 = (unsigned __int8)*v229;
      *v229 = v230 + 1;
      *(_QWORD *)&v229[8 * v230 + 16] = 1;
    }
    if ( v348 )
    {
      v67 = v346;
      v68 = v308;
      if ( v346 )
      {
LABEL_53:
        v67[*v67 + 1] = 2;
        v76 = v346;
        v77 = *v346;
        *v346 = v77 + 1;
        *(_QWORD *)&v76[8 * v77 + 16] = v68;
        goto LABEL_26;
      }
      v69 = v347;
      v70 = *(_DWORD *)(v347 + 14976);
      if ( v70 )
      {
        v71 = (unsigned int)(v70 - 1);
        *(_DWORD *)(v347 + 14976) = v71;
        v67 = *(unsigned __int8 **)(v69 + 8 * v71 + 14848);
        v72 = *((unsigned int *)v67 + 134);
        *v67 = 0;
        v73 = *((_QWORD *)v67 + 66);
        *((_DWORD *)v67 + 106) = 0;
        v74 = v73 + (v72 << 6);
        while ( v73 != v74 )
        {
          while ( 1 )
          {
            v74 -= 64;
            v75 = *(void **)(v74 + 24);
            if ( v75 == (void *)(v74 + 40) )
              break;
            operator delete(v75);
            if ( v73 == v74 )
              goto LABEL_51;
          }
        }
        goto LABEL_51;
      }
LABEL_177:
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
      *((_QWORD *)v67 + 66) = v67 + 544;
      *((_QWORD *)v67 + 67) = 0x600000000LL;
      goto LABEL_52;
    }
    if ( !v350 )
      goto LABEL_26;
    v208 = sub_168B9E0(&ptr);
    v211 = v345[0];
    if ( v345[0] )
      v211 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v345[0] + 32LL))(v345[0]);
    v342 = v211;
    v212 = sub_1587BC0(v208, &v342, v206, v207, v209, v210);
    v174 = v308;
    v175 = *v212 + 32LL * v349;
    v176 = *(unsigned __int8 **)(v175 + 8);
    if ( v176 )
    {
LABEL_135:
      v176[*v176 + 1] = 2;
      v177 = *(_BYTE **)(v175 + 8);
      v178 = (unsigned __int8)*v177;
      *v177 = v178 + 1;
      *(_QWORD *)&v177[8 * v178 + 16] = v174;
      goto LABEL_26;
    }
    v213 = *(_QWORD *)(v175 + 16);
    v214 = *(_DWORD *)(v213 + 14976);
    if ( v214 )
    {
      v215 = (unsigned int)(v214 - 1);
      *(_DWORD *)(v213 + 14976) = v215;
      v176 = *(unsigned __int8 **)(v213 + 8 * v215 + 14848);
      v216 = *((unsigned int *)v176 + 134);
      *v176 = 0;
      v217 = *((_QWORD *)v176 + 66);
      *((_DWORD *)v176 + 106) = 0;
      v218 = v217 + (v216 << 6);
      while ( v217 != v218 )
      {
        while ( 1 )
        {
          v218 -= 64;
          v219 = *(void **)(v218 + 24);
          if ( v219 == (void *)(v218 + 40) )
            break;
          operator delete(v219);
          if ( v217 == v218 )
            goto LABEL_160;
        }
      }
      goto LABEL_160;
    }
LABEL_184:
    v176 = (unsigned __int8 *)operator new(0x3A0u);
    *v176 = 0;
    *((_QWORD *)v176 + 12) = v176 + 112;
    *((_QWORD *)v176 + 16) = v176 + 144;
    *((_QWORD *)v176 + 20) = v176 + 176;
    *((_QWORD *)v176 + 24) = v176 + 208;
    *((_QWORD *)v176 + 28) = v176 + 240;
    *((_QWORD *)v176 + 32) = v176 + 272;
    *((_QWORD *)v176 + 36) = v176 + 304;
    *((_QWORD *)v176 + 40) = v176 + 336;
    *((_QWORD *)v176 + 44) = v176 + 368;
    *((_QWORD *)v176 + 48) = v176 + 400;
    *((_QWORD *)v176 + 52) = v176 + 432;
    *((_QWORD *)v176 + 13) = 0;
    v176[112] = 0;
    *((_QWORD *)v176 + 17) = 0;
    v176[144] = 0;
    *((_QWORD *)v176 + 21) = 0;
    v176[176] = 0;
    *((_QWORD *)v176 + 25) = 0;
    v176[208] = 0;
    *((_QWORD *)v176 + 29) = 0;
    v176[240] = 0;
    *((_QWORD *)v176 + 33) = 0;
    v176[272] = 0;
    *((_QWORD *)v176 + 37) = 0;
    v176[304] = 0;
    *((_QWORD *)v176 + 41) = 0;
    v176[336] = 0;
    *((_QWORD *)v176 + 45) = 0;
    v176[368] = 0;
    *((_QWORD *)v176 + 49) = 0;
    v176[400] = 0;
    *((_QWORD *)v176 + 53) = 0x800000000LL;
    *((_QWORD *)v176 + 66) = v176 + 544;
    *((_QWORD *)v176 + 67) = 0x600000000LL;
    goto LABEL_161;
  }
LABEL_7:
  v33 = 0;
  v34 = 0;
  if ( v19 )
  {
    while ( 1 )
    {
      v35 = 8 * v33;
      v341 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 96) + 8 * v33) + 48LL);
      v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v341 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v36 + 16) != 34 )
      {
        v37 = (__int64 *)(a1[1] + 8LL);
        v38 = a1[10];
        if ( v33 == 1 )
        {
          v187 = sub_C00A40(*(_QWORD *)(v38 + 32), (__int64)v37, v36, v35, v31);
          sub_168B9F0((__int64)&ptr, v37, v187, 0x1122u, 0);
          sub_1605D30((__int64)&ptr, &v341);
          sub_15F7200(&ptr);
        }
        else
        {
          v39 = sub_C00A40(*(_QWORD *)(v38 + 24), (__int64)v37, v36, v35, v31);
          sub_168B9F0((__int64)&ptr, v37, v39, 0x1120u, 0);
          if ( v348 )
          {
            v183 = v346;
            v184 = v341;
            if ( !v346 )
            {
              v240 = v347;
              v241 = *(_DWORD *)(v347 + 14976);
              if ( v241 )
              {
                v255 = (unsigned int)(v241 - 1);
                *(_DWORD *)(v347 + 14976) = v255;
                v183 = *(unsigned __int8 **)(v240 + 8 * v255 + 14848);
                v256 = *((unsigned int *)v183 + 134);
                *v183 = 0;
                v257 = *((_QWORD *)v183 + 66);
                *((_DWORD *)v183 + 106) = 0;
                v258 = v257 + (v256 << 6);
                while ( v257 != v258 )
                {
                  while ( 1 )
                  {
                    v258 -= 64;
                    v259 = *(void **)(v258 + 24);
                    if ( v259 == (void *)(v258 + 40) )
                      break;
                    v339 = v258;
                    v333 = v183;
                    v326 = v184;
                    operator delete(v259);
                    v258 = v339;
                    v184 = v326;
                    v183 = v333;
                    if ( v257 == v339 )
                      goto LABEL_205;
                  }
                }
LABEL_205:
                *((_DWORD *)v183 + 134) = 0;
              }
              else
              {
                v321 = v341;
                v183 = (unsigned __int8 *)operator new(0x3A0u);
                *v183 = 0;
                *((_QWORD *)v183 + 12) = v183 + 112;
                *((_QWORD *)v183 + 16) = v183 + 144;
                *((_QWORD *)v183 + 20) = v183 + 176;
                *((_QWORD *)v183 + 24) = v183 + 208;
                *((_QWORD *)v183 + 28) = v183 + 240;
                *((_QWORD *)v183 + 32) = v183 + 272;
                *((_QWORD *)v183 + 36) = v183 + 304;
                *((_QWORD *)v183 + 40) = v183 + 336;
                *((_QWORD *)v183 + 44) = v183 + 368;
                *((_QWORD *)v183 + 48) = v183 + 400;
                *((_QWORD *)v183 + 52) = v183 + 432;
                *((_QWORD *)v183 + 13) = 0;
                v183[112] = 0;
                *((_QWORD *)v183 + 17) = 0;
                v183[144] = 0;
                *((_QWORD *)v183 + 21) = 0;
                v183[176] = 0;
                *((_QWORD *)v183 + 25) = 0;
                v183[208] = 0;
                *((_QWORD *)v183 + 29) = 0;
                v183[240] = 0;
                *((_QWORD *)v183 + 33) = 0;
                v183[272] = 0;
                *((_QWORD *)v183 + 37) = 0;
                v183[304] = 0;
                *((_QWORD *)v183 + 41) = 0;
                v183[336] = 0;
                *((_QWORD *)v183 + 45) = 0;
                v183[368] = 0;
                *((_QWORD *)v183 + 49) = 0;
                v183[400] = 0;
                *((_QWORD *)v183 + 53) = 0x800000000LL;
                v184 = v321;
                *((_QWORD *)v183 + 66) = v183 + 544;
                *((_QWORD *)v183 + 67) = 0x600000000LL;
              }
              v346 = v183;
            }
            v183[*v183 + 1] = 8;
            v185 = v346;
            v186 = *v346;
            *v346 = v186 + 1;
            *(_QWORD *)&v185[8 * v186 + 16] = v184;
          }
          else if ( v350 )
          {
            v149 = sub_168B9E0(&ptr);
            v153 = v345[0];
            if ( v345[0] )
            {
              v317 = v149;
              v153 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v345[0] + 32LL))(v345[0]);
              v149 = v317;
            }
            v342 = v153;
            v154 = sub_1587BC0(v149, &v342, v149, v150, v151, v152);
            v155 = v341;
            v156 = *v154 + 32LL * v349;
            v157 = *(unsigned __int8 **)(v156 + 8);
            if ( !v157 )
            {
              v246 = *(_QWORD *)(v156 + 16);
              v247 = *(_DWORD *)(v246 + 14976);
              if ( v247 )
              {
                v274 = (unsigned int)(v247 - 1);
                *(_DWORD *)(v246 + 14976) = v274;
                v157 = *(unsigned __int8 **)(v246 + 8 * v274 + 14848);
                v275 = *((unsigned int *)v157 + 134);
                *v157 = 0;
                v276 = *((_QWORD *)v157 + 66);
                *((_DWORD *)v157 + 106) = 0;
                v277 = v276 + (v275 << 6);
                v328 = v276;
                while ( v328 != v277 )
                {
                  while ( 1 )
                  {
                    v277 -= 64;
                    v278 = *(void **)(v277 + 24);
                    if ( v278 == (void *)(v277 + 40) )
                      break;
                    v340 = v157;
                    v338 = v155;
                    v335 = v156;
                    operator delete(v278);
                    v156 = v335;
                    v155 = v338;
                    v157 = v340;
                    if ( v328 == v277 )
                      goto LABEL_227;
                  }
                }
LABEL_227:
                *((_DWORD *)v157 + 134) = 0;
              }
              else
              {
                v330 = v341;
                v323 = v156;
                v157 = (unsigned __int8 *)operator new(0x3A0u);
                *v157 = 0;
                *((_QWORD *)v157 + 12) = v157 + 112;
                *((_QWORD *)v157 + 16) = v157 + 144;
                *((_QWORD *)v157 + 20) = v157 + 176;
                *((_QWORD *)v157 + 24) = v157 + 208;
                *((_QWORD *)v157 + 28) = v157 + 240;
                *((_QWORD *)v157 + 32) = v157 + 272;
                *((_QWORD *)v157 + 36) = v157 + 304;
                *((_QWORD *)v157 + 40) = v157 + 336;
                *((_QWORD *)v157 + 44) = v157 + 368;
                *((_QWORD *)v157 + 48) = v157 + 400;
                *((_QWORD *)v157 + 52) = v157 + 432;
                *((_QWORD *)v157 + 13) = 0;
                v157[112] = 0;
                *((_QWORD *)v157 + 17) = 0;
                v157[144] = 0;
                *((_QWORD *)v157 + 21) = 0;
                v157[176] = 0;
                *((_QWORD *)v157 + 25) = 0;
                v157[208] = 0;
                *((_QWORD *)v157 + 29) = 0;
                v157[240] = 0;
                *((_QWORD *)v157 + 33) = 0;
                v157[272] = 0;
                *((_QWORD *)v157 + 37) = 0;
                v157[304] = 0;
                *((_QWORD *)v157 + 41) = 0;
                v157[336] = 0;
                *((_QWORD *)v157 + 45) = 0;
                v157[368] = 0;
                *((_QWORD *)v157 + 49) = 0;
                v157[400] = 0;
                *((_QWORD *)v157 + 53) = 0x800000000LL;
                v156 = v323;
                *((_QWORD *)v157 + 66) = v157 + 544;
                v155 = v330;
                *((_QWORD *)v157 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v156 + 8) = v157;
            }
            v157[*v157 + 1] = 8;
            v158 = *(_BYTE **)(v156 + 8);
            v159 = (unsigned __int8)*v158;
            *v158 = v159 + 1;
            *(_QWORD *)&v158[8 * v159 + 16] = v155;
          }
          sub_15F7200(&ptr);
        }
        sub_168B9F0(
          (__int64)&ptr,
          (__int64 *)(a1[1] + 8LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[15] + 96LL) + 8 * v33) + 24LL),
          0x1876u,
          0);
        if ( v348 )
        {
          v179 = v346;
          v180 = v341;
          if ( !v346 )
          {
            v238 = v347;
            v239 = *(_DWORD *)(v347 + 14976);
            if ( v239 )
            {
              v248 = (unsigned int)(v239 - 1);
              *(_DWORD *)(v347 + 14976) = v248;
              v179 = *(unsigned __int8 **)(v238 + 8 * v248 + 14848);
              v249 = *((unsigned int *)v179 + 134);
              *v179 = 0;
              v250 = *((_QWORD *)v179 + 66);
              *((_DWORD *)v179 + 106) = 0;
              v251 = v250 + (v249 << 6);
              while ( v250 != v251 )
              {
                while ( 1 )
                {
                  v251 -= 64;
                  v252 = *(void **)(v251 + 24);
                  if ( v252 == (void *)(v251 + 40) )
                    break;
                  v336 = v251;
                  v331 = v179;
                  v324 = v180;
                  operator delete(v252);
                  v251 = v336;
                  v180 = v324;
                  v179 = v331;
                  if ( v250 == v336 )
                    goto LABEL_194;
                }
              }
LABEL_194:
              *((_DWORD *)v179 + 134) = 0;
            }
            else
            {
              v310 = v341;
              v179 = (unsigned __int8 *)operator new(0x3A0u);
              *v179 = 0;
              *((_QWORD *)v179 + 12) = v179 + 112;
              *((_QWORD *)v179 + 16) = v179 + 144;
              *((_QWORD *)v179 + 20) = v179 + 176;
              *((_QWORD *)v179 + 24) = v179 + 208;
              *((_QWORD *)v179 + 28) = v179 + 240;
              *((_QWORD *)v179 + 32) = v179 + 272;
              *((_QWORD *)v179 + 36) = v179 + 304;
              *((_QWORD *)v179 + 40) = v179 + 336;
              *((_QWORD *)v179 + 44) = v179 + 368;
              *((_QWORD *)v179 + 48) = v179 + 400;
              *((_QWORD *)v179 + 52) = v179 + 432;
              *((_QWORD *)v179 + 13) = 0;
              v179[112] = 0;
              *((_QWORD *)v179 + 17) = 0;
              v179[144] = 0;
              *((_QWORD *)v179 + 21) = 0;
              v179[176] = 0;
              *((_QWORD *)v179 + 25) = 0;
              v179[208] = 0;
              *((_QWORD *)v179 + 29) = 0;
              v179[240] = 0;
              *((_QWORD *)v179 + 33) = 0;
              v179[272] = 0;
              *((_QWORD *)v179 + 37) = 0;
              v179[304] = 0;
              *((_QWORD *)v179 + 41) = 0;
              v179[336] = 0;
              *((_QWORD *)v179 + 45) = 0;
              v179[368] = 0;
              *((_QWORD *)v179 + 49) = 0;
              v179[400] = 0;
              *((_QWORD *)v179 + 53) = 0x800000000LL;
              v180 = v310;
              *((_QWORD *)v179 + 66) = v179 + 544;
              *((_QWORD *)v179 + 67) = 0x600000000LL;
            }
            v346 = v179;
          }
          v179[*v179 + 1] = 8;
          v181 = v346;
          v182 = *v346;
          *v346 = v182 + 1;
          *(_QWORD *)&v181[8 * v182 + 16] = v180;
        }
        else if ( v350 )
        {
          v138 = sub_168B9E0(&ptr);
          v142 = v345[0];
          if ( v345[0] )
          {
            v309 = v138;
            v142 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v345[0] + 32LL))(v345[0]);
            v138 = v309;
          }
          v342 = v142;
          v143 = sub_1587BC0(v138, &v342, v138, v139, v140, v141);
          v144 = v341;
          v145 = *v143 + 32LL * v349;
          v146 = *(unsigned __int8 **)(v145 + 8);
          if ( !v146 )
          {
            v244 = *(_QWORD *)(v145 + 16);
            v245 = *(_DWORD *)(v244 + 14976);
            if ( v245 )
            {
              v269 = (unsigned int)(v245 - 1);
              *(_DWORD *)(v244 + 14976) = v269;
              v146 = *(unsigned __int8 **)(v244 + 8 * v269 + 14848);
              v270 = *((unsigned int *)v146 + 134);
              *v146 = 0;
              v271 = *((_QWORD *)v146 + 66);
              *((_DWORD *)v146 + 106) = 0;
              v272 = v271 + (v270 << 6);
              v313 = v271;
              while ( v313 != v272 )
              {
                while ( 1 )
                {
                  v272 -= 64;
                  v273 = *(void **)(v272 + 24);
                  if ( v273 == (void *)(v272 + 40) )
                    break;
                  v337 = v144;
                  v334 = v145;
                  v327 = v146;
                  operator delete(v273);
                  v146 = v327;
                  v145 = v334;
                  v144 = v337;
                  if ( v313 == v272 )
                    goto LABEL_221;
                }
              }
LABEL_221:
              *((_DWORD *)v146 + 134) = 0;
            }
            else
            {
              v322 = v341;
              v311 = v145;
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
              v145 = v311;
              *((_QWORD *)v146 + 66) = v146 + 544;
              v144 = v322;
              *((_QWORD *)v146 + 67) = 0x600000000LL;
            }
            *(_QWORD *)(v145 + 8) = v146;
          }
          v146[*v146 + 1] = 8;
          v147 = *(_BYTE **)(v145 + 8);
          v148 = (unsigned __int8)*v147;
          *v147 = v148 + 1;
          *(_QWORD *)&v147[8 * v148 + 16] = v144;
        }
        sub_15F7200(&ptr);
        v34 = 1;
      }
      if ( v33 == 1 )
        return v34 ^ 1u;
      v29 = a1[15];
      v33 = 1;
    }
  }
  v341 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 96) + 8LL) + 48LL);
  v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v341 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v79 = *(_BYTE *)(v78 + 16);
  if ( v79 == 13 )
  {
    v80 = *(unsigned __int16 *)(v78 + 18);
    result = 1;
    LOWORD(v80) = (unsigned __int16)v80 >> 3;
    v30 = (unsigned int)(v80 + 76);
    LOWORD(v30) = v30 & 0x1FF;
    if ( (unsigned __int16)v30 <= 0x13u )
      goto LABEL_57;
    goto LABEL_56;
  }
  if ( v79 == 47 )
  {
    v118 = sub_F60F10(v78, (__int64)v26, v29, v30, v31, v32);
    if ( (*((_BYTE *)v118 + 74) & 1) != 0 || (v118[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v29 = a1[15];
      result = 1;
      goto LABEL_57;
    }
LABEL_56:
    v81 = (__int64 *)(a1[1] + 8LL);
    v82 = sub_C00A40(*(_QWORD *)(a1[10] + 32LL), (__int64)v26, v29, v30, v31);
    sub_168B9F0((__int64)&ptr, v81, v82, 0x1121u, 0);
    sub_1605D30((__int64)&ptr, &v341);
    sub_15F7200(&ptr);
    sub_168B9F0(
      (__int64)&ptr,
      (__int64 *)(a1[1] + 8LL),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1[15] + 96LL) + 8LL) + 24LL),
      0x1876u,
      0);
    v26 = &v341;
    sub_1605D30((__int64)&ptr, &v341);
    sub_15F7200(&ptr);
    v29 = a1[15];
    result = 0;
    goto LABEL_57;
  }
  if ( v79 != 10 )
    goto LABEL_56;
  result = 1;
LABEL_57:
  v341 = *(_QWORD *)(**(_QWORD **)(v29 + 96) + 48LL);
  v83 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v341 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v83 + 16) != 34 )
  {
    v84 = (__int64 *)(a1[1] + 8LL);
    v85 = sub_C00A40(*(_QWORD *)(a1[10] + 24LL), (__int64)v26, v83, v30, v31);
    sub_168B9F0((__int64)&ptr, v84, v85, 0x1124u, 0);
    v86 = sub_1605D30((__int64)&ptr, &v341);
    v87 = v86;
    if ( *(_BYTE *)(v86 + 120) )
    {
      v135 = *(unsigned __int8 **)(v86 + 32);
      if ( !v135 )
      {
        v242 = *(_QWORD *)(v86 + 40);
        v243 = *(_DWORD *)(v242 + 14976);
        if ( v243 )
        {
          v264 = (unsigned int)(v243 - 1);
          *(_DWORD *)(v242 + 14976) = v264;
          v135 = *(unsigned __int8 **)(v242 + 8 * v264 + 14848);
          v265 = *((unsigned int *)v135 + 134);
          v266 = *((_QWORD *)v135 + 66);
          *v135 = 0;
          *((_DWORD *)v135 + 106) = 0;
          v265 <<= 6;
          v312 = v266;
          v267 = v266 + v265;
          while ( v312 != v267 )
          {
            while ( 1 )
            {
              v267 -= 64;
              v268 = *(void **)(v267 + 24);
              if ( v268 == (void *)(v267 + 40) )
                break;
              operator delete(v268);
              if ( v312 == v267 )
                goto LABEL_215;
            }
          }
LABEL_215:
          *((_DWORD *)v135 + 134) = 0;
        }
        else
        {
          v135 = (unsigned __int8 *)operator new(0x3A0u);
          *v135 = 0;
          *((_QWORD *)v135 + 12) = v135 + 112;
          *((_QWORD *)v135 + 16) = v135 + 144;
          *((_QWORD *)v135 + 20) = v135 + 176;
          *((_QWORD *)v135 + 24) = v135 + 208;
          *((_QWORD *)v135 + 28) = v135 + 240;
          *((_QWORD *)v135 + 32) = v135 + 272;
          *((_QWORD *)v135 + 36) = v135 + 304;
          *((_QWORD *)v135 + 40) = v135 + 336;
          *((_QWORD *)v135 + 44) = v135 + 368;
          *((_QWORD *)v135 + 48) = v135 + 400;
          *((_QWORD *)v135 + 52) = v135 + 432;
          *((_QWORD *)v135 + 13) = 0;
          v135[112] = 0;
          *((_QWORD *)v135 + 17) = 0;
          v135[144] = 0;
          *((_QWORD *)v135 + 21) = 0;
          v135[176] = 0;
          *((_QWORD *)v135 + 25) = 0;
          v135[208] = 0;
          *((_QWORD *)v135 + 29) = 0;
          v135[240] = 0;
          *((_QWORD *)v135 + 33) = 0;
          v135[272] = 0;
          *((_QWORD *)v135 + 37) = 0;
          v135[304] = 0;
          *((_QWORD *)v135 + 41) = 0;
          v135[336] = 0;
          *((_QWORD *)v135 + 45) = 0;
          v135[368] = 0;
          *((_QWORD *)v135 + 49) = 0;
          v135[400] = 0;
          *((_QWORD *)v135 + 53) = 0x800000000LL;
          *((_QWORD *)v135 + 66) = v135 + 544;
          *((_QWORD *)v135 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v87 + 32) = v135;
      }
      v135[*v135 + 1] = 2;
      v136 = *(_BYTE **)(v87 + 32);
      v137 = (unsigned __int8)*v136;
      *v136 = v137 + 1;
      *(_QWORD *)&v136[8 * v137 + 16] = 1;
    }
    else if ( *(_BYTE *)(v86 + 132) )
    {
      v197 = sub_168B9E0((_QWORD *)v86);
      v198 = *(_QWORD *)(v87 + 16);
      if ( v198 )
        v198 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v198 + 32LL))(*(_QWORD *)(v87 + 16));
      v342 = v198;
      v199 = *sub_1587BC0(v197, &v342, v193, v194, v195, v196) + 32LL * *(unsigned int *)(v87 + 128);
      v200 = *(unsigned __int8 **)(v199 + 8);
      if ( !v200 )
      {
        v253 = *(_QWORD *)(v199 + 16);
        v254 = *(_DWORD *)(v253 + 14976);
        if ( v254 )
        {
          v283 = (unsigned int)(v254 - 1);
          *(_DWORD *)(v253 + 14976) = v283;
          v200 = *(unsigned __int8 **)(v253 + 8 * v283 + 14848);
          v284 = *((unsigned int *)v200 + 134);
          *v200 = 0;
          v285 = *((_QWORD *)v200 + 66);
          *((_DWORD *)v200 + 106) = 0;
          v286 = v285 + (v284 << 6);
          while ( v285 != v286 )
          {
            while ( 1 )
            {
              v286 -= 64;
              v287 = *(void **)(v286 + 24);
              if ( v287 == (void *)(v286 + 40) )
                break;
              v314 = v285;
              operator delete(v287);
              v285 = v314;
              if ( v314 == v286 )
                goto LABEL_240;
            }
          }
LABEL_240:
          *((_DWORD *)v200 + 134) = 0;
        }
        else
        {
          v200 = (unsigned __int8 *)operator new(0x3A0u);
          *v200 = 0;
          *((_QWORD *)v200 + 12) = v200 + 112;
          *((_QWORD *)v200 + 16) = v200 + 144;
          *((_QWORD *)v200 + 20) = v200 + 176;
          *((_QWORD *)v200 + 24) = v200 + 208;
          *((_QWORD *)v200 + 28) = v200 + 240;
          *((_QWORD *)v200 + 32) = v200 + 272;
          *((_QWORD *)v200 + 36) = v200 + 304;
          *((_QWORD *)v200 + 40) = v200 + 336;
          *((_QWORD *)v200 + 44) = v200 + 368;
          *((_QWORD *)v200 + 48) = v200 + 400;
          *((_QWORD *)v200 + 52) = v200 + 432;
          *((_QWORD *)v200 + 13) = 0;
          v200[112] = 0;
          *((_QWORD *)v200 + 17) = 0;
          v200[144] = 0;
          *((_QWORD *)v200 + 21) = 0;
          v200[176] = 0;
          *((_QWORD *)v200 + 25) = 0;
          v200[208] = 0;
          *((_QWORD *)v200 + 29) = 0;
          v200[240] = 0;
          *((_QWORD *)v200 + 33) = 0;
          v200[272] = 0;
          *((_QWORD *)v200 + 37) = 0;
          v200[304] = 0;
          *((_QWORD *)v200 + 41) = 0;
          v200[336] = 0;
          *((_QWORD *)v200 + 45) = 0;
          v200[368] = 0;
          *((_QWORD *)v200 + 49) = 0;
          v200[400] = 0;
          *((_QWORD *)v200 + 53) = 0x800000000LL;
          *((_QWORD *)v200 + 66) = v200 + 544;
          *((_QWORD *)v200 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v199 + 8) = v200;
      }
      v200[*v200 + 1] = 2;
      v201 = *(_BYTE **)(v199 + 8);
      v202 = (unsigned __int8)*v201;
      *v201 = v202 + 1;
      *(_QWORD *)&v201[8 * v202 + 16] = 1;
    }
    sub_15F7200(&ptr);
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1[1] + 8LL), *(_DWORD *)(**(_QWORD **)(a1[15] + 96LL) + 24LL), 0x1876u, 0);
    sub_1605D30((__int64)&ptr, &v341);
    goto LABEL_26;
  }
  return result;
}
