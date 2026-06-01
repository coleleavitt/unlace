__int64 __fastcall sub_228BB80(size_t *a1)
{
  std::_V2 *v1; // rdi
  unsigned int v2; // r12d
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-B0h]
  _BYTE v6[160]; // [rsp+18h] [rbp-A0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v6;
  v1 = (std::_V2 *)sub_2253CC0(a1, &ptr);
  if ( chdir((const char *)v1) == -1 )
  {
    std::_V2::generic_category(v1);
    v2 = *__errno_location();
  }
  else
  {
    v2 = 0;
    std::_V2::system_category(v1);
  }
  if ( ptr != v6 )
    free(ptr);
  return v2;
}
