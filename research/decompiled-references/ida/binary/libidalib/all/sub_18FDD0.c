__m128i *__fastcall sub_18FDD0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __m128i *v4; // rbx
  __m128i si128; // xmm0
  size_t v7; // r12
  void *v8; // rax
  void *v9; // rax
  __m128i v10[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = operator new(0x20u);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v4 = (__m128i *)v1;
  *(_OWORD *)(v1 + 16) = 0;
  *(_QWORD *)v1 = &off_23D2A8;
  si128 = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
  *(_QWORD *)(v1 + 8) = 0;
  if ( v2 )
  {
    v7 = 8 * v2;
    v10[0] = si128;
    v8 = (void *)qalloc_or_throw();
    v9 = memcpy(v8, *(const void **)(a1 + 8), v7);
    si128 = _mm_load_si128(v10);
    v3 = (__int64)v9;
  }
  v4->m128i_i64[1] = v3;
  v4[1] = si128;
  return v4;
}

