// Alternative name is '_ZN23ClpPrimalColumnSteepestD2Ev'
void __fastcall ClpPrimalColumnSteepest::~ClpPrimalColumnSteepest(ClpPrimalColumnSteepest *this)
{
  void *v2; // rdi
  void *v3; // rbp
  void *v4; // rbp
  void *v5; // rdi
  void *v6; // rdi

  *(_QWORD *)this = &off_4D1208;
  v2 = *((void **)this + 4);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 5);
  if ( v3 )
  {
    CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + 5));
    operator delete(v3);
  }
  v4 = *((void **)this + 6);
  if ( v4 )
  {
    CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + 6));
    operator delete(v4);
  }
  v5 = *((void **)this + 7);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 8);
  if ( v6 )
    operator delete[](v6);
  ClpPrimalColumnPivot::~ClpPrimalColumnPivot(this);
}

