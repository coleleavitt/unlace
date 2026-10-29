_QWORD *__fastcall std::string::replace(_QWORD *a1, __int64 a2, __int64 a3, size_t a4, char a5)
{
  return std::string::_M_replace_aux(a1, a2 - *a1, a3 - a2, a4, a5);
}
