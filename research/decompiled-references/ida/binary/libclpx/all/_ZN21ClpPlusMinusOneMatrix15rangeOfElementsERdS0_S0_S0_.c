__int64 __fastcall ClpPlusMinusOneMatrix::rangeOfElements(
        ClpPlusMinusOneMatrix *this,
        double *a2,
        double *a3,
        double *a4,
        double *a5)
{
  __int64 result; // rax
  __int64 v6; // r12
  int *v7; // rbp
  __int64 v8; // r13
  char v9; // r11
  char v10; // r10
  int v11; // edi
  int v12; // r9d
  bool v13; // cc

  result = *((unsigned int *)this + 33);
  if ( (int)result <= 0 )
  {
    *a2 = 0.0;
    *a3 = 0.0;
    *a4 = 0.0;
    *a5 = 0.0;
  }
  else
  {
    v6 = 4LL * (unsigned int)(result - 1) + 4;
    v7 = *((int **)this + 13);
    v8 = *((_QWORD *)this + 14);
    result = 0;
    v9 = 0;
    v10 = 0;
    v11 = *v7;
    do
    {
      v12 = *(_DWORD *)(v8 + result);
      v13 = v11 < v12;
      v11 = *(int *)((char *)v7 + result + 4);
      if ( v13 )
        v10 = 1;
      if ( v12 < v11 )
        v9 = 1;
      result += 4;
    }
    while ( result != v6 );
    if ( v9 )
    {
      *a2 = -1.0;
      *a3 = -1.0;
    }
    else
    {
      *a2 = 0.0;
      *a3 = 0.0;
    }
    if ( v10 )
    {
      *a4 = 1.0;
      *a5 = 1.0;
    }
    else
    {
      *a4 = 0.0;
      *a5 = 0.0;
    }
  }
  return result;
}

