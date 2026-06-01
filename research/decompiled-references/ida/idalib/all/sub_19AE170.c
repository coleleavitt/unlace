__int64 *__fastcall sub_19AE170(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v11; // r14
  _QWORD *v12; // rsi
  __int64 *result; // rax
  void *v14; // rdi
  __int64 v15; // rcx
  int v16; // ebp
  __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  char v19; // si
  unsigned __int64 v20; // rdi
  __int64 *v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned int v27; // r13d
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // eax
  __int64 *v35; // rcx
  int v36; // r9d
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rcx
  unsigned int v40; // ecx
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int8 v43; // al
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r14
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  unsigned int v49; // ecx
  unsigned int v50; // r8d
  __int64 v51; // rax
  unsigned __int8 v52; // al
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned int v57; // eax
  __int64 v58; // rdx
  unsigned int v59; // r14d
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // r8
  __int64 v67; // rsi
  __int64 v68; // r12
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 v74; // rax
  unsigned int v75; // r8d
  unsigned int v76; // ecx
  __int64 v77; // rdx
  __int64 v78; // rcx
  _QWORD *v79; // rsi
  __int64 v80; // rax
  __int64 v81; // r8
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  unsigned __int64 v85; // rax
  unsigned int v86; // eax
  __int64 *v87; // rdi
  unsigned int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rax
  __int64 v96; // r8
  __int64 v97; // r10
  char v98; // r9
  unsigned __int64 v99; // rdx
  __int64 v100; // rdi
  __int64 v101; // rcx
  __int64 v102; // rdi
  __int64 v103; // rcx
  __int64 v104; // rsi
  unsigned __int64 v105; // r10
  __int64 v106; // rax
  __int64 v107; // rdx
  unsigned __int64 v108; // rax
  __int64 v109; // rdi
  __int64 v110; // r10
  char v111; // al
  unsigned __int64 v112; // rax
  char v113; // al
  __int64 v114; // r10
  unsigned __int64 v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 *v119; // r14
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rdx
  int v123; // r14d
  unsigned __int64 v124; // rax
  __int64 *v125; // r14
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rax
  __int64 *v134; // r14
  bool v135; // al
  __int64 v136; // rdi
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // rax
  unsigned __int64 v139; // rcx
  __int64 v140; // rax
  __int64 v141; // r14
  __int64 v142; // rcx
  __int64 *v143; // r11
  __int64 v144; // rax
  __int64 v145; // rax
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // rax
  unsigned int v151; // eax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // r8
  __int64 v156; // rdx
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 v162; // r9
  __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // r14
  bool v166; // al
  bool v167; // al
  int v168; // ecx
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  char v175; // al
  bool v176; // al
  int v177; // ecx
  unsigned int v178; // ecx
  __int64 v179; // rax
  __int64 v180; // rax
  unsigned int v181; // eax
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rdi
  unsigned __int64 v185; // rax
  int v186; // [rsp-10h] [rbp-138h]
  unsigned __int64 v187; // [rsp-10h] [rbp-138h]
  int v188; // [rsp-10h] [rbp-138h]
  __int64 v189; // [rsp-10h] [rbp-138h]
  int v190; // [rsp-10h] [rbp-138h]
  __int64 v191; // [rsp-10h] [rbp-138h]
  int v192; // [rsp-10h] [rbp-138h]
  __int64 v193; // [rsp-10h] [rbp-138h]
  __int64 v194; // [rsp-10h] [rbp-138h]
  __int64 v195; // [rsp-8h] [rbp-130h]
  __int64 *v196; // [rsp+8h] [rbp-120h]
  int v197; // [rsp+8h] [rbp-120h]
  __int64 v198; // [rsp+8h] [rbp-120h]
  __int64 v199; // [rsp+8h] [rbp-120h]
  __int64 v200; // [rsp+8h] [rbp-120h]
  unsigned __int64 v201; // [rsp+8h] [rbp-120h]
  __int64 v202; // [rsp+8h] [rbp-120h]
  unsigned int v203; // [rsp+8h] [rbp-120h]
  __int64 v204; // [rsp+8h] [rbp-120h]
  bool v205; // [rsp+8h] [rbp-120h]
  unsigned int v206; // [rsp+8h] [rbp-120h]
  bool v207; // [rsp+8h] [rbp-120h]
  __int64 v208; // [rsp+8h] [rbp-120h]
  __int64 v209; // [rsp+8h] [rbp-120h]
  __int64 v210; // [rsp+10h] [rbp-118h]
  unsigned int v211; // [rsp+10h] [rbp-118h]
  unsigned int v212; // [rsp+10h] [rbp-118h]
  __int64 v213; // [rsp+10h] [rbp-118h]
  unsigned int v214; // [rsp+10h] [rbp-118h]
  unsigned int v215; // [rsp+10h] [rbp-118h]
  int v216; // [rsp+18h] [rbp-110h]
  char v217; // [rsp+18h] [rbp-110h]
  __int64 v218; // [rsp+18h] [rbp-110h]
  unsigned int v219; // [rsp+2Ch] [rbp-FCh] BYREF
  __int64 v220; // [rsp+30h] [rbp-F8h] BYREF
  __int64 *v221; // [rsp+38h] [rbp-F0h] BYREF
  int v222; // [rsp+44h] [rbp-E4h] BYREF
  unsigned __int64 v223; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v224; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v225; // [rsp+58h] [rbp-D0h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v227; // [rsp+68h] [rbp-C0h]
  _BYTE v228[184]; // [rsp+70h] [rbp-B8h] BYREF

  v11 = a2[1];
  v221 = a2;
  v12 = *((_QWORD **)a4 + 5);
  v220 = a3;
  v219 = a5;
  if ( !v12 )
  {
    v15 = a1[31];
    v16 = a6;
    v17 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
    v18 = *(_QWORD *)&byte_8[*(_QWORD *)(v15 + 19080) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(v15 + 19080) & 0xFFFFFFFFFFFFFFF0LL]
         | (unsigned __int8)*(_QWORD *)(v15 + 19080))
        & 7;
    v19 = v17 | v11;
    v20 = v17 & 0xFFFFFFFFFFFFFFF8LL;
    v21 = (__int64 *)(v20 | v19 & 7);
    if ( (__int64 *)v18 == v21 )
    {
      v67 = (__int64)a2;
      v68 = sub_1BE7B70(a1, a2, a3, 1, &ptr, 0);
      if ( !v68 )
        return (_QWORD *)(&dword_0 + 1);
      LODWORD(v225) = sub_EEB7E0((unsigned __int64)v221, v67, *(double *)a7.m128_u64);
      if ( (unsigned __int8)sub_18F5260(
                              (__int64)a1,
                              v68,
                              (int *)&v225,
                              1u,
                              0,
                              0,
                              (__m128i)a7,
                              *(double *)a8.m128_u64,
                              0,
                              0,
                              0) )
        return (_QWORD *)(&dword_0 + 1);
      v69 = sub_1BD6F50(a1, v221, ptr, v68);
      if ( v69 == 1 )
        return (_QWORD *)(&dword_0 + 1);
      v20 = (unsigned __int64)a1;
      v21 = (__int64 *)(v69 & 0xFFFFFFFFFFFFFFFELL);
      v74 = sub_1907C70((__int64)a1, (_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFELL), (__m128i)a7, a8, v70, v71, v72, v73);
      if ( v74 == 1 )
        return (_QWORD *)(&dword_0 + 1);
      v221 = (__int64 *)(v74 & 0xFFFFFFFFFFFFFFFELL);
      v11 = *(_QWORD *)((v74 & 0xFFFFFFFFFFFFFFFELL) + 8);
    }
    v22 = v220;
    v23 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v23 + 16) != 7 )
    {
      a3 = *(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(a3 + 16) != 7
        || (v20 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL), (v23 = sub_F63050(v20, v21, a3, v18)) == 0) )
      {
        v22 = 0;
LABEL_12:
        v24 = *a4;
        v223 = v11;
        switch ( v24 )
        {
          case 0LL:
            v29 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v29 + 16) == 7
              || (v26 = *(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v26 + 16) == 7)
              && (v20 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), (v29 = sub_F63050(v20, v21, v26, v18)) != 0) )
            {
              ptr = *(void **)(v29 + 32);
              v30 = sub_6D5440(&ptr);
              v20 = a1[31];
              v11 = v30;
              v221 = (__int64 *)sub_C0A3E0((_QWORD *)v20, v30, 58, (__int64)v221, 0, 0, 0);
              v18 = v187;
              v21 = (__int64 *)v195;
            }
            break;
          case 1LL:
            v21 = v221;
            v20 = (unsigned __int64)a1;
            v28 = sub_19146F0((__int64)a1, v221, a3, v18, a5, a6, a7, a8);
            if ( v28 == 1 )
              return (_QWORD *)(&dword_0 + 1);
            v221 = (__int64 *)(v28 & 0xFFFFFFFFFFFFFFFELL);
            v11 = *(_QWORD *)((v28 & 0xFFFFFFFFFFFFFFFELL) + 8);
            break;
          case 2LL:
            v11 = sub_A72210((_QWORD *)a1[31], v11);
            v186 = v16;
            v25 = 11;
            goto LABEL_18;
          case 3LL:
            v186 = v16;
            v11 = sub_A70010(a1[31], v11);
            v25 = 12;
            goto LABEL_18;
          case 4LL:
          case 5LL:
          case 6LL:
          case 7LL:
          case 8LL:
          case 9LL:
          case 10LL:
          case 11LL:
          case 12LL:
          case 13LL:
          case 14LL:
          case 15LL:
          case 16LL:
          case 17LL:
          case 18LL:
          case 19LL:
          case 20LL:
          case 21LL:
          case 22LL:
          case 23LL:
          case 24LL:
          case 25LL:
          case 26LL:
          case 27LL:
          case 28LL:
          case 29LL:
          case 30LL:
          case 31LL:
          case 32LL:
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                      & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) == 3 )
            {
              v11 = sub_A72990(a1[31], v11);
            }
            else
            {
              v31 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 3 )
                v11 = sub_F56FF0(v31, a1[31]);
            }
            v25 = 66;
            v186 = v16;
LABEL_18:
            v21 = v221;
            v20 = (unsigned __int64)a1;
            v221 = (__int64 *)(sub_160A600(
                                 (__int64)a1,
                                 (unsigned __int64)v221,
                                 v11,
                                 v25,
                                 0,
                                 0,
                                 *(double *)a7.m128_u64,
                                 *(double *)a8.m128_u64,
                                 v186)
                             & 0xFFFFFFFFFFFFFFFELL);
            v26 = v195;
            break;
        }
        v27 = v16 - 1;
        LOBYTE(a6) = (unsigned int)(v16 - 1) <= 1;
        switch ( a4[1] )
        {
          case 0u:
            v18 = v219;
            if ( v219 <= 7 && ((1LL << v219) & 0xB7) != 0 )
            {
              v21 = v221;
              v20 = (unsigned __int64)a1;
              if ( (unsigned __int8)sub_18B5210(a1, (unsigned __int64)v221, v220, v219, (__m128i)a7, a8) )
                return (_QWORD *)(&dword_0 + 1);
            }
            goto LABEL_39;
          case 6u:
          case 9u:
            ptr = (void *)v220;
            v138 = v220;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 57 <= 1
              || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 57 <= 1 )
            {
              v138 = sub_19A0B00(a1[31], v11, v220, (__int64 *)&ptr);
            }
            v21 = v221;
            v139 = *(_QWORD *)(*(_QWORD *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
            if ( *(_BYTE *)(*(_QWORD *)v139 + 16LL) == 13
              && ((*(_WORD *)(*(_QWORD *)v139 + 18LL) >> 3) & 0x1FF) == 0x1B4 )
            {
              v75 = 0;
              v76 = 28;
              v192 = v16;
              v77 = v138;
            }
            else
            {
              v75 = 0;
              v76 = 27;
              v192 = v16;
              v77 = v138;
            }
            goto LABEL_79;
          case 7u:
          case 0xAu:
            v137 = v220;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 57 <= 1
              || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 57 <= 1 )
            {
              v137 = sub_19A0B00(a1[31], v11, v220, nullptr);
            }
            v75 = 0;
            v76 = 39;
            v192 = v16;
            v77 = v137;
            v21 = v221;
            goto LABEL_79;
          case 8u:
          case 0xBu:
            v131 = *(_QWORD *)(v221[1] & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v131 + 16) != 14 )
              v131 = sub_F63050(*(_QWORD *)(v221[1] & 0xFFFFFFFFFFFFFFF0LL), v21, v26, v18);
            v132 = *(_QWORD *)(v131 + 32);
            v133 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v133 + 16) != 14 )
            {
              v204 = v132;
              v133 = sub_F63050(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL), v21, v132, v18);
              v132 = v204;
            }
            v134 = (__int64 *)(*(_QWORD *)(v133 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v135 = sub_F58100(*(_QWORD *)(v132 & 0xFFFFFFFFFFFFFFF0LL));
            v136 = *v134;
            if ( v135 )
              v76 = !sub_F58100(v136) + 47;
            else
              v76 = sub_F58100(v136) + 52;
            goto LABEL_149;
          case 0xCu:
            ptr = (void *)v220;
            v115 = v220;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 57 <= 1
              || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 57 <= 1 )
            {
              v115 = sub_19A0B00(a1[31], v11, v220, (__int64 *)&ptr);
            }
            if ( sub_F58100(*(_QWORD *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFF0LL)) )
            {
              v77 = v115;
              v75 = 0;
              v192 = v16;
              v76 = 29;
            }
            else
            {
              v77 = v115;
              v75 = 0;
              v192 = v16;
              v76 = 36;
            }
            v21 = v221;
            goto LABEL_79;
          case 0xDu:
          case 0x19u:
            v87 = v221;
            if ( (a4[4] & 4) == 0 || v219 == 6 )
            {
              if ( (*(_BYTE *)(a1[29] + 107LL) & 0x14) != 0 )
              {
                v21 = (__int64 *)v220;
                v175 = sub_19D1230(a1[92], v220, v221[1]);
                LOBYTE(a6) = v27 <= 1;
                if ( v175 )
                {
                  v87 = v221;
                }
                else
                {
                  v181 = sub_EEB7E0((unsigned __int64)v221, v220, *(double *)a7.m128_u64);
                  if ( v219 == 4 )
                  {
                    v21 = a1 + 1;
                    sub_168B9F0((__int64)&ptr, a1 + 1, v181, 0xBEAu, 0);
                    sub_15F7200(&ptr);
                  }
                  else
                  {
                    sub_168B9F0((__int64)&ptr, a1 + 1, v181, 0xBCDu, 0);
                    LOBYTE(v222) = v219 == 6;
                    v182 = sub_1588420((__int64)&ptr, (unsigned __int8 *)&v222);
                    v224 = v221[1];
                    v183 = sub_162B6D0(v182, &v224);
                    v209 = sub_1605D30(v183, &v220);
                    v21 = &v225;
                    v225 = sub_EEC8C0((unsigned __int64)v221, (__int64)&v220, *(double *)a7.m128_u64);
                    sub_1587DB0(v209, &v225);
                    sub_15F7200(&ptr);
                  }
                  v87 = v221;
                  LOBYTE(a6) = v27 <= 1;
                }
              }
            }
            else
            {
              v88 = sub_EEB7E0((unsigned __int64)v221, (__int64)(a1 + 1), *(double *)a7.m128_u64);
              sub_168B9F0((__int64)&ptr, a1 + 1, v88, 0x1645u, 0);
              if ( (v219 & 0xFFFFFFFB) != 0 )
              {
                v224 = v221[1];
                v179 = sub_162B6D0((__int64)&ptr, &v224);
                v90 = sub_1605D30(v179, &v220);
              }
              else
              {
                v89 = sub_1605D30((__int64)&ptr, &v220);
                v224 = v221[1];
                v90 = sub_162B6D0(v89, &v224);
              }
              v199 = sub_19AE0C0(v90, (int *)&v219);
              v225 = sub_EEC8C0((unsigned __int64)v221, (__int64)&v219, *(double *)a7.m128_u64);
              v91 = sub_1587DB0(v199, &v225);
              v21 = (__int64 *)&v222;
              v222 = 0;
              sub_1587D10(v91, &v222);
              sub_15F7200(&ptr);
              v87 = v221;
              LOBYTE(a6) = v27 <= 1;
              if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v221[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 34
                && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                        & 0xFFFFFFFFFFFFFFF0LL)
                            + 16LL) == 34 )
              {
                v21 = v221;
                sub_19DD0E0(a1[92], v221);
                v87 = v221;
                LOBYTE(a6) = v27 <= 1;
              }
            }
            v217 = a6;
            v200 = sub_F68450(*(_QWORD *)(v87[1] & 0xFFFFFFFFFFFFFFF0LL), (__int64)v21, v26, v18, a5);
            v95 = sub_F68450(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v21, v92, v93, v94);
            v97 = v220;
            v98 = v217;
            v99 = v200 & 0xFFFFFFFFFFFFFFF0LL;
            if ( (v200 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (v95 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            {
              v100 = *(_QWORD *)&byte_8[v200 & 0xFFFFFFFFFFFFFFF0LL];
              LODWORD(v101) = 0;
              if ( (v100 & 8) != 0 )
                v101 = *(__int64 *)((char *)&qword_18 + (v100 & 0xFFFFFFFFFFFFFFF0LL));
              v102 = *(_QWORD *)&byte_8[v95 & 0xFFFFFFFFFFFFFFF0LL];
              v103 = (unsigned int)v101 >> 9;
              LODWORD(v104) = 0;
              if ( (v102 & 8) != 0 )
                v104 = *(__int64 *)((char *)&qword_18 + (v102 & 0xFFFFFFFFFFFFFFF0LL));
              v201 = v200 & 0xFFFFFFFFFFFFFFF0LL;
              if ( (unsigned int)v104 >> 9 != (_DWORD)v103 )
              {
                v105 = sub_A72780((_QWORD *)a1[31], v95, v99, v103, v96);
                LODWORD(v106) = 0;
                v107 = *(_QWORD *)(v201 + 8);
                if ( (v107 & 8) != 0 )
                  v106 = *(__int64 *)((char *)&qword_18 + (v107 & 0xFFFFFFFFFFFFFFF0LL));
                v108 = sub_A70E70(a1[31], v105, (unsigned int)v106 >> 9);
                v109 = a1[31];
                v110 = v108;
                v111 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                            & 0xFFFFFFFFFFFFFFF0LL)
                                + 16LL);
                if ( v111 == 34 )
                {
                  v185 = sub_A74EC0(v109, v110);
                  v98 = v217;
                  v97 = v185;
                }
                else
                {
                  if ( v111 == 11 )
                    v112 = sub_A74B00(v109, v110);
                  else
                    v112 = sub_A70010(v109, v110);
                  v98 = v217;
                  v97 = v112;
                }
              }
            }
            ptr = v228;
            v227 = 0x400000000LL;
            v202 = v97;
            v113 = sub_1BDAA60((_DWORD)a1, (_DWORD)v221, v97, (unsigned int)&v224, (unsigned int)&ptr, v98 & 1, 1);
            v114 = v202;
            if ( v113 )
            {
              v14 = ptr;
              result = (_QWORD *)(&dword_0 + 1);
              if ( ptr != v228 )
                goto LABEL_8;
              return result;
            }
            if ( (_DWORD)v224 == 41 )
            {
              v184 = a1[92];
              v225 = (__int64)v221;
              sub_19D1830(v184, &v225);
              v114 = v202;
              v221 = (__int64 *)(v225 & 0xFFFFFFFFFFFFFFFELL);
            }
            if ( (*(_BYTE *)(a1[29] + 107LL) & 0x14) != 0 )
            {
              v208 = v114;
              sub_19E4440(a1[92], 0, v114, (unsigned int)&v221, v16, 1, 0, 0, 0);
              v114 = v208;
            }
            v41 = v114;
            v188 = v16;
            v40 = v224;
LABEL_37:
            v21 = v221;
            v42 = sub_160A600(
                    (__int64)a1,
                    (unsigned __int64)v221,
                    v41,
                    v40,
                    0,
                    (__int64)&ptr,
                    *(double *)a7.m128_u64,
                    *(double *)a8.m128_u64,
                    v188);
            v20 = (unsigned __int64)ptr;
            v221 = (__int64 *)(v42 & 0xFFFFFFFFFFFFFFFELL);
            a5 = v189;
            a6 = v195;
            if ( ptr == v228 )
              goto LABEL_39;
            goto LABEL_38;
          case 0xEu:
            ptr = v228;
            v227 = 0x400000000LL;
            v197 = (unsigned __int8)a6;
            v210 = sub_EEC8C0((unsigned __int64)v221, (__int64)v21, *(double *)a7.m128_u64);
            v34 = sub_C00A40((unsigned __int64)v221, (__int64)v21, v32, (__int64)v221, v33);
            v35 = v221;
            v36 = v34;
            v37 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v37 + 16) != 33 )
            {
              v216 = v34;
              v38 = sub_F63050(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL), v21, v37, v221);
              v35 = v221;
              v36 = v216;
              LODWORD(v37) = v38;
            }
            if ( (unsigned int)sub_1BEA320(
                                 (_DWORD)a1,
                                 v35[1],
                                 v37,
                                 (unsigned int)&v225,
                                 (unsigned int)&ptr,
                                 v36,
                                 v210,
                                 v197,
                                 0)
               - 3 <= 1
              || (unsigned __int8)sub_18B5210(a1, (unsigned __int64)v221, v220, v39, (__m128i)a7, a8) )
            {
              goto LABEL_6;
            }
            v188 = v16;
            v40 = v225;
            v41 = v220;
            goto LABEL_37;
          case 0xFu:
            v79 = v221;
            v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v221[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v80 + 16) == 13 && ((*(_WORD *)(v80 + 18) >> 3) & 0x1FF) == 0x1E0 )
            {
              v221 = (__int64 *)(sub_160A600(
                                   (__int64)a1,
                                   (unsigned __int64)v221,
                                   *(_QWORD *)(a1[31] + 18800LL),
                                   0x27u,
                                   0,
                                   0,
                                   *(double *)a7.m128_u64,
                                   *(double *)a8.m128_u64,
                                   0)
                               & 0xFFFFFFFFFFFFFFFELL);
              v79 = (_QWORD *)v195;
              v11 = *(_QWORD *)(a1[31] + 18800LL);
            }
            v81 = v11;
            v82 = v11 & 0xFFFFFFFFFFFFFFF0LL;
            v198 = v220;
            v83 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v83 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 57 > 1 )
            {
              if ( (*(_BYTE *)(a1[29] + 89LL) & 1) == 0 )
                goto LABEL_96;
            }
            else
            {
              v84 = (unsigned int)*(unsigned __int8 *)(v83 + 16) - 57;
              if ( (unsigned int)v84 > 1 )
              {
                v83 = sub_F63050(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL), v79, v84, v82);
                v82 = v11 & 0xFFFFFFFFFFFFFFF0LL;
              }
              v81 = *(_QWORD *)(v83 + 32);
              if ( (*(_BYTE *)(a1[29] + 89LL) & 1) == 0 )
                goto LABEL_96;
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v82 + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 57 <= 1 )
              {
LABEL_95:
                v213 = v81;
                v85 = sub_19A0B00(a1[31], v11, v220, nullptr);
                v81 = v213;
                v198 = v85;
                goto LABEL_96;
              }
            }
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 57 <= 1 )
              goto LABEL_95;
LABEL_96:
            v86 = sub_15F1460(v81);
            v75 = 0;
            v192 = v16;
            v76 = v86;
            v77 = v198;
            v21 = v221;
LABEL_79:
            v20 = (unsigned __int64)a1;
            v221 = (__int64 *)(sub_160A600(
                                 (__int64)a1,
                                 (unsigned __int64)v21,
                                 v77,
                                 v76,
                                 v75,
                                 0,
                                 *(double *)a7.m128_u64,
                                 *(double *)a8.m128_u64,
                                 v192)
                             & 0xFFFFFFFFFFFFFFFELL);
LABEL_39:
            v43 = a4[2];
            if ( v43 )
            {
              if ( v43 == 31 )
              {
                v44 = *(_QWORD *)(v221[1] & 0xFFFFFFFFFFFFFFF0LL);
                v45 = (unsigned int)*(unsigned __int8 *)(v44 + 16) - 57;
                if ( (unsigned int)v45 > 1 )
                  v44 = sub_F63050(v44, v21, v45, v18);
                v46 = *(_QWORD *)(v44 + 32);
                v47 = v46;
                v48 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL);
                if ( (unsigned int)*(unsigned __int8 *)(v48 + 16) - 57 <= 1
                  || (v78 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                             + 16LL)
                          - 57,
                      (unsigned int)v78 <= 1)
                  && (v48 = sub_F63050(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL), v21, v46, v78), v47 = v46, v48) )
                {
                  v47 = sub_A76A60(a1[31], v46, *(_DWORD *)(v48 + 20));
                }
                v21 = v221;
                v49 = 65;
                v190 = 0;
                v50 = (*((_BYTE *)v221 + 1) >> 1) & 3;
              }
              else
              {
                if ( v43 != 33 )
                  return (__int64 *)sub_19AFC70(v20, v21, v26, v18, a5, a6);
                v51 = sub_18D1860(a1, v220, (unsigned __int64)v221, v18, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
                v50 = 0;
                v190 = v16;
                v47 = v220;
                v49 = 26;
                v21 = (__int64 *)(v51 & 0xFFFFFFFFFFFFFFFELL);
              }
              v20 = (unsigned __int64)a1;
              v221 = (__int64 *)(sub_160A600(
                                   (__int64)a1,
                                   (unsigned __int64)v21,
                                   v47,
                                   v49,
                                   v50,
                                   0,
                                   *(double *)a7.m128_u64,
                                   *(double *)a8.m128_u64,
                                   v190)
                               & 0xFFFFFFFFFFFFFFFELL);
            }
            v52 = a4[3];
            switch ( v52 )
            {
              case 4u:
                if ( (unsigned __int8)sub_18B5210(a1, (unsigned __int64)v221, v220, v18, (__m128i)a7, a8) )
                  return (_QWORD *)(&dword_0 + 1);
                v21 = v221;
                result = (__int64 *)(sub_160A600(
                                       (__int64)a1,
                                       (unsigned __int64)v221,
                                       v220,
                                       5u,
                                       0,
                                       0,
                                       *(double *)a7.m128_u64,
                                       *(double *)a8.m128_u64,
                                       v16)
                                   & 0xFFFFFFFFFFFFFFFELL);
                v221 = result;
LABEL_65:
                if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                {
                  v21 = result;
                  result = (__int64 *)(sub_160A600(
                                         (__int64)a1,
                                         (unsigned __int64)result,
                                         v22,
                                         0x3Bu,
                                         0,
                                         0,
                                         *(double *)a7.m128_u64,
                                         *(double *)a8.m128_u64,
                                         v16)
                                     & 0xFFFFFFFFFFFFFFFELL);
                  v221 = result;
                }
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL)
                                                                              + 8LL)
                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                      + 16LL)
                   - 43 > 1
                  || (*((_BYTE *)result + 1) & 6) != 0 )
                {
                  goto LABEL_69;
                }
                v21 = result;
                v145 = sub_1A0BEA0(a1, result);
                if ( v145 != 1 )
                {
                  result = (__int64 *)(v145 & 0xFFFFFFFFFFFFFFFELL);
                  v221 = result;
LABEL_69:
                  if ( v27 > 2 )
                  {
                    v65 = sub_EEB7E0((unsigned __int64)result, (__int64)v21, *(double *)a7.m128_u64);
                    sub_160A450((__int64)a1, v220, v223, v65, v66);
                    return v221;
                  }
                  return result;
                }
                return (_QWORD *)(&dword_0 + 1);
              case 5u:
                v211 = (*((_BYTE *)v221 + 1) >> 1) & 3;
                v53 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL);
                v54 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
                if ( (unsigned int)(v54 - 43) <= 1 )
                {
                  v55 = *(_QWORD *)&byte_8[sub_F68450(v53, (__int64)v21, v54, v18, a5) & 0xFFFFFFFFFFFFFFF0LL];
                  LODWORD(v56) = 0;
                  if ( (v55 & 8) != 0 )
                    v56 = *(__int64 *)((char *)&qword_18 + (v55 & 0xFFFFFFFFFFFFFFF0LL));
                  v57 = (unsigned int)v56 >> 9;
                  v18 = *(_QWORD *)&byte_8[v221[1] & 0xFFFFFFFFFFFFFFF0LL];
                  LODWORD(v58) = 0;
                  if ( (v18 & 8) != 0 )
                  {
                    v18 &= 0xFFFFFFFFFFFFFFF0LL;
                    v58 = *(_QWORD *)(v18 + 24);
                  }
                  if ( (unsigned int)v58 >> 9 != v57 )
                  {
                    v59 = 63;
                    v53 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL);
                    v54 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_58:
                    if ( (_BYTE)v54 == 42 )
                    {
                      v153 = sub_F68450(v53, (__int64)v21, v54, v18, a5);
                      v156 = 0;
                      v157 = *(_QWORD *)&byte_8[v153 & 0xFFFFFFFFFFFFFFF0LL];
                      if ( (v157 & 8) != 0 )
                        v156 = *(__int64 *)((char *)&qword_18 + (v157 & 0xFFFFFFFFFFFFFFF0LL));
                      v206 = (unsigned int)v156 >> 9;
                      v54 = *(_QWORD *)&byte_8[sub_F68450(
                                                 *(_QWORD *)(v221[1] & 0xFFFFFFFFFFFFFFF0LL),
                                                 (__int64)v21,
                                                 v156,
                                                 v154,
                                                 v155)
                                             & 0xFFFFFFFFFFFFFFF0LL];
                      LODWORD(v158) = 0;
                      if ( (v54 & 8) != 0 )
                      {
                        v54 &= 0xFFFFFFFFFFFFFFF0LL;
                        v158 = *(_QWORD *)(v54 + 24);
                      }
                      if ( (unsigned int)v158 >> 9 != v206 )
                        v59 = 63;
                    }
                    if ( v27 > 2 )
                    {
                      v146 = *(_QWORD *)&byte_8[sub_F68450(
                                                  *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL),
                                                  (__int64)v21,
                                                  v54,
                                                  v18,
                                                  a5)
                                              & 0xFFFFFFFFFFFFFFF0LL];
                      if ( (v146 & 8) == 0 || (*((_BYTE *)&qword_18 + (v146 & 0xFFFFFFFFFFFFFFF0LL)) & 8) == 0 )
                      {
                        v150 = *(_QWORD *)&byte_8[sub_F68450(
                                                    *(_QWORD *)(v221[1] & 0xFFFFFFFFFFFFFFF0LL),
                                                    (__int64)v21,
                                                    v147,
                                                    v148,
                                                    v149)
                                                & 0xFFFFFFFFFFFFFFF0LL];
                        if ( (v150 & 8) != 0 && (*((_BYTE *)&qword_18 + (v150 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
                        {
                          v151 = sub_EEB7E0((unsigned __int64)v221, (__int64)v21, *(double *)a7.m128_u64);
                          sub_168B9F0((__int64)&ptr, a1 + 1, v151, 0x1B46u, 0);
                          v152 = sub_1605D30((__int64)&ptr, (__int64 *)&v223);
                          sub_1605D30(v152, &v220);
                          sub_15F7200(&ptr);
                        }
                      }
                    }
                    v60 = sub_F67970(&v220, a1[31]);
                    result = (__int64 *)(sub_160A600(
                                           (__int64)a1,
                                           (unsigned __int64)v221,
                                           v60,
                                           v59,
                                           v211,
                                           0,
                                           *(double *)a7.m128_u64,
                                           *(double *)a8.m128_u64,
                                           v16)
                                       & 0xFFFFFFFFFFFFFFFELL);
                    v221 = result;
                    v21 = (__int64 *)v191;
                    if ( (a4[4] & 1) != 0 )
                    {
                      v61 = a1[29];
                      if ( (*(_BYTE *)(v61 + 12) & 0x40) == 0 )
                      {
                        v212 = (*(_BYTE *)(v61 + 1) & 0x10) == 0 ? 6841 : 5529;
                        v62 = sub_EEB7E0((unsigned __int64)result, v191, *(double *)a7.m128_u64);
                        sub_168B9F0((__int64)&ptr, a1 + 1, v62, v212, 0);
                        v21 = &v225;
                        v225 = sub_C1BEF0((__int64)&v220, (__int64)(a1 + 1), v63, v64);
                        sub_162B6D0((__int64)&ptr, &v225);
                        sub_15F7200(&ptr);
                        result = v221;
                      }
                    }
                    goto LABEL_65;
                  }
                  v53 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL);
                  v54 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v53 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
                }
                v59 = 5;
                goto LABEL_58;
              case 0u:
                result = v221;
                goto LABEL_65;
            }
            return (__int64 *)sub_19AFC70(v20, v21, v26, v18, a5, a6);
          case 0x10u:
            v21 = v221;
            v76 = 5;
            v192 = v16;
            v75 = (*((_BYTE *)v221 + 1) >> 1) & 3;
            goto LABEL_142;
          case 0x11u:
            v227 = 0x400000000LL;
            ptr = v228;
            v218 = sub_EEC8C0((unsigned __int64)v221, (__int64)v21, *(double *)a7.m128_u64);
            v214 = sub_EEB7E0((unsigned __int64)v221, (__int64)v21, *(double *)a7.m128_u64);
            v128 = sub_C1BEF0((__int64)&v220, (__int64)v21, v126, v127);
            v129 = v221[1];
            if ( !(unsigned __int8)sub_1851070((__int64)a1, v129, v128, v214, v218, (__int64)&ptr, v27 <= 1) )
            {
              v215 = (*((_BYTE *)v221 + 1) >> 1) & 3;
              v169 = sub_C1BEF0((__int64)&v220, v129, v195, v130);
              v21 = v221;
              v170 = sub_160A600(
                       (__int64)a1,
                       (unsigned __int64)v221,
                       v169,
                       7u,
                       v215,
                       (__int64)&ptr,
                       *(double *)a7.m128_u64,
                       *(double *)a8.m128_u64,
                       v16);
              v20 = (unsigned __int64)ptr;
              v221 = (__int64 *)(v170 & 0xFFFFFFFFFFFFFFFELL);
              a6 = v194;
              if ( ptr != v228 )
LABEL_38:
                free((void *)v20);
              goto LABEL_39;
            }
            v14 = ptr;
            result = (_QWORD *)(&dword_0 + 1);
            if ( ptr != v228 )
              goto LABEL_8;
            return result;
          case 0x12u:
          case 0x13u:
          case 0x14u:
            v75 = 0;
            v76 = 1;
            v192 = v16;
            v77 = v220;
            v21 = v221;
            goto LABEL_79;
          case 0x15u:
            v144 = sub_18D1860(a1, v220, (unsigned __int64)v221, v18, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
            v75 = 0;
            v192 = v16;
            v76 = 26;
            v21 = (__int64 *)(v144 & 0xFFFFFFFFFFFFFFFELL);
            goto LABEL_142;
          case 0x16u:
            v140 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v140 + 16) == 14
              || (v163 = *(_QWORD *)(*(_QWORD *)(v140 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v163 + 16) == 14)
              && (v140 = sub_F63050(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL), v21, v163, v18)) != 0 )
            {
              v141 = *(_QWORD *)(v140 + 32);
              v205 = sub_F58100(*(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF0LL));
              if ( !sub_199F900(v141, v221[1]) )
              {
                v176 = sub_F58100(*(_QWORD *)(v142 & 0xFFFFFFFFFFFFFFF0LL));
                v177 = -!v205;
                if ( v176 )
                  v178 = (v177 & 0xFFFFFFFD) + 39;
                else
                  v178 = (v177 & 0xFFFFFFFE) + 29;
                v221 = (__int64 *)(sub_160A600(
                                     (__int64)a1,
                                     (unsigned __int64)v221,
                                     v141,
                                     v178,
                                     0,
                                     0,
                                     *(double *)a7.m128_u64,
                                     *(double *)a8.m128_u64,
                                     0)
                                 & 0xFFFFFFFFFFFFFFFELL);
                v143 = v221;
              }
              v21 = v143;
              v75 = 0;
              v192 = 0;
              v77 = v220;
              v76 = !v205 ? 49 : 44;
            }
            else
            {
              v164 = *(_QWORD *)(v221[1] & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v164 + 16) != 14 )
                v164 = sub_F63050(*(_QWORD *)(v221[1] & 0xFFFFFFFFFFFFFFF0LL), v21, v163, v18);
              v165 = *(_QWORD *)(v164 + 32);
              v207 = sub_F58100(*(_QWORD *)(v165 & 0xFFFFFFFFFFFFFFF0LL));
              v20 = v165;
              v221 = (__int64 *)(sub_160A600(
                                   (__int64)a1,
                                   (unsigned __int64)v221,
                                   v165,
                                   !v207 ? 50 : 45,
                                   0,
                                   0,
                                   *(double *)a7.m128_u64,
                                   *(double *)a8.m128_u64,
                                   v16)
                               & 0xFFFFFFFFFFFFFFFELL);
              v166 = sub_199F900(v165, v220);
              v26 = v193;
              v21 = (__int64 *)v195;
              if ( v166 )
                goto LABEL_39;
              v167 = sub_F58100(*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL));
              v168 = -!v207;
              if ( v167 )
                v76 = (v168 & 0xFFFFFFF6) + 39;
              else
                v76 = (v168 & 0xFFFFFFF7) + 36;
LABEL_149:
              v75 = 0;
              v192 = v16;
              v77 = v220;
              v21 = v221;
            }
            goto LABEL_79;
          case 0x17u:
            v116 = *(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v116 + 16) != 11 )
              v116 = sub_F63050(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL), v21, v26, v18);
            v117 = 0;
            v118 = *(_QWORD *)&byte_8[*(_QWORD *)(v116 + 32) & 0xFFFFFFFFFFFFFFF0LL];
            if ( (v118 & 8) != 0 )
              v117 = *(__int64 *)((char *)&qword_18 + (v118 & 0xFFFFFFFFFFFFFFF0LL));
            v119 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
            v120 = *v119;
            v121 = (unsigned int)v117 >> 9;
            if ( *(_BYTE *)(*v119 + 16) != 11 )
            {
              v203 = (unsigned int)v117 >> 9;
              v120 = sub_F63050(*v119, v21, v117, v121);
              LODWORD(v121) = v203;
            }
            v122 = *(_QWORD *)&byte_8[*(_QWORD *)(v120 + 32) & 0xFFFFFFFFFFFFFFF0LL];
            LODWORD(v120) = 0;
            if ( (v122 & 8) != 0 )
              v120 = *(__int64 *)((char *)&qword_18 + (v122 & 0xFFFFFFFFFFFFFFF0LL));
            v123 = 63;
            if ( (unsigned int)v120 >> 9 == (_DWORD)v121 )
              v123 = 1;
            v124 = sub_6D5440(&v220);
            v75 = 0;
            v192 = v16;
            v76 = v123;
            v77 = v124;
            v21 = v221;
            goto LABEL_79;
          case 0x18u:
            v21 = (__int64 *)v220;
            v20 = (unsigned __int64)a1;
            ptr = v221;
            sub_18D3CC0(
              (__int64)a1,
              v220,
              (unsigned __int64 *)&ptr,
              v18,
              a5,
              a6,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64);
            result = (__int64 *)ptr;
            if ( ptr == (char *)&dword_0 + 1 )
              return result;
            v221 = (__int64 *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFFELL);
            goto LABEL_39;
          case 0x1Au:
          case 0x1Bu:
            v21 = v221;
            v76 = 62;
            v192 = 0;
            v75 = (*((_BYTE *)v221 + 1) >> 1) & 3;
            goto LABEL_142;
          case 0x1Eu:
            v125 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
            if ( sub_F58060(*v125) )
            {
              v75 = 0;
              v76 = 30;
              v192 = v16;
              v77 = v220;
              v21 = v221;
            }
            else if ( sub_F58060(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL)) )
            {
              v75 = 0;
              v76 = 31;
              v192 = v16;
              v77 = v220;
              v21 = v221;
            }
            else if ( sub_F60F80(*v125, a1[31], v159, v160, v161, v162) )
            {
              v75 = 0;
              v76 = 34;
              v192 = v16;
              v77 = v220;
              v21 = v221;
            }
            else if ( sub_F60F80(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL), a1[31], v171, v172, v173, v174) )
            {
              v75 = 0;
              v76 = 33;
              v192 = v16;
              v77 = v220;
              v21 = v221;
            }
            else
            {
              v77 = v220;
              v21 = v221;
              v180 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v220 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v180 + 16) == 13 && ((*(_WORD *)(v180 + 18) >> 3) & 0x1FF) == 0x1B4 )
              {
                v75 = 0;
                v76 = 35;
                v192 = v16;
              }
              else
              {
                v75 = 0;
                v76 = 32;
                v192 = v16;
LABEL_142:
                v77 = v220;
              }
            }
            goto LABEL_79;
          default:
            goto LABEL_39;
        }
      }
      v22 = v220;
    }
    v220 = *(_QWORD *)(v23 + 32);
    goto LABEL_12;
  }
  if ( a4[1] != 17 )
    return (__int64 *)sub_1887530(
                        (__int64)a1,
                        0,
                        a3,
                        *((_QWORD *)a4 + 6) & 0xFFFFFFFFFFFFFFF8LL,
                        (__int64)v12,
                        0,
                        (__int64)&v221,
                        1,
                        0,
                        0,
                        0,
                        0,
                        0);
  ptr = v228;
  v227 = 0x800000000LL;
  if ( (unsigned __int8)sub_183E070((__int64)a1, v12, a3, (__int64)&v221, 1u, 0, (__m128i)a7, (__int64)&ptr, 0, 0) )
LABEL_6:
    result = (_QWORD *)(&dword_0 + 1);
  else
    result = (__int64 *)sub_1887530(
                          (__int64)a1,
                          0,
                          v220,
                          *((_QWORD *)a4 + 6) & 0xFFFFFFFFFFFFFFF8LL,
                          *((_QWORD *)a4 + 5),
                          0,
                          (__int64)ptr,
                          (unsigned int)v227,
                          0,
                          0,
                          0,
                          0,
                          0);
  v14 = ptr;
  if ( ptr != v228 )
  {
LABEL_8:
    v196 = result;
    free(v14);
    return v196;
  }
  return result;
}
