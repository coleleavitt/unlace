void __fastcall sub_9D4E40(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbp
  _QWORD v5[2]; // [rsp+10h] [rbp-1D8h] BYREF
  _BYTE v6[32]; // [rsp+20h] [rbp-1C8h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v8[416]; // [rsp+48h] [rbp-1A0h] BYREF

  if ( *(_WORD *)(a2 + 4) )
  {
    std::ostringstream::basic_ostringstream(v7);
    sub_1606360(v5, a3, *(_QWORD *)(a1 + 24), 0, 0, 0);
    sub_160E8B0(v7, v5);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::operator<<<std::char_traits<char>>();
    sub_18572D0(v6);
    exception = (char **)__cxa_allocate_exception(0x28u);
    std::stringbuf::str(v5, v8);
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v5);
    sub_233E40((__int64)v5);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
}

