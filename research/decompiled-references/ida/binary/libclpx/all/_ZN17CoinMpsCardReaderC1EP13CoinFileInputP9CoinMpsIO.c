// Alternative name is '_ZN17CoinMpsCardReaderC2EP13CoinFileInputP9CoinMpsIO'
void __fastcall CoinMpsCardReader::CoinMpsCardReader(CoinMpsCardReader *this, CoinFileInput *a2, CoinMpsIO *a3)
{
  _BYTE v4[72]; // [rsp+0h] [rbp-48h] BYREF

  CoinMessages::CoinMessages((CoinMpsCardReader *)((char *)this + 1280), 0);
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 110) = 0;
  memset(
    (void *)(((unsigned __int64)this + 16) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)this + 8 - (((_DWORD)this + 16) & 0xFFFFFFF8) + 880) >> 3));
  *((_QWORD *)this + 111) = (char *)this + 8;
  *((_QWORD *)this + 112) = (char *)this + 8;
  *((_DWORD *)this + 226) = 30;
  *(_QWORD *)((char *)this + 908) = 0;
  *(_QWORD *)((char *)this + 1060) = 0;
  memset(
    (void *)(((unsigned __int64)this + 916) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)this - (((_DWORD)this + 916) & 0xFFFFFFF8) + 1068) >> 3));
  *(_QWORD *)((char *)this + 1068) = 0;
  *(_QWORD *)((char *)this + 1220) = 0;
  memset(
    (void *)(((unsigned __int64)this + 1076) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)this - (((_DWORD)this + 1076) & 0xFFFFFFF8) + 1228) >> 3));
  *((_QWORD *)this + 154) = a2;
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 310) = 8;
  *((_DWORD *)this + 311) = 0;
  *((_BYTE *)this + 1248) = 0;
  *((_DWORD *)this + 313) = 0;
  *((_BYTE *)this + 1256) = 1;
  *((_QWORD *)this + 158) = a3;
  *((_QWORD *)this + 159) = *((_QWORD *)a3 + 28);
  CoinMessages::CoinMessages((CoinMessages *)v4, (CoinMpsIO *)((char *)a3 + 240));
  CoinMessages::operator=((char *)this + 1280, v4);
  CoinMessages::~CoinMessages((CoinMessages *)v4);
  *((_QWORD *)this + 164) = 0;
  *((_QWORD *)this + 183) = 0;
  memset(
    (void *)(((unsigned __int64)this + 1320) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)this - (((_DWORD)this + 1320) & 0xFFFFFFF8) + 1472) >> 3));
  *((_BYTE *)this + 1472) = 0;
}

