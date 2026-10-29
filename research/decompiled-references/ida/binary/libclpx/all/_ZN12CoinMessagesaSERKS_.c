__int64 __fastcall CoinMessages::operator=(__int64 a1, const char *a2)
{
  char *v3; // rdi
  int v4; // edx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // r8
  int v7; // edx
  __int64 v8; // r12
  CoinOneMessage *v9; // r13
  int v11; // eax
  __int64 v12; // r12
  CoinOneMessage *v13; // r13
  const void *v14; // r13
  size_t v15; // r12
  void *v16; // rax
  char *v17; // rax
  char *v18; // rcx
  char *v19; // r9
  char *v20; // r9
  __int64 v21; // rdi
  int v22; // esi
  char *v23; // rax
  __int64 v24; // rdx

  if ( (const char *)a1 == a2 )
    return a1;
  v3 = (char *)(a1 + 8);
  *((_DWORD *)v3 - 1) = *((_DWORD *)a2 + 1);
  strcpy(v3, a2 + 8);
  v4 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 16) = *((_DWORD *)a2 + 4);
  if ( v4 < 0 )
  {
    v11 = *(_DWORD *)a1;
    v5 = *(_QWORD **)(a1 + 24);
    if ( *(int *)a1 > 0 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = (CoinOneMessage *)v5[v12];
        if ( v13 )
          break;
LABEL_20:
        if ( (int)++v12 >= v11 )
          goto LABEL_4;
      }
      while ( 1 )
      {
        CoinOneMessage::~CoinOneMessage(v13);
        operator delete(v13);
        v11 = *(_DWORD *)a1;
        ++v12;
        v5 = *(_QWORD **)(a1 + 24);
        if ( (int)v12 >= *(_DWORD *)a1 )
          break;
        v13 = (CoinOneMessage *)v5[v12];
        if ( !v13 )
          goto LABEL_20;
      }
    }
  }
  else
  {
    v5 = *(_QWORD **)(a1 + 24);
  }
LABEL_4:
  if ( v5 )
    operator delete[](v5);
  v6 = *(int *)a2;
  *(_DWORD *)a1 = v6;
  v7 = *((_DWORD *)a2 + 5);
  *(_DWORD *)(a1 + 20) = v7;
  if ( v7 >= 0 )
  {
    v14 = *((const void **)a2 + 3);
    if ( v14 )
    {
      v15 = v7;
      v16 = (void *)operator new[](v7);
      v17 = (char *)memcpy(v16, v14, v15);
      LODWORD(v6) = *(_DWORD *)a1;
      v18 = v17;
      v19 = v17;
    }
    else
    {
      v19 = nullptr;
      v18 = nullptr;
    }
    *(_QWORD *)(a1 + 24) = v18;
    v20 = &v19[-*((_QWORD *)a2 + 3)];
    if ( (int)v6 > 0 )
    {
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        v23 = &v18[v21];
        v24 = *(_QWORD *)&v18[v21];
        if ( v24 )
        {
          ++v22;
          v21 += 8;
          *(_QWORD *)v23 = &v20[v24];
          LODWORD(v6) = *(_DWORD *)a1;
          if ( v22 >= *(_DWORD *)a1 )
            return a1;
        }
        else
        {
          ++v22;
          v21 += 8;
          if ( v22 >= (int)v6 )
            return a1;
        }
        v18 = *(char **)(a1 + 24);
      }
    }
    return a1;
  }
  if ( (_DWORD)v6 )
  {
    if ( v6 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    *(_QWORD *)(a1 + 24) = operator new[](8 * v6);
    if ( *(int *)a1 > 0 )
    {
      v8 = 0;
      do
      {
        while ( *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v8) )
        {
          v9 = (CoinOneMessage *)operator new(0x198u);
          CoinOneMessage::CoinOneMessage(v9, *(const CoinOneMessage **)(*((_QWORD *)a2 + 3) + 8 * v8));
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v8++) = v9;
          if ( *(_DWORD *)a1 <= (int)v8 )
            return a1;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v8++) = 0;
      }
      while ( *(_DWORD *)a1 > (int)v8 );
    }
    return a1;
  }
  *(_QWORD *)(a1 + 24) = 0;
  return a1;
}

