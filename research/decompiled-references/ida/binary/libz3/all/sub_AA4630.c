__int64 __fastcall sub_AA4630(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // r12

  if ( dword_1C7ECD0 == a2 || dword_1C7ECCC == a2 || a2 == -2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    return a1;
  }
  else
  {
    v5 = (_QWORD *)(a4 + 8LL * (a2 >> 1));
    if ( (a2 & 1) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(a1, a3, *v5, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      sub_1648CA0(a1, a3, *v5, 3);
    }
    return a1;
  }
}

