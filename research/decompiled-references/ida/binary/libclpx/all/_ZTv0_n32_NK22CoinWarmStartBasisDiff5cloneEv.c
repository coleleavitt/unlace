__int64 __fastcall `virtual thunk to'CoinWarmStartBasisDiff::clone(CoinWarmStartBasisDiff *this)
{
  const CoinWarmStartBasisDiff *v1; // rbp
  CoinWarmStartBasisDiff *v2; // rbx

  v1 = (CoinWarmStartBasisDiff *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL));
  v2 = (CoinWarmStartBasisDiff *)operator new(0x18u);
  CoinWarmStartBasisDiff::CoinWarmStartBasisDiff(v2, v1);
  return (__int64)v2 + *(_QWORD *)(*(_QWORD *)v2 - 40LL);
}

