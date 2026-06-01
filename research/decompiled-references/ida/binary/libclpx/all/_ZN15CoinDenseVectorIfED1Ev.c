// Alternative name is '_ZN15CoinDenseVectorIfED2Ev'
void __fastcall CoinDenseVector<float>::~CoinDenseVector(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    operator delete[](v1);
}

