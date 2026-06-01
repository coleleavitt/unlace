void __fastcall sub_9C19A0(unsigned __int8 ***a1, __int64 a2)
{
  unsigned __int8 v2; // cl
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __m128i si128; // [rsp+8h] [rbp-50h]
  _BYTE v5[64]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_BYTE *)(a2 + 12);
  ptr = v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  sub_2593F40(a2, (unsigned int)&ptr, 10, v2 ^ 1, 0, 1, 0);
  sub_838D50(*a1, ptr, si128.m128i_u64[0]);
  if ( ptr != v5 )
    free(ptr);
}

