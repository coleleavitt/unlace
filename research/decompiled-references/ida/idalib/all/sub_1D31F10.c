__int64 __fastcall sub_1D31F10(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 result; // rax
  unsigned __int64 v15; // rdx

  result = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 16), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( result != 1 )
  {
    v15 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) )
      return sub_1A86230(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v15);
    result = a2;
    if ( *(_QWORD *)(a2 + 16) != v15 )
      return sub_1A86230(*(__int64 **)(*a1 + 736), *(_DWORD *)(a2 + 8), v15);
  }
  return result;
}
