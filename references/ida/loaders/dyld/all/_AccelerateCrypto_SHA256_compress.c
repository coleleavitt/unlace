int32x4_t *__fastcall AccelerateCrypto_SHA256_compress(int32x4_t *result, __int64 a2, int8x16_t *a3)
{
  int8x16_t *v3; // x2
  int8x16_t v4; // q0
  int8x16_t v5; // q1
  int8x16_t v6; // q2
  int8x16_t v7; // q3
  int32x4_t v8; // q0
  int32x4_t v9; // q1
  int32x4_t v10; // q16
  int32x4_t v11; // q2
  int32x4_t v12; // q17
  int32x4_t v13; // q3
  uint32x4_t v14; // q18
  uint32x4_t v15; // q4
  uint32x4_t v16; // q5
  uint32x4_t v17; // q19
  uint32x4_t v18; // q6
  uint32x4_t v19; // q7
  __int64 *v20; // x3
  int v21; // w4
  uint32x4_t v22; // q20
  int32x4_t v23; // q21
  int32x4_t v24; // q22
  uint32x4_t v25; // q18
  int32x4_t v26; // q23
  int32x4_t v27; // q24
  uint32x4_t v28; // q19
  uint32x4_t v29; // q20
  uint32x4_t v30; // q18
  uint32x4_t v31; // q19
  uint32x4_t v32; // q20
  uint32x4_t v33; // q18
  uint32x4_t v34; // q19
  bool v35; // vf
  uint32x4_t v36; // q20
  bool v37; // cc
  __int64 v38; // x1
  int32x4_t *v39; // x3
  uint32x4_t v40; // q20
  uint32x4_t v41; // q18
  int8x16_t v42; // q1
  int32x4_t v43; // q0
  int8x16_t v44; // q2
  uint32x4_t v45; // q19
  int8x16_t v46; // q3
  uint32x4_t v47; // q4
  uint32x4_t v48; // q20
  uint32x4_t v49; // q18
  int32x4_t v50; // q1
  uint32x4_t v51; // q19
  uint32x4_t v52; // q5
  uint32x4_t v53; // q20
  uint32x4_t v54; // q18
  int32x4_t v55; // q2
  uint32x4_t v56; // q19
  uint32x4_t v57; // q6
  uint32x4_t v58; // q20
  int32x4_t v59; // q18
  int32x4_t v60; // q3
  int32x4_t v61; // q19
  uint32x4_t v62; // q7
  uint32x4_t v63; // q18
  int32x4_t v64; // q0
  uint32x4_t v65; // q19
  uint32x4_t v66; // q4
  uint32x4_t v67; // q20
  uint32x4_t v68; // q18
  int32x4_t v69; // q1
  uint32x4_t v70; // q19
  uint32x4_t v71; // q5
  uint32x4_t v72; // q20
  uint32x4_t v73; // q18
  int32x4_t v74; // q2
  uint32x4_t v75; // q19
  uint32x4_t v76; // q6
  uint32x4_t v77; // q20
  uint32x4_t v78; // q18
  int32x4_t v79; // q3
  uint32x4_t v80; // q19
  uint32x4_t v81; // q7
  uint32x4_t v82; // q20
  uint32x4_t v83; // q18
  int32x4_t v84; // q0
  uint32x4_t v85; // q19
  uint32x4_t v86; // q4
  uint32x4_t v87; // q20
  uint32x4_t v88; // q18
  int32x4_t v89; // q1
  uint32x4_t v90; // q19
  uint32x4_t v91; // q5
  uint32x4_t v92; // q20
  uint32x4_t v93; // q18
  int32x4_t v94; // q2
  uint32x4_t v95; // q19
  uint32x4_t v96; // q6
  uint32x4_t v97; // q20
  uint32x4_t v98; // q18
  int32x4_t v99; // q3
  uint32x4_t v100; // q19
  uint32x4_t v101; // q7
  uint32x4_t v102; // q20
  uint32x4_t v103; // q18
  int32x4_t v104; // q0
  uint32x4_t v105; // q19
  uint32x4_t v106; // q20
  uint32x4_t v107; // q18
  int32x4_t v108; // q1
  uint32x4_t v109; // q19
  uint32x4_t v110; // q20
  uint32x4_t v111; // q18
  int32x4_t v112; // q2
  uint32x4_t v113; // q19
  uint32x4_t v114; // q20
  uint32x4_t v115; // q20
  uint32x4_t v116; // q18
  uint32x4_t v117; // q19
  uint32x4_t v118; // q20
  uint32x4_t v119; // q18
  uint32x4_t v120; // q19
  uint32x4_t v121; // q20
  uint32x4_t v122; // q18
  uint32x4_t v123; // q19

  if ( a2 )
  {
    v4 = *a3;
    v5 = a3[1];
    v6 = a3[2];
    v7 = a3[3];
    v3 = a3 + 4;
    v8 = (int32x4_t)vrev32q_s8(v4);
    v9 = (int32x4_t)vrev32q_s8(v5);
    v10 = *result;
    v11 = (int32x4_t)vrev32q_s8(v6);
    v12 = result[1];
    v13 = (int32x4_t)vrev32q_s8(v7);
    v14 = *(uint32x4_t *)result;
    v15 = (uint32x4_t)vaddq_s32(v8, (int32x4_t)K256);
    v16 = (uint32x4_t)vaddq_s32(v9, (int32x4_t)xmmword_72370);
    v17 = (uint32x4_t)v12;
    v18 = (uint32x4_t)vaddq_s32(v11, (int32x4_t)xmmword_72380);
    v19 = (uint32x4_t)vaddq_s32(v13, (int32x4_t)xmmword_72390);
    v20 = qword_723A0;
    v21 = 3;
    do
    {
      v22 = v14;
      v23 = *(int32x4_t *)v20;
      v24 = *((int32x4_t *)v20 + 1);
      v25 = vsha256hq_u32(v14, v17, v15);
      v26 = *((int32x4_t *)v20 + 2);
      v8 = (int32x4_t)vsha256su1q_u32(vsha256su0q_u32((uint32x4_t)v8, (uint32x4_t)v9), (uint32x4_t)v11, (uint32x4_t)v13);
      v27 = *((int32x4_t *)v20 + 3);
      v28 = vsha256h2q_u32(v17, v22, v15);
      v20 += 8;
      v15 = (uint32x4_t)vaddq_s32(v8, v23);
      v29 = v25;
      v30 = vsha256hq_u32(v25, v28, v16);
      v9 = (int32x4_t)vsha256su1q_u32(vsha256su0q_u32((uint32x4_t)v9, (uint32x4_t)v11), (uint32x4_t)v13, (uint32x4_t)v8);
      v31 = vsha256h2q_u32(v28, v29, v16);
      v16 = (uint32x4_t)vaddq_s32(v9, v24);
      v32 = v30;
      v33 = vsha256hq_u32(v30, v31, v18);
      v11 = (int32x4_t)vsha256su1q_u32(
                         vsha256su0q_u32((uint32x4_t)v11, (uint32x4_t)v13),
                         (uint32x4_t)v8,
                         (uint32x4_t)v9);
      v34 = vsha256h2q_u32(v31, v32, v18);
      v18 = (uint32x4_t)vaddq_s32(v11, v26);
      v35 = __OFSUB__(v21--, 1);
      v36 = v33;
      v14 = vsha256hq_u32(v33, v34, v19);
      v13 = (int32x4_t)vsha256su1q_u32(
                         vsha256su0q_u32((uint32x4_t)v13, (uint32x4_t)v8),
                         (uint32x4_t)v9,
                         (uint32x4_t)v11);
      v17 = vsha256h2q_u32(v34, v36, v19);
      v19 = (uint32x4_t)vaddq_s32(v13, v27);
    }
    while ( !((v21 < 0) ^ v35 | (v21 == 0)) );
    v37 = a2 <= 1;
    v38 = a2 - 1;
    if ( !v37 )
    {
      v39 = (int32x4_t *)(v20 - 32);
      do
      {
        v40 = v14;
        v41 = vsha256hq_u32(v14, v17, v15);
        v42 = v3[1];
        v43 = (int32x4_t)vrev32q_s8(*v3);
        v44 = v3[2];
        v45 = vsha256h2q_u32(v17, v40, v15);
        v46 = v3[3];
        v47 = (uint32x4_t)vaddq_s32(v43, *v39);
        v48 = v41;
        v3 += 4;
        v49 = vsha256hq_u32(v41, v45, v16);
        v50 = (int32x4_t)vrev32q_s8(v42);
        v51 = vsha256h2q_u32(v45, v48, v16);
        v52 = (uint32x4_t)vaddq_s32(v50, v39[1]);
        v53 = v49;
        v54 = vsha256hq_u32(v49, v51, v18);
        v55 = (int32x4_t)vrev32q_s8(v44);
        v56 = vsha256h2q_u32(v51, v53, v18);
        v57 = (uint32x4_t)vaddq_s32(v55, v39[2]);
        v58 = v54;
        v59 = (int32x4_t)vsha256hq_u32(v54, v56, v19);
        v60 = (int32x4_t)vrev32q_s8(v46);
        v61 = (int32x4_t)vsha256h2q_u32(v56, v58, v19);
        v62 = (uint32x4_t)vaddq_s32(v60, v39[3]);
        v10 = vaddq_s32(v10, v59);
        v12 = vaddq_s32(v12, v61);
        v63 = vsha256hq_u32((uint32x4_t)v10, (uint32x4_t)v12, v47);
        v64 = (int32x4_t)vsha256su1q_u32(
                           vsha256su0q_u32((uint32x4_t)v43, (uint32x4_t)v50),
                           (uint32x4_t)v55,
                           (uint32x4_t)v60);
        v65 = vsha256h2q_u32((uint32x4_t)v12, (uint32x4_t)v10, v47);
        v66 = (uint32x4_t)vaddq_s32(v64, v39[4]);
        v67 = v63;
        v68 = vsha256hq_u32(v63, v65, v52);
        v69 = (int32x4_t)vsha256su1q_u32(
                           vsha256su0q_u32((uint32x4_t)v50, (uint32x4_t)v55),
                           (uint32x4_t)v60,
                           (uint32x4_t)v64);
        v70 = vsha256h2q_u32(v65, v67, v52);
        v71 = (uint32x4_t)vaddq_s32(v69, v39[5]);
        v72 = v68;
        v73 = vsha256hq_u32(v68, v70, v57);
        v74 = (int32x4_t)vsha256su1q_u32(
                           vsha256su0q_u32((uint32x4_t)v55, (uint32x4_t)v60),
                           (uint32x4_t)v64,
                           (uint32x4_t)v69);
        v75 = vsha256h2q_u32(v70, v72, v57);
        v76 = (uint32x4_t)vaddq_s32(v74, v39[6]);
        v77 = v73;
        v78 = vsha256hq_u32(v73, v75, v62);
        v79 = (int32x4_t)vsha256su1q_u32(
                           vsha256su0q_u32((uint32x4_t)v60, (uint32x4_t)v64),
                           (uint32x4_t)v69,
                           (uint32x4_t)v74);
        v80 = vsha256h2q_u32(v75, v77, v62);
        v81 = (uint32x4_t)vaddq_s32(v79, v39[7]);
        v82 = v78;
        v83 = vsha256hq_u32(v78, v80, v66);
        v84 = (int32x4_t)vsha256su1q_u32(
                           vsha256su0q_u32((uint32x4_t)v64, (uint32x4_t)v69),
                           (uint32x4_t)v74,
                           (uint32x4_t)v79);
        v85 = vsha256h2q_u32(v80, v82, v66);
        v86 = (uint32x4_t)vaddq_s32(v84, v39[8]);
        v87 = v83;
        v88 = vsha256hq_u32(v83, v85, v71);
        v89 = (int32x4_t)vsha256su1q_u32(
                           vsha256su0q_u32((uint32x4_t)v69, (uint32x4_t)v74),
                           (uint32x4_t)v79,
                           (uint32x4_t)v84);
        v90 = vsha256h2q_u32(v85, v87, v71);
        v91 = (uint32x4_t)vaddq_s32(v89, v39[9]);
        v92 = v88;
        v93 = vsha256hq_u32(v88, v90, v76);
        v94 = (int32x4_t)vsha256su1q_u32(
                           vsha256su0q_u32((uint32x4_t)v74, (uint32x4_t)v79),
                           (uint32x4_t)v84,
                           (uint32x4_t)v89);
        v95 = vsha256h2q_u32(v90, v92, v76);
        v96 = (uint32x4_t)vaddq_s32(v94, v39[10]);
        v97 = v93;
        v98 = vsha256hq_u32(v93, v95, v81);
        v99 = (int32x4_t)vsha256su1q_u32(
                           vsha256su0q_u32((uint32x4_t)v79, (uint32x4_t)v84),
                           (uint32x4_t)v89,
                           (uint32x4_t)v94);
        v100 = vsha256h2q_u32(v95, v97, v81);
        v101 = (uint32x4_t)vaddq_s32(v99, v39[11]);
        v102 = v98;
        v103 = vsha256hq_u32(v98, v100, v86);
        v104 = (int32x4_t)vsha256su1q_u32(
                            vsha256su0q_u32((uint32x4_t)v84, (uint32x4_t)v89),
                            (uint32x4_t)v94,
                            (uint32x4_t)v99);
        v105 = vsha256h2q_u32(v100, v102, v86);
        v15 = (uint32x4_t)vaddq_s32(v104, v39[12]);
        v106 = v103;
        v107 = vsha256hq_u32(v103, v105, v91);
        v108 = (int32x4_t)vsha256su1q_u32(
                            vsha256su0q_u32((uint32x4_t)v89, (uint32x4_t)v94),
                            (uint32x4_t)v99,
                            (uint32x4_t)v104);
        v109 = vsha256h2q_u32(v105, v106, v91);
        v16 = (uint32x4_t)vaddq_s32(v108, v39[13]);
        v110 = v107;
        v111 = vsha256hq_u32(v107, v109, v96);
        v112 = (int32x4_t)vsha256su1q_u32(
                            vsha256su0q_u32((uint32x4_t)v94, (uint32x4_t)v99),
                            (uint32x4_t)v104,
                            (uint32x4_t)v108);
        v113 = vsha256h2q_u32(v109, v110, v96);
        v18 = (uint32x4_t)vaddq_s32(v112, v39[14]);
        v114 = v111;
        v14 = vsha256hq_u32(v111, v113, v101);
        v17 = vsha256h2q_u32(v113, v114, v101);
        v19 = (uint32x4_t)vaddq_s32(
                            (int32x4_t)vsha256su1q_u32(
                                         vsha256su0q_u32((uint32x4_t)v99, (uint32x4_t)v104),
                                         (uint32x4_t)v108,
                                         (uint32x4_t)v112),
                            v39[15]);
        v37 = v38-- <= 1;
      }
      while ( !v37 );
    }
    v115 = v14;
    v116 = vsha256hq_u32(v14, v17, v15);
    v117 = vsha256h2q_u32(v17, v115, v15);
    v118 = v116;
    v119 = vsha256hq_u32(v116, v117, v16);
    v120 = vsha256h2q_u32(v117, v118, v16);
    v121 = v119;
    v122 = vsha256hq_u32(v119, v120, v18);
    v123 = vsha256h2q_u32(v120, v121, v18);
    *result = vaddq_s32(v10, (int32x4_t)vsha256hq_u32(v122, v123, v19));
    result[1] = vaddq_s32(v12, (int32x4_t)vsha256h2q_u32(v123, v122, v19));
  }
  return result;
}
