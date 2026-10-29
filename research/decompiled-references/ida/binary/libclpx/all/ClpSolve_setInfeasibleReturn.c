__int64 __fastcall ClpSolve_setInfeasibleReturn(ClpSolve *a1, int a2)
{
  return ClpSolve::setInfeasibleReturn(a1, a2 != 0);
}

