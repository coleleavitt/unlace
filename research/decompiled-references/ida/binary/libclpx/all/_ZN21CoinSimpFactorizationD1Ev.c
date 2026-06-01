// Alternative name is '_ZN21CoinSimpFactorizationD2Ev'
void __fastcall CoinSimpFactorization::~CoinSimpFactorization(CoinSimpFactorization *this)
{
  *(_QWORD *)this = off_4D2208;
  CoinSimpFactorization::gutsOfDestructor(this);
  CoinOtherFactorization::~CoinOtherFactorization(this);
}

