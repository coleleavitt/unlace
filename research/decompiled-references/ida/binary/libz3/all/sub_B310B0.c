__int64 __fastcall sub_B310B0(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 *v5; // r13
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // eax
  char *v10; // rdx
  int v11; // eax
  __int64 v12; // r14
  int v13; // r15d
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // r14
  int v17; // r15d
  __int64 v18; // rbp
  __int64 v19; // r15
  __int64 v20; // r13
  int v21; // r14d
  __int64 v22; // rbp
  __int64 v23; // r13

  v3 = a3;
  v4 = a3;
  v5 = *(__int64 **)(*(_QWORD *)(a1 + 256) + 8LL * a3);
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *a2;
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 4;
  v7 = (char *)a2 + *(_QWORD *)(v6 - 24);
  LODWORD(v6) = *((_DWORD *)v7 + 6);
  LOBYTE(v6) = v6 & 0x4F;
  *((_DWORD *)v7 + 6) = v6 | 0x20;
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 4;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v8 = *(_QWORD *)(a1 + 344);
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 4;
  while ( 1 )
  {
    v9 = v4;
    v4 = *(_DWORD *)(v8 + 4 * v3);
    if ( v9 == v4 )
      break;
    v3 = v4;
  }
  std::ostream::_M_insert<unsigned long>();
  v10 = (char *)a2 + *(_QWORD *)(*a2 - 24);
  v11 = *((_DWORD *)v10 + 6);
  LOBYTE(v11) = v11 & 0x4F | 0x80;
  *((_DWORD *)v10 + 6) = v11;
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<bool>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<bool>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<bool>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v12 = *v5;
  if ( *v5 )
  {
    v13 = *(_DWORD *)(v12 - 4);
    if ( v13 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      if ( v13 != 1 )
      {
        v14 = v12 + 8;
        v15 = v12 + 8LL * (unsigned int)(v13 - 2) + 16;
        do
        {
          v14 += 8;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v14 != v15 );
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v16 = v5[2];
  if ( v16 )
  {
    v17 = *(_DWORD *)(v16 - 4);
    if ( v17 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      if ( v17 != 1 )
      {
        v18 = v16 + 8;
        v19 = v16 + 8LL * (unsigned int)(v17 - 2) + 16;
        do
        {
          v18 += 8;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v19 != v18 );
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  v20 = v5[1];
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 - 4);
    if ( v21 )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      if ( v21 != 1 )
      {
        v22 = v20 + 8;
        v23 = v20 + 8LL * (unsigned int)(v21 - 2) + 16;
        do
        {
          v22 += 8;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        while ( v23 != v22 );
      }
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  return std::__ostream_insert<char,std::char_traits<char>>();
}

