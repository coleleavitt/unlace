__int64 __fastcall ClpSimplexOther::readBasis(ClpSimplexOther *this, const char *a2, double a3)
{
  char v3; // r14
  CoinMessageHandler *v4; // r12
  char v5; // al
  int Basis; // r12d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  char v10; // dl
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // dl
  FILE *v17; // rax
  CoinMessageHandler *v18; // rax
  CoinMessageHandler *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  CoinMessageHandler *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31[4]; // [rsp+0h] [rbp-180h] BYREF
  _BYTE v32[224]; // [rsp+20h] [rbp-160h] BYREF
  CoinMessageHandler *v33; // [rsp+100h] [rbp-80h]
  __int64 v34; // [rsp+110h] [rbp-70h] BYREF

  if ( strcmp(a2, "-") && strcmp(a2, "stdin") )
  {
    v17 = fopen(a2, "r");
    if ( !v17 )
    {
      Basis = -1;
      v25 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 43),
                                    40,
                                    (ClpSimplexOther *)((char *)this + 416));
      v30 = CoinMessageHandler::operator<<(v25, (__int64)a2, v26, v27, v28, v29, v31[0]);
      CoinMessageHandler::operator<<(v30, 0, a3);
      return (unsigned int)Basis;
    }
    fclose(v17);
  }
  CoinMpsIO::CoinMpsIO((CoinMpsIO *)v32);
  CoinMpsIO::passInMessageHandler((CoinMpsIO *)v32, *((CoinMessageHandler **)this + 43));
  CoinMessages::CoinMessages((CoinMessages *)v31, (ClpSimplexOther *)((char *)this + 448));
  CoinMessages::operator=(&v34, v31);
  CoinMessages::~CoinMessages((CoinMessages *)v31);
  v3 = CoinMessageHandler::prefix(v33);
  v4 = v33;
  v5 = CoinMessageHandler::prefix(*((CoinMessageHandler **)this + 43));
  CoinMessageHandler::setPrefix(v4, v5);
  Basis = CoinMpsIO::readBasis(
            (CoinMpsIO *)v32,
            (__int64)a2,
            (__int64)"",
            *((_QWORD *)this + 15),
            *((_QWORD *)this + 33) + *((int *)this + 27),
            *((_QWORD *)this + 33),
            (__int64)this + 392,
            *((_DWORD *)this + 27),
            (__int64)this + 368,
            *((_DWORD *)this + 26),
            v31[0]);
  CoinMessageHandler::setPrefix(v33, v3);
  if ( Basis < 0 )
  {
    v18 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  45,
                                  (ClpSimplexOther *)((char *)this + 416));
    v19 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v18);
    v24 = CoinMessageHandler::operator<<(v19, (__int64)a2, v20, v21, v22, v23, v31[0]);
    CoinMessageHandler::operator<<(v24, 0, a3);
  }
  else
  {
    v7 = *((int *)this + 26);
    if ( Basis )
    {
      memset(*((void **)this + 14), 0, 8 * v7);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(**((_QWORD **)this + 24) + 360LL))(
        *((_QWORD *)this + 24),
        *((_QWORD *)this + 15),
        *((_QWORD *)this + 14),
        -1.0);
    }
    else
    {
      if ( (int)v7 > 0 )
      {
        v8 = 0;
        v9 = (unsigned int)(v7 - 1) + 1LL;
        do
        {
          while ( 1 )
          {
            v10 = *(_BYTE *)(*((_QWORD *)this + 33) + (int)v8 + *((_DWORD *)this + 27)) & 7;
            if ( v10 != 3 )
              break;
            *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v8) = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v8);
            if ( v9 == ++v8 )
              goto LABEL_12;
          }
          if ( v10 == 2 )
            *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v8) = *(_QWORD *)(*((_QWORD *)this + 19) + 8 * v8);
          ++v8;
        }
        while ( v9 != v8 );
      }
LABEL_12:
      v11 = *((_DWORD *)this + 27);
      if ( v11 > 0 )
      {
        v12 = (unsigned int)(v11 - 1);
        v13 = 0;
        v14 = v12 + 1;
        do
        {
          while ( 1 )
          {
            v15 = *(_BYTE *)(*((_QWORD *)this + 33) + v13) & 7;
            if ( v15 != 3 )
              break;
            *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v13) = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v13);
            if ( ++v13 == v14 )
              goto LABEL_19;
          }
          if ( v15 == 2 )
            *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v13) = *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v13);
          ++v13;
        }
        while ( v13 != v14 );
      }
    }
  }
LABEL_19:
  CoinMpsIO::~CoinMpsIO((CoinMpsIO *)v32);
  return (unsigned int)Basis;
}

