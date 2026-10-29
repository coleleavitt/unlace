void __fastcall CoinWarmStartBasis::~CoinWarmStartBasis(CoinWarmStartBasis *this, __int64 *a2)
{
  __int64 v2; // rax
  void *v3; // rdi

  v2 = *a2;
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(v2 - 56)) = a2[1];
  v3 = *((void **)this + 3);
  if ( v3 )
    operator delete[](v3);
}

