void __fastcall CoinFactorization::sparseThreshold(CoinFactorization *this, int a2)
{
  if ( a2 <= 0 )
  {
    if ( !a2 && *((_DWORD *)this + 262) )
    {
      *((_QWORD *)this + 131) = 0;
      CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1104));
      CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1056));
      CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1080));
      CoinArrayWithLength::conditionalDelete((CoinFactorization *)((char *)this + 1128));
    }
  }
  else if ( *((_DWORD *)this + 262) )
  {
    *((_DWORD *)this + 262) = a2;
    *((_DWORD *)this + 263) = a2;
  }
  else
  {
    if ( a2 == 1 )
      a2 = 0;
    *((_DWORD *)this + 262) = a2;
    *((_DWORD *)this + 263) = a2;
    CoinFactorization::goSparse(this);
  }
}

