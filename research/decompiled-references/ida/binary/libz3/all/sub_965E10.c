__int64 __fastcall sub_965E10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  int *v6; // rax
  int v7; // eax
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14

  v4 = a3;
  if ( *(_DWORD *)(a3 + 24) )
  {
    v5 = *(_QWORD *)(a3 + 16);
    v6 = *(int **)(v5 + 24);
    if ( v6 )
      v7 = *v6;
    else
      v7 = -1;
    if ( v7 == *(_DWORD *)(a1 + 8) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v9 = *(_QWORD *)(v5 + 16);
      if ( (v9 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
      }
      else
      {
        if ( v9 )
          strlen(*(const char **)(v5 + 16));
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v10 = *(_QWORD *)(v5 + 24);
      if ( v10 && (v11 = *(_QWORD *)(v10 + 8)) != 0 )
        v12 = *(unsigned int *)(v11 - 4);
      else
        v12 = 0;
      sub_15D4280(a2, v12);
      v13 = *(unsigned int *)(v4 + 24);
      if ( (_DWORD)v13 )
      {
        v14 = v4 + 8 * v13;
        do
        {
          v4 += 8;
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_965E10(a1, a2, *(_QWORD *)(v4 + 24));
        }
        while ( v4 != v14 );
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      return a2;
    }
    else
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      return a2;
    }
  }
  else
  {
    sub_1648CA0(a2, *(_QWORD *)(a1 + 24), a3, 1);
    return a2;
  }
}

