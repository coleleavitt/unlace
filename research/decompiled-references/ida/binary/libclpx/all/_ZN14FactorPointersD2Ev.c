// Alternative name is '_ZN14FactorPointersD1Ev'
void __fastcall FactorPointers::~FactorPointers(FactorPointers *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v2 = *(void **)this;
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 1);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 2);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 3);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 4);
  if ( v6 )
    operator delete[](v6);
  v7 = *((void **)this + 5);
  if ( v7 )
    operator delete[](v7);
  v8 = *((void **)this + 6);
  if ( v8 )
    operator delete[](v8);
  v9 = *((void **)this + 7);
  if ( v9 )
    operator delete[](v9);
}

