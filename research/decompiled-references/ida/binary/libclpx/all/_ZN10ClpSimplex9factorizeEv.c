__int64 __fastcall ClpSimplex::factorize(ClpSimplex *this)
{
  unsigned int v1; // ebp

  ClpSimplex::createRim(this, 63, 0, 0);
  v1 = ClpSimplex::internalFactorize(this, -1);
  ClpSimplex::deleteRim(this, 0);
  return v1;
}

