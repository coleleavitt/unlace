// Alternative name is '_ZN7CoinSetD2Ev'
void __fastcall CoinSet::~CoinSet(CoinSet *this)
{
  void *v2; // rdi
  void *v3; // rdi

  *(_QWORD *)this = off_4D1908;
  v2 = *((void **)this + 2);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 3);
  if ( v3 )
    operator delete[](v3);
}

