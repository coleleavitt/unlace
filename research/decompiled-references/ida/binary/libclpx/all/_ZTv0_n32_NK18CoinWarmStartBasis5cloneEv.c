__int64 __fastcall `virtual thunk to'CoinWarmStartBasis::clone(CoinWarmStartBasis *this)
{
  const CoinWarmStartBasis *v1; // rbp
  CoinWarmStartBasis *v2; // rbx

  v1 = (CoinWarmStartBasis *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL));
  v2 = (CoinWarmStartBasis *)operator new(0x28u);
  CoinWarmStartBasis::CoinWarmStartBasis(v2, v1);
  return (__int64)v2 + *(_QWORD *)(*(_QWORD *)v2 - 56LL);
}

