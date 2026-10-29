__int64 __fastcall sub_9CEEC0(__int64 a1)
{
  __int64 v1; // rbx
  void *v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1850940(&v3, qword_1C7F2C0, a1 + 16);
  v1 = std::__ostream_insert<char,std::char_traits<char>>();
  if ( v3 != &v4 )
    operator delete(v3, v4 + 1);
  return v1;
}

