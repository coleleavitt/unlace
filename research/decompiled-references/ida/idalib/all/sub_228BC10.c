__int64 __fastcall sub_228BC10(size_t *a1, char a2, __mode_t a3)
{
  std::_V2 *v4; // rdi
  unsigned int v5; // r12d
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-C0h]
  _BYTE v9[176]; // [rsp+18h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v9;
  v4 = (std::_V2 *)sub_2253CC0(a1, &ptr);
  if ( mkdir((const char *)v4, a3) != -1 || (v5 = *__errno_location(), v5 == 17) && a2 )
  {
    v5 = 0;
    std::_V2::system_category(v4);
  }
  else
  {
    std::_V2::generic_category(v4);
  }
  if ( ptr != v9 )
    free(ptr);
  return v5;
}
