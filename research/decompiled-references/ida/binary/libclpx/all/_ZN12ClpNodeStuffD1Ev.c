// Alternative name is '_ZN12ClpNodeStuffD2Ev'
void __fastcall ClpNodeStuff::~ClpNodeStuff(ClpNodeStuff *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  int v9; // eax
  char *v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // r13
  void *v13; // r12
  ClpNode *v14; // rdi
  void (__fastcall *v15)(ClpNode *); // rax
  void *v16; // rdi

  *(_QWORD *)this = off_4D0A00;
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
    operator delete[](v6);
  v7 = *((void **)this + 9);
  if ( v7 )
    operator delete[](v7);
  v8 = *((void **)this + 10);
  if ( v8 )
    operator delete[](v8);
  v9 = ClpNodeStuff::maximumNodes(this);
  v10 = *((char **)this + 12);
  if ( v9 > 0 )
  {
    v11 = 0;
    v12 = 8LL * (unsigned int)(v9 - 1) + 8;
    do
    {
      v13 = *(void **)&v10[v11];
      if ( v13 )
      {
        v14 = *(ClpNode **)&v10[v11];
        v15 = *(void (__fastcall **)(ClpNode *))(*(_QWORD *)v13 + 8LL);
        if ( v15 == ClpNode::~ClpNode )
        {
          ClpNode::~ClpNode(v14);
          operator delete(v13);
        }
        else
        {
          v15(v14);
        }
        v10 = *((char **)this + 12);
      }
      v11 += 8;
    }
    while ( v12 != v11 );
  }
  if ( v10 )
    operator delete[](v10);
  v16 = *((void **)this + 11);
  if ( v16 )
    operator delete[](v16);
}

