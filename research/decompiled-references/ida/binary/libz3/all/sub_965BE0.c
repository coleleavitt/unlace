__int64 __fastcall sub_965BE0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rdx
  std::ostream *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  const char **v8; // rbp
  const char *v9; // rbp
  __int64 v11; // rbp
  __int64 v12; // r13

  v4 = *(_QWORD *)(a1 + 24);
  v5 = (std::ostream *)(*(_QWORD *)(v4 + 912) + 16LL);
  v6 = *(int *)(a1 + 8);
  if ( (int)v6 >= 0 && (v7 = *(_QWORD *)(v4 + 608)) != 0 && (int)v6 < *(_DWORD *)(v7 - 4) )
    v8 = (const char **)(v7 + 8 * v6);
  else
    v8 = (const char **)&qword_18D6CD0;
  std::__ostream_insert<char,std::char_traits<char>>();
  v9 = *v8;
  if ( ((unsigned __int8)v9 & 7) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  else
  {
    if ( v9 )
      strlen(v9);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( *a3 )
  {
    if ( *(_DWORD *)(*a3 - 4) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v11 = *a3;
      if ( *a3 )
      {
        v12 = v11 + 16LL * *(unsigned int *)(v11 - 4);
        while ( v12 != v11 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v11 += 16;
          std::ostream::_M_insert<unsigned long>();
        }
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<void const*>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  return std::ostream::flush(v5);
}

