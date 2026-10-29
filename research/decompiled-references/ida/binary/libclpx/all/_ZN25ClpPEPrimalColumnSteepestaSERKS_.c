__int64 __fastcall ClpPEPrimalColumnSteepest::operator=(__int64 a1, __int64 a2)
{
  void *v2; // rbp

  if ( a1 != a2 )
  {
    ClpPrimalColumnSteepest::operator=();
    v2 = *(void **)(a1 + 112);
    if ( v2 )
    {
      ClpPESimplex::~ClpPESimplex(*(ClpPESimplex **)(a1 + 112));
      operator delete(v2);
    }
    *(_QWORD *)(a1 + 112) = 0;
  }
  return a1;
}

