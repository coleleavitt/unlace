// Alternative name is '_ZN20ClpPEDualRowSteepestD1Ev'
void __fastcall ClpPEDualRowSteepest::~ClpPEDualRowSteepest(ClpPEDualRowSteepest *this)
{
  ClpPESimplex *v1; // rbp

  v1 = *((ClpPESimplex **)this + 9);
  *(_QWORD *)this = &off_4D0AE0;
  if ( v1 )
  {
    ClpPESimplex::~ClpPESimplex(v1);
    operator delete(v1);
  }
  ClpDualRowSteepest::~ClpDualRowSteepest(this);
}

