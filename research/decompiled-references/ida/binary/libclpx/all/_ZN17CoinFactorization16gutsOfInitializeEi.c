void __fastcall CoinFactorization::gutsOfInitialize(CoinFactorization *this, char a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+8h] [rbp-40h]
  int v13; // [rsp+10h] [rbp-38h]

  if ( (a2 & 2) != 0 )
  {
    v2 = *((_DWORD *)this + 289);
    *((_DWORD *)this + 230) = 0;
    *((_DWORD *)this + 125) = 0;
    *((_DWORD *)this + 44) = -1;
    *(_QWORD *)((char *)this + 68) = 0;
    *((_DWORD *)this + 19) = 0;
    *((_OWORD *)this + 2) = 0;
    *((_DWORD *)this + 148) = 0;
    *((_DWORD *)this + 197) = 0;
    *((_OWORD *)this + 3) = 0;
    *((_OWORD *)this + 36) = 0;
    *(_OWORD *)((char *)this + 696) = 0;
    *((_DWORD *)this + 198) = 0;
    *((_DWORD *)this + 199) = 0;
    *((_OWORD *)this + 50) = 0;
    *((_QWORD *)this + 131) = 0;
    *((_QWORD *)this + 105) = 0;
    *((_QWORD *)this + 107) = 0;
    *((_DWORD *)this + 216) = 0;
    if ( !v2 )
    {
      v11 = 0;
      v12 = 0xFFFFFFFFLL;
      v13 = 0;
      ((void (__fastcall *)(char *, __int64 *))CoinArrayWithLength::operator=)((char *)this + 872, &v11);
      CoinArrayWithLength::~CoinArrayWithLength((CoinArrayWithLength *)&v11);
      v11 = 0;
      v12 = 0xFFFFFFFFLL;
      v13 = 0;
      ((void (__fastcall *)(char *, __int64 *, __int64, __int64, __int64, __int64))CoinArrayWithLength::operator=)(
        (char *)this + 896,
        &v11,
        v3,
        v4,
        v5,
        v6);
      CoinArrayWithLength::~CoinArrayWithLength((CoinArrayWithLength *)&v11);
      v11 = 0;
      v12 = 0xFFFFFFFFLL;
      v13 = 0;
      ((void (__fastcall *)(char *, __int64 *, __int64, __int64, __int64, __int64))CoinArrayWithLength::operator=)(
        (char *)this + 80,
        &v11,
        v7,
        v8,
        v9,
        v10);
      CoinArrayWithLength::~CoinArrayWithLength((CoinArrayWithLength *)&v11);
    }
  }
  if ( (a2 & 1) != 0 )
  {
    *((_QWORD *)this + 2) = 0;
    *((_DWORD *)this + 124) = 0;
    *((_DWORD *)this + 16) = 200;
    *((_DWORD *)this + 45) = 4;
    *((_DWORD *)this + 217) = 0;
    *(_QWORD *)this = 0x3FB999999999999ALL;
    *((_BYTE *)this + 784) = 1;
    *((_QWORD *)this + 144) = 2;
    *((_QWORD *)this + 1) = 0x3D3C25C268497682LL;
    *((_QWORD *)this + 3) = 0x3FF0000000000000LL;
  }
  if ( (a2 & 4) != 0 )
  {
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 760), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 816), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 184), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 208), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 400), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 424), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 552), 8);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 128), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 104), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 152), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 648), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 232), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 256), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 80), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 352), 4);
    CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 376), 4);
    *((_QWORD *)this + 116) = 0;
    *((_QWORD *)this + 117) = 0;
    *((_QWORD *)this + 118) = 0;
    *((_QWORD *)this + 119) = 0;
    *((_QWORD *)this + 120) = 0;
    *((_QWORD *)this + 121) = 0;
    *((_QWORD *)this + 122) = 0;
    *((_QWORD *)this + 123) = 0;
    *((_QWORD *)this + 124) = 0;
    *((_QWORD *)this + 125) = 0;
    *((_QWORD *)this + 126) = 0;
    *((_QWORD *)this + 127) = 0;
    *((_QWORD *)this + 128) = 0;
    *((_QWORD *)this + 129) = 0;
    *((_QWORD *)this + 130) = 0;
  }
}

