__int64 __fastcall sub_4EC1F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int v3; // r12d
  unsigned int v5; // r12d
  int v6; // edx
  __int64 v7; // rbp
  unsigned int v8; // r15d

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_DWORD *)(v2 + 520) >> 1;
  if ( v3 )
  {
    v5 = v3 - 1;
    std::__ostream_insert<char,std::char_traits<char>>();
    v6 = *(_DWORD *)(a1 + 48);
    if ( (unsigned int)(v6 + (*(_DWORD *)(v2 + 520) >> 1)) > 0xA )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_2;
    }
    else if ( !v6 )
    {
      goto LABEL_2;
    }
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      ++v8;
      sub_5588F0(v2, a2, *(_QWORD *)(*(_QWORD *)(a1 + 40) + v7), v5, 0);
      if ( v8 >= *(_DWORD *)(a1 + 48) )
        break;
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v8 >= *(_DWORD *)(a1 + 48) )
        break;
      if ( *(_DWORD *)(v2 + 520) > 0x15u )
      {
        v7 += 8;
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v8 >= *(_DWORD *)(a1 + 48) )
          break;
      }
      else
      {
        v7 += 8;
      }
    }
  }
LABEL_2:
  std::__ostream_insert<char,std::char_traits<char>>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

