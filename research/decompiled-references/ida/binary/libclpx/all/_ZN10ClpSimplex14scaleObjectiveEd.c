double __fastcall ClpSimplex::scaleObjective(ClpSimplex *this, double a2)
{
  __int64 v3; // rax
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v5; // rdx
  int i; // ecx
  double *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  double *v10; // rcx
  int v12; // ecx
  double v13; // xmm3_8
  double v14; // xmm0_8
  __int64 v15; // rcx
  double *v16; // rdx
  double v17; // xmm1_8
  __int64 v18; // rdx
  int v19; // ecx
  double v20; // xmm2_8
  double *v21; // rsi
  __int64 v22; // rdx
  int v23; // eax
  double *v24; // rcx
  _BYTE v25[16]; // [rsp+18h] [rbp-10h] BYREF

  v3 = 0;
  v4 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))this + 20);
  if ( v4 )
    v3 = (**v4)(v4, 0, 0, v25, 0, 2);
  if ( a2 >= 0.0 )
  {
    if ( a2 == 1.0 )
      return 0.0;
    v5 = 0;
    for ( i = 0; *((_DWORD *)this + 27) > i; *v7 = *v7 * a2 )
    {
      ++i;
      *(double *)(v3 + v5) = *(double *)(v3 + v5) * a2;
      v7 = (double *)(v5 + *((_QWORD *)this + 17));
      v5 += 8;
    }
    if ( *((int *)this + 26) > 0 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        ++v9;
        v10 = (double *)(v8 + *((_QWORD *)this + 16));
        v8 += 8;
        *v10 = *v10 * a2;
      }
      while ( *((_DWORD *)this + 26) > v9 );
    }
    ClpSimplex::computeObjectiveValue(this, 0);
    return 0.0;
  }
  v12 = *((_DWORD *)this + 27);
  v13 = -a2;
  if ( v12 > 0 )
  {
    v14 = 0.0;
    v15 = v3 + 8LL * (unsigned int)(v12 - 1) + 8;
    v16 = (double *)v3;
    do
    {
      v17 = *v16++;
      v14 = fmax(v14, fabs(v17));
    }
    while ( v16 != (double *)v15 );
    if ( v14 > v13 )
    {
      v18 = 0;
      v19 = 0;
      v20 = v13 / v14;
      do
      {
        ++v19;
        *(double *)(v3 + v18) = *(double *)(v3 + v18) * v20;
        v21 = (double *)(v18 + *((_QWORD *)this + 17));
        v18 += 8;
        *v21 = *v21 * v20;
      }
      while ( *((_DWORD *)this + 27) > v19 );
      goto LABEL_18;
    }
    return 1.0;
  }
  if ( a2 <= 0.0 )
    return 1.0;
  v14 = 0.0;
  v20 = v13 / 0.0;
LABEL_18:
  if ( *((int *)this + 26) > 0 )
  {
    v22 = 0;
    v23 = 0;
    do
    {
      ++v23;
      v24 = (double *)(v22 + *((_QWORD *)this + 16));
      v22 += 8;
      *v24 = *v24 * v20;
    }
    while ( *((_DWORD *)this + 26) > v23 );
  }
  return v14 / v13;
}

