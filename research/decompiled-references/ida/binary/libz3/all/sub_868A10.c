__int64 __fastcall sub_868A10(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r15d
  __int64 v5; // rbx
  _QWORD *v6; // r12

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 20LL) )
  {
    v4 = 0;
    do
    {
      v6 = *(_QWORD **)(a1 + 8LL * v4 + 48);
      if ( v6 )
      {
        v5 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v5, *(_QWORD *)(a2 + 1592), *v6, 3);
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v4;
    }
    while ( v4 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 20LL) );
  }
  return a3;
}

