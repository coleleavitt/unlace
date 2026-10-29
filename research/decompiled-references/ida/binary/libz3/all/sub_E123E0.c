void __fastcall __noreturn sub_E123E0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  std::ostream *v3; // rbx
  _BYTE *v4; // rbp
  char v5; // si
  std::ostream *v6; // rax
  void *exception; // rax
  __int64 (__fastcall *v8)(__int64, unsigned int); // rax

  if ( *(_BYTE *)(a2 + 258) )
  {
    v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
    if ( v2 == sub_305010 )
      v3 = *(std::ostream **)(a2 + 408);
    else
      v3 = (std::ostream *)v2(a2);
    std::__ostream_insert<char,std::char_traits<char>>();
    v4 = *(_BYTE **)((char *)v3 + *(_QWORD *)(*(_QWORD *)v3 - 24LL) + 240);
    if ( !v4 )
      std::__throw_bad_cast();
    if ( v4[56] )
    {
      v5 = v4[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v5 = 10;
      v8 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v4 + 48LL);
      if ( v8 != sub_26BE90 )
        v5 = v8((__int64)v4, 10u);
    }
    v6 = (std::ostream *)std::ostream::put(v3, v5);
    std::ostream::flush(v6);
  }
  exception = __cxa_allocate_exception(1u);
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'stop_parser_exception, nullptr);
}

