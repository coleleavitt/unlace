CoinMessageHandler *__fastcall CoinMessageHandler::operator<<(CoinMessageHandler *this, unsigned int a2)
{
  int v2; // eax
  unsigned int *v3; // rsi
  _BYTE *v4; // rax
  __int64 PerCent; // rbp
  const char *v6; // r12
  const char *v8; // rbp

  v2 = *((_DWORD *)this + 392);
  if ( v2 != 3 )
  {
    v3 = *((unsigned int **)this + 5);
    if ( v3 == *((unsigned int **)this + 6) )
    {
      std::vector<int>::_M_realloc_insert<int const&>();
      v2 = *((_DWORD *)this + 392);
    }
    else
    {
      if ( v3 )
      {
        *v3 = a2;
        v2 = *((_DWORD *)this + 392);
      }
      *((_QWORD *)this + 5) = v3 + 1;
    }
    if ( v2 <= 1 )
    {
      v4 = *((_BYTE **)this + 68);
      if ( v4 )
      {
        *v4 = 37;
        PerCent = CoinMessageHandler::nextPerCent(this, (char *)(*((_QWORD *)this + 68) + 1LL), 0);
        if ( !*((_DWORD *)this + 392) )
        {
          sprintf(*((char **)this + 194), *((const char **)this + 68), a2);
          v6 = *((const char **)this + 194);
          *((_QWORD *)this + 194) = &v6[strlen(v6)];
        }
        *((_QWORD *)this + 68) = PerCent;
      }
      else
      {
        sprintf(*((char **)this + 194), " %d", a2);
        v8 = *((const char **)this + 194);
        *((_QWORD *)this + 194) = &v8[strlen(v8)];
      }
    }
  }
  return this;
}

