_QWORD *__fastcall std::string::operator=(_QWORD *a1, _BYTE *a2, size_t a3)
{
  std::string::_M_replace(a1, 0, a1[1], a2, a3);
  return a1;
}
