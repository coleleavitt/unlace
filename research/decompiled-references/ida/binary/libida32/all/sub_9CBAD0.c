void __fastcall sub_9CBAD0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  const __m128i *v4; // rax
  unsigned __int64 v5; // rcx
  __int8 v6; // dl
  const __m128i *v7; // rdx
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  void *v10; // rdi

  v2 = *a1;
  v3 = *a1 + ((unsigned __int64)*((unsigned int *)a1 + 2) << 6);
  if ( *a1 != v3 )
  {
    v4 = (const __m128i *)(v2 + 40);
    v5 = a2 + ((v3 - v2 - 64) & 0xFFFFFFFFFFFFFFC0LL) + 64;
    do
    {
      *(_QWORD *)a2 = v4[-3].m128i_i64[1];
      *(_DWORD *)(a2 + 8) = v4[-2].m128i_i32[0];
      *(_QWORD *)(a2 + 12) = *(__int64 *)((char *)v4[-2].m128i_i64 + 4);
      *(_DWORD *)(a2 + 20) = v4[-2].m128i_i32[3];
      *(_QWORD *)(a2 + 24) = a2 + 40;
      v7 = (const __m128i *)v4[-1].m128i_i64[0];
      if ( v4 == v7 )
      {
        *(__m128i *)(a2 + 40) = _mm_loadu_si128(v4);
      }
      else
      {
        *(_QWORD *)(a2 + 24) = v7;
        *(_QWORD *)(a2 + 40) = v4->m128i_i64[0];
      }
      a2 += 64;
      *(_QWORD *)(a2 - 32) = v4[-1].m128i_i64[1];
      v6 = v4[1].m128i_i8[0];
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4 += 4;
      v4[-5].m128i_i64[1] = 0;
      v4[-4].m128i_i8[0] = 0;
      *(_BYTE *)(a2 - 8) = v6;
    }
    while ( a2 != v5 );
    v8 = *a1;
    v9 = *a1 + ((unsigned __int64)*((unsigned int *)a1 + 2) << 6);
    if ( *a1 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v9 -= 64LL;
          v10 = *(void **)(v9 + 24);
          if ( v10 == (void *)(v9 + 40) )
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

