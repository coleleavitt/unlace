__int64 __fastcall exc_chooser_t__::vfunc_10(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  char v14; // dl
  __int64 result; // rax

  v14 = sub_22EB00(0, nullptr, a2, a3, a4, a5, a6, a7, a8, a9, a11, a12, a13, a14);
  result = 0;
  if ( v14 )
  {
    *(_BYTE *)(a1 + 180) = 1;
    return 1;
  }
  return result;
}
