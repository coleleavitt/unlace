__int64 __fastcall std::logic_error::operator=(__int64 a1, __int64 a2)
{
  std::string::assign((std::string *)(a1 + 8), (const std::string *)(a2 + 8));
  return a1;
}

