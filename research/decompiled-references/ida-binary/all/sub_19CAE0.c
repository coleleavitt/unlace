_BOOL8 __fastcall sub_19CAE0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdi
  double v11; // xmm4_8
  double v12; // xmm5_8
  _BOOL8 result; // rax

  v10 = sub_19AFC0(a1, a2);
  result = 0;
  if ( v10 )
    return sub_19B830(v10, -1, a3, a4, a5, a6, v11, v12, a9, a10) != 0;
  return result;
}
