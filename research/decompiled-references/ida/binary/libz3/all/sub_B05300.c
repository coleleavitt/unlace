__int64 __fastcall sub_B05300(__int64 a1, __int64 a2, unsigned int *a3, char a4)
{
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // r13d
  unsigned int v10; // r14d
  unsigned int v11; // r13d

  if ( *a3 == -2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    v6 = *a3;
    if ( *a3 != -2 )
      goto LABEL_3;
LABEL_29:
    std::operator<<<std::char_traits<char>>();
    goto LABEL_5;
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  v6 = *a3;
  if ( *a3 == -2 )
    goto LABEL_29;
LABEL_3:
  if ( a4 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_17F35B0(a2, (unsigned int)*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *a3));
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *a3) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
    }
    std::operator<<<std::char_traits<char>>();
    v6 = *a3;
  }
  sub_AA5560(*(_QWORD *)(a1 + 16), a2, v6);
  std::__ostream_insert<char,std::char_traits<char>>();
LABEL_5:
  v7 = *((_QWORD *)a3 + 1);
  if ( v7 )
  {
    if ( a4 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= *(_DWORD *)(v7 - 4) )
          break;
        v11 = *(_DWORD *)(v7 + 4LL * v10);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v11 != -2 )
          std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_17F35B0(a2, (unsigned int)*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v11));
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v11) )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        ++v10;
        std::__ostream_insert<char,std::char_traits<char>>();
        v7 = *((_QWORD *)a3 + 1);
      }
      while ( v7 );
    }
    else
    {
      v8 = 0;
      do
      {
        if ( v8 >= *(_DWORD *)(v7 - 4) )
          break;
        if ( *(_DWORD *)(v7 + 4LL * v8) == -2 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
        }
        v7 = *((_QWORD *)a3 + 1);
        ++v8;
      }
      while ( v7 );
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( a3[6] )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::operator<<<std::char_traits<char>>();
  }
  return a2;
}

