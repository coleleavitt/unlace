__int64 __fastcall sub_3283C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rsi
  __int64 result; // rax

  v11 = sub_327C30(a4, a5, a6, a7, a8, a9, a10, a11, a1, a2, a3);
  result = 1;
  if ( v11 != -1 )
    return (unsigned __int8)sub_192AA0(0, v11, -1, 1u);
  return result;
}
