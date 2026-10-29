void __fastcall ClpSimplex::setRowSetBounds(ClpSimplex *this, const int *a2, const int *a3, double *a4)
{
  const int *v4; // r8
  int v5; // r10d
  double v6; // xmm1_8
  double v7; // xmm0_8
  __int64 v8; // rax
  double *v9; // r9
  double *v10; // rax
  const int *v11; // rcx
  const int *v12; // r8
  double *v13; // rax
  double v14; // xmm0_8
  __int64 v15; // rdx
  double v16; // xmm0_8
  double *v17; // rsi
  __int64 v18; // r9
  double v19; // xmm0_8
  __int64 v20; // rsi
  double v21; // xmm0_8

  if ( a2 != a3 )
  {
    v4 = a2;
    v5 = 0;
    do
    {
      v6 = *a4;
      ++v4;
      a4 += 2;
      v7 = *(a4 - 1);
      if ( v6 < -1.0e27 )
        v6 = -1.797693134862316e308;
      if ( v7 > 1.0e27 )
        v7 = 1.797693134862316e308;
      v8 = 8LL * *(v4 - 1);
      v9 = (double *)(v8 + *((_QWORD *)this + 18));
      if ( v6 != *v9 )
      {
        *v9 = v6;
        *((_DWORD *)this + 79) &= ~0x10u;
        ++v5;
      }
      v10 = (double *)(*((_QWORD *)this + 19) + v8);
      if ( v7 != *v10 )
      {
        *v10 = v7;
        *((_DWORD *)this + 79) &= ~0x20u;
        ++v5;
      }
    }
    while ( a3 != v4 );
    v11 = a2 + 1;
    v12 = &a2[((unsigned __int64)((char *)a3 - (char *)(a2 + 1)) >> 2) + 1];
    if ( v5 && (*((_BYTE *)this + 316) & 1) != 0 && a2 != v12 )
    {
      while ( 1 )
      {
        v15 = *(v11 - 1);
        v16 = *(double *)(*((_QWORD *)this + 18) + 8 * v15);
        v17 = (double *)(8 * v15 + *((_QWORD *)this + 124));
        if ( v16 == -1.797693134862316e308 )
        {
          *v17 = -1.797693134862316e308;
        }
        else
        {
          v18 = *((_QWORD *)this + 28);
          v19 = v16 * *((double *)this + 12);
          if ( v18 )
            v19 = v19 * *(double *)(v18 + 8 * v15);
          *v17 = v19;
        }
        v13 = (double *)(*((_QWORD *)this + 127) + 8 * v15);
        v14 = *(double *)(*((_QWORD *)this + 19) + 8 * v15);
        if ( v14 == 1.797693134862316e308 )
        {
          *v13 = 1.797693134862316e308;
        }
        else
        {
          v20 = *((_QWORD *)this + 28);
          v21 = v14 * *((double *)this + 12);
          if ( v20 )
            v21 = v21 * *(double *)(v20 + 8 * v15);
          *v13 = v21;
        }
        if ( v11 == v12 )
          break;
        ++v11;
      }
    }
  }
}

