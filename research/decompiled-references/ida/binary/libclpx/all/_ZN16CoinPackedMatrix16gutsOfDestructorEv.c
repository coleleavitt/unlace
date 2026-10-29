void __fastcall CoinPackedMatrix::gutsOfDestructor(CoinPackedMatrix *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = *((void **)this + 7);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 6);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 5);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 4);
  if ( v5 )
    operator delete[](v5);
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 4) = 0;
}

