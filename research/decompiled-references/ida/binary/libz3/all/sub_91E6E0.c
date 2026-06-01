__int64 __fastcall sub_91E6E0(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v4; // rax
  char *v5; // rdx
  __int64 v6; // rax
  char *v7; // rdx
  __int64 v8; // rax
  char *v9; // rdx

  std::__ostream_insert<char,std::char_traits<char>>();
  v4 = *a2;
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
  v5 = (char *)a2 + *(_QWORD *)(v4 - 24);
  LODWORD(v4) = *((_DWORD *)v5 + 6);
  LOBYTE(v4) = v4 & 0x4F;
  *((_DWORD *)v5 + 6) = v4 | 0x20;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v6 = *a2;
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 5;
  v7 = (char *)a2 + *(_QWORD *)(v6 - 24);
  LODWORD(v6) = *((_DWORD *)v7 + 6);
  LOBYTE(v6) = v6 & 0x4F;
  *((_DWORD *)v7 + 6) = v6 | 0x20;
  std::ostream::_M_insert<unsigned long>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v8 = *a2;
  *(__int64 *)((char *)a2 + *(_QWORD *)(*a2 - 24) + 16) = 10;
  v9 = (char *)a2 + *(_QWORD *)(v8 - 24);
  LODWORD(v8) = *((_DWORD *)v9 + 6);
  LOBYTE(v8) = v8 & 0x4F;
  *((_DWORD *)v9 + 6) = v8 | 0x20;
  std::ostream::operator<<();
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_17F35B0(a2, (unsigned int)*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + (unsigned int)(2 * *a3)));
  return std::__ostream_insert<char,std::char_traits<char>>();
}

