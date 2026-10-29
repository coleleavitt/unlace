void __fastcall sub_56B2D0(void *src, unsigned __int64 a2, _QWORD *a3)
{
  size_t v4; // rdi
  __int64 v6; // r12
  void *v7; // rax
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rax

  v4 = (unsigned int)_mm_cvtsi128_si32(_mm_shuffle_epi32((__m128i)a2, 229));
  a3[1] = a2;
  *a3 = src;
  if ( (_DWORD)v4 )
  {
    v6 = (unsigned int)_mm_cvtsi128_si32((__m128i)a2);
    v7 = off_8C52B0(v4, 8u);
    *a3 = v7;
    memcpy(v7, src, 8 * v6);
    if ( (_DWORD)v6 )
    {
      v8 = 0;
      do
      {
        v9 = *(volatile signed __int32 **)(*a3 + v8);
        if ( ((unsigned __int8)v9 & 1) == 0 )
        {
          if ( !*v9 )
            __assert_fail("self.ptr->ref_count > 0", "lib/src/./subtree.c", 0x22Bu, "ts_subtree_retain");
          _InterlockedAdd(v9, 1u);
          if ( !*v9 )
            __assert_fail("self.ptr->ref_count != 0", "lib/src/./subtree.c", 0x22Du, "ts_subtree_retain");
        }
        v8 += 8;
      }
      while ( 8 * v6 != v8 );
    }
  }
}
