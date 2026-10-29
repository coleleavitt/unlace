__int64 __fastcall sub_B3B150(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // [rsp+Ch] [rbp-3Ch]
  int v9; // [rsp+Ch] [rbp-3Ch]

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 && *(_DWORD *)(v1 - 4)
    || (result = *(_QWORD *)(a1 + 48)) != 0 && (result = *(unsigned int *)(result - 4), (_DWORD)result) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
    {
      v4 = *(unsigned int *)(v3 - 4);
      if ( (_DWORD)v4 )
      {
        v5 = 0;
        v8 = *(_DWORD *)(a1 + 40);
        do
        {
          while ( v8 != (_DWORD)v5 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            ++v5;
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
            if ( v5 == v4 )
              goto LABEL_11;
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v5;
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( v4 != v5 );
LABEL_11:
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    result = *(_QWORD *)(a1 + 48);
    if ( result )
    {
      v6 = *(unsigned int *)(result - 4);
      if ( (_DWORD)v6 )
      {
        v7 = 0;
        v9 = *(_DWORD *)(a1 + 56);
        do
        {
          if ( v9 == (_DWORD)v7 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::_M_insert<unsigned long>();
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          ++v7;
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        while ( v6 != v7 );
        return std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return result;
}

