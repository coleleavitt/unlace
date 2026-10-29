__int64 __fastcall sub_7ABE90(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rdi

  result = sub_180B130(a1);
  if ( (unsigned int)result > 4 )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v4 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      return sub_186A500(v4, "value initialzation is not supported for theory\n");
    }
    else
    {
      sub_180B150(a1, a2);
      return std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

