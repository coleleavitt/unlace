void __fastcall ClpCholeskyDense::solveF1(ClpCholeskyDense *this, double *a2, int a3, double *a4)
{
  int v4; // r10d
  __int64 v5; // r9
  double *v6; // r8
  double v7; // xmm1_8
  double *v8; // rax
  double *v9; // rdi
  double v10; // xmm0_8

  if ( a3 > 0 )
  {
    v4 = 1;
    v5 = 1;
    v6 = a2 + 17;
    for ( *a4 = *a4; a3 != v4; a4[v5 - 1] = v7 )
    {
      v7 = a4[v5];
      v8 = &a2[v5];
      v9 = a4;
      do
      {
        v10 = *v9;
        v8 += 16;
        ++v9;
        v7 = v7 - v10 * *(v8 - 16);
      }
      while ( v6 != v8 );
      ++v4;
      ++v5;
      v6 += 17;
    }
  }
}

