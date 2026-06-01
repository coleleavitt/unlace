__int64 __fastcall sub_AA4250(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rsi

  std::__ostream_insert<char,std::char_traits<char>>();
  if ( *a1 )
  {
    v7 = 0;
    do
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v8 = a1[v7++ + 2];
      sub_AA4630(a2, v8, a3, a4);
    }
    while ( v7 < *a1 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a2;
}

