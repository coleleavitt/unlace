__int64 __fastcall sub_852C0(__int64 a1, __int64 a2, unsigned __int8 **a3, __int64 *a4, int *a5)
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
  _DWORD *v49; // r15
  __int64 v50; // r15
  unsigned __int8 *v51; // r14
  _QWORD *v52; // r13
  __int64 v53; // rbp
  unsigned __int8 *v54; // r12
  __int64 v55; // r14
  __int64 v56; // rax
  unsigned __int8 *v57; // rsi
  _QWORD *v58; // rcx
  __int64 v59; // r9
  __int64 v60; // rdi
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rsi
  unsigned __int64 m; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // r10
  _DWORD *v69; // r9
  _DWORD *v70; // r14
  __m128i *v71; // r13
  _BYTE *v72; // rbx
  _DWORD *v73; // rbp
  _BYTE *n; // r12
  __int64 v75; // rax
  int v76; // r11d
  int v77; // eax
  __int64 v78; // rax
  unsigned int v79; // edx
  __int64 ii; // rax
  _BYTE *v81; // r8
  _BYTE *v82; // r15
  __int64 v83; // r14
  __m128i v84; // xmm0
  __m128i v85; // xmm0
  __m128i v86; // xmm0
  char *v87; // rdi
  char *v88; // rax
  char v89; // dl
  __int64 v90; // rsi
  unsigned __int64 v91; // r9
  _BYTE *v92; // r8
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // r8
  _BYTE *v97; // r9
  unsigned __int64 v98; // r10
  unsigned __int64 v99; // rax
  __int64 v100; // rsi
  _BYTE *v101; // rdx
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // r13
  __int64 v104; // rcx
  __int64 jj; // rdx
  __int64 *v106; // rax
  unsigned __int64 v107; // rdx
  __int64 *v108; // rax
  __int64 v109; // rsi
  __int64 v110; // rdi
  unsigned __int64 v111; // rdx
  unsigned __int8 *v112; // r12
  __int64 v113; // r15
  _BYTE *v114; // r14
  __int64 v115; // rbp
  __int64 v116; // rdi
  int v117; // ebx
  unsigned __int64 v118; // r13
  _BYTE *v119; // r12
  unsigned __int64 v120; // r15
  __int64 *v121; // rsi
  __int64 v122; // rax
  __int64 v123; // r10
  char v124; // cl
  __int64 v125; // r12
  unsigned __int64 v126; // r15
  unsigned __int64 v127; // rbx
  unsigned __int64 v128; // rbx
  __int64 v129; // rax
  _BYTE *v130; // r12
  unsigned __int64 v131; // r15
  __int64 v132; // r14
  __int64 v133; // rbp
  unsigned __int64 v134; // r13
  __int64 *v135; // rsi
  __int64 v136; // rax
  __int64 v137; // r9
  __m128i *v138; // rdx
  unsigned __int64 v139; // rsi
  __m128i *v140; // r10
  __m128i *v141; // r9
  __m128i *v142; // rax
  unsigned __int64 v143; // r11
  unsigned __int64 v144; // rcx
  unsigned __int64 v145; // rdi
  unsigned __int64 v146; // rbx
  __int64 kk; // rax
  __int64 *v148; // rax
  __int64 *v149; // rax
  unsigned __int8 *v150; // r13
  __int64 v151; // rsi
  __int64 v152; // rax
  unsigned __int8 *v153; // r15
  unsigned __int8 *v154; // r12
  __int64 v155; // rcx
  unsigned __int8 *v156; // rdx
  _DWORD *v157; // r15
  __int64 v158; // rcx
  unsigned __int8 *v159; // r15
  unsigned __int8 *v160; // r13
  __int64 v161; // r14
  unsigned __int64 v162; // rbx
  __int64 *v163; // rsi
  unsigned __int8 v164; // r12
  __int64 v165; // rax
  __int64 v166; // r10
  __int64 *v167; // rax
  unsigned __int8 *v168; // r12
  unsigned __int64 v169; // r15
  int v170; // eax
  __int64 v171; // rsi
  __int64 v172; // rdi
  _DWORD *v173; // rbp
  unsigned __int64 v174; // r15
  __int64 v175; // rax
  _BYTE *v176; // rcx
  __int64 v177; // rbx
  unsigned __int64 v178; // rax
  unsigned __int64 v179; // rsi
  unsigned __int64 v180; // r9
  __int64 i; // rsi
  __int64 v182; // rsi
  unsigned __int8 **j; // r13
  unsigned __int8 *v184; // r12
  unsigned __int8 *v185; // rdx
  unsigned __int8 *v186; // r13
  __int64 v187; // rax
  __int64 v188; // rdi
  unsigned __int8 *v189; // r14
  unsigned __int8 *v190; // r13
  __int64 v191; // rbp
  unsigned __int64 v192; // rbx
  __int64 *v193; // rsi
  unsigned __int8 v194; // r12
  __int64 v195; // rax
  __int64 *v196; // rsi
  unsigned __int8 v197; // bl
  __int64 v198; // rax
  __int64 *v199; // rax
  __int64 *v200; // rax
  _BYTE v201[8]; // [rsp+0h] [rbp-85A8h] BYREF
  unsigned __int64 v202; // [rsp+8h] [rbp-85A0h]
  __int64 v203; // [rsp+10h] [rbp-8598h]
  _BYTE *v204; // [rsp+18h] [rbp-8590h]
  int *v205; // [rsp+20h] [rbp-8588h]
  _BYTE *v206; // [rsp+28h] [rbp-8580h]
  __int64 v207; // [rsp+30h] [rbp-8578h]
  unsigned __int8 **v208; // [rsp+38h] [rbp-8570h]
  unsigned __int64 v209; // [rsp+40h] [rbp-8568h]
  __int64 v210; // [rsp+48h] [rbp-8560h]
  _DWORD *v211; // [rsp+50h] [rbp-8558h]
  unsigned __int64 v212; // [rsp+58h] [rbp-8550h]
  unsigned __int64 v213; // [rsp+60h] [rbp-8548h]
  __int64 v214; // [rsp+68h] [rbp-8540h]
  __int64 v215; // [rsp+70h] [rbp-8538h]
  __int64 v216; // [rsp+78h] [rbp-8530h]
  __int64 v217; // [rsp+80h] [rbp-8528h]
  __int64 *v218; // [rsp+88h] [rbp-8520h] BYREF
  char v219[8]; // [rsp+90h] [rbp-8518h] BYREF
  __int64 v220; // [rsp+98h] [rbp-8510h]
  _BYTE *v221; // [rsp+A0h] [rbp-8508h] BYREF
  _BYTE *v222; // [rsp+A8h] [rbp-8500h]
  unsigned __int64 v223; // [rsp+B0h] [rbp-84F8h]
  __m128i v224; // [rsp+B8h] [rbp-84F0h]
  _QWORD v225[10]; // [rsp+110h] [rbp-8498h]
  _DWORD v226[256]; // [rsp+160h] [rbp-8448h] BYREF
  __m128i v227; // [rsp+560h] [rbp-8048h] BYREF
  __m128i v228; // [rsp+570h] [rbp-8038h] BYREF
  __m128i v229; // [rsp+580h] [rbp-8028h] BYREF
  __m128i v230; // [rsp+590h] [rbp-8018h] BYREF
  __m128i v231; // [rsp+5A0h] [rbp-8008h] BYREF
  __m128i v232; // [rsp+5B0h] [rbp-7FF8h] BYREF
  __m128i v233; // [rsp+5C0h] [rbp-7FE8h] BYREF
  __m128i v234; // [rsp+5D0h] [rbp-7FD8h] BYREF
  __m128i v235; // [rsp+5E0h] [rbp-7FC8h] BYREF
  __m128i v236; // [rsp+5F0h] [rbp-7FB8h] BYREF
  __m128i v237; // [rsp+600h] [rbp-7FA8h] BYREF
  __m128i v238; // [rsp+610h] [rbp-7F98h] BYREF
  __m128i v239; // [rsp+620h] [rbp-7F88h] BYREF
  __m128i v240; // [rsp+630h] [rbp-7F78h] BYREF
  __m128i v241; // [rsp+640h] [rbp-7F68h] BYREF
  __m128i v242; // [rsp+650h] [rbp-7F58h] BYREF
  _BYTE v243[256]; // [rsp+660h] [rbp-7F48h] BYREF
  char v244; // [rsp+760h] [rbp-7E48h] BYREF
  _DWORD v245[2048]; // [rsp+D60h] [rbp-7848h] BYREF
  _QWORD v246[2048]; // [rsp+2D60h] [rbp-5848h] BYREF
  _OWORD v247[128]; // [rsp+6D60h] [rbp-1848h] BYREF
  _BYTE v248[256]; // [rsp+7560h] [rbp-1048h] BYREF
  _BYTE v249[1792]; // [rsp+7660h] [rbp-F48h] BYREF
  _BYTE v250[2056]; // [rsp+7D60h] [rbp-848h] BYREF
  unsigned __int64 v251; // [rsp+8568h] [rbp-40h]
  _QWORD v252[7]; // [rsp+8570h] [rbp-38h] BYREF

  v218 = a4;
  v208 = a3;
  v205 = a5;
  v251 = __readfsqword(0x28u);
  v219[0] = 0;
  v220 = 1;
  v210 = a4[1];
  memset(v226, 0, sizeof(v226));
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
        ++v226[v10];
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
  v12 = *((_QWORD *)v205 + 1);
  if ( v12 > 8 )
  {
    v13 = "invalid secondary encoder group number";
LABEL_9:
    *(_QWORD *)(a1 + 64) = v13;
    return (unsigned int)-17710;
  }
  v16 = *((_QWORD *)v205 + 2);
  if ( v16 )
  {
    if ( v16 - 5 > 0x9B || 0xCCCCCCCCCCCCCCCDLL * v16 > 0x3333333333333333LL )
    {
      v13 = "invalid secondary encoder sector size";
      goto LABEL_9;
    }
    if ( v12 )
      goto LABEL_15;
    v170 = *v205;
    if ( *v205 != 1 )
    {
      if ( v170 != 2 )
      {
        if ( v170 )
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
  v77 = *v205;
  if ( *v205 == 1 )
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
      v78 = 1;
      goto LABEL_188;
    }
LABEL_253:
    v17 = -1;
    goto LABEL_16;
  }
  if ( v77 == 2 )
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
      v78 = 2;
      goto LABEL_188;
    }
    goto LABEL_253;
  }
  v17 = -1;
  if ( v77 )
    goto LABEL_16;
  if ( v6 <= 0x3E7 )
  {
    if ( !v12 )
      goto LABEL_254;
    if ( v12 == 1 )
      goto LABEL_16;
    v78 = 0;
LABEL_188:
    v16 = qword_130B60[v78];
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
  v207 = 0;
  v203 = 0;
  v209 = v17;
  v202 = v16;
  v18 = a1;
  v19 = v226;
  v204 = (_BYTE *)v11;
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
      v219[0] |= v24;
    if ( v24 == 128 )
      break;
    v220 = 2 * v24;
    if ( !--v25 )
      goto LABEL_25;
LABEL_19:
    v24 = v220;
  }
  v28 = v218;
  LOBYTE(v29) = v219[0];
  v30 = v218[1];
  if ( v30 == v218[2] )
  {
    LOBYTE(v211) = v219[0];
    v206 = (_BYTE *)v27;
    v106 = sub_84CB0(v27, (__int64)v218);
    v27 = (__int64)v206;
    v29 = (unsigned __int8)v219[0];
    v28 = v106;
    if ( !v106 )
    {
LABEL_217:
      v83 = v27;
      goto LABEL_218;
    }
    v218 = v106;
    v30 = v106[1];
  }
  v31 = *v28;
  v28[1] = v30 + 1;
  *(_BYTE *)(v31 + v30) = v29;
  v220 = 1;
  v219[0] = 0;
  if ( --v25 )
    goto LABEL_19;
LABEL_25:
  if ( v23 == 1 )
  {
    v173 = v19;
    v83 = v27;
    v174 = (unsigned __int64)v204;
    v175 = sub_82040(v173, (__int64)v248, 0x100u, 0x14u);
    v176 = v248;
    v29 = (__int64)v249;
    v107 = 0;
    v177 = v175;
    v178 = 20;
    do
    {
      v179 = (unsigned __int8)*v176;
      v180 = v179;
      if ( v178 <= v179 )
        v180 = v178;
      if ( (_BYTE)v179 )
        v178 = v180;
      if ( v107 < v179 )
        v107 = (unsigned __int8)*v176;
      ++v176;
    }
    while ( v249 != v176 );
    v27 = 0;
    if ( v107 >= v178 )
    {
      while ( 1 )
      {
        for ( i = 0; i != 256; ++i )
        {
          if ( (unsigned __int8)v248[i] == v178 )
            v246[i] = v27++;
        }
        v27 *= 2;
        if ( v178 == v107 )
          break;
        ++v178;
      }
    }
    if ( v177 + 16 >= v174 && !v205[6] )
      goto LABEL_283;
    v222 = v248;
    v224.m128i_i64[0] = (__int64)v250;
    v221 = (_BYTE *)&qword_100;
    v14 = sub_84EC0(v83, &v218, v219, (__int64 *)&v221);
    if ( v14 )
      goto LABEL_218;
    if ( v177 + 8 * v218[1] + 16 >= v174 && !v205[6] )
    {
LABEL_283:
      v14 = -17713;
      *(_QWORD *)(v83 + 64) = "secondary compression was inefficient";
      goto LABEL_219;
    }
    v182 = v220;
    for ( j = v208; j; j = *(unsigned __int8 ***)(v202 + 24) )
    {
      v184 = *j;
      v185 = j[1];
      v202 = (unsigned __int64)j;
      v186 = &v185[(_QWORD)v184];
      v107 = v14;
      do
      {
        v187 = *v184;
        v188 = v83;
        v189 = v186;
        v190 = v184 + 1;
        v27 = (unsigned __int8)v248[v187];
        v191 = v246[v187];
        v192 = 1 << v27;
        do
        {
          if ( ((v192 >> 1) & v191) != 0 )
            v219[0] |= v182;
          if ( v182 == 128 )
          {
            v193 = v218;
            v194 = v219[0];
            v195 = v218[1];
            if ( v195 == v218[2] )
            {
              v204 = (_BYTE *)v188;
              LODWORD(v205) = v107;
              v200 = sub_84CB0(v188, (__int64)v218);
              v193 = v200;
              if ( !v200 )
              {
                v83 = (__int64)v204;
                goto LABEL_218;
              }
              v218 = v200;
              v107 = (unsigned int)v205;
              v195 = v200[1];
            }
            v29 = *v193;
            v193[1] = v195 + 1;
            *(_BYTE *)(v29 + v195) = v194;
            v220 = 1;
            v219[0] = 0;
            if ( v192 >> 1 == 1 )
            {
              v184 = v190;
              v182 = 1;
              v186 = v189;
              v83 = v188;
              goto LABEL_278;
            }
            v192 >>= 2;
            v219[0] = (v192 & v191) != 0;
            v182 = 1;
          }
          else
          {
            v192 >>= 1;
          }
          v182 *= 2;
          v220 = v182;
        }
        while ( v192 != 1 );
        v184 = v190;
        v186 = v189;
        v83 = v188;
LABEL_278:
        ;
      }
      while ( v184 < v186 );
      v14 = v107;
    }
    if ( v220 != 1 )
      goto LABEL_281;
    goto LABEL_219;
  }
  v211 = v19;
  v32 = 5;
  v33 = 32;
  v206 = (_BYTE *)((v20 - 1) / v202 + 1);
  do
  {
    while ( 1 )
    {
      v33 >>= 1;
      if ( (v33 & v209) != 0 )
        v219[0] |= v220;
      if ( v220 == 128 )
        break;
      v220 *= 2;
      if ( !--v32 )
        goto LABEL_33;
    }
    v34 = v218;
    v35 = v219[0];
    v36 = v218[1];
    if ( v36 == v218[2] )
    {
      v212 = v27;
      LOBYTE(v213) = v219[0];
      v108 = sub_84CB0(v27, (__int64)v218);
      v27 = v212;
      v34 = v108;
      if ( !v108 )
        goto LABEL_217;
      v218 = v108;
      v35 = v213;
      v36 = v108[1];
    }
    v37 = *v34;
    v34[1] = v36 + 1;
    *(_BYTE *)(v37 + v36) = v35;
    v220 = 1;
    v219[0] = 0;
    --v32;
  }
  while ( v32 );
LABEL_33:
  v38 = v23;
  v39 = v20;
  v18 = v27;
  v19 = v211;
  if ( !v203 )
  {
    v203 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64))(v27 + 128))(*(_QWORD *)(v27 + 144), v206, 1);
    if ( !v203 )
    {
      v83 = v18;
      v14 = 12;
      *(_QWORD *)(v18 + 64) = "out of memory";
      goto LABEL_139;
    }
  }
  if ( !v207 )
  {
    v207 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64))(v18 + 128))(*(_QWORD *)(v18 + 144), v206, 1);
    if ( !v207 )
    {
      v109 = v203;
      v14 = 12;
      v110 = *(_QWORD *)(v18 + 144);
      *(_QWORD *)(v18 + 64) = "out of memory";
      (*(void (__fastcall **)(__int64, __int64))(v18 + 136))(v110, v109);
      return v14;
    }
  }
  if ( v22 != -1 )
  {
    v40 = &v227;
    v41 = v38;
    v42 = 0;
    v43 = 0;
    while ( 1 )
    {
      if ( v39 >= v41 )
      {
        v79 = 0;
        do
          v79 += v19[v42++];
        while ( v79 < (unsigned int)(v39 / v41) );
        v39 -= v79;
      }
      else if ( !v205[6] )
      {
        v219[0] = 0;
        v12 = v22;
        v218[1] = v210;
        v220 = 1;
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
        v46 = (__int64)v204;
        v47 = v18;
        v48 = v202;
        goto LABEL_46;
      }
    }
  }
  v45 = v211;
  v46 = (__int64)v204;
  v47 = v18;
  v38 = 0;
  v48 = v202;
LABEL_46:
  v214 = v47;
  v213 = v46;
  v49 = v250;
  v212 = v38 << 10;
  v204 = (_BYTE *)(8 * v38);
  v209 = 0;
  v210 = 0;
  v211 = v245;
  while ( 2 )
  {
    ++v210;
    __memset_chk();
    v202 = (unsigned __int64)v49;
    v50 = v48;
    v51 = *v208;
    v206 = v45;
    v52 = v208;
    v53 = 0;
    v54 = v51;
    v55 = v203;
    while ( 2 )
    {
      while ( 1 )
      {
        ++v53;
        v56 = __memset_chk();
        v57 = v54;
        v58 = v52;
        v59 = 0;
        v60 = v56;
        if ( v50 )
          break;
        if ( v38 )
          goto LABEL_54;
        *(_BYTE *)(v55 + v53 - 1) = 0;
        if ( !v52 )
          goto LABEL_65;
      }
      while ( 2 )
      {
        v61 = 0;
        if ( v38 )
        {
          do
          {
            *(_QWORD *)(v60 + 8 * v61) += (unsigned __int8)v201[256 * v61 + 1376 + *v57];
            ++v61;
          }
          while ( v61 != v38 );
        }
        if ( &(++v57)[-*v58] != (unsigned __int8 *)v58[1] )
        {
LABEL_52:
          if ( ++v59 == v50 )
            goto LABEL_53;
          continue;
        }
        break;
      }
      v58 = (_QWORD *)v58[3];
      if ( v58 )
      {
        v57 = (unsigned __int8 *)*v58;
        goto LABEL_52;
      }
LABEL_53:
      if ( v38 )
      {
LABEL_54:
        v62 = 0;
        v63 = -1;
        for ( m = 0; m < v38; ++m )
        {
          if ( *(_QWORD *)(v60 + 8 * m) < v63 )
          {
            v62 = m;
            v63 = *(_QWORD *)(v60 + 8 * m);
          }
        }
        *(_BYTE *)(v55 + v53 - 1) = v62;
        if ( v50 )
          goto LABEL_59;
LABEL_64:
        if ( !v52 )
          goto LABEL_65;
        continue;
      }
      break;
    }
    *(_BYTE *)(v55 + v53 - 1) = 0;
    v62 = 0;
LABEL_59:
    v65 = 0;
    v66 = v62 << 8;
    while ( 1 )
    {
      while ( 1 )
      {
        v67 = *v54++;
        ++v245[v66 + v67];
        if ( &v54[-*v52] == (unsigned __int8 *)v52[1] )
          break;
        if ( ++v65 == v50 )
          goto LABEL_64;
      }
      v52 = (_QWORD *)v52[3];
      if ( !v52 )
        break;
      ++v65;
      v54 = (unsigned __int8 *)*v52;
      if ( v65 == v50 )
        goto LABEL_64;
    }
LABEL_65:
    v68 = v53;
    v48 = v50;
    v45 = v206;
    v49 = (_DWORD *)v202;
    v69 = nullptr;
    if ( v38 )
    {
      v215 = v68;
      v70 = v211;
      v217 = v60;
      v206 = (_BYTE *)v38;
      v71 = &v227;
      v72 = v45;
      v73 = nullptr;
      v216 = v48;
      for ( n = nullptr; n != v206; ++n )
      {
        v75 = 0;
        v76 = 0;
        memset(v49, 0, 0x100u);
        do
        {
          if ( !v70[v75] && *(_DWORD *)&v72[4 * v75] )
          {
            v70[v75] = 1;
            v76 = 1;
            *((_BYTE *)v49 + v75) = 1;
          }
          ++v75;
        }
        while ( v75 != 256 );
        LODWORD(v202) = v76;
        v73 = (_DWORD *)((char *)v73 + sub_82040(v70, (__int64)v71, 0x100u, 0x14u));
        if ( (_DWORD)v202 )
        {
          for ( ii = 0; ii != 256; ++ii )
          {
            if ( *((_BYTE *)v49 + ii) )
              v73 = (_DWORD *)((char *)v73 - (unsigned __int8)v71->m128i_i8[ii]);
          }
        }
        v70 += 256;
        v71 += 16;
      }
      v68 = v215;
      v48 = v216;
      v69 = v73;
      v45 = v72;
      v38 = (unsigned __int64)v206;
    }
    if ( v210 == 1 || v210 != 6 && v209 - (unsigned __int64)v69 > 0x13 )
    {
      v209 = (unsigned __int64)v69;
      continue;
    }
    break;
  }
  v81 = v49;
  v82 = (_BYTE *)v213;
  v83 = v214;
  v84 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v248, (__m128i)(unsigned __int64)v81);
  if ( (unsigned __int64)(v69 + 4) >= v213 && !v205[6] )
    goto LABEL_237;
  v224 = v84;
  v85 = _mm_load_si128(&v227);
  v222 = v247;
  v247[0] = v85;
  v86 = _mm_load_si128(&v228);
  v221 = (_BYTE *)&qword_100;
  v247[1] = v86;
  v247[2] = _mm_load_si128(&v229);
  v247[3] = _mm_load_si128(&v230);
  v247[4] = _mm_load_si128(&v231);
  v247[5] = _mm_load_si128(&v232);
  v247[6] = _mm_load_si128(&v233);
  v247[7] = _mm_load_si128(&v234);
  v247[8] = _mm_load_si128(&v235);
  v247[9] = _mm_load_si128(&v236);
  v247[10] = _mm_load_si128(&v237);
  v247[11] = _mm_load_si128(&v238);
  v247[12] = _mm_load_si128(&v239);
  v247[13] = _mm_load_si128(&v240);
  v247[14] = _mm_load_si128(&v241);
  v84 = _mm_load_si128(&v242);
  v247[15] = v84;
  if ( v38 > 1 )
  {
    v87 = &v244;
    do
    {
      v88 = v87 - 256;
      do
      {
        v89 = *v88;
        if ( *v88 )
        {
          v90 = (__int64)v221++;
          v222[v90] = v89;
        }
        ++v88;
      }
      while ( v88 != v87 );
      v87 += 256;
    }
    while ( v87 != &v243[256 * v38] );
  }
  v206 = v81;
  v204 = (_BYTE *)v68;
  v202 = (unsigned __int64)v69;
  if ( (unsigned int)sub_84EC0(v83, &v218, v219, (__int64 *)&v221) )
    goto LABEL_142;
  v91 = v202;
  v92 = v206;
  v222 = (_BYTE *)v203;
  v221 = v204;
  v224.m128i_i64[0] = v207;
  v93 = 0;
  if ( v38 )
  {
    if ( (v38 & 1) == 0 || (v93 = 1, *v206 = 0, v38 != 1) )
    {
      do
      {
        v92[v93] = v93;
        v94 = v93 + 1;
        v93 += 2;
        v92[v94] = v94;
      }
      while ( v93 != v38 );
    }
  }
  v206 = (_BYTE *)v91;
  v204 = v92;
  v202 = (unsigned __int64)v246;
  sub_81AC0((__int64 *)&v221, v92, v246, v38);
  v95 = sub_82040((_DWORD *)v202, (__int64)v204, v38 + 1, 7u);
  v96 = (__int64)v204;
  v97 = v206;
  v98 = 0;
  v209 = v95;
  v99 = 20;
  v100 = (__int64)v204;
  v101 = v204;
  do
  {
    v102 = (unsigned __int8)*v101;
    v103 = v102;
    if ( v99 <= v102 )
      v103 = v99;
    if ( (_BYTE)v102 )
      v99 = v103;
    if ( v98 < v102 )
      v98 = (unsigned __int8)*v101;
    ++v101;
  }
  while ( &v250[v38 + 1] != v101 );
  v104 = 0;
  if ( v98 >= v99 )
  {
    while ( 1 )
    {
      for ( jj = 0; ; ++jj )
      {
        if ( *(unsigned __int8 *)(v96 + jj) == v99 )
          v225[jj] = v104++;
        if ( jj == v38 )
          break;
      }
      v104 *= 2;
      if ( v98 == v99 )
        break;
      ++v99;
    }
  }
  v204 = (_BYTE *)v48;
  v111 = v38;
  v112 = (unsigned __int8 *)v100;
  v29 = 0;
  v206 = v82;
  v113 = v83;
  v114 = &v250[v38 + 1];
  do
  {
    v211 = v112;
    v115 = *v112;
    v116 = v113;
    v117 = 3;
    v118 = 8;
    v119 = v97;
    v120 = v111;
    do
    {
      while ( 1 )
      {
        v118 >>= 1;
        if ( (v118 & v115) != 0 )
          v219[0] |= v220;
        if ( v220 == 128 )
          break;
        v220 *= 2;
        if ( !--v117 )
          goto LABEL_152;
      }
      v121 = v218;
      LOBYTE(v210) = v219[0];
      v122 = v218[1];
      if ( v122 == v218[2] )
      {
        v212 = v116;
        LODWORD(v213) = v29;
        v148 = sub_84CB0(v116, (__int64)v218);
        v116 = v212;
        v121 = v148;
        if ( !v148 )
        {
LABEL_141:
          v83 = v116;
LABEL_142:
          v14 = 12;
          (*(void (__fastcall **)(_QWORD, __int64))(v83 + 136))(*(_QWORD *)(v83 + 144), v203);
          goto LABEL_143;
        }
        v218 = v148;
        v29 = (unsigned int)v213;
        v122 = v148[1];
      }
      v123 = *v121;
      v124 = v210;
      v121[1] = v122 + 1;
      *(_BYTE *)(v123 + v122) = v124;
      v220 = 1;
      v219[0] = 0;
      --v117;
    }
    while ( v117 );
LABEL_152:
    v97 = v119;
    v111 = v120;
    v113 = v116;
    v112 = (unsigned __int8 *)v211 + 1;
  }
  while ( v114 != (char *)v211 + 1 );
  v125 = (__int64)v204;
  v126 = (unsigned __int64)v206;
  v127 = v111;
  v14 = v29;
  v83 = v116;
  if ( v223 )
  {
    LODWORD(v206) = v29;
    v128 = 0;
    v129 = (__int64)v204;
    v130 = v97;
    v204 = (_BYTE *)v126;
    v131 = v111;
    do
    {
      v116 = v83;
      v132 = v129;
      v133 = v225[*(unsigned __int8 *)(v207 + v128)];
      v134 = 1 << v250[*(unsigned __int8 *)(v207 + v128)];
      do
      {
        while ( 1 )
        {
          v134 >>= 1;
          if ( (v134 & v133) != 0 )
            v219[0] |= v220;
          if ( v220 == 128 )
            break;
          v220 *= 2;
          if ( v134 == 1 )
            goto LABEL_162;
        }
        v135 = v218;
        v29 = (unsigned __int8)v219[0];
        v136 = v218[1];
        if ( v136 == v218[2] )
        {
          v210 = v116;
          LOBYTE(v211) = v219[0];
          v149 = sub_84CB0(v116, (__int64)v218);
          v116 = v210;
          v135 = v149;
          if ( !v149 )
            goto LABEL_141;
          v218 = v149;
          v29 = (unsigned __int8)v211;
          v136 = v149[1];
        }
        v137 = *v135;
        v135[1] = v136 + 1;
        *(_BYTE *)(v137 + v136) = v29;
        v220 = 1;
        v219[0] = 0;
      }
      while ( v134 != 1 );
LABEL_162:
      v129 = v132;
      ++v128;
      v83 = v116;
    }
    while ( v128 < v223 );
    v127 = v131;
    v14 = (unsigned int)v206;
    v126 = (unsigned __int64)v204;
    v97 = v130;
    v125 = v129;
  }
  if ( (unsigned __int64)&v97[8 * v218[1] + 16 + v209] >= v126 && !v205[6] )
  {
LABEL_237:
    v171 = v203;
    v14 = -17713;
    v172 = *(_QWORD *)(v83 + 144);
    *(_QWORD *)(v83 + 64) = "secondary compression was inefficient";
    (*(void (__fastcall **)(__int64, __int64, double))(v83 + 136))(v172, v171, *(double *)v84.m128i_i64);
    goto LABEL_143;
  }
  if ( v127 )
  {
    v138 = &v227;
    v139 = v202;
    v140 = (__m128i *)v243;
    v141 = &v227 + 16 * v127;
    do
    {
      v142 = v138;
      v143 = 0;
      v144 = 20;
      do
      {
        v145 = v142->m128i_u8[0];
        v146 = v145;
        if ( v144 <= v145 )
          v146 = v144;
        if ( (_BYTE)v145 )
          v144 = v146;
        if ( v143 < v145 )
          v143 = v142->m128i_u8[0];
        v142 = (__m128i *)((char *)v142 + 1);
      }
      while ( v140 != v142 );
      v29 = 0;
      if ( v143 >= v144 )
      {
        while ( 1 )
        {
          for ( kk = 0; kk != 256; ++kk )
          {
            if ( v138->m128i_u8[kk] == v144 )
              *(_QWORD *)(v139 + 8 * kk) = v29++;
          }
          v29 *= 2;
          if ( v144 == v143 )
            break;
          ++v144;
        }
      }
      v138 += 16;
      v139 += 2048LL;
      v140 += 16;
    }
    while ( v141 != v138 );
  }
  v150 = (unsigned __int8 *)v208;
  v151 = v220;
  v152 = v125;
  v153 = (unsigned __int8 *)v203;
  v154 = *v208;
  v116 = v83;
  while ( 2 )
  {
    v155 = *v153;
    v209 = v155 << 8;
    v208 = (unsigned __int8 **)(v155 << 11);
    if ( !v152 )
      goto LABEL_211;
    v156 = v153;
    v157 = nullptr;
    while ( 2 )
    {
      v158 = *v154;
      v202 = (unsigned __int64)v157;
      v159 = v156;
      v206 = v150;
      v160 = v154;
      v29 = (__int64)&v252[v158];
      v204 = (_BYTE *)v152;
      v161 = *(__int64 *)((char *)v208 + v29 - 22544);
      LODWORD(v205) = v14;
      v162 = 1 << v201[v158 + 1376 + v209];
      while ( 2 )
      {
        if ( ((v162 >> 1) & v161) != 0 )
          v219[0] |= v151;
        if ( v151 != 128 )
        {
          v162 >>= 1;
          goto LABEL_198;
        }
        v163 = v218;
        v164 = v219[0];
        v165 = v218[1];
        if ( v165 == v218[2] )
        {
          v210 = v116;
          v167 = sub_84CB0(v116, (__int64)v218);
          v116 = v210;
          v163 = v167;
          if ( !v167 )
            goto LABEL_141;
          v218 = v167;
          v165 = v167[1];
        }
        v166 = *v163;
        v163[1] = v165 + 1;
        *(_BYTE *)(v166 + v165) = v164;
        v220 = 1;
        v219[0] = 0;
        if ( v162 >> 1 != 1 )
        {
          v162 >>= 2;
          v219[0] = (v161 & v162) != 0;
          v151 = 1;
LABEL_198:
          v151 *= 2;
          v220 = v151;
          if ( v162 == 1 )
          {
            v168 = v160;
            v156 = v159;
            v152 = (__int64)v204;
            v169 = v202;
            v14 = (unsigned int)v205;
            v150 = v206;
            goto LABEL_208;
          }
          continue;
        }
        break;
      }
      v168 = v160;
      v156 = v159;
      v152 = (__int64)v204;
      v169 = v202;
      v14 = (unsigned int)v205;
      v150 = v206;
      v151 = 1;
LABEL_208:
      v154 = v168 + 1;
      if ( &v154[-*(_QWORD *)v150] == *((unsigned __int8 **)v150 + 1) )
      {
        v150 = *((unsigned __int8 **)v150 + 3);
        if ( v150 )
        {
          v154 = *(unsigned __int8 **)v150;
          goto LABEL_209;
        }
        goto LABEL_212;
      }
LABEL_209:
      v157 = (_DWORD *)(v169 + 1);
      if ( v157 != (_DWORD *)v152 )
        continue;
      break;
    }
    v153 = v156;
LABEL_211:
    ++v153;
    if ( v150 )
      continue;
    break;
  }
LABEL_212:
  v83 = v116;
  if ( v151 == 1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v116 + 136))(*(_QWORD *)(v116 + 144), v203);
    goto LABEL_143;
  }
LABEL_281:
  v196 = v218;
  v197 = v219[0];
  v198 = v218[1];
  if ( v198 != v218[2] )
  {
LABEL_282:
    v107 = *v196;
    v27 = v198 + 1;
    v14 = 0;
    v196[1] = v198 + 1;
    *(_BYTE *)(v107 + v198) = v197;
    goto LABEL_219;
  }
  v199 = sub_84CB0(v83, (__int64)v218);
  v196 = v199;
  if ( v199 )
  {
    v218 = v199;
    v198 = v199[1];
    goto LABEL_282;
  }
LABEL_218:
  v14 = 12;
LABEL_219:
  if ( v203 )
    (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64, __int64))(v83 + 136))(
      *(_QWORD *)(v83 + 144),
      v203,
      v107,
      v27,
      v29);
LABEL_139:
  if ( v207 )
LABEL_143:
    (*(void (__fastcall **)(_QWORD, __int64))(v83 + 136))(*(_QWORD *)(v83 + 144), v207);
  return v14;
}

