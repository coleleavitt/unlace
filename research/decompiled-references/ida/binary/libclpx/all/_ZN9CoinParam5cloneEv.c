CoinParam *__fastcall CoinParam::clone(CoinParam *this)
{
  CoinParam *v1; // rbx

  v1 = (CoinParam *)operator new(0xA0u);
  CoinParam::CoinParam(v1, this);
  return v1;
}

