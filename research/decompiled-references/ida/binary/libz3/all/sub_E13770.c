__int64 __fastcall sub_E13770(__int64 a1, const char **a2)
{
  __int64 result; // rax
  void (*v3)(void); // rax
  const char *v4; // rbx
  std::ostream *v5; // rbx
  _BYTE *v6; // rbp
  char v7; // si
  std::ostream *v8; // rax
  __int64 (__fastcall *v9)(__int64, unsigned int); // rax

  result = 0;
  if ( *a2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)a1 + 48LL);
    if ( (char *)v3 != (char *)sub_25D2E0 )
      v3();
    std::__ostream_insert<char,std::char_traits<char>>();
    v4 = *a2;
    if ( ((unsigned __int8)*a2 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v4 )
        strlen(v4);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    v5 = (std::ostream *)std::ostream::operator<<();
    v6 = *(_BYTE **)((char *)v5 + *(_QWORD *)(*(_QWORD *)v5 - 24LL) + 240);
    if ( !v6 )
      std::__throw_bad_cast();
    if ( v6[56] )
    {
      v7 = v6[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v7 = 10;
      v9 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 48LL);
      if ( v9 != sub_26BE90 )
        v7 = v9((__int64)v6, 10u);
    }
    v8 = (std::ostream *)std::ostream::put(v5, v7);
    return std::ostream::flush(v8);
  }
  return result;
}

