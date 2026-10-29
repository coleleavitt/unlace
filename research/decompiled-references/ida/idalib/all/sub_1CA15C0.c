__int64 __fastcall sub_1CA15C0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  __int64 v12; // rax

  sub_18C81B0(*a1);
  v12 = sub_1CA0F20(a1, *(unsigned int **)(a2 + 16), 1u, a3, a4, a5, a6, v10, v11, a9, a10);
  if ( v12 != 1 )
    return sub_190F410(
             *a1,
             *(_DWORD *)(a2 + 24),
             v12 & 0xFFFFFFFFFFFFFFFELL,
             *(_DWORD *)(a2 + 28),
             *(_DWORD *)(a2 + 4),
             a3);
  sub_190F620(*a1, a3);
  return 1;
}
