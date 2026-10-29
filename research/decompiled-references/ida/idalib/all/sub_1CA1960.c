__m128 *__fastcall sub_1CA1960(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int32 v25; // r12d
  unsigned __int64 v26; // r14
  __m128 *result; // rax
  __int16 v28; // dx
  __m128 *v29; // [rsp+8h] [rbp-30h] BYREF

  v15 = *(_QWORD *)(a2 + 16);
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v15 + 56) & 4) != 0 )
      v16 = *(_QWORD *)(v16 + 32);
    v17 = sub_1C8AA80(a1, v16, a3, a4);
    if ( !v17 )
      return (__m128 *)(&dword_0 + 1);
    v18 = *(_QWORD *)(v15 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v15 + 40) & 7) != 0 )
      v18 = 0;
    v21 = sub_1867010((_QWORD *)*a1, 0, v17, *(_DWORD *)(v15 + 64), *(unsigned int *)(v15 + 24), v18);
    if ( !v21 )
      return (__m128 *)(&dword_0 + 1);
    sub_B94AD0(*(__m128i **)(*a1 + 544), v21, v19, v20, v22, v23);
    if ( *(char *)(v21 + 28) < 0 )
      return (__m128 *)(&dword_0 + 1);
  }
  v24 = sub_1C9AFD0(a1, *(_WORD **)(a2 + 24), 0, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
  if ( v24 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v25 = *(_DWORD *)(a2 + 8);
  v26 = v24 & 0xFFFFFFFFFFFFFFFELL;
  result = (__m128 *)sub_EEE9A0(32, *(_QWORD **)(*a1 + 248), 8u);
  v28 = result->m128_i16[0] & 0xFE00;
  LOBYTE(v28) = -3;
  result->m128_i16[0] = v28;
  if ( unk_2CD7484 )
  {
    v29 = result;
    sub_EE9B50(253);
    result = v29;
  }
  v29 = (__m128 *)v26;
  result->m128_i32[2] = v25;
  result[1] = _mm_loadh_ps((const double *)&v29);
  return result;
}
