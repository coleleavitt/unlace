__int64 __fastcall sub_979A40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // r14
  _QWORD *v7; // [rsp+8h] [rbp-40h]

  v3 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *(_QWORD **)v3;
  v5 = *(_QWORD *)v3 + 16LL * *(unsigned int *)(v3 + 20);
  if ( *(_QWORD *)v3 != v5 )
  {
    while ( (*v4 & 7LL) == 1 )
    {
      v4 += 2;
      if ( (_QWORD *)v5 == v4 )
        return std::__ostream_insert<char,std::char_traits<char>>();
    }
    v7 = v4;
    do
    {
LABEL_6:
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      v4 = (_QWORD *)*v4;
    }
    while ( v4 );
    v4 = v7;
    while ( 1 )
    {
      v4 += 2;
      if ( (_QWORD *)v5 == v4 )
        break;
      if ( (*v4 & 7LL) != 1 )
      {
        v7 = v4;
        goto LABEL_6;
      }
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

