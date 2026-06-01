__int64 *__fastcall AccelerateCrypto_SHA512_compress(__int64 *result, __int64 a2, int8x16_t *a3)
{
  int8x16_t *v3; // x2
  int8x16_t v4; // t1
  int8x16_t v5; // q0
  int8x16_t v6; // q1
  int8x16_t v7; // q2
  int8x16_t v8; // q3
  int8x16_t v9; // q4
  int8x16_t v10; // q5
  int8x16_t v11; // q6
  int8x16_t v12; // q7
  int64x2_t *v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 v20; // x10
  __int64 v21; // x11
  int v22; // w15
  int64x2_t v23; // q19
  int8x16_t v24; // q16
  int64x2_t v25; // q17
  __int64 v26; // x11
  int8x16_t v27; // q20
  int64x2_t v28; // q21
  __int64 v29; // x7
  __int64 v30; // x11
  int8x16_t v31; // q18
  int64x2_t v32; // q16
  int64x2_t *v33; // x3
  __int64 v34; // x10
  __int64 v35; // x6
  __int64 v36; // x10
  int64x2_t v37; // q19
  int8x16_t v38; // q16
  int64x2_t v39; // q17
  __int64 v40; // x9
  int8x16_t v41; // q20
  int64x2_t v42; // q21
  __int64 v43; // x5
  __int64 v44; // x9
  int8x16_t v45; // q18
  int64x2_t v46; // q16
  __int64 v47; // x8
  __int64 v48; // x4
  __int64 v49; // x8
  int64x2_t v50; // q19
  int8x16_t v51; // q16
  int64x2_t v52; // q17
  __int64 v53; // x7
  int8x16_t v54; // q20
  int64x2_t v55; // q21
  __int64 v56; // x11
  __int64 v57; // x7
  int8x16_t v58; // q18
  int64x2_t v59; // q16
  __int64 v60; // x6
  __int64 v61; // x10
  __int64 v62; // x6
  int64x2_t v63; // q19
  int8x16_t v64; // q16
  int64x2_t v65; // q17
  __int64 v66; // x5
  int8x16_t v67; // q20
  int64x2_t v68; // q21
  __int64 v69; // x9
  __int64 v70; // x5
  int8x16_t v71; // q18
  int64x2_t v72; // q16
  __int64 v73; // x4
  __int64 v74; // x8
  __int64 v75; // x4
  int64x2_t v76; // q19
  int8x16_t v77; // q16
  int64x2_t v78; // q17
  __int64 v79; // x11
  int8x16_t v80; // q20
  int64x2_t v81; // q21
  __int64 v82; // x7
  __int64 v83; // x11
  int8x16_t v84; // q18
  int64x2_t v85; // q16
  __int64 v86; // x10
  __int64 v87; // x6
  __int64 v88; // x10
  int64x2_t v89; // q19
  int8x16_t v90; // q16
  int64x2_t v91; // q17
  __int64 v92; // x9
  int8x16_t v93; // q20
  int64x2_t v94; // q21
  __int64 v95; // x5
  __int64 v96; // x9
  int8x16_t v97; // q18
  int64x2_t v98; // q16
  __int64 v99; // x8
  __int64 v100; // x4
  __int64 v101; // x8
  int64x2_t v102; // q19
  int8x16_t v103; // q16
  int64x2_t v104; // q17
  __int64 v105; // x7
  int8x16_t v106; // q20
  int64x2_t v107; // q21
  int8x16_t v108; // q18
  int64x2_t v109; // q16
  __int64 v110; // x6
  int64x2_t v111; // q19
  int8x16_t v112; // q16
  int64x2_t v113; // q17
  __int64 v114; // x5
  int8x16_t v115; // q20
  int64x2_t v116; // q21
  int8x16_t v117; // q18
  int64x2_t v118; // q16
  __int64 v119; // x4
  bool v120; // vf
  int64x2_t *v121; // x3
  int8x16_t *v122; // x2
  int8x16_t v123; // q0
  __int64 v124; // x11
  int64x2_t *v125; // x3
  int64x2_t v126; // q16
  __int64 v127; // x7
  __int64 v128; // x11
  __int64 v129; // x10
  __int64 v130; // x6
  __int64 v131; // x10
  int8x16_t v132; // q1
  __int64 v133; // x9
  int64x2_t v134; // q16
  __int64 v135; // x5
  __int64 v136; // x9
  __int64 v137; // x8
  __int64 v138; // x4
  __int64 v139; // x8
  int8x16_t v140; // q2
  __int64 v141; // x7
  int64x2_t v142; // q16
  __int64 v143; // x11
  __int64 v144; // x7
  __int64 v145; // x6
  __int64 v146; // x10
  __int64 v147; // x6
  int8x16_t v148; // q3
  __int64 v149; // x5
  int64x2_t v150; // q16
  __int64 v151; // x9
  __int64 v152; // x5
  __int64 v153; // x4
  __int64 v154; // x8
  __int64 v155; // x4
  int8x16_t v156; // q4
  __int64 v157; // x11
  int64x2_t v158; // q16
  __int64 v159; // x7
  __int64 v160; // x11
  __int64 v161; // x10
  __int64 v162; // x6
  __int64 v163; // x10
  int8x16_t v164; // q5
  __int64 v165; // x9
  int64x2_t v166; // q16
  __int64 v167; // x5
  __int64 v168; // x9
  __int64 v169; // x8
  __int64 v170; // x4
  __int64 v171; // x8
  int8x16_t v172; // q6
  __int64 v173; // x7
  int64x2_t v174; // q16
  __int64 v175; // x11
  __int64 v176; // x7
  __int64 v177; // x6
  __int64 v178; // x10
  __int64 v179; // x6
  int8x16_t v180; // q7
  __int64 v181; // x5
  int64x2_t v182; // q16
  __int64 v183; // x9
  __int64 v184; // x5
  __int64 v185; // x4
  __int64 v186; // x13
  __int64 v187; // x13
  __int64 v188; // x13
  __int64 v189; // x13
  __int64 v190; // x11
  __int64 v191; // x7
  __int64 v192; // x11
  __int64 v193; // x10
  __int64 v194; // x6
  __int64 v195; // x10
  __int64 v196; // x9
  __int64 v197; // x5
  __int64 v198; // x9
  __int64 v199; // x8
  __int64 v200; // x4
  __int64 v201; // x8
  __int64 v202; // x7
  __int64 v203; // x11
  __int64 v204; // x7
  __int64 v205; // x6
  __int64 v206; // x10
  __int64 v207; // x6
  __int64 v208; // x5
  __int64 v209; // x9
  __int64 v210; // x5
  __int64 v211; // x4
  __int64 v212; // x8
  __int64 v213; // x4
  __int64 v214; // x11
  __int64 v215; // x7
  __int64 v216; // x11
  __int64 v217; // x10
  __int64 v218; // x6
  __int64 v219; // x10
  __int64 v220; // x9
  __int64 v221; // x5
  __int64 v222; // x9
  __int64 v223; // x8
  __int64 v224; // x4
  __int64 v225; // x8
  __int64 v226; // x7
  __int64 v227; // x11
  __int64 v228; // x7
  __int64 v229; // x6
  __int64 v230; // x10
  __int64 v231; // x6
  __int64 v232; // x5
  __int64 v233; // x9
  __int64 v234; // x5
  __int64 v235; // x4
  __int64 v236; // x13
  __int64 v237; // x13
  __int64 v238; // x13
  __int64 v239; // x13
  int64x2_t v240; // [xsp+0h] [xbp-80h]
  int64x2_t v241; // [xsp+10h] [xbp-70h]
  int64x2_t v242; // [xsp+20h] [xbp-60h]
  int64x2_t v243; // [xsp+30h] [xbp-50h]
  int64x2_t v244; // [xsp+40h] [xbp-40h]
  int64x2_t v245; // [xsp+50h] [xbp-30h]
  int64x2_t v246; // [xsp+60h] [xbp-20h]
  int64x2_t v247; // [xsp+70h] [xbp-10h]

  if ( a2 )
  {
    v4 = *a3;
    v3 = a3 + 8;
    v5 = vrev64q_s8(v4);
    v6 = vrev64q_s8(v3[-7]);
    v7 = vrev64q_s8(v3[-6]);
    v8 = vrev64q_s8(v3[-5]);
    v9 = vrev64q_s8(v3[-4]);
    v10 = vrev64q_s8(v3[-3]);
    v11 = vrev64q_s8(v3[-2]);
    v12 = vrev64q_s8(v3[-1]);
    v13 = (int64x2_t *)&unk_7CCD0;
    v240 = vaddq_s64((int64x2_t)sha512_K, (int64x2_t)v5);
    v241 = vaddq_s64((int64x2_t)xmmword_7CC60, (int64x2_t)v6);
    v242 = vaddq_s64((int64x2_t)xmmword_7CC70, (int64x2_t)v7);
    v243 = vaddq_s64((int64x2_t)xmmword_7CC80, (int64x2_t)v8);
    v244 = vaddq_s64((int64x2_t)xmmword_7CC90, (int64x2_t)v9);
    v245 = vaddq_s64((int64x2_t)xmmword_7CCA0, (int64x2_t)v10);
    v246 = vaddq_s64((int64x2_t)xmmword_7CCB0, (int64x2_t)v11);
    v247 = vaddq_s64((int64x2_t)xmmword_7CCC0, (int64x2_t)v12);
    while ( 1 )
    {
      v14 = *result;
      v15 = result[1];
      v16 = result[2];
      v17 = result[3];
      v18 = result[4];
      v19 = result[5];
      v20 = result[6];
      v21 = result[7];
      v22 = 4;
      do
      {
        v23 = (int64x2_t)vextq_s8(v5, v6, 8u);
        v24 = (int8x16_t)vshrq_n_u64((uint64x2_t)v12, 0x13u);
        v25 = vshlq_n_s64((int64x2_t)v12, 3u);
        v26 = v21
            + v240.i64[0]
            + (__ROR8__(v18, 14) ^ __ROR8__(v18, 18) ^ __ROR8__(v18, 41))
            + ((v19 ^ v20) & v18 ^ v20);
        v27 = (int8x16_t)vshrq_n_u64((uint64x2_t)v23, 1u);
        v28 = vshlq_n_s64(v23, 0x38u);
        v29 = v17 + v26;
        v30 = v26 + (__ROR8__(v14, 28) ^ __ROR8__(v14, 34) ^ __ROR8__(v14, 39)) + ((v15 ^ v16) & v14 ^ v15 & v16);
        v31 = veorq_s8(
                veorq_s8(veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v12, 6u), v24), (int8x16_t)v25),
                (int8x16_t)vshrq_n_u64((uint64x2_t)v24, 0x2Au));
        v32 = *v13;
        v33 = v13 + 1;
        v5 = (int8x16_t)vaddq_s64(
                          vaddq_s64(
                            vaddq_s64((int64x2_t)v5, (int64x2_t)vextq_s8(v9, v10, 8u)),
                            (int64x2_t)veorq_s8(v31, (int8x16_t)vshlq_n_s64(v25, 0x2Au))),
                          (int64x2_t)veorq_s8(
                                       veorq_s8(
                                         veorq_s8(
                                           veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v23, 7u), v27),
                                           (int8x16_t)v28),
                                         (int8x16_t)vshrq_n_u64((uint64x2_t)v27, 7u)),
                                       (int8x16_t)vshlq_n_s64(v28, 7u)));
        v34 = v20
            + v240.i64[1]
            + (__ROR8__(v29, 14) ^ __ROR8__(v29, 18) ^ __ROR8__(v29, 41))
            + ((v18 ^ v19) & v29 ^ v19);
        v35 = v16 + v34;
        v36 = v34 + (__ROR8__(v30, 28) ^ __ROR8__(v30, 34) ^ __ROR8__(v30, 39)) + ((v14 ^ v15) & v30 ^ v14 & v15);
        v240 = vaddq_s64(v32, (int64x2_t)v5);
        v37 = (int64x2_t)vextq_s8(v6, v7, 8u);
        v38 = (int8x16_t)vshrq_n_u64((uint64x2_t)v5, 0x13u);
        v39 = vshlq_n_s64((int64x2_t)v5, 3u);
        v40 = v19
            + v241.i64[0]
            + (__ROR8__(v35, 14) ^ __ROR8__(v35, 18) ^ __ROR8__(v35, 41))
            + ((v29 ^ v18) & v35 ^ v18);
        v41 = (int8x16_t)vshrq_n_u64((uint64x2_t)v37, 1u);
        v42 = vshlq_n_s64(v37, 0x38u);
        v43 = v15 + v40;
        v44 = v40 + (__ROR8__(v36, 28) ^ __ROR8__(v36, 34) ^ __ROR8__(v36, 39)) + ((v30 ^ v14) & v36 ^ v30 & v14);
        v45 = veorq_s8(
                veorq_s8(veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v5, 6u), v38), (int8x16_t)v39),
                (int8x16_t)vshrq_n_u64((uint64x2_t)v38, 0x2Au));
        v46 = *v33++;
        v6 = (int8x16_t)vaddq_s64(
                          vaddq_s64(
                            vaddq_s64((int64x2_t)v6, (int64x2_t)vextq_s8(v10, v11, 8u)),
                            (int64x2_t)veorq_s8(v45, (int8x16_t)vshlq_n_s64(v39, 0x2Au))),
                          (int64x2_t)veorq_s8(
                                       veorq_s8(
                                         veorq_s8(
                                           veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v37, 7u), v41),
                                           (int8x16_t)v42),
                                         (int8x16_t)vshrq_n_u64((uint64x2_t)v41, 7u)),
                                       (int8x16_t)vshlq_n_s64(v42, 7u)));
        v47 = v18
            + v241.i64[1]
            + (__ROR8__(v43, 14) ^ __ROR8__(v43, 18) ^ __ROR8__(v43, 41))
            + ((v35 ^ v29) & v43 ^ v29);
        v48 = v14 + v47;
        v49 = v47 + (__ROR8__(v44, 28) ^ __ROR8__(v44, 34) ^ __ROR8__(v44, 39)) + ((v36 ^ v30) & v44 ^ v36 & v30);
        v241 = vaddq_s64(v46, (int64x2_t)v6);
        v50 = (int64x2_t)vextq_s8(v7, v8, 8u);
        v51 = (int8x16_t)vshrq_n_u64((uint64x2_t)v6, 0x13u);
        v52 = vshlq_n_s64((int64x2_t)v6, 3u);
        v53 = v29
            + v242.i64[0]
            + (__ROR8__(v48, 14) ^ __ROR8__(v48, 18) ^ __ROR8__(v48, 41))
            + ((v43 ^ v35) & v48 ^ v35);
        v54 = (int8x16_t)vshrq_n_u64((uint64x2_t)v50, 1u);
        v55 = vshlq_n_s64(v50, 0x38u);
        v56 = v30 + v53;
        v57 = v53 + (__ROR8__(v49, 28) ^ __ROR8__(v49, 34) ^ __ROR8__(v49, 39)) + ((v44 ^ v36) & v49 ^ v44 & v36);
        v58 = veorq_s8(
                veorq_s8(veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v6, 6u), v51), (int8x16_t)v52),
                (int8x16_t)vshrq_n_u64((uint64x2_t)v51, 0x2Au));
        v59 = *v33++;
        v7 = (int8x16_t)vaddq_s64(
                          vaddq_s64(
                            vaddq_s64((int64x2_t)v7, (int64x2_t)vextq_s8(v11, v12, 8u)),
                            (int64x2_t)veorq_s8(v58, (int8x16_t)vshlq_n_s64(v52, 0x2Au))),
                          (int64x2_t)veorq_s8(
                                       veorq_s8(
                                         veorq_s8(
                                           veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v50, 7u), v54),
                                           (int8x16_t)v55),
                                         (int8x16_t)vshrq_n_u64((uint64x2_t)v54, 7u)),
                                       (int8x16_t)vshlq_n_s64(v55, 7u)));
        v60 = v35
            + v242.i64[1]
            + (__ROR8__(v56, 14) ^ __ROR8__(v56, 18) ^ __ROR8__(v56, 41))
            + ((v48 ^ v43) & v56 ^ v43);
        v61 = v36 + v60;
        v62 = v60 + (__ROR8__(v57, 28) ^ __ROR8__(v57, 34) ^ __ROR8__(v57, 39)) + ((v49 ^ v44) & v57 ^ v49 & v44);
        v242 = vaddq_s64(v59, (int64x2_t)v7);
        v63 = (int64x2_t)vextq_s8(v8, v9, 8u);
        v64 = (int8x16_t)vshrq_n_u64((uint64x2_t)v7, 0x13u);
        v65 = vshlq_n_s64((int64x2_t)v7, 3u);
        v66 = v43
            + v243.i64[0]
            + (__ROR8__(v61, 14) ^ __ROR8__(v61, 18) ^ __ROR8__(v61, 41))
            + ((v56 ^ v48) & v61 ^ v48);
        v67 = (int8x16_t)vshrq_n_u64((uint64x2_t)v63, 1u);
        v68 = vshlq_n_s64(v63, 0x38u);
        v69 = v44 + v66;
        v70 = v66 + (__ROR8__(v62, 28) ^ __ROR8__(v62, 34) ^ __ROR8__(v62, 39)) + ((v57 ^ v49) & v62 ^ v57 & v49);
        v71 = veorq_s8(
                veorq_s8(veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v7, 6u), v64), (int8x16_t)v65),
                (int8x16_t)vshrq_n_u64((uint64x2_t)v64, 0x2Au));
        v72 = *v33++;
        v8 = (int8x16_t)vaddq_s64(
                          vaddq_s64(
                            vaddq_s64((int64x2_t)v8, (int64x2_t)vextq_s8(v12, v5, 8u)),
                            (int64x2_t)veorq_s8(v71, (int8x16_t)vshlq_n_s64(v65, 0x2Au))),
                          (int64x2_t)veorq_s8(
                                       veorq_s8(
                                         veorq_s8(
                                           veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v63, 7u), v67),
                                           (int8x16_t)v68),
                                         (int8x16_t)vshrq_n_u64((uint64x2_t)v67, 7u)),
                                       (int8x16_t)vshlq_n_s64(v68, 7u)));
        v73 = v48
            + v243.i64[1]
            + (__ROR8__(v69, 14) ^ __ROR8__(v69, 18) ^ __ROR8__(v69, 41))
            + ((v61 ^ v56) & v69 ^ v56);
        v74 = v49 + v73;
        v75 = v73 + (__ROR8__(v70, 28) ^ __ROR8__(v70, 34) ^ __ROR8__(v70, 39)) + ((v62 ^ v57) & v70 ^ v62 & v57);
        v243 = vaddq_s64(v72, (int64x2_t)v8);
        v76 = (int64x2_t)vextq_s8(v9, v10, 8u);
        v77 = (int8x16_t)vshrq_n_u64((uint64x2_t)v8, 0x13u);
        v78 = vshlq_n_s64((int64x2_t)v8, 3u);
        v79 = v56
            + v244.i64[0]
            + (__ROR8__(v74, 14) ^ __ROR8__(v74, 18) ^ __ROR8__(v74, 41))
            + ((v69 ^ v61) & v74 ^ v61);
        v80 = (int8x16_t)vshrq_n_u64((uint64x2_t)v76, 1u);
        v81 = vshlq_n_s64(v76, 0x38u);
        v82 = v57 + v79;
        v83 = v79 + (__ROR8__(v75, 28) ^ __ROR8__(v75, 34) ^ __ROR8__(v75, 39)) + ((v70 ^ v62) & v75 ^ v70 & v62);
        v84 = veorq_s8(
                veorq_s8(veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v8, 6u), v77), (int8x16_t)v78),
                (int8x16_t)vshrq_n_u64((uint64x2_t)v77, 0x2Au));
        v85 = *v33++;
        v9 = (int8x16_t)vaddq_s64(
                          vaddq_s64(
                            vaddq_s64((int64x2_t)v9, (int64x2_t)vextq_s8(v5, v6, 8u)),
                            (int64x2_t)veorq_s8(v84, (int8x16_t)vshlq_n_s64(v78, 0x2Au))),
                          (int64x2_t)veorq_s8(
                                       veorq_s8(
                                         veorq_s8(
                                           veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v76, 7u), v80),
                                           (int8x16_t)v81),
                                         (int8x16_t)vshrq_n_u64((uint64x2_t)v80, 7u)),
                                       (int8x16_t)vshlq_n_s64(v81, 7u)));
        v86 = v61
            + v244.i64[1]
            + (__ROR8__(v82, 14) ^ __ROR8__(v82, 18) ^ __ROR8__(v82, 41))
            + ((v74 ^ v69) & v82 ^ v69);
        v87 = v62 + v86;
        v88 = v86 + (__ROR8__(v83, 28) ^ __ROR8__(v83, 34) ^ __ROR8__(v83, 39)) + ((v75 ^ v70) & v83 ^ v75 & v70);
        v244 = vaddq_s64(v85, (int64x2_t)v9);
        v89 = (int64x2_t)vextq_s8(v10, v11, 8u);
        v90 = (int8x16_t)vshrq_n_u64((uint64x2_t)v9, 0x13u);
        v91 = vshlq_n_s64((int64x2_t)v9, 3u);
        v92 = v69
            + v245.i64[0]
            + (__ROR8__(v87, 14) ^ __ROR8__(v87, 18) ^ __ROR8__(v87, 41))
            + ((v82 ^ v74) & v87 ^ v74);
        v93 = (int8x16_t)vshrq_n_u64((uint64x2_t)v89, 1u);
        v94 = vshlq_n_s64(v89, 0x38u);
        v95 = v70 + v92;
        v96 = v92 + (__ROR8__(v88, 28) ^ __ROR8__(v88, 34) ^ __ROR8__(v88, 39)) + ((v83 ^ v75) & v88 ^ v83 & v75);
        v97 = veorq_s8(
                veorq_s8(veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v9, 6u), v90), (int8x16_t)v91),
                (int8x16_t)vshrq_n_u64((uint64x2_t)v90, 0x2Au));
        v98 = *v33++;
        v10 = (int8x16_t)vaddq_s64(
                           vaddq_s64(
                             vaddq_s64((int64x2_t)v10, (int64x2_t)vextq_s8(v6, v7, 8u)),
                             (int64x2_t)veorq_s8(v97, (int8x16_t)vshlq_n_s64(v91, 0x2Au))),
                           (int64x2_t)veorq_s8(
                                        veorq_s8(
                                          veorq_s8(
                                            veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v89, 7u), v93),
                                            (int8x16_t)v94),
                                          (int8x16_t)vshrq_n_u64((uint64x2_t)v93, 7u)),
                                        (int8x16_t)vshlq_n_s64(v94, 7u)));
        v99 = v74
            + v245.i64[1]
            + (__ROR8__(v95, 14) ^ __ROR8__(v95, 18) ^ __ROR8__(v95, 41))
            + ((v87 ^ v82) & v95 ^ v82);
        v100 = v75 + v99;
        v101 = v99 + (__ROR8__(v96, 28) ^ __ROR8__(v96, 34) ^ __ROR8__(v96, 39)) + ((v88 ^ v83) & v96 ^ v88 & v83);
        v245 = vaddq_s64(v98, (int64x2_t)v10);
        v102 = (int64x2_t)vextq_s8(v11, v12, 8u);
        v103 = (int8x16_t)vshrq_n_u64((uint64x2_t)v10, 0x13u);
        v104 = vshlq_n_s64((int64x2_t)v10, 3u);
        v105 = v82
             + v246.i64[0]
             + (__ROR8__(v100, 14) ^ __ROR8__(v100, 18) ^ __ROR8__(v100, 41))
             + ((v95 ^ v87) & v100 ^ v87);
        v106 = (int8x16_t)vshrq_n_u64((uint64x2_t)v102, 1u);
        v107 = vshlq_n_s64(v102, 0x38u);
        v21 = v83 + v105;
        v17 = v105 + (__ROR8__(v101, 28) ^ __ROR8__(v101, 34) ^ __ROR8__(v101, 39)) + ((v96 ^ v88) & v101 ^ v96 & v88);
        v108 = veorq_s8(
                 veorq_s8(veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v10, 6u), v103), (int8x16_t)v104),
                 (int8x16_t)vshrq_n_u64((uint64x2_t)v103, 0x2Au));
        v109 = *v33++;
        v11 = (int8x16_t)vaddq_s64(
                           vaddq_s64(
                             vaddq_s64((int64x2_t)v11, (int64x2_t)vextq_s8(v7, v8, 8u)),
                             (int64x2_t)veorq_s8(v108, (int8x16_t)vshlq_n_s64(v104, 0x2Au))),
                           (int64x2_t)veorq_s8(
                                        veorq_s8(
                                          veorq_s8(
                                            veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v102, 7u), v106),
                                            (int8x16_t)v107),
                                          (int8x16_t)vshrq_n_u64((uint64x2_t)v106, 7u)),
                                        (int8x16_t)vshlq_n_s64(v107, 7u)));
        v110 = v87
             + v246.i64[1]
             + (__ROR8__(v21, 14) ^ __ROR8__(v21, 18) ^ __ROR8__(v21, 41))
             + ((v100 ^ v95) & v21 ^ v95);
        v20 = v88 + v110;
        v16 = v110 + (__ROR8__(v17, 28) ^ __ROR8__(v17, 34) ^ __ROR8__(v17, 39)) + ((v101 ^ v96) & v17 ^ v101 & v96);
        v246 = vaddq_s64(v109, (int64x2_t)v11);
        v111 = (int64x2_t)vextq_s8(v12, v5, 8u);
        v112 = (int8x16_t)vshrq_n_u64((uint64x2_t)v11, 0x13u);
        v113 = vshlq_n_s64((int64x2_t)v11, 3u);
        v114 = v95
             + v247.i64[0]
             + (__ROR8__(v20, 14) ^ __ROR8__(v20, 18) ^ __ROR8__(v20, 41))
             + ((v21 ^ v100) & v20 ^ v100);
        v115 = (int8x16_t)vshrq_n_u64((uint64x2_t)v111, 1u);
        v116 = vshlq_n_s64(v111, 0x38u);
        v19 = v96 + v114;
        v15 = v114 + (__ROR8__(v16, 28) ^ __ROR8__(v16, 34) ^ __ROR8__(v16, 39)) + ((v17 ^ v101) & v16 ^ v17 & v101);
        v117 = veorq_s8(
                 veorq_s8(veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v11, 6u), v112), (int8x16_t)v113),
                 (int8x16_t)vshrq_n_u64((uint64x2_t)v112, 0x2Au));
        v118 = *v33;
        v13 = v33 + 1;
        v12 = (int8x16_t)vaddq_s64(
                           vaddq_s64(
                             vaddq_s64((int64x2_t)v12, (int64x2_t)vextq_s8(v8, v9, 8u)),
                             (int64x2_t)veorq_s8(v117, (int8x16_t)vshlq_n_s64(v113, 0x2Au))),
                           (int64x2_t)veorq_s8(
                                        veorq_s8(
                                          veorq_s8(
                                            veorq_s8((int8x16_t)vshrq_n_u64((uint64x2_t)v111, 7u), v115),
                                            (int8x16_t)v116),
                                          (int8x16_t)vshrq_n_u64((uint64x2_t)v115, 7u)),
                                        (int8x16_t)vshlq_n_s64(v116, 7u)));
        v119 = v100
             + v247.i64[1]
             + (__ROR8__(v19, 14) ^ __ROR8__(v19, 18) ^ __ROR8__(v19, 41))
             + ((v20 ^ v21) & v19 ^ v21);
        v18 = v101 + v119;
        v14 = v119 + (__ROR8__(v15, 28) ^ __ROR8__(v15, 34) ^ __ROR8__(v15, 39)) + ((v16 ^ v17) & v15 ^ v16 & v17);
        v247 = vaddq_s64(v118, (int64x2_t)v12);
        v120 = __OFSUB__(v22--, 1);
      }
      while ( !((v22 < 0) ^ v120 | (v22 == 0)) );
      v121 = v13 - 40;
      if ( !--a2 )
        break;
      v123 = *v3;
      v122 = v3 + 1;
      v124 = v21 + v240.i64[0] + (__ROR8__(v18, 14) ^ __ROR8__(v18, 18) ^ __ROR8__(v18, 41)) + ((v19 ^ v20) & v18 ^ v20);
      v126 = *v121;
      v125 = v121 + 1;
      v127 = v17 + v124;
      v128 = v124 + (__ROR8__(v14, 28) ^ __ROR8__(v14, 34) ^ __ROR8__(v14, 39)) + ((v15 ^ v16) & v14 ^ v15 & v16);
      v5 = vrev64q_s8(v123);
      v129 = v20
           + v240.i64[1]
           + (__ROR8__(v127, 14) ^ __ROR8__(v127, 18) ^ __ROR8__(v127, 41))
           + ((v18 ^ v19) & v127 ^ v19);
      v130 = v16 + v129;
      v240 = vaddq_s64(v126, (int64x2_t)v5);
      v131 = v129 + (__ROR8__(v128, 28) ^ __ROR8__(v128, 34) ^ __ROR8__(v128, 39)) + ((v14 ^ v15) & v128 ^ v14 & v15);
      v132 = *v122++;
      v133 = v19
           + v241.i64[0]
           + (__ROR8__(v130, 14) ^ __ROR8__(v130, 18) ^ __ROR8__(v130, 41))
           + ((v127 ^ v18) & v130 ^ v18);
      v134 = *v125++;
      v135 = v15 + v133;
      v136 = v133 + (__ROR8__(v131, 28) ^ __ROR8__(v131, 34) ^ __ROR8__(v131, 39)) + ((v128 ^ v14) & v131 ^ v128 & v14);
      v6 = vrev64q_s8(v132);
      v137 = v18
           + v241.i64[1]
           + (__ROR8__(v135, 14) ^ __ROR8__(v135, 18) ^ __ROR8__(v135, 41))
           + ((v130 ^ v127) & v135 ^ v127);
      v138 = v14 + v137;
      v241 = vaddq_s64(v134, (int64x2_t)v6);
      v139 = v137
           + (__ROR8__(v136, 28) ^ __ROR8__(v136, 34) ^ __ROR8__(v136, 39))
           + ((v131 ^ v128) & v136 ^ v131 & v128);
      v140 = *v122++;
      v141 = v127
           + v242.i64[0]
           + (__ROR8__(v138, 14) ^ __ROR8__(v138, 18) ^ __ROR8__(v138, 41))
           + ((v135 ^ v130) & v138 ^ v130);
      v142 = *v125++;
      v143 = v128 + v141;
      v144 = v141
           + (__ROR8__(v139, 28) ^ __ROR8__(v139, 34) ^ __ROR8__(v139, 39))
           + ((v136 ^ v131) & v139 ^ v136 & v131);
      v7 = vrev64q_s8(v140);
      v145 = v130
           + v242.i64[1]
           + (__ROR8__(v143, 14) ^ __ROR8__(v143, 18) ^ __ROR8__(v143, 41))
           + ((v138 ^ v135) & v143 ^ v135);
      v146 = v131 + v145;
      v242 = vaddq_s64(v142, (int64x2_t)v7);
      v147 = v145
           + (__ROR8__(v144, 28) ^ __ROR8__(v144, 34) ^ __ROR8__(v144, 39))
           + ((v139 ^ v136) & v144 ^ v139 & v136);
      v148 = *v122++;
      v149 = v135
           + v243.i64[0]
           + (__ROR8__(v146, 14) ^ __ROR8__(v146, 18) ^ __ROR8__(v146, 41))
           + ((v143 ^ v138) & v146 ^ v138);
      v150 = *v125++;
      v151 = v136 + v149;
      v152 = v149
           + (__ROR8__(v147, 28) ^ __ROR8__(v147, 34) ^ __ROR8__(v147, 39))
           + ((v144 ^ v139) & v147 ^ v144 & v139);
      v8 = vrev64q_s8(v148);
      v153 = v138
           + v243.i64[1]
           + (__ROR8__(v151, 14) ^ __ROR8__(v151, 18) ^ __ROR8__(v151, 41))
           + ((v146 ^ v143) & v151 ^ v143);
      v154 = v139 + v153;
      v243 = vaddq_s64(v150, (int64x2_t)v8);
      v155 = v153
           + (__ROR8__(v152, 28) ^ __ROR8__(v152, 34) ^ __ROR8__(v152, 39))
           + ((v147 ^ v144) & v152 ^ v147 & v144);
      v156 = *v122++;
      v157 = v143
           + v244.i64[0]
           + (__ROR8__(v154, 14) ^ __ROR8__(v154, 18) ^ __ROR8__(v154, 41))
           + ((v151 ^ v146) & v154 ^ v146);
      v158 = *v125++;
      v159 = v144 + v157;
      v160 = v157
           + (__ROR8__(v155, 28) ^ __ROR8__(v155, 34) ^ __ROR8__(v155, 39))
           + ((v152 ^ v147) & v155 ^ v152 & v147);
      v9 = vrev64q_s8(v156);
      v161 = v146
           + v244.i64[1]
           + (__ROR8__(v159, 14) ^ __ROR8__(v159, 18) ^ __ROR8__(v159, 41))
           + ((v154 ^ v151) & v159 ^ v151);
      v162 = v147 + v161;
      v244 = vaddq_s64(v158, (int64x2_t)v9);
      v163 = v161
           + (__ROR8__(v160, 28) ^ __ROR8__(v160, 34) ^ __ROR8__(v160, 39))
           + ((v155 ^ v152) & v160 ^ v155 & v152);
      v164 = *v122++;
      v165 = v151
           + v245.i64[0]
           + (__ROR8__(v162, 14) ^ __ROR8__(v162, 18) ^ __ROR8__(v162, 41))
           + ((v159 ^ v154) & v162 ^ v154);
      v166 = *v125++;
      v167 = v152 + v165;
      v168 = v165
           + (__ROR8__(v163, 28) ^ __ROR8__(v163, 34) ^ __ROR8__(v163, 39))
           + ((v160 ^ v155) & v163 ^ v160 & v155);
      v10 = vrev64q_s8(v164);
      v169 = v154
           + v245.i64[1]
           + (__ROR8__(v167, 14) ^ __ROR8__(v167, 18) ^ __ROR8__(v167, 41))
           + ((v162 ^ v159) & v167 ^ v159);
      v170 = v155 + v169;
      v245 = vaddq_s64(v166, (int64x2_t)v10);
      v171 = v169
           + (__ROR8__(v168, 28) ^ __ROR8__(v168, 34) ^ __ROR8__(v168, 39))
           + ((v163 ^ v160) & v168 ^ v163 & v160);
      v172 = *v122++;
      v173 = v159
           + v246.i64[0]
           + (__ROR8__(v170, 14) ^ __ROR8__(v170, 18) ^ __ROR8__(v170, 41))
           + ((v167 ^ v162) & v170 ^ v162);
      v174 = *v125++;
      v175 = v160 + v173;
      v176 = v173
           + (__ROR8__(v171, 28) ^ __ROR8__(v171, 34) ^ __ROR8__(v171, 39))
           + ((v168 ^ v163) & v171 ^ v168 & v163);
      v11 = vrev64q_s8(v172);
      v177 = v162
           + v246.i64[1]
           + (__ROR8__(v175, 14) ^ __ROR8__(v175, 18) ^ __ROR8__(v175, 41))
           + ((v170 ^ v167) & v175 ^ v167);
      v178 = v163 + v177;
      v246 = vaddq_s64(v174, (int64x2_t)v11);
      v179 = v177
           + (__ROR8__(v176, 28) ^ __ROR8__(v176, 34) ^ __ROR8__(v176, 39))
           + ((v171 ^ v168) & v176 ^ v171 & v168);
      v180 = *v122;
      v3 = v122 + 1;
      v181 = v167
           + v247.i64[0]
           + (__ROR8__(v178, 14) ^ __ROR8__(v178, 18) ^ __ROR8__(v178, 41))
           + ((v175 ^ v170) & v178 ^ v170);
      v182 = *v125;
      v13 = v125 + 1;
      v183 = v168 + v181;
      v184 = v181
           + (__ROR8__(v179, 28) ^ __ROR8__(v179, 34) ^ __ROR8__(v179, 39))
           + ((v176 ^ v171) & v179 ^ v176 & v171);
      v12 = vrev64q_s8(v180);
      v185 = v170
           + v247.i64[1]
           + (__ROR8__(v183, 14) ^ __ROR8__(v183, 18) ^ __ROR8__(v183, 41))
           + ((v178 ^ v175) & v183 ^ v175);
      v247 = vaddq_s64(v182, (int64x2_t)v12);
      v186 = result[1] + v184;
      *result += v185
               + (__ROR8__(v184, 28) ^ __ROR8__(v184, 34) ^ __ROR8__(v184, 39))
               + ((v179 ^ v176) & v184 ^ v179 & v176);
      result[1] = v186;
      v187 = result[3] + v176;
      result[2] += v179;
      result[3] = v187;
      v188 = result[5] + v183;
      result[4] += v171 + v185;
      result[5] = v188;
      v189 = result[7] + v175;
      result[6] += v178;
      result[7] = v189;
    }
    v190 = v21 + v240.i64[0] + (__ROR8__(v18, 14) ^ __ROR8__(v18, 18) ^ __ROR8__(v18, 41)) + ((v19 ^ v20) & v18 ^ v20);
    v191 = v17 + v190;
    v192 = v190 + (__ROR8__(v14, 28) ^ __ROR8__(v14, 34) ^ __ROR8__(v14, 39)) + ((v15 ^ v16) & v14 ^ v15 & v16);
    v193 = v20
         + v240.i64[1]
         + (__ROR8__(v191, 14) ^ __ROR8__(v191, 18) ^ __ROR8__(v191, 41))
         + ((v18 ^ v19) & v191 ^ v19);
    v194 = v16 + v193;
    v195 = v193 + (__ROR8__(v192, 28) ^ __ROR8__(v192, 34) ^ __ROR8__(v192, 39)) + ((v14 ^ v15) & v192 ^ v14 & v15);
    v196 = v19
         + v241.i64[0]
         + (__ROR8__(v194, 14) ^ __ROR8__(v194, 18) ^ __ROR8__(v194, 41))
         + ((v191 ^ v18) & v194 ^ v18);
    v197 = v15 + v196;
    v198 = v196 + (__ROR8__(v195, 28) ^ __ROR8__(v195, 34) ^ __ROR8__(v195, 39)) + ((v192 ^ v14) & v195 ^ v192 & v14);
    v199 = v18
         + v241.i64[1]
         + (__ROR8__(v197, 14) ^ __ROR8__(v197, 18) ^ __ROR8__(v197, 41))
         + ((v194 ^ v191) & v197 ^ v191);
    v200 = v14 + v199;
    v201 = v199 + (__ROR8__(v198, 28) ^ __ROR8__(v198, 34) ^ __ROR8__(v198, 39)) + ((v195 ^ v192) & v198 ^ v195 & v192);
    v202 = v191
         + v242.i64[0]
         + (__ROR8__(v200, 14) ^ __ROR8__(v200, 18) ^ __ROR8__(v200, 41))
         + ((v197 ^ v194) & v200 ^ v194);
    v203 = v192 + v202;
    v204 = v202 + (__ROR8__(v201, 28) ^ __ROR8__(v201, 34) ^ __ROR8__(v201, 39)) + ((v198 ^ v195) & v201 ^ v198 & v195);
    v205 = v194
         + v242.i64[1]
         + (__ROR8__(v203, 14) ^ __ROR8__(v203, 18) ^ __ROR8__(v203, 41))
         + ((v200 ^ v197) & v203 ^ v197);
    v206 = v195 + v205;
    v207 = v205 + (__ROR8__(v204, 28) ^ __ROR8__(v204, 34) ^ __ROR8__(v204, 39)) + ((v201 ^ v198) & v204 ^ v201 & v198);
    v208 = v197
         + v243.i64[0]
         + (__ROR8__(v206, 14) ^ __ROR8__(v206, 18) ^ __ROR8__(v206, 41))
         + ((v203 ^ v200) & v206 ^ v200);
    v209 = v198 + v208;
    v210 = v208 + (__ROR8__(v207, 28) ^ __ROR8__(v207, 34) ^ __ROR8__(v207, 39)) + ((v204 ^ v201) & v207 ^ v204 & v201);
    v211 = v200
         + v243.i64[1]
         + (__ROR8__(v209, 14) ^ __ROR8__(v209, 18) ^ __ROR8__(v209, 41))
         + ((v206 ^ v203) & v209 ^ v203);
    v212 = v201 + v211;
    v213 = v211 + (__ROR8__(v210, 28) ^ __ROR8__(v210, 34) ^ __ROR8__(v210, 39)) + ((v207 ^ v204) & v210 ^ v207 & v204);
    v214 = v203
         + v244.i64[0]
         + (__ROR8__(v212, 14) ^ __ROR8__(v212, 18) ^ __ROR8__(v212, 41))
         + ((v209 ^ v206) & v212 ^ v206);
    v215 = v204 + v214;
    v216 = v214 + (__ROR8__(v213, 28) ^ __ROR8__(v213, 34) ^ __ROR8__(v213, 39)) + ((v210 ^ v207) & v213 ^ v210 & v207);
    v217 = v206
         + v244.i64[1]
         + (__ROR8__(v215, 14) ^ __ROR8__(v215, 18) ^ __ROR8__(v215, 41))
         + ((v212 ^ v209) & v215 ^ v209);
    v218 = v207 + v217;
    v219 = v217 + (__ROR8__(v216, 28) ^ __ROR8__(v216, 34) ^ __ROR8__(v216, 39)) + ((v213 ^ v210) & v216 ^ v213 & v210);
    v220 = v209
         + v245.i64[0]
         + (__ROR8__(v218, 14) ^ __ROR8__(v218, 18) ^ __ROR8__(v218, 41))
         + ((v215 ^ v212) & v218 ^ v212);
    v221 = v210 + v220;
    v222 = v220 + (__ROR8__(v219, 28) ^ __ROR8__(v219, 34) ^ __ROR8__(v219, 39)) + ((v216 ^ v213) & v219 ^ v216 & v213);
    v223 = v212
         + v245.i64[1]
         + (__ROR8__(v221, 14) ^ __ROR8__(v221, 18) ^ __ROR8__(v221, 41))
         + ((v218 ^ v215) & v221 ^ v215);
    v224 = v213 + v223;
    v225 = v223 + (__ROR8__(v222, 28) ^ __ROR8__(v222, 34) ^ __ROR8__(v222, 39)) + ((v219 ^ v216) & v222 ^ v219 & v216);
    v226 = v215
         + v246.i64[0]
         + (__ROR8__(v224, 14) ^ __ROR8__(v224, 18) ^ __ROR8__(v224, 41))
         + ((v221 ^ v218) & v224 ^ v218);
    v227 = v216 + v226;
    v228 = v226 + (__ROR8__(v225, 28) ^ __ROR8__(v225, 34) ^ __ROR8__(v225, 39)) + ((v222 ^ v219) & v225 ^ v222 & v219);
    v229 = v218
         + v246.i64[1]
         + (__ROR8__(v227, 14) ^ __ROR8__(v227, 18) ^ __ROR8__(v227, 41))
         + ((v224 ^ v221) & v227 ^ v221);
    v230 = v219 + v229;
    v231 = v229 + (__ROR8__(v228, 28) ^ __ROR8__(v228, 34) ^ __ROR8__(v228, 39)) + ((v225 ^ v222) & v228 ^ v225 & v222);
    v232 = v221
         + v247.i64[0]
         + (__ROR8__(v230, 14) ^ __ROR8__(v230, 18) ^ __ROR8__(v230, 41))
         + ((v227 ^ v224) & v230 ^ v224);
    v233 = v222 + v232;
    v234 = v232 + (__ROR8__(v231, 28) ^ __ROR8__(v231, 34) ^ __ROR8__(v231, 39)) + ((v228 ^ v225) & v231 ^ v228 & v225);
    v235 = v224
         + v247.i64[1]
         + (__ROR8__(v233, 14) ^ __ROR8__(v233, 18) ^ __ROR8__(v233, 41))
         + ((v230 ^ v227) & v233 ^ v227);
    v236 = result[1] + v234;
    *result += v235
             + (__ROR8__(v234, 28) ^ __ROR8__(v234, 34) ^ __ROR8__(v234, 39))
             + ((v231 ^ v228) & v234 ^ v231 & v228);
    result[1] = v236;
    v237 = result[3] + v228;
    result[2] += v231;
    result[3] = v237;
    v238 = result[5] + v233;
    result[4] += v225 + v235;
    result[5] = v238;
    v239 = result[7] + v227;
    result[6] += v230;
    result[7] = v239;
  }
  return result;
}
