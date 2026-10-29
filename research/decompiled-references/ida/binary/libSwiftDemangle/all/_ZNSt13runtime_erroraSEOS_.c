__int64 __fastcall std::runtime_error::operator=(__int64 a1, __int64 a2)
{
  std::string::swap((std::string *)(a1 + 8), (std::string *)(a2 + 8));
  return a1;
}

