__m128 *__fastcall sub_199E5B0(
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
  unsigned __int64 v24; // r13
  __int32 v25; // r12d
  __m128 *result; // rax
  __int16 v27; // dx
  __int64 v28; // rax
  __m128 *v29; // [rsp+8h] [rbp-30h] BYREF

  v10 = *(_QWORD *)(a2 + 16);
  if ( !v10 )
  {
    v28 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, a4, a6, a7, a8);
    if ( v28 != 1 )
    {
      v24 = v28 & 0xFFFFFFFFFFFFFFFELL;
      result = (__m128 *)a2;
      if ( *(_QWORD *)(a2 + 24) == v24 )
        return result;
      goto LABEL_11;
    }
    return (__m128 *)(&dword_0 + 1);
  }
  v11 = *(_QWORD *)(v10 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v10 + 56) & 4) != 0 )
    v11 = *(_QWORD *)(v11 + 32);
  v12 = sub_1988430(a1, v11, a3, a4);
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
  v23 = sub_1998500(a1, *(unsigned __int16 **)(a2 + 24), 0, a3, a4, v20, v21, v22);
  if ( v23 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
LABEL_11:
  v25 = *(_DWORD *)(a2 + 8);
  result = (__m128 *)sub_EEE9A0(32, *(_QWORD **)(*a1 + 248), 8u);
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
