__int64 __fastcall sub_89F430(_QWORD *a1, __int64 a2)
{
  unsigned int **v3; // rbx
  unsigned int **v4; // r13
  unsigned int *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 result; // rax
  int v10; // r15d
  __int64 i; // rbx
  void *v12; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF

  std::__ostream_insert<char,std::char_traits<char>>();
  v3 = (unsigned int **)a1[82];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    while ( v4 != v3 )
    {
      v5 = *v3++;
      sub_895530(v5, (__int64)a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = a1[31];
  if ( v6 )
  {
    v7 = v6 + 56LL * *(unsigned int *)(v6 - 4);
    if ( v6 != v7 )
    {
      v8 = a1[31];
      do
      {
        while ( !*(_BYTE *)(v8 + 48) )
        {
          v8 += 56;
          if ( v7 == v8 )
            goto LABEL_14;
        }
        if ( *(_DWORD *)(v8 + 44) == -2 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1850940(&v12, qword_1C7F2C0, v8 + 8);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v12 != v13 )
          operator delete(v12, v13[0] + 1LL);
        v8 += 56;
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v7 != v8 );
    }
  }
LABEL_14:
  result = a1[29];
  if ( result )
  {
    v10 = *(_DWORD *)(result - 4);
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1850940(&v12, qword_1C7F2C0, a1[29] + 32 * i);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v12 != v13 )
          operator delete(v12, v13[0] + 1LL);
        result = std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return result;
}

