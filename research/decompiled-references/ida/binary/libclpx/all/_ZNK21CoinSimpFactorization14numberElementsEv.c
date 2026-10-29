__int64 __fastcall CoinSimpFactorization::numberElements(CoinSimpFactorization *this)
{
  return (unsigned int)(*((_DWORD *)this + 9) * (*((_DWORD *)this + 10) + *((_DWORD *)this + 13)));
}

