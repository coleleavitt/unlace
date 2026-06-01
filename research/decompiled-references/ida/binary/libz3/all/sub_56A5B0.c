__int64 __fastcall sub_56A5B0(__int64 a1, const char *a2, double a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rdi
  void *exception; // rbx

  v3 = a1;
  if ( (unsigned __int8)sub_186AF30() )
  {
    a1 = *(_QWORD *)(a1 + 8);
    sub_56A450(a1, a2, a3);
  }
  result = sub_186AF30();
  if ( (_BYTE)result )
  {
    if ( (unsigned int)sub_180B130(a1) )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v3 + 96LL))(
          v3,
          "Ran out of memory while filling table of size: ");
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v3 + 104LL))(v3, " rows ");
        v5 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v5, " bytes\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v3 + 96LL))(
          v3,
          "Ran out of memory while filling table of size: ");
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)v3 + 104LL))(v3, " rows ");
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    exception = __cxa_allocate_exception(0x10u);
    sub_186AE40(exception);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'out_of_memory_error, (void (*)(void *))sub_4DD990);
  }
  return result;
}

