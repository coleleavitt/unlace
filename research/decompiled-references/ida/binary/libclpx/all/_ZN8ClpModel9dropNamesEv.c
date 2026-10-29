void __fastcall ClpModel::dropNames(ClpModel *this)
{
  __int64 *v1; // r14
  __int64 *v2; // r13
  __int64 *v3; // rbp
  __int64 *v4; // r14
  __int64 *v5; // r13
  __int64 *v6; // rbp
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rax
  int v10; // edx

  v1 = *((__int64 **)this + 46);
  v2 = *((__int64 **)this + 47);
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 46) = 0;
  *((_QWORD *)this + 47) = 0;
  *((_QWORD *)this + 48) = 0;
  if ( v1 != v2 )
  {
    v3 = v1;
    if ( &_pthread_key_create )
    {
      do
      {
        if ( (_UNKNOWN *)(*v3 - 24) != &std::string::_Rep::_S_empty_rep_storage
          && _InterlockedExchangeAdd((volatile signed __int32 *)(*v3 - 8), 0xFFFFFFFF) <= 0 )
        {
          std::string::_Rep::_M_destroy();
        }
        ++v3;
      }
      while ( v2 != v3 );
    }
    else
    {
      v7 = *v1;
      if ( (_UNKNOWN *)(*v1 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_17;
      while ( v2 != ++v3 )
      {
        v7 = *v3;
        if ( (_UNKNOWN *)(*v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_17:
          v8 = *(_DWORD *)(v7 - 8);
          *(_DWORD *)(v7 - 8) = v8 - 1;
          if ( v8 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
  }
  if ( v1 )
    operator delete(v1);
  v4 = *((__int64 **)this + 49);
  v5 = *((__int64 **)this + 50);
  *((_QWORD *)this + 49) = 0;
  *((_QWORD *)this + 50) = 0;
  *((_QWORD *)this + 51) = 0;
  if ( v4 != v5 )
  {
    v6 = v4;
    if ( &_pthread_key_create )
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
      while ( v5 != v6 );
    }
    else
    {
      v9 = *v4;
      if ( (_UNKNOWN *)(*v4 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_22;
      while ( v5 != ++v6 )
      {
        v9 = *v6;
        if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_22:
          v10 = *(_DWORD *)(v9 - 8);
          *(_DWORD *)(v9 - 8) = v10 - 1;
          if ( v10 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
  }
  if ( v4 )
    operator delete(v4);
}

