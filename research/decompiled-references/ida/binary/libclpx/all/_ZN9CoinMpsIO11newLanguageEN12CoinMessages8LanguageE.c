void __fastcall CoinMpsIO::newLanguage(__int64 a1, __int64 a2)
{
  _BYTE v2[56]; // [rsp+0h] [rbp-38h] BYREF

  CoinMessage::CoinMessage(v2, a2);
  CoinMessages::operator=(a1 + 240, v2);
  CoinMessages::~CoinMessages((CoinMessages *)v2);
}

