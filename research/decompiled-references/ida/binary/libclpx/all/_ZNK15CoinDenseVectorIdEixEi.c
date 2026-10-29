__int64 __fastcall CoinDenseVector<double>::operator[](__int64 a1, int a2)
{
  return *(_QWORD *)(a1 + 8) + 8LL * a2;
}

