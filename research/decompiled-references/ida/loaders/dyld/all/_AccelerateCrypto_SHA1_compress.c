int32x4_t *__fastcall AccelerateCrypto_SHA1_compress(int32x4_t *result, __int64 a2, int8x16_t *a3)
{
  int32x4_t v3; // q17
  int8x16_t *v4; // x2
  int8x16_t v5; // q0
  int8x16_t v6; // q1
  int8x16_t v7; // q2
  int8x16_t v8; // q3
  int32x4_t *v9; // x0
  int32x4_t v10; // t1
  int32x4_t v11; // q16
  int32x4_t *v12; // x0
  int32x4_t v13; // q0
  int32x4_t v14; // q1
  int32x4_t v15; // q2
  int32x4_t v16; // q3
  uint32x4_t v17; // q18
  int32x4_t v18; // q0
  unsigned int v19; // s20
  uint32x4_t v20; // q18
  int32x4_t v21; // q1
  unsigned int v22; // s20
  uint32x4_t v23; // q18
  int32x4_t v24; // q2
  unsigned int v25; // s20
  uint32x4_t v26; // q18
  int32x4_t v27; // q3
  unsigned int v28; // s20
  uint32x4_t v29; // q18
  int32x4_t v30; // q0
  unsigned int v31; // s20
  uint32x4_t v32; // q18
  int32x4_t v33; // q1
  unsigned int v34; // s20
  uint32x4_t v35; // q18
  int32x4_t v36; // q2
  unsigned int v37; // s20
  uint32x4_t v38; // q18
  int32x4_t v39; // q3
  unsigned int v40; // s20
  uint32x4_t v41; // q18
  int32x4_t v42; // q0
  unsigned int v43; // s20
  uint32x4_t v44; // q18
  int32x4_t v45; // q1
  unsigned int v46; // s20
  uint32x4_t v47; // q18
  int32x4_t v48; // q2
  unsigned int v49; // s20
  uint32x4_t v50; // q18
  int32x4_t v51; // q3
  unsigned int v52; // s20
  uint32x4_t v53; // q18
  int32x4_t v54; // q0
  uint32x4_t v55; // q4
  unsigned int v56; // s20
  uint32x4_t v57; // q18
  int32x4_t v58; // q1
  uint32x4_t v59; // q5
  unsigned int v60; // s20
  uint32x4_t v61; // q18
  int32x4_t v62; // q2
  uint32x4_t v63; // q6
  unsigned int v64; // s20
  uint32x4_t v65; // q18
  int32x4_t v66; // q19
  uint32x4_t v67; // q7
  bool v68; // cc
  __int64 i; // x1
  int8x16_t v70; // q0
  int8x16_t v71; // q1
  int8x16_t v72; // q2
  int8x16_t v73; // q3
  int32x4_t v74; // q0
  unsigned int v75; // s20
  uint32x4_t v76; // q18
  int32x4_t v77; // q1
  unsigned int v78; // s20
  uint32x4_t v79; // q18
  int32x4_t v80; // q2
  unsigned int v81; // s20
  uint32x4_t v82; // q18
  int32x4_t v83; // q3
  unsigned int v84; // s20
  int32x4_t v85; // q18
  uint32x4_t v86; // q18
  int32x4_t v87; // q0
  unsigned int v88; // s20
  uint32x4_t v89; // q18
  int32x4_t v90; // q1
  unsigned int v91; // s20
  uint32x4_t v92; // q18
  int32x4_t v93; // q2
  unsigned int v94; // s20
  uint32x4_t v95; // q18
  int32x4_t v96; // q3
  unsigned int v97; // s20
  uint32x4_t v98; // q18
  int32x4_t v99; // q0
  unsigned int v100; // s20
  uint32x4_t v101; // q18
  int32x4_t v102; // q1
  unsigned int v103; // s20
  uint32x4_t v104; // q18
  int32x4_t v105; // q2
  unsigned int v106; // s20
  uint32x4_t v107; // q18
  int32x4_t v108; // q3
  unsigned int v109; // s20
  uint32x4_t v110; // q18
  int32x4_t v111; // q0
  unsigned int v112; // s20
  uint32x4_t v113; // q18
  int32x4_t v114; // q1
  unsigned int v115; // s20
  uint32x4_t v116; // q18
  int32x4_t v117; // q2
  unsigned int v118; // s20
  uint32x4_t v119; // q18
  int32x4_t v120; // q3
  unsigned int v121; // s20
  uint32x4_t v122; // q18
  int32x4_t v123; // q0
  unsigned int v124; // s20
  uint32x4_t v125; // q18
  int32x4_t v126; // q1
  unsigned int v127; // s20
  uint32x4_t v128; // q18
  int32x4_t v129; // q2
  unsigned int v130; // s20
  unsigned int v131; // s20
  uint32x4_t v132; // q18
  unsigned int v133; // s20
  uint32x4_t v134; // q18
  unsigned int v135; // s20
  uint32x4_t v136; // q18
  unsigned int v137; // s20
  int32x4_t v138; // q18

  if ( a2 )
  {
    v5 = *a3;
    v6 = a3[1];
    v7 = a3[2];
    v8 = a3[3];
    v4 = a3 + 4;
    v10 = *result;
    v9 = result + 1;
    v11 = v10;
    v10.i32[0] = v9->i32[0];
    v12 = v9 - 1;
    v3.i32[0] = v10.i32[0];
    v13 = (int32x4_t)vrev32q_s8(v5);
    v14 = (int32x4_t)vrev32q_s8(v6);
    v15 = (int32x4_t)vrev32q_s8(v7);
    v16 = (int32x4_t)vrev32q_s8(v8);
    v66 = v3;
    v17 = vsha1cq_u32((uint32x4_t)v11, v10.u32[0], (uint32x4_t)vaddq_s32(v13, *(int32x4_t *)&K_XMM_AR));
    v18 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v13, (uint32x4_t)v14, (uint32x4_t)v15), (uint32x4_t)v16);
    v19 = v17.i32[0];
    v20 = vsha1cq_u32(v17, vsha1hs_u32(v11.u32[0]), (uint32x4_t)vaddq_s32(v14, *(int32x4_t *)&K_XMM_AR));
    v66.i32[0] = vsha1hs_u32(v19);
    v21 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v14, (uint32x4_t)v15, (uint32x4_t)v16), (uint32x4_t)v18);
    v22 = v20.i32[0];
    v23 = vsha1cq_u32(v20, v66.u32[0], (uint32x4_t)vaddq_s32(v15, *(int32x4_t *)&K_XMM_AR));
    v66.i32[0] = vsha1hs_u32(v22);
    v24 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v15, (uint32x4_t)v16, (uint32x4_t)v18), (uint32x4_t)v21);
    v25 = v23.i32[0];
    v26 = vsha1cq_u32(v23, v66.u32[0], (uint32x4_t)vaddq_s32(v16, *(int32x4_t *)&K_XMM_AR));
    v66.i32[0] = vsha1hs_u32(v25);
    v27 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v16, (uint32x4_t)v18, (uint32x4_t)v21), (uint32x4_t)v24);
    v28 = v26.i32[0];
    v29 = vsha1cq_u32(v26, v66.u32[0], (uint32x4_t)vaddq_s32(v18, *(int32x4_t *)&K_XMM_AR));
    v66.i32[0] = vsha1hs_u32(v28);
    v30 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v18, (uint32x4_t)v21, (uint32x4_t)v24), (uint32x4_t)v27);
    v31 = v29.i32[0];
    v32 = vsha1pq_u32(v29, v66.u32[0], (uint32x4_t)vaddq_s32(v21, *(int32x4_t *)&qword_73008[1]));
    v66.i32[0] = vsha1hs_u32(v31);
    v33 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v21, (uint32x4_t)v24, (uint32x4_t)v27), (uint32x4_t)v30);
    v34 = v32.i32[0];
    v35 = vsha1pq_u32(v32, v66.u32[0], (uint32x4_t)vaddq_s32(v24, *(int32x4_t *)&qword_73008[1]));
    v66.i32[0] = vsha1hs_u32(v34);
    v36 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v24, (uint32x4_t)v27, (uint32x4_t)v30), (uint32x4_t)v33);
    v37 = v35.i32[0];
    v38 = vsha1pq_u32(v35, v66.u32[0], (uint32x4_t)vaddq_s32(v27, *(int32x4_t *)&qword_73008[1]));
    v66.i32[0] = vsha1hs_u32(v37);
    v39 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v27, (uint32x4_t)v30, (uint32x4_t)v33), (uint32x4_t)v36);
    v40 = v38.i32[0];
    v41 = vsha1pq_u32(v38, v66.u32[0], (uint32x4_t)vaddq_s32(v30, *(int32x4_t *)&qword_73008[1]));
    v66.i32[0] = vsha1hs_u32(v40);
    v42 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v30, (uint32x4_t)v33, (uint32x4_t)v36), (uint32x4_t)v39);
    v43 = v41.i32[0];
    v44 = vsha1pq_u32(v41, v66.u32[0], (uint32x4_t)vaddq_s32(v33, *(int32x4_t *)&qword_73008[1]));
    v66.i32[0] = vsha1hs_u32(v43);
    v45 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v33, (uint32x4_t)v36, (uint32x4_t)v39), (uint32x4_t)v42);
    v46 = v44.i32[0];
    v47 = vsha1mq_u32(v44, v66.u32[0], (uint32x4_t)vaddq_s32(v36, *(int32x4_t *)&qword_73008[3]));
    v66.i32[0] = vsha1hs_u32(v46);
    v48 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v36, (uint32x4_t)v39, (uint32x4_t)v42), (uint32x4_t)v45);
    v49 = v47.i32[0];
    v50 = vsha1mq_u32(v47, v66.u32[0], (uint32x4_t)vaddq_s32(v39, *(int32x4_t *)&qword_73008[3]));
    v66.i32[0] = vsha1hs_u32(v49);
    v51 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v39, (uint32x4_t)v42, (uint32x4_t)v45), (uint32x4_t)v48);
    v52 = v50.i32[0];
    v53 = vsha1mq_u32(v50, v66.u32[0], (uint32x4_t)vaddq_s32(v42, *(int32x4_t *)&qword_73008[3]));
    v66.i32[0] = vsha1hs_u32(v52);
    v54 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v42, (uint32x4_t)v45, (uint32x4_t)v48), (uint32x4_t)v51);
    v55 = (uint32x4_t)vaddq_s32(v54, loc_73030);
    v56 = v53.i32[0];
    v57 = vsha1mq_u32(v53, v66.u32[0], (uint32x4_t)vaddq_s32(v45, *(int32x4_t *)&qword_73008[3]));
    v66.i32[0] = vsha1hs_u32(v56);
    v58 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v45, (uint32x4_t)v48, (uint32x4_t)v51), (uint32x4_t)v54);
    v59 = (uint32x4_t)vaddq_s32(v58, loc_73030);
    v60 = v57.i32[0];
    v61 = vsha1mq_u32(v57, v66.u32[0], (uint32x4_t)vaddq_s32(v48, *(int32x4_t *)&qword_73008[3]));
    v66.i32[0] = vsha1hs_u32(v60);
    v62 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v48, (uint32x4_t)v51, (uint32x4_t)v54), (uint32x4_t)v58);
    v63 = (uint32x4_t)vaddq_s32(v62, loc_73030);
    v64 = v61.i32[0];
    v65 = vsha1pq_u32(v61, v66.u32[0], (uint32x4_t)vaddq_s32(v51, loc_73030));
    v66.i32[0] = vsha1hs_u32(v64);
    v67 = (uint32x4_t)vaddq_s32(
                        (int32x4_t)vsha1su1q_u32(
                                     vsha1su0q_u32((uint32x4_t)v51, (uint32x4_t)v54, (uint32x4_t)v58),
                                     (uint32x4_t)v62),
                        loc_73030);
    v68 = a2 <= 1;
    for ( i = a2 - 1; !v68; --i )
    {
      v70 = *v4;
      v71 = v4[1];
      v72 = v4[2];
      v73 = v4[3];
      v4 += 4;
      v74 = (int32x4_t)vrev32q_s8(v70);
      v75 = v65.i32[0];
      v76 = vsha1pq_u32(v65, v66.u32[0], v55);
      v66.i32[0] = vsha1hs_u32(v75);
      v77 = (int32x4_t)vrev32q_s8(v71);
      v78 = v76.i32[0];
      v79 = vsha1pq_u32(v76, v66.u32[0], v59);
      v66.i32[0] = vsha1hs_u32(v78);
      v80 = (int32x4_t)vrev32q_s8(v72);
      v81 = v79.i32[0];
      v82 = vsha1pq_u32(v79, v66.u32[0], v63);
      v66.i32[0] = vsha1hs_u32(v81);
      v83 = (int32x4_t)vrev32q_s8(v73);
      v84 = v82.i32[0];
      v85 = (int32x4_t)vsha1pq_u32(v82, v66.u32[0], v67);
      v66.i32[0] = vsha1hs_u32(v84);
      v66 = vaddq_s32(v3, v66);
      v11 = vaddq_s32(v11, v85);
      v3 = v66;
      v86 = vsha1cq_u32((uint32x4_t)v11, v66.u32[0], (uint32x4_t)vaddq_s32(v74, *(int32x4_t *)&K_XMM_AR));
      v87 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v74, (uint32x4_t)v77, (uint32x4_t)v80), (uint32x4_t)v83);
      v88 = v86.i32[0];
      v89 = vsha1cq_u32(v86, vsha1hs_u32(v11.u32[0]), (uint32x4_t)vaddq_s32(v77, *(int32x4_t *)&K_XMM_AR));
      v66.i32[0] = vsha1hs_u32(v88);
      v90 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v77, (uint32x4_t)v80, (uint32x4_t)v83), (uint32x4_t)v87);
      v91 = v89.i32[0];
      v92 = vsha1cq_u32(v89, v66.u32[0], (uint32x4_t)vaddq_s32(v80, *(int32x4_t *)&K_XMM_AR));
      v66.i32[0] = vsha1hs_u32(v91);
      v93 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v80, (uint32x4_t)v83, (uint32x4_t)v87), (uint32x4_t)v90);
      v94 = v92.i32[0];
      v95 = vsha1cq_u32(v92, v66.u32[0], (uint32x4_t)vaddq_s32(v83, *(int32x4_t *)&K_XMM_AR));
      v66.i32[0] = vsha1hs_u32(v94);
      v96 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v83, (uint32x4_t)v87, (uint32x4_t)v90), (uint32x4_t)v93);
      v97 = v95.i32[0];
      v98 = vsha1cq_u32(v95, v66.u32[0], (uint32x4_t)vaddq_s32(v87, *(int32x4_t *)&K_XMM_AR));
      v66.i32[0] = vsha1hs_u32(v97);
      v99 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v87, (uint32x4_t)v90, (uint32x4_t)v93), (uint32x4_t)v96);
      v100 = v98.i32[0];
      v101 = vsha1pq_u32(v98, v66.u32[0], (uint32x4_t)vaddq_s32(v90, *(int32x4_t *)&qword_73008[1]));
      v66.i32[0] = vsha1hs_u32(v100);
      v102 = (int32x4_t)vsha1su1q_u32(vsha1su0q_u32((uint32x4_t)v90, (uint32x4_t)v93, (uint32x4_t)v96), (uint32x4_t)v99);
      v103 = v101.i32[0];
      v104 = vsha1pq_u32(v101, v66.u32[0], (uint32x4_t)vaddq_s32(v93, *(int32x4_t *)&qword_73008[1]));
      v66.i32[0] = vsha1hs_u32(v103);
      v105 = (int32x4_t)vsha1su1q_u32(
                          vsha1su0q_u32((uint32x4_t)v93, (uint32x4_t)v96, (uint32x4_t)v99),
                          (uint32x4_t)v102);
      v106 = v104.i32[0];
      v107 = vsha1pq_u32(v104, v66.u32[0], (uint32x4_t)vaddq_s32(v96, *(int32x4_t *)&qword_73008[1]));
      v66.i32[0] = vsha1hs_u32(v106);
      v108 = (int32x4_t)vsha1su1q_u32(
                          vsha1su0q_u32((uint32x4_t)v96, (uint32x4_t)v99, (uint32x4_t)v102),
                          (uint32x4_t)v105);
      v109 = v107.i32[0];
      v110 = vsha1pq_u32(v107, v66.u32[0], (uint32x4_t)vaddq_s32(v99, *(int32x4_t *)&qword_73008[1]));
      v66.i32[0] = vsha1hs_u32(v109);
      v111 = (int32x4_t)vsha1su1q_u32(
                          vsha1su0q_u32((uint32x4_t)v99, (uint32x4_t)v102, (uint32x4_t)v105),
                          (uint32x4_t)v108);
      v112 = v110.i32[0];
      v113 = vsha1pq_u32(v110, v66.u32[0], (uint32x4_t)vaddq_s32(v102, *(int32x4_t *)&qword_73008[1]));
      v66.i32[0] = vsha1hs_u32(v112);
      v114 = (int32x4_t)vsha1su1q_u32(
                          vsha1su0q_u32((uint32x4_t)v102, (uint32x4_t)v105, (uint32x4_t)v108),
                          (uint32x4_t)v111);
      v115 = v113.i32[0];
      v116 = vsha1mq_u32(v113, v66.u32[0], (uint32x4_t)vaddq_s32(v105, *(int32x4_t *)&qword_73008[3]));
      v66.i32[0] = vsha1hs_u32(v115);
      v117 = (int32x4_t)vsha1su1q_u32(
                          vsha1su0q_u32((uint32x4_t)v105, (uint32x4_t)v108, (uint32x4_t)v111),
                          (uint32x4_t)v114);
      v118 = v116.i32[0];
      v119 = vsha1mq_u32(v116, v66.u32[0], (uint32x4_t)vaddq_s32(v108, *(int32x4_t *)&qword_73008[3]));
      v66.i32[0] = vsha1hs_u32(v118);
      v120 = (int32x4_t)vsha1su1q_u32(
                          vsha1su0q_u32((uint32x4_t)v108, (uint32x4_t)v111, (uint32x4_t)v114),
                          (uint32x4_t)v117);
      v121 = v119.i32[0];
      v122 = vsha1mq_u32(v119, v66.u32[0], (uint32x4_t)vaddq_s32(v111, *(int32x4_t *)&qword_73008[3]));
      v66.i32[0] = vsha1hs_u32(v121);
      v123 = (int32x4_t)vsha1su1q_u32(
                          vsha1su0q_u32((uint32x4_t)v111, (uint32x4_t)v114, (uint32x4_t)v117),
                          (uint32x4_t)v120);
      v55 = (uint32x4_t)vaddq_s32(v123, loc_73030);
      v124 = v122.i32[0];
      v125 = vsha1mq_u32(v122, v66.u32[0], (uint32x4_t)vaddq_s32(v114, *(int32x4_t *)&qword_73008[3]));
      v66.i32[0] = vsha1hs_u32(v124);
      v126 = (int32x4_t)vsha1su1q_u32(
                          vsha1su0q_u32((uint32x4_t)v114, (uint32x4_t)v117, (uint32x4_t)v120),
                          (uint32x4_t)v123);
      v59 = (uint32x4_t)vaddq_s32(v126, loc_73030);
      v127 = v125.i32[0];
      v128 = vsha1mq_u32(v125, v66.u32[0], (uint32x4_t)vaddq_s32(v117, *(int32x4_t *)&qword_73008[3]));
      v66.i32[0] = vsha1hs_u32(v127);
      v129 = (int32x4_t)vsha1su1q_u32(
                          vsha1su0q_u32((uint32x4_t)v117, (uint32x4_t)v120, (uint32x4_t)v123),
                          (uint32x4_t)v126);
      v63 = (uint32x4_t)vaddq_s32(v129, loc_73030);
      v130 = v128.i32[0];
      v65 = vsha1pq_u32(v128, v66.u32[0], (uint32x4_t)vaddq_s32(v120, loc_73030));
      v66.i32[0] = vsha1hs_u32(v130);
      v67 = (uint32x4_t)vaddq_s32(
                          (int32x4_t)vsha1su1q_u32(
                                       vsha1su0q_u32((uint32x4_t)v120, (uint32x4_t)v123, (uint32x4_t)v126),
                                       (uint32x4_t)v129),
                          loc_73030);
      v68 = i <= 1;
    }
    v131 = v65.i32[0];
    v132 = vsha1pq_u32(v65, v66.u32[0], v55);
    v66.i32[0] = vsha1hs_u32(v131);
    v133 = v132.i32[0];
    v134 = vsha1pq_u32(v132, v66.u32[0], v59);
    v66.i32[0] = vsha1hs_u32(v133);
    v135 = v134.i32[0];
    v136 = vsha1pq_u32(v134, v66.u32[0], v63);
    v66.i32[0] = vsha1hs_u32(v135);
    v137 = v136.i32[0];
    v138 = (int32x4_t)vsha1pq_u32(v136, v66.u32[0], v67);
    v66.i32[0] = vsha1hs_u32(v137);
    *v12 = vaddq_s32(v11, v138);
    result = v12 + 1;
    result->i32[0] = vaddq_s32(v3, v66).u32[0];
  }
  return result;
}
