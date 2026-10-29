void __fastcall CoinWarmStartVector<double>::~CoinWarmStartVector(_QWORD *a1)
{
  void *v1; // rdi

  *a1 = &off_4D25C8;
  v1 = (void *)a1[2];
  if ( v1 )
    operator delete[](v1);
}

