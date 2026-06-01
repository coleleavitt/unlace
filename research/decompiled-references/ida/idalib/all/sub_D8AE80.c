void __fastcall sub_D8AE80(unsigned __int8 ***a1, __int64 a2)
{
  unsigned __int8 v2; // cl
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __m128i si128; // [rsp+8h] [rbp-50h]
  _BYTE v5[64]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_BYTE *)(a2 + 12);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  ptr = v5;
  sub_220BA90(a2, (unsigned int)&ptr, 10, v2 ^ 1, 0, 1, 0);
  sub_AEC220(*a1, ptr, si128.m128i_i64[0]);
  if ( ptr != v5 )
    free(ptr);
}
