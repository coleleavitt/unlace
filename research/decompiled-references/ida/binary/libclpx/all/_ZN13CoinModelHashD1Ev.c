// Alternative name is '_ZN13CoinModelHashD2Ev'
void __fastcall CoinModelHash::~CoinModelHash(CoinModelHash *this)
{
  __int64 v2; // rbp
  int v3; // ebx
  void *v4; // rdi
  void *v5; // rdi

  if ( *((int *)this + 5) > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = *(void **)(*(_QWORD *)this + v2);
      v2 += 8;
      free(v4);
    }
    while ( *((_DWORD *)this + 5) > v3 );
  }
  if ( *(_QWORD *)this )
    operator delete[](*(void **)this);
  v5 = *((void **)this + 1);
  if ( v5 )
    operator delete[](v5);
}

