__m128i *__fastcall sub_56B9A0(const __m128i *a1)
{
  size_t v2; // rbp
  __int8 *v3; // rsi
  void *v4; // rdi
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __m128i *v7; // rbp
  unsigned int v8; // edx
  volatile signed __int32 *v9; // rax
  size_t v11; // rdi
  void *v12; // rcx
  void *v13; // rax
  __m128i v14; // xmm2
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __m128i v16[4]; // [rsp+10h] [rbp-48h] BYREF

  v2 = 8LL * a1[2].m128i_u32[1] + 80;
  v3 = nullptr;
  v4 = off_8C52B8(v2);
  if ( ((unsigned __int8)a1 & 1) == 0 )
    v3 = &a1->m128i_i8[-8 * a1[2].m128i_u32[1]];
  v5 = memcpy(v4, v3, v2);
  v6 = a1[2].m128i_u32[1];
  v7 = (__m128i *)&v5[v6];
  if ( (_DWORD)v6 )
  {
    v8 = 0;
    do
    {
      v9 = (volatile signed __int32 *)v5[v8];
      if ( ((unsigned __int8)v9 & 1) == 0 )
      {
        if ( !*v9 )
          __assert_fail("self.ptr->ref_count > 0", "lib/src/./subtree.c", 0x22Bu, "ts_subtree_retain");
        _InterlockedAdd(v9, 1u);
        if ( !*v9 )
          __assert_fail("self.ptr->ref_count != 0", "lib/src/./subtree.c", 0x22Du, "ts_subtree_retain");
        LODWORD(v6) = a1[2].m128i_i32[1];
      }
      ++v8;
    }
    while ( v8 < (unsigned int)v6 );
  }
  else if ( (a1[2].m128i_i8[12] & 0x40) != 0 )
  {
    v11 = a1[4].m128i_u32[2];
    v12 = (void *)a1[3].m128i_i64[0];
    v15 = _mm_loadu_si128(a1 + 3);
    v16[0] = _mm_loadu_si128(a1 + 4);
    if ( (unsigned int)v11 > 0x18 )
    {
      v13 = off_8C52B8(v11);
      v12 = memcpy(v13, (const void *)a1[3].m128i_i64[0], a1[4].m128i_u32[2]);
    }
    v15.m128i_i64[0] = (__int64)v12;
    v14 = _mm_load_si128(&v15);
    v7[4] = _mm_load_si128(v16);
    v7[3] = v14;
  }
  v7->m128i_i32[0] = 1;
  return v7;
}
