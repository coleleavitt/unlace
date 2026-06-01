const double *__fastcall ClpCholeskyCrecRecLeaf(double *a1, const double *a2, double *a3, double *a4, int a5)
{
  double *v5; // rbx
  int v6; // r15d
  int v7; // r13d
  unsigned __int64 v8; // r14
  const double *result; // rax
  double *v10; // r9
  const double *v11; // r11
  double v12; // xmm12_8
  const double *v13; // rdx
  double v14; // xmm11_8
  double *v15; // r8
  double v16; // xmm10_8
  double v17; // xmm9_8
  double v18; // xmm8_8
  double v19; // xmm7_8
  double v20; // xmm6_8
  double v21; // xmm5_8
  double v22; // xmm0_8
  double v23; // xmm2_8
  double v24; // xmm0_8
  double v25; // xmm1_8
  double v26; // xmm1_8
  const double *v27; // rdx
  const double *v28; // r8
  double v29; // xmm4_8
  double v30; // xmm3_8
  double v31; // xmm2_8
  double v32; // xmm1_8
  double *v33; // rax
  double v34; // xmm0_8
  double v35; // xmm5_8
  double v36; // xmm0_8
  const double *v37; // r9
  double *v38; // r12
  const double *v39; // r10
  double *v40; // r8
  const double *v41; // rdx
  double *v42; // rdi
  double v43; // xmm15_8
  double v44; // xmm14_8
  double v45; // xmm13_8
  double v46; // xmm12_8
  double v47; // xmm11_8
  double v48; // xmm10_8
  double v49; // xmm9_8
  double v50; // xmm0_8
  double v51; // xmm4_8
  double v52; // xmm7_8
  double v53; // xmm6_8
  double v54; // xmm5_8
  double v55; // xmm0_8
  double v56; // xmm3_8
  double v57; // xmm2_8
  double v58; // xmm1_8
  double v59; // xmm7_8
  double v60; // xmm5_8
  double *v61; // [rsp+0h] [rbp-78h]
  double v62; // [rsp+0h] [rbp-78h]
  const double *v63; // [rsp+8h] [rbp-70h]
  double v64; // [rsp+8h] [rbp-70h]
  unsigned __int64 v65; // [rsp+10h] [rbp-68h]
  double v66; // [rsp+10h] [rbp-68h]
  unsigned __int64 v67; // [rsp+18h] [rbp-60h]
  double v68; // [rsp+18h] [rbp-60h]
  unsigned __int64 v69; // [rsp+20h] [rbp-58h]
  double v70; // [rsp+20h] [rbp-58h]
  double v71; // [rsp+28h] [rbp-50h]
  double v72; // [rsp+30h] [rbp-48h]
  double v73; // [rsp+38h] [rbp-40h]
  double v74; // [rsp+40h] [rbp-38h]

  v5 = a3 - 64;
  if ( a5 == 16 )
  {
    v37 = a1 + 256;
    v38 = a3 + 192;
    do
    {
      v5 += 64;
      v39 = a2;
      v40 = v5;
      do
      {
        v41 = v39;
        v42 = a4;
        result = v37 - 256;
        v66 = *v40;
        v43 = v40[2];
        v68 = v40[16];
        v44 = v40[18];
        v62 = v40[32];
        v45 = v40[34];
        v64 = v40[48];
        v46 = v40[50];
        v70 = v40[1];
        v47 = v40[3];
        v72 = v40[17];
        v48 = v40[19];
        v71 = v40[33];
        v49 = v40[35];
        v73 = v40[49];
        v74 = v40[51];
        do
        {
          v50 = *v42;
          result += 16;
          v41 += 16;
          ++v42;
          v51 = *(result - 16);
          v52 = *(v41 - 16) * v50;
          v53 = *(v41 - 15) * v50;
          v54 = *(v41 - 14) * v50;
          v55 = v50 * *(v41 - 13);
          v66 = v66 - v51 * v52;
          v56 = *(result - 15);
          v68 = v68 - v56 * v52;
          v57 = *(result - 14);
          v58 = *(result - 13);
          v62 = v62 - v57 * v52;
          v64 = v64 - v52 * v58;
          v70 = v70 - v51 * v53;
          v72 = v72 - v56 * v53;
          v59 = v73 - v53 * v58;
          v71 = v71 - v57 * v53;
          v73 = v59;
          v47 = v47 - v51 * v55;
          v43 = v43 - v51 * v54;
          v48 = v48 - v56 * v55;
          v44 = v44 - v56 * v54;
          v49 = v49 - v57 * v55;
          v45 = v45 - v57 * v54;
          v46 = v46 - v54 * v58;
          v60 = v74 - v55 * v58;
          v74 = v60;
        }
        while ( result != v37 );
        v40[49] = v59;
        v40 += 4;
        *(v40 - 2) = v43;
        v39 += 4;
        *(v40 - 4) = v66;
        v40[14] = v44;
        v40[12] = v68;
        v40[30] = v45;
        v40[28] = v62;
        v40[46] = v46;
        v40[44] = v64;
        *(v40 - 1) = v47;
        *(v40 - 3) = v70;
        v40[15] = v48;
        v40[13] = v72;
        v40[31] = v49;
        v40[29] = v71;
        v40[47] = v60;
      }
      while ( v5 + 16 != v40 );
      v37 += 4;
    }
    while ( v5 != v38 );
  }
  else
  {
    v6 = a5 & 1;
    v7 = a5 - v6;
    v8 = a5 - v6;
    v65 = v8 * 8 + 128;
    v67 = v8 * 8 + 256;
    v69 = v8 * 8 + 384;
    v61 = a3 + 192;
    result = (const double *)(16LL * ((unsigned int)(a5 - v6 - 1) >> 1) + 528);
    v63 = result;
    do
    {
      v5 += 64;
      if ( v7 > 0 )
      {
        v10 = v5;
        v11 = a2;
        do
        {
          v12 = *v10;
          v13 = v11;
          v14 = v10[16];
          v15 = a4;
          v16 = v10[32];
          result = a1;
          v17 = v10[48];
          v18 = v10[1];
          v19 = v10[17];
          v20 = v10[33];
          v21 = v10[49];
          do
          {
            v22 = *v15;
            v13 += 16;
            result += 16;
            ++v15;
            v23 = *(v13 - 16) * v22;
            v24 = v22 * *(v13 - 15);
            v12 = v12 - *(result - 16) * v23;
            v18 = v18 - *(result - 16) * v24;
            v14 = v14 - *(result - 15) * v23;
            v25 = *(result - 14);
            v19 = v19 - *(result - 15) * v24;
            v20 = v20 - v25 * v24;
            v16 = v16 - v25 * v23;
            v26 = *(result - 13);
            v17 = v17 - v23 * v26;
            v21 = v21 - v24 * v26;
          }
          while ( v13 != v11 + 256 );
          *v10 = v12;
          v10 += 2;
          v11 += 2;
          v10[14] = v14;
          v10[30] = v16;
          v10[46] = v17;
          *(v10 - 1) = v18;
          v10[15] = v19;
          v10[31] = v20;
          v10[47] = v21;
        }
        while ( (double *)((char *)v63 + (_QWORD)v5 - 512) != v10 );
      }
      if ( v6 )
      {
        v27 = &a2[v8];
        v28 = a4;
        v29 = v5[v8];
        v30 = *(double *)((char *)v5 + v65);
        v31 = *(double *)((char *)v5 + v67);
        v32 = *(double *)((char *)v5 + v69);
        v33 = a1;
        do
        {
          v34 = *v27;
          v27 += 16;
          v35 = *v33;
          v36 = v34 * *v28++;
          v33 += 16;
          v29 = v29 - v35 * v36;
          v30 = v30 - *(v33 - 15) * v36;
          v31 = v31 - *(v33 - 14) * v36;
          v32 = v32 - v36 * *(v33 - 13);
        }
        while ( &a2[v8 + 256] != v27 );
        v5[v8] = v29;
        *(double *)((char *)v5 + v65) = v30;
        *(double *)((char *)v5 + v67) = v31;
        result = (const double *)(v8 * 8 + 384);
        *(double *)((char *)v5 + v69) = v32;
      }
      a1 += 4;
    }
    while ( v5 != v61 );
  }
  return result;
}

