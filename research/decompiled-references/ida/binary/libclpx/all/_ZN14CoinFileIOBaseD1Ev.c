// Alternative name is '_ZN14CoinFileIOBaseD2Ev'
void __fastcall CoinFileIOBase::~CoinFileIOBase(CoinFileIOBase *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  int v3; // edx
  int v4; // edx

  v1 = *((_QWORD *)this + 1);
  if ( (_UNKNOWN *)(v1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 - 8), 0xFFFFFFFF);
    }
    else
    {
      v3 = *(_DWORD *)(v1 - 8);
      *(_DWORD *)(v1 - 8) = v3 - 1;
    }
    if ( v3 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v2 = *(_QWORD *)this;
  if ( (_UNKNOWN *)(*(_QWORD *)this - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 - 8), 0xFFFFFFFF);
    }
    else
    {
      v4 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v4 - 1;
    }
    if ( v4 <= 0 )
      std::string::_Rep::_M_destroy();
  }
}

