__int64 __fastcall sub_C15D90(__int64 a1, double a2, double a3, __m128 a4)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rdi

  sub_14B6450(a1 + 24);
  v5 = a1 + 40;
  sub_14B64E0(a1 + 24, a1 + 40);
  v6 = (_QWORD *)(a1 + 2216);
  sub_C13EE0(v6, a2, a3, a4);
  result = sub_180B130(v6);
  if ( (unsigned int)result > 9 )
  {
    if ( (unsigned __int8)sub_186A530(a2) )
    {
      sub_186A4C0(a2);
      sub_180B150(v6, v5);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_C0F760(a1);
      v8 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      return sub_186A500(v8, ")\n");
    }
    else
    {
      sub_180B150(v6, v5);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_C0F760(a1);
      std::ostream::_M_insert<unsigned long>();
      return std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

