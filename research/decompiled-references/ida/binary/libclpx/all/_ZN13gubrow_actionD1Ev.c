// Alternative name is '_ZN13gubrow_actionD2Ev'
void __fastcall gubrow_action::~gubrow_action(gubrow_action *this)
{
  char *v1; // rbx
  char *v3; // rbx
  int v4; // ebp
  void *v5; // rdi
  void *v6; // rdi

  v1 = *((char **)this + 3);
  *(_QWORD *)this = &off_4D1CF8;
  if ( *((int *)this + 4) > 0 )
  {
    v3 = v1 + 8;
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = *((void **)v3 + 1);
        if ( v5 )
          operator delete[](v5);
        if ( *(_QWORD *)v3 )
          operator delete[](*(void **)v3);
        v6 = *((void **)v3 + 2);
        if ( !v6 )
          break;
        operator delete[](v6);
        ++v4;
        v3 += 40;
        if ( v4 >= *((_DWORD *)this + 4) )
          goto LABEL_9;
      }
      ++v4;
      v3 += 40;
    }
    while ( *((_DWORD *)this + 4) > v4 );
LABEL_9:
    v1 = *((char **)this + 3);
  }
  if ( v1 )
    operator delete[](v1);
}

