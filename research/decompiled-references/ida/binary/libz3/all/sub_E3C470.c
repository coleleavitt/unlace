__int64 __fastcall sub_E3C470(__int64 a1, __int64 a2, double a3)
{
  int v3; // ebp
  __int64 result; // rax
  const char *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  const char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // rbp

  v3 = a2;
  result = sub_180B130(a1);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v6 = "%";
      v7 = std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v3 == 1 )
      {
        v6 = " :status sat";
        v7 = sub_180B150(v7, "%");
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else if ( !v3 )
      {
        v6 = " :status unknown";
        v7 = sub_180B150(v7, "%");
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      if ( *(_DWORD *)(a1 + 264) )
      {
        sub_180B150(v7, v6);
        std::__ostream_insert<char,std::char_traits<char>>();
        v12 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v6 = (const char *)*(unsigned int *)(a1 + 268);
        v7 = v12;
        std::ostream::_M_insert<unsigned long>();
      }
      sub_180B150(v7, v6);
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      return sub_186A500(v8, ")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v9 = "%";
      v10 = std::ostream::_M_insert<double>();
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v3 == 1 )
      {
        v9 = " :status sat";
        v10 = sub_180B150(v10, "%");
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else if ( !v3 )
      {
        v9 = " :status unknown";
        v10 = sub_180B150(v10, "%");
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      if ( *(_DWORD *)(a1 + 264) )
      {
        sub_180B150(v10, v9);
        std::__ostream_insert<char,std::char_traits<char>>();
        v11 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v9 = (const char *)*(unsigned int *)(a1 + 268);
        v10 = v11;
        std::ostream::_M_insert<unsigned long>();
      }
      sub_180B150(v10, v9);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      return std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

