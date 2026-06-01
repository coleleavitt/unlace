void __fastcall sub_12E5990(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // rcx
  __int64 v3; // rdx
  const __m128i *v4; // rax
  __m128i *v5; // rcx
  __m128i v6; // xmm0
  const __m128i *v7; // rdx
  void **v8; // rbp
  void **v9; // rbx

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    v4 = v2 + 1;
    v5 = &a2[5 * ((0xCCCCCCCCCCCCCCDLL * ((unsigned __int64)(v3 - (_QWORD)v2 - 80) >> 4)) & 0xFFFFFFFFFFFFFFFLL) + 5];
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
      a2 += 5;
      a2[-5].m128i_i64[1] = v4[-1].m128i_i64[1];
      v6 = _mm_loadu_si128(v4 + 1);
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4 += 5;
      v4[-6].m128i_i64[1] = 0;
      v4[-5].m128i_i8[0] = 0;
      a2[-3] = v6;
      a2[-2] = _mm_loadu_si128(v4 - 3);
      a2[-1].m128i_i64[0] = v4[-2].m128i_i64[0];
      a2[-1].m128i_i32[2] = v4[-2].m128i_i32[2];
      a2[-1].m128i_i8[12] = v4[-2].m128i_i8[12];
    }
    while ( a2 != v5 );
    v8 = *(void ***)a1;
    v9 = (void **)(*(_QWORD *)a1 + 80LL * *(unsigned int *)(a1 + 8));
    if ( *(void ***)a1 != v9 )
    {
      do
      {
        while ( 1 )
        {
          v9 -= 10;
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
