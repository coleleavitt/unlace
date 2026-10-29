// Alternative name is '_ZN19CoinStructuredModelC2EPKcii'
void __fastcall CoinStructuredModel::CoinStructuredModel(CoinStructuredModel *this, const char *s, int a3, int a4)
{
  char *v6; // r12
  size_t v7; // rax
  int v8; // edx
  int v9; // edx
  __int64 v10; // [rsp+10h] [rbp-308h] BYREF
  __int64 v11; // [rsp+18h] [rbp-300h] BYREF
  _BYTE v12[8]; // [rsp+20h] [rbp-2F8h] BYREF
  int v13; // [rsp+28h] [rbp-2F0h]
  __int128 v14; // [rsp+30h] [rbp-2E8h]
  char *sa; // [rsp+40h] [rbp-2D8h]
  __int64 v16; // [rsp+150h] [rbp-1C8h]

  CoinBaseModel::CoinBaseModel(this);
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  *(_OWORD *)((char *)this + 100) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = 0;
  *(_QWORD *)this = &off_4D2340;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  CoinModel::CoinModel((CoinModel *)v12, s, 0);
  if ( v13 )
  {
    v6 = sa;
    v7 = strlen(sa);
    std::string::assign((CoinStructuredModel *)((char *)this + 32), v6, v7);
    *((_OWORD *)this + 1) = v14;
    if ( a3 )
    {
      if ( !v16 )
        CoinModel::convertMatrix((CoinModel *)v12);
      CoinStructuredModel::decompose(this, (const CoinModel *)v12, a3, a4, nullptr);
    }
    else
    {
      std::string::string();
      std::string::string();
      CoinStructuredModel::addBlock(
        this,
        (const std::string *)&v10,
        (const std::string *)&v11,
        (const CoinBaseModel *)v12);
      if ( (_UNKNOWN *)(v10 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 - 8), 0xFFFFFFFF);
        }
        else
        {
          v9 = *(_DWORD *)(v10 - 8);
          *(_DWORD *)(v10 - 8) = v9 - 1;
        }
        if ( v9 <= 0 )
          std::string::_Rep::_M_destroy();
      }
      if ( (_UNKNOWN *)(v11 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 - 8), 0xFFFFFFFF);
        }
        else
        {
          v8 = *(_DWORD *)(v11 - 8);
          *(_DWORD *)(v11 - 8) = v8 - 1;
        }
        if ( v8 <= 0 )
          std::string::_Rep::_M_destroy();
      }
    }
  }
  CoinModel::~CoinModel((CoinModel *)v12);
}

