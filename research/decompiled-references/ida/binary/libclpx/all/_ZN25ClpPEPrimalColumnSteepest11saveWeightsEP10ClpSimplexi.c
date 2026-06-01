__int64 __fastcall ClpPEPrimalColumnSteepest::saveWeights(ClpPEPrimalColumnSteepest *this, ClpSimplex *a2, int a3)
{
  ClpSimplex **v4; // rbp
  ClpPESimplex *v5; // rbp

  v4 = *((ClpSimplex ***)this + 14);
  if ( v4 )
  {
    if ( a2 != v4[12] )
      goto LABEL_3;
    if ( (unsigned __int8)ClpPESimplex::checkSize(*((ClpPESimplex **)this + 14)) )
      return ClpPrimalColumnSteepest::saveWeights(this, a2, a3);
    v4 = *((ClpSimplex ***)this + 14);
    if ( v4 )
    {
LABEL_3:
      ClpPESimplex::~ClpPESimplex((ClpPESimplex *)v4);
      operator delete(v4);
    }
  }
  v5 = (ClpPESimplex *)operator new(0xE8u);
  ClpPESimplex::ClpPESimplex(v5, a2);
  *((_QWORD *)this + 14) = v5;
  return ClpPrimalColumnSteepest::saveWeights(this, a2, a3);
}

