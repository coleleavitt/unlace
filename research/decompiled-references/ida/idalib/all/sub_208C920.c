void __fastcall sub_208C920(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // r8
  __int64 v3; // rcx
  const __m128i *v4; // rax
  __int64 m128i_i64; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __m128i v9; // xmm0
  const __m128i *v10; // rcx
  const __m128i *v11; // rbp
  __int64 v12; // rbx
  void *v13; // rdi

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    v4 = v2 + 1;
    m128i_i64 = (__int64)v2[3].m128i_i64;
    v6 = (unsigned __int64)v2[6].m128i_u64 + ((v3 - (_QWORD)v2 - 80) & 0xFFFFFFFFFFFFFFF0LL);
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
      v9 = _mm_loadu_si128(v4 + 3);
      v4 += 5;
      a2 += 5;
      a2[-3].m128i_i64[1] = v8;
      v4[-4].m128i_i64[0] = m128i_i64;
      m128i_i64 += 80;
      v4[-4].m128i_i64[1] = 0;
      v4[-3].m128i_i8[0] = 0;
      a2[-1] = v9;
    }
    while ( v4 != (const __m128i *)v6 );
    v11 = *(const __m128i **)a1;
    v12 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
    if ( *(_QWORD *)a1 != v12 )
    {
      do
      {
        while ( 1 )
        {
          v12 -= 80;
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
