/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46ED1F
// Address: 0x0046ED1F

//----- (0046ED1F) --------------------------------------------------------
int __cdecl sub_46ED1F(int *a1, _BYTE *a2)
{
  int v2; // ebx
  bool v3; // al
  unsigned int v4; // eax
  int v5; // ecx
  int j; // edi
  unsigned int v7; // ebx
  int v8; // esi
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int i; // esi
  __int64 v12; // rax
  __int32 v13; // kr00_4
  unsigned __int64 v14; // rax
  int v15; // edx
  bool v16; // cf
  unsigned int v17; // eax
  unsigned int v18; // ecx
  int v19; // ecx
  int v20; // esi
  __int32 v21; // esi
  unsigned int v22; // ecx
  char v23; // al
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  __int32 v26; // kr04_4
  unsigned __int64 v27; // rax
  __int32 v28; // ebx
  unsigned int v29; // ecx
  unsigned int v30; // esi
  unsigned __int64 v31; // rax
  __int32 v32; // kr08_4
  unsigned __int64 v33; // rax
  __m128i *v34; // esi
  __m128i *v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // ecx
  int v40; // esi
  unsigned __int64 v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  int k; // esi
  unsigned __int64 v46; // rax
  __int32 v47; // kr0C_4
  unsigned __int64 v48; // rax
  __int32 v49; // esi
  int v50; // edx
  unsigned int v51; // ebx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  int v54; // ecx
  int v55; // esi
  int v56; // edi
  unsigned int v57; // ecx
  char v58; // al
  unsigned int v59; // ecx
  int m; // esi
  unsigned __int64 v61; // rax
  __int32 v62; // kr10_4
  unsigned __int64 v63; // rax
  __int32 v64; // ebx
  unsigned int v65; // ecx
  unsigned int v66; // esi
  unsigned __int64 v67; // rax
  __int32 v68; // kr14_4
  unsigned __int64 v69; // rax
  __m128i *v70; // edx
  unsigned int v71; // edx
  unsigned int v72; // eax
  int v73; // esi
  int v74; // edx
  int v75; // ecx
  unsigned __int64 v76; // rax
  unsigned int v77; // ecx
  unsigned int v78; // ecx
  int n; // esi
  unsigned __int64 v80; // rax
  __int32 v81; // kr18_4
  unsigned __int64 v82; // rax
  bool v84; // zf
  unsigned int v85; // eax
  unsigned int v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // ebx
  int v89; // edi
  unsigned int v90; // ecx
  unsigned __int8 *v91; // esi
  unsigned int v92; // ecx
  int ii; // esi
  __int64 v94; // rax
  __int32 v95; // kr1C_4
  unsigned __int64 v96; // rax
  int v97; // ecx
  unsigned int v98; // eax
  unsigned int v99; // ecx
  int v100; // ecx
  int v101; // esi
  int v102; // edi
  char v103; // al
  __int32 v104; // ecx
  int jj; // esi
  unsigned __int64 v106; // rax
  __int32 v107; // kr20_4
  int v108; // esi
  unsigned __int64 v109; // rax
  __int32 v110; // kr24_4
  __m128i *v111; // edx
  unsigned int v112; // edx
  unsigned int v113; // eax
  int v114; // esi
  int v115; // edx
  int v116; // ecx
  unsigned __int64 v117; // rax
  unsigned int v118; // ecx
  int kk; // esi
  unsigned __int64 v120; // rax
  __int32 v121; // kr28_4
  unsigned __int64 v122; // rax
  __int32 v123; // edx
  int v124; // ecx
  unsigned int v125; // eax
  unsigned int v126; // edx
  unsigned int v127; // et2
  unsigned int v128; // ecx
  int v129; // ebx
  int v130; // esi
  unsigned int v131; // ecx
  char v132; // al
  unsigned int v133; // ecx
  __int32 v134; // esi
  unsigned __int64 v135; // rax
  __int32 v136; // kr2C_4
  unsigned int v137; // ecx
  unsigned int v138; // ecx
  unsigned __int64 v139; // rax
  __int32 v140; // kr30_4
  __m128i *v141; // esi
  __m128i *v142; // ebx
  unsigned int v143; // eax
  unsigned int v144; // edx
  int v145; // esi
  unsigned __int64 v146; // rax
  int v147; // eax
  unsigned int v148; // ecx
  int mm; // esi
  unsigned __int64 v150; // rax
  __int32 v151; // edx
  unsigned int v152; // esi
  unsigned int v153; // eax
  unsigned int v154; // eax
  unsigned int v155; // edx
  unsigned int v156; // eax
  unsigned int v157; // eax
  unsigned int v158; // edx
  unsigned int v159; // edi
  unsigned int v160; // esi
  int v161; // eax
  unsigned int v162; // ecx
  unsigned int v163; // ecx
  unsigned int v164; // edx
  unsigned int v165; // edi
  char v166; // si
  unsigned int *v167; // edx
  unsigned int v168; // eax
  unsigned int v169; // eax
  unsigned int v170; // ecx
  unsigned int v171; // eax
  unsigned int v172; // edi
  unsigned int v173; // ecx
  unsigned int v174; // esi
  unsigned int v175; // edi
  unsigned int v176; // esi
  int v177; // eax
  unsigned int v178; // ecx
  unsigned int v179; // ecx
  unsigned int v180; // edx
  unsigned int v181; // ecx
  unsigned int v182; // edi
  unsigned int *v183; // edx
  unsigned int v184; // eax
  unsigned int v185; // eax
  unsigned int v186; // ecx
  unsigned int v187; // edx
  unsigned int v188; // edi
  unsigned int v189; // ebx
  int v190; // esi
  unsigned int v191; // esi
  int v192; // esi
  int v193; // esi
  unsigned __int8 v194; // si
  __int64 v195; // rax
  unsigned __int64 v196; // kr40_8
  __int64 v197; // rax
  __int64 v198; // rax
  int v199; // ecx
  _BYTE v201[460]; // [esp+10h] [ebp-B28h] BYREF
  unsigned int v202; // [esp+1DCh] [ebp-95Ch]
  unsigned __int8 *v203; // [esp+1E0h] [ebp-958h]
  unsigned __int8 *v204; // [esp+1E4h] [ebp-954h]
  _BYTE *v205; // [esp+1E8h] [ebp-950h]
  unsigned int v206; // [esp+1ECh] [ebp-94Ch]
  int *v207; // [esp+1F0h] [ebp-948h]
  unsigned int v208; // [esp+1F4h] [ebp-944h]
  int v209; // [esp+1F8h] [ebp-940h]
  unsigned int v210; // [esp+1FCh] [ebp-93Ch]
  unsigned int v211; // [esp+200h] [ebp-938h]
  int v212; // [esp+204h] [ebp-934h]
  int v213; // [esp+208h] [ebp-930h]
  unsigned int v214; // [esp+20Ch] [ebp-92Ch]
  unsigned int v215; // [esp+210h] [ebp-928h]
  unsigned int v216; // [esp+214h] [ebp-924h]
  int v217; // [esp+218h] [ebp-920h]
  unsigned int v218; // [esp+21Ch] [ebp-91Ch]
  unsigned int v219; // [esp+220h] [ebp-918h]
  unsigned int v220; // [esp+224h] [ebp-914h]
  __m128i v221[28]; // [esp+228h] [ebp-910h] BYREF
  unsigned int v222; // [esp+3F4h] [ebp-744h] BYREF
  __m128i v223[28]; // [esp+3F8h] [ebp-740h] BYREF
  unsigned int v224; // [esp+5C4h] [ebp-574h]
  _DWORD v225[115]; // [esp+5C8h] [ebp-570h] BYREF
  unsigned int v226; // [esp+794h] [ebp-3A4h] BYREF
  __m128i v227; // [esp+798h] [ebp-3A0h] BYREF
  unsigned int v228; // [esp+964h] [ebp-1D4h] BYREF
  __m128i v229[28]; // [esp+968h] [ebp-1D0h] BYREF

  v2 = *a1;
  v3 = a2[4] == 0;
  v207 = a1;
  v205 = a2;
  v206 = v3 ? 25 : 54;
  if ( v2 < 0 )
    v2 = 0;
  v4 = a1[1];
  v5 = v2;
  if ( v2 >= v4 )
    v5 = a1[1];
  j = (int)(a1 + 2);
  v211 = v2 - v5;
  v210 = (unsigned int)(a1 + 2);
  v204 = (unsigned __int8 *)a1 + v5 + 8;
  v7 = 0;
  v203 = (unsigned __int8 *)a1 + v4 + 8;
  v8 = 0;
  v219 = 0;
  v9 = 0;
  v218 = v203 - v204;
  v228 = 0;
  v217 = 0;
  if ( a1 + 2 == (int *)v204 )
  {
    v51 = 0;
    goto LABEL_109;
  }
  do
  {
    if ( v9 != 9 )
      goto LABEL_24;
    if ( v7 )
    {
      v10 = 0;
      for ( i = 0; i != v7; ++i )
      {
        v12 = 1000000000LL * v229[0].m128i_u32[i];
        v13 = 1000000000 * v229[0].m128i_i32[i];
        v229[0].m128i_i32[i] = v10 + v13;
        v14 = __PAIR64__(HIDWORD(v12), v10) + (unsigned int)v13;
        v10 = HIDWORD(v14);
      }
      j = v210;
      if ( HIDWORD(v14) )
      {
        if ( v228 < 0x73 )
        {
          v229[0].m128i_i32[v228] = HIDWORD(v14);
          v7 = ++v228;
LABEL_15:
          v8 = v217;
          goto LABEL_16;
        }
        v220 = 0;
        v228 = 0;
        sub_471A66(v7, v210, v229, 0x1CCu, (unsigned int)v221, 0);
      }
      v7 = v228;
      goto LABEL_15;
    }
LABEL_16:
    if ( v8 )
    {
      v15 = 0;
      if ( v7 )
      {
        do
        {
          v16 = __CFADD__(v8, v229[0].m128i_i32[v15]);
          v229[0].m128i_i32[v15] += v8;
          v7 = v228;
          ++v15;
          v8 = v16;
        }
        while ( v15 != v228 );
      }
      if ( v8 )
      {
        if ( v7 >= 0x73 )
        {
          v220 = 0;
          v228 = 0;
          sub_471A66(v7, j, v229, 0x1CCu, (unsigned int)v221, 0);
          v7 = v228;
        }
        else
        {
          v229[0].m128i_i32[v7] = v8;
          v7 = ++v228;
        }
      }
    }
    v8 = 0;
    v9 = 0;
LABEL_24:
    v8 = *(unsigned __int8 *)j + 10 * v8;
    ++v9;
    ++j;
    v217 = v8;
    v210 = j;
  }
  while ( (unsigned __int8 *)j != v204 );
  v219 = v7;
  if ( !v9 )
    goto LABEL_108;
  v17 = v9 / 0xA;
  v212 = v17;
  v18 = v9 % 0xA;
  v214 = v18;
  if ( !v17 )
    goto LABEL_87;
  while ( 2 )
  {
    if ( v17 > 0x26 )
      v17 = 38;
    v19 = (unsigned __int8)byte_4A625E[4 * v17];
    v20 = (unsigned __int8)byte_4A625F[4 * v17];
    v215 = v17;
    j = 4 * v19;
    v220 = v19 + v20;
    sub_464890(v221, 0, 4 * v19);
    sub_464310((unsigned int)v221 + j, (unsigned int)&dword_4A5958[(unsigned __int16)word_4A625C[2 * v215]], 4 * v20);
    if ( v220 > 1 )
    {
      if ( v7 > 1 )
      {
        v34 = v221;
        if ( v220 >= v7 )
          v34 = v229;
        v219 = (unsigned int)v34;
        v35 = v229;
        if ( v220 >= v7 )
          v35 = v221;
        v210 = (unsigned int)v35;
        if ( v220 >= v7 )
        {
          v36 = v7;
          v213 = v7;
        }
        else
        {
          v36 = v220;
          v213 = v220;
        }
        if ( v220 >= v7 )
          v7 = v220;
        v37 = 0;
        j = 0;
        v224 = 0;
        while ( !v34->m128i_i32[j] )
        {
          if ( j == v37 )
          {
            v225[j] = 0;
            v37 = j + 1;
            v224 = j + 1;
          }
LABEL_81:
          if ( ++j == v36 )
          {
            v228 = v37;
            sub_471A66(v7, j, v229, 0x1CCu, (unsigned int)v225, 4 * v37);
            v23 = 1;
            goto LABEL_83;
          }
        }
        v38 = 0;
        v39 = 0;
        v216 = 0;
        v40 = j;
        do
        {
          if ( v40 == 115 )
            break;
          if ( v40 == v37 )
          {
            v225[v40] = 0;
            v224 = v39 + j + 1;
          }
          v41 = (unsigned int)v225[v40]
              + *(unsigned int *)(v219 + 4 * j) * (unsigned __int64)*(unsigned int *)(v210 + 4 * v39);
          v16 = __CFADD__(v216, (_DWORD)v41);
          v225[v40] = v216 + v41;
          v37 = v224;
          v38 = v16 + HIDWORD(v41);
          ++v39;
          v216 = v38;
          ++v40;
        }
        while ( v39 != v7 );
        while ( v38 )
        {
          if ( v40 == 115 )
            goto LABEL_91;
          if ( v40 == v37 )
          {
            v225[v40] = 0;
            v224 = v40 + 1;
          }
          v42 = (v38 + (unsigned __int64)(unsigned int)v225[v40]) >> 32;
          v225[v40++] += v38;
          v38 = v42;
          v37 = v224;
        }
        if ( v40 != 115 )
        {
          v36 = v213;
          v34 = (__m128i *)v219;
          goto LABEL_81;
        }
LABEL_91:
        v228 = 0;
        sub_471A66(0, j, v229, 0x1CCu, (unsigned int)v201, 0);
        v23 = 0;
LABEL_83:
        v7 = v228;
        v219 = v228;
        goto LABEL_84;
      }
      v28 = v229[0].m128i_i32[0];
      v228 = v220;
      sub_471A66(v229[0].m128i_i32[0], j, v229, 0x1CCu, (unsigned int)v221, 4 * v220);
      if ( v28 )
      {
        v29 = v228;
        v23 = 1;
        v219 = v228;
        if ( v28 == 1 || !v228 )
          goto LABEL_35;
        v30 = 0;
        j = 0;
        do
        {
          v31 = v229[0].m128i_u32[j] * (unsigned __int64)(unsigned int)v28;
          v32 = v229[0].m128i_i32[j] * v28;
          v229[0].m128i_i32[j] = v30 + v32;
          v33 = __PAIR64__(HIDWORD(v31), v30) + (unsigned int)v32;
          ++j;
          v30 = HIDWORD(v33);
        }
        while ( j != v29 );
        if ( HIDWORD(v33) )
        {
          if ( v228 >= 0x73 )
            goto LABEL_45;
          v229[0].m128i_i32[v228] = HIDWORD(v33);
LABEL_44:
          v22 = ++v228;
          goto LABEL_33;
        }
      }
      else
      {
        v220 = 0;
        v228 = 0;
        sub_471A66(0, j, v229, 0x1CCu, (unsigned int)v221, 0);
      }
LABEL_32:
      v22 = v228;
LABEL_33:
      v23 = 1;
      goto LABEL_34;
    }
    v21 = v221[0].m128i_i32[0];
    if ( !v221[0].m128i_i32[0] )
    {
      v224 = 0;
      v228 = 0;
      sub_471A66(v7, j, v229, 0x1CCu, (unsigned int)v225, 0);
      goto LABEL_32;
    }
    if ( v221[0].m128i_i32[0] == 1 || !v7 )
    {
      v23 = 1;
      goto LABEL_35;
    }
    v24 = 0;
    for ( j = 0; j != v7; ++j )
    {
      v25 = v229[0].m128i_u32[j] * (unsigned __int64)(unsigned int)v21;
      v26 = v229[0].m128i_i32[j] * v21;
      v229[0].m128i_i32[j] = v24 + v26;
      v27 = __PAIR64__(HIDWORD(v25), v24) + (unsigned int)v26;
      v24 = HIDWORD(v27);
    }
    if ( !HIDWORD(v27) )
      goto LABEL_32;
    if ( v228 < 0x73 )
    {
      v229[0].m128i_i32[v228] = HIDWORD(v27);
      goto LABEL_44;
    }
LABEL_45:
    v220 = 0;
    v228 = 0;
    sub_471A66(0, j, v229, 0x1CCu, (unsigned int)v221, 0);
    v22 = v228;
    v23 = 0;
LABEL_34:
    v219 = v22;
LABEL_35:
    v7 = v219;
LABEL_84:
    if ( !v23 )
      goto LABEL_89;
    v17 = v212 - v215;
    v212 -= v215;
    if ( v212 )
      continue;
    break;
  }
  v18 = v214;
LABEL_87:
  if ( !v18 )
    goto LABEL_99;
  j = dword_4A62F4[v18];
  if ( !j )
    goto LABEL_89;
  if ( j == 1 || !v7 )
  {
LABEL_99:
    v43 = v219;
    goto LABEL_100;
  }
  v44 = 0;
  for ( k = 0; k != v7; ++k )
  {
    v46 = v229[0].m128i_u32[k] * (unsigned __int64)(unsigned int)j;
    v47 = v229[0].m128i_i32[k] * j;
    v229[0].m128i_i32[k] = v44 + v47;
    v48 = __PAIR64__(HIDWORD(v46), v44) + (unsigned int)v47;
    v44 = HIDWORD(v48);
  }
  if ( HIDWORD(v48) )
  {
    if ( v228 < 0x73 )
    {
      v229[0].m128i_i32[v228] = HIDWORD(v48);
      v43 = v228 + 1;
      v219 = ++v228;
      goto LABEL_100;
    }
LABEL_89:
    v228 = 0;
    sub_471A66(v7, j, v229, 0x1CCu, (unsigned int)v201, 0);
  }
  v43 = v228;
  v219 = v228;
LABEL_100:
  v49 = v217;
  if ( !v217 )
    goto LABEL_108;
  v50 = 0;
  if ( v43 )
  {
    do
    {
      v16 = __CFADD__(v49, v229[0].m128i_i32[v50]);
      v229[0].m128i_i32[v50] += v49;
      v43 = v228;
      v219 = v228;
      ++v50;
      v49 = v16;
    }
    while ( v50 != v228 );
  }
  if ( !v49 )
  {
LABEL_108:
    v51 = v219;
    goto LABEL_109;
  }
  if ( v43 >= 0x73 )
  {
    v228 = 0;
    sub_471A66(v7, j, v229, 0x1CCu, (unsigned int)v201, 0);
    v51 = v228;
    v219 = v228;
  }
  else
  {
    v229[0].m128i_i32[v43] = v49;
    v51 = v228 + 1;
    v219 = ++v228;
  }
LABEL_109:
  if ( !v211 )
    goto LABEL_176;
  v52 = v211 / 0xA;
  v216 = v211 / 0xA;
  v53 = v211 % 0xA;
  v214 = v211 % 0xA;
  if ( !(v211 / 0xA) )
    goto LABEL_171;
  while ( 2 )
  {
    if ( v52 > 0x26 )
      v52 = 38;
    v54 = (unsigned __int8)byte_4A625E[4 * v52];
    v55 = (unsigned __int8)byte_4A625F[4 * v52];
    v217 = v52;
    v56 = 4 * v54;
    v220 = v54 + v55;
    sub_464890(v221, 0, 4 * v54);
    sub_464310((unsigned int)v221 + v56, (unsigned int)&dword_4A5958[(unsigned __int16)word_4A625C[2 * v217]], 4 * v55);
    if ( v220 > 1 )
    {
      if ( v51 > 1 )
      {
        v56 = (int)v221;
        if ( v220 >= v51 )
          v56 = (int)v229;
        v215 = v56;
        v70 = v229;
        if ( v220 >= v51 )
          v70 = v221;
        v212 = (int)v70;
        if ( v220 >= v51 )
        {
          v71 = v51;
          v210 = v51;
        }
        else
        {
          v71 = v220;
          v210 = v220;
        }
        if ( v220 >= v51 )
          v51 = v220;
        v72 = 0;
        v73 = 0;
        v224 = 0;
        while ( !*(_DWORD *)(v56 + 4 * v73) )
        {
          if ( v73 == v72 )
          {
            v225[v73] = 0;
            v72 = v73 + 1;
            v224 = v73 + 1;
          }
LABEL_165:
          if ( ++v73 == v71 )
          {
            v228 = v72;
            sub_471A66(v51, v56, v229, 0x1CCu, (unsigned int)v225, 4 * v72);
            v58 = 1;
            goto LABEL_167;
          }
        }
        v74 = 0;
        v56 = 0;
        v213 = 0;
        v75 = v73;
        do
        {
          if ( v75 == 115 )
            break;
          if ( v75 == v72 )
          {
            v225[v75] = 0;
            v224 = v74 + v73 + 1;
          }
          v76 = (unsigned int)v56
              + *(unsigned int *)(v215 + 4 * v73) * (unsigned __int64)*(unsigned int *)(v212 + 4 * v74);
          v16 = __CFADD__((_DWORD)v76, v225[v75]);
          v225[v75] += v76;
          v72 = v224;
          v56 = v16 + HIDWORD(v76);
          v74 = v213 + 1;
          ++v75;
          v213 = v74;
        }
        while ( v74 != v51 );
        while ( v56 )
        {
          if ( v75 == 115 )
            goto LABEL_178;
          if ( v75 == v72 )
          {
            v225[v75] = 0;
            v224 = v75 + 1;
          }
          v16 = __CFADD__(v56, v225[v75]);
          v225[v75] += v56;
          v72 = v224;
          v56 = v16;
          ++v75;
        }
        if ( v75 != 115 )
        {
          v71 = v210;
          v56 = v215;
          goto LABEL_165;
        }
LABEL_178:
        v228 = 0;
        sub_471A66(v51, v56, v229, 0x1CCu, (unsigned int)v201, 0);
        v58 = 0;
LABEL_167:
        v51 = v228;
        v219 = v228;
        goto LABEL_168;
      }
      v64 = v229[0].m128i_i32[0];
      v228 = v220;
      sub_471A66(v229[0].m128i_i32[0], v56, v229, 0x1CCu, (unsigned int)v221, 4 * v220);
      if ( v64 )
      {
        v65 = v228;
        v58 = 1;
        v219 = v228;
        if ( v64 == 1 || !v228 )
          goto LABEL_119;
        v66 = 0;
        v56 = 0;
        do
        {
          v67 = v229[0].m128i_u32[v56] * (unsigned __int64)(unsigned int)v64;
          v68 = v229[0].m128i_i32[v56] * v64;
          v229[0].m128i_i32[v56] = v66 + v68;
          v69 = __PAIR64__(HIDWORD(v67), v66) + (unsigned int)v68;
          ++v56;
          v66 = HIDWORD(v69);
        }
        while ( v56 != v65 );
        if ( HIDWORD(v69) )
        {
          if ( v228 >= 0x73 )
            goto LABEL_129;
          v229[0].m128i_i32[v228] = HIDWORD(v69);
LABEL_128:
          v57 = ++v228;
          goto LABEL_117;
        }
      }
      else
      {
        v228 = 0;
        sub_471A66(0, v56, v229, 0x1CCu, (unsigned int)v201, 0);
      }
LABEL_116:
      v57 = v228;
LABEL_117:
      v58 = 1;
      goto LABEL_118;
    }
    v56 = v221[0].m128i_i32[0];
    if ( !v221[0].m128i_i32[0] )
    {
      v228 = 0;
      sub_471A66(v51, 0, v229, 0x1CCu, (unsigned int)v201, 0);
      goto LABEL_116;
    }
    if ( v221[0].m128i_i32[0] == 1 || !v51 )
    {
      v58 = 1;
      goto LABEL_119;
    }
    v59 = 0;
    for ( m = 0; m != v51; ++m )
    {
      v61 = v229[0].m128i_u32[m] * (unsigned __int64)(unsigned int)v56;
      v62 = v229[0].m128i_i32[m] * v56;
      v229[0].m128i_i32[m] = v59 + v62;
      v63 = __PAIR64__(HIDWORD(v61), v59) + (unsigned int)v62;
      v59 = HIDWORD(v63);
    }
    if ( !HIDWORD(v63) )
      goto LABEL_116;
    if ( v228 < 0x73 )
    {
      v229[0].m128i_i32[v228] = HIDWORD(v63);
      goto LABEL_128;
    }
LABEL_129:
    v228 = 0;
    sub_471A66(0, v56, v229, 0x1CCu, (unsigned int)v201, 0);
    v57 = v228;
    v58 = 0;
LABEL_118:
    v219 = v57;
LABEL_119:
    v51 = v219;
LABEL_168:
    if ( !v58 )
      goto LABEL_187;
    v52 = v216 - v217;
    v216 -= v217;
    if ( v216 )
      continue;
    break;
  }
  v53 = v214;
LABEL_171:
  if ( !v53 )
    goto LABEL_176;
  v56 = dword_4A62F4[v53];
  if ( !v56 )
  {
    v228 = 0;
    sub_471A66(v51, 0, v229, 0x1CCu, (unsigned int)v201, 0);
    goto LABEL_174;
  }
  if ( v56 == 1 )
  {
LABEL_176:
    if ( !v51 )
      goto LABEL_177;
    v85 = *(&v228 + v51);
    v208 = 0;
    v84 = !_BitScanReverse(&v85, v85);
    if ( v84 )
      v86 = 0;
    else
      v86 = v85 + 1;
    v77 = v86 + 32 * (v51 - 1);
  }
  else
  {
    if ( v51 )
    {
      v78 = 0;
      for ( n = 0; n != v51; ++n )
      {
        v80 = v229[0].m128i_u32[n] * (unsigned __int64)(unsigned int)v56;
        v81 = v229[0].m128i_i32[n] * v56;
        v229[0].m128i_i32[n] = v78 + v81;
        v82 = __PAIR64__(HIDWORD(v80), v78) + (unsigned int)v81;
        v78 = HIDWORD(v82);
      }
      if ( HIDWORD(v82) )
      {
        if ( v228 >= 0x73 )
        {
LABEL_187:
          v228 = 0;
          sub_471A66(v51, v56, v229, 0x1CCu, (unsigned int)v201, 0);
          sub_46E7C1(v51, v56, *((_BYTE *)v207 + 776), v205);
          return 3;
        }
        v229[0].m128i_i32[v228] = HIDWORD(v82);
        v51 = ++v228;
      }
      else
      {
LABEL_174:
        v51 = v228;
      }
      v219 = v51;
      goto LABEL_176;
    }
LABEL_177:
    v77 = 0;
  }
  v210 = v77;
  if ( v77 >= v206 )
    return sub_46EB56(&v228, v77, *((_BYTE *)v207 + 776), v203 != v204, v205);
  v87 = v218;
  if ( !v218 )
    return sub_46EB56(&v228, v77, *((_BYTE *)v207 + 776), v203 != v204, v205);
  v88 = 0;
  v89 = 0;
  v226 = 0;
  v90 = 0;
  v216 = 0;
  v91 = v204;
  v217 = (int)v204;
  if ( v204 == v203 )
    goto LABEL_293;
  while ( 2 )
  {
    if ( v90 == 9 )
    {
      if ( v88 )
      {
        v92 = 0;
        for ( ii = 0; ii != v88; ++ii )
        {
          v94 = 1000000000LL * v227.m128i_u32[ii];
          v95 = 1000000000 * v227.m128i_i32[ii];
          v227.m128i_i32[ii] = v92 + v95;
          v96 = __PAIR64__(HIDWORD(v94), v92) + (unsigned int)v95;
          v92 = HIDWORD(v96);
        }
        v89 = v216;
        if ( HIDWORD(v96) )
        {
          if ( v226 < 0x73 )
          {
            v227.m128i_i32[v226] = HIDWORD(v96);
            v88 = ++v226;
            goto LABEL_205;
          }
          v226 = 0;
          sub_471A66(v88, v216, &v227, 0x1CCu, (unsigned int)v201, 0);
        }
        v88 = v226;
LABEL_205:
        v91 = (unsigned __int8 *)v217;
      }
      if ( v89 )
      {
        v97 = 0;
        if ( v88 )
        {
          do
          {
            v16 = __CFADD__(v89, v227.m128i_i32[v97]);
            v227.m128i_i32[v97] += v89;
            v88 = v226;
            v89 = v16;
            ++v97;
          }
          while ( v97 != v226 );
        }
        if ( v89 )
        {
          if ( v88 >= 0x73 )
          {
            v226 = 0;
            sub_471A66(v88, v89, &v227, 0x1CCu, (unsigned int)v201, 0);
            v88 = v226;
          }
          else
          {
            v227.m128i_i32[v88] = v89;
            v88 = ++v226;
          }
        }
      }
      v89 = 0;
      v90 = 0;
    }
    v89 = *v91 + 10 * v89;
    ++v90;
    ++v91;
    v216 = v89;
    v217 = (int)v91;
    if ( v91 != v203 )
      continue;
    break;
  }
  if ( !v90 )
    goto LABEL_292;
  v98 = v90 / 0xA;
  v214 = v98;
  v99 = v90 % 0xA;
  v209 = v99;
  if ( !v98 )
    goto LABEL_273;
  while ( 2 )
  {
    if ( v98 > 0x26 )
      v98 = 38;
    v100 = (unsigned __int8)byte_4A625E[4 * v98];
    v101 = (unsigned __int8)byte_4A625F[4 * v98];
    v217 = v98;
    v102 = 4 * v100;
    v220 = v100 + v101;
    sub_464890(v221, 0, 4 * v100);
    sub_464310(
      (unsigned int)v221 + v102,
      (unsigned int)&dword_4A5958[(unsigned __int16)word_4A625C[2 * v217]],
      4 * v101);
    if ( v220 > 1 )
    {
      if ( v88 > 1 )
      {
        v89 = (int)v221;
        if ( v220 >= v88 )
          v89 = (int)&v227;
        v215 = v89;
        v111 = &v227;
        if ( v220 >= v88 )
          v111 = v221;
        v212 = (int)v111;
        if ( v220 >= v88 )
        {
          v112 = v88;
          v211 = v88;
        }
        else
        {
          v112 = v220;
          v211 = v220;
        }
        if ( v220 >= v88 )
          v88 = v220;
        v113 = 0;
        v114 = 0;
        v224 = 0;
        while ( !*(_DWORD *)(v89 + 4 * v114) )
        {
          if ( v114 == v113 )
          {
            v225[v114] = 0;
            v113 = v114 + 1;
            v224 = v114 + 1;
          }
LABEL_266:
          if ( ++v114 == v112 )
          {
            v226 = v113;
            sub_471A66(v88, v89, &v227, 0x1CCu, (unsigned int)v225, 4 * v113);
            goto LABEL_268;
          }
        }
        v115 = 0;
        v89 = 0;
        v213 = 0;
        v116 = v114;
        do
        {
          if ( v116 == 115 )
            break;
          if ( v116 == v113 )
          {
            v225[v116] = 0;
            v224 = v115 + v114 + 1;
          }
          v117 = (unsigned int)v89
               + *(unsigned int *)(v215 + 4 * v114) * (unsigned __int64)*(unsigned int *)(v212 + 4 * v115);
          v16 = __CFADD__((_DWORD)v117, v225[v116]);
          v225[v116] += v117;
          v113 = v224;
          v89 = v16 + HIDWORD(v117);
          v115 = v213 + 1;
          ++v116;
          v213 = v115;
        }
        while ( v115 != v88 );
        while ( v89 )
        {
          if ( v116 == 115 )
            goto LABEL_282;
          if ( v116 == v113 )
          {
            v225[v116] = 0;
            v224 = v116 + 1;
          }
          v16 = __CFADD__(v89, v225[v116]);
          v225[v116] += v89;
          v113 = v224;
          v89 = v16;
          ++v116;
        }
        if ( v116 != 115 )
        {
          v112 = v211;
          v89 = v215;
          goto LABEL_266;
        }
LABEL_282:
        v226 = 0;
        sub_471A66(v88, v89, &v227, 0x1CCu, (unsigned int)v201, 0);
        v103 = 0;
      }
      else
      {
        v89 = v227.m128i_i32[0];
        v226 = v220;
        sub_471A66(460, v227.m128i_i32[0], &v227, 0x1CCu, (unsigned int)v221, 4 * v220);
        if ( !v89 )
        {
          v226 = 0;
          sub_471A66(460, 0, &v227, 0x1CCu, (unsigned int)v201, 0);
LABEL_268:
          v103 = 1;
          goto LABEL_269;
        }
        v88 = v226;
        v103 = 1;
        if ( v89 == 1 || !v226 )
          goto LABEL_270;
        v104 = 0;
        v108 = 0;
        do
        {
          v109 = v227.m128i_u32[v108] * (unsigned __int64)(unsigned int)v89;
          v110 = v227.m128i_i32[v108] * v89;
          v227.m128i_i32[v108++] = v104 + v110;
          v104 = (__PAIR64__(HIDWORD(v109), v104) + (unsigned int)v110) >> 32;
        }
        while ( v108 != v88 );
LABEL_227:
        if ( !v104 )
        {
          v88 = v226;
          goto LABEL_232;
        }
        if ( v226 < 0x73 )
        {
          v227.m128i_i32[v226] = v104;
          v88 = ++v226;
LABEL_232:
          v103 = 1;
          goto LABEL_270;
        }
        v226 = 0;
        sub_471A66(0, v89, &v227, 0x1CCu, (unsigned int)v201, 0);
        v103 = 0;
      }
LABEL_269:
      v88 = v226;
      goto LABEL_270;
    }
    v89 = v221[0].m128i_i32[0];
    if ( !v221[0].m128i_i32[0] )
    {
      v226 = 0;
      sub_471A66(v88, 0, &v227, 0x1CCu, (unsigned int)v201, 0);
      goto LABEL_268;
    }
    if ( v221[0].m128i_i32[0] != 1 && v88 )
    {
      v104 = 0;
      for ( jj = 0; jj != v88; ++jj )
      {
        v106 = v227.m128i_u32[jj] * (unsigned __int64)(unsigned int)v89;
        v107 = v227.m128i_i32[jj] * v89;
        v227.m128i_i32[jj] = v104 + v107;
        v104 = (__PAIR64__(HIDWORD(v106), v104) + (unsigned int)v107) >> 32;
      }
      goto LABEL_227;
    }
    v103 = 1;
LABEL_270:
    if ( !v103 )
      goto LABEL_283;
    v98 = v214 - v217;
    v214 -= v217;
    if ( v214 )
      continue;
    break;
  }
  v99 = v209;
LABEL_273:
  if ( v99 )
  {
    v89 = dword_4A62F4[v99];
    if ( !v89 )
      goto LABEL_283;
    if ( v89 == 1 || !v88 )
      goto LABEL_285;
    v118 = 0;
    for ( kk = 0; kk != v88; ++kk )
    {
      v120 = v227.m128i_u32[kk] * (unsigned __int64)(unsigned int)v89;
      v121 = v227.m128i_i32[kk] * v89;
      v227.m128i_i32[kk] = v118 + v121;
      v122 = __PAIR64__(HIDWORD(v120), v118) + (unsigned int)v121;
      v118 = HIDWORD(v122);
    }
    if ( HIDWORD(v122) )
    {
      if ( v226 < 0x73 )
      {
        v227.m128i_i32[v226] = HIDWORD(v122);
        v88 = ++v226;
        goto LABEL_285;
      }
LABEL_283:
      v226 = 0;
      sub_471A66(v88, v89, &v227, 0x1CCu, (unsigned int)v201, 0);
    }
    v88 = v226;
  }
LABEL_285:
  v123 = v216;
  if ( v216 )
  {
    v124 = 0;
    if ( v88 )
    {
      do
      {
        v16 = __CFADD__(v123, v227.m128i_i32[v124]);
        v227.m128i_i32[v124] += v123;
        v88 = v226;
        v123 = v16;
        ++v124;
      }
      while ( v124 != v226 );
    }
    if ( v123 )
    {
      if ( v88 >= 0x73 )
      {
        v226 = 0;
        sub_471A66(v88, v89, &v227, 0x1CCu, (unsigned int)v201, 0);
        v88 = v226;
      }
      else
      {
        v227.m128i_i32[v88] = v123;
        v88 = ++v226;
      }
    }
  }
LABEL_292:
  v87 = v218;
LABEL_293:
  if ( *v207 < 0 )
    v87 -= *v207;
  v127 = v87 % 0xA;
  v125 = v87 / 0xA;
  v126 = v127;
  v128 = 1;
  v209 = v127;
  v223[0].m128i_i64[0] = 1;
  v218 = 1;
  v222 = 1;
  v215 = v125;
  if ( v125 )
  {
LABEL_296:
    if ( v125 <= 0x26 )
    {
      v129 = v125;
      v213 = v125;
    }
    else
    {
      v129 = 38;
      v213 = 38;
    }
    v130 = (unsigned __int8)byte_4A625F[4 * v129];
    v89 = 4 * (unsigned __int8)byte_4A625E[4 * v129];
    v220 = (unsigned __int8)byte_4A625E[4 * v129] + v130;
    sub_464890(v221, 0, v89);
    sub_464310((unsigned int)v221 + v89, (unsigned int)&dword_4A5958[(unsigned __int16)word_4A625C[2 * v129]], 4 * v130);
    if ( v220 <= 1 )
    {
      v88 = v221[0].m128i_i32[0];
      if ( v221[0].m128i_i32[0] )
      {
        if ( v221[0].m128i_i32[0] != 1 )
        {
          v133 = v218;
          if ( v218 )
          {
            v134 = 0;
            v89 = 0;
            do
            {
              v135 = v223[0].m128i_u32[v89] * (unsigned __int64)v88;
              v136 = v223[0].m128i_i32[v89] * v88;
              v223[0].m128i_i32[v89++] = v134 + v136;
              v134 = (__PAIR64__(HIDWORD(v135), v134) + (unsigned int)v136) >> 32;
            }
            while ( v89 != v133 );
            goto LABEL_319;
          }
        }
        v132 = 1;
        goto LABEL_305;
      }
      goto LABEL_301;
    }
    v137 = v218;
    if ( v218 <= 1 )
    {
      v88 = v223[0].m128i_i32[0];
      v222 = v220;
      sub_471A66(v223[0].m128i_i32[0], v89, v223, 0x1CCu, (unsigned int)v221, 4 * v220);
      if ( v88 )
      {
        v138 = v222;
        v132 = 1;
        v218 = v222;
        if ( v88 == 1 || !v222 )
          goto LABEL_305;
        v134 = 0;
        v89 = 0;
        do
        {
          v139 = v223[0].m128i_u32[v89] * (unsigned __int64)v88;
          v140 = v223[0].m128i_i32[v89] * v88;
          v223[0].m128i_i32[v89++] = v134 + v140;
          v134 = (__PAIR64__(HIDWORD(v139), v134) + (unsigned int)v140) >> 32;
        }
        while ( v89 != v138 );
LABEL_319:
        if ( v134 )
        {
          if ( v222 >= 0x73 )
          {
            v88 = 0;
            v222 = 0;
            sub_471A66(0, v89, v223, 0x1CCu, (unsigned int)v201, 0);
            v131 = v222;
            v132 = 0;
LABEL_304:
            v218 = v131;
LABEL_305:
            v128 = v218;
            goto LABEL_350;
          }
          v223[0].m128i_i32[v222] = v134;
          v131 = ++v222;
LABEL_303:
          v132 = 1;
          goto LABEL_304;
        }
LABEL_302:
        v131 = v222;
        goto LABEL_303;
      }
LABEL_301:
      v222 = 0;
      sub_471A66(0, v89, v223, 0x1CCu, (unsigned int)v201, 0);
      goto LABEL_302;
    }
    v141 = v221;
    if ( v220 >= v218 )
      v141 = v223;
    v216 = (unsigned int)v141;
    v142 = v223;
    if ( v220 >= v218 )
      v142 = v221;
    v214 = (unsigned int)v142;
    if ( v220 >= v218 )
    {
      v88 = v218;
      v212 = v218;
    }
    else
    {
      v88 = v220;
      v212 = v220;
    }
    if ( v220 >= v218 )
      v137 = v220;
    v143 = 0;
    v89 = 0;
    v224 = 0;
    while ( 1 )
    {
      if ( v141->m128i_i32[v89] )
      {
        v144 = 0;
        v88 = 0;
        v211 = 0;
        v145 = v89;
        if ( v137 )
        {
          do
          {
            if ( v145 == 115 )
              break;
            if ( v145 == v143 )
            {
              v225[v145] = 0;
              v224 = v144 + v89 + 1;
            }
            v146 = v88 + *(unsigned int *)(v216 + 4 * v89) * (unsigned __int64)*(unsigned int *)(v214 + 4 * v144);
            v16 = __CFADD__((_DWORD)v146, v225[v145]);
            v225[v145] += v146;
            v143 = v224;
            v88 = v16 + HIDWORD(v146);
            v144 = v211 + 1;
            ++v145;
            v211 = v144;
          }
          while ( v144 != v137 );
          while ( v88 )
          {
            if ( v145 == 115 )
              goto LABEL_357;
            if ( v145 == v143 )
            {
              v225[v145] = 0;
              v224 = v145 + 1;
            }
            v16 = __CFADD__(v88, v225[v145]);
            v225[v145] += v88;
            v143 = v224;
            v88 = v16;
            ++v145;
          }
        }
        if ( v145 == 115 )
        {
LABEL_357:
          v222 = 0;
          sub_471A66(v88, v89, v223, 0x1CCu, (unsigned int)v201, 0);
          v132 = 0;
LABEL_349:
          v128 = v222;
          v218 = v222;
LABEL_350:
          if ( !v132 )
            goto LABEL_366;
          v125 = v215 - v213;
          v215 -= v213;
          if ( !v215 )
          {
            v88 = v226;
            v126 = v209;
            break;
          }
          goto LABEL_296;
        }
        v88 = v212;
        v141 = (__m128i *)v216;
      }
      else if ( v89 == v143 )
      {
        v225[v89] = 0;
        v143 = v89 + 1;
        v224 = v89 + 1;
      }
      if ( ++v89 == v88 )
      {
        v222 = v143;
        sub_471A66(v88, v89, v223, 0x1CCu, (unsigned int)v225, 4 * v143);
        v132 = 1;
        goto LABEL_349;
      }
    }
  }
  if ( !v126 )
    goto LABEL_367;
  v147 = dword_4A62F4[v126];
  v209 = v147;
  if ( !v147 )
  {
    v222 = 0;
    sub_471A66(v88, v89, v223, 0x1CCu, (unsigned int)v201, 0);
    v88 = v226;
    goto LABEL_356;
  }
  if ( v147 != 1 && v128 )
  {
    v89 = 0;
    for ( mm = 0; mm != v128; ++mm )
    {
      v150 = v223[0].m128i_u32[mm] * (unsigned __int64)(unsigned int)v147;
      v16 = __CFADD__(v89, (_DWORD)v150);
      v223[0].m128i_i32[mm] = v89 + v150;
      v147 = v209;
      v151 = v16 + HIDWORD(v150);
      v89 = v151;
    }
    if ( !v151 )
    {
LABEL_356:
      v148 = v222;
      v218 = v222;
      goto LABEL_368;
    }
    if ( v222 < 0x73 )
    {
      v223[0].m128i_i32[v222] = v151;
      v148 = v222 + 1;
      v218 = ++v222;
      goto LABEL_368;
    }
LABEL_366:
    v222 = 0;
    sub_471A66(v88, v89, v223, 0x1CCu, (unsigned int)v201, 0);
    sub_46ECEA(v88, v89, *((_BYTE *)v207 + 776), v205);
    return 2;
  }
  else
  {
LABEL_367:
    v148 = v218;
LABEL_368:
    if ( v88 )
    {
      v153 = *(&v226 + v88);
      v208 = 0;
      v84 = !_BitScanReverse(&v153, v153);
      if ( v84 )
        v154 = 0;
      else
        v154 = v153 + 1;
      v152 = v154 + 32 * (v88 - 1);
    }
    else
    {
      v152 = 0;
    }
    if ( v148 )
    {
      v156 = *(&v222 + v148);
      v208 = 0;
      v84 = !_BitScanReverse(&v156, v156);
      if ( v84 )
        v157 = 0;
      else
        v157 = v156 + 1;
      v155 = v157 + 32 * (v148 - 1);
    }
    else
    {
      v155 = 0;
    }
    v158 = v152 < v155 ? v155 - v152 : 0;
    v217 = v158;
    if ( v158 )
    {
      v159 = v158 & 0x1F;
      v160 = v158 >> 5;
      v208 = v158 >> 5;
      v209 = v159;
      v213 = 32 - v159;
      v161 = sub_4634C0(1, 32 - v159);
      v162 = *(&v226 + v88);
      v216 = v161 - 1;
      v84 = !_BitScanReverse(&v162, v162);
      v202 = 0;
      v212 = ~(v161 - 1);
      if ( v84 )
        v163 = 0;
      else
        v163 = v162 + 1;
      if ( v160 + v88 > 0x73 || (v164 = v88 + v160 + (32 - v163 < v159), v202 = v164, v164 > 0x73) )
      {
        v226 = 0;
        sub_471A66(v88, v159, &v227, 0x1CCu, (unsigned int)v201, 0);
        v88 = v226;
        v148 = v222;
      }
      else
      {
        v215 = v160 - 1;
        v211 = v164 - 1;
        if ( v164 - 1 != v160 - 1 )
        {
          v165 = v88 + (32 - v163 < v159) - 1;
          v166 = v209;
          v167 = &v226 + v165;
          while ( 1 )
          {
            v168 = v165 >= v88 ? 0 : v167[1];
            v214 = v168;
            v169 = v165 - 1 >= v88 ? 0 : *v167--;
            v170 = v211;
            v227.m128i_i32[v211] = ((v216 & v214) << v166) | ((v212 & v169) >> v213);
            --v165;
            v211 = v170 - 1;
            if ( v170 - 1 == v215 )
              break;
            v88 = v226;
          }
          v164 = v202;
          v160 = v208;
        }
        if ( v160 )
          memset(&v227, 0, 4 * v160);
        v148 = v218;
        v88 = v164;
        v226 = v164;
      }
      v158 = v217;
    }
    v171 = v206 - v210;
    v206 = v171;
    v172 = v171;
    if ( v210 )
    {
      if ( v158 > v171 )
        return sub_46EB56(&v228, v210, *((_BYTE *)v207 + 776), v203 != v204, v205);
      v172 = v171 - v158;
    }
    if ( v88 <= v148 )
    {
      if ( v88 < v148 )
        goto LABEL_413;
      v173 = v88 - 1;
      if ( v88 )
      {
        do
        {
          if ( v227.m128i_i32[v173] != v223[0].m128i_i32[v173] )
            break;
          --v173;
        }
        while ( v173 != -1 );
        if ( v173 != -1 && v227.m128i_i32[v173] <= (unsigned __int32)v223[0].m128i_i32[v173] )
LABEL_413:
          v217 = v158 + 1;
      }
    }
    v174 = v172;
    v175 = v172 & 0x1F;
    v176 = v174 >> 5;
    v212 = v175;
    v202 = 32 - v175;
    v177 = sub_4634C0(1, 32 - v175);
    v178 = *(&v226 + v88);
    v209 = v177 - 1;
    v84 = !_BitScanReverse(&v178, v178);
    v214 = 0;
    v208 = ~(v177 - 1);
    if ( v84 )
      v179 = 0;
    else
      v179 = v178 + 1;
    if ( v176 + v88 > 0x73 || (v180 = v88 + v176 + (32 - v179 < v175), v213 = v180, v180 > 0x73) )
    {
      v226 = 0;
      sub_471A66(v88, v175, &v227, 0x1CCu, (unsigned int)v201, 0);
    }
    else
    {
      v181 = v180 - 1;
      v211 = v180 - 1;
      if ( v180 - 1 != v176 - 1 )
      {
        v182 = v181 - v176;
        v183 = &v226 + v181 - v176;
        while ( 1 )
        {
          v184 = v182 >= v88 ? 0 : v183[1];
          v214 = v184;
          v185 = v182 - 1 >= v88 ? 0 : *v183--;
          v186 = v211;
          v227.m128i_i32[v211] = ((v209 & v214) << v212) | ((v208 & v185) >> v202);
          v211 = v186 - 1;
          --v182;
          if ( v186 - 1 == v176 - 1 )
            break;
          v88 = v226;
        }
        v180 = v213;
      }
      if ( v176 )
        memset(&v227, 0, 4 * v176);
      v226 = v180;
    }
    v188 = sub_470AB0((int)&v226, &v222);
    v189 = v187;
    LOBYTE(v216) = v226 == 0;
    if ( v187 )
    {
      v84 = !_BitScanReverse((unsigned int *)&v192, v187);
      if ( v84 )
        v193 = 0;
      else
        v193 = v192 + 1;
      v191 = v193 + 32;
    }
    else
    {
      v84 = !_BitScanReverse((unsigned int *)&v190, v188);
      if ( v84 )
        v191 = 0;
      else
        v191 = v190 + 1;
    }
    if ( v191 > v206 )
    {
      v194 = v191 - v206;
      if ( v226
        || (LODWORD(v195) = sub_4634C0(1, v194),
            LOBYTE(v216) = 1,
            v189 & ((unsigned __int64)(v195 - 1) >> 32) | v188 & ((_DWORD)v195 - 1)) )
      {
        LOBYTE(v216) = 0;
      }
      v196 = sub_463600(__PAIR64__(v189, v188), v194);
      v189 = HIDWORD(v196);
      v188 = v196;
    }
    LODWORD(v197) = 0;
    HIDWORD(v197) = v219 > 1 ? v229[0].m128i_i32[1] : 0;
    LODWORD(v198) = sub_4634C0((v229[0].m128i_i32[0] & (unsigned int)-(v219 != 0)) + v197, v206);
    if ( v210 )
      v199 = v210 - 2;
    else
      v199 = ~v217;
    return sub_46E801(__PAIR64__(v189, v188) + v198, v199, *((_BYTE *)v207 + 776), v216, v205);
  }
}
// 46F179: conditional instruction was optimized away because edx.4>=2u
// 46F1B1: conditional instruction was optimized away because ebx.4>=2u
// 46F6B5: conditional instruction was optimized away because edx.4>=2u
// 46F6ED: conditional instruction was optimized away because ebx.4>=2u
// 46FD0B: conditional instruction was optimized away because edx.4>=2u
// 46FD43: conditional instruction was optimized away because ebx.4>=2u
// 470242: conditional instruction was optimized away because ebx.4>=2u
// 4708C2: variable 'v187' is possibly undefined
// 47090D: variable 'v195' is possibly undefined
// 470973: variable 'v198' is possibly undefined
// 4A5958: using guessed type int dword_4A5958[512];
// 4A625C: using guessed type __int16 word_4A625C[];
// 4A62F4: using guessed type int dword_4A62F4[];
