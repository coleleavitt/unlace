// Alternative name is '_ZN17do_tighten_actionD2Ev'
void __fastcall do_tighten_action::~do_tighten_action(do_tighten_action *this)
{
  int v1; // eax
  int v2; // eax
  char *v3; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // r12
  char *v7; // rax
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  *(_QWORD *)this = &off_4D2040;
  v1 = *((_DWORD *)this + 4);
  if ( v1 > 0 )
  {
    v2 = v1 - 1;
    v3 = *((char **)this + 3);
    v5 = 40LL * v2;
    v6 = 40 * (v2 - (unsigned __int64)(unsigned int)v2) - 40;
    do
    {
      v7 = &v3[v5];
      v8 = *(void **)&v3[v5];
      if ( v8 )
      {
        operator delete[](v8);
        v3 = *((char **)this + 3);
        v7 = &v3[v5];
      }
      v9 = *((void **)v7 + 1);
      if ( v9 )
      {
        operator delete[](v9);
        v3 = *((char **)this + 3);
        v7 = &v3[v5];
      }
      v10 = *((void **)v7 + 2);
      if ( v10 )
      {
        operator delete[](v10);
        v3 = *((char **)this + 3);
      }
      v5 -= 40;
    }
    while ( v6 != v5 );
    if ( v3 )
      operator delete[](v3);
  }
}

