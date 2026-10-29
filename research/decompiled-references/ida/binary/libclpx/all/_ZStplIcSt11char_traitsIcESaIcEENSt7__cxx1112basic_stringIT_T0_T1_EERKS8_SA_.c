_QWORD *__fastcall std::operator+<char>(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  *a1 = a1 + 2;
  std::string::_M_construct<char *>();
  std::string::_M_append(a1, *a3, a3[1]);
  return a1;
}

