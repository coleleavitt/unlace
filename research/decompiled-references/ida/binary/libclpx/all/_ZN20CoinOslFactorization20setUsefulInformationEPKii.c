__int64 __fastcall CoinOslFactorization::setUsefulInformation(CoinOslFactorization *this, const int *a2)
{
  __int64 result; // rax

  result = *(unsigned int *)a2;
  *((_DWORD *)this + 105) = result;
  return result;
}

