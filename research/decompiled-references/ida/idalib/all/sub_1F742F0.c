void __fastcall sub_1F742F0(_QWORD *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rbx
  char *v8; // r13
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-C0h]
  _BYTE v11[176]; // [rsp+18h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v11;
  sub_A1FE50(&ptr, a2, &a2[a3]);
  sub_1F6E1D0(a1, (__int64)&ptr);
  v7 = si128.m128i_i64[0];
  v8 = (char *)ptr;
  sub_9B9C90(a4, si128.m128i_i64[0]);
  sub_13C13C0(a5, (char *)(*a5 + a5[1]), v8, &v8[v7]);
  if ( ptr != v11 )
    free(ptr);
}
