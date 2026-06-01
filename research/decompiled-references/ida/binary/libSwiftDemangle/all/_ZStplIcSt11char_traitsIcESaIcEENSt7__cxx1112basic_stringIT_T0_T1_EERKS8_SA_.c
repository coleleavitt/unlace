__int64 *__fastcall std::operator+<char>(__int64 *a1, __int64 a2, __int64 a3)
{
  *a1 = (__int64)(a1 + 2);
  std::string::_M_construct<char *>(a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  std::string::_M_append(a1, *(_BYTE **)a3, *(_QWORD *)(a3 + 8));
  return a1;
}

