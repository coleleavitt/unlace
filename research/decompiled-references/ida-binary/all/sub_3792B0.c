__int64 __fastcall sub_3792B0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 result; // rax

  v10 = sub_5313F0(unk_8CA480);
  if ( !v10 )
    return sub_2C5FF0(a1, a2, a3, a4, a5, a6, v11, v12, a9, a10);
  result = sub_5314B0(v10);
  if ( !(_BYTE)result )
    return sub_2C5FF0(a1, a2, a3, a4, a5, a6, v11, v12, a9, a10);
  return result;
}
