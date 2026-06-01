__int64 __fastcall sub_7CA010(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r12
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD *); // rax
  _QWORD *v7; // rbx
  int v9; // eax
  __int64 v10; // r14
  _QWORD *v11; // r12
  __int64 v12; // rbp

  if ( (*a3 & 7LL) == 1 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    return std::ostream::_M_insert<unsigned long>();
  }
  v3 = (_QWORD *)*a1;
  v4 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF8LL);
  v5 = v4;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)*a1 + 232LL);
  if ( v6 != sub_7C9E50 )
    return v6(*a1, a2, v4);
  v7 = (_QWORD *)*v4;
  if ( v7 != v3 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *))(*v7 + 232LL))(v7, a2, v5);
  v9 = *((_DWORD *)v5 + 2);
  if ( v9 == 1 )
    return std::__ostream_insert<char,std::char_traits<char>>();
  if ( v9 != 2 )
  {
    if ( v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1092);
    }
    return std::__ostream_insert<char,std::char_traits<char>>();
  }
  v10 = v5[2];
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( (*(_DWORD *)(v10 + 24) == -1) + 2 * *(_DWORD *)(v10 + 28) == -2 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::__ostream_insert<char,std::char_traits<char>>();
    v11 = v7 + 199;
  }
  else
  {
    v11 = v3 + 199;
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<unsigned long>();
    std::__ostream_insert<char,std::char_traits<char>>();
  }
  v12 = std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  return sub_1648CA0(v12, *v11, *(_QWORD *)v10, 3);
}

