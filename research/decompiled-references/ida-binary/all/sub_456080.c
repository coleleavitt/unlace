__int64 __fastcall users_chooser_t__::vfunc_12(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10)
{
  __int64 *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // rsi

  v10 = *(__int64 **)a2;
  v11 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
  if ( v11 != *(_QWORD *)a2 )
  {
    do
    {
      v12 = *v10++;
      sub_455D80(a1, v12, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    while ( (__int64 *)v11 != v10 );
  }
  return 1;
}
