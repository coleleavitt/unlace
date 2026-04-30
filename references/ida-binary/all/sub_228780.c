__int64 __fastcall sub_228780(const __m128i **a1, const char *a2)
{
  const __m128i *v3; // rdi
  __int64 result; // rax
  const __m128i *i; // rbp
  __int64 v6; // r12
  __m128i *v7; // rax
  const __m128i *v8; // rdx
  unsigned __int64 v9; // r14
  __m128i v10; // xmm1
  bool v11; // r13
  const char *v12; // rsi
  __int64 v13; // rax
  const __m128i *v14; // rcx
  const __m128i *v15; // r15
  const __m128i *v16; // rdi
  __m128i si128; // xmm1
  __int64 v18; // rcx
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __m128i v22[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *a1;
  if ( v3 )
  {
    a1[1] = nullptr;
    qfree(v3, a2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  result = get_first_seg();
  for ( i = (const __m128i *)result; result; i = (const __m128i *)result )
  {
    v8 = a1[1];
    v9 = (unsigned __int64)a1[2];
    v10 = _mm_loadu_si128(i);
    v11 = (i[2].m128i_i16[6] & 0x18) == 8;
    if ( v9 >= (unsigned __int64)v8->m128i_u64 + 1 )
    {
      v6 = (__int64)*a1;
    }
    else
    {
      v12 = nullptr;
      v22[0] = v10;
      v13 = qvector_reserve(a1, 0, &v8->m128i_i8[1], 24);
      v14 = a1[1];
      v15 = a1[2];
      a1[2] = (const __m128i *)v9;
      v16 = *a1;
      si128 = _mm_load_si128(v22);
      v6 = v13;
      v18 = (__int64)&v14[-1].m128i_i64[1] + 7;
      if ( v18 >= 0 )
      {
        v19 = v13;
        do
        {
          v20 = _mm_loadu_si128(v16);
          v19 += 24;
          v16 = (const __m128i *)((char *)v16 + 24);
          *(__m128i *)(v19 - 24) = v20;
          v12 = (const char *)v16[-1].m128i_i64[1];
          *(_QWORD *)(v19 - 8) = v12;
        }
        while ( v18-- != 0 );
        v16 = *a1;
      }
      v22[0] = si128;
      qfree(v16, v12);
      *a1 = (const __m128i *)v6;
      v8 = a1[1];
      a1[2] = v15;
      v10 = _mm_load_si128(v22);
    }
    v7 = (__m128i *)(v6 + 24LL * (_QWORD)v8);
    v7[1].m128i_i8[0] = v11;
    *v7 = v10;
    a1[1] = (const __m128i *)((char *)a1[1] + 1);
    result = get_next_seg(i->m128i_i64[0]);
  }
  return result;
}
