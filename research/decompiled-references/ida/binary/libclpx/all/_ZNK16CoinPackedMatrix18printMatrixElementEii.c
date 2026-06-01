__int64 __fastcall CoinPackedMatrix::printMatrixElement(CoinPackedMatrix *this, int a2, int a3)
{
  CoinPackedMatrix::getMatrixElement(this, a2, a3);
  return std::ostream::_M_insert<double>();
}

