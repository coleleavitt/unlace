void __fastcall `virtual thunk to'CoinWarmStartVector<double>::~CoinWarmStartVector(_QWORD *a1)
{
  _QWORD *v1; // rdi
  void *v2; // rdi

  v1 = (_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL));
  *v1 = &off_4D25C8;
  v2 = (void *)v1[2];
  if ( v2 )
    operator delete[](v2);
}

