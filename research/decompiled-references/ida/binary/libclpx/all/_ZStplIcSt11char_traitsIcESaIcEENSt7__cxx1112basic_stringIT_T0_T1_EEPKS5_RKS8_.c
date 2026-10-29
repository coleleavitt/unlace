__int64 __fastcall std::operator+<char>(__int64 a1, const char *a2, _QWORD *a3)
{
  size_t v4; // rax
  unsigned __int64 v5; // rbp

  v4 = strlen(a2);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v5 = v4;
  std::string::reserve(a1, v4 + a3[1]);
  if ( v5 > 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(a1, a2, v5);
  std::string::_M_append(a1, *a3, a3[1]);
  return a1;
}

