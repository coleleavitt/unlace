/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45810
// Address: 0x0000000000045810

//----- (0000000000045810) ----------------------------------------------------
char __fastcall sub_45810(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // r15
  __int64 i; // rbp
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _DWORD *v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rbp
  __int64 v17; // r14
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int64 *v23; // rbx
  _QWORD *v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  _DWORD *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rbp
  __int64 v30; // r14
  _QWORD *v31; // rdi
  __int64 v32; // rbx
  unsigned __int64 v33; // rdx
  _DWORD *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // rbp
  __int64 v38; // r14
  _QWORD *v39; // rdi
  __int64 v40; // rbx
  unsigned __int64 v41; // rdx
  _DWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 *v45; // rbp
  __int64 v46; // r14
  _QWORD *v47; // rdi
  __int64 v48; // rbx
  unsigned __int64 v49; // rdx
  _DWORD *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 *v53; // rbp
  __int64 v54; // r14
  _QWORD *v55; // rdi
  __int64 v56; // rbx
  unsigned __int64 v57; // rdx
  _DWORD *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 *v61; // rbp
  __int64 v62; // r14
  _QWORD *v63; // rdi
  __int64 v64; // rbx
  unsigned __int64 v65; // rdx
  _DWORD *v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 *v69; // rbp
  __int64 v70; // r14
  _QWORD *v71; // rdi
  __int64 v72; // rbx
  unsigned __int64 v73; // rdx
  _DWORD *v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v77; // r12d
  __int64 *v78; // rbx
  __int64 v79; // r14
  __int64 v80; // r14
  _QWORD *v81; // rdi
  __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  _DWORD *v84; // rax
  __int64 v85; // rcx
  __int64 *v86; // rbp
  __int64 v87; // r14
  _QWORD *v88; // rdi
  __int64 v89; // rcx
  unsigned __int64 v90; // rdx
  _DWORD *v91; // rax
  __int64 v92; // rcx
  __int64 *v93; // rbp
  __int64 v94; // r14
  _QWORD *v95; // rdi
  __int64 v96; // rcx
  unsigned __int64 v97; // rdx
  _DWORD *v98; // rax
  __int64 v99; // rcx
  __int64 *v100; // rbp
  __int64 v101; // r14
  _QWORD *v102; // rdi
  __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  _DWORD *v105; // rax
  __int64 v106; // rcx
  __int64 *v107; // rbp
  __int64 v108; // r14
  _QWORD *v109; // rdi
  __int64 v110; // rcx
  unsigned __int64 v111; // rdx
  _DWORD *v112; // rax
  __int64 v113; // rcx
  __int64 *v114; // rbp
  __int64 v115; // r14
  _QWORD *v116; // rdi
  __int64 v117; // rcx
  unsigned __int64 v118; // rdx
  _DWORD *v119; // rax
  __int64 v120; // rcx
  __int64 *v121; // rbp
  __int64 v122; // r14
  _QWORD *v123; // rdi
  __int64 v124; // rcx
  unsigned __int64 v125; // rdx
  _DWORD *v126; // rax
  __int64 v127; // rcx
  __int64 *v128; // rbp
  __int64 v129; // r14
  _QWORD *v130; // rdi
  __int64 v131; // rcx
  unsigned __int64 v132; // rdx
  _DWORD *v133; // rax
  __int64 v134; // rcx
  __int64 *v135; // rbp
  __int64 v136; // r14
  _QWORD *v137; // rdi
  __int64 v138; // rcx
  unsigned __int64 v139; // rdx
  _DWORD *v140; // rax
  __int64 v141; // rcx
  __int64 *v142; // rbp
  __int64 v143; // r14
  _QWORD *v144; // rdi
  __int64 v145; // rcx
  unsigned __int64 v146; // rdx
  _DWORD *v147; // rax
  __int64 v148; // rcx
  __int64 *v149; // rbp
  __int64 v150; // r14
  _QWORD *v151; // rdi
  __int64 v152; // rcx
  unsigned __int64 v153; // rdx
  _DWORD *v154; // rax
  __int64 v155; // rcx
  __int64 *v156; // rbp
  __int64 v157; // r14
  _QWORD *v158; // rdi
  __int64 v159; // rcx
  unsigned __int64 v160; // rdx
  _DWORD *v161; // rax
  __int64 v162; // rcx
  __int64 *v163; // rbp
  __int64 v164; // r14
  _QWORD *v165; // rdi
  __int64 v166; // rcx
  unsigned __int64 v167; // rdx
  _DWORD *v168; // rax
  __int64 v169; // rcx
  __int64 *v170; // rbp
  __int64 v171; // r14
  _QWORD *v172; // rdi
  __int64 v173; // rcx
  unsigned __int64 v174; // rdx
  _DWORD *v175; // rax
  __int64 v176; // rcx
  __int64 *v177; // rbp
  __int64 v178; // r14
  _QWORD *v179; // rdi
  __int64 v180; // rbx
  unsigned __int64 v181; // rdx
  _DWORD *v182; // rax
  __int64 v183; // rcx
  __int64 v184; // rcx
  __int64 v185; // rax
  __int64 *v186; // rbp
  __int64 v187; // r14
  _QWORD *v188; // rdi
  __int64 v189; // rbx
  unsigned __int64 v190; // rdx
  _DWORD *v191; // rax
  __int64 v192; // rcx
  __int64 v193; // rcx
  __int64 v194; // rax
  __int64 *v195; // rbp
  __int64 v196; // r14
  _QWORD *v197; // rdi
  __int64 v198; // rbx
  unsigned __int64 v199; // rdx
  _DWORD *v200; // rax
  __int64 v201; // rcx
  __int64 v202; // rcx
  __int64 v203; // rax
  __int64 *v204; // rbp
  __int64 v205; // r14
  _QWORD *v206; // rdi
  __int64 v207; // rbx
  unsigned __int64 v208; // rdx
  _DWORD *v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rcx
  _QWORD *v212; // rdi
  __int64 v213; // rcx
  unsigned __int64 v214; // rdx
  _DWORD *v215; // rax
  __int64 v216; // rcx
  __int64 *v217; // rbp
  __int64 v218; // r14
  _QWORD *v219; // rdi
  __int64 v220; // rcx
  unsigned __int64 v221; // rdx
  _DWORD *v222; // rax
  __int64 v223; // rcx
  __int64 *v224; // rbp
  __int64 v225; // r14
  _QWORD *v226; // rdi
  __int64 v227; // rcx
  unsigned __int64 v228; // rdx
  _DWORD *v229; // rax
  __int64 v230; // rcx
  __int64 *v231; // rbp
  __int64 v232; // r14
  _QWORD *v233; // rdi
  __int64 v234; // rcx
  unsigned __int64 v235; // rdx
  _DWORD *v236; // rax
  __int64 v237; // rcx
  __int64 *v238; // rbp
  __int64 v239; // r14
  _QWORD *v240; // rdi
  __int64 v241; // rcx
  unsigned __int64 v242; // rdx
  _DWORD *v243; // rax
  __int64 v244; // rcx
  __int64 *v245; // rbp
  __int64 v246; // r14
  _QWORD *v247; // rdi
  __int64 v248; // rcx
  unsigned __int64 v249; // rdx
  _DWORD *v250; // rax
  __int64 v251; // rcx
  __int64 *v252; // rbp
  __int64 v253; // r14
  _QWORD *v254; // rdi
  __int64 v255; // rcx
  unsigned __int64 v256; // rdx
  _DWORD *v257; // rax
  __int64 v258; // rcx
  __int64 *v259; // rbp
  __int64 v260; // r14
  _QWORD *v261; // rdi
  __int64 v262; // rcx
  unsigned __int64 v263; // rdx
  _DWORD *v264; // rax
  __int64 v265; // rcx
  __int64 *v266; // rbp
  __int64 v267; // r14
  _QWORD *v268; // rdi
  __int64 v269; // rbx
  unsigned __int64 v270; // rdx
  _DWORD *v271; // rax
  __int64 v272; // rcx
  bool v273; // r12
  __int64 v274; // rcx
  __int64 v275; // rbx
  unsigned __int64 j; // r13
  __int64 *v277; // rbp
  _QWORD *v278; // rdi
  __int64 v279; // rcx
  unsigned __int64 v280; // rdx
  _DWORD *v281; // rax
  __int64 v282; // rcx
  __int64 *v283; // rbp
  __int64 v284; // r14
  _QWORD *v285; // rdi
  __int64 v286; // rcx
  unsigned __int64 v287; // rdx
  _DWORD *v288; // rax
  __int64 v289; // rcx
  __int64 k; // rbx
  __int64 *v291; // rbp
  _QWORD *v292; // rdi
  __int64 v293; // rcx
  unsigned __int64 v294; // rdx
  _DWORD *v295; // rax
  __int64 v296; // rcx
  __int64 *v297; // rbp
  unsigned __int64 v298; // r14
  char result; // al
  __int64 *v300; // rbx
  _QWORD *v301; // rdi
  __int64 v302; // rcx
  unsigned __int64 v303; // rdx
  _DWORD *v304; // rax
  __int64 v305; // rcx
  __m128i v306[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = (__int64 *)operator new(0xDD0u);
  sub_45190((__int64)v2, a1 + 544);
  v3 = a1 + 536;
  *(_QWORD *)(a1 + 536) = v2;
  for ( i = 84; i != 116; i += 4 )
  {
    v5 = v2 + 2;
    v6 = v2[3];
    v7 = v6 + 1;
    if ( v2[4] >= (unsigned __int64)(v6 + 1) )
    {
      v8 = (_DWORD *)*v5;
    }
    else
    {
      v8 = qvector_reserve((__int64)v5, (char *)v2[2], v7, 0x28u);
      v2[2] = (__int64)v8;
      v6 = v2[3];
      v7 = v6 + 1;
    }
    v2[3] = v7;
    v9 = 5 * v6;
    v8[2 * v9] = 1;
    *(_QWORD *)&v8[2 * v9 + 2] = -1;
    *(_QWORD *)&v8[2 * v9 + 4] = i * 4;
    *(__m128i *)&v8[2 * v9 + 6] = _mm_load_si128((const __m128i *)&xmmword_FE0E0);
    sub_4B040(
      v2[1],
      (&off_154ED0)[i - 84],
      (int)(&off_154ED0)[i - 83],
      *((_BYTE *)&off_154ED0 + 8 * i - 659),
      *((_BYTE *)&off_154ED0 + 8 * i - 660),
      (__int64)(&off_154ED0)[i - 82],
      (__int64)(&off_154ED0)[i - 81]);
    v2 = *(__int64 **)v3;
  }
  switch ( BYTE5(qword_154FD8) )
  {
    case 1:
      v10 = 2;
      break;
    case 7:
      v10 = 8;
      break;
    case 2:
      v10 = 4;
      break;
    default:
      goto LABEL_354;
  }
  v11 = v2 + 2;
  v12 = v2[3];
  v13 = v12 + 1;
  if ( v2[4] >= (unsigned __int64)(v12 + 1) )
  {
    v14 = (_DWORD *)*v11;
  }
  else
  {
    v14 = qvector_reserve((__int64)v11, (char *)v2[2], v13, 0x28u);
    v2[2] = (__int64)v14;
    v12 = v2[3];
    v13 = v12 + 1;
  }
  v2[3] = v13;
  v15 = 5 * v12;
  v14[2 * v15] = 0;
  *(__m128i *)&v14[2 * v15 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE0F0);
  *(_QWORD *)&v14[2 * v15 + 6] = 2;
  *(_QWORD *)&v14[2 * v15 + 8] = v10;
  sub_4B040(
    v2[1],
    off_154FD0,
    qword_154FD8,
    SBYTE5(qword_154FD8),
    SBYTE4(qword_154FD8),
    (__int64)off_154FE0,
    qword_154FE8);
  v16 = *(__int64 **)v3;
  switch ( BYTE5(qword_154FF8) )
  {
    case 1:
      v17 = 2;
      break;
    case 7:
      v17 = 8;
      break;
    case 2:
      v17 = 4;
      break;
    default:
      goto LABEL_354;
  }
  v18 = v16 + 2;
  v19 = v16[3];
  v20 = v19 + 1;
  if ( v16[4] >= (unsigned __int64)(v19 + 1) )
  {
    v21 = (_DWORD *)*v18;
  }
  else
  {
    v21 = qvector_reserve((__int64)v18, (char *)v16[2], v20, 0x28u);
    v16[2] = (__int64)v21;
    v19 = v16[3];
    v20 = v19 + 1;
  }
  v16[3] = v20;
  v22 = 5 * v19;
  v21[2 * v22] = 0;
  *(_OWORD *)&v21[2 * v22 + 2] = xmmword_FE100;
  *(_QWORD *)&v21[2 * v22 + 6] = 2;
  *(_QWORD *)&v21[2 * v22 + 8] = v17;
  sub_4B040(
    v16[1],
    off_154FF0,
    qword_154FF8,
    SBYTE5(qword_154FF8),
    SBYTE4(qword_154FF8),
    (__int64)off_155000,
    qword_155008);
  v23 = *(__int64 **)v3;
  v24 = (_QWORD *)(*(_QWORD *)v3 + 16LL);
  v25 = *(_QWORD *)(*(_QWORD *)v3 + 24LL);
  v26 = v25 + 1;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 32LL) >= (unsigned __int64)(v25 + 1) )
  {
    v27 = (_DWORD *)*v24;
  }
  else
  {
    v27 = qvector_reserve((__int64)v24, (char *)v23[2], v26, 0x28u);
    v23[2] = (__int64)v27;
    v25 = v23[3];
    v26 = v25 + 1;
  }
  v23[3] = v26;
  v28 = 5 * v25;
  v27[2 * v28] = 3;
  *(_QWORD *)&v27[2 * v28 + 2] = -1;
  *(__m128i *)&v27[2 * v28 + 4] = _mm_unpacklo_epi64(
                                    (__m128i)(unsigned __int64)sub_47780,
                                    (__m128i)(unsigned __int64)sub_478F0);
  *(_QWORD *)&v27[2 * v28 + 8] = 0;
  sub_4B040(
    v23[1],
    off_155010,
    qword_155018,
    SBYTE5(qword_155018),
    SBYTE4(qword_155018),
    (__int64)off_155020,
    qword_155028);
  v29 = *(__int64 **)v3;
  switch ( BYTE5(qword_155038[0]) )
  {
    case 1:
      v30 = 2;
      break;
    case 7:
      v30 = 8;
      break;
    case 2:
      v30 = 4;
      break;
    default:
      goto LABEL_354;
  }
  v31 = v29 + 2;
  v32 = v29[3];
  v33 = v32 + 1;
  if ( v29[4] >= (unsigned __int64)(v32 + 1) )
  {
    v34 = (_DWORD *)*v31;
    v35 = v29[3];
  }
  else
  {
    v34 = qvector_reserve((__int64)v31, (char *)v29[2], v33, 0x28u);
    v29[2] = (__int64)v34;
    v35 = v29[3];
    v33 = v35 + 1;
  }
  v29[3] = v33;
  v36 = 5 * v35;
  v34[2 * v36] = 0;
  *(__m128i *)&v34[2 * v36 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE110);
  *(_QWORD *)&v34[2 * v36 + 6] = 8;
  *(_QWORD *)&v34[2 * v36 + 8] = v30;
  sub_4B040(
    v29[1],
    off_155030,
    qword_155038[0],
    SBYTE5(qword_155038[0]),
    SBYTE4(qword_155038[0]),
    qword_155038[1],
    qword_155038[2]);
  *(_DWORD *)(a1 + 804) = v32;
  v37 = *(__int64 **)(a1 + 536);
  switch ( BYTE5(qword_155058[0]) )
  {
    case 1:
      v38 = 2;
      break;
    case 7:
      v38 = 8;
      break;
    case 2:
      v38 = 4;
      break;
    default:
      goto LABEL_354;
  }
  v39 = v37 + 2;
  v40 = v37[3];
  v41 = v40 + 1;
  if ( v37[4] >= (unsigned __int64)(v40 + 1) )
  {
    v42 = (_DWORD *)*v39;
    v43 = v37[3];
  }
  else
  {
    v42 = qvector_reserve((__int64)v39, (char *)v37[2], v41, 0x28u);
    v37[2] = (__int64)v42;
    v43 = v37[3];
    v41 = v43 + 1;
  }
  v37[3] = v41;
  v44 = 5 * v43;
  v42[2 * v44] = 0;
  *(__m128i *)&v42[2 * v44 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE120);
  *(_QWORD *)&v42[2 * v44 + 6] = 8;
  *(_QWORD *)&v42[2 * v44 + 8] = v38;
  sub_4B040(
    v37[1],
    off_155050,
    qword_155058[0],
    SBYTE5(qword_155058[0]),
    SBYTE4(qword_155058[0]),
    qword_155058[1],
    qword_155058[2]);
  *(_DWORD *)(a1 + 808) = v40;
  v45 = *(__int64 **)(a1 + 536);
  switch ( BYTE5(qword_155078[0]) )
  {
    case 1:
      v46 = 2;
      break;
    case 7:
      v46 = 8;
      break;
    case 2:
      v46 = 4;
      break;
    default:
      goto LABEL_354;
  }
  v47 = v45 + 2;
  v48 = v45[3];
  v49 = v48 + 1;
  if ( v45[4] >= (unsigned __int64)(v48 + 1) )
  {
    v50 = (_DWORD *)*v47;
    v51 = v45[3];
  }
  else
  {
    v50 = qvector_reserve((__int64)v47, (char *)v45[2], v49, 0x28u);
    v45[2] = (__int64)v50;
    v51 = v45[3];
    v49 = v51 + 1;
  }
  v45[3] = v49;
  v52 = 5 * v51;
  v50[2 * v52] = 0;
  *(__m128i *)&v50[2 * v52 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE130);
  *(_QWORD *)&v50[2 * v52 + 6] = 8;
  *(_QWORD *)&v50[2 * v52 + 8] = v46;
  sub_4B040(
    v45[1],
    off_155070,
    qword_155078[0],
    SBYTE5(qword_155078[0]),
    SBYTE4(qword_155078[0]),
    qword_155078[1],
    qword_155078[2]);
  *(_DWORD *)(a1 + 812) = v48;
  v53 = *(__int64 **)(a1 + 536);
  switch ( BYTE5(qword_155098[0]) )
  {
    case 1:
      v54 = 2;
      break;
    case 7:
      v54 = 8;
      break;
    case 2:
      v54 = 4;
      break;
    default:
      goto LABEL_354;
  }
  v55 = v53 + 2;
  v56 = v53[3];
  v57 = v56 + 1;
  if ( v53[4] >= (unsigned __int64)(v56 + 1) )
  {
    v58 = (_DWORD *)*v55;
    v59 = v53[3];
  }
  else
  {
    v58 = qvector_reserve((__int64)v55, (char *)v53[2], v57, 0x28u);
    v53[2] = (__int64)v58;
    v59 = v53[3];
    v57 = v59 + 1;
  }
  v53[3] = v57;
  v60 = 5 * v59;
  v58[2 * v60] = 0;
  *(__m128i *)&v58[2 * v60 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE140);
  *(_QWORD *)&v58[2 * v60 + 6] = 8;
  *(_QWORD *)&v58[2 * v60 + 8] = v54;
  sub_4B040(
    v53[1],
    off_155090,
    qword_155098[0],
    SBYTE5(qword_155098[0]),
    SBYTE4(qword_155098[0]),
    qword_155098[1],
    qword_155098[2]);
  *(_DWORD *)(a1 + 796) = v56;
  v61 = *(__int64 **)(a1 + 536);
  switch ( BYTE5(qword_1550B8[0]) )
  {
    case 1:
      v62 = 2;
      break;
    case 7:
      v62 = 8;
      break;
    case 2:
      v62 = 4;
      break;
    default:
      goto LABEL_354;
  }
  v63 = v61 + 2;
  v64 = v61[3];
  v65 = v64 + 1;
  if ( v61[4] >= (unsigned __int64)(v64 + 1) )
  {
    v66 = (_DWORD *)*v63;
    v67 = v61[3];
  }
  else
  {
    v66 = qvector_reserve((__int64)v63, (char *)v61[2], v65, 0x28u);
    v61[2] = (__int64)v66;
    v67 = v61[3];
    v65 = v67 + 1;
  }
  v61[3] = v65;
  v68 = 5 * v67;
  v66[2 * v68] = 0;
  *(__m128i *)&v66[2 * v68 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE150);
  *(_QWORD *)&v66[2 * v68 + 6] = 8;
  *(_QWORD *)&v66[2 * v68 + 8] = v62;
  sub_4B040(
    v61[1],
    off_1550B0,
    qword_1550B8[0],
    SBYTE5(qword_1550B8[0]),
    SBYTE4(qword_1550B8[0]),
    qword_1550B8[1],
    qword_1550B8[2]);
  *(_DWORD *)(a1 + 800) = v64;
  v69 = *(__int64 **)(a1 + 536);
  switch ( BYTE5(qword_1550D8[0]) )
  {
    case 1:
      v70 = 2;
      break;
    case 7:
      v70 = 8;
      break;
    case 2:
      v70 = 4;
      break;
    default:
      goto LABEL_354;
  }
  v71 = v69 + 2;
  v72 = v69[3];
  v73 = v72 + 1;
  if ( v69[4] >= (unsigned __int64)(v72 + 1) )
  {
    v74 = (_DWORD *)*v71;
    v75 = v69[3];
  }
  else
  {
    v74 = qvector_reserve((__int64)v71, (char *)v69[2], v73, 0x28u);
    v69[2] = (__int64)v74;
    v75 = v69[3];
    v73 = v75 + 1;
  }
  v69[3] = v73;
  v76 = 5 * v75;
  v74[2 * v76] = 0;
  *(__m128i *)&v74[2 * v76 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE160);
  *(_QWORD *)&v74[2 * v76 + 6] = 8;
  *(_QWORD *)&v74[2 * v76 + 8] = v70;
  sub_4B040(
    v69[1],
    off_1550D0,
    qword_1550D8[0],
    SBYTE5(qword_1550D8[0]),
    SBYTE4(qword_1550D8[0]),
    qword_1550D8[1],
    qword_1550D8[2]);
  *(_DWORD *)(a1 + 816) = v72;
  v77 = *(_DWORD *)(a1 + 244);
  v78 = *(__int64 **)(a1 + 536);
  v306[0].m128i_i64[0] = a1;
  if ( v77 == 8 )
  {
    switch ( BYTE5(qword_154B70) )
    {
      case 1:
        v79 = 2;
        break;
      case 7:
        v79 = 8;
        break;
      case 2:
        v79 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v81 = v78 + 2;
    v82 = v78[3];
    v83 = v82 + 1;
    if ( v78[4] >= (unsigned __int64)(v82 + 1) )
    {
      v84 = (_DWORD *)*v81;
    }
    else
    {
      v84 = qvector_reserve((__int64)v81, (char *)v78[2], v83, 0x28u);
      v78[2] = (__int64)v84;
      v82 = v78[3];
      v83 = v82 + 1;
    }
    v78[3] = v83;
    v85 = 5 * v82;
    v84[2 * v85] = 0;
    *(__m128i *)&v84[2 * v85 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE170);
    *(_QWORD *)&v84[2 * v85 + 6] = 8;
    *(_QWORD *)&v84[2 * v85 + 8] = v79;
    sub_4B040(
      v78[1],
      off_154B68,
      qword_154B70,
      SBYTE5(qword_154B70),
      SBYTE4(qword_154B70),
      xmmword_154B78,
      *((__int64 *)&xmmword_154B78 + 1));
    v86 = *(__int64 **)v3;
    switch ( BYTE5(qword_154B90) )
    {
      case 1:
        v87 = 2;
        break;
      case 7:
        v87 = 8;
        break;
      case 2:
        v87 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v95 = v86 + 2;
    v96 = v86[3];
    v97 = v96 + 1;
    if ( v86[4] >= (unsigned __int64)(v96 + 1) )
    {
      v98 = (_DWORD *)*v95;
    }
    else
    {
      v98 = qvector_reserve((__int64)v95, (char *)v86[2], v97, 0x28u);
      v86[2] = (__int64)v98;
      v96 = v86[3];
      v97 = v96 + 1;
    }
    v86[3] = v97;
    v99 = 5 * v96;
    v98[2 * v99] = 0;
    *(__m128i *)&v98[2 * v99 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE180);
    *(_QWORD *)&v98[2 * v99 + 6] = 8;
    *(_QWORD *)&v98[2 * v99 + 8] = v87;
    sub_4B040(
      v86[1],
      off_154B88,
      qword_154B90,
      SBYTE5(qword_154B90),
      SBYTE4(qword_154B90),
      xmmword_154B98,
      *((__int64 *)&xmmword_154B98 + 1));
    v100 = *(__int64 **)v3;
    switch ( BYTE5(qword_154BB0) )
    {
      case 1:
        v101 = 2;
        break;
      case 7:
        v101 = 8;
        break;
      case 2:
        v101 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v109 = v100 + 2;
    v110 = v100[3];
    v111 = v110 + 1;
    if ( v100[4] >= (unsigned __int64)(v110 + 1) )
    {
      v112 = (_DWORD *)*v109;
    }
    else
    {
      v112 = qvector_reserve((__int64)v109, (char *)v100[2], v111, 0x28u);
      v100[2] = (__int64)v112;
      v110 = v100[3];
      v111 = v110 + 1;
    }
    v100[3] = v111;
    v113 = 5 * v110;
    v112[2 * v113] = 0;
    *(__m128i *)&v112[2 * v113 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE190);
    *(_QWORD *)&v112[2 * v113 + 6] = 8;
    *(_QWORD *)&v112[2 * v113 + 8] = v101;
    sub_4B040(
      v100[1],
      off_154BA8,
      qword_154BB0,
      SBYTE5(qword_154BB0),
      SBYTE4(qword_154BB0),
      xmmword_154BB8,
      *((__int64 *)&xmmword_154BB8 + 1));
    v114 = *(__int64 **)v3;
    switch ( BYTE5(qword_154BD0) )
    {
      case 1:
        v115 = 2;
        break;
      case 7:
        v115 = 8;
        break;
      case 2:
        v115 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v123 = v114 + 2;
    v124 = v114[3];
    v125 = v124 + 1;
    if ( v114[4] >= (unsigned __int64)(v124 + 1) )
    {
      v126 = (_DWORD *)*v123;
    }
    else
    {
      v126 = qvector_reserve((__int64)v123, (char *)v114[2], v125, 0x28u);
      v114[2] = (__int64)v126;
      v124 = v114[3];
      v125 = v124 + 1;
    }
    v114[3] = v125;
    v127 = 5 * v124;
    v126[2 * v127] = 0;
    *(__m128i *)&v126[2 * v127 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1A0);
    *(_QWORD *)&v126[2 * v127 + 6] = 8;
    *(_QWORD *)&v126[2 * v127 + 8] = v115;
    sub_4B040(
      v114[1],
      off_154BC8,
      qword_154BD0,
      SBYTE5(qword_154BD0),
      SBYTE4(qword_154BD0),
      xmmword_154BD8,
      *((__int64 *)&xmmword_154BD8 + 1));
    v128 = *(__int64 **)v3;
    switch ( BYTE5(qword_154BF0) )
    {
      case 1:
        v129 = 2;
        break;
      case 7:
        v129 = 8;
        break;
      case 2:
        v129 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v137 = v128 + 2;
    v138 = v128[3];
    v139 = v138 + 1;
    if ( v128[4] >= (unsigned __int64)(v138 + 1) )
    {
      v140 = (_DWORD *)*v137;
    }
    else
    {
      v140 = qvector_reserve((__int64)v137, (char *)v128[2], v139, 0x28u);
      v128[2] = (__int64)v140;
      v138 = v128[3];
      v139 = v138 + 1;
    }
    v128[3] = v139;
    v141 = 5 * v138;
    v140[2 * v141] = 0;
    *(__m128i *)&v140[2 * v141 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1B0);
    *(_QWORD *)&v140[2 * v141 + 6] = 8;
    *(_QWORD *)&v140[2 * v141 + 8] = v129;
    sub_4B040(
      v128[1],
      off_154BE8,
      qword_154BF0,
      SBYTE5(qword_154BF0),
      SBYTE4(qword_154BF0),
      xmmword_154BF8,
      *((__int64 *)&xmmword_154BF8 + 1));
    v142 = *(__int64 **)v3;
    switch ( BYTE5(qword_154C10) )
    {
      case 1:
        v143 = 2;
        break;
      case 7:
        v143 = 8;
        break;
      case 2:
        v143 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v151 = v142 + 2;
    v152 = v142[3];
    v153 = v152 + 1;
    if ( v142[4] >= (unsigned __int64)(v152 + 1) )
    {
      v154 = (_DWORD *)*v151;
    }
    else
    {
      v154 = qvector_reserve((__int64)v151, (char *)v142[2], v153, 0x28u);
      v142[2] = (__int64)v154;
      v152 = v142[3];
      v153 = v152 + 1;
    }
    v142[3] = v153;
    v155 = 5 * v152;
    v154[2 * v155] = 0;
    *(__m128i *)&v154[2 * v155 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1C0);
    *(_QWORD *)&v154[2 * v155 + 6] = 8;
    *(_QWORD *)&v154[2 * v155 + 8] = v143;
    sub_4B040(
      v142[1],
      off_154C08,
      qword_154C10,
      SBYTE5(qword_154C10),
      SBYTE4(qword_154C10),
      xmmword_154C18,
      *((__int64 *)&xmmword_154C18 + 1));
    v156 = *(__int64 **)v3;
    switch ( BYTE5(qword_154C30) )
    {
      case 1:
        v157 = 2;
        break;
      case 7:
        v157 = 8;
        break;
      case 2:
        v157 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v165 = v156 + 2;
    v166 = v156[3];
    v167 = v166 + 1;
    if ( v156[4] >= (unsigned __int64)(v166 + 1) )
    {
      v168 = (_DWORD *)*v165;
    }
    else
    {
      v168 = qvector_reserve((__int64)v165, (char *)v156[2], v167, 0x28u);
      v156[2] = (__int64)v168;
      v166 = v156[3];
      v167 = v166 + 1;
    }
    v156[3] = v167;
    v169 = 5 * v166;
    v168[2 * v169] = 0;
    *(__m128i *)&v168[2 * v169 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1D0);
    *(_QWORD *)&v168[2 * v169 + 6] = 8;
    *(_QWORD *)&v168[2 * v169 + 8] = v157;
    sub_4B040(
      v156[1],
      off_154C28,
      qword_154C30,
      SBYTE5(qword_154C30),
      SBYTE4(qword_154C30),
      xmmword_154C38,
      *((__int64 *)&xmmword_154C38 + 1));
    v170 = *(__int64 **)v3;
    switch ( BYTE5(qword_154C50) )
    {
      case 1:
        v171 = 2;
        break;
      case 7:
        v171 = 8;
        break;
      case 2:
        v171 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v179 = v170 + 2;
    v180 = v170[3];
    v181 = v180 + 1;
    if ( v170[4] >= (unsigned __int64)(v180 + 1) )
    {
      v182 = (_DWORD *)*v179;
      v183 = v170[3];
    }
    else
    {
      v182 = qvector_reserve((__int64)v179, (char *)v170[2], v181, 0x28u);
      v170[2] = (__int64)v182;
      v183 = v170[3];
      v181 = v183 + 1;
    }
    v170[3] = v181;
    v184 = 5 * v183;
    v182[2 * v184] = 0;
    *(__m128i *)&v182[2 * v184 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1E0);
    *(_QWORD *)&v182[2 * v184 + 6] = 8;
    *(_QWORD *)&v182[2 * v184 + 8] = v171;
    sub_4B040(
      v170[1],
      off_154C48,
      qword_154C50,
      SBYTE5(qword_154C50),
      SBYTE4(qword_154C50),
      xmmword_154C58,
      *((__int64 *)&xmmword_154C58 + 1));
    v185 = v306[0].m128i_i64[0];
    *(_DWORD *)(v306[0].m128i_i64[0] + 652) = v180;
    v186 = *(__int64 **)(v185 + 536);
    switch ( BYTE5(qword_154C70) )
    {
      case 1:
        v187 = 2;
        break;
      case 7:
        v187 = 8;
        break;
      case 2:
        v187 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v197 = v186 + 2;
    v198 = v186[3];
    v199 = v198 + 1;
    if ( v186[4] >= (unsigned __int64)(v198 + 1) )
    {
      v200 = (_DWORD *)*v197;
      v201 = v186[3];
    }
    else
    {
      v200 = qvector_reserve((__int64)v197, (char *)v186[2], v199, 0x28u);
      v186[2] = (__int64)v200;
      v201 = v186[3];
      v199 = v201 + 1;
    }
    v186[3] = v199;
    v202 = 5 * v201;
    v200[2 * v202] = 0;
    *(__m128i *)&v200[2 * v202 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1F0);
    *(_QWORD *)&v200[2 * v202 + 6] = 8;
    *(_QWORD *)&v200[2 * v202 + 8] = v187;
    sub_4B040(
      v186[1],
      off_154C68,
      qword_154C70,
      SBYTE5(qword_154C70),
      SBYTE4(qword_154C70),
      xmmword_154C78,
      *((__int64 *)&xmmword_154C78 + 1));
    v203 = v306[0].m128i_i64[0];
    *(_DWORD *)(v306[0].m128i_i64[0] + 656) = v198;
    v204 = *(__int64 **)(v203 + 536);
    switch ( BYTE5(qword_154C90) )
    {
      case 1:
        v205 = 2;
        break;
      case 7:
        v205 = 8;
        break;
      case 2:
        v205 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v212 = v204 + 2;
    v213 = v204[3];
    v214 = v213 + 1;
    if ( v204[4] >= (unsigned __int64)(v213 + 1) )
    {
      v215 = (_DWORD *)*v212;
    }
    else
    {
      v215 = qvector_reserve((__int64)v212, (char *)v204[2], v214, 0x28u);
      v204[2] = (__int64)v215;
      v213 = v204[3];
      v214 = v213 + 1;
    }
    v204[3] = v214;
    v216 = 5 * v213;
    v215[2 * v216] = 0;
    *(__m128i *)&v215[2 * v216 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE200);
    *(_QWORD *)&v215[2 * v216 + 6] = 8;
    *(_QWORD *)&v215[2 * v216 + 8] = v205;
    sub_4B040(
      v204[1],
      off_154C88,
      qword_154C90,
      SBYTE5(qword_154C90),
      SBYTE4(qword_154C90),
      xmmword_154C98,
      *((__int64 *)&xmmword_154C98 + 1));
    v217 = *(__int64 **)v3;
    switch ( BYTE5(qword_154CB0) )
    {
      case 1:
        v218 = 2;
        break;
      case 7:
        v218 = 8;
        break;
      case 2:
        v218 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v219 = v217 + 2;
    v220 = v217[3];
    v221 = v220 + 1;
    if ( v217[4] >= (unsigned __int64)(v220 + 1) )
    {
      v222 = (_DWORD *)*v219;
    }
    else
    {
      v222 = qvector_reserve((__int64)v219, (char *)v217[2], v221, 0x28u);
      v217[2] = (__int64)v222;
      v220 = v217[3];
      v221 = v220 + 1;
    }
    v217[3] = v221;
    v223 = 5 * v220;
    v222[2 * v223] = 0;
    *(__m128i *)&v222[2 * v223 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE210);
    *(_QWORD *)&v222[2 * v223 + 6] = 8;
    *(_QWORD *)&v222[2 * v223 + 8] = v218;
    sub_4B040(
      v217[1],
      off_154CA8,
      qword_154CB0,
      SBYTE5(qword_154CB0),
      SBYTE4(qword_154CB0),
      xmmword_154CB8,
      *((__int64 *)&xmmword_154CB8 + 1));
    v224 = *(__int64 **)v3;
    switch ( BYTE5(qword_154CD0) )
    {
      case 1:
        v225 = 2;
        break;
      case 7:
        v225 = 8;
        break;
      case 2:
        v225 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v226 = v224 + 2;
    v227 = v224[3];
    v228 = v227 + 1;
    if ( v224[4] >= (unsigned __int64)(v227 + 1) )
    {
      v229 = (_DWORD *)*v226;
    }
    else
    {
      v229 = qvector_reserve((__int64)v226, (char *)v224[2], v228, 0x28u);
      v224[2] = (__int64)v229;
      v227 = v224[3];
      v228 = v227 + 1;
    }
    v224[3] = v228;
    v230 = 5 * v227;
    v229[2 * v230] = 0;
    *(__m128i *)&v229[2 * v230 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE220);
    *(_QWORD *)&v229[2 * v230 + 6] = 8;
    *(_QWORD *)&v229[2 * v230 + 8] = v225;
    sub_4B040(
      v224[1],
      off_154CC8,
      qword_154CD0,
      SBYTE5(qword_154CD0),
      SBYTE4(qword_154CD0),
      xmmword_154CD8,
      *((__int64 *)&xmmword_154CD8 + 1));
    v231 = *(__int64 **)v3;
    switch ( BYTE5(qword_154CF0) )
    {
      case 1:
        v232 = 2;
        break;
      case 7:
        v232 = 8;
        break;
      case 2:
        v232 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v233 = v231 + 2;
    v234 = v231[3];
    v235 = v234 + 1;
    if ( v231[4] >= (unsigned __int64)(v234 + 1) )
    {
      v236 = (_DWORD *)*v233;
    }
    else
    {
      v236 = qvector_reserve((__int64)v233, (char *)v231[2], v235, 0x28u);
      v231[2] = (__int64)v236;
      v234 = v231[3];
      v235 = v234 + 1;
    }
    v231[3] = v235;
    v237 = 5 * v234;
    v236[2 * v237] = 0;
    *(__m128i *)&v236[2 * v237 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE230);
    *(_QWORD *)&v236[2 * v237 + 6] = 8;
    *(_QWORD *)&v236[2 * v237 + 8] = v232;
    sub_4B040(
      v231[1],
      off_154CE8,
      qword_154CF0,
      SBYTE5(qword_154CF0),
      SBYTE4(qword_154CF0),
      xmmword_154CF8,
      *((__int64 *)&xmmword_154CF8 + 1));
    v238 = *(__int64 **)v3;
    switch ( BYTE5(qword_154D10) )
    {
      case 1:
        v239 = 2;
        break;
      case 7:
        v239 = 8;
        break;
      case 2:
        v239 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v240 = v238 + 2;
    v241 = v238[3];
    v242 = v241 + 1;
    if ( v238[4] >= (unsigned __int64)(v241 + 1) )
    {
      v243 = (_DWORD *)*v240;
    }
    else
    {
      v243 = qvector_reserve((__int64)v240, (char *)v238[2], v242, 0x28u);
      v238[2] = (__int64)v243;
      v241 = v238[3];
      v242 = v241 + 1;
    }
    v238[3] = v242;
    v244 = 5 * v241;
    v243[2 * v244] = 0;
    *(__m128i *)&v243[2 * v244 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE240);
    *(_QWORD *)&v243[2 * v244 + 6] = 8;
    *(_QWORD *)&v243[2 * v244 + 8] = v239;
    sub_4B040(
      v238[1],
      off_154D08,
      qword_154D10,
      SBYTE5(qword_154D10),
      SBYTE4(qword_154D10),
      xmmword_154D18,
      *((__int64 *)&xmmword_154D18 + 1));
    v245 = *(__int64 **)v3;
    switch ( BYTE5(qword_154D30) )
    {
      case 1:
        v246 = 2;
        break;
      case 7:
        v246 = 8;
        break;
      case 2:
        v246 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v247 = v245 + 2;
    v248 = v245[3];
    v249 = v248 + 1;
    if ( v245[4] >= (unsigned __int64)(v248 + 1) )
    {
      v250 = (_DWORD *)*v247;
    }
    else
    {
      v250 = qvector_reserve((__int64)v247, (char *)v245[2], v249, 0x28u);
      v245[2] = (__int64)v250;
      v248 = v245[3];
      v249 = v248 + 1;
    }
    v245[3] = v249;
    v251 = 5 * v248;
    v250[2 * v251] = 0;
    *(__m128i *)&v250[2 * v251 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE250);
    *(_QWORD *)&v250[2 * v251 + 6] = 8;
    *(_QWORD *)&v250[2 * v251 + 8] = v246;
    sub_4B040(
      v245[1],
      off_154D28,
      qword_154D30,
      SBYTE5(qword_154D30),
      SBYTE4(qword_154D30),
      xmmword_154D38,
      *((__int64 *)&xmmword_154D38 + 1));
    v252 = *(__int64 **)v3;
    switch ( BYTE5(qword_154D50) )
    {
      case 1:
        v253 = 2;
        break;
      case 7:
        v253 = 8;
        break;
      case 2:
        v253 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v254 = v252 + 2;
    v255 = v252[3];
    v256 = v255 + 1;
    if ( v252[4] >= (unsigned __int64)(v255 + 1) )
    {
      v257 = (_DWORD *)*v254;
    }
    else
    {
      v257 = qvector_reserve((__int64)v254, (char *)v252[2], v256, 0x28u);
      v252[2] = (__int64)v257;
      v255 = v252[3];
      v256 = v255 + 1;
    }
    v252[3] = v256;
    v258 = 5 * v255;
    v257[2 * v258] = 0;
    *(__m128i *)&v257[2 * v258 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE260);
    *(_QWORD *)&v257[2 * v258 + 6] = 8;
    *(_QWORD *)&v257[2 * v258 + 8] = v253;
    sub_4B040(
      v252[1],
      off_154D48,
      qword_154D50,
      SBYTE5(qword_154D50),
      SBYTE4(qword_154D50),
      xmmword_154D58,
      *((__int64 *)&xmmword_154D58 + 1));
    v259 = *(__int64 **)v3;
    switch ( BYTE5(qword_154D70) )
    {
      case 1:
        v260 = 2;
        break;
      case 7:
        v260 = 8;
        break;
      case 2:
        v260 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v261 = v259 + 2;
    v262 = v259[3];
    v263 = v262 + 1;
    if ( v259[4] >= (unsigned __int64)(v262 + 1) )
    {
      v264 = (_DWORD *)*v261;
    }
    else
    {
      v264 = qvector_reserve((__int64)v261, (char *)v259[2], v263, 0x28u);
      v259[2] = (__int64)v264;
      v262 = v259[3];
      v263 = v262 + 1;
    }
    v259[3] = v263;
    v265 = 5 * v262;
    v264[2 * v265] = 0;
    *(__m128i *)&v264[2 * v265 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE270);
    *(_QWORD *)&v264[2 * v265 + 6] = 8;
    *(_QWORD *)&v264[2 * v265 + 8] = v260;
    sub_4B040(
      v259[1],
      off_154D68,
      qword_154D70,
      SBYTE5(qword_154D70),
      SBYTE4(qword_154D70),
      xmmword_154D78,
      *((__int64 *)&xmmword_154D78 + 1));
  }
  else
  {
    switch ( BYTE5(qword_154D90) )
    {
      case 1:
        v80 = 2;
        break;
      case 7:
        v80 = 8;
        break;
      case 2:
        v80 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v88 = v78 + 2;
    v89 = v78[3];
    v90 = v89 + 1;
    if ( v78[4] >= (unsigned __int64)(v89 + 1) )
    {
      v91 = (_DWORD *)*v88;
    }
    else
    {
      v91 = qvector_reserve((__int64)v88, (char *)v78[2], v90, 0x28u);
      v78[2] = (__int64)v91;
      v89 = v78[3];
      v90 = v89 + 1;
    }
    v78[3] = v90;
    v92 = 5 * v89;
    v91[2 * v92] = 0;
    *(__m128i *)&v91[2 * v92 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE170);
    *(_QWORD *)&v91[2 * v92 + 6] = 8;
    *(_QWORD *)&v91[2 * v92 + 8] = v80;
    sub_4B040(
      v78[1],
      off_154D88,
      qword_154D90,
      SBYTE5(qword_154D90),
      SBYTE4(qword_154D90),
      xmmword_154D98,
      *((__int64 *)&xmmword_154D98 + 1));
    v93 = *(__int64 **)v3;
    switch ( BYTE5(qword_154DB0) )
    {
      case 1:
        v94 = 2;
        break;
      case 7:
        v94 = 8;
        break;
      case 2:
        v94 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v102 = v93 + 2;
    v103 = v93[3];
    v104 = v103 + 1;
    if ( v93[4] >= (unsigned __int64)(v103 + 1) )
    {
      v105 = (_DWORD *)*v102;
    }
    else
    {
      v105 = qvector_reserve((__int64)v102, (char *)v93[2], v104, 0x28u);
      v93[2] = (__int64)v105;
      v103 = v93[3];
      v104 = v103 + 1;
    }
    v93[3] = v104;
    v106 = 5 * v103;
    v105[2 * v106] = 0;
    *(__m128i *)&v105[2 * v106 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE180);
    *(_QWORD *)&v105[2 * v106 + 6] = 8;
    *(_QWORD *)&v105[2 * v106 + 8] = v94;
    sub_4B040(
      v93[1],
      off_154DA8,
      qword_154DB0,
      SBYTE5(qword_154DB0),
      SBYTE4(qword_154DB0),
      xmmword_154DB8,
      *((__int64 *)&xmmword_154DB8 + 1));
    v107 = *(__int64 **)v3;
    switch ( BYTE5(qword_154DD0) )
    {
      case 1:
        v108 = 2;
        break;
      case 7:
        v108 = 8;
        break;
      case 2:
        v108 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v116 = v107 + 2;
    v117 = v107[3];
    v118 = v117 + 1;
    if ( v107[4] >= (unsigned __int64)(v117 + 1) )
    {
      v119 = (_DWORD *)*v116;
    }
    else
    {
      v119 = qvector_reserve((__int64)v116, (char *)v107[2], v118, 0x28u);
      v107[2] = (__int64)v119;
      v117 = v107[3];
      v118 = v117 + 1;
    }
    v107[3] = v118;
    v120 = 5 * v117;
    v119[2 * v120] = 0;
    *(__m128i *)&v119[2 * v120 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE190);
    *(_QWORD *)&v119[2 * v120 + 6] = 8;
    *(_QWORD *)&v119[2 * v120 + 8] = v108;
    sub_4B040(
      v107[1],
      off_154DC8,
      qword_154DD0,
      SBYTE5(qword_154DD0),
      SBYTE4(qword_154DD0),
      xmmword_154DD8,
      *((__int64 *)&xmmword_154DD8 + 1));
    v121 = *(__int64 **)v3;
    switch ( BYTE5(qword_154DF0) )
    {
      case 1:
        v122 = 2;
        break;
      case 7:
        v122 = 8;
        break;
      case 2:
        v122 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v130 = v121 + 2;
    v131 = v121[3];
    v132 = v131 + 1;
    if ( v121[4] >= (unsigned __int64)(v131 + 1) )
    {
      v133 = (_DWORD *)*v130;
    }
    else
    {
      v133 = qvector_reserve((__int64)v130, (char *)v121[2], v132, 0x28u);
      v121[2] = (__int64)v133;
      v131 = v121[3];
      v132 = v131 + 1;
    }
    v121[3] = v132;
    v134 = 5 * v131;
    v133[2 * v134] = 0;
    *(__m128i *)&v133[2 * v134 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1A0);
    *(_QWORD *)&v133[2 * v134 + 6] = 8;
    *(_QWORD *)&v133[2 * v134 + 8] = v122;
    sub_4B040(
      v121[1],
      off_154DE8,
      qword_154DF0,
      SBYTE5(qword_154DF0),
      SBYTE4(qword_154DF0),
      xmmword_154DF8,
      *((__int64 *)&xmmword_154DF8 + 1));
    v135 = *(__int64 **)v3;
    switch ( BYTE5(qword_154E10) )
    {
      case 1:
        v136 = 2;
        break;
      case 7:
        v136 = 8;
        break;
      case 2:
        v136 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v144 = v135 + 2;
    v145 = v135[3];
    v146 = v145 + 1;
    if ( v135[4] >= (unsigned __int64)(v145 + 1) )
    {
      v147 = (_DWORD *)*v144;
    }
    else
    {
      v147 = qvector_reserve((__int64)v144, (char *)v135[2], v146, 0x28u);
      v135[2] = (__int64)v147;
      v145 = v135[3];
      v146 = v145 + 1;
    }
    v135[3] = v146;
    v148 = 5 * v145;
    v147[2 * v148] = 0;
    *(__m128i *)&v147[2 * v148 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1B0);
    *(_QWORD *)&v147[2 * v148 + 6] = 8;
    *(_QWORD *)&v147[2 * v148 + 8] = v136;
    sub_4B040(
      v135[1],
      off_154E08,
      qword_154E10,
      SBYTE5(qword_154E10),
      SBYTE4(qword_154E10),
      xmmword_154E18,
      *((__int64 *)&xmmword_154E18 + 1));
    v149 = *(__int64 **)v3;
    switch ( BYTE5(qword_154E30) )
    {
      case 1:
        v150 = 2;
        break;
      case 7:
        v150 = 8;
        break;
      case 2:
        v150 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v158 = v149 + 2;
    v159 = v149[3];
    v160 = v159 + 1;
    if ( v149[4] >= (unsigned __int64)(v159 + 1) )
    {
      v161 = (_DWORD *)*v158;
    }
    else
    {
      v161 = qvector_reserve((__int64)v158, (char *)v149[2], v160, 0x28u);
      v149[2] = (__int64)v161;
      v159 = v149[3];
      v160 = v159 + 1;
    }
    v149[3] = v160;
    v162 = 5 * v159;
    v161[2 * v162] = 0;
    *(__m128i *)&v161[2 * v162 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1C0);
    *(_QWORD *)&v161[2 * v162 + 6] = 8;
    *(_QWORD *)&v161[2 * v162 + 8] = v150;
    sub_4B040(
      v149[1],
      off_154E28,
      qword_154E30,
      SBYTE5(qword_154E30),
      SBYTE4(qword_154E30),
      xmmword_154E38,
      *((__int64 *)&xmmword_154E38 + 1));
    v163 = *(__int64 **)v3;
    switch ( BYTE5(qword_154E50) )
    {
      case 1:
        v164 = 2;
        break;
      case 7:
        v164 = 8;
        break;
      case 2:
        v164 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v172 = v163 + 2;
    v173 = v163[3];
    v174 = v173 + 1;
    if ( v163[4] >= (unsigned __int64)(v173 + 1) )
    {
      v175 = (_DWORD *)*v172;
    }
    else
    {
      v175 = qvector_reserve((__int64)v172, (char *)v163[2], v174, 0x28u);
      v163[2] = (__int64)v175;
      v173 = v163[3];
      v174 = v173 + 1;
    }
    v163[3] = v174;
    v176 = 5 * v173;
    v175[2 * v176] = 0;
    *(__m128i *)&v175[2 * v176 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1D0);
    *(_QWORD *)&v175[2 * v176 + 6] = 8;
    *(_QWORD *)&v175[2 * v176 + 8] = v164;
    sub_4B040(
      v163[1],
      off_154E48,
      qword_154E50,
      SBYTE5(qword_154E50),
      SBYTE4(qword_154E50),
      xmmword_154E58,
      *((__int64 *)&xmmword_154E58 + 1));
    v177 = *(__int64 **)v3;
    switch ( BYTE5(qword_154E70) )
    {
      case 1:
        v178 = 2;
        break;
      case 7:
        v178 = 8;
        break;
      case 2:
        v178 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v188 = v177 + 2;
    v189 = v177[3];
    v190 = v189 + 1;
    if ( v177[4] >= (unsigned __int64)(v189 + 1) )
    {
      v191 = (_DWORD *)*v188;
      v192 = v177[3];
    }
    else
    {
      v191 = qvector_reserve((__int64)v188, (char *)v177[2], v190, 0x28u);
      v177[2] = (__int64)v191;
      v192 = v177[3];
      v190 = v192 + 1;
    }
    v177[3] = v190;
    v193 = 5 * v192;
    v191[2 * v193] = 0;
    *(__m128i *)&v191[2 * v193 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1E0);
    *(_QWORD *)&v191[2 * v193 + 6] = 8;
    *(_QWORD *)&v191[2 * v193 + 8] = v178;
    sub_4B040(
      v177[1],
      off_154E68,
      qword_154E70,
      SBYTE5(qword_154E70),
      SBYTE4(qword_154E70),
      xmmword_154E78,
      *((__int64 *)&xmmword_154E78 + 1));
    v194 = v306[0].m128i_i64[0];
    *(_DWORD *)(v306[0].m128i_i64[0] + 652) = v189;
    v195 = *(__int64 **)(v194 + 536);
    switch ( BYTE5(qword_154E90) )
    {
      case 1:
        v196 = 2;
        break;
      case 7:
        v196 = 8;
        break;
      case 2:
        v196 = 4;
        break;
      default:
        goto LABEL_354;
    }
    v206 = v195 + 2;
    v207 = v195[3];
    v208 = v207 + 1;
    if ( v195[4] >= (unsigned __int64)(v207 + 1) )
    {
      v209 = (_DWORD *)*v206;
      v210 = v195[3];
    }
    else
    {
      v209 = qvector_reserve((__int64)v206, (char *)v195[2], v208, 0x28u);
      v195[2] = (__int64)v209;
      v210 = v195[3];
      v208 = v210 + 1;
    }
    v195[3] = v208;
    v211 = 5 * v210;
    v209[2 * v211] = 0;
    *(__m128i *)&v209[2 * v211 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE1F0);
    *(_QWORD *)&v209[2 * v211 + 6] = 8;
    *(_QWORD *)&v209[2 * v211 + 8] = v196;
    sub_4B040(
      v195[1],
      off_154E88,
      qword_154E90,
      SBYTE5(qword_154E90),
      SBYTE4(qword_154E90),
      xmmword_154E98,
      *((__int64 *)&xmmword_154E98 + 1));
    *(_DWORD *)(v306[0].m128i_i64[0] + 656) = v207;
  }
  v266 = *(__int64 **)v3;
  switch ( BYTE5(qword_154EB0) )
  {
    case 1:
      v267 = 2;
      break;
    case 7:
      v267 = 8;
      break;
    case 2:
      v267 = 4;
      break;
    default:
      goto LABEL_354;
  }
  v268 = v266 + 2;
  v269 = v266[3];
  v270 = v269 + 1;
  if ( v266[4] >= (unsigned __int64)(v269 + 1) )
  {
    v271 = (_DWORD *)*v268;
    v272 = v266[3];
  }
  else
  {
    v271 = qvector_reserve((__int64)v268, (char *)v266[2], v270, 0x28u);
    v266[2] = (__int64)v271;
    v272 = v266[3];
    v270 = v272 + 1;
  }
  v273 = v77 != 8;
  v266[3] = v270;
  v274 = 5 * v272;
  v271[2 * v274] = 0;
  *(__m128i *)&v271[2 * v274 + 2] = _mm_load_si128((const __m128i *)&xmmword_FE280);
  *(_QWORD *)&v271[2 * v274 + 6] = 8;
  *(_QWORD *)&v271[2 * v274 + 8] = v267;
  sub_4B040(
    v266[1],
    off_154EA8,
    qword_154EB0,
    SBYTE5(qword_154EB0),
    SBYTE4(qword_154EB0),
    (__int64)off_154EB8,
    qword_154EC0[0]);
  *(_DWORD *)(v306[0].m128i_i64[0] + 792) = v269;
  v275 = 116;
  for ( j = 0; j < 0x10; ++j )
  {
    if ( v273 && j > 7 )
      break;
    v277 = *(__int64 **)v3;
    v278 = (_QWORD *)(*(_QWORD *)v3 + 16LL);
    v279 = *(_QWORD *)(*(_QWORD *)v3 + 24LL);
    v280 = v279 + 1;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 32LL) >= (unsigned __int64)(v279 + 1) )
    {
      v281 = (_DWORD *)*v278;
    }
    else
    {
      v281 = qvector_reserve((__int64)v278, (char *)v277[2], v280, 0x28u);
      v277[2] = (__int64)v281;
      v279 = v277[3];
      v280 = v279 + 1;
    }
    v277[3] = v280;
    v282 = 5 * v279;
    v281[2 * v282] = 2;
    *(_QWORD *)&v281[2 * v282 + 2] = -1;
    *(_QWORD *)&v281[2 * v282 + 4] = v275 * 4;
    *(__m128i *)&v281[2 * v282 + 6] = _mm_load_si128((const __m128i *)&xmmword_FE290);
    sub_4B040(
      v277[1],
      (&off_1550F0)[v275 - 116],
      (int)(&off_1550F0)[v275 - 115],
      *((_BYTE *)&off_1550F0 + 8 * v275 - 915),
      *((_BYTE *)&off_1550F0 + 8 * v275 - 916),
      (__int64)(&off_1550F0)[v275 - 114],
      (__int64)(&off_1550F0)[v275 - 113]);
    v275 += 4;
  }
  v283 = *(__int64 **)v3;
  if ( BYTE5(qword_1552F8) == 1 )
  {
    v284 = 2;
    goto LABEL_339;
  }
  if ( BYTE5(qword_1552F8) == 7 )
  {
    v284 = 8;
    goto LABEL_339;
  }
  if ( BYTE5(qword_1552F8) != 2 )
  {
LABEL_354:
    if ( !(_BYTE)under_debugger )
      interr(1798);
    BUG();
  }
  v284 = 4;
LABEL_339:
  v285 = v283 + 2;
  v286 = v283[3];
  v287 = v286 + 1;
  if ( v283[4] >= (unsigned __int64)(v286 + 1) )
  {
    v288 = (_DWORD *)*v285;
  }
  else
  {
    v288 = qvector_reserve((__int64)v285, (char *)v283[2], v287, 0x28u);
    v283[2] = (__int64)v288;
    v286 = v283[3];
    v287 = v286 + 1;
  }
  v283[3] = v287;
  v289 = 5 * v286;
  v288[2 * v289] = 0;
  *(_OWORD *)&v288[2 * v289 + 2] = xmmword_FE2A0;
  *(_QWORD *)&v288[2 * v289 + 6] = 4;
  *(_QWORD *)&v288[2 * v289 + 8] = v284;
  sub_4B040(
    v283[1],
    off_1552F0,
    qword_1552F8,
    SBYTE5(qword_1552F8),
    SBYTE4(qword_1552F8),
    (__int64)off_155300,
    qword_155308);
  for ( k = 84; k != 116; k += 4 )
  {
    v291 = *(__int64 **)v3;
    v292 = (_QWORD *)(*(_QWORD *)v3 + 16LL);
    v293 = *(_QWORD *)(*(_QWORD *)v3 + 24LL);
    v294 = v293 + 1;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 32LL) >= (unsigned __int64)(v293 + 1) )
    {
      v295 = (_DWORD *)*v292;
    }
    else
    {
      v295 = qvector_reserve((__int64)v292, (char *)v291[2], v294, 0x28u);
      v291[2] = (__int64)v295;
      v293 = v291[3];
      v294 = v293 + 1;
    }
    v291[3] = v294;
    v296 = 5 * v293;
    v295[2 * v296] = 2;
    *(_QWORD *)&v295[2 * v296 + 2] = -1;
    *(_QWORD *)&v295[2 * v296 + 4] = k * 4;
    *(_OWORD *)&v295[2 * v296 + 6] = xmmword_FE2B0;
    sub_4B040(
      v291[1],
      (&off_155310)[k - 84],
      (int)(&off_155310)[k - 83],
      *((_BYTE *)&off_155310 + 8 * k - 659),
      *((_BYTE *)&off_155310 + 8 * k - 660),
      (__int64)(&off_155310)[k - 82],
      (__int64)(&off_155310)[k - 81]);
  }
  v297 = (__int64 *)algn_155428;
  v298 = 0;
  v306[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_47A20, (__m128i)(unsigned __int64)sub_47AD0);
  do
  {
    result = v298 > 7;
    if ( v273 && v298 > 7 )
      break;
    v300 = *(__int64 **)v3;
    v301 = (_QWORD *)(*(_QWORD *)v3 + 16LL);
    v302 = *(_QWORD *)(*(_QWORD *)v3 + 24LL);
    v303 = v302 + 1;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 32LL) >= (unsigned __int64)(v302 + 1) )
    {
      v304 = (_DWORD *)*v301;
    }
    else
    {
      v304 = qvector_reserve((__int64)v301, (char *)v300[2], v303, 0x28u);
      v300[2] = (__int64)v304;
      v302 = v300[3];
      v303 = v302 + 1;
    }
    v300[3] = v303;
    v305 = 5 * v302;
    v304[2 * v305] = 3;
    *(_QWORD *)&v304[2 * v305 + 2] = -1;
    *(__m128i *)&v304[2 * v305 + 4] = _mm_load_si128(v306);
    *(_QWORD *)&v304[2 * v305 + 8] = v298;
    result = sub_4B040(
               v300[1],
               (const void *)*(v297 - 3),
               *((_DWORD *)v297 - 4),
               *((_BYTE *)v297 - 11),
               *((_BYTE *)v297 - 12),
               *(v297 - 1),
               *v297);
    ++v298;
    v297 += 4;
  }
  while ( v298 < 0x10 );
  return result;
}
// FE0E0: using guessed type __int128 xmmword_FE0E0;
// FE0F0: using guessed type __int128 xmmword_FE0F0;
// FE100: using guessed type __int128 xmmword_FE100;
// FE110: using guessed type __int128 xmmword_FE110;
// FE120: using guessed type __int128 xmmword_FE120;
// FE130: using guessed type __int128 xmmword_FE130;
// FE140: using guessed type __int128 xmmword_FE140;
// FE150: using guessed type __int128 xmmword_FE150;
// FE160: using guessed type __int128 xmmword_FE160;
// FE170: using guessed type __int128 xmmword_FE170;
// FE180: using guessed type __int128 xmmword_FE180;
// FE190: using guessed type __int128 xmmword_FE190;
// FE1A0: using guessed type __int128 xmmword_FE1A0;
// FE1B0: using guessed type __int128 xmmword_FE1B0;
// FE1C0: using guessed type __int128 xmmword_FE1C0;
// FE1D0: using guessed type __int128 xmmword_FE1D0;
// FE1E0: using guessed type __int128 xmmword_FE1E0;
// FE1F0: using guessed type __int128 xmmword_FE1F0;
// FE200: using guessed type __int128 xmmword_FE200;
// FE210: using guessed type __int128 xmmword_FE210;
// FE220: using guessed type __int128 xmmword_FE220;
// FE230: using guessed type __int128 xmmword_FE230;
// FE240: using guessed type __int128 xmmword_FE240;
// FE250: using guessed type __int128 xmmword_FE250;
// FE260: using guessed type __int128 xmmword_FE260;
// FE270: using guessed type __int128 xmmword_FE270;
// FE280: using guessed type __int128 xmmword_FE280;
// FE290: using guessed type __int128 xmmword_FE290;
// FE2A0: using guessed type __int128 xmmword_FE2A0;
// FE2B0: using guessed type __int128 xmmword_FE2B0;
// 154B68: using guessed type char *off_154B68;
// 154B70: using guessed type __int64;
// 154B78: using guessed type __int128 xmmword_154B78;
// 154B88: using guessed type char *off_154B88;
// 154B90: using guessed type __int64;
// 154B98: using guessed type __int128 xmmword_154B98;
// 154BA8: using guessed type char *off_154BA8;
// 154BB0: using guessed type __int64;
// 154BB8: using guessed type __int128 xmmword_154BB8;
// 154BC8: using guessed type char *off_154BC8;
// 154BD0: using guessed type __int64;
// 154BD8: using guessed type __int128 xmmword_154BD8;
// 154BE8: using guessed type char *off_154BE8;
// 154BF0: using guessed type __int64;
// 154BF8: using guessed type __int128 xmmword_154BF8;
// 154C08: using guessed type char *off_154C08;
// 154C10: using guessed type __int64;
// 154C18: using guessed type __int128 xmmword_154C18;
// 154C28: using guessed type char *off_154C28;
// 154C30: using guessed type __int64;
// 154C38: using guessed type __int128 xmmword_154C38;
// 154C48: using guessed type char *off_154C48;
// 154C50: using guessed type __int64;
// 154C58: using guessed type __int128 xmmword_154C58;
// 154C68: using guessed type char *off_154C68;
// 154C70: using guessed type __int64;
// 154C78: using guessed type __int128 xmmword_154C78;
// 154C88: using guessed type char *off_154C88;
// 154C90: using guessed type __int64;
// 154C98: using guessed type __int128 xmmword_154C98;
// 154CA8: using guessed type char *off_154CA8;
// 154CB0: using guessed type __int64;
// 154CB8: using guessed type __int128 xmmword_154CB8;
// 154CC8: using guessed type char *off_154CC8;
// 154CD0: using guessed type __int64;
// 154CD8: using guessed type __int128 xmmword_154CD8;
// 154CE8: using guessed type char *off_154CE8;
// 154CF0: using guessed type __int64;
// 154CF8: using guessed type __int128 xmmword_154CF8;
// 154D08: using guessed type char *off_154D08;
// 154D10: using guessed type __int64;
// 154D18: using guessed type __int128 xmmword_154D18;
// 154D28: using guessed type char *off_154D28;
// 154D30: using guessed type __int64;
// 154D38: using guessed type __int128 xmmword_154D38;
// 154D48: using guessed type char *off_154D48;
// 154D50: using guessed type __int64;
// 154D58: using guessed type __int128 xmmword_154D58;
// 154D68: using guessed type char *off_154D68;
// 154D70: using guessed type __int64;
// 154D78: using guessed type __int128 xmmword_154D78;
// 154D88: using guessed type char *off_154D88;
// 154D90: using guessed type __int64;
// 154D98: using guessed type __int128 xmmword_154D98;
// 154DA8: using guessed type char *off_154DA8;
// 154DB0: using guessed type __int64;
// 154DB8: using guessed type __int128 xmmword_154DB8;
// 154DC8: using guessed type char *off_154DC8;
// 154DD0: using guessed type __int64;
// 154DD8: using guessed type __int128 xmmword_154DD8;
// 154DE8: using guessed type char *off_154DE8;
// 154DF0: using guessed type __int64;
// 154DF8: using guessed type __int128 xmmword_154DF8;
// 154E08: using guessed type char *off_154E08;
// 154E10: using guessed type __int64;
// 154E18: using guessed type __int128 xmmword_154E18;
// 154E28: using guessed type char *off_154E28;
// 154E30: using guessed type __int64;
// 154E38: using guessed type __int128 xmmword_154E38;
// 154E48: using guessed type char *off_154E48;
// 154E50: using guessed type __int64;
// 154E58: using guessed type __int128 xmmword_154E58;
// 154E68: using guessed type char *off_154E68;
// 154E70: using guessed type __int64;
// 154E78: using guessed type __int128 xmmword_154E78;
// 154E88: using guessed type char *off_154E88;
// 154E90: using guessed type __int64;
// 154E98: using guessed type __int128 xmmword_154E98;
// 154EA8: using guessed type char *off_154EA8;
// 154EB0: using guessed type __int64;
// 154EB8: using guessed type char **;
// 154EC0: using guessed type __int64[2];
// 154ED0: using guessed type char *off_154ED0;
// 154FD0: using guessed type char *off_154FD0;
// 154FD8: using guessed type __int64;
// 154FE0: using guessed type char **;
// 154FE8: using guessed type __int64;
// 154FF0: using guessed type char *off_154FF0;
// 154FF8: using guessed type __int64;
// 155000: using guessed type char **;
// 155008: using guessed type __int64;
// 155010: using guessed type char *off_155010;
// 155018: using guessed type __int64;
// 155020: using guessed type char **;
// 155028: using guessed type __int64;
// 155030: using guessed type char *off_155030;
// 155038: using guessed type __int64[3];
// 155050: using guessed type char *off_155050;
// 155058: using guessed type __int64[3];
// 155070: using guessed type char *off_155070;
// 155078: using guessed type __int64[3];
// 155090: using guessed type char *off_155090;
// 155098: using guessed type __int64[3];
// 1550B0: using guessed type char *off_1550B0;
// 1550B8: using guessed type __int64[3];
// 1550D0: using guessed type char *off_1550D0;
// 1550D8: using guessed type __int64[3];
// 1550F0: using guessed type char *off_1550F0;
// 1552F0: using guessed type char *off_1552F0;
// 1552F8: using guessed type __int64;
// 155300: using guessed type char **;
// 155308: using guessed type __int64;
// 155310: using guessed type char *off_155310;
// 155428: using guessed type _BYTE[8];
// 158B40: using guessed type __int64 under_debugger;
