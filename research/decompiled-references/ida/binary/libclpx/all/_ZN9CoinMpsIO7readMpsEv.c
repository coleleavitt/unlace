__int64 __fastcall CoinMpsIO::readMps(CoinMpsIO *this)
{
  unsigned int v1; // eax
  int v2; // edx
  unsigned int v3; // r12d
  CoinSet **v4; // rax
  __int64 v5; // rbx
  int v6; // ebp
  CoinSet *v7; // rdi
  int v9; // [rsp+4h] [rbp-24h] BYREF
  CoinSet **v10; // [rsp+8h] [rbp-20h] BYREF

  v9 = 0;
  v10 = nullptr;
  v1 = CoinMpsIO::readMps(this, &v9, &v10);
  v2 = v9;
  v3 = v1;
  v4 = v10;
  if ( v9 > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = v4[v5];
        if ( !v7 )
          break;
        ++v6;
        ++v5;
        (*(void (__fastcall **)(CoinSet *))(*(_QWORD *)v7 + 8LL))(v7);
        v2 = v9;
        v4 = v10;
        if ( v6 >= v9 )
          goto LABEL_5;
      }
      ++v6;
      ++v5;
    }
    while ( v6 < v2 );
  }
LABEL_5:
  if ( v4 )
    operator delete[](v4);
  return v3;
}

