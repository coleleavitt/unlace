__int64 __fastcall sub_B7F720(_QWORD *a1, __int64 a2)
{
  _DWORD *v3; // rbx
  _DWORD *v4; // r13
  _DWORD *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 result; // rax
  int v9; // r15d
  __int64 i; // rbx
  void *v11; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = (_DWORD *)a1[169];
  if ( v3 )
  {
    v4 = &v3[4 * *(v3 - 1)];
    while ( v4 != v3 )
    {
      v5 = v3;
      v3 += 4;
      sub_B7A960(v5, (__int64)a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v6 = a1[125];
  if ( v6 )
  {
    v7 = v6 + 56LL * *(unsigned int *)(v6 - 4);
    while ( v7 != v6 )
    {
      while ( !*(_BYTE *)(v6 + 52) )
      {
        v6 += 56;
        if ( v7 == v6 )
          goto LABEL_14;
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( *(_DWORD *)(v6 + 44) == -2 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::operator<<();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1850940(&v11, qword_1C7F2C0, v6 + 8);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v11 != v12 )
        operator delete(v11, v12[0] + 1LL);
      v6 += 56;
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
LABEL_14:
  result = a1[123];
  if ( result )
  {
    v9 = *(_DWORD *)(result - 4);
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1850940(&v11, qword_1C7F2C0, a1[123] + 32 * i);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v11 != v12 )
          operator delete(v11, v12[0] + 1LL);
        result = std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  return result;
}

