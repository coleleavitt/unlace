// Alternative name is '_ZN16CoinPackedMatrixD2Ev'
void __fastcall CoinPackedMatrix::~CoinPackedMatrix(CoinPackedMatrix *this)
{
  *(_QWORD *)this = off_4D1A60;
  CoinPackedMatrix::gutsOfDestructor(this);
}

