// Alternative name is '_ZN16CoinPackedVectorD1Ev'
void __fastcall CoinPackedVector::~CoinPackedVector(CoinPackedVector *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *(_QWORD *)this = off_4D1A98;
  v2 = *((void **)this + 4);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 7);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 5);
  if ( v4 )
    operator delete[](v4);
  CoinPackedVectorBase::~CoinPackedVectorBase(this);
}

