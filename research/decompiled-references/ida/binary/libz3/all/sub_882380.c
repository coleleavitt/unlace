__int64 __fastcall sub_882380(__int64 a1, __int64 a2, const char *a3, _QWORD **a4)
{
  __int64 result; // rax
  _QWORD *v6; // rbx
  _QWORD *i; // r13
  _QWORD *v8; // r15
  __int64 v9; // r14
  __int64 v10; // rbp

  if ( a3 )
  {
    strlen(a3);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  else
  {
    std::ios::clear();
  }
  result = std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *a4;
  if ( *a4 )
  {
    result = *((unsigned int *)v6 - 1);
    for ( i = &v6[result]; i != v6; result = std::__ostream_insert<char,std::char_traits<char>>() )
    {
      while ( 1 )
      {
        v8 = (_QWORD *)*v6;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( !v8 )
          break;
        ++v6;
        v9 = *(_QWORD *)(a1 + 80);
        v10 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v10, *(_QWORD *)(v9 + 1592), *v8, 3);
        result = std::__ostream_insert<char,std::char_traits<char>>();
        if ( i == v6 )
          return result;
      }
      ++v6;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

