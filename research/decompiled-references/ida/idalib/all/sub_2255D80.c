__int64 __fastcall sub_2255D80(char *a1, size_t a2)
{
  __int64 v2; // rbp
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  _BYTE v6[96]; // [rsp+18h] [rbp-60h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  ptr = v6;
  v2 = sub_22553E0(a1, a2, 1, (char **)&ptr);
  if ( ptr != v6 )
    free(ptr);
  return v2;
}
