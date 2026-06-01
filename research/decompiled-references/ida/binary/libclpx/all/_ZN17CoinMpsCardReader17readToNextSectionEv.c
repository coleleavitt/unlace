__int64 __fastcall CoinMpsCardReader::readToNextSection(CoinMpsCardReader *this, double a2)
{
  char *v3; // rbx
  char v4; // al
  __int64 v5; // r12
  CoinMessageHandler *v6; // rax
  CoinMessageHandler *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  size_t i; // rdx
  __int64 v14; // r14
  __int64 result; // rax
  CoinMpsCardReader *v16; // r12
  size_t v17; // rax
  CoinMessageHandler *v18; // rdi
  char *v19; // rax
  CoinMessageHandler *v20; // rax
  CoinMessageHandler *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  CoinMpsCardReader *v27; // rdx
  char v28; // al
  char *BlankOr; // rax
  char *v30; // rbx
  char *v31; // rdi
  char v32; // r13
  char *v33; // rdx
  __int64 v34; // [rsp+0h] [rbp-38h]

  while ( 1 )
  {
    if ( (unsigned int)CoinMpsCardReader::cleanCard(this) )
    {
      *((_DWORD *)this + 310) = 8;
      return 8;
    }
    v3 = (char *)this + 8;
    if ( !memcmp((char *)this + 8, "NAME", 4u)
      || !memcmp((char *)this + 8, "TIME", 4u)
      || !memcmp((char *)this + 8, "BASIS", 5u)
      || !memcmp((char *)this + 8, "STOCH", 5u) )
    {
      break;
    }
    v4 = *((_BYTE *)this + 8);
    if ( v4 != 42 && v4 != 35 )
    {
      v5 = 2;
      v6 = (CoinMessageHandler *)CoinMessageHandler::message(
                                   *((CoinMessageHandler **)this + 159),
                                   0,
                                   (CoinMpsCardReader *)((char *)this + 1280));
      v7 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v6);
      v12 = CoinMessageHandler::operator<<(v7, (__int64)this + 8, v8, v9, v10, v11, v34);
      CoinMessageHandler::operator<<(v12, 0, a2);
      for ( i = 3; ; i = strlen(*(const char **)((char *)&off_4CFF20 + v14 + 8)) )
      {
        v14 = 8 * v5;
        if ( !strncmp((const char *)this + 8, (const char *)*(&off_4CFF20 + v5), i) )
          break;
        if ( ++v5 == 14 )
        {
          result = 14;
          goto LABEL_13;
        }
      }
      result = (unsigned int)v5;
LABEL_13:
      *((_QWORD *)this + 111) = v3;
      *((_QWORD *)this + 112) = v3;
      *((_DWORD *)this + 310) = result;
      return result;
    }
  }
  *((_DWORD *)this + 310) = 1;
  v16 = (CoinMpsCardReader *)((char *)this + 13);
  v17 = strlen((const char *)this + 8);
  v18 = *((CoinMessageHandler **)this + 159);
  v19 = &v3[v17];
  *((_QWORD *)this + 112) = v19;
  *((_QWORD *)this + 111) = v19;
  v20 = (CoinMessageHandler *)CoinMessageHandler::message(v18, 0, (CoinMpsCardReader *)((char *)this + 1280));
  v21 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v20);
  v26 = CoinMessageHandler::operator<<(v21, (__int64)this + 8, v22, v23, v24, v25, v34);
  CoinMessageHandler::operator<<(v26, 0, a2);
  v27 = *((CoinMpsCardReader **)this + 112);
  if ( v27 <= (CoinMpsCardReader *)((char *)this + 13) )
  {
LABEL_23:
    *(_QWORD *)((char *)this + 1068) = 0x656D616E5F6F6ELL;
    return *((unsigned int *)this + 310);
  }
  v28 = *((_BYTE *)this + 13);
  if ( v28 == 9 || v28 == 32 )
  {
    do
    {
      v16 = (CoinMpsCardReader *)((char *)v16 + 1);
      if ( v27 == v16 )
        goto LABEL_23;
    }
    while ( *(_BYTE *)v16 == 32 || *(_BYTE *)v16 == 9 );
  }
  BlankOr = (char *)CoinMpsCardReader::nextBlankOr(v16, nullptr);
  v30 = BlankOr;
  v31 = (char *)this + 1068;
  if ( BlankOr )
  {
    v32 = *BlankOr;
    *BlankOr = 0;
    strcpy(v31, (const char *)v16);
    *v30 = v32;
    if ( strstr(v30, "FREEIEEE") )
    {
      *((_BYTE *)this + 1248) = 1;
      *((_DWORD *)this + 313) = 1;
      return *((unsigned int *)this + 310);
    }
    else if ( strstr(v30, "FREE") || strstr(v30, "VALUES") )
    {
      *((_BYTE *)this + 1248) = 1;
      return *((unsigned int *)this + 310);
    }
    else
    {
      v33 = strstr(v30, "IEEE");
      result = *((unsigned int *)this + 310);
      if ( v33 )
        *((_DWORD *)this + 313) = 1;
    }
  }
  else
  {
    strcpy(v31, (const char *)v16);
    return *((unsigned int *)this + 310);
  }
  return result;
}

