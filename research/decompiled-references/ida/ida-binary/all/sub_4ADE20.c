unsigned __int64 __fastcall sub_4ADE20(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  double v10; // xmm4_8
  double v11; // xmm5_8
  unsigned __int64 result; // rax

  if ( *(_DWORD *)(a1 + 2376) != a2 )
  {
    sub_4A96C0(a1, a2, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    return sub_4A4600(a1, nullptr, 7u, 0, a3, a4, a5, a6, v10, v11, a9, a10);
  }
  return result;
}
