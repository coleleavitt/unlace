void __fastcall ClpSimplex::setFactorization(ClpSimplex *this, ClpFactorization *a2)
{
  ClpFactorization *v3; // rdi
  ClpFactorization *v4; // r12

  v3 = *((ClpFactorization **)this + 158);
  if ( v3 )
  {
    ClpFactorization::setFactorization(v3, a2);
  }
  else
  {
    v4 = (ClpFactorization *)operator new(0x50u);
    ClpFactorization::ClpFactorization(v4, a2, *((_DWORD *)this + 26));
    *((_QWORD *)this + 158) = v4;
  }
}

