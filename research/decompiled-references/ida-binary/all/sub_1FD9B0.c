unsigned __int64 __fastcall sub_1FD9B0(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rcx
  const char *v12; // rsi

  v11 = a2;
  v12 = *(const char **)(a1 + 424);
  if ( v12 )
    return sub_1FD840(a1, v12, *(__int16 *)(a1 + 412), v11, a4, a5, a6, a7, a8, a9, a10, a11);
  sub_1E69C0(a4, a1, 0, a3, v11);
  return sub_1FD9E0();
}
