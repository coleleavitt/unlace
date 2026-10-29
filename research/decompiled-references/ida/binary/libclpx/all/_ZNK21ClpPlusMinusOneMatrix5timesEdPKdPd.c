__int64 __fastcall ClpPlusMinusOneMatrix::times(ClpPlusMinusOneMatrix *this, double a2, const double *a3, double *a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  double v7; // xmm2_8
  __int64 v8; // rbx
  int v9; // r10d
  int v10; // r11d
  __int64 v11; // rbp
  unsigned __int64 v12; // r10
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r10
  unsigned __int64 v16; // r10
  __int64 v17; // rcx

  result = *((unsigned int *)this + 33);
  if ( !*((_BYTE *)this + 136) )
    result = *((unsigned int *)this + 32);
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    v5 = 0;
    v6 = 4 * result + 4;
    while ( 1 )
    {
      v7 = a3[v5 / 4] * a2;
      if ( v7 != 0.0 )
        break;
      v5 += 4LL;
      if ( v6 == v5 )
        return result;
    }
    while ( 1 )
    {
      v8 = *((_QWORD *)this + 13);
      result = *((_QWORD *)this + 14);
      v9 = *(_DWORD *)(v8 + v5);
      v10 = *(_DWORD *)(result + v5);
      if ( v9 >= v10 )
      {
        v10 = *(_DWORD *)(v8 + v5);
      }
      else
      {
        v11 = *((_QWORD *)this + 15);
        result = v11 + 4LL * v9;
        v12 = v11 + 4 * (v9 + (unsigned __int64)(unsigned int)(v10 - 1 - v9)) + 4;
        do
        {
          v13 = *(int *)result;
          result += 4;
          a4[v13] = a4[v13] + v7;
        }
        while ( v12 != result );
      }
      v14 = *(_DWORD *)(v8 + v5 + 4);
      if ( v14 > v10 )
      {
        v15 = *((_QWORD *)this + 15);
        result = v15 + 4LL * v10;
        v16 = v15 + 4 * (v10 + (unsigned __int64)(unsigned int)(v14 - 1 - v10)) + 4;
        do
        {
          v17 = *(int *)result;
          result += 4;
          a4[v17] = a4[v17] - v7;
        }
        while ( result != v16 );
      }
      v5 += 4LL;
      if ( v6 == v5 )
        break;
      while ( 1 )
      {
        v7 = a3[v5 / 4] * a2;
        if ( v7 != 0.0 )
          break;
        v5 += 4LL;
        if ( v6 == v5 )
          return result;
      }
    }
  }
  return result;
}

