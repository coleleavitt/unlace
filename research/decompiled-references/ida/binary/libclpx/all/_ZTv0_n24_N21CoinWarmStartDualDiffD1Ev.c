void __fastcall `virtual thunk to'CoinWarmStartDualDiff::~CoinWarmStartDualDiff(CoinWarmStartDualDiff *this)
{
  _QWORD *v1; // rbx
  void *v2; // rdi
  void *v3; // rdi

  v1 = (_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL));
  *v1 = off_4D2680;
  v2 = (void *)v1[3];
  v1[1] = &off_4D2628;
  if ( v2 )
    operator delete[](v2);
  v3 = (void *)v1[4];
  if ( v3 )
    operator delete[](v3);
}

