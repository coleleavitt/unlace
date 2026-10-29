__int64 __fastcall ClpSimplex::nonlinearSLP(ClpSimplex *this, int a2, double a3)
{
  return ClpSimplexNonlinear::primalSLP(this, a2, a3, 0);
}

