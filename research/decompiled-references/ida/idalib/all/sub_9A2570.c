unsigned __int64 *__fastcall sub_9A2570(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi

  if ( a1[20].m128i_i8[0] )
    return nullptr;
  v7 = sub_999B20((__int64)a1, a2, a3, a4, a5, a6);
  v10 = a1[7].m128i_i64[1];
  a1[1].m128i_i64[0] = v7;
  if ( v10 )
    sub_9999E0(v7, v10, 0, (_QWORD *)(a1->m128i_i64[1] + 32), v8, v9);
  else
    sub_999860(
      v7,
      *(_QWORD *)(a1->m128i_i64[1] + 8),
      2LL * (*(_QWORD *)(a1->m128i_i64[1] + 8) == 0),
      (_QWORD *)(a1->m128i_i64[1] + 32),
      v8,
      v9);
  return sub_9A23B0(a1, a2, 1);
}
