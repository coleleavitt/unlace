_QWORD *__fastcall std::string::operator=(_QWORD *a1, char a2)
{
  std::string::_M_replace_aux(a1, 0, a1[1], 1u, a2);
  return a1;
}

