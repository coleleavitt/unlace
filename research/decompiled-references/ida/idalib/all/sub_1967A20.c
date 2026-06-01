__m128 *__fastcall sub_1967A20(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int32 v19; // r12d
  unsigned __int64 v20; // r14
  __m128 *result; // rax
  __int16 v22; // dx
  __m128 *v23; // [rsp+8h] [rbp-30h] BYREF

  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v9 + 56) & 4) != 0 )
      v10 = *(_QWORD *)(v10 + 32);
    v11 = (unsigned __int64 *)sub_1946B40(a1, (void **)v10, a3, a4);
    if ( !v11 )
      return (__m128 *)(&dword_0 + 1);
    v12 = *(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v9 + 40) & 7) != 0 )
      v12 = 0;
    v15 = sub_1867010((_QWORD *)*a1, 0, v11, *(_DWORD *)(v9 + 64), *(unsigned int *)(v9 + 24), v12);
    if ( !v15 )
      return (__m128 *)(&dword_0 + 1);
    sub_B94AD0(*(__m128i **)(*a1 + 544), v15, v13, v14, v16, v17);
    if ( *(char *)(v15 + 28) < 0 )
      return (__m128 *)(&dword_0 + 1);
  }
  v18 = sub_1961D20(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, a4, a6, a7, a8);
  if ( v18 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v19 = *(_DWORD *)(a2 + 8);
  v20 = v18 & 0xFFFFFFFFFFFFFFFELL;
  result = (__m128 *)sub_EEE9A0(32, *(_QWORD **)(*a1 + 248), 8u);
  v22 = result->m128_i16[0] & 0xFE00;
  LOBYTE(v22) = -3;
  result->m128_i16[0] = v22;
  if ( unk_2CD7484 )
  {
    v23 = result;
    sub_EE9B50(253);
    result = v23;
  }
  v23 = (__m128 *)v20;
  result->m128_i32[2] = v19;
  result[1] = _mm_loadh_ps((const double *)&v23);
  return result;
}
