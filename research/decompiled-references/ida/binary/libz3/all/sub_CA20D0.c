void __fastcall __noreturn sub_CA20D0(_QWORD *a1, __int64 a2)
{
  char **exception; // rbx
  _QWORD v3[2]; // [rsp+0h] [rbp-1E8h] BYREF
  _BYTE v4[32]; // [rsp+10h] [rbp-1D8h] BYREF
  _BYTE v5[16]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v6[8]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v7[416]; // [rsp+48h] [rbp-1A0h] BYREF

  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v5);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v3, a2, *a1, 0, 0, 0);
  sub_160E8B0(v6, v3);
  sub_18572D0(v4);
  exception = (char **)__cxa_allocate_exception(0x28u);
  std::stringbuf::str(v3, v7);
  *exception = (char *)off_1C63670;
  sub_2333C0(exception + 1, v3);
  sub_233E40((__int64)v3);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
}

