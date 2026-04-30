__int64 __fastcall execute_ah_t__::vfunc_0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        _DWORD *a10)
{
  _QWORD *v10; // rdi

  if ( a10[2] != 31 )
    return 0;
  if ( !*(_QWORD *)a10 )
    return 0;
  v10 = *(_QWORD **)(*(_QWORD *)a10 + 64LL);
  if ( !v10 )
    return 0;
  sub_1AF8F0(v10, a1, a2, a3, a4, a5, a6, a7, a8);
  return 0;
}
