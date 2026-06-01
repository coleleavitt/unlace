__int64 __fastcall CoinPrePostsolveMatrix::setStatus(CoinPrePostsolveMatrix *this, const CoinWarmStartBasis *a2)
{
  CoinPrePostsolveMatrix::setStructuralStatus(this, *((const char **)a2 + 3), *((_DWORD *)a2 + 2));
  return CoinPrePostsolveMatrix::setArtificialStatus(this, *((const char **)a2 + 4), *((_DWORD *)a2 + 3));
}

