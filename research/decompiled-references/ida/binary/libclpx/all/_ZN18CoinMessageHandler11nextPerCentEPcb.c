char *__fastcall CoinMessageHandler::nextPerCent(char **this, char *a2, char a3)
{
  const char *v3; // rbp
  char *v4; // rax
  char *v5; // rbx
  size_t v7; // r13
  char v8; // al
  char *v9; // rax
  const char *v10; // rbp

  if ( a2 )
  {
    v3 = a2;
    if ( a3 )
    {
      while ( 1 )
      {
        v9 = strchr(v3, 37);
        v5 = v9;
        if ( !v9 )
          break;
        if ( *((_DWORD *)this + 392) )
        {
          v8 = v9[1];
          if ( v8 == 63 )
          {
LABEL_15:
            *v5 = 0;
            return v5;
          }
        }
        else
        {
          v7 = (int)v9 - (int)v3;
          strncpy(*(this + 194), v3, v7);
          *(this + 194) += v7;
          v8 = v5[1];
          if ( v8 == 63 )
            goto LABEL_15;
        }
        if ( v8 != 37 )
          return v5;
        v3 = v5 + 2;
        *(*(this + 194))++ = 37;
      }
      if ( !*((_DWORD *)this + 392) )
      {
        strcpy(*(this + 194), v3);
        v10 = *(this + 194);
        *(this + 194) = (char *)&v10[strlen(v10)];
        return v5;
      }
    }
    else
    {
      while ( 1 )
      {
        v4 = strchr(v3, 37);
        v5 = v4;
        if ( !v4 )
          break;
        if ( v4[1] != 37 )
          goto LABEL_15;
        v3 = v4 + 2;
      }
    }
  }
  return nullptr;
}

