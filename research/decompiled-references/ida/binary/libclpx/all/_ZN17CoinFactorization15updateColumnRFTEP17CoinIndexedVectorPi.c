__int64 __fastcall CoinFactorization::updateColumnRFT(CoinFactorization *this, CoinIndexedVector *a2, int *a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r10
  int v8; // r11d
  int v9; // r13d
  int *v10; // rbx
  __int64 v11; // rbp
  __int64 v13; // rsi
  double v14; // xmm5_8
  int v15; // r9d
  __int64 v16; // r14
  double v17; // xmm3_8
  int v18; // r12d
  double v19; // xmm2_8
  int v20; // r14d
  double v21; // xmm1_8
  double v22; // xmm0_8
  double v23; // xmm4_8
  __int64 v24; // r9
  double v25; // xmm1_8
  double v26; // xmm4_8
  double v27; // xmm0_8
  bool v28; // cc
  __int64 v29; // r11
  __int64 v30; // r11
  __int64 v31; // r11
  __int64 v32; // rcx
  __int64 v33; // rbx
  int v34; // esi
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // rsi
  int *v38; // rbx
  int v39; // esi
  int *v40; // r14
  __int64 v41; // rcx
  double v42; // xmm3_8
  __int64 v43; // rbp
  int v44; // r10d
  __int64 v45; // rcx
  int v46; // r10d
  __int64 v47; // rbp
  __int64 v48; // r13
  __int64 v49; // r12
  __int64 v50; // rcx
  __int64 v51; // r10
  double v52; // xmm1_8
  __int64 v53; // r10
  __int64 v54; // r14
  __int64 v55; // rbx
  double *v56; // rdx
  double v57; // xmm1_8
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rbp
  __int64 v61; // r13
  __int64 v62; // r12
  __int64 v63; // rdx
  __int64 v64; // rcx
  double v65; // xmm3_8
  __int64 v66; // r9
  __int64 v67; // rsi
  __int64 v68; // r11
  __int64 v69; // r9
  __int64 v70; // r8
  __int64 v71; // rsi
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // r10
  unsigned __int64 v75; // rcx
  __int64 v76; // rdi
  __int64 v77; // xmm0_8
  double v78; // xmm3_8
  __int64 v79; // rcx
  __int64 v80; // rcx
  int *v81; // r14
  int v82; // r12d
  double *v83; // r9
  double v84; // xmm1_8
  __int64 v85; // rbp
  __int64 v86; // r11
  __int64 v87; // rbx
  __int64 v88; // rcx
  __int64 v89; // r9
  double v90; // xmm0_8
  __int64 v91; // r14
  __int64 v92; // r11
  __int64 v93; // rbp
  __int64 v94; // rbx
  __int64 v95; // r9
  __int64 v96; // rbx
  int *v97; // rcx
  __int64 v98; // r11
  int *v99; // r12
  double v100; // xmm0_8
  int v101; // r9d
  __int64 v102; // r10
  __int64 v103; // rcx
  int *v104; // rbx
  int *v105; // rdx
  __int64 v106; // r11
  int v107; // ecx
  double v108; // xmm3_8
  __int64 v109; // r11
  int v110; // ecx
  __int64 v111; // rbp
  __int64 v112; // r13
  __int64 v113; // r12
  __int64 v114; // rcx
  __int64 v115; // r11
  double v116; // xmm1_8
  double *v117; // rcx
  double v118; // xmm1_8
  __int64 v119; // rcx
  int v120; // r13d
  __int64 v121; // rbp
  __int64 v122; // r11
  __int64 v123; // rbx
  __int64 v124; // rcx
  __int64 v125; // r10
  double v126; // xmm3_8
  __int64 v127; // [rsp+0h] [rbp-70h]
  __int64 v128; // [rsp+8h] [rbp-68h]
  __int64 v129; // [rsp+8h] [rbp-68h]
  int v130; // [rsp+8h] [rbp-68h]
  __int64 v131; // [rsp+8h] [rbp-68h]
  __int64 v132; // [rsp+10h] [rbp-60h]
  __int64 v133; // [rsp+10h] [rbp-60h]
  __int64 v134; // [rsp+10h] [rbp-60h]
  __int64 v135; // [rsp+18h] [rbp-58h]
  int *v136; // [rsp+18h] [rbp-58h]
  __int64 v137; // [rsp+20h] [rbp-50h]
  __int64 v138; // [rsp+20h] [rbp-50h]
  __int64 v139; // [rsp+28h] [rbp-48h]
  int *v140; // [rsp+28h] [rbp-48h]
  int v141; // [rsp+34h] [rbp-3Ch]
  __int64 v142; // [rsp+38h] [rbp-38h]

  v3 = *((int *)this + 197);
  v4 = *((_QWORD *)this + 81);
  v5 = *((_QWORD *)this + 29);
  result = *((_QWORD *)a2 + 1);
  v7 = *((int *)a2 + 4);
  v8 = *((_DWORD *)this + 60);
  if ( *((int *)this + 164) <= -2 )
    v4 = 0;
  if ( !(_DWORD)v3 )
  {
    v66 = *((int *)this + 12);
    if ( v8 <= -2 )
      v5 = 0;
    v67 = *(int *)(v4 + 4 * v66);
    *(_DWORD *)(v5 + 4 * v66) = v7;
    *(_DWORD *)(v4 + 4LL * *((int *)this + 13)) = v67 + v7;
    v68 = 4 * v67;
    v69 = *((_QWORD *)this + 78);
    v70 = *((_QWORD *)this + 75);
    if ( *((int *)this + 158) <= -2 )
      v69 = 0;
    if ( *((int *)this + 152) <= -2 )
      v70 = 0;
    v71 = 8 * v67;
    if ( (int)v7 > 0 )
    {
      v72 = v68 + v69;
      v73 = v71 + v70;
      v74 = 4LL * (unsigned int)(v7 - 1) + 4;
      v75 = 0;
      do
      {
        v76 = a3[v75 / 4];
        v77 = *(_QWORD *)(result + 8 * v76);
        *(_DWORD *)(v72 + v75) = v76;
        *(_QWORD *)(v73 + 2 * v75) = v77;
        v75 += 4LL;
      }
      while ( v74 != v75 );
    }
    return result;
  }
  v9 = *((_DWORD *)this + 206);
  v10 = nullptr;
  v11 = *((_QWORD *)this + 102);
  v132 = *((_QWORD *)this + 101);
  if ( v9 >= -1 )
    v10 = *((int **)this + 102);
  v13 = *((int *)this + 8);
  v14 = (double)v10[v3];
  v15 = *((_DWORD *)this + 17);
  v128 = *((_QWORD *)this + 100);
  v16 = *((_QWORD *)this + 13);
  v17 = (double)(int)v7;
  v18 = *((_DWORD *)this + 66);
  if ( *((int *)this + 28) <= -2 )
    v16 = 0;
  v19 = *((double *)this + 1);
  v135 = v16;
  v20 = *((_DWORD *)this + 9);
  v21 = (double)v15;
  v22 = (v17 / (double)(int)v13 * (v14 / (double)v20) + 2.0) * (double)v15 + (v14 / (double)v20 + 1.0) * v17;
  v23 = (double)((int)v7 + v15);
  v24 = *((_QWORD *)this + 32);
  v25 = v21 + v21 + v14 + v17 * v17;
  v26 = v23 * 0.1 + v22;
  if ( !v24 || v18 < -1 )
  {
    v78 = v17 + 1.0e100;
    if ( v18 <= -2 )
      v24 = 0;
    v27 = v78;
    goto LABEL_61;
  }
  v27 = v22 + v17 * v17 + v17;
  if ( !*((_QWORD *)this + 141) || *((int *)this + 284) < -1 )
  {
LABEL_61:
    v79 = 0;
    if ( v8 > -2 )
      v79 = *((_QWORD *)this + 29);
    v127 = v79;
LABEL_64:
    if ( v27 >= 1.0e100 )
    {
      if ( v25 < 1.0e100 )
        goto LABEL_66;
      goto LABEL_76;
    }
LABEL_65:
    if ( v27 > v25 )
      goto LABEL_66;
    v103 = *((int *)this + 199);
    v131 = v128 + 8 * v103;
    v134 = v132 + 4 * v103;
    v138 = (__int64)&v10[*((int *)this + 16) + 1];
    if ( (int)v7 > 0 )
    {
      v104 = a3;
      v140 = a3;
      v105 = &a3[(unsigned int)(v7 - 1) + 1];
      do
      {
        while ( 1 )
        {
          v106 = *v104;
          v107 = *(_DWORD *)(v24 + 4 * v106);
          if ( v107 )
          {
            v108 = *(double *)(result + 8 * v106);
            v109 = *(int *)(v138 + 4 * v106);
            v110 = v109 + v107;
            if ( (int)v109 < v110 )
              break;
          }
          if ( v105 == ++v104 )
            goto LABEL_96;
        }
        v111 = (unsigned int)(v110 - v109 - 1) + 1LL;
        v112 = v131 + 8 * v109;
        v113 = v134 + 4 * v109;
        v114 = 0;
        do
        {
          v115 = *(int *)(v113 + 4 * v114);
          v116 = *(double *)(v112 + 8 * v114++);
          *(double *)(result + 8 * v115) = *(double *)(result + 8 * v115) - v116 * v108;
        }
        while ( v111 != v114 );
        ++v104;
      }
      while ( v105 != v104 );
LABEL_96:
      a3 = v140;
    }
    if ( (int)v13 < v20 )
    {
      do
      {
        v117 = (double *)(result + 8LL * *(int *)(v135 + 4 * v13));
        v118 = *v117 + *(double *)(result + 8 * v13);
        *v117 = 0.0;
        if ( fabs(v118) <= v19 )
        {
          *(_QWORD *)(result + 8 * v13) = 0;
        }
        else
        {
          *(double *)(result + 8 * v13) = v118;
          a3[v7] = v13;
          v119 = *(int *)(v138 + 4 * v13);
          v120 = v7 + 1;
          if ( (int)v119 < (int)v119 + *(_DWORD *)(v24 + 4 * v13) )
          {
            v121 = v131 + 8 * v119;
            v122 = (unsigned int)(*(_DWORD *)(v24 + 4 * v13) - 1) + 1LL;
            v123 = v134 + 4 * v119;
            v124 = 0;
            do
            {
              v125 = *(int *)(v123 + 4 * v124);
              v126 = *(double *)(v121 + 8 * v124++);
              *(double *)(result + 8 * v125) = *(double *)(result + 8 * v125) - v126 * v118;
            }
            while ( v122 != v124 );
          }
          v7 = v120;
        }
        ++v13;
      }
      while ( *((_DWORD *)this + 9) > (int)v13 );
    }
LABEL_76:
    v91 = *((int *)this + 12);
    v92 = *((_QWORD *)this + 78);
    v93 = *((_QWORD *)this + 75);
    v94 = *(int *)(v4 + 4 * v91);
    if ( *((int *)this + 158) <= -2 )
      v92 = 0;
    v130 = *(_DWORD *)(v4 + 4 * v91);
    if ( *((int *)this + 152) <= -2 )
      v93 = 0;
    v95 = 4 * v94;
    v96 = 8 * v94;
    if ( (int)v7 <= 0 )
    {
      *(_DWORD *)(v127 + 4 * v91) = 0;
      result = *((int *)this + 13);
      *(_DWORD *)(v4 + 4 * result) = v130;
      *((_DWORD *)a2 + 4) = 0;
      goto LABEL_87;
    }
    v97 = a3;
    v98 = v95 + v92;
    v99 = &a3[(unsigned int)(v7 - 1) + 1];
    v39 = 0;
    do
    {
      v100 = *(double *)(result + 8LL * *v97);
      v101 = *v97;
      if ( v100 != 0.0 )
      {
        v102 = v39++;
        *(_DWORD *)(v98 + 4 * v102) = v101;
        *(double *)(v93 + 8 * v102 + v96) = v100;
        a3[v102] = v101;
      }
      ++v97;
    }
    while ( v97 != v99 );
    *(_DWORD *)(v127 + 4 * v91) = v39;
    result = *((int *)this + 13);
    *(_DWORD *)(v4 + 4 * result) = v39 + v130;
    goto LABEL_86;
  }
  v28 = v8 <= -2;
  v29 = *((_QWORD *)this + 29);
  if ( v28 )
    v29 = 0;
  v127 = v29;
  if ( v26 >= 1.0e100 )
    goto LABEL_64;
  if ( v26 > v27 )
    goto LABEL_65;
  if ( v26 > v25 )
  {
LABEL_66:
    v80 = *v10;
    if ( (int)v13 >= v20 )
      goto LABEL_76;
    v81 = &v10[-v13];
    while ( 1 )
    {
      v82 = v81[v13 + 1];
      v83 = (double *)(result + 8LL * *(int *)(v135 + 4 * v13));
      v84 = *v83;
      *v83 = 0.0;
      if ( v82 > (int)v80 )
      {
        v85 = v128 + 8 * v80;
        v86 = (unsigned int)(v82 - v80 - 1) + 1LL;
        v87 = v132 + 4 * v80;
        v88 = 0;
        do
        {
          v89 = *(int *)(v87 + 4 * v88);
          v90 = *(double *)(v85 + 8 * v88++);
          v84 = v84 - v90 * *(double *)(result + 8 * v89);
        }
        while ( v86 != v88 );
      }
      if ( fabs(v84) <= v19 )
      {
        *(_QWORD *)(result + 8 * v13++) = 0;
        if ( *((_DWORD *)this + 9) <= (int)v13 )
          goto LABEL_76;
      }
      else
      {
        *(double *)(result + 8 * v13) = v84;
        a3[v7] = v13++;
        if ( *((_DWORD *)this + 9) <= (int)v13 )
        {
          LODWORD(v7) = v7 + 1;
          goto LABEL_76;
        }
        v7 = (int)v7 + 1;
      }
      v80 = v82;
    }
  }
  v30 = *((_QWORD *)this + 141);
  if ( *((int *)this + 284) <= -2 )
    v30 = 0;
  v31 = 12LL * *((int *)this + 10) + v30;
  if ( (int)v13 < v20 )
  {
    v32 = (int)v13 + 1;
    v33 = v135 + 4 * (v13 - v32);
    do
    {
      *(_BYTE *)(v31 + *(int *)(v33 + 4 * v32)) = 1;
      v34 = v32++;
    }
    while ( *((_DWORD *)this + 9) > v34 );
    v11 = *((_QWORD *)this + 102);
    v9 = *((_DWORD *)this + 206);
    v128 = *((_QWORD *)this + 100);
    v132 = *((_QWORD *)this + 101);
  }
  v35 = *((int *)this + 199);
  v142 = *((int *)this + 12);
  v137 = v128 + 8 * v35;
  if ( v9 <= -2 )
    v11 = 0;
  v139 = v132 + 4 * v35;
  v129 = v11 + 4LL * *((int *)this + 16) + 4;
  v36 = *(_DWORD *)(v4 + 4LL * *((int *)this + 13));
  v37 = *((_QWORD *)this + 75);
  *(_DWORD *)(v4 + 4LL * *((int *)this + 12)) = v36;
  v141 = v36;
  if ( *((int *)this + 152) <= -2 )
    v37 = 0;
  v133 = v37 + 8LL * v36;
  if ( (int)v7 <= 0 )
  {
    v39 = 0;
  }
  else
  {
    v38 = a3;
    v39 = 0;
    v40 = &a3[(unsigned int)(v7 - 1) + 1];
    do
    {
      while ( 1 )
      {
        v41 = *v38;
        v42 = *(double *)(result + 8 * v41);
        if ( !*(_BYTE *)(v31 + v41) )
        {
          v43 = v39++;
          *(double *)(v133 + 8 * v43) = v42;
          a3[v43] = v41;
        }
        v44 = *(_DWORD *)(v24 + 4 * v41);
        if ( v44 )
        {
          v45 = *(int *)(v129 + 4 * v41);
          v46 = v45 + v44;
          if ( (int)v45 < v46 )
            break;
        }
        if ( v40 == ++v38 )
          goto LABEL_37;
      }
      v47 = (unsigned int)(v46 - v45 - 1) + 1LL;
      v48 = v137 + 8 * v45;
      v49 = v139 + 4 * v45;
      v50 = 0;
      do
      {
        v51 = *(int *)(v49 + 4 * v50);
        v52 = *(double *)(v48 + 8 * v50++);
        *(double *)(result + 8 * v51) = *(double *)(result + 8 * v51) - v52 * v42;
      }
      while ( v47 != v50 );
      ++v38;
    }
    while ( v40 != v38 );
  }
LABEL_37:
  v53 = *((int *)this + 8);
  if ( (int)v53 < *((_DWORD *)this + 9) )
  {
    v54 = v135;
    v136 = a3;
    do
    {
      v55 = *(int *)(v54 + 4 * v53);
      v56 = (double *)(result + 8 * v55);
      v57 = *v56 + *(double *)(result + 8 * v53);
      *v56 = 0.0;
      if ( fabs(v57) <= v19 )
      {
        *(_QWORD *)(result + 8 * v53) = 0;
      }
      else
      {
        *(double *)(result + 8 * v53) = v57;
        if ( !*(_BYTE *)(v31 + v53) )
        {
          v58 = v39++;
          *(double *)(v133 + 8 * v58) = v57;
          v136[v58] = v53;
        }
        v59 = *(int *)(v129 + 4 * v53);
        if ( (int)v59 < (int)v59 + *(_DWORD *)(v24 + 4 * v53) )
        {
          v60 = (unsigned int)(*(_DWORD *)(v24 + 4 * v53) - 1) + 1LL;
          v61 = v137 + 8 * v59;
          v62 = v139 + 4 * v59;
          v63 = 0;
          do
          {
            v64 = *(int *)(v62 + 4 * v63);
            v65 = *(double *)(v61 + 8 * v63++);
            *(double *)(result + 8 * v64) = *(double *)(result + 8 * v64) - v65 * v57;
          }
          while ( v60 != v63 );
        }
      }
      *(_BYTE *)(v31 + v55) = 0;
      ++v53;
    }
    while ( *((_DWORD *)this + 9) > (int)v53 );
  }
  *(_DWORD *)(v127 + 4 * v142) = v39;
  result = (unsigned int)(v39 + v141);
  *(_DWORD *)(v4 + 4LL * *((int *)this + 13)) = result;
LABEL_86:
  *((_DWORD *)a2 + 4) = v39;
  if ( !v39 )
LABEL_87:
    *((_BYTE *)a2 + 28) = 0;
  return result;
}

