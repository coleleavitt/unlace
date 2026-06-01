__int64 __fastcall CoinWarmStartBasisDiff::clone(CoinWarmStartBasisDiff *this)
{
  CoinWarmStartBasisDiff *v1; // rbx

  v1 = (CoinWarmStartBasisDiff *)operator new(0x18u);
  CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(v1, this);
  return (__int64)v1 + *(_QWORD *)(*(_QWORD *)v1 - 40LL);
}

