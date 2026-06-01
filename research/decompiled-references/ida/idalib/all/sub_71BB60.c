__int64 __fastcall sub_71BB60(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 result; // rax
  __int64 v11; // rax
  double v12; // xmm4_8
  double v13; // xmm5_8

  result = sub_71BA80(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( (_BYTE)result && (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
  {
    result = (*(_BYTE *)(a2 + 97) & 8) != 0;
    if ( (*(_BYTE *)(a2 + 97) & 8) == 0 )
    {
      v11 = sub_B73640(a2);
      return sub_70DBE0(a1, v11, 0, a3, a4, a5, a6, v12, v13, a9, a10);
    }
  }
  return result;
}
