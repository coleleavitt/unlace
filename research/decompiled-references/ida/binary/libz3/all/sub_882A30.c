__int64 __fastcall sub_882A30(__int64 a1, _QWORD *a2, _QWORD *a3, double a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // rbp

  v6 = sub_15D1F10(*a2);
  v7 = *a3;
  v8 = v6;
  result = sub_15D1F10(*a3);
  if ( v8 == result )
  {
    sub_180B130(v7);
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      sub_180B150(v7, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v10 = *(_QWORD *)(a1 + 80);
      v11 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v11, *(_QWORD *)(v10 + 1592), *a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      v12 = *(_QWORD *)(a1 + 80);
      v13 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v13, *(_QWORD *)(v12 + 1592), *a3, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      return sub_186A500(v13, "\n");
    }
    else
    {
      sub_180B150(v7, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v14 = *(_QWORD *)(a1 + 80);
      v15 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v15, *(_QWORD *)(v14 + 1592), *a2, 3);
      std::__ostream_insert<char,std::char_traits<char>>();
      v16 = *(_QWORD *)(a1 + 80);
      v17 = std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_1648CA0(v17, *(_QWORD *)(v16 + 1592), *a3, 3);
      return std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  return result;
}

