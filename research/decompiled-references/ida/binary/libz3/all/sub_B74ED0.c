__int64 __fastcall sub_B74ED0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12

  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = *(_QWORD *)(a1 + 9480);
  if ( v1 )
  {
    v2 = v1 + 20LL * *(unsigned int *)(v1 - 4);
    while ( v2 != v1 )
    {
      v1 += 20;
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  std::ostream::_M_insert<unsigned long>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

