__int64 __fastcall CoinDenseVector<float>::operator[](__int64 a1, int a2)
{
  return *(_QWORD *)(a1 + 8) + 4LL * a2;
}

