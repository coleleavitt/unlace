// Alternative name is '_ZN14CoinSearchTreeI26CoinSearchTreeCompareDepthED2Ev'
void __fastcall CoinSearchTree<CoinSearchTreeCompareDepth>::~CoinSearchTree(_QWORD *a1)
{
  void *v1; // rdi

  *a1 = &off_4D2170;
  v1 = (void *)a1[1];
  if ( v1 )
    operator delete(v1);
}

