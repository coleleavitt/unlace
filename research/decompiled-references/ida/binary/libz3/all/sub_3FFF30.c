__int64 __fastcall sub_3FFF30(__int64 a1, const char *a2, double a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  std::ostream *v5; // rbx
  std::ostream *v6; // rbx

  v3 = *(_QWORD *)(a1 + 704);
  if ( v3 )
  {
    v3 += 16;
    a2 = "Propagating\n\n";
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  result = sub_180B130(v3);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v5 = (std::ostream *)sub_180B150(v3, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::flush(v5);
      return sub_186A500(v5, "Propagating: ");
    }
    else
    {
      v6 = (std::ostream *)sub_180B150(v3, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      return std::ostream::flush(v6);
    }
  }
  return result;
}

