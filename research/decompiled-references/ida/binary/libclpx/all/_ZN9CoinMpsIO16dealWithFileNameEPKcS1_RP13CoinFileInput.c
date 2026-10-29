int __fastcall CoinMpsIO::dealWithFileName(
        CoinMpsIO *this,
        const char *a2,
        const char *a3,
        CoinFileInput **a4,
        double a5)
{
  void *v7; // rbx
  int result; // eax
  const char *v9; // rax
  const std::string *v10; // rsi
  char v11; // al
  CoinMessageHandler *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // rsi
  __int64 v18; // rax
  int v19; // r10d
  char v20; // al
  const char *v21; // rax
  char v22; // dl
  __int64 v23; // [rsp+0h] [rbp-208h]
  char v24; // [rsp+8h] [rbp-200h]
  size_t v25; // [rsp+10h] [rbp-1F8h]
  char v26; // [rsp+2Fh] [rbp-1D9h] BYREF
  __int64 v27; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-1D0h] BYREF
  char s1[456]; // [rsp+40h] [rbp-1C8h] BYREF

  if ( *a4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    *a4 = nullptr;
  }
  v7 = *((void **)this + 21);
  if ( v7 )
  {
    if ( !a2 )
      return 0;
    result = strcmp(a2, *((const char **)this + 21));
    if ( !result )
      return result;
  }
  else if ( !a2 )
  {
    v12 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 28),
                                  8,
                                  (CoinMpsIO *)((char *)this + 240));
    v17 = "NULL";
LABEL_24:
    v18 = CoinMessageHandler::operator<<(v12, (__int64)v17, v13, v14, v15, v16, v23);
    CoinMessageHandler::operator<<(v18, 0, a5);
    return -1;
  }
  if ( !strcmp(a2, "stdin") || !strcmp(a2, "-") )
  {
    strcpy(s1, "stdin");
  }
  else
  {
    if ( a3 && *a3 )
    {
      v25 = strlen(a2);
      memcpy(s1, a2, v25 + 1);
      v19 = v25 - 1;
      if ( (int)v25 - 1 >= 0 )
      {
        v20 = a2[v19];
        if ( v20 != 92 && v20 != 47 )
        {
          if ( v20 == 46 )
            goto LABEL_9;
          v21 = &a2[v19 - 1];
          while ( &a2[v19 - 1 - v19] != v21 )
          {
            v22 = *v21;
            if ( *v21 == 47 || v22 == 92 )
              break;
            --v21;
            if ( v22 == 46 )
              goto LABEL_9;
          }
        }
      }
      s1[v25] = 46;
      strcpy(&s1[v25 + 1], a3);
      goto LABEL_9;
    }
    strcpy(s1, a2);
  }
LABEL_9:
  if ( !v7 || (result = strcmp(s1, (const char *)v7)) != 0 )
  {
    free(v7);
    v9 = (const char *)CoinStrdup(s1);
    *((_QWORD *)this + 21) = v9;
    if ( !strcmp(v9, "stdin") )
    {
      std::string::string();
      *a4 = (CoinFileInput *)CoinFileInput::create((CoinFileInput *)&v28, (const std::string *)"stdin");
      if ( (_UNKNOWN *)(v28 - 24) != &std::string::_Rep::_S_empty_rep_storage )
        sub_1F9DC0(v28 - 24);
    }
    else
    {
      std::string::string();
      std::string::string();
      v10 = (const std::string *)&v28;
      v11 = fileCoinReadable((std::string *)&v27, (const std::string *)&v28);
      if ( (_UNKNOWN *)(v28 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        v10 = (const std::string *)&v26;
        v24 = v11;
        sub_1F9DC0(v28 - 24);
        v11 = v24;
      }
      if ( !v11 )
      {
        if ( (_UNKNOWN *)(v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
          sub_1F9DC0(v27 - 24);
        v12 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 28),
                                      8,
                                      (CoinMpsIO *)((char *)this + 240));
        v17 = *((const char **)this + 21);
        goto LABEL_24;
      }
      *a4 = (CoinFileInput *)CoinFileInput::create((CoinFileInput *)&v27, v10);
      if ( (_UNKNOWN *)(v27 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        sub_1F9DC0(v27 - 24);
        return 1;
      }
    }
    return 1;
  }
  return result;
}

