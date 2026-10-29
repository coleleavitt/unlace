__int64 __fastcall ClpSimplex::createRim5(ClpSimplex *this, bool a2)
{
  ClpSimplex::createRim4(this, a2);
  return ClpSimplex::createRim1(this, a2);
}

