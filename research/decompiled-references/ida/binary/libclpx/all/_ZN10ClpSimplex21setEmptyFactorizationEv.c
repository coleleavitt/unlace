void __fastcall ClpSimplex::setEmptyFactorization(ClpSimplex *this)
{
  ClpFactorization *v1; // rax
  void *v2; // rbp
  __int64 v3; // rax
  CoinFactorization *v4; // rdi
  __int64 v5; // rdi

  v1 = *((ClpFactorization **)this + 158);
  if ( v1 )
  {
    ClpFactorization::cleanUp(v1);
    if ( (*((_BYTE *)this + 338) & 1) != 0 )
    {
      v3 = *((_QWORD *)this + 158);
      if ( v3 )
      {
        v4 = *(CoinFactorization **)(v3 + 8);
        if ( v4 )
        {
          CoinFactorization::almostDestructor(v4);
        }
        else
        {
          v5 = *(_QWORD *)(v3 + 16);
          if ( v5 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 112LL))(v5);
        }
      }
    }
    else
    {
      v2 = *((void **)this + 158);
      if ( v2 )
      {
        ClpFactorization::~ClpFactorization(*((ClpFactorization **)this + 158));
        operator delete(v2);
      }
      *((_QWORD *)this + 158) = 0;
    }
  }
}

