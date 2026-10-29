__int64 __fastcall ClpNetworkMatrix::fillBasis(
        ClpNetworkMatrix *this,
        ClpSimplex *a2,
        const int *a3,
        int *a4,
        int *a5,
        unsigned int *a6,
        int *a7,
        int *a8,
        double *a9)
{
  __int64 result; // rax
  int v10; // esi
  __int64 v11; // r12
  double *v12; // rbx
  int *v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 v24; // rbx
  int v25; // edi
  int v26; // edi

  result = *a6;
  v10 = *a4;
  if ( *((_BYTE *)this + 120) )
  {
    if ( v10 > 0 )
    {
      v11 = *((_QWORD *)this + 13);
      v12 = &a9[(int)result];
      v13 = &a5[(int)result];
      v14 = 1;
      do
      {
        result = (unsigned int)(result + 2);
        v12 += 2;
        v15 = 2 * a3[v14 - 1];
        v16 = *(int *)(v11 + 4 * v15);
        v17 = *(int *)(v11 + 4 * v15 + 4);
        v13[2 * v14 - 2] = v16;
        ++a7[v16];
        *(v12 - 2) = -1.0;
        v13[2 * v14 - 1] = v17;
        ++a7[v17];
        *(v12 - 1) = 1.0;
        LODWORD(v17) = v14;
        a6[v14] = result;
        a8[v14++ - 1] = 2;
      }
      while ( *a4 > (int)v17 );
    }
  }
  else if ( v10 > 0 )
  {
    v18 = *((_QWORD *)this + 13);
    v19 = 1;
    do
    {
      v20 = 2 * a3[v19 - 1];
      v21 = *(int *)(v18 + 4 * v20);
      v22 = *(int *)(v18 + 4 * v20 + 4);
      if ( (int)v21 >= 0 )
      {
        v23 = (int)result;
        result = (unsigned int)(result + 1);
        a5[v23] = v21;
        ++a7[v21];
        a9[v23] = -1.0;
      }
      if ( (int)v22 >= 0 )
      {
        v24 = (int)result;
        result = (unsigned int)(result + 1);
        a5[v24] = v22;
        ++a7[v22];
        a9[v24] = 1.0;
      }
      v25 = result - a6[v19 - 1];
      a6[v19] = result;
      a8[v19 - 1] = v25;
      v26 = v19++;
    }
    while ( *a4 > v26 );
  }
  return result;
}

