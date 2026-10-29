void __fastcall ClpModel::newLanguage(__int64 a1)
{
  _BYTE v1[56]; // [rsp+0h] [rbp-38h] BYREF

  ClpMessage::ClpMessage((ClpMessage *)v1);
  CoinMessages::operator=(a1 + 416, v1);
  CoinMessages::~CoinMessages((CoinMessages *)v1);
}

