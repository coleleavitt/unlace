__int64 __fastcall ClpNetworkMatrix::times(ClpNetworkMatrix *this, double a2, const double *a3, double *a4)
{
  __int64 result; // rax
  __int64 v5; // r9
  double v6; // xmm1_8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  double v11; // xmm1_8
  __int64 v12; // r8
  __int64 v13; // rcx
  double *v14; // r8

  result = *((unsigned int *)this + 29);
  if ( *((_BYTE *)this + 120) )
  {
    if ( (int)result > 0 )
    {
      v10 = 8LL * (unsigned int)(result - 1) + 8;
      result = 0;
      do
      {
        v11 = *(const double *)((char *)a3 + result) * a2;
        if ( v11 != 0.0 )
        {
          v12 = *((_QWORD *)this + 13);
          v13 = *(int *)(v12 + result + 4);
          v14 = &a4[*(int *)(v12 + result)];
          *v14 = *v14 - v11;
          a4[v13] = v11 + a4[v13];
        }
        result += 8;
      }
      while ( v10 != result );
    }
  }
  else if ( (int)result > 0 )
  {
    v5 = 8LL * (unsigned int)(result - 1) + 8;
    result = 0;
    do
    {
      v6 = *(const double *)((char *)a3 + result) * a2;
      if ( v6 != 0.0 )
      {
        v7 = *((_QWORD *)this + 13);
        v8 = *(int *)(v7 + result);
        v9 = *(int *)(v7 + result + 4);
        if ( (int)v8 >= 0 )
          a4[v8] = a4[v8] - v6;
        if ( (int)v9 >= 0 )
          a4[v9] = v6 + a4[v9];
      }
      result += 8;
    }
    while ( v5 != result );
  }
  return result;
}

