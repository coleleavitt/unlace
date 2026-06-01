__m128 *__fastcall sub_1781D10(__int64 *a1, __int64 a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  void **v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rbp
  __int32 v25; // r12d
  __m128 *result; // rax
  __int16 v27; // dx
  __int64 v28; // rax
  __m128 *v29; // [rsp+8h] [rbp-20h] BYREF

  v9 = *(_QWORD *)(a2 + 16);
  if ( !v9 )
  {
    v28 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 24), 0, *(double *)a3.m128_u64, a5, a6, a7);
    if ( v28 != 1 )
    {
      v23 = *a1;
      v24 = v28 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        result = (__m128 *)a2;
        if ( *(_QWORD *)(a2 + 24) == v24 )
          return result;
      }
      goto LABEL_11;
    }
    return (__m128 *)(&dword_0 + 1);
  }
  v10 = *(_QWORD *)(v9 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v9 + 56) & 4) != 0 )
    v10 = *(_QWORD *)(v10 + 32);
  v11 = sub_176A140(a1, (void **)v10, a3);
  if ( !v11 )
    return (__m128 *)(&dword_0 + 1);
  v12 = *a1;
  v13 = *(_QWORD *)(v9 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v9 + 40) & 7) != 0 )
    v13 = 0;
  v16 = sub_1867010(v12, 0, v11, *(unsigned int *)(v9 + 64), *(unsigned int *)(v9 + 24), v13);
  if ( !v16 )
    return (__m128 *)(&dword_0 + 1);
  sub_B94AD0(*(__m128i **)(*a1 + 544), v16, v14, v15, v17, v18);
  if ( *(char *)(v16 + 28) < 0 )
    return (__m128 *)(&dword_0 + 1);
  v22 = sub_177B9C0(a1, *(unsigned __int16 **)(a2 + 24), 0, *(double *)a3.m128_u64, v19, v20, v21);
  if ( v22 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v23 = *a1;
  v24 = v22 & 0xFFFFFFFFFFFFFFFELL;
LABEL_11:
  v25 = *(_DWORD *)(a2 + 8);
  result = (__m128 *)sub_EEE9A0(32, *(_QWORD **)(v23 + 248), 8u);
  v27 = result->m128_i16[0] & 0xFE00;
  LOBYTE(v27) = -3;
  result->m128_i16[0] = v27;
  if ( unk_2CD7484 )
  {
    v29 = result;
    sub_EE9B50(253);
    result = v29;
  }
  v29 = (__m128 *)v24;
  result->m128_i32[2] = v25;
  result[1] = _mm_loadh_ps((const double *)&v29);
  return result;
}
