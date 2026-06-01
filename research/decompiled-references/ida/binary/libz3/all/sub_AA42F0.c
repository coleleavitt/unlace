__int64 __fastcall sub_AA42F0(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rsi

  std::__ostream_insert<char,std::char_traits<char>>();
  if ( *a1 )
  {
    v6 = 0;
    do
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = a1[v6++ + 2];
      sub_AA4870(a2, v7, a4);
    }
    while ( v6 < *a1 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

