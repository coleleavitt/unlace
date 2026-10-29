_BOOL8 __fastcall sub_3AE6A0(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  __int64 ph; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rsi
  int v16; // eax

  v10 = *(_DWORD *)(a1 + 8);
  if ( v10 != 58 && v10 != 25 )
    return 0;
  ph = get_ph(a1, a2);
  v15 = 4;
  v16 = *(_DWORD *)(ph + 8) & 0xC0;
  if ( v16 != 128 )
  {
    v15 = 1;
    if ( v16 != 192 )
      v15 = (v16 != 64) + 2LL;
  }
  return sub_3AB9B0(a1, v15, 0, a3, a4, a5, a6, v13, v14, a9, a10);
}
