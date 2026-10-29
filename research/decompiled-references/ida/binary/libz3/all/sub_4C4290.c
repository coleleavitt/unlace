void __fastcall sub_4C4290(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // r15
  __int64 v3; // rcx
  unsigned __int64 *v4; // r14
  __int64 v5; // r13
  unsigned __int64 *v6; // rax

  v2 = *(unsigned __int64 **)(a1 + 120);
  v3 = 2LL * *(unsigned int *)(a1 + 128);
  v4 = &v2[v3];
  if ( v2 != &v2[v3] )
  {
    while ( *v2 <= 1 )
    {
      v2 += 2;
      if ( v4 == v2 )
        return;
    }
    if ( v4 != v2 )
    {
      do
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 = *(_QWORD *)(*v2 + 16);
        if ( (v5 & 7) != 0 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::operator<<();
        }
        else
        {
          if ( v5 )
            strlen(*(const char **)(*v2 + 16));
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v2[1] + 120LL))(v2[1], a2);
        v6 = v2 + 2;
        if ( v4 == v2 + 2 )
          break;
        while ( 1 )
        {
          v2 = v6;
          if ( *v6 > 1 )
            break;
          v6 += 2;
          if ( v4 == v6 )
            return;
        }
      }
      while ( v4 != v6 );
    }
  }
}

