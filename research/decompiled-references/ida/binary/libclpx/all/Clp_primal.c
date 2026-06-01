__int64 __fastcall Clp_primal(ClpSimplex **a1, int a2)
{
  return ClpSimplex::primal(*a1, a2, 0);
}

