__int64 __fastcall sub_228C1E0(size_t *a1, int a2)
{
  std::_V2 *v2; // r12
  std::_V2 *v3; // rdi
  unsigned int v4; // r12d
  struct stat v6; // [rsp+0h] [rbp-148h] BYREF
  void *ptr; // [rsp+90h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-B0h]
  _BYTE v9[160]; // [rsp+A8h] [rbp-A0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v9;
  v2 = (std::_V2 *)sub_2253CC0(a1, &ptr);
  v3 = v2;
  if ( access((const char *)v2, dword_26FB4C8[a2]) == -1 )
  {
    std::_V2::generic_category(v2);
    v4 = *__errno_location();
  }
  else if ( a2 == 2
         && ((v3 = (std::_V2 *)((char *)&dword_0 + 1), __xstat((int)&dword_0 + 1, (const char *)v2, &v6))
          || (v6.st_mode & 0xF000) != 0x8000) )
  {
    v4 = 13;
    std::_V2::generic_category((std::_V2 *)((char *)&dword_0 + 1));
  }
  else
  {
    v4 = 0;
    std::_V2::system_category(v3);
  }
  if ( ptr != v9 )
    free(ptr);
  return v4;
}
