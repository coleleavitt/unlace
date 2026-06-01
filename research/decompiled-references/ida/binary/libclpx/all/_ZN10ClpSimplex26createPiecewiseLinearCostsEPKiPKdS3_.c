__int64 __fastcall ClpSimplex::createPiecewiseLinearCosts(
        ClpSimplex *this,
        const int *a2,
        const double *a3,
        const double *a4)
{
  void *v8; // rbx
  __int64 v9; // r8
  const int *v10; // rdx
  __int64 v11; // rsi
  unsigned int v12; // ebx
  int v13; // edi
  __int64 v14; // r10
  int v15; // ecx
  int v16; // eax
  double v17; // xmm0_8
  int v18; // r11d
  __int64 v19; // r15
  int v20; // r10d
  double v21; // xmm1_8
  double *v22; // rax
  const double *v23; // r10
  bool v24; // cf
  bool v25; // zf
  ClpNonLinearCost *v26; // r15

  v8 = *((void **)this + 165);
  if ( v8 )
  {
    ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)this + 165));
    operator delete(v8);
  }
  if ( *((int *)this + 27) <= 0 )
  {
    v12 = 0;
  }
  else
  {
    v9 = *((_QWORD *)this + 22);
    v10 = a2 + 1;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = *(v10 - 1);
      v15 = *v10;
      v16 = *v10 - 1;
      v17 = a3[v14];
      v18 = *(v10 - 1);
      v19 = v14;
      v20 = v14 + 1;
      *(double *)(v9 + v11) = v17;
      *(double *)(*((_QWORD *)this + 23) + v11) = a3[v16];
      v9 = *((_QWORD *)this + 22);
      v21 = *(double *)(v9 + v11);
      if ( v16 > v20 )
      {
        v22 = (double *)&a3[v19 + 1];
        v23 = &a3[v20 + 1 + (unsigned __int64)(unsigned int)(v15 - 3 - v18)];
        do
        {
          v24 = v21 < *v22;
          v25 = v21 == *v22;
          v21 = *v22++;
          v12 += !v24 && !v25;
        }
        while ( v22 != v23 );
      }
      ++v13;
      v11 += 8;
      ++v10;
    }
    while ( *((_DWORD *)this + 27) > v13 );
  }
  v26 = (ClpNonLinearCost *)operator new(0x98u);
  ClpNonLinearCost::ClpNonLinearCost(v26, this, a2, a3, a4);
  *((_QWORD *)this + 165) = v26;
  *((_DWORD *)this + 84) |= 2u;
  return v12;
}

