__int64 __fastcall sub_7C9E50(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // eax
  __int64 v6; // r13

  if ( a1 != *a3 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 232LL))(*a3);
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v6 = a3[2];
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (*(_DWORD *)(v6 + 24) == -1) + 2 * *(_DWORD *)(v6 + 28) == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      a2 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(a2, *(_QWORD *)(a1 + 1592), *(_QWORD *)v6, 3);
      return a2;
    }
    if ( v5 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1092);
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

