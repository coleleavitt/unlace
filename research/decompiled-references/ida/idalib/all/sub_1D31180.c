__int64 __fastcall sub_1D31180(
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // r12
  __int64 v21; // rax

  v14 = sub_1D2FA60(a1, *(unsigned __int16 **)(a2 + 16), a3, a7, a8, a9, a10, a11, a12, a13, a14, a4, a5, a6);
  if ( v14 == 1 )
    return 1;
  v20 = v14;
  v21 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 8), a7, a8, v15, v16, v17, v18);
  if ( !v21 )
    return 1;
  if ( v21 == *(_QWORD *)(a2 + 8) )
    *(_QWORD *)(v21 + 48) = 0;
  return sub_1C3E300((__int64 *)*a1, *(_DWORD *)(a2 + 4), v21, *(double *)a7.m128_u64, 0, v20 & 0xFFFFFFFFFFFFFFFELL);
}
