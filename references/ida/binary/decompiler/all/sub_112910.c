__int64 __fastcall sub_112910(__int64 *a1, __int64 a2, char a3)
{
  __m128i *v3; // r15
  __m128i *v8; // rsi
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // r13
  _DWORD *v17; // rax
  int v18; // r9d
  char *v19; // rdi
  __int64 v20; // rax
  char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int32 v24; // eax
  _DWORD *v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r12
  unsigned int *v34; // rbx
  __int64 v35; // r13
  int v36; // edx
  __m128i *v37; // r12
  int v38; // eax
  __int64 v39; // r12
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int32 v43; // eax
  int v44; // eax
  int v45; // eax
  char *v46; // rdi
  __int64 v47; // rax
  char *v48; // rax
  char *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  char *v52; // rax
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // r12
  __int64 v56; // rax
  _DWORD *v57; // r12
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // r12
  __int64 v61; // r13
  __int64 v62; // rax
  __int64 v63; // rbx
  int v64; // eax
  __int64 v65; // rt0
  __int64 v66; // rax
  _DWORD *v67; // rcx
  __int64 v68; // r13
  unsigned int v69; // eax
  __int64 v70; // rbx
  unsigned int *v71; // rax
  unsigned int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rbx
  __int64 v75; // r13
  int v76; // eax
  __int64 v77; // r12
  __int64 v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rax
  __m128i *v81; // rax
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // rbx
  bool v85; // zf
  unsigned int *v86; // rax
  unsigned int v87; // eax
  char v88; // r8
  __int64 v89; // rax
  __int64 v90; // rax
  __m128i v91; // xmm0
  _DWORD *v92; // r13
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // r13d
  unsigned int v97; // eax
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // r13
  int v101; // eax
  __int64 v102; // r14
  __int64 v103; // rax
  __int64 v104; // rax
  int v105; // eax
  __int64 v106; // rdi
  unsigned int v107; // eax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  unsigned int v111; // r13d
  int v112; // eax
  int v113; // eax
  char v114; // r9
  int v115; // eax
  __int64 v116; // rdi
  _DWORD *v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rbx
  __int64 v120; // rax
  __int64 v121; // r13
  __int64 v122; // r12
  int v123; // eax
  _DWORD *v124; // r13
  __int64 v125; // r12
  char v126; // al
  char v127; // r13
  _DWORD *v128; // r13
  int v129; // r12d
  _DWORD *v130; // rax
  __int64 v131; // rsi
  __int64 v132; // rdi
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  char v136; // r13
  __int64 v137; // r12
  __int64 v138; // rax
  int *v139; // rax
  unsigned int v140; // ebx
  int v141; // r13d
  int v142; // edx
  int v143; // eax
  __int64 v144; // rax
  __int64 v145; // rax
  int v146; // r13d
  unsigned int v147; // eax
  int v148; // ecx
  unsigned int v149; // edx
  __int64 *v150; // rdi
  int v151; // eax
  unsigned int v152; // eax
  __int64 v153; // rdi
  char *v154; // rdi
  __int64 v155; // rax
  __int64 v156; // rcx
  char *v157; // rdx
  int *v158; // rcx
  int v159; // eax
  int v160; // edx
  _DWORD *v161; // r13
  int *v162; // rax
  __int32 v163; // eax
  int v164; // eax
  int v165; // eax
  _DWORD *v166; // rdi
  __int64 v167; // r12
  __int64 v168; // [rsp-10h] [rbp-230h]
  __int64 v169; // [rsp-8h] [rbp-228h]
  unsigned int v170; // [rsp+10h] [rbp-210h]
  int v171; // [rsp+14h] [rbp-20Ch]
  __m128i *v172; // [rsp+18h] [rbp-208h]
  char v173; // [rsp+20h] [rbp-200h]
  unsigned __int8 v174; // [rsp+20h] [rbp-200h]
  __int64 v175; // [rsp+20h] [rbp-200h]
  int v176; // [rsp+20h] [rbp-200h]
  __int64 v177; // [rsp+28h] [rbp-1F8h]
  char v178; // [rsp+28h] [rbp-1F8h]
  unsigned int v179; // [rsp+28h] [rbp-1F8h]
  int v180; // [rsp+28h] [rbp-1F8h]
  unsigned int v181; // [rsp+28h] [rbp-1F8h]
  int v182; // [rsp+28h] [rbp-1F8h]
  unsigned int v183; // [rsp+30h] [rbp-1F0h]
  _DWORD *v184; // [rsp+30h] [rbp-1F0h]
  char v185; // [rsp+30h] [rbp-1F0h]
  unsigned int v186; // [rsp+30h] [rbp-1F0h]
  int v187; // [rsp+30h] [rbp-1F0h]
  __int64 v188; // [rsp+38h] [rbp-1E8h]
  __int64 v189; // [rsp+38h] [rbp-1E8h]
  int v190; // [rsp+38h] [rbp-1E8h]
  unsigned int v191; // [rsp+38h] [rbp-1E8h]
  int v192; // [rsp+38h] [rbp-1E8h]
  _DWORD *v193; // [rsp+40h] [rbp-1E0h]
  __int64 v194; // [rsp+40h] [rbp-1E0h]
  __int64 v195; // [rsp+40h] [rbp-1E0h]
  __int64 *v196; // [rsp+40h] [rbp-1E0h]
  int v197; // [rsp+40h] [rbp-1E0h]
  __int64 v198; // [rsp+40h] [rbp-1E0h]
  _DWORD *v199; // [rsp+40h] [rbp-1E0h]
  __m128i *v200; // [rsp+48h] [rbp-1D8h]
  __int64 v201; // [rsp+48h] [rbp-1D8h]
  __int64 v202; // [rsp+48h] [rbp-1D8h]
  __int64 v203; // [rsp+48h] [rbp-1D8h]
  unsigned int v204; // [rsp+48h] [rbp-1D8h]
  __int64 v205; // [rsp+48h] [rbp-1D8h]
  __int64 v206; // [rsp+48h] [rbp-1D8h]
  int *v207; // [rsp+48h] [rbp-1D8h]
  __int64 v208; // [rsp+48h] [rbp-1D8h]
  __int64 v209; // [rsp+48h] [rbp-1D8h]
  int v210; // [rsp+50h] [rbp-1D0h]
  _DWORD *v211; // [rsp+50h] [rbp-1D0h]
  _DWORD *v212; // [rsp+50h] [rbp-1D0h]
  __int64 v213; // [rsp+50h] [rbp-1D0h]
  __int64 *v214; // [rsp+50h] [rbp-1D0h]
  __int64 v215; // [rsp+50h] [rbp-1D0h]
  unsigned int v216; // [rsp+50h] [rbp-1D0h]
  unsigned int v217; // [rsp+50h] [rbp-1D0h]
  __int64 v218; // [rsp+50h] [rbp-1D0h]
  int v219; // [rsp+50h] [rbp-1D0h]
  _DWORD *v220; // [rsp+58h] [rbp-1C8h]
  __int64 v221; // [rsp+60h] [rbp-1C0h] BYREF
  __m128i *v222; // [rsp+68h] [rbp-1B8h] BYREF
  _DWORD *v223; // [rsp+70h] [rbp-1B0h] BYREF
  __m128i *v224; // [rsp+78h] [rbp-1A8h] BYREF
  __int64 v225; // [rsp+80h] [rbp-1A0h] BYREF
  __int64 v226; // [rsp+88h] [rbp-198h] BYREF
  __int64 v227[3]; // [rsp+90h] [rbp-190h] BYREF
  __int128 v228; // [rsp+A8h] [rbp-178h]
  __m128i v229; // [rsp+C0h] [rbp-160h] BYREF
  __int64 v230; // [rsp+D0h] [rbp-150h]
  __int128 v231; // [rsp+D8h] [rbp-148h]
  __int64 v232; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v233; // [rsp+F8h] [rbp-128h]
  __int64 *v234; // [rsp+100h] [rbp-120h]
  __int64 v235; // [rsp+108h] [rbp-118h]
  __int64 v236; // [rsp+110h] [rbp-110h]
  __int64 v237; // [rsp+118h] [rbp-108h]
  __m128i *v238; // [rsp+120h] [rbp-100h]
  __int16 v239; // [rsp+128h] [rbp-F8h]
  __int64 v240; // [rsp+12Ch] [rbp-F4h]
  __int64 v241; // [rsp+134h] [rbp-ECh]
  __m256i v242; // [rsp+140h] [rbp-E0h] BYREF
  __int64 v243; // [rsp+160h] [rbp-C0h]
  __int64 v244; // [rsp+168h] [rbp-B8h]
  _DWORD *v245; // [rsp+170h] [rbp-B0h]
  __int16 v246; // [rsp+178h] [rbp-A8h]
  __int64 v247; // [rsp+17Ch] [rbp-A4h]
  __int64 v248; // [rsp+184h] [rbp-9Ch]
  __int64 v249[2]; // [rsp+190h] [rbp-90h] BYREF
  __m128i *v250; // [rsp+1A0h] [rbp-80h]
  __int64 v251; // [rsp+1A8h] [rbp-78h]
  __int64 v252; // [rsp+1B0h] [rbp-70h]
  __int64 v253; // [rsp+1B8h] [rbp-68h]
  _DWORD *v254; // [rsp+1C0h] [rbp-60h]
  __int16 v255; // [rsp+1C8h] [rbp-58h]
  __int64 v256; // [rsp+1CCh] [rbp-54h]
  __int64 v257; // [rsp+1D4h] [rbp-4Ch]
  unsigned __int64 v258; // [rsp+1E8h] [rbp-38h]

  v258 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v3 = (__m128i *)a1;
  if ( a1[7] != a2
    || (*(_BYTE *)(a2 + 4) & 0x10) != 0
    || !*(_BYTE *)(a2 + 32)
    || *(_DWORD *)(a2 + 36) >= *(_DWORD *)(*(_QWORD *)(a1[60] + 112) + 88LL) )
  {
    return 0;
  }
  v8 = (__m128i *)a1;
  v210 = sub_1110B0((__int64 **)&v229, (__int64)a1, (_DWORD *)a2);
  v9 = (a3 & 2) == 0 ? 25 : 27;
  if ( v210 )
  {
    v23 = v229.m128i_i64[0];
    v8 = (__m128i *)a1;
    if ( (unsigned __int8)sub_110830(a2, a1, a2, a2, *(_QWORD *)(v229.m128i_i64[0] + 56), v9) )
    {
LABEL_44:
      v24 = v3[1].m128i_i32[2];
      BYTE1(v24) &= ~2u;
      LOBYTE(v24) = v24 | 0x80;
      v3[1].m128i_i32[2] = v24;
      if ( (v210 & 0xFFFFFFFD) == 1 )
        sub_111460(v23);
      else
        sub_1115B0(v23);
      v25 = *(_DWORD **)(v23 + 64);
      *v25 |= 0x400u;
      sub_666A0((__int64)v25, 1u, (__int64)"JNZ64 (%d)", *(_DWORD *)(v23 + 72));
      return 1;
    }
  }
  if ( *((_DWORD *)a1 + 88) == 1 && sub_32D940(a1) == 1 )
  {
    v10 = a1[8];
    v22 = *(unsigned int *)a1[43];
    if ( (unsigned int)v22 >= *(_DWORD *)(v10 + 64) )
      goto LABEL_308;
    v200 = *(__m128i **)(*(_QWORD *)(v10 + 528) + 8 * v22);
    v193 = (_DWORD *)v200[3].m128i_i64[1];
    v210 = sub_1110B0((__int64 **)&v229, (__int64)v200, v193);
    if ( v210 )
    {
      v23 = v229.m128i_i64[0];
      if ( (unsigned __int8)sub_110830(
                              (__int64)v193,
                              v200,
                              (__int64)v193,
                              (__int64)v193,
                              *(_QWORD *)(v229.m128i_i64[0] + 56),
                              v9) )
      {
        v3 = v200;
        goto LABEL_44;
      }
    }
  }
  if ( *((_DWORD *)a1 + 19) == 4 && *(_BYTE *)(a1[7] + 64) == 7 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 43) > 1 )
      goto LABEL_50;
    v8 = (__m128i *)&v221;
    a1 = (__int64 *)sub_110EC0(a1[1], 1);
    v214 = a1;
    if ( (unsigned __int8)sub_16BBF0(a1, &v221) )
    {
      v11 = v221;
      v53 = *(_DWORD *)a2;
      if ( *(_DWORD *)v221 == 9 )
      {
        if ( *(_BYTE *)(v221 + 32) != 4 )
        {
          if ( v53 != 44 )
          {
            if ( v53 != 43 )
              goto LABEL_113;
            goto LABEL_58;
          }
LABEL_50:
          if ( (a3 & 1) == 0 )
            return 0;
          goto LABEL_12;
        }
        v221 = *(_QWORD *)(v221 + 40);
      }
      if ( v53 != 44 )
      {
        if ( v53 != 43 || *(_DWORD *)v221 == 33 )
        {
LABEL_113:
          v10 = v3[4].m128i_i64[0];
          v54 = *(unsigned int *)(a2 + 72);
          v202 = v11;
          if ( (unsigned int)v54 >= *(_DWORD *)(v10 + 64) )
            goto LABEL_308;
          v8 = 0;
          a1 = *(__int64 **)(*(_QWORD *)(v10 + 528) + 8 * v54);
          v55 = sub_110EC0((__int64)a1, 0);
          v10 = v214[8];
          v56 = *(unsigned int *)v214[46];
          if ( (unsigned int)v56 >= *(_DWORD *)(v10 + 64) )
            goto LABEL_308;
          if ( v55 == sub_110EC0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v56), 0) )
          {
            v57 = (_DWORD *)v3[4].m128i_i64[0];
            v222 = v3;
            v223 = (_DWORD *)a2;
            if ( (unsigned __int8)sub_1272C0(v57, &v222, &v223, v202 + 64) )
            {
              if ( *v223 == 4 || (unsigned __int8)sub_11D940(v223 + 8, &v229, 0) && !v229.m128i_i64[0] )
              {
                a1 = (__int64 *)v221;
                v8 = v3;
                if ( (unsigned __int8)sub_110830(v221, v3, a2, a2, v221, v9) )
                {
                  v11 = (__int64)v214;
                  v58 = *((_DWORD *)v214 + 6);
                  BYTE1(v58) &= ~2u;
                  LOBYTE(v58) = v58 | 0x80;
                  *((_DWORD *)v214 + 6) = v58;
                  v10 = v3[4].m128i_i64[0];
                  v59 = *(unsigned int *)(v3[3].m128i_i64[1] + 72);
                  if ( (unsigned int)v59 < *(_DWORD *)(v10 + 64) )
                  {
                    sub_138DE0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v59));
                    sub_138DE0(v3->m128i_i64[1]);
                    sub_111460((__int64)v3);
                    if ( v3 == v222 )
                      sub_11B160(v223);
                    *v57 |= 0x400u;
                    sub_666A0((__int64)v57, 1u, (__int64)"JNZ64 (%d)", *((_DWORD *)v214 + 18));
                    return 1;
                  }
                  goto LABEL_308;
                }
              }
            }
          }
          goto LABEL_10;
        }
LABEL_58:
        if ( (a3 & 1) == 0 )
          return 0;
        goto LABEL_59;
      }
      if ( *(_DWORD *)v221 == 32 )
        goto LABEL_113;
      goto LABEL_50;
    }
  }
LABEL_10:
  if ( (a3 & 1) == 0 )
    return 0;
  if ( *(_DWORD *)a2 != 43 )
    goto LABEL_12;
LABEL_59:
  if ( !(unsigned __int8)sub_111210((__int64)v3, v227) || !*(_QWORD *)(a2 + 16) )
    goto LABEL_402;
  v26 = _mm_loadl_epi64((const __m128i *)(v3[30].m128i_i64[0] + 112));
  v230 = 0;
  v27 = v227[0];
  v229 = _mm_unpacklo_epi64(v26, (__m128i)(unsigned __int64)a2);
  v231 = 0;
  if ( sub_111E00(&v229, (__int64)v3, v227[0]) && (unsigned __int8)sub_10FD20((__int64)v3, a2, a2 + 32, a2 + 48) )
  {
    sub_111720(&v229, (__int64)v3);
    v31 = v3[4].m128i_i64[0];
    v32 = *(unsigned int *)(v3[3].m128i_i64[1] + 72);
    if ( (unsigned int)v32 >= *(_DWORD *)(v31 + 64) )
      sub_10FF10(&v229, v3, v28, v29, v30);
    v33 = *(_QWORD *)(*(_QWORD *)(v31 + 528) + 8 * v32);
    sub_138DE0(v27);
    sub_138DE0(v33);
    sub_11B160(a2);
    sub_111350((__int64)v3, v27, v33);
    sub_666A0(v31, 1u, (__int64)"UNSIGNED-CMP64");
    if ( v230 )
    {
      *(_QWORD *)&v231 = 0;
      qfree();
    }
    return 1;
  }
  if ( v230 )
  {
    *(_QWORD *)&v231 = 0;
    qfree();
  }
  if ( *(_DWORD *)a2 == 43 )
  {
LABEL_402:
    if ( (unsigned __int8)sub_1112A0((__int64)v3, &v226, v227, 1u, 1u) )
    {
      v213 = v226;
      v34 = *(unsigned int **)(v226 + 48);
      v194 = v227[0];
      v35 = *(_QWORD *)(v227[0] + 48);
      v188 = v3[4].m128i_i64[0];
      if ( (unsigned int)(*(_DWORD *)a2 - 43) > 1 )
      {
        if ( !under_debugger )
          sub_37EA20(50167);
        goto LABEL_399;
      }
      v183 = sub_32B5C0(*v34);
      if ( v183 != *v34 && (*(_BYTE *)(a2 + 4) & 0x10) == 0 && (v34[1] & 0x10) == 0 && (*(_BYTE *)(v35 + 4) & 0x10) == 0 )
      {
        v36 = *(_DWORD *)v35;
        v37 = (__m128i *)(v35 + 48);
        v177 = *(_QWORD *)(v3[30].m128i_i64[0] + 112);
        v201 = v35 + 32;
        v229 = (__m128i)0xFFFFFFFF00000000LL;
        if ( v36 == 29 )
        {
          v37 = &v229;
          sub_11E5D0(&v229, v177, 0, *(unsigned int *)(v35 + 36), *(_QWORD *)(v35 + 24), 0);
          v36 = 40;
        }
        if ( v183 == v36 )
        {
          v81 = v37;
          v37 = (__m128i *)(v35 + 32);
          v201 = (__int64)v81;
        }
        else if ( v36 != (unsigned int)sub_32B5A0(v183) )
        {
LABEL_188:
          sub_11A960(&v229);
          goto LABEL_12;
        }
        if ( ((unsigned __int8)sub_123660(a2 + 32, v37, 0) && (unsigned __int8)sub_123660(a2 + 48, v201, 0)
           || (unsigned __int8)sub_123660(a2 + 32, v201, 0) && (unsigned __int8)sub_123660(a2 + 48, v37, 0))
          && (unsigned __int8)sub_123660(v34 + 16, v35 + 64, 0)
          && (unsigned int)sub_110000((__int64)v3, a2, (__int64)(v34 + 8), (__int64)v37, 34)
          && (unsigned int)sub_110000((__int64)v3, a2, (__int64)(v34 + 12), v201, 34) )
        {
          sub_154E70(v3, a2, v34 + 8, a2, v37, 0);
          sub_154E70(v3, a2, v34 + 12, a2, v201, 0);
          v38 = *v34;
          if ( *v34 - 29 > 0xC )
          {
            if ( *((_BYTE *)v34 + 64) != 7 )
              v34[17] *= 2;
            if ( v38 == 42 )
              v34[9] *= 2;
          }
          *v34 = v183;
          sub_11B190(v34, v177);
          sub_11B160(a2);
          sub_11B160(v35);
          sub_11A960(&v229);
          v39 = *(_QWORD *)(*(_QWORD *)(v188 + 528) + 8LL * **(int **)(v213 + 368));
          v40 = *(_DWORD *)(v194 + 72);
          v229.m128i_i64[0] = 0xFFFFFFFF00000007LL;
          v229.m128i_i64[1] = v40;
          v41 = *((_QWORD *)v34 + 1);
          if ( v41 )
            sub_122C80(v41 + 32);
          else
            sub_A24B0(v213, (__int64)v34, 55, (__int64)&v229, 0, 0);
          v229.m128i_i32[2] = *(_DWORD *)(v39 + 72);
          v42 = *(_QWORD *)(v35 + 8);
          if ( v42 )
            sub_122C80(v42 + 32);
          else
            sub_A24B0(v194, v35, 55, (__int64)&v229, 0, 0);
          v43 = v3[1].m128i_i32[2];
          BYTE1(v43) &= ~2u;
          LOBYTE(v43) = v43 | 0x80;
          v3[1].m128i_i32[2] = v43;
          v44 = *(_DWORD *)(v213 + 24);
          BYTE1(v44) &= ~2u;
          LOBYTE(v44) = v44 | 0x80;
          *(_DWORD *)(v213 + 24) = v44;
          v45 = *(_DWORD *)(v194 + 24);
          BYTE1(v45) &= ~2u;
          LOBYTE(v45) = v45 | 0x80;
          *(_DWORD *)(v194 + 24) = v45;
          v46 = (char *)v3[23].m128i_i64[0];
          v47 = v3[23].m128i_i64[1];
          v3[4].m128i_i32[3] = 3;
          v48 = &v46[4 * v47];
          if ( v46 != v48 )
          {
            while ( *(_DWORD *)(v194 + 72) != *(_DWORD *)v46 )
            {
              v46 += 4;
              if ( v48 == v46 )
                goto LABEL_99;
            }
            if ( v48 != v46 )
            {
              memmove(v46, v46 + 4, v48 - v46 - 4);
              --v3[23].m128i_i64[1];
            }
          }
LABEL_99:
          **(_DWORD **)(v194 + 344) = *(_DWORD *)(v213 + 72);
          **(_DWORD **)(v213 + 368) = *(_DWORD *)(v194 + 72);
          v49 = *(char **)(v39 + 344);
          v50 = *(_QWORD *)(v39 + 352);
          v51 = *(unsigned int *)(v213 + 72);
          v52 = &v49[4 * v50];
          if ( v49 != v52 )
          {
            while ( (_DWORD)v51 != *(_DWORD *)v49 )
            {
              v49 += 4;
              if ( v52 == v49 )
                goto LABEL_105;
            }
            if ( v52 != v49 )
            {
              memmove(v49, v49 + 4, v52 - v49 - 4);
              v50 = *(_QWORD *)(v39 + 352) - 1LL;
              *(_QWORD *)(v39 + 352) = v50;
            }
          }
LABEL_105:
          if ( !v50 )
            **(_DWORD **)(v39 + 64) |= 0x400u;
          *(_DWORD *)v188 |= 0x400u;
          sub_666A0(v188, 1u, (__int64)"SIGNED-CMP64", v51);
          sub_11A960(&v229);
          return 1;
        }
        goto LABEL_188;
      }
    }
  }
LABEL_12:
  if ( v3[4].m128i_i32[3] != 4 )
    goto LABEL_13;
  v60 = v3[3].m128i_i64[1];
  if ( *(_BYTE *)(v60 + 64) != 7 || a2 != v60 || (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
    goto LABEL_13;
  v189 = *(_QWORD *)(v3[30].m128i_i64[0] + 112);
  if ( *(_BYTE *)(a2 + 48) == 2 )
  {
    v8 = &v229;
    if ( !(unsigned __int8)sub_11D940(a2 + 48, &v229, 0) || v229.m128i_i64[0] )
      goto LABEL_13;
    goto LABEL_131;
  }
  if ( *(_BYTE *)(a2 + 32) == 2 )
  {
    v8 = &v229;
    if ( !(unsigned __int8)sub_11D940(a2 + 32, &v229, 0) || v229.m128i_i64[0] )
      goto LABEL_13;
    v203 = a2 + 48;
  }
  else
  {
    v8 = (__m128i *)(a2 + 48);
    v203 = a2 + 48;
    if ( (unsigned __int8)sub_10FE30(v189, a2 + 48, &v3[28]) )
    {
LABEL_131:
      a1 = &qword_28 + 7;
      v195 = a2 + 32;
      v203 = a2 + 32;
      goto LABEL_132;
    }
    v8 = (__m128i *)(a2 + 32);
    if ( !(unsigned __int8)sub_10FE30(v189, a2 + 32, &v3[28]) )
      goto LABEL_13;
  }
  v11 = v203;
  a1 = &qword_28 + 6;
  v195 = v60 + 32;
  if ( v60 + 32 == v203 )
    a1 = &qword_28 + 7;
LABEL_132:
  v10 = v3[4].m128i_i64[0];
  v61 = v3->m128i_i64[1];
  v62 = *(unsigned int *)(v60 + 72);
  if ( (unsigned int)v62 >= *(_DWORD *)(v10 + 64) )
    goto LABEL_308;
  v63 = *(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v62);
  v64 = *(_DWORD *)v60;
  if ( *(_DWORD *)v60 == 43 || v64 == (_DWORD)a1 )
  {
    v178 = 0;
  }
  else
  {
    if ( v64 != 44 && v64 != (unsigned int)sub_32B580(a1) )
      goto LABEL_13;
    v178 = 1;
    v65 = v63;
    v63 = v61;
    v61 = v65;
  }
  v215 = sub_110EC0(v61, 1);
  v66 = sub_110EC0(v63, 0);
  v67 = (_DWORD *)v3[4].m128i_i64[0];
  v68 = v66;
  v224 = 0;
  v225 = 0;
  v184 = v67;
  if ( *(_DWORD *)(v215 + 76) != 4
    || *(_BYTE *)(*(_QWORD *)(v215 + 56) + 64LL) != 7
    || *(_DWORD *)(v215 + 352) != 1
    || sub_32D940(v215) != 1
    || (v86 = *(unsigned int **)(v215 + 56), *v86 - 43 > 9) )
  {
    a1 = (__int64 *)v215;
    v8 = (__m128i *)v227;
    v69 = sub_16BBF0(v215, v227);
    v12 = v69;
    if ( !(_BYTE)v69 )
      goto LABEL_13;
    v70 = v227[0];
    v71 = (unsigned int *)v227[0];
    if ( *(_DWORD *)v227[0] == 9 )
    {
      if ( *(_BYTE *)(v227[0] + 32) != 4 )
        goto LABEL_13;
      v71 = *(unsigned int **)(v227[0] + 40);
      v227[0] = (__int64)v71;
    }
    v72 = *v71;
    if ( v72 != 36 )
    {
      if ( v72 > 0x24 )
      {
        if ( v72 != 37 )
          goto LABEL_13;
        v12 = 0;
      }
      else if ( v72 != 34 )
      {
        v12 = 0;
        if ( v72 != 35 )
          goto LABEL_13;
      }
    }
    v173 = v12;
    v10 = *(_QWORD *)(v215 + 64);
    v73 = **(unsigned int **)(v215 + 368);
    if ( (unsigned int)v73 >= *(_DWORD *)(v10 + 64) )
      goto LABEL_308;
    if ( v68 != sub_110EC0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v73), 0) )
      goto LABEL_13;
    v224 = v3;
    v225 = v60;
    if ( !(unsigned __int8)sub_1272C0(v184, &v224, &v225, v70 + 64)
      || *(_DWORD *)v225 != 4
      || !(unsigned __int8)sub_11D940(v225 + 32, &v229, 1) )
    {
      goto LABEL_13;
    }
    LOBYTE(v12) = v173;
    if ( v229.m128i_i64[0] )
    {
      if ( v229.m128i_i64[0] != 1 )
        goto LABEL_13;
      goto LABEL_152;
    }
LABEL_223:
    LOBYTE(v12) = v12 ^ 1;
    goto LABEL_152;
  }
  v227[0] = *(_QWORD *)(v215 + 56);
  v87 = *v86;
  if ( v87 != 47 )
  {
    if ( v87 > 0x2F )
    {
      if ( v87 != 48 )
        goto LABEL_13;
      goto LABEL_209;
    }
    if ( v87 != 45 )
    {
      if ( v87 != 46 )
        goto LABEL_13;
LABEL_209:
      v88 = 0;
      goto LABEL_210;
    }
  }
  v88 = 1;
LABEL_210:
  v8 = 0;
  v174 = v88;
  a1 = *(__int64 **)(v215 + 8);
  v89 = sub_110EC0((__int64)a1, 0);
  v12 = v174;
  if ( v68 == v89 )
    goto LABEL_223;
  v10 = *(_QWORD *)(v215 + 64);
  v90 = *(unsigned int *)(v227[0] + 72);
  if ( (unsigned int)v90 >= *(_DWORD *)(v10 + 64) )
    goto LABEL_308;
  if ( v68 == sub_110EC0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v90), 0) )
  {
    LOBYTE(v12) = v174;
LABEL_152:
    if ( (*(_BYTE *)(v227[0] + 4) & 0x10) == 0 )
    {
      v74 = v227[0] + 32;
      v75 = v227[0] + 48;
      if ( !(_BYTE)v12 )
      {
        v74 = v227[0] + 48;
        v75 = v227[0] + 32;
      }
      if ( *(_DWORD *)(v74 + 4) == *(_DWORD *)(v203 + 4)
        && (unsigned int)sub_110000((__int64)v3, v60, v74, v203, 2)
        && (unsigned __int8)sub_10FD20((__int64)v3, v60, v195, v60 + 48) )
      {
        sub_154E70(v3, v60, v74, v60, v203, 6);
        sub_128630(v74, v189, *(unsigned int *)(v74 + 4), 2);
        sub_11E3A0(v75, v189, 9, *(_QWORD *)(v227[0] + 24), *(unsigned int *)(v74 + 4));
        sub_11B190(v227[0], v189);
        v76 = *(_DWORD *)(v215 + 24);
        BYTE1(v76) &= ~2u;
        LOBYTE(v76) = v76 | 0x80;
        *(_DWORD *)(v215 + 24) = v76;
        if ( (unsigned int)(*(_DWORD *)v227[0] - 43) <= 9 )
          sub_10FF30((_QWORD *)v215);
        sub_10FF30(v3);
        if ( v178 )
          sub_1115B0((__int64)v3);
        else
          sub_111460((__int64)v3);
        if ( v3 == v224 )
          sub_11B160(v225);
        *v184 |= 0x400u;
        sub_666A0((__int64)v184, 1u, (__int64)"32U_64_JMP (%d)", *(_DWORD *)(v215 + 72));
        return 1;
      }
    }
  }
LABEL_13:
  if ( !(unsigned __int8)sub_1124B0(v3, (_DWORD *)a2) )
  {
    if ( v3[4].m128i_i32[3] != 4 )
      goto LABEL_15;
    v77 = v3[3].m128i_i64[1];
    if ( *(_BYTE *)(v77 + 64) != 7 || a2 != v77 || (unsigned int)(*(_DWORD *)a2 - 43) > 1 )
    {
LABEL_170:
      if ( *(_BYTE *)(v77 + 64) != 7 || a2 != v77 || (unsigned int)(*(_DWORD *)a2 - 45) > 7 )
        goto LABEL_171;
      v91 = _mm_loadl_epi64(v3 + 4);
      v247 = 0;
      v248 = 0;
      v244 = 0;
      v245 = 0;
      v246 = 0;
      v243 = a2;
      *(_OWORD *)&v242.m256i_u64[2] = 0;
      *(__m128i *)v242.m256i_i8 = _mm_unpacklo_epi64(v91, (__m128i)(unsigned __int64)v3);
      if ( (unsigned __int8)sub_1120B0(v242.m256i_i64, 2) )
      {
        v92 = v245;
        v93 = v242.m256i_i64[3];
        v8 = 0;
        v196 = (__int64 *)v245;
        HIDWORD(v248) = *v245;
        a1 = *(__int64 **)(v242.m256i_i64[3] + 8);
        v216 = HIDWORD(v248);
        v94 = sub_110EC0((__int64)a1, 0);
        v10 = v242.m256i_i64[0];
        v11 = *(unsigned int *)(v94 + 72);
        v95 = (unsigned int)v92[18];
        v190 = v11;
        if ( (unsigned int)v95 >= *(_DWORD *)(v242.m256i_i64[0] + 64) )
          goto LABEL_308;
        v96 = *(_DWORD *)(sub_110EC0(*(_QWORD *)(*(_QWORD *)(v242.m256i_i64[0] + 528) + 8 * v95), 0) + 72);
        v204 = v248;
        if ( v204 != (unsigned int)sub_32B690((unsigned int)v248) )
        {
          v216 = sub_32B5C0(v216);
          HIDWORD(v248) = v216;
        }
        v97 = sub_32B800(v216);
        v11 = (unsigned int)v247;
        v10 = v97;
        if ( (_DWORD)v247 )
        {
          if ( v190 == (_DWORD)v247 )
          {
            v187 = v247;
            v101 = sub_32B5A0(v97);
            LODWORD(v11) = v187;
            LODWORD(v10) = v101;
          }
          else
          {
            if ( v96 != (_DWORD)v247 )
              goto LABEL_253;
            v96 = v190;
          }
        }
        v186 = v10;
        v179 = v11;
        v98 = sub_32B5A0(v204);
        v10 = v186;
        if ( v98 == v186 )
        {
          if ( !HIDWORD(v247) || v96 == HIDWORD(v247) )
          {
            v100 = v77 + 32;
            v99 = v77 + 48;
LABEL_248:
            if ( *(_DWORD *)(v93 + 76) == 4
              && *(_BYTE *)(*(_QWORD *)(v93 + 56) + 64LL) == 7
              && *(_DWORD *)(v93 + 352) == 1 )
            {
              v205 = v99;
              if ( sub_32D940(v93) == 1 && (unsigned int)(**(_DWORD **)(v93 + 56) - 43) <= 9 )
              {
                if ( (unsigned __int8)sub_12DCD0(v3, v77, v205, v77, v196 + 4)
                  && (unsigned __int8)sub_12DCD0(v3, v77, v100, v77, v196 + 6) )
                {
                  a1 = v196;
                  *(_DWORD *)v196 = v216;
                  v8 = *(__m128i **)(v3[30].m128i_i64[0] + 112);
                  sub_11B190(v196, v8);
                  v102 = v242.m256i_i64[1];
                  v10 = *(_QWORD *)(v242.m256i_i64[1] + 64);
                  v103 = *(unsigned int *)(*(_QWORD *)(v242.m256i_i64[1] + 56) + 72LL);
                  if ( (unsigned int)v103 < *(_DWORD *)(v10 + 64) )
                  {
                    sub_138DE0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v103));
                    a1 = *(__int64 **)(v102 + 8);
                    sub_138DE0(a1);
                    v10 = *(_QWORD *)(v93 + 64);
                    v104 = *(unsigned int *)(*(_QWORD *)(v93 + 56) + 72LL);
                    if ( (unsigned int)v104 < *(_DWORD *)(v10 + 64) )
                    {
                      sub_138DE0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v104));
                      sub_138DE0(*(_QWORD *)(v93 + 8));
                      v105 = *(_DWORD *)(v93 + 24);
                      BYTE1(v105) &= ~2u;
                      LOBYTE(v105) = v105 | 0x80;
                      *(_DWORD *)(v93 + 24) = v105;
                      if ( (_BYTE)v246 )
                        sub_1115B0(v102);
                      else
                        sub_111460(v102);
                      *(_DWORD *)v3[4].m128i_i64[0] |= 0x400u;
                      sub_666A0(v3[4].m128i_i64[0], 1u, (__int64)"CMP64-JMP2");
                      return 1;
                    }
                  }
LABEL_308:
                  sub_10FF10(a1, v8, v10, v11, v12);
                }
                goto LABEL_253;
              }
            }
            if ( !under_debugger )
              sub_37EA20(52390);
LABEL_399:
            BUG();
          }
        }
        else if ( v204 == v186 )
        {
          v11 = v179;
          if ( v179 )
          {
            if ( !HIDWORD(v247) || v96 == HIDWORD(v247) )
              goto LABEL_247;
          }
          else if ( v190 == HIDWORD(v247) || !HIDWORD(v247) )
          {
LABEL_247:
            v99 = v77 + 32;
            v100 = v77 + 48;
            goto LABEL_248;
          }
        }
      }
LABEL_253:
      if ( v3[4].m128i_i32[3] != 4 )
        goto LABEL_15;
      v77 = v3[3].m128i_i64[1];
LABEL_171:
      if ( *(_BYTE *)(v77 + 64) != 7 )
        goto LABEL_15;
      if ( a2 != v77 )
        goto LABEL_15;
      if ( (unsigned int)(*(_DWORD *)a2 - 43) > 9 )
        goto LABEL_15;
      if ( *(_BYTE *)(a2 + 48) != 2 )
        goto LABEL_15;
      v78 = v3[4].m128i_i64[0];
      v255 = 0;
      v256 = 0;
      v249[0] = v78;
      v257 = 0;
      v249[1] = 0;
      v251 = 0;
      v252 = 0;
      v254 = 0;
      v250 = v3;
      v253 = a2;
      if ( !(unsigned __int8)sub_1122B0(v249, 0, v10, v11, v12) )
        goto LABEL_15;
      if ( v3[4].m128i_i32[3] == 4
        && *(_BYTE *)(v3[3].m128i_i64[1] + 64) == 7
        && v3[22].m128i_i32[0] == 1
        && sub_32D940(v3) == 1
        && (unsigned int)(*(_DWORD *)v3[3].m128i_i64[1] - 43) <= 9 )
      {
        v153 = v3[1].m128i_i64[0];
        if ( v153 )
        {
          if ( (unsigned __int8)sub_1124B0((__m128i *)v153, *(_DWORD **)(v153 + 56)) )
            return 1;
        }
      }
      if ( (unsigned int)(*(_DWORD *)v77 - 43) <= 1 && (unsigned __int8)sub_11D940(v254 + 12, &v226, 1) )
      {
        if ( sub_A15D0(v77 + 48, -1, 1u) && v226 != -1 )
        {
          LODWORD(v257) = 47;
          goto LABEL_346;
        }
        if ( sub_A15D0(v77 + 48, 0, 0) && v226 )
        {
          LODWORD(v257) = 46;
          goto LABEL_346;
        }
      }
      if ( !(_DWORD)v257 )
      {
        v79 = *(_QWORD *)(v3[30].m128i_i64[0] + 112);
        v229.m128i_i64[0] = 0;
        v229.m128i_i8[8] = 0;
        if ( !(unsigned __int8)sub_1DD3B0(&v229, v79, &v224, v77 + 32) )
          goto LABEL_15;
        v242.m256i_i32[0] = 0;
        v242.m256i_i32[1] = (int)v224;
        memset(&v242.m256i_u64[1], 0, 24);
        if ( !(unsigned __int8)sub_1DD600((int)v3 + 448, (unsigned int)&v242, (unsigned int)&v229, 1, 0, 0)
          || !(unsigned __int8)sub_30F5B0(&v242, &v225, v227)
          || (unsigned int)v225 <= 1
          || (v80 = sub_327770(*(_QWORD *)(*(_QWORD *)(v77 + 56) + 16LL), *(unsigned int *)(v77 + 52), 0), v227[0] != v80) )
        {
          sub_30F600(&v242);
          goto LABEL_15;
        }
        LODWORD(v257) = sub_32B580((unsigned int)(v225 + 43));
        sub_30F600(&v242);
      }
LABEL_346:
      v140 = v257;
      v141 = sub_32B5A0((unsigned int)v257);
      v142 = sub_32B760(v140);
      v143 = *(_DWORD *)v77;
      if ( (unsigned int)(*(_DWORD *)v77 - 43) <= 1 || v141 == v143 || v142 == v143 )
      {
        v8 = 0;
        a1 = *(__int64 **)(v251 + 8);
        v209 = v251;
        v144 = sub_110EC0((__int64)a1, 0);
        v10 = v249[0];
        v219 = *(_DWORD *)(v144 + 72);
        v199 = v254;
        v145 = (unsigned int)v254[18];
        if ( (unsigned int)v145 >= *(_DWORD *)(v249[0] + 64) )
          goto LABEL_308;
        v146 = *(_DWORD *)(sub_110EC0(*(_QWORD *)(*(_QWORD *)(v249[0] + 528) + 8 * v145), 0) + 72);
        if ( v140 != (unsigned int)sub_32B690(v140) )
          HIDWORD(v257) = sub_32B5C0(HIDWORD(v257));
        v192 = HIDWORD(v257);
        v147 = sub_32B800(HIDWORD(v257));
        v148 = v256;
        v149 = v147;
        if ( (_DWORD)v256 )
        {
          if ( v219 == (_DWORD)v256 )
          {
            v182 = v256;
            v152 = sub_32B5A0(v147);
            v148 = v182;
            v149 = v152;
          }
          else
          {
            if ( v146 != (_DWORD)v256 )
              goto LABEL_15;
            v146 = v219;
          }
        }
        v181 = v149;
        v176 = v148;
        if ( (unsigned int)sub_32B5A0(v140) != v149 )
        {
          if ( v140 != v181 )
            goto LABEL_15;
          if ( !v176 )
            v146 = v219;
        }
        if ( (!HIDWORD(v256) || HIDWORD(v256) == v146)
          && (unsigned __int8)sub_110830((__int64)v199, v3, v77, v77, (__int64)v199, 3) )
        {
          v150 = (__int64 *)v250;
          *v199 = v192;
          sub_10FF30(v150);
          sub_10FF30((_QWORD *)v209);
          v151 = *(_DWORD *)(v209 + 24);
          BYTE1(v151) &= ~2u;
          LOBYTE(v151) = v151 | 0x80;
          *(_DWORD *)(v209 + 24) = v151;
          sub_112480((__int64)v249, 1);
          *(_DWORD *)v3[4].m128i_i64[0] |= 0x400u;
          sub_666A0(v3[4].m128i_i64[0], 1u, (__int64)"CMP64-VALRANGES-JMP2 (%d)", *(_DWORD *)(v209 + 72));
          return 1;
        }
      }
LABEL_15:
      if ( !(unsigned __int8)sub_111210((__int64)v3, &v224)
        || *(_DWORD *)a2 != 44
        || (v116 = sub_11A460(a2, &v225)) == 0
        || !(unsigned __int8)sub_11D940(v116, &v229, 0)
        || v229.m128i_i64[0]
        || *(_BYTE *)v225 != 4
        || (v117 = *(_DWORD **)(v225 + 8), *v117 != 20)
        || !v117
        || (v118 = sub_11A460(v117, &v226), (v119 = v118) == 0)
        || sub_327770(*(_QWORD *)(*(_QWORD *)(v118 + 8) + 16LL), *(unsigned int *)(v118 + 4), 1) != 32
        || *(_DWORD *)(v119 + 4) != 1 )
      {
LABEL_17:
        if ( *(_DWORD *)a2 == 45 )
        {
          if ( (unsigned __int8)sub_11D940(a2 + 48, &v229, 1) )
          {
            if ( v229.m128i_i64[0] == 32 && *(_DWORD *)(a2 + 36) == 1 )
            {
              if ( (unsigned __int8)sub_1112A0((__int64)v3, v227, v229.m128i_i64, 0xFFFFFFFF, 2u) )
              {
                v13 = v227[0];
                if ( (unsigned __int64)sub_32D940(v227[0]) > 1 )
                {
                  v14 = v229.m128i_i64[0];
                  if ( (unsigned __int64)sub_32D940(v229.m128i_i64[0]) > 1 )
                  {
                    v211 = (_DWORD *)sub_1204A0(*(_QWORD *)(v13 + 48));
                    v15 = sub_10FF70((__int64)v211);
                    if ( v15 )
                    {
                      if ( (unsigned __int8)sub_123660(v15, a2 + 32, 0) )
                      {
                        if ( *v211 == 23 )
                        {
                          v16 = *(_QWORD *)(v14 + 48);
                          if ( *(_DWORD *)v16 == 9 )
                          {
                            if ( (unsigned __int8)sub_123660(v16 + 64, v211 + 16, 0) )
                            {
                              if ( *(_DWORD *)(v16 + 36) == 4 )
                              {
                                if ( (unsigned __int8)sub_12DCD0(v13, v211, v16 + 32, v211, v211 + 8) )
                                {
                                  v17 = (_DWORD *)sub_1204A0(*(_QWORD *)(v16 + 8));
                                  v220 = v17;
                                  if ( *v17 == 23 )
                                  {
                                    v212 = v211 + 12;
                                    if ( (unsigned __int8)sub_123660(v17 + 12, v212, 0) )
                                    {
                                      if ( (unsigned __int8)sub_123660(v220 + 8, v220 + 16, 0)
                                        && (unsigned __int8)sub_12AA10(
                                                              v3[4].m128i_i64[0],
                                                              (int)v220 + 32,
                                                              (int)v16 + 32,
                                                              0,
                                                              0,
                                                              v18) )
                                      {
                                        sub_122C80(v212);
                                        sub_11B160(a2);
                                        sub_11B160(v16);
                                        sub_11B160(v220);
                                        v19 = (char *)v3[23].m128i_i64[0];
                                        v20 = v3[23].m128i_i64[1];
                                        v3[4].m128i_i32[3] = 3;
                                        v21 = &v19[4 * v20];
                                        while ( v21 != v19 )
                                        {
                                          if ( *(_DWORD *)(v14 + 72) == *(_DWORD *)v19 )
                                          {
                                            memmove(v19, v19 + 4, v21 - v19 - 4);
                                            --v3[23].m128i_i64[1];
                                            break;
                                          }
                                          v19 += 4;
                                        }
                                        v154 = *(char **)(v14 + 344);
                                        v155 = *(_QWORD *)(v14 + 352);
                                        v156 = v3[4].m128i_u32[2];
                                        v157 = &v154[4 * v155];
                                        while ( v157 != v154 )
                                        {
                                          if ( (_DWORD)v156 == *(_DWORD *)v154 )
                                          {
                                            memmove(v154, v154 + 4, v157 - v154 - 4);
                                            v155 = *(_QWORD *)(v14 + 352) - 1LL;
                                            *(_QWORD *)(v14 + 352) = v155;
                                            break;
                                          }
                                          v154 += 4;
                                        }
                                        if ( !v155 )
                                          **(_DWORD **)(v14 + 64) |= 0x400u;
                                        v163 = v3[1].m128i_i32[2];
                                        BYTE1(v163) &= ~2u;
                                        LOBYTE(v163) = v163 | 0x80;
                                        v3[1].m128i_i32[2] = v163;
                                        v164 = *(_DWORD *)(v13 + 24);
                                        BYTE1(v164) &= ~2u;
                                        LOBYTE(v164) = v164 | 0x80;
                                        *(_DWORD *)(v13 + 24) = v164;
                                        v165 = *(_DWORD *)(v14 + 24);
                                        BYTE1(v165) &= ~2u;
                                        LOBYTE(v165) = v165 | 0x80;
                                        *(_DWORD *)(v14 + 24) = v165;
                                        v166 = (_DWORD *)v3[4].m128i_i64[0];
                                        *v166 |= 0x400u;
                                        sub_666A0((__int64)v166, 1u, (__int64)"SAR2-64", v156);
                                        return 1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        return 0;
      }
      memset(v227, 0, sizeof(v227));
      v218 = (__int64)v224;
      v228 = 0;
      v120 = sub_32D940(v224);
      if ( v120 != 1 )
      {
        if ( v120 != 2 )
          goto LABEL_307;
        v121 = v226;
        v122 = sub_1204A0(*(_QWORD *)(v218 + 48));
        v207 = (int *)sub_1204A0(*(_QWORD *)(v122 + 8));
        v123 = *v207;
        if ( *(_DWORD *)v122 == 4 )
        {
          if ( v123 != 22 )
          {
            if ( v123 != 4 )
              goto LABEL_307;
            v124 = v207 + 8;
            if ( (unsigned __int8)sub_11D940(v207 + 8, &v229, 0) && !v229.m128i_i64[0] )
            {
              v162 = (int *)v122;
              v122 = (__int64)v207;
              v124 = v162 + 8;
              v207 = v162;
            }
            else if ( !(unsigned __int8)sub_11D940(v122 + 32, &v229, 0) || v229.m128i_i64[0] )
            {
              goto LABEL_307;
            }
            v125 = v122 + 64;
            v126 = sub_123660(v124, v125, 0);
            v127 = 0;
            if ( !v126 )
            {
LABEL_307:
              sub_92DA0((__int64)v227);
              goto LABEL_17;
            }
            goto LABEL_320;
          }
        }
        else
        {
          if ( v123 != 4 || *(_DWORD *)v122 != 22 )
            goto LABEL_307;
          v139 = (int *)v122;
          v122 = (__int64)v207;
          v207 = v139;
        }
        if ( !(unsigned __int8)sub_11D940(v122 + 32, &v229, 0) )
          goto LABEL_307;
        if ( v229.m128i_i64[0] )
          goto LABEL_307;
        v127 = sub_123660(v207 + 12, v121, 0);
        if ( !v127 )
          goto LABEL_307;
        v125 = v122 + 64;
LABEL_320:
        sub_125AC0(v218, v227, v125, 0);
        sub_125AC0(v218, v227, v207 + 16, 0);
        if ( v127 )
          v128 = v207 + 8;
        else
          v128 = 0;
        v129 = 22;
LABEL_323:
        v130 = (_DWORD *)sub_126C30((_DWORD)v3, (unsigned int)v227, a2, 0, 0, 0, 257);
        v208 = (__int64)v130;
        if ( v130 && *v130 == v129 )
        {
          sub_125510(&v229, v218, v130, 0);
          if ( !(unsigned int)sub_120730(&v229, v227)
            && (!v128 || (unsigned __int8)sub_12FCA0(v3, v208, v128, v208, v208 + 32))
            && (v131 = sub_10FF70(v208)) != 0
            && (v132 = v226, (v136 = sub_123660(v226, v131, 0)) != 0) )
          {
            v137 = v3[4].m128i_i64[0];
            v138 = *(unsigned int *)(v3[3].m128i_i64[1] + 72);
            if ( (unsigned int)v138 >= *(_DWORD *)(v137 + 64) )
              sub_10FF10(v132, v131, v133, v134, v135);
            v198 = *(_QWORD *)(*(_QWORD *)(v137 + 528) + 8 * v138);
            sub_122C80(v208 + 48);
            sub_11B160(a2);
            sub_1128B0(v218);
            sub_111350((__int64)v3, v218, v198);
            sub_666A0(v137, 1u, (__int64)"SAR64");
          }
          else
          {
            v136 = 0;
          }
          sub_92DA0((__int64)&v229);
          sub_92DA0((__int64)v227);
          if ( v136 )
            return 1;
          goto LABEL_17;
        }
        goto LABEL_307;
      }
      v158 = *(int **)(v218 + 56);
      v159 = *v158;
      v160 = v158[9];
      if ( *v158 == 24 )
      {
        if ( v160 != 8 )
          goto LABEL_307;
        v161 = v158 + 16;
        v167 = *(_QWORD *)(v218 + 56);
        if ( !(unsigned __int8)sub_123660(v158 + 8, v158 + 16, 0) || !sub_A15D0(v167 + 48, 32, 1u) )
          goto LABEL_307;
      }
      else
      {
        if ( v160 != 4 || v158[17] != 8 )
          goto LABEL_307;
        if ( v159 == 9 )
        {
          v129 = 23;
          v161 = v158 + 16;
          goto LABEL_388;
        }
        if ( v159 != 8 )
          goto LABEL_307;
        v161 = v158 + 16;
      }
      v129 = 24;
LABEL_388:
      sub_125AC0(v218, v227, v161, 0);
      v128 = 0;
      goto LABEL_323;
    }
    v82 = v3[4].m128i_i64[0];
    v239 = 0;
    v240 = 0;
    v232 = v82;
    v241 = 0;
    a1 = &v232;
    v233 = 0;
    v235 = 0;
    v236 = 0;
    v238 = 0;
    v8 = (__m128i *)&byte_1;
    v234 = (__int64 *)v3;
    v237 = a2;
    v185 = sub_1122B0(&v232, 1, v10, v11, v12);
    if ( v185 )
    {
      v83 = v232;
      if ( HIDWORD(v240) >= *(_DWORD *)(v232 + 64) )
        goto LABEL_308;
      v10 = *(_QWORD *)(v232 + 528);
      v84 = *(_QWORD *)(v10 + 8LL * HIDWORD(v240));
      v85 = *(_DWORD *)(v84 + 76) == 4;
      v233 = v84;
      if ( v85 && *(_BYTE *)(*(_QWORD *)(v84 + 56) + 64LL) == 7 && *(_DWORD *)(v84 + 352) == 1 && sub_32D940(v84) == 1 )
      {
        v11 = *(_QWORD *)(v84 + 56);
        v106 = *(unsigned int *)v11;
        if ( (unsigned int)(v106 - 43) <= 9 )
        {
          v236 = *(_QWORD *)(v84 + 56);
          v206 = v236;
          LOBYTE(v239) = 0;
          v107 = sub_32B800(v106);
          a1 = *(__int64 **)(v84 + 8);
          v217 = v107;
          LODWORD(v241) = v107;
          v108 = sub_110EC0((__int64)a1, 0);
          v11 = v206;
          v8 = (__m128i *)*(unsigned int *)(v108 + 72);
          v109 = *(unsigned int *)(v206 + 72);
          v180 = (int)v8;
          HIDWORD(v240) = (_DWORD)v8;
          if ( (unsigned int)v109 >= *(_DWORD *)(v83 + 64) )
            goto LABEL_308;
          v197 = *(_DWORD *)(sub_110EC0(*(_QWORD *)(*(_QWORD *)(v83 + 528) + 8 * v109), 0) + 72);
          LODWORD(v240) = v197;
          a1 = *(__int64 **)(v235 + 8);
          v175 = v235;
          v191 = *(_DWORD *)(sub_110EC0((__int64)a1, 0) + 72);
          v8 = v238;
          v172 = v238;
          v110 = v238[4].m128i_u32[2];
          if ( (unsigned int)v110 >= *(_DWORD *)(v83 + 64) )
            goto LABEL_308;
          v111 = *(_DWORD *)(sub_110EC0(*(_QWORD *)(*(_QWORD *)(v83 + 528) + 8 * v110), 0) + 72);
          if ( v217 != (unsigned int)sub_32B690(v217) )
            HIDWORD(v241) = sub_32B5C0(HIDWORD(v241));
          v171 = HIDWORD(v241);
          v10 = (unsigned int)sub_32B800(HIDWORD(v241));
          if ( v197 )
          {
            v11 = v191;
            if ( v197 == v191 )
            {
              LODWORD(v10) = sub_32B5A0((unsigned int)v10);
            }
            else
            {
              if ( v197 != v111 )
                goto LABEL_195;
              v111 = v191;
            }
          }
          v170 = v10;
          v112 = sub_32B5A0(v217);
          v10 = v170;
          if ( v112 == v170 )
            goto LABEL_286;
          if ( v217 == v170 )
          {
            v185 = 0;
            if ( !v197 )
              v111 = v191;
LABEL_286:
            if ( !v180 || v180 == v111 )
            {
              v113 = sub_12DF60(
                       *(_QWORD *)(v3[30].m128i_i64[0] + 112),
                       (_DWORD)v3,
                       v77,
                       v77,
                       v77,
                       (int)v206 + 32,
                       v206 + 48,
                       2);
              v10 = v168;
              v11 = v169;
              if ( v113 )
              {
                v114 = 7;
                if ( !v185 )
                  v114 = 3;
                if ( (unsigned __int8)sub_110830((__int64)v172, v3, v77, v206, (__int64)v172, v114) )
                {
                  v172->m128i_i32[0] = v171;
                  sub_10FF30((_QWORD *)v84);
                  sub_10FF30(v234);
                  sub_10FF30((_QWORD *)v175);
                  v115 = *(_DWORD *)(v175 + 24);
                  BYTE1(v115) &= ~2u;
                  LOBYTE(v115) = v115 | 0x80;
                  *(_DWORD *)(v175 + 24) = v115;
                  sub_112480((__int64)&v232, 0);
                  sub_112480((__int64)&v232, 1);
                  *(_DWORD *)v3[4].m128i_i64[0] |= 0x400u;
                  sub_666A0(v3[4].m128i_i64[0], 1u, (__int64)"3CHECK64-JNZ (%d)", *(_DWORD *)(v175 + 72));
                  return 1;
                }
              }
            }
          }
        }
      }
    }
LABEL_195:
    if ( v3[4].m128i_i32[3] != 4 )
      goto LABEL_15;
    v77 = v3[3].m128i_i64[1];
    goto LABEL_170;
  }
  return 1;
}
