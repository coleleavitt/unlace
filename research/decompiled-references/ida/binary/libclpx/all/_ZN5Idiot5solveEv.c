void __fastcall Idiot::solve(Idiot *this)
{
  _BYTE v1[56]; // [rsp+0h] [rbp-38h] BYREF

  CoinMessages::CoinMessages((CoinMessages *)v1, 0);
  Idiot::solve2(this, nullptr, (const CoinMessages *)v1);
  CoinMessages::~CoinMessages((CoinMessages *)v1);
}

