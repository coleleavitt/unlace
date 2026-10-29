void __fastcall sub_10E9550(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // rcx
  __int64 v3; // rdx
  const __m128i *v4; // rax
  unsigned __int64 v5; // rcx
  const __m128i *v6; // rdx
  void **v7; // rbp
  void **v8; // rbx

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    v4 = v2 + 1;
    v5 = (unsigned __int64)a2[2].m128i_u64 + ((v3 - (_QWORD)v2 - 32) & 0xFFFFFFFFFFFFFFE0LL);
    do
    {
      while ( 1 )
      {
        a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
        v6 = (const __m128i *)v4[-1].m128i_i64[0];
        if ( v6 == v4 )
          break;
        a2->m128i_i64[0] = (__int64)v6;
        a2 += 2;
        a2[-1].m128i_i64[0] = v4->m128i_i64[0];
        a2[-2].m128i_i64[1] = v4[-1].m128i_i64[1];
        v4[-1].m128i_i64[0] = (__int64)v4;
        v4 += 2;
        v4[-3].m128i_i64[1] = 0;
        v4[-2].m128i_i8[0] = 0;
        if ( a2 == (__m128i *)v5 )
          goto LABEL_5;
      }
      a2 += 2;
      a2[-1] = _mm_loadu_si128(v4);
      a2[-2].m128i_i64[1] = v4[-1].m128i_i64[1];
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4 += 2;
      v4[-3].m128i_i64[1] = 0;
      v4[-2].m128i_i8[0] = 0;
    }
    while ( (__m128i *)v5 != a2 );
LABEL_5:
    v7 = *(void ***)a1;
    v8 = (void **)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
    if ( *(void ***)a1 != v8 )
    {
      do
      {
        while ( 1 )
        {
          v8 -= 4;
          if ( *v8 == v8 + 2 )
            break;
          operator delete(*v8);
          if ( v8 == v7 )
            return;
        }
      }
      while ( v8 != v7 );
    }
  }
}
