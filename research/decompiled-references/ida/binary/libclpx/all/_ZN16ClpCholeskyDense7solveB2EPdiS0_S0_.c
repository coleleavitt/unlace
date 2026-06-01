double *__fastcall ClpCholeskyDense::solveB2(ClpCholeskyDense *this, double *a2, int a3, double *a4, double *a5)
{
  double *result; // rax
  double *v6; // r9
  __int64 v7; // rdi
  double v8; // xmm1_8
  double v9; // xmm0_8
  double v10; // xmm4_8
  double v11; // xmm3_8
  double v12; // xmm2_8
  double v13; // xmm1_8
  double v14; // xmm0_8
  double v15; // xmm4_8
  double v16; // xmm3_8
  double v17; // xmm2_8
  double v18; // xmm1_8
  double v19; // xmm0_8
  double v20; // xmm4_8
  double v21; // xmm3_8
  double v22; // xmm2_8
  double v23; // xmm1_8
  double v24; // xmm0_8
  double v25; // xmm4_8
  double v26; // xmm3_8
  double v27; // xmm2_8
  double v28; // xmm1_8
  double v29; // xmm0_8
  double v30; // xmm4_8
  double v31; // xmm3_8
  double v32; // xmm2_8
  double v33; // xmm1_8
  double v34; // xmm0_8
  double v35; // xmm4_8
  double v36; // xmm3_8
  double v37; // xmm2_8
  double v38; // xmm1_8
  double v39; // xmm0_8
  double v40; // xmm4_8
  double v41; // xmm3_8
  double v42; // xmm2_8
  double v43; // xmm1_8
  double v44; // xmm0_8
  double v45; // xmm4_8
  double v46; // xmm3_8
  double v47; // xmm2_8
  double v48; // xmm1_8
  double v49; // xmm0_8
  double v50; // xmm4_8
  double v51; // xmm3_8
  double v52; // xmm2_8
  double v53; // xmm1_8
  double v54; // xmm0_8
  double v55; // xmm4_8
  double v56; // xmm3_8
  double v57; // xmm2_8
  double v58; // xmm1_8
  double v59; // xmm0_8
  double v60; // xmm4_8
  double v61; // xmm3_8
  double v62; // xmm2_8
  double v63; // xmm1_8
  double v64; // xmm0_8
  double v65; // xmm4_8
  double v66; // xmm3_8
  double v67; // xmm2_8
  double v68; // xmm1_8
  double v69; // xmm0_8
  double v70; // xmm4_8
  double v71; // xmm3_8
  double v72; // xmm2_8
  double v73; // xmm1_8
  double v74; // xmm0_8
  double v75; // xmm4_8
  double v76; // xmm3_8
  double v77; // xmm2_8
  double v78; // xmm5_8
  double v79; // xmm0_8
  double v80; // xmm4_8
  double v81; // xmm2_8
  double v82; // xmm1_8
  double v83; // xmm5_8
  double v84; // xmm4_8

  if ( a3 == 16 )
  {
    result = a4 + 16;
    do
    {
      a4 += 4;
      a2 += 64;
      v10 = a5[1];
      v11 = *(a4 - 4) - *(a2 - 64) * *a5 - *(a2 - 63) * v10;
      v12 = *(a4 - 3) - *(a2 - 48) * *a5 - *(a2 - 47) * v10;
      v13 = *(a4 - 2) - *(a2 - 32) * *a5 - *(a2 - 31) * v10;
      v14 = *(a4 - 1) - *a5 * *(a2 - 16) - v10 * *(a2 - 15);
      v15 = a5[2];
      v16 = v11 - *(a2 - 62) * v15;
      v17 = v12 - *(a2 - 46) * v15;
      v18 = v13 - *(a2 - 30) * v15;
      v19 = v14 - v15 * *(a2 - 14);
      v20 = a5[3];
      v21 = v16 - *(a2 - 61) * v20;
      v22 = v17 - *(a2 - 45) * v20;
      v23 = v18 - *(a2 - 29) * v20;
      v24 = v19 - v20 * *(a2 - 13);
      v25 = a5[4];
      v26 = v21 - *(a2 - 60) * v25;
      v27 = v22 - *(a2 - 44) * v25;
      v28 = v23 - *(a2 - 28) * v25;
      v29 = v24 - v25 * *(a2 - 12);
      v30 = a5[5];
      v31 = v26 - *(a2 - 59) * v30;
      v32 = v27 - *(a2 - 43) * v30;
      v33 = v28 - *(a2 - 27) * v30;
      v34 = v29 - v30 * *(a2 - 11);
      v35 = a5[6];
      v36 = v31 - *(a2 - 58) * v35;
      v37 = v32 - *(a2 - 42) * v35;
      v38 = v33 - *(a2 - 26) * v35;
      v39 = v34 - v35 * *(a2 - 10);
      v40 = a5[7];
      v41 = v36 - *(a2 - 57) * v40;
      v42 = v37 - *(a2 - 41) * v40;
      v43 = v38 - *(a2 - 25) * v40;
      v44 = v39 - v40 * *(a2 - 9);
      v45 = a5[8];
      v46 = v41 - *(a2 - 56) * v45;
      v47 = v42 - *(a2 - 40) * v45;
      v48 = v43 - *(a2 - 24) * v45;
      v49 = v44 - v45 * *(a2 - 8);
      v50 = a5[9];
      v51 = v46 - *(a2 - 55) * v50;
      v52 = v47 - *(a2 - 39) * v50;
      v53 = v48 - *(a2 - 23) * v50;
      v54 = v49 - v50 * *(a2 - 7);
      v55 = a5[10];
      v56 = v51 - *(a2 - 54) * v55;
      v57 = v52 - *(a2 - 38) * v55;
      v58 = v53 - *(a2 - 22) * v55;
      v59 = v54 - v55 * *(a2 - 6);
      v60 = a5[11];
      v61 = v56 - *(a2 - 53) * v60;
      v62 = v57 - *(a2 - 37) * v60;
      v63 = v58 - *(a2 - 21) * v60;
      v64 = v59 - v60 * *(a2 - 5);
      v65 = a5[12];
      v66 = v61 - *(a2 - 52) * v65;
      v67 = v62 - *(a2 - 36) * v65;
      v68 = v63 - *(a2 - 20) * v65;
      v69 = v64 - v65 * *(a2 - 4);
      v70 = a5[13];
      v71 = v66 - *(a2 - 51) * v70;
      v72 = v67 - *(a2 - 35) * v70;
      v73 = v68 - *(a2 - 19) * v70;
      v74 = v69 - v70 * *(a2 - 3);
      v75 = a5[14];
      v76 = v71 - *(a2 - 50) * v75;
      v77 = v72 - *(a2 - 34) * v75;
      v78 = *(a2 - 18) * v75;
      v79 = v74 - v75 * *(a2 - 2);
      v80 = a5[15];
      v81 = v77 - *(a2 - 33) * v80;
      v82 = v73 - v78 - *(a2 - 17) * v80;
      v83 = *(a2 - 1) * v80;
      v84 = v80 * *(a2 - 49);
      *(a4 - 3) = v81;
      *(a4 - 2) = v82;
      *(a4 - 1) = v79 - v83;
      *(a4 - 4) = v76 - v84;
    }
    while ( a4 != result );
  }
  else
  {
    result = (double *)(unsigned int)(a3 - 1);
    v6 = a2 + 256;
    v7 = 8LL * (_QWORD)result + 8;
    do
    {
      v8 = *a4;
      if ( a3 > 0 )
      {
        result = nullptr;
        do
        {
          v9 = *(double *)((char *)result + (_QWORD)a5) * *(double *)((char *)result + (_QWORD)a2);
          ++result;
          v8 = v8 - v9;
        }
        while ( (double *)v7 != result );
      }
      a2 += 16;
      *a4++ = v8;
    }
    while ( v6 != a2 );
  }
  return result;
}

