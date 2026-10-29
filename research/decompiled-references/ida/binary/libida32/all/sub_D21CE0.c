unsigned __int64 __fastcall sub_D21CE0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi

  v6 = ((unsigned __int64)a2 + 63) >> 6;
  if ( v6 == 1 )
    return 0;
  v8 = a1[71];
  v9 = 8 * v6;
  a1[81] += v9;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[72] < v9 + result || !v8 )
    return sub_962430((__int64)(a1 + 71), v9, v9, 3, a5, a6);
  a1[71] = v9 + result;
  return result;
}

