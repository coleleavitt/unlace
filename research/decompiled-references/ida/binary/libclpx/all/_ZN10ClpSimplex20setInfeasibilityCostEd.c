void __fastcall ClpSimplex::setInfeasibilityCost(ClpSimplex *this, double a2)
{
  if ( a2 > 0.0 )
    *((double *)this + 113) = a2;
}

