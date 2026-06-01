void __fastcall ClpFactorization::cleanUp(ClpNetworkBasis **this)
{
  ClpNetworkBasis *v2; // rbp
  CoinFactorization *v3; // rdi

  v2 = *this;
  if ( *this )
  {
    ClpNetworkBasis::~ClpNetworkBasis(*this);
    operator delete(v2);
  }
  v3 = *(this + 1);
  *this = nullptr;
  if ( v3 )
    CoinFactorization::resetStatistics(v3);
}

