CoinMessageHandler *__fastcall CoinMessageHandler::operator<<(CoinMessageHandler *this, const std::string *a2)
{
  int v2; // eax
  std::string *v4; // rdi
  _BYTE *v5; // rax
  __int64 PerCent; // r12
  const char *v7; // rbp
  const char *v9; // rbp

  v2 = *((_DWORD *)this + 392);
  if ( v2 != 3 )
  {
    v4 = *((std::string **)this + 11);
    if ( v4 == *((std::string **)this + 12) )
    {
      std::vector<std::string>::_M_realloc_insert<std::string const&>();
      v2 = *((_DWORD *)this + 392);
    }
    else
    {
      if ( v4 )
      {
        std::string::string(v4, a2);
        v4 = *((std::string **)this + 11);
        v2 = *((_DWORD *)this + 392);
      }
      *((_QWORD *)this + 11) = (char *)v4 + 8;
    }
    if ( v2 <= 1 )
    {
      v5 = *((_BYTE **)this + 68);
      if ( v5 )
      {
        *v5 = 37;
        PerCent = CoinMessageHandler::nextPerCent(this, (char *)(*((_QWORD *)this + 68) + 1LL), 0);
        if ( !*((_DWORD *)this + 392) )
        {
          sprintf(*((char **)this + 194), *((const char **)this + 68), *(_QWORD *)a2);
          v7 = *((const char **)this + 194);
          *((_QWORD *)this + 194) = &v7[strlen(v7)];
        }
        *((_QWORD *)this + 68) = PerCent;
      }
      else
      {
        sprintf(*((char **)this + 194), " %s", *(const char **)a2);
        v9 = *((const char **)this + 194);
        *((_QWORD *)this + 194) = &v9[strlen(v9)];
      }
    }
  }
  return this;
}

