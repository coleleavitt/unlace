// Alternative name is '_ZN11ClpPresolveD1Ev'
void __fastcall ClpPresolve::~ClpPresolve(ClpPresolve *this)
{
  __int64 v1; // rax
  int v2; // edx

  *(_QWORD *)this = off_4D1098;
  ClpPresolve::destroyPresolve(this);
  v1 = *((_QWORD *)this + 11);
  if ( (_UNKNOWN *)(v1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 - 8), 0xFFFFFFFF);
    }
    else
    {
      v2 = *(_DWORD *)(v1 - 8);
      *(_DWORD *)(v1 - 8) = v2 - 1;
    }
    if ( v2 <= 0 )
      std::string::_Rep::_M_destroy();
  }
}

