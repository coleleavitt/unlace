__int64 __fastcall sub_5678E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        const __m128i a8)
{
  __m128i v8; // xmm0
  __int64 v9; // rbp
  unsigned __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 v15; // bx
  unsigned __int16 v16; // ax
  __m128i v18; // [rsp+0h] [rbp-38h]

  v8 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = *(_QWORD *)(a8.m128i_i64[1] + 8);
  v10 = sub_5678C0(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          v8.m128i_i32[0],
          v8.m128i_i32[2],
          (unsigned __int16 *)_mm_loadu_si128(&a8).m128i_i64[0]);
  if ( v10 == 0xFFFF )
    return 0xFFFFFFFFLL;
  v15 = v10;
  v18 = _mm_loadu_si128((const __m128i *)&a7);
  v16 = sub_567610(
          a1,
          a2,
          v11,
          v12,
          v13,
          v14,
          v18.m128i_i32[0],
          v18.m128i_i32[2],
          (unsigned __int8 *)_mm_loadu_si128(&a8).m128i_i64[0]);
  return sub_562F50(v9, v15, v16);
}
