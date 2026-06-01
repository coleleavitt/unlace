void __fastcall sub_ECCDA0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  const __m128i *v4; // rax
  __int64 v5; // rcx
  __int32 v6; // edx
  const __m128i *v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  void *v10; // rdi

  v2 = *a1;
  v3 = *a1 + 56LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v3 )
  {
    v4 = (const __m128i *)(v2 + 24);
    v5 = a2 + 56 * (((0xDB6DB6DB6DB6DB7LL * ((unsigned __int64)(v3 - v2 - 56) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1);
    do
    {
      *(_DWORD *)a2 = v4[-2].m128i_i32[2];
      *(_QWORD *)(a2 + 8) = a2 + 24;
      v7 = (const __m128i *)v4[-1].m128i_i64[0];
      if ( v4 == v7 )
      {
        *(__m128i *)(a2 + 24) = _mm_loadu_si128(v4);
      }
      else
      {
        *(_QWORD *)(a2 + 8) = v7;
        *(_QWORD *)(a2 + 24) = v4->m128i_i64[0];
      }
      a2 += 56;
      *(_QWORD *)(a2 - 40) = v4[-1].m128i_i64[1];
      v6 = v4[1].m128i_i32[0];
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4 = (const __m128i *)((char *)v4 + 56);
      v4[-4].m128i_i64[0] = 0;
      v4[-4].m128i_i8[8] = 0;
      *(_DWORD *)(a2 - 16) = v6;
      *(_QWORD *)(a2 - 12) = *(__int64 *)((char *)&v4[-3].m128i_i64[1] + 4);
      *(_DWORD *)(a2 - 4) = v4[-2].m128i_i32[1];
    }
    while ( a2 != v5 );
    v8 = *a1;
    v9 = *a1 + 56LL * *((unsigned int *)a1 + 2);
    if ( *a1 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v9 -= 56;
          v10 = *(void **)(v9 + 8);
          if ( v10 == (void *)(v9 + 24) )
            break;
          operator delete(v10);
          if ( v9 == v8 )
            return;
        }
      }
      while ( v9 != v8 );
    }
  }
}

