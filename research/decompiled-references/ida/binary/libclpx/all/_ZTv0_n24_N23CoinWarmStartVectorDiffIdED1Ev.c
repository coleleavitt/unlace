void __fastcall `virtual thunk to'CoinWarmStartVectorDiff<double>::~CoinWarmStartVectorDiff(_QWORD *a1)
{
  _QWORD *v1; // rbx
  void *v2; // rdi
  void *v3; // rdi

  v1 = (_QWORD *)((char *)a1 + *(_QWORD *)(*a1 - 24LL));
  v2 = (void *)v1[2];
  *v1 = &off_4D2628;
  if ( v2 )
    operator delete[](v2);
  v3 = (void *)v1[3];
  if ( v3 )
    operator delete[](v3);
}

