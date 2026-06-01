void __fastcall ClpSimplex::setLargeValue(ClpSimplex *this, double a2)
{
  if ( a2 > 0.0 && a2 < 1.797693134862316e308 )
    *((double *)this + 94) = a2;
}

