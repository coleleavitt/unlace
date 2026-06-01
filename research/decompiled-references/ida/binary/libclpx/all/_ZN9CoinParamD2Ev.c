// Alternative name is '_ZN9CoinParamD1Ev'
void __fastcall CoinParam::~CoinParam(CoinParam *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 *v3; // r13
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx

  *(_QWORD *)this = &off_4D1B28;
  v1 = *((_QWORD *)this + 18);
  if ( (_UNKNOWN *)(v1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 - 8), 0xFFFFFFFF);
    }
    else
    {
      v11 = *(_DWORD *)(v1 - 8);
      *(_DWORD *)(v1 - 8) = v11 - 1;
    }
    if ( v11 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v2 = *((_QWORD *)this + 17);
  if ( (_UNKNOWN *)(v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 - 8), 0xFFFFFFFF);
    }
    else
    {
      v10 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v10 - 1;
    }
    if ( v10 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v3 = *((__int64 **)this + 12);
  v4 = *((__int64 **)this + 11);
  if ( v3 != v4 )
  {
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v4 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v4 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
    else
    {
      v7 = *v4;
      if ( (_UNKNOWN *)(*v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_16;
      while ( ++v4 != v3 )
      {
        v7 = *v4;
        if ( (_UNKNOWN *)(*v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_16:
          v8 = *(_DWORD *)(v7 - 8);
          *(_DWORD *)(v7 - 8) = v8 - 1;
          if ( v8 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
    v4 = *((__int64 **)this + 11);
  }
  if ( v4 )
    operator delete(v4);
  v5 = *((_QWORD *)this + 10);
  if ( (_UNKNOWN *)(v5 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 8), 0xFFFFFFFF);
    }
    else
    {
      v12 = *(_DWORD *)(v5 - 8);
      *(_DWORD *)(v5 - 8) = v12 - 1;
    }
    if ( v12 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v6 = *((_QWORD *)this + 2);
  if ( (_UNKNOWN *)(v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 - 8), 0xFFFFFFFF);
    }
    else
    {
      v9 = *(_DWORD *)(v6 - 8);
      *(_DWORD *)(v6 - 8) = v9 - 1;
    }
    if ( v9 <= 0 )
      std::string::_Rep::_M_destroy();
  }
}

