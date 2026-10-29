void __fastcall CoinPresolveMatrix::deleteStuff(CoinPresolveMatrix *this)
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

  v2 = *((void **)this + 56);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 57);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 58);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 59);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 60);
  if ( v6 )
    operator delete[](v6);
  v7 = *((void **)this + 61);
  if ( v7 )
    operator delete[](v7);
  v8 = *((void **)this + 62);
  if ( v8 )
    operator delete[](v8);
  v9 = *((void **)this + 63);
  if ( v9 )
    operator delete[](v9);
  v10 = *((void **)this + 64);
  if ( v10 )
    operator delete[](v10);
  *((_QWORD *)this + 56) = 0;
  *((_QWORD *)this + 57) = 0;
  *((_QWORD *)this + 58) = 0;
  *((_QWORD *)this + 59) = 0;
  *((_QWORD *)this + 60) = 0;
  *((_QWORD *)this + 61) = 0;
  *((_QWORD *)this + 62) = 0;
  *((_QWORD *)this + 63) = 0;
  *((_QWORD *)this + 64) = 0;
}

