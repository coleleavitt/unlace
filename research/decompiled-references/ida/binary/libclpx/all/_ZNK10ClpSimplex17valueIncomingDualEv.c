double __fastcall ClpSimplex::valueIncomingDual(ClpSimplex *this)
{
  double v1; // xmm0_8

  if ( *((_DWORD *)this + 289) == -1 )
    v1 = *((double *)this + 103);
  else
    v1 = *((double *)this + 101);
  return v1 - *((double *)this + 108) / *((double *)this + 99) * (double)*((int *)this + 291);
}

