__int64 __fastcall sub_956430(__int64 a1, __int64 a2, double a3)
{
  __int64 result; // rax
  char v5; // dl
  __int64 v6; // rdi

  result = 1;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 215LL) )
  {
    if ( (unsigned int)sub_180B130(a1) > 9 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v6 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v6, "(smt.mbqi)\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v5 = sub_AE8CE0(*(_QWORD *)(a1 + 56));
    result = 0;
    if ( !v5 )
      return (unsigned int)(unsigned __int8)sub_AE0350(*(_QWORD *)(a1 + 56), a2) + 1;
  }
  return result;
}

