__int64 __fastcall ClpPlusMinusOneMatrix::transposeTimes(
        ClpPlusMinusOneMatrix *this,
        double a2,
        const double *a3,
        double *a4,
        const double *a5,
        const double *a6,
        double *a7)
{
  __int64 (__fastcall *v7)(ClpPlusMinusOneMatrix *, double, const double *, double *); // rax
  __int64 result; // rax
  __int64 v9; // r12
  unsigned __int64 v10; // r8
  __int64 v11; // rbp
  __int64 v12; // rbx
  int v13; // r10d
  int v14; // r11d
  __int64 v15; // r9
  double v16; // xmm1_8
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  __int64 v21; // rcx

  v7 = *(__int64 (__fastcall **)(ClpPlusMinusOneMatrix *, double, const double *, double *))(*(_QWORD *)this + 376LL);
  if ( v7 != ClpPlusMinusOneMatrix::transposeTimes )
    return ((__int64 (__fastcall *)(ClpPlusMinusOneMatrix *, const double *, double *, __int64 (__fastcall *)(ClpPlusMinusOneMatrix *, double, const double *, double *), const double *, double *, double))v7)(
             this,
             a3,
             a4,
             ClpPlusMinusOneMatrix::transposeTimes,
             a6,
             a7,
             a2);
  result = *((unsigned int *)this + 33);
  if ( !*((_BYTE *)this + 136) )
    result = *((unsigned int *)this + 32);
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    v9 = *((_QWORD *)this + 14);
    v10 = 0;
    v11 = *((_QWORD *)this + 13);
    v12 = 4 * result + 4;
    v13 = 0;
    do
    {
      v14 = *(_DWORD *)(v9 + v10);
      if ( v14 <= v13 )
      {
        v14 = v13;
        v16 = 0.0;
      }
      else
      {
        v15 = *((_QWORD *)this + 15);
        v16 = 0.0;
        result = v15 + 4LL * v13;
        v17 = v15 + 4 * (v13 + (unsigned __int64)(unsigned int)(v14 - v13 - 1)) + 4;
        do
        {
          v18 = *(int *)result;
          result += 4;
          v16 = v16 + a3[v18];
        }
        while ( v17 != result );
      }
      v13 = *(_DWORD *)(v11 + v10 + 4);
      if ( v13 <= v14 )
      {
        v13 = v14;
      }
      else
      {
        v19 = *((_QWORD *)this + 15);
        result = v19 + 4LL * v14;
        v20 = v19 + 4 * (v14 + (unsigned __int64)(unsigned int)(v13 - 1 - v14)) + 4;
        do
        {
          v21 = *(int *)result;
          result += 4;
          v16 = v16 - a3[v21];
        }
        while ( v20 != result );
      }
      a4[v10 / 4] = v16 * a2 + a4[v10 / 4];
      v10 += 4LL;
    }
    while ( v12 != v10 );
  }
  return result;
}

