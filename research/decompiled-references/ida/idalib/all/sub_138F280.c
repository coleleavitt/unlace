void __fastcall sub_138F280(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // r9
  __int64 v3; // r8
  const __m128i *v4; // rax
  __int64 m128i_i64; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  __int32 v9; // r8d
  __int64 v10; // r8
  __int64 v11; // r8
  const __m128i *v12; // r8
  const __m128i *v13; // rbp
  __int64 v14; // rbx
  void *v15; // rdi
  void *v16; // rdi

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 120LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    v4 = v2 + 1;
    m128i_i64 = (__int64)v2[6].m128i_i64;
    v6 = (__int64)v2[3].m128i_i64;
    v7 = (unsigned __int64)&v2[8].m128i_u64[15
                                          * ((0xEEEEEEEEEEEEEEFLL * ((unsigned __int64)(v3 - (_QWORD)v2 - 120) >> 3))
                                           & 0x1FFFFFFFFFFFFFFFLL)
                                          + 1];
    do
    {
      a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
      v12 = (const __m128i *)v4[-1].m128i_i64[0];
      if ( v12 == v4 )
      {
        a2[1] = _mm_loadu_si128(v4);
      }
      else
      {
        a2->m128i_i64[0] = (__int64)v12;
        a2[1].m128i_i64[0] = v4->m128i_i64[0];
      }
      a2->m128i_i64[1] = v4[-1].m128i_i64[1];
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4[-1].m128i_i64[1] = 0;
      v4->m128i_i8[0] = 0;
      a2[2].m128i_i64[0] = (__int64)a2[3].m128i_i64;
      v8 = v4[1].m128i_i64[0];
      if ( v8 == v6 )
      {
        a2[3] = _mm_loadu_si128(v4 + 2);
      }
      else
      {
        a2[2].m128i_i64[0] = v8;
        a2[3].m128i_i64[0] = v4[2].m128i_i64[0];
      }
      a2[2].m128i_i64[1] = v4[1].m128i_i64[1];
      v9 = v4[3].m128i_i32[0];
      v4[1].m128i_i64[0] = v6;
      v4[1].m128i_i64[1] = 0;
      v4[2].m128i_i8[0] = 0;
      a2[4].m128i_i32[0] = v9;
      a2[4].m128i_i32[1] = v4[3].m128i_i32[1];
      a2[4].m128i_i32[2] = v4[3].m128i_i32[2];
      a2[5].m128i_i64[0] = (__int64)a2[6].m128i_i64;
      v10 = v4[4].m128i_i64[0];
      if ( v10 == m128i_i64 )
      {
        a2[6] = _mm_loadu_si128(v4 + 5);
      }
      else
      {
        a2[5].m128i_i64[0] = v10;
        a2[6].m128i_i64[0] = v4[5].m128i_i64[0];
      }
      v11 = v4[4].m128i_i64[1];
      v4 = (const __m128i *)((char *)v4 + 120);
      a2 = (__m128i *)((char *)a2 + 120);
      v6 += 120;
      a2[-2].m128i_i64[0] = v11;
      LODWORD(v11) = v4[-2].m128i_i32[2];
      v4[-4].m128i_i64[1] = m128i_i64;
      m128i_i64 += 120;
      v4[-3].m128i_i64[0] = 0;
      v4[-3].m128i_i8[8] = 0;
      a2[-1].m128i_i32[2] = v11;
    }
    while ( v4 != (const __m128i *)v7 );
    v13 = *(const __m128i **)a1;
    v14 = *(_QWORD *)a1 + 120LL * *(unsigned int *)(a1 + 8);
    while ( v13 != (const __m128i *)v14 )
    {
      while ( 1 )
      {
        v14 -= 120;
        v15 = *(void **)(v14 + 80);
        if ( v15 != (void *)(v14 + 96) )
          operator delete(v15);
        v16 = *(void **)(v14 + 32);
        if ( v16 != (void *)(v14 + 48) )
          operator delete(v16);
        if ( *(_QWORD *)v14 == v14 + 16 )
          break;
        operator delete(*(void **)v14);
        if ( v13 == (const __m128i *)v14 )
          return;
      }
    }
  }
}
