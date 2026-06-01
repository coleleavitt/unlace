void __fastcall sub_4C43E0(__int64 a1)
{
  unsigned __int64 *v1; // r14
  __int64 v2; // r8
  unsigned __int64 *v3; // r15
  __int64 v4; // rbp
  unsigned __int64 *v5; // rax

  v1 = *(unsigned __int64 **)(a1 + 120);
  v2 = 2LL * *(unsigned int *)(a1 + 128);
  v3 = &v1[v2];
  if ( v1 != &v1[v2] )
  {
    while ( *v1 <= 1 )
    {
      v1 += 2;
      if ( v3 == v1 )
        return;
    }
    if ( v3 != v1 )
    {
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v4 = *(_QWORD *)(*v1 + 16);
        if ( (v4 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v4 )
            strlen(*(const char **)(*v1 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(unsigned __int64, const char *))(*(_QWORD *)v1[1] + 96LL))(v1[1], " has size ");
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 = v1 + 2;
        if ( v3 == v1 + 2 )
          break;
        while ( 1 )
        {
          v1 = v5;
          if ( *v5 > 1 )
            break;
          v5 += 2;
          if ( v3 == v5 )
            return;
        }
      }
      while ( v3 != v5 );
    }
  }
}

