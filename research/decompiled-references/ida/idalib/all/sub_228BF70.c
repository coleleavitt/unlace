__int64 __fastcall sub_228BF70(size_t *a1, char a2)
{
  const char *v2; // rax
  std::_V2 *v3; // rdi
  const char *v4; // rbp
  unsigned int v5; // r12d
  struct stat v7; // [rsp+0h] [rbp-158h] BYREF
  void *ptr; // [rsp+90h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+98h] [rbp-C0h]
  _BYTE v10[176]; // [rsp+A8h] [rbp-B0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v10;
  v2 = (const char *)sub_2253CC0(a1, &ptr);
  v3 = (std::_V2 *)((char *)&dword_0 + 1);
  v4 = v2;
  if ( !__lxstat((int)&dword_0 + 1, v2, &v7) )
  {
    if ( (v7.st_mode & 0xF000) != 0x4000 && (v7.st_mode & 0xD000) != 0x8000 )
    {
      v5 = 1;
      std::_V2::generic_category((std::_V2 *)((char *)&dword_0 + 1));
      goto LABEL_9;
    }
    v3 = (std::_V2 *)v4;
    if ( remove(v4) != -1 )
      goto LABEL_12;
  }
  v5 = *__errno_location();
  if ( v5 == 2 && a2 )
  {
LABEL_12:
    v5 = 0;
    std::_V2::system_category(v3);
  }
  else
  {
    std::_V2::generic_category(v3);
  }
LABEL_9:
  if ( ptr != v10 )
    free(ptr);
  return v5;
}
