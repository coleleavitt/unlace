__int64 __fastcall sub_7C5E30(__int64 a1, __int64 a2)
{
  __int64 v2; // r14

  if ( *(_DWORD *)a2 )
  {
    v2 = 0;
    while ( 1 )
    {
      if ( (_DWORD)v2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * v2) == -2 )
          goto LABEL_7;
LABEL_4:
        ++v2;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        if ( (unsigned int)v2 >= *(_DWORD *)a2 )
          return a1;
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4 * v2) != -2 )
          goto LABEL_4;
LABEL_7:
        ++v2;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( (unsigned int)v2 >= *(_DWORD *)a2 )
          return a1;
      }
    }
  }
  return a1;
}

