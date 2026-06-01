// attributes: thunk
__int64 __fastcall ClpSimplex::nonlinearSLP(ClpSimplex *this, int a2, ClpConstraint **a3, int a4, double a5)
{
  return ClpSimplexNonlinear::primalSLP(this, a2, a3, a4, a5);
}

