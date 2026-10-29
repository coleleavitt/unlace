_QWORD *__fastcall std::string::assign(_QWORD *a1, char *a2)
{
  size_t v2; // rax

  v2 = strlen(a2);
  return std::string::_M_replace(a1, 0, a1[1], a2, v2);
}

