void __fastcall CoinMessages::toCompact(CoinMessages *this)
{
  int v1; // edx
  int v2; // r15d
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rbp
  int v7; // eax
  int v8; // esi
  __int64 v9; // r14
  int v10; // r12d
  int v11; // edx
  char *v12; // r12
  _QWORD *v13; // rdi
  __int64 v14; // rbp
  int v15; // eax
  signed __int64 v16; // rcx
  __int64 v17; // r10
  int v18; // r9d
  int v19; // eax
  __int64 v20; // rbp
  void *v21; // r12
  __int64 v22; // [rsp+0h] [rbp-1F0h]
  int v23; // [rsp+8h] [rbp-1E8h]
  unsigned int v24; // [rsp+Ch] [rbp-1E4h]
  int v25; // [rsp+10h] [rbp-1E0h]
  _BYTE src[6]; // [rsp+18h] [rbp-1D8h] BYREF
  char v27[466]; // [rsp+1Eh] [rbp-1D2h] BYREF

  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this && *((int *)this + 5) < 0 )
  {
    v2 = 8 * v1;
    *((_DWORD *)this + 5) = 8 * v1;
    if ( v1 > 0 )
    {
      v4 = *((_QWORD *)this + 3);
      v5 = v4 + 8;
      v6 = v4 + 8 + 8LL * (unsigned int)(v1 - 1);
      while ( 1 )
      {
        if ( *(_QWORD *)v4 )
        {
          v7 = strlen((const char *)(*(_QWORD *)v4 + 6LL)) + 7;
          v8 = v7;
          if ( v7 % 8 )
            v8 = v7 + 8 - v7 % 8;
          v2 += v8;
          *((_DWORD *)this + 5) = v2;
        }
        v4 = v5;
        if ( v6 == v5 )
          break;
        v5 += 8;
      }
    }
    v9 = operator new[](v2);
    v10 = 8 * *(_DWORD *)this;
    CoinOneMessage::CoinOneMessage((CoinOneMessage *)src);
    v11 = *(_DWORD *)this;
    v12 = (char *)(v9 + v10);
    *((_DWORD *)this + 5) = 8 * *(_DWORD *)this;
    if ( v11 <= 0 )
    {
      v13 = *((_QWORD **)this + 3);
    }
    else
    {
      v13 = *((_QWORD **)this + 3);
      v14 = 0;
      do
      {
        while ( !v13[v14] )
        {
          *(_QWORD *)(v9 + 8 * v14++) = 0;
          v19 = v11;
          if ( v11 <= (int)v14 )
            goto LABEL_19;
        }
        CoinOneMessage::operator=(src);
        v15 = strlen(v27);
        v16 = &v27[v15 + 1] - src;
        v24 = (unsigned int)v27 + v15 + 1 - (unsigned int)src;
        v22 = (int)v16;
        v25 = v16;
        v23 = (int)v16 % 8;
        memcpy(v12, src, (int)v16);
        *(_QWORD *)(v9 + 8 * v14) = v12;
        v17 = v22;
        v18 = v24;
        if ( v23 )
        {
          v18 = v25 - v23 + 8;
          v17 = v18;
        }
        v11 = *(_DWORD *)this;
        v12 += v17;
        *((_DWORD *)this + 5) += v18;
        ++v14;
        v13 = *((_QWORD **)this + 3);
        v19 = v11;
      }
      while ( v11 > (int)v14 );
LABEL_19:
      if ( v19 > 0 )
      {
        v20 = 0;
        do
        {
          while ( 1 )
          {
            v21 = (void *)v13[v20];
            if ( !v21 )
              break;
            CoinOneMessage::~CoinOneMessage((CoinOneMessage *)v13[v20]);
            operator delete(v21);
            v19 = *(_DWORD *)this;
            ++v20;
            v13 = *((_QWORD **)this + 3);
            if ( (int)v20 >= *(_DWORD *)this )
              goto LABEL_23;
          }
          ++v20;
        }
        while ( (int)v20 < v19 );
      }
    }
LABEL_23:
    if ( v13 )
      operator delete[](v13);
    *((_QWORD *)this + 3) = v9;
    CoinOneMessage::~CoinOneMessage((CoinOneMessage *)src);
  }
}

