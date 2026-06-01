unsigned __int64 __fastcall sub_220C3E0(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  _QWORD *v3; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __m128i v11; // [rsp+18h] [rbp-50h]
  __m128i v12; // [rsp+28h] [rbp-40h]

  v2 = a2 - (_QWORD)a1;
  v3 = a1;
  if ( (unsigned __int64)(a2 - (_QWORD)a1) <= 0x40 )
    return sub_2012F20(a1, a2 - (_QWORD)a1, 0xFF51AFD7ED558CCDLL);
  v9 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CC0);
  v11 = _mm_load_si128((const __m128i *)&xmmword_23A8CD0);
  v12 = _mm_load_si128((const __m128i *)&xmmword_23A8CE0);
  do
  {
    v6 = v3;
    v3 += 8;
    sub_9B6F20(&v9, v6);
  }
  while ( (_QWORD *)((char *)a1 + (v2 & 0xFFFFFFFFFFFFFFC0LL)) != v3 );
  if ( (v2 & 0x3F) != 0 )
    sub_9B6F20(&v9, (_QWORD *)(a2 - 64));
  v7 = v9
     + 0xB492B66FBE98F273LL * ((v2 >> 47) ^ v2)
     - 0x622015F714C7D297LL
     * (((0x9DDFEA08EB382D69LL
        * (((0x9DDFEA08EB382D69LL * (v12.m128i_i64[1] ^ v11.m128i_i64[1])) >> 47)
         ^ (0x9DDFEA08EB382D69LL * (v12.m128i_i64[1] ^ v11.m128i_i64[1]))
         ^ v12.m128i_i64[1])) >> 47)
      ^ (0x9DDFEA08EB382D69LL
       * (((0x9DDFEA08EB382D69LL * (v12.m128i_i64[1] ^ v11.m128i_i64[1])) >> 47)
        ^ (0x9DDFEA08EB382D69LL * (v12.m128i_i64[1] ^ v11.m128i_i64[1]))
        ^ v12.m128i_i64[1])));
  v8 = 0x9DDFEA08EB382D69LL
     * (v7
      ^ (si128.m128i_i64[1]
       - 0x4B6D499041670D8DLL * (si128.m128i_i64[0] ^ ((unsigned __int64)si128.m128i_i64[0] >> 47))
       - 0x622015F714C7D297LL
       * ((0x9DDFEA08EB382D69LL
         * (((0x9DDFEA08EB382D69LL * (v12.m128i_i64[0] ^ v11.m128i_i64[0])) >> 47)
          ^ (0x9DDFEA08EB382D69LL * (v12.m128i_i64[0] ^ v11.m128i_i64[0]))
          ^ v12.m128i_i64[0]))
        ^ ((0x9DDFEA08EB382D69LL
          * (((0x9DDFEA08EB382D69LL * (v12.m128i_i64[0] ^ v11.m128i_i64[0])) >> 47)
           ^ (0x9DDFEA08EB382D69LL * (v12.m128i_i64[0] ^ v11.m128i_i64[0]))
           ^ v12.m128i_i64[0])) >> 47))));
  return 0x9DDFEA08EB382D69LL
       * ((0x9DDFEA08EB382D69LL * ((v8 >> 47) ^ v8 ^ v7)) ^ ((0x9DDFEA08EB382D69LL * ((v8 >> 47) ^ v8 ^ v7)) >> 47));
}
