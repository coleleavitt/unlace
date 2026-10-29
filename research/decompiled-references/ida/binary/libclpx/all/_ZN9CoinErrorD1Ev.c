// Alternative name is '_ZN9CoinErrorD2Ev'
void __fastcall CoinError::~CoinError(CoinError *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  *(_QWORD *)this = off_4D0500;
  v1 = *((_QWORD *)this + 4);
  if ( (_UNKNOWN *)(v1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 - 8), 0xFFFFFFFF);
    }
    else
    {
      v5 = *(_DWORD *)(v1 - 8);
      *(_DWORD *)(v1 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v2 = *((_QWORD *)this + 3);
  if ( (_UNKNOWN *)(v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 - 8), 0xFFFFFFFF);
    }
    else
    {
      v6 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v6 - 1;
    }
    if ( v6 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v3 = *((_QWORD *)this + 2);
  if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
    }
    else
    {
      v7 = *(_DWORD *)(v3 - 8);
      *(_DWORD *)(v3 - 8) = v7 - 1;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v4 = *((_QWORD *)this + 1);
  if ( (_UNKNOWN *)(v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 - 8), 0xFFFFFFFF);
    }
    else
    {
      v8 = *(_DWORD *)(v4 - 8);
      *(_DWORD *)(v4 - 8) = v8 - 1;
    }
    if ( v8 <= 0 )
      std::string::_Rep::_M_destroy();
  }
}

