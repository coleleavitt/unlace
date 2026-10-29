__int64 __fastcall ClpPEDualRowSteepest::operator=(__int64 a1, __int64 a2)
{
  void *v2; // rbp

  if ( a1 != a2 )
  {
    ClpDualRowSteepest::operator=();
    v2 = *(void **)(a1 + 72);
    if ( v2 )
    {
      ClpPESimplex::~ClpPESimplex(*(ClpPESimplex **)(a1 + 72));
      operator delete(v2);
    }
    *(_QWORD *)(a1 + 72) = 0;
  }
  return a1;
}

