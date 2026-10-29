void __fastcall CoinWarmStartBasis::~CoinWarmStartBasis(CoinWarmStartBasis *this)
{
  void *v1; // rdi

  *(_QWORD *)this = off_4D2418;
  v1 = *((void **)this + 3);
  if ( v1 )
    operator delete[](v1);
}

