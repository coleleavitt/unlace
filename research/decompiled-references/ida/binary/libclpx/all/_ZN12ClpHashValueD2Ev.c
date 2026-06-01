// Alternative name is '_ZN12ClpHashValueD1Ev'
void __fastcall ClpHashValue::~ClpHashValue(ClpHashValue *this)
{
  void *v1; // rdi

  *(_QWORD *)this = off_4D0A20;
  v1 = *((void **)this + 1);
  if ( v1 )
    operator delete[](v1);
}

