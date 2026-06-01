void __fastcall sub_1F76AA0(_QWORD *a1, unsigned int a2, unsigned __int8 *a3, __int64 a4, _BYTE *a5, __int64 a6)
{
  void *ptr; // [rsp+0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-D0h]
  _BYTE v10[192]; // [rsp+18h] [rbp-C0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v10;
  sub_A1FE50(&ptr, a5, &a5[a6]);
  sub_1F6E1D0(a1, (__int64)&ptr);
  sub_1F76680(a1[2], a2, a3, a4, (unsigned __int64)ptr, si128.m128i_i64[0]);
  if ( ptr != v10 )
    free(ptr);
}
