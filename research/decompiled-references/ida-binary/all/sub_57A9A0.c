__m128i *__fastcall sub_57A9A0(
        __m128i *a1,
        __m128i si128,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 a8,
        __int128 a9)
{
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128i v20; // xmm0
  __m128i v22; // [rsp+20h] [rbp-88h]
  __m128i v23; // [rsp+40h] [rbp-68h] BYREF
  __m128i v24; // [rsp+50h] [rbp-58h] BYREF
  __m128i v25; // [rsp+60h] [rbp-48h] BYREF
  __m128i v26[3]; // [rsp+70h] [rbp-38h] BYREF

  v9 = *((_QWORD *)&a9 + 1);
  v10 = a9;
  sub_57A940((__int64)&v23, *((__int64 **)&a9 + 1));
  v15 = v24.m128i_i64[0];
  if ( v24.m128i_i64[0] == v10 )
  {
    *a1 = 0;
    a1[1] = 0;
    return a1;
  }
  else
  {
    while ( 1 )
    {
      v24.m128i_i64[0] = v15;
      *(_QWORD *)&a9 = v10;
      sub_568310(
        (__int64)&v25,
        v9,
        v11,
        v12,
        v13,
        v14,
        si128,
        _mm_loadu_si128((const __m128i *)&a8),
        (__int128)_mm_load_si128(&v23),
        (__int128)_mm_load_si128(&v24));
      v15 = v26[0].m128i_i64[0];
      if ( v10 == v26[0].m128i_i64[0] )
        break;
      v22 = _mm_load_si128(&v25);
      if ( sub_567740(
             (__int64)&v25,
             v9,
             v16,
             v17,
             v18,
             v19,
             v22.m128i_i32[0],
             v22.m128i_i32[2],
             _mm_load_si128(v26).m128i_i64[0]) )
      {
        break;
      }
      si128 = _mm_load_si128(v26);
      v23 = _mm_load_si128(&v25);
      v24 = si128;
    }
    v20 = _mm_load_si128(&v24);
    *a1 = _mm_load_si128(&v23);
    a1[1] = v20;
    return a1;
  }
}
