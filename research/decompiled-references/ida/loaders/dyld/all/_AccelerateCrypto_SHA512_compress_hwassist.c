int64x2_t *__fastcall AccelerateCrypto_SHA512_compress_hwassist(int64x2_t *result, __int64 a2, int8x16_t *a3)
{
  int64x2_t *v3; // x3
  int64x2_t v4; // q8
  int64x2_t v5; // q9
  int64x2_t v6; // q10
  int64x2_t v7; // q11
  int64x2_t v8; // q0
  int64x2_t v9; // q1
  int64x2_t v10; // q2
  int64x2_t v11; // q3
  int64x2_t v12; // q4
  int64x2_t v13; // q5
  int64x2_t v14; // q6
  int64x2_t v15; // q7
  int8x16_t v16; // q16
  int8x16_t v17; // q17
  int8x16_t v18; // q18
  int64x2_t v19; // q22
  int8x16_t v20; // q19
  int64x2_t v21; // q23
  int8x16_t v22; // q20
  int8x16_t v23; // q21
  int64x2_t *v24; // x3
  int8x16_t v25; // q22
  int8x16_t v26; // q23
  int64x2_t v27; // q28
  int64x2_t v28; // q27
  int64x2_t v29; // q0
  int64x2_t v30; // q25
  int8x16_t v31; // q16
  int64x2_t v32; // q28
  int64x2_t v33; // q26
  int64x2_t v34; // q1
  int64x2_t v35; // q24
  int8x16_t v36; // q17
  int64x2_t v37; // q28
  int64x2_t v38; // q25
  int64x2_t v39; // q2
  int64x2_t v40; // q27
  int8x16_t v41; // q18
  int64x2_t v42; // q28
  int64x2_t v43; // q24
  int64x2_t v44; // q3
  int64x2_t v45; // q26
  int8x16_t v46; // q19
  int64x2_t v47; // q28
  int64x2_t v48; // q27
  int64x2_t v49; // q4
  int64x2_t v50; // q25
  int8x16_t v51; // q20
  int64x2_t v52; // q28
  int64x2_t v53; // q26
  int64x2_t v54; // q5
  int64x2_t v55; // q24
  int8x16_t v56; // q21
  int64x2_t v57; // q28
  int64x2_t v58; // q25
  int64x2_t v59; // q6
  int64x2_t v60; // q27
  int8x16_t v61; // q22
  int64x2_t v62; // q28
  int64x2_t v63; // q24
  int64x2_t v64; // q7
  int64x2_t v65; // q26
  int8x16_t v66; // q23
  int64x2_t v67; // q28
  int64x2_t v68; // q27
  int64x2_t v69; // q0
  int64x2_t v70; // q25
  int8x16_t v71; // q16
  int64x2_t v72; // q28
  int64x2_t v73; // q26
  int64x2_t v74; // q1
  int64x2_t v75; // q24
  int8x16_t v76; // q17
  int64x2_t v77; // q28
  int64x2_t v78; // q25
  int64x2_t v79; // q2
  int64x2_t v80; // q27
  int8x16_t v81; // q18
  int64x2_t v82; // q28
  int64x2_t v83; // q24
  int64x2_t v84; // q3
  int64x2_t v85; // q26
  int8x16_t v86; // q19
  int64x2_t v87; // q28
  int64x2_t v88; // q27
  int64x2_t v89; // q4
  int64x2_t v90; // q25
  int8x16_t v91; // q20
  int64x2_t v92; // q28
  int64x2_t v93; // q26
  int64x2_t v94; // q5
  int64x2_t v95; // q24
  int8x16_t v96; // q21
  int64x2_t v97; // q28
  int64x2_t v98; // q25
  int64x2_t v99; // q6
  int64x2_t v100; // q27
  int8x16_t v101; // q22
  int64x2_t v102; // q28
  int64x2_t v103; // q24
  int64x2_t v104; // q7
  int64x2_t v105; // q26
  int8x16_t v106; // q23
  int64x2_t v107; // q28
  int64x2_t v108; // q27
  int64x2_t v109; // q0
  int64x2_t v110; // q25
  int8x16_t v111; // q16
  int64x2_t v112; // q28
  int64x2_t v113; // q26
  int64x2_t v114; // q1
  int64x2_t v115; // q24
  int8x16_t v116; // q17
  int64x2_t v117; // q28
  int64x2_t v118; // q25
  int64x2_t v119; // q2
  int64x2_t v120; // q27
  int8x16_t v121; // q18
  int64x2_t v122; // q28
  int64x2_t v123; // q24
  int64x2_t v124; // q3
  int64x2_t v125; // q26
  int8x16_t v126; // q19
  int64x2_t v127; // q28
  int64x2_t v128; // q27
  int64x2_t v129; // q4
  int64x2_t v130; // q25
  int8x16_t v131; // q20
  int64x2_t v132; // q28
  int64x2_t v133; // q26
  int64x2_t v134; // q5
  int64x2_t v135; // q24
  int8x16_t v136; // q21
  int64x2_t v137; // q28
  int64x2_t v138; // q25
  int64x2_t v139; // q6
  int64x2_t v140; // q27
  int8x16_t v141; // q22
  int64x2_t v142; // q28
  int64x2_t v143; // q24
  int64x2_t v144; // q7
  int64x2_t v145; // q26
  int8x16_t v146; // q23
  int64x2_t v147; // q28
  int64x2_t v148; // q27
  int64x2_t v149; // q0
  int64x2_t v150; // q25
  int8x16_t v151; // q16
  int64x2_t v152; // q28
  int64x2_t v153; // q26
  int64x2_t v154; // q1
  int64x2_t v155; // q24
  int8x16_t v156; // q17
  int64x2_t v157; // q28
  int64x2_t v158; // q25
  int64x2_t v159; // q2
  int64x2_t v160; // q27
  int8x16_t v161; // q18
  int64x2_t v162; // q28
  int64x2_t v163; // q24
  int64x2_t v164; // q3
  int64x2_t v165; // q26
  int8x16_t v166; // q19
  int64x2_t v167; // q28
  int64x2_t v168; // q27
  int64x2_t v169; // q4
  int64x2_t v170; // q25
  int8x16_t v171; // q20
  int64x2_t v172; // q28
  int64x2_t v173; // q26
  int64x2_t v174; // q5
  int64x2_t v175; // q24
  int8x16_t v176; // q21
  int64x2_t v177; // q28
  int64x2_t v178; // q25
  int64x2_t v179; // q6
  int64x2_t v180; // q27
  int8x16_t v181; // q22
  int64x2_t v182; // q28
  int64x2_t v183; // q24
  int64x2_t v184; // q26
  int8x16_t v185; // q23
  int64x2_t v186; // q30
  int64x2_t v187; // q27
  int64x2_t v188; // q25
  int64x2_t v189; // q30
  int64x2_t v190; // q26
  int64x2_t v191; // q24
  int64x2_t v192; // q30
  int64x2_t v193; // q25
  int64x2_t v194; // q27
  int64x2_t v195; // q30
  int64x2_t v196; // q24
  int64x2_t v197; // q26
  int64x2_t v198; // q30
  int64x2_t v199; // q27
  int64x2_t v200; // q25
  int64x2_t v201; // q30
  int64x2_t v202; // q26
  int64x2_t v203; // q24
  int64x2_t v204; // q30
  int64x2_t v205; // q25
  int64x2_t v206; // q27
  int64x2_t v207; // q30
  bool v208; // cc

  if ( a2 )
  {
    v3 = (int64x2_t *)&ccsha512_K;
    v4 = *result;
    v5 = result[1];
    v6 = result[2];
    v7 = result[3];
    do
    {
      v8 = (int64x2_t)vrev64q_s8(*a3);
      v9 = (int64x2_t)vrev64q_s8(a3[1]);
      v10 = (int64x2_t)vrev64q_s8(a3[2]);
      v11 = (int64x2_t)vrev64q_s8(a3[3]);
      v12 = (int64x2_t)vrev64q_s8(a3[4]);
      v13 = (int64x2_t)vrev64q_s8(a3[5]);
      v14 = (int64x2_t)vrev64q_s8(a3[6]);
      v15 = (int64x2_t)vrev64q_s8(a3[7]);
      v16 = (int8x16_t)vaddq_s64(*v3, v8);
      v17 = (int8x16_t)vaddq_s64(v3[1], v9);
      v18 = (int8x16_t)vaddq_s64(v3[2], v10);
      v19 = v3[6];
      v20 = (int8x16_t)vaddq_s64(v3[3], v11);
      v21 = v3[7];
      v22 = (int8x16_t)vaddq_s64(v3[4], v12);
      a3 += 8;
      v23 = (int8x16_t)vaddq_s64(v3[5], v13);
      v24 = v3 + 8;
      v25 = (int8x16_t)vaddq_s64(v19, v14);
      v26 = (int8x16_t)vaddq_s64(v21, v15);
      v27 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v7, (int64x2_t)vextq_s8(v16, v16, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v6, (int8x16_t)v7, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v5, (int8x16_t)v6, 8u));
      v28 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v27, (uint64x2_t)v5, (uint64x2_t)v4);
      v29 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v8, (uint64x2_t)v9),
                         (uint64x2_t)v15,
                         (uint64x2_t)vextq_s8((int8x16_t)v12, (int8x16_t)v13, 8u));
      v30 = vaddq_s64(v5, v27);
      v31 = (int8x16_t)vaddq_s64(v29, *v24);
      v32 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v6, (int64x2_t)vextq_s8(v17, v17, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v30, (int8x16_t)v6, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v4, (int8x16_t)v30, 8u));
      v33 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v32, (uint64x2_t)v4, (uint64x2_t)v28);
      v34 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v9, (uint64x2_t)v10),
                         (uint64x2_t)v29,
                         (uint64x2_t)vextq_s8((int8x16_t)v13, (int8x16_t)v14, 8u));
      v35 = vaddq_s64(v4, v32);
      v36 = (int8x16_t)vaddq_s64(v34, v24[1]);
      v37 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v30, (int64x2_t)vextq_s8(v18, v18, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v35, (int8x16_t)v30, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v28, (int8x16_t)v35, 8u));
      v38 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v37, (uint64x2_t)v28, (uint64x2_t)v33);
      v39 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v10, (uint64x2_t)v11),
                         (uint64x2_t)v34,
                         (uint64x2_t)vextq_s8((int8x16_t)v14, (int8x16_t)v15, 8u));
      v40 = vaddq_s64(v28, v37);
      v41 = (int8x16_t)vaddq_s64(v39, v24[2]);
      v42 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v35, (int64x2_t)vextq_s8(v20, v20, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v40, (int8x16_t)v35, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v33, (int8x16_t)v40, 8u));
      v43 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v42, (uint64x2_t)v33, (uint64x2_t)v38);
      v44 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v11, (uint64x2_t)v12),
                         (uint64x2_t)v39,
                         (uint64x2_t)vextq_s8((int8x16_t)v15, (int8x16_t)v29, 8u));
      v45 = vaddq_s64(v33, v42);
      v46 = (int8x16_t)vaddq_s64(v44, v24[3]);
      v47 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v40, (int64x2_t)vextq_s8(v22, v22, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v45, (int8x16_t)v40, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v38, (int8x16_t)v45, 8u));
      v48 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v47, (uint64x2_t)v38, (uint64x2_t)v43);
      v49 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v12, (uint64x2_t)v13),
                         (uint64x2_t)v44,
                         (uint64x2_t)vextq_s8((int8x16_t)v29, (int8x16_t)v34, 8u));
      v50 = vaddq_s64(v38, v47);
      v51 = (int8x16_t)vaddq_s64(v49, v24[4]);
      v52 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v45, (int64x2_t)vextq_s8(v23, v23, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v50, (int8x16_t)v45, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v43, (int8x16_t)v50, 8u));
      v53 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v52, (uint64x2_t)v43, (uint64x2_t)v48);
      v54 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v13, (uint64x2_t)v14),
                         (uint64x2_t)v49,
                         (uint64x2_t)vextq_s8((int8x16_t)v34, (int8x16_t)v39, 8u));
      v55 = vaddq_s64(v43, v52);
      v56 = (int8x16_t)vaddq_s64(v54, v24[5]);
      v57 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v50, (int64x2_t)vextq_s8(v25, v25, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v55, (int8x16_t)v50, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v48, (int8x16_t)v55, 8u));
      v58 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v57, (uint64x2_t)v48, (uint64x2_t)v53);
      v59 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v14, (uint64x2_t)v15),
                         (uint64x2_t)v54,
                         (uint64x2_t)vextq_s8((int8x16_t)v39, (int8x16_t)v44, 8u));
      v60 = vaddq_s64(v48, v57);
      v61 = (int8x16_t)vaddq_s64(v59, v24[6]);
      v62 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v55, (int64x2_t)vextq_s8(v26, v26, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v60, (int8x16_t)v55, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v53, (int8x16_t)v60, 8u));
      v63 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v62, (uint64x2_t)v53, (uint64x2_t)v58);
      v64 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v15, (uint64x2_t)v29),
                         (uint64x2_t)v59,
                         (uint64x2_t)vextq_s8((int8x16_t)v44, (int8x16_t)v49, 8u));
      v65 = vaddq_s64(v53, v62);
      v66 = (int8x16_t)vaddq_s64(v64, v24[7]);
      v24 += 8;
      v67 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v60, (int64x2_t)vextq_s8(v31, v31, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v65, (int8x16_t)v60, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v58, (int8x16_t)v65, 8u));
      v68 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v67, (uint64x2_t)v58, (uint64x2_t)v63);
      v69 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v29, (uint64x2_t)v34),
                         (uint64x2_t)v64,
                         (uint64x2_t)vextq_s8((int8x16_t)v49, (int8x16_t)v54, 8u));
      v70 = vaddq_s64(v58, v67);
      v71 = (int8x16_t)vaddq_s64(v69, *v24);
      v72 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v65, (int64x2_t)vextq_s8(v36, v36, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v70, (int8x16_t)v65, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v63, (int8x16_t)v70, 8u));
      v73 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v72, (uint64x2_t)v63, (uint64x2_t)v68);
      v74 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v34, (uint64x2_t)v39),
                         (uint64x2_t)v69,
                         (uint64x2_t)vextq_s8((int8x16_t)v54, (int8x16_t)v59, 8u));
      v75 = vaddq_s64(v63, v72);
      v76 = (int8x16_t)vaddq_s64(v74, v24[1]);
      v77 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v70, (int64x2_t)vextq_s8(v41, v41, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v75, (int8x16_t)v70, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v68, (int8x16_t)v75, 8u));
      v78 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v77, (uint64x2_t)v68, (uint64x2_t)v73);
      v79 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v39, (uint64x2_t)v44),
                         (uint64x2_t)v74,
                         (uint64x2_t)vextq_s8((int8x16_t)v59, (int8x16_t)v64, 8u));
      v80 = vaddq_s64(v68, v77);
      v81 = (int8x16_t)vaddq_s64(v79, v24[2]);
      v82 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v75, (int64x2_t)vextq_s8(v46, v46, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v80, (int8x16_t)v75, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v73, (int8x16_t)v80, 8u));
      v83 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v82, (uint64x2_t)v73, (uint64x2_t)v78);
      v84 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v44, (uint64x2_t)v49),
                         (uint64x2_t)v79,
                         (uint64x2_t)vextq_s8((int8x16_t)v64, (int8x16_t)v69, 8u));
      v85 = vaddq_s64(v73, v82);
      v86 = (int8x16_t)vaddq_s64(v84, v24[3]);
      v87 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v80, (int64x2_t)vextq_s8(v51, v51, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v85, (int8x16_t)v80, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v78, (int8x16_t)v85, 8u));
      v88 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v87, (uint64x2_t)v78, (uint64x2_t)v83);
      v89 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v49, (uint64x2_t)v54),
                         (uint64x2_t)v84,
                         (uint64x2_t)vextq_s8((int8x16_t)v69, (int8x16_t)v74, 8u));
      v90 = vaddq_s64(v78, v87);
      v91 = (int8x16_t)vaddq_s64(v89, v24[4]);
      v92 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v85, (int64x2_t)vextq_s8(v56, v56, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v90, (int8x16_t)v85, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v83, (int8x16_t)v90, 8u));
      v93 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v92, (uint64x2_t)v83, (uint64x2_t)v88);
      v94 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v54, (uint64x2_t)v59),
                         (uint64x2_t)v89,
                         (uint64x2_t)vextq_s8((int8x16_t)v74, (int8x16_t)v79, 8u));
      v95 = vaddq_s64(v83, v92);
      v96 = (int8x16_t)vaddq_s64(v94, v24[5]);
      v97 = (int64x2_t)vsha512hq_u64(
                         (uint64x2_t)vaddq_s64(v90, (int64x2_t)vextq_s8(v61, v61, 8u)),
                         (uint64x2_t)vextq_s8((int8x16_t)v95, (int8x16_t)v90, 8u),
                         (uint64x2_t)vextq_s8((int8x16_t)v88, (int8x16_t)v95, 8u));
      v98 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v97, (uint64x2_t)v88, (uint64x2_t)v93);
      v99 = (int64x2_t)vsha512su1q_u64(
                         vsha512su0q_u64((uint64x2_t)v59, (uint64x2_t)v64),
                         (uint64x2_t)v94,
                         (uint64x2_t)vextq_s8((int8x16_t)v79, (int8x16_t)v84, 8u));
      v100 = vaddq_s64(v88, v97);
      v101 = (int8x16_t)vaddq_s64(v99, v24[6]);
      v102 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v95, (int64x2_t)vextq_s8(v66, v66, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v100, (int8x16_t)v95, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v93, (int8x16_t)v100, 8u));
      v103 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v102, (uint64x2_t)v93, (uint64x2_t)v98);
      v104 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v64, (uint64x2_t)v69),
                          (uint64x2_t)v99,
                          (uint64x2_t)vextq_s8((int8x16_t)v84, (int8x16_t)v89, 8u));
      v105 = vaddq_s64(v93, v102);
      v106 = (int8x16_t)vaddq_s64(v104, v24[7]);
      v24 += 8;
      v107 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v100, (int64x2_t)vextq_s8(v71, v71, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v105, (int8x16_t)v100, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v98, (int8x16_t)v105, 8u));
      v108 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v107, (uint64x2_t)v98, (uint64x2_t)v103);
      v109 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v69, (uint64x2_t)v74),
                          (uint64x2_t)v104,
                          (uint64x2_t)vextq_s8((int8x16_t)v89, (int8x16_t)v94, 8u));
      v110 = vaddq_s64(v98, v107);
      v111 = (int8x16_t)vaddq_s64(v109, *v24);
      v112 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v105, (int64x2_t)vextq_s8(v76, v76, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v110, (int8x16_t)v105, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v103, (int8x16_t)v110, 8u));
      v113 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v112, (uint64x2_t)v103, (uint64x2_t)v108);
      v114 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v74, (uint64x2_t)v79),
                          (uint64x2_t)v109,
                          (uint64x2_t)vextq_s8((int8x16_t)v94, (int8x16_t)v99, 8u));
      v115 = vaddq_s64(v103, v112);
      v116 = (int8x16_t)vaddq_s64(v114, v24[1]);
      v117 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v110, (int64x2_t)vextq_s8(v81, v81, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v115, (int8x16_t)v110, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v108, (int8x16_t)v115, 8u));
      v118 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v117, (uint64x2_t)v108, (uint64x2_t)v113);
      v119 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v79, (uint64x2_t)v84),
                          (uint64x2_t)v114,
                          (uint64x2_t)vextq_s8((int8x16_t)v99, (int8x16_t)v104, 8u));
      v120 = vaddq_s64(v108, v117);
      v121 = (int8x16_t)vaddq_s64(v119, v24[2]);
      v122 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v115, (int64x2_t)vextq_s8(v86, v86, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v120, (int8x16_t)v115, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v113, (int8x16_t)v120, 8u));
      v123 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v122, (uint64x2_t)v113, (uint64x2_t)v118);
      v124 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v84, (uint64x2_t)v89),
                          (uint64x2_t)v119,
                          (uint64x2_t)vextq_s8((int8x16_t)v104, (int8x16_t)v109, 8u));
      v125 = vaddq_s64(v113, v122);
      v126 = (int8x16_t)vaddq_s64(v124, v24[3]);
      v127 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v120, (int64x2_t)vextq_s8(v91, v91, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v125, (int8x16_t)v120, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v118, (int8x16_t)v125, 8u));
      v128 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v127, (uint64x2_t)v118, (uint64x2_t)v123);
      v129 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v89, (uint64x2_t)v94),
                          (uint64x2_t)v124,
                          (uint64x2_t)vextq_s8((int8x16_t)v109, (int8x16_t)v114, 8u));
      v130 = vaddq_s64(v118, v127);
      v131 = (int8x16_t)vaddq_s64(v129, v24[4]);
      v132 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v125, (int64x2_t)vextq_s8(v96, v96, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v130, (int8x16_t)v125, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v123, (int8x16_t)v130, 8u));
      v133 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v132, (uint64x2_t)v123, (uint64x2_t)v128);
      v134 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v94, (uint64x2_t)v99),
                          (uint64x2_t)v129,
                          (uint64x2_t)vextq_s8((int8x16_t)v114, (int8x16_t)v119, 8u));
      v135 = vaddq_s64(v123, v132);
      v136 = (int8x16_t)vaddq_s64(v134, v24[5]);
      v137 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v130, (int64x2_t)vextq_s8(v101, v101, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v135, (int8x16_t)v130, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v128, (int8x16_t)v135, 8u));
      v138 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v137, (uint64x2_t)v128, (uint64x2_t)v133);
      v139 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v99, (uint64x2_t)v104),
                          (uint64x2_t)v134,
                          (uint64x2_t)vextq_s8((int8x16_t)v119, (int8x16_t)v124, 8u));
      v140 = vaddq_s64(v128, v137);
      v141 = (int8x16_t)vaddq_s64(v139, v24[6]);
      v142 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v135, (int64x2_t)vextq_s8(v106, v106, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v140, (int8x16_t)v135, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v133, (int8x16_t)v140, 8u));
      v143 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v142, (uint64x2_t)v133, (uint64x2_t)v138);
      v144 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v104, (uint64x2_t)v109),
                          (uint64x2_t)v139,
                          (uint64x2_t)vextq_s8((int8x16_t)v124, (int8x16_t)v129, 8u));
      v145 = vaddq_s64(v133, v142);
      v146 = (int8x16_t)vaddq_s64(v144, v24[7]);
      v24 += 8;
      v147 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v140, (int64x2_t)vextq_s8(v111, v111, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v145, (int8x16_t)v140, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v138, (int8x16_t)v145, 8u));
      v148 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v147, (uint64x2_t)v138, (uint64x2_t)v143);
      v149 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v109, (uint64x2_t)v114),
                          (uint64x2_t)v144,
                          (uint64x2_t)vextq_s8((int8x16_t)v129, (int8x16_t)v134, 8u));
      v150 = vaddq_s64(v138, v147);
      v151 = (int8x16_t)vaddq_s64(v149, *v24);
      v152 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v145, (int64x2_t)vextq_s8(v116, v116, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v150, (int8x16_t)v145, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v143, (int8x16_t)v150, 8u));
      v153 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v152, (uint64x2_t)v143, (uint64x2_t)v148);
      v154 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v114, (uint64x2_t)v119),
                          (uint64x2_t)v149,
                          (uint64x2_t)vextq_s8((int8x16_t)v134, (int8x16_t)v139, 8u));
      v155 = vaddq_s64(v143, v152);
      v156 = (int8x16_t)vaddq_s64(v154, v24[1]);
      v157 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v150, (int64x2_t)vextq_s8(v121, v121, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v155, (int8x16_t)v150, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v148, (int8x16_t)v155, 8u));
      v158 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v157, (uint64x2_t)v148, (uint64x2_t)v153);
      v159 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v119, (uint64x2_t)v124),
                          (uint64x2_t)v154,
                          (uint64x2_t)vextq_s8((int8x16_t)v139, (int8x16_t)v144, 8u));
      v160 = vaddq_s64(v148, v157);
      v161 = (int8x16_t)vaddq_s64(v159, v24[2]);
      v162 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v155, (int64x2_t)vextq_s8(v126, v126, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v160, (int8x16_t)v155, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v153, (int8x16_t)v160, 8u));
      v163 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v162, (uint64x2_t)v153, (uint64x2_t)v158);
      v164 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v124, (uint64x2_t)v129),
                          (uint64x2_t)v159,
                          (uint64x2_t)vextq_s8((int8x16_t)v144, (int8x16_t)v149, 8u));
      v165 = vaddq_s64(v153, v162);
      v166 = (int8x16_t)vaddq_s64(v164, v24[3]);
      v167 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v160, (int64x2_t)vextq_s8(v131, v131, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v165, (int8x16_t)v160, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v158, (int8x16_t)v165, 8u));
      v168 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v167, (uint64x2_t)v158, (uint64x2_t)v163);
      v169 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v129, (uint64x2_t)v134),
                          (uint64x2_t)v164,
                          (uint64x2_t)vextq_s8((int8x16_t)v149, (int8x16_t)v154, 8u));
      v170 = vaddq_s64(v158, v167);
      v171 = (int8x16_t)vaddq_s64(v169, v24[4]);
      v172 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v165, (int64x2_t)vextq_s8(v136, v136, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v170, (int8x16_t)v165, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v163, (int8x16_t)v170, 8u));
      v173 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v172, (uint64x2_t)v163, (uint64x2_t)v168);
      v174 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v134, (uint64x2_t)v139),
                          (uint64x2_t)v169,
                          (uint64x2_t)vextq_s8((int8x16_t)v154, (int8x16_t)v159, 8u));
      v175 = vaddq_s64(v163, v172);
      v176 = (int8x16_t)vaddq_s64(v174, v24[5]);
      v177 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v170, (int64x2_t)vextq_s8(v141, v141, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v175, (int8x16_t)v170, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v168, (int8x16_t)v175, 8u));
      v178 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v177, (uint64x2_t)v168, (uint64x2_t)v173);
      v179 = (int64x2_t)vsha512su1q_u64(
                          vsha512su0q_u64((uint64x2_t)v139, (uint64x2_t)v144),
                          (uint64x2_t)v174,
                          (uint64x2_t)vextq_s8((int8x16_t)v159, (int8x16_t)v164, 8u));
      v180 = vaddq_s64(v168, v177);
      v181 = (int8x16_t)vaddq_s64(v179, v24[6]);
      v182 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v175, (int64x2_t)vextq_s8(v146, v146, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v180, (int8x16_t)v175, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v173, (int8x16_t)v180, 8u));
      v183 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v182, (uint64x2_t)v173, (uint64x2_t)v178);
      v184 = vaddq_s64(v173, v182);
      v185 = (int8x16_t)vaddq_s64(
                          (int64x2_t)vsha512su1q_u64(
                                       vsha512su0q_u64((uint64x2_t)v144, (uint64x2_t)v149),
                                       (uint64x2_t)v179,
                                       (uint64x2_t)vextq_s8((int8x16_t)v164, (int8x16_t)v169, 8u)),
                          v24[7]);
      v186 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v180, (int64x2_t)vextq_s8(v151, v151, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v184, (int8x16_t)v180, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v178, (int8x16_t)v184, 8u));
      v187 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v186, (uint64x2_t)v178, (uint64x2_t)v183);
      v188 = vaddq_s64(v178, v186);
      v189 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v184, (int64x2_t)vextq_s8(v156, v156, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v188, (int8x16_t)v184, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v183, (int8x16_t)v188, 8u));
      v190 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v189, (uint64x2_t)v183, (uint64x2_t)v187);
      v191 = vaddq_s64(v183, v189);
      v192 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v188, (int64x2_t)vextq_s8(v161, v161, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v191, (int8x16_t)v188, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v187, (int8x16_t)v191, 8u));
      v193 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v192, (uint64x2_t)v187, (uint64x2_t)v190);
      v194 = vaddq_s64(v187, v192);
      v195 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v191, (int64x2_t)vextq_s8(v166, v166, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v194, (int8x16_t)v191, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v190, (int8x16_t)v194, 8u));
      v196 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v195, (uint64x2_t)v190, (uint64x2_t)v193);
      v197 = vaddq_s64(v190, v195);
      v198 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v194, (int64x2_t)vextq_s8(v171, v171, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v197, (int8x16_t)v194, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v193, (int8x16_t)v197, 8u));
      v199 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v198, (uint64x2_t)v193, (uint64x2_t)v196);
      v200 = vaddq_s64(v193, v198);
      v201 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v197, (int64x2_t)vextq_s8(v176, v176, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v200, (int8x16_t)v197, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v196, (int8x16_t)v200, 8u));
      v202 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v201, (uint64x2_t)v196, (uint64x2_t)v199);
      v203 = vaddq_s64(v196, v201);
      v204 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v200, (int64x2_t)vextq_s8(v181, v181, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v203, (int8x16_t)v200, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v199, (int8x16_t)v203, 8u));
      v205 = (int64x2_t)vsha512h2q_u64((uint64x2_t)v204, (uint64x2_t)v199, (uint64x2_t)v202);
      v206 = vaddq_s64(v199, v204);
      v207 = (int64x2_t)vsha512hq_u64(
                          (uint64x2_t)vaddq_s64(v203, (int64x2_t)vextq_s8(v185, v185, 8u)),
                          (uint64x2_t)vextq_s8((int8x16_t)v206, (int8x16_t)v203, 8u),
                          (uint64x2_t)vextq_s8((int8x16_t)v202, (int8x16_t)v206, 8u));
      v4 = vaddq_s64(v4, (int64x2_t)vsha512h2q_u64((uint64x2_t)v207, (uint64x2_t)v202, (uint64x2_t)v205));
      v5 = vaddq_s64(v5, v205);
      v6 = vaddq_s64(v6, vaddq_s64(v202, v207));
      v7 = vaddq_s64(v7, v206);
      v208 = a2-- <= 1;
      v3 = v24 - 32;
    }
    while ( !v208 );
    *result = v4;
    result[1] = v5;
    result[2] = v6;
    result[3] = v7;
  }
  return result;
}
