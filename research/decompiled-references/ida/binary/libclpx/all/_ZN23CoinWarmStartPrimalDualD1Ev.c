void __fastcall CoinWarmStartPrimalDual::~CoinWarmStartPrimalDual(CoinWarmStartPrimalDual *this)
{
  void *v2; // rdi
  void *v3; // rdi

  *(_QWORD *)this = off_4D27F8;
  *((_QWORD *)this + 4) = &off_4D25C8;
  v2 = *((void **)this + 6);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 3);
  *((_QWORD *)this + 1) = &off_4D25C8;
  if ( v3 )
    operator delete[](v3);
}

