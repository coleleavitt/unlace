__int8 *__fastcall sub_3428F0(__m128i *a1, const __m128i *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int8 *result; // rax
  unsigned __int64 v10; // r12
  const void *v11; // rbp
  void *v12; // rax
  const void *v13; // r14
  void *v14; // rax

  v3 = a1[2].m128i_i64[1];
  if ( v3 )
  {
    qfree(v3, a2->m128i_i8);
    a1[2].m128i_i64[1] = 0;
  }
  v4 = a1[3].m128i_i64[0];
  if ( v4 )
  {
    a1[3].m128i_i64[1] = 0;
    qfree(v4, a2->m128i_i8);
    a1[3].m128i_i64[0] = 0;
    a1[4].m128i_i64[0] = 0;
  }
  v5 = a1[4].m128i_i64[1];
  if ( v5 )
  {
    a1[5].m128i_i64[0] = 0;
    qfree(v5, a2->m128i_i8);
    a1[4].m128i_i64[1] = 0;
    a1[5].m128i_i64[1] = 0;
  }
  if ( a2 != a1 )
  {
    v6 = a1[2].m128i_i64[1];
    if ( v6 )
    {
      qfree(v6, a2->m128i_i8);
      a1[2].m128i_i64[1] = 0;
    }
    *a1 = _mm_loadu_si128(a2);
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2].m128i_i32[0] = a2[2].m128i_i32[0];
    v7 = a2[2].m128i_i64[1];
    if ( v7 )
      a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( &a1[3] != &a2[3] )
  {
    v8 = a2[3].m128i_u64[1];
    if ( v8 > 1 )
    {
      v13 = (const void *)a2[3].m128i_i64[0];
      v14 = (void *)a1[3].m128i_i64[0];
      if ( a1[4].m128i_i64[0] < v8 )
      {
        v14 = (void *)qvector_reserve(&a1[3], a1[3].m128i_i64[0], a2[3].m128i_i64[1], 1);
        a1[3].m128i_i64[0] = (__int64)v14;
      }
      a1[3].m128i_i64[1] = v8;
      memmove(v14, v13, v8 - 1);
      *(_BYTE *)(a1[3].m128i_i64[0] + v8 - 1) = 0;
    }
    else
    {
      a1[3].m128i_i64[1] = 0;
    }
  }
  result = &a2[4].m128i_i8[8];
  if ( &a1[4].m128i_u64[1] != &a2[4].m128i_u64[1] )
  {
    v10 = a2[5].m128i_u64[0];
    if ( v10 > 1 )
    {
      v11 = (const void *)a2[4].m128i_i64[1];
      v12 = (void *)a1[4].m128i_i64[1];
      if ( a1[5].m128i_i64[1] < v10 )
      {
        v12 = (void *)qvector_reserve(&a1[4].m128i_u64[1], a1[4].m128i_i64[1], v10, 1);
        a1[4].m128i_i64[1] = (__int64)v12;
      }
      a1[5].m128i_i64[0] = v10;
      memmove(v12, v11, v10 - 1);
      result = (__int8 *)a1[4].m128i_i64[1];
      result[v10 - 1] = 0;
    }
    else
    {
      a1[5].m128i_i64[0] = 0;
    }
  }
  return result;
}
