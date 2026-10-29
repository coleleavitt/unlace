__int64 __fastcall sub_9A71F0(__int64 a1, _QWORD *a2, std::ostream *a3)
{
  __int64 *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rsi
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rsi

  j__strlen("BB_");
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::operator<<<std::char_traits<char>>();
  if ( a2[16] )
  {
    j__strlen(" BB_");
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
  }
  std::operator<<<std::char_traits<char>>();
  v5 = (__int64 *)a2[8];
  v6 = &v5[a2[9]];
  while ( v6 != v5 )
  {
    v7 = *v5++;
    sub_9A70F0(a1, v7, a3);
  }
  v8 = (__int64 *)a2[11];
  v9 = &v8[a2[12]];
  while ( v9 != v8 )
  {
    v10 = *v8++;
    sub_9A70F0(a1, v10, a3);
  }
  v11 = a2[14];
  if ( v11 )
  {
    sub_9A7340(a1, v11, a3, 6, 0);
    std::operator<<<std::char_traits<char>>();
    std::operator<<<std::char_traits<char>>();
  }
  return std::operator<<<std::char_traits<char>>();
}

