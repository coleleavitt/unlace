__int64 __fastcall sub_113B10(__int64 *a1, __int64 a2, char a3)
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
  __m128i *v34; // rbx
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
  int v121; // r8d
  int v122; // r9d
  __int64 v123; // r13
  __int64 v124; // r12
  int v125; // eax
  _DWORD *v126; // r13
  __int64 v127; // r12
  char v128; // al
  int v129; // r8d
  int v130; // r9d
  char v131; // r13
  int v132; // r8d
  int v133; // r9d
  _DWORD *v134; // r13
  int v135; // r12d
  _DWORD *v136; // rax
  __int64 v137; // rsi
  __int64 v138; // rdi
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // r8
  char v142; // r13
  __int64 v143; // r12
  __int64 v144; // rax
  int *v145; // rax
  unsigned int v146; // ebx
  int v147; // r13d
  int v148; // edx
  int v149; // eax
  __int64 v150; // rax
  __int64 v151; // rax
  int v152; // r13d
  unsigned int v153; // eax
  int v154; // ecx
  unsigned int v155; // edx
  __int64 *v156; // rdi
  int v157; // eax
  unsigned int v158; // eax
  __int64 v159; // rdi
  char *v160; // rdi
  __int64 v161; // rax
  __int64 v162; // rcx
  char *v163; // rdx
  int *v164; // rcx
  int v165; // eax
  int v166; // edx
  __int64 v167; // r13
  int *v168; // rax
  __int32 v169; // eax
  int v170; // eax
  int v171; // eax
  _DWORD *v172; // rdi
  __int64 v173; // r12
  __int64 v174; // [rsp-10h] [rbp-230h]
  __int64 v175; // [rsp-8h] [rbp-228h]
  int v176; // [rsp+0h] [rbp-220h]
  int v177; // [rsp+0h] [rbp-220h]
  __int64 *v178; // [rsp+8h] [rbp-218h]
  int v179; // [rsp+8h] [rbp-218h]
  unsigned int v180; // [rsp+10h] [rbp-210h]
  int v181; // [rsp+10h] [rbp-210h]
  int v182; // [rsp+14h] [rbp-20Ch]
  __m128i *v183; // [rsp+18h] [rbp-208h]
  int v184; // [rsp+18h] [rbp-208h]
  __int64 m128i_i64; // [rsp+20h] [rbp-200h]
  __int64 v186; // [rsp+20h] [rbp-200h]
  __int64 v187; // [rsp+28h] [rbp-1F8h]
  char v188; // [rsp+28h] [rbp-1F8h]
  unsigned int v189; // [rsp+28h] [rbp-1F8h]
  int v190; // [rsp+28h] [rbp-1F8h]
  unsigned int v191; // [rsp+28h] [rbp-1F8h]
  int v192; // [rsp+28h] [rbp-1F8h]
  unsigned int v193; // [rsp+30h] [rbp-1F0h]
  _DWORD *v194; // [rsp+30h] [rbp-1F0h]
  char v195; // [rsp+30h] [rbp-1F0h]
  unsigned int v196; // [rsp+30h] [rbp-1F0h]
  int v197; // [rsp+30h] [rbp-1F0h]
  __int64 v198; // [rsp+38h] [rbp-1E8h]
  __int64 v199; // [rsp+38h] [rbp-1E8h]
  int v200; // [rsp+38h] [rbp-1E8h]
  unsigned int v201; // [rsp+38h] [rbp-1E8h]
  int v202; // [rsp+38h] [rbp-1E8h]
  _DWORD *v203; // [rsp+40h] [rbp-1E0h]
  __int64 v204; // [rsp+40h] [rbp-1E0h]
  __int64 v205; // [rsp+40h] [rbp-1E0h]
  __int64 *v206; // [rsp+40h] [rbp-1E0h]
  int v207; // [rsp+40h] [rbp-1E0h]
  __int64 v208; // [rsp+40h] [rbp-1E0h]
  _DWORD *v209; // [rsp+40h] [rbp-1E0h]
  __m128i *v210; // [rsp+48h] [rbp-1D8h]
  __int64 v211; // [rsp+48h] [rbp-1D8h]
  __int64 v212; // [rsp+48h] [rbp-1D8h]
  __int64 v213; // [rsp+48h] [rbp-1D8h]
  unsigned int v214; // [rsp+48h] [rbp-1D8h]
  __int64 v215; // [rsp+48h] [rbp-1D8h]
  __int64 v216; // [rsp+48h] [rbp-1D8h]
  int *v217; // [rsp+48h] [rbp-1D8h]
  __int64 v218; // [rsp+48h] [rbp-1D8h]
  __int64 v219; // [rsp+48h] [rbp-1D8h]
  int v220; // [rsp+50h] [rbp-1D0h]
  _DWORD *v221; // [rsp+50h] [rbp-1D0h]
  _DWORD *v222; // [rsp+50h] [rbp-1D0h]
  __int64 v223; // [rsp+50h] [rbp-1D0h]
  __int64 *v224; // [rsp+50h] [rbp-1D0h]
  __int64 v225; // [rsp+50h] [rbp-1D0h]
  unsigned int v226; // [rsp+50h] [rbp-1D0h]
  unsigned int v227; // [rsp+50h] [rbp-1D0h]
  __int64 v228; // [rsp+50h] [rbp-1D0h]
  int v229; // [rsp+50h] [rbp-1D0h]
  _DWORD *v230; // [rsp+58h] [rbp-1C8h]
  __int64 v231; // [rsp+60h] [rbp-1C0h] BYREF
  __m128i *v232; // [rsp+68h] [rbp-1B8h] BYREF
  _DWORD *v233; // [rsp+70h] [rbp-1B0h] BYREF
  __m128i *v234; // [rsp+78h] [rbp-1A8h] BYREF
  __int64 v235; // [rsp+80h] [rbp-1A0h] BYREF
  __int64 v236; // [rsp+88h] [rbp-198h] BYREF
  __int64 v237[3]; // [rsp+90h] [rbp-190h] BYREF
  __int128 v238; // [rsp+A8h] [rbp-178h]
  __m128i v239; // [rsp+C0h] [rbp-160h] BYREF
  __int64 v240; // [rsp+D0h] [rbp-150h]
  __int128 v241; // [rsp+D8h] [rbp-148h]
  __int64 v242; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v243; // [rsp+F8h] [rbp-128h]
  __int64 *v244; // [rsp+100h] [rbp-120h]
  __int64 v245; // [rsp+108h] [rbp-118h]
  __int64 v246; // [rsp+110h] [rbp-110h]
  __int64 v247; // [rsp+118h] [rbp-108h]
  __m128i *v248; // [rsp+120h] [rbp-100h]
  __int16 v249; // [rsp+128h] [rbp-F8h]
  __int64 v250; // [rsp+12Ch] [rbp-F4h]
  __int64 v251; // [rsp+134h] [rbp-ECh]
  __m256i v252; // [rsp+140h] [rbp-E0h] BYREF
  __int64 v253; // [rsp+160h] [rbp-C0h]
  __int64 v254; // [rsp+168h] [rbp-B8h]
  _DWORD *v255; // [rsp+170h] [rbp-B0h]
  __int16 v256; // [rsp+178h] [rbp-A8h]
  __int64 v257; // [rsp+17Ch] [rbp-A4h]
  __int64 v258; // [rsp+184h] [rbp-9Ch]
  __int64 v259[2]; // [rsp+190h] [rbp-90h] BYREF
  __m128i *v260; // [rsp+1A0h] [rbp-80h]
  __int64 v261; // [rsp+1A8h] [rbp-78h]
  __int64 v262; // [rsp+1B0h] [rbp-70h]
  __int64 v263; // [rsp+1B8h] [rbp-68h]
  _DWORD *v264; // [rsp+1C0h] [rbp-60h]
  __int16 v265; // [rsp+1C8h] [rbp-58h]
  __int64 v266; // [rsp+1CCh] [rbp-54h]
  __int64 v267; // [rsp+1D4h] [rbp-4Ch]
  unsigned __int64 v268; // [rsp+1E8h] [rbp-38h]

  v268 = __readfsqword(0x28u);
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
  v220 = sub_1122B0((__int64 **)&v239, (__int64)a1, (_DWORD *)a2);
  v9 = (a3 & 2) == 0 ? 25 : 27;
  if ( v220 )
  {
    v23 = v239.m128i_i64[0];
    v8 = (__m128i *)a1;
    if ( (unsigned __int8)sub_111A30(a2, a1, a2, a2, *(_QWORD *)(v239.m128i_i64[0] + 56), v9) )
    {
LABEL_44:
      v24 = v3[1].m128i_i32[2];
      BYTE1(v24) &= ~2u;
      LOBYTE(v24) = v24 | 0x80;
      v3[1].m128i_i32[2] = v24;
      if ( (v220 & 0xFFFFFFFD) == 1 )
        sub_112660(v23);
      else
        sub_1127B0(v23);
      v25 = *(_DWORD **)(v23 + 64);
      *v25 |= 0x400u;
      sub_66FA0((__int64)v25, 1u, (__int64)"JNZ64 (%d)", *(_DWORD *)(v23 + 72));
      return 1;
    }
  }
  if ( *((_DWORD *)a1 + 88) == 1 && sub_330DE0(a1) == 1 )
  {
    v10 = a1[8];
    v22 = *(unsigned int *)a1[43];
    if ( (unsigned int)v22 >= *(_DWORD *)(v10 + 64) )
      goto LABEL_308;
    v210 = *(__m128i **)(*(_QWORD *)(v10 + 528) + 8 * v22);
    v203 = (_DWORD *)v210[3].m128i_i64[1];
    v220 = sub_1122B0((__int64 **)&v239, (__int64)v210, v203);
    if ( v220 )
    {
      v23 = v239.m128i_i64[0];
      if ( (unsigned __int8)sub_111A30(
                              (__int64)v203,
                              v210,
                              (__int64)v203,
                              (__int64)v203,
                              *(_QWORD *)(v239.m128i_i64[0] + 56),
                              v9) )
      {
        v3 = v210;
        goto LABEL_44;
      }
    }
  }
  if ( *((_DWORD *)a1 + 19) == 4 && *(_BYTE *)(a1[7] + 64) == 7 )
  {
    if ( (unsigned int)(*(_DWORD *)a2 - 43) > 1 )
      goto LABEL_50;
    v8 = (__m128i *)&v231;
    a1 = (__int64 *)sub_1120C0(a1[1], 1);
    v224 = a1;
    if ( (unsigned __int8)sub_16E3A0(a1, &v231) )
    {
      v11 = v231;
      v53 = *(_DWORD *)a2;
      if ( *(_DWORD *)v231 == 9 )
      {
        if ( *(_BYTE *)(v231 + 32) != 4 )
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
        v231 = *(_QWORD *)(v231 + 40);
      }
      if ( v53 != 44 )
      {
        if ( v53 != 43 || *(_DWORD *)v231 == 33 )
        {
LABEL_113:
          v10 = v3[4].m128i_i64[0];
          v54 = *(unsigned int *)(a2 + 72);
          v212 = v11;
          if ( (unsigned int)v54 >= *(_DWORD *)(v10 + 64) )
            goto LABEL_308;
          v8 = nullptr;
          a1 = *(__int64 **)(*(_QWORD *)(v10 + 528) + 8 * v54);
          v55 = sub_1120C0((__int64)a1, 0);
          v10 = v224[8];
          v56 = *(unsigned int *)v224[46];
          if ( (unsigned int)v56 >= *(_DWORD *)(v10 + 64) )
            goto LABEL_308;
          if ( v55 == sub_1120C0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v56), 0) )
          {
            v57 = (_DWORD *)v3[4].m128i_i64[0];
            v232 = v3;
            v233 = (_DWORD *)a2;
            if ( (unsigned __int8)sub_1297E0(v57, &v232, &v233, v212 + 64) )
            {
              if ( *v233 == 4 || (unsigned __int8)sub_11FD80(v233 + 8, &v239, 0) && !v239.m128i_i64[0] )
              {
                a1 = (__int64 *)v231;
                v8 = v3;
                if ( (unsigned __int8)sub_111A30(v231, v3, a2, a2, v231, v9) )
                {
                  v11 = (__int64)v224;
                  v58 = *((_DWORD *)v224 + 6);
                  BYTE1(v58) &= ~2u;
                  LOBYTE(v58) = v58 | 0x80;
                  *((_DWORD *)v224 + 6) = v58;
                  v10 = v3[4].m128i_i64[0];
                  v59 = *(unsigned int *)(v3[3].m128i_i64[1] + 72);
                  if ( (unsigned int)v59 < *(_DWORD *)(v10 + 64) )
                  {
                    sub_13B2C0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v59));
                    sub_13B2C0(v3->m128i_i64[1]);
                    sub_112660((__int64)v3);
                    if ( v3 == v232 )
                      sub_11D5A0(v233);
                    *v57 |= 0x400u;
                    sub_66FA0((__int64)v57, 1u, (__int64)"JNZ64 (%d)", *((_DWORD *)v224 + 18));
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
      if ( *(_DWORD *)v231 == 32 )
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
  if ( !(unsigned __int8)sub_112410((__int64)v3, v237) || !*(_QWORD *)(a2 + 16) )
    goto LABEL_402;
  v26 = _mm_loadl_epi64((const __m128i *)(v3[30].m128i_i64[0] + 112));
  v240 = 0;
  v27 = v237[0];
  v239 = _mm_unpacklo_epi64(v26, (__m128i)(unsigned __int64)a2);
  v241 = 0;
  if ( sub_113000(&v239, (__int64)v3, v237[0]) && (unsigned __int8)sub_110F20((__int64)v3, a2, a2 + 32, a2 + 48) )
  {
    sub_112920(&v239, (__int64)v3);
    v31 = v3[4].m128i_i64[0];
    v32 = *(unsigned int *)(v3[3].m128i_i64[1] + 72);
    if ( (unsigned int)v32 >= *(_DWORD *)(v31 + 64) )
      sub_111110(&v239, v3, v28, v29, v30);
    v33 = *(_QWORD *)(*(_QWORD *)(v31 + 528) + 8 * v32);
    sub_13B2C0(v27);
    sub_13B2C0(v33);
    sub_11D5A0(a2);
    sub_112550((__int64)v3, v27, v33);
    sub_66FA0(v31, 1u, (__int64)"UNSIGNED-CMP64");
    if ( v240 )
    {
      *(_QWORD *)&v241 = 0;
      qfree(v240);
    }
    return 1;
  }
  if ( v240 )
  {
    *(_QWORD *)&v241 = 0;
    qfree(v240);
  }
  if ( *(_DWORD *)a2 == 43 )
  {
LABEL_402:
    if ( (unsigned __int8)sub_1124A0((__int64)v3, &v236, v237, 1u, 1u) )
    {
      v223 = v236;
      v34 = *(__m128i **)(v236 + 48);
      v204 = v237[0];
      v35 = *(_QWORD *)(v237[0] + 48);
      v198 = v3[4].m128i_i64[0];
      if ( (unsigned int)(*(_DWORD *)a2 - 43) > 1 )
      {
        if ( !under_debugger )
          sub_383060(50167);
        goto LABEL_399;
      }
      v193 = sub_32EA20(v34->m128i_u32[0]);
      if ( v193 != v34->m128i_i32[0]
        && (*(_BYTE *)(a2 + 4) & 0x10) == 0
        && (v34->m128i_i8[4] & 0x10) == 0
        && (*(_BYTE *)(v35 + 4) & 0x10) == 0 )
      {
        v36 = *(_DWORD *)v35;
        v37 = (__m128i *)(v35 + 48);
        v187 = *(_QWORD *)(v3[30].m128i_i64[0] + 112);
        v211 = v35 + 32;
        v239 = (__m128i)0xFFFFFFFF00000000LL;
        if ( v36 == 29 )
        {
          v37 = &v239;
          sub_120A10(&v239, v187, 0, *(unsigned int *)(v35 + 36), *(_QWORD *)(v35 + 24), 0);
          v36 = 40;
        }
        LODWORD(m128i_i64) = v36;
        if ( v193 == v36 )
        {
          v81 = v37;
          v37 = (__m128i *)(v35 + 32);
          v211 = (__int64)v81;
        }
        else if ( v36 != (unsigned int)sub_32EA00(v193) )
        {
LABEL_188:
          sub_11CDA0(&v239);
          goto LABEL_12;
        }
        m128i_i64 = a2 + 32;
        if ( (unsigned __int8)sub_125B60(a2 + 32, v37, 0) && (unsigned __int8)sub_125B60(a2 + 48, v211, 0)
          || (unsigned __int8)sub_125B60(m128i_i64, v211, 0) && (unsigned __int8)sub_125B60(a2 + 48, v37, 0) )
        {
          if ( (unsigned __int8)sub_125B60(&v34[4], v35 + 64, 0) )
          {
            m128i_i64 = (__int64)v34[2].m128i_i64;
            if ( (unsigned int)sub_111200((__int64)v3, a2, (__int64)v34[2].m128i_i64, (__int64)v37, 34) )
            {
              v183 = v34 + 3;
              if ( (unsigned int)sub_111200((__int64)v3, a2, (__int64)v34[3].m128i_i64, v211, 34) )
              {
                sub_1571F0(v3, a2, m128i_i64, a2, v37, 0);
                sub_1571F0(v3, a2, v183, a2, v211, 0);
                v38 = v34->m128i_i32[0];
                if ( (unsigned int)(v34->m128i_i32[0] - 29) > 0xC )
                {
                  if ( v34[4].m128i_i8[0] != 7 )
                    v34[4].m128i_i32[1] *= 2;
                  if ( v38 == 42 )
                    v34[2].m128i_i32[1] *= 2;
                }
                v34->m128i_i32[0] = v193;
                sub_11D5D0(v34, v187);
                sub_11D5A0(a2);
                sub_11D5A0(v35);
                sub_11CDA0(&v239);
                v39 = *(_QWORD *)(*(_QWORD *)(v198 + 528) + 8LL * **(int **)(v223 + 368));
                v40 = *(_DWORD *)(v204 + 72);
                v239.m128i_i64[0] = 0xFFFFFFFF00000007LL;
                v239.m128i_i64[1] = v40;
                v41 = v34->m128i_i64[1];
                if ( v41 )
                  sub_125180(v41 + 32);
                else
                  sub_A3240(v223, (__int64)v34, 55, (__int64)&v239, 0, 0);
                v239.m128i_i32[2] = *(_DWORD *)(v39 + 72);
                v42 = *(_QWORD *)(v35 + 8);
                if ( v42 )
                  sub_125180(v42 + 32);
                else
                  sub_A3240(v204, v35, 55, (__int64)&v239, 0, 0);
                v43 = v3[1].m128i_i32[2];
                BYTE1(v43) &= ~2u;
                LOBYTE(v43) = v43 | 0x80;
                v3[1].m128i_i32[2] = v43;
                v44 = *(_DWORD *)(v223 + 24);
                BYTE1(v44) &= ~2u;
                LOBYTE(v44) = v44 | 0x80;
                *(_DWORD *)(v223 + 24) = v44;
                v45 = *(_DWORD *)(v204 + 24);
                BYTE1(v45) &= ~2u;
                LOBYTE(v45) = v45 | 0x80;
                *(_DWORD *)(v204 + 24) = v45;
                v46 = (char *)v3[23].m128i_i64[0];
                v47 = v3[23].m128i_i64[1];
                v3[4].m128i_i32[3] = 3;
                v48 = &v46[4 * v47];
                if ( v46 != v48 )
                {
                  while ( *(_DWORD *)(v204 + 72) != *(_DWORD *)v46 )
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
                **(_DWORD **)(v204 + 344) = *(_DWORD *)(v223 + 72);
                **(_DWORD **)(v223 + 368) = *(_DWORD *)(v204 + 72);
                v49 = *(char **)(v39 + 344);
                v50 = *(_QWORD *)(v39 + 352);
                v51 = *(unsigned int *)(v223 + 72);
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
                *(_DWORD *)v198 |= 0x400u;
                sub_66FA0(v198, 1u, (__int64)"SIGNED-CMP64", v51);
                sub_11CDA0(&v239);
                return 1;
              }
            }
          }
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
  v199 = *(_QWORD *)(v3[30].m128i_i64[0] + 112);
  if ( *(_BYTE *)(a2 + 48) == 2 )
  {
    v8 = &v239;
    if ( !(unsigned __int8)sub_11FD80(a2 + 48, &v239, 0) || v239.m128i_i64[0] )
      goto LABEL_13;
    goto LABEL_131;
  }
  if ( *(_BYTE *)(a2 + 32) == 2 )
  {
    v8 = &v239;
    if ( !(unsigned __int8)sub_11FD80(a2 + 32, &v239, 0) || v239.m128i_i64[0] )
      goto LABEL_13;
    v213 = a2 + 48;
  }
  else
  {
    v8 = (__m128i *)(a2 + 48);
    v213 = a2 + 48;
    if ( (unsigned __int8)sub_111030(v199, a2 + 48, &v3[28]) )
    {
LABEL_131:
      a1 = &qword_28 + 7;
      v205 = a2 + 32;
      v213 = a2 + 32;
      goto LABEL_132;
    }
    v8 = (__m128i *)(a2 + 32);
    if ( !(unsigned __int8)sub_111030(v199, a2 + 32, &v3[28]) )
      goto LABEL_13;
  }
  v11 = v213;
  a1 = &qword_28 + 6;
  v205 = v60 + 32;
  if ( v60 + 32 == v213 )
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
    v188 = 0;
  }
  else
  {
    if ( v64 != 44 && v64 != (unsigned int)sub_32E9E0(a1) )
      goto LABEL_13;
    v188 = 1;
    v65 = v63;
    v63 = v61;
    v61 = v65;
  }
  v225 = sub_1120C0(v61, 1);
  v66 = sub_1120C0(v63, 0);
  v67 = (_DWORD *)v3[4].m128i_i64[0];
  v68 = v66;
  v234 = nullptr;
  v235 = 0;
  v194 = v67;
  if ( *(_DWORD *)(v225 + 76) != 4
    || *(_BYTE *)(*(_QWORD *)(v225 + 56) + 64LL) != 7
    || *(_DWORD *)(v225 + 352) != 1
    || sub_330DE0(v225) != 1
    || (v86 = *(unsigned int **)(v225 + 56), *v86 - 43 > 9) )
  {
    a1 = (__int64 *)v225;
    v8 = (__m128i *)v237;
    v69 = sub_16E3A0(v225, v237);
    v12 = v69;
    if ( !(_BYTE)v69 )
      goto LABEL_13;
    v70 = v237[0];
    v71 = (unsigned int *)v237[0];
    if ( *(_DWORD *)v237[0] == 9 )
    {
      if ( *(_BYTE *)(v237[0] + 32) != 4 )
        goto LABEL_13;
      v71 = *(unsigned int **)(v237[0] + 40);
      v237[0] = (__int64)v71;
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
    LOBYTE(m128i_i64) = v12;
    v10 = *(_QWORD *)(v225 + 64);
    v73 = **(unsigned int **)(v225 + 368);
    if ( (unsigned int)v73 >= *(_DWORD *)(v10 + 64) )
      goto LABEL_308;
    if ( v68 != sub_1120C0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v73), 0) )
      goto LABEL_13;
    v234 = v3;
    v235 = v60;
    if ( !(unsigned __int8)sub_1297E0(v194, &v234, &v235, v70 + 64)
      || *(_DWORD *)v235 != 4
      || !(unsigned __int8)sub_11FD80(v235 + 32, &v239, 1) )
    {
      goto LABEL_13;
    }
    LOBYTE(v12) = m128i_i64;
    if ( v239.m128i_i64[0] )
    {
      if ( v239.m128i_i64[0] != 1 )
        goto LABEL_13;
      goto LABEL_152;
    }
LABEL_223:
    LOBYTE(v12) = v12 ^ 1;
    goto LABEL_152;
  }
  v237[0] = *(_QWORD *)(v225 + 56);
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
  v8 = nullptr;
  LOBYTE(m128i_i64) = v88;
  a1 = *(__int64 **)(v225 + 8);
  v89 = sub_1120C0((__int64)a1, 0);
  v12 = (unsigned __int8)m128i_i64;
  if ( v68 == v89 )
    goto LABEL_223;
  v10 = *(_QWORD *)(v225 + 64);
  v90 = *(unsigned int *)(v237[0] + 72);
  if ( (unsigned int)v90 >= *(_DWORD *)(v10 + 64) )
    goto LABEL_308;
  if ( v68 == sub_1120C0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v90), 0) )
  {
    LOBYTE(v12) = m128i_i64;
LABEL_152:
    if ( (*(_BYTE *)(v237[0] + 4) & 0x10) == 0 )
    {
      v74 = v237[0] + 32;
      v75 = v237[0] + 48;
      if ( !(_BYTE)v12 )
      {
        v74 = v237[0] + 48;
        v75 = v237[0] + 32;
      }
      if ( *(_DWORD *)(v74 + 4) == *(_DWORD *)(v213 + 4)
        && (unsigned int)sub_111200((__int64)v3, v60, v74, v213, 2)
        && (unsigned __int8)sub_110F20((__int64)v3, v60, v205, v60 + 48) )
      {
        sub_1571F0(v3, v60, v74, v60, v213, 6);
        sub_12AB50(v74, v199, *(unsigned int *)(v74 + 4), 2);
        sub_1207E0(v75, v199, 9, *(_QWORD *)(v237[0] + 24), *(unsigned int *)(v74 + 4));
        sub_11D5D0(v237[0], v199);
        v76 = *(_DWORD *)(v225 + 24);
        BYTE1(v76) &= ~2u;
        LOBYTE(v76) = v76 | 0x80;
        *(_DWORD *)(v225 + 24) = v76;
        if ( (unsigned int)(*(_DWORD *)v237[0] - 43) <= 9 )
          sub_111130((_QWORD *)v225);
        sub_111130(v3);
        if ( v188 )
          sub_1127B0((__int64)v3);
        else
          sub_112660((__int64)v3);
        if ( v3 == v234 )
          sub_11D5A0(v235);
        *v194 |= 0x400u;
        sub_66FA0((__int64)v194, 1u, (__int64)"32U_64_JMP (%d)", *(_DWORD *)(v225 + 72));
        return 1;
      }
    }
  }
LABEL_13:
  if ( !(unsigned __int8)sub_1136B0(v3, (_DWORD *)a2) )
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
      v257 = 0;
      v258 = 0;
      v254 = 0;
      v255 = nullptr;
      v256 = 0;
      v253 = a2;
      *(_OWORD *)&v252.m256i_u64[2] = 0;
      *(__m128i *)v252.m256i_i8 = _mm_unpacklo_epi64(v91, (__m128i)(unsigned __int64)v3);
      if ( (unsigned __int8)sub_1132B0(v252.m256i_i64, 2) )
      {
        v92 = v255;
        v93 = v252.m256i_i64[3];
        v8 = nullptr;
        v206 = (__int64 *)v255;
        HIDWORD(v258) = *v255;
        a1 = *(__int64 **)(v252.m256i_i64[3] + 8);
        v226 = HIDWORD(v258);
        v94 = sub_1120C0((__int64)a1, 0);
        v10 = v252.m256i_i64[0];
        v11 = *(unsigned int *)(v94 + 72);
        v95 = (unsigned int)v92[18];
        v200 = v11;
        if ( (unsigned int)v95 >= *(_DWORD *)(v252.m256i_i64[0] + 64) )
          goto LABEL_308;
        v96 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(*(_QWORD *)(v252.m256i_i64[0] + 528) + 8 * v95), 0) + 72);
        v214 = v258;
        if ( v214 != (unsigned int)sub_32EAF0((unsigned int)v258) )
        {
          v226 = sub_32EA20(v226);
          HIDWORD(v258) = v226;
        }
        v97 = sub_32EC60(v226);
        v11 = (unsigned int)v257;
        v10 = v97;
        if ( (_DWORD)v257 )
        {
          if ( v200 == (_DWORD)v257 )
          {
            v197 = v257;
            v101 = sub_32EA00(v97);
            LODWORD(v11) = v197;
            LODWORD(v10) = v101;
          }
          else
          {
            if ( v96 != (_DWORD)v257 )
              goto LABEL_253;
            v96 = v200;
          }
        }
        v196 = v10;
        v189 = v11;
        v98 = sub_32EA00(v214);
        v10 = v196;
        if ( v98 == v196 )
        {
          if ( !HIDWORD(v257) || v96 == HIDWORD(v257) )
          {
            v100 = v77 + 32;
            v99 = v77 + 48;
LABEL_248:
            if ( *(_DWORD *)(v93 + 76) == 4
              && *(_BYTE *)(*(_QWORD *)(v93 + 56) + 64LL) == 7
              && *(_DWORD *)(v93 + 352) == 1 )
            {
              v215 = v99;
              if ( sub_330DE0(v93) == 1 && (unsigned int)(**(_DWORD **)(v93 + 56) - 43) <= 9 )
              {
                if ( (unsigned __int8)sub_1301F0(v3, v77, v215, v77, v206 + 4)
                  && (unsigned __int8)sub_1301F0(v3, v77, v100, v77, v206 + 6) )
                {
                  a1 = v206;
                  *(_DWORD *)v206 = v226;
                  v8 = *(__m128i **)(v3[30].m128i_i64[0] + 112);
                  sub_11D5D0(v206, v8);
                  v102 = v252.m256i_i64[1];
                  v10 = *(_QWORD *)(v252.m256i_i64[1] + 64);
                  v103 = *(unsigned int *)(*(_QWORD *)(v252.m256i_i64[1] + 56) + 72LL);
                  if ( (unsigned int)v103 < *(_DWORD *)(v10 + 64) )
                  {
                    sub_13B2C0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v103));
                    a1 = *(__int64 **)(v102 + 8);
                    sub_13B2C0(a1);
                    v10 = *(_QWORD *)(v93 + 64);
                    v104 = *(unsigned int *)(*(_QWORD *)(v93 + 56) + 72LL);
                    if ( (unsigned int)v104 < *(_DWORD *)(v10 + 64) )
                    {
                      sub_13B2C0(*(_QWORD *)(*(_QWORD *)(v10 + 528) + 8 * v104));
                      sub_13B2C0(*(_QWORD *)(v93 + 8));
                      v105 = *(_DWORD *)(v93 + 24);
                      BYTE1(v105) &= ~2u;
                      LOBYTE(v105) = v105 | 0x80;
                      *(_DWORD *)(v93 + 24) = v105;
                      if ( (_BYTE)v256 )
                        sub_1127B0(v102);
                      else
                        sub_112660(v102);
                      *(_DWORD *)v3[4].m128i_i64[0] |= 0x400u;
                      sub_66FA0(v3[4].m128i_i64[0], 1u, (__int64)"CMP64-JMP2");
                      return 1;
                    }
                  }
LABEL_308:
                  sub_111110(a1, v8, v10, v11, v12);
                }
                goto LABEL_253;
              }
            }
            if ( !under_debugger )
              sub_383060(52390);
LABEL_399:
            BUG();
          }
        }
        else if ( v214 == v196 )
        {
          v11 = v189;
          if ( v189 )
          {
            if ( !HIDWORD(v257) || v96 == HIDWORD(v257) )
              goto LABEL_247;
          }
          else if ( v200 == HIDWORD(v257) || !HIDWORD(v257) )
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
      v265 = 0;
      v266 = 0;
      v259[0] = v78;
      v267 = 0;
      v259[1] = 0;
      v261 = 0;
      v262 = 0;
      v264 = nullptr;
      v260 = v3;
      v263 = a2;
      if ( !(unsigned __int8)sub_1134B0(v259, 0, v10, v11, v12) )
        goto LABEL_15;
      if ( v3[4].m128i_i32[3] == 4
        && *(_BYTE *)(v3[3].m128i_i64[1] + 64) == 7
        && v3[22].m128i_i32[0] == 1
        && sub_330DE0(v3) == 1
        && (unsigned int)(*(_DWORD *)v3[3].m128i_i64[1] - 43) <= 9 )
      {
        v159 = v3[1].m128i_i64[0];
        if ( v159 )
        {
          if ( (unsigned __int8)sub_1136B0((__m128i *)v159, *(_DWORD **)(v159 + 56)) )
            return 1;
        }
      }
      if ( (unsigned int)(*(_DWORD *)v77 - 43) <= 1 && (unsigned __int8)sub_11FD80(v264 + 12, &v236, 1) )
      {
        if ( sub_A2350(v77 + 48, -1, 1u) && v236 != -1 )
        {
          LODWORD(v267) = 47;
          goto LABEL_346;
        }
        if ( sub_A2350(v77 + 48, 0, 0) && v236 )
        {
          LODWORD(v267) = 46;
          goto LABEL_346;
        }
      }
      if ( !(_DWORD)v267 )
      {
        v79 = *(_QWORD *)(v3[30].m128i_i64[0] + 112);
        v239.m128i_i64[0] = 0;
        v239.m128i_i8[8] = 0;
        if ( !(unsigned __int8)sub_1DFF30(&v239, v79, &v234, v77 + 32) )
          goto LABEL_15;
        v252.m256i_i32[0] = 0;
        v252.m256i_i32[1] = (int)v234;
        memset(&v252.m256i_u64[1], 0, 24);
        if ( !(unsigned __int8)sub_1E0180((int)v3 + 448, (unsigned int)&v252, (unsigned int)&v239, 1, 0, 0)
          || !(unsigned __int8)sub_312B30(&v252, &v235, v237)
          || (unsigned int)v235 <= 1
          || (v80 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v77 + 56) + 16LL), *(unsigned int *)(v77 + 52), 0), v237[0] != v80) )
        {
          sub_312B80(&v252);
          goto LABEL_15;
        }
        LODWORD(v267) = sub_32E9E0((unsigned int)(v235 + 43));
        sub_312B80(&v252);
      }
LABEL_346:
      v146 = v267;
      v147 = sub_32EA00((unsigned int)v267);
      v148 = sub_32EBC0(v146);
      v149 = *(_DWORD *)v77;
      if ( (unsigned int)(*(_DWORD *)v77 - 43) <= 1 || v147 == v149 || v148 == v149 )
      {
        v8 = nullptr;
        a1 = *(__int64 **)(v261 + 8);
        v219 = v261;
        v150 = sub_1120C0((__int64)a1, 0);
        v10 = v259[0];
        v229 = *(_DWORD *)(v150 + 72);
        v209 = v264;
        v151 = (unsigned int)v264[18];
        if ( (unsigned int)v151 >= *(_DWORD *)(v259[0] + 64) )
          goto LABEL_308;
        v152 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(*(_QWORD *)(v259[0] + 528) + 8 * v151), 0) + 72);
        if ( v146 != (unsigned int)sub_32EAF0(v146) )
          HIDWORD(v267) = sub_32EA20(HIDWORD(v267));
        v202 = HIDWORD(v267);
        v153 = sub_32EC60(HIDWORD(v267));
        v154 = v266;
        v155 = v153;
        if ( (_DWORD)v266 )
        {
          if ( v229 == (_DWORD)v266 )
          {
            v192 = v266;
            v158 = sub_32EA00(v153);
            v154 = v192;
            v155 = v158;
          }
          else
          {
            if ( v152 != (_DWORD)v266 )
              goto LABEL_15;
            v152 = v229;
          }
        }
        v191 = v155;
        LODWORD(m128i_i64) = v154;
        if ( (unsigned int)sub_32EA00(v146) != v155 )
        {
          if ( v146 != v191 )
            goto LABEL_15;
          if ( !(_DWORD)m128i_i64 )
            v152 = v229;
        }
        if ( (!HIDWORD(v266) || HIDWORD(v266) == v152)
          && (unsigned __int8)sub_111A30((__int64)v209, v3, v77, v77, (__int64)v209, 3) )
        {
          v156 = (__int64 *)v260;
          *v209 = v202;
          sub_111130(v156);
          sub_111130((_QWORD *)v219);
          v157 = *(_DWORD *)(v219 + 24);
          BYTE1(v157) &= ~2u;
          LOBYTE(v157) = v157 | 0x80;
          *(_DWORD *)(v219 + 24) = v157;
          sub_113680((__int64)v259, 1);
          *(_DWORD *)v3[4].m128i_i64[0] |= 0x400u;
          sub_66FA0(v3[4].m128i_i64[0], 1u, (__int64)"CMP64-VALRANGES-JMP2 (%d)", *(_DWORD *)(v219 + 72));
          return 1;
        }
      }
LABEL_15:
      if ( !(unsigned __int8)sub_112410((__int64)v3, &v234)
        || *(_DWORD *)a2 != 44
        || (v116 = sub_11C8A0(a2, &v235)) == 0
        || !(unsigned __int8)sub_11FD80(v116, &v239, 0)
        || v239.m128i_i64[0]
        || *(_BYTE *)v235 != 4
        || (v117 = *(_DWORD **)(v235 + 8), *v117 != 20)
        || !v117
        || (v118 = sub_11C8A0(v117, &v236), (v119 = v118) == 0)
        || sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v118 + 8) + 16LL), *(unsigned int *)(v118 + 4), 1) != 32
        || *(_DWORD *)(v119 + 4) != 1 )
      {
LABEL_17:
        if ( *(_DWORD *)a2 == 45 )
        {
          if ( (unsigned __int8)sub_11FD80(a2 + 48, &v239, 1) )
          {
            if ( v239.m128i_i64[0] == 32 && *(_DWORD *)(a2 + 36) == 1 )
            {
              if ( (unsigned __int8)sub_1124A0((__int64)v3, v237, v239.m128i_i64, 0xFFFFFFFF, 2u) )
              {
                v13 = v237[0];
                if ( (unsigned __int64)sub_330DE0(v237[0]) > 1 )
                {
                  v14 = v239.m128i_i64[0];
                  if ( (unsigned __int64)sub_330DE0(v239.m128i_i64[0]) > 1 )
                  {
                    v221 = (_DWORD *)sub_1229A0(*(_QWORD *)(v13 + 48));
                    v15 = sub_111170((__int64)v221);
                    if ( v15 )
                    {
                      if ( (unsigned __int8)sub_125B60(v15, a2 + 32, 0) )
                      {
                        if ( *v221 == 23 )
                        {
                          v16 = *(_QWORD *)(v14 + 48);
                          if ( *(_DWORD *)v16 == 9 )
                          {
                            if ( (unsigned __int8)sub_125B60(v16 + 64, v221 + 16, 0) )
                            {
                              if ( *(_DWORD *)(v16 + 36) == 4 )
                              {
                                if ( (unsigned __int8)sub_1301F0(v13, v221, v16 + 32, v221, v221 + 8) )
                                {
                                  v17 = (_DWORD *)sub_1229A0(*(_QWORD *)(v16 + 8));
                                  v230 = v17;
                                  if ( *v17 == 23 )
                                  {
                                    v222 = v221 + 12;
                                    if ( (unsigned __int8)sub_125B60(v17 + 12, v222, 0) )
                                    {
                                      if ( (unsigned __int8)sub_125B60(v230 + 8, v230 + 16, 0)
                                        && (unsigned __int8)sub_12CF30(
                                                              v3[4].m128i_i64[0],
                                                              (int)v230 + 32,
                                                              (int)v16 + 32,
                                                              0,
                                                              0,
                                                              v18) )
                                      {
                                        sub_125180(v222);
                                        sub_11D5A0(a2);
                                        sub_11D5A0(v16);
                                        sub_11D5A0(v230);
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
                                        v160 = *(char **)(v14 + 344);
                                        v161 = *(_QWORD *)(v14 + 352);
                                        v162 = v3[4].m128i_u32[2];
                                        v163 = &v160[4 * v161];
                                        while ( v163 != v160 )
                                        {
                                          if ( (_DWORD)v162 == *(_DWORD *)v160 )
                                          {
                                            memmove(v160, v160 + 4, v163 - v160 - 4);
                                            v161 = *(_QWORD *)(v14 + 352) - 1LL;
                                            *(_QWORD *)(v14 + 352) = v161;
                                            break;
                                          }
                                          v160 += 4;
                                        }
                                        if ( !v161 )
                                          **(_DWORD **)(v14 + 64) |= 0x400u;
                                        v169 = v3[1].m128i_i32[2];
                                        BYTE1(v169) &= ~2u;
                                        LOBYTE(v169) = v169 | 0x80;
                                        v3[1].m128i_i32[2] = v169;
                                        v170 = *(_DWORD *)(v13 + 24);
                                        BYTE1(v170) &= ~2u;
                                        LOBYTE(v170) = v170 | 0x80;
                                        *(_DWORD *)(v13 + 24) = v170;
                                        v171 = *(_DWORD *)(v14 + 24);
                                        BYTE1(v171) &= ~2u;
                                        LOBYTE(v171) = v171 | 0x80;
                                        *(_DWORD *)(v14 + 24) = v171;
                                        v172 = (_DWORD *)v3[4].m128i_i64[0];
                                        *v172 |= 0x400u;
                                        sub_66FA0((__int64)v172, 1u, (__int64)"SAR2-64", v162);
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
      memset(v237, 0, sizeof(v237));
      v228 = (__int64)v234;
      v238 = 0;
      v120 = sub_330DE0(v234);
      if ( v120 != 1 )
      {
        if ( v120 != 2 )
          goto LABEL_307;
        v123 = v236;
        v124 = sub_1229A0(*(_QWORD *)(v228 + 48));
        v217 = (int *)sub_1229A0(*(_QWORD *)(v124 + 8));
        v125 = *v217;
        if ( *(_DWORD *)v124 == 4 )
        {
          if ( v125 != 22 )
          {
            if ( v125 != 4 )
              goto LABEL_307;
            v126 = v217 + 8;
            if ( (unsigned __int8)sub_11FD80(v217 + 8, &v239, 0) && !v239.m128i_i64[0] )
            {
              v168 = (int *)v124;
              v124 = (__int64)v217;
              v126 = v168 + 8;
              v217 = v168;
            }
            else if ( !(unsigned __int8)sub_11FD80(v124 + 32, &v239, 0) || v239.m128i_i64[0] )
            {
              goto LABEL_307;
            }
            v127 = v124 + 64;
            v128 = sub_125B60(v126, v127, 0);
            v131 = 0;
            if ( !v128 )
            {
LABEL_307:
              sub_93B40(v237);
              goto LABEL_17;
            }
            goto LABEL_320;
          }
        }
        else
        {
          if ( v125 != 4 || *(_DWORD *)v124 != 22 )
            goto LABEL_307;
          v145 = (int *)v124;
          v124 = (__int64)v217;
          v217 = v145;
        }
        if ( !(unsigned __int8)sub_11FD80(v124 + 32, &v239, 0) )
          goto LABEL_307;
        if ( v239.m128i_i64[0] )
          goto LABEL_307;
        v131 = sub_125B60(v217 + 12, v123, 0);
        if ( !v131 )
          goto LABEL_307;
        v127 = v124 + 64;
LABEL_320:
        sub_127FE0(v228, (__int64)v237, v127, 0, v129, v130, v176, (int)v178, v180, (int)v183, m128i_i64);
        sub_127FE0(v228, (__int64)v237, (__int64)(v217 + 16), 0, v132, v133, v177, v179, v181, v184, v186);
        if ( v131 )
          v134 = v217 + 8;
        else
          v134 = nullptr;
        v135 = 22;
LABEL_323:
        v136 = (_DWORD *)sub_129150((_DWORD)v3, (unsigned int)v237, a2, 0, 0, 0, 257);
        v218 = (__int64)v136;
        if ( v136 && *v136 == v135 )
        {
          sub_127A20(&v239, v228, v136, 0);
          if ( !(unsigned int)sub_122C30(&v239, v237)
            && (!v134 || (unsigned __int8)sub_1321C0(v3, v218, v134, v218, v218 + 32))
            && (v137 = sub_111170(v218)) != 0
            && (v138 = v236, (v142 = sub_125B60(v236, v137, 0)) != 0) )
          {
            v143 = v3[4].m128i_i64[0];
            v144 = *(unsigned int *)(v3[3].m128i_i64[1] + 72);
            if ( (unsigned int)v144 >= *(_DWORD *)(v143 + 64) )
              sub_111110(v138, v137, v139, v140, v141);
            v208 = *(_QWORD *)(*(_QWORD *)(v143 + 528) + 8 * v144);
            sub_125180(v218 + 48);
            sub_11D5A0(a2);
            sub_113AB0(v228);
            sub_112550((__int64)v3, v228, v208);
            sub_66FA0(v143, 1u, (__int64)"SAR64");
          }
          else
          {
            v142 = 0;
          }
          sub_93B40(v239.m128i_i64);
          sub_93B40(v237);
          if ( v142 )
            return 1;
          goto LABEL_17;
        }
        goto LABEL_307;
      }
      v164 = *(int **)(v228 + 56);
      v165 = *v164;
      v166 = v164[9];
      if ( *v164 == 24 )
      {
        if ( v166 != 8 )
          goto LABEL_307;
        v167 = (__int64)(v164 + 16);
        v173 = *(_QWORD *)(v228 + 56);
        if ( !(unsigned __int8)sub_125B60(v164 + 8, v164 + 16, 0) || !sub_A2350(v173 + 48, 32, 1u) )
          goto LABEL_307;
      }
      else
      {
        if ( v166 != 4 || v164[17] != 8 )
          goto LABEL_307;
        if ( v165 == 9 )
        {
          v135 = 23;
          v167 = (__int64)(v164 + 16);
          goto LABEL_388;
        }
        if ( v165 != 8 )
          goto LABEL_307;
        v167 = (__int64)(v164 + 16);
      }
      v135 = 24;
LABEL_388:
      sub_127FE0(v228, (__int64)v237, v167, 0, v121, v122, v176, (int)v178, v180, (int)v183, m128i_i64);
      v134 = nullptr;
      goto LABEL_323;
    }
    v82 = v3[4].m128i_i64[0];
    v249 = 0;
    v250 = 0;
    v242 = v82;
    v251 = 0;
    a1 = &v242;
    v243 = 0;
    v245 = 0;
    v246 = 0;
    v248 = nullptr;
    v8 = (__m128i *)&byte_1;
    v244 = (__int64 *)v3;
    v247 = a2;
    v178 = &v242;
    v195 = sub_1134B0(&v242, 1, v10, v11, v12);
    if ( v195 )
    {
      v83 = v242;
      if ( HIDWORD(v250) >= *(_DWORD *)(v242 + 64) )
        goto LABEL_308;
      v10 = *(_QWORD *)(v242 + 528);
      v84 = *(_QWORD *)(v10 + 8LL * HIDWORD(v250));
      v85 = *(_DWORD *)(v84 + 76) == 4;
      v243 = v84;
      if ( v85 && *(_BYTE *)(*(_QWORD *)(v84 + 56) + 64LL) == 7 && *(_DWORD *)(v84 + 352) == 1 && sub_330DE0(v84) == 1 )
      {
        v11 = *(_QWORD *)(v84 + 56);
        v106 = *(unsigned int *)v11;
        if ( (unsigned int)(v106 - 43) <= 9 )
        {
          v246 = *(_QWORD *)(v84 + 56);
          v216 = v246;
          LOBYTE(v249) = 0;
          v107 = sub_32EC60(v106);
          a1 = *(__int64 **)(v84 + 8);
          v227 = v107;
          LODWORD(v251) = v107;
          v108 = sub_1120C0((__int64)a1, 0);
          v11 = v216;
          v8 = (__m128i *)*(unsigned int *)(v108 + 72);
          v109 = *(unsigned int *)(v216 + 72);
          v190 = (int)v8;
          HIDWORD(v250) = (_DWORD)v8;
          if ( (unsigned int)v109 >= *(_DWORD *)(v83 + 64) )
            goto LABEL_308;
          v207 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(*(_QWORD *)(v83 + 528) + 8 * v109), 0) + 72);
          LODWORD(v250) = v207;
          a1 = *(__int64 **)(v245 + 8);
          m128i_i64 = v245;
          v201 = *(_DWORD *)(sub_1120C0((__int64)a1, 0) + 72);
          v8 = v248;
          v183 = v248;
          v110 = v248[4].m128i_u32[2];
          if ( (unsigned int)v110 >= *(_DWORD *)(v83 + 64) )
            goto LABEL_308;
          v111 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(*(_QWORD *)(v83 + 528) + 8 * v110), 0) + 72);
          if ( v227 != (unsigned int)sub_32EAF0(v227) )
            HIDWORD(v251) = sub_32EA20(HIDWORD(v251));
          v182 = HIDWORD(v251);
          v10 = (unsigned int)sub_32EC60(HIDWORD(v251));
          if ( v207 )
          {
            v11 = v201;
            if ( v207 == v201 )
            {
              LODWORD(v10) = sub_32EA00((unsigned int)v10);
            }
            else
            {
              if ( v207 != v111 )
                goto LABEL_195;
              v111 = v201;
            }
          }
          v180 = v10;
          v112 = sub_32EA00(v227);
          v10 = v180;
          if ( v112 == v180 )
            goto LABEL_286;
          if ( v227 == v180 )
          {
            v195 = 0;
            if ( !v207 )
              v111 = v201;
LABEL_286:
            if ( !v190 || v190 == v111 )
            {
              v113 = sub_130480(
                       *(_QWORD *)(v3[30].m128i_i64[0] + 112),
                       (_DWORD)v3,
                       v77,
                       v77,
                       v77,
                       (int)v216 + 32,
                       v216 + 48,
                       2);
              v10 = v174;
              v11 = v175;
              if ( v113 )
              {
                v114 = 7;
                if ( !v195 )
                  v114 = 3;
                if ( (unsigned __int8)sub_111A30((__int64)v183, v3, v77, v216, (__int64)v183, v114) )
                {
                  v183->m128i_i32[0] = v182;
                  sub_111130((_QWORD *)v84);
                  sub_111130(v244);
                  sub_111130((_QWORD *)m128i_i64);
                  v115 = *(_DWORD *)(m128i_i64 + 24);
                  BYTE1(v115) &= ~2u;
                  LOBYTE(v115) = v115 | 0x80;
                  *(_DWORD *)(m128i_i64 + 24) = v115;
                  sub_113680((__int64)&v242, 0);
                  sub_113680((__int64)&v242, 1);
                  *(_DWORD *)v3[4].m128i_i64[0] |= 0x400u;
                  sub_66FA0(v3[4].m128i_i64[0], 1u, (__int64)"3CHECK64-JNZ (%d)", *(_DWORD *)(m128i_i64 + 72));
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
