void __fastcall CoinPrePostsolveMatrix::setDualTolerance(CoinPrePostsolveMatrix *this, double a2)
{
  *((double *)this + 18) = a2;
}

