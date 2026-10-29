unsigned __int64 __fastcall sub_1CA12E0(
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
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  double v15; // xmm4_8
  double v16; // xmm5_8
  _WORD *v18; // rsi
  __int64 v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // r9

  v11 = sub_1CA1230(a1, *(unsigned int **)(a2 + 16), a3, a4, a5, a6, a7, a8, a9, a10);
  if ( v11 == 1 )
    return 1;
  v18 = *(_WORD **)(a2 + 24);
  v19 = v11;
  v20 = (*v18 & 0x1FF) == 0x89
      ? sub_1CA1240(a1, (__int64)v18, a3, a4, a5, a6, v15, v16, a9, a10)
      : sub_1CA1280(a1, (__int64)v18, v12, v13, v14, a3, a4, a5, a6, v15, v16, a9, a10);
  if ( v20 == 1 )
    return 1;
  else
    return sub_1C3CD10(
             *a1,
             *(_BYTE *)(a2 + 8),
             *(_DWORD *)(a2 + 12),
             v19 & 0xFFFFFFFFFFFFFFFELL,
             v20 & 0xFFFFFFFFFFFFFFFELL,
             v21);
}
