__int64 __fastcall CoinMpsIO::readGms(CoinMpsCardReader **this, const char *a2, const char *a3, int *a4, CoinSet ***a5)
{
  int v7; // eax
  void *v8; // rbp
  CoinMpsCardReader *v9; // rbp
  CoinFileInput *v11; // [rsp+8h] [rbp-30h] BYREF

  v11 = nullptr;
  v7 = CoinMpsIO::dealWithFileName((CoinMpsIO *)this, a2, a3, &v11);
  if ( v7 < 0 )
    return 0xFFFFFFFFLL;
  if ( v7 )
  {
    v8 = *(this + 34);
    if ( v8 )
    {
      CoinMpsCardReader::~CoinMpsCardReader(*(this + 34));
      operator delete(v8);
    }
    v9 = (CoinMpsCardReader *)operator new(0x5C8u);
    CoinMpsCardReader::CoinMpsCardReader(v9, v11, (CoinMpsIO *)this);
    *(this + 34) = v9;
  }
  return CoinMpsIO::readGms((CoinMpsIO *)this, a4, a5);
}

