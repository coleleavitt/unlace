__int64 __fastcall sub_6464F0(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r14d
  int v3; // ebx
  __int64 i; // r12

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 - 4);
    std::__ostream_insert<char,std::char_traits<char>>();
    if ( v2 - 1 >= 0 )
    {
      v3 = 0;
      for ( i = 8LL * (unsigned int)(v2 - 1); ; i -= 8 )
      {
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + i) )
          std::ostream::_M_insert<unsigned long>();
        else
          std::__ostream_insert<char,std::char_traits<char>>();
        if ( ++v3 == v2 )
          break;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  else
  {
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

