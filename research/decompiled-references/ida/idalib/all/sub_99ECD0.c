__int64 __fastcall sub_99ECD0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 *v12; // rax
  bool v13; // zf
  __int64 v15; // rax
  __m128i v16; // [rsp+8h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 16);
  v16 = _mm_loadu_si128(a1 + 8);
  if ( v7 )
    sub_99D480((__int64)a1, v7, 1, 0, a5, a6);
  v8 = a1[1].m128i_i64[0];
  if ( !v8 )
    v8 = sub_999AE0((__int64)a1, v7, a3, a4, a5, a6);
  if ( (unsigned __int8)sub_99C080(a1, (_WORD *)a2) )
  {
    v15 = a1[22].m128i_i64[0];
    if ( v15 )
      *(_QWORD *)(v15 + 8) = v8;
  }
  v12 = *(unsigned __int64 **)(v8 + 8);
  if ( (unsigned __int64)v12 >= *(_QWORD *)(v8 + 16) )
  {
    sub_999590((const __m128i **)v8, (_QWORD *)(a1->m128i_i64[1] + 32), 1u, v9, v10, v11);
    v12 = *(unsigned __int64 **)(v8 + 8);
  }
  *v12 = a2 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v12[1] = 1;
  *(_QWORD *)(v8 + 8) += 16LL;
  v13 = a1[20].m128i_i8[0] == 0;
  *(_QWORD *)(v8 + 24) = a2;
  if ( v13 )
    a1[1].m128i_i64[0] = 0;
  else
    v8 = 0;
  a1[8].m128i_i64[0] = v16.m128i_i64[0];
  a1[8].m128i_i32[2] = v16.m128i_i32[2];
  return v8;
}
