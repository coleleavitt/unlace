__int64 __fastcall sub_919060(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // r12d
  __int64 i; // rax

  result = sub_8E7030(*(_QWORD *)(a1 + 8));
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 32);
    if ( result )
    {
      result = *(unsigned int *)(result - 4);
      if ( (_DWORD)result )
      {
        v2 = 0;
        std::__ostream_insert<char,std::char_traits<char>>();
        for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(a1 + 32) )
        {
          if ( v2 >= *(_DWORD *)(i - 4) )
            break;
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v2;
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        return std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return result;
}

