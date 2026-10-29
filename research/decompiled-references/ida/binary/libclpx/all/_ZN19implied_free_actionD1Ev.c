// Alternative name is '_ZN19implied_free_actionD2Ev'
void __fastcall implied_free_action::~implied_free_action(implied_free_action *this)
{
  char *v1; // rdx
  int v3; // ebp
  __int64 v4; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi

  v1 = *((char **)this + 3);
  *(_QWORD *)this = &off_4D1ED8;
  if ( *((int *)this + 4) <= 0 )
  {
    if ( v1 )
LABEL_13:
      operator delete[](v1);
  }
  else
  {
    v3 = 0;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = &v1[v4];
        v6 = *(void **)&v1[v4 + 40];
        if ( v6 )
        {
          operator delete[](v6);
          v1 = *((char **)this + 3);
          v5 = &v1[v4];
        }
        v7 = *((void **)v5 + 6);
        if ( !v7 )
          break;
        operator delete[](v7);
        ++v3;
        v4 += 64;
        v1 = *((char **)this + 3);
        if ( *((_DWORD *)this + 4) <= v3 )
        {
          if ( !v1 )
            return;
          goto LABEL_13;
        }
      }
      ++v3;
      v4 += 64;
    }
    while ( *((_DWORD *)this + 4) > v3 );
    if ( v1 )
      goto LABEL_13;
  }
}

