/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805BD90
// Address: 0x0805BD90

//----- (0805BD90) --------------------------------------------------------
unsigned int __cdecl sub_805BD90(_DWORD *a1)
{
  int v1; // esi
  char **v2; // edi
  char *v3; // eax
  int v4; // ebx
  int v5; // eax
  char *v6; // ebx
  unsigned int v7; // ecx
  char *v8; // eax
  int v9; // eax
  char *v10; // ecx
  unsigned int v11; // edx
  __m128i *v12; // eax
  __m128i si128; // xmm0
  int v14; // edi
  int v15; // eax
  char *v16; // ecx
  unsigned int v17; // edx
  __m128i *v18; // eax
  int v19; // esi
  int v20; // edx
  char *v21; // eax
  int v22; // ecx
  char *v23; // eax
  int v24; // edi
  int v25; // edx
  char *v26; // ecx
  int v27; // eax
  __m128i *v28; // edx
  __m128i v29; // xmm0
  int v30; // edi
  int v31; // edx
  char *v32; // ecx
  int v33; // eax
  __m128i *v34; // edx
  __m128i v35; // xmm0
  int v36; // edi
  int v37; // edx
  char *v38; // ecx
  int v39; // eax
  __m128i *v40; // edx
  __m128i v41; // xmm0
  int v42; // edi
  int v43; // edx
  char *v44; // ecx
  int v45; // eax
  __m128i *v46; // edx
  __m128i v47; // xmm0
  int v48; // edi
  int v49; // edx
  char *v50; // ecx
  int v51; // eax
  __m128i *v52; // edx
  __m128i v53; // xmm0
  int v54; // edi
  int v55; // edx
  char *v56; // ecx
  int v57; // eax
  __m128i *v58; // edx
  __m128i v59; // xmm0
  int v60; // edi
  char v61; // al
  int v62; // eax
  char *v63; // ecx
  unsigned int v64; // edx
  __m128i *v65; // eax
  __m128i v66; // xmm0
  int v67; // edi
  char v68; // al
  int v69; // eax
  char *v70; // ecx
  unsigned int v71; // edx
  __m128i *v72; // eax
  __m128i v73; // xmm0
  int v74; // edi
  char v75; // al
  int v76; // eax
  char *v77; // ecx
  unsigned int v78; // edx
  __m128i *v79; // eax
  __m128i v80; // xmm0
  int v81; // edi
  char v82; // al
  int v83; // eax
  char *v84; // ecx
  unsigned int v85; // edx
  __m128i *v86; // eax
  __m128i v87; // xmm0
  int v88; // edi
  char v89; // al
  int v90; // eax
  char *v91; // ecx
  unsigned int v92; // edx
  __m128i *v93; // eax
  __m128i v94; // xmm0
  int v95; // edi
  char v96; // al
  int v97; // eax
  char *v98; // ecx
  unsigned int v99; // edx
  __m128i *v100; // eax
  __m128i v101; // xmm0
  int v102; // edi
  char v103; // al
  int v104; // eax
  char *v105; // ecx
  unsigned int v106; // edx
  __m128i *v107; // eax
  __m128i v108; // xmm0
  int v109; // edi
  char v110; // al
  int v111; // edx
  char *v112; // ecx
  int v113; // eax
  __m128i *v114; // edx
  __m128i v115; // xmm0
  int v116; // edi
  char v117; // al
  int v118; // edx
  char *v119; // ecx
  int v120; // eax
  __m128i *v121; // edx
  __m128i v122; // xmm0
  int v123; // edi
  int v124; // edx
  char *v125; // ecx
  int v126; // eax
  __m128i *v127; // edx
  __m128i v128; // xmm0
  char **v129; // esi
  int v130; // edi
  int v131; // edx
  int v132; // eax
  char *v133; // ebx
  unsigned int v134; // ecx
  char *v135; // eax
  int v136; // edi
  int v137; // eax
  char *v138; // ecx
  unsigned int v139; // edx
  __m128i *v140; // eax
  __m128i v141; // xmm0
  _UNKNOWN **v142; // esi
  char *v143; // eax
  int v144; // ebx
  int v145; // edi
  int v146; // eax
  char *v147; // ebx
  unsigned int v148; // ecx
  char *v149; // eax
  char *v150; // eax
  char *v151; // eax
  char **v152; // esi
  int v153; // edi
  int v154; // edx
  char *v155; // eax
  int v156; // ecx
  unsigned int v157; // ebx
  char *v158; // eax
  unsigned int result; // eax
  char *v160; // eax
  char *v161; // eax
  char *v162; // eax
  char *v163; // eax
  char *v164; // eax
  char *v165; // eax
  char *v166; // eax
  char *v167; // eax
  char *v168; // eax
  char *v169; // eax
  char *v170; // eax
  char *v171; // eax
  char *v172; // eax
  char *v173; // eax
  char *v174; // eax
  char *v175; // eax
  char *v176; // eax
  char *v177; // eax
  int v178; // [esp-10h] [ebp-54h]
  int v179; // [esp-Ch] [ebp-50h]
  int v180; // [esp-8h] [ebp-4Ch]
  unsigned __int64 v181; // [esp+4h] [ebp-40h]
  int v182; // [esp+4h] [ebp-40h]
  int v183; // [esp+4h] [ebp-40h]
  int v184; // [esp+4h] [ebp-40h]
  bool v185; // [esp+4h] [ebp-40h]
  unsigned __int64 v186; // [esp+14h] [ebp-30h]
  int v187; // [esp+1Ch] [ebp-28h]
  int v188; // [esp+1Ch] [ebp-28h]
  int v189; // [esp+1Ch] [ebp-28h]
  int v190; // [esp+1Ch] [ebp-28h]
  int v191; // [esp+1Ch] [ebp-28h]
  int v192; // [esp+1Ch] [ebp-28h]
  int v193; // [esp+1Ch] [ebp-28h]
  int v194; // [esp+1Ch] [ebp-28h]
  int v195; // [esp+1Ch] [ebp-28h]
  int v196; // [esp+1Ch] [ebp-28h]
  int v197; // [esp+1Ch] [ebp-28h]
  int v198; // [esp+1Ch] [ebp-28h]
  int v199; // [esp+1Ch] [ebp-28h]
  int v200; // [esp+1Ch] [ebp-28h]
  int v201; // [esp+1Ch] [ebp-28h]
  int v202; // [esp+1Ch] [ebp-28h]
  int v203; // [esp+24h] [ebp-20h]
  int v204; // [esp+24h] [ebp-20h]
  int v205; // [esp+24h] [ebp-20h]
  int v206; // [esp+24h] [ebp-20h]
  int v207; // [esp+24h] [ebp-20h]
  int v208; // [esp+24h] [ebp-20h]
  int v209; // [esp+24h] [ebp-20h]
  int v210; // [esp+24h] [ebp-20h]
  int v211; // [esp+24h] [ebp-20h]
  int v212; // [esp+24h] [ebp-20h]
  int v213; // [esp+24h] [ebp-20h]
  int v214; // [esp+24h] [ebp-20h]
  int v215; // [esp+24h] [ebp-20h]
  unsigned int v216; // [esp+24h] [ebp-20h]

  v186 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)sub_8056190), _mm_cvtsi32_si128((unsigned int)sub_80548A0)).m128i_u64[0];
  v181 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)sub_8054860), _mm_cvtsi32_si128((unsigned int)sub_8054880)).m128i_u64[0];
  v1 = operator new(0xD7Cu);
  sub_805B9B0(v1, a1 + 86);
  v2 = &off_811E260;
  a1[85] = v1;
  v203 = 152;
  do
  {
    v5 = *(_DWORD *)(v1 + 12);
    v6 = *(char **)(v1 + 8);
    v7 = v5 + 1;
    if ( *(_DWORD *)(v1 + 16) < (unsigned int)(v5 + 1) )
    {
      v8 = (char *)sub_80CF920(v1 + 8, v6, v7, 0x14u);
      *(_DWORD *)(v1 + 8) = v8;
      v6 = v8;
      v5 = *(_DWORD *)(v1 + 12);
      v7 = v5 + 1;
    }
    *(_DWORD *)(v1 + 12) = v7;
    v3 = &v6[20 * v5];
    v4 = v203;
    v2 += 5;
    *((_DWORD *)v3 + 3) = 10;
    *((_DWORD *)v3 + 2) = v203;
    *((_DWORD *)v3 + 4) = 10;
    *(_QWORD *)v3 = 0xFFFFFFFF00000001LL;
    sub_8058670(
      *(char ***)(v1 + 4),
      *(v2 - 5),
      (int)*(v2 - 4),
      *((_BYTE *)v2 - 11),
      *((_BYTE *)v2 - 12),
      (int)*(v2 - 2),
      (int)*(v2 - 1));
    v203 += 10;
    v1 = a1[85];
  }
  while ( v4 != 222 );
  switch ( BYTE1(dword_811E248[0]) )
  {
    case 2:
      v204 = 4;
      break;
    case 7:
      v9 = *(_DWORD *)(v1 + 12);
      v10 = *(char **)(v1 + 8);
      v204 = 8;
      v11 = v9 + 1;
      if ( *(_DWORD *)(v1 + 16) >= (unsigned int)(v9 + 1) )
        goto LABEL_10;
      goto LABEL_122;
    case 1:
      v204 = 2;
      break;
    default:
      goto LABEL_176;
  }
  v9 = *(_DWORD *)(v1 + 12);
  v10 = *(char **)(v1 + 8);
  v11 = v9 + 1;
  if ( *(_DWORD *)(v1 + 16) >= (unsigned int)(v9 + 1) )
    goto LABEL_10;
LABEL_122:
  v150 = (char *)sub_80CF920(v1 + 8, v10, v11, 0x14u);
  *(_DWORD *)(v1 + 8) = v150;
  v10 = v150;
  v9 = *(_DWORD *)(v1 + 12);
  v11 = v9 + 1;
LABEL_10:
  *(_DWORD *)(v1 + 12) = v11;
  v12 = (__m128i *)&v10[20 * v9];
  si128 = _mm_load_si128((const __m128i *)&xmmword_80DE020);
  v12[1].m128i_i32[0] = v204;
  *v12 = si128;
  sub_8058670(
    *(char ***)(v1 + 4),
    off_811E240,
    *(int *)algn_811E244,
    SBYTE1(dword_811E248[0]),
    dword_811E248[0],
    dword_811E248[1],
    dword_811E248[2]);
  v14 = a1[85];
  switch ( BYTE1(dword_811E234[0]) )
  {
    case 2:
      v205 = 4;
      break;
    case 7:
      v15 = *(_DWORD *)(v14 + 12);
      v16 = *(char **)(v14 + 8);
      v205 = 8;
      v17 = v15 + 1;
      if ( *(_DWORD *)(v14 + 16) >= (unsigned int)(v15 + 1) )
        goto LABEL_15;
      goto LABEL_156;
    case 1:
      v205 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v15 = *(_DWORD *)(v14 + 12);
  v16 = *(char **)(v14 + 8);
  v17 = v15 + 1;
  if ( *(_DWORD *)(v14 + 16) >= (unsigned int)(v15 + 1) )
    goto LABEL_15;
LABEL_156:
  v166 = (char *)sub_80CF920(v14 + 8, v16, v17, 0x14u);
  *(_DWORD *)(v14 + 8) = v166;
  v16 = v166;
  v15 = *(_DWORD *)(v14 + 12);
  v17 = v15 + 1;
LABEL_15:
  *(_DWORD *)(v14 + 12) = v17;
  v18 = (__m128i *)&v16[20 * v15];
  *v18 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257988));
  v18[1].m128i_i32[0] = v205;
  sub_8058670(
    *(char ***)(v14 + 4),
    off_811E22C,
    dword_811E230,
    SBYTE1(dword_811E234[0]),
    dword_811E234[0],
    dword_811E234[1],
    dword_811E234[2]);
  v19 = a1[85];
  v20 = *(_DWORD *)(v19 + 12);
  v21 = *(char **)(v19 + 8);
  v22 = v20 + 1;
  if ( *(_DWORD *)(v19 + 16) < (unsigned int)(v20 + 1) )
  {
    v21 = (char *)sub_80CF920(v19 + 8, v21, v20 + 1, 0x14u);
    v20 = *(_DWORD *)(v19 + 12);
    *(_DWORD *)(v19 + 8) = v21;
    v22 = v20 + 1;
  }
  *(_DWORD *)(v19 + 12) = v22;
  v23 = &v21[20 * v20];
  *((_QWORD *)v23 + 1) = v181;
  *((_DWORD *)v23 + 4) = 0;
  *(_QWORD *)v23 = 0xFFFFFFFF00000003LL;
  sub_8058670(
    *(char ***)(v19 + 4),
    off_811E218,
    *(int *)algn_811E21C,
    SBYTE1(dword_811E220[0]),
    dword_811E220[0],
    dword_811E220[1],
    dword_811E220[2]);
  v24 = a1[85];
  switch ( BYTE1(dword_811E208[1]) )
  {
    case 2:
      v187 = 4;
      break;
    case 7:
      v187 = 8;
      break;
    case 1:
      v187 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v25 = *(_DWORD *)(v24 + 12);
  v26 = *(char **)(v24 + 8);
  v206 = v25;
  v27 = v25 + 1;
  if ( *(_DWORD *)(v24 + 16) < (unsigned int)(v25 + 1) )
  {
    v177 = (char *)sub_80CF920(v24 + 8, v26, v25 + 1, 0x14u);
    v25 = *(_DWORD *)(v24 + 12);
    *(_DWORD *)(v24 + 8) = v177;
    v26 = v177;
    v27 = v25 + 1;
  }
  *(_DWORD *)(v24 + 12) = v27;
  v28 = (__m128i *)&v26[20 * v25];
  v29 = _mm_load_si128((const __m128i *)&xmmword_80DE040);
  v28[1].m128i_i32[0] = v187;
  *v28 = v29;
  sub_8058670(
    *(char ***)(v24 + 4),
    (const char *)off_811E204,
    dword_811E208[0],
    SBYTE1(dword_811E208[1]),
    dword_811E208[1],
    dword_811E208[2],
    dword_811E208[3]);
  a1[127] = v206;
  v30 = a1[85];
  switch ( BYTE1(dword_811E1F4[1]) )
  {
    case 2:
      v188 = 4;
      break;
    case 7:
      v188 = 8;
      break;
    case 1:
      v188 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v31 = *(_DWORD *)(v30 + 12);
  v32 = *(char **)(v30 + 8);
  v207 = v31;
  v33 = v31 + 1;
  if ( *(_DWORD *)(v30 + 16) < (unsigned int)(v31 + 1) )
  {
    v176 = (char *)sub_80CF920(v30 + 8, v32, v31 + 1, 0x14u);
    v31 = *(_DWORD *)(v30 + 12);
    *(_DWORD *)(v30 + 8) = v176;
    v32 = v176;
    v33 = v31 + 1;
  }
  *(_DWORD *)(v30 + 12) = v33;
  v34 = (__m128i *)&v32[20 * v31];
  v35 = _mm_load_si128((const __m128i *)&xmmword_80DE050);
  v34[1].m128i_i32[0] = v188;
  *v34 = v35;
  sub_8058670(
    *(char ***)(v30 + 4),
    (const char *)off_811E1F0,
    dword_811E1F4[0],
    SBYTE1(dword_811E1F4[1]),
    dword_811E1F4[1],
    dword_811E1F4[2],
    dword_811E1F4[3]);
  a1[128] = v207;
  v36 = a1[85];
  switch ( BYTE1(dword_811E1E4[0]) )
  {
    case 2:
      v189 = 4;
      break;
    case 7:
      v189 = 8;
      break;
    case 1:
      v189 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v37 = *(_DWORD *)(v36 + 12);
  v38 = *(char **)(v36 + 8);
  v208 = v37;
  v39 = v37 + 1;
  if ( *(_DWORD *)(v36 + 16) < (unsigned int)(v37 + 1) )
  {
    v169 = (char *)sub_80CF920(v36 + 8, v38, v37 + 1, 0x14u);
    v37 = *(_DWORD *)(v36 + 12);
    *(_DWORD *)(v36 + 8) = v169;
    v38 = v169;
    v39 = v37 + 1;
  }
  *(_DWORD *)(v36 + 12) = v39;
  v40 = (__m128i *)&v38[20 * v37];
  v41 = _mm_load_si128((const __m128i *)&xmmword_80DE060);
  v40[1].m128i_i32[0] = v189;
  *v40 = v41;
  sub_8058670(
    *(char ***)(v36 + 4),
    (const char *)off_811E1DC,
    dword_811E1E0,
    SBYTE1(dword_811E1E4[0]),
    dword_811E1E4[0],
    dword_811E1E4[1],
    dword_811E1E4[2]);
  a1[129] = v208;
  v42 = a1[85];
  switch ( BYTE1(dword_811E1CC[1]) )
  {
    case 2:
      v190 = 4;
      break;
    case 7:
      v190 = 8;
      break;
    case 1:
      v190 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v43 = *(_DWORD *)(v42 + 12);
  v44 = *(char **)(v42 + 8);
  v209 = v43;
  v45 = v43 + 1;
  if ( *(_DWORD *)(v42 + 16) < (unsigned int)(v43 + 1) )
  {
    v172 = (char *)sub_80CF920(v42 + 8, v44, v43 + 1, 0x14u);
    v43 = *(_DWORD *)(v42 + 12);
    *(_DWORD *)(v42 + 8) = v172;
    v44 = v172;
    v45 = v43 + 1;
  }
  *(_DWORD *)(v42 + 12) = v45;
  v46 = (__m128i *)&v44[20 * v43];
  v47 = _mm_load_si128((const __m128i *)&xmmword_80DE070);
  v46[1].m128i_i32[0] = v190;
  *v46 = v47;
  sub_8058670(
    *(char ***)(v42 + 4),
    off_811E1C8,
    dword_811E1CC[0],
    SBYTE1(dword_811E1CC[1]),
    dword_811E1CC[1],
    dword_811E1CC[2],
    dword_811E1CC[3]);
  a1[125] = v209;
  v48 = a1[85];
  switch ( BYTE1(dword_811E1B8[1]) )
  {
    case 2:
      v191 = 4;
      break;
    case 7:
      v191 = 8;
      break;
    case 1:
      v191 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v49 = *(_DWORD *)(v48 + 12);
  v50 = *(char **)(v48 + 8);
  v210 = v49;
  v51 = v49 + 1;
  if ( *(_DWORD *)(v48 + 16) < (unsigned int)(v49 + 1) )
  {
    v171 = (char *)sub_80CF920(v48 + 8, v50, v49 + 1, 0x14u);
    v49 = *(_DWORD *)(v48 + 12);
    *(_DWORD *)(v48 + 8) = v171;
    v50 = v171;
    v51 = v49 + 1;
  }
  *(_DWORD *)(v48 + 12) = v51;
  v52 = (__m128i *)&v50[20 * v49];
  v53 = _mm_load_si128((const __m128i *)&xmmword_80DE080);
  v52[1].m128i_i32[0] = v191;
  *v52 = v53;
  sub_8058670(
    *(char ***)(v48 + 4),
    (const char *)off_811E1B4,
    dword_811E1B8[0],
    SBYTE1(dword_811E1B8[1]),
    dword_811E1B8[1],
    dword_811E1B8[2],
    dword_811E1B8[3]);
  a1[126] = v210;
  v54 = a1[85];
  switch ( BYTE1(dword_811E1A4[1]) )
  {
    case 2:
      v192 = 4;
      break;
    case 7:
      v192 = 8;
      break;
    case 1:
      v192 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v55 = *(_DWORD *)(v54 + 12);
  v56 = *(char **)(v54 + 8);
  v211 = v55;
  v57 = v55 + 1;
  if ( *(_DWORD *)(v54 + 16) < (unsigned int)(v55 + 1) )
  {
    v170 = (char *)sub_80CF920(v54 + 8, v56, v55 + 1, 0x14u);
    v55 = *(_DWORD *)(v54 + 12);
    *(_DWORD *)(v54 + 8) = v170;
    v56 = v170;
    v57 = v55 + 1;
  }
  *(_DWORD *)(v54 + 12) = v57;
  v58 = (__m128i *)&v56[20 * v55];
  v59 = _mm_load_si128((const __m128i *)&xmmword_80DE090);
  v58[1].m128i_i32[0] = v192;
  *v58 = v59;
  sub_8058670(
    *(char ***)(v54 + 4),
    (const char *)off_811E1A0,
    dword_811E1A4[0],
    SBYTE1(dword_811E1A4[1]),
    dword_811E1A4[1],
    dword_811E1A4[2],
    dword_811E1A4[3]);
  a1[130] = v211;
  v212 = a1[36];
  v60 = a1[85];
  v61 = BYTE9(xmmword_811E3B4);
  switch ( v61 )
  {
    case 2:
      v193 = 4;
      break;
    case 7:
      v62 = *(_DWORD *)(v60 + 12);
      v63 = *(char **)(v60 + 8);
      v193 = 8;
      v64 = v62 + 1;
      if ( *(_DWORD *)(v60 + 16) >= (unsigned int)(v62 + 1) )
        goto LABEL_58;
      goto LABEL_168;
    case 1:
      v193 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v62 = *(_DWORD *)(v60 + 12);
  v63 = *(char **)(v60 + 8);
  v64 = v62 + 1;
  if ( *(_DWORD *)(v60 + 16) >= (unsigned int)(v62 + 1) )
    goto LABEL_58;
LABEL_168:
  v168 = (char *)sub_80CF920(v60 + 8, v63, v64, 0x14u);
  *(_DWORD *)(v60 + 8) = v168;
  v63 = v168;
  v62 = *(_DWORD *)(v60 + 12);
  v64 = v62 + 1;
LABEL_58:
  *(_DWORD *)(v60 + 12) = v64;
  v65 = (__m128i *)&v63[20 * v62];
  v66 = _mm_load_si128((const __m128i *)&xmmword_80DE0A0);
  v65[1].m128i_i32[0] = v193;
  *v65 = v66;
  sub_8058670(
    *(char ***)(v60 + 4),
    (const char *)xmmword_811E3B4,
    DWORD1(xmmword_811E3B4),
    BYTE9(xmmword_811E3B4),
    BYTE8(xmmword_811E3B4),
    HIDWORD(xmmword_811E3B4),
    dword_811E3C4);
  v67 = a1[85];
  v68 = BYTE9(xmmword_811E3A0);
  switch ( v68 )
  {
    case 2:
      v194 = 4;
      break;
    case 7:
      v69 = *(_DWORD *)(v67 + 12);
      v70 = *(char **)(v67 + 8);
      v194 = 8;
      v71 = v69 + 1;
      if ( *(_DWORD *)(v67 + 16) >= (unsigned int)(v69 + 1) )
        goto LABEL_63;
      goto LABEL_165;
    case 1:
      v194 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v69 = *(_DWORD *)(v67 + 12);
  v70 = *(char **)(v67 + 8);
  v71 = v69 + 1;
  if ( *(_DWORD *)(v67 + 16) >= (unsigned int)(v69 + 1) )
    goto LABEL_63;
LABEL_165:
  v167 = (char *)sub_80CF920(v67 + 8, v70, v71, 0x14u);
  *(_DWORD *)(v67 + 8) = v167;
  v70 = v167;
  v69 = *(_DWORD *)(v67 + 12);
  v71 = v69 + 1;
LABEL_63:
  *(_DWORD *)(v67 + 12) = v71;
  v72 = (__m128i *)&v70[20 * v69];
  v73 = _mm_load_si128((const __m128i *)&xmmword_80DE0B0);
  v72[1].m128i_i32[0] = v194;
  *v72 = v73;
  sub_8058670(
    *(char ***)(v67 + 4),
    (const char *)xmmword_811E3A0,
    DWORD1(xmmword_811E3A0),
    BYTE9(xmmword_811E3A0),
    BYTE8(xmmword_811E3A0),
    HIDWORD(xmmword_811E3A0),
    dword_811E3B0);
  v74 = a1[85];
  v75 = BYTE9(xmmword_811E38C);
  switch ( v75 )
  {
    case 2:
      v195 = 4;
      break;
    case 7:
      v76 = *(_DWORD *)(v74 + 12);
      v77 = *(char **)(v74 + 8);
      v195 = 8;
      v78 = v76 + 1;
      if ( *(_DWORD *)(v74 + 16) >= (unsigned int)(v76 + 1) )
        goto LABEL_68;
      goto LABEL_152;
    case 1:
      v195 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v76 = *(_DWORD *)(v74 + 12);
  v77 = *(char **)(v74 + 8);
  v78 = v76 + 1;
  if ( *(_DWORD *)(v74 + 16) >= (unsigned int)(v76 + 1) )
    goto LABEL_68;
LABEL_152:
  v165 = (char *)sub_80CF920(v74 + 8, v77, v78, 0x14u);
  *(_DWORD *)(v74 + 8) = v165;
  v77 = v165;
  v76 = *(_DWORD *)(v74 + 12);
  v78 = v76 + 1;
LABEL_68:
  *(_DWORD *)(v74 + 12) = v78;
  v79 = (__m128i *)&v77[20 * v76];
  v80 = _mm_load_si128((const __m128i *)&xmmword_80DE0C0);
  v79[1].m128i_i32[0] = v195;
  *v79 = v80;
  sub_8058670(
    *(char ***)(v74 + 4),
    (const char *)xmmword_811E38C,
    DWORD1(xmmword_811E38C),
    BYTE9(xmmword_811E38C),
    BYTE8(xmmword_811E38C),
    HIDWORD(xmmword_811E38C),
    dword_811E39C);
  v81 = a1[85];
  v82 = BYTE9(xmmword_811E378);
  switch ( v82 )
  {
    case 2:
      v196 = 4;
      break;
    case 7:
      v83 = *(_DWORD *)(v81 + 12);
      v84 = *(char **)(v81 + 8);
      v196 = 8;
      v85 = v83 + 1;
      if ( *(_DWORD *)(v81 + 16) >= (unsigned int)(v83 + 1) )
        goto LABEL_73;
      goto LABEL_149;
    case 1:
      v196 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v83 = *(_DWORD *)(v81 + 12);
  v84 = *(char **)(v81 + 8);
  v85 = v83 + 1;
  if ( *(_DWORD *)(v81 + 16) >= (unsigned int)(v83 + 1) )
    goto LABEL_73;
LABEL_149:
  v164 = (char *)sub_80CF920(v81 + 8, v84, v85, 0x14u);
  *(_DWORD *)(v81 + 8) = v164;
  v84 = v164;
  v83 = *(_DWORD *)(v81 + 12);
  v85 = v83 + 1;
LABEL_73:
  *(_DWORD *)(v81 + 12) = v85;
  v86 = (__m128i *)&v84[20 * v83];
  v87 = _mm_load_si128((const __m128i *)&xmmword_80DE0D0);
  v86[1].m128i_i32[0] = v196;
  *v86 = v87;
  sub_8058670(
    *(char ***)(v81 + 4),
    (const char *)xmmword_811E378,
    DWORD1(xmmword_811E378),
    BYTE9(xmmword_811E378),
    BYTE8(xmmword_811E378),
    HIDWORD(xmmword_811E378),
    dword_811E388);
  v88 = a1[85];
  v89 = BYTE9(xmmword_811E364);
  switch ( v89 )
  {
    case 2:
      v197 = 4;
      break;
    case 7:
      v90 = *(_DWORD *)(v88 + 12);
      v91 = *(char **)(v88 + 8);
      v197 = 8;
      v92 = v90 + 1;
      if ( *(_DWORD *)(v88 + 16) >= (unsigned int)(v90 + 1) )
        goto LABEL_78;
      goto LABEL_146;
    case 1:
      v197 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v90 = *(_DWORD *)(v88 + 12);
  v91 = *(char **)(v88 + 8);
  v92 = v90 + 1;
  if ( *(_DWORD *)(v88 + 16) >= (unsigned int)(v90 + 1) )
    goto LABEL_78;
LABEL_146:
  v163 = (char *)sub_80CF920(v88 + 8, v91, v92, 0x14u);
  *(_DWORD *)(v88 + 8) = v163;
  v91 = v163;
  v90 = *(_DWORD *)(v88 + 12);
  v92 = v90 + 1;
LABEL_78:
  *(_DWORD *)(v88 + 12) = v92;
  v93 = (__m128i *)&v91[20 * v90];
  v94 = _mm_load_si128((const __m128i *)&xmmword_80DE0E0);
  v93[1].m128i_i32[0] = v197;
  *v93 = v94;
  sub_8058670(
    *(char ***)(v88 + 4),
    (const char *)xmmword_811E364,
    DWORD1(xmmword_811E364),
    BYTE9(xmmword_811E364),
    BYTE8(xmmword_811E364),
    HIDWORD(xmmword_811E364),
    dword_811E374);
  v95 = a1[85];
  v96 = BYTE9(xmmword_811E350);
  switch ( v96 )
  {
    case 2:
      v198 = 4;
      break;
    case 7:
      v97 = *(_DWORD *)(v95 + 12);
      v98 = *(char **)(v95 + 8);
      v198 = 8;
      v99 = v97 + 1;
      if ( *(_DWORD *)(v95 + 16) >= (unsigned int)(v97 + 1) )
        goto LABEL_83;
      goto LABEL_143;
    case 1:
      v198 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v97 = *(_DWORD *)(v95 + 12);
  v98 = *(char **)(v95 + 8);
  v99 = v97 + 1;
  if ( *(_DWORD *)(v95 + 16) >= (unsigned int)(v97 + 1) )
    goto LABEL_83;
LABEL_143:
  v162 = (char *)sub_80CF920(v95 + 8, v98, v99, 0x14u);
  *(_DWORD *)(v95 + 8) = v162;
  v98 = v162;
  v97 = *(_DWORD *)(v95 + 12);
  v99 = v97 + 1;
LABEL_83:
  *(_DWORD *)(v95 + 12) = v99;
  v100 = (__m128i *)&v98[20 * v97];
  v101 = _mm_load_si128((const __m128i *)&xmmword_80DE0F0);
  v100[1].m128i_i32[0] = v198;
  *v100 = v101;
  sub_8058670(
    *(char ***)(v95 + 4),
    (const char *)xmmword_811E350,
    DWORD1(xmmword_811E350),
    BYTE9(xmmword_811E350),
    BYTE8(xmmword_811E350),
    HIDWORD(xmmword_811E350),
    dword_811E360);
  v102 = a1[85];
  v103 = BYTE9(xmmword_811E33C);
  switch ( v103 )
  {
    case 2:
      v199 = 4;
      break;
    case 7:
      v104 = *(_DWORD *)(v102 + 12);
      v105 = *(char **)(v102 + 8);
      v199 = 8;
      v106 = v104 + 1;
      if ( *(_DWORD *)(v102 + 16) >= (unsigned int)(v104 + 1) )
        goto LABEL_88;
      goto LABEL_140;
    case 1:
      v199 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v104 = *(_DWORD *)(v102 + 12);
  v105 = *(char **)(v102 + 8);
  v106 = v104 + 1;
  if ( *(_DWORD *)(v102 + 16) >= (unsigned int)(v104 + 1) )
    goto LABEL_88;
LABEL_140:
  v161 = (char *)sub_80CF920(v102 + 8, v105, v106, 0x14u);
  *(_DWORD *)(v102 + 8) = v161;
  v105 = v161;
  v104 = *(_DWORD *)(v102 + 12);
  v106 = v104 + 1;
LABEL_88:
  *(_DWORD *)(v102 + 12) = v106;
  v107 = (__m128i *)&v105[20 * v104];
  v108 = _mm_load_si128((const __m128i *)&xmmword_80DE100);
  v107[1].m128i_i32[0] = v199;
  *v107 = v108;
  sub_8058670(
    *(char ***)(v102 + 4),
    (const char *)xmmword_811E33C,
    DWORD1(xmmword_811E33C),
    BYTE9(xmmword_811E33C),
    BYTE8(xmmword_811E33C),
    HIDWORD(xmmword_811E33C),
    dword_811E34C);
  v109 = a1[85];
  v110 = BYTE9(xmmword_811E328);
  switch ( v110 )
  {
    case 2:
      v182 = 4;
      break;
    case 7:
      v182 = 8;
      break;
    case 1:
      v182 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v111 = *(_DWORD *)(v109 + 12);
  v112 = *(char **)(v109 + 8);
  v200 = v111;
  v113 = v111 + 1;
  if ( *(_DWORD *)(v109 + 16) < (unsigned int)(v111 + 1) )
  {
    v175 = (char *)sub_80CF920(v109 + 8, v112, v111 + 1, 0x14u);
    v111 = *(_DWORD *)(v109 + 12);
    *(_DWORD *)(v109 + 8) = v175;
    v112 = v175;
    v113 = v111 + 1;
  }
  *(_DWORD *)(v109 + 12) = v113;
  v114 = (__m128i *)&v112[20 * v111];
  v115 = _mm_load_si128((const __m128i *)&xmmword_80DE110);
  v114[1].m128i_i32[0] = v182;
  *v114 = v115;
  sub_8058670(
    *(char ***)(v109 + 4),
    (const char *)xmmword_811E328,
    DWORD1(xmmword_811E328),
    BYTE9(xmmword_811E328),
    BYTE8(xmmword_811E328),
    HIDWORD(xmmword_811E328),
    dword_811E338);
  a1[100] = v200;
  v116 = a1[85];
  v117 = BYTE9(xmmword_811E314);
  switch ( v117 )
  {
    case 2:
      v183 = 4;
      break;
    case 7:
      v183 = 8;
      break;
    case 1:
      v183 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
      goto LABEL_177;
  }
  v118 = *(_DWORD *)(v116 + 12);
  v119 = *(char **)(v116 + 8);
  v201 = v118;
  v120 = v118 + 1;
  if ( *(_DWORD *)(v116 + 16) < (unsigned int)(v118 + 1) )
  {
    v174 = (char *)sub_80CF920(v116 + 8, v119, v118 + 1, 0x14u);
    v118 = *(_DWORD *)(v116 + 12);
    *(_DWORD *)(v116 + 8) = v174;
    v119 = v174;
    v120 = v118 + 1;
  }
  *(_DWORD *)(v116 + 12) = v120;
  v121 = (__m128i *)&v119[20 * v118];
  v122 = _mm_load_si128((const __m128i *)&xmmword_80DE120);
  v121[1].m128i_i32[0] = v183;
  *v121 = v122;
  sub_8058670(
    *(char ***)(v116 + 4),
    (const char *)xmmword_811E314,
    DWORD1(xmmword_811E314),
    BYTE9(xmmword_811E314),
    BYTE8(xmmword_811E314),
    HIDWORD(xmmword_811E314),
    dword_811E324);
  a1[101] = v201;
  v123 = a1[85];
  switch ( BYTE1(dword_811E308[0]) )
  {
    case 2:
      v184 = 4;
      break;
    case 7:
      v184 = 8;
      break;
    case 1:
      v184 = 2;
      break;
    default:
      if ( byte_811F8A1 )
        goto LABEL_211;
LABEL_177:
      sub_80CFF40(1798, v178, v179, v180);
  }
  v124 = *(_DWORD *)(v123 + 12);
  v125 = *(char **)(v123 + 8);
  v202 = v124;
  v126 = v124 + 1;
  if ( *(_DWORD *)(v123 + 16) < (unsigned int)(v124 + 1) )
  {
    v173 = (char *)sub_80CF920(v123 + 8, v125, v124 + 1, 0x14u);
    v124 = *(_DWORD *)(v123 + 12);
    *(_DWORD *)(v123 + 8) = v173;
    v125 = v173;
    v126 = v124 + 1;
  }
  *(_DWORD *)(v123 + 12) = v126;
  v127 = (__m128i *)&v125[20 * v124];
  v128 = _mm_load_si128((const __m128i *)&xmmword_80DE130);
  v127[1].m128i_i32[0] = v184;
  *v127 = v128;
  sub_8058670(
    *(char ***)(v123 + 4),
    off_811E300,
    *(int *)algn_811E304,
    SBYTE1(dword_811E308[0]),
    dword_811E308[0],
    dword_811E308[1],
    dword_811E308[2]);
  a1[124] = v202;
  v129 = &off_811E060;
  v185 = v212 != 8;
  v213 = 0;
  do
  {
    v130 = a1[85];
    v131 = 16 * v213 + 392;
    v132 = *(_DWORD *)(v130 + 12);
    v133 = *(char **)(v130 + 8);
    v134 = v132 + 1;
    if ( *(_DWORD *)(v130 + 16) < (unsigned int)(v132 + 1) )
    {
      v151 = (char *)sub_80CF920(v130 + 8, v133, v134, 0x14u);
      v131 = 16 * v213 + 392;
      *(_DWORD *)(v130 + 8) = v151;
      v133 = v151;
      v132 = *(_DWORD *)(v130 + 12);
      v134 = v132 + 1;
    }
    *(_DWORD *)(v130 + 12) = v134;
    v135 = &v133[20 * v132];
    *((_DWORD *)v135 + 2) = v131;
    *((_DWORD *)v135 + 3) = 16;
    *((_DWORD *)v135 + 4) = 16;
    *(_QWORD *)v135 = 0xFFFFFFFF00000002LL;
    sub_8058670(
      *(char ***)(v130 + 4),
      *v129,
      (int)v129[1],
      *((_BYTE *)v129 + 9),
      *((_BYTE *)v129 + 8),
      (int)v129[3],
      (int)v129[4]);
    if ( ++v213 == 16 )
      break;
    v129 += 5;
  }
  while ( v213 <= 7 || !v185 );
  v136 = a1[85];
  if ( BYTE1(dword_811E048[0]) != 2 )
  {
    if ( BYTE1(dword_811E048[0]) == 7 )
    {
      v137 = *(_DWORD *)(v136 + 12);
      v138 = *(char **)(v136 + 8);
      v214 = 8;
      v139 = v137 + 1;
      if ( *(_DWORD *)(v136 + 16) >= (unsigned int)(v137 + 1) )
        goto LABEL_117;
LABEL_131:
      v160 = (char *)sub_80CF920(v136 + 8, v138, v139, 0x14u);
      *(_DWORD *)(v136 + 8) = v160;
      v138 = v160;
      v137 = *(_DWORD *)(v136 + 12);
      v139 = v137 + 1;
      goto LABEL_117;
    }
    if ( BYTE1(dword_811E048[0]) == 1 )
    {
      v214 = 2;
      goto LABEL_116;
    }
LABEL_176:
    if ( !byte_811F8A1 )
      goto LABEL_177;
LABEL_211:
    BUG();
  }
  v214 = 4;
LABEL_116:
  v137 = *(_DWORD *)(v136 + 12);
  v138 = *(char **)(v136 + 8);
  v139 = v137 + 1;
  if ( *(_DWORD *)(v136 + 16) < (unsigned int)(v137 + 1) )
    goto LABEL_131;
LABEL_117:
  *(_DWORD *)(v136 + 12) = v139;
  v140 = (__m128i *)&v138[20 * v137];
  v141 = _mm_load_si128((const __m128i *)&xmmword_80DE140);
  v140[1].m128i_i32[0] = v214;
  *v140 = v141;
  sub_8058670(
    *(char ***)(v136 + 4),
    off_811E040,
    *(int *)algn_811E044,
    SBYTE1(dword_811E048[0]),
    dword_811E048[0],
    dword_811E048[1],
    dword_811E048[2]);
  v142 = &off_811DFA0;
  v215 = 152;
  do
  {
    v145 = a1[85];
    v146 = *(_DWORD *)(v145 + 12);
    v147 = *(char **)(v145 + 8);
    v148 = v146 + 1;
    if ( *(_DWORD *)(v145 + 16) < (unsigned int)(v146 + 1) )
    {
      v149 = (char *)sub_80CF920(v145 + 8, v147, v148, 0x14u);
      *(_DWORD *)(v145 + 8) = v149;
      v147 = v149;
      v146 = *(_DWORD *)(v145 + 12);
      v148 = v146 + 1;
    }
    *(_DWORD *)(v145 + 12) = v148;
    v143 = &v147[20 * v146];
    v144 = v215;
    v142 += 5;
    *((_DWORD *)v143 + 3) = 8;
    *((_DWORD *)v143 + 2) = v215;
    *((_DWORD *)v143 + 4) = 8;
    *(_QWORD *)v143 = 0xFFFFFFFF00000002LL;
    sub_8058670(
      *(char ***)(v145 + 4),
      (const char *)*(v142 - 5),
      (int)*(v142 - 4),
      *((_BYTE *)v142 - 11),
      *((_BYTE *)v142 - 12),
      (int)*(v142 - 2),
      (int)*(v142 - 1));
    v215 += 10;
  }
  while ( v144 != 222 );
  v152 = &off_811DE60;
  v216 = 0;
  do
  {
    v153 = a1[85];
    v154 = *(_DWORD *)(v153 + 12);
    v155 = *(char **)(v153 + 8);
    v156 = v154 + 1;
    if ( *(_DWORD *)(v153 + 16) < (unsigned int)(v154 + 1) )
    {
      v155 = (char *)sub_80CF920(v153 + 8, v155, v154 + 1, 0x14u);
      v154 = *(_DWORD *)(v153 + 12);
      *(_DWORD *)(v153 + 8) = v155;
      v156 = v154 + 1;
    }
    v157 = v216;
    *(_DWORD *)(v153 + 12) = v156;
    v158 = &v155[20 * v154];
    *((_DWORD *)v158 + 4) = v216;
    *(_QWORD *)v158 = 0xFFFFFFFF00000003LL;
    *((_QWORD *)v158 + 1) = v186;
    result = sub_8058670(
               *(char ***)(v153 + 4),
               *v152,
               (int)v152[1],
               *((_BYTE *)v152 + 9),
               *((_BYTE *)v152 + 8),
               (int)v152[3],
               (int)v152[4]);
    ++v216;
    if ( v157 == 15 )
      break;
    v152 += 5;
  }
  while ( v216 <= 7 || !v185 );
  return result;
}
// 805D1C0: variable 'v178' is possibly undefined
// 805D1C0: variable 'v179' is possibly undefined
// 805D1C0: variable 'v180' is possibly undefined
// 80DE020: using guessed type __int128 xmmword_80DE020;
// 80DE040: using guessed type __int128 xmmword_80DE040;
// 80DE050: using guessed type __int128 xmmword_80DE050;
// 80DE060: using guessed type __int128 xmmword_80DE060;
// 80DE070: using guessed type __int128 xmmword_80DE070;
// 80DE080: using guessed type __int128 xmmword_80DE080;
// 80DE090: using guessed type __int128 xmmword_80DE090;
// 80DE0A0: using guessed type __int128 xmmword_80DE0A0;
// 80DE0B0: using guessed type __int128 xmmword_80DE0B0;
// 80DE0C0: using guessed type __int128 xmmword_80DE0C0;
// 80DE0D0: using guessed type __int128 xmmword_80DE0D0;
// 80DE0E0: using guessed type __int128 xmmword_80DE0E0;
// 80DE0F0: using guessed type __int128 xmmword_80DE0F0;
// 80DE100: using guessed type __int128 xmmword_80DE100;
// 80DE110: using guessed type __int128 xmmword_80DE110;
// 80DE120: using guessed type __int128 xmmword_80DE120;
// 80DE130: using guessed type __int128 xmmword_80DE130;
// 80DE140: using guessed type __int128 xmmword_80DE140;
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811DE60: using guessed type char *off_811DE60;
// 811DFA0: using guessed type _UNKNOWN *off_811DFA0;
// 811E040: using guessed type char *off_811E040;
// 811E044: using guessed type _BYTE[4];
// 811E048: using guessed type int[6];
// 811E060: using guessed type char *off_811E060;
// 811E1A0: using guessed type _UNKNOWN *off_811E1A0;
// 811E1A4: using guessed type int[4];
// 811E1B4: using guessed type _UNKNOWN *off_811E1B4;
// 811E1B8: using guessed type int[4];
// 811E1C8: using guessed type char *off_811E1C8;
// 811E1CC: using guessed type int[4];
// 811E1DC: using guessed type _UNKNOWN *off_811E1DC;
// 811E1E0: using guessed type int;
// 811E1E4: using guessed type int[3];
// 811E1F0: using guessed type _UNKNOWN *off_811E1F0;
// 811E1F4: using guessed type int[4];
// 811E204: using guessed type _UNKNOWN *off_811E204;
// 811E208: using guessed type int[4];
// 811E218: using guessed type char *off_811E218;
// 811E21C: using guessed type _BYTE[4];
// 811E220: using guessed type int[3];
// 811E22C: using guessed type char *off_811E22C;
// 811E230: using guessed type int;
// 811E234: using guessed type int[3];
// 811E240: using guessed type char *off_811E240;
// 811E244: using guessed type _BYTE[4];
// 811E248: using guessed type int[6];
// 811E260: using guessed type char *off_811E260;
// 811E300: using guessed type char *off_811E300;
// 811E304: using guessed type _BYTE[4];
// 811E308: using guessed type int[3];
// 811E314: using guessed type __int128 xmmword_811E314;
// 811E324: using guessed type int dword_811E324;
// 811E328: using guessed type __int128 xmmword_811E328;
// 811E338: using guessed type int dword_811E338;
// 811E33C: using guessed type __int128 xmmword_811E33C;
// 811E34C: using guessed type int dword_811E34C;
// 811E350: using guessed type __int128 xmmword_811E350;
// 811E360: using guessed type int dword_811E360;
// 811E364: using guessed type __int128 xmmword_811E364;
// 811E374: using guessed type int dword_811E374;
// 811E378: using guessed type __int128 xmmword_811E378;
// 811E388: using guessed type int dword_811E388;
// 811E38C: using guessed type __int128 xmmword_811E38C;
// 811E39C: using guessed type int dword_811E39C;
// 811E3A0: using guessed type __int128 xmmword_811E3A0;
// 811E3B0: using guessed type int dword_811E3B0;
// 811E3B4: using guessed type __int128 xmmword_811E3B4;
// 811E3C4: using guessed type int dword_811E3C4;
// 811F8A1: using guessed type char byte_811F8A1;
