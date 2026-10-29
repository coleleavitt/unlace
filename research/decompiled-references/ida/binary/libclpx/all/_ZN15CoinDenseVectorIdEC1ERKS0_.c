// Alternative name is '_ZN15CoinDenseVectorIdEC2ERKS0_'
__int64 __fastcall CoinDenseVector<double>::CoinDenseVector(__int64 a1, unsigned int *a2)
{
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  return CoinDenseVector<double>::setVector(a1, *a2, *((_QWORD *)a2 + 1));
}

