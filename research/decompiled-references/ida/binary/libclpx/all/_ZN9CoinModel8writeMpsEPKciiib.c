__int64 __fastcall CoinModel::writeMps(CoinModel *this, const char *a2, int a3, int a4, int a5, char a6)
{
  int v6; // r15d
  int v7; // eax
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  __int64 v10; // rax
  char v11; // r14
  __int64 v12; // rdx
  const char *const *v13; // rdx
  const char *const *v14; // rax
  const char *v15; // r9
  const char *v16; // rsi
  unsigned int v17; // ebx
  char *v24; // [rsp+18h] [rbp-208h]
  double *v25; // [rsp+28h] [rbp-1F8h] BYREF
  double *v26; // [rsp+30h] [rbp-1F0h] BYREF
  double *v27; // [rsp+38h] [rbp-1E8h] BYREF
  double *v28; // [rsp+40h] [rbp-1E0h] BYREF
  double *v29; // [rsp+48h] [rbp-1D8h] BYREF
  void *v30; // [rsp+50h] [rbp-1D0h] BYREF
  double *v31; // [rsp+58h] [rbp-1C8h] BYREF
  _BYTE v32[96]; // [rsp+60h] [rbp-1C0h] BYREF
  _BYTE v33[136]; // [rsp+C0h] [rbp-160h] BYREF
  __int64 v34; // [rsp+148h] [rbp-D8h]

  v6 = *((_DWORD *)this + 66);
  v25 = *((double **)this + 16);
  v26 = *((double **)this + 17);
  v27 = *((double **)this + 24);
  v28 = *((double **)this + 25);
  v29 = *((double **)this + 23);
  v30 = *((void **)this + 30);
  v31 = *((double **)this + 78);
  if ( v6 )
    v6 = CoinModel::createArrays(this, &v25, &v26, &v27, &v28, &v29, (int **)&v30, &v31);
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v32);
  if ( *((_DWORD *)this + 176) == 3 )
    CoinPackedMatrix::operator=((CoinPackedMatrix *)v32);
  else
    CoinModel::createPackedMatrix(this, (CoinPackedMatrix *)v32, v31);
  v24 = (char *)operator new[](*((int *)this + 3));
  v7 = *((_DWORD *)this + 3);
  if ( v7 <= 0 )
  {
    v11 = 0;
  }
  else
  {
    v8 = (unsigned int)(v7 - 1);
    v9 = v30;
    v10 = 0;
    v11 = 0;
    v12 = v8 + 1;
    do
    {
      while ( v9[v10] )
      {
        v24[v10++] = 1;
        v11 = 1;
        if ( v12 == v10 )
          goto LABEL_10;
      }
      v24[v10++] = 0;
    }
    while ( v12 != v10 );
  }
LABEL_10:
  CoinMpsIO::CoinMpsIO((CoinMpsIO *)v33);
  CoinMpsIO::setInfinity((CoinMpsIO *)v33, 1.797693134862316e308);
  v13 = nullptr;
  if ( *((_DWORD *)this + 40) )
    v13 = *((const char *const **)this + 18);
  v14 = nullptr;
  if ( *((_DWORD *)this + 56) )
    v14 = *((const char *const **)this + 26);
  v15 = nullptr;
  if ( v11 )
    v15 = v24;
  CoinMpsIO::setMpsData(
    (CoinMpsIO *)v33,
    (const CoinPackedMatrix *)v32,
    1.797693134862316e308,
    v27,
    v28,
    v29,
    v15,
    v25,
    v26,
    v14,
    v13);
  operator delete[](v24);
  if ( *((double **)this + 16) != v25 )
  {
    if ( v25 )
      operator delete[](v25);
    if ( v26 )
      operator delete[](v26);
    if ( v27 )
      operator delete[](v27);
    if ( v28 )
      operator delete[](v28);
    if ( v29 )
      operator delete[](v29);
    if ( v30 )
      operator delete[](v30);
    if ( v31 )
      operator delete[](v31);
    if ( v6 && *((int *)this + 24) > 0 && !a6 )
      printf("%d string elements had no values associated with them\n", v6);
  }
  v16 = *((const char **)this + 4);
  v34 = *((_QWORD *)this + 3);
  CoinMpsIO::setProblemName((CoinMpsIO *)v33, v16);
  if ( a6 && *((_DWORD *)this + 66) )
    CoinMpsIO::copyStringElements((CoinMpsIO *)v33, this);
  v17 = CoinMpsIO::writeMps((CoinMpsIO *)v33, a2, a3, a4, a5, nullptr, 0, nullptr);
  CoinMpsIO::~CoinMpsIO((CoinMpsIO *)v33);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v32);
  return v17;
}

