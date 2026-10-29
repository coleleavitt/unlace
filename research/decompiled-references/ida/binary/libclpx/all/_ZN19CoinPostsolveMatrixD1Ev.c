// Alternative name is '_ZN19CoinPostsolveMatrixD2Ev'
void __fastcall CoinPostsolveMatrix::~CoinPostsolveMatrix(CoinPostsolveMatrix *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *((void **)this + 33);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 34);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 35);
  if ( v4 )
    operator delete[](v4);
  CoinPrePostsolveMatrix::~CoinPrePostsolveMatrix(this);
}

