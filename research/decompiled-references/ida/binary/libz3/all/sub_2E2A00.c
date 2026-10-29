void __fastcall __noreturn sub_2E2A00(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  const char *v3; // rbx
  char **exception; // rbp
  _QWORD v5[4]; // [rsp+0h] [rbp-1C8h] BYREF
  _BYTE v6[8]; // [rsp+20h] [rbp-1A8h] BYREF
  _BYTE v7[416]; // [rsp+28h] [rbp-1A0h] BYREF

  std::ostringstream::basic_ostringstream(v6);
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::operator<<<std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 && (v2 = *(unsigned int *)(a1 + 24), (unsigned int)v2 < *(_DWORD *)(v1 - 4)) )
    v3 = *(const char **)(v1 + 56 * v2 + 8);
  else
    v3 = nullptr;
  if ( ((unsigned __int8)v3 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v3 )
      strlen(v3);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::operator<<<std::char_traits<char>>();
  exception = (char **)__cxa_allocate_exception(0x28u);
  std::stringbuf::str(v5, v7);
  *exception = (char *)off_1C63128;
  sub_2333C0(exception + 1, v5);
  sub_233E40((__int64)v5);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
}

