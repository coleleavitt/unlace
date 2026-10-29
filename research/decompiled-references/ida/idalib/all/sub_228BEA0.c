__int64 __fastcall sub_228BEA0(size_t *a1, size_t *a2)
{
  const char *v2; // r12
  std::_V2 *v3; // rdi
  unsigned int v4; // r13d
  void *v6; // [rsp+0h] [rbp-168h] BYREF
  __m128i si128; // [rsp+8h] [rbp-160h]
  _BYTE v8[136]; // [rsp+18h] [rbp-150h] BYREF
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __m128i v10; // [rsp+A8h] [rbp-C0h]
  _BYTE v11[176]; // [rsp+B8h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v6 = v8;
  v10 = si128;
  ptr = v11;
  v2 = (const char *)sub_2253CC0(a2, &v6);
  v3 = (std::_V2 *)sub_2253CC0(a1, &ptr);
  if ( symlink((const char *)v3, v2) == -1 )
  {
    std::_V2::generic_category(v3);
    v4 = *__errno_location();
  }
  else
  {
    v4 = 0;
    std::_V2::system_category(v3);
  }
  if ( ptr != v11 )
    free(ptr);
  if ( v6 != v8 )
    free(v6);
  return v4;
}
