__int64 __fastcall CoinParam::printLongHelp(CoinParamUtils **this)
{
  __int64 result; // rax
  __int64 v2; // rax
  std::ostream *v3; // rbx
  _BYTE *v4; // rbp
  char v5; // si
  std::ostream *v6; // rdi
  std::ostream *v7; // rax
  _BYTE *v8; // rbx
  __int64 (__fastcall *v9)(__int64, unsigned int); // rax
  __int64 (__fastcall *v10)(__int64, unsigned int); // rax

  if ( !(unsigned int)std::string::compare((std::string *)(this + 18), "") )
  {
    if ( !(unsigned int)std::string::compare((std::string *)(this + 17), "") )
      CoinParamUtils::printIt((CoinParamUtils *)"No help provided.", "");
    else
      CoinParamUtils::printIt(*(this + 17), "");
  }
  else
  {
    CoinParamUtils::printIt(*(this + 18), "");
  }
  result = *((unsigned int *)this + 2);
  switch ( *((_DWORD *)this + 2) )
  {
    case 1:
      return result;
    case 2:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      v2 = std::ostream::operator<<();
      goto LABEL_8;
    case 3:
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v2 = std::ostream::_M_insert<double>();
LABEL_8:
      v3 = (std::ostream *)v2;
      std::__ostream_insert<char,std::char_traits<char>>();
      v4 = *(_BYTE **)((char *)v3 + *(_QWORD *)(*(_QWORD *)v3 - 24LL) + 240);
      if ( !v4 )
        goto LABEL_25;
      if ( v4[56] )
      {
        v5 = v4[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v5 = 10;
        v9 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v4 + 48LL);
        if ( v9 != std::ctype<char>::do_widen )
          v5 = v9((__int64)v4, 10u);
      }
      v6 = v3;
      break;
    case 4:
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (unsigned int)std::string::compare((std::string *)(this + 10), "") )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      goto LABEL_16;
    case 5:
      return CoinParam::printKwds((CoinParam *)this);
    default:
LABEL_16:
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = *(_BYTE **)((char *)&std::cout + *(_QWORD *)(std::cout - 24LL) + 240);
      if ( !v8 )
LABEL_25:
        std::__throw_bad_cast();
      if ( v8[56] )
      {
        v5 = v8[67];
      }
      else
      {
        std::ctype<char>::_M_widen_init();
        v5 = 10;
        v10 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v8 + 48LL);
        if ( v10 != std::ctype<char>::do_widen )
          v5 = v10((__int64)v8, 10u);
      }
      v6 = (std::ostream *)&std::cout;
      break;
  }
  v7 = (std::ostream *)std::ostream::put(v6, v5);
  return std::ostream::flush(v7);
}

