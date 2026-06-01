__m128i *__fastcall sub_D21A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __m128i *v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rax

  if ( *(_DWORD *)(a1 + 64) <= 1u )
    goto LABEL_16;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL);
  if ( *(_DWORD *)(v4 + 352) == 1 && !**(_DWORD **)(v4 + 344) )
    return *(__m128i **)(*(_QWORD *)(a1 + 528) + 8LL);
  v5 = sub_68AC0(a1, 1, 1, a4);
  *(_DWORD *)(v5 + 24) |= 2u;
  v6 = (__m128i *)v5;
  if ( !*(_DWORD *)(a1 + 64) )
LABEL_16:
    sub_CF110();
  **(_DWORD **)(**(_QWORD **)(a1 + 528) + 368LL) = 1;
  v7 = *(_DWORD **)(v4 + 344);
  v8 = &v7[*(_QWORD *)(v4 + 352)];
  if ( v7 == v8 )
    goto LABEL_17;
  while ( *v7 )
  {
    if ( v8 == ++v7 )
      goto LABEL_17;
  }
  if ( v8 == v7 )
  {
LABEL_17:
    if ( !under_debugger )
      sub_383060(52659);
    BUG();
  }
  *v7 = 1;
  v9 = v6[22].m128i_i64[0];
  v10 = v6[21].m128i_i64[1];
  if ( v6[22].m128i_i64[1] < (unsigned __int64)(v9 + 1) )
  {
    v15 = qvector_reserve((__int64)&v6[21].m128i_i64[1], v10, v9 + 1, 4);
    v6[21].m128i_i64[1] = v15;
    v10 = v15;
    v9 = v6[22].m128i_i64[0];
  }
  *(_DWORD *)(v10 + 4 * v9) = 0;
  v11 = v6[23].m128i_i64[1];
  ++v6[22].m128i_i64[0];
  v12 = v6[23].m128i_i64[0];
  if ( v6[24].m128i_i64[0] < (unsigned __int64)(v11 + 1) )
  {
    v14 = qvector_reserve((__int64)v6[23].m128i_i64, v12, v11 + 1, 4);
    v6[23].m128i_i64[0] = v14;
    v12 = v14;
    v11 = v6[23].m128i_i64[1];
  }
  *(_DWORD *)(v12 + 4 * v11) = 2;
  v6[4].m128i_i32[3] = 3;
  ++v6[23].m128i_i64[1];
  v6[2] = _mm_unpacklo_epi64(
            (__m128i)*(unsigned __int64 *)(a1 + 40),
            (__m128i)(unsigned __int64)(*(_QWORD *)(a1 + 40) + 1LL));
  return v6;
}
