// Alternative name is '_ZN18CoinMessageHandlerD1Ev'
void __fastcall CoinMessageHandler::~CoinMessageHandler(CoinMessageHandler *this)
{
  __int64 v2; // rax
  __int64 *v3; // r12
  __int64 *v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rax
  int v9; // edx
  int v10; // edx

  *(_QWORD *)this = off_4D1720;
  v2 = *((_QWORD *)this + 195);
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
  CoinOneMessage::~CoinOneMessage((CoinMessageHandler *)((char *)this + 128));
  v3 = *((__int64 **)this + 11);
  v4 = *((__int64 **)this + 10);
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
      v8 = *v4;
      if ( (_UNKNOWN *)(*v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_19;
      while ( v3 != ++v4 )
      {
        v8 = *v4;
        if ( (_UNKNOWN *)(*v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_19:
          v9 = *(_DWORD *)(v8 - 8);
          *(_DWORD *)(v8 - 8) = v9 - 1;
          if ( v9 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
    v4 = *((__int64 **)this + 10);
  }
  if ( v4 )
    operator delete(v4);
  v5 = *((void **)this + 7);
  if ( v5 )
    operator delete(v5);
  v6 = *((void **)this + 4);
  if ( v6 )
    operator delete(v6);
  v7 = *((void **)this + 1);
  if ( v7 )
    operator delete(v7);
}

