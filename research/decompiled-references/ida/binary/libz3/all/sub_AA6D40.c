__int64 __fastcall sub_AA6D40(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rbp
  int v3; // r14d
  __int64 v4; // rcx
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 *v7; // [rsp+8h] [rbp-40h]

  result = std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *(__int64 **)(a1 + 8696);
  if ( v2 )
  {
    result = (__int64)&v2[*((unsigned int *)v2 - 1)];
    v7 = (__int64 *)result;
    if ( (__int64 *)result != v2 )
    {
      v3 = 0;
      do
      {
        result = *v2;
        if ( *v2 )
        {
          result = *(unsigned int *)(result - 4);
          if ( (_DWORD)result )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            v4 = *v2;
            if ( *v2 )
            {
              v5 = v4 + 8LL * *(unsigned int *)(v4 - 4);
              if ( v5 != v4 )
              {
                v6 = *v2;
                do
                {
                  v6 += 8;
                  std::__ostream_insert<char,std::char_traits<char>>();
                  std::ostream::_M_insert<unsigned long>();
                }
                while ( v5 != v6 );
              }
            }
            result = std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        ++v3;
        ++v2;
      }
      while ( v7 != v2 );
    }
  }
  return result;
}

