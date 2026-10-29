__m128i *__fastcall sub_D76A0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __m128i *v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  if ( *(_DWORD *)(a1 + 64) <= 1u )
    goto LABEL_16;
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL);
  if ( *(_DWORD *)(v1 + 352) == 1 && !**(_DWORD **)(v1 + 344) )
    return *(__m128i **)(*(_QWORD *)(a1 + 528) + 8LL);
  v2 = sub_68140(a1, 1, 1);
  *(_DWORD *)(v2 + 24) |= 2u;
  v3 = (__m128i *)v2;
  if ( !*(_DWORD *)(a1 + 64) )
LABEL_16:
    sub_CE6C0();
  **(_DWORD **)(**(_QWORD **)(a1 + 528) + 368LL) = 1;
  v4 = *(_DWORD **)(v1 + 344);
  v5 = &v4[*(_QWORD *)(v1 + 352)];
  if ( v4 == v5 )
    goto LABEL_17;
  while ( *v4 )
  {
    if ( v5 == ++v4 )
      goto LABEL_17;
  }
  if ( v5 == v4 )
  {
LABEL_17:
    if ( !under_debugger )
      sub_37EA20(52659);
    BUG();
  }
  *v4 = 1;
  v6 = v3[22].m128i_i64[0];
  v7 = v3[21].m128i_i64[1];
  if ( v3[22].m128i_i64[1] < (unsigned __int64)(v6 + 1) )
  {
    v12 = qvector_reserve();
    v3[21].m128i_i64[1] = v12;
    v7 = v12;
    v6 = v3[22].m128i_i64[0];
  }
  *(_DWORD *)(v7 + 4 * v6) = 0;
  v8 = v3[23].m128i_i64[1];
  ++v3[22].m128i_i64[0];
  v9 = v3[23].m128i_i64[0];
  if ( v3[24].m128i_i64[0] < (unsigned __int64)(v8 + 1) )
  {
    v11 = qvector_reserve();
    v3[23].m128i_i64[0] = v11;
    v9 = v11;
    v8 = v3[23].m128i_i64[1];
  }
  *(_DWORD *)(v9 + 4 * v8) = 2;
  v3[4].m128i_i32[3] = 3;
  ++v3[23].m128i_i64[1];
  v3[2] = _mm_unpacklo_epi64(
            (__m128i)*(unsigned __int64 *)(a1 + 40),
            (__m128i)(unsigned __int64)(*(_QWORD *)(a1 + 40) + 1LL));
  return v3;
}
