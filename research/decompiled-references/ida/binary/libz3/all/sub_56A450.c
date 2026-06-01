__int64 __fastcall sub_56A450(__int64 a1, const char *a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rbp

  if ( (unsigned int)sub_180B130(a1) > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v5 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      Z3_get_estimated_alloc_size_0(v5, "garbage collecting ");
      a2 = " bytes down to ";
      v6 = std::ostream::_M_insert<unsigned long long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v6, " bytes down to ");
    }
    else
    {
      v8 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      Z3_get_estimated_alloc_size_0(v8, "garbage collecting ");
      std::ostream::_M_insert<unsigned long long>();
      a2 = " bytes down to ";
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  sub_56A0A0(a1);
  result = sub_180B130(a1);
  if ( (unsigned int)result > 1 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(a1, a2);
      Z3_get_estimated_alloc_size_0(a1, a2);
      v7 = std::ostream::_M_insert<unsigned long long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      return sub_186A500(v7, " bytes\n");
    }
    else
    {
      sub_180B150(a1, a2);
      Z3_get_estimated_alloc_size_0(a1, a2);
      std::ostream::_M_insert<unsigned long long>();
      return std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

