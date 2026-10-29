void __fastcall sub_FE9470(__int64 a1, __m128i *a2)
{
  const __m128i *v2; // r10
  __int64 v3; // r9
  const __m128i *v4; // rax
  __int64 m128i_i64; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  const __m128i *v14; // r9
  const __m128i *v15; // rbp
  __int64 v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi

  v2 = *(const __m128i **)a1;
  v3 = *(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    v4 = v2 + 1;
    m128i_i64 = (__int64)v2[7].m128i_i64;
    v6 = (__int64)v2[5].m128i_i64;
    v7 = (__int64)v2[3].m128i_i64;
    v8 = (unsigned __int64)v2[10].m128i_u64 + ((v3 - (_QWORD)v2 - 144) & 0xFFFFFFFFFFFFFFF0LL);
    do
    {
      a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
      v14 = (const __m128i *)v4[-1].m128i_i64[0];
      if ( v14 == v4 )
      {
        a2[1] = _mm_loadu_si128(v4);
      }
      else
      {
        a2->m128i_i64[0] = (__int64)v14;
        a2[1].m128i_i64[0] = v4->m128i_i64[0];
      }
      a2->m128i_i64[1] = v4[-1].m128i_i64[1];
      v4[-1].m128i_i64[0] = (__int64)v4;
      v4[-1].m128i_i64[1] = 0;
      v4->m128i_i8[0] = 0;
      a2[2].m128i_i64[0] = (__int64)a2[3].m128i_i64;
      v9 = v4[1].m128i_i64[0];
      if ( v9 == v7 )
      {
        a2[3] = _mm_loadu_si128(v4 + 2);
      }
      else
      {
        a2[2].m128i_i64[0] = v9;
        a2[3].m128i_i64[0] = v4[2].m128i_i64[0];
      }
      a2[2].m128i_i64[1] = v4[1].m128i_i64[1];
      v4[1].m128i_i64[0] = v7;
      v4[1].m128i_i64[1] = 0;
      v4[2].m128i_i8[0] = 0;
      a2[4].m128i_i64[0] = (__int64)a2[5].m128i_i64;
      v10 = v4[3].m128i_i64[0];
      if ( v10 == v6 )
      {
        a2[5] = _mm_loadu_si128(v4 + 4);
      }
      else
      {
        a2[4].m128i_i64[0] = v10;
        a2[5].m128i_i64[0] = v4[4].m128i_i64[0];
      }
      a2[4].m128i_i64[1] = v4[3].m128i_i64[1];
      v4[3].m128i_i64[0] = v6;
      v4[3].m128i_i64[1] = 0;
      v4[4].m128i_i8[0] = 0;
      a2[6].m128i_i64[0] = (__int64)a2[7].m128i_i64;
      v11 = v4[5].m128i_i64[0];
      if ( v11 == m128i_i64 )
      {
        a2[7] = _mm_loadu_si128(v4 + 6);
      }
      else
      {
        a2[6].m128i_i64[0] = v11;
        a2[7].m128i_i64[0] = v4[6].m128i_i64[0];
      }
      v12 = v4[5].m128i_i64[1];
      v4 += 9;
      a2 += 9;
      v6 += 144;
      v7 += 144;
      a2[-3].m128i_i64[1] = v12;
      v13 = v4[-2].m128i_i64[0];
      v4[-4].m128i_i64[0] = m128i_i64;
      m128i_i64 += 144;
      v4[-4].m128i_i64[1] = 0;
      v4[-3].m128i_i8[0] = 0;
      a2[-1].m128i_i64[0] = v13;
      a2[-1].m128i_i32[2] = v4[-2].m128i_i32[2];
    }
    while ( v4 != (const __m128i *)v8 );
    v15 = *(const __m128i **)a1;
    v16 = *(_QWORD *)a1 + 144LL * *(unsigned int *)(a1 + 8);
    while ( v15 != (const __m128i *)v16 )
    {
      while ( 1 )
      {
        v16 -= 144;
        v17 = *(void **)(v16 + 96);
        if ( v17 != (void *)(v16 + 112) )
          operator delete(v17);
        v18 = *(void **)(v16 + 64);
        if ( v18 != (void *)(v16 + 80) )
          operator delete(v18);
        v19 = *(void **)(v16 + 32);
        if ( v19 != (void *)(v16 + 48) )
          operator delete(v19);
        if ( *(_QWORD *)v16 == v16 + 16 )
          break;
        operator delete(*(void **)v16);
        if ( v15 == (const __m128i *)v16 )
          return;
      }
    }
  }
}

