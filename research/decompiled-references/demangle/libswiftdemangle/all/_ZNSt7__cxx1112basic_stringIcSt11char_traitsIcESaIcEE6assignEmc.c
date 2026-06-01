_QWORD *__fastcall std::string::assign(_QWORD *a1, size_t a2, char a3)
{
  return std::string::_M_replace_aux(a1, 0, a1[1], a2, a3);
}
