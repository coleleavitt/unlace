unsigned __int64 __fastcall sub_E53C20(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r13
  __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128 si128; // xmm0
  unsigned __int64 v14; // r12
  __int64 v15; // rdi
  _BYTE *v16; // rax
  __int64 v17; // rdi
  _BYTE *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  _BYTE *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // r13
  unsigned int v36; // r12d
  bool v37; // al
  unsigned int v38; // eax
  unsigned int v39; // r12d
  bool v40; // al
  __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // r12
  unsigned __int64 v44; // rax
  char v45; // al
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rdx
  bool v49; // r14
  __int64 v50; // rbx
  unsigned __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // r12d
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r12
  __int64 v58; // r14
  __int64 i; // r14
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r13
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r15
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  _QWORD *v73; // rcx
  __int64 v74; // r15
  unsigned __int64 *v75; // rsi
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rdx
  __int64 v78; // r14
  __int64 v79; // rdx
  __int64 v80; // r14
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v83; // r12d
  __int64 v84; // rax
  __int64 v85; // r12
  __int64 v86; // r13
  __int64 v87; // r13
  __int64 v88; // r12
  __int64 v89; // r13
  __int64 v90; // rdx
  __int64 v91; // r15
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  _QWORD *v94; // rcx
  __int64 v95; // rdi
  __int64 v96; // r8
  __int64 v97; // r15
  __int64 v98; // rax
  __int64 v99; // rsi
  unsigned __int64 v100; // rdx
  _QWORD *v101; // rcx
  __int64 v102; // rdi
  __int64 v103; // r8
  __int64 v104; // r14
  unsigned __int64 v105; // rsi
  __int64 v106; // rax
  unsigned __int64 v107; // rsi
  unsigned __int64 v108; // rax
  unsigned __int64 v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // r14
  unsigned __int64 v112; // rdx
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  unsigned __int64 v115; // rax
  _DWORD *v116; // rax
  __int64 v117; // rdi
  int v118; // edx
  __int64 v119; // r14
  unsigned __int64 v120; // rdx
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rax
  _DWORD *v124; // rsi
  __int64 *v125; // rdi
  int v126; // eax
  __int64 v127; // rax
  _DWORD *v128; // rdx
  __int64 *v129; // rdi
  int v130; // eax
  __int64 v131; // rax
  __int64 v132; // rcx
  __int64 v133; // r8
  unsigned __int64 v134; // r13
  unsigned __int64 v135; // r15
  _QWORD **v136; // r14
  _QWORD *v137; // rax
  unsigned __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  unsigned __int64 v141; // rsi
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rax
  __int64 v147; // r13
  __int64 **v148; // r12
  __int64 v149; // r15
  __int64 v150; // rdi
  __int64 v151; // r14
  __int64 v152; // rdx
  __int64 v153; // r13
  __int64 v154; // r15
  __int64 v155; // r12
  unsigned int v156; // eax
  __int64 v157; // rdi
  _BYTE *v158; // rax
  __int64 v159; // rdi
  _BYTE *v160; // rax
  const char *v161; // rsi
  __int64 v162; // rax
  unsigned __int64 v163; // rdx
  char v164; // dl
  __int64 v165; // rax
  bool v166; // al
  __int64 v167; // rdx
  __int64 v168; // rcx
  __int64 v169; // r8
  __int64 v170; // rax
  int v171; // r12d
  __int64 v172; // rax
  __int64 v173; // r13
  unsigned __int64 v174; // r15
  __int64 v175; // rdi
  unsigned __int64 v176; // r13
  _BYTE *v177; // rax
  unsigned __int64 v178; // rsi
  __int64 v179; // rdi
  _BYTE *v180; // rax
  __int64 v181; // rax
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  __int64 v185; // rdx
  void **v186; // rbx
  void **v187; // r13
  __int8 v188; // al
  unsigned __int64 v189; // r12
  __int64 v190; // r15
  __int64 v191; // rdx
  unsigned __int8 v192; // dl
  int v193; // edx
  int v194; // eax
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // r13
  __int64 v198; // rax
  __int8 v199; // al
  __int64 v200; // rax
  _BYTE *v201; // rdx
  __int64 v202; // rdx
  __int64 v203; // rdi
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // r8
  unsigned __int64 v207; // rax
  __int64 v208; // rsi
  void **v209; // r15
  unsigned __int64 v210; // rax
  __int64 v211; // rcx
  __int64 v212; // r8
  char v213; // r15
  __int64 v214; // rdx
  __int64 v215; // rax
  unsigned __int64 v216; // r15
  unsigned __int64 v217; // rdx
  unsigned __int64 v218; // rdx
  __int64 v219; // rdi
  _BYTE *v220; // rax
  __int64 v221; // rax
  __int64 v222; // r8
  __int64 v223; // r9
  __int64 v224; // rdi
  _BYTE *v225; // rax
  __int64 v226; // rdx
  __int64 v227; // rdx
  __int64 v228; // r12
  unsigned __int64 v229; // r13
  __int64 v230; // rdx
  __int64 v231; // rcx
  __int64 v232; // r8
  __int64 v233; // rax
  __int64 v234; // rdi
  __int64 v235; // r15
  __int64 v236; // rdx
  __int64 v237; // rdx
  __m128 v238; // [rsp+0h] [rbp-138h] BYREF
  _QWORD *v239; // [rsp+10h] [rbp-128h]
  void **v240; // [rsp+18h] [rbp-120h]
  void **p_ptr; // [rsp+20h] [rbp-118h]
  unsigned __int8 v242; // [rsp+2Ch] [rbp-10Ch]
  char v243; // [rsp+37h] [rbp-101h] BYREF
  __int64 v244; // [rsp+38h] [rbp-100h] BYREF
  _QWORD v245[2]; // [rsp+40h] [rbp-F8h] BYREF
  __m128 v246; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v247; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v249; // [rsp+78h] [rbp-C0h]
  char v250; // [rsp+80h] [rbp-B8h] BYREF

  v5 = a5;
  v242 = a4;
  v238.m128_u64[0] = (unsigned __int64)&v243;
  v8 = *a1;
  v244 = 0;
  v9 = *(_QWORD **)(v8 + 8);
  v238 = _mm_loadh_ps((const double *)v238.m128_u64);
  result = sub_A725A0(v9, a2, &v244, a4, a5);
  si128 = (__m128)_mm_load_si128((const __m128i *)&v238);
  v243 = 1;
  v247 = a1;
  v246 = si128;
  v14 = result;
  switch ( *(_DWORD *)a3 )
  {
    case 0:
    case 1:
      v15 = a1[1];
      v16 = *(_BYTE **)(v15 + 32);
      if ( *(_QWORD *)(v15 + 24) <= (unsigned __int64)v16 )
      {
        sub_227BA10(v15, 76);
      }
      else
      {
        *(_QWORD *)(v15 + 32) = v16 + 1;
        *v16 = 76;
      }
      sub_E3FB80(a1, v14);
      v17 = a1[1];
      v18 = *(_BYTE **)(v17 + 32);
      if ( *(_QWORD *)(v17 + 24) <= (unsigned __int64)v18 )
        goto LABEL_51;
      goto LABEL_5;
    case 2:
      sub_E47200((__int64)a1, result, a3 + 8);
      result = v242;
      goto LABEL_7;
    case 3:
      sub_E47180((__int64)a1, result, (_QWORD *)(a3 + 8));
      result = v242;
      goto LABEL_7;
    case 4:
      sub_E397E0(*a1);
      result = v242;
      goto LABEL_7;
    case 5:
      v35 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v35 + 16) != 14 )
        v35 = sub_F63050(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12);
      sub_E38220((__int64)&v246);
      sub_995540(a1[1], "tl");
      sub_E3FB80(a1, v14);
      v36 = *(_DWORD *)(a3 + 16);
      if ( v36 <= 0x40 )
        v37 = *(_QWORD *)(a3 + 8) == 0;
      else
        v37 = v36 == (unsigned int)sub_2206780(a3 + 8);
      if ( !v37 )
        goto LABEL_184;
      if ( *(_DWORD *)(a3 + 32) <= 0x40u )
      {
        v162 = *(_QWORD *)(a3 + 24);
        if ( !v162 )
        {
LABEL_195:
          v40 = v162 == 0;
LABEL_38:
          if ( !v40 )
            sub_E47200((__int64)a1, *(_QWORD *)(v35 + 32), a3 + 24);
          goto LABEL_50;
        }
      }
      else
      {
        v238.m128_i32[0] = *(_DWORD *)(a3 + 32);
        v38 = sub_2206780(a3 + 24);
        v39 = v38;
        if ( v238.m128_i32[0] == v38 )
        {
LABEL_37:
          v40 = v39 == v38;
          goto LABEL_38;
        }
      }
LABEL_184:
      sub_E47200((__int64)a1, *(_QWORD *)(v35 + 32), a3 + 8);
      v39 = *(_DWORD *)(a3 + 32);
      if ( v39 > 0x40 )
      {
        v38 = sub_2206780(a3 + 24);
        goto LABEL_37;
      }
      v162 = *(_QWORD *)(a3 + 24);
      goto LABEL_195;
    case 6:
      v41 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v41 + 16) != 14 )
        v41 = sub_F63050(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12);
      sub_E38220((__int64)&v246);
      sub_995540(a1[1], "tl");
      sub_E3FB80(a1, v14);
      v43 = sub_21F90D0(a1, v14, v42);
      v44 = a3 + 8;
      if ( *(_QWORD *)(a3 + 8) == v43 )
        v44 = *(_QWORD *)(a3 + 16);
      v45 = *(_BYTE *)(v44 + 20);
      if ( (v45 & 7) != 3 || (v45 & 8) != 0 )
        goto LABEL_45;
      v46 = *(_QWORD *)(a3 + 32);
      v163 = a3 + 32;
      if ( v43 == v46 )
        v163 = *(_QWORD *)(a3 + 40);
      v164 = *(_BYTE *)(v163 + 20);
      if ( (v164 & 7) != 3 || (v164 & 8) != 0 )
      {
LABEL_45:
        sub_E47180((__int64)a1, *(_QWORD *)(v41 + 32), (_QWORD *)(a3 + 8));
        v46 = *(_QWORD *)(a3 + 32);
      }
      v47 = a3 + 32;
      if ( v43 == v46 )
        v47 = *(_QWORD *)(a3 + 40);
      if ( (*(_BYTE *)(v47 + 20) & 7) != 3 || (*(_BYTE *)(v47 + 20) & 8) != 0 )
        sub_E47180((__int64)a1, *(_QWORD *)(v41 + 32), (_QWORD *)(a3 + 32));
      goto LABEL_50;
    case 7:
      if ( (unsigned __int8)sub_A510C0(a3) )
        goto LABEL_103;
      v245[0] = sub_A51060(a3);
      v245[1] = v48;
      v239 = v245;
      v49 = sub_A4F700(v245);
      if ( !v49 )
      {
        v50 = *(_QWORD *)sub_A51080(a3);
        if ( v50 )
        {
          sub_995540(a1[1], "L");
          sub_E3FB80(a1, v14);
          v200 = sub_227B930(a1[1], v50);
          v201 = *(_BYTE **)(v200 + 32);
          if ( (unsigned __int64)v201 >= *(_QWORD *)(v200 + 24) )
          {
            sub_227BA10(v200, 69);
          }
          else
          {
            *(_QWORD *)(v200 + 32) = v201 + 1;
            *v201 = 69;
          }
          result = v242;
          goto LABEL_7;
        }
        sub_E38220((__int64)&v246);
        sub_995540(a1[1], "rc");
        sub_E3FB80(a1, v14);
        result = sub_995540(a1[1], "Li0E");
        if ( !v242 )
          return result;
        goto LABEL_50;
      }
      v240 = *(void ***)(*a1 + 8);
      v166 = sub_A51090(a3);
      v238.m128_u64[0] = v14 & 0xFFFFFFFFFFFFFFF0LL;
      if ( !v166 )
      {
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
        {
          sub_E38220((__int64)&v246);
          sub_995540(a1[1], "cv");
          sub_E3FB80(a1, v14);
        }
        else
        {
          sub_E38220((__int64)&v246);
          sub_995540(a1[1], "decvP");
          v170 = sub_F68450(*(_QWORD *)v238.m128_u64[0], "decvP", v167, v168, v169);
          sub_E3FB80(a1, v170);
        }
        v171 = 1;
        sub_995540(a1[1], "plcvPcad");
        goto LABEL_215;
      }
      if ( v242 && *((_BYTE *)v240[290] + 212) <= 0x5Fu )
      {
        v234 = a3;
        v235 = sub_A4F310(v239);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v235 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) <= 4u )
        {
          sub_A510A0(a3);
          v234 = a3;
          if ( v236 == 1 )
          {
            if ( !*(_QWORD *)sub_A510A0(a3) )
            {
              v208 = v235;
              v209 = v240;
              v210 = sub_A75D20(v240, v208);
              v213 = sub_AC0070(v209, v14, v210, v211, v212);
              sub_A510A0(a3);
              if ( (v214 || sub_A51070(a3)) && !v213 )
                goto LABEL_263;
LABEL_271:
              if ( v5 )
              {
                v229 = sub_E382E0(v240, a3);
                v233 = sub_F68450(*(_QWORD *)v238.m128_u64[0], a3, v230, v231, v232);
                if ( (*(_QWORD *)&byte_8[v233 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                    | ((unsigned __int8)*(_QWORD *)&byte_8[v233 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v233) & 7) != (*(_QWORD *)&byte_8[v229 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v229 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v229) & 7)
                  && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x5Fu )
                {
                  sub_E38220((__int64)&v246);
                  sub_995540(a1[1], "cv");
                  sub_E3FB80(a1, v14);
                }
              }
              v171 = 0;
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v238.m128_u64[0] + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
              {
                sub_E38220((__int64)&v246);
                sub_995540(a1[1], "ad");
              }
LABEL_215:
              v172 = sub_A4F310(v239);
              v173 = v245[0];
              v174 = v172;
              if ( (v245[0] & 3) != 0 )
              {
                if ( (v245[0] & 3) == 1 )
                {
                  sub_E38220((__int64)&v246);
                  v178 = v173 & 0xFFFFFFFFFFFFFFFCLL;
                  sub_E486B0(
                    (__int64)a1,
                    (unsigned __int16 *)(v173 & 0xFFFFFFFFFFFFFFFCLL),
                    (unsigned __int16 *)0xFFFFFFFFLL,
                    0,
                    v222,
                    v223);
                }
                else
                {
                  sub_E38220((__int64)&v246);
                  sub_995540(a1[1], "ti");
                  v178 = v173 & 0xFFFFFFFFFFFFFFF0LL;
                  sub_E3FB80(a1, v173 & 0xFFFFFFFFFFFFFFF0LL);
                }
              }
              else
              {
                v175 = a1[1];
                v176 = v245[0] & 0xFFFFFFFFFFFFFFFCLL;
                v177 = *(_BYTE **)(v175 + 32);
                if ( (unsigned __int64)v177 >= *(_QWORD *)(v175 + 24) )
                {
                  sub_227BA10(v175, 76);
                }
                else
                {
                  *(_QWORD *)(v175 + 32) = v177 + 1;
                  *v177 = 76;
                }
                v178 = v176;
                sub_E52200((__int64)a1, v176, 0, si128);
                v179 = a1[1];
                v180 = *(_BYTE **)(v179 + 32);
                if ( (unsigned __int64)v180 >= *(_QWORD *)(v179 + 24) )
                {
                  v178 = 69;
                  sub_227BA10(v179, 69);
                }
                else
                {
                  *(_QWORD *)(v179 + 32) = v180 + 1;
                  *v180 = 69;
                }
              }
              if ( v171 == 1 )
              {
                v219 = a1[1];
                v220 = *(_BYTE **)(v219 + 32);
                if ( (unsigned __int64)v220 >= *(_QWORD *)(v219 + 24) )
                {
                  sub_227BA10(v219, 76);
                }
                else
                {
                  *(_QWORD *)(v219 + 32) = v220 + 1;
                  *v220 = 76;
                }
                v221 = sub_A63D20(v240);
                sub_E3FB80(a1, v221);
                v33 = a1 + 1;
                v34 = *(_QWORD *)sub_A51080(a3);
                goto LABEL_26;
              }
              if ( v171 != 2 )
                goto LABEL_6;
              if ( *(_QWORD *)sub_A51080(a3) )
              {
                v178 = *(_QWORD *)sub_A51080(a3);
                sub_E38390(a1 + 1, v178);
              }
              v238.m128_i8[0] = sub_A51070(a3);
              v181 = sub_A510A0(a3);
              v186 = (void **)(v181 + 8 * v185);
              if ( (void **)v181 == v186 )
              {
LABEL_282:
                v17 = a1[1];
                v18 = *(_BYTE **)(v17 + 32);
                v218 = *(_QWORD *)(v17 + 24);
                if ( v238.m128_i8[0] )
                {
                  if ( (unsigned __int64)v18 >= v218 )
                  {
                    sub_227BA10(v17, 112);
                  }
                  else
                  {
                    *(_QWORD *)(v17 + 32) = v18 + 1;
                    *v18 = 112;
                  }
                  v17 = a1[1];
                  v18 = *(_BYTE **)(v17 + 32);
                  v218 = *(_QWORD *)(v17 + 24);
                }
                if ( (unsigned __int64)v18 < v218 )
                  goto LABEL_5;
                goto LABEL_51;
              }
              v187 = (void **)v181;
              p_ptr = &ptr;
              while ( 1 )
              {
                v189 = (unsigned __int64)*v187;
                v190 = *(_QWORD *)(v174 & 0xFFFFFFFFFFFFFFF0LL);
                v191 = *(unsigned __int8 *)(v190 + 16);
                if ( (unsigned __int8)(v191 - 2) > 4u )
                {
                  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v190 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u
                    || (v215 = sub_F63050(v190, v178, v191, v182), (v190 = v215) == 0) )
                  {
                    v216 = v189 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (*(_BYTE *)((v189 & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 49 > 2 )
                    {
                      v178 = v189 & 0xFFFFFFFFFFFFFFF8LL;
                      v174 = sub_A7A9D0((__int64)v240, v189 & 0xFFFFFFFFFFFFFFF8LL, v191, v182, v183, v184);
                    }
                    else
                    {
                      v217 = *(_QWORD *)(v216 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (*(_QWORD *)(v216 + 16) & 4) != 0 )
                        v217 = *(_QWORD *)v217;
                      if ( (*(_BYTE *)(v217 + 8) & 0x7Fu) - 58 > 3 )
                        BUG();
                      if ( *(_BYTE *)(v217 + 9) >> 5 == 2 )
                      {
                        v224 = a1[1];
                        v225 = *(_BYTE **)(v224 + 32);
                        if ( (unsigned __int64)v225 >= *(_QWORD *)(v224 + 24) )
                        {
                          v178 = 95;
                          sub_227BA10(v224, 95);
                        }
                        else
                        {
                          v226 = (__int64)(v225 + 1);
                          *(_QWORD *)(v224 + 32) = v225 + 1;
                          *v225 = 95;
                        }
                        if ( (unsigned int)sub_C1D4D0(v189 & 0xFFFFFFFFFFFFFFF8LL, v178, v226, v182, v183, v184) )
                        {
                          v228 = a1[1];
                          v178 = (unsigned int)sub_C1D4D0(v216, v178, v227, v182, v183, v184) - 1;
                          sub_227B910(v228, v178);
                        }
                      }
                      v174 = *(_QWORD *)(v216 + 48);
                    }
                    goto LABEL_232;
                  }
                  LODWORD(v191) = *(unsigned __int8 *)(v215 + 16);
                }
                if ( (unsigned int)(v191 - 2) <= 1 )
                {
                  v192 = *(_BYTE *)(v190 + 19);
                  v178 = *(_QWORD *)(v190 + 40);
                  if ( (v192 & 2) != 0 )
                  {
                    LODWORD(v249) = *(_DWORD *)(v178 + 8);
                    if ( (unsigned int)v249 <= 0x40 )
                    {
                      ptr = *(void **)v178;
LABEL_228:
                      v188 = v238.m128_i8[0];
                      if ( (void *)v189 == ptr )
                        v188 = v49;
                      v238.m128_i8[0] = v188;
                      goto LABEL_231;
                    }
                    sub_2205510(p_ptr);
                    v193 = v249;
                  }
                  else
                  {
                    v193 = 8 * ((v192 >> 2) & 0x1F);
                    LODWORD(v249) = v193;
                    if ( v193 > 64 )
                    {
                      sub_2205470(p_ptr, v178, 0);
                      v193 = v249;
                    }
                    else
                    {
                      ptr = (void *)v178;
                    }
                  }
                  LODWORD(v239) = v193;
                  if ( (unsigned int)v193 <= 0x40 )
                    goto LABEL_228;
                  v194 = sub_2206780(p_ptr);
                  if ( (unsigned int)((_DWORD)v239 - v194) <= 0x40 )
                  {
                    v199 = v238.m128_i8[0];
                    if ( v189 == *(_QWORD *)ptr )
                      v199 = v49;
                    v238.m128_i8[0] = v199;
LABEL_241:
                    operator delete[](ptr);
                    goto LABEL_231;
                  }
                  if ( ptr )
                    goto LABEL_241;
                }
LABEL_231:
                v174 = *(_QWORD *)(v190 + 32);
LABEL_232:
                if ( v186 == ++v187 )
                  goto LABEL_282;
              }
            }
            v234 = a3;
          }
        }
        sub_A510A0(v234);
        if ( v237 )
        {
LABEL_263:
          sub_E38220((__int64)&v246);
          if ( v5 && (unsigned __int8)sub_F67340(*(_QWORD *)v238.m128_u64[0]) )
          {
            sub_995540(a1[1], "cv");
            sub_E3FB80(a1, v14);
          }
          v203 = a1[1];
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v238.m128_u64[0] + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
          {
            sub_995540(v203, "ad");
            v203 = a1[1];
          }
          sub_995540(v203, "so");
          if ( (unsigned __int8)sub_F67340(*(_QWORD *)v238.m128_u64[0]) )
          {
            ptr = (void *)sub_E382E0(v240, a3);
            v207 = sub_6D5440(&ptr);
          }
          else
          {
            v207 = sub_F68450(*(_QWORD *)v238.m128_u64[0], "so", v204, v205, v206);
          }
          v171 = 2;
          sub_E3FB80(a1, v207);
          goto LABEL_215;
        }
      }
      else
      {
        sub_A510A0(a3);
        if ( v202 )
          goto LABEL_263;
      }
      if ( sub_A51070(a3) )
        goto LABEL_263;
      goto LABEL_271;
    case 8:
      v80 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v80 + 16) - 57 > 1 )
        v80 = sub_F63050(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v12);
      sub_E38220((__int64)&v246);
      sub_995540(a1[1], "tl");
      sub_E3FB80(a1, v14);
      v83 = *(_DWORD *)(a3 + 16);
      if ( !v83 )
        goto LABEL_50;
      v84 = (unsigned int)(v83 - 1);
      v85 = v84;
      v86 = 56 * v84;
      while ( 2 )
      {
        if ( sub_E3BF10(*(_QWORD *)(v80 + 32), v86 + *(_QWORD *)(a3 + 8), v81, v82) )
        {
          v86 -= 56;
          if ( (_DWORD)v85 )
          {
            v85 = (unsigned int)(v85 - 1);
            continue;
          }
        }
        else
        {
          v87 = 7 * (v85 + 1);
          v88 = 0;
          v89 = 8 * v87;
          do
          {
            v90 = v88 + *(_QWORD *)(a3 + 8);
            v88 += 56;
            sub_E53C20(a1, *(_QWORD *)(v80 + 32), v90, 0, 0);
          }
          while ( v89 != v88 );
        }
        break;
      }
      goto LABEL_50;
    case 9:
      v51 = sub_F649E0(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFFF0LL;
      sub_E38220((__int64)&v246);
      sub_995540(a1[1], "tl");
      sub_E3FB80(a1, v14);
      v54 = *(_DWORD *)(a3 + 20);
      v55 = *(unsigned int *)(a3 + 16);
      if ( (_DWORD)v55 == v54 )
        goto LABEL_58;
      if ( sub_E3BF10(v51, *(_QWORD *)(a3 + 8) + 56 * v55, *(_QWORD *)(a3 + 8), v53) )
      {
        v54 = *(_DWORD *)(a3 + 16);
LABEL_58:
        if ( !v54 )
        {
LABEL_109:
          v17 = a1[1];
          v18 = *(_BYTE **)(v17 + 32);
          if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
          {
            sub_227BA10(v17, 69);
            goto LABEL_6;
          }
          goto LABEL_5;
        }
        v56 = (unsigned int)(v54 - 1);
        v57 = v56;
        v58 = 56 * v56;
        while ( sub_E3BF10(v51, v58 + *(_QWORD *)(a3 + 8), v52, v53) )
        {
          v58 -= 56;
          if ( !(_DWORD)v57 )
            goto LABEL_109;
          v57 = (unsigned int)(v57 - 1);
        }
      }
      else
      {
        if ( !v54 )
          goto LABEL_109;
        v57 = (unsigned int)(v54 - 1);
      }
      for ( i = 0; ; ++i )
      {
        v61 = *(unsigned int *)(a3 + 16);
        v60 = (unsigned int)v61 > (unsigned int)i ? 7 * i : 7 * v61;
        sub_E53C20(a1, v51, *(_QWORD *)(a3 + 8) + 8 * v60, 0, 0);
        if ( v57 == i )
          break;
      }
      goto LABEL_109;
    case 0xA:
      v62 = sub_F63270(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL));
      v67 = sub_B7E900(v62, a2, v63, v64, v65, v66);
      v240 = &ptr;
      ptr = &v250;
      v249 = 0x1000000000LL;
      if ( !v67 )
      {
        LODWORD(v249) = 0;
        goto LABEL_112;
      }
      v70 = 0;
      v71 = *(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v71 )
        goto LABEL_75;
      while ( (*(_BYTE *)(v71 + 28) & 0x7Fu) - 49 <= 2 )
      {
LABEL_106:
        ++v70;
        v71 = *(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v71 )
          goto LABEL_75;
      }
      while ( 1 )
      {
        v72 = *(_QWORD *)(v71 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v71 = v72;
        if ( !v72 )
          break;
        if ( (*(_BYTE *)(v72 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_106;
      }
LABEL_75:
      v73 = v240;
      v74 = v70 + 1;
      v75 = (unsigned __int64 *)(v240 + 2);
      if ( v74 > 16 )
      {
        v238.m128_u64[0] = v67;
        sub_2237220(v240, v75, v74, 8);
        v73 = ptr;
        v67 = v238.m128_u64[0];
        v75 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v249);
        LODWORD(v74) = v249 + v74;
      }
      *v75 = v67;
      v76 = *(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v76 )
      {
        while ( (*(_BYTE *)(v76 + 28) & 0x7Fu) - 49 <= 2 )
        {
LABEL_104:
          *++v75 = v76;
          v76 = *(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v76 )
            goto LABEL_82;
        }
        while ( 1 )
        {
          v77 = *(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v76 = v77;
          if ( !v77 )
            break;
          if ( (*(_BYTE *)(v77 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_104;
        }
      }
LABEL_82:
      LODWORD(v249) = v74;
      if ( !(_DWORD)v74 )
        goto LABEL_112;
      while ( 2 )
      {
        v78 = *((_QWORD *)ptr + (unsigned int)v74 - 1);
        if ( (*(_BYTE *)(v78 + 68) & 1) != 0 && !*(_QWORD *)(v78 + 40) )
          goto LABEL_86;
        if ( *(char *)(v78 + 29) < 0 )
          v78 = sub_B72720(*((_QWORD *)ptr + (unsigned int)v74 - 1));
        v79 = *(unsigned int *)(v78 + 68);
        if ( (v79 & 0xFFFFFFF0) == 0 )
        {
          sub_B7EAB0(v78, (__int64)v75, v79, (__int64)v73, v68, v69);
          LODWORD(v79) = *(_DWORD *)(v78 + 68);
        }
        v75 = (unsigned __int64 *)(*(_QWORD *)(a3 + 8) + 56LL * (((unsigned int)v79 >> 4) + *(_DWORD *)(a3 + 16) - 1));
        if ( sub_E3BF10(
               *(_QWORD *)(*((_QWORD *)ptr + (unsigned int)v249 - 1) + 48LL),
               (unsigned __int64)v75,
               (unsigned int)v249,
               (__int64)v73) )
        {
          LODWORD(v74) = v249;
LABEL_86:
          LODWORD(v74) = v74 - 1;
          LODWORD(v249) = v74;
          if ( !(_DWORD)v74 )
            break;
          continue;
        }
        break;
      }
LABEL_112:
      v91 = *(_QWORD *)(v62 + 104);
      v92 = *(_QWORD *)(v91 + 96);
      v93 = v92 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v92 & 1) == 0 )
      {
        v94 = (_QWORD *)(v92 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v92 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v92 & 2) == 0 )
            goto LABEL_115;
          v111 = v94[2295];
          v112 = v91 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v111 )
          {
            v113 = v94[294];
            v94[304] += 24LL;
            v114 = (v113 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v94[295] >= v114 + 24 && v113 )
            {
              v94[294] = v114 + 24;
              v115 = (v113 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v115 = sub_986170((__int64)(v94 + 294), 24, 24, 3, v68, v69);
              v114 = v115 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v115 = v111;
            v112 = v114 | 4;
            *(_DWORD *)(v115 + 8) = 0;
            *(_QWORD *)(v115 + 16) = v91;
          }
          v93 = v112 & 0xFFFFFFFFFFFFFFFELL;
          v92 = v93 | 1;
          *(_QWORD *)(v91 + 96) = v93 | 1;
        }
      }
      if ( v93 )
      {
        if ( (v93 & 4) != 0 )
        {
          v116 = (_DWORD *)(v92 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v116 )
          {
            v117 = *(_QWORD *)v116;
            v118 = *(_DWORD *)(*(_QWORD *)v116 + 12LL);
            if ( v116[2] != v118 )
            {
              v116[2] = v118;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v117 + 152LL))(v117, v91);
            }
          }
        }
      }
LABEL_115:
      v95 = *(_QWORD *)(v62 + 128);
      if ( (*(_BYTE *)(v95 + 24) & 1) != 0 )
        v96 = sub_B96980(v95);
      else
        v96 = *(_QWORD *)(v95 + 24);
      v97 = *(_QWORD *)(v62 + 104);
      v98 = *(_QWORD *)(v97 + 96);
      v99 = v98;
      v100 = v98 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v98 & 1) == 0 )
      {
        v101 = (_QWORD *)(v98 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v98 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v98 & 2) == 0 )
          {
            v102 = *(_QWORD *)(v62 + 128);
            v103 = v96 + 24LL * *(unsigned int *)(v102 + 16);
            goto LABEL_121;
          }
          v119 = v101[2295];
          v120 = v97 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v119 )
          {
            v121 = v101[294];
            v101[304] += 24LL;
            v122 = (v121 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v101[295] >= v122 + 24 && v121 )
            {
              v101[294] = v122 + 24;
              v123 = (v121 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v238.m128_u64[0] = v96;
              v123 = sub_986170((__int64)(v101 + 294), 24, 24, 3, v96, v69);
              v96 = v238.m128_u64[0];
              v122 = v123 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v123 = v119;
            v120 = v122 | 4;
            *(_DWORD *)(v123 + 8) = 0;
            *(_QWORD *)(v123 + 16) = v97;
          }
          v100 = v120 & 0xFFFFFFFFFFFFFFFELL;
          v99 = v100 | 1;
          *(_QWORD *)(v97 + 96) = v100 | 1;
        }
      }
      if ( v100 )
      {
        if ( (v100 & 4) != 0 )
        {
          v124 = (_DWORD *)(v99 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v124 )
          {
            v125 = *(__int64 **)v124;
            v126 = *(_DWORD *)(*(_QWORD *)v124 + 12LL);
            if ( v124[2] != v126 )
            {
              v124[2] = v126;
              v127 = *v125;
              v238.m128_u64[0] = v96;
              (*(void (__fastcall **)(__int64 *, __int64))(v127 + 152))(v125, v97);
              v96 = v238.m128_u64[0];
            }
          }
        }
      }
      v102 = *(_QWORD *)(v62 + 128);
      v97 = *(_QWORD *)(v62 + 104);
      v110 = *(_QWORD *)(v97 + 96);
      v103 = v96 + 24LL * *(unsigned int *)(v102 + 16);
      v109 = v110 & 0xFFFFFFFFFFFFFFFELL;
      LOBYTE(v98) = v110;
      if ( (v110 & 1) == 0 && (v101 = (_QWORD *)(v110 & 0xFFFFFFFFFFFFFFFCLL), (v110 & 0xFFFFFFFFFFFFFFFCLL) != 0) )
      {
LABEL_121:
        if ( (v98 & 2) != 0 )
        {
          v104 = v101[2295];
          v105 = v97 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v104 )
          {
            v106 = v101[294];
            v101[304] += 24LL;
            v107 = (v106 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v101[295] >= v107 + 24 && v106 )
            {
              v101[294] = v107 + 24;
              v108 = (v106 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v238.m128_u64[0] = v103;
              v108 = sub_986170((__int64)(v101 + 294), 24, 24, 3, v103, v69);
              v103 = v238.m128_u64[0];
              v107 = v108 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v108 = v104;
            v105 = v107 | 4;
            *(_DWORD *)(v108 + 8) = 0;
            *(_QWORD *)(v108 + 16) = v97;
          }
          v109 = v105 & 0xFFFFFFFFFFFFFFFELL;
          v110 = v109 | 1;
          *(_QWORD *)(v97 + 96) = v109 | 1;
          goto LABEL_151;
        }
      }
      else
      {
LABEL_151:
        if ( v109 )
        {
          if ( (v109 & 4) != 0 )
          {
            v128 = (_DWORD *)(v110 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v128 )
            {
              v129 = *(__int64 **)v128;
              v130 = *(_DWORD *)(*(_QWORD *)v128 + 12LL);
              if ( v128[2] != v130 )
              {
                v128[2] = v130;
                v131 = *v129;
                v238.m128_u64[0] = v103;
                (*(void (__fastcall **)(__int64 *, __int64))(v131 + 152))(v129, v97);
                v103 = v238.m128_u64[0];
              }
            }
          }
        }
        v102 = *(_QWORD *)(v62 + 128);
      }
      if ( (*(_BYTE *)(v102 + 24) & 1) != 0 )
      {
        v238.m128_u64[0] = v103;
        v165 = sub_B96980(v102);
        v103 = v238.m128_u64[0];
        p_ptr = (void **)v165;
        v132 = v165;
      }
      else
      {
        p_ptr = *(void ***)(v102 + 24);
        v132 = (__int64)p_ptr;
      }
      v133 = v103 - v132;
      v134 = 0xAAAAAAAAAAAAAAABLL * (v133 >> 3);
      v135 = v134;
      if ( (_DWORD)v249 )
      {
LABEL_164:
        sub_E38220((__int64)&v246);
        sub_995540(a1[1], "tl");
        v141 = v14;
        sub_E3FB80(a1, v14);
        if ( (_DWORD)v134 )
        {
          v146 = (unsigned int)(v134 - 1);
          v147 = 0;
          v148 = (__int64 **)(p_ptr + 2);
          v149 = (__int64)&p_ptr[3 * v146 + 5];
          do
          {
            while ( 1 )
            {
              v150 = **v148;
              v151 = v147 + *(_QWORD *)(a3 + 8);
              if ( (*(_BYTE *)(*(_QWORD *)(v150 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xF) != 0 )
                break;
              v141 = *(_QWORD *)(v150 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
              v152 = v147 + *(_QWORD *)(a3 + 8);
              v148 += 3;
              v147 += 56;
              sub_E53C20(a1, v141, v152, 0, 0);
              if ( v148 == (__int64 **)v149 )
                goto LABEL_168;
            }
            v148 += 3;
            v147 += 56;
            v141 = sub_F64F00(v150) & 0xFFFFFFFFFFFFFFF0LL;
            sub_E53C20(a1, v141, v151, 0, 0);
          }
          while ( (__int64 **)v149 != v148 );
        }
      }
      else
      {
        if ( v134 )
        {
          v136 = (_QWORD **)(v132 + v133 - 8);
          v239 = v245;
          do
          {
            LODWORD(v134) = v135;
            v137 = *v136;
            v238.m128_u64[0] = *(_QWORD *)(a3 + 8) + 56LL * (unsigned int)(v135 - 1);
            v245[0] = *v137;
            v138 = sub_6D5440(v239);
            if ( !sub_E3BF10(v138, v238.m128_u64[0], v139, v140) )
              goto LABEL_164;
            v136 -= 3;
          }
          while ( --v135 );
        }
        sub_E38220((__int64)&v246);
        sub_995540(a1[1], "tl");
        v141 = v14;
        sub_E3FB80(a1, v14);
      }
LABEL_168:
      if ( (_DWORD)v249 )
      {
        v153 = 0;
        v154 = 8LL * (unsigned int)(v249 - 1) + 8;
        do
        {
          v155 = *(_QWORD *)((char *)ptr + v153);
          if ( (*(_BYTE *)(v155 + 68) & 1) == 0 || *(_QWORD *)(v155 + 40) )
          {
            if ( *(char *)(v155 + 29) < 0 )
              v155 = sub_B72720(*(_QWORD *)((char *)ptr + v153));
            v156 = *(_DWORD *)(v155 + 68);
            if ( (v156 & 0xFFFFFFF0) == 0 )
            {
              sub_B7EAB0(v155, v141, v142, v143, v144, v145);
              v156 = *(_DWORD *)(v155 + 68);
            }
            v141 = *(_QWORD *)(*(_QWORD *)((char *)ptr + v153) + 48LL);
            sub_E53C20(a1, v141, *(_QWORD *)(a3 + 8) + 56LL * ((v156 >> 4) + *(_DWORD *)(a3 + 16) - 1), 0, 0);
          }
          v153 += 8;
        }
        while ( v154 != v153 );
      }
      v157 = a1[1];
      v158 = *(_BYTE **)(v157 + 32);
      if ( (unsigned __int64)v158 >= *(_QWORD *)(v157 + 24) )
      {
        sub_227BA10(v157, 69);
      }
      else
      {
        *(_QWORD *)(v157 + 32) = v158 + 1;
        *v158 = 69;
      }
      if ( ptr != v240 + 2 )
        free(ptr);
LABEL_6:
      result = v242;
LABEL_7:
      if ( (_BYTE)result && !v243 )
      {
        v19 = a1[1];
        result = *(_QWORD *)(v19 + 32);
        if ( result >= *(_QWORD *)(v19 + 24) )
        {
          return sub_227BA10(v19, 69);
        }
        else
        {
          *(_QWORD *)(v19 + 32) = result + 1;
          *(_BYTE *)result = 69;
        }
      }
      return result;
    case 0xB:
      v20 = *(_QWORD *)(a3 + 8);
      if ( v20 )
      {
        sub_E38220((__int64)&v246);
        sub_995540(a1[1], "tl");
        sub_E3FB80(a1, v14);
        if ( !sub_E3BF10(v14, a3, v21, v22) )
        {
          sub_995540(a1[1], "di");
          v23 = *(_QWORD *)(*a1 + 16);
          v24 = sub_F63270(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL));
          v25 = sub_E3A180(*(_DWORD *)(v24 + 24), v23, v20);
          if ( v25 )
            sub_E39490(a1[1], v25);
          sub_E53C20(a1, *(_QWORD *)(v20 + 48), *(_QWORD *)(a3 + 16), 0, 0);
        }
        goto LABEL_50;
      }
      v159 = a1[1];
      v160 = *(_BYTE **)(v159 + 32);
      if ( (unsigned __int64)v160 >= *(_QWORD *)(v159 + 24) )
      {
        sub_227BA10(v159, 76);
      }
      else
      {
        *(_QWORD *)(v159 + 32) = v160 + 1;
        *v160 = 76;
      }
      sub_E3FB80(a1, v14);
      v17 = a1[1];
      v18 = *(_BYTE **)(v17 + 32);
      if ( (unsigned __int64)v18 < *(_QWORD *)(v17 + 24) )
        goto LABEL_5;
      goto LABEL_51;
    case 0xC:
      if ( !sub_A51390(a3) )
      {
LABEL_103:
        sub_E47040((__int64)a1, v14);
        result = v242;
        goto LABEL_7;
      }
      sub_E38220((__int64)&v246);
      sub_A513B0(a3);
      if ( v26 )
      {
        v27 = a1[1];
        v161 = "mc";
      }
      else
      {
        if ( !v5 )
        {
LABEL_20:
          v27 = a1[1];
          goto LABEL_21;
        }
        v197 = *(_QWORD *)(sub_A51390(a3) + 48);
        v198 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v198 + 16) != 33 )
          v198 = sub_F63050(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL), a2, v195, v196);
        v27 = a1[1];
        if ( (*(_QWORD *)&byte_8[*(_QWORD *)(v198 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v198 + 32) & 0xFFFFFFFFFFFFFFF0LL]
             | (unsigned __int8)*(_QWORD *)(v198 + 32))
            & 7) == (*(_QWORD *)&byte_8[v197 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                   | ((unsigned __int8)*(_QWORD *)&byte_8[v197 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v197) & 7)
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) <= 0x5Fu )
        {
LABEL_21:
          sub_995540(v27, "adL");
          v28 = sub_A51390(a3);
          sub_E52200((__int64)a1, v28, 0, si128);
          v29 = a1[1];
          v30 = *(_BYTE **)(v29 + 32);
          if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 24) )
          {
            sub_227BA10(v29, 69);
          }
          else
          {
            *(_QWORD *)(v29 + 32) = v30 + 1;
            *v30 = 69;
          }
          sub_A513B0(a3);
          if ( !v31 )
            goto LABEL_6;
          v32 = sub_A8CAF0(*(_QWORD *)(*a1 + 8), a3);
          if ( v32 )
          {
            v33 = a1 + 1;
            v34 = v32;
LABEL_26:
            sub_E38390(v33, v34);
          }
LABEL_50:
          v17 = a1[1];
          v18 = *(_BYTE **)(v17 + 32);
          if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
          {
LABEL_51:
            sub_227BA10(v17, 69);
            result = v242;
            goto LABEL_7;
          }
LABEL_5:
          *(_QWORD *)(v17 + 32) = v18 + 1;
          *v18 = 69;
          goto LABEL_6;
        }
        v161 = "cv";
      }
      sub_995540(v27, v161);
      sub_E3FB80(a1, v14);
      goto LABEL_20;
    default:
      return result;
  }
}
