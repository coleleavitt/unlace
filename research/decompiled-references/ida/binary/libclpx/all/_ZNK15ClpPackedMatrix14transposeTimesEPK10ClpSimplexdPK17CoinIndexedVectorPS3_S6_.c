__int64 __fastcall ClpPackedMatrix::transposeTimes(
        ClpPackedMatrix *this,
        const ClpSimplex *a2,
        double a3,
        const CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        CoinIndexedVector *a6)
{
  int v11; // ecx
  int v12; // edx
  char v13; // r13
  __int64 result; // rax
  __int64 v15; // xmm2_8
  double v16; // xmm1_8
  double v17; // xmm3_8
  double v18; // xmm2_8
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  __int64 v21; // rdi
  double v22; // xmm3_8
  __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // r15
  __int64 v26; // rdx
  double v27; // xmm0_8
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int v31; // edx
  double v32; // xmm1_8
  __int64 v33; // r11
  __int64 v34; // r10
  __int64 v35; // rax
  double v36; // xmm0_8
  double v37; // xmm1_8
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // rax
  int v44; // edx
  double v45; // xmm1_8
  __int64 v46; // rcx
  __int64 v47; // r11
  __int64 v48; // r10
  __int64 v49; // rax
  __int64 v50; // rdx
  double v51; // xmm0_8
  double v52; // xmm1_8
  __int64 v53; // r8
  __int64 v54; // rsi
  __int64 v55; // rax
  int v56; // edx
  double v57; // xmm2_8
  __int64 v58; // rcx
  __int64 v59; // r11
  __int64 v60; // r10
  __int64 v61; // rax
  __int64 v62; // rdx
  double v63; // xmm1_8
  double v64; // xmm2_8
  __int64 v65; // rdx
  double v66; // xmm1_8
  __int64 v67; // r8
  __int64 v68; // rdx
  double v69; // xmm0_8
  __int64 v70; // r8
  __int64 v71; // r10
  __int64 v72; // rax
  int v73; // edx
  double v74; // xmm1_8
  __int64 v75; // r9
  __int64 v76; // r8
  __int64 v77; // rax
  double v78; // xmm0_8
  double v79; // xmm0_8
  __int64 v80; // rax
  __int64 v81; // rsi
  __int64 i; // r10
  __int64 v83; // rax
  int v84; // edx
  double v85; // xmm1_8
  __int64 v86; // r9
  __int64 v87; // r8
  __int64 v88; // rax
  double v89; // xmm0_8
  double v90; // xmm0_8
  __int64 v91; // rdx
  double v92; // xmm1_8
  __int64 v93; // r8
  __int64 v94; // rsi
  __int64 v95; // rax
  int v96; // edx
  double v97; // xmm2_8
  __int64 v98; // r9
  __int64 v99; // r8
  __int64 v100; // rax
  double v101; // xmm1_8
  double v102; // xmm2_8
  __int64 v103; // [rsp+8h] [rbp-70h]
  __int64 v104; // [rsp+10h] [rbp-68h]
  __int64 v105; // [rsp+18h] [rbp-60h]
  __int64 v106; // [rsp+20h] [rbp-58h]
  __int64 v107; // [rsp+28h] [rbp-50h]
  __int64 v108; // [rsp+30h] [rbp-48h]
  unsigned int v109; // [rsp+38h] [rbp-40h]

  CoinIndexedVector::clear(a6);
  v11 = *((_DWORD *)a4 + 4);
  v12 = *((_DWORD *)a2 + 26);
  v13 = *((_BYTE *)a4 + 28);
  result = *((int *)this + 24);
  if ( (unsigned __int64)(8 * result) <= 0xF4240 )
    goto LABEL_4;
  if ( (int)result > 10 * v12 )
  {
    v15 = 0x3FC3333332E0BC94LL;
    v16 = 0.1666666665;
    goto LABEL_5;
  }
  if ( (int)result <= 4 * v12 )
  {
    if ( (int)result > 2 * v12 )
    {
      v15 = 0x3FD3333333339CC1LL;
      v16 = 0.333333333335;
      goto LABEL_5;
    }
LABEL_4:
    v15 = 0x3FDCCCCCCCCCCCCDLL;
    v16 = 0.5;
    goto LABEL_5;
  }
  v15 = 0x3FCCCCCCCCCCCCCDLL;
  v16 = 0.25;
LABEL_5:
  if ( !v13 )
    v16 = *(double *)&v15;
  v17 = (double)v11;
  v18 = (double)v12;
  if ( *((_QWORD *)this + 14) )
  {
    if ( v17 <= v16 * 0.7 * v18 )
    {
      v19 = *((_QWORD *)a2 + 25);
      if ( v19 )
      {
LABEL_10:
        result = (*(__int64 (__fastcall **)(__int64, const ClpSimplex *, const CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(*(_QWORD *)v19 + 496LL))(
                   v19,
                   a2,
                   a4,
                   a5,
                   a6,
                   a3);
        goto LABEL_11;
      }
    }
    return ClpPackedMatrix::transposeTimesByColumn(this, a2, a3, a4, a5, a6);
  }
  if ( v17 <= v16 * v18 )
  {
    v19 = *((_QWORD *)a2 + 25);
    if ( v19 )
      goto LABEL_10;
  }
  if ( (*((_BYTE *)this + 100) & 2) == 0 )
    return ClpPackedMatrix::transposeTimesByColumn(this, a2, a3, a4, a5, a6);
  v20 = *((_QWORD **)this + 11);
  v21 = *((_QWORD *)a4 + 1);
  v22 = *((double *)a2 + 88);
  v23 = *((_QWORD *)a2 + 28);
  v107 = *(_QWORD *)a6;
  v108 = *((_QWORD *)a6 + 1);
  v106 = v20[5];
  v103 = v20[6];
  v104 = v20[7];
  v105 = v20[4];
  if ( v13 )
  {
    v24 = *((_QWORD *)a5 + 1);
    v25 = *(_QWORD *)a4;
    if ( v23 )
    {
      if ( a3 == -1.0 )
      {
        if ( v11 > 0 )
        {
          v26 = 0;
          do
          {
            v27 = *(double *)(v21 + 8 * v26);
            v28 = *(int *)(v25 + 4 * v26++);
            *(double *)(v24 + 8 * v28) = -v27 * *(double *)(v23 + 8 * v28);
          }
          while ( (unsigned int)(v11 - 1) + 1LL != v26 );
          goto LABEL_26;
        }
      }
      else if ( v11 > 0 )
      {
        v65 = 0;
        do
        {
          v66 = *(double *)(v21 + 8 * v65);
          v67 = *(int *)(v25 + 4 * v65++);
          *(double *)(v24 + 8 * v67) = v66 * a3 * *(double *)(v23 + 8 * v67);
        }
        while ( (unsigned int)(v11 - 1) + 1LL != v65 );
LABEL_26:
        if ( (int)result > 0 )
          goto LABEL_27;
LABEL_120:
        v109 = 0;
LABEL_34:
        v39 = 0;
        do
        {
          v40 = *(int *)(v25 + 4 * v39++);
          *(_QWORD *)(v24 + 8 * v40) = 0;
        }
        while ( v11 > (int)v39 );
        goto LABEL_36;
      }
      if ( (int)result > 0 )
      {
LABEL_27:
        v29 = 0;
        v109 = 0;
        do
        {
          while ( 1 )
          {
            v30 = *(int *)(v103 + 4 * v29);
            v31 = *(_DWORD *)(v104 + 4 * v29);
            if ( (int)v30 >= (int)v30 + v31 )
            {
              v32 = 0.0;
            }
            else
            {
              v32 = 0.0;
              v33 = v106 + 4 * v30;
              v34 = v105 + 8 * v30;
              v35 = 0;
              do
              {
                v36 = *(double *)(v24 + 8LL * *(int *)(v33 + 4 * v35)) * *(double *)(v34 + 8 * v35);
                ++v35;
                v32 = v32 + v36;
              }
              while ( (unsigned int)(v31 - 1) + 1LL != v35 );
            }
            v37 = v32 * *(double *)(*((_QWORD *)a2 + 29) + 8 * v29);
            if ( fabs(v37) <= v22 )
              break;
            v38 = (int)v109;
            *(double *)(v108 + 8LL * (int)v109++) = v37;
            *(_DWORD *)(v107 + 4 * v38) = v29++;
            if ( (int)v29 >= *((_DWORD *)this + 24) )
              goto LABEL_33;
          }
          ++v29;
        }
        while ( *((_DWORD *)this + 24) > (int)v29 );
        goto LABEL_33;
      }
      goto LABEL_103;
    }
    if ( a3 == -1.0 )
    {
      if ( v11 > 0 )
      {
        v68 = 0;
        do
        {
          v69 = *(double *)(v21 + 8 * v68);
          v70 = *(int *)(v25 + 4 * v68++);
          *(double *)(v24 + 8 * v70) = -v69;
        }
        while ( (unsigned int)(v11 - 1) + 1LL != v68 );
        goto LABEL_77;
      }
    }
    else if ( v11 > 0 )
    {
      v91 = 0;
      do
      {
        v92 = *(double *)(v21 + 8 * v91);
        v93 = *(int *)(v25 + 4 * v91++);
        *(double *)(v24 + 8 * v93) = v92 * a3;
      }
      while ( (unsigned int)(v11 - 1) + 1LL != v91 );
LABEL_77:
      if ( (int)result <= 0 )
        goto LABEL_120;
      goto LABEL_78;
    }
    if ( (int)result <= 0 )
      goto LABEL_103;
LABEL_78:
    v71 = 0;
    v109 = 0;
    do
    {
      while ( 1 )
      {
        v72 = *(int *)(v103 + 4 * v71);
        v73 = *(_DWORD *)(v104 + 4 * v71);
        if ( (int)v72 >= (int)v72 + v73 )
        {
          v79 = 0.0;
          v74 = 0.0;
        }
        else
        {
          v74 = 0.0;
          v75 = v106 + 4 * v72;
          v76 = v105 + 8 * v72;
          v77 = 0;
          do
          {
            v78 = *(double *)(v24 + 8LL * *(int *)(v75 + 4 * v77)) * *(double *)(v76 + 8 * v77);
            ++v77;
            v74 = v74 + v78;
          }
          while ( (unsigned int)(v73 - 1) + 1LL != v77 );
          v79 = fabs(v74);
        }
        if ( v79 <= v22 )
          break;
        v80 = (int)v109;
        *(double *)(v108 + 8LL * (int)v109++) = v74;
        *(_DWORD *)(v107 + 4 * v80) = v71++;
        if ( *((_DWORD *)this + 24) <= (int)v71 )
          goto LABEL_33;
      }
      ++v71;
    }
    while ( *((_DWORD *)this + 24) > (int)v71 );
LABEL_33:
    if ( v11 <= 0 )
      goto LABEL_36;
    goto LABEL_34;
  }
  if ( v23 )
  {
    if ( a3 == -1.0 )
    {
      if ( (int)result <= 0 )
        goto LABEL_103;
      v41 = *((_QWORD *)a2 + 29);
      v42 = 0;
      v109 = 0;
      do
      {
        while ( 1 )
        {
          v43 = *(int *)(v103 + 4 * v42);
          v44 = *(_DWORD *)(v104 + 4 * v42);
          if ( (int)v43 >= (int)v43 + v44 )
          {
            v45 = 0.0;
          }
          else
          {
            v45 = 0.0;
            v46 = (unsigned int)(v44 - 1) + 1LL;
            v47 = v106 + 4 * v43;
            v48 = v105 + 8 * v43;
            v49 = 0;
            do
            {
              v50 = *(int *)(v47 + 4 * v49);
              v51 = *(double *)(v21 + 8 * v50) * *(double *)(v48 + 8 * v49++);
              v45 = v45 + v51 * *(double *)(v23 + 8 * v50);
            }
            while ( v46 != v49 );
          }
          v52 = v45 * *(double *)(v41 + 8 * v42);
          if ( fabs(v52) <= v22 )
            break;
          *(_DWORD *)(v107 + 4LL * (int)v109) = v42;
          result = v109 + 1;
          *(double *)(v108 + 8 * v42++) = -v52;
          if ( (int)v42 >= *((_DWORD *)this + 24) )
            goto LABEL_71;
          ++v109;
          v41 = *((_QWORD *)a2 + 29);
        }
        ++v42;
      }
      while ( *((_DWORD *)this + 24) > (int)v42 );
    }
    else
    {
      if ( (int)result <= 0 )
        goto LABEL_103;
      v53 = *((_QWORD *)a2 + 29);
      v54 = 0;
      v109 = 0;
      do
      {
        while ( 1 )
        {
          v55 = *(int *)(v103 + 4 * v54);
          v56 = *(_DWORD *)(v104 + 4 * v54);
          if ( (int)v55 >= (int)v55 + v56 )
          {
            v57 = 0.0;
          }
          else
          {
            v57 = 0.0;
            v58 = (unsigned int)(v56 - 1) + 1LL;
            v59 = v106 + 4 * v55;
            v60 = v105 + 8 * v55;
            v61 = 0;
            do
            {
              v62 = *(int *)(v59 + 4 * v61);
              v63 = *(double *)(v21 + 8 * v62) * *(double *)(v60 + 8 * v61++);
              v57 = v57 + v63 * *(double *)(v23 + 8 * v62);
            }
            while ( v58 != v61 );
          }
          v64 = v57 * (*(double *)(v53 + 8 * v54) * a3);
          if ( fabs(v64) <= v22 )
            break;
          *(_DWORD *)(v107 + 4LL * (int)v109) = v54;
          result = v109 + 1;
          *(double *)(v108 + 8 * v54++) = v64;
          if ( *((_DWORD *)this + 24) <= (int)v54 )
            goto LABEL_71;
          ++v109;
          v53 = *((_QWORD *)a2 + 29);
        }
        ++v54;
      }
      while ( *((_DWORD *)this + 24) > (int)v54 );
    }
  }
  else
  {
    if ( a3 != -1.0 )
    {
      if ( (int)result > 0 )
      {
        v94 = 0;
        for ( i = 0; ; i = (int)result )
        {
          while ( 1 )
          {
            v95 = *(int *)(v103 + 4 * v94);
            v96 = *(_DWORD *)(v104 + 4 * v94);
            if ( (int)v95 >= (int)v95 + v96 )
            {
              v97 = 0.0;
            }
            else
            {
              v97 = 0.0;
              v98 = v106 + 4 * v95;
              v99 = v105 + 8 * v95;
              v100 = 0;
              do
              {
                v101 = *(double *)(v21 + 8LL * *(int *)(v98 + 4 * v100)) * *(double *)(v99 + 8 * v100);
                ++v100;
                v97 = v97 + v101;
              }
              while ( (unsigned int)(v96 - 1) + 1LL != v100 );
            }
            v102 = v97 * a3;
            if ( fabs(v102) > v22 )
              break;
            if ( *((_DWORD *)this + 24) <= (int)++v94 )
              goto LABEL_100;
          }
          result = (unsigned int)(i + 1);
          *(_DWORD *)(v107 + 4 * i) = v94;
          *(double *)(v108 + 8 * v94++) = v102;
          if ( *((_DWORD *)this + 24) <= (int)v94 )
            break;
        }
LABEL_71:
        *((_DWORD *)a6 + 4) = result;
        goto LABEL_38;
      }
      goto LABEL_103;
    }
    if ( (int)result <= 0 )
    {
LABEL_103:
      *((_DWORD *)a6 + 4) = 0;
      goto LABEL_37;
    }
    v81 = 0;
    i = 0;
    do
    {
      while ( 1 )
      {
        v83 = *(int *)(v103 + 4 * v81);
        v84 = *(_DWORD *)(v104 + 4 * v81);
        if ( (int)v83 >= (int)v83 + v84 )
        {
          v90 = 0.0;
          v85 = 0.0;
        }
        else
        {
          v85 = 0.0;
          v86 = v106 + 4 * v83;
          v87 = v105 + 8 * v83;
          v88 = 0;
          do
          {
            v89 = *(double *)(v21 + 8LL * *(int *)(v86 + 4 * v88)) * *(double *)(v87 + 8 * v88);
            ++v88;
            v85 = v85 + v89;
          }
          while ( (unsigned int)(v84 - 1) + 1LL != v88 );
          v90 = fabs(v85);
        }
        if ( v90 <= v22 )
          break;
        result = (unsigned int)(i + 1);
        *(_DWORD *)(v107 + 4 * i) = v81;
        *(double *)(v108 + 8 * v81++) = -v85;
        if ( (int)v81 >= *((_DWORD *)this + 24) )
          goto LABEL_71;
        i = (int)result;
      }
      ++v81;
    }
    while ( *((_DWORD *)this + 24) > (int)v81 );
LABEL_100:
    v109 = i;
  }
LABEL_36:
  result = v109;
  *((_DWORD *)a6 + 4) = v109;
  if ( !v109 )
LABEL_37:
    *((_BYTE *)a6 + 28) = 0;
LABEL_38:
  *((_DWORD *)a5 + 4) = 0;
  *((_BYTE *)a5 + 28) = 0;
LABEL_11:
  if ( v13 )
    *((_BYTE *)a6 + 28) = 1;
  return result;
}

