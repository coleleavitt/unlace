// Alternative name is '_ZN14CoinModelHash2D2Ev'
void __fastcall CoinModelHash2::~CoinModelHash2(void **this)
{
  void *v1; // rdi

  v1 = *this;
  if ( v1 )
    operator delete[](v1);
}

