__int64 __fastcall CoinDenseFactorization::indices(CoinDenseFactorization *this)
{
  return *((_QWORD *)this + 10) + 8LL * *((_DWORD *)this + 9) * *((_DWORD *)this + 9);
}

