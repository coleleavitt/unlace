double __fastcall ClpSimplex::doubleCheck(ClpSimplex *this)
{
  *((_DWORD *)this + 79) = 0;
  ClpSimplex::dual(this, 0, 7);
  ClpSimplex::computeObjectiveValue(this, 0);
  return (*((double *)this + 9) * *(double *)this - *((double *)this + 5)) * *(double *)this;
}

