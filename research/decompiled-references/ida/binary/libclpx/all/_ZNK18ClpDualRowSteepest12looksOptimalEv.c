char __fastcall ClpDualRowSteepest::looksOptimal(ClpDualRowSteepest *this)
{
  __int64 v1; // rdx
  int v2; // ecx
  int *v3; // rax
  double v4; // xmm1_8
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rdx
  double v12; // xmm3_8

  v1 = *((_QWORD *)this + 1);
  v2 = *(_DWORD *)(v1 + 104);
  v3 = *(int **)(v1 + 1256);
  v4 = fmin(1000.0, fmin(0.01, *(double *)(v1 + 760)) + *(double *)(v1 + 880));
  if ( v2 <= 0 )
    return 1;
  v5 = *(_QWORD *)(v1 + 1200);
  v6 = *(_QWORD *)(v1 + 984);
  v7 = *(_QWORD *)(v1 + 1008);
  v8 = (unsigned int)(v2 - 1);
  v9 = 0;
  v10 = (__int64)&v3[v8 + 1];
  do
  {
    while ( 1 )
    {
      v11 = *v3;
      v12 = *(double *)(v5 + 8 * v11);
      if ( *(double *)(v6 + 8 * v11) - v4 <= v12 )
        break;
      ++v3;
      ++v9;
      if ( v3 == (int *)v10 )
        return v9 == 0;
    }
    ++v3;
    v9 += v12 > *(double *)(v7 + 8 * v11) + v4;
  }
  while ( v3 != (int *)v10 );
  return v9 == 0;
}

