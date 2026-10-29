__int64 __fastcall sub_5588F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  __int64 v6; // r15
  unsigned int v7; // eax

  sub_182A850(a1, a2, *(_QWORD *)a3);
  if ( *(_DWORD *)(a3 + 16) )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v5 = *(_DWORD *)(a3 + 16);
    if ( (unsigned int)(v5 + (*(_DWORD *)(a1 + 520) >> 1)) > 0xA )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v5 = *(_DWORD *)(a3 + 16);
    }
    if ( v5 )
    {
      v6 = 0;
      while ( 1 )
      {
        sub_182A850(a1, a2, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * v6));
        if ( (unsigned int)(v6 + 1) >= *(_DWORD *)(a3 + 16) )
          break;
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = *(_DWORD *)(a3 + 16);
        if ( (int)v6 + 1 >= v7 )
          break;
        if ( *(_DWORD *)(a1 + 520) > 0x15u )
        {
          ++v6;
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( (unsigned int)v6 >= *(_DWORD *)(a3 + 16) )
            break;
        }
        else if ( (unsigned int)++v6 >= v7 )
        {
          break;
        }
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return a2;
}

