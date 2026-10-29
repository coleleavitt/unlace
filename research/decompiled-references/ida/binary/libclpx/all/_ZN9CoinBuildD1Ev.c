// Alternative name is '_ZN9CoinBuildD2Ev'
void __fastcall CoinBuild::~CoinBuild(CoinBuild *this)
{
  int v2; // eax
  _QWORD *v3; // rdi
  int v4; // ebx
  _QWORD *v5; // rbp

  v2 = *(_DWORD *)this;
  v3 = *((_QWORD **)this + 3);
  if ( v2 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = (_QWORD *)*v3;
      ++v4;
      operator delete[](v3);
      v3 = v5;
    }
    while ( *(_DWORD *)this > v4 );
  }
}

