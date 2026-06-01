int *__fastcall ClpPlusMinusOneMatrix::add(
        ClpPlusMinusOneMatrix *this,
        const ClpSimplex *a2,
        double *a3,
        double a4,
        int a5)
{
  __int64 v5; // r9
  int *result; // rax
  __int64 v7; // r11
  int v8; // esi
  int v9; // r8d
  __int64 v10; // r10
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx

  v5 = *((_QWORD *)this + 13);
  result = *((int **)this + 14);
  v7 = 4LL * a5;
  v8 = *(_DWORD *)(v5 + v7);
  v9 = result[(unsigned __int64)v7 / 4];
  if ( v8 >= v9 )
  {
    v9 = *(_DWORD *)(v5 + 4LL * a5);
  }
  else
  {
    v10 = *((_QWORD *)this + 15);
    result = (int *)(v10 + 4LL * v8);
    v11 = v10 + 4 * (v8 + (unsigned __int64)(unsigned int)(v9 - 1 - v8)) + 4;
    do
    {
      v12 = *result++;
      a3[v12] = a3[v12] + a4;
    }
    while ( (int *)v11 != result );
  }
  v13 = *(_DWORD *)(v5 + v7 + 4);
  if ( v13 > v9 )
  {
    v14 = *((_QWORD *)this + 15);
    result = (int *)(v14 + 4LL * v9);
    v15 = v14 + 4 * (v9 + (unsigned __int64)(unsigned int)(v13 - 1 - v9)) + 4;
    do
    {
      v16 = *result++;
      a3[v16] = a3[v16] - a4;
    }
    while ( (int *)v15 != result );
  }
  return result;
}

