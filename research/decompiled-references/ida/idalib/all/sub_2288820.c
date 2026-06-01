__int64 __fastcall sub_2288820(size_t *a1)
{
  const char *v1; // rax
  std::_V2 *v2; // rdi
  const char *v3; // rbp
  unsigned int v4; // r12d
  struct stat v6; // [rsp+0h] [rbp-148h] BYREF
  void *ptr; // [rsp+90h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-B0h]
  _BYTE v9[160]; // [rsp+A8h] [rbp-A0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v9;
  v1 = (const char *)sub_2253CC0(a1, &ptr);
  v2 = (std::_V2 *)((char *)&dword_0 + 1);
  v3 = v1;
  if ( !__lxstat((int)&dword_0 + 1, v1, &v6) )
  {
    if ( (v6.st_mode & 0xF000) != 0x4000 && (v6.st_mode & 0xD000) != 0x8000 )
    {
      v4 = 1;
      std::_V2::generic_category((std::_V2 *)((char *)&dword_0 + 1));
      goto LABEL_5;
    }
    v2 = (std::_V2 *)v3;
    if ( remove(v3) != -1 )
      goto LABEL_10;
  }
  v4 = *__errno_location();
  if ( v4 != 2 )
  {
    std::_V2::generic_category(v2);
  }
  else
  {
LABEL_10:
    v4 = 0;
    std::_V2::system_category(v2);
  }
LABEL_5:
  if ( ptr != v9 )
    free(ptr);
  return v4;
}
