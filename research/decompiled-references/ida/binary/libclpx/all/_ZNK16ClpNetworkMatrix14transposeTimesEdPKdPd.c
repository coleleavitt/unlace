void __fastcall ClpNetworkMatrix::transposeTimes(ClpNetworkMatrix *this, double a2, const double *a3, double *a4)
{
  int v4; // ecx
  double *v5; // r8
  int *v6; // rax
  __int64 v7; // rdi
  double v8; // xmm1_8
  __int64 v9; // rcx
  __int64 v10; // rax
  double *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  double v14; // xmm1_8

  v4 = *((_DWORD *)this + 29);
  if ( *((_BYTE *)this + 120) )
  {
    if ( v4 > 0 )
    {
      v10 = *((_QWORD *)this + 13);
      v11 = &a4[(unsigned int)(v4 - 1) + 1];
      v12 = v10 + 4;
      do
      {
        v13 = *(int *)(v12 - 4);
        v14 = *a4++;
        v12 += 8;
        *(a4 - 1) = a3[*(int *)(v12 - 8)] * a2 + v14 - a3[v13] * a2;
      }
      while ( v11 != a4 );
    }
  }
  else if ( v4 > 0 )
  {
    v5 = &a4[(unsigned int)(v4 - 1) + 1];
    v6 = (int *)(*((_QWORD *)this + 13) + 4LL);
    do
    {
      while ( 1 )
      {
        v7 = *(v6 - 1);
        v8 = *a4;
        v9 = *v6;
        if ( (int)v7 >= 0 )
          v8 = v8 - a3[v7] * a2;
        if ( (int)v9 < 0 )
          break;
        ++a4;
        v6 += 2;
        *(a4 - 1) = v8 + a3[v9] * a2;
        if ( a4 == v5 )
          return;
      }
      *a4++ = v8;
      v6 += 2;
    }
    while ( v5 != a4 );
  }
}

