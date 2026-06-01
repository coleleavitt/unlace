__int64 __fastcall sub_645D80(__int64 a1, __int64 a2, std::ostream *a3)
{
  __int64 v5; // r13
  int v6; // r15d
  __int64 v7; // rbp
  const char *v8; // rax
  std::ostream *v9; // rdi
  __int64 i; // rbp
  __int64 v11; // rax
  const char *v12; // rax
  std::ostream *v13; // rax
  __int64 v15; // [rsp+8h] [rbp-70h]
  _QWORD v16[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_DWORD *)(a2 + 24);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v6 )
  {
    if ( !(unsigned __int8)sub_1625190(a1 + 56, *(_QWORD *)(a2 + 32), v16) )
    {
      sub_1872CE0("");
      sub_1873130(114, 174);
    }
    v7 = *(_QWORD *)(v5 + 48);
    v8 = (const char *)sub_64DD10(a1, v5, 0);
    if ( ((unsigned __int8)v8 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
    }
    else
    {
      if ( v8 )
        strlen(v8);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put(a3, 61);
    sub_64B9F0(a1, v7, v16[0], a3);
    if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put(a3, 40);
    v9 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
    if ( *(_QWORD *)((char *)v9 + *(_QWORD *)(*(_QWORD *)v9 - 24LL) + 16) )
      std::__ostream_insert<char,std::char_traits<char>>();
    else
      std::ostream::put(v9, 41);
    if ( v6 != 1 )
    {
      for ( i = 1; i != v6; ++i )
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)a3;
          LOBYTE(v16[0]) = 44;
          if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(v11 - 24) + 16) )
            std::__ostream_insert<char,std::char_traits<char>>();
          else
            std::ostream::put(a3, 44);
          if ( !(unsigned __int8)sub_1625190(a1 + 56, *(_QWORD *)(a2 + 8 * i + 32), v16) )
          {
            sub_1872CE0("");
            sub_1873130(114, 174);
          }
          v15 = *(_QWORD *)(v5 + 8 * i + 48);
          v12 = (const char *)sub_64DD10(a1, v5, (unsigned int)i);
          if ( ((unsigned __int8)v12 & 7) != 0 )
          {
            std::__ostream_insert<char,std::char_traits<char>>();
            std::ostream::operator<<();
          }
          else
          {
            if ( v12 )
              strlen(v12);
            std::__ostream_insert<char,std::char_traits<char>>();
          }
          if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
            std::__ostream_insert<char,std::char_traits<char>>();
          else
            std::ostream::put(a3, 61);
          sub_64B9F0(a1, v15, v16[0], a3);
          if ( *(_QWORD *)((char *)a3 + *(_QWORD *)(*(_QWORD *)a3 - 24LL) + 16) )
            std::__ostream_insert<char,std::char_traits<char>>();
          else
            std::ostream::put(a3, 40);
          v13 = (std::ostream *)std::ostream::_M_insert<unsigned long>();
          if ( !*(_QWORD *)((char *)v13 + *(_QWORD *)(*(_QWORD *)v13 - 24LL) + 16) )
            break;
          ++i;
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v6 == i )
            return std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::ostream::put(v13, 41);
      }
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

