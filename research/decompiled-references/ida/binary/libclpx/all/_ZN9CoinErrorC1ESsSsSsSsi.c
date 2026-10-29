// Alternative name is '_ZN9CoinErrorC2ESsSsSsSsi'
char *__fastcall CoinError::CoinError(
        _DWORD *a1,
        const std::string *a2,
        const std::string *a3,
        const std::string *a4,
        const std::string *a5,
        int a6)
{
  std::string *v9; // rdi
  char *result; // rax
  std::ostream *v13; // rbp
  _BYTE *v14; // r13
  char v15; // si
  std::ostream *v16; // rax
  std::ostream *v17; // r12
  _BYTE *v18; // rbp
  char v19; // si
  std::ostream *v20; // rax
  __int64 (__fastcall *v21)(__int64, unsigned int); // rax
  __int64 (__fastcall *v22)(__int64, unsigned int); // rax

  v9 = (std::string *)(a1 + 2);
  *((_QWORD *)v9 - 1) = off_4D0500;
  std::string::string(v9, a2);
  std::string::string((std::string *)(a1 + 4), a3);
  std::string::string((std::string *)(a1 + 6), a4);
  std::string::string((std::string *)(a1 + 8), a5);
  result = &CoinError::printErrors_;
  a1[10] = a6;
  if ( !CoinError::printErrors_ )
    return result;
  if ( a6 < 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v17 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
    v18 = *(_BYTE **)((char *)v17 + *(_QWORD *)(*(_QWORD *)v17 - 24LL) + 240);
    if ( !v18 )
      std::__throw_bad_cast();
    goto LABEL_9;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v14 = *(_BYTE **)((char *)v13 + *(_QWORD *)(*(_QWORD *)v13 - 24LL) + 240);
  if ( !v14 )
    std::__throw_bad_cast();
  if ( v14[56] )
  {
    v15 = v14[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v15 = 10;
    v21 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v14 + 48LL);
    if ( v21 != std::ctype<char>::do_widen )
      v15 = v21((__int64)v14, 10u);
  }
  v16 = (std::ostream *)std::ostream::put(v13, v15);
  std::ostream::flush(v16);
  result = (char *)std::string::compare((std::string *)(a1 + 6), "");
  if ( (_DWORD)result )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v17 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
    v18 = *(_BYTE **)((char *)v17 + *(_QWORD *)(*(_QWORD *)v17 - 24LL) + 240);
    if ( !v18 )
      std::__throw_bad_cast();
LABEL_9:
    if ( v18[56] )
    {
      v19 = v18[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v19 = 10;
      v22 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v18 + 48LL);
      if ( v22 != std::ctype<char>::do_widen )
        v19 = v22((__int64)v18, 10u);
    }
    v20 = (std::ostream *)std::ostream::put(v17, v19);
    return (char *)std::ostream::flush(v20);
  }
  return result;
}

