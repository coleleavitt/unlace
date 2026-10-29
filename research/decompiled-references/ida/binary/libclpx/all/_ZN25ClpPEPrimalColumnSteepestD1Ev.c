// Alternative name is '_ZN25ClpPEPrimalColumnSteepestD2Ev'
void __fastcall ClpPEPrimalColumnSteepest::~ClpPEPrimalColumnSteepest(ClpPEPrimalColumnSteepest *this)
{
  ClpPESimplex *v1; // rbp

  v1 = *((ClpPESimplex **)this + 14);
  *(_QWORD *)this = &off_4D0B68;
  if ( v1 )
  {
    ClpPESimplex::~ClpPESimplex(v1);
    operator delete(v1);
  }
  ClpPrimalColumnSteepest::~ClpPrimalColumnSteepest(this);
}

