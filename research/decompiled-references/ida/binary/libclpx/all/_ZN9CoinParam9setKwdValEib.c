void __fastcall CoinParam::setKwdVal(CoinParam *this, int a2, char a3)
{
  std::ostream *v4; // r13
  _BYTE *v5; // r12
  char v6; // si
  std::ostream *v7; // rax
  __int64 (__fastcall *v8)(__int64, unsigned int); // rax

  if ( a3 && *((_DWORD *)this + 28) != a2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v4 = (std::ostream *)std::__ostream_insert<char,std::char_traits<char>>();
    v5 = *(_BYTE **)((char *)v4 + *(_QWORD *)(*(_QWORD *)v4 - 24LL) + 240);
    if ( !v5 )
      std::__throw_bad_cast();
    if ( v5[56] )
    {
      v6 = v5[67];
    }
    else
    {
      std::ctype<char>::_M_widen_init();
      v6 = 10;
      v8 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v5 + 48LL);
      if ( v8 != std::ctype<char>::do_widen )
        v6 = v8((__int64)v5, 10u);
    }
    v7 = (std::ostream *)std::ostream::put(v4, v6);
    std::ostream::flush(v7);
  }
  *((_DWORD *)this + 28) = a2;
}

