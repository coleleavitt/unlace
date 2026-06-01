CoinMessageHandler *__fastcall CoinMessageHandler::operator<<(CoinMessageHandler *this, const char *a2)
{
  volatile signed __int32 **v3; // rsi
  volatile signed __int32 *v4; // rax
  _BYTE *v5; // rax
  __int64 PerCent; // r12
  const char *v7; // rbp
  const char *v9; // rbp
  int v10; // edx
  volatile signed __int32 *v11; // [rsp+8h] [rbp-20h] BYREF

  if ( *((_DWORD *)this + 392) != 3 )
  {
    std::string::string();
    v3 = *((volatile signed __int32 ***)this + 11);
    if ( v3 == *((volatile signed __int32 ***)this + 12) )
    {
      std::vector<std::string>::_M_realloc_insert<std::string>((char *)this + 80, v3, &v11);
      v4 = v11;
    }
    else
    {
      v4 = v11;
      if ( v3 )
      {
        *v3 = v11;
        v4 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
        v11 = (volatile signed __int32 *)((char *)&std::string::_Rep::_S_empty_rep_storage + 24);
      }
      *((_QWORD *)this + 11) = v3 + 1;
    }
    if ( v4 - 6 != (volatile signed __int32 *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v10 = _InterlockedExchangeAdd(v4 - 2, 0xFFFFFFFF);
      }
      else
      {
        v10 = *((_DWORD *)v4 - 2);
        *((_DWORD *)v4 - 2) = v10 - 1;
      }
      if ( v10 <= 0 )
        std::string::_Rep::_M_destroy();
    }
    if ( *((int *)this + 392) <= 1 )
    {
      v5 = *((_BYTE **)this + 68);
      if ( v5 )
      {
        *v5 = 37;
        PerCent = CoinMessageHandler::nextPerCent(this, (char *)(*((_QWORD *)this + 68) + 1LL), 0);
        if ( !*((_DWORD *)this + 392) )
        {
          sprintf(*((char **)this + 194), *((const char **)this + 68), a2);
          v7 = *((const char **)this + 194);
          *((_QWORD *)this + 194) = &v7[strlen(v7)];
        }
        *((_QWORD *)this + 68) = PerCent;
      }
      else
      {
        sprintf(*((char **)this + 194), " %s", a2);
        v9 = *((const char **)this + 194);
        *((_QWORD *)this + 194) = &v9[strlen(v9)];
      }
    }
  }
  return this;
}

