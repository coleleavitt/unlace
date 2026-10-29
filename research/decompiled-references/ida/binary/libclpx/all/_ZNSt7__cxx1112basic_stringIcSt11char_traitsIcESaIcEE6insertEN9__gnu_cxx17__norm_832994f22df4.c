__int64 __fastcall std::string::insert(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2 - *a1;
  std::string::_M_replace_aux();
  return v2 + *a1;
}

