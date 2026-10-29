const ClpSimplex *__fastcall ClpPackedMatrix3::transposeTimes(
        ClpPackedMatrix3 *this,
        const ClpSimplex *a2,
        const double *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        const CoinIndexedVector *a6)
{
  __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // r10
  double v11; // xmm1_8
  __int64 v12; // r8
  __int64 v13; // r11
  __int64 v14; // rbx
  double v15; // xmm5_8
  double v16; // xmm14_8
  double v17; // xmm2_8
  __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // r14d
  __int64 v21; // rsi
  int v22; // ecx
  unsigned __int8 v23; // al
  double v24; // xmm3_8
  double v25; // xmm0_8
  double v26; // xmm4_8
  __int64 v27; // rax
  int *v28; // r13
  int v29; // ebx
  int *v30; // r11
  __int64 v31; // rax
  int v32; // ecx
  double v33; // xmm3_8
  __int64 v34; // rdx
  double v35; // xmm0_8
  double v36; // xmm0_8
  unsigned __int64 v37; // r8
  int v38; // r15d
  int v39; // r9d
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  double v46; // xmm0_8
  double v47; // xmm0_8
  int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // esi
  unsigned __int8 v52; // al
  double v53; // xmm3_8
  double v54; // xmm0_8
  double v55; // xmm6_8
  __int64 v56; // rax
  ClpPackedMatrix3 *v57; // rax
  int v59; // r14d
  __int64 v60; // rax
  int v61; // r11d
  __int64 v62; // r13
  __int64 v63; // rax
  double *v64; // r15
  int *v65; // rbp
  double *v66; // r9
  __int64 v67; // r10
  __int64 v68; // rax
  int *v69; // r8
  __int64 i; // rdi
  double v71; // xmm6_8
  __int64 v72; // rdx
  int *v73; // rax
  __int64 v74; // rcx
  int *v75; // rdi
  double v76; // xmm6_8
  __int64 v77; // rdx
  int *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdi
  int v81; // r8d
  __int64 v82; // rax
  double v83; // xmm0_8
  int v84; // ecx
  double v85; // xmm6_8
  __int64 v86; // rdx
  __int64 v87; // rdx
  double *v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rcx
  double v93; // xmm0_8
  int v94; // esi
  double v95; // xmm9_8
  double v96; // xmm6_8
  __int64 v97; // rcx
  int v98; // eax
  __int64 v99; // rcx
  double *v100; // [rsp+8h] [rbp-110h]
  int v101; // [rsp+14h] [rbp-104h]
  int *v102; // [rsp+18h] [rbp-100h]
  int *v103; // [rsp+20h] [rbp-F8h]
  int v104; // [rsp+28h] [rbp-F0h]
  int v105; // [rsp+2Ch] [rbp-ECh]
  __int64 v106; // [rsp+30h] [rbp-E8h]
  _DWORD *v108; // [rsp+40h] [rbp-D8h]
  __int64 v109; // [rsp+48h] [rbp-D0h]
  __int64 v110; // [rsp+50h] [rbp-C8h]
  __int64 v111; // [rsp+58h] [rbp-C0h]
  __int64 v112; // [rsp+60h] [rbp-B8h]
  __int64 v113; // [rsp+68h] [rbp-B0h]
  __int64 v114; // [rsp+70h] [rbp-A8h]
  double *v115; // [rsp+80h] [rbp-98h]
  __int64 v116; // [rsp+90h] [rbp-88h]
  __int64 v117; // [rsp+98h] [rbp-80h]
  __int64 v118; // [rsp+A0h] [rbp-78h]
  __int64 v119; // [rsp+A8h] [rbp-70h]
  double v120; // [rsp+B0h] [rbp-68h]
  _OWORD v124[4]; // [rsp+D0h] [rbp-48h]

  v7 = *((int *)a2 + 27);
  v100 = *((double **)a4 + 1);
  v108 = *(_DWORD **)a4;
  v8 = *((_DWORD *)a6 + 4);
  v9 = *((_QWORD *)a5 + 1);
  v110 = *(_QWORD *)a5;
  v10 = *((_QWORD *)a2 + 33);
  v11 = *((double *)a2 + 88);
  v120 = *((double *)a2 + 109);
  v12 = *(_QWORD *)a6;
  v13 = *((_QWORD *)a6 + 1);
  v111 = v9;
  v14 = *((_QWORD *)a2 + 148);
  v15 = -v120;
  v124[0] = xmmword_28D780;
  v16 = *((double *)a2 + 218);
  if ( v8 <= 0 )
  {
    v101 = 0;
    v17 = 1.0e31;
  }
  else
  {
    v17 = 1.0e31;
    v18 = (unsigned int)(v8 - 1) + 1LL;
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = *(int *)(v12 + 4 * v19);
      v22 = *(_DWORD *)(v12 + 4 * v19);
      v23 = *(_BYTE *)(v10 + v7 + v21) & 3;
      if ( v23 != 1 )
      {
        v24 = *((double *)&v124[-1] + v23);
        v25 = *(double *)(v13 + 8 * v19) * v24;
        if ( v25 > 0.0 )
        {
          v26 = *(double *)(v14 + 8 * v21) * v24;
          if ( v15 > v26 - v25 * 1.0e15 )
          {
            if ( v15 > v26 - v25 * v17 && v25 >= v16 )
              v17 = (v26 + v120) / v25;
            v27 = v20++;
            *(double *)(v9 + 8 * v27) = v25 * v24;
            *(_DWORD *)(v110 + 4 * v27) = v7 + v22;
          }
        }
      }
      ++v19;
    }
    while ( v18 != v19 );
    v101 = v20;
  }
  v109 = v14 - 8 * v7;
  v28 = *((int **)this + 9);
  v29 = v28[2];
  if ( !v29 )
    goto LABEL_41;
  v30 = *((int **)this + 5);
  v31 = v30[1];
  v32 = *v30;
  if ( (int)v31 > *v30 )
  {
    v33 = 0.0;
    v34 = 0;
    do
    {
      v35 = a3[*(int *)(*((_QWORD *)this + 6) + 4LL * v32 + 4 * v34)]
          * *(double *)(*((_QWORD *)this + 7) + 8LL * v32 + 8 * v34);
      ++v34;
      v33 = v33 + v35;
    }
    while ( (unsigned int)(v31 - 1 - v32) + 1LL != v34 );
    v36 = fabs(v33);
    if ( v29 > 1 )
      goto LABEL_17;
    goto LABEL_94;
  }
  v36 = 0.0;
  v33 = 0.0;
  if ( v29 <= 1 )
  {
LABEL_94:
    if ( v36 > v11 )
    {
      v38 = 1;
      *v100 = v33;
      *v108 = **((_DWORD **)this + 4);
      goto LABEL_27;
    }
LABEL_41:
    v57 = this;
    if ( *((int *)this + 2) <= 0 )
    {
      *((_DWORD *)a4 + 4) = 0;
      *((_BYTE *)a4 + 28) = 0;
      goto LABEL_38;
    }
    v38 = 0;
    goto LABEL_43;
  }
LABEL_17:
  v37 = 0;
  v38 = 0;
  do
  {
    v39 = v30[v37 / 4 + 2];
    if ( fabs(v33) > v11 )
    {
      v40 = *((_QWORD *)this + 4);
      v41 = v38++;
      v100[v41] = v33;
      v108[v41] = *(_DWORD *)(v40 + v37);
    }
    if ( v39 <= (int)v31 )
    {
      v47 = 0.0;
      v33 = 0.0;
    }
    else
    {
      v33 = 0.0;
      v42 = (unsigned int)(v39 - v31 - 1) + 1LL;
      v43 = *((_QWORD *)this + 6) + 4 * v31;
      v44 = *((_QWORD *)this + 7) + 8 * v31;
      v45 = 0;
      do
      {
        v46 = a3[*(int *)(v43 + 4 * v45)] * *(double *)(v44 + 8 * v45);
        ++v45;
        v33 = v33 + v46;
      }
      while ( v42 != v45 );
      v47 = fabs(v33);
    }
    v37 += 4LL;
    v31 = v39;
  }
  while ( 4LL * (unsigned int)(v29 - 2) + 4 != v37 );
  if ( v47 > v11 )
  {
    v99 = v38++;
    v100[v99] = v33;
    v108[v99] = *(_DWORD *)(*((_QWORD *)this + 4) + 4LL * (v29 - 1));
    goto LABEL_27;
  }
  if ( v38 )
  {
LABEL_27:
    v48 = v101;
    v49 = 0;
    do
    {
      v50 = (int)v108[v49];
      v51 = v108[v49];
      v52 = *(_BYTE *)(v10 + v50) & 3;
      if ( v52 != 1 )
      {
        v53 = *((double *)&v124[-1] + v52);
        v54 = v100[v49] * v53;
        if ( v54 > 0.0 )
        {
          v55 = *(double *)(v109 + 8 * v50) * v53;
          if ( v15 > v55 - v54 * 1.0e15 )
          {
            if ( v15 > v55 - v54 * v17 && v54 >= v16 )
              v17 = (v55 + v120) / v54;
            v56 = v48++;
            *(double *)(v111 + 8 * v56) = v54 * v53;
            *(_DWORD *)(v110 + 4 * v56) = v51;
          }
        }
      }
      ++v49;
    }
    while ( (unsigned int)(v38 - 1) + 1LL != v49 );
    v57 = this;
    v101 = v48;
    if ( *((int *)this + 2) <= 0 )
    {
      *((_DWORD *)a4 + 4) = v38;
      goto LABEL_38;
    }
    goto LABEL_43;
  }
  v57 = this;
  if ( *((int *)this + 2) > 0 )
  {
LABEL_43:
    v103 = v28;
    v104 = 0;
    v116 = *((_QWORD *)v57 + 6);
    v59 = v38;
    v117 = *((_QWORD *)v57 + 7);
    v118 = *((_QWORD *)v57 + 4);
    do
    {
      v60 = *v103;
      v61 = v103[8];
      v105 = v103[7];
      v102 = (int *)(v116 + 4 * v60);
      v62 = v117 + 8 * v60;
      v106 = v118 + 4LL * v103[2];
      v63 = v59;
      v64 = &v100[v63];
      v119 = v63 * 8;
      if ( v105 >> 2 <= 0 )
      {
        v66 = &v100[v63];
      }
      else
      {
        v65 = v102;
        v66 = &v100[v63];
        v67 = v62;
        v115 = &v100[v63];
        v112 = (unsigned int)((v105 >> 2) - 1) + 1LL;
        v68 = 4 * (v61 - 1);
        v113 = 4 * v68 + 16;
        v114 = 8 * v68 + 32;
        do
        {
          v69 = v65;
          for ( i = 0; i != 4; ++i )
          {
            if ( v61 <= 0 )
            {
              v71 = 0.0;
            }
            else
            {
              v71 = 0.0;
              v72 = v67 + i * 8;
              v73 = v69;
              do
              {
                v74 = *v73;
                v73 += 4;
                v72 += 32;
                v71 = v71 + a3[v74] * *(double *)(v72 - 32);
              }
              while ( &v69[4 * (v61 - 1) + 4] != v73 );
            }
            v66[i] = v71;
            ++v69;
          }
          v66 += 4;
          v65 = (int *)((char *)v65 + v113);
          v67 += v114;
        }
        while ( &v64[4 * v112] != v66 );
        v64 = v115;
        v102 = (int *)((char *)v102 + v112 * v113);
        v62 += v112 * v114;
      }
      if ( (v105 & 3) != 0 )
      {
        v75 = v102;
        do
        {
          if ( v61 <= 0 )
          {
            v76 = 0.0;
          }
          else
          {
            v76 = 0.0;
            v77 = v62;
            v78 = v75;
            do
            {
              v79 = *v78;
              v78 += 4;
              v77 += 32;
              v76 = v76 + a3[v79] * *(double *)(v77 - 32);
            }
            while ( &v75[4 * (v61 - 1) + 4] != v78 );
          }
          ++v75;
          *v66 = v76;
          v62 += 8;
          ++v66;
        }
        while ( &v102[v105 & 3] != v75 );
      }
      v80 = v103[6];
      if ( (int)v80 > 0 )
      {
        v81 = v101;
        v82 = 0;
        do
        {
          v83 = v64[v82];
          if ( fabs(v83) > v11 )
          {
            v84 = *(_DWORD *)(v106 + 4 * v82);
            if ( v83 > 0.0 )
            {
              v85 = *(double *)(v109 + 8LL * v84);
              if ( v15 > v85 - v83 * 1.0e15 )
              {
                if ( v15 > v85 - v83 * v17 && v83 >= v16 )
                  v17 = (v85 + v120) / v83;
                v86 = v81++;
                *(double *)(v111 + 8 * v86) = v83;
                *(_DWORD *)(v110 + 4 * v86) = v84;
              }
            }
            v87 = v59++;
            v100[v87] = v83;
            v108[v87] = v84;
          }
          ++v82;
        }
        while ( (unsigned int)(v80 - 1) + 1LL != v82 );
        v101 = v81;
      }
      if ( v105 > (int)v80 )
      {
        v88 = &v64[v80];
        v89 = (unsigned int)(v105 - 1 - v80) + 1LL;
        v90 = v106 + 4 * v80;
        v91 = 0;
        do
        {
          v93 = v88[v91];
          if ( fabs(v93) > v11 )
          {
            v94 = *(_DWORD *)(v90 + 4 * v91);
            if ( v93 < 0.0 )
            {
              v95 = -v93;
              v96 = -*(double *)(v109 + 8LL * v94);
              if ( v15 > v96 - 1.0e15 * -v93 )
              {
                if ( v15 > v96 - v95 * v17 && v95 >= v16 )
                  v17 = (v120 - *(double *)(v109 + 8LL * v94)) / v95;
                v97 = v101;
                *(double *)(v111 + 8LL * v101++) = v93;
                *(_DWORD *)(v110 + 4 * v97) = v94;
              }
            }
            v92 = v59++;
            v100[v92] = v93;
            v108[v92] = v94;
          }
          ++v91;
        }
        while ( v91 != v89 );
      }
      ++v104;
      v103 += 10;
    }
    while ( *((_DWORD *)this + 2) > v104 );
    v38 = v59;
    v98 = v105 + (v119 >> 3);
    if ( v98 > v59 )
      memset(&v100[v59], 0, 8LL * (unsigned int)(v98 - 1 - v59) + 8);
  }
  *((_DWORD *)a4 + 4) = v38;
  if ( !v38 )
    *((_BYTE *)a4 + 28) = 0;
LABEL_38:
  *((_DWORD *)a5 + 4) = v101;
  if ( !v101 )
    *((_BYTE *)a5 + 28) = 0;
  *((double *)a2 + 218) = v17;
  return a2;
}

