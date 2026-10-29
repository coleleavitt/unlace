void __fastcall CoinWarmStartDual::~CoinWarmStartDual(CoinWarmStartDual *this)
{
  void *v2; // rdi

  *(_QWORD *)this = off_4D26E8;
  *((_QWORD *)this + 1) = &off_4D25C8;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  operator delete(this);
}

