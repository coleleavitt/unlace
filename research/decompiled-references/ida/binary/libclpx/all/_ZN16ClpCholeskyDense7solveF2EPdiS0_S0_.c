void __fastcall ClpCholeskyDense::solveF2(ClpCholeskyDense *this, double *a2, int a3, double *a4, double *a5)
{
  unsigned __int64 v5; // rax
  double *v6; // r9
  double *v7; // r15
  double *v8; // r14
  double *v9; // r13
  double *v10; // r12
  double *v11; // rbp
  double *v12; // rbx
  double *v13; // r11
  double *v14; // r10
  double *v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rax
  __m128d v18; // xmm14
  __m128d v19; // xmm13
  __m128d v20; // xmm12
  __m128d v21; // xmm11
  __m128d v22; // xmm10
  __m128d v23; // xmm9
  __m128d v24; // xmm8
  __m128d v25; // xmm7
  __m128d v26; // xmm6
  __m128d v27; // xmm5
  __m128d v28; // xmm4
  __m128d v29; // xmm3
  __m128d v30; // xmm2
  __m128d v31; // xmm1
  signed int v32; // edi
  __int64 v33; // r10
  int v34; // edi
  double *v35; // r9
  unsigned __int64 v36; // rax
  double *v37; // r8
  double *v38; // rax
  double v39; // xmm4_8
  double v40; // xmm3_8
  double v41; // xmm2_8
  double v42; // xmm1_8
  double v43; // xmm0_8
  double v44; // xmm4_8
  double v45; // xmm3_8
  double v46; // xmm2_8
  double v47; // xmm1_8
  double v48; // xmm0_8
  double v49; // xmm4_8
  double v50; // xmm3_8
  double v51; // xmm2_8
  double v52; // xmm1_8
  double v53; // xmm0_8
  double v54; // xmm4_8
  double v55; // xmm3_8
  double v56; // xmm2_8
  double v57; // xmm1_8
  double v58; // xmm0_8
  double v59; // xmm4_8
  double v60; // xmm3_8
  double v61; // xmm2_8
  double v62; // xmm1_8
  double v63; // xmm0_8
  double v64; // xmm4_8
  double v65; // xmm3_8
  double v66; // xmm2_8
  double v67; // xmm1_8
  double v68; // xmm0_8
  double v69; // xmm4_8
  double v70; // xmm3_8
  double v71; // xmm2_8
  double v72; // xmm1_8
  double v73; // xmm0_8
  double v74; // xmm4_8
  double v75; // xmm3_8
  double v76; // xmm2_8
  double v77; // xmm1_8
  double v78; // xmm0_8
  double v79; // xmm4_8
  double v80; // xmm3_8
  double v81; // xmm2_8
  double v82; // xmm1_8
  double v83; // xmm0_8
  double v84; // xmm4_8
  double v85; // xmm3_8
  double v86; // xmm2_8
  double v87; // xmm1_8
  double v88; // xmm0_8
  double v89; // xmm4_8
  double v90; // xmm3_8
  double v91; // xmm2_8
  double v92; // xmm1_8
  double v93; // xmm0_8
  double v94; // xmm4_8
  double v95; // xmm3_8
  double v96; // xmm2_8
  double v97; // xmm1_8
  double v98; // xmm0_8
  double v99; // xmm4_8
  double v100; // xmm3_8
  double v101; // xmm2_8
  double v102; // xmm1_8
  double v103; // xmm0_8
  double v104; // xmm4_8
  double v105; // xmm3_8
  double v106; // xmm2_8
  double v107; // xmm5_8
  double v108; // xmm0_8
  double v109; // xmm4_8
  double v110; // xmm2_8
  double v111; // xmm1_8
  double v112; // xmm5_8
  double v113; // xmm4_8
  double *v114; // rax
  double v115; // xmm1_8
  __m128d v116; // [rsp+0h] [rbp-B8h]
  double *v117; // [rsp+10h] [rbp-A8h]
  double *v118; // [rsp+18h] [rbp-A0h]
  double *v119; // [rsp+20h] [rbp-98h]
  double *v120; // [rsp+28h] [rbp-90h]
  double *v121; // [rsp+30h] [rbp-88h]
  __m128d v122; // [rsp+40h] [rbp-78h]
  double *v124; // [rsp+58h] [rbp-60h]
  double *v125; // [rsp+60h] [rbp-58h]
  int v126; // [rsp+68h] [rbp-50h]
  unsigned int v127; // [rsp+6Ch] [rbp-4Ch]
  double *v128; // [rsp+70h] [rbp-48h]

  if ( a3 == 16 )
  {
    v38 = a2 + 16;
    do
    {
      a2 += 4;
      a5 += 4;
      v39 = a4[1];
      v40 = *(a5 - 4) - *(a2 - 4) * *a4 - a2[12] * v39;
      v41 = *(a5 - 3) - *(a2 - 3) * *a4 - a2[13] * v39;
      v42 = *(a5 - 2) - *(a2 - 2) * *a4 - a2[14] * v39;
      v43 = *(a5 - 1) - *a4 * *(a2 - 1) - v39 * a2[15];
      v44 = a4[2];
      v45 = v40 - a2[28] * v44;
      v46 = v41 - a2[29] * v44;
      v47 = v42 - a2[30] * v44;
      v48 = v43 - v44 * a2[31];
      v49 = a4[3];
      v50 = v45 - a2[44] * v49;
      v51 = v46 - a2[45] * v49;
      v52 = v47 - a2[46] * v49;
      v53 = v48 - v49 * a2[47];
      v54 = a4[4];
      v55 = v50 - a2[60] * v54;
      v56 = v51 - a2[61] * v54;
      v57 = v52 - a2[62] * v54;
      v58 = v53 - v54 * a2[63];
      v59 = a4[5];
      v60 = v55 - a2[76] * v59;
      v61 = v56 - a2[77] * v59;
      v62 = v57 - a2[78] * v59;
      v63 = v58 - v59 * a2[79];
      v64 = a4[6];
      v65 = v60 - a2[92] * v64;
      v66 = v61 - a2[93] * v64;
      v67 = v62 - a2[94] * v64;
      v68 = v63 - v64 * a2[95];
      v69 = a4[7];
      v70 = v65 - a2[108] * v69;
      v71 = v66 - a2[109] * v69;
      v72 = v67 - a2[110] * v69;
      v73 = v68 - v69 * a2[111];
      v74 = a4[8];
      v75 = v70 - a2[124] * v74;
      v76 = v71 - a2[125] * v74;
      v77 = v72 - a2[126] * v74;
      v78 = v73 - v74 * a2[127];
      v79 = a4[9];
      v80 = v75 - a2[140] * v79;
      v81 = v76 - a2[141] * v79;
      v82 = v77 - a2[142] * v79;
      v83 = v78 - v79 * a2[143];
      v84 = a4[10];
      v85 = v80 - a2[156] * v84;
      v86 = v81 - a2[157] * v84;
      v87 = v82 - a2[158] * v84;
      v88 = v83 - v84 * a2[159];
      v89 = a4[11];
      v90 = v85 - a2[172] * v89;
      v91 = v86 - a2[173] * v89;
      v92 = v87 - a2[174] * v89;
      v93 = v88 - v89 * a2[175];
      v94 = a4[12];
      v95 = v90 - a2[188] * v94;
      v96 = v91 - a2[189] * v94;
      v97 = v92 - a2[190] * v94;
      v98 = v93 - v94 * a2[191];
      v99 = a4[13];
      v100 = v95 - a2[204] * v99;
      v101 = v96 - a2[205] * v99;
      v102 = v97 - a2[206] * v99;
      v103 = v98 - v99 * a2[207];
      v104 = a4[14];
      v105 = v100 - a2[220] * v104;
      v106 = v101 - a2[221] * v104;
      v107 = a2[222] * v104;
      v108 = v103 - v104 * a2[223];
      v109 = a4[15];
      v110 = v106 - a2[237] * v109;
      v111 = v102 - v107 - a2[238] * v109;
      v112 = a2[239] * v109;
      v113 = v109 * a2[236];
      *(a5 - 3) = v110;
      *(a5 - 2) = v111;
      *(a5 - 1) = v108 - v112;
      *(a5 - 4) = v105 - v113;
    }
    while ( a2 != v38 );
  }
  else if ( a3 > 0 )
  {
    if ( (unsigned int)a3 > 2 && (a5 >= a2 + 242 || a2 >= a5 + 2) && (a5 >= a4 + 16 || a4 >= &a5[a3]) )
    {
      v126 = 0;
      if ( (((unsigned __int64)a2 >> 3) & 1) != 0 )
      {
        v126 = 1;
        *a5 = *a5
            - *a2 * *a4
            - a2[16] * a4[1]
            - a2[32] * a4[2]
            - a2[48] * a4[3]
            - a2[64] * a4[4]
            - a2[80] * a4[5]
            - a2[96] * a4[6]
            - a2[112] * a4[7]
            - a2[128] * a4[8]
            - a2[144] * a4[9]
            - a2[160] * a4[10]
            - a2[176] * a4[11]
            - a2[192] * a4[12]
            - a2[208] * a4[13]
            - a2[224] * a4[14]
            - a2[240] * a4[15];
      }
      v128 = a2;
      v5 = ((unsigned __int64)a2 >> 3) & 1;
      v127 = a3 - (((unsigned __int64)a2 >> 3) & 1);
      v124 = &a2[v5 + 128];
      v125 = &a2[v5 + 112];
      v116 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 14), (__m128d)*((unsigned __int64 *)a4 + 14));
      v6 = &a5[v5];
      v7 = &a2[v5];
      v8 = &a2[v5 + 16];
      v9 = &a2[v5 + 32];
      v10 = &a2[v5 + 48];
      v11 = &a2[v5 + 64];
      v120 = &a2[v5 + 176];
      v121 = &a2[v5 + 160];
      v119 = &a2[v5 + 192];
      v12 = &a2[v5 + 80];
      v118 = &a2[v5 + 208];
      v13 = &a2[v5 + 96];
      v117 = &a2[v5 + 224];
      v14 = &a2[v5 + 240];
      v15 = &a2[v5 + 144];
      v16 = 0;
      v17 = 0;
      v122 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 15), (__m128d)*((unsigned __int64 *)a4 + 15));
      v18 = _mm_unpacklo_pd((__m128d)*(unsigned __int64 *)a4, (__m128d)*(unsigned __int64 *)a4);
      v19 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 1), (__m128d)*((unsigned __int64 *)a4 + 1));
      v20 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 2), (__m128d)*((unsigned __int64 *)a4 + 2));
      v21 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 3), (__m128d)*((unsigned __int64 *)a4 + 3));
      v22 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 4), (__m128d)*((unsigned __int64 *)a4 + 4));
      v23 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 5), (__m128d)*((unsigned __int64 *)a4 + 5));
      v24 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 6), (__m128d)*((unsigned __int64 *)a4 + 6));
      v25 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 7), (__m128d)*((unsigned __int64 *)a4 + 7));
      v26 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 8), (__m128d)*((unsigned __int64 *)a4 + 8));
      v27 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 9), (__m128d)*((unsigned __int64 *)a4 + 9));
      v28 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 10), (__m128d)*((unsigned __int64 *)a4 + 10));
      v29 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 11), (__m128d)*((unsigned __int64 *)a4 + 11));
      v30 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 12), (__m128d)*((unsigned __int64 *)a4 + 12));
      v31 = _mm_unpacklo_pd((__m128d)*((unsigned __int64 *)a4 + 13), (__m128d)*((unsigned __int64 *)a4 + 13));
      do
      {
        ++v16;
        *(__m128d *)&v6[v17] = _mm_sub_pd(
                                 _mm_sub_pd(
                                   _mm_sub_pd(
                                     _mm_sub_pd(
                                       _mm_sub_pd(
                                         _mm_sub_pd(
                                           _mm_sub_pd(
                                             _mm_sub_pd(
                                               _mm_sub_pd(
                                                 _mm_sub_pd(
                                                   _mm_sub_pd(
                                                     _mm_sub_pd(
                                                       _mm_sub_pd(
                                                         _mm_sub_pd(
                                                           _mm_sub_pd(
                                                             _mm_sub_pd(
                                                               *(__m128d *)&v6[v17],
                                                               _mm_mul_pd(*(__m128d *)&v7[v17], v18)),
                                                             _mm_mul_pd(*(__m128d *)&v8[v17], v19)),
                                                           _mm_mul_pd(*(__m128d *)&v9[v17], v20)),
                                                         _mm_mul_pd(*(__m128d *)&v10[v17], v21)),
                                                       _mm_mul_pd(*(__m128d *)&v11[v17], v22)),
                                                     _mm_mul_pd(*(__m128d *)&v12[v17], v23)),
                                                   _mm_mul_pd(*(__m128d *)&v13[v17], v24)),
                                                 _mm_mul_pd(*(__m128d *)&v125[v17], v25)),
                                               _mm_mul_pd(*(__m128d *)&v124[v17], v26)),
                                             _mm_mul_pd(*(__m128d *)&v15[v17], v27)),
                                           _mm_mul_pd(v28, *(__m128d *)&v121[v17])),
                                         _mm_mul_pd(*(__m128d *)&v120[v17], v29)),
                                       _mm_mul_pd(*(__m128d *)&v119[v17], v30)),
                                     _mm_mul_pd(*(__m128d *)&v118[v17], v31)),
                                   _mm_mul_pd(v116, *(__m128d *)&v117[v17])),
                                 _mm_mul_pd(v122, *(__m128d *)&v14[v17]));
        v17 += 2;
      }
      while ( v16 < v127 >> 1 );
      v32 = (v127 & 0xFFFFFFFE) + v126;
      if ( (v127 & 0xFFFFFFFE) != v127 )
      {
        v33 = v32;
        v34 = v32 + 1;
        v35 = &a5[v33];
        *v35 = *v35
             - v128[v33] * *a4
             - v128[v33 + 16] * a4[1]
             - v128[v33 + 32] * a4[2]
             - v128[v33 + 48] * a4[3]
             - v128[v33 + 64] * a4[4]
             - v128[v33 + 80] * a4[5]
             - v128[v33 + 96] * a4[6]
             - v128[v33 + 112] * a4[7]
             - v128[v33 + 128] * a4[8]
             - v128[v33 + 144] * a4[9]
             - v128[v33 + 160] * a4[10]
             - v128[v33 + 176] * a4[11]
             - v128[v33 + 192] * a4[12]
             - v128[v33 + 208] * a4[13]
             - v128[v33 + 224] * a4[14]
             - v128[v33 + 240] * a4[15];
        if ( a3 > v34 )
        {
          v36 = v34;
          v37 = &a5[v36];
          *v37 = *v37
               - v128[v36] * *a4
               - v128[v36 + 16] * a4[1]
               - v128[v36 + 32] * a4[2]
               - v128[v36 + 48] * a4[3]
               - v128[v36 + 64] * a4[4]
               - v128[v36 + 80] * a4[5]
               - v128[v36 + 96] * a4[6]
               - v128[v36 + 112] * a4[7]
               - v128[v36 + 128] * a4[8]
               - v128[v36 + 144] * a4[9]
               - v128[v36 + 160] * a4[10]
               - v128[v36 + 176] * a4[11]
               - v128[v36 + 192] * a4[12]
               - v128[v36 + 208] * a4[13]
               - v128[v36 + 224] * a4[14]
               - v128[v36 + 240] * a4[15];
        }
      }
    }
    else
    {
      v114 = &a2[(unsigned int)(a3 - 1) + 1];
      do
      {
        v115 = *a2++;
        ++a5;
        *(a5 - 1) = *(a5 - 1)
                  - v115 * *a4
                  - a2[15] * a4[1]
                  - a2[31] * a4[2]
                  - a2[47] * a4[3]
                  - a2[63] * a4[4]
                  - a2[79] * a4[5]
                  - a2[95] * a4[6]
                  - a2[111] * a4[7]
                  - a2[127] * a4[8]
                  - a2[143] * a4[9]
                  - a2[159] * a4[10]
                  - a2[175] * a4[11]
                  - a2[191] * a4[12]
                  - a2[207] * a4[13]
                  - a2[223] * a4[14]
                  - a2[239] * a4[15];
      }
      while ( a2 != v114 );
    }
  }
}

