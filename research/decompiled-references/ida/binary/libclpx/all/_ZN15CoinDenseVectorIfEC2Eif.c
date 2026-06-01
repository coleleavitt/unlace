// Alternative name is '_ZN15CoinDenseVectorIfEC1Eif'
__int64 __fastcall CoinDenseVector<float>::CoinDenseVector(__int64 a1)
{
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return CoinDenseVector<float>::gutsOfSetConstant();
}

