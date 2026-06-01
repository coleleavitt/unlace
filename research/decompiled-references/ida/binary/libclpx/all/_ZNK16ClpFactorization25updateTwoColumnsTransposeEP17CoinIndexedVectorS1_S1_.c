CoinFactorization *__fastcall ClpFactorization::updateTwoColumnsTranspose(
        ClpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4)
{
  CoinFactorization *result; // rax
  int v5; // r8d

  result = *((CoinFactorization **)this + 1);
  if ( result )
    v5 = *((_DWORD *)result + 8);
  else
    v5 = *(_DWORD *)(*((_QWORD *)this + 2) + 36LL);
  if ( v5 )
  {
    if ( *(_QWORD *)this )
    {
      ClpFactorization::updateColumnTranspose(this, a2, a3);
      return (CoinFactorization *)ClpFactorization::updateColumnTranspose(this, a2, a4);
    }
    else if ( result )
    {
      return (CoinFactorization *)CoinFactorization::updateTwoColumnsTranspose(result, a2, a3, a4, 0);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, CoinIndexedVector *, CoinIndexedVector *))(**((_QWORD **)this + 2) + 216LL))(
        *((_QWORD *)this + 2),
        a2,
        a3);
      return (CoinFactorization *)(*(__int64 (__fastcall **)(_QWORD, CoinIndexedVector *, CoinIndexedVector *))(**((_QWORD **)this + 2) + 216LL))(
                                    *((_QWORD *)this + 2),
                                    a2,
                                    a4);
    }
  }
  return result;
}

