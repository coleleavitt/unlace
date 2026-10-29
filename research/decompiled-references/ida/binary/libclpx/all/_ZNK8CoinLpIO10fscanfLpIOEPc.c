__int64 __fastcall CoinLpIO::fscanfLpIO(CoinLpIO *this, char *a2, double a3)
{
  int v5; // r14d
  const char *v6; // r15
  char *v7; // rax
  int v8; // eax
  int v9; // r12d
  int v10; // r12d
  char *v11; // rcx
  int v12; // r14d
  size_t v13; // rdx
  int v14; // eax
  unsigned int v15; // r12d
  char *v17; // rsi
  char *v18; // rax
  CoinMessageHandler *v19; // rdi
  CoinMessageHandler *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  CoinMessageHandler *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *exception; // rax
  __int64 v33; // [rsp+0h] [rbp-48h]

  v5 = *((_DWORD *)this + 342);
  if ( v5 == *((_DWORD *)this + 341) )
  {
    if ( !(unsigned int)CoinLpIO::newCardLpIO(this) )
    {
      if ( *((_BYTE *)this + 1384) )
        return 0;
      v19 = *((CoinMessageHandler **)this + 1);
      *((_BYTE *)this + 1384) = 1;
      v20 = (CoinMessageHandler *)CoinMessageHandler::message(v19, 30, (CoinLpIO *)((char *)this + 24));
      v25 = CoinMessageHandler::operator<<(
              v20,
              (__int64)"### CoinLpIO::scan_next(): End inserted",
              v21,
              v22,
              v23,
              v24,
              v33);
      CoinMessageHandler::operator<<(v25, 0, a3);
      *(_DWORD *)a2 = 6581829;
    }
    v5 = *((_DWORD *)this + 342);
  }
  v6 = (char *)this + v5 + 336;
  v7 = strchr(v6, 32);
  if ( v7 )
  {
    v8 = (_DWORD)v7 - (_DWORD)v6;
    v9 = v8;
    if ( v8 )
    {
      v13 = v8;
      v11 = a2;
      v12 = 0;
      goto LABEL_6;
    }
  }
  v10 = *((_DWORD *)this + 341);
  if ( v10 < 0 )
  {
    v17 = (char *)this + v5 + 336;
    v12 = -v10 - v5;
    if ( v12 < 0 )
      v12 = 0;
    memcpy(a2, v17, v12);
    *((_DWORD *)this + 342) = *((_DWORD *)this + 341);
    if ( (unsigned int)CoinLpIO::newCardLpIO(this) )
    {
      v11 = &a2[v12];
      HIDWORD(v33) = *((_DWORD *)this + 342);
      v6 = (char *)this + SHIDWORD(v33) + 336;
      if ( *((_BYTE *)this + 336) == 32 )
      {
        v13 = 0;
        v9 = 0;
      }
      else
      {
        v18 = strchr((const char *)this + 336, 32);
        v11 = &a2[v12];
        if ( v18 )
        {
          v9 = (_DWORD)v18 - (_DWORD)v6;
          v13 = (int)v18 - (int)v6;
        }
        else
        {
          v9 = *((_DWORD *)this + 341) - HIDWORD(v33);
          v13 = v9;
        }
      }
      goto LABEL_6;
    }
    return 0;
  }
  v9 = v10 - v5;
  v11 = a2;
  v12 = 0;
  v13 = v9;
LABEL_6:
  memcpy(v11, v6, v13);
  v14 = v9 + *((_DWORD *)this + 342);
  *((_DWORD *)this + 342) = v14;
  if ( *((_BYTE *)this + v14 + 336) == 32 )
    *((_DWORD *)this + 342) = v14 + 1;
  v15 = v12 + v9;
  a2[v15] = 0;
  while ( (unsigned int)CoinLpIO::is_comment(this, a2) )
  {
    CoinLpIO::skip_comment(this, a2);
    if ( (int)CoinLpIO::fscanfLpIO(this, a2) <= 0 )
    {
      v26 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 1),
                                    30,
                                    (CoinLpIO *)((char *)this + 24));
      v31 = CoinMessageHandler::operator<<(
              v26,
              (__int64)"### CoinLpIO::scan_next(): field expected",
              v27,
              v28,
              v29,
              v30,
              v33);
      CoinMessageHandler::operator<<(v31, 0, a3);
      exception = __cxa_allocate_exception(8u);
      *exception = "bad fscanf";
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'char const*, nullptr);
    }
  }
  return v15;
}

