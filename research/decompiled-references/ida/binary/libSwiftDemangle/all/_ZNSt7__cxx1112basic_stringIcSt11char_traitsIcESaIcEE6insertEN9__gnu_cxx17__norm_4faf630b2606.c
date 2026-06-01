size_t __fastcall std::string::insert(_QWORD *a1, __int64 a2, size_t a3, char a4)
{
  size_t v4; // rbx

  v4 = a2 - *a1;
  std::string::_M_replace_aux(a1, v4, 0, a3, a4);
  return v4 + *a1;
}

