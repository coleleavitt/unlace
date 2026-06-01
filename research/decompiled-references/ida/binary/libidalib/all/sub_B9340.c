__int64 __fastcall sub_B9340(const __m128i **a1)
{
  __int64 result; // rax
  const __m128i *i; // rbp
  __int64 v4; // r12
  __m128i *v5; // rax
  const __m128i *v6; // rdx
  unsigned __int64 v7; // r14
  __m128i v8; // xmm1
  bool v9; // r13
  __int64 v10; // rax
  const __m128i *v11; // rcx
  const __m128i *v12; // r15
  const __m128i *v13; // rdi
  __m128i si128; // xmm1
  __int64 v15; // rcx
  __int64 v16; // rdx
  __m128i v17; // xmm0
  __m128i v19[4]; // [rsp+0h] [rbp-48h] BYREF

  if ( *a1 )
  {
    a1[1] = nullptr;
    qfree();
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  result = get_first_seg();
  for ( i = (const __m128i *)result; result; i = (const __m128i *)result )
  {
    v6 = a1[1];
    v7 = (unsigned __int64)a1[2];
    v8 = _mm_loadu_si128(i);
    v9 = (i[2].m128i_i16[6] & 0x18) == 8;
    if ( v7 >= (unsigned __int64)v6->m128i_u64 + 1 )
    {
      v4 = (__int64)*a1;
    }
    else
    {
      v19[0] = v8;
      v10 = qvector_reserve();
      v11 = a1[1];
      v12 = a1[2];
      a1[2] = (const __m128i *)v7;
      v13 = *a1;
      si128 = _mm_load_si128(v19);
      v4 = v10;
      v15 = (__int64)&v11[-1].m128i_i64[1] + 7;
      if ( v15 >= 0 )
      {
        v16 = v10;
        do
        {
          v17 = _mm_loadu_si128(v13);
          v16 += 24;
          v13 = (const __m128i *)((char *)v13 + 24);
          *(__m128i *)(v16 - 24) = v17;
          *(_QWORD *)(v16 - 8) = v13[-1].m128i_i64[1];
        }
        while ( v15-- != 0 );
      }
      v19[0] = si128;
      qfree();
      *a1 = (const __m128i *)v4;
      v6 = a1[1];
      a1[2] = v12;
      v8 = _mm_load_si128(v19);
    }
    v5 = (__m128i *)(v4 + 24LL * (_QWORD)v6);
    v5[1].m128i_i8[0] = v9;
    *v5 = v8;
    a1[1] = (const __m128i *)((char *)a1[1] + 1);
    result = get_next_seg();
  }
  return result;
}

