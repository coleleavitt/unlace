void __fastcall `virtual thunk to'CoinWarmStartBasis::~CoinWarmStartBasis(CoinWarmStartBasis *this)
{
  CoinWarmStartBasis *v1; // rbx

  v1 = (CoinWarmStartBasis *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL));
  CoinWarmStartBasis::~CoinWarmStartBasis(v1);
  operator delete(v1);
}

