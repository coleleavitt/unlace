__int64 __fastcall sub_DDF530(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rdi

  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *(_QWORD *)(a1 + 24);
  if ( (v2 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v2 )
      strlen(*(const char **)(a1 + 24));
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  sub_DDF470(a2, *(_DWORD *)(a1 + 12));
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL))(v3, a2);
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

