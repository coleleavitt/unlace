void __fastcall CoinSearchTree<CoinSearchTreeCompareDepth>::~CoinSearchTree(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_4D2170;
  v2 = (void *)a1[1];
  if ( v2 )
    operator delete(v2);
  operator delete(a1);
}

