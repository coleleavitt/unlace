void __fastcall `virtual thunk to'CoinWarmStartPrimalDualDiff::~CoinWarmStartPrimalDualDiff(
        CoinWarmStartPrimalDualDiff *this)
{
  _QWORD *v1; // rbx
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v1 = (_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL));
  v2 = (void *)v1[7];
  *v1 = off_4D2798;
  v1[5] = &off_4D2628;
  if ( v2 )
    operator delete[](v2);
  v3 = (void *)v1[8];
  if ( v3 )
    operator delete[](v3);
  v4 = (void *)v1[3];
  v1[1] = &off_4D2628;
  if ( v4 )
    operator delete[](v4);
  v5 = (void *)v1[4];
  if ( v5 )
    operator delete[](v5);
  operator delete(v1);
}

