__int64 __fastcall std::operator+<char>(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rax

  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v4 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)a1 = a1 + 16;
  std::string::reserve(a1, v4 + 1);
  std::string::_M_replace_aux((_QWORD *)a1, *(_QWORD *)(a1 + 8), 0, 1u, a2);
  std::string::_M_append((_QWORD *)a1, *(_BYTE **)a3, *(_QWORD *)(a3 + 8));
  return a1;
}
