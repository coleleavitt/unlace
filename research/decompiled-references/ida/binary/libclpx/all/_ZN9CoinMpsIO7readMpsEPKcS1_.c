__int64 __fastcall CoinMpsIO::readMps(CoinMpsCardReader **this, const char *haystack, const char *a3)
{
  int v4; // eax
  void *v5; // r13
  CoinMpsCardReader *v6; // r13
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // r12d
  CoinSet **v10; // rax
  __int64 v11; // rbx
  int v12; // ebp
  CoinSet *v13; // rdi
  int v15; // [rsp+Ch] [rbp-3Ch] BYREF
  CoinFileInput *v16; // [rsp+10h] [rbp-38h] BYREF
  CoinSet **v17; // [rsp+18h] [rbp-30h] BYREF

  v16 = nullptr;
  v4 = CoinMpsIO::dealWithFileName((CoinMpsIO *)this, haystack, a3, &v16);
  if ( v4 < 0 )
    return (unsigned int)-1;
  if ( v4 )
  {
    v5 = *(this + 34);
    if ( v5 )
    {
      CoinMpsCardReader::~CoinMpsCardReader(*(this + 34));
      operator delete(v5);
    }
    v6 = (CoinMpsCardReader *)operator new(0x5C8u);
    CoinMpsCardReader::CoinMpsCardReader(v6, v16, (CoinMpsIO *)this);
    *(this + 34) = v6;
  }
  if ( a3 && (!strcmp(a3, "gms") || strstr(haystack, ".gms")) )
  {
    v15 = 0;
    v17 = nullptr;
    v7 = CoinMpsIO::readGms((CoinMpsIO *)this, &v15, &v17);
    v8 = v15;
    v9 = v7;
    v10 = v17;
    if ( v15 <= 0 )
    {
LABEL_13:
      if ( !v10 )
        return v9;
    }
    else
    {
      v11 = 0;
      v12 = 0;
      do
      {
        while ( 1 )
        {
          v13 = v10[v11];
          if ( !v13 )
            break;
          ++v12;
          ++v11;
          (*(void (__fastcall **)(CoinSet *))(*(_QWORD *)v13 + 8LL))(v13);
          v8 = v15;
          v10 = v17;
          if ( v12 >= v15 )
            goto LABEL_13;
        }
        ++v12;
        ++v11;
      }
      while ( v12 < v8 );
      if ( !v10 )
        return v9;
    }
    operator delete[](v10);
    return v9;
  }
  return (unsigned int)CoinMpsIO::readMps((CoinMpsIO *)this);
}

