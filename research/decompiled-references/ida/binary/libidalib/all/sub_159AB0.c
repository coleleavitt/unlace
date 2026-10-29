__int8 *__fastcall sub_159AB0(__m128i *a1, const __m128i *a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r12
  __int8 *result; // rax
  unsigned __int64 v6; // r12
  const void *v7; // rbp
  void *v8; // rax
  const void *v9; // r14
  void *v10; // rax

  if ( a1[2].m128i_i64[1] )
  {
    qfree();
    a1[2].m128i_i64[1] = 0;
  }
  if ( a1[3].m128i_i64[0] )
  {
    a1[3].m128i_i64[1] = 0;
    qfree();
    a1[3].m128i_i64[0] = 0;
    a1[4].m128i_i64[0] = 0;
  }
  if ( a1[4].m128i_i64[1] )
  {
    a1[5].m128i_i64[0] = 0;
    qfree();
    a1[4].m128i_i64[1] = 0;
    a1[5].m128i_i64[1] = 0;
  }
  if ( a2 != a1 )
  {
    if ( a1[2].m128i_i64[1] )
    {
      qfree();
      a1[2].m128i_i64[1] = 0;
    }
    *a1 = _mm_loadu_si128(a2);
    a1[1] = _mm_loadu_si128(a2 + 1);
    a1[2].m128i_i32[0] = a2[2].m128i_i32[0];
    v3 = a2[2].m128i_i64[1];
    if ( v3 )
      a1[2].m128i_i64[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( &a1[3] != &a2[3] )
  {
    v4 = a2[3].m128i_u64[1];
    if ( v4 > 1 )
    {
      v9 = (const void *)a2[3].m128i_i64[0];
      v10 = (void *)a1[3].m128i_i64[0];
      if ( a1[4].m128i_i64[0] < v4 )
      {
        v10 = (void *)qvector_reserve();
        a1[3].m128i_i64[0] = (__int64)v10;
      }
      a1[3].m128i_i64[1] = v4;
      memmove(v10, v9, v4 - 1);
      *(_BYTE *)(a1[3].m128i_i64[0] + v4 - 1) = 0;
    }
    else
    {
      a1[3].m128i_i64[1] = 0;
    }
  }
  result = &a2[4].m128i_i8[8];
  if ( &a1[4].m128i_u64[1] != &a2[4].m128i_u64[1] )
  {
    v6 = a2[5].m128i_u64[0];
    if ( v6 > 1 )
    {
      v7 = (const void *)a2[4].m128i_i64[1];
      v8 = (void *)a1[4].m128i_i64[1];
      if ( a1[5].m128i_i64[1] < v6 )
      {
        v8 = (void *)qvector_reserve();
        a1[4].m128i_i64[1] = (__int64)v8;
      }
      a1[5].m128i_i64[0] = v6;
      memmove(v8, v7, v6 - 1);
      result = (__int8 *)a1[4].m128i_i64[1];
      result[v6 - 1] = 0;
    }
    else
    {
      a1[5].m128i_i64[0] = 0;
    }
  }
  return result;
}

