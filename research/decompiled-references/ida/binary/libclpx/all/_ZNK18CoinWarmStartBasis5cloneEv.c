__int64 __fastcall CoinWarmStartBasis::clone(CoinWarmStartBasis *this)
{
  CoinWarmStartBasis *v1; // rbx

  v1 = (CoinWarmStartBasis *)operator new(0x28u);
  CoinWarmStartBasis::CoinWarmStartBasis(v1, this);
  return (__int64)v1 + *(_QWORD *)(*(_QWORD *)v1 - 56LL);
}

