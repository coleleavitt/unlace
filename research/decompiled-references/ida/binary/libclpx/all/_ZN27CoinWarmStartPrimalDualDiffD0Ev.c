void __fastcall CoinWarmStartPrimalDualDiff::~CoinWarmStartPrimalDualDiff(CoinWarmStartPrimalDualDiff *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  *(_QWORD *)this = off_4D2798;
  *((_QWORD *)this + 5) = &off_4D2628;
  v2 = *((void **)this + 7);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 8);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 3);
  *((_QWORD *)this + 1) = &off_4D2628;
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 4);
  if ( v5 )
    operator delete[](v5);
  operator delete(this);
}

