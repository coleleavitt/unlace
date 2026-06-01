__int64 __fastcall sub_7E6020(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbp
  _DWORD *v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v7; // [rsp+8h] [rbp-40h]

  v2 = *(_DWORD **)(a1 + 40);
  v3 = &v2[*(unsigned int *)(a1 + 32)];
  while ( v3 != v2 )
  {
    if ( *v2 == -2 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
    }
    ++v2;
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v4 = *(_QWORD *)(a1 + 48);
  v5 = 16LL * *(unsigned int *)(a1 + 36);
  v7 = v4 + v5;
  while ( v7 != v4 )
  {
    v4 += 16;
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  if ( *(_DWORD *)a1 != -2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( *(_DWORD *)a1 == -2 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
    }
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
  }
  if ( *(_QWORD *)(a1 + 24) )
    std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

