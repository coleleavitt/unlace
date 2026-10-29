// Alternative name is '_ZN18ClpDualRowSteepestD1Ev'
void __fastcall ClpDualRowSteepest::~ClpDualRowSteepest(ClpDualRowSteepest *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rbp
  void *v5; // rbp
  void *v6; // rbp

  *(_QWORD *)this = &off_4D0190;
  v2 = *((void **)this + 4);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 8);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 5);
  if ( v4 )
  {
    CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + 5));
    operator delete(v4);
  }
  v5 = *((void **)this + 6);
  if ( v5 )
  {
    CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + 6));
    operator delete(v5);
  }
  v6 = *((void **)this + 7);
  if ( v6 )
  {
    CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + 7));
    operator delete(v6);
  }
  ClpDualRowPivot::~ClpDualRowPivot(this);
}

