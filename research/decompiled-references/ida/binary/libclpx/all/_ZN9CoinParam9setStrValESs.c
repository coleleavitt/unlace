__int64 __fastcall CoinParam::setStrVal(__int64 a1, const std::string *a2)
{
  return std::string::assign((std::string *)(a1 + 80), a2);
}

