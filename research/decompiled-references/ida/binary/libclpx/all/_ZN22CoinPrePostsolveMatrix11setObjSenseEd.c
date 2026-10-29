void __fastcall CoinPrePostsolveMatrix::setObjSense(CoinPrePostsolveMatrix *this, double a2)
{
  *((double *)this + 19) = a2;
}

