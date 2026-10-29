size_t __fastcall std::string::insert(_QWORD *a1, __int64 a2, char a3)
{
  size_t v3; // rbx

  v3 = a2 - *a1;
  std::string::_M_replace_aux(a1, v3, 0, 1u, a3);
  return v3 + *a1;
}

