void __fastcall CoinError::print(CoinError *this, char a2)
{
  std::ostream *v2; // rbp
  _BYTE *v3; // r12
  char v4; // si
  std::ostream *v5; // rax
  std::ostream *v6; // rbp
  _BYTE *v7; // rbx
  char v8; // si
  std::ostream *v9; // rax
  __int64 (__fastcall *v10)(__int64, unsigned int); // rax
  __int64 (__fastcall *v11)(__int64, unsigned int); // rax

  if ( !a2 )
    return;
  if ( *((int *)this + 10) < 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    goto LABEL_10;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = *(_BYTE **)((char *)v2 + *(_QWORD *)(*(_QWORD *)v2 - 24LL) + 240);
  if ( !v3 )
    goto LABEL_19;
  if ( v3[56] )
  {
    v4 = v3[67];
  }
  else
  {
    std::ctype<char>::_M_widen_init();
    v4 = 10;
    v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v3 + 48LL);
    if ( v10 != std::ctype<char>::do_widen )
      v4 = v10((__int64)v3, 10u);
  }
  v5 = (std::ostream *)std::ostream::put(v2, v4);
  std::ostream::flush(v5);
  if ( (unsigned int)std::string::compare((CoinError *)((char *)this + 24), "") )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
LABEL_10:
    v6 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
    v7 = *(_BYTE **)((char *)v6 + *(_QWORD *)(*(_QWORD *)v6 - 24LL) + 240);
    if ( v7 )
    {
      if ( v7[56] )
      {
        v8 = v7[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v8 = 10;
        v11 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v7 + 48LL);
        if ( v11 != std::ctype<char>::do_widen )
          v8 = v11((__int64)v7, 10u);
      }
      v9 = (std::ostream *)std::ostream::put(v6, v8);
      std::ostream::flush(v9);
      return;
    }
LABEL_19:
    std::__throw_bad_cast();
  }
}

