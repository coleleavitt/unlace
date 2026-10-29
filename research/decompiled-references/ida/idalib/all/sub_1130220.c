_QWORD *__fastcall sub_1130220(_QWORD *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  void *ptr; // [rsp+0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-D0h]
  _BYTE v15[192]; // [rsp+18h] [rbp-C0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v15;
  sub_A1FE50(&ptr, a2, &a2[a3]);
  ((void (__fastcall *)(void **, __int64, __int64, __int64, __int64, __int64))sub_2289D90)(&ptr, 1, a4, a5, a6, a7);
  v10 = ptr;
  v11 = si128.m128i_i64[0];
  *a1 = a1 + 2;
  sub_112B570(a1, v10, (__int64)&v10[v11]);
  if ( ptr != v15 )
    free(ptr);
  return a1;
}
