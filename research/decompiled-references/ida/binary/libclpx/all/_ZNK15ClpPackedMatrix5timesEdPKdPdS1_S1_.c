__int64 __fastcall ClpPackedMatrix::times(
        ClpPackedMatrix *this,
        double a2,
        const double *a3,
        double *a4,
        const double *a5,
        const double *a6)
{
  __int64 result; // rax
  int v7; // r9d
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r14
  unsigned __int64 v11; // r10
  __int64 v12; // r13
  double v13; // xmm1_8
  int v14; // r11d
  double v15; // xmm2_8
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 v18; // r11
  __int64 v19; // r11
  double v20; // xmm1_8
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // r13
  double v24; // xmm1_8
  double v25; // xmm2_8
  __int64 v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // r11
  double v29; // xmm1_8
  __int64 v30; // r9
  __int64 v31; // [rsp+0h] [rbp-40h]

  if ( !a5 )
    return (*(__int64 (__fastcall **)(ClpPackedMatrix *, const double *, double *, _QWORD, const double *, double))(*(_QWORD *)this + 360LL))(
             this,
             a3,
             a4,
             0,
             a6,
             a2);
  result = *((_QWORD *)this + 11);
  v7 = *((_DWORD *)this + 24);
  v8 = *(_QWORD *)(result + 40);
  v9 = *(_QWORD *)(result + 48);
  v10 = *(_QWORD *)(result + 32);
  if ( (*((_BYTE *)this + 100) & 2) != 0 )
  {
    result = *(_QWORD *)(result + 56);
    v31 = result;
    if ( v7 > 0 )
    {
      result = (unsigned int)(v7 - 1);
      v22 = 0;
      v23 = 4 * result + 4;
      do
      {
        v24 = a3[v22 / 4];
        if ( v24 != 0.0 )
        {
          result = *(int *)(v9 + v22);
          v25 = a6[v22 / 4] * a2 * v24;
          if ( (int)result < (int)result + *(_DWORD *)(v31 + v22) )
          {
            v26 = v8 + 4 * result;
            v27 = v10 + 8 * result;
            result = 0;
            v28 = (unsigned int)(*(_DWORD *)(v31 + v22) - 1) + 1LL;
            do
            {
              v29 = *(double *)(v27 + 8 * result);
              v30 = *(int *)(v26 + 4 * result++);
              a4[v30] = v29 * v25 * a5[v30] + a4[v30];
            }
            while ( v28 != result );
          }
        }
        v22 += 4LL;
      }
      while ( v23 != v22 );
    }
  }
  else if ( v7 > 0 )
  {
    result = (unsigned int)(v7 - 1);
    v11 = 0;
    v12 = 4 * result + 4;
    do
    {
      while ( 1 )
      {
        v13 = a3[v11 / 4];
        if ( v13 != 0.0 )
        {
          result = *(int *)(v9 + v11);
          v14 = *(_DWORD *)(v9 + v11 + 4);
          v15 = a6[v11 / 4] * a2 * v13;
          if ( (int)result < v14 )
            break;
        }
        v11 += 4LL;
        if ( v12 == v11 )
          return result;
      }
      v16 = v8 + 4 * result;
      v17 = v10 + 8 * result;
      v18 = (unsigned int)(v14 - 1 - result);
      result = 0;
      v19 = v18 + 1;
      do
      {
        v20 = *(double *)(v17 + 8 * result);
        v21 = *(int *)(v16 + 4 * result++);
        a4[v21] = v20 * v15 * a5[v21] + a4[v21];
      }
      while ( result != v19 );
      v11 += 4LL;
    }
    while ( v12 != v11 );
  }
  return result;
}

