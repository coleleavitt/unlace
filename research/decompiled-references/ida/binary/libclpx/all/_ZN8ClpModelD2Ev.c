// Alternative name is '_ZN8ClpModelD1Ev'
void __fastcall ClpModel::~ClpModel(ClpModel *this)
{
  __int64 v2; // rdi
  ClpModel *v3; // rbx
  ClpModel *v4; // r14
  __int64 *v5; // r14
  __int64 *v6; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rax
  int v14; // edx
  int v15; // edx

  if ( *((_BYTE *)this + 352) )
  {
    v2 = *((_QWORD *)this + 43);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    *((_QWORD *)this + 43) = 0;
  }
  v3 = (ClpModel *)((char *)this + 688);
  ClpModel::gutsOfDelete(this, 0);
  v4 = (ClpModel *)((char *)this + 696);
  if ( &_pthread_key_create )
  {
    do
    {
      if ( (_UNKNOWN *)(*(_QWORD *)v3 - 24LL) != &std::string::_Rep::_S_empty_rep_storage
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)v3 - 8LL), 0xFFFFFFFF) <= 0 )
      {
        std::string::_Rep::_M_destroy();
      }
      v3 = (ClpModel *)((char *)v3 - 8);
    }
    while ( (ClpModel *)((char *)this + 680) != v3 );
    CoinPackedMatrix::~CoinPackedMatrix((ClpModel *)((char *)this + 584));
    CoinPackedMatrix::~CoinPackedMatrix((ClpModel *)((char *)this + 496));
    CoinMessages::~CoinMessages((ClpModel *)((char *)this + 448));
    CoinMessages::~CoinMessages((ClpModel *)((char *)this + 416));
    v5 = *((__int64 **)this + 50);
    v6 = *((__int64 **)this + 49);
    if ( v5 != v6 )
    {
      do
      {
        if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v6 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        ++v6;
      }
      while ( v6 != v5 );
LABEL_11:
      v6 = *((__int64 **)this + 49);
    }
  }
  else
  {
    do
    {
      v4 = (ClpModel *)((char *)v4 - 8);
      v9 = *(_QWORD *)v4;
      if ( (_UNKNOWN *)(*(_QWORD *)v4 - 24LL) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v15 = *(_DWORD *)(v9 - 8);
        *(_DWORD *)(v9 - 8) = v15 - 1;
        if ( v15 <= 0 )
          std::string::_Rep::_M_destroy();
      }
    }
    while ( v3 != v4 );
    CoinPackedMatrix::~CoinPackedMatrix((ClpModel *)((char *)this + 584));
    CoinPackedMatrix::~CoinPackedMatrix((ClpModel *)((char *)this + 496));
    CoinMessages::~CoinMessages((ClpModel *)((char *)this + 448));
    CoinMessages::~CoinMessages((ClpModel *)((char *)this + 416));
    v10 = *((__int64 **)this + 50);
    v6 = *((__int64 **)this + 49);
    if ( v10 != v6 )
    {
      v11 = *v6;
      if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_28;
      while ( ++v6 != v10 )
      {
        v11 = *v6;
        if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_28:
          v12 = *(_DWORD *)(v11 - 8);
          *(_DWORD *)(v11 - 8) = v12 - 1;
          if ( v12 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
      goto LABEL_11;
    }
  }
  if ( v6 )
    operator delete(v6);
  v7 = *((__int64 **)this + 47);
  v8 = *((__int64 **)this + 46);
  if ( v7 != v8 )
  {
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v8 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v8 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        ++v8;
      }
      while ( v7 != v8 );
    }
    else
    {
      v13 = *v8;
      if ( (_UNKNOWN *)(*v8 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_33;
      while ( v7 != ++v8 )
      {
        v13 = *v8;
        if ( (_UNKNOWN *)(*v8 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_33:
          v14 = *(_DWORD *)(v13 - 8);
          *(_DWORD *)(v13 - 8) = v14 - 1;
          if ( v14 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
    v8 = *((__int64 **)this + 46);
  }
  if ( v8 )
    operator delete(v8);
}

