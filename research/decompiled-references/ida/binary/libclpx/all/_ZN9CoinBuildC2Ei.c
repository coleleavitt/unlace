// Alternative name is '_ZN9CoinBuildC1Ei'
void __fastcall CoinBuild::CoinBuild(CoinBuild *this, unsigned int a2)
{
  *(_QWORD *)this = 0;
  if ( a2 > 1 )
    a2 = -1;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_DWORD *)this + 10) = a2;
}

