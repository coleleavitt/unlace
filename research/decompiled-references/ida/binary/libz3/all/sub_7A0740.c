void __fastcall sub_7A0740(__int64 a1, __int64 a2, unsigned int a3, int **a4)
{
  unsigned int v4; // r13d
  int *v5; // rbp
  __int64 v6; // rax
  int v7; // r13d
  __int64 v8; // r14
  __int64 v9; // r13
  int *v10; // [rsp+0h] [rbp-48h]

  v4 = a3;
  v5 = *a4;
  if ( *a4 )
  {
    v6 = (unsigned int)*(v5 - 1);
    if ( v5 != &v5[v6] )
    {
      v10 = &v5[v6];
      do
      {
        v7 = *v5;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 2328) + 8LL * ((unsigned int)*v5 >> 1));
        if ( *v5 == -1 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          if ( (v7 & 1) == 0 )
            std::__ostream_insert<char,std::char_traits<char>>();
        }
        ++v5;
        sub_1648CA0(a2, *(_QWORD *)(a1 + 144), v8, 3);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      while ( v10 != v5 );
      v4 = a3;
    }
  }
  if ( v4 != -2 )
  {
    if ( (v4 & 1) != 0 )
    {
      v9 = v4 >> 1;
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      v9 = v4 >> 1;
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    sub_1648CA0(a2, *(_QWORD *)(a1 + 144), *(_QWORD *)(*(_QWORD *)(a1 + 2328) + 8 * v9), 3);
    std::__ostream_insert<char,std::char_traits<char>>();
  }
}

