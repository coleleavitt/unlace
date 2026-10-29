void __fastcall CoinPrePostsolveMatrix::setPrimalTolerance(CoinPrePostsolveMatrix *this, double a2)
{
  *((double *)this + 17) = a2;
}

