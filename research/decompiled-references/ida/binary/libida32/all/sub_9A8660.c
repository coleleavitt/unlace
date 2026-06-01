__m128i *__fastcall sub_9A8660(__m128i *a1, __int64 *a2)
{
  __int64 v3; // rax
  size_t v4; // rsi
  size_t v5; // rax
  __m128i *v6; // rax
  __int64 *v7; // rdi
  void *v9[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF

  v3 = *a2;
  v4 = *a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v3 & 2) != 0 )
  {
    sub_9A8290((__int64 *)v9, v4);
    v5 = j__strlen("!");
    v6 = (__m128i *)sub_978080(v9, 0, 0, "!", v5);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v6->m128i_i64[0] == &v6[1] )
    {
      a1[1] = _mm_loadu_si128(v6 + 1);
    }
    else
    {
      a1->m128i_i64[0] = v6->m128i_i64[0];
      a1[1].m128i_i64[0] = v6[1].m128i_i64[0];
    }
    a1->m128i_i64[1] = v6->m128i_i64[1];
    v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
    v7 = (__int64 *)v9[0];
    v6->m128i_i64[1] = 0;
    v6[1].m128i_i8[0] = 0;
    if ( v7 != &v10 )
      operator delete(v7);
    return a1;
  }
  else
  {
    sub_9A8290(a1->m128i_i64, v4);
    return a1;
  }
}

