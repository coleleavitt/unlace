__int64 __fastcall sub_5BD970(__int64 a1)
{
  __int64 v1; // r15
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r12
  unsigned int v6; // r14d

  v1 = *(_QWORD *)(a1 + 112);
  result = 3LL * *(unsigned int *)(a1 + 120);
  v3 = v1 + 24LL * *(unsigned int *)(a1 + 120);
  if ( v1 != v3 )
  {
    while ( *(_QWORD *)v1 <= 1u )
    {
      v1 += 24;
      if ( v3 == v1 )
        return result;
    }
    if ( v3 != v1 )
    {
      v4 = *(_QWORD *)v1;
      do
      {
        v5 = *(_QWORD *)(v4 + 16);
        if ( (v5 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v5 )
            strlen(*(const char **)(v4 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        v6 = 0;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( *(_DWORD *)(v1 + 8) )
        {
          do
          {
            ++v6;
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          while ( v6 < *(_DWORD *)(v1 + 8) );
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        result = v1 + 24;
        if ( v3 == v1 + 24 )
          break;
        while ( 1 )
        {
          v4 = *(_QWORD *)result;
          v1 = result;
          if ( *(_QWORD *)result > 1u )
            break;
          result += 24;
          if ( v3 == result )
            return result;
        }
      }
      while ( v3 != result );
    }
  }
  return result;
}

