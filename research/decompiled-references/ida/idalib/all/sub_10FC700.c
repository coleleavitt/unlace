void __fastcall sub_10FC700(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // rdx
  __int64 v3; // rcx
  const __m128i *v4; // rax
  __m128i *v5; // rcx
  __m128i v6; // xmm0
  const __m128i *v7; // rdx
  void **v8; // rbp
  void **v9; // rbx

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    v4 = v2 + 1;
    v5 = (__m128i *)((char *)a2
                   + 56
                   * ((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v3 - (_QWORD)v2 - 56) >> 3)) & 0x1FFFFFFFFFFFFFFFLL)
                   + 56);
    do
    {
      a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
      v7 = (const __m128i *)v4[-1].m128i_i64[0];
      if ( v4 == v7 )
      {
        a2[1] = _mm_loadu_si128(v4);
      }
      else
      {
        a2->m128i_i64[0] = (__int64)v7;
        a2[1].m128i_i64[0] = v4->m128i_i64[0];
      }
      a2 = (__m128i *)((char *)a2 + 56);
      a2[-3].m128i_i64[0] = v4[-1].m128i_i64[1];
      v6 = _mm_loadu_si128(v4 + 1);
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4 = (const __m128i *)((char *)v4 + 56);
      v4[-4].m128i_i64[0] = 0;
      v4[-4].m128i_i8[8] = 0;
      *(__m128i *)((char *)a2 - 24) = v6;
      a2[-1].m128i_i32[2] = v4[-2].m128i_i32[2];
      a2[-1].m128i_i32[3] = v4[-2].m128i_i32[3];
    }
    while ( a2 != v5 );
    v8 = *(void ***)a1;
    v9 = (void **)(*(_QWORD *)a1 + 56LL * *(unsigned int *)(a1 + 8));
    if ( *(void ***)a1 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v9 -= 7;
          if ( *v9 == v9 + 2 )
            break;
          operator delete(*v9);
          if ( v9 == v8 )
            return;
        }
      }
      while ( v9 != v8 );
    }
  }
}
