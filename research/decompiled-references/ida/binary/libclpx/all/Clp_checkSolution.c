__int64 __fastcall Clp_checkSolution(ClpSimplex **a1)
{
  return ClpSimplex::checkSolution(*a1, 0);
}

