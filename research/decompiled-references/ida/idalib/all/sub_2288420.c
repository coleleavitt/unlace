__int64 __fastcall sub_2288420(size_t *a1)
{
  std::_V2 *v1; // rdi
  unsigned int v2; // r12d
  struct stat v4; // [rsp+0h] [rbp-148h] BYREF
  void *ptr; // [rsp+90h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-B0h]
  _BYTE v7[160]; // [rsp+A8h] [rbp-A0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v7;
  v1 = (std::_V2 *)sub_2253CC0(a1, &ptr);
  if ( access((const char *)v1, 5) == -1 )
  {
    std::_V2::generic_category(v1);
    v2 = *__errno_location();
  }
  else if ( __xstat((int)&dword_0 + 1, (const char *)v1, &v4) || (v4.st_mode & 0xF000) != 0x8000 )
  {
    v2 = 13;
    std::_V2::generic_category((std::_V2 *)((char *)&dword_0 + 1));
  }
  else
  {
    v2 = 0;
    std::_V2::system_category((std::_V2 *)((char *)&dword_0 + 1));
  }
  if ( ptr != v7 )
    free(ptr);
  return v2;
}
