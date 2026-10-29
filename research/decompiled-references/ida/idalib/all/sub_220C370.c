void __fastcall sub_220C370(__int64 a1, __int64 a2, char a3)
{
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __m128i si128; // [rsp+8h] [rbp-50h]
  _BYTE v5[64]; // [rsp+18h] [rbp-40h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  ptr = v5;
  sub_220BA90(a1, (__int64 *)&ptr, 10, a3, 0, 1, 0);
  sub_227BF10(a2, ptr, si128.m128i_i64[0]);
  if ( ptr != v5 )
    free(ptr);
}
