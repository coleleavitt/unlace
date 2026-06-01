__int64 __fastcall ClpPackedMatrix::transposeTimes(
        ClpPackedMatrix *this,
        double a2,
        const double *a3,
        double *a4,
        const double *a5,
        const double *a6,
        double *a7)
{
  __int64 result; // rax
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rbx
  int *v11; // r10
  int *v12; // rbp
  __int64 v13; // r11
  int v14; // edi
  __int64 v15; // rdi
  double v16; // xmm1_8
  unsigned __int64 v17; // rdi
  __int64 v18; // r14
  int v19; // r13d
  double v20; // xmm2_8
  __int64 v21; // r12
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  double v26; // xmm1_8
  unsigned __int64 v27; // rdi
  int v28; // ecx
  __int64 v29; // r14
  double v30; // xmm2_8
  __int64 v31; // r13
  __int64 v32; // r12
  double v33; // xmm1_8
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // r15
  int v37; // edi
  double v38; // xmm2_8
  __int64 v39; // r14
  __int64 v40; // r13
  __int64 v41; // r9
  __int64 v42; // rdi
  double v43; // xmm1_8
  unsigned __int64 v44; // rbp
  __int64 v45; // r14
  int v46; // r13d
  double v47; // xmm1_8
  __int64 v48; // r15
  __int64 v49; // r12
  __int64 v50; // r9
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdi
  double v54; // xmm0_8
  unsigned __int64 v55; // rbp
  __int64 v56; // r14
  int v57; // r13d
  double v58; // xmm2_8
  __int64 v59; // r15
  __int64 v60; // r12
  __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // r9
  __int64 v64; // rdi
  double v65; // xmm1_8

  if ( !a5 )
    return (*(__int64 (__fastcall **)(ClpPackedMatrix *, const double *, double *, _QWORD, const double *, double *, double))(*(_QWORD *)this + 376LL))(
             this,
             a3,
             a4,
             0,
             a6,
             a7,
             a2);
  result = *((_QWORD *)this + 11);
  v8 = *((_DWORD *)this + 24);
  v9 = *((_DWORD *)this + 25) & 2;
  v10 = *(_QWORD *)(result + 40);
  v11 = *(int **)(result + 48);
  v12 = *(int **)(result + 56);
  v13 = *(_QWORD *)(result + 32);
  if ( a7 )
  {
    v14 = *(_DWORD *)(result + 64);
    if ( *(_BYTE *)(result + 8) )
      v14 = *(_DWORD *)(result + 68);
    if ( v14 > 0 )
    {
      v15 = 8LL * (unsigned int)(v14 - 1) + 8;
      result = 0;
      do
      {
        while ( 1 )
        {
          v16 = *(const double *)((char *)a3 + result);
          if ( v16 == 0.0 )
            break;
          *(double *)((char *)a7 + result) = v16 * *(const double *)((char *)a5 + result);
          result += 8;
          if ( v15 == result )
            goto LABEL_10;
        }
        *(double *)((char *)a7 + result) = 0.0;
        result += 8;
      }
      while ( v15 != result );
    }
LABEL_10:
    if ( v9 )
    {
      if ( v8 > 0 )
      {
        v27 = 0;
        v28 = *v12;
        v29 = 4LL * (unsigned int)(v8 - 1) + 4;
        result = *v11;
        if ( (int)result >= (int)result + *v12 )
          goto LABEL_24;
LABEL_20:
        v30 = 0.0;
        v31 = v10 + 4 * result;
        v32 = v13 + 8 * result;
        result = 0;
        do
        {
          v33 = a7[*(int *)(v31 + 4 * result)] * *(double *)(v32 + 8 * result);
          ++result;
          v30 = v30 + v33;
        }
        while ( (unsigned int)(v28 - 1) + 1LL != result );
        while ( 1 )
        {
          a4[v27 / 4] = v30 * a2 * a6[v27 / 4] + a4[v27 / 4];
          v27 += 4LL;
          if ( v29 == v27 )
            break;
          result = v11[v27 / 4];
          v28 = v12[v27 / 4];
          if ( (int)result < (int)result + v28 )
            goto LABEL_20;
LABEL_24:
          v30 = 0.0;
        }
      }
    }
    else
    {
      result = *v11;
      if ( v8 > 0 )
      {
        v17 = 0;
        v18 = 4LL * (unsigned int)(v8 - 1) + 4;
        do
        {
          v19 = v11[v17 / 4 + 1];
          if ( v19 <= (int)result )
          {
            v20 = 0.0;
          }
          else
          {
            v20 = 0.0;
            v21 = v10 + 4 * result;
            v22 = v13 + 8 * result;
            v23 = (unsigned int)(v19 - result - 1);
            v24 = 0;
            v25 = v23 + 1;
            do
            {
              v26 = a7[*(int *)(v21 + 4 * v24)] * *(double *)(v22 + 8 * v24);
              ++v24;
              v20 = v20 + v26;
            }
            while ( v25 != v24 );
          }
          result = v19;
          a4[v17 / 4] = v20 * a2 * a6[v17 / 4] + a4[v17 / 4];
          v17 += 4LL;
        }
        while ( v18 != v17 );
      }
    }
  }
  else if ( v9 )
  {
    if ( v8 > 0 )
    {
      v34 = (unsigned int)(v8 - 1);
      v35 = 0;
      v36 = 4 * v34 + 4;
      do
      {
        result = v11[v35 / 4];
        v37 = v12[v35 / 4];
        if ( (int)result >= (int)result + v37 )
        {
          v38 = 0.0;
        }
        else
        {
          v38 = 0.0;
          v39 = v10 + 4 * result;
          v40 = v13 + 8 * result;
          result = 0;
          v41 = (unsigned int)(v37 - 1) + 1LL;
          do
          {
            v42 = *(int *)(v39 + 4 * result);
            v43 = a3[v42] * *(double *)(v40 + 8 * result++);
            v38 = v38 + v43 * a5[v42];
          }
          while ( v41 != result );
        }
        a4[v35 / 4] = v38 * a2 * a6[v35 / 4] + a4[v35 / 4];
        v35 += 4LL;
      }
      while ( v36 != v35 );
    }
  }
  else
  {
    result = *v11;
    if ( a2 == -1.0 )
    {
      if ( v8 > 0 )
      {
        v44 = 0;
        v45 = 4LL * (unsigned int)(v8 - 1) + 4;
        do
        {
          v46 = v11[v44 / 4 + 1];
          if ( v46 <= (int)result )
          {
            v47 = 0.0;
          }
          else
          {
            v47 = 0.0;
            v48 = v10 + 4 * result;
            v49 = v13 + 8 * result;
            v50 = (unsigned int)(v46 - result - 1);
            v51 = 0;
            v52 = v50 + 1;
            do
            {
              v53 = *(int *)(v48 + 4 * v51);
              v54 = a3[v53] * *(double *)(v49 + 8 * v51++);
              v47 = v47 + v54 * a5[v53];
            }
            while ( v52 != v51 );
          }
          result = v46;
          a4[v44 / 4] = a4[v44 / 4] - v47 * a6[v44 / 4];
          v44 += 4LL;
        }
        while ( v45 != v44 );
      }
    }
    else if ( v8 > 0 )
    {
      v55 = 0;
      v56 = 4LL * (unsigned int)(v8 - 1) + 4;
      do
      {
        v57 = v11[v55 / 4 + 1];
        if ( v57 <= (int)result )
        {
          v58 = 0.0;
        }
        else
        {
          v58 = 0.0;
          v59 = v10 + 4 * result;
          v60 = v13 + 8 * result;
          v61 = (unsigned int)(v57 - result - 1);
          v62 = 0;
          v63 = v61 + 1;
          do
          {
            v64 = *(int *)(v59 + 4 * v62);
            v65 = a3[v64] * *(double *)(v60 + 8 * v62++);
            v58 = v58 + v65 * a5[v64];
          }
          while ( v63 != v62 );
        }
        result = v57;
        a4[v55 / 4] = v58 * a2 * a6[v55 / 4] + a4[v55 / 4];
        v55 += 4LL;
      }
      while ( v56 != v55 );
    }
  }
  return result;
}

