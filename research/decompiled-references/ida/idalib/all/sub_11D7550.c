void __fastcall sub_11D7550(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // rdx
  __int64 v3; // rcx
  const __m128i *v4; // rax
  unsigned __int64 v5; // rcx
  __int8 v6; // dl
  const __m128i *v7; // rdx
  void **v8; // rbp
  void **v9; // rbx

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    v4 = v2 + 1;
    v5 = (unsigned __int64)&a2[2].m128i_u64[((unsigned __int64)(v3 - (_QWORD)v2 - 40) >> 3) + 1];
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
      a2 = (__m128i *)((char *)a2 + 40);
      a2[-2].m128i_i64[0] = v4[-1].m128i_i64[1];
      v6 = v4[1].m128i_i8[0];
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4 = (const __m128i *)((char *)v4 + 40);
      v4[-3].m128i_i64[0] = 0;
      v4[-3].m128i_i8[8] = 0;
      a2[-1].m128i_i8[8] = v6;
    }
    while ( a2 != (__m128i *)v5 );
    v8 = *(void ***)a1;
    v9 = (void **)(*(_QWORD *)a1 + 40LL * *(unsigned int *)(a1 + 8));
    if ( *(void ***)a1 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v9 -= 5;
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
