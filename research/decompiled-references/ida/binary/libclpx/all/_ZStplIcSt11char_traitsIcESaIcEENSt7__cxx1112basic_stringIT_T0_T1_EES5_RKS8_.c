__int64 __fastcall std::operator+<char>(__int64 a1, __int64 a2, _QWORD *a3)
{
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  std::string::reserve(a1, a3[1] + 1LL);
  std::string::_M_replace_aux();
  std::string::_M_append(a1, *a3, a3[1]);
  return a1;
}

