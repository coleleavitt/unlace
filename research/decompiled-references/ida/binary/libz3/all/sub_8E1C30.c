unsigned __int64 __fastcall sub_8E1C30(__int64 a1)
{
  unsigned __int64 result; // rax
  _QWORD *v2; // r15
  _QWORD *v3; // rbp

  result = *(unsigned int *)(a1 + 32);
  v2 = *(_QWORD **)(a1 + 24);
  v3 = &v2[6 * result];
  if ( v2 != v3 )
  {
    while ( *v2 <= 1u )
    {
      v2 += 6;
      if ( v3 == v2 )
        return result;
    }
    if ( v3 != v2 )
    {
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        result = (unsigned __int64)(v2 + 6);
        if ( v3 == v2 + 6 )
          break;
        while ( 1 )
        {
          v2 = (_QWORD *)result;
          if ( *(_QWORD *)result > 1u )
            break;
          result += 48LL;
          if ( v3 == (_QWORD *)result )
            return result;
        }
      }
      while ( v3 != (_QWORD *)result );
    }
  }
  return result;
}

