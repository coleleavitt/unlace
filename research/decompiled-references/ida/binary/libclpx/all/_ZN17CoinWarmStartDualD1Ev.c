void __fastcall CoinWarmStartDual::~CoinWarmStartDual(CoinWarmStartDual *this)
{
  void *v1; // rdi

  *(_QWORD *)this = off_4D26E8;
  *((_QWORD *)this + 1) = &off_4D25C8;
  v1 = *((void **)this + 3);
  if ( v1 )
    operator delete[](v1);
}

