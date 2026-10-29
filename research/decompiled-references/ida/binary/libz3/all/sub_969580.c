__int64 __fastcall sub_969580(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebp
  int v6; // r14d
  int v7; // r12d
  int v8; // r13d
  char v9; // al

  v3 = *(_QWORD *)(a3 + 8);
  if ( v3 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v5 >= *(_DWORD *)(v3 - 4) )
        break;
      v9 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + (unsigned int)sub_B645B0(a1, *(_QWORD *)(v3 + 8LL * v5)));
      if ( v9 == -1 )
      {
        ++v7;
      }
      else if ( v9 == 1 )
      {
        ++v8;
      }
      else
      {
        v6 += v9 == 0;
      }
      v3 = *(_QWORD *)(a3 + 8);
      ++v5;
    }
    while ( v3 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

