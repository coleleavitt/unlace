void __fastcall ClpSimplex::unmarkHotStart(CoinMessageHandler **this, void *a2)
{
  void *v2; // rbp

  CoinMessageHandler::setLogLevel(*(this + 43), *((_DWORD *)a2 + 4));
  ClpSimplex::deleteRim((ClpSimplex *)this, 0);
  v2 = *((void **)a2 + 1);
  if ( v2 )
  {
    ClpFactorization::~ClpFactorization(*((ClpFactorization **)a2 + 1));
    operator delete(v2);
  }
  if ( *(_QWORD *)a2 )
    operator delete[](*(void **)a2);
  operator delete(a2);
}

