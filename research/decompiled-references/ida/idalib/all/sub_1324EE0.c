void __fastcall sub_1324EE0(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // rdx
  unsigned __int64 v3; // rcx
  const __m128i *v4; // rax
  const __m128i *v5; // r8
  __int64 m128i_i64; // rdx
  const __m128i *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  const __m128i *v10; // rbp
  unsigned __int64 v11; // rbx
  void *v12; // rdi
  __m128i v13; // xmm1

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6);
  if ( *(_QWORD *)a1 != v3 )
  {
    v4 = v2 + 1;
    v5 = (const __m128i *)(v3 + 16);
    m128i_i64 = (__int64)v2[3].m128i_i64;
    do
    {
      a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
      v7 = (const __m128i *)v4[-1].m128i_i64[0];
      if ( v7 != v4 )
      {
LABEL_4:
        a2->m128i_i64[0] = (__int64)v7;
        a2[1].m128i_i64[0] = v4->m128i_i64[0];
        goto LABEL_5;
      }
      while ( 1 )
      {
        a2[1] = _mm_loadu_si128(v4);
LABEL_5:
        a2->m128i_i64[1] = v4[-1].m128i_i64[1];
        v4[-1].m128i_i64[0] = (__int64)v4;
        v4[-1].m128i_i64[1] = 0;
        v4->m128i_i8[0] = 0;
        a2[2].m128i_i64[0] = (__int64)a2[3].m128i_i64;
        v8 = v4[1].m128i_i64[0];
        if ( v8 != m128i_i64 )
          break;
        v13 = _mm_loadu_si128(v4 + 2);
        v4 += 4;
        a2 += 4;
        a2[-1] = v13;
        a2[-2].m128i_i64[1] = v4[-3].m128i_i64[1];
        v4[-3].m128i_i64[0] = m128i_i64;
        m128i_i64 += 64;
        v4[-3].m128i_i64[1] = 0;
        v4[-2].m128i_i8[0] = 0;
        if ( v5 == v4 )
          goto LABEL_7;
        a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
        v7 = (const __m128i *)v4[-1].m128i_i64[0];
        if ( v7 != v4 )
          goto LABEL_4;
      }
      a2[2].m128i_i64[0] = v8;
      v9 = v4[2].m128i_i64[0];
      v4 += 4;
      a2 += 4;
      a2[-1].m128i_i64[0] = v9;
      a2[-2].m128i_i64[1] = v4[-3].m128i_i64[1];
      v4[-3].m128i_i64[0] = m128i_i64;
      m128i_i64 += 64;
      v4[-3].m128i_i64[1] = 0;
      v4[-2].m128i_i8[0] = 0;
    }
    while ( v4 != v5 );
LABEL_7:
    v10 = *(const __m128i **)a1;
    v11 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6);
    if ( *(_QWORD *)a1 != v11 )
    {
      do
      {
        while ( 1 )
        {
          v11 -= 64LL;
          v12 = *(void **)(v11 + 32);
          if ( v12 != (void *)(v11 + 48) )
            operator delete(v12);
          if ( *(_QWORD *)v11 == v11 + 16 )
            break;
          operator delete(*(void **)v11);
          if ( (const __m128i *)v11 == v10 )
            return;
        }
      }
      while ( (const __m128i *)v11 != v10 );
    }
  }
}
