// Alternative name is '_ZN15CoinDenseVectorIdEC1EiPKd'
__int64 __fastcall CoinDenseVector<double>::CoinDenseVector(__int64 a1)
{
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return CoinDenseVector<double>::gutsOfSetVector();
}

