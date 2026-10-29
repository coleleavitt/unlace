void __fastcall `virtual thunk to'CoinWarmStartDual::~CoinWarmStartDual(CoinWarmStartDual *this)
{
  _QWORD *v1; // rdi
  void *v2; // rdi

  v1 = (_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL));
  *v1 = off_4D26E8;
  v1[1] = &off_4D25C8;
  v2 = (void *)v1[3];
  if ( v2 )
    operator delete[](v2);
}

