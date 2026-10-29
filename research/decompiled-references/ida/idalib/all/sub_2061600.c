__int64 __fastcall sub_2061600(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int128 a8,
        __int128 a9,
        char a10)
{
  __int64 v13; // rbx
  char v14; // cl
  __int32 v15; // r13d
  __int64 v16; // rax
  int v17; // r14d
  int v18; // r13d
  int v19; // esi
  int v21; // eax
  char v22; // [rsp+0h] [rbp-E8h]
  __int64 v23; // [rsp+0h] [rbp-E8h]
  __int64 v24; // [rsp+8h] [rbp-E0h]
  __m128i v25; // [rsp+30h] [rbp-B8h]
  __m128i v26; // [rsp+50h] [rbp-98h] BYREF
  __int64 v27; // [rsp+60h] [rbp-88h]
  __m128i v28; // [rsp+80h] [rbp-68h]
  __m128i v29; // [rsp+90h] [rbp-58h]

  v13 = *(_QWORD *)(a1 + 8);
  v26 = 0;
  v14 = a10;
  v27 = 0;
  v28 = _mm_loadu_si128((const __m128i *)&a8);
  v29 = _mm_loadu_si128(&a7);
  v25 = _mm_loadu_si128((const __m128i *)&a9);
  if ( v28.m128i_i8[8] )
  {
    v15 = a7.m128i_i32[0];
    v16 = 0;
    if ( (_QWORD)a8 )
    {
      v24 = a5;
      v22 = a10;
      v16 = sub_20B4D60(v13, v29.m128i_i64[1], a8);
      a5 = v24;
      v14 = v22;
    }
    v26.m128i_i32[0] = v15;
    v26.m128i_i64[1] = v16;
    LOBYTE(v27) = 1;
  }
  v17 = 0;
  if ( v14 )
  {
    v23 = a5;
    v21 = sub_20B4D60(v13, v25.m128i_i64[0], v25.m128i_i64[1]);
    a5 = v23;
    v17 = v21;
  }
  v18 = 0;
  if ( a5 )
    v18 = sub_20B4D60(v13, a4, a5);
  v19 = 0;
  if ( a3 )
    v19 = sub_20B4D60(v13, a2, a3);
  a7 = _mm_load_si128(&v26);
  return sub_2086420(v13, v19, v18, v17, 0, 1, a7.m128i_i32[0], a7.m128i_i64[1], v27);
}
