__int64 __fastcall sub_42B980(_QWORD *a1, const void **a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  const void *v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  __m128i *v8; // r12
  __m128i *v9; // r12
  size_t v10; // rax
  size_t v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __m128i *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // xmm0
  void *v23; // rdi
  size_t v24; // r13
  __int64 v25; // rax

  v3 = *a3;
  if ( *a3 >= *(_QWORD *)*a1 && v3 < *(_QWORD *)(*a1 + 8LL) )
  {
    v4 = a1[1];
    v5 = *a2;
    v6 = *(_QWORD *)(v4 + 8);
    v7 = *(_QWORD *)(v4 + 16);
    if ( v7 < v6 + 1 )
    {
      v13 = qvector_reserve(a1[1], 0, v6 + 1, 32);
      v14 = *(_QWORD *)(v4 + 8);
      v15 = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = v7;
      v16 = *(__m128i **)v4;
      v8 = (__m128i *)v13;
      v17 = v14 - 1;
      if ( v17 >= 0 )
      {
        v18 = v13;
        do
        {
          v19 = v16->m128i_i64[0];
          v18 += 32;
          v16 += 2;
          *(_QWORD *)(v18 - 32) = v19;
          v20 = v16[-2].m128i_i64[1];
          v21 = _mm_loadu_si128(v16 - 1);
          v16[-2].m128i_i64[1] = 0;
          *(_QWORD *)(v18 - 24) = v20;
          *(__m128i *)(v18 - 16) = v21;
          v16[-1].m128i_i64[1] = 0;
        }
        while ( v17-- != 0 );
        v16 = *(__m128i **)v4;
      }
      qfree(v16);
      *(_QWORD *)v4 = v8;
      v6 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v4 + 16) = v15;
    }
    else
    {
      v8 = *(__m128i **)v4;
    }
    v9 = &v8[2 * v6];
    v9->m128i_i64[1] = 0;
    v9[1] = 0;
    ++*(_QWORD *)(v4 + 8);
    v9->m128i_i64[0] = v3;
    if ( v5 && (v10 = strlen((const char *)v5), (v11 = v10) != 0) )
    {
      v23 = (void *)v9->m128i_i64[1];
      v24 = v10 + 1;
      if ( v9[1].m128i_i64[1] < v10 + 1 )
      {
        v25 = qvector_reserve(&v9->m128i_u64[1], v9->m128i_i64[1], v24, 1);
        v9->m128i_i64[1] = v25;
        v23 = (void *)v25;
      }
      v9[1].m128i_i64[0] = v24;
      memmove(v23, v5, v11);
      *(_BYTE *)(v9->m128i_i64[1] + v11) = 0;
    }
    else
    {
      v9[1].m128i_i64[0] = 0;
    }
  }
  return 0;
}
