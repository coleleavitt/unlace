void __fastcall ClpSimplex::setDualBound(ClpSimplex *this, double a2)
{
  if ( a2 > 0.0 )
    *((double *)this + 98) = a2;
}

