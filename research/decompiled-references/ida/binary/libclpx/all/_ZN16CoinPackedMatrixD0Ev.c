void __fastcall CoinPackedMatrix::~CoinPackedMatrix(CoinPackedMatrix *this)
{
  CoinPackedMatrix::~CoinPackedMatrix(this);
  operator delete(this);
}

