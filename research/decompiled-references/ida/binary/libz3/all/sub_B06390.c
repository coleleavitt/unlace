__int64 __fastcall sub_B06390(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 result; // rax
  __int64 *v5; // r12
  int v6; // ebp
  unsigned int v7; // ebp
  __int64 i; // rax

  result = *(_QWORD *)(a1 + 64) + 48LL * a3;
  v5 = *(__int64 **)(result + 8LL * a4);
  if ( v5 )
  {
    v6 = a4 + 2 * a3;
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v6 != -2 )
      std::ostream::_M_insert<unsigned long>();
    v7 = 0;
    std::__ostream_insert<char,std::char_traits<char>>();
    for ( i = *v5; *v5; i = *v5 )
    {
      if ( v7 >= *(_DWORD *)(i - 4) )
        break;
      if ( *(_DWORD *)(*(_QWORD *)(i + 8LL * v7) + 8LL) == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      ++v7;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    return std::__ostream_insert<char,std::char_traits<char>>();
  }
  return result;
}

