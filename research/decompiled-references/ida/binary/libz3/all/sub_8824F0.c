__int64 __fastcall sub_8824F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // r13d
  _QWORD **v6; // r14
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax

  v2 = a1[11];
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 - 4) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v4 = a1[11];
      if ( v4 )
      {
        v5 = 0;
        do
        {
          if ( v5 >= *(_DWORD *)(v4 - 4) )
            break;
          v6 = *(_QWORD ***)(a1[23] + 8LL * v5);
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v7 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1648CA0(v7, a1[9], **(_QWORD **)(a1[11] + 8LL * v5), 2);
          std::__ostream_insert<char,std::char_traits<char>>();
          v8 = v6[2];
          if ( v8 && *((_DWORD *)v8 - 1) )
            sub_882380((__int64)a1, a2, "parent lambdas", v6 + 2);
          v9 = v6[3];
          if ( v9 && *((_DWORD *)v9 - 1) )
            sub_882380((__int64)a1, a2, "parent select", v6 + 3);
          v10 = v6[1];
          if ( v10 && *((_DWORD *)v10 - 1) )
            sub_882380((__int64)a1, a2, "lambdas", v6 + 1);
          v4 = a1[11];
          ++v5;
        }
        while ( v4 );
      }
    }
  }
  return a2;
}

