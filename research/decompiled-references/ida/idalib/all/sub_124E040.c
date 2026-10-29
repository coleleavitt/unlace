__int64 __fastcall sub_124E040(_QWORD *a1, char *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rax
  __int64 v4; // rax
  char v5; // r12
  __int64 v6; // rax
  unsigned int v7; // eax
  int v8; // edx

  v2 = *a2;
  v3 = std::use_facet<std::ctype<char>>(*a1);
  LOBYTE(v2) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 32LL))(v3, v2);
  v4 = std::use_facet<std::ctype<char>>(*a1);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 32LL))(v4, 10);
  v6 = std::use_facet<std::ctype<char>>(*a1);
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, 13);
  LOBYTE(v8) = v5 != (char)v2;
  LOBYTE(v7) = (_BYTE)v7 != (unsigned __int8)v2;
  return v8 & v7;
}
