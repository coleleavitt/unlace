void __fastcall sub_1400730(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // rcx
  __int64 v3; // r8
  const __m128i *v4; // rax
  __int64 m128i_i64; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  const __m128i *v10; // rcx
  const __m128i *v11; // rbp
  __int64 v12; // rbx
  void *v13; // rdi

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    v4 = v2 + 1;
    m128i_i64 = (__int64)v2[3].m128i_i64;
    v6 = (unsigned __int64)&v2[5].m128i_u64[1] + ((v3 - (_QWORD)v2 - 72) & 0xFFFFFFFFFFFFFFF8LL);
    do
    {
      a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
      v10 = (const __m128i *)v4[-1].m128i_i64[0];
      if ( v10 == v4 )
      {
        a2[1] = _mm_loadu_si128(v4);
      }
      else
      {
        a2->m128i_i64[0] = (__int64)v10;
        a2[1].m128i_i64[0] = v4->m128i_i64[0];
      }
      a2->m128i_i64[1] = v4[-1].m128i_i64[1];
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4[-1].m128i_i64[1] = 0;
      v4->m128i_i8[0] = 0;
      a2[2].m128i_i64[0] = (__int64)a2[3].m128i_i64;
      v7 = v4[1].m128i_i64[0];
      if ( v7 == m128i_i64 )
      {
        a2[3] = _mm_loadu_si128(v4 + 2);
      }
      else
      {
        a2[2].m128i_i64[0] = v7;
        a2[3].m128i_i64[0] = v4[2].m128i_i64[0];
      }
      v8 = v4[1].m128i_i64[1];
      v4 = (const __m128i *)((char *)v4 + 72);
      a2 = (__m128i *)((char *)a2 + 72);
      a2[-2].m128i_i64[0] = v8;
      v9 = v4[-2].m128i_i64[1];
      v4[-4].m128i_i64[1] = m128i_i64;
      m128i_i64 += 72;
      v4[-3].m128i_i64[0] = 0;
      v4[-3].m128i_i8[8] = 0;
      a2[-1].m128i_i64[1] = v9;
    }
    while ( v4 != (const __m128i *)v6 );
    v11 = *(const __m128i **)a1;
    v12 = *(_QWORD *)a1 + 72LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v12 )
    {
      do
      {
        while ( 1 )
        {
          v12 -= 72;
          v13 = *(void **)(v12 + 32);
          if ( v13 != (void *)(v12 + 48) )
            operator delete(v13);
          if ( *(_QWORD *)v12 == v12 + 16 )
            break;
          operator delete(*(void **)v12);
          if ( (const __m128i *)v12 == v11 )
            return;
        }
      }
      while ( (const __m128i *)v12 != v11 );
    }
  }
}
