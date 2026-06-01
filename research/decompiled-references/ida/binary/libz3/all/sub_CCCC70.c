__int64 __fastcall sub_CCCC70(__int64 a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // r12
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // r13

  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 )
  {
    v2 = &v1[2 * *((unsigned int *)v1 - 1)];
    while ( v2 != v1 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v5 = *(_QWORD *)(*v1 + 16LL);
      if ( (v5 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
      }
      else
      {
        if ( v5 )
          strlen(*(const char **)(*v1 + 16LL));
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v3 = v1[1];
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        if ( (v4 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
          goto LABEL_12;
        }
        if ( v4 )
          strlen(*(const char **)(v3 + 16));
      }
      std::__ostream_insert<char,std::char_traits<char>>();
LABEL_12:
      v1 += 2;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

