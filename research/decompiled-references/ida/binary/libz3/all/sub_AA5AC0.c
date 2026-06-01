__int64 __fastcall sub_AA5AC0(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rax
  unsigned int *v5; // r14
  unsigned int v6; // ebx
  __int64 v7; // rbp
  unsigned int *v9; // [rsp+8h] [rbp-40h]

  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<bool>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *a3;
  if ( v4 * 4 )
  {
    v9 = &a3[v4 + 2];
    v5 = a3 + 2;
    do
    {
      v6 = *v5++;
      sub_AA4870(a2, v6);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_17F35B0(a2, (unsigned int)*(char *)(a1[1106] + v6));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v7 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v7, a1[13], *(_QWORD *)(a1[1105] + 8LL * (v6 >> 1)), 2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( v9 != v5 );
  }
  return a2;
}

