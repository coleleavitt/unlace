void __fastcall `virtual thunk to'CoinWarmStartBasisDiff::~CoinWarmStartBasisDiff(CoinWarmStartBasisDiff *this)
{
  CoinWarmStartBasisDiff *v1; // rbx

  v1 = (CoinWarmStartBasisDiff *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL));
  CoinWarmStartBasisDiff::~CoinWarmStartBasisDiff(v1);
  operator delete(v1);
}

