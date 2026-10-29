__int64 __fastcall ClpSimplex::cleanFactorization(ClpSimplex *this, int a2)
{
  int v2; // eax
  unsigned int v3; // edx

  if ( a2 )
    a2 = 10;
  v2 = ClpSimplex::internalFactorize(this, a2);
  v3 = 1;
  if ( v2 >= 0 )
  {
    *((_DWORD *)this + 337) = 0;
    return 0;
  }
  return v3;
}

