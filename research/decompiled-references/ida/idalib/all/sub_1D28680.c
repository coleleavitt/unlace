__int64 __fastcall sub_1D28680(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v10; // r12
  __int64 v11; // rax

  v8 = sub_1D119D0(a1, *(_QWORD *)(a2 + 24), 0, a3, a4, a6, a7, a8);
  if ( v8 == 1 )
    return 1;
  v10 = v8;
  v11 = sub_1D28670((__int64 **)a1, *(_QWORD *)(a2 + 32), *(double *)a3.m128_u64, a4);
  if ( v11 == 1 )
    return 1;
  else
    return sub_178D010(
             (__int64 *)*a1,
             *(unsigned int *)(a2 + 16),
             v10 & 0xFFFFFFFFFFFFFFFELL,
             v11 & 0xFFFFFFFFFFFFFFFELL,
             (__m128i)a3);
}
