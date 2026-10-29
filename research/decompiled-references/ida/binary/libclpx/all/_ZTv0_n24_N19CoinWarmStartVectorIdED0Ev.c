void __fastcall `virtual thunk to'CoinWarmStartVector<double>::~CoinWarmStartVector(_QWORD *a1)
{
  _QWORD *v1; // rbx
  void *v2; // rdi

  v1 = (_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL));
  v2 = (void *)v1[2];
  *v1 = &off_4D25C8;
  if ( v2 )
    operator delete[](v2);
  operator delete(v1);
}

