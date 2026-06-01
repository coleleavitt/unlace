// Alternative name is '_ZN16tripleton_actionD2Ev'
void __fastcall tripleton_action::~tripleton_action(tripleton_action *this)
{
  int v1; // edx
  char *v2; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  void *v6; // rdi

  v1 = *((_DWORD *)this + 4) - 1;
  *(_QWORD *)this = &off_4D2088;
  v2 = *((char **)this + 3);
  if ( v1 < 0 )
  {
    if ( v2 )
      operator delete[](*((void **)this + 3));
  }
  else
  {
    v4 = 120LL * v1;
    v5 = 120 * (v1 - (unsigned __int64)(unsigned int)v1) - 120;
    do
    {
      v6 = *(void **)&v2[v4 + 104];
      if ( v6 )
      {
        operator delete[](v6);
        v2 = *((char **)this + 3);
      }
      v4 -= 120;
    }
    while ( v4 != v5 );
    if ( v2 )
      operator delete[](v2);
  }
}

