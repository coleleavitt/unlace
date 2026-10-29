__int64 __fastcall sub_7CBF70(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD *); // rax
  _QWORD *v7; // rbx
  int v9; // eax
  __int64 v10; // r14
  _QWORD *v11; // r12

  v3 = a2;
  if ( (a3 & 7) == 1 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
  }
  else
  {
    v4 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF8LL);
    v5 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*a1 + 232LL);
    if ( v6 != sub_7C9E50 )
      return v6((__int64)a1, a2, (_QWORD *)v5);
    v7 = (_QWORD *)*v4;
    if ( v7 != a1 )
    {
      a1 = v7;
      v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*v7 + 232LL);
      return v6((__int64)a1, a2, (_QWORD *)v5);
    }
    v9 = *(_DWORD *)(v5 + 8);
    if ( v9 != 1 )
    {
      if ( v9 == 2 )
      {
        v10 = *(_QWORD *)(v5 + 16);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( (*(_DWORD *)(v10 + 24) == -1) + 2 * *(_DWORD *)(v10 + 28) == -2 )
        {
          std::__ostream_insert<char,std::char_traits<char>>();
          std::__ostream_insert<char,std::char_traits<char>>();
          v11 = v7 + 199;
        }
        else
        {
          v11 = a1 + 199;
          std::__ostream_insert<char,std::char_traits<char>>();
          std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        v3 = std::ostream::_M_insert<unsigned long>();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1648CA0(v3, *v11, *(_QWORD *)v10, 3);
        return v3;
      }
      if ( v9 )
      {
        sub_1872CE0("");
        sub_1873130(114, 1092);
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  return v3;
}

