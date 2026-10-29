__int64 __fastcall sub_A91C90(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+8h] [rbp-60h]
  void *v5; // [rsp+10h] [rbp-58h] BYREF
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF

  v2 = *a2;
  v4 = a2[1];
  if ( v4 != *a2 )
  {
    do
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(&v5, qword_1C7F2C0, v2 + 8);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v5 != &v6 )
        operator delete(v5, v6 + 1);
      v2 += 40;
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    while ( v4 != v2 );
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return a1;
}

