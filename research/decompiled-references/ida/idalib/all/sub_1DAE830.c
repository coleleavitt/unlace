__int64 __fastcall sub_1DAE830(
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
  __int64 v14; // rax

  v14 = sub_1DAD2E0(a1, *(unsigned __int16 **)(a2 + 24), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v14 == 1 )
    return 1;
  else
    return sub_1C39E40(*a1, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), v14 & 0xFFFFFFFFFFFFFFFELL);
}
