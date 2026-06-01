__int64 __fastcall sub_3B0120(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // r15
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // r12
  __int64 i; // rax

  v2 = 0;
  v3 = *a1;
  for ( result = *(_QWORD *)(*a1 + 16); result; result = *(_QWORD *)(v3 + 16) )
  {
    if ( v2 >= *(_DWORD *)(result - 4) )
      break;
    v5 = 0;
    v6 = *(_QWORD **)(result + 8LL * v2);
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_182A9A0(*v6, a2, v6[1]);
    for ( i = v6[3]; i; i = v6[3] )
    {
      if ( v5 >= *(_DWORD *)(i - 4) )
        break;
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v5;
      std::ostream::_M_insert<unsigned long>();
    }
    ++v2;
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return result;
}

