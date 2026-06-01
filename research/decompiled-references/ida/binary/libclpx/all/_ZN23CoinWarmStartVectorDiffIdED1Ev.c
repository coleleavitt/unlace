void __fastcall CoinWarmStartVectorDiff<double>::~CoinWarmStartVectorDiff(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_4D2628;
  v2 = (void *)a1[2];
  if ( v2 )
    operator delete[](v2);
  v3 = (void *)a1[3];
  if ( v3 )
    operator delete[](v3);
}

