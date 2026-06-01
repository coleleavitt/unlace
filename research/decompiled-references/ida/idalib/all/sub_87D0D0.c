_BYTE *__fastcall sub_87D0D0(__int64 a1, _BYTE *a2, __int64 a3, double *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // r14
  int v10; // r15d
  int v11; // r13d
  __int64 v12; // r11
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __m128 *v17; // rax
  __m128 *v18; // rax
  unsigned __int8 v19; // r11
  char v20; // al
  _QWORD *v21; // r15
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __m128 *v26; // rax
  __m128 *v27; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rsi
  _QWORD *v32; // r12
  _QWORD *v33; // r12
  _QWORD *v34; // rax
  double v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // rax
  unsigned __int64 *v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // r9
  _QWORD *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __m128 *v45; // rax
  __m128 *v46; // rax
  __m128 v47; // xmm0
  _QWORD *v48; // rax
  double v49; // rcx
  __int64 v50; // rdx
  _QWORD *v51; // rax
  unsigned __int64 *v52; // rcx
  unsigned __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rcx
  __m128 *v57; // rax
  __m128 *v58; // rax
  _QWORD *v59; // rax
  unsigned __int64 *v60; // rcx
  unsigned __int64 v61; // rdx
  int v62; // r8d
  __int64 v63; // r9
  _QWORD *v64; // r12
  _QWORD *v65; // rax
  double v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rax
  unsigned __int64 *v69; // rcx
  unsigned __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rcx
  __m128 *v74; // rax
  __m128 *v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rsi
  _QWORD *v78; // r12
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rcx
  __m128 *v82; // rax
  __m128 *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rcx
  __m128 *v87; // rax
  __m128 *v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  unsigned int *v92; // r12
  _QWORD *v93; // rax
  __int64 v94; // r14
  _QWORD *v95; // r13
  _QWORD *v96; // rax
  _QWORD *v97; // r12
  _QWORD *v98; // r13
  _QWORD *v99; // r12
  unsigned int *v100; // r14
  _QWORD *v101; // rax
  __int64 v102; // r14
  _QWORD *v103; // rdx
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  unsigned int *v107; // r12
  _QWORD *v108; // rax
  __int64 v109; // r12
  _QWORD *v110; // rdx
  _QWORD *v111; // rax
  unsigned int *v112; // r12
  _QWORD *v113; // rax
  __int64 v114; // r12
  _QWORD *v115; // rdx
  _QWORD *v116; // rax
  unsigned int *v117; // r12
  _QWORD *v118; // rax
  __int64 v119; // r12
  _QWORD *v120; // rdx
  _QWORD *v121; // rax
  _QWORD *v122; // r12
  _QWORD *v123; // rax
  __int64 v124; // r9
  _QWORD *v125; // r12
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  unsigned __int64 *v128; // rcx
  unsigned __int64 v129; // rdx
  unsigned int v130; // edx
  __int64 v131; // r8
  int v132; // esi
  __int64 v133; // rdx
  __int64 v134; // rax
  __int64 v135; // rcx
  __m128 *v136; // rax
  __m128 *v137; // rax
  __int64 v138; // r9
  _QWORD *v139; // r12
  unsigned int v140; // eax
  __int64 v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rcx
  __m128 *v144; // rax
  __m128 *v145; // rax
  __m128 v146; // xmm0
  _QWORD *v147; // rax
  bool v148; // r11
  _QWORD *v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rcx
  __m128 *v153; // rax
  __m128 *v154; // rax
  _QWORD *v155; // rax
  __int64 v156; // r14
  _QWORD *v157; // r13
  _QWORD *v158; // rax
  _QWORD *v159; // r12
  unsigned int *v160; // r12
  _QWORD *v161; // rax
  __int64 v162; // r12
  _QWORD *v163; // rdx
  _QWORD *v164; // rax
  unsigned __int8 v165; // cl
  _BYTE *v166; // rax
  __int64 v167; // rax
  __int64 v168; // r9
  char v169; // r11
  char v170; // r11
  _QWORD *v171; // rax
  char v172; // r11
  _QWORD *v173; // r12
  char v174; // r11
  char v175; // r11
  char v176; // r11
  _QWORD *v177; // rax
  char v178; // r11
  unsigned int v179; // eax
  char *v180; // rax
  char v181; // r11
  _QWORD *v182; // rax
  _QWORD *v183; // rax
  unsigned __int64 *v184; // rcx
  unsigned __int64 v185; // rdx
  __int64 v186; // rdx
  __int64 v187; // rax
  __int64 v188; // rcx
  __m128 *v189; // rax
  __m128 *v190; // rax
  _QWORD *v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rax
  __int64 v194; // rcx
  __m128 *v195; // rax
  __m128 *v196; // rax
  __m128 v197; // xmm0
  unsigned int *v198; // r12
  _QWORD *v199; // rax
  __int64 v200; // r12
  _QWORD *v201; // rdx
  _QWORD *v202; // rax
  _QWORD *v203; // rax
  char v204; // dl
  unsigned __int8 v205; // dl
  __int64 v206; // r9
  int v207; // esi
  _QWORD *v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rax
  __int64 v211; // rcx
  __m128 *v212; // rax
  __m128 *v213; // rax
  __m128 v214; // xmm0
  unsigned int *v215; // r12
  _QWORD *v216; // rax
  __int64 v217; // r12
  _QWORD *v218; // rdx
  _QWORD *v219; // rax
  _QWORD *v220; // rax
  unsigned int *v221; // r12
  __int64 v222; // rdi
  _QWORD *v223; // rax
  _QWORD *v224; // r12
  int v225; // [rsp+8h] [rbp-B0h]
  _QWORD *v226; // [rsp+8h] [rbp-B0h]
  _QWORD *v227; // [rsp+8h] [rbp-B0h]
  _QWORD *v228; // [rsp+8h] [rbp-B0h]
  _QWORD *v229; // [rsp+8h] [rbp-B0h]
  _QWORD *v230; // [rsp+8h] [rbp-B0h]
  _QWORD *v231; // [rsp+8h] [rbp-B0h]
  char v232; // [rsp+8h] [rbp-B0h]
  char v233; // [rsp+8h] [rbp-B0h]
  char v234; // [rsp+8h] [rbp-B0h]
  char v235; // [rsp+8h] [rbp-B0h]
  char v236; // [rsp+8h] [rbp-B0h]
  char v237; // [rsp+8h] [rbp-B0h]
  char v238; // [rsp+8h] [rbp-B0h]
  unsigned __int8 *v239; // [rsp+10h] [rbp-A8h]
  bool v240; // [rsp+10h] [rbp-A8h]
  _QWORD *v241; // [rsp+10h] [rbp-A8h]
  _QWORD *v242; // [rsp+10h] [rbp-A8h]
  _QWORD *v243; // [rsp+10h] [rbp-A8h]
  __int64 v245; // [rsp+18h] [rbp-A0h]
  _QWORD *v246; // [rsp+18h] [rbp-A0h]
  _QWORD *v247; // [rsp+18h] [rbp-A0h]
  _QWORD *v248; // [rsp+18h] [rbp-A0h]
  _QWORD *v249; // [rsp+18h] [rbp-A0h]
  _QWORD *v250; // [rsp+18h] [rbp-A0h]
  _QWORD *v251; // [rsp+18h] [rbp-A0h]
  unsigned int v253; // [rsp+20h] [rbp-98h]
  int v254; // [rsp+28h] [rbp-90h]
  _QWORD *v255; // [rsp+28h] [rbp-90h]
  __int64 v256; // [rsp+28h] [rbp-90h]
  int v257; // [rsp+34h] [rbp-84h]
  char v258; // [rsp+34h] [rbp-84h]
  char v259; // [rsp+34h] [rbp-84h]
  char v260; // [rsp+34h] [rbp-84h]
  char v261; // [rsp+34h] [rbp-84h]
  char v262; // [rsp+34h] [rbp-84h]
  int v263; // [rsp+38h] [rbp-80h]
  __int64 v264; // [rsp+38h] [rbp-80h]
  _QWORD *v265; // [rsp+40h] [rbp-78h]
  _QWORD *v266; // [rsp+40h] [rbp-78h]
  __int64 v267; // [rsp+48h] [rbp-70h]
  unsigned __int8 v268; // [rsp+56h] [rbp-62h] BYREF
  unsigned __int8 v269; // [rsp+57h] [rbp-61h] BYREF
  unsigned int v270; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v271; // [rsp+5Ch] [rbp-5Ch] BYREF
  _BYTE *v272; // [rsp+60h] [rbp-58h] BYREF
  __m128 *v273; // [rsp+68h] [rbp-50h] BYREF
  double v274[9]; // [rsp+70h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v274[1] = __readfsqword(0x28u);
  v7 = *(_QWORD *)a1;
  v270 = 0;
  v8 = *(_DWORD *)(v5 + 4LL * (_QWORD)&a2[-v6 + 1]);
  v273 = nullptr;
  v274[0] = 0.0;
  v9 = *(int *)(v5 + 4LL * (_QWORD)&a2[-v6]);
  v257 = v9 + 8;
  v10 = v8 & 7;
  v225 = v8 >> 3;
  v11 = (_DWORD)v9 == 0 ? 140 : 142;
  if ( !*(_DWORD *)(a1 + 128) && !*(_QWORD *)(a1 + 120) )
  {
    v225 = 0;
    v10 = 0;
    goto LABEL_4;
  }
  if ( v10 == 1 )
  {
    sub_86E080((unsigned int *)v7, 5, 2, 0, 142, v225);
    if ( !*(_DWORD *)v7 )
    {
      v79 = *(_QWORD *)(v7 + 80);
      v80 = *(_QWORD *)(v79 + 8);
      v81 = v80 + 16;
      if ( (unsigned __int64)(v80 + 16) <= 0xFF0 )
      {
        v83 = (__m128 *)(v79 + v80 + 16);
        *(_QWORD *)(v79 + 8) = v81;
        if ( v83 )
          goto LABEL_147;
      }
      else
      {
        v82 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
        if ( v82 )
        {
          v82->m128_u64[0] = *(_QWORD *)(v7 + 80);
          *(_QWORD *)(v7 + 80) = v82;
          v83 = v82 + 1;
          v83[-1].m128_u64[1] = 16;
LABEL_147:
          *v83 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v83;
          goto LABEL_4;
        }
        *(_DWORD *)v7 = 2;
      }
    }
  }
LABEL_4:
  v239 = sub_869080(a2, (char *)&v268, &v269, (int *)&v270, (int *)&v271, &v272);
  if ( v269 != 22 )
  {
    if ( v268 != 41 )
    {
LABEL_6:
      v263 = 0;
      v254 = 3;
      goto LABEL_30;
    }
    if ( *(_DWORD *)(a1 + 168) != 1 || v269 == 17 )
    {
      v263 = 0;
      v12 = 0;
      v254 = 3;
      goto LABEL_10;
    }
    sub_86D900((unsigned int *)v7, 0x42u, 1, 0, 13, 0, 2u, 0);
    sub_86E080((unsigned int *)v7, 2, 1, 0, 127, v271);
    if ( !*(_DWORD *)v7 )
    {
      v84 = *(_QWORD *)(v7 + 80);
      v85 = *(_QWORD *)(v84 + 8);
      v86 = v85 + 16;
      if ( (unsigned __int64)(v85 + 16) <= 0xFF0 )
      {
        v88 = (__m128 *)(v84 + v85 + 16);
        *(_QWORD *)(v84 + 8) = v86;
        if ( v88 )
          goto LABEL_156;
      }
      else
      {
        v87 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                          4096,
                          *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
        if ( v87 )
        {
          v87->m128_u64[0] = *(_QWORD *)(v7 + 80);
          *(_QWORD *)(v7 + 80) = v87;
          v88 = v87 + 1;
          v88[-1].m128_u64[1] = 16;
LABEL_156:
          *v88 = _mm_loadh_ps(a4);
          *(_QWORD *)a4 = v88;
          goto LABEL_157;
        }
        *(_DWORD *)v7 = 2;
      }
    }
LABEL_157:
    if ( v269 == 13 )
    {
      sub_86D900((unsigned int *)v7, 0x40u, 2, 0, 2, 0, 0x7Fu, v271);
    }
    else
    {
      sub_86B8E0((unsigned int *)v7, 32, 3, 0, 127, v271);
      v255 = sub_868BC0(v7);
      sub_87A280(a1, v269, (char *)v239, a4, 0);
      sub_86D900((unsigned int *)v7, 0x242u, 3, 0, 3, 0, 0x7Fu, 1);
      v89 = sub_868C70(v7, 1);
      if ( v89 && v255 )
      {
        v89[2] &= ~1uLL;
        v89[3] = v255;
      }
    }
    goto LABEL_6;
  }
  if ( v268 != 41 )
  {
    v263 = 24;
    v254 = 142;
    goto LABEL_30;
  }
  v263 = 24;
  v12 = 24;
  v254 = 142;
LABEL_10:
  v267 = v12;
  sub_86B8E0((unsigned int *)v7, 32, v254, v12, 127, v271);
  v265 = sub_868BC0(v7);
  sub_87A280(a1, v269, (char *)v239, a4, 1);
  sub_86D900((unsigned int *)v7, 0x242u, v254, v267, v254, v267, 0x7Fu, 1);
  v13 = sub_868C70(v7, 1);
  if ( v265 && v13 )
  {
    v13[2] &= ~1uLL;
    v13[3] = v265;
    if ( v10 != 2 )
      goto LABEL_31;
    goto LABEL_13;
  }
LABEL_30:
  if ( v10 != 2 )
  {
LABEL_31:
    v19 = v268;
    if ( v268 <= 0x28u )
      goto LABEL_32;
LABEL_19:
    v20 = v19 - 33;
    v21 = nullptr;
    if ( (unsigned __int8)(v19 - 33) > 0xCu )
      goto LABEL_20;
    goto LABEL_35;
  }
LABEL_13:
  sub_86B8E0((unsigned int *)v7, 32, 1, 0, 142, v225);
  sub_86B8E0((unsigned int *)v7, 32, 4, 0, 142, v225 + 8);
  sub_86D900((unsigned int *)v7, 0x42u, 1, 0, 1, 0, 4u, 0);
  sub_86D900((unsigned int *)v7, 0x42u, 4, 0, 2, 0, 4u, 0);
  sub_86E080((unsigned int *)v7, 5, 4, 0, 1, 0);
  if ( *(_DWORD *)v7 )
    goto LABEL_18;
  v14 = *(_QWORD *)(v7 + 80);
  v15 = *(_QWORD *)(v14 + 8);
  v16 = v15 + 16;
  if ( (unsigned __int64)(v15 + 16) <= 0xFF0 )
  {
    v18 = (__m128 *)(v14 + v15 + 16);
    *(_QWORD *)(v14 + 8) = v16;
    if ( v18 )
      goto LABEL_17;
  }
  else
  {
    v17 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                      4096,
                      *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
    if ( v17 )
    {
      v17->m128_u64[0] = *(_QWORD *)(v7 + 80);
      *(_QWORD *)(v7 + 80) = v17;
      v18 = v17 + 1;
      v18[-1].m128_u64[1] = 16;
LABEL_17:
      *v18 = _mm_loadh_ps(a4);
      *(_QWORD *)a4 = v18;
      goto LABEL_18;
    }
    *(_DWORD *)v7 = 2;
  }
LABEL_18:
  sub_86B8E0((unsigned int *)v7, 32, 142, v225, 2, 0);
  sub_86B8E0((unsigned int *)v7, 32, 142, v225 + 8, 2, 0);
  v19 = v268;
  if ( v268 > 0x28u )
    goto LABEL_19;
LABEL_32:
  if ( !*(_DWORD *)v7 )
  {
    v21 = sub_868B50(v7, 64);
    if ( !*(_DWORD *)v7 )
    {
      v19 = v268;
      *(_OWORD *)v21 = 0;
      *((_OWORD *)v21 + 2) = 0;
      *((_OWORD *)v21 + 1) = 0;
      *((_OWORD *)v21 + 3) = 0;
      v29 = *(_QWORD *)(a3 + 16);
      v21[4] = a2;
      *v21 = v29;
      v20 = v19 - 33;
      *(_QWORD *)(a3 + 16) = v21;
LABEL_35:
      switch ( v20 )
      {
        case 0:
        case 6:
          v270 += v271;
          if ( v269 == 22 )
          {
            v92 = *(unsigned int **)a1;
            if ( v271 == 1 )
            {
              sub_86D900(v92, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
              v155 = sub_86E080(v92, 2, 12, 0, 11, 0);
              v156 = *(_QWORD *)a1;
              v157 = v155;
              if ( !**(_DWORD **)a1 )
              {
                v158 = sub_868B50(*(_QWORD *)a1, 24);
                v159 = v158;
                if ( v158 )
                {
                  *v158 = v157;
                  v158[1] = sub_868BC0(v156);
                  v159[2] = *(_QWORD *)(a1 + 312);
                  *(_QWORD *)(a1 + 312) = v159;
                }
              }
              sub_86B8E0((unsigned int *)v7, 32, 140, 0, 127, 0);
            }
            else
            {
              sub_86D900(v92, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
              v93 = sub_86E080(v92, 2, 12, 0, 11, 0);
              v94 = *(_QWORD *)a1;
              v95 = v93;
              if ( !**(_DWORD **)a1 )
              {
                v96 = sub_868B50(*(_QWORD *)a1, 24);
                v97 = v96;
                if ( v96 )
                {
                  *v96 = v95;
                  v96[1] = sub_868BC0(v94);
                  v97[2] = *(_QWORD *)(a1 + 312);
                  *(_QWORD *)(a1 + 312) = v97;
                }
              }
              sub_86B8E0((unsigned int *)v7, 32, 140, 0, 2, 0);
              sub_86B8E0((unsigned int *)v7, 32, 140, 8, 127, 0);
            }
            if ( v268 == 39 )
              sub_86B8E0((unsigned int *)v7, 32, 142, 24, 127, v270);
            v98 = nullptr;
            v99 = sub_868BC0(v7);
            sub_87A280(a1, v269, (char *)v239, (double *)v21 + 3, 1);
            if ( v268 == 39 )
            {
              sub_86B8E0((unsigned int *)v7, 32, 1, 0, 142, 24);
              if ( !*(_DWORD *)v7 )
              {
                *(_DWORD *)(v7 + 144) = 0;
                sub_86CA20((unsigned int *)v7, 0x2D2B2928u, 1, 0, 1, 0, 127, 1);
              }
              v98 = sub_868C70(v7, 0);
              sub_86B8E0((unsigned int *)v7, 32, 142, 24, 1, 0);
            }
            v100 = *(unsigned int **)a1;
            sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
            v101 = sub_86E080(v100, 2, 12, 0, 11, 0);
            v102 = *(_QWORD *)a1;
            v226 = v101;
            if ( !**(_DWORD **)a1 )
            {
              v103 = sub_868B50(v102, 24);
              if ( v103 )
              {
                v104 = v226;
                v227 = v103;
                *v103 = v104;
                v103[1] = sub_868BC0(v102);
                v227[2] = *(_QWORD *)(a1 + 312);
                *(_QWORD *)(a1 + 312) = v227;
              }
            }
            sub_86B8E0((unsigned int *)v7, 32, 140, 0, 2, 0);
            v105 = sub_868C70(v7, 36);
            if ( v99 && v105 )
            {
              v105[2] &= ~1uLL;
              v105[3] = v99;
            }
            if ( v98 )
            {
              v106 = sub_868BC0(v7);
              if ( v106 )
              {
                v98[2] &= ~1uLL;
                v98[3] = v106;
              }
            }
          }
          else
          {
            if ( v269 != 13 )
            {
              if ( (unsigned __int8)(v269 - 29) <= 1u || (unsigned __int8)(*v272 - 29) > 1u )
              {
LABEL_54:
                if ( !(_DWORD)v9 )
                {
                  v160 = *(unsigned int **)a1;
                  sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
                  v161 = sub_86E080(v160, 2, 12, 0, 11, 0);
                  v162 = *(_QWORD *)a1;
                  v248 = v161;
                  if ( !**(_DWORD **)a1 )
                  {
                    v163 = sub_868B50(v162, 24);
                    if ( v163 )
                    {
                      v164 = v248;
                      v249 = v163;
                      *v163 = v164;
                      v163[1] = sub_868BC0(v162);
                      v249[2] = *(_QWORD *)(a1 + 312);
                      *(_QWORD *)(a1 + 312) = v249;
                    }
                  }
                  v19 = v268;
                }
                if ( v19 == 39 )
                {
                  v138 = v270;
                  if ( v271 == v270 )
                    v138 = -(__int64)v271;
                  sub_86B8E0((unsigned int *)v7, 32, 3, 0, 127, v138);
                  if ( v268 == 39 )
                  {
                    if ( v271 )
                    {
                      v139 = sub_868BC0(v7);
                      sub_86E800(a1, (double *)&v273);
                      sub_87A280(a1, v269, (char *)v239, v274, 0);
                      v140 = *(_DWORD *)v7;
                      if ( v271 == v270 )
                      {
                        if ( !v140 )
                        {
                          *(_DWORD *)(v7 + 144) = 0;
                          sub_86D220((unsigned int *)v7, 0x5030100u, 3, 0, 3, 0, 127, 1);
                        }
                        v147 = sub_868C70(v7, 1);
                        v148 = v139 != nullptr;
                        if ( !v147 )
                          goto LABEL_267;
                        goto LABEL_265;
                      }
                      if ( !v140 )
                      {
                        *(_DWORD *)(v7 + 144) = 0;
                        sub_86CA20((unsigned int *)v7, 0x2D2B2928u, 3, 0, 3, 0, 127, 1);
                      }
                      sub_868C70(v7, 0);
                      if ( !*(_DWORD *)v7 )
                      {
                        v141 = *(_QWORD *)(v7 + 80);
                        v142 = *(_QWORD *)(v141 + 8);
                        v143 = v142 + 16;
                        if ( (unsigned __int64)(v142 + 16) <= 0xFF0 )
                        {
                          v145 = (__m128 *)(v141 + v142 + 16);
                          *(_QWORD *)(v141 + 8) = v143;
                          if ( v145 )
                            goto LABEL_263;
                        }
                        else
                        {
                          v144 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                                             4096,
                                             *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
                          if ( v144 )
                          {
                            v144->m128_u64[0] = *(_QWORD *)(v7 + 80);
                            *(_QWORD *)(v7 + 80) = v144;
                            v145 = v144 + 1;
                            v145[-1].m128_u64[1] = 16;
LABEL_263:
                            v146 = _mm_loadh_ps((const double *)&v273);
                            v273 = v145;
                            *v145 = v146;
                            goto LABEL_264;
                          }
                          *(_DWORD *)v7 = 2;
                        }
                      }
LABEL_264:
                      v147 = sub_86E080((unsigned int *)v7, 1, 3, 0, 127, v270 - v271);
                      v148 = v139 != nullptr;
                      if ( !v147 )
                      {
LABEL_267:
                        v240 = v148;
                        v245 = v257;
                        sub_86B8E0((unsigned int *)v7, 32, v11, v257, 2, 0);
                        v149 = sub_868C70(v7, 36);
                        if ( v149 && v240 )
                        {
                          v149[2] &= ~1uLL;
                          v149[3] = v139;
                        }
LABEL_58:
                        if ( v268 != 39 || !v271 )
                          sub_86D900((unsigned int *)v7, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
                        v34 = sub_868BC0(v7);
                        v35 = v274[0];
                        if ( *(_QWORD *)&v274[0] )
                        {
                          do
                          {
                            v36 = **(_QWORD **)&v35;
                            if ( **(_QWORD **)&v35 && v34 )
                            {
                              *(_QWORD *)(v36 + 16) &= ~1uLL;
                              *(_QWORD *)(v36 + 24) = v34;
                            }
                            v35 = *(double *)(*(_QWORD *)&v35 + 8LL);
                          }
                          while ( v35 != 0.0 );
                        }
                        sub_86D900((unsigned int *)v7, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
                        v37 = sub_868BC0(v7);
                        v38 = (unsigned __int64 *)v273;
                        if ( v273 )
                        {
                          do
                          {
                            v39 = *v38;
                            if ( *v38 && v37 )
                            {
                              *(_QWORD *)(v39 + 16) &= ~1uLL;
                              *(_QWORD *)(v39 + 24) = v37;
                            }
                            v38 = (unsigned __int64 *)v38[1];
                          }
                          while ( v38 );
                        }
                        sub_86B8E0((unsigned int *)v7, 32, v11, (int)v9, 2, 0);
                        if ( v268 == 39 )
                        {
                          if ( !v271 )
                            goto LABEL_73;
                          if ( v270 == v271 )
                            sub_86E080((unsigned int *)v7, 3, 3, 0, 127, -(__int64)v270);
                          else
                            sub_86E080((unsigned int *)v7, 4, 3, 0, 127, v270 - v271);
                        }
                        else
                        {
                          if ( v271 != 1 )
                            goto LABEL_73;
                          sub_86E080((unsigned int *)v7, 0, v11, v245, 2, 0);
                        }
                        if ( !*(_DWORD *)v7 )
                        {
                          v150 = *(_QWORD *)(v7 + 80);
                          v151 = *(_QWORD *)(v150 + 8);
                          v152 = v151 + 16;
                          if ( (unsigned __int64)(v151 + 16) <= 0xFF0 )
                          {
                            v154 = (__m128 *)(v150 + v151 + 16);
                            *(_QWORD *)(v150 + 8) = v152;
                            if ( v154 )
                              goto LABEL_277;
                          }
                          else
                          {
                            v153 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                                               4096,
                                               *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
                            if ( v153 )
                            {
                              v153->m128_u64[0] = *(_QWORD *)(v7 + 80);
                              *(_QWORD *)(v7 + 80) = v153;
                              v154 = v153 + 1;
                              v154[-1].m128_u64[1] = 16;
LABEL_277:
                              *v154 = _mm_loadh_ps((const double *)v21 + 3);
                              v21[3] = v154;
                              goto LABEL_73;
                            }
                            *(_DWORD *)v7 = 2;
                          }
                        }
LABEL_73:
                        if ( !v225 )
                          goto LABEL_142;
                        goto LABEL_74;
                      }
LABEL_265:
                      if ( v148 )
                      {
                        v147[2] &= ~1uLL;
                        v147[3] = v139;
                      }
                      goto LABEL_267;
                    }
                  }
                }
                v245 = v257;
                sub_86B8E0((unsigned int *)v7, 32, v11, v257, 2, 0);
                sub_86E800(a1, (double *)&v273);
                v33 = sub_868BC0(v7);
                sub_87A280(a1, v269, (char *)v239, v274, 0);
                if ( v268 == 39 )
                {
                  if ( !*(_DWORD *)v7 )
                  {
                    *(_DWORD *)(v7 + 144) = 0;
                    sub_86CA20((unsigned int *)v7, 0x2D2B2928u, 3, 0, 3, 0, 127, 1);
                  }
                  sub_868C70(v7, 0);
                  if ( !*(_DWORD *)v7 )
                  {
                    v192 = *(_QWORD *)(v7 + 80);
                    v193 = *(_QWORD *)(v192 + 8);
                    v194 = v193 + 16;
                    if ( (unsigned __int64)(v193 + 16) <= 0xFF0 )
                    {
                      v196 = (__m128 *)(v192 + v193 + 16);
                      *(_QWORD *)(v192 + 8) = v194;
                      if ( !v196 )
                        goto LABEL_57;
                    }
                    else
                    {
                      v195 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                                         4096,
                                         *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
                      if ( !v195 )
                      {
                        *(_DWORD *)v7 = 2;
                        goto LABEL_57;
                      }
                      v195->m128_u64[0] = *(_QWORD *)(v7 + 80);
                      *(_QWORD *)(v7 + 80) = v195;
                      v196 = v195 + 1;
                      v196[-1].m128_u64[1] = 16;
                    }
                    v197 = _mm_loadh_ps((const double *)&v273);
                    v273 = v196;
                    *v196 = v197;
                  }
                }
LABEL_57:
                sub_87D060((unsigned int **)a1, (__int64)v33);
                goto LABEL_58;
              }
              v165 = v272[1];
              if ( *v272 == 30 )
              {
                v264 = v165;
                v204 = *(_BYTE *)(*(_QWORD *)(a1 + 152) + v165);
                if ( v204 == v165 )
                {
                  v253 = 0;
                  v166 = v272 + 2;
                }
                else
                {
                  v205 = v165 ^ v204;
                  v253 = v205;
                  if ( (v165 & 0x80u) == 0 && v205 == 32 )
                  {
                    v253 = 32;
                    v205 = 32;
                  }
                  else if ( ((unsigned __int8)(v205 - 1) & v205) != 0 )
                  {
                    goto LABEL_54;
                  }
                  v165 |= v205;
                  v166 = v272 + 2;
                  v264 = v165;
                }
              }
              else
              {
                v253 = 0;
                v166 = v272 + 2;
                v264 = v165;
              }
              v272 = v166;
              *((_DWORD *)v21 + 14) = 1;
              *((_BYTE *)v21 + 52) = v165;
              *((_DWORD *)v21 + 12) = v253;
              if ( !(_DWORD)v9 )
              {
                v215 = *(unsigned int **)a1;
                sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
                v216 = sub_86E080(v215, 2, 12, 0, 11, 0);
                v217 = *(_QWORD *)a1;
                v250 = v216;
                if ( !**(_DWORD **)a1 )
                {
                  v218 = sub_868B50(v217, 24);
                  if ( v218 )
                  {
                    v219 = v250;
                    v251 = v218;
                    *v218 = v219;
                    v218[1] = sub_868BC0(v217);
                    v251[2] = *(_QWORD *)(a1 + 312);
                    *(_QWORD *)(a1 + 312) = v251;
                  }
                }
                v19 = v268;
              }
              v167 = v257;
              v258 = v19;
              v256 = v167;
              if ( v19 == 33 )
              {
                sub_86B8E0((unsigned int *)v7, 32, 3, 0, 127, 0);
                sub_86B8E0((unsigned int *)v7, 32, v11, (int)v9, 3, 0);
                v169 = 33;
              }
              else
              {
                sub_86B8E0((unsigned int *)v7, 32, v11, v167, 10, 0);
                sub_86B8E0((unsigned int *)v7, 32, 10, 0, 127, 0);
                sub_86B8E0((unsigned int *)v7, 32, v11, (int)v9, 10, 0);
                v168 = 0;
                if ( v271 != v270 )
                  v168 = v270 + 1;
                sub_86B8E0((unsigned int *)v7, 32, 3, 0, 127, v168);
                v169 = v258;
              }
              v259 = v169;
              if ( v271 )
              {
                sub_86E800(a1, (double *)&v273);
                v170 = v259;
                v266 = nullptr;
              }
              else
              {
                v203 = sub_868C70(v7, 36);
                v170 = v259;
                v266 = v203;
              }
              v260 = v170;
              v171 = sub_868BC0(v7);
              v172 = v260;
              v173 = v171;
              if ( v268 == 39 )
              {
                if ( v271 == v270 )
                {
                  sub_86D900((unsigned int *)v7, 0x40u, 3, 0, 3, 0, 0x7Fu, 1);
                  v172 = v260;
                  goto LABEL_296;
                }
                if ( !*(_DWORD *)v7 )
                {
                  *(_DWORD *)(v7 + 144) = 0;
                  sub_86CA20((unsigned int *)v7, 0x2D2B2928u, 3, 0, 3, 0, 127, 1);
                  v172 = v260;
                }
                v262 = v172;
                sub_868C70(v7, 0);
                v172 = v262;
                if ( !*(_DWORD *)v7 )
                {
                  v209 = *(_QWORD *)(v7 + 80);
                  v210 = *(_QWORD *)(v209 + 8);
                  v211 = v210 + 16;
                  if ( (unsigned __int64)(v210 + 16) <= 0xFF0 )
                  {
                    v213 = (__m128 *)(v209 + v210 + 16);
                    *(_QWORD *)(v209 + 8) = v211;
                    if ( v213 )
                      goto LABEL_382;
                  }
                  else
                  {
                    v212 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                                       4096,
                                       *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
                    v172 = v262;
                    if ( v212 )
                    {
                      v212->m128_u64[0] = *(_QWORD *)(v7 + 80);
                      *(_QWORD *)(v7 + 80) = v212;
                      v213 = v212 + 1;
                      v213[-1].m128_u64[1] = 16;
LABEL_382:
                      v214 = _mm_loadh_ps((const double *)&v273);
                      v273 = v213;
                      *v213 = v214;
                      goto LABEL_296;
                    }
                    *(_DWORD *)v7 = 2;
                  }
                }
              }
LABEL_296:
              v261 = v172;
              sub_87A280(a1, v269, (char *)v239, (double *)&v273, 0);
              v174 = v261;
              if ( v225 )
              {
                sub_86B8E0((unsigned int *)v7, 32, 142, v225, 2, 0);
                v174 = v261;
              }
              if ( !v271 )
              {
                v238 = v174;
                v220 = sub_868BC0(v7);
                v174 = v238;
                if ( v220 )
                {
                  if ( v266 )
                  {
                    v266[2] &= ~1uLL;
                    v266[3] = v220;
                  }
                }
              }
              v232 = v174;
              sub_86E800(a1, (double *)&v273);
              v175 = v232;
              if ( v268 == 39 )
              {
                v206 = v271;
                if ( v271 )
                {
                  if ( v271 == v270 )
                  {
                    v207 = 2;
                  }
                  else
                  {
                    v207 = 4;
                    v206 = v270 + 1 - v271;
                  }
                  v208 = sub_86E080((unsigned int *)v7, v207, 3, 0, 127, v206);
                  v175 = v232;
                  if ( v208 )
                  {
                    if ( v173 )
                    {
                      v208[2] &= ~1uLL;
                      v208[3] = v173;
                    }
                  }
                }
              }
              v233 = v175;
              sub_86B8E0((unsigned int *)v7, 33, 1, 0, 130, 0);
              v176 = v233;
              if ( v253 && !*(_DWORD *)v7 )
              {
                *(_DWORD *)(v7 + 144) = 0;
                sub_86D220((unsigned int *)v7, 0xD0B0908u, 1, 0, 1, 0, 127, v253);
                v176 = v233;
              }
              v234 = v176;
              v177 = sub_86E080((unsigned int *)v7, 1, 1, 0, 127, v264);
              if ( v177 && v173 )
              {
                v177[2] &= ~1uLL;
                v177[3] = v173;
              }
              sub_86B8E0((unsigned int *)v7, 32, v11, (int)v9, 2, 0);
              v178 = v234;
              v179 = *(_DWORD *)v7;
              if ( v234 == 33 )
              {
                if ( !v179 )
                {
                  *(_DWORD *)(v7 + 144) = 0;
                  sub_868840((unsigned int *)v7, 3, 0, 127, 0);
                  v178 = v234;
                }
                v237 = v178;
                sub_86B2A0((unsigned int *)v7, 0, 3, 2, 0, 3);
                v181 = v237;
              }
              else
              {
                if ( !v179 )
                {
                  *(_DWORD *)(v7 + 144) = 0;
                  v180 = sub_867CC0(v7, 0x11u, 127, 0, 10, 0);
                  v178 = v234;
                  if ( v180 )
                    v180[1] |= 0x38u;
                }
                v235 = v178;
                sub_86B2A0((unsigned int *)v7, 0, 10, 2, 0, 10);
                v181 = v235;
              }
              v236 = v181;
              v182 = sub_868C70(v7, 36);
              if ( v182 && v173 )
              {
                v182[2] &= ~1uLL;
                v182[3] = v173;
              }
              v183 = sub_868BC0(v7);
              v184 = (unsigned __int64 *)v273;
              if ( v273 )
              {
                do
                {
                  v185 = *v184;
                  if ( *v184 && v183 )
                  {
                    *(_QWORD *)(v185 + 16) &= ~1uLL;
                    *(_QWORD *)(v185 + 24) = v183;
                  }
                  v184 = (unsigned __int64 *)v184[1];
                }
                while ( v184 );
              }
              sub_86B8E0((unsigned int *)v7, 32, 2, 0, v11, (int)v9);
              if ( v236 == 33 )
              {
                sub_86B8E0((unsigned int *)v7, 32, v11, v256, 3, 0);
              }
              else
              {
                sub_86B8E0((unsigned int *)v7, 32, 1, 0, v11, v256);
                sub_86B8E0((unsigned int *)v7, 32, v11, v256, 10, 0);
                sub_86B8E0((unsigned int *)v7, 32, 10, 0, 1, 0);
              }
              sub_86E080((unsigned int *)v7, 0, 2, 0, 127, 0);
              if ( *(_DWORD *)v7 )
                goto LABEL_324;
              v186 = *(_QWORD *)(v7 + 80);
              v187 = *(_QWORD *)(v186 + 8);
              v188 = v187 + 16;
              if ( (unsigned __int64)(v187 + 16) <= 0xFF0 )
              {
                v190 = (__m128 *)(v186 + v187 + 16);
                *(_QWORD *)(v186 + 8) = v188;
                if ( !v190 )
                  goto LABEL_324;
              }
              else
              {
                v189 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                                   4096,
                                   *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
                if ( !v189 )
                {
                  *(_DWORD *)v7 = 2;
                  goto LABEL_324;
                }
                v189->m128_u64[0] = *(_QWORD *)(v7 + 80);
                *(_QWORD *)(v7 + 80) = v189;
                v190 = v189 + 1;
                v190[-1].m128_u64[1] = 16;
              }
              *v190 = _mm_loadh_ps((const double *)v21 + 3);
              v21[3] = v190;
LABEL_324:
              v21[5] = sub_868BC0(v7);
              sub_86B8E0((unsigned int *)v7, 32, v11, (int)v9, 2, 0);
              sub_86D900((unsigned int *)v7, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
              goto LABEL_20;
            }
            if ( v19 == 33 )
            {
              if ( v271 == 1 )
                sub_86E800(a1, a4);
              if ( !(_DWORD)v9 )
              {
                v221 = *(unsigned int **)a1;
                sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
                v243 = sub_86E080(v221, 2, 12, 0, 11, 0);
                if ( !**(_DWORD **)a1 )
                {
                  v222 = *(_QWORD *)a1;
                  v223 = sub_868B50(*(_QWORD *)a1, 24);
                  v224 = v223;
                  if ( v223 )
                  {
                    *v223 = v243;
                    v223[1] = sub_868BC0(v222);
                    v224[2] = *(_QWORD *)(a1 + 312);
                    *(_QWORD *)(a1 + 312) = v224;
                  }
                }
              }
              sub_86B8E0((unsigned int *)v7, 32, v11, (int)v9, 13, 0);
              sub_86B8E0((unsigned int *)v7, 32, v11, v257, 2, 0);
              sub_86B8E0((unsigned int *)v7, 32, 2, 0, 13, 0);
              sub_86E670(a1);
              if ( v225 )
                sub_86B8E0((unsigned int *)v7, 32, 142, v225, 13, 0);
            }
            else
            {
              if ( !(_DWORD)v9 )
              {
                v198 = *(unsigned int **)a1;
                sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
                v199 = sub_86E080(v198, 2, 12, 0, 11, 0);
                v200 = *(_QWORD *)a1;
                v241 = v199;
                if ( !**(_DWORD **)a1 )
                {
                  v201 = sub_868B50(v200, 24);
                  if ( v201 )
                  {
                    v202 = v241;
                    v242 = v201;
                    *v201 = v202;
                    v201[1] = sub_868BC0(v200);
                    v242[2] = *(_QWORD *)(a1 + 312);
                    *(_QWORD *)(a1 + 312) = v242;
                  }
                }
              }
              sub_86B8E0((unsigned int *)v7, 32, v11, v257, 2, 0);
              sub_86D900((unsigned int *)v7, 0x40u, 2, 0, 2, 0, 0x7Fu, v270);
              if ( *(_DWORD *)(a1 + 168) == 1 )
              {
                if ( !*(_DWORD *)v7 )
                {
                  *(_DWORD *)(v7 + 144) = 0;
                  sub_868840((unsigned int *)v7, 2, 0, 13, 0);
                }
                sub_86B2A0((unsigned int *)v7, 4, 2, 13, 0, 2);
              }
              else
              {
                v122 = sub_86E080((unsigned int *)v7, 5, 2, 0, 13, 0);
                sub_86E670(a1);
                v123 = sub_868BC0(v7);
                if ( v122 && v123 )
                {
                  v122[2] &= ~1uLL;
                  v122[3] = v123;
                }
              }
              sub_86B8E0((unsigned int *)v7, 32, v11, (int)v9, 2, 0);
              if ( v225 )
LABEL_74:
                sub_86B8E0((unsigned int *)v7, 32, 142, v225, 2, 0);
            }
          }
LABEL_142:
          v21[5] = sub_868BC0(v7);
          goto LABEL_20;
        case 1:
        case 5:
          if ( !(_DWORD)v9 )
          {
            v112 = *(unsigned int **)a1;
            sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
            v113 = sub_86E080(v112, 2, 12, 0, 11, 0);
            v114 = *(_QWORD *)a1;
            v246 = v113;
            if ( !**(_DWORD **)a1 )
            {
              v115 = sub_868B50(v114, 24);
              if ( v115 )
              {
                v116 = v246;
                v247 = v115;
                *v115 = v116;
                v115[1] = sub_868BC0(v114);
                v247[2] = *(_QWORD *)(a1 + 312);
                *(_QWORD *)(a1 + 312) = v247;
              }
            }
          }
          if ( v271 )
          {
            if ( v271 != 1 )
              sub_86B8E0((unsigned int *)v7, 32, 3, 0, 127, v271);
            if ( v268 == 38 )
              sub_86B8E0((unsigned int *)v7, 32, v11, v9, 127, -1);
            v30 = sub_868BC0(v7);
            v31 = v269;
            v21[5] = v30;
            v32 = v30;
            sub_87A280(a1, v31, (char *)v239, (double *)v21 + 3, 1);
            if ( v271 > 1 )
            {
              if ( !*(_DWORD *)v7 )
              {
                *(_DWORD *)(v7 + 144) = 0;
                sub_86CA20((unsigned int *)v7, 0x2D2B2928u, 3, 0, 3, 0, 127, 1);
              }
              v91 = sub_868C70(v7, 1);
              if ( v91 && v32 )
              {
                v91[2] &= ~1uLL;
                v91[3] = v32;
              }
            }
            if ( v268 == 38 )
            {
              if ( !*(_DWORD *)v7 )
              {
                *(_DWORD *)(v7 + 144) = 0;
                sub_86D220((unsigned int *)v7, 0x25232120u, v11, v9, v11, v9, 2, 0);
              }
            }
            else
            {
              sub_86B8E0((unsigned int *)v7, 32, v11, v9, 2, 0);
            }
          }
          else
          {
            sub_86B8E0((unsigned int *)v7, 32, v11, v9, 2, 0);
            v21[5] = sub_868BC0(v7);
          }
          goto LABEL_48;
        case 4:
          if ( !(_DWORD)v9 )
          {
            v107 = *(unsigned int **)a1;
            sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 8);
            v108 = sub_86E080(v107, 2, 12, 0, 11, 0);
            v109 = *(_QWORD *)a1;
            v228 = v108;
            if ( !**(_DWORD **)a1 )
            {
              v110 = sub_868B50(v109, 24);
              if ( v110 )
              {
                v111 = v228;
                v229 = v110;
                *v110 = v111;
                v110[1] = sub_868BC0(v109);
                v229[2] = *(_QWORD *)(a1 + 312);
                *(_QWORD *)(a1 + 312) = v229;
              }
            }
          }
          sub_86B8E0((unsigned int *)v7, 32, v11, (int)v9, 2, 0);
          sub_87A280(a1, v269, (char *)v239, (double *)v21 + 3, 1);
          goto LABEL_142;
        case 7:
          if ( !(_DWORD)v9 )
          {
            v117 = *(unsigned int **)a1;
            sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 12, 0, 0x7Fu, 16);
            v118 = sub_86E080(v117, 2, 12, 0, 11, 0);
            v119 = *(_QWORD *)a1;
            v230 = v118;
            if ( !**(_DWORD **)a1 )
            {
              v120 = sub_868B50(v119, 24);
              if ( v120 )
              {
                v121 = v230;
                v231 = v120;
                *v120 = v121;
                v120[1] = sub_868BC0(v119);
                v231[2] = *(_QWORD *)(a1 + 312);
                *(_QWORD *)(a1 + 312) = v231;
              }
            }
          }
          sub_86B8E0((unsigned int *)v7, 32, v11, v257, 127, v270 + 1);
          if ( v271 )
          {
            if ( v271 != 1 )
              sub_86B8E0((unsigned int *)v7, 32, 3, 0, 127, v271);
            v76 = sub_868BC0(v7);
            v77 = v269;
            v21[5] = v76;
            v78 = v76;
            sub_87A280(a1, v77, (char *)v239, (double *)v21 + 3, 1);
            if ( v271 > 1 )
            {
              if ( !*(_DWORD *)v7 )
              {
                *(_DWORD *)(v7 + 144) = 0;
                sub_86CA20((unsigned int *)v7, 0x2D2B2928u, 3, 0, 3, 0, 127, 1);
              }
              v90 = sub_868C70(v7, 1);
              if ( v90 && v78 )
              {
                v90[2] &= ~1uLL;
                v90[3] = v78;
              }
            }
            sub_86B8E0((unsigned int *)v7, 32, v11, v9, 2, 0);
          }
          else
          {
            sub_86B8E0((unsigned int *)v7, 32, v11, v9, 2, 0);
            v21[5] = sub_868BC0(v7);
          }
          goto LABEL_20;
        case 9:
          if ( v269 != 13 )
          {
            if ( v271 == 1 )
              sub_86B8E0((unsigned int *)v7, 32, v254, v263, 2, 0);
            sub_86E800(a1, (double *)&v273);
            v64 = sub_868BC0(v7);
            sub_87A280(a1, v269, (char *)v239, v274, 0);
            sub_87D060((unsigned int **)a1, (__int64)v64);
            if ( v269 != 22 )
              sub_86D900((unsigned int *)v7, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
            v65 = sub_868BC0(v7);
            v66 = v274[0];
            if ( *(_QWORD *)&v274[0] )
            {
              do
              {
                v67 = **(_QWORD **)&v66;
                if ( **(_QWORD **)&v66 && v65 )
                {
                  *(_QWORD *)(v67 + 16) &= ~1uLL;
                  *(_QWORD *)(v67 + 24) = v65;
                }
                v66 = *(double *)(*(_QWORD *)&v66 + 8LL);
              }
              while ( v66 != 0.0 );
            }
            if ( v269 != 22 )
              sub_86D900((unsigned int *)v7, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
            v68 = sub_868BC0(v7);
            v69 = (unsigned __int64 *)v273;
            if ( v273 )
            {
              do
              {
                v70 = *v69;
                if ( *v69 && v68 )
                {
                  *(_QWORD *)(v70 + 16) &= ~1uLL;
                  *(_QWORD *)(v70 + 24) = v68;
                }
                v69 = (unsigned __int64 *)v69[1];
              }
              while ( v69 );
            }
            if ( v271 != 1 )
              goto LABEL_48;
            sub_86E080((unsigned int *)v7, 0, v254, v263, 2, 0);
            if ( *(_DWORD *)v7 )
              goto LABEL_48;
            v71 = *(_QWORD *)(v7 + 80);
            v72 = *(_QWORD *)(v71 + 8);
            v73 = v72 + 16;
            if ( (unsigned __int64)(v72 + 16) <= 0xFF0 )
            {
              v75 = (__m128 *)(v71 + v72 + 16);
              *(_QWORD *)(v71 + 8) = v73;
              if ( v75 )
                goto LABEL_133;
            }
            else
            {
              v74 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                                4096,
                                *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
              if ( v74 )
              {
                v74->m128_u64[0] = *(_QWORD *)(v7 + 80);
                *(_QWORD *)(v7 + 80) = v74;
                v75 = v74 + 1;
                v75[-1].m128_u64[1] = 16;
LABEL_133:
                *v75 = _mm_loadh_ps(a4);
                *(_QWORD *)a4 = v75;
                goto LABEL_48;
              }
              *(_DWORD *)v7 = 2;
            }
LABEL_48:
            if ( v225 )
              sub_86B8E0((unsigned int *)v7, 32, 142, v225, 2, 0);
            goto LABEL_20;
          }
          if ( v271 == 1 )
            sub_86E800(a1, a4);
          sub_86B8E0((unsigned int *)v7, 32, 2, 0, 13, 0);
          sub_86E670(a1);
          if ( v225 )
            sub_86B8E0((unsigned int *)v7, 32, 142, v225, 13, 0);
          goto LABEL_20;
        case 11:
          sub_86B8E0((unsigned int *)v7, 32, v254, v263, 2, 0);
          sub_87A280(a1, v269, (char *)v239, (double *)&v273, 1);
          sub_86B8E0((unsigned int *)v7, 32, v254, v263, 2, 0);
          v59 = sub_868BC0(v7);
          v60 = (unsigned __int64 *)v273;
          if ( v273 )
          {
            do
            {
              v61 = *v60;
              if ( *v60 && v59 )
              {
                *(_QWORD *)(v61 + 16) &= ~1uLL;
                *(_QWORD *)(v61 + 24) = v59;
              }
              v60 = (unsigned __int64 *)v60[1];
            }
            while ( v60 );
          }
          v62 = v254;
          v63 = v263;
          goto LABEL_110;
        case 12:
          v40 = v270 + v271;
          v270 += v271;
          if ( v269 != 22 )
          {
            if ( v271 == (_DWORD)v40 )
              v40 = 0;
            sub_86B8E0((unsigned int *)v7, 32, 3, 0, 127, v40);
            sub_86E800(a1, (double *)&v273);
            v41 = sub_868BC0(v7);
            sub_87A280(a1, v269, (char *)v239, v274, 0);
            if ( v271 == v270 )
            {
              sub_86D900((unsigned int *)v7, 0x40u, 3, 0, 3, 0, 0x7Fu, 1);
            }
            else
            {
              if ( !*(_DWORD *)v7 )
              {
                *(_DWORD *)(v7 + 144) = 0;
                sub_86CA20((unsigned int *)v7, 0x2D2B2928u, 3, 0, 3, 0, 127, 1);
              }
              sub_868C70(v7, 0);
              if ( !*(_DWORD *)v7 )
              {
                v42 = *(_QWORD *)(v7 + 80);
                v43 = *(_QWORD *)(v42 + 8);
                v44 = v43 + 16;
                if ( (unsigned __int64)(v43 + 16) <= 0xFF0 )
                {
                  v46 = (__m128 *)(v42 + v43 + 16);
                  *(_QWORD *)(v42 + 8) = v44;
                  if ( v46 )
                    goto LABEL_85;
                }
                else
                {
                  v45 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                                    4096,
                                    *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
                  if ( v45 )
                  {
                    v45->m128_u64[0] = *(_QWORD *)(v7 + 80);
                    *(_QWORD *)(v7 + 80) = v45;
                    v46 = v45 + 1;
                    v46[-1].m128_u64[1] = 16;
LABEL_85:
                    v47 = _mm_loadh_ps((const double *)&v273);
                    v273 = v46;
                    *v46 = v47;
                    goto LABEL_86;
                  }
                  *(_DWORD *)v7 = 2;
                }
              }
            }
LABEL_86:
            sub_87D060((unsigned int **)a1, (__int64)v41);
            sub_86D900((unsigned int *)v7, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
            v48 = sub_868BC0(v7);
            v49 = v274[0];
            if ( *(_QWORD *)&v274[0] )
            {
              do
              {
                v50 = **(_QWORD **)&v49;
                if ( **(_QWORD **)&v49 && v48 )
                {
                  *(_QWORD *)(v50 + 16) &= ~1uLL;
                  *(_QWORD *)(v50 + 24) = v48;
                }
                v49 = *(double *)(*(_QWORD *)&v49 + 8LL);
              }
              while ( v49 != 0.0 );
            }
            sub_86D900((unsigned int *)v7, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
            v51 = sub_868BC0(v7);
            v52 = (unsigned __int64 *)v273;
            if ( v273 )
            {
              do
              {
                v53 = *v52;
                if ( *v52 && v51 )
                {
                  *(_QWORD *)(v53 + 16) &= ~1uLL;
                  *(_QWORD *)(v53 + 24) = v51;
                }
                v52 = (unsigned __int64 *)v52[1];
              }
              while ( v52 );
            }
            if ( v271 )
            {
              if ( v271 == v270 )
                sub_86E080((unsigned int *)v7, 2, 3, 0, 127, v271);
              else
                sub_86E080((unsigned int *)v7, 4, 3, 0, 127, v270 - v271);
              if ( !*(_DWORD *)v7 )
              {
                v54 = *(_QWORD *)(v7 + 80);
                v55 = *(_QWORD *)(v54 + 8);
                v56 = v55 + 16;
                if ( (unsigned __int64)(v55 + 16) <= 0xFF0 )
                {
                  v58 = (__m128 *)(v54 + v55 + 16);
                  *(_QWORD *)(v54 + 8) = v56;
                  if ( !v58 )
                    goto LABEL_20;
LABEL_103:
                  *v58 = _mm_loadh_ps(a4);
                  *(_QWORD *)a4 = v58;
                  goto LABEL_20;
                }
                v57 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                                  4096,
                                  *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
                if ( v57 )
                {
                  v57->m128_u64[0] = *(_QWORD *)(v7 + 80);
                  *(_QWORD *)(v7 + 80) = v57;
                  v58 = v57 + 1;
                  v58[-1].m128_u64[1] = 16;
                  goto LABEL_103;
                }
                *(_DWORD *)v7 = 2;
              }
            }
LABEL_20:
            v22 = *(_QWORD *)a1;
            if ( !**(_DWORD **)a1 )
            {
              *(_DWORD *)(v22 + 144) = 0;
              sub_86CA20((unsigned int *)v22, 0x2D2B2928u, 10, 0, 10, 0, 127, 1);
            }
            sub_868C70(v22, 0);
            if ( *(_DWORD *)v22 )
              return v272;
            v23 = *(_QWORD *)(v22 + 80);
            v24 = *(_QWORD *)(v23 + 8);
            v25 = v24 + 16;
            if ( (unsigned __int64)(v24 + 16) <= 0xFF0 )
            {
              v27 = (__m128 *)(v23 + v24 + 16);
              *(_QWORD *)(v23 + 8) = v25;
              if ( !v27 )
                return v272;
            }
            else
            {
              v26 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v22 + 56))(
                                4096,
                                *(_QWORD *)(*(_QWORD *)(v22 + 56) + 16LL));
              if ( !v26 )
              {
                *(_DWORD *)v22 = 2;
                return v272;
              }
              v26->m128_u64[0] = *(_QWORD *)(v22 + 80);
              *(_QWORD *)(v22 + 80) = v26;
              v27 = v26 + 1;
              v27[-1].m128_u64[1] = 16;
            }
            *v27 = _mm_loadh_ps((const double *)(a1 + 384));
            *(_QWORD *)(a1 + 384) = v27;
            return v272;
          }
          sub_86B8E0((unsigned int *)v7, 32, 142, 24, 10, 0);
          v124 = v270;
          if ( v271 == v270 )
            v124 = 0;
          sub_86B8E0((unsigned int *)v7, 32, 10, 0, 127, v124);
          v125 = sub_868BC0(v7);
          sub_86B8E0((unsigned int *)v7, 32, 3, 0, 2, 0);
          sub_87A280(a1, v269, (char *)v239, (double *)&v273, 1);
          if ( v271 == v270 )
          {
            sub_86D900((unsigned int *)v7, 0x40u, 10, 0, 10, 0, 0x7Fu, 1);
            v191 = sub_868C70(v7, 36);
            if ( v191 && v125 )
            {
              v191[2] &= ~1uLL;
              v191[3] = v125;
            }
          }
          else
          {
            if ( !*(_DWORD *)v7 )
            {
              *(_DWORD *)(v7 + 144) = 0;
              sub_86CA20((unsigned int *)v7, 0x2D2B2928u, 10, 0, 10, 0, 127, 1);
            }
            v126 = sub_868C70(v7, 1);
            if ( v126 && v125 )
            {
              v126[2] &= ~1uLL;
              v126[3] = v125;
            }
            sub_86B8E0((unsigned int *)v7, 32, 3, 0, 2, 0);
          }
          v127 = sub_868BC0(v7);
          v128 = (unsigned __int64 *)v273;
          if ( v273 )
          {
            do
            {
              v129 = *v128;
              if ( *v128 && v127 )
              {
                *(_QWORD *)(v129 + 16) &= ~1uLL;
                *(_QWORD *)(v129 + 24) = v127;
              }
              v128 = (unsigned __int64 *)v128[1];
            }
            while ( v128 );
          }
          if ( !v271 )
            goto LABEL_240;
          v130 = *(_DWORD *)v7;
          if ( v271 == v270 )
          {
            v131 = v271;
            if ( v130 )
              goto LABEL_240;
          }
          else
          {
            v131 = v270 - v271;
            if ( v130 )
            {
LABEL_240:
              sub_86B8E0((unsigned int *)v7, 32, 10, 0, 142, 24);
              if ( v271 )
              {
                v132 = 4;
                if ( v271 == v270 )
                  v132 = 2;
                sub_868C70(v7, v132);
                if ( !*(_DWORD *)v7 )
                {
                  v133 = *(_QWORD *)(v7 + 80);
                  v134 = *(_QWORD *)(v133 + 8);
                  v135 = v134 + 16;
                  if ( (unsigned __int64)(v134 + 16) <= 0xFF0 )
                  {
                    v137 = (__m128 *)(v133 + v134 + 16);
                    *(_QWORD *)(v133 + 8) = v135;
                    if ( v137 )
                      goto LABEL_247;
                  }
                  else
                  {
                    v136 = (__m128 *)(**(__int64 (__fastcall ***)(__int64, _QWORD))(v7 + 56))(
                                       4096,
                                       *(_QWORD *)(*(_QWORD *)(v7 + 56) + 16LL));
                    if ( v136 )
                    {
                      v136->m128_u64[0] = *(_QWORD *)(v7 + 80);
                      *(_QWORD *)(v7 + 80) = v136;
                      v137 = v136 + 1;
                      v137[-1].m128_u64[1] = 16;
LABEL_247:
                      *v137 = _mm_loadh_ps(a4);
                      *(_QWORD *)a4 = v137;
                      goto LABEL_248;
                    }
                    *(_DWORD *)v7 = 2;
                  }
                }
              }
LABEL_248:
              v63 = 0;
              v62 = 3;
LABEL_110:
              sub_86B8E0((unsigned int *)v7, 32, 2, 0, v62, v63);
              goto LABEL_20;
            }
          }
          *(_DWORD *)(v7 + 144) = 0;
          sub_868840((unsigned int *)v7, 10, 0, 127, v131);
          goto LABEL_240;
        default:
          goto LABEL_20;
      }
    }
  }
  return nullptr;
}
