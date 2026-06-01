// Alternative name is '_ZN19CoinStructuredModelD1Ev'
void __fastcall CoinStructuredModel::~CoinStructuredModel(CoinStructuredModel *this)
{
  int v2; // edx
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rdi
  void *v6; // rdi
  _QWORD *v7; // rax
  int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 *v11; // r13
  __int64 *v12; // rbx
  __int64 *v13; // r13
  __int64 *v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx

  v2 = *((_DWORD *)this + 27);
  *(_QWORD *)this = &off_4D2340;
  v3 = *((_QWORD **)this + 21);
  if ( v2 > 0 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = v3[v4];
        if ( !v5 )
          break;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        v2 = *((_DWORD *)this + 27);
        ++v4;
        v3 = *((_QWORD **)this + 21);
        if ( (int)v4 >= v2 )
          goto LABEL_5;
      }
      ++v4;
    }
    while ( (int)v4 < v2 );
  }
LABEL_5:
  if ( v3 )
    operator delete[](v3);
  v6 = *((void **)this + 23);
  if ( v6 )
    operator delete[](v6);
  v7 = *((_QWORD **)this + 22);
  if ( v7 )
  {
    v8 = *((_DWORD *)this + 27);
    if ( v8 > 0 )
    {
      v9 = 0;
      do
      {
        while ( 1 )
        {
          v10 = v7[v9];
          if ( !v10 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v8 = *((_DWORD *)this + 27);
          ++v9;
          v7 = *((_QWORD **)this + 22);
          if ( (int)v9 >= v8 )
          {
            if ( v7 )
              goto LABEL_44;
            goto LABEL_15;
          }
        }
        ++v9;
      }
      while ( (int)v9 < v8 );
      if ( !v7 )
        goto LABEL_15;
    }
LABEL_44:
    operator delete[](v7);
  }
LABEL_15:
  v11 = *((__int64 **)this + 19);
  v12 = *((__int64 **)this + 18);
  if ( v11 != v12 )
  {
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v12 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v12 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    else
    {
      v15 = *v12;
      if ( (_UNKNOWN *)(*v12 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_33;
      while ( v11 != ++v12 )
      {
        v15 = *v12;
        if ( (_UNKNOWN *)(*v12 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_33:
          v16 = *(_DWORD *)(v15 - 8);
          *(_DWORD *)(v15 - 8) = v16 - 1;
          if ( v16 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
    v12 = *((__int64 **)this + 18);
  }
  if ( v12 )
    operator delete(v12);
  v13 = *((__int64 **)this + 16);
  v14 = *((__int64 **)this + 15);
  if ( v13 != v14 )
  {
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v14 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v14 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        ++v14;
      }
      while ( v13 != v14 );
    }
    else
    {
      v17 = *v14;
      if ( (_UNKNOWN *)(*v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_38;
      while ( v13 != ++v14 )
      {
        v17 = *v14;
        if ( (_UNKNOWN *)(*v14 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_38:
          v18 = *(_DWORD *)(v17 - 8);
          *(_DWORD *)(v17 - 8) = v18 - 1;
          if ( v18 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
    v14 = *((__int64 **)this + 15);
  }
  if ( v14 )
    operator delete(v14);
  CoinBaseModel::~CoinBaseModel(this);
}

