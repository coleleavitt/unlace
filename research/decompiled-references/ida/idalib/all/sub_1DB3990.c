__m128 *__fastcall sub_1DB3990(
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
  __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  unsigned __int64 *v18; // rax
  _QWORD *v19; // rdi
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rbp
  __int32 v34; // r12d
  __m128 *result; // rax
  __int16 v36; // dx
  __int64 v37; // rax
  __m128 *v38; // [rsp+8h] [rbp-20h] BYREF

  v16 = *(_QWORD *)(a2 + 16);
  if ( !v16 )
  {
    v37 = sub_1DAD2E0(a1, *(unsigned __int16 **)(a2 + 24), nullptr, a3, a4, a5, a6, a7, a8, a9, a10, a12, a13, a14);
    if ( v37 != 1 )
    {
      v32 = *a1;
      v33 = v37 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) )
      {
        result = (__m128 *)a2;
        if ( *(_QWORD *)(a2 + 24) == v33 )
          return result;
      }
      goto LABEL_11;
    }
    return (__m128 *)(&dword_0 + 1);
  }
  v17 = *(_QWORD *)(v16 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v16 + 56) & 4) != 0 )
    v17 = *(_QWORD *)(v17 + 32);
  v18 = sub_1D99A60(a1, v17, a3, a4);
  if ( !v18 )
    return (__m128 *)(&dword_0 + 1);
  v19 = (_QWORD *)*a1;
  v20 = *(_QWORD *)(v16 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v16 + 40) & 7) != 0 )
    v20 = 0;
  v23 = sub_1867010(v19, 0, v18, *(_DWORD *)(v16 + 64), *(unsigned int *)(v16 + 24), v20);
  if ( !v23 )
    return (__m128 *)(&dword_0 + 1);
  sub_B94AD0(*(__m128i **)(*a1 + 544), v23, v21, v22, v24, v25);
  if ( *(char *)(v23 + 28) < 0 )
    return (__m128 *)(&dword_0 + 1);
  v31 = sub_1DAD2E0(a1, *(unsigned __int16 **)(a2 + 24), nullptr, a3, a4, a5, a6, v29, v30, a9, a10, v26, v27, v28);
  if ( v31 == 1 )
    return (__m128 *)(&dword_0 + 1);
  v32 = *a1;
  v33 = v31 & 0xFFFFFFFFFFFFFFFELL;
LABEL_11:
  v34 = *(_DWORD *)(a2 + 8);
  result = (__m128 *)sub_EEE9A0(32, *(_QWORD **)(v32 + 248), 8u);
  v36 = result->m128_i16[0] & 0xFE00;
  LOBYTE(v36) = -3;
  result->m128_i16[0] = v36;
  if ( unk_2CD7484 )
  {
    v38 = result;
    sub_EE9B50(253);
    result = v38;
  }
  v38 = (__m128 *)v33;
  result->m128_i32[2] = v34;
  result[1] = _mm_loadh_ps((const double *)&v38);
  return result;
}
