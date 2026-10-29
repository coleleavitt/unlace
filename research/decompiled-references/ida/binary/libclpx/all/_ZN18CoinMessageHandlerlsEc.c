CoinMessageHandler *__fastcall CoinMessageHandler::operator<<(CoinMessageHandler *this, char a2)
{
  int v2; // eax
  char *v3; // rbp
  _BYTE *v4; // rax
  __int64 PerCent; // rbp
  const char *v6; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  char *v10; // rax
  _BYTE *v11; // r9
  char *v12; // r14
  char *v13; // r15
  __int64 v14; // r8
  size_t v15; // rcx
  char *v16; // r13
  char *v17; // r8
  char *v18; // rbp
  const char *v19; // rbp
  char *v20; // rax
  size_t v21; // [rsp+8h] [rbp-50h]
  _BYTE *v22; // [rsp+8h] [rbp-50h]
  _BYTE *v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+10h] [rbp-48h]
  size_t v25; // [rsp+18h] [rbp-40h]

  v2 = *((_DWORD *)this + 392);
  if ( v2 != 3 )
  {
    v3 = *((char **)this + 8);
    if ( v3 == *((char **)this + 9) )
    {
      v8 = (unsigned __int64)&v3[-*((_QWORD *)this + 7)];
      if ( v8 == -1 )
        std::__throw_length_error("vector::_M_realloc_insert");
      v9 = 1;
      if ( v8 )
      {
        v9 = 2 * v8;
        if ( v8 > 2 * v8 )
          v9 = -1;
      }
      v10 = (char *)operator new(v9);
      v11 = *((_BYTE **)this + 7);
      v12 = &v10[v9];
      v13 = v10;
      v14 = v3 - v11;
      v15 = *((_QWORD *)this + 8) - (_QWORD)v3;
      v16 = &v10[v8];
      if ( v16 )
        *v16 = a2;
      if ( v14 )
      {
        v25 = v15;
        v24 = v3 - v11;
        v22 = v11;
        memmove(v10, v11, v3 - v11);
        v15 = v25;
        v14 = v24;
        v11 = v22;
      }
      v17 = &v13[v14 + 1];
      if ( v15 )
      {
        v23 = v11;
        v21 = v15;
        v20 = (char *)memcpy(v17, v3, v15);
        v11 = v23;
        v15 = v21;
        v17 = v20;
      }
      v18 = &v17[v15];
      if ( v11 )
        operator delete(v11);
      *((_QWORD *)this + 7) = v13;
      *((_QWORD *)this + 8) = v18;
      *((_QWORD *)this + 9) = v12;
      v2 = *((_DWORD *)this + 392);
    }
    else
    {
      if ( v3 )
      {
        *v3 = a2;
        v3 = *((char **)this + 8);
        v2 = *((_DWORD *)this + 392);
      }
      *((_QWORD *)this + 8) = v3 + 1;
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
          sprintf(*((char **)this + 194), *((const char **)this + 68), (unsigned int)a2);
          v6 = *((const char **)this + 194);
          *((_QWORD *)this + 194) = &v6[strlen(v6)];
        }
        *((_QWORD *)this + 68) = PerCent;
      }
      else
      {
        sprintf(*((char **)this + 194), " %c", (unsigned int)a2);
        v19 = *((const char **)this + 194);
        *((_QWORD *)this + 194) = &v19[strlen(v19)];
      }
    }
  }
  return this;
}

