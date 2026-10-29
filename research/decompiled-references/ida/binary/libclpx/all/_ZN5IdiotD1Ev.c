// Alternative name is '_ZN5IdiotD2Ev'
void __fastcall Idiot::~Idiot(Idiot *this)
{
  void *v1; // rdi

  v1 = *((void **)this + 13);
  if ( v1 )
    operator delete[](v1);
}

