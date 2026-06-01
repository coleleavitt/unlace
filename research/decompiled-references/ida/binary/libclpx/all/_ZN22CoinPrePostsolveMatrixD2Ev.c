// Alternative name is '_ZN22CoinPrePostsolveMatrixD1Ev'
void __fastcall CoinPrePostsolveMatrix::~CoinPrePostsolveMatrix(CoinPrePostsolveMatrix *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rdi

  v2 = *((void **)this + 20);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 21);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 22);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 23);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 24);
  if ( v6 )
    operator delete[](v6);
  v7 = *((void **)this + 9);
  if ( v7 )
    operator delete[](v7);
  v8 = *((void **)this + 11);
  if ( v8 )
    operator delete[](v8);
  v9 = *((void **)this + 12);
  if ( v9 )
    operator delete[](v9);
  v10 = *((void **)this + 13);
  if ( v10 )
    operator delete[](v10);
  v11 = *((void **)this + 14);
  if ( v11 )
    operator delete[](v11);
  v12 = *((void **)this + 5);
  if ( v12 )
    operator delete[](v12);
  v13 = *((void **)this + 7);
  if ( v13 )
    operator delete[](v13);
  v14 = *((void **)this + 8);
  if ( v14 )
    operator delete[](v14);
  v15 = *((void **)this + 6);
  if ( v15 )
    operator delete[](v15);
  v16 = *((void **)this + 15);
  if ( v16 )
    operator delete[](v16);
  v17 = *((void **)this + 16);
  if ( v17 )
    operator delete[](v17);
  if ( *((_BYTE *)this + 216) )
  {
    v18 = *((_QWORD *)this + 26);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
  }
  CoinMessages::~CoinMessages((CoinPrePostsolveMatrix *)((char *)this + 224));
}

