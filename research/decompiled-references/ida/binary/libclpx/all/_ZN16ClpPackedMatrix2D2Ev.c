// Alternative name is '_ZN16ClpPackedMatrix2D1Ev'
void __fastcall ClpPackedMatrix2::~ClpPackedMatrix2(ClpPackedMatrix2 *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  *(_QWORD *)this = off_4D0E30;
  v2 = *((void **)this + 2);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 3);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 4);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 5);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 6);
  if ( v6 )
    operator delete[](v6);
}

