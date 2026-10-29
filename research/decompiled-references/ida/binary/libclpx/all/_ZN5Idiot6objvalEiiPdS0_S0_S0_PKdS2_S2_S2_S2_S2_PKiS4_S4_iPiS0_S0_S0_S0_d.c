Idiot *__fastcall Idiot::objval(
        Idiot *this,
        int a2,
        int a3,
        double *a4,
        double *a5,
        double *a6,
        double a7,
        double *a8,
        const double *a9,
        const double *a10,
        const double *a11,
        const double *a12,
        const double *a13,
        const double *a14,
        const int *a15,
        const int *a16,
        const int *a17,
        __int64 a18,
        int *a19,
        double *a20,
        double *a21,
        double *a22,
        double *a23,
        __int64 a24)
{
  Idiot *result; // rax
  int v25; // ebp
  unsigned int v26; // r10d
  unsigned __int64 v27; // r11
  const double *v28; // r12
  double *v29; // r11
  __int64 v30; // rsi
  __int128 v31; // xmm1
  signed int v32; // ebp
  __int64 v33; // rsi
  double v34; // xmm2_8
  int v35; // ebp
  unsigned __int64 v36; // r10
  __int64 v37; // r12
  double v38; // xmm4_8
  double v39; // xmm2_8
  __int64 v40; // rcx
  int v41; // esi
  int v42; // r11d
  __int64 v43; // r11
  const int *v44; // rbp
  const int *v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rsi
  double v48; // xmm1_8
  __int64 v49; // rcx
  double v50; // xmm1_8
  double v51; // xmm2_8
  double v52; // xmm1_8
  double *v53; // rsi
  double v54; // xmm2_8
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  double v57; // xmm3_8
  double v58; // xmm1_8
  __int64 v59; // r11
  const int *v60; // rcx
  const int *v61; // r11
  __int64 v62; // rsi
  unsigned __int64 v63; // rsi
  unsigned int v64; // [rsp+0h] [rbp-3Ch]

  result = this;
  if ( a3 > 0 )
  {
    if ( a12 < a5 + 2 && a5 < a12 + 2 || (unsigned int)a3 <= 0xD )
    {
      v63 = 0;
      do
      {
        a5[v63 / 8] = -a12[v63 / 8];
        v63 += 8LL;
      }
      while ( 8LL * (unsigned int)(a3 - 1) + 8 != v63 );
      if ( (int)a4 > 0 )
        goto LABEL_12;
      goto LABEL_34;
    }
    v25 = 0;
    if ( (((unsigned __int64)a12 >> 3) & 1) != 0 )
    {
      v25 = 1;
      *a5 = -*a12;
    }
    v26 = 0;
    v27 = ((unsigned __int64)a12 >> 3) & 1;
    v64 = a3 - (((unsigned __int64)a12 >> 3) & 1);
    v28 = &a12[v27];
    v29 = &a5[v27];
    v30 = 0;
    do
    {
      ++v26;
      *(double *)&v31 = -v28[v30];
      *((double *)&v31 + 1) = -v28[v30 + 1];
      *(_OWORD *)&v29[v30] = v31;
      v30 += 2;
    }
    while ( v26 < v64 >> 1 );
    v32 = (v64 & 0xFFFFFFFE) + v25;
    if ( (v64 & 0xFFFFFFFE) != v64 )
    {
      v33 = v32;
      v34 = a12[v32];
      v35 = v32 + 1;
      a5[v33] = -v34;
      if ( a3 > v35 )
        a5[v35] = -a12[v35];
    }
  }
  if ( (int)a4 > 0 )
  {
LABEL_12:
    v36 = 0;
    v37 = 4LL * (unsigned int)((_DWORD)a4 - 1) + 4;
    v38 = 0.0;
    while ( 1 )
    {
      v39 = a6[v36 / 4];
      if ( v39 == 0.0 )
        goto LABEL_18;
      v40 = a17[v36 / 4];
      v41 = *(_DWORD *)(a18 + v36);
      v38 = v38 + a10[v36 / 4] * v39;
      v42 = v40 + v41;
      if ( a15 )
      {
        if ( (int)v40 < v42 )
        {
          v43 = (unsigned int)(v41 - 1) + 1LL;
          v44 = &a16[v40];
          v45 = &a15[2 * v40];
          v46 = 0;
          do
          {
            v47 = v44[v46];
            v48 = *(double *)&v45[2 * v46++];
            a5[v47] = v48 * v39 + a5[v47];
          }
          while ( v43 != v46 );
        }
        goto LABEL_18;
      }
      if ( (int)v40 >= v42 )
      {
LABEL_18:
        v36 += 4LL;
        if ( v37 == v36 )
          goto LABEL_19;
      }
      else
      {
        v59 = (int)v40;
        v60 = &a16[(int)v40];
        v61 = &a16[(unsigned int)(v41 - 1) + 1 + v59];
        do
        {
          v62 = *v60++;
          a5[v62] = a5[v62] + v39;
        }
        while ( v61 != v60 );
        v36 += 4LL;
        if ( v37 == v36 )
          goto LABEL_19;
      }
    }
  }
LABEL_34:
  v38 = 0.0;
LABEL_19:
  if ( (int)a19 > 0 )
  {
    v49 = 0;
    do
    {
      v50 = a21[v49];
      v51 = *(double *)(a24 + 8 * v49) * v50;
      v52 = v50 * a22[v49];
      v53 = &a5[*((int *)a20 + v49++)];
      v38 = v38 + v51;
      *v53 = v52 + *v53;
    }
    while ( (unsigned int)((_DWORD)a19 - 1) + 1LL != v49 );
  }
  if ( a3 <= 0 )
  {
    v54 = 0.0;
    v57 = 0.0;
  }
  else
  {
    v54 = 0.0;
    v55 = 8LL * (unsigned int)(a3 - 1) + 8;
    v56 = 0;
    v57 = 0.0;
    do
    {
      v58 = a5[v56 / 8];
      v57 = v57 + fabs(v58);
      v54 = v54 + v58 * v58;
      a8[v56 / 8] = v58 * (-2.0 * a7);
      v56 += 8LL;
    }
    while ( v55 != v56 );
  }
  *((double *)this + 1) = v38;
  *((_QWORD *)this + 2) = 0;
  *(double *)this = v57;
  *((double *)this + 4) = v54;
  *((double *)this + 3) = v38 + a7 * v54;
  return result;
}

