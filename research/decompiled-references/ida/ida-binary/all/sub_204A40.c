__int64 __fastcall sub_204A40(
        __int64 *a1,
        _OWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  const __m128i *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r11
  __m128 v15; // xmm4
  __m128 v16; // xmm5

  v10 = (const __m128i *)sub_1E7840(a1, a2);
  if ( v10 )
    return sub_204900(v14, v10, a2, v11, v12, v13, a3, a4, a5, a6, v15, v16, a9, a10);
  else
    return 0;
}
