_DWORD *__fastcall sub_5035B0(
        __m128i *a1,
        int a2,
        double a3,
        double a4,
        __m128 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r13d
  __int64 v10; // rbp
  _DWORD *result; // rax

  if ( a1[1].m128i_i64[0] <= 0 )
    return nullptr;
  v9 = 0;
  v10 = 0;
  while ( 1 )
  {
    if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 )
      sub_503260(a1, 0, 0, 0, a8, a9, a3, a4, a5);
    result = (_DWORD *)(a1->m128i_i64[1] + 96 * v10);
    if ( *result == a2 )
      break;
    if ( *result <= a2 )
    {
      v10 = ++v9;
      if ( v9 < a1[1].m128i_i64[0] )
        continue;
    }
    return nullptr;
  }
  return result;
}
