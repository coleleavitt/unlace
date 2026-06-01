__int64 __fastcall sub_965B20(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r13
  __int64 i; // rbx

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    v2 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        result = std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return result;
}

