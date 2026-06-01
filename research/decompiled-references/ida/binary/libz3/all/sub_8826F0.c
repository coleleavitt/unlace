__int64 __fastcall sub_8826F0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbp
  __int64 v6; // r12
  __int64 v7; // rbx
  _QWORD *v9; // r13
  __int64 v10; // r14

  if ( *(_DWORD *)(a3 + 4) == 1 )
    std::__ostream_insert<char,std::char_traits<char>>();
  switch ( *(_DWORD *)a3 )
  {
    case 0:
    case 3:
      std::__ostream_insert<char,std::char_traits<char>>();
      v5 = *(_QWORD **)(a3 + 8);
      if ( v5 )
        goto LABEL_5;
      goto LABEL_9;
    case 1:
    case 2:
    case 4:
      std::__ostream_insert<char,std::char_traits<char>>();
      v9 = *(_QWORD **)(a3 + 8);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 80);
        a2 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(a2, *(_QWORD *)(v10 + 1592), *v9, 3);
      }
      else
      {
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      v5 = *(_QWORD **)(a3 + 16);
      if ( v5 )
      {
LABEL_5:
        v6 = *(_QWORD *)(a1 + 80);
        v7 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v7, *(_QWORD *)(v6 + 1592), *v5, 3);
        return v7;
      }
      else
      {
LABEL_9:
        std::__ostream_insert<char,std::char_traits<char>>();
        return a2;
      }
    default:
      sub_1872CE0("");
      sub_1873130(114, 59);
  }
}

