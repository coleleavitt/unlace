__int64 __fastcall std::operator+<char>(__int64 a1, char *a2, __int64 a3)
{
  size_t v5; // rax
  __int64 v6; // rsi
  size_t v7; // r13

  v5 = strlen(a2);
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v6 = *(_QWORD *)(a3 + 8);
  v7 = v5;
  *(_QWORD *)a1 = a1 + 16;
  std::string::reserve(a1, v5 + v6);
  if ( v7 > 0x3FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append((_QWORD *)a1, a2, v7);
  std::string::_M_append((_QWORD *)a1, *(_BYTE **)a3, *(_QWORD *)(a3 + 8));
  return a1;
}
