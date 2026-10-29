void __fastcall CoinWarmStartDualDiff::~CoinWarmStartDualDiff(CoinWarmStartDualDiff *this)
{
  void *v2; // rdi
  void *v3; // rdi

  *(_QWORD *)this = off_4D2680;
  *((_QWORD *)this + 1) = &off_4D2628;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 4);
  if ( v3 )
    operator delete[](v3);
  operator delete(this);
}

