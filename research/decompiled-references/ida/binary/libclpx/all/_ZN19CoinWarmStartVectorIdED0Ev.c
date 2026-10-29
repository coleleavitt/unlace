void __fastcall CoinWarmStartVector<double>::~CoinWarmStartVector(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_4D25C8;
  v2 = (void *)a1[2];
  if ( v2 )
    operator delete[](v2);
  operator delete(a1);
}

