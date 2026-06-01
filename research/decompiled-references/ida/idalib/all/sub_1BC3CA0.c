__m128 *__fastcall sub_1BC3CA0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 *v12; // rax
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  __int32 v26; // r12d
  __m128 *result; // rax
  __int16 v28; // dx
  __int64 v29; // rax
  __m128 *v30; // [rsp+8h] [rbp-20h] BYREF

  v10 = *(_QWORD *)(a2 + 16);
  if ( !v10 )
  {
    v29 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 24), 0, a3, a4, a6, a7, a8);
    if ( v29 != 1 )
    {
      v24 = *a1;
      v25 = v29 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        result = (__m128 *)a2;
        if ( *(_QWORD *)(a2 + 24) == v25 )
          return result;
      }
      goto LABEL_11;
    }
    return (__m128 *)(&dword_0 + 1);
  }
  v11 = *(_QWORD *)(v10 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v10 + 56) & 4) != 0 )
    v11 = *(_QWORD *)(v11 + 32);
  v12 = sub_1BB2A80(a1, v11, a3, a4);
  if ( !v12 )
    return (__m128 *)(&dword_0 + 1);
  v13 = (_QWORD *)*a1;
  v14 = *(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v10 + 40) & 7) != 0 )
    v14 = 0;
  v17 = sub_1867010(v13, 0, v12, *(_DWORD *)(v10 + 64), *(unsigned int *)(v10 + 24), v14);
  if ( !v17 )
    return (__m128 *)(&dword_0 + 1);
  sub_B94AD0(*(__m128i **)(*a1 + 544), v17, v15, v16, v18, v19);
  if ( *(char *)(v17 + 28) < 0 )
    return (__m128 *)(&dword_0 + 1);
  v23 = sub_1B71AD0(a1, *(const __m128i **)(a2 + 24), 0, a3, a4, v20, v21, v22);
  if ( v23 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v24 = *a1;
  v25 = v23 & 0xFFFFFFFFFFFFFFFELL;
LABEL_11:
  v26 = *(_DWORD *)(a2 + 8);
  result = (__m128 *)sub_EEE9A0(32, *(_QWORD **)(v24 + 248), 8u);
  v28 = result->m128_i16[0] & 0xFE00;
  LOBYTE(v28) = -3;
  result->m128_i16[0] = v28;
  if ( unk_2CD7484 )
  {
    v30 = result;
    sub_EE9B50(253);
    result = v30;
  }
  v30 = (__m128 *)v25;
  result->m128_i32[2] = v26;
  result[1] = _mm_loadh_ps((const double *)&v30);
  return result;
}
