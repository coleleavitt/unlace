__int64 __fastcall sub_896410(_QWORD *a1, __int64 a2)
{
  unsigned int **v3; // rbx
  unsigned int **v4; // rbp
  unsigned int *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // r15
  __int64 i; // rbp

  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = (unsigned int **)a1[79];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    while ( v4 != v3 )
    {
      v5 = *v3++;
      sub_8962D0(v5, (__int64)a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = a1[28];
  if ( v6 )
  {
    v7 = v6 + 24LL * *(unsigned int *)(v6 - 4);
    if ( v6 != v7 )
    {
      v8 = a1[28];
      do
      {
        while ( !*(_BYTE *)(v8 + 20) )
        {
          v8 += 24;
          if ( v7 == v8 )
            goto LABEL_12;
        }
        if ( *(_DWORD *)(v8 + 16) == -2 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        v8 += 24;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v7 != v8 );
    }
  }
LABEL_12:
  result = a1[26];
  if ( result )
  {
    v10 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        result = std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return result;
}

