__int64 __fastcall ClpPackedMatrix::add(ClpPackedMatrix *this, const ClpSimplex *a2, double *a3, double a4, int a5)
{
  _QWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 result; // rax
  int v10; // edi
  int v11; // r11d
  double v12; // xmm0_8
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // rdi
  double v16; // xmm1_8
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  double v23; // xmm1_8

  v5 = *((_QWORD **)this + 11);
  v6 = *((_QWORD *)a2 + 28);
  v7 = v5[5];
  v8 = v5[4];
  result = *(int *)(v5[6] + 4LL * a5);
  v10 = *(_DWORD *)(v5[7] + 4LL * a5);
  v11 = result + v10;
  if ( v6 )
  {
    v12 = a4 * *(double *)(*((_QWORD *)a2 + 29) + 8LL * a5);
    if ( (int)result < v11 )
    {
      v13 = v7 + 4 * result;
      v14 = v8 + 8 * result;
      v15 = (unsigned int)(v10 - 1) + 1LL;
      result = 0;
      do
      {
        v16 = *(double *)(v14 + 8 * result);
        v17 = *(int *)(v13 + 4 * result++);
        a3[v17] = v16 * v12 * *(double *)(v6 + 8 * v17) + a3[v17];
      }
      while ( v15 != result );
    }
  }
  else if ( (int)result < v11 )
  {
    v18 = (unsigned int)(v10 - 1);
    v19 = v7 + 4 * result;
    v20 = v8 + 8 * result;
    result = 0;
    v21 = v18 + 1;
    do
    {
      v22 = *(int *)(v19 + 4 * result);
      v23 = *(double *)(v20 + 8 * result++);
      a3[v22] = v23 * a4 + a3[v22];
    }
    while ( v21 != result );
  }
  return result;
}

