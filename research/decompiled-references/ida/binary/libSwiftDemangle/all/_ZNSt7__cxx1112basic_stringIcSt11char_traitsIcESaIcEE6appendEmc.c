_QWORD *__fastcall std::string::append(_QWORD *a1, size_t a2, char a3)
{
  return std::string::_M_replace_aux(a1, a1[1], 0, a2, a3);
}

