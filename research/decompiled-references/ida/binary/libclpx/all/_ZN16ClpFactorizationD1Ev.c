// Alternative name is '_ZN16ClpFactorizationD2Ev'
void __fastcall ClpFactorization::~ClpFactorization(ClpNetworkBasis **this)
{
  ClpNetworkBasis *v1; // rbp
  void *v2; // rbp
  __int64 v3; // rdi

  v1 = *this;
  if ( *this )
  {
    ClpNetworkBasis::~ClpNetworkBasis(*this);
    operator delete(v1);
  }
  v2 = *(this + 1);
  if ( v2 )
  {
    CoinFactorization::~CoinFactorization(*(this + 1));
    operator delete(v2);
  }
  v3 = (__int64)*(this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
}

