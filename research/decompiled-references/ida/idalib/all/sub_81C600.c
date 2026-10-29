__int64 __fastcall sub_81C600(__int64 a1, __int64 a2, unsigned __int8 **a3, __int64 *a4, int *a5)
{
  unsigned __int8 **v5; // rsi
  unsigned __int64 v6; // r11
  unsigned __int8 *v7; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r15
  unsigned __int64 v12; // rbx
  const char *v13; // rax
  unsigned int v14; // ebp
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r8
  __int64 v18; // r12
  _DWORD *v19; // r14
  unsigned __int64 v20; // r15
  __int64 v21; // rdi
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  int v25; // ebx
  unsigned __int64 v26; // rbp
  __int64 v27; // rcx
  __int64 *v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // ebp
  unsigned __int64 v33; // rbx
  __int64 *v34; // rsi
  unsigned __int8 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdi
  unsigned __int64 v38; // rbx
  unsigned int v39; // ebp
  __m128i *v40; // rsi
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdi
  unsigned __int64 k; // rax
  _BYTE *v45; // rbp
  __int64 v46; // r15
  __int64 v47; // r14
  __int64 v48; // r12
  _BYTE *v49; // r13
  _DWORD *v50; // r15
  _BYTE *v51; // rdi
  __int64 v52; // r15
  unsigned __int8 *v53; // r14
  _QWORD *v54; // r13
  __int64 v55; // rbp
  unsigned __int8 *v56; // r12
  __int64 v57; // r14
  __int64 v58; // rax
  unsigned __int8 *v59; // rsi
  _QWORD *v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rax
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rsi
  unsigned __int64 m; // rax
  __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // r10
  _DWORD *v70; // r9
  _DWORD *v71; // r14
  __m128i *v72; // r13
  _BYTE *v73; // rbx
  _DWORD *v74; // rbp
  _BYTE *n; // r12
  __int64 v76; // rax
  int v77; // r11d
  int v78; // eax
  __int64 v79; // rax
  unsigned int v80; // edx
  __int64 ii; // rax
  _BYTE *v82; // r8
  _BYTE *v83; // r15
  __int64 v84; // r14
  __m128i v85; // xmm0
  __m128i v86; // xmm0
  __m128i v87; // xmm0
  char *v88; // rdi
  char *v89; // rax
  char v90; // dl
  __int64 v91; // rsi
  unsigned __int64 v92; // r9
  _BYTE *v93; // r8
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rax
  __int64 v97; // r8
  _BYTE *v98; // r9
  unsigned __int64 v99; // r10
  unsigned __int64 v100; // rax
  __int64 v101; // rsi
  _BYTE *v102; // rdx
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // r13
  __int64 v105; // rcx
  __int64 jj; // rdx
  __int64 *v107; // rax
  unsigned __int64 v108; // rdx
  __int64 *v109; // rax
  __int64 v110; // rsi
  __int64 v111; // rdi
  unsigned __int64 v112; // rdx
  unsigned __int8 *v113; // r12
  __int64 v114; // r15
  _BYTE *v115; // r14
  __int64 v116; // rbp
  __int64 v117; // rdi
  int v118; // ebx
  unsigned __int64 v119; // r13
  _BYTE *v120; // r12
  unsigned __int64 v121; // r15
  __int64 *v122; // rsi
  __int64 v123; // rax
  __int64 v124; // r10
  char v125; // cl
  __int64 v126; // r12
  unsigned __int64 v127; // r15
  unsigned __int64 v128; // rbx
  unsigned __int64 v129; // rbx
  __int64 v130; // rax
  _BYTE *v131; // r12
  unsigned __int64 v132; // r15
  __int64 v133; // r14
  __int64 v134; // rbp
  unsigned __int64 v135; // r13
  __int64 *v136; // rsi
  __int64 v137; // rax
  __int64 v138; // r9
  __m128i *v139; // rdx
  unsigned __int64 v140; // rsi
  __m128i *v141; // r10
  __m128i *v142; // r9
  __m128i *v143; // rax
  unsigned __int64 v144; // r11
  unsigned __int64 v145; // rcx
  unsigned __int64 v146; // rdi
  unsigned __int64 v147; // rbx
  __int64 kk; // rax
  __int64 *v149; // rax
  __int64 *v150; // rax
  unsigned __int8 *v151; // r13
  __int64 v152; // rsi
  __int64 v153; // rax
  unsigned __int8 *v154; // r15
  unsigned __int8 *v155; // r12
  __int64 v156; // rcx
  unsigned __int8 *v157; // rdx
  _DWORD *v158; // r15
  __int64 v159; // rcx
  unsigned __int8 *v160; // r15
  unsigned __int8 *v161; // r13
  __int64 v162; // r14
  unsigned __int64 v163; // rbx
  __int64 *v164; // rsi
  unsigned __int8 v165; // r12
  __int64 v166; // rax
  __int64 v167; // r10
  __int64 *v168; // rax
  unsigned __int8 *v169; // r12
  unsigned __int64 v170; // r15
  int v171; // eax
  __int64 v172; // rsi
  __int64 v173; // rdi
  _DWORD *v174; // rbp
  unsigned __int64 v175; // r15
  __int64 v176; // rax
  _BYTE *v177; // rcx
  __int64 v178; // rbx
  unsigned __int64 v179; // rax
  unsigned __int64 v180; // rsi
  unsigned __int64 v181; // r9
  __int64 i; // rsi
  __int64 v183; // rsi
  unsigned __int8 **j; // r13
  unsigned __int8 *v185; // r12
  unsigned __int8 *v186; // rdx
  unsigned __int8 *v187; // r13
  __int64 v188; // rax
  __int64 v189; // rdi
  unsigned __int8 *v190; // r14
  unsigned __int8 *v191; // r13
  __int64 v192; // rbp
  unsigned __int64 v193; // rbx
  __int64 *v194; // rsi
  unsigned __int8 v195; // r12
  __int64 v196; // rax
  __int64 *v197; // rsi
  unsigned __int8 v198; // bl
  __int64 v199; // rax
  __int64 *v200; // rax
  __int64 *v201; // rax
  _BYTE v202[8]; // [rsp+0h] [rbp-85A8h] BYREF
  unsigned __int64 v203; // [rsp+8h] [rbp-85A0h]
  __int64 v204; // [rsp+10h] [rbp-8598h]
  _BYTE *v205; // [rsp+18h] [rbp-8590h]
  int *v206; // [rsp+20h] [rbp-8588h]
  _BYTE *v207; // [rsp+28h] [rbp-8580h]
  __int64 v208; // [rsp+30h] [rbp-8578h]
  unsigned __int8 **v209; // [rsp+38h] [rbp-8570h]
  unsigned __int64 v210; // [rsp+40h] [rbp-8568h]
  __int64 v211; // [rsp+48h] [rbp-8560h]
  _DWORD *v212; // [rsp+50h] [rbp-8558h]
  unsigned __int64 v213; // [rsp+58h] [rbp-8550h]
  unsigned __int64 v214; // [rsp+60h] [rbp-8548h]
  __int64 v215; // [rsp+68h] [rbp-8540h]
  __int64 v216; // [rsp+70h] [rbp-8538h]
  __int64 v217; // [rsp+78h] [rbp-8530h]
  _BYTE *v218; // [rsp+80h] [rbp-8528h]
  __int64 *v219; // [rsp+88h] [rbp-8520h] BYREF
  char v220[8]; // [rsp+90h] [rbp-8518h] BYREF
  __int64 v221; // [rsp+98h] [rbp-8510h]
  _BYTE *v222; // [rsp+A0h] [rbp-8508h] BYREF
  _BYTE *v223; // [rsp+A8h] [rbp-8500h]
  unsigned __int64 v224; // [rsp+B0h] [rbp-84F8h]
  __m128i v225; // [rsp+B8h] [rbp-84F0h]
  _BYTE v226[144]; // [rsp+D0h] [rbp-84D8h] BYREF
  _DWORD v227[256]; // [rsp+160h] [rbp-8448h] BYREF
  __m128i v228; // [rsp+560h] [rbp-8048h] BYREF
  __m128i v229; // [rsp+570h] [rbp-8038h] BYREF
  __m128i v230; // [rsp+580h] [rbp-8028h] BYREF
  __m128i v231; // [rsp+590h] [rbp-8018h] BYREF
  __m128i v232; // [rsp+5A0h] [rbp-8008h] BYREF
  __m128i v233; // [rsp+5B0h] [rbp-7FF8h] BYREF
  __m128i v234; // [rsp+5C0h] [rbp-7FE8h] BYREF
  __m128i v235; // [rsp+5D0h] [rbp-7FD8h] BYREF
  __m128i v236; // [rsp+5E0h] [rbp-7FC8h] BYREF
  __m128i v237; // [rsp+5F0h] [rbp-7FB8h] BYREF
  __m128i v238; // [rsp+600h] [rbp-7FA8h] BYREF
  __m128i v239; // [rsp+610h] [rbp-7F98h] BYREF
  __m128i v240; // [rsp+620h] [rbp-7F88h] BYREF
  __m128i v241; // [rsp+630h] [rbp-7F78h] BYREF
  __m128i v242; // [rsp+640h] [rbp-7F68h] BYREF
  __m128i v243; // [rsp+650h] [rbp-7F58h] BYREF
  _BYTE v244[256]; // [rsp+660h] [rbp-7F48h] BYREF
  char v245; // [rsp+760h] [rbp-7E48h] BYREF
  _DWORD v246[2048]; // [rsp+D60h] [rbp-7848h] BYREF
  _QWORD v247[2048]; // [rsp+2D60h] [rbp-5848h] BYREF
  _OWORD v248[128]; // [rsp+6D60h] [rbp-1848h] BYREF
  _BYTE v249[256]; // [rsp+7560h] [rbp-1048h] BYREF
  _BYTE v250[1792]; // [rsp+7660h] [rbp-F48h] BYREF
  _BYTE v251[2056]; // [rsp+7D60h] [rbp-848h] BYREF
  unsigned __int64 v252; // [rsp+8568h] [rbp-40h]
  _QWORD v253[7]; // [rsp+8570h] [rbp-38h] BYREF

  v219 = a4;
  v209 = a3;
  v206 = a5;
  v252 = __readfsqword(0x28u);
  v220[0] = 0;
  v221 = 1;
  v211 = a4[1];
  memset(v227, 0, sizeof(v227));
  if ( a3 )
  {
    v5 = a3;
    v6 = 0;
    do
    {
      v7 = v5[1];
      v8 = *v5;
      v6 += (unsigned __int64)v7;
      v9 = (unsigned __int64)&v7[(_QWORD)*v5];
      do
      {
        v10 = *v8++;
        ++v227[v10];
      }
      while ( (unsigned __int64)v8 < v9 );
      v5 = (unsigned __int8 **)v5[3];
    }
    while ( v5 );
    v11 = 8 * v6;
  }
  else
  {
    v11 = 0;
    v6 = 0;
  }
  v12 = *((_QWORD *)v206 + 1);
  if ( v12 > 8 )
  {
    v13 = "invalid secondary encoder group number";
LABEL_9:
    *(_QWORD *)(a1 + 64) = v13;
    return (unsigned int)-17710;
  }
  v16 = *((_QWORD *)v206 + 2);
  if ( v16 )
  {
    if ( v16 - 5 > 0x9B || 0xCCCCCCCCCCCCCCCDLL * v16 > 0x3333333333333333LL )
    {
      v13 = "invalid secondary encoder sector size";
      goto LABEL_9;
    }
    if ( v12 )
      goto LABEL_15;
    v171 = *v206;
    if ( *v206 != 1 )
    {
      if ( v171 != 2 )
      {
        if ( v171 )
        {
LABEL_15:
          v17 = v16 / 5 - 1;
          goto LABEL_16;
        }
        if ( v6 > 0x3E7 )
        {
          if ( v6 > 0xF9F )
          {
            if ( v6 > 0x1B57 )
            {
              if ( v6 <= 0x270F )
              {
                v12 = 4;
                v17 = v16 / 5 - 1;
                goto LABEL_16;
              }
              goto LABEL_301;
            }
            goto LABEL_344;
          }
LABEL_345:
          v12 = 2;
          v17 = v16 / 5 - 1;
          goto LABEL_16;
        }
LABEL_254:
        v12 = 1;
        v17 = v16 / 5 - 1;
        goto LABEL_16;
      }
      if ( v6 <= 0x2327 )
        goto LABEL_254;
      if ( v6 <= 0x61A7 )
        goto LABEL_345;
      if ( v6 > 0xC34F )
      {
        if ( v6 > 0x1869F )
          v12 = 7;
        else
          v12 = 5;
        v17 = v16 / 5 - 1;
        goto LABEL_16;
      }
LABEL_344:
      v17 = v16 / 5 - 1;
      goto LABEL_260;
    }
    if ( v6 <= 0x1B57 )
      goto LABEL_254;
    if ( v6 <= 0x270F )
      goto LABEL_345;
    if ( v6 <= 0x61A7 )
      goto LABEL_344;
    if ( v6 > 0xC34F )
    {
      v12 = 8;
      v17 = v16 / 5 - 1;
      goto LABEL_16;
    }
    v17 = v16 / 5 - 1;
LABEL_343:
    v12 = 6;
    goto LABEL_16;
  }
  v78 = *v206;
  if ( *v206 == 1 )
  {
    if ( v6 > 0x1B57 )
    {
      if ( v6 <= 0x270F )
      {
        v17 = 9;
        v16 = 50;
        if ( !v12 )
          v12 = 2;
        goto LABEL_16;
      }
      if ( v6 > 0x61A7 )
      {
        v17 = 7;
        v16 = 40;
        if ( v6 > 0xC34F )
        {
          if ( !v12 )
            goto LABEL_316;
          goto LABEL_16;
        }
        if ( v12 )
          goto LABEL_16;
        goto LABEL_343;
      }
      v17 = 9;
      v16 = 50;
      goto LABEL_297;
    }
    if ( !v12 )
      goto LABEL_254;
    if ( v12 != 1 )
    {
      v79 = 1;
      goto LABEL_188;
    }
LABEL_253:
    v17 = -1;
    goto LABEL_16;
  }
  if ( v78 == 2 )
  {
    if ( v6 > 0x2327 )
    {
      v17 = 25;
      v16 = 130;
      if ( v6 <= 0x61A7 )
      {
        if ( v12 )
          goto LABEL_16;
LABEL_257:
        v12 = 2;
        goto LABEL_16;
      }
      if ( v6 > 0xC34F )
      {
        if ( v6 > 0x1869F )
        {
          if ( v12 )
            goto LABEL_16;
          goto LABEL_234;
        }
        if ( v12 )
          goto LABEL_16;
LABEL_300:
        v12 = 5;
        goto LABEL_16;
      }
LABEL_297:
      if ( v12 )
        goto LABEL_16;
LABEL_260:
      v12 = 3;
      goto LABEL_16;
    }
    if ( !v12 )
      goto LABEL_254;
    if ( v12 != 1 )
    {
      v79 = 2;
      goto LABEL_188;
    }
    goto LABEL_253;
  }
  v17 = -1;
  if ( v78 )
    goto LABEL_16;
  if ( v6 <= 0x3E7 )
  {
    if ( !v12 )
      goto LABEL_254;
    if ( v12 == 1 )
      goto LABEL_16;
    v79 = 0;
LABEL_188:
    v16 = qword_23BAF30[v79];
    v17 = v16 / 5 - 1;
    goto LABEL_16;
  }
  if ( v6 <= 0xF9F )
  {
    v17 = 1;
    v16 = 10;
    if ( v12 )
      goto LABEL_16;
    goto LABEL_257;
  }
  if ( v6 <= 0x1B57 )
  {
    v17 = 1;
    v16 = 10;
    if ( v12 )
      goto LABEL_16;
    goto LABEL_260;
  }
  if ( v6 <= 0x270F )
  {
    v17 = 1;
    v16 = 10;
    if ( !v12 )
    {
      v17 = 1;
      v16 = 10;
      v12 = 4;
    }
    goto LABEL_16;
  }
LABEL_301:
  if ( v6 <= 0x61A7 )
  {
    if ( v12 )
    {
      if ( v16 )
        goto LABEL_309;
      v17 = 1;
      v16 = 10;
      goto LABEL_16;
    }
    if ( v16 )
    {
      v12 = 5;
      v17 = v16 / 5 - 1;
      goto LABEL_16;
    }
    v17 = 1;
    v16 = 10;
    goto LABEL_300;
  }
  if ( v6 <= 0xC34F )
  {
    if ( v12 )
    {
      if ( v16 )
        goto LABEL_309;
      v17 = 3;
      v16 = 20;
      goto LABEL_16;
    }
    if ( v16 )
    {
      v12 = 7;
      v17 = v16 / 5 - 1;
      goto LABEL_16;
    }
    v17 = 3;
    v16 = 20;
LABEL_234:
    v12 = 7;
    goto LABEL_16;
  }
  if ( v6 <= 0x1869F )
  {
    if ( v12 )
    {
      if ( !v16 )
      {
        v17 = 5;
        v16 = 30;
        goto LABEL_16;
      }
      goto LABEL_309;
    }
    if ( !v16 )
    {
      v17 = 5;
      v16 = 30;
      v12 = 8;
      goto LABEL_16;
    }
    goto LABEL_315;
  }
  if ( v12 )
  {
    if ( !v16 )
    {
      v17 = 13;
      v16 = 70;
      goto LABEL_16;
    }
LABEL_309:
    v17 = v16 / 5 - 1;
    goto LABEL_16;
  }
  if ( v16 )
  {
LABEL_315:
    v17 = v16 / 5 - 1;
LABEL_316:
    v12 = 8;
    goto LABEL_16;
  }
  v17 = 13;
  v16 = 70;
  v12 = 8;
LABEL_16:
  v208 = 0;
  v204 = 0;
  v210 = v17;
  v203 = v16;
  v18 = a1;
  v19 = v227;
  v205 = (_BYTE *)v11;
  v20 = v6;
LABEL_17:
  v21 = v18;
  v22 = v12 - 1;
  v23 = v12;
  v24 = 1;
  v25 = 3;
  v26 = 8;
  v27 = v21;
  while ( 1 )
  {
    v26 >>= 1;
    if ( (v26 & v22) != 0 )
      v220[0] |= v24;
    if ( v24 == 128 )
      break;
    v221 = 2 * v24;
    if ( !--v25 )
      goto LABEL_25;
LABEL_19:
    v24 = v221;
  }
  v28 = v219;
  LOBYTE(v29) = v220[0];
  v30 = v219[1];
  if ( v30 == v219[2] )
  {
    LOBYTE(v212) = v220[0];
    v207 = (_BYTE *)v27;
    v107 = sub_81BFF0(v27, (__int64)v219);
    v27 = (__int64)v207;
    v29 = (unsigned __int8)v220[0];
    v28 = v107;
    if ( !v107 )
    {
LABEL_217:
      v84 = v27;
      goto LABEL_218;
    }
    v219 = v107;
    v30 = v107[1];
  }
  v31 = *v28;
  v28[1] = v30 + 1;
  *(_BYTE *)(v31 + v30) = v29;
  v221 = 1;
  v220[0] = 0;
  if ( --v25 )
    goto LABEL_19;
LABEL_25:
  if ( v23 == 1 )
  {
    v174 = v19;
    v84 = v27;
    v175 = (unsigned __int64)v205;
    v176 = sub_819380(v174, (__int64)v249, 0x100u, 0x14u);
    v177 = v249;
    v29 = (__int64)v250;
    v108 = 0;
    v178 = v176;
    v179 = 20;
    do
    {
      v180 = (unsigned __int8)*v177;
      v181 = v180;
      if ( v179 <= v180 )
        v181 = v179;
      if ( (_BYTE)v180 )
        v179 = v181;
      if ( v108 < v180 )
        v108 = (unsigned __int8)*v177;
      ++v177;
    }
    while ( v250 != v177 );
    v27 = 0;
    if ( v108 >= v179 )
    {
      while ( 1 )
      {
        for ( i = 0; i != 256; ++i )
        {
          if ( (unsigned __int8)v249[i] == v179 )
            v247[i] = v27++;
        }
        v27 *= 2;
        if ( v179 == v108 )
          break;
        ++v179;
      }
    }
    if ( v178 + 16 >= v175 && !v206[6] )
      goto LABEL_283;
    v223 = v249;
    v225.m128i_i64[0] = (__int64)v251;
    v222 = (_BYTE *)&qword_100;
    v14 = sub_81C200(v84, &v219, v220, (__int64 *)&v222);
    if ( v14 )
      goto LABEL_218;
    if ( v178 + 8 * v219[1] + 16 >= v175 && !v206[6] )
    {
LABEL_283:
      v14 = -17713;
      *(_QWORD *)(v84 + 64) = "secondary compression was inefficient";
      goto LABEL_219;
    }
    v183 = v221;
    for ( j = v209; j; j = *(unsigned __int8 ***)(v203 + 24) )
    {
      v185 = *j;
      v186 = j[1];
      v203 = (unsigned __int64)j;
      v187 = &v186[(_QWORD)v185];
      v108 = v14;
      do
      {
        v188 = *v185;
        v189 = v84;
        v190 = v187;
        v191 = v185 + 1;
        v27 = (unsigned __int8)v249[v188];
        v192 = v247[v188];
        v193 = 1 << v27;
        do
        {
          if ( ((v193 >> 1) & v192) != 0 )
            v220[0] |= v183;
          if ( v183 == 128 )
          {
            v194 = v219;
            v195 = v220[0];
            v196 = v219[1];
            if ( v196 == v219[2] )
            {
              v205 = (_BYTE *)v189;
              LODWORD(v206) = v108;
              v201 = sub_81BFF0(v189, (__int64)v219);
              v194 = v201;
              if ( !v201 )
              {
                v84 = (__int64)v205;
                goto LABEL_218;
              }
              v219 = v201;
              v108 = (unsigned int)v206;
              v196 = v201[1];
            }
            v29 = *v194;
            v194[1] = v196 + 1;
            *(_BYTE *)(v29 + v196) = v195;
            v221 = 1;
            v220[0] = 0;
            if ( v193 >> 1 == 1 )
            {
              v185 = v191;
              v183 = 1;
              v187 = v190;
              v84 = v189;
              goto LABEL_278;
            }
            v193 >>= 2;
            v220[0] = (v193 & v192) != 0;
            v183 = 1;
          }
          else
          {
            v193 >>= 1;
          }
          v183 *= 2;
          v221 = v183;
        }
        while ( v193 != 1 );
        v185 = v191;
        v187 = v190;
        v84 = v189;
LABEL_278:
        ;
      }
      while ( v185 < v187 );
      v14 = v108;
    }
    if ( v221 != 1 )
      goto LABEL_281;
    goto LABEL_219;
  }
  v212 = v19;
  v32 = 5;
  v33 = 32;
  v207 = (_BYTE *)((v20 - 1) / v203 + 1);
  do
  {
    while ( 1 )
    {
      v33 >>= 1;
      if ( (v33 & v210) != 0 )
        v220[0] |= v221;
      if ( v221 == 128 )
        break;
      v221 *= 2;
      if ( !--v32 )
        goto LABEL_33;
    }
    v34 = v219;
    v35 = v220[0];
    v36 = v219[1];
    if ( v36 == v219[2] )
    {
      v213 = v27;
      LOBYTE(v214) = v220[0];
      v109 = sub_81BFF0(v27, (__int64)v219);
      v27 = v213;
      v34 = v109;
      if ( !v109 )
        goto LABEL_217;
      v219 = v109;
      v35 = v214;
      v36 = v109[1];
    }
    v37 = *v34;
    v34[1] = v36 + 1;
    *(_BYTE *)(v37 + v36) = v35;
    v221 = 1;
    v220[0] = 0;
    --v32;
  }
  while ( v32 );
LABEL_33:
  v38 = v23;
  v39 = v20;
  v18 = v27;
  v19 = v212;
  if ( !v204 )
  {
    v204 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64))(v27 + 128))(*(_QWORD *)(v27 + 144), v207, 1);
    if ( !v204 )
    {
      v84 = v18;
      v14 = 12;
      *(_QWORD *)(v18 + 64) = "out of memory";
      goto LABEL_139;
    }
  }
  if ( !v208 )
  {
    v208 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64))(v18 + 128))(*(_QWORD *)(v18 + 144), v207, 1);
    if ( !v208 )
    {
      v110 = v204;
      v14 = 12;
      v111 = *(_QWORD *)(v18 + 144);
      *(_QWORD *)(v18 + 64) = "out of memory";
      (*(void (__fastcall **)(__int64, __int64))(v18 + 136))(v111, v110);
      return v14;
    }
  }
  if ( v22 != -1 )
  {
    v40 = &v228;
    v41 = v38;
    v42 = 0;
    v43 = 0;
    while ( 1 )
    {
      if ( v39 >= v41 )
      {
        v80 = 0;
        do
          v80 += v19[v42++];
        while ( v80 < (unsigned int)(v39 / v41) );
        v39 -= v80;
      }
      else if ( !v206[6] )
      {
        v220[0] = 0;
        v12 = v22;
        v219[1] = v211;
        v221 = 1;
        goto LABEL_17;
      }
      for ( k = 0; k != 256; ++k )
      {
        while ( v42 >= k && k >= v43 )
        {
          v40->m128i_i8[k++] = 1;
          if ( k == 256 )
            goto LABEL_44;
        }
        v40->m128i_i8[k] = 16;
      }
LABEL_44:
      v43 = v42 + 1;
      v40 += 16;
      if ( !--v41 )
      {
        v45 = v19;
        v46 = (__int64)v205;
        v47 = v18;
        v48 = v203;
        goto LABEL_46;
      }
    }
  }
  v45 = v212;
  v46 = (__int64)v205;
  v47 = v18;
  v38 = 0;
  v48 = v203;
LABEL_46:
  v215 = v47;
  v49 = v226;
  v214 = v46;
  v50 = v251;
  v213 = v38 << 10;
  v205 = (_BYTE *)(8 * v38);
  v210 = 0;
  v211 = 0;
  v212 = v246;
  while ( 2 )
  {
    ++v211;
    __memset_chk(v212, 0, v213, 0x2000);
    v51 = v49;
    v203 = (unsigned __int64)v50;
    v52 = v48;
    v53 = *v209;
    v207 = v45;
    v54 = v209;
    v55 = 0;
    v56 = v53;
    v57 = v204;
    while ( 2 )
    {
      while ( 1 )
      {
        ++v55;
        v58 = __memset_chk(v51, 0, v205, 64);
        v59 = v56;
        v60 = v54;
        v61 = 0;
        v51 = (_BYTE *)v58;
        if ( v52 )
          break;
        if ( v38 )
          goto LABEL_54;
        *(_BYTE *)(v57 + v55 - 1) = 0;
        if ( !v54 )
          goto LABEL_65;
      }
      while ( 2 )
      {
        v62 = 0;
        if ( v38 )
        {
          do
          {
            *(_QWORD *)&v51[8 * v62] += (unsigned __int8)v202[256 * v62 + 1376 + *v59];
            ++v62;
          }
          while ( v62 != v38 );
        }
        if ( &(++v59)[-*v60] != (unsigned __int8 *)v60[1] )
        {
LABEL_52:
          if ( ++v61 == v52 )
            goto LABEL_53;
          continue;
        }
        break;
      }
      v60 = (_QWORD *)v60[3];
      if ( v60 )
      {
        v59 = (unsigned __int8 *)*v60;
        goto LABEL_52;
      }
LABEL_53:
      if ( v38 )
      {
LABEL_54:
        v63 = 0;
        v64 = -1;
        for ( m = 0; m < v38; ++m )
        {
          if ( *(_QWORD *)&v51[8 * m] < v64 )
          {
            v63 = m;
            v64 = *(_QWORD *)&v51[8 * m];
          }
        }
        *(_BYTE *)(v57 + v55 - 1) = v63;
        if ( v52 )
          goto LABEL_59;
LABEL_64:
        if ( !v54 )
          goto LABEL_65;
        continue;
      }
      break;
    }
    *(_BYTE *)(v57 + v55 - 1) = 0;
    v63 = 0;
LABEL_59:
    v66 = 0;
    v67 = v63 << 8;
    while ( 1 )
    {
      while ( 1 )
      {
        v68 = *v56++;
        ++v246[v67 + v68];
        if ( &v56[-*v54] == (unsigned __int8 *)v54[1] )
          break;
        if ( ++v66 == v52 )
          goto LABEL_64;
      }
      v54 = (_QWORD *)v54[3];
      if ( !v54 )
        break;
      ++v66;
      v56 = (unsigned __int8 *)*v54;
      if ( v66 == v52 )
        goto LABEL_64;
    }
LABEL_65:
    v69 = v55;
    v48 = v52;
    v45 = v207;
    v50 = (_DWORD *)v203;
    v49 = v51;
    v70 = nullptr;
    if ( v38 )
    {
      v216 = v69;
      v71 = v212;
      v218 = v51;
      v207 = (_BYTE *)v38;
      v72 = &v228;
      v73 = v45;
      v74 = nullptr;
      v217 = v48;
      for ( n = nullptr; n != v207; ++n )
      {
        v76 = 0;
        v77 = 0;
        memset(v50, 0, 0x100u);
        do
        {
          if ( !v71[v76] && *(_DWORD *)&v73[4 * v76] )
          {
            v71[v76] = 1;
            v77 = 1;
            *((_BYTE *)v50 + v76) = 1;
          }
          ++v76;
        }
        while ( v76 != 256 );
        LODWORD(v203) = v77;
        v74 = (_DWORD *)((char *)v74 + sub_819380(v71, (__int64)v72, 0x100u, 0x14u));
        if ( (_DWORD)v203 )
        {
          for ( ii = 0; ii != 256; ++ii )
          {
            if ( *((_BYTE *)v50 + ii) )
              v74 = (_DWORD *)((char *)v74 - (unsigned __int8)v72->m128i_i8[ii]);
          }
        }
        v71 += 256;
        v72 += 16;
      }
      v69 = v216;
      v48 = v217;
      v70 = v74;
      v45 = v73;
      v49 = v218;
      v38 = (unsigned __int64)v207;
    }
    if ( v211 == 1 || v211 != 6 && v210 - (unsigned __int64)v70 > 0x13 )
    {
      v210 = (unsigned __int64)v70;
      continue;
    }
    break;
  }
  v82 = v50;
  v83 = (_BYTE *)v214;
  v84 = v215;
  v85 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v249, (__m128i)(unsigned __int64)v82);
  if ( (unsigned __int64)(v70 + 4) >= v214 && !v206[6] )
    goto LABEL_237;
  v225 = v85;
  v86 = _mm_load_si128(&v228);
  v223 = v248;
  v248[0] = v86;
  v87 = _mm_load_si128(&v229);
  v222 = (_BYTE *)&qword_100;
  v248[1] = v87;
  v248[2] = _mm_load_si128(&v230);
  v248[3] = _mm_load_si128(&v231);
  v248[4] = _mm_load_si128(&v232);
  v248[5] = _mm_load_si128(&v233);
  v248[6] = _mm_load_si128(&v234);
  v248[7] = _mm_load_si128(&v235);
  v248[8] = _mm_load_si128(&v236);
  v248[9] = _mm_load_si128(&v237);
  v248[10] = _mm_load_si128(&v238);
  v248[11] = _mm_load_si128(&v239);
  v248[12] = _mm_load_si128(&v240);
  v248[13] = _mm_load_si128(&v241);
  v248[14] = _mm_load_si128(&v242);
  v85 = _mm_load_si128(&v243);
  v248[15] = v85;
  if ( v38 > 1 )
  {
    v88 = &v245;
    do
    {
      v89 = v88 - 256;
      do
      {
        v90 = *v89;
        if ( *v89 )
        {
          v91 = (__int64)v222++;
          v223[v91] = v90;
        }
        ++v89;
      }
      while ( v89 != v88 );
      v88 += 256;
    }
    while ( v88 != &v244[256 * v38] );
  }
  v207 = v82;
  v205 = (_BYTE *)v69;
  v203 = (unsigned __int64)v70;
  if ( (unsigned int)sub_81C200(v84, &v219, v220, (__int64 *)&v222) )
    goto LABEL_142;
  v92 = v203;
  v93 = v207;
  v223 = (_BYTE *)v204;
  v222 = v205;
  v225.m128i_i64[0] = v208;
  v94 = 0;
  if ( v38 )
  {
    if ( (v38 & 1) == 0 || (v94 = 1, *v207 = 0, v38 != 1) )
    {
      do
      {
        v93[v94] = v94;
        v95 = v94 + 1;
        v94 += 2;
        v93[v95] = v95;
      }
      while ( v94 != v38 );
    }
  }
  v207 = (_BYTE *)v92;
  v205 = v93;
  v203 = (unsigned __int64)v247;
  sub_818E00((__int64 *)&v222, v93, v247, v38);
  v96 = sub_819380((_DWORD *)v203, (__int64)v205, v38 + 1, 7u);
  v97 = (__int64)v205;
  v98 = v207;
  v99 = 0;
  v210 = v96;
  v100 = 20;
  v101 = (__int64)v205;
  v102 = v205;
  do
  {
    v103 = (unsigned __int8)*v102;
    v104 = v103;
    if ( v100 <= v103 )
      v104 = v100;
    if ( (_BYTE)v103 )
      v100 = v104;
    if ( v99 < v103 )
      v99 = (unsigned __int8)*v102;
    ++v102;
  }
  while ( &v251[v38 + 1] != v102 );
  v105 = 0;
  if ( v99 >= v100 )
  {
    while ( 1 )
    {
      for ( jj = 0; ; ++jj )
      {
        if ( *(unsigned __int8 *)(v97 + jj) == v100 )
          *(_QWORD *)&v226[8 * jj + 64] = v105++;
        if ( jj == v38 )
          break;
      }
      v105 *= 2;
      if ( v99 == v100 )
        break;
      ++v100;
    }
  }
  v205 = (_BYTE *)v48;
  v112 = v38;
  v113 = (unsigned __int8 *)v101;
  v29 = 0;
  v207 = v83;
  v114 = v84;
  v115 = &v251[v38 + 1];
  do
  {
    v212 = v113;
    v116 = *v113;
    v117 = v114;
    v118 = 3;
    v119 = 8;
    v120 = v98;
    v121 = v112;
    do
    {
      while ( 1 )
      {
        v119 >>= 1;
        if ( (v119 & v116) != 0 )
          v220[0] |= v221;
        if ( v221 == 128 )
          break;
        v221 *= 2;
        if ( !--v118 )
          goto LABEL_152;
      }
      v122 = v219;
      LOBYTE(v211) = v220[0];
      v123 = v219[1];
      if ( v123 == v219[2] )
      {
        v213 = v117;
        LODWORD(v214) = v29;
        v149 = sub_81BFF0(v117, (__int64)v219);
        v117 = v213;
        v122 = v149;
        if ( !v149 )
        {
LABEL_141:
          v84 = v117;
LABEL_142:
          v14 = 12;
          (*(void (__fastcall **)(_QWORD, __int64))(v84 + 136))(*(_QWORD *)(v84 + 144), v204);
          goto LABEL_143;
        }
        v219 = v149;
        v29 = (unsigned int)v214;
        v123 = v149[1];
      }
      v124 = *v122;
      v125 = v211;
      v122[1] = v123 + 1;
      *(_BYTE *)(v124 + v123) = v125;
      v221 = 1;
      v220[0] = 0;
      --v118;
    }
    while ( v118 );
LABEL_152:
    v98 = v120;
    v112 = v121;
    v114 = v117;
    v113 = (unsigned __int8 *)v212 + 1;
  }
  while ( v115 != (char *)v212 + 1 );
  v126 = (__int64)v205;
  v127 = (unsigned __int64)v207;
  v128 = v112;
  v14 = v29;
  v84 = v117;
  if ( v224 )
  {
    LODWORD(v207) = v29;
    v129 = 0;
    v130 = (__int64)v205;
    v131 = v98;
    v205 = (_BYTE *)v127;
    v132 = v112;
    do
    {
      v117 = v84;
      v133 = v130;
      v134 = *(_QWORD *)&v226[8 * *(unsigned __int8 *)(v208 + v129) + 64];
      v135 = 1 << v251[*(unsigned __int8 *)(v208 + v129)];
      do
      {
        while ( 1 )
        {
          v135 >>= 1;
          if ( (v135 & v134) != 0 )
            v220[0] |= v221;
          if ( v221 == 128 )
            break;
          v221 *= 2;
          if ( v135 == 1 )
            goto LABEL_162;
        }
        v136 = v219;
        v29 = (unsigned __int8)v220[0];
        v137 = v219[1];
        if ( v137 == v219[2] )
        {
          v211 = v117;
          LOBYTE(v212) = v220[0];
          v150 = sub_81BFF0(v117, (__int64)v219);
          v117 = v211;
          v136 = v150;
          if ( !v150 )
            goto LABEL_141;
          v219 = v150;
          v29 = (unsigned __int8)v212;
          v137 = v150[1];
        }
        v138 = *v136;
        v136[1] = v137 + 1;
        *(_BYTE *)(v138 + v137) = v29;
        v221 = 1;
        v220[0] = 0;
      }
      while ( v135 != 1 );
LABEL_162:
      v130 = v133;
      ++v129;
      v84 = v117;
    }
    while ( v129 < v224 );
    v128 = v132;
    v14 = (unsigned int)v207;
    v127 = (unsigned __int64)v205;
    v98 = v131;
    v126 = v130;
  }
  if ( (unsigned __int64)&v98[8 * v219[1] + 16 + v210] >= v127 && !v206[6] )
  {
LABEL_237:
    v172 = v204;
    v14 = -17713;
    v173 = *(_QWORD *)(v84 + 144);
    *(_QWORD *)(v84 + 64) = "secondary compression was inefficient";
    (*(void (__fastcall **)(__int64, __int64, double))(v84 + 136))(v173, v172, *(double *)v85.m128i_i64);
    goto LABEL_143;
  }
  if ( v128 )
  {
    v139 = &v228;
    v140 = v203;
    v141 = (__m128i *)v244;
    v142 = &v228 + 16 * v128;
    do
    {
      v143 = v139;
      v144 = 0;
      v145 = 20;
      do
      {
        v146 = v143->m128i_u8[0];
        v147 = v146;
        if ( v145 <= v146 )
          v147 = v145;
        if ( (_BYTE)v146 )
          v145 = v147;
        if ( v144 < v146 )
          v144 = v143->m128i_u8[0];
        v143 = (__m128i *)((char *)v143 + 1);
      }
      while ( v141 != v143 );
      v29 = 0;
      if ( v144 >= v145 )
      {
        while ( 1 )
        {
          for ( kk = 0; kk != 256; ++kk )
          {
            if ( v139->m128i_u8[kk] == v145 )
              *(_QWORD *)(v140 + 8 * kk) = v29++;
          }
          v29 *= 2;
          if ( v145 == v144 )
            break;
          ++v145;
        }
      }
      v139 += 16;
      v140 += 2048LL;
      v141 += 16;
    }
    while ( v142 != v139 );
  }
  v151 = (unsigned __int8 *)v209;
  v152 = v221;
  v153 = v126;
  v154 = (unsigned __int8 *)v204;
  v155 = *v209;
  v117 = v84;
  while ( 2 )
  {
    v156 = *v154;
    v210 = v156 << 8;
    v209 = (unsigned __int8 **)(v156 << 11);
    if ( !v153 )
      goto LABEL_211;
    v157 = v154;
    v158 = nullptr;
    while ( 2 )
    {
      v159 = *v155;
      v203 = (unsigned __int64)v158;
      v160 = v157;
      v207 = v151;
      v161 = v155;
      v29 = (__int64)&v253[v159];
      v205 = (_BYTE *)v153;
      v162 = *(__int64 *)((char *)v209 + v29 - 22544);
      LODWORD(v206) = v14;
      v163 = 1 << v202[v159 + 1376 + v210];
      while ( 2 )
      {
        if ( ((v163 >> 1) & v162) != 0 )
          v220[0] |= v152;
        if ( v152 != 128 )
        {
          v163 >>= 1;
          goto LABEL_198;
        }
        v164 = v219;
        v165 = v220[0];
        v166 = v219[1];
        if ( v166 == v219[2] )
        {
          v211 = v117;
          v168 = sub_81BFF0(v117, (__int64)v219);
          v117 = v211;
          v164 = v168;
          if ( !v168 )
            goto LABEL_141;
          v219 = v168;
          v166 = v168[1];
        }
        v167 = *v164;
        v164[1] = v166 + 1;
        *(_BYTE *)(v167 + v166) = v165;
        v221 = 1;
        v220[0] = 0;
        if ( v163 >> 1 != 1 )
        {
          v163 >>= 2;
          v220[0] = (v162 & v163) != 0;
          v152 = 1;
LABEL_198:
          v152 *= 2;
          v221 = v152;
          if ( v163 == 1 )
          {
            v169 = v161;
            v157 = v160;
            v153 = (__int64)v205;
            v170 = v203;
            v14 = (unsigned int)v206;
            v151 = v207;
            goto LABEL_208;
          }
          continue;
        }
        break;
      }
      v169 = v161;
      v157 = v160;
      v153 = (__int64)v205;
      v170 = v203;
      v14 = (unsigned int)v206;
      v151 = v207;
      v152 = 1;
LABEL_208:
      v155 = v169 + 1;
      if ( &v155[-*(_QWORD *)v151] == *((unsigned __int8 **)v151 + 1) )
      {
        v151 = *((unsigned __int8 **)v151 + 3);
        if ( v151 )
        {
          v155 = *(unsigned __int8 **)v151;
          goto LABEL_209;
        }
        goto LABEL_212;
      }
LABEL_209:
      v158 = (_DWORD *)(v170 + 1);
      if ( v158 != (_DWORD *)v153 )
        continue;
      break;
    }
    v154 = v157;
LABEL_211:
    ++v154;
    if ( v151 )
      continue;
    break;
  }
LABEL_212:
  v84 = v117;
  if ( v152 == 1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v117 + 136))(*(_QWORD *)(v117 + 144), v204);
    goto LABEL_143;
  }
LABEL_281:
  v197 = v219;
  v198 = v220[0];
  v199 = v219[1];
  if ( v199 != v219[2] )
  {
LABEL_282:
    v108 = *v197;
    v27 = v199 + 1;
    v14 = 0;
    v197[1] = v199 + 1;
    *(_BYTE *)(v108 + v199) = v198;
    goto LABEL_219;
  }
  v200 = sub_81BFF0(v84, (__int64)v219);
  v197 = v200;
  if ( v200 )
  {
    v219 = v200;
    v199 = v200[1];
    goto LABEL_282;
  }
LABEL_218:
  v14 = 12;
LABEL_219:
  if ( v204 )
    (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64, __int64))(v84 + 136))(
      *(_QWORD *)(v84 + 144),
      v204,
      v108,
      v27,
      v29);
LABEL_139:
  if ( v208 )
LABEL_143:
    (*(void (__fastcall **)(_QWORD, __int64))(v84 + 136))(*(_QWORD *)(v84 + 144), v208);
  return v14;
}
