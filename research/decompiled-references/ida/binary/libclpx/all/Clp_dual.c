__int64 __fastcall Clp_dual(ClpSimplex **a1, int a2)
{
  return ClpSimplex::dual(*a1, a2, 0);
}

