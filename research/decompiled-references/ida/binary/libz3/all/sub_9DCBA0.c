__int64 __fastcall sub_9DCBA0(__int64 a1)
{
  __int64 v1; // rbp
  void *v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_2FD7A0((char **)&v3, a1 + 16);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v3 != &v4 )
    operator delete(v3, v4 + 1);
  return v1;
}

