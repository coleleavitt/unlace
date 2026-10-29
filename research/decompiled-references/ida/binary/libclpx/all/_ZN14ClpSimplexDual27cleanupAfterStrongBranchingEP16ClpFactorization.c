void __fastcall ClpSimplexDual::cleanupAfterStrongBranching(ClpFactorization **this, ClpFactorization *a2)
{
  void *v2; // rbp

  if ( (*((_BYTE *)this + 337) & 0x10) == 0 && *(this + 129) )
  {
    ClpSimplex::deleteRim((ClpSimplex *)this, 1);
    *((_DWORD *)this + 79) &= 0xFFFF0000;
  }
  else
  {
    v2 = *(this + 158);
    if ( v2 )
    {
      ClpFactorization::~ClpFactorization(*(this + 158));
      operator delete(v2);
    }
    *(this + 158) = a2;
    *((_DWORD *)this + 79) &= 0xFFFF0000;
  }
}

