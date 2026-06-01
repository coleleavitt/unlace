__int64 __fastcall sub_BB17F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r12

  if ( dword_1C7ED94 == a3 || dword_1C7ED90 == a3 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    return a2;
  }
  else
  {
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8840LL) + 8LL * (a3 >> 1));
    if ( (a3 & 1) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(a2, *(_QWORD *)(a1 + 24), v3, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(a2, *(_QWORD *)(a1 + 24), v3, 3);
    }
    return a2;
  }
}

