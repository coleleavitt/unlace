__int64 __fastcall ClpPackedMatrix::gutsOfTransposeTimesUnscaled(
        ClpPackedMatrix *this,
        const double *a2,
        int *a3,
        double *a4,
        double a5)
{
  _QWORD *v5; // rax
  int *v6; // rbp
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  double v11; // xmm2_8
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  double v17; // xmm1_8
  int v18; // r13d
  double v19; // xmm1_8
  int *v20; // rbp
  int v21; // r12d
  __int64 result; // rax
  int v23; // ebx
  __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r9
  double v30; // xmm1_8
  __int64 v31; // rdx

  v5 = *((_QWORD **)this + 11);
  v6 = (int *)v5[6];
  v7 = v5[5];
  v8 = v5[4];
  v9 = v6[1];
  v10 = *v6;
  if ( (int)v9 <= (int)v10 )
  {
    v18 = *((_DWORD *)this + 24);
    v19 = 0.0;
    v11 = 0.0;
    if ( v18 > 1 )
      goto LABEL_5;
LABEL_18:
    v21 = 0;
    result = 0;
    goto LABEL_13;
  }
  v11 = 0.0;
  v12 = v7 + 4 * v10;
  v13 = v8 + 8 * v10;
  v14 = (unsigned int)(v9 - 1 - v10);
  v15 = 0;
  v16 = v14 + 1;
  do
  {
    v17 = a2[*(int *)(v12 + 4 * v15)] * *(double *)(v13 + 8 * v15);
    ++v15;
    v11 = v11 + v17;
  }
  while ( v16 != v15 );
  v18 = *((_DWORD *)this + 24);
  v19 = fabs(v11);
  if ( v18 <= 1 )
    goto LABEL_18;
LABEL_5:
  v20 = v6 + 2;
  v21 = 0;
  result = 0;
  do
  {
    v23 = *v20;
    if ( fabs(v11) > a5 )
    {
      v24 = (int)result;
      result = (unsigned int)(result + 1);
      a4[v24] = v11;
      a3[v24] = v21;
      v18 = *((_DWORD *)this + 24);
    }
    if ( v23 <= (int)v9 )
    {
      v19 = 0.0;
      v11 = 0.0;
    }
    else
    {
      v11 = 0.0;
      v25 = v7 + 4 * v9;
      v26 = v8 + 8 * v9;
      v27 = (unsigned int)(~(_DWORD)v9 + v23);
      v28 = 0;
      v29 = v27 + 1;
      do
      {
        v30 = a2[*(int *)(v25 + 4 * v28)] * *(double *)(v26 + 8 * v28);
        ++v28;
        v11 = v11 + v30;
      }
      while ( v29 != v28 );
      v19 = fabs(v11);
    }
    ++v21;
    ++v20;
    v9 = v23;
  }
  while ( v18 - 1 > v21 );
LABEL_13:
  if ( v19 > a5 )
  {
    v31 = (int)result;
    result = (unsigned int)(result + 1);
    a4[v31] = v11;
    a3[v31] = v21;
  }
  return result;
}

