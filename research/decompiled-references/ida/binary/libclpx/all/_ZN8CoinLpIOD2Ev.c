// Alternative name is '_ZN8CoinLpIOD1Ev'
void __fastcall CoinLpIO::~CoinLpIO(CoinLpIO *this)
{
  __int64 v2; // rdi

  CoinLpIO::stopHash(this, 0);
  CoinLpIO::stopHash(this, 1);
  CoinLpIO::freeAll(this);
  if ( *((_BYTE *)this + 16) )
  {
    v2 = *((_QWORD *)this + 1);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    *((_QWORD *)this + 1) = 0;
  }
  CoinMessages::~CoinMessages((CoinLpIO *)((char *)this + 24));
}

