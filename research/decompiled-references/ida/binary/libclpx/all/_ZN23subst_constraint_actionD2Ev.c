// Alternative name is '_ZN23subst_constraint_actionD1Ev'
void __fastcall subst_constraint_action::~subst_constraint_action(subst_constraint_action *this)
{
  __int64 v1; // rbx
  int v3; // ebp
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v1 = *((_QWORD *)this + 3);
  *(_QWORD *)this = &off_4D1FF8;
  if ( *((int *)this + 4) > 0 )
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v4 = *(void **)(v1 + 24);
        if ( v4 )
          operator delete[](v4);
        if ( *(_QWORD *)v1 )
          operator delete[](*(void **)v1);
        v5 = *(void **)(v1 + 8);
        if ( v5 )
          operator delete[](v5);
        v6 = *(void **)(v1 + 16);
        if ( v6 )
          operator delete[](v6);
        v7 = *(void **)(v1 + 32);
        if ( v7 )
          operator delete[](v7);
        v8 = *(void **)(v1 + 40);
        if ( v8 )
          operator delete[](v8);
        v9 = *(void **)(v1 + 48);
        if ( v9 )
          operator delete[](v9);
        v10 = *(void **)(v1 + 56);
        if ( !v10 )
          break;
        operator delete[](v10);
        ++v3;
        v1 += 80;
        if ( v3 >= *((_DWORD *)this + 4) )
          goto LABEL_19;
      }
      ++v3;
      v1 += 80;
    }
    while ( *((_DWORD *)this + 4) > v3 );
LABEL_19:
    v1 = *((_QWORD *)this + 3);
  }
  if ( v1 )
    operator delete[]((void *)v1);
}

