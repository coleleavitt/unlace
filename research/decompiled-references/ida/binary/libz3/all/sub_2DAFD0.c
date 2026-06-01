__int64 __fastcall sub_2DAFD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rbp
  void *v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h] BYREF

  if ( *(_BYTE *)a2 )
  {
    sub_1850940(&v5, qword_1C7F2C0, a2 + 16);
    v2 = std::__ostream_insert<char,std::char_traits<char>>();
    if ( v5 != &v6 )
      operator delete(v5, v6 + 1);
    return v2;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( (v4 & 7) != 0 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      return a1;
    }
    else
    {
      if ( v4 )
        strlen(*(const char **)(a2 + 8));
      std::__ostream_insert<char,std::char_traits<char>>();
      return a1;
    }
  }
}

