unsigned __int64 __fastcall sub_1CEE310(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int16 *v8; // rsi
  __int64 v9; // rax

  v8 = *(unsigned __int16 **)(a2 + 24);
  if ( !v8 )
    return sub_1B34160(
             *(__int64 **)(*a1 + 760),
             (unsigned __int64)v8,
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 12),
             *(_DWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 4),
             *(double *)a6.m128_u64,
             *(double *)a7.m128_u64);
  v9 = sub_1CE88F0(a1, v8, a6, a7, a3, a4, a5);
  if ( v9 != 1 )
  {
    v8 = (unsigned __int16 *)(v9 & 0xFFFFFFFFFFFFFFFELL);
    return sub_1B34160(
             *(__int64 **)(*a1 + 760),
             (unsigned __int64)v8,
             *(_DWORD *)a2,
             *(_DWORD *)(a2 + 12),
             *(_DWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 4),
             *(double *)a6.m128_u64,
             *(double *)a7.m128_u64);
  }
  return 0;
}
