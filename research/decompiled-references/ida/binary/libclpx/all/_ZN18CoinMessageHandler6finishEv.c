__int64 __fastcall CoinMessageHandler::finish(CoinMessageHandler *this)
{
  char *v1; // rbp
  __int64 v2; // rax
  __int64 *v3; // r14
  __int64 *v4; // r12
  __int64 v5; // rax
  __int64 *v6; // rbp
  __int64 v8; // rax
  int v9; // edx

  v1 = (char *)this + 552;
  if ( *((int *)this + 392) <= 2 && *((char **)this + 194) != v1 )
    CoinMessageHandler::internalPrint(this);
  v2 = *((_QWORD *)this + 1);
  v3 = *((__int64 **)this + 10);
  v4 = *((__int64 **)this + 11);
  *((_DWORD *)this + 134) = -1;
  *((_QWORD *)this + 68) = 0;
  *((_BYTE *)this + 552) = 0;
  *((_QWORD *)this + 2) = v2;
  v5 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 194) = v1;
  *((_DWORD *)this + 392) = 0;
  *((_QWORD *)this + 5) = v5;
  *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  if ( v3 != v4 )
  {
    v6 = v3;
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
      while ( v4 != v6 );
    }
    else
    {
      v8 = *v3;
      if ( (_UNKNOWN *)(*v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_12;
      while ( v4 != ++v6 )
      {
        v8 = *v6;
        if ( (_UNKNOWN *)(*v6 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        {
LABEL_12:
          v9 = *(_DWORD *)(v8 - 8);
          *(_DWORD *)(v8 - 8) = v9 - 1;
          if ( v9 <= 0 )
            std::string::_Rep::_M_destroy();
        }
      }
    }
  }
  *((_QWORD *)this + 11) = v3;
  return 0;
}

