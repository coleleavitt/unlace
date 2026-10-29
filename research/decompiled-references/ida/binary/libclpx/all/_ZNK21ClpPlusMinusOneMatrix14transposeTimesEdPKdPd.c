__int64 __fastcall ClpPlusMinusOneMatrix::transposeTimes(
        ClpPlusMinusOneMatrix *this,
        double a2,
        const double *a3,
        double *a4)
{
  __int64 result; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // r8
  __int64 v7; // rbp
  __int64 v8; // rbx
  int v9; // r10d
  int v10; // r11d
  __int64 v11; // r9
  double v12; // xmm1_8
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // r9
  __int64 v17; // rcx

  result = *((unsigned int *)this + 33);
  if ( !*((_BYTE *)this + 136) )
    result = *((unsigned int *)this + 32);
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    v5 = *((_QWORD *)this + 14);
    v6 = 0;
    v7 = *((_QWORD *)this + 13);
    v8 = 4 * result + 4;
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(v5 + v6);
      if ( v10 <= v9 )
      {
        v10 = v9;
        v12 = 0.0;
      }
      else
      {
        v11 = *((_QWORD *)this + 15);
        v12 = 0.0;
        result = v11 + 4LL * v9;
        v13 = v11 + 4 * (v9 + (unsigned __int64)(unsigned int)(v10 - v9 - 1)) + 4;
        do
        {
          v14 = *(int *)result;
          result += 4;
          v12 = v12 + a3[v14];
        }
        while ( v13 != result );
      }
      v9 = *(_DWORD *)(v7 + v6 + 4);
      if ( v9 <= v10 )
      {
        v9 = v10;
      }
      else
      {
        v15 = *((_QWORD *)this + 15);
        result = v15 + 4LL * v10;
        v16 = v15 + 4 * (v10 + (unsigned __int64)(unsigned int)(v9 - 1 - v10)) + 4;
        do
        {
          v17 = *(int *)result;
          result += 4;
          v12 = v12 - a3[v17];
        }
        while ( v16 != result );
      }
      a4[v6 / 4] = v12 * a2 + a4[v6 / 4];
      v6 += 4LL;
    }
    while ( v8 != v6 );
  }
  return result;
}

