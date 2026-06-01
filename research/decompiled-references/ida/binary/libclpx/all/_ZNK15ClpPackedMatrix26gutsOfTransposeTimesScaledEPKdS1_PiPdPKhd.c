__int64 __fastcall ClpPackedMatrix::gutsOfTransposeTimesScaled(
        ClpPackedMatrix *this,
        const double *a2,
        const double *a3,
        int *a4,
        double *a5,
        const unsigned __int8 *a6,
        double a7)
{
  _QWORD *v7; // rax
  int v8; // r14d
  int *v9; // rbp
  double v10; // xmm2_8
  __int64 v11; // rbx
  int v12; // r10d
  __int64 result; // rax
  char v14; // dl
  __int64 v15; // r11
  int v16; // r10d
  __int64 v17; // rdx
  double v18; // xmm2_8
  __int64 v19; // r10
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rdx
  double v23; // xmm1_8
  double v24; // xmm1_8
  __int64 v25; // rdx
  __int64 v27; // [rsp+8h] [rbp-40h]
  __int64 v28; // [rsp+10h] [rbp-38h]

  v7 = *((_QWORD **)this + 11);
  v8 = *((_DWORD *)this + 24);
  v9 = (int *)v7[6];
  v28 = v7[5];
  v27 = v7[4];
  if ( v8 <= 0 )
  {
    v24 = 0.0;
    v12 = -1;
    v10 = 0.0;
    result = 0;
  }
  else
  {
    v10 = 0.0;
    v11 = 0;
    v12 = -1;
    result = 0;
    do
    {
      v14 = a6[v11] & 3;
      if ( fabs(v10) > a7 )
      {
        v15 = (int)result;
        result = (unsigned int)(result + 1);
        a5[v15] = v10;
        a4[v15] = v12;
        v8 = *((_DWORD *)this + 24);
      }
      if ( v14 == 1 )
      {
        v24 = 0.0;
        v10 = 0.0;
      }
      else
      {
        v16 = v9[1];
        v17 = *v9;
        if ( (int)v17 >= v16 )
        {
          v18 = 0.0;
        }
        else
        {
          v18 = 0.0;
          v19 = (unsigned int)(v16 - 1 - v17) + 1LL;
          v20 = v28 + 4 * v17;
          v21 = v27 + 8 * v17;
          v22 = 0;
          do
          {
            v23 = a2[*(int *)(v20 + 4 * v22)] * *(double *)(v21 + 8 * v22);
            ++v22;
            v18 = v18 + v23;
          }
          while ( v19 != v22 );
        }
        v10 = v18 * a3[v11];
        v12 = v11;
        v24 = fabs(v10);
      }
      ++v9;
      ++v11;
    }
    while ( (int)v11 < v8 );
  }
  if ( v24 > a7 )
  {
    v25 = (int)result;
    result = (unsigned int)(result + 1);
    a5[v25] = v10;
    a4[v25] = v12;
  }
  return result;
}

