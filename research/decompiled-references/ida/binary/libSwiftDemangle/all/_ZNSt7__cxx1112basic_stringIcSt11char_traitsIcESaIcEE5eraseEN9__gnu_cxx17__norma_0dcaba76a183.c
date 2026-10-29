__int64 __fastcall std::string::erase(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2 - *a1;
  std::string::_M_erase(a1, v2, 1);
  return v2 + *a1;
}

