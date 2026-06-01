__int64 __fastcall sub_228C110(size_t *a1, size_t *a2)
{
  std::_V2 *v2; // r12
  const char *v3; // rax
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
  v2 = (std::_V2 *)sub_2253CC0(a1, &v6);
  v3 = (const char *)sub_2253CC0(a2, &ptr);
  if ( rename((const char *)v2, v3) == -1 )
  {
    std::_V2::generic_category(v2);
    v4 = *__errno_location();
  }
  else
  {
    v4 = 0;
    std::_V2::system_category(v2);
  }
  if ( ptr != v11 )
    free(ptr);
  if ( v6 != v8 )
    free(v6);
  return v4;
}
