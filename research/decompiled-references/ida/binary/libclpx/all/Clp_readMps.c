__int64 __fastcall Clp_readMps(ClpSimplex **a1, const char *a2, int a3, int a4)
{
  return ClpSimplex::readMps(*a1, a2, a3 != 0, a4 != 0);
}

