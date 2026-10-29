// Alternative name is '_ZN13CoinBaseModelD1Ev'
void __fastcall CoinBaseModel::~CoinBaseModel(CoinBaseModel *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v7; // edx
  int v8; // edx

  *(_QWORD *)this = &off_4D17D0;
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  CoinMessages::~CoinMessages((CoinBaseModel *)((char *)this + 64));
  v3 = *((_QWORD *)this + 6);
  if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
    }
    else
    {
      v6 = *(_DWORD *)(v3 - 8);
      *(_DWORD *)(v3 - 8) = v6 - 1;
    }
    if ( v6 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v4 = *((_QWORD *)this + 5);
  if ( (_UNKNOWN *)(v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 - 8), 0xFFFFFFFF);
    }
    else
    {
      v7 = *(_DWORD *)(v4 - 8);
      *(_DWORD *)(v4 - 8) = v7 - 1;
    }
    if ( v7 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v5 = *((_QWORD *)this + 4);
  if ( (_UNKNOWN *)(v5 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 8), 0xFFFFFFFF);
    }
    else
    {
      v8 = *(_DWORD *)(v5 - 8);
      *(_DWORD *)(v5 - 8) = v8 - 1;
    }
    if ( v8 <= 0 )
      std::string::_Rep::_M_destroy();
  }
}

