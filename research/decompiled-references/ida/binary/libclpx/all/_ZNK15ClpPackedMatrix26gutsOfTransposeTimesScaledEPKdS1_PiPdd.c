__int64 __fastcall ClpPackedMatrix::gutsOfTransposeTimesScaled(
        ClpPackedMatrix *this,
        const double *a2,
        double *a3,
        int *a4,
        double *a5,
        double a6)
{
  _QWORD *v6; // rax
  double v7; // xmm3_8
  int *v8; // r13
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  double v13; // xmm2_8
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  double v19; // xmm1_8
  int v20; // r12d
  __int64 v21; // rbx
  __int64 result; // rax
  double v23; // xmm2_8
  int v24; // ebp
  __int64 v25; // r8
  __int64 v26; // r11
  __int64 v27; // r10
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r9
  double v31; // xmm1_8
  int v32; // r8d
  double v33; // xmm2_8
  __int64 v34; // rdx

  v6 = *((_QWORD **)this + 11);
  v7 = *a3;
  v8 = (int *)v6[6];
  v9 = v6[5];
  v10 = v6[4];
  v11 = v8[1];
  v12 = *v8;
  if ( (int)v11 <= (int)v12 )
  {
    v20 = *((_DWORD *)this + 24);
    v13 = 0.0;
    if ( v20 > 1 )
      goto LABEL_5;
LABEL_17:
    v32 = 0;
    result = 0;
    goto LABEL_12;
  }
  v13 = 0.0;
  v14 = v9 + 4 * v12;
  v15 = v10 + 8 * v12;
  v16 = (unsigned int)(v11 - 1 - v12);
  v17 = 0;
  v18 = v16 + 1;
  do
  {
    v19 = a2[*(int *)(v14 + 4 * v17)] * *(double *)(v15 + 8 * v17);
    ++v17;
    v13 = v13 + v19;
  }
  while ( v18 != v17 );
  v20 = *((_DWORD *)this + 24);
  if ( v20 <= 1 )
    goto LABEL_17;
LABEL_5:
  v21 = 0;
  result = 0;
  do
  {
    v23 = v13 * v7;
    v24 = v8[v21 + 2];
    v7 = a3[v21 + 1];
    if ( fabs(v23) > a6 )
    {
      v25 = (int)result;
      result = (unsigned int)(result + 1);
      a5[v25] = v23;
      a4[v25] = v21;
      v20 = *((_DWORD *)this + 24);
    }
    if ( v24 <= (int)v11 )
    {
      v13 = 0.0;
    }
    else
    {
      v13 = 0.0;
      v26 = v9 + 4 * v11;
      v27 = v10 + 8 * v11;
      v28 = (unsigned int)(v24 - v11 - 1);
      v29 = 0;
      v30 = v28 + 1;
      do
      {
        v31 = a2[*(int *)(v26 + 4 * v29)] * *(double *)(v27 + 8 * v29);
        ++v29;
        v13 = v13 + v31;
      }
      while ( v30 != v29 );
    }
    v32 = ++v21;
    v11 = v24;
  }
  while ( v20 - 1 > (int)v21 );
LABEL_12:
  v33 = v13 * v7;
  if ( fabs(v33) > a6 )
  {
    v34 = (int)result;
    result = (unsigned int)(result + 1);
    a5[v34] = v33;
    a4[v34] = v32;
  }
  return result;
}

