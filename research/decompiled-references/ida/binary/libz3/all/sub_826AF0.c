__int64 __fastcall sub_826AF0(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13

  v1 = (_DWORD *)(a1 + 64);
  v2 = 4LL * *(unsigned int *)(a1 + 32);
  v3 = (_DWORD *)(a1 + 64 + v2);
  if ( v2 )
  {
    do
    {
      if ( *v1 == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      ++v1;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( v3 != v1 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return std::ostream::_M_insert<unsigned long>();
}

