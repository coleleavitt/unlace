void __fastcall CoinPrePostsolveMatrix::setObjOffset(CoinPrePostsolveMatrix *this, double a2)
{
  *((double *)this + 10) = a2;
}

