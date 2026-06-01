// Alternative name is '_ZN12CoinMessagesC1ERKS_'
void __fastcall CoinMessages::CoinMessages(CoinMessages *this, const CoinMessages *a2)
{
  size_t v3; // rbp
  const char *v5; // rsi
  char *v6; // rdi
  int v7; // edx
  __int64 v8; // rbp
  CoinOneMessage *v9; // r13
  const void *v10; // r13
  void *v11; // rax
  char *v12; // rax
  char *v13; // rcx
  char *v14; // r8
  char *v15; // r8
  __int64 v16; // rdi
  int v17; // esi
  char *v18; // rax
  __int64 v19; // rdx

  v3 = *(int *)a2;
  v5 = (char *)a2 + 8;
  v6 = (char *)this + 8;
  *((_DWORD *)v6 - 2) = v3;
  *((_DWORD *)v6 - 1) = *((_DWORD *)v5 - 1);
  strcpy(v6, v5);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 5) = v7;
  if ( v7 >= 0 )
  {
    v10 = *((const void **)a2 + 3);
    if ( v10 )
    {
      v3 = v7;
      v11 = (void *)operator new[](v7);
      v12 = (char *)memcpy(v11, v10, v3);
      LODWORD(v3) = *(_DWORD *)this;
      v13 = v12;
      v14 = v12;
    }
    else
    {
      v14 = nullptr;
      v13 = nullptr;
    }
    *((_QWORD *)this + 3) = v13;
    v15 = &v14[-*((_QWORD *)a2 + 3)];
    if ( (int)v3 > 0 )
    {
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = &v13[v16];
        v19 = *(_QWORD *)&v13[v16];
        if ( v19 )
        {
          ++v17;
          v16 += 8;
          *(_QWORD *)v18 = &v15[v19];
          LODWORD(v3) = *(_DWORD *)this;
          if ( v17 >= *(_DWORD *)this )
            return;
        }
        else
        {
          ++v17;
          v16 += 8;
          if ( v17 >= (int)v3 )
            return;
        }
        v13 = *((char **)this + 3);
      }
    }
  }
  else if ( (_DWORD)v3 )
  {
    if ( v3 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    *((_QWORD *)this + 3) = operator new[](8 * v3);
    if ( *(int *)this > 0 )
    {
      v8 = 0;
      do
      {
        if ( *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v8) )
        {
          v9 = (CoinOneMessage *)operator new(0x198u);
          CoinOneMessage::CoinOneMessage(v9, *(const CoinOneMessage **)(*((_QWORD *)a2 + 3) + 8 * v8));
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v8) = v9;
        }
        else
        {
          *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v8) = 0;
        }
        ++v8;
      }
      while ( *(_DWORD *)this > (int)v8 );
    }
  }
  else
  {
    *((_QWORD *)this + 3) = 0;
  }
}

