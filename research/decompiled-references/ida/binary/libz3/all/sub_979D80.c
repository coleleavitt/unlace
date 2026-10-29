__int64 __fastcall sub_979D80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  _QWORD *v4; // rbx
  __int64 v5; // r14
  _QWORD *i; // r13

  v3 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(_QWORD **)v3;
  v5 = *(_QWORD *)v3 + 16LL * *(unsigned int *)(v3 + 20);
  if ( *(_QWORD *)v3 != v5 )
  {
    while ( (*v4 & 7LL) == 1 )
    {
      v4 += 2;
      if ( (_QWORD *)v5 == v4 )
        return std::__ostream_insert<char,std::char_traits<char>>();
    }
    for ( i = v4; ; i = v4 )
    {
      do
      {
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v4 = (_QWORD *)*v4;
      }
      while ( v4 );
      v4 = i + 2;
      if ( (_QWORD *)v5 == i + 2 )
        break;
      while ( (*v4 & 7LL) == 1 )
      {
        v4 += 2;
        if ( (_QWORD *)v5 == v4 )
          return std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

