__int64 __fastcall sub_9CB5E0(__int64 *a1)
{
  __int64 v1; // r14
  __int64 i; // r12
  void *v4; // [rsp+0h] [rbp-58h] BYREF
  __int64 v5; // [rsp+10h] [rbp-48h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  v1 = *a1;
  if ( *a1 )
  {
    for ( i = v1 + 40LL * *(unsigned int *)(v1 - 4); v1 != i; v1 += 40 )
    {
      if ( *(_DWORD *)(v1 + 32) != -1 )
      {
        sub_1850940(&v4, qword_1C7F2C0, v1);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v4 != &v5 )
          operator delete(v4, v5 + 1);
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return std::__ostream_insert<char,std::char_traits<char>>();
}

