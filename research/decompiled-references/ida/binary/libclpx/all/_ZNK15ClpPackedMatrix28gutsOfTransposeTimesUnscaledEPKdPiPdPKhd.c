__int64 __fastcall ClpPackedMatrix::gutsOfTransposeTimesUnscaled(
        ClpPackedMatrix *this,
        const double *a2,
        int *a3,
        double *a4,
        const unsigned __int8 *a5,
        double a6)
{
  _QWORD *v6; // rax
  int v7; // r15d
  __int64 v8; // r14
  double v9; // xmm1_8
  __int64 v10; // r11
  int v11; // ecx
  __int64 result; // rax
  char v13; // dl
  __int64 v14; // rdi
  __int64 v15; // rdx
  int v16; // r10d
  int *v17; // rbp
  double *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r10
  int *v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // r10
  double v25; // xmm2_8
  __int64 v26; // rdx
  int v27; // [rsp+0h] [rbp-5Ch]
  __int64 v30; // [rsp+14h] [rbp-48h]
  __int64 v31; // [rsp+1Ch] [rbp-40h]

  v6 = *((_QWORD **)this + 11);
  v7 = *((_DWORD *)this + 24);
  v8 = v6[6];
  v31 = v6[5];
  v30 = v6[4];
  if ( v7 <= 0 )
  {
    v25 = 0.0;
    v11 = -1;
    v9 = 0.0;
    result = 0;
  }
  else
  {
    v9 = 0.0;
    v10 = 0;
    v11 = -1;
    result = 0;
    do
    {
      v13 = a5[v10] & 3;
      if ( fabs(v9) > a6 )
      {
        v14 = (int)result;
        result = (unsigned int)(result + 1);
        a4[v14] = v9;
        a3[v14] = v11;
        v7 = *((_DWORD *)this + 24);
      }
      if ( v13 == 1 )
      {
        v25 = 0.0;
        v9 = 0.0;
      }
      else
      {
        v15 = *(int *)(v8 + 4 * v10);
        v16 = (*(_DWORD *)(v8 + 4 * v10 + 4) - (int)v15) >> 1;
        v27 = (*(_BYTE *)(v8 + 4 * v10 + 4) - (_BYTE)v15) & 1;
        v17 = (int *)(v31 + 4 * v15);
        v18 = (double *)(v30 + 8 * v15);
        if ( v16 )
        {
          v9 = 0.0;
          v19 = v30 + 8 * v15;
          v20 = (unsigned int)(v16 - 1);
          v21 = (int *)(v31 + 4 * v15);
          do
          {
            v22 = *v21;
            v23 = v21[1];
            v21 += 2;
            v19 += 16;
            v9 = v9 + a2[v22] * *(double *)(v19 - 16) + a2[v23] * *(double *)(v19 - 8);
          }
          while ( v21 != &v17[2 * v20 + 2] );
          v24 = v20 + 1;
          v17 += 2 * v24;
          v18 += 2 * v24;
        }
        else
        {
          v9 = 0.0;
        }
        if ( v27 )
          v9 = v9 + a2[*v17] * *v18;
        v11 = v10;
        v25 = fabs(v9);
      }
      ++v10;
    }
    while ( (int)v10 < v7 );
  }
  if ( v25 > a6 )
  {
    v26 = (int)result;
    result = (unsigned int)(result + 1);
    a4[v26] = v9;
    a3[v26] = v11;
  }
  return result;
}

