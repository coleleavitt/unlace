void __fastcall sub_13FB7C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  const __m128i *v4; // rax
  __int64 v5; // rcx
  __int8 v6; // dl
  const __m128i *v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  void *v10; // rdi

  v2 = *a1;
  v3 = *a1 + 80LL * *((unsigned int *)a1 + 2);
  if ( *a1 != v3 )
  {
    v4 = (const __m128i *)(v2 + 24);
    v5 = a2 + 16 * (5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v3 - v2 - 80) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 5);
    do
    {
      *(_DWORD *)a2 = v4[-2].m128i_i32[2];
      *(_DWORD *)(a2 + 4) = v4[-2].m128i_i32[3];
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
      a2 += 80;
      *(_QWORD *)(a2 - 64) = v4[-1].m128i_i64[1];
      v6 = v4[1].m128i_i8[0];
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4 += 5;
      v4[-6].m128i_i64[1] = 0;
      v4[-5].m128i_i8[0] = 0;
      *(_BYTE *)(a2 - 40) = v6;
      *(_BYTE *)(a2 - 39) = v4[-4].m128i_i8[1];
      *(__m128i *)(a2 - 32) = _mm_loadu_si128((const __m128i *)((char *)v4 - 56));
      *(__m128i *)(a2 - 16) = _mm_loadu_si128((const __m128i *)((char *)v4 - 40));
    }
    while ( a2 != v5 );
    v8 = *a1;
    v9 = *a1 + 80LL * *((unsigned int *)a1 + 2);
    if ( *a1 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v9 -= 80;
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
