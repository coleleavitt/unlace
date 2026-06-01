char __fastcall ClpNetworkMatrix::add(
        ClpNetworkMatrix *this,
        const ClpSimplex *a2,
        CoinIndexedVector *a3,
        double a4,
        int a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // esi
  int v8; // eax
  double *v9; // rcx
  bool v10; // si
  __int64 v11; // rsi
  __int64 v12; // rdi
  double *v13; // rcx
  double v14; // xmm2_8
  bool v15; // si
  bool v16; // di
  __int64 v17; // rdi
  __int64 v18; // r8

  v5 = *((_QWORD *)this + 13);
  v6 = 2 * a5;
  v7 = *(_DWORD *)(v5 + 4 * v6);
  v8 = *(_DWORD *)(v5 + 4 * v6 + 4);
  if ( v7 >= 0 )
  {
    v13 = (double *)(*((_QWORD *)a3 + 1) + 8LL * v7);
    if ( *v13 == 0.0 )
    {
      if ( a4 >= 0.0 )
        v16 = a4 >= 1.0e-50;
      else
        v16 = a4 <= -1.0e-50;
      if ( v16 )
      {
        v17 = *((int *)a3 + 4);
        v18 = *(_QWORD *)a3;
        *((_DWORD *)a3 + 4) = v17 + 1;
        *(_DWORD *)(v18 + 4 * v17) = v7;
        *v13 = -a4;
      }
    }
    else
    {
      v14 = *v13 - a4;
      if ( v14 <= 0.0 )
        v15 = v14 <= -1.0e-50;
      else
        v15 = v14 >= 1.0e-50;
      if ( v15 )
        *v13 = v14;
      else
        *v13 = 1.0e-100;
    }
  }
  if ( v8 >= 0 )
  {
    v9 = (double *)(*((_QWORD *)a3 + 1) + 8LL * v8);
    if ( *v9 != 0.0 )
    {
      a4 = a4 + *v9;
      if ( a4 <= 0.0 )
        LOBYTE(v8) = a4 <= -1.0e-50;
      else
        LOBYTE(v8) = a4 >= 1.0e-50;
      if ( !(_BYTE)v8 )
      {
        *v9 = 1.0e-100;
        LOBYTE(v8) = 48;
        return v8;
      }
LABEL_12:
      *v9 = a4;
      return v8;
    }
    if ( a4 <= 0.0 )
      v10 = a4 <= -1.0e-50;
    else
      v10 = a4 >= 1.0e-50;
    if ( v10 )
    {
      v11 = *((int *)a3 + 4);
      v12 = *(_QWORD *)a3;
      *((_DWORD *)a3 + 4) = v11 + 1;
      *(_DWORD *)(v12 + 4 * v11) = v8;
      goto LABEL_12;
    }
  }
  return v8;
}

