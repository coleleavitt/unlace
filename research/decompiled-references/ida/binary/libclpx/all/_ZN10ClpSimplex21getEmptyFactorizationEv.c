ClpFactorization *__fastcall ClpSimplex::getEmptyFactorization(ClpSimplex *this)
{
  ClpFactorization *v2; // rbx
  ClpFactorization *v4; // rbx
  CoinFactorization *v5; // rdi

  if ( (*((_BYTE *)this + 338) & 1) != 0 )
  {
    v2 = *((ClpFactorization **)this + 158);
    if ( !v2 )
    {
      v2 = (ClpFactorization *)operator new(0x50u);
      ClpFactorization::ClpFactorization(v2);
      v5 = *((CoinFactorization **)v2 + 1);
      *((_QWORD *)this + 158) = v2;
      if ( v5 )
      {
        CoinFactorization::setPersistenceFlag(v5, 1);
        return *((ClpFactorization **)this + 158);
      }
    }
    return v2;
  }
  else
  {
    v4 = (ClpFactorization *)operator new(0x50u);
    ClpFactorization::ClpFactorization(v4);
    *((_QWORD *)this + 158) = v4;
    return v4;
  }
}

