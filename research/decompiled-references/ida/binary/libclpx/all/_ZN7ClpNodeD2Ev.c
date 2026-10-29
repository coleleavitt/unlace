// Alternative name is '_ZN7ClpNodeD1Ev'
void __fastcall ClpNode::~ClpNode(ClpNode *this)
{
  ClpFactorization *v2; // rbp
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v2 = *((ClpFactorization **)this + 5);
  *(_QWORD *)this = off_4D09E0;
  if ( v2 )
  {
    ClpFactorization::~ClpFactorization(v2);
    operator delete(v2);
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
  v4 = *((void **)this + 7);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 8);
  if ( v5 )
    operator delete[](v5);
  v6 = *((void **)this + 9);
  if ( v6 )
    operator delete[](v6);
  v7 = *((void **)this + 10);
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
}

