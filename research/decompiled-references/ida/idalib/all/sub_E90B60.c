__m128i *__fastcall sub_E90B60(_QWORD *a1, const __m128i *a2)
{
  __m128i *v2; // rbp
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+8h] [rbp-C0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v10[21]; // [rsp+20h] [rbp-A8h] BYREF

  v8 = 0;
  ptr[0] = v10;
  v10[0] = a2->m128i_i64[1];
  v10[1] = a2[1].m128i_i64[0];
  ptr[1] = (void *)0x2000000004LL;
  v2 = (__m128i *)sub_2223360(a1 + 131, ptr, &v8, off_2B4BAF0);
  if ( !v2 )
  {
    v6 = a1[294];
    a1[304] += 24LL;
    v2 = (__m128i *)((v6 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= (unsigned __int64)&v2[1].m128i_u64[1] && v6 )
      a1[294] = (char *)v2 + 24;
    else
      v2 = (__m128i *)sub_986170((__int64)(a1 + 294), 24, 24, 3, v3, v4);
    *v2 = _mm_loadu_si128(a2);
    v7 = v8;
    v2[1].m128i_i64[0] = a2[1].m128i_i64[0];
    sub_2223210(a1 + 131, v2, v7, off_2B4BAF0);
  }
  if ( ptr[0] != v10 )
    free(ptr[0]);
  return v2;
}
