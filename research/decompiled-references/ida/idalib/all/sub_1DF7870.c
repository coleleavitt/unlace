__int64 __fastcall sub_1DF7870(
        __int64 *a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        __m128i a10,
        double a11,
        double a12,
        __m128 a13,
        __m128i a14)
{
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // r12
  unsigned __int64 v20; // rax

  v14 = sub_1DF6720(a1, *(_WORD **)(a2 + 16), a3, a7, a8, a9, a10, a11, a12, a13, a14, a4, a5, a6);
  if ( v14 == 1 )
    return 1;
  v19 = v14;
  v20 = sub_1DD8310((__int64)a1, *(_DWORD *)(*(_QWORD *)(a2 + 8) + 24LL), *(_QWORD *)(a2 + 8), v15, v16, v17, a7, a8);
  if ( !v20 )
    return 1;
  if ( v20 == *(_QWORD *)(a2 + 8) )
    *(_QWORD *)(v20 + 48) = 0;
  return sub_1C3E300((__int64 *)*a1, *(_DWORD *)(a2 + 4), v20, *(double *)a7.m128_u64, 0, v19 & 0xFFFFFFFFFFFFFFFELL);
}
