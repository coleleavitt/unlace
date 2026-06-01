char __fastcall ClpSimplex::isObjectiveLimitTestValid(ClpSimplex *this)
{
  int v1; // edx
  int v2; // eax

  v1 = *((_DWORD *)this + 80);
  LOBYTE(v2) = 1;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      return *((_DWORD *)this + 325) >> 31;
    }
    else
    {
      LOBYTE(v2) = 0;
      if ( v1 == 2 )
        LOBYTE(v2) = *((_DWORD *)this + 325) > 0;
    }
  }
  return v2;
}

