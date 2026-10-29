CoinMessageHandler *__fastcall CoinMessageHandler::operator<<(CoinMessageHandler *this, double a2)
{
  int v3; // eax
  double *v4; // rsi
  _BYTE *v5; // rax
  __int64 PerCent; // r12
  __int64 v7; // rsi
  char *v8; // rdi
  const char *v9; // rbp
  char *v11; // rdi
  const char *v12; // rbp
  const char *v13; // rbp
  const char *v14; // r13
  size_t v15; // rax

  v3 = *((_DWORD *)this + 392);
  if ( v3 != 3 )
  {
    v4 = *((double **)this + 2);
    if ( v4 == *((double **)this + 3) )
    {
      std::vector<double>::_M_realloc_insert<double const&>();
      v3 = *((_DWORD *)this + 392);
    }
    else
    {
      if ( v4 )
      {
        *v4 = a2;
        v3 = *((_DWORD *)this + 392);
      }
      *((_QWORD *)this + 2) = v4 + 1;
    }
    if ( v3 <= 1 )
    {
      v5 = *((_BYTE **)this + 68);
      if ( v5 )
      {
        *v5 = 37;
        PerCent = CoinMessageHandler::nextPerCent(this, (char *)(*((_QWORD *)this + 68) + 1LL), 0);
        if ( !*((_DWORD *)this + 392) )
        {
          v7 = *((_QWORD *)this + 68);
          v8 = *((char **)this + 194);
          if ( *(_BYTE *)(v7 + 1) == 46 && (unsigned __int8)(*(_BYTE *)(v7 + 2) - 48) <= 9u )
          {
            sprintf(v8, (const char *)v7, a2);
          }
          else
          {
            sprintf(v8, (const char *)this + 1584, a2);
            v13 = (const char *)(*((_QWORD *)this + 68) + 2LL);
            if ( v13 != (const char *)PerCent )
            {
              v14 = *((const char **)this + 194);
              v15 = strlen(v14);
              *((_QWORD *)this + 194) = &v14[v15];
              strcpy((char *)&v14[v15], v13);
            }
          }
          v9 = *((const char **)this + 194);
          *((_QWORD *)this + 194) = &v9[strlen(v9)];
        }
        *((_QWORD *)this + 68) = PerCent;
      }
      else
      {
        **((_WORD **)this + 194) = 32;
        v11 = (char *)(*((_QWORD *)this + 194) + 1LL);
        *((_QWORD *)this + 194) = v11;
        sprintf(v11, (const char *)this + 1584, a2);
        v12 = *((const char **)this + 194);
        *((_QWORD *)this + 194) = &v12[strlen(v12)];
      }
    }
  }
  return this;
}

