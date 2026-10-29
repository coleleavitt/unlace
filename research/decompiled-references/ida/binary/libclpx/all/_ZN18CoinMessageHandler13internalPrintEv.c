__int64 __fastcall CoinMessageHandler::internalPrint(__int64 (__fastcall ***this)(FILE **this))
{
  const char *v1; // rbp
  _BYTE *v2; // rax
  __int64 v3; // rdx
  _BYTE *v4; // rax
  char v5; // dl
  __int64 v6; // rcx
  char v7; // dl
  int v8; // eax
  char *v9; // rcx
  char *v10; // rsi
  _BYTE *v11; // rax
  char v12; // dl
  __int64 (__fastcall *v13)(FILE **); // rax
  __int64 result; // rax
  void (__fastcall *v15)(CoinMessageHandler *); // rdx
  unsigned int v16; // [rsp+Ch] [rbp-1Ch]

  v1 = (const char *)(this + 69);
  v2 = *(this + 194);
  if ( v2 <= (_BYTE *)this + 552 )
    return 0;
  *v2 = 0;
  v3 = (__int64)*(this + 194);
  v4 = (_BYTE *)(v3 - 1);
  *(this + 194) = (__int64 (__fastcall **)(FILE **))(v3 - 1);
  if ( (unsigned __int64)v1 <= v3 - 1 )
  {
    v5 = *(_BYTE *)(v3 - 1);
    if ( v5 == 44 || v5 == 32 )
    {
      do
      {
        *v4 = 0;
        v6 = (__int64)*(this + 194);
        v4 = (_BYTE *)(v6 - 1);
        *(this + 194) = (__int64 (__fastcall **)(FILE **))(v6 - 1);
        if ( (unsigned __int64)v1 > v6 - 1 )
          break;
        v7 = *(_BYTE *)(v6 - 1);
      }
      while ( v7 == 32 || v7 == 44 );
    }
  }
  if ( strstr((const char *)this + 552, "%%") )
  {
    v8 = strlen(v1);
    if ( v8 <= 0 )
    {
      v11 = this + 69;
    }
    else
    {
      v9 = (char *)(this + 69);
      v10 = (char *)this + (unsigned int)(v8 - 1) + 553;
      v11 = this + 69;
      do
      {
        while ( 1 )
        {
          v12 = *v9;
          if ( *v9 == 37 && v9[1] == 37 )
            break;
          ++v9;
          *v11++ = v12;
          if ( v9 == v10 )
            goto LABEL_15;
        }
        ++v9;
      }
      while ( v9 != v10 );
    }
LABEL_15:
    *v11 = 0;
  }
  v13 = **this;
  if ( v13 == CoinMessageHandler::print )
  {
    fprintf((FILE *)*(this + 197), "%s\n", v1);
    result = 0;
  }
  else
  {
    result = v13((FILE **)this);
  }
  v15 = (void (__fastcall *)(CoinMessageHandler *))(*this)[1];
  if ( v15 == CoinMessageHandler::checkSeverity )
  {
    if ( *((_BYTE *)this + 133) == 83 )
      sub_5C692((__int64)this);
  }
  else
  {
    v16 = result;
    v15((CoinMessageHandler *)this);
    return v16;
  }
  return result;
}

