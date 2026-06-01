// Alternative name is '_ZN16ClpPackedMatrix3D2Ev'
void __fastcall ClpPackedMatrix3::~ClpPackedMatrix3(ClpPackedMatrix3 *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rbp
  void *v7; // rdi

  *(_QWORD *)this = off_4D0E50;
  v2 = *((void **)this + 4);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 5);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 6);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 7);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 8);
  if ( v6 )
  {
    CoinArrayWithLength::~CoinArrayWithLength(*((CoinArrayWithLength **)this + 8));
    operator delete(v6);
  }
  v7 = *((void **)this + 9);
  if ( v7 )
    operator delete[](v7);
}

