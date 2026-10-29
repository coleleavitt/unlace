void __fastcall ClpFactorization::forceOtherFactorization(ClpFactorization *this, int a2)
{
  __int64 v3; // rdi
  void *v4; // r12
  CoinOslFactorization *v5; // rbp
  CoinFactorization *v6; // rbp
  CoinDenseFactorization *v7; // rbp
  CoinSimpFactorization *v8; // rbp

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 2) = 0;
  v4 = *((void **)this + 1);
  if ( (unsigned int)(a2 - 1) > 2 )
  {
    if ( !v4 )
    {
      v6 = (CoinFactorization *)operator new(0x488u);
      CoinFactorization::CoinFactorization(v6);
      *((_QWORD *)this + 1) = v6;
      *(_QWORD *)((char *)this + 28) = -1;
      *((_DWORD *)this + 9) = -1;
    }
  }
  else
  {
    if ( v4 )
    {
      CoinFactorization::~CoinFactorization(*((CoinFactorization **)this + 1));
      operator delete(v4);
    }
    *((_QWORD *)this + 1) = 0;
    *((_DWORD *)this + 6) = a2;
    if ( a2 == 2 )
    {
      v8 = (CoinSimpFactorization *)operator new(0x240u);
      CoinSimpFactorization::CoinSimpFactorization(v8);
      *((_QWORD *)this + 2) = v8;
      *((_DWORD *)this + 8) = 0x7FFFFFFF;
    }
    else if ( a2 == 3 )
    {
      v5 = (CoinOslFactorization *)operator new(0x1F0u);
      CoinOslFactorization::CoinOslFactorization(v5);
      *((_QWORD *)this + 2) = v5;
      *((_DWORD *)this + 7) = 0x7FFFFFFF;
    }
    else
    {
      v7 = (CoinDenseFactorization *)operator new(0x68u);
      CoinDenseFactorization::CoinDenseFactorization(v7);
      *((_QWORD *)this + 2) = v7;
      *((_DWORD *)this + 9) = 0x7FFFFFFF;
    }
  }
}

