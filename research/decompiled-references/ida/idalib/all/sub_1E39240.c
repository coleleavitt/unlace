unsigned __int64 __fastcall sub_1E39240(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128i a7)
{
  __int64 v9; // rax
  unsigned __int64 result; // rax

  if ( (*(_BYTE *)(a3 + 8) & 0x7Fu) - 18 > 0x3F )
    return a3;
  v9 = sub_B8C1B0(a3);
  if ( !v9 )
    return a3;
  result = sub_1E38470(a1, a2, v9, a4, 1, a5, a6, a7);
  if ( result )
    return sub_B8D340(result);
  return result;
}
