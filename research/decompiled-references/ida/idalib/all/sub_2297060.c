void __fastcall sub_2297060(size_t *a1)
{
  unsigned __int64 v1; // rdx
  const char *v2; // rbp
  pthread_t v3; // rax
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  _BYTE v6[96]; // [rsp+18h] [rbp-60h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  ptr = v6;
  v2 = (const char *)sub_2253CC0(a1, &ptr);
  if ( v1 > 0xF )
    v2 += v1 - 15;
  v3 = pthread_self();
  pthread_setname_np(v3, v2);
  if ( ptr != v6 )
    free(ptr);
}
