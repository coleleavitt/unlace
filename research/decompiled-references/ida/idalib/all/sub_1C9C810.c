__int64 __fastcall sub_1C9C810(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
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
  __int64 v16; // r12
  __int64 v17; // rax

  v14 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 16), a3, a7, a8, a9, a10, a11, a12, a13, a14, a4, a5, a6);
  if ( v14 == 1 )
    return 1;
  v16 = v14;
  v17 = sub_1C7A830((__int64)a1, *(_QWORD *)(a2 + 8));
  if ( !v17 )
    return 1;
  if ( v17 == *(_QWORD *)(a2 + 8) )
    *(_QWORD *)(v17 + 48) = 0;
  return sub_1C3E300((__int64 *)*a1, *(_DWORD *)(a2 + 4), v17, *(double *)a7.m128_u64, 0, v16 & 0xFFFFFFFFFFFFFFFELL);
}
