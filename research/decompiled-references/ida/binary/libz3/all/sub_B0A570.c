__int64 __fastcall sub_B0A570(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  unsigned int v6; // r13d
  int *v7; // rdx
  int v8; // r12d
  unsigned int v10; // r13d
  unsigned int *v11; // rdx
  unsigned int v12; // r12d
  void *v13; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *a1;
  if ( *a1 )
  {
    if ( a4 )
    {
      v10 = 0;
      while ( v10 < *(_DWORD *)(v5 - 4) )
      {
        v11 = (unsigned int *)(v5 + 40LL * v10);
        v12 = *v11;
        if ( (v11[3] & 1) != 0 || v11[2] != 1 || (v11[7] & 1) != 0 || v11[6] != 1 )
        {
          sub_1850940(&v13, qword_1C7F2C0, v11 + 2);
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v13 != v14 )
            operator delete(v13, v14[0] + 1LL);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v12 != -2 )
          std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_17F35B0(a3, (unsigned int)*(char *)(*(_QWORD *)(a2 + 8848) + v12));
        if ( *(_BYTE *)(*(_QWORD *)(a2 + 8848) + v12) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        ++v10;
        std::__ostream_insert<char,std::char_traits<char>>();
        v5 = *a1;
        if ( !*a1 )
          break;
        if ( v10 < *(_DWORD *)(v5 - 4) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v5 = *a1;
          if ( !*a1 )
            break;
        }
      }
    }
    else
    {
      v6 = 0;
      while ( v6 < *(_DWORD *)(v5 - 4) )
      {
        v7 = (int *)(v5 + 40LL * v6);
        v8 = *v7;
        if ( (v7[3] & 1) != 0 || v7[2] != 1 || (v7[7] & 1) != 0 || v7[6] != 1 )
        {
          sub_1850940(&v13, qword_1C7F2C0, v7 + 2);
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( v13 != v14 )
            operator delete(v13, v14[0] + 1LL);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v8 != -2 )
          std::ostream::_M_insert<unsigned long>();
        v5 = *a1;
        ++v6;
        if ( !*a1 )
          break;
        if ( v6 < *(_DWORD *)(v5 - 4) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          v5 = *a1;
          if ( !*a1 )
            break;
        }
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1850940(&v13, qword_1C7F2C0, a1 + 1);
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v13 != v14 )
    operator delete(v13, v14[0] + 1LL);
  std::__ostream_insert<char,std::char_traits<char>>();
  return a3;
}

