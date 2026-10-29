void __fastcall sub_FFAE80(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebp
  __int64 *v7; // r12
  __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r13d
  __int64 *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i si128; // xmm0
  unsigned int v19; // eax
  __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r13d
  __int64 *v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // r13d
  __int64 *v42; // r12
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm0
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned int v52; // r13d
  __int64 *v53; // r12
  __int64 v54; // rax
  __int64 v55; // rax
  __m128i v56; // xmm0
  __m128i v57; // xmm0
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int v64; // r13d
  __int64 *v65; // r12
  __int64 v66; // rax
  __int64 v67; // rax
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned int v74; // r13d
  __int64 *v75; // r12
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned int v84; // r13d
  __int64 *v85; // r12
  __int64 v86; // rax
  __int64 v87; // rax
  __m128i v88; // xmm0
  unsigned int v89; // eax
  unsigned int v90; // eax
  unsigned int v91; // eax
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  unsigned int v95; // r13d
  __int64 *v96; // r12
  __int64 v97; // rax
  __int64 v98; // rax
  __m128i v99; // xmm0
  unsigned int v100; // eax
  unsigned int v101; // eax
  unsigned int v102; // eax
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned int v106; // r13d
  __int64 *v107; // r12
  __int64 v108; // rax
  __int64 v109; // rax
  __m128i v110; // xmm0
  unsigned int v111; // eax
  unsigned int v112; // eax
  unsigned int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  unsigned int v117; // r13d
  __int64 *v118; // r12
  __int64 v119; // rax
  __int64 v120; // rax
  __m128i v121; // xmm0
  unsigned int v122; // eax
  unsigned int v123; // eax
  unsigned int v124; // eax
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  unsigned int v128; // r13d
  __int64 *v129; // r12
  __int64 v130; // rax
  __int64 v131; // rax
  __m128i v132; // xmm0
  unsigned int v133; // eax
  unsigned int v134; // eax
  unsigned int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // r8
  __int64 v138; // r9
  unsigned int v139; // r13d
  __int64 *v140; // r12
  __int64 v141; // rax
  __int64 v142; // rax
  __m128i v143; // xmm0
  __m128i v144; // xmm0
  unsigned int v145; // eax
  unsigned int v146; // eax
  unsigned int v147; // eax
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  unsigned int v151; // r13d
  __int64 *v152; // r12
  __int64 v153; // rax
  __int64 v154; // rax
  __m128i v155; // xmm0
  unsigned int v156; // eax
  unsigned int v157; // eax
  unsigned int v158; // eax
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // r9
  unsigned int v162; // r13d
  __int64 *v163; // r12
  __int64 v164; // rax
  __int64 v165; // rax
  __m128i v166; // xmm0
  unsigned int v167; // eax
  unsigned int v168; // eax
  unsigned int v169; // eax
  __int64 v170; // rcx
  __int64 v171; // r8
  __int64 v172; // r9
  unsigned int v173; // r13d
  __int64 *v174; // r12
  __int64 v175; // rax
  __int64 v176; // rax
  __m128i v177; // xmm0
  unsigned int v178; // eax
  unsigned int v179; // eax
  unsigned int v180; // eax
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  unsigned int v184; // r13d
  __int64 *v185; // r12
  __int64 v186; // rax
  __int64 v187; // rax
  __m128i v188; // xmm0
  unsigned int v189; // eax
  unsigned int v190; // eax
  unsigned int v191; // eax
  __int64 v192; // rcx
  __int64 v193; // r8
  __int64 v194; // r9
  unsigned int v195; // r13d
  __int64 *v196; // r12
  __int64 v197; // rax
  __int64 v198; // rax
  __m128i v199; // xmm0
  unsigned int v200; // eax
  unsigned int v201; // eax
  unsigned int v202; // eax
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  unsigned int v206; // r13d
  __int64 *v207; // r12
  __int64 v208; // rax
  __int64 v209; // rax
  __m128i v210; // xmm0
  unsigned int v211; // eax
  unsigned int v212; // eax
  unsigned int v213; // eax
  __int64 v214; // rcx
  __int64 v215; // r8
  __int64 v216; // r9
  unsigned int v217; // r13d
  __int64 *v218; // r12
  __int64 v219; // rax
  __int64 v220; // rax
  __m128i v221; // xmm0
  unsigned int v222; // eax
  unsigned int v223; // eax
  unsigned int v224; // eax
  __int64 v225; // rcx
  __int64 v226; // r8
  __int64 v227; // r9
  unsigned int v228; // r13d
  __int64 *v229; // r12
  __int64 v230; // rax
  __int64 v231; // rax
  unsigned int v232; // eax
  unsigned int v233; // eax
  unsigned int v234; // eax
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // r9
  unsigned int v238; // r13d
  __int64 *v239; // r12
  __int64 v240; // rax
  __int64 v241; // rax
  __m128i v242; // xmm0
  unsigned int v243; // eax
  __m128i v244; // [rsp+0h] [rbp-48h] BYREF
  __int16 v245; // [rsp+10h] [rbp-38h]

  *(_QWORD *)a1 = 0;
  *(__m128i *)(a1 + 8) = _mm_load_si128((const __m128i *)&xmmword_23A9340);
  v1 = sub_2244B30("cl_khr_byte_addressable_store", 29);
  v2 = sub_2244CB0(a1, "cl_khr_byte_addressable_store", 29, v1);
  v6 = v2;
  v7 = (__int64 *)(*(_QWORD *)a1 + 8LL * v2);
  if ( *v7 )
  {
    if ( *v7 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v7, 0);
      v8 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v8 + 8) = 1;
      *(_QWORD *)(v8 + 12) = 0x1E00000064LL;
      *(_DWORD *)(v8 + 20) = 0;
      *(_WORD *)(v8 + 24) = 0;
      goto LABEL_4;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v17 = sub_22300B0(62, 8, v2, v3, v4, v5);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A9360);
  *(_WORD *)(v17 + 24) = 0;
  *(__m128i *)(v17 + 32) = si128;
  strcpy((char *)(v17 + 48), "essable_store");
  *(_QWORD *)v17 = 29;
  *(_BYTE *)(v17 + 8) = 1;
  *(_DWORD *)(v17 + 12) = 100;
  *(_QWORD *)(v17 + 16) = 30;
  *v7 = v17;
  ++*(_DWORD *)(a1 + 12);
  v19 = sub_22450D0(a1, v6);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v19), 0);
LABEL_4:
  v9 = sub_2244B30("cl_khr_global_int32_base_atomics", 32);
  v10 = sub_2244CB0(a1, "cl_khr_global_int32_base_atomics", 32, v9);
  v14 = v10;
  v15 = (__int64 *)(*(_QWORD *)a1 + 8LL * v10);
  if ( *v15 )
  {
    if ( *v15 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v15, 0);
      v16 = *(_QWORD *)v244.m128i_i64[0];
      *(_QWORD *)(v16 + 12) = 0x1E00000064LL;
      *(_BYTE *)(v16 + 8) = 1;
      *(_DWORD *)(v16 + 20) = 0;
      *(_WORD *)(v16 + 24) = 0;
      goto LABEL_11;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v20 = sub_22300B0(65, 8, v10, v11, v12, v13);
  v21 = _mm_load_si128((const __m128i *)&xmmword_23A9370);
  *(_WORD *)(v20 + 24) = 0;
  *(_BYTE *)(v20 + 64) = 0;
  *(__m128i *)(v20 + 32) = v21;
  v22 = _mm_load_si128((const __m128i *)&xmmword_23A9380);
  *(_QWORD *)v20 = 32;
  *(__m128i *)(v20 + 48) = v22;
  *(_BYTE *)(v20 + 8) = 1;
  *(_DWORD *)(v20 + 12) = 100;
  *(_QWORD *)(v20 + 16) = 30;
  *v15 = v20;
  ++*(_DWORD *)(a1 + 12);
  v23 = sub_22450D0(a1, v14);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v23), 0);
LABEL_11:
  v24 = sub_2244B30("cl_khr_global_int32_extended_atomics", 36);
  v25 = sub_2244CB0(a1, "cl_khr_global_int32_extended_atomics", 36, v24);
  v29 = v25;
  v30 = (__int64 *)(*(_QWORD *)a1 + 8LL * v25);
  if ( *v30 )
  {
    if ( *v30 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v30, 0);
      v31 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v31 + 8) = 1;
      *(_QWORD *)(v31 + 12) = 0x1E00000064LL;
      *(_DWORD *)(v31 + 20) = 0;
      *(_WORD *)(v31 + 24) = 0;
      goto LABEL_16;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v32 = sub_22300B0(69, 8, v25, v26, v27, v28);
  v33 = _mm_load_si128((const __m128i *)&xmmword_23A9370);
  strcpy((char *)(v32 + 64), "mics");
  *(__m128i *)(v32 + 32) = v33;
  v34 = _mm_load_si128((const __m128i *)&xmmword_23A9390);
  *(_QWORD *)v32 = 36;
  *(__m128i *)(v32 + 48) = v34;
  *(_BYTE *)(v32 + 8) = 1;
  *(_DWORD *)(v32 + 12) = 100;
  *(_QWORD *)(v32 + 16) = 30;
  *(_WORD *)(v32 + 24) = 0;
  *v30 = v32;
  ++*(_DWORD *)(a1 + 12);
  v35 = sub_22450D0(a1, v29);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v35), 0);
LABEL_16:
  v36 = sub_2244B30("cl_khr_local_int32_base_atomics", 31);
  v37 = sub_2244CB0(a1, "cl_khr_local_int32_base_atomics", 31, v36);
  v41 = v37;
  v42 = (__int64 *)(*(_QWORD *)a1 + 8LL * v37);
  if ( *v42 )
  {
    if ( *v42 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v42, 0);
      v43 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v43 + 8) = 1;
      *(_QWORD *)(v43 + 12) = 0x1E00000064LL;
      *(_DWORD *)(v43 + 20) = 0;
      *(_WORD *)(v43 + 24) = 0;
      goto LABEL_21;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v44 = sub_22300B0(64, 8, v37, v38, v39, v40);
  v45 = _mm_load_si128((const __m128i *)&xmmword_23A93A0);
  strcpy((char *)(v44 + 48), "32_base_atomics");
  *(__m128i *)(v44 + 32) = v45;
  *(_QWORD *)v44 = 31;
  *(_BYTE *)(v44 + 8) = 1;
  *(_DWORD *)(v44 + 12) = 100;
  *(_QWORD *)(v44 + 16) = 30;
  *(_WORD *)(v44 + 24) = 0;
  *v42 = v44;
  ++*(_DWORD *)(a1 + 12);
  v46 = sub_22450D0(a1, v41);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v46), 0);
LABEL_21:
  v47 = sub_2244B30("cl_khr_local_int32_extended_atomics", 35);
  v48 = sub_2244CB0(a1, "cl_khr_local_int32_extended_atomics", 35, v47);
  v52 = v48;
  v53 = (__int64 *)(*(_QWORD *)a1 + 8LL * v48);
  if ( *v53 )
  {
    if ( *v53 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v53, 0);
      v54 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v54 + 8) = 1;
      *(_QWORD *)(v54 + 12) = 0x1E00000064LL;
      *(_DWORD *)(v54 + 20) = 0;
      *(_WORD *)(v54 + 24) = 0;
      goto LABEL_26;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v55 = sub_22300B0(68, 8, v48, v49, v50, v51);
  v56 = _mm_load_si128((const __m128i *)&xmmword_23A93A0);
  *(_WORD *)(v55 + 64) = 25449;
  *(_BYTE *)(v55 + 66) = 115;
  *(__m128i *)(v55 + 32) = v56;
  v57 = _mm_load_si128((const __m128i *)&xmmword_23A93B0);
  *(_BYTE *)(v55 + 67) = 0;
  *(__m128i *)(v55 + 48) = v57;
  *(_QWORD *)v55 = 35;
  *(_BYTE *)(v55 + 8) = 1;
  *(_DWORD *)(v55 + 12) = 100;
  *(_QWORD *)(v55 + 16) = 30;
  *(_WORD *)(v55 + 24) = 0;
  *v53 = v55;
  ++*(_DWORD *)(a1 + 12);
  v58 = sub_22450D0(a1, v52);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v58), 0);
LABEL_26:
  v59 = sub_2244B30("cl_khr_fp64", 11);
  v60 = sub_2244CB0(a1, "cl_khr_fp64", 11, v59);
  v64 = v60;
  v65 = (__int64 *)(*(_QWORD *)a1 + 8LL * v60);
  if ( *v65 )
  {
    if ( *v65 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v65, 0);
      v66 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v66 + 8) = 1;
      *(_QWORD *)(v66 + 12) = 100;
      *(_DWORD *)(v66 + 20) = 28;
      *(_WORD *)(v66 + 24) = 0;
      goto LABEL_31;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v67 = sub_22300B0(44, 8, v60, v61, v62, v63);
  strcpy((char *)(v67 + 32), "cl_khr_fp64");
  *(_QWORD *)v67 = 11;
  *(_BYTE *)(v67 + 8) = 1;
  *(_DWORD *)(v67 + 12) = 100;
  *(_QWORD *)(v67 + 16) = 0x1C00000000LL;
  *(_WORD *)(v67 + 24) = 0;
  *v65 = v67;
  ++*(_DWORD *)(a1 + 12);
  v68 = sub_22450D0(a1, v64);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v68), 0);
LABEL_31:
  v69 = sub_2244B30("cl_khr_fp16", 11);
  v70 = sub_2244CB0(a1, "cl_khr_fp16", 11, v69);
  v74 = v70;
  v75 = (__int64 *)(*(_QWORD *)a1 + 8LL * v70);
  if ( *v75 )
  {
    if ( *v75 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v75, 0);
      v76 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v76 + 8) = 1;
      *(_QWORD *)(v76 + 12) = 100;
      *(_DWORD *)(v76 + 20) = 0;
      *(_WORD *)(v76 + 24) = 0;
      goto LABEL_36;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v77 = sub_22300B0(44, 8, v70, v71, v72, v73);
  *(_WORD *)(v77 + 24) = 0;
  strcpy((char *)(v77 + 32), "cl_khr_fp16");
  *(_QWORD *)v77 = 11;
  *(_BYTE *)(v77 + 8) = 1;
  *(_DWORD *)(v77 + 12) = 100;
  *(_QWORD *)(v77 + 16) = 0;
  *v75 = v77;
  ++*(_DWORD *)(a1 + 12);
  v78 = sub_22450D0(a1, v74);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v78), 0);
LABEL_36:
  v79 = sub_2244B30("cl_khr_int64_base_atomics", 25);
  v80 = sub_2244CB0(a1, "cl_khr_int64_base_atomics", 25, v79);
  v84 = v80;
  v85 = (__int64 *)(*(_QWORD *)a1 + 8LL * v80);
  if ( *v85 )
  {
    if ( *v85 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v85, 0);
      v86 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v86 + 8) = 1;
      *(_QWORD *)(v86 + 12) = 100;
      *(_DWORD *)(v86 + 20) = 0;
      *(_WORD *)(v86 + 24) = 0;
      goto LABEL_41;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v87 = sub_22300B0(58, 8, v80, v81, v82, v83);
  v88 = _mm_load_si128((const __m128i *)&xmmword_23A93C0);
  *(_WORD *)(v87 + 24) = 0;
  strcpy((char *)(v87 + 48), "e_atomics");
  *(__m128i *)(v87 + 32) = v88;
  *(_QWORD *)v87 = 25;
  *(_BYTE *)(v87 + 8) = 1;
  *(_DWORD *)(v87 + 12) = 100;
  *(_QWORD *)(v87 + 16) = 0;
  *v85 = v87;
  ++*(_DWORD *)(a1 + 12);
  v89 = sub_22450D0(a1, v84);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v89), 0);
LABEL_41:
  v244.m128i_i8[0] = 1;
  v245 = 0;
  v244.m128i_i32[1] = 100;
  v244.m128i_i64[1] = 0;
  sub_FFA6A0(a1, "cl_khr_int64_extended_atomics", 0x1Du, &v244);
  v244.m128i_i8[0] = 1;
  v245 = 0;
  v244.m128i_i32[1] = 100;
  v244.m128i_i64[1] = 0x1000000008LL;
  sub_FFA6A0(a1, "cl_khr_3d_image_writes", 0x16u, &v244);
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 110;
  v244.m128i_i64[1] = 0;
  v245 = 0;
  sub_FFA6A0(a1, "cles_khr_int64", 0xEu, &v244);
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 120;
  v244.m128i_i64[1] = 0;
  v245 = 0;
  sub_FFA6A0(a1, "cl_khr_depth_images", 0x13u, &v244);
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 120;
  v244.m128i_i64[1] = 0;
  v245 = 0;
  sub_FFA6A0(a1, "cl_khr_gl_msaa_sharing", 0x16u, &v244);
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 200;
  v244.m128i_i64[1] = 0;
  v245 = 0;
  sub_FFA6A0(a1, "cl_khr_mipmap_image", 0x13u, &v244);
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 200;
  v244.m128i_i64[1] = 0;
  v245 = 0;
  sub_FFA6A0(a1, "cl_khr_mipmap_image_writes", 0x1Au, &v244);
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 200;
  v244.m128i_i64[1] = 0;
  v245 = 0;
  sub_FFA6A0(a1, "cl_khr_srgb_image_writes", 0x18u, &v244);
  v245 = 0;
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 200;
  v244.m128i_i64[1] = 0;
  sub_FFA6A0(a1, "cl_khr_subgroups", 0x10u, &v244);
  v245 = 0;
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 100;
  v244.m128i_i64[1] = 0;
  sub_FFA6A0(a1, "cl_clang_storage_class_specifiers", 0x21u, &v244);
  v245 = 0;
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 100;
  v244.m128i_i64[1] = 0;
  sub_FFA6A0(a1, "__cl_clang_function_pointers", 0x1Cu, &v244);
  v245 = 0;
  v244.m128i_i8[0] = 1;
  v244.m128i_i32[1] = 100;
  v244.m128i_i64[1] = 0;
  sub_FFA6A0(a1, "__cl_clang_variadic_functions", 0x1Du, &v244);
  v244.m128i_i8[0] = 1;
  v245 = 0;
  v244.m128i_i32[1] = 100;
  v244.m128i_i64[1] = 0;
  sub_FFA6A0(a1, "__cl_clang_non_portable_kernel_param_types", 0x2Au, &v244);
  v244.m128i_i8[0] = 1;
  v245 = 0;
  v244.m128i_i32[1] = 100;
  v244.m128i_i64[1] = 0;
  sub_FFA6A0(a1, "__cl_clang_bitfields", 0x14u, &v244);
  v244.m128i_i8[0] = 1;
  v245 = 0;
  v244.m128i_i32[1] = 100;
  v244.m128i_i64[1] = 0;
  sub_FFA6A0(a1, "cl_amd_media_ops", 0x10u, &v244);
  v244.m128i_i8[0] = 1;
  v245 = 0;
  v244.m128i_i32[1] = 100;
  v244.m128i_i64[1] = 0;
  sub_FFA6A0(a1, "cl_amd_media_ops2", 0x11u, &v244);
  v90 = sub_2244B30("cl_intel_subgroups", 18);
  v91 = sub_2244CB0(a1, "cl_intel_subgroups", 18, v90);
  v95 = v91;
  v96 = (__int64 *)(*(_QWORD *)a1 + 8LL * v91);
  if ( *v96 )
  {
    if ( *v96 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v96, 0);
      v97 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v97 + 8) = 1;
      *(_QWORD *)(v97 + 12) = 120;
      *(_DWORD *)(v97 + 20) = 0;
      *(_WORD *)(v97 + 24) = 0;
      goto LABEL_46;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v98 = sub_22300B0(51, 8, v91, v92, v93, v94);
  v99 = _mm_load_si128((const __m128i *)&xmmword_23A93D0);
  strcpy((char *)(v98 + 48), "ps");
  *(__m128i *)(v98 + 32) = v99;
  *(_QWORD *)v98 = 18;
  *(_BYTE *)(v98 + 8) = 1;
  *(_DWORD *)(v98 + 12) = 120;
  *(_QWORD *)(v98 + 16) = 0;
  *(_WORD *)(v98 + 24) = 0;
  *v96 = v98;
  ++*(_DWORD *)(a1 + 12);
  v100 = sub_22450D0(a1, v95);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v100), 0);
LABEL_46:
  v101 = sub_2244B30("cl_intel_subgroups_short", 24);
  v102 = sub_2244CB0(a1, "cl_intel_subgroups_short", 24, v101);
  v106 = v102;
  v107 = (__int64 *)(*(_QWORD *)a1 + 8LL * v102);
  if ( *v107 )
  {
    if ( *v107 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v107, 0);
      v108 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v108 + 8) = 1;
      *(_QWORD *)(v108 + 12) = 120;
      *(_DWORD *)(v108 + 20) = 0;
      *(_WORD *)(v108 + 24) = 0;
      goto LABEL_51;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v109 = sub_22300B0(57, 8, v102, v103, v104, v105);
  v110 = _mm_load_si128((const __m128i *)&xmmword_23A93D0);
  *(_WORD *)(v109 + 24) = 0;
  *(__m128i *)(v109 + 32) = v110;
  strcpy((char *)(v109 + 48), "ps_short");
  *(_QWORD *)v109 = 24;
  *(_BYTE *)(v109 + 8) = 1;
  *(_DWORD *)(v109 + 12) = 120;
  *(_QWORD *)(v109 + 16) = 0;
  *v107 = v109;
  ++*(_DWORD *)(a1 + 12);
  v111 = sub_22450D0(a1, v106);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v111), 0);
LABEL_51:
  v112 = sub_2244B30("cl_intel_device_side_avc_motion_estimation", 42);
  v113 = sub_2244CB0(a1, "cl_intel_device_side_avc_motion_estimation", 42, v112);
  v117 = v113;
  v118 = (__int64 *)(*(_QWORD *)a1 + 8LL * v113);
  if ( *v118 )
  {
    if ( *v118 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v118, 0);
      v119 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v119 + 8) = 1;
      *(_QWORD *)(v119 + 12) = 120;
      *(_DWORD *)(v119 + 20) = 0;
      *(_WORD *)(v119 + 24) = 0;
      goto LABEL_56;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v120 = sub_22300B0(75, 8, v113, v114, v115, v116);
  v121 = _mm_load_si128((const __m128i *)&xmmword_23A93E0);
  strcpy((char *)(v120 + 64), "estimation");
  *(__m128i *)(v120 + 32) = v121;
  *(__m128i *)(v120 + 48) = _mm_load_si128((const __m128i *)&xmmword_23A93F0);
  *(_QWORD *)v120 = 42;
  *(_BYTE *)(v120 + 8) = 1;
  *(_DWORD *)(v120 + 12) = 120;
  *(_QWORD *)(v120 + 16) = 0;
  *(_WORD *)(v120 + 24) = 0;
  *v118 = v120;
  ++*(_DWORD *)(a1 + 12);
  v122 = sub_22450D0(a1, v117);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v122), 0);
LABEL_56:
  v123 = sub_2244B30("__opencl_c_pipes", 16);
  v124 = sub_2244CB0(a1, "__opencl_c_pipes", 16, v123);
  v128 = v124;
  v129 = (__int64 *)(*(_QWORD *)a1 + 8LL * v124);
  if ( *v129 )
  {
    if ( *v129 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v129, 0);
      v130 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v130 + 8) = 0;
      *(_QWORD *)(v130 + 12) = 300;
      *(_DWORD *)(v130 + 20) = 16;
      *(_WORD *)(v130 + 24) = 0;
      goto LABEL_61;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v131 = sub_22300B0(49, 8, v124, v125, v126, v127);
  v132 = _mm_load_si128((const __m128i *)&xmmword_23A9400);
  *(_BYTE *)(v131 + 48) = 0;
  *(_QWORD *)v131 = 16;
  *(__m128i *)(v131 + 32) = v132;
  *(_BYTE *)(v131 + 8) = 0;
  *(_DWORD *)(v131 + 12) = 300;
  *(_QWORD *)(v131 + 16) = 0x1000000000LL;
  *(_WORD *)(v131 + 24) = 0;
  *v129 = v131;
  ++*(_DWORD *)(a1 + 12);
  v133 = sub_22450D0(a1, v128);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v133), 0);
LABEL_61:
  v134 = sub_2244B30("__opencl_c_generic_address_space", 32);
  v135 = sub_2244CB0(a1, "__opencl_c_generic_address_space", 32, v134);
  v139 = v135;
  v140 = (__int64 *)(*(_QWORD *)a1 + 8LL * v135);
  if ( *v140 )
  {
    if ( *v140 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v140, 0);
      v141 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v141 + 8) = 0;
      *(_QWORD *)(v141 + 12) = 300;
      *(_DWORD *)(v141 + 20) = 16;
      *(_WORD *)(v141 + 24) = 0;
      goto LABEL_66;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v142 = sub_22300B0(65, 8, v135, v136, v137, v138);
  v143 = _mm_load_si128((const __m128i *)&xmmword_23A9410);
  *(_BYTE *)(v142 + 64) = 0;
  *(_QWORD *)v142 = 32;
  *(__m128i *)(v142 + 32) = v143;
  v144 = _mm_load_si128((const __m128i *)&xmmword_23A9420);
  *(_BYTE *)(v142 + 8) = 0;
  *(__m128i *)(v142 + 48) = v144;
  *(_DWORD *)(v142 + 12) = 300;
  *(_QWORD *)(v142 + 16) = 0x1000000000LL;
  *(_WORD *)(v142 + 24) = 0;
  *v140 = v142;
  ++*(_DWORD *)(a1 + 12);
  v145 = sub_22450D0(a1, v139);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v145), 0);
LABEL_66:
  v146 = sub_2244B30("__opencl_c_atomic_order_acq_rel", 31);
  v147 = sub_2244CB0(a1, "__opencl_c_atomic_order_acq_rel", 31, v146);
  v151 = v147;
  v152 = (__int64 *)(*(_QWORD *)a1 + 8LL * v147);
  if ( *v152 )
  {
    if ( *v152 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v152, 0);
      v153 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v153 + 8) = 0;
      *(_QWORD *)(v153 + 12) = 300;
      *(_DWORD *)(v153 + 20) = 16;
      *(_WORD *)(v153 + 24) = 0;
      goto LABEL_71;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v154 = sub_22300B0(64, 8, v147, v148, v149, v150);
  v155 = _mm_load_si128((const __m128i *)&xmmword_23A9430);
  strcpy((char *)(v154 + 48), "c_order_acq_rel");
  *(_WORD *)(v154 + 24) = 0;
  *(__m128i *)(v154 + 32) = v155;
  *(_QWORD *)v154 = 31;
  *(_BYTE *)(v154 + 8) = 0;
  *(_DWORD *)(v154 + 12) = 300;
  *(_QWORD *)(v154 + 16) = 0x1000000000LL;
  *v152 = v154;
  ++*(_DWORD *)(a1 + 12);
  v156 = sub_22450D0(a1, v151);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v156), 0);
LABEL_71:
  v157 = sub_2244B30("__opencl_c_atomic_order_seq_cst", 31);
  v158 = sub_2244CB0(a1, "__opencl_c_atomic_order_seq_cst", 31, v157);
  v162 = v158;
  v163 = (__int64 *)(*(_QWORD *)a1 + 8LL * v158);
  if ( *v163 )
  {
    if ( *v163 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v163, 0);
      v164 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v164 + 8) = 0;
      *(_QWORD *)(v164 + 12) = 300;
      *(_DWORD *)(v164 + 20) = 16;
      *(_WORD *)(v164 + 24) = 0;
      goto LABEL_76;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v165 = sub_22300B0(64, 8, v158, v159, v160, v161);
  v166 = _mm_load_si128((const __m128i *)&xmmword_23A9430);
  *(_WORD *)(v165 + 24) = 0;
  strcpy((char *)(v165 + 48), "c_order_seq_cst");
  *(__m128i *)(v165 + 32) = v166;
  *(_QWORD *)v165 = 31;
  *(_BYTE *)(v165 + 8) = 0;
  *(_DWORD *)(v165 + 12) = 300;
  *(_QWORD *)(v165 + 16) = 0x1000000000LL;
  *v163 = v165;
  ++*(_DWORD *)(a1 + 12);
  v167 = sub_22450D0(a1, v162);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v167), 0);
LABEL_76:
  v168 = sub_2244B30("__opencl_c_subgroups", 20);
  v169 = sub_2244CB0(a1, "__opencl_c_subgroups", 20, v168);
  v173 = v169;
  v174 = (__int64 *)(*(_QWORD *)a1 + 8LL * v169);
  if ( *v174 )
  {
    if ( *v174 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v174, 0);
      v175 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v175 + 8) = 0;
      *(_QWORD *)(v175 + 12) = 300;
      *(_DWORD *)(v175 + 20) = 16;
      *(_WORD *)(v175 + 24) = 0;
      goto LABEL_81;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v176 = sub_22300B0(53, 8, v169, v170, v171, v172);
  v177 = _mm_load_si128((const __m128i *)&xmmword_23A9440);
  strcpy((char *)(v176 + 48), "oups");
  *(__m128i *)(v176 + 32) = v177;
  *(_QWORD *)v176 = 20;
  *(_BYTE *)(v176 + 8) = 0;
  *(_DWORD *)(v176 + 12) = 300;
  *(_QWORD *)(v176 + 16) = 0x1000000000LL;
  *(_WORD *)(v176 + 24) = 0;
  *v174 = v176;
  ++*(_DWORD *)(a1 + 12);
  v178 = sub_22450D0(a1, v173);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v178), 0);
LABEL_81:
  v179 = sub_2244B30("__opencl_c_3d_image_writes", 26);
  v180 = sub_2244CB0(a1, "__opencl_c_3d_image_writes", 26, v179);
  v184 = v180;
  v185 = (__int64 *)(*(_QWORD *)a1 + 8LL * v180);
  if ( *v185 )
  {
    if ( *v185 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v185, 0);
      v186 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v186 + 8) = 0;
      *(_QWORD *)(v186 + 12) = 300;
      *(_DWORD *)(v186 + 20) = 16;
      *(_WORD *)(v186 + 24) = 0;
      goto LABEL_86;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v187 = sub_22300B0(59, 8, v180, v181, v182, v183);
  v188 = _mm_load_si128((const __m128i *)&xmmword_23A9450);
  strcpy((char *)(v187 + 48), "age_writes");
  *(_WORD *)(v187 + 24) = 0;
  *(__m128i *)(v187 + 32) = v188;
  *(_QWORD *)v187 = 26;
  *(_BYTE *)(v187 + 8) = 0;
  *(_DWORD *)(v187 + 12) = 300;
  *(_QWORD *)(v187 + 16) = 0x1000000000LL;
  *v185 = v187;
  ++*(_DWORD *)(a1 + 12);
  v189 = sub_22450D0(a1, v184);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v189), 0);
LABEL_86:
  v190 = sub_2244B30("__opencl_c_device_enqueue", 25);
  v191 = sub_2244CB0(a1, "__opencl_c_device_enqueue", 25, v190);
  v195 = v191;
  v196 = (__int64 *)(*(_QWORD *)a1 + 8LL * v191);
  if ( *v196 )
  {
    if ( *v196 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v196, 0);
      v197 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v197 + 8) = 0;
      *(_QWORD *)(v197 + 12) = 300;
      *(_DWORD *)(v197 + 20) = 16;
      *(_WORD *)(v197 + 24) = 0;
      goto LABEL_91;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v198 = sub_22300B0(58, 8, v191, v192, v193, v194);
  v199 = _mm_load_si128((const __m128i *)&xmmword_23A9460);
  *(_WORD *)(v198 + 24) = 0;
  strcpy((char *)(v198 + 48), "e_enqueue");
  *(__m128i *)(v198 + 32) = v199;
  *(_QWORD *)v198 = 25;
  *(_BYTE *)(v198 + 8) = 0;
  *(_DWORD *)(v198 + 12) = 300;
  *(_QWORD *)(v198 + 16) = 0x1000000000LL;
  *v196 = v198;
  ++*(_DWORD *)(a1 + 12);
  v200 = sub_22450D0(a1, v195);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v200), 0);
LABEL_91:
  v201 = sub_2244B30("__opencl_c_read_write_images", 28);
  v202 = sub_2244CB0(a1, "__opencl_c_read_write_images", 28, v201);
  v206 = v202;
  v207 = (__int64 *)(*(_QWORD *)a1 + 8LL * v202);
  if ( *v207 )
  {
    if ( *v207 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v207, 0);
      v208 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v208 + 8) = 0;
      *(_QWORD *)(v208 + 12) = 300;
      *(_DWORD *)(v208 + 20) = 16;
      *(_WORD *)(v208 + 24) = 0;
      goto LABEL_96;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v209 = sub_22300B0(61, 8, v202, v203, v204, v205);
  v210 = _mm_load_si128((const __m128i *)&xmmword_23A9470);
  strcpy((char *)(v209 + 48), "write_images");
  *(__m128i *)(v209 + 32) = v210;
  *(_QWORD *)v209 = 28;
  *(_BYTE *)(v209 + 8) = 0;
  *(_DWORD *)(v209 + 12) = 300;
  *(_QWORD *)(v209 + 16) = 0x1000000000LL;
  *(_WORD *)(v209 + 24) = 0;
  *v207 = v209;
  ++*(_DWORD *)(a1 + 12);
  v211 = sub_22450D0(a1, v206);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v211), 0);
LABEL_96:
  v212 = sub_2244B30("__opencl_c_program_scope_global_variables", 41);
  v213 = sub_2244CB0(a1, "__opencl_c_program_scope_global_variables", 41, v212);
  v217 = v213;
  v218 = (__int64 *)(*(_QWORD *)a1 + 8LL * v213);
  if ( *v218 )
  {
    if ( *v218 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v218, 0);
      v219 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v219 + 8) = 0;
      *(_QWORD *)(v219 + 12) = 300;
      *(_DWORD *)(v219 + 20) = 16;
      *(_WORD *)(v219 + 24) = 0;
      goto LABEL_101;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v220 = sub_22300B0(74, 8, v213, v214, v215, v216);
  v221 = _mm_load_si128((const __m128i *)&xmmword_23A9480);
  strcpy((char *)(v220 + 64), "variables");
  *(__m128i *)(v220 + 32) = v221;
  *(__m128i *)(v220 + 48) = _mm_load_si128((const __m128i *)&xmmword_23A9490);
  *(_QWORD *)v220 = 41;
  *(_BYTE *)(v220 + 8) = 0;
  *(_DWORD *)(v220 + 12) = 300;
  *(_QWORD *)(v220 + 16) = 0x1000000000LL;
  *(_WORD *)(v220 + 24) = 0;
  *v218 = v220;
  ++*(_DWORD *)(a1 + 12);
  v222 = sub_22450D0(a1, v217);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v222), 0);
LABEL_101:
  v223 = sub_2244B30("__opencl_c_fp64", 15);
  v224 = sub_2244CB0(a1, "__opencl_c_fp64", 15, v223);
  v228 = v224;
  v229 = (__int64 *)(*(_QWORD *)a1 + 8LL * v224);
  if ( *v229 )
  {
    if ( *v229 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v229, 0);
      v230 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v230 + 8) = 0;
      *(_QWORD *)(v230 + 12) = 300;
      *(_DWORD *)(v230 + 20) = 16;
      *(_WORD *)(v230 + 24) = 0;
      goto LABEL_106;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v231 = sub_22300B0(48, 8, v224, v225, v226, v227);
  strcpy((char *)(v231 + 32), "__opencl_c_fp64");
  *(_WORD *)(v231 + 24) = 0;
  *(_QWORD *)v231 = 15;
  *(_BYTE *)(v231 + 8) = 0;
  *(_DWORD *)(v231 + 12) = 300;
  *(_QWORD *)(v231 + 16) = 0x1000000000LL;
  *v229 = v231;
  ++*(_DWORD *)(a1 + 12);
  v232 = sub_22450D0(a1, v228);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v232), 0);
LABEL_106:
  v233 = sub_2244B30("__opencl_c_images", 17);
  v234 = sub_2244CB0(a1, "__opencl_c_images", 17, v233);
  v238 = v234;
  v239 = (__int64 *)(*(_QWORD *)a1 + 8LL * v234);
  if ( *v239 )
  {
    if ( *v239 != -8 )
    {
      sub_FFA5C0((__int64 **)&v244, v239, 0);
      v240 = *(_QWORD *)v244.m128i_i64[0];
      *(_BYTE *)(v240 + 8) = 0;
      *(_QWORD *)(v240 + 12) = 300;
      *(_DWORD *)(v240 + 20) = 16;
      *(_WORD *)(v240 + 24) = 0;
      return;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v241 = sub_22300B0(50, 8, v234, v235, v236, v237);
  v242 = _mm_load_si128((const __m128i *)&xmmword_23A94A0);
  *(_WORD *)(v241 + 24) = 0;
  *(_QWORD *)(v241 + 16) = 0x1000000000LL;
  *(__m128i *)(v241 + 32) = v242;
  *(_BYTE *)(v241 + 48) = 115;
  *(_BYTE *)(v241 + 49) = 0;
  *(_QWORD *)v241 = 17;
  *(_BYTE *)(v241 + 8) = 0;
  *(_DWORD *)(v241 + 12) = 300;
  *v239 = v241;
  ++*(_DWORD *)(a1 + 12);
  v243 = sub_22450D0(a1, v238);
  sub_FFA5C0((__int64 **)&v244, (__int64 *)(*(_QWORD *)a1 + 8LL * v243), 0);
}
