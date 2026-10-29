void __fastcall sub_1F74280(_QWORD *a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-C0h]
  _BYTE v7[176]; // [rsp+18h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v7;
  sub_A1FE50(&ptr, a2, &a2[a3]);
  sub_1F6E1D0(a1, (__int64)&ptr);
  sub_1F740F0((unsigned __int64)ptr, si128.m128i_i64[0], a4);
  if ( ptr != v7 )
    free(ptr);
}
