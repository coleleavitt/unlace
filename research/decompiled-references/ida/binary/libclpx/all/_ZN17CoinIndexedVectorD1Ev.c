// Alternative name is '_ZN17CoinIndexedVectorD2Ev'
void __fastcall CoinIndexedVector::~CoinIndexedVector(CoinIndexedVector *this)
{
  void *v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi

  v2 = *(void **)this;
  if ( v2 )
    operator delete[](v2);
  v3 = *((_QWORD *)this + 1);
  if ( v3 )
  {
    v4 = (void *)(v3 - 8LL * *((int *)this + 6));
    if ( v4 )
      operator delete[](v4);
  }
}

