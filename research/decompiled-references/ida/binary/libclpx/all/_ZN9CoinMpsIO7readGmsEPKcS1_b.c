__int64 __fastcall CoinMpsIO::readGms(CoinMpsIO *this, const char *a2, const char *a3, char a4)
{
  int v4; // eax
  void *v5; // rbp
  CoinMpsCardReader *v6; // rbp
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // r12d
  CoinSet **v10; // rax
  __int64 v11; // rbx
  int v12; // ebp
  CoinSet *v13; // rdi
  int v15; // [rsp+Ch] [rbp-2Ch] BYREF
  CoinFileInput *v16; // [rsp+10h] [rbp-28h] BYREF
  CoinSet **v17; // [rsp+18h] [rbp-20h] BYREF

  *((_BYTE *)this + 280) = a4;
  v16 = nullptr;
  v4 = CoinMpsIO::dealWithFileName(this, a2, a3, &v16);
  if ( v4 < 0 )
  {
    return (unsigned int)-1;
  }
  else
  {
    if ( v4 )
    {
      v5 = *((void **)this + 34);
      if ( v5 )
      {
        CoinMpsCardReader::~CoinMpsCardReader(*((CoinMpsCardReader **)this + 34));
        operator delete(v5);
      }
      v6 = (CoinMpsCardReader *)operator new(0x5C8u);
      CoinMpsCardReader::CoinMpsCardReader(v6, v16, this);
      *((_QWORD *)this + 34) = v6;
    }
    v15 = 0;
    v17 = nullptr;
    v7 = CoinMpsIO::readGms(this, &v15, &v17);
    v8 = v15;
    v9 = v7;
    v10 = v17;
    if ( v15 > 0 )
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
            goto LABEL_10;
        }
        ++v12;
        ++v11;
      }
      while ( v12 < v8 );
    }
LABEL_10:
    if ( v10 )
      operator delete[](v10);
  }
  return v9;
}

