void __fastcall ClpFactorization::goDenseOrSmall(ClpFactorization *this, int a2)
{
  void *v3; // rbp
  __int64 v4; // rdi
  CoinDenseFactorization *v5; // rbp
  void *v6; // rbp
  __int64 v7; // rdi
  void *v8; // rbp
  __int64 v9; // rdi

  if ( !*((_DWORD *)this + 6) )
  {
    if ( *((_DWORD *)this + 9) >= a2 )
    {
      v3 = *((void **)this + 1);
      if ( v3 )
      {
        CoinFactorization::~CoinFactorization(*((CoinFactorization **)this + 1));
        operator delete(v3);
      }
      v4 = *((_QWORD *)this + 2);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *((_QWORD *)this + 1) = 0;
      v5 = (CoinDenseFactorization *)operator new(0x68u);
      CoinDenseFactorization::CoinDenseFactorization(v5);
LABEL_8:
      *((_QWORD *)this + 2) = v5;
      return;
    }
    if ( *((_DWORD *)this + 8) >= a2 )
    {
      v6 = *((void **)this + 1);
      if ( v6 )
      {
        CoinFactorization::~CoinFactorization(*((CoinFactorization **)this + 1));
        operator delete(v6);
      }
      v7 = *((_QWORD *)this + 2);
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      *((_QWORD *)this + 1) = 0;
      v5 = (CoinDenseFactorization *)operator new(0x240u);
      CoinSimpFactorization::CoinSimpFactorization(v5);
      goto LABEL_8;
    }
    if ( *((_DWORD *)this + 7) >= a2 )
    {
      v8 = *((void **)this + 1);
      if ( v8 )
      {
        CoinFactorization::~CoinFactorization(*((CoinFactorization **)this + 1));
        operator delete(v8);
      }
      v9 = *((_QWORD *)this + 2);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      *((_QWORD *)this + 1) = 0;
      v5 = (CoinDenseFactorization *)operator new(0x1F0u);
      CoinOslFactorization::CoinOslFactorization(v5);
      goto LABEL_8;
    }
  }
}

