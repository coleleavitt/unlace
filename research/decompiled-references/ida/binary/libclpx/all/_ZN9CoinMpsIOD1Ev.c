// Alternative name is '_ZN9CoinMpsIOD2Ev'
void __fastcall CoinMpsIO::~CoinMpsIO(CoinMpsIO *this)
{
  CoinMpsIO::gutsOfDestructor(this);
  CoinMessages::~CoinMessages((CoinMpsIO *)((char *)this + 240));
}

